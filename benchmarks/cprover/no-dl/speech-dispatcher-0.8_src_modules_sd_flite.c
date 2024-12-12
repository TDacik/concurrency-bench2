// #anon_enum_SPD_AUDIO_LE=0_SPD_AUDIO_BE=1
// file ../../include/spd_audio_plugin.h line 34
enum anonymous_11 { SPD_AUDIO_LE=0, SPD_AUDIO_BE=1 };

// #anon_enum_SPD_CAP_NONE=0_SPD_CAP_SPELL=1_SPD_CAP_ICON=2
// file ../../include/speechd_types.h line 32
enum anonymous_8 { SPD_CAP_NONE=0, SPD_CAP_SPELL=1, SPD_CAP_ICON=2 };

// #anon_enum_SPD_IMPORTANT=1_SPD_MESSAGE=2_SPD_TEXT=3_SPD_NOTIFICATION=4_SPD_PROGRESS=5
// file ../../include/speechd_types.h line 65
enum anonymous_4 { SPD_IMPORTANT=1, SPD_MESSAGE=2, SPD_TEXT=3, SPD_NOTIFICATION=4, SPD_PROGRESS=5 };

// #anon_enum_SPD_MALE1=1_SPD_MALE2=2_SPD_MALE3=3_SPD_FEMALE1=4_SPD_FEMALE2=5_SPD_FEMALE3=6_SPD_CHILD_MALE=7_SPD_CHILD_FEMALE=8
// file ../../include/speechd_types.h line 43
enum anonymous_5 { SPD_MALE1=1, SPD_MALE2=2, SPD_MALE3=3, SPD_FEMALE1=4, SPD_FEMALE2=5, SPD_FEMALE3=6, SPD_CHILD_MALE=7, SPD_CHILD_FEMALE=8 };

// #anon_enum_SPD_MSGTYPE_TEXT=0_SPD_MSGTYPE_SOUND_ICON=1_SPD_MSGTYPE_CHAR=2_SPD_MSGTYPE_KEY=3_SPD_MSGTYPE_SPELL=99
// file ../../include/speechd_types.h line 98
enum anonymous_14 { SPD_MSGTYPE_TEXT=0, SPD_MSGTYPE_SOUND_ICON=1, SPD_MSGTYPE_CHAR=2, SPD_MSGTYPE_KEY=3, SPD_MSGTYPE_SPELL=99 };

// #anon_enum_SPD_PUNCT_ALL=0_SPD_PUNCT_NONE=1_SPD_PUNCT_SOME=2
// file ../../include/speechd_types.h line 26
enum anonymous_6 { SPD_PUNCT_ALL=0, SPD_PUNCT_NONE=1, SPD_PUNCT_SOME=2 };

// #anon_enum_SPD_SPELL_OFF=0_SPD_SPELL_ON=1
// file ../../include/speechd_types.h line 38
enum anonymous_7 { SPD_SPELL_OFF=0, SPD_SPELL_ON=1 };

// tag-#anon#ST[*{S8}_S8_'name'||*{S8}_S8_'language'||*{S8}_S8_'variant'|]
// file ../../include/speechd_types.h line 54
struct anonymous_0;

// tag-#anon#ST[*{cS8}_cS8_'name'||*{V}_V_'address'|]
// file /usr/include/ltdl.h line 92
struct anonymous_13;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_15;

// tag-#anon#ST[ARR2{S32}_S32_'pc'||ARR2{S32}_S32_'cp'|]
// file module_utils.h line 156
struct anonymous_16;

// tag-#anon#ST[S32'bits'||S32'num_channels'||S32'sample_rate'||S32'num_samples'||*{S16}_S16_'samples'|]
// file ../../include/spd_audio_plugin.h line 37
struct anonymous_10;

// tag-#anon#ST[S32'rate'||S32'pitch'||S32'volume'||EN#anon_enum_SPD_PUNCT_ALL=0_SPD_PUNCT_NONE=1_SPD_PUNCT_SOME=2#{U32}_U32_'punctuation_mode'||EN#anon_enum_SPD_SPELL_OFF=0_SPD_SPELL_ON=1#{U32}_U32_'spelling_mode'||EN#anon_enum_SPD_CAP_NONE=0_SPD_CAP_SPELL=1_SPD_CAP_ICON=2#{U32}_U32_'cap_let_recogn'||EN#anon_enum_SPD_MALE1=1_SPD_MALE2=2_SPD_MALE3=3_SPD_FEMALE1=4_SPD_FEMALE2=5_SPD_FEMALE3=6_SPD_CHILD_MALE=7_SPD_CHILD_FEMALE=8#{U32}_U32_'voice_type'||U32'_pad0'||SYM#tag-#anon#ST[*{S8}_S8_'name'||*{S8}_S8_'language'||*{S8}_S8_'variant'|]#'voice'|]
// file ../../include/speechd_types.h line 106
struct anonymous_1;

// tag-#anon#ST[S32'volume'||EN#anon_enum_SPD_AUDIO_LE=0_SPD_AUDIO_BE=1#{U32}_U32_'format'||*{SYM#tag-spd_audio_plugin#}_SYM#tag-spd_audio_plugin#_'function'||*{V}_V_'private_data'||S32'working'||U32'_pad0'|]
// file ../../include/spd_audio_plugin.h line 49
struct anonymous_9;

// tag-#anon#ST[S64'value'||*{S8}_S8_'str'||*{*{S8}_S8_}_*{S8}_S8__'list'||F64'dvalue'|]
// file /usr/include/dotconf.h line 170
struct anonymous;

// tag-#anon#UN[ARR32{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous_17;

// tag-#anon#UN[F64'fval'||S64'ival'||*{V}_V_'vval'|]
// file /usr/include/flite/cst_val.h line 75
union anonymous_3;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_12;

// tag-#anon#UN[SYM#tag-cst_val_cons_struct#'cc'||SYM#tag-cst_val_atom_struct#'a'|]
// file /usr/include/flite/cst_val.h line 90
union anonymous_2;

// tag-_GError
// file /usr/include/glib-2.0/glib/gerror.h line 42
struct _GError;

// tag-_GHashTable
// file /usr/include/glib-2.0/glib/ghash.h line 37
struct _GHashTable;

// tag-_GString
// file /usr/include/glib-2.0/glib/gstring.h line 39
struct _GString;

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

// tag-command_t
// file /usr/include/dotconf.h line 116
struct command_t;

// tag-configfile_t
// file /usr/include/dotconf.h line 113
struct configfile_t;

// tag-configoption_t
// file /usr/include/dotconf.h line 114
struct configoption_t;

// tag-cst_features_struct
// file /usr/include/flite/cst_features.h line 53
struct cst_features_struct;

// tag-cst_featvalpair_struct
// file /usr/include/flite/cst_features.h line 47
struct cst_featvalpair_struct;

// tag-cst_utterance_struct
// file /usr/include/flite/cst_item.h line 48
struct cst_utterance_struct;

// tag-cst_val_atom_struct
// file /usr/include/flite/cst_val.h line 62
struct cst_val_atom_struct;

// tag-cst_val_cons_struct
// file /usr/include/flite/cst_val.h line 57
struct cst_val_cons_struct;

// tag-cst_val_struct
// file /usr/include/flite/cst_val.h line 58
struct cst_val_struct;

// tag-cst_voice_struct
// file /usr/include/flite/cst_voice.h line 50
struct cst_voice_struct;

// tag-cst_wave_struct
// file /usr/include/flite/cst_wave.h line 50
struct cst_wave_struct;

// tag-lt__advise
// file /usr/include/libltdl/lt_dlloader.h line 41
struct lt__advise;

// tag-lt__handle
// file /usr/include/ltdl.h line 50
struct lt__handle;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-spd_audio_plugin
// file ../../include/spd_audio_plugin.h line 47
struct spd_audio_plugin;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// Debug_cb
// file flite.c line 42
const char * Debug_cb(struct command_t *cmd, void *ctx);
// ECapLetRecogn2str
// file fdsetconv.c line 163
char * ECapLetRecogn2str(enum anonymous_8 recogn);
// EPunctMode2str
// file fdsetconv.c line 94
char * EPunctMode2str(enum anonymous_6 punct);
// ESpellMode2str
// file fdsetconv.c line 131
char * ESpellMode2str(enum anonymous_7 spell);
// EVoice2str
// file fdsetconv.c line 32
char * EVoice2str(enum anonymous_5 voice);
// FliteDelimiters_cb
// file flite.c line 72
const char * FliteDelimiters_cb(struct command_t *cmd, void *ctx);
// FliteMaxChunkLength_cb
// file flite.c line 71
const char * FliteMaxChunkLength_cb(struct command_t *cmd, void *ctx);
// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// _flite_speak
// file flite.c line 260
static void * _flite_speak(void *nothing);
// bindtextdomain
// file /usr/include/libintl.h line 86
extern char * bindtextdomain(const char *, const char *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
// delete_wave
// file /usr/include/flite/cst_wave.h line 69
void delete_wave(struct cst_wave_struct *);
// do_audio
// file module_utils.h line 198
char * do_audio(void);
// do_char
// file module_utils.h line 192
char * do_char(void);
// do_debug
// file module_utils.h line 200
char * do_debug(char *cmd_buf);
// do_key
// file module_utils.h line 193
char * do_key(void);
// do_list_voices
// file module_utils.h line 196
char * do_list_voices(void);
// do_loglevel
// file module_utils.h line 199
char * do_loglevel(void);
// do_message
// file module_utils.c line 43
char * do_message(enum anonymous_14 msgtype);
// do_pause
// file module_utils.h line 195
void do_pause(void);
// do_quit
// file module_utils.h line 201
void do_quit(void);
// do_set
// file module_utils.h line 197
char * do_set(void);
// do_sound_icon
// file module_utils.h line 191
char * do_sound_icon(void);
// do_speak
// file module_utils.h line 190
char * do_speak(void);
// do_stop
// file module_utils.h line 194
void do_stop(void);
// dotconf_cleanup
// file /usr/include/dotconf.h line 183
void dotconf_cleanup(struct configfile_t *);
// dotconf_command_loop
// file /usr/include/dotconf.h line 186
signed int dotconf_command_loop(struct configfile_t *);
// dotconf_create
// file /usr/include/dotconf.h line 179
struct configfile_t * dotconf_create(char *, const struct configoption_t *, void *, unsigned long int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feat_set_float
// file /usr/include/flite/cst_features.h line 80
void feat_set_float(struct cst_features_struct *, const char *, float);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// flite_init
// file /usr/include/flite/flite.h line 72
signed int flite_init();
// flite_set_pitch
// file flite.c line 410
static void flite_set_pitch(signed int pitch);
// flite_set_rate
// file flite.c line 392
static void flite_set_rate(signed int rate);
// flite_set_volume
// file flite.c line 404
static void flite_set_volume(signed int volume);
// flite_strip_silence
// file flite.c line 241
static void flite_strip_silence(struct anonymous_10 *track);
// flite_text_to_wave
// file /usr/include/flite/flite.h line 96
struct cst_wave_struct * flite_text_to_wave(const char *, struct cst_voice_struct *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// g_convert_with_fallback
// file /usr/include/glib-2.0/glib/gconvert.h line 108
extern char * g_convert_with_fallback(const char *, signed long int, const char *, const char *, const char *, unsigned long int *, unsigned long int *, struct _GError **);
// g_free
// file /usr/include/glib-2.0/glib/gmem.h line 71
extern void g_free(void *);
// g_hash_table_lookup
// file /usr/include/glib-2.0/glib/ghash.h line 88
extern void * g_hash_table_lookup(struct _GHashTable *, const void *);
// g_malloc
// file /usr/include/glib-2.0/glib/gmem.h line 78
extern void * g_malloc(unsigned long int);
// g_realloc
// file /usr/include/glib-2.0/glib/gmem.h line 82
extern void * g_realloc(void *, unsigned long int);
// g_strdup
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 216
extern char * g_strdup(const char *);
// g_strdup_printf
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 218
extern char * g_strdup_printf(const char *, ...);
// g_strfreev
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 281
extern void g_strfreev(char **);
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
// g_strsplit
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 270
extern char ** g_strsplit(const char *, const char *, signed int);
// g_thread_init
// file /usr/include/glib-2.0/glib/deprecated/gthread.h line 265
extern void g_thread_init(void *);
// get_param_float
// file /usr/include/flite/cst_features.h line 74
float get_param_float(const struct cst_features_struct *, const char *, float);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// i18n_init
// file i18n.c line 32
void i18n_init(void);
// lt_dladvise_destroy
// file /usr/include/ltdl.h line 69
extern signed int lt_dladvise_destroy(struct lt__advise **);
// lt_dladvise_ext
// file /usr/include/ltdl.h line 70
extern signed int lt_dladvise_ext(struct lt__advise **);
// lt_dladvise_global
// file /usr/include/ltdl.h line 73
extern signed int lt_dladvise_global(struct lt__advise **);
// lt_dladvise_init
// file /usr/include/ltdl.h line 68
extern signed int lt_dladvise_init(struct lt__advise **);
// lt_dlclose
// file /usr/include/ltdl.h line 83
extern signed int lt_dlclose(struct lt__handle *);
// lt_dlerror
// file /usr/include/ltdl.h line 82
extern const char * lt_dlerror(void);
// lt_dlexit
// file /usr/include/ltdl.h line 54
extern signed int lt_dlexit(void);
// lt_dlinit
// file /usr/include/ltdl.h line 53
extern signed int lt_dlinit(void);
// lt_dlopenadvise
// file /usr/include/ltdl.h line 79
extern struct lt__handle * lt_dlopenadvise(const char *, struct lt__advise *);
// lt_dlpreload_default
// file /usr/include/ltdl.h line 100
extern signed int lt_dlpreload_default(const struct anonymous_13 *);
// lt_dlsetsearchpath
// file /usr/include/ltdl.h line 60
extern signed int lt_dlsetsearchpath(const char *);
// lt_dlsym
// file /usr/include/ltdl.h line 81
extern void * lt_dlsym(struct lt__handle *, const char *);
// module_add_config_option
// file module_utils.h line 214
struct configoption_t * module_add_config_option(struct configoption_t *options, signed int *num_options, char *name, signed int type, const char * (*callback)(struct command_t *, void *), void *info, unsigned long int context);

//

// module_audio_init
// file module_utils.c line 947
signed int module_audio_init(char **status_info);
// module_child_dp_close
// file module_utils.c line 709
void module_child_dp_close(struct anonymous_16 dpipe);
// module_child_dp_init
// file module_utils.c line 702
void module_child_dp_init(struct anonymous_16 dpipe);
// module_child_dp_read
// file module_utils.c line 736
signed int module_child_dp_read(struct anonymous_16 dpipe, char *msg, unsigned long int maxlen);
// module_child_dp_write
// file module_utils.c line 716
void module_child_dp_write(struct anonymous_16 dpipe, const char *msg, unsigned long int bytes);
// module_close
// file flite.c line 219
signed int module_close(void);
// module_get_ht_option
// file module_utils.c line 935
void * module_get_ht_option(struct _GHashTable *hash_table, const char *key);
// module_get_message_part
// file module_utils.h line 161
signed int module_get_message_part(const char *message, char *part, unsigned int *pos, unsigned long int maxlen, const char *dividers);
// module_init
// file flite.c line 94
signed int module_init(char **status_info);
// module_list_voices
// file flite.c line 152
struct anonymous_0 ** module_list_voices(void);
// module_load
// file flite.c line 76
signed int module_load(void);
// module_parent_dp_close
// file module_utils.c line 695
void module_parent_dp_close(struct anonymous_16 dpipe);
// module_parent_dp_init
// file module_utils.c line 688
void module_parent_dp_init(struct anonymous_16 dpipe);
// module_parent_dp_read
// file module_utils.c line 748
signed int module_parent_dp_read(struct anonymous_16 dpipe, char *msg, unsigned long int maxlen);
// module_parent_dp_write
// file module_utils.c line 725
signed int module_parent_dp_write(struct anonymous_16 dpipe, const char *msg, unsigned long int bytes);
// module_parent_wait_continue
// file module_utils.c line 668
signed int module_parent_wait_continue(struct anonymous_16 dpipe);
// module_parent_wfork
// file module_utils.c line 608
unsigned long int module_parent_wfork(struct anonymous_16 dpipe, const char *message, enum anonymous_14 msgtype, const unsigned long int maxlen, const char *dividers, signed int *pause_requested);
// module_pause
// file flite.c line 205
unsigned long int module_pause(void);
// module_play_file
// file module_utils.c line 992
signed int module_play_file(const char *filename);
// module_recode_to_iso
// file module_utils.c line 841
char * module_recode_to_iso(char *data, signed int bytes, char *language, char *fallback);
// module_report_event_begin
// file module_utils.h line 380
void module_report_event_begin(void);
// module_report_event_end
// file module_utils.h line 381
void module_report_event_end(void);
// module_report_event_pause
// file module_utils.c line 904
void module_report_event_pause(void);
// module_report_event_stop
// file module_utils.h line 382
void module_report_event_stop(void);
// module_report_index_mark
// file module_utils.c line 871
void module_report_index_mark(char *mark);
// module_send_asynchronous
// file module_utils.c line 860
void module_send_asynchronous(char *text);
// module_sigblockall
// file module_utils.c line 761
void module_sigblockall(void);
// module_sigblockusr
// file module_utils.c line 789
void module_sigblockusr(struct anonymous_15 *some_signals);
// module_sigunblockusr
// file module_utils.c line 776
void module_sigunblockusr(struct anonymous_15 *some_signals);
// module_speak
// file flite.c line 157
signed int module_speak(char *data, unsigned long int bytes, enum anonymous_14 msgtype);
// module_stop
// file flite.c line 188
signed int module_stop(void);
// module_strip_punctuation_default
// file module_utils.c line 601
void module_strip_punctuation_default(char *buf);
// module_strip_punctuation_some
// file module_utils.c line 538
void module_strip_punctuation_some(char *message, char *punct_chars);
// module_strip_ssml
// file module_utils.h line 183
char * module_strip_ssml(char *message);
// module_terminate_thread
// file module_utils.h line 210
signed int module_terminate_thread(unsigned long int thread);
// module_tts_output
// file module_utils.h line 125
signed int module_tts_output(struct anonymous_10 track, enum anonymous_11 format);
// my_dlopenextglobal
// file spd_audio.c line 62
static struct lt__handle * my_dlopenextglobal(const char *filename);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_12 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_12 *);
// pthread_setcancelstate
// file /usr/include/pthread.h line 508
extern signed int pthread_setcancelstate(signed int, signed int *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_15 *, struct anonymous_15 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// register_cmu_us_kal16
// file flite.c line 109 function module_init
struct cst_voice_struct * register_cmu_us_kal16();
// sem_destroy
// file /usr/include/semaphore.h line 39
extern signed int sem_destroy(union anonymous_17 *);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous_17 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous_17 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous_17 *);
// set_speaking_thread_parameters
// file module_utils.h line 165
void set_speaking_thread_parameters();
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous_15 *, signed int);
// sigdelset
// file /usr/include/signal.h line 224
extern signed int sigdelset(struct anonymous_15 *, signed int);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous_15 *);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous_15 *, struct anonymous_15 *);
// spd_audio_close
// file spd_audio.c line 254
signed int spd_audio_close(struct anonymous_9 *id);
// spd_audio_get_playcmd
// file spd_audio.c line 315
const char * spd_audio_get_playcmd(struct anonymous_9 *id);
// spd_audio_open
// file spd_audio.c line 93
struct anonymous_9 * spd_audio_open(char *name, void **pars, char **error);

//

