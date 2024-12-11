// #anon_enum$GDK_FONT_FONT=0$GDK_FONT_FONTSET=1
// file /usr/include/gtk-2.0/gdk/gdkfont.h line 43
enum anonymous$9 { GDK_FONT_FONT=0, GDK_FONT_FONTSET=1 };

// #anon_enum$GDK_LSB_FIRST=0$GDK_MSB_FIRST=1
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 118
enum anonymous$6 { GDK_LSB_FIRST=0, GDK_MSB_FIRST=1 };

// #anon_enum$GDK_SHIFT_MASK=1$GDK_LOCK_MASK=2$GDK_CONTROL_MASK=4$GDK_MOD1_MASK=8$GDK_MOD2_MASK=16$GDK_MOD3_MASK=32$GDK_MOD4_MASK=64$GDK_MOD5_MASK=128$GDK_BUTTON1_MASK=256$GDK_BUTTON2_MASK=512$GDK_BUTTON3_MASK=1024$GDK_BUTTON4_MASK=2048$GDK_BUTTON5_MASK=4096$GDK_SUPER_MASK=67108864$GDK_HYPER_MASK=134217728$GDK_META_MASK=268435456$GDK_RELEASE_MASK=1073741824$GDK_MODIFIER_MASK=1543512063
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 126
enum anonymous$11 { GDK_SHIFT_MASK=1, GDK_LOCK_MASK=2, GDK_CONTROL_MASK=4, GDK_MOD1_MASK=8, GDK_MOD2_MASK=16, GDK_MOD3_MASK=32, GDK_MOD4_MASK=64, GDK_MOD5_MASK=128, GDK_BUTTON1_MASK=256, GDK_BUTTON2_MASK=512, GDK_BUTTON3_MASK=1024, GDK_BUTTON4_MASK=2048, GDK_BUTTON5_MASK=4096, GDK_SUPER_MASK=67108864, GDK_HYPER_MASK=134217728, GDK_META_MASK=268435456, GDK_RELEASE_MASK=1073741824, GDK_MODIFIER_MASK=1543512063 };

// #anon_enum$GDK_VISUAL_STATIC_GRAY=0$GDK_VISUAL_GRAYSCALE=1$GDK_VISUAL_STATIC_COLOR=2$GDK_VISUAL_PSEUDO_COLOR=3$GDK_VISUAL_TRUE_COLOR=4$GDK_VISUAL_DIRECT_COLOR=5
// file /usr/include/gtk-2.0/gdk/gdkvisual.h line 55
enum anonymous$13 { GDK_VISUAL_STATIC_GRAY=0, GDK_VISUAL_GRAYSCALE=1, GDK_VISUAL_STATIC_COLOR=2, GDK_VISUAL_PSEUDO_COLOR=3, GDK_VISUAL_TRUE_COLOR=4, GDK_VISUAL_DIRECT_COLOR=5 };

// #anon_enum$GTK_RC_FG=1$GTK_RC_BG=2$GTK_RC_TEXT=4$GTK_RC_BASE=8
// file /usr/include/gtk-2.0/gtk/gtkrc.h line 52
enum anonymous$10 { GTK_RC_FG=1, GTK_RC_BG=2, GTK_RC_TEXT=4, GTK_RC_BASE=8 };

// #anon_enum$GTK_SORT_ASCENDING=0$GTK_SORT_DESCENDING=1
// file /usr/include/gtk-2.0/gtk/gtkenums.h line 476
enum anonymous$15 { GTK_SORT_ASCENDING=0, GTK_SORT_DESCENDING=1 };

// #anon_enum$GTK_TREE_VIEW_COLUMN_GROW_ONLY=0$GTK_TREE_VIEW_COLUMN_AUTOSIZE=1$GTK_TREE_VIEW_COLUMN_FIXED=2
// file /usr/include/gtk-2.0/gtk/gtktreeviewcolumn.h line 45
enum anonymous$14 { GTK_TREE_VIEW_COLUMN_GROW_ONLY=0, GTK_TREE_VIEW_COLUMN_AUTOSIZE=1, GTK_TREE_VIEW_COLUMN_FIXED=2 };

// #anon_enum$G_CONNECT_AFTER=1$G_CONNECT_SWAPPED=2
// file /usr/include/glib-2.0/gobject/gsignal.h line 155
enum anonymous$3 { G_CONNECT_AFTER=1, G_CONNECT_SWAPPED=2 };

// #anon_enum$G_LOG_FLAG_RECURSION=1$G_LOG_FLAG_FATAL=2$G_LOG_LEVEL_ERROR=4$G_LOG_LEVEL_CRITICAL=8$G_LOG_LEVEL_WARNING=16$G_LOG_LEVEL_MESSAGE=32$G_LOG_LEVEL_INFO=64$G_LOG_LEVEL_DEBUG=128$G_LOG_LEVEL_MASK=-4
// file /usr/include/glib-2.0/glib/gmessages.h line 51
enum anonymous$12 { G_LOG_FLAG_RECURSION=1, G_LOG_FLAG_FATAL=2, G_LOG_LEVEL_ERROR=4, G_LOG_LEVEL_CRITICAL=8, G_LOG_LEVEL_WARNING=16, G_LOG_LEVEL_MESSAGE=32, G_LOG_LEVEL_INFO=64, G_LOG_LEVEL_DEBUG=128, G_LOG_LEVEL_MASK=-4 };

// #anon_enum$JackPositionBBT=16$JackPositionTimecode=32$JackBBTFrameOffset=64$JackAudioVideoRatio=128$JackVideoFrameOffset=256
// file /usr/include/jack/transport.h line 65
enum anonymous$2 { JackPositionBBT=16, JackPositionTimecode=32, JackBBTFrameOffset=64, JackAudioVideoRatio=128, JackVideoFrameOffset=256 };

// #anon_enum$JackTransportStopped=0$JackTransportRolling=1$JackTransportLooping=2$JackTransportStarting=3
// file /usr/include/jack/transport.h line 50
enum anonymous$1 { JackTransportStopped=0, JackTransportRolling=1, JackTransportLooping=2, JackTransportStarting=3 };

// tag-#anon#ST[U64'unique_1'||U64'usecs'||U32'frame_rate'||U32'frame'||EN#anon_enum$JackPositionBBT=16$JackPositionTimecode=32$JackBBTFrameOffset=64$JackAudioVideoRatio=128$JackVideoFrameOffset=256#{U32}$U32$'valid'||S32'bar'||S32'beat'||S32'tick'||F64'bar_start_tick'||F32'beats_per_bar'||F32'beat_type'||F64'ticks_per_beat'||F64'beats_per_minute'||F64'frame_time'||F64'next_time'||U32'bbt_offset'||F32'audio_frames_per_video_frame'||U32'video_offset'||ARR7{S32}$S32$'padding'||U64'unique_2'|]
// file /usr/include/jack/transport.h line 81
struct anonymous$4;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$8;

// tag-#anon#UN[S32'v_int'||U32'v_uint'||S64'v_long'||U64'v_ulong'||S64'v_int64'||U64'v_uint64'||F32'v_float'||F64'v_double'||*{V}$V$'v_pointer'|]
// file /usr/include/glib-2.0/gobject/gvalue.h line 112
union anonymous$5;

// tag-#anon#UN[S32'value'||SYM#tag-snd_seq_timestamp#'time'||U32'position'||SYM#tag-snd_seq_queue_skew#'skew'||ARR2{U32}$U32$'d32'||ARR8{U8}$U8$'d8'|]
// file /usr/include/alsa/seq_event.h line 284
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$7;

// tag-#anon#UN[SYM#tag-snd_seq_ev_note#'note'||SYM#tag-snd_seq_ev_ctrl#'control'||SYM#tag-snd_seq_ev_raw8#'raw8'||SYM#tag-snd_seq_ev_raw32#'raw32'||SYM#tag-snd_seq_ev_ext#'ext'||SYM#tag-snd_seq_ev_queue_control#'queue'||SYM#tag-snd_seq_timestamp#'time'||SYM#tag-snd_seq_addr#'addr'||SYM#tag-snd_seq_connect#'connect'||SYM#tag-snd_seq_result#'result'||U128'$pad'|]
// file /usr/include/alsa/seq_event.h line 307
union anonymous$0;

// tag-JackOptions
// file /usr/include/jack/types.h line 90
enum JackOptions { JackNullOption=0, JackNoStartServer=1, JackUseExactName=2, JackServerName=4, JackLoadName=8, JackLoadInit=16, JackSessionID=32 };

// tag-JackStatus
// file /usr/include/jack/types.h line 149
enum JackStatus { JackFailure=1, JackInvalidOption=2, JackNameNotUnique=4, JackServerStarted=8, JackServerFailed=16, JackServerError=32, JackNoSuchClient=64, JackLoadFailure=128, JackInitFailure=256, JackShmFailure=512, JackVersionError=1024, JackBackendError=2048, JackClientZombie=4096 };

// tag-_GArray
// file /usr/include/glib-2.0/glib/garray.h line 37
struct _GArray;

// tag-_GClosure
// file /usr/include/glib-2.0/gobject/gclosure.h line 74
struct _GClosure;

// tag-_GClosureNotifyData
// file /usr/include/glib-2.0/gobject/gclosure.h line 75
struct _GClosureNotifyData;

// tag-_GData
// file /usr/include/glib-2.0/glib/gdataset.h line 36
struct _GData;

// tag-_GError
// file /usr/include/glib-2.0/glib/gerror.h line 42
struct _GError;

// tag-_GList
// file /usr/include/glib-2.0/glib/glist.h line 37
struct _GList;

// tag-_GObject
// file /usr/include/glib-2.0/gobject/gobject.h line 187
struct _GObject;

// tag-_GSList
// file /usr/include/glib-2.0/glib/gslist.h line 37
struct _GSList;

// tag-_GString
// file /usr/include/glib-2.0/glib/gstring.h line 39
struct _GString;

// tag-_GTypeClass
// file /usr/include/glib-2.0/gobject/gtype.h line 389
struct _GTypeClass;

// tag-_GTypeInstance
// file /usr/include/glib-2.0/gobject/gtype.h line 391
struct _GTypeInstance;

// tag-_GValue
// file /usr/include/glib-2.0/gobject/gtype.h line 386
struct _GValue;

// tag-_GdkColor
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 102
struct _GdkColor;

// tag-_GdkColormap
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 103
struct _GdkColormap;

// tag-_GdkDrawable
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 111
struct _GdkDrawable;

// tag-_GdkFont
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 105
struct _GdkFont;

// tag-_GdkGC
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 106
struct _GdkGC;

// tag-_GdkRectangle
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 69
struct _GdkRectangle;

// tag-_GdkScreen
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 116
struct _GdkScreen;

// tag-_GdkVisual
// file /usr/include/gtk-2.0/gdk/gdktypes.h line 109
struct _GdkVisual;

// tag-_GtkAction
// file /usr/include/gtk-2.0/gtk/gtkaction.h line 49
struct _GtkAction;

// tag-_GtkActionPrivate
// file /usr/include/gtk-2.0/gtk/gtkaction.h line 51
struct _GtkActionPrivate;

// tag-_GtkBin
// file /usr/include/gtk-2.0/gtk/gtkbin.h line 48
struct _GtkBin;

// tag-_GtkBuilder
// file /usr/include/gtk-2.0/gtk/gtkbuilder.h line 42
struct _GtkBuilder;

// tag-_GtkBuilderPrivate
// file /usr/include/gtk-2.0/gtk/gtkbuilder.h line 44
struct _GtkBuilderPrivate;

// tag-_GtkButton
// file /usr/include/gtk-2.0/gtk/gtkbutton.h line 48
struct _GtkButton;

// tag-_GtkCellEditable
// file /usr/include/gtk-2.0/gtk/gtkcelleditable.h line 37
struct _GtkCellEditable;

// tag-_GtkCellRenderer
// file /usr/include/gtk-2.0/gtk/gtkcellrenderer.h line 55
struct _GtkCellRenderer;

// tag-_GtkContainer
// file /usr/include/gtk-2.0/gtk/gtkcontainer.h line 51
struct _GtkContainer;

// tag-_GtkListStore
// file /usr/include/gtk-2.0/gtk/gtkliststore.h line 42
struct _GtkListStore;

// tag-_GtkObject
// file /usr/include/gtk-2.0/gtk/gtktypeutils.h line 49
struct _GtkObject;

// tag-_GtkRcStyle
// file /usr/include/gtk-2.0/gtk/gtkstyle.h line 57
struct _GtkRcStyle;

// tag-_GtkRequisition
// file /usr/include/gtk-2.0/gtk/gtkwidget.h line 478
struct _GtkRequisition;

// tag-_GtkStyle
// file /usr/include/gtk-2.0/gtk/gtkstyle.h line 54
struct _GtkStyle;

// tag-_GtkToggleToolButton
// file /usr/include/gtk-2.0/gtk/gtktoggletoolbutton.h line 41
struct _GtkToggleToolButton;

// tag-_GtkToggleToolButtonPrivate
// file /usr/include/gtk-2.0/gtk/gtktoggletoolbutton.h line 43
struct _GtkToggleToolButtonPrivate;

// tag-_GtkToolButton
// file /usr/include/gtk-2.0/gtk/gtktoolbutton.h line 41
struct _GtkToolButton;

// tag-_GtkToolButtonPrivate
// file /usr/include/gtk-2.0/gtk/gtktoolbutton.h line 43
struct _GtkToolButtonPrivate;

// tag-_GtkToolItem
// file /usr/include/gtk-2.0/gtk/gtktoolitem.h line 44
struct _GtkToolItem;

// tag-_GtkToolItemPrivate
// file /usr/include/gtk-2.0/gtk/gtktoolitem.h line 46
struct _GtkToolItemPrivate;

// tag-_GtkTreeIter
// file /usr/include/gtk-2.0/gtk/gtktreemodel.h line 43
struct _GtkTreeIter;

// tag-_GtkTreeModel
// file /usr/include/gtk-2.0/gtk/gtktreemodel.h line 46
struct _GtkTreeModel;

// tag-_GtkTreePath
// file /usr/include/gtk-2.0/gtk/gtktreemodel.h line 44
struct _GtkTreePath;

// tag-_GtkTreeView
// file /usr/include/gtk-2.0/gtk/gtktreeview.h line 55
struct _GtkTreeView;

// tag-_GtkTreeViewColumn
// file /usr/include/gtk-2.0/gtk/gtktreeviewcolumn.h line 52
struct _GtkTreeViewColumn;

// tag-_GtkTreeViewPrivate
// file /usr/include/gtk-2.0/gtk/gtktreeview.h line 57
struct _GtkTreeViewPrivate;

// tag-_GtkWidget
// file /usr/include/gtk-2.0/gtk/gtkstyle.h line 69
struct _GtkWidget;

// tag-_GtkWindow
// file /usr/include/gtk-2.0/gtk/gtkwidget.h line 485
struct _GtkWindow;

// tag-_GtkWindowGeometryInfo
// file /usr/include/gtk-2.0/gtk/gtkwindow.h line 50
struct _GtkWindowGeometryInfo;

// tag-_GtkWindowGroup
// file /usr/include/gtk-2.0/gtk/gtkwindow.h line 51
struct _GtkWindowGroup;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_PangoFontDescription
// file /usr/include/pango-1.0/pango/pango-font.h line 40
struct _PangoFontDescription;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_cairo_font_options
// file /usr/include/cairo/cairo.h line 1366
struct _cairo_font_options;

// tag-_jack_client
// file /usr/include/jack/types.h line 72
struct _jack_client;

// tag-_jack_midi_event
// file /usr/include/jack/midiport.h line 38
struct _jack_midi_event;

// tag-_jack_port
// file /usr/include/jack/types.h line 66
struct _jack_port;

// tag-_snd_seq
// file /usr/include/alsa/seq.h line 47
struct _snd_seq;

// tag-_snd_seq_port_info
// file /usr/include/alsa/seq.h line 205
struct _snd_seq_port_info;

// tag-jack_midi_event_buffer
// file ../jack.c line 49
struct jack_midi_event_buffer;

// tag-list_head
// file ../list.h line 65
struct list_head;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rtsafe_memory
// file ../memory_atomic.c line 198
struct rtsafe_memory;

// tag-rtsafe_memory_pool
// file ../memory_atomic.c line 33
struct rtsafe_memory_pool;

// tag-rtsafe_memory_pool_generic
// file ../memory_atomic.c line 192
struct rtsafe_memory_pool_generic;

// tag-snd_seq_addr
// file /usr/include/alsa/seq_event.h line 178
struct snd_seq_addr;

// tag-snd_seq_connect
// file /usr/include/alsa/seq_event.h line 184
struct snd_seq_connect;

// tag-snd_seq_ev_ctrl
// file /usr/include/alsa/seq_event.h line 239
struct snd_seq_ev_ctrl;

// tag-snd_seq_ev_ext
// file /usr/include/alsa/seq_event.h line 257
struct snd_seq_ev_ext;

// tag-snd_seq_ev_note
// file /usr/include/alsa/seq_event.h line 230
struct snd_seq_ev_note;

// tag-snd_seq_ev_queue_control
// file /usr/include/alsa/seq_event.h line 281
struct snd_seq_ev_queue_control;

// tag-snd_seq_ev_raw32
// file /usr/include/alsa/seq_event.h line 252
struct snd_seq_ev_raw32;

// tag-snd_seq_ev_raw8
// file /usr/include/alsa/seq_event.h line 247
struct snd_seq_ev_raw8;

// tag-snd_seq_event
// file /usr/include/alsa/seq_event.h line 296
struct snd_seq_event;

// tag-snd_seq_queue_skew
// file /usr/include/alsa/seq_event.h line 275
struct snd_seq_queue_skew;

// tag-snd_seq_real_time
// file /usr/include/alsa/seq_event.h line 191
struct snd_seq_real_time;

// tag-snd_seq_result
// file /usr/include/alsa/seq_event.h line 269
struct snd_seq_result;

