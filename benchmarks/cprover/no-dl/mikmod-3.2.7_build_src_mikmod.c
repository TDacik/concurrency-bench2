// #anon_enum_ATTR_NONE=-1_ATTR_WARNING=0_ATTR_TITLE=1_ATTR_BANNER=2_ATTR_SONG_STATUS=3_ATTR_INFO_INACTIVE=4_ATTR_INFO_ACTIVE=5_ATTR_INFO_IHOTKEY=6_ATTR_INFO_AHOTKEY=7_ATTR_HELP=8_ATTR_PLAYENTRY_INACTIVE=9_ATTR_PLAYENTRY_ACTIVE=10_ATTR_SAMPLES=11_ATTR_SAMPLES_KICK3=12_ATTR_SAMPLES_KICK2=13_ATTR_SAMPLES_KICK1=14_ATTR_SAMPLES_KICK0=15_ATTR_CONFIG=16_ATTR_VOLBAR=17_ATTR_VOLBAR_LOW=18_ATTR_VOLBAR_MED=19_ATTR_VOLBAR_HIGH=20_ATTR_VOLBAR_INSTR=21_ATTR_MENU_FRAME=22_ATTR_MENU_INACTIVE=23_ATTR_MENU_ACTIVE=24_ATTR_MENU_IHOTKEY=25_ATTR_MENU_AHOTKEY=26_ATTR_DLG_FRAME=27_ATTR_DLG_LABEL=28_ATTR_DLG_STR_TEXT=29_ATTR_DLG_STR_CURSOR=30_ATTR_DLG_BUT_INACTIVE=31_ATTR_DLG_BUT_ACTIVE=32_ATTR_DLG_BUT_IHOTKEY=33_ATTR_DLG_BUT_AHOTKEY=34_ATTR_DLG_BUT_ITEXT=35_ATTR_DLG_BUT_ATEXT=36_ATTR_DLG_LIST_FOCUS=37_ATTR_DLG_LIST_NOFOCUS=38_ATTR_STATUS_LINE=39_ATTR_STATUS_TEXT=40
// file ../../src/mconfig.h line 87
enum anonymous_7 { ATTR_NONE=-1, ATTR_WARNING=0, ATTR_TITLE=1, ATTR_BANNER=2, ATTR_SONG_STATUS=3, ATTR_INFO_INACTIVE=4, ATTR_INFO_ACTIVE=5, ATTR_INFO_IHOTKEY=6, ATTR_INFO_AHOTKEY=7, ATTR_HELP=8, ATTR_PLAYENTRY_INACTIVE=9, ATTR_PLAYENTRY_ACTIVE=10, ATTR_SAMPLES=11, ATTR_SAMPLES_KICK3=12, ATTR_SAMPLES_KICK2=13, ATTR_SAMPLES_KICK1=14, ATTR_SAMPLES_KICK0=15, ATTR_CONFIG=16, ATTR_VOLBAR=17, ATTR_VOLBAR_LOW=18, ATTR_VOLBAR_MED=19, ATTR_VOLBAR_HIGH=20, ATTR_VOLBAR_INSTR=21, ATTR_MENU_FRAME=22, ATTR_MENU_INACTIVE=23, ATTR_MENU_ACTIVE=24, ATTR_MENU_IHOTKEY=25, ATTR_MENU_AHOTKEY=26, ATTR_DLG_FRAME=27, ATTR_DLG_LABEL=28, ATTR_DLG_STR_TEXT=29, ATTR_DLG_STR_CURSOR=30, ATTR_DLG_BUT_INACTIVE=31, ATTR_DLG_BUT_ACTIVE=32, ATTR_DLG_BUT_IHOTKEY=33, ATTR_DLG_BUT_AHOTKEY=34, ATTR_DLG_BUT_ITEXT=35, ATTR_DLG_BUT_ATEXT=36, ATTR_DLG_LIST_FOCUS=37, ATTR_DLG_LIST_NOFOCUS=38, ATTR_STATUS_LINE=39, ATTR_STATUS_TEXT=40 };

// #anon_enum_COM_NONE=0_MENU_ACTIVATE=1
// file ../../src/display.h line 56
enum anonymous_9 { COM_NONE=0, MENU_ACTIVATE=1 };

// #anon_enum_FREQ_ADD=0_FREQ_TOGGLE=1_FREQ_REMOVE=2
// file ../../src/mlistedit.c line 86
enum anonymous_26 { FREQ_ADD=0, FREQ_TOGGLE=1, FREQ_REMOVE=2 };

// #anon_enum_MTH_NORUN=0_MTH_RUNNING=1_MTH_QUITTING=2
// file ../../src/mthreads.h line 50
enum anonymous_21 { MTH_NORUN=0, MTH_RUNNING=1, MTH_QUITTING=2 };

// #anon_enum_SORT_NAME=0_SORT_EXT=1_SORT_PATH=2_SORT_TIME=3
// file ../../src/mlistedit.c line 1019
enum anonymous_23 { SORT_NAME=0, SORT_EXT=1, SORT_PATH=2, SORT_TIME=3 };

// #anon_enum_STATE_INIT=0_STATE_INIT_ERROR=1_STATE_ERROR=2_STATE_READY=3_STATE_PLAY=4
// file ../../src/mikmod.c line 141
enum anonymous_30 { STATE_INIT=0, STATE_INIT_ERROR=1, STATE_ERROR=2, STATE_READY=3, STATE_PLAY=4 };

// #anon_enum_TYPE_LABEL=0_TYPE_STR=1_TYPE_INT=2_TYPE_BUTTON=3_TYPE_LIST=4_TYPE_CHECK=5_TYPE_TOGGLE=6_TYPE_COLORSEL=7
// file ../../src/mwidget.h line 52
enum anonymous_32 { TYPE_LABEL=0, TYPE_STR=1, TYPE_INT=2, TYPE_BUTTON=3, TYPE_LIST=4, TYPE_CHECK=5, TYPE_TOGGLE=6, TYPE_COLORSEL=7 };

// #anon_enum_WID_GET_FOCUS=0_WID_HOTKEY=1_WID_KEY=2
// file ../../src/mwidget.h line 46
enum anonymous_18 { WID_GET_FOCUS=0, WID_HOTKEY=1, WID_KEY=2 };

// #anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1
// file ../../src/mwidget.h line 41
enum anonymous_10 { WID_SEL_SINGLE=0, WID_SEL_BROWSE=1 };

// tag-#anon#ST[*{S32(*{SYM#tag-WIDGET#}_SYM#tag-WIDGET#_|S32|*{V}_V_|*{V}_V_)->S32}_S32(*{SYM#tag-WIDGET#}_SYM#tag-WIDGET#_|S32|*{V}_V_|*{V}_V_)->S32_'handle_dlg'||*{SYM#tag-WIDGET#}_SYM#tag-WIDGET#_'w'||*{V}_V_'input'||*{V}_V_'data'||S32'min'||S32'max'|]
// file ../../src/mdialog.c line 42
struct anonymous_19;

// tag-#anon#ST[*{S8}_S8_'file'||*{S8}_S8_'archive'||S32'time'||S32'played'|]
// file ../../src/mlist.h line 45
struct anonymous_0;

// tag-#anon#ST[*{S8}_S8_'name'||S32'color'||U32'_pad0'||*{S32}_S32_'attrs'|]
// file ../../src/mconfig.h line 150
struct anonymous_1;

// tag-#anon#ST[*{S8}_S8_'text'||*{V}_V_'data'||*{S8}_S8_'help'|]
// file ../../src/mmenu.h line 52
struct anonymous_8;

// tag-#anon#ST[*{SYM#tag-#anon#ST[*{S8}_S8_'file'||*{S8}_S8_'archive'||S32'time'||S32'played'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'file'||*{S8}_S8_'archive'||S32'time'||S32'played'|]#_'entry'||S32'length'||S32'current'||S32'curr_deleted'||S32'add_pos'|]
// file ../../src/mlist.h line 52
struct anonymous;

// tag-#anon#ST[*{SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||*{S8}_S8_'msg'|]#}_SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||*{S8}_S8_'msg'|]#_'w'||S32'stop'||U32'_pad0'|]
// file ../../src/mlistedit.c line 115
struct anonymous_28;

// tag-#anon#ST[*{SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#}_SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#_'w'||*{SYM#tag-#anon#ST[*{SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#}_SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#_'w'||ARR8192{S8}_S8_'path'||S32'before_add'||S32'actline'||S32'cnt_list'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'searchlist'||*{S32(S32|*{S8}_S8_|*{V}_V_)->S32}_S32(S32|*{S8}_S8_|*{V}_V_)->S32_'handle_freq'||*{V}_V_'data'|]#}_SYM#tag-#anon#ST[*{SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#}_SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#_'w'||ARR8192{S8}_S8_'path'||S32'before_add'||S32'actline'||S32'cnt_list'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'searchlist'||*{S32(S32|*{S8}_S8_|*{V}_V_)->S32}_S32(S32|*{S8}_S8_|*{V}_V_)->S32_'handle_freq'||*{V}_V_'data'|]#_'freq'|]
// file ../../src/mlistedit.c line 105
struct anonymous_27;

// tag-#anon#ST[*{SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#}_SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#_'w'||ARR8192{S8}_S8_'path'||S32'before_add'||S32'actline'||S32'cnt_list'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'searchlist'||*{S32(S32|*{S8}_S8_|*{V}_V_)->S32}_S32(S32|*{S8}_S8_|*{V}_V_)->S32_'handle_freq'||*{V}_V_'data'|]
// file ../../src/mlistedit.c line 92
struct anonymous_25;

// tag-#anon#ST[*{SYM#tag-MMENU#}_SYM#tag-MMENU#_'menu'||*{S32}_S32_'actLine'|]
// file ../../src/mlistedit.c line 110
struct anonymous_24;

// tag-#anon#ST[*{SYM#tag-WIDGET#}_SYM#tag-WIDGET#_'w'||*{SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||*{S8}_S8_'input'||S32'cur_pos'||S32'start'||S32'length'||U32'_pad0'|]#}_SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||*{S8}_S8_'input'||S32'cur_pos'||S32'start'||S32'length'||U32'_pad0'|]#_'str_w'||*{SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'active'||ARR5{S8}_S8_'hkeys'||U24'_pad0'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'|]#}_SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'active'||ARR5{S8}_S8_'hkeys'||U24'_pad0'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'|]#_'col_w'||*{SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#}_SYM#tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]#_'list_w'||S32'cur_attr'||U32'_pad0'||SYM#tag-#anon#ST[*{S8}_S8_'name'||S32'color'||U32'_pad0'||*{S32}_S32_'attrs'|]#'theme'||SYM#tag-#anon#ST[*{S8}_S8_'name'||S32'color'||U32'_pad0'||*{S32}_S32_'attrs'|]#'test_theme'||S32'orig_theme'||U32'_pad1'|]
// file ../../src/mconfedit.c line 200
struct anonymous_20;

// tag-#anon#ST[ARR256{SYM#tag-VOICEINFO#}_SYM#tag-VOICEINFO#_'vinfo'||ARR256{SYM#tag-#anon#ST[U64'time'||U8'volamp'||U56'_pad0'|]#}_SYM#tag-#anon#ST[U64'time'||U8'volamp'||U56'_pad0'|]#_'vstatus'|]
// file ../../src/mplayer.h line 39
struct anonymous_6;

// tag-#anon#ST[EN#anon_enum_STATE_INIT=0_STATE_INIT_ERROR=1_STATE_ERROR=2_STATE_READY=3_STATE_PLAY=4#{U32}_U32_'state'||S32'quit'||S32'listend'||S32'norc'|]
// file ../../src/mikmod.c line 149
struct anonymous_29;

// tag-#anon#ST[S32'active'||S32'cnt'||EN#anon_enum_ATTR_NONE=-1_ATTR_WARNING=0_ATTR_TITLE=1_ATTR_BANNER=2_ATTR_SONG_STATUS=3_ATTR_INFO_INACTIVE=4_ATTR_INFO_ACTIVE=5_ATTR_INFO_IHOTKEY=6_ATTR_INFO_AHOTKEY=7_ATTR_HELP=8_ATTR_PLAYENTRY_INACTIVE=9_ATTR_PLAYENTRY_ACTIVE=10_ATTR_SAMPLES=11_ATTR_SAMPLES_KICK3=12_ATTR_SAMPLES_KICK2=13_ATTR_SAMPLES_KICK1=14_ATTR_SAMPLES_KICK0=15_ATTR_CONFIG=16_ATTR_VOLBAR=17_ATTR_VOLBAR_LOW=18_ATTR_VOLBAR_MED=19_ATTR_VOLBAR_HIGH=20_ATTR_VOLBAR_INSTR=21_ATTR_MENU_FRAME=22_ATTR_MENU_INACTIVE=23_ATTR_MENU_ACTIVE=24_ATTR_MENU_IHOTKEY=25_ATTR_MENU_AHOTKEY=26_ATTR_DLG_FRAME=27_ATTR_DLG_LABEL=28_ATTR_DLG_STR_TEXT=29_ATTR_DLG_STR_CURSOR=30_ATTR_DLG_BUT_INACTIVE=31_ATTR_DLG_BUT_ACTIVE=32_ATTR_DLG_BUT_IHOTKEY=33_ATTR_DLG_BUT_AHOTKEY=34_ATTR_DLG_BUT_ITEXT=35_ATTR_DLG_BUT_ATEXT=36_ATTR_DLG_LIST_FOCUS=37_ATTR_DLG_LIST_NOFOCUS=38_ATTR_STATUS_LINE=39_ATTR_STATUS_TEXT=40#{S32}_S32_'attrs'||U32'_pad0'||*{SYM#tag-MWINDOW#}_SYM#tag-MWINDOW#_'win'||*{*{SYM#tag-WIDGET#}_SYM#tag-WIDGET#_}_*{SYM#tag-WIDGET#}_SYM#tag-WIDGET#__'widget'|]
// file ../../src/mwidget.h line 65
struct anonymous_17;

// tag-#anon#ST[S32'driver'||U32'_pad0'||*{S8}_S8_'driveroptions'||S32'stereo'||S32'mode_16bit'||S32'frequency'||S32'interpolate'||S32'hqmixer'||S32'surround'||S32'reverb'||S32'volume'||S32'volrestrict'||S32'fade'||S32'loop'||S32'panning'||S32'extspd'||S32'playmode'||S32'curious'||S32'tolerant'||S32'renice'||S32'statusbar'||S32'save_config'||S32'save_playlist'||*{S8}_S8_'pl_name'||S32'cnt_hotlist'||U32'_pad1'||*{*{S8}_S8_}_*{S8}_S8__'hotlist'||S32'fullpaths'||S32'forcesamples'||S32'fakevolbars'||S32'window_title'||S32'theme'||S32'cnt_themes'||*{SYM#tag-#anon#ST[*{S8}_S8_'name'||S32'color'||U32'_pad0'||*{S32}_S32_'attrs'|]#}_SYM#tag-#anon#ST[*{S8}_S8_'name'||S32'color'||U32'_pad0'||*{S32}_S32_'attrs'|]#_'themes'||S32'cnt_archiver'||U32'_pad2'||*{SYM#tag-#anon#ST[S32'location'||U32'_pad0'||*{S8}_S8_'marker'||*{S8}_S8_'list'||S32'nameoffset'||U32'_pad1'||*{S8}_S8_'extract'||*{S8}_S8_'skippat'||S32'skipstart'||S32'skipend'|]#}_SYM#tag-#anon#ST[S32'location'||U32'_pad0'||*{S8}_S8_'marker'||*{S8}_S8_'list'||S32'nameoffset'||U32'_pad1'||*{S8}_S8_'extract'||*{S8}_S8_'skippat'||S32'skipstart'||S32'skipend'|]#_'archiver'|]
// file ../../src/mconfig.h line 166
struct anonymous_3;

// tag-#anon#ST[S32'id'||U32'_pad0'||*{cS8}_cS8_'label'|]
// file ../../src/rcfile.h line 32
struct anonymous_4;

// tag-#anon#ST[S32'location'||U32'_pad0'||*{S8}_S8_'marker'||*{S8}_S8_'list'||S32'nameoffset'||U32'_pad1'||*{S8}_S8_'extract'||*{S8}_S8_'skippat'||S32'skipstart'||S32'skipend'|]
// file ../../src/mconfig.h line 156
struct anonymous_2;

// tag-#anon#ST[SYM#tag-WIDGET#'w'||*{S8}_S8_'button'||S32'cnt'||S32'active'|]
// file ../../src/mwidget.h line 154
struct anonymous_13;

// tag-#anon#ST[SYM#tag-WIDGET#'w'||*{S8}_S8_'button'||S32'cnt'||S32'selected'||S32'active'||U32'_pad0'|]
// file ../../src/mwidget.h line 171
struct anonymous_15;

// tag-#anon#ST[SYM#tag-WIDGET#'w'||*{S8}_S8_'input'||S32'cur_pos'||S32'start'||S32'length'||U32'_pad0'|]
// file ../../src/mwidget.h line 138
struct anonymous_12;

// tag-#anon#ST[SYM#tag-WIDGET#'w'||*{S8}_S8_'msg'|]
// file ../../src/mwidget.h line 133
struct anonymous_11;

// tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'active'||ARR5{S8}_S8_'hkeys'||U24'_pad0'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'|]
// file ../../src/mwidget.h line 187
struct anonymous_16;

// tag-#anon#ST[SYM#tag-WIDGET#'w'||S32'cur'||S32'first'||S32'cnt'||U32'_pad0'||*{*{S8}_S8_}_*{S8}_S8__'entries'||*{S8}_S8_'title'||EN#anon_enum_WID_SEL_SINGLE=0_WID_SEL_BROWSE=1#{U32}_U32_'sel_mode'||U32'_pad1'|]
// file ../../src/mwidget.h line 161
struct anonymous_14;

// tag-#anon#ST[U64'time'||U8'volamp'||U56'_pad0'|]
// file ../../src/mplayer.h line 41
struct anonymous_5;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_22;

// tag-ENVPT
// file /usr/include/mikmod.h line 473
struct ENVPT;

// tag-INSTRUMENT
// file /usr/include/mikmod.h line 482
struct INSTRUMENT;

// tag-MDRIVER
// file /usr/include/mikmod.h line 314
struct MDRIVER;

// tag-MMENU
// file ../../src/mmenu.h line 58
struct MMENU;

// tag-MODULE
// file /usr/include/mikmod.h line 553
struct MODULE;

// tag-MP_CONTROL
// file /usr/include/mikmod.h line 527
struct MP_CONTROL;

// tag-MP_VOICE
// file /usr/include/mikmod.h line 528
struct MP_VOICE;

// tag-MWINDOW
// file ../../src/mwindow.h line 48
struct MWINDOW;

// tag-SAMPLE
// file /usr/include/mikmod.h line 404
struct SAMPLE;

// tag-SAMPLOAD
// file /usr/include/mikmod.h line 738
struct SAMPLOAD;

// tag-TIMEOUT
// file ../../src/mwindow.c line 117
struct TIMEOUT;

// tag-VOICEINFO
// file /usr/include/mikmod.h line 622
struct VOICEINFO;

// tag-WIDGET
// file ../../src/mwidget.h line 63
struct WIDGET;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_OPTION
// file ../../src/rcfile.c line 46
struct _OPTION;

// tag-_OPTIONS
// file ../../src/rcfile.c line 47
struct _OPTIONS;

// tag-_STACK
// file ../../src/rcfile.c line 48
struct _STACK;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_win_st
// file /usr/include/curses.h line 365
struct _win_st;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-ldat
// file /usr/include/curses.h line 412
struct ldat;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pdat
// file /usr/include/curses.h line 452
struct pdat;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

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

// tag-winsize
// file /usr/include/x86_64-linux-gnu/bits/ioctl-types.h line 27
struct winsize;

#ifndef NULL
#define NULL ((void*)0)
#endif

// CF_GetDefaultFilename
// file ../../src/mconfig.c line 361
char * CF_GetDefaultFilename(void);
// CF_GetFilename
// file ../../src/mconfig.h line 211
char * CF_GetFilename(void);
// CF_Init
// file ../../src/mconfig.h line 231
void CF_Init(struct anonymous_3 *cfg);
// CF_Load
// file ../../src/mconfig.h line 233
signed int CF_Load(struct anonymous_3 *cfg);
// CF_Save
// file ../../src/mconfig.h line 232
signed int CF_Save(struct anonymous_3 *cfg);
// CF_string_array_insert
// file ../../src/mconfig.c line 780
void CF_string_array_insert(signed int pos, char ***value, signed int *cnt, char *arg, signed int length);
// CF_string_array_remove
// file ../../src/mconfig.c line 793
void CF_string_array_remove(signed int pos, char ***value, signed int *cnt);
// CF_theme_copy
// file ../../src/mconfig.c line 413
void CF_theme_copy(struct anonymous_1 *dest, struct anonymous_1 *src);
// CF_theme_free
// file ../../src/mconfig.c line 403
void CF_theme_free(struct anonymous_1 *theme);
// CF_theme_insert
// file ../../src/mconfig.c line 469
signed int CF_theme_insert(struct anonymous_1 **themes, signed int *cnt, struct anonymous_1 *theme);
// CF_theme_remove
// file ../../src/mconfig.c line 447
void CF_theme_remove(signed int pos, struct anonymous_1 **themes, signed int *cnt);
// CF_themes_free
// file ../../src/mconfig.c line 422
void CF_themes_free(struct anonymous_1 **themes, signed int *cnt);
// CF_themes_free_user
// file ../../src/mconfig.c line 435
void CF_themes_free_user(struct anonymous_1 **themes, signed int *cnt);
// DropPrivileges
// file ../../src/marchive.c line 119
signed int DropPrivileges(void);
// ExitGracefully
// file ../../src/mikmod.c line 278
static void ExitGracefully(signed int signum);
// GotoNext
// file ../../src/mikmod.c line 264
static void GotoNext(signed int signum);
// GotoPrev
// file ../../src/mikmod.c line 271
static void GotoPrev(signed int signum);
// MA_FindFiles
// file ../../src/marchive.c line 654
void MA_FindFiles(struct anonymous *pl, const char *filename);
// MA_MatchExtension
// file ../../src/marchive.c line 171
static signed int MA_MatchExtension(const char *archive, const char *ends);
// MA_TestName
// file ../../src/marchive.c line 624
signed int MA_TestName(const char *filename, signed int plist, signed int deep);
// MA_dearchive
// file ../../src/marchive.c line 492
signed int MA_dearchive(const char *arc, const char *file, char **extracted);
// MA_identify
// file ../../src/marchive.c line 196
static signed int MA_identify(const char *filename, signed int header_location, const char *header_string);
// MA_isModuleFilename
// file ../../src/marchive.c line 145
static signed int MA_isModuleFilename(const char *filename);
// MA_isModuleFilename2
// file ../../src/marchive.c line 156
static signed int MA_isModuleFilename2(const char *filename);
// MA_truncate
// file ../../src/marchive.c line 367
static signed int MA_truncate(signed int fd, const char *startpat, signed int start, signed int end, char **file);
// MP_Active
// file ../../src/mplayer.h line 62
signed int MP_Active(void);
// MP_End
// file ../../src/mplayer.h line 59
void MP_End(void);
// MP_GetData
// file ../../src/mplayer.h line 48
void MP_GetData(struct anonymous_6 *data);
// MP_Init
// file ../../src/mplayer.h line 52
signed int MP_Init(void);
// MP_Paused
// file ../../src/mplayer.h line 66
signed int MP_Paused(void);
// MP_Start
// file ../../src/mplayer.h line 55
void MP_Start(void);
// MP_TogglePause
// file ../../src/mplayer.h line 64
void MP_TogglePause(void);
// MP_Update
// file ../../src/mplayer.h line 57
void MP_Update(void);
// MP_Volume
// file ../../src/mplayer.h line 68
void MP_Volume(signed int vol);
// MP_updater
// file ../../src/mplayer.c line 101
static void * MP_updater(void *dummy);
// MikMod_DriverByOrdinal
// file /usr/include/mikmod.h line 321
extern struct MDRIVER * MikMod_DriverByOrdinal(signed int);
// MikMod_DriverFromAlias
// file /usr/include/mikmod.h line 320
extern signed int MikMod_DriverFromAlias(const char *);
// MikMod_Exit
// file /usr/include/mikmod.h line 324
extern void MikMod_Exit(void);
// MikMod_GetVersion
// file /usr/include/mikmod.h line 84
extern signed long int MikMod_GetVersion(void);
// MikMod_InfoDriver
// file /usr/include/mikmod.h line 318
extern char * MikMod_InfoDriver(void);
// MikMod_InfoLoader
// file /usr/include/mikmod.h line 637
extern char * MikMod_InfoLoader(void);
// MikMod_Init
// file /usr/include/mikmod.h line 323
extern signed int MikMod_Init(const char *);
// MikMod_InitThreads
// file /usr/include/mikmod.h line 332
extern signed int MikMod_InitThreads(void);
// MikMod_RegisterAllDrivers
// file /usr/include/mikmod.h line 316
extern void MikMod_RegisterAllDrivers(void);
// MikMod_RegisterAllLoaders
// file /usr/include/mikmod.h line 638
extern void MikMod_RegisterAllLoaders(void);
// MikMod_Reset
// file /usr/include/mikmod.h line 325
extern signed int MikMod_Reset(const char *);
// MikMod_Update
// file /usr/include/mikmod.h line 330
extern void MikMod_Update(void);
// MikMod_free
// file /usr/include/mikmod.h line 340
extern void MikMod_free(void *);
// MikMod_strerror
// file /usr/include/mikmod.h line 306
extern const char * MikMod_strerror(signed int);
// PL_Add
// file ../../src/mlist.h line 78
void PL_Add(struct anonymous *pl, const char *file, const char *arc, signed int time, signed int played);
// PL_CheckPlaylist
// file ../../src/mlist.c line 426
static signed int PL_CheckPlaylist(struct anonymous *pl, signed int *ok, signed int old_current, signed int cont, char **retfile, char **retarc, signed int arg);
// PL_ClearList
// file ../../src/mlist.c line 127
void PL_ClearList(struct anonymous *pl);
// PL_ClearPlayed
// file ../../src/mlist.c line 63
static void PL_ClearPlayed(struct anonymous *pl);
// PL_ContNext
// file ../../src/mlist.h line 89
signed int PL_ContNext(struct anonymous *pl, char **retfile, char **retarc, signed int mode);
// PL_ContPos
// file ../../src/mlist.h line 91
signed int PL_ContPos(struct anonymous *pl, char **retfile, char **retarc, signed int number);
// PL_ContPrev
// file ../../src/mlist.h line 90
signed int PL_ContPrev(struct anonymous *pl, char **retfile, char **retarc);
// PL_CurrentDeleted
// file ../../src/mlist.h line 67
signed int PL_CurrentDeleted(struct anonymous *pl);
// PL_DelDouble
// file ../../src/mlist.h line 77
signed int PL_DelDouble(struct anonymous *pl);
// PL_DelEntry
// file ../../src/mlist.h line 76
signed int PL_DelEntry(struct anonymous *pl, signed int number);
// PL_GetCurrent
// file ../../src/mlist.h line 70
struct anonymous_0 * PL_GetCurrent(struct anonymous *pl);
// PL_GetCurrentPos
// file ../../src/mlist.h line 69
signed int PL_GetCurrentPos(struct anonymous *pl);
// PL_GetEntry
// file ../../src/mlist.h line 71
struct anonymous_0 * PL_GetEntry(struct anonymous *pl, signed int number);
// PL_GetFilename
// file ../../src/mlist.c line 389
char * PL_GetFilename(void);
// PL_GetLength
// file ../../src/mlist.h line 72
signed int PL_GetLength(struct anonymous *pl);
// PL_InitCurrent
// file ../../src/mlist.h line 64
void PL_InitCurrent(struct anonymous *pl);
// PL_InitList
// file ../../src/mlist.h line 63
void PL_InitList(struct anonymous *pl);
// PL_Insert
// file ../../src/mlist.c line 251
static void PL_Insert(struct anonymous *pl, signed int pos, const char *file, const char *arc, signed int time, signed int played);
// PL_Load
// file ../../src/mlist.h line 82
signed int PL_Load(struct anonymous *pl, const char *filename);
// PL_LoadDefault
// file ../../src/mlist.h line 85
signed int PL_LoadDefault(struct anonymous *pl);
// PL_Randomize
// file ../../src/mlist.h line 95
void PL_Randomize(struct anonymous *pl);
// PL_Save
// file ../../src/mlist.c line 362
signed int PL_Save(struct anonymous *pl, const char *filename);
// PL_SaveDefault
// file ../../src/mlist.h line 86
signed int PL_SaveDefault(struct anonymous *pl);
// PL_SetPlayedCurrent
// file ../../src/mlist.h line 74
void PL_SetPlayedCurrent(struct anonymous *pl);
// PL_SetTimeCurrent
// file ../../src/mlist.h line 73
void PL_SetTimeCurrent(struct anonymous *pl, signed long int sngtime);
// PL_Sort
// file ../../src/mlist.c line 571
void PL_Sort(struct anonymous *pl, signed int (*compar)(struct anonymous_0 *, struct anonymous_0 *));
// PL_Sort::compar_object
//
signed int compar_object(struct anonymous_0 *, struct anonymous_0 *);
// PL_StartInsert
// file ../../src/mlist.c line 240
void PL_StartInsert(struct anonymous *pl, signed int pos);
// PL_StopInsert
// file ../../src/mlist.c line 246
void PL_StopInsert(struct anonymous *pl);
// PL_isPlaylistFilename
// file ../../src/mlist.h line 62
signed int PL_isPlaylistFilename(const char *filename);
// Player_Active
// file /usr/include/mikmod.h line 678
extern signed int Player_Active(void);
// Player_Free
// file /usr/include/mikmod.h line 676
extern void Player_Free(struct MODULE *);
// Player_GetChannelVoice
// file /usr/include/mikmod.h line 693
extern signed int Player_GetChannelVoice(unsigned char);
// Player_InitLib
// file ../../src/mikmod.c line 310
static void Player_InitLib(void);
// Player_LoadFP
// file /usr/include/mikmod.h line 668
extern struct MODULE * Player_LoadFP(struct _IO_FILE *, signed int, signed int);
// Player_LoadTitle
// file /usr/include/mikmod.h line 671
extern char * Player_LoadTitle(const char *);
// Player_NextPosition
// file /usr/include/mikmod.h line 682
extern void Player_NextPosition(void);
// Player_Paused
// file /usr/include/mikmod.h line 681
extern signed int Player_Paused(void);
// Player_PrevPosition
// file /usr/include/mikmod.h line 683
extern void Player_PrevPosition(void);
// Player_QueryVoices
// file /usr/include/mikmod.h line 695
extern signed int Player_QueryVoices(unsigned short int, struct VOICEINFO *);
// Player_SetConfig
// file ../../src/mikmod.c line 387
void Player_SetConfig(struct anonymous_3 *cfg);
// Player_SetNextMod
// file ../../src/mikmod.c line 305
void Player_SetNextMod(signed int pos);
// Player_SetNextModPos
// file ../../src/mikmod.c line 298
static void Player_SetNextModPos(signed int pos, signed int sng_pos);
// Player_SetPosition
// file /usr/include/mikmod.h line 684
extern void Player_SetPosition(unsigned short int);
// Player_SetSpeed
// file /usr/include/mikmod.h line 688
extern void Player_SetSpeed(unsigned short int);
// Player_SetTempo
// file /usr/include/mikmod.h line 689
extern void Player_SetTempo(unsigned short int);
// Player_SetVolume
// file /usr/include/mikmod.h line 686
extern void Player_SetVolume(signed short int);
// Player_Start
// file /usr/include/mikmod.h line 677
extern void Player_Start(struct MODULE *);
// Player_Stop
// file /usr/include/mikmod.h line 679
extern void Player_Stop(void);
// Player_TogglePause
// file /usr/include/mikmod.h line 680
extern void Player_TogglePause(void);
// Time1000
// file ../../src/mutilities.h line 199
unsigned long int Time1000(void);
// Voice_RealVolume
// file /usr/include/mikmod.h line 458
extern unsigned int Voice_RealVolume(signed char);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// base_attr
// file ../../src/mwidget.c line 54
static enum anonymous_7 base_attr(struct anonymous_17 *d, enum anonymous_7 attrs);
// bsearch
// file /usr/include/stdlib.h line 754
extern void * bsearch(const void *, const void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// button_free
// file ../../src/mwidget.c line 309
static void button_free(struct anonymous_13 *w);
// button_get_size
// file ../../src/mwidget.c line 441
static void button_get_size(struct anonymous_13 *w, signed int *width, signed int *height);
// button_handle_event
// file ../../src/mwidget.c line 381
static signed int button_handle_event(struct anonymous_13 *w, enum anonymous_18 event, signed int ch);
// button_paint
// file ../../src/mwidget.c line 315
static void button_paint(struct anonymous_13 *w);
// cb_browse
// file ../../src/mlistedit.c line 1094
static signed int cb_browse(signed int button, char *file, void *data);
// cb_cmp_sort
// file ../../src/mlistedit.c line 1027
static signed int cb_cmp_sort(struct anonymous_0 *small, struct anonymous_0 *big);
// cb_delete_entry
// file ../../src/mlistedit.c line 990
static signed int cb_delete_entry(struct WIDGET *w, signed int button, void *input, void *entry);
// cb_focus
// file ../../src/mconfedit.c line 497
static signed int cb_focus(struct WIDGET *w, signed int focus);
// cb_freq_button_focus
// file ../../src/mlistedit.c line 803
static signed int cb_freq_button_focus(struct WIDGET *w, signed int focus);
// cb_freq_cd_do
// file ../../src/mlistedit.c line 763
static signed int cb_freq_cd_do(struct WIDGET *w, signed int button, void *input, void *data);
// cb_freq_list_focus
// file ../../src/mlistedit.c line 734
static signed int cb_freq_list_focus(struct WIDGET *w, signed int focus);
// cb_freq_list_key
// file ../../src/mlistedit.c line 786
static signed int cb_freq_list_key(struct WIDGET *w, signed int ch);
// cb_freq_scan_dir
// file ../../src/mlistedit.c line 634
signed int cb_freq_scan_dir(char *path, signed int added, signed int removed, void *data);
// cb_handle_menu
// file ../../src/mlistedit.c line 1129
static void cb_handle_menu(struct MMENU *menu);
// cb_hlist_button_focus
// file ../../src/mlistedit.c line 548
static signed int cb_hlist_button_focus(struct WIDGET *w, signed int focus);
// cb_hlist_list_focus
// file ../../src/mlistedit.c line 532
static signed int cb_hlist_list_focus(struct WIDGET *w, signed int focus);
// cb_list_scan_dir
// file ../../src/mlistedit.c line 930
static signed int cb_list_scan_dir(char *path, signed int added, signed int removed, void *data);
// cb_overwrite
// file ../../src/mlistedit.c line 1081
static signed int cb_overwrite(struct WIDGET *w, signed int button, void *input, void *file);
// cb_save_as
// file ../../src/mlistedit.c line 1104
static signed int cb_save_as(struct WIDGET *w, signed int button, void *input, void *data);
// cb_scan_dir_stop_focus
// file ../../src/mlistedit.c line 622
static signed int cb_scan_dir_stop_focus(struct WIDGET *w, signed int focus);
// cb_theme_button_focus
// file ../../src/mconfedit.c line 460
static signed int cb_theme_button_focus(struct WIDGET *w, signed int focus);
// cb_theme_list_focus
// file ../../src/mconfedit.c line 434
static signed int cb_theme_list_focus(struct WIDGET *w, signed int focus);
// cb_themeedit
// file ../../src/mconfedit.c line 600
static signed int cb_themeedit(struct WIDGET *w, signed int button, void *input, void *data);
// cbreak
// file /usr/include/curses.h line 594
extern signed int cbreak(void);
// check_free
// file ../../src/mwidget.c line 742
static void check_free(struct anonymous_15 *w);
// check_get_size
// file ../../src/mwidget.c line 758
static void check_get_size(struct anonymous_15 *w, signed int *width, signed int *height);
// check_handle_event
// file ../../src/mwidget.c line 753
static signed int check_handle_event(struct anonymous_15 *w, enum anonymous_18 event, signed int ch);
// check_paint
// file ../../src/mwidget.c line 748
static void check_paint(struct anonymous_15 *w);
// check_toggle_handle_event
// file ../../src/mwidget.c line 661
static signed int check_toggle_handle_event(struct anonymous_15 *w, enum anonymous_18 event, signed int ch, signed int toggle);
// check_toggle_paint
// file ../../src/mwidget.c line 595
static void check_toggle_paint(struct anonymous_15 *w, signed int toggle);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// cmp_bit
// file ../../src/mikmod.c line 362
static signed int cmp_bit(signed int value, signed int mask, signed int cmp);
// color_to_pair
// file ../../src/mwindow.c line 245
static signed int color_to_pair(signed int attrs);
// colorsel_free
// file ../../src/mwidget.c line 808
static void colorsel_free(struct anonymous_16 *w);
// colorsel_get_size
// file ../../src/mwidget.c line 949
static void colorsel_get_size(struct anonymous_16 *w, signed int *width, signed int *height);
// colorsel_handle_event
// file ../../src/mwidget.c line 878
static signed int colorsel_handle_event(struct anonymous_16 *w, enum anonymous_18 event, signed int ch);
// colorsel_paint
// file ../../src/mwidget.c line 813
static void colorsel_paint(struct anonymous_16 *w);
// column_dim
// file ../../src/mwidget.c line 1333
static void column_dim(struct anonymous_17 *d, signed int start, signed int *width, signed int *height);
// config_error
// file ../../src/mikmod.c line 373
static void config_error(const char *err, enum anonymous_30 state);
// config_get_act_theme
// file ../../src/mconfedit.c line 373
static signed int config_get_act_theme(void);
// config_get_config
// file ../../src/mconfedit.c line 686
static void config_get_config(struct anonymous_3 *cfg);
// config_open
// file ../../src/mconfedit.h line 39
void config_open(void);
// config_set_act_theme
// file ../../src/mconfedit.c line 378
static void config_set_act_theme(signed int act_theme);
// config_set_config
// file ../../src/mconfedit.c line 628
static void config_set_config(struct anonymous_3 *cfg);
// convert_string
// file ../../src/display.c line 637
static void convert_string(char *str);
// curs_set
// file /usr/include/curses.h line 604
extern signed int curs_set(signed int);
// dialog_add
// file ../../src/mwidget.c line 955
static void dialog_add(struct anonymous_17 *d, struct WIDGET *w);
// dialog_close
// file ../../src/mwidget.c line 1275
void dialog_close(struct anonymous_17 *d);
// dialog_handle_key
// file ../../src/mwidget.c line 1287
static signed int dialog_handle_key(struct MWINDOW *win, signed int ch);
// dialog_handle_resize
// file ../../src/mwidget.c line 1505
static void dialog_handle_resize(struct MWINDOW *win, signed int dx, signed int dy);
// dialog_layout
// file ../../src/mwidget.c line 1350
static void dialog_layout(struct anonymous_17 *d, signed int initial, signed int *w_x, signed int *w_y, signed int *w_width, signed int *w_height);
// dialog_new
// file ../../src/mwidget.c line 1542
struct anonymous_17 * dialog_new(void);
// dialog_open
// file ../../src/mwidget.c line 1517
void dialog_open(struct anonymous_17 *d, const char *title);
// dialog_repaint
// file ../../src/mwidget.c line 1262
signed int dialog_repaint(struct MWINDOW *win);
// dialog_set_attr
// file ../../src/mwidget.c line 1537
void dialog_set_attr(struct anonymous_17 *d, enum anonymous_7 attrs);
// dirlist_cmp
// file ../../src/mlistedit.c line 133
static signed int dirlist_cmp(char **small, char **big);
// dirlist_search_cmp
// file ../../src/mlistedit.c line 146
static signed int dirlist_search_cmp(char *key, char **member);
// display_banner
// file ../../src/display.c line 223
static signed int display_banner(struct MWINDOW *win, const char *banner, signed int origin, signed int skip, signed int wrap);
// display_comment
// file ../../src/display.c line 816
static void display_comment(struct MWINDOW *win, signed int diff);
// display_config
// file ../../src/display.c line 1075
static void display_config(struct MWINDOW *win, signed int diff);
// display_driver
// file ../../src/display.c line 326
static void display_driver(void);
// display_driver_help
// file ../../src/mikmod.c line 511
static void display_driver_help(signed int drvno);
// display_extractbanner
// file ../../src/display.c line 304
void display_extractbanner(void);
// display_file
// file ../../src/display.c line 351
static void display_file(void);
// display_handle_key
// file ../../src/display.c line 1181
static signed int display_handle_key(struct MWINDOW *win, signed int ch);
// display_head_repaint
// file ../../src/display.c line 1155
static signed int display_head_repaint(struct MWINDOW *win);
// display_head_resize
// file ../../src/display.c line 1150
static void display_head_resize(struct MWINDOW *win, signed int dx, signed int dy);
// display_header
// file ../../src/display.c line 1128
signed int display_header(void);
// display_help
// file ../../src/display.c line 576
static void display_help(struct MWINDOW *win, signed int diff);
// display_information
// file ../../src/display.c line 484
static signed int display_information(void);
// display_init
// file ../../src/display.c line 1226
void display_init(void);
// display_inst
// file ../../src/display.c line 752
static void display_inst(struct MWINDOW *win, signed int diff);
// display_list
// file ../../src/display.c line 1000
static void display_list(struct MWINDOW *win, signed int diff, enum anonymous_9 com);
// display_loadbanner
// file ../../src/display.c line 315
void display_loadbanner(void);
// display_message
// file ../../src/display.c line 179
void display_message(char *str);
// display_name
// file ../../src/display.c line 392
static void display_name(void);
// display_panel
// file ../../src/display.c line 1087
static void display_panel(struct MWINDOW *win, signed int diff, enum anonymous_9 com);
// display_panel_repaint
// file ../../src/display.c line 1165
static signed int display_panel_repaint(struct MWINDOW *win);
// display_pausebanner
// file ../../src/display.c line 294
void display_pausebanner(void);
// display_playentry
// file ../../src/display.c line 936
static void display_playentry(struct MWINDOW *win, struct anonymous_0 *pos, struct anonymous_0 *cur, signed int nr, signed int y, signed int x, signed int reverse, signed int width);
// display_sample
// file ../../src/display.c line 681
static void display_sample(struct MWINDOW *win, signed int diff);
// display_start
// file ../../src/display.c line 1171
void display_start(void);
// display_status
// file ../../src/display.c line 411
void display_status(void);
// display_title
// file ../../src/display.c line 1251
static void display_title(void);
// display_version
// file ../../src/display.c line 162
static void display_version(void);
// display_volbars
// file ../../src/display.c line 917
static void display_volbars(struct MWINDOW *win, signed int diff);
// dlg_error_show
// file ../../src/mdialog.c line 113
void dlg_error_show(const char *txt, ...);
// dlg_input_int
// file ../../src/mdialog.h line 69
void dlg_input_int(const char *msg, const char *buttons, signed int value, signed int min, signed int max, signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *), void *data);
// dlg_input_int::handle_dlg_object
//
signed int handle_dlg_object(struct WIDGET *, signed int, void *, void *);
// dlg_input_str
// file ../../src/mdialog.h line 61
void dlg_input_str(const char *msg, const char *buttons, const char *str, signed int length, signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *), void *data);
// dlg_input_str::handle_dlg_object
//
signed int handle_dlg_object(struct WIDGET *, signed int, void *, void *);
// dlg_message_open
// file ../../src/mdialog.h line 49
void dlg_message_open(const char *msg, const char *button, signed int active, signed int warn, signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *), void *data);
// dlg_message_open::handle_dlg_object
//
signed int handle_dlg_object(struct WIDGET *, signed int, void *, void *);
// do_update
// file ../../src/mplayer.c line 58
static void do_update(void);
// driver_get_info
// file ../../src/mutilities.h line 233
signed int driver_get_info(signed int drvno, char **version, char **cmdline);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// dynamic_display_inst
// file ../../src/display.c line 778
static void dynamic_display_inst(struct MWINDOW *win);
// dynamic_display_sample
// file ../../src/display.c line 707
static void dynamic_display_sample(struct MWINDOW *win);
// dynamic_display_volbars
// file ../../src/display.c line 825
static void dynamic_display_volbars(struct MWINDOW *win);
// dynamic_repaint_object
//
void dynamic_repaint_object(struct MWINDOW *);
// endwin
// file /usr/include/curses.h line 618
extern signed int endwin(void);
// enlarge
// file ../../src/display.c line 149
static void enlarge(signed int x, char *str);
// entry_add
// file ../../src/mlistedit.c line 233
static signed int entry_add(char *path, char *file, struct anonymous_25 *data);
// entry_insert
// file ../../src/mlistedit.c line 207
static void entry_insert(signed int left, signed int right, char **pl, char *ins);
// entry_remove
// file ../../src/mlistedit.c line 984
static void entry_remove(signed int entry);
// entry_remove_by_name
// file ../../src/mlistedit.c line 282
static signed int entry_remove_by_name(char *path, char *file, struct anonymous_25 *data);
// execvp
// file /usr/include/unistd.h line 578
extern signed int execvp(const char *, char * const *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// exit_player
// file ../../src/mikmod.c line 234
static void exit_player(signed int exitcode, const char *message, ...);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// file_exist
// file ../../src/mutilities.c line 213
signed int file_exist(const char *file);
// filename2short
// file ../../src/marchive.c line 278
static signed int filename2short(const char *l, char *s, signed int len_s);
// fnmatch
// file /usr/include/fnmatch.h line 56
extern signed int fnmatch(const char *, const char *, signed int);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
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
// freq_add
// file ../../src/mlistedit.c line 688
static void freq_add(struct anonymous_25 *data, enum anonymous_26 mode);
// freq_call_func
// file ../../src/mlistedit.c line 725
static signed int freq_call_func(signed int button, struct anonymous_25 *data);
// freq_cd
// file ../../src/mlistedit.c line 780
static void freq_cd(struct anonymous_25 *data);
// freq_changedir
// file ../../src/mlistedit.c line 489
static void freq_changedir(const char *path, struct anonymous_25 *data);
// freq_check_searchlist
// file ../../src/mlistedit.c line 181
static void freq_check_searchlist(struct anonymous_25 *data);
// freq_close
// file ../../src/mlistedit.c line 713
static void freq_close(struct anonymous_25 *data);
// freq_data_init
// file ../../src/mlistedit.c line 838
static struct anonymous_25 * freq_data_init(const char *path);
// freq_freedir
// file ../../src/mlistedit.c line 465
static void freq_freedir(char **entries, signed int cnt);
// freq_hotlist
// file ../../src/mlistedit.c line 583
static void freq_hotlist(struct anonymous_25 *freq_data);
// freq_open
// file ../../src/mlistedit.c line 874
void freq_open(const char *title, const char *path, signed int actline, signed int (*func)(signed int, char *, void *), void *data);
// freq_open::func_object
//
signed int func_object(signed int, char *, void *);
// freq_readdir
// file ../../src/mlistedit.c line 412
static void freq_readdir(const char *path, char ***entries, signed int *cnt, struct anonymous_25 *data);
// freq_scan_dir
// file ../../src/mlistedit.c line 655
static void freq_scan_dir(char *path, struct anonymous_25 *data, enum anonymous_26 mode);
// freq_set_marks
// file ../../src/mlistedit.c line 160
static void freq_set_marks(char **entries, signed int cnt, const char *path, struct anonymous_25 *data);
// freq_set_title
// file ../../src/mlistedit.c line 473
static void freq_set_title(struct anonymous_25 *data);
// fseek
// file /usr/include/stdio.h line 749
extern signed int fseek(struct _IO_FILE *, signed long int, signed int);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_argument
// file ../../src/rcfile.c line 228
static char * get_argument(const char *label);
// get_begin
// file ../../src/rcfile.c line 243
static struct _OPTIONS * get_begin(const char *label);
// get_cfg_name
// file ../../src/mutilities.h line 196
char * get_cfg_name(const char *name);
// get_command
// file ../../src/marchive.c line 289
static char * get_command(const char *pattern, const char *arc, const char *file, const char *dest);
// get_driver_options
// file ../../src/mconfedit.c line 304
static void get_driver_options(struct anonymous_8 *entry, struct anonymous_8 *dr_entry);
// get_drivers
// file ../../src/mconfedit.c line 246
static void get_drivers(struct anonymous_8 *entry);
// get_homedir
// file ../../src/mutilities.c line 123
static const char * get_homedir(void);
// get_int
// file ../../src/mikmod.c line 495
static void get_int(const char *arg, signed int *value, signed int min, signed int max);
// get_text
// file ../../src/mmenu.c line 106
static char * get_text(struct anonymous_8 *entry, signed int width);
// get_themes
// file ../../src/mconfedit.c line 349
static void get_themes(struct anonymous_8 *entry);
// get_tmp_file
// file ../../src/mutilities.h line 182
signed int get_tmp_file(const char *tmpl, char **name_used);
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getopt_long_only
// file /usr/include/getopt.h line 177
extern signed int getopt_long_only(signed int, char * const *, const char *, struct option *, signed int *);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getpwuid
// file /usr/include/pwd.h line 110
extern struct passwd * getpwuid(unsigned int);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// handle_ListError
// file ../../src/mikmod.c line 466
static void handle_ListError(signed int tolerant, const char *filename, const char *archive, signed int mm_error);
// handle_focus
// file ../../src/mwidget.c line 157
static signed int handle_focus(struct WIDGET *w, signed int ret, signed int from_activate);
// handle_focus_link1
// file ../../src/mdialog.c line 50
static signed int handle_focus_link1(struct WIDGET *w_link1, signed int focus);
// handle_input_int
// file ../../src/mmenu.c line 313
static signed int handle_input_int(struct WIDGET *w, signed int button, void *input, void *data);
// handle_input_str
// file ../../src/mmenu.c line 301
static signed int handle_input_str(struct WIDGET *w, signed int button, void *input, void *data);
// handle_menu
// file ../../src/mconfedit.c line 734
static void handle_menu(struct MMENU *mn);
// handle_opt_menu
// file ../../src/mmenu.c line 285
static void handle_opt_menu(struct MMENU *menu);
// has_colors
// file /usr/include/curses.h line 629
extern _Bool has_colors(void);
// help
// file ../../src/mikmod.c line 166
static void help(struct anonymous_3 *c);
// hlist_close
// file ../../src/mlistedit.c line 526
static void hlist_close(struct anonymous_27 *data);
// indent_change
// file ../../src/rcfile.c line 72
static void indent_change(signed int delta);
// init_curses
// file ../../src/mwindow.c line 208
static void init_curses(void);
// init_dlg_data
// file ../../src/mdialog.c line 75
static struct anonymous_19 * init_dlg_data(signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *), struct WIDGET *w, void *input, void *data);
// init_dlg_data::handle_dlg_object
//
signed int handle_dlg_object(struct WIDGET *, signed int, void *, void *);
// init_pair
// file /usr/include/curses.h line 641
extern signed int init_pair(signed short int, signed short int, signed short int);
// init_themes
// file ../../src/mconfig.c line 370
static void init_themes(struct anonymous_3 *cfg);
// initscr
// file /usr/include/curses.h line 639
extern struct _win_st * initscr(void);
// input_handle_event
// file ../../src/mwidget.c line 171
static signed int input_handle_event(struct anonymous_12 *w, enum anonymous_18 event, signed int ch, signed int int_input);
// int_free
// file ../../src/mwidget.c line 287
static void int_free(struct anonymous_12 *w);
// int_get_size
// file ../../src/mwidget.c line 303
static void int_get_size(struct anonymous_12 *w, signed int *width, signed int *height);
// int_handle_event
// file ../../src/mwidget.c line 298
static signed int int_handle_event(struct anonymous_12 *w, enum anonymous_18 event, signed int ch);
// int_paint
// file ../../src/mwidget.c line 293
static void int_paint(struct anonymous_12 *w);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// keypad
// file /usr/include/curses.h line 654
extern signed int keypad(struct _win_st *, _Bool);
// label_free
// file ../../src/mwidget.c line 60
static void label_free(struct anonymous_11 *w);
// label_get_size
// file ../../src/mwidget.c line 90
static void label_get_size(struct anonymous_11 *w, signed int *width, signed int *height);
// label_handle_event
// file ../../src/mwidget.c line 85
static signed int label_handle_event(struct anonymous_11 *w, enum anonymous_18 event, signed int ch);
// label_paint
// file ../../src/mwidget.c line 66
static void label_paint(struct anonymous_11 *w);
// list_free
// file ../../src/mwidget.c line 457
static void list_free(struct anonymous_14 *w);
// list_get_size
// file ../../src/mwidget.c line 582
static void list_get_size(struct anonymous_14 *w, signed int *width, signed int *height);
// list_handle_event
// file ../../src/mwidget.c line 522
static signed int list_handle_event(struct anonymous_14 *w, enum anonymous_18 event, signed int ch);
// list_open
// file ../../src/mlistedit.h line 38
void list_open(signed int *actLine);
// list_paint
// file ../../src/mwidget.c line 467
static void list_paint(struct anonymous_14 *w);
// list_scan_dir
// file ../../src/mlistedit.h line 35
signed int list_scan_dir(char *path, signed int quiet);
// lseek
// file /usr/include/unistd.h line 334
extern signed long int lseek(signed int, signed long int, signed int);
// lstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 262
extern signed int lstat(const char *, struct stat *);
// m_mkstemp
// file ../../src/mutilities.c line 238
static signed int m_mkstemp(char *tmpl);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// menu_check
// file ../../src/mmenu.c line 43
static signed int menu_check(char *text, char ch);
// menu_close
// file ../../src/mmenu.c line 410
void menu_close(struct MMENU *menu);
// menu_do_repaint
// file ../../src/mmenu.c line 210
static void menu_do_repaint(struct MWINDOW *win, signed int diff);
// menu_do_select
// file ../../src/mmenu.c line 325
static signed int menu_do_select(struct MWINDOW *win);
// menu_handle_key
// file ../../src/mmenu.c line 424
static signed int menu_handle_key(struct MWINDOW *win, signed int ch);
// menu_handle_resize
// file ../../src/mmenu.c line 480
static void menu_handle_resize(struct MWINDOW *win, signed int dx, signed int dy);
// menu_has_sub
// file ../../src/mmenu.c line 88
static signed int menu_has_sub(struct anonymous_8 *entry);
// menu_is_int
// file ../../src/mmenu.c line 78
static signed int menu_is_int(struct anonymous_8 *entry);
// menu_is_option
// file ../../src/mmenu.c line 68
static signed int menu_is_option(struct anonymous_8 *entry);
// menu_is_str
// file ../../src/mmenu.c line 83
static signed int menu_is_str(struct anonymous_8 *entry);
// menu_is_sub
// file ../../src/mmenu.c line 58
static signed int menu_is_sub(struct anonymous_8 *entry);
// menu_is_toggle
// file ../../src/mmenu.c line 73
static signed int menu_is_toggle(struct anonymous_8 *entry);
// menu_open
// file ../../src/mmenu.c line 510
void menu_open(struct MMENU *menu, signed int x, signed int y);
// menu_repaint
// file ../../src/mmenu.c line 279
static signed int menu_repaint(struct MWINDOW *win);
// menu_width
// file ../../src/mmenu.c line 94
static signed int menu_width(char *txt);
// mikmod_random
// file ../../src/mlist.c line 53
static signed int mikmod_random(signed int limit);
// mkstemp
// file /usr/include/stdlib.h line 619
extern signed int mkstemp(char *);
// nice
// file /usr/include/unistd.h line 598
extern signed int nice(signed int);
// nodelay
// file /usr/include/curses.h line 717
extern signed int nodelay(struct _win_st *, _Bool);
// noecho
// file /usr/include/curses.h line 718
extern signed int noecho(void);
// nonl
// file /usr/include/curses.h line 719
extern signed int nonl(void);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// options_free
// file ../../src/rcfile.c line 85
static void options_free(struct _OPTIONS *opts);
// parse_line
// file ../../src/rcfile.c line 390
static signed int parse_line(char *line, char **label, char **arg);
// path_relative
// file ../../src/mutilities.h line 192
signed int path_relative(const char *path);
// path_update
// file ../../src/mlistedit.c line 603
static signed int path_update(char *dest, char *path, char *file);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// player_handle_key
// file ../../src/mikmod.c line 578
static signed int player_handle_key(struct MWINDOW *win, signed int ch);
// player_quit
// file ../../src/mikmod.c line 712
static void player_quit(void);
// player_timeout
// file ../../src/mikmod.c line 723
static signed int player_timeout(struct MWINDOW *win, void *data);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_22 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_22 *);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// random
// file /usr/include/stdlib.h line 321
extern signed long int random(void);
// rc_close
// file ../../src/rcfile.h line 75
void rc_close(void);
// rc_load
// file ../../src/rcfile.h line 68
signed int rc_load(const char *name);
// rc_parse
// file ../../src/rcfile.c line 488
static signed int rc_parse(struct _OPTIONS *opts, const char *sec_name);
// rc_read_bit
// file ../../src/rcfile.h line 54
signed int rc_read_bit(const char *label, signed int *value, signed int mask);
// rc_read_bool
// file ../../src/rcfile.h line 53
signed int rc_read_bool(const char *label, signed int *value);
// rc_read_float
// file ../../src/rcfile.c line 308
signed int rc_read_float(const char *label, float *value, float min, float max);
// rc_read_int
// file ../../src/rcfile.h line 55
signed int rc_read_int(const char *label, signed int *value, signed int min, signed int max);
// rc_read_label
// file ../../src/rcfile.h line 57
signed int rc_read_label(const char *label, signed int *value, struct anonymous_4 *convert);
// rc_read_string
// file ../../src/rcfile.h line 65
signed int rc_read_string(const char *label, char **value, signed int length);
// rc_read_struct
// file ../../src/rcfile.h line 58
signed int rc_read_struct(const char *label);
// rc_read_struct_end
// file ../../src/rcfile.h line 59
signed int rc_read_struct_end(void);
// rc_save
// file ../../src/rcfile.h line 72
signed int rc_save(const char *name, const char *prg_name);
// rc_set_string
// file ../../src/rcfile.h line 62
void rc_set_string(char **value, const char *arg, signed int length);
// rc_write_bit
// file ../../src/rcfile.c line 134
signed int rc_write_bit(const char *label, signed int arg, signed int mask, const char *description);
// rc_write_bool
// file ../../src/rcfile.h line 40
signed int rc_write_bool(const char *label, signed int arg, const char *description);
// rc_write_float
// file ../../src/rcfile.c line 148
signed int rc_write_float(const char *label, float arg, const char *description);
// rc_write_int
// file ../../src/rcfile.h line 42
signed int rc_write_int(const char *label, signed int arg, const char *description);
// rc_write_label
// file ../../src/rcfile.h line 44
signed int rc_write_label(const char *label, struct anonymous_4 *convert, signed int arg, const char *description);
// rc_write_string
// file ../../src/rcfile.h line 45
signed int rc_write_string(const char *label, const char *arg, const char *description);
// rc_write_struct
// file ../../src/rcfile.h line 46
signed int rc_write_struct(const char *label, const char *description);
// rc_write_struct_end
// file ../../src/rcfile.h line 47
signed int rc_write_struct_end(const char *description);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// read_archiver
// file ../../src/mconfig.c line 555
static void read_archiver(struct anonymous_3 *cfg);
// read_theme
// file ../../src/mconfig.c line 488
static void read_theme(struct anonymous_3 *cfg);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// remove_message
// file ../../src/display.c line 209
static void remove_message(void);
// resizeterm
// file /usr/include/curses.h line 903
extern signed int resizeterm(signed int, signed int);
// scan_dir
// file ../../src/mlistedit.c line 321
static void scan_dir(char *path, signed int recursive, signed int links, struct anonymous_25 *freq_data, enum anonymous_26 mode, signed int (*func)(char *, signed int, signed int, void *), void *data, signed int *added, signed int *removed);
// scan_dir::func_object
//
signed int func_object(char *, signed int, signed int, void *);
// sched_get_priority_min
// file /usr/include/sched.h line 71
extern signed int sched_get_priority_min(signed int);
// sched_setscheduler
// file /usr/include/sched.h line 58
extern signed int sched_setscheduler(signed int, signed int, struct sched_param *);
// searchlist_cmp
// file ../../src/mlistedit.c line 121
static signed int searchlist_cmp(char **key, char **member);
// searchlist_search_cmp
// file ../../src/mlistedit.c line 127
static signed int searchlist_search_cmp(char *key, char **member);
// set_bit
// file ../../src/mikmod.c line 366
static void set_bit(unsigned short int *value, signed int mask, signed int boolv);
// set_help
// file ../../src/mconfedit.c line 217
void set_help(struct anonymous_8 *entry, const char *str, ...);
// set_priority
// file ../../src/mikmod.c line 329
static void set_priority(struct anonymous_3 *cfg);
// set_window_title
// file ../../src/display.c line 1288
static void set_window_title(const char *content);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// setup_printf
// file ../../src/display.c line 131
static void setup_printf(void);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sigwinch_handler
// file ../../src/mwindow.c line 181
void sigwinch_handler(signed int signum);
// skip_number
// file ../../src/mconfedit.c line 234
static char * skip_number(char *str);
// skip_space
// file ../../src/rcfile.c line 383
static char skip_space(char **line);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// split_command
// file ../../src/marchive.c line 330
static void split_command(char *command, char **argv, signed int sizeargv);
// split_name
// file ../../src/mlistedit.c line 1007
static void split_name(char *file, char **name, char **ext);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// srandom
// file /usr/include/stdlib.h line 324
extern void srandom(unsigned int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// start_color
// file /usr/include/curses.h line 771
extern signed int start_color(void);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// str_free
// file ../../src/mwidget.c line 111
static void str_free(struct anonymous_12 *w);
// str_get_size
// file ../../src/mwidget.c line 271
static void str_get_size(struct anonymous_12 *w, signed int *width, signed int *height);
// str_handle_event
// file ../../src/mwidget.c line 266
static signed int str_handle_event(struct anonymous_12 *w, enum anonymous_18 event, signed int ch);
// str_paint
// file ../../src/mwidget.c line 117
static void str_paint(struct anonymous_12 *w);
// str_sprintf
// file ../../src/mutilities.c line 208
char * str_sprintf(const char *fmt, const char *arg);
// str_sprintf2
// file ../../src/mutilities.h line 176
char * str_sprintf2(const char *fmt, const char *arg1, const char *arg2);
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
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// theme_copy
// file ../../src/mconfedit.c line 588
static void theme_copy(signed int *act_theme);
// theme_edit
// file ../../src/mconfedit.c line 507
static void theme_edit(signed int act_theme);
// theme_edit_close
// file ../../src/mconfedit.c line 448
static void theme_edit_close(struct anonymous_20 *data);
// theme_get_attrs
// file ../../src/mconfedit.c line 383
static void theme_get_attrs(struct anonymous_20 *data);
// theme_set_attrs
// file ../../src/mconfedit.c line 405
static void theme_set_attrs(struct anonymous_20 *data, signed int repaint);
// theme_uniq_name
// file ../../src/mconfedit.c line 557
static char * theme_uniq_name(char *src_name);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// toggle_free
// file ../../src/mwidget.c line 787
static void toggle_free(struct anonymous_15 *w);
// toggle_get_size
// file ../../src/mwidget.c line 803
static void toggle_get_size(struct anonymous_15 *w, signed int *width, signed int *height);
// toggle_handle_event
// file ../../src/mwidget.c line 798
static signed int toggle_handle_event(struct anonymous_15 *w, enum anonymous_18 event, signed int ch);
// toggle_paint
// file ../../src/mwidget.c line 793
static void toggle_paint(struct anonymous_15 *w);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// update_message
// file ../../src/display.c line 200
static void update_message(void);
// updatefirst
// file ../../src/display.c line 645
void updatefirst(struct MWINDOW *win, signed int *first, signed int *winx, signed int *count, signed int *semicount, signed int diff, signed int total);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vprintf
// file /usr/include/stdio.h line 377
extern signed int vprintf(const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// waddch
// file /usr/include/curses.h line 792
extern signed int waddch(struct _win_st *, const unsigned long int);
// waddnstr
// file /usr/include/curses.h line 795
extern signed int waddnstr(struct _win_st *, const char *, signed int);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// wclear
// file /usr/include/curses.h line 808
extern signed int wclear(struct _win_st *);
// wgetch
// file /usr/include/curses.h line 817
extern signed int wgetch(struct _win_st *);
// wid_button_add
// file ../../src/mwidget.c line 1078
struct WIDGET * wid_button_add(struct anonymous_17 *d, signed int spacing, const char *button, signed int active);
// wid_check_add
// file ../../src/mwidget.c line 1167
struct WIDGET * wid_check_add(struct anonymous_17 *d, signed int spacing, const char *button, signed int active, signed int selected);
// wid_check_set_selected
// file ../../src/mwidget.c line 1185
void wid_check_set_selected(struct anonymous_15 *w, signed int selected);
// wid_colorsel_add
// file ../../src/mwidget.c line 1213
struct WIDGET * wid_colorsel_add(struct anonymous_17 *d, signed int spacing, const char *hotkeys, signed int active);
// wid_colorsel_set_active
// file ../../src/mwidget.c line 1238
void wid_colorsel_set_active(struct anonymous_16 *w, signed int active);
// wid_int_add
// file ../../src/mwidget.c line 1048
struct WIDGET * wid_int_add(struct anonymous_17 *d, signed int spacing, signed int value, signed int length);
// wid_int_set_input
// file ../../src/mwidget.c line 1071
void wid_int_set_input(struct anonymous_12 *w, signed int value, signed int length);
// wid_label_add
// file ../../src/mwidget.c line 977
struct WIDGET * wid_label_add(struct anonymous_17 *d, signed int spacing, const char *msg);
// wid_label_set_label
// file ../../src/mwidget.c line 993
void wid_label_set_label(struct anonymous_11 *w, const char *label);
// wid_list_add
// file ../../src/mwidget.c line 1095
struct WIDGET * wid_list_add(struct anonymous_17 *d, signed int spacing, const char **entries, signed int cnt);
// wid_list_set_active
// file ../../src/mwidget.c line 1150
void wid_list_set_active(struct anonymous_14 *w, signed int cur);
// wid_list_set_entries
// file ../../src/mwidget.c line 1125
void wid_list_set_entries(struct anonymous_14 *w, const char **entries, signed int cur, signed int cnt);
// wid_list_set_selection_mode
// file ../../src/mwidget.c line 1162
void wid_list_set_selection_mode(struct anonymous_14 *w, enum anonymous_10 mode);
// wid_list_set_title
// file ../../src/mwidget.c line 1119
void wid_list_set_title(struct anonymous_14 *w, const char *title);
// wid_repaint
// file ../../src/mwidget.c line 1257
void wid_repaint(struct WIDGET *w);
// wid_set_func
// file ../../src/mwidget.c line 1249
void wid_set_func(struct WIDGET *w, signed int (*key)(struct WIDGET *, signed int), signed int (*focus)(struct WIDGET *, signed int), void *data);
// wid_set_func::focus_object
//
signed int focus_object(struct WIDGET *, signed int);
// wid_set_func::key_object
//
signed int key_object(struct WIDGET *, signed int);
// wid_set_size
// file ../../src/mwidget.c line 1243
void wid_set_size(struct WIDGET *w, signed int width, signed int height);
// wid_str_add
// file ../../src/mwidget.c line 999
struct WIDGET * wid_str_add(struct anonymous_17 *d, signed int spacing, const char *input, signed int length);
// wid_str_set_input
// file ../../src/mwidget.c line 1025
void wid_str_set_input(struct anonymous_12 *w, const char *input, signed int length);
// wid_toggle_add
// file ../../src/mwidget.c line 1190
struct WIDGET * wid_toggle_add(struct anonymous_17 *d, signed int spacing, const char *button, signed int active, signed int selected);
// wid_toggle_set_selected
// file ../../src/mwidget.c line 1208
void wid_toggle_set_selected(struct anonymous_15 *w, signed int selected);
// widget_init
// file ../../src/mwidget.c line 962
static void widget_init(struct WIDGET *w, struct anonymous_17 *d, signed int focus, signed int spacing);
// win_attrset
// file ../../src/mwindow.h line 146
void win_attrset(enum anonymous_7 attrs);
// win_box
// file ../../src/mwindow.c line 838
void win_box(struct MWINDOW *win, signed int x1, signed int y1, signed int x2, signed int y2);
// win_box_color
// file ../../src/mwindow.c line 768
void win_box_color(struct MWINDOW *win, signed int x1, signed int y1, signed int x2, signed int y2, enum anonymous_7 *back);
// win_box_win
// file ../../src/mwindow.c line 390
void win_box_win(signed int x1, signed int y1, signed int x2, signed int y2, const char *title);
// win_change_panel
// file ../../src/mwindow.h line 158
void win_change_panel(signed int new_panel);
// win_check_resize
// file ../../src/mwindow.c line 292
signed int win_check_resize(void);
// win_clear
// file ../../src/mwindow.h line 121
signed int win_clear(struct MWINDOW *win);
// win_close
// file ../../src/mwindow.c line 667
void win_close(struct MWINDOW *win);
// win_clrtoeol
// file ../../src/mwindow.h line 119
void win_clrtoeol(struct MWINDOW *win, signed int x, signed int y);
// win_cursor_set
// file ../../src/mwindow.c line 197
void win_cursor_set(signed int visible);
// win_do_resize
// file ../../src/mwindow.c line 549
void win_do_resize(signed int dx, signed int dy, signed int root);
// win_exit
// file ../../src/mwindow.h line 77
void win_exit(void);
// win_get_first
// file ../../src/mwindow.c line 497
struct MWINDOW * win_get_first(signed int dst_panel);
// win_get_panel
// file ../../src/mwindow.h line 160
signed int win_get_panel(void);
// win_get_size
// file ../../src/mwindow.h line 124
void win_get_size(struct MWINDOW *win, signed int *x, signed int *y);
// win_get_size_max
// file ../../src/mwindow.c line 698
void win_get_size_max(signed int *y, signed int *width, signed int *height);
// win_get_theme_color
// file ../../src/mwindow.c line 867
enum anonymous_7 win_get_theme_color(enum anonymous_7 attrs);
// win_get_window
// file ../../src/mwindow.c line 708
struct MWINDOW * win_get_window(void);
// win_get_window_root
// file ../../src/mwindow.h line 131
struct MWINDOW * win_get_window_root(void);
// win_getch
// file ../../src/mwindow.c line 327
static signed int win_getch(void);
// win_handle_key
// file ../../src/mwindow.c line 936
signed int win_handle_key(signed int ch);
// win_has_colors
// file ../../src/mwindow.h line 80
signed int win_has_colors(void);
// win_init
// file ../../src/mwindow.h line 75
void win_init(signed int quiet);
// win_init_status
// file ../../src/mwindow.h line 114
void win_init_status(signed int height);
// win_init_system
// file ../../src/mwindow.c line 253
void win_init_system(void);
// win_line
// file ../../src/mwindow.c line 749
void win_line(struct MWINDOW *win, signed int x1, signed int y1, signed int x2, signed int y2);
// win_main_iteration
// file ../../src/mwindow.c line 1043
signed int win_main_iteration(void);
// win_open
// file ../../src/mwindow.c line 491
struct MWINDOW * win_open(signed int x, signed int y, signed int width, signed int height, signed int border, const char *title, enum anonymous_7 attrs);
// win_panel_open
// file ../../src/mwindow.h line 88
struct MWINDOW * win_panel_open(signed int dst_panel, signed int x, signed int y, signed int width, signed int height, signed int border, const char *title, enum anonymous_7 attrs);
// win_panel_repaint
// file ../../src/mwindow.h line 108
void win_panel_repaint(void);
// win_panel_repaint_force
// file ../../src/mwindow.h line 111
void win_panel_repaint_force(void);
// win_panel_set_data
// file ../../src/mwindow.c line 544
void win_panel_set_data(signed int _panel, void *data);
// win_panel_set_handle_key
// file ../../src/mwindow.h line 95
void win_panel_set_handle_key(signed int _panel, signed int (*func)(struct MWINDOW *, signed int));
// win_panel_set_handle_key::func_object
//
signed int func_object(struct MWINDOW *, signed int);
// win_panel_set_repaint
// file ../../src/mwindow.h line 92
void win_panel_set_repaint(signed int _panel, signed int (*func)(struct MWINDOW *));
// win_panel_set_repaint::func_object
//
signed int func_object(struct MWINDOW *);
// win_panel_set_resize
// file ../../src/mwindow.h line 99
void win_panel_set_resize(signed int _panel, signed int auto_resize, void (*func)(struct MWINDOW *, signed int, signed int));
// win_panel_set_resize::func_object
//
void func_object(struct MWINDOW *, signed int, signed int);
// win_print
// file ../../src/mwindow.h line 134
void win_print(struct MWINDOW *win, signed int x, signed int y, const char *str);
// win_refresh
// file ../../src/mwindow.h line 156
void win_refresh(void);
// win_run
// file ../../src/mwindow.h line 171
void win_run(void);
// win_set_background
// file ../../src/mwindow.c line 909
void win_set_background(enum anonymous_7 bg);
// win_set_color
// file ../../src/mwindow.c line 882
void win_set_color(enum anonymous_7 attrs);
// win_set_data
// file ../../src/mwindow.c line 539
void win_set_data(void *data);
// win_set_forground
// file ../../src/mwindow.c line 903
void win_set_forground(enum anonymous_7 fg);
// win_set_handle_key
// file ../../src/mwindow.c line 515
void win_set_handle_key(signed int (*func)(struct MWINDOW *, signed int));
// win_set_handle_key::func_object
//
signed int func_object(struct MWINDOW *, signed int);
// win_set_repaint
// file ../../src/mwindow.c line 505
void win_set_repaint(signed int (*func)(struct MWINDOW *));
// win_set_repaint::func_object
//
signed int func_object(struct MWINDOW *);
// win_set_resize
// file ../../src/mwindow.c line 526
void win_set_resize(signed int auto_resize, void (*func)(struct MWINDOW *, signed int, signed int));
// win_set_resize::func_object
//
void func_object(struct MWINDOW *, signed int, signed int);
// win_set_theme
// file ../../src/mwindow.h line 82
void win_set_theme(struct anonymous_1 *new_theme);
// win_status
// file ../../src/mwindow.h line 116
void win_status(const char *msg);
// win_status_repaint
// file ../../src/mwindow.c line 571
static void win_status_repaint(void);
// win_timeout_add
// file ../../src/mwindow.h line 166
void win_timeout_add(signed int interval, signed int (*func)(struct MWINDOW *, void *), void *data);
// win_timeout_add::func_object
//
signed int func_object(struct MWINDOW *, void *);
// win_timeout_insert
// file ../../src/mwindow.c line 982
static void win_timeout_insert(struct TIMEOUT *src);
// win_timeout_remove
// file ../../src/mwindow.c line 1027
static void win_timeout_remove(signed int number);
// wmove
// file /usr/include/curses.h line 831
extern signed int wmove(struct _win_st *, signed int, signed int);
// wrefresh
// file /usr/include/curses.h line 836
extern signed int wrefresh(struct _win_st *);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// write_archiver
// file ../../src/mconfig.c line 543
static void write_archiver(struct anonymous_2 *archiver);
// write_description
// file ../../src/rcfile.c line 105
static void write_description(const char *desc);
// write_theme
// file ../../src/mconfig.c line 383
static void write_theme(struct anonymous_1 *theme);
// wtimeout
// file /usr/include/curses.h line 845
extern void wtimeout(struct _win_st *, signed int);

struct anonymous_19
{
  // handle_dlg
  signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *);
  // w
  struct WIDGET *w;
  // input
  void *input;
  // data
  void *data;
  // min
  signed int min;
  // max
  signed int max;
};

struct anonymous_0
{
  // file
  char *file;
  // archive
  char *archive;
  // time
  signed int time;
  // played
  signed int played;
};

struct anonymous_1
{
  // name
  char *name;
  // color
  signed int color;
  // attrs
  signed int *attrs;
};

struct anonymous_8
{
  // text
  char *text;
  // data
  void *data;
  // help
  char *help;
};

struct anonymous
{
  // entry
  struct anonymous_0 *entry;
  // length
  signed int length;
  // current
  signed int current;
  // curr_deleted
  signed int curr_deleted;
  // add_pos
  signed int add_pos;
};

struct anonymous_28
{
  // w
  struct anonymous_11 *w;
  // stop
  signed int stop;
};

struct anonymous_27
{
  // w
  struct anonymous_14 *w;
  // freq
  struct anonymous_25 *freq;
};

struct anonymous_25
{
  // w
  struct anonymous_14 *w;
  // path
  char path[8192l];
  // before_add
  signed int before_add;
  // actline
  signed int actline;
  // cnt_list
  signed int cnt_list;
  // searchlist
  char **searchlist;
  // handle_freq
  signed int (*handle_freq)(signed int, char *, void *);
  // data
  void *data;
};

struct anonymous_24
{
  // menu
  struct MMENU *menu;
  // actLine
  signed int *actLine;
};

struct anonymous_20
{
  // w
  struct WIDGET *w;
  // str_w
  struct anonymous_12 *str_w;
  // col_w
  struct anonymous_16 *col_w;
  // list_w
  struct anonymous_14 *list_w;
  // cur_attr
  signed int cur_attr;
  // theme
  struct anonymous_1 theme;
  // test_theme
  struct anonymous_1 test_theme;
  // orig_theme
  signed int orig_theme;
};

struct VOICEINFO
{
  // i
  struct INSTRUMENT *i;
  // s
  struct SAMPLE *s;
  // panning
  signed short int panning;
  // volume
  signed char volume;
  // period
  unsigned short int period;
  // kick
  unsigned char kick;
};

struct anonymous_5
{
  // time
  unsigned long int time;
  // volamp
  unsigned char volamp;
};

struct anonymous_6
{
  // vinfo
  struct VOICEINFO vinfo[256l];
  // vstatus
  struct anonymous_5 vstatus[256l];
};

struct anonymous_29
{
  // state
  enum anonymous_30 state;
  // quit
  signed int quit;
  // listend
  signed int listend;
  // norc
  signed int norc;
};

struct anonymous_17
{
  // active
  signed int active;
  // cnt
  signed int cnt;
  // attrs
  enum anonymous_7 attrs;
  // win
  struct MWINDOW *win;
  // widget
  struct WIDGET **widget;
};

struct anonymous_3
{
  // driver
  signed int driver;
  // driveroptions
  char *driveroptions;
  // stereo
  signed int stereo;
  // mode_16bit
  signed int mode_16bit;
  // frequency
  signed int frequency;
  // interpolate
  signed int interpolate;
  // hqmixer
  signed int hqmixer;
  // surround
  signed int surround;
  // reverb
  signed int reverb;
  // volume
  signed int volume;
  // volrestrict
  signed int volrestrict;
  // fade
  signed int fade;
  // loop
  signed int loop;
  // panning
  signed int panning;
  // extspd
  signed int extspd;
  // playmode
  signed int playmode;
  // curious
  signed int curious;
  // tolerant
  signed int tolerant;
  // renice
  signed int renice;
  // statusbar
  signed int statusbar;
  // save_config
  signed int save_config;
  // save_playlist
  signed int save_playlist;
  // pl_name
  char *pl_name;
  // cnt_hotlist
  signed int cnt_hotlist;
  // hotlist
  char **hotlist;
  // fullpaths
  signed int fullpaths;
  // forcesamples
  signed int forcesamples;
  // fakevolbars
  signed int fakevolbars;
  // window_title
  signed int window_title;
  // theme
  signed int theme;
  // cnt_themes
  signed int cnt_themes;
  // themes
  struct anonymous_1 *themes;
  // cnt_archiver
  signed int cnt_archiver;
  // archiver
  struct anonymous_2 *archiver;
};

struct anonymous_4
{
  // id
  signed int id;
  // label
  const char *label;
};

struct anonymous_2
{
  // location
  signed int location;
  // marker
  char *marker;
  // list
  char *list;
  // nameoffset
  signed int nameoffset;
  // extract
  char *extract;
  // skippat
  char *skippat;
  // skipstart
  signed int skipstart;
  // skipend
  signed int skipend;
};

struct WIDGET
{
  // type
  enum anonymous_32 type;
  // can_focus
  signed int can_focus;
  // has_focus
  signed int has_focus;
  // x
  signed int x;
  // y
  signed int y;
  // width
  signed int width;
  // height
  signed int height;
  // def_width
  signed int def_width;
  // def_height
  signed int def_height;
  // spacing
  signed int spacing;
  // d
  struct anonymous_17 *d;
  // w_free
  void (*w_free)(struct WIDGET *);
  // w_paint
  void (*w_paint)(struct WIDGET *);
  // w_handle_event
  signed int (*w_handle_event)(struct WIDGET *, enum anonymous_18, signed int);
  // w_get_size
  void (*w_get_size)(struct WIDGET *, signed int *, signed int *);
  // handle_key
  signed int (*handle_key)(struct WIDGET *, signed int);
  // handle_focus
  signed int (*handle_focus)(struct WIDGET *, signed int);
  // data
  void *data;
};

struct anonymous_13
{
  // w
  struct WIDGET w;
  // button
  char *button;
  // cnt
  signed int cnt;
  // active
  signed int active;
};

struct anonymous_15
{
  // w
  struct WIDGET w;
  // button
  char *button;
  // cnt
  signed int cnt;
  // selected
  signed int selected;
  // active
  signed int active;
};

struct anonymous_12
{
  // w
  struct WIDGET w;
  // input
  char *input;
  // cur_pos
  signed int cur_pos;
  // start
  signed int start;
  // length
  signed int length;
};

struct anonymous_11
{
  // w
  struct WIDGET w;
  // msg
  char *msg;
};

struct anonymous_16
{
  // w
  struct WIDGET w;
  // active
  signed int active;
  // hkeys
  char hkeys[5l];
  // sel_mode
  enum anonymous_10 sel_mode;
};

struct anonymous_14
{
  // w
  struct WIDGET w;
  // cur
  signed int cur;
  // first
  signed int first;
  // cnt
  signed int cnt;
  // entries
  char **entries;
  // title
  char *title;
  // sel_mode
  enum anonymous_10 sel_mode;
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

union anonymous_22
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct ENVPT
{
  // pos
  signed short int pos;
  // val
  signed short int val;
};

struct INSTRUMENT
{
  // insname
  char *insname;
  // flags
  unsigned char flags;
  // samplenumber
  unsigned short int samplenumber[120l];
  // samplenote
  unsigned char samplenote[120l];
  // nnatype
  unsigned char nnatype;
  // dca
  unsigned char dca;
  // dct
  unsigned char dct;
  // globvol
  unsigned char globvol;
  // volfade
  unsigned short int volfade;
  // panning
  signed short int panning;
  // pitpansep
  unsigned char pitpansep;
  // pitpancenter
  unsigned char pitpancenter;
  // rvolvar
  unsigned char rvolvar;
  // rpanvar
  unsigned char rpanvar;
  // volflg
  unsigned char volflg;
  // volpts
  unsigned char volpts;
  // volsusbeg
  unsigned char volsusbeg;
  // volsusend
  unsigned char volsusend;
  // volbeg
  unsigned char volbeg;
  // volend
  unsigned char volend;
  // volenv
  struct ENVPT volenv[32l];
  // panflg
  unsigned char panflg;
  // panpts
  unsigned char panpts;
  // pansusbeg
  unsigned char pansusbeg;
  // pansusend
  unsigned char pansusend;
  // panbeg
  unsigned char panbeg;
  // panend
  unsigned char panend;
  // panenv
  struct ENVPT panenv[32l];
  // pitflg
  unsigned char pitflg;
  // pitpts
  unsigned char pitpts;
  // pitsusbeg
  unsigned char pitsusbeg;
  // pitsusend
  unsigned char pitsusend;
  // pitbeg
  unsigned char pitbeg;
  // pitend
  unsigned char pitend;
  // pitenv
  struct ENVPT pitenv[32l];
};

struct MDRIVER
{
  // next
  struct MDRIVER *next;
  // Name
  const char *Name;
  // Version
  const char *Version;
  // HardVoiceLimit
  unsigned char HardVoiceLimit;
  // SoftVoiceLimit
  unsigned char SoftVoiceLimit;
  // Alias
  const char *Alias;
  // CmdLineHelp
  const char *CmdLineHelp;
  // CommandLine
  void (*CommandLine)(const char *);
  // IsPresent
  signed int (*IsPresent)(void);
  // SampleLoad
  signed short int (*SampleLoad)(struct SAMPLOAD *, signed int);
  // SampleUnload
  void (*SampleUnload)(signed short int);
  // FreeSampleSpace
  unsigned int (*FreeSampleSpace)(signed int);
  // RealSampleLength
  unsigned int (*RealSampleLength)(signed int, struct SAMPLE *);
  // Init
  signed int (*Init)(void);
  // Exit
  void (*Exit)(void);
  // Reset
  signed int (*Reset)(void);
  // SetNumVoices
  signed int (*SetNumVoices)(void);
  // PlayStart
  signed int (*PlayStart)(void);
  // PlayStop
  void (*PlayStop)(void);
  // Update
  void (*Update)(void);
  // Pause
  void (*Pause)(void);
  // VoiceSetVolume
  void (*VoiceSetVolume)(unsigned char, unsigned short int);
  // VoiceGetVolume
  unsigned short int (*VoiceGetVolume)(unsigned char);
  // VoiceSetFrequency
  void (*VoiceSetFrequency)(unsigned char, unsigned int);
  // VoiceGetFrequency
  unsigned int (*VoiceGetFrequency)(unsigned char);
  // VoiceSetPanning
  void (*VoiceSetPanning)(unsigned char, unsigned int);
  // VoiceGetPanning
  unsigned int (*VoiceGetPanning)(unsigned char);
  // VoicePlay
  void (*VoicePlay)(unsigned char, signed short int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned short int);
  // VoiceStop
  void (*VoiceStop)(unsigned char);
  // VoiceStopped
  signed int (*VoiceStopped)(unsigned char);
  // VoiceGetPosition
  signed int (*VoiceGetPosition)(unsigned char);
  // VoiceRealVolume
  unsigned int (*VoiceRealVolume)(unsigned char);
};

struct MMENU
{
  // cur
  signed int cur;
  // first
  signed int first;
  // count
  signed int count;
  // key_left
  signed int key_left;
  // entries
  struct anonymous_8 *entries;
  // handle_select
  void (*handle_select)(struct MMENU *);
  // win
  struct MWINDOW *win;
  // data
  void *data;
  // id
  signed int id;
};

struct MODULE
{
  // songname
  char *songname;
  // modtype
  char *modtype;
  // comment
  char *comment;
  // flags
  unsigned short int flags;
  // numchn
  unsigned char numchn;
  // numvoices
  unsigned char numvoices;
  // numpos
  unsigned short int numpos;
  // numpat
  unsigned short int numpat;
  // numins
  unsigned short int numins;
  // numsmp
  unsigned short int numsmp;
  // instruments
  struct INSTRUMENT *instruments;
  // samples
  struct SAMPLE *samples;
  // realchn
  unsigned char realchn;
  // totalchn
  unsigned char totalchn;
  // reppos
  unsigned short int reppos;
  // initspeed
  unsigned char initspeed;
  // inittempo
  unsigned short int inittempo;
  // initvolume
  unsigned char initvolume;
  // panning
  unsigned short int panning[64l];
  // chanvol
  unsigned char chanvol[64l];
  // bpm
  unsigned short int bpm;
  // sngspd
  unsigned short int sngspd;
  // volume
  signed short int volume;
  // extspd
  signed int extspd;
  // panflag
  signed int panflag;
  // wrap
  signed int wrap;
  // loop
  signed int loop;
  // fadeout
  signed int fadeout;
  // patpos
  unsigned short int patpos;
  // sngpos
  signed short int sngpos;
  // sngtime
  unsigned int sngtime;
  // relspd
  signed short int relspd;
  // numtrk
  unsigned short int numtrk;
  // tracks
  unsigned char **tracks;
  // patterns
  unsigned short int *patterns;
  // pattrows
  unsigned short int *pattrows;
  // positions
  unsigned short int *positions;
  // forbid
  signed int forbid;
  // numrow
  unsigned short int numrow;
  // vbtick
  unsigned short int vbtick;
  // sngremainder
  unsigned short int sngremainder;
  // control
  struct MP_CONTROL *control;
  // voice
  struct MP_VOICE *voice;
  // globalslide
  unsigned char globalslide;
  // pat_repcrazy
  unsigned char pat_repcrazy;
  // patbrk
  unsigned short int patbrk;
  // patdly
  unsigned char patdly;
  // patdly2
  unsigned char patdly2;
  // posjmp
  signed short int posjmp;
  // bpmlimit
  unsigned short int bpmlimit;
};

struct MWINDOW
{
  // x
  signed int x;
  // y
  signed int y;
  // width
  signed int width;
  // height
  signed int height;
  // attrs
  enum anonymous_7 attrs;
  // border
  signed int border;
  // resize
  signed int resize;
  // title
  char *title;
  // repaint
  signed int (*repaint)(struct MWINDOW *);
  // handle_key
  signed int (*handle_key)(struct MWINDOW *, signed int);
  // handle_resize
  void (*handle_resize)(struct MWINDOW *, signed int, signed int);
  // next
  struct MWINDOW *next;
  // data
  void *data;
};

struct SAMPLE
{
  // panning
  signed short int panning;
  // speed
  unsigned int speed;
  // volume
  unsigned char volume;
  // inflags
  unsigned short int inflags;
  // flags
  unsigned short int flags;
  // length
  unsigned int length;
  // loopstart
  unsigned int loopstart;
  // loopend
  unsigned int loopend;
  // susbegin
  unsigned int susbegin;
  // susend
  unsigned int susend;
  // globvol
  unsigned char globvol;
  // vibflags
  unsigned char vibflags;
  // vibtype
  unsigned char vibtype;
  // vibsweep
  unsigned char vibsweep;
  // vibdepth
  unsigned char vibdepth;
  // vibrate
  unsigned char vibrate;
  // samplename
  char *samplename;
  // avibpos
  unsigned short int avibpos;
  // divfactor
  unsigned char divfactor;
  // seekpos
  unsigned int seekpos;
  // handle
  signed short int handle;
  // onfree
  void (*onfree)(void *);
  // ctx
  void *ctx;
};

struct TIMEOUT
{
  // func
  signed int (*func)(struct MWINDOW *, void *);
  // data
  void *data;
  // interval
  signed int interval;
  // remaining
  signed int remaining;
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

struct _OPTION
{
  // label
  char *label;
  // arg
  char *arg;
  // options
  struct _OPTIONS *options;
};

struct _OPTIONS
{
  // cnt
  signed int cnt;
  // max
  signed int max;
  // option
  struct _OPTION *option;
  // parent
  struct _OPTIONS *parent;
};

struct _STACK
{
  // next
  struct _STACK *next;
  // data
  char *data;
};

struct pdat
{
  // _pad_y
  signed short int _pad_y;
  // _pad_x
  signed short int _pad_x;
  // _pad_top
  signed short int _pad_top;
  // _pad_left
  signed short int _pad_left;
  // _pad_bottom
  signed short int _pad_bottom;
  // _pad_right
  signed short int _pad_right;
};

struct _win_st
{
  // _cury
  signed short int _cury;
  // _curx
  signed short int _curx;
  // _maxy
  signed short int _maxy;
  // _maxx
  signed short int _maxx;
  // _begy
  signed short int _begy;
  // _begx
  signed short int _begx;
  // _flags
  signed short int _flags;
  // _attrs
  unsigned long int _attrs;
  // _bkgd
  unsigned long int _bkgd;
  // _notimeout
  _Bool _notimeout;
  // _clear
  _Bool _clear;
  // _leaveok
  _Bool _leaveok;
  // _scroll
  _Bool _scroll;
  // _idlok
  _Bool _idlok;
  // _idcok
  _Bool _idcok;
  // _immed
  _Bool _immed;
  // _sync
  _Bool _sync;
  // _use_keypad
  _Bool _use_keypad;
  // _delay
  signed int _delay;
  // _line
  struct ldat *_line;
  // _regtop
  signed short int _regtop;
  // _regbottom
  signed short int _regbottom;
  // _parx
  signed int _parx;
  // _pary
  signed int _pary;
  // _parent
  struct _win_st *_parent;
  // _pad
  struct pdat _pad;
  // _yoffset
  signed short int _yoffset;
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

struct sched_param
{
  // __sched_priority
  signed int __sched_priority;
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


// COLOR_PAIRS
// file /usr/include/curses.h line 1398
extern signed int COLOR_PAIRS;
// MikMod_errno
// file /usr/include/mikmod.h line 304
extern signed int MikMod_errno;
// PRG_NAME
// file ../../src/mikmod.c line 135
static const char *PRG_NAME;
// _mm_mutex_data
// file ../../src/mplayer.c line 55
static union anonymous_22 _mm_mutex_data = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// _mm_thread_updater
// file ../../src/mplayer.c line 56
unsigned long int _mm_thread_updater;
// acs_map
// file /usr/include/curses.h line 274
extern unsigned long int acs_map[];
// act_color
// file ../../src/mwindow.c line 112
static signed int act_color = (signed int)(1UL - 1UL);
// active
// file ../../src/mplayer.c line 52
static signed int active = 0;
// archiver_def
// file ../../src/mconfig.c line 283
static struct anonymous_2 archiver_def[10l];
// bzip2signat
// file ../../src/mconfig.c line 274
static char bzip2signat[4l] = { 'B', 'Z', 'h', 0 };
// gzsignat
// file ../../src/mconfig.c line 273
static char gzsignat[3l] = { 31, -117, 0 };
// lhsignat
// file ../../src/mconfig.c line 276
static char lhsignat[4l] = { '-', 'l', 'h', 0 };
// lzsignat
// file ../../src/mconfig.c line 277
static char lzsignat[4l] = { '-', 'l', 'z', 0 };
// pksignat
// file ../../src/mconfig.c line 270
static char pksignat[5l] = { 'P', 'K', 3, 4, 0 };
// rarsignat
// file ../../src/mconfig.c line 272
static char rarsignat[5l] = { 'R', 'a', 'r', '!', 0 };
// tarbzip2ext
// file ../../src/mconfig.c line 281
static char tarbzip2ext[20l] = { '.', 'T', 'A', 'R', '.', 'B', 'Z', '2', ' ', '.', 'T', 'B', 'Z', ' ', '.', 'T', 'B', 'Z', '2', 0 };
// targzext
// file ../../src/mconfig.c line 280
static char targzext[18l] = { '.', 'T', 'A', 'R', '.', 'G', 'Z', ' ', '.', 'T', 'A', 'Z', ' ', '.', 'T', 'G', 'Z', 0 };
// tarsignat
// file ../../src/mconfig.c line 275
static char tarsignat[6l] = { 'u', 's', 't', 'a', 'r', 0 };
// zoosignat
// file ../../src/mconfig.c line 271
static char zoosignat[5l] = { -36, -89, -60, -3, 0 };
// archiver_def
// file ../../src/mconfig.c line 283
static struct anonymous_2 archiver_def[10l] = { { .location=0, .marker=pksignat, .list="unzip -vqq \"%a\"", .nameoffset=58,
    .extract="unzip -pqq \"%a\" \"%f\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=20, .marker=zoosignat, .list="zoo lq \"%a\"", .nameoffset=47,
    .extract="zoo xpq \"%a\" \"%f\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=0, .marker=rarsignat, .list="unrar v -c- \"%a\"", .nameoffset=1,
    .extract="unrar p -inul \"%a\" \"%f\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=2, .marker=lhsignat, .list="lha vvq \"%a\"", .nameoffset=-1,
    .extract="lha pq \"%a\" \"%f\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=2, .marker=lzsignat, .list="lha vvq \"%a\"", .nameoffset=-1,
    .extract="lha pq \"%a\" \"%f\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=257, .marker=tarsignat, .list="tar -tf \"%a\"", .nameoffset=0,
    .extract="tar -xOf \"%a\" \"%f\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=-1, .marker=targzext, .list="tar -tzf \"%a\"", .nameoffset=0,
    .extract="tar -xOzf \"%a\" \"%f\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=-1, .marker=tarbzip2ext, .list="tar --use-compress-program=bzip2 -tf \"%a\"", .nameoffset=0,
    .extract="tar --use-compress-program=bzip2 -xOf \"%a\" \"%f\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=0, .marker=gzsignat, .list=(char *)(void *)0, .nameoffset=0,
    .extract="gzip -dqc \"%a\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 },
    { .location=0, .marker=bzip2signat, .list=(char *)(void *)0, .nameoffset=0,
    .extract="bzip2 -dqc \"%a\"", .skippat=(char *)(void *)0,
    .skipstart=0, .skipend=0 } };
// attrs_colb_label
// file ../../src/mconfig.c line 66
static const char *attrs_colb_label[9l] = { "black", "blue", "green", "cyan", "red", "magenta", "brown", "gray", (const char *)(void *)0 };
// attrs_colf_label
// file ../../src/mconfig.c line 59
static const char *attrs_colf_label[17l] = { "black", "blue", "green", "cyan", "red", "magenta", "brown", "gray", "b_black", "b_blue", "b_green", "b_cyan", "b_red", "b_magenta", "yellow", "white", (const char *)(void *)0 };
// attrs_label
// file ../../src/mconfig.c line 71
const char *attrs_label[41l] = { "WARNING", "TITLE", "BANNER", "SONG_STATUS", "INFO_INACTIVE", "INFO_ACTIVE", "INFO_IHOTKEY", "INFO_AHOTKEY", "HELP", "PLAYENTRY_INACTIVE", "PLAYENTRY_ACTIVE", "SAMPLES", "SAMPLES_KICK3", "SAMPLES_KICK2", "SAMPLES_KICK1", "SAMPLES_KICK0", "CONFIG", "VOLBAR", "VOLBAR_LOW", "VOLBAR_MED", "VOLBAR_HIGH", "VOLBAR_INSTR", "MENU_FRAME", "MENU_INACTIVE", "MENU_ACTIVE", "MENU_IHOTKEY", "MENU_AHOTKEY", "DLG_FRAME", "DLG_LABEL", "DLG_STR_TEXT", "DLG_STR_CURSOR", "DLG_BUT_INACTIVE", "DLG_BUT_ACTIVE", "DLG_BUT_IHOTKEY", "DLG_BUT_AHOTKEY", "DLG_BUT_ITEXT", "DLG_BUT_ATEXT", "DLG_LIST_FOCUS", "DLG_LIST_NOFOCUS", "STATUS_LINE", "STATUS_TEXT" };
// attrs_mono_conv
// file ../../src/mconfig.c line 52
static struct anonymous_4 attrs_mono_conv[4l] = { { .id=(signed int)(1UL - 1UL), .label="normal" },
    { .id=(signed int)((unsigned long int)1UL << 13 + 8), .label="bold" },
    { .id=(signed int)((unsigned long int)1UL << 10 + 8), .label="reverse" },
    { .id=-1, .label=(const char *)(void *)0 } };
// cnt_themes
// file ../../src/mconfedit.c line 212
static signed int cnt_themes = 0;
// cnt_timeouts
// file ../../src/mwindow.c line 126
static signed int cnt_timeouts = 0;
// color_attributes
// file ../../src/mconfig.c line 125
static signed int color_attributes[41l] = { 0x40 | 0x0f, 0x30 | 0x0f, 0x00 | 0x0a, 0x10 | 0x0f, 0x30 | 0x01, 0x00 | 0x0f, 0x30 | 0x0e, 0x00 | 0x0e, 0x00 | 0x06, 0x00 | 0x03, 0x00 | 0x0b, 0x00 | 0x03, 0x00 | 0x0f, 0x00 | 0x0b, 0x00 | 0x09, 0x00 | 0x01, 0x00 | 0x03, 0x00 | 0x03, 0x00 | 0x0a, 0x00 | 0x0e, 0x00 | 0x0c, 0x00 | 0x02, 0x30 | 0x00, 0x30 | 0x00, 0x00 | 0x0f, 0x30 | 0x0e, 0x00 | 0x0e, 0x70 | 0x00, 0x70 | 0x01, 0x00 | 0x0f, 0x30 | 0x00, 0x30 | 0x07, 0x00 | 0x0f, 0x30 | 0x0e, 0x00 | 0x0e, 0x30 | 0x00, 0x00 | 0x0f, 0x30 | 0x00, 0x30 | 0x0e, 0x00 | 0x0b, 0x00 | 0x03 };
// config
// file ../../src/mikmod.c line 137
struct anonymous_3 config;
// cur_display
// file ../../src/display.c line 117
static signed int cur_display = 2;
// cur_panel
// file ../../src/mwindow.c line 108
static signed int cur_panel = 0;
// cur_window
// file ../../src/mwindow.c line 109
static struct MWINDOW *cur_window = (struct MWINDOW *)(void *)0;
// curses_on
// file ../../src/mwindow.c line 107
static signed int curses_on = 0;
// cursor_old
// file ../../src/mwindow.c line 142
static signed int cursor_old = 0;
// driveroptions
// file ../../src/mconfedit.c line 109
static char driveroptions[100l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// dynamic_repaint
// file ../../src/display.c line 104
static void (*dynamic_repaint)(struct MWINDOW *) = (void (*)(struct MWINDOW *))(void *)0;
// dynamic_repaint_win
// file ../../src/display.c line 105
static struct MWINDOW *dynamic_repaint_win;
// entries
// file ../../src/mconfedit.c line 186
static struct anonymous_8 entries[8l];
// other_menu
// file ../../src/mconfedit.c line 183
static struct MMENU other_menu;
// other_entries
// file ../../src/mconfedit.c line 165
static struct anonymous_8 other_entries[13l];
// exit_menu
// file ../../src/mconfedit.c line 162
static struct MMENU exit_menu;
// exit_entries
// file ../../src/mconfedit.c line 157
static struct anonymous_8 exit_entries[3l] = { { .text="[%c] Save &config", .data=NULL, .help=(char *)(void *)0 },
    { .text="[%c] Save &playlist", .data=NULL, .help=(char *)(void *)0 },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
// exit_menu
// file ../../src/mconfedit.c line 162
static struct MMENU exit_menu = { .cur=0, .first=0, .count=-1, .key_left=1, .entries=exit_entries,
    .handle_select=handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)0, .id=5 };
// plmode_menu
// file ../../src/mconfedit.c line 154
static struct MMENU plmode_menu;
// plmode_entries
// file ../../src/mconfedit.c line 146
static struct anonymous_8 plmode_entries[5l] = { { .text="[%c] Loop &module", .data=NULL, .help="Loop current module" },
    { .text="[%c] Loop &list", .data=NULL, .help="Play the list repeatedly" },
    { .text="[%c] &Shuffle list", .data=NULL, .help="Shuffle list at start and when all entries are played" },
    { .text="[%c] List &random", .data=NULL, .help="Play list in random order" },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
// plmode_menu
// file ../../src/mconfedit.c line 154
static struct MMENU plmode_menu = { .cur=0, .first=0, .count=-1, .key_left=1, .entries=plmode_entries,
    .handle_select=handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)0, .id=4 };
// other_entries
// file ../../src/mconfedit.c line 165
static struct anonymous_8 other_entries[13l] = { { .text="&Playmode  %>", .data=(void *)&plmode_menu, .help="Playlist playing mode" },
    { .text="[%c] &Curious", .data=NULL, .help="Look for hidden patterns in module" },
    { .text="[%c] &Tolerant", .data=NULL, .help="Don't halt on file access errors" },
    { .text="[%c] &Full path", .data=NULL, .help="Display full path of files" },
    { .text="&Edit theme", .data=NULL, .help="Copy, edit, or delete active theme" },
    { .text=(char *)(void *)0, .data=NULL, .help="Color theme to use ((C) color theme, (M) mono theme)" },
    { .text="[%c] &Window title", .data=NULL, .help="Set the term/window title to song name/filename" },
    { .text="[%c] Sample&names", .data=NULL, .help="Always display sample names in volumebars panel" },
    { .text="[%c] Fake &volumebars", .data=NULL, .help="Display fast (non CPU-intensive) volumebars" },
    { .text="&Scheduling       [%o]|Normal|Renice|Realtime", .data=NULL,
    .help="Change process priority, MikMod must be restarted to change this" },
    { .text="Status&bar           [%o]|None|Small|Big", .data=NULL,
    .help="Size of the statusbar" },
    { .text="&On exit   %>", .data=(void *)&exit_menu, .help="" },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
// other_menu
// file ../../src/mconfedit.c line 183
static struct MMENU other_menu = { .cur=0, .first=0, .count=-1, .key_left=1, .entries=other_entries,
    .handle_select=handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)0, .id=3 };
// output_menu
// file ../../src/mconfedit.c line 129
static struct MMENU output_menu;
// output_entries
// file ../../src/mconfedit.c line 112
static struct anonymous_8 output_entries[10l];
// output_entries
// file ../../src/mconfedit.c line 112
static struct anonymous_8 output_entries[10l] = { { .text=(char *)(void *)0, .data=NULL, .help="The device driver for output" },
    { .text=(char *)(void *)0, .data=(void *)driveroptions, .help="Driver options (e.g. \"buffer=14,count=16\" for the OSS-driver)" },
    { .text="[%c] &Stereo", .data=NULL, .help="mono/stereo output" },
    { .text="[%c] 16 &bit output", .data=NULL, .help="8/16 bit output" },
    { .text="&Frequency        [%d]|Enter mixing frequency:|4000|60000", .data=NULL,
    .help="Mixing frequency in hertz (from 4000 Hz to 60000 Hz)" },
    { .text="[%c] &Interpolate", .data=NULL, .help="Use interpolated mixing" },
    { .text="[%c] &HQmixer", .data=NULL, .help="Use high-quality (but slower) software mixer" },
    { .text="[%c] S&urround", .data=NULL, .help="Use surround mixing" },
    { .text="&Reverb              [%d]|Enter reverb amount:|0|15", .data=NULL,
    .help="Reverb amount from 0 (no reverb) to 15" },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
// output_menu
// file ../../src/mconfedit.c line 129
static struct MMENU output_menu = { .cur=0, .first=0, .count=-1, .key_left=1, .entries=output_entries,
    .handle_select=handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)0, .id=1 };
// playback_menu
// file ../../src/mconfedit.c line 143
static struct MMENU playback_menu;
// playback_entries
// file ../../src/mconfedit.c line 132
static struct anonymous_8 playback_entries[7l] = { { .text="&Volume     [%d]|Enter output volume:|0|100", .data=NULL,
    .help="Output volume from 0 to 100 in %" },
    { .text="[%c] &Restrict Volume", .data=NULL, .help="Restrict volume of player to volume supplied by user (with 1..0,<,>)" },
    { .text="[%c] &Fadeout", .data=NULL, .help="Force volume fade at the end of module" },
    { .text="[%c] &Loops", .data=NULL, .help="Enable in-module loops" },
    { .text="[%c] &Panning", .data=NULL, .help="Process panning effects" },
    { .text="[%c] Pro&tracker", .data=NULL, .help="Use extended protracker effects" },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
// playback_menu
// file ../../src/mconfedit.c line 143
static struct MMENU playback_menu = { .cur=0, .first=0, .count=-1, .key_left=1, .entries=playback_entries,
    .handle_select=handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)0, .id=2 };
// entries
// file ../../src/mconfedit.c line 186
static struct anonymous_8 entries[8l] = { { .text="&Output options %>", .data=(void *)&output_menu, .help="" },
    { .text="&Playback options %>", .data=(void *)&playback_menu, .help="" },
    { .text="O&ther options %>", .data=(void *)&other_menu, .help="" },
    { .text="%------------", .data=NULL, .help=(char *)(void *)0 },
    { .text="&Use config", .data=NULL, .help="Activate the edited configuration" },
    { .text="S&ave config", .data=NULL, .help="Save and activate the edited configuration" },
    { .text="R&evert config", .data=NULL, .help="Reset the configuration to the actual used one" },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
// first_comment
// file ../../src/display.c line 123
static signed int first_comment = 0;
// first_help
// file ../../src/display.c line 120
static signed int first_help = 0;
// first_inst
// file ../../src/display.c line 122
static signed int first_inst = 0;
// first_list
// file ../../src/display.c line 124
static signed int first_list = 0;
// first_sample
// file ../../src/display.c line 121
static signed int first_sample = 0;
// first_volbar
// file ../../src/display.c line 126
static signed int first_volbar = 0;
// fmt_fullwidth
// file ../../src/display.c line 64
char fmt_fullwidth[20l];
// fmt_halfwidth
// file ../../src/display.c line 67
char fmt_halfwidth[20l];
// fp
// file ../../src/rcfile.c line 67
static struct _IO_FILE *fp = (struct _IO_FILE *)(void *)0;
// halfwidth
// file ../../src/display.c line 62
signed int halfwidth;
// indent
// file ../../src/rcfile.c line 69
static char indent[41l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// md_device
// file /usr/include/mikmod.h line 789
extern unsigned short int md_device;
// md_driver
// file /usr/include/mikmod.h line 794
extern struct MDRIVER *md_driver;
// md_mixfreq
// file /usr/include/mikmod.h line 790
extern unsigned short int md_mixfreq;
// md_mode
// file /usr/include/mikmod.h line 791
extern unsigned short int md_mode;
// md_pansep
// file /usr/include/mikmod.h line 783
extern unsigned char md_pansep;
// md_reverb
// file /usr/include/mikmod.h line 782
extern unsigned char md_reverb;
// md_volume
// file /usr/include/mikmod.h line 779
extern unsigned char md_volume;
// menu
// file ../../src/mconfedit.c line 196
static struct MMENU menu;
// menu
// file ../../src/mconfedit.c line 196
static struct MMENU menu = { .cur=0, .first=0, .count=-1, .key_left=0, .entries=entries,
    .handle_select=handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)0, .id=0 };
// mf
// file ../../src/mikmod.c line 138
struct MODULE *mf = (struct MODULE *)(void *)0;
// modulepatterns
// file ../../src/marchive.c line 84
static const char *modulepatterns[20l] = { "*.669", "*.[Aa][Mm][Ff]", "*.[Aa][Pp][Uu][Nn]", "*.[Dd][Ss][Mm]", "*.[Ff][Aa][Rr]", "*.[Gg][Dd][Mm]", "*.[Ii][Mm][Ff]", "*.[Ii][Tt]", "*.[Mm][Ee][Dd]", "*.[Mm][Oo][Dd]", "*.[Mm][Tt][Mm]", "*.[Nn][Ss][Tt]", "*.[Ss]3[Mm]", "*.[Ss][Tt][Mm]", "*.[Ss][Tt][Xx]", "*.[Uu][Ll][Tt]", "*.[Uu][Mm][Xx]", "*.[Uu][Nn][Ii]", "*.[Xx][Mm]", (const char *)(void *)0 };
// mono_attributes
// file ../../src/mconfig.c line 177
static signed int mono_attributes[41l] = { (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)(1UL - 1UL), (signed int)((unsigned long int)1UL << 13 + 8),
    (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)((unsigned long int)1UL << 13 + 8),
    (signed int)(1UL - 1UL), (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)(1UL - 1UL), (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)((unsigned long int)1UL << 13 + 8),
    (signed int)(1UL - 1UL), (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)((unsigned long int)1UL << 10 + 8),
    (signed int)((unsigned long int)1UL << 13 + 8),
    (signed int)((unsigned long int)1UL << 13 + 8),
    (signed int)(1UL - 1UL), (signed int)(1UL - 1UL), (signed int)(1UL - 1UL) };
// next
// file ../../src/mikmod.c line 157
static signed int next = 0;
// next_pl_pos
// file ../../src/mikmod.c line 158
static signed int next_pl_pos = 0;
// next_sng_pos
// file ../../src/mikmod.c line 159
static signed int next_sng_pos = 0;
// old_display
// file ../../src/display.c line 117
static signed int old_display = 2;
// old_message
// file ../../src/display.c line 176
static char old_message[321l];
// old_panel
// file ../../src/mwindow.c line 108
static signed int old_panel = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// options
// file ../../src/mikmod.c line 91
static struct option options[35l] = { { .name="driver", .has_arg=1, .flag=(signed int *)(void *)0, .val=100 },
    { .name="output", .has_arg=1, .flag=(signed int *)(void *)0, .val=111 },
    { .name="frequency", .has_arg=1, .flag=(signed int *)(void *)0, .val=102 },
    { .name="interpolate", .has_arg=0, .flag=(signed int *)(void *)0, .val=105 },
    { .name="nointerpolate", .has_arg=0, .flag=(signed int *)(void *)0, .val=1 },
    { .name="hqmixer", .has_arg=0, .flag=(signed int *)(void *)0, .val=2 },
    { .name="nohqmixer", .has_arg=0, .flag=(signed int *)(void *)0, .val=3 },
    { .name="surround", .has_arg=0, .flag=(signed int *)(void *)0, .val=4 },
    { .name="nosurround", .has_arg=0, .flag=(signed int *)(void *)0, .val=5 },
    { .name="reverb", .has_arg=1, .flag=(signed int *)(void *)0, .val=114 },
    { .name="volume", .has_arg=1, .flag=(signed int *)(void *)0, .val=118 },
    { .name="fadeout", .has_arg=0, .flag=(signed int *)(void *)0, .val=70 },
    { .name="nofadeout", .has_arg=0, .flag=(signed int *)(void *)0, .val=6 },
    { .name="loops", .has_arg=0, .flag=(signed int *)(void *)0, .val=108 },
    { .name="noloops", .has_arg=0, .flag=(signed int *)(void *)0, .val=7 },
    { .name="panning", .has_arg=0, .flag=(signed int *)(void *)0, .val=97 },
    { .name="nopanning", .has_arg=0, .flag=(signed int *)(void *)0, .val=8 },
    { .name="protracker", .has_arg=0, .flag=(signed int *)(void *)0, .val=120 },
    { .name="noprotracker", .has_arg=0, .flag=(signed int *)(void *)0, .val=9 },
    { .name="directory", .has_arg=1, .flag=(signed int *)(void *)0, .val=121 },
    { .name="curious", .has_arg=0, .flag=(signed int *)(void *)0, .val=99 },
    { .name="nocurious", .has_arg=0, .flag=(signed int *)(void *)0, .val=10 },
    { .name="playmode", .has_arg=1, .flag=(signed int *)(void *)0, .val=112 },
    { .name="tolerant", .has_arg=0, .flag=(signed int *)(void *)0, .val=116 },
    { .name="notolerant", .has_arg=0, .flag=(signed int *)(void *)0, .val=11 },
    { .name="renice", .has_arg=0, .flag=(signed int *)(void *)0, .val=115 },
    { .name="norenice", .has_arg=0, .flag=(signed int *)(void *)0, .val=12 },
    { .name="realtime", .has_arg=0, .flag=(signed int *)(void *)0, .val=83 },
    { .name="norealtime", .has_arg=0, .flag=(signed int *)(void *)0, .val=12 },
    { .name="quiet", .has_arg=0, .flag=(signed int *)(void *)0, .val=113 },
    { .name="information", .has_arg=2, .flag=(signed int *)(void *)0, .val=110 },
    { .name="drvinfo", .has_arg=1, .flag=(signed int *)(void *)0, .val=78 },
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
// options_link1
// file ../../src/rcfile.c line 68
static struct _OPTIONS *options_link1 = (struct _OPTIONS *)(void *)0;
// panel
// file ../../src/mwindow.c line 109
static struct MWINDOW *panel[8l];
// paused
// file ../../src/mplayer.c line 52
static signed int paused = 1;
// playdata
// file ../../src/display.c line 72
static struct anonymous_6 playdata;
// playdata_link1
// file ../../src/mplayer.c line 50
static struct anonymous_6 playdata_link1;
// playlist
// file ../../src/mikmod.c line 136
struct anonymous playlist;
// prefixmodulepatterns
// file ../../src/marchive.c line 109
static const char *prefixmodulepatterns[5l] = { "[Mm][Ee][Dd].*", "[Mm][Oo][Dd].*", "[Nn][Ss][Tt].*", "[Xx][Mm].*", (const char *)(void *)0 };
// quiet
// file ../../src/mikmod.c line 139
signed int quiet = 0;
// remove_msg
// file ../../src/display.c line 174
static signed int remove_msg = 0;
// renice_conv
// file ../../src/mconfig.c line 45
static struct anonymous_4 renice_conv[4l] = { { .id=0, .label="RENICE_NONE" }, { .id=1, .label="RENICE_PRI" }, { .id=2, .label="RENICE_REAL" }, { .id=-1, .label=(const char *)(void *)0 } };
// resize
// file ../../src/mwindow.c line 143
static signed int resize = 0;
// root
// file ../../src/display.c line 116
static struct MWINDOW *root;
// root_y1
// file ../../src/mwindow.c line 106
static signed int root_y1 = 7;
// root_y2
// file ../../src/mwindow.c line 106
static signed int root_y2 = 0;
// samp_attr
// file ../../src/display.c line 96
static enum anonymous_7 samp_attr[4l] = { (enum anonymous_7)ATTR_SAMPLES_KICK0, (enum anonymous_7)ATTR_SAMPLES_KICK1, (enum anonymous_7)ATTR_SAMPLES_KICK2, (enum anonymous_7)ATTR_SAMPLES_KICK3 };
// samp_char
// file ../../src/display.c line 90
static char samp_char[4l] = { (char)46, (char)111, (char)79, (char)64 };
// settime
// file ../../src/mikmod.c line 161
static signed int settime = 1;
// sort_mode
// file ../../src/mlistedit.c line 1024
static enum anonymous_23 sort_mode = (enum anonymous_23)SORT_NAME;
// sort_rev
// file ../../src/mlistedit.c line 1017
static signed int sort_rev = 0;
// start_time
// file ../../src/display.c line 175
static signed long int start_time;
// status
// file ../../src/mikmod.c line 154
static struct anonymous_29 status = { .state=(enum anonymous_30)STATE_INIT, .quit=0, .listend=0,
    .norc=0 };
// status_message
// file ../../src/mwindow.c line 569
static char status_message[202l];
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// stdscr
// file /usr/include/curses.h line 1395
extern struct _win_st *stdscr;
// storage
// file ../../src/mwindow.c line 104
char storage[322l];
// structs
// file ../../src/rcfile.c line 70
static struct _STACK *structs = (struct _STACK *)(void *)0;
// theme
// file ../../src/mwindow.c line 113
static struct anonymous_1 *theme = (struct anonymous_1 *)(void *)0;
// themes
// file ../../src/mconfedit.c line 213
static struct anonymous_1 *themes = (struct anonymous_1 *)(void *)0;
// timeouts
// file ../../src/mwindow.c line 127
static struct TIMEOUT *timeouts = (struct TIMEOUT *)(void *)0;
// updater_mode
// file ../../src/mplayer.c line 56
static enum anonymous_21 updater_mode = (enum anonymous_21)MTH_NORUN;
// use_colors
// file ../../src/mwindow.c line 111
static signed int use_colors = 1;
// use_threads
// file ../../src/mplayer.c line 52
static signed int use_threads = 0;
// uservolume
// file ../../src/mikmod.c line 162
static signed int uservolume = 128;
// volume
// file ../../src/mplayer.c line 53
static signed int volume = -1;
// win_quiet
// file ../../src/mwindow.c line 107
static signed int win_quiet = 1;
// winx
// file ../../src/mwindow.c line 115
static signed int winx = 0;
// winy
// file ../../src/mwindow.c line 115
static signed int winy = 0;

// CF_GetDefaultFilename
// file ../../src/mconfig.c line 361
char * CF_GetDefaultFilename(void)
{
  char *return_value_str_sprintf2_1;
  return_value_str_sprintf2_1=str_sprintf2("%s/%s", "/usr/share/mikmod", "mikmodrc");
  return return_value_str_sprintf2_1;
}

// CF_GetFilename
// file ../../src/mconfig.h line 211
char * CF_GetFilename(void)
{
  char *return_value_get_cfg_name_1;
  return_value_get_cfg_name_1=get_cfg_name(".mikmodrc");
  return return_value_get_cfg_name_1;
}

// CF_Init
// file ../../src/mconfig.h line 231
void CF_Init(struct anonymous_3 *cfg)
{
  cfg->driver = 0;
  rc_set_string(&cfg->driveroptions, "", 255);
  cfg->stereo = 1;
  cfg->mode_16bit = 1;
  cfg->frequency = 44100;
  cfg->interpolate = 1;
  cfg->hqmixer = 0;
  cfg->surround = 0;
  cfg->reverb = 0;
  cfg->volume = 100;
  cfg->volrestrict = 0;
  cfg->fade = 0;
  cfg->loop = 0;
  cfg->panning = 1;
  cfg->extspd = 1;
  cfg->playmode = 2;
  cfg->curious = 0;
  cfg->tolerant = 1;
  cfg->renice = 0;
  cfg->statusbar = 2;
  cfg->save_config = 1;
  cfg->save_playlist = 1;
  rc_set_string(&cfg->pl_name, "playlist.mpl", 4096);
  cfg->cnt_hotlist = 0;
  cfg->hotlist = (char **)(void *)0;
  cfg->fullpaths = 0;
  cfg->forcesamples = 0;
  cfg->fakevolbars = 1;
  cfg->window_title = 1;
  init_themes(cfg);
  cfg->cnt_archiver = (signed int)(sizeof(struct anonymous_2 [10l]) /*560ul*/  / sizeof(struct anonymous_2) /*56ul*/ );
  cfg->archiver = archiver_def;
}

// CF_Load
// file ../../src/mconfig.h line 233
signed int CF_Load(struct anonymous_3 *cfg)
{
  char *name;
  name=CF_GetFilename();
  char *str = (char *)(void *)0;
  signed int i;
  signed int return_value_rc_read_string_3;
  signed int return_value_rc_read_struct_4;
  signed int return_value_rc_read_struct_7;
  if(name == ((char *)NULL))
    return 0;

  else
  {
    signed int return_value_rc_load_2;
    return_value_rc_load_2=rc_load(name);
    if(return_value_rc_load_2 == 0)
    {
      free((void *)name);
      rc_close();
      name=CF_GetDefaultFilename();
      if(name == ((char *)NULL))
        return 0;

      signed int return_value_rc_load_1;
      return_value_rc_load_1=rc_load(name);
      if(return_value_rc_load_1 == 0)
      {
        free((void *)name);
        rc_close();
        return 0;
      }

    }

    free((void *)name);
    rc_read_int("DRIVER", &cfg->driver, 0, 999);
    rc_read_string("DRV_OPTIONS", &cfg->driveroptions, 255);
    rc_read_bool("STEREO", &cfg->stereo);
    rc_read_bool("16BIT", &cfg->mode_16bit);
    rc_read_int("FREQUENCY", &cfg->frequency, 4000, 60000);
    rc_read_bool("INTERPOLATE", &cfg->interpolate);
    rc_read_bool("HQMIXER", &cfg->hqmixer);
    rc_read_bool("SURROUND", &cfg->surround);
    rc_read_int("REVERB", &cfg->reverb, 0, 15);
    rc_read_int("VOLUME", &cfg->volume, 0, 100);
    rc_read_bool("VOLRESTRICT", &cfg->volrestrict);
    rc_read_bool("FADEOUT", &cfg->fade);
    rc_read_bool("LOOP", &cfg->loop);
    rc_read_bool("PANNING", &cfg->panning);
    rc_read_bool("EXTSPD", &cfg->extspd);
    rc_read_bit("PM_MODULE", &cfg->playmode, 1);
    rc_read_bit("PM_MULTI", &cfg->playmode, 2);
    rc_read_bit("PM_SHUFFLE", &cfg->playmode, 4);
    rc_read_bit("PM_RANDOM", &cfg->playmode, 8);
    rc_read_bool("CURIOUS", &cfg->curious);
    rc_read_bool("TOLERANT", &cfg->tolerant);
    rc_read_label("RENICE", &cfg->renice, renice_conv);
    rc_read_int("STATUSBAR", &cfg->statusbar, 0, 2);
    rc_read_bool("SAVECONFIG", &cfg->save_config);
    rc_read_bool("SAVEPLAYLIST", &cfg->save_playlist);
    rc_read_string("PL_NAME", &cfg->pl_name, 4096);
    do
    {
      return_value_rc_read_string_3=rc_read_string("HOTLIST", &str, 4096);
      if(return_value_rc_read_string_3 == 0)
        break;

      CF_string_array_insert(cfg->cnt_hotlist, &cfg->hotlist, &cfg->cnt_hotlist, str, 4096);
    }
    while((_Bool)1);
    rc_read_bool("FULLPATHS", &cfg->fullpaths);
    rc_read_bool("FORCESAMPLES", &cfg->forcesamples);
    rc_read_bool("FAKEVOLUMEBARS", &cfg->fakevolbars);
    rc_read_bool("WINDOWTITLE", &cfg->window_title);
    do
    {
      return_value_rc_read_struct_4=rc_read_struct("THEME");
      if(return_value_rc_read_struct_4 == 0)
        break;

      read_theme(cfg);
      rc_read_struct_end();
    }
    while((_Bool)1);
    signed int return_value_rc_read_string_6;
    return_value_rc_read_string_6=rc_read_string("THEME", &str, 99);
    if(!(return_value_rc_read_string_6 == 0))
    {
      i = 0;
      for( ; !(i >= cfg->cnt_themes); i = i + 1)
      {
        signed int return_value_strcasecmp_5;
        return_value_strcasecmp_5=strcasecmp(str, (cfg->themes + (signed long int)i)->name);
        if(return_value_strcasecmp_5 == 0)
        {
          cfg->theme = i;
          break;
        }

      }
    }

    do
    {
      return_value_rc_read_struct_7=rc_read_struct("ARCHIVER");
      if(return_value_rc_read_struct_7 == 0)
        break;

      read_archiver(cfg);
      rc_read_struct_end();
    }
    while((_Bool)1);
    free((void *)str);
    rc_close();
    return 1;
  }
}

// CF_Save
// file ../../src/mconfig.h line 232
signed int CF_Save(struct anonymous_3 *cfg)
{
  char *name;
  signed int i;
  name=CF_GetFilename();
  if(name == ((char *)NULL))
    return 0;

  else
  {
    signed int return_value_rc_save_1;
    return_value_rc_save_1=rc_save(name, "-= MikMod 3.2.7 =-");
    if(return_value_rc_save_1 == 0)
    {
      free((void *)name);
      rc_close();
      return 0;
    }

    else
    {
      free((void *)name);
      rc_write_int("DRIVER", cfg->driver, "DRIVER = <val>, nth driver for output, default: 0\n");
      rc_write_string("DRV_OPTIONS", cfg->driveroptions, "DRV_OPTIONS = \"options\", the driver options, e.g. \"buffer=14,count=16\"\n                         for the OSS-driver\n");
      rc_write_bool("STEREO", cfg->stereo, "STEREO = Yes|No, stereo or mono output, default: stereo\n");
      rc_write_bool("16BIT", cfg->mode_16bit, "16BIT = Yes|No, 8 or 16 bit output, default: 16 bit\n");
      rc_write_int("FREQUENCY", cfg->frequency, "FREQUENCY = <val>, mixing frequency, default: 44100 Hz\n");
      rc_write_bool("INTERPOLATE", cfg->interpolate, "INTERPOLATE = Yes|No, use interpolate mixing, default: Yes\n");
      rc_write_bool("HQMIXER", cfg->hqmixer, "HQMIXER = Yes|No, use high-quality (but slow) software mixer, default: No\n");
      rc_write_bool("SURROUND", cfg->surround, "SURROUND = Yes|No, use surround mixing, default: No\n");
      rc_write_int("REVERB", cfg->reverb, "REVERB = <val>, set reverb amount (0-15), default: 0 (none)\n");
      rc_write_int("VOLUME", cfg->volume, "VOLUME = <val>, volume from 0 (silence) to 100, default: 100\n");
      rc_write_bool("VOLRESTRICT", cfg->volrestrict, "VOLRESTRICT = Yes|No, restrict volume of player to volume supplied by user,\n                      default: No\n");
      rc_write_bool("FADEOUT", cfg->fade, "FADEOUT = Yes|No, volume fade at the end of the module, default: No\n");
      rc_write_bool("LOOP", cfg->loop, "LOOP = Yes|No, enable in-module loops, default: No\n");
      rc_write_bool("PANNING", cfg->panning, "PANNING = Yes|No, process panning effects, default: Yes\n");
      rc_write_bool("EXTSPD", cfg->extspd, "EXTSPD = Yes|No, process Protracker extended speed effect, default: Yes\n");
      rc_write_bool("PM_MODULE", (cfg->playmode & 1) != 0 ? 1 : 0, "PM_MODULE = Yes|No, Module repeats, default: No\n");
      rc_write_bool("PM_MULTI", (cfg->playmode & 2) != 0 ? 1 : 0, "PM_MULTI = Yes|No, PlayList repeats, default: Yes\n");
      rc_write_bool("PM_SHUFFLE", (cfg->playmode & 4) != 0 ? 1 : 0, "PM_SHUFFLE = Yes|No, Shuffle list at start and if all entries are played,\n                     default: No\n");
      rc_write_bool("PM_RANDOM", (cfg->playmode & 8) != 0 ? 1 : 0, "PM_RANDOM = Yes|No, PlayList in random order, default: No\n");
      rc_write_bool("CURIOUS", cfg->curious, "CURIOUS = Yes|No, look for hidden patterns in module, default: No\n");
      rc_write_bool("TOLERANT", cfg->tolerant, "TOLERANT = Yes|No, don't halt on file access errors, default: Yes\n");
      rc_write_label("RENICE", renice_conv, cfg->renice, "RENICE = RENICE_NONE (change nothing), RENICE_PRI (Renice to -20) or\n         RENICE_REAL (get realtime priority), default: RENICE_NONE\n  Note that RENICE_PRI is only available under FreeBSD, Linux, NetBSD,\n  OpenBSD and OS/2, and RENICE_REAL is only available under FreeBSD, Linux\n  and OS/2.\n");
      rc_write_int("STATUSBAR", cfg->statusbar, "STATUSBAR = <val>, size of statusbar from 0 to 2, default: 2\n");
      rc_write_bool("SAVECONFIG", cfg->save_config, "SAVECONFIG = Yes|No, save configuration on exit, default: Yes\n");
      rc_write_bool("SAVEPLAYLIST", cfg->save_playlist, "SAVEPLAYLIST = Yes|No, save playlist on exit, default: Yes\n");
      rc_write_string("PL_NAME", cfg->pl_name, "PL_NAME = \"name\", name under which the playlist will be saved\n                  by selecting 'Save' in the playlist-menu\n");
      if(cfg->cnt_hotlist >= 1)
      {
        rc_write_string("HOTLIST", cfg->hotlist[(signed long int)0], "HOTLIST = \"name\", entries in the directory hotlist,\n                  can occur any time in this file\n");
        i = 1;
        for( ; !(i >= cfg->cnt_hotlist); i = i + 1)
          rc_write_string("HOTLIST", cfg->hotlist[(signed long int)i], (const char *)(void *)0);
      }

      rc_write_bool("FULLPATHS", cfg->fullpaths, "FULLPATHS = Yes|No, display full path of files, default: Yes\n");
      rc_write_bool("FORCESAMPLES", cfg->forcesamples, "FORCESAMPLES = Yes|No, always display sample names (instead of\n    instrument names) in volumebars panel, default: No\n");
      rc_write_bool("FAKEVOLUMEBARS", cfg->fakevolbars, "FAKEVOLUMEBARS = Yes|No, display fast, but not always accurate, volumebars\n    in volumebars panel, default: Yes\n    The real volumebars (when this setting is \"No\") take some CPU time to\n    be computed, and don't work with every driver.\n");
      rc_write_bool("WINDOWTITLE", cfg->window_title, "WINDOWTITLE = Yes|No, set the term/window title to song name\n    (or filename if song has no title), default: Yes\n");
      rc_write_string("THEME", (cfg->themes + (signed long int)cfg->theme)->name, "THEME = \"name\", name of the theme to use, default: <defaultColor>");
      if(cfg->cnt_themes >= 3)
      {
        rc_write_struct("THEME", "Definition of the themes\n  NAME = \"name\", specifies the name of the theme\n  <screen_element> = normal | bold | reverse  , for mono themes or\n  <screen_element> = <fgcolor>,<bgcolor>      , for color themes\n    where <fgcolor> = black | blue | green | cyan | red | magenta |\n                      brown | gray | b_black | b_blue | b_green |\n                      b_cyan | b_red | b_magenta | yellow | white\n          <bgcolor> = black | blue | green | cyan | red | magenta |\n                      brown | gray\n");
        write_theme(&cfg->themes[(signed long int)2]);
        rc_write_struct_end((const char *)(void *)0);
        i = 2 + 1;
        for( ; !(i >= cfg->cnt_themes); i = i + 1)
        {
          rc_write_struct("THEME", (const char *)(void *)0);
          write_theme(&cfg->themes[(signed long int)i]);
          rc_write_struct_end((const char *)(void *)0);
        }
      }

      if(cfg->cnt_archiver >= 1)
      {
        rc_write_struct("ARCHIVER", "Definition of the archiver\n  LOCATION = <val>, -1: MARKER gives list of possible file extensions\n             otherwise: location where MARKER must be found in the file\n  MARKER = <string>, see LOCATION, e.g. \".TAR.GZ .TGZ\" or \"PK\\x03\\x04\"\n  LIST = <command>, command to list archive content (%A archive name,\n                    %a short(DOS/WIN) archive name)\n  NAMEOFFSET = <val>, column where file names begin,\n               -1: start at column 0 and end at first space\n  EXTRACT = <command>, command to extract a file to stdout (%A archive name,\n             %a short archive name, %f file name, %d destination name(non UNIX))\n  SKIPPAT = <string>, Remove the first SKIPSTART lines starting from the first\n                      occurence of SKIPPAT and the last SKIPEND lines from the\n                      extracted file (if the command EXTRACT mixes status\n                      information and the module).\n  SKIPSTART = <val>, \n  SKIPEND = <val>, \n");
        write_archiver(&cfg->archiver[(signed long int)0]);
        rc_write_struct_end((const char *)(void *)0);
        i = 1;
        for( ; !(i >= cfg->cnt_archiver); i = i + 1)
        {
          rc_write_struct("ARCHIVER", (const char *)(void *)0);
          write_archiver(&cfg->archiver[(signed long int)i]);
          rc_write_struct_end((const char *)(void *)0);
        }
      }

      rc_close();
      return 1;
    }
  }
}

// CF_string_array_insert
// file ../../src/mconfig.c line 780
void CF_string_array_insert(signed int pos, char ***value, signed int *cnt, char *arg, signed int length)
{
  signed int i;
  *cnt = *cnt + 1;
  void *return_value_realloc_1;
  return_value_realloc_1=realloc((void *)*value, sizeof(char *) /*8ul*/  * (unsigned long int)*cnt);
  *value = (char **)return_value_realloc_1;
  i = *cnt - 1;
  for( ; !(pos >= i); i = i - 1)
    (*value)[(signed long int)i] = (*value)[(signed long int)(i - 1)];
  (*value)[(signed long int)pos] = (char *)(void *)0;
  rc_set_string(&(*value)[(signed long int)pos], arg, length);
}

// CF_string_array_remove
// file ../../src/mconfig.c line 793
void CF_string_array_remove(signed int pos, char ***value, signed int *cnt)
{
  signed int i;
  if(*cnt >= 1)
  {
    *cnt = *cnt - 1;
    if(!(*value == ((char **)NULL)))
    {
      if(!((*value)[(signed long int)pos] == ((char *)NULL)))
        free((void *)(*value)[(signed long int)pos]);

    }

    if(*cnt >= 1)
    {
      i = pos;
      for( ; !(i >= *cnt); i = i + 1)
        (*value)[(signed long int)i] = (*value)[(signed long int)(i + 1)];
      void *return_value_realloc_1;
      return_value_realloc_1=realloc((void *)*value, sizeof(char *) /*8ul*/  * (unsigned long int)*cnt);
      *value = (char **)return_value_realloc_1;
    }

    else
    {
      free((void *)*value);
      *value = (char **)(void *)0;
    }
  }

}

// CF_theme_copy
// file ../../src/mconfig.c line 413
void CF_theme_copy(struct anonymous_1 *dest, struct anonymous_1 *src)
{
  dest->color = src->color;
  dest->name=strdup(src->name);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)((signed int)ATTR_STATUS_TEXT + 1));
  dest->attrs = (signed int *)return_value_malloc_1;
  memcpy((void *)dest->attrs, (const void *)src->attrs, sizeof(signed int) /*4ul*/  * (unsigned long int)((signed int)ATTR_STATUS_TEXT + 1));
}

// CF_theme_free
// file ../../src/mconfig.c line 403
void CF_theme_free(struct anonymous_1 *theme)
{
  if(!(theme == ((struct anonymous_1 *)NULL)))
  {
    if(!(theme->name == ((char *)NULL)))
      free((void *)theme->name);

    if(!(theme->attrs == ((signed int *)NULL)))
      free((void *)theme->attrs);

  }

}

// CF_theme_insert
// file ../../src/mconfig.c line 469
signed int CF_theme_insert(struct anonymous_1 **themes, signed int *cnt, struct anonymous_1 *theme)
{
  signed int i;
  signed int pos = *cnt;
  signed int return_value_strcasecmp_1;
  if(*cnt >= 2)
  {
    pos = 2;
    for( ; !(pos >= *cnt); pos = pos + 1)
    {
      return_value_strcasecmp_1=strcasecmp((*themes + (signed long int)pos)->name, theme->name);
      if(return_value_strcasecmp_1 >= 0)
        break;

    }
  }

  *cnt = *cnt + 1;
  void *return_value_realloc_2;
  return_value_realloc_2=realloc((void *)*themes, sizeof(struct anonymous_1) /*24ul*/  * (unsigned long int)*cnt);
  *themes = (struct anonymous_1 *)return_value_realloc_2;
  i = *cnt - 1;
  for( ; !(pos >= i); i = i - 1)
    (*themes)[(signed long int)i] = (*themes)[(signed long int)(i - 1)];
  CF_theme_copy(&(*themes)[(signed long int)pos], theme);
  return pos;
}

// CF_theme_remove
// file ../../src/mconfig.c line 447
void CF_theme_remove(signed int pos, struct anonymous_1 **themes, signed int *cnt)
{
  signed int i;
  if(*cnt >= 1)
  {
    *cnt = *cnt - 1;
    if(!(*themes == ((struct anonymous_1 *)NULL)))
      CF_theme_free(&(*themes)[(signed long int)pos]);

    if(*cnt >= 1)
    {
      i = pos;
      for( ; !(i >= *cnt); i = i + 1)
        (*themes)[(signed long int)i] = (*themes)[(signed long int)(i + 1)];
      void *return_value_realloc_1;
      return_value_realloc_1=realloc((void *)*themes, sizeof(struct anonymous_1) /*24ul*/  * (unsigned long int)*cnt);
      *themes = (struct anonymous_1 *)return_value_realloc_1;
    }

    else
    {
      free((void *)*themes);
      *themes = (struct anonymous_1 *)(void *)0;
    }
  }

}

// CF_themes_free
// file ../../src/mconfig.c line 422
void CF_themes_free(struct anonymous_1 **themes, signed int *cnt)
{
  if(!(themes == ((struct anonymous_1 **)NULL)))
  {
    if(!(*themes == ((struct anonymous_1 *)NULL)))
    {
      signed int i = 0;
      for( ; !(i >= *cnt); i = i + 1)
        CF_theme_free(&(*themes)[(signed long int)i]);
      free((void *)*themes);
    }

  }

  *cnt = 0;
  *themes = (struct anonymous_1 *)(void *)0;
}

// CF_themes_free_user
// file ../../src/mconfig.c line 435
void CF_themes_free_user(struct anonymous_1 **themes, signed int *cnt)
{
  if(!(themes == ((struct anonymous_1 **)NULL)))
  {
    if(!(*themes == ((struct anonymous_1 *)NULL)))
    {
      signed int i = 2;
      for( ; !(i >= *cnt); i = i + 1)
        CF_theme_free(&(*themes)[(signed long int)i]);
      *cnt = 2;
      void *return_value_realloc_1;
      return_value_realloc_1=realloc((void *)*themes, sizeof(struct anonymous_1) /*24ul*/  * (unsigned long int)*cnt);
      *themes = (struct anonymous_1 *)return_value_realloc_1;
    }

  }

}

// DropPrivileges
// file ../../src/marchive.c line 119
signed int DropPrivileges(void)
{
  unsigned int return_value_geteuid_5;
  return_value_geteuid_5=geteuid();
  if(return_value_geteuid_5 == 0u)
  {
    unsigned int return_value_getuid_4;
    return_value_getuid_4=getuid();
    if(!(return_value_getuid_4 == 0u))
    {
      unsigned int return_value_getuid_1;
      return_value_getuid_1=getuid();
      signed int return_value_setuid_2;
      return_value_setuid_2=setuid(return_value_getuid_1);
      if(!(return_value_setuid_2 == 0))
        return 1;

    }

    else
    {
      struct passwd *nobody;
      signed int uid;
      nobody=getpwnam("nobody");
      if(nobody == ((struct passwd *)NULL))
        return 1;

      uid = (signed int)nobody->pw_uid;
      if(uid == 0)
        return 1;

      signed int return_value_setuid_3;
      return_value_setuid_3=setuid((unsigned int)uid);
      if(!(return_value_setuid_3 == 0))
        return 1;

    }
  }

  return 0;
}

// ExitGracefully
// file ../../src/mikmod.c line 278
static void ExitGracefully(signed int signum)
{
  if((signed int)status.state == STATE_PLAY)
  {
    status.quit = 1;
    signal(signum, ExitGracefully);
  }

  else
  {
    win_exit();
    if(quiet == 0)
      fputs(signum == 15 ? "Halted by SIGTERM\n" : "Halted by SIGINT\n", stderr);

    signal(2, (void (*)(signed int))0);
    signal(15, (void (*)(signed int))0);
    exit(0);
  }
}

// GotoNext
// file ../../src/mikmod.c line 264
static void GotoNext(signed int signum)
{
  next = 1;
  signal(10, GotoNext);
}

// GotoPrev
// file ../../src/mikmod.c line 271
static void GotoPrev(signed int signum)
{
  next = 2;
  signal(12, GotoPrev);
}

// MA_FindFiles
// file ../../src/marchive.c line 654
void MA_FindFiles(struct anonymous *pl, const char *filename)
{
  signed int t;
  signed int archive = -1;
  struct stat statbuf;
  signed int return_value_stat_1;
  return_value_stat_1=stat(filename, &statbuf);
  signed int return_value_PL_Load_2;
  signed int return_value_MA_identify_5;
  _Bool tmp_if_expr_18;
  signed int tmp_if_expr_6;
  signed int return_value_waitpid_9;
  signed int tmp_post_11;
  _Bool tmp_if_expr_12;
  const unsigned short int **return_value___ctype_b_loc_13;
  if(return_value_stat_1 == 0)
  {
    if(!((61440u & statbuf.st_mode) == 8192u) && !((61440u & statbuf.st_mode) == 16384u) && !((61440u & statbuf.st_mode) == 24576u))
    {
      signed int return_value_PL_isPlaylistFilename_3;
      return_value_PL_isPlaylistFilename_3=PL_isPlaylistFilename(filename);
      if(!(return_value_PL_isPlaylistFilename_3 == 0))
      {
        return_value_PL_Load_2=PL_Load(pl, filename);
        if(return_value_PL_Load_2 == 0)
          goto __CPROVER_DUMP_L3;

      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        signed int return_value_MA_isModuleFilename_4;
        return_value_MA_isModuleFilename_4=MA_isModuleFilename(filename);
        if(!(return_value_MA_isModuleFilename_4 == 0))
          PL_Add(pl, filename, (const char *)(void *)0, 0, 0);

        else
        {
          t = 0;
          for( ; !(t >= config.cnt_archiver); t = t + 1)
          {
            return_value_MA_identify_5=MA_identify(filename, (config.archiver + (signed long int)t)->location, (config.archiver + (signed long int)t)->marker);
            if(!(return_value_MA_identify_5 == 0))
            {
              archive = t;
              break;
            }

          }
          if(archive >= 0)
          {
            if(!((config.archiver + (signed long int)archive)->list == ((char *)NULL)))
              tmp_if_expr_18 = *(config.archiver + (signed long int)archive)->list != 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_18 = (_Bool)0;
            if(tmp_if_expr_18)
            {
              signed int endspace = (signed int)((config.archiver + (signed long int)archive)->nameoffset < 0);
              signed int offset;
              if(!(endspace == 0))
                tmp_if_expr_6 = 0;

              else
                tmp_if_expr_6 = (config.archiver + (signed long int)archive)->nameoffset;
              offset = tmp_if_expr_6;
              char *string;
              void *return_value_malloc_7;
              return_value_malloc_7=malloc((unsigned long int)(4096 + 2 + offset));
              string = (char *)return_value_malloc_7;
              char *command;
              signed int fd[2l];
              signed int return_value_pipe_15;
              return_value_pipe_15=pipe(fd);
              if(return_value_pipe_15 == 0)
              {
                signed int pid;
                signed int MA_FindFiles__1__3__1__1__status;
                signed int cur;
                signed int finished = 0;
                char ch;
                pid=fork();
                if(!(pid == -1))
                {
                  if(pid == 0)
                    goto __CPROVER_DUMP_L13;

                }

                else
                {
                  goto __CPROVER_DUMP_L31;

                __CPROVER_DUMP_L13:
                  ;
                  char *argv[20l];
                  signed int return_value_DropPrivileges_8;
                  return_value_DropPrivileges_8=DropPrivileges();
                  if(!(return_value_DropPrivileges_8 == 0))
                    exit(0);

                  close(0);
                  close(1);
                  close(2);
                  dup2(fd[(signed long int)1], 1);
                  dup2(fd[(signed long int)1], 2);
                  signal(2, (void (*)(signed int))0);
                  signal(3, (void (*)(signed int))0);
                  command=get_command((config.archiver + (signed long int)archive)->list, filename, (const char *)(void *)0, (const char *)(void *)0);
                  split_command(command, argv, 20);
                  execvp(argv[(signed long int)0], argv);
                  free((void *)command);
                  close(fd[(signed long int)1]);
                  exit(0);
                  goto __CPROVER_DUMP_L31;
                }
                close(fd[(signed long int)1]);
                cur = 0;
                while((_Bool)1)
                {
                  if(finished == 0)
                  {
                    return_value_waitpid_9=waitpid(pid, &MA_FindFiles__1__3__1__1__status, 1);
                    if(!(return_value_waitpid_9 == 0))
                    {
                      finished = 1;
                      if(!((0x7f & MA_FindFiles__1__3__1__1__status) == 0))
                      {
                        close(fd[(signed long int)0]);
                        goto __CPROVER_DUMP_L30;
                      }

                    }

                  }

                  signed long int return_value_read_10;
                  return_value_read_10=read(fd[(signed long int)0], (void *)&ch, (unsigned long int)1);
                  if(return_value_read_10 == 0l)
                  {
                    if(!(finished == 0))
                      break;

                  }

                  if((signed int)ch == 10)
                    ch = (char)0;

                  tmp_post_11 = cur;
                  cur = cur + 1;
                  string[(signed long int)tmp_post_11] = ch;
                  if(cur >= 1 + offset)
                    cur = 4096 + offset;

                  if(ch == 0)
                  {
                    cur = 0;
                    if(!(endspace == 0))
                    {
                      t = 0;
                      do
                      {
                        if(!((signed int)string[(signed long int)t] == 32))
                          tmp_if_expr_12 = (signed int)string[(signed long int)t] != 0 ? (_Bool)1 : (_Bool)0;

                        else
                          tmp_if_expr_12 = (_Bool)0;
                        if(!tmp_if_expr_12)
                          break;

                        t = t + 1;
                      }
                      while((_Bool)1);
                      string[(signed long int)t] = (char)0;
                    }

                    t = offset;
                    do
                    {
                      return_value___ctype_b_loc_13=__ctype_b_loc();
                      if((8192 & (signed int)(*return_value___ctype_b_loc_13)[(signed long int)(signed int)string[(signed long int)t]]) == 0)
                        break;

                      t = t + 1;
                    }
                    while((_Bool)1);
                    signed int return_value_MA_isModuleFilename2_14;
                    return_value_MA_isModuleFilename2_14=MA_isModuleFilename2(string + (signed long int)t);
                    if(!(return_value_MA_isModuleFilename2_14 == 0))
                      PL_Add(pl, string + (signed long int)t, filename, 0, 0);

                  }

                }

              __CPROVER_DUMP_L30:
                ;
                close(fd[(signed long int)0]);
              }


            __CPROVER_DUMP_L31:
              ;
              free((void *)string);
            }

            else
            {
              const char *dot;
              const char *slash;
              char *spare;
              dot=strrchr(filename, 46);
              slash=strrchr(filename, 47);
              if(slash == ((const char *)NULL))
                slash = filename;

              else
                slash = slash + 1l;
              if(dot == ((const char *)NULL))
              {
                dot = slash;
                for( ; !(*dot == 0); dot = dot + 1l)
                  ;
              }

              void *return_value_malloc_16;
              return_value_malloc_16=malloc((unsigned long int)(((signed long int)1 + dot) - slash) * sizeof(char) /*1ul*/ );
              spare = (char *)return_value_malloc_16;
              if(!(spare == ((char *)NULL)))
              {
                strncpy(spare, slash, (unsigned long int)(dot - slash));
                spare[dot - slash] = (char)0;
                signed int return_value_MA_isModuleFilename2_17;
                return_value_MA_isModuleFilename2_17=MA_isModuleFilename2(spare);
                if(!(return_value_MA_isModuleFilename2_17 == 0))
                  PL_Add(pl, spare, filename, 0, 0);

                free((void *)spare);
              }

            }
          }

          else
            PL_Add(pl, filename, (const char *)(void *)0, 0, 0);
        }
      }
    }

  }

}

// MA_MatchExtension
// file ../../src/marchive.c line 171
static signed int MA_MatchExtension(const char *archive, const char *ends)
{
  const char *pos = ends;
  signed int nr;
  signed int arch_nr;

__CPROVER_DUMP_L1:
  ;
  signed int return_value_toupper_2;
  while((_Bool)1)
  {
    if(!(*pos == 0))
    {
      if(!((signed int)*pos == 32))
      {
        pos = pos + 1l;
        goto __CPROVER_DUMP_L1;
      }

    }

    nr = (signed int)(pos - ends);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(archive);
    arch_nr = (signed int)return_value_strlen_1;
    for( ; nr >= 1; arch_nr = arch_nr - 1)
    {
      if(!(arch_nr >= 1))
        break;

      return_value_toupper_2=toupper((signed int)archive[(signed long int)(arch_nr - 1)]);
      if(!(return_value_toupper_2 == (signed int)ends[(signed long int)nr + -1l]))
        break;

      nr = nr - 1;
    }
    if(!(nr >= 1))
      return 1;

    pos = pos + 1l;
    ends = pos;
    if(pos[-1l] == 0)
      break;

  }
  return 0;
}

// MA_TestName
// file ../../src/marchive.c line 624
signed int MA_TestName(const char *filename, signed int plist, signed int deep)
{
  signed int t;
  signed int return_value_PL_isPlaylistFilename_1;
  signed int return_value_MA_isModuleFilename2_2;
  signed int return_value_MA_identify_3;
  if(!(plist == 0))
  {
    return_value_PL_isPlaylistFilename_1=PL_isPlaylistFilename(filename);
    if(return_value_PL_isPlaylistFilename_1 == 0)
      goto __CPROVER_DUMP_L1;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!(deep == 0))
    {
      char *title;
      title=Player_LoadTitle(filename);
      if(!(title == ((char *)NULL)))
      {
        MikMod_free((void *)title);
        return 1;
      }

      else
        if(!(MikMod_errno == 11))
          return 1;

    }

    else
    {
      return_value_MA_isModuleFilename2_2=MA_isModuleFilename2(filename);
      if(!(return_value_MA_isModuleFilename2_2 == 0))
        return 1;

    }
    t = 0;
    for( ; !(t >= config.cnt_archiver); t = t + 1)
    {
      return_value_MA_identify_3=MA_identify(filename, (config.archiver + (signed long int)t)->location, (config.archiver + (signed long int)t)->marker);
      if(!(return_value_MA_identify_3 == 0))
        return 1;

    }
    return 0;
  }
}

// MA_dearchive
// file ../../src/marchive.c line 492
signed int MA_dearchive(const char *arc, const char *file, char **extracted)
{
  char *tmp_file = (char *)(void *)0;
  char tmp_file_sys[4097l];
  char *command;
  signed int tmp_fd = -1;
  signed int t;
  if(!(extracted == ((char **)NULL)))
    *extracted = (char *)(void *)0;

  _Bool tmp_if_expr_1;
  if(arc == ((const char *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(arc[(signed long int)0] != 0) ? (_Bool)1 : (_Bool)0;
  signed int return_value_DropPrivileges_2;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_1)
  {
    tmp_fd=open(file, 00 | 0, 0600);
    return tmp_fd;
  }

  else
  {
    tmp_file_sys[(signed long int)4096] = (char)0;
    t = 0;
    for( ; !(t >= config.cnt_archiver); t = t + 1)
    {
      signed int return_value_MA_identify_3;
      return_value_MA_identify_3=MA_identify(arc, (config.archiver + (signed long int)t)->location, (config.archiver + (signed long int)t)->marker);
      if(!(return_value_MA_identify_3 == 0))
      {
        display_extractbanner();
        signed int pid;
        signed int MA_dearchive__1__2__1__1__1__status;
        char *argv[20l];
        tmp_fd=get_tmp_file((const char *)(void *)0, &tmp_file);
        if(!(tmp_fd >= 0))
          return -1;

        strncpy(tmp_file_sys, tmp_file, (unsigned long int)4096);
        unlink(tmp_file_sys);
        free((void *)tmp_file);
        tmp_file = (char *)(void *)0;
        pid=fork();
        if(!(pid == -1))
        {
          if(pid == 0)
            goto __CPROVER_DUMP_L8;

        }

        else
        {
          close(tmp_fd);
          return -1;

        __CPROVER_DUMP_L8:
          ;
          return_value_DropPrivileges_2=DropPrivileges();
          if(!(return_value_DropPrivileges_2 == 0))
            exit(0);

          close(0);
          close(1);
          close(2);
          dup2(tmp_fd, 1);
          signal(2, (void (*)(signed int))0);
          signal(3, (void (*)(signed int))0);
          command=get_command((config.archiver + (signed long int)t)->extract, arc, file, (const char *)(void *)0);
          if(!(command == ((char *)NULL)))
          {
            if(!(*command == 0))
            {
              split_command(command, argv, 20);
              execvp(argv[(signed long int)0], argv);
              free((void *)command);
            }

          }

          close(1);
          exit(0);
          goto __CPROVER_DUMP_L13;
        }
        waitpid(pid, &MA_dearchive__1__2__1__1__1__status, 0);
        if(!((0x7f & MA_dearchive__1__2__1__1__1__status) == 0))
        {
          close(tmp_fd);
          return -1;
        }


      __CPROVER_DUMP_L13:
        ;
        break;
      }

    }
    if(tmp_fd >= 0)
    {
      lseek(tmp_fd, (signed long int)0, 0);
      if(!((config.archiver + (signed long int)t)->skippat == ((char *)NULL)))
        tmp_if_expr_4 = (config.archiver + (signed long int)t)->skippat[(signed long int)0] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_4 = (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = (config.archiver + (signed long int)t)->skipstart > 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = (config.archiver + (signed long int)t)->skipend > 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
      {
        char *f;
        t=MA_truncate(tmp_fd, (config.archiver + (signed long int)t)->skippat, (config.archiver + (signed long int)t)->skipstart, (config.archiver + (signed long int)t)->skipend, &f);
        close(tmp_fd);
        if(!(tmp_file == ((char *)NULL)))
        {
          unlink(tmp_file_sys);
          free((void *)tmp_file);
        }

        tmp_file = f;
        tmp_fd = t;
      }

    }

    if(!(extracted == ((char **)NULL)))
    {
      if(!(tmp_file == ((char *)NULL)))
        *extracted = tmp_file;

    }

    else
      if(!(tmp_file == ((char *)NULL)))
        free((void *)tmp_file);

    return tmp_fd;
  }
}

// MA_identify
// file ../../src/marchive.c line 196
static signed int MA_identify(const char *filename, signed int header_location, const char *header_string)
{
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(header_string);
  unsigned long int tmp_if_expr_3;
  unsigned long int return_value_strlen_2;
  if(!(return_value_strlen_1 >= 255ul))
  {
    return_value_strlen_2=strlen(header_string);
    tmp_if_expr_3 = return_value_strlen_2;
  }

  else
    tmp_if_expr_3 = (unsigned long int)255;
  len = (signed int)tmp_if_expr_3;
  if(len == 0)
    return 0;

  else
  {
    if(!(header_location >= 0))
    {
      signed int return_value_MA_MatchExtension_4;
      return_value_MA_MatchExtension_4=MA_MatchExtension(filename, header_string);
      return return_value_MA_MatchExtension_4;
    }

    else
    {
      struct _IO_FILE *MA_identify__1__2__fp;
      char id[256l];
      MA_identify__1__2__fp=fopen(filename, "rb");
      if(MA_identify__1__2__fp == ((struct _IO_FILE *)NULL))
        return 0;

      fseek(MA_identify__1__2__fp, (signed long int)header_location, 0);
      unsigned long int return_value_fread_5;
      return_value_fread_5=fread((void *)id, (unsigned long int)len, (unsigned long int)1, MA_identify__1__2__fp);
      if(return_value_fread_5 == 0ul)
      {
        fclose(MA_identify__1__2__fp);
        return 0;
      }

      signed int return_value_memcmp_6;
      return_value_memcmp_6=memcmp((const void *)id, (const void *)header_string, (unsigned long int)len);
      if(return_value_memcmp_6 == 0)
      {
        fclose(MA_identify__1__2__fp);
        return 1;
      }

      fclose(MA_identify__1__2__fp);
    }
    return 0;
  }
}

// MA_isModuleFilename
// file ../../src/marchive.c line 145
static signed int MA_isModuleFilename(const char *filename)
{
  signed int t = 0;
  signed int tmp_post_1;
  signed int return_value_fnmatch_2;
  while(!(modulepatterns[(signed long int)t] == ((const char *)NULL)))
  {
    tmp_post_1 = t;
    t = t + 1;
    return_value_fnmatch_2=fnmatch(modulepatterns[(signed long int)tmp_post_1], filename, 1 << 1);
    if(return_value_fnmatch_2 == 0)
      return 1;

  }
  return 0;
}

// MA_isModuleFilename2
// file ../../src/marchive.c line 156
static signed int MA_isModuleFilename2(const char *filename)
{
  signed int t = 0;
  signed int return_value_MA_isModuleFilename_3;
  return_value_MA_isModuleFilename_3=MA_isModuleFilename(filename);
  signed int tmp_post_1;
  signed int return_value_fnmatch_2;
  if(!(return_value_MA_isModuleFilename_3 == 0))
    return 1;

  else
    while(!(prefixmodulepatterns[(signed long int)t] == ((const char *)NULL)))
    {
      tmp_post_1 = t;
      t = t + 1;
      return_value_fnmatch_2=fnmatch(prefixmodulepatterns[(signed long int)tmp_post_1], filename, 1 << 1);
      if(return_value_fnmatch_2 == 0)
        return 1;

    }
  return 0;
}

// MA_truncate
// file ../../src/marchive.c line 367
static signed int MA_truncate(signed int fd, const char *startpat, signed int start, signed int end, char **file)
{
  char buf[5000l];
  const char *pos;
  signed int dest;
  signed int cnt = -1;
  signed long int size;
  char *fdest;
  if(!(file == ((char **)NULL)))
    *file = (char *)(void *)0;

  signed long int return_value_lseek_1;
  return_value_lseek_1=lseek(fd, (signed long int)0, 2);
  size = (signed long int)return_value_lseek_1;
  signed long int return_value_lseek_4;
  signed long int return_value_read_3;
  _Bool tmp_if_expr_6;
  signed long int return_value_read_5;
  if(!(size >= 0l))
    return -1;

  else
  {
    dest=get_tmp_file((const char *)(void *)0, &fdest);
    if(!(dest >= 0))
      return -1;

    else
    {
      signed int return_value_unlink_2;
      return_value_unlink_2=unlink(fdest);
      if(return_value_unlink_2 == 0)
      {
        free((void *)fdest);
        fdest = (char *)(void *)0;
      }

      if(end >= 1)
      {
        return_value_lseek_4=lseek(fd, size > (signed long int)5000 ? (signed long int)-5000 : -size, 2);
        if(return_value_lseek_4 == 0l)
        {
          return_value_read_3=read(fd, (void *)buf, sizeof(char) /*1ul*/  * (unsigned long int)5000);
          cnt = (signed int)return_value_read_3;
          if(cnt >= 1)
          {
            pos = (buf + (signed long int)cnt) - (signed long int)1;
            for( ; end >= 1; size = size - 1l)
            {
              if(!(pos >= buf))
                break;

              if((signed int)*pos == 10)
                end = end - 1;

              pos = pos - 1l;
            }
            if(pos >= buf)
            {
              if((signed int)*pos == 13)
                size = size - 1l;

            }

          }

        }

      }

      lseek(fd, (signed long int)0, 0);
      if(!(startpat == ((const char *)NULL)))
        tmp_if_expr_6 = *startpat != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      if(start >= 1 || tmp_if_expr_6)
      {
        return_value_read_5=read(fd, (void *)buf, sizeof(char) /*1ul*/  * (unsigned long int)(size > (signed long int)5000 ? (signed long int)5000 : size));
        cnt = (signed int)return_value_read_5;
        if(cnt >= 1)
        {
          pos = (const char *)(void *)0;
          if(!(startpat == ((const char *)NULL)))
          {
            if(!(*startpat == 0))
              pos=strstr(buf, startpat);

          }

          if(pos == ((const char *)NULL))
            pos = buf;

          for( ; start >= 1; pos = pos + 1l)
          {
            if(pos - buf >= (signed long int)cnt)
              break;

            if((signed int)*pos == 10)
              start = start - 1;

          }
          if(!(pos - buf >= (signed long int)cnt))
            write(dest, (const void *)pos, sizeof(char) /*1ul*/  * (unsigned long int)((signed long int)cnt - (pos - buf)));

          size = size - (signed long int)cnt;
        }

      }

      while(size >= 1l)
      {
        signed long int return_value_read_7;
        return_value_read_7=read(fd, (void *)buf, sizeof(char) /*1ul*/  * (unsigned long int)(size > (signed long int)5000 ? (signed long int)5000 : size));
        cnt = (signed int)return_value_read_7;
        write(dest, (const void *)buf, sizeof(char) /*1ul*/  * (unsigned long int)cnt);
        size = size - (signed long int)cnt;
      }
      if(!(file == ((char **)NULL)))
      {
        if(!(fdest == ((char *)NULL)))
          *file = fdest;

      }

      else
        if(!(fdest == ((char *)NULL)))
          free((void *)fdest);

      lseek(dest, (signed long int)0, 0);
      return dest;
    }
  }
}

// MP_Active
// file ../../src/mplayer.h line 62
signed int MP_Active(void)
{
  return (signed int)(active != 0);
}

// MP_End
// file ../../src/mplayer.h line 59
void MP_End(void)
{
  if((signed int)updater_mode == MTH_RUNNING)
  {
    updater_mode = (enum anonymous_21)MTH_QUITTING;
    pthread_join(_mm_thread_updater, (void **)(void *)0);
  }

  active = 0;
  paused = 1;
}

// MP_GetData
// file ../../src/mplayer.h line 48
void MP_GetData(struct anonymous_6 *data)
{
  pthread_mutex_lock(&_mm_mutex_data);
  *data = playdata_link1;
  pthread_mutex_unlock(&_mm_mutex_data);
}

// MP_Init
// file ../../src/mplayer.h line 52
signed int MP_Init(void)
{
  static signed int firstcall = 1;
  if(!(firstcall == 0))
  {
    firstcall = 0;
    use_threads = 1;
    signed int return_value_MikMod_InitThreads_1;
    return_value_MikMod_InitThreads_1=MikMod_InitThreads();
    if(return_value_MikMod_InitThreads_1 == 0)
      use_threads = 0;

  }

  return use_threads;
}

// MP_Paused
// file ../../src/mplayer.h line 66
signed int MP_Paused(void)
{
  return (signed int)(paused != 0);
}

// MP_Start
// file ../../src/mplayer.h line 55
void MP_Start(void)
{
  MP_Init();
  do_update();
  if(!(use_threads == 0))
  {
    updater_mode = (enum anonymous_21)MTH_RUNNING;
    signed int return_value_pthread_create_1;
    return_value_pthread_create_1=pthread_create(&_mm_thread_updater, (const union pthread_attr_t *)(void *)0, MP_updater, (void *)0);
    use_threads = (signed int)(return_value_pthread_create_1 == 0);
  }

}

// MP_TogglePause
// file ../../src/mplayer.h line 64
void MP_TogglePause(void)
{
  Player_TogglePause();
  paused=Player_Paused();
}

// MP_Update
// file ../../src/mplayer.h line 57
void MP_Update(void)
{
  if(use_threads == 0)
    do_update();

}

// MP_Volume
// file ../../src/mplayer.h line 68
void MP_Volume(signed int vol)
{
  pthread_mutex_lock(&_mm_mutex_data);
  volume = vol;
  pthread_mutex_unlock(&_mm_mutex_data);
}

// MP_updater
// file ../../src/mplayer.c line 101
static void * MP_updater(void *dummy)
{
  while((signed int)updater_mode == MTH_RUNNING && !(active == 0))
  {
    do_update();
    usleep((unsigned int)(5 * 1000));
  }
  updater_mode = (enum anonymous_21)MTH_NORUN;
  active = 0;
  paused = 1;
  return (void *)0;
}

// PL_Add
// file ../../src/mlist.h line 78
void PL_Add(struct anonymous *pl, const char *file, const char *arc, signed int time, signed int played)
{
  if(pl->add_pos >= 0)
  {
    PL_Insert(pl, pl->add_pos, file, arc, time, played);
    pl->add_pos = pl->add_pos + 1;
  }

  else
    PL_Insert(pl, pl->length, file, arc, time, played);
}

// PL_CheckPlaylist
// file ../../src/mlist.c line 426
static signed int PL_CheckPlaylist(struct anonymous *pl, signed int *ok, signed int old_current, signed int cont, char **retfile, char **retarc, signed int arg)
{
  if(!((pl->entry + (signed long int)pl->current)->file == ((char *)NULL)))
  {
    if((pl->entry + (signed long int)pl->current)->archive == ((char *)NULL))
    {
      pl->add_pos = pl->current + 1;
      signed int return_value_PL_Load_1;
      return_value_PL_Load_1=PL_Load(pl, (pl->entry + (signed long int)pl->current)->file);
      if(!(return_value_PL_Load_1 == 0))
      {
        pl->add_pos = -1;
        PL_DelEntry(pl, pl->current);
        pl->current = old_current;
        switch(cont)
        {
          case 1:
          {
            *ok=PL_ContNext(pl, retfile, retarc, arg);
            return 1;
          }
          case 2:
          {
            *ok=PL_ContPrev(pl, retfile, retarc);
            return 1;
          }
          case 3:
          {
            *ok=PL_ContPos(pl, retfile, retarc, arg);
            return 1;
          }
          default:
            ;
        }
      }

      pl->add_pos = -1;
    }

  }

  return 0;
}

// PL_ClearList
// file ../../src/mlist.c line 127
void PL_ClearList(struct anonymous *pl)
{
  signed int i = 0;
  for( ; !(i >= pl->length); i = i + 1)
  {
    if(!((pl->entry + (signed long int)i)->file == ((char *)NULL)))
      free((void *)(pl->entry + (signed long int)i)->file);

    if(!((pl->entry + (signed long int)i)->archive == ((char *)NULL)))
      free((void *)(pl->entry + (signed long int)i)->archive);

  }
  if(!(pl->entry == ((struct anonymous_0 *)NULL)))
  {
    free((void *)pl->entry);
    pl->entry = (struct anonymous_0 *)(void *)0;
  }

  pl->current = -1;
  pl->curr_deleted = 0;
  pl->length = 0;
}

// PL_ClearPlayed
// file ../../src/mlist.c line 63
static void PL_ClearPlayed(struct anonymous *pl)
{
  signed int i = 0;
  for( ; !(i >= pl->length); i = i + 1)
    (pl->entry + (signed long int)i)->played = 0;
}

// PL_ContNext
// file ../../src/mlist.h line 89
signed int PL_ContNext(struct anonymous *pl, char **retfile, char **retarc, signed int mode)
{
  signed int num;
  signed int i;
  signed int not_played;
  signed int old_current = pl->current;
  signed int ok = 1;
  pl->curr_deleted = 0;
  if(pl->length == 0)
    return 0;

  else
  {
    if(!((8 & mode) == 0))
    {
      not_played = 0;
      i = 0;
      for( ; !(i >= pl->length); i = i + 1)
        if((pl->entry + (signed long int)i)->played == 0)
          not_played = not_played + 1;

      if(not_played == 0)
      {
        PL_ClearPlayed(pl);
        not_played = pl->length;
        if(!((4 & mode) == 0))
          PL_Randomize(pl);

        if((2 & mode) == 0)
          return 0;

      }

      signed int return_value_mikmod_random_1;
      return_value_mikmod_random_1=mikmod_random(not_played);
      num = return_value_mikmod_random_1 + 1;
      while(num >= 1)
      {
        pl->current = pl->current + 1;
        if(pl->current == pl->length)
          pl->current = 0;

        if((pl->entry + (signed long int)pl->current)->played == 0)
          num = num - 1;

      }
    }

    else
    {
      pl->current = pl->current + 1;
      if(pl->current >= pl->length)
      {
        not_played = 0;
        i = 0;
        for( ; !(i >= pl->length); i = i + 1)
          if((pl->entry + (signed long int)i)->played == 0)
            not_played = not_played + 1;

        if(not_played == 0)
        {
          PL_ClearPlayed(pl);
          if(!((4 & mode) == 0))
            PL_Randomize(pl);

        }

        pl->current = 0;
        if((2 & mode) == 0)
          return 0;

      }

    }
    signed int return_value_PL_CheckPlaylist_2;
    return_value_PL_CheckPlaylist_2=PL_CheckPlaylist(pl, &ok, old_current, 1, retfile, retarc, mode);
    if(!(return_value_PL_CheckPlaylist_2 == 0))
      return ok;

    else
    {
      if(!(retfile == ((char **)NULL)))
        *retfile = (pl->entry + (signed long int)pl->current)->file;

      if(!(retarc == ((char **)NULL)))
        *retarc = (pl->entry + (signed long int)pl->current)->archive;

      return 1;
    }
  }
}

// PL_ContPos
// file ../../src/mlist.h line 91
signed int PL_ContPos(struct anonymous *pl, char **retfile, char **retarc, signed int number)
{
  signed int old_current = pl->current;
  signed int ok = 1;
  pl->curr_deleted = 0;
  _Bool tmp_if_expr_1;
  if(!(number >= 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = number >= pl->length ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return 0;

  else
  {
    pl->current = number;
    signed int return_value_PL_CheckPlaylist_2;
    return_value_PL_CheckPlaylist_2=PL_CheckPlaylist(pl, &ok, old_current, 3, retfile, retarc, number);
    if(!(return_value_PL_CheckPlaylist_2 == 0))
      return ok;

    else
    {
      if(!(retfile == ((char **)NULL)))
        *retfile = (pl->entry + (signed long int)pl->current)->file;

      if(!(retarc == ((char **)NULL)))
        *retarc = (pl->entry + (signed long int)pl->current)->archive;

      return 1;
    }
  }
}

// PL_ContPrev
// file ../../src/mlist.h line 90
signed int PL_ContPrev(struct anonymous *pl, char **retfile, char **retarc)
{
  signed int old_current = pl->current;
  signed int ok = 1;
  pl->curr_deleted = 0;
  if(pl->length == 0)
    return 0;

  else
  {
    pl->current = pl->current - 1;
    if(!(pl->current >= 0))
      pl->current = pl->length - 1;

    signed int return_value_PL_CheckPlaylist_1;
    return_value_PL_CheckPlaylist_1=PL_CheckPlaylist(pl, &ok, old_current, 2, retfile, retarc, 0);
    if(!(return_value_PL_CheckPlaylist_1 == 0))
      return ok;

    else
    {
      if(!(retfile == ((char **)NULL)))
        *retfile = (pl->entry + (signed long int)pl->current)->file;

      if(!(retarc == ((char **)NULL)))
        *retarc = (pl->entry + (signed long int)pl->current)->archive;

      return 1;
    }
  }
}

// PL_CurrentDeleted
// file ../../src/mlist.h line 67
signed int PL_CurrentDeleted(struct anonymous *pl)
{
  return pl->curr_deleted;
}

// PL_DelDouble
// file ../../src/mlist.h line 77
signed int PL_DelDouble(struct anonymous *pl)
{
  signed int i;
  signed int j;
  signed int return_value_strcmp_6;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  if(pl->length == 0)
    return 0;

  else
  {
    i = pl->length - 2;
    for( ; i >= 0; i = i - 1)
    {
      j = i + 1;
      for( ; !(j >= pl->length); j = j + 1)
      {
        return_value_strcmp_6=strcmp((pl->entry + (signed long int)i)->file, (pl->entry + (signed long int)j)->file);
        if(return_value_strcmp_6 == 0)
        {
          if(!((pl->entry + (signed long int)i)->archive == ((char *)NULL)))
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = (pl->entry + (signed long int)j)->archive != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_1)
            tmp_if_expr_5 = (_Bool)1;

          else
          {
            if(!((pl->entry + (signed long int)i)->archive == ((char *)NULL)))
              tmp_if_expr_2 = (pl->entry + (signed long int)j)->archive != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_2 = (_Bool)0;
            if(tmp_if_expr_2)
            {
              return_value_strcmp_3=strcmp((pl->entry + (signed long int)i)->archive, (pl->entry + (signed long int)j)->archive);
              tmp_if_expr_4 = !(return_value_strcmp_3 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_4 = (_Bool)0;
            tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_5)
          {
            if((pl->entry + (signed long int)i)->time == 0)
              (pl->entry + (signed long int)i)->time = (pl->entry + (signed long int)j)->time;

            if((pl->entry + (signed long int)i)->played == 0)
              (pl->entry + (signed long int)i)->played = (pl->entry + (signed long int)j)->played;

            PL_DelEntry(pl, j);
          }

        }

      }
    }
    return 1;
  }
}

// PL_DelEntry
// file ../../src/mlist.h line 76
signed int PL_DelEntry(struct anonymous *pl, signed int number)
{
  signed int i;
  if(pl->length == 0)
    return 0;

  else
  {
    if(!((pl->entry + (signed long int)number)->file == ((char *)NULL)))
      free((void *)(pl->entry + (signed long int)number)->file);

    if(!((pl->entry + (signed long int)number)->archive == ((char *)NULL)))
      free((void *)(pl->entry + (signed long int)number)->archive);

    pl->length = pl->length - 1;
    if(pl->current >= number)
    {
      if(number == pl->current)
        pl->curr_deleted = 1;

      pl->current = pl->current - 1;
    }

    i = number;
    for( ; !(i >= pl->length); i = i + 1)
      pl->entry[(signed long int)i] = pl->entry[(signed long int)(i + 1)];
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)pl->entry, (unsigned long int)pl->length * sizeof(struct anonymous_0) /*24ul*/ );
    pl->entry = (struct anonymous_0 *)return_value_realloc_1;
    return 1;
  }
}

// PL_GetCurrent
// file ../../src/mlist.h line 70
struct anonymous_0 * PL_GetCurrent(struct anonymous *pl)
{
  _Bool tmp_if_expr_1;
  if(!(pl->current >= 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(pl->length != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (struct anonymous_0 *)(void *)0;

  else
    return &pl->entry[(signed long int)pl->current];
}

// PL_GetCurrentPos
// file ../../src/mlist.h line 69
signed int PL_GetCurrentPos(struct anonymous *pl)
{
  _Bool tmp_if_expr_1;
  if(!(pl->current >= 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(pl->length != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return -1;

  else
    return pl->current;
}

// PL_GetEntry
// file ../../src/mlist.h line 71
struct anonymous_0 * PL_GetEntry(struct anonymous *pl, signed int number)
{
  _Bool tmp_if_expr_1;
  if(!(number >= 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = number >= pl->length ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (struct anonymous_0 *)(void *)0;

  else
    return &pl->entry[(signed long int)number];
}

// PL_GetFilename
// file ../../src/mlist.c line 389
char * PL_GetFilename(void)
{
  char *return_value_get_cfg_name_1;
  return_value_get_cfg_name_1=get_cfg_name(".mikmod_playlist");
  return return_value_get_cfg_name_1;
}

// PL_GetLength
// file ../../src/mlist.h line 72
signed int PL_GetLength(struct anonymous *pl)
{
  return pl->length;
}

// PL_InitCurrent
// file ../../src/mlist.h line 64
void PL_InitCurrent(struct anonymous *pl)
{
  pl->current = 0;
  for( ; !(pl->current >= pl->length); pl->current = pl->current + 1)
    if((pl->entry + (signed long int)pl->current)->played == 0)
      break;

  if(pl->current >= pl->length)
  {
    PL_ClearPlayed(pl);
    pl->current = 0;
  }

  pl->current = pl->current - 1;
}

// PL_InitList
// file ../../src/mlist.h line 63
void PL_InitList(struct anonymous *pl)
{
  pl->entry = (struct anonymous_0 *)(void *)0;
  pl->length = 0;
  pl->current = -1;
  pl->curr_deleted = 0;
  pl->add_pos = -1;
  const char *s;
  s=getenv("MIKMOD_SRAND_CONSTANT");
  if(!(s == ((const char *)NULL)))
  {
    signed int return_value_atoi_1;
    return_value_atoi_1=atoi(s);
    srandom((unsigned int)return_value_atoi_1);
  }

  else
  {
    signed long int return_value_time_2;
    return_value_time_2=time((signed long int *)(void *)0);
    srandom((unsigned int)return_value_time_2);
  }
}

// PL_Insert
// file ../../src/mlist.c line 251
static void PL_Insert(struct anonymous *pl, signed int pos, const char *file, const char *arc, signed int time, signed int played)
{
  signed int i;
  pl->length = pl->length + 1;
  void *return_value_realloc_1;
  return_value_realloc_1=realloc((void *)pl->entry, (unsigned long int)pl->length * sizeof(struct anonymous_0) /*24ul*/ );
  pl->entry = (struct anonymous_0 *)return_value_realloc_1;
  i = pl->length - 1;
  for( ; !(pos >= i); i = i - 1)
    pl->entry[(signed long int)i] = pl->entry[(signed long int)(i - 1)];
  if(pl->current >= pos)
    pl->current = pl->current + 1;

  (pl->entry + (signed long int)pos)->file=strdup(file);
  if(!(arc == ((const char *)NULL)))
    (pl->entry + (signed long int)pos)->archive=strdup(arc);

  else
    (pl->entry + (signed long int)pos)->archive = (char *)(void *)0;
  (pl->entry + (signed long int)pos)->time = time;
  (pl->entry + (signed long int)pos)->played = played;
}

// PL_Load
// file ../../src/mlist.h line 82
signed int PL_Load(struct anonymous *pl, const char *filename)
{
  struct _IO_FILE *file;
  char line[8212l];
  char *mod;
  char *arc;
  char *pos;
  char *slash;
  signed int PL_Load__1__time;
  signed int played;
  char *ok = (char *)(void *)0;
  file=fopen(filename, "r");
  signed int return_value_strcasecmp_1;
  char *return_value_fgets_2;
  _Bool tmp_if_expr_6;
  signed int return_value_path_relative_5;
  if(file == ((struct _IO_FILE *)NULL))
    return 0;

  else
  {
    do
    {
      ok=fgets(line, 4096 * 2 + 20, file);
      if(ok == ((char *)NULL))
        break;

      return_value_strcasecmp_1=strcasecmp(line, "MikMod playlist\n");
      if(return_value_strcasecmp_1 == 0)
        break;

    }
    while((_Bool)1);
    if(ok == ((char *)NULL))
    {
      fclose(file);
      return 0;
    }

    else
    {
      slash=strrchr(filename, 47);
      do
      {
        return_value_fgets_2=fgets(line, 4096 * 2 + 20, file);
        if(return_value_fgets_2 == ((char *)NULL))
          break;

        if((signed int)line[0l] == 34)
        {
          mod = line + (signed long int)1;
          pos = mod;
          for( ; !((signed int)*pos == 34); pos = pos + 1l)
            if(*pos == 0)
              break;

          if(!(pos == mod) && (signed int)*pos == 34)
          {
            *pos = (char)0;
            pos = pos + 1l;
            for( ; !((signed int)*pos == 34); pos = pos + 1l)
              if(*pos == 0)
                break;

            if((signed int)*pos == 34)
              pos = pos + 1l;

            arc = pos;
            for( ; !((signed int)*pos == 34); pos = pos + 1l)
              if(*pos == 0)
                break;

            played = 0;
            PL_Load__1__time = played;
            if(!(*pos == 0))
            {
              *pos = (char)0;
              if(arc == pos)
                arc = (char *)(void *)0;

              pos = pos + (signed long int)2;
              sscanf(pos, "%d %d", &PL_Load__1__time, &played);
            }

            else
              arc = (char *)(void *)0;
            if(arc == ((char *)NULL) && played == 0 && PL_Load__1__time == 0)
              MA_FindFiles(pl, mod);

            else
            {
              if(!(slash == ((char *)NULL)))
              {
                return_value_path_relative_5=path_relative(arc != ((char *)NULL) ? arc : mod);
                tmp_if_expr_6 = return_value_path_relative_5 != 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_6 = (_Bool)0;
              if(tmp_if_expr_6)
              {
                char *dummy;
                unsigned long int return_value_strlen_3;
                return_value_strlen_3=strlen(arc != ((char *)NULL) ? arc : mod);
                void *return_value_malloc_4;
                return_value_malloc_4=malloc((unsigned long int)((slash + (signed long int)1) - filename) + return_value_strlen_3 + (unsigned long int)1);
                dummy = (char *)return_value_malloc_4;
                strncpy(dummy, filename, (unsigned long int)((slash + (signed long int)1) - filename));
                dummy[(slash + (signed long int)1) - filename] = (char)0;
                strcat(dummy, arc != ((char *)NULL) ? arc : mod);
                PL_Add(pl, arc != ((char *)NULL) ? mod : dummy, arc != ((char *)NULL) ? dummy : (char *)(void *)0, PL_Load__1__time, (signed int)played);
              }

              else
                PL_Add(pl, mod, arc, PL_Load__1__time, (signed int)played);
            }
          }

        }

      }
      while((_Bool)1);
      fclose(file);
      return 1;
    }
  }
}

// PL_LoadDefault
// file ../../src/mlist.h line 85
signed int PL_LoadDefault(struct anonymous *pl)
{
  char *name;
  name=PL_GetFilename();
  signed int ret = 0;
  if(!(name == ((char *)NULL)))
  {
    ret=PL_Load(pl, name);
    free((void *)name);
  }

  return ret;
}

// PL_Randomize
// file ../../src/mlist.h line 95
void PL_Randomize(struct anonymous *pl)
{
  if(pl->length >= 2)
  {
    signed int i;
    signed int target;
    i = 0;
    for( ; !(i >= pl->length + -1); i = i + 1)
    {
      signed int return_value_mikmod_random_1;
      return_value_mikmod_random_1=mikmod_random(pl->length - i);
      target = return_value_mikmod_random_1 + i;
      if(!(target == i))
      {
        struct anonymous_0 temp = pl->entry[(signed long int)i];
        pl->entry[(signed long int)i] = pl->entry[(signed long int)target];
        pl->entry[(signed long int)target] = temp;
        if(pl->current == i)
          pl->current = target;

        else
          if(pl->current == target)
            pl->current = i;

      }

    }
  }

}

// PL_Save
// file ../../src/mlist.c line 362
signed int PL_Save(struct anonymous *pl, const char *filename)
{
  struct _IO_FILE *file;
  signed int i;
  struct anonymous_0 *entry;
  file=fopen(filename, "w");
  if(file == ((struct _IO_FILE *)NULL))
    return 0;

  else
  {
    signed int return_value_fputs_1;
    return_value_fputs_1=fputs("MikMod playlist\n", file);
    if(!(return_value_fputs_1 == -1))
    {
      i = 0;
      for( ; !(i >= pl->length); i = i + 1)
      {
        entry = &pl->entry[(signed long int)i];
        if(!(entry->archive == ((char *)NULL)))
          fprintf(file, "\"%s\" \"%s\" %d %d\n", entry->file, entry->archive, entry->time, (signed int)entry->played);

        else
          fprintf(file, "\"%s\" \"\" %d %d\n", entry->file, entry->time, (signed int)entry->played);
      }
      fclose(file);
      return 1;
    }

    else
    {
      fclose(file);
      return 0;
    }
  }
}

// PL_SaveDefault
// file ../../src/mlist.h line 86
signed int PL_SaveDefault(struct anonymous *pl)
{
  char *name;
  name=PL_GetFilename();
  signed int ret = 0;
  if(!(name == ((char *)NULL)))
  {
    ret=PL_Save(pl, name);
    free((void *)name);
  }

  return ret;
}

// PL_SetPlayedCurrent
// file ../../src/mlist.h line 74
void PL_SetPlayedCurrent(struct anonymous *pl)
{
  if(pl->curr_deleted == 0)
  {
    if(pl->current >= 0)
    {
      if(!(pl->current >= pl->length))
        (pl->entry + (signed long int)pl->current)->played = 1;

    }

  }

}

// PL_SetTimeCurrent
// file ../../src/mlist.h line 73
void PL_SetTimeCurrent(struct anonymous *pl, signed long int sngtime)
{
  if(pl->curr_deleted == 0)
  {
    if(pl->current >= 0)
    {
      if(!(pl->current >= pl->length))
        (pl->entry + (signed long int)pl->current)->time = (signed int)(sngtime >> 10);

    }

  }

}

// PL_Sort
// file ../../src/mlist.c line 571
void PL_Sort(struct anonymous *pl, signed int (*compar)(struct anonymous_0 *, struct anonymous_0 *))
{
  signed int i;
  signed int j;
  signed int end = 0;
  struct anonymous_0 tmp;
  i = 0;
  signed int return_value;
  for( ; end == 0 && !(i >= pl->length); i = i + 1)
  {
    end = 1;
    j = pl->length - 1;
    if(!(i >= j))
    {
      return_value=compar(&pl->entry[(signed long int)(j - 1)], &pl->entry[(signed long int)j]);
      if(return_value >= 1)
      {
        tmp = pl->entry[(signed long int)j];
        pl->entry[(signed long int)j] = pl->entry[(signed long int)(j - 1)];
        pl->entry[(signed long int)(j - 1)] = tmp;
        if(pl->current == j)
          pl->current = j - 1;

        else
          if(pl->current == j + -1)
            pl->current = j;

        end = 0;
      }

      j = j - 1;
    }

  }
}

// PL_StartInsert
// file ../../src/mlist.c line 240
void PL_StartInsert(struct anonymous *pl, signed int pos)
{
  pl->add_pos = pos;
}

// PL_StopInsert
// file ../../src/mlist.c line 246
void PL_StopInsert(struct anonymous *pl)
{
  pl->add_pos = -1;
}

// PL_isPlaylistFilename
// file ../../src/mlist.h line 62
signed int PL_isPlaylistFilename(const char *filename)
{
  char *cfg_name = (char *)(void *)0;
  signed int return_value_fnmatch_1;
  return_value_fnmatch_1=fnmatch("*.mpl", filename, 0);
  if(return_value_fnmatch_1 == 0)
    return 1;

  else
  {
    cfg_name=PL_GetFilename();
    if(!(cfg_name == ((char *)NULL)))
    {
      const char *p1;
      p1=strrchr(cfg_name, 47);
      const char *p2;
      p2=strrchr(filename, 47);
      if(p1 == ((const char *)NULL))
        p1 = cfg_name;

      if(p2 == ((const char *)NULL))
        p2 = filename;

      signed int return_value_strcmp_2;
      return_value_strcmp_2=strcmp(p1, p2);
      if(return_value_strcmp_2 == 0)
      {
        free((void *)cfg_name);
        return 1;
      }

      free((void *)cfg_name);
    }

    return 0;
  }
}

// Player_InitLib
// file ../../src/mikmod.c line 310
static void Player_InitLib(void)
{
  signed long int engineversion;
  engineversion=MikMod_GetVersion();
  if(!(engineversion >= 197384l))
    exit_player(2, "The current engine version (%ld.%ld.%ld) is too old.\nThis programs requires at least version %ld.%ld.%ld\n", engineversion >> 16 & (signed long int)255, engineversion >> 8 & (signed long int)255, engineversion & (signed long int)255, 3L, 3L, 8L);

  MikMod_RegisterAllLoaders();
  MikMod_RegisterAllDrivers();
}

// Player_SetConfig
// file ../../src/mikmod.c line 387
void Player_SetConfig(struct anonymous_3 *cfg)
{
  signed int restart;
  signed int return_value_MP_Active_1;
  return_value_MP_Active_1=MP_Active();
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_5;
  signed int return_value_cmp_bit_4;
  _Bool tmp_if_expr_7;
  signed int return_value_cmp_bit_6;
  _Bool tmp_if_expr_9;
  signed int return_value_cmp_bit_8;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_12;
  signed int return_value_strcmp_11;
  static char *Player_SetConfig__1__driveroptions = (char *)(void *)0;
  if(!(return_value_MP_Active_1 == 0))
  {
    if(!(cfg->frequency == (signed int)md_mixfreq))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(!(cfg->driver == 0))
        tmp_if_expr_2 = cfg->driver != (signed int)md_device ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_cmp_bit_4=cmp_bit((signed int)md_mode, 0x0001, cfg->mode_16bit);
      tmp_if_expr_5 = !(return_value_cmp_bit_4 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value_cmp_bit_6=cmp_bit((signed int)md_mode, 0x0002, cfg->stereo);
      tmp_if_expr_7 = !(return_value_cmp_bit_6 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
      tmp_if_expr_9 = (_Bool)1;

    else
    {
      return_value_cmp_bit_8=cmp_bit((signed int)md_mode, 0x0010, cfg->hqmixer);
      tmp_if_expr_9 = !(return_value_cmp_bit_8 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_9)
      tmp_if_expr_14 = (_Bool)1;

    else
    {
      if(Player_SetConfig__1__driveroptions == ((char *)NULL))
        tmp_if_expr_10 = cfg->driveroptions != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_10 = (_Bool)0;
      if(tmp_if_expr_10)
        tmp_if_expr_13 = (_Bool)1;

      else
      {
        if(!(Player_SetConfig__1__driveroptions == ((char *)NULL)))
        {
          return_value_strcmp_11=strcmp(Player_SetConfig__1__driveroptions, cfg->driveroptions);
          tmp_if_expr_12 = return_value_strcmp_11 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_12 = (_Bool)0;
        tmp_if_expr_13 = tmp_if_expr_12 ? (_Bool)1 : (_Bool)0;
      }
      tmp_if_expr_14 = tmp_if_expr_13 ? (_Bool)1 : (_Bool)0;
    }
    tmp_if_expr_15 = tmp_if_expr_14 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_15 = (_Bool)0;
  restart = (signed int)tmp_if_expr_15;
  enum anonymous_30 oldstate = status.state;
  if(!((signed int)status.state >= 3))
    status.state = (enum anonymous_30)STATE_READY;

  if(!(Player_SetConfig__1__driveroptions == ((char *)NULL)))
    free((void *)Player_SetConfig__1__driveroptions);

  Player_SetConfig__1__driveroptions=strdup(cfg->driveroptions);
  md_pansep = (unsigned char)128;
  md_volume = (unsigned char)((cfg->volume * 128) / 100);
  md_reverb = (unsigned char)cfg->reverb;
  md_device = (unsigned short int)cfg->driver;
  md_mixfreq = (unsigned short int)cfg->frequency;
  md_mode = md_mode | (unsigned short int)0x0008;
  set_bit(&md_mode, 0x0200, cfg->interpolate);
  set_bit(&md_mode, 0x0010, cfg->hqmixer);
  set_bit(&md_mode, 0x0100, cfg->surround);
  set_bit(&md_mode, 0x0001, cfg->mode_16bit);
  set_bit(&md_mode, 0x0002, cfg->stereo);
  signed int return_value_win_has_colors_16;
  return_value_win_has_colors_16=win_has_colors();
  if(return_value_win_has_colors_16 == 0)
  {
    if(!((cfg->themes + (signed long int)cfg->theme)->color == 0))
      cfg->theme = 1;

  }

  win_set_theme(&cfg->themes[(signed long int)cfg->theme]);
  if((signed int)oldstate == STATE_ERROR || !(restart == 0))
  {
    signed int cur;
    cur=PL_GetCurrentPos(&playlist);
    signed int pos = 0;
    if(cur >= 0)
    {
      if(!(mf == ((struct MODULE *)NULL)))
        pos = (signed int)mf->sngpos;

      Player_SetNextModPos(cur, pos);
    }

    if(!(mf == ((struct MODULE *)NULL)))
      MP_End();

    signed int return_value_MikMod_Reset_17;
    return_value_MikMod_Reset_17=MikMod_Reset(cfg->driveroptions);
    if(!(return_value_MikMod_Reset_17 == 0))
      config_error("MikMod reset error", (enum anonymous_30)STATE_ERROR);

    cfg->frequency = (signed int)md_mixfreq;
  }

  else
    win_panel_repaint();
  win_init_status(cfg->statusbar);
  if(!(mf == ((struct MODULE *)NULL)))
    mf->wrap = ((config.playmode & 1) != 0 ? 1 : 0) != 0 ? 1 : 0;

  signed int return_value_MikMod_Init_18;
  if((signed int)oldstate == STATE_INIT || (signed int)oldstate == STATE_INIT_ERROR)
  {
    return_value_MikMod_Init_18=MikMod_Init(config.driveroptions);
    if(!(return_value_MikMod_Init_18 == 0))
      config_error("MikMod initialisation error", (enum anonymous_30)STATE_INIT_ERROR);

  }

}

// Player_SetNextMod
// file ../../src/mikmod.c line 305
void Player_SetNextMod(signed int pos)
{
  Player_SetNextModPos(pos, 0);
}

// Player_SetNextModPos
// file ../../src/mikmod.c line 298
static void Player_SetNextModPos(signed int pos, signed int sng_pos)
{
  next_pl_pos = pos;
  next_sng_pos = sng_pos;
  next = 3;
}

// Time1000
// file ../../src/mutilities.h line 199
unsigned long int Time1000(void)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  return (unsigned long int)(tv.tv_sec * (signed long int)1000 + tv.tv_usec / (signed long int)1000);
}

// base_attr
// file ../../src/mwidget.c line 54
static enum anonymous_7 base_attr(struct anonymous_17 *d, enum anonymous_7 attrs)
{
  if((signed int)d->attrs >= 0)
    return d->attrs;

  else
    return attrs;
}

// button_free
// file ../../src/mwidget.c line 309
static void button_free(struct anonymous_13 *w)
{
  free((void *)w->button);
  free((void *)w);
}

// button_get_size
// file ../../src/mwidget.c line 441
static void button_get_size(struct anonymous_13 *w, signed int *width, signed int *height)
{
  char *pos;
  signed int hl_cnt = 0;
  w->cnt = 1;
  pos = w->button;
  for( ; !(*pos == 0); pos = pos + 1l)
  {
    if((signed int)*pos == 38)
      hl_cnt = hl_cnt + 1;

    if((signed int)*pos == 124)
      w->cnt = w->cnt + 1;

  }
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(w->button);
  *width = (signed int)(((return_value_strlen_1 + (unsigned long int)(5 * w->cnt)) - (unsigned long int)1) - (unsigned long int)hl_cnt);
  *height = 1;
}

// button_handle_event
// file ../../src/mwidget.c line 381
static signed int button_handle_event(struct anonymous_13 *w, enum anonymous_18 event, signed int ch)
{
  signed int cur;
  char *pos;
  const unsigned short int **return_value___ctype_b_loc_1;
  signed int return_value_handle_focus_2;
  signed int return_value_handle_focus_3;
  signed int return_value_handle_focus_4;
  signed int return_value_toupper_6;
  if((signed int)event == WID_GET_FOCUS)
  {
    if(!(ch >= 0))
      w->active = w->cnt - 1;

    else
      w->active = 0;
    return 100;
  }

  else
    if((signed int)event == WID_KEY)
    {
      if(w->w.handle_key == ((signed int (*)(struct WIDGET *, signed int))NULL))
        goto __CPROVER_DUMP_L4;

      cur=w->w.handle_key((struct WIDGET *)w, ch);
      return cur;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      if(!(ch >= 256))
      {
        return_value___ctype_b_loc_1=__ctype_b_loc();
        if(!((1024 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)ch]) == 0))
          ch=toupper(ch);

      }

      switch(ch)
      {
        case 0403:

        case 0404:
        {
          if((signed int)event == WID_KEY)
          {
            w->active = w->active - 1;
            if(!(w->active >= 0))
            {
              return_value_handle_focus_2=handle_focus((struct WIDGET *)w, -1, 0);
              return return_value_handle_focus_2;
            }

            button_paint(w);
          }

          break;
        }
        case 0402:

        case 0405:

        case 9:
        {
          if((signed int)event == WID_KEY)
          {
            w->active = w->active + 1;
            if(w->active >= w->cnt)
            {
              return_value_handle_focus_3=handle_focus((struct WIDGET *)w, 1, 0);
              return return_value_handle_focus_3;
            }

            button_paint(w);
          }

          break;
        }
        case 0527:

        case 13:
        {
          if((signed int)event == WID_KEY)
          {
            return_value_handle_focus_4=handle_focus((struct WIDGET *)w, 100 + 1, 100);
            return return_value_handle_focus_4;
          }

          break;
        }
        default:
        {
          cur = 0;
          pos = w->button;
          for( ; !(*pos == 0); pos = pos + 1l)
          {
            if((signed int)*pos == 124)
              cur = cur + 1;

            if((signed int)*pos == 38)
            {
              return_value_toupper_6=toupper((signed int)pos[(signed long int)1]);
              if(return_value_toupper_6 == ch)
              {
                w->active = cur;
                button_paint(w);
                signed int return_value_handle_focus_5;
                return_value_handle_focus_5=handle_focus((struct WIDGET *)w, 100 + 1, 100);
                return return_value_handle_focus_5;
              }

            }

          }
          return 0;
        }
      }
      return 100;
    }
}

// button_paint
// file ../../src/mwidget.c line 315
static void button_paint(struct anonymous_13 *w)
{
  signed int cur;
  signed int x;
  signed int cnt_hl = 0;
  char *pos;
  char *hl_pos;
  char *start;
  char hl[2l];
  signed int end;
  pos = w->button;
  for( ; !(*pos == 0); pos = pos + 1l)
    if((signed int)*pos == 38)
      cnt_hl = cnt_hl + 1;

  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(w->button);
  x = (((w->w.d->win->width - 1) - w->w.x) - ((((signed int)return_value_strlen_1 + 5 * w->cnt) - 1) - cnt_hl)) / 2;
  cur = 0;
  hl_pos = (char *)(void *)0;
  hl[(signed long int)1] = (char)0;
  start = w->button;
  end = 0;
  pos = w->button;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_8;
  for( ; end == 0; pos = pos + 1l)
  {
    end = (signed int)!(*pos != 0);
    if((signed int)*pos == 124)
      tmp_if_expr_9 = (_Bool)1;

    else
      tmp_if_expr_9 = (signed int)*pos == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_9)
    {
      *pos = (char)0;
      if(!(w->active == cur))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = !(w->w.has_focus != 0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        win_attrset((enum anonymous_7)ATTR_DLG_BUT_INACTIVE);

      else
        win_attrset((enum anonymous_7)ATTR_DLG_BUT_ACTIVE);
      win_print(w->w.d->win, w->w.x + x, w->w.y, "[ ");
      if(!(w->active == cur))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = !(w->w.has_focus != 0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        win_attrset((enum anonymous_7)ATTR_DLG_BUT_ITEXT);

      else
        win_attrset((enum anonymous_7)ATTR_DLG_BUT_ATEXT);
      win_print(w->w.d->win, w->w.x + x + 2, w->w.y, start);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(start);
      x = x + (signed int)(return_value_strlen_4 + (unsigned long int)2);
      if(!(hl_pos == ((char *)NULL)))
      {
        if(!(w->active == cur))
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = !(w->w.has_focus != 0) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
          win_attrset((enum anonymous_7)ATTR_DLG_BUT_IHOTKEY);

        else
          win_attrset((enum anonymous_7)ATTR_DLG_BUT_AHOTKEY);
        win_print(w->w.d->win, w->w.x + x, w->w.y, hl);
        if(!(w->active == cur))
          tmp_if_expr_6 = (_Bool)1;

        else
          tmp_if_expr_6 = !(w->w.has_focus != 0) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_6)
          win_attrset((enum anonymous_7)ATTR_DLG_BUT_ITEXT);

        else
          win_attrset((enum anonymous_7)ATTR_DLG_BUT_ATEXT);
        win_print(w->w.d->win, w->w.x + x + 1, w->w.y, hl_pos);
        *(hl_pos - (signed long int)2) = (char)38;
        unsigned long int return_value_strlen_7;
        return_value_strlen_7=strlen(hl_pos);
        x = x + (signed int)(return_value_strlen_7 + (unsigned long int)1);
        hl_pos = (char *)(void *)0;
      }

      if(!(w->active == cur))
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = !(w->w.has_focus != 0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_8)
        win_attrset((enum anonymous_7)ATTR_DLG_BUT_INACTIVE);

      else
        win_attrset((enum anonymous_7)ATTR_DLG_BUT_ACTIVE);
      win_print(w->w.d->win, w->w.x + x, w->w.y, " ]");
      x = x + 4;
      *pos = (char)124;
      start = pos + (signed long int)1;
      cur = cur + 1;
    }

    if((signed int)*pos == 38)
    {
      *pos = (char)0;
      pos = pos + 1l;
      hl_pos = pos + (signed long int)1;
      hl[(signed long int)0] = *pos;
    }

  }
  *(pos - (signed long int)1) = (char)0;
}

// cb_browse
// file ../../src/mlistedit.c line 1094
static signed int cb_browse(signed int button, char *file, void *data)
{
  if(button == 0)
  {
    wid_str_set_input((struct anonymous_12 *)data, file, -1);
    wid_repaint((struct WIDGET *)data);
  }

  return 1;
}

// cb_cmp_sort
// file ../../src/mlistedit.c line 1027
static signed int cb_cmp_sort(struct anonymous_0 *small, struct anonymous_0 *big)
{
  char ch_s = (char)32;
  char ch_b = (char)32;
  char *ext_s;
  char *ext_b;
  char *name_s;
  char *name_b;
  signed int ret = 0;
  signed int tmp_if_expr_1;
  switch((signed int)sort_mode)
  {
    case SORT_NAME:
    {
      split_name(small->file, &name_s, &ext_s);
      split_name(big->file, &name_b, &ext_b);
      ch_s = *ext_s;
      ch_b = *ext_b;
      *ext_s = (char)0;
      *ext_b = (char)0;
      ret=strcasecmp(name_s, name_b);
      *ext_s = ch_s;
      *ext_b = ch_b;
      break;
    }
    case SORT_EXT:
    {
      split_name(small->file, &name_s, &ext_s);
      split_name(big->file, &name_b, &ext_b);
      ret=strcasecmp(ext_s, ext_b);
      break;
    }
    case SORT_PATH:
    {
      ext_s = small->archive;
      if(ext_s == ((char *)NULL))
        ext_s = small->file;

      name_s=strrchr(ext_s, 47);
      if(!(name_s == ((char *)NULL)))
      {
        ch_s = *name_s;
        *name_s = (char)0;
      }

      ext_b = big->archive;
      if(ext_b == ((char *)NULL))
        ext_b = big->file;

      name_b=strrchr(ext_b, 47);
      if(!(name_b == ((char *)NULL)))
      {
        ch_b = *name_b;
        *name_b = (char)0;
      }

      ret=strcasecmp(ext_s, ext_b);
      if(!(name_s == ((char *)NULL)))
        *name_s = ch_s;

      if(!(name_b == ((char *)NULL)))
        *name_b = ch_b;

      break;
    }
    case SORT_TIME:
    {
      if(small->time == big->time)
        tmp_if_expr_1 = 0;

      else
        tmp_if_expr_1 = small->time < big->time ? -1 : 1;
      ret = tmp_if_expr_1;
    }
  }
  return sort_rev != 0 ? -ret : ret;
}

// cb_delete_entry
// file ../../src/mlistedit.c line 990
static signed int cb_delete_entry(struct WIDGET *w, signed int button, void *input, void *entry)
{
  if(!(button >= 1))
  {
    struct anonymous_0 *cur;
    cur=PL_GetEntry(&playlist, (signed int)(signed long int)entry);
    if(!(cur->archive == ((char *)NULL)))
    {
      signed int return_value_unlink_1;
      return_value_unlink_1=unlink(cur->archive);
      if(return_value_unlink_1 == -1)
        dlg_error_show("Error deleting archive \"%s\"!", cur->archive);

    }

    else
    {
      signed int return_value_unlink_2;
      return_value_unlink_2=unlink(cur->file);
      if(return_value_unlink_2 == -1)
        dlg_error_show("Error deleting file \"%s\"!", cur->file);

    }
    entry_remove((signed int)(signed long int)entry);
  }

  return 1;
}

// cb_focus
// file ../../src/mconfedit.c line 497
static signed int cb_focus(struct WIDGET *w, signed int focus)
{
  if(focus == 1)
  {
    struct anonymous_20 *data = (struct anonymous_20 *)w->data;
    if(!(data->list_w->w.has_focus == 0))
      return 100 + 2;

  }

  return focus;
}

// cb_freq_button_focus
// file ../../src/mlistedit.c line 803
static signed int cb_freq_button_focus(struct WIDGET *w, signed int focus)
{
  _Bool tmp_if_expr_2;
  signed int return_value_freq_call_func_1;
  signed int return_value_freq_call_func_3;
  if(focus == 1)
  {
    struct anonymous_25 *data = (struct anonymous_25 *)w->data;
    signed int button = ((struct anonymous_13 *)w)->active;
    freq_check_searchlist(data);
    switch(button)
    {
      case 0:
      {
        freq_add(data, (enum anonymous_26)FREQ_ADD);
        break;
      }
      case 1:
      {
        freq_add(data, (enum anonymous_26)FREQ_TOGGLE);
        break;
      }
      case 2:
      {
        freq_cd(data);
        break;
      }
      case 3:
      {
        freq_hotlist(data);
        break;
      }
      case 4:
      {
        if(data->handle_freq == ((signed int (*)(signed int, char *, void *))NULL))
          tmp_if_expr_2 = (_Bool)1;

        else
        {
          return_value_freq_call_func_1=freq_call_func(0, data);
          tmp_if_expr_2 = return_value_freq_call_func_1 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_2)
          freq_close(data);

        break;
      }
      case 5:
        if(!(data->handle_freq == ((signed int (*)(signed int, char *, void *))NULL)))
        {
          return_value_freq_call_func_3=freq_call_func(1, data);
          if(!(return_value_freq_call_func_3 == 0))
            freq_close(data);

        }

    }
    return 100;
  }

  return focus;
}

// cb_freq_cd_do
// file ../../src/mlistedit.c line 763
static signed int cb_freq_cd_do(struct WIDGET *w, signed int button, void *input, void *data)
{
  if(!(button >= 1))
  {
    char *pos;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen((char *)input);
    pos = (char *)input + (signed long int)return_value_strlen_1;
    if(!((signed int)pos[-1l] == 47))
    {
      *pos = (char)47;
      pos[(signed long int)1] = (char)0;
    }

    freq_check_searchlist((struct anonymous_25 *)data);
    freq_changedir((char *)input, (struct anonymous_25 *)data);
  }

  return 1;
}

// cb_freq_list_focus
// file ../../src/mlistedit.c line 734
static signed int cb_freq_list_focus(struct WIDGET *w, signed int focus)
{
  if(focus == 1)
  {
    struct anonymous_25 *data = (struct anonymous_25 *)w->data;
    signed int cur = ((struct anonymous_14 *)w)->cur;
    char path[8192l];
    char *cur_entry;
    freq_check_searchlist(data);
    path[(signed long int)0] = (char)0;
    cur_entry = ((struct anonymous_14 *)w)->entries[(signed long int)cur] + (signed long int)2;
    signed int return_value_path_update_2;
    return_value_path_update_2=path_update(path, data->path, cur_entry);
    if(return_value_path_update_2 == 0)
    {
      if(!(data->handle_freq == ((signed int (*)(signed int, char *, void *))NULL)))
      {
        signed int return_value_freq_call_func_1;
        return_value_freq_call_func_1=freq_call_func(0, data);
        if(!(return_value_freq_call_func_1 == 0))
          freq_close(data);

      }

      else
        freq_add(data, (enum anonymous_26)FREQ_ADD);
    }

    if(!((signed int)path[0l] == 0))
      freq_changedir(path, data);

    return 100;
  }

  return focus;
}

// cb_freq_list_key
// file ../../src/mlistedit.c line 786
static signed int cb_freq_list_key(struct WIDGET *w, signed int ch)
{
  struct anonymous_25 *data = (struct anonymous_25 *)w->data;
  freq_check_searchlist(data);
  const unsigned short int **return_value___ctype_b_loc_1;
  if(!(ch >= 256))
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if(!((1024 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)ch]) == 0))
      ch=toupper(ch);

  }

  if(ch == 0513)
  {
    freq_add(data, (enum anonymous_26)FREQ_ADD);
    goto __CPROVER_DUMP_L4;
  }

  return 0;

__CPROVER_DUMP_L4:
  ;
  return 100;
}

// cb_freq_scan_dir
// file ../../src/mlistedit.c line 634
signed int cb_freq_scan_dir(char *path, signed int added, signed int removed, void *data)
{
  struct anonymous_28 *scan_data = (struct anonymous_28 *)data;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(path);
  unsigned long int return_value_strlen_1;
  if(return_value_strlen_2 >= 51ul)
  {
    return_value_strlen_1=strlen(path);
    sprintf(storage, "Scanning ...%s...\n%4d entrie(s) added, %4d entrie(s) removed", &path[(signed long int)(return_value_strlen_1 - (unsigned long int)47)], added, removed);
  }

  else
    sprintf(storage, "Scanning %s...\n%4d entrie(s) added, %4d entrie(s) removed", path, added, removed);
  wid_label_set_label((struct anonymous_11 *)scan_data->w, storage);
  dialog_repaint(scan_data->w->w.d->win);
  win_refresh();
  return scan_data->stop;
}

// cb_handle_menu
// file ../../src/mlistedit.c line 1129
static void cb_handle_menu(struct MMENU *menu)
{
  struct anonymous_24 *data = (struct anonymous_24 *)menu->data;
  signed int actLine = *data->actLine;
  struct anonymous_0 *cur;
  char *name;
  char *msg;
  unsigned long int return_value_strlen_1;
  unsigned long int return_value_strlen_3;
  signed int return_value_PL_Save_5;
  if(menu->id == 0)
    switch(menu->cur)
    {
      case 0:
      {
        if(actLine >= 0)
          Player_SetNextMod(actLine);

        break;
      }
      case 1:
      {
        if(actLine >= 0)
          entry_remove(actLine);

        break;
      }
      case 2:
      {
        cur=PL_GetEntry(&playlist, actLine);
        if(cur == ((struct anonymous_0 *)NULL))
          break;

        if(!(cur->archive == ((char *)NULL)))
        {
          name=strrchr(cur->file, 47);
          if(!(name == ((char *)NULL)))
            name = name + 1l;

          else
            name = cur->file;
          unsigned long int return_value_strlen_2;
          return_value_strlen_2=strlen(cur->archive);
          if(return_value_strlen_2 >= 61ul)
          {
            return_value_strlen_1=strlen(cur->archive);
            msg=str_sprintf2("File \"%s\" is in an archive!\nReally delete whole archive\n  \"...%s\"?", name, &cur->archive[(signed long int)(return_value_strlen_1 - (unsigned long int)57)]);
          }

          else
            msg=str_sprintf2("File \"%s\" is in an archive!\nReally delete whole archive\n  \"%s\"?", name, cur->archive);
          dlg_message_open(msg, "&Yes|&No", 1, 1, cb_delete_entry, (void *)(signed long int)actLine);
        }

        else
        {
          unsigned long int return_value_strlen_4;
          return_value_strlen_4=strlen(cur->file);
          if(return_value_strlen_4 >= 51ul)
          {
            return_value_strlen_3=strlen(cur->file);
            msg=str_sprintf("Delete file \"...%s\"?", &cur->file[(signed long int)(return_value_strlen_3 - (unsigned long int)47)]);
          }

          else
            msg=str_sprintf("Delete file \"%s\"?", cur->file);
          dlg_message_open(msg, "&Yes|&No", 1, 1, cb_delete_entry, (void *)(signed long int)actLine);
        }
        free((void *)msg);
        break;
      }
      case 5:
      {
        PL_Randomize(&playlist);
        break;
      }
      case 7:
        break;
      default:
        goto __CPROVER_DUMP_L33;
    }

  else
    if(menu->id == 1)
      switch(menu->cur)
      {
        case 0:
        {
          freq_open("Load modules/playlists", config.pl_name, -1, (signed int (*)(signed int, char *, void *))(void *)0, (void *)0);
          break;
        }
        case 1:
        {
          freq_open("Insert modules/playlists", config.pl_name, actLine, (signed int (*)(signed int, char *, void *))(void *)0, (void *)0);
          break;
        }
        case 2:
        {
          return_value_PL_Save_5=PL_Save(&playlist, config.pl_name);
          if(return_value_PL_Save_5 == 0)
            dlg_error_show("Error saving playlist \"%s\"!", config.pl_name);

          break;
        }
        case 3:
        {
          dlg_input_str("Save playlist as:", "&Browse|<&Ok>|&Cancel", config.pl_name, 4096, cb_save_as, (void *)(signed long int)actLine);
          break;
        }
        default:
          goto __CPROVER_DUMP_L33;
      }

    else
    {
      sort_rev = (signed int)(signed long int)(menu->entries + (signed long int)5)->data;
      switch(menu->cur)
      {
        case 0:
        {
          sort_mode = (enum anonymous_23)SORT_NAME;
          PL_Sort(&playlist, cb_cmp_sort);
          break;
        }
        case 1:
        {
          sort_mode = (enum anonymous_23)SORT_EXT;
          PL_Sort(&playlist, cb_cmp_sort);
          break;
        }
        case 2:
        {
          sort_mode = (enum anonymous_23)SORT_PATH;
          PL_Sort(&playlist, cb_cmp_sort);
          break;
        }
        case 3:
        {
          sort_mode = (enum anonymous_23)SORT_TIME;
          PL_Sort(&playlist, cb_cmp_sort);
          break;
        }
        default:
          goto __CPROVER_DUMP_L33;
      }
    }
  menu_close(data->menu);
  goto __CPROVER_DUMP_L33;

__CPROVER_DUMP_L33:
  ;
}

// cb_hlist_button_focus
// file ../../src/mlistedit.c line 548
static signed int cb_hlist_button_focus(struct WIDGET *w, signed int focus)
{
  if(focus == 1)
  {
    struct anonymous_27 *data = (struct anonymous_27 *)w->data;
    signed int button = ((struct anonymous_13 *)w)->active;
    signed int cur = data->w->cur;
    freq_check_searchlist(data->freq);
    switch(button)
    {
      case 0:
      {
        if(!(cur >= config.cnt_hotlist))
          freq_changedir(config.hotlist[(signed long int)cur], data->freq);

        hlist_close(data);
        break;
      }
      case 1:
      {
        CF_string_array_insert(cur, &config.hotlist, &config.cnt_hotlist, data->freq->path, 4096);
        wid_list_set_entries(data->w, (const char **)config.hotlist, -1, config.cnt_hotlist);
        wid_repaint((struct WIDGET *)data->w);
        break;
      }
      case 2:
      {
        CF_string_array_remove(cur, &config.hotlist, &config.cnt_hotlist);
        wid_list_set_entries(data->w, (const char **)config.hotlist, -1, config.cnt_hotlist);
        wid_repaint((struct WIDGET *)data->w);
        break;
      }
      case 3:
        hlist_close(data);
    }
    return 100;
  }

  return focus;
}

// cb_hlist_list_focus
// file ../../src/mlistedit.c line 532
static signed int cb_hlist_list_focus(struct WIDGET *w, signed int focus)
{
  if(focus == 1)
  {
    struct anonymous_27 *data = (struct anonymous_27 *)w->data;
    signed int cur = ((struct anonymous_14 *)w)->cur;
    freq_check_searchlist(data->freq);
    if(!(cur >= config.cnt_hotlist))
      freq_changedir(config.hotlist[(signed long int)cur], data->freq);

    hlist_close(data);
    return 100;
  }

  return focus;
}

// cb_list_scan_dir
// file ../../src/mlistedit.c line 930
static signed int cb_list_scan_dir(char *path, signed int added, signed int removed, void *data)
{
  signed int cb_list_scan_dir__1__quiet = (signed int)(signed long int)data;
  char str[70l];
  char *pos;
  signed int i;
  unsigned long int return_value_strlen_1;
  char *tmp_post_5;
  if(cb_list_scan_dir__1__quiet == 0)
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(path);
    if(return_value_strlen_2 >= 44ul)
    {
      return_value_strlen_1=strlen(path);
      sprintf(str, "\rScanning ...%s... (%d added)", &path[(signed long int)(return_value_strlen_1 - (unsigned long int)40)], added);
    }

    else
      sprintf(str, "\rScanning %s... (%d added)", path, added);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(str);
    pos = str + (signed long int)return_value_strlen_3;
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(str);
    i = (signed int)return_value_strlen_4;
    for( ; !(i >= 70); i = i + 1)
    {
      tmp_post_5 = pos;
      pos = pos + 1l;
      *tmp_post_5 = (char)32;
    }
    *pos = (char)0;
    printf("%s", (const void *)str);
    fflush(stdout);
  }

  return 0;
}

// cb_overwrite
// file ../../src/mlistedit.c line 1081
static signed int cb_overwrite(struct WIDGET *w, signed int button, void *input, void *file)
{
  if(!(button >= 1))
  {
    signed int return_value_PL_Save_1;
    return_value_PL_Save_1=PL_Save(&playlist, (char *)file);
    if(!(return_value_PL_Save_1 == 0))
      rc_set_string(&config.pl_name, (char *)file, 4096);

    else
      dlg_error_show("Error saving playlist \"%s\"!", file);
  }

  if(!(file == NULL))
    free(file);

  return 1;
}

// cb_save_as
// file ../../src/mlistedit.c line 1104
static signed int cb_save_as(struct WIDGET *w, signed int button, void *input, void *data)
{
  if(button == 0)
  {
    freq_open("Select directory/file", (char *)input, (signed int)(signed long int)data, cb_browse, (void *)w);
    return 0;
  }

  else
    if(button == 1 || button == -1)
    {
      signed int return_value_file_exist_2;
      return_value_file_exist_2=file_exist((char *)input);
      if(!(return_value_file_exist_2 == 0))
      {
        char *f_copy;
        f_copy=strdup((char *)input);
        char *msg;
        msg=str_sprintf("File \"%s\" exists.\nReally overwrite the file?", f_copy);
        dlg_message_open(msg, "&Yes|&No", 1, 1, cb_overwrite, (void *)f_copy);
        free((void *)msg);
      }

      else
      {
        signed int return_value_PL_Save_1;
        return_value_PL_Save_1=PL_Save(&playlist, (char *)input);
        if(!(return_value_PL_Save_1 == 0))
          rc_set_string(&config.pl_name, (char *)input, 4096);

        else
          dlg_error_show("Error saving playlist \"%s\"!", input);
      }
    }

  return 1;
}

// cb_scan_dir_stop_focus
// file ../../src/mlistedit.c line 622
static signed int cb_scan_dir_stop_focus(struct WIDGET *w, signed int focus)
{
  if(focus == 1)
  {
    if(((struct anonymous_13 *)w)->active == 0)
      ((struct anonymous_28 *)w->data)->stop = 1;

    return 100;
  }

  else
    return focus;
}

// cb_theme_button_focus
// file ../../src/mconfedit.c line 460
static signed int cb_theme_button_focus(struct WIDGET *w, signed int focus)
{
  signed int return_value_win_has_colors_1;
  _Bool tmp_if_expr_2;
  if(focus == 1)
  {
    struct anonymous_20 *data = (struct anonymous_20 *)w->data;
    signed int button = ((struct anonymous_13 *)w)->active;
    switch(button)
    {
      case 0:
      {
        theme_get_attrs(data);
        if(!(data->theme.name == ((char *)NULL)))
          free((void *)data->theme.name);

        data->theme.name=strdup(data->str_w->input);
        CF_theme_remove(data->orig_theme, &themes, &cnt_themes);
        data->orig_theme=CF_theme_insert(&themes, &cnt_themes, &data->theme);
        theme_edit_close(data);
        break;
      }
      case 1:
      {
        return_value_win_has_colors_1=win_has_colors();
        if(!(return_value_win_has_colors_1 == 0))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = !(data->theme.color != 0) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
        {
          theme_get_attrs(data);
          CF_theme_free(&data->test_theme);
          CF_theme_copy(&data->test_theme, &data->theme);
          win_set_theme(&data->test_theme);
          win_panel_repaint();
        }

        else
          theme_edit_close(data);
        break;
      }
      case 2:
        theme_edit_close(data);
    }
    return 100;
  }

  return focus;
}

// cb_theme_list_focus
// file ../../src/mconfedit.c line 434
static signed int cb_theme_list_focus(struct WIDGET *w, signed int focus)
{
  if(focus == 1)
  {
    struct anonymous_20 *data = (struct anonymous_20 *)w->data;
    theme_get_attrs(data);
    data->cur_attr = ((struct anonymous_14 *)w)->cur;
    theme_set_attrs(data, 1);
    return 100;
  }

  return focus;
}

// cb_themeedit
// file ../../src/mconfedit.c line 600
static signed int cb_themeedit(struct WIDGET *w, signed int button, void *input, void *data)
{
  signed int act_theme;
  act_theme=config_get_act_theme();
  signed int user_theme = (signed int)(act_theme >= 2);
  if(button >= 3 || user_theme == 0 && button >= 2)
    return 1;

  else
  {
    switch(button)
    {
      case 0:
      {
        theme_copy(&act_theme);
        break;
      }
      case 1:
      {
        if(user_theme == 0)
          theme_copy(&act_theme);

        theme_edit(act_theme);
        break;
      }
      case 2:
      {
        CF_theme_remove(act_theme, &themes, &cnt_themes);
        if(act_theme >= cnt_themes)
          act_theme = act_theme - 1;

      }
    }
    config_set_act_theme(act_theme);
    get_themes(&other_entries[(signed long int)5]);
    return 1;
  }
}

// check_free
// file ../../src/mwidget.c line 742
static void check_free(struct anonymous_15 *w)
{
  free((void *)w->button);
  free((void *)w);
}

// check_get_size
// file ../../src/mwidget.c line 758
static void check_get_size(struct anonymous_15 *w, signed int *width, signed int *height)
{
  char *pos;
  signed int x = 0;
  signed int hl_cnt = 0;
  *width = 0;
  *height = 0;
  w->cnt = 0;
  pos = w->button;
  for( ; !(*pos == 0); pos = pos + 1l)
  {
    if((signed int)*pos == 38)
      hl_cnt = hl_cnt + 1;

    if((signed int)*pos == 124)
    {
      w->cnt = w->cnt + 1;
      *height = *height + 1;
      x = x + (4 - hl_cnt);
      if(!(*width >= x))
        *width = x;

      hl_cnt = 0;
      x = -1;
    }

    x = x + 1;
  }
  w->cnt = w->cnt + 1;
  *height = *height + 1;
  x = x + (4 - hl_cnt);
  if(!(*width >= x))
    *width = x;

}

// check_handle_event
// file ../../src/mwidget.c line 753
static signed int check_handle_event(struct anonymous_15 *w, enum anonymous_18 event, signed int ch)
{
  signed int return_value_check_toggle_handle_event_1;
  return_value_check_toggle_handle_event_1=check_toggle_handle_event(w, event, ch, 0);
  return return_value_check_toggle_handle_event_1;
}

// check_paint
// file ../../src/mwidget.c line 748
static void check_paint(struct anonymous_15 *w)
{
  check_toggle_paint(w, 0);
}

// check_toggle_handle_event
// file ../../src/mwidget.c line 661
static signed int check_toggle_handle_event(struct anonymous_15 *w, enum anonymous_18 event, signed int ch, signed int toggle)
{
  signed int cur;
  char *pos;
  const unsigned short int **return_value___ctype_b_loc_1;
  signed int return_value_handle_focus_2;
  signed int return_value_handle_focus_3;
  signed int return_value_toupper_4;
  static enum anonymous_18 last = (enum anonymous_18)WID_KEY;
  if((signed int)event == WID_GET_FOCUS)
  {
    if(!((signed int)last == WID_HOTKEY))
    {
      if(!(ch >= 0))
        w->active = w->cnt - 1;

      else
        w->active = 0;
    }

    return 100;
  }

  else
  {
    last = event;
    if((signed int)event == WID_KEY)
    {
      if(w->w.handle_key == ((signed int (*)(struct WIDGET *, signed int))NULL))
        goto __CPROVER_DUMP_L4;

      cur=w->w.handle_key((struct WIDGET *)w, ch);
      return cur;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      if(!(ch >= 256))
      {
        return_value___ctype_b_loc_1=__ctype_b_loc();
        if(!((1024 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)ch]) == 0))
          ch=toupper(ch);

      }

      switch(ch)
      {
        case 0403:

        case 0404:
        {
          if((signed int)event == WID_KEY)
          {
            w->active = w->active - 1;
            if(!(w->active >= 0))
            {
              return_value_handle_focus_2=handle_focus((struct WIDGET *)w, -1, 0);
              return return_value_handle_focus_2;
            }

            check_toggle_paint(w, toggle);
          }

          break;
        }
        case 0402:

        case 0405:

        case 9:
        {
          if((signed int)event == WID_KEY)
          {
            w->active = w->active + 1;
            if(w->active >= w->cnt)
            {
              return_value_handle_focus_3=handle_focus((struct WIDGET *)w, 1, 0);
              return return_value_handle_focus_3;
            }

            check_toggle_paint(w, toggle);
          }

          break;
        }
        case 0527:

        case 13:
        {
          if((signed int)event == WID_KEY)
          {
            cur=handle_focus((struct WIDGET *)w, 100 + 1, 0);
            if(!(cur == 0) && !(cur == 1) && !(cur == 2))
              return cur;

            if(!(toggle == 0))
              w->selected = w->selected ^ 1 << w->active;

            else
              w->selected = 1 << w->active;
            check_toggle_paint(w, toggle);
          }

          break;
        }
        default:
        {
          cur = 0;
          pos = w->button;
          for( ; !(*pos == 0); pos = pos + 1l)
          {
            if((signed int)*pos == 124)
              cur = cur + 1;

            if((signed int)*pos == 38)
            {
              return_value_toupper_4=toupper((signed int)pos[(signed long int)1]);
              if(return_value_toupper_4 == ch)
              {
                w->active = cur;
                check_toggle_paint(w, toggle);
                cur=handle_focus((struct WIDGET *)w, 100 + 1, 100 + 1);
                if(!(cur == 1) && !(cur == 2))
                  return cur;

                if(!(toggle == 0))
                  w->selected = w->selected ^ 1 << w->active;

                else
                  w->selected = 1 << w->active;
                check_toggle_paint(w, toggle);
                return cur;
              }

            }

          }
          return 0;
        }
      }
      return 100;
    }
  }
}

// check_toggle_paint
// file ../../src/mwidget.c line 595
static void check_toggle_paint(struct anonymous_15 *w, signed int toggle)
{
  char *start;
  char *pos;
  char *hl_pos;
  char hl[2l];
  char end;
  char marker[3l] = { ' ', 'x', 0 };
  char check_toggle_paint__1__help[320l];
  signed int cur = 0;
  signed int x;
  signed int xx;
  hl_pos = (char *)(void *)0;
  hl[(signed long int)1] = (char)0;
  if(!(toggle == 0))
    strcpy(check_toggle_paint__1__help, "[ ] ");

  else
  {
    strcpy(check_toggle_paint__1__help, "( ) ");
    marker[(signed long int)1] = (char)42;
  }
  check_toggle_paint__1__help[(signed long int)w->w.width] = (char)0;
  start = w->button;
  pos = w->button - (signed long int)1;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  do
  {
    pos = pos + 1l;
    if((signed int)*pos == 124)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = (signed int)*pos == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
    {
      end = *pos;
      *pos = (char)0;
      if(!(w->active == cur))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = !(w->w.has_focus != 0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        win_attrset((enum anonymous_7)ATTR_DLG_BUT_ITEXT);

      else
        win_attrset((enum anonymous_7)ATTR_DLG_BUT_ATEXT);
      check_toggle_paint__1__help[(signed long int)1] = marker[(signed long int)((w->selected & 1 << cur) != 0 ? 1 : 0)];
      strcpy(&check_toggle_paint__1__help[(signed long int)4], start);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(start);
      x = (signed int)(return_value_strlen_2 + (unsigned long int)4);
      if(!(hl_pos == ((char *)NULL)))
      {
        win_print(w->w.d->win, w->w.x, w->w.y + cur, check_toggle_paint__1__help);
        if(!(w->active == cur))
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = !(w->w.has_focus != 0) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          win_attrset((enum anonymous_7)ATTR_DLG_BUT_IHOTKEY);

        else
          win_attrset((enum anonymous_7)ATTR_DLG_BUT_AHOTKEY);
        win_print(w->w.d->win, w->w.x + x, w->w.y + cur, hl);
        x = x + 1;
        if(!(w->active == cur))
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = !(w->w.has_focus != 0) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
          win_attrset((enum anonymous_7)ATTR_DLG_BUT_ITEXT);

        else
          win_attrset((enum anonymous_7)ATTR_DLG_BUT_ATEXT);
        strcpy(&check_toggle_paint__1__help[(signed long int)x], hl_pos);
        unsigned long int return_value_strlen_5;
        return_value_strlen_5=strlen(hl_pos);
        xx = (signed int)((unsigned long int)x + return_value_strlen_5);
        if(!(xx == w->w.width))
          memset((void *)&check_toggle_paint__1__help[(signed long int)xx], 32, (unsigned long int)(w->w.width - xx));

        win_print(w->w.d->win, w->w.x + x, w->w.y + cur, &check_toggle_paint__1__help[(signed long int)x]);
        *(hl_pos - (signed long int)2) = (char)38;
        hl_pos = (char *)(void *)0;
      }

      else
      {
        if(!(x == w->w.width))
          memset((void *)&check_toggle_paint__1__help[(signed long int)x], 32, (unsigned long int)(w->w.width - x));

        win_print(w->w.d->win, w->w.x, w->w.y + cur, check_toggle_paint__1__help);
      }
      *pos = end;
      start = pos + (signed long int)1;
      cur = cur + 1;
    }

    else
      if((signed int)*pos == 38)
      {
        *pos = (char)0;
        pos = pos + 1l;
        hl_pos = pos + (signed long int)1;
        hl[(signed long int)0] = *pos;
      }

  }
  while(!(*pos == 0));
}

// cmp_bit
// file ../../src/mikmod.c line 362
static signed int cmp_bit(signed int value, signed int mask, signed int cmp)
{
  return ((value & mask) != 0 ? 1 : 0) != 0 ? cmp : (signed int)!(cmp != 0);
}

// color_to_pair
// file ../../src/mwindow.c line 245
static signed int color_to_pair(signed int attrs)
{
  return 1 + ((attrs & 0x07) >> 0) + ((attrs & 0x70) >> 4) * 8;
}

// colorsel_free
// file ../../src/mwidget.c line 808
static void colorsel_free(struct anonymous_16 *w)
{
  free((void *)w);
}

// colorsel_get_size
// file ../../src/mwidget.c line 949
static void colorsel_get_size(struct anonymous_16 *w, signed int *width, signed int *height)
{
  *width = 26;
  *height = 10;
}

// colorsel_handle_event
// file ../../src/mwidget.c line 878
static signed int colorsel_handle_event(struct anonymous_16 *w, enum anonymous_18 event, signed int ch)
{
  signed int act_x = (w->active & 0x70) >> 4;
  signed int act_y = (w->active & 0x07) >> 0;
  signed int i;
  signed int old_act_x = act_x;
  signed int old_act_y = act_y;
  const unsigned short int **return_value___ctype_b_loc_1;
  signed int return_value_handle_focus_2;
  signed int return_value_handle_focus_3;
  char *return_value_strchr_4;
  signed int return_value_handle_focus_5;
  if((signed int)event == WID_GET_FOCUS)
    return 100;

  else
    if((signed int)event == WID_KEY)
    {
      if(w->w.handle_key == ((signed int (*)(struct WIDGET *, signed int))NULL))
        goto __CPROVER_DUMP_L2;

      i=w->w.handle_key((struct WIDGET *)w, ch);
      return i;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(!(ch >= 256))
      {
        return_value___ctype_b_loc_1=__ctype_b_loc();
        if(!((1024 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)ch]) == 0))
          ch=toupper(ch);

      }

      switch(ch)
      {
        case 0403:
        {
          if((signed int)event == WID_KEY && act_y >= 1)
            act_y = act_y - 1;

          break;
        }
        case 0404:
        {
          if((signed int)event == WID_KEY && act_x >= 1)
            act_x = act_x - 1;

          break;
        }
        case 0402:
        {
          if((signed int)event == WID_KEY && !(act_y >= 8))
            act_y = act_y + 1;

          break;
        }
        case 0405:
        {
          if((signed int)event == WID_KEY && !(act_x >= 8))
            act_x = act_x + 1;

          break;
        }
        case 0527:

        case 13:
        {
          if((signed int)event == WID_KEY)
          {
            return_value_handle_focus_2=handle_focus((struct WIDGET *)w, 100 + 1, 100 + 1);
            return return_value_handle_focus_2;
          }

          break;
        }
        case 9:
        {
          if((signed int)event == WID_KEY)
          {
            return_value_handle_focus_3=handle_focus((struct WIDGET *)w, 1, 0);
            return return_value_handle_focus_3;
          }

          break;
        }
        default:
        {
          return_value_strchr_4=strchr(w->hkeys, ch);
          if(!(return_value_strchr_4 == ((char *)NULL)))
          {
            if(ch == (signed int)w->hkeys[0l])
            {
              if(act_x >= 1)
                act_x = act_x - 1;

            }

            if(ch == (signed int)w->hkeys[1l])
            {
              if(!(act_x >= 8))
                act_x = act_x + 1;

            }

            if(ch == (signed int)w->hkeys[2l])
            {
              if(act_y >= 1)
                act_y = act_y - 1;

            }

            if(ch == (signed int)w->hkeys[3l])
            {
              if(!(act_y >= 8))
                act_y = act_y + 1;

            }

            w->active = (act_x << 4) + (act_y << 0);
            colorsel_paint(w);
            i=handle_focus((struct WIDGET *)w, 100 + 1, 100 + 1);
            if(!(i == 1) && !(i == 2))
              return i;

            colorsel_paint(w);
            return i;
          }

          return 0;
        }
      }
      w->active = (act_x << 4) + (act_y << 0);
      colorsel_paint(w);
      if((signed int)w->sel_mode == WID_SEL_BROWSE)
      {
        if(old_act_x == act_x && old_act_y == act_y)
          goto __CPROVER_DUMP_L24;

        return_value_handle_focus_5=handle_focus((struct WIDGET *)w, 100 + 1, 100 + 1);
        return return_value_handle_focus_5;
      }

      else
      {

      __CPROVER_DUMP_L24:
        ;
        return 100;
      }
    }
}

// colorsel_paint
// file ../../src/mwidget.c line 813
static void colorsel_paint(struct anonymous_16 *w)
{
  signed int y = w->w.y;
  signed int x = w->w.x;
  signed int act_x = (w->active & 0x70) >> 4;
  signed int act_y = (w->active & 0x07) >> 0;
  enum anonymous_7 border[10l][26l];
  enum anonymous_7 b[12l];
  enum anonymous_7 attr;
  enum anonymous_7 return_value_base_attr_1;
  return_value_base_attr_1=base_attr(w->w.d, (enum anonymous_7)ATTR_DLG_FRAME);
  win_attrset(return_value_base_attr_1);
  win_box(w->w.d->win, w->w.x, w->w.y, w->w.x + 8 * 3 + 1, w->w.y + 8 + 1);
  enum anonymous_7 return_value_win_get_theme_color_2;
  return_value_win_get_theme_color_2=win_get_theme_color((enum anonymous_7)ATTR_DLG_FRAME);
  attr = (enum anonymous_7)(((signed int)return_value_win_get_theme_color_2 & 0x70) >> 4);
  x = 0;
  for( ; !(x >= 2); x = x + 1)
  {
    border[(signed long int)(8 + 1)][(signed long int)x] = attr;
    border[(signed long int)0][(signed long int)x] = border[(signed long int)(8 + 1)][(signed long int)x];
  }
  y = 1;
  for( ; !(y >= 1); y = y + 1)
  {
    border[(signed long int)y][(signed long int)(8 * 3 + 1)] = attr;
    border[(signed long int)y][(signed long int)0] = border[(signed long int)y][(signed long int)(8 * 3 + 1)];
  }
  y = 0;
  for( ; !(y >= 8); y = y + 1)
  {
    x = 0;
    for( ; !(x >= 8); x = x + 1)
    {
      border[(signed long int)(y + 1)][(signed long int)(x * 3 + 3)] = (enum anonymous_7)x;
      border[(signed long int)(y + 1)][(signed long int)(x * 3 + 2)] = border[(signed long int)(y + 1)][(signed long int)(x * 3 + 3)];
      border[(signed long int)(y + 1)][(signed long int)(x * 3 + 1)] = border[(signed long int)(y + 1)][(signed long int)(x * 3 + 2)];
      win_set_color((enum anonymous_7)((x << 4) + (y << 0)));
      win_print(w->w.d->win, w->w.x + x * 3 + 1, w->w.y + y + 1, " X ");
    }
  }
  enum anonymous_7 hotkey = (enum anonymous_7)(w->w.has_focus != 0 ? ATTR_DLG_BUT_AHOTKEY : ATTR_DLG_BUT_IHOTKEY);
  enum anonymous_7 text = (enum anonymous_7)(w->w.has_focus != 0 ? ATTR_DLG_BUT_ATEXT : ATTR_DLG_BUT_ITEXT);
  char key[2l] = { ' ', 0 };
  const char *pat[2l] = { ".......< h      h >", "..^h  hv" };
  signed int p;
  signed int h = 0;
  p = 0;
  unsigned long int return_value_strlen_3;
  for( ; !(p >= 2); p = p + 1)
  {
    x = 0;
    do
    {
      return_value_strlen_3=strlen(pat[(signed long int)p]);
      if((unsigned long int)x >= return_value_strlen_3)
        break;

      if(!((signed int)pat[(signed long int)p][(signed long int)x] == 46))
      {
        enum anonymous_7 return_value_win_get_theme_color_4;
        return_value_win_get_theme_color_4=win_get_theme_color(text);
        border[(signed long int)(x * p)][(signed long int)(x * (1 - p))] = (enum anonymous_7)(((signed int)return_value_win_get_theme_color_4 & 0x70) >> 4);
        win_attrset(text);
        key[(signed long int)0] = pat[(signed long int)p][(signed long int)x];
        if((signed int)pat[(signed long int)p][(signed long int)x] == 104)
        {
          if(!(w->hkeys[(signed long int)h] == 0))
          {
            enum anonymous_7 return_value_win_get_theme_color_5;
            return_value_win_get_theme_color_5=win_get_theme_color(hotkey);
            border[(signed long int)(x * p)][(signed long int)(x * (1 - p))] = (enum anonymous_7)(((signed int)return_value_win_get_theme_color_5 & 0x70) >> 4);
            win_attrset(hotkey);
            key[(signed long int)0] = w->hkeys[(signed long int)h];
          }

          h = h + 1;
        }

        win_print(w->w.d->win, w->w.x + x * (1 - p), w->w.y + x * p, key);
      }

      x = x + 1;
    }
    while((_Bool)1);
  }
  x = 0;
  for( ; !(x >= 5); x = x + 1)
  {
    b[(signed long int)x] = border[(signed long int)act_y][(signed long int)(act_x * 3 + x)];
    b[(signed long int)(10 - x)] = border[(signed long int)(act_y + 2)][(signed long int)(act_x * 3 + x)];
  }
  b[(signed long int)5] = border[(signed long int)(act_y + 1)][(signed long int)(act_x * 3 + 4)];
  b[(signed long int)11] = border[(signed long int)(act_y + 1)][(signed long int)(act_x * 3)];
  win_set_forground((enum anonymous_7)0x00);
  win_box_color(w->w.d->win, w->w.x + act_x * 3, w->w.y + act_y, w->w.x + act_x * 3 + 4, w->w.y + act_y + 2, b);
}

// column_dim
// file ../../src/mwidget.c line 1333
static void column_dim(struct anonymous_17 *d, signed int start, signed int *width, signed int *height)
{
  signed int i;
  *width = d->widget[(signed long int)start]->width;
  i = start + 1;
  for( ; !(i >= d->cnt); i = i + 1)
  {
    if(!(d->widget[(signed long int)i]->spacing >= 1))
      break;

    if(!(*width >= d->widget[(signed long int)i]->width))
      *width = d->widget[(signed long int)i]->width;

  }
  *height = (d->widget[(signed long int)(i - 1)]->y + d->widget[(signed long int)(i - 1)]->height) - d->widget[(signed long int)start]->y;
}

// config_error
// file ../../src/mikmod.c line 373
static void config_error(const char *err, enum anonymous_30 state)
{
  if(!(quiet == 0))
  {
    const char *return_value_MikMod_strerror_1;
    return_value_MikMod_strerror_1=MikMod_strerror(MikMod_errno);
    exit_player(1, "%s: %s.\n", err, return_value_MikMod_strerror_1);
  }

  else
  {
    signed int return_value_win_get_panel_2;
    return_value_win_get_panel_2=win_get_panel();
    if(!(return_value_win_get_panel_2 == 6))
      win_change_panel(6);

    const char *return_value_MikMod_strerror_3;
    return_value_MikMod_strerror_3=MikMod_strerror(MikMod_errno);
    sprintf(storage, "%s:\n  %s.\nTry changing the configuration.", err, return_value_MikMod_strerror_3);
    dlg_message_open(storage, "&Ok", 0, 1, (signed int (*)(struct WIDGET *, signed int, void *, void *))(void *)0, (void *)0);
    status.state = state;
  }
}

// config_get_act_theme
// file ../../src/mconfedit.c line 373
static signed int config_get_act_theme(void)
{
  return (signed int)(signed long int)other_entries[(signed long int)5].data;
}

// config_get_config
// file ../../src/mconfedit.c line 686
static void config_get_config(struct anonymous_3 *cfg)
{
  signed int i;
  cfg->driver = (signed int)(signed long int)output_entries[(signed long int)0].data;
  rc_set_string(&cfg->driveroptions, (char *)output_entries[(signed long int)1].data, 99);
  cfg->stereo = (signed int)(signed long int)output_entries[(signed long int)2].data;
  cfg->mode_16bit = (signed int)(signed long int)output_entries[(signed long int)3].data;
  cfg->frequency = (signed int)(signed long int)output_entries[(signed long int)4].data;
  cfg->interpolate = (signed int)(signed long int)output_entries[(signed long int)5].data;
  cfg->hqmixer = (signed int)(signed long int)output_entries[(signed long int)6].data;
  cfg->surround = (signed int)(signed long int)output_entries[(signed long int)7].data;
  cfg->reverb = (signed int)(signed long int)output_entries[(signed long int)8].data;
  cfg->volume = (signed int)(signed long int)playback_entries[(signed long int)0].data;
  cfg->volrestrict = (signed int)(signed long int)playback_entries[(signed long int)1].data;
  cfg->fade = (signed int)(signed long int)playback_entries[(signed long int)2].data;
  cfg->loop = (signed int)(signed long int)playback_entries[(signed long int)3].data;
  cfg->panning = (signed int)(signed long int)playback_entries[(signed long int)4].data;
  cfg->extspd = (signed int)(signed long int)playback_entries[(signed long int)5].data;
  cfg->playmode = ((signed int)(signed long int)plmode_entries[(signed long int)0].data != 0 ? 1 : 0) | ((signed int)(signed long int)plmode_entries[(signed long int)1].data != 0 ? 2 : 0) | ((signed int)(signed long int)plmode_entries[(signed long int)2].data != 0 ? 4 : 0) | ((signed int)(signed long int)plmode_entries[(signed long int)3].data != 0 ? 8 : 0);
  cfg->curious = (signed int)(signed long int)other_entries[(signed long int)1].data;
  cfg->tolerant = (signed int)(signed long int)other_entries[(signed long int)2].data;
  cfg->fullpaths = (signed int)(signed long int)other_entries[(signed long int)3].data;
  cfg->window_title = (signed int)(signed long int)other_entries[(signed long int)6].data;
  cfg->forcesamples = (signed int)(signed long int)other_entries[(signed long int)7].data;
  cfg->fakevolbars = (signed int)(signed long int)other_entries[(signed long int)8].data;
  cfg->renice = (signed int)(signed long int)other_entries[(signed long int)9].data;
  cfg->statusbar = (signed int)(signed long int)other_entries[(signed long int)10].data;
  cfg->save_config = (signed int)(signed long int)exit_entries[(signed long int)0].data;
  cfg->save_playlist = (signed int)(signed long int)exit_entries[(signed long int)1].data;
  CF_themes_free_user(&cfg->themes, &cfg->cnt_themes);
  i = 2;
  for( ; !(i >= cnt_themes); i = i + 1)
    CF_theme_insert(&cfg->themes, &cfg->cnt_themes, &themes[(signed long int)i]);
  cfg->theme=config_get_act_theme();
}

// config_open
// file ../../src/mconfedit.h line 39
void config_open(void)
{
  char *name;
  name=CF_GetFilename();
  set_help(&exit_entries[(signed long int)0], "Save config at exit in '%s'", name);
  if(!(name == ((char *)NULL)))
    free((void *)name);

  name=PL_GetFilename();
  set_help(&exit_entries[(signed long int)1], "Save playlist at exit in '%s'", name);
  if(!(name == ((char *)NULL)))
    free((void *)name);

  get_drivers(&output_entries[(signed long int)0]);
  config_set_config(&config);
  menu_open(&menu, 5, 5);
}

// config_set_act_theme
// file ../../src/mconfedit.c line 378
static void config_set_act_theme(signed int act_theme)
{
  other_entries[(signed long int)5].data = (void *)(signed long int)act_theme;
}

// config_set_config
// file ../../src/mconfedit.c line 628
static void config_set_config(struct anonymous_3 *cfg)
{
  signed int i;
  output_entries[(signed long int)0].data = (void *)(signed long int)cfg->driver;
  strcpy((char *)output_entries[(signed long int)1].data, cfg->driveroptions);
  output_entries[(signed long int)2].data = (void *)(signed long int)cfg->stereo;
  output_entries[(signed long int)3].data = (void *)(signed long int)cfg->mode_16bit;
  output_entries[(signed long int)4].data = (void *)(signed long int)cfg->frequency;
  output_entries[(signed long int)5].data = (void *)(signed long int)cfg->interpolate;
  output_entries[(signed long int)6].data = (void *)(signed long int)cfg->hqmixer;
  output_entries[(signed long int)7].data = (void *)(signed long int)cfg->surround;
  output_entries[(signed long int)8].data = (void *)(signed long int)cfg->reverb;
  playback_entries[(signed long int)0].data = (void *)(signed long int)cfg->volume;
  playback_entries[(signed long int)1].data = (void *)(signed long int)cfg->volrestrict;
  playback_entries[(signed long int)2].data = (void *)(signed long int)cfg->fade;
  playback_entries[(signed long int)3].data = (void *)(signed long int)cfg->loop;
  playback_entries[(signed long int)4].data = (void *)(signed long int)cfg->panning;
  playback_entries[(signed long int)5].data = (void *)(signed long int)cfg->extspd;
  plmode_entries[(signed long int)0].data = (void *)(signed long int)((cfg->playmode & 1) != 0 ? 1 : 0);
  plmode_entries[(signed long int)1].data = (void *)(signed long int)((cfg->playmode & 2) != 0 ? 1 : 0);
  plmode_entries[(signed long int)2].data = (void *)(signed long int)((cfg->playmode & 4) != 0 ? 1 : 0);
  plmode_entries[(signed long int)3].data = (void *)(signed long int)((cfg->playmode & 8) != 0 ? 1 : 0);
  other_entries[(signed long int)1].data = (void *)(signed long int)cfg->curious;
  other_entries[(signed long int)2].data = (void *)(signed long int)cfg->tolerant;
  other_entries[(signed long int)3].data = (void *)(signed long int)cfg->fullpaths;
  other_entries[(signed long int)6].data = (void *)(signed long int)cfg->window_title;
  other_entries[(signed long int)7].data = (void *)(signed long int)cfg->forcesamples;
  other_entries[(signed long int)8].data = (void *)(signed long int)cfg->fakevolbars;
  other_entries[(signed long int)9].data = (void *)(signed long int)cfg->renice;
  other_entries[(signed long int)10].data = (void *)(signed long int)cfg->statusbar;
  exit_entries[(signed long int)0].data = (void *)(signed long int)cfg->save_config;
  exit_entries[(signed long int)1].data = (void *)(signed long int)cfg->save_playlist;
  get_driver_options(&output_entries[(signed long int)1], &output_entries[(signed long int)0]);
  CF_themes_free(&themes, &cnt_themes);
  i = 0;
  for( ; !(i >= cfg->cnt_themes); i = i + 1)
    CF_theme_insert(&themes, &cnt_themes, &cfg->themes[(signed long int)i]);
  config_set_act_theme(cfg->theme);
  get_themes(&other_entries[(signed long int)5]);
}

// convert_string
// file ../../src/display.c line 637
static void convert_string(char *str)
{
  _Bool tmp_if_expr_1;
  do
  {
    if(!(str == ((char *)NULL)))
      tmp_if_expr_1 = *str != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    if(!((signed int)*str >= 32))
      *str = (char)32;

    str = str + 1l;
  }
  while((_Bool)1);
}

// dialog_add
// file ../../src/mwidget.c line 955
static void dialog_add(struct anonymous_17 *d, struct WIDGET *w)
{
  void *return_value_realloc_1;
  return_value_realloc_1=realloc((void *)d->widget, (unsigned long int)(d->cnt + 1) * sizeof(struct WIDGET *) /*8ul*/ );
  d->widget = (struct WIDGET **)return_value_realloc_1;
  d->widget[(signed long int)d->cnt] = w;
  d->cnt = d->cnt + 1;
}

// dialog_close
// file ../../src/mwidget.c line 1275
void dialog_close(struct anonymous_17 *d)
{
  signed int i = 0;
  if(!(i >= d->cnt))
  {
    d->widget[(signed long int)i]->w_free(d->widget[(signed long int)i]);
    i = i + 1;
  }

  if(!(d->cnt == 0))
    free((void *)d->widget);

  win_close(d->win);
  free((void *)d);
}

// dialog_handle_key
// file ../../src/mwidget.c line 1287
static signed int dialog_handle_key(struct MWINDOW *win, signed int ch)
{
  struct anonymous_17 *d = (struct anonymous_17 *)win->data;
  signed int ret;
  signed int i;
  ret=d->widget[(signed long int)d->active]->w_handle_event(d->widget[(signed long int)d->active], (enum anonymous_18)WID_KEY, ch);
  _Bool tmp_if_expr_1;
  if(ret == 0)
  {
    i = 0;
    if(ret == 0)
      tmp_if_expr_1 = i < d->cnt ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      ret=d->widget[(signed long int)i]->w_handle_event(d->widget[(signed long int)i], (enum anonymous_18)WID_HOTKEY, ch);
      if(ret == 1)
      {
        d->widget[(signed long int)d->active]->has_focus = 0;
        d->widget[(signed long int)i]->has_focus = 1;
        d->active = i;
        d->widget[(signed long int)d->active]->w_handle_event(d->widget[(signed long int)d->active], (enum anonymous_18)WID_GET_FOCUS, ret);
        dialog_repaint(win);
      }

      i = i + 1;
    }

  }

  else
    if(!(ret >= 100))
    {
      d->widget[(signed long int)d->active]->has_focus = 0;
      d->active = d->active + ret;
      if(!(d->active >= 0))
        d->active = d->cnt - 1;

      else
        if(d->active >= d->cnt)
          d->active = 0;

      d->widget[(signed long int)d->active]->has_focus = 1;
      d->widget[(signed long int)d->active]->w_handle_event(d->widget[(signed long int)d->active], (enum anonymous_18)WID_GET_FOCUS, ret);
      dialog_repaint(win);
    }

  return (signed int)!(!(ret != 0));
}

// dialog_handle_resize
// file ../../src/mwidget.c line 1505
static void dialog_handle_resize(struct MWINDOW *win, signed int dx, signed int dy)
{
  struct anonymous_17 *d = (struct anonymous_17 *)win->data;
  signed int x;
  signed int y;
  signed int width;
  signed int height;
  dialog_layout(d, 0, &x, &y, &width, &height);
  win->x = x;
  win->y = y;
  win->width = width;
  win->height = height;
}

// dialog_layout
// file ../../src/mwidget.c line 1350
static void dialog_layout(struct anonymous_17 *d, signed int initial, signed int *w_x, signed int *w_y, signed int *w_width, signed int *w_height)
{
  signed int m_y;
  signed int m_width = 0;
  signed int m_height = 0;
  signed int i;
  signed int x;
  signed int y;
  signed int width;
  signed int height;
  signed int spacing;
  signed int c_spacing = 1;
  signed int c_height;
  signed int c_width;
  signed int focus = 1;
  i = 0;
  width = 1;
  m_width = 0;
  m_height = m_width;
  c_height = m_height;
  c_width = c_height;
  height = c_width;
  signed int tmp_if_expr_2;
  signed int return_value_abs_1;
  if(!(i >= d->cnt))
  {
    spacing = d->widget[(signed long int)i]->spacing;
    if(i == 0 || !(spacing >= 0))
    {
      if(spacing == 0)
        tmp_if_expr_2 = 1;

      else
      {
        return_value_abs_1=abs(spacing);
        tmp_if_expr_2 = return_value_abs_1;
      }
      c_spacing = tmp_if_expr_2;
    }

    x = 999;
    y = 999;
    d->widget[(signed long int)i]->w_get_size(d->widget[(signed long int)i], &x, &y);
    d->widget[(signed long int)i]->width = x;
    d->widget[(signed long int)i]->height = y;
    if(spacing >= 1)
    {
      c_height = c_height + (spacing - 1);
      d->widget[(signed long int)i]->x = width;
      d->widget[(signed long int)i]->y = m_height + c_height;
      if(!(c_width >= x))
        c_width = x;

    }

    else
      if(spacing == 0)
      {
        if(!(height >= c_height))
          height = c_height;

        c_height = c_spacing - 1;
        width = width + c_width + 1;
        d->widget[(signed long int)i]->x = width;
        d->widget[(signed long int)i]->y = m_height + c_height;
        c_width = x;
      }

      else
      {
        width = width + c_width + 1;
        if(!(m_width >= width))
          m_width = width;

        if(!(height >= c_height))
          height = c_height;

        m_height = m_height + height;
        c_height = -spacing - 1;
        height = 0;
        width = 1;
        d->widget[(signed long int)i]->x = width;
        d->widget[(signed long int)i]->y = m_height + c_height;
        c_width = x;
      }
    c_height = c_height + y;
    if(!(initial == 0))
    {
      if(!(d->widget[(signed long int)i]->can_focus == 0))
      {
        d->widget[(signed long int)i]->has_focus = focus;
        if(!(focus == 0))
          d->active = i;

        focus = 0;
      }

      else
        d->widget[(signed long int)i]->has_focus = 0;
    }

    i = i + 1;
  }

  width = width + c_width + 1;
  if(!(m_width >= width))
    m_width = width;

  if(!(height >= c_height))
    height = c_height;

  m_height = m_height + height;
  width = m_width;
  height = m_height;
  win_get_size_max(&m_y, &m_width, &m_height);
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  if(!(m_height + -2 >= height) || !(m_width + -2 >= width))
  {
    signed int dx = (width - m_width) + 2;
    signed int dy = (height - m_height) + 2;
    signed int free_x;
    signed int old_width = width;
    signed int old_height = height;
    signed int i_start;
    signed int m_c_height;
    signed int m_c_height_old;
    signed int c_height_old;
    signed int c_width_old;
    signed int m_x;
    m_height = 0;
    m_width = m_height;
    i = 0;
    if(!(i >= d->cnt))
    {
      spacing=abs(d->widget[(signed long int)i]->spacing);
      m_height = m_height + (spacing == 0 ? 0 : spacing - 1);
      width = 1;
      x = i;
      do
      {
        x = x + 1;
        if(!(x >= d->cnt))
          tmp_if_expr_3 = d->widget[(signed long int)x]->spacing >= 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
      }
      while(tmp_if_expr_3);
      if(!(x >= d->cnt))
        m_c_height_old = ((d->widget[(signed long int)x]->y + d->widget[(signed long int)x]->spacing) - d->widget[(signed long int)i]->y) + 1;

      else
        m_c_height_old = old_height - d->widget[(signed long int)i]->y;
      m_x = 0;
      do
      {
        x = x - 1;
        if(!(m_x >= d->widget[(signed long int)x]->width + d->widget[(signed long int)x]->x + -1))
          m_x = (d->widget[(signed long int)x]->x + d->widget[(signed long int)x]->width) - 1;

        if(x >= 1)
          tmp_if_expr_4 = d->widget[(signed long int)x]->spacing > 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
      }
      while(tmp_if_expr_4);
      free_x = (old_width - 1) - m_x;
      m_c_height = 0;
      c_width = 0;
      c_height = c_width;
      i_start = i;
      column_dim(d, i_start, &c_width_old, &c_height_old);
      x = (d->widget[(signed long int)i]->width - dx) + free_x;
      y = ((d->widget[(signed long int)i]->height - dy) + m_c_height_old) - c_height_old;
      d->widget[(signed long int)i]->w_get_size(d->widget[(signed long int)i], &x, &y);
      if(i >= 1)
      {
        if(d->widget[(signed long int)i]->spacing >= 1)
          c_height = c_height + (d->widget[(signed long int)i]->spacing - 1);

      }

      d->widget[(signed long int)i]->x = width;
      d->widget[(signed long int)i]->y = m_height + c_height;
      d->widget[(signed long int)i]->width = x;
      d->widget[(signed long int)i]->height = y;
      if(!(c_width >= x))
        c_width = x;

      c_height = c_height + y;
      y = c_width_old;
      column_dim(d, i_start, &c_width_old, &c_height_old);
      free_x = free_x + (y - c_width_old);
      i = i + 1;
      if(!(i >= d->cnt))
        tmp_if_expr_6 = d->widget[(signed long int)i]->spacing > 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      width = width + c_width + 1;
      if(!(m_c_height >= c_height))
        m_c_height = c_height;

      if(!(i >= d->cnt))
        tmp_if_expr_5 = d->widget[(signed long int)i]->spacing >= 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      if(!(m_width >= width))
        m_width = width;

      m_height = m_height + m_c_height;
    }

    width = m_width;
    height = m_height;
    win_get_size_max(&m_y, &m_width, &m_height);
  }

  m_width = m_width - 2;
  m_height = m_height - 2;
  *w_x = (m_width - width) / 2 + 1;
  if(!(*w_x >= 1))
    *w_x = 1;

  *w_y = (m_height - height) / 2 + m_y + 1;
  if(m_y >= *w_y)
    *w_y = m_y + 1;

  *w_width = width > m_width ? m_width : width;
  *w_height = height > m_height ? m_height : height;
}

// dialog_new
// file ../../src/mwidget.c line 1542
struct anonymous_17 * dialog_new(void)
{
  struct anonymous_17 *d;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_17) /*32ul*/ );
  d = (struct anonymous_17 *)return_value_malloc_1;
  d->active = 0;
  d->cnt = 0;
  d->attrs = (enum anonymous_7)ATTR_NONE;
  d->win = (struct MWINDOW *)(void *)0;
  d->widget = (struct WIDGET **)(void *)0;
  return d;
}

// dialog_open
// file ../../src/mwidget.c line 1517
void dialog_open(struct anonymous_17 *d, const char *title)
{
  signed int x;
  signed int y;
  signed int width;
  signed int height;
  dialog_layout(d, 1, &x, &y, &width, &height);
  if(title == ((const char *)NULL))
    title = "Dialog";

  enum anonymous_7 return_value_base_attr_1;
  return_value_base_attr_1=base_attr(d, (enum anonymous_7)ATTR_DLG_FRAME);
  win_open(x, y, width, height, 1, title, return_value_base_attr_1);
  win_set_repaint(dialog_repaint);
  win_set_handle_key(dialog_handle_key);
  win_set_resize(0, dialog_handle_resize);
  win_set_data((void *)d);
  d->win=win_get_window();
  dialog_repaint(d->win);
}

// dialog_repaint
// file ../../src/mwidget.c line 1262
signed int dialog_repaint(struct MWINDOW *win)
{
  struct anonymous_17 *d = (struct anonymous_17 *)win->data;
  signed int i = 0;
  enum anonymous_7 return_value_base_attr_1;
  return_value_base_attr_1=base_attr(d, (enum anonymous_7)ATTR_DLG_FRAME);
  win_attrset(return_value_base_attr_1);
  win_clear(win);
  i = 0;
  if(!(i >= d->cnt))
  {
    d->widget[(signed long int)i]->w_paint(d->widget[(signed long int)i]);
    i = i + 1;
  }

  return 1;
}

// dialog_set_attr
// file ../../src/mwidget.c line 1537
void dialog_set_attr(struct anonymous_17 *d, enum anonymous_7 attrs)
{
  d->attrs = attrs;
}

// dirlist_cmp
// file ../../src/mlistedit.c line 133
static signed int dirlist_cmp(char **small, char **big)
{
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(*small);
  signed int return_value_strcmp_1;
  unsigned long int return_value_strlen_3;
  if((signed int)(*small)[-1l + (signed long int)return_value_strlen_4] == 47)
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(*big);
    if((signed int)(*big)[-1l + (signed long int)return_value_strlen_2] == 47)
    {
      return_value_strcmp_1=strcmp(*small + (signed long int)2, *big + (signed long int)2);
      return return_value_strcmp_1;
    }

    else
      return -1;
  }

  else
  {
    return_value_strlen_3=strlen(*big);
    if((signed int)(*big)[-1l + (signed long int)return_value_strlen_3] == 47)
      return 1;

  }
  signed int return_value_strcmp_5;
  return_value_strcmp_5=strcmp(*small + (signed long int)2, *big + (signed long int)2);
  return return_value_strcmp_5;
}

// dirlist_search_cmp
// file ../../src/mlistedit.c line 146
static signed int dirlist_search_cmp(char *key, char **member)
{
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(key);
  signed int return_value_strcmp_1;
  unsigned long int return_value_strlen_3;
  if((signed int)key[-1l + (signed long int)return_value_strlen_4] == 47)
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(*member);
    if((signed int)(*member)[-1l + (signed long int)return_value_strlen_2] == 47)
    {
      return_value_strcmp_1=strcmp(key, *member + (signed long int)2);
      return return_value_strcmp_1;
    }

    else
      return -1;
  }

  else
  {
    return_value_strlen_3=strlen(*member);
    if((signed int)(*member)[-1l + (signed long int)return_value_strlen_3] == 47)
      return 1;

  }
  signed int return_value_strcmp_5;
  return_value_strcmp_5=strcmp(key, *member + (signed long int)2);
  return return_value_strcmp_5;
}

// display_banner
// file ../../src/display.c line 223
static signed int display_banner(struct MWINDOW *win, const char *banner, signed int origin, signed int skip, signed int wrap)
{
  const char *buf = banner;
  char str[201l];
  signed int i;
  signed int n;
  signed int t;
  signed int display_banner__1__winx;
  signed int display_banner__1__winy;
  win_get_size(win, &display_banner__1__winx, &display_banner__1__winy);
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  if(!(display_banner__1__winx >= 5) || !(display_banner__1__winy >= 1))
    return skip;

  else
  {
    t = 0;
    for( ; !(*buf == 0); t = t + 1)
    {
      n = 0;
      for( ; wrap == 0 || !(n >= 200) && !(n >= display_banner__1__winx); n = n + 1)
      {
        if((signed int)*buf == 13)
          break;

        if((signed int)*buf == 10)
          break;

        if(*buf == 0)
          break;

        buf = buf + 1l;
      }
      if((signed int)*buf == 13)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)*buf == 10 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        buf = buf + 1l;

    }
    if(!(skip >= 0))
      skip = 0;

    if(!(t >= display_banner__1__winy + skip + -origin))
      skip = (t - display_banner__1__winy) + origin;

    if(!(skip >= 0))
      skip = 0;

    if(!(display_banner__1__winy >= t + origin + -skip))
      t = (display_banner__1__winy - origin) + skip;

    buf = banner;
    i = 0;
    for( ; !(i >= t) && !(i >= skip); i = i + 1)
    {
      n = 0;
      for( ; wrap == 0 || !(n >= 200) && !(n >= display_banner__1__winx); n = n + 1)
      {
        if((signed int)*buf == 13)
          break;

        if((signed int)*buf == 10)
          break;

        if(*buf == 0)
          break;

        buf = buf + 1l;
      }
      if((signed int)*buf == 13)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (signed int)*buf == 10 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        buf = buf + 1l;

    }
    i = skip;
    for( ; !(i >= t); i = i + 1)
    {
      n = 0;
      do
      {
        if(wrap == 0 || !(n >= 200) && !(n >= display_banner__1__winx))
          tmp_if_expr_3 = (signed int)*buf != 13 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = (signed int)*buf != 10 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_5 = *buf != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_5 = (_Bool)0;
        if(!tmp_if_expr_5)
          break;

        if(!((signed int)*buf >= 32))
          str[(signed long int)n] = (char)32;

        else
          str[(signed long int)n] = *buf;
        if(!(n >= 200))
          n = n + 1;

        buf = buf + 1l;
      }
      while((_Bool)1);
      if((signed int)*buf == 13)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = (signed int)*buf == 10 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
        buf = buf + 1l;

      if(!(n == 0))
      {
        str[(signed long int)n] = (char)0;
        snprintf(storage, (unsigned long int)320, fmt_fullwidth, (const void *)str);
        win_print(win, 0, (i - skip) + origin, storage);
      }

      else
        win_clrtoeol(win, 0, (i - skip) + origin);
    }
    if(origin == 0)
    {
      i = i + (origin - skip);
      for( ; !(i >= display_banner__1__winy); i = i + 1)
        win_clrtoeol(win, 0, i);
    }

    return skip;
  }
}

// display_comment
// file ../../src/display.c line 816
static void display_comment(struct MWINDOW *win, signed int diff)
{
  first_comment = first_comment + diff;
  win_attrset((enum anonymous_7)ATTR_HELP);
  first_comment=display_banner(win, mf->comment, 0, first_comment, 1);
  win_status("");
}

// display_config
// file ../../src/display.c line 1075
static void display_config(struct MWINDOW *win, signed int diff)
{
  win_clear(win);
  static signed int display_config__1__open = 0;
  if(display_config__1__open == 0)
  {
    config_open();
    display_config__1__open = 1;
  }

}

// display_driver
// file ../../src/display.c line 326
static void display_driver(void)
{
  char reverb[13l];
  if(quiet == 0)
  {
    if(!(md_reverb == 0))
      snprintf(reverb, (unsigned long int)12, "reverb: %2d", md_reverb);

    else
      strcpy(reverb, "no reverb");
    snprintf(storage, (unsigned long int)320, "%s: %d bit %s %s, %u Hz, %s", md_driver->Name, ((signed int)md_mode & 0x0001) != 0 ? 16 : 8, ((signed int)md_mode & 0x0200) != 0 ? (((signed int)md_mode & 0x0100) != 0 ? "interp. surround" : "interpolated") : (((signed int)md_mode & 0x0100) != 0 ? "surround" : "normal"), ((signed int)md_mode & 0x0002) != 0 ? "stereo" : "mono", md_mixfreq, (const void *)reverb);
    enlarge(0, storage);
    win_print(root, 0, 1, storage);
  }

}

// display_driver_help
// file ../../src/mikmod.c line 511
static void display_driver_help(signed int drvno)
{
  char *version;
  char *cmdline;
  char *cmdend;
  char *cur;
  driver_get_info(drvno, &version, &cmdline);
  if(version == ((char *)NULL) || drvno == 0)
    exit_player(1, "Bad driver ordinal number: %d\n", drvno);

  printf("Parameter list for %s:\n", version);
  free((void *)version);
  unsigned long int return_value_strlen_2;
  char *tmp_post_3;
  signed int tmp_post_4;
  char *tmp_post_5;
  signed int tmp_post_6;
  char *tmp_post_7;
  if(cmdline == ((char *)NULL))
    printf("    No arguments with this driver\n");

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(cmdline);
    cmdend = cmdline + (signed long int)return_value_strlen_1;
    cur = cmdline;
    while(!(cur >= cmdend))
    {
      char *tmp;
      char *tmp2;
      char *lineend;
      char *values[64l];
      signed int nvalues = 0;
      char valuetype;
      signed int i;
      lineend=strchr(cur, 10);
      if(lineend == ((char *)NULL))
      {
        return_value_strlen_2=strlen(cur);
        lineend = cur + (signed long int)return_value_strlen_2;
      }

      *lineend = (char)0;
      tmp=strchr(cur, 58);
      if(tmp == ((char *)NULL))
        break;

      tmp_post_3 = tmp;
      tmp = tmp + 1l;
      *tmp_post_3 = (char)0;
      valuetype = *tmp;
      tmp=strchr(tmp, 58);
      if(tmp == ((char *)NULL))
        break;

      tmp = tmp + 1l;
      tmp2=strchr(tmp, 58);
      if(tmp2 == ((char *)NULL))
        break;

      if(!((signed int)valuetype == 116))
        while(!(tmp >= tmp2) && !(nvalues >= 64))
        {
          tmp_post_4 = nvalues;
          nvalues = nvalues + 1;
          values[(signed long int)tmp_post_4] = tmp;
          tmp=strchr(tmp, 44);
          if(!(tmp == ((char *)NULL)) && !(tmp >= tmp2))
          {
            tmp_post_5 = tmp;
            tmp = tmp + 1l;
            *tmp_post_5 = (char)0;
          }

          else
            break;
        }

      else
      {
        tmp_post_6 = nvalues;
        nvalues = nvalues + 1;
        values[(signed long int)tmp_post_6] = tmp;
      }
      tmp = tmp2;
      tmp_post_7 = tmp;
      tmp = tmp + 1l;
      *tmp_post_7 = (char)0;
      printf("    %s (%s): %s\n", cur, (signed int)valuetype == 99 ? "choice" : ((signed int)valuetype == 116 ? "text" : ((signed int)valuetype == 114 ? "range" : ((signed int)valuetype == 98 ? "yes/no" : "unknown"))), tmp);
      if((signed int)valuetype == 99 || (signed int)valuetype == 114)
      {
        printf("        %s:", (signed int)valuetype == 99 ? "values" : "range");
        i = 0;
        for( ; !(i >= nvalues + -1); i = i + 1)
          printf(" %s%c", values[(signed long int)i], i < nvalues - 2 ? 44 : 10);
      }

      printf("        default value: %s\n", values[(signed long int)(nvalues - 1)]);
      cur = lineend + (signed long int)1;
    }
    free((void *)cmdline);
  }
}

// display_extractbanner
// file ../../src/display.c line 304
void display_extractbanner(void)
{
  if(quiet == 0)
  {
    win_attrset((enum anonymous_7)ATTR_BANNER);
    display_banner(root, "'||''''|          .                         .   ||               \n ||  .   ... ....||. ... ..  ....    .... .||. ... .. ...   ... .\n ||''|    '|..'  ||   ||' '''' .|| .|   '' ||   ||  ||  || || || \n ||        .|.   ||   ||    .|' || ||      ||   ||  ||  ||  |''  \n.||.....|.|  ||. '|.'.||.   '|..'|' '|...' '|.'.||..||. ||.'||||.\n                                                          .|....'\n", 1, 0, 0);
    win_refresh();
  }

}

// display_file
// file ../../src/display.c line 351
static void display_file(void)
{
  struct anonymous_0 *entry;
  _Bool tmp_if_expr_6;
  unsigned long int return_value_strlen_5;
  if(quiet == 0)
  {
    storage[(signed long int)0] = (char)0;
    entry=PL_GetCurrent(&playlist);
    if(!(entry == ((struct anonymous_0 *)NULL)))
    {
      char *archive = entry->archive;
      char *file;
      if(config.fullpaths == 0 && !(archive == ((char *)NULL)))
      {
        archive=strrchr(entry->archive, 47);
        if(!(archive == ((char *)NULL)))
          archive = archive + 1l;

        else
          archive = entry->archive;
      }

      file=strrchr(entry->file, 47);
      if(config.fullpaths == 0 && !(file == ((char *)NULL)))
        file = file + 1l;

      else
        file = entry->file;
      if(!(archive == ((char *)NULL)))
      {
        return_value_strlen_5=strlen(file);
        tmp_if_expr_6 = return_value_strlen_5 < (unsigned long int)(200 - 13) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_6 = (_Bool)0;
      if(tmp_if_expr_6)
      {
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(archive);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(file);
        if(return_value_strlen_3 + return_value_strlen_4 >= 191ul)
        {
          unsigned long int return_value_strlen_1;
          return_value_strlen_1=strlen(archive);
          unsigned long int return_value_strlen_2;
          return_value_strlen_2=strlen(file);
          archive = archive + (signed long int)(return_value_strlen_1 - ((unsigned long int)(200 - 13) - return_value_strlen_2));
          snprintf(storage, (unsigned long int)320, "File: %s (...%s)", file, archive);
        }

        else
          snprintf(storage, (unsigned long int)320, "File: %s (%s)", file, archive);
      }

      else
        snprintf(storage, (unsigned long int)320, "File: %.70s", file);
    }

    enlarge(0, storage);
    win_print(root, 0, 2, storage);
  }

}

// display_handle_key
// file ../../src/display.c line 1181
static signed int display_handle_key(struct MWINDOW *win, signed int ch)
{
  switch(ch)
  {
    case 0402:
    {
      display_panel(win, 1, (enum anonymous_9)COM_NONE);
      break;
    }
    case 0403:
    {
      display_panel(win, -1, (enum anonymous_9)COM_NONE);
      break;
    }
    case 0405:
      if(!(cur_display == 5))
        return 0;

    case 0522:
    {
      display_panel(win, win->height, (enum anonymous_9)COM_NONE);
      break;
    }
    case 0404:
      if(!(cur_display == 5))
        return 0;

    case 0523:
    {
      display_panel(win, -win->height, (enum anonymous_9)COM_NONE);
      break;
    }
    case 0406:
    {
      display_panel(win, -32000, (enum anonymous_9)COM_NONE);
      break;
    }
    case 0550:
    {
      display_panel(win, 32000, (enum anonymous_9)COM_NONE);
      break;
    }
    case 0527:

    case 13:
    {
      if(cur_display == 5)
        display_panel(win, 0, (enum anonymous_9)MENU_ACTIVATE);

      else
        return 0;
      break;
    }
    default:
      return 0;
  }
  return 1;
}

// display_head_repaint
// file ../../src/display.c line 1155
static signed int display_head_repaint(struct MWINDOW *win)
{
  signed int display_head_repaint__1__cur_panel;
  display_head_repaint__1__cur_panel=win_get_panel();
  if(!(display_head_repaint__1__cur_panel == cur_display))
    old_display = cur_display;

  cur_display = display_head_repaint__1__cur_panel;
  signed int return_value_display_header_1;
  return_value_display_header_1=display_header();
  return return_value_display_header_1;
}

// display_head_resize
// file ../../src/display.c line 1150
static void display_head_resize(struct MWINDOW *win, signed int dx, signed int dy)
{
  setup_printf();
}

// display_header
// file ../../src/display.c line 1128
signed int display_header(void)
{
  if(!(quiet == 0))
    return 1;

  else
  {
    display_version();
    update_message();
    signed int return_value_MP_Paused_1;
    return_value_MP_Paused_1=MP_Paused();
    if(!(return_value_MP_Paused_1 == 0))
    {
      display_pausebanner();
      set_window_title("paused");
    }

    else
    {
      win_attrset((enum anonymous_7)ATTR_SONG_STATUS);
      display_driver();
      display_file();
      display_name();
      display_status();
      display_title();
    }
    signed int return_value_display_information_2;
    return_value_display_information_2=display_information();
    return return_value_display_information_2;
  }
}

// display_help
// file ../../src/display.c line 576
static void display_help(struct MWINDOW *win, signed int diff)
{
  first_help = first_help + diff;
  win_attrset((enum anonymous_7)ATTR_HELP);
  static const char helptext[1065l] = { 'K', 'e', 'y', 's', ' ', 'h', 'e', 'l', 'p', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '(', 'd', 'e', 'p', 'e', 'n', 'd', 'i', 'n', 'g', ' ', 'o', 'n', ' ', 'y', 'o', 'u', 'r', ' ', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', 'a', 'n', 'd', ' ', 'y', 'o', 'u', 'r', ' ', 'c', 'u', 'r', 's', 'e', 's', ' ', 'l', 'i', 'b', 'r', 'a', 'r', 'y', ',', '\n', '=', '=', '=', '=', '=', '=', '=', '=', '=', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'o', 'm', 'e', ' ', 'o', 'f', ' ', 't', 'h', 'e', 's', 'e', ' ', 'k', 'e', 'y', 's', ' ', 'm', 'i', 'g', 'h', 't', ' ', 'n', 'o', 't', ' ', 'b', 'e', ' ', 'r', 'e', 'c', 'o', 'g', 'n', 'i', 'z', 'e', 'd', ')', '\n', '\n', 'H', '/', 'F', '1', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'h', 'o', 'w', ' ', 'h', 'e', 'l', 'p', ' ', 'p', 'a', 'n', 'e', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '(', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'd', 'e', 'c', 'r', 'e', 'a', 's', 'e', '/', 'i', 'n', 'c', 'r', 'e', 'a', 's', 'e', ' ', 't', 'e', 'm', 'p', 'o', '\n', 'S', '/', 'F', '2', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'h', 'o', 'w', ' ', 's', 'a', 'm', 'p', 'l', 'e', 's', ' ', 'p', 'a', 'n', 'e', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '{', '}', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'd', 'e', 'c', 'r', 'e', 'a', 's', 'e', '/', 'i', 'n', 'c', 'r', 'e', 'a', 's', 'e', ' ', 'b', 'p', 'm', '\n', 'I', '/', 'F', '3', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'h', 'o', 'w', ' ', 'i', 'n', 's', 't', 'r', 'u', 'm', 'e', 'n', 't', ' ', 'p', 'a', 'n', 'e', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', '/', ';', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 't', 'o', 'g', 'g', 'l', 'e', ' ', 'i', 'n', 't', 'e', 'r', 'p', 'o', 'l', 'a', 't', 'i', 'o', 'n', '\n', 'M', '/', 'F', '4', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'h', 'o', 'w', ' ', 'm', 'e', 's', 's', 'a', 'g', 'e', ' ', 'p', 'a', 'n', 'e', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'U', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 't', 'o', 'g', 'g', 'l', 'e', ' ', 's', 'u', 'r', 'r', 'o', 'u', 'n', 'd', ' ', 's', 'o', 'u', 'n', 'd', '\n', 'L', '/', 'F', '5', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'h', 'o', 'w', ' ', 'l', 'i', 's', 't', ' ', 'p', 'a', 'n', 'e', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '.', '.', '0', ' ', ' ', ' ', ' ', ' ', ' ', 'v', 'o', 'l', 'u', 'm', 'e', ' ', '1', '0', '%', '.', '.', '1', '0', '0', '%', '\n', 'C', '/', 'F', '6', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'h', 'o', 'w', ' ', 'c', 'o', 'n', 'f', 'i', 'g', ' ', 'p', 'a', 'n', 'e', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'd', 'e', 'c', 'r', 'e', 'a', 's', 'e', '/', 'i', 'n', 'c', 'r', 'e', 'a', 's', 'e', ' ', 'v', 'o', 'l', 'u', 'm', 'e', '\n', 'V', '/', 'F', '7', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'h', 'o', 'w', ' ', 'v', 'o', 'l', 'u', 'm', 'e', ' ', 'b', 'a', 'r', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'w', 'i', 't', 'c', 'h', ' ', 't', 'o', ' ', 'p', 'r', 'e', 'v', 'i', 'o', 'u', 's', ' ', 'm', 'o', 'd', 'u', 'l', 'e', '\n', 'E', 'N', 'T', 'E', 'R', ' ', ' ', ' ', ' ', ' ', 'i', 'n', ' ', 'l', 'i', 's', 't', ' ', 'p', 'a', 'n', 'e', 'l', ',', ' ', 'a', 'c', 't', 'i', 'v', 'a', 't', 'e', ' ', 'm', 'e', 'n', 'u', ' ', ' ', 'N', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 's', 'w', 'i', 't', 'c', 'h', ' ', 't', 'o', ' ', 'n', 'e', 'x', 't', ' ', 'm', 'o', 'd', 'u', 'l', 'e', '\n', 'L', 'e', 'f', 't', '/', '-', ' ', ' ', ' ', ' ', 'p', 'r', 'e', 'v', 'i', 'o', 'u', 's', ' ', 'p', 'a', 't', 't', 'e', 'r', 'n', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'r', 'e', 's', 't', 'a', 'r', 't', ' ', 'm', 'o', 'd', 'u', 'l', 'e', '\n', 'R', 'i', 'g', 'h', 't', '/', '+', ' ', ' ', ' ', 'n', 'e', 'x', 't', ' ', 'p', 'a', 't', 't', 'e', 'r', 'n', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'p', 'a', 'c', 'e', ' ', ' ', ' ', ' ', ' ', 't', 'o', 'g', 'g', 'l', 'e', ' ', 'p', 'a', 'u', 's', 'e', '\n', 'U', 'p', '/', 'D', 'o', 'w', 'n', ' ', ' ', ' ', 's', 'c', 'r', 'o', 'l', 'l', ' ', 'p', 'a', 'n', 'e', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '^', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'r', 'e', 'f', 'r', 'e', 's', 'h', ' ', 's', 'c', 'r', 'e', 'e', 'n', '\n', 'P', 'g', 'U', 'p', '/', 'P', 'g', 'D', 'n', ' ', 's', 'c', 'r', 'o', 'l', 'l', ' ', 'p', 'a', 'n', 'e', 'l', ' ', '(', 'f', 'a', 's', 't', 'e', 'r', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 't', 'o', 'g', 'g', 'l', 'e', ' ', 'f', 'a', 'k', 'e', '/', 'r', 'e', 'a', 'l', ' ', 'v', 'o', 'l', 'u', 'm', 'e', ' ', 'b', 'a', 'r', 's', '\n', 'H', 'o', 'm', 'e', '/', 'E', 'n', 'd', ' ', ' ', 's', 't', 'a', 'r', 't', '/', 'e', 'n', 'd', ' ', 'o', 'f', ' ', 'p', 'a', 'n', 'e', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'e', 'x', 'i', 't', ' ', 'M', 'i', 'k', 'M', 'o', 'd', '\n', 0 };
  first_help=display_banner(win, helptext, 0, first_help, 0);
  win_status("");
}

// display_information
// file ../../src/display.c line 484
static signed int display_information(void)
{
  char paneltitle[320l];
  signed int change = 0;
  signed int i;
  enum anonymous_7 attr;
  char *tmp;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  const unsigned short int **return_value___ctype_b_loc_13;
  const unsigned short int **return_value___ctype_b_loc_12;
  if(!(quiet == 0))
    return 1;

  else
  {
    if(mf == ((struct MODULE *)NULL) && (cur_display == 2 || cur_display == 3 || cur_display == 4 || cur_display == 7))
    {
      cur_display = 5;
      change = 1;
    }

    while((_Bool)1)
    {
      if(cur_display == 3)
        tmp_if_expr_1 = !(((signed int)mf->flags & 0x0004) != 0) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        if(cur_display == 4)
          tmp_if_expr_2 = !(mf->comment != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_3)
      {
        cur_display = cur_display == old_display ? 2 : old_display;
        change = 1;
      }

      else
        break;
    }
    if(!(change == 0))
    {
      win_change_panel(cur_display);
      return 0;
    }

    else
    {
      paneltitle[(signed long int)0] = (char)0;
      i = 1;
      for( ; !(i >= 8); i = i + 1)
      {
        if(mf == ((struct MODULE *)NULL) && i == 2)
          tmp_if_expr_6 = (_Bool)1;

        else
        {
          if(i == 3)
          {
            if(mf == ((struct MODULE *)NULL))
              tmp_if_expr_4 = (_Bool)1;

            else
              tmp_if_expr_4 = !(((signed int)mf->flags & 0x0004) != 0) ? (_Bool)1 : (_Bool)0;
            tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_5 = (_Bool)0;
          tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_6)
          tmp_if_expr_9 = (_Bool)1;

        else
        {
          if(i == 4)
          {
            if(mf == ((struct MODULE *)NULL))
              tmp_if_expr_7 = (_Bool)1;

            else
              tmp_if_expr_7 = !(mf->comment != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
            tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_8 = (_Bool)0;
          tmp_if_expr_9 = tmp_if_expr_8 ? (_Bool)1 : (_Bool)0;
        }
        if((!(mf == ((struct MODULE *)NULL)) || !(i == 7)) && !tmp_if_expr_9)
        {
          unsigned long int return_value_strlen_10;
          return_value_strlen_10=strlen(paneltitle);
          static const char *panel_name[7l] = { "Help", "Samples", "Instruments", "Message", "playList", "Configuration", "Volume" };
          snprintf(paneltitle + (signed long int)return_value_strlen_10, (unsigned long int)320, "%c%s%c", i == cur_display ? 91 : 32, panel_name[(signed long int)(i - 1)], i == cur_display ? 93 : 32);
        }

      }
      enlarge(0, paneltitle);
      unsigned long int return_value_strlen_11;
      return_value_strlen_11=strlen(paneltitle);
      tmp = paneltitle + (signed long int)return_value_strlen_11;
      attr = (enum anonymous_7)ATTR_INFO_INACTIVE;
      do
      {
        tmp = tmp - 1l;
        if(!(tmp >= paneltitle))
          break;

        enum anonymous_7 newattr = attr;
        if((signed int)*tmp == 93)
          newattr = (enum anonymous_7)ATTR_INFO_ACTIVE;

        else
          if((signed int)tmp[1l] == 91)
            newattr = (enum anonymous_7)ATTR_INFO_INACTIVE;

          else
          {
            return_value___ctype_b_loc_13=__ctype_b_loc();
            if(!((256 & (signed int)(*return_value___ctype_b_loc_13)[(signed long int)(signed int)*tmp]) == 0))
              newattr = (enum anonymous_7)((signed int)attr == ATTR_INFO_ACTIVE ? ATTR_INFO_AHOTKEY : ((signed int)attr == ATTR_INFO_INACTIVE ? ATTR_INFO_IHOTKEY : (signed int)newattr));

            else
            {
              return_value___ctype_b_loc_12=__ctype_b_loc();
              if(!((256 & (signed int)(*return_value___ctype_b_loc_12)[(signed long int)(signed int)tmp[1l]]) == 0))
                newattr = (enum anonymous_7)((signed int)attr == ATTR_INFO_AHOTKEY ? ATTR_INFO_ACTIVE : ((signed int)attr == ATTR_INFO_IHOTKEY ? ATTR_INFO_INACTIVE : (signed int)newattr));

            }
          }
        if(!(newattr == attr))
        {
          if(!(tmp[1l] == 0))
          {
            win_attrset(attr);
            win_print(root, (signed int)((tmp - paneltitle) + (signed long int)1), 6, tmp + (signed long int)1);
            tmp[(signed long int)1] = (char)0;
          }

        }

        attr = newattr;
      }
      while((_Bool)1);
      win_attrset(attr);
      win_print(root, 0, 6, paneltitle);
      return 1;
    }
  }
}

// display_init
// file ../../src/display.c line 1226
void display_init(void)
{
  signed int i;
  root=win_get_window_root();
  win_panel_set_repaint(0, display_head_repaint);
  win_panel_set_resize(0, 1, display_head_resize);
  i = 1;
  for( ; !(i >= 8); i = i + 1)
  {
    static enum anonymous_7 attrs[7l] = { (enum anonymous_7)ATTR_HELP, (enum anonymous_7)ATTR_SAMPLES, (enum anonymous_7)ATTR_SAMPLES, (enum anonymous_7)ATTR_HELP, (enum anonymous_7)ATTR_PLAYENTRY_INACTIVE,
    (enum anonymous_7)ATTR_CONFIG, (enum anonymous_7)ATTR_VOLBAR };
    win_panel_open(i, 0, 7, 999, 999, 0, (const char *)(void *)0, attrs[(signed long int)(i - 1)]);
    win_panel_set_repaint(i, display_panel_repaint);
    win_panel_set_handle_key(i, display_handle_key);
    win_panel_set_resize(i, 1, (void (*)(struct MWINDOW *, signed int, signed int))(void *)0);
  }
  win_change_panel(cur_display);
  setup_printf();
}

// display_inst
// file ../../src/display.c line 752
static void display_inst(struct MWINDOW *win, signed int diff)
{
  signed int count;
  signed int semicount;
  signed int t;
  signed int display_inst__1__winx;
  updatefirst(win, &first_inst, &display_inst__1__winx, &count, &semicount, diff, (signed int)mf->numins);
  win_clear(win);
  t = first_inst;
  char *tmp_if_expr_1;
  for( ; !(t >= count + first_inst) && !(t >= (signed int)mf->numins); t = t + 1)
  {
    signed int x = t - first_inst < semicount ? 0 : halfwidth;
    if(!(x >= display_inst__1__winx))
    {
      if(!((mf->instruments + (signed long int)t)->insname == ((char *)NULL)))
        tmp_if_expr_1 = (mf->instruments + (signed long int)t)->insname;

      else
        tmp_if_expr_1 = "";
      snprintf(storage, (unsigned long int)320, fmt_halfwidth, t, tmp_if_expr_1);
      convert_string(storage);
      win_print(win, x, (t - first_inst) % semicount, storage);
    }

  }
  if((signed int)mf->numins == 1)
    win_status("1 Instrument");

  else
  {
    snprintf(storage, (unsigned long int)320, "%d Instruments", mf->numins);
    win_status(storage);
  }
}

// display_list
// file ../../src/display.c line 1000
static void display_list(struct MWINDOW *win, signed int diff, enum anonymous_9 com)
{
  signed int count;
  signed int semicount;
  signed int playcount;
  signed int t;
  signed int display_list__1__winx;
  signed int x;
  signed int width;
  struct anonymous_0 *cur;
  playcount=PL_GetLength(&playlist);
  static signed int actLine = -1;
  if(actLine >= playcount)
    actLine = playcount - 1;

  struct anonymous_0 *return_value_PL_GetEntry_1;
  if((signed int)com == MENU_ACTIVATE)
    list_open(&actLine);

  else
  {
    win_clear(win);
    if(!(playcount == 0))
    {
      win_get_size(win, &display_list__1__winx, &semicount);
      if(!(semicount >= 0))
        semicount = 0;

      if(!(display_list__1__winx >= 10))
      {
        count = semicount;
        width = display_list__1__winx;
      }

      else
      {
        count = semicount * 2;
        width = display_list__1__winx >> 1;
      }
      cur=PL_GetCurrent(&playlist);
      if(!(actLine >= 0))
      {
        actLine=PL_GetCurrentPos(&playlist);
        first_list = actLine - semicount / 2;
        if(!(first_list >= 0))
          first_list = 0;

      }

      actLine = actLine + diff;
      if(!(actLine >= 0))
        actLine = 0;

      else
        if(actLine >= playcount)
          actLine = playcount - 1;

      if(!(actLine >= first_list))
        first_list = actLine;

      else
        if(actLine >= count + first_list)
          first_list = (actLine - count) + 1;

      t = first_list;
      for( ; !(t >= count + first_list) && !(t >= playcount); t = t + 1)
      {
        x = t - first_list < semicount ? 0 : width;
        if(!(x >= display_list__1__winx))
        {
          return_value_PL_GetEntry_1=PL_GetEntry(&playlist, t);
          display_playentry(win, return_value_PL_GetEntry_1, cur, t, (t - first_list) % semicount, x, (signed int)(actLine == t), width);
        }

      }
    }

    else
    {
      first_list = first_list + diff;
      static const char *no_data = "\nPlaylist is empty!\n";
      first_list=display_banner(win, no_data, 0, first_list, 1);
    }
    switch(playcount)
    {
      case 0:
      {
        win_status("Press enter to open playlist menu");
        break;
      }
      case 1:
      {
        win_status("1 Module");
        break;
      }
      default:
      {
        snprintf(storage, (unsigned long int)320, "%d Modules", playcount);
        win_status(storage);
      }
    }
  }
}

// display_loadbanner
// file ../../src/display.c line 315
void display_loadbanner(void)
{
  if(quiet == 0)
  {
    win_attrset((enum anonymous_7)ATTR_BANNER);
    display_banner(root, "'||'                          '||   ||                 \n ||         ...    ....     .. ||  ...  .. ...    ... .\n ||       .|  '|. '' .||  .'  '||   ||   ||  ||  || || \n ||       ||   || .|' ||  |.   ||   ||   ||  ||   |''  \n.||.....|  '|..|' '|..'|' '|..'||. .||. .||. || .'||||.\n                                                .|....'\n", 1, 0, 0);
    win_refresh();
  }

}

// display_message
// file ../../src/display.c line 179
void display_message(char *str)
{
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(str);
  len = (signed int)(return_value_strlen_1 + (unsigned long int)1);
  if(quiet == 0)
  {
    if(len >= 321)
      len = 320;

    old_message[(signed long int)0] = (char)32;
    strncpy(&old_message[(signed long int)1], str, (unsigned long int)(len - 1));
    old_message[(signed long int)len] = (char)0;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen("-= MikMod 3.2.7 =-");
    enlarge((signed int)return_value_strlen_2, old_message);
    win_attrset((enum anonymous_7)ATTR_WARNING);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen("-= MikMod 3.2.7 =-");
    win_print(root, (signed int)return_value_strlen_3, 0, str);
    remove_msg = 1;
    start_time=time((signed long int *)(void *)0);
  }

}

// display_name
// file ../../src/display.c line 392
static void display_name(void)
{
  if(!(mf == ((struct MODULE *)NULL)) && quiet == 0)
  {
    snprintf(storage, (unsigned long int)320, "Name: %.70s", mf->songname);
    enlarge(0, storage);
    win_print(root, 0, 3, storage);
    snprintf(storage, (unsigned long int)320, "Type: %s, Periods: %s, %s", mf->modtype, ((signed int)mf->flags & 0x0001) != 0 ? "XM type" : "mod type", ((signed int)mf->flags & 0x0002) != 0 ? "linear" : "log");
    enlarge(0, storage);
    win_print(root, 0, 4, storage);
  }

}

// display_panel
// file ../../src/display.c line 1087
static void display_panel(struct MWINDOW *win, signed int diff, enum anonymous_9 com)
{
  dynamic_repaint = (void (*)(struct MWINDOW *))(void *)0;
  dynamic_repaint_win = win;
  switch(cur_display)
  {
    case 1:
    {
      display_help(win, diff);
      break;
    }
    case 2:
    {
      dynamic_repaint = dynamic_display_sample;
      display_sample(win, diff);
      break;
    }
    case 3:
    {
      dynamic_repaint = dynamic_display_inst;
      display_inst(win, diff);
      break;
    }
    case 4:
    {
      display_comment(win, diff);
      break;
    }
    case 5:
    {
      display_list(win, diff, com);
      break;
    }
    case 6:
    {
      display_config(win, diff);
      break;
    }
    case 7:
    {
      dynamic_repaint = dynamic_display_volbars;
      display_volbars(win, diff);
    }
  }
}

// display_panel_repaint
// file ../../src/display.c line 1165
static signed int display_panel_repaint(struct MWINDOW *win)
{
  display_panel(win, 0, (enum anonymous_9)COM_NONE);
  return 1;
}

// display_pausebanner
// file ../../src/display.c line 294
void display_pausebanner(void)
{
  if(quiet == 0)
  {
    win_attrset((enum anonymous_7)ATTR_BANNER);
    display_banner(root, "'||''|.    |   '||'  '|' .|'''.| '||''''| '||''|.  \n ||   ||  |||   ||    |  ||..  '  ||  .    ||   || \n ||...|' |  ||  ||    |   ''|||.  ||''|    ||    ||\n ||     .''''|. ||    | .     '|| ||       ||    ||\n.||.   .|.  .||. '|..'  |'....|' .||.....|.||...|' \n", 1, 0, 0);
  }

}

// display_playentry
// file ../../src/display.c line 936
static void display_playentry(struct MWINDOW *win, struct anonymous_0 *pos, struct anonymous_0 *cur, signed int nr, signed int y, signed int x, signed int reverse, signed int width)
{
  char *name;
  char sort;
  char display_playentry__1__time[8l] = { 0, 0, 0, 0, 0, 0, 0, 0 };
  char tmpfmt[30l];
  signed int timelen = 0;
  if(pos->time >= 1)
  {
    snprintf(display_playentry__1__time, (unsigned long int)7, " %2d:%02d", (signed int)((pos->time / 60) % 60), (signed int)(pos->time % 60));
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(display_playentry__1__time);
    timelen = (signed int)return_value_strlen_1;
  }

  name=strrchr(pos->file, 47);
  if(config.fullpaths == 0 && !(name == ((char *)NULL)))
    name = name + 1l;

  else
    name = pos->file;
  if(pos == cur)
    sort = (char)62;

  else
    if(!(pos->played == 0))
      sort = (char)42;

    else
      sort = (char)32;
  unsigned long int return_value_strlen_5;
  if(!(pos->archive == ((char *)NULL)))
  {
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(name);
    if(!((unsigned long int)(width + -13 + -timelen) >= return_value_strlen_3))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(name);
      name = (name + (signed long int)return_value_strlen_2) - (signed long int)((width - 16) - timelen);
      if(!(timelen == 0))
      {
        sprintf(tmpfmt, "%%4i %%c...%%-%ds%%s(pack)", width - 22);
        snprintf(storage, (unsigned long int)320, tmpfmt, nr, sort, name, (const void *)display_playentry__1__time);
      }

      else
      {
        sprintf(tmpfmt, "%%4i %%c...%%-%ds(pack)", width - 16);
        snprintf(storage, (unsigned long int)320, tmpfmt, nr, sort, name);
      }
    }

    else
      if(!(timelen == 0))
      {
        sprintf(tmpfmt, "%%4i %%c%%-%ds%%s(pack)", width - 19);
        snprintf(storage, (unsigned long int)320, tmpfmt, nr, sort, name, (const void *)display_playentry__1__time);
      }

      else
      {
        sprintf(tmpfmt, "%%4i %%c%%-%ds(pack)", width - 13);
        snprintf(storage, (unsigned long int)320, tmpfmt, nr, sort, name);
      }
  }

  else
  {
    return_value_strlen_5=strlen(name);
    if(!((unsigned long int)(width + -7 + -timelen) >= return_value_strlen_5))
    {
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(name);
      name = (name + (signed long int)return_value_strlen_4) - (signed long int)((width - 10) - timelen);
      if(!(timelen == 0))
      {
        sprintf(tmpfmt, "%%4i %%c...%%-%ds%%s", width - 16);
        snprintf(storage, (unsigned long int)320, tmpfmt, nr, sort, name, (const void *)display_playentry__1__time);
      }

      else
      {
        sprintf(tmpfmt, "%%4i %%c...%%-%ds", width - 10);
        snprintf(storage, (unsigned long int)320, tmpfmt, nr, sort, name);
      }
    }

    else
      if(!(timelen == 0))
      {
        sprintf(tmpfmt, "%%4i %%c%%-%ds%%s", width - 13);
        snprintf(storage, (unsigned long int)320, tmpfmt, nr, sort, name, (const void *)display_playentry__1__time);
      }

      else
      {
        sprintf(tmpfmt, "%%4i %%c%%-%ds", width - 7);
        snprintf(storage, (unsigned long int)320, tmpfmt, nr, sort, name);
      }
  }
  win_attrset((enum anonymous_7)(reverse != 0 ? ATTR_PLAYENTRY_ACTIVE : ATTR_PLAYENTRY_INACTIVE));
  win_print(win, x, y, storage);
}

// display_sample
// file ../../src/display.c line 681
static void display_sample(struct MWINDOW *win, signed int diff)
{
  signed int count;
  signed int semicount;
  signed int t;
  signed int display_sample__1__winx;
  updatefirst(win, &first_sample, &display_sample__1__winx, &count, &semicount, diff, (signed int)mf->numsmp);
  win_clear(win);
  t = first_sample;
  char *tmp_if_expr_1;
  for( ; !(t >= count + first_sample) && !(t >= (signed int)mf->numsmp); t = t + 1)
  {
    signed int x = t - first_sample < semicount ? 0 : halfwidth;
    if(!(x >= display_sample__1__winx))
    {
      if(!((mf->samples + (signed long int)t)->samplename == ((char *)NULL)))
        tmp_if_expr_1 = (mf->samples + (signed long int)t)->samplename;

      else
        tmp_if_expr_1 = "";
      snprintf(storage, (unsigned long int)320, fmt_halfwidth, t, tmp_if_expr_1);
      convert_string(storage);
      win_print(win, x, (t - first_sample) % semicount, storage);
    }

  }
  if((signed int)mf->numsmp == 1)
    win_status("1 Sample");

  else
  {
    snprintf(storage, (unsigned long int)320, "%d Samples", mf->numsmp);
    win_status(storage);
  }
}

// display_start
// file ../../src/display.c line 1171
void display_start(void)
{
  if(quiet == 0)
  {
    first_comment = 0;
    first_sample = first_comment;
    first_inst = first_sample;
    win_panel_repaint();
  }

}

// display_status
// file ../../src/display.c line 411
void display_status(void)
{
  signed int i;
  unsigned long int cur_time;
  if(quiet == 0)
  {
    remove_message();
    signed int return_value_MP_Paused_1;
    return_value_MP_Paused_1=MP_Paused();
    if(!(mf == ((struct MODULE *)NULL)) && return_value_MP_Paused_1 == 0)
    {
      win_attrset((enum anonymous_7)ATTR_SONG_STATUS);
      if(!((signed int)mf->sngpos >= (signed int)mf->numpos))
      {
        struct anonymous_0 *cur;
        cur=PL_GetCurrent(&playlist);
        char display_status__1__1__time[7l] = { 0, 0, 0, 0, 0, 0, 0 };
        char channels[17l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        if(!(cur == ((struct anonymous_0 *)NULL)))
        {
          if(cur->time >= 1)
            snprintf(display_status__1__1__time, (unsigned long int)7, "/%2d:%02d", (signed int)((cur->time / 60) % 60), (signed int)(cur->time % 60));

        }

        if(!((0x0008 & (signed int)mf->flags) == 0))
          snprintf(channels, (unsigned long int)17, "%2d/%d+%d->%d", mf->realchn, mf->numchn, (signed int)mf->totalchn - (signed int)mf->realchn, mf->totalchn);

        else
          snprintf(channels, (unsigned long int)17, "%2d/%d      ", mf->realchn, mf->numchn);
        snprintf(storage, (unsigned long int)320, "pat:%03d/%03d pos:%2.2X spd:%2d/%3d vol:%3d%%/%3d%% time:%2d:%02d%s chn:%s", mf->sngpos, (signed int)mf->numpos - 1, mf->patpos, mf->sngspd, mf->bpm, (signed int)mf->volume * 100 + 127 >> 7, (signed int)md_volume * 100 + 127 >> 7, (signed int)(((mf->sngtime >> 10) / (unsigned int)60) % (unsigned int)60), (signed int)((mf->sngtime >> 10) % (unsigned int)60), (const void *)display_status__1__1__time, (const void *)channels);
        enlarge(0, storage);
        win_print(root, 0, 5, storage);
      }

      if(!(config.fakevolbars == 0))
      {
        static struct anonymous_6 data;
        MP_GetData(&data);
        cur_time=Time1000();
        i = 0;
        for( ; !(i >= (signed int)mf->numchn); i = i + 1)
        {
          unsigned int delta = (unsigned int)((cur_time - playdata.vstatus[(signed long int)i].time) / (unsigned long int)10);
          if(delta >= 1u)
            playdata.vstatus[(signed long int)i].time = cur_time;

          if(!(delta >= (unsigned int)playdata.vstatus[(signed long int)i].volamp))
            playdata.vstatus[(signed long int)i].volamp = playdata.vstatus[(signed long int)i].volamp - (unsigned char)delta;

          else
            playdata.vstatus[(signed long int)i].volamp = (unsigned char)0;
        }
        i = 0;
        for( ; !(i >= (signed int)mf->numchn); i = i + 1)
        {
          playdata.vinfo[(signed long int)i] = data.vinfo[(signed long int)i];
          if(!(playdata.vinfo[(signed long int)i].kick == 0))
            playdata.vstatus[(signed long int)i].volamp = (unsigned char)playdata.vinfo[(signed long int)i].volume;

        }
      }

      else
        MP_GetData(&playdata);
      if(!(dynamic_repaint == ((void (*)(struct MWINDOW *))NULL)))
        dynamic_repaint(dynamic_repaint_win);

    }

  }

}

// display_title
// file ../../src/display.c line 1251
static void display_title(void)
{
  char *file;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(mf == ((struct MODULE *)NULL)))
  {
    if(mf->songname == ((char *)NULL))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      return_value_strlen_1=strlen(mf->songname);
      tmp_if_expr_2 = return_value_strlen_1 == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
    {
      struct anonymous_0 *entry = (struct anonymous_0 *)(void *)0;
      entry=PL_GetCurrent(&playlist);
      if(!(entry == ((struct anonymous_0 *)NULL)))
      {
        file = entry->file;
        if(config.fullpaths == 0)
        {
          file=strrchr(entry->file, 47);
          if(!(file == ((char *)NULL)))
            file = file + 1l;

          else
            file = entry->file;
        }

        set_window_title(file);
      }

      goto __CPROVER_DUMP_L8;
    }

    set_window_title(mf->songname);
  }


__CPROVER_DUMP_L8:
  ;
}

// display_version
// file ../../src/display.c line 162
static void display_version(void)
{
  if(quiet == 0)
  {
    strcpy(storage, "-= MikMod 3.2.7 =-");
    enlarge(0, storage);
    win_attrset((enum anonymous_7)ATTR_TITLE);
    win_print(root, 0, 0, storage);
  }

}

// display_volbars
// file ../../src/display.c line 917
static void display_volbars(struct MWINDOW *win, signed int diff)
{
  signed int count;
  signed int t;
  signed int display_volbars__1__winx;
  updatefirst(win, &first_volbar, &display_volbars__1__winx, &count, (signed int *)(void *)0, diff, (signed int)mf->numchn);
  win_clear(win);
  t = first_volbar;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(t >= count + first_volbar))
      tmp_if_expr_1 = t < (signed int)mf->numchn ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    if((signed int)mf->numchn >= 101)
      snprintf(storage, (unsigned long int)320, "[%3d]", t);

    else
      snprintf(storage, (unsigned long int)320, "[%2d]", t);
    win_print(win, 0, t - first_volbar, storage);
    t = t + 1;
  }
  while((_Bool)1);
  dynamic_display_volbars(win);
}

// dlg_error_show
// file ../../src/mdialog.c line 113
void dlg_error_show(const char *txt, ...)
{
  void **args;
  char *err = (char *)(void *)0;
  signed int len;
  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  if(!(*return_value___errno_location_2 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    err=strerror(*return_value___errno_location_1);
  }

  args = (void **)&txt;
  vsnprintf(storage, (unsigned long int)320, txt, args);
  args = ((void **)NULL);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(storage);
  len = (signed int)return_value_strlen_3;
  if(!(err == ((char *)NULL)) && !(len >= 320))
  {
    if(!(*err == 0))
    {
      strncat(storage, "\n", (unsigned long int)(320 - len));
      strncat(storage, err, (unsigned long int)((320 - len) - 1));
    }

  }

  dlg_message_open(storage, "&Ok", 0, 1, (signed int (*)(struct WIDGET *, signed int, void *, void *))(void *)0, (void *)0);
}

// dlg_input_int
// file ../../src/mdialog.h line 69
void dlg_input_int(const char *msg, const char *buttons, signed int value, signed int min, signed int max, signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *), void *data)
{
  char title[40l];
  struct WIDGET *w;
  struct WIDGET *int_wid;
  struct anonymous_19 *dlg_data;
  struct anonymous_17 *d;
  d=dialog_new();
  if(!(msg == ((const char *)NULL)))
    wid_label_add(d, 1, msg);

  sprintf(title, "%d", max);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(title);
  int_wid=wid_int_add(d, 1, value, (signed int)return_value_strlen_1);
  w=wid_button_add(d, 2, buttons, 0);
  dlg_data=init_dlg_data(handle_dlg, int_wid, (void *)((struct anonymous_12 *)int_wid)->input, data);
  dlg_data->min = min;
  dlg_data->max = max;
  wid_set_func(int_wid, (signed int (*)(struct WIDGET *, signed int))(void *)0, handle_focus_link1, (void *)dlg_data);
  wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, handle_focus_link1, (void *)dlg_data);
  sprintf(title, "Enter value(%d - %d)", min, max);
  dialog_open(d, title);
}

// dlg_input_str
// file ../../src/mdialog.h line 61
void dlg_input_str(const char *msg, const char *buttons, const char *str, signed int length, signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *), void *data)
{
  struct WIDGET *w;
  struct WIDGET *str_wid;
  struct anonymous_19 *dlg_data;
  struct anonymous_17 *d;
  d=dialog_new();
  if(!(msg == ((const char *)NULL)))
    wid_label_add(d, 1, msg);

  str_wid=wid_str_add(d, 1, str, length);
  w=wid_button_add(d, 2, buttons, 0);
  dlg_data=init_dlg_data(handle_dlg, str_wid, (void *)((struct anonymous_12 *)str_wid)->input, data);
  wid_set_func(str_wid, (signed int (*)(struct WIDGET *, signed int))(void *)0, handle_focus_link1, (void *)dlg_data);
  wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, handle_focus_link1, (void *)dlg_data);
  dialog_open(d, "Enter string");
}

// dlg_message_open
// file ../../src/mdialog.h line 49
void dlg_message_open(const char *msg, const char *button, signed int active, signed int warn, signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *), void *data)
{
  struct WIDGET *w;
  struct anonymous_17 *d;
  d=dialog_new();
  if(!(warn == 0))
    dialog_set_attr(d, (enum anonymous_7)ATTR_WARNING);

  wid_label_add(d, 1, msg);
  w=wid_button_add(d, 2, button, active);
  struct anonymous_19 *return_value_init_dlg_data_1;
  if(!(handle_dlg == ((signed int (*)(struct WIDGET *, signed int, void *, void *))NULL)))
  {
    return_value_init_dlg_data_1=init_dlg_data(handle_dlg, w, (void *)0, data);
    wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, handle_focus_link1, (void *)return_value_init_dlg_data_1);
  }

  dialog_open(d, "Message");
}

// do_update
// file ../../src/mplayer.c line 58
static void do_update(void)
{
  signed int i;
  unsigned long int cur_time;
  signed int locked = 0;
  MikMod_Update();
  if((signed int)updater_mode == MTH_RUNNING)
  {
    pthread_mutex_lock(&_mm_mutex_data);
    locked = 1;
  }

  if(volume >= 0)
  {
    Player_SetVolume((signed short int)volume);
    volume = -1;
  }

  paused=Player_Paused();
  active=Player_Active();
  if(!(mf == ((struct MODULE *)NULL)))
  {
    if(config.fakevolbars == 0)
    {
      cur_time=Time1000();
      i = 0;
      for( ; !(i >= (signed int)mf->numchn); i = i + 1)
      {
        playdata_link1.vstatus[(signed long int)i].time = cur_time;
        signed int return_value_Player_GetChannelVoice_1;
        return_value_Player_GetChannelVoice_1=Player_GetChannelVoice((unsigned char)i);
        unsigned int return_value_Voice_RealVolume_2;
        return_value_Voice_RealVolume_2=Voice_RealVolume((signed char)return_value_Player_GetChannelVoice_1);
        playdata_link1.vstatus[(signed long int)i].volamp = (unsigned char)(return_value_Voice_RealVolume_2 * (unsigned int)playdata_link1.vinfo[(signed long int)i].volume >> 16);
      }
    }

    Player_QueryVoices((unsigned short int)mf->numchn, playdata_link1.vinfo);
  }

  if(!(locked == 0))
    pthread_mutex_unlock(&_mm_mutex_data);

}

// driver_get_info
// file ../../src/mutilities.h line 233
signed int driver_get_info(signed int drvno, char **version, char **cmdline)
{
  struct MDRIVER *driver;
  driver=MikMod_DriverByOrdinal(drvno);
  if(!(version == ((char **)NULL)))
    *version = (char *)(void *)0;

  if(!(cmdline == ((char **)NULL)))
    *cmdline = (char *)(void *)0;

  if(driver == ((struct MDRIVER *)NULL) || !(drvno >= 1))
    return 0;

  else
  {
    if(!(driver->Version == ((const char *)NULL)))
    {
      if(!(version == ((char **)NULL)))
        *version=strdup(driver->Version);

    }

    if(!(driver->CmdLineHelp == ((const char *)NULL)))
    {
      if(!(cmdline == ((char **)NULL)))
        *cmdline=strdup(driver->CmdLineHelp);

    }

    return 1;
  }
}

// dynamic_display_inst
// file ../../src/display.c line 778
static void dynamic_display_inst(struct MWINDOW *win)
{
  signed int count;
  signed int semicount;
  signed int t;
  signed int dynamic_display_inst__1__winx;
  signed int voice;
  signed int vol;
  signed int chancount;
  char sampchar[2l];
  if(cur_display == 3)
  {
    sampchar[(signed long int)1] = (char)0;
    updatefirst(win, &first_inst, &dynamic_display_inst__1__winx, &count, &semicount, 0, (signed int)mf->numins);
    t = first_inst;
    for( ; !(t >= count + first_inst) && !(t >= (signed int)mf->numins); t = t + 1)
    {
      signed int x = t - first_inst < semicount ? 0 : halfwidth;
      sampchar[(signed long int)0] = (char)32;
      if(!(x >= dynamic_display_inst__1__winx))
      {
        chancount = 0;
        vol = chancount;
        voice = 0;
        for( ; !(voice >= (signed int)mf->numchn); voice = voice + 1)
          if(playdata.vinfo[(signed long int)voice].i == mf->instruments + (signed long int)t)
          {
            vol = vol + (signed int)playdata.vstatus[(signed long int)voice].volamp;
            chancount = chancount + 1;
          }

        if(!(chancount == 0))
        {
          vol = vol / (chancount * 16);
          if(vol >= 4)
            vol = 3;

          sampchar[(signed long int)0] = samp_char[(signed long int)vol];
          win_attrset(samp_attr[(signed long int)vol]);
        }

        else
          win_attrset((enum anonymous_7)ATTR_SAMPLES);
        win_print(win, x + 3, (t - first_inst) % semicount, sampchar);
      }

    }
  }

}

// dynamic_display_sample
// file ../../src/display.c line 707
static void dynamic_display_sample(struct MWINDOW *win)
{
  signed int count;
  signed int semicount;
  signed int t;
  signed int dynamic_display_sample__1__winx;
  signed int voice;
  signed int vol;
  signed int chancount;
  char sampchar[2l];
  if(cur_display == 2)
  {
    sampchar[(signed long int)1] = (char)0;
    updatefirst(win, &first_sample, &dynamic_display_sample__1__winx, &count, &semicount, 0, (signed int)mf->numsmp);
    t = first_sample;
    for( ; !(t >= count + first_sample) && !(t >= (signed int)mf->numsmp); t = t + 1)
    {
      signed int x = t - first_sample < semicount ? 0 : halfwidth;
      sampchar[(signed long int)0] = (char)32;
      if(!(x >= dynamic_display_sample__1__winx))
      {
        chancount = 0;
        vol = chancount;
        voice = 0;
        for( ; !(voice >= (signed int)mf->numchn); voice = voice + 1)
          if(playdata.vinfo[(signed long int)voice].s == mf->samples + (signed long int)t)
          {
            vol = vol + (signed int)playdata.vstatus[(signed long int)voice].volamp;
            chancount = chancount + 1;
          }

        if(!(chancount == 0))
        {
          vol = vol / chancount;
          if(vol >= 56)
            voice = 3;

          else
            if(vol >= 44)
              voice = 2;

            else
              if(vol >= 26)
                voice = 1;

              else
                voice = 0;
          sampchar[(signed long int)0] = samp_char[(signed long int)voice];
          win_attrset(samp_attr[(signed long int)voice]);
        }

        else
          win_attrset((enum anonymous_7)ATTR_SAMPLES);
        win_print(win, x + 3, (t - first_sample) % semicount, sampchar);
      }

    }
  }

}

// dynamic_display_volbars
// file ../../src/display.c line 825
static void dynamic_display_volbars(struct MWINDOW *win)
{
  signed int count;
  signed int t;
  signed int i;
  signed int v;
  signed int dynamic_display_volbars__1__winx;
  signed int barw;
  signed int loww;
  signed int medw;
  char *tmp;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  char *tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  char *tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  if(cur_display == 7)
  {
    updatefirst(win, &first_volbar, &dynamic_display_volbars__1__winx, &count, (signed int *)(void *)0, 0, (signed int)mf->numchn);
    dynamic_display_volbars__1__winx = dynamic_display_volbars__1__winx - 5;
    barw = dynamic_display_volbars__1__winx / 2;
    if(!(barw >= 3))
      goto __CPROVER_DUMP_L39;

    else
      if(barw >= 31)
        barw = 30;

    loww = (barw * 3) / 4;
    medw = ((barw - loww) * 3) / 4;
    t = first_volbar;
    do
    {
      if(!(t >= count + first_volbar))
        tmp_if_expr_1 = t < (signed int)mf->numchn ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      v = ((signed int)playdata.vstatus[(signed long int)t].volamp * barw) / 32;
      memset((void *)&storage, 32, (unsigned long int)barw);
      storage[(signed long int)barw] = (char)0;
      memset((void *)&storage, 61, (unsigned long int)(v / 2));
      if(!((1 & v) == 0))
      {
        storage[(signed long int)(v / 2)] = (char)45;
        v = v / 2 + 1;
      }

      else
        v = v / 2;
      if(!(v >= barw))
      {
        win_attrset((enum anonymous_7)ATTR_VOLBAR);
        win_print(win, ((signed int)mf->numchn > 100 ? 6 : 5) + v, t - first_volbar, storage + (signed long int)v);
        storage[(signed long int)v] = (char)0;
      }

      if(!(loww + medw >= v))
      {
        win_attrset((enum anonymous_7)ATTR_VOLBAR_HIGH);
        win_print(win, ((signed int)mf->numchn > 100 ? 6 : 5) + loww + medw, t - first_volbar, storage + (signed long int)loww + (signed long int)medw);
        storage[(signed long int)(loww + medw)] = (char)0;
      }

      if(!(loww >= v))
      {
        win_attrset((enum anonymous_7)ATTR_VOLBAR_MED);
        win_print(win, ((signed int)mf->numchn > 100 ? 6 : 5) + loww, t - first_volbar, storage + (signed long int)loww);
        storage[(signed long int)loww] = (char)0;
      }

      if(v >= 1)
      {
        win_attrset((enum anonymous_7)ATTR_VOLBAR_LOW);
        win_print(win, (signed int)mf->numchn > 100 ? 6 : 5, t - first_volbar, storage);
      }

      storage[(signed long int)0] = (char)0;
      if(config.forcesamples == 0 && !(playdata.vinfo[(signed long int)t].i == ((struct INSTRUMENT *)NULL)))
      {
        i = 0;
        do
        {
          if(!(i >= (signed int)mf->numins))
            tmp_if_expr_2 = playdata.vinfo[(signed long int)t].i != &mf->instruments[(signed long int)i] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_2 = (_Bool)0;
          if(!tmp_if_expr_2)
            break;

          i = i + 1;
        }
        while((_Bool)1);
        if(!(playdata.vinfo[(signed long int)t].i->insname == ((char *)NULL)))
          tmp_if_expr_3 = playdata.vinfo[(signed long int)t].i->insname;

        else
          tmp_if_expr_3 = "";
        snprintf(storage, (unsigned long int)320, "%3i %s", i, tmp_if_expr_3);
      }

      else
        if(!(playdata.vinfo[(signed long int)t].s == ((struct SAMPLE *)NULL)))
        {
          i = 0;
          do
          {
            if(!(i >= (signed int)mf->numsmp))
              tmp_if_expr_4 = playdata.vinfo[(signed long int)t].s != &mf->samples[(signed long int)i] ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_4 = (_Bool)0;
            if(!tmp_if_expr_4)
              break;

            i = i + 1;
          }
          while((_Bool)1);
          if(!(playdata.vinfo[(signed long int)t].s->samplename == ((char *)NULL)))
            tmp_if_expr_5 = playdata.vinfo[(signed long int)t].s->samplename;

          else
            tmp_if_expr_5 = "";
          snprintf(storage, (unsigned long int)320, "%3i %s", i, tmp_if_expr_5);
        }

      convert_string(storage);
      tmp = storage;
      v = 0;
      for( ; !(*tmp == 0) && !(v >= dynamic_display_volbars__1__winx + -barw + -2); v = v + 1)
        tmp = tmp + 1l;
      for( ; !(v >= dynamic_display_volbars__1__winx + -barw + -2); v = v + 1)
      {
        *tmp = (char)32;
        tmp = tmp + 1l;
      }
      *tmp = (char)0;
      win_attrset((enum anonymous_7)ATTR_VOLBAR_INSTR);
      win_print(win, ((signed int)mf->numchn > 100 ? 6 : 5) + barw + 2, t - first_volbar, storage);
      t = t + 1;
    }
    while((_Bool)1);
    if((signed int)mf->numchn == 1)
      strcpy(storage, "1 Channel");

    else
      snprintf(storage, (unsigned long int)320, "%d Channels", mf->numchn);
    if(config.forcesamples == 0)
      tmp_if_expr_6 = ((signed int)mf->flags & 0x0004) != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_6 = (_Bool)0;
    if(tmp_if_expr_6)
      strcat(storage, ", displaying instrument names");

    else
      strcat(storage, ", displaying sample names");
    if(!(config.fakevolbars == 0))
      strcat(storage, " and fake volume bars");

    else
      strcat(storage, " and real volume bars");
    win_status(storage);
  }


__CPROVER_DUMP_L39:
  ;
}

// enlarge
// file ../../src/display.c line 149
static void enlarge(signed int x, char *str)
{
  signed int enlarge__1__winx;
  signed int enlarge__1__winy;
  signed int len;
  win_get_size(root, &enlarge__1__winx, &enlarge__1__winy);
  enlarge__1__winx = enlarge__1__winx - x;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(str);
  len = (signed int)return_value_strlen_1;
  if(!(len >= enlarge__1__winx))
    memset((void *)(str + (signed long int)len), 32, (unsigned long int)(enlarge__1__winx - len));

  if(enlarge__1__winx >= 0)
    str[(signed long int)enlarge__1__winx] = (char)0;

}

// entry_add
// file ../../src/mlistedit.c line 233
static signed int entry_add(char *path, char *file, struct anonymous_25 *data)
{
  signed int len;
  signed int old_len;
  old_len=PL_GetLength(&playlist);
  char buffer[320l];
  strcpy(buffer, path);
  if(!(file == ((char *)NULL)))
    strcat(buffer, file);

  _Bool tmp_if_expr_1;
  if(!(data == ((struct anonymous_25 *)NULL)))
  {
    if(!(data->actline >= 0))
      tmp_if_expr_1 = data->before_add != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      data->before_add = 0;
      PL_ClearList(&playlist);
      old_len=PL_GetLength(&playlist);
      freq_check_searchlist(data);
    }

    else
      PL_StartInsert(&playlist, data->actline);
  }

  MA_FindFiles(&playlist, buffer);
  PL_StopInsert(&playlist);
  len=PL_GetLength(&playlist);
  if(old_len == 0 && !(len == 0))
    PL_InitCurrent(&playlist);

  char *tmp_if_expr_3;
  if(!(data == ((struct anonymous_25 *)NULL)) && !(old_len >= len))
  {
    signed int i;
    signed int start;
    signed int end;
    void *return_value_realloc_2;
    return_value_realloc_2=realloc((void *)data->searchlist, sizeof(char *) /*8ul*/  * (unsigned long int)len);
    data->searchlist = (char **)return_value_realloc_2;
    start = data->actline;
    if(!(start >= 0))
      start = old_len;

    end = (start + len) - old_len;
    i = start;
    for( ; !(i >= end); i = i + 1)
    {
      struct anonymous_0 *entry;
      entry=PL_GetEntry(&playlist, i);
      char *ins;
      if(!(entry->archive == ((char *)NULL)))
        tmp_if_expr_3 = entry->archive;

      else
        tmp_if_expr_3 = entry->file;
      ins = tmp_if_expr_3;
      entry_insert(0, data->cnt_list - 1, data->searchlist, ins);
      data->cnt_list = data->cnt_list + 1;
    }
    if(data->actline >= 0)
      data->actline = data->actline + (len - old_len);

  }

  return len - old_len;
}

// entry_insert
// file ../../src/mlistedit.c line 207
static void entry_insert(signed int left, signed int right, char **pl, char *ins)
{
  signed int pos = 0;
  signed int cmp = 0;
  signed int last = right;
  if(!(right >= 0))
    pl[(signed long int)0] = ins;

  else
  {
    while(right >= left)
    {
      pos = (left + right) / 2;
      cmp=strcmp(ins, pl[(signed long int)pos]);
      if(!(cmp >= 0))
        right = pos - 1;

      else
        left = pos + 1;
    }
    if(cmp >= 1)
      pos = pos + 1;

    cmp = last;
    for( ; cmp >= pos; cmp = cmp - 1)
      pl[(signed long int)(cmp + 1)] = pl[(signed long int)cmp];
    pl[(signed long int)pos] = ins;
  }
}

// entry_remove
// file ../../src/mlistedit.c line 984
static void entry_remove(signed int entry)
{
  PL_DelEntry(&playlist, entry);
}

// entry_remove_by_name
// file ../../src/mlistedit.c line 282
static signed int entry_remove_by_name(char *path, char *file, struct anonymous_25 *data)
{
  signed int len;
  len=PL_GetLength(&playlist);
  char buffer[320l];
  signed int cnt_remove = 0;
  signed int i;
  char **pos;
  strcpy(buffer, path);
  if(!(file == ((char *)NULL)))
    strcat(buffer, file);

  void *return_value_bsearch_1;
  for( ; data->cnt_list >= 1; data->cnt_list = data->cnt_list - 1)
  {
    return_value_bsearch_1=bsearch((const void *)buffer, (const void *)data->searchlist, (unsigned long int)data->cnt_list, sizeof(char *) /*8ul*/ , (signed int (*)(const void *, const void *))(signed int (*)())searchlist_search_cmp);
    pos = (char **)return_value_bsearch_1;
    if(pos == ((char **)NULL))
      break;

    for( ; !(pos >= data->searchlist + (signed long int)data->cnt_list + -1l); pos = pos + 1l)
      *pos = pos[(signed long int)1];
  }
  void *return_value_realloc_2;
  return_value_realloc_2=realloc((void *)data->searchlist, sizeof(char *) /*8ul*/  * (unsigned long int)data->cnt_list);
  data->searchlist = (char **)return_value_realloc_2;
  i = len - 1;
  char *tmp_if_expr_3;
  for( ; i >= 0; i = i - 1)
  {
    struct anonymous_0 *entry;
    entry=PL_GetEntry(&playlist, i);
    if(!(entry->archive == ((char *)NULL)))
      tmp_if_expr_3 = entry->archive;

    else
      tmp_if_expr_3 = entry->file;
    signed int return_value_strcmp_4;
    return_value_strcmp_4=strcmp(tmp_if_expr_3, buffer);
    if(return_value_strcmp_4 == 0)
    {
      PL_DelEntry(&playlist, i);
      if(!(i >= data->actline))
        data->actline = data->actline - 1;

      cnt_remove = cnt_remove + 1;
    }

  }
  return cnt_remove;
}

// exit_player
// file ../../src/mikmod.c line 234
static void exit_player(signed int exitcode, const char *message, ...)
{
  void **args;
  win_exit();
  if((signed int)status.state >= 1)
  {
    MikMod_Exit();
    status.state = (enum anonymous_30)STATE_INIT;
  }

  if(!(message == ((const char *)NULL)))
  {
    args = (void **)&message;
    if(exitcode >= 1)
      vfprintf(stderr, message, args);

    else
      if(quiet == 0)
        vprintf(message, args);

    args = ((void **)NULL);
  }

  if(status.norc == 0 && exitcode == 0)
  {
    if(!(config.save_config == 0))
      CF_Save(&config);

    if(!(config.save_playlist == 0))
      PL_SaveDefault(&playlist);

  }

  printf("\n");
  exit(exitcode);
}

// file_exist
// file ../../src/mutilities.c line 213
signed int file_exist(const char *file)
{
  struct stat sb;
  signed int return_value_stat_1;
  return_value_stat_1=stat(file, &sb);
  return return_value_stat_1 == -1 ? 0 : 1;
}

// filename2short
// file ../../src/marchive.c line 278
static signed int filename2short(const char *l, char *s, signed int len_s)
{
  strncpy(s, l, (unsigned long int)len_s);
  s[(signed long int)(len_s - 1)] = (char)0;
  return 1;
}

// freq_add
// file ../../src/mlistedit.c line 688
static void freq_add(struct anonymous_25 *data, enum anonymous_26 mode)
{
  char *file = data->w->entries[(signed long int)data->w->cur];
  char *path = data->path;
  char freq_add__1__help[8192l];
  signed int return_value_path_update_4;
  return_value_path_update_4=path_update(freq_add__1__help, path, file + (signed long int)2);
  signed int return_value_entry_add_2;
  if(!(return_value_path_update_4 == 0))
    freq_scan_dir(freq_add__1__help, data, mode);

  else
    if((signed int)*file == 42)
    {
      if(!((signed int)mode == FREQ_ADD))
      {
        signed int return_value_entry_remove_by_name_1;
        return_value_entry_remove_by_name_1=entry_remove_by_name(path, file + (signed long int)2, data);
        if(return_value_entry_remove_by_name_1 >= 1)
          *file = (char)32;

      }

      else
        if(!(data->actline >= 0))
        {
          if(!(data->before_add == 0))
          {
            return_value_entry_add_2=entry_add(path, file + (signed long int)2, data);
            if(return_value_entry_add_2 >= 1)
              *file = (char)42;

          }

        }

    }

    else
      if(!((signed int)mode == FREQ_REMOVE))
      {
        signed int return_value_entry_add_3;
        return_value_entry_add_3=entry_add(path, file + (signed long int)2, data);
        if(return_value_entry_add_3 >= 1)
          *file = (char)42;

      }

  wid_list_set_active(data->w, data->w->cur + 1);
  win_panel_repaint();
}

// freq_call_func
// file ../../src/mlistedit.c line 725
static signed int freq_call_func(signed int button, struct anonymous_25 *data)
{
  char file[8192l];
  strcpy(file, data->path);
  strcat(file, data->w->entries[(signed long int)data->w->cur] + (signed long int)2);
  signed int return_value;
  return_value=data->handle_freq(button, file, data->data);
  return return_value;
}

// freq_cd
// file ../../src/mlistedit.c line 780
static void freq_cd(struct anonymous_25 *data)
{
  dlg_input_str("Change directory to:", "<&Ok>|&Cancel", data->path, 4096, cb_freq_cd_do, (void *)data);
}

// freq_changedir
// file ../../src/mlistedit.c line 489
static void freq_changedir(const char *path, struct anonymous_25 *data)
{
  char **freq_changedir__1__entries;
  char *last = (char *)(void *)0;
  char *end;
  char **pos = (char **)(void *)0;
  char ch;
  signed int cnt;
  freq_readdir(path, &freq_changedir__1__entries, &cnt, data);
  if(cnt >= 1 && !(freq_changedir__1__entries == ((char **)NULL)))
  {
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(path);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(data->path);
    if(!(return_value_strlen_4 >= return_value_strlen_5))
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(path);
      last = data->path + (signed long int)return_value_strlen_1;
      ch = *last;
      *last = (char)0;
      signed int return_value_strcmp_3;
      return_value_strcmp_3=strcmp(data->path, path);
      if(return_value_strcmp_3 == 0)
      {
        *last = ch;
        end = last;
        for( ; !(*end == 0); end = end + 1l)
          if((signed int)*end == 47)
            break;

        if((signed int)*end == 47)
        {
          end[(signed long int)1] = (char)0;
          void *return_value_bsearch_2;
          return_value_bsearch_2=bsearch((const void *)last, (const void *)freq_changedir__1__entries, (unsigned long int)cnt, sizeof(char *) /*8ul*/ , (signed int (*)(const void *, const void *))(signed int (*)())dirlist_search_cmp);
          pos = (char **)return_value_bsearch_2;
        }

        else
          pos = (char **)(void *)0;
      }

    }

    if(pos == ((char **)NULL))
      pos = freq_changedir__1__entries;

    strcpy(data->path, path);
    wid_list_set_entries(data->w, (const char **)freq_changedir__1__entries, 0, cnt);
    wid_list_set_active(data->w, (signed int)(pos - freq_changedir__1__entries));
    freq_set_title(data);
    freq_freedir(freq_changedir__1__entries, cnt);
  }

  else
    dlg_error_show("Unable to read directory \"%s\"!", path);
}

// freq_check_searchlist
// file ../../src/mlistedit.c line 181
static void freq_check_searchlist(struct anonymous_25 *data)
{
  signed int i;
  signed int len;
  len=PL_GetLength(&playlist);
  if(!(len == data->cnt_list))
  {
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)data->searchlist, sizeof(char *) /*8ul*/  * (unsigned long int)len);
    data->searchlist = (char **)return_value_realloc_1;
    data->cnt_list = len;
    if(!(len == 0))
    {
      i = 0;
      for( ; !(i >= len); i = i + 1)
      {
        struct anonymous_0 *entry;
        entry=PL_GetEntry(&playlist, i);
        if(!(entry->archive == ((char *)NULL)))
          data->searchlist[(signed long int)i] = entry->archive;

        else
          data->searchlist[(signed long int)i] = entry->file;
      }
      qsort((void *)data->searchlist, (unsigned long int)len, sizeof(char *) /*8ul*/ , (signed int (*)(const void *, const void *))(signed int (*)())searchlist_cmp);
    }

    if(!(data->w == ((struct anonymous_14 *)NULL)))
    {
      freq_set_marks(data->w->entries, data->w->cnt, data->path, data);
      wid_repaint((struct WIDGET *)data->w);
    }

  }

}

// freq_close
// file ../../src/mlistedit.c line 713
static void freq_close(struct anonymous_25 *data)
{
  if(!(data == ((struct anonymous_25 *)NULL)))
  {
    if(!(data->w == ((struct anonymous_14 *)NULL)))
      dialog_close(data->w->w.d);

    if(!(data->searchlist == ((char **)NULL)))
      free((void *)data->searchlist);

    free((void *)data);
  }

  PL_DelDouble(&playlist);
}

// freq_data_init
// file ../../src/mlistedit.c line 838
static struct anonymous_25 * freq_data_init(const char *path)
{
  struct stat statbuf;
  struct anonymous_25 *data;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_25) /*8240ul*/ );
  data = (struct anonymous_25 *)return_value_malloc_1;
  char *pos;
  data->path[(signed long int)0] = (char)0;
  signed int return_value_path_relative_3;
  return_value_path_relative_3=path_relative(path);
  if(!(return_value_path_relative_3 == 0))
  {
    getcwd(data->path, (unsigned long int)4096);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(data->path);
    if(!((signed int)data->path[-1l + (signed long int)return_value_strlen_2] == 47))
      strcat(data->path, "/");

  }

  strcat(data->path, path);
  signed int return_value_stat_4;
  return_value_stat_4=stat(data->path, &statbuf);
  if(!((61440u & statbuf.st_mode) == 16384u) || !(return_value_stat_4 == 0))
  {
    pos=strrchr(data->path, 47);
    if(!(pos == ((char *)NULL)))
      pos[(signed long int)1] = (char)0;

  }

  unsigned long int return_value_strlen_5;
  return_value_strlen_5=strlen(data->path);
  pos = data->path + (signed long int)return_value_strlen_5;
  if(!((signed int)pos[-1l] == 47))
  {
    *pos = (char)47;
    pos[(signed long int)1] = (char)0;
  }

  data->w = (struct anonymous_14 *)(void *)0;
  data->before_add = 1;
  data->actline = -1;
  data->cnt_list = 0;
  data->searchlist = (char **)(void *)0;
  freq_check_searchlist(data);
  return data;
}

// freq_freedir
// file ../../src/mlistedit.c line 465
static void freq_freedir(char **entries, signed int cnt)
{
  signed int i = 0;
  for( ; !(i >= cnt); i = i + 1)
    if(!(entries[(signed long int)i] == ((char *)NULL)))
      free((void *)entries[(signed long int)i]);

  free((void *)entries);
}

// freq_hotlist
// file ../../src/mlistedit.c line 583
static void freq_hotlist(struct anonymous_25 *freq_data)
{
  struct anonymous_17 *d;
  d=dialog_new();
  struct WIDGET *w;
  struct anonymous_27 *data;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_27) /*16ul*/ );
  data = (struct anonymous_27 *)return_value_malloc_1;
  w=wid_list_add(d, 1, (const char **)config.hotlist, config.cnt_hotlist);
  wid_set_size(w, 74, 10);
  data->w = (struct anonymous_14 *)w;
  data->freq = freq_data;
  wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_hlist_list_focus, (void *)data);
  w=wid_button_add(d, 1, "<change &To>|&Add current|&Remove|&Cancel", 0);
  wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_hlist_button_focus, (void *)data);
  dialog_open(d, "Directory hotlist");
}

// freq_open
// file ../../src/mlistedit.c line 874
void freq_open(const char *title, const char *path, signed int actline, signed int (*func)(signed int, char *, void *), void *data)
{
  struct anonymous_25 *freq_data;
  struct anonymous_17 *d;
  d=dialog_new();
  struct WIDGET *w;
  char **freq_open__1__entries;
  char *path_first = (char *)(void *)0;
  signed int cnt;
  freq_data=freq_data_init(path);
  freq_data->actline = actline;
  freq_data->handle_freq = func;
  freq_data->data = data;
  freq_readdir(freq_data->path, &freq_open__1__entries, &cnt, freq_data);
  if(freq_open__1__entries == ((char **)NULL) || cnt == 0)
  {
    path_first=strdup(freq_data->path);
    strcpy(freq_data->path, "/");
    freq_readdir(freq_data->path, &freq_open__1__entries, &cnt, freq_data);
    if(!(freq_open__1__entries == ((char **)NULL)) && !(cnt == 0))
      goto __CPROVER_DUMP_L2;

    freq_close(freq_data);
    if(!(path_first == ((char *)NULL)))
      free((void *)path_first);

  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    w=wid_list_add(d, 1, (const char **)freq_open__1__entries, cnt);
    freq_data->w = (struct anonymous_14 *)w;
    wid_set_func(w, cb_freq_list_key, cb_freq_list_focus, (void *)freq_data);
    freq_freedir(freq_open__1__entries, cnt);
    if(!(func == ((signed int (*)(signed int, char *, void *))NULL)))
      w=wid_button_add(d, 1, "&Add|&Toggle|&Cd|&Hlist|<&Ok>|&Back", 0);

    else
      w=wid_button_add(d, 1, "<&Add>|&Toggle|&Cd|&Hlist|&Back", 0);
    wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_freq_button_focus, (void *)freq_data);
    dialog_open(d, title);
    freq_set_title(freq_data);
    if(!(path_first == ((char *)NULL)))
    {
      dlg_error_show("Unable to read directory \"%s\"!", path_first);
      free((void *)path_first);
    }

  }
}

// freq_readdir
// file ../../src/mlistedit.c line 412
static void freq_readdir(const char *path, char ***entries, signed int *cnt, struct anonymous_25 *data)
{
  signed int max;
  struct __dirstream *dir;
  dir=opendir(path);
  char file[8192l];
  char *pathend;
  char *freq_readdir__1__help;
  struct dirent *entry;
  struct stat statbuf;
  strcpy(file, path);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(file);
  pathend = file + (signed long int)return_value_strlen_1;
  *entries = (char **)(void *)0;
  *cnt = 0;
  signed int tmp_post_6;
  if(!(dir == ((struct __dirstream *)NULL)))
  {
    *cnt = 0;
    max = *cnt;
    do
    {
      entry=readdir(dir);
      if(entry == ((struct dirent *)NULL))
        break;

      if(*cnt >= max)
      {
        max = max + 10;
        void *return_value_realloc_2;
        return_value_realloc_2=realloc((void *)*entries, sizeof(char *) /*8ul*/  * (unsigned long int)max);
        *entries = (char **)return_value_realloc_2;
      }

      strcpy(pathend, entry->d_name);
      signed int return_value_stat_3;
      return_value_stat_3=stat(file, &statbuf);
      if(return_value_stat_3 == 0)
      {
        if((61440u & statbuf.st_mode) == 16384u)
          strcat(pathend, "/");

      }

      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(pathend);
      void *return_value_malloc_5;
      return_value_malloc_5=malloc(sizeof(char) /*1ul*/  * (return_value_strlen_4 + (unsigned long int)3));
      freq_readdir__1__help = (char *)return_value_malloc_5;
      strcpy(freq_readdir__1__help, "  ");
      strcat(freq_readdir__1__help, pathend);
      tmp_post_6 = *cnt;
      *cnt = *cnt + 1;
      (*entries)[(signed long int)tmp_post_6] = freq_readdir__1__help;
    }
    while((_Bool)1);
    freq_set_marks(*entries, *cnt, path, data);
    closedir(dir);
    if(!(*cnt == 0))
      qsort((void *)*entries, (unsigned long int)*cnt, sizeof(char *) /*8ul*/ , (signed int (*)(const void *, const void *))(signed int (*)())dirlist_cmp);

  }

}

// freq_scan_dir
// file ../../src/mlistedit.c line 655
static void freq_scan_dir(char *path, struct anonymous_25 *data, enum anonymous_26 mode)
{
  signed int added = 0;
  signed int removed = 0;
  struct anonymous_17 *d;
  d=dialog_new();
  struct WIDGET *w;
  struct anonymous_28 scan_data;
  scan_data.stop = 0;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(path);
  unsigned long int return_value_strlen_1;
  if(return_value_strlen_2 >= 51ul)
  {
    return_value_strlen_1=strlen(path);
    sprintf(storage, "Scanning ...%-47s...\n   0 entrie(s) added,    0 entrie(s) removed", &path[(signed long int)(return_value_strlen_1 - (unsigned long int)47)]);
  }

  else
    sprintf(storage, "Scanning %-50s...\n   0 entrie(s) added,    0 entrie(s) removed", path);
  struct WIDGET *return_value_wid_label_add_3;
  return_value_wid_label_add_3=wid_label_add(d, 1, storage);
  scan_data.w = (struct anonymous_11 *)return_value_wid_label_add_3;
  w=wid_button_add(d, 2, "&Stop", 0);
  wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_scan_dir_stop_focus, (void *)&scan_data);
  dialog_open(d, "Message");
  win_refresh();
  scan_dir(path, 1, 0, data, mode, cb_freq_scan_dir, (void *)&scan_data, &added, &removed);
  dialog_close(d);
  freq_set_marks(data->w->entries, data->w->cnt, data->path, data);
  sprintf(storage, "Added %d entrie(s) and removed %d entrie(s).", added, removed);
  dlg_message_open(storage, "&Ok", 0, 0, (signed int (*)(struct WIDGET *, signed int, void *, void *))(void *)0, (void *)0);
}

// freq_set_marks
// file ../../src/mlistedit.c line 160
static void freq_set_marks(char **entries, signed int cnt, const char *path, struct anonymous_25 *data)
{
  signed int i;
  char file[8192l];
  char *fstart;
  strcpy(file, path);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(file);
  fstart = file + (signed long int)return_value_strlen_1;
  i = 0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  void *return_value_bsearch_4;
  for( ; !(i >= cnt); i = i + 1)
  {
    strcpy(fstart, entries[(signed long int)i] + (signed long int)2);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(fstart);
    if(!((signed int)fstart[(signed long int)return_value_strlen_2] == 47))
      tmp_if_expr_3 = data->cnt_list > 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
    {
      return_value_bsearch_4=bsearch((const void *)file, (const void *)data->searchlist, (unsigned long int)data->cnt_list, sizeof(char *) /*8ul*/ , (signed int (*)(const void *, const void *))(signed int (*)())searchlist_search_cmp);
      tmp_if_expr_5 = return_value_bsearch_4 != NULL ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
      *entries[(signed long int)i] = (char)42;

    else
      *entries[(signed long int)i] = (char)32;
  }
}

// freq_set_title
// file ../../src/mlistedit.c line 473
static void freq_set_title(struct anonymous_25 *data)
{
  signed int max = data->w->w.width - 2;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(data->path);
  if((unsigned long int)max >= return_value_strlen_2)
    wid_list_set_title(data->w, data->path);

  else
  {
    char path[200l];
    strcpy(path, "...");
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(data->path);
    strcat(path, &data->path[(signed long int)((return_value_strlen_1 - (unsigned long int)max) + (unsigned long int)3)]);
    wid_list_set_title(data->w, path);
  }
  wid_repaint((struct WIDGET *)data->w);
}

// get_argument
// file ../../src/rcfile.c line 228
static char * get_argument(const char *label)
{
  signed int i = 0;
  signed int return_value_strcasecmp_1;
  for( ; !(i >= options_link1->cnt); i = i + 1)
    if(!((options_link1->option + (signed long int)i)->label == ((char *)NULL)))
    {
      return_value_strcasecmp_1=strcasecmp((options_link1->option + (signed long int)i)->label, label);
      if(return_value_strcasecmp_1 == 0)
      {
        free((void *)(options_link1->option + (signed long int)i)->label);
        (options_link1->option + (signed long int)i)->label = (char *)(void *)0;
        return (options_link1->option + (signed long int)i)->arg;
      }

    }

  return (char *)(void *)0;
}

// get_begin
// file ../../src/rcfile.c line 243
static struct _OPTIONS * get_begin(const char *label)
{
  signed int i = 0;
  signed int return_value_strcasecmp_2;
  signed int return_value_strcasecmp_1;
  for( ; !(i >= options_link1->cnt); i = i + 1)
    if(!((options_link1->option + (signed long int)i)->label == ((char *)NULL)))
    {
      return_value_strcasecmp_2=strcasecmp((options_link1->option + (signed long int)i)->label, "BEGIN");
      if(return_value_strcasecmp_2 == 0)
      {
        return_value_strcasecmp_1=strcasecmp((options_link1->option + (signed long int)i)->arg, label);
        if(return_value_strcasecmp_1 == 0)
        {
          free((void *)(options_link1->option + (signed long int)i)->label);
          (options_link1->option + (signed long int)i)->label = (char *)(void *)0;
          return (options_link1->option + (signed long int)i)->options;
        }

      }

    }

  return (struct _OPTIONS *)(void *)0;
}

// get_cfg_name
// file ../../src/mutilities.h line 196
char * get_cfg_name(const char *name)
{
  char *p;
  const char *return_value_get_homedir_1;
  return_value_get_homedir_1=get_homedir();
  p=str_sprintf2("%s/%s", return_value_get_homedir_1, name);
  return p;
}

// get_command
// file ../../src/marchive.c line 289
static char * get_command(const char *pattern, const char *arc, const char *file, const char *dest)
{
  signed int i = 0;
  signed int len = 0;
  const char *arg[3l];
  char *pos;
  char *pat;
  char *command;
  char buf[4096l];
  pat=strdup(pattern);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(pattern);
  len = (signed int)(return_value_strlen_1 + (unsigned long int)1);
  pos = pat;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  do
  {
    if(!(i >= 3))
      tmp_if_expr_2 = *pos != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(!tmp_if_expr_2)
      break;

    if((signed int)*pos == 37)
    {
      if((signed int)pos[1l] == 65)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)pos[(signed long int)1] == 97 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = (signed int)pos[(signed long int)1] == 102 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = (signed int)pos[(signed long int)1] == 100 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
      {
        switch((signed int)pos[(signed long int)1])
        {
          case 65:
          {
            arg[(signed long int)i] = arc;
            break;
          }
          case 97:
          {
            filename2short(arc, buf, 4096);
            arg[(signed long int)i] = buf;
            break;
          }
          case 102:
          {
            arg[(signed long int)i] = file;
            break;
          }
          case 100:
            arg[(signed long int)i] = dest;
        }
        pos[(signed long int)1] = (char)115;
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(arg[(signed long int)i]);
        len = len + (signed int)return_value_strlen_3;
        i = i + 1;
      }

    }

    pos = pos + 1l;
  }
  while((_Bool)1);
  void *return_value_malloc_7;
  return_value_malloc_7=malloc((unsigned long int)len * sizeof(char) /*1ul*/ );
  command = (char *)return_value_malloc_7;
  snprintf(command, (unsigned long int)len, pat, arg[(signed long int)0], arg[(signed long int)1], arg[(signed long int)2]);
  free((void *)pat);
  return command;
}

// get_driver_options
// file ../../src/mconfedit.c line 304
static void get_driver_options(struct anonymous_8 *entry, struct anonymous_8 *dr_entry)
{
  signed int drvno = (signed int)(signed long int)dr_entry->data;
  char *cmdline;
  if(!(entry->text == ((char *)NULL)))
    free((void *)entry->text);

  signed int return_value_driver_get_info_5;
  return_value_driver_get_info_5=driver_get_info(drvno, (char **)(void *)0, &cmdline);
  unsigned long int return_value_strlen_1;
  if(!(return_value_driver_get_info_5 == 0) && !(drvno == 0))
  {
    signed int cmdlen = 0;
    signed int i = drvno;
    char *end;
    char *pos;
    pos=strchr(dr_entry->text, 124);
    for( ; i >= 1 && !(pos == ((char *)NULL)); i = i - 1)
      pos=strchr(pos + (signed long int)1, 124);
    end = pos;
    if(!(pos == ((char *)NULL)))
    {
      if(!(*pos == 0))
      {
        if(i == 0)
        {
          pos = pos + 1l;
          end=strchr(pos, 124);
          if(end == ((char *)NULL))
          {
            return_value_strlen_1=strlen(pos);
            end = pos + (signed long int)return_value_strlen_1;
          }

        }

      }

    }

    if(!(cmdline == ((char *)NULL)))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(cmdline);
      cmdlen = (signed int)return_value_strlen_2;
      if((signed int)cmdline[(signed long int)(cmdlen + -1)] == 10)
        cmdlen = cmdlen - 1;

    }

    void *return_value_malloc_3;
    return_value_malloc_3=malloc(sizeof(char) /*1ul*/  * (unsigned long int)((((signed long int)cmdlen + end) - pos) + (signed long int)50 + (signed long int)20));
    entry->text = (char *)return_value_malloc_3;
    strcpy(entry->text, "Driver &options [%s]|Enter driver options");
    if(cmdlen >= 1 && !(pos >= end))
    {
      strcat(entry->text, " (Options for ");
      strncat(entry->text, pos, (unsigned long int)(end - pos));
      strcat(entry->text, ":\n");
      strncat(entry->text, cmdline, (unsigned long int)cmdlen);
      strcat(entry->text, "):|255|16");
    }

    else
      strcat(entry->text, ":|255|16");
    if(!(cmdline == ((char *)NULL)))
      free((void *)cmdline);

  }

  else
  {
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(char) /*1ul*/  * (unsigned long int)50);
    entry->text = (char *)return_value_malloc_4;
    strcpy(entry->text, "Driver &options [%s]|Enter driver options:|255|16");
  }
}

// get_drivers
// file ../../src/mconfedit.c line 246
static void get_drivers(struct anonymous_8 *entry)
{
  char *driver;
  driver=MikMod_InfoDriver();
  char *pos;
  char *start;
  signed int len = 0;
  signed int x = 0;
  signed int end;
  pos=skip_number(driver);
  _Bool tmp_if_expr_1;
  do
  {
    if(!(pos == ((char *)NULL)))
      tmp_if_expr_1 = *pos != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    if((signed int)*pos == 10)
    {
      if(x >= 36)
        x = 35;

      len = len + x;
      x = 0;
      pos=skip_number(pos + (signed long int)1);
    }

    x = x + 1;
    pos = pos + 1l;
  }
  while((_Bool)1);
  x = x - 1;
  if(!((signed int)pos[-1l] == 10))
    len = len + (x >= 35 ? 35 : x);

  if(!(entry->text == ((char *)NULL)))
    free((void *)entry->text);

  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(char) /*1ul*/  * (unsigned long int)(len + 25));
  entry->text = (char *)return_value_malloc_2;
  strcpy(entry->text, "&Driver [%o]|Autodetect");
  start=skip_number(driver);
  _Bool tmp_if_expr_3;
  if(!(start == ((char *)NULL)))
    tmp_if_expr_3 = *start != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  end = (signed int)!tmp_if_expr_3;
  pos = start;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_6;
  const unsigned short int **return_value___ctype_b_loc_5;
  for( ; end == 0; pos = pos + 1l)
  {
    end = (signed int)!(*pos != 0);
    if((signed int)*pos == 10)
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      if(*pos == 0)
        tmp_if_expr_6 = (signed int)*(pos - (signed long int)1) != 10 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      tmp_if_expr_7 = tmp_if_expr_6 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
    {
      strcat(entry->text, "|");
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(entry->text);
      len = (signed int)return_value_strlen_4;
      x = 0;
      for( ; pos >= start + (signed long int)x && !(x >= 34); x = x + 1)
      {
        if((signed int)start[(signed long int)x] == 40)
          break;

        if((signed int)start[(signed long int)x] == 118)
        {
          return_value___ctype_b_loc_5=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc_5)[(signed long int)(signed int)start[(signed long int)x + 1l]]) == 0))
            break;

        }

      }
      for( ; x >= 1; x = x - 1)
        if(!((signed int)start[(signed long int)x + -1l] == 32))
          break;

      strncat(entry->text, start, (unsigned long int)x);
      entry->text[(signed long int)(len + x)] = (char)0;
      pos=skip_number(pos + (signed long int)1);
      start = pos;
    }

  }
  MikMod_free((void *)driver);
}

// get_homedir
// file ../../src/mutilities.c line 123
static const char * get_homedir(void)
{
  _Bool tmp_if_expr_2;
  static const char *home = (const char *)(void *)0;
  if(home == ((const char *)NULL))
  {
    struct passwd *pw;
    unsigned int return_value_getuid_1;
    return_value_getuid_1=getuid();
    pw=getpwuid(return_value_getuid_1);
    static char d[4096l];
    memset((void *)d, 0, sizeof(char [4096l]) /*4096ul*/ );
    if(!(pw == ((struct passwd *)NULL)))
      tmp_if_expr_2 = pw->pw_dir != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      strncpy(d, pw->pw_dir, sizeof(char [4096l]) /*4096ul*/ );
      d[(signed long int)(sizeof(char [4096l]) /*4096ul*/  - (unsigned long int)1)] = (char)0;
      home = d;
    }

    else
    {
      home=getenv("HOME");
      if(!(home == ((const char *)NULL)))
      {
        strncpy(d, home, sizeof(char [4096l]) /*4096ul*/ );
        d[(signed long int)(sizeof(char [4096l]) /*4096ul*/  - (unsigned long int)1)] = (char)0;
        home = d;
      }

      else
        home = "";
    }
  }

  return home;
}

// get_int
// file ../../src/mikmod.c line 495
static void get_int(const char *arg, signed int *value, signed int min, signed int max)
{
  char *end = (char *)(void *)0;
  signed int t = min - 1;
  signed long int return_value_strtol_1;
  if(!(arg == ((const char *)NULL)))
  {
    return_value_strtol_1=strtol(arg, &end, 10);
    t = (signed int)return_value_strtol_1;
  }

  _Bool tmp_if_expr_2;
  if(!(end == ((char *)NULL)))
    tmp_if_expr_2 = !(*end != 0) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(t >= min && max >= t && tmp_if_expr_2)
    *value = t;

  else
    exit_player(1, "-= MikMod 3.2.7 =-\n(c) 2004 Raphael Assenat and others - see file AUTHORS for complete list\n\nArgument '%s' out of bounds, must be between %d and %d.\nUse '%s --help' for more information.\n", arg != ((const char *)NULL) ? arg : "(not given)", min, max, PRG_NAME);
}

// get_text
// file ../../src/mmenu.c line 106
static char * get_text(struct anonymous_8 *entry, signed int width)
{
  char *text;
  char get_text__1__help[100l];
  char sub[100l];
  char *start;
  char *pos;
  signed int i;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_19;
  unsigned long int return_value_strlen_7;
  signed int return_value_menu_width_10;
  signed int return_value_menu_width_9;
  signed int tmp_post_11;
  char *tmp_post_12;
  signed int tmp_post_13;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_18;
  signed int tmp_post_21;
  signed int tmp_post_22;
  signed int tmp_post_23;
  if(!(entry == ((struct anonymous_8 *)NULL)))
  {
    if((signed int)*entry->text == 37)
      tmp_if_expr_1 = (signed int)entry->text[(signed long int)1] == 45 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      text=strdup(&entry->text[(signed long int)1]);

    else
      text=strdup(entry->text);
    signed int return_value_menu_is_sub_3;
    return_value_menu_is_sub_3=menu_is_sub(entry);
    if(!(return_value_menu_is_sub_3 == 0))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(text);
      i = (signed int)return_value_strlen_2;
      text[(signed long int)(i - 2)] = (char)62;
      text[(signed long int)(i - 1)] = (char)0;
    }

    pos = text - (signed long int)1;
    do
    {
      pos = pos + 1l;
      pos=strchr(pos, 37);
      if(!(pos == ((char *)NULL)))
        pos = pos + 1l;

      if(!(pos == ((char *)NULL)))
      {
        if((signed int)*pos == 37)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = (signed int)*pos == 62 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = (signed int)*pos == 45 ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_6 = (_Bool)0;
    }
    while(tmp_if_expr_6);
    if(!(pos == ((char *)NULL)))
    {
      if((signed int)*pos == 99)
        sprintf(storage, text, (signed long int)entry->data != 0l ? 120 : 32);

      else
      {
        if((signed int)*pos == 111)
        {
          start=strchr(pos, 124);
          tmp_if_expr_19 = start != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_19 = (_Bool)0;
        if(tmp_if_expr_19)
        {
          char *s_pos = (char *)(void *)0;
          signed int max = 0;
          strncpy(get_text__1__help, text, (unsigned long int)(start - text));
          get_text__1__help[start - text] = (char)0;
          get_text__1__help[pos - text] = (char)115;
          start = start + 1l;
          i = (signed int)(signed long int)entry->data;
          pos = start;
          for( ; !(start == ((char *)NULL)); i = i - 1)
          {
            if(i == 0)
              s_pos = pos;

            start=strchr(pos, 124);
            if(!(start == ((char *)NULL)))
            {
              if(!((signed long int)max >= start - pos))
                max = (signed int)(start - pos);

              pos = start + (signed long int)1;
            }

          }
          unsigned long int return_value_strlen_8;
          return_value_strlen_8=strlen(pos);
          if(!((unsigned long int)max >= return_value_strlen_8))
          {
            return_value_strlen_7=strlen(pos);
            max = (signed int)return_value_strlen_7;
          }

          if(width >= 1)
          {
            return_value_menu_width_10=menu_width(get_text__1__help);
            if(!(width >= -2 + return_value_menu_width_10 + max))
            {
              return_value_menu_width_9=menu_width(get_text__1__help);
              max = (width - return_value_menu_width_9) + 2;
            }

          }

          i = 0;
          for( ; !(s_pos == ((char *)NULL)); sub[(signed long int)tmp_post_11] = *tmp_post_12)
          {
            if(*s_pos == 0)
              break;

            if((signed int)*s_pos == 124)
              break;

            tmp_post_11 = i;
            i = i + 1;
            tmp_post_12 = s_pos;
            s_pos = s_pos + 1l;
          }
          for( ; !(i >= max); sub[(signed long int)tmp_post_13] = (char)32)
          {
            tmp_post_13 = i;
            i = i + 1;
          }
          sub[(signed long int)max] = (char)0;
          sprintf(storage, get_text__1__help, (const void *)sub);
        }

        else
        {
          if((signed int)*pos == 100)
            tmp_if_expr_17 = (_Bool)1;

          else
            tmp_if_expr_17 = (signed int)*pos == 115 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_17)
          {
            start=strchr(pos, 124);
            tmp_if_expr_18 = start != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_18 = (_Bool)0;
          if(tmp_if_expr_18)
          {
            char *right;
            char *return_value_strrchr_14;
            return_value_strrchr_14=strrchr(start, 124);
            right = return_value_strrchr_14 + (signed long int)1;
            strncpy(get_text__1__help, text, (unsigned long int)(pos - text));
            get_text__1__help[pos - text] = (char)0;
            if((signed int)*pos == 100)
            {
              unsigned long int return_value_strlen_15;
              return_value_strlen_15=strlen(right);
              sprintf(sub, "%d", (signed int)return_value_strlen_15);
              strcat(get_text__1__help, sub);
            }

            else
              strcat(get_text__1__help, right);
            unsigned long int return_value_strlen_16;
            return_value_strlen_16=strlen(get_text__1__help);
            i = (signed int)return_value_strlen_16;
            strncat(get_text__1__help, pos, (unsigned long int)(start - pos));
            get_text__1__help[((signed long int)i + start) - pos] = (char)0;
            if((signed int)*pos == 100)
              sprintf(storage, get_text__1__help, (signed int)(signed long int)entry->data);

            else
            {
              char ch;
              sscanf(right, "%d", &i);
              pos = (char *)entry->data;
              ch = pos[(signed long int)i];
              pos[(signed long int)i] = (char)0;
              sprintf(storage, get_text__1__help, pos);
              pos[(signed long int)i] = ch;
            }
          }

          else
            sprintf(storage, "%s", text);
        }
      }
    }

    else
      sprintf(storage, "%s", text);
    free((void *)text);
    unsigned long int return_value_strlen_20;
    return_value_strlen_20=strlen(storage);
    i = (signed int)return_value_strlen_20;
    signed int return_value_menu_is_sub_24;
    return_value_menu_is_sub_24=menu_is_sub(entry);
    if(!(return_value_menu_is_sub_24 == 0))
    {
      i = i - 1;
      for( ; !(i >= width); storage[(signed long int)tmp_post_21] = (char)32)
      {
        tmp_post_21 = i;
        i = i + 1;
      }
      tmp_post_22 = i;
      i = i + 1;
      storage[(signed long int)tmp_post_22] = (char)62;
    }

    else
      for( ; !(i >= width); storage[(signed long int)tmp_post_23] = (char)32)
      {
        tmp_post_23 = i;
        i = i + 1;
      }
    storage[(signed long int)i] = (char)0;
    return storage;
  }

  return (char *)(void *)0;
}

// get_themes
// file ../../src/mconfedit.c line 349
static void get_themes(struct anonymous_8 *entry)
{
  signed int i;
  signed int j;
  signed int len = 0;
  i = 0;
  for( ; !(i >= cnt_themes); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen((themes + (signed long int)i)->name);
    j = (signed int)return_value_strlen_1;
    len = len + (j > 32 ? 32 : j) + 5;
  }
  if(!(entry->text == ((char *)NULL)))
    free((void *)entry->text);

  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(char) /*1ul*/  * (unsigned long int)(len + 15));
  entry->text = (char *)return_value_malloc_2;
  strcpy(entry->text, "T&heme  [%o]");
  i = 0;
  for( ; !(i >= cnt_themes); i = i + 1)
  {
    strcat(entry->text, "|");
    strcat(entry->text, (themes + (signed long int)i)->color != 0 ? "(C) " : "(M) ");
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(entry->text);
    len = (signed int)return_value_strlen_3;
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen((themes + (signed long int)i)->name);
    j = (signed int)return_value_strlen_4;
    j = j > 32 ? 32 : j;
    strncat(entry->text, (themes + (signed long int)i)->name, (unsigned long int)j);
    entry->text[(signed long int)(len + j)] = (char)0;
  }
}

// get_tmp_file
// file ../../src/mutilities.h line 182
signed int get_tmp_file(const char *tmpl, char **name_used)
{
  char *fulltmpl;
  signed int retval;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  static const char *tmpsep = "";
  static const char *tmpdir = (const char *)(void *)0;
  if(tmpdir == ((const char *)NULL))
  {
    tmpdir=getenv("TMPDIR");
    if(tmpdir == ((const char *)NULL))
      tmpdir=getenv("TMP");

    if(tmpdir == ((const char *)NULL))
      tmpdir=getenv("TEMP");

    if(tmpdir == ((const char *)NULL))
      tmpdir = "/tmp";

    if(tmpdir == ((const char *)NULL))
      tmpdir = "/tmp";

    if(!(*tmpdir == 0))
    {
      return_value_strlen_1=strlen(tmpdir);
      tmp_if_expr_2 = (signed int)tmpdir[(signed long int)(return_value_strlen_1 - (unsigned long int)1)] == 47 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      tmpsep = "";

    else
      tmpsep = "/";
  }

  if(tmpl == ((const char *)NULL))
    tmpl = "mmXXXXXX";

  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(tmpdir);
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(tmpsep);
  unsigned long int return_value_strlen_5;
  return_value_strlen_5=strlen(tmpl);
  void *return_value_malloc_6;
  return_value_malloc_6=malloc(return_value_strlen_3 + return_value_strlen_4 + return_value_strlen_5 + (unsigned long int)1);
  fulltmpl = (char *)return_value_malloc_6;
  sprintf(fulltmpl, "%s%s%s", tmpdir, tmpsep, tmpl);
  retval=m_mkstemp(fulltmpl);
  if(retval == -1)
  {
    free((void *)fulltmpl);
    return -1;
  }

  else
  {
    if(!(name_used == ((char **)NULL)))
      *name_used = fulltmpl;

    else
      free((void *)fulltmpl);
    return retval;
  }
}

// handle_ListError
// file ../../src/mikmod.c line 466
static void handle_ListError(signed int tolerant, const char *filename, const char *archive, signed int mm_error)
{
  char buf[4136l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  const char *return_value_MikMod_strerror_1;
  if(tolerant == 0)
  {
    if(!(mm_error == 0))
    {
      return_value_MikMod_strerror_1=MikMod_strerror(MikMod_errno);
      snprintf(buf, (unsigned long int)(4096 + 40), "(reason: %s)\n", return_value_MikMod_strerror_1);
    }

    if(filename == ((const char *)NULL))
      exit_player(1, "Corrupted playlist, filename is NULL.\n%s", (const void *)buf);

    else
      if(!(archive == ((const char *)NULL)))
        exit_player(1, "MikMod error: can't load \"%s\" from archive \"%s\".\n%s", filename, archive, (const void *)buf);

      else
        exit_player(1, "MikMod error: can't load %s\n%s", filename, (const void *)buf);
  }

  else
  {
    if(!(filename == ((const char *)NULL)))
      snprintf(buf, (unsigned long int)(4096 + 40), "Error loading list entry \"%s\" !", filename);

    else
      snprintf(buf, (unsigned long int)(4096 + 40), "Error loading list entry !");
    display_message(buf);
    signed int return_value_PL_GetCurrentPos_2;
    return_value_PL_GetCurrentPos_2=PL_GetCurrentPos(&playlist);
    PL_DelEntry(&playlist, return_value_PL_GetCurrentPos_2);
  }
}

// handle_focus
// file ../../src/mwidget.c line 157
static signed int handle_focus(struct WIDGET *w, signed int ret, signed int from_activate)
{
  _Bool tmp_if_expr_1;
  if(!(ret == 0) && !(ret == 100))
    tmp_if_expr_1 = w->handle_focus != ((signed int (*)(struct WIDGET *, signed int))NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
  {
    signed int return_value;
    return_value=w->handle_focus((struct WIDGET *)w, ret);
    return return_value;
  }

  else
  {
    if(ret == 1)
    {
      ret = from_activate;
      if(ret == 100)
        dialog_close(w->d);

    }

    return ret;
  }
}

// handle_focus_link1
// file ../../src/mdialog.c line 50
static signed int handle_focus_link1(struct WIDGET *w_link1, signed int focus)
{
  _Bool tmp_if_expr_1_link1;
  if(focus == 1)
  {
    struct anonymous_19 *data = (struct anonymous_19 *)w_link1->data;
    if(!(data == ((struct anonymous_19 *)NULL)))
    {
      signed int button = -1;
      if((signed int)w_link1->type == TYPE_BUTTON)
        button = ((struct anonymous_13 *)w_link1)->active;

      if(!(button >= 1))
      {
        if(data->min >= 0)
        {
          if(data->max >= 0)
          {
            signed int value;
            value=atoi((char *)data->input);
            if(!(value >= data->min))
              tmp_if_expr_1_link1 = (_Bool)1;

            else
              tmp_if_expr_1_link1 = value > data->max ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_1_link1)
              return focus;

          }

        }

      }

      signed int return_value_link1;
      return_value_link1=data->handle_dlg(data->w, button, data->input, data->data);
      if(!(return_value_link1 == 0))
      {
        free((void *)data);
        dialog_close(w_link1->d);
      }

    }

    else
      dialog_close(w_link1->d);
    return 100;
  }

  return focus;
}

// handle_input_int
// file ../../src/mmenu.c line 313
static signed int handle_input_int(struct WIDGET *w, signed int button, void *input, void *data)
{
  if(!(button >= 1))
  {
    struct MMENU *m = (struct MMENU *)data;
    signed int return_value_atoi_1;
    return_value_atoi_1=atoi((char *)input);
    (m->entries + (signed long int)m->cur)->data = (void *)(signed long int)return_value_atoi_1;
    if(!(m->handle_select == ((void (*)(struct MMENU *))NULL)))
      m->handle_select(m);

  }

  return 1;
}

// handle_input_str
// file ../../src/mmenu.c line 301
static signed int handle_input_str(struct WIDGET *w, signed int button, void *input, void *data)
{
  if(!(button >= 1))
  {
    struct MMENU *m = (struct MMENU *)data;
    strcpy((char *)(m->entries + (signed long int)m->cur)->data, (char *)input);
    if(!(m->handle_select == ((void (*)(struct MMENU *))NULL)))
      m->handle_select(m);

  }

  return 1;
}

// handle_menu
// file ../../src/mconfedit.c line 734
static void handle_menu(struct MMENU *mn)
{
  switch(mn->id)
  {
    case 0:
    {
      switch(mn->cur)
      {
        case 4:
        {
          config_get_config(&config);
          Player_SetConfig(&config);
          win_status("Configuration activated");
          config_set_config(&config);
          break;
        }
        case 5:
        {
          config_get_config(&config);
          CF_Save(&config);
          Player_SetConfig(&config);
          win_status("Configuration saved and activated");
          config_set_config(&config);
          break;
        }
        case 6:
        {
          config_set_config(&config);
          win_status("Changed configuration reseted");
        }
      }
      break;
    }
    case 1:
    {
      if(mn->cur == 0)
        get_driver_options(&output_entries[(signed long int)1], &output_entries[(signed long int)0]);

      break;
    }
    case 3:
      if(mn->cur == 4)
      {
        signed int return_value_config_get_act_theme_1;
        return_value_config_get_act_theme_1=config_get_act_theme();
        if(!(return_value_config_get_act_theme_1 >= 2))
          dlg_message_open("Copy or copy and edit active (default-)theme?", "&Copy|Copy + &Edit|&Cancel", 2, 0, cb_themeedit, (void *)0);

        else
          dlg_message_open("Copy, edit, or delete the active theme?", "&Copy|&Edit|Delete|&Cancel", 3, 0, cb_themeedit, (void *)0);
      }

  }
}

// handle_opt_menu
// file ../../src/mmenu.c line 285
static void handle_opt_menu(struct MMENU *menu)
{
  signed int i;
  struct MMENU *m = (struct MMENU *)menu->data;
  (m->entries + (signed long int)m->cur)->data = (void *)(signed long int)menu->cur;
  menu_close(menu);
  i = 0;
  for( ; !(i >= menu->count); i = i + 1)
    free((void *)(menu->entries + (signed long int)i)->text);
  free((void *)menu->entries);
  free((void *)menu);
  if(!(m->handle_select == ((void (*)(struct MMENU *))NULL)))
    m->handle_select(m);

}

// help
// file ../../src/mikmod.c line 166
static void help(struct anonymous_3 *c)
{
  char output[4l];
  char *conf_name;
  conf_name=CF_GetFilename();
  puts("-= MikMod 3.2.7 =-\n(c) 2004 Raphael Assenat and others - see file AUTHORS for complete list");
  snprintf(output, (unsigned long int)4, "%s%c", c->mode_16bit != 0 ? "16" : "8", c->stereo != 0 ? 115 : 109);
  printf("\nUsage: %s [option|-y dir]... [module|playlist]...\n\nOutput options:\n  -d[river] n,options     Use nth driver for output (0: autodetect), default: %d\n  -o[utput] 8m|8s|16m|16s 8/16 bit output in stereo/mono, default: %s\n  -f[requency] nnnnn      Set mixing frequency, default: %d\n* -i[nterpolate]          Use interpolate mixing, default: %s\n* -hq[mixer]              Use high-quality (but slower) software mixer,\n                          default: %s\n* -su[rround]             Use surround mixing, default: %s\n  -r[everb] nn            Set reverb amount (0-15), default: %d\nPlayback options:\n  -v[olume] nn            Set volume from 0%% (silence) to 100%%, default: %d%%\n* -F, -fa[deout]          Force volume fade at the end of module, default: %s\n* -l[oops]                Enable in-module loops, default: %s\n* -a, -pa[nning]          Process panning effects, default: %s\n* -x, -pr[otracker]       Disable extended protracker effects, default: %s\nLoading options:\n  -y, -di[rectory] dir    Scan directory recursively for modules\n* -c[urious]              Look for hidden patterns in module, default: %s\n  -p[laymode] n           Playlist mode (1: loop module, 2: list multi\n                             4: shuffle list, 8: list random), default: %d\n* -t[olerant]             Don't halt on file access errors, default: %s\n", PRG_NAME, c->driver, (const void *)output, c->frequency, c->interpolate != 0 ? "Yes" : "No", c->hqmixer != 0 ? "Yes" : "No", c->surround != 0 ? "Yes" : "No", c->reverb, c->volume, c->fade != 0 ? "Yes" : "No", c->loop != 0 ? "Yes" : "No", c->panning != 0 ? "Yes" : "No", !(c->extspd != 0) ? "Yes" : "No", c->curious != 0 ? "Yes" : "No", c->playmode, c->tolerant != 0 ? "Yes" : "No");
  printf("Scheduling options (need root privileges or a setuid root binary):\n");
  printf("* -s, -ren[ice]           Renice to -20 (more scheduling priority), default: %s\n", c->renice == 1 ? "Yes" : "No");
  printf("* -S, -rea[ltime]         Get realtime priority (will hog CPU power), default: %s\n", c->renice == 2 ? "Yes" : "No");
  printf("Display options:\n  -q[uiet]                Quiet mode, no interface, displays only errors.\nInformation options:\n  -n, -in[formation]      List all available drivers and module loaders.\n  -N n, -drvinfo          Print information on a specific driver.\n  -V -ve[rsion]           Display MikMod version.\n  -h[elp]                 Display this help screen.\nConfiguration option:\n  -norc                   Don't parse the file '%s' on startup\n\nOptions marked with '*' also exist in negative form (eg -nointerpolate)\nF1 or H while playing: Display help panel.\n", conf_name);
  if(!(conf_name == ((char *)NULL)))
    free((void *)conf_name);

}

// hlist_close
// file ../../src/mlistedit.c line 526
static void hlist_close(struct anonymous_27 *data)
{
  dialog_close(data->w->w.d);
  free((void *)data);
}

// indent_change
// file ../../src/rcfile.c line 72
static void indent_change(signed int delta)
{
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(indent);
  len = (signed int)return_value_strlen_1;
  delta = delta * 2;
  if(len + delta >= 0 && !(len + delta >= 41))
    len = len + delta;

  indent[(signed long int)len] = (char)0;
  if(len >= 1)
  {
    indent[(signed long int)(len - 1)] = (char)32;
    indent[(signed long int)(len - 2)] = (char)32;
  }

}

// init_curses
// file ../../src/mwindow.c line 208
static void init_curses(void)
{
  initscr();
  cbreak();
  noecho();
  nonl();
  nodelay(stdscr, (_Bool)1);
  wtimeout(stdscr, 0);
  keypad(stdscr, (_Bool)1);
  cursor_old=curs_set(0);
  curses_on = 1;
  start_color();
  _Bool return_value_has_colors_1;
  return_value_has_colors_1=has_colors();
  if(COLOR_PAIRS >= 8 && !(return_value_has_colors_1 == (_Bool)0))
  {
    signed int i;
    signed int j;
    i = 0;
    for( ; !(i >= 8); i = i + 1)
    {
      j = 0;
      static signed short int colors[8l] = { (signed short int)0, (signed short int)4, (signed short int)2, (signed short int)6, (signed short int)1, (signed short int)5, (signed short int)3, (signed short int)7 };
      for( ; !(j >= 8); j = j + 1)
        if(!(8 * i + 1 + j >= 8))
          init_pair((signed short int)(i * 8 + j + 1), colors[(signed long int)j], colors[(signed long int)i]);

    }
    use_colors = 1;
  }

  else
    use_colors = 0;
}

// init_dlg_data
// file ../../src/mdialog.c line 75
static struct anonymous_19 * init_dlg_data(signed int (*handle_dlg)(struct WIDGET *, signed int, void *, void *), struct WIDGET *w, void *input, void *data)
{
  struct anonymous_19 *dlg_data = (struct anonymous_19 *)(void *)0;
  if(!(handle_dlg == ((signed int (*)(struct WIDGET *, signed int, void *, void *))NULL)))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct anonymous_19) /*40ul*/ );
    dlg_data = (struct anonymous_19 *)return_value_malloc_1;
    dlg_data->handle_dlg = handle_dlg;
    dlg_data->w = w;
    dlg_data->input = input;
    dlg_data->data = data;
    dlg_data->max = -1;
    dlg_data->min = dlg_data->max;
  }

  return dlg_data;
}

// init_themes
// file ../../src/mconfig.c line 370
static void init_themes(struct anonymous_3 *cfg)
{
  cfg->cnt_themes = 2;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_1) /*24ul*/  * (unsigned long int)cfg->cnt_themes);
  cfg->themes = (struct anonymous_1 *)return_value_malloc_1;
  (cfg->themes + (signed long int)0)->name = "<defaultColor>";
  (cfg->themes + (signed long int)0)->color = 1;
  (cfg->themes + (signed long int)0)->attrs = color_attributes;
  (cfg->themes + (signed long int)1)->name = "<defaultMono>";
  (cfg->themes + (signed long int)1)->color = 0;
  (cfg->themes + (signed long int)1)->attrs = mono_attributes;
  cfg->theme = 0;
}

// input_handle_event
// file ../../src/mwidget.c line 171
static signed int input_handle_event(struct anonymous_12 *w, enum anonymous_18 event, signed int ch, signed int int_input)
{
  char *pos;
  signed int i;
  signed int return_value_handle_focus_1;
  signed int return_value_handle_focus_2;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  unsigned long int return_value_strlen_5;
  signed int return_value_handle_focus_6;
  _Bool tmp_if_expr_9;
  const unsigned short int **return_value___ctype_b_loc_8;
  if((signed int)event == WID_HOTKEY)
    return 0;

  else
    if((signed int)event == WID_GET_FOCUS)
      return 100;

    else
      if((signed int)event == WID_KEY)
      {
        if(w->w.handle_key == ((signed int (*)(struct WIDGET *, signed int))NULL))
          goto __CPROVER_DUMP_L3;

        i=w->w.handle_key((struct WIDGET *)w, ch);
        return i;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        switch(ch)
        {
          case 0403:
          {
            return_value_handle_focus_1=handle_focus((struct WIDGET *)w, -1, 0);
            return return_value_handle_focus_1;
          }
          case 9:

          case 0402:
          {
            return_value_handle_focus_2=handle_focus((struct WIDGET *)w, 1, 0);
            return return_value_handle_focus_2;
          }
          case 0404:

          case 2:
          {
            if(w->cur_pos >= 1)
              w->cur_pos = w->cur_pos - 1;

            break;
          }
          case 0405:

          case 6:
          {
            return_value_strlen_3=strlen(w->input);
            if(!((unsigned long int)w->cur_pos >= return_value_strlen_3))
              w->cur_pos = w->cur_pos + 1;

            break;
          }
          case 0406:

          case 0523:

          case 1:
          {
            w->cur_pos = 0;
            break;
          }
          case 0550:

          case 0522:

          case 5:
          {
            return_value_strlen_4=strlen(w->input);
            w->cur_pos = (signed int)return_value_strlen_4;
            break;
          }
          case 11:
          {
            w->input[(signed long int)w->cur_pos] = (char)0;
            break;
          }
          case 21:
          {
            w->cur_pos = 0;
            w->input[(signed long int)w->cur_pos] = (char)0;
            break;
          }
          case 0512:

          case 4:

          case 127:
          {
            return_value_strlen_5=strlen(w->input);
            if(!((unsigned long int)w->cur_pos >= return_value_strlen_5))
            {
              pos = &w->input[(signed long int)w->cur_pos];
              for( ; !(*pos == 0); pos = pos + 1l)
                *pos = pos[(signed long int)1];
            }

            break;
          }
          case 0407:

          case 8:
          {
            if(w->cur_pos >= 1)
            {
              pos = &w->input[(signed long int)(w->cur_pos - 1)];
              for( ; !(*pos == 0); pos = pos + 1l)
                *pos = pos[(signed long int)1];
              w->cur_pos = w->cur_pos - 1;
            }

            break;
          }
          case 0527:

          case 13:
          {
            return_value_handle_focus_6=handle_focus((struct WIDGET *)w, 100 + 1, 1);
            return return_value_handle_focus_6;
          }
          default:
          {
            if(ch >= 256 || !(ch >= 32))
              return 0;

            if(!(int_input == 0))
            {
              return_value___ctype_b_loc_8=__ctype_b_loc();
              tmp_if_expr_9 = ((signed int)(*return_value___ctype_b_loc_8)[(signed long int)(signed int)ch] & (signed int)(unsigned short int)2048) != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_9 = (_Bool)0;
            if(int_input == 0 || tmp_if_expr_9)
            {
              unsigned long int return_value_strlen_7;
              return_value_strlen_7=strlen(w->input);
              i = (signed int)return_value_strlen_7;
              if(!(i >= w->length))
              {
                for( ; i >= w->cur_pos; i = i - 1)
                  w->input[(signed long int)(i + 1)] = w->input[(signed long int)i];
                w->input[(signed long int)w->cur_pos] = (char)ch;
                w->cur_pos = w->cur_pos + 1;
              }

            }

          }
        }
        if(!(w->cur_pos >= w->start))
          w->start = w->cur_pos;

        if(w->cur_pos >= w->start + w->w.width)
          w->start = (w->cur_pos - w->w.width) + 1;

        str_paint(w);
        return 100;
      }
}

// int_free
// file ../../src/mwidget.c line 287
static void int_free(struct anonymous_12 *w)
{
  free((void *)w->input);
  free((void *)w);
}

// int_get_size
// file ../../src/mwidget.c line 303
static void int_get_size(struct anonymous_12 *w, signed int *width, signed int *height)
{
  *width = w->w.def_width;
  *height = 1;
}

// int_handle_event
// file ../../src/mwidget.c line 298
static signed int int_handle_event(struct anonymous_12 *w, enum anonymous_18 event, signed int ch)
{
  signed int return_value_input_handle_event_1;
  return_value_input_handle_event_1=input_handle_event((struct anonymous_12 *)w, event, ch, 1);
  return return_value_input_handle_event_1;
}

// int_paint
// file ../../src/mwidget.c line 293
static void int_paint(struct anonymous_12 *w)
{
  str_paint((struct anonymous_12 *)w);
}

// label_free
// file ../../src/mwidget.c line 60
static void label_free(struct anonymous_11 *w)
{
  free((void *)w->msg);
  free((void *)w);
}

// label_get_size
// file ../../src/mwidget.c line 90
static void label_get_size(struct anonymous_11 *w, signed int *width, signed int *height)
{
  char *pos;
  signed int x = 0;
  *width = 0;
  *height = 0;
  pos = w->msg;
  for( ; !(*pos == 0); pos = pos + 1l)
  {
    if((signed int)*pos == 10)
    {
      *height = *height + 1;
      if(!(*width >= x))
        *width = x;

      x = -1;
    }

    x = x + 1;
  }
  if(!(*width >= x))
    *width = x;

  *height = *height + 1;
}

// label_handle_event
// file ../../src/mwidget.c line 85
static signed int label_handle_event(struct anonymous_11 *w, enum anonymous_18 event, signed int ch)
{
  return 0;
}

// label_paint
// file ../../src/mwidget.c line 66
static void label_paint(struct anonymous_11 *w)
{
  char *start;
  char *pos;
  signed int y = w->w.y;
  enum anonymous_7 return_value_base_attr_1;
  return_value_base_attr_1=base_attr(w->w.d, (enum anonymous_7)ATTR_DLG_LABEL);
  win_attrset(return_value_base_attr_1);
  start = w->msg;
  pos = w->msg;
  for( ; !(*pos == 0); pos = pos + 1l)
    if((signed int)*pos == 10)
    {
      *pos = (char)0;
      win_print(w->w.d->win, w->w.x, y, start);
      *pos = (char)10;
      start = pos + (signed long int)1;
      y = y + 1;
    }

  win_print(w->w.d->win, w->w.x, y, start);
}

// list_free
// file ../../src/mwidget.c line 457
static void list_free(struct anonymous_14 *w)
{
  signed int i = 0;
  for( ; !(i >= w->cnt); i = i + 1)
    free((void *)w->entries[(signed long int)i]);
  free((void *)w->entries);
  if(!(w->title == ((char *)NULL)))
    free((void *)w->title);

  free((void *)w);
}

// list_get_size
// file ../../src/mwidget.c line 582
static void list_get_size(struct anonymous_14 *w, signed int *width, signed int *height)
{
  if(!(w->w.def_width >= *width))
    *width = w->w.def_width;

  if(!(*width >= 15))
    *width = 15;

  if(!(w->w.def_height >= *height))
    *height = w->w.def_height;

  if(!(*height >= 5))
    *height = 5;

}

// list_handle_event
// file ../../src/mwidget.c line 522
static signed int list_handle_event(struct anonymous_14 *w, enum anonymous_18 event, signed int ch)
{
  signed int i;
  signed int old_cur;
  signed int tmp_if_expr_1;
  signed int return_value_handle_focus_2;
  signed int return_value_handle_focus_3;
  signed int return_value_handle_focus_4;
  signed int return_value_handle_focus_5;
  if((signed int)event == WID_HOTKEY)
    return 0;

  else
    if((signed int)event == WID_GET_FOCUS)
      return 100;

    else
      if((signed int)event == WID_KEY)
      {
        if(w->w.handle_key == ((signed int (*)(struct WIDGET *, signed int))NULL))
          goto __CPROVER_DUMP_L3;

        i=w->w.handle_key((struct WIDGET *)w, ch);
        return i;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        old_cur = w->cur;
        switch(ch)
        {
          case 0403:
          {
            if(w->cur >= 1)
              w->cur = w->cur - 1;

            break;
          }
          case 0402:
          {
            if(!(w->cur >= w->cnt + -1))
              w->cur = w->cur + 1;

            break;
          }
          case 0523:
          {
            w->cur = w->cur - (w->w.height - 3);
            if(!(w->cur >= 0))
              w->cur = 0;

            break;
          }
          case 0522:
          {
            w->cur = w->cur + (w->w.height - 3);
            if(w->cur >= w->cnt)
            {
              if(w->cnt >= 1)
                tmp_if_expr_1 = w->cnt - 1;

              else
                tmp_if_expr_1 = 0;
              w->cur = tmp_if_expr_1;
            }

            break;
          }
          case 0406:
          {
            w->cur = 0;
            break;
          }
          case 0550:
          {
            w->cur = w->cnt - 1;
            break;
          }
          case 0404:
          {
            return_value_handle_focus_2=handle_focus((struct WIDGET *)w, -1, 0);
            return return_value_handle_focus_2;
          }
          case 0405:

          case 9:
          {
            return_value_handle_focus_3=handle_focus((struct WIDGET *)w, 1, 0);
            return return_value_handle_focus_3;
          }
          case 0527:

          case 13:
          {
            return_value_handle_focus_4=handle_focus((struct WIDGET *)w, 100 + 1, 100 + 1);
            return return_value_handle_focus_4;
          }
          default:
            return 0;
        }
        if(!(w->cur >= w->first))
          w->first = w->cur;

        if(w->cur >= w->first + w->w.height + -2)
          w->first = (w->cur - w->w.height) + 3;

        list_paint(w);
        if((signed int)w->sel_mode == WID_SEL_BROWSE)
        {
          if(old_cur == w->cur)
            goto __CPROVER_DUMP_L23;

          return_value_handle_focus_5=handle_focus((struct WIDGET *)w, 100 + 1, 100 + 1);
          return return_value_handle_focus_5;
        }

        else
        {

        __CPROVER_DUMP_L23:
          ;
          return 100;
        }
      }
}

// list_open
// file ../../src/mlistedit.h line 38
void list_open(signed int *actLine)
{
  static struct anonymous_8 sort_entries[7l] = { { .text="by &name", .data=NULL, .help="Sort list by name of modules" },
    { .text="by &extension", .data=NULL, .help="Sort list by extension of modules" },
    { .text="by &path", .data=NULL, .help="Sort list by path of modules/archives" },
    { .text="by &time", .data=NULL, .help="Sort list by playing time of modules" },
    { .text="%---------", .data=NULL, .help=(char *)(void *)0 },
    { .text="[%c] &reverse", .data=NULL, .help="Smaller to bigger or reverse sort" },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
  static struct anonymous_24 menu_data;
  static struct MMENU sort_menu = { .cur=0, .first=0, .count=-1, .key_left=1, .entries=sort_entries,
    .handle_select=cb_handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)&menu_data, .id=2 };
  static struct anonymous_8 file_entries[5l] = { { .text="&Load...", .data=NULL, .help="Load new playlists/modules" },
    { .text="&Insert...", .data=NULL, .help="Insert new playlists/modules in current playlist" },
    { .text="&Save", .data=NULL, .help=(char *)(void *)0 },
    { .text="Save &as...", .data=NULL, .help="Save playlist in a specified file" },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
  static struct MMENU file_menu = { .cur=0, .first=0, .count=-1, .key_left=1, .entries=file_entries,
    .handle_select=cb_handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)&menu_data, .id=1 };
  static struct anonymous_8 list_open__1__entries[9l] = { { .text="&Play", .data=NULL, .help="Play selected entry" },
    { .text="&Remove", .data=NULL, .help="Remove selected entry from list" },
    { .text="&Delete...", .data=NULL, .help="Remove selected entry from list and delete it on disk" },
    { .text="%----------", .data=NULL, .help=(char *)(void *)0 },
    { .text="&File        %>", .data=(void *)&file_menu, .help="Load/Save playlist/modules" },
    { .text="&Shuffle", .data=NULL, .help="Shuffle the list" },
    { .text="S&ort        %>", .data=(void *)&sort_menu, .help="Sort the list" },
    { .text="&Back", .data=NULL, .help="Leave menu" },
    { .text=(char *)(void *)0, .data=(void *)0, .help=(char *)(void *)0 } };
  static struct MMENU list_open__1__menu = { .cur=0, .first=0, .count=-1, .key_left=1, .entries=list_open__1__entries,
    .handle_select=cb_handle_menu, .win=(struct MWINDOW *)(void *)0,
    .data=(void *)&menu_data, .id=0 };
  menu_data.menu = &list_open__1__menu;
  menu_data.actLine = actLine;
  set_help(&file_entries[(signed long int)2], "Save list in '%s'", config.pl_name);
  menu_open(&list_open__1__menu, 5, 5);
}

// list_paint
// file ../../src/mwidget.c line 467
static void list_paint(struct anonymous_14 *w)
{
  signed int i;
  signed int x;
  signed int visible;
  char ch;
  x = (w->w.x + w->w.width) - 1;
  visible = w->w.height - 2;
  enum anonymous_7 return_value_base_attr_1;
  return_value_base_attr_1=base_attr(w->w.d, (enum anonymous_7)ATTR_DLG_FRAME);
  win_attrset(return_value_base_attr_1);
  win_box(w->w.d->win, w->w.x, w->w.y, x, (w->w.y + w->w.height) - 1);
  if(!(w->title == ((char *)NULL)))
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(w->title);
    if(!((unsigned long int)(w->w.width + -2) >= return_value_strlen_2))
    {
      ch = w->title[(signed long int)(w->w.width - 2)];
      w->title[(signed long int)(w->w.width - 2)] = (char)0;
      win_print(w->w.d->win, w->w.x + 1, w->w.y, w->title);
      w->title[(signed long int)(w->w.width - 2)] = ch;
    }

    else
      win_print(w->w.d->win, w->w.x + 1, w->w.y, w->title);
  }

  if(w->first >= 1)
    win_print(w->w.d->win, x, w->w.y + 1, "^");

  else
    win_print(w->w.d->win, x, w->w.y + 1, "-");
  if(!(w->first + visible >= w->cnt))
    win_print(w->w.d->win, x, (w->w.y + w->w.height) - 2, "v");

  else
    win_print(w->w.d->win, x, (w->w.y + w->w.height) - 2, "-");
  if(visible >= 3)
  {
    i = 0;
    if(w->cnt >= 2)
      i = (w->cur * (visible - 3)) / (w->cnt - 1);

    win_print(w->w.d->win, x, w->w.y + i + 2, "*");
  }

  i = w->first;
  enum anonymous_7 return_value_base_attr_3;
  for( ; !(i >= w->first + visible); i = i + 1)
  {
    storage[(signed long int)0] = (char)0;
    if(i == w->cur)
    {
      if(!(w->w.has_focus == 0))
        win_attrset((enum anonymous_7)ATTR_DLG_LIST_FOCUS);

      else
        win_attrset((enum anonymous_7)ATTR_DLG_LIST_NOFOCUS);
    }

    else
    {
      return_value_base_attr_3=base_attr(w->w.d, (enum anonymous_7)ATTR_DLG_FRAME);
      win_attrset(return_value_base_attr_3);
    }
    if(!(i >= w->cnt))
    {
      strncpy(storage, w->entries[(signed long int)i], (unsigned long int)(w->w.width - 2));
      storage[(signed long int)(w->w.width - 2)] = (char)0;
    }

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(storage);
    x = (signed int)return_value_strlen_4;
    for( ; !(x >= w->w.width + -2); x = x + 1)
      storage[(signed long int)x] = (char)32;
    storage[(signed long int)(w->w.width - 2)] = (char)0;
    win_print(w->w.d->win, w->w.x + 1, ((w->w.y + i) - w->first) + 1, storage);
  }
}

// list_scan_dir
// file ../../src/mlistedit.h line 35
signed int list_scan_dir(char *path, signed int quiet)
{
  struct stat statbuf;
  signed int added = 0;
  char dir[8192l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char *pos;
  if(!((signed int)*path == 47))
  {
    getcwd(dir, (unsigned long int)4096);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(dir);
    if(!((signed int)dir[-1l + (signed long int)return_value_strlen_1] == 47))
      strcat(dir, "/");

  }

  strcat(dir, path);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(dir);
  pos = dir + (signed long int)return_value_strlen_2;
  if(!((signed int)pos[-1l] == 47))
  {
    *pos = (char)47;
    pos[(signed long int)1] = (char)0;
  }

  signed int return_value_stat_3;
  return_value_stat_3=stat(dir, &statbuf);
  if(return_value_stat_3 == 0)
  {
    if((61440u & statbuf.st_mode) == 16384u)
      scan_dir(dir, 1, 0, (struct anonymous_25 *)(void *)0, (enum anonymous_26)FREQ_ADD, cb_list_scan_dir, (void *)(signed long int)quiet, &added, (signed int *)(void *)0);

  }

  return added;
}

// m_mkstemp
// file ../../src/mutilities.c line 238
static signed int m_mkstemp(char *tmpl)
{
  signed int return_value_mkstemp_1;
  return_value_mkstemp_1=mkstemp(tmpl);
  return return_value_mkstemp_1;
}

// main
// file ../../src/mikmod.c line 836
signed int main(signed int argc, char **argv)
{
  signed int t;
  signed int main__1__use_threads = 0;
  char *pos = (char *)(void *)0;
  signed long int engineversion;
  engineversion=MikMod_GetVersion();
  pos=strrchr(argv[(signed long int)0], 47);
  char *tmp_if_expr_1;
  if(!(pos == ((char *)NULL)))
    tmp_if_expr_1 = pos + (signed long int)1;

  else
    tmp_if_expr_1 = argv[(signed long int)0];
  PRG_NAME = tmp_if_expr_1;
  t = 0;
  signed int return_value_strcmp_2;
  _Bool tmp_if_expr_4;
  signed int return_value_strcmp_3;
  for( ; !(t >= argc); t = t + 1)
  {
    return_value_strcmp_2=strcmp(argv[(signed long int)t], "-norc");
    if(return_value_strcmp_2 == 0)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_strcmp_3=strcmp(argv[(signed long int)t], "--norc");
      tmp_if_expr_4 = !(return_value_strcmp_3 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_4)
    {
      status.norc = 1;
      argv[(signed long int)t][(signed long int)0] = (char)0;
      break;
    }

  }
  CF_Init(&config);
  if(status.norc == 0)
    CF_Load(&config);

  Player_InitLib();
  PL_InitList(&playlist);
  opterr = 0;
  unsigned long int return_value_strlen_5;
  _Bool tmp_if_expr_6;
  signed int return_value_toupper_7;
  do
  {
    t=getopt_long_only(argc, argv, "d:o:f:r:v:y:p:iFlaxctsSqn::N:Vh", options, (signed int *)(void *)0);
    if(t == -1)
      break;

    switch(t)
    {
      case 100:
      {
        return_value_strlen_5=strlen(optarg);
        if(return_value_strlen_5 >= 3ul)
        {
          char *opts;
          opts=strchr(optarg, 44);
          if(!(opts == ((char *)NULL)))
          {
            *opts = (char)0;
            if(!(opts - optarg >= 3l))
              get_int(optarg, &config.driver, 0, 999);

            else
              config.driver=MikMod_DriverFromAlias(optarg);
            opts = opts + 1l;
            rc_set_string(&config.driveroptions, opts, 99);
          }

          else
            config.driver=MikMod_DriverFromAlias(optarg);
        }

        else
          get_int(optarg, &config.driver, 0, 999);
        break;
      }
      case 111:
      {
        pos = optarg;
        do
        {
          if(!(pos == ((char *)NULL)))
            tmp_if_expr_6 = *pos != 0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_6 = (_Bool)0;
          if(!tmp_if_expr_6)
            break;

          return_value_toupper_7=toupper((signed int)*pos);
          switch(return_value_toupper_7)
          {
            case 49:

            case 54:
            {
              config.mode_16bit = 1;
              break;
            }
            case 56:
            {
              config.mode_16bit = 0;
              break;
            }
            case 83:
            {
              config.stereo = 1;
              break;
            }
            case 77:
              config.stereo = 0;
          }
          pos = pos + 1l;
        }
        while((_Bool)1);
        break;
      }
      case 102:
      {
        get_int(optarg, &config.frequency, 4000, 60000);
        break;
      }
      case 105:
      {
        config.interpolate = 1;
        break;
      }
      case 1:
      {
        config.interpolate = 0;
        break;
      }
      case 2:
      {
        config.hqmixer = 1;
        break;
      }
      case 3:
      {
        config.hqmixer = 0;
        break;
      }
      case 4:
      {
        config.surround = 1;
        break;
      }
      case 5:
      {
        config.surround = 0;
        break;
      }
      case 114:
      {
        get_int(optarg, &config.reverb, 0, 15);
        break;
      }
      case 118:
      {
        get_int(optarg, &config.volume, 0, 100);
        break;
      }
      case 70:
      {
        config.fade = 1;
        break;
      }
      case 6:
      {
        config.fade = 0;
        break;
      }
      case 108:
      {
        config.loop = 1;
        break;
      }
      case 7:
      {
        config.loop = 0;
        break;
      }
      case 97:
      {
        config.panning = 1;
        break;
      }
      case 8:
      {
        config.panning = 0;
        break;
      }
      case 120:
      {
        config.extspd = 0;
        break;
      }
      case 9:
      {
        config.extspd = 1;
        break;
      }
      case 121:
      {
        list_scan_dir(optarg, quiet);
        break;
      }
      case 99:
      {
        config.curious = 1;
        break;
      }
      case 10:
      {
        config.curious = 0;
        break;
      }
      case 112:
      {
        get_int(optarg, &config.playmode, 0, 1 | 2 | 4 | 8);
        break;
      }
      case 116:
      {
        config.tolerant = 1;
        break;
      }
      case 11:
      {
        config.tolerant = 0;
        break;
      }
      case 115:
      {
        config.renice = 1;
        break;
      }
      case 83:
      {
        config.renice = 2;
        break;
      }
      case 12:
      {
        config.renice = 0;
        break;
      }
      case 113:
      {
        quiet = 1;
        break;
      }
      case 110:
      {
        if(!(optarg == ((char *)NULL)))
        {
          signed int drvno;
          get_int(optarg, &drvno, 1, 99);
          puts("-= MikMod 3.2.7 =-\n(c) 2004 Raphael Assenat and others - see file AUTHORS for complete list");
          display_driver_help(drvno);
        }

        else
        {
          puts("-= MikMod 3.2.7 =-\n(c) 2004 Raphael Assenat and others - see file AUTHORS for complete list");
          printf("Sound engine version %ld.%ld.%ld\n", engineversion >> 16 & (signed long int)255, engineversion >> 8 & (signed long int)255, engineversion & (signed long int)255);
          char *return_value_MikMod_InfoDriver_8;
          return_value_MikMod_InfoDriver_8=MikMod_InfoDriver();
          char *return_value_MikMod_InfoLoader_9;
          return_value_MikMod_InfoLoader_9=MikMod_InfoLoader();
          printf("\nAvailable drivers are :\n%s\n\nRecognized module formats are :\n%s\n", return_value_MikMod_InfoDriver_8, return_value_MikMod_InfoLoader_9);
        }
        exit(0);
      }
      case 78:
      {
        signed int main__1__2__1__5__drvno;
        get_int(optarg, &main__1__2__1__5__drvno, 1, 99);
        puts("-= MikMod 3.2.7 =-\n(c) 2004 Raphael Assenat and others - see file AUTHORS for complete list");
        display_driver_help(main__1__2__1__5__drvno);
        exit(0);
      }
      case 86:
      {
        puts("-= MikMod 3.2.7 =-\n(c) 2004 Raphael Assenat and others - see file AUTHORS for complete list");
        printf("Sound engine version %ld.%ld.%ld\n", engineversion >> 16 & (signed long int)255, engineversion >> 8 & (signed long int)255, engineversion & (signed long int)255);
        exit(0);
      }
      case 104:
      {
        help(&config);
        exit(0);
      }
      default:
        ;
    }
  }
  while((_Bool)1);
  set_priority(&config);
  t = optind;
  for( ; !(t >= argc); t = t + 1)
  {
    if(quiet == 0)
    {
      printf("\rScanning files... %c (%d left) ", "/-\\|"[(signed long int)(t & 3)], argc - t);
      fflush(stdout);
    }

    MA_FindFiles(&playlist, argv[(signed long int)t]);
  }
  signed int return_value_PL_GetLength_10;
  return_value_PL_GetLength_10=PL_GetLength(&playlist);
  if(return_value_PL_GetLength_10 == 0)
  {
    if(status.norc == 0)
      PL_LoadDefault(&playlist);

  }

  PL_DelDouble(&playlist);
  if(!((4 & config.playmode) == 0))
    PL_Randomize(&playlist);

  PL_InitCurrent(&playlist);
  if(quiet == 0)
    puts("-= MikMod 3.2.7 =-\n(c) 2004 Raphael Assenat and others - see file AUTHORS for complete list\n\n - MikMod authors and contributors are:\n   Jean-Philippe Ajirent - Peter Amstutz - Raphael Assenat - Anders Bjoerklund\n   Dimitri Boldyrev - Peter Breitling - Arne de Bruijn - Douglas Carmichael\n   Chris Conn - Arnout Cosman - Shlomi Fish - Paul Fisher - Tobias Gloth\n   Roine Gustaffson - Bjornar Henden - Simon Hosie - Stephan Kanthak\n   Alexander Kerkhove - ``Kodiak'' - Mario Koeppen - Mike Leibow\n   Andy Lo A Foe - Frank Loemker - Sylvain Marchand - Claudio Matsuoka\n   Jeremy McDonald - Steve McIntyre - Brian McKinney - Samuel A Megens\n   ``MenTaLguY'' - Jean-Paul Mikkers - Thomas Neumann - C Ray C\n   Steffen Rusitschka - Ozkan Sezer - Jake Stine - Stefan Tibus - Tinic Urou\n   Miodrag Vallat - Kev Vance - Lutz Vieweg - Vince Vu\n   Valtteri Vuorikoski - Andrew Zabolotny\n\n - This program is free software covered by the GNU General Public License\n   and comes with ABSOLUTELY NO WARRANTY.\n\nType 'mikmod -h' for command line options!\n");

  win_init(quiet);
  display_init();
  Player_SetConfig(&config);
  main__1__use_threads=MP_Init();
  signal(15, ExitGracefully);
  signal(2, ExitGracefully);
  if(main__1__use_threads == 0)
  {
    signal(10, GotoNext);
    signal(12, GotoPrev);
  }

  if(quiet == 0)
    win_panel_set_handle_key(0, player_handle_key);

  win_timeout_add(5, player_timeout, (void *)0);
  win_run();
  return 0;
}

// menu_check
// file ../../src/mmenu.c line 43
static signed int menu_check(char *text, char ch)
{
  for( ; !(*text == 0); text = text + 1l)
    if((signed int)*text == 37)
    {
      text = text + 1l;
      if(*text == ch)
        return 1;

      else
        if(!((signed int)*text == 37))
          return 0;

    }

  return 0;
}

// menu_close
// file ../../src/mmenu.c line 410
void menu_close(struct MMENU *menu)
{
  signed int i = 0;
  signed int return_value_menu_is_sub_1;
  for( ; !(i >= menu->count); i = i + 1)
  {
    return_value_menu_is_sub_1=menu_is_sub(&menu->entries[(signed long int)i]);
    if(!(return_value_menu_is_sub_1 == 0))
      menu_close((struct MMENU *)(menu->entries + (signed long int)i)->data);

  }
  if(!(menu->win == ((struct MWINDOW *)NULL)))
  {
    win_status((const char *)(void *)0);
    win_close(menu->win);
    menu->win = (struct MWINDOW *)(void *)0;
  }

}

// menu_do_repaint
// file ../../src/mmenu.c line 210
static void menu_do_repaint(struct MWINDOW *win, signed int diff)
{
  struct MMENU *m = (struct MMENU *)win->data;
  signed int height;
  signed int t;
  signed int hl_pos;
  char *pos;
  char *txt;
  char hl[2l];
  char *menu_do_repaint__1__help;
  height = win->height;
  if(!(m->count >= height))
    height = m->count;

  m->cur = m->cur + diff;
  if(!(m->cur >= 0))
    m->cur = m->count - 1;

  else
    if(m->cur >= m->count)
      m->cur = 0;

  for( ; (signed int)*(m->entries + (signed long int)m->cur)->text == 37; m->cur = m->cur + (diff > 0 ? 1 : -1))
    if(!((signed int)(m->entries + (signed long int)m->cur)->text[1l] == 45))
      break;

  if(!(m->cur >= m->first))
    m->first = m->cur;

  else
    if(m->cur >= m->first + height)
      m->first = (m->cur - height) + 1;

  hl[(signed long int)1] = (char)0;
  t = m->first;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  do
  {
    if(!(t >= m->count))
      tmp_if_expr_1 = t < height + m->first ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    txt=get_text(&m->entries[(signed long int)t], win->width);
    hl_pos = -1;
    menu_do_repaint__1__help = txt;
    do
    {
      pos=strchr(menu_do_repaint__1__help, 38);
      if(pos == ((char *)NULL))
        break;

      menu_do_repaint__1__help = pos + (signed long int)1;
      if(!((signed int)pos[1l] == 38))
      {
        hl_pos = (signed int)(pos - txt);
        hl[(signed long int)0] = pos[(signed long int)1];
      }

      pos = pos + 1l;
      for( ; !(*pos == 0); pos = pos + 1l)
        *(pos - (signed long int)1) = *pos;
      *(pos - (signed long int)1) = (char)32;
      if(hl_pos >= 0)
        txt[(signed long int)hl_pos] = (char)0;

    }
    while((_Bool)1);
    if(t == m->cur)
    {
      win_attrset((enum anonymous_7)ATTR_MENU_ACTIVE);
      win_print(win, 0, t - m->first, txt);
      if(hl_pos >= 0)
      {
        win_attrset((enum anonymous_7)ATTR_MENU_AHOTKEY);
        win_print(win, hl_pos, t - m->first, hl);
        win_attrset((enum anonymous_7)ATTR_MENU_ACTIVE);
        win_print(win, hl_pos + 1, t - m->first, &txt[(signed long int)(hl_pos + 1)]);
      }

      win_status((m->entries + (signed long int)t)->help);
    }

    else
    {
      if((signed int)*(m->entries + (signed long int)t)->text == 37)
        tmp_if_expr_2 = (signed int)(m->entries + (signed long int)t)->text[(signed long int)1] == 45 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        win_attrset((enum anonymous_7)ATTR_MENU_FRAME);
        win_line(win, 0, t - m->first, win->width - 1, t - m->first);
      }

      else
      {
        win_attrset((enum anonymous_7)ATTR_MENU_INACTIVE);
        if(hl_pos >= 0)
        {
          win_print(win, 0, t - m->first, txt);
          win_attrset((enum anonymous_7)ATTR_MENU_IHOTKEY);
          win_print(win, hl_pos, t - m->first, hl);
          win_attrset((enum anonymous_7)ATTR_MENU_INACTIVE);
          win_print(win, hl_pos + 1, t - m->first, &txt[(signed long int)(hl_pos + 1)]);
        }

        else
          win_print(win, 0, t - m->first, txt);
      }
    }
    t = t + 1;
  }
  while((_Bool)1);
}

// menu_do_select
// file ../../src/mmenu.c line 325
static signed int menu_do_select(struct MWINDOW *win)
{
  struct MMENU *m = (struct MMENU *)win->data;
  struct anonymous_8 *entry = &m->entries[(signed long int)m->cur];
  signed int return_value_menu_is_toggle_13;
  return_value_menu_is_toggle_13=menu_is_toggle(entry);
  signed int return_value_menu_is_option_12;
  unsigned long int return_value_strlen_3;
  signed int return_value_menu_is_str_11;
  signed int return_value_menu_is_int_10;
  signed int return_value_menu_is_sub_9;
  if(!(return_value_menu_is_toggle_13 == 0))
  {
    entry->data = (void *)(signed long int)!((signed long int)entry->data != 0l);
    menu_do_repaint(win, 0);
  }

  else
  {
    return_value_menu_is_option_12=menu_is_option(entry);
    if(!(return_value_menu_is_option_12 == 0))
    {
      char *menu_do_select__1__2__pos;
      char *menu_do_select__1__2__start;
      struct anonymous_8 *menu_do_select__1__2__sub;
      struct MMENU *newmenu;
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct MMENU) /*56ul*/ );
      newmenu = (struct MMENU *)return_value_malloc_1;
      signed int cnt = 1;
      signed int i;
      menu_do_select__1__2__start=strchr(entry->text, 124);
      menu_do_select__1__2__start = menu_do_select__1__2__start + 1l;
      menu_do_select__1__2__pos = menu_do_select__1__2__start;
      do
      {
        menu_do_select__1__2__pos=strchr(menu_do_select__1__2__pos, 124);
        if(menu_do_select__1__2__pos == ((char *)NULL))
          break;

        menu_do_select__1__2__pos = menu_do_select__1__2__pos + 1l;
        cnt = cnt + 1;
      }
      while((_Bool)1);
      newmenu->cur = (signed int)(signed long int)entry->data;
      newmenu->first = 0;
      newmenu->count = cnt;
      newmenu->key_left = 1;
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct anonymous_8) /*24ul*/  * (unsigned long int)cnt);
      newmenu->entries = (struct anonymous_8 *)return_value_malloc_2;
      newmenu->handle_select = handle_opt_menu;
      newmenu->win = (struct MWINDOW *)(void *)0;
      newmenu->data = (void *)m;
      menu_do_select__1__2__sub = newmenu->entries;
      i = 0;
      for( ; !(i >= cnt); i = i + 1)
      {
        menu_do_select__1__2__pos=strchr(menu_do_select__1__2__start, 124);
        if(menu_do_select__1__2__pos == ((char *)NULL))
        {
          return_value_strlen_3=strlen(menu_do_select__1__2__start);
          menu_do_select__1__2__pos = &menu_do_select__1__2__start[(signed long int)return_value_strlen_3];
        }

        void *return_value_malloc_4;
        return_value_malloc_4=malloc(sizeof(char) /*1ul*/  * (unsigned long int)((menu_do_select__1__2__pos - menu_do_select__1__2__start) + (signed long int)1));
        menu_do_select__1__2__sub->text = (char *)return_value_malloc_4;
        strncpy(menu_do_select__1__2__sub->text, menu_do_select__1__2__start, (unsigned long int)(menu_do_select__1__2__pos - menu_do_select__1__2__start));
        menu_do_select__1__2__sub->text[menu_do_select__1__2__pos - menu_do_select__1__2__start] = (char)0;
        menu_do_select__1__2__sub->data = (void *)0;
        menu_do_select__1__2__sub->help = entry->help;
        menu_do_select__1__2__start = menu_do_select__1__2__pos + (signed long int)1;
        menu_do_select__1__2__sub = menu_do_select__1__2__sub + 1l;
      }
      menu_open(newmenu, win->x + win->width + 1, (win->y + m->cur) - m->first);
      return 1;
    }

    else
    {
      return_value_menu_is_str_11=menu_is_str(entry);
      if(!(return_value_menu_is_str_11 == 0))
      {
        char *menu_do_select__1__3__msg = (char *)(void *)0;
        char *menu_do_select__1__3__start;
        char *menu_do_select__1__3__pos;
        signed int length = 0;
        char *return_value_strchr_5;
        return_value_strchr_5=strchr(entry->text, 124);
        menu_do_select__1__3__start = return_value_strchr_5 + (signed long int)1;
        menu_do_select__1__3__pos=strchr(menu_do_select__1__3__start, 124);
        void *return_value_malloc_6;
        return_value_malloc_6=malloc(sizeof(char) /*1ul*/  * (unsigned long int)((menu_do_select__1__3__pos - menu_do_select__1__3__start) + (signed long int)1));
        menu_do_select__1__3__msg = (char *)return_value_malloc_6;
        strncpy(menu_do_select__1__3__msg, menu_do_select__1__3__start, (unsigned long int)(menu_do_select__1__3__pos - menu_do_select__1__3__start));
        menu_do_select__1__3__msg[menu_do_select__1__3__pos - menu_do_select__1__3__start] = (char)0;
        sscanf(menu_do_select__1__3__pos + (signed long int)1, "%d", &length);
        dlg_input_str(menu_do_select__1__3__msg, "<&Ok>|&Cancel", (char *)entry->data, length, handle_input_str, (void *)m);
        free((void *)menu_do_select__1__3__msg);
        return 1;
      }

      else
      {
        return_value_menu_is_int_10=menu_is_int(entry);
        if(!(return_value_menu_is_int_10 == 0))
        {
          const char *start;
          const char *pos;
          char *msg = (char *)(void *)0;
          signed int min = 0;
          signed int max = 0;
          char *return_value_strchr_7;
          return_value_strchr_7=strchr(entry->text, 124);
          start = return_value_strchr_7 + (signed long int)1;
          pos=strchr(start, 124);
          void *return_value_malloc_8;
          return_value_malloc_8=malloc(sizeof(char) /*1ul*/  * (unsigned long int)((pos - start) + (signed long int)1));
          msg = (char *)return_value_malloc_8;
          strncpy(msg, start, (unsigned long int)(pos - start));
          msg[pos - start] = (char)0;
          sscanf(pos + (signed long int)1, "%d|%d", &min, &max);
          dlg_input_int(msg, "<&Ok>|&Cancel", (signed int)(signed long int)entry->data, min, max, handle_input_int, (void *)m);
          free((void *)msg);
          return 1;
        }

        else
        {
          return_value_menu_is_sub_9=menu_is_sub(entry);
          if(!(return_value_menu_is_sub_9 == 0))
          {
            struct MMENU *sub = (struct MMENU *)entry->data;
            sub->first = 0;
            sub->cur = sub->first;
            menu_open(sub, win->x + win->width + 1, (win->y + m->cur) - m->first);
            return 1;
          }

        }
      }
    }
  }
  return 0;
}

// menu_handle_key
// file ../../src/mmenu.c line 424
static signed int menu_handle_key(struct MWINDOW *win, signed int ch)
{
  struct MMENU *menu_handle_key__1__menu = (struct MMENU *)win->data;
  const char *pos;
  const char *menu_handle_key__1__help;
  signed int i;
  signed int key;
  const unsigned short int **return_value___ctype_b_loc_1;
  if(!(ch >= 256))
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if(!((1024 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)ch]) == 0))
      ch=toupper(ch);

  }

  signed int return_value_menu_has_sub_2;
  signed int return_value_menu_do_select_3;
  switch(ch)
  {
    case 0402:
    {
      menu_do_repaint(win, 1);
      break;
    }
    case 0403:
    {
      menu_do_repaint(win, -1);
      break;
    }
    case 0404:
    {
      if(!(menu_handle_key__1__menu->key_left == 0))
        menu_close(menu_handle_key__1__menu);

      break;
    }
    case 0405:
    {
      return_value_menu_has_sub_2=menu_has_sub(&menu_handle_key__1__menu->entries[(signed long int)menu_handle_key__1__menu->cur]);
      if(!(return_value_menu_has_sub_2 == 0))
        menu_do_select(win);

      break;
    }
    case 0527:

    case 13:
    {
      return_value_menu_do_select_3=menu_do_select(win);
      if(return_value_menu_do_select_3 == 0)
      {
        if(!(menu_handle_key__1__menu->handle_select == ((void (*)(struct MMENU *))NULL)))
          menu_handle_key__1__menu->handle_select(menu_handle_key__1__menu);

      }

      break;
    }
    default:
    {
      i = 0;
      for( ; !(i >= menu_handle_key__1__menu->count); i = i + 1)
      {
        key = 0;
        menu_handle_key__1__help = (menu_handle_key__1__menu->entries + (signed long int)i)->text;
        do
        {
          pos=strchr(menu_handle_key__1__help, 38);
          if(pos == ((const char *)NULL))
            break;

          menu_handle_key__1__help = pos + (signed long int)2;
          if(!((signed int)pos[1l] == 38))
          {
            key=toupper((signed int)pos[(signed long int)1]);
            break;
          }

        }
        while((_Bool)1);
        if(key == ch)
        {
          menu_do_repaint(win, i - menu_handle_key__1__menu->cur);
          signed int return_value_menu_do_select_4;
          return_value_menu_do_select_4=menu_do_select(win);
          if(return_value_menu_do_select_4 == 0)
          {
            if(!(menu_handle_key__1__menu->handle_select == ((void (*)(struct MMENU *))NULL)))
              menu_handle_key__1__menu->handle_select(menu_handle_key__1__menu);

          }

          return 1;
        }

      }
      return 0;
    }
  }
  return 1;
}

// menu_handle_resize
// file ../../src/mmenu.c line 480
static void menu_handle_resize(struct MWINDOW *win, signed int dx, signed int dy)
{
  signed int m_y;
  signed int m_width;
  signed int m_height;
  struct MMENU *menu_handle_resize__1__menu = (struct MMENU *)win->data;
  win_get_size_max(&m_y, &m_width, &m_height);
  m_width = m_width - 2;
  m_height = m_height - 2;
  if(!(m_width >= win->width + win->x))
  {
    win->x = (m_width - win->width) + 1;
    if(!(win->x >= 1))
      win->x = 1;

  }

  _Bool tmp_if_expr_1;
  if(!(m_height >= win->height + win->y + -m_y))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (win->y + menu_handle_resize__1__menu->count) - m_y > m_height ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
  {
    win->y = (m_height - menu_handle_resize__1__menu->count) + m_y + 1;
    if(m_y >= win->y)
      win->y = m_y + 1;

  }

  if(!(win->height >= menu_handle_resize__1__menu->count))
    win->height = menu_handle_resize__1__menu->count;

  if(!(m_height >= win->height))
    win->height = m_height;

  if(!(menu_handle_resize__1__menu->count >= menu_handle_resize__1__menu->first + win->height))
    menu_handle_resize__1__menu->first = menu_handle_resize__1__menu->count - win->height;

  if(!(menu_handle_resize__1__menu->first >= 0))
    menu_handle_resize__1__menu->first = 0;

}

// menu_has_sub
// file ../../src/mmenu.c line 88
static signed int menu_has_sub(struct anonymous_8 *entry)
{
  signed int return_value_menu_is_str_1;
  return_value_menu_is_str_1=menu_is_str(entry);
  _Bool tmp_if_expr_3;
  signed int return_value_menu_is_int_2;
  if(!(return_value_menu_is_str_1 == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_menu_is_int_2=menu_is_int(entry);
    tmp_if_expr_3 = return_value_menu_is_int_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  signed int return_value_menu_is_option_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_menu_is_option_4=menu_is_option(entry);
    tmp_if_expr_5 = return_value_menu_is_option_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_menu_is_sub_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_menu_is_sub_6=menu_is_sub(entry);
    tmp_if_expr_7 = return_value_menu_is_sub_6 != 0 ? (_Bool)1 : (_Bool)0;
  }
  return (signed int)tmp_if_expr_7;
}

// menu_is_int
// file ../../src/mmenu.c line 78
static signed int menu_is_int(struct anonymous_8 *entry)
{
  signed int return_value_menu_check_1;
  return_value_menu_check_1=menu_check(entry->text, (char)100);
  return return_value_menu_check_1;
}

// menu_is_option
// file ../../src/mmenu.c line 68
static signed int menu_is_option(struct anonymous_8 *entry)
{
  signed int return_value_menu_check_1;
  return_value_menu_check_1=menu_check(entry->text, (char)111);
  return return_value_menu_check_1;
}

// menu_is_str
// file ../../src/mmenu.c line 83
static signed int menu_is_str(struct anonymous_8 *entry)
{
  signed int return_value_menu_check_1;
  return_value_menu_check_1=menu_check(entry->text, (char)115);
  return return_value_menu_check_1;
}

// menu_is_sub
// file ../../src/mmenu.c line 58
static signed int menu_is_sub(struct anonymous_8 *entry)
{
  signed int i = 0;
  signed int end;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(entry->text);
  end = (signed int)(return_value_strlen_1 - (unsigned long int)1);
  signed int tmp_post_3 = end;
  end = end - 1;
  signed int tmp_post_2;
  if((signed int)entry->text[(signed long int)tmp_post_3] == 62)
  {
    do
    {
      tmp_post_2 = end;
      end = end - 1;
      if(!((signed int)entry->text[(signed long int)tmp_post_2] == 37))
        break;

      i = i + 1;
    }
    while((_Bool)1);
    return (signed int)(i % 2 != 0);
  }

  else
    return 0;
}

// menu_is_toggle
// file ../../src/mmenu.c line 73
static signed int menu_is_toggle(struct anonymous_8 *entry)
{
  signed int return_value_menu_check_1;
  return_value_menu_check_1=menu_check(entry->text, (char)99);
  return return_value_menu_check_1;
}

// menu_open
// file ../../src/mmenu.c line 510
void menu_open(struct MMENU *menu, signed int x, signed int y)
{
  struct MWINDOW *win;
  char *entry;
  signed int m_y;
  signed int m_width;
  signed int m_height;
  signed int width = 0;
  if(!(menu->count >= 0))
  {
    menu->count = 0;
    for( ; !((menu->entries + (signed long int)menu->count)->text == ((char *)NULL)); menu->count = menu->count + 1)
      ;
  }

  m_y = 0;
  for( ; !(m_y >= menu->count); m_y = m_y + 1)
  {
    entry=get_text(&menu->entries[(signed long int)m_y], 0);
    m_width=menu_width(entry);
    if(!(width >= m_width))
      width = m_width;

  }
  win_get_size_max(&m_y, &m_width, &m_height);
  m_width = m_width - 2;
  m_height = m_height - 2;
  if(!(m_width >= width + x + -1))
    x = (m_width - width) + 1;

  if(!(x >= 1))
    x = 1;

  if(!(m_height >= menu->count + y + -m_y + -1))
    y = (m_height - menu->count) + m_y + 1;

  if(!(y >= m_y))
    y = m_y + 1;

  menu->win=win_open(x, y, width, menu->count, 1, (const char *)(void *)0, (enum anonymous_7)ATTR_MENU_FRAME);
  win_set_repaint(menu_repaint);
  win_set_handle_key(menu_handle_key);
  win_set_resize(0, menu_handle_resize);
  win_set_data((void *)menu);
  win=win_get_window();
  if(!(menu->count >= menu->first + win->height))
    menu->first = menu->count - win->height;

  if(!(menu->first >= 0))
    menu->first = 0;

  menu_repaint(win);
}

// menu_repaint
// file ../../src/mmenu.c line 279
static signed int menu_repaint(struct MWINDOW *win)
{
  menu_do_repaint(win, 0);
  return 1;
}

// menu_width
// file ../../src/mmenu.c line 94
static signed int menu_width(char *txt)
{
  signed int width;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(txt);
  width = (signed int)return_value_strlen_1;
  char *menu_width__1__help;
  do
  {
    menu_width__1__help=strchr(txt, 38);
    if(menu_width__1__help == ((char *)NULL))
      break;

    txt = menu_width__1__help + (signed long int)2;
    width = width - 1;
  }
  while((_Bool)1);
  return width;
}

// mikmod_random
// file ../../src/mlist.c line 53
static signed int mikmod_random(signed int limit)
{
  signed long int return_value_random_1;
  return_value_random_1=random();
  return (signed int)(return_value_random_1 % (signed long int)limit);
}

// options_free
// file ../../src/rcfile.c line 85
static void options_free(struct _OPTIONS *opts)
{
  if(!(opts == ((struct _OPTIONS *)NULL)))
  {
    if(opts->max >= 1)
    {
      while(opts->cnt >= 1)
      {
        opts->cnt = opts->cnt - 1;
        if(!((opts->option + (signed long int)opts->cnt)->label == ((char *)NULL)))
          free((void *)(opts->option + (signed long int)opts->cnt)->label);

        if(!((opts->option + (signed long int)opts->cnt)->arg == ((char *)NULL)))
          free((void *)(opts->option + (signed long int)opts->cnt)->arg);

        if(!((opts->option + (signed long int)opts->cnt)->options == ((struct _OPTIONS *)NULL)))
          options_free((opts->option + (signed long int)opts->cnt)->options);

      }
      free((void *)opts->option);
      opts->max = 0;
      opts->cnt = opts->max;
    }

  }

  if(!(opts == ((struct _OPTIONS *)NULL)))
    free((void *)opts);

}

// parse_line
// file ../../src/rcfile.c line 390
static signed int parse_line(char *line, char **label, char **arg)
{
  char *end;
  *label = (char *)(void *)0;
  *arg = (char *)(void *)0;
  char return_value_skip_space_1;
  return_value_skip_space_1=skip_space(&line);
  const unsigned short int **return_value___ctype_b_loc_2;
  signed int return_value_strcmp_4;
  signed int return_value_toupper_7;
  signed int return_value_toupper_8;
  _Bool tmp_if_expr_9;
  if((signed int)return_value_skip_space_1 == 35)
    return 0;

  else
  {
    *label = line;
    do
    {
      return_value___ctype_b_loc_2=__ctype_b_loc();
      if((8 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*line]) == 0)
      {
        if(!((signed int)*line == 95))
          break;

      }

      signed int return_value_toupper_3;
      return_value_toupper_3=toupper((signed int)*line);
      *line = (char)return_value_toupper_3;
      line = line + 1l;
    }
    while((_Bool)1);
    end = line;
    skip_space(&line);
    if((signed int)*line == 61)
    {
      line = line + 1l;
      *end = (char)0;
      skip_space(&line);
    }

    else
    {
      *end = (char)0;
      signed int return_value_strcmp_5;
      return_value_strcmp_5=strcmp(*label, "BEGIN");
      if(!(return_value_strcmp_5 == 0))
      {
        return_value_strcmp_4=strcmp(*label, "END");
        if(!(return_value_strcmp_4 == 0))
          return 0;

      }

    }
    const unsigned short int **return_value___ctype_b_loc_10;
    return_value___ctype_b_loc_10=__ctype_b_loc();
    if(!((32768 & (signed int)(*return_value___ctype_b_loc_10)[(signed long int)(signed int)*line]) == 0))
    {
      char *pos;
      char ch1;
      char ch2;
      signed int string = (signed int)((signed int)*line == 34);
      if(!(string == 0))
        line = line + 1l;

      pos = line;
      *arg = pos;
      for( ; (_Bool)1; pos = pos + 1l)
      {
        if(string == 0)
        {
          if(*line == 0)
            goto __CPROVER_DUMP_L10;

          if((signed int)*line == 35)
            goto __CPROVER_DUMP_L10;

        }

        else
        {

        __CPROVER_DUMP_L10:
          ;
          if(!(string == 0))
          {
            if(*line == 0)
              goto __CPROVER_DUMP_L11;

            if((signed int)*line == 34)
              goto __CPROVER_DUMP_L11;

          }

          else
          {

          __CPROVER_DUMP_L11:
            ;
            goto __CPROVER_DUMP_L29;
          }
        }
        if(string == 0)
        {
          signed int return_value_toupper_6;
          return_value_toupper_6=toupper((signed int)*line);
          *line = (char)return_value_toupper_6;
        }

        else
          if((signed int)*line == 92)
          {
            line = line + 1l;
            switch((signed int)*line)
            {
              case 97:
              {
                *pos = (char)7;
                break;
              }
              case 98:
              {
                *pos = (char)8;
                break;
              }
              case 102:
              {
                *pos = (char)12;
                break;
              }
              case 110:
              {
                *pos = (char)10;
                break;
              }
              case 114:
              {
                *pos = (char)13;
                break;
              }
              case 116:
              {
                *pos = (char)9;
                break;
              }
              case 118:
              {
                *pos = (char)11;
                break;
              }
              case 39:
              {
                *pos = (char)39;
                break;
              }
              case 34:
              {
                *pos = (char)34;
                break;
              }
              case 92:
              {
                *pos = (char)92;
                break;
              }
              case 120:
              {
                return_value_toupper_7=toupper((signed int)line[(signed long int)1]);
                ch1 = (char)return_value_toupper_7;
                return_value_toupper_8=toupper((signed int)line[(signed long int)2]);
                ch2 = (char)return_value_toupper_8;
                *pos = (char)(((signed int)ch1 >= 65 ? ((signed int)ch1 - 65) + 10 : (signed int)ch1 - 48) * 16 + ((signed int)ch2 >= 65 ? ((signed int)ch2 - 65) + 10 : (signed int)ch2 - 48));
                line = line + (signed long int)2;
                break;
              }
              default:
              {
                line = line - 1l;
                *pos = *line;
              }
            }
          }

          else
            *pos = *line;
        line = line + 1l;
      }

    __CPROVER_DUMP_L29:
      ;
      if(string == 0)
      {
        do
        {
          pos = pos - 1l;
          if((signed int)*pos == 32)
            tmp_if_expr_9 = (_Bool)1;

          else
            tmp_if_expr_9 = (signed int)*pos == 9 ? (_Bool)1 : (_Bool)0;
        }
        while(tmp_if_expr_9);
        pos = pos + 1l;
      }

      *pos = (char)0;
      return 1;
    }

    return 0;
  }
}

// path_relative
// file ../../src/mutilities.h line 192
signed int path_relative(const char *path)
{
  if(path == ((const char *)NULL))
    return 1;

  else
    return (signed int)((signed int)*path != 47);
}

// path_update
// file ../../src/mlistedit.c line 603
static signed int path_update(char *dest, char *path, char *file)
{
  char *end;
  signed int return_value_strcmp_5;
  return_value_strcmp_5=strcmp(file, "../");
  char *tmp_post_2;
  signed int return_value_strcmp_4;
  unsigned long int return_value_strlen_3;
  if(return_value_strcmp_5 == 0)
  {
    strcpy(dest, path);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(dest);
    end = (dest + (signed long int)return_value_strlen_1) - (signed long int)2;
    for( ; !(dest >= end); *tmp_post_2 = (char)0)
    {
      if((signed int)*end == 47)
        break;

      tmp_post_2 = end;
      end = end - 1l;
    }
  }

  else
  {
    return_value_strcmp_4=strcmp(file, "./");
    if(return_value_strcmp_4 == 0)
      strcpy(dest, path);

    else
    {
      return_value_strlen_3=strlen(file);
      if((signed int)file[-1l + (signed long int)return_value_strlen_3] == 47)
      {
        strcpy(dest, path);
        strcat(dest, file);
      }

      else
        return 0;
    }
  }
  return 1;
}

// player_handle_key
// file ../../src/mikmod.c line 578
static signed int player_handle_key(struct MWINDOW *win, signed int ch)
{
  signed int handled = 1;
  const unsigned short int **return_value___ctype_b_loc_1;
  if(!(ch >= 256))
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if(!((1024 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)ch]) == 0))
      ch=toupper(ch);

  }

  switch(ch)
  {
    case 32:
    {
      MP_TogglePause();
      win_panel_repaint();
      break;
    }
    case 78:
    {
      next = 1;
      break;
    }
    case 80:
    {
      next = 2;
      break;
    }
    case 81:
    {
      status.quit = 1;
      break;
    }
    case 12:

    case 0515:
    {
      win_panel_repaint_force();
      break;
    }
    case 72:
    {
      win_change_panel(1);
      break;
    }
    case 83:
    {
      win_change_panel(2);
      break;
    }
    case 73:
    {
      win_change_panel(3);
      break;
    }
    case 77:
    {
      win_change_panel(4);
      break;
    }
    case 76:
    {
      win_change_panel(5);
      break;
    }
    case 67:
    {
      win_change_panel(6);
      break;
    }
    case 86:
    {
      win_change_panel(7);
      break;
    }
    case 70:
    {
      config.fakevolbars = 1 - config.fakevolbars;
      break;
    }
    default:
      handled = 0;
  }
  signed int return_value_MP_Paused_2;
  return_value_MP_Paused_2=MP_Paused();
  if(return_value_MP_Paused_2 == 0)
  {
    handled = 1;
    switch(ch)
    {
      case 43:

      case 0405:
      {
        Player_NextPosition();
        settime = 0;
        break;
      }
      case 45:

      case 0404:
      {
        Player_PrevPosition();
        settime = 0;
        break;
      }
      case 82:
      {
        Player_SetPosition((unsigned short int)0);
        settime = 1;
        break;
      }
      case 40:
      {
        if(!(mf == ((struct MODULE *)NULL)))
          Player_SetSpeed((unsigned short int)((signed int)mf->sngspd - 1));

        settime = 0;
        break;
      }
      case 41:
      {
        if(!(mf == ((struct MODULE *)NULL)))
          Player_SetSpeed((unsigned short int)((signed int)mf->sngspd + 1));

        settime = 0;
        break;
      }
      case 123:
      {
        if(!(mf == ((struct MODULE *)NULL)))
          Player_SetTempo((unsigned short int)((signed int)mf->bpm - 1));

        settime = 0;
        break;
      }
      case 125:
      {
        if(!(mf == ((struct MODULE *)NULL)))
          Player_SetTempo((unsigned short int)((signed int)mf->bpm + 1));

        settime = 0;
        break;
      }
      case 59:

      case 58:
      {
        md_mode = md_mode ^ (unsigned short int)0x0200;
        display_header();
        break;
      }
      case 85:
      {
        md_mode = md_mode ^ (unsigned short int)0x0100;
        display_header();
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
        uservolume = (ch - 48 << 7) / 10;
        Player_SetVolume((signed short int)uservolume);
        break;
      }
      case 48:
      {
        uservolume = 128;
        Player_SetVolume((signed short int)uservolume);
        break;
      }
      case 60:
      {
        if(!(mf == ((struct MODULE *)NULL)))
        {
          if(!(mf->volume == 0))
          {
            uservolume = (signed int)mf->volume - 1;
            Player_SetVolume((signed short int)uservolume);
          }

        }

        break;
      }
      case 62:
      {
        if(!(mf == ((struct MODULE *)NULL)))
        {
          if(!((signed int)mf->volume >= 128))
          {
            uservolume = (signed int)mf->volume + 1;
            Player_SetVolume((signed short int)uservolume);
          }

        }

        break;
      }
      default:
        handled = 0;
    }
  }

  return handled;
}

// player_quit
// file ../../src/mikmod.c line 712
static void player_quit(void)
{
  const char *return_value_MikMod_strerror_1;
  if(!(status.quit == 0))
    exit_player(0, (const char *)(void *)0);

  else
    if(status.listend == 0)
    {
      return_value_MikMod_strerror_1=MikMod_strerror(MikMod_errno);
      exit_player(1, "MikMod error: %s\n", return_value_MikMod_strerror_1);
    }

    else
      exit_player(0, "Finished playlist...");
}

// player_timeout
// file ../../src/mikmod.c line 723
static signed int player_timeout(struct MWINDOW *win, void *data)
{
  char *filename;
  char *archive;
  if(!(status.quit == 0))
  {
    if((signed int)status.state == STATE_PLAY)
    {
      MP_End();
      Player_Stop();
      Player_Free(mf);
      status.state = (enum anonymous_30)STATE_READY;
    }

    mf = (struct MODULE *)(void *)0;
    player_quit();
  }

  signed int return_value_MP_Active_7;
  _Bool tmp_if_expr_9;
  signed int return_value_PL_CurrentDeleted_8;
  _Bool tmp_if_expr_6;
  signed int return_value_PL_GetLength_5;
  signed int return_value_PL_ContNext_1;
  signed int return_value_PL_ContPrev_2;
  signed int return_value_PL_ContPos_3;
  signed int return_value_PL_GetLength_4;
  if((signed int)status.state >= STATE_READY)
  {
    return_value_MP_Active_7=MP_Active();
    if(return_value_MP_Active_7 == 0 || !(next == 0))
      tmp_if_expr_9 = (_Bool)1;

    else
    {
      return_value_PL_CurrentDeleted_8=PL_CurrentDeleted(&playlist);
      tmp_if_expr_9 = return_value_PL_CurrentDeleted_8 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_9)
    {
      if(status.listend == 0)
        tmp_if_expr_6 = (_Bool)1;

      else
      {
        return_value_PL_GetLength_5=PL_GetLength(&playlist);
        tmp_if_expr_6 = return_value_PL_GetLength_5 > 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_6)
      {
        if((signed int)status.state == STATE_PLAY)
        {
          MP_End();
          if((1 & config.playmode) == 0 && next == 0 && !(settime == 0))
            PL_SetTimeCurrent(&playlist, (signed long int)mf->sngtime);

          PL_SetPlayedCurrent(&playlist);
          Player_Stop();
          Player_Free(mf);
          status.state = (enum anonymous_30)STATE_READY;
        }

        mf = (struct MODULE *)(void *)0;
        archive = (char *)(void *)0;
        filename = archive;
        switch(next)
        {
          case 0:

          case 1:
          {
            return_value_PL_ContNext_1=PL_ContNext(&playlist, &filename, &archive, config.playmode);
            status.listend = (signed int)!(return_value_PL_ContNext_1 != 0);
            break;
          }
          case 2:
          {
            return_value_PL_ContPrev_2=PL_ContPrev(&playlist, &filename, &archive);
            status.listend = (signed int)!(return_value_PL_ContPrev_2 != 0);
            break;
          }
          case 3:
          {
            return_value_PL_ContPos_3=PL_ContPos(&playlist, &filename, &archive, next_pl_pos);
            status.listend = (signed int)!(return_value_PL_ContPos_3 != 0);
          }
        }
        next = 0;
        settime = 1;
        if(!(status.listend == 0))
        {
          return_value_PL_GetLength_4=PL_GetLength(&playlist);
          if(return_value_PL_GetLength_4 >= 1 || !(quiet == 0))
            player_quit();

        }

        if(status.listend == 0)
        {
          signed int playfd;
          struct _IO_FILE *playfile = (struct _IO_FILE *)(void *)0;
          char *playname;
          if(filename == ((char *)NULL))
          {
            handle_ListError(config.tolerant, filename, archive, 0);
            return 1;
          }

          playfd=MA_dearchive(archive, filename, &playname);
          if(playfd >= 0)
            playfile=fdopen(playfd, "rb");

          if(playfile == ((struct _IO_FILE *)NULL) || !(playfd >= 0))
          {
            handle_ListError(config.tolerant, filename, archive, 0);
            return 1;
          }

          display_loadbanner();
          mf=Player_LoadFP(playfile, 128, config.curious);
          fclose(playfile);
          if(!(playname == ((char *)NULL)))
          {
            unlink(playname);
            free((void *)playname);
          }

          if(mf == ((struct MODULE *)NULL))
          {
            handle_ListError(config.tolerant, filename, archive, 1);
            return 1;
          }

          mf->extspd = config.extspd;
          mf->panflag = config.panning;
          mf->wrap = ((config.playmode & 1) != 0 ? 1 : 0) != 0 ? 1 : 0;
          mf->loop = config.loop;
          mf->fadeout = config.fade;
          Player_Start(mf);
          if(!(uservolume >= (signed int)mf->volume))
            Player_SetVolume((signed short int)uservolume);

          if(next_sng_pos >= 1)
          {
            Player_SetPosition((unsigned short int)next_sng_pos);
            settime = 0;
            next_sng_pos = 0;
          }

          MP_Start();
          status.state = (enum anonymous_30)STATE_PLAY;
        }

        display_start();
      }

    }

  }

  MP_Update();
  if(!(config.volrestrict == 0) && !(mf == ((struct MODULE *)NULL)))
  {
    if(!(uservolume >= (signed int)mf->volume))
      MP_Volume(uservolume);

  }

  display_status();
  win_refresh();
  return 1;
}

// rc_close
// file ../../src/rcfile.h line 75
void rc_close(void)
{
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    fclose(fp);
    fp = (struct _IO_FILE *)(void *)0;
  }

  options_free(options_link1);
  options_link1 = (struct _OPTIONS *)(void *)0;
}

// rc_load
// file ../../src/rcfile.h line 68
signed int rc_load(const char *name)
{
  signed int ret = 0;
  fp=fopen(name, "r");
  if(fp == ((struct _IO_FILE *)NULL))
    return 0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct _OPTIONS) /*24ul*/ );
    options_link1 = (struct _OPTIONS *)return_value_malloc_1;
    options_link1->max = 0;
    options_link1->cnt = options_link1->max;
    options_link1->option = (struct _OPTION *)(void *)0;
    options_link1->parent = (struct _OPTIONS *)(void *)0;
    ret=rc_parse(options_link1, "'NO END'");
    fclose(fp);
    fp = (struct _IO_FILE *)(void *)0;
    return ret;
  }
}

// rc_parse
// file ../../src/rcfile.c line 488
static signed int rc_parse(struct _OPTIONS *opts, const char *sec_name)
{
  char line[1024l];
  char *label;
  char *arg;
  signed int ret = 1;
  char *return_value_fgets_1;
  unsigned long int return_value_strlen_2;
  while(!(ret == 0))
  {
    return_value_fgets_1=fgets(line, 1024, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(line);
    if((signed int)line[-1l + (signed long int)return_value_strlen_3] == 10)
    {
      return_value_strlen_2=strlen(line);
      line[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    }

    signed int return_value_parse_line_9;
    return_value_parse_line_9=parse_line(line, &label, &arg);
    if(!(return_value_parse_line_9 == 0))
    {
      signed int return_value_strcmp_8;
      return_value_strcmp_8=strcmp("END", label);
      if(return_value_strcmp_8 == 0)
      {
        signed int return_value_strcmp_4;
        return_value_strcmp_4=strcmp(arg, sec_name);
        if(!(return_value_strcmp_4 == 0))
        {
          fprintf(stderr, "Error in config file: expected 'END %s', found 'END %s'                      Ignoring (remaining) config file...", sec_name, arg);
          return 0;
        }

        return 1;
      }

      else
      {
        if(opts->cnt >= opts->max)
        {
          opts->max = opts->max + 10;
          void *return_value_realloc_5;
          return_value_realloc_5=realloc((void *)opts->option, sizeof(struct _OPTION) /*24ul*/  * (unsigned long int)opts->max);
          opts->option = (struct _OPTION *)return_value_realloc_5;
        }

        (opts->option + (signed long int)opts->cnt)->label=strdup(label);
        (opts->option + (signed long int)opts->cnt)->arg=strdup(arg);
        signed int return_value_strcmp_7;
        return_value_strcmp_7=strcmp("BEGIN", label);
        if(return_value_strcmp_7 == 0)
        {
          struct _OPTIONS *new_opts;
          void *return_value_malloc_6;
          return_value_malloc_6=malloc(sizeof(struct _OPTIONS) /*24ul*/ );
          new_opts = (struct _OPTIONS *)return_value_malloc_6;
          new_opts->max = 0;
          new_opts->cnt = new_opts->max;
          new_opts->option = (struct _OPTION *)(void *)0;
          new_opts->parent = opts;
          (opts->option + (signed long int)opts->cnt)->options = new_opts;
          ret=rc_parse(new_opts, (opts->option + (signed long int)opts->cnt)->arg);
        }

        else
          (opts->option + (signed long int)opts->cnt)->options = (struct _OPTIONS *)(void *)0;
        opts->cnt = opts->cnt + 1;
      }
    }

  }
  signed int return_value_ferror_10;
  return_value_ferror_10=ferror(fp);
  if(!(return_value_ferror_10 == 0))
    fprintf(stderr, "Error in config file, ignoring (remaining) file...");

  _Bool tmp_if_expr_12;
  signed int return_value_ferror_11;
  if(!(ret == 0))
  {
    return_value_ferror_11=ferror(fp);
    tmp_if_expr_12 = !(return_value_ferror_11 != 0) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_12 = (_Bool)0;
  return (signed int)tmp_if_expr_12;
}

// rc_read_bit
// file ../../src/rcfile.h line 54
signed int rc_read_bit(const char *label, signed int *value, signed int mask)
{
  const char *arg;
  arg=get_argument(label);
  _Bool tmp_if_expr_7;
  signed int return_value_strcasecmp_6;
  _Bool tmp_if_expr_8;
  signed int return_value_strcasecmp_1;
  _Bool tmp_if_expr_3;
  signed int return_value_strcasecmp_2;
  _Bool tmp_if_expr_4;
  if(!(arg == ((const char *)NULL)))
  {
    signed int return_value_strcasecmp_5;
    return_value_strcasecmp_5=strcasecmp(arg, "YES");
    if(return_value_strcasecmp_5 == 0)
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value_strcasecmp_6=strcasecmp(arg, "ON");
      tmp_if_expr_7 = !(return_value_strcasecmp_6 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
      tmp_if_expr_8 = (_Bool)1;

    else
      tmp_if_expr_8 = (signed int)*arg == 49 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_8)
    {
      *value = *value | mask;
      return 1;
    }

    else
    {
      return_value_strcasecmp_1=strcasecmp(arg, "NO");
      if(return_value_strcasecmp_1 == 0)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value_strcasecmp_2=strcasecmp(arg, "OFF");
        tmp_if_expr_3 = !(return_value_strcasecmp_2 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_3)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)*arg == 48 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
      {
        *value = *value & ~mask;
        return 1;
      }

    }
  }

  return 0;
}

// rc_read_bool
// file ../../src/rcfile.h line 53
signed int rc_read_bool(const char *label, signed int *value)
{
  char *arg;
  arg=get_argument(label);
  _Bool tmp_if_expr_7;
  signed int return_value_strcasecmp_6;
  _Bool tmp_if_expr_8;
  signed int return_value_strcasecmp_1;
  _Bool tmp_if_expr_3;
  signed int return_value_strcasecmp_2;
  _Bool tmp_if_expr_4;
  if(!(arg == ((char *)NULL)))
  {
    signed int return_value_strcasecmp_5;
    return_value_strcasecmp_5=strcasecmp(arg, "YES");
    if(return_value_strcasecmp_5 == 0)
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value_strcasecmp_6=strcasecmp(arg, "ON");
      tmp_if_expr_7 = !(return_value_strcasecmp_6 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
      tmp_if_expr_8 = (_Bool)1;

    else
      tmp_if_expr_8 = (signed int)*arg == 49 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_8)
    {
      *value = 1;
      return 1;
    }

    else
    {
      return_value_strcasecmp_1=strcasecmp(arg, "NO");
      if(return_value_strcasecmp_1 == 0)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value_strcasecmp_2=strcasecmp(arg, "OFF");
        tmp_if_expr_3 = !(return_value_strcasecmp_2 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_3)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)*arg == 48 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
      {
        *value = 0;
        return 1;
      }

    }
  }

  return 0;
}

// rc_read_float
// file ../../src/rcfile.c line 308
signed int rc_read_float(const char *label, float *value, float min, float max)
{
  const char *arg;
  arg=get_argument(label);
  if(!(arg == ((const char *)NULL)))
  {
    float t;
    signed int return_value_sscanf_1;
    return_value_sscanf_1=sscanf(arg, "%f", &t);
    if(return_value_sscanf_1 == 1)
    {
      if(t <= max && t >= min)
      {
        *value = t;
        return 1;
      }

    }

  }

  return 0;
}

// rc_read_int
// file ../../src/rcfile.h line 55
signed int rc_read_int(const char *label, signed int *value, signed int min, signed int max)
{
  const char *arg;
  arg=get_argument(label);
  if(!(arg == ((const char *)NULL)))
  {
    char *end;
    signed int t;
    signed long int return_value_strtol_1;
    return_value_strtol_1=strtol(arg, &end, 10);
    t = (signed int)return_value_strtol_1;
    if(*end == 0)
    {
      if(t >= min)
      {
        if(max >= t)
        {
          *value = t;
          return 1;
        }

      }

    }

  }

  return 0;
}

// rc_read_label
// file ../../src/rcfile.h line 57
signed int rc_read_label(const char *label, signed int *value, struct anonymous_4 *convert)
{
  const char *arg;
  arg=get_argument(label);
  if(!(arg == ((const char *)NULL)))
  {
    signed int i = 0;
    while(!((convert + (signed long int)i)->label == ((const char *)NULL)))
    {
      signed int return_value_strcasecmp_1;
      return_value_strcasecmp_1=strcasecmp((convert + (signed long int)i)->label, arg);
      if(return_value_strcasecmp_1 == 0)
      {
        *value = (convert + (signed long int)i)->id;
        return 1;
      }

      i = i + 1;
    }
  }

  return 0;
}

// rc_read_string
// file ../../src/rcfile.h line 65
signed int rc_read_string(const char *label, char **value, signed int length)
{
  const char *arg;
  arg=get_argument(label);
  if(!(arg == ((const char *)NULL)))
  {
    rc_set_string(value, arg, length);
    return 1;
  }

  else
    return 0;
}

// rc_read_struct
// file ../../src/rcfile.h line 58
signed int rc_read_struct(const char *label)
{
  struct _OPTIONS *arg;
  arg=get_begin(label);
  if(!(arg == ((struct _OPTIONS *)NULL)))
  {
    options_link1 = arg;
    return 1;
  }

  else
    return 0;
}

// rc_read_struct_end
// file ../../src/rcfile.h line 59
signed int rc_read_struct_end(void)
{
  if(!(options_link1->parent == ((struct _OPTIONS *)NULL)))
  {
    options_link1 = options_link1->parent;
    return 1;
  }

  else
    return 0;
}

// rc_save
// file ../../src/rcfile.h line 72
signed int rc_save(const char *name, const char *prg_name)
{
  fp=fopen(name, "w");
  if(fp == ((struct _IO_FILE *)NULL))
    return 0;

  else
  {
    signed int return_value_fprintf_1;
    return_value_fprintf_1=fprintf(fp, "#\n# %s\n# configuration file\n#\n", prg_name);
    if(!(return_value_fprintf_1 >= 1))
    {
      fclose(fp);
      fp = (struct _IO_FILE *)(void *)0;
      return 0;
    }

    else
      return 1;
  }
}

// rc_set_string
// file ../../src/rcfile.h line 62
void rc_set_string(char **value, const char *arg, signed int length)
{
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(arg);
  len = (signed int)return_value_strlen_1;
  if(!(length >= len))
    len = length;

  if(!(*value == ((char *)NULL)))
    free((void *)*value);

  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)(len + 1) * sizeof(char) /*1ul*/ );
  *value = (char *)return_value_malloc_2;
  strncpy(*value, arg, (unsigned long int)len);
  (*value)[(signed long int)len] = (char)0;
}

// rc_write_bit
// file ../../src/rcfile.c line 134
signed int rc_write_bit(const char *label, signed int arg, signed int mask, const char *description)
{
  signed int return_value_rc_write_bool_1;
  return_value_rc_write_bool_1=rc_write_bool(label, (arg & mask) != 0 ? 1 : 0, description);
  return return_value_rc_write_bool_1;
}

// rc_write_bool
// file ../../src/rcfile.h line 40
signed int rc_write_bool(const char *label, signed int arg, const char *description)
{
  signed int return_value_fprintf_1;
  signed int return_value_fprintf_2;
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    write_description(description);
    if(!(arg == 0))
    {
      return_value_fprintf_1=fprintf(fp, "%s%s = yes\n", (const void *)indent, label);
      return (signed int)(return_value_fprintf_1 > 0);
    }

    else
    {
      return_value_fprintf_2=fprintf(fp, "%s%s = no\n", (const void *)indent, label);
      return (signed int)(return_value_fprintf_2 > 0);
    }
  }

  return 0;
}

// rc_write_float
// file ../../src/rcfile.c line 148
signed int rc_write_float(const char *label, float arg, const char *description)
{
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    write_description(description);
    signed int return_value_fprintf_1;
    return_value_fprintf_1=fprintf(fp, "%s%s = %f\n", (const void *)indent, label, arg);
    return (signed int)(return_value_fprintf_1 > 0);
  }

  return 0;
}

// rc_write_int
// file ../../src/rcfile.h line 42
signed int rc_write_int(const char *label, signed int arg, const char *description)
{
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    write_description(description);
    signed int return_value_fprintf_1;
    return_value_fprintf_1=fprintf(fp, "%s%s = %d\n", (const void *)indent, label, arg);
    return (signed int)(return_value_fprintf_1 > 0);
  }

  return 0;
}

// rc_write_label
// file ../../src/rcfile.h line 44
signed int rc_write_label(const char *label, struct anonymous_4 *convert, signed int arg, const char *description)
{
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    signed int i;
    write_description(description);
    i = 0;
    for( ; !((convert + (signed long int)i)->id == arg); i = i + 1)
      ;
    signed int return_value_fprintf_1;
    return_value_fprintf_1=fprintf(fp, "%s%s = %s\n", (const void *)indent, label, (convert + (signed long int)i)->label);
    return (signed int)(return_value_fprintf_1 > 0);
  }

  return 0;
}

// rc_write_string
// file ../../src/rcfile.h line 45
signed int rc_write_string(const char *label, const char *arg, const char *description)
{
  _Bool tmp_if_expr_2;
  signed int return_value_fprintf_4;
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    write_description(description);
    if(!(arg == ((const char *)NULL)))
    {
      signed int return_value_fprintf_1;
      return_value_fprintf_1=fprintf(fp, "%s%s = \"", (const void *)indent, label);
      if(!(return_value_fprintf_1 >= 1))
        return 0;

      for( ; !(*arg == 0); arg = arg + 1l)
      {
        if(!((signed int)*arg >= 32))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = (signed int)(unsigned char)*arg > 127 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
          fprintf(fp, "\\x%02x", *((const unsigned char *)arg));

        else
          if((signed int)*arg == 34)
            fputs("\\\"", fp);

          else
            fputc((signed int)*arg, fp);
      }
      signed int return_value_fprintf_3;
      return_value_fprintf_3=fprintf(fp, "\"\n");
      return (signed int)(return_value_fprintf_3 > 0);
    }

    else
    {
      return_value_fprintf_4=fprintf(fp, "%s%s = \"\"\n", (const void *)indent, label);
      return (signed int)(return_value_fprintf_4 > 0);
    }
  }

  return 0;
}

// rc_write_struct
// file ../../src/rcfile.h line 46
signed int rc_write_struct(const char *label, const char *description)
{
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    signed int ret;
    struct _STACK *newstack;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct _STACK) /*16ul*/ );
    newstack = (struct _STACK *)return_value_malloc_1;
    newstack->data=strdup(label);
    newstack->next = structs;
    structs = newstack;
    write_description(description);
    signed int return_value_fprintf_2;
    return_value_fprintf_2=fprintf(fp, "%sBEGIN \"%s\"\n", (const void *)indent, label);
    ret = (signed int)(return_value_fprintf_2 > 0);
    indent_change(1);
    return ret;
  }

  return 0;
}

// rc_write_struct_end
// file ../../src/rcfile.h line 47
signed int rc_write_struct_end(const char *description)
{
  if(!(fp == ((struct _IO_FILE *)NULL)) && !(structs == ((struct _STACK *)NULL)))
  {
    signed int ret;
    struct _STACK *rc_write_struct_end__1__1__next = structs->next;
    char *label = structs->data;
    free((void *)structs);
    structs = rc_write_struct_end__1__1__next;
    indent_change(-1);
    write_description(description);
    signed int return_value_fprintf_1;
    return_value_fprintf_1=fprintf(fp, "%sEND \"%s\"\n", (const void *)indent, label);
    ret = (signed int)(return_value_fprintf_1 > 0);
    free((void *)label);
    return ret;
  }

  return 0;
}

// read_archiver
// file ../../src/mconfig.c line 555
static void read_archiver(struct anonymous_3 *cfg)
{
  struct anonymous_2 arch;
  memset((void *)&arch, 0, sizeof(struct anonymous_2) /*56ul*/ );
  signed int return_value_rc_read_int_1;
  return_value_rc_read_int_1=rc_read_int("LOCATION", &arch.location, -1, 999);
  if(!(return_value_rc_read_int_1 == 0))
  {
    rc_read_string("MARKER", &arch.marker, 999);
    rc_read_string("LIST", &arch.list, 4096 + 200);
    rc_read_int("NAMEOFFSET", &arch.nameoffset, -1, 999);
    rc_read_string("EXTRACT", &arch.extract, 4096 + 200);
    rc_read_string("SKIPPAT", &arch.skippat, 999);
    rc_read_int("SKIPSTART", &arch.skipstart, 0, 999);
    rc_read_int("SKIPEND", &arch.skipend, 0, 999);
    if(cfg->archiver == archiver_def)
    {
      cfg->cnt_archiver = 1;
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct anonymous_2) /*56ul*/ );
      cfg->archiver = (struct anonymous_2 *)return_value_malloc_2;
    }

    else
    {
      cfg->cnt_archiver = cfg->cnt_archiver + 1;
      void *return_value_realloc_3;
      return_value_realloc_3=realloc((void *)cfg->archiver, sizeof(struct anonymous_2) /*56ul*/  * (unsigned long int)cfg->cnt_archiver);
      cfg->archiver = (struct anonymous_2 *)return_value_realloc_3;
    }
    cfg->archiver[(signed long int)(cfg->cnt_archiver - 1)] = arch;
  }

}

// read_theme
// file ../../src/mconfig.c line 488
static void read_theme(struct anonymous_3 *cfg)
{
  signed int i;
  signed int fg;
  signed int bg;
  signed int attrs[41l];
  struct anonymous_1 read_theme__1__theme = { .name=(char *)(void *)0, .color=-1, .attrs=(signed int *)(void *)0 };
  char *str = (char *)(void *)0;
  char *pos;
  char *end;
  read_theme__1__theme.attrs = attrs;
  signed int return_value_rc_read_string_1;
  return_value_rc_read_string_1=rc_read_string("NAME", &read_theme__1__theme.name, 99);
  const unsigned short int **return_value___ctype_b_loc_2;
  const unsigned short int **return_value___ctype_b_loc_3;
  char *tmp_post_4;
  signed int return_value_strcasecmp_5;
  signed int return_value_strcasecmp_6;
  const unsigned short int **return_value___ctype_b_loc_7;
  const unsigned short int **return_value___ctype_b_loc_8;
  signed int return_value_strcasecmp_9;
  if(!(return_value_rc_read_string_1 == 0))
  {
    i = 0;
    for( ; !(i >= 1); i = i + 1)
    {
      signed int return_value_rc_read_string_10;
      return_value_rc_read_string_10=rc_read_string(attrs_label[(signed long int)i], &str, 99);
      if(!(return_value_rc_read_string_10 == 0))
      {
        pos = str;
        do
        {
          return_value___ctype_b_loc_2=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*pos]) == 0)
            break;

          pos = pos + 1l;
        }
        while((_Bool)1);
        end = pos;
        do
        {
          return_value___ctype_b_loc_3=__ctype_b_loc();
          if((8 & (signed int)(*return_value___ctype_b_loc_3)[(signed long int)(signed int)*end]) == 0)
          {
            if(!((signed int)*end == 95))
              break;

          }

          end = end + 1l;
        }
        while((_Bool)1);
        if(!(*end == 0))
        {
          tmp_post_4 = end;
          end = end + 1l;
          *tmp_post_4 = (char)0;
        }

        fg = 0;
        for( ; !(attrs_mono_conv[(signed long int)fg].label == ((const char *)NULL)); fg = fg + 1)
        {
          return_value_strcasecmp_5=strcasecmp(attrs_mono_conv[(signed long int)fg].label, pos);
          if(return_value_strcasecmp_5 == 0)
            break;

        }
        if(!(attrs_mono_conv[(signed long int)fg].label == ((const char *)NULL)))
        {
          if(!(read_theme__1__theme.color == 1))
          {
            if(read_theme__1__theme.color == -1)
              memcpy((void *)attrs, (const void *)mono_attributes, sizeof(signed int) /*4ul*/  * (unsigned long int)((signed int)ATTR_STATUS_TEXT + 1));

            read_theme__1__theme.attrs[(signed long int)i] = attrs_mono_conv[(signed long int)fg].id;
            read_theme__1__theme.color = 0;
          }

        }

        else
          if(!(*end == 0))
          {
            fg = 0;
            for( ; !(attrs_colf_label[(signed long int)fg] == ((const char *)NULL)); fg = fg + 1)
            {
              return_value_strcasecmp_6=strcasecmp(attrs_colf_label[(signed long int)fg], pos);
              if(return_value_strcasecmp_6 == 0)
                break;

            }
            if(!(attrs_colf_label[(signed long int)fg] == ((const char *)NULL)))
            {
              do
              {
                return_value___ctype_b_loc_7=__ctype_b_loc();
                if(!((8 & (signed int)(*return_value___ctype_b_loc_7)[(signed long int)(signed int)*end]) == 0))
                  break;

                if((signed int)*end == 95)
                  break;

                end = end + 1l;
              }
              while((_Bool)1);
              pos = end;
              do
              {
                return_value___ctype_b_loc_8=__ctype_b_loc();
                if((8 & (signed int)(*return_value___ctype_b_loc_8)[(signed long int)(signed int)*end]) == 0)
                {
                  if(!((signed int)*end == 95))
                    break;

                }

                end = end + 1l;
              }
              while((_Bool)1);
              *end = (char)0;
              bg = 0;
              for( ; !(attrs_colb_label[(signed long int)bg] == ((const char *)NULL)); bg = bg + 1)
              {
                return_value_strcasecmp_9=strcasecmp(attrs_colb_label[(signed long int)bg], pos);
                if(return_value_strcasecmp_9 == 0)
                  break;

              }
              if(!(attrs_colb_label[(signed long int)bg] == ((const char *)NULL)))
              {
                if(!(read_theme__1__theme.color == 0))
                {
                  if(read_theme__1__theme.color == -1)
                    memcpy((void *)attrs, (const void *)color_attributes, sizeof(signed int) /*4ul*/  * (unsigned long int)((signed int)ATTR_STATUS_TEXT + 1));

                  read_theme__1__theme.color = 1;
                  read_theme__1__theme.attrs[(signed long int)i] = (fg << 0) + (bg << 4);
                }

              }

            }

          }

      }

    }
    if(!(str == ((char *)NULL)))
      free((void *)str);

    CF_theme_insert(&cfg->themes, &cfg->cnt_themes, &read_theme__1__theme);
    free((void *)read_theme__1__theme.name);
  }

}

// remove_message
// file ../../src/display.c line 209
static void remove_message(void)
{
  if(!(remove_msg == 0))
  {
    signed long int end_time;
    end_time=time((signed long int *)(void *)0);
    if(end_time + -start_time >= 6l)
    {
      display_version();
      remove_msg = 0;
    }

  }

}

// scan_dir
// file ../../src/mlistedit.c line 321
static void scan_dir(char *path, signed int recursive, signed int links, struct anonymous_25 *freq_data, enum anonymous_26 mode, signed int (*func)(char *, signed int, signed int, void *), void *data, signed int *added, signed int *removed)
{
  struct __dirstream *dir;
  struct dirent *entry;
  struct stat statbuf;
  char file[8192l];
  char *pathend;
  char **dirs = (char **)(void *)0;
  signed int cnt = 0;
  signed int max = 0;
  signed int i;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(path, "/proc/");
  _Bool tmp_if_expr_3;
  signed int return_value_strcmp_2;
  if(return_value_strcmp_1 == 0)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_strcmp_2=strcmp(path, "/dev/");
    tmp_if_expr_3 = !(return_value_strcmp_2 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    dir=opendir(path);
    tmp_if_expr_4 = !(dir != ((struct __dirstream *)NULL)) ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_strcmp_9;
  signed int return_value_strcmp_8;
  signed int tmp_post_7;
  signed int return_value_MA_TestName_11;
  void *return_value_bsearch_10;
  signed int return_value_win_main_iteration_13;
  if(!tmp_if_expr_4)
  {
    if(!(func == ((signed int (*)(char *, signed int, signed int, void *))NULL)))
    {
      signed int add = -1;
      signed int rem = -1;
      if(!(added == ((signed int *)NULL)))
        add = *added;

      if(!(removed == ((signed int *)NULL)))
        rem = *removed;

      signed int return_value;
      return_value=func(path, add, rem, data);
      if(!(return_value == 0))
        closedir(dir);

    }

    strcpy(file, path);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(file);
    pathend = file + (signed long int)return_value_strlen_5;
    do
    {
      entry=readdir(dir);
      if(entry == ((struct dirent *)NULL))
        break;

      strcpy(pathend, entry->d_name);
      signed int return_value_lstat_12;
      return_value_lstat_12=lstat(file, &statbuf);
      if(return_value_lstat_12 == 0)
      {
        if((61440u & statbuf.st_mode) == 16384u)
        {
          if(!(recursive == 0) && (!((61440u & statbuf.st_mode) == 40960u) || !(links == 0)))
          {
            return_value_strcmp_9=strcmp(entry->d_name, "..");
            if(!(return_value_strcmp_9 == 0))
            {
              return_value_strcmp_8=strcmp(entry->d_name, ".");
              if(!(return_value_strcmp_8 == 0))
              {
                if(cnt >= max)
                {
                  max = max + 10;
                  void *return_value_realloc_6;
                  return_value_realloc_6=realloc((void *)dirs, sizeof(char *) /*8ul*/  * (unsigned long int)max);
                  dirs = (char **)return_value_realloc_6;
                }

                tmp_post_7 = cnt;
                cnt = cnt + 1;
                dirs[(signed long int)tmp_post_7]=strdup(entry->d_name);
              }

            }

          }

        }

        else
          if(!((61440u & statbuf.st_mode) == 4096u) && !((61440u & statbuf.st_mode) == 8192u) && !((61440u & statbuf.st_mode) == 24576u) && !((61440u & statbuf.st_mode) == 49152u))
          {
            return_value_MA_TestName_11=MA_TestName(file, 0, 0);
            if(!(return_value_MA_TestName_11 == 0))
            {
              char **pos = (char **)(void *)0;
              signed int j = 0;
              if(!(freq_data == ((struct anonymous_25 *)NULL)))
              {
                if(freq_data->cnt_list >= 1)
                {
                  return_value_bsearch_10=bsearch((const void *)file, (const void *)freq_data->searchlist, (unsigned long int)freq_data->cnt_list, sizeof(char *) /*8ul*/ , (signed int (*)(const void *, const void *))(signed int (*)())searchlist_search_cmp);
                  pos = (char **)return_value_bsearch_10;
                }

              }

              if(!(pos == ((char **)NULL)))
              {
                if(!((signed int)mode == FREQ_ADD))
                {
                  j=entry_remove_by_name(file, (char *)(void *)0, freq_data);
                  if(!(removed == ((signed int *)NULL)))
                    *removed = *removed + j;

                }

                else
                  if(!(freq_data->actline >= 0))
                  {
                    if(!(freq_data->before_add == 0))
                    {
                      j=entry_add(file, (char *)(void *)0, freq_data);
                      if(!(added == ((signed int *)NULL)))
                        *added = *added + j;

                    }

                  }

              }

              else
                if(!((signed int)mode == FREQ_REMOVE))
                {
                  j=entry_add(file, (char *)(void *)0, freq_data);
                  if(!(added == ((signed int *)NULL)))
                    *added = *added + j;

                }

            }

          }

      }

      do
      {
        return_value_win_main_iteration_13=win_main_iteration();
        if(return_value_win_main_iteration_13 == 0)
          break;

      }
      while((_Bool)1);
    }
    while((_Bool)1);
    i = 0;
    for( ; !(i >= cnt); i = i + 1)
    {
      strcpy(pathend, dirs[(signed long int)i]);
      strcat(pathend, "/");
      scan_dir(file, recursive, links, freq_data, mode, func, data, added, removed);
      free((void *)dirs[(signed long int)i]);
    }
    if(!(dirs == ((char **)NULL)))
      free((void *)dirs);

    closedir(dir);
  }

}

// searchlist_cmp
// file ../../src/mlistedit.c line 121
static signed int searchlist_cmp(char **key, char **member)
{
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(*key, *member);
  return return_value_strcmp_1;
}

// searchlist_search_cmp
// file ../../src/mlistedit.c line 127
static signed int searchlist_search_cmp(char *key, char **member)
{
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(key, *member);
  return return_value_strcmp_1;
}

// set_bit
// file ../../src/mikmod.c line 366
static void set_bit(unsigned short int *value, signed int mask, signed int boolv)
{
  if(!(boolv == 0))
    *value = *value | (unsigned short int)mask;

  else
    *value = *value & (unsigned short int)~mask;
}

// set_help
// file ../../src/mconfedit.c line 217
void set_help(struct anonymous_8 *entry, const char *str, ...)
{
  void **args;
  signed int len = 0;
  if(!(entry->help == ((char *)NULL)))
    free((void *)entry->help);

  args = (void **)&str;
  vsnprintf(storage, (unsigned long int)320, str, args);
  args = ((void **)NULL);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(storage);
  unsigned long int tmp_if_expr_3;
  unsigned long int return_value_strlen_2;
  if(!(return_value_strlen_1 >= 320ul))
  {
    return_value_strlen_2=strlen(storage);
    tmp_if_expr_3 = return_value_strlen_2;
  }

  else
    tmp_if_expr_3 = (unsigned long int)320;
  len = (signed int)tmp_if_expr_3;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(char) /*1ul*/  * (unsigned long int)(len + 1));
  entry->help = (char *)return_value_malloc_4;
  strncpy(entry->help, storage, (unsigned long int)len);
  entry->help[(signed long int)len] = (char)0;
}

// set_priority
// file ../../src/mikmod.c line 329
static void set_priority(struct anonymous_3 *cfg)
{
  if(cfg->renice == 1)
    nice(-20);

  else
    if(cfg->renice == 2)
    {
      struct sched_param sp;
      memset((void *)&sp, 0, sizeof(struct sched_param) /*4ul*/ );
      sp.__sched_priority=sched_get_priority_min(2);
      sched_setscheduler(0, 2, &sp);
    }

}

// set_window_title
// file ../../src/display.c line 1288
static void set_window_title(const char *content)
{
  char *env_term;
  _Bool tmp_if_expr_7;
  signed int return_value_strcmp_6;
  _Bool tmp_if_expr_9;
  signed int return_value_strcmp_8;
  _Bool tmp_if_expr_11;
  signed int return_value_strcmp_10;
  _Bool tmp_if_expr_13;
  signed int return_value_strcmp_12;
  _Bool tmp_if_expr_15;
  signed int return_value_strcmp_14;
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  static signed int last_config = 0;
  if(!(config.window_title == 0) || !(last_config == 0))
  {
    if(config.window_title == 0 && !(last_config == 0))
      content = (const char *)(void *)0;

    last_config = config.window_title;
    env_term=getenv("TERM");
    if(!(env_term == ((char *)NULL)))
    {
      if(!(content == ((const char *)NULL)))
        snprintf(storage, (unsigned long int)320, "%s (%s)", (const void *)"-= MikMod 3.2.7 =-", content);

      else
        storage[(signed long int)0] = (char)0;
      signed int return_value_strcmp_5;
      return_value_strcmp_5=strcmp(env_term, "xterm");
      if(return_value_strcmp_5 == 0)
        tmp_if_expr_7 = (_Bool)1;

      else
      {
        return_value_strcmp_6=strcmp(env_term, "xterm-color");
        tmp_if_expr_7 = return_value_strcmp_6 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_7)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        return_value_strcmp_8=strcmp(env_term, "rxvt");
        tmp_if_expr_9 = return_value_strcmp_8 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_9)
        tmp_if_expr_11 = (_Bool)1;

      else
      {
        return_value_strcmp_10=strcmp(env_term, "aixterm");
        tmp_if_expr_11 = return_value_strcmp_10 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_11)
        tmp_if_expr_13 = (_Bool)1;

      else
      {
        return_value_strcmp_12=strcmp(env_term, "dtterm");
        tmp_if_expr_13 = return_value_strcmp_12 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_13)
        tmp_if_expr_15 = (_Bool)1;

      else
      {
        return_value_strcmp_14=strcmp(env_term, "Eterm");
        tmp_if_expr_15 = return_value_strcmp_14 == 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_15)
      {
        printf("%c]0;%s%c", 27, (const void *)storage, 7);
        printf("%c]1;%s%c", 27, (const void *)"-= MikMod 3.2.7 =-", 7);
      }

      else
      {
        return_value_strcmp_4=strcmp(env_term, "iris-ansi");
        if(return_value_strcmp_4 == 0)
        {
          printf("%cP1.y%s%c\\", 27, (const void *)storage, 27);
          printf("%cP3.y%s%c\\", 27, (const void *)"-= MikMod 3.2.7 =-", 27);
        }

        else
        {
          return_value_strcmp_3=strcmp(env_term, "hpterm");
          if(return_value_strcmp_3 == 0)
          {
            unsigned long int return_value_strlen_1;
            return_value_strlen_1=strlen(storage);
            printf("\033&f0k%dD%s", (signed int)return_value_strlen_1, (const void *)storage);
            unsigned long int return_value_strlen_2;
            return_value_strlen_2=strlen("-= MikMod 3.2.7 =-");
            printf("\033&f-1k%dD%s", (signed int)return_value_strlen_2, (const void *)"-= MikMod 3.2.7 =-");
          }

        }
      }
    }

  }

}

// setup_printf
// file ../../src/display.c line 131
static void setup_printf(void)
{
  signed int maxx;
  signed int setup_printf__1__winy;
  win_get_size(root, &maxx, &setup_printf__1__winy);
  if(maxx >= 201)
    maxx = 200;

  if(!(maxx >= 0))
    maxx = 0;

  halfwidth = maxx >> 1;
  if(!(halfwidth >= 20))
    halfwidth = 20;

  snprintf(fmt_fullwidth, (unsigned long int)20, "%%-%d.%ds", maxx, maxx);
  snprintf(fmt_halfwidth, (unsigned long int)20, "%%3i  %%-%d.%ds", halfwidth - 5, halfwidth - 5);
}

// sigwinch_handler
// file ../../src/mwindow.c line 181
void sigwinch_handler(signed int signum)
{
  resize = 1;
  signal(28, sigwinch_handler);
}

// skip_number
// file ../../src/mconfedit.c line 234
static char * skip_number(char *str)
{
  for( ; !(str == ((char *)NULL)); str = str + 1l)
    if(!((signed int)*str == 32))
      break;

  const unsigned short int **return_value___ctype_b_loc_1;
  for( ; !(str == ((char *)NULL)); str = str + 1l)
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*str]) == 0)
      break;

  }
  for( ; !(str == ((char *)NULL)); str = str + 1l)
    if(!((signed int)*str == 32))
      break;

  return str;
}

// skip_space
// file ../../src/rcfile.c line 383
static char skip_space(char **line)
{
  for( ; (_Bool)1; *line = *line + 1l)
    if(!((signed int)*(*line) == 32))
    {
      if(!((signed int)*(*line) == 9))
        goto __CPROVER_DUMP_L3;

    }


__CPROVER_DUMP_L3:
  ;
  return *(*line);
}

// split_command
// file ../../src/marchive.c line 330
static void split_command(char *command, char **argv, signed int sizeargv)
{
  char *pos = command;
  signed int i = 0;
  const unsigned short int **return_value___ctype_b_loc_1;
  char *tmp_post_3;
  signed int tmp_post_4;
  char *tmp_post_5;
  signed int tmp_post_6;
  const unsigned short int **return_value___ctype_b_loc_7;
  while((_Bool)1)
  {
    if(*pos == 0 || i >= sizeargv + -1)
    {
      argv[(signed long int)i] = (char *)(void *)0;
      goto __CPROVER_DUMP_L14;
    }

    const unsigned short int **return_value___ctype_b_loc_2;
    return_value___ctype_b_loc_2=__ctype_b_loc();
    if(!((8192 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*pos]) == 0))
    {
      *pos = (char)0;
      pos = pos + 1l;
      do
      {
        return_value___ctype_b_loc_1=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*pos]) == 0)
          break;

        pos = pos + 1l;
      }
      while((_Bool)1);
    }

    if((signed int)*pos == 34)
    {
      tmp_post_3 = pos;
      pos = pos + 1l;
      *tmp_post_3 = (char)0;
      tmp_post_4 = i;
      i = i + 1;
      argv[(signed long int)tmp_post_4] = pos;
      for( ; !((signed int)*pos == 34); pos = pos + 1l)
        if(*pos == 0)
          break;

      if(!(*pos == 0))
      {
        tmp_post_5 = pos;
        pos = pos + 1l;
        *tmp_post_5 = (char)0;
      }

    }

    else
    {
      tmp_post_6 = i;
      i = i + 1;
      argv[(signed long int)tmp_post_6] = pos;
      do
      {
        return_value___ctype_b_loc_7=__ctype_b_loc();
        if(!((8192 & (signed int)(*return_value___ctype_b_loc_7)[(signed long int)(signed int)*pos]) == 0))
          break;

        if(*pos == 0)
          break;

        pos = pos + 1l;
      }
      while((_Bool)1);
    }
  }

__CPROVER_DUMP_L14:
  ;
}

// split_name
// file ../../src/mlistedit.c line 1007
static void split_name(char *file, char **name, char **ext)
{
  *name=strrchr(file, 47);
  if(*name == ((char *)NULL))
    *name = file;

  *ext=strrchr(*name, 46);
  unsigned long int return_value_strlen_1;
  if(*ext == ((char *)NULL))
  {
    return_value_strlen_1=strlen(*name);
    *ext = &(*name[(signed long int)return_value_strlen_1]);
  }

}

// str_free
// file ../../src/mwidget.c line 111
static void str_free(struct anonymous_12 *w)
{
  free((void *)w->input);
  free((void *)w);
}

// str_get_size
// file ../../src/mwidget.c line 271
static void str_get_size(struct anonymous_12 *w, signed int *width, signed int *height)
{
  if(!(w->w.def_width >= *width))
    *width = w->w.def_width;

  if(!(w->length >= *width))
    *width = w->length + 1;

  if(!(*width >= 20))
    *width = 20;

  w->start = (w->cur_pos - *width) + 1;
  if(!(w->start >= 0))
    w->start = 0;

  *height = 1;
}

// str_handle_event
// file ../../src/mwidget.c line 266
static signed int str_handle_event(struct anonymous_12 *w, enum anonymous_18 event, signed int ch)
{
  signed int return_value_input_handle_event_1;
  return_value_input_handle_event_1=input_handle_event(w, event, ch, 0);
  return return_value_input_handle_event_1;
}

// str_paint
// file ../../src/mwidget.c line 117
static void str_paint(struct anonymous_12 *w)
{
  char hl[2l] = { ' ', 0 };
  char ch = (char)32;
  char *pos = &w->input[(signed long int)w->start];
  signed int dx = 0;
  signed int len;
  win_attrset((enum anonymous_7)ATTR_DLG_STR_TEXT);
  if(!(w->w.has_focus == 0))
  {
    ch = w->input[(signed long int)w->cur_pos];
    hl[(signed long int)0] = ch;
    if(hl[0l] == 0)
      hl[(signed long int)0] = (char)32;

    w->input[(signed long int)w->cur_pos] = (char)0;
    if(!(*pos == 0))
      win_print(w->w.d->win, w->w.x, w->w.y, pos);

    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(pos);
    dx = (signed int)return_value_strlen_1;
    win_attrset((enum anonymous_7)ATTR_DLG_STR_CURSOR);
    win_print(w->w.d->win, w->w.x + dx, w->w.y, hl);
    win_attrset((enum anonymous_7)ATTR_DLG_STR_TEXT);
    pos = pos + (signed long int)dx;
    dx = dx + 1;
    *pos = ch;
    if(!(*pos == 0))
      pos = pos + 1l;

  }

  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(pos);
  len = (signed int)return_value_strlen_2;
  if(!(w->w.width >= dx + len))
  {
    ch = w->input[(signed long int)(w->w.width + w->start)];
    w->input[(signed long int)(w->w.width + w->start)] = (char)0;
  }

  win_print(w->w.d->win, w->w.x + dx, w->w.y, pos);
  if(!(w->w.width >= dx + len))
    w->input[(signed long int)(w->w.width + w->start)] = ch;

  else
    if(!(dx + len >= w->w.width))
    {
      dx = dx + len;
      len = 0;
      for( ; !(len >= w->w.width + -dx); len = len + 1)
        storage[(signed long int)len] = (char)32;
      storage[(signed long int)len] = (char)0;
      win_print(w->w.d->win, w->w.x + dx, w->w.y, storage);
    }

}

// str_sprintf
// file ../../src/mutilities.c line 208
char * str_sprintf(const char *fmt, const char *arg)
{
  char *return_value_str_sprintf2_1;
  return_value_str_sprintf2_1=str_sprintf2(fmt, arg, "");
  return return_value_str_sprintf2_1;
}

// str_sprintf2
// file ../../src/mutilities.h line 176
char * str_sprintf2(const char *fmt, const char *arg1, const char *arg2)
{
  char *msg;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(fmt);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(arg1);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(arg2);
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(return_value_strlen_1 + return_value_strlen_2 + return_value_strlen_3 + (unsigned long int)1);
  msg = (char *)return_value_malloc_4;
  if(!(msg == ((char *)NULL)))
    sprintf(msg, fmt, arg1, arg2);

  return msg;
}

// theme_copy
// file ../../src/mconfedit.c line 588
static void theme_copy(signed int *act_theme)
{
  struct anonymous_1 newtheme;
  newtheme.color = (themes + (signed long int)*act_theme)->color;
  newtheme.attrs = (themes + (signed long int)*act_theme)->attrs;
  newtheme.name=theme_uniq_name((themes + (signed long int)*act_theme)->name);
  if(!(newtheme.name == ((char *)NULL)))
  {
    *act_theme=CF_theme_insert(&themes, &cnt_themes, &newtheme);
    free((void *)newtheme.name);
  }

}

// theme_edit
// file ../../src/mconfedit.c line 507
static void theme_edit(signed int act_theme)
{
  struct anonymous_17 *d;
  d=dialog_new();
  struct WIDGET *w;
  char title[200l];
  struct anonymous_20 *data;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_20) /*96ul*/ );
  data = (struct anonymous_20 *)return_value_malloc_1;
  data->cur_attr = 0;
  data->orig_theme = act_theme;
  data->test_theme.name = (char *)(void *)0;
  data->test_theme.attrs = (signed int *)(void *)0;
  CF_theme_copy(&data->theme, &themes[(signed long int)act_theme]);
  w=wid_list_add(d, 1, attrs_label, (signed int)ATTR_STATUS_TEXT + 1);
  wid_list_set_selection_mode((struct anonymous_14 *)w, (enum anonymous_10)WID_SEL_BROWSE);
  wid_set_size(w, 20, -1);
  wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_theme_list_focus, (void *)data);
  data->list_w = (struct anonymous_14 *)w;
  struct WIDGET *return_value_wid_str_add_2;
  return_value_wid_str_add_2=wid_str_add(d, 0, data->theme.name, 99);
  data->str_w = (struct anonymous_12 *)return_value_wid_str_add_2;
  wid_set_size((struct WIDGET *)data->str_w, 26, -1);
  if(!(data->theme.color == 0))
  {
    signed int return_value_win_has_colors_4;
    return_value_win_has_colors_4=win_has_colors();
    if(!(return_value_win_has_colors_4 == 0))
    {
      struct WIDGET *return_value_wid_colorsel_add_3;
      return_value_wid_colorsel_add_3=wid_colorsel_add(d, 1, "sdex", 0);
      data->col_w = (struct anonymous_16 *)return_value_wid_colorsel_add_3;
      wid_set_func((struct WIDGET *)data->col_w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_focus, (void *)data);
      data->w=wid_toggle_add(d, 0, "&bold", 0, 0);
    }

    else
    {
      data->col_w = (struct anonymous_16 *)(void *)0;
      data->w=wid_toggle_add(d, 2, "&bold", 0, 0);
    }
    wid_set_func(data->w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_focus, (void *)data);
  }

  else
  {
    data->w=wid_check_add(d, 2, "&normal|&bold|&reverse", 0, 0);
    wid_set_func(data->w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_focus, (void *)data);
  }
  theme_set_attrs(data, 0);
  signed int return_value_win_has_colors_5;
  return_value_win_has_colors_5=win_has_colors();
  _Bool tmp_if_expr_6;
  if(!(return_value_win_has_colors_5 == 0))
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = !(data->theme.color != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_6)
    w=wid_button_add(d, -1, "&Ok|&Test|&Cancel", 0);

  else
    w=wid_button_add(d, -1, "&Ok|&Cancel", 0);
  wid_set_func(w, (signed int (*)(struct WIDGET *, signed int))(void *)0, cb_theme_button_focus, (void *)data);
  strcpy(title, "Edit theme ");
  strncat(title, data->theme.name, (unsigned long int)180);
  dialog_open(d, title);
}

// theme_edit_close
// file ../../src/mconfedit.c line 448
static void theme_edit_close(struct anonymous_20 *data)
{
  win_set_theme(&config.themes[(signed long int)config.theme]);
  config_set_act_theme(data->orig_theme);
  get_themes(&other_entries[(signed long int)5]);
  if(!(data->w == ((struct WIDGET *)NULL)))
    dialog_close(data->w->d);

  CF_theme_free(&data->theme);
  CF_theme_free(&data->test_theme);
  free((void *)data);
}

// theme_get_attrs
// file ../../src/mconfedit.c line 383
static void theme_get_attrs(struct anonymous_20 *data)
{
  signed int *attr = &data->theme.attrs[(signed long int)data->cur_attr];
  if(!(data->theme.color == 0))
  {
    if(!(data->col_w == ((struct anonymous_16 *)NULL)))
      *attr = data->col_w->active;

    if(((struct anonymous_15 *)data->w)->selected == 1)
      *attr = *attr | 0x08;

    else
      *attr = *attr & ~0x08;
  }

  else
  {
    struct anonymous_15 *cw = (struct anonymous_15 *)data->w;
    if(cw->selected == 1)
      *attr = (signed int)(1UL - 1UL);

    else
      if(cw->selected == 2)
        *attr = (signed int)((unsigned long int)1UL << 13 + 8);

      else
        if(cw->selected == 4)
          *attr = (signed int)((unsigned long int)1UL << 10 + 8);

  }
}

// theme_set_attrs
// file ../../src/mconfedit.c line 405
static void theme_set_attrs(struct anonymous_20 *data, signed int repaint)
{
  signed int cur = data->cur_attr;
  signed int i = 0;
  if(!(data->theme.color == 0))
  {
    if(!(data->col_w == ((struct anonymous_16 *)NULL)))
    {
      wid_colorsel_set_active((struct anonymous_16 *)data->col_w, data->theme.attrs[(signed long int)cur]);
      if(!(repaint == 0))
        wid_repaint((struct WIDGET *)data->col_w);

    }

    if(!((0x08 & data->theme.attrs[(signed long int)cur]) == 0))
      i = 1;

    else
      i = 0;
    wid_toggle_set_selected((struct anonymous_15 *)data->w, i);
  }

  else
  {
    if((unsigned long int)data->theme.attrs[(signed long int)cur] == 0ul)
      i = 1;

    else
      if((unsigned long int)data->theme.attrs[(signed long int)cur] == 2097152ul)
        i = 2;

      else
        if((unsigned long int)data->theme.attrs[(signed long int)cur] == 262144ul)
          i = 4;

    wid_check_set_selected((struct anonymous_15 *)data->w, i);
  }
  if(!(repaint == 0))
    wid_repaint(data->w);

}

// theme_uniq_name
// file ../../src/mconfedit.c line 557
static char * theme_uniq_name(char *src_name)
{
  char buf[100l];
  char *pos;
  char *name;
  signed int i;
  signed int n;
  signed int len;
  strncpy(buf, src_name, (unsigned long int)99);
  buf[(signed long int)99] = (char)0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(buf);
  pos = (buf + (signed long int)return_value_strlen_1) - (signed long int)1;
  _Bool tmp_if_expr_3;
  const unsigned short int **return_value___ctype_b_loc_2;
  do
  {
    if(pos >= buf)
    {
      return_value___ctype_b_loc_2=__ctype_b_loc();
      tmp_if_expr_3 = ((signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*pos] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    if(!tmp_if_expr_3)
      break;

    *pos = (char)0;
    pos = pos - 1l;
  }
  while((_Bool)1);
  const unsigned short int **return_value___ctype_b_loc_5;
  const unsigned short int **return_value___ctype_b_loc_4;
  if(!(buf >= pos))
  {
    return_value___ctype_b_loc_5=__ctype_b_loc();
    if(!((2048 & (signed int)(*return_value___ctype_b_loc_5)[(signed long int)(signed int)*pos]) == 0))
    {
      return_value___ctype_b_loc_4=__ctype_b_loc();
      if(!((2048 & (signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)pos[-1l]]) == 0))
        *(pos - (signed long int)2) = (char)0;

    }

  }

  unsigned long int return_value_strlen_6;
  return_value_strlen_6=strlen(buf);
  if(return_value_strlen_6 >= 95ul)
    buf[(signed long int)(99 - 5)] = (char)0;

  strcat(buf, " %02d");
  unsigned long int return_value_strlen_7;
  return_value_strlen_7=strlen(buf);
  len = (signed int)(return_value_strlen_7 + (unsigned long int)1);
  void *return_value_malloc_8;
  return_value_malloc_8=malloc(sizeof(char) /*1ul*/  * (unsigned long int)len);
  name = (char *)return_value_malloc_8;
  n = 2;
  signed int return_value_strcmp_9;
  do
  {
    snprintf(name, (unsigned long int)len, buf, n);
    i = 0;
    for( ; !(i >= cnt_themes); i = i + 1)
    {
      return_value_strcmp_9=strcmp((themes + (signed long int)i)->name, name);
      if(return_value_strcmp_9 == 0)
        break;

    }
    if(i >= cnt_themes)
      return name;

    n = n + 1;
  }
  while(!(n >= 100));
  free((void *)name);
  return (char *)(void *)0;
}

// toggle_free
// file ../../src/mwidget.c line 787
static void toggle_free(struct anonymous_15 *w)
{
  free((void *)w->button);
  free((void *)w);
}

// toggle_get_size
// file ../../src/mwidget.c line 803
static void toggle_get_size(struct anonymous_15 *w, signed int *width, signed int *height)
{
  check_get_size((struct anonymous_15 *)w, width, height);
}

// toggle_handle_event
// file ../../src/mwidget.c line 798
static signed int toggle_handle_event(struct anonymous_15 *w, enum anonymous_18 event, signed int ch)
{
  signed int return_value_check_toggle_handle_event_1;
  return_value_check_toggle_handle_event_1=check_toggle_handle_event((struct anonymous_15 *)w, event, ch, 1);
  return return_value_check_toggle_handle_event_1;
}

// toggle_paint
// file ../../src/mwidget.c line 793
static void toggle_paint(struct anonymous_15 *w)
{
  check_toggle_paint((struct anonymous_15 *)w, 1);
}

// update_message
// file ../../src/display.c line 200
static void update_message(void)
{
  if(!(remove_msg == 0))
  {
    if(!(old_message[0l] == 0))
    {
      win_attrset((enum anonymous_7)ATTR_WARNING);
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen("-= MikMod 3.2.7 =-");
      win_print(root, (signed int)return_value_strlen_1, 0, old_message);
    }

  }

}

// updatefirst
// file ../../src/display.c line 645
void updatefirst(struct MWINDOW *win, signed int *first, signed int *winx, signed int *count, signed int *semicount, signed int diff, signed int total)
{
  signed int wx;
  signed int scount;
  *first = *first + diff;
  win_get_size(win, &wx, &scount);
  *winx = wx;
  if(!(semicount == ((signed int *)NULL)))
  {
    if(!(wx >= 10))
      *count = scount;

    else
      *count = scount * 2;
  }

  else
    *count = scount;
  if(!(scount >= 1) || !(wx >= 1))
    *count = 0;

  if(*first >= total + -(*count))
    *first = total - *count;

  if(!(*first >= 0))
    *first = 0;

  if(!(semicount == ((signed int *)NULL)))
  {
    if(!(scount >= total))
    {
      if(!(total >= *count))
      {
        scount = total + 1 >> 1;
        if(!(wx >= 10))
          *count = scount;

        else
          *count = scount * 2;
      }

    }

    *semicount = scount;
  }

}

// wid_button_add
// file ../../src/mwidget.c line 1078
struct WIDGET * wid_button_add(struct anonymous_17 *d, signed int spacing, const char *button, signed int active)
{
  struct anonymous_13 *w;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_13) /*120ul*/ );
  w = (struct anonymous_13 *)return_value_malloc_1;
  widget_init((struct WIDGET *)w, d, 1, spacing);
  w->w.type = (enum anonymous_32)TYPE_BUTTON;
  w->w.w_free = (void (*)(struct WIDGET *))button_free;
  w->w.w_paint = (void (*)(struct WIDGET *))button_paint;
  w->w.w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))button_handle_event;
  w->w.w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))button_get_size;
  w->button=strdup(button);
  w->active = active;
  dialog_add(d, (struct WIDGET *)w);
  return (struct WIDGET *)w;
}

// wid_check_add
// file ../../src/mwidget.c line 1167
struct WIDGET * wid_check_add(struct anonymous_17 *d, signed int spacing, const char *button, signed int active, signed int selected)
{
  struct anonymous_15 *w;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_15) /*128ul*/ );
  w = (struct anonymous_15 *)return_value_malloc_1;
  widget_init((struct WIDGET *)w, d, 1, spacing);
  w->w.type = (enum anonymous_32)TYPE_CHECK;
  w->w.w_free = (void (*)(struct WIDGET *))check_free;
  w->w.w_paint = (void (*)(struct WIDGET *))check_paint;
  w->w.w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))check_handle_event;
  w->w.w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))check_get_size;
  w->button=strdup(button);
  w->active = active;
  w->selected = selected;
  dialog_add(d, (struct WIDGET *)w);
  return (struct WIDGET *)w;
}

// wid_check_set_selected
// file ../../src/mwidget.c line 1185
void wid_check_set_selected(struct anonymous_15 *w, signed int selected)
{
  w->selected = selected;
}

// wid_colorsel_add
// file ../../src/mwidget.c line 1213
struct WIDGET * wid_colorsel_add(struct anonymous_17 *d, signed int spacing, const char *hotkeys, signed int active)
{
  struct anonymous_16 *w;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_16) /*120ul*/ );
  w = (struct anonymous_16 *)return_value_malloc_1;
  signed int i;
  widget_init((struct WIDGET *)w, d, 1, spacing);
  w->w.type = (enum anonymous_32)TYPE_COLORSEL;
  w->w.w_free = (void (*)(struct WIDGET *))colorsel_free;
  w->w.w_paint = (void (*)(struct WIDGET *))colorsel_paint;
  w->w.w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))colorsel_handle_event;
  w->w.w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))colorsel_get_size;
  w->active = active;
  _Bool tmp_if_expr_4;
  if(!(hotkeys == ((const char *)NULL)))
    tmp_if_expr_4 = *hotkeys != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_4 = (_Bool)0;
  unsigned long int return_value_strlen_2;
  signed int return_value_toupper_3;
  if(tmp_if_expr_4)
  {
    strcpy(w->hkeys, hotkeys);
    w->hkeys[(signed long int)4] = (char)0;
    i = 0;
    do
    {
      return_value_strlen_2=strlen(w->hkeys);
      if((unsigned long int)i >= return_value_strlen_2)
        break;

      return_value_toupper_3=toupper((signed int)w->hkeys[(signed long int)i]);
      w->hkeys[(signed long int)i] = (char)return_value_toupper_3;
      i = i + 1;
    }
    while((_Bool)1);
  }

  else
    memset((void *)&w->hkeys, 0, (unsigned long int)5);
  w->sel_mode = (enum anonymous_10)WID_SEL_SINGLE;
  dialog_add(d, (struct WIDGET *)w);
  return (struct WIDGET *)w;
}

// wid_colorsel_set_active
// file ../../src/mwidget.c line 1238
void wid_colorsel_set_active(struct anonymous_16 *w, signed int active)
{
  w->active = active;
}

// wid_int_add
// file ../../src/mwidget.c line 1048
struct WIDGET * wid_int_add(struct anonymous_17 *d, signed int spacing, signed int value, signed int length)
{
  struct anonymous_12 *w;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_12) /*128ul*/ );
  w = (struct anonymous_12 *)return_value_malloc_1;
  widget_init((struct WIDGET *)w, d, 1, spacing);
  w->w.type = (enum anonymous_32)TYPE_INT;
  w->w.w_free = (void (*)(struct WIDGET *))int_free;
  w->w.w_paint = (void (*)(struct WIDGET *))int_paint;
  w->w.w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))int_handle_event;
  w->w.w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))int_get_size;
  w->start = 0;
  w->length = length;
  w->w.def_width = 11;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)(w->length + 1));
  w->input = (char *)return_value_malloc_2;
  sprintf(w->input, "%d", value);
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(w->input);
  w->cur_pos = (signed int)return_value_strlen_3;
  dialog_add(d, (struct WIDGET *)w);
  return (struct WIDGET *)w;
}

// wid_int_set_input
// file ../../src/mwidget.c line 1071
void wid_int_set_input(struct anonymous_12 *w, signed int value, signed int length)
{
  char val[20l];
  sprintf(val, "%d", value);
  wid_str_set_input((struct anonymous_12 *)w, val, length);
}

// wid_label_add
// file ../../src/mwidget.c line 977
struct WIDGET * wid_label_add(struct anonymous_17 *d, signed int spacing, const char *msg)
{
  struct anonymous_11 *w;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_11) /*112ul*/ );
  w = (struct anonymous_11 *)return_value_malloc_1;
  widget_init((struct WIDGET *)w, d, 0, spacing);
  w->w.type = (enum anonymous_32)TYPE_LABEL;
  w->w.w_free = (void (*)(struct WIDGET *))label_free;
  w->w.w_paint = (void (*)(struct WIDGET *))label_paint;
  w->w.w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))label_handle_event;
  w->w.w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))label_get_size;
  w->msg=strdup(msg);
  dialog_add(d, (struct WIDGET *)w);
  return (struct WIDGET *)w;
}

// wid_label_set_label
// file ../../src/mwidget.c line 993
void wid_label_set_label(struct anonymous_11 *w, const char *label)
{
  if(!(w->msg == ((char *)NULL)))
    free((void *)w->msg);

  w->msg=strdup(label);
}

// wid_list_add
// file ../../src/mwidget.c line 1095
struct WIDGET * wid_list_add(struct anonymous_17 *d, signed int spacing, const char **entries, signed int cnt)
{
  struct anonymous_14 *w;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_14) /*144ul*/ );
  w = (struct anonymous_14 *)return_value_malloc_1;
  widget_init((struct WIDGET *)w, d, 1, spacing);
  w->w.type = (enum anonymous_32)TYPE_LIST;
  w->title = (char *)(void *)0;
  w->entries = (char **)(void *)0;
  w->sel_mode = (enum anonymous_10)WID_SEL_SINGLE;
  w->first = 0;
  w->cur = w->first;
  w->cnt = w->cur;
  w->w.def_width = 60;
  w->w.def_height = 20;
  wid_list_set_entries(w, entries, -1, cnt);
  w->w.w_free = (void (*)(struct WIDGET *))list_free;
  w->w.w_paint = (void (*)(struct WIDGET *))list_paint;
  w->w.w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))list_handle_event;
  w->w.w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))list_get_size;
  dialog_add(d, (struct WIDGET *)w);
  return (struct WIDGET *)w;
}

// wid_list_set_active
// file ../../src/mwidget.c line 1150
void wid_list_set_active(struct anonymous_14 *w, signed int cur)
{
  if(cur >= 0)
  {
    if(!(cur >= w->cnt))
    {
      w->cur = cur;
      if(!(w->cur >= w->first))
        w->first = w->cur;

      if(w->cur >= w->first + w->w.height + -2)
        w->first = (w->cur - w->w.height) + 3;

    }

  }

}

// wid_list_set_entries
// file ../../src/mwidget.c line 1125
void wid_list_set_entries(struct anonymous_14 *w, const char **entries, signed int cur, signed int cnt)
{
  signed int i;
  if(!(w->entries == ((char **)NULL)))
  {
    i = 0;
    for( ; !(i >= w->cnt); i = i + 1)
      free((void *)w->entries[(signed long int)i]);
    free((void *)w->entries);
    w->entries = (char **)(void *)0;
  }

  w->cnt = cnt;
  if(cur >= 0)
  {
    w->cur = cur;
    w->first = cur > 0 ? cur - 1 : 0;
  }

  if(w->cur >= cnt)
    w->cur = cnt > 0 ? cnt - 1 : 0;

  signed int tmp_if_expr_1;
  if(!(w->cur >= w->first))
  {
    if(w->cur >= 1)
      tmp_if_expr_1 = w->cur - 1;

    else
      tmp_if_expr_1 = 0;
    w->first = tmp_if_expr_1;
  }

  if(cnt >= 1)
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(char *) /*8ul*/  * (unsigned long int)cnt);
    w->entries = (char **)return_value_malloc_2;
    i = 0;
    for( ; !(i >= cnt); i = i + 1)
      w->entries[(signed long int)i]=strdup(entries[(signed long int)i]);
  }

}

// wid_list_set_selection_mode
// file ../../src/mwidget.c line 1162
void wid_list_set_selection_mode(struct anonymous_14 *w, enum anonymous_10 mode)
{
  w->sel_mode = mode;
}

// wid_list_set_title
// file ../../src/mwidget.c line 1119
void wid_list_set_title(struct anonymous_14 *w, const char *title)
{
  if(!(w->title == ((char *)NULL)))
    free((void *)w->title);

  w->title=strdup(title);
}

// wid_repaint
// file ../../src/mwidget.c line 1257
void wid_repaint(struct WIDGET *w)
{
  if(!(w->w_paint == ((void (*)(struct WIDGET *))NULL)))
    w->w_paint(w);

}

// wid_set_func
// file ../../src/mwidget.c line 1249
void wid_set_func(struct WIDGET *w, signed int (*key)(struct WIDGET *, signed int), signed int (*focus)(struct WIDGET *, signed int), void *data)
{
  w->handle_key = key;
  w->handle_focus = focus;
  w->data = data;
}

// wid_set_size
// file ../../src/mwidget.c line 1243
void wid_set_size(struct WIDGET *w, signed int width, signed int height)
{
  if(width >= 0)
    w->def_width = width;

  if(height >= 0)
    w->def_height = height;

}

// wid_str_add
// file ../../src/mwidget.c line 999
struct WIDGET * wid_str_add(struct anonymous_17 *d, signed int spacing, const char *input, signed int length)
{
  signed int i;
  struct anonymous_12 *w;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_12) /*128ul*/ );
  w = (struct anonymous_12 *)return_value_malloc_1;
  widget_init((struct WIDGET *)w, d, 1, spacing);
  w->w.type = (enum anonymous_32)TYPE_STR;
  w->w.w_free = (void (*)(struct WIDGET *))str_free;
  w->w.w_paint = (void (*)(struct WIDGET *))str_paint;
  w->w.w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))str_handle_event;
  w->w.w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))str_get_size;
  w->length = length;
  w->w.def_width = 70;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)(length + 1));
  w->input = (char *)return_value_malloc_2;
  unsigned long int return_value_strlen_3;
  return_value_strlen_3=strlen(input);
  unsigned long int tmp_if_expr_5;
  unsigned long int return_value_strlen_4;
  if(!(return_value_strlen_3 >= (unsigned long int)length))
  {
    return_value_strlen_4=strlen(input);
    tmp_if_expr_5 = return_value_strlen_4;
  }

  else
    tmp_if_expr_5 = (unsigned long int)length;
  i = (signed int)tmp_if_expr_5;
  strncpy(w->input, input, (unsigned long int)i);
  w->input[(signed long int)i] = (char)0;
  unsigned long int return_value_strlen_6;
  return_value_strlen_6=strlen(w->input);
  w->cur_pos = (signed int)return_value_strlen_6;
  dialog_add(d, (struct WIDGET *)w);
  return (struct WIDGET *)w;
}

// wid_str_set_input
// file ../../src/mwidget.c line 1025
void wid_str_set_input(struct anonymous_12 *w, const char *input, signed int length)
{
  if(length >= 0)
  {
    if(!(w->input == ((char *)NULL)))
      free((void *)w->input);

    w->length = length;
  }

  unsigned long int tmp_if_expr_3;
  unsigned long int return_value_strlen_2;
  unsigned long int return_value_strlen_4;
  if(w->length == 0)
  {
    w->input = (char *)(void *)0;
    w->start = 0;
    w->cur_pos = w->start;
  }

  else
  {
    signed int i;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(input);
    if(!(return_value_strlen_1 >= (unsigned long int)w->length))
    {
      return_value_strlen_2=strlen(input);
      tmp_if_expr_3 = return_value_strlen_2;
    }

    else
      tmp_if_expr_3 = (unsigned long int)w->length;
    i = (signed int)tmp_if_expr_3;
    strncpy(w->input, input, (unsigned long int)i);
    w->input[(signed long int)i] = (char)0;
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(w->input);
    if(!(return_value_strlen_5 >= (unsigned long int)w->cur_pos))
    {
      return_value_strlen_4=strlen(w->input);
      w->cur_pos = (signed int)return_value_strlen_4;
    }

    if(!(w->cur_pos >= w->start))
      w->start = w->cur_pos;

    if(w->cur_pos >= w->start + w->w.width)
      w->start = (w->cur_pos - w->w.width) + 1;

  }
}

// wid_toggle_add
// file ../../src/mwidget.c line 1190
struct WIDGET * wid_toggle_add(struct anonymous_17 *d, signed int spacing, const char *button, signed int active, signed int selected)
{
  struct anonymous_15 *w;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_15) /*128ul*/ );
  w = (struct anonymous_15 *)return_value_malloc_1;
  widget_init((struct WIDGET *)w, d, 1, spacing);
  w->w.type = (enum anonymous_32)TYPE_TOGGLE;
  w->w.w_free = (void (*)(struct WIDGET *))toggle_free;
  w->w.w_paint = (void (*)(struct WIDGET *))toggle_paint;
  w->w.w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))toggle_handle_event;
  w->w.w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))toggle_get_size;
  w->button=strdup(button);
  w->active = active;
  w->selected = selected;
  dialog_add(d, (struct WIDGET *)w);
  return (struct WIDGET *)w;
}

// wid_toggle_set_selected
// file ../../src/mwidget.c line 1208
void wid_toggle_set_selected(struct anonymous_15 *w, signed int selected)
{
  w->selected = selected;
}

// widget_init
// file ../../src/mwidget.c line 962
static void widget_init(struct WIDGET *w, struct anonymous_17 *d, signed int focus, signed int spacing)
{
  w->height = 1;
  w->width = w->height;
  w->y = w->width;
  w->x = w->y;
  w->def_height = -1;
  w->def_width = w->def_height;
  w->spacing = spacing;
  w->can_focus = focus;
  w->has_focus = 0;
  w->d = d;
  w->handle_focus = (signed int (*)(struct WIDGET *, signed int))(void *)0;
  w->handle_key = w->handle_focus;
  w->w_paint = (void (*)(struct WIDGET *))(void *)0;
  w->w_free = w->w_paint;
  w->w_handle_event = (signed int (*)(struct WIDGET *, enum anonymous_18, signed int))(void *)0;
  w->w_get_size = (void (*)(struct WIDGET *, signed int *, signed int *))(void *)0;
  w->data = (void *)0;
}

// win_attrset
// file ../../src/mwindow.h line 146
void win_attrset(enum anonymous_7 attrs)
{
  if(win_quiet == 0 && !(theme == ((struct anonymous_1 *)NULL)))
  {
    signed int theme_attr = theme->attrs[(signed long int)attrs];
    act_color = theme_attr;
    if(!(theme->color == 0))
    {
      signed int pair;
      if(theme_attr == 8)
        theme_attr = (8 - 1 << 4) + (8 - 2 << 0);

      act_color = theme_attr;
      signed int return_value_color_to_pair_1;
      return_value_color_to_pair_1=color_to_pair(theme_attr);
      pair = (signed int)((unsigned long int)return_value_color_to_pair_1 << 0 + 8);
      if(!((0x08 & theme_attr) == 0))
      {
        if(!(stdscr == ((struct _win_st *)NULL)))
        {
          stdscr->_attrs = (unsigned long int)((unsigned long int)pair | (unsigned long int)1UL << 13 + 8);
          0;
        }

        else
          -1;
      }

      else
        if(!(stdscr == ((struct _win_st *)NULL)))
        {
          stdscr->_attrs = (unsigned long int)pair;
          0;
        }

        else
          -1;
    }

    else
      if(!(stdscr == ((struct _win_st *)NULL)))
      {
        stdscr->_attrs = (unsigned long int)theme_attr;
        0;
      }

      else
        -1;
  }

}

// win_box
// file ../../src/mwindow.c line 838
void win_box(struct MWINDOW *win, signed int x1, signed int y1, signed int x2, signed int y2)
{
  win_box_color(win, x1, y1, x2, y2, (enum anonymous_7 *)(void *)0);
}

// win_box_color
// file ../../src/mwindow.c line 768
void win_box_color(struct MWINDOW *win, signed int x1, signed int y1, signed int x2, signed int y2, enum anonymous_7 *back)
{
  signed int i;
  signed int j;
  signed int k;
  signed int sx1;
  signed int sx2;
  signed int sy1;
  signed int sy2;
  signed int maxx;
  signed int maxy;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(!(win_quiet == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(win == cur_window))
      tmp_if_expr_1 = win != panel[(signed long int)0] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  signed int tmp_post_7;
  signed int tmp_post_11;
  signed int tmp_post_13;
  signed int tmp_post_15;
  if(!tmp_if_expr_2)
  {
    x1 = x1 + win->x;
    x2 = x2 + win->x;
    y1 = y1 + win->y;
    y2 = y2 + win->y;
    maxx = (win->x + win->width) - 1;
    maxy = (win->y + win->height) - 1;
    if(x1 >= win->x)
      tmp_if_expr_3 = x1 + 1;

    else
      tmp_if_expr_3 = win->x;
    sx1 = tmp_if_expr_3;
    if(y1 >= win->y)
      tmp_if_expr_4 = y1 + 1;

    else
      tmp_if_expr_4 = win->y;
    sy1 = tmp_if_expr_4;
    sx2 = x2 <= maxx ? x2 - 1 : maxx;
    sy2 = y2 <= maxy ? y2 - 1 : maxy;
    if(maxy >= y2)
    {
      if(x1 >= win->x)
      {
        if(!(back == ((enum anonymous_7 *)NULL)))
          win_set_background(back[(signed long int)(((((x2 - x1) + x2) - x1) + y2) - y1)]);

        signed int return_value_wmove_5;
        return_value_wmove_5=wmove(stdscr, y2, x1);
        if(return_value_wmove_5 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)109]);
      }

      if(maxx >= x2)
      {
        if(!(back == ((enum anonymous_7 *)NULL)))
          win_set_background(back[(signed long int)(((x2 - x1) + y2) - y1)]);

        signed int return_value_wmove_6;
        return_value_wmove_6=wmove(stdscr, y2, x2);
        if(return_value_wmove_6 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)106]);
      }

      j = ((((x2 - x1) + x2) - sx1) + y2) - y1;
      i = sx1;
      for( ; sx2 >= i; i = i + 1)
      {
        if(!(back == ((enum anonymous_7 *)NULL)))
        {
          tmp_post_7 = j;
          j = j - 1;
          win_set_background(back[(signed long int)tmp_post_7]);
        }

        signed int return_value_wmove_8;
        return_value_wmove_8=wmove(stdscr, y2, i);
        if(return_value_wmove_8 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)113]);
      }
    }

    if(y1 >= win->y)
    {
      if(x1 >= win->x)
      {
        if(!(back == ((enum anonymous_7 *)NULL)))
          win_set_background(back[(signed long int)0]);

        signed int return_value_wmove_9;
        return_value_wmove_9=wmove(stdscr, y1, x1);
        if(return_value_wmove_9 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)108]);
      }

      if(maxx >= x2)
      {
        if(!(back == ((enum anonymous_7 *)NULL)))
          win_set_background(back[(signed long int)(x2 - x1)]);

        signed int return_value_wmove_10;
        return_value_wmove_10=wmove(stdscr, y1, x2);
        if(return_value_wmove_10 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)107]);
      }

      j = sx1 - x1;
      i = sx1;
      for( ; sx2 >= i; i = i + 1)
      {
        if(!(back == ((enum anonymous_7 *)NULL)))
        {
          tmp_post_11 = j;
          j = j + 1;
          win_set_background(back[(signed long int)tmp_post_11]);
        }

        signed int return_value_wmove_12;
        return_value_wmove_12=wmove(stdscr, y1, i);
        if(return_value_wmove_12 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)113]);
      }
    }

    j = ((x2 - x1) + sy1) - y1;
    k = ((((((x2 - x1) + x2) - x1) + y2) - y1) + y2) - sy1;
    i = sy1;
    for( ; sy2 >= i; i = i + 1)
    {
      if(x1 >= win->x)
      {
        if(!(back == ((enum anonymous_7 *)NULL)))
        {
          tmp_post_13 = k;
          k = k - 1;
          win_set_background(back[(signed long int)tmp_post_13]);
        }

        signed int return_value_wmove_14;
        return_value_wmove_14=wmove(stdscr, i, x1);
        if(return_value_wmove_14 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
      }

      if(maxx >= x2)
      {
        if(!(back == ((enum anonymous_7 *)NULL)))
        {
          tmp_post_15 = j;
          j = j + 1;
          win_set_background(back[(signed long int)tmp_post_15]);
        }

      }

      signed int return_value_wmove_16;
      return_value_wmove_16=wmove(stdscr, i, x2);
      if(return_value_wmove_16 == -1)
        -1;

      else
        waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
    }
  }

}

// win_box_win
// file ../../src/mwindow.c line 390
void win_box_win(signed int x1, signed int y1, signed int x2, signed int y2, const char *title)
{
  signed int i;
  signed int sx1;
  signed int sx2;
  signed int sy1;
  signed int sy2;
  signed int return_value_wmove_1;
  signed int return_value_wmove_2;
  signed int return_value_wmove_3;
  signed int return_value_wmove_4;
  signed int return_value_wmove_5;
  _Bool tmp_if_expr_6;
  signed int return_value_wmove_8;
  const char *tmp_post_7;
  signed int return_value_wmove_9;
  signed int return_value_wmove_10;
  signed int return_value_wmove_11;
  if(win_quiet == 0)
  {
    sx1 = x1 >= 0 ? x1 + 1 : 0;
    sx2 = x2 < winx ? x2 - 1 : winx - 1;
    sy1 = y1 >= root_y1 ? y1 + 1 : root_y1;
    sy2 = y2 < winy - root_y2 ? y2 - 1 : winy - root_y2;
    if(!(y2 >= winy + -root_y2))
    {
      if(x1 >= 0)
      {
        return_value_wmove_1=wmove(stdscr, y2, x1);
        if(return_value_wmove_1 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)109]);
      }

      if(!(x2 >= winx))
      {
        return_value_wmove_2=wmove(stdscr, y2, x2);
        if(return_value_wmove_2 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)106]);
      }

      i = sx1;
      for( ; sx2 >= i; i = i + 1)
      {
        return_value_wmove_3=wmove(stdscr, y2, i);
        if(return_value_wmove_3 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)113]);
      }
    }

    if(y1 >= root_y1)
    {
      if(x1 >= 0)
      {
        return_value_wmove_4=wmove(stdscr, y1, x1);
        if(return_value_wmove_4 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)108]);
      }

      if(!(x2 >= winx))
      {
        return_value_wmove_5=wmove(stdscr, y1, x2);
        if(return_value_wmove_5 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)107]);
      }

      i = sx1;
      if(!(title == ((const char *)NULL)))
        do
        {
          if(sx2 >= i)
            tmp_if_expr_6 = *title != 0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_6 = (_Bool)0;
          if(!tmp_if_expr_6)
            break;

          return_value_wmove_8=wmove(stdscr, y1, i);
          if(return_value_wmove_8 == -1)
            -1;

          else
          {
            tmp_post_7 = title;
            title = title + 1l;
            waddch(stdscr, (const unsigned long int)*tmp_post_7);
          }
          i = i + 1;
        }
        while((_Bool)1);

      for( ; sx2 >= i; i = i + 1)
      {
        return_value_wmove_9=wmove(stdscr, y1, i);
        if(return_value_wmove_9 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)113]);
      }
    }

    i = sy1;
    for( ; sy2 >= i; i = i + 1)
    {
      if(x1 >= 0)
      {
        return_value_wmove_10=wmove(stdscr, i, x1);
        if(return_value_wmove_10 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
      }

      if(!(x2 >= winx))
      {
        return_value_wmove_11=wmove(stdscr, i, x2);
        if(return_value_wmove_11 == -1)
          -1;

        else
          waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
      }

    }
  }

}

// win_change_panel
// file ../../src/mwindow.h line 158
void win_change_panel(signed int new_panel)
{
  if(new_panel == cur_panel)
    new_panel = old_panel;

  old_panel = cur_panel;
  _Bool tmp_if_expr_1;
  if(!(new_panel == cur_panel))
  {
    cur_panel = new_panel;
    cur_window = panel[(signed long int)cur_panel];
    do
    {
      if(!(cur_window == ((struct MWINDOW *)NULL)))
        tmp_if_expr_1 = cur_window->next != ((struct MWINDOW *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      cur_window = cur_window->next;
    }
    while((_Bool)1);
    win_panel_repaint();
  }

}

// win_check_resize
// file ../../src/mwindow.c line 292
signed int win_check_resize(void)
{
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_2;
  static signed int in_check_resize = 0;
  if(!(in_check_resize == 0) || !(win_quiet == 0))
    return 0;

  else
  {
    in_check_resize = 1;
    if(!(resize == 0))
    {
      signed int oldx;
      signed int oldy;
      struct winsize ws;
      ws.ws_row = (unsigned short int)0;
      ws.ws_col = ws.ws_row;
      ioctl(0, (unsigned long int)0x5413, &ws);
      if(!(ws.ws_col == 0) && !(ws.ws_row == 0))
        resizeterm((signed int)ws.ws_row, (signed int)ws.ws_col);

      resize = 0;
      oldx = winx;
      oldy = winy;
      if(!(stdscr == ((struct _win_st *)NULL)))
        tmp_if_expr_1 = (signed int)stdscr->_maxy + 1;

      else
        tmp_if_expr_1 = -1;
      winy = tmp_if_expr_1;
      if(!(stdscr == ((struct _win_st *)NULL)))
        tmp_if_expr_2 = (signed int)stdscr->_maxx + 1;

      else
        tmp_if_expr_2 = -1;
      winx = tmp_if_expr_2;
      win_do_resize(winx - oldx, winy - oldy, 1);
      in_check_resize = 0;
      return 1;
    }

    in_check_resize = 0;
    return 0;
  }
}

// win_clear
// file ../../src/mwindow.h line 121
signed int win_clear(struct MWINDOW *win)
{
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(!(win_quiet == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(win == cur_window))
      tmp_if_expr_1 = win != panel[(signed long int)0] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_wmove_3;
  signed int return_value_wmove_4;
  signed int return_value_wmove_5;
  if(tmp_if_expr_2)
    return 1;

  else
  {
    if(win->width >= 1)
    {
      if(win->height >= 1)
      {
        signed int i;
        win_attrset(win->attrs);
        memset((void *)storage, 32, (unsigned long int)win->width);
        storage[(signed long int)win->width] = (char)0;
        if(win == panel[0l])
        {
          i = 0;
          for( ; !(i >= win->height) && !(i >= root_y1); i = i + 1)
          {
            return_value_wmove_3=wmove(stdscr, win->y + i, win->x);
            if(return_value_wmove_3 == -1)
              -1;

            else
              waddnstr(stdscr, storage, win->width);
          }
          i = win->height - root_y2;
          if(!(i >= 0))
            i = 0;

          for( ; !(i >= win->height); i = i + 1)
          {
            return_value_wmove_4=wmove(stdscr, win->y + i, win->x);
            if(return_value_wmove_4 == -1)
              -1;

            else
              waddnstr(stdscr, storage, win->width);
          }
        }

        else
        {
          i = 0;
          for( ; !(i >= win->height); i = i + 1)
          {
            return_value_wmove_5=wmove(stdscr, win->y + i, win->x);
            if(return_value_wmove_5 == -1)
              -1;

            else
              waddnstr(stdscr, storage, win->width);
          }
        }
      }

    }

    return 1;
  }
}

// win_close
// file ../../src/mwindow.c line 667
void win_close(struct MWINDOW *win)
{
  signed int i;
  struct MWINDOW *pos;
  i = 0;
  for( ; !(i >= 8); i = i + 1)
  {
    pos = panel[(signed long int)i];
    for( ; !(pos == ((struct MWINDOW *)NULL)); pos = pos->next)
      if(pos == win)
      {
        if(win == cur_window)
        {
          cur_window = panel[(signed long int)i];
          for( ; !(cur_window->next == win); cur_window = cur_window->next)
            ;
        }

        pos = panel[(signed long int)i];
        for( ; !(pos->next == win); pos = pos->next)
          ;
        pos->next = win->next;
        if(!(win->title == ((char *)NULL)))
          free((void *)win->title);

        free((void *)win);
        if(i == cur_panel)
          win_panel_repaint();

        goto __CPROVER_DUMP_L12;
      }

  }

__CPROVER_DUMP_L12:
  ;
}

// win_clrtoeol
// file ../../src/mwindow.h line 119
void win_clrtoeol(struct MWINDOW *win, signed int x, signed int y)
{
  signed int len = win->width - x;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(!(win_quiet == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(win == cur_window))
      tmp_if_expr_1 = win != panel[(signed long int)0] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr_2)
  {
    if(len >= 1)
    {
      memset((void *)storage, 32, (unsigned long int)len);
      storage[(signed long int)len] = (char)0;
      signed int return_value_wmove_3;
      return_value_wmove_3=wmove(stdscr, win->y + y, win->x + x);
      if(return_value_wmove_3 == -1)
        -1;

      else
        waddnstr(stdscr, storage, len);
    }

  }

}

// win_cursor_set
// file ../../src/mwindow.c line 197
void win_cursor_set(signed int visible)
{
  if(!(cursor_old == -1))
  {
    if(!(visible == 0))
      curs_set(cursor_old);

    else
      curs_set(0);
  }

}

// win_do_resize
// file ../../src/mwindow.c line 549
void win_do_resize(signed int dx, signed int dy, signed int root)
{
  struct MWINDOW *win;
  signed int i = root != 0 ? 0 : 1;
  if(win_quiet == 0)
  {
    for( ; !(i >= 8); i = i + 1)
    {
      win = panel[(signed long int)i];
      for( ; !(win == ((struct MWINDOW *)NULL)); win = win->next)
      {
        if(!(win->resize == 0))
        {
          win->width = win->width + dx;
          win->height = win->height + dy;
        }

        if(!(win->handle_resize == ((void (*)(struct MWINDOW *, signed int, signed int))NULL)))
          win->handle_resize(win, dx, dy);

      }
    }
    win_panel_repaint_force();
  }

}

// win_exit
// file ../../src/mwindow.h line 77
void win_exit(void)
{
  if(!(curses_on == 0) && win_quiet == 0)
  {
    signal(28, (void (*)(signed int))0);
    wclear(stdscr);
    signed int return_value_wmove_1;
    return_value_wmove_1=wmove(stdscr, winy - 2, 0);
    if(return_value_wmove_1 == -1)
      -1;

    else
      waddnstr(stdscr, "-= MikMod 3.2.7 =-", winx);
    win_refresh();
    win_cursor_set(1);
    endwin();
    curses_on = 0;
  }

}

// win_get_first
// file ../../src/mwindow.c line 497
struct MWINDOW * win_get_first(signed int dst_panel)
{
  struct MWINDOW *win = panel[(signed long int)dst_panel];
  _Bool tmp_if_expr_1;
  do
  {
    if(!(win == ((struct MWINDOW *)NULL)))
      tmp_if_expr_1 = win->next != ((struct MWINDOW *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    win = win->next;
  }
  while((_Bool)1);
  return win;
}

// win_get_panel
// file ../../src/mwindow.h line 160
signed int win_get_panel(void)
{
  return cur_panel;
}

// win_get_size
// file ../../src/mwindow.h line 124
void win_get_size(struct MWINDOW *win, signed int *x, signed int *y)
{
  *x = win->width;
  *y = win->height;
}

// win_get_size_max
// file ../../src/mwindow.c line 698
void win_get_size_max(signed int *y, signed int *width, signed int *height)
{
  *y = root_y1;
  *width = panel[(signed long int)0]->width;
  *height = (panel[(signed long int)0]->height - root_y1) - root_y2;
  if(!(*height >= 0))
    *height = 0;

}

// win_get_theme_color
// file ../../src/mwindow.c line 867
enum anonymous_7 win_get_theme_color(enum anonymous_7 attrs)
{
  if(!(theme == ((struct anonymous_1 *)NULL)))
  {
    signed int theme_attr = theme->attrs[(signed long int)attrs];
    if(!(theme->color == 0))
    {
      if(theme_attr == 8)
        theme_attr = (8 - 1 << 4) + (8 - 2 << 0);

    }

    return (enum anonymous_7)theme_attr;
  }

  else
    return (enum anonymous_7)0;
}

// win_get_window
// file ../../src/mwindow.c line 708
struct MWINDOW * win_get_window(void)
{
  return cur_window;
}

// win_get_window_root
// file ../../src/mwindow.h line 131
struct MWINDOW * win_get_window_root(void)
{
  return panel[(signed long int)0];
}

// win_getch
// file ../../src/mwindow.c line 327
static signed int win_getch(void)
{
  signed int c;
  c=wgetch(stdscr);
  win_check_resize();
  return c == -1 ? 0 : c;
}

// win_handle_key
// file ../../src/mwindow.c line 936
signed int win_handle_key(signed int ch)
{
  signed int ret;
  if(!(ch == 1))
  {
    if(ch == 2)
      goto __CPROVER_DUMP_L2;

    if(ch == 3)
      goto __CPROVER_DUMP_L3;

    if(ch == 4 || ch == 19)
      goto __CPROVER_DUMP_L4;

    if(ch == 5)
      goto __CPROVER_DUMP_L5;

    if(ch == 6)
      goto __CPROVER_DUMP_L6;

    if(ch == 7)
      goto __CPROVER_DUMP_L7;

  }

  else
  {
    win_change_panel(1);
    goto __CPROVER_DUMP_L11;

  __CPROVER_DUMP_L2:
    ;
    win_change_panel(2);
    goto __CPROVER_DUMP_L11;

  __CPROVER_DUMP_L3:
    ;
    win_change_panel(3);
    goto __CPROVER_DUMP_L11;

  __CPROVER_DUMP_L4:
    ;
    win_change_panel(4);
    goto __CPROVER_DUMP_L11;

  __CPROVER_DUMP_L5:
    ;
    win_change_panel(5);
    goto __CPROVER_DUMP_L11;

  __CPROVER_DUMP_L6:
    ;
    win_change_panel(6);
    goto __CPROVER_DUMP_L11;

  __CPROVER_DUMP_L7:
    ;
    win_change_panel(7);
    goto __CPROVER_DUMP_L11;
  }
  ret = 0;
  if(!(cur_window->handle_key == ((signed int (*)(struct MWINDOW *, signed int))NULL)))
    ret=cur_window->handle_key(cur_window, ch);

  if(ret == 0)
  {
    if(!(panel[0l]->handle_key == ((signed int (*)(struct MWINDOW *, signed int))NULL)))
      ret=panel[(signed long int)0]->handle_key(panel[(signed long int)0], ch);

  }

  return ret;

__CPROVER_DUMP_L11:
  ;
  return 1;
}

// win_has_colors
// file ../../src/mwindow.h line 80
signed int win_has_colors(void)
{
  return use_colors;
}

// win_init
// file ../../src/mwindow.h line 75
void win_init(signed int quiet)
{
  win_quiet = quiet;
  win_init_system();
  win_open(0, 0, winx, winy, 0, (const char *)(void *)0, (enum anonymous_7)ATTR_SONG_STATUS);
  win_set_resize(1, (void (*)(struct MWINDOW *, signed int, signed int))(void *)0);
}

// win_init_status
// file ../../src/mwindow.h line 114
void win_init_status(signed int height)
{
  signed int old_y2 = root_y2;
  if(!(height == root_y2))
  {
    root_y2 = height < 0 ? 0 : (height > 2 ? 2 : height);
    status_message[(signed long int)0] = (char)10;
    status_message[(signed long int)1] = (char)0;
    win_do_resize(0, old_y2 - root_y2, 0);
  }

}

// win_init_system
// file ../../src/mwindow.c line 253
void win_init_system(void)
{
  signed int tmp_if_expr_1;
  signed int tmp_if_expr_2;
  if(win_quiet == 0)
  {
    init_curses();
    if(!(stdscr == ((struct _win_st *)NULL)))
      tmp_if_expr_1 = (signed int)stdscr->_maxy + 1;

    else
      tmp_if_expr_1 = -1;
    winy = tmp_if_expr_1;
    if(!(stdscr == ((struct _win_st *)NULL)))
      tmp_if_expr_2 = (signed int)stdscr->_maxx + 1;

    else
      tmp_if_expr_2 = -1;
    winx = tmp_if_expr_2;
    signal(28, sigwinch_handler);
  }

}

// win_line
// file ../../src/mwindow.c line 749
void win_line(struct MWINDOW *win, signed int x1, signed int y1, signed int x2, signed int y2)
{
  signed int i;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(!(win_quiet == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(win == cur_window))
      tmp_if_expr_1 = win != panel[(signed long int)0] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_3;
  signed int return_value_wmove_4;
  _Bool tmp_if_expr_5;
  signed int return_value_wmove_6;
  if(!tmp_if_expr_2)
  {
    if(y1 == y2)
    {
      if(!(y1 >= cur_window->height))
      {
        i = x1;
        do
        {
          if(x2 >= i)
            tmp_if_expr_3 = i < cur_window->width ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_3 = (_Bool)0;
          if(!tmp_if_expr_3)
            break;

          return_value_wmove_4=wmove(stdscr, y1 + cur_window->y, i + cur_window->x);
          if(return_value_wmove_4 == -1)
            -1;

          else
            waddch(stdscr, acs_map[(signed long int)(unsigned char)113]);
          i = i + 1;
        }
        while((_Bool)1);
      }

    }

    else
      if(!(x1 >= cur_window->width))
      {
        i = y1;
        do
        {
          if(y2 >= i)
            tmp_if_expr_5 = i < cur_window->height ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_5 = (_Bool)0;
          if(!tmp_if_expr_5)
            break;

          return_value_wmove_6=wmove(stdscr, i + cur_window->y, x1 + cur_window->x);
          if(return_value_wmove_6 == -1)
            -1;

          else
            waddch(stdscr, acs_map[(signed long int)(unsigned char)120]);
          i = i + 1;
        }
        while((_Bool)1);
      }

  }

}

// win_main_iteration
// file ../../src/mwindow.c line 1043
signed int win_main_iteration(void)
{
  signed int ch;
  static unsigned long int win_main_iteration__1__time;
  win_main_iteration__1__time=Time1000();
  static unsigned long int last_time = (unsigned long int)0;
  if(!(timeouts == ((struct TIMEOUT *)NULL)) && !(last_time == 0ul))
    (timeouts + (signed long int)0)->remaining = (timeouts + (signed long int)0)->remaining - (signed int)(win_main_iteration__1__time - last_time);

  last_time = win_main_iteration__1__time;
  _Bool tmp_if_expr_1;
  signed int return_value;
  while(!(timeouts == ((struct TIMEOUT *)NULL)))
  {
    if(timeouts->remaining >= 1)
      break;

    if(!(timeouts->func == ((signed int (*)(struct MWINDOW *, void *))NULL)))
    {
      return_value=(timeouts + (signed long int)0)->func(cur_window, (timeouts + (signed long int)0)->data);
      tmp_if_expr_1 = !(return_value != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      win_timeout_remove(0);

    else
      win_timeout_insert((struct TIMEOUT *)(void *)0);
  }
  if(!(win_quiet == 0))
    return 0;

  else
  {
    static signed int last_ch = 0;
    if(!(last_ch == 0))
      ch = last_ch;

    else
      ch=win_getch();
    if(!(ch == 0))
    {
      win_handle_key(ch);
      last_ch=win_getch();
    }

    return (signed int)(last_ch != 0);
  }
}

// win_open
// file ../../src/mwindow.c line 491
struct MWINDOW * win_open(signed int x, signed int y, signed int width, signed int height, signed int border, const char *title, enum anonymous_7 attrs)
{
  struct MWINDOW *return_value_win_panel_open_1;
  return_value_win_panel_open_1=win_panel_open(cur_panel, x, y, width, height, border, title, attrs);
  return return_value_win_panel_open_1;
}

// win_panel_open
// file ../../src/mwindow.h line 88
struct MWINDOW * win_panel_open(signed int dst_panel, signed int x, signed int y, signed int width, signed int height, signed int border, const char *title, enum anonymous_7 attrs)
{
  struct MWINDOW *win;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct MWINDOW) /*80ul*/ );
  win = (struct MWINDOW *)return_value_malloc_1;
  struct MWINDOW *win_panel_open__1__help;
  signed int ofs = border != 0 ? 1 : 0;
  if(!(x >= ofs))
    x = ofs;

  if(dst_panel == 0)
  {
    if(!(y >= ofs))
      y = ofs;

    if(!(winy + -ofs >= height + y))
      height = (winy - y) - ofs;

  }

  else
  {
    if(!(y >= root_y1 + ofs))
      y = ofs + root_y1;

    if(!(winy + -ofs + -root_y2 >= height + y))
      height = ((winy - y) - ofs) - root_y2;

  }
  if(!(winx + -ofs >= width + x))
    width = (winx - x) - ofs;

  if(!(width >= 0))
    width = 0;

  if(!(height >= 0))
    height = 0;

  win_attrset(attrs);
  if(dst_panel == cur_panel && !(border == 0))
    win_box_win(x - 1, y - 1, x + width, y + height, title);

  win->x = x;
  win->y = y;
  win->width = width;
  win->height = height;
  win->attrs = attrs;
  win->border = border;
  win->resize = 0;
  if(!(title == ((const char *)NULL)))
    win->title=strdup(title);

  else
    win->title = (char *)(void *)0;
  win->next = (struct MWINDOW *)(void *)0;
  win->repaint = win_clear;
  win->handle_key = (signed int (*)(struct MWINDOW *, signed int))(void *)0;
  win->handle_resize = (void (*)(struct MWINDOW *, signed int, signed int))(void *)0;
  win_panel_open__1__help = panel[(signed long int)dst_panel];
  _Bool tmp_if_expr_2;
  do
  {
    if(!(win_panel_open__1__help == ((struct MWINDOW *)NULL)))
      tmp_if_expr_2 = win_panel_open__1__help->next != ((struct MWINDOW *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(!tmp_if_expr_2)
      break;

    win_panel_open__1__help = win_panel_open__1__help->next;
  }
  while((_Bool)1);
  if(!(win_panel_open__1__help == ((struct MWINDOW *)NULL)))
    win_panel_open__1__help->next = win;

  else
    panel[(signed long int)dst_panel] = win;
  if(dst_panel == cur_panel)
    cur_window = win;

  return win;
}

// win_panel_repaint
// file ../../src/mwindow.h line 108
void win_panel_repaint(void)
{
  signed int return_value;
  signed int return_value_1;
  _Bool tmp_if_expr_1;
  if(win_quiet == 0)
  {
    if(!(panel[(signed long int)cur_panel] == ((struct MWINDOW *)NULL)))
      win_clear(panel[(signed long int)cur_panel]);

    if(!(panel[0l]->repaint == ((signed int (*)(struct MWINDOW *))NULL)))
      return_value=panel[(signed long int)0]->repaint(panel[(signed long int)0]);

    cur_window = panel[(signed long int)cur_panel];
    for( ; !(cur_window == ((struct MWINDOW *)NULL)); cur_window = cur_window->next)
    {
      win_attrset(cur_window->attrs);
      if(!(cur_window->border == 0))
      {
        if(cur_window->width >= 0)
        {
          if(cur_window->height >= 0)
            win_box_win(cur_window->x - 1, cur_window->y - 1, cur_window->x + cur_window->width, cur_window->y + cur_window->height, cur_window->title);

        }

      }

      if(!(cur_window->repaint == ((signed int (*)(struct MWINDOW *))NULL)))
      {
        if(cur_window->width >= 1)
        {
          if(cur_window->height >= 1)
            return_value_1=cur_window->repaint(cur_window);

        }

      }

    }
    win_status_repaint();
    win_status((const char *)(void *)0);
    cur_window = panel[(signed long int)cur_panel];
    do
    {
      if(!(cur_window == ((struct MWINDOW *)NULL)))
        tmp_if_expr_1 = cur_window->next != ((struct MWINDOW *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
        break;

      cur_window = cur_window->next;
    }
    while((_Bool)1);
  }

}

// win_panel_repaint_force
// file ../../src/mwindow.h line 111
void win_panel_repaint_force(void)
{
  if(win_quiet == 0)
  {
    wclear(stdscr);
    win_panel_repaint();
  }

}

// win_panel_set_data
// file ../../src/mwindow.c line 544
void win_panel_set_data(signed int _panel, void *data)
{
  struct MWINDOW *return_value_win_get_first_1;
  return_value_win_get_first_1=win_get_first(_panel);
  return_value_win_get_first_1->data = data;
}

// win_panel_set_handle_key
// file ../../src/mwindow.h line 95
void win_panel_set_handle_key(signed int _panel, signed int (*func)(struct MWINDOW *, signed int))
{
  struct MWINDOW *return_value_win_get_first_1;
  return_value_win_get_first_1=win_get_first(_panel);
  return_value_win_get_first_1->handle_key = func;
}

// win_panel_set_repaint
// file ../../src/mwindow.h line 92
void win_panel_set_repaint(signed int _panel, signed int (*func)(struct MWINDOW *))
{
  struct MWINDOW *return_value_win_get_first_1;
  return_value_win_get_first_1=win_get_first(_panel);
  return_value_win_get_first_1->repaint = func;
}

// win_panel_set_resize
// file ../../src/mwindow.h line 99
void win_panel_set_resize(signed int _panel, signed int auto_resize, void (*func)(struct MWINDOW *, signed int, signed int))
{
  struct MWINDOW *win;
  win=win_get_first(_panel);
  win->resize = auto_resize;
  win->handle_resize = func;
}

// win_print
// file ../../src/mwindow.h line 134
void win_print(struct MWINDOW *win, signed int x, signed int y, const char *str)
{
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(str);
  len = (signed int)return_value_strlen_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  if(!(win_quiet == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    if(!(win == cur_window))
      tmp_if_expr_2 = win != panel[(signed long int)0] ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_7;
  if(!tmp_if_expr_3)
  {
    if(x >= win->width)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = y >= win->height ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      if(!(win == panel[0l]))
        tmp_if_expr_5 = y + win->y >= winy - root_y2 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
    }
    if(!(len == 0) && !tmp_if_expr_6)
    {
      if(!(win->width >= len + x))
        len = win->width - x;

      if(len >= 1)
      {
        if((signed int)str[(signed long int)(len + -1)] == 10)
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = (signed int)str[(signed long int)(len - 1)] == 13 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_7)
        {
          if(!(win->width + win->x >= winx))
          {
            len = len - 1;
            win_clrtoeol(win, x + len, y);
          }

        }

      }

      signed int return_value_wmove_8;
      return_value_wmove_8=wmove(stdscr, y + win->y, x + win->x);
      if(return_value_wmove_8 == -1)
        -1;

      else
        waddnstr(stdscr, str, len);
    }

  }

}

// win_refresh
// file ../../src/mwindow.h line 156
void win_refresh(void)
{
  if(win_quiet == 0)
    wrefresh(stdscr);

}

// win_run
// file ../../src/mwindow.h line 171
void win_run(void)
{
  do
  {

  __CPROVER_DUMP_L1:
    ;
    signed int return_value_win_main_iteration_1;
    return_value_win_main_iteration_1=win_main_iteration();
    if(!(return_value_win_main_iteration_1 == 0))
      goto __CPROVER_DUMP_L1;

    usleep((unsigned int)(1 * 1000));
  }
  while((_Bool)1);
}

// win_set_background
// file ../../src/mwindow.c line 909
void win_set_background(enum anonymous_7 bg)
{
  signed int return_value_win_has_colors_1;
  return_value_win_has_colors_1=win_has_colors();
  if(!(return_value_win_has_colors_1 == 0))
    win_set_color((enum anonymous_7)((act_color & 0x07) + ((signed int)bg << 4)));

}

// win_set_color
// file ../../src/mwindow.c line 882
void win_set_color(enum anonymous_7 attrs)
{
  if(win_quiet == 0)
  {
    act_color = (signed int)attrs;
    signed int return_value_win_has_colors_2;
    return_value_win_has_colors_2=win_has_colors();
    if(!(return_value_win_has_colors_2 == 0))
    {
      signed int pair;
      if((signed int)attrs == 8)
        attrs = (enum anonymous_7)((8 - 1 << 4) + (8 - 2 << 0));

      act_color = (signed int)attrs;
      signed int return_value_color_to_pair_1;
      return_value_color_to_pair_1=color_to_pair((signed int)attrs);
      pair = (signed int)((unsigned long int)return_value_color_to_pair_1 << 0 + 8);
      if(!((0x08 & (signed int)attrs) == 0))
      {
        if(!(stdscr == ((struct _win_st *)NULL)))
        {
          stdscr->_attrs = (unsigned long int)((unsigned long int)pair | (unsigned long int)1UL << 13 + 8);
          0;
        }

        else
          -1;
      }

      else
        if(!(stdscr == ((struct _win_st *)NULL)))
        {
          stdscr->_attrs = (unsigned long int)pair;
          0;
        }

        else
          -1;
    }

    else
      if(!(stdscr == ((struct _win_st *)NULL)))
      {
        stdscr->_attrs = (unsigned long int)attrs;
        0;
      }

      else
        -1;
  }

}

// win_set_data
// file ../../src/mwindow.c line 539
void win_set_data(void *data)
{
  cur_window->data = data;
}

// win_set_forground
// file ../../src/mwindow.c line 903
void win_set_forground(enum anonymous_7 fg)
{
  signed int return_value_win_has_colors_1;
  return_value_win_has_colors_1=win_has_colors();
  if(!(return_value_win_has_colors_1 == 0))
    win_set_color((enum anonymous_7)((act_color & 0x70) + ((signed int)fg << 0)));

}

// win_set_handle_key
// file ../../src/mwindow.c line 515
void win_set_handle_key(signed int (*func)(struct MWINDOW *, signed int))
{
  cur_window->handle_key = func;
}

// win_set_repaint
// file ../../src/mwindow.c line 505
void win_set_repaint(signed int (*func)(struct MWINDOW *))
{
  cur_window->repaint = func;
}

// win_set_resize
// file ../../src/mwindow.c line 526
void win_set_resize(signed int auto_resize, void (*func)(struct MWINDOW *, signed int, signed int))
{
  cur_window->resize = auto_resize;
  cur_window->handle_resize = func;
}

// win_set_theme
// file ../../src/mwindow.h line 82
void win_set_theme(struct anonymous_1 *new_theme)
{
  theme = new_theme;
}

// win_status
// file ../../src/mwindow.h line 116
void win_status(const char *msg)
{
  struct MWINDOW *win = panel[(signed long int)0];
  signed int len;
  unsigned long int return_value_strlen_2;
  if(!(msg == ((const char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(msg);
    len = (signed int)return_value_strlen_1;
    if(len >= 201)
      len = 200;

    strncpy(status_message, msg, (unsigned long int)len);
  }

  else
  {
    return_value_strlen_2=strlen(status_message);
    len = (signed int)return_value_strlen_2;
  }
  status_message[(signed long int)len] = (char)0;
  if(win_quiet == 0)
  {
    if(root_y2 >= 1)
    {
      if(!(root_y1 >= win->height))
      {
        if(win->width >= 1)
        {
          win_attrset((enum anonymous_7)ATTR_STATUS_TEXT);
          signed int return_value_wmove_3;
          return_value_wmove_3=wmove(stdscr, (win->y + win->height) - 1, win->x);
          if(return_value_wmove_3 == -1)
            -1;

          else
            waddnstr(stdscr, status_message, win->width);
          win_clrtoeol(win, win->x + len, (win->y + win->height) - 1);
        }

      }

    }

  }

}

// win_status_repaint
// file ../../src/mwindow.c line 571
static void win_status_repaint(void)
{
  struct MWINDOW *win = panel[(signed long int)0];
  signed int i;
  signed int return_value_wmove_1;
  if(win_quiet == 0)
  {
    if(root_y2 >= 2)
    {
      if(!(1 + root_y1 >= win->height))
      {
        win_attrset((enum anonymous_7)ATTR_STATUS_LINE);
        i = 0;
        for( ; !(i >= win->width); i = i + 1)
        {
          return_value_wmove_1=wmove(stdscr, win->height - 2, i);
          if(return_value_wmove_1 == -1)
            -1;

          else
            waddch(stdscr, acs_map[(signed long int)(unsigned char)113]);
        }
      }

    }

  }

}

// win_timeout_add
// file ../../src/mwindow.h line 166
void win_timeout_add(signed int interval, signed int (*func)(struct MWINDOW *, void *), void *data)
{
  struct TIMEOUT new_timeout;
  new_timeout.func = func;
  new_timeout.data = data;
  new_timeout.interval = interval;
  win_timeout_insert(&new_timeout);
}

// win_timeout_insert
// file ../../src/mwindow.c line 982
static void win_timeout_insert(struct TIMEOUT *src)
{
  signed int win_timeout_insert__1__time;
  signed int sum = 0;
  signed int oldsum = 0;
  signed int pos = 0;
  signed int i;
  if(src == ((struct TIMEOUT *)NULL))
  {
    win_timeout_insert__1__time = (timeouts + (signed long int)0)->interval;
    pos = pos + 1;
  }

  else
    win_timeout_insert__1__time = src->interval;
  for( ; cnt_timeouts >= pos; pos = pos + 1)
  {
    oldsum = sum;
    if(!(pos >= cnt_timeouts))
      sum = sum + (timeouts + (signed long int)pos)->remaining;

    if(pos == cnt_timeouts || !(win_timeout_insert__1__time >= sum))
    {
      if(!(src == ((struct TIMEOUT *)NULL)))
      {
        cnt_timeouts = cnt_timeouts + 1;
        void *return_value_realloc_1;
        return_value_realloc_1=realloc((void *)timeouts, sizeof(struct TIMEOUT) /*24ul*/  * (unsigned long int)cnt_timeouts);
        timeouts = (struct TIMEOUT *)return_value_realloc_1;
        i = cnt_timeouts - 1;
        for( ; !(pos >= i); i = i - 1)
          timeouts[(signed long int)i] = timeouts[(signed long int)(i - 1)];
        timeouts[(signed long int)pos] = *src;
      }

      else
      {
        struct TIMEOUT win_timeout_insert__1__2__1__1__2__help = timeouts[(signed long int)0];
        pos = pos - 1;
        i = 0;
        for( ; !(i >= pos); i = i + 1)
          timeouts[(signed long int)i] = timeouts[(signed long int)(i + 1)];
        timeouts[(signed long int)pos] = win_timeout_insert__1__2__1__1__2__help;
      }
      (timeouts + (signed long int)pos)->remaining = win_timeout_insert__1__time - oldsum;
      goto __CPROVER_DUMP_L12;
    }

  }

__CPROVER_DUMP_L12:
  ;
}

// win_timeout_remove
// file ../../src/mwindow.c line 1027
static void win_timeout_remove(signed int number)
{
  signed int i = number + 1;
  for( ; !(i >= cnt_timeouts); i = i + 1)
    timeouts[(signed long int)(i - 1)] = timeouts[(signed long int)i];
  cnt_timeouts = cnt_timeouts - 1;
  if(!(cnt_timeouts == 0))
  {
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)timeouts, sizeof(struct TIMEOUT) /*24ul*/  * (unsigned long int)cnt_timeouts);
    timeouts = (struct TIMEOUT *)return_value_realloc_1;
  }

  else
  {
    free((void *)timeouts);
    timeouts = (struct TIMEOUT *)(void *)0;
  }
}

// write_archiver
// file ../../src/mconfig.c line 543
static void write_archiver(struct anonymous_2 *archiver)
{
  rc_write_int("LOCATION", archiver->location, (const char *)(void *)0);
  rc_write_string("MARKER", archiver->marker, (const char *)(void *)0);
  rc_write_string("LIST", archiver->list, (const char *)(void *)0);
  rc_write_int("NAMEOFFSET", archiver->nameoffset, (const char *)(void *)0);
  rc_write_string("EXTRACT", archiver->extract, (const char *)(void *)0);
  rc_write_string("SKIPPAT", archiver->skippat, (const char *)(void *)0);
  rc_write_int("SKIPSTART", archiver->skipstart, (const char *)(void *)0);
  rc_write_int("SKIPEND", archiver->skipend, (const char *)(void *)0);
}

// write_description
// file ../../src/rcfile.c line 105
static void write_description(const char *desc)
{
  const char *start;
  if(!(desc == ((const char *)NULL)) && !(fp == ((struct _IO_FILE *)NULL)))
  {
    fputs("\n", fp);
    while(!(*desc == 0))
    {
      start = desc;
      for( ; !(*desc == 0); desc = desc + 1l)
        if((signed int)*desc == 10)
          break;

      fprintf(fp, "%s# ", (const void *)indent);
      fwrite((const void *)start, (unsigned long int)(desc - start), (unsigned long int)1, fp);
      fputs("\n", fp);
      if(!(*desc == 0))
        desc = desc + 1l;

    }
  }

}

// write_theme
// file ../../src/mconfig.c line 383
static void write_theme(struct anonymous_1 *theme)
{
  signed int i;
  rc_write_string("NAME", theme->name, (const char *)(void *)0);
  if(!(theme->color == 0))
  {
    char str[30l];
    i = 0;
    for( ; !(i >= 1); i = i + 1)
    {
      strcpy(str, attrs_colf_label[(signed long int)((theme->attrs[(signed long int)i] & 0x07 + 0x08) >> 0)]);
      strcat(str, ",");
      strcat(str, attrs_colb_label[(signed long int)((theme->attrs[(signed long int)i] & 0x70) >> 4)]);
      rc_write_string(attrs_label[(signed long int)i], str, (const char *)(void *)0);
    }
  }

  else
  {
    i = 0;
    for( ; !(i >= 1); i = i + 1)
      rc_write_label(attrs_label[(signed long int)i], attrs_mono_conv, theme->attrs[(signed long int)i], (const char *)(void *)0);
  }
}