// spd_audio_play
// file spd_audio.c line 174
signed int spd_audio_play(struct anonymous_9 *id, struct anonymous_10 track, enum anonymous_11 format);
// spd_audio_set_loglevel
// file spd_audio.c line 306
void spd_audio_set_loglevel(struct anonymous_9 *id, signed int level);
// spd_audio_set_volume
// file spd_audio.c line 292
signed int spd_audio_set_volume(struct anonymous_9 *id, signed int volume);
// spd_audio_stop
// file spd_audio.h line 36
signed int spd_audio_stop(struct anonymous_9 *id);
// spd_getline
// file ../../include/spd_utils.h line 29
signed long int spd_getline(char **lineptr, unsigned long int *n, struct _IO_FILE *f);
// str2ECapLetRecogn
// file ../../include/fdsetconv.h line 22
enum anonymous_8 str2ECapLetRecogn(char *str);
// str2EPunctMode
// file ../../include/fdsetconv.h line 14
enum anonymous_6 str2EPunctMode(char *str);
// str2ESpellMode
// file ../../include/fdsetconv.h line 18
enum anonymous_7 str2ESpellMode(char *str);
// str2EVoice
// file ../../include/fdsetconv.h line 10
enum anonymous_5 str2EVoice(char *str);
// str2intpriority
// file fdsetconv.c line 200
enum anonymous_4 str2intpriority(char *str);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
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
// textdomain
// file /usr/include/libintl.h line 82
extern char * textdomain(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// ungetc
// file /usr/include/stdio.h line 702
extern signed int ungetc(signed int, struct _IO_FILE *);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous_0
{
  // name
  char *name;
  // language
  char *language;
  // variant
  char *variant;
};

struct anonymous_13
{
  // name
  const char *name;
  // address
  void *address;
};

struct anonymous_15
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_16
{
  // pc
  signed int pc[2l];
  // cp
  signed int cp[2l];
};

struct anonymous_10
{
  // bits
  signed int bits;
  // num_channels
  signed int num_channels;
  // sample_rate
  signed int sample_rate;
  // num_samples
  signed int num_samples;
  // samples
  signed short int *samples;
};

struct anonymous_1
{
  // rate
  signed int rate;
  // pitch
  signed int pitch;
  // volume
  signed int volume;
  // punctuation_mode
  enum anonymous_6 punctuation_mode;
  // spelling_mode
  enum anonymous_7 spelling_mode;
  // cap_let_recogn
  enum anonymous_8 cap_let_recogn;
  // voice_type
  enum anonymous_5 voice_type;
  // voice
  struct anonymous_0 voice;
};

struct anonymous_9
{
  // volume
  signed int volume;
  // format
  enum anonymous_11 format;
  // function
  struct spd_audio_plugin *function;
  // private_data
  void *private_data;
  // working
  signed int working;
};

struct anonymous
{
  // value
  signed long int value;
  // str
  char *str;
  // list
  char **list;
  // dvalue
  double dvalue;
};

union anonymous_17
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous_3
{
  // fval
  double fval;
  // ival
  signed long long int ival;
  // vval
  void *vval;
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

union anonymous_12
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct cst_val_cons_struct
{
  // car
  struct cst_val_struct *car;
  // cdr
  struct cst_val_struct *cdr;
};

struct cst_val_atom_struct
{
  // type
  signed int type;
  // ref_count
  signed int ref_count;
  // v
  union anonymous_3 v;
};

union anonymous_2
{
  // cc
  struct cst_val_cons_struct cc;
  // a
  struct cst_val_atom_struct a;
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

struct _GString
{
  // str
  char *str;
  // len
  unsigned long int len;
  // allocated_len
  unsigned long int allocated_len;
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

struct command_t
{
  // name
  const char *name;
  // option
  struct configoption_t *option;
  // configfile
  struct configfile_t *configfile;
  // context
  void *context;
  // arg_count
  signed int arg_count;
  // data
  struct anonymous data;
};

struct configfile_t
{
  // stream
  struct _IO_FILE *stream;
  // eof
  char eof;
  // size
  unsigned long int size;
  // context
  void *context;
  // config_options
  const struct configoption_t **config_options;
  // config_option_count
  signed int config_option_count;
  // filename
  char *filename;
  // line
  unsigned long int line;
  // flags
  unsigned long int flags;
  // includepath
  char *includepath;
  // errorhandler
  signed int (*errorhandler)(struct configfile_t *, signed int, unsigned long int, const char *);
  // contextchecker
  const char * (*contextchecker)(struct command_t *, unsigned long int);
  // cmp_func
  signed int (*cmp_func)(const char *, const char *, unsigned long int);
};

struct configoption_t
{
  // name
  const char *name;
  // type
  signed int type;
  // callback
  const char * (*callback)(struct command_t *, void *);
  // info
  void *info;
  // context
  unsigned long int context;
};

struct cst_features_struct
{
  // head
  struct cst_featvalpair_struct *head;
  // ctx
  void *ctx;
  // owned_strings
  struct cst_val_struct *owned_strings;
  // linked
  struct cst_features_struct *linked;
};

struct cst_featvalpair_struct
{
  // name
  const char *name;
  // val
  struct cst_val_struct *val;
  // next
  struct cst_featvalpair_struct *next;
};

struct cst_utterance_struct
{
  // features
  struct cst_features_struct *features;
  // ffunctions
  struct cst_features_struct *ffunctions;
  // relations
  struct cst_features_struct *relations;
  // ctx
  void *ctx;
};

struct cst_val_struct
{
  // c
  union anonymous_2 c;
};

struct cst_voice_struct
{
  // name
  const char *name;
  // features
  struct cst_features_struct *features;
  // ffunctions
  struct cst_features_struct *ffunctions;
  // utt_init
  struct cst_utterance_struct * (*utt_init)(struct cst_utterance_struct *, struct cst_voice_struct *);
};

struct cst_wave_struct
{
  // type
  const char *type;
  // sample_rate
  signed int sample_rate;
  // num_samples
  signed int num_samples;
  // num_channels
  signed int num_channels;
  // samples
  signed short int *samples;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct spd_audio_plugin
{
  // name
  const char *name;
  // open
  struct anonymous_9 * (*open)(void **);
  // play
  signed int (*play)(struct anonymous_9 *, struct anonymous_10);
  // stop
  signed int (*stop)(struct anonymous_9 *);
  // close
  signed int (*close)(struct anonymous_9 *);
  // set_volume
  signed int (*set_volume)(struct anonymous_9 *, signed int);
  // set_loglevel
  void (*set_loglevel)(signed int);
  // get_playcmd
  const char * (*get_playcmd)(void);
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


// CustomDebugFile
// file module_utils.h line 56
struct _IO_FILE *CustomDebugFile;
// Debug
// file module_utils.h line 55
signed int Debug;
// FliteDelimiters
// file flite.c line 72
static char *FliteDelimiters = (char *)(void *)0;
// FliteMaxChunkLength
// file flite.c line 71
static signed int FliteMaxChunkLength;
// configfile
// file module_utils.h line 58
struct configfile_t *configfile;
// current_index_mark
// file module_utils.h line 53
signed int current_index_mark;
// flite_message
// file flite.c line 50
static char **flite_message;
// flite_message_type
// file flite.c line 51
static enum anonymous_14 flite_message_type;
// flite_pause_requested
// file flite.c line 54
static signed int flite_pause_requested = 0;
// flite_position
// file flite.c line 53
static signed int flite_position = 0;
// flite_semaphore
// file flite.c line 48
static union anonymous_17 flite_semaphore;
// flite_speak_thread
// file flite.c line 47
static unsigned long int flite_speak_thread;
// flite_speaking
// file flite.c line 45
static signed int flite_speaking = 0;
// flite_stop
// file flite.c line 69
signed int flite_stop = 0;
// flite_voice
// file flite.c line 67
struct cst_voice_struct *flite_voice;
// flite_volume
// file flite.c line 56
signed int flite_volume = 0;
// log_level
// file module_utils.h line 46
signed int log_level;
// lt__PROGRAM__LTX_preloaded_symbols
// file sd_fliteS.c line 34
const struct anonymous_13 lt__PROGRAM__LTX_preloaded_symbols[2l] = { { .name="@PROGRAM@", .address=(void *)0 },
    { .name=((const char *)NULL), .address=(void *)0 } };
// lt_h
// file spd_audio.c line 54
static struct lt__handle *lt_h;
// module_audio_id
// file module_utils.h line 48
struct anonymous_9 *module_audio_id;
// module_audio_pars
// file module_utils.c line 36
static char *module_audio_pars[10l];
// module_dc_options
// file module_utils.h line 59
struct configoption_t *module_dc_options;
// module_index_mark
// file module_utils.h line 372
char *module_index_mark;
// module_num_dc_options
// file module_utils.h line 60
signed int module_num_dc_options;
// module_stdout_mutex
// file module_utils.c line 40
union anonymous_12 module_stdout_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// msg_settings
// file module_utils.h line 50
struct anonymous_1 msg_settings;
// msg_settings_old
// file module_utils.h line 51
struct anonymous_1 msg_settings_old;
// spd_audio_log_level
// file spd_audio.c line 53
static signed int spd_audio_log_level;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// Debug_cb
// file flite.c line 42
const char * Debug_cb(struct command_t *cmd, void *ctx)
{
  Debug = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// ECapLetRecogn2str
// file fdsetconv.c line 163
char * ECapLetRecogn2str(enum anonymous_8 recogn)
{
  char *str;
  switch((signed int)recogn)
  {
    case SPD_CAP_NONE:
    {
      str=g_strdup("none");
      break;
    }
    case SPD_CAP_SPELL:
    {
      str=g_strdup("spell");
      break;
    }
    case SPD_CAP_ICON:
    {
      str=g_strdup("icon");
      break;
    }
    default:
      str = (char *)(void *)0;
  }
  return str;
}

// EPunctMode2str
// file fdsetconv.c line 94
char * EPunctMode2str(enum anonymous_6 punct)
{
  char *str;
  switch((signed int)punct)
  {
    case SPD_PUNCT_NONE:
    {
      str=g_strdup("none");
      break;
    }
    case SPD_PUNCT_ALL:
    {
      str=g_strdup("all");
      break;
    }
    case SPD_PUNCT_SOME:
    {
      str=g_strdup("some");
      break;
    }
    default:
      str = (char *)(void *)0;
  }
  return str;
}

// ESpellMode2str
// file fdsetconv.c line 131
char * ESpellMode2str(enum anonymous_7 spell)
{
  char *str;
  switch((signed int)spell)
  {
    case SPD_SPELL_ON:
    {
      str=g_strdup("on");
      break;
    }
    case SPD_SPELL_OFF:
    {
      str=g_strdup("off");
      break;
    }
    default:
      str = (char *)(void *)0;
  }
  return str;
}

// EVoice2str
// file fdsetconv.c line 32
char * EVoice2str(enum anonymous_5 voice)
{
  char *str;
  switch((signed int)voice)
  {
    case SPD_MALE1:
    {
      str=g_strdup("male1");
      break;
    }
    case SPD_MALE2:
    {
      str=g_strdup("male2");
      break;
    }
    case SPD_MALE3:
    {
      str=g_strdup("male3");
      break;
    }
    case SPD_FEMALE1:
    {
      str=g_strdup("female1");
      break;
    }
    case SPD_FEMALE2:
    {
      str=g_strdup("female2");
      break;
    }
    case SPD_FEMALE3:
    {
      str=g_strdup("female3");
      break;
    }
    case SPD_CHILD_MALE:
    {
      str=g_strdup("child_male");
      break;
    }
    case SPD_CHILD_FEMALE:
    {
      str=g_strdup("child_female");
      break;
    }
    default:
      str = (char *)(void *)0;
  }
  return str;
}

// FliteDelimiters_cb
// file flite.c line 72
const char * FliteDelimiters_cb(struct command_t *cmd, void *ctx)
{
  g_free((void *)FliteDelimiters);
  if(!(cmd->data.str == ((char *)NULL)))
    FliteDelimiters=g_strdup(cmd->data.str);

  return (const char *)(void *)0;
}

// FliteMaxChunkLength_cb
// file flite.c line 71
const char * FliteMaxChunkLength_cb(struct command_t *cmd, void *ctx)
{
  FliteMaxChunkLength = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// _flite_speak
// file flite.c line 260
static void * _flite_speak(void *nothing)
{
  struct anonymous_10 track;
  enum anonymous_11 format = (enum anonymous_11)SPD_AUDIO_LE;
  struct cst_wave_struct *wav;
  unsigned int pos;
  char *buf;
  signed int bytes;
  signed int ret;
  if(!(Debug == 0))
  {
    signed long int _flite_speak__1__1__t;
    struct timeval _flite_speak__1__1__tv;
    char *_flite_speak__1__1__tstr;
    _flite_speak__1__1__t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&_flite_speak__1__1__t);
    _flite_speak__1__1__tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(_flite_speak__1__1__tstr);
    _flite_speak__1__1__tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&_flite_speak__1__1__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", _flite_speak__1__1__tstr, (signed int)_flite_speak__1__1__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "flite: speaking thread starting.......\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__1__tstr, (signed int)_flite_speak__1__1__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "flite: speaking thread starting.......\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)_flite_speak__1__1__tstr);
  }

  set_speaking_thread_parameters();
  while((_Bool)1)
  {
    sem_wait(&flite_semaphore);
    if(!(Debug == 0))
    {
      signed long int _flite_speak__1__2__1__t;
      struct timeval _flite_speak__1__2__1__tv;
      char *_flite_speak__1__2__1__tstr;
      _flite_speak__1__2__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&_flite_speak__1__2__1__t);
      _flite_speak__1__2__1__tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(_flite_speak__1__2__1__tstr);
      _flite_speak__1__2__1__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&_flite_speak__1__2__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", _flite_speak__1__2__1__tstr, (signed int)_flite_speak__1__2__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Semaphore on\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__1__tstr, (signed int)_flite_speak__1__2__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Semaphore on\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)_flite_speak__1__2__1__tstr);
    }

    flite_stop = 0;
    flite_speaking = 1;
    void *return_value_g_malloc_5;
    return_value_g_malloc_5=g_malloc((unsigned long int)(FliteMaxChunkLength + 1) * sizeof(char) /*1ul*/ );
    buf = (char *)return_value_g_malloc_5;
    pos = (unsigned int)0;
    module_report_event_begin();
    while((_Bool)1)
    {
      if(!(flite_stop == 0))
      {
        if(!(Debug == 0))
        {
          signed long int _flite_speak__1__2__2__1__1__t;
          struct timeval _flite_speak__1__2__2__1__1__tv;
          char *_flite_speak__1__2__2__1__1__tstr;
          _flite_speak__1__2__2__1__1__t=time((signed long int *)(void *)0);
          char *return_value_ctime_6;
          return_value_ctime_6=ctime(&_flite_speak__1__2__2__1__1__t);
          _flite_speak__1__2__2__1__1__tstr=g_strdup(return_value_ctime_6);
          unsigned long int return_value_strlen_7;
          return_value_strlen_7=strlen(_flite_speak__1__2__2__1__1__tstr);
          _flite_speak__1__2__2__1__1__tstr[(signed long int)(return_value_strlen_7 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_flite_speak__1__2__2__1__1__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__1__1__tstr, (signed int)_flite_speak__1__2__2__1__1__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Stop in child, terminating");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__1__1__tstr, (signed int)_flite_speak__1__2__2__1__1__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Stop in child, terminating");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_flite_speak__1__2__2__1__1__tstr);
        }

        flite_speaking = 0;
        module_report_event_stop();
        break;
      }

      bytes=module_get_message_part(*flite_message, buf, &pos, (unsigned long int)FliteMaxChunkLength, FliteDelimiters);
      if(!(bytes >= 0))
      {
        if(!(Debug == 0))
        {
          signed long int _flite_speak__1__2__2__2__1__t;
          struct timeval _flite_speak__1__2__2__2__1__tv;
          char *_flite_speak__1__2__2__2__1__tstr;
          _flite_speak__1__2__2__2__1__t=time((signed long int *)(void *)0);
          char *return_value_ctime_8;
          return_value_ctime_8=ctime(&_flite_speak__1__2__2__2__1__t);
          _flite_speak__1__2__2__2__1__tstr=g_strdup(return_value_ctime_8);
          unsigned long int return_value_strlen_9;
          return_value_strlen_9=strlen(_flite_speak__1__2__2__2__1__tstr);
          _flite_speak__1__2__2__2__1__tstr[(signed long int)(return_value_strlen_9 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_flite_speak__1__2__2__2__1__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__2__1__tstr, (signed int)_flite_speak__1__2__2__2__1__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "End of message");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__2__1__tstr, (signed int)_flite_speak__1__2__2__2__1__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "End of message");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_flite_speak__1__2__2__2__1__tstr);
        }

        flite_speaking = 0;
        module_report_event_end();
        break;
      }

      buf[(signed long int)bytes] = (char)0;
      if(!(Debug == 0))
      {
        signed long int _flite_speak__1__2__2__3__t;
        struct timeval _flite_speak__1__2__2__3__tv;
        char *_flite_speak__1__2__2__3__tstr;
        _flite_speak__1__2__2__3__t=time((signed long int *)(void *)0);
        char *return_value_ctime_10;
        return_value_ctime_10=ctime(&_flite_speak__1__2__2__3__t);
        _flite_speak__1__2__2__3__tstr=g_strdup(return_value_ctime_10);
        unsigned long int return_value_strlen_11;
        return_value_strlen_11=strlen(_flite_speak__1__2__2__3__tstr);
        _flite_speak__1__2__2__3__tstr[(signed long int)(return_value_strlen_11 - (unsigned long int)1)] = (char)0;
        gettimeofday(&_flite_speak__1__2__2__3__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__3__tstr, (signed int)_flite_speak__1__2__2__3__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Returned %d bytes from get_part\n", bytes);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__3__tstr, (signed int)_flite_speak__1__2__2__3__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Returned %d bytes from get_part\n", bytes);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)_flite_speak__1__2__2__3__tstr);
      }

      if(!(Debug == 0))
      {
        signed long int _flite_speak__1__2__2__4__t;
        struct timeval _flite_speak__1__2__2__4__tv;
        char *_flite_speak__1__2__2__4__tstr;
        _flite_speak__1__2__2__4__t=time((signed long int *)(void *)0);
        char *return_value_ctime_12;
        return_value_ctime_12=ctime(&_flite_speak__1__2__2__4__t);
        _flite_speak__1__2__2__4__tstr=g_strdup(return_value_ctime_12);
        unsigned long int return_value_strlen_13;
        return_value_strlen_13=strlen(_flite_speak__1__2__2__4__tstr);
        _flite_speak__1__2__2__4__tstr[(signed long int)(return_value_strlen_13 - (unsigned long int)1)] = (char)0;
        gettimeofday(&_flite_speak__1__2__2__4__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__4__tstr, (signed int)_flite_speak__1__2__2__4__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Text to synthesize is '%s'\n", buf);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__4__tstr, (signed int)_flite_speak__1__2__2__4__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Text to synthesize is '%s'\n", buf);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)_flite_speak__1__2__2__4__tstr);
      }

      if(!(current_index_mark == -1) && !(flite_pause_requested == 0))
      {
        if(!(Debug == 0))
        {
          signed long int _flite_speak__1__2__2__5__1__t;
          struct timeval _flite_speak__1__2__2__5__1__tv;
          char *_flite_speak__1__2__2__5__1__tstr;
          _flite_speak__1__2__2__5__1__t=time((signed long int *)(void *)0);
          char *return_value_ctime_14;
          return_value_ctime_14=ctime(&_flite_speak__1__2__2__5__1__t);
          _flite_speak__1__2__2__5__1__tstr=g_strdup(return_value_ctime_14);
          unsigned long int return_value_strlen_15;
          return_value_strlen_15=strlen(_flite_speak__1__2__2__5__1__tstr);
          _flite_speak__1__2__2__5__1__tstr[(signed long int)(return_value_strlen_15 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_flite_speak__1__2__2__5__1__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__5__1__tstr, (signed int)_flite_speak__1__2__2__5__1__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Pause requested in parent, position %d\n", current_index_mark);
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__5__1__tstr, (signed int)_flite_speak__1__2__2__5__1__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Pause requested in parent, position %d\n", current_index_mark);
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_flite_speak__1__2__2__5__1__tstr);
        }

        flite_pause_requested = 0;
        flite_position = current_index_mark;
        break;
      }

      if(bytes >= 1)
      {
        if(!(Debug == 0))
        {
          signed long int _flite_speak__1__2__2__6__1__t;
          struct timeval _flite_speak__1__2__2__6__1__tv;
          char *_flite_speak__1__2__2__6__1__tstr;
          _flite_speak__1__2__2__6__1__t=time((signed long int *)(void *)0);
          char *return_value_ctime_16;
          return_value_ctime_16=ctime(&_flite_speak__1__2__2__6__1__t);
          _flite_speak__1__2__2__6__1__tstr=g_strdup(return_value_ctime_16);
          unsigned long int return_value_strlen_17;
          return_value_strlen_17=strlen(_flite_speak__1__2__2__6__1__tstr);
          _flite_speak__1__2__2__6__1__tstr[(signed long int)(return_value_strlen_17 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_flite_speak__1__2__2__6__1__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__6__1__tstr, (signed int)_flite_speak__1__2__2__6__1__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Speaking in child...");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__6__1__tstr, (signed int)_flite_speak__1__2__2__6__1__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Speaking in child...");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_flite_speak__1__2__2__6__1__tstr);
        }

        if(!(Debug == 0))
        {
          signed long int _flite_speak__1__2__2__6__2__t;
          struct timeval _flite_speak__1__2__2__6__2__tv;
          char *_flite_speak__1__2__2__6__2__tstr;
          _flite_speak__1__2__2__6__2__t=time((signed long int *)(void *)0);
          char *return_value_ctime_18;
          return_value_ctime_18=ctime(&_flite_speak__1__2__2__6__2__t);
          _flite_speak__1__2__2__6__2__tstr=g_strdup(return_value_ctime_18);
          unsigned long int return_value_strlen_19;
          return_value_strlen_19=strlen(_flite_speak__1__2__2__6__2__tstr);
          _flite_speak__1__2__2__6__2__tstr[(signed long int)(return_value_strlen_19 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_flite_speak__1__2__2__6__2__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__6__2__tstr, (signed int)_flite_speak__1__2__2__6__2__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Trying to synthesize text");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__6__2__tstr, (signed int)_flite_speak__1__2__2__6__2__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Trying to synthesize text");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_flite_speak__1__2__2__6__2__tstr);
        }

        wav=flite_text_to_wave(buf, flite_voice);
        if(wav == ((struct cst_wave_struct *)NULL))
        {
          if(!(Debug == 0))
          {
            signed long int _flite_speak__1__2__2__6__3__1__t;
            struct timeval _flite_speak__1__2__2__6__3__1__tv;
            char *_flite_speak__1__2__2__6__3__1__tstr;
            _flite_speak__1__2__2__6__3__1__t=time((signed long int *)(void *)0);
            char *return_value_ctime_20;
            return_value_ctime_20=ctime(&_flite_speak__1__2__2__6__3__1__t);
            _flite_speak__1__2__2__6__3__1__tstr=g_strdup(return_value_ctime_20);
            unsigned long int return_value_strlen_21;
            return_value_strlen_21=strlen(_flite_speak__1__2__2__6__3__1__tstr);
            _flite_speak__1__2__2__6__3__1__tstr[(signed long int)(return_value_strlen_21 - (unsigned long int)1)] = (char)0;
            gettimeofday(&_flite_speak__1__2__2__6__3__1__tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__6__3__1__tstr, (signed int)_flite_speak__1__2__2__6__3__1__tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "Stop in child, terminating");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__6__3__1__tstr, (signed int)_flite_speak__1__2__2__6__3__1__tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "Stop in child, terminating");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)_flite_speak__1__2__2__6__3__1__tstr);
          }

          flite_speaking = 0;
          module_report_event_stop();
          break;
        }

        track.num_samples = wav->num_samples;
        track.num_channels = wav->num_channels;
        track.sample_rate = wav->sample_rate;
        track.bits = 16;
        track.samples = wav->samples;
        flite_strip_silence(&track);
        if(!(Debug == 0))
        {
          signed long int _flite_speak__1__2__2__6__4__t;
          struct timeval _flite_speak__1__2__2__6__4__tv;
          char *_flite_speak__1__2__2__6__4__tstr;
          _flite_speak__1__2__2__6__4__t=time((signed long int *)(void *)0);
          char *return_value_ctime_22;
          return_value_ctime_22=ctime(&_flite_speak__1__2__2__6__4__t);
          _flite_speak__1__2__2__6__4__tstr=g_strdup(return_value_ctime_22);
          unsigned long int return_value_strlen_23;
          return_value_strlen_23=strlen(_flite_speak__1__2__2__6__4__tstr);
          _flite_speak__1__2__2__6__4__tstr[(signed long int)(return_value_strlen_23 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_flite_speak__1__2__2__6__4__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__6__4__tstr, (signed int)_flite_speak__1__2__2__6__4__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Got %d samples", track.num_samples);
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__6__4__tstr, (signed int)_flite_speak__1__2__2__6__4__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Got %d samples", track.num_samples);
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_flite_speak__1__2__2__6__4__tstr);
        }

        if(!(track.samples == ((signed short int *)NULL)))
        {
          if(!(flite_stop == 0))
          {
            if(!(Debug == 0))
            {
              signed long int _flite_speak__1__2__2__6__5__1__1__t;
              struct timeval tv;
              char *tstr;
              _flite_speak__1__2__2__6__5__1__1__t=time((signed long int *)(void *)0);
              char *return_value_ctime_24;
              return_value_ctime_24=ctime(&_flite_speak__1__2__2__6__5__1__1__t);
              tstr=g_strdup(return_value_ctime_24);
              unsigned long int return_value_strlen_25;
              return_value_strlen_25=strlen(tstr);
              tstr[(signed long int)(return_value_strlen_25 - (unsigned long int)1)] = (char)0;
              gettimeofday(&tv, (struct timezone *)(void *)0);
              fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
              fprintf(stderr, ": ");
              fprintf(stderr, "Stop in child, terminating");
              fprintf(stderr, "\n");
              fflush(stderr);
              if(Debug == 2 || Debug == 3)
              {
                fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
                fprintf(CustomDebugFile, ": ");
                fprintf(CustomDebugFile, "Stop in child, terminating");
                fprintf(CustomDebugFile, "\n");
                fflush(CustomDebugFile);
              }

              g_free((void *)tstr);
            }

            flite_speaking = 0;
            module_report_event_stop();
            delete_wave(wav);
            break;
          }

          if(!(Debug == 0))
          {
            signed long int t;
            struct timeval _flite_speak__1__2__2__6__5__2__tv;
            char *_flite_speak__1__2__2__6__5__2__tstr;
            t=time((signed long int *)(void *)0);
            char *return_value_ctime_26;
            return_value_ctime_26=ctime(&t);
            _flite_speak__1__2__2__6__5__2__tstr=g_strdup(return_value_ctime_26);
            unsigned long int return_value_strlen_27;
            return_value_strlen_27=strlen(_flite_speak__1__2__2__6__5__2__tstr);
            _flite_speak__1__2__2__6__5__2__tstr[(signed long int)(return_value_strlen_27 - (unsigned long int)1)] = (char)0;
            gettimeofday(&_flite_speak__1__2__2__6__5__2__tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__6__5__2__tstr, (signed int)_flite_speak__1__2__2__6__5__2__tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "Playing part of the message");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__6__5__2__tstr, (signed int)_flite_speak__1__2__2__6__5__2__tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "Playing part of the message");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)_flite_speak__1__2__2__6__5__2__tstr);
          }

          ret=module_tts_output(track, format);
          if(!(ret >= 0))
          {
            if(!(Debug == 0))
            {
              signed long int _flite_speak__1__2__2__6__5__3__t;
              struct timeval _flite_speak__1__2__2__6__5__3__tv;
              char *_flite_speak__1__2__2__6__5__3__tstr;
              _flite_speak__1__2__2__6__5__3__t=time((signed long int *)(void *)0);
              char *return_value_ctime_28;
              return_value_ctime_28=ctime(&_flite_speak__1__2__2__6__5__3__t);
              _flite_speak__1__2__2__6__5__3__tstr=g_strdup(return_value_ctime_28);
              unsigned long int return_value_strlen_29;
              return_value_strlen_29=strlen(_flite_speak__1__2__2__6__5__3__tstr);
              _flite_speak__1__2__2__6__5__3__tstr[(signed long int)(return_value_strlen_29 - (unsigned long int)1)] = (char)0;
              gettimeofday(&_flite_speak__1__2__2__6__5__3__tv, (struct timezone *)(void *)0);
              fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__6__5__3__tstr, (signed int)_flite_speak__1__2__2__6__5__3__tv.tv_usec);
              fprintf(stderr, ": ");
              fprintf(stderr, "ERROR: failed to play the track");
              fprintf(stderr, "\n");
              fflush(stderr);
              if(Debug == 2 || Debug == 3)
              {
                fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__6__5__3__tstr, (signed int)_flite_speak__1__2__2__6__5__3__tv.tv_usec);
                fprintf(CustomDebugFile, ": ");
                fprintf(CustomDebugFile, "ERROR: failed to play the track");
                fprintf(CustomDebugFile, "\n");
                fflush(CustomDebugFile);
              }

              g_free((void *)_flite_speak__1__2__2__6__5__3__tstr);
            }

          }

          if(!(flite_stop == 0))
          {
            if(!(Debug == 0))
            {
              signed long int _flite_speak__1__2__2__6__5__4__1__t;
              struct timeval _flite_speak__1__2__2__6__5__4__1__tv;
              char *_flite_speak__1__2__2__6__5__4__1__tstr;
              _flite_speak__1__2__2__6__5__4__1__t=time((signed long int *)(void *)0);
              char *return_value_ctime_30;
              return_value_ctime_30=ctime(&_flite_speak__1__2__2__6__5__4__1__t);
              _flite_speak__1__2__2__6__5__4__1__tstr=g_strdup(return_value_ctime_30);
              unsigned long int return_value_strlen_31;
              return_value_strlen_31=strlen(_flite_speak__1__2__2__6__5__4__1__tstr);
              _flite_speak__1__2__2__6__5__4__1__tstr[(signed long int)(return_value_strlen_31 - (unsigned long int)1)] = (char)0;
              gettimeofday(&_flite_speak__1__2__2__6__5__4__1__tv, (struct timezone *)(void *)0);
              fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__6__5__4__1__tstr, (signed int)_flite_speak__1__2__2__6__5__4__1__tv.tv_usec);
              fprintf(stderr, ": ");
              fprintf(stderr, "Stop in child, terminating (s)");
              fprintf(stderr, "\n");
              fflush(stderr);
              if(Debug == 2 || Debug == 3)
              {
                fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__6__5__4__1__tstr, (signed int)_flite_speak__1__2__2__6__5__4__1__tv.tv_usec);
                fprintf(CustomDebugFile, ": ");
                fprintf(CustomDebugFile, "Stop in child, terminating (s)");
                fprintf(CustomDebugFile, "\n");
                fflush(CustomDebugFile);
              }

              g_free((void *)_flite_speak__1__2__2__6__5__4__1__tstr);
            }

            flite_speaking = 0;
            module_report_event_stop();
            delete_wave(wav);
            break;
          }

        }

        delete_wave(wav);
      }

      else
        if(bytes == -1)
        {
          if(!(Debug == 0))
          {
            signed long int _flite_speak__1__2__2__7__1__t;
            struct timeval _flite_speak__1__2__2__7__1__tv;
            char *_flite_speak__1__2__2__7__1__tstr;
            _flite_speak__1__2__2__7__1__t=time((signed long int *)(void *)0);
            char *return_value_ctime_32;
            return_value_ctime_32=ctime(&_flite_speak__1__2__2__7__1__t);
            _flite_speak__1__2__2__7__1__tstr=g_strdup(return_value_ctime_32);
            unsigned long int return_value_strlen_33;
            return_value_strlen_33=strlen(_flite_speak__1__2__2__7__1__tstr);
            _flite_speak__1__2__2__7__1__tstr[(signed long int)(return_value_strlen_33 - (unsigned long int)1)] = (char)0;
            gettimeofday(&_flite_speak__1__2__2__7__1__tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__7__1__tstr, (signed int)_flite_speak__1__2__2__7__1__tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "End of data in speaking thread");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__7__1__tstr, (signed int)_flite_speak__1__2__2__7__1__tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "End of data in speaking thread");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)_flite_speak__1__2__2__7__1__tstr);
          }

          flite_speaking = 0;
          module_report_event_end();
          break;
        }

        else
        {
          flite_speaking = 0;
          module_report_event_end();
          break;
        }
      if(!(flite_stop == 0))
      {
        if(!(Debug == 0))
        {
          signed long int _flite_speak__1__2__2__9__1__t;
          struct timeval _flite_speak__1__2__2__9__1__tv;
          char *_flite_speak__1__2__2__9__1__tstr;
          _flite_speak__1__2__2__9__1__t=time((signed long int *)(void *)0);
          char *return_value_ctime_34;
          return_value_ctime_34=ctime(&_flite_speak__1__2__2__9__1__t);
          _flite_speak__1__2__2__9__1__tstr=g_strdup(return_value_ctime_34);
          unsigned long int return_value_strlen_35;
          return_value_strlen_35=strlen(_flite_speak__1__2__2__9__1__tstr);
          _flite_speak__1__2__2__9__1__tstr[(signed long int)(return_value_strlen_35 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_flite_speak__1__2__2__9__1__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _flite_speak__1__2__2__9__1__tstr, (signed int)_flite_speak__1__2__2__9__1__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Stop in child, terminating");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__2__2__9__1__tstr, (signed int)_flite_speak__1__2__2__9__1__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Stop in child, terminating");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_flite_speak__1__2__2__9__1__tstr);
        }

        flite_speaking = 0;
        module_report_event_stop();
        break;
      }

    }
    flite_stop = 0;
    g_free((void *)buf);
  }
  flite_speaking = 0;
  if(!(Debug == 0))
  {
    signed long int _flite_speak__1__3__t;
    struct timeval _flite_speak__1__3__tv;
    char *_flite_speak__1__3__tstr;
    _flite_speak__1__3__t=time((signed long int *)(void *)0);
    char *return_value_ctime_36;
    return_value_ctime_36=ctime(&_flite_speak__1__3__t);
    _flite_speak__1__3__tstr=g_strdup(return_value_ctime_36);
    unsigned long int return_value_strlen_37;
    return_value_strlen_37=strlen(_flite_speak__1__3__tstr);
    _flite_speak__1__3__tstr[(signed long int)(return_value_strlen_37 - (unsigned long int)1)] = (char)0;
    gettimeofday(&_flite_speak__1__3__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", _flite_speak__1__3__tstr, (signed int)_flite_speak__1__3__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "flite: speaking thread ended.......\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", _flite_speak__1__3__tstr, (signed int)_flite_speak__1__3__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "flite: speaking thread ended.......\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)_flite_speak__1__3__tstr);
  }

  pthread_exit((void *)0);
}