// tag-snd_seq_timestamp
// file /usr/include/alsa/seq_event.h line 200
union snd_seq_timestamp;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// INIT_LIST_HEAD
// file ../list.h line 74
static inline void INIT_LIST_HEAD(struct list_head *list);
// INIT_LIST_HEAD$link1
// file ../list.h line 74
static inline void INIT_LIST_HEAD$link1(struct list_head *list$link1);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __list_add
// file ../list.h line 86
static inline void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next);
// __list_add$link1
// file ../list.h line 86
static inline void __list_add$link1(struct list_head *new$link1, struct list_head *prev$link1, struct list_head *next$link1);
// __list_del
// file ../list.h line 188
static inline void __list_del(struct list_head *prev, struct list_head *next);
// __list_del$link1
// file ../list.h line 188
static inline void __list_del$link1(struct list_head *prev$link1, struct list_head *next$link1);
// __list_splice
// file ../list.h line 315
static inline void __list_splice(struct list_head *list, struct list_head *head);
// alsa_init
// file ../alsa.h line 27
signed int alsa_init(const char *name);
// alsa_midi_thread
// file ../alsa.c line 42
void * alsa_midi_thread(void *context_ptr);
// alsa_uninit
// file ../alsa.h line 30
void alsa_uninit();
// create_mainwindow
// file ../main.c line 74
void create_mainwindow();
// decode_sysex
// file ../sysex.c line 30
void decode_sysex(unsigned char *buffer, unsigned long int buffer_size, struct _GString *msg_str_ptr);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// g_error_free
// file /usr/include/glib-2.0/glib/gerror.h line 68
extern void g_error_free(struct _GError *);
// g_free
// file /usr/include/glib-2.0/glib/gmem.h line 71
extern void g_free(void *);
// g_log
// file /usr/include/glib-2.0/glib/gmessages.h line 101
extern void g_log(const char *, enum anonymous$12, const char *, ...);
// g_object_new
// file /usr/include/glib-2.0/gobject/gobject.h line 420
extern void * g_object_new(unsigned long int, const char *, ...);
// g_object_set
// file /usr/include/glib-2.0/gobject/gobject.h line 432
extern void g_object_set(void *, const char *, ...);
// g_path_get_basename
// file /usr/include/glib-2.0/glib/gfileutils.h line 176
extern char * g_path_get_basename(const char *);
// g_path_get_dirname
// file /usr/include/glib-2.0/glib/gfileutils.h line 178
extern char * g_path_get_dirname(const char *);
// g_printf
// file /usr/include/glib-2.0/glib/gprintf.h line 28
extern signed int g_printf(const char *, ...);
// g_signal_connect_data
// file /usr/include/glib-2.0/gobject/gsignal.h line 388
extern unsigned long int g_signal_connect_data(void *, const char *, void (*)(void), void *, void (*)(void *, struct _GClosure *), enum anonymous$3);
// g_strdup_printf
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 218
extern char * g_strdup_printf(const char *, ...);
// g_string_append
// file /usr/include/glib-2.0/glib/gstring.h line 80
extern struct _GString * g_string_append(struct _GString *, const char *);
// g_string_append_printf
// file /usr/include/glib-2.0/glib/gstring.h line 149
extern void g_string_append_printf(struct _GString *, const char *, ...);
// g_string_free
// file /usr/include/glib-2.0/glib/gstring.h line 56
extern char * g_string_free(struct _GString *, signed int);
// g_string_new
// file /usr/include/glib-2.0/glib/gstring.h line 49
extern struct _GString * g_string_new(const char *);
// g_string_printf
// file /usr/include/glib-2.0/glib/gstring.h line 140
extern void g_string_printf(struct _GString *, const char *, ...);
// g_thread_init
// file /usr/include/glib-2.0/glib/deprecated/gthread.h line 265
extern void g_thread_init(void *);
// g_type_check_instance_cast
// file /usr/include/glib-2.0/gobject/gtype.h line 2168
extern struct _GTypeInstance * g_type_check_instance_cast(struct _GTypeInstance *, unsigned long int);
// gdk_threads_enter
// file /usr/include/gtk-2.0/gdk/gdk.h line 195
void gdk_threads_enter(void);
// gdk_threads_init
// file /usr/include/gtk-2.0/gdk/gdk.h line 197
void gdk_threads_init(void);
// gdk_threads_leave
// file /usr/include/gtk-2.0/gdk/gdk.h line 196
void gdk_threads_leave(void);
// gm_get_controller_name
// file ../gm.c line 239
const char * gm_get_controller_name(unsigned int controller);
// gm_get_drum_name
// file ../gm.c line 215
const char * gm_get_drum_name(unsigned char note);
// gm_get_instrument_name
// file ../gm.c line 230
const char * gm_get_instrument_name(unsigned char program);
// gtk_about_dialog_get_type
// file /usr/include/gtk-2.0/gtk/gtkaboutdialog.h line 73
unsigned long int gtk_about_dialog_get_type(void);
// gtk_builder_add_from_file
// file /usr/include/gtk-2.0/gtk/gtkbuilder.h line 97
unsigned int gtk_builder_add_from_file(struct _GtkBuilder *, const char *, struct _GError **);
// gtk_builder_connect_signals
// file /usr/include/gtk-2.0/gtk/gtkbuilder.h line 116
void gtk_builder_connect_signals(struct _GtkBuilder *, void *);
// gtk_builder_get_object
// file /usr/include/gtk-2.0/gtk/gtkbuilder.h line 113
struct _GObject * gtk_builder_get_object(struct _GtkBuilder *, const char *);
// gtk_builder_new
// file /usr/include/gtk-2.0/gtk/gtkbuilder.h line 95
struct _GtkBuilder * gtk_builder_new(void);
// gtk_cell_renderer_text_new
// file /usr/include/gtk-2.0/gtk/gtkcellrenderertext.h line 97
struct _GtkCellRenderer * gtk_cell_renderer_text_new(void);
// gtk_container_check_resize
// file /usr/include/gtk-2.0/gtk/gtkcontainer.h line 120
void gtk_container_check_resize(struct _GtkContainer *);
// gtk_container_get_type
// file /usr/include/gtk-2.0/gtk/gtkcontainer.h line 107
unsigned long int gtk_container_get_type(void);
// gtk_init
// file /usr/include/gtk-2.0/gtk/gtkmain.h line 94
void gtk_init(signed int *, char ***);
// gtk_list_store_append
// file /usr/include/gtk-2.0/gtk/gtkliststore.h line 126
void gtk_list_store_append(struct _GtkListStore *, struct _GtkTreeIter *);
// gtk_list_store_clear
// file /usr/include/gtk-2.0/gtk/gtkliststore.h line 128
void gtk_list_store_clear(struct _GtkListStore *);
// gtk_list_store_get_type
// file /usr/include/gtk-2.0/gtk/gtkliststore.h line 77
unsigned long int gtk_list_store_get_type(void);
// gtk_list_store_new
// file /usr/include/gtk-2.0/gtk/gtkliststore.h line 78
struct _GtkListStore * gtk_list_store_new(signed int, ...);
// gtk_list_store_remove
// file /usr/include/gtk-2.0/gtk/gtkliststore.h line 103
signed int gtk_list_store_remove(struct _GtkListStore *, struct _GtkTreeIter *);
// gtk_list_store_set
// file /usr/include/gtk-2.0/gtk/gtkliststore.h line 92
void gtk_list_store_set(struct _GtkListStore *, struct _GtkTreeIter *, ...);
// gtk_main
// file /usr/include/gtk-2.0/gtk/gtkmain.h line 145
void gtk_main(void);
// gtk_main_quit
// file /usr/include/gtk-2.0/gtk/gtkmain.h line 147
void gtk_main_quit(void);
// gtk_toggle_tool_button_get_active
// file /usr/include/gtk-2.0/gtk/gtktoggletoolbutton.h line 73
signed int gtk_toggle_tool_button_get_active(struct _GtkToggleToolButton *);
// gtk_toggle_tool_button_get_type
// file /usr/include/gtk-2.0/gtk/gtktoggletoolbutton.h line 67
unsigned long int gtk_toggle_tool_button_get_type(void);
// gtk_tree_model_get_iter_first
// file /usr/include/gtk-2.0/gtk/gtktreemodel.h line 206
signed int gtk_tree_model_get_iter_first(struct _GtkTreeModel *, struct _GtkTreeIter *);
// gtk_tree_model_get_path
// file /usr/include/gtk-2.0/gtk/gtktreemodel.h line 208
struct _GtkTreePath * gtk_tree_model_get_path(struct _GtkTreeModel *, struct _GtkTreeIter *);
// gtk_tree_model_get_type
// file /usr/include/gtk-2.0/gtk/gtktreemodel.h line 190
unsigned long int gtk_tree_model_get_type(void);
// gtk_tree_view_append_column
// file /usr/include/gtk-2.0/gtk/gtktreeview.h line 167
signed int gtk_tree_view_append_column(struct _GtkTreeView *, struct _GtkTreeViewColumn *);
// gtk_tree_view_column_new_with_attributes
// file /usr/include/gtk-2.0/gtk/gtktreeviewcolumn.h line 128
struct _GtkTreeViewColumn * gtk_tree_view_column_new_with_attributes(const char *, struct _GtkCellRenderer *, ...);
// gtk_tree_view_get_model
// file /usr/include/gtk-2.0/gtk/gtktreeview.h line 145
struct _GtkTreeModel * gtk_tree_view_get_model(struct _GtkTreeView *);
// gtk_tree_view_get_type
// file /usr/include/gtk-2.0/gtk/gtktreeview.h line 140
unsigned long int gtk_tree_view_get_type(void);
// gtk_tree_view_scroll_to_cell
// file /usr/include/gtk-2.0/gtk/gtktreeview.h line 204
void gtk_tree_view_scroll_to_cell(struct _GtkTreeView *, struct _GtkTreePath *, struct _GtkTreeViewColumn *, signed int, float, float);
// gtk_tree_view_set_model
// file /usr/include/gtk-2.0/gtk/gtktreeview.h line 146
void gtk_tree_view_set_model(struct _GtkTreeView *, struct _GtkTreeModel *);
// gtk_widget_destroy
// file /usr/include/gtk-2.0/gtk/gtkwidget.h line 837
void gtk_widget_destroy(struct _GtkWidget *);
// gtk_widget_get_type
// file /usr/include/gtk-2.0/gtk/gtkwidget.h line 833
unsigned long int gtk_widget_get_type(void);
// gtk_widget_show
// file /usr/include/gtk-2.0/gtk/gtkwidget.h line 851
void gtk_widget_show(struct _GtkWidget *);
// gtk_widget_show_all
// file /usr/include/gtk-2.0/gtk/gtkwidget.h line 854
void gtk_widget_show_all(struct _GtkWidget *);
// gtk_window_get_type
// file /usr/include/gtk-2.0/gtk/gtkwindow.h line 178
unsigned long int gtk_window_get_type(void);
// gtk_window_set_transient_for
// file /usr/include/gtk-2.0/gtk/gtkwindow.h line 206
void gtk_window_set_transient_for(struct _GtkWindow *, struct _GtkWindow *);
// jack_activate
// file /usr/include/jack/jack.h line 183
signed int jack_activate(struct _jack_client *);
// jack_client_close
// file /usr/include/jack/jack.h line 104
signed int jack_client_close(struct _jack_client *);
// jack_client_open
// file /usr/include/jack/jack.h line 88
struct _jack_client * jack_client_open(const char *, enum JackOptions, enum JackStatus *, ...);
// jack_deactivate
// file /usr/include/jack/jack.h line 192
signed int jack_deactivate(struct _jack_client *);
// jack_destroy_pending_events
// file ../jack.c line 533
void jack_destroy_pending_events();
// jack_init
// file ../jack.h line 27
signed int jack_init(const char *name);
// jack_midi_decode
// file ../jack.c line 133
signed int jack_midi_decode(unsigned char *buffer, unsigned long int buffer_size, struct _GString *msg_str_ptr, struct _GString *channel_str_ptr);
// jack_midi_event_get
// file /usr/include/jack/midiport.h line 72
signed int jack_midi_event_get(struct _jack_midi_event *, void *, unsigned int);
// jack_midi_get_event_count
// file /usr/include/jack/midiport.h line 57
unsigned int jack_midi_get_event_count(void *);
// jack_midi_thread
// file ../jack.c line 408
void * jack_midi_thread(void *context_ptr);
// jack_port_get_buffer
// file /usr/include/jack/jack.h line 649
void * jack_port_get_buffer(struct _jack_port *, unsigned int);
// jack_port_register
// file /usr/include/jack/jack.h line 624
struct _jack_port * jack_port_register(struct _jack_client *, const char *, const char *, unsigned long int, unsigned long int);
// jack_process
// file ../jack.c line 72
signed int jack_process(unsigned int nframes, void *context);
// jack_set_process_callback
// file /usr/include/jack/jack.h line 342
signed int jack_set_process_callback(struct _jack_client *, signed int (*)(unsigned int, void *), void *);
// jack_transport_query
// file /usr/include/jack/transport.h line 403
enum anonymous$1 jack_transport_query(const struct _jack_client *, struct anonymous$4 *);
// jack_uninit
// file ../jack.h line 30
void jack_uninit();
// list_add
// file ../list.h line 104
static inline void list_add(struct list_head *new, struct list_head *head);
// list_add_tail
// file ../list.h line 117
static inline void list_add_tail(struct list_head *new, struct list_head *head);
// list_del
// file ../list.h line 200
static inline void list_del(struct list_head *entry);
// list_del$link1
// file ../list.h line 200
static inline void list_del$link1(struct list_head *entry$link1);
// list_empty
// file ../list.h line 292
static inline signed int list_empty(struct list_head *head);
// list_empty$link1
// file ../list.h line 292
static inline signed int list_empty$link1(struct list_head *head$link1);
// list_splice_init
// file ../list.h line 347
static inline void list_splice_init(struct list_head *list, struct list_head *head);
// log_msg
// file ../log.c line 30
void log_msg(signed int level, const char *format, ...);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// on_about_clicked
// file ../about.c line 386
void on_about_clicked(struct _GtkAction *action, struct _GtkWidget *window);
// on_button_stop_toggled
// file ../main.c line 156
void on_button_stop_toggled(struct _GtkAction *action_ptr, struct _GtkWidget *widget_ptr);
// on_clear_clicked
// file ../main.c line 174
void on_clear_clicked(struct _GtkButton *button, void *user_data);
// path_check_initialization
// file ../path.c line 49
static void path_check_initialization();
// path_get_data_filename
// file ../path.h line 33
char * path_get_data_filename(const char *filename);
// path_init
// file ../path.h line 29
void path_init(const char *argv0);
// path_uninit
// file ../path.c line 90
void path_uninit();
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
extern signed int pthread_mutex_destroy(union anonymous$7 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$7 *, const union anonymous$8 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$7 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous$7 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$7 *);
// rtsafe_memory_allocate
// file ../memory_atomic.c line 302
void * rtsafe_memory_allocate(void *handle_ptr, unsigned long int size);
// rtsafe_memory_deallocate
// file ../memory_atomic.c line 351
void rtsafe_memory_deallocate(void *data);
// rtsafe_memory_init
// file ../memory_atomic.c line 205
signed int rtsafe_memory_init(unsigned long int max_size, unsigned long int prealloc_min, unsigned long int prealloc_max, void **handle_ptr);
// rtsafe_memory_pool_allocate
// file ../memory_atomic.c line 143
void * rtsafe_memory_pool_allocate(void *pool_handle);
// rtsafe_memory_pool_allocate_sleepy
// file ../memory_atomic.c line 173
void * rtsafe_memory_pool_allocate_sleepy(void *pool_handle);
// rtsafe_memory_pool_create
// file ../memory_atomic.c line 49
signed int rtsafe_memory_pool_create(unsigned long int data_size, unsigned long int min_preallocated, unsigned long int max_preallocated, void **pool_handle_ptr);
// rtsafe_memory_pool_deallocate
// file ../memory_atomic.c line 163
void rtsafe_memory_pool_deallocate(void *pool_handle, void *data);
// rtsafe_memory_pool_destroy
// file ../memory_atomic.c line 84
void rtsafe_memory_pool_destroy(void *pool_handle);
// rtsafe_memory_pool_sleepy
// file ../memory_atomic.c line 111
void rtsafe_memory_pool_sleepy(void *pool_handle);
// rtsafe_memory_sleepy
// file ../memory_atomic.c line 339
void rtsafe_memory_sleepy(void *handle_ptr);
// rtsafe_memory_uninit
// file ../memory_atomic.c line 283
void rtsafe_memory_uninit(void *handle_ptr);
// sigint_handler
// file ../main.c line 257
static void sigint_handler(signed int i);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// snd_seq_close
// file /usr/include/alsa/seq.h line 82
signed int snd_seq_close(struct _snd_seq *);
// snd_seq_create_port
// file /usr/include/alsa/seq.h line 299
signed int snd_seq_create_port(struct _snd_seq *, struct _snd_seq_port_info *);
// snd_seq_event_input
// file /usr/include/alsa/seq.h line 522
signed int snd_seq_event_input(struct _snd_seq *, struct snd_seq_event **);
// snd_seq_open
// file /usr/include/alsa/seq.h line 78
signed int snd_seq_open(struct _snd_seq **, const char *, signed int, signed int);
// snd_seq_port_info_set_capability
// file /usr/include/alsa/seq.h line 289
void snd_seq_port_info_set_capability(struct _snd_seq_port_info *, unsigned int);
// snd_seq_port_info_set_midi_channels
// file /usr/include/alsa/seq.h line 291
void snd_seq_port_info_set_midi_channels(struct _snd_seq_port_info *, signed int);
// snd_seq_port_info_set_name
// file /usr/include/alsa/seq.h line 288
void snd_seq_port_info_set_name(struct _snd_seq_port_info *, const char *);
// snd_seq_port_info_set_port
// file /usr/include/alsa/seq.h line 286
void snd_seq_port_info_set_port(struct _snd_seq_port_info *, signed int);
// snd_seq_port_info_set_port_specified
// file /usr/include/alsa/seq.h line 294
void snd_seq_port_info_set_port_specified(struct _snd_seq_port_info *, signed int);
// snd_seq_port_info_set_type
// file /usr/include/alsa/seq.h line 290
void snd_seq_port_info_set_type(struct _snd_seq_port_info *, unsigned int);
// snd_seq_port_info_sizeof
// file /usr/include/alsa/seq.h line 261
unsigned long int snd_seq_port_info_sizeof(void);
// snd_seq_set_client_name
// file /usr/include/alsa/seqmid.h line 344
signed int snd_seq_set_client_name(struct _snd_seq *, const char *);
// snd_strerror
// file /usr/include/alsa/error.h line 45
const char * snd_strerror(signed int);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// vprintf
// file /usr/include/stdio.h line 377
extern signed int vprintf(const char *, void **);

struct anonymous$4
{
  // unique_1
  unsigned long int unique_1;
  // usecs
  unsigned long int usecs;
  // frame_rate
  unsigned int frame_rate;
  // frame
  unsigned int frame;
  // valid
  enum anonymous$2 valid;
  // bar
  signed int bar;
  // beat
  signed int beat;
  // tick
  signed int tick;
  // bar_start_tick
  double bar_start_tick;
  // beats_per_bar
  float beats_per_bar;
  // beat_type
  float beat_type;
  // ticks_per_beat
  double ticks_per_beat;
  // beats_per_minute
  double beats_per_minute;
  // frame_time
  double frame_time;
  // next_time
  double next_time;
  // bbt_offset
  unsigned int bbt_offset;
  // audio_frames_per_video_frame
  float audio_frames_per_video_frame;
  // video_offset
  unsigned int video_offset;
  // padding
  signed int padding[7l];
  // unique_2
  unsigned long int unique_2;
} __attribute__ ((__packed__));

union anonymous$8
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$5
{
  // v_int
  signed int v_int;
  // v_uint
  unsigned int v_uint;
  // v_long
  signed long int v_long;
  // v_ulong
  unsigned long int v_ulong;
  // v_int64
  signed long int v_int64;
  // v_uint64
  unsigned long int v_uint64;
  // v_float
  float v_float;
  // v_double
  double v_double;
  // v_pointer
  void *v_pointer;
};

struct snd_seq_real_time
{
  // tv_sec
  unsigned int tv_sec;
  // tv_nsec
  unsigned int tv_nsec;
};

union snd_seq_timestamp
{
  // tick
  unsigned int tick;
  // time
  struct snd_seq_real_time time;
};

struct snd_seq_queue_skew
{
  // value
  unsigned int value;
  // base
  unsigned int base;
};

