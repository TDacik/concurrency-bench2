// #anon_enum$ACTION_NONE=0$ACTION_ATTR_OFF=1$ACTION_ATTR_ON=2$ACTION_CLEAR=3$ACTION_CR=4$ACTION_CUP_OFF=5$ACTION_CUP_ON=6$ACTION_CURSOR_INVIS=7$ACTION_CURSOR_NORMAL=8$ACTION_CURSOR_VVIS=9$ACTION_HOME=10$ACTION_RESTORE_CURSOR=11$ACTION_SAVE_CURSOR=12$ACTION_SCROLL_BCK=13$ACTION_SCROLL_FWD=14$ACTION_TAB=15
// file src/write_stringlist.c line 25
enum anonymous$16 { ACTION_NONE=0, ACTION_ATTR_OFF=1, ACTION_ATTR_ON=2, ACTION_CLEAR=3, ACTION_CR=4, ACTION_CUP_OFF=5, ACTION_CUP_ON=6, ACTION_CURSOR_INVIS=7, ACTION_CURSOR_NORMAL=8, ACTION_CURSOR_VVIS=9, ACTION_HOME=10, ACTION_RESTORE_CURSOR=11, ACTION_SAVE_CURSOR=12, ACTION_SCROLL_BCK=13, ACTION_SCROLL_FWD=14, ACTION_TAB=15 };

// #anon_enum$CURSOR_NORM=0$CURSOR_INVIS=1$CURSOR_VVIS=2
// file src/window.h line 134
enum anonymous$15 { CURSOR_NORM=0, CURSOR_INVIS=1, CURSOR_VVIS=2 };

// #anon_enum$EXP_START=0$EXP_ENV=1$EXP_WINDOW_SIZE=2$EXP_EXPECT=3$EXP_SEND=4$EXP_EXPECT_EXIT=5$EXP_INTERACT=6$EXP_EXPECT_SUSPEND=7$EXP_REQUIRE_VERSION=8
// file src/replay.h line 18
enum anonymous$27 { EXP_START=0, EXP_ENV=1, EXP_WINDOW_SIZE=2, EXP_EXPECT=3, EXP_SEND=4, EXP_EXPECT_EXIT=5, EXP_INTERACT=6, EXP_EXPECT_SUSPEND=7, EXP_REQUIRE_VERSION=8 };

// #anon_enum$ON_ERROR_ABORT=0$ON_ERROR_INTERACT=1$ON_ERROR_CONTINUE=2
// file src/replay.c line 64
enum anonymous$13 { ON_ERROR_ABORT=0, ON_ERROR_INTERACT=1, ON_ERROR_CONTINUE=2 };

// #anon_enum$PANGO_WEIGHT_THIN=100$PANGO_WEIGHT_ULTRALIGHT=200$PANGO_WEIGHT_LIGHT=300$PANGO_WEIGHT_SEMILIGHT=350$PANGO_WEIGHT_BOOK=380$PANGO_WEIGHT_NORMAL=400$PANGO_WEIGHT_MEDIUM=500$PANGO_WEIGHT_SEMIBOLD=600$PANGO_WEIGHT_BOLD=700$PANGO_WEIGHT_ULTRABOLD=800$PANGO_WEIGHT_HEAVY=900$PANGO_WEIGHT_ULTRAHEAVY=1000
// file /usr/include/pango-1.0/pango/pango-font.h line 97
enum anonymous$4 { PANGO_WEIGHT_THIN=100, PANGO_WEIGHT_ULTRALIGHT=200, PANGO_WEIGHT_LIGHT=300, PANGO_WEIGHT_SEMILIGHT=350, PANGO_WEIGHT_BOOK=380, PANGO_WEIGHT_NORMAL=400, PANGO_WEIGHT_MEDIUM=500, PANGO_WEIGHT_SEMIBOLD=600, PANGO_WEIGHT_BOLD=700, PANGO_WEIGHT_ULTRABOLD=800, PANGO_WEIGHT_HEAVY=900, PANGO_WEIGHT_ULTRAHEAVY=1000 };

// #anon_enum$SHORT=0$LONG=1
// file src/optionMacros.h line 305
enum anonymous$9 { SHORT=0, LONG=1 };

// #anon_enum$TYPE_NONE=0$TYPE_INPUT=1$TYPE_OUTPUT=2
// file src/common.h line 85
enum anonymous$3 { TYPE_NONE=0, TYPE_INPUT=1, TYPE_OUTPUT=2 };

// #anon_enum$td_false=0$td_true=1
// file src/common.h line 36
enum anonymous$10 { td_false=0, td_true=1 };

// tag-#anon#ST[*{S8}$S8$'data'||S32'width'||S32'length'||S32'allocated'||U32'$pad0'|]
// file src/window.h line 127
struct anonymous$14;

// tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous$24;

// tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous$22;

// tag-#anon#ST[*{cS8}$cS8$'name'||*{S8}$S8$'str'||EN#anon_enum$ACTION_NONE=0$ACTION_ATTR_OFF=1$ACTION_ATTR_ON=2$ACTION_CLEAR=3$ACTION_CR=4$ACTION_CUP_OFF=5$ACTION_CUP_ON=6$ACTION_CURSOR_INVIS=7$ACTION_CURSOR_NORMAL=8$ACTION_CURSOR_VVIS=9$ACTION_HOME=10$ACTION_RESTORE_CURSOR=11$ACTION_SAVE_CURSOR=12$ACTION_SCROLL_BCK=13$ACTION_SCROLL_FWD=14$ACTION_TAB=15#{U32}$U32$'action'||S32'attr'|]
// file src/write_stringlist.c line 44
struct anonymous$17;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$2;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$5;

// tag-#anon#ST[S32'columns'||S32'rows'||S32'delay'||S32'min_delay'|]
// file src/replay.h line 46
struct anonymous;

// tag-#anon#ST[S32'paint_x'||S32'paint_y'||S32'width'||S32'height'||S32'default_attrs'||U32'$pad0'||*{SYM#tag-#anon#ST[*{S8}$S8$'data'||S32'width'||S32'length'||S32'allocated'||U32'$pad0'|]#}$SYM#tag-#anon#ST[*{S8}$S8$'data'||S32'width'||S32'length'||S32'allocated'||U32'$pad0'|]#$'lines'||S32'saved_cursor_x'||S32'saved_cursor_y'||S32'cached_pos_line'||S32'cached_pos'||S32'cached_pos_width'||EN#anon_enum$CURSOR_NORM=0$CURSOR_INVIS=1$CURSOR_VVIS=2#{U32}$U32$'cursor_state'||EN#anon_enum$td_false=0$td_true=1#{U32}$U32$'cup_active'||U32'$pad1'||SYM#tag-#anon#ST[*{S8}$S8$'data'||S32'width'||S32'length'||S32'allocated'||U32'$pad0'|]#'output_buffer'|]
// file src/window.h line 140
struct anonymous$12;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous$18;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous$21;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous$20;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous$26;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous$19;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous$23;

// tag-#anon#ST[cS8'idx'||U56'$pad0'||*{cS8}$cS8$'utf8'||*{cS8}$cS8$'alt'|]
// file src/write_image.c line 26
struct anonymous$1;

// tag-#anon#UN[*{SYM#tag-StringListNode#}$SYM#tag-StringListNode#$'args'||SYM#tag-#anon#ST[S32'columns'||S32'rows'||S32'delay'||S32'min_delay'|]#'size'||S32'number'|]
// file src/replay.h line 43
union anonymous$11;

// tag-#anon#UN[*{V(S32)->V}$V(S32)->V$'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V}$V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V$'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous$0;

// tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous$25;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$6;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$7;

// tag-ExpNode
// file src/replay.h line 38
struct ExpNode;

// tag-StringListNode
// file src/replay.h line 30
struct StringListNode;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_PangoFontDescription
// file /usr/include/pango-1.0/pango/pango-font.h line 40
struct _PangoFontDescription;

// tag-_PangoLayout
// file /usr/include/pango-1.0/pango/pango-layout.h line 32
struct _PangoLayout;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_cairo
// file /usr/include/cairo/cairo.h line 124
struct _cairo;

// tag-_cairo_format
// file /usr/include/cairo/cairo.h line 408
enum _cairo_format { CAIRO_FORMAT_INVALID=-1, CAIRO_FORMAT_ARGB32=0, CAIRO_FORMAT_RGB24=1, CAIRO_FORMAT_A8=2, CAIRO_FORMAT_A1=3, CAIRO_FORMAT_RGB16_565=4, CAIRO_FORMAT_RGB30=5 };

// tag-_cairo_operator
// file /usr/include/cairo/cairo.h line 605
enum _cairo_operator { CAIRO_OPERATOR_CLEAR=0, CAIRO_OPERATOR_SOURCE=1, CAIRO_OPERATOR_OVER=2, CAIRO_OPERATOR_IN=3, CAIRO_OPERATOR_OUT=4, CAIRO_OPERATOR_ATOP=5, CAIRO_OPERATOR_DEST=6, CAIRO_OPERATOR_DEST_OVER=7, CAIRO_OPERATOR_DEST_IN=8, CAIRO_OPERATOR_DEST_OUT=9, CAIRO_OPERATOR_DEST_ATOP=10, CAIRO_OPERATOR_XOR=11, CAIRO_OPERATOR_ADD=12, CAIRO_OPERATOR_SATURATE=13, CAIRO_OPERATOR_MULTIPLY=14, CAIRO_OPERATOR_SCREEN=15, CAIRO_OPERATOR_OVERLAY=16, CAIRO_OPERATOR_DARKEN=17, CAIRO_OPERATOR_LIGHTEN=18, CAIRO_OPERATOR_COLOR_DODGE=19, CAIRO_OPERATOR_COLOR_BURN=20, CAIRO_OPERATOR_HARD_LIGHT=21, CAIRO_OPERATOR_SOFT_LIGHT=22, CAIRO_OPERATOR_DIFFERENCE=23, CAIRO_OPERATOR_EXCLUSION=24, CAIRO_OPERATOR_HSL_HUE=25, CAIRO_OPERATOR_HSL_SATURATION=26, CAIRO_OPERATOR_HSL_COLOR=27, CAIRO_OPERATOR_HSL_LUMINOSITY=28 };

// tag-_cairo_status
// file /usr/include/cairo/cairo.h line 310
enum _cairo_status { CAIRO_STATUS_SUCCESS=0, CAIRO_STATUS_NO_MEMORY=1, CAIRO_STATUS_INVALID_RESTORE=2, CAIRO_STATUS_INVALID_POP_GROUP=3, CAIRO_STATUS_NO_CURRENT_POINT=4, CAIRO_STATUS_INVALID_MATRIX=5, CAIRO_STATUS_INVALID_STATUS=6, CAIRO_STATUS_NULL_POINTER=7, CAIRO_STATUS_INVALID_STRING=8, CAIRO_STATUS_INVALID_PATH_DATA=9, CAIRO_STATUS_READ_ERROR=10, CAIRO_STATUS_WRITE_ERROR=11, CAIRO_STATUS_SURFACE_FINISHED=12, CAIRO_STATUS_SURFACE_TYPE_MISMATCH=13, CAIRO_STATUS_PATTERN_TYPE_MISMATCH=14, CAIRO_STATUS_INVALID_CONTENT=15, CAIRO_STATUS_INVALID_FORMAT=16, CAIRO_STATUS_INVALID_VISUAL=17, CAIRO_STATUS_FILE_NOT_FOUND=18, CAIRO_STATUS_INVALID_DASH=19, CAIRO_STATUS_INVALID_DSC_COMMENT=20, CAIRO_STATUS_INVALID_INDEX=21, CAIRO_STATUS_CLIP_NOT_REPRESENTABLE=22, CAIRO_STATUS_TEMP_FILE_ERROR=23, CAIRO_STATUS_INVALID_STRIDE=24, CAIRO_STATUS_FONT_TYPE_MISMATCH=25, CAIRO_STATUS_USER_FONT_IMMUTABLE=26, CAIRO_STATUS_USER_FONT_ERROR=27, CAIRO_STATUS_NEGATIVE_COUNT=28, CAIRO_STATUS_INVALID_CLUSTERS=29, CAIRO_STATUS_INVALID_SLANT=30, CAIRO_STATUS_INVALID_WEIGHT=31, CAIRO_STATUS_INVALID_SIZE=32, CAIRO_STATUS_USER_FONT_NOT_IMPLEMENTED=33, CAIRO_STATUS_DEVICE_TYPE_MISMATCH=34, CAIRO_STATUS_DEVICE_ERROR=35, CAIRO_STATUS_INVALID_MESH_CONSTRUCTION=36, CAIRO_STATUS_DEVICE_FINISHED=37, CAIRO_STATUS_JBIG2_GLOBAL_MISSING=38, CAIRO_STATUS_LAST_STATUS=39 };

// tag-_cairo_surface
// file /usr/include/cairo/cairo.h line 153
struct _cairo_surface;

// tag-attr_map_t
// file src/window.c line 44
struct attr_map_t;

// tag-picture_queue_t
// file src/picture_queue.c line 21
struct picture_queue_t;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-termios
// file /usr/include/x86_64-linux-gnu/bits/termios.h line 28
struct termios;

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

// tag-winsize
// file /usr/include/x86_64-linux-gnu/bits/ioctl-types.h line 27
struct winsize;

// tag-yy_buffer_state
// file .objects/input_lex.c line 162
struct yy_buffer_state;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// LL0_input
// file input.c line 325
static void LL0_input(void);
// LL1_command
// file input.c line 395
static struct ExpNode * LL1_command(void);
// LLerror
// file src/input.c line 83
static void LLerror(signed int LLtoken);
// LLgetSymbol
// file src/input.c line 163
const char * LLgetSymbol(signed int LLtoken);
// LLlexerWrapper
// file src/input.c line 53
static signed int LLlexerWrapper(void);
// LLmessage
// file input.g line 33
void LLmessage(signed int class);
// LLread
// file src/input.c line 63
static void LLread(void);
// LLskip
// file src/input.c line 64
static signed int LLskip(void);
// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// _IO_putc
// file /usr/include/libio.h line 435
extern signed int _IO_putc(signed int, struct _IO_FILE *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __xpg_basename
// file /usr/include/libgen.h line 34
extern char * __xpg_basename(char *);
// _put_value
// file src/window.c line 610
unsigned long int _put_value(unsigned int c, char *dst);
// _win_add_zerowidth
// file src/window.c line 691
static enum anonymous$10 _win_add_zerowidth(struct anonymous$12 *win, const char *str, unsigned long int n);
// _win_write_blocks
// file src/window.c line 777
static enum anonymous$10 _win_write_blocks(struct anonymous$12 *win, const char *blocks, unsigned long int n);
// adjust_lines
// file src/window.c line 1068
static void adjust_lines(struct anonymous$12 *win);
// advance_script
// file src/compare.c line 161
static enum anonymous$10 advance_script(struct ExpNode **script, struct anonymous$12 *win);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// cairo_clip
// file /usr/include/cairo/cairo.h line 973
void cairo_clip(struct _cairo *);
// cairo_close_path
// file /usr/include/cairo/cairo.h line 904
void cairo_close_path(struct _cairo *);
// cairo_create
// file /usr/include/cairo/cairo.h line 483
struct _cairo * cairo_create(struct _cairo_surface *);
// cairo_destroy
// file /usr/include/cairo/cairo.h line 489
void cairo_destroy(struct _cairo *);
// cairo_fill
// file /usr/include/cairo/cairo.h line 936
void cairo_fill(struct _cairo *);
// cairo_image_surface_create
// file /usr/include/cairo/cairo.h line 2515
struct _cairo_surface * cairo_image_surface_create(enum _cairo_format, signed int, signed int);
// cairo_line_to
// file /usr/include/cairo/cairo.h line 853
void cairo_line_to(struct _cairo *, double, double);
// cairo_move_to
// file /usr/include/cairo/cairo.h line 847
void cairo_move_to(struct _cairo *, double, double);
// cairo_paint
// file /usr/include/cairo/cairo.h line 913
void cairo_paint(struct _cairo *);
// cairo_rectangle
// file /usr/include/cairo/cairo.h line 894
void cairo_rectangle(struct _cairo *, double, double, double, double);
// cairo_reset_clip
// file /usr/include/cairo/cairo.h line 970
void cairo_reset_clip(struct _cairo *);
// cairo_set_line_width
// file /usr/include/cairo/cairo.h line 754
void cairo_set_line_width(struct _cairo *, double);
// cairo_set_operator
// file /usr/include/cairo/cairo.h line 642
void cairo_set_operator(struct _cairo *, enum _cairo_operator);
// cairo_set_source_rgb
// file /usr/include/cairo/cairo.h line 648
void cairo_set_source_rgb(struct _cairo *, double, double, double);
// cairo_set_source_rgba
// file /usr/include/cairo/cairo.h line 651
void cairo_set_source_rgba(struct _cairo *, double, double, double, double);
// cairo_stroke
// file /usr/include/cairo/cairo.h line 930
void cairo_stroke(struct _cairo *);
// cairo_surface_destroy
// file /usr/include/cairo/cairo.h line 2308
void cairo_surface_destroy(struct _cairo_surface *);
// cairo_surface_write_to_png
// file /usr/include/cairo/cairo.h line 2409
enum _cairo_status cairo_surface_write_to_png(struct _cairo_surface *, const char *);
// call_setupterm
// file src/curses_handling.c line 60
void call_setupterm(const char *name);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_fmt
// file src/common.c line 749
enum anonymous$10 check_fmt(const char *str);
// check_script
// file src/common.c line 553
void check_script(const char *file_name, struct ExpNode *script);
// clearerr
// file /usr/include/stdio.h line 826
extern void clearerr(struct _IO_FILE *);
// color2rgb
// file src/write_image.c line 70
static void color2rgb(signed int color, signed int *red, signed int *green, signed int *blue);
// compare
// file src/compare.c line 310
static void compare(void);
// compare_expects
// file src/compare.c line 263
static void compare_expects(void);
// copy_attrs_to_terminal
// file src/common.c line 130
void copy_attrs_to_terminal(signed int from);
// copy_fd
// file src/common.c line 291
void copy_fd(signed int from, signed int to, enum anonymous$3 dir, struct _IO_FILE *output);
// create_space_block
// file src/window.c line 667
static unsigned long int create_space_block(signed int attr, char *out);
// detect_resize_capable
// file src/common.c line 457
enum anonymous$10 detect_resize_capable(void);
// do_action
// file src/write_stringlist.c line 113
static void do_action(struct anonymous$12 *win, enum anonymous$16 action, signed int attr);
// do_delay
// file src/view.c line 92
static void do_delay(signed int delay);
// do_visual_compare
// file src/compare.c line 196
static void do_visual_compare(void);
// end_client
// file src/replay.c line 255
static void end_client(void);
// enqueue_pictures
// file src/picture_queue.c line 34
void enqueue_pictures(struct anonymous$12 *winA, struct anonymous$12 *winB, const char *name);
// ensure_space
// file src/window.c line 341
enum anonymous$10 ensure_space(struct anonymous$14 *line, unsigned long int n);
// execvp
// file /usr/include/unistd.h line 578
extern signed int execvp(const char *, char * const *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// expect
// file src/replay.c line 455
static void expect(struct ExpNode *exp);
// expect_signal
// file src/replay.c line 783
static void expect_signal(struct ExpNode *signal_data);
// fatal
// file src/common.h line 40
void fatal(const char *fmt, ...);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// find_start
// file src/compare.c line 258
static struct ExpNode * find_start(struct ExpNode *script);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// forkpty
// file /usr/include/pty.h line 39
extern signed int forkpty(signed int *, char *, struct termios *, struct winsize *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputc
// file /usr/include/stdio.h line 573
extern signed int fputc(signed int, struct _IO_FILE *);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_attr_map
// file src/window.h line 165
void free_attr_map(void);
// g_object_unref
// file /usr/include/glib-2.0/gobject/gobject.h line 480
extern void g_object_unref(void *);
// get_attr
// file src/window.c line 400
signed int get_attr(signed int idx);
// get_block_attr
// file src/window.c line 678
static unsigned int get_block_attr(const char *block);
// get_elapsed
// file src/common.c line 242
signed int get_elapsed(void);
// get_next_delay
// file src/replay.c line 441
static signed int get_next_delay(struct ExpNode *exp, signed int *min_delay);
// get_param
// file src/write_stringlist.c line 94
static const char * get_param(const char *str, signed int *param, enum anonymous$10 *more);
// get_script_env
// file src/common.c line 739
const char * get_script_env(const struct ExpNode *script, const char *name);
// get_ti_bool
// file src/curses_handling.c line 38
signed int get_ti_bool(const char *name);
// get_ti_string
// file src/curses_handling.c line 30
char * get_ti_string(const char *name);
// get_value
// file src/window.c line 441
unsigned int get_value(const char *src, unsigned long int *size);
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getcwd_wrapper
// file src/common.c line 521
char * getcwd_wrapper(void);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// handle_client_output
// file src/replay.c line 362
static void handle_client_output(struct ExpNode *exp, const char *activity);
// handle_escape
// file src/write_stringlist.c line 175
static signed int handle_escape(char *str, signed int len, struct anonymous$12 *win);
// handle_exit
// file src/replay.c line 769
static void handle_exit(struct ExpNode *exit_data);
// handle_signals
// file src/replay.c line 341
static void handle_signals(struct ExpNode *exp, const char *activity);
// iconv
// file /usr/include/iconv.h line 42
extern unsigned long int iconv(void *, char ** restrict , unsigned long int *, char ** restrict , unsigned long int *);
// iconv_open
// file /usr/include/iconv.h line 37
extern void * iconv_open(const char *, const char *);
// init_attr_map
// file src/window.h line 164
void init_attr_map(void);
// init_timestamp
// file src/common.c line 240
void init_timestamp(void);
// install_signal_handler
// file src/common.c line 187
void install_signal_handler(signed int sig, void (*handler)(signed int), const char *descr);
// install_signal_handler::handler$object
//
void handler$object(signed int);
// interact
// file src/replay.c line 829
static void interact(void);
// interact_loop
// file src/common.c line 340
signed int interact_loop(signed int master, signed int pid, struct _IO_FILE *output, signed int timeout);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// isatty
// file /usr/include/unistd.h line 779
extern signed int isatty(signed int);
// join_picture_thread
// file src/picture_queue.c line 93
static void join_picture_thread(void);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// login_tty
// file /usr/include/utmp.h line 41
extern signed int login_tty(signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// map_attr
// file src/window.c line 372
signed int map_attr(signed int attr);
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
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// open_output
// file src/common.c line 151
struct _IO_FILE * open_output(char **name, const char *directory);
// openpty
// file /usr/include/pty.h line 33
extern signed int openpty(signed int *, signed int *, char *, struct termios *, struct winsize *);
// pango_cairo_create_layout
// file /usr/include/pango-1.0/pango/pangocairo.h line 126
struct _PangoLayout * pango_cairo_create_layout(struct _cairo *);
// pango_cairo_show_layout
// file /usr/include/pango-1.0/pango/pangocairo.h line 141
void pango_cairo_show_layout(struct _cairo *, struct _PangoLayout *);
// pango_font_description_free
// file /usr/include/pango-1.0/pango/pango-font.h line 224
void pango_font_description_free(struct _PangoFontDescription *);
// pango_font_description_new
// file /usr/include/pango-1.0/pango/pango-font.h line 218
struct _PangoFontDescription * pango_font_description_new(void);
// pango_font_description_set_absolute_size
// file /usr/include/pango-1.0/pango/pango-font.h line 248
void pango_font_description_set_absolute_size(struct _PangoFontDescription *, double);
// pango_font_description_set_family
// file /usr/include/pango-1.0/pango/pango-font.h line 228
void pango_font_description_set_family(struct _PangoFontDescription *, const char *);
// pango_font_description_set_weight
// file /usr/include/pango-1.0/pango/pango-font.h line 239
void pango_font_description_set_weight(struct _PangoFontDescription *, enum anonymous$4);
// pango_layout_get_unknown_glyphs_count
// file /usr/include/pango-1.0/pango/pango-layout.h line 209
signed int pango_layout_get_unknown_glyphs_count(struct _PangoLayout *);
// pango_layout_set_font_description
// file /usr/include/pango-1.0/pango/pango-layout.h line 164
void pango_layout_set_font_description(struct _PangoLayout *, const struct _PangoFontDescription *);
// pango_layout_set_text
// file /usr/include/pango-1.0/pango/pango-layout.h line 147
void pango_layout_set_text(struct _PangoLayout *, const char *, signed int);
// parse
// file src/input.h line 23
void parse(void);
// parseEscapes
// file input.g line 70
static unsigned long int parseEscapes(char *string);
// parse_options
// file src/replay.c line 131
static void parse_options(signed int argc, char **argv);
// parse_options$link1
// file src/view.c line 48
static void parse_options$link1(signed int argc$link1, char **argv$link1);
// parse_options$link2
// file src/rerecord.c line 49
static void parse_options$link2(signed int argc$link2, char **argv$link2);
// parse_options$link3
// file src/compare.c line 68
static void parse_options$link3(signed int argc$link3, char **argv$link3);
// parse_options$link4
// file src/record.c line 53
static void parse_options$link4(signed int argc$link4, char **argv$link4);
// parse_output_buffer
// file src/write_stringlist.c line 421
static void parse_output_buffer(struct anonymous$12 *win);
// picture_writer_thead
// file src/picture_queue.c line 64
static void * picture_writer_thead(void *arg);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printUsage
// file src/replay.c line 104
static void printUsage(void);
// printUsage$link1
// file src/view.c line 41
static void printUsage$link1(void);
// printUsage$link2
// file src/rerecord.c line 39
static void printUsage$link2(void);
// printUsage$link3
// file src/compare.c line 46
static void printUsage$link3(void);
// printUsage$link4
// file src/record.c line 41
static void printUsage$link4(void);
// print_string_list
// file src/view.c line 87
static void print_string_list(struct StringListNode *string);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$6 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$6 *, union anonymous$7 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$7 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$7 *);
// putp
// file /usr/include/curses.h line 855
extern signed int putp(const char *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reset_lexer
// file input_lex.l line 50
void reset_lexer(const char *new_file_name);
// reset_tty
// file src/common.c line 231
void reset_tty(void);
// safe_calloc
// file input.g line 44
void * safe_calloc(unsigned long int size);
// safe_read
// file src/common.c line 86
signed long int safe_read(signed int fd, char *buffer, unsigned long int size);
// safe_strdup_remove_quotes
// file input.g line 51
char * safe_strdup_remove_quotes(const char *string);
// safe_write
// file src/common.c line 72
void safe_write(signed int fd, const void *buffer, unsigned long int size);
// sanitize_term
// file src/curses_handling.h line 20
void sanitize_term(void);
// save_env
// file src/record.c line 86
static void save_env(const char *var);
// save_tty
// file src/common.c line 224
void save_tty(void);
// send_keys
// file src/replay.c line 709
static void send_keys(struct ExpNode *keys);
// send_keys$link1
// file src/rerecord.c line 113
static void send_keys$link1(struct ExpNode *keys$link1);
// set_context_from_attr_idx
// file src/write_image.c line 102
static void set_context_from_attr_idx(struct _cairo *cr, struct _PangoLayout *layout, struct _PangoFontDescription *normal, struct _PangoFontDescription *bold, signed int attr);
// set_non_block
// file src/common.c line 139
void set_non_block(signed int fd, const char *descr, enum anonymous$10 value);
// set_window_size
// file src/replay.c line 396
static void set_window_size(struct ExpNode *size);
// set_window_size$link1
// file src/view.c line 112
static void set_window_size$link1(struct ExpNode *size$link1);
// set_window_size$link2
// file src/rerecord.c line 84
static void set_window_size$link2(struct ExpNode *size$link2);
// set_window_size_internal
// file src/replay.c line 376
static void set_window_size_internal(struct ExpNode *size);
// setenv
// file /usr/include/stdlib.h line 584
extern signed int setenv(const char *, const char *, signed int);
// setup_ti_strings
// file src/write_stringlist.h line 22
void setup_ti_strings(const char *term, const char *lang);
// setupterm
// file /usr/include/term.h line 740
extern signed int setupterm(const char *, signed int, signed int *);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$2 *, signed int);
// sigchld_handler
// file src/common.c line 217
void sigchld_handler(signed int param);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$2 *);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous$2 *, struct anonymous$2 *);
// sigwinch_handler
// file src/common.c line 211
void sigwinch_handler(signed int param);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// start_client
// file src/common.c line 469
signed int start_client(struct ExpNode *client, signed int fd, struct _IO_FILE *log_file);
// start_picture_writer_thread
// file src/picture_queue.c line 103
void start_picture_writer_thread(void);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
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
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// tcgetattr
// file /usr/include/termios.h line 66
extern signed int tcgetattr(signed int, struct termios *);
// tcsetattr
// file /usr/include/termios.h line 70
extern signed int tcsetattr(signed int, signed int, struct termios *);
// tdcompare_main
// file src/common.c line 779
signed int tdcompare_main(signed int argc, char **argv);
// tdrecord_main
// file src/common.c line 775
signed int tdrecord_main(signed int argc, char **argv);
// tdreplay_main
// file src/common.c line 777
signed int tdreplay_main(signed int argc, char **argv);
// tdrerecord_main
// file src/common.c line 776
signed int tdrerecord_main(signed int argc, char **argv);
// tdview_main
// file src/common.c line 778
signed int tdview_main(signed int argc, char **argv);
// tigetflag
// file /usr/include/curses.h line 852
extern signed int tigetflag(const char *);
// tigetstr
// file /usr/include/curses.h line 854
extern char * tigetstr(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// timevaldiff
// file src/common.c line 236
signed int timevaldiff(struct timeval origin, struct timeval now);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// uc_is_general_category_withtable
// file /usr/include/unictype.h line 225
extern _Bool uc_is_general_category_withtable(unsigned int, unsigned int);
// uc_width
// file /usr/include/uniwidth.h line 41
extern signed int uc_width(unsigned int, const char *);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// unexpected
// file src/replay.c line 271
static void unexpected(const char *reason, const char *received, unsigned long int recv_length, signed int line, ...);
// unexpected_death
// file src/replay.c line 328
static void unexpected_death(void);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// unsetenv
// file /usr/include/stdlib.h line 588
extern signed int unsetenv(const char *);
// utf8_get
// file src/window.c line 508
unsigned int utf8_get(const char *src, unsigned long int *size);
// utf8_wcwidth
// file src/window.c line 653
signed int utf8_wcwidth(unsigned int c);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// visual_expect
// file src/replay.c line 573
static void visual_expect(struct ExpNode *exp);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// win_addnstr
// file src/window.c line 949
signed int win_addnstr(struct anonymous$12 *win, const char *str, unsigned long int n);
// win_clrtobol
// file src/window.c line 1018
void win_clrtobol(struct anonymous$12 *win);
// win_clrtobot
// file src/window.h line 188
void win_clrtobot(struct anonymous$12 *win);
// win_clrtoeol
// file src/window.c line 997
void win_clrtoeol(struct anonymous$12 *win);
// win_clrtotop
// file src/window.c line 1053
void win_clrtotop(struct anonymous$12 *win);
// win_compare
// file src/window.h line 179
enum anonymous$10 win_compare(struct anonymous$12 *winA, struct anonymous$12 *winB, struct _IO_FILE *descr_out);
// win_copy
// file src/window.c line 142
struct anonymous$12 * win_copy(struct anonymous$12 *win);
// win_del
// file src/window.c line 127
void win_del(struct anonymous$12 *win);
// win_get_cup
// file src/window.c line 1136
enum anonymous$10 win_get_cup(struct anonymous$12 *win);
// win_get_default_attrs
// file src/window.c line 430
signed int win_get_default_attrs(struct anonymous$12 *win);
// win_get_height
// file src/window.c line 301
signed int win_get_height(struct anonymous$12 *win);
// win_get_paint_x
// file src/window.c line 293
signed int win_get_paint_x(struct anonymous$12 *win);
// win_get_paint_y
// file src/window.c line 297
signed int win_get_paint_y(struct anonymous$12 *win);
// win_get_width
// file src/window.c line 305
signed int win_get_width(struct anonymous$12 *win);
// win_new
// file src/window.h line 167
struct anonymous$12 * win_new(signed int height, signed int width);
// win_resize
// file src/window.h line 173
enum anonymous$10 win_resize(struct anonymous$12 *win, signed int height, signed int width);
// win_restore_cursor
// file src/window.c line 1127
void win_restore_cursor(struct anonymous$12 *win);
// win_save_cursor
// file src/window.c line 1122
void win_save_cursor(struct anonymous$12 *win);
// win_scroll
// file src/window.c line 309
void win_scroll(struct anonymous$12 *win);
// win_scroll_back
// file src/window.c line 321
void win_scroll_back(struct anonymous$12 *win);
// win_set_cup
// file src/window.c line 1132
void win_set_cup(struct anonymous$12 *win, enum anonymous$10 cup_active);
// win_set_cursor
// file src/window.c line 1118
void win_set_cursor(struct anonymous$12 *win, enum anonymous$15 cursor_state);
// win_set_default_attrs
// file src/window.c line 426
void win_set_default_attrs(struct anonymous$12 *win, signed int attrs);
// win_set_paint
// file src/window.h line 174
void win_set_paint(struct anonymous$12 *win, signed int y, signed int x);
// win_write_data
// file src/write_stringlist.h line 20
void win_write_data(struct anonymous$12 *win, char *data, unsigned long int length);
// win_write_image
// file src/window.h line 201
void win_write_image(struct anonymous$12 *winA, struct anonymous$12 *winB, const char *name);
// win_write_stringlist
// file src/write_stringlist.h line 21
void win_write_stringlist(struct anonymous$12 *win, struct StringListNode *string);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write_chars
// file src/write_image.c line 134
static void write_chars(struct _cairo *cr, struct _PangoLayout *layout, const char *str, unsigned long int len);
// write_echo
// file src/common.c line 105
void write_echo(const unsigned char *buffer, unsigned long int size);
// write_escaped_string
// file src/common.c line 440
void write_escaped_string(struct _IO_FILE *out, const char *string, unsigned long int length);
// write_record
// file src/common.c line 252
void write_record(struct _IO_FILE *output, enum anonymous$3 dir, signed int delay, signed int min_delay, unsigned char *buffer, signed long int length);
// write_single_image
// file src/write_image.c line 154
static void write_single_image(struct anonymous$12 *win, signed int offset, struct _cairo *cr, struct _PangoLayout *layout, struct _PangoFontDescription *font_description, struct _PangoFontDescription *bold_font_description);
// write_text
// file src/write_stringlist.c line 377
static signed int write_text(struct anonymous$12 *win, signed int start, signed int end, enum anonymous$10 force);
// yy_create_buffer
// file .objects/input_lex.c line 1361
struct yy_buffer_state * yy_create_buffer(struct _IO_FILE *file, signed int size);
// yy_delete_buffer
// file .objects/input_lex.c line 1389
void yy_delete_buffer(struct yy_buffer_state *b);
// yy_fatal_error
// file .objects/input_lex.c line 1651
static void yy_fatal_error(const char *msg);
// yy_flush_buffer
// file .objects/input_lex.c line 1440
void yy_flush_buffer(struct yy_buffer_state *b);
// yy_get_next_buffer
// file .objects/input_lex.c line 1031
static signed int yy_get_next_buffer(void);
// yy_get_previous_state
// file .objects/input_lex.c line 1165
static signed int yy_get_previous_state(void);
// yy_init_buffer
// file .objects/input_lex.c line 1412
static void yy_init_buffer(struct yy_buffer_state *b, struct _IO_FILE *file);
// yy_init_globals
// file .objects/input_lex.c line 1754
static signed int yy_init_globals(void);
// yy_load_buffer_state
// file .objects/input_lex.c line 1347
static void yy_load_buffer_state(void);
// yy_scan_buffer
// file .objects/input_lex.c line 1567
struct yy_buffer_state * yy_scan_buffer(char *base, unsigned long int size);
// yy_scan_bytes
// file .objects/input_lex.c line 1617
struct yy_buffer_state * yy_scan_bytes(const char *yybytes, signed int _yybytes_len);
// yy_scan_string
// file .objects/input_lex.c line 1604
struct yy_buffer_state * yy_scan_string(const char *yystr);
// yy_switch_to_buffer
// file .objects/input_lex.c line 1316
void yy_switch_to_buffer(struct yy_buffer_state *new_buffer);
// yy_try_NUL_trans
// file .objects/input_lex.c line 1197
static signed int yy_try_NUL_trans(signed int yy_current_state);
// yyalloc
// file .objects/input_lex.c line 1828
void * yyalloc(unsigned long int size);
// yyensure_buffer_stack
// file .objects/input_lex.c line 1518
static void yyensure_buffer_stack(void);
// yyfree
// file .objects/input_lex.c line 1845
void yyfree(void *ptr);
// yyget_debug
// file .objects/input_lex.c line 1744
signed int yyget_debug(void);
// yyget_in
// file .objects/input_lex.c line 1688
struct _IO_FILE * yyget_in(void);
// yyget_leng
// file .objects/input_lex.c line 1704
signed int yyget_leng(void);
// yyget_lineno
// file .objects/input_lex.c line 1679
signed int yyget_lineno(void);
// yyget_out
// file .objects/input_lex.c line 1696
struct _IO_FILE * yyget_out(void);
// yyget_text
// file .objects/input_lex.c line 1713
char * yyget_text(void);
// yylex
// file src/input.c line 52
signed int yylex(void);
// yylex_destroy
// file .objects/input_lex.c line 1783
signed int yylex_destroy(void);
// yypop_buffer_state
// file .objects/input_lex.c line 1499
void yypop_buffer_state(void);
// yypush_buffer_state
// file .objects/input_lex.c line 1469
void yypush_buffer_state(struct yy_buffer_state *new_buffer);
// yyrealloc
// file .objects/input_lex.c line 1833
void * yyrealloc(void *ptr, unsigned long int size);
// yyrestart
// file .objects/input_lex.c line 1299
void yyrestart(struct _IO_FILE *input_file);
// yyset_debug
// file .objects/input_lex.c line 1749
void yyset_debug(signed int bdebug);
// yyset_in
// file .objects/input_lex.c line 1734
void yyset_in(struct _IO_FILE *in_str);
// yyset_lineno
// file .objects/input_lex.c line 1722
void yyset_lineno(signed int line_number);
// yyset_out
// file .objects/input_lex.c line 1739
void yyset_out(struct _IO_FILE *out_str);

struct anonymous$14
{
  // data
  char *data;
  // width
  signed int width;
  // length
  signed int length;
  // allocated
  signed int allocated;
};

struct anonymous$24
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous$22
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous$17
{
  // name
  const char *name;
  // str
  char *str;
  // action
  enum anonymous$16 action;
  // attr
  signed int attr;
};

struct anonymous$2
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$5
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

struct anonymous
{
  // columns
  signed int columns;
  // rows
  signed int rows;
  // delay
  signed int delay;
  // min_delay
  signed int min_delay;
};

struct anonymous$12
{
  // paint_x
  signed int paint_x;
  // paint_y
  signed int paint_y;
  // width
  signed int width;
  // height
  signed int height;
  // default_attrs
  signed int default_attrs;
  // lines
  struct anonymous$14 *lines;
  // saved_cursor_x
  signed int saved_cursor_x;
  // saved_cursor_y
  signed int saved_cursor_y;
  // cached_pos_line
  signed int cached_pos_line;
  // cached_pos
  signed int cached_pos;
  // cached_pos_width
  signed int cached_pos_width;
  // cursor_state
  enum anonymous$15 cursor_state;
  // cup_active
  enum anonymous$10 cup_active;
  // output_buffer
  struct anonymous$14 output_buffer;
};

struct anonymous$18
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous$21
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

struct anonymous$20
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$19
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$23
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous$25
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous$18 _kill;
  // _timer
  struct anonymous$19 _timer;
  // _rt
  struct anonymous$20 _rt;
  // _sigchld
  struct anonymous$21 _sigchld;
  // _sigfault
  struct anonymous$22 _sigfault;
  // _sigpoll
  struct anonymous$23 _sigpoll;
  // _sigsys
  struct anonymous$24 _sigsys;
};

struct anonymous$26
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous$25 _sifields;
};

struct anonymous$1
{
  // idx
  const char idx;
  // utf8
  const char *utf8;
  // alt
  const char *alt;
};

union anonymous$11
{
  // args
  struct StringListNode *args;
  // size
  struct anonymous size;
  // number
  signed int number;
};

union anonymous$0
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous$26 *, void *);
};

union anonymous$6
{
  // __data
  struct anonymous$5 __data;
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

union anonymous$7
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct ExpNode
{
  // type
  enum anonymous$27 type;
  // next
  struct ExpNode *next;
  // line
  signed int line;
  // un
  union anonymous$11 un;
};

struct StringListNode
{
  // length
  signed int length;
  // string
  char *string;
  // next
  struct StringListNode *next;
  // delay
  signed int delay;
  // min_delay
  signed int min_delay;
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

struct attr_map_t
{
  // attr
  signed int attr;
  // next
  signed int next;
};

struct picture_queue_t
{
  // winA
  struct anonymous$12 *winA;
  // winB
  struct anonymous$12 *winB;
  // name
  char *name;
  // next
  struct picture_queue_t *next;
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

struct sigaction
{
  // __sigaction_handler
  union anonymous$0 __sigaction_handler;
  // sa_mask
  struct anonymous$2 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
};

struct termios
{
  // c_iflag
  unsigned int c_iflag;
  // c_oflag
  unsigned int c_oflag;
  // c_cflag
  unsigned int c_cflag;
  // c_lflag
  unsigned int c_lflag;
  // c_line
  unsigned char c_line;
  // c_cc
  unsigned char c_cc[32l];
  // c_ispeed
  unsigned int c_ispeed;
  // c_ospeed
  unsigned int c_ospeed;
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

struct winsize
{
  // ws_row
  unsigned short int ws_row;
  // ws_col
  unsigned short int ws_col;
  // ws_xpixel
  unsigned short int ws_xpixel;
  // ws_ypixel
  unsigned short int ws_ypixel;
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
  signed int yy_n_chars;
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


// LLcsymb
// file src/input.c line 8
static signed int LLcsymb;
// LLindex
// file src/input.c line 15
static const signed int LLindex[269l] = { 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
// LLreissue
// file src/input.c line 51
static signed int LLreissue;
// LLscnt
// file src/input.c line 7
static signed int LLscnt[3l];
// LLsets
// file src/input.c line 10
static const char LLsets[9l] = { (const char)-2, (const char)12, (const char)0, (const char)0, (const char)0, (const char)19, (const char)0, (const char)0, (const char)0 };
// LLsymb
// file src/input.c line 50
signed int LLsymb;
// LLsymbolTable
// file src/input.c line 94
static const char *LLsymbolTable[269l] = { "<EOF>", "<EOF>", "<SOH>", "<STX>", "<ETX>", "<EOT>", "<ENQ>", "<ACK>", "<BEL>", "<BS>", "<TAB>", "<NL>", "<VT>", "<FF>", "<CR>", "<SO>", "<SI>", "<DLE>", "<DC1>", "<DC2>", "<DC3>", "<DC4>", "<NAK>", "<SYN>", "<ETB>", "<CAN>", "<EM>", "<SUB>", "<ESC>", "<FS>", "<GS>", "<RS>", "<US>", "<SP>", "'!'", "'\"'", "'#'", "'$'", "'%'", "'&'", "'''", "'('", "')'", "'*'", "'+'", "','", "'-'", "'.'", "'/'", "'0'", "'1'", "'2'", "'3'", "'4'", "'5'", "'6'", "'7'", "'8'", "'9'", "':'", "';'", "'<'", "'='", "'>'", "'?'", "'@'", "'A'", "'B'", "'C'", "'D'", "'E'", "'F'", "'G'", "'H'", "'I'", "'J'", "'K'", "'L'", "'M'", "'N'", "'O'", "'P'", "'Q'", "'R'", "'S'", "'T'", "'U'", "'V'", "'W'", "'X'", "'Y'", "'Z'", "'['", "'\\'", "']'", "'^'", "'_'", "'`'", "'a'", "'b'", "'c'", "'d'", "'e'", "'f'", "'g'", "'h'", "'i'", "'j'", "'k'", "'l'", "'m'", "'n'", "'o'", "'p'", "'q'", "'r'", "'s'", "'t'", "'u'", "'v'", "'w'", "'x'", "'y'", "'z'", "'{'", "'|'", "'}'", "'~'", "<DEL>", "'Ä'", "'Å'", "'Ç'", "'É'", "'Ñ'", "'Ö'", "'Ü'", "'á'", "'à'", "'â'", "'ä'", "'ã'", "'å'", "'ç'", "'é'", "'è'", "'ê'", "'ë'", "'í'", "'ì'", "'î'", "'ï'", "'ñ'", "'ó'", "'ò'", "'ô'", "'ö'", "'õ'", "'ú'", "'ù'", "'û'", "'ü'", "'†'", "'°'", "'¢'", "'£'", "'§'", "'•'", "'¶'", "'ß'", "'®'", "'©'", "'™'", "'´'", "'¨'", "'≠'", "'Æ'", "'Ø'", "'∞'", "'±'", "'≤'", "'≥'", "'¥'", "'µ'", "'∂'", "'∑'", "'∏'", "'π'", "'∫'", "'ª'", "'º'", "'Ω'", "'æ'", "'ø'", "'¿'", "'¡'", "'¬'", "'√'", "'ƒ'", "'≈'", "'∆'", "'«'", "'»'", "'…'", "' '", "'À'", "'Ã'", "'Õ'", "'Œ'", "'œ'", "'–'", "'—'", "'“'", "'”'", "'‘'", "'’'", "'÷'", "'◊'", "'ÿ'", "'Ÿ'", "'⁄'", "'€'", "'‹'", "'›'", "'ﬁ'", "'ﬂ'", "'‡'", "'·'", "'‚'", "'„'", "'‰'", "'Â'", "'Ê'", "'Á'", "'Ë'", "'È'", "'Í'", "'Î'", "'Ï'", "'Ì'", "'Ó'", "'Ô'", "''", "'Ò'", "'Ú'", "'Û'", "'Ù'", "'ı'", "'ˆ'", "'˜'", "'¯'", "'˘'", "'˙'", "'˚'", "'¸'", "'˝'", "'˛'", "'ˇ'", "<EOF>", "env", "start", "window_size", "expect", "send", "expect_exit", "interact", "number", "string", "expect_suspend", "require_version" };
// LLtcnt
// file src/input.c line 7
static signed int LLtcnt[13l];
// acs_map
// file src/write_image.c line 31
static struct anonymous$1 acs_map[32l] = { { .idx=(const char)125, .utf8="¬£", .alt="f" },
    { .idx=(const char)46, .utf8="‚ñº", .alt="v" },
    { .idx=(const char)44, .utf8="‚óÄ", .alt="<" },
    { .idx=(const char)43, .utf8="‚ñ∂", .alt=">" },
    { .idx=(const char)45, .utf8="‚ñ≤", .alt="^" },
    { .idx=(const char)104, .utf8="‚ñí", .alt="#" },
    { .idx=(const char)126, .utf8="¬∑", .alt="o" },
    { .idx=(const char)97, .utf8="‚ñí", .alt=":" },
    { .idx=(const char)102, .utf8="¬∞", .alt="\\" },
    { .idx=(const char)96, .utf8="‚óÜ", .alt="+" },
    { .idx=(const char)122, .utf8="‚â•", .alt=">" },
    { .idx=(const char)123, .utf8="œÄ", .alt="*" },
    { .idx=(const char)113, .utf8="‚îÄ", .alt="-" },
    { .idx=(const char)105, .utf8="#", .alt="#" },
    { .idx=(const char)110, .utf8="‚îº", .alt="+" },
    { .idx=(const char)121, .utf8="‚â§", .alt="<" },
    { .idx=(const char)109, .utf8="‚îî", .alt="+" },
    { .idx=(const char)106, .utf8="‚îò", .alt="+" },
    { .idx=(const char)124, .utf8="‚â†", .alt="!" },
    { .idx=(const char)103, .utf8="¬±", .alt="#" },
    { .idx=(const char)111, .utf8="‚é∫", .alt="~" },
    { .idx=(const char)112, .utf8="‚éª", .alt="-" },
    { .idx=(const char)114, .utf8="‚éº", .alt="-" },
    { .idx=(const char)115, .utf8="‚éΩ", .alt="_" },
    { .idx=(const char)48, .utf8="‚ñÆ", .alt="#" },
    { .idx=(const char)119, .utf8="‚î¨", .alt="+" },
    { .idx=(const char)117, .utf8="‚î§", .alt="+" },
    { .idx=(const char)116, .utf8="‚îú", .alt="+" },
    { .idx=(const char)118, .utf8="‚î¥", .alt="+" },
    { .idx=(const char)108, .utf8="‚îå", .alt="+" },
    { .idx=(const char)107, .utf8="‚îê", .alt="+" },
    { .idx=(const char)120, .utf8="‚îÇ", .alt="|" } };
// alert
// file src/replay.c line 72
static char *alert;
// allow_x11
// file src/record.c line 39
static signed int allow_x11;
// already_waited
// file src/replay.c line 96
static signed int already_waited;
// attr_hash_map
// file src/window.c line 62
static signed int attr_hash_map[337l];
// attr_map
// file src/window.c line 59
static struct attr_map_t *attr_map;
// attr_map_allocated
// file src/window.c line 61
static signed int attr_map_allocated;
// attr_map_fill
// file src/window.c line 60
static signed int attr_map_fill;
// cell_height
// file src/write_image.c line 23
signed int cell_height = 16;
// cell_width
// file src/write_image.c line 23
signed int cell_width = 8;
// controlMap
// file src/common.c line 42
static const char controlMap[33l] = { '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\', ']', '_', '^', 0 };
// describe
// file src/replay.c line 81
static enum anonymous$10 describe;
// describe$link1
// file src/compare.c line 35
static enum anonymous$10 describe$link1;
// directory
// file src/rerecord.c line 33
static const char *directory;
// directory$link1
// file src/record.c line 36
static const char *directory$link1;
// display
// file src/replay.c line 75
static enum anonymous$10 display;
// environment
// file src/record.c line 35
static char *environment;
// exited
// file src/replay.c line 91
static enum anonymous$10 exited;
// expectWin
// file src/replay.c line 101
static struct anonymous$12 *expectWin;
// fdset
// file src/replay.c line 98
static struct pollfd fdset[2l];
// file_name
// file input_lex.l line 24
const char *file_name;
// finished
// file src/picture_queue.c line 32
static enum anonymous$10 finished;
// first_directive
// file input.g line 26
static enum anonymous$10 first_directive;
// iconv_handle
// file src/write_stringlist.c line 51
static void *iconv_handle;
// input
// file src/replay.c line 71
static char *input;
// input$link1
// file src/view.c line 38
static const char *input$link1;
// input$link2
// file src/rerecord.c line 36
static char *input$link2;
// inputA
// file src/compare.c line 31
static const char *inputA;
// inputB
// file src/compare.c line 31
static const char *inputB;
// key_delay
// file src/replay.c line 74
static double key_delay;
// key_delay$link1
// file src/view.c line 36
static signed int key_delay$link1;
// key_delay_scale
// file src/replay.c line 73
static double key_delay_scale = 1.0;
// key_delay_scale$link1
// file src/view.c line 37
static double key_delay_scale$link1 = 1.0;
// last_type
// file src/common.c line 45
static enum anonymous$3 last_type = (enum anonymous$3)TYPE_NONE;
// line_number
// file input_lex.l line 23
signed int line_number;
// log_file
// file src/replay.c line 70
static struct _IO_FILE *log_file;
// log_name
// file src/replay.c line 78
static const char *log_name;
// master
// file src/replay.c line 94
static signed int master;
// master$link1
// file src/rerecord.c line 30
static signed int master$link1;
// no_resize
// file src/replay.c line 77
static enum anonymous$10 no_resize;
// on_error
// file src/replay.c line 76
static enum anonymous$13 on_error = (enum anonymous$13)ON_ERROR_ABORT;
// option_font
// file src/write_image.c line 24
const char *option_font = "DejaVu Sans Mono";
// output
// file src/rerecord.c line 34
static char *output;
// output$link1
// file src/record.c line 35
static char *output$link1;
// output_file
// file src/rerecord.c line 35
static struct _IO_FILE *output_file;
// output_file$link1
// file src/record.c line 38
static struct _IO_FILE *output_file$link1;
// picture_name
// file src/replay.c line 83
static const char *picture_name;
// picture_name$link1
// file src/compare.c line 39
static const char *picture_name$link1;
// picture_queue_cond
// file src/picture_queue.c line 31
static union anonymous$6 picture_queue_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// picture_queue_head
// file src/picture_queue.c line 28
static struct picture_queue_t *picture_queue_head;
// picture_queue_lock
// file src/picture_queue.c line 30
static union anonymous$7 picture_queue_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// picture_queue_tail
// file src/picture_queue.c line 28
static struct picture_queue_t *picture_queue_tail;
// picture_series
// file src/compare.c line 40
static const char *picture_series;
// picture_thread
// file src/picture_queue.c line 29
static unsigned long int picture_thread;
// pid
// file src/replay.c line 95
static signed int pid;
// pid$link1
// file src/rerecord.c line 31
static signed int pid$link1;
// prog_start_index
// file src/record.c line 37
static signed int prog_start_index = -1;
// realWin
// file src/replay.c line 101
static struct anonymous$12 *realWin;
// resize_capable
// file src/replay.c line 90
static enum anonymous$10 resize_capable;
// resize_capable$link1
// file src/view.c line 39
static enum anonymous$10 resize_capable$link1;
// resize_capable$link2
// file src/rerecord.c line 32
static enum anonymous$10 resize_capable$link2;
// saved
// file src/common.c line 43
static struct termios saved;
// script
// file input.g line 27
struct ExpNode *script;
// scriptA
// file src/compare.c line 32
static struct ExpNode *scriptA;
// scriptB
// file src/compare.c line 32
static struct ExpNode *scriptB;
// signal_pipe
// file src/common.c line 41
signed int signal_pipe[2l];
// start_parsed
// file input.g line 25
static enum anonymous$10 start_parsed;
// status
// file src/replay.c line 92
static signed int status;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// stop_on_difference
// file src/compare.c line 33
static enum anonymous$10 stop_on_difference;
// strip_location_reports
// file src/rerecord.c line 37
static enum anonymous$10 strip_location_reports = (enum anonymous$10)td_true;
// terminfo_mappings
// file src/write_stringlist.c line 53
static struct anonymous$17 terminfo_mappings[31l] = { { .name="blink", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_ON,
    .attr=(signed int)(1L << 4) },
    { .name="bold", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_ON, .attr=(signed int)(1L << 2) },
    { .name="civis", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_CURSOR_INVIS,
    .attr=0 },
    { .name="clear", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_CLEAR,
    .attr=0 },
    { .name="cnorm", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_CURSOR_NORMAL,
    .attr=0 },
    { .name="cr", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_CR, .attr=0 },
    { .name="cvvis", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_CURSOR_VVIS,
    .attr=0 },
    { .name="home", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_HOME, .attr=0 },
    { .name="ht", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_TAB, .attr=0 },
    { .name="hts", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_NONE, .attr=0 },
    { .name="ind", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_SCROLL_FWD, .attr=0 },
    { .name="invis", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_ON,
    .attr=(signed int)(1L << 0) },
    { .name="op", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_OFF, .attr=0x1ff << 8 | 0x1ff << 8 + 9 },
    { .name="rc", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_RESTORE_CURSOR, .attr=0 },
    { .name="rev", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_ON, .attr=(signed int)(1L << 3) },
    { .name="ri", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_SCROLL_BCK, .attr=0 },
    { .name="rmacs", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_OFF,
    .attr=(signed int)(1L << 6) },
    { .name="rmam", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_NONE, .attr=0 },
    { .name="rmcup", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_CUP_OFF,
    .attr=0 },
    { .name="rmir", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_NONE, .attr=0 },
    { .name="rmkx", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_NONE, .attr=0 },
    { .name="rmso", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_OFF, .attr=(signed int)(1L << 7) },
    { .name="rmul", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_OFF, .attr=(signed int)(1L << 1) },
    { .name="sc", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_SAVE_CURSOR, .attr=0 },
    { .name="smacs", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_ON,
    .attr=(signed int)(1L << 6) },
    { .name="smam", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_NONE, .attr=0 },
    { .name="smcup", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_CUP_ON,
    .attr=0 },
    { .name="smir", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_NONE, .attr=0 },
    { .name="smkx", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_NONE, .attr=0 },
    { .name="smso", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_ON, .attr=(signed int)(1L << 7) },
    { .name="smul", .str=(char *)(void *)0, .action=(enum anonymous$16)ACTION_ATTR_ON, .attr=(signed int)(1L << 1) } };
// timestamp
// file src/common.c line 44
static struct timeval timestamp;
// timestamp$link1
// file src/replay.c line 93
static struct timeval timestamp$link1;
// visual_compare
// file src/replay.c line 80
static enum anonymous$10 visual_compare;
// visual_compare$link1
// file src/compare.c line 36
static enum anonymous$10 visual_compare$link1;
// winA
// file src/compare.c line 37
static struct anonymous$12 *winA;
// winB
// file src/compare.c line 37
static struct anonymous$12 *winB;
// win_bce
// file src/window.c line 64
enum anonymous$10 win_bce;
// yy_accept
// file .objects/input_lex.c line 384
static const signed short int yy_accept[79l] = { (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)18, (const signed short int)16, (const signed short int)1, (const signed short int)2, (const signed short int)16, (const signed short int)3, (const signed short int)13, (const signed short int)15, (const signed short int)16, (const signed short int)16, (const signed short int)16, (const signed short int)16, (const signed short int)16, (const signed short int)0, (const signed short int)14, (const signed short int)0, (const signed short int)3, (const signed short int)13, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)4, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)8, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)5, (const signed short int)0, (const signed short int)7, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)11, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)9, (const signed short int)0, (const signed short int)0, (const signed short int)6, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)10, (const signed short int)0, (const signed short int)12, (const signed short int)0 };
// yy_base
// file .objects/input_lex.c line 435
static const signed short int yy_base[81l] = { (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)94, (const signed short int)95, (const signed short int)95, (const signed short int)95, (const signed short int)23, (const signed short int)0, (const signed short int)87, (const signed short int)95, (const signed short int)13, (const signed short int)77, (const signed short int)78, (const signed short int)16, (const signed short int)76, (const signed short int)26, (const signed short int)95, (const signed short int)86, (const signed short int)0, (const signed short int)82, (const signed short int)64, (const signed short int)69, (const signed short int)64, (const signed short int)66, (const signed short int)68, (const signed short int)72, (const signed short int)66, (const signed short int)95, (const signed short int)67, (const signed short int)66, (const signed short int)56, (const signed short int)65, (const signed short int)57, (const signed short int)63, (const signed short int)63, (const signed short int)54, (const signed short int)58, (const signed short int)95, (const signed short int)50, (const signed short int)54, (const signed short int)48, (const signed short int)58, (const signed short int)48, (const signed short int)95, (const signed short int)42, (const signed short int)56, (const signed short int)53, (const signed short int)50, (const signed short int)53, (const signed short int)19, (const signed short int)40, (const signed short int)51, (const signed short int)39, (const signed short int)33, (const signed short int)35, (const signed short int)95, (const signed short int)33, (const signed short int)41, (const signed short int)40, (const signed short int)33, (const signed short int)39, (const signed short int)25, (const signed short int)29, (const signed short int)32, (const signed short int)29, (const signed short int)34, (const signed short int)95, (const signed short int)33, (const signed short int)25, (const signed short int)95, (const signed short int)29, (const signed short int)29, (const signed short int)30, (const signed short int)20, (const signed short int)95, (const signed short int)20, (const signed short int)95, (const signed short int)95, (const signed short int)39, (const signed short int)32 };
// yy_buffer_stack
// file .objects/input_lex.c line 264
static struct yy_buffer_state **yy_buffer_stack = ((struct yy_buffer_state **)NULL);
// yy_buffer_stack_max
// file .objects/input_lex.c line 263
static unsigned long int yy_buffer_stack_max = (unsigned long int)0;
// yy_buffer_stack_top
// file .objects/input_lex.c line 262
static unsigned long int yy_buffer_stack_top = (unsigned long int)0;
// yy_c_buf_p
// file .objects/input_lex.c line 287
static char *yy_c_buf_p = (char *)0;
// yy_chk
// file .objects/input_lex.c line 477
static const signed short int yy_chk[122l] = { (const signed short int)0, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)1, (const signed short int)7, (const signed short int)11, (const signed short int)14, (const signed short int)16, (const signed short int)7, (const signed short int)50, (const signed short int)80, (const signed short int)16, (const signed short int)76, (const signed short int)74, (const signed short int)14, (const signed short int)11, (const signed short int)50, (const signed short int)79, (const signed short int)79, (const signed short int)73, (const signed short int)72, (const signed short int)71, (const signed short int)69, (const signed short int)68, (const signed short int)66, (const signed short int)65, (const signed short int)64, (const signed short int)63, (const signed short int)62, (const signed short int)61, (const signed short int)60, (const signed short int)59, (const signed short int)58, (const signed short int)57, (const signed short int)55, (const signed short int)54, (const signed short int)53, (const signed short int)52, (const signed short int)51, (const signed short int)49, (const signed short int)48, (const signed short int)47, (const signed short int)46, (const signed short int)45, (const signed short int)43, (const signed short int)42, (const signed short int)41, (const signed short int)40, (const signed short int)39, (const signed short int)37, (const signed short int)36, (const signed short int)35, (const signed short int)34, (const signed short int)33, (const signed short int)32, (const signed short int)31, (const signed short int)30, (const signed short int)29, (const signed short int)27, (const signed short int)26, (const signed short int)25, (const signed short int)24, (const signed short int)23, (const signed short int)22, (const signed short int)21, (const signed short int)20, (const signed short int)18, (const signed short int)15, (const signed short int)13, (const signed short int)12, (const signed short int)9, (const signed short int)3, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78 };
// yy_def
// file .objects/input_lex.c line 447
static const signed short int yy_def[81l] = { (const signed short int)0, (const signed short int)78, (const signed short int)1, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)79, (const signed short int)80, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)79, (const signed short int)78, (const signed short int)79, (const signed short int)80, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)0, (const signed short int)78, (const signed short int)78 };
// yy_did_buffer_switch_on_eof
// file .objects/input_lex.c line 294
static signed int yy_did_buffer_switch_on_eof;
// yy_ec
// file .objects/input_lex.c line 396
static const signed int yy_ec[256l] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 1, 1, 1, 7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 1, 1, 9, 1, 10, 1, 11, 12, 13, 1, 1, 1, 14, 1, 1, 1, 1, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 1, 26, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
// yy_flex_debug
// file .objects/input_lex.c line 499
signed int yy_flex_debug = 0;
// yy_hold_char
// file .objects/input_lex.c line 282
static char yy_hold_char;
// yy_init
// file .objects/input_lex.c line 288
static signed int yy_init = 0;
// yy_last_accepting_cpos
// file .objects/input_lex.c line 496
static char *yy_last_accepting_cpos;
// yy_last_accepting_state
// file .objects/input_lex.c line 495
static signed int yy_last_accepting_state;
// yy_meta
// file .objects/input_lex.c line 428
static const signed int yy_meta[27l] = { 0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
// yy_n_chars
// file .objects/input_lex.c line 283
static signed int yy_n_chars;
// yy_nxt
// file .objects/input_lex.c line 459
static const signed short int yy_nxt[122l] = { (const signed short int)0, (const signed short int)4, (const signed short int)5, (const signed short int)6, (const signed short int)7, (const signed short int)8, (const signed short int)9, (const signed short int)10, (const signed short int)4, (const signed short int)4, (const signed short int)4, (const signed short int)4, (const signed short int)4, (const signed short int)11, (const signed short int)12, (const signed short int)4, (const signed short int)4, (const signed short int)4, (const signed short int)4, (const signed short int)13, (const signed short int)14, (const signed short int)4, (const signed short int)4, (const signed short int)4, (const signed short int)15, (const signed short int)4, (const signed short int)4, (const signed short int)17, (const signed short int)21, (const signed short int)25, (const signed short int)17, (const signed short int)18, (const signed short int)54, (const signed short int)19, (const signed short int)18, (const signed short int)77, (const signed short int)76, (const signed short int)26, (const signed short int)22, (const signed short int)55, (const signed short int)16, (const signed short int)16, (const signed short int)75, (const signed short int)74, (const signed short int)73, (const signed short int)72, (const signed short int)71, (const signed short int)70, (const signed short int)69, (const signed short int)68, (const signed short int)67, (const signed short int)66, (const signed short int)65, (const signed short int)64, (const signed short int)63, (const signed short int)62, (const signed short int)61, (const signed short int)60, (const signed short int)59, (const signed short int)58, (const signed short int)57, (const signed short int)56, (const signed short int)53, (const signed short int)52, (const signed short int)51, (const signed short int)50, (const signed short int)49, (const signed short int)48, (const signed short int)47, (const signed short int)46, (const signed short int)45, (const signed short int)44, (const signed short int)43, (const signed short int)42, (const signed short int)41, (const signed short int)40, (const signed short int)39, (const signed short int)38, (const signed short int)37, (const signed short int)36, (const signed short int)35, (const signed short int)34, (const signed short int)33, (const signed short int)32, (const signed short int)31, (const signed short int)30, (const signed short int)29, (const signed short int)28, (const signed short int)20, (const signed short int)78, (const signed short int)27, (const signed short int)24, (const signed short int)23, (const signed short int)20, (const signed short int)78, (const signed short int)3, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78 };
// yy_start
// file .objects/input_lex.c line 289
static signed int yy_start = 0;
// yyin
// file .objects/input_lex.c line 349
struct _IO_FILE *yyin = (struct _IO_FILE *)0;
// yyleng
// file .objects/input_lex.c line 284
signed int yyleng;
// yylineno
// file .objects/input_lex.c line 355
signed int yylineno = 1;
// yyout
// file .objects/input_lex.c line 349
struct _IO_FILE *yyout = (struct _IO_FILE *)0;
// yytext
// file .objects/input_lex.c line 508
char *yytext;

// LL0_input
// file input.c line 325
static void LL0_input(void)
{
  struct ExpNode *command;
  memset((void *)&command, 0, sizeof(struct ExpNode *) /*8ul*/ );
  struct ExpNode **current = &script;
  start_parsed = (enum anonymous$10)td_false;
  first_directive = (enum anonymous$10)td_true;
  LLscnt[(signed long int)0] = LLscnt[(signed long int)0] + 1;
  if(LLcsymb == 1 || LLcsymb == 2 || LLcsymb == 3 || LLcsymb == 4 || LLcsymb == 5 || LLcsymb == 6 || LLcsymb == 7 || LLcsymb == 10 || LLcsymb == 11)
    goto __CPROVER_DUMP_L3;

  LLskip();

__CPROVER_DUMP_L3:
  ;
  LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
  LLscnt[(signed long int)0] = LLscnt[(signed long int)0] + 1;
  goto LL_0;

LL_1:
  ;
  signed int return_value_LLskip$1;
  while((_Bool)1)
  {
    if(LLcsymb == 0)
      goto __CPROVER_DUMP_L5;

    if(LLcsymb == 1 || LLcsymb == 2 || LLcsymb == 3 || LLcsymb == 4 || LLcsymb == 5 || LLcsymb == 6 || LLcsymb == 7 || LLcsymb == 10 || LLcsymb == 11)
      goto LL_0;

    return_value_LLskip$1=LLskip();
    if(return_value_LLskip$1 == 0)
      break;

  }
  goto __CPROVER_DUMP_L7;

__CPROVER_DUMP_L5:
  ;
  goto __CPROVER_DUMP_L7;

LL_0:
  ;
  LLscnt[(signed long int)0] = LLscnt[(signed long int)0] + 1;
  command=LL1_command();
  *current = command;
  current = &(*current)->next;
  first_directive = (enum anonymous$10)td_false;
  goto __CPROVER_DUMP_L8;

__CPROVER_DUMP_L7:
  ;
  LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
  goto __CPROVER_DUMP_L9;

__CPROVER_DUMP_L8:
  ;
  goto LL_1;

__CPROVER_DUMP_L9:
  ;
  check_script(file_name, script);
}

// LL1_command
// file input.c line 395
static struct ExpNode * LL1_command(void)
{
  struct ExpNode *LLretval;
  memset((void *)&LLretval, 0, sizeof(struct ExpNode *) /*8ul*/ );
  struct StringListNode **next;
  void *return_value_safe_calloc$1;
  return_value_safe_calloc$1=safe_calloc(sizeof(struct ExpNode) /*40ul*/ );
  LLretval = (struct ExpNode *)return_value_safe_calloc$1;
  next = &LLretval->un.args;

LL_0:
  ;
  signed int return_value_LLskip$5;
  signed int return_value_LLskip$8;
  signed int return_value_LLskip$9;
  signed int return_value_LLskip$10;
  signed int return_value_LLskip$13;
  signed int return_value_LLskip$15;
  signed int return_value_LLskip$17;
  while((_Bool)1)
  {
    if(!(LLcsymb == 1))
    {
      if(LLcsymb == 11)
        goto __CPROVER_DUMP_L7;

      if(LLcsymb == 2)
        goto __CPROVER_DUMP_L12;

      if(LLcsymb == 3)
        goto __CPROVER_DUMP_L25;

      if(LLcsymb == 4)
        goto __CPROVER_DUMP_L41;

      if(LLcsymb == 5)
        goto __CPROVER_DUMP_L54;

      if(LLcsymb == 6)
        goto __CPROVER_DUMP_L75;

      if(LLcsymb == 10)
        goto __CPROVER_DUMP_L80;

      if(LLcsymb == 7)
        goto __CPROVER_DUMP_L83;

    }

    else
    {
      LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] + 1;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] + 1;
      if(!(LLsymb == 257))
        LLerror(257);

      LLread();
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] - 1;
      if(!(LLsymb == 265))
        LLerror(265);

      if(!(start_parsed == /*enum*/td_false))
        fatal("%s:%d: env directive after start directive\n", file_name, line_number);

      LLretval->type = (enum anonymous$27)EXP_ENV;
      LLretval->line = line_number;
      void *return_value_safe_calloc$2;
      return_value_safe_calloc$2=safe_calloc(sizeof(struct StringListNode) /*32ul*/ );
      *next = (struct StringListNode *)return_value_safe_calloc$2;
      (*next)->string=safe_strdup_remove_quotes(yytext);
      next = &(*next)->next;
      LLread();
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] - 1;
      if(!(LLsymb == 265))
        LLerror(265);

      void *return_value_safe_calloc$3;
      return_value_safe_calloc$3=safe_calloc(sizeof(struct StringListNode) /*32ul*/ );
      *next = (struct StringListNode *)return_value_safe_calloc$3;
      (*next)->string=safe_strdup_remove_quotes(yytext);
      unsigned long int return_value_parseEscapes$4;
      return_value_parseEscapes$4=parseEscapes((*next)->string);
      (*next)->length = (signed int)return_value_parseEscapes$4;
      LLread();
      goto __CPROVER_DUMP_L86;

    __CPROVER_DUMP_L7:
      ;
      LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] + 1;
      if(!(LLsymb == 267))
        LLerror(267);

      LLread();
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      if(!(LLsymb == 264))
        LLerror(264);

      if(first_directive == /*enum*/td_false)
        fatal("%s:%d: require_version directive should be the first directive in the recording\n", file_name, line_number);

      LLretval->type = (enum anonymous$27)EXP_REQUIRE_VERSION;
      LLretval->line = line_number;
      LLretval->un.number=atoi(yytext);
      if(!(LLretval->un.number >= 1))
        fatal("%s:%d: lowest possible require_version is 1\n", file_name, line_number);

      LLread();
      goto __CPROVER_DUMP_L86;

    __CPROVER_DUMP_L12:
      ;
      LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] + 1;
      if(!(LLsymb == 258))
        LLerror(258);

      if(!(start_parsed == /*enum*/td_false))
        fatal("%s:%d: Multiple start directives specified\n", file_name, line_number);

      start_parsed = (enum anonymous$10)td_true;
      LLretval->type = (enum anonymous$27)EXP_START;
      LLretval->line = line_number;
      LLread();
      if(LLcsymb == 9)
        goto __CPROVER_DUMP_L17;

      LLskip();

    __CPROVER_DUMP_L17:
      ;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] - 1;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] + 1;
      goto LL_1;

    LL_2:
      ;
      while((_Bool)1)
      {
        if(LLcsymb == 0 || LLcsymb == 1 || LLcsymb == 2 || LLcsymb == 3 || LLcsymb == 4 || LLcsymb == 5 || LLcsymb == 6 || LLcsymb == 7 || LLcsymb == 10 || LLcsymb == 11)
          goto __CPROVER_DUMP_L19;

        if(LLcsymb == 9)
          goto LL_1;

        return_value_LLskip$5=LLskip();
        if(return_value_LLskip$5 == 0)
          break;

      }
      goto __CPROVER_DUMP_L22;

    __CPROVER_DUMP_L19:
      ;
      goto __CPROVER_DUMP_L22;

    LL_1:
      ;
      if(!(LLsymb == 265))
        LLerror(265);

      void *return_value_safe_calloc$6;
      return_value_safe_calloc$6=safe_calloc(sizeof(struct StringListNode) /*32ul*/ );
      *next = (struct StringListNode *)return_value_safe_calloc$6;
      (*next)->string=safe_strdup_remove_quotes(yytext);
      unsigned long int return_value_parseEscapes$7;
      return_value_parseEscapes$7=parseEscapes((*next)->string);
      (*next)->length = (signed int)return_value_parseEscapes$7;
      next = &(*next)->next;
      LLread();
      goto __CPROVER_DUMP_L23;

    __CPROVER_DUMP_L22:
      ;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] - 1;
      goto __CPROVER_DUMP_L24;

    __CPROVER_DUMP_L23:
      ;
      goto LL_2;

    __CPROVER_DUMP_L24:
      ;
      goto __CPROVER_DUMP_L86;

    __CPROVER_DUMP_L25:
      ;
      LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] + 1;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] + 1;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] + 1;
      if(!(LLsymb == 259))
        LLerror(259);

      LLread();
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      if(!(LLsymb == 264))
        LLerror(264);

      LLretval->type = (enum anonymous$27)EXP_WINDOW_SIZE;
      LLretval->line = line_number;
      LLretval->un.size.columns=atoi(yytext);
      LLread();
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      if(!(LLsymb == 264))
        LLerror(264);

      LLretval->un.size.rows=atoi(yytext);
      LLread();

    LL_3:
      ;
      while((_Bool)1)
      {
        if(LLcsymb == 0 || LLcsymb == 1 || LLcsymb == 2 || LLcsymb == 3 || LLcsymb == 4 || LLcsymb == 5 || LLcsymb == 6 || LLcsymb == 7 || LLcsymb == 10 || LLcsymb == 11)
          goto __CPROVER_DUMP_L30;

        if(LLcsymb == 8)
          goto __CPROVER_DUMP_L31;

        return_value_LLskip$8=LLskip();
        if(return_value_LLskip$8 == 0)
          break;

      }
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      goto __CPROVER_DUMP_L40;

    __CPROVER_DUMP_L30:
      ;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      goto __CPROVER_DUMP_L40;

    __CPROVER_DUMP_L31:
      ;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      LLtcnt[(signed long int)12] = LLtcnt[(signed long int)12] + 1;
      if(!(LLsymb == 264))
        LLerror(264);

      LLretval->un.size.delay=atoi(yytext);
      LLread();

    LL_4:
      ;
      while((_Bool)1)
      {
        if(LLcsymb == 0 || LLcsymb == 1 || LLcsymb == 2 || LLcsymb == 3 || LLcsymb == 4 || LLcsymb == 5 || LLcsymb == 6 || LLcsymb == 7 || LLcsymb == 10 || LLcsymb == 11)
          goto __CPROVER_DUMP_L34;

        if(LLcsymb == 12)
          goto __CPROVER_DUMP_L35;

        return_value_LLskip$9=LLskip();
        if(return_value_LLskip$9 == 0)
          break;

      }
      LLtcnt[(signed long int)12] = LLtcnt[(signed long int)12] - 1;
      goto __CPROVER_DUMP_L39;

    __CPROVER_DUMP_L34:
      ;
      LLtcnt[(signed long int)12] = LLtcnt[(signed long int)12] - 1;
      goto __CPROVER_DUMP_L39;

    __CPROVER_DUMP_L35:
      ;
      LLtcnt[(signed long int)12] = LLtcnt[(signed long int)12] - 1;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] + 1;
      if(!(LLsymb == 62))
        LLerror(62);

      LLread();
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      if(!(LLsymb == 264))
        LLerror(264);

      LLretval->un.size.min_delay=atoi(yytext);
      if(!(LLretval->un.size.delay >= LLretval->un.size.min_delay))
        LLretval->un.size.min_delay = LLretval->un.size.delay;

      LLread();

    __CPROVER_DUMP_L39:
      ;

    __CPROVER_DUMP_L40:
      ;
      goto __CPROVER_DUMP_L86;

    __CPROVER_DUMP_L41:
      ;
      LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] + 1;
      if(!(LLsymb == 260))
        LLerror(260);

      if(start_parsed == /*enum*/td_false)
        fatal("%s:%d: expect directive before start directive\n", file_name, line_number);

      LLretval->type = (enum anonymous$27)EXP_EXPECT;
      LLretval->line = line_number;
      LLread();
      if(LLcsymb == 9)
        goto __CPROVER_DUMP_L46;

      LLskip();

    __CPROVER_DUMP_L46:
      ;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] - 1;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] + 1;
      goto LL_5;

    LL_6:
      ;
      while((_Bool)1)
      {
        if(LLcsymb == 0 || LLcsymb == 1 || LLcsymb == 2 || LLcsymb == 3 || LLcsymb == 4 || LLcsymb == 5 || LLcsymb == 6 || LLcsymb == 7 || LLcsymb == 10 || LLcsymb == 11)
          goto __CPROVER_DUMP_L48;

        if(LLcsymb == 9)
          goto LL_5;

        return_value_LLskip$10=LLskip();
        if(return_value_LLskip$10 == 0)
          break;

      }
      goto __CPROVER_DUMP_L51;

    __CPROVER_DUMP_L48:
      ;
      goto __CPROVER_DUMP_L51;

    LL_5:
      ;
      if(!(LLsymb == 265))
        LLerror(265);

      void *return_value_safe_calloc$11;
      return_value_safe_calloc$11=safe_calloc(sizeof(struct StringListNode) /*32ul*/ );
      *next = (struct StringListNode *)return_value_safe_calloc$11;
      (*next)->string=safe_strdup_remove_quotes(yytext);
      unsigned long int return_value_parseEscapes$12;
      return_value_parseEscapes$12=parseEscapes((*next)->string);
      (*next)->length = (signed int)return_value_parseEscapes$12;
      next = &(*next)->next;
      LLread();
      goto __CPROVER_DUMP_L52;

    __CPROVER_DUMP_L51:
      ;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] - 1;
      goto __CPROVER_DUMP_L53;

    __CPROVER_DUMP_L52:
      ;
      goto LL_6;

    __CPROVER_DUMP_L53:
      ;
      goto __CPROVER_DUMP_L86;

    __CPROVER_DUMP_L54:
      ;
      LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
      LLscnt[(signed long int)1] = LLscnt[(signed long int)1] + 1;
      if(!(LLsymb == 261))
        LLerror(261);

      if(start_parsed == /*enum*/td_false)
        fatal("%s:%d: send directive before start directive\n", file_name, line_number);

      LLretval->type = (enum anonymous$27)EXP_SEND;
      LLretval->line = line_number;
      LLread();
      if(LLcsymb == 8)
        goto __CPROVER_DUMP_L59;

      LLskip();

    __CPROVER_DUMP_L59:
      ;
      LLscnt[(signed long int)1] = LLscnt[(signed long int)1] - 1;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] + 1;
      goto LL_7;

    LL_8:
      ;
      while((_Bool)1)
      {
        if(LLcsymb == 0 || LLcsymb == 1 || LLcsymb == 2 || LLcsymb == 3 || LLcsymb == 4 || LLcsymb == 5 || LLcsymb == 6 || LLcsymb == 7 || LLcsymb == 10 || LLcsymb == 11)
          goto __CPROVER_DUMP_L61;

        if(LLcsymb == 8)
          goto LL_7;

        return_value_LLskip$13=LLskip();
        if(return_value_LLskip$13 == 0)
          break;

      }
      goto __CPROVER_DUMP_L72;

    __CPROVER_DUMP_L61:
      ;
      goto __CPROVER_DUMP_L72;

    LL_7:
      ;
      LLtcnt[(signed long int)12] = LLtcnt[(signed long int)12] + 1;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] + 1;
      if(!(LLsymb == 264))
        LLerror(264);

      void *return_value_safe_calloc$14;
      return_value_safe_calloc$14=safe_calloc(sizeof(struct StringListNode) /*32ul*/ );
      *next = (struct StringListNode *)return_value_safe_calloc$14;
      (*next)->delay=atoi(yytext);
      LLread();

    LL_9:
      ;
      while((_Bool)1)
      {
        if(LLcsymb == 9)
          goto __CPROVER_DUMP_L65;

        if(LLcsymb == 12)
          goto __CPROVER_DUMP_L66;

        return_value_LLskip$15=LLskip();
        if(return_value_LLskip$15 == 0)
          break;

      }
      LLtcnt[(signed long int)12] = LLtcnt[(signed long int)12] - 1;
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L65:
      ;
      LLtcnt[(signed long int)12] = LLtcnt[(signed long int)12] - 1;
      goto __CPROVER_DUMP_L70;

    __CPROVER_DUMP_L66:
      ;
      LLtcnt[(signed long int)12] = LLtcnt[(signed long int)12] - 1;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] + 1;
      if(!(LLsymb == 62))
        LLerror(62);

      LLread();
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      if(!(LLsymb == 264))
        LLerror(264);

      (*next)->min_delay=atoi(yytext);
      if(!((*next)->delay >= (*next)->min_delay))
        (*next)->min_delay = (*next)->delay;

      LLread();

    __CPROVER_DUMP_L70:
      ;
      LLtcnt[(signed long int)9] = LLtcnt[(signed long int)9] - 1;
      if(!(LLsymb == 265))
        LLerror(265);

      (*next)->string=safe_strdup_remove_quotes(yytext);
      unsigned long int return_value_parseEscapes$16;
      return_value_parseEscapes$16=parseEscapes((*next)->string);
      (*next)->length = (signed int)return_value_parseEscapes$16;
      next = &(*next)->next;
      LLread();
      goto __CPROVER_DUMP_L73;

    __CPROVER_DUMP_L72:
      ;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      goto __CPROVER_DUMP_L74;

    __CPROVER_DUMP_L73:
      ;
      goto LL_8;

    __CPROVER_DUMP_L74:
      ;
      goto __CPROVER_DUMP_L86;

    __CPROVER_DUMP_L75:
      ;
      LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] + 1;
      if(!(LLsymb == 262))
        LLerror(262);

      LLread();
      LLtcnt[(signed long int)8] = LLtcnt[(signed long int)8] - 1;
      if(!(LLsymb == 264))
        LLerror(264);

      if(start_parsed == /*enum*/td_false)
        fatal("%s:%d: expect_exit directive before start directive\n", file_name, line_number);

      LLretval->type = (enum anonymous$27)EXP_EXPECT_EXIT;
      LLretval->line = line_number;
      LLretval->un.number=atoi(yytext);
      LLread();
      goto __CPROVER_DUMP_L86;
    }
    return_value_LLskip$17=LLskip();
    if(return_value_LLskip$17 == 0)
      break;

  }

__CPROVER_DUMP_L80:
  ;
  LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
  if(!(LLsymb == 266))
    LLerror(266);

  if(start_parsed == /*enum*/td_false)
    fatal("%s:%d: expect_suspend directive before start directive\n", file_name, line_number);

  LLretval->type = (enum anonymous$27)EXP_EXPECT_SUSPEND;
  LLretval->line = line_number;
  LLread();
  goto __CPROVER_DUMP_L86;

__CPROVER_DUMP_L83:
  ;
  LLscnt[(signed long int)0] = LLscnt[(signed long int)0] - 1;
  if(!(LLsymb == 263))
    LLerror(263);

  if(start_parsed == /*enum*/td_false)
    fatal("%s:%d: interact directive before start directive\n", file_name, line_number);

  LLretval->type = (enum anonymous$27)EXP_INTERACT;
  LLretval->line = line_number;
  LLread();
  goto __CPROVER_DUMP_L86;

__CPROVER_DUMP_L86:
  ;
  return LLretval;
}

// LLerror
// file src/input.c line 83
static void LLerror(signed int LLtoken)
{
  if(LLtoken == 256)
  {
    LLmessage(-1);
    do
    {
      LLsymb=LLlexerWrapper();
      if(LLindex[(signed long int)(1 + LLsymb)] == 0)
        break;

    }
    while((_Bool)1);
  }

  else
  {
    LLtcnt[(signed long int)LLindex[(signed long int)(LLtoken + 1)]] = LLtcnt[(signed long int)LLindex[(signed long int)(LLtoken + 1)]] + 1;
    LLskip();
    LLtcnt[(signed long int)LLindex[(signed long int)(LLtoken + 1)]] = LLtcnt[(signed long int)LLindex[(signed long int)(LLtoken + 1)]] - 1;
    if(!(LLsymb == LLtoken))
    {
      LLreissue = LLsymb;
      LLmessage(LLtoken);
    }

  }
}

// LLgetSymbol
// file src/input.c line 163
const char * LLgetSymbol(signed int LLtoken)
{
  if(LLtoken >= 268 || !(LLtoken >= -1))
    return (char *)0;

  else
    return LLsymbolTable[(signed long int)(LLtoken + 1)];
}

// LLlexerWrapper
// file src/input.c line 53
static signed int LLlexerWrapper(void)
{
  if(LLreissue == -2)
  {
    signed int return_value_yylex$1;
    return_value_yylex$1=yylex();
    return return_value_yylex$1;
  }

  else
  {
    signed int LLretval = LLreissue;
    LLreissue = -2;
    return LLretval;
  }
}

// LLmessage
// file input.g line 33
void LLmessage(signed int class)
{
  const char *return_value_LLgetSymbol$1;
  const char *return_value_LLgetSymbol$2;
  if(!(class == -1))
  {
    if(class == 0)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    return_value_LLgetSymbol$1=LLgetSymbol(LLsymb);
    fatal("%s:%d: Unexpected %s at end of file\n", file_name, line_number, return_value_LLgetSymbol$1);

  __CPROVER_DUMP_L2:
    ;
    return_value_LLgetSymbol$2=LLgetSymbol(LLsymb);
    fatal("%s:%d: Unexpected %s\n", file_name, line_number, return_value_LLgetSymbol$2);
  }
  const char *return_value_LLgetSymbol$3;
  return_value_LLgetSymbol$3=LLgetSymbol(class);
  const char *return_value_LLgetSymbol$4;
  return_value_LLgetSymbol$4=LLgetSymbol(LLsymb);
  fatal("%s:%d: Expected %s before %s\n", file_name, line_number, return_value_LLgetSymbol$3, return_value_LLgetSymbol$4);
}

// LLread
// file src/input.c line 63
static void LLread(void)
{
  LLsymb=LLlexerWrapper();
  LLcsymb = LLindex[(signed long int)(LLsymb + 1)];
}

// LLskip
// file src/input.c line 64
static signed int LLskip(void)
{
  signed int LL_i;
  if(LLcsymb >= 0)
  {
    if(!(LLtcnt[(signed long int)LLcsymb] == 0))
      return 0;

    LL_i = 0;
    for( ; !(LL_i >= 2); LL_i = LL_i + 1)
      if(!(LLscnt[(signed long int)LL_i] == 0))
      {
        if(!((1 << (7 & LLcsymb) & (signed int)LLsets[(signed long int)(4 * LL_i + LLcsymb / 8)]) == 0))
          return 0;

      }

  }

  do
  {
    LLmessage(0);
    do
    {
      LLsymb=LLlexerWrapper();
      LLcsymb = LLindex[(signed long int)(LLsymb + 1)];
      if(LLcsymb >= 0)
        break;

      LLmessage(0);
    }
    while((_Bool)1);
    if(!(LLtcnt[(signed long int)LLcsymb] == 0))
      return 1;

    LL_i = 0;
    for( ; !(LL_i >= 2); LL_i = LL_i + 1)
      if(!(LLscnt[(signed long int)LL_i] == 0))
      {
        if(!((1 << (7 & LLcsymb) & (signed int)LLsets[(signed long int)(4 * LL_i + LLcsymb / 8)]) == 0))
          return 1;

      }

  }
  while((_Bool)1);
}

// _put_value
// file src/window.c line 610
unsigned long int _put_value(unsigned int c, char *dst)
{
  if(!(c >= 128u))
  {
    dst[(signed long int)0] = (char)c;
    return (unsigned long int)1;
  }

  else
    if(!(c >= 2048u))
    {
      dst[(signed long int)0] = (char)((unsigned int)0xc0 | c >> 6);
      dst[(signed long int)1] = (char)((unsigned int)0x80 | c & (unsigned int)0x3f);
      return (unsigned long int)2;
    }

    else
      if(!(c >= 65536u))
      {
        dst[(signed long int)0] = (char)((unsigned int)0xe0 | c >> 12);
        dst[(signed long int)1] = (char)((unsigned int)0x80 | c >> 6 & (unsigned int)0x3f);
        dst[(signed long int)2] = (char)((unsigned int)0x80 | c & (unsigned int)0x3f);
        return (unsigned long int)3;
      }

      else
        if(!(c >= 2097152u))
        {
          dst[(signed long int)0] = (char)((unsigned int)0xf0 | c >> 18);
          dst[(signed long int)1] = (char)((unsigned int)0x80 | c >> 12 & (unsigned int)0x3f);
          dst[(signed long int)2] = (char)((unsigned int)0x80 | c >> 6 & (unsigned int)0x3f);
          dst[(signed long int)3] = (char)((unsigned int)0x80 | c & (unsigned int)0x3f);
          return (unsigned long int)4;
        }

        else
          if(!(c >= 67108864u))
          {
            dst[(signed long int)0] = (char)((unsigned int)0xf8 | c >> 24);
            dst[(signed long int)1] = (char)((unsigned int)0x80 | c >> 18 & (unsigned int)0x3f);
            dst[(signed long int)1] = (char)((unsigned int)0x80 | c >> 12 & (unsigned int)0x3f);
            dst[(signed long int)2] = (char)((unsigned int)0x80 | c >> 6 & (unsigned int)0x3f);
            dst[(signed long int)3] = (char)((unsigned int)0x80 | c & (unsigned int)0x3f);
            return (unsigned long int)5;
          }

          else
          {
            dst[(signed long int)0] = (char)((unsigned int)0xfc | c >> 30);
            dst[(signed long int)1] = (char)((unsigned int)0x80 | c >> 24 & (unsigned int)0x3f);
            dst[(signed long int)1] = (char)((unsigned int)0x80 | c >> 18 & (unsigned int)0x3f);
            dst[(signed long int)1] = (char)((unsigned int)0x80 | c >> 12 & (unsigned int)0x3f);
            dst[(signed long int)2] = (char)((unsigned int)0x80 | c >> 6 & (unsigned int)0x3f);
            dst[(signed long int)3] = (char)((unsigned int)0x80 | c & (unsigned int)0x3f);
            return (unsigned long int)6;
          }
}

// _win_add_zerowidth
// file src/window.c line 691
static enum anonymous$10 _win_add_zerowidth(struct anonymous$12 *win, const char *str, unsigned long int n)
{
  unsigned int block_size;
  unsigned int new_block_size;
  unsigned long int block_size_bytes;
  unsigned long int new_block_size_bytes;
  char new_block_size_str[6l];
  signed int pos_width;
  signed int i;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  if(win->lines == ((struct anonymous$14 *)NULL))
    return (enum anonymous$10)td_false;

  else
    if(win->paint_y >= win->height)
      return (enum anonymous$10)td_true;

    else
      if(!(win->width >= win->paint_x))
        return (enum anonymous$10)td_true;

      else
      {
        if(!(win->cached_pos_line == win->paint_y))
          tmp_if_expr$1 = (_Bool)1;

        else
          tmp_if_expr$1 = win->cached_pos_width >= win->paint_x ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$1)
        {
          win->cached_pos_line = win->paint_y;
          win->cached_pos = 0;
          win->cached_pos_width = 0;
        }

        if((win->lines + (signed long int)win->paint_y)->length == 0)
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = win->paint_x == 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$2)
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = win->paint_x > (win->lines + (signed long int)win->paint_y)->width ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$3)
          return (enum anonymous$10)td_true;

        else
        {
          enum anonymous$10 return_value_ensure_space$4;
          return_value_ensure_space$4=ensure_space(win->lines + (signed long int)win->paint_y, n + (unsigned long int)1);
          if(return_value_ensure_space$4 == /*enum*/td_false)
            return (enum anonymous$10)td_false;

          else
          {
            pos_width = win->cached_pos_width;
            block_size = (unsigned int)0;
            i = win->cached_pos;
            for( ; !(i >= (win->lines + (signed long int)win->paint_y)->length); i = i + (signed int)((unsigned long int)(block_size >> 1) + block_size_bytes))
            {
              block_size=get_value((win->lines + (signed long int)win->paint_y)->data + (signed long int)i, &block_size_bytes);
              pos_width = pos_width + (signed int)((block_size & (unsigned int)1) + (unsigned int)1);
              if(pos_width >= win->paint_x)
                break;

            }
            if(!(win->paint_x >= pos_width))
              return (enum anonymous$10)td_true;

            else
            {
              new_block_size = (unsigned int)((unsigned long int)block_size + (n << 1));
              new_block_size_bytes=_put_value(new_block_size, new_block_size_str);
              block_size = block_size >> 1;
              new_block_size = new_block_size >> 1;
              memmove((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i + (signed long int)new_block_size + (signed long int)new_block_size_bytes), (const void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i + (signed long int)block_size + (signed long int)block_size_bytes), (unsigned long int)((unsigned int)((win->lines + (signed long int)win->paint_y)->length - i) - block_size) - block_size_bytes);
              memcpy((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i + (signed long int)block_size + (signed long int)block_size_bytes), (const void *)str, n);
              if(!(new_block_size_bytes == block_size_bytes))
                memmove((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i + (signed long int)new_block_size_bytes), (const void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i + (signed long int)block_size_bytes), (unsigned long int)new_block_size);

              memcpy((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i), (const void *)new_block_size_str, new_block_size_bytes);
              (win->lines + (signed long int)win->paint_y)->length = (win->lines + (signed long int)win->paint_y)->length + (signed int)(n + (new_block_size_bytes - block_size_bytes));
              return (enum anonymous$10)td_true;
            }
          }
        }
      }
}

// _win_write_blocks
// file src/window.c line 777
static enum anonymous$10 _win_write_blocks(struct anonymous$12 *win, const char *blocks, unsigned long int n)
{
  unsigned int block_size;
  unsigned long int block_size_bytes;
  unsigned long int k;
  signed int i;
  signed int width = 0;
  signed int extra_spaces = 0;
  unsigned int extra_spaces_attr;
  enum anonymous$10 result = (enum anonymous$10)td_true;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  signed int tmp_if_expr$7;
  enum anonymous$10 return_value_ensure_space$8;
  enum anonymous$10 return_value__win_write_blocks$9;
  if(win->lines == ((struct anonymous$14 *)NULL))
    return (enum anonymous$10)td_false;

  else
  {
    if(win->paint_y >= win->height)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = win->paint_x >= win->width ? (_Bool)1 : (_Bool)0;
    if(n == 0ul || tmp_if_expr$1)
      return (enum anonymous$10)td_true;

    else
    {
      k = (unsigned long int)0;
      for( ; !(k >= n); k = k + (unsigned long int)(block_size >> 1) + block_size_bytes)
      {
        block_size=get_value(blocks + (signed long int)k, &block_size_bytes);
        if(!(win->width >= (1 & (signed int)block_size) + 1 + win->paint_x + width))
          break;

        width = width + (signed int)((block_size & (unsigned int)1) + (unsigned int)1);
      }
      if(!(k >= n))
      {
        extra_spaces = (win->width - win->paint_x) - width;
        extra_spaces_attr=get_block_attr(blocks + (signed long int)k);
      }

      n = k;
      if(!(win->cached_pos_line == win->paint_y))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = win->cached_pos_width > win->paint_x ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
      {
        win->cached_pos_line = win->paint_y;
        win->cached_pos = 0;
        win->cached_pos_width = 0;
      }

      if(win->paint_x >= (win->lines + (signed long int)win->paint_y)->width)
      {
        char default_attr_str[8l];
        unsigned long int default_attr_size;
        signed int diff = win->paint_x - (win->lines + (signed long int)win->paint_y)->width;
        signed int return_value_map_attr$3;
        return_value_map_attr$3=map_attr(win->default_attrs);
        default_attr_size=create_space_block(return_value_map_attr$3, default_attr_str);
        enum anonymous$10 return_value_ensure_space$4;
        return_value_ensure_space$4=ensure_space(win->lines + (signed long int)win->paint_y, n + (unsigned long int)diff * default_attr_size);
        if(return_value_ensure_space$4 == /*enum*/td_false)
          return (enum anonymous$10)td_false;

        i = diff;
        for( ; i >= 1; i = i - 1)
        {
          memcpy((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)(win->lines + (signed long int)win->paint_y)->length), (const void *)default_attr_str, default_attr_size);
          (win->lines + (signed long int)win->paint_y)->length = (win->lines + (signed long int)win->paint_y)->length + (signed int)default_attr_size;
        }
        memcpy((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)(win->lines + (signed long int)win->paint_y)->length), (const void *)blocks, n);
        (win->lines + (signed long int)win->paint_y)->length = (win->lines + (signed long int)win->paint_y)->length + (signed int)n;
        (win->lines + (signed long int)win->paint_y)->width = (win->lines + (signed long int)win->paint_y)->width + width + diff;
      }

      else
      {
        signed int pos_width = win->cached_pos_width;
        unsigned long int start_replace = (unsigned long int)0;
        unsigned long int start_space_attr;
        unsigned long int start_spaces;
        unsigned long int end_replace;
        unsigned long int end_space_attr;
        unsigned long int end_spaces;
        signed int sdiff;
        char start_space_str[8l];
        char end_space_str[8l];
        unsigned long int start_space_bytes;
        unsigned long int end_space_bytes;
        block_size = (unsigned int)0;
        i = win->cached_pos;
        for( ; !(i >= (win->lines + (signed long int)win->paint_y)->length); i = i + (signed int)((unsigned long int)(block_size >> 1) + block_size_bytes))
        {
          block_size=get_value((win->lines + (signed long int)win->paint_y)->data + (signed long int)i, &block_size_bytes);
          if(!(win->paint_x >= (1 & (signed int)block_size) + 1 + pos_width))
            break;

          pos_width = pos_width + (signed int)((block_size & (unsigned int)1) + (unsigned int)1);
        }
        win->cached_pos = i;
        win->cached_pos_width = pos_width;
        start_replace = (unsigned long int)i;
        unsigned int return_value_get_block_attr$5;
        return_value_get_block_attr$5=get_block_attr((win->lines + (signed long int)win->paint_y)->data + (signed long int)start_replace);
        start_space_attr = (unsigned long int)return_value_get_block_attr$5;
        start_spaces = (unsigned long int)(win->paint_x - pos_width);
        pos_width = pos_width + (signed int)((block_size & (unsigned int)1) + (unsigned int)1);
        i = i + (signed int)((unsigned long int)(block_size >> 1) + block_size_bytes);
        if(pos_width >= win->paint_x + width)
        {
          end_space_attr = start_space_attr;
          end_replace = (unsigned long int)i;
        }

        else
        {
          for( ; !(i >= (win->lines + (signed long int)win->paint_y)->length); i = i + (signed int)((unsigned long int)(block_size >> 1) + block_size_bytes))
          {
            block_size=get_value((win->lines + (signed long int)win->paint_y)->data + (signed long int)i, &block_size_bytes);
            pos_width = pos_width + (signed int)((block_size & (unsigned int)1) + (unsigned int)1);
            if(pos_width >= win->paint_x + width)
              break;

          }
          unsigned int return_value_get_block_attr$6;
          return_value_get_block_attr$6=get_block_attr((win->lines + (signed long int)win->paint_y)->data + (signed long int)i);
          end_space_attr = (unsigned long int)return_value_get_block_attr$6;
          end_replace = (unsigned long int)(i < (win->lines + (signed long int)win->paint_y)->length ? (signed int)((unsigned long int)((unsigned int)i + (block_size >> 1)) + block_size_bytes) : i);
        }
        if(!(win->paint_x + width >= pos_width))
          tmp_if_expr$7 = (pos_width - win->paint_x) - width;

        else
          tmp_if_expr$7 = 0;
        end_spaces = (unsigned long int)tmp_if_expr$7;
        start_space_bytes=create_space_block((signed int)start_space_attr, start_space_str);
        end_space_bytes=create_space_block((signed int)end_space_attr, end_space_str);
        sdiff = (signed int)((n + end_spaces * end_space_bytes + start_spaces * start_space_bytes) - (end_replace - start_replace));
        if(sdiff >= 1)
        {
          return_value_ensure_space$8=ensure_space(win->lines + (signed long int)win->paint_y, (unsigned long int)sdiff);
          if(return_value_ensure_space$8 == /*enum*/td_false)
            return (enum anonymous$10)td_false;

        }

        memmove((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)end_replace + (signed long int)sdiff), (const void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)end_replace), (unsigned long int)(win->lines + (signed long int)win->paint_y)->length - end_replace);
        i = (signed int)start_replace;
        for( ; start_spaces >= 1ul; start_spaces = start_spaces - 1ul)
        {
          memcpy((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i), (const void *)start_space_str, start_space_bytes);
          i = i + (signed int)start_space_bytes;
        }
        memcpy((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i), (const void *)blocks, n);
        i = i + (signed int)n;
        for( ; end_spaces >= 1ul; end_spaces = end_spaces - 1ul)
        {
          memcpy((void *)((win->lines + (signed long int)win->paint_y)->data + (signed long int)i), (const void *)end_space_str, end_space_bytes);
          i = i + (signed int)end_space_bytes;
        }
        (win->lines + (signed long int)win->paint_y)->length = (win->lines + (signed long int)win->paint_y)->length + sdiff;
        if(!((win->lines + (signed long int)win->paint_y)->width >= win->paint_x + width))
          (win->lines + (signed long int)win->paint_y)->width = width + win->paint_x;

      }
      win->paint_x = win->paint_x + width;
      if(extra_spaces >= 1)
      {
        char extra_space_str[8l];
        unsigned long int extra_space_bytes;
        extra_space_bytes=create_space_block((signed int)extra_spaces_attr, extra_space_str);
        i = 0;
        for( ; !(i >= extra_spaces); i = i + 1)
        {
          return_value__win_write_blocks$9=_win_write_blocks(win, extra_space_str, extra_space_bytes);
          result = result & return_value__win_write_blocks$9;
        }
      }

      return result;
    }
  }
}

// adjust_lines
// file src/window.c line 1068
static void adjust_lines(struct anonymous$12 *win)
{
  char adjust_lines$$1$$space_str[8l];
  unsigned long int space_str_bytes;
  signed int saved_paint_x = win->paint_x;
  signed int saved_paint_y = win->paint_y;
  signed int line;
  signed int return_value_map_attr$1;
  return_value_map_attr$1=map_attr(win->default_attrs);
  space_str_bytes=create_space_block(return_value_map_attr$1, adjust_lines$$1$$space_str);
  line = 0;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$5;
  enum anonymous$10 return_value_ensure_space$4;
  for( ; !(line >= win->height); line = line + 1)
    if(!((win->lines + (signed long int)line)->width >= win->width))
    {
      win->paint_y = line;
      win->paint_x = win->width - 1;
      _win_write_blocks(win, adjust_lines$$1$$space_str, space_str_bytes);
    }

    else
      if(!(win->width >= (win->lines + (signed long int)line)->width))
      {
        signed int sumwidth = 0;
        signed int i;
        unsigned int block_size;
        unsigned long int block_size_bytes;
        block_size=get_value((win->lines + (signed long int)line)->data, &block_size_bytes);
        i = 0;
        do
        {
          if(!(i >= (win->lines + (signed long int)line)->length))
            tmp_if_expr$2 = sumwidth + (signed int)((block_size & (unsigned int)1) + (unsigned int)1) <= win->width ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$2 = (_Bool)0;
          if(!tmp_if_expr$2)
            break;

          sumwidth = sumwidth + (signed int)((block_size & (unsigned int)1) + (unsigned int)1);
          block_size=get_value((win->lines + (signed long int)line)->data + (signed long int)i, &block_size_bytes);
          i = i + (signed int)((unsigned long int)(block_size >> 1) + block_size_bytes);
        }
        while((_Bool)1);
        if(!(sumwidth >= win->width))
        {
          signed int spaces = win->width - sumwidth;
          char space_str[8l];
          unsigned long int adjust_lines$$1$$1$$1$$2$$2$$space_str_bytes;
          signed int return_value_map_attr$3;
          return_value_map_attr$3=map_attr(0);
          adjust_lines$$1$$1$$1$$2$$2$$space_str_bytes=create_space_block(return_value_map_attr$3, space_str);
          if(!((signed int)adjust_lines$$1$$1$$1$$2$$2$$space_str_bytes * (signed int)(unsigned long int)spaces >= (win->lines + (signed long int)line)->length + -i))
            tmp_if_expr$5 = (_Bool)1;

          else
          {
            return_value_ensure_space$4=ensure_space(win->lines + (signed long int)line, ((unsigned long int)spaces * adjust_lines$$1$$1$$1$$2$$2$$space_str_bytes - (unsigned long int)(win->lines + (signed long int)line)->length) + (unsigned long int)i);
            tmp_if_expr$5 = return_value_ensure_space$4 != (enum anonymous$10)0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$5)
          {
            win->paint_x = sumwidth;
            for( ; spaces >= 1; spaces = spaces - 1)
              _win_write_blocks(win, space_str, adjust_lines$$1$$1$$1$$2$$2$$space_str_bytes);
          }

        }

        (win->lines + (signed long int)line)->length = i;
        (win->lines + (signed long int)line)->width = win->width;
      }

  win->paint_x = saved_paint_x;
  win->paint_y = saved_paint_y;
}

// advance_script
// file src/compare.c line 161
static enum anonymous$10 advance_script(struct ExpNode **script, struct anonymous$12 *win)
{
  for( ; !(*script == ((struct ExpNode *)NULL)); *script = (*script)->next)
    switch((signed int)(*script)->type)
    {
      case EXP_START:

      case EXP_INTERACT:

      case EXP_ENV:
        break;
      case EXP_EXPECT:
      {
        win_write_stringlist(win, (*script)->un.args);
        break;
      }
      case EXP_SEND:
      {
        *script = (*script)->next;
        return (enum anonymous$10)td_true;
      }
      case EXP_EXPECT_EXIT:
      {
        *script = (*script)->next;
        return (enum anonymous$10)td_true;
      }
      case EXP_WINDOW_SIZE:
      {
        win_resize(win, (*script)->un.size.rows, (*script)->un.size.columns);
        *script = (*script)->next;
        return (enum anonymous$10)td_true;
      }
      case EXP_EXPECT_SUSPEND:
      {
        win_set_paint(win, 0, 0);
        win_clrtobot(win);
        return (enum anonymous$10)td_true;
      }
      case EXP_REQUIRE_VERSION:
        break;
      default:
        fatal("Internal error\n");
    }
  return (enum anonymous$10)td_false;
}

// call_setupterm
// file src/curses_handling.c line 60
void call_setupterm(const char *name)
{
  setupterm(name, 1, ((signed int *)NULL));
}

// check_fmt
// file src/common.c line 749
enum anonymous$10 check_fmt(const char *str)
{
  enum anonymous$10 percent_seen = (enum anonymous$10)td_false;
  enum anonymous$10 conversion_seen = (enum anonymous$10)td_false;
  _Bool tmp_if_expr$1;
  for( ; !((signed int)*str == 0); str = str + 1l)
  {
    if((signed int)*str == 37)
    {
      if(!(percent_seen == /*enum*/td_false))
        return (enum anonymous$10)td_false;

      if((signed int)str[1l] == 37)
      {
        str = str + 1l;
        goto __CPROVER_DUMP_L9;
      }

      percent_seen = (enum anonymous$10)td_true;
    }

    else
      if(!(percent_seen == /*enum*/td_false))
      {
        if((signed int)*str == 100)
        {
          percent_seen = (enum anonymous$10)td_false;
          if(!(conversion_seen == /*enum*/td_false))
            return (enum anonymous$10)td_false;

          conversion_seen = (enum anonymous$10)td_true;
        }

        else
        {
          if(!((signed int)*str >= 48))
            tmp_if_expr$1 = (_Bool)1;

          else
            tmp_if_expr$1 = (signed int)*str > 57 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$1)
            return (enum anonymous$10)td_false;

        }
      }


  __CPROVER_DUMP_L9:
    ;
  }
  return (enum anonymous$10)(!(percent_seen != (enum anonymous$10)0) && conversion_seen != (enum anonymous$10)0);
}

// check_script
// file src/common.c line 553
void check_script(const char *file_name, struct ExpNode *script)
{
  signed int current_check_version = 0;
  struct StringListNode *string;
  for( ; !(script == ((struct ExpNode *)NULL)); script = script->next)
    switch((signed int)script->type)
    {
      case EXP_START:

      case EXP_INTERACT:

      case EXP_ENV:

      case EXP_EXPECT:

      case EXP_EXPECT_EXIT:

      case EXP_EXPECT_SUSPEND:
        break;
      case EXP_SEND:
      {
        if(current_check_version >= 2)
          break;

        string = script->un.args;
        for( ; !(string == ((struct StringListNode *)NULL)); string = string->next)
          if(string->min_delay >= 1)
          {
            fprintf(stderr, "%s:%d: WARNING: minimum delay construct is not supported in script version 1. Please add 'require_version 2' to your script.\n", file_name, script->line);
            break;
          }

        break;
      }
      case EXP_WINDOW_SIZE:
      {
        if(script->un.size.min_delay >= 1)
          fprintf(stderr, "%s:%d: WARNING: minimum delay construct is not supported in script version 1. Please add 'require_version 2' to your script.\n", file_name, script->line);

        break;
      }
      case EXP_REQUIRE_VERSION:
      {
        if(script->un.number >= 3)
          fatal("Script requires an unsupported script version.\n");

        current_check_version = script->un.number;
        break;
      }
      default:
        fatal("Internal error\n");
    }
}

// color2rgb
// file src/write_image.c line 70
static void color2rgb(signed int color, signed int *red, signed int *green, signed int *blue)
{
  signed int tmp_if_expr$1;
  signed int tmp_if_expr$2;
  signed int tmp_if_expr$3;
  if(!(color >= 16))
  {
    signed int color_map[16l][3l] = { { 0, 0, 0 }, { 205, 0, 0 }, { 0, 205, 0 }, { 205, 205, 0 }, { 0, 0, 238 }, { 205, 0, 205 }, { 0, 205, 205 }, { 229, 229, 229 }, { 127, 127, 127 }, { 255, 0, 0 }, { 0, 255, 0 }, { 255, 255, 0 }, { 92, 92, 255 }, { 255, 0, 255 }, { 0, 255, 255 }, { 255, 255, 255 } };
    *red = color_map[(signed long int)color][(signed long int)0];
    *green = color_map[(signed long int)color][(signed long int)1];
    *blue = color_map[(signed long int)color][(signed long int)2];
  }

  else
    if(!(color >= 232))
    {
      color = color - 16;
      *red = color / 36;
      color = color - 36 * *red;
      if(*red == 0)
        tmp_if_expr$1 = 0;

      else
        tmp_if_expr$1 = 55 + 40 * *red;
      *red = tmp_if_expr$1;
      *green = color / 6;
      color = color - 6 * *green;
      if(*green == 0)
        tmp_if_expr$2 = 0;

      else
        tmp_if_expr$2 = 55 + 40 * *green;
      *green = tmp_if_expr$2;
      *blue = color;
      if(*blue == 0)
        tmp_if_expr$3 = 0;

      else
        tmp_if_expr$3 = 55 + 40 * *blue;
      *blue = tmp_if_expr$3;
    }

    else
      if(!(color >= 256))
      {
        color = color - 232;
        *blue = color * 10 + 8;
        *green = *blue;
        *red = *green;
      }

      else
        if(color == 256)
        {
          *blue = 0;
          *green = *blue;
          *red = *green;
        }

        else
          if(color == 257)
          {
            *blue = 255;
            *green = *blue;
            *red = *green;
          }

}

// compare
// file src/compare.c line 310
static void compare(void)
{
  scriptA=find_start(scriptA);
  scriptB=find_start(scriptB);
  if(scriptA == ((struct ExpNode *)NULL))
    fatal("Recording '%s' does not have a start directive\n", inputA);

  if(scriptB == ((struct ExpNode *)NULL))
    fatal("Recording '%s' does not have a start directive\n", inputB);

  _Bool tmp_if_expr$1;
  for( ; !(scriptA == ((struct ExpNode *)NULL)) && !(scriptB == ((struct ExpNode *)NULL)); scriptB = scriptB->next)
  {
    static const char *exp2string[9l] = { "start", "env", "window_size", "expect", "send", "expect_exit", "interact", "expect_suspend", "require_version" };
    if(!(scriptA->type == scriptB->type))
      fatal("Recordings have different actions (%s/%s) at line %d/%d\n", exp2string[(signed long int)scriptA->type], exp2string[(signed long int)scriptB->type], scriptA->line, scriptB->line);

    switch((signed int)scriptA->type)
    {
      case EXP_START:

      case EXP_INTERACT:
        break;
      case EXP_EXPECT:
      {
        compare_expects();
        break;
      }
      case EXP_SEND:
        break;
      case EXP_WINDOW_SIZE:
      {
        if(!(scriptA->un.size.columns == scriptB->un.size.columns))
          tmp_if_expr$1 = (_Bool)1;

        else
          tmp_if_expr$1 = scriptA->un.size.rows != scriptB->un.size.rows ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$1)
          fatal("Recordings set different window size (%dx%d/%dx%d) at line %d/%d\n", scriptA->un.size.columns, scriptA->un.size.rows, scriptB->un.size.columns, scriptB->un.size.rows, scriptA->line, scriptB->line);

        break;
      }
      case EXP_EXPECT_EXIT:
      {
        if(!(scriptA->un.number == scriptB->un.number))
          fatal("Expecting different exit value (%d/%d) at line %d/%d\n", scriptA->un.number, scriptB->un.number, scriptA->line, scriptB->line);

        break;
      }
      case EXP_EXPECT_SUSPEND:
        break;
      default:
        fatal("Internal error\n");
    }
    scriptA = scriptA->next;
  }
}

// compare_expects
// file src/compare.c line 263
static void compare_expects(void)
{
  struct StringListNode *stringA = scriptA->un.args;
  struct StringListNode *stringB = scriptB->un.args;
  signed int stringA_offset = 0;
  signed int stringB_offset = 0;
  signed int min_length;
  signed int tmp_if_expr$1;
  while((_Bool)1)
  {
    if(!(stringA->length + -stringA_offset >= stringB->length + -stringB_offset))
      tmp_if_expr$1 = stringA->length - stringA_offset;

    else
      tmp_if_expr$1 = stringB->length - stringB_offset;
    min_length = tmp_if_expr$1;
    signed int return_value_memcmp$2;
    return_value_memcmp$2=memcmp((const void *)(stringA->string + (signed long int)stringA_offset), (const void *)(stringB->string + (signed long int)stringB_offset), (unsigned long int)min_length);
    if(!(return_value_memcmp$2 == 0))
      fatal("Different strings expected at %d/%d\n", scriptA->line, scriptB->line);

    stringA_offset = stringA_offset + min_length;
    if(stringA_offset >= stringA->length)
    {
      stringA = stringA->next;
      stringA_offset = 0;
    }

    stringB_offset = stringB_offset + min_length;
    if(stringB_offset >= stringB->length)
    {
      stringB = stringB->next;
      stringB_offset = 0;
    }

    if(stringA == ((struct StringListNode *)NULL) && stringB == ((struct StringListNode *)NULL))
    {
      scriptA = scriptA->next;
      scriptB = scriptB->next;
      goto __CPROVER_DUMP_L13;
    }

    if(stringA == ((struct StringListNode *)NULL))
    {
      if(!((signed int)scriptA->next->type == EXP_EXPECT))
        fatal("Different strings expected at %d/%d\n", scriptA->line, scriptB->line);

      scriptA = scriptA->next;
      stringA = scriptA->un.args;
    }

    if(stringB == ((struct StringListNode *)NULL))
    {
      if(!((signed int)scriptB->next->type == EXP_EXPECT))
        fatal("Different strings expected at %d/%d\n", scriptA->line, scriptB->line);

      scriptB = scriptB->next;
      stringB = scriptB->un.args;
    }

  }

__CPROVER_DUMP_L13:
  ;
}

// copy_attrs_to_terminal
// file src/common.c line 130
void copy_attrs_to_terminal(signed int from)
{
  struct termios attrs;
  signed int return_value_tcgetattr$1;
  return_value_tcgetattr$1=tcgetattr(from, &attrs);
  if(return_value_tcgetattr$1 >= 0)
  {
    attrs.c_lflag = attrs.c_lflag & (unsigned int)~(0000002 | 0000010);
    tcsetattr(0, 1, &attrs);
  }

}

// copy_fd
// file src/common.c line 291
void copy_fd(signed int from, signed int to, enum anonymous$3 dir, struct _IO_FILE *output)
{
  unsigned char buffer[1024l];
  signed long int result;
  struct termios backup;
  enum anonymous$10 restore = (enum anonymous$10)td_true;
  if((signed int)dir == TYPE_INPUT)
  {
    signed int return_value_tcgetattr$1;
    return_value_tcgetattr$1=tcgetattr(to, &backup);
    if((8u & backup.c_lflag) == 0u || !(return_value_tcgetattr$1 >= 0))
      restore = (enum anonymous$10)td_false;

    else
    {
      struct termios noecho = backup;
      noecho.c_lflag = noecho.c_lflag & (unsigned int)~0000010;
      tcsetattr(to, 0, &noecho);
    }
  }

  signed int tmp_if_expr$3;
  signed int return_value_get_elapsed$2;
  signed int *return_value___errno_location$7;
  do
  {

  repeat:
    ;
    result=read(from, (void *)buffer, sizeof(unsigned char [1024l]) /*1024ul*/ );
    if(result >= 1l)
    {
      if(!(output == ((struct _IO_FILE *)NULL)))
      {
        if((signed int)dir == TYPE_INPUT)
        {
          return_value_get_elapsed$2=get_elapsed();
          tmp_if_expr$3 = return_value_get_elapsed$2;
        }

        else
          tmp_if_expr$3 = 0;
        write_record(output, dir, tmp_if_expr$3, 0, buffer, result);
      }

      if((signed int)dir == TYPE_INPUT && !(restore == /*enum*/td_false))
        write_echo(buffer, (unsigned long int)result);

      safe_write(to, (const void *)buffer, (unsigned long int)result);
      goto repeat;
    }

    if(result >= 0l)
      goto __CPROVER_DUMP_L12;

    return_value___errno_location$7=__errno_location();
    if(!(*return_value___errno_location$7 == 4))
      break;

  }
  while((_Bool)1);
  signed int *return_value___errno_location$6;
  return_value___errno_location$6=__errno_location();
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  if(!(*return_value___errno_location$6 == 11))
  {
    if((signed int)dir == TYPE_INPUT)
    {
      return_value___errno_location$4=__errno_location();
      return_value_strerror$5=strerror(*return_value___errno_location$4);
      fatal("Error reading data from terminal or pty: %s\n", return_value_strerror$5);
    }

  }


__CPROVER_DUMP_L12:
  ;
  if((signed int)dir == TYPE_INPUT && !(restore == /*enum*/td_false))
    tcsetattr(to, 0, &backup);

}

// create_space_block
// file src/window.c line 667
static unsigned long int create_space_block(signed int attr, char *out)
{
  unsigned long int result_size;
  result_size=_put_value((unsigned int)attr, out + (signed long int)1);
  result_size = result_size + 1ul;
  out[(signed long int)result_size] = (char)32;
  out[(signed long int)0] = (char)(result_size << 1);
  result_size = result_size + 1ul;
  return result_size;
}

// detect_resize_capable
// file src/common.c line 457
enum anonymous$10 detect_resize_capable(void)
{
  const char *term;
  term=getenv("TERM");
  _Bool tmp_if_expr$3;
  signed int return_value_strcmp$2;
  _Bool tmp_if_expr$5;
  signed int return_value_strcmp$4;
  if(term == ((const char *)NULL))
    return (enum anonymous$10)td_false;

  else
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(term, "xterm");
    if(return_value_strcmp$1 == 0)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_strcmp$2=strcmp(term, "rxvt");
      tmp_if_expr$3 = return_value_strcmp$2 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$3)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      return_value_strcmp$4=strcmp(term, "Eterm");
      tmp_if_expr$5 = return_value_strcmp$4 == 0 ? (_Bool)1 : (_Bool)0;
    }
    return (enum anonymous$10)tmp_if_expr$5;
  }
}

// do_action
// file src/write_stringlist.c line 113
static void do_action(struct anonymous$12 *win, enum anonymous$16 action, signed int attr)
{
  signed int return_value_win_get_default_attrs$1;
  signed int return_value_win_get_default_attrs$2;
  signed int return_value_win_get_paint_y$3;
  signed int paint_x;
  signed int return_value_win_get_width$6;
  switch((signed int)action)
  {
    case ACTION_ATTR_OFF:
    {
      return_value_win_get_default_attrs$1=win_get_default_attrs(win);
      win_set_default_attrs(win, return_value_win_get_default_attrs$1 & ~attr);
      break;
    }
    case ACTION_ATTR_ON:
    {
      return_value_win_get_default_attrs$2=win_get_default_attrs(win);
      win_set_default_attrs(win, return_value_win_get_default_attrs$2 | attr);
      break;
    }
    case ACTION_CLEAR:
    {
      win_set_paint(win, 0, 0);
      win_clrtobot(win);
      break;
    }
    case ACTION_CR:
    {
      return_value_win_get_paint_y$3=win_get_paint_y(win);
      win_set_paint(win, return_value_win_get_paint_y$3, 0);
      break;
    }
    case ACTION_CUP_OFF:
    {
      win_set_cup(win, (enum anonymous$10)td_false);
      break;
    }
    case ACTION_CUP_ON:
    {
      win_set_cup(win, (enum anonymous$10)td_true);
      break;
    }
    case ACTION_CURSOR_INVIS:
    {
      win_set_cursor(win, (enum anonymous$15)CURSOR_INVIS);
      break;
    }
    case ACTION_CURSOR_NORMAL:
    {
      win_set_cursor(win, (enum anonymous$15)CURSOR_NORM);
      break;
    }
    case ACTION_CURSOR_VVIS:
    {
      win_set_cursor(win, (enum anonymous$15)CURSOR_VVIS);
      break;
    }
    case ACTION_HOME:
    {
      win_set_paint(win, 0, 0);
      break;
    }
    case ACTION_NONE:
      break;
    case ACTION_RESTORE_CURSOR:
    {
      win_restore_cursor(win);
      break;
    }
    case ACTION_SAVE_CURSOR:
    {
      win_save_cursor(win);
      break;
    }
    case ACTION_SCROLL_BCK:
    {
      win_scroll_back(win);
      break;
    }
    case ACTION_SCROLL_FWD:
    {
      win_scroll(win);
      break;
    }
    case ACTION_TAB:
    {
      paint_x=win_get_paint_x(win);
      paint_x = ((paint_x & ~0x7) + 8) - (paint_x & 0x7);
      return_value_win_get_width$6=win_get_width(win);
      if(paint_x >= return_value_win_get_width$6)
      {
        signed int paint_y;
        paint_y=win_get_paint_y(win);
        signed int return_value_win_get_height$4;
        return_value_win_get_height$4=win_get_height(win);
        if(!(1 + paint_y >= return_value_win_get_height$4))
          win_set_paint(win, paint_y + 1, 0);

      }

      else
      {
        signed int return_value_win_get_paint_y$5;
        return_value_win_get_paint_y$5=win_get_paint_y(win);
        win_set_paint(win, return_value_win_get_paint_y$5, paint_x);
      }
    }
  }
}

// do_delay
// file src/view.c line 92
static void do_delay(signed int delay)
{
  struct timespec delay_spec;
  if(delay == 0)
    goto __CPROVER_DUMP_L7;

  else
    if(!(key_delay$link1 == 0))
      delay = key_delay$link1;

    else
      delay = (signed int)((double)delay / key_delay_scale$link1);
  delay_spec.tv_nsec = (signed long int)(delay % 1000) * (signed long int)1000000;
  delay_spec.tv_sec = (signed long int)(delay / 1000);
  signed int return_value_nanosleep$1;
  do
  {
    return_value_nanosleep$1=nanosleep(&delay_spec, &delay_spec);
    if(return_value_nanosleep$1 >= 0)
      break;

    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    if(!(*return_value___errno_location$2 == 4))
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      char *return_value_strerror$4;
      return_value_strerror$4=strerror(*return_value___errno_location$3);
      fatal("Error sleeping: %s\n", return_value_strerror$4);
    }

  }
  while((_Bool)1);

__CPROVER_DUMP_L7:
  ;
}

// do_visual_compare
// file src/compare.c line 196
static void do_visual_compare(void)
{
  enum anonymous$10 difference_reported = (enum anonymous$10)td_false;
  const char *winAterm;
  const char *winBterm;
  signed int step_count = 0;
  init_attr_map();
  winA=win_new(24, 80);
  if(winA == ((struct anonymous$12 *)NULL))
    fatal("Out of memory\n");

  winB=win_new(24, 80);
  if(winB == ((struct anonymous$12 *)NULL))
    fatal("Out of memory\n");

  winAterm=get_script_env(scriptA, "TERM");
  winBterm=get_script_env(scriptB, "TERM");
  if(winAterm == ((const char *)NULL))
    fatal("Recording %s does not contain a TERM environment variable\n", inputA);

  if(winBterm == ((const char *)NULL))
    fatal("Recording %s does not contain a TERM environment variable\n", inputB);

  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(winAterm, winBterm);
  if(!(return_value_strcmp$1 == 0))
    fatal("Recordings have a different TERM environment variable\n");

  const char *return_value_get_script_env$2;
  return_value_get_script_env$2=get_script_env(scriptA, "LANG");
  setup_ti_strings(winAterm, return_value_get_script_env$2);
  while((_Bool)1)
  {
    enum anonymous$10 return_value_advance_script$3;
    return_value_advance_script$3=advance_script(&scriptA, winA);
    if(return_value_advance_script$3 == /*enum*/td_false)
      break;

    enum anonymous$10 return_value_advance_script$4;
    return_value_advance_script$4=advance_script(&scriptB, winB);
    if(return_value_advance_script$4 == /*enum*/td_false)
      break;

    if(!(picture_series == ((const char *)NULL)))
    {
      char output_name_buffer[1024l];
      snprintf(output_name_buffer, sizeof(char [1024l]) /*1024ul*/ , picture_series, step_count);
      win_write_image(winA, winB, output_name_buffer);
    }

    enum anonymous$10 return_value_win_compare$5;
    return_value_win_compare$5=win_compare(winA, winB, describe$link1 != (enum anonymous$10)0 ? stderr : (struct _IO_FILE *)(void *)0);
    if(return_value_win_compare$5 == /*enum*/td_false)
    {
      if(!(picture_name$link1 == ((const char *)NULL)))
      {
        win_write_image(winA, winB, picture_name$link1);
        picture_name$link1 = (const char *)(void *)0;
      }

      if(difference_reported == /*enum*/td_false)
      {
        fprintf(stderr, "Recordings have different results\n");
        difference_reported = (enum anonymous$10)td_true;
      }

      if(!(stop_on_difference == /*enum*/td_false))
        exit(1);

      describe$link1 = (enum anonymous$10)td_false;
    }

    step_count = step_count + 1;
  }
  if(difference_reported == /*enum*/td_false && !(scriptA == scriptB))
    fatal("Recordings have different results\n");

  free_attr_map();
}

// end_client
// file src/replay.c line 255
static void end_client(void)
{
  kill(pid, 15);
  signed int return_value_poll$1;
  do
  {
    return_value_poll$1=poll(fdset + (signed long int)1, (unsigned long int)1, 2000);
    if(return_value_poll$1 >= 0)
      break;

  }
  while((_Bool)1);
  char signal_byte;
  signed long int return_value_safe_read$2;
  signed int return_value_waitpid$3;
  do
  {
    return_value_safe_read$2=safe_read(signal_pipe[(signed long int)0], &signal_byte, (unsigned long int)1);
    if(!(return_value_safe_read$2 == 1l))
      break;

    if((signed int)signal_byte == 0)
    {
      return_value_waitpid$3=waitpid(pid, &status, 1);
      if(return_value_waitpid$3 == pid)
        goto __CPROVER_DUMP_L9;

      continue;
    }

  }
  while((_Bool)1);
  kill(pid, 9);
  waitpid(pid, &status, 1);

__CPROVER_DUMP_L9:
  ;
}

// enqueue_pictures
// file src/picture_queue.c line 34
void enqueue_pictures(struct anonymous$12 *winA, struct anonymous$12 *winB, const char *name)
{
  struct picture_queue_t *item;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct picture_queue_t) /*32ul*/ );
  item = (struct picture_queue_t *)return_value_malloc$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  if(!(item == ((struct picture_queue_t *)NULL)))
  {
    item->winA=win_copy(winA);
    item->winB=win_copy(winB);
    item->name=strdup(name);
    item->next = (struct picture_queue_t *)(void *)0;
    if(item->winA == ((struct anonymous$12 *)NULL))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = item->winB == (struct anonymous$12 *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = item->name == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
    {
      win_del(item->winA);
      win_del(item->winB);
      free((void *)item->name);
      free((void *)item);
    }

    else
    {
      pthread_mutex_lock(&picture_queue_lock);
      if(picture_queue_head == ((struct picture_queue_t *)NULL))
      {
        picture_queue_tail = item;
        picture_queue_head = picture_queue_tail;
      }

      else
      {
        picture_queue_tail->next = item;
        picture_queue_tail = item;
      }
      pthread_cond_signal(&picture_queue_cond);
      pthread_mutex_unlock(&picture_queue_lock);
    }
  }

}

// ensure_space
// file src/window.c line 341
enum anonymous$10 ensure_space(struct anonymous$14 *line, unsigned long int n)
{
  signed int newsize;
  char *resized;
  _Bool tmp_if_expr$1;
  if(n >= 2147483648ul)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = 0x7fffffff - (signed int)n < line->length ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (enum anonymous$10)td_false;

  else
    if(!(line->length + (signed int)n >= line->allocated))
      return (enum anonymous$10)td_true;

    else
    {
      newsize = line->allocated;
      while((_Bool)1)
      {
        if(newsize >= 1073741824)
          newsize = 0x7fffffff;

        else
          newsize = newsize * 2;
        if(newsize + -line->length >= (signed int)n)
          break;

      }
      void *return_value_realloc$2;
      return_value_realloc$2=realloc((void *)line->data, sizeof(signed int) /*4ul*/  * (unsigned long int)newsize);
      resized = (char *)return_value_realloc$2;
      if(resized == ((char *)NULL))
        return (enum anonymous$10)td_false;

      else
      {
        line->data = resized;
        line->allocated = newsize;
        return (enum anonymous$10)td_true;
      }
    }
}

// expect
// file src/replay.c line 455
static void expect(struct ExpNode *exp)
{
  struct StringListNode *current = exp->un.args;
  signed int todo = current->length;
  char buffer[1024l];
  signed long int result;
  struct timeval start;
  struct timeval now;
  signed int remaining_timeout;
  signed int timeout;
  signed int min_delay;
  if(!(log_file == ((struct _IO_FILE *)NULL)))
  {
    fprintf(log_file, "Expecting client output: \n");
    write_escaped_string(log_file, current->string, (unsigned long int)current->length);
    fprintf(log_file, "\n");
  }

  if(IEEE_FLOAT_NOTEQUAL(key_delay, 0.000000))
  {
    timeout=get_next_delay(exp, &min_delay);
    if(key_delay < (double)timeout || !(timeout >= 0))
      timeout = (signed int)key_delay;

    if(!(timeout >= 10))
      timeout = 10;

  }

  else
  {
    timeout=get_next_delay(exp, &min_delay);
    timeout = timeout / (signed int)key_delay_scale;
    if(!(timeout >= 10))
      timeout = 10;

  }
  if(!(timeout >= min_delay))
    timeout = min_delay;

  remaining_timeout = timeout;
  static enum anonymous$10 first_expect = (enum anonymous$10)td_true;
  if(!(first_expect == /*enum*/td_false))
    remaining_timeout = 1000;

  gettimeofday(&start, (struct timezone *)(void *)0);
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  while(remaining_timeout >= 1 && !(current == ((struct StringListNode *)NULL)))
  {
    signed int return_value_poll$1;
    return_value_poll$1=poll(fdset, (unsigned long int)2, remaining_timeout);
    result = (signed long int)return_value_poll$1;
    if(result == -1l)
    {
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 4))
      {
        return_value___errno_location$2=__errno_location();
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        fatal("Error during poll: %s\n", return_value_strerror$3);
      }

      continue;
    }

    if(!(first_expect == /*enum*/td_false))
    {
      first_expect = (enum anonymous$10)td_false;
      gettimeofday(&start, (struct timezone *)(void *)0);
    }

    handle_signals(exp, "for output");
    if(!(display == /*enum*/td_false))
      copy_attrs_to_terminal(master);

    if(result == 0l)
    {
      unexpected("No output received within timeout\n", (const char *)(void *)0, (unsigned long int)0, exp->line);
      goto __CPROVER_DUMP_L27;
    }

    else
      if(!((0x001 & (signed int)fdset[0l].revents) == 0))
      {
        result=safe_read(master, buffer, (unsigned long int)((signed int)sizeof(char [1024l]) /*1024ul*/  < todo ? (signed int)sizeof(char [1024l]) /*1024ul*/  : todo));
        if(!(result >= 1l))
          continue;

        if(!(display == /*enum*/td_false))
          safe_write(1, (const void *)buffer, (unsigned long int)result);

        signed int return_value_memcmp$5;
        return_value_memcmp$5=memcmp((const void *)buffer, (const void *)((current->string + (signed long int)current->length) - (signed long int)todo), (unsigned long int)result);
        if(return_value_memcmp$5 == 0)
        {
          todo = todo - (signed int)result;
          while(todo == 0 && !(current == ((struct StringListNode *)NULL)))
          {
            current = current->next;
            if(current == ((struct StringListNode *)NULL))
            {
              if(!(exp->next == ((struct ExpNode *)NULL)))
              {
                if((signed int)exp->next->type == EXP_EXPECT)
                {
                  exp = exp->next;
                  current = exp->un.args;
                }

              }

            }

            if(!(current == ((struct StringListNode *)NULL)))
            {
              todo = current->length;
              if(!(log_file == ((struct _IO_FILE *)NULL)))
              {
                fprintf(log_file, "Expecting client output:\n");
                write_escaped_string(log_file, current->string, (unsigned long int)current->length);
                fprintf(log_file, "\n");
              }

            }

          }
        }

        else
          unexpected("Different output received then expected", buffer, (unsigned long int)result, exp->line);
      }

    gettimeofday(&now, (struct timezone *)(void *)0);
    signed int return_value_timevaldiff$6;
    return_value_timevaldiff$6=timevaldiff(start, now);
    remaining_timeout = timeout - return_value_timevaldiff$6;
  }
  if(!(current == ((struct StringListNode *)NULL)))
  {
    if(!(log_file == ((struct _IO_FILE *)NULL)))
    {
      fprintf(log_file, "Remaining expected client output:\n");
      write_escaped_string(log_file, (current->string + (signed long int)current->length) - (signed long int)todo, (unsigned long int)todo);
      fprintf(log_file, "\n");
    }

    unexpected("Differences after timeout", (const char *)(void *)0, (unsigned long int)0, exp->line);
  }

  already_waited=timevaldiff(start, now);

__CPROVER_DUMP_L27:
  ;
}

// expect_signal
// file src/replay.c line 783
static void expect_signal(struct ExpNode *signal_data)
{
  signed long int result;
  if(!(log_file == ((struct _IO_FILE *)NULL)))
    fprintf(log_file, "Waiting for exit\n");

  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  signed long int return_value_safe_read$5;
  signed int return_value_waitpid$6;
  while((_Bool)1)
  {
    signed int return_value_poll$1;
    return_value_poll$1=poll(fdset, (unsigned long int)2, -1);
    result = (signed long int)return_value_poll$1;
    if(result == -1l)
    {
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 4))
      {
        return_value___errno_location$2=__errno_location();
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        fatal("Error during poll: %s\n", return_value_strerror$3);
      }

    }

    if(!((0x001 & (signed int)fdset[1l].revents) == 0))
    {
      char signal_byte;
      do
      {
        return_value_safe_read$5=safe_read(signal_pipe[(signed long int)0], &signal_byte, (unsigned long int)1);
        if(!(return_value_safe_read$5 == 1l))
          break;

        if((signed int)signal_byte == 0)
        {
          return_value_waitpid$6=waitpid(pid, &status, 1 | 2);
          if(return_value_waitpid$6 == pid)
          {
            if((0xff & status) == 0x7f)
            {
              if((signed int)signal_data->type == EXP_EXPECT_EXIT)
                unexpected("Process stopped unexpectedly while waiting for exit", (const char *)(void *)0, (unsigned long int)0, signal_data->line);

              if(!(display == /*enum*/td_false))
              {
                printf("Process has stopped. Will send continue signal in 3 seconds\n");
                sleep((unsigned int)3);
              }

              kill(pid, 18);
              if((signed int)signal_data->type == EXP_EXPECT_SUSPEND)
                goto __CPROVER_DUMP_L18;

            }

            else
              if((signed int)signal_data->type == EXP_EXPECT_EXIT)
                handle_exit(signal_data);

              else
                unexpected_death();
          }

          continue;
        }

      }
      while((_Bool)1);
    }

    if(!(display == /*enum*/td_false))
      copy_attrs_to_terminal(master);

    handle_client_output(signal_data, (signed int)signal_data->type == EXP_EXPECT_EXIT ? "for exit" : "for suspend");
  }

__CPROVER_DUMP_L18:
  ;
}

// fatal
// file src/common.h line 40
void fatal(const char *fmt, ...)
{
  void **args = (void **)&fmt;
  vfprintf(stderr, fmt, args);
  args = ((void **)NULL);
  exit(1);
}

// find_start
// file src/compare.c line 258
static struct ExpNode * find_start(struct ExpNode *script)
{
  _Bool tmp_if_expr$1;
  do
  {
    if(!(script == ((struct ExpNode *)NULL)))
      tmp_if_expr$1 = (signed int)script->type != EXP_START ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(!tmp_if_expr$1)
      break;

    script = script->next;
  }
  while((_Bool)1);
  return script;
}

// free_attr_map
// file src/window.h line 165
void free_attr_map(void)
{
  free((void *)attr_map);
  attr_map = (struct attr_map_t *)(void *)0;
  attr_map_allocated = 0;
  attr_map_fill = 0;
  init_attr_map();
}

// get_attr
// file src/window.c line 400
signed int get_attr(signed int idx)
{
  if(!(attr_map_fill >= idx) || !(idx >= 0))
    return 0;

  else
    return (attr_map + (signed long int)idx)->attr;
}

// get_block_attr
// file src/window.c line 678
static unsigned int get_block_attr(const char *block)
{
  unsigned long int discard;
  block = block + 1l;
  for( ; (0xc0 & (signed int)*block) == 0x80; block = block + 1l)
    ;
  unsigned int return_value_get_value$1;
  return_value_get_value$1=get_value(block, &discard);
  return return_value_get_value$1;
}

// get_elapsed
// file src/common.c line 242
signed int get_elapsed(void)
{
  struct timeval now;
  signed int retval;
  gettimeofday(&now, (struct timezone *)(void *)0);
  retval=timevaldiff(timestamp, now);
  timestamp = now;
  return retval;
}

// get_next_delay
// file src/replay.c line 441
static signed int get_next_delay(struct ExpNode *exp, signed int *min_delay)
{
  *min_delay = 0;
  for( ; !(exp == ((struct ExpNode *)NULL)); exp = exp->next)
    if((signed int)exp->type == EXP_WINDOW_SIZE)
      return exp->un.size.delay;

    else
      if((signed int)exp->type == EXP_SEND)
      {
        if(exp->un.args->min_delay >= 1)
          *min_delay = exp->un.args->min_delay;

        return exp->un.args->delay;
      }

  return -1;
}

// get_param
// file src/write_stringlist.c line 94
static const char * get_param(const char *str, signed int *param, enum anonymous$10 *more)
{
  char *endptr;
  signed long int result;
  result=strtol(str, &endptr, 10);
  _Bool tmp_if_expr$1;
  if((signed int)*endptr == 59)
  {
    endptr = endptr + 1l;
    *more = (enum anonymous$10)td_true;
  }

  else
  {
    if((signed int)*endptr >= 64)
      tmp_if_expr$1 = (signed int)*endptr <= 126 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
    {
      endptr = endptr + 1l;
      *more = (enum anonymous$10)td_false;
    }

    else
      return (const char *)(void *)0;
  }
  if(result >= 2147483648l || !(result >= 0l))
    return (const char *)(void *)0;

  else
  {
    *param = (signed int)result;
    return endptr;
  }
}

// get_script_env
// file src/common.c line 739
const char * get_script_env(const struct ExpNode *script, const char *name)
{
  signed int return_value_strcmp$1;
  for( ; !(script == ((const struct ExpNode *)NULL)); script = script->next)
    if((signed int)script->type == EXP_ENV)
    {
      return_value_strcmp$1=strcmp(script->un.args->string, name);
      if(return_value_strcmp$1 == 0)
        return script->un.args->next->string;

    }

  return (const char *)(void *)0;
}

// get_ti_bool
// file src/curses_handling.c line 38
signed int get_ti_bool(const char *name)
{
  signed int return_value_tigetflag$1;
  return_value_tigetflag$1=tigetflag(name);
  return return_value_tigetflag$1;
}

// get_ti_string
// file src/curses_handling.c line 30
char * get_ti_string(const char *name)
{
  char *result;
  result=tigetstr(name);
  if(result == ((char *)NULL) || result == (char *)-1)
    return (char *)(void *)0;

  else
  {
    char *return_value_strdup$1;
    return_value_strdup$1=strdup(result);
    return return_value_strdup$1;
  }
}

// get_value
// file src/window.c line 441
unsigned int get_value(const char *src, unsigned long int *size)
{
  signed int bytes_left;
  unsigned int retval;
  switch((signed int)(unsigned char)src[(signed long int)0])
  {
    case 0:

    case 1:

    case 2:

    case 3:

    case 4:

    case 5:

    case 6:

    case 7:

    case 8:

    case 9:

    case 10:

    case 11:

    case 12:

    case 13:

    case 14:

    case 15:

    case 16:

    case 17:

    case 18:

    case 19:

    case 20:

    case 21:

    case 22:

    case 23:

    case 24:

    case 25:

    case 26:

    case 27:

    case 28:

    case 29:

    case 30:

    case 31:

    case 32:

    case 33:

    case 34:

    case 35:

    case 36:

    case 37:

    case 38:

    case 39:

    case 40:

    case 41:

    case 42:

    case 43:

    case 44:

    case 45:

    case 46:

    case 47:

    case 48:

    case 49:

    case 50:

    case 51:

    case 52:

    case 53:

    case 54:

    case 55:

    case 56:

    case 57:

    case 58:

    case 59:

    case 60:

    case 61:

    case 62:

    case 63:

    case 64:

    case 65:

    case 66:

    case 67:

    case 68:

    case 69:

    case 70:

    case 71:

    case 72:

    case 73:

    case 74:

    case 75:

    case 76:

    case 77:

    case 78:

    case 79:

    case 80:

    case 81:

    case 82:

    case 83:

    case 84:

    case 85:

    case 86:

    case 87:

    case 88:

    case 89:

    case 90:

    case 91:

    case 92:

    case 93:

    case 94:

    case 95:

    case 96:

    case 97:

    case 98:

    case 99:

    case 100:

    case 101:

    case 102:

    case 103:

    case 104:

    case 105:

    case 106:

    case 107:

    case 108:

    case 109:

    case 110:

    case 111:

    case 112:

    case 113:

    case 114:

    case 115:

    case 116:

    case 117:

    case 118:

    case 119:

    case 120:

    case 121:

    case 122:

    case 123:

    case 124:

    case 125:

    case 126:

    case 127:
    {
      *size = (unsigned long int)1;
      return (unsigned int)src[(signed long int)0];
    }
    case 194:

    case 195:

    case 196:

    case 197:

    case 198:

    case 199:

    case 200:

    case 201:

    case 202:

    case 203:

    case 204:

    case 205:

    case 206:

    case 207:

    case 208:

    case 209:

    case 210:

    case 211:

    case 212:

    case 213:

    case 214:

    case 215:

    case 216:

    case 217:

    case 218:

    case 219:

    case 220:

    case 221:

    case 222:

    case 223:
    {
      bytes_left = 1;
      retval = (unsigned int)((signed int)src[(signed long int)0] & 0x1F);
      break;
    }
    case 224:

    case 225:

    case 226:

    case 227:

    case 228:

    case 229:

    case 230:

    case 231:

    case 232:

    case 233:

    case 234:

    case 235:

    case 236:

    case 237:

    case 238:

    case 239:
    {
      bytes_left = 2;
      retval = (unsigned int)((signed int)src[(signed long int)0] & 0x0F);
      break;
    }
    case 240:

    case 241:

    case 242:

    case 243:

    case 244:

    case 245:

    case 246:

    case 247:
    {
      bytes_left = 3;
      retval = (unsigned int)((signed int)src[(signed long int)0] & 0x07);
      break;
    }
    case 248:

    case 249:

    case 250:

    case 251:
    {
      bytes_left = 4;
      retval = (unsigned int)((signed int)src[(signed long int)0] & 0x03);
      break;
    }
    case 252:

    case 253:
    {
      bytes_left = 5;
      retval = (unsigned int)((signed int)src[(signed long int)1] & 1);
      break;
    }
    default:
      return (unsigned int)0;
  }
  *size = (unsigned long int)(bytes_left + 1);
  src = src + 1l;
  const char *tmp_post$1;
  for( ; bytes_left >= 1; bytes_left = bytes_left - 1)
  {
    tmp_post$1 = src;
    src = src + 1l;
    retval = retval << 6 | (unsigned int)((signed int)tmp_post$1[(signed long int)0] & 0x3f);
  }
  return retval;
}

// getcwd_wrapper
// file src/common.c line 521
char * getcwd_wrapper(void)
{
  unsigned long int cwdBufferLength = (unsigned long int)1024;
  char *cwdBuffer;
  char *retval;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(cwdBufferLength);
  cwdBuffer = (char *)return_value_malloc$2;
  char *return_value_strdup$1;
  signed int *return_value___errno_location$6;
  char *newCwdBuffer;
  void *return_value_realloc$4;
  if(cwdBuffer == ((char *)NULL))
  {
    return_value_strdup$1=strdup("<memory allocation error on retrieving current working directory>");
    return return_value_strdup$1;
  }

  else
  {
    do
    {

    repeat_getcwd:
      ;
      retval=getcwd(cwdBuffer, cwdBufferLength);
      if(!(retval == ((char *)NULL)))
        return retval;

      return_value___errno_location$6=__errno_location();
      if(!(*return_value___errno_location$6 == 34))
        break;

      if(!(cwdBufferLength >= 9223372036854775807ul))
      {
        free((void *)cwdBuffer);
        char *return_value_strdup$3;
        return_value_strdup$3=strdup("<memory allocation error on retrieving current working directory>");
        return return_value_strdup$3;
      }

      cwdBufferLength = cwdBufferLength << 1;
      return_value_realloc$4=realloc((void *)cwdBuffer, cwdBufferLength);
      newCwdBuffer = (char *)return_value_realloc$4;
      if(newCwdBuffer == ((char *)NULL))
      {
        free((void *)cwdBuffer);
        char *return_value_strdup$5;
        return_value_strdup$5=strdup("<memory allocation error on retrieving current working directory>");
        return return_value_strdup$5;
      }

    }
    while((_Bool)1);
    free((void *)cwdBuffer);
    char *return_value_strdup$7;
    return_value_strdup$7=strdup("<error on retrieving current working directory>");
    return return_value_strdup$7;
  }
}

// handle_client_output
// file src/replay.c line 362
static void handle_client_output(struct ExpNode *exp, const char *activity)
{
  if(!((0x001 & (signed int)fdset[0l].revents) == 0))
  {
    char buffer[1024l];
    signed long int result;
    result=safe_read(master, buffer, sizeof(char [1024l]) /*1024ul*/ );
    if(result >= 1l)
    {
      if(!(display == /*enum*/td_false))
        safe_write(1, (const void *)buffer, (unsigned long int)result);

      unexpected("Received unexpected output while waiting %s", buffer, (unsigned long int)result, exp->line, activity);
    }

  }

}

// handle_escape
// file src/write_stringlist.c line 175
static signed int handle_escape(char *str, signed int len, struct anonymous$12 *win)
{
  signed int i;
  signed int return_value_memcmp$1;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  const char *return_value_get_param$5;
  signed int return_value_win_get_paint_y$6;
  signed int return_value_win_get_paint_x$7;
  const char *return_value_get_param$8;
  signed int return_value_win_get_paint_y$9;
  signed int return_value_win_get_paint_x$10;
  const char *return_value_get_param$11;
  signed int return_value_win_get_paint_y$12;
  signed int return_value_win_get_paint_x$13;
  const char *return_value_get_param$14;
  signed int return_value_win_get_paint_y$15;
  signed int return_value_win_get_paint_x$16;
  const char *return_value_get_param$17;
  signed int return_value_win_get_paint_y$18;
  const char *return_value_get_param$19;
  signed int return_value_win_get_paint_y$20;
  _Bool tmp_if_expr$22;
  const char *return_value_get_param$21;
  signed int return_value_win_get_paint_y$23;
  const char *new_str;
  signed int param2;
  enum anonymous$10 return_value_win_get_cup$24;
  _Bool tmp_if_expr$26;
  const char *return_value_get_param$25;
  const char *return_value_get_param$27;
  const char *return_value_get_param$28;
  const char *return_value_get_param$29;
  _Bool tmp_if_expr$31;
  const char *return_value_get_param$30;
  signed int return_value_win_get_paint_x$32;
  const char *return_value_get_param$33;
  _Bool tmp_if_expr$50;
  const char *return_value_get_param$49;
  signed int return_value_win_get_default_attrs$51;
  _Bool tmp_if_expr$56;
  const char *return_value_get_param$55;
  signed int return_value_win_get_default_attrs$57;
  if(len == 0)
    return 0;

  else
  {
    i = 0;
    for( ; !(i >= 31); i = i + 1)
    {
      unsigned long int ti_len;
      if(!(terminfo_mappings[(signed long int)i].str == ((char *)NULL)))
      {
        if((signed int)*terminfo_mappings[(signed long int)i].str == 27)
        {
          ti_len=strlen(terminfo_mappings[(signed long int)i].str + (signed long int)1);
          if((unsigned long int)len >= ti_len)
          {
            return_value_memcmp$1=memcmp((const void *)(terminfo_mappings[(signed long int)i].str + (signed long int)1), (const void *)str, ti_len);
            if(return_value_memcmp$1 == 0)
            {
              do_action(win, terminfo_mappings[(signed long int)i].action, terminfo_mappings[(signed long int)i].attr);
              return (signed int)ti_len;
            }

          }

        }

      }

    }
    if((signed int)*str == 91)
    {
      signed int param = 1;
      enum anonymous$10 more;
      i = 1;
      do
      {
        if(!(i >= len))
        {
          if(!((signed int)str[(signed long int)i] >= 64))
            tmp_if_expr$2 = (_Bool)1;

          else
            tmp_if_expr$2 = (signed int)str[(signed long int)i] > 126 ? (_Bool)1 : (_Bool)0;
          tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$3 = (_Bool)0;
        if(tmp_if_expr$3)
          tmp_if_expr$4 = (signed int)str[(signed long int)i] != 27 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(!tmp_if_expr$4)
          break;

        i = i + 1;
      }
      while((_Bool)1);
      if(i == len)
        return 0;

      switch((signed int)str[(signed long int)i])
      {
        case 65:
        {
          return_value_get_param$5=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$5 == ((const char *)NULL) || more != /*enum*/td_false)
            break;

          return_value_win_get_paint_y$6=win_get_paint_y(win);
          return_value_win_get_paint_x$7=win_get_paint_x(win);
          win_set_paint(win, return_value_win_get_paint_y$6 - param, return_value_win_get_paint_x$7);
          break;
        }
        case 66:
        {
          return_value_get_param$8=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$8 == ((const char *)NULL) || !(more == /*enum*/td_false))
            break;

          return_value_win_get_paint_y$9=win_get_paint_y(win);
          return_value_win_get_paint_x$10=win_get_paint_x(win);
          win_set_paint(win, return_value_win_get_paint_y$9 + param, return_value_win_get_paint_x$10);
          break;
        }
        case 67:
        {
          return_value_get_param$11=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$11 == ((const char *)NULL) || !(more == /*enum*/td_false))
            break;

          return_value_win_get_paint_y$12=win_get_paint_y(win);
          return_value_win_get_paint_x$13=win_get_paint_x(win);
          win_set_paint(win, return_value_win_get_paint_y$12, return_value_win_get_paint_x$13 + param);
          break;
        }
        case 68:
        {
          return_value_get_param$14=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$14 == ((const char *)NULL) || !(more == /*enum*/td_false))
            break;

          return_value_win_get_paint_y$15=win_get_paint_y(win);
          return_value_win_get_paint_x$16=win_get_paint_x(win);
          win_set_paint(win, return_value_win_get_paint_y$15, return_value_win_get_paint_x$16 - param);
          break;
        }
        case 69:
        {
          return_value_get_param$17=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$17 == ((const char *)NULL) || !(more == /*enum*/td_false))
            break;

          return_value_win_get_paint_y$18=win_get_paint_y(win);
          win_set_paint(win, return_value_win_get_paint_y$18 + param, 0);
          break;
        }
        case 70:
        {
          return_value_get_param$19=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$19 == ((const char *)NULL) || !(more == /*enum*/td_false))
            break;

          return_value_win_get_paint_y$20=win_get_paint_y(win);
          win_set_paint(win, return_value_win_get_paint_y$20 - param, 0);
          break;
        }
        case 71:
        {
          if(i == 2)
            tmp_if_expr$22 = (_Bool)1;

          else
          {
            return_value_get_param$21=get_param(str + (signed long int)1, &param, &more);
            tmp_if_expr$22 = return_value_get_param$21 == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
          }
          if(!(more == /*enum*/td_false) || tmp_if_expr$22)
            break;

          return_value_win_get_paint_y$23=win_get_paint_y(win);
          win_set_paint(win, return_value_win_get_paint_y$23, param - 1);
          break;
        }
        case 102:

        case 72:
        {
          return_value_win_get_cup$24=win_get_cup(win);
          if(return_value_win_get_cup$24 == /*enum*/td_false)
            break;

          new_str=get_param(str + (signed long int)1, &param, &more);
          if(more == /*enum*/td_false || new_str == ((const char *)NULL))
            tmp_if_expr$26 = (_Bool)1;

          else
          {
            return_value_get_param$25=get_param(new_str, &param2, &more);
            tmp_if_expr$26 = return_value_get_param$25 == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
          }
          if(!(more == /*enum*/td_false) || tmp_if_expr$26)
            break;

          win_set_paint(win, param - 1, param2 - 1);
          break;
        }
        case 74:
        {
          if(param == 0)
            win_clrtobot(win);

          else
            if(param == 1)
              win_clrtotop(win);

            else
              if(param == 2)
              {
                win_clrtobot(win);
                win_clrtotop(win);
              }

          break;
        }
        case 75:
        {
          param = 0;
          return_value_get_param$27=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$27 == ((const char *)NULL) || !(more == /*enum*/td_false))
            break;

          if(param == 0)
            win_clrtoeol(win);

          else
            if(param == 1)
              win_clrtobol(win);

            else
              if(param == 2)
              {
                win_clrtoeol(win);
                win_clrtobol(win);
              }

          break;
        }
        case 83:
        {
          return_value_get_param$28=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$28 == ((const char *)NULL) || !(more == /*enum*/td_false))
            break;

          for( ; param >= 1; param = param - 1)
            win_scroll(win);
          break;
        }
        case 84:
        {
          return_value_get_param$29=get_param(str + (signed long int)1, &param, &more);
          if(return_value_get_param$29 == ((const char *)NULL) || more != /*enum*/td_false)
            break;

          for( ; param >= 1; param = param - 1)
            win_scroll_back(win);
          break;
        }
        case 100:
        {
          if(i == 2)
            tmp_if_expr$31 = (_Bool)1;

          else
          {
            return_value_get_param$30=get_param(str + (signed long int)1, &param, &more);
            tmp_if_expr$31 = return_value_get_param$30 == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
          }
          if(more != /*enum*/td_false || tmp_if_expr$31)
            break;

          return_value_win_get_paint_x$32=win_get_paint_x(win);
          win_set_paint(win, param - 1, return_value_win_get_paint_x$32);
          break;
        }
        case 109:
        {
          param = 0;
          str = str + 1l;
          do
          {
            return_value_get_param$33=get_param(str, &param, &more);
            str = (char *)return_value_get_param$33;
            if(str == ((char *)NULL))
              break;

            if(param == 0)
            {
              signed int return_value_win_get_default_attrs$34;
              return_value_win_get_default_attrs$34=win_get_default_attrs(win);
              win_set_default_attrs(win, return_value_win_get_default_attrs$34 & (signed int)(1L << 6));
            }

            else
              if(param == 1)
              {
                signed int return_value_win_get_default_attrs$35;
                return_value_win_get_default_attrs$35=win_get_default_attrs(win);
                win_set_default_attrs(win, return_value_win_get_default_attrs$35 | (signed int)(1L << 2));
              }

              else
                if(param == 2)
                {
                  signed int return_value_win_get_default_attrs$36;
                  return_value_win_get_default_attrs$36=win_get_default_attrs(win);
                  win_set_default_attrs(win, return_value_win_get_default_attrs$36 | (signed int)(1L << 5));
                }

                else
                  if(param == 4)
                  {
                    signed int return_value_win_get_default_attrs$37;
                    return_value_win_get_default_attrs$37=win_get_default_attrs(win);
                    win_set_default_attrs(win, return_value_win_get_default_attrs$37 | (signed int)(1L << 1));
                  }

                  else
                    if(param == 5)
                    {
                      signed int return_value_win_get_default_attrs$38;
                      return_value_win_get_default_attrs$38=win_get_default_attrs(win);
                      win_set_default_attrs(win, return_value_win_get_default_attrs$38 | (signed int)(1L << 4));
                    }

                    else
                      if(param == 7)
                      {
                        signed int return_value_win_get_default_attrs$39;
                        return_value_win_get_default_attrs$39=win_get_default_attrs(win);
                        win_set_default_attrs(win, return_value_win_get_default_attrs$39 | (signed int)(1L << 3));
                      }

                      else
                        if(param == 8)
                        {
                          signed int return_value_win_get_default_attrs$40;
                          return_value_win_get_default_attrs$40=win_get_default_attrs(win);
                          win_set_default_attrs(win, return_value_win_get_default_attrs$40 | (signed int)(1L << 0));
                        }

                        else
                          if(param == 21)
                          {
                            signed int return_value_win_get_default_attrs$41;
                            return_value_win_get_default_attrs$41=win_get_default_attrs(win);
                            win_set_default_attrs(win, return_value_win_get_default_attrs$41 & ~((signed int)(1L << 2)));
                          }

                          else
                            if(param == 22)
                            {
                              signed int return_value_win_get_default_attrs$42;
                              return_value_win_get_default_attrs$42=win_get_default_attrs(win);
                              win_set_default_attrs(win, return_value_win_get_default_attrs$42 & ~((signed int)(1L << 2) | (signed int)(1L << 5)));
                            }

                            else
                              if(param == 24)
                              {
                                signed int return_value_win_get_default_attrs$43;
                                return_value_win_get_default_attrs$43=win_get_default_attrs(win);
                                win_set_default_attrs(win, return_value_win_get_default_attrs$43 & ~((signed int)(1L << 1)));
                              }

                              else
                                if(param == 25)
                                {
                                  signed int return_value_win_get_default_attrs$44;
                                  return_value_win_get_default_attrs$44=win_get_default_attrs(win);
                                  win_set_default_attrs(win, return_value_win_get_default_attrs$44 & ~((signed int)(1L << 4)));
                                }

                                else
                                  if(param == 27)
                                  {
                                    signed int return_value_win_get_default_attrs$45;
                                    return_value_win_get_default_attrs$45=win_get_default_attrs(win);
                                    win_set_default_attrs(win, return_value_win_get_default_attrs$45 & ~((signed int)(1L << 3)));
                                  }

                                  else
                                    if(param == 28)
                                    {
                                      signed int return_value_win_get_default_attrs$46;
                                      return_value_win_get_default_attrs$46=win_get_default_attrs(win);
                                      win_set_default_attrs(win, return_value_win_get_default_attrs$46 & ~((signed int)(1L << 0)));
                                    }

                                    else
                                      if(param >= 30 && !(param >= 38))
                                      {
                                        signed int return_value_win_get_default_attrs$47;
                                        return_value_win_get_default_attrs$47=win_get_default_attrs(win);
                                        win_set_default_attrs(win, return_value_win_get_default_attrs$47 & ~(0x1ff << 8) | ((signed int)(param - 30) & 0xff) + 1 << 8);
                                      }

                                      else
                                        if(param == 38)
                                        {
                                          const char *return_value_get_param$48;
                                          return_value_get_param$48=get_param(str, &param, &more);
                                          str = (char *)return_value_get_param$48;
                                          if(str == ((char *)NULL))
                                            break;

                                          if(param == 5)
                                          {
                                            if(more == /*enum*/td_false)
                                              tmp_if_expr$50 = (_Bool)1;

                                            else
                                            {
                                              return_value_get_param$49=get_param(str, &param, &more);
                                              str = (char *)return_value_get_param$49;
                                              tmp_if_expr$50 = str == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
                                            }
                                            if(tmp_if_expr$50)
                                              break;

                                            if(!(param >= 256))
                                            {
                                              return_value_win_get_default_attrs$51=win_get_default_attrs(win);
                                              win_set_default_attrs(win, return_value_win_get_default_attrs$51 & ~(0x1ff << 8) | ((signed int)param & 0xff) + 1 << 8);
                                            }

                                          }

                                        }

                                        else
                                          if(param == 39)
                                          {
                                            signed int return_value_win_get_default_attrs$52;
                                            return_value_win_get_default_attrs$52=win_get_default_attrs(win);
                                            win_set_default_attrs(win, return_value_win_get_default_attrs$52 & ~(0x1ff << 8));
                                          }

                                          else
                                            if(param >= 40 && !(param >= 48))
                                            {
                                              signed int return_value_win_get_default_attrs$53;
                                              return_value_win_get_default_attrs$53=win_get_default_attrs(win);
                                              win_set_default_attrs(win, return_value_win_get_default_attrs$53 & ~(0x1ff << 8 + 9) | ((signed int)(param - 40) & 0xff) + 1 << 8 + 9);
                                            }

                                            else
                                              if(param == 48)
                                              {
                                                const char *return_value_get_param$54;
                                                return_value_get_param$54=get_param(str, &param, &more);
                                                str = (char *)return_value_get_param$54;
                                                if(str == ((char *)NULL))
                                                  break;

                                                if(param == 5)
                                                {
                                                  if(more == /*enum*/td_false)
                                                    tmp_if_expr$56 = (_Bool)1;

                                                  else
                                                  {
                                                    return_value_get_param$55=get_param(str, &param, &more);
                                                    str = (char *)return_value_get_param$55;
                                                    tmp_if_expr$56 = str == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
                                                  }
                                                  if(tmp_if_expr$56)
                                                    break;

                                                  if(!(param >= 256))
                                                  {
                                                    return_value_win_get_default_attrs$57=win_get_default_attrs(win);
                                                    win_set_default_attrs(win, return_value_win_get_default_attrs$57 & ~(0x1ff << 8 + 9) | ((signed int)param & 0xff) + 1 << 8 + 9);
                                                  }

                                                }

                                              }

                                              else
                                                if(param == 49)
                                                {
                                                  signed int return_value_win_get_default_attrs$58;
                                                  return_value_win_get_default_attrs$58=win_get_default_attrs(win);
                                                  win_set_default_attrs(win, return_value_win_get_default_attrs$58 & ~(0x1ff << 8 + 9));
                                                }

            param = 0;
            if(more == /*enum*/td_false)
              break;

          }
          while((_Bool)1);
          break;
        }
        case 110:
          break;
        default:
          ;
      }
      return i + 1;
    }

    else
      if((signed int)*str == 93)
      {
        i = 1;
        for( ; !(i >= len); i = i + 1)
        {
          if((signed int)str[(signed long int)i] == 7)
            return i + 1;

          if((signed int)str[(signed long int)i] == 27)
          {
            if(!(1 + i >= len))
            {
              if((signed int)str[(signed long int)i] == 92)
                return i + 2;

            }

          }

        }
        return 0;
      }

    return 0;
  }
}

// handle_exit
// file src/replay.c line 769
static void handle_exit(struct ExpNode *exit_data)
{
  if(!((0xff00 & status) >> 8 == exit_data->un.number))
  {
    if(!(alert == ((char *)NULL)))
      do
      {
        signed int _ignore;
        _ignore=system(alert);
        (void)_ignore;
      }
      while((_Bool)0);

    /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous$8
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
    ;
    if(!(log_file == ((struct _IO_FILE *)NULL)))
      fprintf(log_file, "!! Program ended with different status: %d iso %d\n", (((union anonymous$8){ .__in=status }).__i & 0xff00) >> 8, exit_data->un.number);

    exit(1);
  }

  if(!(log_file == ((struct _IO_FILE *)NULL)))
    fprintf(log_file, "Program ended with expected status: %d\n", exit_data->un.number);

  exit(0);
}

// handle_signals
// file src/replay.c line 341
static void handle_signals(struct ExpNode *exp, const char *activity)
{
  signed long int return_value_safe_read$1;
  signed int return_value_waitpid$2;
  if(!((0x001 & (signed int)fdset[1l].revents) == 0))
  {
    char signal_byte;
    do
    {
      return_value_safe_read$1=safe_read(signal_pipe[(signed long int)0], &signal_byte, (unsigned long int)1);
      if(!(return_value_safe_read$1 == 1l))
        break;

      if((signed int)signal_byte == 0)
      {
        return_value_waitpid$2=waitpid(pid, &status, 1 | 2);
        if(return_value_waitpid$2 == pid)
        {
          unexpected("Process stopped unexpectedly while waiting %s", (const char *)(void *)0, (unsigned long int)0, exp->line, activity);
          if((0xff & status) == 0x7f)
          {
            if(!(display == /*enum*/td_false))
            {
              printf("Process has stopped. Will send continue signal in 3 seconds\n");
              sleep((unsigned int)3);
            }

            kill(pid, 18);
          }

          else
            unexpected_death();
        }

        continue;
      }

    }
    while((_Bool)1);
  }

}

// init_attr_map
// file src/window.h line 164
void init_attr_map(void)
{
  signed int i = 0;
  for( ; !(i >= 337); i = i + 1)
    attr_hash_map[(signed long int)i] = -1;
}

// init_timestamp
// file src/common.c line 240
void init_timestamp(void)
{
  gettimeofday(&timestamp, (struct timezone *)(void *)0);
}

// install_signal_handler
// file src/common.c line 187
void install_signal_handler(signed int sig, void (*handler)(signed int), const char *descr)
{
  struct sigaction sa;
  struct anonymous$2 sigs;
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  static enum anonymous$10 pipe_initialised = (enum anonymous$10)td_false;
  if(pipe_initialised == /*enum*/td_false)
  {
    signed int return_value_pipe$3;
    return_value_pipe$3=pipe(signal_pipe);
    if(!(return_value_pipe$3 >= 0))
    {
      return_value___errno_location$1=__errno_location();
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      fatal("Could not open pipe: %s\n", return_value_strerror$2);
    }

    pipe_initialised = (enum anonymous$10)td_true;
  }

  sa.__sigaction_handler.sa_handler = handler;
  sigemptyset(&sa.sa_mask);
  sa.sa_flags = 0;
  signed int return_value_sigaction$6;
  return_value_sigaction$6=sigaction(sig, &sa, (struct sigaction *)(void *)0);
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  if(!(return_value_sigaction$6 >= 0))
  {
    return_value___errno_location$4=__errno_location();
    return_value_strerror$5=strerror(*return_value___errno_location$4);
    fatal("Could not set signal handler for %s: %s\n", descr, return_value_strerror$5);
  }

  sigemptyset(&sigs);
  sigaddset(&sigs, sig);
  signed int return_value_sigprocmask$9;
  return_value_sigprocmask$9=sigprocmask(1, &sigs, (struct anonymous$2 *)(void *)0);
  signed int *return_value___errno_location$7;
  char *return_value_strerror$8;
  if(!(return_value_sigprocmask$9 >= 0))
  {
    return_value___errno_location$7=__errno_location();
    return_value_strerror$8=strerror(*return_value___errno_location$7);
    fatal("Could not block %s: %s\n", descr, return_value_strerror$8);
  }

}

// interact
// file src/replay.c line 829
static void interact(void)
{
  copy_attrs_to_terminal(master);
  interact_loop(master, pid, (struct _IO_FILE *)(void *)0, -1);
  exit(0);
}

// interact_loop
// file src/common.c line 340
signed int interact_loop(signed int master, signed int pid, struct _IO_FILE *output, signed int timeout)
{
  struct pollfd interact_loop$$1$$fdset[3l];
  struct winsize wsz;
  signed int interact_loop$$1$$status;
  signed int remaining_timeout = timeout;
  struct timeval start;
  interact_loop$$1$$fdset[(signed long int)0].fd = 0;
  interact_loop$$1$$fdset[(signed long int)0].events = (signed short int)0x001;
  interact_loop$$1$$fdset[(signed long int)1].fd = master;
  interact_loop$$1$$fdset[(signed long int)1].events = (signed short int)0x001;
  interact_loop$$1$$fdset[(signed long int)2].fd = signal_pipe[(signed long int)0];
  interact_loop$$1$$fdset[(signed long int)2].events = (signed short int)0x001;
  copy_attrs_to_terminal(0);
  if(timeout >= 0)
    gettimeofday(&start, (struct timezone *)(void *)0);

  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  signed long int return_value_safe_read$4;
  signed int return_value_waitpid$5;
  signed int return_value_ioctl$8;
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  signed int return_value_ioctl$12;
  signed int *return_value___errno_location$10;
  char *return_value_strerror$11;
  while((_Bool)1)
  {
    signed int result;
    result=poll(interact_loop$$1$$fdset, (unsigned long int)3, remaining_timeout);
    if(result == -1)
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      if(!(*return_value___errno_location$3 == 4))
      {
        return_value___errno_location$1=__errno_location();
        return_value_strerror$2=strerror(*return_value___errno_location$1);
        fatal("Error during poll: %s\n", return_value_strerror$2);
      }

    }

    if(result == 0)
      return -1;

    copy_attrs_to_terminal(master);
    if(!((0x001 & (signed int)interact_loop$$1$$fdset[1l].revents) == 0))
      copy_fd(master, 1, (enum anonymous$3)TYPE_OUTPUT, output);

    copy_attrs_to_terminal(master);
    if(!((0x001 & (signed int)interact_loop$$1$$fdset[0l].revents) == 0))
      copy_fd(0, master, (enum anonymous$3)TYPE_INPUT, output);

    if(!((0x001 & (signed int)interact_loop$$1$$fdset[2l].revents) == 0))
    {
      char signal_byte;
      do
      {
        return_value_safe_read$4=safe_read(signal_pipe[(signed long int)0], &signal_byte, (unsigned long int)1);
        if(!(return_value_safe_read$4 == 1l))
          break;

        switch((signed int)signal_byte)
        {
          case 0:
          {
            return_value_waitpid$5=waitpid(pid, &interact_loop$$1$$status, 1 | 2);
            if(return_value_waitpid$5 == pid)
            {
              if((0xff & interact_loop$$1$$status) == 0x7f)
              {
                if(!(output == ((struct _IO_FILE *)NULL)))
                {
                  if((signed int)last_type == TYPE_OUTPUT)
                    fputs("\"\n", output);

                  fprintf(output, "expect_suspend\n");
                  last_type = (enum anonymous$3)TYPE_NONE;
                }

                printf("Process has stopped. Will send continue signal in 3 seconds\n");
                sleep((unsigned int)3);
                kill(pid, 18);
                if(timeout >= 0)
                  timeout = timeout + 3000;

              }

              else
                goto end;
            }

            break;
          }
          case 1:
          {
            return_value_ioctl$8=ioctl(0, (unsigned long int)0x5413, &wsz);
            if(!(return_value_ioctl$8 >= 0))
            {
              return_value___errno_location$6=__errno_location();
              return_value_strerror$7=strerror(*return_value___errno_location$6);
              fatal("Error obtaining window size: %s\n", return_value_strerror$7);
            }

            if(!(output == ((struct _IO_FILE *)NULL)))
            {
              if((signed int)last_type == TYPE_OUTPUT)
                fputs("\"\n", output);

              signed int return_value_get_elapsed$9;
              return_value_get_elapsed$9=get_elapsed();
              fprintf(output, "window_size %d %d %d\n", wsz.ws_col, wsz.ws_row, return_value_get_elapsed$9);
              last_type = (enum anonymous$3)TYPE_NONE;
            }

            return_value_ioctl$12=ioctl(master, (unsigned long int)0x5414, &wsz);
            if(!(return_value_ioctl$12 >= 0))
            {
              return_value___errno_location$10=__errno_location();
              return_value_strerror$11=strerror(*return_value___errno_location$10);
              fatal("Error setting window size: %s\n", return_value_strerror$11);
            }

            break;
          }
          default:
            ;
        }
      }
      while((_Bool)1);
    }

    if(timeout >= 0)
    {
      struct timeval now;
      gettimeofday(&now, (struct timezone *)(void *)0);
      signed int return_value_timevaldiff$13;
      return_value_timevaldiff$13=timevaldiff(start, now);
      remaining_timeout = timeout - return_value_timevaldiff$13;
      if(!(remaining_timeout >= 1))
        return -1;

    }

  }

end:
  ;
  copy_attrs_to_terminal(master);
  copy_fd(master, 1, (enum anonymous$3)TYPE_OUTPUT, output);
  if(!(output == ((struct _IO_FILE *)NULL)))
  {
    if((signed int)last_type == TYPE_OUTPUT)
      fputs("\"\n", output);

    /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous$8
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
    ;
    fprintf(output, "expect_exit %d\n", (((union anonymous$8){ .__in=interact_loop$$1$$status }).__i & 0xff00) >> 8);
  }

  return interact_loop$$1$$status;
}

// join_picture_thread
// file src/picture_queue.c line 93
static void join_picture_thread(void)
{
  void *retval;
  pthread_mutex_lock(&picture_queue_lock);
  finished = (enum anonymous$10)td_true;
  pthread_cond_signal(&picture_queue_cond);
  pthread_mutex_unlock(&picture_queue_lock);
  pthread_join(picture_thread, &retval);
}

// main
// file src/common.c line 781
signed int main(signed int argc, char **argv)
{
  char *name;
  name=__xpg_basename(argv[(signed long int)0]);
  signed int return_value_strcmp$2;
  return_value_strcmp$2=strcmp(name, "tdrecord");
  signed int return_value_tdrecord_main$1;
  signed int return_value_tdreplay_main$3;
  signed int return_value_tdrerecord_main$5;
  signed int return_value_tdview_main$7;
  signed int return_value_tdcompare_main$9;
  if(return_value_strcmp$2 == 0)
  {
    return_value_tdrecord_main$1=tdrecord_main(argc, argv);
    return return_value_tdrecord_main$1;
  }

  else
  {
    signed int return_value_strcmp$4;
    return_value_strcmp$4=strcmp(name, "tdreplay");
    if(return_value_strcmp$4 == 0)
    {
      return_value_tdreplay_main$3=tdreplay_main(argc, argv);
      return return_value_tdreplay_main$3;
    }

    else
    {
      signed int return_value_strcmp$6;
      return_value_strcmp$6=strcmp(name, "tdrerecord");
      if(return_value_strcmp$6 == 0)
      {
        return_value_tdrerecord_main$5=tdrerecord_main(argc, argv);
        return return_value_tdrerecord_main$5;
      }

      else
      {
        signed int return_value_strcmp$8;
        return_value_strcmp$8=strcmp(name, "tdview");
        if(return_value_strcmp$8 == 0)
        {
          return_value_tdview_main$7=tdview_main(argc, argv);
          return return_value_tdview_main$7;
        }

        else
        {
          signed int return_value_strcmp$10;
          return_value_strcmp$10=strcmp(name, "tdcompare");
          if(return_value_strcmp$10 == 0)
          {
            return_value_tdcompare_main$9=tdcompare_main(argc, argv);
            return return_value_tdcompare_main$9;
          }

          else
          {
            fprintf(stderr, "Please use the tdrecord, tdreplay, tdrerecord, tdview, tdcompare symlinks instead of running this executable\n");
            return 0;
          }
        }
      }
    }
  }
}

// map_attr
// file src/window.c line 372
signed int map_attr(signed int attr)
{
  signed int ptr = attr_hash_map[(signed long int)(attr % 337)];
  _Bool tmp_if_expr$1;
  do
  {
    if(!(ptr == -1))
      tmp_if_expr$1 = (attr_map + (signed long int)ptr)->attr != attr ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(!tmp_if_expr$1)
      break;

    ptr = (attr_map + (signed long int)ptr)->next;
  }
  while((_Bool)1);
  signed int tmp_post$3;
  if(!(ptr == -1))
    return ptr;

  else
  {
    if(attr_map_fill >= attr_map_allocated)
    {
      signed int new_allocation = attr_map_allocated == 0 ? 32 : attr_map_allocated * 2;
      struct attr_map_t *new_map;
      void *return_value_realloc$2;
      return_value_realloc$2=realloc((void *)attr_map, (unsigned long int)new_allocation * sizeof(struct attr_map_t) /*8ul*/ );
      new_map = (struct attr_map_t *)return_value_realloc$2;
      if(new_map == ((struct attr_map_t *)NULL))
        fatal("Out of memory\n");

      attr_map = new_map;
      attr_map_allocated = new_allocation;
    }

    (attr_map + (signed long int)attr_map_fill)->attr = attr;
    (attr_map + (signed long int)attr_map_fill)->next = attr_hash_map[(signed long int)(attr % 337)];
    attr_hash_map[(signed long int)(attr % 337)] = attr_map_fill;
    tmp_post$3 = attr_map_fill;
    attr_map_fill = attr_map_fill + 1;
    return tmp_post$3;
  }
}

// open_output
// file src/common.c line 151
struct _IO_FILE * open_output(char **name, const char *directory)
{
  struct _IO_FILE *retval;
  unsigned int oldUmask;
  if(*name == ((char *)NULL))
  {
    char nameBuffer[1024l];
    signed long int seconds;
    struct tm *local;
    seconds=time((signed long int *)(void *)0);
    local=localtime(&seconds);
    if(local == ((struct tm *)NULL))
      fatal("Error getting localtime\n");

    strftime(nameBuffer, (unsigned long int)1024, "tdrecord-%Y-%m-%d@%H:%M:%S", local);
    *name=strdup(nameBuffer);
    if(*name == ((char *)NULL))
      fatal("Out of memory\n");

    if(!(directory == ((const char *)NULL)))
    {
      snprintf(nameBuffer, (unsigned long int)1024, "%s/%s", directory, *name);
      free((void *)*name);
      *name=strdup(nameBuffer);
      if(*name == ((char *)NULL))
        fatal("Out of memory\n");

    }

  }

  oldUmask=umask((unsigned int)0077);
  retval=fopen(*name, "w");
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(retval == ((struct _IO_FILE *)NULL))
  {
    return_value___errno_location$1=__errno_location();
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fatal("Could not open output %s: %s\n", *name, return_value_strerror$2);
  }

  umask(oldUmask);
  return retval;
}

// parse
// file src/input.h line 23
void parse(void)
{
  memset((void *)LLscnt, 0, (unsigned long int)2 * sizeof(signed int) /*4ul*/ );
  memset((void *)LLtcnt, 0, (unsigned long int)13 * sizeof(signed int) /*4ul*/ );
  LLtcnt[(signed long int)0] = LLtcnt[(signed long int)0] + 1;
  LLsymb = 0;
  LLreissue = -2;
  LLread();
  LL0_input();
  if(!(LLcsymb == 0))
    LLerror(256);

}

// parseEscapes
// file input.g line 70
static unsigned long int parseEscapes(char *string)
{
  unsigned long int maxReadPosition;
  maxReadPosition=strlen(string);
  unsigned long int readPosition = (unsigned long int)0;
  unsigned long int writePosition = (unsigned long int)0;
  unsigned long int i;
  unsigned long int tmp_post$1;
  unsigned long int tmp_post$2;
  unsigned long int tmp_post$3;
  unsigned long int tmp_post$4;
  unsigned long int tmp_post$5;
  unsigned long int tmp_post$6;
  unsigned long int tmp_post$7;
  unsigned long int tmp_post$8;
  unsigned long int tmp_post$9;
  unsigned long int tmp_post$10;
  unsigned long int tmp_post$11;
  unsigned long int tmp_post$12;
  unsigned int value;
  _Bool tmp_if_expr$14;
  const unsigned short int **return_value___ctype_b_loc$13;
  signed int return_value_tolower$15;
  unsigned long int tmp_post$17;
  signed int parseEscapes$$1$$1$$1$$1$$2$$value;
  unsigned long int maxIdx;
  _Bool tmp_if_expr$18;
  _Bool tmp_if_expr$19;
  unsigned long int tmp_post$20;
  unsigned long int tmp_post$21;
  unsigned long int tmp_post$22;
  unsigned long int tmp_post$23;
  while(!(readPosition >= maxReadPosition))
    if((signed int)string[(signed long int)readPosition] == 92)
    {
      readPosition = readPosition + 1ul;
      if(readPosition == maxReadPosition)
        fatal("Interal error\n");

      tmp_post$1 = readPosition;
      readPosition = readPosition + 1ul;
      switch((signed int)string[(signed long int)tmp_post$1])
      {
        case 110:
        {
          tmp_post$2 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$2] = (char)10;
          break;
        }
        case 114:
        {
          tmp_post$3 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$3] = (char)13;
          break;
        }
        case 39:
        {
          tmp_post$4 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$4] = (char)39;
          break;
        }
        case 92:
        {
          tmp_post$5 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$5] = (char)92;
          break;
        }
        case 116:
        {
          tmp_post$6 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$6] = (char)9;
          break;
        }
        case 98:
        {
          tmp_post$7 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$7] = (char)8;
          break;
        }
        case 102:
        {
          tmp_post$8 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$8] = (char)12;
          break;
        }
        case 97:
        {
          tmp_post$9 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$9] = (char)7;
          break;
        }
        case 118:
        {
          tmp_post$10 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$10] = (char)11;
          break;
        }
        case 63:
        {
          tmp_post$11 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$11] = (char)63;
          break;
        }
        case 34:
        {
          tmp_post$12 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$12] = (char)34;
          break;
        }
        case 120:
        {
          value = (unsigned int)0;
          i = (unsigned long int)0;
          do
          {
            if(!(i + readPosition >= maxReadPosition) && !(i >= 2ul))
            {
              return_value___ctype_b_loc$13=__ctype_b_loc();
              tmp_if_expr$14 = ((signed int)(*return_value___ctype_b_loc$13)[(signed long int)(signed int)string[(signed long int)(readPosition + i)]] & (signed int)(unsigned short int)4096) != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$14 = (_Bool)0;
            if(!tmp_if_expr$14)
              break;

            value = value << 4;
            const unsigned short int **return_value___ctype_b_loc$16;
            return_value___ctype_b_loc$16=__ctype_b_loc();
            if(!((2048 & (signed int)(*return_value___ctype_b_loc$16)[(signed long int)(signed int)string[(signed long int)i + (signed long int)readPosition]]) == 0))
              value = value + (unsigned int)(signed int)((signed int)string[(signed long int)(readPosition + i)] - 48);

            else
            {
              return_value_tolower$15=tolower((signed int)string[(signed long int)(readPosition + i)]);
              value = value + (unsigned int)((signed int)(return_value_tolower$15 - 97) + 10);
            }
            if(value >= 256u)
              fatal("%s:%d: Invalid hexadecimal escape sequence\n", file_name, line_number);

            i = i + 1ul;
          }
          while((_Bool)1);
          readPosition = readPosition + i;
          if(i == 0ul)
            fatal("%s:%d: Invalid hexadecimal escape sequence\n", file_name, line_number);

          tmp_post$17 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$17] = (char)value;
          break;
        }
        case 48:

        case 49:

        case 50:

        case 51:

        case 52:

        case 53:

        case 54:

        case 55:
        {
          parseEscapes$$1$$1$$1$$1$$2$$value = (signed int)((signed int)string[(signed long int)(readPosition - (unsigned long int)1)] - 48);
          maxIdx = (unsigned long int)((signed int)string[(signed long int)(readPosition - (unsigned long int)1)] < 52 ? 2 : 1);
          i = (unsigned long int)0;
          do
          {
            if(!(i + readPosition >= maxReadPosition) && !(i >= maxIdx))
              tmp_if_expr$18 = (signed int)string[(signed long int)(readPosition + i)] >= 48 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$18 = (_Bool)0;
            if(tmp_if_expr$18)
              tmp_if_expr$19 = (signed int)string[(signed long int)(readPosition + i)] <= 55 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$19 = (_Bool)0;
            if(!tmp_if_expr$19)
              break;

            parseEscapes$$1$$1$$1$$1$$2$$value = parseEscapes$$1$$1$$1$$1$$2$$value * 8 + (signed int)((signed int)string[(signed long int)(readPosition + i)] - 48);
            i = i + 1ul;
          }
          while((_Bool)1);
          readPosition = readPosition + i;
          tmp_post$20 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$20] = (char)parseEscapes$$1$$1$$1$$1$$2$$value;
          break;
        }
        default:
        {
          tmp_post$21 = writePosition;
          writePosition = writePosition + 1ul;
          string[(signed long int)tmp_post$21] = string[(signed long int)(readPosition - (unsigned long int)1)];
        }
      }
    }

    else
    {
      tmp_post$22 = writePosition;
      writePosition = writePosition + 1ul;
      tmp_post$23 = readPosition;
      readPosition = readPosition + 1ul;
      string[(signed long int)tmp_post$22] = string[(signed long int)tmp_post$23];
    }
  string[(signed long int)writePosition] = (char)0;
  return writePosition;
}

// parse_options
// file src/replay.c line 131
static void parse_options(signed int argc, char **argv)
{
  char *optArg;
  signed int optargind;
  signed int optnomore = 0;
  optargind = 1;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$4;
  unsigned long int return_value_strlen$3;
  _Bool tmp_if_expr$6;
  signed int return_value_strncmp$5;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$10;
  unsigned long int return_value_strlen$9;
  _Bool tmp_if_expr$12;
  signed int return_value_strncmp$11;
  _Bool tmp_if_expr$17;
  _Bool tmp_if_expr$22;
  _Bool tmp_if_expr$19;
  unsigned long int return_value_strlen$18;
  _Bool tmp_if_expr$21;
  signed int return_value_strncmp$20;
  signed int return_value_strcmp$15;
  signed int return_value_strcmp$14;
  _Bool tmp_if_expr$29;
  _Bool tmp_if_expr$34;
  _Bool tmp_if_expr$31;
  unsigned long int return_value_strlen$30;
  _Bool tmp_if_expr$33;
  signed int return_value_strncmp$32;
  const unsigned short int **return_value___ctype_b_loc$23;
  const unsigned short int **return_value___ctype_b_loc$28;
  _Bool tmp_if_expr$35;
  _Bool tmp_if_expr$40;
  _Bool tmp_if_expr$37;
  unsigned long int return_value_strlen$36;
  _Bool tmp_if_expr$39;
  signed int return_value_strncmp$38;
  _Bool tmp_if_expr$41;
  _Bool tmp_if_expr$46;
  _Bool tmp_if_expr$43;
  unsigned long int return_value_strlen$42;
  _Bool tmp_if_expr$45;
  signed int return_value_strncmp$44;
  _Bool tmp_if_expr$47;
  _Bool tmp_if_expr$52;
  _Bool tmp_if_expr$49;
  unsigned long int return_value_strlen$48;
  _Bool tmp_if_expr$51;
  signed int return_value_strncmp$50;
  _Bool tmp_if_expr$53;
  _Bool tmp_if_expr$58;
  _Bool tmp_if_expr$55;
  unsigned long int return_value_strlen$54;
  _Bool tmp_if_expr$57;
  signed int return_value_strncmp$56;
  _Bool tmp_if_expr$59;
  _Bool tmp_if_expr$64;
  _Bool tmp_if_expr$61;
  unsigned long int return_value_strlen$60;
  _Bool tmp_if_expr$63;
  signed int return_value_strncmp$62;
  _Bool tmp_if_expr$67;
  _Bool tmp_if_expr$72;
  _Bool tmp_if_expr$69;
  unsigned long int return_value_strlen$68;
  _Bool tmp_if_expr$71;
  signed int return_value_strncmp$70;
  _Bool tmp_if_expr$75;
  _Bool tmp_if_expr$80;
  _Bool tmp_if_expr$77;
  unsigned long int return_value_strlen$76;
  _Bool tmp_if_expr$79;
  signed int return_value_strncmp$78;
  _Bool tmp_if_expr$81;
  _Bool tmp_if_expr$86;
  _Bool tmp_if_expr$83;
  unsigned long int return_value_strlen$82;
  _Bool tmp_if_expr$85;
  signed int return_value_strncmp$84;
  _Bool tmp_if_expr$87;
  _Bool tmp_if_expr$92;
  _Bool tmp_if_expr$89;
  unsigned long int return_value_strlen$88;
  _Bool tmp_if_expr$91;
  signed int return_value_strncmp$90;
  _Bool tmp_if_expr$93;
  _Bool tmp_if_expr$98;
  _Bool tmp_if_expr$95;
  unsigned long int return_value_strlen$94;
  _Bool tmp_if_expr$97;
  signed int return_value_strncmp$96;
  _Bool tmp_if_expr$99;
  _Bool tmp_if_expr$104;
  _Bool tmp_if_expr$101;
  unsigned long int return_value_strlen$100;
  _Bool tmp_if_expr$103;
  signed int return_value_strncmp$102;
  unsigned long int return_value_strlen$106;
  signed int return_value_strncmp$105;
  for( ; !(optargind >= argc); optargind = optargind + 1)
  {
    char optcontrol = (char)0;
    char *optcurrent;
    char *optptr;
    optcurrent = argv[(signed long int)optargind];
    if(optnomore == 0 && (signed int)*optcurrent == 45)
    {
      unsigned long int optlength;
      enum anonymous$9 opttype;
      if((signed int)optcurrent[1l] == 45)
      {
        optArg=strchr(optcurrent, 61);
        if(optArg == ((char *)NULL))
          optlength=strlen(optcurrent);

        else
        {
          optlength = (unsigned long int)(optArg - optcurrent);
          optArg = optArg + 1l;
        }
        opttype = (enum anonymous$9)LONG;
      }

      else
      {
        optlength = (unsigned long int)2;
        if(!((signed int)optcurrent[1l] == 0))
          tmp_if_expr$1 = (signed int)optcurrent[(signed long int)2] != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1 = (_Bool)0;
        if(tmp_if_expr$1)
          optArg = optcurrent + (signed long int)2;

        else
          optArg = (char *)(void *)0;
        opttype = (enum anonymous$9)SHORT;
      }
      if(optlength >= 2147483648ul)
        optlength = (unsigned long int)0x7fffffff;


    next_opt:
      ;
      if((signed int)opttype == SHORT)
        tmp_if_expr$2 = (signed int)optcurrent[(signed long int)1] == 97 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$2 = (_Bool)0;
      if(tmp_if_expr$2)
        tmp_if_expr$7 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$3=strlen("alert");
          tmp_if_expr$4 = return_value_strlen$3 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$4 = (_Bool)0;
        if(tmp_if_expr$4)
        {
          return_value_strncmp$5=strncmp(optcurrent + (signed long int)2, "alert", optlength - (unsigned long int)2);
          tmp_if_expr$6 = return_value_strncmp$5 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6 = (_Bool)0;
        tmp_if_expr$7 = tmp_if_expr$6 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$7)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        alert = optArg;
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$8 = (signed int)optcurrent[(signed long int)1] == 100 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$8 = (_Bool)0;
      if(tmp_if_expr$8)
        tmp_if_expr$13 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$9=strlen("display");
          tmp_if_expr$10 = return_value_strlen$9 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$10 = (_Bool)0;
        if(tmp_if_expr$10)
        {
          return_value_strncmp$11=strncmp(optcurrent + (signed long int)2, "display", optlength - (unsigned long int)2);
          tmp_if_expr$12 = return_value_strncmp$11 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$12 = (_Bool)0;
        tmp_if_expr$13 = tmp_if_expr$12 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$13)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        display = (enum anonymous$10)td_true;
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$17 = (signed int)optcurrent[(signed long int)1] == 101 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$17 = (_Bool)0;
      if(tmp_if_expr$17)
        tmp_if_expr$22 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$18=strlen("on-error");
          tmp_if_expr$19 = return_value_strlen$18 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$19 = (_Bool)0;
        if(tmp_if_expr$19)
        {
          return_value_strncmp$20=strncmp(optcurrent + (signed long int)2, "on-error", optlength - (unsigned long int)2);
          tmp_if_expr$21 = return_value_strncmp$20 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$21 = (_Bool)0;
        tmp_if_expr$22 = tmp_if_expr$21 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$22)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        signed int return_value_strcmp$16;
        return_value_strcmp$16=strcmp(optArg, "interact");
        if(return_value_strcmp$16 == 0)
          on_error = (enum anonymous$13)ON_ERROR_INTERACT;

        else
        {
          return_value_strcmp$15=strcmp(optArg, "continue");
          if(return_value_strcmp$15 == 0)
            on_error = (enum anonymous$13)ON_ERROR_CONTINUE;

          else
          {
            return_value_strcmp$14=strcmp(optArg, "abort");
            if(return_value_strcmp$14 == 0)
              on_error = (enum anonymous$13)ON_ERROR_ABORT;

            else
              fatal("Invalid argument for on-error option: %s\n", optArg);
          }
        }
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$29 = (signed int)optcurrent[(signed long int)1] == 107 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$29 = (_Bool)0;
      if(tmp_if_expr$29)
        tmp_if_expr$34 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$30=strlen("key-delay");
          tmp_if_expr$31 = return_value_strlen$30 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$31 = (_Bool)0;
        if(tmp_if_expr$31)
        {
          return_value_strncmp$32=strncmp(optcurrent + (signed long int)2, "key-delay", optlength - (unsigned long int)2);
          tmp_if_expr$33 = return_value_strncmp$32 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$33 = (_Bool)0;
        tmp_if_expr$34 = tmp_if_expr$33 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$34)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        for( ; !(*optArg == 0); optArg = optArg + 1l)
        {
          return_value___ctype_b_loc$23=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$23)[(signed long int)(signed int)*optArg]) == 0)
            break;

        }
        if((signed int)*optArg == 47)
        {
          optArg = optArg + 1l;
          do
          {
            char *endptr;
            double value;
            signed int *return_value___errno_location$24;
            return_value___errno_location$24=__errno_location();
            *return_value___errno_location$24 = 0;
            value=strtod(optArg, &endptr);
            if(!((signed int)*endptr == 0))
              fatal("Garbage after value for %.*s option\n", (signed int)optlength, optcurrent);

            signed int *return_value___errno_location$25;
            return_value___errno_location$25=__errno_location();
            if(value < 2.225074e-308 || value > 1.797693e+308 || !(*return_value___errno_location$25 == 0))
              fatal("Value for %.*s option (%f) is out of range\n", (signed int)optlength, optcurrent, value);

            key_delay_scale = value;
          }
          while((_Bool)0);
          key_delay = (double)0;
        }

        else
        {
          return_value___ctype_b_loc$28=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc$28)[(signed long int)(signed int)*optArg]) == 0))
          {
            do
            {
              char *parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$endptr;
              signed long int parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$value;
              signed int *return_value___errno_location$26;
              return_value___errno_location$26=__errno_location();
              *return_value___errno_location$26 = 0;
              parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$value=strtol(optArg, &parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$endptr, 10);
              if(!((signed int)*parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$endptr == 0))
                fatal("Garbage after value for %.*s option\n", (signed int)optlength, optcurrent);

              signed int *return_value___errno_location$27;
              return_value___errno_location$27=__errno_location();
              if(parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$value >= 2147483648l || !(*return_value___errno_location$27 == 0) || !(parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$value >= 1l))
                fatal("Value for %.*s option (%ld) is out of range\n", (signed int)optlength, optcurrent, parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$value);

              key_delay = (double)(signed int)parse_options$$1$$1$$1$$1$$6$$2$$2$$1$$value;
            }
            while((_Bool)0);
            key_delay_scale = 1.0;
          }

          else
            fatal("Invalid argument for key-delay option: %s\n", optArg);
        }
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$35 = (signed int)optcurrent[(signed long int)1] == 108 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$35 = (_Bool)0;
      if(tmp_if_expr$35)
        tmp_if_expr$40 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$36=strlen("log");
          tmp_if_expr$37 = return_value_strlen$36 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$37 = (_Bool)0;
        if(tmp_if_expr$37)
        {
          return_value_strncmp$38=strncmp(optcurrent + (signed long int)2, "log", optlength - (unsigned long int)2);
          tmp_if_expr$39 = return_value_strncmp$38 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$39 = (_Bool)0;
        tmp_if_expr$40 = tmp_if_expr$39 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$40)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        log_name = optArg;
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$41 = (signed int)optcurrent[(signed long int)1] == 82 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$41 = (_Bool)0;
      if(tmp_if_expr$41)
        tmp_if_expr$46 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$42=strlen("no-resize");
          tmp_if_expr$43 = return_value_strlen$42 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$43 = (_Bool)0;
        if(tmp_if_expr$43)
        {
          return_value_strncmp$44=strncmp(optcurrent + (signed long int)2, "no-resize", optlength - (unsigned long int)2);
          tmp_if_expr$45 = return_value_strncmp$44 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$45 = (_Bool)0;
        tmp_if_expr$46 = tmp_if_expr$45 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$46)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        no_resize = (enum anonymous$10)td_true;
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$47 = (signed int)optcurrent[(signed long int)1] == 118 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$47 = (_Bool)0;
      if(tmp_if_expr$47)
        tmp_if_expr$52 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$48=strlen("visual-compare");
          tmp_if_expr$49 = return_value_strlen$48 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$49 = (_Bool)0;
        if(tmp_if_expr$49)
        {
          return_value_strncmp$50=strncmp(optcurrent + (signed long int)2, "visual-compare", optlength - (unsigned long int)2);
          tmp_if_expr$51 = return_value_strncmp$50 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$51 = (_Bool)0;
        tmp_if_expr$52 = tmp_if_expr$51 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$52)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        visual_compare = (enum anonymous$10)td_true;
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$53 = (signed int)optcurrent[(signed long int)1] == 112 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$53 = (_Bool)0;
      if(tmp_if_expr$53)
        tmp_if_expr$58 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$54=strlen("picture");
          tmp_if_expr$55 = return_value_strlen$54 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$55 = (_Bool)0;
        if(tmp_if_expr$55)
        {
          return_value_strncmp$56=strncmp(optcurrent + (signed long int)2, "picture", optlength - (unsigned long int)2);
          tmp_if_expr$57 = return_value_strncmp$56 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$57 = (_Bool)0;
        tmp_if_expr$58 = tmp_if_expr$57 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$58)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        if(!(picture_name == ((const char *)NULL)))
          fatal("Option %.*s specified twice\n", (signed int)optlength, optcurrent);

        picture_name = optArg;
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$59 = (signed int)optcurrent[(signed long int)1] == 102 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$59 = (_Bool)0;
      if(tmp_if_expr$59)
        tmp_if_expr$64 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$60=strlen("font");
          tmp_if_expr$61 = return_value_strlen$60 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$61 = (_Bool)0;
        if(tmp_if_expr$61)
        {
          return_value_strncmp$62=strncmp(optcurrent + (signed long int)2, "font", optlength - (unsigned long int)2);
          tmp_if_expr$63 = return_value_strncmp$62 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$63 = (_Bool)0;
        tmp_if_expr$64 = tmp_if_expr$63 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$64)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        option_font = optArg;
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$67 = (signed int)optcurrent[(signed long int)1] == 87 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$67 = (_Bool)0;
      if(tmp_if_expr$67)
        tmp_if_expr$72 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$68=strlen("cell-width");
          tmp_if_expr$69 = return_value_strlen$68 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$69 = (_Bool)0;
        if(tmp_if_expr$69)
        {
          return_value_strncmp$70=strncmp(optcurrent + (signed long int)2, "cell-width", optlength - (unsigned long int)2);
          tmp_if_expr$71 = return_value_strncmp$70 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$71 = (_Bool)0;
        tmp_if_expr$72 = tmp_if_expr$71 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$72)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        do
        {
          char *parse_options$$1$$1$$1$$1$$12$$2$$1$$endptr;
          signed long int parse_options$$1$$1$$1$$1$$12$$2$$1$$value;
          signed int *return_value___errno_location$65;
          return_value___errno_location$65=__errno_location();
          *return_value___errno_location$65 = 0;
          parse_options$$1$$1$$1$$1$$12$$2$$1$$value=strtol(optArg, &parse_options$$1$$1$$1$$1$$12$$2$$1$$endptr, 10);
          if(!((signed int)*parse_options$$1$$1$$1$$1$$12$$2$$1$$endptr == 0))
            fatal("Garbage after value for %.*s option\n", (signed int)optlength, optcurrent);

          signed int *return_value___errno_location$66;
          return_value___errno_location$66=__errno_location();
          if(parse_options$$1$$1$$1$$1$$12$$2$$1$$value >= 17l || !(*return_value___errno_location$66 == 0) || !(parse_options$$1$$1$$1$$1$$12$$2$$1$$value >= 6l))
            fatal("Value for %.*s option (%ld) is out of range\n", (signed int)optlength, optcurrent, parse_options$$1$$1$$1$$1$$12$$2$$1$$value);

          cell_width = (signed int)parse_options$$1$$1$$1$$1$$12$$2$$1$$value;
        }
        while((_Bool)0);
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$75 = (signed int)optcurrent[(signed long int)1] == 72 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$75 = (_Bool)0;
      if(tmp_if_expr$75)
        tmp_if_expr$80 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$76=strlen("cell-heigth");
          tmp_if_expr$77 = return_value_strlen$76 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$77 = (_Bool)0;
        if(tmp_if_expr$77)
        {
          return_value_strncmp$78=strncmp(optcurrent + (signed long int)2, "cell-heigth", optlength - (unsigned long int)2);
          tmp_if_expr$79 = return_value_strncmp$78 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$79 = (_Bool)0;
        tmp_if_expr$80 = tmp_if_expr$79 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$80)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        do
        {
          char *parse_options$$1$$1$$1$$1$$13$$2$$1$$endptr;
          signed long int parse_options$$1$$1$$1$$1$$13$$2$$1$$value;
          signed int *return_value___errno_location$73;
          return_value___errno_location$73=__errno_location();
          *return_value___errno_location$73 = 0;
          parse_options$$1$$1$$1$$1$$13$$2$$1$$value=strtol(optArg, &parse_options$$1$$1$$1$$1$$13$$2$$1$$endptr, 10);
          if(!((signed int)*parse_options$$1$$1$$1$$1$$13$$2$$1$$endptr == 0))
            fatal("Garbage after value for %.*s option\n", (signed int)optlength, optcurrent);

          signed int *return_value___errno_location$74;
          return_value___errno_location$74=__errno_location();
          if(parse_options$$1$$1$$1$$1$$13$$2$$1$$value >= 25l || !(*return_value___errno_location$74 == 0) || !(parse_options$$1$$1$$1$$1$$13$$2$$1$$value >= 6l))
            fatal("Value for %.*s option (%ld) is out of range\n", (signed int)optlength, optcurrent, parse_options$$1$$1$$1$$1$$13$$2$$1$$value);

          cell_width = (signed int)parse_options$$1$$1$$1$$1$$13$$2$$1$$value;
        }
        while((_Bool)0);
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$81 = (signed int)optcurrent[(signed long int)1] == 80 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$81 = (_Bool)0;
      if(tmp_if_expr$81)
        tmp_if_expr$86 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$82=strlen("picture-series");
          tmp_if_expr$83 = return_value_strlen$82 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$83 = (_Bool)0;
        if(tmp_if_expr$83)
        {
          return_value_strncmp$84=strncmp(optcurrent + (signed long int)2, "picture-series", optlength - (unsigned long int)2);
          tmp_if_expr$85 = return_value_strncmp$84 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$85 = (_Bool)0;
        tmp_if_expr$86 = tmp_if_expr$85 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$86)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        fatal("termdebug was built without pthreads, and therefore tdcompare does not provide %.*s\n", (signed int)optlength, optcurrent);
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$87 = (signed int)optcurrent[(signed long int)1] == 68 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$87 = (_Bool)0;
      if(tmp_if_expr$87)
        tmp_if_expr$92 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$88=strlen("describe");
          tmp_if_expr$89 = return_value_strlen$88 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$89 = (_Bool)0;
        if(tmp_if_expr$89)
        {
          return_value_strncmp$90=strncmp(optcurrent + (signed long int)2, "describe", optlength - (unsigned long int)2);
          tmp_if_expr$91 = return_value_strncmp$90 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$91 = (_Bool)0;
        tmp_if_expr$92 = tmp_if_expr$91 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$92)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        describe = (enum anonymous$10)td_true;
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$93 = (signed int)optcurrent[(signed long int)1] == 104 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$93 = (_Bool)0;
      if(tmp_if_expr$93)
        tmp_if_expr$98 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$94=strlen("help");
          tmp_if_expr$95 = return_value_strlen$94 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$95 = (_Bool)0;
        if(tmp_if_expr$95)
        {
          return_value_strncmp$96=strncmp(optcurrent + (signed long int)2, "help", optlength - (unsigned long int)2);
          tmp_if_expr$97 = return_value_strncmp$96 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$97 = (_Bool)0;
        tmp_if_expr$98 = tmp_if_expr$97 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$98)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        printUsage();
        goto check_next;
      }

      if((signed int)opttype == SHORT)
        tmp_if_expr$99 = (signed int)optcurrent[(signed long int)1] == 86 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$99 = (_Bool)0;
      if(tmp_if_expr$99)
        tmp_if_expr$104 = (_Bool)1;

      else
      {
        if((signed int)opttype == LONG)
        {
          return_value_strlen$100=strlen("version");
          tmp_if_expr$101 = return_value_strlen$100 == optlength - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$101 = (_Bool)0;
        if(tmp_if_expr$101)
        {
          return_value_strncmp$102=strncmp(optcurrent + (signed long int)2, "version", optlength - (unsigned long int)2);
          tmp_if_expr$103 = return_value_strncmp$102 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$103 = (_Bool)0;
        tmp_if_expr$104 = tmp_if_expr$103 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$104)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg == ((char *)NULL)))
            {
              if((signed int)opttype == SHORT)
              {
                optcontrol = optcontrol + 1;
                optArg = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
            }

            break;
          }
          case 2:
          {
            if(optArg == ((char *)NULL) && 1 + optargind >= argc)
              fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

            if(optArg == ((char *)NULL))
            {
              optargind = optargind + 1;
              optArg = argv[(signed long int)optargind];
            }

          }
        }
        fputs("tdreplay 2.2\nCopyright (C) 2010,2013 G.P. Halkes\nLicensed under the GNU General Public License version 3\n", stdout);
        exit(0);
        goto check_next;
      }

      if((signed int)opttype == LONG)
      {
        return_value_strlen$106=strlen("");
        if(return_value_strlen$106 == optlength + 18446744073709551614ul)
        {
          return_value_strncmp$105=strncmp(optcurrent + (signed long int)2, "", optlength - (unsigned long int)2);
          if(return_value_strncmp$105 == 0)
          {
            switch(0)
            {
              case 0:
              {
                if(!(optArg == ((char *)NULL)))
                {
                  if((signed int)opttype == SHORT)
                  {
                    optcontrol = optcontrol + 1;
                    optArg = (char *)(void *)0;
                  }

                  else
                    fatal("Option %.*s does not take an argument\n", (signed int)optlength, optcurrent);
                }

                break;
              }
              case 2:
              {
                if(optArg == ((char *)NULL) && 1 + optargind >= argc)
                  fatal("Option %.*s requires an argument\n", (signed int)optlength, optcurrent);

                if(optArg == ((char *)NULL))
                {
                  optargind = optargind + 1;
                  optArg = argv[(signed long int)optargind];
                }

              }
            }
            do
              optnomore = 1;
            while((_Bool)0);
            goto check_next;
          }

        }

      }

      fatal("Unknown option %.*s\n", (signed int)optlength, optcurrent);
    }

    else
    {
      if(!(input == ((char *)NULL)))
        fatal("More than one recording specified\n");

      input = optcurrent;

    check_next:
      ;
      if((signed int)optcontrol == 1 || (signed int)optcontrol == 3)
      {
        if((signed int)optcontrol == 1)
        {
          optcurrent = optcurrent;
          optptr = optcurrent;
        }

        optcontrol = (char)2;
        optcurrent = optcurrent + 1l;
        optcurrent[(signed long int)0] = (char)45;
        optArg = (signed int)optcurrent[(signed long int)2] != 0 ? optcurrent + (signed long int)2 : (char *)(void *)0;
        goto next_opt;
      }

      else
        if((signed int)optcontrol == 2)
          (void)optptr;

    }
  }

stop_opt_parse:
  ;
  if(input == ((char *)NULL))
    fatal("No recording specified\n");

}

// parse_options$link1
// file src/view.c line 48
static void parse_options$link1(signed int argc$link1, char **argv$link1)
{
  char *optArg$link1;
  signed int optargind$link1;
  signed int optnomore$link1 = 0;
  optargind$link1 = 1;
  _Bool tmp_if_expr$1$link1;
  _Bool tmp_if_expr$8$link1;
  _Bool tmp_if_expr$13$link1;
  _Bool tmp_if_expr$10$link1;
  unsigned long int return_value_strlen$9$link1;
  _Bool tmp_if_expr$12$link1;
  signed int return_value_strncmp$11$link1;
  const unsigned short int **return_value___ctype_b_loc$2;
  const unsigned short int **return_value___ctype_b_loc$7;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$19$link1;
  _Bool tmp_if_expr$16;
  unsigned long int return_value_strlen$15;
  _Bool tmp_if_expr$18;
  signed int return_value_strncmp$17;
  _Bool tmp_if_expr$20;
  _Bool tmp_if_expr$25;
  _Bool tmp_if_expr$22$link1;
  unsigned long int return_value_strlen$21;
  _Bool tmp_if_expr$24;
  signed int return_value_strncmp$23;
  unsigned long int return_value_strlen$27;
  signed int return_value_strncmp$26;
  for( ; !(optargind$link1 >= argc$link1); optargind$link1 = optargind$link1 + 1)
  {
    char optcontrol$link1 = (char)0;
    char *optcurrent$link1;
    char *optptr$link1;
    optcurrent$link1 = argv$link1[(signed long int)optargind$link1];
    if(optnomore$link1 == 0 && (signed int)*optcurrent$link1 == 45)
    {
      unsigned long int optlength$link1;
      enum anonymous$9 opttype$link1;
      if((signed int)optcurrent$link1[1l] == 45)
      {
        optArg$link1=strchr(optcurrent$link1, 61);
        if(optArg$link1 == ((char *)NULL))
          optlength$link1=strlen(optcurrent$link1);

        else
        {
          optlength$link1 = (unsigned long int)(optArg$link1 - optcurrent$link1);
          optArg$link1 = optArg$link1 + 1l;
        }
        opttype$link1 = (enum anonymous$9)LONG;
      }

      else
      {
        optlength$link1 = (unsigned long int)2;
        if(!((signed int)optcurrent$link1[1l] == 0))
          tmp_if_expr$1$link1 = (signed int)optcurrent$link1[(signed long int)2] != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1$link1 = (_Bool)0;
        if(tmp_if_expr$1$link1)
          optArg$link1 = optcurrent$link1 + (signed long int)2;

        else
          optArg$link1 = (char *)(void *)0;
        opttype$link1 = (enum anonymous$9)SHORT;
      }
      if(optlength$link1 >= 2147483648ul)
        optlength$link1 = (unsigned long int)0x7fffffff;


    next_opt:
      ;
      if((signed int)opttype$link1 == SHORT)
        tmp_if_expr$8$link1 = (signed int)optcurrent$link1[(signed long int)1] == 107 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$8$link1 = (_Bool)0;
      if(tmp_if_expr$8$link1)
        tmp_if_expr$13$link1 = (_Bool)1;

      else
      {
        if((signed int)opttype$link1 == LONG)
        {
          return_value_strlen$9$link1=strlen("key-delay");
          tmp_if_expr$10$link1 = return_value_strlen$9$link1 == optlength$link1 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$10$link1 = (_Bool)0;
        if(tmp_if_expr$10$link1)
        {
          return_value_strncmp$11$link1=strncmp(optcurrent$link1 + (signed long int)2, "key-delay", optlength$link1 - (unsigned long int)2);
          tmp_if_expr$12$link1 = return_value_strncmp$11$link1 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$12$link1 = (_Bool)0;
        tmp_if_expr$13$link1 = tmp_if_expr$12$link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$13$link1)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link1 == ((char *)NULL)))
            {
              if((signed int)opttype$link1 == SHORT)
              {
                optcontrol$link1 = optcontrol$link1 + 1;
                optArg$link1 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link1, optcurrent$link1);
            }

            break;
          }
          case 2:
          {
            if(optArg$link1 == ((char *)NULL) && 1 + optargind$link1 >= argc$link1)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link1, optcurrent$link1);

            if(optArg$link1 == ((char *)NULL))
            {
              optargind$link1 = optargind$link1 + 1;
              optArg$link1 = argv$link1[(signed long int)optargind$link1];
            }

          }
        }
        for( ; !(*optArg$link1 == 0); optArg$link1 = optArg$link1 + 1l)
        {
          return_value___ctype_b_loc$2=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*optArg$link1]) == 0)
            break;

        }
        if((signed int)*optArg$link1 == 47)
        {
          optArg$link1 = optArg$link1 + 1l;
          do
          {
            char *endptr;
            double value;
            signed int *return_value___errno_location$3;
            return_value___errno_location$3=__errno_location();
            *return_value___errno_location$3 = 0;
            value=strtod(optArg$link1, &endptr);
            if(!((signed int)*endptr == 0))
              fatal("Garbage after value for %.*s option\n", (signed int)optlength$link1, optcurrent$link1);

            signed int *return_value___errno_location$4;
            return_value___errno_location$4=__errno_location();
            if(value < 2.225074e-308 || value > 1.797693e+308 || !(*return_value___errno_location$4 == 0))
              fatal("Value for %.*s option (%f) is out of range\n", (signed int)optlength$link1, optcurrent$link1, value);

            key_delay_scale$link1 = value;
          }
          while((_Bool)0);
          key_delay$link1 = 0;
        }

        else
        {
          return_value___ctype_b_loc$7=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)*optArg$link1]) == 0))
          {
            do
            {
              char *parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$endptr;
              signed long int parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$value;
              signed int *return_value___errno_location$5;
              return_value___errno_location$5=__errno_location();
              *return_value___errno_location$5 = 0;
              parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$value=strtol(optArg$link1, &parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$endptr, 10);
              if(!((signed int)*parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$endptr == 0))
                fatal("Garbage after value for %.*s option\n", (signed int)optlength$link1, optcurrent$link1);

              signed int *return_value___errno_location$6;
              return_value___errno_location$6=__errno_location();
              if(parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$value >= 2147483648l || !(*return_value___errno_location$6 == 0) || !(parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$value >= 1l))
                fatal("Value for %.*s option (%ld) is out of range\n", (signed int)optlength$link1, optcurrent$link1, parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$value);

              key_delay$link1 = (signed int)parse_options$$1$$1$$1$$1$$3$$2$$2$$1$$value;
            }
            while((_Bool)0);
            key_delay_scale$link1 = 1.0;
          }

          else
            fatal("Invalid argument for key-delay option: %s\n", optArg$link1);
        }
        goto check_next;
      }

      if((signed int)opttype$link1 == SHORT)
        tmp_if_expr$14 = (signed int)optcurrent$link1[(signed long int)1] == 104 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$14 = (_Bool)0;
      if(tmp_if_expr$14)
        tmp_if_expr$19$link1 = (_Bool)1;

      else
      {
        if((signed int)opttype$link1 == LONG)
        {
          return_value_strlen$15=strlen("help");
          tmp_if_expr$16 = return_value_strlen$15 == optlength$link1 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$16 = (_Bool)0;
        if(tmp_if_expr$16)
        {
          return_value_strncmp$17=strncmp(optcurrent$link1 + (signed long int)2, "help", optlength$link1 - (unsigned long int)2);
          tmp_if_expr$18 = return_value_strncmp$17 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$18 = (_Bool)0;
        tmp_if_expr$19$link1 = tmp_if_expr$18 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$19$link1)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link1 == ((char *)NULL)))
            {
              if((signed int)opttype$link1 == SHORT)
              {
                optcontrol$link1 = optcontrol$link1 + 1;
                optArg$link1 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link1, optcurrent$link1);
            }

            break;
          }
          case 2:
          {
            if(optArg$link1 == ((char *)NULL) && 1 + optargind$link1 >= argc$link1)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link1, optcurrent$link1);

            if(optArg$link1 == ((char *)NULL))
            {
              optargind$link1 = optargind$link1 + 1;
              optArg$link1 = argv$link1[(signed long int)optargind$link1];
            }

          }
        }
        printUsage$link1();
        goto check_next;
      }

      if((signed int)opttype$link1 == SHORT)
        tmp_if_expr$20 = (signed int)optcurrent$link1[(signed long int)1] == 86 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$20 = (_Bool)0;
      if(tmp_if_expr$20)
        tmp_if_expr$25 = (_Bool)1;

      else
      {
        if((signed int)opttype$link1 == LONG)
        {
          return_value_strlen$21=strlen("version");
          tmp_if_expr$22$link1 = return_value_strlen$21 == optlength$link1 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$22$link1 = (_Bool)0;
        if(tmp_if_expr$22$link1)
        {
          return_value_strncmp$23=strncmp(optcurrent$link1 + (signed long int)2, "version", optlength$link1 - (unsigned long int)2);
          tmp_if_expr$24 = return_value_strncmp$23 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$24 = (_Bool)0;
        tmp_if_expr$25 = tmp_if_expr$24 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$25)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link1 == ((char *)NULL)))
            {
              if((signed int)opttype$link1 == SHORT)
              {
                optcontrol$link1 = optcontrol$link1 + 1;
                optArg$link1 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link1, optcurrent$link1);
            }

            break;
          }
          case 2:
          {
            if(optArg$link1 == ((char *)NULL) && 1 + optargind$link1 >= argc$link1)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link1, optcurrent$link1);

            if(optArg$link1 == ((char *)NULL))
            {
              optargind$link1 = optargind$link1 + 1;
              optArg$link1 = argv$link1[(signed long int)optargind$link1];
            }

          }
        }
        fputs("tdview 2.2\nCopyright (C) 2010,2013 G.P. Halkes\nLicensed under the GNU General Public License version 3\n", stdout);
        exit(0);
        goto check_next;
      }

      if((signed int)opttype$link1 == LONG)
      {
        return_value_strlen$27=strlen("");
        if(return_value_strlen$27 == optlength$link1 + 18446744073709551614ul)
        {
          return_value_strncmp$26=strncmp(optcurrent$link1 + (signed long int)2, "", optlength$link1 - (unsigned long int)2);
          if(return_value_strncmp$26 == 0)
          {
            switch(0)
            {
              case 0:
              {
                if(!(optArg$link1 == ((char *)NULL)))
                {
                  if((signed int)opttype$link1 == SHORT)
                  {
                    optcontrol$link1 = optcontrol$link1 + 1;
                    optArg$link1 = (char *)(void *)0;
                  }

                  else
                    fatal("Option %.*s does not take an argument\n", (signed int)optlength$link1, optcurrent$link1);
                }

                break;
              }
              case 2:
              {
                if(optArg$link1 == ((char *)NULL) && 1 + optargind$link1 >= argc$link1)
                  fatal("Option %.*s requires an argument\n", (signed int)optlength$link1, optcurrent$link1);

                if(optArg$link1 == ((char *)NULL))
                {
                  optargind$link1 = optargind$link1 + 1;
                  optArg$link1 = argv$link1[(signed long int)optargind$link1];
                }

              }
            }
            do
              optnomore$link1 = 1;
            while((_Bool)0);
            goto check_next;
          }

        }

      }

      fatal("Unknown option %.*s\n", (signed int)optlength$link1, optcurrent$link1);
    }

    else
    {
      if(!(input$link1 == ((const char *)NULL)))
        fatal("More than one recording specified\n");

      input$link1 = optcurrent$link1;

    check_next:
      ;
      if((signed int)optcontrol$link1 == 1 || (signed int)optcontrol$link1 == 3)
      {
        if((signed int)optcontrol$link1 == 1)
        {
          optcurrent$link1 = optcurrent$link1;
          optptr$link1 = optcurrent$link1;
        }

        optcontrol$link1 = (char)2;
        optcurrent$link1 = optcurrent$link1 + 1l;
        optcurrent$link1[(signed long int)0] = (char)45;
        optArg$link1 = (signed int)optcurrent$link1[(signed long int)2] != 0 ? optcurrent$link1 + (signed long int)2 : (char *)(void *)0;
        goto next_opt;
      }

      else
        if((signed int)optcontrol$link1 == 2)
          (void)optptr$link1;

    }
  }

stop_opt_parse:
  ;
  if(input$link1 == ((const char *)NULL))
    fatal("No recording specified\n");

}

// parse_options$link2
// file src/rerecord.c line 49
static void parse_options$link2(signed int argc$link2, char **argv$link2)
{
  char *optArg$link2;
  signed int optargind$link2;
  signed int optnomore$link2 = 0;
  optargind$link2 = 1;
  _Bool tmp_if_expr$1$link2;
  _Bool tmp_if_expr$2$link1;
  _Bool tmp_if_expr$7$link1;
  _Bool tmp_if_expr$4$link1;
  unsigned long int return_value_strlen$3$link1;
  _Bool tmp_if_expr$6$link1;
  signed int return_value_strncmp$5$link1;
  _Bool tmp_if_expr$8$link2;
  _Bool tmp_if_expr$13$link2;
  _Bool tmp_if_expr$10$link2;
  unsigned long int return_value_strlen$9$link2;
  _Bool tmp_if_expr$12$link2;
  signed int return_value_strncmp$11$link2;
  _Bool tmp_if_expr$14$link1;
  _Bool tmp_if_expr$19$link2;
  _Bool tmp_if_expr$16$link1;
  unsigned long int return_value_strlen$15$link1;
  _Bool tmp_if_expr$18$link1;
  signed int return_value_strncmp$17$link1;
  _Bool tmp_if_expr$20$link1;
  _Bool tmp_if_expr$25$link1;
  _Bool tmp_if_expr$22$link2;
  unsigned long int return_value_strlen$21$link1;
  _Bool tmp_if_expr$24$link1;
  signed int return_value_strncmp$23$link1;
  _Bool tmp_if_expr$26;
  _Bool tmp_if_expr$31$link1;
  _Bool tmp_if_expr$28;
  unsigned long int return_value_strlen$27$link1;
  _Bool tmp_if_expr$30;
  signed int return_value_strncmp$29;
  unsigned long int return_value_strlen$33;
  signed int return_value_strncmp$32$link1;
  for( ; !(optargind$link2 >= argc$link2); optargind$link2 = optargind$link2 + 1)
  {
    char optcontrol$link2 = (char)0;
    char *optcurrent$link2;
    char *optptr$link2;
    optcurrent$link2 = argv$link2[(signed long int)optargind$link2];
    if(optnomore$link2 == 0 && (signed int)*optcurrent$link2 == 45)
    {
      unsigned long int optlength$link2;
      enum anonymous$9 opttype$link2;
      if((signed int)optcurrent$link2[1l] == 45)
      {
        optArg$link2=strchr(optcurrent$link2, 61);
        if(optArg$link2 == ((char *)NULL))
          optlength$link2=strlen(optcurrent$link2);

        else
        {
          optlength$link2 = (unsigned long int)(optArg$link2 - optcurrent$link2);
          optArg$link2 = optArg$link2 + 1l;
        }
        opttype$link2 = (enum anonymous$9)LONG;
      }

      else
      {
        optlength$link2 = (unsigned long int)2;
        if(!((signed int)optcurrent$link2[1l] == 0))
          tmp_if_expr$1$link2 = (signed int)optcurrent$link2[(signed long int)2] != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1$link2 = (_Bool)0;
        if(tmp_if_expr$1$link2)
          optArg$link2 = optcurrent$link2 + (signed long int)2;

        else
          optArg$link2 = (char *)(void *)0;
        opttype$link2 = (enum anonymous$9)SHORT;
      }
      if(optlength$link2 >= 2147483648ul)
        optlength$link2 = (unsigned long int)0x7fffffff;


    next_opt:
      ;
      if((signed int)opttype$link2 == SHORT)
        tmp_if_expr$2$link1 = (signed int)optcurrent$link2[(signed long int)1] == 111 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$2$link1 = (_Bool)0;
      if(tmp_if_expr$2$link1)
        tmp_if_expr$7$link1 = (_Bool)1;

      else
      {
        if((signed int)opttype$link2 == LONG)
        {
          return_value_strlen$3$link1=strlen("output");
          tmp_if_expr$4$link1 = return_value_strlen$3$link1 == optlength$link2 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$4$link1 = (_Bool)0;
        if(tmp_if_expr$4$link1)
        {
          return_value_strncmp$5$link1=strncmp(optcurrent$link2 + (signed long int)2, "output", optlength$link2 - (unsigned long int)2);
          tmp_if_expr$6$link1 = return_value_strncmp$5$link1 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6$link1 = (_Bool)0;
        tmp_if_expr$7$link1 = tmp_if_expr$6$link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$7$link1)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link2 == ((char *)NULL)))
            {
              if((signed int)opttype$link2 == SHORT)
              {
                optcontrol$link2 = optcontrol$link2 + 1;
                optArg$link2 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link2, optcurrent$link2);
            }

            break;
          }
          case 2:
          {
            if(optArg$link2 == ((char *)NULL) && 1 + optargind$link2 >= argc$link2)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link2, optcurrent$link2);

            if(optArg$link2 == ((char *)NULL))
            {
              optargind$link2 = optargind$link2 + 1;
              optArg$link2 = argv$link2[(signed long int)optargind$link2];
            }

          }
        }
        output = optArg$link2;
        goto check_next;
      }

      if((signed int)opttype$link2 == SHORT)
        tmp_if_expr$8$link2 = (signed int)optcurrent$link2[(signed long int)1] == 100 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$8$link2 = (_Bool)0;
      if(tmp_if_expr$8$link2)
        tmp_if_expr$13$link2 = (_Bool)1;

      else
      {
        if((signed int)opttype$link2 == LONG)
        {
          return_value_strlen$9$link2=strlen("directory");
          tmp_if_expr$10$link2 = return_value_strlen$9$link2 == optlength$link2 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$10$link2 = (_Bool)0;
        if(tmp_if_expr$10$link2)
        {
          return_value_strncmp$11$link2=strncmp(optcurrent$link2 + (signed long int)2, "directory", optlength$link2 - (unsigned long int)2);
          tmp_if_expr$12$link2 = return_value_strncmp$11$link2 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$12$link2 = (_Bool)0;
        tmp_if_expr$13$link2 = tmp_if_expr$12$link2 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$13$link2)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link2 == ((char *)NULL)))
            {
              if((signed int)opttype$link2 == SHORT)
              {
                optcontrol$link2 = optcontrol$link2 + 1;
                optArg$link2 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link2, optcurrent$link2);
            }

            break;
          }
          case 2:
          {
            if(optArg$link2 == ((char *)NULL) && 1 + optargind$link2 >= argc$link2)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link2, optcurrent$link2);

            if(optArg$link2 == ((char *)NULL))
            {
              optargind$link2 = optargind$link2 + 1;
              optArg$link2 = argv$link2[(signed long int)optargind$link2];
            }

          }
        }
        directory = optArg$link2;
        goto check_next;
      }

      if((signed int)opttype$link2 == SHORT)
        tmp_if_expr$14$link1 = (signed int)optcurrent$link2[(signed long int)1] == 104 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$14$link1 = (_Bool)0;
      if(tmp_if_expr$14$link1)
        tmp_if_expr$19$link2 = (_Bool)1;

      else
      {
        if((signed int)opttype$link2 == LONG)
        {
          return_value_strlen$15$link1=strlen("help");
          tmp_if_expr$16$link1 = return_value_strlen$15$link1 == optlength$link2 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$16$link1 = (_Bool)0;
        if(tmp_if_expr$16$link1)
        {
          return_value_strncmp$17$link1=strncmp(optcurrent$link2 + (signed long int)2, "help", optlength$link2 - (unsigned long int)2);
          tmp_if_expr$18$link1 = return_value_strncmp$17$link1 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$18$link1 = (_Bool)0;
        tmp_if_expr$19$link2 = tmp_if_expr$18$link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$19$link2)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link2 == ((char *)NULL)))
            {
              if((signed int)opttype$link2 == SHORT)
              {
                optcontrol$link2 = optcontrol$link2 + 1;
                optArg$link2 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link2, optcurrent$link2);
            }

            break;
          }
          case 2:
          {
            if(optArg$link2 == ((char *)NULL) && 1 + optargind$link2 >= argc$link2)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link2, optcurrent$link2);

            if(optArg$link2 == ((char *)NULL))
            {
              optargind$link2 = optargind$link2 + 1;
              optArg$link2 = argv$link2[(signed long int)optargind$link2];
            }

          }
        }
        printUsage$link2();
        goto check_next;
      }

      if((signed int)opttype$link2 == SHORT)
        tmp_if_expr$20$link1 = (signed int)optcurrent$link2[(signed long int)1] == 86 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$20$link1 = (_Bool)0;
      if(tmp_if_expr$20$link1)
        tmp_if_expr$25$link1 = (_Bool)1;

      else
      {
        if((signed int)opttype$link2 == LONG)
        {
          return_value_strlen$21$link1=strlen("version");
          tmp_if_expr$22$link2 = return_value_strlen$21$link1 == optlength$link2 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$22$link2 = (_Bool)0;
        if(tmp_if_expr$22$link2)
        {
          return_value_strncmp$23$link1=strncmp(optcurrent$link2 + (signed long int)2, "version", optlength$link2 - (unsigned long int)2);
          tmp_if_expr$24$link1 = return_value_strncmp$23$link1 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$24$link1 = (_Bool)0;
        tmp_if_expr$25$link1 = tmp_if_expr$24$link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$25$link1)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link2 == ((char *)NULL)))
            {
              if((signed int)opttype$link2 == SHORT)
              {
                optcontrol$link2 = optcontrol$link2 + 1;
                optArg$link2 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link2, optcurrent$link2);
            }

            break;
          }
          case 2:
          {
            if(optArg$link2 == ((char *)NULL) && 1 + optargind$link2 >= argc$link2)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link2, optcurrent$link2);

            if(optArg$link2 == ((char *)NULL))
            {
              optargind$link2 = optargind$link2 + 1;
              optArg$link2 = argv$link2[(signed long int)optargind$link2];
            }

          }
        }
        fputs("tdrerecord 2.2\nCopyright (C) 2010,2013 G.P. Halkes\nLicensed under the GNU General Public License version 3\n", stdout);
        exit(0);
        goto check_next;
      }

      if((signed int)opttype$link2 == SHORT)
        tmp_if_expr$26 = (signed int)optcurrent$link2[(signed long int)1] == 108 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$26 = (_Bool)0;
      if(tmp_if_expr$26)
        tmp_if_expr$31$link1 = (_Bool)1;

      else
      {
        if((signed int)opttype$link2 == LONG)
        {
          return_value_strlen$27$link1=strlen("no-strip-location-reports");
          tmp_if_expr$28 = return_value_strlen$27$link1 == optlength$link2 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$28 = (_Bool)0;
        if(tmp_if_expr$28)
        {
          return_value_strncmp$29=strncmp(optcurrent$link2 + (signed long int)2, "no-strip-location-reports", optlength$link2 - (unsigned long int)2);
          tmp_if_expr$30 = return_value_strncmp$29 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$30 = (_Bool)0;
        tmp_if_expr$31$link1 = tmp_if_expr$30 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$31$link1)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link2 == ((char *)NULL)))
            {
              if((signed int)opttype$link2 == SHORT)
              {
                optcontrol$link2 = optcontrol$link2 + 1;
                optArg$link2 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link2, optcurrent$link2);
            }

            break;
          }
          case 2:
          {
            if(optArg$link2 == ((char *)NULL) && 1 + optargind$link2 >= argc$link2)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link2, optcurrent$link2);

            if(optArg$link2 == ((char *)NULL))
            {
              optargind$link2 = optargind$link2 + 1;
              optArg$link2 = argv$link2[(signed long int)optargind$link2];
            }

          }
        }
        strip_location_reports = (enum anonymous$10)td_false;
        goto check_next;
      }

      if((signed int)opttype$link2 == LONG)
      {
        return_value_strlen$33=strlen("");
        if(return_value_strlen$33 == optlength$link2 + 18446744073709551614ul)
        {
          return_value_strncmp$32$link1=strncmp(optcurrent$link2 + (signed long int)2, "", optlength$link2 - (unsigned long int)2);
          if(return_value_strncmp$32$link1 == 0)
          {
            switch(0)
            {
              case 0:
              {
                if(!(optArg$link2 == ((char *)NULL)))
                {
                  if((signed int)opttype$link2 == SHORT)
                  {
                    optcontrol$link2 = optcontrol$link2 + 1;
                    optArg$link2 = (char *)(void *)0;
                  }

                  else
                    fatal("Option %.*s does not take an argument\n", (signed int)optlength$link2, optcurrent$link2);
                }

                break;
              }
              case 2:
              {
                if(optArg$link2 == ((char *)NULL) && 1 + optargind$link2 >= argc$link2)
                  fatal("Option %.*s requires an argument\n", (signed int)optlength$link2, optcurrent$link2);

                if(optArg$link2 == ((char *)NULL))
                {
                  optargind$link2 = optargind$link2 + 1;
                  optArg$link2 = argv$link2[(signed long int)optargind$link2];
                }

              }
            }
            do
              optnomore$link2 = 1;
            while((_Bool)0);
            goto check_next;
          }

        }

      }

      fatal("Unknown option %.*s\n", (signed int)optlength$link2, optcurrent$link2);
    }

    else
    {
      if(!(input$link2 == ((char *)NULL)))
        fatal("More than one replay specified\n");

      input$link2 = optcurrent$link2;

    check_next:
      ;
      if((signed int)optcontrol$link2 == 1 || (signed int)optcontrol$link2 == 3)
      {
        if((signed int)optcontrol$link2 == 1)
        {
          optcurrent$link2 = optcurrent$link2;
          optptr$link2 = optcurrent$link2;
        }

        optcontrol$link2 = (char)2;
        optcurrent$link2 = optcurrent$link2 + 1l;
        optcurrent$link2[(signed long int)0] = (char)45;
        optArg$link2 = (signed int)optcurrent$link2[(signed long int)2] != 0 ? optcurrent$link2 + (signed long int)2 : (char *)(void *)0;
        goto next_opt;
      }

      else
        if((signed int)optcontrol$link2 == 2)
          (void)optptr$link2;

    }
  }

stop_opt_parse:
  ;
  if(input$link2 == ((char *)NULL))
    fatal("No replay specified\n");

  if(!(directory == ((const char *)NULL)) && !(output == ((char *)NULL)))
    fatal("Can only specify one of --output and --directory\n");

}

// parse_options$link3
// file src/compare.c line 68
static void parse_options$link3(signed int argc$link3, char **argv$link3)
{
  char *optArg$link3;
  signed int optargind$link3;
  signed int optnomore$link3 = 0;
  optargind$link3 = 1;
  _Bool tmp_if_expr$1$link3;
  _Bool tmp_if_expr$2$link2;
  _Bool tmp_if_expr$7$link2;
  _Bool tmp_if_expr$4$link2;
  unsigned long int return_value_strlen$3$link2;
  _Bool tmp_if_expr$6$link2;
  signed int return_value_strncmp$5$link2;
  _Bool tmp_if_expr$8$link3;
  _Bool tmp_if_expr$13$link3;
  _Bool tmp_if_expr$10$link3;
  unsigned long int return_value_strlen$9$link3;
  _Bool tmp_if_expr$12$link3;
  signed int return_value_strncmp$11$link3;
  _Bool tmp_if_expr$14$link2;
  _Bool tmp_if_expr$19$link3;
  _Bool tmp_if_expr$16$link2;
  unsigned long int return_value_strlen$15$link2;
  _Bool tmp_if_expr$18$link2;
  signed int return_value_strncmp$17$link2;
  _Bool tmp_if_expr$20$link2;
  _Bool tmp_if_expr$25$link2;
  _Bool tmp_if_expr$22$link3;
  unsigned long int return_value_strlen$21$link2;
  _Bool tmp_if_expr$24$link2;
  signed int return_value_strncmp$23$link2;
  _Bool tmp_if_expr$26$link1;
  _Bool tmp_if_expr$31$link2;
  _Bool tmp_if_expr$28$link1;
  unsigned long int return_value_strlen$27$link2;
  _Bool tmp_if_expr$30$link1;
  signed int return_value_strncmp$29$link1;
  _Bool tmp_if_expr$32;
  _Bool tmp_if_expr$37$link1;
  _Bool tmp_if_expr$34$link1;
  unsigned long int return_value_strlen$33$link1;
  _Bool tmp_if_expr$36;
  signed int return_value_strncmp$35;
  _Bool tmp_if_expr$40$link1;
  _Bool tmp_if_expr$45$link1;
  _Bool tmp_if_expr$42;
  unsigned long int return_value_strlen$41;
  _Bool tmp_if_expr$44;
  signed int return_value_strncmp$43;
  _Bool tmp_if_expr$48;
  _Bool tmp_if_expr$53$link1;
  _Bool tmp_if_expr$50;
  unsigned long int return_value_strlen$49;
  _Bool tmp_if_expr$52$link1;
  signed int return_value_strncmp$51;
  _Bool tmp_if_expr$55$link1;
  _Bool tmp_if_expr$60;
  _Bool tmp_if_expr$57$link1;
  unsigned long int return_value_strlen$56;
  _Bool tmp_if_expr$59$link1;
  signed int return_value_strncmp$58;
  _Bool tmp_if_expr$61$link1;
  _Bool tmp_if_expr$66;
  _Bool tmp_if_expr$63$link1;
  unsigned long int return_value_strlen$62;
  _Bool tmp_if_expr$65;
  signed int return_value_strncmp$64;
  unsigned long int return_value_strlen$68$link1;
  signed int return_value_strncmp$67;
  for( ; !(optargind$link3 >= argc$link3); optargind$link3 = optargind$link3 + 1)
  {
    char optcontrol$link3 = (char)0;
    char *optcurrent$link3;
    char *optptr$link3;
    optcurrent$link3 = argv$link3[(signed long int)optargind$link3];
    if(optnomore$link3 == 0 && (signed int)*optcurrent$link3 == 45)
    {
      unsigned long int optlength$link3;
      enum anonymous$9 opttype$link3;
      if((signed int)optcurrent$link3[1l] == 45)
      {
        optArg$link3=strchr(optcurrent$link3, 61);
        if(optArg$link3 == ((char *)NULL))
          optlength$link3=strlen(optcurrent$link3);

        else
        {
          optlength$link3 = (unsigned long int)(optArg$link3 - optcurrent$link3);
          optArg$link3 = optArg$link3 + 1l;
        }
        opttype$link3 = (enum anonymous$9)LONG;
      }

      else
      {
        optlength$link3 = (unsigned long int)2;
        if(!((signed int)optcurrent$link3[1l] == 0))
          tmp_if_expr$1$link3 = (signed int)optcurrent$link3[(signed long int)2] != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1$link3 = (_Bool)0;
        if(tmp_if_expr$1$link3)
          optArg$link3 = optcurrent$link3 + (signed long int)2;

        else
          optArg$link3 = (char *)(void *)0;
        opttype$link3 = (enum anonymous$9)SHORT;
      }
      if(optlength$link3 >= 2147483648ul)
        optlength$link3 = (unsigned long int)0x7fffffff;


    next_opt:
      ;
      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$2$link2 = (signed int)optcurrent$link3[(signed long int)1] == 104 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$2$link2 = (_Bool)0;
      if(tmp_if_expr$2$link2)
        tmp_if_expr$7$link2 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$3$link2=strlen("help");
          tmp_if_expr$4$link2 = return_value_strlen$3$link2 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$4$link2 = (_Bool)0;
        if(tmp_if_expr$4$link2)
        {
          return_value_strncmp$5$link2=strncmp(optcurrent$link3 + (signed long int)2, "help", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$6$link2 = return_value_strncmp$5$link2 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6$link2 = (_Bool)0;
        tmp_if_expr$7$link2 = tmp_if_expr$6$link2 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$7$link2)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        printUsage$link3();
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$8$link3 = (signed int)optcurrent$link3[(signed long int)1] == 86 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$8$link3 = (_Bool)0;
      if(tmp_if_expr$8$link3)
        tmp_if_expr$13$link3 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$9$link3=strlen("version");
          tmp_if_expr$10$link3 = return_value_strlen$9$link3 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$10$link3 = (_Bool)0;
        if(tmp_if_expr$10$link3)
        {
          return_value_strncmp$11$link3=strncmp(optcurrent$link3 + (signed long int)2, "version", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$12$link3 = return_value_strncmp$11$link3 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$12$link3 = (_Bool)0;
        tmp_if_expr$13$link3 = tmp_if_expr$12$link3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$13$link3)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        fputs("tdcompare 2.2\nCopyright (C) 2013 G.P. Halkes\nLicensed under the GNU General Public License version 3\n", stdout);
        exit(0);
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$14$link2 = (signed int)optcurrent$link3[(signed long int)1] == 118 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$14$link2 = (_Bool)0;
      if(tmp_if_expr$14$link2)
        tmp_if_expr$19$link3 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$15$link2=strlen("visual-compare");
          tmp_if_expr$16$link2 = return_value_strlen$15$link2 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$16$link2 = (_Bool)0;
        if(tmp_if_expr$16$link2)
        {
          return_value_strncmp$17$link2=strncmp(optcurrent$link3 + (signed long int)2, "visual-compare", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$18$link2 = return_value_strncmp$17$link2 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$18$link2 = (_Bool)0;
        tmp_if_expr$19$link3 = tmp_if_expr$18$link2 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$19$link3)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        visual_compare$link1 = (enum anonymous$10)td_true;
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$20$link2 = (signed int)optcurrent$link3[(signed long int)1] == 68 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$20$link2 = (_Bool)0;
      if(tmp_if_expr$20$link2)
        tmp_if_expr$25$link2 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$21$link2=strlen("describe");
          tmp_if_expr$22$link3 = return_value_strlen$21$link2 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$22$link3 = (_Bool)0;
        if(tmp_if_expr$22$link3)
        {
          return_value_strncmp$23$link2=strncmp(optcurrent$link3 + (signed long int)2, "describe", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$24$link2 = return_value_strncmp$23$link2 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$24$link2 = (_Bool)0;
        tmp_if_expr$25$link2 = tmp_if_expr$24$link2 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$25$link2)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        describe$link1 = (enum anonymous$10)td_true;
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$26$link1 = (signed int)optcurrent$link3[(signed long int)1] == 112 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$26$link1 = (_Bool)0;
      if(tmp_if_expr$26$link1)
        tmp_if_expr$31$link2 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$27$link2=strlen("picture");
          tmp_if_expr$28$link1 = return_value_strlen$27$link2 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$28$link1 = (_Bool)0;
        if(tmp_if_expr$28$link1)
        {
          return_value_strncmp$29$link1=strncmp(optcurrent$link3 + (signed long int)2, "picture", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$30$link1 = return_value_strncmp$29$link1 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$30$link1 = (_Bool)0;
        tmp_if_expr$31$link2 = tmp_if_expr$30$link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$31$link2)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        picture_name$link1 = optArg$link3;
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$32 = (signed int)optcurrent$link3[(signed long int)1] == 102 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$32 = (_Bool)0;
      if(tmp_if_expr$32)
        tmp_if_expr$37$link1 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$33$link1=strlen("font");
          tmp_if_expr$34$link1 = return_value_strlen$33$link1 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$34$link1 = (_Bool)0;
        if(tmp_if_expr$34$link1)
        {
          return_value_strncmp$35=strncmp(optcurrent$link3 + (signed long int)2, "font", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$36 = return_value_strncmp$35 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$36 = (_Bool)0;
        tmp_if_expr$37$link1 = tmp_if_expr$36 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$37$link1)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        option_font = optArg$link3;
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$40$link1 = (signed int)optcurrent$link3[(signed long int)1] == 87 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$40$link1 = (_Bool)0;
      if(tmp_if_expr$40$link1)
        tmp_if_expr$45$link1 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$41=strlen("cell-width");
          tmp_if_expr$42 = return_value_strlen$41 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$42 = (_Bool)0;
        if(tmp_if_expr$42)
        {
          return_value_strncmp$43=strncmp(optcurrent$link3 + (signed long int)2, "cell-width", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$44 = return_value_strncmp$43 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$44 = (_Bool)0;
        tmp_if_expr$45$link1 = tmp_if_expr$44 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$45$link1)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        do
        {
          char *endptr;
          signed long int value;
          signed int *return_value___errno_location$38;
          return_value___errno_location$38=__errno_location();
          *return_value___errno_location$38 = 0;
          value=strtol(optArg$link3, &endptr, 10);
          if(!((signed int)*endptr == 0))
            fatal("Garbage after value for %.*s option\n", (signed int)optlength$link3, optcurrent$link3);

          signed int *return_value___errno_location$39;
          return_value___errno_location$39=__errno_location();
          if(value >= 17l || !(*return_value___errno_location$39 == 0) || !(value >= 6l))
            fatal("Value for %.*s option (%ld) is out of range\n", (signed int)optlength$link3, optcurrent$link3, value);

          cell_width = (signed int)value;
        }
        while((_Bool)0);
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$48 = (signed int)optcurrent$link3[(signed long int)1] == 72 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$48 = (_Bool)0;
      if(tmp_if_expr$48)
        tmp_if_expr$53$link1 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$49=strlen("cell-heigth");
          tmp_if_expr$50 = return_value_strlen$49 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$50 = (_Bool)0;
        if(tmp_if_expr$50)
        {
          return_value_strncmp$51=strncmp(optcurrent$link3 + (signed long int)2, "cell-heigth", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$52$link1 = return_value_strncmp$51 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$52$link1 = (_Bool)0;
        tmp_if_expr$53$link1 = tmp_if_expr$52$link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$53$link1)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        do
        {
          char *parse_options$$1$$1$$1$$1$$10$$2$$1$$endptr;
          signed long int parse_options$$1$$1$$1$$1$$10$$2$$1$$value;
          signed int *return_value___errno_location$46;
          return_value___errno_location$46=__errno_location();
          *return_value___errno_location$46 = 0;
          parse_options$$1$$1$$1$$1$$10$$2$$1$$value=strtol(optArg$link3, &parse_options$$1$$1$$1$$1$$10$$2$$1$$endptr, 10);
          if(!((signed int)*parse_options$$1$$1$$1$$1$$10$$2$$1$$endptr == 0))
            fatal("Garbage after value for %.*s option\n", (signed int)optlength$link3, optcurrent$link3);

          signed int *return_value___errno_location$47;
          return_value___errno_location$47=__errno_location();
          if(parse_options$$1$$1$$1$$1$$10$$2$$1$$value >= 25l || !(*return_value___errno_location$47 == 0) || !(parse_options$$1$$1$$1$$1$$10$$2$$1$$value >= 6l))
            fatal("Value for %.*s option (%ld) is out of range\n", (signed int)optlength$link3, optcurrent$link3, parse_options$$1$$1$$1$$1$$10$$2$$1$$value);

          cell_width = (signed int)parse_options$$1$$1$$1$$1$$10$$2$$1$$value;
        }
        while((_Bool)0);
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$55$link1 = (signed int)optcurrent$link3[(signed long int)1] == 80 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$55$link1 = (_Bool)0;
      if(tmp_if_expr$55$link1)
        tmp_if_expr$60 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$56=strlen("picture-series");
          tmp_if_expr$57$link1 = return_value_strlen$56 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$57$link1 = (_Bool)0;
        if(tmp_if_expr$57$link1)
        {
          return_value_strncmp$58=strncmp(optcurrent$link3 + (signed long int)2, "picture-series", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$59$link1 = return_value_strncmp$58 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$59$link1 = (_Bool)0;
        tmp_if_expr$60 = tmp_if_expr$59$link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$60)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        enum anonymous$10 return_value_check_fmt$54;
        return_value_check_fmt$54=check_fmt(optArg$link3);
        if(return_value_check_fmt$54 == /*enum*/td_false)
          fatal("%.*s argument must have exactly one d-type printf conversion\n", (signed int)optlength$link3, optcurrent$link3);

        picture_series = optArg$link3;
        goto check_next;
      }

      if((signed int)opttype$link3 == SHORT)
        tmp_if_expr$61$link1 = (signed int)optcurrent$link3[(signed long int)1] == 115 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$61$link1 = (_Bool)0;
      if(tmp_if_expr$61$link1)
        tmp_if_expr$66 = (_Bool)1;

      else
      {
        if((signed int)opttype$link3 == LONG)
        {
          return_value_strlen$62=strlen("stop-on-difference");
          tmp_if_expr$63$link1 = return_value_strlen$62 == optlength$link3 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$63$link1 = (_Bool)0;
        if(tmp_if_expr$63$link1)
        {
          return_value_strncmp$64=strncmp(optcurrent$link3 + (signed long int)2, "stop-on-difference", optlength$link3 - (unsigned long int)2);
          tmp_if_expr$65 = return_value_strncmp$64 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$65 = (_Bool)0;
        tmp_if_expr$66 = tmp_if_expr$65 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$66)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link3 == ((char *)NULL)))
            {
              if((signed int)opttype$link3 == SHORT)
              {
                optcontrol$link3 = optcontrol$link3 + 1;
                optArg$link3 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
            }

            break;
          }
          case 2:
          {
            if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

            if(optArg$link3 == ((char *)NULL))
            {
              optargind$link3 = optargind$link3 + 1;
              optArg$link3 = argv$link3[(signed long int)optargind$link3];
            }

          }
        }
        stop_on_difference = (enum anonymous$10)td_true;
        goto check_next;
      }

      if((signed int)opttype$link3 == LONG)
      {
        return_value_strlen$68$link1=strlen("");
        if(return_value_strlen$68$link1 == optlength$link3 + 18446744073709551614ul)
        {
          return_value_strncmp$67=strncmp(optcurrent$link3 + (signed long int)2, "", optlength$link3 - (unsigned long int)2);
          if(return_value_strncmp$67 == 0)
          {
            switch(0)
            {
              case 0:
              {
                if(!(optArg$link3 == ((char *)NULL)))
                {
                  if((signed int)opttype$link3 == SHORT)
                  {
                    optcontrol$link3 = optcontrol$link3 + 1;
                    optArg$link3 = (char *)(void *)0;
                  }

                  else
                    fatal("Option %.*s does not take an argument\n", (signed int)optlength$link3, optcurrent$link3);
                }

                break;
              }
              case 2:
              {
                if(optArg$link3 == ((char *)NULL) && 1 + optargind$link3 >= argc$link3)
                  fatal("Option %.*s requires an argument\n", (signed int)optlength$link3, optcurrent$link3);

                if(optArg$link3 == ((char *)NULL))
                {
                  optargind$link3 = optargind$link3 + 1;
                  optArg$link3 = argv$link3[(signed long int)optargind$link3];
                }

              }
            }
            do
              optnomore$link3 = 1;
            while((_Bool)0);
            goto check_next;
          }

        }

      }

      fatal("Unknown option %.*s\n", (signed int)optlength$link3, optcurrent$link3);
    }

    else
    {
      if(!(inputA == ((const char *)NULL)))
      {
        if(!(inputB == ((const char *)NULL)))
          fatal("More than two recordings specified\n");

        inputB = optcurrent$link3;
      }

      else
        inputA = optcurrent$link3;

    check_next:
      ;
      if((signed int)optcontrol$link3 == 1 || (signed int)optcontrol$link3 == 3)
      {
        if((signed int)optcontrol$link3 == 1)
        {
          optcurrent$link3 = optcurrent$link3;
          optptr$link3 = optcurrent$link3;
        }

        optcontrol$link3 = (char)2;
        optcurrent$link3 = optcurrent$link3 + 1l;
        optcurrent$link3[(signed long int)0] = (char)45;
        optArg$link3 = (signed int)optcurrent$link3[(signed long int)2] != 0 ? optcurrent$link3 + (signed long int)2 : (char *)(void *)0;
        goto next_opt;
      }

      else
        if((signed int)optcontrol$link3 == 2)
          (void)optptr$link3;

    }
  }

stop_opt_parse:
  ;
  if(inputA == ((const char *)NULL) || inputB == ((const char *)NULL))
    fatal("Two recordings should be specified\n");

  if(picture_series == ((const char *)NULL))
    stop_on_difference = (enum anonymous$10)td_true;

}

// parse_options$link4
// file src/record.c line 53
static void parse_options$link4(signed int argc$link4, char **argv$link4)
{
  char *optArg$link4;
  signed int optargind$link4;
  signed int optnomore$link4 = 0;
  optargind$link4 = 1;
  _Bool tmp_if_expr$1$link4;
  _Bool tmp_if_expr$2$link3;
  _Bool tmp_if_expr$7$link3;
  _Bool tmp_if_expr$4$link3;
  unsigned long int return_value_strlen$3$link3;
  _Bool tmp_if_expr$6$link3;
  signed int return_value_strncmp$5$link3;
  _Bool tmp_if_expr$8$link4;
  _Bool tmp_if_expr$13$link4;
  _Bool tmp_if_expr$10$link4;
  unsigned long int return_value_strlen$9$link4;
  _Bool tmp_if_expr$12$link4;
  signed int return_value_strncmp$11$link4;
  _Bool tmp_if_expr$14$link3;
  _Bool tmp_if_expr$19$link4;
  _Bool tmp_if_expr$16$link3;
  unsigned long int return_value_strlen$15$link3;
  _Bool tmp_if_expr$18$link3;
  signed int return_value_strncmp$17$link3;
  _Bool tmp_if_expr$20$link3;
  _Bool tmp_if_expr$25$link3;
  _Bool tmp_if_expr$22$link4;
  unsigned long int return_value_strlen$21$link3;
  _Bool tmp_if_expr$24$link3;
  signed int return_value_strncmp$23$link3;
  _Bool tmp_if_expr$26$link2;
  _Bool tmp_if_expr$31$link3;
  _Bool tmp_if_expr$28$link2;
  unsigned long int return_value_strlen$27$link3;
  _Bool tmp_if_expr$30$link2;
  signed int return_value_strncmp$29$link2;
  _Bool tmp_if_expr$32$link1;
  _Bool tmp_if_expr$37$link2;
  _Bool tmp_if_expr$34$link2;
  unsigned long int return_value_strlen$33$link2;
  _Bool tmp_if_expr$36$link1;
  signed int return_value_strncmp$35$link1;
  unsigned long int return_value_strlen$39;
  signed int return_value_strncmp$38$link1;
  for( ; !(optargind$link4 >= argc$link4); optargind$link4 = optargind$link4 + 1)
  {
    char optcontrol$link4 = (char)0;
    char *optcurrent$link4;
    char *optptr$link4;
    optcurrent$link4 = argv$link4[(signed long int)optargind$link4];
    if(optnomore$link4 == 0 && (signed int)*optcurrent$link4 == 45)
    {
      unsigned long int optlength$link4;
      enum anonymous$9 opttype$link4;
      if((signed int)optcurrent$link4[1l] == 45)
      {
        optArg$link4=strchr(optcurrent$link4, 61);
        if(optArg$link4 == ((char *)NULL))
          optlength$link4=strlen(optcurrent$link4);

        else
        {
          optlength$link4 = (unsigned long int)(optArg$link4 - optcurrent$link4);
          optArg$link4 = optArg$link4 + 1l;
        }
        opttype$link4 = (enum anonymous$9)LONG;
      }

      else
      {
        optlength$link4 = (unsigned long int)2;
        if(!((signed int)optcurrent$link4[1l] == 0))
          tmp_if_expr$1$link4 = (signed int)optcurrent$link4[(signed long int)2] != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1$link4 = (_Bool)0;
        if(tmp_if_expr$1$link4)
          optArg$link4 = optcurrent$link4 + (signed long int)2;

        else
          optArg$link4 = (char *)(void *)0;
        opttype$link4 = (enum anonymous$9)SHORT;
      }
      if(optlength$link4 >= 2147483648ul)
        optlength$link4 = (unsigned long int)0x7fffffff;


    next_opt:
      ;
      if((signed int)opttype$link4 == SHORT)
        tmp_if_expr$2$link3 = (signed int)optcurrent$link4[(signed long int)1] == 100 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$2$link3 = (_Bool)0;
      if(tmp_if_expr$2$link3)
        tmp_if_expr$7$link3 = (_Bool)1;

      else
      {
        if((signed int)opttype$link4 == LONG)
        {
          return_value_strlen$3$link3=strlen("directory");
          tmp_if_expr$4$link3 = return_value_strlen$3$link3 == optlength$link4 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$4$link3 = (_Bool)0;
        if(tmp_if_expr$4$link3)
        {
          return_value_strncmp$5$link3=strncmp(optcurrent$link4 + (signed long int)2, "directory", optlength$link4 - (unsigned long int)2);
          tmp_if_expr$6$link3 = return_value_strncmp$5$link3 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6$link3 = (_Bool)0;
        tmp_if_expr$7$link3 = tmp_if_expr$6$link3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$7$link3)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link4 == ((char *)NULL)))
            {
              if((signed int)opttype$link4 == SHORT)
              {
                optcontrol$link4 = optcontrol$link4 + 1;
                optArg$link4 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link4, optcurrent$link4);
            }

            break;
          }
          case 2:
          {
            if(optArg$link4 == ((char *)NULL) && 1 + optargind$link4 >= argc$link4)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link4, optcurrent$link4);

            if(optArg$link4 == ((char *)NULL))
            {
              optargind$link4 = optargind$link4 + 1;
              optArg$link4 = argv$link4[(signed long int)optargind$link4];
            }

          }
        }
        directory$link1 = optArg$link4;
        goto check_next;
      }

      if((signed int)opttype$link4 == SHORT)
        tmp_if_expr$8$link4 = (signed int)optcurrent$link4[(signed long int)1] == 101 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$8$link4 = (_Bool)0;
      if(tmp_if_expr$8$link4)
        tmp_if_expr$13$link4 = (_Bool)1;

      else
      {
        if((signed int)opttype$link4 == LONG)
        {
          return_value_strlen$9$link4=strlen("environment");
          tmp_if_expr$10$link4 = return_value_strlen$9$link4 == optlength$link4 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$10$link4 = (_Bool)0;
        if(tmp_if_expr$10$link4)
        {
          return_value_strncmp$11$link4=strncmp(optcurrent$link4 + (signed long int)2, "environment", optlength$link4 - (unsigned long int)2);
          tmp_if_expr$12$link4 = return_value_strncmp$11$link4 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$12$link4 = (_Bool)0;
        tmp_if_expr$13$link4 = tmp_if_expr$12$link4 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$13$link4)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link4 == ((char *)NULL)))
            {
              if((signed int)opttype$link4 == SHORT)
              {
                optcontrol$link4 = optcontrol$link4 + 1;
                optArg$link4 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link4, optcurrent$link4);
            }

            break;
          }
          case 2:
          {
            if(optArg$link4 == ((char *)NULL) && 1 + optargind$link4 >= argc$link4)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link4, optcurrent$link4);

            if(optArg$link4 == ((char *)NULL))
            {
              optargind$link4 = optargind$link4 + 1;
              optArg$link4 = argv$link4[(signed long int)optargind$link4];
            }

          }
        }
        environment = optArg$link4;
        goto check_next;
      }

      if((signed int)opttype$link4 == SHORT)
        tmp_if_expr$14$link3 = (signed int)optcurrent$link4[(signed long int)1] == 111 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$14$link3 = (_Bool)0;
      if(tmp_if_expr$14$link3)
        tmp_if_expr$19$link4 = (_Bool)1;

      else
      {
        if((signed int)opttype$link4 == LONG)
        {
          return_value_strlen$15$link3=strlen("output");
          tmp_if_expr$16$link3 = return_value_strlen$15$link3 == optlength$link4 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$16$link3 = (_Bool)0;
        if(tmp_if_expr$16$link3)
        {
          return_value_strncmp$17$link3=strncmp(optcurrent$link4 + (signed long int)2, "output", optlength$link4 - (unsigned long int)2);
          tmp_if_expr$18$link3 = return_value_strncmp$17$link3 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$18$link3 = (_Bool)0;
        tmp_if_expr$19$link4 = tmp_if_expr$18$link3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$19$link4)
      {
        switch(2)
        {
          case 0:
          {
            if(!(optArg$link4 == ((char *)NULL)))
            {
              if((signed int)opttype$link4 == SHORT)
              {
                optcontrol$link4 = optcontrol$link4 + 1;
                optArg$link4 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link4, optcurrent$link4);
            }

            break;
          }
          case 2:
          {
            if(optArg$link4 == ((char *)NULL) && 1 + optargind$link4 >= argc$link4)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link4, optcurrent$link4);

            if(optArg$link4 == ((char *)NULL))
            {
              optargind$link4 = optargind$link4 + 1;
              optArg$link4 = argv$link4[(signed long int)optargind$link4];
            }

          }
        }
        output$link1 = optArg$link4;
        goto check_next;
      }

      if((signed int)opttype$link4 == SHORT)
        tmp_if_expr$20$link3 = (signed int)optcurrent$link4[(signed long int)1] == 104 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$20$link3 = (_Bool)0;
      if(tmp_if_expr$20$link3)
        tmp_if_expr$25$link3 = (_Bool)1;

      else
      {
        if((signed int)opttype$link4 == LONG)
        {
          return_value_strlen$21$link3=strlen("help");
          tmp_if_expr$22$link4 = return_value_strlen$21$link3 == optlength$link4 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$22$link4 = (_Bool)0;
        if(tmp_if_expr$22$link4)
        {
          return_value_strncmp$23$link3=strncmp(optcurrent$link4 + (signed long int)2, "help", optlength$link4 - (unsigned long int)2);
          tmp_if_expr$24$link3 = return_value_strncmp$23$link3 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$24$link3 = (_Bool)0;
        tmp_if_expr$25$link3 = tmp_if_expr$24$link3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$25$link3)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link4 == ((char *)NULL)))
            {
              if((signed int)opttype$link4 == SHORT)
              {
                optcontrol$link4 = optcontrol$link4 + 1;
                optArg$link4 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link4, optcurrent$link4);
            }

            break;
          }
          case 2:
          {
            if(optArg$link4 == ((char *)NULL) && 1 + optargind$link4 >= argc$link4)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link4, optcurrent$link4);

            if(optArg$link4 == ((char *)NULL))
            {
              optargind$link4 = optargind$link4 + 1;
              optArg$link4 = argv$link4[(signed long int)optargind$link4];
            }

          }
        }
        printUsage$link4();
        goto check_next;
      }

      if((signed int)opttype$link4 == SHORT)
        tmp_if_expr$26$link2 = (signed int)optcurrent$link4[(signed long int)1] == 86 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$26$link2 = (_Bool)0;
      if(tmp_if_expr$26$link2)
        tmp_if_expr$31$link3 = (_Bool)1;

      else
      {
        if((signed int)opttype$link4 == LONG)
        {
          return_value_strlen$27$link3=strlen("version");
          tmp_if_expr$28$link2 = return_value_strlen$27$link3 == optlength$link4 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$28$link2 = (_Bool)0;
        if(tmp_if_expr$28$link2)
        {
          return_value_strncmp$29$link2=strncmp(optcurrent$link4 + (signed long int)2, "version", optlength$link4 - (unsigned long int)2);
          tmp_if_expr$30$link2 = return_value_strncmp$29$link2 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$30$link2 = (_Bool)0;
        tmp_if_expr$31$link3 = tmp_if_expr$30$link2 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$31$link3)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link4 == ((char *)NULL)))
            {
              if((signed int)opttype$link4 == SHORT)
              {
                optcontrol$link4 = optcontrol$link4 + 1;
                optArg$link4 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link4, optcurrent$link4);
            }

            break;
          }
          case 2:
          {
            if(optArg$link4 == ((char *)NULL) && 1 + optargind$link4 >= argc$link4)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link4, optcurrent$link4);

            if(optArg$link4 == ((char *)NULL))
            {
              optargind$link4 = optargind$link4 + 1;
              optArg$link4 = argv$link4[(signed long int)optargind$link4];
            }

          }
        }
        fputs("tdrecord 2.2\nCopyright (C) 2010,2012 G.P. Halkes\nLicensed under the GNU General Public License version 3\n", stdout);
        exit(0);
        goto check_next;
      }

      if((signed int)opttype$link4 == SHORT)
        tmp_if_expr$32$link1 = (signed int)optcurrent$link4[(signed long int)1] == 88 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$32$link1 = (_Bool)0;
      if(tmp_if_expr$32$link1)
        tmp_if_expr$37$link2 = (_Bool)1;

      else
      {
        if((signed int)opttype$link4 == LONG)
        {
          return_value_strlen$33$link2=strlen("allow-x11");
          tmp_if_expr$34$link2 = return_value_strlen$33$link2 == optlength$link4 - (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$34$link2 = (_Bool)0;
        if(tmp_if_expr$34$link2)
        {
          return_value_strncmp$35$link1=strncmp(optcurrent$link4 + (signed long int)2, "allow-x11", optlength$link4 - (unsigned long int)2);
          tmp_if_expr$36$link1 = return_value_strncmp$35$link1 == 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$36$link1 = (_Bool)0;
        tmp_if_expr$37$link2 = tmp_if_expr$36$link1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$37$link2)
      {
        switch(0)
        {
          case 0:
          {
            if(!(optArg$link4 == ((char *)NULL)))
            {
              if((signed int)opttype$link4 == SHORT)
              {
                optcontrol$link4 = optcontrol$link4 + 1;
                optArg$link4 = (char *)(void *)0;
              }

              else
                fatal("Option %.*s does not take an argument\n", (signed int)optlength$link4, optcurrent$link4);
            }

            break;
          }
          case 2:
          {
            if(optArg$link4 == ((char *)NULL) && 1 + optargind$link4 >= argc$link4)
              fatal("Option %.*s requires an argument\n", (signed int)optlength$link4, optcurrent$link4);

            if(optArg$link4 == ((char *)NULL))
            {
              optargind$link4 = optargind$link4 + 1;
              optArg$link4 = argv$link4[(signed long int)optargind$link4];
            }

          }
        }
        allow_x11 = 1;
        goto check_next;
      }

      if((signed int)opttype$link4 == LONG)
      {
        return_value_strlen$39=strlen("");
        if(return_value_strlen$39 == optlength$link4 + 18446744073709551614ul)
        {
          return_value_strncmp$38$link1=strncmp(optcurrent$link4 + (signed long int)2, "", optlength$link4 - (unsigned long int)2);
          if(return_value_strncmp$38$link1 == 0)
          {
            switch(0)
            {
              case 0:
              {
                if(!(optArg$link4 == ((char *)NULL)))
                {
                  if((signed int)opttype$link4 == SHORT)
                  {
                    optcontrol$link4 = optcontrol$link4 + 1;
                    optArg$link4 = (char *)(void *)0;
                  }

                  else
                    fatal("Option %.*s does not take an argument\n", (signed int)optlength$link4, optcurrent$link4);
                }

                break;
              }
              case 2:
              {
                if(optArg$link4 == ((char *)NULL) && 1 + optargind$link4 >= argc$link4)
                  fatal("Option %.*s requires an argument\n", (signed int)optlength$link4, optcurrent$link4);

                if(optArg$link4 == ((char *)NULL))
                {
                  optargind$link4 = optargind$link4 + 1;
                  optArg$link4 = argv$link4[(signed long int)optargind$link4];
                }

              }
            }
            do
              optnomore$link4 = 1;
            while((_Bool)0);
            goto check_next;
          }

        }

      }

      fatal("Unknown option %.*s\n", (signed int)optlength$link4, optcurrent$link4);
    }

    else
    {
      do
        optnomore$link4 = 1;
      while((_Bool)0);
      if(!(prog_start_index >= 0))
        prog_start_index = optargind$link4;


    check_next:
      ;
      if((signed int)optcontrol$link4 == 1 || (signed int)optcontrol$link4 == 3)
      {
        if((signed int)optcontrol$link4 == 1)
        {
          optcurrent$link4 = optcurrent$link4;
          optptr$link4 = optcurrent$link4;
        }

        optcontrol$link4 = (char)2;
        optcurrent$link4 = optcurrent$link4 + 1l;
        optcurrent$link4[(signed long int)0] = (char)45;
        optArg$link4 = (signed int)optcurrent$link4[(signed long int)2] != 0 ? optcurrent$link4 + (signed long int)2 : (char *)(void *)0;
        goto next_opt;
      }

      else
        if((signed int)optcontrol$link4 == 2)
          (void)optptr$link4;

    }
  }

stop_opt_parse:
  ;
}

// parse_output_buffer
// file src/write_stringlist.c line 421
static void parse_output_buffer(struct anonymous$12 *win)
{
  signed int i;
  signed int j;
  signed int start_normal;
  signed int handled;
  start_normal = 0;
  i = 0;
  signed int return_value_win_get_paint_y$1;
  signed int return_value_win_get_paint_x$2;
  signed int return_value_win_get_paint_y$5;
  signed int return_value_win_get_height$6;
  signed int return_value_win_get_paint_y$3;
  signed int return_value_win_get_paint_x$4;
  for( ; !(i >= win->output_buffer.length); i = i + 1)
    if(!((signed int)win->output_buffer.data[(signed long int)i] >= 32))
    {
      if((signed int)win->output_buffer.data[(signed long int)i] >= 0)
      {
        if(!(i == start_normal))
          write_text(win, start_normal, i, (enum anonymous$10)td_true);

        if((signed int)win->output_buffer.data[(signed long int)i] == 27)
        {
          handled=handle_escape(win->output_buffer.data + (signed long int)i + (signed long int)1, win->output_buffer.length - i, win);
          if(handled == 0)
          {
            win->output_buffer.length = win->output_buffer.length - i;
            memmove((void *)win->output_buffer.data, (const void *)(win->output_buffer.data + (signed long int)i), (unsigned long int)win->output_buffer.length);
            goto __CPROVER_DUMP_L20;
          }

          i = i + handled;
        }

        else
        {
          j = 0;
          for( ; !(j >= 31); j = j + 1)
            if(!(terminfo_mappings[(signed long int)j].str == ((char *)NULL)))
            {
              if((signed int)terminfo_mappings[(signed long int)j].str[1l] == 0)
              {
                if(*terminfo_mappings[(signed long int)j].str == win->output_buffer.data[(signed long int)i])
                {
                  do_action(win, terminfo_mappings[(signed long int)j].action, terminfo_mappings[(signed long int)j].attr);
                  break;
                }

              }

            }

          if(j >= 31)
            switch((signed int)win->output_buffer.data[(signed long int)i])
            {
              case 8:
              {
                return_value_win_get_paint_y$1=win_get_paint_y(win);
                return_value_win_get_paint_x$2=win_get_paint_x(win);
                win_set_paint(win, return_value_win_get_paint_y$1, return_value_win_get_paint_x$2 - 1);
                break;
              }
              case 9:
              {
                do_action(win, (enum anonymous$16)ACTION_TAB, 0);
                break;
              }
              case 10:
              {
                return_value_win_get_paint_y$5=win_get_paint_y(win);
                return_value_win_get_height$6=win_get_height(win);
                if(return_value_win_get_paint_y$5 == return_value_win_get_height$6 + -1)
                  win_scroll(win);

                else
                {
                  return_value_win_get_paint_y$3=win_get_paint_y(win);
                  return_value_win_get_paint_x$4=win_get_paint_x(win);
                  win_set_paint(win, return_value_win_get_paint_y$3 + 1, return_value_win_get_paint_x$4);
                }
                break;
              }
              case 13:
              {
                do_action(win, (enum anonymous$16)ACTION_CR, 0);
                break;
              }
              default:
                ;
            }

        }
        start_normal = i + 1;
      }

    }

  if(!(start_normal == i))
  {
    signed int to_save;
    to_save=write_text(win, start_normal, win->output_buffer.length, (enum anonymous$10)td_false);
    memmove((void *)win->output_buffer.data, (const void *)((win->output_buffer.data + (signed long int)win->output_buffer.length) - (signed long int)to_save), (unsigned long int)to_save);
    win->output_buffer.length = to_save;
  }

  else
    win->output_buffer.length = 0;

__CPROVER_DUMP_L20:
  ;
}

// picture_writer_thead
// file src/picture_queue.c line 64
static void * picture_writer_thead(void *arg)
{
  struct picture_queue_t *tmp;
  (void)arg;
  pthread_mutex_lock(&picture_queue_lock);
  pthread_cond_signal(&picture_queue_cond);
  while((_Bool)1)
  {
    if(picture_queue_head == ((struct picture_queue_t *)NULL))
      pthread_cond_wait(&picture_queue_cond, &picture_queue_lock);

    tmp = picture_queue_head;
    if(!(picture_queue_head == ((struct picture_queue_t *)NULL)))
      picture_queue_head = picture_queue_head->next;

    pthread_mutex_unlock(&picture_queue_lock);
    if(!(tmp == ((struct picture_queue_t *)NULL)))
    {
      win_write_image(tmp->winA, tmp->winB, tmp->name);
      win_del(tmp->winA);
      win_del(tmp->winB);
      free((void *)tmp);
    }

    pthread_mutex_lock(&picture_queue_lock);
    if(!(finished == /*enum*/td_false) && picture_queue_head == ((struct picture_queue_t *)NULL))
      break;

  }
  pthread_mutex_unlock(&picture_queue_lock);
  return (void *)0;
}

// printUsage
// file src/replay.c line 104
static void printUsage(void)
{
  printf("Usage: tdreplay [OPTIONS] <recording>\n");
  printf("  -a<cmd>, --alert=<cmd>              Run <cmd> on error\n");
  printf("  -d, --display                       Show the output of the running program\n");
  printf("  -e<action>, --on-error=<action>     On error perform <action> (one of\n                                        interact, continue, abort)\n");
  printf("  -k<delay>, --key-delay=<delay>      Set key delay\n");
  printf("  -l<log>, --log=<log>                Save a log file to <log>\n");
  printf("  -R, --no-resize                     Do not try to resize the terminal\n");
  printf("  -v, --visual-compare                Check for visual equality\n");
  printf("  -D, --describe                      Print a description of the first visual difference found\n");
  printf("  -p<name>, --picture=<name>          Write a picture of the differences to <name>\n                                        (only valid with -v)\n");
  printf("  -f<font>, --font=<font>             Use <font> to show text in picture.\n");
  printf("  -W<width>, --cell-width=<width>     Use <width> as cell width in picture.\n");
  printf("  -H<height>, --cell-height=<height>  Use <height> as cell width in picture.\n");
  printf("  -V, --version                       Print version and copyright information\n");
  exit(0);
}

// printUsage$link1
// file src/view.c line 41
static void printUsage$link1(void)
{
  printf("Usage: tdview [OPTIONS] <recording>\n");
  printf("  -k<delay>, --key-delay=<delay>      Set key delay\n");
  printf("  -V, --version                       Print version and copyright information\n");
  exit(0);
}

// printUsage$link2
// file src/rerecord.c line 39
static void printUsage$link2(void)
{
  printf("Usage: tdrerecord [OPTIONS] <recording>\n");
  printf("  -d<dir>,--directory=<dir>           Save recording in directory <dir>\n");
  printf("  -o<file>,--output=<file>            Save recording as <file>\n");
  printf("  -V, --version                       Print version and copyright information\n");
  printf("  -l, --no-strip-location-reports     Don't strip the location reports from the\n                                        'send' strings\n");
  exit(0);
}

// printUsage$link3
// file src/compare.c line 46
static void printUsage$link3(void)
{
  printf("Usage: tdcompare [OPTIONS] <recording A> <recording B>\n");
  printf("  -v, --visual-compare                Check for visual equality\n");
  printf("  -D, --describe                      Print a description of the first\n                                        difference found\n");
  printf("  -p<name>, --picture=<name>          Write a picture of the differences to\n                                        <name>\n");
  printf("  -f<font>, --font=<font>             Use <font> to show text in picture.\n");
  printf("  -W<width>, --cell-width=<width>     Use <width> as cell width in picture.\n");
  printf("  -H<height>, --cell-height=<height>  Use <height> as cell width in picture.\n");
  printf("  -P<name>, --picture-series=<name>   Create a series of picutes use <name> as\n                                        template\n");
  printf("  -s, --stop-on-difference            Stop when the first visual difference is\n                                        found\n");
  printf("  -V, --version                       Print version and copyright information\n");
  exit(0);
}

// printUsage$link4
// file src/record.c line 41
static void printUsage$link4(void)
{
  printf("Usage: tdrecord [OPTIONS] <client> [<client options>]\n");
  printf("  -d<dir>,--directory=<dir>      Save recording in directory <dir>\n");
  printf("  -e<vars>,--environment=<vars>  Save environment variables <vars>\n");
  printf("  -o<file>,--output=<file>       Save recording as <file>\n");
  printf("  -V, --version                  Print version and copyright information\n");
  printf("  -X, --allow-x11                Don't clear the DISPLAY environment variable\n");
  printf("                                   (allows communication with X11)\n");
  exit(0);
}

// print_string_list
// file src/view.c line 87
static void print_string_list(struct StringListNode *string)
{
  for( ; !(string == ((struct StringListNode *)NULL)); string = string->next)
    safe_write(1, (const void *)string->string, (unsigned long int)string->length);
}

// reset_lexer
// file input_lex.l line 50
void reset_lexer(const char *new_file_name)
{
  if(!(yyin == ((struct _IO_FILE *)NULL)))
    fclose(yyin);

  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(!(new_file_name == ((const char *)NULL)))
  {
    yyin=fopen(new_file_name, "r");
    if(yyin == ((struct _IO_FILE *)NULL))
    {
      return_value___errno_location$1=__errno_location();
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      fatal("Can't open input %s: %s\n", new_file_name, return_value_strerror$2);
    }

    file_name = new_file_name;
    line_number = 1;
  }

}

// reset_tty
// file src/common.c line 231
void reset_tty(void)
{
  tcsetattr(0, 2, &saved);
  set_non_block(0, "terminal", (enum anonymous$10)td_false);
}

// safe_calloc
// file input.g line 44
void * safe_calloc(unsigned long int size)
{
  void *retval;
  retval=calloc((unsigned long int)1, size);
  if(retval == NULL)
    fatal("Out of memory while reading script\n");

  return retval;
}

// safe_read
// file src/common.c line 86
signed long int safe_read(signed int fd, char *buffer, unsigned long int size)
{
  unsigned long int todo = size;
  signed int *return_value___errno_location$1;
  while(!(todo == 0ul))
  {
    signed long int result;
    result=read(fd, (void *)buffer, todo);
    if(!(result >= 0l))
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      if(*return_value___errno_location$2 == 4)
        continue;

      else
      {
        return_value___errno_location$1=__errno_location();
        if(*return_value___errno_location$1 == 11)
          return (signed long int)(size - todo);

      }
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      char *return_value_strerror$4;
      return_value_strerror$4=strerror(*return_value___errno_location$3);
      fatal("Error reading data: %s\n", return_value_strerror$4);
    }

    buffer = buffer + result;
    todo = todo - (unsigned long int)result;
  }
  return (signed long int)size;
}

// safe_strdup_remove_quotes
// file input.g line 51
char * safe_strdup_remove_quotes(const char *string)
{
  unsigned long int size;
  char *retval;
  retval=strdup(string + (signed long int)1);
  if(retval == ((char *)NULL))
    fatal("Out of memory while reading script\n");

  size=strlen(retval);
  if(size >= 1ul)
    retval[(signed long int)(size - (unsigned long int)1)] = (char)0;

  return retval;
}

// safe_write
// file src/common.c line 72
void safe_write(signed int fd, const void *buffer, unsigned long int size)
{
  _Bool tmp_if_expr$3;
  signed int *return_value___errno_location$2;
  while(!(size == 0ul))
  {
    signed long int result;
    result=write(fd, buffer, size);
    if(!(result >= 0l))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      if(*return_value___errno_location$1 == 4)
        tmp_if_expr$3 = (_Bool)1;

      else
      {
        return_value___errno_location$2=__errno_location();
        tmp_if_expr$3 = *return_value___errno_location$2 == 11 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$3)
        continue;

      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      char *return_value_strerror$5;
      return_value_strerror$5=strerror(*return_value___errno_location$4);
      fatal("Error writing data: %s\n", return_value_strerror$5);
    }

    buffer = buffer + result;
    size = size - (unsigned long int)result;
  }
}

// sanitize_term
// file src/curses_handling.h line 20
void sanitize_term(void)
{
  char *tistr;
  signed int errret;
  signed int return_value_setupterm$1;
  return_value_setupterm$1=setupterm((const char *)(void *)0, 1, &errret);
  if(!(return_value_setupterm$1 == -1))
  {
    tistr=get_ti_string("rmcup");
    if(!(tistr == ((char *)NULL)))
      putp(tistr);

    tistr=get_ti_string("rmacs");
    if(!(tistr == ((char *)NULL)))
      putp(tistr);

    tistr=get_ti_string("cvvis");
    if(!(tistr == ((char *)NULL)))
      putp(tistr);

  }

}

// save_env
// file src/record.c line 86
static void save_env(const char *var)
{
  const char *value;
  value=getenv(var);
  if(!(value == ((const char *)NULL)))
  {
    fprintf(output_file$link1, "env \"%s\" ", var);
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(value);
    write_escaped_string(output_file$link1, value, return_value_strlen$1);
    fputc(10, output_file$link1);
  }

}

// save_tty
// file src/common.c line 224
void save_tty(void)
{
  signed int return_value_tcgetattr$3;
  return_value_tcgetattr$3=tcgetattr(0, &saved);
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(!(return_value_tcgetattr$3 >= 0))
  {
    return_value___errno_location$1=__errno_location();
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fatal("Could not get terminal settings: %s\n", return_value_strerror$2);
  }

  atexit(reset_tty);
}

// send_keys
// file src/replay.c line 709
static void send_keys(struct ExpNode *keys)
{
  struct StringListNode *current = keys->un.args;
  signed long int result;
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  while(!(current == ((struct StringListNode *)NULL)))
  {
    signed int delay;
    if(!(current->delay + -already_waited >= 5))
    {
      if(!(display == /*enum*/td_false))
        copy_attrs_to_terminal(master);

      if(!(log_file == ((struct _IO_FILE *)NULL)))
      {
        fprintf(log_file, "Sending key(s): ");
        write_escaped_string(log_file, current->string, (unsigned long int)current->length);
        fprintf(log_file, "\n");
      }

      safe_write(master, (const void *)current->string, (unsigned long int)current->length);
      current = current->next;
      already_waited = 0;
      continue;
    }

    else
      if(IEEE_FLOAT_NOTEQUAL(key_delay, 0.000000))
        delay = (signed int)key_delay;

      else
        delay = (signed int)((double)current->delay / key_delay_scale);
    if(!(delay >= current->min_delay + -already_waited))
      delay = current->min_delay - already_waited;

    already_waited = 0;
    signed int return_value_poll$1;
    return_value_poll$1=poll(fdset, (unsigned long int)2, delay);
    result = (signed long int)return_value_poll$1;
    if(result == -1l)
    {
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 4))
      {
        return_value___errno_location$2=__errno_location();
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        fatal("Error during poll: %s\n", return_value_strerror$3);
      }

    }

    handle_signals(keys, "to send key(s)");
    if(!(display == /*enum*/td_false))
      copy_attrs_to_terminal(master);

    if(result == 0l)
    {
      if(!(log_file == ((struct _IO_FILE *)NULL)))
      {
        fprintf(log_file, "Sending key(s): ");
        write_escaped_string(log_file, current->string, (unsigned long int)current->length);
        fprintf(log_file, "\n");
      }

      safe_write(master, (const void *)current->string, (unsigned long int)current->length);
      current = current->next;
    }

    else
      handle_client_output(keys, "to send key(s)");
  }
}

// send_keys$link1
// file src/rerecord.c line 113
static void send_keys$link1(struct ExpNode *keys$link1)
{
  struct StringListNode *current$link1 = keys$link1->un.args;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  for( ; !(current$link1 == ((struct StringListNode *)NULL)); current$link1 = current$link1->next)
  {
    if(current$link1->delay >= 5)
    {
      signed int send_keys$$1$$1$$1$$1$$status;
      send_keys$$1$$1$$1$$1$$status=interact_loop(master$link1, pid$link1, output_file, current$link1->delay);
      if(!(send_keys$$1$$1$$1$$1$$status == -1))
      {
        fclose(output_file);
        reset_tty();
        fprintf(stderr, "-- recording is saved in %s --\n", output);
        /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous$8
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
        ;
        exit((((union anonymous$8){ .__in=send_keys$$1$$1$$1$$1$$status }).__i & 0xff00) >> 8);
      }

    }

    if(!(strip_location_reports == /*enum*/td_false))
    {
      signed int i;
      signed int j;
      i = 0;
      for( ; !(i >= current$link1->length); i = i + 1)
        if((signed int)current$link1->string[(signed long int)i] == 27)
        {
          if(!(1 + i >= current$link1->length))
          {
            if((signed int)current$link1->string[(signed long int)(1 + i)] == 91)
            {
              j = i + 2;
              do
              {
                if(!(j >= current$link1->length))
                {
                  if((signed int)current$link1->string[(signed long int)j] >= 48)
                    tmp_if_expr$1 = (signed int)current$link1->string[(signed long int)j] <= 57 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr$1 = (_Bool)0;
                  if(tmp_if_expr$1)
                    tmp_if_expr$2 = (_Bool)1;

                  else
                    tmp_if_expr$2 = (signed int)current$link1->string[(signed long int)j] == 59 ? (_Bool)1 : (_Bool)0;
                  tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$3 = (_Bool)0;
                if(!tmp_if_expr$3)
                  break;

                j = j + 1;
              }
              while((_Bool)1);
              if(!(j >= current$link1->length))
              {
                if((signed int)current$link1->string[(signed long int)j] == 82)
                {
                  memmove((void *)(current$link1->string + (signed long int)i), (const void *)(current$link1->string + (signed long int)j + (signed long int)1), (unsigned long int)((current$link1->length - j) - 1));
                  current$link1->length = current$link1->length - ((j + 1) - i);
                  i = i - 1;
                }

              }

            }

          }

        }

    }

    if(!(current$link1->length == 0))
    {
      write_record(output_file, (enum anonymous$3)TYPE_INPUT, current$link1->delay, current$link1->min_delay, (unsigned char *)current$link1->string, (signed long int)current$link1->length);
      init_timestamp();
      copy_attrs_to_terminal(master$link1);
      safe_write(master$link1, (const void *)current$link1->string, (unsigned long int)current$link1->length);
    }

  }
}

// set_context_from_attr_idx
// file src/write_image.c line 102
static void set_context_from_attr_idx(struct _cairo *cr, struct _PangoLayout *layout, struct _PangoFontDescription *normal, struct _PangoFontDescription *bold, signed int attr)
{
  signed int fg_color;
  signed int bg_color;
  signed int r;
  signed int g;
  signed int b;
  if(!((4 & attr) == 0))
    pango_layout_set_font_description(layout, bold);

  else
    pango_layout_set_font_description(layout, normal);
  fg_color = ((attr & 0x1ff << 8) >> 8) - 1;
  bg_color = ((attr & 0x1ff << 8 + 9) >> 8 + 9) - 1;
  if(!(fg_color >= 0))
    fg_color = 256;

  if(!(bg_color >= 0))
    bg_color = 257;

  if(!((8 & attr) == 0))
  {
    signed int tmp = fg_color;
    fg_color = bg_color;
    bg_color = tmp;
  }

  color2rgb(bg_color, &r, &g, &b);
  cairo_set_source_rgb(cr, (double)r, (double)g, (double)b);
  cairo_fill(cr);
  color2rgb(fg_color, &r, &g, &b);
  cairo_set_source_rgb(cr, (double)r, (double)g, (double)b);
}

// set_non_block
// file src/common.c line 139
void set_non_block(signed int fd, const char *descr, enum anonymous$10 value)
{
  signed int flags;
  flags=fcntl(fd, 3);
  if(!(flags >= 0))
    fatal("Could not get flags for %s\n", descr);

  if(!(value == /*enum*/td_false))
    flags = flags | 04000;

  else
    flags = flags & ~04000;
  signed int return_value_fcntl$1;
  return_value_fcntl$1=fcntl(fd, 4, flags);
  if(!(return_value_fcntl$1 >= 0))
    fatal("Could not set flags for %s\n", descr);

}

// set_window_size
// file src/replay.c line 396
static void set_window_size(struct ExpNode *size)
{
  signed long int result;
  signed int delay;
  struct timeval start;
  struct timeval now;
  if(size->un.size.min_delay >= 1)
    delay = size->un.size.min_delay;

  else
    if(IEEE_FLOAT_NOTEQUAL(key_delay, 0.000000))
      delay = (signed int)key_delay;

    else
      delay = (signed int)((double)size->un.size.delay / key_delay_scale);
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  if(!(delay >= 0) || !(delay >= already_waited))
  {
    set_window_size_internal(size);
    already_waited = 0;
  }

  else
  {
    gettimeofday(&start, (struct timezone *)(void *)0);
    while((_Bool)1)
    {
      signed int return_value_poll$1;
      return_value_poll$1=poll(fdset, (unsigned long int)2, delay - already_waited);
      result = (signed long int)return_value_poll$1;
      if(result == -1l)
      {
        signed int *return_value___errno_location$4;
        return_value___errno_location$4=__errno_location();
        if(!(*return_value___errno_location$4 == 4))
        {
          return_value___errno_location$2=__errno_location();
          return_value_strerror$3=strerror(*return_value___errno_location$2);
          fatal("Error during poll: %s\n", return_value_strerror$3);
        }

      }

      handle_signals(size, "to resize window");
      if(!(display == /*enum*/td_false))
        copy_attrs_to_terminal(master);

      gettimeofday(&now, (struct timezone *)(void *)0);
      signed int return_value_timevaldiff$5;
      return_value_timevaldiff$5=timevaldiff(start, now);
      already_waited = already_waited + return_value_timevaldiff$5;
      if(result == 0l || already_waited >= delay)
      {
        set_window_size_internal(size);
        already_waited = 0;
        goto __CPROVER_DUMP_L12;
      }

      else
        handle_client_output(size, "to resize window");
    }
  }

__CPROVER_DUMP_L12:
  ;
}

// set_window_size$link1
// file src/view.c line 112
static void set_window_size$link1(struct ExpNode *size$link1)
{
  if(!(resize_capable$link1 == /*enum*/td_false))
  {
    char buffer[64l];
    unsigned long int result;
    signed int return_value_sprintf$1;
    return_value_sprintf$1=sprintf(buffer, "\033[8;%d;%dt", size$link1->un.size.rows, size$link1->un.size.columns);
    result = (unsigned long int)return_value_sprintf$1;
    safe_write(1, (const void *)buffer, result);
  }

}

// set_window_size$link2
// file src/rerecord.c line 84
static void set_window_size$link2(struct ExpNode *size$link2)
{
  struct winsize wsz;
  memset((void *)&wsz, 0, sizeof(struct winsize) /*8ul*/ );
  interact_loop(master$link1, pid$link1, output_file, size$link2->un.size.delay);
  fprintf(output_file, "window_size %d %d", size$link2->un.size.columns, size$link2->un.size.rows);
  if(size$link2->un.size.delay >= 1)
  {
    fprintf(output_file, " %d", size$link2->un.size.delay);
    if(!(size$link2->un.size.min_delay == 0))
      fprintf(output_file, " >%d", size$link2->un.size.min_delay);

  }

  fputc(10, output_file);
  init_timestamp();
  if(!(resize_capable$link2 == /*enum*/td_false))
  {
    char buffer[64l];
    unsigned long int result;
    signed int return_value_sprintf$1$link1;
    return_value_sprintf$1$link1=sprintf(buffer, "\033[8;%d;%dt", size$link2->un.size.rows, size$link2->un.size.columns);
    result = (unsigned long int)return_value_sprintf$1$link1;
    safe_write(1, (const void *)buffer, result);
  }

  wsz.ws_col = (unsigned short int)size$link2->un.size.columns;
  wsz.ws_row = (unsigned short int)size$link2->un.size.rows;
  signed int return_value_ioctl$4;
  return_value_ioctl$4=ioctl(master$link1, (unsigned long int)0x5414, &wsz);
  signed int *return_value___errno_location$2$link1;
  char *return_value_strerror$3$link1;
  if(!(return_value_ioctl$4 == 0))
  {
    return_value___errno_location$2$link1=__errno_location();
    return_value_strerror$3$link1=strerror(*return_value___errno_location$2$link1);
    fatal("Error setting window size: %s\n", return_value_strerror$3$link1);
  }

}

// set_window_size_internal
// file src/replay.c line 376
static void set_window_size_internal(struct ExpNode *size)
{
  struct winsize wsz;
  memset((void *)&wsz, 0, sizeof(struct winsize) /*8ul*/ );
  if(!(log_file == ((struct _IO_FILE *)NULL)))
    fprintf(log_file, "Changing window size to: %d %d\n", size->un.size.columns, size->un.size.rows);

  if(no_resize == /*enum*/td_false && !(display == /*enum*/td_false) && !(resize_capable == /*enum*/td_false))
  {
    char buffer[64l];
    unsigned long int result;
    signed int return_value_sprintf$1;
    return_value_sprintf$1=sprintf(buffer, "\033[8;%d;%dt", size->un.size.rows, size->un.size.columns);
    result = (unsigned long int)return_value_sprintf$1;
    safe_write(1, (const void *)buffer, result);
  }

  wsz.ws_col = (unsigned short int)size->un.size.columns;
  wsz.ws_row = (unsigned short int)size->un.size.rows;
  signed int return_value_ioctl$4;
  return_value_ioctl$4=ioctl(master, (unsigned long int)0x5414, &wsz);
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  if(!(return_value_ioctl$4 == 0))
  {
    return_value___errno_location$2=__errno_location();
    return_value_strerror$3=strerror(*return_value___errno_location$2);
    fatal("Error setting window size: %s\n", return_value_strerror$3);
  }

}

// setup_ti_strings
// file src/write_stringlist.h line 22
void setup_ti_strings(const char *term, const char *lang)
{
  unsigned long int i;
  const char *codeset;
  call_setupterm(term);
  i = (unsigned long int)0;
  for( ; !(i >= 31ul); i = i + 1ul)
    terminfo_mappings[(signed long int)i].str=get_ti_string(terminfo_mappings[(signed long int)i].name);
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(terminfo_mappings[(signed long int)14].str, terminfo_mappings[(signed long int)29].str);
  if(return_value_strcmp$1 == 0)
  {
    free((void *)terminfo_mappings[(signed long int)29].str);
    free((void *)terminfo_mappings[(signed long int)21].str);
    terminfo_mappings[(signed long int)29].str = (char *)(void *)0;
    terminfo_mappings[(signed long int)21].str = (char *)(void *)0;
  }

  signed int return_value_get_ti_bool$2;
  return_value_get_ti_bool$2=get_ti_bool("bce");
  win_bce = (enum anonymous$10)(return_value_get_ti_bool$2 != 0);
  signed int return_value_strcmp$3;
  _Bool tmp_if_expr$5;
  signed int return_value_strcmp$4;
  if(lang == ((const char *)NULL))
    iconv_handle = (void *)-1;

  else
  {
    codeset=strchr(lang, 46);
    if(!(codeset == ((const char *)NULL)))
      iconv_handle=iconv_open("UTF-8", codeset + (signed long int)1);

    else
    {
      return_value_strcmp$3=strcmp(lang, "C");
      if(return_value_strcmp$3 == 0)
        tmp_if_expr$5 = (_Bool)1;

      else
      {
        return_value_strcmp$4=strcmp(lang, "POSIX");
        tmp_if_expr$5 = return_value_strcmp$4 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$5)
        iconv_handle=iconv_open("UTF-8", "ANSI_X3.4-1968");

      else
        iconv_handle = (void *)-1;
    }
  }
}

// sigchld_handler
// file src/common.c line 217
void sigchld_handler(signed int param)
{
  char signal_byte = (char)0;
  (void)param;
  safe_write(signal_pipe[(signed long int)1], (const void *)&signal_byte, (unsigned long int)1);
}

// sigwinch_handler
// file src/common.c line 211
void sigwinch_handler(signed int param)
{
  char signal_byte = (char)1;
  (void)param;
  safe_write(signal_pipe[(signed long int)1], (const void *)&signal_byte, (unsigned long int)1);
}

// start_client
// file src/common.c line 469
signed int start_client(struct ExpNode *client, signed int fd, struct _IO_FILE *log_file)
{
  signed int result;
  struct StringListNode *ptr;
  signed int argc = 0;
  char **argv;
  if(!(log_file == ((struct _IO_FILE *)NULL)))
  {
    fprintf(log_file, "Starting client:");
    ptr = client->un.args;
    for( ; !(ptr == ((struct StringListNode *)NULL)); ptr = ptr->next)
      fprintf(log_file, " %s", ptr->string);
    fprintf(log_file, "\n");
    fflush(log_file);
  }

  result=fork();
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(!(result >= 0))
  {
    return_value___errno_location$1=__errno_location();
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fatal("Error executing fork: %s\n", return_value_strerror$2);
  }

  else
    if(!(result == 0))
      return result;

  signed int return_value_login_tty$5;
  return_value_login_tty$5=login_tty(fd);
  signed int *return_value___errno_location$3;
  char *return_value_strerror$4;
  if(!(return_value_login_tty$5 >= 0))
  {
    return_value___errno_location$3=__errno_location();
    return_value_strerror$4=strerror(*return_value___errno_location$3);
    fatal("Error executing login_tty: %s\n", return_value_strerror$4);
  }

  ptr = client->un.args;
  for( ; !(ptr == ((struct StringListNode *)NULL)); ptr = ptr->next)
    argc = argc + 1;
  void *return_value_malloc$8;
  return_value_malloc$8=malloc(sizeof(char *) /*8ul*/  * (unsigned long int)(argc + 1));
  argv = (char **)return_value_malloc$8;
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  if(argv == ((char **)NULL))
  {
    return_value___errno_location$6=__errno_location();
    return_value_strerror$7=strerror(*return_value___errno_location$6);
    fatal("Could not allocate client argument array: %s\n", return_value_strerror$7);
  }

  ptr = client->un.args;
  argc = 0;
  signed int tmp_post$9;
  for( ; !(ptr == ((struct StringListNode *)NULL)); ptr = ptr->next)
  {
    tmp_post$9 = argc;
    argc = argc + 1;
    argv[(signed long int)tmp_post$9] = ptr->string;
  }
  argv[(signed long int)argc] = (char *)(void *)0;
  unsetenv("DISPLAY");
  execvp(argv[(signed long int)0], argv);
  signed int *return_value___errno_location$10;
  return_value___errno_location$10=__errno_location();
  char *return_value_strerror$11;
  return_value_strerror$11=strerror(*return_value___errno_location$10);
  fatal("execvp failed: %s\n", return_value_strerror$11);
  return 0;
}

// start_picture_writer_thread
// file src/picture_queue.c line 103
void start_picture_writer_thread(void)
{
  pthread_mutex_lock(&picture_queue_lock);
  pthread_create(&picture_thread, (const union pthread_attr_t *)(void *)0, picture_writer_thead, (void *)0);
  pthread_cond_wait(&picture_queue_cond, &picture_queue_lock);
  pthread_mutex_unlock(&picture_queue_lock);
  atexit(join_picture_thread);
}

// tdcompare_main
// file src/common.c line 779
signed int tdcompare_main(signed int argc, char **argv)
{
  parse_options$link3(argc, argv);
  reset_lexer(inputA);
  parse();
  scriptA = script;
  script = (struct ExpNode *)(void *)0;
  reset_lexer(inputB);
  parse();
  scriptB = script;
  if(!(visual_compare$link1 == /*enum*/td_false))
    do_visual_compare();

  else
    compare();
  return 0;
}

// tdrecord_main
// file src/common.c line 775
signed int tdrecord_main(signed int argc, char **argv)
{
  struct winsize wsz;
  struct winsize *wsz_setting;
  signed int tdrecord_main$$1$$master;
  signed int tdrecord_main$$1$$status;
  signed int i;
  char *cwd_buffer;
  signed int tdrecord_main$$1$$pid;
  signed int return_value_isatty$1;
  return_value_isatty$1=isatty(0);
  if(return_value_isatty$1 == 0)
    fatal("Can only record from terminal devices\n");

  parse_options$link4(argc, argv);
  if(!(prog_start_index >= 0))
    fatal("No program specified\n");

  output_file$link1=open_output(&output$link1, directory$link1);
  cwd_buffer=getcwd_wrapper();
  fprintf(output_file$link1, "# Recorded with working directory %s\n", cwd_buffer);
  free((void *)cwd_buffer);
  save_env("TERM");
  save_env("LINES");
  save_env("COLUMS");
  save_env("LANG");
  save_env("LC_CTYPE");
  if(!(environment == ((char *)NULL)))
  {
    char *var;
    var=strtok(environment, ",");
    while(!(var == ((char *)NULL)))
    {
      save_env(var);
      var=strtok((char *)(void *)0, ",");
    }
  }

  init_timestamp();
  install_signal_handler(28, sigwinch_handler, "SIGWINCH");
  install_signal_handler(17, sigchld_handler, "SIGCHLD");
  signed int return_value_ioctl$4;
  return_value_ioctl$4=ioctl(0, (unsigned long int)0x5413, &wsz);
  if(!(return_value_ioctl$4 >= 0))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    char *return_value_strerror$3;
    return_value_strerror$3=strerror(*return_value___errno_location$2);
    fprintf(stderr, "Warning: could not obtain window size: %s\n", return_value_strerror$3);
    wsz_setting = (struct winsize *)(void *)0;
  }

  else
  {
    fprintf(output_file$link1, "window_size %d %d\n", wsz.ws_col, wsz.ws_row);
    wsz_setting = &wsz;
  }
  fputs("start", output_file$link1);
  i = prog_start_index;
  for( ; !(i >= argc); i = i + 1)
  {
    fputc(32, output_file$link1);
    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(argv[(signed long int)i]);
    write_escaped_string(output_file$link1, argv[(signed long int)i], return_value_strlen$5);
  }
  fputc(10, output_file$link1);
  tdrecord_main$$1$$pid=forkpty(&tdrecord_main$$1$$master, (char *)(void *)0, (struct termios *)(void *)0, wsz_setting);
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  if(!(tdrecord_main$$1$$pid >= 0))
  {
    return_value___errno_location$6=__errno_location();
    return_value_strerror$7=strerror(*return_value___errno_location$6);
    fatal("forkpty failed: %s\n", return_value_strerror$7);
  }

  if(tdrecord_main$$1$$pid == 0)
  {
    if(allow_x11 == 0)
      unsetenv("DISPLAY");

    execvp(argv[(signed long int)prog_start_index], argv + (signed long int)prog_start_index);
    unlink(output$link1);
    signed int *return_value___errno_location$8;
    return_value___errno_location$8=__errno_location();
    char *return_value_strerror$9;
    return_value_strerror$9=strerror(*return_value___errno_location$8);
    fatal("Error executing process: %s\n", return_value_strerror$9);
  }

  save_tty();
  set_non_block(tdrecord_main$$1$$master, "pty", (enum anonymous$10)td_true);
  set_non_block(0, "terminal", (enum anonymous$10)td_true);
  set_non_block(signal_pipe[(signed long int)0], "pipe", (enum anonymous$10)td_true);
  tdrecord_main$$1$$status=interact_loop(tdrecord_main$$1$$master, tdrecord_main$$1$$pid, output_file$link1, -1);
  fclose(output_file$link1);
  reset_tty();
  fprintf(stderr, "-- recording is saved in %s --\n", output$link1);
  /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous$8
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
  ;
  exit((((union anonymous$8){ .__in=tdrecord_main$$1$$status }).__i & 0xff00) >> 8);
}

// tdreplay_main
// file src/common.c line 777
signed int tdreplay_main(signed int argc, char **argv)
{
  struct winsize wsz;
  signed int slave;
  parse_options(argc, argv);
  signed int return_value_isatty$1;
  if(!(display == /*enum*/td_false))
  {
    return_value_isatty$1=isatty(0);
    if(return_value_isatty$1 == 0)
      fatal("Can only replay to a terminal devices\n");

  }

  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  if(!(log_name == ((const char *)NULL)))
  {
    log_file=fopen(log_name, "w");
    if(log_file == ((struct _IO_FILE *)NULL))
    {
      return_value___errno_location$2=__errno_location();
      return_value_strerror$3=strerror(*return_value___errno_location$2);
      fatal("Can't open log: %s\n", return_value_strerror$3);
    }

  }

  reset_lexer(input);
  parse();
  gettimeofday(&timestamp$link1, (struct timezone *)(void *)0);
  if(!(display == /*enum*/td_false))
  {
    resize_capable=detect_resize_capable();
    install_signal_handler(28, sigwinch_handler, "SIGWINCH");
    save_tty();
  }

  install_signal_handler(17, sigchld_handler, "SIGCHLD");
  unsetenv("TERM");
  unsetenv("LINES");
  unsetenv("COLUMS");
  unsetenv("LANG");
  unsetenv("LC_CTYPE");
  signed int return_value_openpty$6;
  return_value_openpty$6=openpty(&master, &slave, (char *)(void *)0, (struct termios *)(void *)0, (struct winsize *)(void *)0);
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  if(!(return_value_openpty$6 >= 0))
  {
    return_value___errno_location$4=__errno_location();
    return_value_strerror$5=strerror(*return_value___errno_location$4);
    fatal("Error opening pty: %s\n", return_value_strerror$5);
  }

  set_non_block(0, "terminal", (enum anonymous$10)td_true);
  set_non_block(master, "pty", (enum anonymous$10)td_true);
  set_non_block(signal_pipe[(signed long int)0], "pipe", (enum anonymous$10)td_true);
  fdset[(signed long int)0].fd = master;
  fdset[(signed long int)0].events = (signed short int)0x001;
  fdset[(signed long int)1].fd = signal_pipe[(signed long int)0];
  fdset[(signed long int)1].events = (signed short int)0x001;
  if(!(visual_compare == /*enum*/td_false))
  {
    const char *term;
    init_attr_map();
    term=get_script_env(script, "TERM");
    if(term == ((const char *)NULL))
      fatal("Recording does not contain a TERM environment variable\n");

    const char *return_value_get_script_env$7;
    return_value_get_script_env$7=get_script_env(script, "LANG");
    setup_ti_strings(term, return_value_get_script_env$7);
    signed int return_value_ioctl$10;
    return_value_ioctl$10=ioctl(0, (unsigned long int)0x5413, &wsz);
    if((signed int)wsz.ws_col == 0 || (signed int)wsz.ws_row == 0 || !(return_value_ioctl$10 >= 0))
    {
      signed int *return_value___errno_location$8;
      return_value___errno_location$8=__errno_location();
      char *return_value_strerror$9;
      return_value_strerror$9=strerror(*return_value___errno_location$8);
      fprintf(stderr, "Warning: could not obtain window size: %s\n", return_value_strerror$9);
      wsz.ws_col = (unsigned short int)80;
      wsz.ws_row = (unsigned short int)24;
    }

    realWin=win_new((signed int)wsz.ws_row, (signed int)wsz.ws_col);
    if(realWin == ((struct anonymous$12 *)NULL))
      fatal("Out of memory\n");

    expectWin=win_new((signed int)wsz.ws_row, (signed int)wsz.ws_col);
    if(expectWin == ((struct anonymous$12 *)NULL))
      fatal("Out of memory\n");

  }

  for( ; !(script == ((struct ExpNode *)NULL)); script = script->next)
  {
    if(!(exited == /*enum*/td_false))
    {
      if(!((signed int)script->type == EXP_EXPECT_EXIT))
        unexpected_death();

      else
        handle_exit(script);
    }

    switch((signed int)script->type)
    {
      case EXP_START:
      {
        pid=start_client(script, slave, log_file);
        break;
      }
      case EXP_EXPECT:
      {
        if(!(visual_compare == /*enum*/td_false))
          visual_expect(script);

        else
          expect(script);
        for( ; !(script->next == ((struct ExpNode *)NULL)); script = script->next)
          if(!((signed int)script->next->type == EXP_EXPECT))
            break;

        break;
      }
      case EXP_SEND:
      {
        send_keys(script);
        break;
      }
      case EXP_EXPECT_EXIT:

      case EXP_EXPECT_SUSPEND:
      {
        expect_signal(script);
        break;
      }
      case EXP_INTERACT:
      {
        if(!(display == /*enum*/td_false))
          interact();

        break;
      }
      case EXP_WINDOW_SIZE:
      {
        set_window_size(script);
        break;
      }
      case EXP_ENV:
      {
        if(!(log_file == ((struct _IO_FILE *)NULL)))
          fprintf(log_file, "Setting environment variable %s to %s\n", script->un.args->string, script->un.args->next->string);

        setenv(script->un.args->string, script->un.args->next->string, 0);
        break;
      }
      case EXP_REQUIRE_VERSION:
        break;
      default:
        fatal("Internal error\n");
    }
  }
  end_client();
  return 0;
}

// tdrerecord_main
// file src/common.c line 776
signed int tdrerecord_main(signed int argc, char **argv)
{
  signed int slave;
  signed int tdrerecord_main$$1$$status;
  char *cwd_buffer;
  parse_options$link2(argc, argv);
  signed int return_value_isatty$1;
  return_value_isatty$1=isatty(0);
  if(return_value_isatty$1 == 0)
    fatal("Can only rerecord from a terminal devices\n");

  reset_lexer(input$link2);
  parse();
  output_file=open_output(&output, directory);
  cwd_buffer=getcwd_wrapper();
  fprintf(output_file, "# Recorded with working directory %s\n", cwd_buffer);
  free((void *)cwd_buffer);
  resize_capable$link2=detect_resize_capable();
  init_timestamp();
  install_signal_handler(28, sigwinch_handler, "SIGWINCH");
  save_tty();
  install_signal_handler(17, sigchld_handler, "SIGCHLD");
  unsetenv("TERM");
  unsetenv("LINES");
  unsetenv("COLUMS");
  unsetenv("LANG");
  unsetenv("LC_CTYPE");
  signed int return_value_openpty$4;
  return_value_openpty$4=openpty(&master$link1, &slave, (char *)(void *)0, (struct termios *)(void *)0, (struct winsize *)(void *)0);
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  if(!(return_value_openpty$4 >= 0))
  {
    return_value___errno_location$2=__errno_location();
    return_value_strerror$3=strerror(*return_value___errno_location$2);
    fatal("Error opening pty: %s\n", return_value_strerror$3);
  }

  set_non_block(0, "terminal", (enum anonymous$10)td_true);
  set_non_block(master$link1, "pty", (enum anonymous$10)td_true);
  set_non_block(signal_pipe[(signed long int)0], "pipe", (enum anonymous$10)td_true);
  struct StringListNode *ptr;
  unsigned long int return_value_strlen$6;
  for( ; !(script == ((struct ExpNode *)NULL)); script = script->next)
    switch((signed int)script->type)
    {
      case EXP_START:
      {
        fprintf(output_file, "start");
        ptr = script->un.args;
        while(!(ptr == ((struct StringListNode *)NULL)))
        {
          fputc(32, output_file);
          unsigned long int return_value_strlen$5;
          return_value_strlen$5=strlen(ptr->string);
          write_escaped_string(output_file, ptr->string, return_value_strlen$5);
          ptr = ptr->next;
        }
        fprintf(output_file, "\n");
        pid$link1=start_client(script, slave, (struct _IO_FILE *)(void *)0);
        break;
      }
      case EXP_EXPECT:

      case EXP_EXPECT_SUSPEND:
        break;
      case EXP_SEND:
      {
        send_keys$link1(script);
        break;
      }
      case EXP_EXPECT_EXIT:

      case EXP_INTERACT:
      {
        copy_attrs_to_terminal(master$link1);
        tdrerecord_main$$1$$status=interact_loop(master$link1, pid$link1, output_file, -1);
        fclose(output_file);
        reset_tty();
        fprintf(stderr, "-- recording is saved in %s --\n", output);
        /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous$8
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
        ;
        exit((((union anonymous$8){ .__in=tdrerecord_main$$1$$status }).__i & 0xff00) >> 8);
        break;
      }
      case EXP_WINDOW_SIZE:
      {
        set_window_size$link2(script);
        break;
      }
      case EXP_ENV:
      {
        fprintf(output_file, "env \"%s\" ", script->un.args->string);
        return_value_strlen$6=strlen(script->un.args->next->string);
        write_escaped_string(output_file, script->un.args->next->string, return_value_strlen$6);
        fputc(10, output_file);
        setenv(script->un.args->string, script->un.args->next->string, 0);
        break;
      }
      case EXP_REQUIRE_VERSION:
      {
        fprintf(output_file, "require_version %d\n", script->un.number);
        break;
      }
      default:
        fatal("Internal error\n");
    }
  return 0;
}

// tdview_main
// file src/common.c line 778
signed int tdview_main(signed int argc, char **argv)
{
  parse_options$link1(argc, argv);
  signed int return_value_isatty$1;
  return_value_isatty$1=isatty(0);
  if(return_value_isatty$1 == 0)
    fatal("Can only replay to a terminal devices\n");

  resize_capable$link1=detect_resize_capable();
  reset_lexer(input$link1);
  parse();
  save_tty();
  copy_attrs_to_terminal(0);
  struct StringListNode *key;
  for( ; !(script == ((struct ExpNode *)NULL)); script = script->next)
    switch((signed int)script->type)
    {
      case EXP_START:

      case EXP_INTERACT:

      case EXP_ENV:
        break;
      case EXP_EXPECT:
      {
        print_string_list(script->un.args);
        break;
      }
      case EXP_SEND:
      {
        key = script->un.args;
        for( ; !(key == ((struct StringListNode *)NULL)); key = key->next)
          do_delay(key->delay);
        break;
      }
      case EXP_EXPECT_EXIT:
      {
        exit(0);
        break;
      }
      case EXP_WINDOW_SIZE:
      {
        do_delay(script->un.size.delay);
        set_window_size$link1(script);
        break;
      }
      case EXP_EXPECT_SUSPEND:
      {
        printf("Process has stopped. Will continue in 3 seconds\n");
        sleep((unsigned int)3);
        break;
      }
      case EXP_REQUIRE_VERSION:
        break;
      default:
        fatal("Internal error\n");
    }
  return 0;
}

// timevaldiff
// file src/common.c line 236
signed int timevaldiff(struct timeval origin, struct timeval now)
{
  return (signed int)((now.tv_usec - origin.tv_usec) / (signed long int)1000 + (now.tv_sec - origin.tv_sec) * (signed long int)1000);
}

// unexpected
// file src/replay.c line 271
static void unexpected(const char *reason, const char *received, unsigned long int recv_length, signed int line, ...)
{
  (void)reason;
  if(!(alert == ((char *)NULL)))
  {
    setenv("REASON", reason, 1);
    do
    {
      signed int _ignore;
      _ignore=system(alert);
      (void)_ignore;
    }
    while((_Bool)0);
    alert = (char *)(void *)0;
  }

  if(!(log_file == ((struct _IO_FILE *)NULL)))
  {
    void **args;
    fprintf(log_file, "!! ");
    args = (void **)&line;
    vfprintf(log_file, reason, args);
    args = ((void **)NULL);
    if(!(received == ((const char *)NULL)))
    {
      fprintf(log_file, ": \n");
      write_escaped_string(log_file, received, recv_length);
    }

    else
      fprintf(log_file, "\n");
  }

  switch((signed int)on_error)
  {
    case ON_ERROR_ABORT:
    {
      void **unexpected$$1$$3$$1$$args;
      end_client();
      if(!(display == /*enum*/td_false))
      {
        sanitize_term();
        reset_tty();
        _IO_putc(10, stderr);
      }

      fprintf(stderr, "Different behaviour from client at line %d: ", line);
      unexpected$$1$$3$$1$$args = (void **)&line;
      vfprintf(stderr, reason, unexpected$$1$$3$$1$$args);
      unexpected$$1$$3$$1$$args = ((void **)NULL);
      exit(1);
    }
    case ON_ERROR_INTERACT:
    {
      interact();
      exit(0);
    }
    case ON_ERROR_CONTINUE:
      break;
    default:
      fatal("Internal error\n");
  }
}

// unexpected_death
// file src/replay.c line 328
static void unexpected_death(void)
{
  if(!(alert == ((char *)NULL)))
    do
    {
      signed int _ignore;
      _ignore=system(alert);
      (void)_ignore;
    }
    while((_Bool)0);

  /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous$8
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
  ;
  if(!(log_file == ((struct _IO_FILE *)NULL)))
    fprintf(log_file, "!! Client stopped unexpectedly with status: %d\n", (((union anonymous$8){ .__in=status }).__i & 0xff00) >> 8);

  if(!(display == /*enum*/td_false))
    reset_tty();

  fprintf(stderr, "Client stopped unexpectedly with status: %d\n", (((union anonymous$8){ .__in=status }).__i & 0xff00) >> 8);
  exit(1);
}

// utf8_get
// file src/window.c line 508
unsigned int utf8_get(const char *src, unsigned long int *size)
{
  unsigned long int max_size;
  unsigned long int _size;
  signed int bytes_left;
  unsigned int retval;
  unsigned int least;
  unsigned long int tmp_if_expr$1;
  if(size == ((unsigned long int *)NULL))
    tmp_if_expr$1 = (unsigned long int)4;

  else
    tmp_if_expr$1 = *size;
  max_size = tmp_if_expr$1;
  _size = (unsigned long int)1;
  switch((signed int)(unsigned char)src[(signed long int)0])
  {
    case 0:

    case 1:

    case 2:

    case 3:

    case 4:

    case 5:

    case 6:

    case 7:

    case 8:

    case 9:

    case 10:

    case 11:

    case 12:

    case 13:

    case 14:

    case 15:

    case 16:

    case 17:

    case 18:

    case 19:

    case 20:

    case 21:

    case 22:

    case 23:

    case 24:

    case 25:

    case 26:

    case 27:

    case 28:

    case 29:

    case 30:

    case 31:

    case 32:

    case 33:

    case 34:

    case 35:

    case 36:

    case 37:

    case 38:

    case 39:

    case 40:

    case 41:

    case 42:

    case 43:

    case 44:

    case 45:

    case 46:

    case 47:

    case 48:

    case 49:

    case 50:

    case 51:

    case 52:

    case 53:

    case 54:

    case 55:

    case 56:

    case 57:

    case 58:

    case 59:

    case 60:

    case 61:

    case 62:

    case 63:

    case 64:

    case 65:

    case 66:

    case 67:

    case 68:

    case 69:

    case 70:

    case 71:

    case 72:

    case 73:

    case 74:

    case 75:

    case 76:

    case 77:

    case 78:

    case 79:

    case 80:

    case 81:

    case 82:

    case 83:

    case 84:

    case 85:

    case 86:

    case 87:

    case 88:

    case 89:

    case 90:

    case 91:

    case 92:

    case 93:

    case 94:

    case 95:

    case 96:

    case 97:

    case 98:

    case 99:

    case 100:

    case 101:

    case 102:

    case 103:

    case 104:

    case 105:

    case 106:

    case 107:

    case 108:

    case 109:

    case 110:

    case 111:

    case 112:

    case 113:

    case 114:

    case 115:

    case 116:

    case 117:

    case 118:

    case 119:

    case 120:

    case 121:

    case 122:

    case 123:

    case 124:

    case 125:

    case 126:

    case 127:
    {
      if(!(size == ((unsigned long int *)NULL)))
        *size = _size;

      return (unsigned int)src[(signed long int)0];
    }
    case 128:

    case 129:

    case 130:

    case 131:

    case 132:

    case 133:

    case 134:

    case 135:

    case 136:

    case 137:

    case 138:

    case 139:

    case 140:

    case 141:

    case 142:

    case 143:

    case 144:

    case 145:

    case 146:

    case 147:

    case 148:

    case 149:

    case 150:

    case 151:

    case 152:

    case 153:

    case 154:

    case 155:

    case 156:

    case 157:

    case 158:

    case 159:

    case 160:

    case 161:

    case 162:

    case 163:

    case 164:

    case 165:

    case 166:

    case 167:

    case 168:

    case 169:

    case 170:

    case 171:

    case 172:

    case 173:

    case 174:

    case 175:

    case 176:

    case 177:

    case 178:

    case 179:

    case 180:

    case 181:

    case 182:

    case 183:

    case 184:

    case 185:

    case 186:

    case 187:

    case 188:

    case 189:

    case 190:

    case 191:

    case 192:

    case 193:
    {
      if(!(size == ((unsigned long int *)NULL)))
        *size = _size;

      return (unsigned int)0xFFFD;
    }
    case 194:

    case 195:

    case 196:

    case 197:

    case 198:

    case 199:

    case 200:

    case 201:

    case 202:

    case 203:

    case 204:

    case 205:

    case 206:

    case 207:

    case 208:

    case 209:

    case 210:

    case 211:

    case 212:

    case 213:

    case 214:

    case 215:

    case 216:

    case 217:

    case 218:

    case 219:

    case 220:

    case 221:

    case 222:

    case 223:
    {
      least = (unsigned int)0x80;
      bytes_left = 1;
      retval = (unsigned int)((signed int)src[(signed long int)0] & 0x1F);
      break;
    }
    case 224:

    case 225:

    case 226:

    case 227:

    case 228:

    case 229:

    case 230:

    case 231:

    case 232:

    case 233:

    case 234:

    case 235:

    case 236:

    case 237:

    case 238:

    case 239:
    {
      least = (unsigned int)0x800;
      bytes_left = 2;
      retval = (unsigned int)((signed int)src[(signed long int)0] & 0x0F);
      break;
    }
    case 240:

    case 241:

    case 242:

    case 243:

    case 244:
    {
      least = (unsigned int)0x10000L;
      bytes_left = 3;
      retval = (unsigned int)((signed int)src[(signed long int)0] & 0x07);
      break;
    }
    case 245:

    case 246:

    case 247:

    case 248:

    case 249:

    case 250:

    case 251:

    case 252:

    case 253:

    case 254:

    case 255:
    {
      if(!(size == ((unsigned long int *)NULL)))
        *size = _size;

      return (unsigned int)0xFFFD;
    }
    default:
    {
      if(!(size == ((unsigned long int *)NULL)))
        *size = _size;

      return (unsigned int)0xFFFD;
    }
  }
  src = src + 1l;
  for( ; bytes_left >= 1 && !(_size >= max_size); _size = _size + 1ul)
  {
    if(!((0xC0 & (signed int)*src) == 0x80))
    {
      if(!(size == ((unsigned long int *)NULL)))
        *size = _size;

      return (unsigned int)0xFFFD;
    }

    retval = retval << 6 | (unsigned int)((signed int)src[(signed long int)0] & 0x3F);
    src = src + 1l;
    bytes_left = bytes_left - 1;
  }
  if(!(size == ((unsigned long int *)NULL)))
    *size = _size;

  if(!(retval >= least))
    return (unsigned int)0xFFFD;

  else
    if((signed long int)retval >= 1114112l)
      return (unsigned int)0xFFFD;

    else
      if(bytes_left >= 1)
        return (unsigned int)0xFFFD;

      else
        return retval;
}

// utf8_wcwidth
// file src/window.c line 653
signed int utf8_wcwidth(unsigned int c)
{
  if(c >= 4448u && !(c >= 4602u))
    return 0;

  else
    if(c == 173u)
      return 1;

    else
    {
      signed int return_value_uc_width$1;
      static char nul;
      return_value_uc_width$1=uc_width(c, &nul);
      return return_value_uc_width$1;
    }
}

// visual_expect
// file src/replay.c line 573
static void visual_expect(struct ExpNode *exp)
{
  char buffer[1024l];
  signed long int result;
  struct timeval start;
  struct timeval now;
  signed int remaining_timeout;
  signed int timeout;
  signed int min_delay;
  enum anonymous$10 do_handle_signals = (enum anonymous$10)td_true;
  win_write_stringlist(expectWin, exp->un.args);
  if(!(log_file == ((struct _IO_FILE *)NULL)))
  {
    struct StringListNode *string;
    fprintf(log_file, "Expecting client output:\n");
    string = exp->un.args;
    while(!(string == ((struct StringListNode *)NULL)))
    {
      for( ; !(string == ((struct StringListNode *)NULL)); string = string->next)
      {
        write_escaped_string(log_file, string->string, (unsigned long int)string->length);
        fprintf(log_file, "\n");
      }
      if(!(exp->next == ((struct ExpNode *)NULL)))
      {
        if((signed int)exp->next->type == EXP_EXPECT)
        {
          exp = exp->next;
          string = exp->un.args;
        }

      }

    }
  }

  if(!(log_file == ((struct _IO_FILE *)NULL)))
    fprintf(log_file, "Received client output:\n");

  if(IEEE_FLOAT_NOTEQUAL(key_delay, 0.000000))
  {
    timeout=get_next_delay(exp, &min_delay);
    if(timeout == -1)
      do_handle_signals = (enum anonymous$10)td_false;

    if(key_delay < (double)timeout || !(timeout >= 0))
      timeout = (signed int)key_delay;

    if(!(timeout >= 10))
      timeout = 10;

  }

  else
  {
    timeout=get_next_delay(exp, &min_delay);
    if(timeout == -1)
      do_handle_signals = (enum anonymous$10)td_false;

    timeout = timeout / (signed int)key_delay_scale;
    if(!(timeout >= 10))
      timeout = 10;

  }
  if(!(timeout >= min_delay))
    timeout = min_delay;

  remaining_timeout = timeout;
  static enum anonymous$10 first_expect = (enum anonymous$10)td_true;
  if(!(first_expect == /*enum*/td_false))
    remaining_timeout = 1000;

  gettimeofday(&start, (struct timezone *)(void *)0);
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  while(remaining_timeout >= 1)
  {
    signed int return_value_poll$1;
    return_value_poll$1=poll(fdset, (unsigned long int)2, remaining_timeout);
    result = (signed long int)return_value_poll$1;
    if(!(first_expect == /*enum*/td_false))
    {
      first_expect = (enum anonymous$10)td_false;
      gettimeofday(&start, (struct timezone *)(void *)0);
    }

    if(result == -1l)
    {
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 4))
      {
        return_value___errno_location$2=__errno_location();
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        fatal("Error during poll: %s\n", return_value_strerror$3);
      }

      continue;
    }

    if(!(display == /*enum*/td_false))
      copy_attrs_to_terminal(master);

    if(!((0x001 & (signed int)fdset[0l].revents) == 0))
    {
      result=safe_read(master, buffer, sizeof(char [1024l]) /*1024ul*/ );
      if(!(result >= 1l))
        continue;

      if(!(display == /*enum*/td_false))
        safe_write(1, (const void *)buffer, (unsigned long int)result);

      win_write_data(realWin, buffer, (unsigned long int)result);
      if(!(log_file == ((struct _IO_FILE *)NULL)))
      {
        write_escaped_string(log_file, buffer, (unsigned long int)result);
        fprintf(log_file, "\n");
      }

    }

    if(!((0x001 & (signed int)fdset[1l].revents) == 0))
    {
      if(!(do_handle_signals == /*enum*/td_false))
        handle_signals(exp, "for output");

      else
        break;
    }

    gettimeofday(&now, (struct timezone *)(void *)0);
    signed int return_value_timevaldiff$5;
    return_value_timevaldiff$5=timevaldiff(start, now);
    remaining_timeout = timeout - return_value_timevaldiff$5;
  }
  enum anonymous$10 return_value_win_compare$6;
  return_value_win_compare$6=win_compare(expectWin, realWin, describe != (enum anonymous$10)0 ? stderr : (struct _IO_FILE *)(void *)0);
  if(return_value_win_compare$6 == /*enum*/td_false)
  {
    if(!(picture_name == ((const char *)NULL)))
      win_write_image(expectWin, realWin, picture_name);

    unexpected("Visual differences after timeout", (const char *)(void *)0, (unsigned long int)0, exp->line);
    describe = (enum anonymous$10)td_false;
  }

  already_waited=timevaldiff(start, now);
}

// win_addnstr
// file src/window.c line 949
signed int win_addnstr(struct anonymous$12 *win, const char *str, unsigned long int n)
{
  unsigned long int bytes_read;
  char block[11l];
  unsigned int c;
  signed int retval = 0;
  signed int width;
  unsigned long int block_bytes;
  _Bool tmp_if_expr$2;
  _Bool return_value_uc_is_general_category_withtable$1;
  for( ; n >= 1ul; str = str + (signed long int)bytes_read)
  {
    bytes_read = n;
    c=utf8_get(str, &bytes_read);
    width=utf8_wcwidth(c);
    if(!(width >= 0))
      tmp_if_expr$2 = (_Bool)1;

    else
    {
      return_value_uc_is_general_category_withtable$1=uc_is_general_category_withtable(c, (unsigned int)(134217728 | 67108864 | 268435456 | 33554432 | 8388608 | 16777216));
      tmp_if_expr$2 = return_value_uc_is_general_category_withtable$1 != (_Bool)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$2)
    {
      retval = -2;
      goto __CPROVER_DUMP_L9;
    }

    else
      if(width == 0)
      {
        _win_add_zerowidth(win, str, bytes_read);
        goto __CPROVER_DUMP_L9;
      }

    block_bytes=_put_value((unsigned int)win->default_attrs, block + (signed long int)1);
    memcpy((void *)(block + (signed long int)1 + (signed long int)block_bytes), (const void *)str, bytes_read);
    block_bytes = block_bytes + bytes_read;
    _put_value((unsigned int)((block_bytes << 1) + (unsigned long int)(width == 2 ? 1 : 0)), block);
    block_bytes = block_bytes + 1ul;
    enum anonymous$10 return_value__win_write_blocks$3;
    return_value__win_write_blocks$3=_win_write_blocks(win, block, block_bytes);
    if(return_value__win_write_blocks$3 == /*enum*/td_false)
      return -3;

    if(win->paint_x >= win->width)
    {
      win->paint_y = win->paint_y + 1;
      win->paint_x = 0;
      if(win->paint_y >= win->height)
      {
        if(!(win->cup_active == /*enum*/td_false))
          win->paint_y = win->height - 1;

        else
        {
          win_scroll(win);
          win->paint_y = win->height - 1;
        }
      }

    }


  __CPROVER_DUMP_L9:
    ;
    n = n - bytes_read;
  }
  return retval;
}

// win_clrtobol
// file src/window.c line 1018
void win_clrtobol(struct anonymous$12 *win)
{
  char space_str[8l];
  unsigned long int space_str_bytes;
  signed int saved_paint_x;
  signed int saved_paint_y;
  signed int spaces;
  _Bool tmp_if_expr$1;
  if(win->paint_y >= win->height)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = win->paint_x >= win->width ? (_Bool)1 : (_Bool)0;
  signed int tmp_if_expr$2;
  if(!tmp_if_expr$1)
  {
    if(!(win_bce == /*enum*/td_false))
      tmp_if_expr$2 = win->default_attrs;

    else
      tmp_if_expr$2 = 0;
    signed int return_value_map_attr$3;
    return_value_map_attr$3=map_attr(tmp_if_expr$2);
    space_str_bytes=create_space_block(return_value_map_attr$3, space_str);
    saved_paint_x = win->paint_x;
    saved_paint_y = win->paint_y;
    win->paint_x = 0;
    spaces = saved_paint_x;
    for( ; spaces >= 1; spaces = spaces - 1)
      _win_write_blocks(win, space_str, space_str_bytes);
    win->paint_x = saved_paint_x;
    win->paint_y = saved_paint_y;
  }

}

// win_clrtobot
// file src/window.h line 188
void win_clrtobot(struct anonymous$12 *win)
{
  signed int saved_paint_x;
  signed int saved_paint_y;
  saved_paint_x = win->paint_x;
  saved_paint_y = win->paint_y;
  win_clrtoeol(win);
  for( ; !(1 + win->paint_y == win->height); win->paint_y = win->paint_y + 1)
    win_clrtoeol(win);
  win_clrtoeol(win);
  win->paint_x = saved_paint_x;
  win->paint_y = saved_paint_y;
}

// win_clrtoeol
// file src/window.c line 997
void win_clrtoeol(struct anonymous$12 *win)
{
  char space_str[8l];
  unsigned long int space_str_bytes;
  signed int saved_paint_x;
  signed int saved_paint_y;
  signed int spaces;
  _Bool tmp_if_expr$1;
  if(win->paint_y >= win->height)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = win->paint_x >= win->width ? (_Bool)1 : (_Bool)0;
  signed int tmp_if_expr$2;
  if(!tmp_if_expr$1)
  {
    if(!(win_bce == /*enum*/td_false))
      tmp_if_expr$2 = win->default_attrs;

    else
      tmp_if_expr$2 = 0;
    signed int return_value_map_attr$3;
    return_value_map_attr$3=map_attr(tmp_if_expr$2);
    space_str_bytes=create_space_block(return_value_map_attr$3, space_str);
    saved_paint_x = win->paint_x;
    saved_paint_y = win->paint_y;
    spaces = win->width - win->paint_x;
    for( ; spaces >= 1; spaces = spaces - 1)
      _win_write_blocks(win, space_str, space_str_bytes);
    win->paint_x = saved_paint_x;
    win->paint_y = saved_paint_y;
  }

}

// win_clrtotop
// file src/window.c line 1053
void win_clrtotop(struct anonymous$12 *win)
{
  signed int saved_paint_x;
  signed int saved_paint_y;
  signed int i;
  saved_paint_x = win->paint_x;
  saved_paint_y = win->paint_y;
  win->paint_x = 0;
  win->paint_y = 0;
  i = 0;
  for( ; !(i >= saved_paint_y); i = i + 1)
    win_clrtoeol(win);
  win->paint_x = saved_paint_x;
  win->paint_y = saved_paint_y;
  win_clrtobol(win);
}

// win_compare
// file src/window.h line 179
enum anonymous$10 win_compare(struct anonymous$12 *winA, struct anonymous$12 *winB, struct _IO_FILE *descr_out)
{
  signed int i;
  _Bool tmp_if_expr$1;
  if(!(winA->height == winB->height))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = winA->width != winB->width ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$8;
  signed int return_value_memcmp$7;
  _Bool tmp_if_expr$5;
  if(tmp_if_expr$1)
  {
    if(!(descr_out == ((struct _IO_FILE *)NULL)))
      fprintf(descr_out, "Terminals have different size: %dx%d vs. %dx%d\n", winA->width, winA->height, winB->width, winB->height);

    return (enum anonymous$10)td_false;
  }

  else
  {
    if(!(winA->cursor_state == winB->cursor_state))
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      if(!((signed int)winA->cursor_state == CURSOR_INVIS))
      {
        if(!(winA->paint_x == winB->paint_x))
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = winA->paint_y != winB->paint_y ? (_Bool)1 : (_Bool)0;
        tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$3 = (_Bool)0;
      tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
    {
      static const char *cursor_state_strings[3l] = { "visible", "invisible", "highly visible" };
      if(!(descr_out == ((struct _IO_FILE *)NULL)))
        fprintf(descr_out, "Cursor state is different: %s at %d,%d vs. %s at %d,%d\n", cursor_state_strings[(signed long int)winA->cursor_state], winA->paint_x + 1, winA->paint_y + 1, cursor_state_strings[(signed long int)winB->cursor_state], winB->paint_x + 1, winB->paint_y + 1);

      return (enum anonymous$10)td_false;
    }

    else
    {
      i = 0;
      for( ; !(i >= winA->height); i = i + 1)
      {
        if(!((winA->lines + (signed long int)i)->width == (winB->lines + (signed long int)i)->width))
          fatal("Internal error in tracking window contents.\n");

        if(!((winA->lines + (signed long int)i)->length == (winB->lines + (signed long int)i)->length))
          tmp_if_expr$8 = (_Bool)1;

        else
        {
          return_value_memcmp$7=memcmp((const void *)(winA->lines + (signed long int)i)->data, (const void *)(winB->lines + (signed long int)i)->data, (unsigned long int)(winA->lines + (signed long int)i)->length);
          tmp_if_expr$8 = return_value_memcmp$7 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$8)
        {
          if(!(descr_out == ((struct _IO_FILE *)NULL)))
          {
            unsigned long int block_size_bytesA;
            unsigned long int block_size_bytesB;
            unsigned int block_sizeA;
            unsigned int block_sizeB;
            signed int column;
            signed int offset = 0;
            column = 0;
            do
            {
              if(!(offset >= (winA->lines + (signed long int)i)->length))
                tmp_if_expr$5 = offset < (winB->lines + (signed long int)i)->length ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$5 = (_Bool)0;
              if(!tmp_if_expr$5)
                break;

              block_sizeA=get_value((winA->lines + (signed long int)i)->data + (signed long int)offset, &block_size_bytesA);
              block_sizeB=get_value((winB->lines + (signed long int)i)->data + (signed long int)offset, &block_size_bytesB);
              if(!(block_sizeA == block_sizeB))
                break;

              offset = offset + (signed int)block_size_bytesA;
              signed int return_value_memcmp$6;
              return_value_memcmp$6=memcmp((const void *)((winA->lines + (signed long int)i)->data + (signed long int)offset), (const void *)((winB->lines + (signed long int)i)->data + (signed long int)offset), (unsigned long int)(block_sizeA >> 1));
              if(!(return_value_memcmp$6 == 0))
                break;

              offset = offset + (signed int)(block_sizeA >> 1);
              column = column + (signed int)((block_sizeA & (unsigned int)1) + (unsigned int)1);
            }
            while((_Bool)1);
            fprintf(descr_out, "First difference encountered at position %d,%d\n", column + 1, i + 1);
          }

          return (enum anonymous$10)td_false;
        }

      }
      return (enum anonymous$10)td_true;
    }
  }
}

// win_copy
// file src/window.c line 142
struct anonymous$12 * win_copy(struct anonymous$12 *win)
{
  struct anonymous$12 *retval;
  signed int i;
  if(win == ((struct anonymous$12 *)NULL))
    return (struct anonymous$12 *)(void *)0;

  else
  {
    void *return_value_calloc$1;
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct anonymous$12) /*88ul*/ );
    retval = (struct anonymous$12 *)return_value_calloc$1;
    if(retval == ((struct anonymous$12 *)NULL))
      return (struct anonymous$12 *)(void *)0;

    else
    {
      retval->width = win->width;
      retval->height = win->height;
      retval->cursor_state = win->cursor_state;
      retval->paint_x = win->paint_x;
      retval->paint_y = win->paint_y;
      void *return_value_calloc$2;
      return_value_calloc$2=calloc((unsigned long int)1, sizeof(struct anonymous$14) /*24ul*/  * (unsigned long int)retval->height);
      retval->lines = (struct anonymous$14 *)return_value_calloc$2;
      if(retval->lines == ((struct anonymous$14 *)NULL))
      {
        win_del(retval);
        return (struct anonymous$12 *)(void *)0;
      }

      else
      {
        i = 0;
        for( ; !(i >= retval->height); i = i + 1)
        {
          (retval->lines + (signed long int)i)->length = (win->lines + (signed long int)i)->length;
          (retval->lines + (signed long int)i)->allocated = (win->lines + (signed long int)i)->length;
          void *return_value_malloc$3;
          return_value_malloc$3=malloc((unsigned long int)(retval->lines + (signed long int)i)->allocated);
          (retval->lines + (signed long int)i)->data = (char *)return_value_malloc$3;
          if((retval->lines + (signed long int)i)->data == ((char *)NULL))
          {
            win_del(retval);
            return (struct anonymous$12 *)(void *)0;
          }

          memcpy((void *)(retval->lines + (signed long int)i)->data, (const void *)(win->lines + (signed long int)i)->data, (unsigned long int)(win->lines + (signed long int)i)->length);
        }
        void *return_value_malloc$4;
        return_value_malloc$4=malloc((unsigned long int)80);
        retval->output_buffer.data = (char *)return_value_malloc$4;
        if(retval->output_buffer.data == ((char *)NULL))
        {
          win_del(retval);
          return (struct anonymous$12 *)(void *)0;
        }

        else
        {
          retval->output_buffer.allocated = 80;
          return retval;
        }
      }
    }
  }
}

// win_del
// file src/window.c line 127
void win_del(struct anonymous$12 *win)
{
  signed int i;
  if(!(win == ((struct anonymous$12 *)NULL)))
  {
    if(!(win->lines == ((struct anonymous$14 *)NULL)))
    {
      i = 0;
      for( ; !(i >= win->height); i = i + 1)
        free((void *)(win->lines + (signed long int)i)->data);
      free((void *)win->lines);
    }

    free((void *)win->output_buffer.data);
    free((void *)win);
  }

}

// win_get_cup
// file src/window.c line 1136
enum anonymous$10 win_get_cup(struct anonymous$12 *win)
{
  return win->cup_active;
}

// win_get_default_attrs
// file src/window.c line 430
signed int win_get_default_attrs(struct anonymous$12 *win)
{
  signed int return_value_get_attr$1;
  return_value_get_attr$1=get_attr(win->default_attrs);
  return return_value_get_attr$1;
}

// win_get_height
// file src/window.c line 301
signed int win_get_height(struct anonymous$12 *win)
{
  return win->height;
}

// win_get_paint_x
// file src/window.c line 293
signed int win_get_paint_x(struct anonymous$12 *win)
{
  return win->paint_x;
}

// win_get_paint_y
// file src/window.c line 297
signed int win_get_paint_y(struct anonymous$12 *win)
{
  return win->paint_y;
}

// win_get_width
// file src/window.c line 305
signed int win_get_width(struct anonymous$12 *win)
{
  return win->width;
}

// win_new
// file src/window.h line 167
struct anonymous$12 * win_new(signed int height, signed int width)
{
  struct anonymous$12 *retval;
  signed int i;
  if(!(height >= 1) || !(width >= 1))
    return (struct anonymous$12 *)(void *)0;

  else
  {
    void *return_value_calloc$1;
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct anonymous$12) /*88ul*/ );
    retval = (struct anonymous$12 *)return_value_calloc$1;
    if(retval == ((struct anonymous$12 *)NULL))
      return (struct anonymous$12 *)(void *)0;

    else
    {
      retval->width = width;
      retval->height = height;
      retval->cursor_state = (enum anonymous$15)CURSOR_NORM;
      void *return_value_calloc$2;
      return_value_calloc$2=calloc((unsigned long int)1, sizeof(struct anonymous$14) /*24ul*/  * (unsigned long int)height);
      retval->lines = (struct anonymous$14 *)return_value_calloc$2;
      if(retval->lines == ((struct anonymous$14 *)NULL))
      {
        win_del(retval);
        return (struct anonymous$12 *)(void *)0;
      }

      else
      {
        i = 0;
        for( ; !(i >= height); i = i + 1)
        {
          (retval->lines + (signed long int)i)->allocated = width > 80 ? 80 : width;
          void *return_value_malloc$3;
          return_value_malloc$3=malloc((unsigned long int)(retval->lines + (signed long int)i)->allocated);
          (retval->lines + (signed long int)i)->data = (char *)return_value_malloc$3;
          if((retval->lines + (signed long int)i)->data == ((char *)NULL))
          {
            win_del(retval);
            return (struct anonymous$12 *)(void *)0;
          }

        }
        adjust_lines(retval);
        void *return_value_malloc$4;
        return_value_malloc$4=malloc((unsigned long int)80);
        retval->output_buffer.data = (char *)return_value_malloc$4;
        if(retval->output_buffer.data == ((char *)NULL))
        {
          win_del(retval);
          return (struct anonymous$12 *)(void *)0;
        }

        else
        {
          retval->output_buffer.allocated = 80;
          return retval;
        }
      }
    }
  }
}

// win_resize
// file src/window.h line 173
enum anonymous$10 win_resize(struct anonymous$12 *win, signed int height, signed int width)
{
  signed int i;
  _Bool tmp_if_expr$1;
  if(!(height >= 1) || !(width >= 1))
    return (enum anonymous$10)td_false;

  else
    if(win->lines == ((struct anonymous$14 *)NULL))
    {
      win->height = height;
      win->width = width;
      return (enum anonymous$10)td_true;
    }

    else
    {
      if(!(win->height >= height))
      {
        void *result;
        result=realloc((void *)win->lines, (unsigned long int)height * sizeof(struct anonymous$14) /*24ul*/ );
        if(result == NULL)
          return (enum anonymous$10)td_false;

        win->lines = (struct anonymous$14 *)result;
        memset((void *)(win->lines + (signed long int)win->height), 0, sizeof(struct anonymous$14) /*24ul*/  * (unsigned long int)(height - win->height));
        i = win->height;
        for( ; !(i >= height); i = i + 1)
        {
          void *return_value_malloc$2;
          return_value_malloc$2=malloc((unsigned long int)80);
          (win->lines + (signed long int)i)->data = (char *)return_value_malloc$2;
          if((win->lines + (signed long int)i)->data == ((char *)NULL))
          {
            i = win->height;
            do
            {
              if(!(i >= height))
                tmp_if_expr$1 = (win->lines + (signed long int)i)->data != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$1 = (_Bool)0;
              if(!tmp_if_expr$1)
                break;

              free((void *)(win->lines + (signed long int)i)->data);
              i = i + 1;
            }
            while((_Bool)1);
            return (enum anonymous$10)td_false;
          }

          (win->lines + (signed long int)i)->allocated = 80;
        }
      }

      else
        if(!(height >= win->height))
        {
          i = height;
          for( ; !(i >= win->height); i = i + 1)
            free((void *)(win->lines + (signed long int)i)->data);
          memset((void *)(win->lines + (signed long int)height), 0, sizeof(struct anonymous$14) /*24ul*/  * (unsigned long int)(win->height - height));
        }

      adjust_lines(win);
      win->height = height;
      win->width = width;
      return (enum anonymous$10)td_true;
    }
}

// win_restore_cursor
// file src/window.c line 1127
void win_restore_cursor(struct anonymous$12 *win)
{
  win->paint_x = win->saved_cursor_x;
  win->paint_y = win->saved_cursor_y;
}

// win_save_cursor
// file src/window.c line 1122
void win_save_cursor(struct anonymous$12 *win)
{
  win->saved_cursor_x = win->paint_x;
  win->saved_cursor_y = win->paint_y;
}

// win_scroll
// file src/window.c line 309
void win_scroll(struct anonymous$12 *win)
{
  struct anonymous$14 first_line = win->lines[(signed long int)0];
  signed int i = 1;
  for( ; !(i >= win->height); i = i + 1)
    win->lines[(signed long int)(i - 1)] = win->lines[(signed long int)i];
  first_line.length = 0;
  first_line.width = 0;
  win->lines[(signed long int)(win->height - 1)] = first_line;
  adjust_lines(win);
}

// win_scroll_back
// file src/window.c line 321
void win_scroll_back(struct anonymous$12 *win)
{
  struct anonymous$14 last_line = win->lines[(signed long int)(win->height - 1)];
  signed int i = win->height - 1;
  for( ; i >= 1; i = i - 1)
    win->lines[(signed long int)i] = win->lines[(signed long int)(i - 1)];
  last_line.length = 0;
  last_line.width = 0;
  win->lines[(signed long int)0] = last_line;
  adjust_lines(win);
}

// win_set_cup
// file src/window.c line 1132
void win_set_cup(struct anonymous$12 *win, enum anonymous$10 cup_active)
{
  win->cup_active = cup_active;
}

// win_set_cursor
// file src/window.c line 1118
void win_set_cursor(struct anonymous$12 *win, enum anonymous$15 cursor_state)
{
  win->cursor_state = cursor_state;
}

// win_set_default_attrs
// file src/window.c line 426
void win_set_default_attrs(struct anonymous$12 *win, signed int attrs)
{
  win->default_attrs=map_attr(attrs);
}

// win_set_paint
// file src/window.h line 174
void win_set_paint(struct anonymous$12 *win, signed int y, signed int x)
{
  signed int tmp_if_expr$2;
  signed int tmp_if_expr$1;
  if(!(x >= 0))
    tmp_if_expr$2 = 0;

  else
  {
    if(!(x >= win->width))
      tmp_if_expr$1 = x;

    else
      tmp_if_expr$1 = win->width - 1;
    tmp_if_expr$2 = tmp_if_expr$1;
  }
  win->paint_x = tmp_if_expr$2;
  signed int tmp_if_expr$4;
  signed int tmp_if_expr$3;
  if(!(y >= 0))
    tmp_if_expr$4 = 0;

  else
  {
    if(!(y >= win->height))
      tmp_if_expr$3 = y;

    else
      tmp_if_expr$3 = win->height - 1;
    tmp_if_expr$4 = tmp_if_expr$3;
  }
  win->paint_y = tmp_if_expr$4;
}

// win_write_data
// file src/write_stringlist.h line 20
void win_write_data(struct anonymous$12 *win, char *data, unsigned long int length)
{
  enum anonymous$10 return_value_ensure_space$1;
  return_value_ensure_space$1=ensure_space(&win->output_buffer, length);
  if(return_value_ensure_space$1 == /*enum*/td_false)
    fatal("Out of memory\n");

  memcpy((void *)(win->output_buffer.data + (signed long int)win->output_buffer.length), (const void *)data, length);
  win->output_buffer.length = win->output_buffer.length + (signed int)length;
  parse_output_buffer(win);
}

// win_write_image
// file src/window.h line 201
void win_write_image(struct anonymous$12 *winA, struct anonymous$12 *winB, const char *name)
{
  struct _cairo_surface *surface;
  signed int tmp_if_expr$1;
  if(!(winB->height >= winA->height))
    tmp_if_expr$1 = winA->height;

  else
    tmp_if_expr$1 = winB->height;
  surface=cairo_image_surface_create((enum _cairo_format)CAIRO_FORMAT_ARGB32, winA->width * cell_width + winB->width * cell_width + 4, tmp_if_expr$1 * cell_height);
  struct _cairo *cr;
  cr=cairo_create(surface);
  struct _cairo_surface *mask_surface;
  mask_surface=cairo_image_surface_create((enum _cairo_format)CAIRO_FORMAT_A1, cell_width, cell_height);
  struct _cairo *mask_cr;
  mask_cr=cairo_create(mask_surface);
  struct _PangoLayout *layout;
  struct _PangoFontDescription *font_description;
  struct _PangoFontDescription *bold_font_description;
  cairo_set_source_rgba(mask_cr, (double)0, (double)0, (double)0, (double)1);
  cairo_paint(mask_cr);
  font_description=pango_font_description_new();
  pango_font_description_set_family(font_description, option_font);
  bold_font_description=pango_font_description_new();
  pango_font_description_set_absolute_size(font_description, (double)(cell_height * 1024) * 0.75);
  pango_font_description_set_family(bold_font_description, option_font);
  pango_font_description_set_weight(bold_font_description, (enum anonymous$4)PANGO_WEIGHT_BOLD);
  pango_font_description_set_absolute_size(bold_font_description, (double)(cell_height * 1024) * 0.75);
  layout=pango_cairo_create_layout(cr);
  pango_layout_set_font_description(layout, font_description);
  write_single_image(winA, 0, cr, layout, font_description, bold_font_description);
  write_single_image(winB, winA->width * cell_width + 4, cr, layout, font_description, bold_font_description);
  g_object_unref((void *)layout);
  pango_font_description_free(font_description);
  cairo_destroy(cr);
  cairo_surface_write_to_png(surface, name);
  cairo_surface_destroy(surface);
  cairo_destroy(mask_cr);
  cairo_surface_destroy(mask_surface);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// win_write_stringlist
// file src/write_stringlist.h line 21
void win_write_stringlist(struct anonymous$12 *win, struct StringListNode *string)
{
  for( ; !(string == ((struct StringListNode *)NULL)); string = string->next)
    win_write_data(win, string->string, (unsigned long int)string->length);
}

// write_chars
// file src/write_image.c line 134
static void write_chars(struct _cairo *cr, struct _PangoLayout *layout, const char *str, unsigned long int len)
{
  unsigned long int idx = (unsigned long int)0;
  unsigned long int bytes;
  for( ; !(idx >= len); idx = idx + bytes)
  {
    get_value(str + (signed long int)idx, &bytes);
    pango_layout_set_text(layout, str + (signed long int)idx, (signed int)bytes);
    pango_cairo_show_layout(cr, layout);
  }
}

// write_echo
// file src/common.c line 105
void write_echo(const unsigned char *buffer, unsigned long int size)
{
  unsigned long int write_from = (unsigned long int)0;
  unsigned long int i;
  char ctrl[2l] = { (char)94, (char)0 };
  i = (unsigned long int)0;
  for( ; !(i >= size); i = i + 1ul)
    if(!((signed int)buffer[(signed long int)i] >= 32))
    {
      if(!((signed int)buffer[(signed long int)i] == 4))
      {
        if(!((signed int)buffer[(signed long int)i] == 9))
        {
          if(!((signed int)buffer[(signed long int)i] == 10))
          {
            if(!((signed int)buffer[(signed long int)i] == 13))
            {
              if(!(write_from >= i))
                safe_write(1, (const void *)(buffer + (signed long int)write_from), i - write_from);

              write_from = i + (unsigned long int)1;
              ctrl[(signed long int)1] = controlMap[(signed long int)buffer[(signed long int)i]];
              safe_write(1, (const void *)ctrl, (unsigned long int)2);
            }

          }

        }

      }

    }

  if(!(write_from >= i))
    safe_write(1, (const void *)(buffer + (signed long int)write_from), i - write_from);

}

// write_escaped_string
// file src/common.c line 440
void write_escaped_string(struct _IO_FILE *out, const char *string, unsigned long int length)
{
  unsigned long int i;
  fputc(34, out);
  i = (unsigned long int)0;
  _Bool tmp_if_expr$1;
  for( ; !(i >= length); string = string + 1l)
  {
    const unsigned short int **return_value___ctype_b_loc$2;
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((16384 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*string]) == 0)
      fprintf(out, "\\%03o", (unsigned char)*string);

    else
    {
      if((signed int)*string == 92)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)*string == 34 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
      {
        fputc(92, out);
        fputc((signed int)*string, out);
      }

      else
        fputc((signed int)*string, out);
    }
    i = i + 1ul;
  }
  fputs("\"", out);
}

// write_record
// file src/common.c line 252
void write_record(struct _IO_FILE *output, enum anonymous$3 dir, signed int delay, signed int min_delay, unsigned char *buffer, signed long int length)
{
  signed int i;
  if(!(last_type == dir))
  {
    if((signed int)last_type == TYPE_OUTPUT)
      fputc(34, output);

    if(!((signed int)last_type == TYPE_NONE))
      fputc(10, output);

    fprintf(output, "%s", (signed int)dir == TYPE_OUTPUT ? "expect " : "send");
    if((signed int)dir == TYPE_OUTPUT)
      fputc(34, output);

    last_type = dir;
  }

  if((signed int)dir == TYPE_INPUT)
  {
    fprintf(output, " %d ", delay);
    if(min_delay >= 1)
      fprintf(output, ">%d ", min_delay);

    fputc(34, output);
  }

  i = 0;
  const unsigned short int **return_value___ctype_b_loc$2;
  _Bool tmp_if_expr$1;
  for( ; !((signed long int)i >= length); i = i + 1)
    if((signed int)buffer[(signed long int)i] == 13 && (signed int)dir == TYPE_OUTPUT)
      fputs("\\r\"\n\t\"", output);

    else
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if((16384 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)buffer[(signed long int)i]]) == 0)
        fprintf(output, "\\%03o", buffer[(signed long int)i]);

      else
      {
        if((signed int)buffer[(signed long int)i] == 34)
          tmp_if_expr$1 = (_Bool)1;

        else
          tmp_if_expr$1 = (signed int)buffer[(signed long int)i] == 92 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$1)
        {
          fputc(92, output);
          fputc((signed int)buffer[(signed long int)i], output);
        }

        else
          fputc((signed int)buffer[(signed long int)i], output);
      }
    }
  if((signed int)dir == TYPE_INPUT)
    fputc(34, output);

}

// write_single_image
// file src/write_image.c line 154
static void write_single_image(struct anonymous$12 *win, signed int offset, struct _cairo *cr, struct _PangoLayout *layout, struct _PangoFontDescription *font_description, struct _PangoFontDescription *bold_font_description)
{
  signed int i;
  signed int j;
  i = 0;
  _Bool tmp_if_expr$1;
  unsigned long int return_value_strlen$4;
  for( ; !(i >= win->height); i = i + 1)
  {
    signed int idx;
    j = 0;
    idx = 0;
    do
    {
      if(!(j >= win->width))
        tmp_if_expr$1 = idx < (win->lines + (signed long int)i)->length ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(!tmp_if_expr$1)
        break;

      unsigned int block_size;
      signed int attr;
      unsigned long int bytes;
      enum anonymous$10 fullwidth = (enum anonymous$10)td_false;
      block_size=get_value((win->lines + (signed long int)i)->data + (signed long int)idx, &bytes);
      if((1 & (signed int)block_size) == 1)
        fullwidth = (enum anonymous$10)td_true;

      cairo_rectangle(cr, (double)(j * cell_width + offset), (double)(i * cell_height), (double)(fullwidth != (enum anonymous$10)0 ? cell_width * 2 : cell_width), (double)cell_height);
      cairo_clip(cr);
      cairo_rectangle(cr, (double)(j * cell_width + offset), (double)(i * cell_height), (double)(fullwidth != (enum anonymous$10)0 ? cell_width * 2 : cell_width), (double)cell_height);
      block_size = block_size >> 1;
      idx = idx + (signed int)bytes;
      unsigned int return_value_get_value$2;
      return_value_get_value$2=get_value((win->lines + (signed long int)i)->data + (signed long int)idx, &bytes);
      attr=get_attr((signed int)return_value_get_value$2);
      idx = idx + (signed int)bytes;
      block_size = block_size - (unsigned int)bytes;
      set_context_from_attr_idx(cr, layout, font_description, bold_font_description, attr);
      if((1 & attr) == 0)
      {
        cairo_move_to(cr, (double)(j * cell_width + offset), (double)(i * cell_height));
        if(!((64 & attr) == 0))
        {
          unsigned long int k = (unsigned long int)0;
          for( ; !(k >= 32ul); k = k + 1ul)
            if(acs_map[(signed long int)k].idx == (win->lines + (signed long int)i)->data[(signed long int)idx])
            {
              unsigned long int return_value_strlen$3;
              return_value_strlen$3=strlen(acs_map[(signed long int)k].utf8);
              pango_layout_set_text(layout, acs_map[(signed long int)k].utf8, (signed int)return_value_strlen$3);
              signed int return_value_pango_layout_get_unknown_glyphs_count$5;
              return_value_pango_layout_get_unknown_glyphs_count$5=pango_layout_get_unknown_glyphs_count(layout);
              if(return_value_pango_layout_get_unknown_glyphs_count$5 >= 1)
              {
                return_value_strlen$4=strlen(acs_map[(signed long int)k].alt);
                pango_layout_set_text(layout, acs_map[(signed long int)k].alt, (signed int)return_value_strlen$4);
              }

              pango_cairo_show_layout(cr, layout);
              break;
            }

        }

        else
          write_chars(cr, layout, (win->lines + (signed long int)i)->data + (signed long int)idx, (unsigned long int)block_size);
      }

      if(!((2 & attr) == 0))
      {
        cairo_move_to(cr, (double)(j * cell_width) + 0.5 + (double)offset, (double)((i + 1) * cell_height) - 0.5);
        cairo_line_to(cr, ((double)((j + 1) * cell_width) - 0.5) + (double)offset, (double)((i + 1) * cell_height) - 0.5);
        cairo_close_path(cr);
        cairo_set_line_width(cr, (double)1);
        cairo_stroke(cr);
      }

      idx = idx + (signed int)block_size;
      if(!(fullwidth == /*enum*/td_false))
        j = j + 1;

      cairo_reset_clip(cr);
      j = j + 1;
    }
    while((_Bool)1);
  }
  if(!((signed int)win->cursor_state == CURSOR_INVIS))
  {
    if((signed int)win->cursor_state == CURSOR_NORM)
    {
      cairo_rectangle(cr, (double)(win->paint_x * cell_width) + 0.5 + (double)offset, (double)(win->paint_y * cell_height) + 0.5, (double)(cell_width - 1), (double)(cell_height - 1));
      cairo_set_line_width(cr, (double)1);
    }

    else
    {
      cairo_rectangle(cr, (double)(win->paint_x * cell_width + 1 + offset), (double)(win->paint_y * cell_height + 1), (double)(cell_width - 2), (double)(cell_height - 2));
      cairo_set_line_width(cr, (double)2);
    }
    cairo_set_operator(cr, (enum _cairo_operator)CAIRO_OPERATOR_DIFFERENCE);
    cairo_set_source_rgb(cr, (double)255, (double)255, (double)255);
    cairo_stroke(cr);
    cairo_set_operator(cr, (enum _cairo_operator)CAIRO_OPERATOR_OVER);
  }

}

// write_text
// file src/write_stringlist.c line 377
static signed int write_text(struct anonymous$12 *win, signed int start, signed int end, enum anonymous$10 force)
{
  char write_text$$1$$output[1024l];
  char *output_ptr;
  char *input_ptr = win->output_buffer.data + (signed long int)start;
  unsigned long int inbytes_left = (unsigned long int)(end - start);
  unsigned long int outbytes_left;
  unsigned long int result;
  signed int saved_errno;
  if(iconv_handle == (void *)-1)
  {
    win_addnstr(win, win->output_buffer.data + (signed long int)start, inbytes_left);
    return 0;
  }

  else
    while((_Bool)1)
    {
      output_ptr = write_text$$1$$output;
      outbytes_left = sizeof(char [1024l]) /*1024ul*/ ;
      result=iconv(iconv_handle, &input_ptr, &inbytes_left, &output_ptr, &outbytes_left);
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      saved_errno = *return_value___errno_location$1;
      if(!(outbytes_left == sizeof(char [1024l]) /*1024ul*/ ))
        win_addnstr(win, write_text$$1$$output, sizeof(char [1024l]) /*1024ul*/  - outbytes_left);

      if(result == 18446744073709551615ul)
      {
        if(saved_errno == 84)
        {
          input_ptr = input_ptr + 1l;
          inbytes_left = inbytes_left - 1ul;
          win_addnstr(win, "ÔøΩ", (unsigned long int)3);
        }

        else
          if(saved_errno == 22)
          {
            if(!(force == /*enum*/td_false))
            {
              inbytes_left = (unsigned long int)0;
              outbytes_left = (unsigned long int)0;
              iconv(iconv_handle, (char ** restrict )(void *)0, &inbytes_left, (char ** restrict )(void *)0, &outbytes_left);
              win_addnstr(win, "ÔøΩ", (unsigned long int)3);
              return 0;
            }

            else
              return (signed int)inbytes_left;
          }

          else
            if(!(saved_errno == 7))
              fatal("Error in character-set conversion\n");

      }

      else
        return 0;
    }
}

// yy_create_buffer
// file .objects/input_lex.c line 1361
struct yy_buffer_state * yy_create_buffer(struct _IO_FILE *file, signed int size)
{
  struct yy_buffer_state *b;
  void *return_value_yyalloc$1;
  return_value_yyalloc$1=yyalloc(sizeof(struct yy_buffer_state) /*64ul*/ );
  b = (struct yy_buffer_state *)return_value_yyalloc$1;
  if(b == ((struct yy_buffer_state *)NULL))
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");

  b->yy_buf_size = (unsigned long int)size;
  void *return_value_yyalloc$2;
  return_value_yyalloc$2=yyalloc(b->yy_buf_size + (unsigned long int)2);
  b->yy_ch_buf = (char *)return_value_yyalloc$2;
  if(b->yy_ch_buf == ((char *)NULL))
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");

  b->yy_is_our_buffer = 1;
  yy_init_buffer(b, file);
  return b;
}

// yy_delete_buffer
// file .objects/input_lex.c line 1389
void yy_delete_buffer(struct yy_buffer_state *b)
{
  struct yy_buffer_state *tmp_if_expr$1;
  if(!(b == ((struct yy_buffer_state *)NULL)))
  {
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$1 = (struct yy_buffer_state *)(void *)0;
    if(b == tmp_if_expr$1)
      yy_buffer_stack[(signed long int)yy_buffer_stack_top] = (struct yy_buffer_state *)0;

    if(!(b->yy_is_our_buffer == 0))
      yyfree((void *)b->yy_ch_buf);

    yyfree((void *)b);
  }

}

// yy_fatal_error
// file .objects/input_lex.c line 1651
static void yy_fatal_error(const char *msg)
{
  fprintf(stderr, "%s\n", msg);
  exit(2);
}

// yy_flush_buffer
// file .objects/input_lex.c line 1440
void yy_flush_buffer(struct yy_buffer_state *b)
{
  struct yy_buffer_state *tmp_if_expr$1;
  if(!(b == ((struct yy_buffer_state *)NULL)))
  {
    b->yy_n_chars = 0;
    b->yy_ch_buf[(signed long int)0] = (char)0;
    b->yy_ch_buf[(signed long int)1] = (char)0;
    b->yy_buf_pos = &b->yy_ch_buf[(signed long int)0];
    b->yy_at_bol = 1;
    b->yy_buffer_status = 0;
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$1 = (struct yy_buffer_state *)(void *)0;
    if(b == tmp_if_expr$1)
      yy_load_buffer_state();

  }

}

// yy_get_next_buffer
// file .objects/input_lex.c line 1031
static signed int yy_get_next_buffer(void)
{
  char *dest = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf;
  char *source = yytext;
  signed int number_to_move;
  signed int i;
  signed int ret_val;
  if(!(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf + (signed long int)(1 + yy_n_chars) >= yy_c_buf_p))
    yy_fatal_error("fatal flex scanner internal error--end of buffer missed");

  char *tmp_post$1;
  char *tmp_post$2;
  struct yy_buffer_state *tmp_if_expr$3;
  _Bool tmp_if_expr$5;
  unsigned long int tmp_post$6;
  signed int return_value_ferror$7;
  unsigned long int return_value_fread$9;
  signed int return_value_ferror$10;
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
      tmp_post$1 = dest;
      dest = dest + 1l;
      tmp_post$2 = source;
      source = source + 1l;
      *tmp_post$1 = *tmp_post$2;
    }
    if(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buffer_status == 2)
    {
      yy_n_chars = 0;
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars = yy_n_chars;
    }

    else
    {
      signed int num_to_read = (signed int)((yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_size - (unsigned long int)number_to_move) - (unsigned long int)1);
      while(!(num_to_read >= 1))
      {
        struct yy_buffer_state *b;
        if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
          tmp_if_expr$3 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

        else
          tmp_if_expr$3 = (struct yy_buffer_state *)(void *)0;
        b = tmp_if_expr$3;
        signed int yy_c_buf_p_offset = (signed int)(yy_c_buf_p - b->yy_ch_buf);
        if(!(b->yy_is_our_buffer == 0))
        {
          signed int new_size = (signed int)(b->yy_buf_size * (unsigned long int)2);
          if(!(new_size >= 1))
            b->yy_buf_size = b->yy_buf_size + b->yy_buf_size / (unsigned long int)8;

          else
            b->yy_buf_size = b->yy_buf_size * (unsigned long int)2;
          void *return_value_yyrealloc$4;
          return_value_yyrealloc$4=yyrealloc((void *)b->yy_ch_buf, b->yy_buf_size + (unsigned long int)2);
          b->yy_ch_buf = (char *)return_value_yyrealloc$4;
        }

        else
          b->yy_ch_buf = ((char *)NULL);
        if(b->yy_ch_buf == ((char *)NULL))
          yy_fatal_error("fatal error - scanner input buffer overflow");

        yy_c_buf_p = &b->yy_ch_buf[(signed long int)yy_c_buf_p_offset];
        num_to_read = (signed int)((yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_size - (unsigned long int)number_to_move) - (unsigned long int)1);
      }
      if(num_to_read >= 8193)
        num_to_read = 8192;

      if(!(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_is_interactive == 0))
      {
        signed int c = 42;
        unsigned long int n = (unsigned long int)0;
        do
        {
          if(!(n >= (unsigned long int)num_to_read))
          {
            c=_IO_getc(yyin);
            tmp_if_expr$5 = c != -1 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$5 = (_Bool)0;
          if(c == 10 || !tmp_if_expr$5)
            break;

          (&yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)number_to_move])[(signed long int)n] = (char)c;
          n = n + 1ul;
        }
        while((_Bool)1);
        if(c == 10)
        {
          tmp_post$6 = n;
          n = n + 1ul;
          (&yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)number_to_move])[(signed long int)tmp_post$6] = (char)c;
        }

        if(c == -1)
        {
          return_value_ferror$7=ferror(yyin);
          if(!(return_value_ferror$7 == 0))
            yy_fatal_error("input in flex scanner failed");

        }

        yy_n_chars = (signed int)n;
      }

      else
      {
        signed int *return_value___errno_location$8;
        return_value___errno_location$8=__errno_location();
        *return_value___errno_location$8 = 0;
        do
        {
          return_value_fread$9=fread((void *)&yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)number_to_move], (unsigned long int)1, (unsigned long int)num_to_read, yyin);
          yy_n_chars = (signed int)return_value_fread$9;
          if(!(yy_n_chars == 0))
            break;

          return_value_ferror$10=ferror(yyin);
          if(return_value_ferror$10 == 0)
            break;

          signed int *return_value___errno_location$11;
          return_value___errno_location$11=__errno_location();
          if(!(*return_value___errno_location$11 == 4))
          {
            yy_fatal_error("input in flex scanner failed");
            break;
          }

          signed int *return_value___errno_location$12;
          return_value___errno_location$12=__errno_location();
          *return_value___errno_location$12 = 0;
          clearerr(yyin);
        }
        while((_Bool)1);
      }
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars = yy_n_chars;
    }
    if(yy_n_chars == 0)
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
    if(!(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_size >= (unsigned long int)(number_to_move + yy_n_chars)))
    {
      unsigned long int yy_get_next_buffer$$1$$5$$new_size = (unsigned long int)(yy_n_chars + number_to_move + (yy_n_chars >> 1));
      void *return_value_yyrealloc$13;
      return_value_yyrealloc$13=yyrealloc((void *)yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf, yy_get_next_buffer$$1$$5$$new_size);
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf = (char *)return_value_yyrealloc$13;
      if(yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf == ((char *)NULL))
        yy_fatal_error("out of dynamic memory in yy_get_next_buffer()");

    }

    yy_n_chars = yy_n_chars + number_to_move;
    yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)yy_n_chars] = (char)0;
    yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)(yy_n_chars + 1)] = (char)0;
    yytext = &yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)0];
    return ret_val;
  }
}

// yy_get_previous_state
// file .objects/input_lex.c line 1165
static signed int yy_get_previous_state(void)
{
  signed int yy_current_state;
  char *yy_cp;
  yy_current_state = yy_start;
  yy_cp = yytext + (signed long int)0;
  signed int tmp_if_expr$1;
  for( ; !(yy_cp >= yy_c_buf_p); yy_cp = yy_cp + 1l)
  {
    unsigned char yy_c;
    if(!(*yy_cp == 0))
      tmp_if_expr$1 = yy_ec[(signed long int)(unsigned int)(unsigned char)*yy_cp];

    else
      tmp_if_expr$1 = 1;
    yy_c = (unsigned char)tmp_if_expr$1;
    if(!(yy_accept[(signed long int)yy_current_state] == 0))
    {
      yy_last_accepting_state = yy_current_state;
      yy_last_accepting_cpos = yy_cp;
    }

    while(!((signed int)yy_chk[(signed long int)((signed int)yy_base[(signed long int)yy_current_state] + (signed int)yy_c)] == yy_current_state))
    {
      yy_current_state = (signed int)yy_def[(signed long int)yy_current_state];
      if(yy_current_state >= 79)
        yy_c = (unsigned char)yy_meta[(signed long int)(unsigned int)yy_c];

    }
    yy_current_state = (signed int)yy_nxt[(signed long int)((unsigned int)yy_base[(signed long int)yy_current_state] + (unsigned int)yy_c)];
  }
  return yy_current_state;
}

// yy_init_buffer
// file .objects/input_lex.c line 1412
static void yy_init_buffer(struct yy_buffer_state *b, struct _IO_FILE *file)
{
  signed int oerrno;
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  oerrno = *return_value___errno_location$1;
  yy_flush_buffer(b);
  b->yy_input_file = file;
  b->yy_fill_buffer = 1;
  struct yy_buffer_state *tmp_if_expr$2;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr$2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr$2 = (struct yy_buffer_state *)(void *)0;
  if(!(b == tmp_if_expr$2))
  {
    b->yy_bs_lineno = 1;
    b->yy_bs_column = 0;
  }

  signed int tmp_if_expr$5;
  signed int return_value_fileno$3;
  signed int return_value_isatty$4;
  if(!(file == ((struct _IO_FILE *)NULL)))
  {
    return_value_fileno$3=fileno(file);
    return_value_isatty$4=isatty(return_value_fileno$3);
    tmp_if_expr$5 = (signed int)(return_value_isatty$4 > 0);
  }

  else
    tmp_if_expr$5 = 0;
  b->yy_is_interactive = tmp_if_expr$5;
  signed int *return_value___errno_location$6;
  return_value___errno_location$6=__errno_location();
  *return_value___errno_location$6 = oerrno;
}

// yy_init_globals
// file .objects/input_lex.c line 1754
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
// file .objects/input_lex.c line 1347
static void yy_load_buffer_state(void)
{
  yy_n_chars = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars;
  yy_c_buf_p = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_pos;
  yytext = yy_c_buf_p;
  yyin = yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_input_file;
  yy_hold_char = *yy_c_buf_p;
}

// yy_scan_buffer
// file .objects/input_lex.c line 1567
struct yy_buffer_state * yy_scan_buffer(char *base, unsigned long int size)
{
  struct yy_buffer_state *b;
  _Bool tmp_if_expr$1;
  if(!(size >= 2ul))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)base[(signed long int)(size - (unsigned long int)2)] != 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = (signed int)base[(signed long int)(size - (unsigned long int)1)] != 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$2)
    return ((struct yy_buffer_state *)NULL);

  else
  {
    void *return_value_yyalloc$3;
    return_value_yyalloc$3=yyalloc(sizeof(struct yy_buffer_state) /*64ul*/ );
    b = (struct yy_buffer_state *)return_value_yyalloc$3;
    if(b == ((struct yy_buffer_state *)NULL))
      yy_fatal_error("out of dynamic memory in yy_scan_buffer()");

    b->yy_buf_size = size - (unsigned long int)2;
    b->yy_ch_buf = base;
    b->yy_buf_pos = b->yy_ch_buf;
    b->yy_is_our_buffer = 0;
    b->yy_input_file = ((struct _IO_FILE *)NULL);
    b->yy_n_chars = (signed int)b->yy_buf_size;
    b->yy_is_interactive = 0;
    b->yy_at_bol = 1;
    b->yy_fill_buffer = 0;
    b->yy_buffer_status = 0;
    yy_switch_to_buffer(b);
    return b;
  }
}

// yy_scan_bytes
// file .objects/input_lex.c line 1617
struct yy_buffer_state * yy_scan_bytes(const char *yybytes, signed int _yybytes_len)
{
  struct yy_buffer_state *b;
  char *buf;
  unsigned long int n;
  signed int i;
  n = (unsigned long int)(_yybytes_len + 2);
  void *return_value_yyalloc$1;
  return_value_yyalloc$1=yyalloc(n);
  buf = (char *)return_value_yyalloc$1;
  if(buf == ((char *)NULL))
    yy_fatal_error("out of dynamic memory in yy_scan_bytes()");

  i = 0;
  for( ; !(i >= _yybytes_len); i = i + 1)
    buf[(signed long int)i] = yybytes[(signed long int)i];
  buf[(signed long int)(_yybytes_len + 1)] = (char)0;
  buf[(signed long int)_yybytes_len] = buf[(signed long int)(_yybytes_len + 1)];
  b=yy_scan_buffer(buf, n);
  if(b == ((struct yy_buffer_state *)NULL))
    yy_fatal_error("bad buffer in yy_scan_bytes()");

  b->yy_is_our_buffer = 1;
  return b;
}

// yy_scan_string
// file .objects/input_lex.c line 1604
struct yy_buffer_state * yy_scan_string(const char *yystr)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(yystr);
  struct yy_buffer_state *return_value_yy_scan_bytes$2;
  return_value_yy_scan_bytes$2=yy_scan_bytes(yystr, (signed int)return_value_strlen$1);
  return return_value_yy_scan_bytes$2;
}

// yy_switch_to_buffer
// file .objects/input_lex.c line 1316
void yy_switch_to_buffer(struct yy_buffer_state *new_buffer)
{
  yyensure_buffer_stack();
  struct yy_buffer_state *tmp_if_expr$1;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr$1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr$1 = (struct yy_buffer_state *)(void *)0;
  struct yy_buffer_state *tmp_if_expr$2;
  if(!(tmp_if_expr$1 == new_buffer))
  {
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$2 = (struct yy_buffer_state *)(void *)0;
    if(!(tmp_if_expr$2 == ((struct yy_buffer_state *)NULL)))
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
// file .objects/input_lex.c line 1197
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
    if(yy_current_state >= 79)
      yy_c = (unsigned char)yy_meta[(signed long int)(unsigned int)yy_c];

  }
  yy_current_state = (signed int)yy_nxt[(signed long int)((unsigned int)yy_base[(signed long int)yy_current_state] + (unsigned int)yy_c)];
  yy_is_jam = (signed int)(yy_current_state == 78);
  return yy_is_jam != 0 ? 0 : yy_current_state;
}

// yyalloc
// file .objects/input_lex.c line 1828
void * yyalloc(unsigned long int size)
{
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(size);
  return (void *)return_value_malloc$1;
}

// yyensure_buffer_stack
// file .objects/input_lex.c line 1518
static void yyensure_buffer_stack(void)
{
  signed int num_to_alloc;
  if(yy_buffer_stack == ((struct yy_buffer_state **)NULL))
  {
    num_to_alloc = 1;
    void *return_value_yyalloc$1;
    return_value_yyalloc$1=yyalloc((unsigned long int)num_to_alloc * sizeof(struct yy_buffer_state *) /*8ul*/ );
    yy_buffer_stack = (struct yy_buffer_state **)return_value_yyalloc$1;
    if(yy_buffer_stack == ((struct yy_buffer_state **)NULL))
      yy_fatal_error("out of dynamic memory in yyensure_buffer_stack()");

    memset((void *)yy_buffer_stack, 0, (unsigned long int)num_to_alloc * sizeof(struct yy_buffer_state *) /*8ul*/ );
    yy_buffer_stack_max = (unsigned long int)num_to_alloc;
    yy_buffer_stack_top = (unsigned long int)0;
    goto __CPROVER_DUMP_L5;
  }

  if(yy_buffer_stack_top >= yy_buffer_stack_max + 18446744073709551615ul)
  {
    signed int grow_size = 8;
    num_to_alloc = (signed int)(yy_buffer_stack_max + (unsigned long int)grow_size);
    void *return_value_yyrealloc$2;
    return_value_yyrealloc$2=yyrealloc((void *)yy_buffer_stack, (unsigned long int)num_to_alloc * sizeof(struct yy_buffer_state *) /*8ul*/ );
    yy_buffer_stack = (struct yy_buffer_state **)return_value_yyrealloc$2;
    if(yy_buffer_stack == ((struct yy_buffer_state **)NULL))
      yy_fatal_error("out of dynamic memory in yyensure_buffer_stack()");

    memset((void *)(yy_buffer_stack + (signed long int)yy_buffer_stack_max), 0, (unsigned long int)grow_size * sizeof(struct yy_buffer_state *) /*8ul*/ );
    yy_buffer_stack_max = (unsigned long int)num_to_alloc;
  }


__CPROVER_DUMP_L5:
  ;
}

// yyfree
// file .objects/input_lex.c line 1845
void yyfree(void *ptr)
{
  free((void *)(char *)ptr);
}

// yyget_debug
// file .objects/input_lex.c line 1744
signed int yyget_debug(void)
{
  return yy_flex_debug;
}

// yyget_in
// file .objects/input_lex.c line 1688
struct _IO_FILE * yyget_in(void)
{
  return yyin;
}

// yyget_leng
// file .objects/input_lex.c line 1704
signed int yyget_leng(void)
{
  return yyleng;
}

// yyget_lineno
// file .objects/input_lex.c line 1679
signed int yyget_lineno(void)
{
  return yylineno;
}

// yyget_out
// file .objects/input_lex.c line 1696
struct _IO_FILE * yyget_out(void)
{
  return yyout;
}

// yyget_text
// file .objects/input_lex.c line 1713
char * yyget_text(void)
{
  return yytext;
}

// yylex
// file src/input.c line 52
signed int yylex(void)
{
  signed int yy_current_state;
  char *yy_cp;
  char *yy_bp;
  signed int yy_act;
  struct yy_buffer_state *tmp_if_expr$1;
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
      tmp_if_expr$1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$1 = (struct yy_buffer_state *)(void *)0;
    if(tmp_if_expr$1 == ((struct yy_buffer_state *)NULL))
    {
      yyensure_buffer_stack();
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]=yy_create_buffer(yyin, 16384);
    }

    yy_load_buffer_state();
  }

  signed int yy_amount_of_matched_text;
  signed int return_value_yy_get_next_buffer$2;
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
        if(yy_current_state >= 79)
          yy_c = (unsigned char)yy_meta[(signed long int)(unsigned int)yy_c];

      }
      yy_current_state = (signed int)yy_nxt[(signed long int)((unsigned int)yy_base[(signed long int)yy_current_state] + (unsigned int)yy_c)];
      yy_cp = yy_cp + 1l;
      if(!((signed int)yy_base[(signed long int)yy_current_state] == 95))
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
      yyleng = (signed int)(unsigned long int)(yy_cp - yy_bp);
      yy_hold_char = *yy_cp;
      *yy_cp = (char)0;
      yy_c_buf_p = yy_cp;

    do_action:
      ;
      for( ; (_Bool)1; yy_act = 18 + (yy_start - 1) / 2 + 1)
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

          if(yy_act == 8)
            goto __CPROVER_DUMP_L23;

          if(yy_act == 9)
            goto __CPROVER_DUMP_L24;

          if(yy_act == 10)
            goto __CPROVER_DUMP_L25;

          if(yy_act == 11)
            goto __CPROVER_DUMP_L26;

          if(yy_act == 12)
            goto __CPROVER_DUMP_L27;

          if(yy_act == 13)
            goto __CPROVER_DUMP_L28;

          if(yy_act == 14)
            goto __CPROVER_DUMP_L29;

          if(yy_act == 15)
            goto __CPROVER_DUMP_L33;

          if(yy_act == 16)
            goto __CPROVER_DUMP_L34;

          if(yy_act == 17)
            goto __CPROVER_DUMP_L35;

          if(yy_act == 1)
            goto __CPROVER_DUMP_L36;

          if(yy_act == 18)
            goto __CPROVER_DUMP_L37;

          goto __CPROVER_DUMP_L48;
        }

        *yy_cp = yy_hold_char;
        yy_cp = yy_last_accepting_cpos;
        yy_current_state = yy_last_accepting_state;
        goto yy_find_action;

      __CPROVER_DUMP_L16:
        ;
        goto __CPROVER_DUMP_L49;

      __CPROVER_DUMP_L17:
        ;
        line_number = line_number + 1;
        goto __CPROVER_DUMP_L49;

      __CPROVER_DUMP_L18:
        ;
        goto __CPROVER_DUMP_L49;

      __CPROVER_DUMP_L19:
        ;
        return 257;

      __CPROVER_DUMP_L20:
        ;
        return 258;

      __CPROVER_DUMP_L21:
        ;
        return 259;

      __CPROVER_DUMP_L22:
        ;
        return 260;

      __CPROVER_DUMP_L23:
        ;
        return 261;

      __CPROVER_DUMP_L24:
        ;
        return 262;

      __CPROVER_DUMP_L25:
        ;
        return 266;

      __CPROVER_DUMP_L26:
        ;
        return 263;

      __CPROVER_DUMP_L27:
        ;
        return 267;

      __CPROVER_DUMP_L28:
        ;
        return 264;

      __CPROVER_DUMP_L29:
        ;
        signed int i = 0;
        for( ; !(i >= yyleng); i = i + 1)
          if((signed int)yytext[(signed long int)i] == 10)
            line_number = line_number + 1;

        return 265;

      __CPROVER_DUMP_L33:
        ;
        return 62;

      __CPROVER_DUMP_L34:
        ;
        fatal("%s:%d: Unexpected character '%c'\n", file_name, line_number, yytext[(signed long int)0]);
        goto __CPROVER_DUMP_L49;

      __CPROVER_DUMP_L35:
        ;
        yy_fatal_error("flex scanner jammed");
        goto __CPROVER_DUMP_L49;

      __CPROVER_DUMP_L36:
        ;
        return 0;

      __CPROVER_DUMP_L37:
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

        return_value_yy_get_next_buffer$2=yy_get_next_buffer();
        if(!(return_value_yy_get_next_buffer$2 == 1))
        {
          if(return_value_yy_get_next_buffer$2 == 0)
            goto __CPROVER_DUMP_L45;

          if(return_value_yy_get_next_buffer$2 == 2)
            goto __CPROVER_DUMP_L46;

          goto __CPROVER_DUMP_L47;
        }

        yy_did_buffer_switch_on_eof = 0;
        yy_c_buf_p = yytext + (signed long int)0;
      }
      if(yy_did_buffer_switch_on_eof == 0)
        yyrestart(yyin);

      goto __CPROVER_DUMP_L47;

    __CPROVER_DUMP_L45:
      ;
      yy_c_buf_p = yytext + (signed long int)yy_amount_of_matched_text;
      yy_current_state=yy_get_previous_state();
      yy_cp = yy_c_buf_p;
      yy_bp = yytext + (signed long int)0;
    }
    while((_Bool)1);

  __CPROVER_DUMP_L46:
    ;
    yy_c_buf_p = &yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_ch_buf[(signed long int)yy_n_chars];
    yy_current_state=yy_get_previous_state();
    yy_cp = yy_c_buf_p;
    yy_bp = yytext + (signed long int)0;
    goto yy_find_action;

  __CPROVER_DUMP_L47:
    ;
    continue;

  __CPROVER_DUMP_L48:
    ;
    yy_fatal_error("fatal flex scanner internal error--no action found");

  __CPROVER_DUMP_L49:
    ;
  }
}

// yylex_destroy
// file .objects/input_lex.c line 1783
signed int yylex_destroy(void)
{
  struct yy_buffer_state *tmp_if_expr$1;
  struct yy_buffer_state *tmp_if_expr$2;
  do
  {
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$1 = (struct yy_buffer_state *)(void *)0;
    if(tmp_if_expr$1 == ((struct yy_buffer_state *)NULL))
      break;

    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$2 = (struct yy_buffer_state *)(void *)0;
    yy_delete_buffer(tmp_if_expr$2);
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
// file .objects/input_lex.c line 1499
void yypop_buffer_state(void)
{
  struct yy_buffer_state *tmp_if_expr$1;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr$1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr$1 = (struct yy_buffer_state *)(void *)0;
  struct yy_buffer_state *tmp_if_expr$2;
  struct yy_buffer_state *tmp_if_expr$3;
  if(!(tmp_if_expr$1 == ((struct yy_buffer_state *)NULL)))
  {
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$2 = (struct yy_buffer_state *)(void *)0;
    yy_delete_buffer(tmp_if_expr$2);
    yy_buffer_stack[(signed long int)yy_buffer_stack_top] = (struct yy_buffer_state *)(void *)0;
    if(yy_buffer_stack_top >= 1ul)
      yy_buffer_stack_top = yy_buffer_stack_top - 1ul;

    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$3 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$3 = (struct yy_buffer_state *)(void *)0;
    if(!(tmp_if_expr$3 == ((struct yy_buffer_state *)NULL)))
    {
      yy_load_buffer_state();
      yy_did_buffer_switch_on_eof = 1;
    }

  }

}

// yypush_buffer_state
// file .objects/input_lex.c line 1469
void yypush_buffer_state(struct yy_buffer_state *new_buffer)
{
  struct yy_buffer_state *tmp_if_expr$1;
  struct yy_buffer_state *tmp_if_expr$2;
  if(!(new_buffer == ((struct yy_buffer_state *)NULL)))
  {
    yyensure_buffer_stack();
    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$1 = (struct yy_buffer_state *)(void *)0;
    if(!(tmp_if_expr$1 == ((struct yy_buffer_state *)NULL)))
    {
      *yy_c_buf_p = yy_hold_char;
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_buf_pos = yy_c_buf_p;
      yy_buffer_stack[(signed long int)yy_buffer_stack_top]->yy_n_chars = yy_n_chars;
    }

    if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
      tmp_if_expr$2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

    else
      tmp_if_expr$2 = (struct yy_buffer_state *)(void *)0;
    if(!(tmp_if_expr$2 == ((struct yy_buffer_state *)NULL)))
      yy_buffer_stack_top = yy_buffer_stack_top + 1ul;

    yy_buffer_stack[(signed long int)yy_buffer_stack_top] = new_buffer;
    yy_load_buffer_state();
    yy_did_buffer_switch_on_eof = 1;
  }

}

// yyrealloc
// file .objects/input_lex.c line 1833
void * yyrealloc(void *ptr, unsigned long int size)
{
  void *return_value_realloc$1;
  return_value_realloc$1=realloc((void *)(char *)ptr, size);
  return (void *)return_value_realloc$1;
}

// yyrestart
// file .objects/input_lex.c line 1299
void yyrestart(struct _IO_FILE *input_file)
{
  struct yy_buffer_state *tmp_if_expr$1;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr$1 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr$1 = (struct yy_buffer_state *)(void *)0;
  if(tmp_if_expr$1 == ((struct yy_buffer_state *)NULL))
  {
    yyensure_buffer_stack();
    yy_buffer_stack[(signed long int)yy_buffer_stack_top]=yy_create_buffer(yyin, 16384);
  }

  struct yy_buffer_state *tmp_if_expr$2;
  if(!(yy_buffer_stack == ((struct yy_buffer_state **)NULL)))
    tmp_if_expr$2 = yy_buffer_stack[(signed long int)yy_buffer_stack_top];

  else
    tmp_if_expr$2 = (struct yy_buffer_state *)(void *)0;
  yy_init_buffer(tmp_if_expr$2, input_file);
  yy_load_buffer_state();
}

// yyset_debug
// file .objects/input_lex.c line 1749
void yyset_debug(signed int bdebug)
{
  yy_flex_debug = bdebug;
}

// yyset_in
// file .objects/input_lex.c line 1734
void yyset_in(struct _IO_FILE *in_str)
{
  yyin = in_str;
}

// yyset_lineno
// file .objects/input_lex.c line 1722
void yyset_lineno(signed int line_number)
{
  yylineno = line_number;
}

// yyset_out
// file .objects/input_lex.c line 1739
void yyset_out(struct _IO_FILE *out_str)
{
  yyout = out_str;
}