// do_audio
// file module_utils.h line 198
char * do_audio(void)
{
  char *cur_item = (char *)(void *)0;
  char *cur_value = (char *)(void *)0;
  char *line = (char *)(void *)0;
  signed int ret;
  unsigned long int n;
  signed int err = 0;
  char *status = (char *)(void *)0;
  char *msg;
  printf("207 OK RECEIVING AUDIO SETTINGS\n");
  fflush(stdout);
  signed int return_value_strcmp_13;
  signed int return_value_strcmp_12;
  signed int return_value_strcmp_11;
  signed int return_value_strcmp_10;
  signed int return_value_strcmp_9;
  while((_Bool)1)
  {
    line = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline_1;
    return_value_spd_getline_1=spd_getline(&line, &n, stdin);
    ret = (signed int)return_value_spd_getline_1;
    if(ret == -1)
    {
      err = 1;
      break;
    }

    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(line, ".\n");
    if(return_value_strcmp_2 == 0)
    {
      g_free((void *)line);
      break;
    }

    if(err == 0)
    {
      cur_item=strtok(line, "=");
      if(cur_item == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      cur_value=strtok((char *)(void *)0, "\n");
      if(cur_value == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      signed int return_value_strcmp_14;
      return_value_strcmp_14=strcmp(cur_item, "audio_output_method");
      if(return_value_strcmp_14 == 0)
      {
        g_free((void *)module_audio_pars[(signed long int)0]);
        signed int return_value_strcmp_3;
        return_value_strcmp_3=strcmp(cur_value, "NULL");
        if(return_value_strcmp_3 == 0)
          module_audio_pars[(signed long int)0] = (char *)(void *)0;

        else
          module_audio_pars[(signed long int)0]=g_strdup(cur_value);
      }

      else
      {
        return_value_strcmp_13=strcmp(cur_item, "audio_oss_device");
        if(return_value_strcmp_13 == 0)
        {
          g_free((void *)module_audio_pars[(signed long int)1]);
          signed int return_value_strcmp_4;
          return_value_strcmp_4=strcmp(cur_value, "NULL");
          if(return_value_strcmp_4 == 0)
            module_audio_pars[(signed long int)1] = (char *)(void *)0;

          else
            module_audio_pars[(signed long int)1]=g_strdup(cur_value);
        }

        else
        {
          return_value_strcmp_12=strcmp(cur_item, "audio_alsa_device");
          if(return_value_strcmp_12 == 0)
          {
            g_free((void *)module_audio_pars[(signed long int)2]);
            signed int return_value_strcmp_5;
            return_value_strcmp_5=strcmp(cur_value, "NULL");
            if(return_value_strcmp_5 == 0)
              module_audio_pars[(signed long int)2] = (char *)(void *)0;

            else
              module_audio_pars[(signed long int)2]=g_strdup(cur_value);
          }

          else
          {
            return_value_strcmp_11=strcmp(cur_item, "audio_nas_server");
            if(return_value_strcmp_11 == 0)
            {
              g_free((void *)module_audio_pars[(signed long int)3]);
              signed int return_value_strcmp_6;
              return_value_strcmp_6=strcmp(cur_value, "NULL");
              if(return_value_strcmp_6 == 0)
                module_audio_pars[(signed long int)3] = (char *)(void *)0;

              else
                module_audio_pars[(signed long int)3]=g_strdup(cur_value);
            }

            else
            {
              return_value_strcmp_10=strcmp(cur_item, "audio_pulse_server");
              if(return_value_strcmp_10 == 0)
              {
                g_free((void *)module_audio_pars[(signed long int)4]);
                signed int return_value_strcmp_7;
                return_value_strcmp_7=strcmp(cur_value, "NULL");
                if(return_value_strcmp_7 == 0)
                  module_audio_pars[(signed long int)4] = (char *)(void *)0;

                else
                  module_audio_pars[(signed long int)4]=g_strdup(cur_value);
              }

              else
              {
                return_value_strcmp_9=strcmp(cur_item, "audio_pulse_min_length");
                if(return_value_strcmp_9 == 0)
                {
                  g_free((void *)module_audio_pars[(signed long int)5]);
                  signed int return_value_strcmp_8;
                  return_value_strcmp_8=strcmp(cur_value, "NULL");
                  if(return_value_strcmp_8 == 0)
                    module_audio_pars[(signed long int)5] = (char *)(void *)0;

                  else
                    module_audio_pars[(signed long int)5]=g_strdup(cur_value);
                }

                else
                  err = 2;
              }
            }
          }
        }
      }
    }

    g_free((void *)line);
  }
  char *return_value_g_strdup_15;
  char *return_value_g_strdup_16;
  if(err == 1)
  {
    return_value_g_strdup_15=g_strdup("302 ERROR BAD SYNTAX");
    return return_value_g_strdup_15;
  }

  else
    if(err == 2)
    {
      return_value_g_strdup_16=g_strdup("303 ERROR INVALID PARAMETER OR VALUE");
      return return_value_g_strdup_16;
    }

    else
    {
      err=module_audio_init(&status);
      if(err == 0)
        msg=g_strdup_printf("203 OK AUDIO INITIALIZED");

      else
        msg=g_strdup_printf("300-%s\n300 UNKNOWN ERROR", status);
      g_free((void *)status);
      return msg;
    }
}

// do_char
// file module_utils.h line 192
char * do_char(void)
{
  char *return_value_do_message_1;
  return_value_do_message_1=do_message((enum anonymous_14)SPD_MSGTYPE_CHAR);
  return return_value_do_message_1;
}

// do_debug
// file module_utils.h line 200
char * do_debug(char *cmd_buf)
{
  char **cmd;
  char *filename;
  cmd=g_strsplit(cmd_buf, " ", -1);
  if(cmd[1l] == ((char *)NULL))
  {
    g_strfreev(cmd);
    char *return_value_g_strdup_1;
    return_value_g_strdup_1=g_strdup("302 ERROR BAD SYNTAX");
    return return_value_g_strdup_1;
  }

  signed int return_value_strcmp_20;
  return_value_strcmp_20=strcmp(cmd[(signed long int)1], "ON");
  signed int return_value_strcmp_19;
  if(return_value_strcmp_20 == 0)
  {
    if(cmd[2l] == ((char *)NULL))
    {
      g_strfreev(cmd);
      char *return_value_g_strdup_2;
      return_value_g_strdup_2=g_strdup("302 ERROR BAD SYNTAX");
      return return_value_g_strdup_2;
    }

    filename = cmd[(signed long int)2];
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&t);
      tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Additional logging into specific path %s requested", filename);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Additional logging into specific path %s requested", filename);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    CustomDebugFile=fopen(filename, "w+");
    if(CustomDebugFile == ((struct _IO_FILE *)NULL))
    {
      if(!(Debug == 0))
      {
        signed long int do_debug__1__2__3__1__t;
        struct timeval do_debug__1__2__3__1__tv;
        char *do_debug__1__2__3__1__tstr;
        do_debug__1__2__3__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_5;
        return_value_ctime_5=ctime(&do_debug__1__2__3__1__t);
        do_debug__1__2__3__1__tstr=g_strdup(return_value_ctime_5);
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(do_debug__1__2__3__1__tstr);
        do_debug__1__2__3__1__tstr[(signed long int)(return_value_strlen_6 - (unsigned long int)1)] = (char)0;
        gettimeofday(&do_debug__1__2__3__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", do_debug__1__2__3__1__tstr, (signed int)do_debug__1__2__3__1__tv.tv_usec);
        fprintf(stderr, ": ");
        signed int *return_value___errno_location_7;
        return_value___errno_location_7=__errno_location();
        signed int *return_value___errno_location_8;
        return_value___errno_location_8=__errno_location();
        char *return_value_strerror_9;
        return_value_strerror_9=strerror(*return_value___errno_location_8);
        fprintf(stderr, "ERROR: Can't open custom debug file for logging: %d (%s)", *return_value___errno_location_7, return_value_strerror_9);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", do_debug__1__2__3__1__tstr, (signed int)do_debug__1__2__3__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          signed int *return_value___errno_location_10;
          return_value___errno_location_10=__errno_location();
          signed int *return_value___errno_location_11;
          return_value___errno_location_11=__errno_location();
          char *return_value_strerror_12;
          return_value_strerror_12=strerror(*return_value___errno_location_11);
          fprintf(CustomDebugFile, "ERROR: Can't open custom debug file for logging: %d (%s)", *return_value___errno_location_10, return_value_strerror_12);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)do_debug__1__2__3__1__tstr);
      }

      char *return_value_g_strdup_13;
      return_value_g_strdup_13=g_strdup("303 CANT OPEN CUSTOM DEBUG FILE");
      return return_value_g_strdup_13;
    }

    if(Debug == 1)
      Debug = 3;

    else
      Debug = 2;
    if(!(Debug == 0))
    {
      signed long int do_debug__1__2__4__t;
      struct timeval do_debug__1__2__4__tv;
      char *do_debug__1__2__4__tstr;
      do_debug__1__2__4__t=time((signed long int *)(void *)0);
      char *return_value_ctime_14;
      return_value_ctime_14=ctime(&do_debug__1__2__4__t);
      do_debug__1__2__4__tstr=g_strdup(return_value_ctime_14);
      unsigned long int return_value_strlen_15;
      return_value_strlen_15=strlen(do_debug__1__2__4__tstr);
      do_debug__1__2__4__tstr[(signed long int)(return_value_strlen_15 - (unsigned long int)1)] = (char)0;
      gettimeofday(&do_debug__1__2__4__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", do_debug__1__2__4__tstr, (signed int)do_debug__1__2__4__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Additional logging initialized");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", do_debug__1__2__4__tstr, (signed int)do_debug__1__2__4__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Additional logging initialized");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)do_debug__1__2__4__tstr);
    }

  }

  else
  {
    return_value_strcmp_19=strcmp(cmd[(signed long int)1], "OFF");
    if(return_value_strcmp_19 == 0)
    {
      if(Debug == 3)
        Debug = 1;

      else
        Debug = 0;
      if(!(CustomDebugFile == ((struct _IO_FILE *)NULL)))
        fclose(CustomDebugFile);

      CustomDebugFile = (struct _IO_FILE *)(void *)0;
      if(!(Debug == 0))
      {
        signed long int do_debug__1__3__1__t;
        struct timeval do_debug__1__3__1__tv;
        char *do_debug__1__3__1__tstr;
        do_debug__1__3__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_16;
        return_value_ctime_16=ctime(&do_debug__1__3__1__t);
        do_debug__1__3__1__tstr=g_strdup(return_value_ctime_16);
        unsigned long int return_value_strlen_17;
        return_value_strlen_17=strlen(do_debug__1__3__1__tstr);
        do_debug__1__3__1__tstr[(signed long int)(return_value_strlen_17 - (unsigned long int)1)] = (char)0;
        gettimeofday(&do_debug__1__3__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", do_debug__1__3__1__tstr, (signed int)do_debug__1__3__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Additional logging into specific path terminated");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", do_debug__1__3__1__tstr, (signed int)do_debug__1__3__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Additional logging into specific path terminated");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)do_debug__1__3__1__tstr);
      }

    }

    else
    {
      char *return_value_g_strdup_18;
      return_value_g_strdup_18=g_strdup("302 ERROR BAD SYNTAX");
      return return_value_g_strdup_18;
    }
  }
  g_strfreev(cmd);
  char *return_value_g_strdup_21;
  return_value_g_strdup_21=g_strdup("200 OK DEBUGGING ON");
  return return_value_g_strdup_21;
}

// do_key
// file module_utils.h line 193
char * do_key(void)
{
  char *return_value_do_message_1;
  return_value_do_message_1=do_message((enum anonymous_14)SPD_MSGTYPE_KEY);
  return return_value_do_message_1;
}

// do_list_voices
// file module_utils.h line 196
char * do_list_voices(void)
{
  struct anonymous_0 **voices;
  signed int i;
  char *lang;
  char *variant;
  struct _GString *voice_list;
  voices=module_list_voices();
  if(voices == ((struct anonymous_0 **)NULL))
  {
    char *return_value_g_strdup_1;
    return_value_g_strdup_1=g_strdup("304 CANT LIST VOICES");
    return return_value_g_strdup_1;
  }

  voice_list=g_string_new("");
  i = 0;
  for( ; !(voices[(signed long int)i] == ((struct anonymous_0 *)NULL)); i = i + 1)
    if(voices[(signed long int)i]->name == ((char *)NULL))
    {
      if(!(Debug == 0))
      {
        signed long int t;
        struct timeval do_list_voices__1__2__1__1__1__tv;
        char *do_list_voices__1__2__1__1__1__tstr;
        t=time((signed long int *)(void *)0);
        char *return_value_ctime_2;
        return_value_ctime_2=ctime(&t);
        do_list_voices__1__2__1__1__1__tstr=g_strdup(return_value_ctime_2);
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(do_list_voices__1__2__1__1__1__tstr);
        do_list_voices__1__2__1__1__1__tstr[(signed long int)(return_value_strlen_3 - (unsigned long int)1)] = (char)0;
        gettimeofday(&do_list_voices__1__2__1__1__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", do_list_voices__1__2__1__1__1__tstr, (signed int)do_list_voices__1__2__1__1__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Unnamed voice found; ignoring it.");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", do_list_voices__1__2__1__1__1__tstr, (signed int)do_list_voices__1__2__1__1__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Unnamed voice found; ignoring it.");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)do_list_voices__1__2__1__1__1__tstr);
      }

    }

    else
    {
      if(voices[(signed long int)i]->language == ((char *)NULL))
        lang = "none";

      else
        lang = voices[(signed long int)i]->language;
      if(voices[(signed long int)i]->variant == ((char *)NULL))
        variant = "none";

      else
        variant = voices[(signed long int)i]->variant;
      g_string_append_printf(voice_list, "200-%s %s %s\n", voices[(signed long int)i]->name, lang, variant);
    }
  if(voice_list->len == 0ul)
  {
    g_string_free(voice_list, (signed int)!(0 != 0));
    char *return_value_g_strdup_4;
    return_value_g_strdup_4=g_strdup("304 CANT LIST VOICES");
    return return_value_g_strdup_4;
  }

  g_string_append(voice_list, "200 OK VOICE LIST SENT");
  if(!(Debug == 0))
  {
    signed long int do_list_voices__1__4__t;
    struct timeval tv;
    char *tstr;
    do_list_voices__1__4__t=time((signed long int *)(void *)0);
    char *return_value_ctime_5;
    return_value_ctime_5=ctime(&do_list_voices__1__4__t);
    tstr=g_strdup(return_value_ctime_5);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_6 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Voice prepared to  send to speechd");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Voice prepared to  send to speechd");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  char *return_value_g_string_free_7;
  return_value_g_string_free_7=g_string_free(voice_list, 0);
  return return_value_g_string_free_7;
}