union anonymous
{
  // value
  signed int value;
  // time
  union snd_seq_timestamp time;
  // position
  unsigned int position;
  // skew
  struct snd_seq_queue_skew skew;
  // d32
  unsigned int d32[2l];
  // d8
  unsigned char d8[8l];
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

struct snd_seq_ev_note
{
  // channel
  unsigned char channel;
  // note
  unsigned char note;
  // velocity
  unsigned char velocity;
  // off_velocity
  unsigned char off_velocity;
  // duration
  unsigned int duration;
};

struct snd_seq_ev_ctrl
{
  // channel
  unsigned char channel;
  // unused
  unsigned char unused[3l];
  // param
  unsigned int param;
  // value
  signed int value;
};

struct snd_seq_ev_raw8
{
  // d
  unsigned char d[12l];
};

struct snd_seq_ev_raw32
{
  // d
  unsigned int d[3l];
};

struct snd_seq_ev_ext
{
  // len
  unsigned int len;
  // ptr
  void *ptr;
} __attribute__ ((__packed__));

struct snd_seq_ev_queue_control
{
  // queue
  unsigned char queue;
  // unused
  unsigned char unused[3l];
  // param
  union anonymous param;
};

struct snd_seq_addr
{
  // client
  unsigned char client;
  // port
  unsigned char port;
};

struct snd_seq_connect
{
  // sender
  struct snd_seq_addr sender;
  // dest
  struct snd_seq_addr dest;
};

struct snd_seq_result
{
  // event
  signed int event;
  // result
  signed int result;
};

union anonymous$0
{
  // note
  struct snd_seq_ev_note note;
  // control
  struct snd_seq_ev_ctrl control;
  // raw8
  struct snd_seq_ev_raw8 raw8;
  // raw32
  struct snd_seq_ev_raw32 raw32;
  // ext
  struct snd_seq_ev_ext ext;
  // queue
  struct snd_seq_ev_queue_control queue;
  // time
  union snd_seq_timestamp time;
  // addr
  struct snd_seq_addr addr;
  // connect
  struct snd_seq_connect connect;
  // result
  struct snd_seq_result result;
};

struct _GArray
{
  // data
  char *data;
  // len
  unsigned int len;
};

struct _GClosure
{
  // ref_count
  volatile unsigned int ref_count : 15;
  // meta_marshal_nouse
  volatile unsigned int meta_marshal_nouse : 1;
  // n_guards
  volatile unsigned int n_guards : 1;
  // n_fnotifiers
  volatile unsigned int n_fnotifiers : 2;
  // n_inotifiers
  volatile unsigned int n_inotifiers : 8;
  // in_inotify
  volatile unsigned int in_inotify : 1;
  // floating
  volatile unsigned int floating : 1;
  // derivative_flag
  volatile unsigned int derivative_flag : 1;
  // in_marshal
  volatile unsigned int in_marshal : 1;
  // is_invalid
  volatile unsigned int is_invalid : 1;
  // marshal
  void (*marshal)(struct _GClosure *, struct _GValue *, unsigned int, const struct _GValue *, void *, void *);
  // data
  void *data;
  // notifiers
  struct _GClosureNotifyData *notifiers;
};

struct _GClosureNotifyData
{
  // data
  void *data;
  // notify
  void (*notify)(void *, struct _GClosure *);
};

struct _GError
{
  // domain
  unsigned int domain;
  // code
  signed int code;
  // message
  char *message;
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

struct _GTypeInstance
{
  // g_class
  struct _GTypeClass *g_class;
};

struct _GObject
{
  // g_type_instance
  struct _GTypeInstance g_type_instance;
  // ref_count
  volatile unsigned int ref_count;
  // qdata
  struct _GData *qdata;
};

struct _GSList
{
  // data
  void *data;
  // next
  struct _GSList *next;
};

struct _GString
{
  // str
  char *str;
  // len
  unsigned long int len;
  // allocated_len
  unsigned long int allocated_len;
};

struct _GTypeClass
{
  // g_type
  unsigned long int g_type;
};

struct _GValue
{
  // g_type
  unsigned long int g_type;
  // data
  union anonymous$5 data[2l];
};

struct _GdkColor
{
  // pixel
  unsigned int pixel;
  // red
  unsigned short int red;
  // green
  unsigned short int green;
  // blue
  unsigned short int blue;
};

struct _GdkColormap
{
  // parent_instance
  struct _GObject parent_instance;
  // size
  signed int size;
  // colors
  struct _GdkColor *colors;
  // visual
  struct _GdkVisual *visual;
  // windowing_data
  void *windowing_data;
};

struct _GdkDrawable
{
  // parent_instance
  struct _GObject parent_instance;
};

struct _GdkFont
{
  // type
  enum anonymous$9 type;
  // ascent
  signed int ascent;
  // descent
  signed int descent;
};

struct _GdkGC
{
  // parent_instance
  struct _GObject parent_instance;
  // clip_x_origin
  signed int clip_x_origin;
  // clip_y_origin
  signed int clip_y_origin;
  // ts_x_origin
  signed int ts_x_origin;
  // ts_y_origin
  signed int ts_y_origin;
  // colormap
  struct _GdkColormap *colormap;
};

struct _GdkRectangle
{
  // x
  signed int x;
  // y
  signed int y;
  // width
  signed int width;
  // height
  signed int height;
};

struct _GdkScreen
{
  // parent_instance
  struct _GObject parent_instance;
  // closed
  unsigned int closed : 1;
  // normal_gcs
  struct _GdkGC *normal_gcs[32l];
  // exposure_gcs
  struct _GdkGC *exposure_gcs[32l];
  // subwindow_gcs
  struct _GdkGC *subwindow_gcs[32l];
  // font_options
  struct _cairo_font_options *font_options;
  // resolution
  double resolution;
};

struct _GdkVisual
{
  // parent_instance
  struct _GObject parent_instance;
  // type
  enum anonymous$13 type;
  // depth
  signed int depth;
  // byte_order
  enum anonymous$6 byte_order;
  // colormap_size
  signed int colormap_size;
  // bits_per_rgb
  signed int bits_per_rgb;
  // red_mask
  unsigned int red_mask;
  // red_shift
  signed int red_shift;
  // red_prec
  signed int red_prec;
  // green_mask
  unsigned int green_mask;
  // green_shift
  signed int green_shift;
  // green_prec
  signed int green_prec;
  // blue_mask
  unsigned int blue_mask;
  // blue_shift
  signed int blue_shift;
  // blue_prec
  signed int blue_prec;
};

struct _GtkAction
{
  // object
  struct _GObject object;
  // private_data
  struct _GtkActionPrivate *private_data;
};

struct _GtkObject
{
  // parent_instance
  struct _GObject parent_instance;
  // flags
  unsigned int flags;
};

struct _GtkRequisition
{
  // width
  signed int width;
  // height
  signed int height;
};

struct _GtkWidget
{
  // object
  struct _GtkObject object;
  // private_flags
  unsigned short int private_flags;
  // state
  unsigned char state;
  // saved_state
  unsigned char saved_state;
  // name
  char *name;
  // style
  struct _GtkStyle *style;
  // requisition
  struct _GtkRequisition requisition;
  // allocation
  struct _GdkRectangle allocation;
  // window
  struct _GdkDrawable *window;
  // parent
  struct _GtkWidget *parent;
};

struct _GtkContainer
{
  // widget
  struct _GtkWidget widget;
  // focus_child
  struct _GtkWidget *focus_child;
  // border_width
  unsigned int border_width : 16;
  // need_resize
  unsigned int need_resize : 1;
  // resize_mode
  unsigned int resize_mode : 2;
  // reallocate_redraws
  unsigned int reallocate_redraws : 1;
  // has_focus_chain
  unsigned int has_focus_chain : 1;
};

struct _GtkBin
{
  // container
  struct _GtkContainer container;
  // child
  struct _GtkWidget *child;
};

struct _GtkBuilder
{
  // parent_instance
  struct _GObject parent_instance;
  // priv
  struct _GtkBuilderPrivate *priv;
};

struct _GtkButton
{
  // bin
  struct _GtkBin bin;
  // event_window
  struct _GdkDrawable *event_window;
  // label_text
  char *label_text;
  // activate_timeout
  unsigned int activate_timeout;
  // constructed
  unsigned int constructed : 1;
  // in_button
  unsigned int in_button : 1;
  // button_down
  unsigned int button_down : 1;
  // relief
  unsigned int relief : 2;
  // use_underline
  unsigned int use_underline : 1;
  // use_stock
  unsigned int use_stock : 1;
  // depressed
  unsigned int depressed : 1;
  // depress_on_activate
  unsigned int depress_on_activate : 1;
  // focus_on_click
  unsigned int focus_on_click : 1;
};

struct _GtkCellRenderer
{
  // parent
  struct _GtkObject parent;
  // xalign
  float xalign;
  // yalign
  float yalign;
  // width
  signed int width;
  // height
  signed int height;
  // xpad
  unsigned short int xpad;
  // ypad
  unsigned short int ypad;
  // mode
  unsigned int mode : 2;
  // visible
  unsigned int visible : 1;
  // is_expander
  unsigned int is_expander : 1;
  // is_expanded
  unsigned int is_expanded : 1;
  // cell_background_set
  unsigned int cell_background_set : 1;
  // sensitive
  unsigned int sensitive : 1;
  // editing
  unsigned int editing : 1;
};

struct _GtkListStore
{
  // parent
  struct _GObject parent;
  // stamp
  signed int stamp;
  // seq
  void *seq;
  // _gtk_reserved1
  void *_gtk_reserved1;
  // sort_list
  struct _GList *sort_list;
  // n_columns
  signed int n_columns;
  // sort_column_id
  signed int sort_column_id;
  // order
  enum anonymous$15 order;
  // column_headers
  unsigned long int *column_headers;
  // length
  signed int length;
  // default_sort_func
  signed int (*default_sort_func)(struct _GtkTreeModel *, struct _GtkTreeIter *, struct _GtkTreeIter *, void *);
  // default_sort_data
  void *default_sort_data;
  // default_sort_destroy
  void (*default_sort_destroy)(void *);
  // columns_dirty
  unsigned int columns_dirty : 1;
};

struct _GtkRcStyle
{
  // parent_instance
  struct _GObject parent_instance;
  // name
  char *name;
  // bg_pixmap_name
  char *bg_pixmap_name[5l];
  // font_desc
  struct _PangoFontDescription *font_desc;
  // color_flags
  enum anonymous$10 color_flags[5l];
  // fg
  struct _GdkColor fg[5l];
  // bg
  struct _GdkColor bg[5l];
  // text
  struct _GdkColor text[5l];
  // base
  struct _GdkColor base[5l];
  // xthickness
  signed int xthickness;
  // ythickness
  signed int ythickness;
  // rc_properties
  struct _GArray *rc_properties;
  // rc_style_lists
  struct _GSList *rc_style_lists;
  // icon_factories
  struct _GSList *icon_factories;
  // engine_specified
  unsigned int engine_specified : 1;
};

struct _GtkStyle
{
  // parent_instance
  struct _GObject parent_instance;
  // fg
  struct _GdkColor fg[5l];
  // bg
  struct _GdkColor bg[5l];
  // light
  struct _GdkColor light[5l];
  // dark
  struct _GdkColor dark[5l];
  // mid
  struct _GdkColor mid[5l];
  // text
  struct _GdkColor text[5l];
  // base
  struct _GdkColor base[5l];
  // text_aa
  struct _GdkColor text_aa[5l];
  // black
  struct _GdkColor black;
  // white
  struct _GdkColor white;
  // font_desc
  struct _PangoFontDescription *font_desc;
  // xthickness
  signed int xthickness;
  // ythickness
  signed int ythickness;
  // fg_gc
  struct _GdkGC *fg_gc[5l];
  // bg_gc
  struct _GdkGC *bg_gc[5l];
  // light_gc
  struct _GdkGC *light_gc[5l];
  // dark_gc
  struct _GdkGC *dark_gc[5l];
  // mid_gc
  struct _GdkGC *mid_gc[5l];
  // text_gc
  struct _GdkGC *text_gc[5l];
  // base_gc
  struct _GdkGC *base_gc[5l];
  // text_aa_gc
  struct _GdkGC *text_aa_gc[5l];
  // black_gc
  struct _GdkGC *black_gc;
  // white_gc
  struct _GdkGC *white_gc;
  // bg_pixmap
  struct _GdkDrawable *bg_pixmap[5l];
  // attach_count
  signed int attach_count;
  // depth
  signed int depth;
  // colormap
  struct _GdkColormap *colormap;
  // private_font
  struct _GdkFont *private_font;
  // private_font_desc
  struct _PangoFontDescription *private_font_desc;
  // rc_style
  struct _GtkRcStyle *rc_style;
  // styles
  struct _GSList *styles;
  // property_cache
  struct _GArray *property_cache;
  // icon_factories
  struct _GSList *icon_factories;
};

struct _GtkToolItem
{
  // parent
  struct _GtkBin parent;
  // priv
  struct _GtkToolItemPrivate *priv;
};

struct _GtkToolButton
{
  // parent
  struct _GtkToolItem parent;
  // priv
  struct _GtkToolButtonPrivate *priv;
};

struct _GtkToggleToolButton
{
  // parent
  struct _GtkToolButton parent;
  // priv
  struct _GtkToggleToolButtonPrivate *priv;
};

struct _GtkTreeIter
{
  // stamp
  signed int stamp;
  // user_data
  void *user_data;
  // user_data2
  void *user_data2;
  // user_data3
  void *user_data3;
};

struct _GtkTreeView
{
  // parent
  struct _GtkContainer parent;
  // priv
  struct _GtkTreeViewPrivate *priv;
};

struct _GtkTreeViewColumn
{
  // parent
  struct _GtkObject parent;
  // tree_view
  struct _GtkWidget *tree_view;
  // button
  struct _GtkWidget *button;
  // child
  struct _GtkWidget *child;
  // arrow
  struct _GtkWidget *arrow;
  // alignment
  struct _GtkWidget *alignment;
  // window
  struct _GdkDrawable *window;
  // editable_widget
  struct _GtkCellEditable *editable_widget;
  // xalign
  float xalign;
  // property_changed_signal
  unsigned int property_changed_signal;
  // spacing
  signed int spacing;
  // column_type
  enum anonymous$14 column_type;
  // requested_width
  signed int requested_width;
  // button_request
  signed int button_request;
  // resized_width
  signed int resized_width;
  // width
  signed int width;
  // fixed_width
  signed int fixed_width;
  // min_width
  signed int min_width;
  // max_width
  signed int max_width;
  // drag_x
  signed int drag_x;
  // drag_y
  signed int drag_y;
  // title
  char *title;
  // cell_list
  struct _GList *cell_list;
  // sort_clicked_signal
  unsigned int sort_clicked_signal;
  // sort_column_changed_signal
  unsigned int sort_column_changed_signal;
  // sort_column_id
  signed int sort_column_id;
  // sort_order
  enum anonymous$15 sort_order;
  // visible
  unsigned int visible : 1;
  // resizable
  unsigned int resizable : 1;
  // clickable
  unsigned int clickable : 1;
  // dirty
  unsigned int dirty : 1;
  // show_sort_indicator
  unsigned int show_sort_indicator : 1;
  // maybe_reordered
  unsigned int maybe_reordered : 1;
  // reorderable
  unsigned int reorderable : 1;
  // use_resized_width
  unsigned int use_resized_width : 1;
  // expand
  unsigned int expand : 1;
};

struct _GtkWindow
{
  // bin
  struct _GtkBin bin;
  // title
  char *title;
  // wmclass_name
  char *wmclass_name;
  // wmclass_class
  char *wmclass_class;
  // wm_role
  char *wm_role;
  // focus_widget
  struct _GtkWidget *focus_widget;
  // default_widget
  struct _GtkWidget *default_widget;
  // transient_parent
  struct _GtkWindow *transient_parent;
  // geometry_info
  struct _GtkWindowGeometryInfo *geometry_info;
  // frame
  struct _GdkDrawable *frame;
  // group
  struct _GtkWindowGroup *group;
  // configure_request_count
  unsigned short int configure_request_count;
  // allow_shrink
  unsigned int allow_shrink : 1;
  // allow_grow
  unsigned int allow_grow : 1;
  // configure_notify_received
  unsigned int configure_notify_received : 1;
  // need_default_position
  unsigned int need_default_position : 1;
  // need_default_size
  unsigned int need_default_size : 1;
  // position
  unsigned int position : 3;
  // type
  unsigned int type : 4;
  // has_user_ref_count
  unsigned int has_user_ref_count : 1;
  // has_focus
  unsigned int has_focus : 1;
  // modal
  unsigned int modal : 1;
  // destroy_with_parent
  unsigned int destroy_with_parent : 1;
  // has_frame
  unsigned int has_frame : 1;
  // iconify_initially
  unsigned int iconify_initially : 1;
  // stick_initially
  unsigned int stick_initially : 1;
  // maximize_initially
  unsigned int maximize_initially : 1;
  // decorated
  unsigned int decorated : 1;
  // type_hint
  unsigned int type_hint : 3;
  // gravity
  unsigned int gravity : 5;
  // is_active
  unsigned int is_active : 1;
  // has_toplevel_focus
  unsigned int has_toplevel_focus : 1;
  // frame_left
  unsigned int frame_left;
  // frame_top
  unsigned int frame_top;
  // frame_right
  unsigned int frame_right;
  // frame_bottom
  unsigned int frame_bottom;
  // keys_changed_handler
  unsigned int keys_changed_handler;
  // mnemonic_modifier
  enum anonymous$11 mnemonic_modifier;
  // screen
  struct _GdkScreen *screen;
};

struct _GtkWindowGroup
{
  // parent_instance
  struct _GObject parent_instance;
  // grabs
  struct _GSList *grabs;
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

struct _jack_midi_event
{
  // time
  unsigned int time;
  // size
  unsigned long int size;
  // buffer
  unsigned char *buffer;
};

struct list_head
{
  // next
  struct list_head *next;
  // prev
  struct list_head *prev;
};

struct jack_midi_event_buffer
{
  // siblings
  struct list_head siblings;
  // buffer_size
  unsigned long int buffer_size;
  // buffer
  unsigned char buffer[0l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rtsafe_memory
{
  // pools
  struct rtsafe_memory_pool_generic *pools;
  // pools_count
  unsigned long int pools_count;
};

struct rtsafe_memory_pool
{
  // data_size
  unsigned long int data_size;
  // min_preallocated
  unsigned long int min_preallocated;
  // max_preallocated
  unsigned long int max_preallocated;
  // used
  struct list_head used;
  // used_count
  unsigned int used_count;
  // unused
  struct list_head unused;
  // unused_count
  unsigned int unused_count;
};

struct rtsafe_memory_pool_generic
{
  // size
  unsigned long int size;
  // pool
  void *pool;
};

struct snd_seq_event
{
  // type
  unsigned char type;
  // flags
  unsigned char flags;
  // tag
  unsigned char tag;
  // queue
  unsigned char queue;
  // time
  union snd_seq_timestamp time;
  // source
  struct snd_seq_addr source;
  // dest
  struct snd_seq_addr dest;
  // data
  union anonymous$0 data;
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


// authors
// file ../about.c line 36
static const char *authors[3l] = { "Nedko Arnaudov <nedko@arnaudov.name> - http://nedko.arnaudov.name",
    "Alessio Treglia <alessio@debian.org>", (const char *)(void *)0 };
// g_alsa_midi_tid
// file ../alsa.c line 38
unsigned long int g_alsa_midi_tid;
// g_builder
// file ../main.c line 46
struct _GtkBuilder *g_builder = (struct _GtkBuilder *)(void *)0;
// g_gm_drum_names
// file ../gm.c line 163
static const char *g_gm_drum_names[47l] = { "Acoustic Bass Drum", "Bass Drum 1", "Side Stick", "Acoustic Snare", "Hand Clap", "Electric Snare", "Low Floor Tom", "Closed Hi-Hat", "High Floor Tom", "Pedal Hi-Hat", "Low Tom", "Open Hi-Hat", "Low-Mid Tom", "Hi-Mid Tom", "Crash Cymbal 1", "High Tom", "Ride Cymbal 1", "Chinese Cymbal", "Ride Bell", "Tambourine", "Splash Cymbal", "Cowbell", "Crash Cymbal 2", "Vibraslap", "Ride Cymbal 2", "Hi Bongo", "Low Bongo", "Mute Hi Conga", "Open Hi Conga", "Low Conga", "High Timbale", "Low Timbale", "High Agogo", "Low Agogo", "Cabasa", "Maracas", "Short Whistle", "Long Whistle", "Short Guiro", "Long Guiro", "Claves", "Hi Wood Block", "Low Wood Block", "Mute Cuica", "Open Cuica", "Mute Triangle", "Open Triangle" };
// g_gm_instrument_names
// file ../gm.c line 28
static const char *g_gm_instrument_names[128l] = { "Acoustic Grand Piano", "Bright Acoustic Piano", "Electric Grand Piano", "Honky-tonk Piano", "Electric Piano 1", "Electric Piano 2", "Harpsichord", "Clavi", "Celesta", "Glockenspiel", "Music Box", "Vibraphone", "Marimba", "Xylophone", "Tubular Bells", "Dulcimer", "Drawbar Organ", "Percussive Organ", "Rock Organ", "Church Organ", "Reed Organ", "Accordion", "Harmonica", "Tango Accordion", "Acoustic Guitar (nylon)", "Acoustic Guitar (steel)", "Electric Guitar (jazz)", "Electric Guitar (clean)", "Electric Guitar (muted)", "Overdriven Guitar", "Distortion Guitar", "Guitar harmonics", "Acoustic Bass", "Electric Bass (finger)", "Electric Bass (pick)", "Fretless Bass", "Slap Bass 1", "Slap Bass 2", "Synth Bass 1", "Synth Bass 2", "Violin", "Viola", "Cello", "Contrabass", "Tremolo Strings", "Pizzicato Strings", "Orchestral Harp", "Timpani", "String Ensemble 1", "String Ensemble 2", "SynthStrings 1", "SynthStrings 2", "Choir Aahs", "Voice Oohs", "Synth Voice", "Orchestra Hit", "Trumpet", "Trombone", "Tuba", "Muted Trumpet", "French Horn", "Brass Section", "SynthBrass 1", "SynthBrass 2", "Soprano Sax", "Alto Sax", "Tenor Sax", "Baritone Sax", "Oboe", "English Horn", "Bassoon", "Clarinet", "Piccolo", "Flute", "Recorder", "Pan Flute", "Blown Bottle", "Shakuhachi", "Whistle", "Ocarina", "Lead 1 (square)", "Lead 2 (sawtooth)", "Lead 3 (calliope)", "Lead 4 (chiff)", "Lead 5 (charang)", "Lead 6 (voice)", "Lead 7 (fifths)", "Lead 8 (bass + lead)", "Pad 1 (new age)", "Pad 2 (warm)", "Pad 3 (polysynth)", "Pad 4 (choir)", "Pad 5 (bowed)", "Pad 6 (metallic)", "Pad 7 (halo)", "Pad 8 (sweep)", "FX 1 (rain)", "FX 2 (soundtrack)", "FX 3 (crystal)", "FX 4 (atmosphere)", "FX 5 (brightness)", "FX 6 (goblins)", "FX 7 (echoes)", "FX 8 (sci-fi)", "Sitar", "Banjo", "Shamisen", "Koto", "Kalimba", "Bag pipe", "Fiddle", "Shanai", "Tinkle Bell", "Agogo", "Steel Drums", "Woodblock", "Taiko Drum", "Melodic Tom", "Synth Drum", "Reverse Cymbal", "Guitar Fret Noise", "Breath Noise", "Seashore", "Bird Tweet", "Telephone Ring", "Helicopter", "Applause", "Gunshot" };
// g_jack_client
// file ../jack.c line 45
struct _jack_client *g_jack_client;
// g_jack_input_port
// file ../jack.c line 46
struct _jack_port *g_jack_input_port;
// g_jack_midi_events_pending
// file ../jack.c line 61
struct list_head g_jack_midi_events_pending;
// g_jack_midi_events_pending_rt
// file ../jack.c line 65
struct list_head g_jack_midi_events_pending_rt;
// g_jack_midi_mutex
// file ../jack.c line 56
union anonymous$7 g_jack_midi_mutex;
// g_jack_midi_thread_exit
// file ../jack.c line 69
signed int g_jack_midi_thread_exit;
// g_jack_midi_tid
// file ../jack.c line 67
unsigned long int g_jack_midi_tid;
// g_main_window_ptr
// file ../main.c line 47
struct _GtkWidget *g_main_window_ptr;
// g_memory
// file ../jack.c line 47
void *g_memory;
// g_midi_ignore
// file ../main.c line 49
signed int g_midi_ignore = 0;
// g_note_names
// file ../main.c line 57
const char *g_note_names[12l] = { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" };
// g_row_count
// file ../main.c line 51
signed int g_row_count;
// g_seq_ptr
// file ../alsa.c line 37
struct _snd_seq *g_seq_ptr;
// license
// file ../about.c line 43
static const char *license = "            GNU GENERAL PUBLIC LICENSE\n               Version 2, June 1991\n\n Copyright (C) 1989, 1991 Free Software Foundation, Inc.\n     59 Temple Place, Suite 330, Boston, MA  02111-1307  USA\n Everyone is permitted to copy and distribute verbatim copies\n of this license document, but changing it is not allowed.\n\n                Preamble\n\n  The licenses for most software are designed to take away your\nfreedom to share and change it.  By contrast, the GNU General Public\nLicense is intended to guarantee your freedom to share and change free\nsoftware--to make sure the software is free for all its users.  This\nGeneral Public License applies to most of the Free Software\nFoundation's software and to any other program whose authors commit to\nusing it.  (Some other Free Software Foundation software is covered by\nthe GNU Library General Public License instead.)  You can apply it to\nyour programs, too.\n\n  When we speak of free software, we are referring to freedom, not\nprice.  Our General Public Licenses are designed to make sure that you\nhave the freedom to distribute copies of free software (and charge for\nthis service if you wish), that you receive source code or can get it\nif you want it, that you can change the software or use pieces of it\nin new free programs; and that you know you can do these things.\n\n  To protect your rights, we need to make restrictions that forbid\nanyone to deny you these rights or to ask you to surrender the rights.\nThese restrictions translate to certain responsibilities for you if you\ndistribute copies of the software, or if you modify it.\n\n  For example, if you distribute copies of such a program, whether\ngratis or for a fee, you must give the recipients all the rights that\nyou have.  You must make sure that they, too, receive or can get the\nsource code.  And you must show them these terms so they know their\nrights.\n\n  We protect your rights with two steps: (1) copyright the software, and\n(2) offer you this license which gives you legal permission to copy,\ndistribute and/or modify the software.\n\n  Also, for each author's protection and ours, we want to make certain\nthat everyone understands that there is no warranty for this free\nsoftware.  If the software is modified by someone else and passed on, we\nwant its recipients to know that what they have is not the original, so\nthat any problems introduced by others will not reflect on the original\nauthors' reputations.\n\n  Finally, any free program is threatened constantly by software\npatents.  We wish to avoid the danger that redistributors of a free\nprogram will individually obtain patent licenses, in effect making the\nprogram proprietary.  To prevent this, we have made it clear that any\npatent must be licensed for everyone's free use or not licensed at all.\n\n  The precise terms and conditions for copying, distribution and\nmodification follow.\n\n            GNU GENERAL PUBLIC LICENSE\n   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION\n\n  0. This License applies to any program or other work which contains\na notice placed by the copyright holder saying it may be distributed\nunder the terms of this General Public License.  The \"Program\", below,\nrefers to any such program or work, and a \"work based on the Program\"\nmeans either the Program or any derivative work under copyright law:\nthat is to say, a work containing the Program or a portion of it,\neither verbatim or with modifications and/or translated into another\nlanguage.  (Hereinafter, translation is included without limitation in\nthe term \"modification\".)  Each licensee is addressed as \"you\".\n\nActivities other than copying, distribution and modification are not\ncovered by this License; they are outside its scope.  The act of\nrunning the Program is not restricted, and the output from the Program\nis covered only if its contents constitute a work based on the\nProgram (independent of having been made by running the Program).\nWhether that is true depends on what the Program does.\n\n  1. You may copy and distribute verbatim copies of the Program's\nsource code as you receive it, in any medium, provided that you\nconspicuously and appropriately publish on each copy an appropriate\ncopyright notice and disclaimer of warranty; keep intact all the\nnotices that refer to this License and to the absence of any warranty;\nand give any other recipients of the Program a copy of this License\nalong with the Program.\n\nYou may charge a fee for the physical act of transferring a copy, and\nyou may at your option offer warranty protection in exchange for a fee.\n\n  2. You may modify your copy or copies of the Program or any portion\nof it, thus forming a work based on the Program, and copy and\ndistribute such modifications or work under the terms of Section 1\nabove, provided that you also meet all of these conditions:\n\n    a) You must cause the modified files to carry prominent notices\n    stating that you changed the files and the date of any change.\n\n    b) You must cause any work that you distribute or publish, that in\n    whole or in part contains or is derived from the Program or any\n    part thereof, to be licensed as a whole at no charge to all third\n    parties under the terms of this License.\n\n    c) If the modified program normally reads commands interactively\n    when run, you must cause it, when started running for such\n    interactive use in the most ordinary way, to print or display an\n    announcement including an appropriate copyright notice and a\n    notice that there is no warranty (or else, saying that you provide\n    a warranty) and that users may redistribute the program under\n    these conditions, and telling the user how to view a copy of this\n    License.  (Exception: if the Program itself is interactive but\n    does not normally print such an announcement, your work based on\n    the Program is not required to print an announcement.)\n\nThese requirements apply to the modified work as a whole.  If\nidentifiable sections of that work are not derived from the Program,\nand can be reasonably considered independent and separate works in\nthemselves, then this License, and its terms, do not apply to those\nsections when you distribute them as separate works.  But when you\ndistribute the same sections as part of a whole which is a work based\non the Program, the distribution of the whole must be on the terms of\nthis License, whose permissions for other licensees extend to the\nentire whole, and thus to each and every part regardless of who wrote it.\n\nThus, it is not the intent of this section to claim rights or contest\nyour rights to work written entirely by you; rather, the intent is to\nexercise the right to control the distribution of derivative or\ncollective works based on the Program.\n\nIn addition, mere aggregation of another work not based on the Program\nwith the Program (or with a work based on the Program) on a volume of\na storage or distribution medium does not bring the other work under\nthe scope of this License.\n\n  3. You may copy and distribute the Program (or a work based on it,\nunder Section 2) in object code or executable form under the terms of\nSections 1 and 2 above provided that you also do one of the following:\n\n    a) Accompany it with the complete corresponding machine-readable\n    source code, which must be distributed under the terms of Sections\n    1 and 2 above on a medium customarily used for software interchange; or,\n\n    b) Accompany it with a written offer, valid for at least three\n    years, to give any third party, for a charge no more than your\n    cost of physically performing source distribution, a complete\n    machine-readable copy of the corresponding source code, to be\n    distributed under the terms of Sections 1 and 2 above on a medium\n    customarily used for software interchange; or,\n\n    c) Accompany it with the information you received as to the offer\n    to distribute corresponding source code.  (This alternative is\n    allowed only for noncommercial distribution and only if you\n    received the program in object code or executable form with such\n    an offer, in accord with Subsection b above.)\n\nThe source code for a work means the preferred form of the work for\nmaking modifications to it.  For an executable work, complete source\ncode means all the source code for all modules it contains, plus any\nassociated interface definition files, plus the scripts used to\ncontrol compilation and installation of the executable.  However, as a\nspecial exception, the source code distributed need not include\nanything that is normally distributed (in either source or binary\nform) with the major components (compiler, kernel, and so on) of the\noperating system on which the executable runs, unless that component\nitself accompanies the executable.\n\nIf distribution of executable or object code is made by offering\naccess to copy from a designated place, then offering equivalent\naccess to copy the source code from the same place counts as\ndistribution of the source code, even though third parties are not\ncompelled to copy the source along with the object code.\n\n  4. You may not copy, modify, sublicense, or distribute the Program\nexcept as expressly provided under this License.  Any attempt\notherwise to copy, modify, sublicense or distribute the Program is\nvoid, and will automatically terminate your rights under this License.\nHowever, parties who have received copies, or rights, from you under\nthis License will not have their licenses terminated so long as such\nparties remain in full compliance.\n\n  5. You are not required to accept this License, since you have not\nsigned it.  However, nothing else grants you permission to modify or\ndistribute the Program or its derivative works.  These actions are\nprohibited by law if you do not accept this License.  Therefore, by\nmodifying or distributing the Program (or any work based on the\nProgram), you indicate your acceptance of this License to do so, and\nall its terms and conditions for copying, distributing or modifying\nthe Program or works based on it.\n\n  6. Each time you redistribute the Program (or any work based on the\nProgram), the recipient automatically receives a license from the\noriginal licensor to copy, distribute or modify the Program subject to\nthese terms and conditions.  You may not impose any further\nrestrictions on the recipients' exercise of the rights granted herein.\nYou are not responsible for enforcing compliance by third parties to\nthis License.\n\n  7. If, as a consequence of a court judgment or allegation of patent\ninfringement or for any other reason (not limited to patent issues),\nconditions are imposed on you (whether by court order, agreement or\notherwise) that contradict the conditions of this License, they do not\nexcuse you from the conditions of this License.  If you cannot\ndistribute so as to satisfy simultaneously your obligations under this\nLicense and any other pertinent obligations, then as a consequence you\nmay not distribute the Program at all.  For example, if a patent\nlicense would not permit royalty-free redistribution of the Program by\nall those who receive copies directly or indirectly through you, then\nthe only way you could satisfy both it and this License would be to\nrefrain entirely from distribution of the Program.\n\nIf any portion of this section is held invalid or unenforceable under\nany particular circumstance, the balance of the section is intended to\napply and the section as a whole is intended to apply in other\ncircumstances.\n\nIt is not the purpose of this section to induce you to infringe any\npatents or other property right claims or to contest validity of any\nsuch claims; this section has the sole purpose of protecting the\nintegrity of the free software distribution system, which is\nimplemented by public license practices.  Many people have made\ngenerous contributions to the wide range of software distributed\nthrough that system in reliance on consistent application of that\nsystem; it is up to the author/donor to decide if he or she is willing\nto distribute software through any other system and a licensee cannot\nimpose that choice.\n\nThis section is intended to make thoroughly clear what is believed to\nbe a consequence of the rest of this License.\n\n  8. If the distribution and/or use of the Program is restricted in\ncertain countries either by patents or by copyrighted interfaces, the\noriginal copyright holder who places the Program under this License\nmay add an explicit geographical distribution limitation excluding\nthose countries, so that distribution is permitted only in or among\ncountries not thus excluded.  In such case, this License incorporates\nthe limitation as if written in the body of this License.\n\n  9. The Free Software Foundation may publish revised and/or new versions\nof the General Public License from time to time.  Such new versions will\nbe similar in spirit to the present version, but may differ in detail to\naddress new problems or concerns.\n\nEach version is given a distinguishing version number.  If the Program\nspecifies a version number of this License which applies to it and \"any\nlater version\", you have the option of following the terms and conditions\neither of that version or of any later version published by the Free\nSoftware Foundation.  If the Program does not specify a version number of\nthis License, you may choose any version ever published by the Free Software\nFoundation.\n\n  10. If you wish to incorporate parts of the Program into other free\nprograms whose distribution conditions are different, write to the author\nto ask for permission.  For software which is copyrighted by the Free\nSoftware Foundation, write to the Free Software Foundation; we sometimes\nmake exceptions for this.  Our decision will be guided by the two goals\nof preserving the free status of all derivatives of our free software and\nof promoting the sharing and reuse of software generally.\n\n                NO WARRANTY\n\n  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY\nFOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN\nOTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES\nPROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED\nOR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF\nMERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS\nTO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE\nPROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,\nREPAIR OR CORRECTION.\n\n  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\nWILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR\nREDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,\nINCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING\nOUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED\nTO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY\nYOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER\nPROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE\nPOSSIBILITY OF SUCH DAMAGES.\n\n             END OF TERMS AND CONDITIONS\n\n        How to Apply These Terms to Your New Programs\n\n  If you develop a new program, and you want it to be of the greatest\npossible use to the public, the best way to achieve this is to make it\nfree software which everyone can redistribute and change under these terms.\n\n  To do so, attach the following notices to the program.  It is safest\nto attach them to the start of each source file to most effectively\nconvey the exclusion of warranty; and each file should have at least\nthe \"copyright\" line and a pointer to where the full notice is found.\n\n    <one line to give the program's name and a brief idea of what it does.>\n    Copyright (C) <year>  <name of author>\n\n    This program is free software; you can redistribute it and/or modify\n    it under the terms of the GNU General Public License as published by\n    the Free Software Foundation; either version 2 of the License, or\n    (at your option) any later version.\n\n    This program is distributed in the hope that it will be useful,\n    but WITHOUT ANY WARRANTY; without even the implied warranty of\n    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n    GNU General Public License for more details.\n\n    You should have received a copy of the GNU General Public License\n    along with this program; if not, write to the Free Software\n    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA\n\n\nAlso add information on how to contact you by electronic and paper mail.\n\nIf the program is interactive, make it output a short notice like this\nwhen it starts in an interactive mode:\n\n    Gnomovision version 69, Copyright (C) year  name of author\n    Gnomovision comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n    This is free software, and you are welcome to redistribute it\n    under certain conditions; type `show c' for details.\n\nThe hypothetical commands `show w' and `show c' should show the appropriate\nparts of the General Public License.  Of course, the commands you use may\nbe called something other than `show w' and `show c'; they could even be\nmouse-clicks or menu items--whatever suits your program.\n\nYou should also get your employer (if you work as a programmer) or your\nschool, if any, to sign a \"copyright disclaimer\" for the program, if\nnecessary.  Here is a sample; alter the names:\n\n  Yoyodyne, Inc., hereby disclaims all copyright interest in the program\n  `Gnomovision' (which makes passes at compilers) written by James Hacker.\n\n  <signature of Ty Coon>, 1 April 1989\n  Ty Coon, President of Vice\n\nThis General Public License does not permit incorporating your program into\nproprietary programs.  If your program is a subroutine library, you may\nconsider it more useful to permit linking proprietary applications with the\nlibrary.  If this is what you want to do, use the GNU Library General\nPublic License instead of this License.\n";
// pszExecutable
// file ../path.c line 36
static char *pszExecutable = (char *)(void *)0;
// pszPathToExecutable
// file ../path.c line 35
static char *pszPathToExecutable = (char *)(void *)0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// INIT_LIST_HEAD
// file ../list.h line 74
static inline void INIT_LIST_HEAD(struct list_head *list)
{
  list->next = list;
  list->prev = list;
}

// INIT_LIST_HEAD$link1
// file ../list.h line 74
static inline void INIT_LIST_HEAD$link1(struct list_head *list$link1)
{
  list$link1->next = list$link1;
  list$link1->prev = list$link1;
}

// __list_add
// file ../list.h line 86
static inline void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next)
{
  next->prev = new;
  new->next = next;
  new->prev = prev;
  prev->next = new;
}

// __list_add$link1
// file ../list.h line 86
static inline void __list_add$link1(struct list_head *new$link1, struct list_head *prev$link1, struct list_head *next$link1)
{
  next$link1->prev = new$link1;
  new$link1->next = next$link1;
  new$link1->prev = prev$link1;
  prev$link1->next = new$link1;
}

// __list_del
// file ../list.h line 188
static inline void __list_del(struct list_head *prev, struct list_head *next)
{
  next->prev = prev;
  prev->next = next;
}

// __list_del$link1
// file ../list.h line 188
static inline void __list_del$link1(struct list_head *prev$link1, struct list_head *next$link1)
{
  next$link1->prev = prev$link1;
  prev$link1->next = next$link1;
}

// __list_splice
// file ../list.h line 315
static inline void __list_splice(struct list_head *list, struct list_head *head)
{
  struct list_head *first = list->next;
  struct list_head *last = list->prev;
  struct list_head *at = head->next;
  first->prev = head;
  head->next = first;
  last->next = at;
  at->prev = last;
}

// alsa_init
// file ../alsa.h line 27
signed int alsa_init(const char *name)
{
  signed int ret;
  struct _snd_seq_port_info *port_info = (struct _snd_seq_port_info *)(void *)0;
  ret=snd_seq_open(&g_seq_ptr, "default", 2, 0);
  if(!(ret >= 0))
  {
    const char *return_value_snd_strerror$1;
    return_value_snd_strerror$1=snd_strerror(ret);
    g_log((char *)0, (enum anonymous$12)G_LOG_LEVEL_WARNING, "Cannot open sequncer, %s\n", return_value_snd_strerror$1);
    goto fail;
  }

  snd_seq_set_client_name(g_seq_ptr, name);
  do
  {
    unsigned long int return_value_snd_seq_port_info_sizeof$2;
    return_value_snd_seq_port_info_sizeof$2=snd_seq_port_info_sizeof();
    void *return_value___builtin_alloca$3;
    return_value___builtin_alloca$3=__builtin_alloca(return_value_snd_seq_port_info_sizeof$2);
    *(&port_info) = (struct _snd_seq_port_info *)return_value___builtin_alloca$3;
    unsigned long int return_value_snd_seq_port_info_sizeof$4;
    return_value_snd_seq_port_info_sizeof$4=snd_seq_port_info_sizeof();
    memset((void *)*(&port_info), 0, return_value_snd_seq_port_info_sizeof$4);
  }
  while((_Bool)0);
  snd_seq_port_info_set_capability(port_info, (unsigned int)(1 << 1 | 1 << 6));
  snd_seq_port_info_set_type(port_info, (unsigned int)(1 << 20));
  snd_seq_port_info_set_midi_channels(port_info, 16);
  snd_seq_port_info_set_port_specified(port_info, 1);
  snd_seq_port_info_set_name(port_info, "midi in");
  snd_seq_port_info_set_port(port_info, 0);
  ret=snd_seq_create_port(g_seq_ptr, port_info);
  if(!(ret >= 0))
  {
    const char *return_value_snd_strerror$5;
    return_value_snd_strerror$5=snd_strerror(ret);
    g_log((char *)0, (enum anonymous$12)G_LOG_LEVEL_WARNING, "Error creating ALSA sequencer port, %s\n", return_value_snd_strerror$5);
    goto fail_close_seq;
  }

  ret=pthread_create(&g_alsa_midi_tid, (const union pthread_attr_t *)(void *)0, alsa_midi_thread, (void *)0);
  return (signed int)!(0 != 0);

fail_close_seq:
  ;
  ret=snd_seq_close(g_seq_ptr);
  if(!(ret >= 0))
  {
    const char *return_value_snd_strerror$6;
    return_value_snd_strerror$6=snd_strerror(ret);
    g_log((char *)0, (enum anonymous$12)G_LOG_LEVEL_WARNING, "Cannot close sequncer, %s\n", return_value_snd_strerror$6);
  }


fail:
  ;
  return 0;
}

// alsa_midi_thread
// file ../alsa.c line 42
void * alsa_midi_thread(void *context_ptr)
{
  struct _GtkTreeIter iter;
  struct snd_seq_event *event_ptr;
  struct _GtkListStore *list_store_ptr;
  struct _GtkWidget *child_ptr;
  struct _GString *time_str_ptr;
  struct _GString *msg_str_ptr;
  struct _GString *channel_str_ptr;
  const char *note_name;
  signed int octave;
  const char *drum_name;
  const char *cc_name;
  struct _GObject *return_value_gtk_builder_get_object$1;
  return_value_gtk_builder_get_object$1=gtk_builder_get_object(g_builder, "list");
  unsigned long int return_value_gtk_widget_get_type$2;
  return_value_gtk_widget_get_type$2=gtk_widget_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$3;
  return_value_g_type_check_instance_cast$3=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_builder_get_object$1, return_value_gtk_widget_get_type$2);
  child_ptr = (struct _GtkWidget *)return_value_g_type_check_instance_cast$3;
  unsigned long int return_value_gtk_tree_view_get_type$4;
  return_value_gtk_tree_view_get_type$4=gtk_tree_view_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$5;
  return_value_g_type_check_instance_cast$5=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$4);
  struct _GtkTreeModel *return_value_gtk_tree_view_get_model$6;
  return_value_gtk_tree_view_get_model$6=gtk_tree_view_get_model((struct _GtkTreeView *)return_value_g_type_check_instance_cast$5);
  unsigned long int return_value_gtk_list_store_get_type$7;
  return_value_gtk_list_store_get_type$7=gtk_list_store_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$8;
  return_value_g_type_check_instance_cast$8=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_tree_view_get_model$6, return_value_gtk_list_store_get_type$7);
  list_store_ptr = (struct _GtkListStore *)return_value_g_type_check_instance_cast$8;
  signed int return_value_snd_seq_event_input$9;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$15;
  char *tmp_if_expr$17;
  const char *return_value_gm_get_instrument_name$16;
  do
  {
    return_value_snd_seq_event_input$9=snd_seq_event_input(g_seq_ptr, &event_ptr);
    if(!(return_value_snd_seq_event_input$9 >= 0))
      break;

    if(g_midi_ignore == 0)
    {
      time_str_ptr=g_string_new("");
      g_string_printf(time_str_ptr, "%u:%u", (unsigned int)event_ptr->time.time.tv_sec, (unsigned int)event_ptr->time.time.tv_nsec);
      channel_str_ptr=g_string_new("");
      drum_name = (const char *)(void *)0;
      note_name = (const char *)(void *)0;
      octave = 0;
      if((signed int)event_ptr->type == 5)
        tmp_if_expr$10 = (_Bool)1;

      else
        tmp_if_expr$10 = (signed int)event_ptr->type == 6 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$10)
        tmp_if_expr$11 = (_Bool)1;

      else
        tmp_if_expr$11 = (signed int)event_ptr->type == 7 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$11)
        tmp_if_expr$12 = (_Bool)1;

