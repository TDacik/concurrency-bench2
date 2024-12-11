// #anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22
// file printf-args.h line 49
enum anonymous_12 { TYPE_NONE=0, TYPE_SCHAR=1, TYPE_UCHAR=2, TYPE_SHORT=3, TYPE_USHORT=4, TYPE_INT=5, TYPE_UINT=6, TYPE_LONGINT=7, TYPE_ULONGINT=8, TYPE_LONGLONGINT=9, TYPE_ULONGLONGINT=10, TYPE_DOUBLE=11, TYPE_LONGDOUBLE=12, TYPE_CHAR=13, TYPE_WIDE_CHAR=14, TYPE_STRING=15, TYPE_WIDE_STRING=16, TYPE_POINTER=17, TYPE_COUNT_SCHAR_POINTER=18, TYPE_COUNT_SHORT_POINTER=19, TYPE_COUNT_INT_POINTER=20, TYPE_COUNT_LONGINT_POINTER=21, TYPE_COUNT_LONGLONGINT_POINTER=22 };

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_19;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_17;

// tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]
// file printf-parse.h line 53
struct anonymous_3;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_11;

// tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]
// file printf-args.h line 91
struct anonymous_2;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_7;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_13;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_16;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_15;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_21;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_14;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_18;

// tag-#anon#ST[U64'count'||*{SYM#tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]#}_SYM#tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]#_'dir'||U64'max_width_length'||U64'max_precision_length'||ARR7{SYM#tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]#}_SYM#tag-#anon#ST[*{cS8}_cS8_'dir_start'||*{cS8}_cS8_'dir_end'||S32'flags'||U32'_pad0'||*{cS8}_cS8_'width_start'||*{cS8}_cS8_'width_end'||U64'width_arg_index'||*{cS8}_cS8_'precision_start'||*{cS8}_cS8_'precision_end'||U64'precision_arg_index'||S8'conversion'||U56'_pad1'||U64'arg_index'|]#_'direct_alloc_dir'|]
// file printf-parse.h line 70
struct anonymous_10;

// tag-#anon#ST[U64'count'||*{SYM#tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]#}_SYM#tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]#_'arg'||ARR7{SYM#tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]#}_SYM#tag-#anon#ST[EN#anon_enum_TYPE_NONE=0_TYPE_SCHAR=1_TYPE_UCHAR=2_TYPE_SHORT=3_TYPE_USHORT=4_TYPE_INT=5_TYPE_UINT=6_TYPE_LONGINT=7_TYPE_ULONGINT=8_TYPE_LONGLONGINT=9_TYPE_ULONGLONGINT=10_TYPE_DOUBLE=11_TYPE_LONGDOUBLE=12_TYPE_CHAR=13_TYPE_WIDE_CHAR=14_TYPE_STRING=15_TYPE_WIDE_STRING=16_TYPE_POINTER=17_TYPE_COUNT_SCHAR_POINTER=18_TYPE_COUNT_SHORT_POINTER=19_TYPE_COUNT_INT_POINTER=20_TYPE_COUNT_LONGINT_POINTER=21_TYPE_COUNT_LONGLONGINT_POINTER=22#{U32}_U32_'type'||U96'_pad0'||SYM#tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]#'a'|]#_'direct_alloc_arg'|]
// file printf-args.h line 141
struct anonymous_1;

// tag-#anon#ST[r*{*{SYM#tag-detached_bitstream#}_SYM#tag-detached_bitstream#_}_*{SYM#tag-detached_bitstream#}_SYM#tag-detached_bitstream#__'root'||U32'size'||U32'_pad0'|]
// file expand.c line 161
struct anonymous_33;

// tag-#anon#ST[r*{*{SYM#tag-emit_blk#}_SYM#tag-emit_blk#_}_*{SYM#tag-emit_blk#}_SYM#tag-emit_blk#__'root'||U32'size'||U32'_pad0'|]
// file expand.c line 155
struct anonymous_29;

// tag-#anon#ST[r*{*{SYM#tag-in_blk#}_SYM#tag-in_blk#_}_*{SYM#tag-in_blk#}_SYM#tag-in_blk#__'root'||U32'size'||U32'_pad0'|]
// file compress.c line 56
struct anonymous_23;

// tag-#anon#ST[r*{*{SYM#tag-in_blk#}_SYM#tag-in_blk#_}_*{SYM#tag-in_blk#}_SYM#tag-in_blk#__'root'||U32'size'||U32'modulus'||U32'head'||U32'_pad0'|]_link1
// file expand.c line 150
struct anonymous_27;

// tag-#anon#ST[r*{*{SYM#tag-out_blk#}_SYM#tag-out_blk#_}_*{SYM#tag-out_blk#}_SYM#tag-out_blk#__'root'||U32'size'||U32'_pad0'|]
// file expand.c line 156
struct anonymous_30;

// tag-#anon#ST[r*{*{SYM#tag-retr_blk#}_SYM#tag-retr_blk#_}_*{SYM#tag-retr_blk#}_SYM#tag-retr_blk#__'root'||U32'size'||U32'_pad0'|]
// file expand.c line 154
struct anonymous_28;

// tag-#anon#ST[r*{*{SYM#tag-unord_blk#}_SYM#tag-unord_blk#_}_*{SYM#tag-unord_blk#}_SYM#tag-unord_blk#__'root'||U32'size'||U32'_pad0'|]
// file expand.c line 158
struct anonymous_32;

// tag-#anon#ST[r*{*{SYM#tag-work_blk#}_SYM#tag-work_blk#_}_*{SYM#tag-work_blk#}_SYM#tag-work_blk#__'root'||U32'size'||U32'_pad0'|]
// file compress.c line 57
struct anonymous_24;

// tag-#anon#ST[r*{SYM#tag-block#}_SYM#tag-block#_'root'||U32'size'||U32'modulus'||U32'head'||U32'_pad0'|]
// file process.c line 236
struct anonymous_9;

// tag-#anon#ST[r*{SYM#tag-head_blk#}_SYM#tag-head_blk#_'root'||U32'size'||U32'modulus'||U32'head'||U32'_pad0'|]
// file expand.c line 157
struct anonymous_31;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_22;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_20;

// tag-#anon#UN[F128'value'||ARR4{U32}_U32_'word'|]
// file isnan.c line 80
union anonymous_25;

// tag-#anon#UN[S8'a_schar'||U8'a_uchar'||S16'a_short'||U16'a_ushort'||S32'a_int'||U32'a_uint'||S64'a_longint'||U64'a_ulongint'||S64'a_longlongint'||U64'a_ulonglongint'||F32'a_float'||F64'a_double'||F128'a_longdouble'||S32'a_char'||U32'a_wide_char'||*{cS8}_cS8_'a_string'||*{cS32}_cS32_'a_wide_string'||*{V}_V_'a_pointer'||*{S8}_S8_'a_count_schar_pointer'||*{S16}_S16_'a_count_short_pointer'||*{S32}_S32_'a_count_int_pointer'||*{S64}_S64_'a_count_longint_pointer'||*{S64}_S64_'a_count_longlongint_pointer'|]
// file printf-args.h line 94
union anonymous_4;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_8;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_6;

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

// tag-_trbudget_t
// file divbwt.c line 1116
struct _trbudget_t;

// tag-arg
// file main.c line 283
struct arg;

// tag-bitstream
// file decode.h line 38
struct bitstream_0;

// tag-bitstream_link1
// file decode.h line 38
struct bitstream;

// tag-block
// file process.c line 230
struct block;

// tag-decoder_state
// file decode.h line 48
struct decoder_state;

// tag-detached_bitstream
// file expand.c line 104
struct detached_bitstream;

// tag-emit_blk
// file expand.c line 126
struct emit_blk;

// tag-encoder_state
// file encode.h line 27
struct encoder_state;

// tag-filespec
// file main.h line 38
struct filespec;

// tag-head_blk
// file expand.c line 133
struct head_blk;

// tag-header
// file decode.h line 22
struct header;

// tag-in_blk
// file compress.c line 33
struct in_blk;

// tag-in_blk_link1
// file decode.h line 36
struct in_blk_0;

// tag-out_blk
// file expand.c line 138
struct out_blk;

// tag-outmode
// file main.c line 140
enum outmode { OM_STDOUT=0, OM_DISCARD=1, OM_REGF=2 };

// tag-parser_state
// file decode.h line 28
struct parser_state;

// tag-position
// file process.h line 45
struct position;

// tag-process
// file process.h line 33
struct process;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-retr_blk
// file expand.c line 119
struct retr_blk;

// tag-retriever_internal_state
// file decode.h line 49
struct retriever_internal_state;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-suffix
// file main.c line 630
struct suffix;

// tag-task
// file process.h line 24
struct task;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-tree
// file decode.c line 83
struct tree;

// tag-unord_blk
// file expand.c line 112
struct unord_blk;

// tag-work_blk
// file compress.c line 44
struct work_blk;

#include <assert.h>
#include <math.h>
#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// _exit
// file /usr/include/unistd.h line 603
extern void _exit(signed int);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// advance
// file expand.c line 348
static void advance(struct detached_bitstream bs);
// asnprintf
// file asnprintf.c line 25
extern char * asnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, ...);
// assign_codes
// file encode.c line 876
static unsigned int assign_codes(unsigned int *code, unsigned char *length, const unsigned int *frequency, unsigned int as);
// attach
// file expand.c line 255
static struct bitstream attach(struct detached_bitstream dbs);
// bailout
// file signals.h line 27
void bailout(void);
// bits_init
// file expand.c line 230
static struct detached_bitstream bits_init(unsigned long int offset);
// build_tree
// file encode.c line 568
static void build_tree(unsigned int * restrict tree, unsigned long int * restrict weight, signed int as);
// bzero
// file /usr/include/string.h line 458
extern void bzero(void *, unsigned long int);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// can_attach
// file expand.c line 246
static _Bool can_attach(struct detached_bitstream bs);
// can_collect
// file compress.c line 67
static _Bool can_collect(void);
// can_collect_seq
// file compress.c line 120
static _Bool can_collect_seq(void);
// can_emit
// file expand.c line 644
static _Bool can_emit(void);
// can_parse
// file expand.c line 387
static _Bool can_parse(void);
// can_reorder
// file compress.c line 225
static _Bool can_reorder(void);
// can_reorder_link1
// file expand.c line 695
static _Bool can_reorder_link1(void);
// can_retrieve
// file expand.c line 547
static _Bool can_retrieve(void);
// can_scan
// file expand.c line 744
static _Bool can_scan(void);
// can_terminate
// file compress.c line 247
static _Bool can_terminate(void);
// can_terminate_link1
// file expand.c line 818
static _Bool can_terminate_link1(void);
// can_transmit
// file compress.c line 197
static _Bool can_transmit(void);
// cleanup
// file main.c line 63
void cleanup(void);
// cli
// file signals.h line 23
void cli(void);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// collect
// file encode.h line 30
signed int collect(struct encoder_state *s, const unsigned char *inbuf, unsigned long int *buf_sz);
// compute_depths
// file encode.c line 613
static void compute_depths(unsigned int * restrict count, unsigned int * restrict tree, unsigned int as);
// construct_BWT
// file divbwt.c line 1688
static signed int construct_BWT(const unsigned char *T, signed int *SA, signed int *bucket_A, signed int *bucket_B, signed int n);
// copy
// file process.c line 567
static void copy(void);
// copy_on_input_avail
// file process.c line 536
static void copy_on_input_avail(void *buffer, unsigned long int size);
// copy_on_write_complete
// file process.c line 547
static void copy_on_write_complete(void *buffer);
// copy_terminate
// file process.c line 558
static _Bool copy_terminate(void);
// decimal_point_char
// file vasnprintf.c line 274
static char decimal_point_char(void);
// decode
// file decode.c line 852
void decode(struct decoder_state *ds);
// decoder_free
// file decode.c line 1152
void decoder_free(struct decoder_state *ds);
// decoder_init
// file decode.c line 1141
void decoder_init(struct decoder_state *ds);
// detach
// file expand.c line 307
static struct detached_bitstream detach(struct bitstream bs);
// display
// file main.c line 135
void display(const char *fmt, ...);
// divbwt
// file divbwt.c line 1760
signed int divbwt(unsigned char *T, signed int *SA, signed int n);
// do_collect
// file compress.c line 74
static void do_collect(void);
// do_collect_seq
// file compress.c line 127
static void do_collect_seq(void);
// do_emit
// file expand.c line 653
static void do_emit(void);
// do_mtf
// file encode.c line 356
static unsigned int do_mtf(unsigned short int *mtfv, unsigned int *mtffreq, unsigned char *cmap, signed int nblock, signed int EOB);
// do_parse
// file expand.c line 394
static void do_parse(void);
// do_reorder
// file compress.c line 232
static void do_reorder(void);
// do_reorder_link1
// file expand.c line 704
static void do_reorder_link1(void);
// do_retrieve
// file expand.c line 553
static void do_retrieve(void);
// do_scan
// file expand.c line 751
static void do_scan(void);
// do_transmit
// file compress.c line 205
static void do_transmit(void);
// down_heap
// file process.h line 205
void down_heap(void *vroot, unsigned int size);
// dtotimespec
// file ../lib/timespec.h line 97
struct timespec dtotimespec(double sec);
// emit
// file decode.c line 942
signed int emit(struct decoder_state *ds, void *buf, unsigned long int *buf_sz);
// encode
// file encode.h line 31
unsigned long int encode(struct encoder_state *s, unsigned int *crc);
// encoder_init
// file encode.h line 29
struct encoder_state * encoder_init(unsigned long int max_block_size, unsigned int cluster_factor);
// err2str
// file expand.c line 69
static const char * err2str(signed int err);
// fail
// file main.c line 131
void fail(const char *fmt, ...);
// failf
// file main.h line 79
void failf(struct filespec *f, const char *fmt, ...);
// failfx
// file main.c line 134
void failfx(struct filespec *f, signed int x, const char *fmt, ...);
// failx
// file main.c line 133
void failx(signed int x, const char *fmt, ...);
// fchmod
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 296
extern signed int fchmod(signed int, unsigned int);
// fchown
// file /usr/include/unistd.h line 478
extern signed int fchown(signed int, unsigned int, unsigned int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdutimens
// file ../lib/utimens.h line 21
signed int fdutimens(signed int fd, const char *file, struct timespec *timespec);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// find_best_tree
// file encode.c line 840
static signed int find_best_tree(const unsigned short int *gs, unsigned int nt, const unsigned long int *len_pack);
// flockfile
// file /usr/include/stdio.h line 912
extern void flockfile(struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// frexp
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 103
extern double frexp(double, signed int *);
// frexpl
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 103
extern long double frexpl(long double, signed int *);
// fseterr
// file fseterr.h line 37
extern void fseterr(struct _IO_FILE *fp);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 213
extern signed int fstat(signed int, struct stat *);
// funlockfile
// file /usr/include/stdio.h line 919
extern void funlockfile(struct _IO_FILE *);
// futimens
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 371
extern signed int futimens(signed int, struct timespec *);
// futimesat
// file /usr/include/x86_64-linux-gnu/sys/time.h line 154
extern signed int futimesat(signed int, const char *, struct timeval *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// generate_initial_trees
// file encode.c line 773
static void generate_initial_trees(struct encoder_state *s, unsigned int nm, unsigned int nt);
// generate_prefix_code
// file encode.c line 999
unsigned int generate_prefix_code(struct encoder_state *s);
// get_stat_atime
// file ../lib/stat-time.h line 112
inline struct timespec get_stat_atime(struct stat *st);
// get_stat_atime_ns
// file ../lib/stat-time.h line 58
inline signed long int get_stat_atime_ns(struct stat *st);
// get_stat_birthtime
// file ../lib/stat-time.h line 155
inline struct timespec get_stat_birthtime(struct stat *st);
// get_stat_birthtime_ns
// file ../lib/stat-time.h line 97
inline signed long int get_stat_birthtime_ns(struct stat *st);
// get_stat_ctime
// file ../lib/stat-time.h line 126
inline struct timespec get_stat_ctime(struct stat *st);
// get_stat_ctime_ns
// file ../lib/stat-time.h line 71
inline signed long int get_stat_ctime_ns(struct stat *st);
// get_stat_mtime
// file ../lib/stat-time.h line 140
inline struct timespec get_stat_mtime(struct stat *st);
// get_stat_mtime_ns
// file ../lib/stat-time.h line 84
inline signed long int get_stat_mtime_ns(struct stat *st);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gettime
// file ../lib/timespec.h line 107
void gettime(struct timespec *ts);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// halt
// file signals.h line 25
void halt(void);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// index
// file /usr/include/string.h line 488
extern char * index(const char *, signed int);
// info
// file main.c line 123
void info(const char *fmt, ...);
// infof
// file main.c line 124
void infof(struct filespec *f, const char *fmt, ...);
// infofx
// file main.c line 126
void infofx(struct filespec *f, signed int x, const char *fmt, ...);
// infox
// file main.c line 125
void infox(signed int x, const char *fmt, ...);
// init
// file compress.c line 318
static void init(void);
// init_link1
// file expand.c line 880
static void init_link1(void);
// init_io
// file process.c line 473
static void init_io(void);
// input_init
// file main.c line 699
static signed int input_init(struct arg *operand, struct stat *sbuf);
// input_oprnd_rm
// file main.c line 760
static void input_oprnd_rm(struct arg *operand);
// input_uninit
// file main.c line 771
static void input_uninit(void);
// is_infinite_or_zerol
// file vasnprintf.c line 311
static signed int is_infinite_or_zerol(long double x);
// isatty
// file /usr/include/unistd.h line 779
extern signed int isatty(signed int);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// ldexp
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 106
extern double ldexp(double, signed int);
// ldexpl
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 106
extern long double ldexpl(long double, signed int);
// log_generic
// file main.c line 90
static void log_generic(struct filespec *fs, signed int code, const char *fmt, void **args, signed int nl);
// lstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 262
extern signed int lstat(const char *, struct stat *);
// lutimens
// file utimens.c line 429
signed int lutimens(const char *file, struct timespec *timespec);
// make_code_lengths
// file encode.c line 707
static void make_code_lengths(unsigned char *length, unsigned int *frequency, unsigned int as);
// make_map_e
// file encode.c line 336
static unsigned int make_map_e(unsigned char *cmap, const _Bool *inuse);
// make_timespec
// file ../lib/timespec.h line 41
inline struct timespec make_timespec(signed long int s, signed long int ns);
// make_tree
// file decode.c line 191
static void make_tree(struct retriever_internal_state *rs);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mtf_one
// file decode.c line 440
static unsigned char mtf_one(unsigned char **imtf_row, unsigned char *imtf_slide, unsigned char c);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// on_input_avail
// file compress.c line 255
static void on_input_avail(void *buffer, unsigned long int size);
// on_input_avail_link1
// file expand.c line 827
static void on_input_avail_link1(void *buffer_link1, unsigned long int size_link1);
// on_write_complete
// file compress.c line 273
static void on_write_complete(void *buffer);
// on_write_complete_link1
// file expand.c line 866
static void on_write_complete_link1(void *buffer_link1);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opts_decompress
// file main.c line 307
static void opts_decompress(char ch);
// opts_outmode
// file main.c line 290
static void opts_outmode(char ch);
// opts_setup
// file main.c line 318
static void opts_setup(struct arg **operands, unsigned long int argc, char **argv);
// output_init
// file main.c line 792
static signed int output_init(struct arg *operand, struct stat *sbuf);
// output_regf_uninit
// file main.c line 863
static void output_regf_uninit(signed int outfd, struct stat *sbuf);
// package_merge
// file encode.c line 654
static void package_merge(unsigned short int (*tree)[21l], unsigned int * restrict count, const unsigned long int * restrict leaf_weight, unsigned long int as);
// parse
// file parse.c line 147
signed int parse(struct parser_state * restrict ps, struct header * restrict hd, struct bitstream_0 *bs, unsigned int *garbage);
// parser_init
// file decode.h line 71
void parser_init(struct parser_state *ps, signed int my_bs100k);
// primary_thread
// file process.c line 500
static void primary_thread(void);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// printf_fetchargs
// file printf-args.c line 36
extern signed int printf_fetchargs(__builtin_va_list args, struct anonymous_1 *a);
// printf_frexp
// file printf-frexp.c line 67
extern double printf_frexp(double x, signed int *expptr);
// printf_frexpl
// file printf-frexp.c line 67
extern long double printf_frexpl(long double x, signed int *expptr);
// printf_parse
// file printf-parse.c line 83
extern signed int printf_parse(const char *format, struct anonymous_10 *d, struct anonymous_1 *a);
// promote
// file signals.c line 264
static void promote(void);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_8 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_8 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_8 *, union anonymous_6 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_equal
// file /usr/include/pthread.h line 280
extern signed int pthread_equal(unsigned long int, unsigned long int);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_6 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_6 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_11 *, struct anonymous_11 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// retrieve
// file decode.c line 519
signed int retrieve(struct decoder_state * restrict ds, struct bitstream_0 *bs);
// rpl_fprintf
// file ../lib/stdio.h line 595
extern signed int rpl_fprintf(struct _IO_FILE *fp, const char *format, ...);
// rpl_isnanl
// file isnan.c line 94
extern signed int rpl_isnanl(long double x);
// scan
// file parse.c line 275
signed int scan(struct bitstream_0 *bs, unsigned int skip);
// sched_lock
// file process.h line 173
void sched_lock(void);
// sched_unlock
// file process.h line 176
void sched_unlock(void);
// schedule
// file process.c line 594
static void schedule(struct process *proc);
// select_task
// file process.c line 405
static void select_task(void);
// set_memory_constraints
// file process.c line 608
static void set_memory_constraints(void);
// setbuf
// file /usr/include/stdio.h line 332
extern void setbuf(struct _IO_FILE *, char *);
// setup_signals
// file signals.h line 22
void setup_signals(void);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous_11 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_11 *);
// sigismember
// file /usr/include/signal.h line 227
extern signed int sigismember(const struct anonymous_11 *, signed int);
// signal_handler
// file signals.c line 122
static void signal_handler(signed int caught);
// sigpending
// file /usr/include/signal.h line 263
extern signed int sigpending(struct anonymous_11 *);
// sigsuspend
// file /usr/include/signal.h line 256
extern signed int sigsuspend(const struct anonymous_11 *);
// sink_thread_proc
// file process.c line 334
static void sink_thread_proc(void);
// sink_write_buffer
// file process.h line 190
void sink_write_buffer(void *buffer, unsigned long int size, unsigned long int weight);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sort_alphabet
// file encode.c line 547
static void sort_alphabet(unsigned long int *first, unsigned long int *last);
// sort_typeBstar
// file divbwt.c line 1540
static signed int sort_typeBstar(const unsigned char *T, signed int *SA, signed int *bucket_A, signed int *bucket_B, signed int n);
// source_close
// file process.h line 181
void source_close(void);
// source_release_buffer
// file process.h line 185
void source_release_buffer(void *buffer);
// source_thread_proc
// file process.c line 245
static void source_thread_proc(void);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// ss_blockswap
// file divbwt.c line 589
static void ss_blockswap(signed int *a, signed int *b, signed int n);
// ss_compare
// file divbwt.c line 249
static signed long int ss_compare(const unsigned char *T, const signed int *p1, const signed int *p2, signed int depth);
// ss_compare_last
// file divbwt.c line 269
static signed long int ss_compare_last(const unsigned char *T, const signed int *PA, const signed int *p1, const signed int *p2, signed int depth, signed int size);
// ss_fixdown
// file divbwt.c line 329
static void ss_fixdown(const unsigned char *Td, const signed int *PA, signed int *SA, signed int i, signed int size);
// ss_heapsort
// file divbwt.c line 346
static void ss_heapsort(const unsigned char *Td, const signed int *PA, signed int *SA, signed int size);
// ss_ilg
// file divbwt.c line 155
static signed long int ss_ilg(signed int n);
// ss_inplacemerge
// file divbwt.c line 639
static void ss_inplacemerge(const unsigned char *T, const signed int *PA, signed int *first, signed int *middle, signed int *last, signed int depth);
// ss_insertionsort
// file divbwt.c line 304
static void ss_insertionsort(const unsigned char *T, const signed int *PA, signed int *first, signed int *last, signed int depth);
// ss_isqrt
// file divbwt.c line 216
static signed int ss_isqrt(signed int x);
// ss_median3
// file divbwt.c line 371
static signed int * ss_median3(const unsigned char *Td, const signed int *PA, signed int *v1, signed int *v2, signed int *v3);
// ss_median5
// file divbwt.c line 385
static signed int * ss_median5(const unsigned char *Td, const signed int *PA, signed int *v1, signed int *v2, signed int *v3, signed int *v4, signed int *v5);
// ss_mergebackward
// file divbwt.c line 732
static void ss_mergebackward(const unsigned char *T, const signed int *PA, signed int *first, signed int *middle, signed int *last, signed int *buf, signed int depth);
// ss_mergeforward
// file divbwt.c line 682
static void ss_mergeforward(const unsigned char *T, const signed int *PA, signed int *first, signed int *middle, signed int *last, signed int *buf, signed int depth);
// ss_mintrosort
// file divbwt.c line 447
static void ss_mintrosort(const unsigned char *T, const signed int *PA, signed int *first, signed int *last, signed int depth);
// ss_partition
// file divbwt.c line 428
static signed int * ss_partition(const signed int *PA, signed int *first, signed int *last, signed int depth);
// ss_pivot
// file divbwt.c line 400
static signed int * ss_pivot(const unsigned char *Td, const signed int *PA, signed int *first, signed int *last);
// ss_rotate
// file divbwt.c line 598
static void ss_rotate(signed int *first, signed int *middle, signed int *last);
// ss_swapmerge
// file divbwt.c line 791
static void ss_swapmerge(const unsigned char *T, const signed int *PA, signed int *first, signed int *middle, signed int *last, signed int *buf, signed int bufsize, signed int depth);
// sssort
// file divbwt.c line 885
static void sssort(const unsigned char *T, const signed int *PA, signed int *first, signed int *last, signed int *buf, signed int bufsize, signed int depth, signed int n, signed long int lastsuffix);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// sti
// file signals.h line 24
void sti(void);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// suffix_xform
// file main.c line 656
static signed int suffix_xform(const char *compr_pathname, char **decompr_pathname);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// terminate
// file signals.c line 192
static void terminate(signed int sig);
// thread_entry
// file process.c line 80
static void * thread_entry(void *real_entry);
// timespec_add
// file ../lib/timespec.h line 93
struct timespec timespec_add(struct timespec a, struct timespec b);
// timespec_cmp
// file ../lib/timespec.h line 78
inline signed int timespec_cmp(struct timespec a, struct timespec b);
// timespec_sign
// file ../lib/timespec.h line 88
inline signed int timespec_sign(struct timespec a);
// timespec_sub
// file ../lib/timespec.h line 95
struct timespec timespec_sub(struct timespec a, struct timespec b);
// timespectod
// file ../lib/timespec.h line 102
inline double timespectod(struct timespec a);
// tr_copy
// file divbwt.c line 1188
static void tr_copy(signed int *ISA, const signed int *ISAn, const signed int *SA, signed int *first, signed int *a, signed int *b, signed int *last, signed int depth);
// tr_fixdown
// file divbwt.c line 1017
static void tr_fixdown(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *SA, signed int i, signed int size);
// tr_heapsort
// file divbwt.c line 1035
static void tr_heapsort(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *SA, signed int size);
// tr_ilg
// file divbwt.c line 963
static signed long int tr_ilg(signed int n);
// tr_insertionsort
// file divbwt.c line 997
static void tr_insertionsort(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *first, signed int *last);
// tr_introsort
// file divbwt.c line 1257
static void tr_introsort(signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *SA, signed int *first, signed int *last, struct _trbudget_t *budget);
// tr_median3
// file divbwt.c line 1061
static signed int * tr_median3(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *v1, signed int *v2, signed int *v3);
// tr_median5
// file divbwt.c line 1075
static signed int * tr_median5(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *v1, signed int *v2, signed int *v3, signed int *v4, signed int *v5);
// tr_partialcopy
// file divbwt.c line 1215
static void tr_partialcopy(signed int *ISA, const signed int *ISAn, const signed int *SA, signed int *first, signed int *a, signed int *b, signed int *last, signed int depth);
// tr_partition
// file divbwt.c line 1146
static void tr_partition(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *first, signed int *middle, signed int *last, signed int **pa, signed int **pb, signed int v);
// tr_pivot
// file divbwt.c line 1090
static signed int * tr_pivot(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *first, signed int *last);
// transmit
// file encode.h line 32
void transmit(struct encoder_state *s, void *buf);
// trbudget_check
// file divbwt.c line 1133
static signed long int trbudget_check(struct _trbudget_t *budget, signed int size);
// trbudget_init
// file divbwt.c line 1126
static void trbudget_init(struct _trbudget_t *budget, signed int chance, signed int incval);
// trsort
// file divbwt.c line 1487
static void trsort(signed int *ISA, signed int *SA, signed int n, signed int depth);
// uninit
// file compress.c line 336
static void uninit(void);
// uninit_link1
// file expand.c line 904
static void uninit_link1(void);
// uninit_io
// file process.c line 485
static void uninit_io(void);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// up_heap
// file process.h line 204
void up_heap(void *vroot, unsigned int size);
// update_timespec
// file utimens.c line 133
static _Bool update_timespec(struct stat *statbuf, struct timespec **ts);
// usage
// file main.c line 262
static void usage(void);
// utimens
// file utimens.c line 419
signed int utimens(const char *file, struct timespec *timespec);
// utimensat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 363
extern signed int utimensat(signed int, const char *, struct timespec *, signed int);
// utimes
// file /usr/include/x86_64-linux-gnu/sys/time.h line 138
extern signed int utimes(const char *, struct timeval *);
// validate_timespec
// file utimens.c line 86
static signed int validate_timespec(struct timespec *timespec);
// vasnprintf
// file vasnprintf.h line 72
extern char * vasnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, void **args);
// version
// file main.c line 273
static void version(void);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// warn
// file main.c line 127
void warn(const char *fmt, ...);
// warnf
// file main.c line 128
void warnf(struct filespec *f, const char *fmt, ...);
// warnfx
// file main.c line 130
void warnfx(struct filespec *f, signed int x, const char *fmt, ...);
// warnx
// file main.c line 129
void warnx(signed int x, const char *fmt, ...);
// work
// file main.h line 88
void work(void);
// worker_thread_proc
// file process.c line 421
static void worker_thread_proc(void);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write_header
// file compress.c line 284
static void write_header(void);
// write_trailer
// file compress.c line 298
static void write_trailer(void);
// x2nrealloc
// file ../lib/xalloc.h line 179
inline void * x2nrealloc(void *p, unsigned long int *pn, unsigned long int s);
// x2nrealloc_link1
// file xalloc.h line 179
static inline void * x2nrealloc_link1(void *p_link10, unsigned long int *pn_link10, unsigned long int s_link10);
// x2realloc
// file xmalloc.c line 74
void * x2realloc(void *p, unsigned long int *pn);
// xaction
// file signals.c line 76
static void xaction(signed int sig, void (*handler)(signed int));
// xaction::handler_object
//
void handler_object(signed int);
// xadd
// file signals.c line 42
static void xadd(struct anonymous_11 *set, signed int sig);
// xalloc_die
// file ../lib/xalloc.h line 55
extern void xalloc_die(void);
// xcalloc
// file ../lib/xalloc.h line 61
void * xcalloc(unsigned long int n, unsigned long int s);
// xcharalloc
// file ../lib/xalloc.h line 218
inline char * xcharalloc(unsigned long int n);
// xcreate
// file process.c line 88
static unsigned long int xcreate(void (*entry)(void));
// xcreate::entry_object
//
void entry_object(void);
// xempty
// file signals.c line 35
static void xempty(struct anonymous_11 *set);
// xmalloc
// file ../lib/xalloc.h line 57
void * xmalloc(unsigned long int n);
// xmask
// file signals.c line 49
static void xmask(signed int how, const struct anonymous_11 *set, struct anonymous_11 *oset);
// xmax
// file xsize.h line 94
inline unsigned long int xmax(unsigned long int size1, unsigned long int size2);
// xmember
// file signals.c line 63
static _Bool xmember(const struct anonymous_11 *set, signed int sig);
// xmemdup
// file xmalloc.c line 111
void * xmemdup(const void *p, unsigned long int s);
// xnmalloc
// file ../lib/xalloc.h line 103
inline void * xnmalloc(unsigned long int n, unsigned long int s);
// xnrealloc
// file ../lib/xalloc.h line 116
inline void * xnrealloc(void *p, unsigned long int n, unsigned long int s);
// xpending
// file signals.c line 56
static void xpending(struct anonymous_11 *set);
// xraise
// file signals.h line 26
void xraise(signed int sig);
// xread
// file process.c line 102
void xread(void *vbuf, unsigned long int *vacant);
// xrealloc
// file ../lib/xalloc.h line 63
void * xrealloc(void *p, unsigned long int n);
// xstrdup
// file xmalloc.c line 119
char * xstrdup(const char *string);
// xstrtol
// file main.c line 156
static unsigned long int xstrtol(const char *str, signed int source, unsigned long int lower, unsigned long int upper);
// xsum
// file xsize.h line 63
inline unsigned long int xsum(unsigned long int size1, unsigned long int size2);
// xsum3
// file xsize.h line 74
inline unsigned long int xsum3(unsigned long int size1, unsigned long int size2, unsigned long int size3);
// xsum4
// file xsize.h line 84
inline unsigned long int xsum4(unsigned long int size1, unsigned long int size2, unsigned long int size3, unsigned long int size4);
// xwrite
// file process.h line 200
void xwrite(const void *vbuf, unsigned long int size);
// xzalloc
// file ../lib/xalloc.h line 59
void * xzalloc(unsigned long int s);

struct anonymous_19
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_17
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous_3
{
  // dir_start
  const char *dir_start;
  // dir_end
  const char *dir_end;
  // flags
  signed int flags;
  // width_start
  const char *width_start;
  // width_end
  const char *width_end;
  // width_arg_index
  unsigned long int width_arg_index;
  // precision_start
  const char *precision_start;
  // precision_end
  const char *precision_end;
  // precision_arg_index
  unsigned long int precision_arg_index;
  // conversion
  char conversion;
  // arg_index
  unsigned long int arg_index;
};

struct anonymous_11
{
  // __val
  unsigned long int __val[16l];
};

union anonymous_4
{
  // a_schar
  signed char a_schar;
  // a_uchar
  unsigned char a_uchar;
  // a_short
  signed short int a_short;
  // a_ushort
  unsigned short int a_ushort;
  // a_int
  signed int a_int;
  // a_uint
  unsigned int a_uint;
  // a_longint
  signed long int a_longint;
  // a_ulongint
  unsigned long int a_ulongint;
  // a_longlongint
  signed long long int a_longlongint;
  // a_ulonglongint
  unsigned long long int a_ulonglongint;
  // a_float
  float a_float;
  // a_double
  double a_double;
  // a_longdouble
  long double a_longdouble;
  // a_char
  signed int a_char;
  // a_wide_char
  unsigned int a_wide_char;
  // a_string
  const char *a_string;
  // a_wide_string
  const signed int *a_wide_string;
  // a_pointer
  void *a_pointer;
  // a_count_schar_pointer
  signed char *a_count_schar_pointer;
  // a_count_short_pointer
  signed short int *a_count_short_pointer;
  // a_count_int_pointer
  signed int *a_count_int_pointer;
  // a_count_longint_pointer
  signed long int *a_count_longint_pointer;
  // a_count_longlongint_pointer
  signed long long int *a_count_longlongint_pointer;
};

struct anonymous_2
{
  // type
  enum anonymous_12 type;
  // a
  union anonymous_4 a;
};

struct anonymous_7
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

struct anonymous_13
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_16
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

struct anonymous_15
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_14
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_18
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_20
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_13 _kill;
  // _timer
  struct anonymous_14 _timer;
  // _rt
  struct anonymous_15 _rt;
  // _sigchld
  struct anonymous_16 _sigchld;
  // _sigfault
  struct anonymous_17 _sigfault;
  // _sigpoll
  struct anonymous_18 _sigpoll;
  // _sigsys
  struct anonymous_19 _sigsys;
};

struct anonymous_21
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_20 _sifields;
};

struct anonymous_10
{
  // count
  unsigned long int count;
  // dir
  struct anonymous_3 *dir;
  // max_width_length
  unsigned long int max_width_length;
  // max_precision_length
  unsigned long int max_precision_length;
  // direct_alloc_dir
  struct anonymous_3 direct_alloc_dir[7l];
};

struct anonymous_1
{
  // count
  unsigned long int count;
  // arg
  struct anonymous_2 *arg;
  // direct_alloc_arg
  struct anonymous_2 direct_alloc_arg[7l];
};

struct anonymous_33
{
  // root
  struct detached_bitstream ** restrict root;
  // size
  unsigned int size;
};

struct anonymous_29
{
  // root
  struct emit_blk ** restrict root;
  // size
  unsigned int size;
};

struct anonymous_23
{
  // root
  struct in_blk ** restrict root;
  // size
  unsigned int size;
};

struct anonymous_27
{
  // root
  struct in_blk_0 ** restrict root;
  // size
  unsigned int size;
  // modulus
  unsigned int modulus;
  // head
  unsigned int head;
};

struct anonymous_30
{
  // root
  struct out_blk ** restrict root;
  // size
  unsigned int size;
};

struct anonymous_28
{
  // root
  struct retr_blk ** restrict root;
  // size
  unsigned int size;
};

struct anonymous_32
{
  // root
  struct unord_blk ** restrict root;
  // size
  unsigned int size;
};

struct anonymous_24
{
  // root
  struct work_blk ** restrict root;
  // size
  unsigned int size;
};

struct anonymous_9
{
  // root
  struct block * restrict root;
  // size
  unsigned int size;
  // modulus
  unsigned int modulus;
  // head
  unsigned int head;
};

struct anonymous_31
{
  // root
  struct head_blk * restrict root;
  // size
  unsigned int size;
  // modulus
  unsigned int modulus;
  // head
  unsigned int head;
};

union anonymous_22
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_21 *, void *);
};

union anonymous_25
{
  // value
  long double value;
  // word
  unsigned int word[4l];
};

union anonymous_8
{
  // __data
  struct anonymous_7 __data;
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

union anonymous_6
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

struct _trbudget_t
{
  // chance
  signed int chance;
  // remain
  signed int remain;
  // incval
  signed int incval;
  // count
  signed int count;
};

struct arg
{
  // next
  struct arg *next;
  // val
  const char *val;
};

struct bitstream_0
{
  // live
  unsigned int live;
  // buff
  unsigned long int buff;
  // block
  struct in_blk *block;
  // data
  const unsigned int *data;
  // limit
  const unsigned int *limit;
  // eof
  _Bool eof;
};

struct bitstream
{
  // live
  unsigned int live;
  // buff
  unsigned long int buff;
  // block
  struct in_blk_0 *block;
  // data
  const unsigned int *data;
  // limit
  const unsigned int *limit;
  // eof
  _Bool eof;
};

struct block
{
  // buffer
  void *buffer;
  // size
  unsigned long int size;
  // weight
  unsigned long int weight;
};

struct decoder_state
{
  // internal_state
  struct retriever_internal_state *internal_state;
  // rand
  _Bool rand;
  // bwt_idx
  unsigned int bwt_idx;
  // block_size
  unsigned int block_size;
  // crc
  unsigned int crc;
  // ftab
  unsigned int ftab[256l];
  // tt
  unsigned int *tt;
  // rle_state
  signed int rle_state;
  // rle_crc
  unsigned int rle_crc;
  // rle_index
  unsigned int rle_index;
  // rle_avail
  unsigned int rle_avail;
  // rle_char
  unsigned char rle_char;
  // rle_prev
  unsigned char rle_prev;
};

struct position
{
  // major
  unsigned long int major;
  // minor
  unsigned long int minor;
};

struct detached_bitstream
{
  // pos
  struct position pos;
  // offset
  unsigned long int offset;
  // live
  unsigned int live;
  // buff
  unsigned long int buff;
  // eof
  _Bool eof;
};

struct emit_blk
{
  // base
  struct position base;
  // ds
  struct decoder_state ds;
  // status
  signed int status;
  // end_offset
  unsigned long int end_offset;
};

struct encoder_state
{
  // cmap
  _Bool cmap[256l];
  // rle_state
  signed int rle_state;
  // rle_character
  unsigned int rle_character;
  // block_crc
  unsigned int block_crc;
  // bwt_idx
  unsigned int bwt_idx;
  // out_expect_len
  unsigned int out_expect_len;
  // nmtf
  unsigned int nmtf;
  // nblock
  unsigned int nblock;
  // alpha_size
  unsigned int alpha_size;
  // max_block_size
  unsigned int max_block_size;
  // cluster_factor
  unsigned int cluster_factor;
  // block
  unsigned char *block;
  // mtfv
  void *mtfv;
  // selector
  unsigned char *selector;
  // selectorMTF
  unsigned char *selectorMTF;
  // num_selectors
  unsigned int num_selectors;
  // num_trees
  unsigned int num_trees;
  // length
  unsigned char length[6l][259l];
  // code
  unsigned int code[6l][259l];
  // frequency
  unsigned int frequency[6l][259l];
  // tmap_old2new
  unsigned int tmap_old2new[6l];
  // tmap_new2old
  unsigned int tmap_new2old[6l];
};

struct filespec
{
  // fd
  signed int fd;
  // sep
  const char *sep;
  // fmt
  const char *fmt;
  // total
  unsigned long int total;
  // size
  unsigned long int size;
};

struct header
{
  // bs100k
  signed int bs100k;
  // crc
  unsigned int crc;
};

struct head_blk
{
  // base
  struct position base;
  // hdr
  struct header hdr;
};

struct in_blk
{
  // pos
  struct position pos;
  // buffer
  void *buffer;
  // size
  unsigned long int size;
  // next
  const unsigned char *next;
  // left
  unsigned long int left;
};

struct in_blk_0
{
  // buffer
  void *buffer;
  // size
  unsigned long int size;
  // ref_count
  unsigned int ref_count;
  // offset
  unsigned long int offset;
};

struct out_blk
{
  // base
  struct position base;
  // size
  unsigned long int size;
  // crc
  unsigned int crc;
  // blk_sz
  unsigned int blk_sz;
  // status
  signed int status;
  // end_offset
  unsigned long int end_offset;
};

struct parser_state
{
  // state
  signed int state;
  // bs100k
  signed int bs100k;
  // stored_crc
  unsigned int stored_crc;
  // computed_crc
  unsigned int computed_crc;
};

struct process
{
  // tasks
  struct task *tasks;
  // init
  void (*init)(void);
  // uninit
  void (*uninit)(void);
  // finished
  _Bool (*finished)(void);
  // on_block
  void (*on_block)(void *, unsigned long int);
  // on_written
  void (*on_written)(void *);
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct retr_blk
{
  // curr_pos
  struct detached_bitstream curr_pos;
  // base
  struct position base;
  // ds
  struct decoder_state ds;
  // unord_link
  struct unord_blk *unord_link;
};

struct tree
{
  // start
  unsigned short int start[1024l];
  // base
  unsigned long int base[22l];
  // count
  unsigned int count[21l];
  // perm
  unsigned short int perm[258l];
};

struct retriever_internal_state
{
  // state
  unsigned int state;
  // selector
  unsigned char selector[32767l];
  // num_trees
  unsigned int num_trees;
  // num_selectors
  unsigned int num_selectors;
  // alpha_size
  unsigned int alpha_size;
  // code_len
  unsigned char code_len[258l];
  // mtf
  unsigned int mtf[6l];
  // tree
  struct tree tree[6l];
  // big
  unsigned short int big;
  // small
  unsigned short int small;
  // j
  unsigned int j;
  // t
  unsigned int t;
  // g
  unsigned int g;
  // imtf_row
  unsigned char *imtf_row[16l];
  // imtf_slide
  unsigned char imtf_slide[8192l];
  // runChar
  unsigned int runChar;
  // run
  unsigned int run;
  // shift
  unsigned int shift;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous_22 __sigaction_handler;
  // sa_mask
  struct anonymous_11 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
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

struct suffix
{
  // compr
  const char *compr;
  // compr_len
  unsigned long int compr_len;
  // decompr
  const char *decompr;
  // decompr_len
  unsigned long int decompr_len;
  // chk_compr
  signed int chk_compr;
};

struct task
{
  // name
  const char *name;
  // ready
  _Bool (*ready)(void);
  // run
  void (*run)(void);
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

struct unord_blk
{
  // base
  struct position base;
  // end_pos
  struct detached_bitstream end_pos;
  // complete
  _Bool complete;
  // legitimate
  _Bool legitimate;
};

struct work_blk
{
  // pos
  struct position pos;
  // next
  struct position next;
  // enc
  struct encoder_state *enc;
  // buffer
  void *buffer;
  // size
  unsigned long int size;
  // crc
  unsigned int crc;
  // weight
  unsigned long int weight;
};


// ACCEPT
// file scantab.h line 4
static const unsigned char ACCEPT = (const unsigned char)48;
// L
// file decode.c line 352
static const unsigned char L[64l] = { (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)5, (const unsigned char)5, (const unsigned char)6, (const unsigned char)6, (const unsigned char)5, (const unsigned char)5, (const unsigned char)6, (const unsigned char)6, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)5, (const unsigned char)5, (const unsigned char)6, (const unsigned char)6, (const unsigned char)5, (const unsigned char)5, (const unsigned char)6, (const unsigned char)6 };
// R
// file decode.c line 359
static const unsigned char R[64l] = { (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)4, (const unsigned char)4, (const unsigned char)4, (const unsigned char)4, (const unsigned char)4, (const unsigned char)4, (const unsigned char)4, (const unsigned char)4, (const unsigned char)5, (const unsigned char)5, (const unsigned char)6, (const unsigned char)4, (const unsigned char)3, (const unsigned char)3, (const unsigned char)4, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)3, (const unsigned char)3, (const unsigned char)4, (const unsigned char)2, (const unsigned char)1, (const unsigned char)1, (const unsigned char)2, (const unsigned char)0 };
// big_dfa
// file scantab.h line 16
static const unsigned char big_dfa[49l][256l] = { { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)11, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)12, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)13, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)14, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)15, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)16, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)11, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)17, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)18, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)19, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)20, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)21, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)22, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)23, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)24, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)11, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)25, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)26, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)27, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)28, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)29, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)30, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)31, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)32, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)11, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)33, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)34, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)35, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)11, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)36, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)37, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)11, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)38, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)12, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)39, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)13, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)40, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)14, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)41, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)42, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)11, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)43, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)44, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)45, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)10, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)46, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)11, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)47, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)12, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)48, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)13, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)48, (const unsigned char)48, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)7, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)8, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)6, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)9, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)5, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)4, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)3, (const unsigned char)1, (const unsigned char)0, (const unsigned char)2, (const unsigned char)0, (const unsigned char)1, (const unsigned char)0, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48 },
    { (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48, (const unsigned char)48 } };
// blocked
// file signals.c line 139
static struct anonymous_11 blocked;
// blocked_signals
// file signals.c line 101
static const signed int blocked_signals[2l] = { 13, 25 };
// bs100k
// file main.c line 43
unsigned int bs100k = (unsigned int)9;
// caught_index
// file signals.c line 119
static volatile signed int caught_index;
// coll_q
// file compress.c line 56
static struct anonymous_23 coll_q;
// collect_token
// file compress.c line 62
static _Bool collect_token = (_Bool)1;
// combined_crc
// file compress.c line 61
static unsigned int combined_crc;
// compression
// file compress.c line 354
struct process compression;
// task_list
// file compress.c line 346
static struct task task_list[5l];
// task_list
// file compress.c line 346
static struct task task_list[5l] = { { .name="collect_seq", .ready=can_collect_seq, .run=do_collect_seq },
    { .name="reorder", .ready=can_reorder, .run=do_reorder },
    { .name="transmit", .ready=can_transmit, .run=do_transmit },
    { .name="collect", .ready=can_collect, .run=do_collect },
    { .name=(const char *)(void *)0, .ready=(_Bool (*)(void))(void *)0, .run=(void (*)(void))(void *)0 } };
// compression
// file compress.c line 354
struct process compression = { .tasks=task_list, .init=init, .uninit=uninit, .finished=can_terminate,
    .on_block=on_input_avail, .on_written=on_write_complete };
// crc_table
// file crctab.c line 7
unsigned int crc_table[256l] = { (unsigned int)0x00000000, (unsigned int)0x04C11DB7, (unsigned int)0x09823B6E, (unsigned int)0x0D4326D9, (unsigned int)0x130476DC, (unsigned int)0x17C56B6B, (unsigned int)0x1A864DB2, (unsigned int)0x1E475005, (unsigned int)0x2608EDB8, (unsigned int)0x22C9F00F, (unsigned int)0x2F8AD6D6, (unsigned int)0x2B4BCB61, (unsigned int)0x350C9B64, (unsigned int)0x31CD86D3, (unsigned int)0x3C8EA00A, (unsigned int)0x384FBDBD, (unsigned int)0x4C11DB70, (unsigned int)0x48D0C6C7, (unsigned int)0x4593E01E, (unsigned int)0x4152FDA9, (unsigned int)0x5F15ADAC, (unsigned int)0x5BD4B01B, (unsigned int)0x569796C2, (unsigned int)0x52568B75, (unsigned int)0x6A1936C8, (unsigned int)0x6ED82B7F, (unsigned int)0x639B0DA6, (unsigned int)0x675A1011, (unsigned int)0x791D4014, (unsigned int)0x7DDC5DA3, (unsigned int)0x709F7B7A, (unsigned int)0x745E66CD, 0x9823B6E0, 0x9CE2AB57, 0x91A18D8E, 0x95609039, 0x8B27C03C, 0x8FE6DD8B, 0x82A5FB52, 0x8664E6E5, 0xBE2B5B58, 0xBAEA46EF, 0xB7A96036, 0xB3687D81, 0xAD2F2D84, 0xA9EE3033, 0xA4AD16EA, 0xA06C0B5D, 0xD4326D90, 0xD0F37027, 0xDDB056FE, 0xD9714B49, 0xC7361B4C, 0xC3F706FB, 0xCEB42022, 0xCA753D95, 0xF23A8028, 0xF6FB9D9F, 0xFBB8BB46, 0xFF79A6F1, 0xE13EF6F4, 0xE5FFEB43, 0xE8BCCD9A, 0xEC7DD02D, (unsigned int)0x34867077, (unsigned int)0x30476DC0, (unsigned int)0x3D044B19, (unsigned int)0x39C556AE, (unsigned int)0x278206AB, (unsigned int)0x23431B1C, (unsigned int)0x2E003DC5, (unsigned int)0x2AC12072, (unsigned int)0x128E9DCF, (unsigned int)0x164F8078, (unsigned int)0x1B0CA6A1, (unsigned int)0x1FCDBB16, (unsigned int)0x018AEB13, (unsigned int)0x054BF6A4, (unsigned int)0x0808D07D, (unsigned int)0x0CC9CDCA, (unsigned int)0x7897AB07, (unsigned int)0x7C56B6B0, (unsigned int)0x71159069, (unsigned int)0x75D48DDE, (unsigned int)0x6B93DDDB, (unsigned int)0x6F52C06C, (unsigned int)0x6211E6B5, (unsigned int)0x66D0FB02, (unsigned int)0x5E9F46BF, (unsigned int)0x5A5E5B08, (unsigned int)0x571D7DD1, (unsigned int)0x53DC6066, (unsigned int)0x4D9B3063, (unsigned int)0x495A2DD4, (unsigned int)0x44190B0D, (unsigned int)0x40D816BA, 0xACA5C697, 0xA864DB20, 0xA527FDF9, 0xA1E6E04E, 0xBFA1B04B, 0xBB60ADFC, 0xB6238B25, 0xB2E29692, 0x8AAD2B2F, 0x8E6C3698, 0x832F1041, 0x87EE0DF6, 0x99A95DF3, 0x9D684044, 0x902B669D, 0x94EA7B2A, 0xE0B41DE7, 0xE4750050, 0xE9362689, 0xEDF73B3E, 0xF3B06B3B, 0xF771768C, 0xFA325055, 0xFEF34DE2, 0xC6BCF05F, 0xC27DEDE8, 0xCF3ECB31, 0xCBFFD686, 0xD5B88683, 0xD1799B34, 0xDC3ABDED, 0xD8FBA05A, (unsigned int)0x690CE0EE, (unsigned int)0x6DCDFD59, (unsigned int)0x608EDB80, (unsigned int)0x644FC637, (unsigned int)0x7A089632, (unsigned int)0x7EC98B85, (unsigned int)0x738AAD5C, (unsigned int)0x774BB0EB, (unsigned int)0x4F040D56, (unsigned int)0x4BC510E1, (unsigned int)0x46863638, (unsigned int)0x42472B8F, (unsigned int)0x5C007B8A, (unsigned int)0x58C1663D, (unsigned int)0x558240E4, (unsigned int)0x51435D53, (unsigned int)0x251D3B9E, (unsigned int)0x21DC2629, (unsigned int)0x2C9F00F0, (unsigned int)0x285E1D47, (unsigned int)0x36194D42, (unsigned int)0x32D850F5, (unsigned int)0x3F9B762C, (unsigned int)0x3B5A6B9B, (unsigned int)0x0315D626, (unsigned int)0x07D4CB91, (unsigned int)0x0A97ED48, (unsigned int)0x0E56F0FF, (unsigned int)0x1011A0FA, (unsigned int)0x14D0BD4D, (unsigned int)0x19939B94, (unsigned int)0x1D528623, 0xF12F560E, 0xF5EE4BB9, 0xF8AD6D60, 0xFC6C70D7, 0xE22B20D2, 0xE6EA3D65, 0xEBA91BBC, 0xEF68060B, 0xD727BBB6, 0xD3E6A601, 0xDEA580D8, 0xDA649D6F, 0xC423CD6A, 0xC0E2D0DD, 0xCDA1F604, 0xC960EBB3, 0xBD3E8D7E, 0xB9FF90C9, 0xB4BCB610, 0xB07DABA7, 0xAE3AFBA2, 0xAAFBE615, 0xA7B8C0CC, 0xA379DD7B, 0x9B3660C6, 0x9FF77D71, 0x92B45BA8, 0x9675461F, 0x8832161A, 0x8CF30BAD, 0x81B02D74, 0x857130C3, (unsigned int)0x5D8A9099, (unsigned int)0x594B8D2E, (unsigned int)0x5408ABF7, (unsigned int)0x50C9B640, (unsigned int)0x4E8EE645, (unsigned int)0x4A4FFBF2, (unsigned int)0x470CDD2B, (unsigned int)0x43CDC09C, (unsigned int)0x7B827D21, (unsigned int)0x7F436096, (unsigned int)0x7200464F, (unsigned int)0x76C15BF8, (unsigned int)0x68860BFD, (unsigned int)0x6C47164A, (unsigned int)0x61043093, (unsigned int)0x65C52D24, (unsigned int)0x119B4BE9, (unsigned int)0x155A565E, (unsigned int)0x18197087, (unsigned int)0x1CD86D30, (unsigned int)0x029F3D35, (unsigned int)0x065E2082, (unsigned int)0x0B1D065B, (unsigned int)0x0FDC1BEC, (unsigned int)0x3793A651, (unsigned int)0x3352BBE6, (unsigned int)0x3E119D3F, (unsigned int)0x3AD08088, (unsigned int)0x2497D08D, (unsigned int)0x2056CD3A, (unsigned int)0x2D15EBE3, (unsigned int)0x29D4F654, 0xC5A92679, 0xC1683BCE, 0xCC2B1D17, 0xC8EA00A0, 0xD6AD50A5, 0xD26C4D12, 0xDF2F6BCB, 0xDBEE767C, 0xE3A1CBC1, 0xE760D676, 0xEA23F0AF, 0xEEE2ED18, 0xF0A5BD1D, 0xF464A0AA, 0xF9278673, 0xFDE69BC4, 0x89B8FD09, 0x8D79E0BE, 0x803AC667, 0x84FBDBD0, 0x9ABC8BD5, 0x9E7D9662, 0x933EB0BB, 0x97FFAD0C, 0xAFB010B1, 0xAB710D06, 0xA6322BDF, 0xA2F33668, 0xBCB4666D, 0xB8757BDA, 0xB5365D03, 0xB1F740B4 };
// decompress
// file main.c line 42
_Bool decompress;
// emit_q
// file expand.c line 155
static struct anonymous_29 emit_q;
// envsep
// file main.c line 152
static const char envsep[3l] = { ' ', '\t', 0 };
// eof
// file process.c line 214
_Bool eof;
// eof_missing
// file expand.c line 148
static unsigned int eof_missing;
// ev_name
// file main.c line 149
static const char * const ev_name[3l] = { "LBZIP2", "BZIP2", "BZIP" };
// expansion
// file expand.c line 929
struct process expansion;
// task_list_link1
// file expand.c line 920
static struct task task_list_link1[6l];
// task_list_link1
// file expand.c line 920
static struct task task_list_link1[6l] = { { .name="reorder", .ready=can_reorder_link1, .run=do_reorder_link1 },
    { .name="parse", .ready=can_parse, .run=do_parse },
    { .name="emit", .ready=can_emit, .run=do_emit },
    { .name="retrieve", .ready=can_retrieve, .run=do_retrieve },
    { .name="scan", .ready=can_scan, .run=do_scan },
    { .name=(const char *)(void *)0, .ready=(_Bool (*)(void))(void *)0, .run=(void (*)(void))(void *)0 } };
// expansion
// file expand.c line 929
struct process expansion = { .tasks=task_list_link1, .init=init_link1, .uninit=uninit_link1,
    .finished=can_terminate_link1, .on_block=on_input_avail_link1,
    .on_written=on_write_complete_link1 };
// finish
// file process.c line 237
static _Bool finish;
// force
// file main.c line 44
_Bool force;
// handled
// file signals.c line 140
static struct anonymous_11 handled;
// handled_signals
// file signals.c line 106
static const signed int handled_signals[4l] = { 10, 12, 2, 15 };
// head_offs
// file expand.c line 151
static unsigned long int head_offs;
// in_granul
// file process.c line 220
unsigned long int in_granul;
// in_slots
// file process.c line 216
unsigned int in_slots;
// input_q
// file expand.c line 150
static struct anonymous_27 input_q;
// ispec
// file main.c line 50
struct filespec ispec;
// keep
// file main.c line 45
_Bool keep;
// lg_table
// file divbwt.c line 135
static const signed long int lg_table[256l] = { (const signed long int)-1, (const signed long int)0, (const signed long int)1, (const signed long int)1, (const signed long int)2, (const signed long int)2, (const signed long int)2, (const signed long int)2, (const signed long int)3, (const signed long int)3, (const signed long int)3, (const signed long int)3, (const signed long int)3, (const signed long int)3, (const signed long int)3, (const signed long int)3, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)4, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)5, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)6, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7, (const signed long int)7 };
// lutimensat_works_really
// file utimens.c line 75
static signed int lutimensat_works_really;
// main_thread
// file signals.c line 138
static unsigned long int main_thread;
// max_mem
// file main.c line 41
unsigned long int max_mem;
// mini_dfa
// file scantab.h line 6
static const unsigned char mini_dfa[48l][2l] = { { (const unsigned char)1, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)3 },
    { (const unsigned char)1, (const unsigned char)4 },
    { (const unsigned char)5, (const unsigned char)0 },
    { (const unsigned char)6, (const unsigned char)0 },
    { (const unsigned char)7, (const unsigned char)3 },
    { (const unsigned char)2, (const unsigned char)8 },
    { (const unsigned char)9, (const unsigned char)4 },
    { (const unsigned char)2, (const unsigned char)10 },
    { (const unsigned char)11, (const unsigned char)0 },
    { (const unsigned char)12, (const unsigned char)0 },
    { (const unsigned char)13, (const unsigned char)3 },
    { (const unsigned char)14, (const unsigned char)3 },
    { (const unsigned char)15, (const unsigned char)3 },
    { (const unsigned char)2, (const unsigned char)16 },
    { (const unsigned char)17, (const unsigned char)4 },
    { (const unsigned char)2, (const unsigned char)18 },
    { (const unsigned char)19, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)20 },
    { (const unsigned char)1, (const unsigned char)21 },
    { (const unsigned char)22, (const unsigned char)0 },
    { (const unsigned char)23, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)24 },
    { (const unsigned char)25, (const unsigned char)4 },
    { (const unsigned char)26, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)27 },
    { (const unsigned char)28, (const unsigned char)4 },
    { (const unsigned char)29, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)30 },
    { (const unsigned char)1, (const unsigned char)31 },
    { (const unsigned char)32, (const unsigned char)0 },
    { (const unsigned char)33, (const unsigned char)0 },
    { (const unsigned char)7, (const unsigned char)34 },
    { (const unsigned char)35, (const unsigned char)4 },
    { (const unsigned char)2, (const unsigned char)36 },
    { (const unsigned char)37, (const unsigned char)0 },
    { (const unsigned char)38, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)39 },
    { (const unsigned char)1, (const unsigned char)40 },
    { (const unsigned char)41, (const unsigned char)0 },
    { (const unsigned char)6, (const unsigned char)42 },
    { (const unsigned char)43, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)44 },
    { (const unsigned char)1, (const unsigned char)45 },
    { (const unsigned char)46, (const unsigned char)0 },
    { (const unsigned char)47, (const unsigned char)0 },
    { (const unsigned char)2, (const unsigned char)48 } };
// next_id
// file compress.c line 60
static unsigned long int next_id;
// next_task
// file process.c line 241
static struct task *next_task;
// num_worker
// file main.c line 40
unsigned int num_worker;
// opathn
// file main.c line 56
static char *opathn;
// order
// file compress.c line 59
static struct position order;
// order_q
// file expand.c line 157
static struct anonymous_31 order_q;
// ospec
// file main.c line 51
struct filespec ospec;
// out_granul
// file process.c line 221
unsigned long int out_granul;
// out_slots
// file process.c line 217
unsigned int out_slots;
// outmode
// file main.c line 146
static enum outmode outmode = (enum outmode)2;
// output_q
// file process.c line 236
static struct anonymous_9 output_q;
// par
// file expand.c line 165
static struct parser_state par;
// parse_token
// file expand.c line 159
static _Bool parse_token;
// parser_bs
// file expand.c line 164
static struct detached_bitstream parser_bs;
// parsing_done
// file expand.c line 160
static _Bool parsing_done;
// pid
// file signals.c line 137
static signed int pid;
// pname
// file main.c line 57
static const char *pname;
// print_cctrs
// file main.c line 47
_Bool print_cctrs;
// process
// file process.c line 212
static struct process *process;
// rand_table
// file decode.c line 812
static const unsigned short int rand_table[512l] = { (const unsigned short int)619, (const unsigned short int)720, (const unsigned short int)127, (const unsigned short int)481, (const unsigned short int)931, (const unsigned short int)816, (const unsigned short int)813, (const unsigned short int)233, (const unsigned short int)566, (const unsigned short int)247, (const unsigned short int)985, (const unsigned short int)724, (const unsigned short int)205, (const unsigned short int)454, (const unsigned short int)863, (const unsigned short int)491, (const unsigned short int)741, (const unsigned short int)242, (const unsigned short int)949, (const unsigned short int)214, (const unsigned short int)733, (const unsigned short int)859, (const unsigned short int)335, (const unsigned short int)708, (const unsigned short int)621, (const unsigned short int)574, (const unsigned short int)+73, (const unsigned short int)654, (const unsigned short int)730, (const unsigned short int)472, (const unsigned short int)419, (const unsigned short int)436, (const unsigned short int)278, (const unsigned short int)496, (const unsigned short int)867, (const unsigned short int)210, (const unsigned short int)399, (const unsigned short int)680, (const unsigned short int)480, (const unsigned short int)+51, (const unsigned short int)878, (const unsigned short int)465, (const unsigned short int)811, (const unsigned short int)169, (const unsigned short int)869, (const unsigned short int)675, (const unsigned short int)611, (const unsigned short int)697, (const unsigned short int)867, (const unsigned short int)561, (const unsigned short int)862, (const unsigned short int)687, (const unsigned short int)507, (const unsigned short int)283, (const unsigned short int)482, (const unsigned short int)129, (const unsigned short int)807, (const unsigned short int)591, (const unsigned short int)733, (const unsigned short int)623, (const unsigned short int)150, (const unsigned short int)238, (const unsigned short int)+59, (const unsigned short int)379, (const unsigned short int)684, (const unsigned short int)877, (const unsigned short int)625, (const unsigned short int)169, (const unsigned short int)643, (const unsigned short int)105, (const unsigned short int)170, (const unsigned short int)607, (const unsigned short int)520, (const unsigned short int)932, (const unsigned short int)727, (const unsigned short int)476, (const unsigned short int)693, (const unsigned short int)425, (const unsigned short int)174, (const unsigned short int)647, (const unsigned short int)+73, (const unsigned short int)122, (const unsigned short int)335, (const unsigned short int)530, (const unsigned short int)442, (const unsigned short int)853, (const unsigned short int)695, (const unsigned short int)249, (const unsigned short int)445, (const unsigned short int)515, (const unsigned short int)909, (const unsigned short int)545, (const unsigned short int)703, (const unsigned short int)919, (const unsigned short int)874, (const unsigned short int)474, (const unsigned short int)882, (const unsigned short int)500, (const unsigned short int)594, (const unsigned short int)612, (const unsigned short int)641, (const unsigned short int)801, (const unsigned short int)220, (const unsigned short int)162, (const unsigned short int)819, (const unsigned short int)984, (const unsigned short int)589, (const unsigned short int)513, (const unsigned short int)495, (const unsigned short int)799, (const unsigned short int)161, (const unsigned short int)604, (const unsigned short int)958, (const unsigned short int)533, (const unsigned short int)221, (const unsigned short int)400, (const unsigned short int)386, (const unsigned short int)867, (const unsigned short int)600, (const unsigned short int)782, (const unsigned short int)382, (const unsigned short int)596, (const unsigned short int)414, (const unsigned short int)171, (const unsigned short int)516, (const unsigned short int)375, (const unsigned short int)682, (const unsigned short int)485, (const unsigned short int)911, (const unsigned short int)276, (const unsigned short int)+98, (const unsigned short int)553, (const unsigned short int)163, (const unsigned short int)354, (const unsigned short int)666, (const unsigned short int)933, (const unsigned short int)424, (const unsigned short int)341, (const unsigned short int)533, (const unsigned short int)870, (const unsigned short int)227, (const unsigned short int)730, (const unsigned short int)475, (const unsigned short int)186, (const unsigned short int)263, (const unsigned short int)647, (const unsigned short int)537, (const unsigned short int)686, (const unsigned short int)600, (const unsigned short int)224, (const unsigned short int)469, (const unsigned short int)+68, (const unsigned short int)770, (const unsigned short int)919, (const unsigned short int)190, (const unsigned short int)373, (const unsigned short int)294, (const unsigned short int)822, (const unsigned short int)808, (const unsigned short int)206, (const unsigned short int)184, (const unsigned short int)943, (const unsigned short int)795, (const unsigned short int)384, (const unsigned short int)383, (const unsigned short int)461, (const unsigned short int)404, (const unsigned short int)758, (const unsigned short int)839, (const unsigned short int)887, (const unsigned short int)715, (const unsigned short int)+67, (const unsigned short int)618, (const unsigned short int)276, (const unsigned short int)204, (const unsigned short int)918, (const unsigned short int)873, (const unsigned short int)777, (const unsigned short int)604, (const unsigned short int)560, (const unsigned short int)951, (const unsigned short int)160, (const unsigned short int)578, (const unsigned short int)722, (const unsigned short int)+79, (const unsigned short int)804, (const unsigned short int)+96, (const unsigned short int)409, (const unsigned short int)713, (const unsigned short int)940, (const unsigned short int)652, (const unsigned short int)934, (const unsigned short int)970, (const unsigned short int)447, (const unsigned short int)318, (const unsigned short int)353, (const unsigned short int)859, (const unsigned short int)672, (const unsigned short int)112, (const unsigned short int)785, (const unsigned short int)645, (const unsigned short int)863, (const unsigned short int)803, (const unsigned short int)350, (const unsigned short int)139, (const unsigned short int)+93, (const unsigned short int)354, (const unsigned short int)+99, (const unsigned short int)820, (const unsigned short int)908, (const unsigned short int)609, (const unsigned short int)772, (const unsigned short int)154, (const unsigned short int)274, (const unsigned short int)580, (const unsigned short int)184, (const unsigned short int)+79, (const unsigned short int)626, (const unsigned short int)630, (const unsigned short int)742, (const unsigned short int)653, (const unsigned short int)282, (const unsigned short int)762, (const unsigned short int)623, (const unsigned short int)680, (const unsigned short int)+81, (const unsigned short int)927, (const unsigned short int)626, (const unsigned short int)789, (const unsigned short int)125, (const unsigned short int)411, (const unsigned short int)521, (const unsigned short int)938, (const unsigned short int)300, (const unsigned short int)821, (const unsigned short int)+78, (const unsigned short int)343, (const unsigned short int)175, (const unsigned short int)128, (const unsigned short int)250, (const unsigned short int)170, (const unsigned short int)774, (const unsigned short int)972, (const unsigned short int)275, (const unsigned short int)999, (const unsigned short int)639, (const unsigned short int)495, (const unsigned short int)+78, (const unsigned short int)352, (const unsigned short int)126, (const unsigned short int)857, (const unsigned short int)956, (const unsigned short int)358, (const unsigned short int)619, (const unsigned short int)580, (const unsigned short int)124, (const unsigned short int)737, (const unsigned short int)594, (const unsigned short int)701, (const unsigned short int)612, (const unsigned short int)669, (const unsigned short int)112, (const unsigned short int)134, (const unsigned short int)694, (const unsigned short int)363, (const unsigned short int)992, (const unsigned short int)809, (const unsigned short int)743, (const unsigned short int)168, (const unsigned short int)974, (const unsigned short int)944, (const unsigned short int)375, (const unsigned short int)748, (const unsigned short int)+52, (const unsigned short int)600, (const unsigned short int)747, (const unsigned short int)642, (const unsigned short int)182, (const unsigned short int)862, (const unsigned short int)+81, (const unsigned short int)344, (const unsigned short int)805, (const unsigned short int)988, (const unsigned short int)739, (const unsigned short int)511, (const unsigned short int)655, (const unsigned short int)814, (const unsigned short int)334, (const unsigned short int)249, (const unsigned short int)515, (const unsigned short int)897, (const unsigned short int)955, (const unsigned short int)664, (const unsigned short int)981, (const unsigned short int)649, (const unsigned short int)113, (const unsigned short int)974, (const unsigned short int)459, (const unsigned short int)893, (const unsigned short int)228, (const unsigned short int)433, (const unsigned short int)837, (const unsigned short int)553, (const unsigned short int)268, (const unsigned short int)926, (const unsigned short int)240, (const unsigned short int)102, (const unsigned short int)654, (const unsigned short int)459, (const unsigned short int)+51, (const unsigned short int)686, (const unsigned short int)754, (const unsigned short int)806, (const unsigned short int)760, (const unsigned short int)493, (const unsigned short int)403, (const unsigned short int)415, (const unsigned short int)394, (const unsigned short int)687, (const unsigned short int)700, (const unsigned short int)946, (const unsigned short int)670, (const unsigned short int)656, (const unsigned short int)610, (const unsigned short int)738, (const unsigned short int)392, (const unsigned short int)760, (const unsigned short int)799, (const unsigned short int)887, (const unsigned short int)653, (const unsigned short int)978, (const unsigned short int)321, (const unsigned short int)576, (const unsigned short int)617, (const unsigned short int)626, (const unsigned short int)502, (const unsigned short int)894, (const unsigned short int)679, (const unsigned short int)243, (const unsigned short int)440, (const unsigned short int)680, (const unsigned short int)879, (const unsigned short int)194, (const unsigned short int)572, (const unsigned short int)640, (const unsigned short int)724, (const unsigned short int)926, (const unsigned short int)+56, (const unsigned short int)204, (const unsigned short int)700, (const unsigned short int)707, (const unsigned short int)151, (const unsigned short int)457, (const unsigned short int)449, (const unsigned short int)797, (const unsigned short int)195, (const unsigned short int)791, (const unsigned short int)558, (const unsigned short int)945, (const unsigned short int)679, (const unsigned short int)297, (const unsigned short int)+59, (const unsigned short int)+87, (const unsigned short int)824, (const unsigned short int)713, (const unsigned short int)663, (const unsigned short int)412, (const unsigned short int)693, (const unsigned short int)342, (const unsigned short int)606, (const unsigned short int)134, (const unsigned short int)108, (const unsigned short int)571, (const unsigned short int)364, (const unsigned short int)631, (const unsigned short int)212, (const unsigned short int)174, (const unsigned short int)643, (const unsigned short int)304, (const unsigned short int)329, (const unsigned short int)343, (const unsigned short int)+97, (const unsigned short int)430, (const unsigned short int)751, (const unsigned short int)497, (const unsigned short int)314, (const unsigned short int)983, (const unsigned short int)374, (const unsigned short int)822, (const unsigned short int)928, (const unsigned short int)140, (const unsigned short int)206, (const unsigned short int)+73, (const unsigned short int)263, (const unsigned short int)980, (const unsigned short int)736, (const unsigned short int)876, (const unsigned short int)478, (const unsigned short int)430, (const unsigned short int)305, (const unsigned short int)170, (const unsigned short int)514, (const unsigned short int)364, (const unsigned short int)692, (const unsigned short int)829, (const unsigned short int)+82, (const unsigned short int)855, (const unsigned short int)953, (const unsigned short int)676, (const unsigned short int)246, (const unsigned short int)369, (const unsigned short int)970, (const unsigned short int)294, (const unsigned short int)750, (const unsigned short int)807, (const unsigned short int)827, (const unsigned short int)150, (const unsigned short int)790, (const unsigned short int)288, (const unsigned short int)923, (const unsigned short int)804, (const unsigned short int)378, (const unsigned short int)215, (const unsigned short int)828, (const unsigned short int)592, (const unsigned short int)281, (const unsigned short int)565, (const unsigned short int)555, (const unsigned short int)710, (const unsigned short int)+82, (const unsigned short int)896, (const unsigned short int)831, (const unsigned short int)547, (const unsigned short int)261, (const unsigned short int)524, (const unsigned short int)462, (const unsigned short int)293, (const unsigned short int)465, (const unsigned short int)502, (const unsigned short int)+56, (const unsigned short int)661, (const unsigned short int)821, (const unsigned short int)976, (const unsigned short int)991, (const unsigned short int)658, (const unsigned short int)869, (const unsigned short int)905, (const unsigned short int)758, (const unsigned short int)745, (const unsigned short int)193, (const unsigned short int)768, (const unsigned short int)550, (const unsigned short int)608, (const unsigned short int)933, (const unsigned short int)378, (const unsigned short int)286, (const unsigned short int)215, (const unsigned short int)979, (const unsigned short int)792, (const unsigned short int)961, (const unsigned short int)+61, (const unsigned short int)688, (const unsigned short int)793, (const unsigned short int)644, (const unsigned short int)986, (const unsigned short int)403, (const unsigned short int)106, (const unsigned short int)366, (const unsigned short int)905, (const unsigned short int)644, (const unsigned short int)372, (const unsigned short int)567, (const unsigned short int)466, (const unsigned short int)434, (const unsigned short int)645, (const unsigned short int)210, (const unsigned short int)389, (const unsigned short int)550, (const unsigned short int)919, (const unsigned short int)135, (const unsigned short int)780, (const unsigned short int)773, (const unsigned short int)635, (const unsigned short int)389, (const unsigned short int)707, (const unsigned short int)100, (const unsigned short int)626, (const unsigned short int)958, (const unsigned short int)165, (const unsigned short int)504, (const unsigned short int)920, (const unsigned short int)176, (const unsigned short int)193, (const unsigned short int)713, (const unsigned short int)857, (const unsigned short int)265, (const unsigned short int)203, (const unsigned short int)+50, (const unsigned short int)668, (const unsigned short int)108, (const unsigned short int)645, (const unsigned short int)990, (const unsigned short int)626, (const unsigned short int)197, (const unsigned short int)510, (const unsigned short int)357, (const unsigned short int)358, (const unsigned short int)850, (const unsigned short int)858, (const unsigned short int)364, (const unsigned short int)936, (const unsigned short int)638 };
// reord_offs
// file expand.c line 162
static unsigned long int reord_offs;
// reord_q
// file compress.c line 58
static struct anonymous_24 reord_q;
// reord_q_link1
// file expand.c line 156
static struct anonymous_30 reord_q_link1;
// request_close
// file process.c line 223
static _Bool request_close;
// retr_q
// file expand.c line 154
static struct anonymous_28 retr_q;
// saved
// file signals.c line 141
static struct anonymous_11 saved;
// scan_q
// file expand.c line 161
static struct anonymous_33 scan_q;
// sched_cond
// file process.c line 210
static union anonymous_8 sched_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// sched_mutex
// file process.c line 209
static union anonymous_6 sched_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// sink_cond
// file process.c line 208
static union anonymous_8 sink_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// sink_mutex
// file process.c line 207
static union anonymous_6 sink_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// sink_thread
// file process.c line 226
static unsigned long int sink_thread;
// small
// file main.c line 48
_Bool small;
// source_cond
// file process.c line 206
static union anonymous_8 source_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// source_mutex
// file process.c line 205
static union anonymous_6 source_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// source_thread
// file process.c line 225
static unsigned long int source_thread;
// sqq_table
// file divbwt.c line 195
static const signed long int sqq_table[256l] = { (const signed long int)0, (const signed long int)16, (const signed long int)22, (const signed long int)27, (const signed long int)32, (const signed long int)35, (const signed long int)39, (const signed long int)42, (const signed long int)45, (const signed long int)48, (const signed long int)50, (const signed long int)53, (const signed long int)55, (const signed long int)57, (const signed long int)59, (const signed long int)61, (const signed long int)64, (const signed long int)65, (const signed long int)67, (const signed long int)69, (const signed long int)71, (const signed long int)73, (const signed long int)75, (const signed long int)76, (const signed long int)78, (const signed long int)80, (const signed long int)81, (const signed long int)83, (const signed long int)84, (const signed long int)86, (const signed long int)87, (const signed long int)89, (const signed long int)90, (const signed long int)91, (const signed long int)93, (const signed long int)94, (const signed long int)96, (const signed long int)97, (const signed long int)98, (const signed long int)99, (const signed long int)101, (const signed long int)102, (const signed long int)103, (const signed long int)104, (const signed long int)106, (const signed long int)107, (const signed long int)108, (const signed long int)109, (const signed long int)110, (const signed long int)112, (const signed long int)113, (const signed long int)114, (const signed long int)115, (const signed long int)116, (const signed long int)117, (const signed long int)118, (const signed long int)119, (const signed long int)120, (const signed long int)121, (const signed long int)122, (const signed long int)123, (const signed long int)124, (const signed long int)125, (const signed long int)126, (const signed long int)128, (const signed long int)128, (const signed long int)129, (const signed long int)130, (const signed long int)131, (const signed long int)132, (const signed long int)133, (const signed long int)134, (const signed long int)135, (const signed long int)136, (const signed long int)137, (const signed long int)138, (const signed long int)139, (const signed long int)140, (const signed long int)141, (const signed long int)142, (const signed long int)143, (const signed long int)144, (const signed long int)144, (const signed long int)145, (const signed long int)146, (const signed long int)147, (const signed long int)148, (const signed long int)149, (const signed long int)150, (const signed long int)150, (const signed long int)151, (const signed long int)152, (const signed long int)153, (const signed long int)154, (const signed long int)155, (const signed long int)155, (const signed long int)156, (const signed long int)157, (const signed long int)158, (const signed long int)159, (const signed long int)160, (const signed long int)160, (const signed long int)161, (const signed long int)162, (const signed long int)163, (const signed long int)163, (const signed long int)164, (const signed long int)165, (const signed long int)166, (const signed long int)167, (const signed long int)167, (const signed long int)168, (const signed long int)169, (const signed long int)170, (const signed long int)170, (const signed long int)171, (const signed long int)172, (const signed long int)173, (const signed long int)173, (const signed long int)174, (const signed long int)175, (const signed long int)176, (const signed long int)176, (const signed long int)177, (const signed long int)178, (const signed long int)178, (const signed long int)179, (const signed long int)180, (const signed long int)181, (const signed long int)181, (const signed long int)182, (const signed long int)183, (const signed long int)183, (const signed long int)184, (const signed long int)185, (const signed long int)185, (const signed long int)186, (const signed long int)187, (const signed long int)187, (const signed long int)188, (const signed long int)189, (const signed long int)189, (const signed long int)190, (const signed long int)191, (const signed long int)192, (const signed long int)192, (const signed long int)193, (const signed long int)193, (const signed long int)194, (const signed long int)195, (const signed long int)195, (const signed long int)196, (const signed long int)197, (const signed long int)197, (const signed long int)198, (const signed long int)199, (const signed long int)199, (const signed long int)200, (const signed long int)201, (const signed long int)201, (const signed long int)202, (const signed long int)203, (const signed long int)203, (const signed long int)204, (const signed long int)204, (const signed long int)205, (const signed long int)206, (const signed long int)206, (const signed long int)207, (const signed long int)208, (const signed long int)208, (const signed long int)209, (const signed long int)209, (const signed long int)210, (const signed long int)211, (const signed long int)211, (const signed long int)212, (const signed long int)212, (const signed long int)213, (const signed long int)214, (const signed long int)214, (const signed long int)215, (const signed long int)215, (const signed long int)216, (const signed long int)217, (const signed long int)217, (const signed long int)218, (const signed long int)218, (const signed long int)219, (const signed long int)219, (const signed long int)220, (const signed long int)221, (const signed long int)221, (const signed long int)222, (const signed long int)222, (const signed long int)223, (const signed long int)224, (const signed long int)224, (const signed long int)225, (const signed long int)225, (const signed long int)226, (const signed long int)226, (const signed long int)227, (const signed long int)227, (const signed long int)228, (const signed long int)229, (const signed long int)229, (const signed long int)230, (const signed long int)230, (const signed long int)231, (const signed long int)231, (const signed long int)232, (const signed long int)232, (const signed long int)233, (const signed long int)234, (const signed long int)234, (const signed long int)235, (const signed long int)235, (const signed long int)236, (const signed long int)236, (const signed long int)237, (const signed long int)237, (const signed long int)238, (const signed long int)238, (const signed long int)239, (const signed long int)240, (const signed long int)240, (const signed long int)241, (const signed long int)241, (const signed long int)242, (const signed long int)242, (const signed long int)243, (const signed long int)243, (const signed long int)244, (const signed long int)244, (const signed long int)245, (const signed long int)245, (const signed long int)246, (const signed long int)246, (const signed long int)247, (const signed long int)247, (const signed long int)248, (const signed long int)248, (const signed long int)249, (const signed long int)249, (const signed long int)250, (const signed long int)250, (const signed long int)251, (const signed long int)251, (const signed long int)252, (const signed long int)252, (const signed long int)253, (const signed long int)253, (const signed long int)254, (const signed long int)254, (const signed long int)255 };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// suffix
// file main.c line 639
static struct suffix suffix[5l] = { { .compr=".bz2", .compr_len=sizeof(char [5l]) /*5ul*/  - (unsigned long int)1u, .decompr="",
    .decompr_len=sizeof(char [1l]) /*1ul*/  - (unsigned long int)1u, .chk_compr=1 },
    { .compr=".tbz2", .compr_len=sizeof(char [6l]) /*6ul*/  - (unsigned long int)1u, .decompr=".tar",
    .decompr_len=sizeof(char [5l]) /*5ul*/  - (unsigned long int)1u, .chk_compr=1 },
    { .compr=".tbz", .compr_len=sizeof(char [5l]) /*5ul*/  - (unsigned long int)1u, .decompr=".tar",
    .decompr_len=sizeof(char [5l]) /*5ul*/  - (unsigned long int)1u, .chk_compr=1 },
    { .compr=".tz2", .compr_len=sizeof(char [5l]) /*5ul*/  - (unsigned long int)1u, .decompr=".tar",
    .decompr_len=sizeof(char [5l]) /*5ul*/  - (unsigned long int)1u, .chk_compr=1 },
    { .compr="", .compr_len=sizeof(char [1l]) /*1ul*/  - (unsigned long int)1u, .decompr=".out",
    .decompr_len=sizeof(char [5l]) /*5ul*/  - (unsigned long int)1u, .chk_compr=0 } };
// table
// file decode.c line 326
static const unsigned char table[64l] = { (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)1, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)2, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)3, (const unsigned char)4, (const unsigned char)4, (const unsigned char)4, (const unsigned char)4, (const unsigned char)5, (const unsigned char)5, (const unsigned char)6, (const unsigned char)7 };
// tail_offs
// file expand.c line 152
static unsigned long int tail_offs;
// thread_id
// file process.c line 239
unsigned int thread_id;
// total_in_slots
// file process.c line 218
unsigned int total_in_slots;
// total_out_slots
// file process.c line 219
unsigned int total_out_slots;
// trans_q
// file compress.c line 57
static struct anonymous_24 trans_q;
// ultra
// file main.c line 49
_Bool ultra;
// unfinished_work
// file compress.c line 63
static struct work_blk *unfinished_work;
// unord_q
// file expand.c line 158
static struct anonymous_32 unord_q;
// utimensat_works_really
// file utimens.c line 74
static signed int utimensat_works_really;
// verbose
// file main.c line 46
_Bool verbose;
// warned
// file main.c line 58
static _Bool warned;
// work_units
// file process.c line 215
unsigned int work_units;
// worker_thread
// file process.c line 227
static unsigned long int *worker_thread;

// advance
// file expand.c line 348
static void advance(struct detached_bitstream bs)
{
  parser_bs = bs;
  while(!(input_q.size == 0u))
  {
    struct in_blk_0 *blk;
    /* assertion (0u) < (input_q).size */
    assert(0u < input_q.size);
    blk = input_q.root[(signed long int)(input_q.head + 0u + (unsigned int)1 < (input_q.head + 0u + (unsigned int)1) - input_q.modulus ? input_q.head + 0u + (unsigned int)1 : (input_q.head + 0u + (unsigned int)1) - input_q.modulus)];
    if(!(bs.offset >= blk->offset + blk->size))
      break;

    head_offs = head_offs + blk->size;
    /* assertion !(!(input_q).size) */
    assert(!(!(input_q.size != 0u)));
    input_q.size = input_q.size - 1u;
    input_q.head = input_q.head + 1u < (input_q.head + 1u) - input_q.modulus ? input_q.head + 1u : (input_q.head + 1u) - input_q.modulus;
    input_q.root[(signed long int)input_q.head];
    blk->ref_count = blk->ref_count - 1u;
    if(blk->ref_count == 0u)
    {
      source_release_buffer(blk->buffer);
      free((void *)blk);
    }

  }
  while(!(retr_q.size == 0u))
  {
    if((*retr_q.root)->curr_pos.offset >= head_offs)
      break;

    struct retr_blk *rb;
    retr_q.size = retr_q.size - 1u;
    down_heap((void *)retr_q.root, retr_q.size);
    rb = retr_q.root[(signed long int)retr_q.size];
    decoder_free(&rb->ds);
    free((void *)rb);
    work_units = work_units + 1u;
  }
  while(!(scan_q.size == 0u))
  {
    if((*scan_q.root)->offset >= head_offs)
      break;

    scan_q.size = scan_q.size - 1u;
    down_heap((void *)scan_q.root, scan_q.size);
    free((void *)scan_q.root[(signed long int)scan_q.size]);
  }
}

// asnprintf
// file asnprintf.c line 25
extern char * asnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, ...)
{
  void **args;
  char *result;
  args = (void **)&format;
  result=vasnprintf(resultbuf, lengthp, format, args);
  args = ((void **)NULL);
  return result;
}

// assign_codes
// file encode.c line 876
static unsigned int assign_codes(unsigned int *code, unsigned char *length, const unsigned int *frequency, unsigned int as)
{
  unsigned int leaf;
  unsigned int avail;
  unsigned int height;
  unsigned int next_code;
  unsigned int symbol;
  unsigned long int leaf_weight[259l];
  unsigned int count[32l];
  unsigned int base_code[21l];
  unsigned short int tree[21l][21l];
  unsigned int best_cost;
  unsigned int best_height;
  unsigned int depth;
  unsigned int cost;
  leaf = (unsigned int)0;
  for( ; !(leaf >= as); leaf = leaf + 1u)
    leaf_weight[(signed long int)(leaf + (unsigned int)1)] = (unsigned long int)frequency[(signed long int)leaf] << 32 | (unsigned long int)0x10000 | (unsigned long int)((unsigned int)(2 + 255 + 1) - leaf);
  sort_alphabet(leaf_weight + (signed long int)1, leaf_weight + (signed long int)as + (signed long int)1);
  leaf_weight[(signed long int)0] = (unsigned long int)-1;
  bzero((void *)tree, sizeof(unsigned short int [21l][21l]) /*882ul*/ );
  package_merge(tree, count, leaf_weight, (unsigned long int)as);
  best_cost = (unsigned int)-1;
  best_height = (unsigned int)20;
  height = (unsigned int)2;
  signed int tmp_if_expr_1;
  for( ; !(height >= 21u); height = height + 1u)
    if(1UL << height >= (unsigned long int)as)
    {
      if((signed int)tree[(signed long int)height][(signed long int)(height + 4294967295u)] == 0)
        break;

      cost = (unsigned int)0;
      leaf = (unsigned int)0;
      depth = (unsigned int)1;
      for( ; height >= depth; depth = depth + 1u)
      {
        avail = (unsigned int)((signed int)tree[(signed long int)height][(signed long int)(depth - (unsigned int)1)] - (signed int)tree[(signed long int)height][(signed long int)depth]);
        for( ; avail >= 1u; avail = avail - 1u)
        {
          /* assertion leaf < as */
          assert(leaf < as);
          symbol = (unsigned int)((unsigned long int)(2 + 255 + 1) - (leaf_weight[(signed long int)(leaf + (unsigned int)1)] & (unsigned long int)0xFFFF));
          length[(signed long int)symbol] = (unsigned char)depth;
          cost = cost + (unsigned int)(leaf_weight[(signed long int)(leaf + (unsigned int)1)] >> 32) * depth;
          leaf = leaf + 1u;
        }
      }
      symbol = (unsigned int)1;
      for( ; !(symbol >= as); symbol = symbol + 1u)
      {
        if(!((signed int)length[(signed long int)(symbol + 4294967295u)] + -((signed int)length[(signed long int)symbol]) >= (signed int)length[(signed long int)symbol] + -((signed int)length[(signed long int)(symbol + 4294967295u)])))
          tmp_if_expr_1 = (signed int)length[(signed long int)symbol] - (signed int)length[(signed long int)(symbol - (unsigned int)1)];

        else
          tmp_if_expr_1 = (signed int)length[(signed long int)(symbol - (unsigned int)1)] - (signed int)length[(signed long int)symbol];
        cost = cost + (unsigned int)(2 * tmp_if_expr_1);
      }
      cost = cost + (unsigned int)5 + as;
      if(!(cost >= best_cost))
      {
        best_cost = cost;
        best_height = height;
      }

    }

  leaf = (unsigned int)0;
  next_code = (unsigned int)0;
  depth = (unsigned int)1;
  for( ; best_height >= depth; depth = depth + 1u)
  {
    avail = (unsigned int)((signed int)tree[(signed long int)best_height][(signed long int)(depth - (unsigned int)1)] - (signed int)tree[(signed long int)best_height][(signed long int)depth]);
    base_code[(signed long int)depth] = next_code;
    next_code = next_code + avail << 1;
    for( ; avail >= 1u; avail = avail - 1u)
    {
      /* assertion leaf < as */
      assert(leaf < as);
      symbol = (unsigned int)((unsigned long int)(2 + 255 + 1) - (leaf_weight[(signed long int)(leaf + (unsigned int)1)] & (unsigned long int)0xFFFF));
      length[(signed long int)symbol] = (unsigned char)depth;
      leaf = leaf + 1u;
    }
  }
  /* assertion next_code == (1UL << (best_height + 1)) */
  assert((unsigned long int)next_code == 1UL << best_height + (unsigned int)1);
  /* assertion leaf == as */
  assert(leaf == as);
  symbol = (unsigned int)0;
  unsigned int tmp_post_2;
  for( ; !(symbol >= as); symbol = symbol + 1u)
  {
    tmp_post_2 = base_code[(signed long int)length[(signed long int)symbol]];
    base_code[(signed long int)length[(signed long int)symbol]] = base_code[(signed long int)length[(signed long int)symbol]] + 1u;
    code[(signed long int)symbol] = tmp_post_2;
  }
  return best_cost;
}

// attach
// file expand.c line 255
static struct bitstream attach(struct detached_bitstream dbs)
{
  struct in_blk_0 *blk;
  unsigned long int id;
  unsigned long int limit;
  const unsigned int *base;
  struct bitstream bs;
  /* assertion dbs.offset >= head_offs */
  assert(dbs.offset >= head_offs);
  /* assertion dbs.offset <= tail_offs */
  assert(dbs.offset <= tail_offs);
  bs.live = dbs.live;
  bs.buff = dbs.buff;
  bs.eof = dbs.eof;
  if(dbs.offset == tail_offs)
  {
    /* assertion eof */
    assert(eof != (_Bool)0);
    bs.block = (struct in_blk_0 *)(void *)0;
    bs.data = (const unsigned int *)(void *)0;
    bs.limit = (const unsigned int *)(void *)0;
    /* assertion !bs.eof || bs.live < 32 */
    assert(!(bs.eof != (_Bool)0) || bs.live < (unsigned int)32);
    bs.eof = bs.live < 32u;
  }

  else
  {
    id = (unsigned long int)0u;
    limit = head_offs;
    do
    {
      /* assertion (id) < (input_q).size */
      assert(id < (unsigned long int)input_q.size);
      blk = input_q.root[(signed long int)((unsigned long int)input_q.head + id + (unsigned long int)1 < ((unsigned long int)input_q.head + id + (unsigned long int)1) - (unsigned long int)input_q.modulus ? (unsigned long int)input_q.head + id + (unsigned long int)1 : ((unsigned long int)input_q.head + id + (unsigned long int)1) - (unsigned long int)input_q.modulus)];
      limit = limit + blk->size;
      id = id + 1ul;
    }
    while(dbs.offset >= limit);
    blk->ref_count = blk->ref_count + 1u;
    bs.block = blk;
    base = (const unsigned int *)blk->buffer;
    /* assertion dbs.offset >= blk->offset */
    assert(dbs.offset >= blk->offset);
    /* assertion dbs.offset - blk->offset < blk->size */
    assert(dbs.offset - blk->offset < blk->size);
    bs.data = base + (signed long int)(dbs.offset - blk->offset);
    bs.limit = base + (signed long int)blk->size;
  }
  sched_unlock();
  return bs;
}

// bailout
// file signals.h line 27
void bailout(void)
{
  unsigned long int return_value_pthread_self_1;
  return_value_pthread_self_1=pthread_self();
  signed int return_value_pthread_equal_2;
  return_value_pthread_equal_2=pthread_equal(return_value_pthread_self_1, main_thread);
  if(!(return_value_pthread_equal_2 == 0))
  {
    cleanup();
    xmask(1, &blocked, (struct anonymous_11 *)(void *)0);
    _exit(1);
  }

  promote();
  xraise(10);
  pthread_exit((void *)0);
}

// bits_init
// file expand.c line 230
static struct detached_bitstream bits_init(unsigned long int offset)
{
  struct detached_bitstream bs;
  bs.live = 0u;
  bs.buff = (unsigned long int)0u;
  bs.eof = (_Bool)0;
  bs.offset = offset;
  bs.pos.major = offset / (in_granul / (unsigned long int)4);
  bs.pos.minor = offset % (in_granul / (unsigned long int)4) << 32;
  return bs;
}

// build_tree
// file encode.c line 568
static void build_tree(unsigned int * restrict tree, unsigned long int * restrict weight, signed int as)
{
  unsigned int r;
  unsigned int s;
  unsigned int t;
  unsigned long int w1;
  unsigned long int w2;
  r = (unsigned int)as;
  s = (unsigned int)as;
  t = (unsigned int)(as - 1);
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  for( ; t >= 1u; t = t - 1u)
  {
    if(!(s >= 1u))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      if(!(2u + t >= r))
        tmp_if_expr_3 = weight[(signed long int)(r - (unsigned int)2)] < weight[(signed long int)(s - (unsigned int)1)] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
    {
      tree[(signed long int)(r - (unsigned int)1)] = t;
      tree[(signed long int)(r - (unsigned int)2)] = t;
      w1 = weight[(signed long int)(r - (unsigned int)1)];
      w2 = weight[(signed long int)(r - (unsigned int)2)];
      r = r - (unsigned int)2;
    }

    else
    {
      if(!(r >= 2u + t))
        tmp_if_expr_2 = (_Bool)1;

      else
      {
        if(s >= 2u)
          tmp_if_expr_1 = weight[(signed long int)(s - (unsigned int)2)] <= weight[(signed long int)(r - (unsigned int)1)] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_2)
      {
        w1 = weight[(signed long int)(s - (unsigned int)1)];
        w2 = weight[(signed long int)(s - (unsigned int)2)];
        s = s - (unsigned int)2;
      }

      else
      {
        tree[(signed long int)(r - (unsigned int)1)] = t;
        w1 = weight[(signed long int)(r - (unsigned int)1)];
        w2 = weight[(signed long int)(s - (unsigned int)1)];
        s = s - 1u;
        r = r - 1u;
      }
    }
    weight[(signed long int)t] = (weight[(signed long int)t] & (unsigned long int)0xFFFF) + (w1 + w2 & ~((unsigned long int)0xFF00FFFF)) + ((w1 & (unsigned long int)0xFF000000) < (w2 & (unsigned long int)0xFF000000) ? w2 & (unsigned long int)0xFF000000 : w1 & (unsigned long int)0xFF000000) + (unsigned long int)0x01000000;
  }
  /* assertion r == 2 */
  assert(r == (unsigned int)2);
  /* assertion s == 0 */
  assert(s == (unsigned int)0);
  /* assertion t == 0 */
  assert(t == (unsigned int)0);
}

// can_attach
// file expand.c line 246
static _Bool can_attach(struct detached_bitstream bs)
{
  /* assertion bs.offset >= head_offs */
  assert(bs.offset >= head_offs);
  return bs.offset < tail_offs || eof != (_Bool)0 && bs.offset == tail_offs;
}

// can_collect
// file compress.c line 67
static _Bool can_collect(void)
{
  return !(ultra != (_Bool)0) && !(!(coll_q.size != 0u)) && work_units > (unsigned int)0;
}

// can_collect_seq
// file compress.c line 120
static _Bool can_collect_seq(void)
{
  return ultra != (_Bool)0 && collect_token != (_Bool)0 && (!(!(coll_q.size != 0u)) || eof != (_Bool)0 && unfinished_work != (struct work_blk *)(void *)0) && (work_units > (unsigned int)0 || unfinished_work != (struct work_blk *)(void *)0);
}

// can_emit
// file expand.c line 644
static _Bool can_emit(void)
{
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(!(emit_q.size == 0u))
  {
    if(out_slots >= 3u)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(out_slots >= 1u && !(order_q.size == 0u))
      {
        /* assertion (0) < (order_q).size */
        assert((unsigned int)0 < order_q.size);
        if((*emit_q.root)->base.major == (order_q.root + (signed long int)(1u + order_q.head >= 1u + order_q.head + -order_q.modulus ? 1u + order_q.head + -order_q.modulus : 1u + order_q.head))->base.major)
        {
          /* assertion (0) < (order_q).size */
          assert((unsigned int)0 < order_q.size);
          tmp_if_expr_1 = (*emit_q.root)->base.minor == (order_q.root + (signed long int)(order_q.head + (unsigned int)0 + (unsigned int)1 < (order_q.head + (unsigned int)0 + (unsigned int)1) - order_q.modulus ? order_q.head + (unsigned int)0 + (unsigned int)1 : (order_q.head + (unsigned int)0 + (unsigned int)1) - order_q.modulus))->base.minor ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_1 = (_Bool)0;
        tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  return tmp_if_expr_4;
}

// can_parse
// file expand.c line 387
static _Bool can_parse(void)
{
  _Bool tmp_if_expr_2;
  _Bool return_value_can_attach_1;
  if(parsing_done == (_Bool)0 && work_units >= 1u && !(parse_token == (_Bool)0))
  {
    return_value_can_attach_1=can_attach(parser_bs);
    tmp_if_expr_2 = return_value_can_attach_1 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  return tmp_if_expr_2;
}

// can_reorder
// file compress.c line 225
static _Bool can_reorder(void)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(!(reord_q.size == 0u))
  {
    if((*reord_q.root)->pos.major == order.major)
      tmp_if_expr_1 = (*reord_q.root)->pos.minor == order.minor ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  return tmp_if_expr_2;
}

// can_reorder_link1
// file expand.c line 695
static _Bool can_reorder_link1(void)
{
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2_link1;
  _Bool tmp_if_expr_1_link1;
  if(!(reord_q_link1.size == 0u))
  {
    if(!(order_q.size == 0u))
    {
      /* assertion (0) < (order_q).size */
      assert((unsigned int)0 < order_q.size);
      if(!((order_q.root + (signed long int)(1u + order_q.head >= 1u + order_q.head + -order_q.modulus ? 1u + order_q.head + -order_q.modulus : 1u + order_q.head))->base.major >= (*reord_q_link1.root)->base.major))
        tmp_if_expr_2_link1 = (_Bool)1;

      else
      {
        /* assertion (0) < (order_q).size */
        assert((unsigned int)0 < order_q.size);
        if((order_q.root + (signed long int)(1u + order_q.head >= 1u + order_q.head + -order_q.modulus ? 1u + order_q.head + -order_q.modulus : 1u + order_q.head))->base.major == (*reord_q_link1.root)->base.major)
        {
          /* assertion (0) < (order_q).size */
          assert((unsigned int)0 < order_q.size);
          tmp_if_expr_1_link1 = (order_q.root + (signed long int)(order_q.head + (unsigned int)0 + (unsigned int)1 < (order_q.head + (unsigned int)0 + (unsigned int)1) - order_q.modulus ? order_q.head + (unsigned int)0 + (unsigned int)1 : (order_q.head + (unsigned int)0 + (unsigned int)1) - order_q.modulus))->base.minor < (*reord_q_link1.root)->base.minor ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_1_link1 = (_Bool)0;
        tmp_if_expr_2_link1 = tmp_if_expr_1_link1 ? (_Bool)1 : (_Bool)0;
      }
      tmp_if_expr_3 = !tmp_if_expr_2_link1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    tmp_if_expr_4 = (tmp_if_expr_3 ? (_Bool)1 : (!(order_q.size != 0u) && parsing_done != (_Bool)0 ? (_Bool)1 : (_Bool)0)) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  return tmp_if_expr_4;
}

// can_retrieve
// file expand.c line 547
static _Bool can_retrieve(void)
{
  _Bool tmp_if_expr_2;
  _Bool return_value_can_attach_1;
  if(!(retr_q.size == 0u))
  {
    return_value_can_attach_1=can_attach((*retr_q.root)->curr_pos);
    tmp_if_expr_2 = return_value_can_attach_1 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  return tmp_if_expr_2;
}

// can_scan
// file expand.c line 744
static _Bool can_scan(void)
{
  _Bool tmp_if_expr_2;
  _Bool return_value_can_attach_1;
  if(ultra == (_Bool)0 && !(scan_q.size == 0u) && (work_units >= 2u || parse_token == (_Bool)0 && work_units >= 1u))
  {
    return_value_can_attach_1=can_attach(*(*scan_q.root));
    tmp_if_expr_2 = return_value_can_attach_1 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  return tmp_if_expr_2;
}

// can_terminate
// file compress.c line 247
static _Bool can_terminate(void)
{
  return eof != (_Bool)0 && !(coll_q.size != 0u) && work_units == num_worker && out_slots == total_out_slots;
}

// can_terminate_link1
// file expand.c line 818
static _Bool can_terminate_link1(void)
{
  return eof != (_Bool)0 && parsing_done != (_Bool)0 && parse_token != (_Bool)0 && work_units == num_worker && out_slots == total_out_slots;
}

// can_transmit
// file compress.c line 197
static _Bool can_transmit(void)
{
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(!(trans_q.size == 0u))
  {
    if(out_slots >= 3u)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(out_slots >= 1u)
      {
        if((*trans_q.root)->pos.major == order.major)
          tmp_if_expr_1 = (*trans_q.root)->pos.minor == order.minor ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  return tmp_if_expr_4;
}

// cleanup
// file main.c line 63
void cleanup(void)
{
  if(!(opathn == ((char *)NULL)))
  {
    unlink(opathn);
    opathn = (char *)(void *)0;
  }

}

// cli
// file signals.h line 23
void cli(void)
{
  const signed int *sig;
  xmask(0, &handled, &saved);
  sig = handled_signals;
  for( ; !(sig >= handled_signals + 4l); sig = sig + 1l)
    xaction(*sig, signal_handler);
}

// collect
// file encode.h line 30
signed int collect(struct encoder_state *s, const unsigned char *inbuf, unsigned long int *buf_sz)
{
  unsigned long int avail = *buf_sz;
  const unsigned char *p = inbuf;
  const unsigned char *pLim = p + (signed long int)avail;
  unsigned char *q = s->block + (signed long int)s->nblock;
  unsigned char *qMax = (s->block + (signed long int)s->max_block_size) - (signed long int)1;
  unsigned int ch;
  unsigned int last;
  unsigned int run;
  unsigned int save_crc;
  unsigned int crc = s->block_crc;
  _Bool tmp_if_expr_1;
  if(s->rle_state >= 0)
    tmp_if_expr_1 = s->rle_state < 4 + 255 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  /* assertion s->rle_state >= 0 && s->rle_state < (4+255) */
  assert(tmp_if_expr_1);
  const unsigned char *tmp_post_2;
  unsigned char *tmp_post_3;
  const unsigned char *tmp_post_4;
  unsigned char *tmp_post_5;
  const unsigned char *tmp_post_6;
  unsigned char *tmp_post_7;
  const unsigned char *tmp_post_8;
  unsigned char *tmp_post_9;
  const unsigned char *tmp_post_10;
  unsigned char *tmp_post_11;
  const unsigned char *tmp_post_12;
  unsigned char *tmp_post_13;
  _Bool tmp_if_expr_16;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_14;
  const unsigned char *tmp_post_17;
  unsigned char *tmp_post_18;
  const unsigned char *tmp_post_19;
  unsigned char *tmp_post_20;
  unsigned char *tmp_post_21;
  if(!(s->rle_state == 0))
    ch = s->rle_character;

  else
  {

  state0:
    ;
    for( ; (_Bool)1; s->cmap[(signed long int)((4 + 255) - 4)] = (_Bool)1)
    {
      if(!(qMax >= q))
      {
        s->rle_state = -1;
        goto done;
      }

      if(p == pLim)
      {
        s->rle_state = 0;
        goto done;
      }

      tmp_post_2 = p;
      p = p + 1l;
      ch = (unsigned int)*tmp_post_2;
      crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
      do
      {

      state1:
        ;
        s->cmap[(signed long int)ch] = (_Bool)1;
        tmp_post_3 = q;
        q = q + 1l;
        *tmp_post_3 = (unsigned char)ch;
        if(!(qMax >= q))
        {
          s->rle_state = -1;
          goto done;
        }

        if(p == pLim)
        {
          s->rle_state = 1;
          s->rle_character = ch;
          goto done;
        }

        last = ch;
        tmp_post_4 = p;
        p = p + 1l;
        ch = (unsigned int)*tmp_post_4;
        crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
        if(!(ch == last))
        {
          s->cmap[(signed long int)ch] = (_Bool)1;
          tmp_post_5 = q;
          q = q + 1l;
          *tmp_post_5 = (unsigned char)ch;
          if(!(qMax >= q))
          {
            s->rle_state = -1;
            goto done;
          }

          if(p == pLim)
          {
            s->rle_state = 1;
            s->rle_character = ch;
            goto done;
          }

          last = ch;
          tmp_post_6 = p;
          p = p + 1l;
          ch = (unsigned int)*tmp_post_6;
          crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
          if(!(ch == last))
          {
            s->cmap[(signed long int)ch] = (_Bool)1;
            tmp_post_7 = q;
            q = q + 1l;
            *tmp_post_7 = (unsigned char)ch;
            if(!(qMax >= q))
            {
              s->rle_state = -1;
              goto done;
            }

            if(p == pLim)
            {
              s->rle_state = 1;
              s->rle_character = ch;
              goto done;
            }

            last = ch;
            tmp_post_8 = p;
            p = p + 1l;
            ch = (unsigned int)*tmp_post_8;
            crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
            if(!(ch == last))
            {
              s->cmap[(signed long int)ch] = (_Bool)1;
              tmp_post_9 = q;
              q = q + 1l;
              *tmp_post_9 = (unsigned char)ch;
              if(!(qMax >= q))
              {
                s->rle_state = -1;
                goto done;
              }

              if(p == pLim)
              {
                s->rle_state = 1;
                s->rle_character = ch;
                goto done;
              }

              last = ch;
              tmp_post_10 = p;
              p = p + 1l;
              ch = (unsigned int)*tmp_post_10;
              crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
              if(!(ch == last))
                goto state1;

            }

          }

        }


      state2:
        ;
        tmp_post_11 = q;
        q = q + 1l;
        *tmp_post_11 = (unsigned char)ch;
        if(!(qMax >= q))
        {
          s->rle_state = -1;
          goto done;
        }

        if(p == pLim)
        {
          s->rle_state = 2;
          s->rle_character = ch;
          goto done;
        }

        tmp_post_12 = p;
        p = p + 1l;
        ch = (unsigned int)*tmp_post_12;
        crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
        if(!(ch == last))
          goto state1;

        tmp_post_13 = q;
        q = q + 1l;
        *tmp_post_13 = (unsigned char)ch;
        if(q >= qMax)
        {
          if(!(qMax >= q))
            tmp_if_expr_15 = (_Bool)1;

          else
          {
            if(!(p >= pLim))
              tmp_if_expr_14 = (unsigned int)*p == last ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_14 = (_Bool)0;
            tmp_if_expr_15 = tmp_if_expr_14 ? (_Bool)1 : (_Bool)0;
          }
          tmp_if_expr_16 = tmp_if_expr_15 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_16 = (_Bool)0;
        if(tmp_if_expr_16)
        {
          s->rle_state = -1;
          goto done;
        }

        if(p == pLim)
        {
          s->rle_state = 3;
          s->rle_character = ch;
          goto done;
        }

        tmp_post_17 = p;
        p = p + 1l;
        ch = (unsigned int)*tmp_post_17;
        crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
        if(!(ch == last))
          goto state1;

        /* assertion q < qMax */
        assert(q < qMax);
        tmp_post_18 = q;
        q = q + 1l;
        *tmp_post_18 = (unsigned char)ch;
        run = (unsigned int)4;

      __CPROVER_DUMP_L26:
        ;
        if(run >= 259u)
          goto __CPROVER_DUMP_L29;

        if(p == pLim)
        {
          s->rle_state = (signed int)run;
          s->rle_character = ch;
          goto done;
        }

        tmp_post_19 = p;
        p = p + 1l;
        ch = (unsigned int)*tmp_post_19;
        save_crc = crc;
        crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
        if(ch == last)
          goto __CPROVER_DUMP_L28;

        tmp_post_20 = q;
        q = q + 1l;
        *tmp_post_20 = (unsigned char)(run - (unsigned int)4);
        s->cmap[(signed long int)(run - (unsigned int)4)] = (_Bool)1;
      }
      while(qMax >= q);
      p = p - 1l;
      crc = save_crc;
      s->rle_state = -1;
      goto done;

    __CPROVER_DUMP_L28:
      ;
      run = run + 1u;
      goto __CPROVER_DUMP_L26;

    __CPROVER_DUMP_L29:
      ;
      tmp_post_21 = q;
      q = q + 1l;
      *tmp_post_21 = (unsigned char)((4 + 255) - 4);
    }
  }

finish_run:
  ;
  _Bool tmp_if_expr_23;
  _Bool tmp_if_expr_22;
  unsigned char *tmp_post_24;
  unsigned char *tmp_post_25;
  unsigned char *tmp_post_26;
  for( ; (_Bool)1; *tmp_post_26 = (unsigned char)ch)
  {
    if(q >= qMax)
    {
      if(!(qMax >= q))
        tmp_if_expr_23 = (_Bool)1;

      else
      {
        if(s->rle_state == 3 && !(p >= pLim))
          tmp_if_expr_22 = (unsigned int)*p == ch ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_22 = (_Bool)0;
        tmp_if_expr_23 = tmp_if_expr_22 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_23)
      {
        s->rle_state = -1;
        goto done;
      }

    }

    if(p == pLim)
      break;

    if(s->rle_state >= 4)
    {
      /* assertion s->rle_state >= 4 */
      assert(s->rle_state >= 4);
      /* assertion q <= qMax */
      assert(q <= qMax);
      while(!(p >= pLim))
      {
        if(!((unsigned int)*p == ch))
        {
          tmp_post_24 = q;
          q = q + 1l;
          *tmp_post_24 = (unsigned char)(s->rle_state - 4);
          s->cmap[(signed long int)(s->rle_state - 4)] = (_Bool)1;
          goto state0;
        }

        p = p + 1l;
        crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
        s->rle_state = s->rle_state + 1;
        if(s->rle_state == 4)
        {
          tmp_post_25 = q;
          q = q + 1l;
          *tmp_post_25 = (unsigned char)((4 + 255) - 4);
          s->cmap[(signed long int)((4 + 255) - 4)] = (_Bool)1;
          goto state0;
        }

      }
      break;
    }

    if(!((unsigned int)*p == ch))
      goto state0;

    p = p + 1l;
    crc = crc << 8 ^ crc_table[(signed long int)(crc >> 24 ^ ch)];
    s->rle_state = s->rle_state + 1;
    tmp_post_26 = q;
    q = q + 1l;
  }

done:
  ;
  s->nblock = (unsigned int)(q - s->block);
  s->block_crc = crc;
  *buf_sz = *buf_sz - (unsigned long int)(p - inbuf);
  return (signed int)(s->rle_state < 0);
}

// compute_depths
// file encode.c line 613
static void compute_depths(unsigned int * restrict count, unsigned int * restrict tree, unsigned int as)
{
  unsigned int avail;
  unsigned int used;
  unsigned int node;
  unsigned int depth;
  tree[(signed long int)1] = (unsigned int)0;
  count[(signed long int)0] = (unsigned int)0;
  node = (unsigned int)2;
  depth = (unsigned int)1;
  avail = (unsigned int)2;
  unsigned int tmp_post_1;
  for( ; !(depth >= 31u); avail = used << 1)
  {
    used = (unsigned int)0;
    for( ; !(node >= as); tree[(signed long int)tmp_post_1] = depth)
    {
      if(!(1u + tree[(signed long int)tree[(signed long int)node]] == depth))
        break;

      /* assertion avail > used */
      assert(avail > used);
      used = used + 1u;
      tmp_post_1 = node;
      node = node + 1u;
    }
    count[(signed long int)depth] = avail - used;
    depth = depth + 1u;
  }
  /* assertion avail == 0 */
  assert(avail == (unsigned int)0);
}

// construct_BWT
// file divbwt.c line 1688
static signed int construct_BWT(const unsigned char *T, signed int *SA, signed int *bucket_A, signed int *bucket_B, signed int n)
{
  signed int *i;
  signed int *j;
  signed int *k;
  signed int s;
  signed int t;
  signed int orig = -10;
  signed long int c0;
  signed long int c1;
  signed long int c2;
  c1 = (signed long int)(256 - 2);
  signed int *tmp_post_1;
  signed int tmp_if_expr_2;
  for( ; c1 >= 0l; c1 = c1 - 1l)
  {
    i = SA + (signed long int)bucket_B[c1 << 8 | c1 + (signed long int)1];
    j = (SA + (signed long int)bucket_A[c1 + (signed long int)1]) - (signed long int)1;
    k = (signed int *)(void *)0;
    c2 = (signed long int)-1;
    for( ; j >= i; j = j - 1l)
    {
      s = *j;
      if(s >= 0)
      {
        /* assertion s < n */
        assert(s < n);
        /* assertion T[s] == c1 */
        assert((signed long int)T[(signed long int)s] == c1);
        /* assertion T[s] <= T[((s + 1) < n) ? (s + 1) : (0)] */
        assert((signed int)T[(signed long int)s] <= (signed int)T[(signed long int)(s + 1 < n ? s + 1 : 0)]);
        if(!(s == 0))
          t = s - 1;

        else
        {
          t = n - 1;
          orig = (signed int)(j - SA);
        }
        /* assertion T[t] <= T[s] */
        assert((signed int)T[(signed long int)t] <= (signed int)T[(signed long int)s]);
        c0 = (signed long int)T[(signed long int)t];
        *j = ~((signed int)c0);
        if(!(c0 == c2))
        {
          if(c2 >= 0l)
            bucket_B[c1 << 8 | c2] = (signed int)(k - SA);

          c2 = c0;
          k = SA + (signed long int)bucket_B[c1 << 8 | c2];
        }

        /* assertion k < j */
        assert(k < j);
        tmp_post_1 = k;
        k = k - 1l;
        if(!(t == 0))
          tmp_if_expr_2 = (signed int)T[(signed long int)(t - 1)];

        else
          tmp_if_expr_2 = (signed int)T[(signed long int)(n - 1)];
        *tmp_post_1 = (signed long int)tmp_if_expr_2 > c2 ? ~t : t;
      }

      else
      {
        *j = ~s;
        /* assertion ~s < n */
        assert(~s < n);
      }
    }
  }
  c2 = (signed long int)0;
  k = SA + (signed long int)bucket_A[c2];
  i = SA;
  j = SA + (signed long int)n;
  signed int *tmp_post_3;
  for( ; !(i >= j); i = i + 1l)
  {
    s = *i;
    if(s >= 0)
    {
      if(!(s == 0))
        t = s - 1;

      else
      {
        t = n - 1;
        orig = (signed int)(i - SA);
      }
      /* assertion T[t] >= T[s] */
      assert((signed int)T[(signed long int)t] >= (signed int)T[(signed long int)s]);
      c0 = (signed long int)T[(signed long int)t];
      *i = (signed int)c0;
      if(!(c0 == c2))
      {
        bucket_A[c2] = (signed int)(k - SA);
        c2 = c0;
        k = SA + (signed long int)bucket_A[c2];
      }

      if(!(t == 0))
        c1 = (signed long int)T[(signed long int)(t - 1)];

      else
      {
        c1 = (signed long int)T[(signed long int)(n - 1)];
        orig = (signed int)(k - SA);
      }
      /* assertion i <= k */
      assert(i <= k);
      tmp_post_3 = k;
      k = k + 1l;
      *tmp_post_3 = c1 < c2 ? ~((signed int)c1) : t;
    }

    else
      *i = ~s;
  }
  /* assertion orig != -10 */
  assert(orig != -10);
  /* assertion (0 <= orig) && (orig < n) */
  assert(0 <= orig && orig < n);
  return orig;
}

// copy
// file process.c line 567
static void copy(void)
{
  eof = (_Bool)0;
  in_slots = (unsigned int)2;
  out_slots = (unsigned int)2;
  total_out_slots = (unsigned int)2;
  in_granul = (unsigned long int)65536;
  static struct task null_task = { .name=(const char *)(void *)0, .ready=(_Bool (*)(void))(void *)0, .run=(void (*)(void))(void *)0 };
  static struct process pseudo_process = { .tasks=&null_task, .init=(void (*)(void))(void *)0, .uninit=(void (*)(void))(void *)0,
    .finished=copy_terminate, .on_block=copy_on_input_avail,
    .on_written=copy_on_write_complete };
  process = &pseudo_process;
  init_io();
  halt();
  uninit_io();
}

// copy_on_input_avail
// file process.c line 536
static void copy_on_input_avail(void *buffer, unsigned long int size)
{
  sched_lock();
  out_slots = out_slots - 1u;
  sched_unlock();
  sink_write_buffer(buffer, size, size);
}

// copy_on_write_complete
// file process.c line 547
static void copy_on_write_complete(void *buffer)
{
  source_release_buffer(buffer);
  sched_lock();
  out_slots = out_slots + 1u;
  sched_unlock();
}

// copy_terminate
// file process.c line 558
static _Bool copy_terminate(void)
{
  if(out_slots == total_out_slots && !(eof == (_Bool)0))
    xraise(12);

  return (_Bool)0;
}

// decimal_point_char
// file vasnprintf.c line 274
static char decimal_point_char(void)
{
  const char *point;
  char pointbuf[5l];
  sprintf(pointbuf, "%#.0f", 1.0);
  point = &pointbuf[(signed long int)1];
  signed int tmp_if_expr_1;
  if(!((signed int)*point == 0))
    tmp_if_expr_1 = (signed int)point[(signed long int)0];

  else
    tmp_if_expr_1 = 46;
  return (char)tmp_if_expr_1;
}

// decode
// file decode.c line 852
void decode(struct decoder_state *ds)
{
  unsigned int i;
  unsigned int j = (unsigned int)0;
  unsigned int cum;
  unsigned char uc;
  unsigned int *tt = ds->tt;
  cum = (unsigned int)0;
  i = (unsigned int)0;
  for( ; !(i >= 256u); i = i + 1u)
  {
    cum = cum + ds->ftab[(signed long int)i];
    ds->ftab[(signed long int)i] = cum - ds->ftab[(signed long int)i];
  }
  /* assertion cum == ds->block_size */
  assert(cum == ds->block_size);
  i = 0u;
  for( ; !(i >= ds->block_size); i = i + 1u)
  {
    uc = (unsigned char)tt[(signed long int)i];
    tt[(signed long int)ds->ftab[(signed long int)uc]] = tt[(signed long int)ds->ftab[(signed long int)uc]] + (i << 8);
    ds->ftab[(signed long int)uc] = ds->ftab[(signed long int)uc] + 1u;
  }
  /* assertion ds->ftab[255] == ds->block_size */
  assert(ds->ftab[(signed long int)255] == ds->block_size);
  if(!((signed long int)ds->rand == 0l))
  {
    unsigned char *block;
    void *return_value_xmalloc_1;
    return_value_xmalloc_1=xmalloc((unsigned long int)ds->block_size);
    block = (unsigned char *)return_value_xmalloc_1;
    j = tt[(signed long int)ds->bwt_idx];
    i = (unsigned int)0;
    for( ; !(i >= ds->block_size); i = i + 1u)
    {
      j = tt[(signed long int)(j >> 8)];
      block[(signed long int)i] = (unsigned char)j;
    }
    i = (unsigned int)0;
    j = 617u;
    for( ; !(j >= ds->block_size); j = j + (unsigned int)rand_table[(signed long int)i])
    {
      block[(signed long int)j] = block[(signed long int)j] ^ (unsigned char)1;
      i = i + (unsigned int)1 & (unsigned int)0x1FF;
    }
    i = (unsigned int)0;
    for( ; !(i >= ds->block_size); i = i + 1u)
      tt[(signed long int)i] = (i + (unsigned int)1 << 8) + (unsigned int)block[(signed long int)i];
    free((void *)block);
  }

  ds->rle_state = 0;
  ds->rle_crc = (unsigned int)-1;
  unsigned int tmp_if_expr_2;
  if(!(ds->rand == (_Bool)0))
    tmp_if_expr_2 = (unsigned int)0;

  else
    tmp_if_expr_2 = ds->tt[(signed long int)ds->bwt_idx];
  ds->rle_index = tmp_if_expr_2;
  ds->rle_avail = ds->block_size;
  ds->rle_prev = (unsigned char)0;
  ds->rle_char = (unsigned char)0;
}

// decoder_free
// file decode.c line 1152
void decoder_free(struct decoder_state *ds)
{
  free((void *)ds->tt);
  free((void *)ds->internal_state);
}

// decoder_init
// file decode.c line 1141
void decoder_init(struct decoder_state *ds)
{
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct retriever_internal_state) /*58368ul*/ );
  ds->internal_state = (struct retriever_internal_state *)return_value_xmalloc_1;
  ds->internal_state->state = (unsigned int)0;
  void *return_value_xnmalloc_2;
  return_value_xnmalloc_2=xnmalloc((unsigned long int)900000, sizeof(unsigned int) /*4ul*/ );
  ds->tt = (unsigned int *)return_value_xnmalloc_2;
  ds->block_size = (unsigned int)0;
}

// detach
// file expand.c line 307
static struct detached_bitstream detach(struct bitstream bs)
{
  struct detached_bitstream dbs;
  struct in_blk_0 *blk;
  unsigned int bit_offset;
  unsigned long int offset;
  signed long int remains;
  sched_lock();
  remains = bs.limit - bs.data;
  /* assertion remains >= 0 */
  assert(remains >= (signed long int)0);
  blk = bs.block;
  unsigned long int tmp_if_expr_1;
  if(!(blk == ((struct in_blk_0 *)NULL)))
    tmp_if_expr_1 = (blk->offset + blk->size) - (unsigned long int)remains;

  else
    tmp_if_expr_1 = tail_offs;
  offset = tmp_if_expr_1;
  offset = offset < tail_offs ? offset : tail_offs;
  dbs.live = bs.live;
  dbs.buff = bs.buff;
  dbs.eof = bs.eof;
  dbs.offset = offset;
  bit_offset = -bs.live % 32u;
  offset = offset - (unsigned long int)((bs.live + 31u) / 32u);
  /* assertion bit_offset < 32u */
  assert(bit_offset < 32u);
  /* assertion 32u * dbs.offset - dbs.live == 32u * offset + bit_offset */
  assert((unsigned long int)32u * dbs.offset - (unsigned long int)dbs.live == (unsigned long int)32u * offset + (unsigned long int)bit_offset);
  dbs.pos.major = offset / (in_granul / (unsigned long int)4);
  dbs.pos.minor = (offset % (in_granul / (unsigned long int)4) << 32) + (unsigned long int)(bit_offset << 27);
  if(!(blk == ((struct in_blk_0 *)NULL)))
  {
    blk->ref_count = blk->ref_count - 1u;
    if(blk->ref_count == 0u)
    {
      source_release_buffer(blk->buffer);
      free((void *)blk);
    }

  }

  return dbs;
}

// display
// file main.c line 135
void display(const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(((struct filespec *)NULL), 0, fmt, args, 0);
  args = ((void **)NULL);
  funlockfile(stderr);
}

// divbwt
// file divbwt.c line 1760
signed int divbwt(unsigned char *T, signed int *SA, signed int n)
{
  signed int *bucket_A;
  signed int *bucket_B;
  signed int m;
  signed int pidx;
  signed int i;
  /* assertion n > 0 */
  assert(n > 0);
  if(n == 1)
  {
    SA[(signed long int)0] = (signed int)T[(signed long int)0];
    return 0;
  }

  else
  {
    T[(signed long int)n] = T[(signed long int)0];
    void *return_value_xcalloc_1;
    return_value_xcalloc_1=xcalloc((unsigned long int)256, sizeof(signed int) /*4ul*/ );
    bucket_A = (signed int *)return_value_xcalloc_1;
    void *return_value_xcalloc_2;
    return_value_xcalloc_2=xcalloc((unsigned long int)(256 * 256), sizeof(signed int) /*4ul*/ );
    bucket_B = (signed int *)return_value_xcalloc_2;
    m=sort_typeBstar(T, SA, bucket_A, bucket_B, n);
    if(m >= 1)
      pidx=construct_BWT(T, SA, bucket_A, bucket_B, n);

    else
    {
      pidx = 0;
      i = 0;
      for( ; !(i >= n); i = i + 1)
        SA[(signed long int)i] = (signed int)T[(signed long int)0];
    }
    free((void *)bucket_B);
    free((void *)bucket_A);
    return pidx;
  }
}

// do_collect
// file compress.c line 74
static void do_collect(void)
{
  struct in_blk *iblk;
  struct work_blk *wblk;
  coll_q.size = coll_q.size - 1u;
  down_heap((void *)coll_q.root, coll_q.size);
  iblk = coll_q.root[(signed long int)coll_q.size];
  work_units = work_units - 1u;
  sched_unlock();
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct work_blk) /*72ul*/ );
  wblk = (struct work_blk *)return_value_xmalloc_1;
  wblk->pos = iblk->pos;
  wblk->next = iblk->pos;
  wblk->enc=encoder_init((unsigned long int)(bs100k * 100000u), 8u);
  wblk->weight = iblk->left;
  collect(wblk->enc, iblk->next, &iblk->left);
  wblk->weight = wblk->weight - iblk->left;
  iblk->next = iblk->next + (signed long int)wblk->weight;
  unsigned int tmp_post_2;
  if(iblk->left >= 1ul)
  {
    wblk->next.minor = wblk->next.minor + 1ul;
    iblk->pos.minor = iblk->pos.minor + 1ul;
    sched_lock();
    coll_q.root[(signed long int)coll_q.size] = iblk;
    tmp_post_2 = coll_q.size;
    coll_q.size = coll_q.size + 1u;
    up_heap((void *)coll_q.root, tmp_post_2);
    sched_unlock();
  }

  else
  {
    wblk->next.major = wblk->next.major + 1ul;
    wblk->next.minor = (unsigned long int)0;
    source_release_buffer(iblk->buffer);
    free((void *)iblk);
  }
  wblk->size=encode(wblk->enc, &wblk->crc);
  sched_lock();
  trans_q.root[(signed long int)trans_q.size] = wblk;
  unsigned int tmp_post_3 = trans_q.size;
  trans_q.size = trans_q.size + 1u;
  up_heap((void *)trans_q.root, tmp_post_3);
}

// do_collect_seq
// file compress.c line 127
static void do_collect_seq(void)
{
  struct in_blk *iblk;
  struct work_blk *wblk;
  _Bool done = (_Bool)1;
  wblk = unfinished_work;
  unfinished_work = (struct work_blk *)(void *)0;
  if(wblk == ((struct work_blk *)NULL))
    work_units = work_units - 1u;

  iblk = (struct in_blk *)(void *)0;
  if(!(coll_q.size == 0u))
  {
    coll_q.size = coll_q.size - 1u;
    down_heap((void *)coll_q.root, coll_q.size);
    iblk = coll_q.root[(signed long int)coll_q.size];
  }

  collect_token = (_Bool)0;
  sched_unlock();
  if(wblk == ((struct work_blk *)NULL))
  {
    void *return_value_xmalloc_1;
    return_value_xmalloc_1=xmalloc(sizeof(struct work_blk) /*72ul*/ );
    wblk = (struct work_blk *)return_value_xmalloc_1;
    wblk->pos = iblk->pos;
    wblk->next = iblk->pos;
    wblk->enc=encoder_init((unsigned long int)(bs100k * 100000u), 8u);
    wblk->weight = (unsigned long int)0;
  }

  unsigned int tmp_post_3;
  if(!(iblk == ((struct in_blk *)NULL)))
  {
    wblk->size = iblk->left;
    signed int return_value_collect_2;
    return_value_collect_2=collect(wblk->enc, iblk->next, &iblk->left);
    done = (_Bool)return_value_collect_2;
    wblk->size = wblk->size - iblk->left;
    wblk->weight = wblk->weight + wblk->size;
    iblk->next = iblk->next + (signed long int)wblk->size;
    if(iblk->left >= 1ul)
    {
      wblk->next.minor = wblk->next.minor + 1ul;
      iblk->pos.minor = iblk->pos.minor + 1ul;
      sched_lock();
      coll_q.root[(signed long int)coll_q.size] = iblk;
      tmp_post_3 = coll_q.size;
      coll_q.size = coll_q.size + 1u;
      up_heap((void *)coll_q.root, tmp_post_3);
      sched_unlock();
    }

    else
    {
      wblk->next.major = wblk->next.major + 1ul;
      wblk->next.minor = (unsigned long int)0;
      source_release_buffer(iblk->buffer);
      free((void *)iblk);
    }
  }

  unsigned int tmp_post_4;
  if(done == (_Bool)0)
  {
    sched_lock();
    collect_token = (_Bool)1;
    unfinished_work = wblk;
  }

  else
  {
    sched_lock();
    collect_token = (_Bool)1;
    sched_unlock();
    wblk->size=encode(wblk->enc, &wblk->crc);
    sched_lock();
    trans_q.root[(signed long int)trans_q.size] = wblk;
    tmp_post_4 = trans_q.size;
    trans_q.size = trans_q.size + 1u;
    up_heap((void *)trans_q.root, tmp_post_4);
  }
}

// do_emit
// file expand.c line 653
static void do_emit(void)
{
  struct emit_blk *eb;
  struct out_blk *oblk;
  signed int rv;
  out_slots = out_slots - 1u;
  emit_q.size = emit_q.size - 1u;
  down_heap((void *)emit_q.root, emit_q.size);
  eb = emit_q.root[(signed long int)emit_q.size];
  sched_unlock();
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct out_blk) /*48ul*/  + out_granul);
  oblk = (struct out_blk *)return_value_xmalloc_1;
  oblk->size = out_granul;
  oblk->blk_sz = eb->ds.block_size;
  rv = eb->status;
  if(rv == 0)
    rv=emit(&eb->ds, (void *)(oblk + (signed long int)1), &oblk->size);

  oblk->size = out_granul - oblk->size;
  oblk->status = rv;
  oblk->base = eb->base;
  unsigned int tmp_post_2;
  if(rv == 1)
  {
    oblk->end_offset = (unsigned long int)0;
    eb->base.minor = eb->base.minor + 1ul;
    sched_lock();
    emit_q.root[(signed long int)emit_q.size] = eb;
    tmp_post_2 = emit_q.size;
    emit_q.size = emit_q.size + 1u;
    up_heap((void *)emit_q.root, tmp_post_2);
  }

  else
  {
    oblk->end_offset = eb->end_offset;
    oblk->crc = eb->ds.crc;
    decoder_free(&eb->ds);
    free((void *)eb);
    sched_lock();
    work_units = work_units + 1u;
  }
  reord_q_link1.root[(signed long int)reord_q_link1.size] = oblk;
  unsigned int tmp_post_3 = reord_q_link1.size;
  reord_q_link1.size = reord_q_link1.size + 1u;
  up_heap((void *)reord_q_link1.root, tmp_post_3);
}

// do_mtf
// file encode.c line 356
static unsigned int do_mtf(unsigned short int *mtfv, unsigned int *mtffreq, unsigned char *cmap, signed int nblock, signed int EOB)
{
  unsigned char do_mtf__1__order[255l];
  signed int i;
  signed int k;
  signed int t;
  unsigned char c;
  unsigned char u;
  unsigned int *bwt = (unsigned int *)(void *)mtfv;
  const unsigned short int *mtfv0 = mtfv;
  i = 0;
  for( ; EOB >= i; i = i + 1)
    mtffreq[(signed long int)i] = (unsigned int)0;
  k = 0;
  u = (unsigned char)0;
  i = 0;
  for( ; !(i >= 255); i = i + 1)
    do_mtf__1__order[(signed long int)i] = (unsigned char)(i + 1);
  i = 0;
  unsigned int *tmp_post_1;
  unsigned short int *tmp_post_2;
  unsigned short int *tmp_post_3;
  for( ; !(i >= nblock); i = i + 1)
  {
    tmp_post_1 = bwt;
    bwt = bwt + 1l;
    c = cmap[(signed long int)*tmp_post_1];
    if(c == u)
      k = k + 1;

    else
    {
      if(!((signed long int)k == 0l))
        do
        {
          tmp_post_2 = mtfv;
          mtfv = mtfv + 1l;
          k = k - 1;
          *tmp_post_2 = (unsigned short int)(k & 1);
          mtffreq[(signed long int)*tmp_post_2] = mtffreq[(signed long int)*tmp_post_2] + 1u;
          k = k >> 1;
        }
        while(!(k == 0));

      unsigned char *p = do_mtf__1__order;
      t = (signed int)*p;
      *p = u;
      for( ; (_Bool)1; *p = u)
      {
        if((signed int)c == t)
        {
          u = (unsigned char)t;
          goto __CPROVER_DUMP_L11;
        }

        p = p + 1l;
        u = *p;
        *p = (unsigned char)t;
        if(c == u)
          break;

        p = p + 1l;
        t = (signed int)*p;
      }

    __CPROVER_DUMP_L11:
      ;
      t = (signed int)((p - do_mtf__1__order) + (signed long int)2);
      tmp_post_3 = mtfv;
      mtfv = mtfv + 1l;
      *tmp_post_3 = (unsigned short int)t;
      mtffreq[(signed long int)t] = mtffreq[(signed long int)t] + 1u;
    }
  }
  unsigned short int *tmp_post_4;
  if(!((signed long int)k == 0l))
    do
    {
      tmp_post_4 = mtfv;
      mtfv = mtfv + 1l;
      k = k - 1;
      *tmp_post_4 = (unsigned short int)(k & 1);
      mtffreq[(signed long int)*tmp_post_4] = mtffreq[(signed long int)*tmp_post_4] + 1u;
      k = k >> 1;
    }
    while(!(k == 0));

  unsigned short int *tmp_post_5 = mtfv;
  mtfv = mtfv + 1l;
  *tmp_post_5 = (unsigned short int)EOB;
  mtffreq[(signed long int)EOB] = mtffreq[(signed long int)EOB] + 1u;
  return (unsigned int)(mtfv - mtfv0);
}

// do_parse
// file expand.c line 394
static void do_parse(void)
{
  signed int rv;
  struct head_blk head_blk;
  struct bitstream true_bitstream;
  unsigned int garbage;
  parse_token = (_Bool)0;
  work_units = work_units - 1u;
  true_bitstream=attach(parser_bs);
  rv=parse(&par, &head_blk.hdr, &true_bitstream, &garbage);
  struct detached_bitstream return_value_detach_1;
  return_value_detach_1=detach(true_bitstream);
  advance(return_value_detach_1);
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_6;
  unsigned int tmp_post_5;
  if(rv == 1)
  {
    parse_token = (_Bool)1;
    work_units = work_units + 1u;
  }

  else
    if(rv == 2)
    {
      source_close();
      parse_token = (_Bool)1;
      parsing_done = (_Bool)1;
      /* assertion garbage <= 32 */
      assert(garbage <= (unsigned int)32);
      /* assertion parser_bs.live < 32 */
      assert(parser_bs.live < (unsigned int)32);
      /* assertion parser_bs.offset <= tail_offs */
      assert(parser_bs.offset <= tail_offs);
      parser_bs.live = parser_bs.live + garbage;
      if(parser_bs.live >= 32u)
      {
        parser_bs.live = parser_bs.live - (unsigned int)32;
        parser_bs.offset = parser_bs.offset - 1ul;
      }

      if(parser_bs.offset == tail_offs && !(parser_bs.live >= 8u * eof_missing))
      {
        const char *return_value_err2str_2;
        return_value_err2str_2=err2str(19);
        failf(&ispec, "compressed data error: %s", return_value_err2str_2);
      }

      while(!(input_q.size == 0u))
      {
        struct in_blk_0 *blk;
        /* assertion !(!(input_q).size) */
        assert(!(!(input_q.size != 0u)));
        input_q.size = input_q.size - 1u;
        input_q.head = input_q.head + 1u < (input_q.head + 1u) - input_q.modulus ? input_q.head + 1u : (input_q.head + 1u) - input_q.modulus;
        blk = input_q.root[(signed long int)input_q.head];
        head_offs = head_offs + blk->size;
        blk->ref_count = blk->ref_count - 1u;
        if(blk->ref_count == 0u)
        {
          source_release_buffer(blk->buffer);
          free((void *)blk);
        }

      }
      while(!(retr_q.size == 0u))
      {
        struct retr_blk *do_parse__1__2__4__rb;
        retr_q.size = retr_q.size - 1u;
        down_heap((void *)retr_q.root, retr_q.size);
        do_parse__1__2__4__rb = retr_q.root[(signed long int)retr_q.size];
        decoder_free(&do_parse__1__2__4__rb->ds);
        free((void *)do_parse__1__2__4__rb);
        work_units = work_units + 1u;
      }
      while(!(scan_q.size == 0u))
      {
        scan_q.size = scan_q.size - 1u;
        down_heap((void *)scan_q.root, scan_q.size);
        free((void *)scan_q.root[(signed long int)scan_q.size]);
      }
      while(!(unord_q.size == 0u))
      {
        struct unord_blk *ublk;
        unord_q.size = unord_q.size - 1u;
        down_heap((void *)unord_q.root, unord_q.size);
        ublk = unord_q.root[(signed long int)unord_q.size];
        if(!(ublk->complete == (_Bool)0))
          free((void *)ublk);

        else
        {
          ublk->complete = (_Bool)1;
          ublk->legitimate = (_Bool)0;
        }
      }
      work_units = work_units + 1u;
    }

    else
    {
      if(!(rv == 0))
      {
        const char *return_value_err2str_3;
        return_value_err2str_3=err2str(rv);
        failf(&ispec, "compressed data error: %s", return_value_err2str_3);
      }

      head_blk.base = parser_bs.pos;
      /* assertion (order_q).size < (order_q).modulus */
      assert(order_q.size < order_q.modulus);
      order_q.size = order_q.size + 1u;
      order_q.root[(signed long int)(order_q.head + order_q.size < (order_q.head + order_q.size) - order_q.modulus ? order_q.head + order_q.size : (order_q.head + order_q.size) - order_q.modulus)] = head_blk;
      while(!(unord_q.size == 0u))
      {
        if((*unord_q.root)->base.major >= parser_bs.pos.major)
        {
          if((*unord_q.root)->base.major == parser_bs.pos.major)
          {
            if((*unord_q.root)->base.minor >= parser_bs.pos.minor)
              goto __CPROVER_DUMP_L14;

          }

          else
          {

          __CPROVER_DUMP_L14:
            ;
            break;
          }
        }

        struct unord_blk *do_parse__1__4__ublk;
        unord_q.size = unord_q.size - 1u;
        down_heap((void *)unord_q.root, unord_q.size);
        do_parse__1__4__ublk = unord_q.root[(signed long int)unord_q.size];
        if(!(do_parse__1__4__ublk->complete == (_Bool)0))
          free((void *)do_parse__1__4__ublk);

        else
        {
          do_parse__1__4__ublk->complete = (_Bool)1;
          do_parse__1__4__ublk->legitimate = (_Bool)0;
        }
      }
      if(!(unord_q.size == 0u))
      {
        if((*unord_q.root)->base.major == parser_bs.pos.major)
          tmp_if_expr_6 = (*unord_q.root)->base.minor == parser_bs.pos.minor ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        tmp_if_expr_7 = tmp_if_expr_6 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_7 = (_Bool)0;
      if(tmp_if_expr_7)
      {
        struct unord_blk *do_parse__1__5__ublk;
        unord_q.size = unord_q.size - 1u;
        down_heap((void *)unord_q.root, unord_q.size);
        do_parse__1__5__ublk = unord_q.root[(signed long int)unord_q.size];
        advance(do_parse__1__5__ublk->end_pos);
        if(!(do_parse__1__5__ublk->complete == (_Bool)0))
        {
          parse_token = (_Bool)1;
          free((void *)do_parse__1__5__ublk);
        }

        else
        {
          do_parse__1__5__ublk->complete = (_Bool)1;
          do_parse__1__5__ublk->legitimate = (_Bool)1;
        }
        work_units = work_units + 1u;
      }

      else
      {
        struct retr_blk *rb;
        void *return_value_xmalloc_4;
        return_value_xmalloc_4=xmalloc(sizeof(struct retr_blk) /*1152ul*/ );
        rb = (struct retr_blk *)return_value_xmalloc_4;
        rb->unord_link = (struct unord_blk *)(void *)0;
        decoder_init(&rb->ds);
        rb->curr_pos = parser_bs;
        rb->base = parser_bs.pos;
        retr_q.root[(signed long int)retr_q.size] = rb;
        tmp_post_5 = retr_q.size;
        retr_q.size = retr_q.size + 1u;
        up_heap((void *)retr_q.root, tmp_post_5);
      }
    }
}

// do_reorder
// file compress.c line 232
static void do_reorder(void)
{
  struct work_blk *wblk;
  reord_q.size = reord_q.size - 1u;
  down_heap((void *)reord_q.root, reord_q.size);
  wblk = reord_q.root[(signed long int)reord_q.size];
  order = wblk->next;
  sink_write_buffer(wblk->buffer, wblk->size, wblk->weight);
  combined_crc = combined_crc << 1 ^ combined_crc >> 31 ^ wblk->crc ^ (unsigned int)-1;
  free((void *)wblk);
}

// do_reorder_link1
// file expand.c line 704
static void do_reorder_link1(void)
{
  struct out_blk *oblk;
  struct head_blk ord;
  unsigned long int offs_incr;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(order_q.size == 0u)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    /* assertion (0) < (order_q).size */
    assert((unsigned int)0 < order_q.size);
    if(!((*reord_q_link1.root)->base.major >= (order_q.root + (signed long int)(1u + order_q.head >= 1u + order_q.head + -order_q.modulus ? 1u + order_q.head + -order_q.modulus : 1u + order_q.head))->base.major))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      /* assertion (0) < (order_q).size */
      assert((unsigned int)0 < order_q.size);
      if((*reord_q_link1.root)->base.major == (order_q.root + (signed long int)(1u + order_q.head >= 1u + order_q.head + -order_q.modulus ? 1u + order_q.head + -order_q.modulus : 1u + order_q.head))->base.major)
      {
        /* assertion (0) < (order_q).size */
        assert((unsigned int)0 < order_q.size);
        tmp_if_expr_1 = (*reord_q_link1.root)->base.minor < (order_q.root + (signed long int)(order_q.head + (unsigned int)0 + (unsigned int)1 < (order_q.head + (unsigned int)0 + (unsigned int)1) - order_q.modulus ? order_q.head + (unsigned int)0 + (unsigned int)1 : (order_q.head + (unsigned int)0 + (unsigned int)1) - order_q.modulus))->base.minor ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_1 = (_Bool)0;
      tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
    }
    tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
  }
  unsigned long int tmp_if_expr_4;
  const char *return_value_err2str_5;
  if(tmp_if_expr_3)
  {
    reord_q_link1.size = reord_q_link1.size - 1u;
    down_heap((void *)reord_q_link1.root, reord_q_link1.size);
    free((void *)reord_q_link1.root[(signed long int)reord_q_link1.size]);
    out_slots = out_slots + 1u;
  }

  else
  {
    /* assertion !(!(order_q).size) */
    assert(!(!(order_q.size != 0u)));
    order_q.size = order_q.size - 1u;
    order_q.head = order_q.head + 1u < (order_q.head + 1u) - order_q.modulus ? order_q.head + 1u : (order_q.head + 1u) - order_q.modulus;
    ord = order_q.root[(signed long int)order_q.head];
    reord_q_link1.size = reord_q_link1.size - 1u;
    down_heap((void *)reord_q_link1.root, reord_q_link1.size);
    oblk = reord_q_link1.root[(signed long int)reord_q_link1.size];
    if(!(reord_offs >= oblk->end_offset))
      tmp_if_expr_4 = oblk->end_offset - reord_offs;

    else
      tmp_if_expr_4 = (unsigned long int)0u;
    offs_incr = tmp_if_expr_4;
    reord_offs = reord_offs + offs_incr;
    if(!(100000u * (unsigned int)ord.hdr.bs100k >= oblk->blk_sz))
      oblk->status = 17;

    if(oblk->status == 1)
    {
      ord.base.minor = ord.base.minor + 1ul;
      /* assertion (order_q).size < (order_q).modulus */
      assert(order_q.size < order_q.modulus);
      order_q.size = order_q.size + 1u;
      order_q.root[(signed long int)order_q.head] = ord;
      order_q.head = order_q.head - (unsigned int)1 < (order_q.head - (unsigned int)1) + order_q.modulus ? order_q.head - (unsigned int)1 : (order_q.head - (unsigned int)1) + order_q.modulus;
    }

    else
    {
      if(oblk->status == 0)
      {
        if(!(oblk->crc == ord.hdr.crc))
          oblk->status = 15;

      }

      if(!(oblk->status == 0))
      {
        return_value_err2str_5=err2str(oblk->status);
        failf(&ispec, "compressed data error: %s", return_value_err2str_5);
      }

    }
    sink_write_buffer((void *)(oblk + (signed long int)1), oblk->size, (unsigned long int)4 * offs_incr);
  }
}

// do_retrieve
// file expand.c line 553
static void do_retrieve(void)
{
  struct retr_blk *rb;
  struct emit_blk *eb;
  struct bitstream true_bitstream;
  signed int rv;
  /* assertion !parsing_done */
  assert(!(parsing_done != (_Bool)0));
  retr_q.size = retr_q.size - 1u;
  down_heap((void *)retr_q.root, retr_q.size);
  rb = retr_q.root[(signed long int)retr_q.size];
  true_bitstream=attach(rb->curr_pos);
  rv=retrieve(&rb->ds, &true_bitstream);
  rb->curr_pos=detach(true_bitstream);
  _Bool tmp_if_expr_1;
  unsigned int tmp_post_2;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  unsigned int tmp_post_7;
  if(!(parsing_done == (_Bool)0))
  {
    decoder_free(&rb->ds);
    free((void *)rb);
    work_units = work_units + 1u;
  }

  else
    if(!(rb->unord_link == ((struct unord_blk *)NULL)))
    {
      if(rb->unord_link->complete == (_Bool)0)
        goto __CPROVER_DUMP_L2;

      if(rb->unord_link->legitimate != (_Bool)0)
        goto __CPROVER_DUMP_L2;

      work_units = work_units + 1u;
      decoder_free(&rb->ds);
      free((void *)rb);
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(rb->unord_link == ((struct unord_blk *)NULL))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = rb->unord_link->complete != (_Bool)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        advance(rb->curr_pos);

      else
        rb->unord_link->end_pos = rb->curr_pos;
      if(rv == 1)
      {
        retr_q.root[(signed long int)retr_q.size] = rb;
        tmp_post_2 = retr_q.size;
        retr_q.size = retr_q.size + 1u;
        up_heap((void *)retr_q.root, tmp_post_2);
      }

      else
      {
        if(!(rb->unord_link == ((struct unord_blk *)NULL)))
          tmp_if_expr_5 = !(rb->unord_link->complete != (_Bool)0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_5 = (_Bool)0;
        if(tmp_if_expr_5)
        {
          rb->unord_link->complete = (_Bool)1;
          rb->unord_link->end_pos = rb->curr_pos;
        }

        else
        {
          if(rb->unord_link == ((struct unord_blk *)NULL))
            tmp_if_expr_4 = (_Bool)1;

          else
          {
            if(!(rb->unord_link->complete == (_Bool)0))
              tmp_if_expr_3 = rb->unord_link->legitimate != (_Bool)0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_3 = (_Bool)0;
            tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
          }
          /* assertion rb->unord_link == ((void *)0) || (rb->unord_link->complete && rb->unord_link->legitimate) */
          assert(tmp_if_expr_4);
          /* assertion !parse_token */
          assert(!(parse_token != (_Bool)0));
          parse_token = (_Bool)1;
          free((void *)rb->unord_link);
        }
        sched_unlock();
        if(rv == 0)
          decode(&rb->ds);

        void *return_value_xmalloc_6;
        return_value_xmalloc_6=xmalloc(sizeof(struct emit_blk) /*1112ul*/ );
        eb = (struct emit_blk *)return_value_xmalloc_6;
        eb->ds = rb->ds;
        eb->base = rb->base;
        eb->end_offset = rb->curr_pos.offset;
        free((void *)rb);
        eb->status = rv;
        sched_lock();
        emit_q.root[(signed long int)emit_q.size] = eb;
        tmp_post_7 = emit_q.size;
        emit_q.size = emit_q.size + 1u;
        up_heap((void *)emit_q.root, tmp_post_7);
      }
    }
}

// do_scan
// file expand.c line 751
static void do_scan(void)
{
  struct detached_bitstream *bs;
  signed int scan_result;
  unsigned int skip;
  struct bitstream true_bitstream;
  /* assertion !parsing_done */
  assert(!(parsing_done != (_Bool)0));
  work_units = work_units - 1u;
  scan_q.size = scan_q.size - 1u;
  down_heap((void *)scan_q.root, scan_q.size);
  bs = scan_q.root[(signed long int)scan_q.size];
  skip = 0u;
  /* assertion bs->pos.major >= parser_bs.pos.major */
  assert(bs->pos.major >= parser_bs.pos.major);
  if(bs->pos.major == parser_bs.pos.major)
  {
    if(!(bs->pos.minor >= parser_bs.pos.minor))
      skip = (unsigned int)(parser_bs.pos.minor - bs->pos.minor >> 27);

  }

  true_bitstream=attach(*bs);
  scan_result=scan(&true_bitstream, skip);
  *bs=detach(true_bitstream);
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  unsigned int tmp_post_2;
  unsigned int tmp_post_4;
  _Bool tmp_if_expr_8;
  unsigned int tmp_post_7;
  if(!(scan_result == 0) || !(parsing_done == (_Bool)0))
  {
    work_units = work_units + 1u;
    free((void *)bs);
  }

  else
  {
    if(!(parser_bs.pos.major >= bs->pos.major))
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      if(parser_bs.pos.major == bs->pos.major)
        tmp_if_expr_5 = parser_bs.pos.minor < bs->pos.minor ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_6)
      work_units = work_units + 1u;

    else
    {
      struct unord_blk *ub;
      struct retr_blk *rb;
      void *return_value_xmalloc_1;
      return_value_xmalloc_1=xmalloc(sizeof(struct unord_blk) /*72ul*/ );
      ub = (struct unord_blk *)return_value_xmalloc_1;
      ub->base = bs->pos;
      ub->end_pos = *bs;
      ub->complete = (_Bool)0;
      unord_q.root[(signed long int)unord_q.size] = ub;
      tmp_post_2 = unord_q.size;
      unord_q.size = unord_q.size + 1u;
      up_heap((void *)unord_q.root, tmp_post_2);
      void *return_value_xmalloc_3;
      return_value_xmalloc_3=xmalloc(sizeof(struct retr_blk) /*1152ul*/ );
      rb = (struct retr_blk *)return_value_xmalloc_3;
      rb->unord_link = ub;
      decoder_init(&rb->ds);
      rb->curr_pos = *bs;
      rb->base = bs->pos;
      retr_q.root[(signed long int)retr_q.size] = rb;
      tmp_post_4 = retr_q.size;
      retr_q.size = retr_q.size + 1u;
      up_heap((void *)retr_q.root, tmp_post_4);
    }
    if(!(true_bitstream.data == true_bitstream.limit))
      tmp_if_expr_8 = bs->offset >= head_offs ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_8 = (_Bool)0;
    if(tmp_if_expr_8)
    {
      scan_q.root[(signed long int)scan_q.size] = bs;
      tmp_post_7 = scan_q.size;
      scan_q.size = scan_q.size + 1u;
      up_heap((void *)scan_q.root, tmp_post_7);
    }

    else
      free((void *)bs);
  }
}

// do_transmit
// file compress.c line 205
static void do_transmit(void)
{
  struct work_blk *wblk;
  trans_q.size = trans_q.size - 1u;
  down_heap((void *)trans_q.root, trans_q.size);
  wblk = trans_q.root[(signed long int)trans_q.size];
  out_slots = out_slots - 1u;
  sched_unlock();
  void *return_value_xnmalloc_1;
  return_value_xnmalloc_1=xnmalloc((wblk->size + (unsigned long int)3) / (unsigned long int)4, sizeof(unsigned int) /*4ul*/ );
  wblk->buffer = (void *)(unsigned int *)return_value_xnmalloc_1;
  transmit(wblk->enc, wblk->buffer);
  sched_lock();
  work_units = work_units + 1u;
  reord_q.root[(signed long int)reord_q.size] = wblk;
  unsigned int tmp_post_2 = reord_q.size;
  reord_q.size = reord_q.size + 1u;
  up_heap((void *)reord_q.root, tmp_post_2);
}

// down_heap
// file process.h line 205
void down_heap(void *vroot, unsigned int size)
{
  struct position **root = (struct position **)vroot;
  struct position *el;
  unsigned int j;
  el = root[(signed long int)size];
  root[(signed long int)size] = root[(signed long int)0];
  j = (unsigned int)0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  while(!(2u * j + 1u >= size))
  {
    unsigned int child = j * (unsigned int)2 + (unsigned int)1;
    if(!(1u + child >= size))
    {
      if(!(root[(signed long int)(1u + child)]->major >= root[(signed long int)child]->major))
        tmp_if_expr_2 = (_Bool)1;

      else
      {
        if(root[(signed long int)(1u + child)]->major == root[(signed long int)child]->major)
          tmp_if_expr_1 = root[(signed long int)(child + (unsigned int)1)]->minor < root[(signed long int)child]->minor ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_2)
        child = child + 1u;

    }

    if(!(root[(signed long int)child]->major >= el->major))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      if(root[(signed long int)child]->major == el->major)
        tmp_if_expr_3 = root[(signed long int)child]->minor < el->minor ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_4)
      break;

    root[(signed long int)j] = root[(signed long int)child];
    j = child;
  }
  root[(signed long int)j] = el;
}

// dtotimespec
// file ../lib/timespec.h line 97
struct timespec dtotimespec(double sec)
{
  double min_representable = (double)(signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)0 : ((signed long int)~((signed long int)0) < (signed long int)-1 ? ~((signed long int)0) : ~((signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)-1 : (((signed long int)1 << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)2) - (signed long int)1) * (signed long int)2 + (signed long int)1))));
  double max_representable = ((double)(signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)-1 : (((signed long int)1 << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)2) - (signed long int)1) * (signed long int)2 + (signed long int)1) * (double)1000000000 + (double)(1000000000 - 1)) / (double)1000000000;
  struct timespec return_value_make_timespec_1;
  struct timespec return_value_make_timespec_2;
  if(!(min_representable < sec))
  {
    return_value_make_timespec_1=make_timespec((signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)0 : ((signed long int)~((signed long int)0) < (signed long int)-1 ? ~((signed long int)0) : ~((signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)-1 : (((signed long int)1 << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)2) - (signed long int)1) * (signed long int)2 + (signed long int)1)))), (signed long int)0);
    return return_value_make_timespec_1;
  }

  else
    if(!(sec < max_representable))
    {
      return_value_make_timespec_2=make_timespec((signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)-1 : (((signed long int)1 << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)2) - (signed long int)1) * (signed long int)2 + (signed long int)1), (signed long int)(1000000000 - 1));
      return return_value_make_timespec_2;
    }

    else
    {
      signed long int s = (signed long int)sec;
      double frac = (double)1000000000 * (sec - (double)s);
      signed long int ns = (signed long int)frac;
      ns = ns + (signed long int)((double)ns < frac);
      s = s + ns / (signed long int)1000000000;
      ns = ns % (signed long int)1000000000;
      if(!(ns >= 0l))
      {
        s = s - 1l;
        ns = ns + (signed long int)1000000000;
      }

      struct timespec return_value_make_timespec_3;
      return_value_make_timespec_3=make_timespec(s, ns);
      return return_value_make_timespec_3;
    }
}

// emit
// file decode.c line 942
signed int emit(struct decoder_state *ds, void *buf, unsigned long int *buf_sz)
{
  unsigned int p;
  unsigned int a;
  unsigned int s;
  unsigned char c;
  unsigned char d;
  const unsigned int *t;
  unsigned char *b;
  unsigned int m;
  /* assertion ds */
  assert(ds != ((struct decoder_state *)NULL));
  /* assertion buf */
  assert(buf != NULL);
  _Bool tmp_if_expr_1;
  if(!(buf_sz == ((unsigned long int *)NULL)))
    tmp_if_expr_1 = *buf_sz > (unsigned long int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  /* assertion buf_sz && *buf_sz > 0 */
  assert(tmp_if_expr_1);
  t = ds->tt;
  b = (unsigned char *)buf;
  m = (unsigned int)*buf_sz;
  s = ds->rle_crc;
  p = ds->rle_index;
  a = ds->rle_avail;
  c = ds->rle_char;
  d = ds->rle_prev;
  if(!(ds->rle_state == 1))
  {
    if(ds->rle_state == 2)
      goto __CPROVER_DUMP_L4;

    if(ds->rle_state == 3)
      goto __CPROVER_DUMP_L6;

    if(ds->rle_state == 4)
      goto __CPROVER_DUMP_L9;

    if(ds->rle_state == 0)
      goto __CPROVER_DUMP_L14;

    if(ds->rle_state == 5)
      goto __CPROVER_DUMP_L15;

    abort();
  }

  unsigned int tmp_post_2 = m;
  m = m - 1u;
  unsigned char *tmp_post_3;
  unsigned int tmp_post_4;
  unsigned int tmp_post_5;
  unsigned char *tmp_post_6;
  unsigned int tmp_post_7;
  unsigned int tmp_post_8;
  unsigned char *tmp_post_9;
  unsigned int tmp_post_10;
  unsigned int tmp_post_11;
  unsigned char *tmp_post_12;
  unsigned char tmp_post_13;
  unsigned char *tmp_post_14;
  unsigned int tmp_post_15;
  unsigned int tmp_post_16;
  unsigned char *tmp_post_17;
  if(!(tmp_post_2 == 0u))
  {
    tmp_post_3 = b;
    b = b + 1l;
    *tmp_post_3 = c;
    s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_3)];
    if(c == d)
    {
      tmp_post_4 = a;
      a = a - 1u;
      if(!(tmp_post_4 == 0u))
      {
        p = t[(signed long int)(p >> 8)];
        c = (unsigned char)p;

      __CPROVER_DUMP_L4:
        ;
        tmp_post_5 = m;
        m = m - 1u;
        if(tmp_post_5 == 0u)
          ds->rle_state = 2;

        else
        {
          tmp_post_6 = b;
          b = b + 1l;
          *tmp_post_6 = c;
          s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_6)];
          if(c == d)
          {
            tmp_post_7 = a;
            a = a - 1u;
            if(!(tmp_post_7 == 0u))
            {
              p = t[(signed long int)(p >> 8)];
              c = (unsigned char)p;

            __CPROVER_DUMP_L6:
              ;
              tmp_post_8 = m;
              m = m - 1u;
              if(tmp_post_8 == 0u)
                ds->rle_state = 3;

              else
              {
                tmp_post_9 = b;
                b = b + 1l;
                *tmp_post_9 = c;
                s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_9)];
                if(c == d)
                {
                  tmp_post_10 = a;
                  a = a - 1u;
                  if(tmp_post_10 == 0u)
                    return 14;

                  p = t[(signed long int)(p >> 8)];
                  c = (unsigned char)p;

                __CPROVER_DUMP_L9:
                  ;
                  if(!(m >= (unsigned int)c))
                  {
                    c = c - (unsigned char)m;
                    do
                    {
                      tmp_post_11 = m;
                      m = m - 1u;
                      if(tmp_post_11 == 0u)
                        break;

                      tmp_post_12 = b;
                      b = b + 1l;
                      *tmp_post_12 = d;
                      s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_12)];
                    }
                    while((_Bool)1);
                    ds->rle_state = 4;
                  }

                  else
                  {
                    m = m - (unsigned int)c;
                    do
                    {
                      tmp_post_13 = c;
                      c = c - 1;
                      if(tmp_post_13 == 0)
                        break;

                      tmp_post_14 = b;
                      b = b + 1l;
                      *tmp_post_14 = d;
                      s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_14)];
                    }
                    while((_Bool)1);

                  __CPROVER_DUMP_L14:
                    ;
                    tmp_post_15 = a;
                    a = a - 1u;
                    if(!(tmp_post_15 == 0u))
                    {
                      p = t[(signed long int)(p >> 8)];
                      c = (unsigned char)p;

                    __CPROVER_DUMP_L15:
                      ;
                      tmp_post_16 = m;
                      m = m - 1u;
                      if(tmp_post_16 == 0u)
                        ds->rle_state = 5;

                      else
                      {
                        tmp_post_17 = b;
                        b = b + 1l;
                        *tmp_post_17 = c;
                        s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_17)];
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

  unsigned int tmp_post_18;
  unsigned int tmp_post_19;
  unsigned char *tmp_post_20;
  unsigned int tmp_post_21;
  unsigned int tmp_post_22;
  unsigned char *tmp_post_23;
  unsigned int tmp_post_24;
  unsigned int tmp_post_25;
  unsigned char *tmp_post_26;
  unsigned int tmp_post_27;
  unsigned int tmp_post_28;
  unsigned char *tmp_post_29;
  unsigned int tmp_post_30;
  unsigned int tmp_post_31;
  unsigned char *tmp_post_32;
  unsigned int tmp_post_33;
  unsigned int tmp_post_34;
  unsigned char *tmp_post_35;
  unsigned int tmp_post_36;
  unsigned int tmp_post_37;
  unsigned char *tmp_post_38;
  unsigned char tmp_post_39;
  unsigned char *tmp_post_40;
  unsigned int tmp_post_41;
  unsigned int tmp_post_42;
  unsigned char *tmp_post_43;
  if(!(a == 0xFFFFFFFFu) && !(m == 0xFFFFFFFFu))
    do
    {
      tmp_post_18 = a;
      a = a - 1u;
      if(tmp_post_18 == 0u)
        break;

      d = c;
      p = t[(signed long int)(p >> 8)];
      c = (unsigned char)p;
      tmp_post_19 = m;
      m = m - 1u;
      if(tmp_post_19 == 0u)
      {
        ds->rle_state = 1;
        break;
      }

      tmp_post_20 = b;
      b = b + 1l;
      *tmp_post_20 = c;
      s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_20)];
      if(!(c == d))
      {
        tmp_post_21 = a;
        a = a - 1u;
        if(tmp_post_21 == 0u)
          break;

        d = c;
        p = t[(signed long int)(p >> 8)];
        c = (unsigned char)p;
        tmp_post_22 = m;
        m = m - 1u;
        if(tmp_post_22 == 0u)
        {
          ds->rle_state = 1;
          break;
        }

        tmp_post_23 = b;
        b = b + 1l;
        *tmp_post_23 = c;
        s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_23)];
        if(!(c == d))
        {
          tmp_post_24 = a;
          a = a - 1u;
          if(tmp_post_24 == 0u)
            break;

          d = c;
          p = t[(signed long int)(p >> 8)];
          c = (unsigned char)p;
          tmp_post_25 = m;
          m = m - 1u;
          if(tmp_post_25 == 0u)
          {
            ds->rle_state = 1;
            break;
          }

          tmp_post_26 = b;
          b = b + 1l;
          *tmp_post_26 = c;
          s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_26)];
          if(!(c == d))
          {
            tmp_post_27 = a;
            a = a - 1u;
            if(tmp_post_27 == 0u)
              break;

            d = c;
            p = t[(signed long int)(p >> 8)];
            c = (unsigned char)p;
            tmp_post_28 = m;
            m = m - 1u;
            if(tmp_post_28 == 0u)
            {
              ds->rle_state = 1;
              break;
            }

            tmp_post_29 = b;
            b = b + 1l;
            *tmp_post_29 = c;
            s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_29)];
            if(!(c == d))
              continue;

          }

        }

      }

      tmp_post_30 = a;
      a = a - 1u;
      if(tmp_post_30 == 0u)
        break;

      p = t[(signed long int)(p >> 8)];
      c = (unsigned char)p;
      tmp_post_31 = m;
      m = m - 1u;
      if(tmp_post_31 == 0u)
      {
        ds->rle_state = 2;
        break;
      }

      tmp_post_32 = b;
      b = b + 1l;
      *tmp_post_32 = c;
      s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_32)];
      if(c == d)
      {
        tmp_post_33 = a;
        a = a - 1u;
        if(tmp_post_33 == 0u)
          break;

        p = t[(signed long int)(p >> 8)];
        c = (unsigned char)p;
        tmp_post_34 = m;
        m = m - 1u;
        if(tmp_post_34 == 0u)
        {
          ds->rle_state = 3;
          break;
        }

        tmp_post_35 = b;
        b = b + 1l;
        *tmp_post_35 = c;
        s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_35)];
        if(c == d)
        {
          tmp_post_36 = a;
          a = a - 1u;
          if(tmp_post_36 == 0u)
            return 14;

          p = t[(signed long int)(p >> 8)];
          c = (unsigned char)p;
          if(!(m >= (unsigned int)c))
          {
            c = c - (unsigned char)m;
            do
            {
              tmp_post_37 = m;
              m = m - 1u;
              if(tmp_post_37 == 0u)
                break;

              tmp_post_38 = b;
              b = b + 1l;
              *tmp_post_38 = d;
              s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_38)];
            }
            while((_Bool)1);
            ds->rle_state = 4;
            break;
          }

          m = m - (unsigned int)c;
          do
          {
            tmp_post_39 = c;
            c = c - 1;
            if(tmp_post_39 == 0)
              break;

            tmp_post_40 = b;
            b = b + 1l;
            *tmp_post_40 = d;
            s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_40)];
          }
          while((_Bool)1);
          tmp_post_41 = a;
          a = a - 1u;
          if(tmp_post_41 == 0u)
            break;

          p = t[(signed long int)(p >> 8)];
          c = (unsigned char)p;
          tmp_post_42 = m;
          m = m - 1u;
          if(tmp_post_42 == 0u)
          {
            ds->rle_state = 5;
            break;
          }

          tmp_post_43 = b;
          b = b + 1l;
          *tmp_post_43 = c;
          s = s << 8 ^ crc_table[(signed long int)(s >> 24 ^ (unsigned int)*tmp_post_43)];
        }

      }

    }
    while((_Bool)1);

  /* assertion (a == 0xFFFFFFFFu) != (m == 0xFFFFFFFFu) */
  assert((a == 0xFFFFFFFFu) != (m == 0xFFFFFFFFu));
  ds->rle_avail = a;
  if(m == 0xFFFFFFFFu)
  {
    /* assertion a != 0xFFFFFFFFu */
    assert(a != 0xFFFFFFFFu);
    ds->rle_index = p;
    ds->rle_char = c;
    ds->rle_prev = d;
    ds->rle_crc = s;
    *buf_sz = (unsigned long int)0;
    return 1;
  }

  else
  {
    /* assertion a == 0xFFFFFFFFu */
    assert(a == 0xFFFFFFFFu);
    ds->crc = s ^ 0xFFFFFFFFu;
    *buf_sz = (unsigned long int)m;
    return 0;
  }
}

// encode
// file encode.h line 31
unsigned long int encode(struct encoder_state *s, unsigned int *crc)
{
  unsigned int cost;
  unsigned int pk;
  unsigned int i;
  const unsigned char *sp;
  unsigned char *smp;
  unsigned char c;
  unsigned char j;
  unsigned int p;
  unsigned int EOB;
  unsigned char cmap[256l];
  unsigned int tmp_post_1;
  if(s->rle_state >= 4)
  {
    /* assertion s->nblock < s->max_block_size */
    assert(s->nblock < s->max_block_size);
    tmp_post_1 = s->nblock;
    s->nblock = s->nblock + 1u;
    s->block[(signed long int)tmp_post_1] = (unsigned char)(s->rle_state - 4);
    s->cmap[(signed long int)(s->rle_state - 4)] = (_Bool)1;
  }

  /* assertion s->nblock > 0 */
  assert(s->nblock > (unsigned int)0);
  unsigned int return_value_make_map_e_2;
  return_value_make_map_e_2=make_map_e(cmap, s->cmap);
  EOB = return_value_make_map_e_2 + (unsigned int)1;
  /* assertion EOB >= 2 */
  assert(EOB >= (unsigned int)2);
  /* assertion EOB < 258 */
  assert(EOB < (unsigned int)258);
  /* assertion s->nblock > 0 */
  assert(s->nblock > (unsigned int)0);
  void *return_value_xnmalloc_3;
  return_value_xnmalloc_3=xnmalloc((unsigned long int)(s->nblock + (unsigned int)50), sizeof(unsigned int) /*4ul*/ );
  s->mtfv = (void *)(unsigned int *)return_value_xnmalloc_3;
  signed int return_value_divbwt_4;
  return_value_divbwt_4=divbwt(s->block, (signed int *)s->mtfv, (signed int)s->nblock);
  s->bwt_idx = (unsigned int)return_value_divbwt_4;
  free((void *)s->block);
  s->nmtf=do_mtf((unsigned short int *)s->mtfv, s->code[(signed long int)0], cmap, (signed int)s->nblock, (signed int)EOB);
  cost = (unsigned int)(48 + 32 + 1 + 24 + 00 + 3 + 15 + 00 + 00 + 00);
  unsigned int return_value_generate_prefix_code_5;
  return_value_generate_prefix_code_5=generate_prefix_code(s);
  cost = cost + return_value_generate_prefix_code_5;
  sp = s->selector;
  smp = s->selectorMTF;
  p = (unsigned int)0x543210;
  /* assertion *sp < 6 */
  assert((signed int)*sp < 6);
  /* assertion s->tmap_old2new[*sp] == 0 */
  assert(s->tmap_old2new[(signed long int)*sp] == (unsigned int)0);
  unsigned char *tmp_post_7;
  do
  {
    c = *sp;
    if((signed int)c == 6)
      break;

    unsigned int v;
    unsigned int z;
    unsigned int l;
    unsigned int h;
    c = (unsigned char)s->tmap_old2new[(signed long int)c];
    /* assertion c < s->num_trees */
    assert((unsigned int)c < s->num_trees);
    /* assertion (size_t)(sp - s->selector) < s->num_selectors */
    assert((unsigned long int)(sp - s->selector) < (unsigned long int)s->num_selectors);
    v = p ^ (unsigned int)(0x111111 * (signed int)c);
    z = v + (unsigned int)0xEEEEEF & (unsigned int)0x888888;
    l = z ^ z - (unsigned int)1;
    h = ~l;
    p = (p | l) & (p << 4 | h | (unsigned int)c);
    signed int return_value___builtin_ctz_6;
    return_value___builtin_ctz_6=__builtin_ctz(h);
    j = (unsigned char)((return_value___builtin_ctz_6 >> 2) - 1);
    sp = sp + 1l;
    tmp_post_7 = smp;
    smp = smp + 1l;
    *tmp_post_7 = j;
    cost = cost + (unsigned int)((signed int)j + 1);
  }
  while((_Bool)1);
  j = (unsigned char)(cost & (unsigned int)0x7);
  j = (unsigned char)(8 - (signed int)j & 0x7);
  s->num_selectors = s->num_selectors + (unsigned int)j;
  cost = cost + (unsigned int)j;
  unsigned char tmp_post_8;
  unsigned char *tmp_post_9;
  do
  {
    tmp_post_8 = j;
    j = j - 1;
    if(tmp_post_8 == 0)
      break;

    tmp_post_9 = smp;
    smp = smp + 1l;
    *tmp_post_9 = (unsigned char)0;
  }
  while((_Bool)1);
  /* assertion cost % 8 == 0 */
  assert(cost % (unsigned int)8 == (unsigned int)0);
  i = (unsigned int)0;
  for( ; !(i >= 16u); i = i + 1u)
  {
    pk = (unsigned int)0;
    j = (unsigned char)0;
    for( ; !((signed int)j >= 16); j = j + 1)
      pk = pk | (unsigned int)s->cmap[(signed long int)((unsigned int)16 * i + (unsigned int)j)];
    cost = cost + (pk << 4);
  }
  cost = cost + (unsigned int)16;
  /* assertion cost % 8 == 0 */
  assert(cost % (unsigned int)8 == (unsigned int)0);
  cost = cost >> 3;
  s->out_expect_len = cost;
  *crc = s->block_crc;
  return (unsigned long int)cost;
}

// encoder_init
// file encode.h line 29
struct encoder_state * encoder_init(unsigned long int max_block_size, unsigned int cluster_factor)
{
  struct encoder_state *s;
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct encoder_state) /*14376ul*/ );
  s = (struct encoder_state *)return_value_xmalloc_1;
  /* assertion s != 0 */
  assert(s != ((struct encoder_state *)NULL));
  /* assertion max_block_size > 0 && max_block_size <= 900000 */
  assert(max_block_size > (unsigned long int)0 && max_block_size <= (unsigned long int)900000);
  /* assertion cluster_factor > 0 && cluster_factor <= 65535 */
  assert(cluster_factor > (unsigned int)0 && cluster_factor <= (unsigned int)65535);
  s->max_block_size = (unsigned int)max_block_size;
  s->cluster_factor = cluster_factor;
  void *return_value_xmalloc_2;
  return_value_xmalloc_2=xmalloc((unsigned long int)(18000 + 1 + 1));
  s->selector = (unsigned char *)return_value_xmalloc_2;
  void *return_value_xmalloc_3;
  return_value_xmalloc_3=xmalloc((unsigned long int)(18000 + 1 + 7));
  s->selectorMTF = (unsigned char *)return_value_xmalloc_3;
  void *return_value_xmalloc_4;
  return_value_xmalloc_4=xmalloc(max_block_size + (unsigned long int)1);
  s->block = (unsigned char *)return_value_xmalloc_4;
  bzero((void *)s->cmap, (unsigned long int)256u * sizeof(_Bool) /*1ul*/ );
  s->rle_state = 0;
  s->block_crc = (unsigned int)-1;
  s->nblock = (unsigned int)0;
  return s;
}

// err2str
// file expand.c line 69
static const char * err2str(signed int err)
{
  /* assertion err >= ERR_MAGIC && err <= ERR_EOF */
  assert(err >= 3 && err <= 19);
  static const char *err2str__1__table[17l] = { "bad stream header magic", "bad block header magic", "empty source alphabet", "bad number of trees", "no coding groups", "invalid selector", "invalid delta code", "invalid prefix code", "incomplete prefix code", "empty block", "unterminated block", "missing run length", "block CRC mismatch", "stream CRC mismatch", "block overflow", "primary index too large", "unexpected end of file" };
  return err2str__1__table[(signed long int)(err - 3)];
}

// fail
// file main.c line 131
void fail(const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(((struct filespec *)NULL), 0, fmt, args, 1);
  bailout();
}

// failf
// file main.h line 79
void failf(struct filespec *f, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(f, 0, fmt, args, 1);
  bailout();
}

// failfx
// file main.c line 134
void failfx(struct filespec *f, signed int x, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  if(!(x == 27) && !(x == 32))
    log_generic(f, x, fmt, args, 1);

  bailout();
}

// failx
// file main.c line 133
void failx(signed int x, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  if(!(x == 27) && !(x == 32))
    log_generic(((struct filespec *)NULL), x, fmt, args, 1);

  bailout();
}

// fdutimens
// file ../lib/utimens.h line 21
signed int fdutimens(signed int fd, const char *file, struct timespec *timespec)
{
  struct timespec adjusted_timespec[2l];
  struct timespec *ts;
  struct timespec *tmp_if_expr_1;
  if(!(timespec == ((struct timespec *)NULL)))
    tmp_if_expr_1 = adjusted_timespec;

  else
    tmp_if_expr_1 = (struct timespec *)(void *)0;
  ts = tmp_if_expr_1;
  signed int adjustment_needed = 0;
  struct stat st;
  if(!(ts == ((struct timespec *)NULL)))
  {
    adjusted_timespec[(signed long int)0] = timespec[(signed long int)0];
    adjusted_timespec[(signed long int)1] = timespec[(signed long int)1];
    adjustment_needed=validate_timespec(ts);
  }

  signed int tmp_if_expr_5;
  signed int return_value_stat_3;
  signed int return_value_fstat_4;
  signed int *return_value___errno_location_6;
  _Bool tmp_if_expr_8;
  signed int *return_value___errno_location_7;
  signed int *return_value___errno_location_9;
  _Bool tmp_if_expr_11;
  signed int *return_value___errno_location_10;
  signed int tmp_if_expr_14;
  signed int return_value_stat_12;
  signed int return_value_fstat_13;
  _Bool return_value_update_timespec_15;
  signed int return_value_fstat_19;
  signed long int return_value_get_stat_atime_ns_17;
  signed long int return_value_get_stat_mtime_ns_18;
  if(!(adjustment_needed >= 0))
    return -1;

  else
  {
    if(file == ((const char *)NULL) && !(fd >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = 9;
      return -1;
    }

    if(utimensat_works_really >= 0)
    {
      signed int result;
      if(adjustment_needed == 2)
      {
        if(!(fd >= 0))
        {
          return_value_stat_3=stat(file, &st);
          tmp_if_expr_5 = return_value_stat_3;
        }

        else
        {
          return_value_fstat_4=fstat(fd, &st);
          tmp_if_expr_5 = return_value_fstat_4;
        }
        if(!(tmp_if_expr_5 == 0))
          return -1;

        if(ts->tv_nsec == 1073741822l)
          ts[(signed long int)0]=get_stat_atime(&st);

        else
          if((ts + 1l)->tv_nsec == 1073741822l)
            ts[(signed long int)1]=get_stat_mtime(&st);

        adjustment_needed = adjustment_needed + 1;
      }

      if(!(fd >= 0))
      {
        result=utimensat(-100, file, ts, 0);
        if(result >= 1)
        {
          return_value___errno_location_6=__errno_location();
          *return_value___errno_location_6 = 38;
        }

        if(result == 0)
          tmp_if_expr_8 = (_Bool)1;

        else
        {
          return_value___errno_location_7=__errno_location();
          tmp_if_expr_8 = *return_value___errno_location_7 != 38 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_8)
        {
          utimensat_works_really = 1;
          return result;
        }

      }

      if(fd >= 0)
      {
        result=futimens(fd, ts);
        if(result >= 1)
        {
          return_value___errno_location_9=__errno_location();
          *return_value___errno_location_9 = 38;
        }

        if(result == 0)
          tmp_if_expr_11 = (_Bool)1;

        else
        {
          return_value___errno_location_10=__errno_location();
          tmp_if_expr_11 = *return_value___errno_location_10 != 38 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_11)
        {
          utimensat_works_really = 1;
          return result;
        }

      }

    }

    utimensat_works_really = -1;
    lutimensat_works_really = -1;
    if(!(adjustment_needed == 0))
    {
      if(!(adjustment_needed == 3))
      {
        if(!(fd >= 0))
        {
          return_value_stat_12=stat(file, &st);
          tmp_if_expr_14 = return_value_stat_12;
        }

        else
        {
          return_value_fstat_13=fstat(fd, &st);
          tmp_if_expr_14 = return_value_fstat_13;
        }
        if(!(tmp_if_expr_14 == 0))
          return -1;

      }

      if(!(ts == ((struct timespec *)NULL)))
      {
        return_value_update_timespec_15=update_timespec(&st, &ts);
        if(!(return_value_update_timespec_15 == (_Bool)0))
          return 0;

      }

    }

    struct timeval timeval[2l];
    struct timeval *t;
    if(!(ts == ((struct timespec *)NULL)))
    {
      timeval[(signed long int)0].tv_sec = (ts + (signed long int)0)->tv_sec;
      timeval[(signed long int)0].tv_usec = (ts + (signed long int)0)->tv_nsec / (signed long int)1000;
      timeval[(signed long int)1].tv_sec = (ts + (signed long int)1)->tv_sec;
      timeval[(signed long int)1].tv_usec = (ts + (signed long int)1)->tv_nsec / (signed long int)1000;
      t = timeval;
    }

    else
      t = (struct timeval *)(void *)0;
    if(!(fd >= 0))
    {
      signed int return_value_futimesat_16;
      return_value_futimesat_16=futimesat(-100, file, t);
      return return_value_futimesat_16;
    }

    else
    {
      signed int return_value_futimesat_20;
      return_value_futimesat_20=futimesat(fd, (const char *)(void *)0, t);
      if(return_value_futimesat_20 == 0)
      {
        if(!(t == ((struct timeval *)NULL)))
        {
          _Bool abig = (signed long int)500000 <= (t + (signed long int)0)->tv_usec;
          _Bool mbig = (signed long int)500000 <= (t + (signed long int)1)->tv_usec;
          if(!(((signed int)abig | (signed int)mbig) == 0))
          {
            return_value_fstat_19=fstat(fd, &st);
            if(return_value_fstat_19 == 0)
            {
              signed long int adiff = st.st_atim.tv_sec - (t + (signed long int)0)->tv_sec;
              signed long int mdiff = st.st_mtim.tv_sec - (t + (signed long int)1)->tv_sec;
              struct timeval *tt = (struct timeval *)(void *)0;
              struct timeval truncated_timeval[2l];
              truncated_timeval[(signed long int)0] = t[(signed long int)0];
              truncated_timeval[(signed long int)1] = t[(signed long int)1];
              if(adiff == 1l && !(abig == (_Bool)0))
              {
                return_value_get_stat_atime_ns_17=get_stat_atime_ns(&st);
                if(return_value_get_stat_atime_ns_17 == 0l)
                {
                  tt = truncated_timeval;
                  (tt + (signed long int)0)->tv_usec = (signed long int)0;
                }

              }

              if(mdiff == 1l && !(mbig == (_Bool)0))
              {
                return_value_get_stat_mtime_ns_18=get_stat_mtime_ns(&st);
                if(return_value_get_stat_mtime_ns_18 == 0l)
                {
                  tt = truncated_timeval;
                  (tt + (signed long int)1)->tv_usec = (signed long int)0;
                }

              }

              if(!(tt == ((struct timeval *)NULL)))
                futimesat(fd, (const char *)(void *)0, tt);

            }

          }

        }

        return 0;
      }

    }
    if(file == ((const char *)NULL))
      return -1;

    else
    {
      signed int return_value_utimes_21;
      return_value_utimes_21=utimes(file, t);
      return return_value_utimes_21;
    }
  }
}

// find_best_tree
// file encode.c line 840
static signed int find_best_tree(const unsigned short int *gs, unsigned int nt, const unsigned long int *len_pack)
{
  unsigned int c;
  unsigned int bc;
  unsigned int t;
  unsigned int bt;
  unsigned long int cp;
  unsigned int i;
  cp = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 50u); i = i + 1u)
    cp = cp + len_pack[(signed long int)gs[(signed long int)i]];
  bc = (unsigned int)(cp & (unsigned long int)0x3ff);
  bt = (unsigned int)0;
  t = (unsigned int)1;
  for( ; !(t >= nt); t = t + 1u)
  {
    cp = cp >> 10;
    c = (unsigned int)(cp & (unsigned long int)0x3ff);
    if(!(c >= bc))
    {
      bc = c;
      bt = t;
    }

  }
  return (signed int)bt;
}

// fseterr
// file fseterr.h line 37
extern void fseterr(struct _IO_FILE *fp)
{
  fp->_flags = fp->_flags | 0x20;
}

// generate_initial_trees
// file encode.c line 773
static void generate_initial_trees(struct encoder_state *s, unsigned int nm, unsigned int nt)
{
  unsigned int a;
  unsigned int b;
  unsigned int freq;
  unsigned int cum;
  unsigned int as;
  unsigned int t;
  memset((void *)s->length, 1, sizeof(unsigned char [6l][259l]) /*1554ul*/ );
  as = (unsigned int)0;
  a = (unsigned int)0;
  cum = (unsigned int)0;
  for( ; !(cum >= nm); a = a + 1u)
  {
    freq = s->code[(signed long int)0][(signed long int)a];
    cum = cum + freq;
    as = as + (freq < (unsigned int)1 ? freq : (unsigned int)1);
  }
  /* assertion cum == nm */
  assert(cum == nm);
  nt = nt < as ? nt : as;
  a = (unsigned int)0;
  t = (unsigned int)0;
  for( ; nt >= 1u; nt = nt - 1u)
  {
    /* assertion nm > 0 */
    assert(nm > (unsigned int)0);
    /* assertion as >= nt */
    assert(as >= nt);
    freq = s->code[(signed long int)0][(signed long int)a];
    cum = freq;
    as = as - (freq < (unsigned int)1 ? freq : (unsigned int)1);
    b = a + (unsigned int)1;
    for( ; !(cum * nt >= nm) && !(nt + 4294967295u >= as); b = b + 1u)
    {
      freq = s->code[(signed long int)0][(signed long int)b];
      cum = cum + freq;
      as = as - (freq < (unsigned int)1 ? freq : (unsigned int)1);
    }
    if(!(2u * nm >= (2u * cum + -freq) * nt) && !(freq >= cum))
    {
      cum = cum - freq;
      as = as + (freq < (unsigned int)1 ? freq : (unsigned int)1);
      b = b - 1u;
    }

    /* assertion a < b */
    assert(a < b);
    /* assertion cum > 0 */
    assert(cum > (unsigned int)0);
    /* assertion cum <= nm */
    assert(cum <= nm);
    /* assertion as >= nt-1 */
    assert(as >= nt - (unsigned int)1);
    bzero((void *)&s->length[(signed long int)t][(signed long int)a], (unsigned long int)(b - a));
    a = b;
    nm = nm - cum;
    t = t + 1u;
  }
  /* assertion as == 0 */
  assert(as == (unsigned int)0);
  /* assertion nm == 0 */
  assert(nm == (unsigned int)0);
}

// generate_prefix_code
// file encode.c line 999
unsigned int generate_prefix_code(struct encoder_state *s)
{
  unsigned int as;
  unsigned int nt;
  unsigned int iter;
  unsigned int i;
  unsigned int cost;
  unsigned short int *mtfv = (unsigned short int *)s->mtfv;
  unsigned int nm = s->nmtf;
  as = (unsigned int)((signed int)mtfv[(signed long int)(nm - (unsigned int)1)] + 1);
  s->num_selectors = ((nm + (unsigned int)50) - (unsigned int)1) / (unsigned int)50;
  /* assertion nm >= 2 */
  assert(nm >= (unsigned int)2);
  nt = (unsigned int)(nm > (unsigned int)2400 ? 6 : (nm > (unsigned int)1200 ? 5 : (nm > (unsigned int)600 ? 4 : (nm > (unsigned int)300 ? 3 : (nm > (unsigned int)150 ? 2 : 1)))));
  i = nm;
  for( ; !(i >= 50u * s->num_selectors); i = i + 1u)
    mtfv[(signed long int)i] = (unsigned short int)as;
  generate_initial_trees(s, nm, nt);
  iter = s->cluster_factor;
  unsigned int tmp_post_1;
  unsigned char *tmp_post_3;
  do
  {
    tmp_post_1 = iter;
    iter = iter - 1u;
    if(!(tmp_post_1 >= 1u))
      break;

    unsigned long int len_pack[259l];
    unsigned short int *gs;
    unsigned int v;
    unsigned int t;
    unsigned char *sp;
    v = (unsigned int)0;
    for( ; !(v >= as); v = v + 1u)
      len_pack[(signed long int)v] = (unsigned long int)s->length[(signed long int)0][(signed long int)v] + ((unsigned long int)s->length[(signed long int)1][(signed long int)v] << 10) + ((unsigned long int)s->length[(signed long int)2][(signed long int)v] << 20) + ((unsigned long int)s->length[(signed long int)3][(signed long int)v] << 30) + ((unsigned long int)s->length[(signed long int)4][(signed long int)v] << 40) + ((unsigned long int)s->length[(signed long int)5][(signed long int)v] << 50);
    len_pack[(signed long int)as] = (unsigned long int)0;
    sp = s->selector;
    bzero((void *)s->frequency, (unsigned long int)nt * sizeof(unsigned int [259l]) /*1036ul*/ );
    gs = mtfv;
    for( ; !(gs >= mtfv + (signed long int)nm); gs = gs + (signed long int)50)
    {
      signed int return_value_find_best_tree_2;
      return_value_find_best_tree_2=find_best_tree(gs, nt, len_pack);
      t = (unsigned int)return_value_find_best_tree_2;
      /* assertion t < nt */
      assert(t < nt);
      tmp_post_3 = sp;
      sp = sp + 1l;
      *tmp_post_3 = (unsigned char)t;
      i = (unsigned int)0;
      for( ; !(i >= 50u); i = i + 1u)
        s->frequency[(signed long int)t][(signed long int)gs[(signed long int)i]] = s->frequency[(signed long int)t][(signed long int)gs[(signed long int)i]] + 1u;
    }
    /* assertion (size_t)(sp - s->selector) == s->num_selectors */
    assert((unsigned long int)(sp - s->selector) == (unsigned long int)s->num_selectors);
    *sp = (unsigned char)6;
    t = (unsigned int)0;
    for( ; !(t >= nt); t = t + 1u)
      make_code_lengths(s->length[(signed long int)t], s->frequency[(signed long int)t], as);
  }
  while((_Bool)1);
  cost = (unsigned int)0;
  unsigned int not_seen = (unsigned int)((1 << nt) - 1);
  unsigned int generate_prefix_code__1__3__t;
  unsigned int generate_prefix_code__1__3__v;
  unsigned char *generate_prefix_code__1__3__sp = s->selector;
  nt = (unsigned int)0;
  unsigned char *tmp_post_4;
  while(not_seen >= 1u)
  {
    tmp_post_4 = generate_prefix_code__1__3__sp;
    generate_prefix_code__1__3__sp = generate_prefix_code__1__3__sp + 1l;
    generate_prefix_code__1__3__t = (unsigned int)*tmp_post_4;
    if(generate_prefix_code__1__3__t >= 6u)
      break;

    if(!((not_seen & (unsigned int)(1 << generate_prefix_code__1__3__t)) == 0u))
    {
      not_seen = not_seen - (unsigned int)(1 << generate_prefix_code__1__3__t);
      s->tmap_old2new[(signed long int)generate_prefix_code__1__3__t] = nt;
      s->tmap_new2old[(signed long int)nt] = generate_prefix_code__1__3__t;
      nt = nt + 1u;
      unsigned int return_value_assign_codes_5;
      return_value_assign_codes_5=assign_codes(s->code[(signed long int)generate_prefix_code__1__3__t], s->length[(signed long int)generate_prefix_code__1__3__t], s->frequency[(signed long int)generate_prefix_code__1__3__t], as);
      cost = cost + return_value_assign_codes_5;
      s->code[(signed long int)generate_prefix_code__1__3__t][(signed long int)as] = (unsigned int)0;
      s->length[(signed long int)generate_prefix_code__1__3__t][(signed long int)as] = (unsigned char)0;
    }

  }
  /* assertion nt >= 1 */
  assert(nt >= (unsigned int)1);
  if(nt == 1u)
  {
    nt = (unsigned int)2;
    generate_prefix_code__1__3__t = s->tmap_new2old[(signed long int)0] ^ (unsigned int)1;
    s->tmap_old2new[(signed long int)generate_prefix_code__1__3__t] = (unsigned int)1;
    s->tmap_new2old[(signed long int)1] = generate_prefix_code__1__3__t;
    generate_prefix_code__1__3__v = (unsigned int)0;
    for( ; !(generate_prefix_code__1__3__v >= 258u); generate_prefix_code__1__3__v = generate_prefix_code__1__3__v + 1u)
      s->length[(signed long int)generate_prefix_code__1__3__t][(signed long int)generate_prefix_code__1__3__v] = (unsigned char)20;
    cost = cost + as + (unsigned int)5;
  }

  s->num_trees = nt;
  return cost;
}

// get_stat_atime
// file ../lib/stat-time.h line 112
inline struct timespec get_stat_atime(struct stat *st)
{
  return st->st_atim;
}

// get_stat_atime_ns
// file ../lib/stat-time.h line 58
inline signed long int get_stat_atime_ns(struct stat *st)
{
  return st->st_atim.tv_nsec;
}

// get_stat_birthtime
// file ../lib/stat-time.h line 155
inline struct timespec get_stat_birthtime(struct stat *st)
{
  struct timespec t;
  t.tv_sec = (signed long int)-1;
  t.tv_nsec = (signed long int)-1;
  (void)st;
  return t;
}

// get_stat_birthtime_ns
// file ../lib/stat-time.h line 97
inline signed long int get_stat_birthtime_ns(struct stat *st)
{
  (void)st;
  return (signed long int)0;
}

// get_stat_ctime
// file ../lib/stat-time.h line 126
inline struct timespec get_stat_ctime(struct stat *st)
{
  return st->st_ctim;
}

// get_stat_ctime_ns
// file ../lib/stat-time.h line 71
inline signed long int get_stat_ctime_ns(struct stat *st)
{
  return st->st_ctim.tv_nsec;
}

// get_stat_mtime
// file ../lib/stat-time.h line 140
inline struct timespec get_stat_mtime(struct stat *st)
{
  return st->st_mtim;
}

// get_stat_mtime_ns
// file ../lib/stat-time.h line 84
inline signed long int get_stat_mtime_ns(struct stat *st)
{
  return st->st_mtim.tv_nsec;
}

// gettime
// file ../lib/timespec.h line 107
void gettime(struct timespec *ts)
{
  signed int return_value_clock_gettime_1;
  return_value_clock_gettime_1=clock_gettime(0, ts);
  if(!(return_value_clock_gettime_1 == 0))
  {
    struct timeval tv;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    ts->tv_sec = tv.tv_sec;
    ts->tv_nsec = tv.tv_usec * (signed long int)1000;
  }

}

// halt
// file signals.h line 25
void halt(void)
{
  signed int sig;
  signed int ret;
  ret=sigsuspend(&saved);
  _Bool tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  if(ret == -1)
  {
    return_value___errno_location_1=__errno_location();
    tmp_if_expr_2 = 4 == *return_value___errno_location_1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  /* assertion -1 == ret && 4 == (*__errno_location ()) */
  assert(tmp_if_expr_2);
  sig = handled_signals[(signed long int)caught_index];
  _Bool return_value_xmember_3;
  return_value_xmember_3=xmember(&handled, sig);
  /* assertion xmember(&handled, sig) */
  assert(return_value_xmember_3 != (_Bool)0);
  if(!(sig == 10))
  {
    if(sig == 12)
      goto __CPROVER_DUMP_L4;

    cleanup();
    terminate(sig);
  }

  bailout();

__CPROVER_DUMP_L4:
  ;
}

// info
// file main.c line 123
void info(const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(((struct filespec *)NULL), 0, fmt, args, 1);
  args = ((void **)NULL);
  funlockfile(stderr);
}

// infof
// file main.c line 124
void infof(struct filespec *f, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(f, 0, fmt, args, 1);
  args = ((void **)NULL);
  funlockfile(stderr);
}

// infofx
// file main.c line 126
void infofx(struct filespec *f, signed int x, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(f, x, fmt, args, 1);
  args = ((void **)NULL);
  funlockfile(stderr);
}

// infox
// file main.c line 125
void infox(signed int x, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(((struct filespec *)NULL), x, fmt, args, 1);
  args = ((void **)NULL);
  funlockfile(stderr);
}

// init
// file compress.c line 318
static void init(void)
{
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc((unsigned long int)in_slots * sizeof(struct in_blk *) /*8ul*/ );
  coll_q.root = (struct in_blk ** restrict )return_value_xmalloc_1;
  coll_q.size = (unsigned int)0;
  void *return_value_xmalloc_2;
  return_value_xmalloc_2=xmalloc((unsigned long int)work_units * sizeof(struct work_blk *) /*8ul*/ );
  trans_q.root = (struct work_blk ** restrict )return_value_xmalloc_2;
  trans_q.size = (unsigned int)0;
  void *return_value_xmalloc_3;
  return_value_xmalloc_3=xmalloc((unsigned long int)out_slots * sizeof(struct work_blk *) /*8ul*/ );
  reord_q.root = (struct work_blk ** restrict )return_value_xmalloc_3;
  reord_q.size = (unsigned int)0;
  next_id = (unsigned long int)0;
  order.major = (unsigned long int)0;
  order.minor = (unsigned long int)0;
  /* assertion 1 <= bs100k && bs100k <= 9 */
  assert((unsigned int)1 <= bs100k && bs100k <= (unsigned int)9);
  combined_crc = (unsigned int)0;
  write_header();
}

// init_link1
// file expand.c line 880
static void init_link1(void)
{
  void *return_value_xmalloc_1_link1;
  return_value_xmalloc_1_link1=xmalloc((unsigned long int)in_slots * sizeof(struct in_blk_0 *) /*8ul*/ );
  input_q.root = (struct in_blk_0 ** restrict )return_value_xmalloc_1_link1;
  input_q.modulus = in_slots;
  input_q.size = (unsigned int)0;
  input_q.head = input_q.size;
  void *return_value_xmalloc_2_link1;
  return_value_xmalloc_2_link1=xmalloc((unsigned long int)in_slots * sizeof(struct detached_bitstream *) /*8ul*/ );
  scan_q.root = (struct detached_bitstream ** restrict )return_value_xmalloc_2_link1;
  scan_q.size = (unsigned int)0;
  void *return_value_xmalloc_3_link1;
  return_value_xmalloc_3_link1=xmalloc((unsigned long int)work_units * sizeof(struct retr_blk *) /*8ul*/ );
  retr_q.root = (struct retr_blk ** restrict )return_value_xmalloc_3_link1;
  retr_q.size = (unsigned int)0;
  void *return_value_xmalloc_4;
  return_value_xmalloc_4=xmalloc((unsigned long int)work_units * sizeof(struct emit_blk *) /*8ul*/ );
  emit_q.root = (struct emit_blk ** restrict )return_value_xmalloc_4;
  emit_q.size = (unsigned int)0;
  void *return_value_xmalloc_5;
  return_value_xmalloc_5=xmalloc((unsigned long int)(work_units + out_slots > 1u + 2u ? (work_units + out_slots) - (1u + 2u) : (unsigned int)0) * sizeof(struct unord_blk *) /*8ul*/ );
  unord_q.root = (struct unord_blk ** restrict )return_value_xmalloc_5;
  unord_q.size = (unsigned int)0;
  void *return_value_xmalloc_6;
  return_value_xmalloc_6=xmalloc((unsigned long int)(work_units + out_slots) * sizeof(struct head_blk) /*24ul*/ );
  order_q.root = (struct head_blk *)return_value_xmalloc_6;
  order_q.modulus = work_units + out_slots;
  order_q.size = (unsigned int)0;
  order_q.head = order_q.size;
  void *return_value_xmalloc_7;
  return_value_xmalloc_7=xmalloc((unsigned long int)out_slots * sizeof(struct out_blk *) /*8ul*/ );
  reord_q_link1.root = (struct out_blk ** restrict )return_value_xmalloc_7;
  reord_q_link1.size = (unsigned int)0;
  head_offs = (unsigned long int)0;
  tail_offs = (unsigned long int)0;
  eof_missing = (unsigned int)0;
  parsing_done = (_Bool)0;
  parse_token = (_Bool)1;
  reord_offs = (unsigned long int)0;
  parser_bs=bits_init((unsigned long int)0);
  parser_init(&par, (signed int)bs100k);
}

// init_io
// file process.c line 473
static void init_io(void)
{
  request_close = (_Bool)0;
  finish = (_Bool)0;
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc((unsigned long int)out_slots * sizeof(struct block) /*24ul*/ );
  output_q.root = (struct block *)return_value_xmalloc_1;
  output_q.modulus = out_slots;
  output_q.size = (unsigned int)0;
  output_q.head = output_q.size;
  sink_thread=xcreate(sink_thread_proc);
  source_thread=xcreate(source_thread_proc);
}

// input_init
// file main.c line 699
static signed int input_init(struct arg *operand, struct stat *sbuf)
{
  ispec.total = (unsigned long int)0u;
  _Bool tmp_if_expr_9;
  signed int return_value_suffix_xform_8;
  if(operand == ((struct arg *)NULL))
  {
    ispec.fd = 0;
    ispec.sep = "";
    ispec.fmt = "stdin";
    ispec.size = (unsigned long int)0u;
    return 0;
  }

  else
  {
    if(force == (_Bool)0)
    {
      signed int return_value_lstat_2;
      return_value_lstat_2=lstat(operand->val, sbuf);
      if(return_value_lstat_2 == -1)
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        warnx(*return_value___errno_location_1, "skipping \"%s\": lstat()", operand->val);
        return -1;
      }

      if((signed int)outmode == OM_REGF)
      {
        if(!((61440u & sbuf->st_mode) == 32768u))
        {
          warn("skipping \"%s\": not a regular file", operand->val);
          return -1;
        }

      }

      if(keep == (_Bool)0 && (signed int)outmode == OM_REGF)
      {
        if(sbuf->st_nlink >= 2ul)
        {
          warn("skipping \"%s\": more than one links", operand->val);
          return -1;
        }

      }

    }

    if(decompress == (_Bool)0)
    {
      return_value_suffix_xform_8=suffix_xform(operand->val, ((char **)NULL));
      tmp_if_expr_9 = return_value_suffix_xform_8 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_9 = (_Bool)0;
    if(tmp_if_expr_9)
      warn("skipping \"%s\": compressed suffix", operand->val);

    else
    {
      signed int infd;
      infd=open(operand->val, 00 | 0400);
      if(infd == -1)
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        warnx(*return_value___errno_location_3, "skipping \"%s\": open()", operand->val);
      }

      else
      {
        signed int return_value_fstat_4;
        return_value_fstat_4=fstat(infd, sbuf);
        if(!(return_value_fstat_4 == -1))
        {
          ispec.fd = infd;
          ispec.sep = "\"";
          ispec.fmt = operand->val;
          /* assertion 0 <= sbuf->st_size */
          assert((signed long int)0 <= sbuf->st_size);
          ispec.size = (unsigned long int)sbuf->st_size;
          return 0;
        }

        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        warnx(*return_value___errno_location_5, "skipping \"%s\": fstat()", operand->val);
        signed int return_value_close_7;
        return_value_close_7=close(infd);
        if(return_value_close_7 == -1)
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          failx(*return_value___errno_location_6, "close(\"%s\")", operand->val);
        }

      }
    }
    return -1;
  }
}

// input_oprnd_rm
// file main.c line 760
static void input_oprnd_rm(struct arg *operand)
{
  /* assertion 0 != operand */
  assert(((struct arg *)NULL) != operand);
  signed int return_value_unlink_3;
  return_value_unlink_3=unlink(operand->val);
  signed int *return_value___errno_location_2;
  if(return_value_unlink_3 == -1)
  {
    return_value___errno_location_2=__errno_location();
    if(!(*return_value___errno_location_2 == 2))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      warnx(*return_value___errno_location_1, "unlink(\"%s\")", operand->val);
    }

  }

}

// input_uninit
// file main.c line 771
static void input_uninit(void)
{
  signed int return_value_close_2;
  return_value_close_2=close(ispec.fd);
  if(return_value_close_2 == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    failx(*return_value___errno_location_1, "close(%s%s%s)", ispec.sep, ispec.fmt, ispec.sep);
  }

}

// is_infinite_or_zerol
// file vasnprintf.c line 311
static signed int is_infinite_or_zerol(long double x)
{
  signed int return_value_rpl_isnanl_1;
  return_value_rpl_isnanl_1=rpl_isnanl(x);
  return (signed int)(return_value_rpl_isnanl_1 != 0 ? (_Bool)1 : (IEEE_FLOAT_EQUAL(x + x, x) ? (_Bool)1 : (_Bool)0));
}

// log_generic
// file main.c line 90
static void log_generic(struct filespec *fs, signed int code, const char *fmt, void **args, signed int nl)
{
  signed int return_value_rpl_fprintf_1;
  return_value_rpl_fprintf_1=rpl_fprintf(stderr, "%s: ", pname);
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  signed int return_value_rpl_fprintf_2;
  if(!(return_value_rpl_fprintf_1 >= 0))
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    if(!(fs == ((struct filespec *)NULL)))
    {
      return_value_rpl_fprintf_2=rpl_fprintf(stderr, "%s%s%s: ", fs->sep, fs->fmt, fs->sep);
      tmp_if_expr_3 = 0 > return_value_rpl_fprintf_2 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_6;
  signed int return_value_vfprintf_5;
  if(tmp_if_expr_4)
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    return_value_vfprintf_5=vfprintf(stderr, fmt, args);
    tmp_if_expr_6 = 0 > return_value_vfprintf_5 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_9;
  char *return_value_strerror_7;
  signed int return_value_rpl_fprintf_8;
  if(tmp_if_expr_6)
    tmp_if_expr_10 = (_Bool)1;

  else
  {
    if(!(code == 0))
    {
      return_value_strerror_7=strerror(code);
      return_value_rpl_fprintf_8=rpl_fprintf(stderr, ": %s", return_value_strerror_7);
      tmp_if_expr_9 = 0 > return_value_rpl_fprintf_8 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_9 = (_Bool)0;
    tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_12;
  signed int return_value_rpl_fprintf_11;
  if(tmp_if_expr_10)
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    if(!(nl == 0))
    {
      return_value_rpl_fprintf_11=rpl_fprintf(stderr, "\n");
      tmp_if_expr_12 = 0 > return_value_rpl_fprintf_11 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_12 = (_Bool)0;
    tmp_if_expr_13 = tmp_if_expr_12 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_15;
  signed int return_value_fflush_14;
  if(tmp_if_expr_13)
    tmp_if_expr_15 = (_Bool)1;

  else
  {
    return_value_fflush_14=fflush(stderr);
    tmp_if_expr_15 = 0 != return_value_fflush_14 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_15)
    bailout();

}

// lutimens
// file utimens.c line 429
signed int lutimens(const char *file, struct timespec *timespec)
{
  struct timespec adjusted_timespec[2l];
  struct timespec *ts;
  struct timespec *tmp_if_expr_1;
  if(!(timespec == ((struct timespec *)NULL)))
    tmp_if_expr_1 = adjusted_timespec;

  else
    tmp_if_expr_1 = (struct timespec *)(void *)0;
  ts = tmp_if_expr_1;
  signed int adjustment_needed = 0;
  struct stat st;
  if(!(ts == ((struct timespec *)NULL)))
  {
    adjusted_timespec[(signed long int)0] = timespec[(signed long int)0];
    adjusted_timespec[(signed long int)1] = timespec[(signed long int)1];
    adjustment_needed=validate_timespec(ts);
  }

  signed int *return_value___errno_location_3;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  signed int return_value_lstat_6;
  _Bool return_value_update_timespec_7;
  signed int return_value_lstat_8;
  signed int return_value_fdutimens_9;
  if(!(adjustment_needed >= 0))
    return -1;

  else
  {
    if(lutimensat_works_really >= 0)
    {
      signed int result;
      if(adjustment_needed == 2)
      {
        signed int return_value_lstat_2;
        return_value_lstat_2=lstat(file, &st);
        if(!(return_value_lstat_2 == 0))
          return -1;

        if(ts->tv_nsec == 1073741822l)
          ts[(signed long int)0]=get_stat_atime(&st);

        else
          if((ts + 1l)->tv_nsec == 1073741822l)
            ts[(signed long int)1]=get_stat_mtime(&st);

        adjustment_needed = adjustment_needed + 1;
      }

      result=utimensat(-100, file, ts, 0x100);
      if(result >= 1)
      {
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = 38;
      }

      if(result == 0)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value___errno_location_4=__errno_location();
        tmp_if_expr_5 = *return_value___errno_location_4 != 38 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
      {
        utimensat_works_really = 1;
        lutimensat_works_really = 1;
        return result;
      }

    }

    lutimensat_works_really = -1;
    if(!(adjustment_needed == 0))
    {
      if(!(adjustment_needed == 3))
      {
        return_value_lstat_6=lstat(file, &st);
        if(!(return_value_lstat_6 == 0))
          return -1;

      }

      if(!(ts == ((struct timespec *)NULL)))
      {
        return_value_update_timespec_7=update_timespec(&st, &ts);
        if(!(return_value_update_timespec_7 == (_Bool)0))
          return 0;

      }

    }

    if(adjustment_needed == 0)
    {
      return_value_lstat_8=lstat(file, &st);
      if(return_value_lstat_8 == 0)
        goto __CPROVER_DUMP_L17;

      return -1;
    }

    else
    {

    __CPROVER_DUMP_L17:
      ;
      if(!((61440u & st.st_mode) == 40960u))
      {
        return_value_fdutimens_9=fdutimens(-1, file, ts);
        return return_value_fdutimens_9;
      }

      else
      {
        signed int *return_value___errno_location_10;
        return_value___errno_location_10=__errno_location();
        *return_value___errno_location_10 = 38;
        return -1;
      }
    }
  }
}

// main
// file main.c line 904
signed int main(signed int argc, char **argv)
{
  struct arg *operands;
  pname=strrchr(argv[(signed long int)0], 47);
  const char *tmp_if_expr_1;
  if(!(pname == ((const char *)NULL)))
    tmp_if_expr_1 = pname + (signed long int)1;

  else
    tmp_if_expr_1 = argv[(signed long int)0];
  pname = tmp_if_expr_1;
  static char stderr_buf[8192l];
  setbuf(stderr, stderr_buf);
  setup_signals();
  opts_setup(&operands, (unsigned long int)argc, argv);
  small = (_Bool)0;
  do
  {
    signed int ret;
    struct stat instat;
    ret=input_init(operands, &instat);
    if(!(ret == -1))
    {
      cli();
      signed int return_value_output_init_2;
      return_value_output_init_2=output_init(operands, &instat);
      if(!(return_value_output_init_2 == -1))
      {
        work();
        if((signed int)outmode == OM_REGF)
        {
          output_regf_uninit(ospec.fd, &instat);
          if(keep == (_Bool)0)
            input_oprnd_rm(operands);

        }

        if(ispec.total >= 1ul && ospec.total >= 1ul && !(verbose == (_Bool)0))
        {
          unsigned long int plain_size;
          unsigned long int compr_size;
          double ratio;
          double savings;
          double ratio_magnitude;
          plain_size = !(decompress != (_Bool)0) ? ispec.total : ospec.total;
          compr_size = ispec.total ^ ospec.total ^ plain_size;
          ratio = (double)compr_size / (double)plain_size;
          savings = (double)1 - ratio;
          ratio_magnitude = ratio < (double)1 ? (double)1 / ratio : ratio;
          infof(&ispec, "compression ratio is %s%.3f%s, space savings is %.2f%%", ratio < (double)1 ? "1:" : "", ratio_magnitude, ratio < (double)1 ? "" : ":1", (double)100 * savings);
        }

      }

      sti();
      input_uninit();
    }

    if(!(operands == ((struct arg *)NULL)))
    {
      struct arg *next = operands->next;
      free((void *)operands);
      operands = next;
    }

  }
  while(!(operands == ((struct arg *)NULL)));
  /* assertion 0 == opathn */
  assert(((char *)NULL) == opathn);
  signed int return_value_close_4;
  if((signed int)outmode == OM_STDOUT)
  {
    return_value_close_4=close(1);
    if(return_value_close_4 == -1)
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      failx(*return_value___errno_location_3, "close(stdout)");
    }

  }

  _exit(warned != (_Bool)0 ? 4 : 0);
}

// make_code_lengths
// file encode.c line 707
static void make_code_lengths(unsigned char *length, unsigned int *frequency, unsigned int as)
{
  unsigned int i;
  unsigned int k;
  unsigned int d;
  unsigned int c;
  unsigned long int weight[258l];
  unsigned int V[258l];
  unsigned int count[32l];
  /* assertion as >= (2+0+1) */
  assert(as >= (unsigned int)(2 + 0 + 1));
  /* assertion as <= (2+255+1) */
  assert(as <= (unsigned int)(2 + 255 + 1));
  i = (unsigned int)0;
  unsigned int tmp_if_expr_1;
  for( ; !(i >= as); i = i + 1u)
  {
    if(!(frequency[(signed long int)i] >= 1u))
      tmp_if_expr_1 = 1u;

    else
      tmp_if_expr_1 = frequency[(signed long int)i];
    weight[(signed long int)i] = (unsigned long int)tmp_if_expr_1 << 32 | (unsigned long int)0x10000 | (unsigned long int)((unsigned int)(2 + 255 + 1) - i);
  }
  sort_alphabet(weight, weight + (signed long int)as);
  build_tree(V, weight, (signed int)as);
  compute_depths(count, V, as);
  i = (unsigned int)0;
  c = (unsigned int)0;
  d = (unsigned int)0;
  for( ; !(d >= 31u); d = d + 1u)
  {
    k = count[(signed long int)d];
    c = c + k << 1;
    for( ; !(k == 0u); k = k - 1u)
    {
      /* assertion i < as */
      assert(i < as);
      length[(signed long int)((unsigned long int)(2 + 255 + 1) - (weight[(signed long int)i] & (unsigned long int)0xFFFF))] = (unsigned char)d;
      i = i + 1u;
    }
  }
  /* assertion c == (1UL << (30 + 1)) */
  assert((unsigned long int)c == 1UL << 30 + 1);
  /* assertion i == as */
  assert(i == as);
}

// make_map_e
// file encode.c line 336
static unsigned int make_map_e(unsigned char *cmap, const _Bool *inuse)
{
  unsigned int i;
  unsigned int j = (unsigned int)0;
  i = (unsigned int)0;
  for( ; !(i >= 256u); i = i + 1u)
  {
    signed int k = (signed int)inuse[(signed long int)i];
    cmap[(signed long int)i] = (unsigned char)j;
    j = j + (unsigned int)k;
  }
  return j;
}

// make_timespec
// file ../lib/timespec.h line 41
inline struct timespec make_timespec(signed long int s, signed long int ns)
{
  struct timespec r;
  r.tv_sec = s;
  r.tv_nsec = ns;
  return r;
}

// make_tree
// file decode.c line 191
static void make_tree(struct retriever_internal_state *rs)
{
  unsigned int n;
  const unsigned char *make_tree__1__L;
  unsigned int *C;
  unsigned long int *B;
  unsigned short int *P;
  unsigned short int *S;
  unsigned int k;
  unsigned int s;
  unsigned int cum;
  unsigned int code;
  unsigned long int sofar;
  unsigned long int next;
  unsigned long int inc;
  unsigned long int v;
  n = rs->alpha_size;
  make_tree__1__L = rs->code_len;
  C = rs->tree[(signed long int)rs->t].count;
  B = rs->tree[(signed long int)rs->t].base;
  P = rs->tree[(signed long int)rs->t].perm;
  S = rs->tree[(signed long int)rs->t].start;
  k = (unsigned int)0;
  for( ; !(k >= 21u); k = k + 1u)
    C[(signed long int)k] = (unsigned int)0;
  s = (unsigned int)0;
  for( ; !(s >= n); s = s + 1u)
  {
    k = (unsigned int)make_tree__1__L[(signed long int)s];
    C[(signed long int)k] = C[(signed long int)k] + 1u;
  }
  /* assertion C[0] == 0 */
  assert(C[(signed long int)0] == (unsigned int)0);
  sofar = (unsigned long int)0;
  k = (unsigned int)1;
  for( ; !(k >= 21u); k = k + 1u)
    sofar = sofar + ((unsigned long int)C[(signed long int)k] << (unsigned int)20 - k);
  _Bool tmp_if_expr_1;
  unsigned int tmp_post_2;
  unsigned int tmp_post_3;
  unsigned int tmp_post_4;
  unsigned int tmp_post_5;
  unsigned int tmp_post_6;
  unsigned long int tmp_post_7;
  if(!(sofar == 1048576ul))
    rs->mtf[(signed long int)rs->t] = (unsigned int)(sofar < (unsigned long int)(1 << 20) ? 11 : 10);

  else
  {
    sofar = (unsigned long int)0;
    k = (unsigned int)1;
    for( ; !(k >= 21u); k = k + 1u)
    {
      next = sofar + ((unsigned long int)C[(signed long int)k] << (unsigned int)64 - k);
      /* assertion next == 0 || next >= sofar */
      assert(next == (unsigned long int)0 || next >= sofar);
      B[(signed long int)k] = sofar;
      sofar = next;
    }
    /* assertion sofar == 0 */
    assert(sofar == (unsigned long int)0);
    /* assertion k == 20 + 1 */
    assert(k == (unsigned int)(20 + 1));
    do
    {
      /* assertion k > 1 */
      assert(k > (unsigned int)1);
      if(k >= 21u)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = B[(signed long int)k] == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
      /* assertion k > 20 || B[k] == 0 */
      assert(tmp_if_expr_1);
      tmp_post_2 = k;
      k = k - 1u;
      B[(signed long int)tmp_post_2] = (unsigned long int)-1;
    }
    while(C[(signed long int)k] == 0u);
    cum = (unsigned int)0;
    k = (unsigned int)1;
    for( ; !(k >= 21u); k = k + 1u)
    {
      unsigned int t1 = C[(signed long int)k];
      C[(signed long int)k] = cum;
      cum = cum + t1;
    }
    /* assertion cum == n */
    assert(cum == n);
    tmp_post_3 = C[(signed long int)make_tree__1__L[(signed long int)0]];
    C[(signed long int)make_tree__1__L[(signed long int)0]] = C[(signed long int)make_tree__1__L[(signed long int)0]] + 1u;
    P[(signed long int)tmp_post_3] = (unsigned short int)(256 + 1);
    tmp_post_4 = C[(signed long int)make_tree__1__L[(signed long int)1]];
    C[(signed long int)make_tree__1__L[(signed long int)1]] = C[(signed long int)make_tree__1__L[(signed long int)1]] + 1u;
    P[(signed long int)tmp_post_4] = (unsigned short int)(256 + 2);
    s = (unsigned int)2;
    for( ; !(s >= n + 4294967295u); s = s + 1u)
    {
      tmp_post_5 = C[(signed long int)make_tree__1__L[(signed long int)s]];
      C[(signed long int)make_tree__1__L[(signed long int)s]] = C[(signed long int)make_tree__1__L[(signed long int)s]] + 1u;
      P[(signed long int)tmp_post_5] = (unsigned short int)(s - (unsigned int)1);
    }
    tmp_post_6 = C[(signed long int)make_tree__1__L[(signed long int)(n - (unsigned int)1)]];
    C[(signed long int)make_tree__1__L[(signed long int)(n - (unsigned int)1)]] = C[(signed long int)make_tree__1__L[(signed long int)(n - (unsigned int)1)]] + 1u;
    P[(signed long int)tmp_post_6] = (unsigned short int)0;
    code = (unsigned int)0;
    inc = (unsigned long int)(1 << 10 - 1);
    k = (unsigned int)1;
    for( ; !(k >= 11u); k = k + 1u)
    {
      s = C[(signed long int)(k - (unsigned int)1)];
      for( ; !(s >= C[(signed long int)k]); s = s + 1u)
      {
        unsigned short int x = (unsigned short int)((unsigned int)((signed int)P[(signed long int)s] << 5) | k);
        v = (unsigned long int)code;
        code = code + (unsigned int)inc;
        for( ; !(v >= (unsigned long int)code); S[(signed long int)tmp_post_7] = x)
        {
          tmp_post_7 = v;
          v = v + 1ul;
        }
      }
      inc = inc >> 1;
    }
    /* assertion k == 10 + 1 */
    assert(k == (unsigned int)(10 + 1));
    sofar = (unsigned long int)code << 64 - 10;
    for( ; !(code >= 1024u); sofar = sofar + ((unsigned long int)1 << 64 - 10))
    {
      for( ; sofar >= B[(signed long int)(1u + k)]; k = k + 1u)
        ;
      S[(signed long int)code] = (unsigned short int)k;
      code = code + 1u;
    }
    /* assertion sofar == 0 */
    assert(sofar == (unsigned long int)0);
    k = (unsigned int)20;
    for( ; k >= 1u; k = k - 1u)
      C[(signed long int)k] = C[(signed long int)(k - (unsigned int)1)];
    /* assertion C[0] == 0 */
    assert(C[(signed long int)0] == (unsigned int)0);
    rs->mtf[(signed long int)rs->t] = rs->t;
  }
}

// mtf_one
// file decode.c line 440
static unsigned char mtf_one(unsigned char **imtf_row, unsigned char *imtf_slide, unsigned char c)
{
  unsigned char *pp;
  unsigned char *tmp_post_1;
  if(!((unsigned int)c >= 16u))
  {
    unsigned int nn = (unsigned int)c;
    pp = imtf_row[(signed long int)0];
    c = pp[(signed long int)nn];
    if(!(nn == 15u))
    {
      if(nn == 14u)
        goto __CPROVER_DUMP_L2;

      if(nn == 13u)
        goto __CPROVER_DUMP_L3;

      if(nn == 12u)
        goto __CPROVER_DUMP_L4;

      if(nn == 11u)
        goto __CPROVER_DUMP_L5;

      if(nn == 10u)
        goto __CPROVER_DUMP_L6;

      if(nn == 9u)
        goto __CPROVER_DUMP_L7;

      if(nn == 8u)
        goto __CPROVER_DUMP_L8;

      if(nn == 7u)
        goto __CPROVER_DUMP_L9;

      if(nn == 6u)
        goto __CPROVER_DUMP_L10;

      if(nn == 5u)
        goto __CPROVER_DUMP_L11;

      if(nn == 4u)
        goto __CPROVER_DUMP_L12;

      if(nn == 3u)
        goto __CPROVER_DUMP_L13;

      if(nn == 2u)
        goto __CPROVER_DUMP_L14;

      if(nn == 1u)
        goto __CPROVER_DUMP_L15;

      abort();
    }

    pp[(signed long int)15] = pp[(signed long int)(15 - 1)];

  __CPROVER_DUMP_L2:
    ;
    pp[(signed long int)14] = pp[(signed long int)(14 - 1)];

  __CPROVER_DUMP_L3:
    ;
    pp[(signed long int)13] = pp[(signed long int)(13 - 1)];

  __CPROVER_DUMP_L4:
    ;
    pp[(signed long int)12] = pp[(signed long int)(12 - 1)];

  __CPROVER_DUMP_L5:
    ;
    pp[(signed long int)11] = pp[(signed long int)(11 - 1)];

  __CPROVER_DUMP_L6:
    ;
    pp[(signed long int)10] = pp[(signed long int)(10 - 1)];

  __CPROVER_DUMP_L7:
    ;
    pp[(signed long int)9] = pp[(signed long int)(9 - 1)];

  __CPROVER_DUMP_L8:
    ;
    pp[(signed long int)8] = pp[(signed long int)(8 - 1)];

  __CPROVER_DUMP_L9:
    ;
    pp[(signed long int)7] = pp[(signed long int)(7 - 1)];

  __CPROVER_DUMP_L10:
    ;
    pp[(signed long int)6] = pp[(signed long int)(6 - 1)];

  __CPROVER_DUMP_L11:
    ;
    pp[(signed long int)5] = pp[(signed long int)(5 - 1)];

  __CPROVER_DUMP_L12:
    ;
    pp[(signed long int)4] = pp[(signed long int)(4 - 1)];

  __CPROVER_DUMP_L13:
    ;
    pp[(signed long int)3] = pp[(signed long int)(3 - 1)];

  __CPROVER_DUMP_L14:
    ;
    pp[(signed long int)2] = pp[(signed long int)(2 - 1)];

  __CPROVER_DUMP_L15:
    ;
    pp[(signed long int)1] = pp[(signed long int)(1 - 1)];
  }

  else
  {
    if(*imtf_row == imtf_slide)
    {
      unsigned char *kk = imtf_slide + (signed long int)8192u;
      unsigned char **rr = imtf_row + (signed long int)(256u / 16u);
      while(!(imtf_row >= rr))
      {
        unsigned char *bg;
        rr = rr - 1l;
        bg = *rr;
        unsigned char *bb = bg + (signed long int)16u;
        /* assertion bg >= imtf_slide && bb <= imtf_slide + 8192u */
        assert(bg >= imtf_slide && bb <= imtf_slide + (signed long int)8192u);
        for( ; !(bg >= bb); *kk = *bb)
        {
          kk = kk - 1l;
          bb = bb - 1l;
        }
        *rr = kk;
      }
    }

    unsigned char **lno = imtf_row + (signed long int)((unsigned int)c / 16u);
    unsigned char *mtf_one__1__2__2__bb = *lno;
    pp = mtf_one__1__2__2__bb + (signed long int)((unsigned int)c % 16u);
    c = *pp;
    while(!(mtf_one__1__2__2__bb >= pp))
    {
      unsigned char *tt;
      tmp_post_1 = pp;
      pp = pp - 1l;
      tt = tmp_post_1;
      *tt = *pp;
    }
    while(!(imtf_row >= lno))
    {
      unsigned char **lno1 = lno;
      lno = lno - 1l;
      *lno = *lno - 1l;
      pp = *lno;
      *(*lno1) = pp[(signed long int)16u];
    }
  }
  *pp = c;
  return c;
}

// on_input_avail
// file compress.c line 255
static void on_input_avail(void *buffer, unsigned long int size)
{
  struct in_blk *iblk;
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(sizeof(struct in_blk) /*48ul*/ );
  iblk = (struct in_blk *)return_value_xmalloc_1;
  unsigned long int tmp_post_2 = next_id;
  next_id = next_id + 1ul;
  iblk->pos.major = tmp_post_2;
  iblk->pos.minor = (unsigned long int)0u;
  iblk->buffer = buffer;
  iblk->size = size;
  iblk->next = (const unsigned char *)buffer;
  iblk->left = size;
  sched_lock();
  coll_q.root[(signed long int)coll_q.size] = iblk;
  unsigned int tmp_post_3 = coll_q.size;
  coll_q.size = coll_q.size + 1u;
  up_heap((void *)coll_q.root, tmp_post_3);
  sched_unlock();
}

// on_input_avail_link1
// file expand.c line 827
static void on_input_avail_link1(void *buffer_link1, unsigned long int size_link1)
{
  struct in_blk_0 *iblk_link1;
  struct detached_bitstream *scan_task;
  unsigned int missing;
  void *return_value_xmalloc_1_link1;
  return_value_xmalloc_1_link1=xmalloc(sizeof(struct in_blk_0) /*32ul*/ );
  iblk_link1 = (struct in_blk_0 *)return_value_xmalloc_1_link1;
  iblk_link1->buffer = buffer_link1;
  iblk_link1->size = (size_link1 + (unsigned long int)3) / (unsigned long int)4;
  iblk_link1->ref_count = 1u;
  iblk_link1->offset = tail_offs;
  missing = (unsigned int)(-size_link1 % (unsigned long int)4);
  bzero((void *)((char *)buffer_link1 + (signed long int)size_link1), (unsigned long int)missing);
  void *return_value_xmalloc_2;
  return_value_xmalloc_2=xmalloc(sizeof(struct detached_bitstream) /*48ul*/ );
  scan_task = (struct detached_bitstream *)return_value_xmalloc_2;
  *scan_task=bits_init(tail_offs);
  sched_lock();
  unsigned int tmp_post_3_link1;
  if(!(parsing_done == (_Bool)0))
  {
    sched_unlock();
    free((void *)iblk_link1);
    free((void *)scan_task);
    source_release_buffer(buffer_link1);
  }

  else
  {
    eof_missing = missing;
    tail_offs = tail_offs + iblk_link1->size;
    /* assertion (input_q).size < (input_q).modulus */
    assert(input_q.size < input_q.modulus);
    input_q.size = input_q.size + 1u;
    input_q.root[(signed long int)(input_q.head + input_q.size < (input_q.head + input_q.size) - input_q.modulus ? input_q.head + input_q.size : (input_q.head + input_q.size) - input_q.modulus)] = iblk_link1;
    scan_q.root[(signed long int)scan_q.size] = scan_task;
    tmp_post_3_link1 = scan_q.size;
    scan_q.size = scan_q.size + 1u;
    up_heap((void *)scan_q.root, tmp_post_3_link1);
    sched_unlock();
  }
}

// on_write_complete
// file compress.c line 273
static void on_write_complete(void *buffer)
{
  free(buffer);
  sched_lock();
  out_slots = out_slots + 1u;
  sched_unlock();
}

// on_write_complete_link1
// file expand.c line 866
static void on_write_complete_link1(void *buffer_link1)
{
  struct out_blk *oblk = (struct out_blk *)buffer_link1;
  free((void *)(oblk - (signed long int)1));
  sched_lock();
  out_slots = out_slots + 1u;
  sched_unlock();
}

// opts_decompress
// file main.c line 307
static void opts_decompress(char ch)
{
  /* assertion 'd' == ch || 'z' == ch */
  assert(100 == (signed int)ch || 122 == (signed int)ch);
  decompress = 100 == (signed int)ch;
  if((signed int)outmode == OM_DISCARD)
    outmode = (enum outmode)OM_REGF;

}

// opts_outmode
// file main.c line 290
static void opts_outmode(char ch)
{
  /* assertion 'c' == ch || 't' == ch */
  assert(99 == (signed int)ch || 116 == (signed int)ch);
  if((signed int)ch == 99 ? (signed int)outmode == OM_DISCARD : (signed int)outmode == OM_STDOUT)
    fail("\"-c\" and \"-t\" are incompatible, specify \"-h\" for help");

  if((signed int)ch == 99)
    outmode = (enum outmode)OM_STDOUT;

  else
  {
    outmode = (enum outmode)OM_DISCARD;
    decompress = (_Bool)1;
  }
}

// opts_setup
// file main.c line 318
static void opts_setup(struct arg **operands, unsigned long int argc, char **argv)
{
  struct arg **link_at;
  unsigned long int mx_worker;
  *operands = ((struct arg *)NULL);
  link_at = operands;
  unsigned long int ofs = (unsigned long int)0u;
  for( ; !(ofs >= 3ul); ofs = ofs + 1ul)
  {
    char *ev_val;
    ev_val=getenv(ev_name[(signed long int)ofs]);
    if(!(ev_val == ((char *)NULL)))
    {
      char *tok;
      tok=strtok(ev_val, envsep);
      while(!(tok == ((char *)NULL)))
      {
        struct arg *opts_setup__1__1__1__1__1__1__1__arg;
        void *return_value_xmalloc_1;
        return_value_xmalloc_1=xmalloc(sizeof(struct arg) /*16ul*/ );
        opts_setup__1__1__1__1__1__1__1__arg = (struct arg *)return_value_xmalloc_1;
        opts_setup__1__1__1__1__1__1__1__arg->next = (struct arg *)(void *)0;
        opts_setup__1__1__1__1__1__1__1__arg->val = tok;
        *link_at = opts_setup__1__1__1__1__1__1__1__arg;
        link_at = &opts_setup__1__1__1__1__1__1__1__arg->next;
        tok=strtok(((char *)NULL), envsep);
      }
    }

  }
  ofs = (unsigned long int)1u;
  for( ; !(ofs >= argc); ofs = ofs + 1ul)
  {
    struct arg *opts_setup__1__1__2__1__arg;
    void *return_value_xmalloc_2;
    return_value_xmalloc_2=xmalloc(sizeof(struct arg) /*16ul*/ );
    opts_setup__1__1__2__1__arg = (struct arg *)return_value_xmalloc_2;
    opts_setup__1__1__2__1__arg->next = (struct arg *)(void *)0;
    opts_setup__1__1__2__1__arg->val = argv[(signed long int)ofs];
    *link_at = opts_setup__1__1__2__1__arg;
    link_at = &opts_setup__1__1__2__1__arg->next;
  }
  signed long int return_value_sysconf_3;
  return_value_sysconf_3=sysconf(76);
  mx_worker = (unsigned long int)return_value_sysconf_3;
  mx_worker = mx_worker < ((unsigned long int)((unsigned int)0x7fffffff * 2U + 1U) < 18446744073709551615UL / sizeof(unsigned long int) /*8ul*/  ? (unsigned long int)((unsigned int)0x7fffffff * 2U + 1U) : 18446744073709551615UL / sizeof(unsigned long int) /*8ul*/ ) ? mx_worker : ((unsigned long int)((unsigned int)0x7fffffff * 2U + 1U) < 18446744073709551615UL / sizeof(unsigned long int) /*8ul*/  ? (unsigned long int)((unsigned int)0x7fffffff * 2U + 1U) : 18446744073709551615UL / sizeof(unsigned long int) /*8ul*/ );
  signed int return_value_strcmp_7;
  return_value_strcmp_7=strcmp(pname, "bunzip2");
  _Bool tmp_if_expr_9;
  signed int return_value_strcmp_8;
  if(return_value_strcmp_7 == 0)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_strcmp_8=strcmp(pname, "lbunzip2");
    tmp_if_expr_9 = return_value_strcmp_8 == 0 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_strcmp_4;
  _Bool tmp_if_expr_6;
  signed int return_value_strcmp_5;
  if(tmp_if_expr_9)
    decompress = (_Bool)1;

  else
  {
    return_value_strcmp_4=strcmp(pname, "bzcat");
    if(return_value_strcmp_4 == 0)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      return_value_strcmp_5=strcmp(pname, "lbzcat");
      tmp_if_expr_6 = return_value_strcmp_5 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
    {
      outmode = (enum outmode)OM_STDOUT;
      decompress = (_Bool)1;
    }

  }
  link_at = operands;
  /* #anon_enum_AS_CONTINUE=0_AS_STOP=1_AS_USAGE=2_AS_VERSION=3 */
enum anonymous { AS_CONTINUE=0, AS_STOP=1, AS_USAGE=2, AS_VERSION=3 };

/* */
  ;
  enum anonymous args_state;
  struct arg *arg;
  struct arg *next;
  args_state = (enum anonymous)AS_CONTINUE;
  arg = *operands;
  signed int return_value_strcmp_28;
  signed int return_value_strcmp_27;
  signed int return_value_strcmp_26;
  signed int return_value_strcmp_25;
  signed int return_value_strcmp_24;
  signed int return_value_strcmp_23;
  signed int return_value_strcmp_22;
  signed int return_value_strcmp_21;
  signed int return_value_strcmp_20;
  signed int return_value_strcmp_19;
  signed int return_value_strcmp_18;
  signed int return_value_strcmp_17;
  signed int return_value_strcmp_14;
  _Bool tmp_if_expr_16;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_13;
  signed int return_value_strcmp_12;
  signed int return_value_strcmp_11;
  signed int return_value_strcmp_10;
  unsigned long int return_value_xstrtol_29;
  for( ; (signed int)args_state == AS_CONTINUE && !(arg == ((struct arg *)NULL)); arg = next)
  {
    const char *argscan = arg->val;
    if(!((signed int)*argscan == 45))
    {
      link_at = &arg->next;
      next = arg->next;
    }

    else
    {
      argscan = argscan + 1l;
      if((signed int)*argscan == 45)
      {
        argscan = argscan + 1l;
        if((signed int)*argscan == 0)
          args_state = (enum anonymous)AS_STOP;

        else
        {
          return_value_strcmp_28=strcmp("stdout", argscan);
          if(return_value_strcmp_28 == 0)
            opts_outmode((char)99);

          else
          {
            return_value_strcmp_27=strcmp("test", argscan);
            if(return_value_strcmp_27 == 0)
              opts_outmode((char)116);

            else
            {
              return_value_strcmp_26=strcmp("decompress", argscan);
              if(return_value_strcmp_26 == 0)
                opts_decompress((char)100);

              else
              {
                return_value_strcmp_25=strcmp("compress", argscan);
                if(return_value_strcmp_25 == 0)
                  opts_decompress((char)122);

                else
                {
                  return_value_strcmp_24=strcmp("fast", argscan);
                  if(return_value_strcmp_24 == 0)
                    bs100k = (unsigned int)1;

                  else
                  {
                    return_value_strcmp_23=strcmp("best", argscan);
                    if(return_value_strcmp_23 == 0)
                      bs100k = (unsigned int)9;

                    else
                    {
                      return_value_strcmp_22=strcmp("force", argscan);
                      if(return_value_strcmp_22 == 0)
                        force = (_Bool)1;

                      else
                      {
                        return_value_strcmp_21=strcmp("keep", argscan);
                        if(return_value_strcmp_21 == 0)
                          keep = (_Bool)1;

                        else
                        {
                          return_value_strcmp_20=strcmp("small", argscan);
                          if(return_value_strcmp_20 == 0)
                            small = (_Bool)1;

                          else
                          {
                            return_value_strcmp_19=strcmp("sequential", argscan);
                            if(return_value_strcmp_19 == 0)
                              ultra = (_Bool)1;

                            else
                            {
                              return_value_strcmp_18=strcmp("verbose", argscan);
                              if(return_value_strcmp_18 == 0)
                                verbose = (_Bool)1;

                              else
                              {
                                return_value_strcmp_17=strcmp("help", argscan);
                                if(return_value_strcmp_17 == 0)
                                  args_state = (enum anonymous)AS_USAGE;

                                else
                                {
                                  return_value_strcmp_14=strcmp("license", argscan);
                                  if(return_value_strcmp_14 == 0)
                                    tmp_if_expr_16 = (_Bool)1;

                                  else
                                  {
                                    return_value_strcmp_15=strcmp("version", argscan);
                                    tmp_if_expr_16 = 0 == return_value_strcmp_15 ? (_Bool)1 : (_Bool)0;
                                  }
                                  if(tmp_if_expr_16)
                                    args_state = (enum anonymous)AS_VERSION;

                                  else
                                  {
                                    return_value_strcmp_13=strcmp("quiet", argscan);
                                    if(!(return_value_strcmp_13 == 0))
                                    {
                                      return_value_strcmp_12=strcmp("repetitive-fast", argscan);
                                      if(!(return_value_strcmp_12 == 0))
                                      {
                                        return_value_strcmp_11=strcmp("repetitive-best", argscan);
                                        if(!(return_value_strcmp_11 == 0))
                                        {
                                          return_value_strcmp_10=strcmp("exponential", argscan);
                                          if(!(return_value_strcmp_10 == 0))
                                            fail("unknown option \"%s\", specify \"-h\" for help", arg->val);

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

      else
      {
        signed int cont = 1;
        do
        {
          signed int opt = (signed int)*argscan;
          switch(opt)
          {
            case 0:
            {
              cont = 0;
              break;
            }
            case 99:

            case 116:
            {
              opts_outmode((char)opt);
              break;
            }
            case 100:

            case 122:
            {
              opts_decompress((char)opt);
              break;
            }
            case 49:

            case 50:

            case 51:

            case 52:

            case 53:

            case 54:

            case 55:

            case 56:

            case 57:
            {
              bs100k = (unsigned int)(opt - 48);
              break;
            }
            case 102:
            {
              force = (_Bool)1;
              break;
            }
            case 107:
            {
              keep = (_Bool)1;
              break;
            }
            case 115:
            {
              small = (_Bool)1;
              break;
            }
            case 117:
            {
              ultra = (_Bool)1;
              break;
            }
            case 118:
            {
              verbose = (_Bool)1;
              break;
            }
            case 83:
            {
              print_cctrs = (_Bool)1;
              break;
            }
            case 113:
              break;
            case 104:
            {
              args_state = (enum anonymous)AS_USAGE;
              cont = 0;
              break;
            }
            case 76:

            case 86:
            {
              args_state = (enum anonymous)AS_VERSION;
              cont = 0;
              break;
            }
            case 110:

            case 109:
            {
              argscan = argscan + 1l;
              if((signed int)*argscan == 0)
              {
                next = arg->next;
                free((void *)arg);
                *link_at = next;
                arg = next;
                if(arg == ((struct arg *)NULL))
                  fail("option \"-%.1s\" requires an argument, specify \"-h\" for help", argscan - (signed long int)1);

                argscan = arg->val;
              }

              if(opt == 110)
              {
                return_value_xstrtol_29=xstrtol(argscan, opt, (unsigned long int)1, mx_worker);
                num_worker = (unsigned int)return_value_xstrtol_29;
              }

              else
                max_mem=xstrtol(argscan, opt, (unsigned long int)1, 18446744073709551615UL);
              cont = 0;
              break;
            }
            default:
              fail("unknown option \"-%c\", specify \"-h\" for help", opt);
          }
          argscan = argscan + 1l;
        }
        while(!(cont == 0));
      }
      next = arg->next;
      free((void *)arg);
      *link_at = next;
    }
  }
  if((signed int)args_state == AS_USAGE || (signed int)args_state == AS_VERSION)
  {
    arg = *operands;
    for( ; !(arg == ((struct arg *)NULL)); arg = next)
    {
      next = arg->next;
      free((void *)arg);
    }
    if((signed int)args_state == AS_USAGE)
      usage();

    else
      version();
  }

  if((signed int)outmode == OM_REGF)
  {
    if(*operands == ((struct arg *)NULL))
      outmode = (enum outmode)OM_STDOUT;

  }

  signed int return_value_isatty_30;
  signed int return_value_isatty_31;
  if(!(decompress == (_Bool)0))
  {
    if(*operands == ((struct arg *)NULL))
    {
      return_value_isatty_30=isatty(0);
      if(!(return_value_isatty_30 == 0))
        fail("won't read compressed data from a terminal, specify \"-h\" for help");

    }

  }

  else
    if((signed int)outmode == OM_STDOUT)
    {
      return_value_isatty_31=isatty(1);
      if(!(return_value_isatty_31 == 0))
        fail("won't write compressed data to a terminal, specify \"-h\" for help");

    }

  if(num_worker == 0u)
  {
    signed long int num_online;
    num_online=sysconf(84);
    if(num_online == -1l)
      fail("number of online processors unavailable, specify \"-h\" for help");

    /* assertion 1L <= num_online */
    assert(1L <= num_online);
    num_worker = (unsigned int)(mx_worker < (unsigned long int)num_online ? mx_worker : (unsigned long int)num_online);
  }

}

// output_init
// file main.c line 792
static signed int output_init(struct arg *operand, struct stat *sbuf)
{
  ospec.total = (unsigned long int)0u;
  signed int return_value_unlink_4;
  signed int *return_value___errno_location_3;
  switch((signed int)outmode)
  {
    case OM_STDOUT:
    {
      ospec.fd = 1;
      ospec.sep = "";
      ospec.fmt = "stdout";
      return 0;
    }
    case OM_DISCARD:
    {
      ospec.fd = -1;
      ospec.sep = "";
      ospec.fmt = "the bit bucket";
      return 0;
    }
    case OM_REGF:
    {
      /* assertion 0 != operand */
      assert(((struct arg *)NULL) != operand);
      char *tmp;
      if(!(decompress == (_Bool)0))
        suffix_xform(operand->val, &tmp);

      else
      {
        unsigned long int len;
        len=strlen(operand->val);
        if(len >= 18446744073709551611ul)
          fail("\"%s\": size_t overflow in cpn_alloc\n", operand->val);

        void *return_value_xmalloc_1;
        return_value_xmalloc_1=xmalloc(len + sizeof(char [5l]) /*5ul*/ );
        tmp = (char *)return_value_xmalloc_1;
        memcpy((void *)tmp, (const void *)operand->val, len);
        strcpy(tmp + (signed long int)len, ".bz2");
      }
      if(!(force == (_Bool)0))
      {
        return_value_unlink_4=unlink(tmp);
        if(return_value_unlink_4 == -1)
        {
          return_value___errno_location_3=__errno_location();
          if(!(*return_value___errno_location_3 == 2))
          {
            signed int *return_value___errno_location_2;
            return_value___errno_location_2=__errno_location();
            infox(*return_value___errno_location_2, "unlink(\"%s\")", tmp);
          }

        }

      }

      ospec.fd=open(tmp, 01 | 0100 | 0200, sbuf->st_mode & (unsigned int)(0400 | 0200));
      if(ospec.fd == -1)
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        warnx(*return_value___errno_location_5, "skipping \"%s\": open(\"%s\")", operand->val, tmp);
        free((void *)tmp);
      }

      else
      {
        opathn = tmp;
        ospec.sep = "\"";
        ospec.fmt = tmp;
        return 0;
      }
      break;
    }
    default:
      /* assertion 0 */
      assert(0 != 0);
  }
  return -1;
}

// output_regf_uninit
// file main.c line 863
static void output_regf_uninit(signed int outfd, struct stat *sbuf)
{
  /* assertion 0 != opathn */
  assert(((char *)NULL) != opathn);
  signed int return_value_fchown_4;
  return_value_fchown_4=fchown(outfd, sbuf->st_uid, sbuf->st_gid);
  if(return_value_fchown_4 == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    warnx(*return_value___errno_location_1, "fchown(\"%s\")", opathn);
  }

  else
  {
    if(!((3584u & sbuf->st_mode) == 0u))
      warn("\"%s\": won't restore any of setuid, setgid, sticky", opathn);

    signed int return_value_fchmod_3;
    return_value_fchmod_3=fchmod(outfd, sbuf->st_mode & (unsigned int)(0400 | 0200 | 0100 | (0400 | 0200 | 0100) >> 3 | ((0400 | 0200 | 0100) >> 3) >> 3));
    if(return_value_fchmod_3 == -1)
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      warnx(*return_value___errno_location_2, "fchmod(\"%s\")", opathn);
    }

  }
  struct timespec ts[2l];
  ts[(signed long int)0]=get_stat_atime(sbuf);
  ts[(signed long int)1]=get_stat_mtime(sbuf);
  signed int return_value_fdutimens_6;
  return_value_fdutimens_6=fdutimens(outfd, opathn, ts);
  if(return_value_fdutimens_6 == -1)
  {
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    warnx(*return_value___errno_location_5, "fdutimens(\"%s\")", opathn);
  }

  signed int return_value_close_8;
  return_value_close_8=close(outfd);
  if(return_value_close_8 == -1)
  {
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    failx(*return_value___errno_location_7, "close(\"%s\")", opathn);
  }

  free((void *)opathn);
  opathn = ((char *)NULL);
}

// package_merge
// file encode.c line 654
static void package_merge(unsigned short int (*tree)[21l], unsigned int * restrict count, const unsigned long int * restrict leaf_weight, unsigned long int as)
{
  unsigned long int pkg_weight[21l];
  unsigned long int prev_weight[21l];
  unsigned long int curr_weight[21l];
  unsigned long int width;
  unsigned long int next_depth;
  unsigned long int depth;
  pkg_weight[(signed long int)0] = (unsigned long int)-1;
  depth = (unsigned long int)1;
  unsigned long int tmp_if_expr_1;
  for( ; !(depth >= 21ul); depth = depth + 1ul)
  {
    tree[(signed long int)depth][(signed long int)0] = (unsigned short int)2;
    if(!((4278190080ul & leaf_weight[(signed long int)as]) >= (4278190080ul & leaf_weight[-1l + (signed long int)as])))
      tmp_if_expr_1 = leaf_weight[(signed long int)(as - (unsigned long int)1)] & (unsigned long int)0xFF000000;

    else
      tmp_if_expr_1 = leaf_weight[(signed long int)as] & (unsigned long int)0xFF000000;
    pkg_weight[(signed long int)depth] = (leaf_weight[(signed long int)as] + leaf_weight[(signed long int)(as - (unsigned long int)1)] & ~((unsigned long int)0xFFFFFFFF)) + tmp_if_expr_1 + (unsigned long int)0x01000000;
    prev_weight[(signed long int)depth] = leaf_weight[(signed long int)(as - (unsigned long int)1)];
    curr_weight[(signed long int)depth] = leaf_weight[(signed long int)(as - (unsigned long int)2)];
  }
  width = (unsigned long int)2;
  unsigned long int tmp_if_expr_2;
  unsigned long int tmp_post_3;
  unsigned long int tmp_if_expr_4;
  for( ; !(width >= as); width = width + 1ul)
  {
    count[(signed long int)0] = (unsigned int)20;
    depth = (unsigned long int)20;
    next_depth = (unsigned long int)1;
    while((_Bool)1)
    {
      if(curr_weight[(signed long int)depth] >= pkg_weight[-1l + (signed long int)depth])
      {
        if(!(depth == 1ul))
        {
          memcpy((void *)&tree[(signed long int)depth][(signed long int)1], (const void *)&tree[(signed long int)(depth - (unsigned long int)1)][(signed long int)0], (unsigned long int)20 * sizeof(unsigned short int) /*2ul*/ );
          if(!((4278190080ul & prev_weight[(signed long int)depth]) >= (4278190080ul & pkg_weight[-1l + (signed long int)depth])))
            tmp_if_expr_2 = pkg_weight[(signed long int)(depth - (unsigned long int)1)] & (unsigned long int)0xFF000000;

          else
            tmp_if_expr_2 = prev_weight[(signed long int)depth] & (unsigned long int)0xFF000000;
          pkg_weight[(signed long int)depth] = (prev_weight[(signed long int)depth] + pkg_weight[(signed long int)(depth - (unsigned long int)1)] & ~((unsigned long int)0xFFFFFFFF)) + tmp_if_expr_2 + (unsigned long int)0x01000000;
          prev_weight[(signed long int)depth] = pkg_weight[(signed long int)(depth - (unsigned long int)1)];
          depth = depth - 1ul;
          tmp_post_3 = next_depth;
          next_depth = next_depth + 1ul;
          count[(signed long int)tmp_post_3] = (unsigned int)depth;
          goto __CPROVER_DUMP_L14;
        }

      }

      else
      {
        tree[(signed long int)depth][(signed long int)0] = tree[(signed long int)depth][(signed long int)0] + 1;
        if(!((4278190080ul & prev_weight[(signed long int)depth]) >= (4278190080ul & curr_weight[(signed long int)depth])))
          tmp_if_expr_4 = curr_weight[(signed long int)depth] & (unsigned long int)0xFF000000;

        else
          tmp_if_expr_4 = prev_weight[(signed long int)depth] & (unsigned long int)0xFF000000;
        pkg_weight[(signed long int)depth] = (prev_weight[(signed long int)depth] + curr_weight[(signed long int)depth] & ~((unsigned long int)0xFFFFFFFF)) + tmp_if_expr_4 + (unsigned long int)0x01000000;
        prev_weight[(signed long int)depth] = curr_weight[(signed long int)depth];
        curr_weight[(signed long int)depth] = leaf_weight[(signed long int)(as - (unsigned long int)tree[(signed long int)depth][(signed long int)0])];
      }
      if(next_depth == 0ul)
        break;

      next_depth = next_depth - 1ul;
      depth = (unsigned long int)count[(signed long int)next_depth];

    __CPROVER_DUMP_L14:
      ;
    }
  }
}

// parse
// file parse.c line 147
signed int parse(struct parser_state * restrict ps, struct header * restrict hd, struct bitstream_0 *bs, unsigned int *garbage)
{
  /* assertion ps->state != ACCEPT */
  assert(ps->state != (signed int)ACCEPT);
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_2;
  unsigned int return_value_ntohl_1;
  do
  {
    if(bs->live >= 16u)
      tmp_if_expr_3 = 0;

    else
    {
      if(bs->data == bs->limit)
        tmp_if_expr_2 = bs->eof != (_Bool)0 ? 2 : 1;

      else
      {
        return_value_ntohl_1=ntohl(*bs->data);
        bs->buff = bs->buff | (unsigned long int)return_value_ntohl_1 << 32u - bs->live;
        bs->data = bs->data + 1l;
        bs->live = bs->live + 32u;
        tmp_if_expr_2 = 0;
      }
      tmp_if_expr_3 = tmp_if_expr_2;
    }
    if(!(tmp_if_expr_3 == 0))
      break;

    unsigned int word = (unsigned int)(bs->buff >> 64u - (unsigned int)16);
    bs->buff = bs->buff << 16;
    bs->live = bs->live - (unsigned int)16;
    switch(ps->state)
    {
      case 0:
      {
        if(!(word == 0x425Au))
        {
          hd->bs100k = -1;
          hd->crc = (unsigned int)0;
          ps->state = (signed int)ACCEPT;
          *garbage = (unsigned int)16;
          return 2;
        }

        ps->state = 1;
        break;
      }
      case 1:
      {
        if(word >= 26682u || !(word >= 26673u))
        {
          hd->bs100k = -1;
          hd->crc = (unsigned int)0;
          ps->state = (signed int)ACCEPT;
          *garbage = (unsigned int)32;
          return 2;
        }

        ps->bs100k = (signed int)(word & 15u);
        ps->state = 2;
        break;
      }
      case 2:
      {
        if(word == 0x1772u)
        {
          ps->state = 7;
          break;
        }

        if(!(word == 0x3141u))
          return 4;

        ps->state = 3;
        break;
      }
      case 3:
      {
        if(!(word == 0x5926u))
          return 4;

        ps->state = 4;
        break;
      }
      case 4:
      {
        if(!(word == 0x5359u))
          return 4;

        ps->state = 5;
        break;
      }
      case 5:
      {
        ps->stored_crc = word;
        ps->state = 6;
        break;
      }
      case 6:
      {
        hd->crc = ps->stored_crc << 16 | word;
        hd->bs100k = ps->bs100k;
        ps->computed_crc = ps->computed_crc << 1 ^ ps->computed_crc >> 31 ^ hd->crc;
        ps->state = 2;
        return 0;
      }
      case 7:
      {
        if(!(word == 0x4538u))
          return 4;

        ps->state = 8;
        break;
      }
      case 8:
      {
        if(!(word == 0x5090u))
          return 4;

        ps->state = 9;
        break;
      }
      case 9:
      {
        ps->stored_crc = word;
        ps->state = 10;
        break;
      }
      case 10:
      {
        ps->stored_crc = ps->stored_crc << 16 | word;
        if(!(ps->stored_crc == ps->computed_crc))
          return 16;

        ps->computed_crc = 0u;
        bs->buff = bs->buff << bs->live % 8u;
        bs->live = bs->live - bs->live % 8u;
        ps->state = 0;
        break;
      }
      default:
        /* assertion 0 */
        assert(0 != 0);
    }
  }
  while((_Bool)1);
  signed int tmp_if_expr_6;
  signed int tmp_if_expr_5;
  unsigned int return_value_ntohl_4;
  if(bs->live >= 16u)
    tmp_if_expr_6 = 0;

  else
  {
    if(bs->data == bs->limit)
      tmp_if_expr_5 = bs->eof != (_Bool)0 ? 2 : 1;

    else
    {
      return_value_ntohl_4=ntohl(*bs->data);
      bs->buff = bs->buff | (unsigned long int)return_value_ntohl_4 << 32u - bs->live;
      bs->data = bs->data + 1l;
      bs->live = bs->live + 32u;
      tmp_if_expr_5 = 0;
    }
    tmp_if_expr_6 = tmp_if_expr_5;
  }
  if(!(tmp_if_expr_6 == 2))
    return 1;

  else
    if(ps->state == 0)
    {
      ps->state = (signed int)ACCEPT;
      *garbage = (unsigned int)0;
      return 2;
    }

    else
      if(ps->state == 1)
      {
        ps->state = (signed int)ACCEPT;
        *garbage = (unsigned int)16;
        return 2;
      }

      else
        return 19;
}

// parser_init
// file decode.h line 71
void parser_init(struct parser_state *ps, signed int my_bs100k)
{
  ps->state = 2;
  ps->bs100k = my_bs100k;
  ps->computed_crc = 0u;
}

// primary_thread
// file process.c line 500
static void primary_thread(void)
{
  unsigned int i;
  thread_id = (unsigned int)0;
  eof = (_Bool)0;
  in_slots = total_in_slots;
  out_slots = total_out_slots;
  work_units = num_worker;
  process->init();
  select_task();
  init_io();
  i = 1u;
  if(!(i >= num_worker))
  {
    worker_thread[(signed long int)i]=xcreate(worker_thread_proc);
    i = i + 1u;
  }

  worker_thread_proc();
  i = 1u;
  signed int return_value_pthread_join_1;
  if(!(i >= num_worker))
  {
    return_value_pthread_join_1=pthread_join(worker_thread[(signed long int)i], (void **)(void *)0);
    if(!(return_value_pthread_join_1 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
    i = i + 1u;
  }

  uninit_io();
  process->uninit();
  /* assertion eof */
  assert(eof != (_Bool)0);
  /* assertion in_slots == total_in_slots */
  assert(in_slots == total_in_slots);
  /* assertion out_slots == total_out_slots */
  assert(out_slots == total_out_slots);
  /* assertion work_units == num_worker */
  assert(work_units == num_worker);
  xraise(12);
}

// printf_fetchargs
// file printf-args.c line 36
extern signed int printf_fetchargs(__builtin_va_list args, struct anonymous_1 *a)
{
  unsigned long int i;
  struct anonymous_2 *ap;
  i = (unsigned long int)0;
  ap = &a->arg[(signed long int)0];
  signed int return_value_gcc_builtin_va_arg_1;
  signed int return_value_gcc_builtin_va_arg_2;
  signed int return_value_gcc_builtin_va_arg_3;
  signed int return_value_gcc_builtin_va_arg_4;
  unsigned int return_value_gcc_builtin_va_arg_5;
  for( ; !(i >= a->count); ap = ap + 1l)
  {
    switch((signed int)ap->type)
    {
      case TYPE_SCHAR:
      {
        return_value_gcc_builtin_va_arg_1=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_1));
        ap->a.a_schar = (signed char)return_value_gcc_builtin_va_arg_1;
        break;
      }
      case TYPE_UCHAR:
      {
        return_value_gcc_builtin_va_arg_2=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_2));
        ap->a.a_uchar = (unsigned char)return_value_gcc_builtin_va_arg_2;
        break;
      }
      case TYPE_SHORT:
      {
        return_value_gcc_builtin_va_arg_3=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_3));
        ap->a.a_short = (signed short int)return_value_gcc_builtin_va_arg_3;
        break;
      }
      case TYPE_USHORT:
      {
        return_value_gcc_builtin_va_arg_4=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_4));
        ap->a.a_ushort = (unsigned short int)return_value_gcc_builtin_va_arg_4;
        break;
      }
      case TYPE_INT:
      {
        ap->a.a_int=va_arg(args, __typeof__(ap->a.a_int));
        break;
      }
      case TYPE_UINT:
      {
        ap->a.a_uint=va_arg(args, __typeof__(ap->a.a_uint));
        break;
      }
      case TYPE_LONGINT:
      {
        ap->a.a_longint=va_arg(args, __typeof__(ap->a.a_longint));
        break;
      }
      case TYPE_ULONGINT:
      {
        ap->a.a_ulongint=va_arg(args, __typeof__(ap->a.a_ulongint));
        break;
      }
      case TYPE_LONGLONGINT:
      {
        ap->a.a_longlongint=va_arg(args, __typeof__(ap->a.a_longlongint));
        break;
      }
      case TYPE_ULONGLONGINT:
      {
        ap->a.a_ulonglongint=va_arg(args, __typeof__(ap->a.a_ulonglongint));
        break;
      }
      case TYPE_DOUBLE:
      {
        ap->a.a_double=va_arg(args, __typeof__(ap->a.a_double));
        break;
      }
      case TYPE_LONGDOUBLE:
      {
        ap->a.a_longdouble=va_arg(args, __typeof__(ap->a.a_longdouble));
        break;
      }
      case TYPE_CHAR:
      {
        ap->a.a_char=va_arg(args, __typeof__(ap->a.a_char));
        break;
      }
      case TYPE_WIDE_CHAR:
      {
        return_value_gcc_builtin_va_arg_5=va_arg(args, __typeof__(return_value_gcc_builtin_va_arg_5));
        ap->a.a_wide_char = return_value_gcc_builtin_va_arg_5;
        break;
      }
      case TYPE_STRING:
      {
        ap->a.a_string=va_arg(args, __typeof__(ap->a.a_string));
        if(ap->a.a_string == ((const char *)NULL))
          ap->a.a_string = "(NULL)";

        break;
      }
      case TYPE_WIDE_STRING:
      {
        ap->a.a_wide_string=va_arg(args, __typeof__(ap->a.a_wide_string));
        static const signed int wide_null_string[7l] = { (signed int)40, (signed int)78, (signed int)85, (signed int)76, (signed int)76, (signed int)41, (signed int)0 };
        if(ap->a.a_wide_string == ((const signed int *)NULL))
          ap->a.a_wide_string = wide_null_string;

        break;
      }
      case TYPE_POINTER:
      {
        ap->a.a_pointer=va_arg(args, __typeof__(ap->a.a_pointer));
        break;
      }
      case TYPE_COUNT_SCHAR_POINTER:
      {
        ap->a.a_count_schar_pointer=va_arg(args, __typeof__(ap->a.a_count_schar_pointer));
        break;
      }
      case TYPE_COUNT_SHORT_POINTER:
      {
        ap->a.a_count_short_pointer=va_arg(args, __typeof__(ap->a.a_count_short_pointer));
        break;
      }
      case TYPE_COUNT_INT_POINTER:
      {
        ap->a.a_count_int_pointer=va_arg(args, __typeof__(ap->a.a_count_int_pointer));
        break;
      }
      case TYPE_COUNT_LONGINT_POINTER:
      {
        ap->a.a_count_longint_pointer=va_arg(args, __typeof__(ap->a.a_count_longint_pointer));
        break;
      }
      case TYPE_COUNT_LONGLONGINT_POINTER:
      {
        ap->a.a_count_longlongint_pointer=va_arg(args, __typeof__(ap->a.a_count_longlongint_pointer));
        break;
      }
      default:
        return -1;
    }
    i = i + 1ul;
  }
  return 0;
}

// printf_frexp
// file printf-frexp.c line 67
extern double printf_frexp(double x, signed int *expptr)
{
  signed int exponent;
  x=frexp(x, &exponent);
  x = x + x;
  exponent = exponent - 1;
  if(!(exponent >= -1022))
  {
    x=ldexp(x, exponent - (-1021 - 1));
    exponent = -1021 - 1;
  }

  *expptr = exponent;
  return x;
}

// printf_frexpl
// file printf-frexp.c line 67
extern long double printf_frexpl(long double x, signed int *expptr)
{
  signed int exponent;
  unsigned short int oldcw;
  unsigned short int tmp_statement_expression_1;
  unsigned short int _cw;
  asm("fnstcw %0" : "=m"(*(&_cw)) :  : );
  tmp_statement_expression_1 = _cw;
  oldcw = tmp_statement_expression_1;
  unsigned short int _ncw = (unsigned short int)((signed int)oldcw & ~0x0300 | 0x300);
  asm("fldcw %0" :  : "m"(*(&_ncw)) : );
  x=frexpl(x, &exponent);
  x = x + x;
  exponent = exponent - 1;
  if(!(exponent >= -16382))
  {
    x=ldexpl(x, exponent - (-16381 - 1));
    exponent = -16381 - 1;
  }

  unsigned short int printf_frexpl__1__4___ncw = oldcw;
  asm("fldcw %0" :  : "m"(*(&printf_frexpl__1__4___ncw)) : );
  *expptr = exponent;
  return x;
}

// printf_parse
// file printf-parse.c line 83
extern signed int printf_parse(const char *format, struct anonymous_10 *d, struct anonymous_1 *a)
{
  const char *cp = format;
  unsigned long int arg_posn = (unsigned long int)0;
  unsigned long int d_allocated;
  unsigned long int a_allocated;
  unsigned long int max_width_length = (unsigned long int)0;
  unsigned long int max_precision_length = (unsigned long int)0;
  d->count = (unsigned long int)0;
  d_allocated = (unsigned long int)7;
  d->dir = d->direct_alloc_dir;
  a->count = (unsigned long int)0;
  a_allocated = (unsigned long int)7;
  a->arg = a->direct_alloc_arg;
  const char *tmp_post_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  unsigned long int tmp_post_6;
  void *tmp_if_expr_9;
  void *return_value_realloc_7;
  void *return_value_malloc_8;
  unsigned long int tmp_post_10;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  unsigned long int tmp_post_14;
  void *tmp_if_expr_17;
  void *return_value_realloc_15;
  void *return_value_malloc_16;
  unsigned long int tmp_post_18;
  _Bool tmp_if_expr_19;
  _Bool tmp_if_expr_20;
  const char *tmp_post_21;
  unsigned long int tmp_post_22;
  void *tmp_if_expr_25;
  void *return_value_realloc_23;
  void *return_value_malloc_24;
  unsigned long int tmp_post_26;
  void *tmp_if_expr_29;
  void *return_value_realloc_27;
  void *return_value_malloc_28;
  while(!((signed int)*cp == 0))
  {
    char c;
    tmp_post_1 = cp;
    cp = cp + 1l;
    c = *tmp_post_1;
    if((signed int)c == 37)
    {
      unsigned long int arg_index = ~((unsigned long int)0);
      struct anonymous_3 *dp = &d->dir[(signed long int)d->count];
      dp->dir_start = cp - (signed long int)1;
      dp->flags = 0;
      dp->width_start = (const char *)(void *)0;
      dp->width_end = (const char *)(void *)0;
      dp->width_arg_index = ~((unsigned long int)0);
      dp->precision_start = (const char *)(void *)0;
      dp->precision_end = (const char *)(void *)0;
      dp->precision_arg_index = ~((unsigned long int)0);
      dp->arg_index = ~((unsigned long int)0);
      if((signed int)*cp >= 48)
      {
        if(!((signed int)*cp >= 58))
        {
          const char *printf_parse__1__1__1__1__np = cp;
          do
          {
            if((signed int)*printf_parse__1__1__1__1__np >= 48)
              tmp_if_expr_2 = (signed int)*printf_parse__1__1__1__1__np <= 57 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_2 = (_Bool)0;
            if(!tmp_if_expr_2)
              break;

            printf_parse__1__1__1__1__np = printf_parse__1__1__1__1__np + 1l;
          }
          while((_Bool)1);
          if((signed int)*printf_parse__1__1__1__1__np == 36)
          {
            unsigned long int printf_parse__1__1__1__1__2__n = (unsigned long int)0;
            printf_parse__1__1__1__1__np = cp;
            do
            {
              if((signed int)*printf_parse__1__1__1__1__np >= 48)
                tmp_if_expr_3 = (signed int)*printf_parse__1__1__1__1__np <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_3 = (_Bool)0;
              if(!tmp_if_expr_3)
                break;

              printf_parse__1__1__1__1__2__n=xsum(printf_parse__1__1__1__1__2__n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)printf_parse__1__1__1__1__2__n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*printf_parse__1__1__1__1__np - 48));
              printf_parse__1__1__1__1__np = printf_parse__1__1__1__1__np + 1l;
            }
            while((_Bool)1);
            if(printf_parse__1__1__1__1__2__n == 0ul)
              goto error;

            if(printf_parse__1__1__1__1__2__n == 18446744073709551615UL)
              goto error;

            arg_index = printf_parse__1__1__1__1__2__n - (unsigned long int)1;
            cp = printf_parse__1__1__1__1__np + (signed long int)1;
          }

        }

      }

      while((_Bool)1)
        if((signed int)*cp == 39)
        {
          dp->flags = dp->flags | 1;
          cp = cp + 1l;
        }

        else
          if((signed int)*cp == 45)
          {
            dp->flags = dp->flags | 2;
            cp = cp + 1l;
          }

          else
            if((signed int)*cp == 43)
            {
              dp->flags = dp->flags | 4;
              cp = cp + 1l;
            }

            else
              if((signed int)*cp == 32)
              {
                dp->flags = dp->flags | 8;
                cp = cp + 1l;
              }

              else
                if((signed int)*cp == 35)
                {
                  dp->flags = dp->flags | 16;
                  cp = cp + 1l;
                }

                else
                  if((signed int)*cp == 48)
                  {
                    dp->flags = dp->flags | 32;
                    cp = cp + 1l;
                  }

                  else
                    if((signed int)*cp == 73)
                    {
                      dp->flags = dp->flags | 64;
                      cp = cp + 1l;
                    }

                    else
                      goto __CPROVER_DUMP_L20;

    __CPROVER_DUMP_L20:
      ;
      if((signed int)*cp == 42)
      {
        dp->width_start = cp;
        cp = cp + 1l;
        dp->width_end = cp;
        if(!(max_width_length >= 1ul))
          max_width_length = (unsigned long int)1;

        if((signed int)*cp >= 48)
        {
          if(!((signed int)*cp >= 58))
          {
            const char *printf_parse__1__1__1__3__1__np = cp;
            do
            {
              if((signed int)*printf_parse__1__1__1__3__1__np >= 48)
                tmp_if_expr_4 = (signed int)*printf_parse__1__1__1__3__1__np <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_4 = (_Bool)0;
              if(!tmp_if_expr_4)
                break;

              printf_parse__1__1__1__3__1__np = printf_parse__1__1__1__3__1__np + 1l;
            }
            while((_Bool)1);
            if((signed int)*printf_parse__1__1__1__3__1__np == 36)
            {
              unsigned long int printf_parse__1__1__1__3__1__2__n = (unsigned long int)0;
              printf_parse__1__1__1__3__1__np = cp;
              do
              {
                if((signed int)*printf_parse__1__1__1__3__1__np >= 48)
                  tmp_if_expr_5 = (signed int)*printf_parse__1__1__1__3__1__np <= 57 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_5 = (_Bool)0;
                if(!tmp_if_expr_5)
                  break;

                printf_parse__1__1__1__3__1__2__n=xsum(printf_parse__1__1__1__3__1__2__n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)printf_parse__1__1__1__3__1__2__n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*printf_parse__1__1__1__3__1__np - 48));
                printf_parse__1__1__1__3__1__np = printf_parse__1__1__1__3__1__np + 1l;
              }
              while((_Bool)1);
              if(printf_parse__1__1__1__3__1__2__n == 0ul)
                goto error;

              if(printf_parse__1__1__1__3__1__2__n == 18446744073709551615UL)
                goto error;

              dp->width_arg_index = printf_parse__1__1__1__3__1__2__n - (unsigned long int)1;
              cp = printf_parse__1__1__1__3__1__np + (signed long int)1;
            }

          }

        }

        if(dp->width_arg_index == 18446744073709551615ul)
        {
          tmp_post_6 = arg_posn;
          arg_posn = arg_posn + 1ul;
          dp->width_arg_index = tmp_post_6;
          if(dp->width_arg_index == 18446744073709551615ul)
            goto error;

        }

        unsigned long int printf_parse__1__1__1__3__3__n = dp->width_arg_index;
        if(printf_parse__1__1__1__3__3__n >= a_allocated)
        {
          unsigned long int memory_size;
          struct anonymous_2 *memory;
          a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
          if(printf_parse__1__1__1__3__3__n >= a_allocated)
            a_allocated=xsum(printf_parse__1__1__1__3__3__n, (unsigned long int)1);

          memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous_2) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous_2) /*32ul*/  : 18446744073709551615UL;
          if(memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(!(a->arg == a->direct_alloc_arg))
          {
            return_value_realloc_7=realloc((void *)a->arg, memory_size);
            tmp_if_expr_9 = return_value_realloc_7;
          }

          else
          {
            return_value_malloc_8=malloc(memory_size);
            tmp_if_expr_9 = return_value_malloc_8;
          }
          memory = (struct anonymous_2 *)tmp_if_expr_9;
          if(memory == ((struct anonymous_2 *)NULL))
            goto out_of_memory;

          if(a->arg == a->direct_alloc_arg)
            memcpy((void *)memory, (const void *)a->arg, a->count * sizeof(struct anonymous_2) /*32ul*/ );

          a->arg = memory;
        }

        for( ; printf_parse__1__1__1__3__3__n >= a->count; (a->arg + (signed long int)tmp_post_10)->type = (enum anonymous_12)TYPE_NONE)
        {
          tmp_post_10 = a->count;
          a->count = a->count + 1ul;
        }
        if((signed int)(a->arg + (signed long int)printf_parse__1__1__1__3__3__n)->type == TYPE_NONE)
          (a->arg + (signed long int)printf_parse__1__1__1__3__3__n)->type = (enum anonymous_12)TYPE_INT;

        else
          if(!((signed int)(a->arg + (signed long int)printf_parse__1__1__1__3__3__n)->type == TYPE_INT))
            goto error;

      }

      else
        if((signed int)*cp >= 48)
        {
          if(!((signed int)*cp >= 58))
          {
            unsigned long int width_length;
            dp->width_start = cp;
            do
            {
              if((signed int)*cp >= 48)
                tmp_if_expr_11 = (signed int)*cp <= 57 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_11 = (_Bool)0;
              if(!tmp_if_expr_11)
                break;

              cp = cp + 1l;
            }
            while((_Bool)1);
            dp->width_end = cp;
            width_length = (unsigned long int)(dp->width_end - dp->width_start);
            if(!(max_width_length >= width_length))
              max_width_length = width_length;

          }

        }

      if((signed int)*cp == 46)
      {
        cp = cp + 1l;
        if((signed int)*cp == 42)
        {
          dp->precision_start = cp - (signed long int)1;
          cp = cp + 1l;
          dp->precision_end = cp;
          if(!(max_precision_length >= 2ul))
            max_precision_length = (unsigned long int)2;

          if((signed int)*cp >= 48)
          {
            if(!((signed int)*cp >= 58))
            {
              const char *np = cp;
              do
              {
                if((signed int)*np >= 48)
                  tmp_if_expr_12 = (signed int)*np <= 57 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_12 = (_Bool)0;
                if(!tmp_if_expr_12)
                  break;

                np = np + 1l;
              }
              while((_Bool)1);
              if((signed int)*np == 36)
              {
                unsigned long int n = (unsigned long int)0;
                np = cp;
                do
                {
                  if((signed int)*np >= 48)
                    tmp_if_expr_13 = (signed int)*np <= 57 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_13 = (_Bool)0;
                  if(!tmp_if_expr_13)
                    break;

                  n=xsum(n <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)n * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*np - 48));
                  np = np + 1l;
                }
                while((_Bool)1);
                if(n == 0ul)
                  goto error;

                if(n == 18446744073709551615UL)
                  goto error;

                dp->precision_arg_index = n - (unsigned long int)1;
                cp = np + (signed long int)1;
              }

            }

          }

          if(dp->precision_arg_index == 18446744073709551615ul)
          {
            tmp_post_14 = arg_posn;
            arg_posn = arg_posn + 1ul;
            dp->precision_arg_index = tmp_post_14;
            if(dp->precision_arg_index == 18446744073709551615ul)
              goto error;

          }

          unsigned long int printf_parse__1__1__1__5__1__3__n = dp->precision_arg_index;
          if(printf_parse__1__1__1__5__1__3__n >= a_allocated)
          {
            unsigned long int printf_parse__1__1__1__5__1__3__1__memory_size;
            struct anonymous_2 *printf_parse__1__1__1__5__1__3__1__memory;
            a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
            if(printf_parse__1__1__1__5__1__3__n >= a_allocated)
              a_allocated=xsum(printf_parse__1__1__1__5__1__3__n, (unsigned long int)1);

            printf_parse__1__1__1__5__1__3__1__memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous_2) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous_2) /*32ul*/  : 18446744073709551615UL;
            if(printf_parse__1__1__1__5__1__3__1__memory_size == 18446744073709551615UL)
              goto out_of_memory;

            if(!(a->arg == a->direct_alloc_arg))
            {
              return_value_realloc_15=realloc((void *)a->arg, printf_parse__1__1__1__5__1__3__1__memory_size);
              tmp_if_expr_17 = return_value_realloc_15;
            }

            else
            {
              return_value_malloc_16=malloc(printf_parse__1__1__1__5__1__3__1__memory_size);
              tmp_if_expr_17 = return_value_malloc_16;
            }
            printf_parse__1__1__1__5__1__3__1__memory = (struct anonymous_2 *)tmp_if_expr_17;
            if(printf_parse__1__1__1__5__1__3__1__memory == ((struct anonymous_2 *)NULL))
              goto out_of_memory;

            if(a->arg == a->direct_alloc_arg)
              memcpy((void *)printf_parse__1__1__1__5__1__3__1__memory, (const void *)a->arg, a->count * sizeof(struct anonymous_2) /*32ul*/ );

            a->arg = printf_parse__1__1__1__5__1__3__1__memory;
          }

          for( ; printf_parse__1__1__1__5__1__3__n >= a->count; (a->arg + (signed long int)tmp_post_18)->type = (enum anonymous_12)TYPE_NONE)
          {
            tmp_post_18 = a->count;
            a->count = a->count + 1ul;
          }
          if((signed int)(a->arg + (signed long int)printf_parse__1__1__1__5__1__3__n)->type == TYPE_NONE)
            (a->arg + (signed long int)printf_parse__1__1__1__5__1__3__n)->type = (enum anonymous_12)TYPE_INT;

          else
            if(!((signed int)(a->arg + (signed long int)printf_parse__1__1__1__5__1__3__n)->type == TYPE_INT))
              goto error;

        }

        else
        {
          unsigned long int precision_length;
          dp->precision_start = cp - (signed long int)1;
          do
          {
            if((signed int)*cp >= 48)
              tmp_if_expr_19 = (signed int)*cp <= 57 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_19 = (_Bool)0;
            if(!tmp_if_expr_19)
              break;

            cp = cp + 1l;
          }
          while((_Bool)1);
          dp->precision_end = cp;
          precision_length = (unsigned long int)(dp->precision_end - dp->precision_start);
          if(!(max_precision_length >= precision_length))
            max_precision_length = precision_length;

        }
      }

      enum anonymous_12 type;
      signed int flags = 0;
      while((_Bool)1)
        if((signed int)*cp == 104)
        {
          flags = flags | 1 << (flags & 1);
          cp = cp + 1l;
        }

        else
          if((signed int)*cp == 76)
          {
            flags = flags | 4;
            cp = cp + 1l;
          }

          else
            if((signed int)*cp == 108)
            {
              flags = flags + 8;
              cp = cp + 1l;
            }

            else
              if((signed int)*cp == 106)
              {
                flags = flags + 8;
                cp = cp + 1l;
              }

              else
              {
                if((signed int)*cp == 122)
                  tmp_if_expr_20 = (_Bool)1;

                else
                  tmp_if_expr_20 = (signed int)*cp == 90 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_20)
                {
                  flags = flags + 8;
                  cp = cp + 1l;
                }

                else
                  if((signed int)*cp == 116)
                  {
                    flags = flags + 8;
                    cp = cp + 1l;
                  }

                  else
                    goto __CPROVER_DUMP_L91;
              }

    __CPROVER_DUMP_L91:
      ;
      tmp_post_21 = cp;
      cp = cp + 1l;
      c = *tmp_post_21;
      switch((signed int)c)
      {
        case 100:

        case 105:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous_12)TYPE_LONGLONGINT;

          else
            if(flags >= 8)
              type = (enum anonymous_12)TYPE_LONGINT;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous_12)TYPE_SCHAR;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous_12)TYPE_SHORT;

                else
                  type = (enum anonymous_12)TYPE_INT;
          break;
        }
        case 111:

        case 117:

        case 120:

        case 88:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous_12)TYPE_ULONGLONGINT;

          else
            if(flags >= 8)
              type = (enum anonymous_12)TYPE_ULONGINT;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous_12)TYPE_UCHAR;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous_12)TYPE_USHORT;

                else
                  type = (enum anonymous_12)TYPE_UINT;
          break;
        }
        case 102:

        case 70:

        case 101:

        case 69:

        case 103:

        case 71:

        case 97:

        case 65:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous_12)TYPE_LONGDOUBLE;

          else
            type = (enum anonymous_12)TYPE_DOUBLE;
          break;
        }
        case 99:
        {
          if(flags >= 8)
            type = (enum anonymous_12)TYPE_WIDE_CHAR;

          else
            type = (enum anonymous_12)TYPE_CHAR;
          break;
        }
        case 67:
        {
          type = (enum anonymous_12)TYPE_WIDE_CHAR;
          c = (char)99;
          break;
        }
        case 115:
        {
          if(flags >= 8)
            type = (enum anonymous_12)TYPE_WIDE_STRING;

          else
            type = (enum anonymous_12)TYPE_STRING;
          break;
        }
        case 83:
        {
          type = (enum anonymous_12)TYPE_WIDE_STRING;
          c = (char)115;
          break;
        }
        case 112:
        {
          type = (enum anonymous_12)TYPE_POINTER;
          break;
        }
        case 110:
        {
          if(flags >= 16 || !((4 & flags) == 0))
            type = (enum anonymous_12)TYPE_COUNT_LONGLONGINT_POINTER;

          else
            if(flags >= 8)
              type = (enum anonymous_12)TYPE_COUNT_LONGINT_POINTER;

            else
              if(!((2 & flags) == 0))
                type = (enum anonymous_12)TYPE_COUNT_SCHAR_POINTER;

              else
                if(!((1 & flags) == 0))
                  type = (enum anonymous_12)TYPE_COUNT_SHORT_POINTER;

                else
                  type = (enum anonymous_12)TYPE_COUNT_INT_POINTER;
          break;
        }
        case 37:
        {
          type = (enum anonymous_12)TYPE_NONE;
          break;
        }
        default:
          goto error;
      }
      if(!((signed int)type == TYPE_NONE))
      {
        dp->arg_index = arg_index;
        if(dp->arg_index == 18446744073709551615ul)
        {
          tmp_post_22 = arg_posn;
          arg_posn = arg_posn + 1ul;
          dp->arg_index = tmp_post_22;
          if(dp->arg_index == 18446744073709551615ul)
            goto error;

        }

        unsigned long int printf_parse__1__1__1__6__2__2__n = dp->arg_index;
        if(printf_parse__1__1__1__6__2__2__n >= a_allocated)
        {
          unsigned long int printf_parse__1__1__1__6__2__2__1__memory_size;
          struct anonymous_2 *printf_parse__1__1__1__6__2__2__1__memory;
          a_allocated = a_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)a_allocated * (unsigned long int)2 : 18446744073709551615UL;
          if(printf_parse__1__1__1__6__2__2__n >= a_allocated)
            a_allocated=xsum(printf_parse__1__1__1__6__2__2__n, (unsigned long int)1);

          printf_parse__1__1__1__6__2__2__1__memory_size = a_allocated <= 18446744073709551615UL / sizeof(struct anonymous_2) /*32ul*/  ? (unsigned long int)a_allocated * sizeof(struct anonymous_2) /*32ul*/  : 18446744073709551615UL;
          if(printf_parse__1__1__1__6__2__2__1__memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(!(a->arg == a->direct_alloc_arg))
          {
            return_value_realloc_23=realloc((void *)a->arg, printf_parse__1__1__1__6__2__2__1__memory_size);
            tmp_if_expr_25 = return_value_realloc_23;
          }

          else
          {
            return_value_malloc_24=malloc(printf_parse__1__1__1__6__2__2__1__memory_size);
            tmp_if_expr_25 = return_value_malloc_24;
          }
          printf_parse__1__1__1__6__2__2__1__memory = (struct anonymous_2 *)tmp_if_expr_25;
          if(printf_parse__1__1__1__6__2__2__1__memory == ((struct anonymous_2 *)NULL))
            goto out_of_memory;

          if(a->arg == a->direct_alloc_arg)
            memcpy((void *)printf_parse__1__1__1__6__2__2__1__memory, (const void *)a->arg, a->count * sizeof(struct anonymous_2) /*32ul*/ );

          a->arg = printf_parse__1__1__1__6__2__2__1__memory;
        }

        for( ; printf_parse__1__1__1__6__2__2__n >= a->count; (a->arg + (signed long int)tmp_post_26)->type = (enum anonymous_12)TYPE_NONE)
        {
          tmp_post_26 = a->count;
          a->count = a->count + 1ul;
        }
        if((signed int)(a->arg + (signed long int)printf_parse__1__1__1__6__2__2__n)->type == TYPE_NONE)
          (a->arg + (signed long int)printf_parse__1__1__1__6__2__2__n)->type = type;

        else
          if(!((a->arg + (signed long int)printf_parse__1__1__1__6__2__2__n)->type == type))
            goto error;

      }

      dp->conversion = c;
      dp->dir_end = cp;
      d->count = d->count + 1ul;
      if(d->count >= d_allocated)
      {
        unsigned long int printf_parse__1__1__1__7__memory_size;
        struct anonymous_3 *printf_parse__1__1__1__7__memory;
        d_allocated = d_allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)d_allocated * (unsigned long int)2 : 18446744073709551615UL;
        printf_parse__1__1__1__7__memory_size = d_allocated <= 18446744073709551615UL / sizeof(struct anonymous_3) /*88ul*/  ? (unsigned long int)d_allocated * sizeof(struct anonymous_3) /*88ul*/  : 18446744073709551615UL;
        if(printf_parse__1__1__1__7__memory_size == 18446744073709551615UL)
          goto out_of_memory;

        if(!(d->dir == d->direct_alloc_dir))
        {
          return_value_realloc_27=realloc((void *)d->dir, printf_parse__1__1__1__7__memory_size);
          tmp_if_expr_29 = return_value_realloc_27;
        }

        else
        {
          return_value_malloc_28=malloc(printf_parse__1__1__1__7__memory_size);
          tmp_if_expr_29 = return_value_malloc_28;
        }
        printf_parse__1__1__1__7__memory = (struct anonymous_3 *)tmp_if_expr_29;
        if(printf_parse__1__1__1__7__memory == ((struct anonymous_3 *)NULL))
          goto out_of_memory;

        if(d->dir == d->direct_alloc_dir)
          memcpy((void *)printf_parse__1__1__1__7__memory, (const void *)d->dir, d->count * sizeof(struct anonymous_3) /*88ul*/ );

        d->dir = printf_parse__1__1__1__7__memory;
      }

    }

  }
  (d->dir + (signed long int)d->count)->dir_start = cp;
  d->max_width_length = max_width_length;
  d->max_precision_length = max_precision_length;
  return 0;

error:
  ;
  if(!(a->arg == a->direct_alloc_arg))
    free((void *)a->arg);

  if(!(d->dir == d->direct_alloc_dir))
    free((void *)d->dir);

  signed int *return_value___errno_location_30;
  return_value___errno_location_30=__errno_location();
  *return_value___errno_location_30 = 22;
  return -1;

out_of_memory:
  ;
  if(!(a->arg == a->direct_alloc_arg))
    free((void *)a->arg);

  if(!(d->dir == d->direct_alloc_dir))
    free((void *)d->dir);

  signed int *return_value___errno_location_31;
  return_value___errno_location_31=__errno_location();
  *return_value___errno_location_31 = 12;
  return -1;
}

// promote
// file signals.c line 264
static void promote(void)
{
  const signed int *sig;
  struct anonymous_11 pending;
  xempty(&pending);
  xpending(&pending);
  sig = blocked_signals;
  _Bool return_value_xmember_1;
  for( ; !(sig >= blocked_signals + 2l); sig = sig + 1l)
  {
    return_value_xmember_1=xmember(&pending, *sig);
    if(!(return_value_xmember_1 == (_Bool)0))
      xraise(*sig);

  }
}

// retrieve
// file decode.c line 519
signed int retrieve(struct decoder_state * restrict ds, struct bitstream_0 *bs)
{
  struct retriever_internal_state * restrict rs = ds->internal_state;
  unsigned int w;
  unsigned long int v;
  const unsigned int *next;
  const unsigned int *limit;
  const unsigned int *tt_limit;
  unsigned int *tt;
  v = bs->buff;
  w = bs->live;
  next = bs->data;
  limit = bs->limit;
  tt = ds->tt + (signed long int)ds->block_size;
  tt_limit = ds->tt + (signed long int)900000;
  unsigned int tmp_post_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_7;
  unsigned int tmp_post_10;
  unsigned int tmp_post_11;
  unsigned int *tmp_post_12;
  unsigned int tmp_post_15;
  unsigned int *tmp_post_16;
  _Bool tmp_if_expr_18;
  unsigned int tmp_post_17;
  unsigned int tmp_post_19;
  unsigned int *tmp_post_20;
  if(!(rs->state == 1u))
  {
    if(!(rs->state == 0u))
    {
      if(rs->state == 2u)
        goto __CPROVER_DUMP_L8;

      if(rs->state == 3u)
        goto __CPROVER_DUMP_L14;

      if(rs->state == 4u)
        goto __CPROVER_DUMP_L26;

      if(rs->state == 5u)
        goto __CPROVER_DUMP_L38;

      if(rs->state == 6u)
        goto __CPROVER_DUMP_L65;

      goto __CPROVER_DUMP_L88;
    }

    if(w >= 32u)
      goto __CPROVER_DUMP_L6;

    if(!(next == limit))
      goto __CPROVER_DUMP_L5;

    bs->buff = v;
    bs->live = w;
    bs->data = next;
    ds->block_size = (unsigned int)(tt - ds->tt);
    if(!(bs->eof == (_Bool)0))
      return 19;

    rs->state = (unsigned int)1;
    return 1;
  }

  else
    if(bs->data == bs->limit)
    {
      /* assertion bs->eof */
      assert(bs->eof != (_Bool)0);
      return 19;
    }

    else
    {
      v = bs->buff;
      w = bs->live;
      next = bs->data;
      limit = bs->limit;
      tt = ds->tt + (signed long int)ds->block_size;
      tt_limit = ds->tt + (signed long int)900000;
      /* assertion w < 32u */
      assert(w < 32u);

    __CPROVER_DUMP_L5:
      ;
      unsigned int return_value_ntohl_1;
      return_value_ntohl_1=ntohl(*next);
      w = w + 32u;
      v = v | (unsigned long int)return_value_ntohl_1 << 64u - w;
      next = next + 1l;

    __CPROVER_DUMP_L6:
      ;
      ds->rand = (_Bool)(v >> 64u - 1u);
      v = v << 1u;
      w = w - 1u;
      ds->bwt_idx = (unsigned int)(v >> 64u - 24u);
      v = v << 24u;
      w = w - 24u;
      if(!(w >= 32u))
      {
        if(next == limit)
        {
          bs->buff = v;
          bs->live = w;
          bs->data = next;
          ds->block_size = (unsigned int)(tt - ds->tt);
          if(!(bs->eof == (_Bool)0))
            return 19;

          rs->state = (unsigned int)2;
          return 1;

        __CPROVER_DUMP_L8:
          ;
          if(bs->data == bs->limit)
          {
            /* assertion bs->eof */
            assert(bs->eof != (_Bool)0);
            return 19;
          }

          v = bs->buff;
          w = bs->live;
          next = bs->data;
          limit = bs->limit;
          tt = ds->tt + (signed long int)ds->block_size;
          tt_limit = ds->tt + (signed long int)900000;
          /* assertion w < 32u */
          assert(w < 32u);
        }

        unsigned int return_value_ntohl_2;
        return_value_ntohl_2=ntohl(*next);
        w = w + 32u;
        v = v | (unsigned long int)return_value_ntohl_2 << 64u - w;
        next = next + 1l;
      }

      rs->big = (unsigned short int)(v >> 64u - 16u);
      v = v << 16u;
      w = w - 16u;
      rs->small = (unsigned short int)0;
      rs->alpha_size = 0u;
      rs->j = (unsigned int)0;

    __CPROVER_DUMP_L12:
      ;
      if(!((0x8000 & (signed int)rs->big) == 0))
      {
        rs->small = (unsigned short int)(v >> 64u - 16u);
        v = v << 16u;
        w = w - 16u;
        if(!(w >= 32u))
        {
          if(next == limit)
          {
            bs->buff = v;
            bs->live = w;
            bs->data = next;
            ds->block_size = (unsigned int)(tt - ds->tt);
            if(!(bs->eof == (_Bool)0))
              return 19;

            rs->state = (unsigned int)3;
            return 1;

          __CPROVER_DUMP_L14:
            ;
            if(bs->data == bs->limit)
            {
              /* assertion bs->eof */
              assert(bs->eof != (_Bool)0);
              return 19;
            }

            v = bs->buff;
            w = bs->live;
            next = bs->data;
            limit = bs->limit;
            tt = ds->tt + (signed long int)ds->block_size;
            tt_limit = ds->tt + (signed long int)900000;
            /* assertion w < 32u */
            assert(w < 32u);
          }

          unsigned int return_value_ntohl_3;
          return_value_ntohl_3=ntohl(*next);
          w = w + 32u;
          v = v | (unsigned long int)return_value_ntohl_3 << 64u - w;
          next = next + 1l;
        }

      }

      do
      {
        tmp_post_4 = rs->j;
        rs->j = rs->j + 1u;
        rs->imtf_slide[(signed long int)((8192u - (unsigned int)256) + rs->alpha_size)] = (unsigned char)tmp_post_4;
        rs->alpha_size = rs->alpha_size + (unsigned int)((signed int)rs->small >> 15);
        rs->small = rs->small << 1;
      }
      while(!((15u & rs->j) == 0u));
      rs->big = rs->big << 1;
      if(!(rs->j >= 256u))
        goto __CPROVER_DUMP_L12;

      if(rs->alpha_size == 0u)
        return 5;

      else
      {
        rs->alpha_size = rs->alpha_size + 2u;
        rs->num_trees = (unsigned int)(v >> 64u - 3u);
        v = v << 3u;
        w = w - 3u;
        if(!(rs->num_trees >= 2u))
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = rs->num_trees > (unsigned int)6 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
          return 6;

        else
        {
          rs->num_selectors = (unsigned int)(v >> 64u - 15u);
          v = v << 15u;
          w = w - 15u;
          if(rs->num_selectors == 0u)
            return 7;

          else
          {
            rs->j = (unsigned int)0;

          __CPROVER_DUMP_L23:
            ;
            if(!(rs->j >= rs->num_selectors))
            {
              unsigned int k = (unsigned int)table[(signed long int)(v >> 64u - 6u)];
              if(!(rs->num_trees >= k))
                return 8;

              rs->selector[(signed long int)rs->j] = (unsigned char)(k - 1u);
              v = v << k;
              w = w - k;
              if(!(w >= 32u))
              {
                if(next == limit)
                {
                  bs->buff = v;
                  bs->live = w;
                  bs->data = next;
                  ds->block_size = (unsigned int)(tt - ds->tt);
                  if(!(bs->eof == (_Bool)0))
                    return 19;

                  rs->state = (unsigned int)4;
                  return 1;

                __CPROVER_DUMP_L26:
                  ;
                  if(bs->data == bs->limit)
                  {
                    /* assertion bs->eof */
                    assert(bs->eof != (_Bool)0);
                    return 19;
                  }

                  v = bs->buff;
                  w = bs->live;
                  next = bs->data;
                  limit = bs->limit;
                  tt = ds->tt + (signed long int)ds->block_size;
                  tt_limit = ds->tt + (signed long int)900000;
                  /* assertion w < 32u */
                  assert(w < 32u);
                }

                unsigned int return_value_ntohl_6;
                return_value_ntohl_6=ntohl(*next);
                w = w + 32u;
                v = v | (unsigned long int)return_value_ntohl_6 << 64u - w;
                next = next + 1l;
              }

              rs->j = rs->j + 1u;
              goto __CPROVER_DUMP_L23;
            }

            rs->t = (unsigned int)0;

          __CPROVER_DUMP_L31:
            ;
            if(!(rs->t >= rs->num_trees))
            {
              rs->j = 0u;
              rs->code_len[(signed long int)0u] = (unsigned char)(v >> 64u - (unsigned int)5);
              v = v << 5;
              w = w - (unsigned int)5;

            __CPROVER_DUMP_L32:
              ;
              if(!(rs->j >= rs->alpha_size))
              {
                unsigned int retrieve__1__1__5__1__1__k = (unsigned int)(v >> 64u - 6u);
                rs->code_len[(signed long int)rs->j] = rs->code_len[(signed long int)rs->j] + R[(signed long int)retrieve__1__1__5__1__1__k];
                if(!((signed int)rs->code_len[(signed long int)rs->j] >= 1))
                  tmp_if_expr_7 = (_Bool)1;

                else
                  tmp_if_expr_7 = (signed int)rs->code_len[(signed long int)rs->j] > 3 + 20 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_7)
                  return 9;

                rs->code_len[(signed long int)rs->j] = rs->code_len[(signed long int)rs->j] - (unsigned char)3;
                retrieve__1__1__5__1__1__k = (unsigned int)L[(signed long int)retrieve__1__1__5__1__1__k];
                if(!(retrieve__1__1__5__1__1__k == 6u))
                {
                  rs->j = rs->j + 1u;
                  if(!(rs->j >= rs->alpha_size))
                    rs->code_len[(signed long int)rs->j] = rs->code_len[(signed long int)(rs->j - 1u)];

                }

                v = v << retrieve__1__1__5__1__1__k;
                w = w - retrieve__1__1__5__1__1__k;
                if(!(w >= 32u))
                {
                  if(next == limit)
                  {
                    bs->buff = v;
                    bs->live = w;
                    bs->data = next;
                    ds->block_size = (unsigned int)(tt - ds->tt);
                    if(!(bs->eof == (_Bool)0))
                      return 19;

                    rs->state = (unsigned int)5;
                    return 1;

                  __CPROVER_DUMP_L38:
                    ;
                    if(bs->data == bs->limit)
                    {
                      /* assertion bs->eof */
                      assert(bs->eof != (_Bool)0);
                      return 19;
                    }

                    v = bs->buff;
                    w = bs->live;
                    next = bs->data;
                    limit = bs->limit;
                    tt = ds->tt + (signed long int)ds->block_size;
                    tt_limit = ds->tt + (signed long int)900000;
                    /* assertion w < 32u */
                    assert(w < 32u);
                  }

                  unsigned int return_value_ntohl_8;
                  return_value_ntohl_8=ntohl(*next);
                  w = w + 32u;
                  v = v | (unsigned long int)return_value_ntohl_8 << 64u - w;
                  next = next + 1l;
                }

                goto __CPROVER_DUMP_L32;
              }

              make_tree(rs);
              rs->t = rs->t + 1u;
              goto __CPROVER_DUMP_L31;
            }

            unsigned int i = (unsigned int)0;
            for( ; !(i >= 16u); i = i + 1u)
              rs->imtf_row[(signed long int)i] = rs->imtf_slide + (signed long int)(8192u - (unsigned int)256) + (signed long int)(i * 16u);
            rs->runChar = (unsigned int)rs->imtf_row[(signed long int)0][(signed long int)0];
            rs->run = (unsigned int)0;
            rs->shift = (unsigned int)0;
            memset((void *)ds->ftab, 0, sizeof(unsigned int [256l]) /*1024ul*/ );
            if(rs->num_selectors >= 18002u)
              rs->num_selectors = (unsigned int)18001;

            rs->g = (unsigned int)0;

          __CPROVER_DUMP_L47:
            ;
            if(!(rs->g >= rs->num_selectors))
            {
              unsigned int s;
              unsigned int x;
              unsigned int retrieve__1__1__7__1__k;
              unsigned int retrieve__1__1__7__1__i = (unsigned int)rs->selector[(signed long int)rs->g];
              rs->t = rs->mtf[(signed long int)retrieve__1__1__7__1__i];
              if(rs->t >= 6u)
                return (signed int)rs->t;

              for( ; retrieve__1__1__7__1__i >= 1u; retrieve__1__1__7__1__i = retrieve__1__1__7__1__i - 1u)
                rs->mtf[(signed long int)retrieve__1__1__7__1__i] = rs->mtf[(signed long int)(retrieve__1__1__7__1__i - (unsigned int)1)];
              rs->mtf[(signed long int)0] = rs->t;
              if(limit - next >= 32l)
              {
                struct tree *T = &rs->tree[(signed long int)rs->t];
                unsigned int j;
                unsigned int run = rs->run;
                unsigned int runChar = rs->runChar;
                unsigned int shift = rs->shift;
                j = (unsigned int)0;
                for( ; !(j >= 50u); j = j + 1u)
                {
                  if(!(w >= 32u))
                  {
                    unsigned int return_value_ntohl_9;
                    return_value_ntohl_9=ntohl(*next);
                    w = w + 32u;
                    v = v | (unsigned long int)return_value_ntohl_9 << 64u - w;
                    next = next + 1l;
                  }

                  x = (unsigned int)T->start[(signed long int)(v >> 64u - (unsigned int)10)];
                  retrieve__1__1__7__1__k = x & (unsigned int)0x1F;
                  if(!(retrieve__1__1__7__1__k >= 11u))
                    s = x >> 5;

                  else
                  {
                    for( ; v >= T->base[(signed long int)(1u + retrieve__1__1__7__1__k)]; retrieve__1__1__7__1__k = retrieve__1__1__7__1__k + 1u)
                      ;
                    s = (unsigned int)T->perm[(signed long int)((unsigned long int)T->count[(signed long int)retrieve__1__1__7__1__k] + (v - T->base[(signed long int)retrieve__1__1__7__1__k] >> (unsigned int)64 - retrieve__1__1__7__1__k))];
                  }
                  v = v << retrieve__1__1__7__1__k;
                  w = w - retrieve__1__1__7__1__k;
                  if(s == 0u)
                  {
                    rs->run = run;
                    rs->runChar = runChar;
                    goto eob;
                  }

                  if(s >= 256u && !(run >= 900001u))
                  {
                    tmp_post_10 = shift;
                    shift = shift + 1u;
                    run = run + (s - (unsigned int)256 << tmp_post_10);
                  }

                  else
                  {
                    if(!(tt_limit - tt >= (signed long int)run))
                      return 17;

                    ds->ftab[(signed long int)runChar] = ds->ftab[(signed long int)runChar] + run;
                    do
                    {
                      tmp_post_11 = run;
                      run = run - 1u;
                      if(!(tmp_post_11 >= 1u))
                        break;

                      tmp_post_12 = tt;
                      tt = tt + 1l;
                      *tmp_post_12 = runChar;
                    }
                    while((_Bool)1);
                    unsigned char return_value_mtf_one_13;
                    return_value_mtf_one_13=mtf_one(rs->imtf_row, rs->imtf_slide, (unsigned char)s);
                    runChar = (unsigned int)return_value_mtf_one_13;
                    shift = (unsigned int)0;
                    run = (unsigned int)1;
                  }
                }
                rs->run = run;
                rs->runChar = runChar;
                rs->shift = shift;
              }

              else
              {
                rs->j = (unsigned int)0;

              __CPROVER_DUMP_L63:
                ;
                if(!(rs->j >= 50u))
                {
                  struct tree *retrieve__1__1__7__1__3__1__1__T;
                  if(!(w >= 32u))
                  {
                    if(next == limit)
                    {
                      bs->buff = v;
                      bs->live = w;
                      bs->data = next;
                      ds->block_size = (unsigned int)(tt - ds->tt);
                      if(!(bs->eof == (_Bool)0))
                        return 19;

                      rs->state = (unsigned int)6;
                      return 1;

                    __CPROVER_DUMP_L65:
                      ;
                      if(bs->data == bs->limit)
                      {
                        /* assertion bs->eof */
                        assert(bs->eof != (_Bool)0);
                        return 19;
                      }

                      v = bs->buff;
                      w = bs->live;
                      next = bs->data;
                      limit = bs->limit;
                      tt = ds->tt + (signed long int)ds->block_size;
                      tt_limit = ds->tt + (signed long int)900000;
                      /* assertion w < 32u */
                      assert(w < 32u);
                    }

                    unsigned int return_value_ntohl_14;
                    return_value_ntohl_14=ntohl(*next);
                    w = w + 32u;
                    v = v | (unsigned long int)return_value_ntohl_14 << 64u - w;
                    next = next + 1l;
                  }

                  retrieve__1__1__7__1__3__1__1__T = &rs->tree[(signed long int)rs->t];
                  x = (unsigned int)retrieve__1__1__7__1__3__1__1__T->start[(signed long int)(v >> 64u - (unsigned int)10)];
                  retrieve__1__1__7__1__k = x & (unsigned int)0x1F;
                  if(!(retrieve__1__1__7__1__k >= 11u))
                    s = x >> 5;

                  else
                  {
                    for( ; v >= retrieve__1__1__7__1__3__1__1__T->base[(signed long int)(1u + retrieve__1__1__7__1__k)]; retrieve__1__1__7__1__k = retrieve__1__1__7__1__k + 1u)
                      ;
                    s = (unsigned int)retrieve__1__1__7__1__3__1__1__T->perm[(signed long int)((unsigned long int)retrieve__1__1__7__1__3__1__1__T->count[(signed long int)retrieve__1__1__7__1__k] + (v - retrieve__1__1__7__1__3__1__1__T->base[(signed long int)retrieve__1__1__7__1__k] >> (unsigned int)64 - retrieve__1__1__7__1__k))];
                  }
                  v = v << retrieve__1__1__7__1__k;
                  w = w - retrieve__1__1__7__1__k;
                  if(s == 0u)
                  {

                  eob:
                    ;
                    if(!(tt_limit - tt >= (signed long int)rs->run))
                      return 17;

                    ds->ftab[(signed long int)rs->runChar] = ds->ftab[(signed long int)rs->runChar] + rs->run;
                    do
                    {
                      tmp_post_15 = rs->run;
                      rs->run = rs->run - 1u;
                      if(tmp_post_15 == 0u)
                        break;

                      tmp_post_16 = tt;
                      tt = tt + 1l;
                      *tmp_post_16 = rs->runChar;
                    }
                    while((_Bool)1);
                    bs->buff = v;
                    bs->live = w;
                    bs->data = next;
                    ds->block_size = (unsigned int)(tt - ds->tt);
                    if(ds->block_size == 0u)
                      return 12;

                    if(ds->bwt_idx >= ds->block_size)
                      return 18;

                    free((void *)ds->internal_state);
                    ds->internal_state = (struct retriever_internal_state *)(void *)0;
                    return 0;
                  }

                  if(s >= 256u)
                    tmp_if_expr_18 = rs->run <= (unsigned int)900000 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr_18 = (_Bool)0;
                  if(tmp_if_expr_18)
                  {
                    tmp_post_17 = rs->shift;
                    rs->shift = rs->shift + 1u;
                    rs->run = rs->run + (s - (unsigned int)256 << tmp_post_17);
                  }

                  else
                  {
                    if(!(tt_limit - tt >= (signed long int)rs->run))
                      return 17;

                    ds->ftab[(signed long int)rs->runChar] = ds->ftab[(signed long int)rs->runChar] + rs->run;
                    do
                    {
                      tmp_post_19 = rs->run;
                      rs->run = rs->run - 1u;
                      if(!(tmp_post_19 >= 1u))
                        break;

                      tmp_post_20 = tt;
                      tt = tt + 1l;
                      *tmp_post_20 = rs->runChar;
                    }
                    while((_Bool)1);
                    unsigned char return_value_mtf_one_21;
                    return_value_mtf_one_21=mtf_one(rs->imtf_row, rs->imtf_slide, (unsigned char)s);
                    rs->runChar = (unsigned int)return_value_mtf_one_21;
                    rs->shift = (unsigned int)0;
                    rs->run = (unsigned int)1;
                  }
                  rs->j = rs->j + 1u;
                  goto __CPROVER_DUMP_L63;
                }

              }
              rs->g = rs->g + 1u;
              goto __CPROVER_DUMP_L47;
            }

            return 13;

          __CPROVER_DUMP_L88:
            ;
            abort();
          }
        }
      }
    }
}

// rpl_fprintf
// file ../lib/stdio.h line 595
extern signed int rpl_fprintf(struct _IO_FILE *fp, const char *format, ...)
{
  char buf[2000l];
  char *output;
  unsigned long int len;
  unsigned long int lenbuf = sizeof(char [2000l]) /*2000ul*/ ;
  void **args = (void **)&format;
  output=vasnprintf(buf, &lenbuf, format, args);
  len = lenbuf;
  args = ((void **)NULL);
  if(output == ((char *)NULL))
  {
    fseterr(fp);
    return -1;
  }

  else
  {
    unsigned long int return_value_fwrite_3;
    return_value_fwrite_3=fwrite((const void *)output, (unsigned long int)1, len, fp);
    if(!(return_value_fwrite_3 >= len))
    {
      if(!(output == buf))
      {
        signed int saved_errno;
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        saved_errno = *return_value___errno_location_1;
        free((void *)output);
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = saved_errno;
      }

      return -1;
    }

    else
    {
      if(!(output == buf))
        free((void *)output);

      if(len >= 2147483648ul)
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        *return_value___errno_location_4 = 75;
        fseterr(fp);
        return -1;
      }

      return (signed int)len;
    }
  }
}

// rpl_isnanl
// file isnan.c line 94
extern signed int rpl_isnanl(long double x)
{
  union anonymous_25 m;
  unsigned int exponent;
  m.value = x;
  exponent = m.word[(signed long int)2] >> 0 & (unsigned int)(16384 - -16381 | 7);
  if(exponent == 0u)
    return (signed int)(m.word[(signed long int)1] >> 31);

  else
    if(exponent == 32767u)
      return (signed int)((m.word[(signed long int)1] ^ 0x80000000U | m.word[(signed long int)0]) != (unsigned int)0);

    else
      return (signed int)(m.word[(signed long int)1] >> 31 ^ (unsigned int)1);
}

// scan
// file parse.c line 275
signed int scan(struct bitstream_0 *bs, unsigned int skip)
{
  unsigned int state = (unsigned int)0;
  const unsigned int *data;
  const unsigned int *limit;
  if(!(bs->live >= skip))
  {
    skip = skip - bs->live;
    bs->buff = bs->buff << bs->live;
    bs->live = bs->live - bs->live;
    skip = (skip + 31u) / 32u;
    if(!(bs->limit - bs->data >= (signed long int)skip))
      bs->data = bs->limit;

    else
      bs->data = bs->data + (signed long int)skip;
  }

  signed int tmp_if_expr_3;
  signed int tmp_if_expr_2;
  unsigned int return_value_ntohl_1;
  unsigned int bt_state;
  unsigned int word;
  unsigned int return_value_ntohl_4;
  do
  {
  /* assertion state < ACCEPT */

  again:
    ;
    /* assertion state < ACCEPT */
    assert(state < (unsigned int)ACCEPT);
    while(bs->live >= 1u)
    {
      unsigned int bit = (unsigned int)(bs->buff >> 64u - (unsigned int)1);
      bs->buff = bs->buff << 1;
      bs->live = bs->live - (unsigned int)1;
      state = (unsigned int)mini_dfa[(signed long int)state][(signed long int)bit];
      if(state == (unsigned int)ACCEPT)
      {
        if(bs->live >= 32u)
          tmp_if_expr_3 = 0;

        else
        {
          if(bs->data == bs->limit)
            tmp_if_expr_2 = bs->eof != (_Bool)0 ? 2 : 1;

          else
          {
            return_value_ntohl_1=ntohl(*bs->data);
            bs->buff = bs->buff | (unsigned long int)return_value_ntohl_1 << 32u - bs->live;
            bs->data = bs->data + 1l;
            bs->live = bs->live + 32u;
            tmp_if_expr_2 = 0;
          }
          tmp_if_expr_3 = tmp_if_expr_2;
        }
        if(tmp_if_expr_3 == 0)
        {
          bs->buff = bs->buff << 32;
          bs->live = bs->live - (unsigned int)32;
          return 0;
        }

        else
        {
          bs->buff = bs->buff << bs->live;
          bs->live = bs->live - bs->live;
          bs->data = bs->limit;
          return 1;
        }
      }

    }
    data = bs->data;
    limit = bs->limit;

  __CPROVER_DUMP_L12:
    ;
    if(data >= limit)
      goto __CPROVER_DUMP_L19;

    bt_state = state;
    word = *data;
    word=ntohl(word);
    state = (unsigned int)big_dfa[(signed long int)state][(signed long int)(word >> 24)];
    state = (unsigned int)big_dfa[(signed long int)state][(signed long int)(unsigned char)(word >> 16)];
    state = (unsigned int)big_dfa[(signed long int)state][(signed long int)(unsigned char)(word >> 8)];
    state = (unsigned int)big_dfa[(signed long int)state][(signed long int)(unsigned char)word];
    if(!(state == (unsigned int)ACCEPT))
      break;

    state = bt_state;
    bs->data = data;
    if(bs->live >= 1u)
      0;

    else
      if(bs->data == bs->limit)
      {
        if(!(bs->eof == (_Bool)0))
          2;

        else
          1;
      }

      else
      {
        return_value_ntohl_4=ntohl(*bs->data);
        bs->buff = bs->buff | (unsigned long int)return_value_ntohl_4 << 32u - bs->live;
        bs->data = bs->data + 1l;
        bs->live = bs->live + 32u;
        0;
      }
  }
  while((_Bool)1);
  data = data + 1l;
  goto __CPROVER_DUMP_L12;

__CPROVER_DUMP_L19:
  ;
  bs->data = data;
  return 1;
}

// sched_lock
// file process.h line 173
void sched_lock(void)
{
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&sched_mutex);
  if(!(return_value_pthread_mutex_lock_1 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
}

// sched_unlock
// file process.h line 176
void sched_unlock(void)
{
  select_task();
  _Bool tmp_if_expr_2;
  _Bool return_value;
  if(!(next_task == ((struct task *)NULL)))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value=process->finished();
    tmp_if_expr_2 = return_value != (_Bool)0 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_pthread_cond_signal_1;
  if(tmp_if_expr_2)
  {
    return_value_pthread_cond_signal_1=pthread_cond_signal(&sched_cond);
    if(!(return_value_pthread_cond_signal_1 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
  }

  signed int return_value_pthread_mutex_unlock_3;
  return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&sched_mutex);
  if(!(return_value_pthread_mutex_unlock_3 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
}

// schedule
// file process.c line 594
static void schedule(struct process *proc)
{
  process = proc;
  void *return_value_xnmalloc_1;
  return_value_xnmalloc_1=xnmalloc((unsigned long int)num_worker, sizeof(unsigned long int) /*8ul*/ );
  worker_thread = (unsigned long int *)return_value_xnmalloc_1;
  *worker_thread=xcreate(primary_thread);
  halt();
  signed int return_value_pthread_join_2;
  return_value_pthread_join_2=pthread_join(*worker_thread, (void **)(void *)0);
  if(!(return_value_pthread_join_2 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  free((void *)worker_thread);
}

// select_task
// file process.c line 405
static void select_task(void)
{
  struct task *task = process->tasks;
  if(!(task->ready == ((_Bool (*)(void))NULL)))
  {
    _Bool return_value;
    return_value=task->ready();
    if(!(return_value == (_Bool)0))
      next_task = task;

    task = task + 1l;
  }

  next_task = (struct task *)(void *)0;
}

// set_memory_constraints
// file process.c line 608
static void set_memory_constraints(void)
{
  if(decompress == (_Bool)0)
  {
    total_in_slots = 2u * num_worker;
    total_out_slots = 2u * num_worker + (unsigned int)2;
    in_granul = (unsigned long int)(bs100k * 100000u);
    out_granul = (unsigned long int)-1;
  }

  else
    if(small == (_Bool)0)
    {
      total_in_slots = 4u * num_worker;
      total_out_slots = 16u * num_worker;
      in_granul = (unsigned long int)(256u * 1024u);
      out_granul = (unsigned long int)900000;
    }

    else
    {
      total_in_slots = 2u;
      total_out_slots = 2u * num_worker;
      in_granul = (unsigned long int)32768u;
      out_granul = (unsigned long int)900000u;
    }
}

// setup_signals
// file signals.h line 22
void setup_signals(void)
{
  const signed int *sig;
  pid=getpid();
  main_thread=pthread_self();
  xempty(&blocked);
  sig = blocked_signals;
  for( ; !(sig >= blocked_signals + 2l); sig = sig + 1l)
    xadd(&blocked, *sig);
  xempty(&handled);
  sig = handled_signals;
  for( ; !(sig >= handled_signals + 4l); sig = sig + 1l)
    xadd(&handled, *sig);
  xmask(0, &blocked, ((struct anonymous_11 *)NULL));
}

// signal_handler
// file signals.c line 122
static void signal_handler(signed int caught)
{
  const signed int *sig = handled_signals;
  for( ; !(sig >= handled_signals + 4l); sig = sig + 1l)
    if(*sig == caught)
    {
      caught_index = (volatile signed int)(sig - handled_signals);
      goto __CPROVER_DUMP_L4;
    }

  abort();

__CPROVER_DUMP_L4:
  ;
}

// sink_thread_proc
// file process.c line 334
static void sink_thread_proc(void)
{
  _Bool progress_enabled;
  unsigned long int processed;
  struct timespec start_time;
  struct timespec next_time;
  struct timespec update_interval;
  struct block block;
  _Bool tmp_if_expr_2;
  signed int return_value_isatty_1;
  if(ispec.size >= 1ul && !(verbose == (_Bool)0))
  {
    return_value_isatty_1=isatty(2);
    tmp_if_expr_2 = return_value_isatty_1 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  progress_enabled = tmp_if_expr_2;
  processed = (unsigned long int)0u;
  gettime(&start_time);
  next_time = start_time;
  static const double UPDATE_INTERVAL = 0.1;
  update_interval=dtotimespec(UPDATE_INTERVAL);
  signed int return_value_pthread_mutex_lock_3;
  return_value_pthread_mutex_lock_3=pthread_mutex_lock(&sink_mutex);
  if(!(return_value_pthread_mutex_lock_3 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  while(output_q.size == 0u && finish == (_Bool)0)
  {
    signed int return_value_pthread_cond_wait_4;
    return_value_pthread_cond_wait_4=pthread_cond_wait(&sink_cond, &sink_mutex);
    if(!(return_value_pthread_cond_wait_4 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
  }
  if(!(output_q.size == 0u))
  {
    /* assertion !(!(output_q).size) */
    assert(!(!(output_q.size != 0u)));
    output_q.size = output_q.size - 1u;
    output_q.head = output_q.head + 1u < (output_q.head + 1u) - output_q.modulus ? output_q.head + 1u : (output_q.head + 1u) - output_q.modulus;
    block = output_q.root[(signed long int)output_q.head];
    signed int return_value_pthread_mutex_unlock_5;
    return_value_pthread_mutex_unlock_5=pthread_mutex_unlock(&sink_mutex);
    if(!(return_value_pthread_mutex_unlock_5 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
    xwrite(block.buffer, block.size);
    process->on_written(block.buffer);
    if(!(progress_enabled == (_Bool)0))
    {
      struct timespec time_now;
      double completed;
      double elapsed;
      processed = processed + block.weight < ispec.size ? processed + block.weight : ispec.size;
      gettime(&time_now);
      signed int return_value_timespec_cmp_7;
      return_value_timespec_cmp_7=timespec_cmp(time_now, next_time);
      if(return_value_timespec_cmp_7 >= 1)
      {
        next_time=timespec_add(time_now, update_interval);
        struct timespec return_value_timespec_sub_6;
        return_value_timespec_sub_6=timespec_sub(time_now, start_time);
        elapsed=timespectod(return_value_timespec_sub_6);
        completed = (double)processed / (double)ispec.size;
        if(elapsed < 5.000000)
          display("progress: %.2f%%\r", (double)100 * completed);

        else
          display("progress: %.2f%%, ETA: %.0f s    \r", (double)100 * completed, elapsed * ((double)1 / completed - (double)1));
      }

    }

  }

  signed int return_value_pthread_mutex_unlock_8;
  return_value_pthread_mutex_unlock_8=pthread_mutex_unlock(&sink_mutex);
  if(!(return_value_pthread_mutex_unlock_8 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
}

// sink_write_buffer
// file process.h line 190
void sink_write_buffer(void *buffer, unsigned long int size, unsigned long int weight)
{
  struct block block;
  block.buffer = buffer;
  block.size = size;
  block.weight = weight;
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&sink_mutex);
  if(!(return_value_pthread_mutex_lock_1 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  /* assertion (output_q).size < (output_q).modulus */
  assert(output_q.size < output_q.modulus);
  output_q.size = output_q.size + 1u;
  output_q.root[(signed long int)(output_q.head + output_q.size < (output_q.head + output_q.size) - output_q.modulus ? output_q.head + output_q.size : (output_q.head + output_q.size) - output_q.modulus)] = block;
  signed int return_value_pthread_cond_signal_2;
  return_value_pthread_cond_signal_2=pthread_cond_signal(&sink_cond);
  if(!(return_value_pthread_cond_signal_2 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  signed int return_value_pthread_mutex_unlock_3;
  return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&sink_mutex);
  if(!(return_value_pthread_mutex_unlock_3 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
}

// sort_alphabet
// file encode.c line 547
static void sort_alphabet(unsigned long int *first, unsigned long int *last)
{
  unsigned long int t;
  unsigned long int *a;
  unsigned long int *b;
  unsigned long int *b1;
  a = first + (signed long int)1;
  for( ; !(a >= last); a = a + 1l)
  {
    b1 = a;
    t = *b1;
    b = b1 - (signed long int)1;
    for( ; !(*b >= t); b = b - 1l)
    {
      *b1 = *b;
      b1 = b;
      if(b1 == first)
        break;

    }
    *b1 = t;
  }
}

// sort_typeBstar
// file divbwt.c line 1540
static signed int sort_typeBstar(const unsigned char *T, signed int *SA, signed int *bucket_A, signed int *bucket_B, signed int n)
{
  signed int *PAb;
  signed int *ISAb;
  signed int *buf;
  signed int i;
  signed int j;
  signed int k;
  signed int t;
  signed int m;
  signed int bufsize;
  signed long int c0;
  signed long int c1;
  signed int flag;
  i = 0;
  for( ; !(i >= 256); i = i + 1)
    bucket_A[(signed long int)i] = 0;
  i = 0;
  for( ; !(i >= 256); i = i + 1)
    bucket_B[(signed long int)i] = 0;
  i = 1;
  flag = 1;
  for( ; !(i >= n); i = i + 1)
    if(!(T[(signed long int)(i + -1)] == T[(signed long int)i]))
    {
      if(!((signed int)T[(signed long int)i] >= (signed int)T[(signed long int)(i + -1)]))
        flag = 0;

      break;
    }

  i = n - 1;
  m = n;
  c0 = (signed long int)T[(signed long int)(n - 1)];
  c1 = (signed long int)T[(signed long int)0];
  _Bool tmp_if_expr_1;
  if(c0 == c1 && !(flag == 0) || !(c0 >= c1))
  {
    if(flag == 0)
    {
      bucket_B[c0 << 8 | c1] = bucket_B[c0 << 8 | c1] + 1;
      m = m - 1;
      SA[(signed long int)m] = i;
    }

    else
      bucket_B[c1 << 8 | c0] = bucket_B[c1 << 8 | c0] + 1;
    i = i - 1;
    c1 = c0;
    do
    {
      if(i >= 0)
      {
        c0 = (signed long int)T[(signed long int)i];
        tmp_if_expr_1 = c0 <= c1 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      bucket_B[c1 << 8 | c0] = bucket_B[c1 << 8 | c0] + 1;
      i = i - 1;
      c1 = c0;
    }
    while((_Bool)1);
  }

  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  while(i >= 0)
  {
    do
    {
      c1 = c0;
      bucket_A[c1] = bucket_A[c1] + 1;
      i = i - 1;
      if(i >= 0)
      {
        c0 = (signed long int)T[(signed long int)i];
        tmp_if_expr_2 = c0 >= c1 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
    }
    while(tmp_if_expr_2);
    if(i >= 0)
    {
      bucket_B[c0 << 8 | c1] = bucket_B[c0 << 8 | c1] + 1;
      m = m - 1;
      SA[(signed long int)m] = i;
      i = i - 1;
      c1 = c0;
      do
      {
        if(i >= 0)
        {
          c0 = (signed long int)T[(signed long int)i];
          tmp_if_expr_3 = c0 <= c1 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_3 = (_Bool)0;
        if(!tmp_if_expr_3)
          break;

        bucket_B[c1 << 8 | c0] = bucket_B[c1 << 8 | c0] + 1;
        i = i - 1;
        c1 = c0;
      }
      while((_Bool)1);
    }

  }
  m = n - m;
  /* assertion m <= n/2 */
  assert(m <= n / 2);
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  if(m == 0)
    return 0;

  else
  {
    c0 = (signed long int)0;
    i = 0;
    j = 0;
    for( ; !(c0 >= 256l); c0 = c0 + 1l)
    {
      t = i + bucket_A[c0];
      bucket_A[c0] = i + j;
      i = t + bucket_B[c0 << 8 | c0];
      c1 = c0 + (signed long int)1;
      for( ; !(c1 >= 256l); c1 = c1 + 1l)
      {
        j = j + bucket_B[c0 << 8 | c1];
        bucket_B[c0 << 8 | c1] = j;
        i = i + bucket_B[c1 << 8 | c0];
      }
    }
    PAb = (SA + (signed long int)n) - (signed long int)m;
    ISAb = SA + (signed long int)m;
    i = m - 2;
    for( ; i >= 0; i = i - 1)
    {
      t = PAb[(signed long int)i];
      c0 = (signed long int)T[(signed long int)t];
      c1 = (signed long int)T[(signed long int)(t + 1)];
      bucket_B[c0 << 8 | c1] = bucket_B[c0 << 8 | c1] - 1;
      SA[(signed long int)bucket_B[c0 << 8 | c1]] = i;
    }
    t = PAb[(signed long int)(m - 1)];
    c0 = (signed long int)T[(signed long int)t];
    c1 = (signed long int)T[(signed long int)(t + 1)];
    bucket_B[c0 << 8 | c1] = bucket_B[c0 << 8 | c1] - 1;
    SA[(signed long int)bucket_B[c0 << 8 | c1]] = m - 1;
    buf = SA + (signed long int)m;
    bufsize = n - 2 * m;
    c0 = (signed long int)(256 - 2);
    j = m;
    for( ; j >= 1; c0 = c0 - 1l)
    {
      c1 = (signed long int)(256 - 1);
      for( ; !(c0 >= c1); c1 = c1 - 1l)
      {
        i = bucket_B[c0 << 8 | c1];
        if(j + -i >= 2)
          sssort(T, PAb, SA + (signed long int)i, SA + (signed long int)j, buf, bufsize, 2, n, (signed long int)(SA[(signed long int)i] == m - 1));

        j = i;
      }
    }
    i = m - 1;
    for( ; i >= 0; i = i - 1)
    {
      if(SA[(signed long int)i] >= 0)
      {
        j = i;
        do
        {
          ISAb[(signed long int)SA[(signed long int)i]] = i;
          i = i - 1;
          if(i >= 0)
            tmp_if_expr_4 = 0 <= SA[(signed long int)i] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_4 = (_Bool)0;
        }
        while(tmp_if_expr_4);
        SA[(signed long int)(i + 1)] = i - j;
        if(!(i >= 1))
          break;

      }

      j = i;
      do
      {
        SA[(signed long int)i] = ~SA[(signed long int)i];
        ISAb[(signed long int)SA[(signed long int)i]] = j;
        i = i - 1;
      }
      while(!(SA[(signed long int)i] >= 0));
      ISAb[(signed long int)SA[(signed long int)i]] = j;
    }
    trsort(ISAb, SA, m, 1);
    i = n - 1;
    j = m;
    c0 = (signed long int)T[(signed long int)(n - 1)];
    c1 = (signed long int)T[(signed long int)0];
    if(c0 == c1 && !(flag == 0) || !(c0 >= c1))
    {
      t = i;
      i = i - 1;
      c1 = c0;
      do
      {
        if(i >= 0)
        {
          c0 = (signed long int)T[(signed long int)i];
          tmp_if_expr_5 = c0 <= c1 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_5 = (_Bool)0;
        if(!tmp_if_expr_5)
          break;

        i = i - 1;
        c1 = c0;
      }
      while((_Bool)1);
      if(flag == 0)
      {
        j = j - 1;
        SA[(signed long int)ISAb[(signed long int)j]] = 1 < t - i ? t : ~t;
      }

    }

    while(i >= 0)
    {
      i = i - 1;
      c1 = c0;
      do
      {
        if(i >= 0)
        {
          c0 = (signed long int)T[(signed long int)i];
          tmp_if_expr_6 = c0 >= c1 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_6 = (_Bool)0;
        if(!tmp_if_expr_6)
          break;

        i = i - 1;
        c1 = c0;
      }
      while((_Bool)1);
      if(i >= 0)
      {
        t = i;
        i = i - 1;
        c1 = c0;
        do
        {
          if(i >= 0)
          {
            c0 = (signed long int)T[(signed long int)i];
            tmp_if_expr_7 = c0 <= c1 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_7 = (_Bool)0;
          if(!tmp_if_expr_7)
            break;

          i = i - 1;
          c1 = c0;
        }
        while((_Bool)1);
        j = j - 1;
        SA[(signed long int)ISAb[(signed long int)j]] = 1 < t - i ? t : ~t;
      }

    }
    if(SA[(signed long int)*ISAb] == -1)
    {
      if((signed int)*T >= (signed int)T[(signed long int)(n + -1)])
        SA[(signed long int)ISAb[(signed long int)0]] = 0;

    }

    bucket_B[(signed long int)(256 - 1 << 8 | 256 - 1)] = n;
    c0 = (signed long int)(256 - 2);
    k = m - 1;
    for( ; c0 >= 0l; c0 = c0 - 1l)
    {
      i = bucket_A[c0 + (signed long int)1] - 1;
      c1 = (signed long int)(256 - 1);
      for( ; !(c0 >= c1); c1 = c1 - 1l)
      {
        t = i - bucket_B[c1 << 8 | c0];
        bucket_B[c1 << 8 | c0] = i;
        i = t;
        j = bucket_B[c0 << 8 | c1];
        for( ; k >= j; k = k - 1)
        {
          SA[(signed long int)i] = SA[(signed long int)k];
          i = i - 1;
        }
      }
      bucket_B[c0 << 8 | c0 + (signed long int)1] = (i - bucket_B[c0 << 8 | c0]) + 1;
      bucket_B[c0 << 8 | c0] = i;
    }
    return m;
  }
}

// source_close
// file process.h line 181
void source_close(void)
{
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&source_mutex);
  if(!(return_value_pthread_mutex_lock_1 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  request_close = (_Bool)1;
  signed int return_value_pthread_cond_signal_2;
  if(in_slots == 0u)
  {
    return_value_pthread_cond_signal_2=pthread_cond_signal(&source_cond);
    if(!(return_value_pthread_cond_signal_2 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
  }

  signed int return_value_pthread_mutex_unlock_3;
  return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&source_mutex);
  if(!(return_value_pthread_mutex_unlock_3 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
}

// source_release_buffer
// file process.h line 185
void source_release_buffer(void *buffer)
{
  free(buffer);
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&source_mutex);
  if(!(return_value_pthread_mutex_lock_1 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  unsigned int tmp_post_3 = in_slots;
  in_slots = in_slots + 1u;
  signed int return_value_pthread_cond_signal_2;
  if(tmp_post_3 == 0u)
  {
    return_value_pthread_cond_signal_2=pthread_cond_signal(&source_cond);
    if(!(return_value_pthread_cond_signal_2 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
  }

  signed int return_value_pthread_mutex_unlock_4;
  return_value_pthread_mutex_unlock_4=pthread_mutex_unlock(&source_mutex);
  if(!(return_value_pthread_mutex_unlock_4 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
}

// source_thread_proc
// file process.c line 245
static void source_thread_proc(void)
{
  do
  {
    void *buffer;
    unsigned long int vacant;
    unsigned long int avail;
    signed int return_value_pthread_mutex_lock_1;
    return_value_pthread_mutex_lock_1=pthread_mutex_lock(&source_mutex);
    if(!(return_value_pthread_mutex_lock_1 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
    while(request_close == (_Bool)0 && in_slots == 0u)
    {
      signed int return_value_pthread_cond_wait_2;
      return_value_pthread_cond_wait_2=pthread_cond_wait(&source_cond, &source_mutex);
      if(!(return_value_pthread_cond_wait_2 == 0))
      {
        abort();
        (_Bool)0;
      }

      else
        (_Bool)0;
    }
    if(!(request_close == (_Bool)0))
    {
      signed int return_value_pthread_mutex_unlock_3;
      return_value_pthread_mutex_unlock_3=pthread_mutex_unlock(&source_mutex);
      if(!(return_value_pthread_mutex_unlock_3 == 0))
      {
        abort();
        (_Bool)0;
      }

      else
        (_Bool)0;
      break;
    }

    in_slots = in_slots - 1u;
    signed int return_value_pthread_mutex_unlock_4;
    return_value_pthread_mutex_unlock_4=pthread_mutex_unlock(&source_mutex);
    if(!(return_value_pthread_mutex_unlock_4 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
    vacant = in_granul;
    avail = vacant;
    void *return_value_xmalloc_5;
    return_value_xmalloc_5=xmalloc(vacant);
    buffer = (void *)(unsigned char *)return_value_xmalloc_5;
    xread(buffer, &vacant);
    avail = avail - vacant;
    if(avail == 0ul)
      source_release_buffer(buffer);

    else
      process->on_block(buffer, avail);
    if(vacant >= 1ul)
      break;

  }
  while((_Bool)1);
  sched_lock();
  eof = (_Bool)1;
  sched_unlock();
}

// ss_blockswap
// file divbwt.c line 589
static void ss_blockswap(signed int *a, signed int *b, signed int n)
{
  signed int t;
  for( ; n >= 1; b = b + 1l)
  {
    t = *a;
    *a = *b;
    *b = t;
    n = n - 1;
    a = a + 1l;
  }
}

// ss_compare
// file divbwt.c line 249
static signed long int ss_compare(const unsigned char *T, const signed int *p1, const signed int *p2, signed int depth)
{
  const unsigned char *U1;
  const unsigned char *U2;
  const unsigned char *U1n;
  const unsigned char *U2n;
  U1 = T + (signed long int)depth + (signed long int)*p1;
  U2 = T + (signed long int)depth + (signed long int)*p2;
  U1n = T + (signed long int)p1[(signed long int)1] + (signed long int)2;
  U2n = T + (signed long int)p2[(signed long int)1] + (signed long int)2;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(U1 >= U1n) && !(U2 >= U2n))
      tmp_if_expr_1 = *U1 == *U2 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    U1 = U1 + 1l;
    U2 = U2 + 1l;
  }
  while((_Bool)1);
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_2;
  if(!(U1 >= U1n))
  {
    if(!(U2 >= U2n))
      tmp_if_expr_2 = (signed int)*U1 - (signed int)*U2;

    else
      tmp_if_expr_2 = 1;
    tmp_if_expr_3 = tmp_if_expr_2;
  }

  else
    tmp_if_expr_3 = U2 < U2n ? -1 : 0;
  return (signed long int)tmp_if_expr_3;
}

// ss_compare_last
// file divbwt.c line 269
static signed long int ss_compare_last(const unsigned char *T, const signed int *PA, const signed int *p1, const signed int *p2, signed int depth, signed int size)
{
  const unsigned char *U1;
  const unsigned char *U2;
  const unsigned char *U1n;
  const unsigned char *U2n;
  U1 = T + (signed long int)depth + (signed long int)*p1;
  U2 = T + (signed long int)depth + (signed long int)*p2;
  U1n = T + (signed long int)size;
  U2n = T + (signed long int)p2[(signed long int)1] + (signed long int)2;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(U1 >= U1n) && !(U2 >= U2n))
      tmp_if_expr_1 = *U1 == *U2 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    U1 = U1 + 1l;
    U2 = U2 + 1l;
  }
  while((_Bool)1);
  signed int tmp_if_expr_2;
  if(!(U1 >= U1n))
  {
    if(!(U2 >= U2n))
      tmp_if_expr_2 = (signed int)*U1 - (signed int)*U2;

    else
      tmp_if_expr_2 = 1;
    return (signed long int)tmp_if_expr_2;
  }

  else
    if(U2 == U2n)
      return (signed long int)1;

  U1 = T + (U1 - T) % (signed long int)size;
  U1n = T + (signed long int)PA[(signed long int)0] + (signed long int)2;
  _Bool tmp_if_expr_3;
  do
  {
    if(!(U1 >= U1n) && !(U2 >= U2n))
      tmp_if_expr_3 = *U1 == *U2 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(!tmp_if_expr_3)
      break;

    U1 = U1 + 1l;
    U2 = U2 + 1l;
  }
  while((_Bool)1);
  signed int tmp_if_expr_5;
  signed int tmp_if_expr_4;
  if(!(U1 >= U1n))
  {
    if(!(U2 >= U2n))
      tmp_if_expr_4 = (signed int)*U1 - (signed int)*U2;

    else
      tmp_if_expr_4 = 1;
    tmp_if_expr_5 = tmp_if_expr_4;
  }

  else
    tmp_if_expr_5 = U2 < U2n ? -1 : 0;
  return (signed long int)tmp_if_expr_5;
}

// ss_fixdown
// file divbwt.c line 329
static void ss_fixdown(const unsigned char *Td, const signed int *PA, signed int *SA, signed int i, signed int size)
{
  signed int j;
  signed int k;
  signed int v;
  signed long int c;
  signed long int d;
  signed long int e;
  v = SA[(signed long int)i];
  c = (signed long int)Td[(signed long int)PA[(signed long int)v]];
  signed int tmp_post_1;
  do
  {
    j = 2 * i + 1;
    if(j >= size)
      break;

    tmp_post_1 = j;
    j = j + 1;
    k = tmp_post_1;
    d = (signed long int)Td[(signed long int)PA[(signed long int)SA[(signed long int)k]]];
    e = (signed long int)Td[(signed long int)PA[(signed long int)SA[(signed long int)j]]];
    if(!(d >= e))
    {
      k = j;
      d = e;
    }

    if(c >= d)
      break;

    SA[(signed long int)i] = SA[(signed long int)k];
    i = k;
  }
  while((_Bool)1);
  SA[(signed long int)i] = v;
}

// ss_heapsort
// file divbwt.c line 346
static void ss_heapsort(const unsigned char *Td, const signed int *PA, signed int *SA, signed int size)
{
  signed int i;
  signed int m;
  signed int t;
  m = size;
  if(size % 2 == 0)
  {
    m = m - 1;
    if(!((signed int)Td[(signed long int)PA[(signed long int)SA[(signed long int)(m / 2)]]] >= (signed int)Td[(signed long int)PA[(signed long int)SA[(signed long int)m]]]))
      do
      {
        t = SA[(signed long int)m];
        SA[(signed long int)m] = SA[(signed long int)(m / 2)];
        SA[(signed long int)(m / 2)] = t;
      }
      while((_Bool)0);

  }

  i = m / 2 - 1;
  for( ; i >= 0; i = i - 1)
    ss_fixdown(Td, PA, SA, i, m);
  if(size % 2 == 0)
  {
    do
    {
      t = SA[(signed long int)0];
      SA[(signed long int)0] = SA[(signed long int)m];
      SA[(signed long int)m] = t;
    }
    while((_Bool)0);
    ss_fixdown(Td, PA, SA, 0, m);
  }

  i = m - 1;
  for( ; i >= 1; i = i - 1)
  {
    t = SA[(signed long int)0];
    SA[(signed long int)0] = SA[(signed long int)i];
    ss_fixdown(Td, PA, SA, 0, i);
    SA[(signed long int)i] = t;
  }
}

// ss_ilg
// file divbwt.c line 155
static signed long int ss_ilg(signed int n)
{
  signed long int tmp_if_expr_1;
  if(!((0xff00 & n) == 0))
    tmp_if_expr_1 = (signed long int)8 + lg_table[(signed long int)(n >> 8 & 0xff)];

  else
    tmp_if_expr_1 = (signed long int)0 + lg_table[(signed long int)(n >> 0 & 0xff)];
  return tmp_if_expr_1;
}

// ss_inplacemerge
// file divbwt.c line 639
static void ss_inplacemerge(const unsigned char *T, const signed int *PA, signed int *first, signed int *middle, signed int *last, signed int depth)
{
  const signed int *p;
  signed int *a;
  signed int *b;
  signed int len;
  signed int half;
  signed long int q;
  signed long int r;
  signed long int x;
  signed int tmp_if_expr_1;
  while((_Bool)1)
  {
    if(!(last[-1l] >= 0))
    {
      x = (signed long int)1;
      p = PA + (signed long int)~(*(last - (signed long int)1));
    }

    else
    {
      x = (signed long int)0;
      p = PA + (signed long int)*(last - (signed long int)1);
    }
    a = first;
    len = (signed int)(middle - first);
    half = len >> 1;
    r = (signed long int)-1;
    for( ; len >= 1; half = half >> 1)
    {
      b = a + (signed long int)half;
      if(*b >= 0)
        tmp_if_expr_1 = *b;

      else
        tmp_if_expr_1 = ~(*b);
      q=ss_compare(T, PA + (signed long int)tmp_if_expr_1, p, depth);
      if(!(q >= 0l))
      {
        a = b + (signed long int)1;
        half = half - (len & 1 ^ 1);
      }

      else
        r = q;
      len = half;
    }
    if(!(a >= middle))
    {
      if(r == 0l)
        *a = ~(*a);

      ss_rotate(a, middle, last);
      last = last - (middle - a);
      middle = a;
      if(first == middle)
        break;

    }

    last = last - 1l;
    if(!(x == 0l))
      do
      {
        last = last - 1l;
        if(*last >= 0)
          break;

      }
      while((_Bool)1);

    if(middle == last)
      break;

  }
}

// ss_insertionsort
// file divbwt.c line 304
static void ss_insertionsort(const unsigned char *T, const signed int *PA, signed int *first, signed int *last, signed int depth)
{
  signed int *i;
  signed int *j;
  signed int t;
  signed long int r;
  i = last - (signed long int)2;
  _Bool tmp_if_expr_1;
  for( ; i >= first; i = i - 1l)
  {
    t = *i;
    j = i + (signed long int)1;
    do
    {
      r=ss_compare(T, PA + (signed long int)t, PA + (signed long int)*j, depth);
      if(!(r >= 1l))
        break;

      do
      {
        *(j - (signed long int)1) = *j;
        j = j + 1l;
        if(!(j >= last))
          tmp_if_expr_1 = *j < 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
      }
      while(tmp_if_expr_1);
      if(j >= last)
        break;

    }
    while((_Bool)1);
    if(r == 0l)
      *j = ~(*j);

    *(j - (signed long int)1) = t;
  }
}

// ss_isqrt
// file divbwt.c line 216
static signed int ss_isqrt(signed int x)
{
  signed int y;
  signed int e;
  signed long int tmp_if_expr_3;
  signed long int tmp_if_expr_1;
  signed long int tmp_if_expr_2;
  if(x >= 1024)
    return 1024;

  else
  {
    if(!((0xffff0000 & (unsigned int)x) == 0u))
    {
      if(!((0xff000000 & (unsigned int)x) == 0u))
        tmp_if_expr_1 = (signed long int)24 + lg_table[(signed long int)(x >> 24 & 0xff)];

      else
        tmp_if_expr_1 = (signed long int)16 + lg_table[(signed long int)(x >> 16 & 0xff)];
      tmp_if_expr_3 = tmp_if_expr_1;
    }

    else
    {
      if(!((0x0000ff00 & x) == 0))
        tmp_if_expr_2 = (signed long int)8 + lg_table[(signed long int)(x >> 8 & 0xff)];

      else
        tmp_if_expr_2 = (signed long int)0 + lg_table[(signed long int)(x >> 0 & 0xff)];
      tmp_if_expr_3 = tmp_if_expr_2;
    }
    e = (signed int)tmp_if_expr_3;
    if(e >= 16)
    {
      y = (signed int)(sqq_table[(signed long int)(x >> (e - 6) - (e & 1))] << (e >> 1) - 7);
      if(e >= 24)
        y = y + 1 + x / y >> 1;

      y = y + 1 + x / y >> 1;
    }

    else
      if(e >= 8)
        y = (signed int)((sqq_table[(signed long int)(x >> (e - 6) - (e & 1))] >> 7 - (e >> 1)) + (signed long int)1);

      else
        return (signed int)(sqq_table[(signed long int)x] >> 4);
    return x < y * y ? y - 1 : y;
  }
}

// ss_median3
// file divbwt.c line 371
static signed int * ss_median3(const unsigned char *Td, const signed int *PA, signed int *v1, signed int *v2, signed int *v3)
{
  signed int *t;
  if(!((signed int)Td[(signed long int)PA[(signed long int)*v2]] >= (signed int)Td[(signed long int)PA[(signed long int)*v1]]))
    do
    {
      t = v1;
      v1 = v2;
      v2 = t;
    }
    while((_Bool)0);

  if(!((signed int)Td[(signed long int)PA[(signed long int)*v3]] >= (signed int)Td[(signed long int)PA[(signed long int)*v2]]))
  {
    if(!((signed int)Td[(signed long int)PA[(signed long int)*v3]] >= (signed int)Td[(signed long int)PA[(signed long int)*v1]]))
      return v1;

    return v3;
  }

  else
    return v2;
}

// ss_median5
// file divbwt.c line 385
static signed int * ss_median5(const unsigned char *Td, const signed int *PA, signed int *v1, signed int *v2, signed int *v3, signed int *v4, signed int *v5)
{
  signed int *t;
  if(!((signed int)Td[(signed long int)PA[(signed long int)*v3]] >= (signed int)Td[(signed long int)PA[(signed long int)*v2]]))
    do
    {
      t = v2;
      v2 = v3;
      v3 = t;
    }
    while((_Bool)0);

  if(!((signed int)Td[(signed long int)PA[(signed long int)*v5]] >= (signed int)Td[(signed long int)PA[(signed long int)*v4]]))
    do
    {
      t = v4;
      v4 = v5;
      v5 = t;
    }
    while((_Bool)0);

  if(!((signed int)Td[(signed long int)PA[(signed long int)*v4]] >= (signed int)Td[(signed long int)PA[(signed long int)*v2]]))
  {
    do
    {
      t = v2;
      v2 = v4;
      v4 = t;
    }
    while((_Bool)0);
    do
    {
      t = v3;
      v3 = v5;
      v5 = t;
    }
    while((_Bool)0);
  }

  if(!((signed int)Td[(signed long int)PA[(signed long int)*v3]] >= (signed int)Td[(signed long int)PA[(signed long int)*v1]]))
    do
    {
      t = v1;
      v1 = v3;
      v3 = t;
    }
    while((_Bool)0);

  if(!((signed int)Td[(signed long int)PA[(signed long int)*v4]] >= (signed int)Td[(signed long int)PA[(signed long int)*v1]]))
  {
    do
    {
      t = v1;
      v1 = v4;
      v4 = t;
    }
    while((_Bool)0);
    do
    {
      t = v3;
      v3 = v5;
      v5 = t;
    }
    while((_Bool)0);
  }

  if(!((signed int)Td[(signed long int)PA[(signed long int)*v4]] >= (signed int)Td[(signed long int)PA[(signed long int)*v3]]))
    return v4;

  else
    return v3;
}

// ss_mergebackward
// file divbwt.c line 732
static void ss_mergebackward(const unsigned char *T, const signed int *PA, signed int *first, signed int *middle, signed int *last, signed int *buf, signed int depth)
{
  const signed int *p1;
  const signed int *p2;
  signed int *a;
  signed int *b;
  signed int *c;
  signed int *bufend;
  signed int t;
  signed long int r;
  signed long int x;
  bufend = (buf + (last - middle)) - (signed long int)1;
  ss_blockswap(buf, middle, (signed int)(last - middle));
  x = (signed long int)0;
  if(!(*bufend >= 0))
  {
    p1 = PA + (signed long int)~(*bufend);
    x = x | (signed long int)1;
  }

  else
    p1 = PA + (signed long int)*bufend;
  if(!(middle[-1l] >= 0))
  {
    p2 = PA + (signed long int)~(*(middle - (signed long int)1));
    x = x | (signed long int)2;
  }

  else
    p2 = PA + (signed long int)*(middle - (signed long int)1);
  a = last - (signed long int)1;
  t = *a;
  b = bufend;
  c = middle - (signed long int)1;
  signed int *tmp_post_1;
  signed int *tmp_post_2;
  signed int *tmp_post_3;
  signed int *tmp_post_4;
  signed int *tmp_post_5;
  signed int *tmp_post_6;
  signed int *tmp_post_7;
  signed int *tmp_post_8;
  signed int *tmp_post_9;
  signed int *tmp_post_10;
  signed int *tmp_post_11;
  signed int *tmp_post_12;
  signed int *tmp_post_13;
  signed int *tmp_post_14;
  signed int *tmp_post_15;
  signed int *tmp_post_16;
  signed int *tmp_post_17;
  signed int *tmp_post_18;
  signed int *tmp_post_19;
  signed int *tmp_post_20;
  do
  {
    r=ss_compare(T, p1, p2, depth);
    if(r >= 1l)
    {
      if(!((1l & x) == 0l))
      {
        do
        {
          tmp_post_1 = a;
          a = a - 1l;
          *tmp_post_1 = *b;
          tmp_post_2 = b;
          b = b - 1l;
          *tmp_post_2 = *a;
        }
        while(!(*b >= 0));
        x = x ^ (signed long int)1;
      }

      tmp_post_3 = a;
      a = a - 1l;
      *tmp_post_3 = *b;
      if(buf >= b)
      {
        *buf = t;
        break;
      }

      tmp_post_4 = b;
      b = b - 1l;
      *tmp_post_4 = *a;
      if(!(*b >= 0))
      {
        p1 = PA + (signed long int)~(*b);
        x = x | (signed long int)1;
      }

      else
        p1 = PA + (signed long int)*b;
    }

    else
      if(!(r >= 0l))
      {
        if(!((2l & x) == 0l))
        {
          do
          {
            tmp_post_5 = a;
            a = a - 1l;
            *tmp_post_5 = *c;
            tmp_post_6 = c;
            c = c - 1l;
            *tmp_post_6 = *a;
          }
          while(!(*c >= 0));
          x = x ^ (signed long int)2;
        }

        tmp_post_7 = a;
        a = a - 1l;
        *tmp_post_7 = *c;
        tmp_post_8 = c;
        c = c - 1l;
        *tmp_post_8 = *a;
        if(!(c >= first))
        {
          for( ; !(buf >= b); *tmp_post_10 = *a)
          {
            tmp_post_9 = a;
            a = a - 1l;
            *tmp_post_9 = *b;
            tmp_post_10 = b;
            b = b - 1l;
          }
          *a = *b;
          *b = t;
          break;
        }

        if(!(*c >= 0))
        {
          p2 = PA + (signed long int)~(*c);
          x = x | (signed long int)2;
        }

        else
          p2 = PA + (signed long int)*c;
      }

      else
      {
        if(!((1l & x) == 0l))
        {
          do
          {
            tmp_post_11 = a;
            a = a - 1l;
            *tmp_post_11 = *b;
            tmp_post_12 = b;
            b = b - 1l;
            *tmp_post_12 = *a;
          }
          while(!(*b >= 0));
          x = x ^ (signed long int)1;
        }

        tmp_post_13 = a;
        a = a - 1l;
        *tmp_post_13 = ~(*b);
        if(buf >= b)
        {
          *buf = t;
          break;
        }

        tmp_post_14 = b;
        b = b - 1l;
        *tmp_post_14 = *a;
        if(!((2l & x) == 0l))
        {
          do
          {
            tmp_post_15 = a;
            a = a - 1l;
            *tmp_post_15 = *c;
            tmp_post_16 = c;
            c = c - 1l;
            *tmp_post_16 = *a;
          }
          while(!(*c >= 0));
          x = x ^ (signed long int)2;
        }

        tmp_post_17 = a;
        a = a - 1l;
        *tmp_post_17 = *c;
        tmp_post_18 = c;
        c = c - 1l;
        *tmp_post_18 = *a;
        if(!(c >= first))
        {
          for( ; !(buf >= b); *tmp_post_20 = *a)
          {
            tmp_post_19 = a;
            a = a - 1l;
            *tmp_post_19 = *b;
            tmp_post_20 = b;
            b = b - 1l;
          }
          *a = *b;
          *b = t;
          break;
        }

        if(!(*b >= 0))
        {
          p1 = PA + (signed long int)~(*b);
          x = x | (signed long int)1;
        }

        else
          p1 = PA + (signed long int)*b;
        if(!(*c >= 0))
        {
          p2 = PA + (signed long int)~(*c);
          x = x | (signed long int)2;
        }

        else
          p2 = PA + (signed long int)*c;
      }
  }
  while((_Bool)1);
}

// ss_mergeforward
// file divbwt.c line 682
static void ss_mergeforward(const unsigned char *T, const signed int *PA, signed int *first, signed int *middle, signed int *last, signed int *buf, signed int depth)
{
  signed int *a;
  signed int *b;
  signed int *c;
  signed int *bufend;
  signed int t;
  signed long int r;
  bufend = (buf + (middle - first)) - (signed long int)1;
  ss_blockswap(buf, first, (signed int)(middle - first));
  a = first;
  t = *a;
  b = buf;
  c = middle;
  signed int *tmp_post_1;
  signed int *tmp_post_2;
  signed int *tmp_post_3;
  signed int *tmp_post_4;
  signed int *tmp_post_5;
  signed int *tmp_post_6;
  signed int *tmp_post_7;
  signed int *tmp_post_8;
  signed int *tmp_post_9;
  signed int *tmp_post_10;
  signed int *tmp_post_11;
  signed int *tmp_post_12;
  do
  {
    r=ss_compare(T, PA + (signed long int)*b, PA + (signed long int)*c, depth);
    if(!(r >= 0l))
      do
      {
        tmp_post_1 = a;
        a = a + 1l;
        *tmp_post_1 = *b;
        if(b >= bufend)
        {
          *bufend = t;
          goto __CPROVER_DUMP_L17;
        }

        tmp_post_2 = b;
        b = b + 1l;
        *tmp_post_2 = *a;
      }
      while(!(*b >= 0));

    else
      if(r >= 1l)
        do
        {
          tmp_post_3 = a;
          a = a + 1l;
          *tmp_post_3 = *c;
          tmp_post_4 = c;
          c = c + 1l;
          *tmp_post_4 = *a;
          if(c >= last)
          {
            for( ; !(b >= bufend); *tmp_post_6 = *a)
            {
              tmp_post_5 = a;
              a = a + 1l;
              *tmp_post_5 = *b;
              tmp_post_6 = b;
              b = b + 1l;
            }
            *a = *b;
            *b = t;
            goto __CPROVER_DUMP_L17;
          }

        }
        while(!(*c >= 0));

      else
      {
        *c = ~(*c);
        do
        {
          tmp_post_7 = a;
          a = a + 1l;
          *tmp_post_7 = *b;
          if(b >= bufend)
          {
            *bufend = t;
            goto __CPROVER_DUMP_L17;
          }

          tmp_post_8 = b;
          b = b + 1l;
          *tmp_post_8 = *a;
        }
        while(!(*b >= 0));
        do
        {
          tmp_post_9 = a;
          a = a + 1l;
          *tmp_post_9 = *c;
          tmp_post_10 = c;
          c = c + 1l;
          *tmp_post_10 = *a;
          if(c >= last)
          {
            for( ; !(b >= bufend); *tmp_post_12 = *a)
            {
              tmp_post_11 = a;
              a = a + 1l;
              *tmp_post_11 = *b;
              tmp_post_12 = b;
              b = b + 1l;
            }
            *a = *b;
            *b = t;
            goto __CPROVER_DUMP_L17;
          }

        }
        while(!(*c >= 0));
      }
  }
  while((_Bool)1);

__CPROVER_DUMP_L17:
  ;
}

// ss_mintrosort
// file divbwt.c line 447
static void ss_mintrosort(const unsigned char *T, const signed int *PA, signed int *first, signed int *last, signed int depth)
{
  /* tag-#anon#lST[l*{S32}_S32_'a'||l*{S32}_S32_'b'||S32'c'||U32'_pad0'||S64'd'|] */
struct anonymous_26
{
  // a
  signed int *a;
  // b
  signed int *b;
  // c
  signed int c;
  // d
  signed long int d;
};

/* */
  ;
  struct anonymous_26 stack[16l];
  const unsigned char *Td;
  signed int *a;
  signed int *b;
  signed int *c;
  signed int *d;
  signed int *e;
  signed int *f;
  signed int s;
  signed int t;
  signed long int ssize;
  signed long int limit;
  signed long int v;
  signed long int x = (signed long int)0;
  ssize = (signed long int)0;
  limit=ss_ilg((signed int)(last - first));
  signed long int tmp_post_1;
  signed long int tmp_post_2;
  signed long int tmp_post_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  signed int *tmp_if_expr_11;
  signed int *return_value_ss_partition_10;
  signed long int tmp_post_12;
  signed long int tmp_post_13;
  signed long int tmp_post_14;
  signed long int tmp_post_15;
  signed long int tmp_post_16;
  signed long int tmp_post_17;
  signed long int tmp_post_18;
  signed long int tmp_post_19;
  signed long int tmp_post_20;
  signed long int tmp_post_21;
  signed long int tmp_post_22;
  signed long int tmp_post_23;
  while((_Bool)1)
    if(!(last - first >= 9l))
    {
      if(last - first >= 2l)
        ss_insertionsort(T, PA, first, last, depth);

      do
      {
        /* assertion 0 <= ssize */
        assert((signed long int)0 <= ssize);
        if(ssize == 0l)
          goto __CPROVER_DUMP_L82;

        ssize = ssize - 1l;
        first = stack[ssize].a;
        last = stack[ssize].b;
        depth = stack[ssize].c;
        limit = stack[ssize].d;
      }
      while((_Bool)0);
    }

    else
    {
      Td = T + (signed long int)depth;
      tmp_post_1 = limit;
      limit = limit - 1l;
      if(tmp_post_1 == 0l)
        ss_heapsort(Td, PA, first, (signed int)(last - first));

      if(!(limit >= 0l))
      {
        a = first + (signed long int)1;
        v = (signed long int)Td[(signed long int)PA[(signed long int)*first]];
        for( ; !(a >= last); a = a + 1l)
        {
          x = (signed long int)Td[(signed long int)PA[(signed long int)*a]];
          if(!(x == v))
          {
            if(a - first >= 2l)
              break;

            v = x;
            first = a;
          }

        }
        if(!((signed long int)Td[(signed long int)(PA[(signed long int)*first] + -1)] >= v))
          first=ss_partition(PA, first, a, depth);

        if(last - a >= a - first)
        {
          if(a - first >= 2l)
          {
            do
            {
              /* assertion ssize < (16) */
              assert(ssize < (signed long int)16);
              stack[ssize].a = a;
              stack[ssize].b = last;
              stack[ssize].c = depth;
              tmp_post_2 = ssize;
              ssize = ssize + 1l;
              stack[tmp_post_2].d = (signed long int)-1;
            }
            while((_Bool)0);
            last = a;
            depth = depth + 1;
            limit=ss_ilg((signed int)(a - first));
          }

          else
          {
            first = a;
            limit = (signed long int)-1;
          }
        }

        else
          if(last - a >= 2l)
          {
            do
            {
              /* assertion ssize < (16) */
              assert(ssize < (signed long int)16);
              stack[ssize].a = first;
              stack[ssize].b = a;
              stack[ssize].c = depth + 1;
              tmp_post_3 = ssize;
              ssize = ssize + 1l;
              stack[tmp_post_3].d=ss_ilg((signed int)(a - first));
            }
            while((_Bool)0);
            first = a;
            limit = (signed long int)-1;
          }

          else
          {
            last = a;
            depth = depth + 1;
            limit=ss_ilg((signed int)(a - first));
          }
      }

      else
      {
        a=ss_pivot(Td, PA, first, last);
        v = (signed long int)Td[(signed long int)PA[(signed long int)*a]];
        do
        {
          t = *first;
          *first = *a;
          *a = t;
        }
        while((_Bool)0);
        b = first;
        do
        {
          b = b + 1l;
          if(!(b >= last))
          {
            x = (signed long int)Td[(signed long int)PA[(signed long int)*b]];
            tmp_if_expr_4 = x == v ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_4 = (_Bool)0;
          if(!tmp_if_expr_4)
            break;

        }
        while((_Bool)1);
        a = b;
        if(!(a >= last))
        {
          if(!(x >= v))
            do
            {
              b = b + 1l;
              if(!(b >= last))
              {
                x = (signed long int)Td[(signed long int)PA[(signed long int)*b]];
                tmp_if_expr_5 = x <= v ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_5 = (_Bool)0;
              if(!tmp_if_expr_5)
                break;

              if(x == v)
              {
                do
                {
                  t = *b;
                  *b = *a;
                  *a = t;
                }
                while((_Bool)0);
                a = a + 1l;
              }

            }
            while((_Bool)1);

        }

        c = last;
        do
        {
          c = c - 1l;
          if(!(b >= c))
          {
            x = (signed long int)Td[(signed long int)PA[(signed long int)*c]];
            tmp_if_expr_6 = x == v ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_6 = (_Bool)0;
          if(!tmp_if_expr_6)
            break;

        }
        while((_Bool)1);
        d = c;
        if(!(b >= d))
        {
          if(!(v >= x))
            do
            {
              c = c - 1l;
              if(!(b >= c))
              {
                x = (signed long int)Td[(signed long int)PA[(signed long int)*c]];
                tmp_if_expr_7 = x >= v ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_7 = (_Bool)0;
              if(!tmp_if_expr_7)
                break;

              if(x == v)
              {
                do
                {
                  t = *c;
                  *c = *d;
                  *d = t;
                }
                while((_Bool)0);
                d = d - 1l;
              }

            }
            while((_Bool)1);

        }

        while(!(b >= c))
        {
          do
          {
            t = *b;
            *b = *c;
            *c = t;
          }
          while((_Bool)0);
          do
          {
            b = b + 1l;
            if(!(b >= c))
            {
              x = (signed long int)Td[(signed long int)PA[(signed long int)*b]];
              tmp_if_expr_8 = x <= v ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_8 = (_Bool)0;
            if(!tmp_if_expr_8)
              break;

            if(x == v)
            {
              do
              {
                t = *b;
                *b = *a;
                *a = t;
              }
              while((_Bool)0);
              a = a + 1l;
            }

          }
          while((_Bool)1);
          do
          {
            c = c - 1l;
            if(!(b >= c))
            {
              x = (signed long int)Td[(signed long int)PA[(signed long int)*c]];
              tmp_if_expr_9 = x >= v ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_9 = (_Bool)0;
            if(!tmp_if_expr_9)
              break;

            if(x == v)
            {
              do
              {
                t = *c;
                *c = *d;
                *d = t;
              }
              while((_Bool)0);
              d = d - 1l;
            }

          }
          while((_Bool)1);
        }
        if(d >= a)
        {
          c = b - (signed long int)1;
          s = (signed int)(a - first);
          t = (signed int)(b - a);
          if(!(t >= s))
            s = t;

          e = first;
          f = b - (signed long int)s;
          for( ; s >= 1; f = f + 1l)
          {
            do
            {
              t = *e;
              *e = *f;
              *f = t;
            }
            while((_Bool)0);
            s = s - 1;
            e = e + 1l;
          }
          s = (signed int)(d - c);
          t = (signed int)((last - d) - (signed long int)1);
          if(!(t >= s))
            s = t;

          e = b;
          f = last - (signed long int)s;
          for( ; s >= 1; f = f + 1l)
          {
            do
            {
              t = *e;
              *e = *f;
              *f = t;
            }
            while((_Bool)0);
            s = s - 1;
            e = e + 1l;
          }
          a = first + (b - a);
          c = last - (d - c);
          if((signed long int)Td[(signed long int)(PA[(signed long int)*a] + -1)] >= v)
            tmp_if_expr_11 = a;

          else
          {
            return_value_ss_partition_10=ss_partition(PA, a, c, depth);
            tmp_if_expr_11 = return_value_ss_partition_10;
          }
          b = tmp_if_expr_11;
          if(last - c >= a - first)
          {
            if(c - b >= last - c)
            {
              do
              {
                /* assertion ssize < (16) */
                assert(ssize < (signed long int)16);
                stack[ssize].a = b;
                stack[ssize].b = c;
                stack[ssize].c = depth + 1;
                tmp_post_12 = ssize;
                ssize = ssize + 1l;
                stack[tmp_post_12].d=ss_ilg((signed int)(c - b));
              }
              while((_Bool)0);
              do
              {
                /* assertion ssize < (16) */
                assert(ssize < (signed long int)16);
                stack[ssize].a = c;
                stack[ssize].b = last;
                stack[ssize].c = depth;
                tmp_post_13 = ssize;
                ssize = ssize + 1l;
                stack[tmp_post_13].d = limit;
              }
              while((_Bool)0);
              last = a;
            }

            else
              if(c - b >= a - first)
              {
                do
                {
                  /* assertion ssize < (16) */
                  assert(ssize < (signed long int)16);
                  stack[ssize].a = c;
                  stack[ssize].b = last;
                  stack[ssize].c = depth;
                  tmp_post_14 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_14].d = limit;
                }
                while((_Bool)0);
                do
                {
                  /* assertion ssize < (16) */
                  assert(ssize < (signed long int)16);
                  stack[ssize].a = b;
                  stack[ssize].b = c;
                  stack[ssize].c = depth + 1;
                  tmp_post_15 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_15].d=ss_ilg((signed int)(c - b));
                }
                while((_Bool)0);
                last = a;
              }

              else
              {
                do
                {
                  /* assertion ssize < (16) */
                  assert(ssize < (signed long int)16);
                  stack[ssize].a = c;
                  stack[ssize].b = last;
                  stack[ssize].c = depth;
                  tmp_post_16 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_16].d = limit;
                }
                while((_Bool)0);
                do
                {
                  /* assertion ssize < (16) */
                  assert(ssize < (signed long int)16);
                  stack[ssize].a = first;
                  stack[ssize].b = a;
                  stack[ssize].c = depth;
                  tmp_post_17 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_17].d = limit;
                }
                while((_Bool)0);
                first = b;
                last = c;
                depth = depth + 1;
                limit=ss_ilg((signed int)(c - b));
              }
          }

          else
            if(c - b >= a - first)
            {
              do
              {
                /* assertion ssize < (16) */
                assert(ssize < (signed long int)16);
                stack[ssize].a = b;
                stack[ssize].b = c;
                stack[ssize].c = depth + 1;
                tmp_post_18 = ssize;
                ssize = ssize + 1l;
                stack[tmp_post_18].d=ss_ilg((signed int)(c - b));
              }
              while((_Bool)0);
              do
              {
                /* assertion ssize < (16) */
                assert(ssize < (signed long int)16);
                stack[ssize].a = first;
                stack[ssize].b = a;
                stack[ssize].c = depth;
                tmp_post_19 = ssize;
                ssize = ssize + 1l;
                stack[tmp_post_19].d = limit;
              }
              while((_Bool)0);
              first = c;
            }

            else
              if(c - b >= last - c)
              {
                do
                {
                  /* assertion ssize < (16) */
                  assert(ssize < (signed long int)16);
                  stack[ssize].a = first;
                  stack[ssize].b = a;
                  stack[ssize].c = depth;
                  tmp_post_20 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_20].d = limit;
                }
                while((_Bool)0);
                do
                {
                  /* assertion ssize < (16) */
                  assert(ssize < (signed long int)16);
                  stack[ssize].a = b;
                  stack[ssize].b = c;
                  stack[ssize].c = depth + 1;
                  tmp_post_21 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_21].d=ss_ilg((signed int)(c - b));
                }
                while((_Bool)0);
                first = c;
              }

              else
              {
                do
                {
                  /* assertion ssize < (16) */
                  assert(ssize < (signed long int)16);
                  stack[ssize].a = first;
                  stack[ssize].b = a;
                  stack[ssize].c = depth;
                  tmp_post_22 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_22].d = limit;
                }
                while((_Bool)0);
                do
                {
                  /* assertion ssize < (16) */
                  assert(ssize < (signed long int)16);
                  stack[ssize].a = c;
                  stack[ssize].b = last;
                  stack[ssize].c = depth;
                  tmp_post_23 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_23].d = limit;
                }
                while((_Bool)0);
                first = b;
                last = c;
                depth = depth + 1;
                limit=ss_ilg((signed int)(c - b));
              }
        }

        else
        {
          limit = limit + (signed long int)1;
          if(!((signed long int)Td[(signed long int)(PA[(signed long int)*first] + -1)] >= v))
          {
            first=ss_partition(PA, first, last, depth);
            limit=ss_ilg((signed int)(last - first));
          }

          depth = depth + 1;
        }
      }
    }

__CPROVER_DUMP_L82:
  ;
}

// ss_partition
// file divbwt.c line 428
static signed int * ss_partition(const signed int *PA, signed int *first, signed int *last, signed int depth)
{
  signed int *a;
  signed int *b;
  signed int t;
  a = first - (signed long int)1;
  b = last;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  do
  {

  __CPROVER_DUMP_L1:
    ;
    a = a + 1l;
    if(!(a >= b))
      tmp_if_expr_1 = PA[(signed long int)*a] + depth >= PA[(signed long int)(*a + 1)] + 1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      *a = ~(*a);
      goto __CPROVER_DUMP_L1;
    }

    do
    {
      b = b - 1l;
      if(!(a >= b))
        tmp_if_expr_2 = PA[(signed long int)*b] + depth < PA[(signed long int)(*b + 1)] + 1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
        break;

    }
    while((_Bool)1);
    if(a >= b)
      break;

    t = ~(*b);
    *b = *a;
    *a = t;
  }
  while((_Bool)1);
  if(!(first >= a))
    *first = ~(*first);

  return a;
}

// ss_pivot
// file divbwt.c line 400
static signed int * ss_pivot(const unsigned char *Td, const signed int *PA, signed int *first, signed int *last)
{
  signed int *middle;
  signed int t = (signed int)(last - first);
  middle = first + (signed long int)(t / 2);
  if(!(t >= 513))
  {
    if(!(t >= 33))
    {
      signed int *return_value_ss_median3_1;
      return_value_ss_median3_1=ss_median3(Td, PA, first, middle, last - (signed long int)1);
      return return_value_ss_median3_1;
    }

    else
    {
      t = t >> 2;
      signed int *return_value_ss_median5_2;
      return_value_ss_median5_2=ss_median5(Td, PA, first, first + (signed long int)t, middle, (last - (signed long int)1) - (signed long int)t, last - (signed long int)1);
      return return_value_ss_median5_2;
    }
  }

  t = t >> 3;
  first=ss_median3(Td, PA, first, first + (signed long int)t, first + (signed long int)(t << 1));
  middle=ss_median3(Td, PA, middle - (signed long int)t, middle, middle + (signed long int)t);
  last=ss_median3(Td, PA, (last - (signed long int)1) - (signed long int)(t << 1), (last - (signed long int)1) - (signed long int)t, last - (signed long int)1);
  signed int *return_value_ss_median3_3;
  return_value_ss_median3_3=ss_median3(Td, PA, first, middle, last);
  return return_value_ss_median3_3;
}

// ss_rotate
// file divbwt.c line 598
static void ss_rotate(signed int *first, signed int *middle, signed int *last)
{
  signed int *a;
  signed int *b;
  signed int t;
  signed int l;
  signed int r;
  l = (signed int)(middle - first);
  r = (signed int)(last - middle);
  signed int *tmp_post_1;
  signed int *tmp_post_2;
  signed int *tmp_post_3;
  signed int *tmp_post_4;
  while(l >= 1 && r >= 1)
  {
    if(l == r)
    {
      ss_blockswap(first, middle, l);
      break;
    }

    if(!(l >= r))
    {
      a = last - (signed long int)1;
      b = middle - (signed long int)1;
      t = *a;
      do
      {
        tmp_post_1 = a;
        a = a - 1l;
        *tmp_post_1 = *b;
        tmp_post_2 = b;
        b = b - 1l;
        *tmp_post_2 = *a;
        if(!(b >= first))
        {
          *a = t;
          last = a;
          r = r - (l + 1);
          if(l >= r)
            break;

          a = a - (signed long int)1;
          b = middle - (signed long int)1;
          t = *a;
        }

      }
      while((_Bool)1);
    }

    else
    {
      a = first;
      b = middle;
      t = *a;
      do
      {
        tmp_post_3 = a;
        a = a + 1l;
        *tmp_post_3 = *b;
        tmp_post_4 = b;
        b = b + 1l;
        *tmp_post_4 = *a;
        if(b >= last)
        {
          *a = t;
          first = a + (signed long int)1;
          l = l - (r + 1);
          if(r >= l)
            break;

          a = a + (signed long int)1;
          b = middle;
          t = *a;
        }

      }
      while((_Bool)1);
    }
  }
}

// ss_swapmerge
// file divbwt.c line 791
static void ss_swapmerge(const unsigned char *T, const signed int *PA, signed int *first, signed int *middle, signed int *last, signed int *buf, signed int bufsize, signed int depth)
{
  /* tag-#anon#lST[l*{S32}_S32_'a'||l*{S32}_S32_'b'||l*{S32}_S32_'c'||S64'd'|] */
struct anonymous_0
{
  // a
  signed int *a;
  // b
  signed int *b;
  // c
  signed int *c;
  // d
  signed long int d;
};

/* */
  ;
  struct anonymous_0 stack[32l];
  signed int *l;
  signed int *r;
  signed int *lm;
  signed int *rm;
  signed int m;
  signed int len;
  signed int half;
  signed long int ssize;
  signed long int check;
  signed long int next;
  check = (signed long int)0;
  ssize = (signed long int)0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  signed int tmp_if_expr_1;
  signed long int return_value_ss_compare_2;
  signed int tmp_if_expr_5;
  signed long int return_value_ss_compare_6;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_9;
  signed int tmp_if_expr_7;
  signed long int return_value_ss_compare_8;
  signed int tmp_if_expr_11;
  signed long int return_value_ss_compare_12;
  signed int tmp_if_expr_13;
  signed int tmp_if_expr_14;
  signed long int tmp_post_16;
  signed long int tmp_post_17;
  signed int tmp_if_expr_18;
  _Bool tmp_if_expr_23;
  _Bool tmp_if_expr_22;
  signed int tmp_if_expr_20;
  signed long int return_value_ss_compare_21;
  signed int tmp_if_expr_24;
  signed long int return_value_ss_compare_25;
  while((_Bool)1)
    if((signed long int)bufsize >= last - middle)
    {
      if(!(first >= middle) && !(middle >= last))
        ss_mergebackward(T, PA, first, middle, last, buf, depth);

      do
      {
        if(!((1l & check) == 0l))
          tmp_if_expr_4 = (_Bool)1;

        else
        {
          if(!((2l & check) == 0l))
          {
            if(first[-1l] >= 0)
              tmp_if_expr_1 = *(first - (signed long int)1);

            else
              tmp_if_expr_1 = ~(*(first - (signed long int)1));
            return_value_ss_compare_2=ss_compare(T, PA + (signed long int)tmp_if_expr_1, PA + (signed long int)*first, depth);
            tmp_if_expr_3 = return_value_ss_compare_2 == (signed long int)0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_3 = (_Bool)0;
          tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_4)
          *first = ~(*first);

        if(!((4l & check) == 0l))
        {
          if(last[-1l] >= 0)
            tmp_if_expr_5 = *(last - (signed long int)1);

          else
            tmp_if_expr_5 = ~(*(last - (signed long int)1));
          return_value_ss_compare_6=ss_compare(T, PA + (signed long int)tmp_if_expr_5, PA + (signed long int)*last, depth);
          if(return_value_ss_compare_6 == 0l)
            *last = ~(*last);

        }

      }
      while((_Bool)0);
      do
      {
        /* assertion 0 <= ssize */
        assert((signed long int)0 <= ssize);
        if(ssize == 0l)
          goto __CPROVER_DUMP_L65;

        ssize = ssize - 1l;
        first = stack[ssize].a;
        middle = stack[ssize].b;
        last = stack[ssize].c;
        check = stack[ssize].d;
      }
      while((_Bool)0);
    }

    else
      if((signed long int)bufsize >= middle - first)
      {
        if(!(first >= middle))
          ss_mergeforward(T, PA, first, middle, last, buf, depth);

        do
        {
          if(!((1l & check) == 0l))
            tmp_if_expr_10 = (_Bool)1;

          else
          {
            if(!((2l & check) == 0l))
            {
              if(first[-1l] >= 0)
                tmp_if_expr_7 = *(first - (signed long int)1);

              else
                tmp_if_expr_7 = ~(*(first - (signed long int)1));
              return_value_ss_compare_8=ss_compare(T, PA + (signed long int)tmp_if_expr_7, PA + (signed long int)*first, depth);
              tmp_if_expr_9 = return_value_ss_compare_8 == (signed long int)0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_9 = (_Bool)0;
            tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_10)
            *first = ~(*first);

          if(!((4l & check) == 0l))
          {
            if(last[-1l] >= 0)
              tmp_if_expr_11 = *(last - (signed long int)1);

            else
              tmp_if_expr_11 = ~(*(last - (signed long int)1));
            return_value_ss_compare_12=ss_compare(T, PA + (signed long int)tmp_if_expr_11, PA + (signed long int)*last, depth);
            if(return_value_ss_compare_12 == 0l)
              *last = ~(*last);

          }

        }
        while((_Bool)0);
        do
        {
          /* assertion 0 <= ssize */
          assert((signed long int)0 <= ssize);
          if(ssize == 0l)
            goto __CPROVER_DUMP_L65;

          ssize = ssize - 1l;
          first = stack[ssize].a;
          middle = stack[ssize].b;
          last = stack[ssize].c;
          check = stack[ssize].d;
        }
        while((_Bool)0);
      }

      else
      {
        m = 0;
        len = (signed int)(middle - first < last - middle ? middle - first : last - middle);
        half = len >> 1;
        for( ; len >= 1; half = half >> 1)
        {
          if(middle[(signed long int)m + (signed long int)half] >= 0)
            tmp_if_expr_13 = (middle + (signed long int)m)[(signed long int)half];

          else
            tmp_if_expr_13 = ~(middle + (signed long int)m)[(signed long int)half];
          if(middle[-((signed long int)m) + -((signed long int)half) + -1l] >= 0)
            tmp_if_expr_14 = *(((middle - (signed long int)m) - (signed long int)half) - (signed long int)1);

          else
            tmp_if_expr_14 = ~(*(((middle - (signed long int)m) - (signed long int)half) - (signed long int)1));
          signed long int return_value_ss_compare_15;
          return_value_ss_compare_15=ss_compare(T, PA + (signed long int)tmp_if_expr_13, PA + (signed long int)tmp_if_expr_14, depth);
          if(!(return_value_ss_compare_15 >= 0l))
          {
            m = m + half + 1;
            half = half - (len & 1 ^ 1);
          }

          len = half;
        }
        if(m >= 1)
        {
          lm = middle - (signed long int)m;
          rm = middle + (signed long int)m;
          ss_blockswap(lm, middle, m);
          r = middle;
          l = r;
          next = (signed long int)0;
          if(!(rm >= last))
          {
            if(!(*rm >= 0))
            {
              *rm = ~(*rm);
              if(!(first >= lm))
              {
                do
                {
                  l = l - 1l;
                  if(*l >= 0)
                    break;

                }
                while((_Bool)1);
                next = next | (signed long int)4;
              }

              next = next | (signed long int)1;
            }

            else
              if(!(first >= lm))
              {
                for( ; !(*r >= 0); r = r + 1l)
                  ;
                next = next | (signed long int)2;
              }

          }

          if(last - r >= l - first)
          {
            do
            {
              /* assertion ssize < (32) */
              assert(ssize < (signed long int)32);
              stack[ssize].a = r;
              stack[ssize].b = rm;
              stack[ssize].c = last;
              tmp_post_16 = ssize;
              ssize = ssize + 1l;
              stack[tmp_post_16].d = next & (signed long int)3 | check & (signed long int)4;
            }
            while((_Bool)0);
            middle = lm;
            last = l;
            check = check & (signed long int)3 | next & (signed long int)4;
          }

          else
          {
            if(r == middle && !((2l & next) == 0l))
              next = next ^ (signed long int)6;

            do
            {
              /* assertion ssize < (32) */
              assert(ssize < (signed long int)32);
              stack[ssize].a = first;
              stack[ssize].b = lm;
              stack[ssize].c = l;
              tmp_post_17 = ssize;
              ssize = ssize + 1l;
              stack[tmp_post_17].d = check & (signed long int)3 | next & (signed long int)4;
            }
            while((_Bool)0);
            first = r;
            middle = rm;
            check = next & (signed long int)3 | check & (signed long int)4;
          }
        }

        else
        {
          if(middle[-1l] >= 0)
            tmp_if_expr_18 = *(middle - (signed long int)1);

          else
            tmp_if_expr_18 = ~(*(middle - (signed long int)1));
          signed long int return_value_ss_compare_19;
          return_value_ss_compare_19=ss_compare(T, PA + (signed long int)tmp_if_expr_18, PA + (signed long int)*middle, depth);
          if(return_value_ss_compare_19 == 0l)
            *middle = ~(*middle);

          do
          {
            if(!((1l & check) == 0l))
              tmp_if_expr_23 = (_Bool)1;

            else
            {
              if(!((2l & check) == 0l))
              {
                if(first[-1l] >= 0)
                  tmp_if_expr_20 = *(first - (signed long int)1);

                else
                  tmp_if_expr_20 = ~(*(first - (signed long int)1));
                return_value_ss_compare_21=ss_compare(T, PA + (signed long int)tmp_if_expr_20, PA + (signed long int)*first, depth);
                tmp_if_expr_22 = return_value_ss_compare_21 == (signed long int)0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_22 = (_Bool)0;
              tmp_if_expr_23 = tmp_if_expr_22 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_23)
              *first = ~(*first);

            if(!((4l & check) == 0l))
            {
              if(last[-1l] >= 0)
                tmp_if_expr_24 = *(last - (signed long int)1);

              else
                tmp_if_expr_24 = ~(*(last - (signed long int)1));
              return_value_ss_compare_25=ss_compare(T, PA + (signed long int)tmp_if_expr_24, PA + (signed long int)*last, depth);
              if(return_value_ss_compare_25 == 0l)
                *last = ~(*last);

            }

          }
          while((_Bool)0);
          do
          {
            /* assertion 0 <= ssize */
            assert((signed long int)0 <= ssize);
            if(ssize == 0l)
              goto __CPROVER_DUMP_L65;

            ssize = ssize - 1l;
            first = stack[ssize].a;
            middle = stack[ssize].b;
            last = stack[ssize].c;
            check = stack[ssize].d;
          }
          while((_Bool)0);
        }
      }

__CPROVER_DUMP_L65:
  ;
}

// sssort
// file divbwt.c line 885
static void sssort(const unsigned char *T, const signed int *PA, signed int *first, signed int *last, signed int *buf, signed int bufsize, signed int depth, signed int n, signed long int lastsuffix)
{
  signed int *a;
  signed int *b;
  signed int *middle;
  signed int *curbuf;
  signed int j;
  signed int k;
  signed int curbufsize;
  signed int limit;
  signed int i;
  if(!(lastsuffix == 0l))
    first = first + 1l;

  _Bool tmp_if_expr_1;
  if(!(bufsize >= 1024) && !((signed long int)bufsize >= last - first))
  {
    limit=ss_isqrt((signed int)(last - first));
    tmp_if_expr_1 = bufsize < limit ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
  {
    if(limit >= 1025)
      limit = 1024;

    middle = last - (signed long int)limit;
    buf = middle;
    bufsize = limit;
  }

  else
  {
    middle = last;
    limit = 0;
  }
  a = first;
  i = 0;
  for( ; middle - a >= 1025l; i = i + 1)
  {
    ss_mintrosort(T, PA, a, a + (signed long int)1024, depth);
    curbufsize = (signed int)(last - (a + (signed long int)1024));
    curbuf = a + (signed long int)1024;
    if(bufsize >= curbufsize)
    {
      curbufsize = bufsize;
      curbuf = buf;
    }

    b = a;
    k = 1024;
    j = i;
    for( ; !((1 & j) == 0); j = j >> 1)
    {
      ss_swapmerge(T, PA, b - (signed long int)k, b, b + (signed long int)k, curbuf, curbufsize, depth);
      b = b - (signed long int)k;
      k = k << 1;
    }
    a = a + (signed long int)1024;
  }
  ss_mintrosort(T, PA, a, middle, depth);
  k = 1024;
  for( ; !(i == 0); i = i >> 1)
  {
    if(!((1 & i) == 0))
    {
      ss_swapmerge(T, PA, a - (signed long int)k, a, middle, buf, bufsize, depth);
      a = a - (signed long int)k;
    }

    k = k << 1;
  }
  if(!(limit == 0))
  {
    ss_mintrosort(T, PA, middle, last, depth);
    ss_inplacemerge(T, PA, first, middle, last, depth);
  }

  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(!(lastsuffix == 0l))
  {
    signed long int r;
    a = first;
    i = *(first - (signed long int)1);
    r = (signed long int)1;
    do
    {
      if(!(a >= last))
      {
        if(!(*a >= 0))
          tmp_if_expr_2 = (_Bool)1;

        else
        {
          r=ss_compare_last(T, PA, PA + (signed long int)i, PA + (signed long int)*a, depth, n);
          tmp_if_expr_2 = (signed long int)0 < r ? (_Bool)1 : (_Bool)0;
        }
        tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_3 = (_Bool)0;
      if(!tmp_if_expr_3)
        break;

      *(a - (signed long int)1) = *a;
      a = a + 1l;
    }
    while((_Bool)1);
    if(r == 0l)
      *a = ~(*a);

    *(a - (signed long int)1) = i;
  }

}

// sti
// file signals.h line 24
void sti(void)
{
  const signed int *sig = handled_signals;
  for( ; !(sig >= handled_signals + 4l); sig = sig + 1l)
    xaction(*sig, (void (*)(signed int))0);
  xmask(1, &handled, (struct anonymous_11 *)(void *)0);
}

// suffix_xform
// file main.c line 656
static signed int suffix_xform(const char *compr_pathname, char **decompr_pathname)
{
  unsigned long int len;
  unsigned long int ofs;
  len=strlen(compr_pathname);
  ofs = (unsigned long int)0u;
  for( ; !(ofs >= 5ul); ofs = ofs + 1ul)
    if(!(suffix[(signed long int)ofs].chk_compr == 0) || !(decompr_pathname == ((char **)NULL)))
    {
      if(len >= suffix[(signed long int)ofs].compr_len)
      {
        unsigned long int prefix_len = len - suffix[(signed long int)ofs].compr_len;
        signed int return_value_strcmp_2;
        return_value_strcmp_2=strcmp(compr_pathname + (signed long int)prefix_len, suffix[(signed long int)ofs].compr);
        if(return_value_strcmp_2 == 0)
        {
          if(!(decompr_pathname == ((char **)NULL)))
          {
            if(!(18446744073709551615UL + -prefix_len >= 1ul + suffix[(signed long int)ofs].decompr_len))
              fail("\"%s\": size_t overflow in dpn_alloc\n", compr_pathname);

            void *return_value_xmalloc_1;
            return_value_xmalloc_1=xmalloc(prefix_len + suffix[(signed long int)ofs].decompr_len + (unsigned long int)1u);
            *decompr_pathname = (char *)return_value_xmalloc_1;
            memcpy((void *)*decompr_pathname, (const void *)compr_pathname, prefix_len);
            strcpy(*decompr_pathname + (signed long int)prefix_len, suffix[(signed long int)ofs].decompr);
          }

          return 1;
        }

      }

    }

  /* assertion 0 == decompr_pathname */
  assert(((char **)NULL) == decompr_pathname);
  return 0;
}

// terminate
// file signals.c line 192
static void terminate(signed int sig)
{
  struct anonymous_11 set;
  xaction(sig, (void (*)(signed int))0);
  xraise(sig);
  xempty(&set);
  xadd(&set, sig);
  xmask(1, &set, (struct anonymous_11 *)(void *)0);
  _exit(1);
}

// thread_entry
// file process.c line 80
static void * thread_entry(void *real_entry)
{
  ((void (*)(void))real_entry)();
  return (void *)0;
}

// timespec_add
// file ../lib/timespec.h line 93
struct timespec timespec_add(struct timespec a, struct timespec b)
{
  signed long int rs = a.tv_sec;
  signed long int bs = b.tv_sec;
  signed int ns = (signed int)(a.tv_nsec + b.tv_nsec);
  signed int nsd = ns - 1000000000;
  signed int rns = ns;
  if(nsd >= 0)
  {
    rns = nsd;
    if(rs == 9223372036854775807l)
    {
      if(bs >= 0l)
        goto high_overflow;

      bs = bs + 1l;
    }

    else
      rs = rs + 1l;
  }

  if(bs >= 0l ? !(9223372036854775807l + -bs >= rs) : !(rs >= -9223372036854775808l + -bs))
  {
    if(!(rs >= 0l))
    {
      rs = (signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)0 : ((signed long int)~((signed long int)0) < (signed long int)-1 ? ~((signed long int)0) : ~((signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)-1 : (((signed long int)1 << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)2) - (signed long int)1) * (signed long int)2 + (signed long int)1))));
      rns = 0;
    }

    else
    {

    high_overflow:
      ;
      rs = (signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)-1 : (((signed long int)1 << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)2) - (signed long int)1) * (signed long int)2 + (signed long int)1);
      rns = 1000000000 - 1;
    }
  }

  else
    rs = rs + bs;
  struct timespec return_value_make_timespec_1;
  return_value_make_timespec_1=make_timespec(rs, (signed long int)rns);
  return return_value_make_timespec_1;
}

// timespec_cmp
// file ../lib/timespec.h line 78
inline signed int timespec_cmp(struct timespec a, struct timespec b)
{
  return a.tv_sec < b.tv_sec ? -1 : (a.tv_sec > b.tv_sec ? 1 : (signed int)(a.tv_nsec - b.tv_nsec));
}

// timespec_sign
// file ../lib/timespec.h line 88
inline signed int timespec_sign(struct timespec a)
{
  return a.tv_sec < (signed long int)0 ? -1 : (signed int)(a.tv_sec != 0l || a.tv_nsec != 0l);
}

// timespec_sub
// file ../lib/timespec.h line 95
struct timespec timespec_sub(struct timespec a, struct timespec b)
{
  signed long int rs = a.tv_sec;
  signed long int bs = b.tv_sec;
  signed int ns = (signed int)(a.tv_nsec - b.tv_nsec);
  signed int rns = ns;
  if(!(ns >= 0))
  {
    rns = ns + 1000000000;
    if(rs == -9223372036854775808l)
    {
      if(!(bs >= 1l))
        goto low_overflow;

      bs = bs - 1l;
    }

    else
      rs = rs - 1l;
  }

  if(bs >= 0l ? !(rs >= -9223372036854775808l + bs) : !(9223372036854775807l + bs >= rs))
  {
    if(!(rs >= 0l))
    {

    low_overflow:
      ;
      rs = (signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)0 : ((signed long int)~((signed long int)0) < (signed long int)-1 ? ~((signed long int)0) : ~((signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)-1 : (((signed long int)1 << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)2) - (signed long int)1) * (signed long int)2 + (signed long int)1))));
      rns = 0;
    }

    else
    {
      rs = (signed long int)(!(!((signed long int)0 < (signed long int)-1)) ? (signed long int)-1 : (((signed long int)1 << sizeof(signed long int) /*8ul*/  * (unsigned long int)8 - (unsigned long int)2) - (signed long int)1) * (signed long int)2 + (signed long int)1);
      rns = 1000000000 - 1;
    }
  }

  else
    rs = rs - bs;
  struct timespec return_value_make_timespec_1;
  return_value_make_timespec_1=make_timespec(rs, (signed long int)rns);
  return return_value_make_timespec_1;
}

// timespectod
// file ../lib/timespec.h line 102
inline double timespectod(struct timespec a)
{
  return (double)a.tv_sec + (double)a.tv_nsec / 1e9;
}

// tr_copy
// file divbwt.c line 1188
static void tr_copy(signed int *ISA, const signed int *ISAn, const signed int *SA, signed int *first, signed int *a, signed int *b, signed int *last, signed int depth)
{
  signed int *c;
  signed int *d;
  signed int *e;
  signed int s;
  signed int v = (signed int)((b - SA) - (signed long int)1);
  c = first;
  d = a - (signed long int)1;
  for( ; d >= c; c = c + 1l)
  {
    s = *c - depth;
    if(!(s >= 0))
      s = s + (signed int)(ISAn - ISA);

    if(ISA[(signed long int)s] == v)
    {
      d = d + 1l;
      *d = s;
      ISA[(signed long int)s] = (signed int)(d - SA);
    }

  }
  c = last - (signed long int)1;
  e = d + (signed long int)1;
  d = b;
  for( ; !(e >= d); c = c - 1l)
  {
    s = *c - depth;
    if(!(s >= 0))
      s = s + (signed int)(ISAn - ISA);

    if(ISA[(signed long int)s] == v)
    {
      d = d - 1l;
      *d = s;
      ISA[(signed long int)s] = (signed int)(d - SA);
    }

  }
}

// tr_fixdown
// file divbwt.c line 1017
static void tr_fixdown(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *SA, signed int i, signed int size)
{
  signed int j;
  signed int k;
  signed int v;
  signed int c;
  signed int d;
  signed int e;
  v = SA[(signed long int)i];
  signed int tmp_if_expr_1;
  if(!((signed long int)v >= ISAn - ISAd))
    tmp_if_expr_1 = ISAd[(signed long int)v];

  else
    tmp_if_expr_1 = ISA[((ISAd - ISA) + (signed long int)v) % (ISAn - ISA)];
  c = tmp_if_expr_1;
  signed int tmp_post_2;
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  do
  {
    j = 2 * i + 1;
    if(j >= size)
      break;

    tmp_post_2 = j;
    j = j + 1;
    k = tmp_post_2;
    if(!((signed long int)SA[(signed long int)k] >= ISAn - ISAd))
      tmp_if_expr_3 = ISAd[(signed long int)SA[(signed long int)k]];

    else
      tmp_if_expr_3 = ISA[((ISAd - ISA) + (signed long int)SA[(signed long int)k]) % (ISAn - ISA)];
    d = tmp_if_expr_3;
    if(!((signed long int)SA[(signed long int)j] >= ISAn - ISAd))
      tmp_if_expr_4 = ISAd[(signed long int)SA[(signed long int)j]];

    else
      tmp_if_expr_4 = ISA[((ISAd - ISA) + (signed long int)SA[(signed long int)j]) % (ISAn - ISA)];
    e = tmp_if_expr_4;
    if(!(d >= e))
    {
      k = j;
      d = e;
    }

    if(c >= d)
      break;

    SA[(signed long int)i] = SA[(signed long int)k];
    i = k;
  }
  while((_Bool)1);
  SA[(signed long int)i] = v;
}

// tr_heapsort
// file divbwt.c line 1035
static void tr_heapsort(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *SA, signed int size)
{
  signed int i;
  signed int m;
  signed int t;
  m = size;
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_2;
  if(size % 2 == 0)
  {
    m = m - 1;
    if(!((signed long int)SA[(signed long int)(m / 2)] >= ISAn - ISAd))
      tmp_if_expr_1 = ISAd[(signed long int)SA[(signed long int)(m / 2)]];

    else
      tmp_if_expr_1 = ISA[((ISAd - ISA) + (signed long int)SA[(signed long int)(m / 2)]) % (ISAn - ISA)];
    if(!((signed long int)SA[(signed long int)m] >= ISAn - ISAd))
      tmp_if_expr_2 = ISAd[(signed long int)SA[(signed long int)m]];

    else
      tmp_if_expr_2 = ISA[((ISAd - ISA) + (signed long int)SA[(signed long int)m]) % (ISAn - ISA)];
    if(!(tmp_if_expr_1 >= tmp_if_expr_2))
      do
      {
        t = SA[(signed long int)m];
        SA[(signed long int)m] = SA[(signed long int)(m / 2)];
        SA[(signed long int)(m / 2)] = t;
      }
      while((_Bool)0);

  }

  i = m / 2 - 1;
  for( ; i >= 0; i = i - 1)
    tr_fixdown(ISA, ISAd, ISAn, SA, i, m);
  if(size % 2 == 0)
  {
    do
    {
      t = SA[(signed long int)0];
      SA[(signed long int)0] = SA[(signed long int)m];
      SA[(signed long int)m] = t;
    }
    while((_Bool)0);
    tr_fixdown(ISA, ISAd, ISAn, SA, 0, m);
  }

  i = m - 1;
  for( ; i >= 1; i = i - 1)
  {
    t = SA[(signed long int)0];
    SA[(signed long int)0] = SA[(signed long int)i];
    tr_fixdown(ISA, ISAd, ISAn, SA, 0, i);
    SA[(signed long int)i] = t;
  }
}

// tr_ilg
// file divbwt.c line 963
static signed long int tr_ilg(signed int n)
{
  signed long int tmp_if_expr_3;
  signed long int tmp_if_expr_1;
  signed long int tmp_if_expr_2;
  if(!((0xffff0000 & (unsigned int)n) == 0u))
  {
    if(!((0xff000000 & (unsigned int)n) == 0u))
      tmp_if_expr_1 = (signed long int)24 + lg_table[(signed long int)(n >> 24 & 0xff)];

    else
      tmp_if_expr_1 = (signed long int)16 + lg_table[(signed long int)(n >> 16 & 0xff)];
    tmp_if_expr_3 = tmp_if_expr_1;
  }

  else
  {
    if(!((0x0000ff00 & n) == 0))
      tmp_if_expr_2 = (signed long int)8 + lg_table[(signed long int)(n >> 8 & 0xff)];

    else
      tmp_if_expr_2 = (signed long int)0 + lg_table[(signed long int)(n >> 0 & 0xff)];
    tmp_if_expr_3 = tmp_if_expr_2;
  }
  return tmp_if_expr_3;
}

// tr_insertionsort
// file divbwt.c line 997
static void tr_insertionsort(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *first, signed int *last)
{
  signed int *a;
  signed int *b;
  signed int t;
  signed int r;
  a = first + (signed long int)1;
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  for( ; !(a >= last); a = a + 1l)
  {
    t = *a;
    b = a - (signed long int)1;
    do
    {
      if(!((signed long int)t >= ISAn - ISAd))
        tmp_if_expr_1 = ISAd[(signed long int)t];

      else
        tmp_if_expr_1 = ISA[((ISAd - ISA) + (signed long int)t) % (ISAn - ISA)];
      if(!((signed long int)*b >= ISAn - ISAd))
        tmp_if_expr_2 = ISAd[(signed long int)*b];

      else
        tmp_if_expr_2 = ISA[((ISAd - ISA) + (signed long int)*b) % (ISAn - ISA)];
      r = tmp_if_expr_1 - tmp_if_expr_2;
      if(r >= 0)
        break;

      do
      {
        b[(signed long int)1] = *b;
        b = b - 1l;
        if(b >= first)
          tmp_if_expr_3 = *b < 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
      }
      while(tmp_if_expr_3);
      if(!(b >= first))
        break;

    }
    while((_Bool)1);
    if(r == 0)
      *b = ~(*b);

    b[(signed long int)1] = t;
  }
}

// tr_introsort
// file divbwt.c line 1257
static void tr_introsort(signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *SA, signed int *first, signed int *last, struct _trbudget_t *budget)
{
  /* tag-#anon#lST[l*{cS32}_cS32_'a'||l*{S32}_S32_'b'||l*{S32}_S32_'c'||S64'd'||S64'e'|] */
struct anonymous_5
{
  // a
  const signed int *a;
  // b
  signed int *b;
  // c
  signed int *c;
  // d
  signed long int d;
  // e
  signed long int e;
};

/* */
  ;
  struct anonymous_5 stack[64l];
  signed int *a;
  signed int *b;
  signed int *c;
  signed int t;
  signed int v;
  signed int x = 0;
  signed int incr = (signed int)(ISAd - ISA);
  signed long int limit;
  signed long int next;
  signed long int ssize;
  signed long int trlink = (signed long int)-1;
  ssize = (signed long int)0;
  limit=tr_ilg((signed int)(last - first));
  signed long int tmp_post_1;
  signed long int tmp_post_2;
  signed long int tmp_post_3;
  signed long int tmp_post_4;
  _Bool tmp_if_expr_5;
  signed long int tmp_if_expr_9;
  signed int tmp_if_expr_6;
  signed long int tmp_if_expr_8;
  signed long int return_value_tr_ilg_7;
  signed long int tmp_post_10;
  signed long int tmp_post_11;
  signed long int tmp_post_16;
  signed int tmp_if_expr_13;
  _Bool tmp_if_expr_15;
  signed int tmp_if_expr_14;
  signed int tmp_if_expr_17;
  signed long int tmp_if_expr_20;
  signed long int tmp_if_expr_19;
  signed long int return_value_tr_ilg_18;
  _Bool tmp_if_expr_40;
  signed long int return_value_trbudget_check_39;
  signed long int tmp_post_21;
  signed long int tmp_post_22;
  signed long int tmp_post_23;
  signed long int tmp_post_24;
  signed long int tmp_post_25;
  signed long int tmp_post_26;
  signed long int tmp_post_27;
  signed long int tmp_post_28;
  signed long int tmp_post_29;
  signed long int tmp_post_30;
  signed long int tmp_post_31;
  signed long int tmp_post_32;
  signed long int tmp_post_33;
  signed long int tmp_post_34;
  signed long int tmp_post_35;
  signed long int tmp_post_36;
  signed long int tmp_post_37;
  signed long int tmp_post_38;
  signed long int tmp_if_expr_42;
  signed int tmp_if_expr_41;
  do
  {
    /* assertion (ISAd < ISAn) || (limit == -3) */
    assert(ISAd < ISAn || limit == (signed long int)-3);
    if(!(limit >= 0l))
    {
      if(limit == -1l)
      {
        tr_partition(ISA, ISAd - (signed long int)incr, ISAn, first, first, last, &a, &b, (signed int)((last - SA) - (signed long int)1));
        if(!(a >= last))
        {
          c = first;
          v = (signed int)((a - SA) - (signed long int)1);
          for( ; !(c >= a); c = c + 1l)
            ISA[(signed long int)*c] = v;
        }

        if(!(b >= last))
        {
          c = a;
          v = (signed int)((b - SA) - (signed long int)1);
          for( ; !(c >= b); c = c + 1l)
            ISA[(signed long int)*c] = v;
        }

        if(b - a >= 2l)
        {
          do
          {
            /* assertion ssize < (64) */
            assert(ssize < (signed long int)64);
            stack[ssize].a = (const signed int *)(void *)0;
            stack[ssize].b = a;
            stack[ssize].c = b;
            stack[ssize].d = (signed long int)0;
            tmp_post_1 = ssize;
            ssize = ssize + 1l;
            stack[tmp_post_1].e = (signed long int)0;
          }
          while((_Bool)0);
          do
          {
            /* assertion ssize < (64) */
            assert(ssize < (signed long int)64);
            stack[ssize].a = ISAd - (signed long int)incr;
            stack[ssize].b = first;
            stack[ssize].c = last;
            stack[ssize].d = (signed long int)-2;
            tmp_post_2 = ssize;
            ssize = ssize + 1l;
            stack[tmp_post_2].e = trlink;
          }
          while((_Bool)0);
          trlink = ssize - (signed long int)2;
        }

        if(last - b >= a - first)
        {
          if(a - first >= 2l)
          {
            do
            {
              /* assertion ssize < (64) */
              assert(ssize < (signed long int)64);
              stack[ssize].a = ISAd;
              stack[ssize].b = b;
              stack[ssize].c = last;
              stack[ssize].d=tr_ilg((signed int)(last - b));
              tmp_post_3 = ssize;
              ssize = ssize + 1l;
              stack[tmp_post_3].e = trlink;
            }
            while((_Bool)0);
            last = a;
            limit=tr_ilg((signed int)(a - first));
          }

          else
            if(last - b >= 2l)
            {
              first = b;
              limit=tr_ilg((signed int)(last - b));
            }

            else
              do
              {
                /* assertion 0 <= ssize */
                assert((signed long int)0 <= ssize);
                if(ssize == 0l)
                  goto __CPROVER_DUMP_L130;

                ssize = ssize - 1l;
                ISAd = stack[ssize].a;
                first = stack[ssize].b;
                last = stack[ssize].c;
                limit = stack[ssize].d;
                trlink = stack[ssize].e;
              }
              while((_Bool)0);
        }

        else
          if(last - b >= 2l)
          {
            do
            {
              /* assertion ssize < (64) */
              assert(ssize < (signed long int)64);
              stack[ssize].a = ISAd;
              stack[ssize].b = first;
              stack[ssize].c = a;
              stack[ssize].d=tr_ilg((signed int)(a - first));
              tmp_post_4 = ssize;
              ssize = ssize + 1l;
              stack[tmp_post_4].e = trlink;
            }
            while((_Bool)0);
            first = b;
            limit=tr_ilg((signed int)(last - b));
          }

          else
            if(a - first >= 2l)
            {
              last = a;
              limit=tr_ilg((signed int)(a - first));
            }

            else
              do
              {
                /* assertion 0 <= ssize */
                assert((signed long int)0 <= ssize);
                if(ssize == 0l)
                  goto __CPROVER_DUMP_L130;

                ssize = ssize - 1l;
                ISAd = stack[ssize].a;
                first = stack[ssize].b;
                last = stack[ssize].c;
                limit = stack[ssize].d;
                trlink = stack[ssize].e;
              }
              while((_Bool)0);
      }

      else
        if(limit == -2l)
        {
          ssize = ssize - 1l;
          a = stack[ssize].b;
          b = stack[ssize].c;
          if(stack[ssize].d == 0l)
            tr_copy(ISA, ISAn, SA, first, a, b, last, (signed int)(ISAd - ISA));

          else
          {
            if(trlink >= 0l)
              stack[trlink].d = (signed long int)-1;

            tr_partialcopy(ISA, ISAn, SA, first, a, b, last, (signed int)(ISAd - ISA));
          }
          do
          {
            /* assertion 0 <= ssize */
            assert((signed long int)0 <= ssize);
            if(ssize == 0l)
              goto __CPROVER_DUMP_L130;

            ssize = ssize - 1l;
            ISAd = stack[ssize].a;
            first = stack[ssize].b;
            last = stack[ssize].c;
            limit = stack[ssize].d;
            trlink = stack[ssize].e;
          }
          while((_Bool)0);
        }

        else
        {
          if(*first >= 0)
          {
            a = first;
            do
            {
              ISA[(signed long int)*a] = (signed int)(a - SA);
              a = a + 1l;
              if(!(a >= last))
                tmp_if_expr_5 = 0 <= *a ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_5 = (_Bool)0;
            }
            while(tmp_if_expr_5);
            first = a;
          }

          if(!(first >= last))
          {
            a = first;
            do
            {
              *a = ~(*a);
              a = a + 1l;
            }
            while(!(*a >= 0));
            if(!((signed long int)incr >= ISAn - ISAd))
            {
              if(!((signed long int)*a >= ISAn - ISAd))
                tmp_if_expr_6 = ISAd[(signed long int)*a];

              else
                tmp_if_expr_6 = ISA[((ISAd - ISA) + (signed long int)*a) % (ISAn - ISA)];
              if(!(ISA[(signed long int)*a] == tmp_if_expr_6))
              {
                return_value_tr_ilg_7=tr_ilg((signed int)((a - first) + (signed long int)1));
                tmp_if_expr_8 = return_value_tr_ilg_7;
              }

              else
                tmp_if_expr_8 = (signed long int)-1;
              tmp_if_expr_9 = tmp_if_expr_8;
            }

            else
              tmp_if_expr_9 = (signed long int)-3;
            next = tmp_if_expr_9;
            a = a + 1l;
            if(!(a >= last))
            {
              b = first;
              v = (signed int)((a - SA) - (signed long int)1);
              for( ; !(b >= a); b = b + 1l)
                ISA[(signed long int)*b] = v;
            }

            signed long int return_value_trbudget_check_12;
            return_value_trbudget_check_12=trbudget_check(budget, (signed int)(a - first));
            if(!(return_value_trbudget_check_12 == 0l))
            {
              if(last - a >= a - first)
              {
                do
                {
                  /* assertion ssize < (64) */
                  assert(ssize < (signed long int)64);
                  stack[ssize].a = ISAd;
                  stack[ssize].b = a;
                  stack[ssize].c = last;
                  stack[ssize].d = (signed long int)-3;
                  tmp_post_10 = ssize;
                  ssize = ssize + 1l;
                  stack[tmp_post_10].e = trlink;
                }
                while((_Bool)0);
                ISAd = ISAd + (signed long int)incr;
                last = a;
                limit = next;
              }

              else
                if(last - a >= 2l)
                {
                  do
                  {
                    /* assertion ssize < (64) */
                    assert(ssize < (signed long int)64);
                    stack[ssize].a = ISAd + (signed long int)incr;
                    stack[ssize].b = first;
                    stack[ssize].c = a;
                    stack[ssize].d = next;
                    tmp_post_11 = ssize;
                    ssize = ssize + 1l;
                    stack[tmp_post_11].e = trlink;
                  }
                  while((_Bool)0);
                  first = a;
                  limit = (signed long int)-3;
                }

                else
                {
                  ISAd = ISAd + (signed long int)incr;
                  last = a;
                  limit = next;
                }
            }

            else
            {
              if(trlink >= 0l)
                stack[trlink].d = (signed long int)-1;

              if(last - a >= 2l)
              {
                first = a;
                limit = (signed long int)-3;
              }

              else
                do
                {
                  /* assertion 0 <= ssize */
                  assert((signed long int)0 <= ssize);
                  if(ssize == 0l)
                    goto __CPROVER_DUMP_L130;

                  ssize = ssize - 1l;
                  ISAd = stack[ssize].a;
                  first = stack[ssize].b;
                  last = stack[ssize].c;
                  limit = stack[ssize].d;
                  trlink = stack[ssize].e;
                }
                while((_Bool)0);
            }
          }

          else
            do
            {
              /* assertion 0 <= ssize */
              assert((signed long int)0 <= ssize);
              if(ssize == 0l)
                goto __CPROVER_DUMP_L130;

              ssize = ssize - 1l;
              ISAd = stack[ssize].a;
              first = stack[ssize].b;
              last = stack[ssize].c;
              limit = stack[ssize].d;
              trlink = stack[ssize].e;
            }
            while((_Bool)0);
        }
    }

    else
      if(!(last - first >= 9l))
      {
        tr_insertionsort(ISA, ISAd, ISAn, first, last);
        limit = (signed long int)-3;
      }

      else
      {
        tmp_post_16 = limit;
        limit = limit - 1l;
        if(tmp_post_16 == 0l)
        {
          tr_heapsort(ISA, ISAd, ISAn, first, (signed int)(last - first));
          a = last - (signed long int)1;
          for( ; !(first >= a); a = b)
          {
            if(!((signed long int)*a >= ISAn - ISAd))
              tmp_if_expr_13 = ISAd[(signed long int)*a];

            else
              tmp_if_expr_13 = ISA[((ISAd - ISA) + (signed long int)*a) % (ISAn - ISA)];
            x = tmp_if_expr_13;
            b = a - (signed long int)1;
            do
            {
              if(b >= first)
              {
                if(!((signed long int)*b >= ISAn - ISAd))
                  tmp_if_expr_14 = ISAd[(signed long int)*b];

                else
                  tmp_if_expr_14 = ISA[((ISAd - ISA) + (signed long int)*b) % (ISAn - ISA)];
                tmp_if_expr_15 = tmp_if_expr_14 == x ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_15 = (_Bool)0;
              if(!tmp_if_expr_15)
                break;

              *b = ~(*b);
              b = b - 1l;
            }
            while((_Bool)1);
          }
          limit = (signed long int)-3;
        }

        else
        {
          a=tr_pivot(ISA, ISAd, ISAn, first, last);
          do
          {
            t = *first;
            *first = *a;
            *a = t;
          }
          while((_Bool)0);
          if(!((signed long int)*first >= ISAn - ISAd))
            tmp_if_expr_17 = ISAd[(signed long int)*first];

          else
            tmp_if_expr_17 = ISA[((ISAd - ISA) + (signed long int)*first) % (ISAn - ISA)];
          v = tmp_if_expr_17;
          tr_partition(ISA, ISAd, ISAn, first, first + (signed long int)1, last, &a, &b, v);
          if(!(last - first == b - a))
          {
            if(!((signed long int)incr >= ISAn - ISAd))
            {
              if(!(ISA[(signed long int)*a] == v))
              {
                return_value_tr_ilg_18=tr_ilg((signed int)(b - a));
                tmp_if_expr_19 = return_value_tr_ilg_18;
              }

              else
                tmp_if_expr_19 = (signed long int)-1;
              tmp_if_expr_20 = tmp_if_expr_19;
            }

            else
              tmp_if_expr_20 = (signed long int)-3;
            next = tmp_if_expr_20;
            c = first;
            v = (signed int)((a - SA) - (signed long int)1);
            for( ; !(c >= a); c = c + 1l)
              ISA[(signed long int)*c] = v;
            if(!(b >= last))
            {
              c = a;
              v = (signed int)((b - SA) - (signed long int)1);
              for( ; !(c >= b); c = c + 1l)
                ISA[(signed long int)*c] = v;
            }

            if(b - a >= 2l)
            {
              return_value_trbudget_check_39=trbudget_check(budget, (signed int)(b - a));
              tmp_if_expr_40 = return_value_trbudget_check_39 != 0l ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_40 = (_Bool)0;
            if(tmp_if_expr_40)
            {
              if(last - b >= a - first)
              {
                if(b - a >= last - b)
                {
                  if(a - first >= 2l)
                  {
                    do
                    {
                      /* assertion ssize < (64) */
                      assert(ssize < (signed long int)64);
                      stack[ssize].a = ISAd + (signed long int)incr;
                      stack[ssize].b = a;
                      stack[ssize].c = b;
                      stack[ssize].d = next;
                      tmp_post_21 = ssize;
                      ssize = ssize + 1l;
                      stack[tmp_post_21].e = trlink;
                    }
                    while((_Bool)0);
                    do
                    {
                      /* assertion ssize < (64) */
                      assert(ssize < (signed long int)64);
                      stack[ssize].a = ISAd;
                      stack[ssize].b = b;
                      stack[ssize].c = last;
                      stack[ssize].d = limit;
                      tmp_post_22 = ssize;
                      ssize = ssize + 1l;
                      stack[tmp_post_22].e = trlink;
                    }
                    while((_Bool)0);
                    last = a;
                  }

                  else
                    if(last - b >= 2l)
                    {
                      do
                      {
                        /* assertion ssize < (64) */
                        assert(ssize < (signed long int)64);
                        stack[ssize].a = ISAd + (signed long int)incr;
                        stack[ssize].b = a;
                        stack[ssize].c = b;
                        stack[ssize].d = next;
                        tmp_post_23 = ssize;
                        ssize = ssize + 1l;
                        stack[tmp_post_23].e = trlink;
                      }
                      while((_Bool)0);
                      first = b;
                    }

                    else
                    {
                      ISAd = ISAd + (signed long int)incr;
                      first = a;
                      last = b;
                      limit = next;
                    }
                }

                else
                  if(b - a >= a - first)
                  {
                    if(a - first >= 2l)
                    {
                      do
                      {
                        /* assertion ssize < (64) */
                        assert(ssize < (signed long int)64);
                        stack[ssize].a = ISAd;
                        stack[ssize].b = b;
                        stack[ssize].c = last;
                        stack[ssize].d = limit;
                        tmp_post_24 = ssize;
                        ssize = ssize + 1l;
                        stack[tmp_post_24].e = trlink;
                      }
                      while((_Bool)0);
                      do
                      {
                        /* assertion ssize < (64) */
                        assert(ssize < (signed long int)64);
                        stack[ssize].a = ISAd + (signed long int)incr;
                        stack[ssize].b = a;
                        stack[ssize].c = b;
                        stack[ssize].d = next;
                        tmp_post_25 = ssize;
                        ssize = ssize + 1l;
                        stack[tmp_post_25].e = trlink;
                      }
                      while((_Bool)0);
                      last = a;
                    }

                    else
                    {
                      do
                      {
                        /* assertion ssize < (64) */
                        assert(ssize < (signed long int)64);
                        stack[ssize].a = ISAd;
                        stack[ssize].b = b;
                        stack[ssize].c = last;
                        stack[ssize].d = limit;
                        tmp_post_26 = ssize;
                        ssize = ssize + 1l;
                        stack[tmp_post_26].e = trlink;
                      }
                      while((_Bool)0);
                      ISAd = ISAd + (signed long int)incr;
                      first = a;
                      last = b;
                      limit = next;
                    }
                  }

                  else
                  {
                    do
                    {
                      /* assertion ssize < (64) */
                      assert(ssize < (signed long int)64);
                      stack[ssize].a = ISAd;
                      stack[ssize].b = b;
                      stack[ssize].c = last;
                      stack[ssize].d = limit;
                      tmp_post_27 = ssize;
                      ssize = ssize + 1l;
                      stack[tmp_post_27].e = trlink;
                    }
                    while((_Bool)0);
                    do
                    {
                      /* assertion ssize < (64) */
                      assert(ssize < (signed long int)64);
                      stack[ssize].a = ISAd;
                      stack[ssize].b = first;
                      stack[ssize].c = a;
                      stack[ssize].d = limit;
                      tmp_post_28 = ssize;
                      ssize = ssize + 1l;
                      stack[tmp_post_28].e = trlink;
                    }
                    while((_Bool)0);
                    ISAd = ISAd + (signed long int)incr;
                    first = a;
                    last = b;
                    limit = next;
                  }
              }

              else
                if(b - a >= a - first)
                {
                  if(last - b >= 2l)
                  {
                    do
                    {
                      /* assertion ssize < (64) */
                      assert(ssize < (signed long int)64);
                      stack[ssize].a = ISAd + (signed long int)incr;
                      stack[ssize].b = a;
                      stack[ssize].c = b;
                      stack[ssize].d = next;
                      tmp_post_29 = ssize;
                      ssize = ssize + 1l;
                      stack[tmp_post_29].e = trlink;
                    }
                    while((_Bool)0);
                    do
                    {
                      /* assertion ssize < (64) */
                      assert(ssize < (signed long int)64);
                      stack[ssize].a = ISAd;
                      stack[ssize].b = first;
                      stack[ssize].c = a;
                      stack[ssize].d = limit;
                      tmp_post_30 = ssize;
                      ssize = ssize + 1l;
                      stack[tmp_post_30].e = trlink;
                    }
                    while((_Bool)0);
                    first = b;
                  }

                  else
                    if(a - first >= 2l)
                    {
                      do
                      {
                        /* assertion ssize < (64) */
                        assert(ssize < (signed long int)64);
                        stack[ssize].a = ISAd + (signed long int)incr;
                        stack[ssize].b = a;
                        stack[ssize].c = b;
                        stack[ssize].d = next;
                        tmp_post_31 = ssize;
                        ssize = ssize + 1l;
                        stack[tmp_post_31].e = trlink;
                      }
                      while((_Bool)0);
                      last = a;
                    }

                    else
                    {
                      ISAd = ISAd + (signed long int)incr;
                      first = a;
                      last = b;
                      limit = next;
                    }
                }

                else
                  if(b - a >= last - b)
                  {
                    if(last - b >= 2l)
                    {
                      do
                      {
                        /* assertion ssize < (64) */
                        assert(ssize < (signed long int)64);
                        stack[ssize].a = ISAd;
                        stack[ssize].b = first;
                        stack[ssize].c = a;
                        stack[ssize].d = limit;
                        tmp_post_32 = ssize;
                        ssize = ssize + 1l;
                        stack[tmp_post_32].e = trlink;
                      }
                      while((_Bool)0);
                      do
                      {
                        /* assertion ssize < (64) */
                        assert(ssize < (signed long int)64);
                        stack[ssize].a = ISAd + (signed long int)incr;
                        stack[ssize].b = a;
                        stack[ssize].c = b;
                        stack[ssize].d = next;
                        tmp_post_33 = ssize;
                        ssize = ssize + 1l;
                        stack[tmp_post_33].e = trlink;
                      }
                      while((_Bool)0);
                      first = b;
                    }

                    else
                    {
                      do
                      {
                        /* assertion ssize < (64) */
                        assert(ssize < (signed long int)64);
                        stack[ssize].a = ISAd;
                        stack[ssize].b = first;
                        stack[ssize].c = a;
                        stack[ssize].d = limit;
                        tmp_post_34 = ssize;
                        ssize = ssize + 1l;
                        stack[tmp_post_34].e = trlink;
                      }
                      while((_Bool)0);
                      ISAd = ISAd + (signed long int)incr;
                      first = a;
                      last = b;
                      limit = next;
                    }
                  }

                  else
                  {
                    do
                    {
                      /* assertion ssize < (64) */
                      assert(ssize < (signed long int)64);
                      stack[ssize].a = ISAd;
                      stack[ssize].b = first;
                      stack[ssize].c = a;
                      stack[ssize].d = limit;
                      tmp_post_35 = ssize;
                      ssize = ssize + 1l;
                      stack[tmp_post_35].e = trlink;
                    }
                    while((_Bool)0);
                    do
                    {
                      /* assertion ssize < (64) */
                      assert(ssize < (signed long int)64);
                      stack[ssize].a = ISAd;
                      stack[ssize].b = b;
                      stack[ssize].c = last;
                      stack[ssize].d = limit;
                      tmp_post_36 = ssize;
                      ssize = ssize + 1l;
                      stack[tmp_post_36].e = trlink;
                    }
                    while((_Bool)0);
                    ISAd = ISAd + (signed long int)incr;
                    first = a;
                    last = b;
                    limit = next;
                  }
            }

            else
            {
              if(b - a >= 2l && trlink >= 0l)
                stack[trlink].d = (signed long int)-1;

              if(last - b >= a - first)
              {
                if(a - first >= 2l)
                {
                  do
                  {
                    /* assertion ssize < (64) */
                    assert(ssize < (signed long int)64);
                    stack[ssize].a = ISAd;
                    stack[ssize].b = b;
                    stack[ssize].c = last;
                    stack[ssize].d = limit;
                    tmp_post_37 = ssize;
                    ssize = ssize + 1l;
                    stack[tmp_post_37].e = trlink;
                  }
                  while((_Bool)0);
                  last = a;
                }

                else
                  if(last - b >= 2l)
                    first = b;

                  else
                    do
                    {
                      /* assertion 0 <= ssize */
                      assert((signed long int)0 <= ssize);
                      if(ssize == 0l)
                        goto __CPROVER_DUMP_L130;

                      ssize = ssize - 1l;
                      ISAd = stack[ssize].a;
                      first = stack[ssize].b;
                      last = stack[ssize].c;
                      limit = stack[ssize].d;
                      trlink = stack[ssize].e;
                    }
                    while((_Bool)0);
              }

              else
                if(last - b >= 2l)
                {
                  do
                  {
                    /* assertion ssize < (64) */
                    assert(ssize < (signed long int)64);
                    stack[ssize].a = ISAd;
                    stack[ssize].b = first;
                    stack[ssize].c = a;
                    stack[ssize].d = limit;
                    tmp_post_38 = ssize;
                    ssize = ssize + 1l;
                    stack[tmp_post_38].e = trlink;
                  }
                  while((_Bool)0);
                  first = b;
                }

                else
                  if(a - first >= 2l)
                    last = a;

                  else
                    do
                    {
                      /* assertion 0 <= ssize */
                      assert((signed long int)0 <= ssize);
                      if(ssize == 0l)
                        goto __CPROVER_DUMP_L130;

                      ssize = ssize - 1l;
                      ISAd = stack[ssize].a;
                      first = stack[ssize].b;
                      last = stack[ssize].c;
                      limit = stack[ssize].d;
                      trlink = stack[ssize].e;
                    }
                    while((_Bool)0);
            }
          }

          else
          {
            signed long int return_value_trbudget_check_43;
            return_value_trbudget_check_43=trbudget_check(budget, (signed int)(last - first));
            if(!(return_value_trbudget_check_43 == 0l))
            {
              if(!((signed long int)incr >= ISAn - ISAd))
              {
                if(!((signed long int)*first >= ISAn - ISAd))
                  tmp_if_expr_41 = ISAd[(signed long int)*first];

                else
                  tmp_if_expr_41 = ISA[((ISAd - ISA) + (signed long int)*first) % (ISAn - ISA)];
                tmp_if_expr_42 = ISA[(signed long int)*first] != tmp_if_expr_41 ? limit + (signed long int)1 : (signed long int)-1;
              }

              else
                tmp_if_expr_42 = (signed long int)-3;
              limit = tmp_if_expr_42;
              ISAd = ISAd + (signed long int)incr;
            }

            else
            {
              if(trlink >= 0l)
                stack[trlink].d = (signed long int)-1;

              do
              {
                /* assertion 0 <= ssize */
                assert((signed long int)0 <= ssize);
                if(ssize == 0l)
                  goto __CPROVER_DUMP_L130;

                ssize = ssize - 1l;
                ISAd = stack[ssize].a;
                first = stack[ssize].b;
                last = stack[ssize].c;
                limit = stack[ssize].d;
                trlink = stack[ssize].e;
              }
              while((_Bool)0);
            }
          }
        }
      }
  }
  while((_Bool)1);

__CPROVER_DUMP_L130:
  ;
}

// tr_median3
// file divbwt.c line 1061
static signed int * tr_median3(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *v1, signed int *v2, signed int *v3)
{
  signed int *t;
  signed int tmp_if_expr_1;
  if(!((signed long int)*v1 >= ISAn - ISAd))
    tmp_if_expr_1 = ISAd[(signed long int)*v1];

  else
    tmp_if_expr_1 = ISA[((ISAd - ISA) + (signed long int)*v1) % (ISAn - ISA)];
  signed int tmp_if_expr_2;
  if(!((signed long int)*v2 >= ISAn - ISAd))
    tmp_if_expr_2 = ISAd[(signed long int)*v2];

  else
    tmp_if_expr_2 = ISA[((ISAd - ISA) + (signed long int)*v2) % (ISAn - ISA)];
  if(!(tmp_if_expr_2 >= tmp_if_expr_1))
    do
    {
      t = v1;
      v1 = v2;
      v2 = t;
    }
    while((_Bool)0);

  signed int tmp_if_expr_5;
  if(!((signed long int)*v2 >= ISAn - ISAd))
    tmp_if_expr_5 = ISAd[(signed long int)*v2];

  else
    tmp_if_expr_5 = ISA[((ISAd - ISA) + (signed long int)*v2) % (ISAn - ISA)];
  signed int tmp_if_expr_6;
  if(!((signed long int)*v3 >= ISAn - ISAd))
    tmp_if_expr_6 = ISAd[(signed long int)*v3];

  else
    tmp_if_expr_6 = ISA[((ISAd - ISA) + (signed long int)*v3) % (ISAn - ISA)];
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  if(!(tmp_if_expr_6 >= tmp_if_expr_5))
  {
    if(!((signed long int)*v1 >= ISAn - ISAd))
      tmp_if_expr_3 = ISAd[(signed long int)*v1];

    else
      tmp_if_expr_3 = ISA[((ISAd - ISA) + (signed long int)*v1) % (ISAn - ISA)];
    if(!((signed long int)*v3 >= ISAn - ISAd))
      tmp_if_expr_4 = ISAd[(signed long int)*v3];

    else
      tmp_if_expr_4 = ISA[((ISAd - ISA) + (signed long int)*v3) % (ISAn - ISA)];
    if(!(tmp_if_expr_4 >= tmp_if_expr_3))
      return v1;

    return v3;
  }

  else
    return v2;
}

// tr_median5
// file divbwt.c line 1075
static signed int * tr_median5(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *v1, signed int *v2, signed int *v3, signed int *v4, signed int *v5)
{
  signed int *t;
  signed int tmp_if_expr_1;
  if(!((signed long int)*v2 >= ISAn - ISAd))
    tmp_if_expr_1 = ISAd[(signed long int)*v2];

  else
    tmp_if_expr_1 = ISA[((ISAd - ISA) + (signed long int)*v2) % (ISAn - ISA)];
  signed int tmp_if_expr_2;
  if(!((signed long int)*v3 >= ISAn - ISAd))
    tmp_if_expr_2 = ISAd[(signed long int)*v3];

  else
    tmp_if_expr_2 = ISA[((ISAd - ISA) + (signed long int)*v3) % (ISAn - ISA)];
  if(!(tmp_if_expr_2 >= tmp_if_expr_1))
    do
    {
      t = v2;
      v2 = v3;
      v3 = t;
    }
    while((_Bool)0);

  signed int tmp_if_expr_3;
  if(!((signed long int)*v4 >= ISAn - ISAd))
    tmp_if_expr_3 = ISAd[(signed long int)*v4];

  else
    tmp_if_expr_3 = ISA[((ISAd - ISA) + (signed long int)*v4) % (ISAn - ISA)];
  signed int tmp_if_expr_4;
  if(!((signed long int)*v5 >= ISAn - ISAd))
    tmp_if_expr_4 = ISAd[(signed long int)*v5];

  else
    tmp_if_expr_4 = ISA[((ISAd - ISA) + (signed long int)*v5) % (ISAn - ISA)];
  if(!(tmp_if_expr_4 >= tmp_if_expr_3))
    do
    {
      t = v4;
      v4 = v5;
      v5 = t;
    }
    while((_Bool)0);

  signed int tmp_if_expr_5;
  if(!((signed long int)*v2 >= ISAn - ISAd))
    tmp_if_expr_5 = ISAd[(signed long int)*v2];

  else
    tmp_if_expr_5 = ISA[((ISAd - ISA) + (signed long int)*v2) % (ISAn - ISA)];
  signed int tmp_if_expr_6;
  if(!((signed long int)*v4 >= ISAn - ISAd))
    tmp_if_expr_6 = ISAd[(signed long int)*v4];

  else
    tmp_if_expr_6 = ISA[((ISAd - ISA) + (signed long int)*v4) % (ISAn - ISA)];
  if(!(tmp_if_expr_6 >= tmp_if_expr_5))
  {
    do
    {
      t = v2;
      v2 = v4;
      v4 = t;
    }
    while((_Bool)0);
    do
    {
      t = v3;
      v3 = v5;
      v5 = t;
    }
    while((_Bool)0);
  }

  signed int tmp_if_expr_7;
  if(!((signed long int)*v1 >= ISAn - ISAd))
    tmp_if_expr_7 = ISAd[(signed long int)*v1];

  else
    tmp_if_expr_7 = ISA[((ISAd - ISA) + (signed long int)*v1) % (ISAn - ISA)];
  signed int tmp_if_expr_8;
  if(!((signed long int)*v3 >= ISAn - ISAd))
    tmp_if_expr_8 = ISAd[(signed long int)*v3];

  else
    tmp_if_expr_8 = ISA[((ISAd - ISA) + (signed long int)*v3) % (ISAn - ISA)];
  if(!(tmp_if_expr_8 >= tmp_if_expr_7))
    do
    {
      t = v1;
      v1 = v3;
      v3 = t;
    }
    while((_Bool)0);

  signed int tmp_if_expr_9;
  if(!((signed long int)*v1 >= ISAn - ISAd))
    tmp_if_expr_9 = ISAd[(signed long int)*v1];

  else
    tmp_if_expr_9 = ISA[((ISAd - ISA) + (signed long int)*v1) % (ISAn - ISA)];
  signed int tmp_if_expr_10;
  if(!((signed long int)*v4 >= ISAn - ISAd))
    tmp_if_expr_10 = ISAd[(signed long int)*v4];

  else
    tmp_if_expr_10 = ISA[((ISAd - ISA) + (signed long int)*v4) % (ISAn - ISA)];
  if(!(tmp_if_expr_10 >= tmp_if_expr_9))
  {
    do
    {
      t = v1;
      v1 = v4;
      v4 = t;
    }
    while((_Bool)0);
    do
    {
      t = v3;
      v3 = v5;
      v5 = t;
    }
    while((_Bool)0);
  }

  signed int tmp_if_expr_11;
  if(!((signed long int)*v3 >= ISAn - ISAd))
    tmp_if_expr_11 = ISAd[(signed long int)*v3];

  else
    tmp_if_expr_11 = ISA[((ISAd - ISA) + (signed long int)*v3) % (ISAn - ISA)];
  signed int tmp_if_expr_12;
  if(!((signed long int)*v4 >= ISAn - ISAd))
    tmp_if_expr_12 = ISAd[(signed long int)*v4];

  else
    tmp_if_expr_12 = ISA[((ISAd - ISA) + (signed long int)*v4) % (ISAn - ISA)];
  if(!(tmp_if_expr_12 >= tmp_if_expr_11))
    return v4;

  else
    return v3;
}

// tr_partialcopy
// file divbwt.c line 1215
static void tr_partialcopy(signed int *ISA, const signed int *ISAn, const signed int *SA, signed int *first, signed int *a, signed int *b, signed int *last, signed int depth)
{
  signed int *c;
  signed int *d;
  signed int *e;
  signed int s;
  signed int v;
  signed int t;
  signed int rank;
  signed int lastrank;
  signed int newrank = -1;
  v = (signed int)((b - SA) - (signed long int)1);
  lastrank = -1;
  c = first;
  d = a - (signed long int)1;
  for( ; d >= c; c = c + 1l)
  {
    t = *c;
    s = t - depth;
    if(!(s >= 0))
      s = s + (signed int)(ISAn - ISA);

    if(ISA[(signed long int)s] == v)
    {
      d = d + 1l;
      *d = s;
      rank = ISA[(signed long int)t];
      if(!(lastrank == rank))
      {
        lastrank = rank;
        newrank = (signed int)(d - SA);
      }

      ISA[(signed long int)s] = newrank;
    }

  }
  lastrank = -1;
  e = d;
  for( ; e >= first; e = e - 1l)
  {
    rank = ISA[(signed long int)*e];
    if(!(lastrank == rank))
    {
      lastrank = rank;
      newrank = (signed int)(e - SA);
    }

    if(!(newrank == rank))
      ISA[(signed long int)*e] = newrank;

  }
  lastrank = -1;
  c = last - (signed long int)1;
  e = d + (signed long int)1;
  d = b;
  for( ; !(e >= d); c = c - 1l)
  {
    t = *c;
    s = t - depth;
    if(!(s >= 0))
      s = s + (signed int)(ISAn - ISA);

    if(ISA[(signed long int)s] == v)
    {
      d = d - 1l;
      *d = s;
      rank = ISA[(signed long int)t];
      if(!(lastrank == rank))
      {
        lastrank = rank;
        newrank = (signed int)(d - SA);
      }

      ISA[(signed long int)s] = newrank;
    }

  }
}

// tr_partition
// file divbwt.c line 1146
static void tr_partition(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *first, signed int *middle, signed int *last, signed int **pa, signed int **pb, signed int v)
{
  signed int *a;
  signed int *b;
  signed int *c;
  signed int *d;
  signed int *e;
  signed int *f;
  signed int t;
  signed int s;
  signed int x = 0;
  b = middle - (signed long int)1;
  _Bool tmp_if_expr_2;
  signed int tmp_if_expr_1;
  do
  {
    b = b + 1l;
    if(!(b >= last))
    {
      if(!((signed long int)*b >= ISAn - ISAd))
        tmp_if_expr_1 = ISAd[(signed long int)*b];

      else
        tmp_if_expr_1 = ISA[((ISAd - ISA) + (signed long int)*b) % (ISAn - ISA)];
      x = tmp_if_expr_1;
      tmp_if_expr_2 = x == v ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(!tmp_if_expr_2)
      break;

  }
  while((_Bool)1);
  a = b;
  _Bool tmp_if_expr_4;
  signed int tmp_if_expr_3;
  if(!(a >= last))
  {
    if(!(x >= v))
      do
      {
        b = b + 1l;
        if(!(b >= last))
        {
          if(!((signed long int)*b >= ISAn - ISAd))
            tmp_if_expr_3 = ISAd[(signed long int)*b];

          else
            tmp_if_expr_3 = ISA[((ISAd - ISA) + (signed long int)*b) % (ISAn - ISA)];
          x = tmp_if_expr_3;
          tmp_if_expr_4 = x <= v ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_4 = (_Bool)0;
        if(!tmp_if_expr_4)
          break;

        if(x == v)
        {
          do
          {
            t = *b;
            *b = *a;
            *a = t;
          }
          while((_Bool)0);
          a = a + 1l;
        }

      }
      while((_Bool)1);

  }

  c = last;
  _Bool tmp_if_expr_6;
  signed int tmp_if_expr_5;
  do
  {
    c = c - 1l;
    if(!(b >= c))
    {
      if(!((signed long int)*c >= ISAn - ISAd))
        tmp_if_expr_5 = ISAd[(signed long int)*c];

      else
        tmp_if_expr_5 = ISA[((ISAd - ISA) + (signed long int)*c) % (ISAn - ISA)];
      x = tmp_if_expr_5;
      tmp_if_expr_6 = x == v ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_6 = (_Bool)0;
    if(!tmp_if_expr_6)
      break;

  }
  while((_Bool)1);
  d = c;
  _Bool tmp_if_expr_8;
  signed int tmp_if_expr_7;
  if(!(b >= d))
  {
    if(!(v >= x))
      do
      {
        c = c - 1l;
        if(!(b >= c))
        {
          if(!((signed long int)*c >= ISAn - ISAd))
            tmp_if_expr_7 = ISAd[(signed long int)*c];

          else
            tmp_if_expr_7 = ISA[((ISAd - ISA) + (signed long int)*c) % (ISAn - ISA)];
          x = tmp_if_expr_7;
          tmp_if_expr_8 = x >= v ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_8 = (_Bool)0;
        if(!tmp_if_expr_8)
          break;

        if(x == v)
        {
          do
          {
            t = *c;
            *c = *d;
            *d = t;
          }
          while((_Bool)0);
          d = d - 1l;
        }

      }
      while((_Bool)1);

  }

  _Bool tmp_if_expr_10;
  signed int tmp_if_expr_9;
  _Bool tmp_if_expr_12;
  signed int tmp_if_expr_11;
  while(!(b >= c))
  {
    do
    {
      t = *b;
      *b = *c;
      *c = t;
    }
    while((_Bool)0);
    do
    {
      b = b + 1l;
      if(!(b >= c))
      {
        if(!((signed long int)*b >= ISAn - ISAd))
          tmp_if_expr_9 = ISAd[(signed long int)*b];

        else
          tmp_if_expr_9 = ISA[((ISAd - ISA) + (signed long int)*b) % (ISAn - ISA)];
        x = tmp_if_expr_9;
        tmp_if_expr_10 = x <= v ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_10 = (_Bool)0;
      if(!tmp_if_expr_10)
        break;

      if(x == v)
      {
        do
        {
          t = *b;
          *b = *a;
          *a = t;
        }
        while((_Bool)0);
        a = a + 1l;
      }

    }
    while((_Bool)1);
    do
    {
      c = c - 1l;
      if(!(b >= c))
      {
        if(!((signed long int)*c >= ISAn - ISAd))
          tmp_if_expr_11 = ISAd[(signed long int)*c];

        else
          tmp_if_expr_11 = ISA[((ISAd - ISA) + (signed long int)*c) % (ISAn - ISA)];
        x = tmp_if_expr_11;
        tmp_if_expr_12 = x >= v ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_12 = (_Bool)0;
      if(!tmp_if_expr_12)
        break;

      if(x == v)
      {
        do
        {
          t = *c;
          *c = *d;
          *d = t;
        }
        while((_Bool)0);
        d = d - 1l;
      }

    }
    while((_Bool)1);
  }
  if(d >= a)
  {
    c = b - (signed long int)1;
    s = (signed int)(a - first);
    t = (signed int)(b - a);
    if(!(t >= s))
      s = t;

    e = first;
    f = b - (signed long int)s;
    for( ; s >= 1; f = f + 1l)
    {
      do
      {
        t = *e;
        *e = *f;
        *f = t;
      }
      while((_Bool)0);
      s = s - 1;
      e = e + 1l;
    }
    s = (signed int)(d - c);
    t = (signed int)((last - d) - (signed long int)1);
    if(!(t >= s))
      s = t;

    e = b;
    f = last - (signed long int)s;
    for( ; s >= 1; f = f + 1l)
    {
      do
      {
        t = *e;
        *e = *f;
        *f = t;
      }
      while((_Bool)0);
      s = s - 1;
      e = e + 1l;
    }
    first = first + (b - a);
    last = last - (d - c);
  }

  *pa = first;
  *pb = last;
}

// tr_pivot
// file divbwt.c line 1090
static signed int * tr_pivot(const signed int *ISA, const signed int *ISAd, const signed int *ISAn, signed int *first, signed int *last)
{
  signed int *middle;
  signed int t = (signed int)(last - first);
  middle = first + (signed long int)(t / 2);
  if(!(t >= 513))
  {
    if(!(t >= 33))
    {
      signed int *return_value_tr_median3_1;
      return_value_tr_median3_1=tr_median3(ISA, ISAd, ISAn, first, middle, last - (signed long int)1);
      return return_value_tr_median3_1;
    }

    else
    {
      t = t >> 2;
      signed int *return_value_tr_median5_2;
      return_value_tr_median5_2=tr_median5(ISA, ISAd, ISAn, first, first + (signed long int)t, middle, (last - (signed long int)1) - (signed long int)t, last - (signed long int)1);
      return return_value_tr_median5_2;
    }
  }

  t = t >> 3;
  first=tr_median3(ISA, ISAd, ISAn, first, first + (signed long int)t, first + (signed long int)(t << 1));
  middle=tr_median3(ISA, ISAd, ISAn, middle - (signed long int)t, middle, middle + (signed long int)t);
  last=tr_median3(ISA, ISAd, ISAn, (last - (signed long int)1) - (signed long int)(t << 1), (last - (signed long int)1) - (signed long int)t, last - (signed long int)1);
  signed int *return_value_tr_median3_3;
  return_value_tr_median3_3=tr_median3(ISA, ISAd, ISAn, first, middle, last);
  return return_value_tr_median3_3;
}

// transmit
// file encode.h line 32
void transmit(struct encoder_state *s, void *buf)
{
  unsigned long int b;
  unsigned int k;
  unsigned char *sp;
  unsigned int t;
  unsigned int v;
  unsigned short int *mtfv;
  unsigned int *p;
  unsigned int ns;
  unsigned int as;
  unsigned int gr;
  b = (unsigned long int)0;
  k = (unsigned int)0;
  p = (unsigned int *)buf;
  b = b << 24 | (unsigned long int)0x314159;
  k = k + (unsigned int)24;
  unsigned int *tmp_post_1;
  if(k >= 32u)
  {
    unsigned int w;
    k = k - (unsigned int)32;
    w = (unsigned int)(b >> k);
    tmp_post_1 = p;
    p = p + 1l;
    *tmp_post_1=htonl(w);
  }

  b = b << 24 | (unsigned long int)0x265359;
  k = k + (unsigned int)24;
  unsigned int *tmp_post_2;
  if(k >= 32u)
  {
    unsigned int transmit__1__2__w;
    k = k - (unsigned int)32;
    transmit__1__2__w = (unsigned int)(b >> k);
    tmp_post_2 = p;
    p = p + 1l;
    *tmp_post_2=htonl(transmit__1__2__w);
  }

  b = b << 32 | (unsigned long int)(s->block_crc ^ 0xFFFFFFFF);
  k = k + (unsigned int)32;
  unsigned int *tmp_post_3;
  if(k >= 32u)
  {
    unsigned int transmit__1__3__w;
    k = k - (unsigned int)32;
    transmit__1__3__w = (unsigned int)(b >> k);
    tmp_post_3 = p;
    p = p + 1l;
    *tmp_post_3=htonl(transmit__1__3__w);
  }

  b = b << 1 | (unsigned long int)0;
  k = k + (unsigned int)1;
  unsigned int *tmp_post_4;
  if(k >= 32u)
  {
    unsigned int transmit__1__4__w;
    k = k - (unsigned int)32;
    transmit__1__4__w = (unsigned int)(b >> k);
    tmp_post_4 = p;
    p = p + 1l;
    *tmp_post_4=htonl(transmit__1__4__w);
  }

  b = b << 24 | (unsigned long int)s->bwt_idx;
  k = k + (unsigned int)24;
  unsigned int *tmp_post_5;
  if(k >= 32u)
  {
    unsigned int transmit__1__5__w;
    k = k - (unsigned int)32;
    transmit__1__5__w = (unsigned int)(b >> k);
    tmp_post_5 = p;
    p = p + 1l;
    *tmp_post_5=htonl(transmit__1__5__w);
  }

  unsigned int pack[16l];
  unsigned int pk;
  unsigned int i;
  unsigned int j;
  unsigned int big = (unsigned int)0;
  i = (unsigned int)0;
  for( ; !(i >= 16u); i = i + 1u)
  {
    pk = (unsigned int)0;
    j = (unsigned int)0;
    for( ; !(j >= 16u); j = j + 1u)
      pk = (pk << 1) + (unsigned int)s->cmap[(signed long int)((unsigned int)16 * i + j)];
    pack[(signed long int)i] = pk;
    big = (big << 1) + (unsigned int)!(!(pk != 0u));
  }
  b = b << 16 | (unsigned long int)big;
  k = k + (unsigned int)16;
  unsigned int *tmp_post_6;
  if(k >= 32u)
  {
    unsigned int transmit__1__6__2__w;
    k = k - (unsigned int)32;
    transmit__1__6__2__w = (unsigned int)(b >> k);
    tmp_post_6 = p;
    p = p + 1l;
    *tmp_post_6=htonl(transmit__1__6__2__w);
  }

  i = (unsigned int)0;
  unsigned int *tmp_post_7;
  for( ; !(i >= 16u); i = i + 1u)
    if(!(pack[(signed long int)i] == 0u))
    {
      b = b << 16 | (unsigned long int)pack[(signed long int)i];
      k = k + (unsigned int)16;
      if(k >= 32u)
      {
        unsigned int transmit__1__6__3__1__1__w;
        k = k - (unsigned int)32;
        transmit__1__6__3__1__1__w = (unsigned int)(b >> k);
        tmp_post_7 = p;
        p = p + 1l;
        *tmp_post_7=htonl(transmit__1__6__3__1__1__w);
      }

    }

  _Bool tmp_if_expr_8;
  if(s->num_trees >= 2u)
    tmp_if_expr_8 = s->num_trees <= (unsigned int)6 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_8 = (_Bool)0;
  /* assertion s->num_trees >= 2 && s->num_trees <= 6 */
  assert(tmp_if_expr_8);
  b = b << 3 | (unsigned long int)s->num_trees;
  k = k + (unsigned int)3;
  unsigned int *tmp_post_9;
  if(k >= 32u)
  {
    unsigned int transmit__1__7__w;
    k = k - (unsigned int)32;
    transmit__1__7__w = (unsigned int)(b >> k);
    tmp_post_9 = p;
    p = p + 1l;
    *tmp_post_9=htonl(transmit__1__7__w);
  }

  ns = s->num_selectors;
  b = b << 15 | (unsigned long int)ns;
  k = k + (unsigned int)15;
  unsigned int *tmp_post_10;
  if(k >= 32u)
  {
    unsigned int transmit__1__8__w;
    k = k - (unsigned int)32;
    transmit__1__8__w = (unsigned int)(b >> k);
    tmp_post_10 = p;
    p = p + 1l;
    *tmp_post_10=htonl(transmit__1__8__w);
  }

  sp = s->selectorMTF;
  unsigned int tmp_post_11;
  unsigned char *tmp_post_12;
  unsigned int *tmp_post_13;
  do
  {
    tmp_post_11 = ns;
    ns = ns - 1u;
    if(tmp_post_11 == 0u)
      break;

    tmp_post_12 = sp;
    sp = sp + 1l;
    v = (unsigned int)(1 + (signed int)*tmp_post_12);
    b = b << v | (unsigned long int)((1 << v) - 2);
    k = k + v;
    if(k >= 32u)
    {
      unsigned int transmit__1__9__1__w;
      k = k - (unsigned int)32;
      transmit__1__9__1__w = (unsigned int)(b >> k);
      tmp_post_13 = p;
      p = p + 1l;
      *tmp_post_13=htonl(transmit__1__9__1__w);
    }

  }
  while((_Bool)1);
  mtfv = (unsigned short int *)s->mtfv;
  as = (unsigned int)((signed int)mtfv[(signed long int)(s->nmtf - (unsigned int)1)] + 1);
  ns = ((s->nmtf + (unsigned int)50) - (unsigned int)1) / (unsigned int)50;
  t = (unsigned int)0;
  unsigned int *tmp_post_14;
  unsigned int *tmp_post_15;
  unsigned int *tmp_post_16;
  unsigned int *tmp_post_17;
  for( ; !(t >= s->num_trees); t = t + 1u)
  {
    signed int a;
    signed int c;
    unsigned char *len = s->length[(signed long int)s->tmap_new2old[(signed long int)t]];
    a = (signed int)len[(signed long int)0];
    b = b << 6 | (unsigned long int)(a << 1);
    k = k + (unsigned int)6;
    if(k >= 32u)
    {
      unsigned int transmit__1__10__1__1__w;
      k = k - (unsigned int)32;
      transmit__1__10__1__1__w = (unsigned int)(b >> k);
      tmp_post_14 = p;
      p = p + 1l;
      *tmp_post_14=htonl(transmit__1__10__1__1__w);
    }

    v = (unsigned int)1;
    for( ; !(v >= as); v = v + 1u)
    {
      c = (signed int)len[(signed long int)v];
      for( ; !(a >= c); a = a + 1)
      {
        b = b << 2 | (unsigned long int)2;
        k = k + (unsigned int)2;
        if(k >= 32u)
        {
          unsigned int transmit__1__10__1__2__1__1__1__w;
          k = k - (unsigned int)32;
          transmit__1__10__1__2__1__1__1__w = (unsigned int)(b >> k);
          tmp_post_15 = p;
          p = p + 1l;
          *tmp_post_15=htonl(transmit__1__10__1__2__1__1__1__w);
        }

      }
      for( ; !(c >= a); a = a - 1)
      {
        b = b << 2 | (unsigned long int)3;
        k = k + (unsigned int)2;
        if(k >= 32u)
        {
          unsigned int transmit__1__10__1__2__1__2__1__w;
          k = k - (unsigned int)32;
          transmit__1__10__1__2__1__2__1__w = (unsigned int)(b >> k);
          tmp_post_16 = p;
          p = p + 1l;
          *tmp_post_16=htonl(transmit__1__10__1__2__1__2__1__w);
        }

      }
      b = b << 1 | (unsigned long int)0;
      k = k + (unsigned int)1;
      if(k >= 32u)
      {
        unsigned int transmit__1__10__1__2__1__3__w;
        k = k - (unsigned int)32;
        transmit__1__10__1__2__1__3__w = (unsigned int)(b >> k);
        tmp_post_17 = p;
        p = p + 1l;
        *tmp_post_17=htonl(transmit__1__10__1__2__1__3__w);
      }

    }
  }
  gr = (unsigned int)0;
  unsigned short int *tmp_post_18;
  unsigned int *tmp_post_19;
  for( ; !(gr >= ns); gr = gr + 1u)
  {
    unsigned int transmit__1__11__1__i;
    const unsigned int *transmit__1__11__1__L;
    const unsigned char *B;
    unsigned int mv;
    t = (unsigned int)s->selector[(signed long int)gr];
    transmit__1__11__1__L = s->code[(signed long int)t];
    B = s->length[(signed long int)t];
    transmit__1__11__1__i = (unsigned int)0;
    for( ; !(transmit__1__11__1__i >= 50u); transmit__1__11__1__i = transmit__1__11__1__i + 1u)
    {
      tmp_post_18 = mtfv;
      mtfv = mtfv + 1l;
      mv = (unsigned int)*tmp_post_18;
      b = b << (signed int)B[(signed long int)mv] | (unsigned long int)transmit__1__11__1__L[(signed long int)mv];
      k = k + (unsigned int)B[(signed long int)mv];
      if(k >= 32u)
      {
        unsigned int transmit__1__11__1__1__1__1__w;
        k = k - (unsigned int)32;
        transmit__1__11__1__1__1__1__w = (unsigned int)(b >> k);
        tmp_post_19 = p;
        p = p + 1l;
        *tmp_post_19=htonl(transmit__1__11__1__1__1__1__w);
      }

    }
  }
  /* assertion k % 8 == 0 */
  assert(k % (unsigned int)8 == (unsigned int)0);
  /* assertion k / 8 == s->out_expect_len % 4 */
  assert(k / (unsigned int)8 == s->out_expect_len % (unsigned int)4);
  /* assertion p == (uint32_t *)buf + s->out_expect_len / 4 */
  assert(p == (unsigned int *)buf + (signed long int)(s->out_expect_len / (unsigned int)4));
  b = b << 31 | (unsigned long int)0;
  k = k + (unsigned int)31;
  unsigned int *tmp_post_20;
  if(k >= 32u)
  {
    unsigned int transmit__1__12__w;
    k = k - (unsigned int)32;
    transmit__1__12__w = (unsigned int)(b >> k);
    tmp_post_20 = p;
    p = p + 1l;
    *tmp_post_20=htonl(transmit__1__12__w);
  }

  free((void *)s->selector);
  free((void *)s->selectorMTF);
  free(s->mtfv);
  free((void *)s);
}

// trbudget_check
// file divbwt.c line 1133
static signed long int trbudget_check(struct _trbudget_t *budget, signed int size)
{
  if(budget->remain >= size)
  {
    budget->remain = budget->remain - size;
    return (signed long int)1;
  }

  else
    if(budget->chance == 0)
    {
      budget->count = budget->count + size;
      return (signed long int)0;
    }

    else
    {
      budget->remain = budget->remain + (budget->incval - size);
      budget->chance = budget->chance - 1;
      return (signed long int)1;
    }
}

// trbudget_init
// file divbwt.c line 1126
static void trbudget_init(struct _trbudget_t *budget, signed int chance, signed int incval)
{
  budget->chance = chance;
  budget->incval = incval;
  budget->remain = budget->incval;
}

// trsort
// file divbwt.c line 1487
static void trsort(signed int *ISA, signed int *SA, signed int n, signed int depth)
{
  signed int *ISAd;
  signed int *first;
  signed int *last;
  signed int *a;
  struct _trbudget_t budget;
  signed int t;
  signed int skip;
  signed int unsorted;
  _Bool tmp_if_expr_2;
  if(!(-n >= *SA))
  {
    signed long int return_value_tr_ilg_1;
    return_value_tr_ilg_1=tr_ilg(n);
    trbudget_init(&budget, (signed int)((return_value_tr_ilg_1 * (signed long int)2) / (signed long int)3), n);
    ISAd = ISA + (signed long int)depth;
    do
    {
      /* assertion n > ISAd - ISA */
      assert((signed long int)n > ISAd - ISA);
      first = SA;
      skip = 0;
      unsorted = 0;
      do
      {
        t = *first;
        if(!(t >= 0))
        {
          first = first - (signed long int)t;
          skip = skip + t;
        }

        else
        {
          if(!(skip == 0))
          {
            first[(signed long int)skip] = skip;
            skip = 0;
          }

          last = SA + (signed long int)ISA[(signed long int)t] + (signed long int)1;
          if(last - first >= 2l)
          {
            budget.count = 0;
            tr_introsort(ISA, ISAd, ISA + (signed long int)n, SA, first, last, &budget);
            if(!(budget.count == 0))
              unsorted = unsorted + budget.count;

            else
              skip = (signed int)(first - last);
          }

          else
            if(last - first == 1l)
              skip = -1;

          first = last;
        }
      }
      while(!(first >= SA + (signed long int)n));
      if(!(skip == 0))
        first[(signed long int)skip] = skip;

      if(unsorted == 0)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = -n >= *SA ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        break;

      if((ISAd - ISA) * 2l >= (signed long int)n)
      {
        do
        {
          t = *first;
          if(!(t >= 0))
            first = first - (signed long int)t;

          else
          {
            last = SA + (signed long int)ISA[(signed long int)t] + (signed long int)1;
            a = first;
            for( ; !(a >= last); a = a + 1l)
              ISA[(signed long int)*a] = (signed int)(a - SA);
            first = last;
          }
        }
        while(!(first >= SA + (signed long int)n));
        break;
      }

      ISAd = ISAd + (ISAd - ISA);
    }
    while((_Bool)1);
  }

}

// uninit
// file compress.c line 336
static void uninit(void)
{
  write_trailer();
  /* assertion (!(coll_q).size) */
  assert(!(coll_q.size != 0u));
  free((void *)coll_q.root);
  /* assertion (!(trans_q).size) */
  assert(!(trans_q.size != 0u));
  free((void *)trans_q.root);
  /* assertion (!(reord_q).size) */
  assert(!(reord_q.size != 0u));
  free((void *)reord_q.root);
}

// uninit_link1
// file expand.c line 904
static void uninit_link1(void)
{
  /* assertion parsing_done */
  assert(parsing_done != (_Bool)0);
  /* assertion head_offs == tail_offs */
  assert(head_offs == tail_offs);
  /* assertion parse_token */
  assert(parse_token != (_Bool)0);
  /* assertion (!(scan_q).size) */
  assert(!(scan_q.size != 0u));
  free((void *)scan_q.root);
  /* assertion (!(unord_q).size) */
  assert(!(unord_q.size != 0u));
  free((void *)unord_q.root);
  /* assertion (!(order_q).size) */
  assert(!(order_q.size != 0u));
  free((void *)order_q.root);
  /* assertion (!(reord_q).size) */
  assert(!(reord_q_link1.size != 0u));
  free((void *)reord_q_link1.root);
  /* assertion (!(emit_q).size) */
  assert(!(emit_q.size != 0u));
  free((void *)emit_q.root);
  /* assertion (!(retr_q).size) */
  assert(!(retr_q.size != 0u));
  free((void *)retr_q.root);
  /* assertion (!(input_q).size) */
  assert(!(input_q.size != 0u));
  free((void *)input_q.root);
}

// uninit_io
// file process.c line 485
static void uninit_io(void)
{
  signed int return_value_pthread_join_1;
  return_value_pthread_join_1=pthread_join(source_thread, (void **)(void *)0);
  if(!(return_value_pthread_join_1 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  signed int return_value_pthread_mutex_lock_2;
  return_value_pthread_mutex_lock_2=pthread_mutex_lock(&sink_mutex);
  if(!(return_value_pthread_mutex_lock_2 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  finish = (_Bool)1;
  signed int return_value_pthread_cond_signal_3;
  return_value_pthread_cond_signal_3=pthread_cond_signal(&sink_cond);
  if(!(return_value_pthread_cond_signal_3 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  signed int return_value_pthread_mutex_unlock_4;
  return_value_pthread_mutex_unlock_4=pthread_mutex_unlock(&sink_mutex);
  if(!(return_value_pthread_mutex_unlock_4 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  signed int return_value_pthread_join_5;
  return_value_pthread_join_5=pthread_join(sink_thread, (void **)(void *)0);
  if(!(return_value_pthread_join_5 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  /* assertion (!(output_q).size) */
  assert(!(output_q.size != 0u));
  free((void *)output_q.root);
}

// up_heap
// file process.h line 204
void up_heap(void *vroot, unsigned int size)
{
  struct position **root = (struct position **)vroot;
  struct position *el;
  unsigned int j = size;
  el = root[(signed long int)j];
  for( ; j >= 1u; j = (j - (unsigned int)1) / (unsigned int)2)
  {
    if(el->major >= root[(signed long int)((j + 4294967295u) / 2u)]->major)
    {
      if(el->major == root[(signed long int)((j + 4294967295u) / 2u)]->major)
      {
        if(el->minor >= root[(signed long int)((j + 4294967295u) / 2u)]->minor)
          goto __CPROVER_DUMP_L2;

      }

      else
      {

      __CPROVER_DUMP_L2:
        ;
        break;
      }
    }

    root[(signed long int)j] = root[(signed long int)((j - (unsigned int)1) / (unsigned int)2)];
  }
  root[(signed long int)j] = el;
}

// update_timespec
// file utimens.c line 133
static _Bool update_timespec(struct stat *statbuf, struct timespec **ts)
{
  struct timespec *timespec = *ts;
  if(timespec->tv_nsec == 1073741822l)
  {
    if(!((timespec + 1l)->tv_nsec == 1073741822l))
      goto __CPROVER_DUMP_L1;

    return (_Bool)1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(timespec->tv_nsec == 1073741823l)
    {
      if(!((timespec + 1l)->tv_nsec == 1073741823l))
        goto __CPROVER_DUMP_L2;

      *ts = (struct timespec *)(void *)0;
      return (_Bool)0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(timespec->tv_nsec == 1073741822l)
        timespec[(signed long int)0]=get_stat_atime(statbuf);

      else
        if(timespec->tv_nsec == 1073741823l)
          gettime(&timespec[(signed long int)0]);

      if((timespec + 1l)->tv_nsec == 1073741822l)
        timespec[(signed long int)1]=get_stat_mtime(statbuf);

      else
        if((timespec + 1l)->tv_nsec == 1073741823l)
          gettime(&timespec[(signed long int)1]);

      return (_Bool)0;
    }
  }
}

// usage
// file main.c line 262
static void usage(void)
{
  signed int return_value_printf_2 = printf("%s%s%s%s%s%s", (const void *)"Usage:\n1. PROG [-n WTHRS] [-k|-c|-t] [-d|-z] [-1 .. -9] [-f] [-v] [-S] {FILE}\n2. PROG -h|-V\n\nRecognized PROG names:\n\n  bunzip2, lbunzip2  : Decompress. Forceable with `-d'.\n  bzcat, lbzcat      : Decompress to stdout. Forceable with `-cd'.\n  <otherwise>        : Compress. Forceable with `-z'.\n\nEnvironment variables:\n\n  LBZIP2, BZIP2,\n  BZIP               : Insert arguments between PROG and the rest of the\n                       command line. Tokens are separated by spaces and tabs;\n                      ", (const void *)" no escaping.\n\nOptions:\n\n  -n WTHRS           : Set the number of (de)compressor threads to WTHRS, where\n                       WTHRS is a positive integer.\n  -k, --keep         : Don't remove FILE operands. Open regular input files\n                       with more than one link.\n  -c, --stdout       : Write output to stdout even with FILE operands. Implies\n                       `-k'. Incompatible with `-t'.\n  -t, --test         : Test decompression; discard output instead of writing it\n                ", (const void *)"       to files or stdout. Implies `-k'. Incompatible with\n                       `-c'.\n  -d, --decompress   : Force decompression over the selection by PROG.\n  -z, --compress     : Force compression over the selection by PROG.\n  -1 .. -9           : Set the compression block size to 100K .. 900K.\n  --fast             : Alias for `-1'.\n  --best             : Alias for `-9'. This is the default.\n  -f, --force        : Open non-regular input files. Open input files with more\n                       than one", (const void *)" link. Try to remove each output file before\n                       opening it. With `-cd' copy files not in bzip2 format.\n  -s, --small        : Reduce memory usage at cost of performance.\n  -u, --sequential   : Perform splitting input blocks sequentially. This may\n                       improve compression ratio and decrease CPU usage, but\n                       will degrade scalability.\n  -v, --verbose      : Log each (de)compression start to stderr. Display\n                       compression ratio an", (const void *)"d space savings. Display progress\n                       information if stderr is connected to a terminal.\n  -S                 : Print condition variable statistics to stderr.\n  -q, --quiet,\n  --repetitive-fast,\n  --repetitive-best,\n  --exponential      : Accepted for compatibility, otherwise ignored.\n  -h, --help         : Print this help to stdout and exit.\n  -L, --license, -V,\n  --version          : Print version information to stdout and exit.\n\nOperands:\n\n  FILE               : Specify files to comp", (const void *)"ress or decompress. If no FILE is\n                       given, work as a filter. FILEs with `.bz2', `.tbz',\n                       `.tbz2' and `.tz2' name suffixes will be skipped when\n                       compressing. When decompressing, `.bz2' suffixes will be\n                       removed in output filenames; `.tbz', `.tbz2' and `.tz2'\n                       suffixes will be replaced by `.tar'; other filenames\n                       will be suffixed with `.out'.\n");
  signed int *return_value___errno_location_1;
  if(!(return_value_printf_2 >= 0))
  {
    return_value___errno_location_1=__errno_location();
    failx(*return_value___errno_location_1, "printf()");
  }

  signed int return_value_fclose_4;
  return_value_fclose_4=fclose(stdout);
  signed int *return_value___errno_location_3;
  if(!(return_value_fclose_4 == 0))
  {
    return_value___errno_location_3=__errno_location();
    failx(*return_value___errno_location_3, "fclose(stdout)");
  }

  _exit(0);
}

// utimens
// file utimens.c line 419
signed int utimens(const char *file, struct timespec *timespec)
{
  signed int return_value_fdutimens_1;
  return_value_fdutimens_1=fdutimens(-1, file, timespec);
  return return_value_fdutimens_1;
}

// validate_timespec
// file utimens.c line 86
static signed int validate_timespec(struct timespec *timespec)
{
  signed int result = 0;
  signed int utime_omit_count = 0;
  /* assertion timespec */
  assert(timespec != ((struct timespec *)NULL));
  _Bool tmp_if_expr_2;
  if(!(timespec->tv_nsec == 1073741823l))
    tmp_if_expr_2 = (timespec + (signed long int)0)->tv_nsec != (1l << 30) - 2l ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
  {
    if(timespec->tv_nsec >= 0l)
      tmp_if_expr_3 = (timespec + (signed long int)0)->tv_nsec < (signed long int)1000000000 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    tmp_if_expr_4 = !tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_4)
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    if(!((timespec + 1l)->tv_nsec == 1073741823l))
      tmp_if_expr_5 = (timespec + (signed long int)1)->tv_nsec != (1l << 30) - 2l ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
    {
      if((timespec + 1l)->tv_nsec >= 0l)
        tmp_if_expr_6 = (timespec + (signed long int)1)->tv_nsec < (signed long int)1000000000 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      tmp_if_expr_7 = !tmp_if_expr_6 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_8)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  _Bool tmp_if_expr_9;
  if(timespec->tv_nsec == 1073741823l)
    tmp_if_expr_9 = (_Bool)1;

  else
    tmp_if_expr_9 = (timespec + (signed long int)0)->tv_nsec == (1l << 30) - 2l ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_9)
  {
    (timespec + (signed long int)0)->tv_sec = (signed long int)0;
    result = 1;
    if(timespec->tv_nsec == 1073741822l)
      utime_omit_count = utime_omit_count + 1;

  }

  _Bool tmp_if_expr_10;
  if((timespec + 1l)->tv_nsec == 1073741823l)
    tmp_if_expr_10 = (_Bool)1;

  else
    tmp_if_expr_10 = (timespec + (signed long int)1)->tv_nsec == (1l << 30) - 2l ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_10)
  {
    (timespec + (signed long int)1)->tv_sec = (signed long int)0;
    result = 1;
    if((timespec + 1l)->tv_nsec == 1073741822l)
      utime_omit_count = utime_omit_count + 1;

  }

  return result + (signed int)(utime_omit_count == 1);
}

// vasnprintf
// file vasnprintf.h line 72
extern char * vasnprintf(char *resultbuf, unsigned long int *lengthp, const char *format, void **args)
{
  struct anonymous_10 d;
  struct anonymous_1 a;
  signed int return_value_printf_parse_1;
  return_value_printf_parse_1=printf_parse(format, &d, &a);
  void *return_value_malloc_6;
  void *return_value_realloc_7;
  unsigned long int tmp_post_8;
  const char *tmp_post_9;
  void *return_value_malloc_10;
  void *return_value_realloc_11;
  _Bool tmp_if_expr_96;
  _Bool tmp_if_expr_97;
  _Bool tmp_if_expr_98;
  _Bool tmp_if_expr_99;
  _Bool tmp_if_expr_100;
  _Bool tmp_if_expr_101;
  _Bool tmp_if_expr_102;
  _Bool tmp_if_expr_105;
  _Bool tmp_if_expr_104;
  signed int return_value_is_infinite_or_zerol_103;
  const char *tmp_post_12;
  const char *tmp_post_13;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_22;
  char *tmp_post_16;
  char *tmp_post_17;
  char *tmp_post_18;
  char *tmp_post_19;
  char *tmp_post_20;
  char *tmp_post_21;
  unsigned short int tmp_statement_expression_23;
  char *tmp_post_24;
  char *tmp_post_25;
  char *tmp_post_26;
  _Bool tmp_if_expr_33;
  char *tmp_post_27;
  char *tmp_post_28;
  char *tmp_post_29;
  char *tmp_post_30;
  char *tmp_post_31;
  char *tmp_post_32;
  _Bool tmp_if_expr_58;
  char *tmp_post_34;
  char *tmp_post_35;
  char *tmp_post_36;
  _Bool tmp_if_expr_57;
  char *tmp_post_37;
  char *tmp_post_38;
  char *tmp_post_39;
  char *tmp_post_40;
  char *tmp_post_41;
  char *tmp_post_42;
  char *tmp_post_43;
  _Bool tmp_if_expr_56;
  char *tmp_post_44;
  char *tmp_post_45;
  char *tmp_post_46;
  _Bool tmp_if_expr_55;
  char *tmp_post_47;
  char *tmp_post_48;
  char *tmp_post_49;
  char *tmp_post_50;
  char *tmp_post_51;
  char *tmp_post_52;
  char *tmp_post_53;
  char *tmp_post_54;
  char *tmp_post_60;
  char *tmp_post_61;
  char *tmp_post_62;
  void *return_value_malloc_63;
  void *return_value_realloc_64;
  char *tmp_post_65;
  char *tmp_post_66;
  char *tmp_post_67;
  char *tmp_post_68;
  char *tmp_post_69;
  char *tmp_post_70;
  char *tmp_post_71;
  char *tmp_post_72;
  char *tmp_post_73;
  const char *tmp_post_74;
  char *tmp_post_75;
  const char *tmp_post_76;
  char *tmp_post_77;
  char *tmp_post_78;
  char *tmp_post_79;
  unsigned int tmp_post_80;
  unsigned int tmp_post_81;
  void *return_value_malloc_83;
  void *return_value_realloc_84;
  signed int tmp_if_expr_91;
  _Bool tmp_if_expr_90;
  void *return_value_malloc_93;
  void *return_value_realloc_94;
  void *return_value_malloc_107;
  void *return_value_realloc_108;
  if(!(return_value_printf_parse_1 >= 0))
    return (char *)(void *)0;

  else
  {
    signed int return_value_printf_fetchargs_3;
    return_value_printf_fetchargs_3=printf_fetchargs(args, &a);
    if(!(return_value_printf_fetchargs_3 >= 0))
    {
      if(!(d.dir == d.direct_alloc_dir))
        free((void *)d.dir);

      if(!(a.arg == a.direct_alloc_arg))
        free((void *)a.arg);

      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = 22;
      return (char *)(void *)0;
    }

    unsigned long int buf_neededlength;
    char *buf;
    char *buf_malloced;
    const char *cp;
    unsigned long int i;
    struct anonymous_3 *dp;
    char *result;
    unsigned long int allocated;
    unsigned long int length;
    buf_neededlength=xsum4((unsigned long int)7, d.max_width_length, d.max_precision_length, (unsigned long int)6);
    if(!(buf_neededlength >= 4000ul))
    {
      void *return_value___builtin_alloca_4;
      return_value___builtin_alloca_4=__builtin_alloca(buf_neededlength * sizeof(char) /*1ul*/ );
      buf = (char *)return_value___builtin_alloca_4;
      buf_malloced = (char *)(void *)0;
    }

    else
    {
      unsigned long int buf_memsize = buf_neededlength <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)buf_neededlength * sizeof(char) /*1ul*/  : 18446744073709551615UL;
      if(buf_memsize == 18446744073709551615UL)
        goto out_of_memory_1;

      void *return_value_malloc_5;
      return_value_malloc_5=malloc(buf_memsize);
      buf = (char *)return_value_malloc_5;
      if(buf == ((char *)NULL))
        goto out_of_memory_1;

      buf_malloced = buf;
    }
    if(!(resultbuf == ((char *)NULL)))
    {
      result = resultbuf;
      allocated = *lengthp;
    }

    else
    {
      result = (char *)(void *)0;
      allocated = (unsigned long int)0;
    }
    length = (unsigned long int)0;
    cp = format;
    i = (unsigned long int)0;
    dp = &d.dir[(signed long int)0];
    for( ; (_Bool)1; dp = dp + 1l)
    {
      if(!(cp == dp->dir_start))
      {
        unsigned long int vasnprintf__1__2__5__1__1__n = (unsigned long int)(dp->dir_start - cp);
        unsigned long int augmented_length;
        augmented_length=xsum(length, vasnprintf__1__2__5__1__1__n);
        if(!(allocated >= augmented_length))
        {
          unsigned long int vasnprintf__1__2__5__1__1__1__memory_size;
          char *vasnprintf__1__2__5__1__1__1__memory;
          allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
          if(!(allocated >= augmented_length))
            allocated = augmented_length;

          vasnprintf__1__2__5__1__1__1__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
          if(vasnprintf__1__2__5__1__1__1__memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(result == ((char *)NULL) || result == resultbuf)
          {
            return_value_malloc_6=malloc(vasnprintf__1__2__5__1__1__1__memory_size);
            vasnprintf__1__2__5__1__1__1__memory = (char *)return_value_malloc_6;
          }

          else
          {
            return_value_realloc_7=realloc((void *)result, vasnprintf__1__2__5__1__1__1__memory_size);
            vasnprintf__1__2__5__1__1__1__memory = (char *)return_value_realloc_7;
          }
          if(vasnprintf__1__2__5__1__1__1__memory == ((char *)NULL))
            goto out_of_memory;

          if(result == resultbuf && length >= 1ul)
            memcpy((void *)vasnprintf__1__2__5__1__1__1__memory, (const void *)result, length);

          result = vasnprintf__1__2__5__1__1__1__memory;
        }

        memcpy((void *)(result + (signed long int)length), (const void *)(const char *)cp, vasnprintf__1__2__5__1__1__n);
        length = augmented_length;
      }

      if(i == d.count)
        break;

      if((signed int)dp->conversion == 37)
      {
        unsigned long int vasnprintf__1__2__5__1__2__augmented_length;
        if(!(dp->arg_index == 18446744073709551615ul))
          abort();

        vasnprintf__1__2__5__1__2__augmented_length=xsum(length, (unsigned long int)1);
        if(!(allocated >= vasnprintf__1__2__5__1__2__augmented_length))
        {
          unsigned long int vasnprintf__1__2__5__1__2__1__memory_size;
          char *vasnprintf__1__2__5__1__2__1__memory;
          allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
          if(!(allocated >= vasnprintf__1__2__5__1__2__augmented_length))
            allocated = vasnprintf__1__2__5__1__2__augmented_length;

          vasnprintf__1__2__5__1__2__1__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
          if(vasnprintf__1__2__5__1__2__1__memory_size == 18446744073709551615UL)
            goto out_of_memory;

          if(result == ((char *)NULL) || result == resultbuf)
          {
            return_value_malloc_10=malloc(vasnprintf__1__2__5__1__2__1__memory_size);
            vasnprintf__1__2__5__1__2__1__memory = (char *)return_value_malloc_10;
          }

          else
          {
            return_value_realloc_11=realloc((void *)result, vasnprintf__1__2__5__1__2__1__memory_size);
            vasnprintf__1__2__5__1__2__1__memory = (char *)return_value_realloc_11;
          }
          if(vasnprintf__1__2__5__1__2__1__memory == ((char *)NULL))
            goto out_of_memory;

          if(result == resultbuf && length >= 1ul)
            memcpy((void *)vasnprintf__1__2__5__1__2__1__memory, (const void *)result, length);

          result = vasnprintf__1__2__5__1__2__1__memory;
        }

        result[(signed long int)length] = (char)37;
        length = vasnprintf__1__2__5__1__2__augmented_length;
      }

      else
      {
        if(dp->arg_index == 18446744073709551615ul)
          abort();

        if((signed int)dp->conversion == 110)
          switch((signed int)(a.arg + (signed long int)dp->arg_index)->type)
          {
            case TYPE_COUNT_SCHAR_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_schar_pointer = (signed char)length;
              break;
            }
            case TYPE_COUNT_SHORT_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_short_pointer = (signed short int)length;
              break;
            }
            case TYPE_COUNT_INT_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_int_pointer = (signed int)length;
              break;
            }
            case TYPE_COUNT_LONGINT_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_longint_pointer = (signed long int)length;
              break;
            }
            case TYPE_COUNT_LONGLONGINT_POINTER:
            {
              *(a.arg + (signed long int)dp->arg_index)->a.a_count_longlongint_pointer = (signed long long int)length;
              break;
            }
            default:
              abort();
          }

        else
        {
          if((signed int)dp->conversion == 102)
            tmp_if_expr_96 = (_Bool)1;

          else
            tmp_if_expr_96 = (signed int)dp->conversion == 70 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_96)
            tmp_if_expr_97 = (_Bool)1;

          else
            tmp_if_expr_97 = (signed int)dp->conversion == 101 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_97)
            tmp_if_expr_98 = (_Bool)1;

          else
            tmp_if_expr_98 = (signed int)dp->conversion == 69 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_98)
            tmp_if_expr_99 = (_Bool)1;

          else
            tmp_if_expr_99 = (signed int)dp->conversion == 103 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_99)
            tmp_if_expr_100 = (_Bool)1;

          else
            tmp_if_expr_100 = (signed int)dp->conversion == 71 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_100)
            tmp_if_expr_101 = (_Bool)1;

          else
            tmp_if_expr_101 = (signed int)dp->conversion == 97 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_101)
            tmp_if_expr_102 = (_Bool)1;

          else
            tmp_if_expr_102 = (signed int)dp->conversion == 65 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_102)
          {
            if((signed int)(a.arg + (signed long int)dp->arg_index)->type == TYPE_LONGDOUBLE)
            {
              return_value_is_infinite_or_zerol_103=is_infinite_or_zerol((a.arg + (signed long int)dp->arg_index)->a.a_longdouble);
              tmp_if_expr_104 = return_value_is_infinite_or_zerol_103 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_104 = (_Bool)0;
            tmp_if_expr_105 = (tmp_if_expr_104 ? (_Bool)1 : (_Bool)0) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_105 = (_Bool)0;
          if(tmp_if_expr_105)
          {
            signed int vasnprintf__1__2__5__1__3__2__flags = dp->flags;
            signed int has_width;
            unsigned long int width;
            signed int has_precision;
            unsigned long int precision;
            unsigned long int tmp_length;
            char tmpbuf[700l];
            char *tmp;
            char *pad_ptr;
            char *p;
            has_width = 0;
            width = (unsigned long int)0;
            if(!(dp->width_start == dp->width_end))
            {
              if(!(dp->width_arg_index == 18446744073709551615ul))
              {
                signed int vasnprintf__1__2__5__1__3__2__1__1__arg;
                if(!((signed int)(a.arg + (signed long int)dp->width_arg_index)->type == TYPE_INT))
                  abort();

                vasnprintf__1__2__5__1__3__2__1__1__arg = (a.arg + (signed long int)dp->width_arg_index)->a.a_int;
                if(!(vasnprintf__1__2__5__1__3__2__1__1__arg >= 0))
                {
                  vasnprintf__1__2__5__1__3__2__flags = vasnprintf__1__2__5__1__3__2__flags | 2;
                  width = (unsigned long int)(unsigned int)-vasnprintf__1__2__5__1__3__2__1__1__arg;
                }

                else
                  width = (unsigned long int)vasnprintf__1__2__5__1__3__2__1__1__arg;
              }

              else
              {
                const char *vasnprintf__1__2__5__1__3__2__1__2__digitp = dp->width_start;
                do
                {
                  tmp_post_12 = vasnprintf__1__2__5__1__3__2__1__2__digitp;
                  vasnprintf__1__2__5__1__3__2__1__2__digitp = vasnprintf__1__2__5__1__3__2__1__2__digitp + 1l;
                  width=xsum(width <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)width * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*tmp_post_12 - 48));
                }
                while(!(vasnprintf__1__2__5__1__3__2__1__2__digitp == dp->width_end));
              }
              has_width = 1;
            }

            has_precision = 0;
            precision = (unsigned long int)0;
            if(!(dp->precision_start == dp->precision_end))
            {
              if(!(dp->precision_arg_index == 18446744073709551615ul))
              {
                signed int vasnprintf__1__2__5__1__3__2__2__1__arg;
                if(!((signed int)(a.arg + (signed long int)dp->precision_arg_index)->type == TYPE_INT))
                  abort();

                vasnprintf__1__2__5__1__3__2__2__1__arg = (a.arg + (signed long int)dp->precision_arg_index)->a.a_int;
                if(vasnprintf__1__2__5__1__3__2__2__1__arg >= 0)
                {
                  precision = (unsigned long int)vasnprintf__1__2__5__1__3__2__2__1__arg;
                  has_precision = 1;
                }

              }

              else
              {
                const char *digitp = dp->precision_start + (signed long int)1;
                precision = (unsigned long int)0;
                while(!(digitp == dp->precision_end))
                {
                  tmp_post_13 = digitp;
                  digitp = digitp + 1l;
                  precision=xsum(precision <= 18446744073709551615UL / (unsigned long int)10 ? (unsigned long int)precision * (unsigned long int)10 : 18446744073709551615UL, (unsigned long int)((signed int)*tmp_post_13 - 48));
                }
                has_precision = 1;
              }
            }

            if(has_precision == 0)
            {
              if((signed int)dp->conversion == 97)
                tmp_if_expr_14 = (_Bool)1;

              else
                tmp_if_expr_14 = (signed int)dp->conversion == 65 ? (_Bool)1 : (_Bool)0;
              if(!tmp_if_expr_14)
                precision = (unsigned long int)6;

            }

            tmp_length = (unsigned long int)0;
            if(!(tmp_length >= precision))
              tmp_length = precision;

            tmp_length=xsum(tmp_length, (unsigned long int)12);
            if(!(tmp_length >= width))
              tmp_length = width;

            tmp_length=xsum(tmp_length, (unsigned long int)1);
            if(!(tmp_length >= 701ul))
              tmp = tmpbuf;

            else
            {
              unsigned long int tmp_memsize = tmp_length <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)tmp_length * sizeof(char) /*1ul*/  : 18446744073709551615UL;
              if(tmp_memsize == 18446744073709551615UL)
                goto out_of_memory;

              void *return_value_malloc_15;
              return_value_malloc_15=malloc(tmp_memsize);
              tmp = (char *)return_value_malloc_15;
              if(tmp == ((char *)NULL))
                goto out_of_memory;

            }
            pad_ptr = (char *)(void *)0;
            p = tmp;
            long double vasnprintf__1__2__5__1__3__2__4__arg = (a.arg + (signed long int)dp->arg_index)->a.a_longdouble;
            signed int return_value_rpl_isnanl_59;
            return_value_rpl_isnanl_59=rpl_isnanl(vasnprintf__1__2__5__1__3__2__4__arg);
            if(!(return_value_rpl_isnanl_59 == 0))
            {
              if((signed int)dp->conversion >= 65)
                tmp_if_expr_22 = (signed int)dp->conversion <= 90 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_22 = (_Bool)0;
              if(tmp_if_expr_22)
              {
                tmp_post_16 = p;
                p = p + 1l;
                *tmp_post_16 = (char)78;
                tmp_post_17 = p;
                p = p + 1l;
                *tmp_post_17 = (char)65;
                tmp_post_18 = p;
                p = p + 1l;
                *tmp_post_18 = (char)78;
              }

              else
              {
                tmp_post_19 = p;
                p = p + 1l;
                *tmp_post_19 = (char)110;
                tmp_post_20 = p;
                p = p + 1l;
                *tmp_post_20 = (char)97;
                tmp_post_21 = p;
                p = p + 1l;
                *tmp_post_21 = (char)110;
              }
            }

            else
            {
              signed int sign = 0;
              unsigned short int oldcw;
              unsigned short int _cw;
              asm("fnstcw %0" : "=m"(*(&_cw)) :  : );
              tmp_statement_expression_23 = _cw;
              oldcw = tmp_statement_expression_23;
              unsigned short int _ncw = (unsigned short int)((signed int)oldcw & ~0x0300 | 0x300);
              asm("fldcw %0" :  : "m"(*(&_ncw)) : );
              if(signbit(vasnprintf__1__2__5__1__3__2__4__arg))
              {
                sign = -1;
                vasnprintf__1__2__5__1__3__2__4__arg = -vasnprintf__1__2__5__1__3__2__4__arg;
              }

              if(!(sign >= 0))
              {
                tmp_post_24 = p;
                p = p + 1l;
                *tmp_post_24 = (char)45;
              }

              else
                if(!((4 & vasnprintf__1__2__5__1__3__2__flags) == 0))
                {
                  tmp_post_25 = p;
                  p = p + 1l;
                  *tmp_post_25 = (char)43;
                }

                else
                  if(!((8 & vasnprintf__1__2__5__1__3__2__flags) == 0))
                  {
                    tmp_post_26 = p;
                    p = p + 1l;
                    *tmp_post_26 = (char)32;
                  }

              if(vasnprintf__1__2__5__1__3__2__4__arg > 0.0L && IEEE_FLOAT_EQUAL(vasnprintf__1__2__5__1__3__2__4__arg + vasnprintf__1__2__5__1__3__2__4__arg, vasnprintf__1__2__5__1__3__2__4__arg))
              {
                if((signed int)dp->conversion >= 65)
                  tmp_if_expr_33 = (signed int)dp->conversion <= 90 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr_33 = (_Bool)0;
                if(tmp_if_expr_33)
                {
                  tmp_post_27 = p;
                  p = p + 1l;
                  *tmp_post_27 = (char)73;
                  tmp_post_28 = p;
                  p = p + 1l;
                  *tmp_post_28 = (char)78;
                  tmp_post_29 = p;
                  p = p + 1l;
                  *tmp_post_29 = (char)70;
                }

                else
                {
                  tmp_post_30 = p;
                  p = p + 1l;
                  *tmp_post_30 = (char)105;
                  tmp_post_31 = p;
                  p = p + 1l;
                  *tmp_post_31 = (char)110;
                  tmp_post_32 = p;
                  p = p + 1l;
                  *tmp_post_32 = (char)102;
                }
              }

              else
              {
                if(!IEEE_FLOAT_EQUAL(vasnprintf__1__2__5__1__3__2__4__arg, 0.0L))
                  abort();

                pad_ptr = p;
                if((signed int)dp->conversion == 102)
                  tmp_if_expr_58 = (_Bool)1;

                else
                  tmp_if_expr_58 = (signed int)dp->conversion == 70 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_58)
                {
                  tmp_post_34 = p;
                  p = p + 1l;
                  *tmp_post_34 = (char)48;
                  if(precision >= 1ul || !((16 & vasnprintf__1__2__5__1__3__2__flags) == 0))
                  {
                    tmp_post_35 = p;
                    p = p + 1l;
                    *tmp_post_35=decimal_point_char();
                    for( ; precision >= 1ul; precision = precision - 1ul)
                    {
                      tmp_post_36 = p;
                      p = p + 1l;
                      *tmp_post_36 = (char)48;
                    }
                  }

                }

                else
                {
                  if((signed int)dp->conversion == 101)
                    tmp_if_expr_57 = (_Bool)1;

                  else
                    tmp_if_expr_57 = (signed int)dp->conversion == 69 ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr_57)
                  {
                    tmp_post_37 = p;
                    p = p + 1l;
                    *tmp_post_37 = (char)48;
                    if(precision >= 1ul || !((16 & vasnprintf__1__2__5__1__3__2__flags) == 0))
                    {
                      tmp_post_38 = p;
                      p = p + 1l;
                      *tmp_post_38=decimal_point_char();
                      for( ; precision >= 1ul; precision = precision - 1ul)
                      {
                        tmp_post_39 = p;
                        p = p + 1l;
                        *tmp_post_39 = (char)48;
                      }
                    }

                    tmp_post_40 = p;
                    p = p + 1l;
                    *tmp_post_40 = dp->conversion;
                    tmp_post_41 = p;
                    p = p + 1l;
                    *tmp_post_41 = (char)43;
                    tmp_post_42 = p;
                    p = p + 1l;
                    *tmp_post_42 = (char)48;
                    tmp_post_43 = p;
                    p = p + 1l;
                    *tmp_post_43 = (char)48;
                  }

                  else
                  {
                    if((signed int)dp->conversion == 103)
                      tmp_if_expr_56 = (_Bool)1;

                    else
                      tmp_if_expr_56 = (signed int)dp->conversion == 71 ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr_56)
                    {
                      tmp_post_44 = p;
                      p = p + 1l;
                      *tmp_post_44 = (char)48;
                      if(!((16 & vasnprintf__1__2__5__1__3__2__flags) == 0))
                      {
                        unsigned long int ndigits = precision > (unsigned long int)0 ? precision - (unsigned long int)1 : (unsigned long int)0;
                        tmp_post_45 = p;
                        p = p + 1l;
                        *tmp_post_45=decimal_point_char();
                        for( ; ndigits >= 1ul; ndigits = ndigits - 1ul)
                        {
                          tmp_post_46 = p;
                          p = p + 1l;
                          *tmp_post_46 = (char)48;
                        }
                      }

                    }

                    else
                    {
                      if((signed int)dp->conversion == 97)
                        tmp_if_expr_55 = (_Bool)1;

                      else
                        tmp_if_expr_55 = (signed int)dp->conversion == 65 ? (_Bool)1 : (_Bool)0;
                      if(tmp_if_expr_55)
                      {
                        tmp_post_47 = p;
                        p = p + 1l;
                        *tmp_post_47 = (char)48;
                        tmp_post_48 = p;
                        p = p + 1l;
                        *tmp_post_48 = (char)(((signed int)dp->conversion - 65) + 88);
                        pad_ptr = p;
                        tmp_post_49 = p;
                        p = p + 1l;
                        *tmp_post_49 = (char)48;
                        if(precision >= 1ul || !((16 & vasnprintf__1__2__5__1__3__2__flags) == 0))
                        {
                          tmp_post_50 = p;
                          p = p + 1l;
                          *tmp_post_50=decimal_point_char();
                          for( ; precision >= 1ul; precision = precision - 1ul)
                          {
                            tmp_post_51 = p;
                            p = p + 1l;
                            *tmp_post_51 = (char)48;
                          }
                        }

                        tmp_post_52 = p;
                        p = p + 1l;
                        *tmp_post_52 = (char)(((signed int)dp->conversion - 65) + 80);
                        tmp_post_53 = p;
                        p = p + 1l;
                        *tmp_post_53 = (char)43;
                        tmp_post_54 = p;
                        p = p + 1l;
                        *tmp_post_54 = (char)48;
                      }

                      else
                        abort();
                    }
                  }
                }
              }
              unsigned short int vasnprintf__1__2__5__1__3__2__4__2__6___ncw = oldcw;
              asm("fldcw %0" :  : "m"(*(&vasnprintf__1__2__5__1__3__2__4__2__6___ncw)) : );
            }
            if(!(has_width == 0) && !((unsigned long int)(p - tmp) >= width))
            {
              unsigned long int pad = width - (unsigned long int)(p - tmp);
              char *end = p + (signed long int)pad;
              if(!((2 & vasnprintf__1__2__5__1__3__2__flags) == 0))
                for( ; pad >= 1ul; pad = pad - 1ul)
                {
                  tmp_post_60 = p;
                  p = p + 1l;
                  *tmp_post_60 = (char)32;
                }

              else
                if(!((32 & vasnprintf__1__2__5__1__3__2__flags) == 0) && !(pad_ptr == ((char *)NULL)))
                {
                  char *vasnprintf__1__2__5__1__3__2__5__2__q = end;
                  for( ; !(pad_ptr >= p); *vasnprintf__1__2__5__1__3__2__5__2__q = *p)
                  {
                    vasnprintf__1__2__5__1__3__2__5__2__q = vasnprintf__1__2__5__1__3__2__5__2__q - 1l;
                    p = p - 1l;
                  }
                  for( ; pad >= 1ul; pad = pad - 1ul)
                  {
                    tmp_post_61 = p;
                    p = p + 1l;
                    *tmp_post_61 = (char)48;
                  }
                }

                else
                {
                  char *q = end;
                  for( ; !(tmp >= p); *q = *p)
                  {
                    q = q - 1l;
                    p = p - 1l;
                  }
                  for( ; pad >= 1ul; pad = pad - 1ul)
                  {
                    tmp_post_62 = p;
                    p = p + 1l;
                    *tmp_post_62 = (char)32;
                  }
                }
              p = end;
            }

            unsigned long int count = (unsigned long int)(p - tmp);
            if(count >= tmp_length)
              abort();

            if(count >= allocated + -length)
            {
              unsigned long int n;
              n=xsum(length, count);
              if(!(allocated >= n))
              {
                unsigned long int memory_size;
                char *memory;
                allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
                if(!(allocated >= n))
                  allocated = n;

                memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
                if(memory_size == 18446744073709551615UL)
                  goto out_of_memory;

                if(result == ((char *)NULL) || result == resultbuf)
                {
                  return_value_malloc_63=malloc(memory_size);
                  memory = (char *)return_value_malloc_63;
                }

                else
                {
                  return_value_realloc_64=realloc((void *)result, memory_size);
                  memory = (char *)return_value_realloc_64;
                }
                if(memory == ((char *)NULL))
                  goto out_of_memory;

                if(result == resultbuf && length >= 1ul)
                  memcpy((void *)memory, (const void *)result, length);

                result = memory;
              }

            }

            memcpy((void *)(result + (signed long int)length), (const void *)tmp, count * sizeof(char) /*1ul*/ );
            if(!(tmp == tmpbuf))
              free((void *)tmp);

            length = length + count;
          }

          else
          {
            enum anonymous_12 type = (a.arg + (signed long int)dp->arg_index)->type;
            signed int flags = dp->flags;
            char *fbp;
            unsigned int prefix_count;
            signed int prefixes[2l];
            signed int orig_errno;
            fbp = buf;
            tmp_post_65 = fbp;
            fbp = fbp + 1l;
            *tmp_post_65 = (char)37;
            if(!((1 & flags) == 0))
            {
              tmp_post_66 = fbp;
              fbp = fbp + 1l;
              *tmp_post_66 = (char)39;
            }

            if(!((2 & flags) == 0))
            {
              tmp_post_67 = fbp;
              fbp = fbp + 1l;
              *tmp_post_67 = (char)45;
            }

            if(!((4 & flags) == 0))
            {
              tmp_post_68 = fbp;
              fbp = fbp + 1l;
              *tmp_post_68 = (char)43;
            }

            if(!((8 & flags) == 0))
            {
              tmp_post_69 = fbp;
              fbp = fbp + 1l;
              *tmp_post_69 = (char)32;
            }

            if(!((16 & flags) == 0))
            {
              tmp_post_70 = fbp;
              fbp = fbp + 1l;
              *tmp_post_70 = (char)35;
            }

            if(!((64 & flags) == 0))
            {
              tmp_post_71 = fbp;
              fbp = fbp + 1l;
              *tmp_post_71 = (char)73;
            }

            if(!((32 & flags) == 0))
            {
              tmp_post_72 = fbp;
              fbp = fbp + 1l;
              *tmp_post_72 = (char)48;
            }

            if(!(dp->width_start == dp->width_end))
            {
              unsigned long int vasnprintf__1__2__5__1__3__3__1__1__n = (unsigned long int)(dp->width_end - dp->width_start);
              memcpy((void *)fbp, (const void *)dp->width_start, vasnprintf__1__2__5__1__3__3__1__1__n * sizeof(char) /*1ul*/ );
              fbp = fbp + (signed long int)vasnprintf__1__2__5__1__3__3__1__1__n;
            }

            if(!(dp->precision_start == dp->precision_end))
            {
              unsigned long int vasnprintf__1__2__5__1__3__3__2__1__n = (unsigned long int)(dp->precision_end - dp->precision_start);
              memcpy((void *)fbp, (const void *)dp->precision_start, vasnprintf__1__2__5__1__3__3__2__1__n * sizeof(char) /*1ul*/ );
              fbp = fbp + (signed long int)vasnprintf__1__2__5__1__3__3__2__1__n;
            }

            switch((signed int)type)
            {
              case TYPE_LONGLONGINT:

              case TYPE_ULONGLONGINT:
              {
                tmp_post_77 = fbp;
                fbp = fbp + 1l;
                *tmp_post_77 = (char)108;
              }
              case TYPE_LONGINT:

              case TYPE_ULONGINT:

              case TYPE_WIDE_CHAR:

              case TYPE_WIDE_STRING:
              {
                tmp_post_78 = fbp;
                fbp = fbp + 1l;
                *tmp_post_78 = (char)108;
                break;
              }
              case TYPE_LONGDOUBLE:
              {
                tmp_post_79 = fbp;
                fbp = fbp + 1l;
                *tmp_post_79 = (char)76;
              }
            }
            *fbp = dp->conversion;
            fbp[(signed long int)1] = (char)0;
            prefix_count = (unsigned int)0;
            if(!(dp->width_arg_index == 18446744073709551615ul))
            {
              if(!((signed int)(a.arg + (signed long int)dp->width_arg_index)->type == TYPE_INT))
                abort();

              tmp_post_80 = prefix_count;
              prefix_count = prefix_count + 1u;
              prefixes[(signed long int)tmp_post_80] = (a.arg + (signed long int)dp->width_arg_index)->a.a_int;
            }

            if(!(dp->precision_arg_index == 18446744073709551615ul))
            {
              if(!((signed int)(a.arg + (signed long int)dp->precision_arg_index)->type == TYPE_INT))
                abort();

              tmp_post_81 = prefix_count;
              prefix_count = prefix_count + 1u;
              prefixes[(signed long int)tmp_post_81] = (a.arg + (signed long int)dp->precision_arg_index)->a.a_int;
            }

            unsigned long int return_value_xsum_85;
            return_value_xsum_85=xsum(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
            if(!(allocated >= return_value_xsum_85))
            {
              unsigned long int vasnprintf__1__2__5__1__3__3__6__memory_size;
              char *vasnprintf__1__2__5__1__3__3__6__memory;
              allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
              unsigned long int return_value_xsum_82;
              return_value_xsum_82=xsum(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
              if(!(allocated >= return_value_xsum_82))
                allocated=xsum(length, (((unsigned long int)2 + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));

              vasnprintf__1__2__5__1__3__3__6__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
              if(vasnprintf__1__2__5__1__3__3__6__memory_size == 18446744073709551615UL)
                goto out_of_memory;

              if(result == ((char *)NULL) || result == resultbuf)
              {
                return_value_malloc_83=malloc(vasnprintf__1__2__5__1__3__3__6__memory_size);
                vasnprintf__1__2__5__1__3__3__6__memory = (char *)return_value_malloc_83;
              }

              else
              {
                return_value_realloc_84=realloc((void *)result, vasnprintf__1__2__5__1__3__3__6__memory_size);
                vasnprintf__1__2__5__1__3__3__6__memory = (char *)return_value_realloc_84;
              }
              if(vasnprintf__1__2__5__1__3__3__6__memory == ((char *)NULL))
                goto out_of_memory;

              if(result == resultbuf && length >= 1ul)
                memcpy((void *)vasnprintf__1__2__5__1__3__3__6__memory, (const void *)result, length);

              result = vasnprintf__1__2__5__1__3__3__6__memory;
            }

            *((char *)(result + (signed long int)length)) = (char)0;
            signed int *return_value___errno_location_86;
            return_value___errno_location_86=__errno_location();
            orig_errno = *return_value___errno_location_86;
            do
            {
              signed int vasnprintf__1__2__5__1__3__3__7__1__count = -1;
              signed int retcount = 0;
              unsigned long int maxlen = allocated - length;
              if(maxlen >= 2147483648ul)
                maxlen = (unsigned long int)0x7fffffff / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ );

              maxlen = maxlen * (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ );
              signed int *return_value___errno_location_87;
              return_value___errno_location_87=__errno_location();
              *return_value___errno_location_87 = 0;
              switch((signed int)type)
              {
                case TYPE_SCHAR:
                {
                  signed int vasnprintf__1__2__5__1__3__3__7__1__1__1__arg = (signed int)(a.arg + (signed long int)dp->arg_index)->a.a_schar;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__1__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__1__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__1__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_UCHAR:
                {
                  unsigned int vasnprintf__1__2__5__1__3__3__7__1__1__2__arg = (unsigned int)(a.arg + (signed long int)dp->arg_index)->a.a_uchar;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__2__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__2__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__2__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_SHORT:
                {
                  signed int vasnprintf__1__2__5__1__3__3__7__1__1__3__arg = (signed int)(a.arg + (signed long int)dp->arg_index)->a.a_short;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__3__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__3__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__3__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_USHORT:
                {
                  unsigned int vasnprintf__1__2__5__1__3__3__7__1__1__4__arg = (unsigned int)(a.arg + (signed long int)dp->arg_index)->a.a_ushort;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__4__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__4__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__4__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_INT:
                {
                  signed int vasnprintf__1__2__5__1__3__3__7__1__1__5__arg = (a.arg + (signed long int)dp->arg_index)->a.a_int;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__5__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__5__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__5__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_UINT:
                {
                  unsigned int arg = (a.arg + (signed long int)dp->arg_index)->a.a_uint;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_LONGINT:
                {
                  signed long int vasnprintf__1__2__5__1__3__3__7__1__1__7__arg = (a.arg + (signed long int)dp->arg_index)->a.a_longint;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__7__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__7__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__7__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_ULONGINT:
                {
                  unsigned long int vasnprintf__1__2__5__1__3__3__7__1__1__8__arg = (a.arg + (signed long int)dp->arg_index)->a.a_ulongint;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__8__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__8__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__8__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_LONGLONGINT:
                {
                  signed long long int vasnprintf__1__2__5__1__3__3__7__1__1__9__arg = (a.arg + (signed long int)dp->arg_index)->a.a_longlongint;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__9__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__9__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__9__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_ULONGLONGINT:
                {
                  unsigned long long int vasnprintf__1__2__5__1__3__3__7__1__1__10__arg = (a.arg + (signed long int)dp->arg_index)->a.a_ulonglongint;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__10__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__10__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__10__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_DOUBLE:
                {
                  double vasnprintf__1__2__5__1__3__3__7__1__1__11__arg = (a.arg + (signed long int)dp->arg_index)->a.a_double;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__11__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__11__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__11__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_LONGDOUBLE:
                {
                  long double vasnprintf__1__2__5__1__3__3__7__1__1__12__arg = (a.arg + (signed long int)dp->arg_index)->a.a_longdouble;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__12__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__12__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__12__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_CHAR:
                {
                  signed int vasnprintf__1__2__5__1__3__3__7__1__1__13__arg = (a.arg + (signed long int)dp->arg_index)->a.a_char;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__13__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__13__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__13__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_WIDE_CHAR:
                {
                  unsigned int vasnprintf__1__2__5__1__3__3__7__1__1__14__arg = (a.arg + (signed long int)dp->arg_index)->a.a_wide_char;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__14__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__14__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__14__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_STRING:
                {
                  const char *vasnprintf__1__2__5__1__3__3__7__1__1__15__arg = (a.arg + (signed long int)dp->arg_index)->a.a_string;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__15__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__15__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__15__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_WIDE_STRING:
                {
                  const signed int *vasnprintf__1__2__5__1__3__3__7__1__1__16__arg = (a.arg + (signed long int)dp->arg_index)->a.a_wide_string;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__16__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__16__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__16__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                case TYPE_POINTER:
                {
                  void *vasnprintf__1__2__5__1__3__3__7__1__1__17__arg = (a.arg + (signed long int)dp->arg_index)->a.a_pointer;
                  switch(prefix_count)
                  {
                    case (unsigned int)0:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, vasnprintf__1__2__5__1__3__3__7__1__1__17__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)1:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], vasnprintf__1__2__5__1__3__3__7__1__1__17__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    case (unsigned int)2:
                    {
                      retcount=snprintf((char *)(result + (signed long int)length), maxlen, buf, prefixes[(signed long int)0], prefixes[(signed long int)1], vasnprintf__1__2__5__1__3__3__7__1__1__17__arg, &vasnprintf__1__2__5__1__3__3__7__1__count);
                      break;
                    }
                    default:
                      abort();
                  }
                  break;
                }
                default:
                  abort();
              }
              if(vasnprintf__1__2__5__1__3__3__7__1__count >= 0)
              {
                if(!((unsigned long int)vasnprintf__1__2__5__1__3__3__7__1__count >= maxlen))
                {
                  if(!((signed int)result[(signed long int)length + (signed long int)vasnprintf__1__2__5__1__3__3__7__1__count] == 0))
                    abort();

                }

                if(!(vasnprintf__1__2__5__1__3__3__7__1__count >= retcount))
                  vasnprintf__1__2__5__1__3__3__7__1__count = retcount;

              }

              else
                if(!((signed int)fbp[1l] == 0))
                {
                  fbp[(signed long int)1] = (char)0;
                  continue;
                }

                else
                  if(retcount >= 0)
                    vasnprintf__1__2__5__1__3__3__7__1__count = retcount;

              if(!(vasnprintf__1__2__5__1__3__3__7__1__count >= 0))
              {
                signed int saved_errno;
                signed int *return_value___errno_location_88;
                return_value___errno_location_88=__errno_location();
                saved_errno = *return_value___errno_location_88;
                if(!(result == ((char *)NULL)) && !(result == resultbuf))
                  free((void *)result);

                if(!(buf_malloced == ((char *)NULL)))
                  free((void *)buf_malloced);

                if(!(d.dir == d.direct_alloc_dir))
                  free((void *)d.dir);

                if(!(a.arg == a.direct_alloc_arg))
                  free((void *)a.arg);

                signed int *return_value___errno_location_89;
                return_value___errno_location_89=__errno_location();
                if(!(saved_errno == 0))
                  tmp_if_expr_91 = saved_errno;

                else
                {
                  if((signed int)dp->conversion == 99)
                    tmp_if_expr_90 = (_Bool)1;

                  else
                    tmp_if_expr_90 = (signed int)dp->conversion == 115 ? (_Bool)1 : (_Bool)0;
                  tmp_if_expr_91 = tmp_if_expr_90 ? 84 : 22;
                }
                *return_value___errno_location_89 = tmp_if_expr_91;
                return (char *)(void *)0;
              }

              if((unsigned long int)(1u + (unsigned int)vasnprintf__1__2__5__1__3__3__7__1__count) >= maxlen)
              {
                if(maxlen == 2147483647ul)
                  goto overflow;

                else
                {
                  unsigned long int vasnprintf__1__2__5__1__3__3__7__1__5__1__n;
                  unsigned long int return_value_xsum_92;
                  return_value_xsum_92=xsum(length, (((unsigned long int)((unsigned int)vasnprintf__1__2__5__1__3__3__7__1__count + (unsigned int)2) + sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ) - (unsigned long int)1) / (sizeof(char) /*1ul*/  / sizeof(char) /*1ul*/ ));
                  vasnprintf__1__2__5__1__3__3__7__1__5__1__n=xmax(return_value_xsum_92, allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL);
                  if(!(allocated >= vasnprintf__1__2__5__1__3__3__7__1__5__1__n))
                  {
                    unsigned long int vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory_size;
                    char *vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory;
                    allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
                    if(!(allocated >= vasnprintf__1__2__5__1__3__3__7__1__5__1__n))
                      allocated = vasnprintf__1__2__5__1__3__3__7__1__5__1__n;

                    vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
                    if(vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory_size == 18446744073709551615UL)
                      goto out_of_memory;

                    if(result == ((char *)NULL) || result == resultbuf)
                    {
                      return_value_malloc_93=malloc(vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory_size);
                      vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory = (char *)return_value_malloc_93;
                    }

                    else
                    {
                      return_value_realloc_94=realloc((void *)result, vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory_size);
                      vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory = (char *)return_value_realloc_94;
                    }
                    if(vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory == ((char *)NULL))
                      goto out_of_memory;

                    if(result == resultbuf && length >= 1ul)
                      memcpy((void *)vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory, (const void *)result, length);

                    result = vasnprintf__1__2__5__1__3__3__7__1__5__1__1__memory;
                  }

                  continue;
                }
              }

              length = length + (unsigned long int)vasnprintf__1__2__5__1__3__3__7__1__count;
              break;
            }
            while((_Bool)1);
            signed int *return_value___errno_location_95;
            return_value___errno_location_95=__errno_location();
            *return_value___errno_location_95 = orig_errno;
          }
        }
      }
      cp = dp->dir_end;
      i = i + 1ul;
    }
    unsigned long int return_value_xsum_109;
    return_value_xsum_109=xsum(length, (unsigned long int)1);
    if(!(allocated >= return_value_xsum_109))
    {
      unsigned long int vasnprintf__1__2__6__memory_size;
      char *vasnprintf__1__2__6__memory;
      allocated = allocated > (unsigned long int)0 ? (allocated <= 18446744073709551615UL / (unsigned long int)2 ? (unsigned long int)allocated * (unsigned long int)2 : 18446744073709551615UL) : (unsigned long int)12;
      unsigned long int return_value_xsum_106;
      return_value_xsum_106=xsum(length, (unsigned long int)1);
      if(!(allocated >= return_value_xsum_106))
        allocated=xsum(length, (unsigned long int)1);

      vasnprintf__1__2__6__memory_size = allocated <= 18446744073709551615UL / sizeof(char) /*1ul*/  ? (unsigned long int)allocated * sizeof(char) /*1ul*/  : 18446744073709551615UL;
      if(vasnprintf__1__2__6__memory_size == 18446744073709551615UL)
        goto out_of_memory;

      if(result == ((char *)NULL) || result == resultbuf)
      {
        return_value_malloc_107=malloc(vasnprintf__1__2__6__memory_size);
        vasnprintf__1__2__6__memory = (char *)return_value_malloc_107;
      }

      else
      {
        return_value_realloc_108=realloc((void *)result, vasnprintf__1__2__6__memory_size);
        vasnprintf__1__2__6__memory = (char *)return_value_realloc_108;
      }
      if(vasnprintf__1__2__6__memory == ((char *)NULL))
        goto out_of_memory;

      if(result == resultbuf && length >= 1ul)
        memcpy((void *)vasnprintf__1__2__6__memory, (const void *)result, length);

      result = vasnprintf__1__2__6__memory;
    }

    result[(signed long int)length] = (char)0;
    if(!(result == resultbuf) && !(1ul + length >= allocated))
    {
      char *vasnprintf__1__2__7__memory;
      void *return_value_realloc_110;
      return_value_realloc_110=realloc((void *)result, (length + (unsigned long int)1) * sizeof(char) /*1ul*/ );
      vasnprintf__1__2__7__memory = (char *)return_value_realloc_110;
      if(!(vasnprintf__1__2__7__memory == ((char *)NULL)))
        result = vasnprintf__1__2__7__memory;

    }

    if(!(buf_malloced == ((char *)NULL)))
      free((void *)buf_malloced);

    if(!(d.dir == d.direct_alloc_dir))
      free((void *)d.dir);

    if(!(a.arg == a.direct_alloc_arg))
      free((void *)a.arg);

    *lengthp = length;
    return result;

  overflow:
    ;
    if(!(result == ((char *)NULL)) && !(result == resultbuf))
      free((void *)result);

    if(!(buf_malloced == ((char *)NULL)))
      free((void *)buf_malloced);

    if(!(d.dir == d.direct_alloc_dir))
      free((void *)d.dir);

    if(!(a.arg == a.direct_alloc_arg))
      free((void *)a.arg);

    signed int *return_value___errno_location_111;
    return_value___errno_location_111=__errno_location();
    *return_value___errno_location_111 = 75;
    return (char *)(void *)0;

  out_of_memory:
    ;
    if(!(result == ((char *)NULL)) && !(result == resultbuf))
      free((void *)result);

    if(!(buf_malloced == ((char *)NULL)))
      free((void *)buf_malloced);


  out_of_memory_1:
    ;
    if(!(d.dir == d.direct_alloc_dir))
      free((void *)d.dir);

    if(!(a.arg == a.direct_alloc_arg))
      free((void *)a.arg);

    signed int *return_value___errno_location_112;
    return_value___errno_location_112=__errno_location();
    *return_value___errno_location_112 = 12;
    return (char *)(void *)0;
  }
}

// version
// file main.c line 273
static void version(void)
{
  signed int return_value_printf_2 = printf("%s version %s\n%s\n\n%s%s", (const void *)"lbzip2", (const void *)"2.5", (const void *)"http://lbzip2.org/", (const void *)"Copyright (C) 2011, 2012, 2013, 2014 Mikolaj Izdebski\nCopyright (C) 2008, 2009, 2010 Laszlo Ersek\n\nThis program is free software: you can redistribute it and/or modify\nit under the terms of the GNU General Public License as published by\nthe Free Software Foundation, either version 3 of the License, or\n(at your option) any later version.\n\n", (const void *)"This program is distributed in the hope that it will be useful,\nbut WITHOUT ANY WARRANTY; without even the implied warranty of\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\nGNU General Public License for more details.\n\nYou should have received a copy of the GNU General Public License\nalong with this program.  If not, see <http://www.gnu.org/licenses/>.\n");
  signed int *return_value___errno_location_1;
  if(!(return_value_printf_2 >= 0))
  {
    return_value___errno_location_1=__errno_location();
    failx(*return_value___errno_location_1, "printf()");
  }

  signed int return_value_fclose_4;
  return_value_fclose_4=fclose(stdout);
  signed int *return_value___errno_location_3;
  if(!(return_value_fclose_4 == 0))
  {
    return_value___errno_location_3=__errno_location();
    failx(*return_value___errno_location_3, "fclose(stdout)");
  }

  _exit(0);
}

// warn
// file main.c line 127
void warn(const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(((struct filespec *)NULL), 0, fmt, args, 1);
  args = ((void **)NULL);
  warned = (_Bool)1;
  funlockfile(stderr);
}

// warnf
// file main.c line 128
void warnf(struct filespec *f, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(f, 0, fmt, args, 1);
  args = ((void **)NULL);
  warned = (_Bool)1;
  funlockfile(stderr);
}

// warnfx
// file main.c line 130
void warnfx(struct filespec *f, signed int x, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(f, x, fmt, args, 1);
  args = ((void **)NULL);
  warned = (_Bool)1;
  funlockfile(stderr);
}

// warnx
// file main.c line 129
void warnx(signed int x, const char *fmt, ...)
{
  void **args;
  flockfile(stderr);
  args = (void **)&fmt;
  log_generic(((struct filespec *)NULL), x, fmt, args, 1);
  args = ((void **)NULL);
  warned = (_Bool)1;
  funlockfile(stderr);
}

// work
// file main.h line 88
void work(void)
{
  if(!(verbose == (_Bool)0))
    info(decompress != (_Bool)0 ? "decompressing %s%s%s to %s%s%s" : "compressing %s%s%s to %s%s%s", ispec.sep, ispec.fmt, ispec.sep, ospec.sep, ospec.fmt, ospec.sep);

  set_memory_constraints();
  _Bool tmp_if_expr_5;
  unsigned int return_value_ntohl_2;
  _Bool tmp_if_expr_4;
  unsigned int return_value_ntohl_3;
  if(decompress == (_Bool)0)
    schedule(&compression);

  else
  {
    unsigned int header;
    unsigned long int vacant = sizeof(unsigned int) /*4ul*/ ;
    xread((void *)&header, &vacant);
    if(vacant == 0ul)
    {
      return_value_ntohl_2=ntohl(header);
      if(return_value_ntohl_2 >= 1113221169u)
      {
        return_value_ntohl_3=ntohl(header);
        tmp_if_expr_4 = return_value_ntohl_3 <= 0x425A6830u + (unsigned int)9 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_4 = (_Bool)0;
      tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
    {
      unsigned int return_value_ntohl_1;
      return_value_ntohl_1=ntohl(header);
      bs100k = return_value_ntohl_1 - (0x425A6830u + (unsigned int)0);
      schedule(&expansion);
    }

    else
      if(ospec.fd == 1 && !(force == (_Bool)0))
      {
        xwrite((const void *)&header, sizeof(unsigned int) /*4ul*/  - vacant);
        copy();
      }

      else
        failf(&ispec, "not a valid bzip2 file");
  }
}

// worker_thread_proc
// file process.c line 421
static void worker_thread_proc(void)
{
  unsigned int id;
  (void)id;
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(&sched_mutex);
  if(!(return_value_pthread_mutex_lock_1 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  if(!(next_task == ((struct task *)NULL)))
  {
    next_task->run();
    select_task();
  }

  _Bool return_value;
  return_value=process->finished();
  if(return_value == (_Bool)0)
  {
    signed int return_value_pthread_cond_wait_2;
    return_value_pthread_cond_wait_2=pthread_cond_wait(&sched_cond, &sched_mutex);
    if(!(return_value_pthread_cond_wait_2 == 0))
    {
      abort();
      (_Bool)0;
    }

    else
      (_Bool)0;
  }

  signed int return_value_pthread_cond_broadcast_3;
  return_value_pthread_cond_broadcast_3=pthread_cond_broadcast(&sched_cond);
  if(!(return_value_pthread_cond_broadcast_3 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
  signed int return_value_pthread_mutex_unlock_4;
  return_value_pthread_mutex_unlock_4=pthread_mutex_unlock(&sched_mutex);
  if(!(return_value_pthread_mutex_unlock_4 == 0))
  {
    abort();
    (_Bool)0;
  }

  else
    (_Bool)0;
}

// write_header
// file compress.c line 284
static void write_header(void)
{
  unsigned char buffer[4l];
  buffer[(signed long int)0] = (unsigned char)0x42;
  buffer[(signed long int)1] = (unsigned char)0x5A;
  buffer[(signed long int)2] = (unsigned char)0x68;
  buffer[(signed long int)3] = (unsigned char)((unsigned int)0x30 + bs100k);
  xwrite((const void *)buffer, (unsigned long int)4u);
}

// write_trailer
// file compress.c line 298
static void write_trailer(void)
{
  unsigned char buffer[10l];
  buffer[(signed long int)0] = (unsigned char)0x17;
  buffer[(signed long int)1] = (unsigned char)0x72;
  buffer[(signed long int)2] = (unsigned char)0x45;
  buffer[(signed long int)3] = (unsigned char)0x38;
  buffer[(signed long int)4] = (unsigned char)0x50;
  buffer[(signed long int)5] = (unsigned char)0x90;
  buffer[(signed long int)6] = (unsigned char)(combined_crc >> 24);
  buffer[(signed long int)7] = (unsigned char)(combined_crc >> 16 & (unsigned int)0xFF);
  buffer[(signed long int)8] = (unsigned char)(combined_crc >> 8 & (unsigned int)0xFF);
  buffer[(signed long int)9] = (unsigned char)(combined_crc & (unsigned int)0xFF);
  xwrite((const void *)buffer, (unsigned long int)10u);
}

// x2nrealloc
// file ../lib/xalloc.h line 179
inline void * x2nrealloc(void *p, unsigned long int *pn, unsigned long int s)
{
  unsigned long int n = *pn;
  if(p == NULL)
  {
    if(n == 0ul)
    {
      n = (unsigned long int)128 / s;
      n = n + (unsigned long int)!(n != 0ul);
    }

  }

  else
  {
    if(n >= 12297829382473034410ul / s)
      xalloc_die();

    n = n + (n + (unsigned long int)1) / (unsigned long int)2;
  }
  *pn = n;
  void *return_value_xrealloc_1;
  return_value_xrealloc_1=xrealloc(p, n * s);
  return return_value_xrealloc_1;
}

// x2nrealloc_link1
// file xalloc.h line 179
static inline void * x2nrealloc_link1(void *p_link10, unsigned long int *pn_link10, unsigned long int s_link10)
{
  unsigned long int n_link10 = *pn_link10;
  if(p_link10 == NULL)
  {
    if(n_link10 == 0ul)
    {
      n_link10 = (unsigned long int)128 / s_link10;
      n_link10 = n_link10 + (unsigned long int)!(n_link10 != 0ul);
    }

  }

  else
  {
    if(n_link10 >= 12297829382473034410ul / s_link10)
      xalloc_die();

    n_link10 = n_link10 + (n_link10 + (unsigned long int)1) / (unsigned long int)2;
  }
  *pn_link10 = n_link10;
  void *return_value_xrealloc_1_link10;
  return_value_xrealloc_1_link10=xrealloc(p_link10, n_link10 * s_link10);
  return return_value_xrealloc_1_link10;
}

// x2realloc
// file xmalloc.c line 74
void * x2realloc(void *p, unsigned long int *pn)
{
  void *return_value_x2nrealloc_1;
  return_value_x2nrealloc_1=x2nrealloc_link1(p, pn, (unsigned long int)1);
  return return_value_x2nrealloc_1;
}

// xaction
// file signals.c line 76
static void xaction(signed int sig, void (*handler)(signed int))
{
  struct sigaction act;
  act.__sigaction_handler.sa_handler = handler;
  xempty(&act.sa_mask);
  act.sa_flags = 0;
  signed int return_value_sigaction_1;
  return_value_sigaction_1=sigaction(sig, &act, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_1 == 0))
    abort();

}

// xadd
// file signals.c line 42
static void xadd(struct anonymous_11 *set, signed int sig)
{
  signed int return_value_sigaddset_1;
  return_value_sigaddset_1=sigaddset(set, sig);
  if(!(return_value_sigaddset_1 == 0))
    abort();

}

// xalloc_die
// file ../lib/xalloc.h line 55
extern void xalloc_die(void)
{
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  failx(*return_value___errno_location_1, "xalloc");
}

// xcalloc
// file ../lib/xalloc.h line 61
void * xcalloc(unsigned long int n, unsigned long int s)
{
  void *p;
  p=calloc(n, s);
  if(p == NULL)
    xalloc_die();

  return p;
}

// xcharalloc
// file ../lib/xalloc.h line 218
inline char * xcharalloc(unsigned long int n)
{
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(n);
  return (char *)return_value_xmalloc_1;
}

// xcreate
// file process.c line 88
static unsigned long int xcreate(void (*entry)(void))
{
  signed int err;
  unsigned long int thread;
  err=pthread_create(&thread, (const union pthread_attr_t *)(void *)0, thread_entry, (void *)entry);
  if(!(err == 0))
    failx(err, "unable to create a POSIX thread");

  return thread;
}

// xempty
// file signals.c line 35
static void xempty(struct anonymous_11 *set)
{
  signed int return_value_sigemptyset_1;
  return_value_sigemptyset_1=sigemptyset(set);
  if(!(return_value_sigemptyset_1 == 0))
    abort();

}

// xmalloc
// file ../lib/xalloc.h line 57
void * xmalloc(unsigned long int n)
{
  void *p;
  p=malloc(n);
  if(p == NULL && !(n == 0ul))
    xalloc_die();

  return p;
}

// xmask
// file signals.c line 49
static void xmask(signed int how, const struct anonymous_11 *set, struct anonymous_11 *oset)
{
  signed int return_value_pthread_sigmask_1;
  return_value_pthread_sigmask_1=pthread_sigmask(how, set, oset);
  if(!(return_value_pthread_sigmask_1 == 0))
    abort();

}

// xmax
// file xsize.h line 94
inline unsigned long int xmax(unsigned long int size1, unsigned long int size2)
{
  return size1 >= size2 ? size1 : size2;
}

// xmember
// file signals.c line 63
static _Bool xmember(const struct anonymous_11 *set, signed int sig)
{
  unsigned int rv;
  signed int return_value_sigismember_1;
  return_value_sigismember_1=sigismember(set, sig);
  rv = (unsigned int)return_value_sigismember_1;
  if(rv >= 2u)
    abort();

  return (_Bool)rv;
}

// xmemdup
// file xmalloc.c line 111
void * xmemdup(const void *p, unsigned long int s)
{
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(s);
  void *return_value_memcpy_2;
  return_value_memcpy_2=memcpy(return_value_xmalloc_1, p, s);
  return return_value_memcpy_2;
}

// xnmalloc
// file ../lib/xalloc.h line 103
inline void * xnmalloc(unsigned long int n, unsigned long int s)
{
  if(!(18446744073709551615ul / s >= n))
    xalloc_die();

  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(n * s);
  return return_value_xmalloc_1;
}

// xnrealloc
// file ../lib/xalloc.h line 116
inline void * xnrealloc(void *p, unsigned long int n, unsigned long int s)
{
  if(!(18446744073709551615ul / s >= n))
    xalloc_die();

  void *return_value_xrealloc_1;
  return_value_xrealloc_1=xrealloc(p, n * s);
  return return_value_xrealloc_1;
}

// xpending
// file signals.c line 56
static void xpending(struct anonymous_11 *set)
{
  signed int return_value_sigpending_1;
  return_value_sigpending_1=sigpending(set);
  if(!(return_value_sigpending_1 == 0))
    abort();

}

// xraise
// file signals.h line 26
void xraise(signed int sig)
{
  signed int return_value_kill_1;
  return_value_kill_1=kill(pid, sig);
  if(!(return_value_kill_1 == 0))
    abort();

}

// xread
// file process.c line 102
void xread(void *vbuf, unsigned long int *vacant)
{
  char *buffer = (char *)vbuf;
  /* assertion *vacant > 0 */
  assert(*vacant > (unsigned long int)0);
  unsigned long int tmp_if_expr_1;
  do
  {
    signed long int rd;
    if(*vacant >= 9223372036854775808ul)
      tmp_if_expr_1 = (unsigned long int)0x7fffffffffffffffL;

    else
      tmp_if_expr_1 = *vacant;
    rd=read(ispec.fd, (void *)buffer, tmp_if_expr_1);
    if(rd == 0l)
      break;

    if(rd == -1l)
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      failfx(&ispec, *return_value___errno_location_2, "read()");
    }

    *vacant = *vacant - (unsigned long int)rd;
    buffer = buffer + (signed long int)(unsigned long int)rd;
    ispec.total = ispec.total + (unsigned long int)rd;
  }
  while(*vacant >= 1ul);
}

// xrealloc
// file ../lib/xalloc.h line 63
void * xrealloc(void *p, unsigned long int n)
{
  if(n == 0ul && !(p == NULL))
  {
    free(p);
    return (void *)0;
  }

  else
  {
    p=realloc(p, n);
    if(p == NULL && !(n == 0ul))
      xalloc_die();

    return p;
  }
}

// xstrdup
// file xmalloc.c line 119
char * xstrdup(const char *string)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(string);
  void *return_value_xmemdup_2;
  return_value_xmemdup_2=xmemdup((const void *)string, return_value_strlen_1 + (unsigned long int)1);
  return (char *)return_value_xmemdup_2;
}

// xstrtol
// file main.c line 156
static unsigned long int xstrtol(const char *str, signed int source, unsigned long int lower, unsigned long int upper)
{
  signed long int tmp;
  char *endptr;
  unsigned int shift;
  unsigned long int val;
  const char *xstrtol__1__suffix = "EePpTtGgMmKk";
  signed int *return_value___errno_location_1;
  signed int *return_value___errno_location_2;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  char *return_value_index_5;
  if(!((signed int)*str == 0))
  {
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 0;
    tmp=strtol(str, &endptr, 10);
    return_value___errno_location_2=__errno_location();
    if(!(*return_value___errno_location_2 == 0) || !(tmp >= 0l))
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      if(!((signed int)*endptr == 0))
        tmp_if_expr_3 = (signed int)endptr[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_4)
    {
      val = (unsigned long int)tmp;
      endptr=index(xstrtol__1__suffix, (signed int)*endptr);
      if(!(endptr == ((char *)NULL)))
      {
        return_value_index_5=index(xstrtol__1__suffix, 0);
        shift = (unsigned int)((((return_value_index_5 - endptr) + (signed long int)1) / (signed long int)2) * (signed long int)10);
        if(18446744073709551615UL >> shift >= val)
        {
          val = val << shift;
          if(val >= lower && upper >= val)
            goto __CPROVER_DUMP_L6;

        }

      }

    }

  }


fail:
  ;
  fail("failed to parse \"%s\" from \"-%c\" as an integer in [%ju..%ju], specify \"-h\" for help", str, source, lower, upper);

__CPROVER_DUMP_L6:
  ;
  return val;
}

// xsum
// file xsize.h line 63
inline unsigned long int xsum(unsigned long int size1, unsigned long int size2)
{
  unsigned long int sum = size1 + size2;
  return sum >= size1 ? sum : 18446744073709551615UL;
}

// xsum3
// file xsize.h line 74
inline unsigned long int xsum3(unsigned long int size1, unsigned long int size2, unsigned long int size3)
{
  unsigned long int return_value_xsum_1;
  return_value_xsum_1=xsum(size1, size2);
  unsigned long int return_value_xsum_2;
  return_value_xsum_2=xsum(return_value_xsum_1, size3);
  return return_value_xsum_2;
}

// xsum4
// file xsize.h line 84
inline unsigned long int xsum4(unsigned long int size1, unsigned long int size2, unsigned long int size3, unsigned long int size4)
{
  unsigned long int return_value_xsum_1;
  return_value_xsum_1=xsum(size1, size2);
  unsigned long int return_value_xsum_2;
  return_value_xsum_2=xsum(return_value_xsum_1, size3);
  unsigned long int return_value_xsum_3;
  return_value_xsum_3=xsum(return_value_xsum_2, size4);
  return return_value_xsum_3;
}

// xwrite
// file process.h line 200
void xwrite(const void *vbuf, unsigned long int size)
{
  const char *buffer = (const char *)vbuf;
  ospec.total = ospec.total + size;
  if(size >= 1ul && !(ospec.fd == -1))
    do
    {
      signed long int wr;
      wr=write(ospec.fd, (const void *)buffer, size > (unsigned long int)0x7fffffffffffffffL ? (unsigned long int)0x7fffffffffffffffL : size);
      if(wr == -1l)
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        failfx(&ospec, *return_value___errno_location_1, "write()");
      }

      size = size - (unsigned long int)wr;
      buffer = buffer + (signed long int)(unsigned long int)wr;
    }
    while(size >= 1ul);

}

// xzalloc
// file ../lib/xalloc.h line 59
void * xzalloc(unsigned long int s)
{
  void *return_value_xmalloc_1;
  return_value_xmalloc_1=xmalloc(s);
  void *return_value_memset_2;
  return_value_memset_2=memset(return_value_xmalloc_1, 0, s);
  return return_value_memset_2;
}