// do_loglevel
// file module_utils.h line 199
char * do_loglevel(void)
{
  char *cur_item = (char *)(void *)0;
  char *cur_value = (char *)(void *)0;
  char *line = (char *)(void *)0;
  signed int ret;
  unsigned long int n;
  signed int number;
  char *tptr;
  signed int err = 0;
  char *msg;
  printf("207 OK RECEIVING LOGLEVEL SETTINGS\n");
  fflush(stdout);
  while((_Bool)1)
  {
    line = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline_1;
    return_value_spd_getline_1=spd_getline(&line, &n, stdin);
    ret = (signed int)return_value_spd_getline_1;
    if(ret == -1)
    {
      err = 1;
      break;
    }

    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(line, ".\n");
    if(return_value_strcmp_2 == 0)
    {
      g_free((void *)line);
      break;
    }

    if(err == 0)
    {
      cur_item=strtok(line, "=");
      if(cur_item == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      cur_value=strtok((char *)(void *)0, "\n");
      if(cur_value == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      signed int return_value_strcmp_4;
      return_value_strcmp_4=strcmp(cur_item, "log_level");
      if(return_value_strcmp_4 == 0)
      {
        signed long int return_value_strtol_3;
        return_value_strtol_3=strtol(cur_value, &tptr, 10);
        number = (signed int)return_value_strtol_3;
        if(tptr == cur_value)
        {
          err = 2;
          continue;
        }

        log_level = number;
        spd_audio_set_loglevel(module_audio_id, number);
      }

      else
        err = 2;
    }

    g_free((void *)line);
  }
  char *return_value_g_strdup_5;
  char *return_value_g_strdup_6;
  if(err == 1)
  {
    return_value_g_strdup_5=g_strdup("302 ERROR BAD SYNTAX");
    return return_value_g_strdup_5;
  }

  else
    if(err == 2)
    {
      return_value_g_strdup_6=g_strdup("303 ERROR INVALID PARAMETER OR VALUE");
      return return_value_g_strdup_6;
    }

    else
    {
      msg=g_strdup_printf("203 OK LOG LEVEL SET");
      return msg;
    }
}

// do_message
// file module_utils.c line 43
char * do_message(enum anonymous_14 msgtype)
{
  signed int ret;
  char *cur_line;
  struct _GString *msg;
  unsigned long int n;
  signed int nlines = 0;
  msg=g_string_new("");
  printf("202 OK RECEIVING MESSAGE\n");
  fflush(stdout);
  char *return_value_g_strdup_2;
  signed int return_value_strcmp_4;
  while((_Bool)1)
  {
    cur_line = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline_1;
    return_value_spd_getline_1=spd_getline(&cur_line, &n, stdin);
    ret = (signed int)return_value_spd_getline_1;
    nlines = nlines + 1;
    if(ret == -1)
    {
      return_value_g_strdup_2=g_strdup("401 ERROR INTERNAL");
      return return_value_g_strdup_2;
    }

    signed int return_value_strcmp_5;
    return_value_strcmp_5=strcmp(cur_line, "..\n");
    if(return_value_strcmp_5 == 0)
    {
      g_free((void *)cur_line);
      cur_line=g_strdup(".\n");
    }

    else
    {
      return_value_strcmp_4=strcmp(cur_line, ".\n");
      if(return_value_strcmp_4 == 0)
      {
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(msg->str);
        msg->str[(signed long int)(return_value_strlen_3 - (unsigned long int)1)] = (char)0;
        g_free((void *)cur_line);
        break;
      }

    }
    g_string_append(msg, cur_line);
    g_free((void *)cur_line);
  }
  if(nlines >= 3 && !((signed int)msgtype == SPD_MSGTYPE_TEXT))
  {
    char *return_value_g_strdup_6;
    return_value_g_strdup_6=g_strdup("305 DATA MORE THAN ONE LINE");
    return return_value_g_strdup_6;
  }

  signed int return_value_strcmp_7;
  if((signed int)msgtype == SPD_MSGTYPE_CHAR)
  {
    return_value_strcmp_7=strcmp(msg->str, "space");
    if(return_value_strcmp_7 == 0)
    {
      g_string_free(msg, 1);
      msg=g_string_new(" ");
    }

  }

  _Bool tmp_if_expr_11;
  if(msg->str == ((char *)NULL))
    tmp_if_expr_11 = (_Bool)1;

  else
    tmp_if_expr_11 = (signed int)msg->str[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_11)
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_8;
      return_value_ctime_8=ctime(&t);
      tstr=g_strdup(return_value_ctime_8);
      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_9 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "requested data NULL or empty\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "requested data NULL or empty\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    g_string_free(msg, (signed int)!(0 != 0));
    char *return_value_g_strdup_10;
    return_value_g_strdup_10=g_strdup("301 ERROR CANT SPEAK");
    return return_value_g_strdup_10;
  }

  if(msg_settings.voice.name == ((char *)NULL) && msg_settings.voice_type == msg_settings_old.voice_type && !(msg_settings_old.voice.name == ((char *)NULL)))
    msg_settings_old.voice_type = (enum anonymous_5)-1;

  signed int return_value_spd_audio_set_volume_14;
  return_value_spd_audio_set_volume_14=spd_audio_set_volume(module_audio_id, 85);
  if(!(return_value_spd_audio_set_volume_14 >= 0))
  {
    if(!(Debug == 0))
    {
      signed long int do_message__1__6__1__t;
      struct timeval do_message__1__6__1__tv;
      char *do_message__1__6__1__tstr;
      do_message__1__6__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_12;
      return_value_ctime_12=ctime(&do_message__1__6__1__t);
      do_message__1__6__1__tstr=g_strdup(return_value_ctime_12);
      unsigned long int return_value_strlen_13;
      return_value_strlen_13=strlen(do_message__1__6__1__tstr);
      do_message__1__6__1__tstr[(signed long int)(return_value_strlen_13 - (unsigned long int)1)] = (char)0;
      gettimeofday(&do_message__1__6__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", do_message__1__6__1__tstr, (signed int)do_message__1__6__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't set volume. audio not initialized?");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", do_message__1__6__1__tstr, (signed int)do_message__1__6__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't set volume. audio not initialized?");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)do_message__1__6__1__tstr);
    }

  }

  unsigned long int return_value_strlen_15;
  return_value_strlen_15=strlen(msg->str);
  ret=module_speak(msg->str, return_value_strlen_15, msgtype);
  g_string_free(msg, 1);
  char *return_value_g_strdup_16;
  if(!(ret >= 1))
  {
    return_value_g_strdup_16=g_strdup("301 ERROR CANT SPEAK");
    return return_value_g_strdup_16;
  }

  else
  {
    char *return_value_g_strdup_17;
    return_value_g_strdup_17=g_strdup("200 OK SPEAKING");
    return return_value_g_strdup_17;
  }
}

// do_pause
// file module_utils.h line 195
void do_pause(void)
{
  signed int ret;
  unsigned long int return_value_module_pause_1;
  return_value_module_pause_1=module_pause();
  ret = (signed int)return_value_module_pause_1;
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_2;
      return_value_ctime_2=ctime(&t);
      tstr=g_strdup(return_value_ctime_2);
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_3 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "WARNING: Can't pause");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "WARNING: Can't pause");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

  }

  else
    goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// do_quit
// file module_utils.h line 201
void do_quit(void)
{
  printf("210 OK QUIT\n");
  fflush(stdout);
  spd_audio_close(module_audio_id);
  module_audio_id = (struct anonymous_9 *)(void *)0;
  module_close();
}