      else
        tmp_if_expr$12 = (signed int)event_ptr->type == 8 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$12)
      {
        g_string_printf(channel_str_ptr, "%u", (unsigned int)event_ptr->data.note.channel + (unsigned int)1);
        if((signed int)event_ptr->data.note.channel == 9)
          drum_name=gm_get_drum_name(event_ptr->data.note.note);

        else
          drum_name = (const char *)(void *)0;
        note_name = g_note_names[(signed long int)((signed int)event_ptr->data.note.note % 12)];
        octave = (signed int)event_ptr->data.note.note / 12 - 1;
      }

      if((signed int)event_ptr->type == 10)
        tmp_if_expr$13 = (_Bool)1;

      else
        tmp_if_expr$13 = (signed int)event_ptr->type == 11 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$13)
        tmp_if_expr$14 = (_Bool)1;

      else
        tmp_if_expr$14 = (signed int)event_ptr->type == 13 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$14)
        g_string_printf(channel_str_ptr, "%u", (unsigned int)event_ptr->data.control.channel + (unsigned int)1);

      msg_str_ptr=g_string_new("unknown event");
      switch((signed int)event_ptr->type)
      {
        case 0:
        {
          g_string_printf(msg_str_ptr, "System event");
          goto __CPROVER_DUMP_L155;
        }
        case 1:
        {
          g_string_printf(msg_str_ptr, "Result status event");
          goto __CPROVER_DUMP_L155;
        }
        case 5:
        {
          g_string_printf(msg_str_ptr, "Note");
          goto __CPROVER_DUMP_L155;
        }
        case 6:
          if(!((signed int)event_ptr->data.note.velocity == 0))
          {
            if(!(drum_name == ((const char *)NULL)))
              g_string_printf(msg_str_ptr, "Drum: %s (%s, octave %d, velocity %u)", drum_name, note_name, octave, event_ptr->data.note.velocity);

            else
              g_string_printf(msg_str_ptr, "Note on, %s, octave %d, velocity %u", note_name, octave, event_ptr->data.note.velocity);
            goto __CPROVER_DUMP_L155;
          }

        case 7:
        {
          if(!(drum_name == ((const char *)NULL)))
            break;

          g_string_printf(msg_str_ptr, "Note off, %s, octave %d", note_name, octave);
          goto __CPROVER_DUMP_L155;
        }
        case 8:
        {
          g_string_printf(msg_str_ptr, "Key pressure change (aftertouch)");
          goto __CPROVER_DUMP_L155;
        }
        case 10:
        {
          cc_name = (const char *)(void *)0;
          switch(event_ptr->data.control.param)
          {
            case (unsigned int)0x00:
            {
              cc_name = "Bank selection";
              break;
            }
            case (unsigned int)0x01:
            {
              cc_name = "Modulation";
              break;
            }
            case (unsigned int)0x02:
            {
              cc_name = "Breath";
              break;
            }
            case (unsigned int)0x04:
            {
              cc_name = "Foot";
              break;
            }
            case (unsigned int)0x05:
            {
              cc_name = "Portamento time";
              break;
            }
            case (unsigned int)0x06:
            {
              cc_name = "Data entry";
              break;
            }
            case (unsigned int)0x07:
            {
              cc_name = "Main volume";
              break;
            }
            case (unsigned int)0x08:
            {
              cc_name = "Balance";
              break;
            }
            case (unsigned int)0x0a:
            {
              cc_name = "Panpot";
              break;
            }
            case (unsigned int)0x0b:
            {
              cc_name = "Expression";
              break;
            }
            case (unsigned int)0x0c:
            {
              cc_name = "Effect1";
              break;
            }
            case (unsigned int)0x0d:
            {
              cc_name = "Effect2";
              break;
            }
            case (unsigned int)0x10:
            {
              cc_name = "General purpose 1";
              break;
            }
            case (unsigned int)0x11:
            {
              cc_name = "General purpose 2";
              break;
            }
            case (unsigned int)0x12:
            {
              cc_name = "General purpose 3";
              break;
            }
            case (unsigned int)0x13:
            {
              cc_name = "General purpose 4";
              break;
            }
            case (unsigned int)0x20:
            {
              cc_name = "Bank selection";
              break;
            }
            case (unsigned int)0x21:
            {
              cc_name = "Modulation";
              break;
            }
            case (unsigned int)0x22:
            {
              cc_name = "Breath";
              break;
            }
            case (unsigned int)0x24:
            {
              cc_name = "Foot";
              break;
            }
            case (unsigned int)0x25:
            {
              cc_name = "Portamento time";
              break;
            }
            case (unsigned int)0x26:
            {
              cc_name = "Data entry";
              break;
            }
            case (unsigned int)0x27:
            {
              cc_name = "Main volume";
              break;
            }
            case (unsigned int)0x28:
            {
              cc_name = "Balance";
              break;
            }
            case (unsigned int)0x2a:
            {
              cc_name = "Panpot";
              break;
            }
            case (unsigned int)0x2b:
            {
              cc_name = "Expression";
              break;
            }
            case (unsigned int)0x2c:
            {
              cc_name = "Effect1";
              break;
            }
            case (unsigned int)0x2d:
            {
              cc_name = "Effect2";
              break;
            }
            case (unsigned int)0x30:
            {
              cc_name = "General purpose 1";
              break;
            }
            case (unsigned int)0x31:
            {
              cc_name = "General purpose 2";
              break;
            }
            case (unsigned int)0x32:
            {
              cc_name = "General purpose 3";
              break;
            }
            case (unsigned int)0x33:
            {
              cc_name = "General purpose 4";
              break;
            }
            case (unsigned int)0x40:
            {
              cc_name = "Sustain pedal";
              break;
            }
            case (unsigned int)0x41:
            {
              cc_name = "Portamento";
              break;
            }
            case (unsigned int)0x42:
            {
              cc_name = "Sostenuto";
              break;
            }
            case (unsigned int)0x43:
            {
              cc_name = "Soft pedal";
              break;
            }
            case (unsigned int)0x44:
            {
              cc_name = "Legato foot switch";
              break;
            }
            case (unsigned int)0x45:
            {
              cc_name = "Hold2";
              break;
            }
            case (unsigned int)0x46:
            {
              cc_name = "SC1 Sound Variation";
              break;
            }
            case (unsigned int)0x47:
            {
              cc_name = "SC2 Timbre";
              break;
            }
            case (unsigned int)0x48:
            {
              cc_name = "SC3 Release Time";
              break;
            }
            case (unsigned int)0x49:
            {
              cc_name = "SC4 Attack Time";
              break;
            }
            case (unsigned int)0x4a:
            {
              cc_name = "SC5 Brightness";
              break;
            }
            case (unsigned int)0x4b:
            {
              cc_name = "SC6";
              break;
            }
            case (unsigned int)0x4c:
            {
              cc_name = "SC7";
              break;
            }
            case (unsigned int)0x4d:
            {
              cc_name = "SC8";
              break;
            }
            case (unsigned int)0x4e:
            {
              cc_name = "SC9";
              break;
            }
            case (unsigned int)0x4f:
            {
              cc_name = "SC10";
              break;
            }
            case (unsigned int)0x50:
            {
              cc_name = "General purpose 5";
              break;
            }
            case (unsigned int)0x51:
            {
              cc_name = "General purpose 6";
              break;
            }
            case (unsigned int)0x52:
            {
              cc_name = "General purpose 7";
              break;
            }
            case (unsigned int)0x53:
            {
              cc_name = "General purpose 8";
              break;
            }
            case (unsigned int)0x54:
            {
              cc_name = "Portamento control";
              break;
            }
            case (unsigned int)0x5b:
            {
              cc_name = "E1 Reverb Depth";
              break;
            }
            case (unsigned int)0x5c:
            {
              cc_name = "E2 Tremolo Depth";
              break;
            }
            case (unsigned int)0x5d:
            {
              cc_name = "E3 Chorus Depth";
              break;
            }
            case (unsigned int)0x5e:
            {
              cc_name = "E4 Detune Depth";
              break;
            }
            case (unsigned int)0x5f:
            {
              cc_name = "E5 Phaser Depth";
              break;
            }
            case (unsigned int)0x60:
            {
              cc_name = "Data Increment";
              break;
            }
            case (unsigned int)0x61:
            {
              cc_name = "Data Decrement";
              break;
            }
            case (unsigned int)0x62:
            {
              cc_name = "Non-registered parameter number";
              break;
            }
            case (unsigned int)0x63:
            {
              cc_name = "Non-registered parameter number";
              break;
            }
            case (unsigned int)0x64:
            {
              cc_name = "Registered parameter number";
              break;
            }
            case (unsigned int)0x65:
            {
              cc_name = "Registered parameter number";
              break;
            }
            case (unsigned int)0x78:
            {
              cc_name = "All sounds off";
              break;
            }
            case (unsigned int)0x79:
            {
              cc_name = "Reset Controllers";
              break;
            }
            case (unsigned int)0x7a:
            {
              cc_name = "Local control switch";
              break;
            }
            case (unsigned int)0x7b:
            {
              cc_name = "All notes off";
              break;
            }
            case (unsigned int)0x7c:
            {
              cc_name = "Omni off";
              break;
            }
            case (unsigned int)0x7d:
            {
              cc_name = "Omni on";
              break;
            }
            case (unsigned int)0x7e:
            {
              cc_name = "Mono1";
              break;
            }
            case (unsigned int)0x7f:
              cc_name = "Mono2";
          }
          if(!(cc_name == ((const char *)NULL)))
            g_string_printf(msg_str_ptr, "CC %s (%u), value %u", cc_name, (unsigned int)event_ptr->data.control.param, (unsigned int)event_ptr->data.control.value);

          else
            g_string_printf(msg_str_ptr, "CC %u, value %u", (unsigned int)event_ptr->data.control.param, (unsigned int)event_ptr->data.control.value);
          goto __CPROVER_DUMP_L155;
        }
        case 11:
        {
          if(event_ptr->data.control.value >= 128)
            tmp_if_expr$15 = (_Bool)1;

          else
            tmp_if_expr$15 = event_ptr->data.control.value < 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$15)
            tmp_if_expr$17 = "???";

          else
          {
            return_value_gm_get_instrument_name$16=gm_get_instrument_name((unsigned char)event_ptr->data.control.value);
            tmp_if_expr$17 = return_value_gm_get_instrument_name$16;
          }
          g_string_printf(msg_str_ptr, "Program change, %d (%s)", (unsigned int)event_ptr->data.control.value, tmp_if_expr$17);
          goto __CPROVER_DUMP_L155;
        }
        case 12:
        {
          g_string_printf(msg_str_ptr, "Channel pressure");
          goto __CPROVER_DUMP_L155;
        }
        case 13:
        {
          g_string_printf(msg_str_ptr, "Pitchwheel, %d", (signed int)event_ptr->data.control.value);
          goto __CPROVER_DUMP_L155;
        }
        case 14:
        {
          g_string_printf(msg_str_ptr, "14 bit controller value");
          goto __CPROVER_DUMP_L155;
        }
        case 15:
        {
          g_string_printf(msg_str_ptr, "NRPN");
          goto __CPROVER_DUMP_L155;
        }
        case 16:
        {
          g_string_printf(msg_str_ptr, "RPN");
          goto __CPROVER_DUMP_L155;
        }
        case 20:
        {
          g_string_printf(msg_str_ptr, "Song position");
          goto __CPROVER_DUMP_L155;
        }
        case 21:
        {
          g_string_printf(msg_str_ptr, "Song select");
          goto __CPROVER_DUMP_L155;
        }
        case 22:
        {
          g_string_printf(msg_str_ptr, "midi time code quarter frame");
          goto __CPROVER_DUMP_L155;
        }
        case 23:
        {
          g_string_printf(msg_str_ptr, "SMF Time Signature event");
          goto __CPROVER_DUMP_L155;
        }
        case 24:
        {
          g_string_printf(msg_str_ptr, "SMF Key Signature event");
          goto __CPROVER_DUMP_L155;
        }
        case 30:
        {
          g_string_printf(msg_str_ptr, "MIDI Real Time Start message");
          goto __CPROVER_DUMP_L155;
        }
        case 31:
        {
          g_string_printf(msg_str_ptr, "MIDI Real Time Continue message");
          goto __CPROVER_DUMP_L155;
        }
        case 32:
        {
          g_string_printf(msg_str_ptr, "MIDI Real Time Stop message");
          goto __CPROVER_DUMP_L155;
        }
        case 33:
        {
          g_string_printf(msg_str_ptr, "Set tick queue position");
          goto __CPROVER_DUMP_L155;
        }
        case 34:
        {
          g_string_printf(msg_str_ptr, "Set real-time queue position");
          goto __CPROVER_DUMP_L155;
        }
        case 35:
        {
          g_string_printf(msg_str_ptr, "(SMF) Tempo event");
          goto __CPROVER_DUMP_L155;
        }
        case 36:
        {
          g_string_printf(msg_str_ptr, "MIDI Real Time Clock message");
          goto __CPROVER_DUMP_L155;
        }
        case 37:
        {
          g_string_printf(msg_str_ptr, "MIDI Real Time Tick message");
          goto __CPROVER_DUMP_L155;
        }
        case 38:
        {
          g_string_printf(msg_str_ptr, "Queue timer skew");
          goto __CPROVER_DUMP_L155;
        }
        case 39:
        {
          g_string_printf(msg_str_ptr, "Sync position changed");
          goto __CPROVER_DUMP_L155;
        }
        case 40:
        {
          g_string_printf(msg_str_ptr, "Tune request");
          goto __CPROVER_DUMP_L155;
        }
        case 41:
        {
          g_string_printf(msg_str_ptr, "Reset");
          goto __CPROVER_DUMP_L155;
        }
        case 42:
          break;
        case 50:
        {
          g_string_printf(msg_str_ptr, "Echo-back event");
          goto __CPROVER_DUMP_L155;
        }
        case 51:
        {
          g_string_printf(msg_str_ptr, "OSS emulation raw event");
          goto __CPROVER_DUMP_L155;
        }
        case 60:
        {
          g_string_printf(msg_str_ptr, "New client has connected");
          goto __CPROVER_DUMP_L155;
        }
        case 61:
        {
          g_string_printf(msg_str_ptr, "Client has left the system");
          goto __CPROVER_DUMP_L155;
        }
        case 62:
        {
          g_string_printf(msg_str_ptr, "Client status/info has changed");
          goto __CPROVER_DUMP_L155;
        }
        case 63:
        {
          g_string_printf(msg_str_ptr, "New port was created");
          goto __CPROVER_DUMP_L155;
        }
        case 64:
        {
          g_string_printf(msg_str_ptr, "Port was deleted from system");
          goto __CPROVER_DUMP_L155;
        }
        case 65:
        {
          g_string_printf(msg_str_ptr, "Port status/info has changed");
          goto __CPROVER_DUMP_L155;
        }
        case 66:
        {
          g_string_printf(msg_str_ptr, "Port connected");
          goto __CPROVER_DUMP_L155;
        }
        case 67:
        {
          g_string_printf(msg_str_ptr, "Port disconnected");
          goto __CPROVER_DUMP_L155;
        }
        case 90:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 91:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 92:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 93:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 94:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 95:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 96:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 97:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 98:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 99:
        {
          g_string_printf(msg_str_ptr, "user-defined event");
          goto __CPROVER_DUMP_L155;
        }
        case 130:
        {
          decode_sysex((unsigned char *)event_ptr->data.ext.ptr, (unsigned long int)event_ptr->data.ext.len, msg_str_ptr);
          goto __CPROVER_DUMP_L155;
        }
        case 131:
        {
          g_string_printf(msg_str_ptr, "error event");
          goto __CPROVER_DUMP_L155;
        }
        case 135:
        {
          g_string_printf(msg_str_ptr, "reserved for user apps");
          goto __CPROVER_DUMP_L155;
        }
        case 136:
        {
          g_string_printf(msg_str_ptr, "reserved for user apps");
          goto __CPROVER_DUMP_L155;
        }
        case 137:
        {
          g_string_printf(msg_str_ptr, "reserved for user apps");
          goto __CPROVER_DUMP_L155;
        }
        case 138:
        {
          g_string_printf(msg_str_ptr, "reserved for user apps");
          goto __CPROVER_DUMP_L155;
        }
        case 139:
          g_string_printf(msg_str_ptr, "reserved for user apps");
        default:
        {

        __CPROVER_DUMP_L155:
          ;
          gdk_threads_enter();
          if(g_row_count >= 2000)
          {
            unsigned long int return_value_gtk_tree_model_get_type$18;
            return_value_gtk_tree_model_get_type$18=gtk_tree_model_get_type();
            struct _GTypeInstance *return_value_g_type_check_instance_cast$19;
            return_value_g_type_check_instance_cast$19=g_type_check_instance_cast((struct _GTypeInstance *)list_store_ptr, return_value_gtk_tree_model_get_type$18);
            gtk_tree_model_get_iter_first((struct _GtkTreeModel *)return_value_g_type_check_instance_cast$19, &iter);
            gtk_list_store_remove(list_store_ptr, &iter);
          }

          gtk_list_store_append(list_store_ptr, &iter);
          gtk_list_store_set(list_store_ptr, &iter, 0, time_str_ptr->str, 1, channel_str_ptr->str, 2, msg_str_ptr->str, -1);
          unsigned long int return_value_gtk_tree_view_get_type$20;
          return_value_gtk_tree_view_get_type$20=gtk_tree_view_get_type();
          struct _GTypeInstance *return_value_g_type_check_instance_cast$21;
          return_value_g_type_check_instance_cast$21=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$20);
          unsigned long int return_value_gtk_tree_view_get_type$22;
          return_value_gtk_tree_view_get_type$22=gtk_tree_view_get_type();
          struct _GTypeInstance *return_value_g_type_check_instance_cast$23;
          return_value_g_type_check_instance_cast$23=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$22);
          struct _GtkTreeModel *return_value_gtk_tree_view_get_model$24;
          return_value_gtk_tree_view_get_model$24=gtk_tree_view_get_model((struct _GtkTreeView *)return_value_g_type_check_instance_cast$23);
          struct _GtkTreePath *return_value_gtk_tree_model_get_path$25;
          return_value_gtk_tree_model_get_path$25=gtk_tree_model_get_path(return_value_gtk_tree_view_get_model$24, &iter);
          gtk_tree_view_scroll_to_cell((struct _GtkTreeView *)return_value_g_type_check_instance_cast$21, return_value_gtk_tree_model_get_path$25, (struct _GtkTreeViewColumn *)(void *)0, (signed int)!(0 != 0), (float)0.0, (float)1.0);
          unsigned long int return_value_gtk_container_get_type$26;
          return_value_gtk_container_get_type$26=gtk_container_get_type();
          struct _GTypeInstance *return_value_g_type_check_instance_cast$27;
          return_value_g_type_check_instance_cast$27=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_container_get_type$26);
          gtk_container_check_resize((struct _GtkContainer *)return_value_g_type_check_instance_cast$27);
          g_row_count = g_row_count + 1;
          gdk_threads_leave();
          g_string_free(channel_str_ptr, (signed int)!(0 != 0));
          g_string_free(msg_str_ptr, (signed int)!(0 != 0));
          g_string_free(time_str_ptr, (signed int)!(0 != 0));
        }
      }
    }

  }
  while((_Bool)1);
  return (void *)0;
}

// alsa_uninit
// file ../alsa.h line 30
void alsa_uninit()
{
  signed int ret;
  pthread_cancel(g_alsa_midi_tid);
  ret=pthread_join(g_alsa_midi_tid, (void **)(void *)0);
  ret=snd_seq_close(g_seq_ptr);
  if(!(ret >= 0))
  {
    const char *return_value_snd_strerror$1;
    return_value_snd_strerror$1=snd_strerror(ret);
    g_log((char *)0, (enum anonymous$12)G_LOG_LEVEL_WARNING, "Cannot close sequncer, %s\n", return_value_snd_strerror$1);
  }

}

// create_mainwindow
// file ../main.c line 74
void create_mainwindow()
{
  struct _GtkWidget *child_ptr;
  struct _GtkListStore *list_store_ptr;
  struct _GtkTreeViewColumn *column_ptr;
  struct _GtkCellRenderer *text_renderer_ptr;
  struct _GError *error;
  char *ui_filename;
  ui_filename=path_get_data_filename("gmidimonitor.ui");
  if(ui_filename == ((char *)NULL))
  {
    g_log((char *)0, (enum anonymous$12)G_LOG_LEVEL_WARNING, "Cannot find UI description file.");
    exit(1);
  }

  error = (struct _GError *)(void *)0;
  g_builder=gtk_builder_new();
  unsigned int return_value_gtk_builder_add_from_file$1;
  return_value_gtk_builder_add_from_file$1=gtk_builder_add_from_file(g_builder, ui_filename, &error);
  if(return_value_gtk_builder_add_from_file$1 == 0u)
  {
    g_log((char *)0, (enum anonymous$12)G_LOG_LEVEL_WARNING, "Couldn't load builder file: %s", error->message);
    g_error_free(error);
  }

  g_free((void *)ui_filename);
  struct _GObject *return_value_gtk_builder_get_object$2;
  return_value_gtk_builder_get_object$2=gtk_builder_get_object(g_builder, "main_window");
  unsigned long int return_value_gtk_widget_get_type$3;
  return_value_gtk_widget_get_type$3=gtk_widget_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$4;
  return_value_g_type_check_instance_cast$4=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_builder_get_object$2, return_value_gtk_widget_get_type$3);
  g_main_window_ptr = (struct _GtkWidget *)return_value_g_type_check_instance_cast$4;
  gtk_builder_connect_signals(g_builder, (void *)0);
  struct _GObject *return_value_gtk_builder_get_object$5;
  return_value_gtk_builder_get_object$5=gtk_builder_get_object(g_builder, "list");
  unsigned long int return_value_gtk_widget_get_type$6;
  return_value_gtk_widget_get_type$6=gtk_widget_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$7;
  return_value_g_type_check_instance_cast$7=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_builder_get_object$5, return_value_gtk_widget_get_type$6);
  child_ptr = (struct _GtkWidget *)return_value_g_type_check_instance_cast$7;
  text_renderer_ptr=gtk_cell_renderer_text_new();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$8;
  return_value_g_type_check_instance_cast$8=g_type_check_instance_cast((struct _GTypeInstance *)text_renderer_ptr, (unsigned long int)(20 << 2));
  g_object_set((void *)(struct _GObject *)return_value_g_type_check_instance_cast$8, "family", (const void *)"Monospace", (void *)0);
  column_ptr=gtk_tree_view_column_new_with_attributes("Channel", text_renderer_ptr, (const void *)"text", 1, (void *)0);
  unsigned long int return_value_gtk_tree_view_get_type$9;
  return_value_gtk_tree_view_get_type$9=gtk_tree_view_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$10;
  return_value_g_type_check_instance_cast$10=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$9);
  gtk_tree_view_append_column((struct _GtkTreeView *)return_value_g_type_check_instance_cast$10, column_ptr);
  column_ptr=gtk_tree_view_column_new_with_attributes("Message", text_renderer_ptr, (const void *)"text", 2, (void *)0);
  unsigned long int return_value_gtk_tree_view_get_type$11;
  return_value_gtk_tree_view_get_type$11=gtk_tree_view_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$12;
  return_value_g_type_check_instance_cast$12=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$11);
  gtk_tree_view_append_column((struct _GtkTreeView *)return_value_g_type_check_instance_cast$12, column_ptr);
  gtk_widget_show_all(g_main_window_ptr);
  list_store_ptr=gtk_list_store_new(3, (unsigned long int)(16 << 2), (unsigned long int)(16 << 2), (unsigned long int)(16 << 2));
  unsigned long int return_value_gtk_tree_view_get_type$13;
  return_value_gtk_tree_view_get_type$13=gtk_tree_view_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$14;
  return_value_g_type_check_instance_cast$14=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$13);
  unsigned long int return_value_gtk_tree_model_get_type$15;
  return_value_gtk_tree_model_get_type$15=gtk_tree_model_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$16;
  return_value_g_type_check_instance_cast$16=g_type_check_instance_cast((struct _GTypeInstance *)list_store_ptr, return_value_gtk_tree_model_get_type$15);
  gtk_tree_view_set_model((struct _GtkTreeView *)return_value_g_type_check_instance_cast$14, (struct _GtkTreeModel *)return_value_g_type_check_instance_cast$16);
}