// do_set
// file module_utils.h line 197
char * do_set(void)
{
  char *cur_item = (char *)(void *)0;
  char *cur_value = (char *)(void *)0;
  char *line = (char *)(void *)0;
  signed int ret;
  unsigned long int n;
  signed int number;
  char *tptr;
  signed int err = 0;
  printf("203 OK RECEIVING SETTINGS\n");
  fflush(stdout);
  signed int return_value_strcmp_19;
  signed int return_value_strcmp_18;
  signed int return_value_strcmp_17;
  signed int return_value_strcmp_16;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_14;
  signed int return_value_strcmp_13;
  signed int return_value_strcmp_12;
  while((_Bool)1)
  {
    line = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline_1;
    return_value_spd_getline_1=spd_getline(&line, &n, stdin);
    ret = (signed int)return_value_spd_getline_1;
    if(ret == -1)
    {
      err = 1;
      break;
    }

    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(line, ".\n");
    if(return_value_strcmp_2 == 0)
    {
      g_free((void *)line);
      break;
    }

    if(err == 0)
    {
      cur_item=strtok(line, "=");
      if(cur_item == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      cur_value=strtok((char *)(void *)0, "\n");
      if(cur_value == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      signed int return_value_strcmp_20;
      return_value_strcmp_20=strcmp(cur_item, "rate");
      if(return_value_strcmp_20 == 0)
      {
        signed long int return_value_strtol_3;
        return_value_strtol_3=strtol(cur_value, &tptr, 10);
        number = (signed int)return_value_strtol_3;
        if(!(number >= -100) || number >= 101)
        {
          err = 2;
          continue;
        }

        if(tptr == cur_value)
        {
          err = 2;
          continue;
        }

        msg_settings.rate = number;
      }

      else
      {
        return_value_strcmp_19=strcmp(cur_item, "pitch");
        if(return_value_strcmp_19 == 0)
        {
          signed long int return_value_strtol_4;
          return_value_strtol_4=strtol(cur_value, &tptr, 10);
          number = (signed int)return_value_strtol_4;
          if(!(number >= -100) || number >= 101)
          {
            err = 2;
            continue;
          }

          if(tptr == cur_value)
          {
            err = 2;
            continue;
          }

          msg_settings.pitch = number;
        }

        else
        {
          return_value_strcmp_18=strcmp(cur_item, "volume");
          if(return_value_strcmp_18 == 0)
          {
            signed long int return_value_strtol_5;
            return_value_strtol_5=strtol(cur_value, &tptr, 10);
            number = (signed int)return_value_strtol_5;
            if(!(number >= -100) || number >= 101)
            {
              err = 2;
              continue;
            }

            if(tptr == cur_value)
            {
              err = 2;
              continue;
            }

            msg_settings.volume = number;
          }

          else
          {
            return_value_strcmp_17=strcmp(cur_item, "punctuation_mode");
            if(return_value_strcmp_17 == 0)
            {
              enum anonymous_6 return_value_str2EPunctMode_6;
              return_value_str2EPunctMode_6=str2EPunctMode(cur_value);
              ret = (signed int)return_value_str2EPunctMode_6;
              if(!(ret == -1))
                msg_settings.punctuation_mode = (enum anonymous_6)ret;

              else
                err = 2;
            }

            else
            {
              return_value_strcmp_16=strcmp(cur_item, "spelling_mode");
              if(return_value_strcmp_16 == 0)
              {
                enum anonymous_7 return_value_str2ESpellMode_7;
                return_value_str2ESpellMode_7=str2ESpellMode(cur_value);
                ret = (signed int)return_value_str2ESpellMode_7;
                if(!(ret == -1))
                  msg_settings.spelling_mode = (enum anonymous_7)ret;

                else
                  err = 2;
              }

              else
              {
                return_value_strcmp_15=strcmp(cur_item, "cap_let_recogn");
                if(return_value_strcmp_15 == 0)
                {
                  enum anonymous_8 return_value_str2ECapLetRecogn_8;
                  return_value_str2ECapLetRecogn_8=str2ECapLetRecogn(cur_value);
                  ret = (signed int)return_value_str2ECapLetRecogn_8;
                  if(!(ret == -1))
                    msg_settings.cap_let_recogn = (enum anonymous_8)ret;

                  else
                    err = 2;
                }

                else
                {
                  return_value_strcmp_14=strcmp(cur_item, "voice");
                  if(return_value_strcmp_14 == 0)
                  {
                    enum anonymous_5 return_value_str2EVoice_9;
                    return_value_str2EVoice_9=str2EVoice(cur_value);
                    ret = (signed int)return_value_str2EVoice_9;
                    if(!(ret == -1))
                      msg_settings.voice_type = (enum anonymous_5)ret;

                    else
                      err = 2;
                  }

                  else
                  {
                    return_value_strcmp_13=strcmp(cur_item, "synthesis_voice");
                    if(return_value_strcmp_13 == 0)
                    {
                      g_free((void *)msg_settings.voice.name);
                      signed int return_value_strcmp_10;
                      return_value_strcmp_10=strcmp(cur_value, "NULL");
                      if(return_value_strcmp_10 == 0)
                        msg_settings.voice.name = (char *)(void *)0;

                      else
                        msg_settings.voice.name=g_strdup(cur_value);
                    }

                    else
                    {
                      return_value_strcmp_12=strcmp(cur_item, "language");
                      if(return_value_strcmp_12 == 0)
                      {
                        g_free((void *)msg_settings.voice.language);
                        signed int return_value_strcmp_11;
                        return_value_strcmp_11=strcmp(cur_value, "NULL");
                        if(return_value_strcmp_11 == 0)
                          msg_settings.voice.language = (char *)(void *)0;

                        else
                          msg_settings.voice.language=g_strdup(cur_value);
                      }

                      else
                        err = 2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    g_free((void *)line);
  }
  char *return_value_g_strdup_21;
  char *return_value_g_strdup_22;
  char *return_value_g_strdup_23;
  if(err == 0)
  {
    return_value_g_strdup_21=g_strdup("203 OK SETTINGS RECEIVED");
    return return_value_g_strdup_21;
  }

  else
    if(err == 1)
    {
      return_value_g_strdup_22=g_strdup("302 ERROR BAD SYNTAX");
      return return_value_g_strdup_22;
    }

    else
      if(err == 2)
      {
        return_value_g_strdup_23=g_strdup("303 ERROR INVALID PARAMETER OR VALUE");
        return return_value_g_strdup_23;
      }

      else
      {
        char *return_value_g_strdup_24;
        return_value_g_strdup_24=g_strdup("401 ERROR INTERNAL");
        return return_value_g_strdup_24;
      }
}

// do_sound_icon
// file module_utils.h line 191
char * do_sound_icon(void)
{
  char *return_value_do_message_1;
  return_value_do_message_1=do_message((enum anonymous_14)SPD_MSGTYPE_SOUND_ICON);
  return return_value_do_message_1;
}

// do_speak
// file module_utils.h line 190
char * do_speak(void)
{
  char *return_value_do_message_1;
  return_value_do_message_1=do_message((enum anonymous_14)SPD_MSGTYPE_TEXT);
  return return_value_do_message_1;
}

// do_stop
// file module_utils.h line 194
void do_stop(void)
{
  module_stop();
}

// flite_set_pitch
// file flite.c line 410
static void flite_set_pitch(signed int pitch)
{
  float f0;
  /* assertion pitch >= -100 && pitch <= +100 */
  assert(pitch >= -100 && pitch <= +100);
  f0 = (float)((double)(float)pitch * 0.8 + (double)100);
  feat_set_float(flite_voice->features, "int_f0_target_mean", f0);
}

// flite_set_rate
// file flite.c line 392
static void flite_set_rate(signed int rate)
{
  float stretch = (float)1;
  /* assertion rate >= -100 && rate <= +100 */
  assert(rate >= -100 && rate <= +100);
  if(!(rate >= 0))
    stretch = stretch - (float)rate / (float)50;

  if(rate >= 1)
    stretch = stretch - (float)rate / (float)175;

  feat_set_float(flite_voice->features, "duration_stretch", stretch);
}

// flite_set_volume
// file flite.c line 404
static void flite_set_volume(signed int volume)
{
  /* assertion volume >= -100 && volume <= +100 */
  assert(volume >= -100 && volume <= +100);
  flite_volume = volume;
}

// flite_strip_silence
// file flite.c line 241
static void flite_strip_silence(struct anonymous_10 *track)
{
  signed int playlen;
  signed int skip;
  float stretch;
  stretch=get_param_float(flite_voice->features, "duration_stretch", (float)1.);
  signed int speed = (signed int)(1000. / (double)stretch);
  skip = (187 * track->sample_rate) / speed;
  playlen = track->num_samples - skip * 2;
  if(playlen >= 1 && !(playlen >= 500))
    playlen = playlen + (skip * 2) / 3;

  if(!(playlen >= 0))
    playlen = 0;

  track->num_samples = playlen;
  /* assertion track->bits == 16 */
  assert(track->bits == 16);
  track->samples = track->samples + (signed long int)(skip * track->num_channels);
}

// i18n_init
// file i18n.c line 32
void i18n_init(void)
{
  char *return_value_setlocale_1;
  return_value_setlocale_1=setlocale(6, "");
  if(return_value_setlocale_1 == ((char *)NULL))
  {
    perror("setlocale");
    exit(1);
  }

  char *return_value_bindtextdomain_2;
  return_value_bindtextdomain_2=bindtextdomain("speech-dispatcher", "/usr/share/locale");
  if(return_value_bindtextdomain_2 == ((char *)NULL))
  {
    perror("bindtextdomain");
    exit(1);
  }

  char *return_value_textdomain_3;
  return_value_textdomain_3=textdomain("speech-dispatcher");
  if(return_value_textdomain_3 == ((char *)NULL))
  {
    perror("textdomain");
    exit(1);
  }

}

// main
// file module_main.c line 73
signed int main(signed int argc, char **argv)
{
  char *cmd_buf;
  signed int ret;
  unsigned long int n;
  char *configfilename = (char *)(void *)0;
  char *status_info = (char *)(void *)0;
  g_thread_init((void *)0);
  lt_dlpreload_default(lt__PROGRAM__LTX_preloaded_symbols);
  module_num_dc_options = 0;
  module_audio_id = ((struct anonymous_9 *)NULL);
  if(argc >= 2)
    configfilename=g_strdup(argv[(signed long int)1]);

  ret=module_load();
  if(ret == -1)
  {
    module_close();
    exit(1);
  }

  if(!(configfilename == ((char *)NULL)))
  {
    module_dc_options=module_add_config_option(module_dc_options, &module_num_dc_options, "", 0, (const char * (*)(struct command_t *, void *))(void *)0, (void *)0, (unsigned long int)0);
    configfile=dotconf_create(configfilename, module_dc_options, NULL, (unsigned long int)(1 << 0));
    if(!(configfile == ((struct configfile_t *)NULL)))
    {
      signed int return_value_dotconf_command_loop_3;
      return_value_dotconf_command_loop_3=dotconf_command_loop(configfile);
      if(return_value_dotconf_command_loop_3 == 0)
      {
        if(!(Debug == 0))
        {
          signed long int main__1__3__1__1__1__t;
          struct timeval main__1__3__1__1__1__tv;
          char *main__1__3__1__1__1__tstr;
          main__1__3__1__1__1__t=time((signed long int *)(void *)0);
          char *return_value_ctime_1;
          return_value_ctime_1=ctime(&main__1__3__1__1__1__t);
          main__1__3__1__1__1__tstr=g_strdup(return_value_ctime_1);
          unsigned long int return_value_strlen_2;
          return_value_strlen_2=strlen(main__1__3__1__1__1__tstr);
          main__1__3__1__1__1__tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
          gettimeofday(&main__1__3__1__1__1__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", main__1__3__1__1__1__tstr, (signed int)main__1__3__1__1__1__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Error reading config file\n");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", main__1__3__1__1__1__tstr, (signed int)main__1__3__1__1__1__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Error reading config file\n");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)main__1__3__1__1__1__tstr);
        }

        module_close();
        exit(1);
      }

      dotconf_cleanup(configfile);
      if(!(Debug == 0))
      {
        signed long int main__1__3__1__2__t;
        struct timeval main__1__3__1__2__tv;
        char *main__1__3__1__2__tstr;
        main__1__3__1__2__t=time((signed long int *)(void *)0);
        char *return_value_ctime_4;
        return_value_ctime_4=ctime(&main__1__3__1__2__t);
        main__1__3__1__2__tstr=g_strdup(return_value_ctime_4);
        unsigned long int return_value_strlen_5;
        return_value_strlen_5=strlen(main__1__3__1__2__tstr);
        main__1__3__1__2__tstr[(signed long int)(return_value_strlen_5 - (unsigned long int)1)] = (char)0;
        gettimeofday(&main__1__3__1__2__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", main__1__3__1__2__tstr, (signed int)main__1__3__1__2__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Configuration (pre) has been read from \"%s\"\n", configfilename);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", main__1__3__1__2__tstr, (signed int)main__1__3__1__2__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Configuration (pre) has been read from \"%s\"\n", configfilename);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)main__1__3__1__2__tstr);
      }

      g_free((void *)configfilename);
    }

    else
      if(!(Debug == 0))
      {
        signed long int main__1__3__2__1__t;
        struct timeval main__1__3__2__1__tv;
        char *main__1__3__2__1__tstr;
        main__1__3__2__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_6;
        return_value_ctime_6=ctime(&main__1__3__2__1__t);
        main__1__3__2__1__tstr=g_strdup(return_value_ctime_6);
        unsigned long int return_value_strlen_7;
        return_value_strlen_7=strlen(main__1__3__2__1__tstr);
        main__1__3__2__1__tstr[(signed long int)(return_value_strlen_7 - (unsigned long int)1)] = (char)0;
        gettimeofday(&main__1__3__2__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", main__1__3__2__1__tstr, (signed int)main__1__3__2__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Can't read specified config file!\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", main__1__3__2__1__tstr, (signed int)main__1__3__2__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Can't read specified config file!\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)main__1__3__2__1__tstr);
      }

  }

  else
    if(!(Debug == 0))
    {
      signed long int main__1__4__1__t;
      struct timeval main__1__4__1__tv;
      char *main__1__4__1__tstr;
      main__1__4__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_8;
      return_value_ctime_8=ctime(&main__1__4__1__t);
      main__1__4__1__tstr=g_strdup(return_value_ctime_8);
      unsigned long int return_value_strlen_9;
      return_value_strlen_9=strlen(main__1__4__1__tstr);
      main__1__4__1__tstr[(signed long int)(return_value_strlen_9 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main__1__4__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main__1__4__1__tstr, (signed int)main__1__4__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "No config file specified, using defaults...\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main__1__4__1__tstr, (signed int)main__1__4__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "No config file specified, using defaults...\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main__1__4__1__tstr);
    }

  cmd_buf = (char *)(void *)0;
  n = (unsigned long int)0;
  signed long int return_value_spd_getline_10;
  return_value_spd_getline_10=spd_getline(&cmd_buf, &n, stdin);
  ret = (signed int)return_value_spd_getline_10;
  if(ret == -1)
  {
    if(!(Debug == 0))
    {
      signed long int main__1__5__1__t;
      struct timeval main__1__5__1__tv;
      char *main__1__5__1__tstr;
      main__1__5__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_11;
      return_value_ctime_11=ctime(&main__1__5__1__t);
      main__1__5__1__tstr=g_strdup(return_value_ctime_11);
      unsigned long int return_value_strlen_12;
      return_value_strlen_12=strlen(main__1__5__1__tstr);
      main__1__5__1__tstr[(signed long int)(return_value_strlen_12 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main__1__5__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main__1__5__1__tstr, (signed int)main__1__5__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Broken pipe when reading INIT, exiting... \n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main__1__5__1__tstr, (signed int)main__1__5__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Broken pipe when reading INIT, exiting... \n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main__1__5__1__tstr);
    }

    module_close();
    exit(2);
  }

  signed int return_value_strcmp_15;
  return_value_strcmp_15=strcmp(cmd_buf, "INIT\n");
  if(!(return_value_strcmp_15 == 0))
  {
    if(!(Debug == 0))
    {
      signed long int main__1__6__1__t;
      struct timeval main__1__6__1__tv;
      char *main__1__6__1__tstr;
      main__1__6__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_13;
      return_value_ctime_13=ctime(&main__1__6__1__t);
      main__1__6__1__tstr=g_strdup(return_value_ctime_13);
      unsigned long int return_value_strlen_14;
      return_value_strlen_14=strlen(main__1__6__1__tstr);
      main__1__6__1__tstr[(signed long int)(return_value_strlen_14 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main__1__6__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main__1__6__1__tstr, (signed int)main__1__6__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "ERROR: Wrong communication from module client: didn't call INIT\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main__1__6__1__tstr, (signed int)main__1__6__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "ERROR: Wrong communication from module client: didn't call INIT\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main__1__6__1__tstr);
    }

    module_close();
    exit(3);
  }

  ret=module_init(&status_info);
  if(status_info == ((char *)NULL))
    status_info=g_strdup("unknown, was not set by module");

  if(!(ret == 0))
  {
    printf("399-%s\n", status_info);
    printf("%s\n", (const void *)"399 ERR CANT INIT MODULE");
    g_free((void *)status_info);
    module_close();
    exit(1);
  }

  printf("299-%s\n", status_info);
  ret = printf("%s\n", (const void *)"299 OK LOADED SUCCESSFULLY");
  if(!(ret >= 0))
  {
    if(!(Debug == 0))
    {
      signed long int main__1__9__1__t;
      struct timeval main__1__9__1__tv;
      char *main__1__9__1__tstr;
      main__1__9__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_16;
      return_value_ctime_16=ctime(&main__1__9__1__t);
      main__1__9__1__tstr=g_strdup(return_value_ctime_16);
      unsigned long int return_value_strlen_17;
      return_value_strlen_17=strlen(main__1__9__1__tstr);
      main__1__9__1__tstr[(signed long int)(return_value_strlen_17 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main__1__9__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main__1__9__1__tstr, (signed int)main__1__9__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Broken pipe, exiting...\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main__1__9__1__tstr, (signed int)main__1__9__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main__1__9__1__tstr);
    }

    module_close();
    exit(2);
  }

  fflush(stdout);
  g_free((void *)status_info);
  g_free((void *)cmd_buf);
  signed int return_value_strcmp_70;
  signed int return_value_strcmp_69;
  signed int return_value_strcmp_68;
  signed int return_value_strcmp_67;
  signed int return_value_strcmp_66;
  signed int return_value_strcmp_65;
  signed int return_value_strcmp_64;
  signed int return_value_strcmp_63;
  signed int return_value_strcmp_62;
  unsigned long int return_value_strlen_60;
  signed int return_value_strncmp_61;
  signed int return_value_strcmp_59;
  while((_Bool)1)
  {
    cmd_buf = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline_18;
    return_value_spd_getline_18=spd_getline(&cmd_buf, &n, stdin);
    ret = (signed int)return_value_spd_getline_18;
    if(ret == -1)
    {
      if(!(Debug == 0))
      {
        signed long int main__1__10__1__1__t;
        struct timeval main__1__10__1__1__tv;
        char *main__1__10__1__1__tstr;
        main__1__10__1__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_19;
        return_value_ctime_19=ctime(&main__1__10__1__1__t);
        main__1__10__1__1__tstr=g_strdup(return_value_ctime_19);
        unsigned long int return_value_strlen_20;
        return_value_strlen_20=strlen(main__1__10__1__1__tstr);
        main__1__10__1__1__tstr[(signed long int)(return_value_strlen_20 - (unsigned long int)1)] = (char)0;
        gettimeofday(&main__1__10__1__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", main__1__10__1__1__tstr, (signed int)main__1__10__1__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Broken pipe, exiting... \n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", main__1__10__1__1__tstr, (signed int)main__1__10__1__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Broken pipe, exiting... \n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)main__1__10__1__1__tstr);
      }

      ret = 2;
      break;
    }

    if(!(Debug == 0))
    {
      signed long int main__1__10__2__t;
      struct timeval main__1__10__2__tv;
      char *main__1__10__2__tstr;
      main__1__10__2__t=time((signed long int *)(void *)0);
      char *return_value_ctime_21;
      return_value_ctime_21=ctime(&main__1__10__2__t);
      main__1__10__2__tstr=g_strdup(return_value_ctime_21);
      unsigned long int return_value_strlen_22;
      return_value_strlen_22=strlen(main__1__10__2__tstr);
      main__1__10__2__tstr[(signed long int)(return_value_strlen_22 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main__1__10__2__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main__1__10__2__tstr, (signed int)main__1__10__2__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "CMD: <%s>", cmd_buf);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main__1__10__2__tstr, (signed int)main__1__10__2__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "CMD: <%s>", cmd_buf);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main__1__10__2__tstr);
    }

    signed int return_value_strcmp_71;
    return_value_strcmp_71=strcmp(cmd_buf, "SPEAK\n");
    if(return_value_strcmp_71 == 0)
    {
      char *main__1__10__3__msg;
      pthread_mutex_lock(&module_stdout_mutex);
      char *return_value_do_speak_25;
      return_value_do_speak_25=do_speak();
      main__1__10__3__msg = (char *)return_value_do_speak_25;
      signed int return_value_printf_26 = printf("%s\n", main__1__10__3__msg);
      if(!(return_value_printf_26 >= 0))
      {
        if(!(Debug == 0))
        {
          signed long int main__1__10__3__1__1__t;
          struct timeval main__1__10__3__1__1__tv;
          char *main__1__10__3__1__1__tstr;
          main__1__10__3__1__1__t=time((signed long int *)(void *)0);
          char *return_value_ctime_23;
          return_value_ctime_23=ctime(&main__1__10__3__1__1__t);
          main__1__10__3__1__1__tstr=g_strdup(return_value_ctime_23);
          unsigned long int return_value_strlen_24;
          return_value_strlen_24=strlen(main__1__10__3__1__1__tstr);
          main__1__10__3__1__1__tstr[(signed long int)(return_value_strlen_24 - (unsigned long int)1)] = (char)0;
          gettimeofday(&main__1__10__3__1__1__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", main__1__10__3__1__1__tstr, (signed int)main__1__10__3__1__1__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Broken pipe, exiting...\n");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", main__1__10__3__1__1__tstr, (signed int)main__1__10__3__1__1__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)main__1__10__3__1__1__tstr);
        }

        ret = 2;
        break;
      }

      fflush(stdout);
      pthread_mutex_unlock(&module_stdout_mutex);
      g_free((void *)main__1__10__3__msg);
    }

    else
    {
      return_value_strcmp_70=strcmp(cmd_buf, "SOUND_ICON\n");
      if(return_value_strcmp_70 == 0)
      {
        char *main__1__10__4__msg;
        pthread_mutex_lock(&module_stdout_mutex);
        char *return_value_do_sound_icon_29;
        return_value_do_sound_icon_29=do_sound_icon();
        main__1__10__4__msg = (char *)return_value_do_sound_icon_29;
        signed int return_value_printf_30 = printf("%s\n", main__1__10__4__msg);
        if(!(return_value_printf_30 >= 0))
        {
          if(!(Debug == 0))
          {
            signed long int main__1__10__4__1__1__t;
            struct timeval main__1__10__4__1__1__tv;
            char *main__1__10__4__1__1__tstr;
            main__1__10__4__1__1__t=time((signed long int *)(void *)0);
            char *return_value_ctime_27;
            return_value_ctime_27=ctime(&main__1__10__4__1__1__t);
            main__1__10__4__1__1__tstr=g_strdup(return_value_ctime_27);
            unsigned long int return_value_strlen_28;
            return_value_strlen_28=strlen(main__1__10__4__1__1__tstr);
            main__1__10__4__1__1__tstr[(signed long int)(return_value_strlen_28 - (unsigned long int)1)] = (char)0;
            gettimeofday(&main__1__10__4__1__1__tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", main__1__10__4__1__1__tstr, (signed int)main__1__10__4__1__1__tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "Broken pipe, exiting...\n");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", main__1__10__4__1__1__tstr, (signed int)main__1__10__4__1__1__tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)main__1__10__4__1__1__tstr);
          }

          ret = 2;
          break;
        }

        fflush(stdout);
        pthread_mutex_unlock(&module_stdout_mutex);
        g_free((void *)main__1__10__4__msg);
      }

      else
      {
        return_value_strcmp_69=strcmp(cmd_buf, "CHAR\n");
        if(return_value_strcmp_69 == 0)
        {
          char *main__1__10__5__msg;
          pthread_mutex_lock(&module_stdout_mutex);
          char *return_value_do_char_33;
          return_value_do_char_33=do_char();
          main__1__10__5__msg = (char *)return_value_do_char_33;
          signed int return_value_printf_34 = printf("%s\n", main__1__10__5__msg);
          if(!(return_value_printf_34 >= 0))
          {
            if(!(Debug == 0))
            {
              signed long int main__1__10__5__1__1__t;
              struct timeval main__1__10__5__1__1__tv;
              char *main__1__10__5__1__1__tstr;
              main__1__10__5__1__1__t=time((signed long int *)(void *)0);
              char *return_value_ctime_31;
              return_value_ctime_31=ctime(&main__1__10__5__1__1__t);
              main__1__10__5__1__1__tstr=g_strdup(return_value_ctime_31);
              unsigned long int return_value_strlen_32;
              return_value_strlen_32=strlen(main__1__10__5__1__1__tstr);
              main__1__10__5__1__1__tstr[(signed long int)(return_value_strlen_32 - (unsigned long int)1)] = (char)0;
              gettimeofday(&main__1__10__5__1__1__tv, (struct timezone *)(void *)0);
              fprintf(stderr, " %s [%d]", main__1__10__5__1__1__tstr, (signed int)main__1__10__5__1__1__tv.tv_usec);
              fprintf(stderr, ": ");
              fprintf(stderr, "Broken pipe, exiting...\n");
              fprintf(stderr, "\n");
              fflush(stderr);
              if(Debug == 2 || Debug == 3)
              {
                fprintf(CustomDebugFile, " %s [%d]", main__1__10__5__1__1__tstr, (signed int)main__1__10__5__1__1__tv.tv_usec);
                fprintf(CustomDebugFile, ": ");
                fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                fprintf(CustomDebugFile, "\n");
                fflush(CustomDebugFile);
              }

              g_free((void *)main__1__10__5__1__1__tstr);
            }

            ret = 2;
            break;
          }

          fflush(stdout);
          pthread_mutex_unlock(&module_stdout_mutex);
          g_free((void *)main__1__10__5__msg);
        }

        else
        {
          return_value_strcmp_68=strcmp(cmd_buf, "KEY\n");
          if(return_value_strcmp_68 == 0)
          {
            char *main__1__10__6__msg;
            pthread_mutex_lock(&module_stdout_mutex);
            char *return_value_do_key_37;
            return_value_do_key_37=do_key();
            main__1__10__6__msg = (char *)return_value_do_key_37;
            signed int return_value_printf_38 = printf("%s\n", main__1__10__6__msg);
            if(!(return_value_printf_38 >= 0))
            {
              if(!(Debug == 0))
              {
                signed long int main__1__10__6__1__1__t;
                struct timeval main__1__10__6__1__1__tv;
                char *main__1__10__6__1__1__tstr;
                main__1__10__6__1__1__t=time((signed long int *)(void *)0);
                char *return_value_ctime_35;
                return_value_ctime_35=ctime(&main__1__10__6__1__1__t);
                main__1__10__6__1__1__tstr=g_strdup(return_value_ctime_35);
                unsigned long int return_value_strlen_36;
                return_value_strlen_36=strlen(main__1__10__6__1__1__tstr);
                main__1__10__6__1__1__tstr[(signed long int)(return_value_strlen_36 - (unsigned long int)1)] = (char)0;
                gettimeofday(&main__1__10__6__1__1__tv, (struct timezone *)(void *)0);
                fprintf(stderr, " %s [%d]", main__1__10__6__1__1__tstr, (signed int)main__1__10__6__1__1__tv.tv_usec);
                fprintf(stderr, ": ");
                fprintf(stderr, "Broken pipe, exiting...\n");
                fprintf(stderr, "\n");
                fflush(stderr);
                if(Debug == 2 || Debug == 3)
                {
                  fprintf(CustomDebugFile, " %s [%d]", main__1__10__6__1__1__tstr, (signed int)main__1__10__6__1__1__tv.tv_usec);
                  fprintf(CustomDebugFile, ": ");
                  fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                  fprintf(CustomDebugFile, "\n");
                  fflush(CustomDebugFile);
                }

                g_free((void *)main__1__10__6__1__1__tstr);
              }

              ret = 2;
              break;
            }

            fflush(stdout);
            pthread_mutex_unlock(&module_stdout_mutex);
            g_free((void *)main__1__10__6__msg);
          }

          else
          {
            return_value_strcmp_67=strcmp(cmd_buf, "STOP\n");
            if(return_value_strcmp_67 == 0)
              do_stop();

            else
            {
              return_value_strcmp_66=strcmp(cmd_buf, "PAUSE\n");
              if(return_value_strcmp_66 == 0)
                do_pause();

              else
              {
                return_value_strcmp_65=strcmp(cmd_buf, "LIST VOICES\n");
                if(return_value_strcmp_65 == 0)
                {
                  char *main__1__10__9__msg;
                  pthread_mutex_lock(&module_stdout_mutex);
                  char *return_value_do_list_voices_41;
                  return_value_do_list_voices_41=do_list_voices();
                  main__1__10__9__msg = (char *)return_value_do_list_voices_41;
                  signed int return_value_printf_42 = printf("%s\n", main__1__10__9__msg);
                  if(!(return_value_printf_42 >= 0))
                  {
                    if(!(Debug == 0))
                    {
                      signed long int main__1__10__9__1__1__t;
                      struct timeval main__1__10__9__1__1__tv;
                      char *main__1__10__9__1__1__tstr;
                      main__1__10__9__1__1__t=time((signed long int *)(void *)0);
                      char *return_value_ctime_39;
                      return_value_ctime_39=ctime(&main__1__10__9__1__1__t);
                      main__1__10__9__1__1__tstr=g_strdup(return_value_ctime_39);
                      unsigned long int return_value_strlen_40;
                      return_value_strlen_40=strlen(main__1__10__9__1__1__tstr);
                      main__1__10__9__1__1__tstr[(signed long int)(return_value_strlen_40 - (unsigned long int)1)] = (char)0;
                      gettimeofday(&main__1__10__9__1__1__tv, (struct timezone *)(void *)0);
                      fprintf(stderr, " %s [%d]", main__1__10__9__1__1__tstr, (signed int)main__1__10__9__1__1__tv.tv_usec);
                      fprintf(stderr, ": ");
                      fprintf(stderr, "Broken pipe, exiting...\n");
                      fprintf(stderr, "\n");
                      fflush(stderr);
                      if(Debug == 2 || Debug == 3)
                      {
                        fprintf(CustomDebugFile, " %s [%d]", main__1__10__9__1__1__tstr, (signed int)main__1__10__9__1__1__tv.tv_usec);
                        fprintf(CustomDebugFile, ": ");
                        fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                        fprintf(CustomDebugFile, "\n");
                        fflush(CustomDebugFile);
                      }

                      g_free((void *)main__1__10__9__1__1__tstr);
                    }

                    ret = 2;
                    break;
                  }

                  fflush(stdout);
                  pthread_mutex_unlock(&module_stdout_mutex);
                  g_free((void *)main__1__10__9__msg);
                }

                else
                {
                  return_value_strcmp_64=strcmp(cmd_buf, "SET\n");
                  if(return_value_strcmp_64 == 0)
                  {
                    char *main__1__10__10__msg;
                    pthread_mutex_lock(&module_stdout_mutex);
                    char *return_value_do_set_45;
                    return_value_do_set_45=do_set();
                    main__1__10__10__msg = (char *)return_value_do_set_45;
                    signed int return_value_printf_46 = printf("%s\n", main__1__10__10__msg);
                    if(!(return_value_printf_46 >= 0))
                    {
                      if(!(Debug == 0))
                      {
                        signed long int main__1__10__10__1__1__t;
                        struct timeval main__1__10__10__1__1__tv;
                        char *main__1__10__10__1__1__tstr;
                        main__1__10__10__1__1__t=time((signed long int *)(void *)0);
                        char *return_value_ctime_43;
                        return_value_ctime_43=ctime(&main__1__10__10__1__1__t);
                        main__1__10__10__1__1__tstr=g_strdup(return_value_ctime_43);
                        unsigned long int return_value_strlen_44;
                        return_value_strlen_44=strlen(main__1__10__10__1__1__tstr);
                        main__1__10__10__1__1__tstr[(signed long int)(return_value_strlen_44 - (unsigned long int)1)] = (char)0;
                        gettimeofday(&main__1__10__10__1__1__tv, (struct timezone *)(void *)0);
                        fprintf(stderr, " %s [%d]", main__1__10__10__1__1__tstr, (signed int)main__1__10__10__1__1__tv.tv_usec);
                        fprintf(stderr, ": ");
                        fprintf(stderr, "Broken pipe, exiting...\n");
                        fprintf(stderr, "\n");
                        fflush(stderr);
                        if(Debug == 2 || Debug == 3)
                        {
                          fprintf(CustomDebugFile, " %s [%d]", main__1__10__10__1__1__tstr, (signed int)main__1__10__10__1__1__tv.tv_usec);
                          fprintf(CustomDebugFile, ": ");
                          fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                          fprintf(CustomDebugFile, "\n");
                          fflush(CustomDebugFile);
                        }

                        g_free((void *)main__1__10__10__1__1__tstr);
                      }

                      ret = 2;
                      break;
                    }

                    fflush(stdout);
                    pthread_mutex_unlock(&module_stdout_mutex);
                    g_free((void *)main__1__10__10__msg);
                  }

                  else
                  {
                    return_value_strcmp_63=strcmp(cmd_buf, "AUDIO\n");
                    if(return_value_strcmp_63 == 0)
                    {
                      char *main__1__10__11__msg;
                      pthread_mutex_lock(&module_stdout_mutex);
                      char *return_value_do_audio_49;
                      return_value_do_audio_49=do_audio();
                      main__1__10__11__msg = (char *)return_value_do_audio_49;
                      signed int return_value_printf_50 = printf("%s\n", main__1__10__11__msg);
                      if(!(return_value_printf_50 >= 0))
                      {
                        if(!(Debug == 0))
                        {
                          signed long int main__1__10__11__1__1__t;
                          struct timeval main__1__10__11__1__1__tv;
                          char *main__1__10__11__1__1__tstr;
                          main__1__10__11__1__1__t=time((signed long int *)(void *)0);
                          char *return_value_ctime_47;
                          return_value_ctime_47=ctime(&main__1__10__11__1__1__t);
                          main__1__10__11__1__1__tstr=g_strdup(return_value_ctime_47);
                          unsigned long int return_value_strlen_48;
                          return_value_strlen_48=strlen(main__1__10__11__1__1__tstr);
                          main__1__10__11__1__1__tstr[(signed long int)(return_value_strlen_48 - (unsigned long int)1)] = (char)0;
                          gettimeofday(&main__1__10__11__1__1__tv, (struct timezone *)(void *)0);
                          fprintf(stderr, " %s [%d]", main__1__10__11__1__1__tstr, (signed int)main__1__10__11__1__1__tv.tv_usec);
                          fprintf(stderr, ": ");
                          fprintf(stderr, "Broken pipe, exiting...\n");
                          fprintf(stderr, "\n");
                          fflush(stderr);
                          if(Debug == 2 || Debug == 3)
                          {
                            fprintf(CustomDebugFile, " %s [%d]", main__1__10__11__1__1__tstr, (signed int)main__1__10__11__1__1__tv.tv_usec);
                            fprintf(CustomDebugFile, ": ");
                            fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                            fprintf(CustomDebugFile, "\n");
                            fflush(CustomDebugFile);
                          }

                          g_free((void *)main__1__10__11__1__1__tstr);
                        }

                        ret = 2;
                        break;
                      }

                      fflush(stdout);
                      pthread_mutex_unlock(&module_stdout_mutex);
                      g_free((void *)main__1__10__11__msg);
                    }

                    else
                    {
                      return_value_strcmp_62=strcmp(cmd_buf, "LOGLEVEL\n");
                      if(return_value_strcmp_62 == 0)
                      {
                        char *msg;
                        pthread_mutex_lock(&module_stdout_mutex);
                        char *return_value_do_loglevel_53;
                        return_value_do_loglevel_53=do_loglevel();
                        msg = (char *)return_value_do_loglevel_53;
                        signed int return_value_printf_54 = printf("%s\n", msg);
                        if(!(return_value_printf_54 >= 0))
                        {
                          if(!(Debug == 0))
                          {
                            signed long int t;
                            struct timeval tv;
                            char *tstr;
                            t=time((signed long int *)(void *)0);
                            char *return_value_ctime_51;
                            return_value_ctime_51=ctime(&t);
                            tstr=g_strdup(return_value_ctime_51);
                            unsigned long int return_value_strlen_52;
                            return_value_strlen_52=strlen(tstr);
                            tstr[(signed long int)(return_value_strlen_52 - (unsigned long int)1)] = (char)0;
                            gettimeofday(&tv, (struct timezone *)(void *)0);
                            fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
                            fprintf(stderr, ": ");
                            fprintf(stderr, "Broken pipe, exiting...\n");
                            fprintf(stderr, "\n");
                            fflush(stderr);
                            if(Debug == 2 || Debug == 3)
                            {
                              fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
                              fprintf(CustomDebugFile, ": ");
                              fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                              fprintf(CustomDebugFile, "\n");
                              fflush(CustomDebugFile);
                            }

                            g_free((void *)tstr);
                          }

                          ret = 2;
                          break;
                        }

                        fflush(stdout);
                        pthread_mutex_unlock(&module_stdout_mutex);
                        g_free((void *)msg);
                      }

                      else
                      {
                        return_value_strlen_60=strlen("DEBUG");
                        return_value_strncmp_61=strncmp(cmd_buf, "DEBUG", return_value_strlen_60);
                        if(return_value_strncmp_61 == 0)
                        {
                          char *main__1__10__13__msg;
                          pthread_mutex_lock(&module_stdout_mutex);
                          char *return_value_do_debug_57;
                          return_value_do_debug_57=do_debug(cmd_buf);
                          main__1__10__13__msg = (char *)return_value_do_debug_57;
                          signed int return_value_printf_58 = printf("%s\n", main__1__10__13__msg);
                          if(!(return_value_printf_58 >= 0))
                          {
                            if(!(Debug == 0))
                            {
                              signed long int main__1__10__13__1__1__t;
                              struct timeval main__1__10__13__1__1__tv;
                              char *main__1__10__13__1__1__tstr;
                              main__1__10__13__1__1__t=time((signed long int *)(void *)0);
                              char *return_value_ctime_55;
                              return_value_ctime_55=ctime(&main__1__10__13__1__1__t);
                              main__1__10__13__1__1__tstr=g_strdup(return_value_ctime_55);
                              unsigned long int return_value_strlen_56;
                              return_value_strlen_56=strlen(main__1__10__13__1__1__tstr);
                              main__1__10__13__1__1__tstr[(signed long int)(return_value_strlen_56 - (unsigned long int)1)] = (char)0;
                              gettimeofday(&main__1__10__13__1__1__tv, (struct timezone *)(void *)0);
                              fprintf(stderr, " %s [%d]", main__1__10__13__1__1__tstr, (signed int)main__1__10__13__1__1__tv.tv_usec);
                              fprintf(stderr, ": ");
                              fprintf(stderr, "Broken pipe, exiting...\n");
                              fprintf(stderr, "\n");
                              fflush(stderr);
                              if(Debug == 2 || Debug == 3)
                              {
                                fprintf(CustomDebugFile, " %s [%d]", main__1__10__13__1__1__tstr, (signed int)main__1__10__13__1__1__tv.tv_usec);
                                fprintf(CustomDebugFile, ": ");
                                fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                                fprintf(CustomDebugFile, "\n");
                                fflush(CustomDebugFile);
                              }

                              g_free((void *)main__1__10__13__1__1__tstr);
                            }

                            ret = 2;
                            break;
                          }

                          fflush(stdout);
                          pthread_mutex_unlock(&module_stdout_mutex);
                          g_free((void *)main__1__10__13__msg);
                        }

                        else
                        {
                          return_value_strcmp_59=strcmp(cmd_buf, "QUIT\n");
                          if(return_value_strcmp_59 == 0)
                          {
                            do_quit();
                            exit(0);
                          }

                          else
                          {
                            printf("300 ERR UNKNOWN COMMAND\n");
                            fflush(stdout);
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
    g_free((void *)cmd_buf);
  }
  module_close();
  exit(ret);
}

// module_add_config_option
// file module_utils.h line 214
struct configoption_t * module_add_config_option(struct configoption_t *options, signed int *num_options, char *name, signed int type, const char * (*callback)(struct command_t *, void *), void *info, unsigned long int context)
{
  struct configoption_t *opts;
  signed int num_config_options = *num_options;
  /* assertion name != ((void *)0) */
  assert(name != (char *)(void *)0);
  num_config_options = num_config_options + 1;
  void *return_value_g_realloc_1;
  return_value_g_realloc_1=g_realloc((void *)options, (unsigned long int)(num_config_options + 1) * sizeof(struct configoption_t) /*40ul*/ );
  opts = (struct configoption_t *)return_value_g_realloc_1;
  char *return_value_g_strdup_2;
  return_value_g_strdup_2=g_strdup(name);
  (opts + (signed long int)(num_config_options - 1))->name = (char *)return_value_g_strdup_2;
  (opts + (signed long int)(num_config_options - 1))->type = type;
  (opts + (signed long int)(num_config_options - 1))->callback = callback;
  (opts + (signed long int)(num_config_options - 1))->info = info;
  (opts + (signed long int)(num_config_options - 1))->context = context;
  *num_options = num_config_options;
  return opts;
}

// module_audio_init
// file module_utils.c line 947
signed int module_audio_init(char **status_info)
{
  char *error = ((char *)NULL);
  char **outputs;
  signed int i = 0;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Openning audio output system");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Openning audio output system");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  if(module_audio_pars[0l] == ((char *)NULL))
  {
    *status_info=g_strdup("Sound output method specified in configuration not supported. Please choose 'oss', 'alsa', 'nas', 'libao' or 'pulse'.");
    return -1;
  }

  else
  {
    outputs=g_strsplit(module_audio_pars[(signed long int)0], ",", 0);
    for( ; !(outputs[(signed long int)i] == ((char *)NULL)); i = i + 1)
    {
      module_audio_id=spd_audio_open(outputs[(signed long int)i], (void **)&module_audio_pars[(signed long int)1], &error);
      if(!(module_audio_id == ((struct anonymous_9 *)NULL)))
      {
        if(!(Debug == 0))
        {
          signed long int module_audio_init__1__3__1__1__t;
          struct timeval module_audio_init__1__3__1__1__tv;
          char *module_audio_init__1__3__1__1__tstr;
          module_audio_init__1__3__1__1__t=time((signed long int *)(void *)0);
          char *return_value_ctime_3;
          return_value_ctime_3=ctime(&module_audio_init__1__3__1__1__t);
          module_audio_init__1__3__1__1__tstr=g_strdup(return_value_ctime_3);
          unsigned long int return_value_strlen_4;
          return_value_strlen_4=strlen(module_audio_init__1__3__1__1__tstr);
          module_audio_init__1__3__1__1__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
          gettimeofday(&module_audio_init__1__3__1__1__tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", module_audio_init__1__3__1__1__tstr, (signed int)module_audio_init__1__3__1__1__tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Using %s audio output method", outputs[(signed long int)i]);
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", module_audio_init__1__3__1__1__tstr, (signed int)module_audio_init__1__3__1__1__tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Using %s audio output method", outputs[(signed long int)i]);
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)module_audio_init__1__3__1__1__tstr);
        }

        g_strfreev(outputs);
        *status_info=g_strdup("audio initialized successfully.");
        return 0;
      }

    }
    *status_info=g_strdup_printf("Opening sound device failed. Reason: %s. ", error);
    g_free((void *)error);
    g_strfreev(outputs);
    return -1;
  }
}

// module_child_dp_close
// file module_utils.c line 709
void module_child_dp_close(struct anonymous_16 dpipe)
{
  close(dpipe.pc[(signed long int)0]);
  close(dpipe.cp[(signed long int)1]);
}

// module_child_dp_init
// file module_utils.c line 702
void module_child_dp_init(struct anonymous_16 dpipe)
{
  close(dpipe.pc[(signed long int)1]);
  close(dpipe.cp[(signed long int)0]);
}

// module_child_dp_read
// file module_utils.c line 736
signed int module_child_dp_read(struct anonymous_16 dpipe, char *msg, unsigned long int maxlen)
{
  signed int bytes;
  signed long int return_value_read_1;
  do
  {
    return_value_read_1=read(dpipe.pc[(signed long int)0], (void *)msg, maxlen);
    bytes = (signed int)return_value_read_1;
    if(bytes >= 0)
      break;

    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    if(!(*return_value___errno_location_2 == 4))
    {
      fprintf(stderr, "FATAL ERROR in output module [%s:%d]:\n   Unable to read data", (const void *)"module_utils.c", 741);
      if(Debug >= 2)
        fprintf(CustomDebugFile, "FATAL ERROR in output module [%s:%d]:\n   Unable to read data", (const void *)"module_utils.c", 741);

      exit(1);
    }

  }
  while((_Bool)1);
  return bytes;
}

// module_child_dp_write
// file module_utils.c line 716
void module_child_dp_write(struct anonymous_16 dpipe, const char *msg, unsigned long int bytes)
{
  signed int ret;
  /* assertion msg != ((void *)0) */
  assert(msg != (const char *)(void *)0);
  signed long int return_value_write_1;
  return_value_write_1=write(dpipe.cp[(signed long int)1], (const void *)msg, bytes);
  ret = (signed int)return_value_write_1;
  /* assertion ret */
  assert(ret != 0);
}

// module_close
// file flite.c line 219
signed int module_close(void)
{
  if(!(Debug == 0))
  {
    signed long int module_close__1__1__t;
    struct timeval module_close__1__1__tv;
    char *module_close__1__1__tstr;
    module_close__1__1__t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&module_close__1__1__t);
    module_close__1__1__tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(module_close__1__1__tstr);
    module_close__1__1__tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_close__1__1__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_close__1__1__tstr, (signed int)module_close__1__1__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "flite: close()\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_close__1__1__tstr, (signed int)module_close__1__1__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "flite: close()\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_close__1__1__tstr);
  }

  if(!(Debug == 0))
  {
    signed long int module_close__1__2__t;
    struct timeval module_close__1__2__tv;
    char *module_close__1__2__tstr;
    module_close__1__2__t=time((signed long int *)(void *)0);
    char *return_value_ctime_3;
    return_value_ctime_3=ctime(&module_close__1__2__t);
    module_close__1__2__tstr=g_strdup(return_value_ctime_3);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(module_close__1__2__tstr);
    module_close__1__2__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_close__1__2__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_close__1__2__tstr, (signed int)module_close__1__2__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Stopping speech");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_close__1__2__tstr, (signed int)module_close__1__2__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Stopping speech");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_close__1__2__tstr);
  }

  if(!(flite_speaking == 0))
    module_stop();

  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_5;
    return_value_ctime_5=ctime(&t);
    tstr=g_strdup(return_value_ctime_5);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_6 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Terminating threads");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Terminating threads");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  signed int return_value_module_terminate_thread_7;
  return_value_module_terminate_thread_7=module_terminate_thread(flite_speak_thread);
  if(!(return_value_module_terminate_thread_7 == 0))
    return -1;

  else
  {
    g_free((void *)flite_voice);
    sem_destroy(&flite_semaphore);
    return 0;
  }
}

// module_get_ht_option
// file module_utils.c line 935
void * module_get_ht_option(struct _GHashTable *hash_table, const char *key)
{
  void *option;
  /* assertion key != ((void *)0) */
  assert(key != (const char *)(void *)0);
  option=g_hash_table_lookup(hash_table, (const void *)key);
  if(option == NULL)
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_1;
      return_value_ctime_1=ctime(&t);
      tstr=g_strdup(return_value_ctime_1);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Requested option by key %s not found.\n", key);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Requested option by key %s not found.\n", key);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

  }

  return option;
}

// module_get_message_part
// file module_utils.h line 161
signed int module_get_message_part(const char *message, char *part, unsigned int *pos, unsigned long int maxlen, const char *dividers)
{
  signed int i;
  signed int n;
  signed int num_dividers;
  signed int len;
  /* assertion part != ((void *)0) */
  assert(part != (char *)(void *)0);
  /* assertion message != ((void *)0) */
  assert(message != (const char *)(void *)0);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(message);
  len = (signed int)return_value_strlen_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if((signed int)message[(signed long int)*pos] == 0)
    return -1;

  else
  {
    if(!(dividers == ((const char *)NULL)))
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(dividers);
      num_dividers = (signed int)return_value_strlen_2;
    }

    else
      num_dividers = 0;
    i = 0;
    for( ; maxlen + 18446744073709551615ul >= (unsigned long int)i; i = i + 1)
    {
      part[(signed long int)i] = message[(signed long int)*pos];
      if((signed int)part[(signed long int)i] == 0)
        return i;

      if(len + -1 + -i >= 3)
      {
        if((signed int)message[(signed long int)(1u + *pos)] == 32)
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = (signed int)message[(signed long int)(*pos + (unsigned int)1)] == 10 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = (signed int)message[(signed long int)(*pos + (unsigned int)1)] == 13 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
        {
          n = 0;
          for( ; num_dividers + -1 >= n; n = n + 1)
            if(part[(signed long int)i] == dividers[(signed long int)n])
            {
              part[(signed long int)(i + 1)] = (char)0;
              *pos = *pos + 1u;
              return i + 1;
            }

          if((signed int)message[(signed long int)*pos] == 10)
          {
            if((signed int)message[(signed long int)(1u + *pos)] == 10)
            {
              part[(signed long int)(i + 1)] = (char)0;
              *pos = *pos + 1u;
              return i + 1;
            }

          }

          if(len + -1 + -i >= 5)
          {
            if((signed int)message[(signed long int)*pos] == 13)
            {
              if((signed int)message[(signed long int)(1u + *pos)] == 10)
              {
                if((signed int)message[(signed long int)(2u + *pos)] == 13)
                {
                  if((signed int)message[(signed long int)(3u + *pos)] == 10)
                  {
                    part[(signed long int)(i + 1)] = (char)0;
                    *pos = *pos + 1u;
                    return i + 1;
                  }

                }

              }

            }

          }

        }

      }

      *pos = *pos + 1u;
    }
    part[(signed long int)i] = (char)0;
    return i;
  }
}

// module_init
// file flite.c line 94
signed int module_init(char **status_info)
{
  signed int ret;
  struct _GString *info;
  if(!(Debug == 0))
  {
    signed long int module_init__1__1__t;
    struct timeval module_init__1__1__tv;
    char *module_init__1__1__tstr;
    module_init__1__1__t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&module_init__1__1__t);
    module_init__1__1__tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(module_init__1__1__tstr);
    module_init__1__1__tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_init__1__1__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_init__1__1__tstr, (signed int)module_init__1__1__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Module init");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_init__1__1__tstr, (signed int)module_init__1__1__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Module init");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_init__1__1__tstr);
  }

  module_index_mark = (char *)(void *)0;
  *status_info = (char *)(void *)0;
  info=g_string_new("");
  flite_init();
  flite_voice=register_cmu_us_kal16();
  if(flite_voice == ((struct cst_voice_struct *)NULL))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&t);
      tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Couldn't register the basic kal voice.\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Couldn't register the basic kal voice.\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    *status_info=g_strdup("Can't register the basic kal voice. Currently only kal is supported. Seems your FLite installation is incomplete.");
    return -1;
  }

  else
  {
    if(!(Debug == 0))
    {
      signed long int module_init__1__3__t;
      struct timeval module_init__1__3__tv;
      char *module_init__1__3__tstr;
      module_init__1__3__t=time((signed long int *)(void *)0);
      char *return_value_ctime_5;
      return_value_ctime_5=ctime(&module_init__1__3__t);
      module_init__1__3__tstr=g_strdup(return_value_ctime_5);
      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen(module_init__1__3__tstr);
      module_init__1__3__tstr[(signed long int)(return_value_strlen_6 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_init__1__3__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_init__1__3__tstr, (signed int)module_init__1__3__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "FliteMaxChunkLength = %d\n", FliteMaxChunkLength);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_init__1__3__tstr, (signed int)module_init__1__3__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "FliteMaxChunkLength = %d\n", FliteMaxChunkLength);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_init__1__3__tstr);
    }

    if(!(Debug == 0))
    {
      signed long int module_init__1__4__t;
      struct timeval module_init__1__4__tv;
      char *module_init__1__4__tstr;
      module_init__1__4__t=time((signed long int *)(void *)0);
      char *return_value_ctime_7;
      return_value_ctime_7=ctime(&module_init__1__4__t);
      module_init__1__4__tstr=g_strdup(return_value_ctime_7);
      unsigned long int return_value_strlen_8;
      return_value_strlen_8=strlen(module_init__1__4__tstr);
      module_init__1__4__tstr[(signed long int)(return_value_strlen_8 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_init__1__4__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_init__1__4__tstr, (signed int)module_init__1__4__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "FliteDelimiters = %s\n", FliteDelimiters);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_init__1__4__tstr, (signed int)module_init__1__4__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "FliteDelimiters = %s\n", FliteDelimiters);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_init__1__4__tstr);
    }

    void *return_value_g_malloc_9;
    return_value_g_malloc_9=g_malloc(sizeof(char *) /*8ul*/ );
    flite_message = (char **)return_value_g_malloc_9;
    *flite_message = (char *)(void *)0;
    sem_init(&flite_semaphore, 0, (unsigned int)0);
    if(!(Debug == 0))
    {
      signed long int module_init__1__5__t;
      struct timeval module_init__1__5__tv;
      char *module_init__1__5__tstr;
      module_init__1__5__t=time((signed long int *)(void *)0);
      char *return_value_ctime_10;
      return_value_ctime_10=ctime(&module_init__1__5__t);
      module_init__1__5__tstr=g_strdup(return_value_ctime_10);
      unsigned long int return_value_strlen_11;
      return_value_strlen_11=strlen(module_init__1__5__tstr);
      module_init__1__5__tstr[(signed long int)(return_value_strlen_11 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_init__1__5__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_init__1__5__tstr, (signed int)module_init__1__5__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Flite: creating new thread for flite_speak\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_init__1__5__tstr, (signed int)module_init__1__5__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Flite: creating new thread for flite_speak\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_init__1__5__tstr);
    }

    flite_speaking = 0;
    ret=pthread_create(&flite_speak_thread, (const union pthread_attr_t *)(void *)0, _flite_speak, (void *)0);
    if(!(ret == 0))
    {
      if(!(Debug == 0))
      {
        signed long int module_init__1__6__1__t;
        struct timeval module_init__1__6__1__tv;
        char *module_init__1__6__1__tstr;
        module_init__1__6__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_12;
        return_value_ctime_12=ctime(&module_init__1__6__1__t);
        module_init__1__6__1__tstr=g_strdup(return_value_ctime_12);
        unsigned long int return_value_strlen_13;
        return_value_strlen_13=strlen(module_init__1__6__1__tstr);
        module_init__1__6__1__tstr[(signed long int)(return_value_strlen_13 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_init__1__6__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_init__1__6__1__tstr, (signed int)module_init__1__6__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Flite: thread failed\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_init__1__6__1__tstr, (signed int)module_init__1__6__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Flite: thread failed\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_init__1__6__1__tstr);
      }

      *status_info=g_strdup("The module couldn't initialize threads This could be either an internal problem or an architecture problem. If you are sure your architecture supports threads, please report a bug.");
      return -1;
    }

    else
    {
      *status_info=g_strdup("Flite initialized successfully.");
      return 0;
    }
  }
}

// module_list_voices
// file flite.c line 152
struct anonymous_0 ** module_list_voices(void)
{
  return (struct anonymous_0 **)(void *)0;
}

// module_load
// file flite.c line 76
signed int module_load(void)
{
  module_dc_options = (struct configoption_t *)(void *)0;
  msg_settings.rate = 0;
  msg_settings.pitch = 0;
  msg_settings.volume = 0;
  msg_settings.punctuation_mode = (enum anonymous_6)SPD_PUNCT_NONE;
  msg_settings.spelling_mode = (enum anonymous_7)SPD_SPELL_OFF;
  msg_settings.cap_let_recogn = (enum anonymous_8)SPD_CAP_NONE;
  msg_settings.voice_type = (enum anonymous_5)SPD_MALE1;
  msg_settings.voice.name = (char *)(void *)0;
  msg_settings.voice.language = (char *)(void *)0;
  msg_settings_old.rate = -101;
  msg_settings_old.pitch = -101;
  msg_settings_old.volume = -101;
  msg_settings_old.punctuation_mode = (enum anonymous_6)-1;
  msg_settings_old.spelling_mode = (enum anonymous_7)-1;
  msg_settings_old.cap_let_recogn = (enum anonymous_8)-1;
  msg_settings_old.voice_type = (enum anonymous_5)-1;
  msg_settings_old.voice.name = (char *)(void *)0;
  msg_settings_old.voice.language = (char *)(void *)0;
  Debug = 0;
  module_dc_options=module_add_config_option(module_dc_options, &module_num_dc_options, "Debug", 1, Debug_cb, (void *)0, (unsigned long int)0);
  FliteMaxChunkLength = 300;
  module_dc_options=module_add_config_option(module_dc_options, &module_num_dc_options, "FliteMaxChunkLength", 1, FliteMaxChunkLength_cb, (void *)0, (unsigned long int)0);
  FliteDelimiters=g_strdup(".");
  module_dc_options=module_add_config_option(module_dc_options, &module_num_dc_options, "FliteDelimiters", 2, FliteDelimiters_cb, (void *)0, (unsigned long int)0);
  return 0;
}

// module_parent_dp_close
// file module_utils.c line 695
void module_parent_dp_close(struct anonymous_16 dpipe)
{
  close(dpipe.pc[(signed long int)1]);
  close(dpipe.cp[(signed long int)0]);
}

// module_parent_dp_init
// file module_utils.c line 688
void module_parent_dp_init(struct anonymous_16 dpipe)
{
  close(dpipe.pc[(signed long int)0]);
  close(dpipe.cp[(signed long int)1]);
}

// module_parent_dp_read
// file module_utils.c line 748
signed int module_parent_dp_read(struct anonymous_16 dpipe, char *msg, unsigned long int maxlen)
{
  signed int bytes;
  signed long int return_value_read_1;
  do
  {
    return_value_read_1=read(dpipe.cp[(signed long int)0], (void *)msg, maxlen);
    bytes = (signed int)return_value_read_1;
    if(bytes >= 0)
      break;

    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    if(!(*return_value___errno_location_2 == 4))
    {
      fprintf(stderr, "FATAL ERROR in output module [%s:%d]:\n   Unable to read data", (const void *)"module_utils.c", 753);
      if(Debug >= 2)
        fprintf(CustomDebugFile, "FATAL ERROR in output module [%s:%d]:\n   Unable to read data", (const void *)"module_utils.c", 753);

      exit(1);
    }

  }
  while((_Bool)1);
  return bytes;
}

// module_parent_dp_write
// file module_utils.c line 725
signed int module_parent_dp_write(struct anonymous_16 dpipe, const char *msg, unsigned long int bytes)
{
  signed long int ret;
  /* assertion msg != ((void *)0) */
  assert(msg != (const char *)(void *)0);
  if(!(Debug == 0))
  {
    signed long int module_parent_dp_write__1__1__t;
    struct timeval module_parent_dp_write__1__1__tv;
    char *module_parent_dp_write__1__1__tstr;
    module_parent_dp_write__1__1__t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&module_parent_dp_write__1__1__t);
    module_parent_dp_write__1__1__tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(module_parent_dp_write__1__1__tstr);
    module_parent_dp_write__1__1__tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_parent_dp_write__1__1__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_parent_dp_write__1__1__tstr, (signed int)module_parent_dp_write__1__1__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "going to write %lu bytes", (unsigned long int)bytes);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_parent_dp_write__1__1__tstr, (signed int)module_parent_dp_write__1__1__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "going to write %lu bytes", (unsigned long int)bytes);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_parent_dp_write__1__1__tstr);
  }

  ret=write(dpipe.pc[(signed long int)1], (const void *)msg, bytes);
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_3;
    return_value_ctime_3=ctime(&t);
    tstr=g_strdup(return_value_ctime_3);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "written %ld bytes", (signed long int)ret);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "written %ld bytes", (signed long int)ret);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  return (signed int)ret;
}