// decode_sysex
// file ../sysex.c line 30
void decode_sysex(unsigned char *buffer, unsigned long int buffer_size, struct _GString *msg_str_ptr)
{
  const char *mmc_command_name;
  unsigned long int i;
  _Bool tmp_if_expr$8;
  if(buffer_size == 6ul)
    tmp_if_expr$8 = (signed int)buffer[(signed long int)0] == 0xF0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$8 = (_Bool)0;
  _Bool tmp_if_expr$9;
  if(tmp_if_expr$8)
    tmp_if_expr$9 = (signed int)buffer[(signed long int)1] == 0x7F ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$9 = (_Bool)0;
  _Bool tmp_if_expr$10;
  if(tmp_if_expr$9)
    tmp_if_expr$10 = (signed int)buffer[(signed long int)3] == 0x06 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$10 = (_Bool)0;
  _Bool tmp_if_expr$11;
  if(tmp_if_expr$10)
    tmp_if_expr$11 = (signed int)buffer[(signed long int)5] == 0xF7 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$11 = (_Bool)0;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  if(tmp_if_expr$11)
  {
    switch((signed int)buffer[(signed long int)4])
    {
      case 1:
      {
        mmc_command_name = "Stop";
        break;
      }
      case 2:
      {
        mmc_command_name = "Play";
        break;
      }
      case 3:
      {
        mmc_command_name = "Deferred Play";
        break;
      }
      case 4:
      {
        mmc_command_name = "Fast Forward";
        break;
      }
      case 5:
      {
        mmc_command_name = "Rewind";
        break;
      }
      case 6:
      {
        mmc_command_name = "Record Strobe (Punch In)";
        break;
      }
      case 7:
      {
        mmc_command_name = "Record Exit (Punch Out)";
        break;
      }
      case 8:
      {
        mmc_command_name = "Record Pause";
        break;
      }
      case 9:
      {
        mmc_command_name = "Pause";
        break;
      }
      case 10:
      {
        mmc_command_name = "Eject";
        break;
      }
      case 11:
      {
        mmc_command_name = "Chase";
        break;
      }
      case 12:
      {
        mmc_command_name = "Command Error Reset";
        break;
      }
      case 13:
      {
        mmc_command_name = "Reset";
        break;
      }
      default:
        goto generic_sysex;
    }
    g_string_printf(msg_str_ptr, "MMC %s, for ", mmc_command_name);
    if((signed int)buffer[2l] == 127)
      g_string_append(msg_str_ptr, "all devices");

    else
      g_string_append_printf(msg_str_ptr, "device %u", (unsigned int)buffer[(signed long int)2]);
  }

  else
  {
    if(buffer_size == 13ul)
      tmp_if_expr$1 = (signed int)buffer[(signed long int)0] == 0xF0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
      tmp_if_expr$2 = (signed int)buffer[(signed long int)1] == 0x7F ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
      tmp_if_expr$3 = (signed int)buffer[(signed long int)3] == 0x06 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$3 = (_Bool)0;
    if(tmp_if_expr$3)
      tmp_if_expr$4 = (signed int)buffer[(signed long int)4] == 0x44 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$4 = (_Bool)0;
    if(tmp_if_expr$4)
      tmp_if_expr$5 = (signed int)buffer[(signed long int)5] == 0x06 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
      tmp_if_expr$6 = (signed int)buffer[(signed long int)6] == 0x01 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$6 = (_Bool)0;
    if(tmp_if_expr$6)
      tmp_if_expr$7 = (signed int)buffer[(signed long int)12] == 0xF7 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$7 = (_Bool)0;
    if(tmp_if_expr$7)
    {
      g_string_printf(msg_str_ptr, "MMC goto %u:%u:%u/%u:%u", (unsigned int)((signed int)buffer[(signed long int)7] & 0x1F), (unsigned int)buffer[(signed long int)8], (unsigned int)buffer[(signed long int)9], (unsigned int)((signed int)buffer[(signed long int)10] & 0x1F), (unsigned int)buffer[(signed long int)11]);
      switch((signed int)buffer[(signed long int)7] & 0x60)
      {
        case 0:
        {
          g_string_append(msg_str_ptr, ", 24 fps");
          break;
        }
        case 1:
        {
          g_string_append(msg_str_ptr, ", 25 fps");
          break;
        }
        case 2:
        {
          g_string_append(msg_str_ptr, ", 29.97 fps");
          break;
        }
        case 3:
          g_string_append(msg_str_ptr, ", 30 fps");
      }
      if((signed int)buffer[2l] == 127)
        g_string_append(msg_str_ptr, ", for all devices");

      else
        g_string_append_printf(msg_str_ptr, ", for device %u", (unsigned int)buffer[(signed long int)2]);
    }

    else
    {

    generic_sysex:
      ;
      g_string_printf(msg_str_ptr, "SYSEX with size %u:", (unsigned int)buffer_size);
      i = (unsigned long int)0;
      for( ; !(i >= buffer_size); i = i + 1ul)
        g_string_append_printf(msg_str_ptr, " %02X", (unsigned int)buffer[(signed long int)i]);
    }
  }
}

// gm_get_controller_name
// file ../gm.c line 239
const char * gm_get_controller_name(unsigned int controller)
{
  switch(controller)
  {
    case (unsigned int)0x00:
      return "Bank selection";
    case (unsigned int)0x01:
      return "Modulation";
    case (unsigned int)0x02:
      return "Breath";
    case (unsigned int)0x04:
      return "Foot";
    case (unsigned int)0x05:
      return "Portamento time";
    case (unsigned int)0x06:
      return "Data entry";
    case (unsigned int)0x07:
      return "Main volume";
    case (unsigned int)0x08:
      return "Balance";
    case (unsigned int)0x0A:
      return "Panpot";
    case (unsigned int)0x0B:
      return "Expression";
    case (unsigned int)0x0C:
      return "Effect1";
    case (unsigned int)0x0D:
      return "Effect2";
    case (unsigned int)0x10:
      return "General purpose 1";
    case (unsigned int)0x11:
      return "General purpose 2";
    case (unsigned int)0x12:
      return "General purpose 3";
    case (unsigned int)0x13:
      return "General purpose 4";
    case (unsigned int)0x20:
      return "Bank selection (LSB)";
    case (unsigned int)0x21:
      return "Modulation (LSB)";
    case (unsigned int)0x22:
      return "Breath (LSB)";
    case (unsigned int)0x24:
      return "Foot (LSB)";
    case (unsigned int)0x25:
      return "Portamento time (LSB)";
    case (unsigned int)0x26:
      return "Data entry (LSB)";
    case (unsigned int)0x27:
      return "Main volume (LSB)";
    case (unsigned int)0x28:
      return "Balance (LSB)";
    case (unsigned int)0x2A:
      return "Panpot (LSB)";
    case (unsigned int)0x2B:
      return "Expression (LSB)";
    case (unsigned int)0x2C:
      return "Effect1 (LSB)";
    case (unsigned int)0x2D:
      return "Effect2 (LSB)";
    case (unsigned int)0x30:
      return "General purpose 1 (LSB)";
    case (unsigned int)0x31:
      return "General purpose 2 (LSB)";
    case (unsigned int)0x32:
      return "General purpose 3 (LSB)";
    case (unsigned int)0x33:
      return "General purpose 4 (LSB)";
    case (unsigned int)0x40:
      return "Sustain pedal";
    case (unsigned int)0x41:
      return "Portamento";
    case (unsigned int)0x42:
      return "Sostenuto";
    case (unsigned int)0x43:
      return "Soft pedal";
    case (unsigned int)0x44:
      return "Legato foot switch";
    case (unsigned int)0x45:
      return "Hold2";
    case (unsigned int)0x46:
      return "SC1 Sound Variation";
    case (unsigned int)0x47:
      return "SC2 Timbre";
    case (unsigned int)0x48:
      return "SC3 Release Time";
    case (unsigned int)0x49:
      return "SC4 Attack Time";
    case (unsigned int)0x4A:
      return "SC5 Brightness";
    case (unsigned int)0x4B:
      return "SC6";
    case (unsigned int)0x4C:
      return "SC7";
    case (unsigned int)0x4D:
      return "SC8";
    case (unsigned int)0x4E:
      return "SC9";
    case (unsigned int)0x4F:
      return "SC10";
    case (unsigned int)0x50:
      return "General purpose 5";
    case (unsigned int)0x51:
      return "General purpose 6";
    case (unsigned int)0x52:
      return "General purpose 7";
    case (unsigned int)0x53:
      return "General purpose 8";
    case (unsigned int)0x54:
      return "Portamento control";
    case (unsigned int)0x5B:
      return "E1 Reverb Depth";
    case (unsigned int)0x5C:
      return "E2 Tremolo Depth";
    case (unsigned int)0x5D:
      return "E3 Chorus Depth";
    case (unsigned int)0x5E:
      return "E4 Detune Depth";
    case (unsigned int)0x5F:
      return "E5 Phaser Depth";
    case (unsigned int)0x60:
      return "Data Increment";
    case (unsigned int)0x61:
      return "Data Decrement";
    case (unsigned int)0x62:
      return "Non-registered parameter number (LSB)";
    case (unsigned int)0x63:
      return "Non-registered parameter number (MSB)";
    case (unsigned int)0x64:
      return "Registered parameter number (LSB)";
    case (unsigned int)0x65:
      return "Registered parameter number (MSB)";
    default:
      return (const char *)(void *)0;
  }
}

// gm_get_drum_name
// file ../gm.c line 215
const char * gm_get_drum_name(unsigned char note)
{
  if((signed int)note >= 35 && !((unsigned long int)note >= 82ul))
    return g_gm_drum_names[(signed long int)((signed int)note - 35)];

  else
    return (const char *)(void *)0;
}

// gm_get_instrument_name
// file ../gm.c line 230
const char * gm_get_instrument_name(unsigned char program)
{
  /* assertion program < sizeof(g_gm_instrument_names)/sizeof(g_gm_instrument_names[0]) */
  assert((unsigned long int)program < sizeof(const char *[128l]) /*1024ul*/  / sizeof(const char *) /*8ul*/ );
  return g_gm_instrument_names[(signed long int)program];
}

// jack_destroy_pending_events
// file ../jack.c line 533
void jack_destroy_pending_events()
{
  struct jack_midi_event_buffer *event_buffer;
  struct list_head *node_ptr;
  signed int return_value_list_empty$1;
  struct jack_midi_event_buffer *tmp_statement_expression$2;
  do
  {
    return_value_list_empty$1=list_empty$link1(&g_jack_midi_events_pending);
    if(!(return_value_list_empty$1 == 0))
      break;

    node_ptr = g_jack_midi_events_pending.next;
    list_del$link1(node_ptr);
    const struct list_head *jack_destroy_pending_events$$1$$1$$1$$__mptr = node_ptr;
    tmp_statement_expression$2 = (struct jack_midi_event_buffer *)((char *)jack_destroy_pending_events$$1$$1$$1$$__mptr - (signed long int)0ul);
    event_buffer = tmp_statement_expression$2;
    rtsafe_memory_deallocate((void *)event_buffer);
  }
  while((_Bool)1);
  signed int return_value_list_empty$3;
  struct jack_midi_event_buffer *tmp_statement_expression$4;
  do
  {
    return_value_list_empty$3=list_empty$link1(&g_jack_midi_events_pending_rt);
    if(!(return_value_list_empty$3 == 0))
      break;

    node_ptr = g_jack_midi_events_pending_rt.next;
    list_del$link1(node_ptr);
    const struct list_head *__mptr = node_ptr;
    tmp_statement_expression$4 = (struct jack_midi_event_buffer *)((char *)__mptr - (signed long int)0ul);
    event_buffer = tmp_statement_expression$4;
    rtsafe_memory_deallocate((void *)event_buffer);
  }
  while((_Bool)1);
}

// jack_init
// file ../jack.h line 27
signed int jack_init(const char *name)
{
  signed int ret;
  signed int return_value_rtsafe_memory_init$1;
  return_value_rtsafe_memory_init$1=rtsafe_memory_init((unsigned long int)(100 * 1024), (unsigned long int)100, (unsigned long int)1000, &g_memory);
  if(return_value_rtsafe_memory_init$1 == 0)
    log_msg(4, "RT-safe memory initialization failed.\n");

  else
  {
    INIT_LIST_HEAD$link1(&g_jack_midi_events_pending);
    INIT_LIST_HEAD$link1(&g_jack_midi_events_pending_rt);
    ret=pthread_mutex_init(&g_jack_midi_mutex, (const union anonymous$8 *)(void *)0);
    if(!(ret == 0))
      log_msg(4, "Cannot initialize mutex.\n");

    else
    {
      g_jack_midi_thread_exit = 0;
      ret=pthread_create(&g_jack_midi_tid, (const union pthread_attr_t *)(void *)0, jack_midi_thread, (void *)0);
      if(!(ret == 0))
        log_msg(4, "Cannot start JACK MIDI thread.\n");

      else
      {
        g_jack_client=jack_client_open(name, (enum JackOptions)JackNoStartServer, (enum JackStatus *)(void *)0);
        if(g_jack_client == ((struct _jack_client *)NULL))
          log_msg(4, "Cannot create JACK client.\n");

        else
        {
          ret=jack_set_process_callback(g_jack_client, jack_process, NULL);
          if(!(ret == 0))
            log_msg(4, "Cannot set JACK process callback.\n");

          else
          {
            g_jack_input_port=jack_port_register(g_jack_client, "midi_in", "8 bit raw midi", (unsigned long int)1, (unsigned long int)0);
            if(g_jack_input_port == ((struct _jack_port *)NULL))
              log_msg(4, "Failed to create input JACK MIDI port\n");

            else
            {
              ret=jack_activate(g_jack_client);
              if(!(ret == 0))
                log_msg(4, "Cannot activate JACK client.\n");

              else
                return (signed int)!(0 != 0);
            }
          }

        fail_close:
          ;
          jack_client_close(g_jack_client);
        }

      fail_stop_thread:
        ;
        jack_destroy_pending_events();
        pthread_mutex_lock(&g_jack_midi_mutex);
        g_jack_midi_thread_exit = (signed int)!(0 != 0);
        pthread_mutex_unlock(&g_jack_midi_mutex);
        pthread_join(g_jack_midi_tid, (void **)(void *)0);
      }

    fail_uninit_cond:
      ;
      pthread_mutex_destroy(&g_jack_midi_mutex);
    }

  fail_uninit_memory:
    ;
    rtsafe_memory_uninit(g_memory);
  }

fail:
  ;
  return 0;
}