// module_parent_wait_continue
// file module_utils.c line 668
signed int module_parent_wait_continue(struct anonymous_16 dpipe)
{
  char msg[16l];
  signed int bytes;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "parent: Waiting for response from child...\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "parent: Waiting for response from child...\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  while((_Bool)1)
  {
    bytes=module_parent_dp_read(dpipe, msg, (unsigned long int)8);
    if(bytes == 0)
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wait_continue__1__2__1__1__t;
        struct timeval module_parent_wait_continue__1__2__1__1__tv;
        char *module_parent_wait_continue__1__2__1__1__tstr;
        module_parent_wait_continue__1__2__1__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_3;
        return_value_ctime_3=ctime(&module_parent_wait_continue__1__2__1__1__t);
        module_parent_wait_continue__1__2__1__1__tstr=g_strdup(return_value_ctime_3);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(module_parent_wait_continue__1__2__1__1__tstr);
        module_parent_wait_continue__1__2__1__1__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wait_continue__1__2__1__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wait_continue__1__2__1__1__tstr, (signed int)module_parent_wait_continue__1__2__1__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "parent: Read bytes 0, child stopped\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wait_continue__1__2__1__1__tstr, (signed int)module_parent_wait_continue__1__2__1__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "parent: Read bytes 0, child stopped\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wait_continue__1__2__1__1__tstr);
      }

      return 1;
    }

    if((signed int)msg[0l] == 67)
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wait_continue__1__2__2__1__t;
        struct timeval module_parent_wait_continue__1__2__2__1__tv;
        char *module_parent_wait_continue__1__2__2__1__tstr;
        module_parent_wait_continue__1__2__2__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_5;
        return_value_ctime_5=ctime(&module_parent_wait_continue__1__2__2__1__t);
        module_parent_wait_continue__1__2__2__1__tstr=g_strdup(return_value_ctime_5);
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(module_parent_wait_continue__1__2__2__1__tstr);
        module_parent_wait_continue__1__2__2__1__tstr[(signed long int)(return_value_strlen_6 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wait_continue__1__2__2__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wait_continue__1__2__2__1__tstr, (signed int)module_parent_wait_continue__1__2__2__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "parent: Ok, received report to continue...\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wait_continue__1__2__2__1__tstr, (signed int)module_parent_wait_continue__1__2__2__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "parent: Ok, received report to continue...\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wait_continue__1__2__2__1__tstr);
      }

      return 0;
    }

  }
}