// jack_midi_decode
// file ../jack.c line 133
signed int jack_midi_decode(unsigned char *buffer, unsigned long int buffer_size, struct _GString *msg_str_ptr, struct _GString *channel_str_ptr)
{
  unsigned long int i;
  unsigned int channel;
  unsigned int note;
  unsigned int velocity;
  const char *note_name;
  unsigned int octave;
  unsigned int controller;
  unsigned int value;
  const char *controller_name;
  signed int pitch;
  const char *drum_name;
  if(buffer_size == 1ul)
  {
    if(!((signed int)*buffer == 0xFE))
      goto __CPROVER_DUMP_L1;

    g_string_printf(msg_str_ptr, "Active sensing");
    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(buffer_size == 1ul)
    {
      if(!((signed int)*buffer == 0xF8))
        goto __CPROVER_DUMP_L2;

      g_string_printf(msg_str_ptr, "Timing Clock");
      return 0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(buffer_size == 3ul)
      {
        if(!((signed int)*buffer >> 4 == 0x08))
          goto __CPROVER_DUMP_L4;

        channel = (unsigned int)(((signed int)buffer[(signed long int)0] & 0x0F) + 1);
        /* assertion channel >= 1 && channel <= 16 */
        assert(channel >= (unsigned int)1 && channel <= (unsigned int)16);
        if(channel == 10u)
          return 0;

        note = (unsigned int)buffer[(signed long int)1];
        if(note >= 128u)
          goto unknown_event;

        velocity = (unsigned int)buffer[(signed long int)2];
        if(velocity >= 128u)
          goto unknown_event;

        note_name = g_note_names[(signed long int)(note % (unsigned int)12)];
        octave = note / (unsigned int)12 - (unsigned int)1;
        g_string_printf(channel_str_ptr, "%u", channel);
        g_string_printf(msg_str_ptr, "Note off, %s, octave %d, velocity %u", note_name, octave, velocity);
        return (signed int)!(0 != 0);
      }

      else
      {

      __CPROVER_DUMP_L4:
        ;
        if(buffer_size == 3ul)
        {
          if(!((signed int)*buffer >> 4 == 0x09))
            goto __CPROVER_DUMP_L10;

          channel = (unsigned int)(((signed int)buffer[(signed long int)0] & 0x0F) + 1);
          /* assertion channel >= 1 && channel <= 16 */
          assert(channel >= (unsigned int)1 && channel <= (unsigned int)16);
          note = (unsigned int)buffer[(signed long int)1];
          if(note >= 128u)
            goto unknown_event;

          velocity = (unsigned int)buffer[(signed long int)2];
          if(velocity >= 128u)
            goto unknown_event;

          note_name = g_note_names[(signed long int)(note % (unsigned int)12)];
          octave = note / (unsigned int)12 - (unsigned int)1;
          g_string_printf(channel_str_ptr, "%u", channel);
          if(channel == 10u)
            drum_name=gm_get_drum_name((unsigned char)note);

          else
            drum_name = (const char *)(void *)0;
          if(!(drum_name == ((const char *)NULL)))
          {
            if(velocity == 0u)
              return 0;

            g_string_printf(msg_str_ptr, "Drum: %s (%s, octave %d, velocity %u)", drum_name, note_name, octave, velocity);
          }

          else
            g_string_printf(msg_str_ptr, "Note on, %s, octave %d, velocity %u", note_name, octave, velocity);
          return (signed int)!(0 != 0);
        }

        else
        {

        __CPROVER_DUMP_L10:
          ;
          if(buffer_size == 3ul)
          {
            if(!((signed int)*buffer >> 4 == 0x0A))
              goto __CPROVER_DUMP_L11;

            channel = (unsigned int)(((signed int)buffer[(signed long int)0] & 0x0F) + 1);
            /* assertion channel >= 1 && channel <= 16 */
            assert(channel >= (unsigned int)1 && channel <= (unsigned int)16);
            note = (unsigned int)buffer[(signed long int)1];
            if(note >= 128u)
              goto unknown_event;

            velocity = (unsigned int)buffer[(signed long int)2];
            if(velocity >= 128u)
              goto unknown_event;

            note_name = g_note_names[(signed long int)(note % (unsigned int)12)];
            octave = note / (unsigned int)12 - (unsigned int)1;
            g_string_printf(channel_str_ptr, "%u", channel);
            g_string_printf(msg_str_ptr, "Polyphonic Key Pressure (Aftertouch), %s, octave %d, velocity %u", note_name, octave, velocity);
            return (signed int)!(0 != 0);
          }

          else
          {

          __CPROVER_DUMP_L11:
            ;
            if(buffer_size == 3ul)
            {
              if(!((signed int)*buffer >> 4 == 0x0B))
                goto __CPROVER_DUMP_L14;

              channel = (unsigned int)(((signed int)buffer[(signed long int)0] & 0x0F) + 1);
              /* assertion channel >= 1 && channel <= 16 */
              assert(channel >= (unsigned int)1 && channel <= (unsigned int)16);
              controller = (unsigned int)buffer[(signed long int)1];
              if(controller >= 128u)
                goto unknown_event;

              value = (unsigned int)buffer[(signed long int)2];
              if(value >= 128u)
                goto unknown_event;

              g_string_printf(channel_str_ptr, "%u", channel);
              controller_name=gm_get_controller_name(controller);
              if(!(controller_name == ((const char *)NULL)))
                g_string_printf(msg_str_ptr, "CC %s (%u), value %u", controller_name, controller, value);

              else
                g_string_printf(msg_str_ptr, "CC %u, value %u", controller, value);
              return (signed int)!(0 != 0);
            }

            else
            {

            __CPROVER_DUMP_L14:
              ;
              if(buffer_size == 2ul)
              {
                if((signed int)*buffer >> 4 == 0x0C)
                {
                  channel = (unsigned int)(((signed int)buffer[(signed long int)0] & 0x0F) + 1);
                  /* assertion channel >= 1 && channel <= 16 */
                  assert(channel >= (unsigned int)1 && channel <= (unsigned int)16);
                  value = (unsigned int)buffer[(signed long int)1];
                  if(value >= 128u)
                    goto unknown_event;

                  g_string_printf(channel_str_ptr, "%u", channel);
                  const char *return_value_gm_get_instrument_name$1;
                  return_value_gm_get_instrument_name$1=gm_get_instrument_name((unsigned char)value);
                  g_string_printf(msg_str_ptr, "Program change, %d (%s)", value, return_value_gm_get_instrument_name$1);
                  return (signed int)!(0 != 0);
                }

              }

              if(buffer_size == 3ul)
              {
                if(!((signed int)*buffer >> 4 == 0x0E))
                  goto __CPROVER_DUMP_L16;

                if((signed int)buffer[1l] >= 128)
                  goto __CPROVER_DUMP_L16;

                if((signed int)buffer[2l] >= 128)
                  goto __CPROVER_DUMP_L16;

                channel = (unsigned int)(((signed int)buffer[(signed long int)0] & 0x0F) + 1);
                /* assertion channel >= 1 && channel <= 16 */
                assert(channel >= (unsigned int)1 && channel <= (unsigned int)16);
                pitch = (signed int)buffer[(signed long int)1];
                pitch = pitch | (signed int)((unsigned int)buffer[(signed long int)2] << 7);
                pitch = pitch - 0x2000;
                g_string_printf(channel_str_ptr, "%u", channel);
                g_string_printf(msg_str_ptr, "Pitchwheel, %d", pitch);
                return (signed int)!(0 != 0);
              }

              else
              {

              __CPROVER_DUMP_L16:
                ;
                if(buffer_size >= 1ul)
                {
                  if(!((signed int)*buffer == 0xF0))
                    goto __CPROVER_DUMP_L17;

                  decode_sysex(buffer, buffer_size, msg_str_ptr);
                  return (signed int)!(0 != 0);
                }

                else
                {

                __CPROVER_DUMP_L17:
                  ;
                  if(buffer_size == 1ul)
                  {
                    if(!((signed int)*buffer == 0xFF))
                      goto unknown_event;

                    g_string_printf(msg_str_ptr, "Reset");
                    return (signed int)!(0 != 0);
                  }

                  else
                  {

                  unknown_event:
                    ;
                    g_string_printf(msg_str_ptr, "unknown midi event with size %u bytes:", (unsigned int)buffer_size);
                    i = (unsigned long int)0;
                    for( ; !(i >= buffer_size); i = i + 1ul)
                      g_string_append_printf(msg_str_ptr, " %02X", (unsigned int)buffer[(signed long int)i]);
                    return (signed int)!(0 != 0);
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

// jack_midi_thread
// file ../jack.c line 408
void * jack_midi_thread(void *context_ptr)
{
  struct jack_midi_event_buffer *event_buffer;
  struct list_head *node_ptr;
  struct _GtkListStore *list_store_ptr;
  struct _GtkWidget *child_ptr;
  struct _GtkTreeIter iter;
  struct _GString *time_str_ptr;
  struct _GString *msg_str_ptr;
  struct _GString *channel_str_ptr;
  struct _GObject *return_value_gtk_builder_get_object$1;
  return_value_gtk_builder_get_object$1=gtk_builder_get_object(g_builder, "list");
  unsigned long int return_value_gtk_widget_get_type$2;
  return_value_gtk_widget_get_type$2=gtk_widget_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$3;
  return_value_g_type_check_instance_cast$3=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_builder_get_object$1, return_value_gtk_widget_get_type$2);
  child_ptr = (struct _GtkWidget *)return_value_g_type_check_instance_cast$3;
  unsigned long int return_value_gtk_tree_view_get_type$4;
  return_value_gtk_tree_view_get_type$4=gtk_tree_view_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$5;
  return_value_g_type_check_instance_cast$5=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$4);
  struct _GtkTreeModel *return_value_gtk_tree_view_get_model$6;
  return_value_gtk_tree_view_get_model$6=gtk_tree_view_get_model((struct _GtkTreeView *)return_value_g_type_check_instance_cast$5);
  unsigned long int return_value_gtk_list_store_get_type$7;
  return_value_gtk_list_store_get_type$7=gtk_list_store_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$8;
  return_value_g_type_check_instance_cast$8=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_tree_view_get_model$6, return_value_gtk_list_store_get_type$7);
  list_store_ptr = (struct _GtkListStore *)return_value_g_type_check_instance_cast$8;
  signed int return_value_list_empty$9;
  struct jack_midi_event_buffer *tmp_statement_expression$10;
  signed int return_value_jack_midi_decode$11;
  unsigned long int return_value_gtk_tree_view_get_type$14;
  struct _GTypeInstance *return_value_g_type_check_instance_cast$15;
  unsigned long int return_value_gtk_tree_view_get_type$16;
  struct _GTypeInstance *return_value_g_type_check_instance_cast$17;
  struct _GtkTreeModel *return_value_gtk_tree_view_get_model$18;
  struct _GtkTreePath *return_value_gtk_tree_model_get_path$19;
  unsigned long int return_value_gtk_container_get_type$20;
  struct _GTypeInstance *return_value_g_type_check_instance_cast$21;
  do
  {

  loop:
    ;
    pthread_mutex_lock(&g_jack_midi_mutex);
    if(!(g_jack_midi_thread_exit == 0))
    {
      pthread_mutex_unlock(&g_jack_midi_mutex);
      return (void *)0;
    }

    rtsafe_memory_sleepy(g_memory);
    do
    {
      return_value_list_empty$9=list_empty$link1(&g_jack_midi_events_pending);
      if(!(return_value_list_empty$9 == 0))
        break;

      node_ptr = g_jack_midi_events_pending.prev;
      list_del$link1(node_ptr);
      const struct list_head *__mptr = node_ptr;
      tmp_statement_expression$10 = (struct jack_midi_event_buffer *)((char *)__mptr - (signed long int)0ul);
      event_buffer = tmp_statement_expression$10;
      if(g_midi_ignore == 0)
      {
        time_str_ptr=g_string_new("");
        channel_str_ptr=g_string_new("");
        msg_str_ptr=g_string_new("");
        return_value_jack_midi_decode$11=jack_midi_decode(event_buffer->buffer, event_buffer->buffer_size, msg_str_ptr, channel_str_ptr);
        if(!(return_value_jack_midi_decode$11 == 0))
        {
          gdk_threads_enter();
          if(g_row_count >= 2000)
          {
            unsigned long int return_value_gtk_tree_model_get_type$12;
            return_value_gtk_tree_model_get_type$12=gtk_tree_model_get_type();
            struct _GTypeInstance *return_value_g_type_check_instance_cast$13;
            return_value_g_type_check_instance_cast$13=g_type_check_instance_cast((struct _GTypeInstance *)list_store_ptr, return_value_gtk_tree_model_get_type$12);
            gtk_tree_model_get_iter_first((struct _GtkTreeModel *)return_value_g_type_check_instance_cast$13, &iter);
            gtk_list_store_remove(list_store_ptr, &iter);
          }

          gtk_list_store_append(list_store_ptr, &iter);
          gtk_list_store_set(list_store_ptr, &iter, 0, time_str_ptr->str, 1, channel_str_ptr->str, 2, msg_str_ptr->str, -1);
          return_value_gtk_tree_view_get_type$14=gtk_tree_view_get_type();
          return_value_g_type_check_instance_cast$15=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$14);
          return_value_gtk_tree_view_get_type$16=gtk_tree_view_get_type();
          return_value_g_type_check_instance_cast$17=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_tree_view_get_type$16);
          return_value_gtk_tree_view_get_model$18=gtk_tree_view_get_model((struct _GtkTreeView *)return_value_g_type_check_instance_cast$17);
          return_value_gtk_tree_model_get_path$19=gtk_tree_model_get_path(return_value_gtk_tree_view_get_model$18, &iter);
          gtk_tree_view_scroll_to_cell((struct _GtkTreeView *)return_value_g_type_check_instance_cast$15, return_value_gtk_tree_model_get_path$19, (struct _GtkTreeViewColumn *)(void *)0, (signed int)!(0 != 0), (float)0.0, (float)1.0);
          return_value_gtk_container_get_type$20=gtk_container_get_type();
          return_value_g_type_check_instance_cast$21=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_container_get_type$20);
          gtk_container_check_resize((struct _GtkContainer *)return_value_g_type_check_instance_cast$21);
          g_row_count = g_row_count + 1;
          gdk_threads_leave();
        }


      deallocate_strings:
        ;
        g_string_free(channel_str_ptr, (signed int)!(0 != 0));
        g_string_free(msg_str_ptr, (signed int)!(0 != 0));
        g_string_free(time_str_ptr, (signed int)!(0 != 0));
      }


    deallocate_event:
      ;
      rtsafe_memory_deallocate((void *)event_buffer);
    }
    while((_Bool)1);
    pthread_mutex_unlock(&g_jack_midi_mutex);
    usleep((unsigned int)10000);
  }
  while((_Bool)1);
}

// jack_process
// file ../jack.c line 72
signed int jack_process(unsigned int nframes, void *context)
{
  signed int ret;
  void *port_buf;
  struct _jack_midi_event in_event;
  unsigned int event_count;
  struct anonymous$4 pos;
  unsigned int i;
  struct jack_midi_event_buffer *event_buffer;
  port_buf=jack_port_get_buffer(g_jack_input_port, nframes);
  event_count=jack_midi_get_event_count(port_buf);
  jack_transport_query(g_jack_client, &pos);
  i = (unsigned int)0;
  for( ; !(i >= event_count); i = i + 1u)
  {
    jack_midi_event_get(&in_event, port_buf, i);
    void *return_value_rtsafe_memory_allocate$1;
    return_value_rtsafe_memory_allocate$1=rtsafe_memory_allocate(g_memory, sizeof(struct jack_midi_event_buffer) /*24ul*/  + in_event.size);
    event_buffer = (struct jack_midi_event_buffer *)return_value_rtsafe_memory_allocate$1;
    if(event_buffer == ((struct jack_midi_event_buffer *)NULL))
      log_msg(4, "Ignored midi event with size %u because memory allocation failed.\n", (unsigned int)in_event.size);

    else
    {
      memcpy((void *)event_buffer->buffer, (const void *)in_event.buffer, in_event.size);
      event_buffer->buffer_size = in_event.size;
      list_add(&event_buffer->siblings, &g_jack_midi_events_pending_rt);
    }
  }
  ret=pthread_mutex_trylock(&g_jack_midi_mutex);
  if(ret == 0)
  {
    list_splice_init(&g_jack_midi_events_pending_rt, &g_jack_midi_events_pending);
    ret=pthread_mutex_unlock(&g_jack_midi_mutex);
  }

  return 0;
}

// jack_uninit
// file ../jack.h line 30
void jack_uninit()
{
  jack_deactivate(g_jack_client);
  jack_client_close(g_jack_client);
  pthread_mutex_lock(&g_jack_midi_mutex);
  g_jack_midi_thread_exit = (signed int)!(0 != 0);
  pthread_mutex_unlock(&g_jack_midi_mutex);
  pthread_join(g_jack_midi_tid, (void **)(void *)0);
  jack_destroy_pending_events();
  pthread_mutex_destroy(&g_jack_midi_mutex);
  rtsafe_memory_uninit(g_memory);
}

// list_add
// file ../list.h line 104
static inline void list_add(struct list_head *new, struct list_head *head)
{
  __list_add$link1(new, head, head->next);
}

// list_add_tail
// file ../list.h line 117
static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
  __list_add(new, head->prev, head);
}

// list_del
// file ../list.h line 200
static inline void list_del(struct list_head *entry)
{
  __list_del(entry->prev, entry->next);
  entry->next = (struct list_head *)(void *)0x00100100;
  entry->prev = (struct list_head *)(void *)0x00200200;
}

// list_del$link1
// file ../list.h line 200
static inline void list_del$link1(struct list_head *entry$link1)
{
  __list_del$link1(entry$link1->prev, entry$link1->next);
  entry$link1->next = (struct list_head *)(void *)0x00100100;
  entry$link1->prev = (struct list_head *)(void *)0x00200200;
}

// list_empty
// file ../list.h line 292
static inline signed int list_empty(struct list_head *head)
{
  return (signed int)(head->next == head);
}

// list_empty$link1
// file ../list.h line 292
static inline signed int list_empty$link1(struct list_head *head$link1)
{
  return (signed int)(head$link1->next == head$link1);
}

// list_splice_init
// file ../list.h line 347
static inline void list_splice_init(struct list_head *list, struct list_head *head)
{
  signed int return_value_list_empty$1;
  return_value_list_empty$1=list_empty$link1(list);
  if(return_value_list_empty$1 == 0)
  {
    __list_splice(list, head);
    INIT_LIST_HEAD$link1(list);
  }

}

// log_msg
// file ../log.c line 30
void log_msg(signed int level, const char *format, ...)
{
  void **arglist = (void **)&format;
  vprintf(format, arglist);
  arglist = ((void **)NULL);
}

// main
// file ../main.c line 264
signed int main(signed int argc, char **argv)
{
  struct _GString *client_name_str_ptr;
  signed int i;
  signed int want_any = (signed int)!(0 != 0);
  signed int want_jack = 0;
  signed int jack_enabled = 0;
  signed int want_alsa = 0;
  signed int alsa_enabled = 0;
  signed int io_enabled = 0;
  signed int ret = 0;
  i = 1;
  for( ; !(i >= argc); i = i + 1)
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(argv[(signed long int)i], "--jack");
    if(return_value_strcmp$1 == 0)
    {
      want_jack = (signed int)!(0 != 0);
      want_any = 0;
    }

    else
    {
      signed int return_value_strcmp$2;
      return_value_strcmp$2=strcmp(argv[(signed long int)i], "--alsa");
      if(return_value_strcmp$2 == 0)
      {
        want_alsa = (signed int)!(0 != 0);
        want_any = 0;
      }

      else
      {
        signed int return_value_strcmp$3;
        return_value_strcmp$3=strcmp(argv[(signed long int)i], "--help");
        if(!(return_value_strcmp$3 == 0))
        {
          fprintf(stderr, "Unrecognized parameter \"%s\"\n", argv[(signed long int)i]);
          ret = 1;
        }

        fprintf(ret == 0 ? stdout : stderr, "Usage: %s [--jack] [--alsa]\n", argv[(signed long int)0]);
        exit(ret);
      }
    }
  }
  g_thread_init((void *)0);
  gdk_threads_init();
  gdk_threads_enter();
  gtk_init(&argc, &argv);
  path_init(argv[(signed long int)0]);
  create_mainwindow();
  client_name_str_ptr=g_string_new("");
  g_string_printf(client_name_str_ptr, "MIDI monitor");
  g_row_count = 0;
  if(!(want_any == 0) || !(want_jack == 0))
  {
    jack_enabled=jack_init(client_name_str_ptr->str);
    if(!(jack_enabled == 0))
    {
      g_printf("JACK MIDI enabled\n");
      io_enabled = (signed int)!(0 != 0);
    }

    else
      if(!(want_jack == 0))
        goto failed_jack;

  }

  if(io_enabled == 0 && !(want_any == 0) || !(want_alsa == 0))
  {
    alsa_enabled=alsa_init(client_name_str_ptr->str);
    if(!(alsa_enabled == 0))
    {
      g_printf("ALSA MIDI enabled\n");
      io_enabled = (signed int)!(0 != 0);
    }

    else
      if(!(want_alsa == 0))
        goto failed_alsa;

  }

  if(!(io_enabled == 0))
  {
    signal(2, sigint_handler);
    signal(15, sigint_handler);
    gtk_main();
  }

  if(!(alsa_enabled == 0))
    alsa_uninit();


failed_alsa:
  ;
  if(!(jack_enabled == 0))
    jack_uninit();


failed_jack:
  ;
  gdk_threads_leave();
  path_init(argv[(signed long int)0]);
  return ret;
}

// on_about_clicked
// file ../about.c line 386
void on_about_clicked(struct _GtkAction *action, struct _GtkWidget *window)
{
  unsigned long int return_value_gtk_about_dialog_get_type$1;
  return_value_gtk_about_dialog_get_type$1=gtk_about_dialog_get_type();
  void *return_value_g_object_new$2;
  return_value_g_object_new$2=g_object_new(return_value_gtk_about_dialog_get_type$1, "name", (const void *)"GMIDImonitor", (const void *)"version", (const void *)"3.6", (const void *)"copyright", (const void *)"Copyright © 2005,2006,2007,2008,2011 Nedko Arnaudov", (const void *)"authors", (const void *)authors, (const void *)"comments", (const void *)"GTK MIDI monitor.", (const void *)"website", (const void *)"http://home.gna.org/gmidimonitor/", (const void *)"license", license, (void *)0);
  static struct _GtkWidget *about = (struct _GtkWidget *)(void *)0;
  about = (struct _GtkWidget *)return_value_g_object_new$2;
  g_signal_connect_data((void *)about, "response", (void (*)(void))gtk_widget_destroy, (void *)0, (void (*)(void *, struct _GClosure *))(void *)0, (enum anonymous$3)0);
  unsigned long int return_value_gtk_window_get_type$3;
  return_value_gtk_window_get_type$3=gtk_window_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$4;
  return_value_g_type_check_instance_cast$4=g_type_check_instance_cast((struct _GTypeInstance *)about, return_value_gtk_window_get_type$3);
  unsigned long int return_value_gtk_window_get_type$5;
  return_value_gtk_window_get_type$5=gtk_window_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$6;
  return_value_g_type_check_instance_cast$6=g_type_check_instance_cast((struct _GTypeInstance *)g_main_window_ptr, return_value_gtk_window_get_type$5);
  gtk_window_set_transient_for((struct _GtkWindow *)return_value_g_type_check_instance_cast$4, (struct _GtkWindow *)return_value_g_type_check_instance_cast$6);
  gtk_widget_show(about);
}

// on_button_stop_toggled
// file ../main.c line 156
void on_button_stop_toggled(struct _GtkAction *action_ptr, struct _GtkWidget *widget_ptr)
{
  struct _GtkWidget *child_ptr;
  struct _GObject *return_value_gtk_builder_get_object$1;
  return_value_gtk_builder_get_object$1=gtk_builder_get_object(g_builder, "button_stop");
  unsigned long int return_value_gtk_widget_get_type$2;
  return_value_gtk_widget_get_type$2=gtk_widget_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$3;
  return_value_g_type_check_instance_cast$3=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_builder_get_object$1, return_value_gtk_widget_get_type$2);
  child_ptr = (struct _GtkWidget *)return_value_g_type_check_instance_cast$3;
  unsigned long int return_value_gtk_toggle_tool_button_get_type$4;
  return_value_gtk_toggle_tool_button_get_type$4=gtk_toggle_tool_button_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$5;
  return_value_g_type_check_instance_cast$5=g_type_check_instance_cast((struct _GTypeInstance *)child_ptr, return_value_gtk_toggle_tool_button_get_type$4);
  signed int return_value_gtk_toggle_tool_button_get_active$6;
  return_value_gtk_toggle_tool_button_get_active$6=gtk_toggle_tool_button_get_active((struct _GtkToggleToolButton *)return_value_g_type_check_instance_cast$5);
  if(!(return_value_gtk_toggle_tool_button_get_active$6 == 0))
    g_midi_ignore = (signed int)!(0 != 0);

  else
    g_midi_ignore = 0;
}

// on_clear_clicked
// file ../main.c line 174
void on_clear_clicked(struct _GtkButton *button, void *user_data)
{
  struct _GObject *return_value_gtk_builder_get_object$1;
  return_value_gtk_builder_get_object$1=gtk_builder_get_object(g_builder, "list");
  unsigned long int return_value_gtk_tree_view_get_type$2;
  return_value_gtk_tree_view_get_type$2=gtk_tree_view_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$3;
  return_value_g_type_check_instance_cast$3=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_builder_get_object$1, return_value_gtk_tree_view_get_type$2);
  struct _GtkTreeModel *return_value_gtk_tree_view_get_model$4;
  return_value_gtk_tree_view_get_model$4=gtk_tree_view_get_model((struct _GtkTreeView *)return_value_g_type_check_instance_cast$3);
  unsigned long int return_value_gtk_list_store_get_type$5;
  return_value_gtk_list_store_get_type$5=gtk_list_store_get_type();
  struct _GTypeInstance *return_value_g_type_check_instance_cast$6;
  return_value_g_type_check_instance_cast$6=g_type_check_instance_cast((struct _GTypeInstance *)return_value_gtk_tree_view_get_model$4, return_value_gtk_list_store_get_type$5);
  gtk_list_store_clear((struct _GtkListStore *)return_value_g_type_check_instance_cast$6);
  g_row_count = 0;
}