// module_parent_wfork
// file module_utils.c line 608
unsigned long int module_parent_wfork(struct anonymous_16 dpipe, const char *message, enum anonymous_14 msgtype, const unsigned long int maxlen, const char *dividers, signed int *pause_requested)
{
  unsigned int pos = (unsigned int)0;
  char msg[16l];
  char *buf;
  signed int bytes;
  unsigned long int read_bytes = (unsigned long int)0;
  if(!(Debug == 0))
  {
    signed long int module_parent_wfork__1__1__t;
    struct timeval module_parent_wfork__1__1__tv;
    char *module_parent_wfork__1__1__tstr;
    module_parent_wfork__1__1__t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&module_parent_wfork__1__1__t);
    module_parent_wfork__1__1__tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(module_parent_wfork__1__1__tstr);
    module_parent_wfork__1__1__tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_parent_wfork__1__1__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_parent_wfork__1__1__tstr, (signed int)module_parent_wfork__1__1__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Entering parent process, closing pipes");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork__1__1__tstr, (signed int)module_parent_wfork__1__1__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Entering parent process, closing pipes");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_parent_wfork__1__1__tstr);
  }

  void *return_value_g_malloc_3;
  return_value_g_malloc_3=g_malloc((maxlen + (unsigned long int)1) * sizeof(char) /*1ul*/ );
  buf = (char *)return_value_g_malloc_3;
  module_parent_dp_init(dpipe);
  pos = (unsigned int)0;
  while((_Bool)1)
  {
    if(!(Debug == 0))
    {
      signed long int module_parent_wfork__1__2__1__t;
      struct timeval module_parent_wfork__1__2__1__tv;
      char *module_parent_wfork__1__2__1__tstr;
      module_parent_wfork__1__2__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_4;
      return_value_ctime_4=ctime(&module_parent_wfork__1__2__1__t);
      module_parent_wfork__1__2__1__tstr=g_strdup(return_value_ctime_4);
      unsigned long int return_value_strlen_5;
      return_value_strlen_5=strlen(module_parent_wfork__1__2__1__tstr);
      module_parent_wfork__1__2__1__tstr[(signed long int)(return_value_strlen_5 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_parent_wfork__1__2__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_parent_wfork__1__2__1__tstr, (signed int)module_parent_wfork__1__2__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "  Looping...\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork__1__2__1__tstr, (signed int)module_parent_wfork__1__2__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "  Looping...\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_parent_wfork__1__2__1__tstr);
    }

    bytes=module_get_message_part(message, buf, &pos, maxlen, dividers);
    if(!(Debug == 0))
    {
      signed long int module_parent_wfork__1__2__2__t;
      struct timeval module_parent_wfork__1__2__2__tv;
      char *module_parent_wfork__1__2__2__tstr;
      module_parent_wfork__1__2__2__t=time((signed long int *)(void *)0);
      char *return_value_ctime_6;
      return_value_ctime_6=ctime(&module_parent_wfork__1__2__2__t);
      module_parent_wfork__1__2__2__tstr=g_strdup(return_value_ctime_6);
      unsigned long int return_value_strlen_7;
      return_value_strlen_7=strlen(module_parent_wfork__1__2__2__tstr);
      module_parent_wfork__1__2__2__tstr[(signed long int)(return_value_strlen_7 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_parent_wfork__1__2__2__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_parent_wfork__1__2__2__tstr, (signed int)module_parent_wfork__1__2__2__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Returned %d bytes from get_part\n", bytes);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork__1__2__2__tstr, (signed int)module_parent_wfork__1__2__2__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Returned %d bytes from get_part\n", bytes);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_parent_wfork__1__2__2__tstr);
    }

    if(!(*pause_requested == 0))
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wfork__1__2__3__1__t;
        struct timeval module_parent_wfork__1__2__3__1__tv;
        char *module_parent_wfork__1__2__3__1__tstr;
        module_parent_wfork__1__2__3__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_8;
        return_value_ctime_8=ctime(&module_parent_wfork__1__2__3__1__t);
        module_parent_wfork__1__2__3__1__tstr=g_strdup(return_value_ctime_8);
        unsigned long int return_value_strlen_9;
        return_value_strlen_9=strlen(module_parent_wfork__1__2__3__1__tstr);
        module_parent_wfork__1__2__3__1__tstr[(signed long int)(return_value_strlen_9 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wfork__1__2__3__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wfork__1__2__3__1__tstr, (signed int)module_parent_wfork__1__2__3__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Pause requested in parent");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork__1__2__3__1__tstr, (signed int)module_parent_wfork__1__2__3__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Pause requested in parent");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wfork__1__2__3__1__tstr);
      }

      module_parent_dp_close(dpipe);
      *pause_requested = 0;
      return (unsigned long int)0;
    }

    if(bytes >= 1)
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wfork__1__2__4__1__t;
        struct timeval module_parent_wfork__1__2__4__1__tv;
        char *module_parent_wfork__1__2__4__1__tstr;
        module_parent_wfork__1__2__4__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_10;
        return_value_ctime_10=ctime(&module_parent_wfork__1__2__4__1__t);
        module_parent_wfork__1__2__4__1__tstr=g_strdup(return_value_ctime_10);
        unsigned long int return_value_strlen_11;
        return_value_strlen_11=strlen(module_parent_wfork__1__2__4__1__tstr);
        module_parent_wfork__1__2__4__1__tstr[(signed long int)(return_value_strlen_11 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wfork__1__2__4__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wfork__1__2__4__1__tstr, (signed int)module_parent_wfork__1__2__4__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Sending buf to child:|%s| %d\n", buf, bytes);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork__1__2__4__1__tstr, (signed int)module_parent_wfork__1__2__4__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Sending buf to child:|%s| %d\n", buf, bytes);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wfork__1__2__4__1__tstr);
      }

      module_parent_dp_write(dpipe, buf, (unsigned long int)bytes);
      if(!(Debug == 0))
      {
        signed long int module_parent_wfork__1__2__4__2__t;
        struct timeval module_parent_wfork__1__2__4__2__tv;
        char *tstr;
        module_parent_wfork__1__2__4__2__t=time((signed long int *)(void *)0);
        char *return_value_ctime_12;
        return_value_ctime_12=ctime(&module_parent_wfork__1__2__4__2__t);
        tstr=g_strdup(return_value_ctime_12);
        unsigned long int return_value_strlen_13;
        return_value_strlen_13=strlen(tstr);
        tstr[(signed long int)(return_value_strlen_13 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wfork__1__2__4__2__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", tstr, (signed int)module_parent_wfork__1__2__4__2__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Waiting for response from child...\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)module_parent_wfork__1__2__4__2__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Waiting for response from child...\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)tstr);
      }

      while((_Bool)1)
      {
        signed int return_value_module_parent_dp_read_14;
        return_value_module_parent_dp_read_14=module_parent_dp_read(dpipe, msg, (unsigned long int)8);
        read_bytes = (unsigned long int)return_value_module_parent_dp_read_14;
        if(read_bytes == 0ul)
        {
          if(!(Debug == 0))
          {
            signed long int t;
            struct timeval tv;
            char *module_parent_wfork__1__2__4__3__1__1__tstr;
            t=time((signed long int *)(void *)0);
            char *return_value_ctime_15;
            return_value_ctime_15=ctime(&t);
            module_parent_wfork__1__2__4__3__1__1__tstr=g_strdup(return_value_ctime_15);
            unsigned long int return_value_strlen_16;
            return_value_strlen_16=strlen(module_parent_wfork__1__2__4__3__1__1__tstr);
            module_parent_wfork__1__2__4__3__1__1__tstr[(signed long int)(return_value_strlen_16 - (unsigned long int)1)] = (char)0;
            gettimeofday(&tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", module_parent_wfork__1__2__4__3__1__1__tstr, (signed int)tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "parent: Read bytes 0, child stopped\n");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork__1__2__4__3__1__1__tstr, (signed int)tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "parent: Read bytes 0, child stopped\n");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)module_parent_wfork__1__2__4__3__1__1__tstr);
          }

          break;
        }

        if((signed int)msg[0l] == 67)
        {
          if(!(Debug == 0))
          {
            signed long int module_parent_wfork__1__2__4__3__2__1__t;
            struct timeval module_parent_wfork__1__2__4__3__2__1__tv;
            char *module_parent_wfork__1__2__4__3__2__1__tstr;
            module_parent_wfork__1__2__4__3__2__1__t=time((signed long int *)(void *)0);
            char *return_value_ctime_17;
            return_value_ctime_17=ctime(&module_parent_wfork__1__2__4__3__2__1__t);
            module_parent_wfork__1__2__4__3__2__1__tstr=g_strdup(return_value_ctime_17);
            unsigned long int return_value_strlen_18;
            return_value_strlen_18=strlen(module_parent_wfork__1__2__4__3__2__1__tstr);
            module_parent_wfork__1__2__4__3__2__1__tstr[(signed long int)(return_value_strlen_18 - (unsigned long int)1)] = (char)0;
            gettimeofday(&module_parent_wfork__1__2__4__3__2__1__tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", module_parent_wfork__1__2__4__3__2__1__tstr, (signed int)module_parent_wfork__1__2__4__3__2__1__tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "Ok, received report to continue...\n");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork__1__2__4__3__2__1__tstr, (signed int)module_parent_wfork__1__2__4__3__2__1__tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "Ok, received report to continue...\n");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)module_parent_wfork__1__2__4__3__2__1__tstr);
          }

          break;
        }

      }
    }

    if(bytes == -1 || read_bytes == 0ul)
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wfork__1__2__5__1__t;
        struct timeval module_parent_wfork__1__2__5__1__tv;
        char *module_parent_wfork__1__2__5__1__tstr;
        module_parent_wfork__1__2__5__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_19;
        return_value_ctime_19=ctime(&module_parent_wfork__1__2__5__1__t);
        module_parent_wfork__1__2__5__1__tstr=g_strdup(return_value_ctime_19);
        unsigned long int return_value_strlen_20;
        return_value_strlen_20=strlen(module_parent_wfork__1__2__5__1__tstr);
        module_parent_wfork__1__2__5__1__tstr[(signed long int)(return_value_strlen_20 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wfork__1__2__5__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wfork__1__2__5__1__tstr, (signed int)module_parent_wfork__1__2__5__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "End of data in parent, closing pipes");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork__1__2__5__1__tstr, (signed int)module_parent_wfork__1__2__5__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "End of data in parent, closing pipes");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wfork__1__2__5__1__tstr);
      }

      module_parent_dp_close(dpipe);
      break;
    }

  }
  return (unsigned long int)0;
}

// module_pause
// file flite.c line 205
unsigned long int module_pause(void)
{
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "pause requested\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "pause requested\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  if(!(flite_speaking == 0))
  {
    if(!(Debug == 0))
    {
      signed long int module_pause__1__2__1__t;
      struct timeval module_pause__1__2__1__tv;
      char *module_pause__1__2__1__tstr;
      module_pause__1__2__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&module_pause__1__2__1__t);
      module_pause__1__2__1__tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(module_pause__1__2__1__tstr);
      module_pause__1__2__1__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_pause__1__2__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_pause__1__2__1__tstr, (signed int)module_pause__1__2__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Flite doesn't support pause, stopping\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_pause__1__2__1__tstr, (signed int)module_pause__1__2__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Flite doesn't support pause, stopping\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_pause__1__2__1__tstr);
    }

    module_stop();
    return (unsigned long int)-1;
  }

  else
    return (unsigned long int)0;
}

// module_play_file
// file module_utils.c line 992
signed int module_play_file(const char *filename)
{
  signed int result = 0;
  return result;
}

// module_recode_to_iso
// file module_utils.c line 841
char * module_recode_to_iso(char *data, signed int bytes, char *language, char *fallback)
{
  char *recoded;
  if(language == ((char *)NULL))
    recoded=g_strdup(data);

  signed int return_value_strcmp_3;
  return_value_strcmp_3=strcmp(language, "cs");
  char *return_value_g_convert_with_fallback_1;
  char *return_value_g_convert_with_fallback_2;
  if(return_value_strcmp_3 == 0)
  {
    return_value_g_convert_with_fallback_1=g_convert_with_fallback(data, (signed long int)bytes, "ISO8859-2", "UTF-8", fallback, (unsigned long int *)(void *)0, (unsigned long int *)(void *)0, (struct _GError **)(void *)0);
    recoded = (char *)return_value_g_convert_with_fallback_1;
  }

  else
  {
    return_value_g_convert_with_fallback_2=g_convert_with_fallback(data, (signed long int)bytes, "ISO8859-1", "UTF-8", fallback, (unsigned long int *)(void *)0, (unsigned long int *)(void *)0, (struct _GError **)(void *)0);
    recoded = (char *)return_value_g_convert_with_fallback_2;
  }
  if(recoded == ((char *)NULL))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_4;
      return_value_ctime_4=ctime(&t);
      tstr=g_strdup(return_value_ctime_4);
      unsigned long int return_value_strlen_5;
      return_value_strlen_5=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_5 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "festival: Conversion to ISO coding failed\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "festival: Conversion to ISO coding failed\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

  }

  return recoded;
}

// module_report_event_begin
// file module_utils.h line 380
void module_report_event_begin(void)
{
  module_send_asynchronous("701 BEGIN\n");
}

// module_report_event_end
// file module_utils.h line 381
void module_report_event_end(void)
{
  module_send_asynchronous("702 END\n");
}

// module_report_event_pause
// file module_utils.c line 904
void module_report_event_pause(void)
{
  module_send_asynchronous("704 PAUSE\n");
}

// module_report_event_stop
// file module_utils.h line 382
void module_report_event_stop(void)
{
  module_send_asynchronous("703 STOP\n");
}

// module_report_index_mark
// file module_utils.c line 871
void module_report_index_mark(char *mark)
{
  char *reply;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Event: Index mark %s", mark);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Event: Index mark %s", mark);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  if(!(mark == ((char *)NULL)))
    reply=g_strdup_printf("700-%s\n700 INDEX MARK\n", mark);

  else
    goto __CPROVER_DUMP_L5;
  module_send_asynchronous(reply);
  g_free((void *)reply);

__CPROVER_DUMP_L5:
  ;
}

// module_send_asynchronous
// file module_utils.c line 860
void module_send_asynchronous(char *text)
{
  pthread_mutex_lock(&module_stdout_mutex);
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Printing reply: %s", text);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Printing reply: %s", text);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  fputs(text, stdout);
  fflush(stdout);
  if(!(Debug == 0))
  {
    signed long int module_send_asynchronous__1__2__t;
    struct timeval module_send_asynchronous__1__2__tv;
    char *module_send_asynchronous__1__2__tstr;
    module_send_asynchronous__1__2__t=time((signed long int *)(void *)0);
    char *return_value_ctime_3;
    return_value_ctime_3=ctime(&module_send_asynchronous__1__2__t);
    module_send_asynchronous__1__2__tstr=g_strdup(return_value_ctime_3);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(module_send_asynchronous__1__2__tstr);
    module_send_asynchronous__1__2__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_send_asynchronous__1__2__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_send_asynchronous__1__2__tstr, (signed int)module_send_asynchronous__1__2__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Printed");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_send_asynchronous__1__2__tstr, (signed int)module_send_asynchronous__1__2__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Printed");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_send_asynchronous__1__2__tstr);
  }

  pthread_mutex_unlock(&module_stdout_mutex);
}

// module_sigblockall
// file module_utils.c line 761
void module_sigblockall(void)
{
  signed int ret;
  struct anonymous_15 all_signals;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Blocking all signals");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Blocking all signals");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  sigfillset(&all_signals);
  ret=sigprocmask(0, &all_signals, (struct anonymous_15 *)(void *)0);
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int module_sigblockall__1__2__t;
      struct timeval module_sigblockall__1__2__tv;
      char *module_sigblockall__1__2__tstr;
      module_sigblockall__1__2__t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&module_sigblockall__1__2__t);
      module_sigblockall__1__2__tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(module_sigblockall__1__2__tstr);
      module_sigblockall__1__2__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_sigblockall__1__2__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_sigblockall__1__2__tstr, (signed int)module_sigblockall__1__2__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't block signals, expect problems with terminating!\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_sigblockall__1__2__tstr, (signed int)module_sigblockall__1__2__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't block signals, expect problems with terminating!\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_sigblockall__1__2__tstr);
    }

  }

}

// module_sigblockusr
// file module_utils.c line 789
void module_sigblockusr(struct anonymous_15 *some_signals)
{
  signed int ret;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Blocking user signal");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Blocking user signal");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  sigaddset(some_signals, 10);
  ret=sigprocmask(2, some_signals, (struct anonymous_15 *)(void *)0);
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int module_sigblockusr__1__2__t;
      struct timeval module_sigblockusr__1__2__tv;
      char *module_sigblockusr__1__2__tstr;
      module_sigblockusr__1__2__t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&module_sigblockusr__1__2__t);
      module_sigblockusr__1__2__tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(module_sigblockusr__1__2__tstr);
      module_sigblockusr__1__2__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_sigblockusr__1__2__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_sigblockusr__1__2__tstr, (signed int)module_sigblockusr__1__2__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't block signal set, expect problems when terminating!\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_sigblockusr__1__2__tstr, (signed int)module_sigblockusr__1__2__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't block signal set, expect problems when terminating!\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_sigblockusr__1__2__tstr);
    }

  }

}

// module_sigunblockusr
// file module_utils.c line 776
void module_sigunblockusr(struct anonymous_15 *some_signals)
{
  signed int ret;
  if(!(Debug == 0))
  {
    signed long int module_sigunblockusr__1__1__t;
    struct timeval module_sigunblockusr__1__1__tv;
    char *tstr;
    module_sigunblockusr__1__1__t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&module_sigunblockusr__1__1__t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_sigunblockusr__1__1__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)module_sigunblockusr__1__1__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "UnBlocking user signal");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)module_sigunblockusr__1__1__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "UnBlocking user signal");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  sigdelset(some_signals, 10);
  ret=sigprocmask(2, some_signals, (struct anonymous_15 *)(void *)0);
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *module_sigunblockusr__1__2__tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&t);
      module_sigunblockusr__1__2__tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(module_sigunblockusr__1__2__tstr);
      module_sigunblockusr__1__2__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_sigunblockusr__1__2__tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't block signal set, expect problems with terminating!\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_sigunblockusr__1__2__tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't block signal set, expect problems with terminating!\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_sigunblockusr__1__2__tstr);
    }

  }

}

// module_speak
// file flite.c line 157
signed int module_speak(char *data, unsigned long int bytes, enum anonymous_14 msgtype)
{
  if(!(Debug == 0))
  {
    signed long int module_speak__1__1__t;
    struct timeval module_speak__1__1__tv;
    char *module_speak__1__1__tstr;
    module_speak__1__1__t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&module_speak__1__1__t);
    module_speak__1__1__tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(module_speak__1__1__tstr);
    module_speak__1__1__tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_speak__1__1__tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_speak__1__1__tstr, (signed int)module_speak__1__1__tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "write()\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_speak__1__1__tstr, (signed int)module_speak__1__1__tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "write()\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_speak__1__1__tstr);
  }

  if(!(flite_speaking == 0))
  {
    if(!(Debug == 0))
    {
      signed long int module_speak__1__2__1__t;
      struct timeval module_speak__1__2__1__tv;
      char *module_speak__1__2__1__tstr;
      module_speak__1__2__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&module_speak__1__2__1__t);
      module_speak__1__2__1__tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(module_speak__1__2__1__tstr);
      module_speak__1__2__1__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_speak__1__2__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_speak__1__2__1__tstr, (signed int)module_speak__1__2__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Speaking when requested to write");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_speak__1__2__1__tstr, (signed int)module_speak__1__2__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Speaking when requested to write");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_speak__1__2__1__tstr);
    }

    return 0;
  }

  else
  {
    if(!(Debug == 0))
    {
      signed long int module_speak__1__3__t;
      struct timeval module_speak__1__3__tv;
      char *module_speak__1__3__tstr;
      module_speak__1__3__t=time((signed long int *)(void *)0);
      char *return_value_ctime_5;
      return_value_ctime_5=ctime(&module_speak__1__3__t);
      module_speak__1__3__tstr=g_strdup(return_value_ctime_5);
      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen(module_speak__1__3__tstr);
      module_speak__1__3__tstr[(signed long int)(return_value_strlen_6 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_speak__1__3__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_speak__1__3__tstr, (signed int)module_speak__1__3__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Requested data: |%s|\n", data);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_speak__1__3__tstr, (signed int)module_speak__1__3__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Requested data: |%s|\n", data);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_speak__1__3__tstr);
    }

    if(!(*flite_message == ((char *)NULL)))
    {
      g_free((void *)*flite_message);
      *flite_message = (char *)(void *)0;
    }

    *flite_message=module_strip_ssml(data);
    flite_message_type = (enum anonymous_14)SPD_MSGTYPE_TEXT;
    if(!(msg_settings_old.rate == msg_settings.rate))
    {
      msg_settings_old.rate = msg_settings.rate;
      flite_set_rate(msg_settings.rate);
    }

    if(!(msg_settings_old.volume == msg_settings.volume))
    {
      msg_settings_old.volume = msg_settings.volume;
      flite_set_volume(msg_settings.volume);
    }

    if(!(msg_settings_old.pitch == msg_settings.pitch))
    {
      msg_settings_old.pitch = msg_settings.pitch;
      flite_set_pitch(msg_settings.pitch);
    }

    flite_speaking = 1;
    sem_post(&flite_semaphore);
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_7;
      return_value_ctime_7=ctime(&t);
      tstr=g_strdup(return_value_ctime_7);
      unsigned long int return_value_strlen_8;
      return_value_strlen_8=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_8 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Flite: leaving write() normally\n\r");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Flite: leaving write() normally\n\r");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    return (signed int)bytes;
  }
}

// module_stop
// file flite.c line 188
signed int module_stop(void)
{
  signed int ret;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_1;
    return_value_ctime_1=ctime(&t);
    tstr=g_strdup(return_value_ctime_1);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "flite: stop()\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "flite: stop()\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  flite_stop = 1;
  if(!(module_audio_id == ((struct anonymous_9 *)NULL)))
  {
    if(!(Debug == 0))
    {
      signed long int module_stop__1__2__1__t;
      struct timeval module_stop__1__2__1__tv;
      char *module_stop__1__2__1__tstr;
      module_stop__1__2__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&module_stop__1__2__1__t);
      module_stop__1__2__1__tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(module_stop__1__2__1__tstr);
      module_stop__1__2__1__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_stop__1__2__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_stop__1__2__1__tstr, (signed int)module_stop__1__2__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Stopping audio");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_stop__1__2__1__tstr, (signed int)module_stop__1__2__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Stopping audio");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_stop__1__2__1__tstr);
    }

    ret=spd_audio_stop(module_audio_id);
    if(!(ret == 0))
    {
      if(!(Debug == 0))
      {
        signed long int module_stop__1__2__2__t;
        struct timeval module_stop__1__2__2__tv;
        char *module_stop__1__2__2__tstr;
        module_stop__1__2__2__t=time((signed long int *)(void *)0);
        char *return_value_ctime_5;
        return_value_ctime_5=ctime(&module_stop__1__2__2__t);
        module_stop__1__2__2__tstr=g_strdup(return_value_ctime_5);
        unsigned long int return_value_strlen_6;
        return_value_strlen_6=strlen(module_stop__1__2__2__tstr);
        module_stop__1__2__2__tstr[(signed long int)(return_value_strlen_6 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_stop__1__2__2__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_stop__1__2__2__tstr, (signed int)module_stop__1__2__2__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "WARNING: Non 0 value from spd_audio_stop: %d", ret);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_stop__1__2__2__tstr, (signed int)module_stop__1__2__2__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "WARNING: Non 0 value from spd_audio_stop: %d", ret);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_stop__1__2__2__tstr);
      }

    }

  }

  return 0;
}

// module_strip_punctuation_default
// file module_utils.c line 601
void module_strip_punctuation_default(char *buf)
{
  /* assertion buf != ((void *)0) */
  assert(buf != (char *)(void *)0);
  module_strip_punctuation_some(buf, "~#_%^&*+=|<>[]_");
}

// module_strip_punctuation_some
// file module_utils.c line 538
void module_strip_punctuation_some(char *message, char *punct_chars)
{
  signed int len;
  char *p = message;
  signed int i;
  /* assertion message != ((void *)0) */
  assert(message != (char *)(void *)0);
  if(!(punct_chars == ((char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(message);
    len = (signed int)return_value_strlen_1;
    i = 0;
    for( ; len + -1 >= i; i = i + 1)
    {
      char *return_value_strchr_4;
      return_value_strchr_4=strchr(punct_chars, (signed int)*p);
      if(!(return_value_strchr_4 == ((char *)NULL)))
      {
        if(!(Debug == 0))
        {
          signed long int t;
          struct timeval tv;
          char *tstr;
          t=time((signed long int *)(void *)0);
          char *return_value_ctime_2;
          return_value_ctime_2=ctime(&t);
          tstr=g_strdup(return_value_ctime_2);
          unsigned long int return_value_strlen_3;
          return_value_strlen_3=strlen(tstr);
          tstr[(signed long int)(return_value_strlen_3 - (unsigned long int)1)] = (char)0;
          gettimeofday(&tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Substitution %d: char -%c- for whitespace\n", i, *p);
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Substitution %d: char -%c- for whitespace\n", i, *p);
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)tstr);
        }

        *p = (char)32;
      }

      p = p + 1l;
    }
  }

}

// module_strip_ssml
// file module_utils.h line 183
char * module_strip_ssml(char *message)
{
  signed int len;
  char *out;
  signed int i;
  signed int n;
  signed int omit = 0;
  /* assertion message != ((void *)0) */
  assert(message != (char *)(void *)0);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(message);
  len = (signed int)return_value_strlen_1;
  void *return_value_g_malloc_2;
  return_value_g_malloc_2=g_malloc(sizeof(char) /*1ul*/  * (unsigned long int)(len + 1));
  out = (char *)return_value_g_malloc_2;
  i = 0;
  n = 0;
  signed int tmp_post_3;
  signed int return_value_strncmp_8;
  signed int tmp_post_4;
  signed int return_value_strncmp_7;
  signed int tmp_post_5;
  signed int tmp_post_6;
  for( ; len >= i; i = i + 1)
    if((signed int)message[(signed long int)i] == 60)
      omit = 1;

    else
      if((signed int)message[(signed long int)i] == 62)
        omit = 0;

      else
      {
        signed int return_value_strncmp_9;
        return_value_strncmp_9=strncmp(&message[(signed long int)i], "&lt;", (unsigned long int)4);
        if(return_value_strncmp_9 == 0)
        {
          i = i + 3;
          tmp_post_3 = n;
          n = n + 1;
          out[(signed long int)tmp_post_3] = (char)60;
        }

        else
        {
          return_value_strncmp_8=strncmp(&message[(signed long int)i], "&gt;", (unsigned long int)4);
          if(return_value_strncmp_8 == 0)
          {
            i = i + 3;
            tmp_post_4 = n;
            n = n + 1;
            out[(signed long int)tmp_post_4] = (char)62;
          }

          else
          {
            return_value_strncmp_7=strncmp(&message[(signed long int)i], "&amp;", (unsigned long int)5);
            if(return_value_strncmp_7 == 0)
            {
              i = i + 4;
              tmp_post_5 = n;
              n = n + 1;
              out[(signed long int)tmp_post_5] = (char)38;
            }

            else
              if(i == len || omit == 0)
              {
                tmp_post_6 = n;
                n = n + 1;
                out[(signed long int)tmp_post_6] = message[(signed long int)i];
              }

          }
        }
      }
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime_10;
    return_value_ctime_10=ctime(&t);
    tstr=g_strdup(return_value_ctime_10);
    unsigned long int return_value_strlen_11;
    return_value_strlen_11=strlen(tstr);
    tstr[(signed long int)(return_value_strlen_11 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "In stripping ssml: |%s|", out);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "In stripping ssml: |%s|", out);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  return out;
}

// module_terminate_thread
// file module_utils.h line 210
signed int module_terminate_thread(unsigned long int thread)
{
  signed int ret;
  ret=pthread_cancel(thread);
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_1;
      return_value_ctime_1=ctime(&t);
      tstr=g_strdup(return_value_ctime_1);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Cancellation of speak thread failed");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Cancellation of speak thread failed");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    return 1;
  }

  else
  {
    ret=pthread_join(thread, (void **)(void *)0);
    if(!(ret == 0))
    {
      if(!(Debug == 0))
      {
        signed long int module_terminate_thread__1__2__1__t;
        struct timeval module_terminate_thread__1__2__1__tv;
        char *module_terminate_thread__1__2__1__tstr;
        module_terminate_thread__1__2__1__t=time((signed long int *)(void *)0);
        char *return_value_ctime_3;
        return_value_ctime_3=ctime(&module_terminate_thread__1__2__1__t);
        module_terminate_thread__1__2__1__tstr=g_strdup(return_value_ctime_3);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(module_terminate_thread__1__2__1__tstr);
        module_terminate_thread__1__2__1__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_terminate_thread__1__2__1__tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_terminate_thread__1__2__1__tstr, (signed int)module_terminate_thread__1__2__1__tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "join failed!\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_terminate_thread__1__2__1__tstr, (signed int)module_terminate_thread__1__2__1__tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "join failed!\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_terminate_thread__1__2__1__tstr);
      }

      return 1;
    }

    else
      return 0;
  }
}

// module_tts_output
// file module_utils.h line 125
signed int module_tts_output(struct anonymous_10 track, enum anonymous_11 format)
{
  signed int return_value_spd_audio_play_3;
  return_value_spd_audio_play_3=spd_audio_play(module_audio_id, track, format);
  if(!(return_value_spd_audio_play_3 >= 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime_1;
      return_value_ctime_1=ctime(&t);
      tstr=g_strdup(return_value_ctime_1);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(tstr);
      tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't play track for unknown reason.");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't play track for unknown reason.");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    return -1;
  }

  else
    return 0;
}

// my_dlopenextglobal
// file spd_audio.c line 62
static struct lt__handle * my_dlopenextglobal(const char *filename)
{
  struct lt__handle *handle = (struct lt__handle *)(void *)0;
  struct lt__advise *advise;
  signed int return_value_lt_dladvise_init_1;
  return_value_lt_dladvise_init_1=lt_dladvise_init(&advise);
  signed int return_value_lt_dladvise_global_2;
  if(!(return_value_lt_dladvise_init_1 == 0))
    return handle;

  else
  {
    signed int return_value_lt_dladvise_ext_3;
    return_value_lt_dladvise_ext_3=lt_dladvise_ext(&advise);
    if(return_value_lt_dladvise_ext_3 == 0)
    {
      return_value_lt_dladvise_global_2=lt_dladvise_global(&advise);
      if(return_value_lt_dladvise_global_2 == 0)
        handle=lt_dlopenadvise(filename, advise);

    }

    lt_dladvise_destroy(&advise);
    return handle;
  }
}

// set_speaking_thread_parameters
// file module_utils.h line 165
void set_speaking_thread_parameters()
{
  signed int ret;
  struct anonymous_15 all_signals;
  ret=sigfillset(&all_signals);
  if(ret == 0)
  {
    ret=pthread_sigmask(0, &all_signals, (struct anonymous_15 *)(void *)0);
    if(!(ret == 0))
    {
      if(!(Debug == 0))
      {
        signed long int t;
        struct timeval tv;
        char *tstr;
        t=time((signed long int *)(void *)0);
        char *return_value_ctime_1;
        return_value_ctime_1=ctime(&t);
        tstr=g_strdup(return_value_ctime_1);
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(tstr);
        tstr[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
        gettimeofday(&tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Can't set signal set, expect problems when terminating!\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Can't set signal set, expect problems when terminating!\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)tstr);
      }

    }

  }

  else
    if(!(Debug == 0))
    {
      signed long int set_speaking_thread_parameters__1__2__1__t;
      struct timeval set_speaking_thread_parameters__1__2__1__tv;
      char *set_speaking_thread_parameters__1__2__1__tstr;
      set_speaking_thread_parameters__1__2__1__t=time((signed long int *)(void *)0);
      char *return_value_ctime_3;
      return_value_ctime_3=ctime(&set_speaking_thread_parameters__1__2__1__t);
      set_speaking_thread_parameters__1__2__1__tstr=g_strdup(return_value_ctime_3);
      unsigned long int return_value_strlen_4;
      return_value_strlen_4=strlen(set_speaking_thread_parameters__1__2__1__tstr);
      set_speaking_thread_parameters__1__2__1__tstr[(signed long int)(return_value_strlen_4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&set_speaking_thread_parameters__1__2__1__tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", set_speaking_thread_parameters__1__2__1__tstr, (signed int)set_speaking_thread_parameters__1__2__1__tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't fill signal set, expect problems when terminating!\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", set_speaking_thread_parameters__1__2__1__tstr, (signed int)set_speaking_thread_parameters__1__2__1__tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't fill signal set, expect problems when terminating!\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)set_speaking_thread_parameters__1__2__1__tstr);
    }

  pthread_setcancelstate(0, (signed int *)(void *)0);
  pthread_setcanceltype(1, (signed int *)(void *)0);
}

// spd_audio_close
// file spd_audio.c line 254
signed int spd_audio_close(struct anonymous_9 *id)
{
  signed int ret = 0;
  if(!(id == ((struct anonymous_9 *)NULL)))
  {
    if(!(id->function->close == ((signed int (*)(struct anonymous_9 *))NULL)))
      ret=id->function->close(id);

  }

  if(!(lt_h == ((struct lt__handle *)NULL)))
  {
    lt_dlclose(lt_h);
    lt_h = (struct lt__handle *)(void *)0;
    lt_dlexit();
  }

  return ret;
}

// spd_audio_get_playcmd
// file spd_audio.c line 315
const char * spd_audio_get_playcmd(struct anonymous_9 *id)
{
  if(!(id == ((struct anonymous_9 *)NULL)))
  {
    if(!(id->function == ((struct spd_audio_plugin *)NULL)))
    {
      const char *return_value;
      return_value=id->function->get_playcmd();
      return return_value;
    }

  }

  return (const char *)(void *)0;
}

// spd_audio_open
// file spd_audio.c line 93
struct anonymous_9 * spd_audio_open(char *name, void **pars, char **error)
{
  struct anonymous_9 *id;
  const struct spd_audio_plugin *p;
  struct spd_audio_plugin * (*fn)(void);
  char *libname;
  signed int ret;
  ret=lt_dlinit();
  if(!(ret == 0))
  {
    char *return_value_g_strdup_printf_1;
    return_value_g_strdup_printf_1=g_strdup_printf("lt_dlinit() failed");
    *error = (char *)return_value_g_strdup_printf_1;
    return (struct anonymous_9 *)(void *)0;
  }

  ret=lt_dlsetsearchpath("/usr/lib/x86_64-linux-gnu/speech-dispatcher");
  if(!(ret == 0))
  {
    char *return_value_g_strdup_printf_2;
    return_value_g_strdup_printf_2=g_strdup_printf("lt_dlsetsearchpath() failed");
    *error = (char *)return_value_g_strdup_printf_2;
    return (struct anonymous_9 *)(void *)0;
  }

  libname=g_strdup_printf("spd_%s", name);
  lt_h=my_dlopenextglobal(libname);
  g_free((void *)libname);
  if(lt_h == ((struct lt__handle *)NULL))
  {
    const char *return_value_lt_dlerror_3;
    return_value_lt_dlerror_3=lt_dlerror();
    char *return_value_g_strdup_printf_4;
    return_value_g_strdup_printf_4=g_strdup_printf("Cannot open plugin %s. error: %s", name, return_value_lt_dlerror_3);
    *error = (char *)return_value_g_strdup_printf_4;
    return (struct anonymous_9 *)(void *)0;
  }

  void *return_value_lt_dlsym_5;
  return_value_lt_dlsym_5=lt_dlsym(lt_h, "spd_audio_plugin_get");
  fn = (struct spd_audio_plugin * (*)(void))return_value_lt_dlsym_5;
  if(fn == ((struct spd_audio_plugin * (*)(void))NULL))
  {
    char *return_value_g_strdup_printf_6;
    return_value_g_strdup_printf_6=g_strdup_printf("Cannot find symbol %s", (const void *)"spd_audio_plugin_get");
    *error = (char *)return_value_g_strdup_printf_6;
    return (struct anonymous_9 *)(void *)0;
  }

  p=fn();
  _Bool tmp_if_expr_8;
  if(p == ((const struct spd_audio_plugin *)NULL))
    tmp_if_expr_8 = (_Bool)1;

  else
    tmp_if_expr_8 = p->name == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_8)
  {
    char *return_value_g_strdup_printf_7;
    return_value_g_strdup_printf_7=g_strdup_printf("plugin %s not found", name);
    *error = (char *)return_value_g_strdup_printf_7;
    return (struct anonymous_9 *)(void *)0;
  }

  id=p->open(pars);
  if(id == ((struct anonymous_9 *)NULL))
  {
    char *return_value_g_strdup_printf_9;
    return_value_g_strdup_printf_9=g_strdup_printf("Couldn't open %s plugin", name);
    *error = (char *)return_value_g_strdup_printf_9;
    return (struct anonymous_9 *)(void *)0;
  }

  id->function = p;
  id->format = (enum anonymous_11)SPD_AUDIO_LE;
  *error = (char *)(void *)0;
  return id;
}

// spd_audio_play
// file spd_audio.c line 174
signed int spd_audio_play(struct anonymous_9 *id, struct anonymous_10 track, enum anonymous_11 format)
{
  signed int ret;
  _Bool tmp_if_expr_1;
  if(!(id == ((struct anonymous_9 *)NULL)))
    tmp_if_expr_1 = id->function->play != ((signed int (*)(struct anonymous_9 *, struct anonymous_10))NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
  {
    if(!(format == id->format))
    {
      unsigned char *out_ptr;
      unsigned char *out_end;
      unsigned char c;
      out_ptr = (unsigned char *)track.samples;
      out_end = out_ptr + (signed long int)(track.num_samples * 2 * track.num_channels);
      for( ; !(out_ptr >= out_end); out_ptr = out_ptr + (signed long int)2)
      {
        c = out_ptr[(signed long int)0];
        out_ptr[(signed long int)0] = out_ptr[(signed long int)1];
        out_ptr[(signed long int)1] = c;
      }
    }

    ret=id->function->play(id, track);
  }

  else
  {
    fprintf(stderr, "Play not supported on this device\n");
    return -1;
  }
  return ret;
}

// spd_audio_set_loglevel
// file spd_audio.c line 306
void spd_audio_set_loglevel(struct anonymous_9 *id, signed int level)
{
  if(!(level == 0))
  {
    spd_audio_log_level = level;
    if(!(id == ((struct anonymous_9 *)NULL)))
    {
      if(!(id->function == ((struct spd_audio_plugin *)NULL)))
        id->function->set_loglevel(level);

    }

  }

}

// spd_audio_set_volume
// file spd_audio.c line 292
signed int spd_audio_set_volume(struct anonymous_9 *id, signed int volume)
{
  if(volume >= 101 || !(volume >= -100))
  {
    fprintf(stderr, "Requested volume out of range");
    return -1;
  }

  else
    if(id == ((struct anonymous_9 *)NULL))
    {
      fprintf(stderr, "audio id is NULL in spd_audio_set_volume\n");
      return -1;
    }

    else
    {
      id->volume = volume;
      return 0;
    }
}

// spd_audio_stop
// file spd_audio.h line 36
signed int spd_audio_stop(struct anonymous_9 *id)
{
  signed int ret;
  _Bool tmp_if_expr_1;
  if(!(id == ((struct anonymous_9 *)NULL)))
    tmp_if_expr_1 = id->function->stop != ((signed int (*)(struct anonymous_9 *))NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
    ret=id->function->stop(id);

  else
  {
    fprintf(stderr, "Stop not supported on this device\n");
    return -1;
  }
  return ret;
}

// spd_getline
// file ../../include/spd_utils.h line 29
signed long int spd_getline(char **lineptr, unsigned long int *n, struct _IO_FILE *f)
{
  char ch;
  signed long int buf_pos = (signed long int)0;
  signed long int needed = (signed long int)2;
  unsigned long int new_length = (unsigned long int)0;
  char *temp;
  if(lineptr == ((char **)NULL) || f == ((struct _IO_FILE *)NULL) || n == ((unsigned long int *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (signed long int)-1;
  }

  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  signed int *return_value___errno_location_2;
  if(!(*return_value___errno_location_3 == 0))
  {
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 0;
  }

  _Bool tmp_if_expr_5;
  if(*lineptr == ((char *)NULL))
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = *n == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_5)
  {
    *n = (unsigned long int)120;
    void *return_value_g_malloc_4;
    return_value_g_malloc_4=g_malloc(*n * sizeof(char) /*1ul*/ );
    *lineptr = (char *)return_value_g_malloc_4;
    if(*lineptr == ((char *)NULL))
    {
      *n = (unsigned long int)0;
      return (signed long int)-1;
    }

  }

  signed int return_value__IO_getc_6;
  signed long int tmp_post_10;
  do
  {
    return_value__IO_getc_6=_IO_getc(f);
    ch = (char)return_value__IO_getc_6;
    if((signed int)ch == -1)
      break;

    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    if(!(*return_value___errno_location_7 == 0))
      return (signed long int)-1;

    if(!(*n >= (unsigned long int)needed))
    {
      new_length = *n * (unsigned long int)2;
      if(*n >= new_length)
      {
        signed int *return_value___errno_location_8;
        return_value___errno_location_8=__errno_location();
        *return_value___errno_location_8 = 12;
        ungetc((signed int)ch, f);
        return (signed long int)-1;
      }

      void *return_value_g_realloc_9;
      return_value_g_realloc_9=g_realloc((void *)*lineptr, new_length * sizeof(char) /*1ul*/ );
      temp = (char *)return_value_g_realloc_9;
      if(temp == ((char *)NULL))
      {
        ungetc((signed int)ch, f);
        return (signed long int)-1;
      }

      *n = new_length;
      *lineptr = temp;
    }

    tmp_post_10 = buf_pos;
    buf_pos = buf_pos + 1l;
    (*lineptr)[tmp_post_10] = ch;
    if((signed int)ch == 10)
      break;

    if(needed == 0x7fffffffffffffffL)
    {
      signed int *return_value___errno_location_11;
      return_value___errno_location_11=__errno_location();
      *return_value___errno_location_11 = 12;
      return (signed long int)-1;
    }

    needed = needed + 1l;
  }
  while((_Bool)1);
  (*lineptr)[buf_pos] = (char)0;
  if(buf_pos == 0l)
    buf_pos = (signed long int)-1;

  return buf_pos;
}

// str2ECapLetRecogn
// file ../../include/fdsetconv.h line 22
enum anonymous_8 str2ECapLetRecogn(char *str)
{
  enum anonymous_8 recogn;
  signed int return_value_strcmp_3;
  return_value_strcmp_3=strcmp(str, "none");
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(return_value_strcmp_3 == 0)
    recogn = (enum anonymous_8)SPD_CAP_NONE;

  else
  {
    return_value_strcmp_2=strcmp(str, "spell");
    if(return_value_strcmp_2 == 0)
      recogn = (enum anonymous_8)SPD_CAP_SPELL;

    else
    {
      return_value_strcmp_1=strcmp(str, "icon");
      if(return_value_strcmp_1 == 0)
        recogn = (enum anonymous_8)SPD_CAP_ICON;

      else
        recogn = (enum anonymous_8)-1;
    }
  }
  return recogn;
}

// str2EPunctMode
// file ../../include/fdsetconv.h line 14
enum anonymous_6 str2EPunctMode(char *str)
{
  enum anonymous_6 punct;
  signed int return_value_strcmp_3;
  return_value_strcmp_3=strcmp(str, "none");
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(return_value_strcmp_3 == 0)
    punct = (enum anonymous_6)SPD_PUNCT_NONE;

  else
  {
    return_value_strcmp_2=strcmp(str, "all");
    if(return_value_strcmp_2 == 0)
      punct = (enum anonymous_6)SPD_PUNCT_ALL;

    else
    {
      return_value_strcmp_1=strcmp(str, "some");
      if(return_value_strcmp_1 == 0)
        punct = (enum anonymous_6)SPD_PUNCT_SOME;

      else
        punct = (enum anonymous_6)-1;
    }
  }
  return punct;
}

// str2ESpellMode
// file ../../include/fdsetconv.h line 18
enum anonymous_7 str2ESpellMode(char *str)
{
  enum anonymous_7 spell;
  signed int return_value_strcmp_2;
  return_value_strcmp_2=strcmp(str, "on");
  signed int return_value_strcmp_1;
  if(return_value_strcmp_2 == 0)
    spell = (enum anonymous_7)SPD_SPELL_ON;

  else
  {
    return_value_strcmp_1=strcmp(str, "off");
    if(return_value_strcmp_1 == 0)
      spell = (enum anonymous_7)SPD_SPELL_OFF;

    else
      spell = (enum anonymous_7)-1;
  }
  return spell;
}

// str2EVoice
// file ../../include/fdsetconv.h line 10
enum anonymous_5 str2EVoice(char *str)
{
  enum anonymous_5 voice;
  signed int return_value_strcmp_8;
  return_value_strcmp_8=strcmp(str, "male1");
  signed int return_value_strcmp_7;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_5;
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(return_value_strcmp_8 == 0)
    voice = (enum anonymous_5)SPD_MALE1;

  else
  {
    return_value_strcmp_7=strcmp(str, "male2");
    if(return_value_strcmp_7 == 0)
      voice = (enum anonymous_5)SPD_MALE2;

    else
    {
      return_value_strcmp_6=strcmp(str, "male3");
      if(return_value_strcmp_6 == 0)
        voice = (enum anonymous_5)SPD_MALE3;

      else
      {
        return_value_strcmp_5=strcmp(str, "female1");
        if(return_value_strcmp_5 == 0)
          voice = (enum anonymous_5)SPD_FEMALE1;

        else
        {
          return_value_strcmp_4=strcmp(str, "female2");
          if(return_value_strcmp_4 == 0)
            voice = (enum anonymous_5)SPD_FEMALE2;

          else
          {
            return_value_strcmp_3=strcmp(str, "female3");
            if(return_value_strcmp_3 == 0)
              voice = (enum anonymous_5)SPD_FEMALE3;

            else
            {
              return_value_strcmp_2=strcmp(str, "child_male");
              if(return_value_strcmp_2 == 0)
                voice = (enum anonymous_5)SPD_CHILD_MALE;

              else
              {
                return_value_strcmp_1=strcmp(str, "child_female");
                if(return_value_strcmp_1 == 0)
                  voice = (enum anonymous_5)SPD_CHILD_FEMALE;

                else
                  voice = (enum anonymous_5)-1;
              }
            }
          }
        }
      }
    }
  }
  return voice;
}

// str2intpriority
// file fdsetconv.c line 200
enum anonymous_4 str2intpriority(char *str)
{
  enum anonymous_4 priority;
  signed int return_value_strcmp_5;
  return_value_strcmp_5=strcmp(str, "important");
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(return_value_strcmp_5 == 0)
    priority = (enum anonymous_4)SPD_IMPORTANT;

  else
  {
    return_value_strcmp_4=strcmp(str, "message");
    if(return_value_strcmp_4 == 0)
      priority = (enum anonymous_4)SPD_MESSAGE;

    else
    {
      return_value_strcmp_3=strcmp(str, "text");
      if(return_value_strcmp_3 == 0)
        priority = (enum anonymous_4)SPD_TEXT;

      else
      {
        return_value_strcmp_2=strcmp(str, "notification");
        if(return_value_strcmp_2 == 0)
          priority = (enum anonymous_4)SPD_NOTIFICATION;

        else
        {
          return_value_strcmp_1=strcmp(str, "progress");
          if(return_value_strcmp_1 == 0)
            priority = (enum anonymous_4)SPD_PROGRESS;

          else
            priority = (enum anonymous_4)-1;
        }
      }
    }
  }
  return priority;
}