// path_check_initialization
// file ../path.c line 49
static void path_check_initialization()
{
  if(pszExecutable == ((char *)NULL) || pszPathToExecutable == ((char *)NULL))
  {
    g_log((char *)0, (enum anonymous$12)G_LOG_LEVEL_WARNING, "path_init() not called.");
    exit(1);
  }

}

// path_get_data_filename
// file ../path.h line 33
char * path_get_data_filename(const char *filename)
{
  char *full_path;
  struct stat st;
  path_check_initialization();
  full_path=g_strdup_printf("%s/../%s", pszPathToExecutable, filename);
  signed int return_value_stat$1;
  return_value_stat$1=stat(full_path, &st);
  if(return_value_stat$1 == 0)
    return full_path;

  else
  {
    g_free((void *)full_path);
    full_path=g_strdup_printf("/usr/share/gmidimonitor/%s", filename);
    signed int return_value_stat$2;
    return_value_stat$2=stat(full_path, &st);
    if(return_value_stat$2 == 0)
      return full_path;

    else
    {
      g_free((void *)full_path);
      return (char *)(void *)0;
    }
  }
}

// path_init
// file ../path.h line 29
void path_init(const char *argv0)
{
  pszExecutable=g_path_get_basename(argv0);
  pszPathToExecutable=g_path_get_dirname(argv0);
}

// path_uninit
// file ../path.c line 90
void path_uninit()
{
  path_check_initialization();
  g_free((void *)pszExecutable);
  g_free((void *)pszPathToExecutable);
}

// rtsafe_memory_allocate
// file ../memory_atomic.c line 302
void * rtsafe_memory_allocate(void *handle_ptr, unsigned long int size)
{
  void **data_ptr;
  unsigned long int i;
  size = size + sizeof(void *) /*8ul*/ ;
  i = (unsigned long int)0;
  for( ; !(i >= ((struct rtsafe_memory *)handle_ptr)->pools_count); i = i + 1ul)
    if((((struct rtsafe_memory *)handle_ptr)->pools + (signed long int)i)->size >= size)
    {
      void *return_value_rtsafe_memory_pool_allocate$1;
      return_value_rtsafe_memory_pool_allocate$1=rtsafe_memory_pool_allocate((((struct rtsafe_memory *)handle_ptr)->pools + (signed long int)i)->pool);
      data_ptr = (void **)return_value_rtsafe_memory_pool_allocate$1;
      if(data_ptr == ((void **)NULL))
        return NULL;

      *data_ptr = (((struct rtsafe_memory *)handle_ptr)->pools + (signed long int)i)->pool;
      return (void *)(data_ptr + (signed long int)1);
    }

  log_msg(2, "Data size is too big\n");
  return NULL;
}

// rtsafe_memory_deallocate
// file ../memory_atomic.c line 351
void rtsafe_memory_deallocate(void *data)
{
  rtsafe_memory_pool_deallocate(*((void **)data - (signed long int)1), (void *)((void **)data - (signed long int)1));
}

// rtsafe_memory_init
// file ../memory_atomic.c line 205
signed int rtsafe_memory_init(unsigned long int max_size, unsigned long int prealloc_min, unsigned long int prealloc_max, void **handle_ptr)
{
  unsigned long int i;
  unsigned long int size;
  struct rtsafe_memory *memory_ptr;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct rtsafe_memory) /*16ul*/ );
  memory_ptr = (struct rtsafe_memory *)return_value_malloc$1;
  void *return_value_malloc$2;
  if(!(memory_ptr == ((struct rtsafe_memory *)NULL)))
  {
    size = (unsigned long int)1024;
    memory_ptr->pools_count = (unsigned long int)1;
    while(!(size << memory_ptr->pools_count >= 100ul + max_size))
    {
      memory_ptr->pools_count = memory_ptr->pools_count + 1ul;
      if(memory_ptr->pools_count >= 65ul)
      {
        /* assertion 0 */
        assert(0 != 0);
        goto fail_free;
      }

    }
    return_value_malloc$2=malloc(memory_ptr->pools_count * sizeof(struct rtsafe_memory_pool_generic) /*16ul*/ );
    memory_ptr->pools = (struct rtsafe_memory_pool_generic *)return_value_malloc$2;
    if(!(memory_ptr->pools == ((struct rtsafe_memory_pool_generic *)NULL)))
    {
      size = (unsigned long int)1024;
      i = (unsigned long int)0;
      for( ; !(i >= memory_ptr->pools_count); i = i + 1ul)
      {
        (memory_ptr->pools + (signed long int)i)->size = size - (unsigned long int)100;
        signed int return_value_rtsafe_memory_pool_create$3;
        return_value_rtsafe_memory_pool_create$3=rtsafe_memory_pool_create((memory_ptr->pools + (signed long int)i)->size, prealloc_min, prealloc_max, &(memory_ptr->pools + (signed long int)i)->pool);
        if(return_value_rtsafe_memory_pool_create$3 == 0)
        {
          while(i >= 1ul)
          {
            i = i - 1ul;
            rtsafe_memory_pool_destroy((memory_ptr->pools + (signed long int)i)->pool);
          }
          goto fail_free_pools;
        }

        size = size << 1;
      }
      *handle_ptr = (void *)memory_ptr;
      return (signed int)!(0 != 0);

    fail_free_pools:
      ;
      free((void *)memory_ptr->pools);
    }


  fail_free:
    ;
    free((void *)memory_ptr);
  }


fail:
  ;
  return 0;
}

// rtsafe_memory_pool_allocate
// file ../memory_atomic.c line 143
void * rtsafe_memory_pool_allocate(void *pool_handle)
{
  struct list_head *node_ptr;
  signed int return_value_list_empty$1;
  return_value_list_empty$1=list_empty(&((struct rtsafe_memory_pool *)pool_handle)->unused);
  if(!(return_value_list_empty$1 == 0))
    return (void *)0;

  else
  {
    node_ptr = ((struct rtsafe_memory_pool *)pool_handle)->unused.next;
    list_del(node_ptr);
    ((struct rtsafe_memory_pool *)pool_handle)->unused_count = ((struct rtsafe_memory_pool *)pool_handle)->unused_count - 1u;
    ((struct rtsafe_memory_pool *)pool_handle)->used_count = ((struct rtsafe_memory_pool *)pool_handle)->used_count + 1u;
    return (void *)(node_ptr + (signed long int)1);
  }
}

// rtsafe_memory_pool_allocate_sleepy
// file ../memory_atomic.c line 173
void * rtsafe_memory_pool_allocate_sleepy(void *pool_handle)
{
  void *data;
  do
  {
    rtsafe_memory_pool_sleepy(pool_handle);
    data=rtsafe_memory_pool_allocate(pool_handle);
  }
  while(data == NULL);
  return data;
}

// rtsafe_memory_pool_create
// file ../memory_atomic.c line 49
signed int rtsafe_memory_pool_create(unsigned long int data_size, unsigned long int min_preallocated, unsigned long int max_preallocated, void **pool_handle_ptr)
{
  struct rtsafe_memory_pool *pool_ptr;
  /* assertion min_preallocated <= max_preallocated */
  assert(min_preallocated <= max_preallocated);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct rtsafe_memory_pool) /*72ul*/ );
  pool_ptr = (struct rtsafe_memory_pool *)return_value_malloc$1;
  if(pool_ptr == ((struct rtsafe_memory_pool *)NULL))
    return 0;

  else
  {
    pool_ptr->data_size = data_size;
    pool_ptr->min_preallocated = min_preallocated;
    pool_ptr->max_preallocated = max_preallocated;
    INIT_LIST_HEAD(&pool_ptr->used);
    pool_ptr->used_count = (unsigned int)0;
    INIT_LIST_HEAD(&pool_ptr->unused);
    pool_ptr->unused_count = (unsigned int)0;
    rtsafe_memory_pool_sleepy((void *)pool_ptr);
    *pool_handle_ptr = (void *)pool_ptr;
    return (signed int)!(0 != 0);
  }
}

// rtsafe_memory_pool_deallocate
// file ../memory_atomic.c line 163
void rtsafe_memory_pool_deallocate(void *pool_handle, void *data)
{
  list_add_tail((struct list_head *)data - (signed long int)1, &((struct rtsafe_memory_pool *)pool_handle)->unused);
  ((struct rtsafe_memory_pool *)pool_handle)->used_count = ((struct rtsafe_memory_pool *)pool_handle)->used_count - 1u;
  ((struct rtsafe_memory_pool *)pool_handle)->unused_count = ((struct rtsafe_memory_pool *)pool_handle)->unused_count + 1u;
}

// rtsafe_memory_pool_destroy
// file ../memory_atomic.c line 84
void rtsafe_memory_pool_destroy(void *pool_handle)
{
  struct list_head *node_ptr;
  /* assertion ((struct rtsafe_memory_pool *)pool_handle)->used_count == 0 */
  assert(((struct rtsafe_memory_pool *)pool_handle)->used_count == (unsigned int)0);
  signed int return_value_list_empty$1;
  return_value_list_empty$1=list_empty(&((struct rtsafe_memory_pool *)pool_handle)->used);
  /* assertion list_empty(&((struct rtsafe_memory_pool *)pool_handle)->used) */
  assert(return_value_list_empty$1 != 0);
  while(!(((struct rtsafe_memory_pool *)pool_handle)->unused_count == 0u))
  {
    signed int return_value_list_empty$2;
    return_value_list_empty$2=list_empty(&((struct rtsafe_memory_pool *)pool_handle)->unused);
    /* assertion !list_empty(&((struct rtsafe_memory_pool *)pool_handle)->unused) */
    assert(!(return_value_list_empty$2 != 0));
    node_ptr = ((struct rtsafe_memory_pool *)pool_handle)->unused.next;
    list_del(node_ptr);
    ((struct rtsafe_memory_pool *)pool_handle)->unused_count = ((struct rtsafe_memory_pool *)pool_handle)->unused_count - 1u;
    free((void *)node_ptr);
  }
  signed int return_value_list_empty$3;
  return_value_list_empty$3=list_empty(&((struct rtsafe_memory_pool *)pool_handle)->unused);
  /* assertion list_empty(&((struct rtsafe_memory_pool *)pool_handle)->unused) */
  assert(return_value_list_empty$3 != 0);
  free((void *)(struct rtsafe_memory_pool *)pool_handle);
}

// rtsafe_memory_pool_sleepy
// file ../memory_atomic.c line 111
void rtsafe_memory_pool_sleepy(void *pool_handle)
{
  struct list_head *node_ptr;
  while(!((unsigned long int)((struct rtsafe_memory_pool *)pool_handle)->unused_count >= ((struct rtsafe_memory_pool *)pool_handle)->min_preallocated))
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct list_head) /*16ul*/  + ((struct rtsafe_memory_pool *)pool_handle)->data_size);
    node_ptr = (struct list_head *)return_value_malloc$1;
    if(node_ptr == ((struct list_head *)NULL))
      goto __CPROVER_DUMP_L5;

    list_add_tail(node_ptr, &((struct rtsafe_memory_pool *)pool_handle)->unused);
    ((struct rtsafe_memory_pool *)pool_handle)->unused_count = ((struct rtsafe_memory_pool *)pool_handle)->unused_count + 1u;
  }
  while(!(((struct rtsafe_memory_pool *)pool_handle)->max_preallocated >= (unsigned long int)((struct rtsafe_memory_pool *)pool_handle)->unused_count))
  {
    signed int return_value_list_empty$2;
    return_value_list_empty$2=list_empty(&((struct rtsafe_memory_pool *)pool_handle)->unused);
    /* assertion !list_empty(&((struct rtsafe_memory_pool *)pool_handle)->unused) */
    assert(!(return_value_list_empty$2 != 0));
    node_ptr = ((struct rtsafe_memory_pool *)pool_handle)->unused.next;
    list_del(node_ptr);
    ((struct rtsafe_memory_pool *)pool_handle)->unused_count = ((struct rtsafe_memory_pool *)pool_handle)->unused_count - 1u;
    free((void *)node_ptr);
  }

__CPROVER_DUMP_L5:
  ;
}

// rtsafe_memory_sleepy
// file ../memory_atomic.c line 339
void rtsafe_memory_sleepy(void *handle_ptr)
{
  unsigned int i = (unsigned int)0;
  for( ; !((unsigned long int)i >= ((struct rtsafe_memory *)handle_ptr)->pools_count); i = i + 1u)
    rtsafe_memory_pool_sleepy((((struct rtsafe_memory *)handle_ptr)->pools + (signed long int)i)->pool);
}

// rtsafe_memory_uninit
// file ../memory_atomic.c line 283
void rtsafe_memory_uninit(void *handle_ptr)
{
  unsigned int i = (unsigned int)0;
  for( ; !((unsigned long int)i >= ((struct rtsafe_memory *)handle_ptr)->pools_count); i = i + 1u)
    rtsafe_memory_pool_destroy((((struct rtsafe_memory *)handle_ptr)->pools + (signed long int)i)->pool);
  free((void *)((struct rtsafe_memory *)handle_ptr)->pools);
  free((void *)(struct rtsafe_memory *)handle_ptr);
}

// sigint_handler
// file ../main.c line 257
static void sigint_handler(signed int i)
{
  gtk_main_quit();
}

