// #anon_enum_lm1=0_lm2=1_nt=2
// file hash.h line 52
enum anonymous_0 { lm1=0, lm2=1, nt=2 };

// #anon_enum_low=0_disk=1_high=2
// file scheduler.h line 47
enum anonymous_8 { low=0, disk=1, high=2 };

// #anon_enum_msg_done=0_msg_preload=1_msg_unload=2_msg_work=3_msg_found=4_msg_bforce=5_msg_pause=6
// file message.h line 48
enum anonymous_3 { msg_done=0, msg_preload=1, msg_unload=2, msg_work=3, msg_found=4, msg_bforce=5, msg_pause=6 };

// #anon_enum_preload_all=1_preload_one=2_unload=4_find=8_lookup_idx=16_lookup_end=32_lookup_srt=64_check=128_bforce_all=256_bforce_nt=512_bforce_lm=1024_resolve_nt=2048_all=4095
// file ophtask.h line 46
enum anonymous_12 { preload_all=1, preload_one=2, unload=4, find=8, lookup_idx=16, lookup_end=32, lookup_srt=64, check=128, bforce_all=256, bforce_nt=512, bforce_lm=1024, resolve_nt=2048, all=4095 };

// #anon_enum_preload_none=0_preload_init=1_preload_idx=2_preload_end=4_preload_srt=8_preload_full=15
// file table.h line 74
enum anonymous_10 { preload_none=0, preload_init=1, preload_idx=2, preload_end=4, preload_srt=8, preload_full=15 };

// #anon_enum_st_wait=1_st_pause1=2_st_pause2=4_st_start=8_st_preload=16_st_work1=32_st_work2=64
// file fsm.h line 45
enum anonymous_1 { st_wait=1, st_pause1=2, st_pause2=4, st_start=8, st_preload=16, st_work1=32, st_work2=64 };

// #anon_enum_unknown=0_lmalphanum10k=1_lmalphanum5k=2_lmextended=3_ntextended=4_lmgermanv1=5_lmgermanv2=6_ntdict=7_ntnine=8_nteight=9_ntnum=10_ntseven=11_lmflash=12_nteightxl=13_ntspecialxl=14_ntprobafree=15_ntproba10g=16_ntproba60g=17
// file table.h line 53
enum anonymous_2 { unknown=0, lmalphanum10k=1, lmalphanum5k=2, lmextended=3, ntextended=4, lmgermanv1=5, lmgermanv2=6, ntdict=7, ntnine=8, nteight=9, ntnum=10, ntseven=11, lmflash=12, nteightxl=13, ntspecialxl=14, ntprobafree=15, ntproba10g=16, ntproba60g=17 };

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_5;

// tag-#anon#ST[S32'refcount'||U32'_pad0'||*{SYM#tag-proba_info_#}_SYM#tag-proba_info_#_'proba'|]
// file ntproba.c line 46
struct anonymous;

// tag-#anon#ST[S32'rm_so'||S32'rm_eo'|]
// file /usr/include/regex.h line 452
struct anonymous_11;

// tag-#anon#UN[ARR32{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous_4;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_9;

// tag-#anon#UN[ARR8{U8}_U8_'cblock'||ARR2{U32}_U32_'deslong'|]
// file /usr/include/openssl/des.h line 86
union anonymous_13;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_6;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_7;

// tag-AmarkovDynProg
// file ./ntproba/markov.h line 90
struct AmarkovDynProg;

// tag-DES_ks
// file /usr/include/openssl/des.h line 85
struct DES_ks;

// tag-MD4state_st
// file /usr/include/openssl/md4.h line 100
struct MD4state_st;

// tag-MD5state_st
// file /usr/include/openssl/md5.h line 100
struct MD5state_st;

// tag-XML_ParserStruct
// file /usr/include/expat.h line 24
struct XML_ParserStruct;

// tag-XML_Status
// file /usr/include/expat.h line 45
enum XML_Status { XML_STATUS_ERROR=0, XML_STATUS_OK=1, XML_STATUS_SUSPENDED=2 };

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

// tag-_hashrecord
// file hive.h line 71
struct _hashrecord;

// tag-_lf_hdr
// file hive.h line 78
struct _lf_hdr;

// tag-_nk_hdr
// file hive.h line 49
struct _nk_hdr;

// tag-_vk_hdr
// file hive.h line 85
struct _vk_hdr;

// tag-aliasMarkov32Element
// file aliasMarkov.h line 50
struct aliasMarkov32Element;

// tag-aliasMarkov64Element
// file aliasMarkov.h line 42
struct aliasMarkov64Element;

// tag-aliasMarkovBuffer
// file ./ntproba/aliasMarkovBuffer.h line 40
struct aliasMarkovBuffer;

// tag-arg_t_
// file arg.h line 42
struct arg_t_;

// tag-fsm_t_
// file fsm.h line 53
struct fsm_t_;

// tag-hash_t_
// file hash.h line 60
struct hash_t_;

// tag-hive
// file hive.h line 44
struct hive;

// tag-htbl_t_
// file hash.h line 54
struct htbl_t_;

// tag-list_nd_t_
// file list.h line 45
struct list_nd_t_;

// tag-list_t_
// file list.h line 53
struct list_t_;

// tag-lmgerman_max_t_
// file lmgerman.h line 42
struct lmgerman_max_t_;

// tag-lookUpTable
// file ./ntproba/aliasPattern.h line 40
struct lookUpTable;

// tag-markov0DynProg
// file ./ntproba/markov.h line 60
struct markov0DynProg;

// tag-markov1DynProg
// file ./ntproba/markov.h line 70
struct markov1DynProg;

// tag-markov2DynProg
// file ./ntproba/markov.h line 80
struct markov2DynProg;

// tag-markovDynProgWrapper
// file ./ntproba/markov.h line 101
struct markovDynProgWrapper;

// tag-markovImprobaStruct
// file ./ntproba/markov.h line 51
struct markovImprobaStruct;

// tag-markovType
// file ./ntproba/markov.h line 46
enum markovType { NO_MARK=0, MARK0=1, MARK1=2, MARK2=3 };

// tag-message_t_
// file message.h line 86
struct message_t_;

// tag-msg_bforce_t_
// file message.h line 81
struct msg_bforce_t_;

// tag-msg_done_t_
// file message.h line 56
struct msg_done_t_;

// tag-msg_found_t_
// file message.h line 75
struct msg_found_t_;

// tag-msg_load_t_
// file message.h line 60
struct msg_load_t_;

// tag-msg_work_t_
// file message.h line 67
struct msg_work_t_;

// tag-ophbforce_t_
// file ophtask.h line 76
struct ophbforce_t_;

// tag-ophcrack_t_
// file ophcrack.h line 48
struct ophcrack_t_;

// tag-ophel_t_
// file ophel.h line 43
struct ophel_t_;

// tag-ophload_t_
// file ophtask.h line 60
struct ophload_t_;

// tag-ophstat_t_
// file ophstat.h line 43
struct ophstat_t_;

// tag-ophtask_t_
// file ophtask.h line 91
struct ophtask_t_;

// tag-ophwork_t_
// file ophtask.h line 66
struct ophwork_t_;

// tag-patternArray
// file ./ntproba/pattern.h line 42
struct patternArray;

// tag-proba_info_
// file ./ntproba/proba_info.h line 39
struct proba_info_;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rc4_key_st
// file /usr/include/openssl/rc4.h line 73
struct rc4_key_st;

// tag-re_pattern_buffer
// file /usr/include/regex.h line 357
struct re_pattern_buffer;

// tag-scheduler_t_
// file scheduler.h line 49
struct scheduler_t_;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-sysinfo
// file /usr/include/linux/sysinfo.h line 7
struct sysinfo;

// tag-table_t_
// file table.h line 83
struct table_t_;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-xmlDataWrapper
// file ioPattern.c line 50
struct xmlDataWrapper;

#ifndef NULL
#define NULL ((void*)0)
#endif

// DES_ecb_encrypt
// file /usr/include/openssl/des.h line 152
void DES_ecb_encrypt(unsigned char (*)[8l], unsigned char (*)[8l], struct DES_ks *, signed int);
// DES_set_key
// file /usr/include/openssl/des.h line 230
signed int DES_set_key(unsigned char (*)[8l], struct DES_ks *);
// DES_set_key_checked
// file /usr/include/openssl/des.h line 232
signed int DES_set_key_checked(unsigned char (*)[8l], struct DES_ks *);
// DES_set_key_unchecked
// file /usr/include/openssl/des.h line 233
void DES_set_key_unchecked(unsigned char (*)[8l], struct DES_ks *);
// DES_set_odd_parity
// file /usr/include/openssl/des.h line 222
void DES_set_odd_parity(unsigned char (*)[8l]);
// MD4
// file /usr/include/openssl/md4.h line 113
unsigned char * MD4(const unsigned char *, unsigned long int, unsigned char *);
// MD4_Final
// file /usr/include/openssl/md4.h line 112
signed int MD4_Final(unsigned char *, struct MD4state_st *);
// MD4_Init
// file /usr/include/openssl/md4.h line 110
signed int MD4_Init(struct MD4state_st *);
// MD4_Update
// file /usr/include/openssl/md4.h line 111
signed int MD4_Update(struct MD4state_st *, const void *, unsigned long int);
// MD5_Final
// file /usr/include/openssl/md5.h line 112
signed int MD5_Final(unsigned char *, struct MD5state_st *);
// MD5_Init
// file /usr/include/openssl/md5.h line 110
signed int MD5_Init(struct MD5state_st *);
// MD5_Update
// file /usr/include/openssl/md5.h line 111
signed int MD5_Update(struct MD5state_st *, const void *, unsigned long int);
// RC4
// file /usr/include/openssl/rc4.h line 81
void RC4(struct rc4_key_st *, unsigned long int, const unsigned char *, unsigned char *);
// RC4_set_key
// file /usr/include/openssl/rc4.h line 79
void RC4_set_key(struct rc4_key_st *, signed int, const unsigned char *);
// XML_Parse
// file /usr/include/expat.h line 778
enum XML_Status XML_Parse(struct XML_ParserStruct *, const char *, signed int, signed int);
// XML_ParserCreate
// file /usr/include/expat.h line 206
struct XML_ParserStruct * XML_ParserCreate(const char *);
// XML_ParserFree
// file /usr/include/expat.h line 986
void XML_ParserFree(struct XML_ParserStruct *);
// XML_SetElementHandler
// file /usr/include/expat.h line 534
void XML_SetElementHandler(struct XML_ParserStruct *, void (*)(void *, const char *, const char **), void (*)(void *, const char *));
// XML_SetUserData
// file /usr/include/expat.h line 671
void XML_SetUserData(struct XML_ParserStruct *, void *);
// _InitHive
// file hive.c line 120
void _InitHive(struct hive *h);
// _RegCloseHive
// file hive.c line 114
void _RegCloseHive(struct hive *h);
// _RegEnumKey
// file hive.c line 316
signed int _RegEnumKey(struct hive *h, struct _nk_hdr *nr, signed int index, char *name, signed int *namelen);
// _RegGetRootKey
// file hive.c line 208
signed int _RegGetRootKey(struct hive *h, char **root_key);
// _RegOpenHive
// file hive.c line 125
signed int _RegOpenHive(unsigned char *filename, struct hive *h);
// _RegOpenHiveBuffer
// file hive.c line 159
signed int _RegOpenHiveBuffer(unsigned char *buffer, unsigned long int size, struct hive *h);
// _RegOpenKey
// file hive.c line 229
signed int _RegOpenKey(struct hive *h, char *path, struct _nk_hdr **nr);
// _RegQueryValue
// file hive.c line 272
signed int _RegQueryValue(struct hive *h, char *name, struct _nk_hdr *nr, unsigned char **buff, signed int *len);
// __ctype_tolower_loc
// file /usr/include/ctype.h line 81
extern const signed int ** __ctype_tolower_loc(void);
// __fxstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 409
extern signed int __fxstat(signed int, signed int, struct stat *);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __strsep_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1199
static inline char * __strsep_1c(char **__s, char __reject);
// __strsep_1c_link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1199
static inline char * __strsep_1c_link1(char **__s_link1, char __reject_link1);
// __strsep_1c_link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1199
static inline char * __strsep_1c_link2(char **__s_link2, char __reject_link2);
// __strsep_2c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1209
static inline char * __strsep_2c(char **__s, char __reject1, char __reject2);
// __strsep_2c_link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1209
static inline char * __strsep_2c_link1(char **__s_link1, char __reject1_link1, char __reject2_link1);
// __strsep_2c_link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1209
static inline char * __strsep_2c_link2(char **__s_link2, char __reject1_link2, char __reject2_link2);
// __strsep_3c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1237
static inline char * __strsep_3c(char **__s, char __reject1, char __reject2, char __reject3);
// __strsep_3c_link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1237
static inline char * __strsep_3c_link1(char **__s_link1, char __reject1_link1, char __reject2_link1, char __reject3_link1);
// __strsep_3c_link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1237
static inline char * __strsep_3c_link2(char **__s_link2, char __reject1_link2, char __reject2_link2, char __reject3_link2);
// __strsep_g
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1179
extern char * __strsep_g(char **, const char *);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// arg_alloc
// file arg.h line 77
struct arg_t_ * arg_alloc(void);
// arg_default
// file arg.c line 89
void arg_default(struct arg_t_ *arg);
// arg_free
// file arg.c line 82
void arg_free(struct arg_t_ *arg);
// arg_read_conf
// file arg.h line 80
signed int arg_read_conf(struct arg_t_ *arg);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// atoi_link1
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link1(const char *__nptr_link1);
// atoi_link2
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link2(const char *__nptr_link2);
// atoi_link3
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link3(const char *__nptr_link3);
// atoi_link4
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link4(const char *__nptr_link4);
// bkhive
// file ./samdump2/samdump2.h line 31
signed int bkhive(unsigned char *system, unsigned char *pkey, char *error, signed int debug);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// categorize_password
// file misc.c line 247
signed int categorize_password(char *pwd);
// category_string
// file misc.h line 83
const char * category_string(signed int category);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// checkFoundPwd
// file ./ntproba/hashToPwd.h line 48
char checkFoundPwd(char *pwdUTF, unsigned int taille, unsigned int *hash, char *pwd);
// checkPatternArrayCrackMarkov
// file ./ntproba/pattern.h line 57
char checkPatternArrayCrackMarkov(struct patternArray *array, struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// convert_from_colon
// file misc.c line 215
void convert_from_colon(unsigned char *input);
// convert_to_colon
// file misc.c line 209
void convert_to_colon(unsigned char *input);
// deleteAMarkovDynProg
// file markov.c line 197
void deleteAMarkovDynProg(struct AmarkovDynProg *amdp);
// deleteImprobaStruct
// file ./ntproba/markov.h line 114
void deleteImprobaStruct(struct markovImprobaStruct *mis);
// deleteLookUpTable
// file aliasPattern.h line 51
void deleteLookUpTable(struct lookUpTable *lut);
// deleteMarkov0DynProg
// file markov.c line 186
void deleteMarkov0DynProg(struct markov0DynProg *m0dp);
// deleteMarkov1DynProg
// file markov.c line 336
void deleteMarkov1DynProg(struct markov1DynProg *m1dp);
// deleteMarkov2DynProg
// file markov.c line 489
void deleteMarkov2DynProg(struct markov2DynProg *m2dp);
// deleteMarkovDynProgWrapper
// file ./ntproba/markov.h line 118
void deleteMarkovDynProgWrapper(struct markovDynProgWrapper *mdpw);
// deletePatternArray
// file ./ntproba/pattern.h line 59
void deletePatternArray(struct patternArray *array);
// display_found
// file main.c line 432
void display_found(struct ophcrack_t_ *crack, struct msg_found_t_ *found, char *info);
// display_load
// file main.c line 402
void display_load(struct ophcrack_t_ *crack, struct msg_load_t_ *msg, char *info);
// display_stats
// file main.c line 315
void display_stats(struct ophcrack_t_ *crack);
// display_status
// file main.c line 515
void display_status(struct ophcrack_t_ *crack, char *info);
// display_work
// file main.c line 337
void display_work(struct ophcrack_t_ *crack, struct msg_work_t_ *msg, char *info);
// end_element
// file ioPattern.c line 172
void end_element(void *data, const char *element);
// exec_local_pwdump6
// file original.c line 174
signed int exec_local_pwdump6(struct list_t_ *hashes, signed int id);
// exec_remote_pwdump6
// file original.c line 196
signed int exec_remote_pwdump6(struct list_t_ *hashes, const char *hostname, const char *share, const char *user, signed int id);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// fillAliasMarkov0BufferFLine
// file aliasMarkov.h line 73
void fillAliasMarkov0BufferFLine(struct markov0DynProg *m0dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferFLine);
// fillAliasMarkov0BufferMain
// file aliasMarkov.h line 74
void fillAliasMarkov0BufferMain(struct markov0DynProg *m0dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferMain);
// fillAliasMarkov0BufferRoot
// file aliasMarkov.h line 72
void fillAliasMarkov0BufferRoot(struct markov0DynProg *m0dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferRoot);
// fillAliasMarkov1BufferFLine
// file aliasMarkov.h line 77
void fillAliasMarkov1BufferFLine(struct markov1DynProg *m1dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferFLine);
// fillAliasMarkov1BufferMain
// file aliasMarkov.h line 78
void fillAliasMarkov1BufferMain(struct markov1DynProg *m1dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferMain);
// fillAliasMarkov1BufferRoot
// file aliasMarkov.h line 76
void fillAliasMarkov1BufferRoot(struct markov1DynProg *m1dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferRoot);
// fillAliasMarkov2BufferFLine
// file aliasMarkov.h line 81
void fillAliasMarkov2BufferFLine(struct markov2DynProg *m2dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferFLine);
// fillAliasMarkov2BufferMain
// file aliasMarkov.h line 82
void fillAliasMarkov2BufferMain(struct markov2DynProg *m2dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferMain);
// fillAliasMarkov2BufferRoot
// file aliasMarkov.h line 80
void fillAliasMarkov2BufferRoot(struct markov2DynProg *m2dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferRoot);
// find_freeram
// file misc.c line 84
unsigned long int find_freeram(void);
// floor
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 184
extern double floor(double);
// fopen
// file /usr/include/stdio.h line 283
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fprintf_hex
// file misc.c line 238
void fprintf_hex(struct _IO_FILE *file, char *str, signed int len);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fromStringMarkovType
// file ioMarkov.c line 85
enum markovType fromStringMarkovType(const char *word, const signed int length);
// fseek
// file /usr/include/stdio.h line 749
extern signed int fseek(struct _IO_FILE *, signed long int, signed int);
// fseeko
// file /usr/include/stdio.h line 781
extern signed int fseeko(struct _IO_FILE *, signed long int, signed int);
// fsm_alloc
// file fsm.h line 74
struct fsm_t_ * fsm_alloc(struct ophcrack_t_ *crack);
// fsm_handle_pause1
// file fsm.c line 224
struct message_t_ * fsm_handle_pause1(struct fsm_t_ *fsm, struct message_t_ *msg);
// fsm_handle_pause2
// file fsm.c line 248
struct message_t_ * fsm_handle_pause2(struct fsm_t_ *fsm, struct message_t_ *msg);
// fsm_handle_preload
// file fsm.c line 174
struct message_t_ * fsm_handle_preload(struct fsm_t_ *fsm, struct message_t_ *msg);
// fsm_handle_start
// file fsm.h line 78
void fsm_handle_start(struct fsm_t_ *fsm);
// fsm_handle_work1
// file fsm.c line 308
struct message_t_ * fsm_handle_work1(struct fsm_t_ *fsm, struct message_t_ *msg);
// fsm_handle_work2
// file fsm.c line 319
struct message_t_ * fsm_handle_work2(struct fsm_t_ *fsm, struct message_t_ *msg);
// fsm_launch_bforce
// file fsm.c line 404
void fsm_launch_bforce(struct fsm_t_ *fsm);
// fsm_launch_preload
// file fsm.c line 387
void fsm_launch_preload(struct fsm_t_ *fsm);
// fsm_next
// file fsm.h line 76
struct message_t_ * fsm_next(struct fsm_t_ *fsm, struct message_t_ *msg);
// fsm_pause
// file fsm.c line 364
void fsm_pause(struct fsm_t_ *fsm);
// fsm_reset
// file fsm.c line 427
void fsm_reset(struct fsm_t_ *fsm);
// fsm_reset_bforce
// file fsm.c line 381
void fsm_reset_bforce(struct fsm_t_ *fsm);
// fsm_reset_preload
// file fsm.c line 375
void fsm_reset_preload(struct fsm_t_ *fsm);
// fsm_ssave
// file fsm.h line 91
void fsm_ssave(struct fsm_t_ *fsm);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat(signed int __fd, struct stat *__statbuf);
// fstat_link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat_link1(signed int __fd_link1, struct stat *__statbuf_link1);
// fstat_link2
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat_link2(signed int __fd_link2, struct stat *__statbuf_link2);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// getMark0BufferSizeFLine
// file aliasMarkov.h line 61
unsigned long int getMark0BufferSizeFLine(struct markov0DynProg *m0dp);
// getMark0BufferSizeMain
// file aliasMarkov.h line 62
unsigned long int getMark0BufferSizeMain(struct markov0DynProg *m0dp);
// getMark0BufferSizeRoot
// file aliasMarkov.h line 60
unsigned long int getMark0BufferSizeRoot(struct markov0DynProg *m0dp);
// getMark1BufferSizeFLine
// file aliasMarkov.h line 65
unsigned long int getMark1BufferSizeFLine(struct markov1DynProg *m1dp);
// getMark1BufferSizeMain
// file aliasMarkov.h line 66
unsigned long int getMark1BufferSizeMain(struct markov1DynProg *m1dp);
// getMark1BufferSizeRoot
// file aliasMarkov.h line 64
unsigned long int getMark1BufferSizeRoot(struct markov1DynProg *m1dp);
// getMark2BufferSizeFLine
// file aliasMarkov.h line 69
unsigned long int getMark2BufferSizeFLine(struct markov2DynProg *m2dp);
// getMark2BufferSizeMain
// file aliasMarkov.h line 70
unsigned long int getMark2BufferSizeMain(struct markov2DynProg *m2dp);
// getMark2BufferSizeRoot
// file aliasMarkov.h line 68
unsigned long int getMark2BufferSizeRoot(struct markov2DynProg *m2dp);
// getMarkov0DynProgFirstLine
// file markov.c line 140
unsigned long int getMarkov0DynProgFirstLine(struct markov0DynProg *m0dp, struct markovImprobaStruct *mis, unsigned int index, unsigned int requiredLength);
// getMarkov0DynProgRootValue
// file markov.c line 121
unsigned long int getMarkov0DynProgRootValue(struct markov0DynProg *m0dp, struct markovImprobaStruct *mis, unsigned int requiredLength);
// getMarkov0DynProgSpace
// file markov.c line 162
unsigned long int getMarkov0DynProgSpace(struct markov0DynProg *m0dp, struct markovImprobaStruct *mis, unsigned int length, unsigned int level);
// getMarkov1DynProgFirstLine
// file markov.c line 289
unsigned long int getMarkov1DynProgFirstLine(struct markov1DynProg *m1dp, struct markovImprobaStruct *mis, unsigned int index, unsigned int requiredLength);
// getMarkov1DynProgRootValue
// file markov.c line 271
unsigned long int getMarkov1DynProgRootValue(struct markov1DynProg *m1dp, struct markovImprobaStruct *mis, unsigned int requiredLength);
// getMarkov1DynProgSpace
// file markov.c line 310
unsigned long int getMarkov1DynProgSpace(struct markov1DynProg *m1dp, struct markovImprobaStruct *mis, unsigned int length, unsigned int level, unsigned int prevChar);
// getMarkov2DynProgFirstLine
// file markov.c line 442
unsigned long int getMarkov2DynProgFirstLine(struct markov2DynProg *m2dp, struct markovImprobaStruct *mis, unsigned int index, unsigned int requiredLength);
// getMarkov2DynProgRootValue
// file markov.c line 424
unsigned long int getMarkov2DynProgRootValue(struct markov2DynProg *m2dp, struct markovImprobaStruct *mis, unsigned int requiredLength);
// getMarkov2DynProgSpace
// file markov.c line 463
unsigned long int getMarkov2DynProgSpace(struct markov2DynProg *m2dp, struct markovImprobaStruct *mis, unsigned int length, unsigned int level, unsigned int prevChar1, unsigned int prevChar2);
// getMarkovDynProgRootValue
// file markov.c line 539
unsigned long int getMarkovDynProgRootValue(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned int requiredLength);
// getMaxPatternLength
// file pattern.c line 136
unsigned int getMaxPatternLength(struct patternArray *array);
// getPatternFirstRound
// file hashToPwd.c line 46
unsigned long int getPatternFirstRound(struct patternArray *array, unsigned long int index, unsigned int *patIndex);
// getPatternStructSpace
// file pattern.c line 57
unsigned long int getPatternStructSpace(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned long int descriptor, unsigned long int length);
// getThresholdFromPatternArray
// file aliasPattern.c line 125
unsigned long int getThresholdFromPatternArray(struct patternArray *array);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// handle_messages
// file main.c line 593
void handle_messages(struct ophcrack_t_ *crack);
// hashNTH
// file hashToPwd.c line 393
void hashNTH(char *plaintxt, unsigned char *hash);
// hashToIndex
// file ./ntproba/hashToPwd.h line 49
unsigned long int hashToIndex(struct patternArray *array, struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned int *hashsrc, const unsigned int startC, const unsigned int endC, const unsigned int threshold, const unsigned int currentTable, const unsigned int chainLength);
// hash_add_table
// file hash.c line 89
void hash_add_table(struct hash_t_ *hsh, struct table_t_ *tbl);
// hash_alloc
// file hash.c line 43
struct hash_t_ * hash_alloc(enum anonymous_0 kind, signed int hlen, signed int plen, signed int id);
// hash_dump_sam
// file hash.c line 467
signed int hash_dump_sam(struct list_t_ *hashes, signed int id);
// hash_extract_lmnt
// file hash.c line 143
signed int hash_extract_lmnt(char *buff, struct list_t_ *hashes, signed int id);
// hash_free
// file hash.c line 73
void hash_free(struct hash_t_ *hsh);
// hash_load_pwdump
// file hash.h line 93
signed int hash_load_pwdump(struct list_t_ *hashes, struct _IO_FILE *file, signed int id);
// hash_load_sam
// file hash.h line 94
signed int hash_load_sam(struct list_t_ *hashes, const char *dir, signed int id);
// hash_print
// file hash.c line 508
void hash_print(struct hash_t_ *hsh, struct _IO_FILE *file, signed int nice, signed int status, signed int hide);
// indexToPwdUTF
// file ./ntproba/hashToPwd.h line 50
unsigned int indexToPwdUTF(struct patternArray *array, struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, const unsigned long int start, const unsigned int threshold, const unsigned int endC, const unsigned int currentTable, const unsigned int chainLength, char *pwdUTF);
// initAMarkov0DynProg
// file markov.c line 66
void initAMarkov0DynProg(struct AmarkovDynProg *amdp, struct markov0DynProg *m0dp, struct markovImprobaStruct *mis);
// initAliasMarkov32Element
// file aliasMarkov.c line 42
void initAliasMarkov32Element(struct aliasMarkov32Element *am32e, unsigned long int space, unsigned long int *subSpace);
// initAliasMarkov64Element
// file aliasMarkov.c line 89
void initAliasMarkov64Element(struct aliasMarkov64Element *am64e, unsigned long int space, unsigned long int *subSpace);
// initLookUpTable
// file aliasPattern.c line 46
void initLookUpTable(struct lookUpTable *lut, struct patternArray *array);
// initMarkov1DynProg
// file markov.c line 214
void initMarkov1DynProg(struct AmarkovDynProg *amdp, struct markov1DynProg *m1dp, struct markovImprobaStruct *mis);
// initMarkov2DynProg
// file markov.c line 352
void initMarkov2DynProg(struct AmarkovDynProg *amdp, struct markov2DynProg *m2dp, struct markovImprobaStruct *mis);
// initMarkovDynProgWrapper
// file ./ntproba/markov.h line 116
signed int initMarkovDynProgWrapper(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, enum markovType type);
// list_add_head
// file list.h line 82
void list_add_head(struct list_t_ *l, void *data);
// list_add_tail
// file list.h line 89
void list_add_tail(struct list_t_ *l, void *data);
// list_alloc
// file list.h line 61
struct list_t_ * list_alloc(void);
// list_clear
// file list.h line 75
void list_clear(struct list_t_ *l);
// list_free
// file list.h line 71
void list_free(struct list_t_ *l);
// list_nd_alloc
// file list.c line 125
struct list_nd_t_ * list_nd_alloc(void *data);
// list_nd_free
// file list.c line 135
void * list_nd_free(struct list_nd_t_ *nd);
// list_rem_head
// file list.c line 89
void * list_rem_head(struct list_t_ *l);
// list_rem_tail
// file list.c line 107
void * list_rem_tail(struct list_t_ *l);
// lm_from_nt
// file ophcrack.c line 2407
char * lm_from_nt(const char *pwd, signed int n, const unsigned char *lmhash);
// lmflash_bin69
// file lmflash.c line 141
unsigned long int lmflash_bin69(unsigned char *input);
// lmflash_find
// file lmflash.c line 62
void lmflash_find(void *hsh_, void *tbl_, void *el_);
// lmflash_lookup_srt
// file lmflash.c line 99
signed int lmflash_lookup_srt(void *hsh_, void *tbl_, void *el_);
// lmflash_setup
// file lmflash.h line 44
signed int lmflash_setup(void *tbl_);
// lmflash_unbin69
// file lmflash.c line 161
void lmflash_unbin69(unsigned int input, unsigned char *output);
// lmgerman_bin73
// file lmgerman.c line 270
unsigned long int lmgerman_bin73(unsigned char *input);
// lmgerman_check
// file lmgerman.c line 143
signed int lmgerman_check(void *hsh_, void *tbl_, void *el_);
// lmgerman_find
// file lmgerman.c line 62
void lmgerman_find(void *hsh_, void *tbl_, void *el_);
// lmgerman_isvalid
// file lmgerman.c line 188
signed int lmgerman_isvalid(void *hsh_, void *tbl_);
// lmgerman_lookup_srt
// file lmgerman.c line 99
signed int lmgerman_lookup_srt(void *hsh_, void *tbl_, void *el_);
// lmgerman_mkredux
// file lmgerman.c line 194
void lmgerman_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// lmgerman_setup
// file lmgerman.c line 44
signed int lmgerman_setup(void *tbl_);
// lmgerman_unbin36
// file lmgerman.c line 284
void lmgerman_unbin36(unsigned int input, unsigned char *output);
// lmtable_check
// file lmtable.c line 341
signed int lmtable_check(void *hsh_, void *tbl_, void *el_);
// lmtable_find
// file lmtable.c line 85
void lmtable_find(void *hsh_, void *tbl_, void *el_);
// lmtable_isvalid
// file lmtable.c line 385
signed int lmtable_isvalid(void *hsh_, void *tbl_);
// lmtable_lookup_end
// file lmtable.c line 229
signed int lmtable_lookup_end(void *hsh_, void *tbl_, void *el_);
// lmtable_lookup_idx
// file lmtable.c line 178
signed int lmtable_lookup_idx(void *hsh_, void *tbl_, void *el_);
// lmtable_lookup_srt
// file lmtable.c line 274
signed int lmtable_lookup_srt(void *hsh_, void *tbl_, void *el_);
// lmtable_mkhash
// file lmtable.c line 471
void lmtable_mkhash(unsigned char *pwd, unsigned char *hash);
// lmtable_mkredux
// file lmtable.c line 391
void lmtable_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// lmtable_setup
// file lmtable.c line 48
signed int lmtable_setup(void *tbl_);
// load_config
// file main.c line 98
void load_config(struct arg_t_ *arg);
// load_hashes_pwdump
// file main.c line 208
signed int load_hashes_pwdump(struct ophcrack_t_ *crack, signed int id);
// load_hashes_sam
// file main.c line 249
signed int load_hashes_sam(struct ophcrack_t_ *crack, signed int id);
// load_tables
// file main.c line 125
signed int load_tables(struct ophcrack_t_ *crack, struct arg_t_ *arg, struct list_t_ *table_str);
// make_nthash
// file original.c line 153
void make_nthash(char *pw, char *out);
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
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// message_add
// file message.c line 119
void message_add(struct message_t_ *msg);
// message_alloc
// file message.c line 70
struct message_t_ * message_alloc(enum anonymous_3 kind);
// message_bforce
// file message.c line 225
void message_bforce(signed int done, unsigned long int count);
// message_done
// file message.c line 163
void message_done(enum anonymous_12 kind);
// message_found
// file message.c line 213
void message_found(struct hash_t_ *hsh, struct table_t_ *tbl, signed int col);
// message_free
// file message.h line 96
void message_free(struct message_t_ *msg);
// message_get
// file message.c line 140
struct message_t_ * message_get(void);
// message_init
// file message.h line 95
void message_init(void);
// message_insert_first
// file message.c line 127
void message_insert_first(struct list_t_ *messages);
// message_pause
// file message.h line 108
void message_pause(void);
// message_preload
// file message.c line 173
void message_preload(struct table_t_ *tbl, signed int which, signed int done, unsigned long int size);
// message_tryget
// file message.h line 100
struct message_t_ * message_tryget(void);
// message_unload
// file message.c line 186
void message_unload(struct table_t_ *tbl, unsigned long int size);
// message_work
// file message.c line 199
void message_work(struct hash_t_ *hsh, struct table_t_ *tbl, signed int which, signed int cmin, signed int cmax);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 61
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// ntdict_check
// file ntdict.c line 194
signed int ntdict_check(void *hsh_, void *tbl_, void *el_);
// ntdict_find
// file ntdict.c line 111
void ntdict_find(void *hsh_, void *tbl_, void *el_);
// ntdict_isvalid
// file ntdict.c line 240
signed int ntdict_isvalid(void *hsh_, void *tbl_);
// ntdict_lookup_srt
// file ntdict.c line 151
signed int ntdict_lookup_srt(void *hsh_, void *tbl_, void *el_);
// ntdict_mkhash
// file ntdict.c line 364
void ntdict_mkhash(unsigned char *pwd, unsigned char *hash);
// ntdict_mkredux
// file ntdict.c line 246
void ntdict_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// ntdict_setup
// file ntdict.h line 55
signed int ntdict_setup(void *tbl_);
// nteight_bin64
// file nteight.c line 233
unsigned int nteight_bin64(unsigned char *input, signed int length);
// nteight_check
// file nteight.c line 143
signed int nteight_check(void *hsh_, void *tbl_, void *el_);
// nteight_find
// file nteight.c line 62
void nteight_find(void *hsh_, void *tbl_, void *el_);
// nteight_isvalid
// file nteight.c line 187
signed int nteight_isvalid(void *hsh_, void *tbl_);
// nteight_lookup_srt
// file nteight.c line 98
signed int nteight_lookup_srt(void *hsh_, void *tbl_, void *el_);
// nteight_mkhash
// file nteight.c line 229
void nteight_mkhash(unsigned char *pwd, unsigned char *hash);
// nteight_mkredux
// file nteight.c line 193
void nteight_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// nteight_setup
// file nteight.h line 46
signed int nteight_setup(void *tbl_);
// nteight_unbin64
// file nteight.c line 244
signed int nteight_unbin64(unsigned int input, unsigned char *output, signed int length);
// nteightxl_bin95
// file nteightxl.c line 318
unsigned long int nteightxl_bin95(unsigned char *input, signed int length);
// nteightxl_check
// file nteightxl.c line 233
signed int nteightxl_check(void *hsh_, void *tbl_, void *el_);
// nteightxl_find
// file nteightxl.c line 61
void nteightxl_find(void *hsh_, void *tbl_, void *el_);
// nteightxl_isvalid
// file nteightxl.c line 277
signed int nteightxl_isvalid(void *hsh_, void *tbl_);
// nteightxl_lookup_end
// file nteightxl.c line 140
signed int nteightxl_lookup_end(void *hsh_, void *tbl_, void *el_);
// nteightxl_lookup_idx
// file nteightxl.c line 98
signed int nteightxl_lookup_idx(void *hsh_, void *tbl_, void *el_);
// nteightxl_lookup_srt
// file nteightxl.c line 185
signed int nteightxl_lookup_srt(void *hsh_, void *tbl_, void *el_);
// nteightxl_mkhash
// file nteightxl.c line 314
void nteightxl_mkhash(unsigned char *pwd, unsigned char *hash);
// nteightxl_mkredux
// file nteightxl.c line 283
void nteightxl_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// nteightxl_setup
// file nteightxl.h line 48
signed int nteightxl_setup(void *tbl_);
// nteightxl_unbin95
// file nteightxl.c line 329
signed int nteightxl_unbin95(unsigned long int input, unsigned char *output, signed int length);
// ntextended_bin43
// file ntextended.c line 276
unsigned long int ntextended_bin43(unsigned char *input);
// ntextended_check
// file ntextended.c line 142
signed int ntextended_check(void *hsh_, void *tbl_, void *el_);
// ntextended_find
// file ntextended.c line 61
void ntextended_find(void *hsh_, void *tbl_, void *el_);
// ntextended_isvalid
// file ntextended.c line 186
signed int ntextended_isvalid(void *hsh_, void *tbl_);
// ntextended_lookup_srt
// file ntextended.c line 98
signed int ntextended_lookup_srt(void *hsh_, void *tbl_, void *el_);
// ntextended_mkhash
// file ntextended.c line 272
void ntextended_mkhash(unsigned char *pwd, unsigned char *hash);
// ntextended_mkredux
// file ntextended.c line 192
void ntextended_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// ntextended_setup
// file ntextended.c line 43
signed int ntextended_setup(void *tbl_);
// ntextended_unbin95
// file ntextended.c line 310
void ntextended_unbin95(unsigned int input, unsigned char *output);
// ntnine_bin36
// file ntnine.c line 247
unsigned int ntnine_bin36(unsigned char *input, signed int length);
// ntnine_bin37
// file ntnine.c line 258
unsigned int ntnine_bin37(unsigned char *input, signed int length);
// ntnine_check
// file ntnine.c line 143
signed int ntnine_check(void *hsh_, void *tbl_, void *el_);
// ntnine_find
// file ntnine.c line 62
void ntnine_find(void *hsh_, void *tbl_, void *el_);
// ntnine_isvalid
// file ntnine.c line 187
signed int ntnine_isvalid(void *hsh_, void *tbl_);
// ntnine_lookup_srt
// file ntnine.c line 98
signed int ntnine_lookup_srt(void *hsh_, void *tbl_, void *el_);
// ntnine_mkhash
// file ntnine.c line 243
void ntnine_mkhash(unsigned char *pwd, unsigned char *hash);
// ntnine_mkredux
// file ntnine.c line 193
void ntnine_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// ntnine_setup
// file ntnine.h line 48
signed int ntnine_setup(void *tbl_);
// ntnine_unbin36
// file ntnine.c line 272
signed int ntnine_unbin36(unsigned int input, unsigned char *output, signed int length);
// ntnum_bin11
// file ntnum.c line 240
unsigned int ntnum_bin11(unsigned char *input, signed int length);
// ntnum_check
// file ntnum.c line 145
signed int ntnum_check(void *hsh_, void *tbl_, void *el_);
// ntnum_find
// file ntnum.c line 63
void ntnum_find(void *hsh_, void *tbl_, void *el_);
// ntnum_isvalid
// file ntnum.c line 189
signed int ntnum_isvalid(void *hsh_, void *tbl_);
// ntnum_lookup_srt
// file ntnum.c line 98
signed int ntnum_lookup_srt(void *hsh_, void *tbl_, void *el_);
// ntnum_mkhash
// file ntnum.c line 236
void ntnum_mkhash(unsigned char *pwd, unsigned char *hash);
// ntnum_mkredux
// file ntnum.c line 195
void ntnum_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// ntnum_setup
// file ntnum.h line 44
signed int ntnum_setup(void *tbl_);
// ntproba_check
// file ntproba.c line 317
signed int ntproba_check(void *hsh_, void *tbl_, void *el_);
// ntproba_cleanup
// file ntproba.c line 172
void ntproba_cleanup(void *tbl_);
// ntproba_find
// file ntproba.c line 193
void ntproba_find(void *hsh_, void *tbl_, void *el_);
// ntproba_global
// file ntproba.c line 55
struct anonymous * ntproba_global(struct table_t_ *tbl);
// ntproba_init
// file ntproba.c line 155
void * ntproba_init(void *tbl_);
// ntproba_isvalid
// file ntproba.c line 346
signed int ntproba_isvalid(void *hsh_, void *tbl_);
// ntproba_lookup_end
// file ntproba.c line 244
signed int ntproba_lookup_end(void *hsh_, void *tbl_, void *el_);
// ntproba_lookup_idx
// file ntproba.c line 214
signed int ntproba_lookup_idx(void *hsh_, void *tbl_, void *el_);
// ntproba_lookup_srt
// file ntproba.c line 292
signed int ntproba_lookup_srt(void *hsh_, void *tbl_, void *el_);
// ntproba_proba_info_alloc
// file ntproba.c line 107
struct proba_info_ * ntproba_proba_info_alloc(struct table_t_ *tbl);
// ntproba_setup
// file ntproba.h line 42
signed int ntproba_setup(void *tbl_);
// ntseven_bin95
// file ntseven.c line 229
unsigned long int ntseven_bin95(unsigned char *input, signed int length);
// ntseven_check
// file ntseven.c line 142
signed int ntseven_check(void *hsh_, void *tbl_, void *el_);
// ntseven_find
// file ntseven.c line 60
void ntseven_find(void *hsh_, void *tbl_, void *el_);
// ntseven_isvalid
// file ntseven.c line 186
signed int ntseven_isvalid(void *hsh_, void *tbl_);
// ntseven_lookup_srt
// file ntseven.c line 97
signed int ntseven_lookup_srt(void *hsh_, void *tbl_, void *el_);
// ntseven_mkhash
// file ntseven.c line 225
void ntseven_mkhash(unsigned char *pwd, unsigned char *hash);
// ntseven_mkredux
// file ntseven.c line 192
void ntseven_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// ntseven_setup
// file ntseven.h line 49
signed int ntseven_setup(void *tbl_);
// ntseven_unbin95
// file ntseven.c line 240
signed int ntseven_unbin95(unsigned int input, unsigned char *output, signed int length);
// ntspecialxl_bin95
// file ntspecialxl.c line 359
unsigned long int ntspecialxl_bin95(unsigned char *input, signed int length);
// ntspecialxl_check
// file ntspecialxl.c line 193
signed int ntspecialxl_check(void *hsh_, void *tbl_, void *el_);
// ntspecialxl_find
// file ntspecialxl.c line 63
void ntspecialxl_find(void *hsh_, void *tbl_, void *el_);
// ntspecialxl_isvalid
// file ntspecialxl.c line 237
signed int ntspecialxl_isvalid(void *hsh_, void *tbl_);
// ntspecialxl_lookup_end
// file ntspecialxl.c line 100
signed int ntspecialxl_lookup_end(void *hsh_, void *tbl_, void *el_);
// ntspecialxl_lookup_srt
// file ntspecialxl.c line 145
signed int ntspecialxl_lookup_srt(void *hsh_, void *tbl_, void *el_);
// ntspecialxl_mkhash
// file ntspecialxl.c line 355
void ntspecialxl_mkhash(unsigned char *pwd, unsigned char *hash);
// ntspecialxl_mkredux
// file ntspecialxl.c line 243
void ntspecialxl_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux);
// ntspecialxl_setup
// file ntspecialxl.h line 51
signed int ntspecialxl_setup(void *tbl_);
// ntspecialxl_unbin95
// file ntspecialxl.c line 371
signed int ntspecialxl_unbin95(unsigned long int input, unsigned char *output, signed int length);
// open
// file /usr/include/fcntl.h line 149
extern signed int open(const char *, signed int, ...);
// ophcrack_add_hash
// file ophcrack.h line 80
void ophcrack_add_hash(struct ophcrack_t_ *crack, struct hash_t_ *hsh);
// ophcrack_add_table
// file ophcrack.h line 79
void ophcrack_add_table(struct ophcrack_t_ *crack, struct table_t_ *tbl);
// ophcrack_alloc
// file ophcrack.h line 73
struct ophcrack_t_ * ophcrack_alloc(signed int nthreads, struct arg_t_ *arg);
// ophcrack_associate
// file ophcrack.h line 81
void ophcrack_associate(struct ophcrack_t_ *crack, struct hash_t_ *hsh, struct table_t_ *tbl);
// ophcrack_bforce_all
// file ophcrack.c line 958
struct ophtask_t_ * ophcrack_bforce_all(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_bforce_lm
// file ophcrack.c line 1246
struct ophtask_t_ * ophcrack_bforce_lm(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_bforce_nt
// file ophcrack.c line 1107
struct ophtask_t_ * ophcrack_bforce_nt(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_check
// file ophcrack.c line 875
struct ophtask_t_ * ophcrack_check(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_col_cmp
// file ophcrack.c line 1528
signed int ophcrack_col_cmp(const void *a, const void *b);
// ophcrack_export_csv
// file ophcrack.h line 107
void ophcrack_export_csv(struct ophcrack_t_ *crack, struct _IO_FILE *file, signed int *fields, char separator, char quote);
// ophcrack_find
// file ophcrack.c line 517
struct ophtask_t_ * ophcrack_find(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_find_cmin
// file ophcrack.c line 1385
signed int ophcrack_find_cmin(signed int ncols, signed int cmax, signed int total);
// ophcrack_found
// file ophcrack.c line 1547
void ophcrack_found(struct ophcrack_t_ *crack, struct hash_t_ *hsh, struct table_t_ *tbl, signed int col, char *pwd);
// ophcrack_free
// file ophcrack.c line 84
void ophcrack_free(struct ophcrack_t_ *crack);
// ophcrack_has_next
// file ophcrack.c line 1401
signed int ophcrack_has_next(struct ophcrack_t_ *crack);
// ophcrack_lookup_end
// file ophcrack.c line 689
struct ophtask_t_ * ophcrack_lookup_end(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_lookup_idx
// file ophcrack.c line 598
struct ophtask_t_ * ophcrack_lookup_idx(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_lookup_srt
// file ophcrack.c line 797
struct ophtask_t_ * ophcrack_lookup_srt(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_next
// file ophcrack.c line 1424
signed int ophcrack_next(struct ophcrack_t_ *crack);
// ophcrack_notfound
// file ophcrack.c line 1693
void ophcrack_notfound(struct ophcrack_t_ *crack, struct hash_t_ *hsh);
// ophcrack_preload_all
// file ophcrack.c line 1758
struct ophtask_t_ * ophcrack_preload_all(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_preload_check
// file ophcrack.c line 1710
void ophcrack_preload_check(struct ophcrack_t_ *crack);
// ophcrack_preload_one
// file ophcrack.c line 2026
struct ophtask_t_ * ophcrack_preload_one(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_pwd_cmp
// file ophcrack.c line 1508
signed int ophcrack_pwd_cmp(const void *a, const void *b);
// ophcrack_reset
// file ophcrack.c line 275
void ophcrack_reset(struct ophcrack_t_ *crack, signed int kind_mask, signed int remove);
// ophcrack_resolve_nt
// file ophcrack.c line 1079
struct ophtask_t_ * ophcrack_resolve_nt(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_run
// file ophcrack.c line 313
void * ophcrack_run(void *arg);
// ophcrack_save
// file ophcrack.h line 106
void ophcrack_save(struct ophcrack_t_ *crack, struct _IO_FILE *file, signed int nice, signed int status);
// ophcrack_setup_table
// file ophcrack.h line 78
signed int ophcrack_setup_table(struct table_t_ *tbl);
// ophcrack_start
// file ophcrack.h line 75
void ophcrack_start(struct ophcrack_t_ *crack);
// ophcrack_stop
// file ophcrack.c line 103
void ophcrack_stop(struct ophcrack_t_ *crack);
// ophcrack_unload
// file ophcrack.c line 2054
struct ophtask_t_ * ophcrack_unload(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id);
// ophcrack_update
// file ophcrack.h line 100
void ophcrack_update(struct ophcrack_t_ *crack);
// ophel_alloc
// file ophel.c line 38
struct ophel_t_ * ophel_alloc(void);
// ophel_free
// file ophel.c line 55
void ophel_free(struct ophel_t_ *el);
// ophstat_add
// file ophstat.c line 56
void ophstat_add(struct ophstat_t_ *stat1, struct ophstat_t_ *stat2);
// ophstat_alloc
// file ophstat.c line 36
struct ophstat_t_ * ophstat_alloc(void);
// ophstat_free
// file ophstat.c line 51
void ophstat_free(struct ophstat_t_ *stat);
// ophstat_reset
// file ophstat.c line 70
void ophstat_reset(struct ophstat_t_ *stat);
// ophtask_alloc
// file ophtask.c line 38
struct ophtask_t_ * ophtask_alloc(enum anonymous_12 kind);
// ophtask_convert
// file ophtask.c line 179
void ophtask_convert(struct ophtask_t_ *task, enum anonymous_12 from, enum anonymous_12 to);
// ophtask_free
// file ophtask.c line 105
void ophtask_free(struct ophtask_t_ *task);
// parself
// file hive.c line 173
signed long int parself(struct hive *h, char *t, unsigned long int off);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pow
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 153
extern double pow(double, double);
// power
// file pattern.c line 45
unsigned long int power(unsigned int a, unsigned int b);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// proba_info_alloc
// file ./ntproba/proba_info.h line 52
struct proba_info_ * proba_info_alloc(void);
// proba_info_free
// file ./ntproba/proba_info.h line 53
void proba_info_free(struct proba_info_ *proba);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_6 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_6 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_6 *, const union anonymous_9 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_6 *, union anonymous_7 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_7 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_7 *, const union anonymous_9 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_7 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_7 *);
// pthread_setcancelstate
// file /usr/include/pthread.h line 508
extern signed int pthread_setcancelstate(signed int, signed int *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// readImprobaStructFromBinFile
// file ./ntproba/ioMarkov.h line 44
char readImprobaStructFromBinFile(struct markovImprobaStruct **mis, char *path, char *fileName);
// readPatternArrayFromXMLFile
// file ./ntproba/ioPattern.h line 42
char readPatternArrayFromXMLFile(struct patternArray *array, char *path, char *fileName);
// read_data
// file hive.c line 109
unsigned char * read_data(struct hive *h, signed int offset);
// read_hr
// file hive.c line 98
struct _hashrecord * read_hr(struct _hashrecord *hr, unsigned char *pos, signed int index);
// read_lf
// file hive.c line 61
struct _lf_hdr * read_lf(struct _lf_hdr *lf, struct hive *h, signed int offset);
// read_nk
// file hive.c line 42
struct _nk_hdr * read_nk(struct _nk_hdr *nk, struct hive *h, signed int offset);
// read_valuelist
// file hive.c line 87
signed int * read_valuelist(signed int *value, struct hive *h, signed int offset, signed int size);
// read_vk
// file hive.c line 72
struct _vk_hdr * read_vk(struct _vk_hdr *vk, struct hive *h, signed int offset);
// regcomp
// file /usr/include/regex.h line 562
extern signed int regcomp(struct re_pattern_buffer *, const char *, signed int);
// regexec
// file /usr/include/regex.h line 566
extern signed int regexec(const struct re_pattern_buffer *, const char *, unsigned long int, struct anonymous_11 *, signed int);
// regfree
// file /usr/include/regex.h line 574
extern void regfree(struct re_pattern_buffer *);
// resolve_nt_hash
// file original.c line 48
signed int resolve_nt_hash(char *p1, char *p2, char *h, unsigned char *pw, signed int insist);
// rewind
// file /usr/include/stdio.h line 759
extern void rewind(struct _IO_FILE *);
// samdump2
// file ./samdump2/samdump2.h line 32
signed int samdump2(unsigned char *sam, struct list_t_ *list, unsigned char *bootkey, char *error, signed int debug, signed int live, unsigned int size);
// scheduler_add
// file scheduler.c line 157
void scheduler_add(struct scheduler_t_ *sched, void *task, enum anonymous_8 prty);
// scheduler_alloc
// file scheduler.c line 39
struct scheduler_t_ * scheduler_alloc(signed int nthreads);
// scheduler_continue
// file scheduler.c line 131
void scheduler_continue(struct scheduler_t_ *sched);
// scheduler_done
// file scheduler.c line 237
signed int scheduler_done(struct scheduler_t_ *sched, signed int id);
// scheduler_free
// file scheduler.c line 84
void scheduler_free(struct scheduler_t_ *sched);
// scheduler_get
// file scheduler.c line 185
void * scheduler_get(struct scheduler_t_ *sched, signed int id);
// scheduler_pause
// file scheduler.c line 115
void scheduler_pause(struct scheduler_t_ *sched);
// scheduler_start
// file scheduler.c line 101
signed int scheduler_start(struct scheduler_t_ *sched, void * (*fun)(void *), void *arg);
// scheduler_start::fun_object
//
void * fun_object(void *);
// scheduler_stop
// file scheduler.c line 149
void scheduler_stop(struct scheduler_t_ *sched);
// scheduler_wait
// file scheduler.c line 141
void scheduler_wait(struct scheduler_t_ *sched);
// selectCharacterUTF
// file hashToPwd.c line 205
unsigned int selectCharacterUTF(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned long int patternDescriptor, unsigned long int patternLength, unsigned long int biasedCoin, unsigned long int fairDice, char *result);
// selectCharacterUTFFirstRound
// file hashToPwd.c line 64
unsigned int selectCharacterUTFFirstRound(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned long int patternDescriptor, unsigned long int patternLength, unsigned long int subIndex, char *result);
// selectPatternAlias
// file aliasPattern.c line 114
unsigned int selectPatternAlias(struct lookUpTable *lut, unsigned long int biasedCoin, unsigned short int fairDice_);
// sem_destroy
// file /usr/include/semaphore.h line 39
extern signed int sem_destroy(union anonymous_4 *);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous_4 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous_4 *);
// sem_trywait
// file /usr/include/semaphore.h line 66
extern signed int sem_trywait(union anonymous_4 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous_4 *);
// sid_to_key1
// file samdump2.c line 82
void sid_to_key1(unsigned long int sid, unsigned char *deskey);
// sid_to_key2
// file samdump2.c line 101
void sid_to_key2(unsigned long int sid, unsigned char *deskey);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sqrt
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 156
extern double sqrt(double);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// start_element
// file ioPattern.c line 57
void start_element(void *data, const char *element, const char **attribute);
// str_to_key
// file samdump2.c line 59
void str_to_key(unsigned char *str, unsigned char *key);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// strtoull
// file /usr/include/stdlib.h line 214
extern unsigned long long int strtoull(const char *, char ** restrict , signed int);
// sysinfo
// file /usr/include/x86_64-linux-gnu/sys/sysinfo.h line 29
extern signed int sysinfo(struct sysinfo *);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// table_alloc
// file table.c line 46
struct table_t_ * table_alloc(unsigned int code, char *path, signed int idx);
// table_free
// file table.c line 95
void table_free(struct table_t_ *tbl);
// table_kind
// file table.c line 460
enum anonymous_2 table_kind(unsigned int code);
// table_load
// file table.c line 116
signed int table_load(struct table_t_ *tbl);
// table_mmap
// file table.c line 171
char * table_mmap(struct table_t_ *tbl, enum anonymous_10 preload);
// table_open
// file table.h line 140
signed int table_open(struct list_t_ *tables, const char *dir, const char *tblstr);
// table_preload
// file table.c line 243
unsigned long int table_preload(struct table_t_ *tbl, enum anonymous_10 preload);
// table_preload_size
// file table.c line 334
unsigned long int table_preload_size(struct table_t_ *tbl, enum anonymous_10 preload);
// table_preload_state
// file table.c line 449
enum anonymous_10 table_preload_state(struct table_t_ *tbl);
// table_set_size
// file table.c line 139
void table_set_size(struct table_t_ *tbl);
// table_size
// file table.c line 345
unsigned long int table_size(struct table_t_ *tbl);
// table_string
// file table.c line 483
const char * table_string(enum anonymous_2 kind);
// table_unload
// file table.c line 307
unsigned long int table_unload(struct table_t_ *tbl, enum anonymous_10 preload);
// table_unmap
// file table.c line 274
char * table_unmap(struct table_t_ *tbl, enum anonymous_10 preload);
// table_verify
// file table.h line 134
signed int table_verify(struct table_t_ *tbl);
// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usage
// file main.c line 60
void usage();
// utf16_to_utf8
// file samdump2.c line 121
unsigned char * utf16_to_utf8(unsigned char *dest, unsigned short int *src, unsigned long int size);
// wincp1252_to_ascii
// file misc.c line 221
void wincp1252_to_ascii(unsigned char *str);

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

struct anonymous
{
  // refcount
  signed int refcount;
  // proba
  struct proba_info_ *proba;
};

struct anonymous_11
{
  // rm_so
  signed int rm_so;
  // rm_eo
  signed int rm_eo;
};

union anonymous_4
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous_9
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_13
{
  // cblock
  unsigned char cblock[8l];
  // deslong
  unsigned int deslong[2l];
};

union anonymous_6
{
  // __data
  struct anonymous_5 __data;
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

union anonymous_7
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct AmarkovDynProg
{
  // rootValue
  unsigned int *rootValue;
  // firstLine
  unsigned int *firstLine;
  // buffer
  unsigned int *buffer;
  // minImproba
  unsigned int minImproba;
  // bufferWidth
  unsigned int bufferWidth;
  // threshold
  unsigned int threshold;
  // amb
  struct aliasMarkovBuffer *amb;
};

struct DES_ks
{
  // ks
  union anonymous_13 ks[16l];
};

struct MD4state_st
{
  // A
  unsigned int A;
  // B
  unsigned int B;
  // C
  unsigned int C;
  // D
  unsigned int D;
  // Nl
  unsigned int Nl;
  // Nh
  unsigned int Nh;
  // data
  unsigned int data[16l];
  // num
  unsigned int num;
};

struct MD5state_st
{
  // A
  unsigned int A;
  // B
  unsigned int B;
  // C
  unsigned int C;
  // D
  unsigned int D;
  // Nl
  unsigned int Nl;
  // Nh
  unsigned int Nh;
  // data
  unsigned int data[16l];
  // num
  unsigned int num;
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

struct _hashrecord
{
  // nk_offset
  signed int nk_offset;
  // keyname
  char keyname[4l];
};

struct _lf_hdr
{
  // id
  signed short int id;
  // key_num
  signed short int key_num;
  // hr
  unsigned char *hr;
};

struct _nk_hdr
{
  // id
  signed short int id;
  // type
  signed short int type;
  // t1
  signed int t1;
  // t2
  signed int t2;
  // unk1
  signed int unk1;
  // parent_off
  signed int parent_off;
  // subkey_num
  signed int subkey_num;
  // unk2
  signed int unk2;
  // lf_off
  signed int lf_off;
  // unk3
  signed int unk3;
  // value_cnt
  signed int value_cnt;
  // value_off
  signed int value_off;
  // sk_off
  signed int sk_off;
  // classname_off
  signed int classname_off;
  // unk4
  signed int unk4[4l];
  // unk5
  signed int unk5;
  // name_len
  signed short int name_len;
  // classname_len
  signed short int classname_len;
  // key_name
  unsigned char *key_name;
};

struct _vk_hdr
{
  // id
  signed short int id;
  // name_len
  signed short int name_len;
  // data_len
  signed int data_len;
  // data_off
  signed int data_off;
  // data_type
  signed int data_type;
  // flag
  signed short int flag;
  // unk1
  signed short int unk1;
  // value_name
  unsigned char *value_name;
};

struct aliasMarkov32Element
{
  // space
  unsigned long int space;
  // proba
  unsigned int proba[26l];
  // alias
  unsigned char alias[26l];
  // align64Padding
  unsigned char align64Padding[6l];
};

struct aliasMarkov64Element
{
  // space
  unsigned long int space;
  // proba
  unsigned long int proba[26l];
  // alias
  unsigned char alias[26l];
  // align64Padding
  unsigned char align64Padding[6l];
};

struct aliasMarkovBuffer
{
  // bufferRoot
  char *bufferRoot;
  // bufferFLine
  char *bufferFLine;
  // bufferMain
  char *bufferMain;
  // size_bufferRoot
  unsigned long int size_bufferRoot;
  // size_bufferFLine
  unsigned long int size_bufferFLine;
  // size_bufferMain
  unsigned long int size_bufferMain;
};

struct arg_t_
{
  // verbose
  signed int verbose;
  // showempty
  signed int showempty;
  // debug
  signed int debug;
  // quiet
  signed int quiet;
  // run
  signed int run;
  // use_gui
  signed int use_gui;
  // nthreads
  signed int nthreads;
  // nhredux
  signed int nhredux;
  // mdqueue
  signed int mdqueue;
  // bforce
  signed int bforce;
  // bforce_len
  signed int bforce_len;
  // hideuname
  signed int hideuname;
  // auditmode
  signed int auditmode;
  // stats
  signed int stats;
  // ssave
  signed int ssave;
  // exportcsv
  signed int exportcsv;
  // preload
  signed int preload;
  // cfname
  char *cfname;
  // hfname
  char *hfname;
  // ofname
  char *ofname;
  // xfname
  char *xfname;
  // tblstr
  char *tblstr;
  // samdir
  char *samdir;
  // sfname
  char *sfname;
  // lfname
  char *lfname;
  // lfile
  struct _IO_FILE *lfile;
  // table_path
  struct list_t_ *table_path;
  // table_str_conf
  struct list_t_ *table_str_conf;
  // table_str_cmd
  struct list_t_ *table_str_cmd;
};

struct fsm_t_
{
  // oldstate
  enum anonymous_1 oldstate;
  // state
  enum anonymous_1 state;
  // crack
  struct ophcrack_t_ *crack;
  // arg
  struct arg_t_ *arg;
  // preload
  signed int preload;
  // bforce
  signed int bforce;
  // pwait
  signed int pwait;
  // ssave
  signed int ssave;
  // psize_curr
  unsigned long int psize_curr;
  // psize_total
  unsigned long int psize_total;
  // bforce_curr
  unsigned long int bforce_curr;
  // bforce_total
  unsigned long int bforce_total;
  // pending_msg
  struct list_t_ *pending_msg;
  // htoremove
  struct list_t_ *htoremove;
};

struct hash_t_
{
  // kind
  enum anonymous_0 kind;
  // id
  signed int id;
  // uid
  signed int uid;
  // done
  signed int done;
  // hash
  unsigned char *hash;
  // pwd
  char *pwd;
  // str
  char *str;
  // status
  char *status;
  // info
  char info[64l];
  // length
  signed int length;
  // category
  signed int category;
  // time
  signed int time;
  // table
  char *table;
  // tables
  struct list_t_ *tables;
  // tnd
  struct list_nd_t_ *tnd;
  // lmhsh1
  struct hash_t_ *lmhsh1;
  // lmhsh2
  struct hash_t_ *lmhsh2;
};

struct hive
{
  // base
  unsigned char *base;
};

struct htbl_t_
{
  // tbl
  struct table_t_ *tbl;
  // col
  signed int col;
  // covered
  signed int covered;
};

struct list_nd_t_
{
  // data
  void *data;
  // next
  struct list_nd_t_ *next;
  // prev
  struct list_nd_t_ *prev;
};

struct list_t_
{
  // size
  signed int size;
  // head
  struct list_nd_t_ *head;
  // tail
  struct list_nd_t_ *tail;
};

struct lmgerman_max_t_
{
  // n
  char n;
  // k
  char k;
  // max
  unsigned int max;
};

struct lookUpTable
{
  // proba
  unsigned long int *proba;
  // alias
  unsigned int *alias;
  // length
  unsigned int length;
};

struct markov0DynProg
{
  // rootValue
  unsigned long int *rootValue;
  // firstLine
  unsigned long int *firstLine;
  // buffer
  unsigned long int *buffer;
  // minImproba
  unsigned int minImproba;
  // bufferWidth
  unsigned int bufferWidth;
  // threshold
  unsigned int threshold;
};

struct markov1DynProg
{
  // rootValue
  unsigned long int *rootValue;
  // firstLine
  unsigned long int *firstLine;
  // buffer
  unsigned long int *buffer[26l];
  // minImproba
  unsigned int minImproba;
  // bufferWidth
  unsigned int bufferWidth;
  // threshold
  unsigned int threshold;
};

struct markov2DynProg
{
  // rootValue
  unsigned long int *rootValue;
  // firstLine
  unsigned long int *firstLine;
  // buffer
  unsigned long int *buffer[26l][26l];
  // minImproba
  unsigned int minImproba;
  // bufferWidth
  unsigned int bufferWidth;
  // threshold
  unsigned int threshold;
};

struct markovDynProgWrapper
{
  // type
  enum markovType type;
  // m0dp
  struct markov0DynProg *m0dp;
  // m1dp
  struct markov1DynProg *m1dp;
  // m2dp
  struct markov2DynProg *m2dp;
  // amdp
  struct AmarkovDynProg *amdp;
};

struct markovImprobaStruct
{
  // improbaFirst
  unsigned int improbaFirst[26l];
  // improbaMark0
  unsigned int improbaMark0[26l];
  // improbaMark1
  unsigned int improbaMark1[26l][26l];
  // improbaMark2
  unsigned int improbaMark2[26l][26l][26l];
  // meanImprobaMark0
  unsigned int meanImprobaMark0;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct message_t_
{
  // kind
  enum anonymous_3 kind;
  // id
  unsigned int id;
  // data
  void *data;
  // time
  struct timeval time;
};

struct msg_bforce_t_
{
  // done
  signed int done;
  // count
  unsigned long int count;
};

struct msg_done_t_
{
  // kind
  enum anonymous_12 kind;
};

struct msg_found_t_
{
  // hsh
  struct hash_t_ *hsh;
  // tbl
  struct table_t_ *tbl;
  // col
  signed int col;
};

struct msg_load_t_
{
  // tbl
  struct table_t_ *tbl;
  // which
  signed int which;
  // done
  signed int done;
  // size
  unsigned long int size;
};

struct msg_work_t_
{
  // hsh
  struct hash_t_ *hsh;
  // tbl
  struct table_t_ *tbl;
  // which
  signed int which;
  // cmin
  signed int cmin;
  // cmax
  signed int cmax;
};

struct ophbforce_t_
{
  // nhashes
  signed int nhashes;
  // hashes
  struct hash_t_ **hashes;
  // hash
  unsigned char **hash;
  // found
  signed int *found;
  // idx
  signed int idx[8l];
  // len
  signed int len;
  // count
  signed int count;
  // bloom
  signed int bloom[32768l];
};

struct ophcrack_t_
{
  // sched
  struct scheduler_t_ *sched;
  // tables
  struct list_t_ *tables;
  // hashes
  struct list_t_ *hashes;
  // active
  struct list_t_ *active;
  // enabled
  struct list_t_ *enabled;
  // remaining
  struct list_t_ *remaining;
  // hnd
  struct list_nd_t_ *hnd;
  // stat
  struct ophstat_t_ *stat;
  // maxtid
  signed int maxtid;
  // maxhid
  signed int maxhid;
  // maxtkind
  enum anonymous_2 maxtkind;
  // npwds_total
  signed int npwds_total;
  // npwds_found
  signed int npwds_found;
  // find_freeram
  unsigned long int (*find_freeram)(void);
  // freeram
  unsigned long int freeram;
  // arg
  struct arg_t_ *arg;
};

struct ophel_t_
{
  // col
  signed int col;
  // pwd
  char pwd[51l];
  // prefix
  unsigned long int prefix;
  // postfix
  unsigned long int postfix;
  // start
  unsigned long int start;
  // low
  unsigned long int low;
  // high
  unsigned long int high;
  // offset
  unsigned long int offset;
  // stat
  struct ophstat_t_ *stat;
};

struct ophload_t_
{
  // tables
  struct list_t_ *tables;
  // tbl
  struct table_t_ *tbl;
  // preload
  enum anonymous_10 preload;
};

struct ophstat_t_
{
  // hredux
  unsigned long int hredux;
  // prefix
  unsigned long int prefix;
  // postfix
  unsigned long int postfix;
  // start
  unsigned long int start;
  // fseek_idx
  unsigned long int fseek_idx;
  // fseek_end
  unsigned long int fseek_end;
  // fseek_srt
  unsigned long int fseek_srt;
  // falarm
  unsigned long int falarm;
  // falarm_hredux
  unsigned long int falarm_hredux;
  // match_table
  unsigned long int match_table;
  // match_bforce
  unsigned long int match_bforce;
  // length
  unsigned int length[16l];
  // category
  unsigned int category[16l];
  // time
  struct list_t_ *time;
};

struct ophtask_t_
{
  // kind
  enum anonymous_12 kind;
  // data
  void *data;
  // stat
  struct ophstat_t_ *stat;
};

struct ophwork_t_
{
  // hsh
  struct hash_t_ *hsh;
  // htbl
  struct htbl_t_ *htbl;
  // cmin
  signed int cmin;
  // cmax
  signed int cmax;
  // tosearch
  struct ophel_t_ **tosearch;
};

struct patternArray
{
  // size
  unsigned int size;
  // patternDescriptor
  unsigned long int *patternDescriptor;
  // patternLength
  unsigned long int *patternLength;
  // lut
  struct lookUpTable *lut;
  // sizeArray
  unsigned long int *sizeArray;
};

struct proba_info_
{
  // mtype
  enum markovType mtype;
  // nbByteM0
  unsigned int nbByteM0;
  // nbByteM
  unsigned int nbByteM;
  // nbByteBin
  unsigned int nbByteBin;
  // nbBitIndex
  unsigned int nbBitIndex;
  // power2
  unsigned int power2;
  // array
  struct patternArray *array;
  // mis
  struct markovImprobaStruct *mis;
  // mdpw
  struct markovDynProgWrapper *mdpw;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rc4_key_st
{
  // x
  unsigned int x;
  // y
  unsigned int y;
  // data
  unsigned int data[256l];
};

struct re_pattern_buffer
{
  // __buffer
  unsigned char *__buffer;
  // __allocated
  unsigned long int __allocated;
  // __used
  unsigned long int __used;
  // __syntax
  unsigned long int __syntax;
  // __fastmap
  char *__fastmap;
  // __translate
  unsigned char *__translate;
  // re_nsub
  unsigned long int re_nsub;
  // __can_be_null
  unsigned int __can_be_null : 1;
  // __regs_allocated
  unsigned int __regs_allocated : 2;
  // __fastmap_accurate
  unsigned int __fastmap_accurate : 1;
  // __no_sub
  unsigned int __no_sub : 1;
  // __not_bol
  unsigned int __not_bol : 1;
  // __not_eol
  unsigned int __not_eol : 1;
  // __newline_anchor
  unsigned int __newline_anchor : 1;
};

struct scheduler_t_
{
  // nthreads
  signed int nthreads;
  // ntasks
  signed int ntasks;
  // pause
  signed int pause;
  // disk
  signed int disk;
  // queue
  struct list_t_ *queue[3l];
  // sem
  union anonymous_4 *sem;
  // cond
  union anonymous_6 *cond;
  // mutex
  union anonymous_7 *mutex;
  // thread
  unsigned long int *thread;
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

struct sysinfo
{
  // uptime
  signed long int uptime;
  // loads
  unsigned long int loads[3l];
  // totalram
  unsigned long int totalram;
  // freeram
  unsigned long int freeram;
  // sharedram
  unsigned long int sharedram;
  // bufferram
  unsigned long int bufferram;
  // totalswap
  unsigned long int totalswap;
  // freeswap
  unsigned long int freeswap;
  // procs
  unsigned short int procs;
  // pad
  unsigned short int pad;
  // totalhigh
  unsigned long int totalhigh;
  // freehigh
  unsigned long int freehigh;
  // mem_unit
  unsigned int mem_unit;
  // _f
  char _f[0l];
};

struct table_t_
{
  // kind
  enum anonymous_2 kind;
  // code
  unsigned int code;
  // path
  char *path;
  // name
  char *name;
  // id
  signed int id;
  // idx
  signed int idx;
  // cmin
  signed int cmin;
  // cmax
  signed int cmax;
  // ncols
  signed int ncols;
  // offset
  signed int offset;
  // enabled
  signed int enabled;
  // active
  signed int active;
  // idxfile
  struct _IO_FILE *idxfile;
  // endfile
  struct _IO_FILE *endfile;
  // srtfile
  struct _IO_FILE *srtfile;
  // shared_init
  unsigned char shared_init;
  // inisize
  unsigned long int inisize;
  // idxsize
  unsigned long int idxsize;
  // endsize
  unsigned long int endsize;
  // srtsize
  unsigned long int srtsize;
  // sizes
  const unsigned long int *sizes;
  // param
  void *param;
  // idxmem
  char *idxmem;
  // endmem
  char *endmem;
  // srtmem
  char *srtmem;
  // init
  void * (*init)(void *);
  // cleanup
  void (*cleanup)(void *);
  // find
  void (*find)(void *, void *, void *);
  // lookup_idx
  signed int (*lookup_idx)(void *, void *, void *);
  // lookup_end
  signed int (*lookup_end)(void *, void *, void *);
  // lookup_srt
  signed int (*lookup_srt)(void *, void *, void *);
  // check
  signed int (*check)(void *, void *, void *);
  // isvalid
  signed int (*isvalid)(void *, void *);
};

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};

struct xmlDataWrapper
{
  // array
  struct patternArray *array;
  // currentPattern
  unsigned int currentPattern;
  // currentCharType
  unsigned int currentCharType;
};


// alphanum_chars
// file lmtable.h line 42
static const unsigned char alphanum_chars[36l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
// alphanum_max
// file lmtable.h line 44
static const unsigned int alphanum_max[8l] = { (const unsigned int)0, (const unsigned int)0, (const unsigned int)2, (const unsigned int)71, (const unsigned int)2557, (const unsigned int)92056, (const unsigned int)3314018, (const unsigned int)119304647 };
// dicinit
// file ntdict.c line 47
static signed int dicinit = 1;
// empty_lmhash
// file hash.h line 45
static const unsigned char empty_lmhash[8l] = { (const unsigned char)0xaa, (const unsigned char)0xd3, (const unsigned char)0xb4, (const unsigned char)0x35, (const unsigned char)0xb5, (const unsigned char)0x14, (const unsigned char)0x04, (const unsigned char)0xee };
// empty_nthash
// file hash.h line 46
static const unsigned char empty_nthash[16l] = { (const unsigned char)0x31, (const unsigned char)0xd6, (const unsigned char)0xcf, (const unsigned char)0xe0, (const unsigned char)0xd1, (const unsigned char)0x6a, (const unsigned char)0xe9, (const unsigned char)0x31, (const unsigned char)0xb7, (const unsigned char)0x3c, (const unsigned char)0x59, (const unsigned char)0xd7, (const unsigned char)0xe0, (const unsigned char)0xc0, (const unsigned char)0x89, (const unsigned char)0xc0 };
// extended_chars
// file lmtable.h line 43
static const unsigned char extended_chars[69l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// extended_chars_link1
// file lmtable.h line 43
static const unsigned char extended_chars_link1[69l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// extended_chars_link2
// file lmtable.h line 43
static const unsigned char extended_chars_link2[69l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// extended_chars_link3
// file lmtable.h line 43
static const unsigned char extended_chars_link3[69l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// extended_max
// file lmtable.h line 45
static const unsigned int extended_max[8l] = { (const unsigned int)0, (const unsigned int)0, (const unsigned int)1, (const unsigned int)3, (const unsigned int)190, (const unsigned int)13076, (const unsigned int)902235, (const unsigned int)62254232 };
// fsm
// file main.c line 58
struct fsm_t_ *fsm = ((struct fsm_t_ *)NULL);
// global10g
// file ntproba.c line 52
static struct anonymous global10g = { .refcount=0, .proba=(struct proba_info_ *)(void *)0 };
// global60g
// file ntproba.c line 53
static struct anonymous global60g = { .refcount=0, .proba=(struct proba_info_ *)(void *)0 };
// globalfree
// file ntproba.c line 51
static struct anonymous globalfree = { .refcount=0, .proba=(struct proba_info_ *)(void *)0 };
// lmalphanum10k_sizes
// file lmtable.h line 48
static const unsigned long int lmalphanum10k_sizes[10l] = { (const unsigned long int)4, (const unsigned long int)6910420, (const unsigned long int)30819324, (const unsigned long int)61638648, (const unsigned long int)30814120, (const unsigned long int)61628240, (const unsigned long int)30824574, (const unsigned long int)61649148, (const unsigned long int)30811564, (const unsigned long int)61623128 };
// lmalphanum5k_sizes
// file lmtable.h line 49
static const unsigned long int lmalphanum5k_sizes[10l] = { (const unsigned long int)4, (const unsigned long int)6910420, (const unsigned long int)59026754, (const unsigned long int)118053508, (const unsigned long int)59033296, (const unsigned long int)118066592, (const unsigned long int)59036744, (const unsigned long int)118073488, (const unsigned long int)59032468, (const unsigned long int)118064936 };
// lmextended_sizes
// file lmtable.h line 50
static const unsigned long int lmextended_sizes[10l] = { (const unsigned long int)4, (const unsigned long int)92001844, (const unsigned long int)636849574, (const unsigned long int)1273699148, (const unsigned long int)636848624, (const unsigned long int)1273697248, (const unsigned long int)636859776, (const unsigned long int)1273719552, (const unsigned long int)636844860, (const unsigned long int)1273689720 };
// lmflash_max
// file lmflash.h line 42
static const unsigned int lmflash_max[8l] = { (const unsigned int)0, (const unsigned int)0, (const unsigned int)1, (const unsigned int)4, (const unsigned int)191, (const unsigned int)13076, (const unsigned int)902116, (const unsigned int)62245904 };
// lmflash_sizes
// file lmflash.c line 42
static unsigned long int lmflash_sizes[14l] = { (unsigned long int)6, (unsigned long int)268435456, 5279834004ULL, 10559668008ULL, 5279862016ULL, 10559724032ULL, 5279757448ULL, 10559514896ULL, 5279801098ULL, 10559602196ULL, 5279747172ULL, 10559494344ULL, 5279855682ULL, 10559711364ULL };
// lmgerman_chars
// file lmgerman.h line 48
static const unsigned char lmgerman_chars[73l] = { (const unsigned char)0x8e, (const unsigned char)0x99, (const unsigned char)0x9a, (const unsigned char)0xe1, (const unsigned char)48, (const unsigned char)49, (const unsigned char)50, (const unsigned char)51, (const unsigned char)52, (const unsigned char)53, (const unsigned char)54, (const unsigned char)55, (const unsigned char)56, (const unsigned char)57, (const unsigned char)65, (const unsigned char)66, (const unsigned char)67, (const unsigned char)68, (const unsigned char)69, (const unsigned char)70, (const unsigned char)71, (const unsigned char)72, (const unsigned char)73, (const unsigned char)74, (const unsigned char)75, (const unsigned char)76, (const unsigned char)77, (const unsigned char)78, (const unsigned char)79, (const unsigned char)80, (const unsigned char)81, (const unsigned char)82, (const unsigned char)83, (const unsigned char)84, (const unsigned char)85, (const unsigned char)86, (const unsigned char)87, (const unsigned char)88, (const unsigned char)89, (const unsigned char)90, (const unsigned char)32, (const unsigned char)33, (const unsigned char)34, (const unsigned char)35, (const unsigned char)36, (const unsigned char)37, (const unsigned char)38, (const unsigned char)39, (const unsigned char)40, (const unsigned char)41, (const unsigned char)42, (const unsigned char)43, (const unsigned char)44, (const unsigned char)45, (const unsigned char)46, (const unsigned char)47, (const unsigned char)58, (const unsigned char)59, (const unsigned char)60, (const unsigned char)61, (const unsigned char)62, (const unsigned char)63, (const unsigned char)64, (const unsigned char)91, (const unsigned char)92, (const unsigned char)93, (const unsigned char)94, (const unsigned char)95, (const unsigned char)96, (const unsigned char)123, (const unsigned char)124, (const unsigned char)125, (const unsigned char)126 };
// lmgerman_choose
// file lmgerman.h line 86
static const char lmgerman_choose[8l][8l] = { { (const char)1, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0 },
    { (const char)1, (const char)1, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0 },
    { (const char)1, (const char)2, (const char)1, (const char)0, (const char)0, (const char)0, (const char)0, (const char)0 },
    { (const char)1, (const char)3, (const char)3, (const char)1, (const char)0, (const char)0, (const char)0, (const char)0 },
    { (const char)1, (const char)4, (const char)6, (const char)4, (const char)1, (const char)0, (const char)0, (const char)0 },
    { (const char)1, (const char)5, (const char)10, (const char)10, (const char)5, (const char)1, (const char)0, (const char)0 },
    { (const char)1, (const char)6, (const char)15, (const char)20, (const char)15, (const char)6, (const char)1, (const char)0 },
    { (const char)1, (const char)7, (const char)21, (const char)35, (const char)35, (const char)21, (const char)7, (const char)1 } };
// lmgerman_ranks
// file lmgerman.h line 55
static const unsigned char lmgerman_ranks[28l][35l] = { { (const unsigned char)1, (const unsigned char)2, (const unsigned char)4, (const unsigned char)8, (const unsigned char)16, (const unsigned char)32, (const unsigned char)64, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)3, (const unsigned char)5, (const unsigned char)9, (const unsigned char)17, (const unsigned char)33, (const unsigned char)65, (const unsigned char)6, (const unsigned char)10, (const unsigned char)18, (const unsigned char)34, (const unsigned char)66, (const unsigned char)12, (const unsigned char)20, (const unsigned char)36, (const unsigned char)68, (const unsigned char)24, (const unsigned char)40, (const unsigned char)72, (const unsigned char)48, (const unsigned char)80, (const unsigned char)96, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)7, (const unsigned char)11, (const unsigned char)19, (const unsigned char)35, (const unsigned char)67, (const unsigned char)13, (const unsigned char)21, (const unsigned char)37, (const unsigned char)69, (const unsigned char)25, (const unsigned char)41, (const unsigned char)73, (const unsigned char)49, (const unsigned char)81, (const unsigned char)97, (const unsigned char)14, (const unsigned char)22, (const unsigned char)38, (const unsigned char)70, (const unsigned char)26, (const unsigned char)42, (const unsigned char)74, (const unsigned char)50, (const unsigned char)82, (const unsigned char)98, (const unsigned char)28, (const unsigned char)44, (const unsigned char)76, (const unsigned char)52, (const unsigned char)84, (const unsigned char)100, (const unsigned char)56, (const unsigned char)88, (const unsigned char)104, (const unsigned char)112 },
    { (const unsigned char)1, (const unsigned char)2, (const unsigned char)4, (const unsigned char)8, (const unsigned char)16, (const unsigned char)32, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)3, (const unsigned char)5, (const unsigned char)9, (const unsigned char)17, (const unsigned char)33, (const unsigned char)6, (const unsigned char)10, (const unsigned char)18, (const unsigned char)34, (const unsigned char)12, (const unsigned char)20, (const unsigned char)36, (const unsigned char)24, (const unsigned char)40, (const unsigned char)48, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)15, (const unsigned char)23, (const unsigned char)39, (const unsigned char)71, (const unsigned char)27, (const unsigned char)43, (const unsigned char)75, (const unsigned char)51, (const unsigned char)83, (const unsigned char)99, (const unsigned char)29, (const unsigned char)45, (const unsigned char)77, (const unsigned char)53, (const unsigned char)85, (const unsigned char)101, (const unsigned char)57, (const unsigned char)89, (const unsigned char)105, (const unsigned char)113, (const unsigned char)30, (const unsigned char)46, (const unsigned char)78, (const unsigned char)54, (const unsigned char)86, (const unsigned char)102, (const unsigned char)58, (const unsigned char)90, (const unsigned char)106, (const unsigned char)114, (const unsigned char)60, (const unsigned char)92, (const unsigned char)108, (const unsigned char)116, (const unsigned char)120 },
    { (const unsigned char)1, (const unsigned char)2, (const unsigned char)4, (const unsigned char)8, (const unsigned char)16, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)7, (const unsigned char)11, (const unsigned char)19, (const unsigned char)35, (const unsigned char)13, (const unsigned char)21, (const unsigned char)37, (const unsigned char)25, (const unsigned char)41, (const unsigned char)49, (const unsigned char)14, (const unsigned char)22, (const unsigned char)38, (const unsigned char)26, (const unsigned char)42, (const unsigned char)50, (const unsigned char)28, (const unsigned char)44, (const unsigned char)52, (const unsigned char)56, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)31, (const unsigned char)47, (const unsigned char)79, (const unsigned char)55, (const unsigned char)87, (const unsigned char)103, (const unsigned char)59, (const unsigned char)91, (const unsigned char)107, (const unsigned char)115, (const unsigned char)61, (const unsigned char)93, (const unsigned char)109, (const unsigned char)117, (const unsigned char)121, (const unsigned char)62, (const unsigned char)94, (const unsigned char)110, (const unsigned char)118, (const unsigned char)122, (const unsigned char)124, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)3, (const unsigned char)5, (const unsigned char)9, (const unsigned char)17, (const unsigned char)6, (const unsigned char)10, (const unsigned char)18, (const unsigned char)12, (const unsigned char)20, (const unsigned char)24, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)15, (const unsigned char)23, (const unsigned char)39, (const unsigned char)27, (const unsigned char)43, (const unsigned char)51, (const unsigned char)29, (const unsigned char)45, (const unsigned char)53, (const unsigned char)57, (const unsigned char)30, (const unsigned char)46, (const unsigned char)54, (const unsigned char)58, (const unsigned char)60, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)1, (const unsigned char)2, (const unsigned char)4, (const unsigned char)8, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)7, (const unsigned char)11, (const unsigned char)19, (const unsigned char)13, (const unsigned char)21, (const unsigned char)25, (const unsigned char)14, (const unsigned char)22, (const unsigned char)26, (const unsigned char)28, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)63, (const unsigned char)95, (const unsigned char)111, (const unsigned char)119, (const unsigned char)123, (const unsigned char)125, (const unsigned char)126, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)3, (const unsigned char)5, (const unsigned char)9, (const unsigned char)6, (const unsigned char)10, (const unsigned char)12, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)31, (const unsigned char)47, (const unsigned char)55, (const unsigned char)59, (const unsigned char)61, (const unsigned char)62, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)15, (const unsigned char)23, (const unsigned char)27, (const unsigned char)29, (const unsigned char)30, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)1, (const unsigned char)2, (const unsigned char)4, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)7, (const unsigned char)11, (const unsigned char)13, (const unsigned char)14, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)127, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)63, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)3, (const unsigned char)5, (const unsigned char)6, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)31, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)1, (const unsigned char)2, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)15, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)7, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)3, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 },
    { (const unsigned char)1, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0 } };
// lmgerman_sizes
// file lmgerman.c line 42
static unsigned long int lmgerman_sizes[10l] = { (unsigned long int)4, (unsigned long int)170911176, (unsigned long int)599772172, (unsigned long int)1199544344, (unsigned long int)599747104, (unsigned long int)1199494208, (unsigned long int)599734104, (unsigned long int)1199468208, (unsigned long int)599782562, (unsigned long int)1199565124 };
// lmgerman_spec_max
// file lmgerman.h line 96
static const struct lmgerman_max_t_ lmgerman_spec_max[28l] = { { .n=(char)7, .k=(char)1, .max=3560555371U },
    { .n=(char)7, .k=(char)2, .max=4179782393U },
    { .n=(char)7, .k=(char)3, .max=4239611091U },
    { .n=(char)6, .k=(char)1, .max=4283841592U },
    { .n=(char)6, .k=(char)2, .max=4290251810U },
    { .n=(char)7, .k=(char)4, .max=4293720140U },
    { .n=(char)5, .k=(char)1, .max=4294254325U },
    { .n=(char)6, .k=(char)3, .max=4294749801U },
    { .n=(char)7, .k=(char)5, .max=4294870439U },
    { .n=(char)5, .k=(char)2, .max=4294932373U },
    { .n=(char)6, .k=(char)4, .max=4294953915U },
    { .n=(char)4, .k=(char)1, .max=4294960109U },
    { .n=(char)5, .k=(char)3, .max=4294963699U },
    { .n=(char)7, .k=(char)6, .max=4294966030U },
    { .n=(char)4, .k=(char)2, .max=4294966569U },
    { .n=(char)6, .k=(char)5, .max=4294967069U },
    { .n=(char)5, .k=(char)4, .max=4294967173U },
    { .n=(char)3, .k=(char)1, .max=4294967240U },
    { .n=(char)4, .k=(char)3, .max=4294967261U },
    { .n=(char)7, .k=(char)7, .max=4294967280U },
    { .n=(char)6, .k=(char)6, .max=4294967285U },
    { .n=(char)3, .k=(char)2, .max=4294967289U },
    { .n=(char)5, .k=(char)5, .max=4294967290U },
    { .n=(char)2, .k=(char)1, .max=4294967291U },
    { .n=(char)4, .k=(char)4, .max=4294967292U },
    { .n=(char)3, .k=(char)3, .max=4294967293U },
    { .n=(char)2, .k=(char)2, .max=4294967294U },
    { .n=(char)1, .k=(char)1, .max=4294967295U } };
// lmmagic
// file lmtable.h line 46
static const unsigned char lmmagic[8l] = { (const unsigned char)0x4B, (const unsigned char)0x47, (const unsigned char)0x53, (const unsigned char)0x21, (const unsigned char)0x40, (const unsigned char)0x23, (const unsigned char)0x24, (const unsigned char)0x25 };
// max8
// file ntnine.h line 45
static const unsigned int max8 = (const unsigned int)116080197;
// msg_mutex
// file message.c line 39
union anonymous_7 *msg_mutex = ((union anonymous_7 *)NULL);
// msg_queue
// file message.c line 42
struct list_t_ *msg_queue;
// msg_sem
// file message.c line 40
union anonymous_4 *msg_sem = ((union anonymous_4 *)NULL);
// msg_time
// file message.c line 43
struct timeval msg_time;
// ntdict63
// file ntdict.h line 52
static const unsigned char ntdict63[64l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '_', '|', 0 };
// ntdict64
// file ntdict.h line 53
static const unsigned char ntdict64[64l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '_', '|' };
// ntdict_sizes
// file ntdict.c line 48
static unsigned long int ntdict_sizes[10l] = { (unsigned long int)4, (unsigned long int)16777216, (unsigned long int)34481438, (unsigned long int)68962876, (unsigned long int)34473102, (unsigned long int)68946204, (unsigned long int)34475286, (unsigned long int)68950572, (unsigned long int)34479228, (unsigned long int)68958456 };
// nteight_alphanum64
// file nteight.h line 44
static const unsigned char nteight_alphanum64[64l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '!', '*' };
// nteight_sizes
// file nteight.c line 42
static unsigned long int nteight_sizes[18l] = { (unsigned long int)8, (unsigned long int)67108864, 6000043318LLU, 12000086636LLU, 6000073034LLU, 12000146068LLU, 6000106106LLU, 12000212212LLU, 6000192456LLU, 12000384912LLU, 6000173996LLU, 12000347992LLU, 6000174818LLU, 12000349636LLU, 6000123556LLU, 12000247112LLU, 6000124550LLU, 12000249100LLU };
// nteightxl_ext95
// file nteightxl.h line 44
static const unsigned char nteightxl_ext95[95l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// nteightxl_sizes
// file nteightxl.h line 46
static const unsigned long int nteightxl_sizes[10l] = { (const unsigned long int)4, (const unsigned long int)3954293915, 152934456304LLU, 382336140760LLU, 152934550784LLU, 382336376960LLU, 152934374040LLU, 382335935100LLU, 152933057672LLU, 382332644180LLU };
// ntextended_alphanum62
// file ntextended.h line 46
static const unsigned char ntextended_alphanum62[62l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
// ntextended_ext95
// file ntextended.h line 47
static const unsigned char ntextended_ext95[95l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// ntextended_ext95_link1
// file ntextended.h line 47
static const unsigned char ntextended_ext95_link1[95l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// ntextended_low36
// file ntextended.h line 45
static const unsigned char ntextended_low36[36l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
// ntextended_max
// file ntextended.h line 44
static const unsigned int ntextended_max[9l] = { (const unsigned int)0, (const unsigned int)0, (const unsigned int)1, (const unsigned int)6, (const unsigned int)525, (const unsigned int)49896, (const unsigned int)4740179, (const unsigned int)450317032, 2584948056U };
// ntextended_offset
// file ntextended.h line 48
static const unsigned long int ntextended_offset[8l] = { 0ULL, 95ULL, 9120ULL, 866495ULL, 82317120ULL, 7820126495ULL, 742912017120ULL, 4264526623328ULL };
// ntextended_sizes
// file ntextended.c line 41
static unsigned long int ntextended_sizes[10l] = { (unsigned long int)4, (unsigned long int)108118236, (unsigned long int)672425284, (unsigned long int)1344850568, (unsigned long int)672442590, (unsigned long int)1344885180, (unsigned long int)672411252, (unsigned long int)1344822504, (unsigned long int)672417770, (unsigned long int)1344835540 };
// ntnine_low36
// file ntnine.h line 44
static const unsigned char ntnine_low36[36l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
// ntnine_sizes
// file ntnine.c line 42
static unsigned long int ntnine_sizes[14l] = { (unsigned long int)6, (unsigned long int)241864704, (unsigned long int)2963172506, 5926345012LLU, (unsigned long int)2963141176, 5926282352LLU, (unsigned long int)2963198436, 5926396872LLU, (unsigned long int)2963189836, 5926379672LLU, (unsigned long int)2963140476, 5926280952LLU, (unsigned long int)2963169516, 5926339032LLU };
// ntnum_sizes
// file ntnum.c line 43
static unsigned long int ntnum_sizes[10l] = { (unsigned long int)4, (unsigned long int)7086244, (unsigned long int)259203456, (unsigned long int)518406912, (unsigned long int)259204606, (unsigned long int)518409212, (unsigned long int)259212464, (unsigned long int)518424928, (unsigned long int)259218600, (unsigned long int)518437200 };
// ntproba10g_sizes
// file ntproba.h line 39
static const unsigned long int ntproba10g_sizes[10l] = { (const unsigned long int)4, (const unsigned long int)2097156, (const unsigned long int)1190375745, (const unsigned long int)1587167660, (const unsigned long int)1190385840, (const unsigned long int)1587181120, (const unsigned long int)1190415414, (const unsigned long int)1587220552, (const unsigned long int)1190490027, (const unsigned long int)1587320036 };
// ntproba60g_sizes
// file ntproba.h line 40
static const unsigned long int ntproba60g_sizes[10l] = { (const unsigned long int)4, (const unsigned long int)16777220, (const unsigned long int)5742439644, (const unsigned long int)9570732740, (const unsigned long int)5742564921, (const unsigned long int)9570941535, (const unsigned long int)5742605898, (const unsigned long int)9571009830, (const unsigned long int)5742597219, (const unsigned long int)9570995365 };
// ntprobafree_sizes
// file ntproba.h line 38
static const unsigned long int ntprobafree_sizes[8l] = { (const unsigned long int)3, (const unsigned long int)131076, (const unsigned long int)90178767, (const unsigned long int)120238356, (const unsigned long int)90186573, (const unsigned long int)120248764, (const unsigned long int)90172467, (const unsigned long int)120229956 };
// ntseven_ext95
// file ntseven.h line 44
static const unsigned char ntseven_ext95[95l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// ntseven_sizes
// file ntseven.h line 47
static const unsigned long int ntseven_sizes[10l] = { (const unsigned long int)4, (const unsigned long int)33554432, (const unsigned long int)3238653500, 6477307000LLU, (const unsigned long int)3238706894, 6477413788LLU, (const unsigned long int)3238728908, 6477457816LLU, (const unsigned long int)3238618308, 6477236616LLU };
// ntspecialxl_ext95
// file ntspecialxl.h line 44
static const unsigned char ntspecialxl_ext95[95l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~' };
// ntspecialxl_max
// file ntspecialxl.h line 46
static const unsigned long int ntspecialxl_max[8l] = { 0ULL, 0ULL, 18446744073684721294ULL, 18446744071325840772ULL, 18446743847232191149ULL, 18446722558335476990ULL, 18444700113147631855ULL, 18252567820302344023ULL };
// ntspecialxl_offset
// file ntspecialxl.h line 48
static const unsigned long int ntspecialxl_offset[7l] = { 0ULL, 95ULL, 9120ULL, 866495ULL, 82317120ULL, 7820126495ULL, 742912017120ULL };
// ntspecialxl_sizes
// file ntspecialxl.c line 43
static unsigned long int ntspecialxl_sizes[10l] = { (unsigned long int)4, 269228524ULL, 8125947190ULL, 20314867975ULL, 8125917004ULL, 20314792510ULL, 8126010972ULL, 20315027430ULL, 8125860724ULL, 20314651810ULL };
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// postdict
// file ntdict.c line 45
static unsigned char postdict[4096l][16l];
// postdict_len
// file ntdict.c line 46
static unsigned char postdict_len[4096l];
// power2_36
// file ntnine.h line 46
static const unsigned int power2_36 = (const unsigned int)1296;
// power2_95
// file ntseven.h line 45
static const unsigned int power2_95 = (const unsigned int)9025;
// pwdump_nopwd
// file hash.h line 48
static const char pwdump_nopwd[33l] = { 'N', 'O', ' ', 'P', 'A', 'S', 'S', 'W', 'O', 'R', 'D', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 0 };
// samdump_nopwd
// file hash.h line 49
static const char samdump_nopwd[33l] = { '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', 0 };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// tm_main_start
// file main.c line 56
struct timeval tm_main_start;
// tm_main_total
// file main.c line 57
struct timeval tm_main_total;
// worddict
// file ntdict.c line 43
static unsigned char worddict[65536l][16l];
// worddict_len
// file ntdict.c line 44
static unsigned char worddict_len[65536l];

// _InitHive
// file hive.c line 120
void _InitHive(struct hive *h)
{
  h->base = (unsigned char *)(void *)0;
}

// _RegCloseHive
// file hive.c line 114
void _RegCloseHive(struct hive *h)
{
  if(!(h->base == ((unsigned char *)NULL)))
    free((void *)h->base);

}

// _RegEnumKey
// file hive.c line 316
signed int _RegEnumKey(struct hive *h, struct _nk_hdr *nr, signed int index, char *name, signed int *namelen)
{
  struct _lf_hdr *lf;
  struct _nk_hdr *nk;
  struct _hashrecord *hr;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _lf_hdr) /*16ul*/ );
  lf = (struct _lf_hdr *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct _nk_hdr) /*88ul*/ );
  nk = (struct _nk_hdr *)return_value_malloc_2;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct _hashrecord) /*8ul*/ );
  hr = (struct _hashrecord *)return_value_malloc_3;
  signed int tmp_if_expr_4;
  signed int tmp_if_expr_5;
  if(!(index >= nr->subkey_num))
  {
    lf=read_lf(lf, h, nr->lf_off + 0x1000);
    hr=read_hr(hr, lf->hr, index);
    nk=read_nk(nk, h, hr->nk_offset + 0x1000);
    if(!(*namelen >= (signed int)nk->name_len))
      tmp_if_expr_4 = *namelen;

    else
      tmp_if_expr_4 = (signed int)nk->name_len;
    memcpy((void *)name, (const void *)nk->key_name, (unsigned long int)tmp_if_expr_4);
    if(!(*namelen >= (signed int)nk->name_len))
      tmp_if_expr_5 = *namelen;

    else
      tmp_if_expr_5 = (signed int)nk->name_len;
    name[(signed long int)tmp_if_expr_5] = (char)0;
    *namelen = (signed int)nk->name_len;
    free((void *)lf);
    return index + 1 < nr->subkey_num ? index + 1 : -1;
  }

  else
  {
    free((void *)lf);
    return -1;
  }
}

// _RegGetRootKey
// file hive.c line 208
signed int _RegGetRootKey(struct hive *h, char **root_key)
{
  struct _nk_hdr *n;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _nk_hdr) /*88ul*/ );
  n = (struct _nk_hdr *)return_value_malloc_1;
  n=read_nk(n, h, 0x1020);
  if((signed int)n->id == 0x6B6E)
  {
    if((signed int)n->type == 0x2c)
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)((signed int)n->name_len + 1));
      *root_key = (char *)return_value_malloc_2;
      __builtin_strncpy(*root_key, (char *)n->key_name, (unsigned long int)n->name_len);
      (*root_key)[(signed long int)n->name_len] = (char)0;
      free((void *)n);
      return 0;
    }

  }

  free((void *)n);
  return -1;
}

// _RegOpenHive
// file hive.c line 125
signed int _RegOpenHive(unsigned char *filename, struct hive *h)
{
  struct _IO_FILE *hiveh;
  unsigned long int hsize;
  hiveh=fopen((char *)filename, "rb");
  if(!(hiveh == ((struct _IO_FILE *)NULL)))
  {
    signed int return_value_fseek_4;
    return_value_fseek_4=fseek(hiveh, (signed long int)0, 2);
    if(return_value_fseek_4 == 0)
    {
      signed long int return_value_ftell_1;
      return_value_ftell_1=ftell(hiveh);
      hsize = (unsigned long int)return_value_ftell_1;
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(hsize);
      h->base = (unsigned char *)return_value_malloc_2;
      fseek(hiveh, (signed long int)0, 0);
      unsigned long int return_value_fread_3;
      return_value_fread_3=fread((void *)h->base, hsize, (unsigned long int)1, hiveh);
      if(return_value_fread_3 == 1ul)
      {
        if(*((signed int *)h->base) == 0x66676572)
        {
          fclose(hiveh);
          return 0;
        }

      }

    }

    fclose(hiveh);
  }

  return -1;
}

// _RegOpenHiveBuffer
// file hive.c line 159
signed int _RegOpenHiveBuffer(unsigned char *buffer, unsigned long int size, struct hive *h)
{
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(size);
  h->base = (unsigned char *)return_value_malloc_1;
  memcpy((void *)h->base, (const void *)buffer, size);
  if(*((signed int *)h->base) == 0x66676572)
    return 0;

  else
    return -1;
}

// _RegOpenKey
// file hive.c line 229
signed int _RegOpenKey(struct hive *h, char *path, struct _nk_hdr **nr)
{
  struct _nk_hdr *n;
  char *t;
  char *tpath;
  unsigned long int noff;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _nk_hdr) /*88ul*/ );
  n = (struct _nk_hdr *)return_value_malloc_1;
  n=read_nk(n, h, 0x1020);
  if((signed int)n->id == 0x6B6E)
  {
    if((signed int)n->type == 0x2c)
    {
      char *return_value___strdup_2;
      return_value___strdup_2=__strdup(path);
      tpath = return_value___strdup_2;
      t=strtok(tpath, "\\");
      signed int return_value_memcmp_4;
      return_value_memcmp_4=memcmp((const void *)t, (const void *)n->key_name, (unsigned long int)n->name_len);
      if(return_value_memcmp_4 == 0)
      {
        t=strtok((char *)(void *)0, "\\");
        while(!(t == ((char *)NULL)))
        {
          signed long int return_value_parself_3;
          return_value_parself_3=parself(h, t, (unsigned long int)(n->lf_off + 0x1000));
          noff = (unsigned long int)return_value_parself_3;
          if(noff == 18446744073709551615ul)
          {
            free((void *)n);
            return -1;
          }

          n=read_nk(n, h, (signed int)(noff + (unsigned long int)0x1000));
          t=strtok((char *)(void *)0, "\\");
        }
        memcpy((void *)*nr, (const void *)n, sizeof(struct _nk_hdr) /*88ul*/ );
        free((void *)n);
        return 0;
      }

      free((void *)tpath);
    }

  }

  free((void *)n);
  return -1;
}

// _RegQueryValue
// file hive.c line 272
signed int _RegQueryValue(struct hive *h, char *name, struct _nk_hdr *nr, unsigned char **buff, signed int *len)
{
  struct _vk_hdr *v;
  unsigned int i;
  signed int *l;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _vk_hdr) /*32ul*/ );
  v = (struct _vk_hdr *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)nr->value_cnt);
  l = (signed int *)return_value_malloc_2;
  l=read_valuelist(l, h, nr->value_off + 0x1000, nr->value_cnt);
  *len = 0;
  i = (unsigned int)0;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  unsigned char *return_value_read_data_4;
  for( ; !(i >= (unsigned int)nr->value_cnt); i = i + 1u)
  {
    v=read_vk(v, h, l[(signed long int)i] + 0x1000);
    unsigned long int return_value_strlen_5;
    return_value_strlen_5=strlen(name);
    signed int return_value_memcmp_6;
    return_value_memcmp_6=memcmp((const void *)name, (const void *)v->value_name, return_value_strlen_5);
    if(return_value_memcmp_6 == 0)
      tmp_if_expr_8 = (_Bool)1;

    else
    {
      if(name == ((char *)NULL))
        tmp_if_expr_7 = ((signed int)v->flag & 1) == 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_7 = (_Bool)0;
      tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_8)
    {
      *len = v->data_len & 0x0000FFFF;
      if(!(*buff == ((unsigned char *)NULL)))
        free((void *)*buff);

      void *return_value_malloc_3;
      return_value_malloc_3=malloc((unsigned long int)*len);
      *buff = (unsigned char *)return_value_malloc_3;
      if(!(*len >= 5))
        memcpy((void *)*buff, (const void *)&v->data_off, (unsigned long int)*len);

      else
      {
        return_value_read_data_4=read_data(h, v->data_off + 0x1000);
        memcpy((void *)*buff, (const void *)return_value_read_data_4, (unsigned long int)*len);
      }
      free((void *)v);
      return 0;
    }

  }
  free((void *)v);
  return -1;
}

// __strsep_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1199
static inline char * __strsep_1c(char **__s, char __reject)
{
  char *__retval = *__s;
  char *return_value___builtin_strchr_2;
  char *tmp_post_1;
  if(!(__retval == ((char *)NULL)))
  {
    return_value___builtin_strchr_2=__builtin_strchr(__retval, (signed int)__reject);
    *__s = return_value___builtin_strchr_2;
    if(!(*__s == ((char *)NULL)))
    {
      tmp_post_1 = *__s;
      *__s = *__s + 1l;
      *tmp_post_1 = (char)0;
    }

  }

  return __retval;
}

// __strsep_1c_link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1199
static inline char * __strsep_1c_link1(char **__s_link1, char __reject_link1)
{
  char *__retval_link1 = *__s_link1;
  char *return_value___builtin_strchr_2_link1;
  char *tmp_post_1_link1;
  if(!(__retval_link1 == ((char *)NULL)))
  {
    return_value___builtin_strchr_2_link1=__builtin_strchr(__retval_link1, (signed int)__reject_link1);
    *__s_link1 = return_value___builtin_strchr_2_link1;
    if(!(*__s_link1 == ((char *)NULL)))
    {
      tmp_post_1_link1 = *__s_link1;
      *__s_link1 = *__s_link1 + 1l;
      *tmp_post_1_link1 = (char)0;
    }

  }

  return __retval_link1;
}

// __strsep_1c_link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1199
static inline char * __strsep_1c_link2(char **__s_link2, char __reject_link2)
{
  char *__retval_link2 = *__s_link2;
  char *return_value___builtin_strchr_2_link2;
  char *tmp_post_1_link2;
  if(!(__retval_link2 == ((char *)NULL)))
  {
    return_value___builtin_strchr_2_link2=__builtin_strchr(__retval_link2, (signed int)__reject_link2);
    *__s_link2 = return_value___builtin_strchr_2_link2;
    if(!(*__s_link2 == ((char *)NULL)))
    {
      tmp_post_1_link2 = *__s_link2;
      *__s_link2 = *__s_link2 + 1l;
      *tmp_post_1_link2 = (char)0;
    }

  }

  return __retval_link2;
}

// __strsep_2c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1209
static inline char * __strsep_2c(char **__s, char __reject1, char __reject2)
{
  char *__retval = *__s;
  _Bool tmp_if_expr_2;
  char *tmp_post_1;
  if(!(__retval == ((char *)NULL)))
  {
    char *__cp = __retval;
    for( ; (_Bool)1; __cp = __cp + 1l)
    {
      if((signed int)*__cp == 0)
      {
        __cp = (char *)(void *)0;
        break;
      }

      if(*__cp == __reject1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = *__cp == __reject2 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
      {
        tmp_post_1 = __cp;
        __cp = __cp + 1l;
        *tmp_post_1 = (char)0;
        break;
      }

    }
    *__s = __cp;
  }

  return __retval;
}

// __strsep_2c_link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1209
static inline char * __strsep_2c_link1(char **__s_link1, char __reject1_link1, char __reject2_link1)
{
  char *__retval_link1 = *__s_link1;
  _Bool tmp_if_expr_2_link1;
  char *tmp_post_1_link1;
  if(!(__retval_link1 == ((char *)NULL)))
  {
    char *__cp_link1 = __retval_link1;
    for( ; (_Bool)1; __cp_link1 = __cp_link1 + 1l)
    {
      if((signed int)*__cp_link1 == 0)
      {
        __cp_link1 = (char *)(void *)0;
        break;
      }

      if(*__cp_link1 == __reject1_link1)
        tmp_if_expr_2_link1 = (_Bool)1;

      else
        tmp_if_expr_2_link1 = *__cp_link1 == __reject2_link1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2_link1)
      {
        tmp_post_1_link1 = __cp_link1;
        __cp_link1 = __cp_link1 + 1l;
        *tmp_post_1_link1 = (char)0;
        break;
      }

    }
    *__s_link1 = __cp_link1;
  }

  return __retval_link1;
}

// __strsep_2c_link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1209
static inline char * __strsep_2c_link2(char **__s_link2, char __reject1_link2, char __reject2_link2)
{
  char *__retval_link2 = *__s_link2;
  _Bool tmp_if_expr_2_link2;
  char *tmp_post_1_link2;
  if(!(__retval_link2 == ((char *)NULL)))
  {
    char *__cp_link2 = __retval_link2;
    for( ; (_Bool)1; __cp_link2 = __cp_link2 + 1l)
    {
      if((signed int)*__cp_link2 == 0)
      {
        __cp_link2 = (char *)(void *)0;
        break;
      }

      if(*__cp_link2 == __reject1_link2)
        tmp_if_expr_2_link2 = (_Bool)1;

      else
        tmp_if_expr_2_link2 = *__cp_link2 == __reject2_link2 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2_link2)
      {
        tmp_post_1_link2 = __cp_link2;
        __cp_link2 = __cp_link2 + 1l;
        *tmp_post_1_link2 = (char)0;
        break;
      }

    }
    *__s_link2 = __cp_link2;
  }

  return __retval_link2;
}

// __strsep_3c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1237
static inline char * __strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)
{
  char *__retval = *__s;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  char *tmp_post_1;
  if(!(__retval == ((char *)NULL)))
  {
    char *__cp = __retval;
    for( ; (_Bool)1; __cp = __cp + 1l)
    {
      if((signed int)*__cp == 0)
      {
        __cp = (char *)(void *)0;
        break;
      }

      if(*__cp == __reject1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = *__cp == __reject2 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = *__cp == __reject3 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
      {
        tmp_post_1 = __cp;
        __cp = __cp + 1l;
        *tmp_post_1 = (char)0;
        break;
      }

    }
    *__s = __cp;
  }

  return __retval;
}

// __strsep_3c_link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1237
static inline char * __strsep_3c_link1(char **__s_link1, char __reject1_link1, char __reject2_link1, char __reject3_link1)
{
  char *__retval_link1 = *__s_link1;
  _Bool tmp_if_expr_2_link1;
  _Bool tmp_if_expr_3_link1;
  char *tmp_post_1_link1;
  if(!(__retval_link1 == ((char *)NULL)))
  {
    char *__cp_link1 = __retval_link1;
    for( ; (_Bool)1; __cp_link1 = __cp_link1 + 1l)
    {
      if((signed int)*__cp_link1 == 0)
      {
        __cp_link1 = (char *)(void *)0;
        break;
      }

      if(*__cp_link1 == __reject1_link1)
        tmp_if_expr_2_link1 = (_Bool)1;

      else
        tmp_if_expr_2_link1 = *__cp_link1 == __reject2_link1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2_link1)
        tmp_if_expr_3_link1 = (_Bool)1;

      else
        tmp_if_expr_3_link1 = *__cp_link1 == __reject3_link1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3_link1)
      {
        tmp_post_1_link1 = __cp_link1;
        __cp_link1 = __cp_link1 + 1l;
        *tmp_post_1_link1 = (char)0;
        break;
      }

    }
    *__s_link1 = __cp_link1;
  }

  return __retval_link1;
}

// __strsep_3c_link2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1237
static inline char * __strsep_3c_link2(char **__s_link2, char __reject1_link2, char __reject2_link2, char __reject3_link2)
{
  char *__retval_link2 = *__s_link2;
  _Bool tmp_if_expr_2_link2;
  _Bool tmp_if_expr_3_link2;
  char *tmp_post_1_link2;
  if(!(__retval_link2 == ((char *)NULL)))
  {
    char *__cp_link2 = __retval_link2;
    for( ; (_Bool)1; __cp_link2 = __cp_link2 + 1l)
    {
      if((signed int)*__cp_link2 == 0)
      {
        __cp_link2 = (char *)(void *)0;
        break;
      }

      if(*__cp_link2 == __reject1_link2)
        tmp_if_expr_2_link2 = (_Bool)1;

      else
        tmp_if_expr_2_link2 = *__cp_link2 == __reject2_link2 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2_link2)
        tmp_if_expr_3_link2 = (_Bool)1;

      else
        tmp_if_expr_3_link2 = *__cp_link2 == __reject3_link2 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3_link2)
      {
        tmp_post_1_link2 = __cp_link2;
        __cp_link2 = __cp_link2 + 1l;
        *tmp_post_1_link2 = (char)0;
        break;
      }

    }
    *__s_link2 = __cp_link2;
  }

  return __retval_link2;
}

// arg_alloc
// file arg.h line 77
struct arg_t_ * arg_alloc(void)
{
  struct arg_t_ *arg;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct arg_t_) /*168ul*/ );
  arg = (struct arg_t_ *)return_value_malloc_1;
  arg_default(arg);
  arg->verbose = 0;
  arg->showempty = 1;
  arg->debug = 0;
  arg->quiet = 0;
  arg->run = 0;
  arg->exportcsv = 0;
  arg->preload = 3;
  arg->use_gui = 0;
  arg->cfname = ((char *)NULL);
  arg->hfname = ((char *)NULL);
  arg->ofname = ((char *)NULL);
  arg->xfname = ((char *)NULL);
  arg->sfname = ((char *)NULL);
  arg->lfname = ((char *)NULL);
  arg->tblstr = ((char *)NULL);
  arg->samdir = ((char *)NULL);
  arg->stats = 0;
  arg->ssave = 0;
  arg->lfile = stdout;
  arg->table_path=list_alloc();
  arg->table_str_conf=list_alloc();
  arg->table_str_cmd=list_alloc();
  return arg;
}

// arg_default
// file arg.c line 89
void arg_default(struct arg_t_ *arg)
{
  arg->nthreads = 1 + 1;
  arg->nhredux = 50000;
  arg->mdqueue = 500;
  arg->bforce = 1;
  arg->bforce_len = 4;
  arg->hideuname = 0;
  arg->auditmode = 0;
}

// arg_free
// file arg.c line 82
void arg_free(struct arg_t_ *arg)
{
  list_free(arg->table_path);
  list_free(arg->table_str_conf);
  list_free(arg->table_str_cmd);
  free((void *)arg);
}

// arg_read_conf
// file arg.h line 80
signed int arg_read_conf(struct arg_t_ *arg)
{
  struct _IO_FILE *cfile;
  cfile=fopen(arg->cfname, "r");
  char *return_value_fgets_1;
  signed int return_value_regexec_3;
  char *return_value___strdup_4;
  char *return_value___strdup_5;
  if(cfile == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    struct re_pattern_buffer regex[11l];
    struct anonymous_11 match[2l];
    signed int n = (signed int)(sizeof(struct re_pattern_buffer [11l]) /*704ul*/  / sizeof(struct re_pattern_buffer) /*64ul*/ );
    signed int i = 0;
    static const char *pattern[11l] = { "^[ \t]*#", "^[ \t]*_", "^[ \t]*table[ \t]+([^\t]+)[ \t]*_", "^[ \t]*nthreads[ \t]+([^ \t]+)[ \t]*_",
    "^[ \t]*nhredux[ \t]+([^ \t]+)[ \t]*_", "^[ \t]*maxdqueue[ \t]+([^ \t]+)[ \t]*_",
    "^[ \t]*bforce[ \t]+([^ \t]+)[ \t]*_", "^[ \t]*session_file[ \t]+([^ \t]+)[ \t]*_",
    "^[ \t]*session_save[ \t]+([^ \t]+)[ \t]*_",
    "^[ \t]*hideuname[ \t]+([^ \t]+)[ \t]*_",
    "^[ \t]*auditmode[ \t]+([^ \t]+)[ \t]*_" };
    for( ; !(i >= n); i = i + 1)
      regcomp(regex + (signed long int)i, pattern[(signed long int)i], 1);
    char buff[512l];
    char tmp[512l];
    signed int count = 0;
    do
    {
      return_value_fgets_1=fgets(buff, (signed int)sizeof(char [512l]) /*512ul*/ , cfile);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      count = count + 1;
      if(count == 0)
        break;

      signed int len;
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(buff);
      len = (signed int)return_value_strlen_2;
      if((signed int)buff[(signed long int)(len + -1)] == 10)
        buff[(signed long int)(len - 1)] = (char)0;

      i = 0;
      for( ; !(i >= n); i = i + 1)
      {
        return_value_regexec_3=regexec(regex + (signed long int)i, buff, (unsigned long int)2, match, 0);
        if(return_value_regexec_3 == 0)
          break;

      }
      if(i == n)
        printf("Invalid parameter at line %d of %s\n", count, arg->cfname);

      else
        if(i >= 2)
        {
          signed int so = match[(signed long int)1].rm_so;
          signed int eo = match[(signed long int)1].rm_eo;
          len = (eo - so) + 1;
          snprintf(tmp, (unsigned long int)(len + 1), "%s", buff + (signed long int)so);
          if(i == 2)
          {
            return_value___strdup_4=__strdup(tmp);
            list_add_tail(arg->table_str_conf, (void *)return_value___strdup_4);
          }

          else
            if(i == 3)
              arg->nthreads=atoi_link3(tmp);

            else
              if(i == 4)
                arg->nhredux=atoi_link3(tmp);

              else
                if(i == 5)
                  arg->mdqueue=atoi_link3(tmp);

                else
                  if(i == 6)
                    arg->bforce=atoi_link3(tmp);

                  else
                    if(i == 7)
                    {
                      return_value___strdup_5=__strdup(tmp);
                      arg->sfname = return_value___strdup_5;
                    }

                    else
                      if(i == 8)
                        arg->ssave=atoi_link3(tmp);

                      else
                        if(i == 9)
                          arg->hideuname=atoi_link3(tmp);

                        else
                          if(i == 10)
                            arg->auditmode=atoi_link3(tmp);

        }

    }
    while((_Bool)1);
    i = 0;
    for( ; !(i >= n); i = i + 1)
      regfree(regex + (signed long int)i);
    fclose(cfile);
    return 0;
  }
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1;
}

// atoi_link1
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link1(const char *__nptr_link1)
{
  signed long int return_value_strtol_1_link1;
  return_value_strtol_1_link1=strtol(__nptr_link1, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link1;
}

// atoi_link2
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link2(const char *__nptr_link2)
{
  signed long int return_value_strtol_1_link2;
  return_value_strtol_1_link2=strtol(__nptr_link2, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link2;
}

// atoi_link3
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link3(const char *__nptr_link3)
{
  signed long int return_value_strtol_1_link3;
  return_value_strtol_1_link3=strtol(__nptr_link3, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link3;
}

// atoi_link4
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link4(const char *__nptr_link4)
{
  signed long int return_value_strtol_1_link4;
  return_value_strtol_1_link4=strtol(__nptr_link4, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link4;
}

// bkhive
// file ./samdump2/samdump2.h line 31
signed int bkhive(unsigned char *system, unsigned char *pkey, char *error, signed int debug)
{
  struct hive h;
  struct _nk_hdr *n = (struct _nk_hdr *)(void *)0;
  unsigned char *b;
  signed int i;
  signed int j;
  signed int buf_len;
  signed int control;
  char *kn[4l] = { "JD", "Skew1", "GBG", "Data" };
  char kv[9l];
  unsigned char *buf = (unsigned char *)(void *)0;
  char *keyname;
  char *root_key;
  char *regselect;
  char *reglsa;
  unsigned char key[16l];
  signed int p[16l] = { 0xb, 0x6, 0x7, 0x1, 0x8, 0xa, 0xe, 0x0, 0x3, 0x5, 0x2, 0xf, 0xd, 0x9, 0xc, 0x4 };
  _InitHive(&h);
  signed int return_value__RegOpenHive_1;
  return_value__RegOpenHive_1=_RegOpenHive(system, &h);
  signed int return_value__RegQueryValue_8;
  if(!(return_value__RegOpenHive_1 == 0))
  {
    sprintf(error, "Error opening hive file %s\n", system);
    return -1;
  }

  else
  {
    signed int return_value__RegGetRootKey_2;
    return_value__RegGetRootKey_2=_RegGetRootKey(&h, &root_key);
    if(!(return_value__RegGetRootKey_2 == 0))
    {
      sprintf(error, "Error reading hive root key\n");
      return -1;
    }

    else
    {
      if(!(debug == 0))
        printf("Root Key : %s\n", root_key);

      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(root_key);
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(return_value_strlen_3 + (unsigned long int)10);
      regselect = (char *)return_value_malloc_4;
      unsigned long int return_value_strlen_5;
      return_value_strlen_5=strlen(root_key);
      void *return_value_malloc_6;
      return_value_malloc_6=malloc(return_value_strlen_5 + (unsigned long int)33);
      reglsa = (char *)return_value_malloc_6;
      sprintf(regselect, "%s\\Select", root_key);
      void *return_value_malloc_7;
      return_value_malloc_7=malloc(sizeof(struct _nk_hdr) /*88ul*/ );
      n = (struct _nk_hdr *)return_value_malloc_7;
      signed int return_value__RegOpenKey_9;
      return_value__RegOpenKey_9=_RegOpenKey(&h, regselect, &n);
      if(return_value__RegOpenKey_9 == 0)
      {
        return_value__RegQueryValue_8=_RegQueryValue(&h, "Default", n, &buf, &buf_len);
        if(return_value__RegQueryValue_8 == 0)
        {
          if(buf_len == 4)
            control = *((signed int *)buf);

          else
            control = 1;
          sprintf(reglsa, "%s\\ControlSet%03d\\Control\\Lsa\\", root_key, control);
          if(!(debug == 0))
            printf("Default ControlSet: %03d\n", control);

        }

        else
        {
          sprintf(error, "Error reading ControlSet: _RegQueryValue\n");
          return -1;
        }
      }

      else
      {
        sprintf(error, "Error reading ControlSet: _RegOpenKey\n");
        return -1;
      }
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        unsigned long int return_value_strlen_10;
        return_value_strlen_10=strlen(reglsa);
        unsigned long int return_value_strlen_11;
        return_value_strlen_11=strlen(kn[(signed long int)i]);
        void *return_value_malloc_12;
        return_value_malloc_12=malloc(return_value_strlen_10 + return_value_strlen_11 + (unsigned long int)1);
        keyname = (char *)return_value_malloc_12;
        sprintf(keyname, "%s%s", reglsa, kn[(signed long int)i]);
        if(!(debug == 0))
          printf("********* %s *********\n", keyname);

        signed int return_value__RegOpenKey_13;
        return_value__RegOpenKey_13=_RegOpenKey(&h, keyname, &n);
        if(!(return_value__RegOpenKey_13 == 0))
        {
          _RegCloseHive(&h);
          sprintf(error, "Error accessing key %s\nWrong/corrupted hive??\n", kn[(signed long int)i]);
          return -1;
        }

        b=read_data(&h, n->classname_off + 0x1000);
        if(!(debug == 0))
          printf("n->classname_len = %d b = %x\n", n->classname_len, (unsigned int)(b - h.base));

        j = 0;
        for( ; !(j >= 9) && !(j >= (signed int)n->classname_len); j = j + 1)
          kv[(signed long int)j] = (char)b[(signed long int)(j * 2)];
        kv[(signed long int)8] = (char)0;
        sscanf(kv, "%x", (unsigned int *)&key[(signed long int)(i * 4)]);
        free((void *)keyname);
      }
      _RegCloseHive(&h);
      if(!(debug == 0))
      {
        printf("Bootkey unsorted: ");
        i = 0;
        for( ; !(i >= 0x10); i = i + 1)
          printf("%.2x", key[(signed long int)i]);
        printf("\n");
      }

      i = 0;
      for( ; !(i >= 0x10); i = i + 1)
        pkey[(signed long int)i] = key[(signed long int)p[(signed long int)i]];
      free((void *)n);
      return 0;
    }
  }
}

// categorize_password
// file misc.c line 247
signed int categorize_password(char *pwd)
{
  signed int i;
  signed int category = 0;
  i = 0;
  unsigned long int return_value_strlen_1;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  do
  {
    return_value_strlen_1=strlen(pwd);
    if((unsigned long int)i >= return_value_strlen_1)
      break;

    if((signed int)pwd[(signed long int)i] >= 97)
      tmp_if_expr_4 = (signed int)pwd[(signed long int)i] <= 122 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      category = category | 1;

    else
    {
      if((signed int)pwd[(signed long int)i] >= 65)
        tmp_if_expr_3 = (signed int)pwd[(signed long int)i] <= 90 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
        category = category | 2;

      else
      {
        if((signed int)pwd[(signed long int)i] >= 48)
          tmp_if_expr_2 = (signed int)pwd[(signed long int)i] <= 57 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        if(tmp_if_expr_2)
          category = category | 4;

        else
          category = category | 8;
      }
    }
    i = i + 1;
  }
  while((_Bool)1);
  return category;
}

// category_string
// file misc.h line 83
const char * category_string(signed int category)
{
  switch(category)
  {
    case 0:
      return "empty";
    case 1:
      return "lowalpha";
    case 5:
      return "lowalphanum";
    case 2:
      return "upalpha";
    case 6:
      return "upalphanum";
    case 3:
      return "mixedalpha";
    case 7:
      return "mixedalphanum";
    case 4:
      return "num";
    case 8:
      return "special";
    case 9:
      return "lowalpha+special";
    case 13:
      return "lowalphanum+special";
    case 10:
      return "upalpha+special";
    case 14:
      return "upalphanum+special";
    case 11:
      return "mixedalpha+special";
    case 15:
      return "mixedalphanum+special";
    case 12:
      return "num+special";
    default:
      return "unknown";
  }
}

// checkFoundPwd
// file ./ntproba/hashToPwd.h line 48
char checkFoundPwd(char *pwdUTF, unsigned int taille, unsigned int *hash, char *pwd)
{
  unsigned int i = (unsigned int)0;
  unsigned int hashTest[4l];
  char result = (char)1;
  MD4((unsigned char *)pwdUTF, (unsigned long int)taille, (unsigned char *)hashTest);
  i = (unsigned int)0;
  for( ; !(i >= 4u); i = i + 1u)
    if(!(hash[(signed long int)i] == hashTest[(signed long int)i]))
      result = (char)0;

  if(!(result == 0))
  {
    i = (unsigned int)0;
    for( ; !(i >= taille >> 1); i = i + 1u)
      pwd[(signed long int)i] = pwdUTF[(signed long int)(i << 1)];
    pwd[(signed long int)(taille >> 1)] = (char)0;
  }

  return result;
}

// checkPatternArrayCrackMarkov
// file ./ntproba/pattern.h line 57
char checkPatternArrayCrackMarkov(struct patternArray *array, struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis)
{
  unsigned int i;
  char result = (char)1;
  i = (unsigned int)0;
  for( ; !(i >= array->size + 4294967295u); i = i + 1u)
  {
    unsigned long int return_value_getPatternStructSpace_2;
    return_value_getPatternStructSpace_2=getPatternStructSpace(mdpw, mis, array->patternDescriptor[(signed long int)i], array->patternLength[(signed long int)i]);
    if(!(array->sizeArray[(signed long int)i] == return_value_getPatternStructSpace_2))
    {
      unsigned long int return_value_getPatternStructSpace_1;
      return_value_getPatternStructSpace_1=getPatternStructSpace(mdpw, mis, array->patternDescriptor[(signed long int)i], array->patternLength[(signed long int)i]);
      printf("Pattern %d: size error %llu vs %llu\n", i, (unsigned long long int)array->sizeArray[(signed long int)i], (unsigned long long int)return_value_getPatternStructSpace_1);
      result = (char)0;
    }

  }
  unsigned long int return_value_getPatternStructSpace_4;
  return_value_getPatternStructSpace_4=getPatternStructSpace(mdpw, mis, array->patternDescriptor[(signed long int)(array->size - (unsigned int)1)], array->patternLength[(signed long int)(array->size - (unsigned int)1)]);
  if(!(return_value_getPatternStructSpace_4 >= array->sizeArray[(signed long int)(array->size + 4294967295u)]))
  {
    unsigned long int return_value_getPatternStructSpace_3;
    return_value_getPatternStructSpace_3=getPatternStructSpace(mdpw, mis, array->patternDescriptor[(signed long int)(array->size - (unsigned int)1)], array->patternLength[(signed long int)(array->size - (unsigned int)1)]);
    printf("Pattern %d: size error %llu vs %llu\n", i, (unsigned long long int)array->sizeArray[(signed long int)(array->size - (unsigned int)1)], (unsigned long long int)return_value_getPatternStructSpace_3);
    result = (char)0;
  }

  return result;
}

// convert_from_colon
// file misc.c line 215
void convert_from_colon(unsigned char *input)
{
  unsigned char *tmp = input;
  unsigned int tmp_if_expr_1;
  do
  {
    if((signed int)*tmp == 58)
      tmp_if_expr_1 = 193U;

    else
      tmp_if_expr_1 = (unsigned int)*tmp;
    *tmp = (unsigned char)tmp_if_expr_1;
    if(*tmp == 0)
      break;

    tmp = tmp + 1l;
  }
  while((_Bool)1);
}

// convert_to_colon
// file misc.c line 209
void convert_to_colon(unsigned char *input)
{
  unsigned char *tmp = input;
  signed int tmp_if_expr_1;
  do
  {
    if((unsigned int)*tmp == 193U)
      tmp_if_expr_1 = 58;

    else
      tmp_if_expr_1 = (signed int)*tmp;
    *tmp = (unsigned char)tmp_if_expr_1;
    if(*tmp == 0)
      break;

    tmp = tmp + 1l;
  }
  while((_Bool)1);
}

// deleteAMarkovDynProg
// file markov.c line 197
void deleteAMarkovDynProg(struct AmarkovDynProg *amdp)
{
  if(!(amdp == ((struct AmarkovDynProg *)NULL)))
  {
    if(!(amdp->rootValue == ((unsigned int *)NULL)))
      free((void *)amdp->rootValue);

    if(!(amdp->firstLine == ((unsigned int *)NULL)))
      free((void *)amdp->firstLine);

    if(!(amdp->buffer == ((unsigned int *)NULL)))
      free((void *)amdp->buffer);

    if(!(amdp->amb == ((struct aliasMarkovBuffer *)NULL)))
    {
      free((void *)amdp->amb->bufferRoot);
      free((void *)amdp->amb->bufferFLine);
      free((void *)amdp->amb->bufferMain);
      free((void *)amdp->amb);
    }

  }

}

// deleteImprobaStruct
// file ./ntproba/markov.h line 114
void deleteImprobaStruct(struct markovImprobaStruct *mis)
{
  if(!(mis == ((struct markovImprobaStruct *)NULL)))
    munmap((void *)mis, sizeof(struct markovImprobaStruct) /*73220ul*/ );

}

// deleteLookUpTable
// file aliasPattern.h line 51
void deleteLookUpTable(struct lookUpTable *lut)
{
  if(!(lut == ((struct lookUpTable *)NULL)))
  {
    if(!(lut->proba == ((unsigned long int *)NULL)))
      free((void *)lut->proba);

    if(!(lut->alias == ((unsigned int *)NULL)))
      free((void *)lut->alias);

  }

}

// deleteMarkov0DynProg
// file markov.c line 186
void deleteMarkov0DynProg(struct markov0DynProg *m0dp)
{
  if(!(m0dp == ((struct markov0DynProg *)NULL)))
  {
    if(!(m0dp->rootValue == ((unsigned long int *)NULL)))
      free((void *)m0dp->rootValue);

    if(!(m0dp->firstLine == ((unsigned long int *)NULL)))
      free((void *)m0dp->firstLine);

    if(!(m0dp->buffer == ((unsigned long int *)NULL)))
      free((void *)m0dp->buffer);

  }

}

// deleteMarkov1DynProg
// file markov.c line 336
void deleteMarkov1DynProg(struct markov1DynProg *m1dp)
{
  unsigned int c;
  if(!(m1dp == ((struct markov1DynProg *)NULL)))
  {
    if(!(m1dp->rootValue == ((unsigned long int *)NULL)))
      free((void *)m1dp->rootValue);

    if(!(m1dp->firstLine == ((unsigned long int *)NULL)))
      free((void *)m1dp->firstLine);

    c = (unsigned int)0;
    for( ; !(c >= 26u); c = c + 1u)
      if(!(m1dp->buffer[(signed long int)c] == ((unsigned long int *)NULL)))
        free((void *)m1dp->buffer[(signed long int)c]);

  }

}

// deleteMarkov2DynProg
// file markov.c line 489
void deleteMarkov2DynProg(struct markov2DynProg *m2dp)
{
  unsigned int c1;
  unsigned int c2;
  if(!(m2dp == ((struct markov2DynProg *)NULL)))
  {
    if(!(m2dp->rootValue == ((unsigned long int *)NULL)))
      free((void *)m2dp->rootValue);

    if(!(m2dp->firstLine == ((unsigned long int *)NULL)))
      free((void *)m2dp->firstLine);

    c1 = (unsigned int)0;
    for( ; !(c1 >= 26u); c1 = c1 + 1u)
    {
      c2 = (unsigned int)0;
      for( ; !(c2 >= 26u); c2 = c2 + 1u)
        if(!(m2dp->buffer[(signed long int)c1][(signed long int)c2] == ((unsigned long int *)NULL)))
          free((void *)m2dp->buffer[(signed long int)c1][(signed long int)c2]);

    }
  }

}

// deleteMarkovDynProgWrapper
// file ./ntproba/markov.h line 118
void deleteMarkovDynProgWrapper(struct markovDynProgWrapper *mdpw)
{
  if(!(mdpw == ((struct markovDynProgWrapper *)NULL)))
  {
    if(!(mdpw->m0dp == ((struct markov0DynProg *)NULL)))
    {
      deleteMarkov0DynProg(mdpw->m0dp);
      free((void *)mdpw->m0dp);
    }

    if(!(mdpw->m1dp == ((struct markov1DynProg *)NULL)))
    {
      deleteMarkov1DynProg(mdpw->m1dp);
      free((void *)mdpw->m1dp);
    }

    if(!(mdpw->m2dp == ((struct markov2DynProg *)NULL)))
    {
      deleteMarkov2DynProg(mdpw->m2dp);
      free((void *)mdpw->m2dp);
    }

    if(!(mdpw->amdp == ((struct AmarkovDynProg *)NULL)))
    {
      deleteAMarkovDynProg(mdpw->amdp);
      free((void *)mdpw->amdp);
    }

  }

}

// deletePatternArray
// file ./ntproba/pattern.h line 59
void deletePatternArray(struct patternArray *array)
{
  if(!(array->patternDescriptor == ((unsigned long int *)NULL)))
    free((void *)array->patternDescriptor);

  if(!(array->patternLength == ((unsigned long int *)NULL)))
    free((void *)array->patternLength);

  if(!(array->lut == ((struct lookUpTable *)NULL)))
  {
    deleteLookUpTable(array->lut);
    free((void *)array->lut);
  }

  if(!(array->sizeArray == ((unsigned long int *)NULL)))
    free((void *)array->sizeArray);

}

// display_found
// file main.c line 432
void display_found(struct ophcrack_t_ *crack, struct msg_found_t_ *found, char *info)
{
  struct arg_t_ *arg = crack->arg;
  signed int tmp_statement_expression_1;
  signed int tmp_statement_expression_3;
  signed int tmp_statement_expression_5;
  if(!(arg->quiet == 0))
  {
    if(!(arg->lfile == stdout))
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    struct hash_t_ *hsh = found->hsh;
    struct table_t_ *tbl = found->tbl;
    signed int col = found->col;
    char *pwd = hsh->pwd;
    char *hinfo = hsh->info;
    signed int hid = hsh->id;
    signed int showempty = arg->showempty;
    fprintf(arg->lfile, "%s", info);
    if(arg->auditmode == 0)
    {
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_2;
      return_value___builtin_strcmp_2=__builtin_strcmp(pwd, "");
      tmp_statement_expression_1 = return_value___builtin_strcmp_2;
      if(tmp_statement_expression_1 == 0 && !(showempty == 0))
        fprintf(arg->lfile, "Found empty password for ");

      else
        fprintf(arg->lfile, "Found password %s for ", pwd);
      switch((signed int)hsh->kind)
      {
        case lm1:
        {
          fprintf(arg->lfile, "1st LM hash #%d", hid);
          break;
        }
        case lm2:
        {
          fprintf(arg->lfile, "2nd LM hash #%d", hid);
          break;
        }
        case nt:
        {
          unsigned long int display_found__1__1__2__1____s1_len;
          unsigned long int display_found__1__1__2__1____s2_len;
          signed int return_value___builtin_strcmp_4;
          return_value___builtin_strcmp_4=__builtin_strcmp(hinfo, "");
          tmp_statement_expression_3 = return_value___builtin_strcmp_4;
          if(tmp_statement_expression_3 == 0)
            fprintf(arg->lfile, "NT hash #%d", hid);

          else
            if(!(arg->hideuname == 0))
              fprintf(arg->lfile, "user ***** (NT hash #%d)", hid);

            else
              fprintf(arg->lfile, "user %s (NT hash #%d)", hinfo, hid);
        }
      }
    }

    else
    {
      unsigned long int display_found__1__2__1____s1_len;
      unsigned long int display_found__1__2__1____s2_len;
      signed int return_value___builtin_strcmp_6;
      return_value___builtin_strcmp_6=__builtin_strcmp(pwd, "");
      tmp_statement_expression_5 = return_value___builtin_strcmp_6;
      if(tmp_statement_expression_5 == 0 && !(showempty == 0))
        fprintf(arg->lfile, "Found empty password for ");

      else
        fprintf(arg->lfile, "Found password of length %d for ", hsh->length);
      switch((signed int)hsh->kind)
      {
        case lm1:
        {
          fprintf(arg->lfile, "1st LM hash #%d", hid);
          break;
        }
        case lm2:
        {
          fprintf(arg->lfile, "2nd LM hash #%d", hid);
          break;
        }
        case nt:
          fprintf(arg->lfile, "NT hash #%d", hid);
      }
      const char *return_value_category_string_7;
      return_value_category_string_7=category_string(hsh->category);
      fprintf(arg->lfile, " category: %s ", return_value_category_string_7);
    }
    if(!(tbl == ((struct table_t_ *)NULL)))
      fprintf(arg->lfile, "in table %s #%d at column %d.", tbl->name, tbl->idx, col);

    fprintf(arg->lfile, "\n");
  }
}

// display_load
// file main.c line 402
void display_load(struct ophcrack_t_ *crack, struct msg_load_t_ *msg, char *info)
{
  struct arg_t_ *arg = crack->arg;
  if(!(arg->quiet == 0))
  {
    if(!(arg->lfile == stdout))
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    struct table_t_ *tbl = msg->tbl;
    signed int which = msg->which;
    signed int done = msg->done;
    unsigned long int size = msg->size >> 20;
    char *name = tbl->name;
    signed int tidx = tbl->idx;
    fprintf(arg->lfile, "%s", info);
    if(!(done == 0))
      fprintf(arg->lfile, "Done preloading ");

    else
      fprintf(arg->lfile, "Preloading ");
    if(which == 1)
      fprintf(arg->lfile, ".index file ");

    else
      if(which == 2)
        fprintf(arg->lfile, ".bin file ");

      else
        if(which == 3)
          fprintf(arg->lfile, ".start file ");

    fprintf(arg->lfile, "(%llu MB) of table %s,%d\n", (unsigned long long int)size, name, tidx);
  }
}

// display_stats
// file main.c line 315
void display_stats(struct ophcrack_t_ *crack)
{
  struct ophstat_t_ *stat = crack->stat;
  struct arg_t_ *arg = crack->arg;
  unsigned long long int tmp_if_expr_1;
  if(!(arg->quiet == 0))
  {
    if(!(arg->lfile == stdout))
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    fprintf(arg->lfile, "\n\nStatistics:\n");
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of hash/redux", (unsigned long long int)stat->hredux);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of fseek", (unsigned long long int)stat->fseek_idx + stat->fseek_end + stat->fseek_srt);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of false alarms", (unsigned long long int)stat->falarm);
    if(stat->falarm >= 1ul)
      tmp_if_expr_1 = (unsigned long long int)(stat->falarm_hredux / stat->falarm);

    else
      tmp_if_expr_1 = (unsigned long long int)0;
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of hash/redux per false alarm", tmp_if_expr_1);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of matches in tables", (unsigned long long int)stat->match_table);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of matches in brute force", (unsigned long long int)stat->match_bforce);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of prefixs found", (unsigned long long int)stat->prefix);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of postfixs found", (unsigned long long int)stat->postfix);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of start", (unsigned long long int)stat->start);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of fseek in .index", (unsigned long long int)stat->fseek_idx);
    fprintf(arg->lfile, "%-32s: %llu\n", (const void *)"# of fseek in .bin", (unsigned long long int)stat->fseek_end);
    fprintf(arg->lfile, "%-32s: %llu", (const void *)"# of fseek in .start", (unsigned long long int)stat->fseek_srt);
  }
}

// display_status
// file main.c line 515
void display_status(struct ophcrack_t_ *crack, char *info)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  pthread_mutex_lock(mutex);
  signed int nactive = crack->active->size;
  signed int nenabled = crack->enabled->size;
  signed int nremain = crack->remaining->size;
  signed int npwds_total = crack->npwds_total;
  signed int npwds_found = crack->npwds_found;
  pthread_mutex_unlock(mutex);
  printf("%s", info);
  double return_value_ceil_1;
  if(!(crack->arg->bforce == 0))
  {
    double curr = (double)fsm->bforce_curr;
    double total = (double)fsm->bforce_total;
    signed int ratio = 0;
    if(total > 0.000000)
    {
      return_value_ceil_1=ceil(((double)100 * curr) / total);
      ratio = (signed int)return_value_ceil_1;
    }

    if(!(ratio >= 100))
      printf("brute force (%d%%); ", ratio);

  }

  double return_value_ceil_2;
  if((signed int)fsm->state == st_preload)
  {
    double display_status__1__2__curr = (double)fsm->psize_curr;
    double display_status__1__2__total = (double)fsm->psize_total;
    signed int display_status__1__2__ratio = 0;
    if(display_status__1__2__total > 0.000000)
    {
      return_value_ceil_2=ceil(((double)100 * display_status__1__2__curr) / display_status__1__2__total);
      display_status__1__2__ratio = (signed int)return_value_ceil_2;
    }

    if(!(display_status__1__2__ratio >= 100))
      printf("preload (%d%%); ", display_status__1__2__ratio);

    else
      printf("preload done; ");
  }

  else
  {
    struct list_t_ *tables = crack->tables;
    struct list_nd_t_ *nd;
    signed int total_cmax = 0;
    signed int count = 0;
    nd = tables->head;
    for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
    {
      struct table_t_ *tbl = (struct table_t_ *)nd->data;
      if(!(tbl->enabled == 0))
      {
        signed int ncols = tbl->ncols;
        signed int cmax = tbl->cmax;
        total_cmax = total_cmax + (1000 * (ncols - cmax)) / ncols;
        count = count + 1;
      }

    }
    if(count >= 1)
      total_cmax = total_cmax / (10 * count);

    signed int ndone = (nenabled - nactive) - nremain;
    printf("search (%d%%); ", total_cmax);
    printf("tables: total %d, done %d, using %d; ", nenabled, ndone, nactive);
  }
  printf("pwd found %d/%d.", npwds_found, npwds_total);
}

// display_work
// file main.c line 337
void display_work(struct ophcrack_t_ *crack, struct msg_work_t_ *msg, char *info)
{
  struct arg_t_ *arg = crack->arg;
  if(!(arg->quiet == 0))
  {
    if(!(arg->lfile == stdout))
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    struct hash_t_ *hsh = msg->hsh;
    struct table_t_ *tbl = msg->tbl;
    signed int which = msg->which;
    signed int cmin = msg->cmin;
    signed int cmax = msg->cmax;
    char *name = tbl->name;
    signed int tidx = tbl->idx;
    signed int hid = hsh->id;
    fprintf(arg->lfile, "%s", info);
    switch(which)
    {
      case find:
      {
        fprintf(arg->lfile, "Find chain end for ");
        break;
      }
      case lookup_idx:
      {
        fprintf(arg->lfile, "Lookup prefixes for ");
        break;
      }
      case lookup_end:
      {
        fprintf(arg->lfile, "Lookup postfixes for ");
        break;
      }
      case lookup_srt:
      {
        fprintf(arg->lfile, "Lookup chain starts for ");
        break;
      }
      case check:
        fprintf(arg->lfile, "Checking chain starts for ");
    }
    switch((signed int)hsh->kind)
    {
      case lm1:
      {
        fprintf(arg->lfile, "1st LM hash #%d in table %s,%d from column %d to %d", hid, name, tidx, cmax, cmin);
        break;
      }
      case lm2:
      {
        fprintf(arg->lfile, "2nd LM hash #%d in table %s,%d from column %d to %d", hid, name, tidx, cmax, cmin);
        break;
      }
      case nt:
        fprintf(arg->lfile, "NT hash #%d in table %s,%d from column %d to %d", hid, name, tidx, cmax, cmin);
    }
    fprintf(arg->lfile, "\n");
  }
}

// end_element
// file ioPattern.c line 172
void end_element(void *data, const char *element)
{
  struct xmlDataWrapper *wrapper = (struct xmlDataWrapper *)data;
  signed int tmp_statement_expression_1;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp_2;
  return_value___builtin_strcmp_2=__builtin_strcmp(element, "pattern");
  tmp_statement_expression_1 = return_value___builtin_strcmp_2;
  if(tmp_statement_expression_1 == 0)
    wrapper->currentPattern = wrapper->currentPattern + 1u;

}

// exec_local_pwdump6
// file original.c line 174
signed int exec_local_pwdump6(struct list_t_ *hashes, signed int id)
{
  char command[500l];
  char tmp_file[13l] = { 'o', 'p', 'h', 'c', 'r', 'a', 'c', 'k', '.', 't', 'm', 'p', 0 };
  struct _IO_FILE *file;
  signed int ret;
  chdir("pwdump");
  sprintf(command, "pwdump6_setup.exe -o %s 127.0.0.1", (const void *)tmp_file);
  system(command);
  file=fopen(tmp_file, "r");
  if(file == ((struct _IO_FILE *)NULL))
  {
    chdir("..");
    return -1;
  }

  else
  {
    ret=hash_load_pwdump(hashes, file, id);
    fclose(file);
    unlink(tmp_file);
    chdir("..");
    return ret;
  }
}

// exec_remote_pwdump6
// file original.c line 196
signed int exec_remote_pwdump6(struct list_t_ *hashes, const char *hostname, const char *share, const char *user, signed int id)
{
  char command[500l];
  char tmp_file[13l] = { 'o', 'p', 'h', 'c', 'r', 'a', 'c', 'k', '.', 't', 'm', 'p', 0 };
  struct _IO_FILE *file;
  signed int ret;
  chdir("pwdump");
  signed int tmp_statement_expression_1;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp_2;
  return_value___builtin_strcmp_2=__builtin_strcmp(user, "");
  tmp_statement_expression_1 = return_value___builtin_strcmp_2;
  if(tmp_statement_expression_1 == 0)
    sprintf(command, "pwdump6_setup.exe -o %s -s %s %s", (const void *)tmp_file, share, hostname);

  else
    sprintf(command, "pwdump6_setup.exe -o %s -u %s -s %s %s", (const void *)tmp_file, user, share, hostname);
  system(command);
  file=fopen(tmp_file, "r");
  if(file == ((struct _IO_FILE *)NULL))
  {
    chdir("..");
    return -1;
  }

  else
  {
    ret=hash_load_pwdump(hashes, file, id);
    fclose(file);
    unlink(tmp_file);
    chdir("..");
    return ret;
  }
}

// fillAliasMarkov0BufferFLine
// file aliasMarkov.h line 73
void fillAliasMarkov0BufferFLine(struct markov0DynProg *m0dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferFLine)
{
  unsigned int length;
  unsigned int c;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)2;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 13u); length = length + 1u)
  {
    c = (unsigned int)0;
    for( ; !(c >= 26u); c = c + 1u)
    {
      if(!(m0dp->firstLine[(signed long int)((length + 4294967294u) * 26u + c)] == 0ul))
        tmp_if_expr_1 = m0dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        j = (unsigned int)0;
        for( ; !(j >= 26u); j = j + 1u)
          subSpace[(signed long int)j]=getMarkov0DynProgSpace(m0dp, mis, (unsigned int)2 + ((unsigned int)12 - length), mis->improbaFirst[(signed long int)c] + mis->improbaMark0[(signed long int)j] + ((unsigned int)12 - length) * mis->meanImprobaMark0);
        if(!((0xffffffff00000000 & m0dp->firstLine[(signed long int)((length + 4294967294u) * 26u + c)]) == 0ul))
        {
          am64e = (struct aliasMarkov64Element *)(bufferFLine + (signed long int)bufferPointer);
          initAliasMarkov64Element(am64e, m0dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)], subSpace);
          amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = bufferPointer;
          bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
        }

        else
        {
          am32e = (struct aliasMarkov32Element *)(bufferFLine + (signed long int)bufferPointer);
          initAliasMarkov32Element(am32e, m0dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)], subSpace);
          amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = bufferPointer;
          bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
        }
      }

      else
        amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = (unsigned int)0xffffffff;
    }
  }
}

// fillAliasMarkov0BufferMain
// file aliasMarkov.h line 74
void fillAliasMarkov0BufferMain(struct markov0DynProg *m0dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferMain)
{
  unsigned int length;
  unsigned int level;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)2;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 12u); length = length + 1u)
  {
    level = (unsigned int)2 * m0dp->minImproba;
    for( ; !(level >= m0dp->threshold); level = level + 1u)
      if((length + 4294967284u) * m0dp->minImproba + m0dp->threshold >= level)
      {
        if(!(m0dp->minImproba * length + 4294967295u >= level))
        {
          if(!(m0dp->buffer[(signed long int)((length + 4294967294u) * m0dp->bufferWidth + level + -(m0dp->minImproba * length))] == 0ul))
            tmp_if_expr_1 = m0dp->buffer[(signed long int)(((length - (unsigned int)2) * m0dp->bufferWidth + level) - length * m0dp->minImproba)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_1 = (_Bool)0;
          if(tmp_if_expr_1)
          {
            j = (unsigned int)0;
            for( ; !(j >= 26u); j = j + 1u)
              subSpace[(signed long int)j]=getMarkov0DynProgSpace(m0dp, mis, length + (unsigned int)1, level + mis->improbaMark0[(signed long int)j]);
            if(!((0xffffffff00000000 & m0dp->buffer[(signed long int)((length + 4294967294u) * m0dp->bufferWidth + level + -(m0dp->minImproba * length))]) == 0ul))
            {
              am64e = (struct aliasMarkov64Element *)(bufferMain + (signed long int)bufferPointer);
              initAliasMarkov64Element(am64e, m0dp->buffer[(signed long int)(((length - (unsigned int)2) * m0dp->bufferWidth + level) - length * m0dp->minImproba)], subSpace);
              amdp->buffer[(signed long int)(((length - (unsigned int)2) * m0dp->bufferWidth + level) - length * m0dp->minImproba)] = bufferPointer;
              bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
            }

            else
            {
              am32e = (struct aliasMarkov32Element *)(bufferMain + (signed long int)bufferPointer);
              initAliasMarkov32Element(am32e, m0dp->buffer[(signed long int)(((length - (unsigned int)2) * m0dp->bufferWidth + level) - length * m0dp->minImproba)], subSpace);
              amdp->buffer[(signed long int)(((length - (unsigned int)2) * m0dp->bufferWidth + level) - length * m0dp->minImproba)] = bufferPointer;
              bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
            }
          }

          else
            amdp->buffer[(signed long int)(((length - (unsigned int)2) * m0dp->bufferWidth + level) - length * m0dp->minImproba)] = (unsigned int)0xffffffff;
        }

      }

  }
}

// fillAliasMarkov0BufferRoot
// file aliasMarkov.h line 72
void fillAliasMarkov0BufferRoot(struct markov0DynProg *m0dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferRoot)
{
  unsigned int length;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)1;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 13u); length = length + 1u)
  {
    if(!(m0dp->rootValue[(signed long int)(length + 4294967295u)] == 0ul))
      tmp_if_expr_1 = m0dp->rootValue[(signed long int)(length - (unsigned int)1)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      j = (unsigned int)0;
      for( ; !(j >= 26u); j = j + 1u)
        subSpace[(signed long int)j]=getMarkov0DynProgFirstLine(m0dp, mis, j, length);
      if(!((0xffffffff00000000 & m0dp->rootValue[(signed long int)(length + 4294967295u)]) == 0ul))
      {
        am64e = (struct aliasMarkov64Element *)(bufferRoot + (signed long int)bufferPointer);
        initAliasMarkov64Element(am64e, m0dp->rootValue[(signed long int)(length - (unsigned int)1)], subSpace);
        amdp->rootValue[(signed long int)(length - (unsigned int)1)] = bufferPointer;
        bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
      }

      else
      {
        am32e = (struct aliasMarkov32Element *)(bufferRoot + (signed long int)bufferPointer);
        initAliasMarkov32Element(am32e, m0dp->rootValue[(signed long int)(length - (unsigned int)1)], subSpace);
        amdp->rootValue[(signed long int)(length - (unsigned int)1)] = bufferPointer;
        bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }
    }

    else
      amdp->rootValue[(signed long int)(length - (unsigned int)1)] = (unsigned int)0xffffffff;
  }
}

// fillAliasMarkov1BufferFLine
// file aliasMarkov.h line 77
void fillAliasMarkov1BufferFLine(struct markov1DynProg *m1dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferFLine)
{
  unsigned int length;
  unsigned int c;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)2;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 13u); length = length + 1u)
  {
    c = (unsigned int)0;
    for( ; !(c >= 26u); c = c + 1u)
    {
      if(!(m1dp->firstLine[(signed long int)((length + 4294967294u) * 26u + c)] == 0ul))
        tmp_if_expr_1 = m1dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        j = (unsigned int)0;
        for( ; !(j >= 26u); j = j + 1u)
          subSpace[(signed long int)j]=getMarkov1DynProgSpace(m1dp, mis, (unsigned int)2 + ((unsigned int)12 - length), mis->improbaFirst[(signed long int)c] + mis->improbaMark1[(signed long int)c][(signed long int)j] + ((unsigned int)12 - length) * mis->meanImprobaMark0, j);
        if(!((0xffffffff00000000 & m1dp->firstLine[(signed long int)((length + 4294967294u) * 26u + c)]) == 0ul))
        {
          am64e = (struct aliasMarkov64Element *)(bufferFLine + (signed long int)bufferPointer);
          initAliasMarkov64Element(am64e, m1dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)], subSpace);
          amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = bufferPointer;
          bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
        }

        else
        {
          am32e = (struct aliasMarkov32Element *)(bufferFLine + (signed long int)bufferPointer);
          initAliasMarkov32Element(am32e, m1dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)], subSpace);
          amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = bufferPointer;
          bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
        }
      }

      else
        amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = (unsigned int)0xffffffff;
    }
  }
}

// fillAliasMarkov1BufferMain
// file aliasMarkov.h line 78
void fillAliasMarkov1BufferMain(struct markov1DynProg *m1dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferMain)
{
  unsigned int length;
  unsigned int level;
  unsigned int prevChar1;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)2;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 12u); length = length + 1u)
  {
    level = (unsigned int)2 * m1dp->minImproba;
    for( ; !(level >= m1dp->threshold); level = level + 1u)
      if((length + 4294967284u) * m1dp->minImproba + m1dp->threshold >= level)
      {
        if(!(m1dp->minImproba * length + 4294967295u >= level))
        {
          prevChar1 = (unsigned int)0;
          for( ; !(prevChar1 >= 26u); prevChar1 = prevChar1 + 1u)
          {
            if(!(m1dp->buffer[(signed long int)prevChar1][(signed long int)((length + 4294967294u) * m1dp->bufferWidth + level + -(m1dp->minImproba * length))] == 0ul))
              tmp_if_expr_1 = m1dp->buffer[(signed long int)prevChar1][(signed long int)(((length - (unsigned int)2) * m1dp->bufferWidth + level) - length * m1dp->minImproba)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_1 = (_Bool)0;
            if(tmp_if_expr_1)
            {
              j = (unsigned int)0;
              for( ; !(j >= 26u); j = j + 1u)
                subSpace[(signed long int)j]=getMarkov1DynProgSpace(m1dp, mis, length + (unsigned int)1, level + mis->improbaMark1[(signed long int)prevChar1][(signed long int)j], j);
              if(!((0xffffffff00000000 & m1dp->buffer[(signed long int)prevChar1][(signed long int)((length + 4294967294u) * m1dp->bufferWidth + level + -(m1dp->minImproba * length))]) == 0ul))
              {
                am64e = (struct aliasMarkov64Element *)(bufferMain + (signed long int)bufferPointer);
                initAliasMarkov64Element(am64e, m1dp->buffer[(signed long int)prevChar1][(signed long int)(((length - (unsigned int)2) * m1dp->bufferWidth + level) - length * m1dp->minImproba)], subSpace);
                amdp->buffer[(signed long int)((((length - (unsigned int)2) * m1dp->bufferWidth + level) - length * m1dp->minImproba) * (unsigned int)26 + prevChar1)] = bufferPointer;
                bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
              }

              else
              {
                am32e = (struct aliasMarkov32Element *)(bufferMain + (signed long int)bufferPointer);
                initAliasMarkov32Element(am32e, m1dp->buffer[(signed long int)prevChar1][(signed long int)(((length - (unsigned int)2) * m1dp->bufferWidth + level) - length * m1dp->minImproba)], subSpace);
                amdp->buffer[(signed long int)((((length - (unsigned int)2) * m1dp->bufferWidth + level) - length * m1dp->minImproba) * (unsigned int)26 + prevChar1)] = bufferPointer;
                bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
              }
            }

            else
              amdp->buffer[(signed long int)((((length - (unsigned int)2) * m1dp->bufferWidth + level) - length * m1dp->minImproba) * (unsigned int)26 + prevChar1)] = (unsigned int)0xffffffff;
          }
        }

      }

  }
}

// fillAliasMarkov1BufferRoot
// file aliasMarkov.h line 76
void fillAliasMarkov1BufferRoot(struct markov1DynProg *m1dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferRoot)
{
  unsigned int length;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)1;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 13u); length = length + 1u)
  {
    if(!(m1dp->rootValue[(signed long int)(length + 4294967295u)] == 0ul))
      tmp_if_expr_1 = m1dp->rootValue[(signed long int)(length - (unsigned int)1)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      j = (unsigned int)0;
      for( ; !(j >= 26u); j = j + 1u)
        subSpace[(signed long int)j]=getMarkov1DynProgFirstLine(m1dp, mis, j, length);
      if(!((0xffffffff00000000 & m1dp->rootValue[(signed long int)(length + 4294967295u)]) == 0ul))
      {
        am64e = (struct aliasMarkov64Element *)(bufferRoot + (signed long int)bufferPointer);
        initAliasMarkov64Element(am64e, m1dp->rootValue[(signed long int)(length - (unsigned int)1)], subSpace);
        amdp->rootValue[(signed long int)(length - (unsigned int)1)] = bufferPointer;
        bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
      }

      else
      {
        am32e = (struct aliasMarkov32Element *)(bufferRoot + (signed long int)bufferPointer);
        initAliasMarkov32Element(am32e, m1dp->rootValue[(signed long int)(length - (unsigned int)1)], subSpace);
        amdp->rootValue[(signed long int)(length - (unsigned int)1)] = bufferPointer;
        bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }
    }

    else
      amdp->rootValue[(signed long int)(length - (unsigned int)1)] = (unsigned int)0xffffffff;
  }
}

// fillAliasMarkov2BufferFLine
// file aliasMarkov.h line 81
void fillAliasMarkov2BufferFLine(struct markov2DynProg *m2dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferFLine)
{
  unsigned int length;
  unsigned int c;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)2;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 13u); length = length + 1u)
  {
    c = (unsigned int)0;
    for( ; !(c >= 26u); c = c + 1u)
    {
      if(!(m2dp->firstLine[(signed long int)((length + 4294967294u) * 26u + c)] == 0ul))
        tmp_if_expr_1 = m2dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        j = (unsigned int)0;
        for( ; !(j >= 26u); j = j + 1u)
          subSpace[(signed long int)j]=getMarkov2DynProgSpace(m2dp, mis, (unsigned int)2 + ((unsigned int)12 - length), mis->improbaFirst[(signed long int)c] + mis->improbaMark1[(signed long int)c][(signed long int)j] + ((unsigned int)12 - length) * mis->meanImprobaMark0, j, c);
        if(!((0xffffffff00000000 & m2dp->firstLine[(signed long int)((length + 4294967294u) * 26u + c)]) == 0ul))
        {
          am64e = (struct aliasMarkov64Element *)(bufferFLine + (signed long int)bufferPointer);
          initAliasMarkov64Element(am64e, m2dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)], subSpace);
          amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = bufferPointer;
          bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
        }

        else
        {
          am32e = (struct aliasMarkov32Element *)(bufferFLine + (signed long int)bufferPointer);
          initAliasMarkov32Element(am32e, m2dp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)], subSpace);
          amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = bufferPointer;
          bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
        }
      }

      else
        amdp->firstLine[(signed long int)(c + (length - (unsigned int)2) * (unsigned int)26)] = (unsigned int)0xffffffff;
    }
  }
}

// fillAliasMarkov2BufferMain
// file aliasMarkov.h line 82
void fillAliasMarkov2BufferMain(struct markov2DynProg *m2dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferMain)
{
  unsigned int length;
  unsigned int level;
  unsigned int prevChar1;
  unsigned int prevChar2;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)2;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 12u); length = length + 1u)
  {
    level = (unsigned int)2 * m2dp->minImproba;
    for( ; !(level >= m2dp->threshold); level = level + 1u)
      if((length + 4294967284u) * m2dp->minImproba + m2dp->threshold >= level)
      {
        if(!(m2dp->minImproba * length + 4294967295u >= level))
        {
          prevChar1 = (unsigned int)0;
          for( ; !(prevChar1 >= 26u); prevChar1 = prevChar1 + 1u)
          {
            prevChar2 = (unsigned int)0;
            for( ; !(prevChar2 >= 26u); prevChar2 = prevChar2 + 1u)
            {
              if(!(m2dp->buffer[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)((length + 4294967294u) * m2dp->bufferWidth + level + -(m2dp->minImproba * length))] == 0ul))
                tmp_if_expr_1 = m2dp->buffer[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)(((length - (unsigned int)2) * m2dp->bufferWidth + level) - length * m2dp->minImproba)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_1 = (_Bool)0;
              if(tmp_if_expr_1)
              {
                j = (unsigned int)0;
                for( ; !(j >= 26u); j = j + 1u)
                  subSpace[(signed long int)j]=getMarkov2DynProgSpace(m2dp, mis, length + (unsigned int)1, level + mis->improbaMark2[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)j], j, prevChar1);
                if(!((0xffffffff00000000 & m2dp->buffer[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)((length + 4294967294u) * m2dp->bufferWidth + level + -(m2dp->minImproba * length))]) == 0ul))
                {
                  am64e = (struct aliasMarkov64Element *)(bufferMain + (signed long int)bufferPointer);
                  initAliasMarkov64Element(am64e, m2dp->buffer[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)(((length - (unsigned int)2) * m2dp->bufferWidth + level) - length * m2dp->minImproba)], subSpace);
                  amdp->buffer[(signed long int)(((((length - (unsigned int)2) * m2dp->bufferWidth + level) - length * m2dp->minImproba) * (unsigned int)26 + prevChar1) * (unsigned int)26 + prevChar2)] = bufferPointer;
                  bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
                }

                else
                {
                  am32e = (struct aliasMarkov32Element *)(bufferMain + (signed long int)bufferPointer);
                  initAliasMarkov32Element(am32e, m2dp->buffer[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)(((length - (unsigned int)2) * m2dp->bufferWidth + level) - length * m2dp->minImproba)], subSpace);
                  amdp->buffer[(signed long int)(((((length - (unsigned int)2) * m2dp->bufferWidth + level) - length * m2dp->minImproba) * (unsigned int)26 + prevChar1) * (unsigned int)26 + prevChar2)] = bufferPointer;
                  bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
                }
              }

              else
                amdp->buffer[(signed long int)(((((length - (unsigned int)2) * m2dp->bufferWidth + level) - length * m2dp->minImproba) * (unsigned int)26 + prevChar1) * (unsigned int)26 + prevChar2)] = (unsigned int)0xffffffff;
            }
          }
        }

      }

  }
}

// fillAliasMarkov2BufferRoot
// file aliasMarkov.h line 80
void fillAliasMarkov2BufferRoot(struct markov2DynProg *m2dp, struct AmarkovDynProg *amdp, struct markovImprobaStruct *mis, char *bufferRoot)
{
  unsigned int length;
  unsigned int j;
  unsigned int bufferPointer = (unsigned int)0;
  struct aliasMarkov32Element *am32e = (struct aliasMarkov32Element *)(void *)0;
  struct aliasMarkov64Element *am64e = (struct aliasMarkov64Element *)(void *)0;
  unsigned long int subSpace[26l];
  length = (unsigned int)1;
  _Bool tmp_if_expr_1;
  for( ; !(length >= 13u); length = length + 1u)
  {
    if(!(m2dp->rootValue[(signed long int)(length + 4294967295u)] == 0ul))
      tmp_if_expr_1 = m2dp->rootValue[(signed long int)(length - (unsigned int)1)] != (unsigned long int)0xffffffffffffffff ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      j = (unsigned int)0;
      for( ; !(j >= 26u); j = j + 1u)
        subSpace[(signed long int)j]=getMarkov2DynProgFirstLine(m2dp, mis, j, length);
      if(!((0xffffffff00000000 & m2dp->rootValue[(signed long int)(length + 4294967295u)]) == 0ul))
      {
        am64e = (struct aliasMarkov64Element *)(bufferRoot + (signed long int)bufferPointer);
        initAliasMarkov64Element(am64e, m2dp->rootValue[(signed long int)(length - (unsigned int)1)], subSpace);
        amdp->rootValue[(signed long int)(length - (unsigned int)1)] = bufferPointer;
        bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov64Element) /*248ul*/ ;
      }

      else
      {
        am32e = (struct aliasMarkov32Element *)(bufferRoot + (signed long int)bufferPointer);
        initAliasMarkov32Element(am32e, m2dp->rootValue[(signed long int)(length - (unsigned int)1)], subSpace);
        amdp->rootValue[(signed long int)(length - (unsigned int)1)] = bufferPointer;
        bufferPointer = bufferPointer + (unsigned int)sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }
    }

    else
      amdp->rootValue[(signed long int)(length - (unsigned int)1)] = (unsigned int)0xffffffff;
  }
}

// find_freeram
// file misc.c line 84
unsigned long int find_freeram(void)
{
  unsigned long int freeram = (unsigned long int)0;
  unsigned long int cacheram = (unsigned long int)0;
  struct _IO_FILE *file;
  file=fopen("/proc/meminfo", "r");
  char buff[512l];
  char *fst;
  char *lst;
  if(!(file == ((struct _IO_FILE *)NULL)))
  {
    fgets(buff, (signed int)sizeof(char [512l]) /*512ul*/ , file);
    fgets(buff, (signed int)sizeof(char [512l]) /*512ul*/ , file);
    char *return_value___builtin_strchr_1;
    return_value___builtin_strchr_1=__builtin_strchr(buff, 58);
    fst = return_value___builtin_strchr_1;
    char *return_value___builtin_strchr_2;
    return_value___builtin_strchr_2=__builtin_strchr(fst + (signed long int)1, 107);
    lst = return_value___builtin_strchr_2;
    *lst = (char)0;
    sscanf(fst + (signed long int)1, "%lu", &freeram);
    fgets(buff, (signed int)sizeof(char [512l]) /*512ul*/ , file);
    fgets(buff, (signed int)sizeof(char [512l]) /*512ul*/ , file);
    char *return_value___builtin_strchr_3;
    return_value___builtin_strchr_3=__builtin_strchr(buff, 58);
    fst = return_value___builtin_strchr_3;
    char *return_value___builtin_strchr_4;
    return_value___builtin_strchr_4=__builtin_strchr(fst + (signed long int)1, 107);
    lst = return_value___builtin_strchr_4;
    *lst = (char)0;
    sscanf(fst + (signed long int)1, "%lu", &cacheram);
    fclose(file);
    freeram = freeram << 10;
    cacheram = cacheram << 10;
  }

  else
  {
    struct sysinfo info;
    sysinfo(&info);
    freeram = (unsigned long int)info.freeram;
    cacheram = (unsigned long int)0;
  }
  double tmp_if_expr_7;
  double return_value_floor_6;
  if(!(cacheram + freeram >= 157286400ul))
    return (unsigned long int)0;

  else
  {
    unsigned long int ram;
    double return_value_floor_5;
    return_value_floor_5=floor(0.9 * (double)(freeram + cacheram));
    if(return_value_floor_5 < (double)(cacheram + freeram + 18446744073552265216ul))
    {
      return_value_floor_6=floor(0.9 * (double)(freeram + cacheram));
      tmp_if_expr_7 = return_value_floor_6;
    }

    else
      tmp_if_expr_7 = (double)((freeram + cacheram) - (unsigned long int)(150 * 1024 * 1024));
    ram = (unsigned long int)tmp_if_expr_7;
    return ram;
  }
}

// fprintf_hex
// file misc.c line 238
void fprintf_hex(struct _IO_FILE *file, char *str, signed int len)
{
  signed int i;
  fprintf(file, "0x");
  i = 0;
  for( ; !(i >= len); i = i + 1)
    fprintf(file, "%2x", str[(signed long int)i]);
}

// fromStringMarkovType
// file ioMarkov.c line 85
enum markovType fromStringMarkovType(const char *word, const signed int length)
{
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)word, (const void *)"NO_MARK", (unsigned long int)length);
  if(return_value_memcmp_1 == 0)
    return (enum markovType)NO_MARK;

  else
  {
    signed int return_value_memcmp_2;
    return_value_memcmp_2=memcmp((const void *)word, (const void *)"MARK0", (unsigned long int)length);
    if(return_value_memcmp_2 == 0)
      return (enum markovType)MARK0;

    else
    {
      signed int return_value_memcmp_3;
      return_value_memcmp_3=memcmp((const void *)word, (const void *)"MARK1", (unsigned long int)length);
      if(return_value_memcmp_3 == 0)
        return (enum markovType)MARK1;

      else
      {
        signed int return_value_memcmp_4;
        return_value_memcmp_4=memcmp((const void *)word, (const void *)"MARK2", (unsigned long int)length);
        if(return_value_memcmp_4 == 0)
          return (enum markovType)MARK2;

        else
          return (enum markovType)NO_MARK;
      }
    }
  }
}

// fsm_alloc
// file fsm.h line 74
struct fsm_t_ * fsm_alloc(struct ophcrack_t_ *crack)
{
  struct fsm_t_ *fsm_alloc__1__fsm;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct fsm_t_) /*88ul*/ );
  fsm_alloc__1__fsm = (struct fsm_t_ *)return_value_malloc_1;
  fsm_alloc__1__fsm->oldstate = (enum anonymous_1)st_wait;
  fsm_alloc__1__fsm->state = (enum anonymous_1)st_wait;
  fsm_alloc__1__fsm->crack = crack;
  fsm_alloc__1__fsm->arg = crack->arg;
  fsm_alloc__1__fsm->preload = 1;
  fsm_alloc__1__fsm->bforce = fsm_alloc__1__fsm->arg->bforce;
  fsm_alloc__1__fsm->pwait = 0;
  fsm_alloc__1__fsm->ssave = 0;
  fsm_alloc__1__fsm->pending_msg=list_alloc();
  fsm_alloc__1__fsm->htoremove=list_alloc();
  fsm_reset_preload(fsm_alloc__1__fsm);
  fsm_reset_bforce(fsm_alloc__1__fsm);
  return fsm_alloc__1__fsm;
}

// fsm_handle_pause1
// file fsm.c line 224
struct message_t_ * fsm_handle_pause1(struct fsm_t_ *fsm, struct message_t_ *msg)
{
  struct list_t_ *pending_msg = fsm->pending_msg;
  if((signed int)msg->kind == msg_pause)
    fsm->pwait = fsm->pwait - 1;

  else
    list_add_tail(pending_msg, (void *)msg);
  return ((struct message_t_ *)NULL);
}

// fsm_handle_pause2
// file fsm.c line 248
struct message_t_ * fsm_handle_pause2(struct fsm_t_ *fsm, struct message_t_ *msg)
{
  struct ophcrack_t_ *crack = fsm->crack;
  struct scheduler_t_ *sched = crack->sched;
  struct list_t_ *pending_msg = fsm->pending_msg;
  if(!(msg == ((struct message_t_ *)NULL)))
  {
    if((signed int)msg->kind == msg_pause)
      fsm->pwait = fsm->pwait - 1;

    else
    {
      list_add_tail(pending_msg, (void *)msg);
      msg = ((struct message_t_ *)NULL);
    }
  }

  signed int tmp_if_expr_1;
  if(fsm->pwait == 0)
  {
    fsm_reset(fsm);
    if(!(fsm->bforce == 0))
    {
      if(fsm->preload == 0)
        fsm_launch_bforce(fsm);

    }

    scheduler_continue(sched);
    message_insert_first(fsm->pending_msg);
    if(!(fsm->preload == 0))
      tmp_if_expr_1 = st_start;

    else
      tmp_if_expr_1 = (signed int)fsm->oldstate;
    fsm->state = (enum anonymous_1)tmp_if_expr_1;
    if((signed int)fsm->state == st_start)
      fsm_handle_start(fsm);

  }

  return msg;
}

// fsm_handle_preload
// file fsm.c line 174
struct message_t_ * fsm_handle_preload(struct fsm_t_ *fsm, struct message_t_ *msg)
{
  struct ophcrack_t_ *crack = fsm->crack;
  struct scheduler_t_ *sched = crack->sched;
  signed int return_value_ophcrack_next_1;
  if((signed int)msg->kind == msg_done)
  {
    struct msg_done_t_ *done = (struct msg_done_t_ *)msg->data;
    signed int nthreads = sched->nthreads;
    signed int n;
    if((signed int)done->kind == preload_all)
    {
      fsm->psize_curr = (unsigned long int)1;
      fsm->psize_total = (unsigned long int)1;
      n = 0;
      for( ; !(n >= (nthreads + -1 >= 1 ? nthreads + -1 : 1)); n = n + 1)
      {
        return_value_ophcrack_next_1=ophcrack_next(crack);
        if(return_value_ophcrack_next_1 == 0)
          break;

      }
      if(n == 0)
      {
        struct ophtask_t_ *task;
        task=ophtask_alloc((enum anonymous_12)find);
        scheduler_add(sched, (void *)task, (enum anonymous_8)low);
      }

      fsm->state = (enum anonymous_1)st_work1;
    }

  }

  return msg;
}

// fsm_handle_start
// file fsm.h line 78
void fsm_handle_start(struct fsm_t_ *fsm)
{
  _Bool tmp_if_expr_2;
  if(!(fsm->bforce == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = fsm->arg->bforce == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    struct list_t_ *htoremove = fsm->htoremove;
    while(htoremove->size >= 1)
    {
      struct hash_t_ *hsh;
      void *return_value_list_rem_head_1;
      return_value_list_rem_head_1=list_rem_head(htoremove);
      hsh = (struct hash_t_ *)return_value_list_rem_head_1;
      hash_free(hsh);
    }
  }

  fsm_launch_preload(fsm);
  if(!(fsm->bforce == 0))
    fsm_launch_bforce(fsm);

  fsm->state = (enum anonymous_1)st_preload;
}

// fsm_handle_work1
// file fsm.c line 308
struct message_t_ * fsm_handle_work1(struct fsm_t_ *fsm, struct message_t_ *msg)
{
  if(!((signed int)msg->kind == msg_done))
    return msg;

  else
  {
    struct msg_done_t_ *done = (struct msg_done_t_ *)msg->data;
    if((signed int)done->kind == find)
      fsm->state = (enum anonymous_1)st_work2;

    return msg;
  }
}

// fsm_handle_work2
// file fsm.c line 319
struct message_t_ * fsm_handle_work2(struct fsm_t_ *fsm, struct message_t_ *msg)
{
  struct ophcrack_t_ *crack = fsm->crack;
  struct scheduler_t_ *sched = crack->sched;
  struct arg_t_ *arg = fsm->arg;
  if(!((signed int)msg->kind == msg_done))
    return msg;

  else
  {
    struct msg_done_t_ *done = (struct msg_done_t_ *)msg->data;
    if((signed int)done->kind == all)
    {
      signed int npwds_total = crack->npwds_total;
      signed int npwds_found = crack->npwds_found;
      if(crack->remaining->size >= 1 && !(npwds_found >= npwds_total))
      {
        struct ophtask_t_ *task;
        task=ophtask_alloc((enum anonymous_12)preload_all);
        scheduler_add(sched, (void *)task, (enum anonymous_8)disk);
        fsm->state = (enum anonymous_1)st_preload;
      }

      else
      {
        if(!(arg->bforce == 0))
        {
          fsm->bforce_curr = (unsigned long int)1;
          fsm->bforce_total = (unsigned long int)1;
        }

        fsm->state = (enum anonymous_1)st_wait;
      }
    }

    return msg;
  }
}

// fsm_launch_bforce
// file fsm.c line 404
void fsm_launch_bforce(struct fsm_t_ *fsm)
{
  struct ophcrack_t_ *crack = fsm->crack;
  struct scheduler_t_ *sched = crack->sched;
  struct ophtask_t_ *task;
  task=ophtask_alloc((enum anonymous_12)bforce_all);
  struct ophbforce_t_ *force = (struct ophbforce_t_ *)task->data;
  struct list_t_ *hashes = crack->hashes;
  struct list_nd_t_ *nd;
  signed int nhashes = hashes->size;
  signed int n;
  force->nhashes = nhashes;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)nhashes * sizeof(struct hash_t_ *) /*8ul*/ );
  force->hashes = (struct hash_t_ **)return_value_malloc_1;
  nd = hashes->head;
  n = 0;
  for( ; !(nd == ((struct list_nd_t_ *)NULL)); n = n + 1)
  {
    force->hashes[(signed long int)n] = (struct hash_t_ *)nd->data;
    nd = nd->next;
  }
  scheduler_add(sched, (void *)task, (enum anonymous_8)low);
  fsm->bforce = 0;
}

// fsm_launch_preload
// file fsm.c line 387
void fsm_launch_preload(struct fsm_t_ *fsm)
{
  struct ophcrack_t_ *crack = fsm->crack;
  struct scheduler_t_ *sched = crack->sched;
  struct ophtask_t_ *task;
  task=ophtask_alloc((enum anonymous_12)preload_all);
  struct ophload_t_ *load = (struct ophload_t_ *)task->data;
  struct list_t_ *enabled = crack->enabled;
  struct list_nd_t_ *tnd = ((struct list_nd_t_ *)NULL);
  tnd = enabled->head;
  for( ; !(tnd == ((struct list_nd_t_ *)NULL)); tnd = tnd->next)
    list_add_tail(load->tables, tnd->data);
  scheduler_add(sched, (void *)task, (enum anonymous_8)disk);
  fsm->preload = 0;
}

// fsm_next
// file fsm.h line 76
struct message_t_ * fsm_next(struct fsm_t_ *fsm, struct message_t_ *msg)
{
  struct ophcrack_t_ *crack = fsm->crack;
  struct scheduler_t_ *sched = crack->sched;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  if((signed int)msg->kind == msg_preload)
  {
    struct msg_load_t_ *load = (struct msg_load_t_ *)msg->data;
    struct table_t_ *tbl = load->tbl;
    if(tbl == ((struct table_t_ *)NULL))
      tmp_if_expr_1 = !(load->done != 0) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      fsm->psize_curr = (unsigned long int)0;
      fsm->psize_total = load->size;
    }

    else
      if(!(tbl == ((struct table_t_ *)NULL)))
      {
        if(!(load->done == 0))
          fsm->psize_curr = fsm->psize_curr + load->size;

      }

  }

  else
    if((signed int)msg->kind == msg_bforce)
    {
      struct msg_bforce_t_ *force = (struct msg_bforce_t_ *)msg->data;
      if(force->done == 0)
      {
        fsm->bforce_curr = (unsigned long int)0;
        fsm->bforce_total = force->count;
      }

      else
        fsm->bforce_curr = fsm->bforce_curr + force->count;
    }

    else
    {
      if((signed int)msg->kind == msg_done)
        tmp_if_expr_2 = (signed int)((struct msg_done_t_ *)msg->data)->kind == check ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        if(!((signed int)fsm->state == st_pause1))
        {
          if(!((signed int)fsm->state == st_pause2))
          {
            scheduler_pause(sched);
            fsm->pwait = sched->nthreads;
            fsm->state = (enum anonymous_1)st_pause2;
          }

        }

        fsm_reset_preload(fsm);
        fsm->oldstate = (enum anonymous_1)st_start;
      }

      else
        switch((signed int)fsm->state)
        {
          case st_wait:
            break;
          case st_start:
            break;
          case st_pause1:
          {
            msg=fsm_handle_pause1(fsm, msg);
            break;
          }
          case st_pause2:
          {
            msg=fsm_handle_pause2(fsm, msg);
            break;
          }
          case st_preload:
          {
            msg=fsm_handle_preload(fsm, msg);
            break;
          }
          case st_work1:
          {
            msg=fsm_handle_work1(fsm, msg);
            break;
          }
          case st_work2:
            msg=fsm_handle_work2(fsm, msg);
        }
    }
  return msg;
}

// fsm_pause
// file fsm.c line 364
void fsm_pause(struct fsm_t_ *fsm)
{
  struct ophcrack_t_ *crack = fsm->crack;
  struct scheduler_t_ *sched = crack->sched;
  scheduler_pause(sched);
  fsm->pwait = sched->nthreads;
  fsm->oldstate = fsm->state;
  fsm->state = (enum anonymous_1)st_pause1;
}

// fsm_reset
// file fsm.c line 427
void fsm_reset(struct fsm_t_ *fsm)
{
  struct ophcrack_t_ *crack = fsm->crack;
  struct arg_t_ *arg = crack->arg;
  static const signed int bforce_mask = bforce_all + bforce_nt + bforce_lm;
  if(!(arg->ssave == 0))
  {
    if(!(fsm->ssave == 0))
    {
      struct _IO_FILE *file;
      file=fopen(arg->sfname, "w");
      if(!(file == ((struct _IO_FILE *)NULL)))
      {
        ophcrack_reset(crack, all - bforce_mask, 0);
        ophcrack_save(crack, file, 0, 1);
        fclose(file);
      }

      fsm->ssave = 0;
    }

  }

  if(!(fsm->preload == 0))
    ophcrack_reset(crack, all - bforce_mask, 1);

  _Bool tmp_if_expr_1;
  if(!(fsm->bforce == 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = arg->bforce == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    ophcrack_reset(crack, bforce_mask, 1);

}

// fsm_reset_bforce
// file fsm.c line 381
void fsm_reset_bforce(struct fsm_t_ *fsm)
{
  fsm->bforce = fsm->arg->bforce;
  fsm->bforce_curr = (unsigned long int)1;
  fsm->bforce_total = (unsigned long int)0;
}

// fsm_reset_preload
// file fsm.c line 375
void fsm_reset_preload(struct fsm_t_ *fsm)
{
  fsm->preload = 1;
  fsm->psize_curr = (unsigned long int)1;
  fsm->psize_total = (unsigned long int)0;
}

// fsm_ssave
// file fsm.h line 91
void fsm_ssave(struct fsm_t_ *fsm)
{
  fsm_pause(fsm);
  fsm->ssave = 1;
  fsm->state = (enum anonymous_1)st_pause2;
}

// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat(signed int __fd, struct stat *__statbuf)
{
  signed int return_value___fxstat_1;
  return_value___fxstat_1=__fxstat(1, __fd, __statbuf);
  return return_value___fxstat_1;
}

// fstat_link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat_link1(signed int __fd_link1, struct stat *__statbuf_link1)
{
  signed int return_value___fxstat_1_link1;
  return_value___fxstat_1_link1=__fxstat(1, __fd_link1, __statbuf_link1);
  return return_value___fxstat_1_link1;
}

// fstat_link2
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat_link2(signed int __fd_link2, struct stat *__statbuf_link2)
{
  signed int return_value___fxstat_1_link2;
  return_value___fxstat_1_link2=__fxstat(1, __fd_link2, __statbuf_link2);
  return return_value___fxstat_1_link2;
}

// getMark0BufferSizeFLine
// file aliasMarkov.h line 61
unsigned long int getMark0BufferSizeFLine(struct markov0DynProg *m0dp)
{
  unsigned int i;
  unsigned long int result = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 286u); i = i + 1u)
    if(!(m0dp->firstLine[(signed long int)i] == 0ul))
    {
      if(!(m0dp->firstLine[(signed long int)i] == 0xffffffffffffffff))
      {
        if(!((0xffffffff00000000 & m0dp->firstLine[(signed long int)i]) == 0ul))
          result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

        else
          result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }

    }

  return result;
}

// getMark0BufferSizeMain
// file aliasMarkov.h line 62
unsigned long int getMark0BufferSizeMain(struct markov0DynProg *m0dp)
{
  unsigned int i;
  unsigned long int result = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 10u * m0dp->bufferWidth); i = i + 1u)
    if(!(m0dp->buffer[(signed long int)i] == 0ul))
    {
      if(!(m0dp->buffer[(signed long int)i] == 0xffffffffffffffff))
      {
        if(!((0xffffffff00000000 & m0dp->buffer[(signed long int)i]) == 0ul))
          result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

        else
          result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }

    }

  return result;
}

// getMark0BufferSizeRoot
// file aliasMarkov.h line 60
unsigned long int getMark0BufferSizeRoot(struct markov0DynProg *m0dp)
{
  unsigned int i;
  unsigned long int result = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 12u); i = i + 1u)
    if(!(m0dp->rootValue[(signed long int)i] == 0ul))
    {
      if(!(m0dp->rootValue[(signed long int)i] == 0xffffffffffffffff))
      {
        if(!((0xffffffff00000000 & m0dp->rootValue[(signed long int)i]) == 0ul))
          result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

        else
          result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }

    }

  return result;
}

// getMark1BufferSizeFLine
// file aliasMarkov.h line 65
unsigned long int getMark1BufferSizeFLine(struct markov1DynProg *m1dp)
{
  unsigned int i;
  unsigned long int result = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 286u); i = i + 1u)
    if(!(m1dp->firstLine[(signed long int)i] == 0ul))
    {
      if(!(m1dp->firstLine[(signed long int)i] == 0xffffffffffffffff))
      {
        if(!((0xffffffff00000000 & m1dp->firstLine[(signed long int)i]) == 0ul))
          result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

        else
          result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }

    }

  return result;
}

// getMark1BufferSizeMain
// file aliasMarkov.h line 66
unsigned long int getMark1BufferSizeMain(struct markov1DynProg *m1dp)
{
  unsigned int i;
  unsigned int c;
  unsigned long int result = (unsigned long int)0;
  c = (unsigned int)0;
  for( ; !(c >= 26u); c = c + 1u)
  {
    i = (unsigned int)0;
    for( ; !(i >= 10u * m1dp->bufferWidth); i = i + 1u)
      if(!(m1dp->buffer[(signed long int)c][(signed long int)i] == 0ul))
      {
        if(!(m1dp->buffer[(signed long int)c][(signed long int)i] == 0xffffffffffffffff))
        {
          if(!((0xffffffff00000000 & m1dp->buffer[(signed long int)c][(signed long int)i]) == 0ul))
            result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

          else
            result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
        }

      }

  }
  return result;
}

// getMark1BufferSizeRoot
// file aliasMarkov.h line 64
unsigned long int getMark1BufferSizeRoot(struct markov1DynProg *m1dp)
{
  unsigned int i;
  unsigned long int result = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 12u); i = i + 1u)
    if(!(m1dp->rootValue[(signed long int)i] == 0ul))
    {
      if(!(m1dp->rootValue[(signed long int)i] == 0xffffffffffffffff))
      {
        if(!((0xffffffff00000000 & m1dp->rootValue[(signed long int)i]) == 0ul))
          result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

        else
          result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }

    }

  return result;
}

// getMark2BufferSizeFLine
// file aliasMarkov.h line 69
unsigned long int getMark2BufferSizeFLine(struct markov2DynProg *m2dp)
{
  unsigned int i;
  unsigned long int result = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 286u); i = i + 1u)
    if(!(m2dp->firstLine[(signed long int)i] == 0ul))
    {
      if(!(m2dp->firstLine[(signed long int)i] == 0xffffffffffffffff))
      {
        if(!((0xffffffff00000000 & m2dp->firstLine[(signed long int)i]) == 0ul))
          result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

        else
          result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }

    }

  return result;
}

// getMark2BufferSizeMain
// file aliasMarkov.h line 70
unsigned long int getMark2BufferSizeMain(struct markov2DynProg *m2dp)
{
  unsigned int i;
  unsigned int c1;
  unsigned int c2;
  unsigned long int result = (unsigned long int)0;
  c2 = (unsigned int)0;
  for( ; !(c2 >= 26u); c2 = c2 + 1u)
  {
    c1 = (unsigned int)0;
    for( ; !(c1 >= 26u); c1 = c1 + 1u)
    {
      i = (unsigned int)0;
      for( ; !(i >= 10u * m2dp->bufferWidth); i = i + 1u)
        if(!(m2dp->buffer[(signed long int)c2][(signed long int)c1][(signed long int)i] == 0ul))
        {
          if(!(m2dp->buffer[(signed long int)c2][(signed long int)c1][(signed long int)i] == 0xffffffffffffffff))
          {
            if(!((0xffffffff00000000 & m2dp->buffer[(signed long int)c2][(signed long int)c1][(signed long int)i]) == 0ul))
              result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

            else
              result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
          }

        }

    }
  }
  return result;
}

// getMark2BufferSizeRoot
// file aliasMarkov.h line 68
unsigned long int getMark2BufferSizeRoot(struct markov2DynProg *m2dp)
{
  unsigned int i;
  unsigned long int result = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 12u); i = i + 1u)
    if(!(m2dp->rootValue[(signed long int)i] == 0ul))
    {
      if(!(m2dp->rootValue[(signed long int)i] == 0xffffffffffffffff))
      {
        if(!((0xffffffff00000000 & m2dp->rootValue[(signed long int)i]) == 0ul))
          result = result + sizeof(struct aliasMarkov64Element) /*248ul*/ ;

        else
          result = result + sizeof(struct aliasMarkov32Element) /*144ul*/ ;
      }

    }

  return result;
}

// getMarkov0DynProgFirstLine
// file markov.c line 140
unsigned long int getMarkov0DynProgFirstLine(struct markov0DynProg *m0dp, struct markovImprobaStruct *mis, unsigned int index, unsigned int requiredLength)
{
  unsigned long int return_value_getMarkov0DynProgSpace_1;
  if(requiredLength == 1u)
  {
    if(!(mis->meanImprobaMark0 >= mis->improbaFirst[(signed long int)index]))
      return (unsigned long int)0;

    return (unsigned long int)1;
  }

  else
    if(m0dp->firstLine[(signed long int)((requiredLength + 4294967294u) * 26u + index)] == 0xffffffffffffffff)
    {
      unsigned int i;
      unsigned long int result = (unsigned long int)0;
      i = (unsigned int)0;
      for( ; !(i >= 26u); i = i + 1u)
      {
        return_value_getMarkov0DynProgSpace_1=getMarkov0DynProgSpace(m0dp, mis, (unsigned int)2 + ((unsigned int)12 - requiredLength), mis->improbaFirst[(signed long int)index] + mis->improbaMark0[(signed long int)i] + ((unsigned int)12 - requiredLength) * mis->meanImprobaMark0);
        result = result + return_value_getMarkov0DynProgSpace_1;
      }
      m0dp->firstLine[(signed long int)(index + (requiredLength - (unsigned int)2) * (unsigned int)26)] = result;
      return result;
    }

    else
      return m0dp->firstLine[(signed long int)(index + (requiredLength - (unsigned int)2) * (unsigned int)26)];
}

// getMarkov0DynProgRootValue
// file markov.c line 121
unsigned long int getMarkov0DynProgRootValue(struct markov0DynProg *m0dp, struct markovImprobaStruct *mis, unsigned int requiredLength)
{
  unsigned long int return_value_getMarkov0DynProgFirstLine_1;
  if(requiredLength == 0u || requiredLength >= 13u)
    return (unsigned long int)0;

  else
    if(m0dp->rootValue[(signed long int)(requiredLength + 4294967295u)] == 0xffffffffffffffff)
    {
      unsigned int i;
      unsigned long int result = (unsigned long int)0;
      i = (unsigned int)0;
      for( ; !(i >= 26u); i = i + 1u)
      {
        return_value_getMarkov0DynProgFirstLine_1=getMarkov0DynProgFirstLine(m0dp, mis, i, requiredLength);
        result = result + return_value_getMarkov0DynProgFirstLine_1;
      }
      m0dp->rootValue[(signed long int)(requiredLength - (unsigned int)1)] = result;
      return result;
    }

    else
      return m0dp->rootValue[(signed long int)(requiredLength - (unsigned int)1)];
}

// getMarkov0DynProgSpace
// file markov.c line 162
unsigned long int getMarkov0DynProgSpace(struct markov0DynProg *m0dp, struct markovImprobaStruct *mis, unsigned int length, unsigned int level)
{
  unsigned long int return_value_getMarkov0DynProgSpace_1;
  if(!(m0dp->threshold >= level))
    return (unsigned long int)0;

  else
    if(length == 12u)
      return (unsigned long int)1;

    else
      if(!((length + 4294967284u) * m0dp->minImproba + m0dp->threshold >= level))
        return (unsigned long int)0;

      else
      {
        if(m0dp->buffer[(signed long int)((length + 4294967294u) * m0dp->bufferWidth + level + -(m0dp->minImproba * length))] == 0xffffffffffffffff)
        {
          unsigned int i;
          unsigned long int result = (unsigned long int)0;
          i = (unsigned int)0;
          for( ; !(i >= 26u); i = i + 1u)
          {
            return_value_getMarkov0DynProgSpace_1=getMarkov0DynProgSpace(m0dp, mis, length + (unsigned int)1, level + mis->improbaMark0[(signed long int)i]);
            result = result + return_value_getMarkov0DynProgSpace_1;
          }
          m0dp->buffer[(signed long int)(((length - (unsigned int)2) * m0dp->bufferWidth + level) - length * m0dp->minImproba)] = result;
          return result;
        }

        else
          return m0dp->buffer[(signed long int)(((length - (unsigned int)2) * m0dp->bufferWidth + level) - length * m0dp->minImproba)];
        return (unsigned long int)0;
      }
}

// getMarkov1DynProgFirstLine
// file markov.c line 289
unsigned long int getMarkov1DynProgFirstLine(struct markov1DynProg *m1dp, struct markovImprobaStruct *mis, unsigned int index, unsigned int requiredLength)
{
  unsigned long int return_value_getMarkov1DynProgSpace_1;
  if(requiredLength == 1u)
  {
    if(!(m1dp->threshold >= 11u * mis->meanImprobaMark0 + mis->improbaFirst[(signed long int)index]))
      return (unsigned long int)0;

    return (unsigned long int)1;
  }

  else
    if(m1dp->firstLine[(signed long int)((requiredLength + 4294967294u) * 26u + index)] == 0xffffffffffffffff)
    {
      unsigned int i;
      unsigned long int result = (unsigned long int)0;
      i = (unsigned int)0;
      for( ; !(i >= 26u); i = i + 1u)
      {
        return_value_getMarkov1DynProgSpace_1=getMarkov1DynProgSpace(m1dp, mis, (unsigned int)2 + ((unsigned int)12 - requiredLength), mis->improbaFirst[(signed long int)index] + mis->improbaMark1[(signed long int)index][(signed long int)i] + ((unsigned int)12 - requiredLength) * mis->meanImprobaMark0, i);
        result = result + return_value_getMarkov1DynProgSpace_1;
      }
      m1dp->firstLine[(signed long int)(index + (requiredLength - (unsigned int)2) * (unsigned int)26)] = result;
      return result;
    }

    else
      return m1dp->firstLine[(signed long int)(index + (requiredLength - (unsigned int)2) * (unsigned int)26)];
}

// getMarkov1DynProgRootValue
// file markov.c line 271
unsigned long int getMarkov1DynProgRootValue(struct markov1DynProg *m1dp, struct markovImprobaStruct *mis, unsigned int requiredLength)
{
  unsigned long int return_value_getMarkov1DynProgFirstLine_1;
  if(requiredLength == 0u || requiredLength >= 13u)
    return (unsigned long int)0;

  else
    if(m1dp->rootValue[(signed long int)(requiredLength + 4294967295u)] == 0xffffffffffffffff)
    {
      unsigned int i;
      unsigned long int result = (unsigned long int)0;
      i = (unsigned int)0;
      for( ; !(i >= 26u); i = i + 1u)
      {
        return_value_getMarkov1DynProgFirstLine_1=getMarkov1DynProgFirstLine(m1dp, mis, i, requiredLength);
        result = result + return_value_getMarkov1DynProgFirstLine_1;
      }
      m1dp->rootValue[(signed long int)(requiredLength - (unsigned int)1)] = result;
      return result;
    }

    else
      return m1dp->rootValue[(signed long int)(requiredLength - (unsigned int)1)];
}

// getMarkov1DynProgSpace
// file markov.c line 310
unsigned long int getMarkov1DynProgSpace(struct markov1DynProg *m1dp, struct markovImprobaStruct *mis, unsigned int length, unsigned int level, unsigned int prevChar)
{
  unsigned long int return_value_getMarkov1DynProgSpace_1;
  if(!(m1dp->threshold >= level))
    return (unsigned long int)0;

  else
    if(length == 12u)
      return (unsigned long int)1;

    else
      if(!((length + 4294967284u) * m1dp->minImproba + m1dp->threshold >= level))
        return (unsigned long int)0;

      else
      {
        if(m1dp->buffer[(signed long int)prevChar][(signed long int)((length + 4294967294u) * m1dp->bufferWidth + level + -(m1dp->minImproba * length))] == 0xffffffffffffffff)
        {
          unsigned int i;
          unsigned long int result = (unsigned long int)0;
          i = (unsigned int)0;
          for( ; !(i >= 26u); i = i + 1u)
          {
            return_value_getMarkov1DynProgSpace_1=getMarkov1DynProgSpace(m1dp, mis, length + (unsigned int)1, level + mis->improbaMark1[(signed long int)prevChar][(signed long int)i], i);
            result = result + return_value_getMarkov1DynProgSpace_1;
          }
          m1dp->buffer[(signed long int)prevChar][(signed long int)(((length - (unsigned int)2) * m1dp->bufferWidth + level) - length * m1dp->minImproba)] = result;
          return result;
        }

        else
          return m1dp->buffer[(signed long int)prevChar][(signed long int)(((length - (unsigned int)2) * m1dp->bufferWidth + level) - length * m1dp->minImproba)];
        return (unsigned long int)0;
      }
}

// getMarkov2DynProgFirstLine
// file markov.c line 442
unsigned long int getMarkov2DynProgFirstLine(struct markov2DynProg *m2dp, struct markovImprobaStruct *mis, unsigned int index, unsigned int requiredLength)
{
  unsigned long int return_value_getMarkov2DynProgSpace_1;
  if(requiredLength == 1u)
  {
    if(!(m2dp->threshold >= 11u * mis->meanImprobaMark0 + mis->improbaFirst[(signed long int)index]))
      return (unsigned long int)0;

    return (unsigned long int)1;
  }

  else
    if(m2dp->firstLine[(signed long int)((requiredLength + 4294967294u) * 26u + index)] == 0xffffffffffffffff)
    {
      unsigned int i;
      unsigned long int result = (unsigned long int)0;
      i = (unsigned int)0;
      for( ; !(i >= 26u); i = i + 1u)
      {
        return_value_getMarkov2DynProgSpace_1=getMarkov2DynProgSpace(m2dp, mis, (unsigned int)2 + ((unsigned int)12 - requiredLength), mis->improbaFirst[(signed long int)index] + mis->improbaMark1[(signed long int)index][(signed long int)i] + ((unsigned int)12 - requiredLength) * mis->meanImprobaMark0, i, index);
        result = result + return_value_getMarkov2DynProgSpace_1;
      }
      m2dp->firstLine[(signed long int)(index + (requiredLength - (unsigned int)2) * (unsigned int)26)] = result;
      return result;
    }

    else
      return m2dp->firstLine[(signed long int)(index + (requiredLength - (unsigned int)2) * (unsigned int)26)];
}

// getMarkov2DynProgRootValue
// file markov.c line 424
unsigned long int getMarkov2DynProgRootValue(struct markov2DynProg *m2dp, struct markovImprobaStruct *mis, unsigned int requiredLength)
{
  unsigned long int return_value_getMarkov2DynProgFirstLine_1;
  if(requiredLength == 0u || requiredLength >= 13u)
    return (unsigned long int)0;

  else
    if(m2dp->rootValue[(signed long int)(requiredLength + 4294967295u)] == 0xffffffffffffffff)
    {
      unsigned int i;
      unsigned long int result = (unsigned long int)0;
      i = (unsigned int)0;
      for( ; !(i >= 26u); i = i + 1u)
      {
        return_value_getMarkov2DynProgFirstLine_1=getMarkov2DynProgFirstLine(m2dp, mis, i, requiredLength);
        result = result + return_value_getMarkov2DynProgFirstLine_1;
      }
      m2dp->rootValue[(signed long int)(requiredLength - (unsigned int)1)] = result;
      return result;
    }

    else
      return m2dp->rootValue[(signed long int)(requiredLength - (unsigned int)1)];
}

// getMarkov2DynProgSpace
// file markov.c line 463
unsigned long int getMarkov2DynProgSpace(struct markov2DynProg *m2dp, struct markovImprobaStruct *mis, unsigned int length, unsigned int level, unsigned int prevChar1, unsigned int prevChar2)
{
  unsigned long int return_value_getMarkov2DynProgSpace_1;
  if(!(m2dp->threshold >= level))
    return (unsigned long int)0;

  else
    if(length == 12u)
      return (unsigned long int)1;

    else
      if(!((length + 4294967284u) * m2dp->minImproba + m2dp->threshold >= level))
        return (unsigned long int)0;

      else
      {
        if(m2dp->buffer[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)((length + 4294967294u) * m2dp->bufferWidth + level + -(m2dp->minImproba * length))] == 0xffffffffffffffff)
        {
          unsigned int i;
          unsigned long int result = (unsigned long int)0;
          i = (unsigned int)0;
          for( ; !(i >= 26u); i = i + 1u)
          {
            return_value_getMarkov2DynProgSpace_1=getMarkov2DynProgSpace(m2dp, mis, length + (unsigned int)1, level + mis->improbaMark2[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)i], i, prevChar1);
            result = result + return_value_getMarkov2DynProgSpace_1;
          }
          m2dp->buffer[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)(((length - (unsigned int)2) * m2dp->bufferWidth + level) - length * m2dp->minImproba)] = result;
          return result;
        }

        else
          return m2dp->buffer[(signed long int)prevChar2][(signed long int)prevChar1][(signed long int)(((length - (unsigned int)2) * m2dp->bufferWidth + level) - length * m2dp->minImproba)];
        return (unsigned long int)1;
      }
}

// getMarkovDynProgRootValue
// file markov.c line 539
unsigned long int getMarkovDynProgRootValue(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned int requiredLength)
{
  double return_value_pow_1;
  unsigned long int return_value_getMarkov0DynProgRootValue_2;
  unsigned long int return_value_getMarkov1DynProgRootValue_3;
  unsigned long int return_value_getMarkov2DynProgRootValue_4;
  switch((signed int)mdpw->type)
  {
    case NO_MARK:
    {
      return_value_pow_1=pow((double)26, (double)requiredLength);
      return (unsigned long int)return_value_pow_1;
    }
    case MARK0:
    {
      return_value_getMarkov0DynProgRootValue_2=getMarkov0DynProgRootValue(mdpw->m0dp, mis, requiredLength);
      return return_value_getMarkov0DynProgRootValue_2;
    }
    case MARK1:
    {
      return_value_getMarkov1DynProgRootValue_3=getMarkov1DynProgRootValue(mdpw->m1dp, mis, requiredLength);
      return return_value_getMarkov1DynProgRootValue_3;
    }
    case MARK2:
    {
      return_value_getMarkov2DynProgRootValue_4=getMarkov2DynProgRootValue(mdpw->m2dp, mis, requiredLength);
      return return_value_getMarkov2DynProgRootValue_4;
    }
    default:
      return (unsigned long int)0;
  }
}

// getMaxPatternLength
// file pattern.c line 136
unsigned int getMaxPatternLength(struct patternArray *array)
{
  unsigned int i;
  unsigned int maxLength = (unsigned int)0;
  unsigned int currentLength;
  unsigned int c;
  i = (unsigned int)0;
  for( ; !(i >= array->size); i = i + 1u)
  {
    currentLength = (unsigned int)0;
    c = (unsigned int)0;
    for( ; !(c >= 16u); c = c + 1u)
      if(!((15ul & array->patternDescriptor[(signed long int)i] >> 4u * c) == 0ul))
        currentLength = currentLength + 1u;

    if(!(maxLength >= currentLength))
      maxLength = currentLength;

  }
  return maxLength;
}

// getPatternFirstRound
// file hashToPwd.c line 46
unsigned long int getPatternFirstRound(struct patternArray *array, unsigned long int index, unsigned int *patIndex)
{
  unsigned int i = (unsigned int)0;
  unsigned long int cumul = (unsigned long int)0;
  unsigned char found = (unsigned char)0;
  while((signed int)found == 0)
  {
    if(i >= array->size)
      break;

    if(!(index >= array->sizeArray[(signed long int)i] + cumul))
    {
      found = (unsigned char)1;
      *patIndex = i;
    }

    else
    {
      cumul = cumul + array->sizeArray[(signed long int)i];
      i = i + 1u;
    }
  }
  return cumul;
}

// getPatternStructSpace
// file pattern.c line 57
unsigned long int getPatternStructSpace(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned long int descriptor, unsigned long int length)
{
  unsigned long int result = (unsigned long int)1;
  unsigned int i = (unsigned int)0;
  unsigned int l;
  i = (unsigned int)0;
  unsigned long int return_value_getMarkovDynProgRootValue_1;
  unsigned long int return_value_getMarkovDynProgRootValue_2;
  for( ; !(i >= 16u); i = i + 1u)
    switch((signed int)(char)(descriptor >> i * (unsigned int)4) & 0x0f)
    {
      case 0x02:
      {
        result = result * (unsigned long int)10;
        break;
      }
      case 0x01:
      {
        result = result * (unsigned long int)33;
        break;
      }
      case 0x0B:
      {
        result = result * (unsigned long int)26;
        break;
      }
      case 0x0C:
      {
        l = (unsigned int)((signed int)(char)(length >> i * (unsigned int)4) & 0x0f) + (unsigned int)1;
        return_value_getMarkovDynProgRootValue_1=getMarkovDynProgRootValue(mdpw, mis, l);
        result = result * return_value_getMarkovDynProgRootValue_1;
        break;
      }
      case 0x03:
      {
        result = result * (unsigned long int)26;
        break;
      }
      case 0x04:
      {
        l = (unsigned int)((signed int)(char)(length >> i * (unsigned int)4) & 0x0f) + (unsigned int)1;
        return_value_getMarkovDynProgRootValue_2=getMarkovDynProgRootValue(mdpw, mis, l);
        result = result * return_value_getMarkovDynProgRootValue_2;
      }
    }
  return result;
}

// getThresholdFromPatternArray
// file aliasPattern.c line 125
unsigned long int getThresholdFromPatternArray(struct patternArray *array)
{
  unsigned int i = (unsigned int)0;
  unsigned long int result = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= array->size); i = i + 1u)
    result = result + array->sizeArray[(signed long int)i];
  return result;
}

// handle_messages
// file main.c line 593
void handle_messages(struct ophcrack_t_ *crack)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  char info[512l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  struct message_t_ *msg = ((struct message_t_ *)NULL);
  signed int count = 1000;
  signed int pwdfound = 0;
  struct arg_t_ *arg = crack->arg;
  struct timeval now;
  gettimeofday(&now, ((struct timezone *)NULL));
  signed long int tv_sec = now.tv_sec - tm_main_start.tv_sec;
  signed long int hour = tv_sec / (signed long int)3600;
  signed long int sec = tv_sec - (signed long int)3600 * hour;
  signed long int min = sec / (signed long int)60;
  sec = sec % (signed long int)60;
  snprintf(info, sizeof(char [512l]) /*512ul*/ , "%ldh %2ldm %2lds; ", hour, min, sec);
  signed int tmp_post_1;
  _Bool tmp_if_expr_2;
  do
  {
    tmp_post_1 = count;
    count = count - 1;
    if(tmp_post_1 == 0)
      break;

    msg=message_tryget();
    if(msg == ((struct message_t_ *)NULL))
      break;

    if(arg->debug == 0)
    {
      if(arg->quiet == 0)
        printf("\033[2K\r");

    }

    if((signed int)msg->kind == msg_found)
    {
      struct msg_found_t_ *found = (struct msg_found_t_ *)msg->data;
      display_found(crack, found, info);
      pwdfound = 1;
    }

    else
    {
      if(!(arg->verbose == 0))
        tmp_if_expr_2 = (signed int)msg->kind == msg_work ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        struct msg_work_t_ *work = (struct msg_work_t_ *)msg->data;
        display_work(crack, work, info);
      }

      else
        if(!(arg->verbose == 0))
        {
          if((signed int)msg->kind == msg_preload)
          {
            struct msg_load_t_ *load = (struct msg_load_t_ *)msg->data;
            if(!(load->tbl == ((struct table_t_ *)NULL)))
              display_load(crack, load, info);

          }

        }

    }
    msg=fsm_next(fsm, msg);
    if(!(msg == ((struct message_t_ *)NULL)))
      message_free(msg);

  }
  while((_Bool)1);
  if(!(pwdfound == 0))
  {
    struct _IO_FILE *ofile;
    ofile=fopen(crack->arg->ofname, "w");
    struct _IO_FILE *xfile = ((struct _IO_FILE *)NULL);
    if(!(crack->arg->exportcsv == 0))
      xfile=fopen(crack->arg->xfname, "w");

    signed int fields[13l] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
    if(!(ofile == ((struct _IO_FILE *)NULL)))
    {
      pthread_mutex_lock(mutex);
      if(!(xfile == ((struct _IO_FILE *)NULL)))
      {
        ophcrack_export_csv(crack, xfile, fields, (char)59, (char)0);
        fclose(xfile);
      }

      ophcrack_save(crack, ofile, 0, 0);
      pthread_mutex_unlock(mutex);
      fclose(ofile);
    }

  }

  ophcrack_update(crack);
  if(arg->debug == 0)
  {
    if(arg->quiet == 0)
    {
      printf("\033[2K\r");
      display_status(crack, info);
      fflush(stdout);
    }

  }

  fflush(arg->lfile);
}

// hashNTH
// file hashToPwd.c line 393
void hashNTH(char *plaintxt, unsigned char *hash)
{
  char pwdUTF[32l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned int j = (unsigned int)0;
  unsigned long int return_value_strlen_1;
  do
  {
    return_value_strlen_1=strlen(plaintxt);
    if(2u * j >= 32u || (unsigned long int)j >= return_value_strlen_1)
      break;

    pwdUTF[(signed long int)((unsigned int)2 * j)] = plaintxt[(signed long int)j];
    j = j + 1u;
  }
  while((_Bool)1);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(plaintxt);
  MD4((unsigned char *)pwdUTF, (unsigned long int)((unsigned long int)2 * return_value_strlen_2), hash);
}

// hashToIndex
// file ./ntproba/hashToPwd.h line 49
unsigned long int hashToIndex(struct patternArray *array, struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned int *hashsrc, const unsigned int startC, const unsigned int endC, const unsigned int threshold, const unsigned int currentTable, const unsigned int chainLength)
{
  unsigned long int indexLetterBiased;
  unsigned long int indexLetterFair;
  unsigned long int indexPatternBiased;
  unsigned short int indexPatternFair;
  unsigned int taille = (unsigned int)0;
  unsigned int patIndex = (unsigned int)0;
  unsigned int i = startC;
  char pwdUTF[32l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned int hash[4l];
  indexLetterBiased = *((unsigned long int *)((char *)hashsrc + (signed long int)5)) ^ (unsigned long int)(i + currentTable * chainLength);
  indexLetterFair = *((unsigned long int *)hashsrc) ^ (unsigned long int)(i + currentTable * chainLength);
  indexPatternBiased = *((unsigned long int *)(hashsrc + (signed long int)2)) >> (unsigned int)64 - threshold;
  indexPatternFair = *((unsigned short int *)hashsrc);
  i = startC + (unsigned int)1;
  for( ; !(i >= endC); i = i + 1u)
  {
    patIndex=selectPatternAlias(array->lut, indexPatternBiased, indexPatternFair);
    taille=selectCharacterUTF(mdpw, mis, array->patternDescriptor[(signed long int)patIndex], array->patternLength[(signed long int)patIndex], indexLetterBiased, indexLetterFair, pwdUTF);
    MD4((unsigned char *)pwdUTF, (unsigned long int)taille, (unsigned char *)hash);
    indexLetterBiased = *((unsigned long int *)((char *)hash + (signed long int)5)) ^ (unsigned long int)(i + currentTable * chainLength);
    indexLetterFair = *((unsigned long int *)hash) ^ (unsigned long int)(i + currentTable * chainLength);
    indexPatternBiased = *((unsigned long int *)(hash + (signed long int)2)) >> (unsigned int)64 - threshold;
    indexPatternFair = *((unsigned short int *)hash);
  }
  return indexLetterBiased & (unsigned long int)0xffffffffffffffff >> (unsigned int)64 - threshold;
}

// hash_add_table
// file hash.c line 89
void hash_add_table(struct hash_t_ *hsh, struct table_t_ *tbl)
{
  struct htbl_t_ *htbl;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct htbl_t_) /*16ul*/ );
  htbl = (struct htbl_t_ *)return_value_malloc_1;
  const char *status = hsh->status;
  htbl->tbl = tbl;
  htbl->col = tbl->ncols - 1;
  htbl->covered = tbl->ncols;
  signed int return_value_regexec_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  signed int tmp_statement_expression_6;
  if(!(status == ((const char *)NULL)))
  {
    char *buff;
    char *return_value___strdup_2;
    return_value___strdup_2=__strdup(status);
    buff = return_value___strdup_2;
    char *tmp = buff;
    struct re_pattern_buffer regex;
    struct anonymous_11 match[4l];
    static const char pattern[29l] = { '(', '[', '^', ',', ']', '+', ')', ',', '(', '[', '0', '-', '9', ']', '+', ')', '\', '(', '(', '[', '0', '-', '9', ']', '+', ')', '\', ')', 0 };
    regcomp(&regex, pattern, 1);
    do
    {
      return_value_regexec_3=regexec(&regex, tmp, (unsigned long int)4, match, 0);
      if(!(return_value_regexec_3 == 0))
        break;

      if(match[1l].rm_so == -1)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = match[(signed long int)2].rm_so == -1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = match[(signed long int)3].rm_so == -1 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        break;

      tmp[(signed long int)match[(signed long int)1].rm_eo] = (char)0;
      tmp[(signed long int)match[(signed long int)2].rm_eo] = (char)0;
      tmp[(signed long int)match[(signed long int)3].rm_eo] = (char)0;
      const char *name = tmp + (signed long int)match[(signed long int)1].rm_so;
      signed int idx;
      idx=atoi_link2(tmp + (signed long int)match[(signed long int)2].rm_so);
      if(idx == tbl->idx)
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        const char *return_value_table_string_7;
        return_value_table_string_7=table_string(tbl->kind);
        signed int return_value___builtin_strcmp_8;
        return_value___builtin_strcmp_8=__builtin_strcmp(name, return_value_table_string_7);
        tmp_statement_expression_6 = return_value___builtin_strcmp_8;
        if(tmp_statement_expression_6 == 0)
        {
          htbl->covered=atoi_link2(tmp + (signed long int)match[(signed long int)3].rm_so);
          htbl->col = htbl->covered - 1;
          break;
        }

      }

      tmp = tmp + (signed long int)(match[(signed long int)3].rm_eo + 1);
    }
    while((_Bool)1);
    free((void *)buff);
    regfree(&regex);
  }

  list_add_tail(hsh->tables, (void *)htbl);
}

// hash_alloc
// file hash.c line 43
struct hash_t_ * hash_alloc(enum anonymous_0 kind, signed int hlen, signed int plen, signed int id)
{
  struct hash_t_ *hsh;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct hash_t_) /*168ul*/ );
  hsh = (struct hash_t_ *)return_value_malloc_1;
  hsh->kind = kind;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)hlen * sizeof(unsigned char) /*1ul*/ );
  hsh->hash = (unsigned char *)return_value_malloc_2;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc((unsigned long int)plen * sizeof(char) /*1ul*/ );
  hsh->pwd = (char *)return_value_malloc_3;
  hsh->str = ((char *)NULL);
  hsh->status = ((char *)NULL);
  memset((void *)hsh->hash, 0, (unsigned long int)hlen);
  memset((void *)hsh->pwd, 0, (unsigned long int)plen);
  memset((void *)hsh->info, 0, (unsigned long int)64);
  hsh->lmhsh1 = ((struct hash_t_ *)NULL);
  hsh->lmhsh2 = ((struct hash_t_ *)NULL);
  hsh->id = id;
  hsh->uid = 0;
  hsh->done = 0;
  hsh->tables=list_alloc();
  hsh->tnd = ((struct list_nd_t_ *)NULL);
  hsh->length = 0;
  hsh->category = 0;
  hsh->time = -1;
  hsh->table = ((char *)NULL);
  return hsh;
}

// hash_dump_sam
// file hash.c line 467
signed int hash_dump_sam(struct list_t_ *hashes, signed int id)
{
  signed int npwds = 0;
  return npwds;
}

// hash_extract_lmnt
// file hash.c line 143
signed int hash_extract_lmnt(char *buff, struct list_t_ *hashes, signed int id)
{
  signed int l;
  char *p[11l] = { ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL) };
  l = 0;
  char *tmp_statement_expression_1;
  for( ; !(l >= 11); l = l + 1)
  {
    char __r0;
    char __r1;
    char __r2;
    char *return_value___strsep_g_2;
    return_value___strsep_g_2=__strsep_g(&buff, ":");
    tmp_statement_expression_1 = return_value___strsep_g_2;
    p[(signed long int)l] = tmp_statement_expression_1;
    if(p[(signed long int)l] == ((char *)NULL))
      break;

  }
  char lmstr[33l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char ntstr[33l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int tmp_statement_expression_3;
  _Bool tmp_if_expr_7;
  signed int tmp_statement_expression_5;
  signed int tmp_statement_expression_8;
  _Bool tmp_if_expr_12;
  signed int tmp_statement_expression_10;
  signed int tmp_statement_expression_13;
  _Bool tmp_if_expr_17;
  signed int tmp_statement_expression_15;
  signed int tmp_statement_expression_18;
  _Bool tmp_if_expr_22;
  signed int tmp_statement_expression_20;
  signed int tmp_statement_expression_23;
  _Bool tmp_if_expr_27;
  signed int tmp_statement_expression_25;
  if(l >= 7)
  {
    unsigned long int hash_extract_lmnt__1__2__1____s1_len;
    unsigned long int hash_extract_lmnt__1__2__1____s2_len;
    signed int return_value___builtin_strcmp_4;
    return_value___builtin_strcmp_4=__builtin_strcmp(p[(signed long int)2], pwdump_nopwd);
    tmp_statement_expression_3 = return_value___builtin_strcmp_4;
    if(!(tmp_statement_expression_3 == 0))
    {
      unsigned long int hash_extract_lmnt__1__2__2____s1_len;
      unsigned long int hash_extract_lmnt__1__2__2____s2_len;
      signed int return_value___builtin_strcmp_6;
      return_value___builtin_strcmp_6=__builtin_strcmp(p[(signed long int)2], samdump_nopwd);
      tmp_statement_expression_5 = return_value___builtin_strcmp_6;
      tmp_if_expr_7 = tmp_statement_expression_5 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    if(tmp_if_expr_7)
      __builtin_strncpy(lmstr, p[(signed long int)2], sizeof(char [33l]) /*33ul*/ );

    else
      __builtin_strncpy(lmstr, "aad3b435b51404eeaad3b435b51404ee", sizeof(char [33l]) /*33ul*/ );
    unsigned long int hash_extract_lmnt__1__2__3____s1_len;
    unsigned long int hash_extract_lmnt__1__2__3____s2_len;
    signed int return_value___builtin_strcmp_9;
    return_value___builtin_strcmp_9=__builtin_strcmp(p[(signed long int)3], pwdump_nopwd);
    tmp_statement_expression_8 = return_value___builtin_strcmp_9;
    if(!(tmp_statement_expression_8 == 0))
    {
      unsigned long int hash_extract_lmnt__1__2__4____s1_len;
      unsigned long int hash_extract_lmnt__1__2__4____s2_len;
      signed int return_value___builtin_strcmp_11;
      return_value___builtin_strcmp_11=__builtin_strcmp(p[(signed long int)3], samdump_nopwd);
      tmp_statement_expression_10 = return_value___builtin_strcmp_11;
      tmp_if_expr_12 = tmp_statement_expression_10 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_12 = (_Bool)0;
    if(tmp_if_expr_12)
      __builtin_strncpy(ntstr, p[(signed long int)3], sizeof(char [33l]) /*33ul*/ );

    else
      __builtin_strncpy(ntstr, "31d6cfe0d16ae931b73c59d7e0c089c0", sizeof(char [33l]) /*33ul*/ );
  }

  else
    if(l == 2)
    {
      unsigned long int hash_extract_lmnt__1__3__1____s1_len;
      unsigned long int hash_extract_lmnt__1__3__1____s2_len;
      signed int return_value___builtin_strcmp_14;
      return_value___builtin_strcmp_14=__builtin_strcmp(p[(signed long int)0], pwdump_nopwd);
      tmp_statement_expression_13 = return_value___builtin_strcmp_14;
      if(!(tmp_statement_expression_13 == 0))
      {
        unsigned long int hash_extract_lmnt__1__3__2____s1_len;
        unsigned long int hash_extract_lmnt__1__3__2____s2_len;
        signed int return_value___builtin_strcmp_16;
        return_value___builtin_strcmp_16=__builtin_strcmp(p[(signed long int)0], samdump_nopwd);
        tmp_statement_expression_15 = return_value___builtin_strcmp_16;
        tmp_if_expr_17 = tmp_statement_expression_15 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_17 = (_Bool)0;
      if(tmp_if_expr_17)
        __builtin_strncpy(lmstr, p[(signed long int)0], sizeof(char [33l]) /*33ul*/ );

      else
        __builtin_strncpy(lmstr, "aad3b435b51404eeaad3b435b51404ee", sizeof(char [33l]) /*33ul*/ );
      unsigned long int hash_extract_lmnt__1__3__3____s1_len;
      unsigned long int hash_extract_lmnt__1__3__3____s2_len;
      signed int return_value___builtin_strcmp_19;
      return_value___builtin_strcmp_19=__builtin_strcmp(p[(signed long int)1], pwdump_nopwd);
      tmp_statement_expression_18 = return_value___builtin_strcmp_19;
      if(!(tmp_statement_expression_18 == 0))
      {
        unsigned long int hash_extract_lmnt__1__3__4____s1_len;
        unsigned long int hash_extract_lmnt__1__3__4____s2_len;
        signed int return_value___builtin_strcmp_21;
        return_value___builtin_strcmp_21=__builtin_strcmp(p[(signed long int)1], samdump_nopwd);
        tmp_statement_expression_20 = return_value___builtin_strcmp_21;
        tmp_if_expr_22 = tmp_statement_expression_20 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_22 = (_Bool)0;
      if(tmp_if_expr_22)
        __builtin_strncpy(ntstr, p[(signed long int)1], sizeof(char [33l]) /*33ul*/ );

      else
        __builtin_strncpy(ntstr, "31d6cfe0d16ae931b73c59d7e0c089c0", sizeof(char [33l]) /*33ul*/ );
    }

    else
      if(l == 1)
      {
        unsigned long int hash_extract_lmnt__1__4__1____s1_len;
        unsigned long int hash_extract_lmnt__1__4__1____s2_len;
        signed int return_value___builtin_strcmp_24;
        return_value___builtin_strcmp_24=__builtin_strcmp(p[(signed long int)0], pwdump_nopwd);
        tmp_statement_expression_23 = return_value___builtin_strcmp_24;
        if(!(tmp_statement_expression_23 == 0))
        {
          unsigned long int __s1_len;
          unsigned long int __s2_len;
          signed int return_value___builtin_strcmp_26;
          return_value___builtin_strcmp_26=__builtin_strcmp(p[(signed long int)0], samdump_nopwd);
          tmp_statement_expression_25 = return_value___builtin_strcmp_26;
          tmp_if_expr_27 = tmp_statement_expression_25 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_27 = (_Bool)0;
        if(tmp_if_expr_27)
          __builtin_strncpy(lmstr, p[(signed long int)0], sizeof(char [33l]) /*33ul*/ );

        else
          __builtin_strncpy(lmstr, "aad3b435b51404eeaad3b435b51404ee", sizeof(char [33l]) /*33ul*/ );
      }

      else
        return 0;
  signed int lmlen;
  unsigned long int return_value_strlen_28;
  return_value_strlen_28=strlen(lmstr);
  lmlen = (signed int)return_value_strlen_28;
  signed int ntlen;
  unsigned long int return_value_strlen_29;
  return_value_strlen_29=strlen(ntstr);
  ntlen = (signed int)return_value_strlen_29;
  unsigned long int tmp_if_expr_31;
  unsigned long int return_value_strlen_30;
  unsigned long int tmp_if_expr_33;
  unsigned long int return_value_strlen_32;
  signed int tmp_statement_expression_38;
  unsigned long int tmp_if_expr_41;
  unsigned long int return_value_strlen_40;
  signed int tmp_statement_expression_44;
  char *return_value___strdup_46;
  char *return_value___strdup_47;
  char *return_value___strdup_48;
  signed int return_value_memcmp_49;
  signed int return_value_memcmp_50;
  signed int return_value_memcmp_51;
  if(!(lmlen == 32) && !(ntlen == 32))
    return 0;

  else
  {
    struct hash_t_ *lmhsh1 = ((struct hash_t_ *)NULL);
    struct hash_t_ *lmhsh2 = ((struct hash_t_ *)NULL);
    signed int lmplen1;
    if(l == 7)
    {
      return_value_strlen_30=strlen(p[(signed long int)4]);
      tmp_if_expr_31 = return_value_strlen_30;
    }

    else
      tmp_if_expr_31 = (unsigned long int)8;
    lmplen1 = (signed int)tmp_if_expr_31;
    signed int lmplen2;
    if(l == 7)
    {
      return_value_strlen_32=strlen(p[(signed long int)5]);
      tmp_if_expr_33 = return_value_strlen_32;
    }

    else
      tmp_if_expr_33 = (unsigned long int)8;
    lmplen2 = (signed int)tmp_if_expr_33;
    unsigned long int hash_extract_lmnt__1__5____s1_len;
    unsigned long int hash_extract_lmnt__1__5____s2_len;
    signed int return_value___builtin_strcmp_39;
    return_value___builtin_strcmp_39=__builtin_strcmp(lmstr, "");
    tmp_statement_expression_38 = return_value___builtin_strcmp_39;
    if(!(tmp_statement_expression_38 == 0))
    {
      lmhsh1=hash_alloc((enum anonymous_0)lm1, 8, lmplen1 < 8 ? 8 : lmplen1, id);
      lmhsh2=hash_alloc((enum anonymous_0)lm2, 8, lmplen2 < 8 ? 8 : lmplen2, id);
      char *return_value___strdup_34;
      return_value___strdup_34=__strdup(lmstr);
      lmhsh1->str = return_value___strdup_34;
      char *return_value___strdup_35;
      return_value___strdup_35=__strdup(lmstr);
      lmhsh2->str = return_value___strdup_35;
      signed int i;
      unsigned int tmp;
      i = 0;
      for( ; !(i >= 8); i = i + 1)
      {
        signed int return_value_sscanf_36;
        return_value_sscanf_36=sscanf(lmstr + (signed long int)(2 * i), "%2x", &tmp);
        if(!(return_value_sscanf_36 == 1))
          return 0;

        lmhsh1->hash[(signed long int)i] = (unsigned char)tmp;
        signed int return_value_sscanf_37;
        return_value_sscanf_37=sscanf(lmstr + (signed long int)(2 * i) + (signed long int)16, "%2x", &tmp);
        if(!(return_value_sscanf_37 == 1))
          return 0;

        lmhsh2->hash[(signed long int)i] = (unsigned char)tmp;
      }
    }

    struct hash_t_ *nthsh = ((struct hash_t_ *)NULL);
    signed int ntplen;
    if(l == 7)
    {
      return_value_strlen_40=strlen(p[(signed long int)6]);
      tmp_if_expr_41 = return_value_strlen_40;
    }

    else
      tmp_if_expr_41 = (unsigned long int)16;
    ntplen = (signed int)tmp_if_expr_41;
    unsigned long int hash_extract_lmnt__1__7____s1_len;
    unsigned long int hash_extract_lmnt__1__7____s2_len;
    signed int return_value___builtin_strcmp_45;
    return_value___builtin_strcmp_45=__builtin_strcmp(ntstr, "");
    tmp_statement_expression_44 = return_value___builtin_strcmp_45;
    if(!(tmp_statement_expression_44 == 0))
    {
      nthsh=hash_alloc((enum anonymous_0)nt, 16, ntplen < 16 ? 16 : ntplen, id);
      char *return_value___strdup_42;
      return_value___strdup_42=__strdup(ntstr);
      nthsh->str = return_value___strdup_42;
      signed int hash_extract_lmnt__1__8__i;
      unsigned int hash_extract_lmnt__1__8__tmp;
      hash_extract_lmnt__1__8__i = 0;
      for( ; !(hash_extract_lmnt__1__8__i >= 16); hash_extract_lmnt__1__8__i = hash_extract_lmnt__1__8__i + 1)
      {
        signed int return_value_sscanf_43;
        return_value_sscanf_43=sscanf(ntstr + (signed long int)(2 * hash_extract_lmnt__1__8__i), "%2x", &hash_extract_lmnt__1__8__tmp);
        if(!(return_value_sscanf_43 == 1))
          return 0;

        nthsh->hash[(signed long int)hash_extract_lmnt__1__8__i] = (unsigned char)hash_extract_lmnt__1__8__tmp;
      }
    }

    if(l >= 7)
    {
      signed int uid;
      uid=atoi_link2(p[(signed long int)1]);
      if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
      {
        __builtin_strncpy(lmhsh1->info, p[(signed long int)0], sizeof(char [64l]) /*64ul*/ );
        lmhsh1->uid = uid;
        if(!(lmplen1 >= 8))
          __builtin_strncpy(lmhsh1->pwd, p[(signed long int)4], (unsigned long int)lmplen1);

        convert_to_colon((unsigned char *)lmhsh1->pwd);
        if(l >= 8)
        {
          return_value___strdup_46=__strdup(p[(signed long int)7]);
          lmhsh1->status = return_value___strdup_46;
        }

      }

      if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
      {
        __builtin_strncpy(lmhsh2->info, p[(signed long int)0], sizeof(char [64l]) /*64ul*/ );
        lmhsh2->uid = uid;
        if(!(lmplen2 >= 8))
          __builtin_strncpy(lmhsh2->pwd, p[(signed long int)5], (unsigned long int)lmplen2);

        convert_to_colon((unsigned char *)lmhsh2->pwd);
        if(l >= 9)
        {
          return_value___strdup_47=__strdup(p[(signed long int)8]);
          lmhsh2->status = return_value___strdup_47;
        }

      }

      if(!(nthsh == ((struct hash_t_ *)NULL)))
      {
        __builtin_strncpy(nthsh->info, p[(signed long int)0], sizeof(char [64l]) /*64ul*/ );
        nthsh->uid = uid;
        __builtin_strncpy(nthsh->pwd, p[(signed long int)6], (unsigned long int)ntplen);
        convert_to_colon((unsigned char *)nthsh->pwd);
        if(l >= 10)
        {
          return_value___strdup_48=__strdup(p[(signed long int)9]);
          nthsh->status = return_value___strdup_48;
        }

      }

    }

    signed int empty1 = 0;
    signed int empty2 = 0;
    if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
    {
      return_value_memcmp_49=memcmp((const void *)lmhsh1->hash, (const void *)empty_lmhash, (unsigned long int)8);
      if(return_value_memcmp_49 == 0)
      {
        empty1 = 1;
        lmhsh1->done = 1;
      }

    }

    if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
    {
      return_value_memcmp_50=memcmp((const void *)lmhsh2->hash, (const void *)empty_lmhash, (unsigned long int)8);
      if(return_value_memcmp_50 == 0)
      {
        empty2 = 1;
        lmhsh2->done = 1;
      }

    }

    if(!(nthsh == ((struct hash_t_ *)NULL)))
    {
      return_value_memcmp_51=memcmp((const void *)nthsh->hash, (const void *)empty_nthash, (unsigned long int)16);
      if(return_value_memcmp_51 == 0)
        nthsh->done = 1;

    }

    if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
    {
      if(!((signed int)*lmhsh1->pwd == 0))
        lmhsh1->done = 1;

    }

    if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
    {
      if(!((signed int)*lmhsh2->pwd == 0))
        lmhsh2->done = 1;

    }

    if(!(nthsh == ((struct hash_t_ *)NULL)))
    {
      if(!((signed int)*nthsh->pwd == 0))
        nthsh->done = 1;

    }

    if(!(empty1 == 0) && !(empty2 == 0))
    {
      hash_free(lmhsh1);
      hash_free(lmhsh2);
      lmhsh1 = ((struct hash_t_ *)NULL);
      lmhsh2 = ((struct hash_t_ *)NULL);
    }

    if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
    {
      lmhsh1->lmhsh1 = nthsh;
      lmhsh1->lmhsh2 = lmhsh2;
    }

    if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
    {
      lmhsh2->lmhsh1 = lmhsh1;
      lmhsh2->lmhsh2 = nthsh;
    }

    if(!(nthsh == ((struct hash_t_ *)NULL)))
    {
      nthsh->lmhsh1 = lmhsh1;
      nthsh->lmhsh2 = lmhsh2;
    }

    if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
      list_add_tail(hashes, (void *)lmhsh1);

    if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
      list_add_tail(hashes, (void *)lmhsh2);

    if(!(nthsh == ((struct hash_t_ *)NULL)))
      list_add_tail(hashes, (void *)nthsh);

    return 1;
  }
}

// hash_free
// file hash.c line 73
void hash_free(struct hash_t_ *hsh)
{
  free((void *)hsh->hash);
  free((void *)hsh->pwd);
  if(!(hsh->str == ((char *)NULL)))
    free((void *)hsh->str);

  if(!(hsh->status == ((char *)NULL)))
    free((void *)hsh->status);

  if(!(hsh->table == ((char *)NULL)))
    free((void *)hsh->table);

  while(hsh->tables->size >= 1)
  {
    struct htbl_t_ *htbl;
    void *return_value_list_rem_head_1;
    return_value_list_rem_head_1=list_rem_head(hsh->tables);
    htbl = (struct htbl_t_ *)return_value_list_rem_head_1;
    free((void *)htbl);
  }
  list_free(hsh->tables);
  free((void *)hsh);
}

// hash_load_pwdump
// file hash.h line 93
signed int hash_load_pwdump(struct list_t_ *hashes, struct _IO_FILE *file, signed int id)
{
  char buff[512l];
  signed int npwds = 0;
  signed int n = 0;
  do
  {
    char *return_value_fgets_1;
    return_value_fgets_1=fgets(buff, (signed int)sizeof(char [512l]) /*512ul*/ , file);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    signed int len;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(buff);
    len = (signed int)return_value_strlen_2;
    if((signed int)buff[(signed long int)(len + -1)] == 10)
      buff[(signed long int)(len - 1)] = (char)0;

    if((signed int)buff[(signed long int)(len + -2)] == 13)
      buff[(signed long int)(len - 2)] = (char)0;

    signed int return_value_hash_extract_lmnt_3;
    return_value_hash_extract_lmnt_3=hash_extract_lmnt(buff, hashes, id);
    if(return_value_hash_extract_lmnt_3 >= 1)
    {
      id = id + 1;
      npwds = npwds + 1;
    }

    n = n + 1;
  }
  while((_Bool)1);
  return npwds;
}

// hash_load_sam
// file hash.h line 94
signed int hash_load_sam(struct list_t_ *hashes, const char *dir, signed int id)
{
  char fname[2l][512l] = { { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
  signed int i;
  signed int j;
  i = 0;
  signed int tmp_post_2;
  for( ; !(i >= 2); i = i + 1)
  {
    signed int len;
    unsigned long int return_value_strlen_1;
    static const char *name[2l] = { "SYSTEM", "SAM" };
    return_value_strlen_1=strlen(name[(signed long int)i]);
    len = (signed int)return_value_strlen_1;
    signed int count = 1 << len;
    char tmp[10l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    do
    {
      tmp_post_2 = count;
      count = count - 1;
      if(tmp_post_2 == 0)
        break;

      j = 0;
      for( ; !(j >= len); j = j + 1)
      {
        tmp[(signed long int)j] = name[(signed long int)i][(signed long int)j];
        static const signed int da = 97 - 65;
        if(!((count >> j & 1) == 0))
          tmp[(signed long int)j] = tmp[(signed long int)j] + (char)da;

      }
      snprintf(fname[(signed long int)i], sizeof(char [512l]) /*512ul*/ , "%s/%s", dir, (const void *)tmp);
      signed int return_value_access_3;
      return_value_access_3=access(fname[(signed long int)i], 4);
      if(!(return_value_access_3 == 0))
        fname[(signed long int)i][(signed long int)0] = (char)0;

      else
        break;
    }
    while((_Bool)1);
  }
  char *sys = fname[(signed long int)0];
  char *sam = fname[(signed long int)1];
  if((signed int)*sys == 0)
    return -1;

  else
    if((signed int)*sam == 0)
      return -2;

    else
    {
      unsigned char pkey[16l];
      char error[512l];
      signed int return_value_bkhive_4;
      return_value_bkhive_4=bkhive((unsigned char *)sys, pkey, error, 0);
      if(return_value_bkhive_4 == -1)
        return -3;

      else
      {
        struct list_t_ *hstr;
        hstr=list_alloc();
        struct list_nd_t_ *nd;
        signed int ret;
        ret=samdump2((unsigned char *)sam, hstr, pkey, error, 0, 0, (unsigned int)0);
        signed int npwds = 0;
        if(!(ret == -1))
        {
          nd = hstr->head;
          for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
          {
            char *str = (char *)nd->data;
            signed int return_value_hash_extract_lmnt_5;
            return_value_hash_extract_lmnt_5=hash_extract_lmnt(str, hashes, id);
            if(!(return_value_hash_extract_lmnt_5 == 0))
            {
              id = id + 1;
              npwds = npwds + 1;
            }

          }
        }

        list_free(hstr);
        return ret != -1 ? npwds : -4;
      }
    }
}

// hash_print
// file hash.c line 508
void hash_print(struct hash_t_ *hsh, struct _IO_FILE *file, signed int nice, signed int status, signed int hide)
{
  enum anonymous_0 kind = hsh->kind;
  struct hash_t_ *lmhsh1 = ((struct hash_t_ *)NULL);
  struct hash_t_ *lmhsh2 = ((struct hash_t_ *)NULL);
  struct hash_t_ *nthsh = ((struct hash_t_ *)NULL);
  switch((signed int)kind)
  {
    case lm1:
    {
      lmhsh1 = hsh;
      lmhsh2 = hsh->lmhsh2;
      nthsh = hsh->lmhsh1;
      break;
    }
    case lm2:
    {
      lmhsh1 = hsh->lmhsh1;
      lmhsh2 = hsh;
      nthsh = hsh->lmhsh2;
      break;
    }
    case nt:
    {
      lmhsh1 = hsh->lmhsh1;
      lmhsh2 = hsh->lmhsh2;
      nthsh = hsh;
    }
  }
  signed int uid = hsh->uid;
  char *info = hsh->info;
  _Bool tmp_if_expr_1;
  if(nice == 0)
  {
    if(!(*info == 0))
    {
      if(!(hide == 0))
        fprintf(file, "*****");

      else
        fprintf(file, "%s", info);
    }

    fprintf(file, ":");
    if(!(uid == 0))
      fprintf(file, "%d", uid);

    fprintf(file, ":");
    if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
      fprintf(file, "%s", lmhsh1->str);

    fprintf(file, ":");
    if(!(nthsh == ((struct hash_t_ *)NULL)))
      fprintf(file, "%s", nthsh->str);

    fprintf(file, ":");
    if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
    {
      convert_from_colon((unsigned char *)lmhsh1->pwd);
      fprintf(file, "%s", lmhsh1->pwd);
      convert_to_colon((unsigned char *)lmhsh1->pwd);
    }

    fprintf(file, ":");
    if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
    {
      convert_from_colon((unsigned char *)lmhsh2->pwd);
      fprintf(file, "%s", lmhsh2->pwd);
      convert_to_colon((unsigned char *)lmhsh2->pwd);
    }

    fprintf(file, ":");
    if(!(nthsh == ((struct hash_t_ *)NULL)))
    {
      convert_from_colon((unsigned char *)nthsh->pwd);
      fprintf(file, "%s", nthsh->pwd);
      convert_to_colon((unsigned char *)nthsh->pwd);
    }

    if(!(status == 0))
    {
      fprintf(file, ":");
      if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
      {
        struct list_t_ *hash_print__1__2__5__1__tables = lmhsh1->tables;
        struct list_nd_t_ *hash_print__1__2__5__1__nd = hash_print__1__2__5__1__tables->head;
        for( ; !(hash_print__1__2__5__1__nd == ((struct list_nd_t_ *)NULL)); hash_print__1__2__5__1__nd = hash_print__1__2__5__1__nd->next)
        {
          struct htbl_t_ *hash_print__1__2__5__1__1__1__htbl = (struct htbl_t_ *)hash_print__1__2__5__1__nd->data;
          struct table_t_ *hash_print__1__2__5__1__1__1__tbl = hash_print__1__2__5__1__1__1__htbl->tbl;
          signed int idx = hash_print__1__2__5__1__1__1__tbl->idx;
          signed int covered = hash_print__1__2__5__1__1__1__htbl->covered;
          const char *name;
          name=table_string(hash_print__1__2__5__1__1__1__tbl->kind);
          fprintf(file, "%s,%d(%d)", name, idx, covered);
        }
      }

      fprintf(file, ":");
      if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
      {
        struct list_t_ *tables = lmhsh2->tables;
        struct list_nd_t_ *nd = tables->head;
        for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
        {
          struct htbl_t_ *htbl = (struct htbl_t_ *)nd->data;
          struct table_t_ *tbl = htbl->tbl;
          signed int hash_print__1__2__5__2__1__1__idx = tbl->idx;
          signed int hash_print__1__2__5__2__1__1__covered = htbl->covered;
          const char *hash_print__1__2__5__2__1__1__name;
          hash_print__1__2__5__2__1__1__name=table_string(tbl->kind);
          fprintf(file, "%s,%d(%d)", hash_print__1__2__5__2__1__1__name, hash_print__1__2__5__2__1__1__idx, hash_print__1__2__5__2__1__1__covered);
        }
      }

      fprintf(file, ":");
      if(!(nthsh == ((struct hash_t_ *)NULL)))
      {
        struct list_t_ *hash_print__1__2__5__3__tables = nthsh->tables;
        struct list_nd_t_ *hash_print__1__2__5__3__nd = hash_print__1__2__5__3__tables->head;
        for( ; !(hash_print__1__2__5__3__nd == ((struct list_nd_t_ *)NULL)); hash_print__1__2__5__3__nd = hash_print__1__2__5__3__nd->next)
        {
          struct htbl_t_ *hash_print__1__2__5__3__1__1__htbl = (struct htbl_t_ *)hash_print__1__2__5__3__nd->data;
          struct table_t_ *hash_print__1__2__5__3__1__1__tbl = hash_print__1__2__5__3__1__1__htbl->tbl;
          signed int hash_print__1__2__5__3__1__1__idx = hash_print__1__2__5__3__1__1__tbl->idx;
          signed int hash_print__1__2__5__3__1__1__covered = hash_print__1__2__5__3__1__1__htbl->covered;
          const char *hash_print__1__2__5__3__1__1__name;
          hash_print__1__2__5__3__1__1__name=table_string(hash_print__1__2__5__3__1__1__tbl->kind);
          fprintf(file, "%s,%d(%d)", hash_print__1__2__5__3__1__1__name, hash_print__1__2__5__3__1__1__idx, hash_print__1__2__5__3__1__1__covered);
        }
      }

    }

  }

  else
  {
    if(!(*info == 0))
    {
      if(!(hide == 0))
        fprintf(file, "*****");

      else
        fprintf(file, "%-32s", info);
    }

    else
      if(!(nthsh == ((struct hash_t_ *)NULL)))
        fprintf(file, "%-32s", nthsh->str);

      else
        if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
          fprintf(file, "%-32s", lmhsh1->str);

    fprintf(file, " ");
    if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
    {
      if(!(lmhsh1->done == 0))
      {
        convert_from_colon((unsigned char *)lmhsh1->pwd);
        fprintf(file, "%-7s", lmhsh1->pwd);
        convert_to_colon((unsigned char *)lmhsh1->pwd);
      }

      else
        fprintf(file, ".......");
      if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
        tmp_if_expr_1 = lmhsh2->done != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        convert_from_colon((unsigned char *)lmhsh2->pwd);
        fprintf(file, "%-7s", lmhsh2->pwd);
        convert_to_colon((unsigned char *)lmhsh2->pwd);
      }

      else
        fprintf(file, ".......");
    }

    else
      fprintf(file, "*** empty *** ");
    fprintf(file, " ");
    if(!(nthsh == ((struct hash_t_ *)NULL)))
    {
      if(!(nthsh->done == 0))
      {
        convert_from_colon((unsigned char *)nthsh->pwd);
        fprintf(file, "%s", nthsh->pwd);
        convert_to_colon((unsigned char *)nthsh->pwd);
        if((signed int)*nthsh->pwd == 0)
          fprintf(file, "*** empty ***");

      }

      else
        fprintf(file, ".......");
    }

    else
      fprintf(file, "*** empty ***");
  }
  fprintf(file, "\n");
}

// indexToPwdUTF
// file ./ntproba/hashToPwd.h line 50
unsigned int indexToPwdUTF(struct patternArray *array, struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, const unsigned long int start, const unsigned int threshold, const unsigned int endC, const unsigned int currentTable, const unsigned int chainLength, char *pwdUTF)
{
  unsigned long int indexLetterBiased;
  unsigned long int indexLetterFair;
  unsigned long int indexPatternBiased;
  unsigned short int indexPatternFair;
  unsigned int taille = (unsigned int)0;
  unsigned int patIndex = (unsigned int)0;
  unsigned int i = (unsigned int)0;
  unsigned int hash[4l];
  unsigned long int tailleCumul;
  tailleCumul=getPatternFirstRound(array, start, &patIndex);
  taille=selectCharacterUTFFirstRound(mdpw, mis, array->patternDescriptor[(signed long int)patIndex], array->patternLength[(signed long int)patIndex], start - tailleCumul, pwdUTF);
  i = (unsigned int)0;
  for( ; !(i >= endC); i = i + 1u)
  {
    MD4((unsigned char *)pwdUTF, (unsigned long int)taille, (unsigned char *)hash);
    indexLetterBiased = *((unsigned long int *)((char *)hash + (signed long int)5)) ^ (unsigned long int)(i + currentTable * chainLength);
    indexLetterFair = *((unsigned long int *)hash) ^ (unsigned long int)(i + currentTable * chainLength);
    indexPatternBiased = *((unsigned long int *)(hash + (signed long int)2)) >> (unsigned int)64 - threshold;
    indexPatternFair = *((unsigned short int *)hash);
    patIndex=selectPatternAlias(array->lut, indexPatternBiased, indexPatternFair);
    taille=selectCharacterUTF(mdpw, mis, array->patternDescriptor[(signed long int)patIndex], array->patternLength[(signed long int)patIndex], indexLetterBiased, indexLetterFair, pwdUTF);
  }
  return taille;
}

// initAMarkov0DynProg
// file markov.c line 66
void initAMarkov0DynProg(struct AmarkovDynProg *amdp, struct markov0DynProg *m0dp, struct markovImprobaStruct *mis)
{
  unsigned int minImproba = mis->improbaMark0[(signed long int)0];
  unsigned int i = (unsigned int)0;
  for( ; !(i >= 26u); i = i + 1u)
  {
    if(!(mis->improbaMark0[(signed long int)i] >= minImproba))
      minImproba = mis->improbaMark0[(signed long int)i];

    if(!(mis->improbaFirst[(signed long int)i] >= minImproba))
      minImproba = mis->improbaFirst[(signed long int)i];

  }
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)12);
  m0dp->rootValue = (unsigned long int *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)26 * (unsigned long int)(12 - 1));
  m0dp->firstLine = (unsigned long int *)return_value_malloc_2;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)((unsigned int)1 + (unsigned int)12 * (mis->meanImprobaMark0 - minImproba)) * (unsigned long int)(12 - 2));
  m0dp->buffer = (unsigned long int *)return_value_malloc_3;
  m0dp->minImproba = minImproba;
  m0dp->bufferWidth = (unsigned int)1 + (unsigned int)12 * (mis->meanImprobaMark0 - minImproba);
  m0dp->threshold = mis->meanImprobaMark0 * (unsigned int)12;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)12);
  amdp->rootValue = (unsigned int *)return_value_malloc_4;
  void *return_value_malloc_5;
  return_value_malloc_5=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)26 * (unsigned long int)(12 - 1));
  amdp->firstLine = (unsigned int *)return_value_malloc_5;
  void *return_value_malloc_6;
  return_value_malloc_6=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)((unsigned int)1 + (unsigned int)12 * (mis->meanImprobaMark0 - minImproba)) * (unsigned long int)(12 - 2));
  amdp->buffer = (unsigned int *)return_value_malloc_6;
  amdp->minImproba = minImproba;
  amdp->bufferWidth = (unsigned int)1 + (unsigned int)12 * (mis->meanImprobaMark0 - minImproba);
  amdp->threshold = mis->meanImprobaMark0 * (unsigned int)12;
  void *return_value_malloc_7;
  return_value_malloc_7=malloc(sizeof(struct aliasMarkovBuffer) /*48ul*/ );
  amdp->amb = (struct aliasMarkovBuffer *)return_value_malloc_7;
  i = (unsigned int)0;
  for( ; !(i >= 12u); i = i + 1u)
    m0dp->rootValue[(signed long int)i] = (unsigned long int)0xffffffffffffffff;
  i = (unsigned int)0;
  for( ; !(i >= 286u); i = i + 1u)
    m0dp->firstLine[(signed long int)i] = (unsigned long int)0xffffffffffffffff;
  i = (unsigned int)0;
  for( ; !(i >= 10u * m0dp->bufferWidth); i = i + 1u)
    m0dp->buffer[(signed long int)i] = (unsigned long int)0xffffffffffffffff;
  i = (unsigned int)1;
  for( ; !(i >= 13u); i = i + 1u)
    getMarkov0DynProgRootValue(m0dp, mis, i);
  amdp->amb->size_bufferRoot=getMark0BufferSizeRoot(m0dp);
  amdp->amb->size_bufferFLine=getMark0BufferSizeFLine(m0dp);
  amdp->amb->size_bufferMain=getMark0BufferSizeMain(m0dp);
  void *return_value_malloc_8;
  return_value_malloc_8=malloc(amdp->amb->size_bufferRoot);
  amdp->amb->bufferRoot = (char *)return_value_malloc_8;
  void *return_value_malloc_9;
  return_value_malloc_9=malloc(amdp->amb->size_bufferFLine);
  amdp->amb->bufferFLine = (char *)return_value_malloc_9;
  void *return_value_malloc_10;
  return_value_malloc_10=malloc(amdp->amb->size_bufferMain);
  amdp->amb->bufferMain = (char *)return_value_malloc_10;
  fillAliasMarkov0BufferRoot(m0dp, amdp, mis, amdp->amb->bufferRoot);
  fillAliasMarkov0BufferFLine(m0dp, amdp, mis, amdp->amb->bufferFLine);
  fillAliasMarkov0BufferMain(m0dp, amdp, mis, amdp->amb->bufferMain);
}

// initAliasMarkov32Element
// file aliasMarkov.c line 42
void initAliasMarkov32Element(struct aliasMarkov32Element *am32e, unsigned long int space, unsigned long int *subSpace)
{
  unsigned int i;
  unsigned long int temp;
  am32e->space = space;
  unsigned long int large[26l];
  unsigned long int small[26l];
  unsigned char numberLarge[26l];
  unsigned char numberSmall[26l];
  unsigned int pointerLarge = (unsigned int)0;
  unsigned int pointerSmall = (unsigned int)0;
  i = (unsigned int)0;
  for( ; !(i >= 26u); i = i + 1u)
  {
    temp = subSpace[(signed long int)i] * (unsigned long int)26;
    if(!(temp >= space))
    {
      small[(signed long int)pointerSmall] = temp;
      numberSmall[(signed long int)pointerSmall] = (unsigned char)i;
      pointerSmall = pointerSmall + 1u;
    }

    else
    {
      large[(signed long int)pointerLarge] = temp;
      numberLarge[(signed long int)pointerLarge] = (unsigned char)i;
      pointerLarge = pointerLarge + 1u;
    }
  }
  while(pointerLarge >= 1u && pointerSmall >= 1u)
  {
    am32e->proba[(signed long int)numberSmall[(signed long int)(pointerSmall - (unsigned int)1)]] = (unsigned int)small[(signed long int)(pointerSmall - (unsigned int)1)];
    am32e->alias[(signed long int)numberSmall[(signed long int)(pointerSmall - (unsigned int)1)]] = numberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
    temp = (large[(signed long int)(pointerLarge - (unsigned int)1)] + small[(signed long int)(pointerSmall - (unsigned int)1)]) - space;
    if(!(temp >= space))
    {
      small[(signed long int)(pointerSmall - (unsigned int)1)] = temp;
      numberSmall[(signed long int)(pointerSmall - (unsigned int)1)] = numberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
      pointerLarge = pointerLarge - 1u;
    }

    else
    {
      large[(signed long int)(pointerLarge - (unsigned int)1)] = temp;
      pointerSmall = pointerSmall - 1u;
    }
  }
  for( ; pointerLarge >= 1u; pointerLarge = pointerLarge - 1u)
  {
    am32e->proba[(signed long int)numberLarge[(signed long int)(pointerLarge - (unsigned int)1)]] = (unsigned int)space;
    am32e->alias[(signed long int)numberLarge[(signed long int)(pointerLarge - (unsigned int)1)]] = numberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
  }
}

// initAliasMarkov64Element
// file aliasMarkov.c line 89
void initAliasMarkov64Element(struct aliasMarkov64Element *am64e, unsigned long int space, unsigned long int *subSpace)
{
  unsigned int i;
  unsigned long int temp;
  am64e->space = space;
  unsigned long int large[26l];
  unsigned long int small[26l];
  unsigned char numberLarge[26l];
  unsigned char numberSmall[26l];
  unsigned int pointerLarge = (unsigned int)0;
  unsigned int pointerSmall = (unsigned int)0;
  i = (unsigned int)0;
  for( ; !(i >= 26u); i = i + 1u)
  {
    temp = subSpace[(signed long int)i] * (unsigned long int)26;
    if(!(temp >= space))
    {
      small[(signed long int)pointerSmall] = temp;
      numberSmall[(signed long int)pointerSmall] = (unsigned char)i;
      pointerSmall = pointerSmall + 1u;
    }

    else
    {
      large[(signed long int)pointerLarge] = temp;
      numberLarge[(signed long int)pointerLarge] = (unsigned char)i;
      pointerLarge = pointerLarge + 1u;
    }
  }
  while(pointerLarge >= 1u && pointerSmall >= 1u)
  {
    am64e->proba[(signed long int)numberSmall[(signed long int)(pointerSmall - (unsigned int)1)]] = small[(signed long int)(pointerSmall - (unsigned int)1)];
    am64e->alias[(signed long int)numberSmall[(signed long int)(pointerSmall - (unsigned int)1)]] = numberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
    temp = (large[(signed long int)(pointerLarge - (unsigned int)1)] + small[(signed long int)(pointerSmall - (unsigned int)1)]) - space;
    if(!(temp >= space))
    {
      small[(signed long int)(pointerSmall - (unsigned int)1)] = temp;
      numberSmall[(signed long int)(pointerSmall - (unsigned int)1)] = numberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
      pointerLarge = pointerLarge - 1u;
    }

    else
    {
      large[(signed long int)(pointerLarge - (unsigned int)1)] = temp;
      pointerSmall = pointerSmall - 1u;
    }
  }
  for( ; pointerLarge >= 1u; pointerLarge = pointerLarge - 1u)
  {
    am64e->proba[(signed long int)numberLarge[(signed long int)(pointerLarge - (unsigned int)1)]] = space;
    am64e->alias[(signed long int)numberLarge[(signed long int)(pointerLarge - (unsigned int)1)]] = numberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
  }
}

// initLookUpTable
// file aliasPattern.c line 46
void initLookUpTable(struct lookUpTable *lut, struct patternArray *array)
{
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)array->size);
  lut->proba = (unsigned long int *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)array->size);
  lut->alias = (unsigned int *)return_value_malloc_2;
  lut->length = (unsigned int)array->size;
  unsigned long int *large;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)array->size);
  large = (unsigned long int *)return_value_malloc_3;
  unsigned long int *small;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)array->size);
  small = (unsigned long int *)return_value_malloc_4;
  unsigned int *patternNumberLarge;
  void *return_value_malloc_5;
  return_value_malloc_5=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)array->size);
  patternNumberLarge = (unsigned int *)return_value_malloc_5;
  unsigned int *patternNumberSmall;
  void *return_value_malloc_6;
  return_value_malloc_6=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)array->size);
  patternNumberSmall = (unsigned int *)return_value_malloc_6;
  unsigned int i;
  unsigned int pointerLarge = (unsigned int)0;
  unsigned int pointerSmall = (unsigned int)0;
  unsigned long int temp;
  unsigned long int threshold;
  threshold=getThresholdFromPatternArray(array);
  i = (unsigned int)0;
  for( ; !(i >= array->size); i = i + 1u)
  {
    temp = (unsigned long int)array->size * array->sizeArray[(signed long int)i];
    if(!(temp >= threshold))
    {
      small[(signed long int)pointerSmall] = temp;
      patternNumberSmall[(signed long int)pointerSmall] = i;
      pointerSmall = pointerSmall + 1u;
    }

    else
    {
      large[(signed long int)pointerLarge] = temp;
      patternNumberLarge[(signed long int)pointerLarge] = i;
      pointerLarge = pointerLarge + 1u;
    }
  }
  while(pointerLarge >= 1u && pointerSmall >= 1u)
  {
    lut->proba[(signed long int)patternNumberSmall[(signed long int)(pointerSmall - (unsigned int)1)]] = small[(signed long int)(pointerSmall - (unsigned int)1)];
    lut->alias[(signed long int)patternNumberSmall[(signed long int)(pointerSmall - (unsigned int)1)]] = patternNumberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
    temp = (large[(signed long int)(pointerLarge - (unsigned int)1)] + small[(signed long int)(pointerSmall - (unsigned int)1)]) - threshold;
    if(!(temp >= threshold))
    {
      small[(signed long int)(pointerSmall - (unsigned int)1)] = temp;
      patternNumberSmall[(signed long int)(pointerSmall - (unsigned int)1)] = patternNumberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
      pointerLarge = pointerLarge - 1u;
    }

    else
    {
      large[(signed long int)(pointerLarge - (unsigned int)1)] = temp;
      pointerSmall = pointerSmall - 1u;
    }
  }
  for( ; pointerLarge >= 1u; pointerLarge = pointerLarge - 1u)
  {
    lut->proba[(signed long int)patternNumberLarge[(signed long int)(pointerLarge - (unsigned int)1)]] = threshold;
    lut->alias[(signed long int)patternNumberLarge[(signed long int)(pointerLarge - (unsigned int)1)]] = patternNumberLarge[(signed long int)(pointerLarge - (unsigned int)1)];
  }
  free((void *)large);
  free((void *)small);
  free((void *)patternNumberLarge);
  free((void *)patternNumberSmall);
}

// initMarkov1DynProg
// file markov.c line 214
void initMarkov1DynProg(struct AmarkovDynProg *amdp, struct markov1DynProg *m1dp, struct markovImprobaStruct *mis)
{
  unsigned int minImproba = mis->improbaMark1[(signed long int)0][(signed long int)0];
  unsigned int i;
  unsigned int c;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)12);
  m1dp->rootValue = (unsigned long int *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)26 * (unsigned long int)(12 - 1));
  m1dp->firstLine = (unsigned long int *)return_value_malloc_2;
  m1dp->threshold = mis->meanImprobaMark0 * (unsigned int)12;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)12);
  amdp->rootValue = (unsigned int *)return_value_malloc_3;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)26 * (unsigned long int)(12 - 1));
  amdp->firstLine = (unsigned int *)return_value_malloc_4;
  amdp->threshold = mis->meanImprobaMark0 * (unsigned int)12;
  void *return_value_malloc_5;
  return_value_malloc_5=malloc(sizeof(struct aliasMarkovBuffer) /*48ul*/ );
  amdp->amb = (struct aliasMarkovBuffer *)return_value_malloc_5;
  i = (unsigned int)0;
  for( ; !(i >= 12u); i = i + 1u)
    m1dp->rootValue[(signed long int)i] = (unsigned long int)0xffffffffffffffff;
  i = (unsigned int)0;
  for( ; !(i >= 286u); i = i + 1u)
    m1dp->firstLine[(signed long int)i] = (unsigned long int)0xffffffffffffffff;
  c = (unsigned int)0;
  for( ; !(c >= 26u); c = c + 1u)
  {
    i = (unsigned int)0;
    for( ; !(i >= 26u); i = i + 1u)
      if(!(mis->improbaMark1[(signed long int)c][(signed long int)i] >= minImproba))
        minImproba = mis->improbaMark1[(signed long int)c][(signed long int)i];

  }
  i = (unsigned int)0;
  for( ; !(i >= 26u); i = i + 1u)
    if(!(mis->improbaFirst[(signed long int)i] >= minImproba))
      minImproba = mis->improbaFirst[(signed long int)i];

  m1dp->minImproba = minImproba;
  m1dp->bufferWidth = (unsigned int)1 + (unsigned int)12 * (mis->meanImprobaMark0 - minImproba);
  amdp->minImproba = minImproba;
  amdp->bufferWidth = (unsigned int)1 + (unsigned int)12 * (mis->meanImprobaMark0 - minImproba);
  void *return_value_malloc_6;
  return_value_malloc_6=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)26 * (unsigned long int)m1dp->bufferWidth * (unsigned long int)(12 - 2));
  amdp->buffer = (unsigned int *)return_value_malloc_6;
  c = (unsigned int)0;
  for( ; !(c >= 26u); c = c + 1u)
  {
    void *return_value_malloc_7;
    return_value_malloc_7=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)m1dp->bufferWidth * (unsigned long int)(12 - 2));
    m1dp->buffer[(signed long int)c] = (unsigned long int *)return_value_malloc_7;
    i = (unsigned int)0;
    for( ; !(i >= 10u * m1dp->bufferWidth); i = i + 1u)
      m1dp->buffer[(signed long int)c][(signed long int)i] = (unsigned long int)0xffffffffffffffff;
  }
  i = (unsigned int)1;
  for( ; !(i >= 13u); i = i + 1u)
    getMarkov1DynProgRootValue(m1dp, mis, i);
  amdp->amb->size_bufferRoot=getMark1BufferSizeRoot(m1dp);
  amdp->amb->size_bufferFLine=getMark1BufferSizeFLine(m1dp);
  amdp->amb->size_bufferMain=getMark1BufferSizeMain(m1dp);
  void *return_value_malloc_8;
  return_value_malloc_8=malloc(amdp->amb->size_bufferRoot);
  amdp->amb->bufferRoot = (char *)return_value_malloc_8;
  void *return_value_malloc_9;
  return_value_malloc_9=malloc(amdp->amb->size_bufferFLine);
  amdp->amb->bufferFLine = (char *)return_value_malloc_9;
  void *return_value_malloc_10;
  return_value_malloc_10=malloc(amdp->amb->size_bufferMain);
  amdp->amb->bufferMain = (char *)return_value_malloc_10;
  fillAliasMarkov1BufferRoot(m1dp, amdp, mis, amdp->amb->bufferRoot);
  fillAliasMarkov1BufferFLine(m1dp, amdp, mis, amdp->amb->bufferFLine);
  fillAliasMarkov1BufferMain(m1dp, amdp, mis, amdp->amb->bufferMain);
}

// initMarkov2DynProg
// file markov.c line 352
void initMarkov2DynProg(struct AmarkovDynProg *amdp, struct markov2DynProg *m2dp, struct markovImprobaStruct *mis)
{
  unsigned int minImproba = mis->improbaMark2[(signed long int)0][(signed long int)0][(signed long int)0];
  unsigned int i;
  unsigned int c1;
  unsigned int c2;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)12);
  m2dp->rootValue = (unsigned long int *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)26 * (unsigned long int)(12 - 1));
  m2dp->firstLine = (unsigned long int *)return_value_malloc_2;
  m2dp->threshold = mis->meanImprobaMark0 * (unsigned int)12;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)12);
  amdp->rootValue = (unsigned int *)return_value_malloc_3;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)26 * (unsigned long int)(12 - 1));
  amdp->firstLine = (unsigned int *)return_value_malloc_4;
  amdp->threshold = mis->meanImprobaMark0 * (unsigned int)12;
  void *return_value_malloc_5;
  return_value_malloc_5=malloc(sizeof(struct aliasMarkovBuffer) /*48ul*/ );
  amdp->amb = (struct aliasMarkovBuffer *)return_value_malloc_5;
  i = (unsigned int)0;
  for( ; !(i >= 12u); i = i + 1u)
    m2dp->rootValue[(signed long int)i] = (unsigned long int)0xffffffffffffffff;
  i = (unsigned int)0;
  for( ; !(i >= 286u); i = i + 1u)
    m2dp->firstLine[(signed long int)i] = (unsigned long int)0xffffffffffffffff;
  c1 = (unsigned int)0;
  for( ; !(c1 >= 26u); c1 = c1 + 1u)
  {
    c2 = (unsigned int)0;
    for( ; !(c2 >= 26u); c2 = c2 + 1u)
    {
      i = (unsigned int)0;
      for( ; !(i >= 26u); i = i + 1u)
        if(!(mis->improbaMark2[(signed long int)c1][(signed long int)c2][(signed long int)i] >= minImproba))
          minImproba = mis->improbaMark2[(signed long int)c1][(signed long int)c2][(signed long int)i];

    }
    i = (unsigned int)0;
    for( ; !(i >= 26u); i = i + 1u)
      if(!(mis->improbaMark1[(signed long int)c1][(signed long int)i] >= minImproba))
        minImproba = mis->improbaMark1[(signed long int)c1][(signed long int)i];

  }
  i = (unsigned int)0;
  for( ; !(i >= 26u); i = i + 1u)
    if(!(mis->improbaFirst[(signed long int)i] >= minImproba))
      minImproba = mis->improbaFirst[(signed long int)i];

  m2dp->minImproba = minImproba;
  m2dp->bufferWidth = (unsigned int)1 + (unsigned int)12 * (mis->meanImprobaMark0 - minImproba);
  amdp->minImproba = minImproba;
  amdp->bufferWidth = (unsigned int)1 + (unsigned int)12 * (mis->meanImprobaMark0 - minImproba);
  void *return_value_malloc_6;
  return_value_malloc_6=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)26 * (unsigned long int)26 * (unsigned long int)m2dp->bufferWidth * (unsigned long int)(12 - 2));
  amdp->buffer = (unsigned int *)return_value_malloc_6;
  c1 = (unsigned int)0;
  for( ; !(c1 >= 26u); c1 = c1 + 1u)
  {
    c2 = (unsigned int)0;
    for( ; !(c2 >= 26u); c2 = c2 + 1u)
    {
      void *return_value_malloc_7;
      return_value_malloc_7=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)m2dp->bufferWidth * (unsigned long int)(12 - 2));
      m2dp->buffer[(signed long int)c1][(signed long int)c2] = (unsigned long int *)return_value_malloc_7;
      i = (unsigned int)0;
      for( ; !(i >= 10u * m2dp->bufferWidth); i = i + 1u)
        m2dp->buffer[(signed long int)c1][(signed long int)c2][(signed long int)i] = (unsigned long int)0xffffffffffffffff;
    }
  }
  i = (unsigned int)1;
  for( ; !(i >= 13u); i = i + 1u)
    getMarkov2DynProgRootValue(m2dp, mis, i);
  amdp->amb->size_bufferRoot=getMark2BufferSizeRoot(m2dp);
  amdp->amb->size_bufferFLine=getMark2BufferSizeFLine(m2dp);
  amdp->amb->size_bufferMain=getMark2BufferSizeMain(m2dp);
  void *return_value_malloc_8;
  return_value_malloc_8=malloc(amdp->amb->size_bufferRoot);
  amdp->amb->bufferRoot = (char *)return_value_malloc_8;
  void *return_value_malloc_9;
  return_value_malloc_9=malloc(amdp->amb->size_bufferFLine);
  amdp->amb->bufferFLine = (char *)return_value_malloc_9;
  void *return_value_malloc_10;
  return_value_malloc_10=malloc(amdp->amb->size_bufferMain);
  amdp->amb->bufferMain = (char *)return_value_malloc_10;
  fillAliasMarkov2BufferRoot(m2dp, amdp, mis, amdp->amb->bufferRoot);
  fillAliasMarkov2BufferFLine(m2dp, amdp, mis, amdp->amb->bufferFLine);
  fillAliasMarkov2BufferMain(m2dp, amdp, mis, amdp->amb->bufferMain);
}

// initMarkovDynProgWrapper
// file ./ntproba/markov.h line 116
signed int initMarkovDynProgWrapper(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, enum markovType type)
{
  mdpw->type = type;
  mdpw->m0dp = (struct markov0DynProg *)(void *)0;
  mdpw->m1dp = (struct markov1DynProg *)(void *)0;
  mdpw->m2dp = (struct markov2DynProg *)(void *)0;
  mdpw->amdp = (struct AmarkovDynProg *)(void *)0;
  void *return_value_malloc_1;
  void *return_value_malloc_2;
  void *return_value_malloc_3;
  void *return_value_malloc_4;
  void *return_value_malloc_5;
  void *return_value_malloc_6;
  switch((signed int)mdpw->type)
  {
    case NO_MARK:
      break;
    case MARK0:
    {
      return_value_malloc_1=malloc(sizeof(struct markov0DynProg) /*40ul*/ );
      mdpw->m0dp = (struct markov0DynProg *)return_value_malloc_1;
      return_value_malloc_2=malloc(sizeof(struct AmarkovDynProg) /*48ul*/ );
      mdpw->amdp = (struct AmarkovDynProg *)return_value_malloc_2;
      initAMarkov0DynProg(mdpw->amdp, mdpw->m0dp, mis);
      break;
    }
    case MARK1:
    {
      return_value_malloc_3=malloc(sizeof(struct markov1DynProg) /*240ul*/ );
      mdpw->m1dp = (struct markov1DynProg *)return_value_malloc_3;
      return_value_malloc_4=malloc(sizeof(struct AmarkovDynProg) /*48ul*/ );
      mdpw->amdp = (struct AmarkovDynProg *)return_value_malloc_4;
      initMarkov1DynProg(mdpw->amdp, mdpw->m1dp, mis);
      break;
    }
    case MARK2:
    {
      return_value_malloc_5=malloc(sizeof(struct markov2DynProg) /*5440ul*/ );
      mdpw->m2dp = (struct markov2DynProg *)return_value_malloc_5;
      return_value_malloc_6=malloc(sizeof(struct AmarkovDynProg) /*48ul*/ );
      mdpw->amdp = (struct AmarkovDynProg *)return_value_malloc_6;
      initMarkov2DynProg(mdpw->amdp, mdpw->m2dp, mis);
    }
  }
  return 1;
}

// list_add_head
// file list.h line 82
void list_add_head(struct list_t_ *l, void *data)
{
  struct list_nd_t_ *nd;
  nd=list_nd_alloc(data);
  struct list_nd_t_ *old = l->head;
  nd->next = old;
  l->head = nd;
  l->size = l->size + 1;
  if(!(old == ((struct list_nd_t_ *)NULL)))
    old->prev = nd;

  else
    l->tail = nd;
}

// list_add_tail
// file list.h line 89
void list_add_tail(struct list_t_ *l, void *data)
{
  struct list_nd_t_ *nd;
  nd=list_nd_alloc(data);
  struct list_nd_t_ *old = l->tail;
  nd->prev = old;
  l->tail = nd;
  l->size = l->size + 1;
  if(!(old == ((struct list_nd_t_ *)NULL)))
    old->next = nd;

  else
    l->head = nd;
}

// list_alloc
// file list.h line 61
struct list_t_ * list_alloc(void)
{
  struct list_t_ *l;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct list_t_) /*24ul*/ );
  l = (struct list_t_ *)return_value_malloc_1;
  l->size = 0;
  l->head = ((struct list_nd_t_ *)NULL);
  l->tail = ((struct list_nd_t_ *)NULL);
  return l;
}

// list_clear
// file list.h line 75
void list_clear(struct list_t_ *l)
{
  while(!(l->size == 0))
    list_rem_head(l);
}

// list_free
// file list.h line 71
void list_free(struct list_t_ *l)
{
  list_clear(l);
  free((void *)l);
}

// list_nd_alloc
// file list.c line 125
struct list_nd_t_ * list_nd_alloc(void *data)
{
  struct list_nd_t_ *nd;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct list_nd_t_) /*24ul*/ );
  nd = (struct list_nd_t_ *)return_value_malloc_1;
  nd->next = ((struct list_nd_t_ *)NULL);
  nd->prev = ((struct list_nd_t_ *)NULL);
  nd->data = data;
  return nd;
}

// list_nd_free
// file list.c line 135
void * list_nd_free(struct list_nd_t_ *nd)
{
  void *data = nd->data;
  free((void *)nd);
  return data;
}

// list_rem_head
// file list.c line 89
void * list_rem_head(struct list_t_ *l)
{
  struct list_nd_t_ *nd = l->head;
  if(nd == ((struct list_nd_t_ *)NULL))
    return NULL;

  else
  {
    struct list_nd_t_ *old = nd->next;
    l->head = old;
    l->size = l->size - 1;
    if(!(old == ((struct list_nd_t_ *)NULL)))
      old->prev = ((struct list_nd_t_ *)NULL);

    else
      l->tail = ((struct list_nd_t_ *)NULL);
    void *return_value_list_nd_free_1;
    return_value_list_nd_free_1=list_nd_free(nd);
    return return_value_list_nd_free_1;
  }
}

// list_rem_tail
// file list.c line 107
void * list_rem_tail(struct list_t_ *l)
{
  struct list_nd_t_ *nd = l->tail;
  if(nd == ((struct list_nd_t_ *)NULL))
    return NULL;

  else
  {
    struct list_nd_t_ *old = nd->prev;
    l->tail = old;
    l->size = l->size - 1;
    if(!(old == ((struct list_nd_t_ *)NULL)))
      old->next = ((struct list_nd_t_ *)NULL);

    else
      l->head = ((struct list_nd_t_ *)NULL);
    void *return_value_list_nd_free_1;
    return_value_list_nd_free_1=list_nd_free(nd);
    return return_value_list_nd_free_1;
  }
}

// lm_from_nt
// file ophcrack.c line 2407
char * lm_from_nt(const char *pwd, signed int n, const unsigned char *lmhash)
{
  unsigned char tmp[8l] = { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned char hash[8l] = { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0 };
  signed int i;
  memcpy((void *)tmp, (const void *)pwd, (unsigned long int)n);
  i = 0;
  _Bool tmp_if_expr_1;
  for( ; !(i >= n); i = i + 1)
  {
    if((signed int)tmp[(signed long int)i] >= 97)
      tmp_if_expr_1 = (signed int)tmp[(signed long int)i] <= 122 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
      tmp[(signed long int)i] = (unsigned char)((signed int)tmp[(signed long int)i] + -97 + 65);

    else
      switch((signed int)tmp[(signed long int)i])
      {
        case 0xc3:

        case 0xe3:

        case 0xc2:

        case 0xc0:

        case 0xe2:

        case 0xe0:
        {
          tmp[(signed long int)i] = (unsigned char)65;
          break;
        }
        case 0xcb:

        case 0xeb:

        case 0xea:

        case 0xca:

        case 0xe8:

        case 0xc8:
        {
          tmp[(signed long int)i] = (unsigned char)69;
          break;
        }
        case 0xcd:

        case 0xed:

        case 0xcf:

        case 0xce:

        case 0xef:

        case 0xee:
        {
          tmp[(signed long int)i] = (unsigned char)73;
          break;
        }
        case 0xd5:

        case 0xd3:

        case 0xf5:

        case 0xf3:

        case 0xd4:

        case 0xf4:
        {
          tmp[(signed long int)i] = (unsigned char)79;
          break;
        }
        case 0xda:

        case 0xfa:

        case 0xdb:

        case 0xd9:

        case 0xfb:

        case 0xf9:
        {
          tmp[(signed long int)i] = (unsigned char)85;
          break;
        }
        case 0xe4:
        {
          tmp[(signed long int)i] = (unsigned char)0xc4;
          break;
        }
        case 0xe7:
        {
          tmp[(signed long int)i] = (unsigned char)0xe7;
          break;
        }
        case 0xe9:
        {
          tmp[(signed long int)i] = (unsigned char)0xc9;
          break;
        }
        case 0xf1:
        {
          tmp[(signed long int)i] = (unsigned char)0xd1;
          break;
        }
        case 0xf6:
        {
          tmp[(signed long int)i] = (unsigned char)0xd6;
          break;
        }
        case 0xfc:
          tmp[(signed long int)i] = (unsigned char)0xdc;
      }
  }
  lmtable_mkhash((unsigned char *)tmp, hash);
  signed int return_value_memcmp_3;
  return_value_memcmp_3=memcmp((const void *)lmhash, (const void *)hash, sizeof(unsigned char [8l]) /*8ul*/ );
  char *return_value___strdup_2;
  if(return_value_memcmp_3 == 0)
  {
    return_value___strdup_2=__strdup((char *)tmp);
    return return_value___strdup_2;
  }

  else
    return ((char *)NULL);
}

// lmflash_bin69
// file lmflash.c line 141
unsigned long int lmflash_bin69(unsigned char *input)
{
  signed int i = 0;
  unsigned long int sum = (unsigned long int)0;
  unsigned long int offset = 7446353252589ULL;
  i = 0;
  for( ; !(i >= 7); i = i + 1)
    if(!(input[(signed long int)i] == 0))
    {
      char *x1;
      void *return_value_memchr_1;
      return_value_memchr_1=memchr((const void *)extended_chars_link3, (signed int)input[(signed long int)i], (unsigned long int)73);
      x1 = (char *)return_value_memchr_1;
      char *x2 = (char *)extended_chars_link3;
      sum = sum * (unsigned long int)69 + (unsigned long int)(x1 - x2);
    }

    else
    {
      sum = sum + offset;
      offset = offset / (unsigned long int)69;
    }
  return sum;
}

// lmflash_find
// file lmflash.c line 62
void lmflash_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[8l];
  lmtable_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    lmtable_mkhash(pwd, tmp);
    lmtable_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned long int pw_bin;
  pw_bin=lmflash_bin69(pwd);
  unsigned int prefix = (unsigned int)(pw_bin >> 17 & (unsigned long int)0x00000000FFFFFFFF);
  unsigned short int postfix = (unsigned short int)(pw_bin & (unsigned long int)0x000000000000FFFF);
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// lmflash_lookup_srt
// file lmflash.c line 99
signed int lmflash_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  memset((void *)pwd, 0, (unsigned long int)8);
  lmflash_unbin69(start, pwd);
  return 1;
}

// lmflash_setup
// file lmflash.h line 44
signed int lmflash_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 2200;
  tbl->offset = 100000;
  tbl->sizes = lmflash_sizes;
  tbl->find = lmflash_find;
  tbl->check = lmtable_check;
  tbl->isvalid = lmtable_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = lmflash_lookup_srt;
  return 1;
}

// lmflash_unbin69
// file lmflash.c line 161
void lmflash_unbin69(unsigned int input, unsigned char *output)
{
  signed int i = 0;
  i = 5;
  for( ; i >= 0; i = i - 1)
  {
    output[(signed long int)i] = extended_chars_link3[(signed long int)(input % (unsigned int)69)];
    input = input / (unsigned int)69;
  }
}

// lmgerman_bin73
// file lmgerman.c line 270
unsigned long int lmgerman_bin73(unsigned char *input)
{
  signed int i = 0;
  unsigned long int sum = (unsigned long int)0;
  i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(i >= 7))
      tmp_if_expr_1 = input[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    char *x1;
    void *return_value_memchr_2;
    return_value_memchr_2=memchr((const void *)lmgerman_chars, (signed int)input[(signed long int)i], (unsigned long int)73);
    x1 = (char *)return_value_memchr_2;
    char *x2 = (char *)lmgerman_chars;
    sum = sum * (unsigned long int)73 + (unsigned long int)(x1 - x2);
    i = i + 1;
  }
  while((_Bool)1);
  return sum;
}

// lmgerman_check
// file lmgerman.c line 143
signed int lmgerman_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[8l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    lmtable_mkhash(pwd, tmp);
    lmgerman_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  lmtable_mkhash(pwd, tmp);
  wincp1252_to_ascii(pwd);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, (unsigned long int)8);
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// lmgerman_find
// file lmgerman.c line 62
void lmgerman_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[8l];
  lmgerman_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    lmtable_mkhash(pwd, tmp);
    lmgerman_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned long int pw_bin;
  pw_bin=lmgerman_bin73(pwd);
  unsigned int prefix = (unsigned int)(pw_bin >> 18 & (unsigned long int)0x00000000FFFFFFFF);
  unsigned short int postfix = (unsigned short int)(pw_bin & (unsigned long int)0x000000000000FFFF);
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// lmgerman_isvalid
// file lmgerman.c line 188
signed int lmgerman_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  _Bool tmp_if_expr_1;
  if((signed int)hsh->kind == lm1)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)hsh->kind == lm2 ? (_Bool)1 : (_Bool)0;
  return tmp_if_expr_1 ? 1 : 0;
}

// lmgerman_lookup_srt
// file lmgerman.c line 99
signed int lmgerman_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  pwd[(signed long int)5] = (unsigned char)0;
  pwd[(signed long int)6] = (unsigned char)0;
  pwd[(signed long int)7] = (unsigned char)0;
  lmgerman_unbin36(start, pwd);
  return 1;
}

// lmgerman_mkredux
// file lmgerman.c line 194
void lmgerman_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  const unsigned char *charset = extended_chars_link1;
  signed int chars_size = (signed int)sizeof(const unsigned char [69l]) /*69ul*/ ;
  signed int lmgerman_chars_size = 4;
  unsigned int idx[2l];
  unsigned int int_hash[2l];
  int_hash[(signed long int)0] = *((unsigned int *)hash);
  int_hash[(signed long int)1] = *((unsigned int *)(hash + (signed long int)4));
  idx[(signed long int)0] = int_hash[(signed long int)0] ^ (unsigned int)n_redux;
  idx[(signed long int)1] = int_hash[(signed long int)1];
  signed int n = (signed int)idx[(signed long int)1];
  unsigned char len;
  unsigned char k;
  unsigned char x = (unsigned char)0;
  unsigned char rank;
  unsigned char i;
  unsigned char j = (unsigned char)0;
  unsigned char chars1[8l];
  unsigned char chars2[8l];
  if(lmgerman_spec_max[0l].max >= (unsigned int)n)
    x = (unsigned char)0;

  else
    if(lmgerman_spec_max[1l].max >= (unsigned int)n)
      x = (unsigned char)1;

    else
      if(lmgerman_spec_max[2l].max >= (unsigned int)n)
        x = (unsigned char)2;

      else
      {
        i = (unsigned char)3;
        for( ; !((signed int)i >= 28); i = i + 1)
          if(lmgerman_spec_max[(signed long int)i].max >= (unsigned int)n)
          {
            x = i;
            break;
          }

      }
  len = (unsigned char)lmgerman_spec_max[(signed long int)x].n;
  k = (unsigned char)lmgerman_spec_max[(signed long int)x].k;
  i = (unsigned char)0;
  for( ; !((signed int)i >= (signed int)len + -((signed int)k)) || !((signed int)i >= 4); i = i + 1)
  {
    chars1[(signed long int)i] = charset[(signed long int)(idx[(signed long int)0] % (unsigned int)chars_size)];
    idx[(signed long int)0] = idx[(signed long int)0] / (unsigned int)chars_size;
  }
  i = (unsigned char)4;
  for( ; !((signed int)i >= (signed int)len + -((signed int)k)); i = i + 1)
  {
    chars1[(signed long int)i] = charset[(signed long int)(idx[(signed long int)1] % (unsigned int)chars_size)];
    idx[(signed long int)1] = idx[(signed long int)1] / (unsigned int)chars_size;
  }
  rank = (unsigned char)(idx[(signed long int)1] % (unsigned int)lmgerman_choose[(signed long int)len][(signed long int)k]);
  if((signed int)tbl->kind == lmgermanv2)
    idx[(signed long int)1] = idx[(signed long int)1] / (unsigned int)lmgerman_choose[(signed long int)len][(signed long int)k];

  i = (unsigned char)0;
  for( ; !((signed int)i >= (signed int)k); i = i + 1)
  {
    chars2[(signed long int)i] = lmgerman_chars[(signed long int)(idx[(signed long int)1] % (unsigned int)lmgerman_chars_size)];
    idx[(signed long int)1] = idx[(signed long int)1] / (unsigned int)lmgerman_chars_size;
  }
  i = (unsigned char)0;
  j = (unsigned char)0;
  k = (unsigned char)0;
  for( ; !((signed int)i >= (signed int)len); i = i + 1)
    if(!((1 << (signed int)i & (signed int)lmgerman_ranks[(signed long int)x][(signed long int)rank]) == 0))
    {
      pwd[(signed long int)i] = chars2[(signed long int)k];
      k = k + 1;
    }

    else
    {
      pwd[(signed long int)i] = chars1[(signed long int)j];
      j = j + 1;
    }
  i = len;
  for( ; !((signed int)i >= 7); i = i + 1)
    pwd[(signed long int)i] = (unsigned char)0;
}

// lmgerman_setup
// file lmgerman.c line 44
signed int lmgerman_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 14000;
  tbl->offset = 14000;
  tbl->sizes = lmgerman_sizes;
  tbl->find = lmgerman_find;
  tbl->check = lmgerman_check;
  tbl->isvalid = lmgerman_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = lmgerman_lookup_srt;
  return 1;
}

// lmgerman_unbin36
// file lmgerman.c line 284
void lmgerman_unbin36(unsigned int input, unsigned char *output)
{
  signed int i = 0;
  i = 5;
  for( ; i >= 0; i = i - 1)
  {
    output[(signed long int)i] = lmgerman_chars[(signed long int)(input % (unsigned int)36 + (unsigned int)4)];
    input = input / (unsigned int)36;
  }
}

// lmtable_check
// file lmtable.c line 341
signed int lmtable_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[8l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    lmtable_mkhash(pwd, tmp);
    lmtable_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  lmtable_mkhash(pwd, tmp);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, (unsigned long int)8);
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// lmtable_find
// file lmtable.c line 85
void lmtable_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[8l];
  lmtable_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    lmtable_mkhash(pwd, tmp);
    lmtable_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  char *charset = ((char *)NULL);
  signed int chars_size = 0;
  switch((signed int)tbl->kind)
  {
    case lmalphanum5k:

    case lmalphanum10k:
    {
      charset = (char *)alphanum_chars;
      chars_size = (signed int)sizeof(const unsigned char [36l]) /*36ul*/ ;
      break;
    }
    case lmextended:
    {
      charset = (char *)extended_chars;
      chars_size = (signed int)sizeof(const unsigned char [69l]) /*69ul*/ ;
    }
  }
  signed int i;
  signed int len0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen((char *)pwd);
  len0 = (signed int)return_value_strlen_1;
  signed int len = len0 < 4 ? len0 : 4;
  unsigned int prefix = (unsigned int)0;
  unsigned long int offset = (unsigned long int)(chars_size * chars_size * chars_size * chars_size);
  char *p;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    char *return_value___builtin_strchr_2;
    return_value___builtin_strchr_2=__builtin_strchr(charset, (signed int)pwd[(signed long int)i]);
    p = return_value___builtin_strchr_2;
    if(!(i >= len))
      prefix = (unsigned int)((signed long int)(prefix * (unsigned int)chars_size) + (p - charset));

    else
    {
      prefix = prefix + (unsigned int)offset;
      offset = offset / (unsigned long int)chars_size;
    }
  }
  el->prefix = (unsigned long int)prefix;
  unsigned short int postfix = (unsigned short int)0;
  len = len0 > 4 ? len0 - 4 : 0;
  offset = (unsigned long int)(chars_size * chars_size * chars_size);
  i = 0;
  for( ; !(i >= 3); i = i + 1)
  {
    char *return_value___builtin_strchr_3;
    return_value___builtin_strchr_3=__builtin_strchr(charset, (signed int)pwd[(signed long int)(i + 4)]);
    p = return_value___builtin_strchr_3;
    if(!(i >= len))
      postfix = (unsigned short int)((signed long int)((signed int)postfix * chars_size) + (p - charset));

    else
    {
      postfix = postfix + (unsigned short int)offset;
      offset = offset / (unsigned long int)chars_size;
    }
  }
  el->postfix = (unsigned long int)postfix;
}

// lmtable_isvalid
// file lmtable.c line 385
signed int lmtable_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  _Bool tmp_if_expr_1;
  if((signed int)hsh->kind == lm1)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)hsh->kind == lm2 ? (_Bool)1 : (_Bool)0;
  return tmp_if_expr_1 ? 1 : 0;
}

// lmtable_lookup_end
// file lmtable.c line 229
signed int lmtable_lookup_end(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  struct ophstat_t_ *stat = el->stat;
  unsigned short int postfix = (unsigned short int)el->postfix;
  unsigned long int low = el->low;
  unsigned long int high = el->high;
  unsigned long int n = high - low;
  unsigned long int i;
  unsigned long int offset = (unsigned long int)2 * low;
  if(!(tbl->endmem == ((char *)NULL)))
  {
    unsigned short int *mem = (unsigned short int *)(tbl->endmem + (signed long int)offset);
    i = (unsigned long int)0;
    for( ; !(i >= n); i = i + 1ul)
      if(mem[(signed long int)i] == postfix)
        break;

  }

  else
  {
    unsigned short int pfix[512l];
    struct _IO_FILE *endfile = tbl->endfile;
    fseeko(endfile, (signed long int)offset, 0);
    fread((void *)pfix, sizeof(unsigned short int) /*2ul*/ , n, endfile);
    stat->fseek_end = stat->fseek_end + 1ul;
    i = (unsigned long int)0;
    for( ; !(i >= n); i = i + 1ul)
      if(pfix[(signed long int)i] == postfix)
        break;

  }
  el->offset = (unsigned long int)4 * (low + i);
  if(!(i >= n))
    stat->postfix = stat->postfix + 1ul;

  return i == n ? 0 : 1;
}

// lmtable_lookup_idx
// file lmtable.c line 178
signed int lmtable_lookup_idx(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned int prefix = (unsigned int)el->prefix;
  struct ophstat_t_ *stat = el->stat;
  stat->prefix = stat->prefix + 1ul;
  if((unsigned long int)((1u + prefix) * 4u) == tbl->idxsize)
    prefix = prefix - 1u;

  if(!(tbl->idxmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->idxmem + (signed long int)((unsigned int)4 * prefix));
    el->low = (unsigned long int)mem[(signed long int)0];
    el->high = (unsigned long int)mem[(signed long int)1];
  }

  else
  {
    struct _IO_FILE *idxfile = tbl->idxfile;
    el->low = (unsigned long int)0;
    el->high = (unsigned long int)0;
    fseeko(idxfile, (signed long int)((unsigned int)4 * prefix), 0);
    fread((void *)&el->low, (unsigned long int)4, (unsigned long int)1, idxfile);
    fread((void *)&el->high, (unsigned long int)4, (unsigned long int)1, idxfile);
    stat->fseek_idx = stat->fseek_idx + 1ul;
  }
  if((unsigned long int)((1u + prefix) * 4u) == tbl->idxsize)
    el->high = tbl->endsize / (unsigned long int)2;

  if(prefix == 0u)
    el->low = (unsigned long int)0;

  if(el->high == 0ul)
  {
    if(!(el->low == 0ul))
      el->high = tbl->endsize / (unsigned long int)2;

  }

  el->low = el->low;
  el->high = el->high;
  return 1;
}

// lmtable_lookup_srt
// file lmtable.c line 274
signed int lmtable_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  signed int i;
  unsigned char *pwd = (unsigned char *)el->pwd;
  unsigned char *charset = ((unsigned char *)NULL);
  switch((signed int)tbl->kind)
  {
    case lmalphanum5k:

    case lmalphanum10k:
    {
      charset = (unsigned char *)alphanum_chars;
      break;
    }
    case lmextended:
      charset = (unsigned char *)extended_chars;
  }
  start = start & (unsigned int)0x3FFFFFFF;
  pwd[(signed long int)6] = (unsigned char)0;
  pwd[(signed long int)7] = (unsigned char)0;
  i = 5;
  for( ; i >= 0; i = i - 1)
  {
    pwd[(signed long int)i] = charset[(signed long int)(start % (unsigned int)36)];
    start = start / (unsigned int)36;
  }
  return 1;
}

// lmtable_mkhash
// file lmtable.c line 471
void lmtable_mkhash(unsigned char *pwd, unsigned char *hash)
{
  unsigned char key[8l];
  struct DES_ks ks;
  unsigned char (*magic)[8l] = (unsigned char (*)[8l])lmmagic;
  key[(signed long int)0] = pwd[(signed long int)0];
  key[(signed long int)1] = (unsigned char)((signed int)pwd[(signed long int)0] << 7 | (signed int)pwd[(signed long int)1] >> 1);
  key[(signed long int)2] = (unsigned char)((signed int)pwd[(signed long int)1] << 6 | (signed int)pwd[(signed long int)2] >> 2);
  key[(signed long int)3] = (unsigned char)((signed int)pwd[(signed long int)2] << 5 | (signed int)pwd[(signed long int)3] >> 3);
  key[(signed long int)4] = (unsigned char)((signed int)pwd[(signed long int)3] << 4 | (signed int)pwd[(signed long int)4] >> 4);
  key[(signed long int)5] = (unsigned char)((signed int)pwd[(signed long int)4] << 3 | (signed int)pwd[(signed long int)5] >> 5);
  key[(signed long int)6] = (unsigned char)((signed int)pwd[(signed long int)5] << 2 | (signed int)pwd[(signed long int)6] >> 6);
  key[(signed long int)7] = (unsigned char)((signed int)pwd[(signed long int)6] << 1);
  DES_set_odd_parity(&key);
  DES_set_key(&key, &ks);
  DES_ecb_encrypt(magic, (unsigned char (*)[8l])hash, &ks, 1);
}

// lmtable_mkredux
// file lmtable.c line 391
void lmtable_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  signed int i;
  signed int n;
  unsigned int *max = ((unsigned int *)NULL);
  unsigned char *charset = ((unsigned char *)NULL);
  signed int chars_size = 0;
  switch((signed int)tbl->kind)
  {
    case lmalphanum5k:

    case lmalphanum10k:
    {
      max = (unsigned int *)alphanum_max;
      charset = (unsigned char *)alphanum_chars;
      chars_size = (signed int)sizeof(const unsigned char [36l]) /*36ul*/ ;
      break;
    }
    case lmextended:
    {
      max = (unsigned int *)extended_max;
      charset = (unsigned char *)extended_chars;
      chars_size = (signed int)sizeof(const unsigned char [69l]) /*69ul*/ ;
      break;
    }
    case lmflash:
    {
      max = (unsigned int *)lmflash_max;
      charset = (unsigned char *)extended_chars;
      chars_size = (signed int)sizeof(const unsigned char [69l]) /*69ul*/ ;
    }
  }
  unsigned int idx[2l];
  unsigned int int_hash[2l];
  int_hash[(signed long int)0] = *((unsigned int *)hash);
  int_hash[(signed long int)1] = *((unsigned int *)(hash + (signed long int)4));
  idx[(signed long int)0] = int_hash[(signed long int)0] ^ (unsigned int)n_redux;
  idx[(signed long int)1] = int_hash[(signed long int)1];
  n = (signed int)idx[(signed long int)1];
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    pwd[(signed long int)i] = charset[(signed long int)(idx[(signed long int)0] % (unsigned int)chars_size)];
    idx[(signed long int)0] = idx[(signed long int)0] / (unsigned int)chars_size;
  }
  i = 4;
  for( ; !(i >= 7); i = i + 1)
  {
    pwd[(signed long int)i] = charset[(signed long int)(idx[(signed long int)1] % (unsigned int)chars_size)];
    idx[(signed long int)1] = idx[(signed long int)1] / (unsigned int)chars_size;
  }
  if(!((unsigned int)n >= max[7l]))
  {
    pwd[(signed long int)6] = (unsigned char)0;
    if(!((unsigned int)n >= max[6l]))
    {
      pwd[(signed long int)5] = (unsigned char)0;
      if(!((unsigned int)n >= max[5l]))
      {
        pwd[(signed long int)4] = (unsigned char)0;
        if(!((unsigned int)n >= max[4l]))
        {
          pwd[(signed long int)3] = (unsigned char)0;
          if(!((unsigned int)n >= max[3l]))
          {
            pwd[(signed long int)2] = (unsigned char)0;
            if(!((unsigned int)n >= max[2l]))
              pwd[(signed long int)1] = (unsigned char)0;

          }

        }

      }

    }

  }

}

// lmtable_setup
// file lmtable.c line 48
signed int lmtable_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  switch((signed int)tbl->kind)
  {
    case lmalphanum10k:
    {
      tbl->ncols = 10000;
      tbl->offset = 10000;
      tbl->sizes = lmalphanum10k_sizes;
      break;
    }
    case lmalphanum5k:
    {
      tbl->ncols = 5000;
      tbl->offset = 10000;
      tbl->sizes = lmalphanum5k_sizes;
      break;
    }
    case lmextended:
    {
      tbl->ncols = 20479;
      tbl->offset = 71538;
      tbl->sizes = lmextended_sizes;
    }
  }
  tbl->find = lmtable_find;
  tbl->check = lmtable_check;
  tbl->isvalid = lmtable_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = lmtable_lookup_srt;
  return 1;
}

// load_config
// file main.c line 98
void load_config(struct arg_t_ *arg)
{
  char buff[512l];
  signed int return_value_arg_read_conf_2;
  if(arg->cfname == ((char *)NULL))
  {
    char *home;
    home=getenv("HOME");
    snprintf(buff, sizeof(char [512l]) /*512ul*/ , "%s/.ophcrackrc", home);
    char *return_value___strdup_1;
    return_value___strdup_1=__strdup(buff);
    arg->cfname = return_value___strdup_1;
    arg_read_conf(arg);
  }

  else
  {
    return_value_arg_read_conf_2=arg_read_conf(arg);
    if(return_value_arg_read_conf_2 == -1)
    {
      fprintf(stderr, "Cannot open file %s for reading.\n", arg->cfname);
      exit(1);
    }

  }
}

// load_hashes_pwdump
// file main.c line 208
signed int load_hashes_pwdump(struct ophcrack_t_ *crack, signed int id)
{
  struct arg_t_ *arg = crack->arg;
  const char *hfname = arg->hfname;
  struct _IO_FILE *file;
  file=fopen(hfname, "r");
  if(file == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Cannot open file %s.\n", hfname);
    exit(1);
  }

  struct list_t_ *hashes;
  hashes=list_alloc();
  signed int npwds;
  npwds=hash_load_pwdump(hashes, file, id);
  signed int nhashes = hashes->size;
  fclose(file);
  _Bool tmp_if_expr_1;
  if(npwds == 0)
  {
    fprintf(stderr, "No proper hashes have been found in %s.\n", hfname);
    exit(1);
  }

  else
    if(arg->use_gui == 0)
    {
      if(arg->quiet == 0)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = arg->lfile != stdout ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        fprintf(arg->lfile, "%d hashes have been found in %s.\n", nhashes, hfname);

    }

  struct list_nd_t_ *nd = hashes->head;
  for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
  {
    struct hash_t_ *hsh = (struct hash_t_ *)nd->data;
    ophcrack_add_hash(crack, hsh);
  }
  list_free(hashes);
  return npwds;
}

// load_hashes_sam
// file main.c line 249
signed int load_hashes_sam(struct ophcrack_t_ *crack, signed int id)
{
  struct arg_t_ *arg = crack->arg;
  const char *dir = arg->samdir;
  struct list_t_ *hashes;
  hashes=list_alloc();
  signed int npwds;
  npwds=hash_load_sam(hashes, dir, id);
  signed int nhashes = hashes->size;
  _Bool tmp_if_expr_1;
  if(npwds == 0)
  {
    fprintf(stderr, "No proper hashes have been found in the encrypted SAM file in %s.\n", arg->samdir);
    exit(1);
  }

  else
    if(npwds >= 1)
    {
      if(arg->use_gui == 0)
      {
        if(arg->quiet == 0)
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = arg->lfile != stdout ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          fprintf(arg->lfile, "%d hashes have been found in the encrypted SAM found in %s.\n\n", nhashes, dir);

      }

    }

  if(npwds == -1)
  {
    fprintf(stderr, "No SYSTEM file has been found in %s.\n", arg->samdir);
    exit(1);
  }

  else
    if(npwds == -2)
    {
      fprintf(stderr, "No SAM file has been found in %s.\n", arg->samdir);
      exit(1);
    }

    else
      if(npwds == -3)
      {
        fprintf(stderr, "A problem occured while reading the SYSTEM file found in %s.\n", arg->samdir);
        exit(1);
      }

      else
        if(npwds == -4)
        {
          fprintf(stderr, "A problem occured while reading the SAM file found in %s.\n", arg->samdir);
          exit(1);
        }

  struct list_nd_t_ *nd = hashes->head;
  for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
  {
    struct hash_t_ *hsh = (struct hash_t_ *)nd->data;
    ophcrack_add_hash(crack, hsh);
  }
  list_free(hashes);
  return npwds;
}

// load_tables
// file main.c line 125
signed int load_tables(struct ophcrack_t_ *crack, struct arg_t_ *arg, struct list_t_ *table_str)
{
  struct list_nd_t_ *tnd;
  struct list_nd_t_ *dnd;
  struct list_t_ *table_path = arg->table_path;
  struct list_t_ *tables;
  tables=list_alloc();
  tnd = table_str->head;
  _Bool tmp_if_expr_1;
  for( ; !(tnd == ((struct list_nd_t_ *)NULL)); tnd = tnd->next)
  {
    char *tblstr = (char *)tnd->data;
    dnd = table_path->head;
    for( ; !(dnd == ((struct list_nd_t_ *)NULL)); dnd = dnd->next)
    {
      char *dir = (char *)dnd->data;
      signed int ret;
      ret=table_open(tables, dir, tblstr);
      if(ret >= 0)
      {
        if(arg->use_gui == 0)
        {
          if(ret >= 1)
          {
            if(arg->quiet == 0)
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = arg->lfile != stdout ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_1)
            {
              if(!((signed int)*dir == 0))
                fprintf(arg->lfile, "Opened %d table(s) from %s/%s.\n", ret, dir, tblstr);

              else
                fprintf(arg->lfile, "Opened %d table(s) from %s.\n", ret, tblstr);
            }

          }

        }

        break;
      }

      else
        if(arg->use_gui == 0)
        {
          if(!(ret >= -1))
          {
            fprintf(stderr, "Cannot open the table(s) %s.\n", tblstr);
            exit(1);
          }

        }

    }
    if(arg->use_gui == 0)
    {
      if(dnd == ((struct list_nd_t_ *)NULL))
      {
        fprintf(stderr, "Did not find the requested table(s) %s.\n", tblstr);
        exit(1);
      }

    }

  }
  signed int ntables = tables->size;
  if(arg->use_gui == 0)
  {
    if(ntables == 0)
    {
      fprintf(stderr, "No tables were loaded. Use the -t option to specify some.\n");
      exit(1);
    }

  }

  struct list_nd_t_ *nd = tables->head;
  for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
  {
    struct table_t_ *tbl = (struct table_t_ *)nd->data;
    ophcrack_setup_table(tbl);
    signed int load_tables__1__3__1__ret;
    load_tables__1__3__1__ret=table_verify(tbl);
    if(load_tables__1__3__1__ret >= 1)
      ophcrack_add_table(crack, tbl);

    else
      if(arg->use_gui == 0)
      {
        if(!(load_tables__1__3__1__ret >= 0))
          fprintf(stderr, "Size of table(s) %s,%d is invalid. Download it again.\n", tbl->name, tbl->idx);

      }

  }
  list_free(tables);
  return ntables;
}

// main
// file main.c line 688
signed int main(signed int argc, char **argv)
{
  struct arg_t_ *arg;
  arg=arg_alloc();
  signed int c;
  char *return_value___strdup_1;
  return_value___strdup_1=__strdup("");
  list_add_tail(arg->table_path, (void *)return_value___strdup_1);
  if(argc == 1)
  {
    if(arg->use_gui == 0)
      usage();

  }

  signed int i = 1;
  signed int tmp_statement_expression_2;
  signed int tmp_post_3;
  while(!(i >= argc))
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    tmp_post_3 = i;
    i = i + 1;
    signed int return_value___builtin_strcmp_4;
    return_value___builtin_strcmp_4=__builtin_strcmp(argv[(signed long int)tmp_post_3], "-c");
    tmp_statement_expression_2 = return_value___builtin_strcmp_4;
    if(tmp_statement_expression_2 == 0)
      break;

  }
  char *return_value___strdup_5;
  if(!(i >= argc))
  {
    return_value___strdup_5=__strdup(argv[(signed long int)i]);
    arg->cfname = return_value___strdup_5;
  }

  load_config(arg);
  char *return_value___strdup_6;
  char *return_value___strdup_7;
  char *return_value___strdup_8;
  char *return_value___strdup_9;
  char *return_value___strdup_10;
  char *return_value___strdup_11;
  char *return_value___strdup_12;
  char *return_value___strdup_13;
  do
  {
    static const char options[38l] = { 'a', 'A', 'b', 'B', 'c', ':', 'D', 'd', ':', 'e', 'f', ':', 'g', 'h', 'i', 'I', 'l', ':', 'n', ':', 'o', ':', 'p', ':', 'q', 'r', 's', 'S', ':', 't', ':', 'u', 'v', 'w', ':', 'x', ':', 0 };
    c=getopt(argc, argv, options);
    if(c == -1)
      break;

    switch(c)
    {
      case 97:
      {
        arg->auditmode = 0;
        break;
      }
      case 65:
      {
        arg->auditmode = 1;
        break;
      }
      case 98:
      {
        arg->bforce = 0;
        break;
      }
      case 66:
      {
        arg->bforce = 1;
        break;
      }
      case 68:
      {
        arg->debug = 1;
        arg->verbose = 1;
        break;
      }
      case 100:
      {
        return_value___strdup_6=__strdup(optarg);
        list_add_head(arg->table_path, (void *)return_value___strdup_6);
        break;
      }
      case 101:
      {
        arg->showempty = 0;
        break;
      }
      case 102:
      {
        return_value___strdup_7=__strdup(optarg);
        arg->hfname = return_value___strdup_7;
        break;
      }
      case 103:
      {
        arg->use_gui = 0;
        break;
      }
      case 104:
      {
        usage();
        break;
      }
      case 105:
      {
        arg->hideuname = 1;
        break;
      }
      case 73:
      {
        arg->hideuname = 0;
        break;
      }
      case 108:
      {
        return_value___strdup_8=__strdup(optarg);
        arg->lfname = return_value___strdup_8;
        break;
      }
      case 110:
      {
        arg->nthreads=atoi(optarg);
        break;
      }
      case 111:
      {
        return_value___strdup_9=__strdup(optarg);
        arg->ofname = return_value___strdup_9;
        break;
      }
      case 112:
      {
        arg->preload=atoi(optarg);
        break;
      }
      case 113:
      {
        arg->quiet = 1;
        break;
      }
      case 114:
      {
        arg->run = 1;
        break;
      }
      case 115:
      {
        arg->ssave = 0;
        break;
      }
      case 83:
      {
        arg->ssave = 1;
        return_value___strdup_10=__strdup(optarg);
        arg->sfname = return_value___strdup_10;
        break;
      }
      case 116:
      {
        return_value___strdup_11=__strdup(optarg);
        arg->tblstr = return_value___strdup_11;
        break;
      }
      case 117:
      {
        arg->stats = 1;
        break;
      }
      case 118:
      {
        arg->verbose = 1;
        break;
      }
      case 119:
      {
        return_value___strdup_12=__strdup(optarg);
        arg->samdir = return_value___strdup_12;
        break;
      }
      case 120:
      {
        arg->exportcsv = 1;
        return_value___strdup_13=__strdup(optarg);
        arg->xfname = return_value___strdup_13;
        break;
      }
      default:
        ;
    }
  }
  while((_Bool)1);
  if(!(arg->lfname == ((char *)NULL)))
  {
    arg->lfile=fopen(arg->lfname, "w");
    if(arg->lfile == ((struct _IO_FILE *)NULL))
    {
      fprintf(stderr, "Cannot open file %s for writing.\n", arg->lfname);
      exit(1);
    }

  }

  if(arg->use_gui == 0)
  {
    if(!(arg->ofname == ((char *)NULL)))
    {
      struct _IO_FILE *ofile;
      ofile=fopen(arg->ofname, "w");
      if(ofile == ((struct _IO_FILE *)NULL))
      {
        fprintf(stderr, "Cannot open file %s for writing.\n", arg->ofname);
        exit(1);
      }

      else
        fclose(ofile);
    }

  }

  if(arg->use_gui == 0)
  {
    if(!(arg->exportcsv == 0))
    {
      struct _IO_FILE *xfile;
      xfile=fopen(arg->xfname, "w");
      if(xfile == ((struct _IO_FILE *)NULL))
      {
        fprintf(stderr, "Cannot open file %s for writing.\n", arg->xfname);
        exit(1);
      }

      else
        fclose(xfile);
    }

  }

  if(!(arg->ssave == 0))
  {
    if(!(arg->sfname == ((char *)NULL)))
    {
      struct _IO_FILE *sfile;
      sfile=fopen(arg->sfname, "a");
      if(sfile == ((struct _IO_FILE *)NULL))
      {
        fprintf(stderr, "The session file %s you provided either in ", arg->sfname);
        fprintf(stderr, "the config file or on the command line is not writable.\n");
        exit(1);
      }

      else
        fclose(sfile);
    }

  }

  char *tmp_statement_expression_14;
  signed int tmp_statement_expression_16;
  char *return_value___strdup_18;
  if(!(arg->tblstr == ((char *)NULL)))
  {
    struct list_t_ *table_str = arg->table_str_cmd;
    char *tmp;
    do
    {
      char __r0;
      char __r1;
      char __r2;
      char *return_value___strsep_g_15;
      return_value___strsep_g_15=__strsep_g(&arg->tblstr, ":");
      tmp_statement_expression_14 = return_value___strsep_g_15;
      tmp = tmp_statement_expression_14;
      if(tmp == ((char *)NULL))
        break;

      unsigned long int main__1__10__2____s1_len;
      unsigned long int main__1__10__2____s2_len;
      signed int return_value___builtin_strcmp_17;
      return_value___builtin_strcmp_17=__builtin_strcmp(tmp, "");
      tmp_statement_expression_16 = return_value___builtin_strcmp_17;
      if(tmp_statement_expression_16 == 0)
        break;

      return_value___strdup_18=__strdup(tmp);
      list_add_tail(table_str, (void *)return_value___strdup_18);
    }
    while((_Bool)1);
  }

  message_init();
  struct ophcrack_t_ *crack;
  crack=ophcrack_alloc(arg->nthreads, arg);
  ophcrack_start(crack);
  signed int maxhid = 0;
  signed int npwds = 0;
  signed int return_value_load_hashes_pwdump_19;
  if(!(arg->hfname == ((char *)NULL)))
  {
    return_value_load_hashes_pwdump_19=load_hashes_pwdump(crack, maxhid);
    npwds = npwds + return_value_load_hashes_pwdump_19;
  }

  maxhid = crack->maxhid;
  signed int return_value_load_hashes_sam_20;
  if(!(arg->samdir == ((char *)NULL)))
  {
    return_value_load_hashes_sam_20=load_hashes_sam(crack, maxhid);
    npwds = npwds + return_value_load_hashes_sam_20;
  }

  if(arg->use_gui == 0)
  {
    if(npwds == 0)
    {
      fprintf(stderr, "No hash loaded. Use the -f or -w option.\n");
      exit(1);
    }

  }

  if(arg->table_str_cmd->size == 0)
    load_tables(crack, arg, arg->table_str_conf);

  else
    load_tables(crack, arg, arg->table_str_cmd);
  struct list_t_ *tables = crack->tables;
  struct list_t_ *enabled = crack->enabled;
  struct list_nd_t_ *nd;
  list_clear(enabled);
  nd = tables->head;
  for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
  {
    struct table_t_ *tbl = (struct table_t_ *)nd->data;
    if(!(tbl->enabled == 0))
      list_add_tail(enabled, (void *)tbl);

  }
  struct list_t_ *hashes = crack->hashes;
  struct list_nd_t_ *tnd;
  struct list_nd_t_ *hnd = hashes->head;
  for( ; !(hnd == ((struct list_nd_t_ *)NULL)); hnd = hnd->next)
  {
    struct hash_t_ *hsh = (struct hash_t_ *)hnd->data;
    tnd = enabled->head;
    for( ; !(tnd == ((struct list_nd_t_ *)NULL)); tnd = tnd->next)
    {
      struct table_t_ *main__1__13__1__1__1__tbl = (struct table_t_ *)tnd->data;
      ophcrack_associate(crack, hsh, main__1__13__1__1__1__tbl);
    }
  }
  signed int count = 0;
  fsm=fsm_alloc(crack);
  gettimeofday(&tm_main_start, ((struct timezone *)NULL));
  tm_main_total.tv_sec = (signed long int)0;
  fsm_handle_start(fsm);
  while(!((signed int)fsm->state == st_wait))
  {
    handle_messages(crack);
    sleep((unsigned int)1);
    count = count + 1;
    if(!(arg->ssave == 0))
    {
      if(!((st_work1 & (signed int)fsm->state) == 0))
      {
        if(count >= 30)
        {
          fsm_ssave(fsm);
          count = 0;
        }

      }

    }

  }
  _Bool tmp_if_expr_21;
  if(arg->use_gui == 0)
  {
    if(!(arg->stats == 0))
      display_stats(crack);

    if(arg->quiet == 0)
      tmp_if_expr_21 = (_Bool)1;

    else
      tmp_if_expr_21 = arg->lfile != stdout ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_21)
    {
      fprintf(arg->lfile, "\n\nResults:\n\n");
      fprintf(arg->lfile, "%-32s %-14s %s\n", (const void *)"username / hash", (const void *)"LM password", (const void *)"NT password");
      ophcrack_save(crack, arg->lfile, 1, 0);
    }

  }

  if(arg->debug == 0)
  {
    if(arg->quiet == 0)
      printf("\n");

  }

  if(!(arg->lfile == stdout))
    fclose(arg->lfile);

  if(arg->use_gui == 0)
  {
    if(!(arg->ofname == ((char *)NULL)))
    {
      struct _IO_FILE *main__1__16__ofile;
      main__1__16__ofile=fopen(arg->ofname, "w");
      struct _IO_FILE *main__1__16__xfile = ((struct _IO_FILE *)NULL);
      if(!(arg->exportcsv == 0))
        main__1__16__xfile=fopen(arg->xfname, "w");

      signed int fields[13l] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
      if(!(main__1__16__ofile == ((struct _IO_FILE *)NULL)))
      {
        if(!(main__1__16__xfile == ((struct _IO_FILE *)NULL)))
        {
          ophcrack_export_csv(crack, main__1__16__xfile, fields, (char)59, (char)0);
          fclose(main__1__16__xfile);
        }

        ophcrack_save(crack, main__1__16__ofile, 0, 0);
        fclose(main__1__16__ofile);
      }

    }

  }

  return 0;
}

// make_nthash
// file original.c line 153
void make_nthash(char *pw, char *out)
{
  unsigned char *pwd = (unsigned char *)pw;
  unsigned short int unipwd[128l] = { (unsigned short int)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(pw);
  len = (signed int)return_value_strlen_1;
  signed int i = 0;
  unsigned short int tmp_statement_expression_2;
  for( ; !(i >= len); i = i + 1)
  {
    unsigned short int __v;
    unsigned short int __x = (unsigned short int)((signed int)pwd[(signed long int)i] << 8);
    asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
    tmp_statement_expression_2 = __v;
    unipwd[(signed long int)i] = tmp_statement_expression_2;
  }
  struct MD4state_st ctx;
  MD4_Init(&ctx);
  MD4_Update(&ctx, (const void *)unipwd, (unsigned long int)len * sizeof(unsigned short int) /*2ul*/ );
  MD4_Final((unsigned char *)out, &ctx);
}

// message_add
// file message.c line 119
void message_add(struct message_t_ *msg)
{
  pthread_mutex_lock(msg_mutex);
  list_add_tail(msg_queue, (void *)msg);
  sem_post(msg_sem);
  pthread_mutex_unlock(msg_mutex);
}

// message_alloc
// file message.c line 70
struct message_t_ * message_alloc(enum anonymous_3 kind)
{
  struct message_t_ *msg;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct message_t_) /*32ul*/ );
  msg = (struct message_t_ *)return_value_malloc_1;
  msg->kind = kind;
  msg->data = NULL;
  static unsigned int gid = (unsigned int)0;
  unsigned int tmp_post_2 = gid;
  gid = gid + 1u;
  msg->id = tmp_post_2;
  gettimeofday(&msg->time, ((struct timezone *)NULL));
  msg->time.tv_sec = msg->time.tv_sec - msg_time.tv_sec;
  return msg;
}

// message_bforce
// file message.c line 225
void message_bforce(signed int done, unsigned long int count)
{
  struct message_t_ *msg;
  msg=message_alloc((enum anonymous_3)msg_bforce);
  struct msg_bforce_t_ *force;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct msg_bforce_t_) /*16ul*/ );
  force = (struct msg_bforce_t_ *)return_value_malloc_1;
  force->done = done;
  force->count = count;
  msg->data = (void *)force;
  message_add(msg);
}

// message_done
// file message.c line 163
void message_done(enum anonymous_12 kind)
{
  struct message_t_ *msg;
  msg=message_alloc((enum anonymous_3)msg_done);
  struct msg_done_t_ *done;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct msg_done_t_) /*4ul*/ );
  done = (struct msg_done_t_ *)return_value_malloc_1;
  done->kind = kind;
  msg->data = (void *)done;
  message_add(msg);
}

// message_found
// file message.c line 213
void message_found(struct hash_t_ *hsh, struct table_t_ *tbl, signed int col)
{
  struct message_t_ *msg;
  msg=message_alloc((enum anonymous_3)msg_found);
  struct msg_found_t_ *found;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct msg_found_t_) /*24ul*/ );
  found = (struct msg_found_t_ *)return_value_malloc_1;
  found->hsh = hsh;
  found->tbl = tbl;
  found->col = col;
  msg->data = (void *)found;
  message_add(msg);
}

// message_free
// file message.h line 96
void message_free(struct message_t_ *msg)
{
  switch((signed int)msg->kind)
  {
    case msg_done:
    {
      struct msg_done_t_ *done = (struct msg_done_t_ *)msg->data;
      free((void *)done);
      goto __CPROVER_DUMP_L6;
    }
    case msg_preload:

    case msg_unload:
    {
      struct msg_load_t_ *load = (struct msg_load_t_ *)msg->data;
      free((void *)load);
      goto __CPROVER_DUMP_L6;
    }
    case msg_work:
    {
      struct msg_work_t_ *work = (struct msg_work_t_ *)msg->data;
      free((void *)work);
      goto __CPROVER_DUMP_L6;
    }
    case msg_found:
    {
      struct msg_found_t_ *found = (struct msg_found_t_ *)msg->data;
      free((void *)found);
      goto __CPROVER_DUMP_L6;
    }
    case msg_bforce:
    {
      struct msg_bforce_t_ *force = (struct msg_bforce_t_ *)msg->data;
      free((void *)force);
    }
    case msg_pause:

    default:
    {

    __CPROVER_DUMP_L6:
      ;
      free((void *)msg);
    }
  }
}

// message_get
// file message.c line 140
struct message_t_ * message_get(void)
{
  sem_wait(msg_sem);
  pthread_mutex_lock(msg_mutex);
  struct message_t_ *msg;
  void *return_value_list_rem_head_1;
  return_value_list_rem_head_1=list_rem_head(msg_queue);
  msg = (struct message_t_ *)return_value_list_rem_head_1;
  pthread_mutex_unlock(msg_mutex);
  return msg;
}

// message_init
// file message.h line 95
void message_init(void)
{
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(union anonymous_7) /*40ul*/ );
  msg_mutex = (union anonymous_7 *)return_value_malloc_1;
  pthread_mutex_init(msg_mutex, ((const union anonymous_9 *)NULL));
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(union anonymous_4) /*32ul*/ );
  msg_sem = (union anonymous_4 *)return_value_malloc_2;
  signed int return_value_sem_init_3;
  return_value_sem_init_3=sem_init(msg_sem, 0, (unsigned int)0);
  if(!(return_value_sem_init_3 == 0))
  {
    fprintf(stderr, "message_init: cannot initialise the semaphore\n");
    exit(1);
  }

  msg_queue=list_alloc();
  gettimeofday(&msg_time, ((struct timezone *)NULL));
}

// message_insert_first
// file message.c line 127
void message_insert_first(struct list_t_ *messages)
{
  pthread_mutex_lock(msg_mutex);
  while(messages->size >= 1)
  {
    struct message_t_ *msg;
    void *return_value_list_rem_tail_1;
    return_value_list_rem_tail_1=list_rem_tail(messages);
    msg = (struct message_t_ *)return_value_list_rem_tail_1;
    list_add_head(msg_queue, (void *)msg);
    sem_post(msg_sem);
  }
  pthread_mutex_unlock(msg_mutex);
}

// message_pause
// file message.h line 108
void message_pause(void)
{
  struct message_t_ *msg;
  msg=message_alloc((enum anonymous_3)msg_pause);
  message_add(msg);
}

// message_preload
// file message.c line 173
void message_preload(struct table_t_ *tbl, signed int which, signed int done, unsigned long int size)
{
  struct message_t_ *msg;
  msg=message_alloc((enum anonymous_3)msg_preload);
  struct msg_load_t_ *load;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct msg_load_t_) /*24ul*/ );
  load = (struct msg_load_t_ *)return_value_malloc_1;
  load->tbl = tbl;
  load->which = which;
  load->done = done;
  load->size = size;
  msg->data = (void *)load;
  message_add(msg);
}

// message_tryget
// file message.h line 100
struct message_t_ * message_tryget(void)
{
  signed int ret;
  ret=sem_trywait(msg_sem);
  struct message_t_ *msg = ((struct message_t_ *)NULL);
  if(ret == 0)
  {
    pthread_mutex_lock(msg_mutex);
    void *return_value_list_rem_head_1;
    return_value_list_rem_head_1=list_rem_head(msg_queue);
    msg = (struct message_t_ *)return_value_list_rem_head_1;
    pthread_mutex_unlock(msg_mutex);
  }

  return msg;
}

// message_unload
// file message.c line 186
void message_unload(struct table_t_ *tbl, unsigned long int size)
{
  struct message_t_ *msg;
  msg=message_alloc((enum anonymous_3)msg_unload);
  struct msg_load_t_ *load;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct msg_load_t_) /*24ul*/ );
  load = (struct msg_load_t_ *)return_value_malloc_1;
  load->tbl = tbl;
  load->which = 0;
  load->done = 1;
  load->size = size;
  msg->data = (void *)load;
  message_add(msg);
}

// message_work
// file message.c line 199
void message_work(struct hash_t_ *hsh, struct table_t_ *tbl, signed int which, signed int cmin, signed int cmax)
{
  struct message_t_ *msg;
  msg=message_alloc((enum anonymous_3)msg_work);
  struct msg_work_t_ *work;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct msg_work_t_) /*32ul*/ );
  work = (struct msg_work_t_ *)return_value_malloc_1;
  work->hsh = hsh;
  work->tbl = tbl;
  work->which = which;
  work->cmin = cmin;
  work->cmax = cmax;
  msg->data = (void *)work;
  message_add(msg);
}

// ntdict_check
// file ntdict.c line 194
signed int ntdict_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  memset((void *)tmp, 0, (unsigned long int)16);
  memcpy((void *)tmp, (const void *)el->pwd, (unsigned long int)4);
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; ncols >= c; c = c + 1)
  {
    ntdict_mkredux(tbl, tmp, pwd, n_redux);
    ntdict_mkhash(pwd, tmp);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, (unsigned long int)16);
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// ntdict_find
// file ntdict.c line 111
void ntdict_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  memcpy((void *)tmp, (const void *)hash, (unsigned long int)16);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    ntdict_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
    ntdict_mkhash(pwd, tmp);
  }
  unsigned int prefix = (unsigned int)tmp[(signed long int)2];
  prefix = prefix + (unsigned int)((signed int)tmp[(signed long int)3] << 8);
  prefix = prefix + (unsigned int)(((signed int)tmp[(signed long int)4] & 0x3F) << 16);
  unsigned short int postfix = (unsigned short int)tmp[(signed long int)0];
  postfix = postfix + (unsigned short int)((signed int)tmp[(signed long int)1] << 8);
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// ntdict_isvalid
// file ntdict.c line 240
signed int ntdict_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// ntdict_lookup_srt
// file ntdict.c line 151
signed int ntdict_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  pwd[(signed long int)0] = (unsigned char)(start & (unsigned int)0xFF);
  pwd[(signed long int)1] = (unsigned char)((start & (unsigned int)0xFF00) >> 8);
  pwd[(signed long int)2] = (unsigned char)((start & (unsigned int)0xFF0000) >> 16);
  pwd[(signed long int)3] = (unsigned char)((start & 0xFF000000) >> 24);
  return 1;
}

// ntdict_mkhash
// file ntdict.c line 364
void ntdict_mkhash(unsigned char *pwd, unsigned char *hash)
{
  make_nthash((char *)pwd, (char *)hash);
}

// ntdict_mkredux
// file ntdict.c line 246
void ntdict_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  unsigned char idx[5l];
  signed int r = n_redux;
  idx[(signed long int)0] = (unsigned char)((signed int)hash[(signed long int)0] ^ r & 0xFF);
  r = r >> 8;
  idx[(signed long int)1] = (unsigned char)((signed int)hash[(signed long int)1] ^ r & 0xFF);
  r = r >> 8;
  idx[(signed long int)2] = (unsigned char)((signed int)hash[(signed long int)2] ^ r & 0xFF);
  r = r >> 8;
  idx[(signed long int)3] = (unsigned char)((signed int)hash[(signed long int)3] ^ r & 0xFF);
  idx[(signed long int)4] = hash[(signed long int)4];
  signed int i;
  signed int capitalized_1st = 0;
  signed int capitalized = 0;
  signed int leet = 0;
  unsigned int pos = (unsigned int)0;
  memset((void *)pwd, 0, (unsigned long int)32 * sizeof(unsigned char) /*1ul*/ );
  pwd[(signed long int)pos] = ntdict63[(signed long int)((signed int)idx[(signed long int)0] & 0x3F)];
  if(!(pwd[(signed long int)pos] == 0))
  {
    if((unsigned int)pwd[(signed long int)pos] >= 97u)
    {
      if(!((unsigned int)pwd[(signed long int)pos] >= 123u))
      {
        if(!((0x80 & (signed int)idx[0l]) == 0))
        {
          pwd[(signed long int)pos] = pwd[(signed long int)pos] - (unsigned char)32;
          capitalized_1st = 1;
        }

      }

    }

  }

  if(!(pwd[(signed long int)pos] == 0))
    pos = pos + 1u;

  unsigned int word = (unsigned int)((signed int)idx[(signed long int)1] + ((signed int)idx[(signed long int)2] << 8));
  i = 0;
  for( ; !(i >= (signed int)worddict_len[(signed long int)word]); i = i + 1)
  {
    pwd[(signed long int)pos] = worddict[(signed long int)word][(signed long int)i];
    if(!((0x01 & (signed int)idx[3l]) == 0))
      switch((signed int)pwd[(signed long int)pos])
      {
        case 111:
        {
          pwd[(signed long int)pos] = (unsigned char)48;
          leet = 1;
          break;
        }
        case 108:
        {
          pwd[(signed long int)pos] = (unsigned char)49;
          leet = 1;
          break;
        }
        case 105:
        {
          pwd[(signed long int)pos] = (unsigned char)49;
          leet = 1;
          break;
        }
        case 122:
        {
          pwd[(signed long int)pos] = (unsigned char)50;
          leet = 1;
          break;
        }
        case 101:
        {
          pwd[(signed long int)pos] = (unsigned char)51;
          leet = 1;
          break;
        }
        case 97:
        {
          pwd[(signed long int)pos] = (unsigned char)52;
          leet = 1;
          break;
        }
        case 115:
        {
          pwd[(signed long int)pos] = (unsigned char)53;
          leet = 1;
          break;
        }
        case 116:
        {
          pwd[(signed long int)pos] = (unsigned char)55;
          leet = 1;
          break;
        }
        case 98:
        {
          pwd[(signed long int)pos] = (unsigned char)56;
          leet = 1;
        }
      }

    if(pos == 0u)
    {
      if((unsigned int)pwd[(signed long int)pos] >= 97u)
      {
        if(!((unsigned int)pwd[(signed long int)pos] >= 123u))
        {
          if(!((0x80 & (signed int)idx[0l]) == 0))
          {
            pwd[(signed long int)pos] = pwd[(signed long int)pos] - (unsigned char)32;
            capitalized_1st = 1;
          }

        }

      }

    }

    if(!(pos == 0u))
    {
      if((unsigned int)pwd[(signed long int)pos] >= 97u)
      {
        if(!((unsigned int)pwd[(signed long int)pos] >= 123u))
        {
          if(!((0x40 & (signed int)idx[0l]) == 0))
          {
            pwd[(signed long int)pos] = pwd[(signed long int)pos] - (unsigned char)32;
            capitalized = 1;
          }

        }

      }

    }

    pos = pos + 1u;
  }
  unsigned int tmp_post_1;
  if(!((0x40 & (signed int)idx[0l]) == 0))
  {
    if(capitalized == 0)
    {
      tmp_post_1 = pos;
      pos = pos + 1u;
      pwd[(signed long int)tmp_post_1] = (unsigned char)46;
    }

  }

  unsigned int tmp_post_2;
  if(!((0x80 & (signed int)idx[0l]) == 0))
  {
    if(capitalized_1st == 0)
    {
      tmp_post_2 = pos;
      pos = pos + 1u;
      pwd[(signed long int)tmp_post_2] = (unsigned char)44;
    }

  }

  unsigned int tmp_post_3;
  if(!((0x01 & (signed int)idx[3l]) == 0))
  {
    if(leet == 0)
    {
      tmp_post_3 = pos;
      pos = pos + 1u;
      pwd[(signed long int)tmp_post_3] = (unsigned char)45;
    }

  }

  unsigned int tmp_post_4;
  unsigned int tmp_post_5;
  if(!((0x02 & (signed int)idx[3l]) == 0))
  {
    word = (unsigned int)((((signed int)idx[(signed long int)3] & 0xFC) >> 2) + (((signed int)idx[(signed long int)4] & 0x3F) << 6));
    i = 0;
    for( ; !(i >= (signed int)postdict_len[(signed long int)word]); i = i + 1)
    {
      tmp_post_4 = pos;
      pos = pos + 1u;
      pwd[(signed long int)tmp_post_4] = postdict[(signed long int)word][(signed long int)i];
    }
  }

  else
  {
    tmp_post_5 = pos;
    pos = pos + 1u;
    pwd[(signed long int)tmp_post_5] = ntdict64[(signed long int)(((signed int)idx[(signed long int)3] & 0xFC) >> 2)];
    pwd[(signed long int)pos] = ntdict63[(signed long int)((signed int)idx[(signed long int)4] & 0x3F)];
    if(!(pwd[(signed long int)pos] == 0))
      pos = pos + 1u;

  }
}

// ntdict_setup
// file ntdict.h line 55
signed int ntdict_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 20000;
  tbl->offset = 64000;
  tbl->sizes = ntdict_sizes;
  tbl->find = ntdict_find;
  tbl->check = ntdict_check;
  tbl->isvalid = ntdict_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = ntdict_lookup_srt;
  if(!(dicinit == 0))
  {
    char fname[512l];
    signed int i;
    struct _IO_FILE *worddict_file;
    snprintf(fname, sizeof(char [512l]) /*512ul*/ , "%s/worddict", tbl->path);
    worddict_file=fopen(fname, "rb");
    if(worddict_file == ((struct _IO_FILE *)NULL))
      return 0;

    worddict[(signed long int)0][(signed long int)0] = (unsigned char)0;
    worddict_len[(signed long int)0] = (unsigned char)0;
    i = 1;
    for( ; !(i >= 65536); i = i + 1)
    {
      fread((void *)worddict[(signed long int)i], (unsigned long int)16, (unsigned long int)1, worddict_file);
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen((char *)worddict[(signed long int)i]);
      worddict_len[(signed long int)i] = (unsigned char)return_value_strlen_1;
    }
    fclose(worddict_file);
    struct _IO_FILE *postdict_file;
    snprintf(fname, sizeof(char [512l]) /*512ul*/ , "%s/postdict", tbl->path);
    postdict_file=fopen(fname, "r");
    if(postdict_file == ((struct _IO_FILE *)NULL))
      return 0;

    postdict[(signed long int)0][(signed long int)0] = (unsigned char)0;
    postdict_len[(signed long int)0] = (unsigned char)0;
    i = 1;
    for( ; !(i >= 4096); i = i + 1)
    {
      fread((void *)postdict[(signed long int)i], (unsigned long int)16, (unsigned long int)1, postdict_file);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen((char *)postdict[(signed long int)i]);
      postdict_len[(signed long int)i] = (unsigned char)return_value_strlen_2;
    }
    fclose(postdict_file);
    dicinit = 0;
  }

  return 1;
}

// nteight_bin64
// file nteight.c line 233
unsigned int nteight_bin64(unsigned char *input, signed int length)
{
  unsigned int sum = (unsigned int)0;
  signed int i = 0;
  i = 0;
  for( ; !(i >= length); i = i + 1)
  {
    char *return_value___builtin_strchr_1;
    return_value___builtin_strchr_1=__builtin_strchr((char *)nteight_alphanum64, (signed int)input[(signed long int)i]);
    sum = (unsigned int)((unsigned long int)(sum * (unsigned int)64) + (unsigned long int)(return_value___builtin_strchr_1 - (char *)nteight_alphanum64));
  }
  return sum;
}

// nteight_check
// file nteight.c line 143
signed int nteight_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    nteight_mkhash(pwd, tmp);
    nteight_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  nteight_mkhash(pwd, tmp);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, sizeof(unsigned char [16l]) /*16ul*/ );
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// nteight_find
// file nteight.c line 62
void nteight_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  nteight_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    nteight_mkhash(pwd, tmp);
    nteight_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned int prefix;
  prefix=nteight_bin64(pwd, 4);
  unsigned short int postfix;
  unsigned int return_value_nteight_bin64_1;
  return_value_nteight_bin64_1=nteight_bin64(pwd + (signed long int)4, 4);
  postfix = (unsigned short int)return_value_nteight_bin64_1;
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// nteight_isvalid
// file nteight.c line 187
signed int nteight_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// nteight_lookup_srt
// file nteight.c line 98
signed int nteight_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  pwd[(signed long int)6] = (unsigned char)0;
  pwd[(signed long int)7] = (unsigned char)0;
  pwd[(signed long int)8] = (unsigned char)0;
  pwd[(signed long int)9] = (unsigned char)0;
  nteight_unbin64(start, pwd, 6);
  return 1;
}

// nteight_mkhash
// file nteight.c line 229
void nteight_mkhash(unsigned char *pwd, unsigned char *hash)
{
  make_nthash((char *)pwd, (char *)hash);
}

// nteight_mkredux
// file nteight.c line 193
void nteight_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  unsigned int idx[8l];
  unsigned int un_redux = (unsigned int)n_redux;
  idx[(signed long int)0] = *((unsigned int *)hash) ^ un_redux;
  idx[(signed long int)2] = *((unsigned int *)(hash + (signed long int)4)) ^ un_redux >> 12;
  idx[(signed long int)4] = *((unsigned int *)(hash + (signed long int)8)) ^ un_redux >> 24;
  idx[(signed long int)6] = *((unsigned int *)(hash + (signed long int)12));
  idx[(signed long int)1] = idx[(signed long int)0] & (unsigned int)0x3f;
  idx[(signed long int)0] = idx[(signed long int)0] >> 6 & (unsigned int)0x3f;
  idx[(signed long int)3] = idx[(signed long int)2] & (unsigned int)0x3f;
  idx[(signed long int)2] = idx[(signed long int)2] >> 6 & (unsigned int)0x3f;
  idx[(signed long int)5] = idx[(signed long int)4] & (unsigned int)0x3f;
  idx[(signed long int)4] = idx[(signed long int)4] >> 6 & (unsigned int)0x3f;
  idx[(signed long int)7] = idx[(signed long int)6] & (unsigned int)0x3f;
  idx[(signed long int)6] = idx[(signed long int)6] >> 6 & (unsigned int)0x3f;
  pwd[(signed long int)0] = nteight_alphanum64[(signed long int)idx[(signed long int)0]];
  pwd[(signed long int)1] = nteight_alphanum64[(signed long int)idx[(signed long int)1]];
  pwd[(signed long int)2] = nteight_alphanum64[(signed long int)idx[(signed long int)2]];
  pwd[(signed long int)3] = nteight_alphanum64[(signed long int)idx[(signed long int)3]];
  pwd[(signed long int)4] = nteight_alphanum64[(signed long int)idx[(signed long int)4]];
  pwd[(signed long int)5] = nteight_alphanum64[(signed long int)idx[(signed long int)5]];
  pwd[(signed long int)6] = nteight_alphanum64[(signed long int)idx[(signed long int)6]];
  pwd[(signed long int)7] = nteight_alphanum64[(signed long int)idx[(signed long int)7]];
  pwd[(signed long int)8] = (unsigned char)0;
}

// nteight_setup
// file nteight.h line 46
signed int nteight_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 55000;
  tbl->offset = 100000;
  tbl->sizes = nteight_sizes;
  tbl->find = nteight_find;
  tbl->check = nteight_check;
  tbl->isvalid = nteight_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = nteight_lookup_srt;
  return 1;
}

// nteight_unbin64
// file nteight.c line 244
signed int nteight_unbin64(unsigned int input, unsigned char *output, signed int length)
{
  signed int i = 0;
  i = 0;
  for( ; !(i >= length); i = i + 1)
  {
    output[(signed long int)i] = nteight_alphanum64[(signed long int)(input % (unsigned int)64)];
    input = input / (unsigned int)64;
  }
  return 1;
}

// nteightxl_bin95
// file nteightxl.c line 318
unsigned long int nteightxl_bin95(unsigned char *input, signed int length)
{
  unsigned long int sum = (unsigned long int)0;
  signed int i = 0;
  i = 0;
  for( ; !(i >= length); i = i + 1)
  {
    char *return_value___builtin_strchr_1;
    return_value___builtin_strchr_1=__builtin_strchr((char *)nteightxl_ext95, (signed int)input[(signed long int)i]);
    sum = sum * (unsigned long int)95 + (unsigned long int)(return_value___builtin_strchr_1 - (char *)nteightxl_ext95);
  }
  return sum;
}

// nteightxl_check
// file nteightxl.c line 233
signed int nteightxl_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    nteightxl_mkhash(pwd, tmp);
    nteightxl_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  nteightxl_mkhash(pwd, tmp);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, sizeof(unsigned char [16l]) /*16ul*/ );
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// nteightxl_find
// file nteightxl.c line 61
void nteightxl_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  nteightxl_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    nteightxl_mkhash(pwd, tmp);
    nteightxl_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned long int binary;
  binary=nteightxl_bin95(pwd, 8);
  unsigned int prefix = (unsigned int)(binary >> 23);
  unsigned short int postfix = (unsigned short int)(binary & (unsigned long int)0xffff);
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// nteightxl_isvalid
// file nteightxl.c line 277
signed int nteightxl_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// nteightxl_lookup_end
// file nteightxl.c line 140
signed int nteightxl_lookup_end(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  struct ophstat_t_ *stat = el->stat;
  unsigned short int postfix = (unsigned short int)el->postfix;
  unsigned long int low = el->low;
  unsigned long int high = el->high;
  unsigned long int n = high - low;
  unsigned long int i;
  unsigned long int offset = (unsigned long int)2 * low;
  if(!(tbl->endmem == ((char *)NULL)))
  {
    unsigned short int *mem = (unsigned short int *)(tbl->endmem + (signed long int)offset);
    i = (unsigned long int)0;
    for( ; !(i >= n); i = i + 1ul)
      if(mem[(signed long int)i] == postfix)
        break;

  }

  else
  {
    unsigned short int pfix[512l];
    struct _IO_FILE *endfile = tbl->endfile;
    fseeko(endfile, (signed long int)offset, 0);
    fread((void *)pfix, sizeof(unsigned short int) /*2ul*/ , n, endfile);
    stat->fseek_end = stat->fseek_end + 1ul;
    i = (unsigned long int)0;
    for( ; !(i >= n); i = i + 1ul)
      if(pfix[(signed long int)i] == postfix)
        break;

  }
  el->offset = (unsigned long int)5 * (low + i);
  if(!(i >= n))
    stat->postfix = stat->postfix + 1ul;

  return i == n ? 0 : 1;
}

// nteightxl_lookup_idx
// file nteightxl.c line 98
signed int nteightxl_lookup_idx(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned int prefix = (unsigned int)el->prefix;
  struct ophstat_t_ *stat = el->stat;
  stat->prefix = stat->prefix + 1ul;
  el->low = (unsigned long int)0;
  el->high = (unsigned long int)0;
  if(!(tbl->idxmem == ((char *)NULL)))
  {
    unsigned char *mem = (unsigned char *)(tbl->idxmem + (signed long int)((unsigned int)5 * prefix));
    memcpy((void *)&el->low, (const void *)mem, (unsigned long int)5);
    memcpy((void *)&el->high, (const void *)(mem + (signed long int)5), (unsigned long int)5);
  }

  else
  {
    struct _IO_FILE *idxfile = tbl->idxfile;
    fseeko(idxfile, (signed long int)((unsigned int)5 * prefix), 0);
    fread((void *)&el->low, (unsigned long int)5, (unsigned long int)1, idxfile);
    fread((void *)&el->high, (unsigned long int)5, (unsigned long int)1, idxfile);
    stat->fseek_idx = stat->fseek_idx + 1ul;
  }
  el->low = el->low;
  el->high = el->high;
  return 1;
}

// nteightxl_lookup_srt
// file nteightxl.c line 185
signed int nteightxl_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned long int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  start = (unsigned long int)0;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned char *mem = (unsigned char *)(tbl->srtmem + (signed long int)offset);
    memcpy((void *)&start, (const void *)mem, (unsigned long int)5);
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, (unsigned long int)5, (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  pwd[(signed long int)6] = (unsigned char)0;
  pwd[(signed long int)7] = (unsigned char)0;
  pwd[(signed long int)8] = (unsigned char)0;
  pwd[(signed long int)9] = (unsigned char)0;
  nteightxl_unbin95(start, pwd, 6);
  return 1;
}

// nteightxl_mkhash
// file nteightxl.c line 314
void nteightxl_mkhash(unsigned char *pwd, unsigned char *hash)
{
  make_nthash((char *)pwd, (char *)hash);
}

// nteightxl_mkredux
// file nteightxl.c line 283
void nteightxl_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  unsigned int idx[4l];
  idx[(signed long int)0] = *((unsigned int *)hash) ^ (unsigned int)n_redux;
  idx[(signed long int)1] = *((unsigned int *)(hash + (signed long int)4));
  idx[(signed long int)2] = *((unsigned int *)(hash + (signed long int)8));
  idx[(signed long int)3] = *((unsigned int *)(hash + (signed long int)12));
  idx[(signed long int)0] = idx[(signed long int)0] % (unsigned int)9025;
  idx[(signed long int)1] = idx[(signed long int)1] % (unsigned int)9025;
  idx[(signed long int)2] = idx[(signed long int)2] % (unsigned int)9025;
  idx[(signed long int)3] = idx[(signed long int)3] % (unsigned int)9025;
  pwd[(signed long int)0] = nteightxl_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
  pwd[(signed long int)1] = nteightxl_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
  pwd[(signed long int)2] = nteightxl_ext95[(signed long int)(idx[(signed long int)1] / (unsigned int)95)];
  pwd[(signed long int)3] = nteightxl_ext95[(signed long int)(idx[(signed long int)1] % (unsigned int)95)];
  pwd[(signed long int)4] = nteightxl_ext95[(signed long int)(idx[(signed long int)2] / (unsigned int)95)];
  pwd[(signed long int)5] = nteightxl_ext95[(signed long int)(idx[(signed long int)2] % (unsigned int)95)];
  pwd[(signed long int)6] = nteightxl_ext95[(signed long int)(idx[(signed long int)3] / (unsigned int)95)];
  pwd[(signed long int)7] = nteightxl_ext95[(signed long int)(idx[(signed long int)3] % (unsigned int)95)];
  pwd[(signed long int)8] = (unsigned char)0;
}

// nteightxl_setup
// file nteightxl.h line 48
signed int nteightxl_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 100000;
  tbl->offset = 1000000;
  tbl->sizes = nteightxl_sizes;
  tbl->find = nteightxl_find;
  tbl->check = nteightxl_check;
  tbl->isvalid = nteightxl_isvalid;
  tbl->lookup_idx = nteightxl_lookup_idx;
  tbl->lookup_end = nteightxl_lookup_end;
  tbl->lookup_srt = nteightxl_lookup_srt;
  return 1;
}

// nteightxl_unbin95
// file nteightxl.c line 329
signed int nteightxl_unbin95(unsigned long int input, unsigned char *output, signed int length)
{
  signed int i = 0;
  i = 0;
  for( ; !(i >= length); i = i + 1)
  {
    output[(signed long int)i] = nteightxl_ext95[(signed long int)(input % (unsigned long int)95)];
    input = input / (unsigned long int)95;
  }
  return 1;
}

// ntextended_bin43
// file ntextended.c line 276
unsigned long int ntextended_bin43(unsigned char *input)
{
  signed int i;
  signed int l;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen((char *)input);
  l = (signed int)return_value_strlen_1;
  unsigned long int sum = (unsigned long int)0;
  if(!(l >= 7))
  {
    i = 0;
    for( ; !(i >= 6) && !(i >= l); i = i + 1)
    {
      char *x1;
      char *return_value___builtin_strchr_2;
      return_value___builtin_strchr_2=__builtin_strchr((char *)ntextended_ext95, (signed int)input[(signed long int)i]);
      x1 = return_value___builtin_strchr_2;
      char *x2 = (char *)ntextended_ext95;
      sum = sum * (unsigned long int)95 + (unsigned long int)(x1 - x2);
    }
  }

  else
    if(l == 7)
    {
      i = 0;
      for( ; !(i >= 7); i = i + 1)
      {
        char *ntextended_bin43__1__2__1__x1;
        char *return_value___builtin_strchr_3;
        return_value___builtin_strchr_3=__builtin_strchr((char *)ntextended_alphanum62, (signed int)input[(signed long int)i]);
        ntextended_bin43__1__2__1__x1 = return_value___builtin_strchr_3;
        char *ntextended_bin43__1__2__1__x2 = (char *)ntextended_alphanum62;
        sum = sum * (unsigned long int)62 + (unsigned long int)(ntextended_bin43__1__2__1__x1 - ntextended_bin43__1__2__1__x2);
      }
    }

    else
      if(l == 8)
      {
        i = 0;
        for( ; !(i >= 8); i = i + 1)
        {
          char *ntextended_bin43__1__3__1__x1;
          char *return_value___builtin_strchr_4;
          return_value___builtin_strchr_4=__builtin_strchr((char *)ntextended_low36, (signed int)input[(signed long int)i]);
          ntextended_bin43__1__3__1__x1 = return_value___builtin_strchr_4;
          char *ntextended_bin43__1__3__1__x2 = (char *)ntextended_low36;
          sum = sum * (unsigned long int)36 + (unsigned long int)(ntextended_bin43__1__3__1__x1 - ntextended_bin43__1__3__1__x2);
        }
      }

  sum = sum + ntextended_offset[(signed long int)(l - 1)];
  return sum;
}

// ntextended_check
// file ntextended.c line 142
signed int ntextended_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    ntextended_mkhash(pwd, tmp);
    ntextended_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  ntextended_mkhash(pwd, tmp);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, sizeof(unsigned char [16l]) /*16ul*/ );
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// ntextended_find
// file ntextended.c line 61
void ntextended_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  ntextended_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    ntextended_mkhash(pwd, tmp);
    ntextended_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned long int pw_bin;
  pw_bin=ntextended_bin43(pwd);
  unsigned int prefix = (unsigned int)(pw_bin >> 18 & (unsigned long int)0x00000000FFFFFFFF);
  unsigned short int postfix = (unsigned short int)(pw_bin & (unsigned long int)0x000000000000FFFF);
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// ntextended_isvalid
// file ntextended.c line 186
signed int ntextended_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// ntextended_lookup_srt
// file ntextended.c line 98
signed int ntextended_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  pwd[(signed long int)5] = (unsigned char)0;
  pwd[(signed long int)6] = (unsigned char)0;
  pwd[(signed long int)7] = (unsigned char)0;
  ntextended_unbin95(start, pwd);
  return 1;
}

// ntextended_mkhash
// file ntextended.c line 272
void ntextended_mkhash(unsigned char *pwd, unsigned char *hash)
{
  make_nthash((char *)pwd, (char *)hash);
}

// ntextended_mkredux
// file ntextended.c line 192
void ntextended_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  unsigned int idx[4l];
  idx[(signed long int)0] = *((unsigned int *)hash) ^ (unsigned int)n_redux;
  idx[(signed long int)1] = *((unsigned int *)(hash + (signed long int)4));
  idx[(signed long int)2] = *((unsigned int *)(hash + (signed long int)8));
  idx[(signed long int)3] = *((unsigned int *)(hash + (signed long int)12));
  signed int n = (signed int)idx[(signed long int)3];
  signed int i;
  pwd[(signed long int)8] = (unsigned char)0;
  if(!(ntextended_max[8l] >= (unsigned int)n))
  {
    i = 0;
    for( ; !(i >= 3); i = i + 1)
    {
      pwd[(signed long int)i] = ntextended_low36[(signed long int)(idx[(signed long int)0] % (unsigned int)36)];
      idx[(signed long int)0] = idx[(signed long int)0] / (unsigned int)36;
    }
    i = 3;
    for( ; !(i >= 6); i = i + 1)
    {
      pwd[(signed long int)i] = ntextended_low36[(signed long int)(idx[(signed long int)1] % (unsigned int)36)];
      idx[(signed long int)1] = idx[(signed long int)1] / (unsigned int)36;
    }
    i = 6;
    for( ; !(i >= 8); i = i + 1)
    {
      pwd[(signed long int)i] = ntextended_low36[(signed long int)(idx[(signed long int)2] % (unsigned int)36)];
      idx[(signed long int)2] = idx[(signed long int)2] / (unsigned int)36;
    }
  }

  else
    if(!(ntextended_max[7l] >= (unsigned int)n))
    {
      i = 0;
      for( ; !(i >= 3); i = i + 1)
      {
        pwd[(signed long int)i] = ntextended_alphanum62[(signed long int)(idx[(signed long int)0] % (unsigned int)62)];
        idx[(signed long int)0] = idx[(signed long int)0] / (unsigned int)62;
      }
      i = 3;
      for( ; !(i >= 7); i = i + 1)
      {
        pwd[(signed long int)i] = ntextended_alphanum62[(signed long int)(idx[(signed long int)1] % (unsigned int)62)];
        idx[(signed long int)1] = idx[(signed long int)1] / (unsigned int)62;
      }
      pwd[(signed long int)7] = (unsigned char)0;
    }

    else
    {
      i = 0;
      for( ; !(i >= 3); i = i + 1)
      {
        pwd[(signed long int)i] = ntextended_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
        idx[(signed long int)0] = idx[(signed long int)0] / (unsigned int)95;
      }
      i = 3;
      for( ; !(i >= 6); i = i + 1)
      {
        pwd[(signed long int)i] = ntextended_ext95[(signed long int)(idx[(signed long int)1] % (unsigned int)95)];
        idx[(signed long int)1] = idx[(signed long int)1] / (unsigned int)95;
      }
      pwd[(signed long int)7] = (unsigned char)0;
      pwd[(signed long int)6] = (unsigned char)0;
      if(!((unsigned int)n >= ntextended_max[6l]))
      {
        pwd[(signed long int)5] = (unsigned char)0;
        if(!((unsigned int)n >= ntextended_max[5l]))
        {
          pwd[(signed long int)4] = (unsigned char)0;
          if(!((unsigned int)n >= ntextended_max[4l]))
          {
            pwd[(signed long int)3] = (unsigned char)0;
            if(!((unsigned int)n >= ntextended_max[3l]))
            {
              pwd[(signed long int)2] = (unsigned char)0;
              if(!((unsigned int)n >= ntextended_max[2l]))
                pwd[(signed long int)1] = (unsigned char)0;

            }

          }

        }

      }

    }
}

// ntextended_setup
// file ntextended.c line 43
signed int ntextended_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 24320;
  tbl->offset = 50000;
  tbl->sizes = ntextended_sizes;
  tbl->find = ntextended_find;
  tbl->check = ntextended_check;
  tbl->isvalid = ntextended_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = ntextended_lookup_srt;
  return 1;
}

// ntextended_unbin95
// file ntextended.c line 310
void ntextended_unbin95(unsigned int input, unsigned char *output)
{
  signed int i = 0;
  i = 4;
  for( ; i >= 0; i = i - 1)
  {
    output[(signed long int)i] = ntextended_ext95[(signed long int)(input % (unsigned int)95)];
    input = input / (unsigned int)95;
  }
}

// ntnine_bin36
// file ntnine.c line 247
unsigned int ntnine_bin36(unsigned char *input, signed int length)
{
  unsigned int sum = (unsigned int)0;
  signed int i = 0;
  i = 0;
  signed int tmp_statement_expression_1;
  signed int tmp_if_expr_3;
  const signed int **return_value___ctype_tolower_loc_2;
  const signed int **return_value___ctype_tolower_loc_4;
  for( ; !(i >= length); i = i + 1)
  {
    signed int __res;
    return_value___ctype_tolower_loc_4=__ctype_tolower_loc();
    __res = (*return_value___ctype_tolower_loc_4)[(signed long int)(signed int)input[(signed long int)i]];
    tmp_statement_expression_1 = __res;
    char *return_value___builtin_strchr_5;
    return_value___builtin_strchr_5=__builtin_strchr((char *)ntnine_low36, tmp_statement_expression_1);
    sum = (unsigned int)((unsigned long int)(sum * (unsigned int)36) + (unsigned long int)(return_value___builtin_strchr_5 - (char *)ntnine_low36));
  }
  return sum;
}

// ntnine_bin37
// file ntnine.c line 258
unsigned int ntnine_bin37(unsigned char *input, signed int length)
{
  unsigned int sum = (unsigned int)0;
  signed int i = 0;
  i = 0;
  char *return_value___builtin_strchr_1;
  for( ; !(i >= length); i = i + 1)
    if((signed int)input[(signed long int)i] == 0)
      sum = sum * (unsigned int)37;

    else
    {
      return_value___builtin_strchr_1=__builtin_strchr((char *)ntnine_low36, (signed int)input[(signed long int)i]);
      sum = (unsigned int)((unsigned long int)(sum * (unsigned int)37 + (unsigned int)1) + (unsigned long int)(return_value___builtin_strchr_1 - (char *)ntnine_low36));
    }
  return sum;
}

// ntnine_check
// file ntnine.c line 143
signed int ntnine_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    ntnine_mkhash(pwd, tmp);
    ntnine_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  ntnine_mkhash(pwd, tmp);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, sizeof(unsigned char [16l]) /*16ul*/ );
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// ntnine_find
// file ntnine.c line 62
void ntnine_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  ntnine_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    ntnine_mkhash(pwd, tmp);
    ntnine_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned int prefix;
  prefix=ntnine_bin36(pwd, 5);
  unsigned short int postfix;
  unsigned int return_value_ntnine_bin37_1;
  return_value_ntnine_bin37_1=ntnine_bin37(pwd + (signed long int)5, 4);
  postfix = (unsigned short int)return_value_ntnine_bin37_1;
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// ntnine_isvalid
// file ntnine.c line 187
signed int ntnine_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// ntnine_lookup_srt
// file ntnine.c line 98
signed int ntnine_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  pwd[(signed long int)6] = (unsigned char)0;
  pwd[(signed long int)7] = (unsigned char)0;
  pwd[(signed long int)8] = (unsigned char)0;
  pwd[(signed long int)9] = (unsigned char)0;
  ntnine_unbin36(start, pwd, 6);
  return 1;
}

// ntnine_mkhash
// file ntnine.c line 243
void ntnine_mkhash(unsigned char *pwd, unsigned char *hash)
{
  make_nthash((char *)pwd, (char *)hash);
}

// ntnine_mkredux
// file ntnine.c line 193
void ntnine_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  unsigned int idx[6l];
  idx[(signed long int)0] = *((unsigned int *)hash) ^ (unsigned int)n_redux;
  idx[(signed long int)2] = *((unsigned int *)(hash + (signed long int)4));
  idx[(signed long int)4] = *((unsigned int *)(hash + (signed long int)8));
  idx[(signed long int)5] = *((unsigned int *)(hash + (signed long int)12));
  signed int i;
  idx[(signed long int)1] = idx[(signed long int)0] % power2_36;
  idx[(signed long int)0] = idx[(signed long int)0] / power2_36;
  idx[(signed long int)0] = idx[(signed long int)0] % power2_36;
  idx[(signed long int)3] = idx[(signed long int)2] % power2_36;
  idx[(signed long int)2] = idx[(signed long int)2] / power2_36;
  idx[(signed long int)2] = idx[(signed long int)2] % power2_36;
  pwd[(signed long int)0] = ntnine_low36[(signed long int)(idx[(signed long int)0] / (unsigned int)36)];
  pwd[(signed long int)1] = ntnine_low36[(signed long int)(idx[(signed long int)0] % (unsigned int)36)];
  pwd[(signed long int)2] = ntnine_low36[(signed long int)(idx[(signed long int)1] / (unsigned int)36)];
  pwd[(signed long int)3] = ntnine_low36[(signed long int)(idx[(signed long int)1] % (unsigned int)36)];
  pwd[(signed long int)4] = ntnine_low36[(signed long int)(idx[(signed long int)2] / (unsigned int)36)];
  pwd[(signed long int)5] = ntnine_low36[(signed long int)(idx[(signed long int)2] % (unsigned int)36)];
  pwd[(signed long int)6] = ntnine_low36[(signed long int)(idx[(signed long int)3] / (unsigned int)36)];
  pwd[(signed long int)7] = ntnine_low36[(signed long int)(idx[(signed long int)3] % (unsigned int)36)];
  if(!(max8 >= idx[5l]))
  {
    idx[(signed long int)4] = idx[(signed long int)4] % power2_36;
    pwd[(signed long int)8] = ntnine_low36[(signed long int)(idx[(signed long int)4] / (unsigned int)36)];
    pwd[(signed long int)9] = (unsigned char)0;
  }

  else
  {
    pwd[(signed long int)8] = (unsigned char)0;
    i = 0;
    for( ; !(i >= 8); i = i + 1)
      if((signed int)pwd[(signed long int)i] >= 97)
      {
        pwd[(signed long int)i] = pwd[(signed long int)i] - (unsigned char)0x20;
        break;
      }

  }
}

// ntnine_setup
// file ntnine.h line 48
signed int ntnine_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 45000;
  tbl->offset = 50000;
  tbl->sizes = ntnine_sizes;
  tbl->find = ntnine_find;
  tbl->check = ntnine_check;
  tbl->isvalid = ntnine_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = ntnine_lookup_srt;
  return 1;
}

// ntnine_unbin36
// file ntnine.c line 272
signed int ntnine_unbin36(unsigned int input, unsigned char *output, signed int length)
{
  signed int i = 0;
  i = length - 1;
  for( ; i >= 0; i = i - 1)
  {
    output[(signed long int)i] = ntnine_low36[(signed long int)(input % (unsigned int)36)];
    input = input / (unsigned int)36;
  }
  return 1;
}

// ntnum_bin11
// file ntnum.c line 240
unsigned int ntnum_bin11(unsigned char *input, signed int length)
{
  unsigned int sum = (unsigned int)0;
  signed int i = 0;
  i = 0;
  signed int tmp_if_expr_1;
  for( ; !(i >= length); i = i + 1)
  {
    if(!(input[(signed long int)i] == 0))
      tmp_if_expr_1 = (signed int)input[(signed long int)i] - 0x2f;

    else
      tmp_if_expr_1 = 0;
    sum = sum * (unsigned int)11 + (unsigned int)tmp_if_expr_1;
  }
  return sum;
}

// ntnum_check
// file ntnum.c line 145
signed int ntnum_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    ntnum_mkhash(pwd, tmp);
    ntnum_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  ntnum_mkhash(pwd, tmp);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, sizeof(unsigned char [16l]) /*16ul*/ );
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// ntnum_find
// file ntnum.c line 63
void ntnum_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  ntnum_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    ntnum_mkhash(pwd, tmp);
    ntnum_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned int prefix;
  prefix=ntnum_bin11(pwd, 6);
  unsigned short int postfix;
  unsigned int return_value_ntnum_bin11_1;
  return_value_ntnum_bin11_1=ntnum_bin11(pwd + (signed long int)6, 6);
  postfix = (unsigned short int)return_value_ntnum_bin11_1;
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// ntnum_isvalid
// file ntnum.c line 189
signed int ntnum_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// ntnum_lookup_srt
// file ntnum.c line 98
signed int ntnum_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  unsigned int len = (unsigned int)(start >= (unsigned int)1000000000 ? 10 : (start >= (unsigned int)100000000 ? 9 : (start >= (unsigned int)10000000 ? 8 : (start >= (unsigned int)1000000 ? 7 : (start >= (unsigned int)100000 ? 6 : (start >= (unsigned int)10000 ? 5 : (start >= (unsigned int)1000 ? 4 : (start >= (unsigned int)100 ? 3 : (start >= (unsigned int)10 ? 2 : 1)))))))));
  memset((void *)pwd, 0, (unsigned long int)13);
  memset((void *)pwd, 48, (unsigned long int)((unsigned int)10 - len));
  sprintf(((char *)pwd + (signed long int)10) - (signed long int)len, "%u", start);
  return 1;
}

// ntnum_mkhash
// file ntnum.c line 236
void ntnum_mkhash(unsigned char *pwd, unsigned char *hash)
{
  make_nthash((char *)pwd, (char *)hash);
}

// ntnum_mkredux
// file ntnum.c line 195
void ntnum_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  unsigned int idx[4l];
  idx[(signed long int)0] = *((unsigned int *)hash) ^ (unsigned int)n_redux;
  idx[(signed long int)1] = *((unsigned int *)(hash + (signed long int)4));
  idx[(signed long int)2] = *((unsigned int *)(hash + (signed long int)8));
  idx[(signed long int)3] = *((unsigned int *)(hash + (signed long int)12));
  unsigned long int q = (unsigned long int)idx[(signed long int)1] << 32 | (unsigned long int)idx[(signed long int)0];
  unsigned long int l = (unsigned long int)idx[(signed long int)3] << 32 | (unsigned long int)idx[(signed long int)2];
  l = l % 1000000000000LLU;
  unsigned int len = (unsigned int)(l >= 100000000000LLU ? 12 : (l >= 10000000000LLU ? 11 : (l >= (unsigned long int)1000000000 ? 10 : (l >= (unsigned long int)100000000 ? 9 : (l >= (unsigned long int)10000000 ? 8 : (l >= (unsigned long int)1000000 ? 7 : (l >= (unsigned long int)100000 ? 6 : (l >= (unsigned long int)10000 ? 5 : (l >= (unsigned long int)1000 ? 4 : (l >= (unsigned long int)100 ? 3 : (l >= (unsigned long int)10 ? 2 : 1)))))))))));
  q = len == (unsigned int)12 ? q % 1000000000000LLU : (len == (unsigned int)11 ? q % 100000000000LLU : (len == (unsigned int)10 ? q % 10000000000LLU : (len == (unsigned int)9 ? q % (unsigned long int)1000000000 : (len == (unsigned int)8 ? q % (unsigned long int)100000000 : (len == (unsigned int)7 ? q % (unsigned long int)10000000 : (len == (unsigned int)6 ? q % (unsigned long int)1000000 : (len == (unsigned int)5 ? q % (unsigned long int)100000 : (len == (unsigned int)4 ? q % (unsigned long int)10000 : (len == (unsigned int)3 ? q % (unsigned long int)1000 : (len == (unsigned int)2 ? q % (unsigned long int)100 : q % (unsigned long int)10))))))))));
  unsigned int len_q = (unsigned int)(q >= 100000000000LLU ? 12 : (q >= 10000000000LLU ? 11 : (q >= (unsigned long int)1000000000 ? 10 : (q >= (unsigned long int)100000000 ? 9 : (q >= (unsigned long int)10000000 ? 8 : (q >= (unsigned long int)1000000 ? 7 : (q >= (unsigned long int)100000 ? 6 : (q >= (unsigned long int)10000 ? 5 : (q >= (unsigned long int)1000 ? 4 : (q >= (unsigned long int)100 ? 3 : (q >= (unsigned long int)10 ? 2 : 1)))))))))));
  memset((void *)pwd, 0, (unsigned long int)13);
  memset((void *)pwd, 48, (unsigned long int)(len - len_q));
  snprintf(((char *)pwd + (signed long int)len) - (signed long int)len_q, (unsigned long int)(len_q + (unsigned int)1), "%llu", (unsigned long long int)q);
}

// ntnum_setup
// file ntnum.h line 44
signed int ntnum_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 15000;
  tbl->offset = 100000;
  tbl->sizes = ntnum_sizes;
  tbl->find = ntnum_find;
  tbl->check = ntnum_check;
  tbl->isvalid = ntnum_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = ntnum_lookup_srt;
  return 1;
}

// ntproba_check
// file ntproba.c line 317
signed int ntproba_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  struct proba_info_ *proba = (struct proba_info_ *)tbl->param;
  struct ophstat_t_ *stat = el->stat;
  unsigned int taille;
  unsigned int idx = (unsigned int)tbl->idx;
  unsigned int nbColumn = (unsigned int)tbl->ncols;
  unsigned int stopColumn = (unsigned int)el->col;
  unsigned int power2 = proba->power2;
  char pwdUTF[32l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  taille=indexToPwdUTF(proba->array, proba->mdpw, proba->mis, el->start, power2, stopColumn, idx, nbColumn, pwdUTF);
  stat->hredux = stat->hredux + (unsigned long int)stopColumn;
  stat->falarm_hredux = stat->falarm_hredux + (unsigned long int)stopColumn;
  char return_value_checkFoundPwd_1;
  return_value_checkFoundPwd_1=checkFoundPwd(pwdUTF, taille, (unsigned int *)hsh->hash, el->pwd);
  if(!(return_value_checkFoundPwd_1 == 0))
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// ntproba_cleanup
// file ntproba.c line 172
void ntproba_cleanup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct anonymous *global;
  global=ntproba_global(tbl);
  global->refcount = global->refcount - 1;
  if(global->refcount == 0)
  {
    struct proba_info_ *proba = global->proba;
    deleteMarkovDynProgWrapper(proba->mdpw);
    deletePatternArray(proba->array);
    deleteImprobaStruct(proba->mis);
    proba_info_free(proba);
    global->proba = (struct proba_info_ *)(void *)0;
  }

}

// ntproba_find
// file ntproba.c line 193
void ntproba_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  struct proba_info_ *proba = (struct proba_info_ *)tbl->param;
  unsigned char *hash = hsh->hash;
  struct ophstat_t_ *stat = el->stat;
  unsigned long int end;
  unsigned int idx = (unsigned int)tbl->idx;
  unsigned int nbColumn = (unsigned int)tbl->ncols;
  unsigned int startColumn = (unsigned int)el->col;
  unsigned int power2 = proba->power2;
  end=hashToIndex(proba->array, proba->mdpw, proba->mis, (unsigned int *)hash, startColumn, nbColumn, power2, idx, nbColumn);
  stat->hredux = stat->hredux + (unsigned long int)((nbColumn - startColumn) - (unsigned int)1);
  el->prefix = end >> power2 - proba->nbBitIndex;
  el->postfix = end & (unsigned long int)0xffffffffffffffff >> ((unsigned int)64 + proba->nbBitIndex) - power2;
}

// ntproba_global
// file ntproba.c line 55
struct anonymous * ntproba_global(struct table_t_ *tbl)
{
  switch((signed int)tbl->kind)
  {
    case ntprobafree:
      return &globalfree;
    case ntproba10g:
      return &global10g;
    case ntproba60g:
      return &global60g;
    default:
      return (struct anonymous *)(void *)0;
  }
}

// ntproba_init
// file ntproba.c line 155
void * ntproba_init(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct anonymous *global;
  global=ntproba_global(tbl);
  if(global->proba == ((struct proba_info_ *)NULL))
  {
    global->proba=ntproba_proba_info_alloc(tbl);
    global->refcount = global->refcount + (global->proba != ((struct proba_info_ *)NULL) ? 1 : 0);
  }

  else
    global->refcount = global->refcount + 1;
  return (void *)global->proba;
}

// ntproba_isvalid
// file ntproba.c line 346
signed int ntproba_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// ntproba_lookup_end
// file ntproba.c line 244
signed int ntproba_lookup_end(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  struct ophstat_t_ *stat = el->stat;
  struct proba_info_ *proba = (struct proba_info_ *)tbl->param;
  unsigned long int postfix = el->postfix;
  unsigned long int range = el->high - el->low;
  unsigned long int i;
  unsigned int nbByteBin = proba->nbByteBin;
  unsigned long int temp;
  char *mem;
  if(!(tbl->endmem == ((char *)NULL)))
  {
    mem = tbl->endmem + (signed long int)(el->low * (unsigned long int)nbByteBin);
    i = (unsigned long int)0;
    for( ; !(i >= range); i = i + 1ul)
    {
      temp = (unsigned long int)0;
      memcpy((void *)&temp, (const void *)(mem + (signed long int)(i * (unsigned long int)nbByteBin)), (unsigned long int)nbByteBin);
      if(temp == postfix)
      {
        stat->postfix = stat->postfix + 1ul;
        break;
      }

    }
  }

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(range * (unsigned long int)nbByteBin);
    mem = (char *)return_value_malloc_1;
    struct _IO_FILE *endfile = tbl->endfile;
    fseeko(endfile, (signed long int)(el->low * (unsigned long int)nbByteBin), 0);
    fread((void *)mem, (unsigned long int)nbByteBin, range, endfile);
    stat->fseek_end = stat->fseek_end + 1ul;
    i = (unsigned long int)0;
    for( ; !(i >= range); i = i + 1ul)
    {
      temp = (unsigned long int)0;
      memcpy((void *)&temp, (const void *)(mem + (signed long int)(i * (unsigned long int)nbByteBin)), (unsigned long int)nbByteBin);
      if(temp == postfix)
      {
        stat->postfix = stat->postfix + 1ul;
        break;
      }

    }
    free((void *)mem);
  }
  el->offset = el->low + i;
  return i == range ? 0 : 1;
}

// ntproba_lookup_idx
// file ntproba.c line 214
signed int ntproba_lookup_idx(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned int prefix = (unsigned int)el->prefix;
  struct ophstat_t_ *stat = el->stat;
  struct proba_info_ *proba = (struct proba_info_ *)tbl->param;
  unsigned int nbByteM = proba->nbByteM;
  stat->prefix = stat->prefix + 1ul;
  if(!(tbl->idxmem == ((char *)NULL)))
  {
    char *mem = tbl->idxmem + (signed long int)(prefix * nbByteM);
    el->low = (unsigned long int)0;
    el->high = (unsigned long int)0;
    memcpy((void *)&el->low, (const void *)mem, (unsigned long int)nbByteM);
    memcpy((void *)&el->high, (const void *)(mem + (signed long int)nbByteM), (unsigned long int)nbByteM);
  }

  else
  {
    struct _IO_FILE *idxfile = tbl->idxfile;
    fseeko(idxfile, (signed long int)(prefix * nbByteM), 0);
    el->low = (unsigned long int)0;
    el->high = (unsigned long int)0;
    fread((void *)&el->low, (unsigned long int)nbByteM, (unsigned long int)1, idxfile);
    fread((void *)&el->high, (unsigned long int)nbByteM, (unsigned long int)1, idxfile);
    stat->fseek_idx = stat->fseek_idx + 1ul;
  }
  return 1;
}

// ntproba_lookup_srt
// file ntproba.c line 292
signed int ntproba_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  struct ophstat_t_ *stat = el->stat;
  struct proba_info_ *proba = (struct proba_info_ *)tbl->param;
  unsigned int nbByteM0 = proba->nbByteM0;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    el->start = (unsigned long int)0;
    memcpy((void *)&el->start, (const void *)(tbl->srtmem + (signed long int)(el->offset * (unsigned long int)nbByteM0)), (unsigned long int)nbByteM0);
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)(el->offset * (unsigned long int)nbByteM0), 0);
    el->start = (unsigned long int)0;
    fread((void *)&el->start, (unsigned long int)nbByteM0, (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  return 1;
}

// ntproba_proba_info_alloc
// file ntproba.c line 107
struct proba_info_ * ntproba_proba_info_alloc(struct table_t_ *tbl)
{
  struct proba_info_ *proba;
  proba=proba_info_alloc();
  switch((signed int)tbl->kind)
  {
    case ntprobafree:
    {
      proba->mtype = (enum markovType)MARK2;
      proba->power2 = (unsigned int)39;
      proba->nbByteM0 = (unsigned int)4;
      proba->nbByteM = (unsigned int)4;
      proba->nbByteBin = (unsigned int)3;
      proba->nbBitIndex = (unsigned int)15;
      break;
    }
    case ntproba10g:
    {
      proba->mtype = (enum markovType)MARK2;
      proba->power2 = (unsigned int)43;
      proba->nbByteM0 = (unsigned int)4;
      proba->nbByteM = (unsigned int)4;
      proba->nbByteBin = (unsigned int)3;
      proba->nbBitIndex = (unsigned int)19;
      break;
    }
    case ntproba60g:
    {
      proba->mtype = (enum markovType)MARK2;
      proba->power2 = (unsigned int)46;
      proba->nbByteM0 = (unsigned int)5;
      proba->nbByteM = (unsigned int)4;
      proba->nbByteBin = (unsigned int)3;
      proba->nbBitIndex = (unsigned int)22;
    }
  }
  char return_value_readImprobaStructFromBinFile_1;
  return_value_readImprobaStructFromBinFile_1=readImprobaStructFromBinFile(&proba->mis, tbl->path, "markovI.dat");
  _Bool tmp_if_expr_3;
  signed int return_value_initMarkovDynProgWrapper_2;
  if(return_value_readImprobaStructFromBinFile_1 == 0)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_initMarkovDynProgWrapper_2=initMarkovDynProgWrapper(proba->mdpw, proba->mis, proba->mtype);
    tmp_if_expr_3 = !(return_value_initMarkovDynProgWrapper_2 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  char return_value_readPatternArrayFromXMLFile_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_readPatternArrayFromXMLFile_4=readPatternArrayFromXMLFile(proba->array, tbl->path, "pattern.xml");
    tmp_if_expr_5 = !(return_value_readPatternArrayFromXMLFile_4 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  char return_value_checkPatternArrayCrackMarkov_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_checkPatternArrayCrackMarkov_6=checkPatternArrayCrackMarkov(proba->array, proba->mdpw, proba->mis);
    tmp_if_expr_7 = !(return_value_checkPatternArrayCrackMarkov_6 != 0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_7)
  {
    ntproba_cleanup((void *)tbl);
    return (struct proba_info_ *)(void *)0;
  }

  else
    return proba;
}

// ntproba_setup
// file ntproba.h line 42
signed int ntproba_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 35000;
  tbl->offset = 35000;
  tbl->shared_init = (unsigned char)1;
  switch((signed int)tbl->kind)
  {
    case ntprobafree:
    {
      tbl->sizes = ntprobafree_sizes;
      tbl->inisize = (unsigned long int)152698328;
      break;
    }
    case ntproba10g:
    {
      tbl->sizes = ntproba10g_sizes;
      tbl->inisize = (unsigned long int)154943200;
      break;
    }
    case ntproba60g:
    {
      tbl->sizes = ntproba60g_sizes;
      tbl->inisize = (unsigned long int)151964072;
    }
  }
  tbl->init = ntproba_init;
  tbl->cleanup = ntproba_cleanup;
  tbl->find = ntproba_find;
  tbl->check = ntproba_check;
  tbl->isvalid = ntproba_isvalid;
  tbl->lookup_idx = ntproba_lookup_idx;
  tbl->lookup_end = ntproba_lookup_end;
  tbl->lookup_srt = ntproba_lookup_srt;
  return 1;
}

// ntseven_bin95
// file ntseven.c line 229
unsigned long int ntseven_bin95(unsigned char *input, signed int length)
{
  unsigned long int sum = (unsigned long int)0;
  signed int i = 0;
  i = 0;
  for( ; !(i >= length); i = i + 1)
  {
    char *return_value___builtin_strchr_1;
    return_value___builtin_strchr_1=__builtin_strchr((char *)ntseven_ext95, (signed int)input[(signed long int)i]);
    sum = sum * (unsigned long int)95 + (unsigned long int)(return_value___builtin_strchr_1 - (char *)ntseven_ext95);
  }
  return sum;
}

// ntseven_check
// file ntseven.c line 142
signed int ntseven_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    ntseven_mkhash(pwd, tmp);
    ntseven_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  ntseven_mkhash(pwd, tmp);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, sizeof(unsigned char [16l]) /*16ul*/ );
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// ntseven_find
// file ntseven.c line 60
void ntseven_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  ntseven_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    ntseven_mkhash(pwd, tmp);
    ntseven_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned long int binary;
  binary=ntseven_bin95(pwd, 7);
  unsigned int prefix = (unsigned int)(binary >> 23);
  unsigned short int postfix = (unsigned short int)(binary & (unsigned long int)0xffff);
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// ntseven_isvalid
// file ntseven.c line 186
signed int ntseven_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// ntseven_lookup_srt
// file ntseven.c line 97
signed int ntseven_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned int *mem = (unsigned int *)(tbl->srtmem + (signed long int)offset);
    start = mem[(signed long int)0];
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  pwd[(signed long int)5] = (unsigned char)0;
  pwd[(signed long int)6] = (unsigned char)0;
  pwd[(signed long int)7] = (unsigned char)0;
  pwd[(signed long int)8] = (unsigned char)0;
  ntseven_unbin95(start, pwd, 5);
  return 1;
}

// ntseven_mkhash
// file ntseven.c line 225
void ntseven_mkhash(unsigned char *pwd, unsigned char *hash)
{
  make_nthash((char *)pwd, (char *)hash);
}

// ntseven_mkredux
// file ntseven.c line 192
void ntseven_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  unsigned int idx[4l];
  idx[(signed long int)0] = *((unsigned int *)hash) ^ (unsigned int)n_redux;
  idx[(signed long int)1] = *((unsigned int *)(hash + (signed long int)4));
  idx[(signed long int)2] = *((unsigned int *)(hash + (signed long int)8));
  idx[(signed long int)3] = *((unsigned int *)(hash + (signed long int)12));
  idx[(signed long int)0] = idx[(signed long int)0] % power2_95;
  idx[(signed long int)1] = idx[(signed long int)1] % power2_95;
  idx[(signed long int)2] = idx[(signed long int)2] % power2_95;
  idx[(signed long int)3] = idx[(signed long int)3] % power2_95;
  pwd[(signed long int)0] = ntseven_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
  pwd[(signed long int)1] = ntseven_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
  pwd[(signed long int)2] = ntseven_ext95[(signed long int)(idx[(signed long int)1] / (unsigned int)95)];
  pwd[(signed long int)3] = ntseven_ext95[(signed long int)(idx[(signed long int)1] % (unsigned int)95)];
  pwd[(signed long int)4] = ntseven_ext95[(signed long int)(idx[(signed long int)2] / (unsigned int)95)];
  pwd[(signed long int)5] = ntseven_ext95[(signed long int)(idx[(signed long int)2] % (unsigned int)95)];
  pwd[(signed long int)6] = ntseven_ext95[(signed long int)(idx[(signed long int)3] / (unsigned int)95)];
  pwd[(signed long int)7] = (unsigned char)0;
}

// ntseven_setup
// file ntseven.h line 49
signed int ntseven_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 50000;
  tbl->offset = 100000;
  tbl->sizes = ntseven_sizes;
  tbl->find = ntseven_find;
  tbl->check = ntseven_check;
  tbl->isvalid = ntseven_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = lmtable_lookup_end;
  tbl->lookup_srt = ntseven_lookup_srt;
  return 1;
}

// ntseven_unbin95
// file ntseven.c line 240
signed int ntseven_unbin95(unsigned int input, unsigned char *output, signed int length)
{
  signed int i = 0;
  i = length - 1;
  for( ; i >= 0; i = i - 1)
  {
    output[(signed long int)i] = ntseven_ext95[(signed long int)(input % (unsigned int)95)];
    input = input / (unsigned int)95;
  }
  return 1;
}

// ntspecialxl_bin95
// file ntspecialxl.c line 359
unsigned long int ntspecialxl_bin95(unsigned char *input, signed int length)
{
  unsigned long int sum = (unsigned long int)0;
  signed int i = 0;
  i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(i >= length))
      tmp_if_expr_1 = input[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    char *return_value___builtin_strchr_2;
    return_value___builtin_strchr_2=__builtin_strchr((char *)ntspecialxl_ext95, (signed int)input[(signed long int)i]);
    sum = sum * (unsigned long int)95 + (unsigned long int)(return_value___builtin_strchr_2 - (char *)ntspecialxl_ext95);
    i = i + 1;
  }
  while((_Bool)1);
  sum = sum + ntspecialxl_offset[(signed long int)(i - 1)];
  return sum;
}

// ntspecialxl_check
// file ntspecialxl.c line 193
signed int ntspecialxl_check(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  stat->falarm_hredux = (unsigned long int)0;
  c = ncols - col;
  for( ; !(c >= ncols); c = c + 1)
  {
    ntspecialxl_mkhash(pwd, tmp);
    ntspecialxl_mkredux(tbl, tmp, pwd, n_redux);
    n_redux = n_redux + 1;
    stat->hredux = stat->hredux + 1ul;
    stat->falarm_hredux = stat->falarm_hredux + 1ul;
  }
  ntspecialxl_mkhash(pwd, tmp);
  signed int return_value_memcmp_1;
  return_value_memcmp_1=memcmp((const void *)tmp, (const void *)hash, sizeof(unsigned char [16l]) /*16ul*/ );
  if(return_value_memcmp_1 == 0)
  {
    stat->match_table = stat->match_table + 1ul;
    stat->falarm_hredux = (unsigned long int)0;
    return 1;
  }

  else
  {
    stat->falarm = stat->falarm + 1ul;
    return 0;
  }
}

// ntspecialxl_find
// file ntspecialxl.c line 63
void ntspecialxl_find(void *hsh_, void *tbl_, void *el_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned char *hash = hsh->hash;
  unsigned char *pwd = (unsigned char *)el->pwd;
  struct ophstat_t_ *stat = el->stat;
  signed int c;
  signed int col = el->col;
  signed int ncols = tbl->ncols;
  signed int n_redux = col + tbl->idx * tbl->offset;
  unsigned char tmp[16l];
  ntspecialxl_mkredux(tbl, hash, pwd, n_redux);
  c = 1;
  for( ; !(c >= ncols + -col); c = c + 1)
  {
    n_redux = n_redux + 1;
    ntspecialxl_mkhash(pwd, tmp);
    ntspecialxl_mkredux(tbl, tmp, pwd, n_redux);
    stat->hredux = stat->hredux + 1ul;
  }
  unsigned long int binary;
  binary=ntspecialxl_bin95(pwd, 7);
  unsigned int prefix = (unsigned int)(binary >> 20);
  unsigned short int postfix = (unsigned short int)(binary & (unsigned long int)0xffff);
  el->prefix = (unsigned long int)prefix;
  el->postfix = (unsigned long int)postfix;
}

// ntspecialxl_isvalid
// file ntspecialxl.c line 237
signed int ntspecialxl_isvalid(void *hsh_, void *tbl_)
{
  struct hash_t_ *hsh = (struct hash_t_ *)hsh_;
  return (signed int)hsh->kind == nt ? 1 : 0;
}

// ntspecialxl_lookup_end
// file ntspecialxl.c line 100
signed int ntspecialxl_lookup_end(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  struct ophstat_t_ *stat = el->stat;
  unsigned short int postfix = (unsigned short int)el->postfix;
  unsigned long int low = el->low;
  unsigned long int high = el->high;
  unsigned long int n = high - low;
  unsigned long int i;
  unsigned long int offset = (unsigned long int)2 * low;
  if(!(tbl->endmem == ((char *)NULL)))
  {
    unsigned short int *mem = (unsigned short int *)(tbl->endmem + (signed long int)offset);
    i = (unsigned long int)0;
    for( ; !(i >= n); i = i + 1ul)
      if(mem[(signed long int)i] == postfix)
        break;

  }

  else
  {
    unsigned short int pfix[512l];
    struct _IO_FILE *endfile = tbl->endfile;
    fseeko(endfile, (signed long int)offset, 0);
    fread((void *)pfix, sizeof(unsigned short int) /*2ul*/ , n, endfile);
    stat->fseek_end = stat->fseek_end + 1ul;
    i = (unsigned long int)0;
    for( ; !(i >= n); i = i + 1ul)
      if(pfix[(signed long int)i] == postfix)
        break;

  }
  el->offset = (unsigned long int)5 * (low + i);
  if(!(i >= n))
    stat->postfix = stat->postfix + 1ul;

  return i == n ? 0 : 1;
}

// ntspecialxl_lookup_srt
// file ntspecialxl.c line 145
signed int ntspecialxl_lookup_srt(void *hsh_, void *tbl_, void *el_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  struct ophel_t_ *el = (struct ophel_t_ *)el_;
  unsigned long int offset = el->offset;
  unsigned long int start;
  struct ophstat_t_ *stat = el->stat;
  stat->start = stat->start + 1ul;
  start = (unsigned long int)0;
  if(!(tbl->srtmem == ((char *)NULL)))
  {
    unsigned char *mem = (unsigned char *)(tbl->srtmem + (signed long int)offset);
    memcpy((void *)&start, (const void *)mem, (unsigned long int)5);
  }

  else
  {
    struct _IO_FILE *srtfile = tbl->srtfile;
    fseeko(srtfile, (signed long int)offset, 0);
    fread((void *)&start, (unsigned long int)5, (unsigned long int)1, srtfile);
    stat->fseek_srt = stat->fseek_srt + 1ul;
  }
  start = start;
  unsigned char *pwd = (unsigned char *)el->pwd;
  pwd[(signed long int)6] = (unsigned char)0;
  pwd[(signed long int)7] = (unsigned char)0;
  pwd[(signed long int)8] = (unsigned char)0;
  pwd[(signed long int)9] = (unsigned char)0;
  ntspecialxl_unbin95(start, pwd, 6);
  return 1;
}

// ntspecialxl_mkhash
// file ntspecialxl.c line 355
void ntspecialxl_mkhash(unsigned char *pwd, unsigned char *hash)
{
  make_nthash((char *)pwd, (char *)hash);
}

// ntspecialxl_mkredux
// file ntspecialxl.c line 243
void ntspecialxl_mkredux(struct table_t_ *tbl, unsigned char *hash, unsigned char *pwd, signed int n_redux)
{
  unsigned int idx[4l];
  unsigned int a;
  unsigned int b;
  unsigned long int limit;
  idx[(signed long int)0] = *((unsigned int *)hash) ^ (unsigned int)n_redux;
  idx[(signed long int)1] = *((unsigned int *)(hash + (signed long int)4));
  idx[(signed long int)2] = *((unsigned int *)(hash + (signed long int)8));
  idx[(signed long int)3] = *((unsigned int *)(hash + (signed long int)12));
  limit = (unsigned long int)idx[(signed long int)2] << 32 | (unsigned long int)idx[(signed long int)3];
  if(!(limit >= ntspecialxl_max[7l]))
  {
    a = idx[(signed long int)0] / (unsigned int)9025;
    b = idx[(signed long int)1] / (unsigned int)9025;
    a = a % (unsigned int)9025;
    b = b % (unsigned int)9025;
    idx[(signed long int)0] = idx[(signed long int)0] % (unsigned int)9025;
    idx[(signed long int)1] = idx[(signed long int)1] % (unsigned int)9025;
    pwd[(signed long int)0] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
    pwd[(signed long int)1] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
    pwd[(signed long int)2] = ntspecialxl_ext95[(signed long int)(a / (unsigned int)95)];
    pwd[(signed long int)3] = ntspecialxl_ext95[(signed long int)(a % (unsigned int)95)];
    pwd[(signed long int)4] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)1] / (unsigned int)95)];
    pwd[(signed long int)5] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)1] % (unsigned int)95)];
    pwd[(signed long int)6] = ntspecialxl_ext95[(signed long int)(b / (unsigned int)95)];
    pwd[(signed long int)7] = (unsigned char)0;
  }

  else
    if(!(limit >= ntspecialxl_max[6l]))
    {
      a = idx[(signed long int)0] / (unsigned int)9025;
      a = a % (unsigned int)9025;
      idx[(signed long int)0] = idx[(signed long int)0] % (unsigned int)9025;
      idx[(signed long int)1] = idx[(signed long int)1] % (unsigned int)9025;
      pwd[(signed long int)0] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
      pwd[(signed long int)1] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
      pwd[(signed long int)2] = ntspecialxl_ext95[(signed long int)(a / (unsigned int)95)];
      pwd[(signed long int)3] = ntspecialxl_ext95[(signed long int)(a % (unsigned int)95)];
      pwd[(signed long int)4] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)1] / (unsigned int)95)];
      pwd[(signed long int)5] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)1] % (unsigned int)95)];
      pwd[(signed long int)6] = (unsigned char)0;
      pwd[(signed long int)7] = (unsigned char)0;
    }

    else
      if(!(limit >= ntspecialxl_max[5l]))
      {
        a = idx[(signed long int)0] / (unsigned int)9025;
        a = a % (unsigned int)9025;
        idx[(signed long int)0] = idx[(signed long int)0] % (unsigned int)9025;
        idx[(signed long int)1] = idx[(signed long int)1] % (unsigned int)9025;
        pwd[(signed long int)0] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
        pwd[(signed long int)1] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
        pwd[(signed long int)2] = ntspecialxl_ext95[(signed long int)(a / (unsigned int)95)];
        pwd[(signed long int)3] = ntspecialxl_ext95[(signed long int)(a % (unsigned int)95)];
        pwd[(signed long int)4] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)1] / (unsigned int)95)];
        pwd[(signed long int)5] = (unsigned char)0;
        pwd[(signed long int)6] = (unsigned char)0;
        pwd[(signed long int)7] = (unsigned char)0;
      }

      else
        if(!(limit >= ntspecialxl_max[4l]))
        {
          a = idx[(signed long int)0] / (unsigned int)9025;
          a = a % (unsigned int)9025;
          idx[(signed long int)0] = idx[(signed long int)0] % (unsigned int)9025;
          pwd[(signed long int)0] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
          pwd[(signed long int)1] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
          pwd[(signed long int)2] = ntspecialxl_ext95[(signed long int)(a / (unsigned int)95)];
          pwd[(signed long int)3] = ntspecialxl_ext95[(signed long int)(a % (unsigned int)95)];
          pwd[(signed long int)4] = (unsigned char)0;
          pwd[(signed long int)5] = (unsigned char)0;
          pwd[(signed long int)6] = (unsigned char)0;
          pwd[(signed long int)7] = (unsigned char)0;
        }

        else
          if(!(limit >= ntspecialxl_max[3l]))
          {
            a = idx[(signed long int)0] / (unsigned int)9025;
            a = a % (unsigned int)9025;
            idx[(signed long int)0] = idx[(signed long int)0] % (unsigned int)9025;
            pwd[(signed long int)0] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
            pwd[(signed long int)1] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
            pwd[(signed long int)2] = ntspecialxl_ext95[(signed long int)(a / (unsigned int)95)];
            pwd[(signed long int)3] = (unsigned char)0;
            pwd[(signed long int)4] = (unsigned char)0;
            pwd[(signed long int)5] = (unsigned char)0;
            pwd[(signed long int)6] = (unsigned char)0;
            pwd[(signed long int)7] = (unsigned char)0;
          }

          else
            if(!(limit >= ntspecialxl_max[2l]))
            {
              idx[(signed long int)0] = idx[(signed long int)0] % (unsigned int)9025;
              pwd[(signed long int)0] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
              pwd[(signed long int)1] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] % (unsigned int)95)];
              pwd[(signed long int)2] = (unsigned char)0;
              pwd[(signed long int)3] = (unsigned char)0;
              pwd[(signed long int)4] = (unsigned char)0;
              pwd[(signed long int)5] = (unsigned char)0;
              pwd[(signed long int)6] = (unsigned char)0;
              pwd[(signed long int)7] = (unsigned char)0;
            }

            else
            {
              idx[(signed long int)0] = idx[(signed long int)0] % (unsigned int)9025;
              pwd[(signed long int)0] = ntspecialxl_ext95[(signed long int)(idx[(signed long int)0] / (unsigned int)95)];
              pwd[(signed long int)1] = (unsigned char)0;
              pwd[(signed long int)2] = (unsigned char)0;
              pwd[(signed long int)3] = (unsigned char)0;
              pwd[(signed long int)4] = (unsigned char)0;
              pwd[(signed long int)5] = (unsigned char)0;
              pwd[(signed long int)6] = (unsigned char)0;
              pwd[(signed long int)7] = (unsigned char)0;
            }
}

// ntspecialxl_setup
// file ntspecialxl.h line 51
signed int ntspecialxl_setup(void *tbl_)
{
  struct table_t_ *tbl = (struct table_t_ *)tbl_;
  tbl->ncols = 30000;
  tbl->offset = 100000;
  tbl->sizes = ntspecialxl_sizes;
  tbl->find = ntspecialxl_find;
  tbl->check = ntspecialxl_check;
  tbl->isvalid = ntspecialxl_isvalid;
  tbl->lookup_idx = lmtable_lookup_idx;
  tbl->lookup_end = ntspecialxl_lookup_end;
  tbl->lookup_srt = ntspecialxl_lookup_srt;
  return 1;
}

// ntspecialxl_unbin95
// file ntspecialxl.c line 371
signed int ntspecialxl_unbin95(unsigned long int input, unsigned char *output, signed int length)
{
  signed int i = 0;
  i = 0;
  for( ; !(i >= length); i = i + 1)
  {
    output[(signed long int)i] = ntspecialxl_ext95[(signed long int)(input % (unsigned long int)95)];
    input = input / (unsigned long int)95;
  }
  return 1;
}

// ophcrack_add_hash
// file ophcrack.h line 80
void ophcrack_add_hash(struct ophcrack_t_ *crack, struct hash_t_ *hsh)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  pthread_mutex_lock(mutex);
  list_add_tail(crack->hashes, (void *)hsh);
  signed int tmp_if_expr_1;
  if(!(1 + hsh->id >= crack->maxhid))
    tmp_if_expr_1 = crack->maxhid;

  else
    tmp_if_expr_1 = hsh->id + 1;
  crack->maxhid = tmp_if_expr_1;
  if((signed int)hsh->kind == lm1)
    crack->npwds_total = crack->npwds_total + 1;

  else
    if(hsh->lmhsh1 == ((struct hash_t_ *)NULL))
    {
      if(hsh->lmhsh2 == ((struct hash_t_ *)NULL))
        crack->npwds_total = crack->npwds_total + 1;

    }

  pthread_mutex_unlock(mutex);
  _Bool tmp_if_expr_2;
  if(hsh->done >= 1)
  {
    hsh->done = 0;
    if(!((signed int)hsh->kind == lm1))
      tmp_if_expr_2 = hsh->lmhsh1 != ((struct hash_t_ *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      signed int tmp = hsh->lmhsh1->done;
      hsh->lmhsh1->done = 0;
      ophcrack_found(crack, hsh, ((struct table_t_ *)NULL), 0, hsh->pwd);
      hsh->lmhsh1->done = tmp;
    }

    else
      ophcrack_found(crack, hsh, ((struct table_t_ *)NULL), 0, hsh->pwd);
  }

  else
    if(!(hsh->done >= 0))
    {
      hsh->done = 0;
      ophcrack_notfound(crack, hsh);
    }

}

// ophcrack_add_table
// file ophcrack.h line 79
void ophcrack_add_table(struct ophcrack_t_ *crack, struct table_t_ *tbl)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  signed int tmp_if_expr_1;
  if(!(1 + (signed int)tbl->kind >= (signed int)crack->maxtkind))
    tmp_if_expr_1 = (signed int)crack->maxtkind;

  else
    tmp_if_expr_1 = (signed int)tbl->kind + 1;
  crack->maxtkind = (enum anonymous_2)tmp_if_expr_1;
  signed int tmp_post_2 = crack->maxtid;
  crack->maxtid = crack->maxtid + 1;
  tbl->id = tmp_post_2;
  tbl->cmin = tbl->ncols;
  tbl->cmax = tbl->ncols;
  pthread_mutex_lock(mutex);
  list_add_tail(crack->tables, (void *)tbl);
  pthread_mutex_unlock(mutex);
}

// ophcrack_alloc
// file ophcrack.h line 73
struct ophcrack_t_ * ophcrack_alloc(signed int nthreads, struct arg_t_ *arg)
{
  struct ophcrack_t_ *crack;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct ophcrack_t_) /*112ul*/ );
  crack = (struct ophcrack_t_ *)return_value_malloc_1;
  crack->sched=scheduler_alloc(nthreads);
  crack->tables=list_alloc();
  crack->hashes=list_alloc();
  crack->active=list_alloc();
  crack->enabled=list_alloc();
  crack->remaining=list_alloc();
  crack->hnd = ((struct list_nd_t_ *)NULL);
  crack->stat=ophstat_alloc();
  crack->maxtid = 0;
  crack->maxhid = 0;
  crack->maxtkind = (enum anonymous_2)unknown;
  crack->npwds_total = 0;
  crack->npwds_found = 0;
  crack->find_freeram = find_freeram;
  crack->freeram = (unsigned long int)0;
  crack->arg = arg;
  return crack;
}

// ophcrack_associate
// file ophcrack.h line 81
void ophcrack_associate(struct ophcrack_t_ *crack, struct hash_t_ *hsh, struct table_t_ *tbl)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  pthread_mutex_lock(mutex);
  signed int return_value;
  return_value=tbl->isvalid((void *)hsh, (void *)tbl);
  if(!(return_value == 0))
    hash_add_table(hsh, tbl);

  pthread_mutex_unlock(mutex);
}

// ophcrack_bforce_all
// file ophcrack.c line 958
struct ophtask_t_ * ophcrack_bforce_all(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  struct ophbforce_t_ *ophcrack_bforce_all__1__force = (struct ophbforce_t_ *)task->data;
  struct hash_t_ **hashes = ophcrack_bforce_all__1__force->hashes;
  struct list_t_ *hashes_lm;
  hashes_lm=list_alloc();
  struct list_t_ *hashes_nt;
  hashes_nt=list_alloc();
  signed int ophcrack_bforce_all__1__nhashes = ophcrack_bforce_all__1__force->nhashes;
  signed int n = 0;
  _Bool tmp_if_expr_1;
  for( ; !(n >= ophcrack_bforce_all__1__nhashes); n = n + 1)
  {
    struct hash_t_ *hsh = hashes[(signed long int)n];
    enum anonymous_0 kind = hsh->kind;
    if(hsh->done == 0)
      switch((signed int)kind)
      {
        case lm1:
        {
          if(!(hsh->lmhsh2->done == 0))
          {
            if((signed int)*hsh->lmhsh2->pwd == 0)
              list_add_tail(hashes_lm, (void *)hsh);

          }

          break;
        }
        case lm2:
        {
          list_add_tail(hashes_lm, (void *)hsh);
          break;
        }
        case nt:
        {
          if(hsh->lmhsh1 == ((struct hash_t_ *)NULL))
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = !(hsh->lmhsh2 != ((struct hash_t_ *)NULL)) ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
            list_add_tail(hashes_nt, (void *)hsh);

        }
      }

  }
  signed int maxlen = crack->arg->bforce_len;
  struct list_nd_t_ *nd;
  signed int i;
  signed int size_lm = (signed int)sizeof(const unsigned char [69l]) /*69ul*/ ;
  unsigned long int count_lm = (unsigned long int)0;
  double return_value_pow_3;
  if(hashes_lm->size >= 1)
  {
    struct ophtask_t_ *ophcrack_bforce_all__1__2__task;
    ophcrack_bforce_all__1__2__task=ophtask_alloc((enum anonymous_12)bforce_lm);
    struct ophbforce_t_ *force = (struct ophbforce_t_ *)ophcrack_bforce_all__1__2__task->data;
    signed int nhashes = hashes_lm->size;
    force->nhashes = nhashes;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)nhashes * sizeof(struct hash_t_ *) /*8ul*/ );
    force->hashes = (struct hash_t_ **)return_value_malloc_2;
    nd = hashes_lm->head;
    n = 0;
    for( ; !(nd == ((struct list_nd_t_ *)NULL)); n = n + 1)
    {
      force->hashes[(signed long int)n] = (struct hash_t_ *)nd->data;
      nd = nd->next;
    }
    i = 1;
    for( ; maxlen >= i; i = i + 1)
    {
      return_value_pow_3=pow((double)size_lm, (double)i);
      count_lm = count_lm + (unsigned long int)return_value_pow_3;
    }
    force->count = (signed int)count_lm;
    scheduler_add(sched, (void *)ophcrack_bforce_all__1__2__task, (enum anonymous_8)low);
  }

  signed int size_nt = (signed int)sizeof(const unsigned char [95l]) /*95ul*/ ;
  unsigned long int count_nt = (unsigned long int)0;
  double return_value_pow_5;
  if(hashes_nt->size >= 1)
  {
    struct ophtask_t_ *ophcrack_bforce_all__1__3__task;
    ophcrack_bforce_all__1__3__task=ophtask_alloc((enum anonymous_12)bforce_nt);
    struct ophbforce_t_ *ophcrack_bforce_all__1__3__force = (struct ophbforce_t_ *)ophcrack_bforce_all__1__3__task->data;
    signed int ophcrack_bforce_all__1__3__nhashes = hashes_nt->size;
    ophcrack_bforce_all__1__3__force->nhashes = ophcrack_bforce_all__1__3__nhashes;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc((unsigned long int)ophcrack_bforce_all__1__3__nhashes * sizeof(struct hash_t_ *) /*8ul*/ );
    ophcrack_bforce_all__1__3__force->hashes = (struct hash_t_ **)return_value_malloc_4;
    nd = hashes_nt->head;
    n = 0;
    for( ; !(nd == ((struct list_nd_t_ *)NULL)); n = n + 1)
    {
      ophcrack_bforce_all__1__3__force->hashes[(signed long int)n] = (struct hash_t_ *)nd->data;
      nd = nd->next;
    }
    i = 1;
    for( ; maxlen >= i; i = i + 1)
    {
      return_value_pow_5=pow((double)size_nt, (double)i);
      count_nt = count_nt + (unsigned long int)return_value_pow_5;
    }
    ophcrack_bforce_all__1__3__force->count = (signed int)count_nt;
    scheduler_add(sched, (void *)ophcrack_bforce_all__1__3__task, (enum anonymous_8)low);
  }

  signed int count = (signed int)(count_lm + count_nt);
  if(count == 0)
  {
    message_bforce(0, (unsigned long int)1);
    message_bforce(1, (unsigned long int)1);
  }

  else
    message_bforce(0, (unsigned long int)count);
  list_free(hashes_lm);
  list_free(hashes_nt);
  return task;
}

// ophcrack_bforce_lm
// file ophcrack.c line 1246
struct ophtask_t_ * ophcrack_bforce_lm(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophbforce_t_ *force = (struct ophbforce_t_ *)task->data;
  struct hash_t_ **hashes = force->hashes;
  signed int nhashes = force->nhashes;
  signed int *bloom = force->bloom;
  signed int n;
  signed int bloom_byte;
  signed int bloom_bit;
  if(force->hash == ((unsigned char **)NULL))
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)nhashes, sizeof(unsigned char *) /*8ul*/ );
    force->hash = (unsigned char **)return_value_calloc_1;
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)nhashes, sizeof(signed int) /*4ul*/ );
    force->found = (signed int *)return_value_calloc_2;
    n = 0;
    for( ; !(n >= nhashes); n = n + 1)
    {
      struct hash_t_ *hsh = hashes[(signed long int)n];
      void *return_value_malloc_3;
      return_value_malloc_3=malloc((unsigned long int)8 * sizeof(unsigned char) /*1ul*/ );
      force->hash[(signed long int)n] = (unsigned char *)return_value_malloc_3;
      memcpy((void *)force->hash[(signed long int)n], (const void *)hsh->hash, (unsigned long int)8);
      bloom_byte = *((signed int *)force->hash[(signed long int)n]) & 0xfffff;
      bloom_bit = 1 << (bloom_byte >> 15);
      bloom[(signed long int)(bloom_byte & 0x7fff)] = bloom[(signed long int)(bloom_byte & 0x7fff)] | bloom_bit;
    }
  }

  const unsigned char *chars = extended_chars_link2;
  signed int size = (signed int)sizeof(const unsigned char [69l]) /*69ul*/ ;
  unsigned char pwd[8l] = { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned char hash[8l] = { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0 };
  signed int *idx = force->idx;
  signed int len = force->len;
  signed int nhredux = crack->arg->nhredux;
  signed int maxlen = crack->arg->bforce_len;
  signed int count = nhredux;
  signed int i = 0;
  signed int return_value_memcmp_4;
  while(count >= 1 && maxlen >= len)
  {
    while(!(*idx >= size))
    {
      if(!(count >= 1))
        break;

      count = count - 1;
      force->count = force->count - 1;
      for( ; !(i >= len); i = i + 1)
        pwd[(signed long int)i] = chars[(signed long int)idx[(signed long int)i]];
      lmtable_mkhash(pwd, hash);
      signed int *bbp = (signed int *)hash;
      bloom_byte = *bbp & 0xfffff;
      bloom_bit = 1 << (bloom_byte >> 15);
      if(!((bloom[(signed long int)(0x7fff & bloom_byte)] & bloom_bit) == 0))
      {
        n = 0;
        for( ; !(n >= nhashes); n = n + 1)
        {
          signed int found = force->found[(signed long int)n];
          if(found == 0)
          {
            return_value_memcmp_4=memcmp((const void *)force->hash[(signed long int)n], (const void *)hash, (unsigned long int)8);
            if(return_value_memcmp_4 == 0)
            {
              force->found[(signed long int)n] = 1;
              if(hashes[(signed long int)n]->id >= 0)
              {
                ophcrack_found(crack, hashes[(signed long int)n], ((struct table_t_ *)NULL), 0, (char *)pwd);
                task->stat->match_bforce = task->stat->match_bforce + 1ul;
              }

            }

          }

        }
      }

      i = i - 1;
      idx[(signed long int)i] = idx[(signed long int)i] + 1;
      for( ; idx[(signed long int)i] == size; idx[(signed long int)i] = idx[(signed long int)i] + 1)
      {
        if(!(i >= 1))
          break;

        idx[(signed long int)i] = 0;
        i = i - 1;
      }
    }
    if(*idx == size)
    {
      len = len + 1;
      idx[(signed long int)0] = 0;
    }

  }
  message_bforce(1, (unsigned long int)(nhredux - count));
  if(maxlen >= len)
  {
    force->len = len;
    pthread_mutex_lock(mutex);
    ophstat_add(crack->stat, task->stat);
    pthread_mutex_unlock(mutex);
    ophstat_reset(task->stat);
    scheduler_add(sched, (void *)task, (enum anonymous_8)low);
    task = ((struct ophtask_t_ *)NULL);
  }

  return task;
}

// ophcrack_bforce_nt
// file ophcrack.c line 1107
struct ophtask_t_ * ophcrack_bforce_nt(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophbforce_t_ *force = (struct ophbforce_t_ *)task->data;
  struct hash_t_ **hashes = force->hashes;
  signed int nhashes = force->nhashes;
  signed int *bloom = force->bloom;
  signed int n;
  signed int bloom_byte;
  signed int bloom_bit;
  if(force->hash == ((unsigned char **)NULL))
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)nhashes, sizeof(unsigned char *) /*8ul*/ );
    force->hash = (unsigned char **)return_value_calloc_1;
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)nhashes, sizeof(signed int) /*4ul*/ );
    force->found = (signed int *)return_value_calloc_2;
    n = 0;
    for( ; !(n >= nhashes); n = n + 1)
    {
      struct hash_t_ *hsh = hashes[(signed long int)n];
      void *return_value_malloc_3;
      return_value_malloc_3=malloc((unsigned long int)16 * sizeof(unsigned char) /*1ul*/ );
      force->hash[(signed long int)n] = (unsigned char *)return_value_malloc_3;
      memcpy((void *)force->hash[(signed long int)n], (const void *)hsh->hash, (unsigned long int)16);
      bloom_byte = *((signed int *)force->hash[(signed long int)n]) & 0xfffff;
      bloom_bit = 1 << (bloom_byte >> 15);
      bloom[(signed long int)(bloom_byte & 0x7fff)] = bloom[(signed long int)(bloom_byte & 0x7fff)] | bloom_bit;
    }
  }

  const unsigned char *chars = ntextended_ext95_link1;
  signed int size = (signed int)sizeof(const unsigned char [95l]) /*95ul*/ ;
  unsigned char pwd[8l] = { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned char hash[16l] = { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int *idx = force->idx;
  signed int len = force->len;
  signed int nhredux = crack->arg->nhredux;
  signed int maxlen = crack->arg->bforce_len;
  signed int count = nhredux;
  signed int i = 0;
  signed int return_value_memcmp_4;
  while(count >= 1 && maxlen >= len)
  {
    while(!(*idx >= size))
    {
      if(!(count >= 1))
        break;

      count = count - 1;
      force->count = force->count - 1;
      for( ; !(i >= len); i = i + 1)
        pwd[(signed long int)i] = chars[(signed long int)idx[(signed long int)i]];
      ntextended_mkhash(pwd, hash);
      signed int *bbp = (signed int *)hash;
      bloom_byte = *bbp & 0xfffff;
      bloom_bit = 1 << (bloom_byte >> 15);
      if(!((bloom[(signed long int)(0x7fff & bloom_byte)] & bloom_bit) == 0))
      {
        n = 0;
        for( ; !(n >= nhashes); n = n + 1)
        {
          signed int found = force->found[(signed long int)n];
          if(found == 0)
          {
            return_value_memcmp_4=memcmp((const void *)force->hash[(signed long int)n], (const void *)hash, (unsigned long int)16);
            if(return_value_memcmp_4 == 0)
            {
              force->found[(signed long int)n] = 1;
              if(hashes[(signed long int)n]->id >= 0)
              {
                ophcrack_found(crack, hashes[(signed long int)n], ((struct table_t_ *)NULL), 0, (char *)pwd);
                task->stat->match_bforce = task->stat->match_bforce + 1ul;
              }

            }

          }

        }
      }

      i = i - 1;
      idx[(signed long int)i] = idx[(signed long int)i] + 1;
      for( ; idx[(signed long int)i] == size; idx[(signed long int)i] = idx[(signed long int)i] + 1)
      {
        if(!(i >= 1))
          break;

        idx[(signed long int)i] = 0;
        i = i - 1;
      }
    }
    if(*idx == size)
    {
      len = len + 1;
      idx[(signed long int)0] = 0;
    }

  }
  message_bforce(1, (unsigned long int)(nhredux - count));
  if(maxlen >= len)
  {
    force->len = len;
    pthread_mutex_lock(mutex);
    ophstat_add(crack->stat, task->stat);
    pthread_mutex_unlock(mutex);
    ophstat_reset(task->stat);
    scheduler_add(sched, (void *)task, (enum anonymous_8)low);
    task = ((struct ophtask_t_ *)NULL);
  }

  return task;
}

// ophcrack_check
// file ophcrack.c line 875
struct ophtask_t_ * ophcrack_check(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
  struct hash_t_ *hsh = work->hsh;
  struct htbl_t_ *htbl = work->htbl;
  struct table_t_ *tbl = htbl->tbl;
  signed int i;
  signed int cmin = work->cmin;
  signed int cmax = work->cmax;
  signed int size = (cmax - cmin) + 1;
  struct arg_t_ *arg = crack->arg;
  if(arg->verbose >= 1)
    message_work(hsh, tbl, check, cmin, cmax);

  struct ophel_t_ **tosearch = work->tosearch;
  i = 0;
  for( ; !(i >= size); i = i + 1)
    if(!(tosearch[(signed long int)i] == ((struct ophel_t_ *)NULL)))
    {
      if(!(arg->debug == 0))
      {
        pthread_mutex_lock(mutex);
        signed int hid = hsh->id;
        signed int idx = tbl->idx;
        const char *name = tbl->name;
        fprintf(arg->lfile, "check: ");
        switch((signed int)hsh->kind)
        {
          case lm1:
          {
            fprintf(arg->lfile, "1st LM hash ");
            break;
          }
          case lm2:
          {
            fprintf(arg->lfile, "2nd LM hash ");
            break;
          }
          case nt:
            fprintf(arg->lfile, "NT hash ");
        }
        unsigned int prefix = (unsigned int)tosearch[(signed long int)i]->prefix;
        unsigned short int postfix = (unsigned short int)tosearch[(signed long int)i]->postfix;
        unsigned long int low = tosearch[(signed long int)i]->low;
        unsigned long int high = tosearch[(signed long int)i]->high;
        unsigned long int offset = tosearch[(signed long int)i]->offset;
        fprintf(arg->lfile, "#%d in table %s,%d ", hid, name, idx);
        fprintf(arg->lfile, "at column %d, ", cmax - i);
        fprintf(arg->lfile, "with prefix = %u, ", prefix);
        fprintf(arg->lfile, "postfix = %u, ", (unsigned int)postfix);
        fprintf(arg->lfile, "low = %llu, high = %llu, ", (unsigned long long int)low, (unsigned long long int)high);
        fprintf(arg->lfile, "offset = %llu ", (unsigned long long int)offset);
        fprintf(arg->lfile, "and start = ");
        fprintf_hex(arg->lfile, tosearch[(signed long int)i]->pwd, 16);
        fprintf(arg->lfile, " ... ");
      }

      signed int col = tosearch[(signed long int)i]->col;
      char *pwd = tosearch[(signed long int)i]->pwd;
      signed int found;
      found=tbl->check((void *)hsh, (void *)tbl, (void *)tosearch[(signed long int)i]);
      if(!(found == 0))
        ophcrack_found(crack, hsh, tbl, col, pwd);

      ophstat_add(task->stat, tosearch[(signed long int)i]->stat);
      if(!(arg->debug == 0))
      {
        fprintf(arg->lfile, "found.\n");
        pthread_mutex_unlock(mutex);
      }

      if(!(found == 0))
        break;

    }

  return task;
}

// ophcrack_col_cmp
// file ophcrack.c line 1528
signed int ophcrack_col_cmp(const void *a, const void *b)
{
  struct ophel_t_ *ela = *((struct ophel_t_ **)a);
  struct ophel_t_ *elb = *((struct ophel_t_ **)b);
  if(ela == ((struct ophel_t_ *)NULL) && elb == ((struct ophel_t_ *)NULL))
    return 0;

  else
    if(ela == ((struct ophel_t_ *)NULL))
      return 1;

    else
      if(elb == ((struct ophel_t_ *)NULL))
        return -1;

  if(!(ela->col >= elb->col))
    return -1;

  else
    if(!(elb->col >= ela->col))
      return 1;

    else
      return 0;
}

// ophcrack_export_csv
// file ophcrack.h line 107
void ophcrack_export_csv(struct ophcrack_t_ *crack, struct _IO_FILE *file, signed int *fields, char separator, char quote)
{
  signed int maxhid = crack->maxhid;
  struct hash_t_ **id_to_hash;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)maxhid, sizeof(struct hash_t_ *) /*8ul*/ );
  id_to_hash = (struct hash_t_ **)return_value_calloc_1;
  struct list_t_ *hashes = crack->hashes;
  struct list_nd_t_ *nd;
  struct arg_t_ *arg = crack->arg;
  signed int hide = arg->hideuname;
  nd = hashes->head;
  for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
  {
    struct hash_t_ *ophcrack_export_csv__1__1__1__hsh = (struct hash_t_ *)nd->data;
    id_to_hash[(signed long int)ophcrack_export_csv__1__1__1__hsh->id] = ophcrack_export_csv__1__1__1__hsh;
  }
  signed int i;
  signed int first;
  i = 0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  signed int tmp_if_expr_4;
  signed int tmp_if_expr_5;
  const char *return_value_category_string_6;
  const char *return_value_category_string_7;
  const char *return_value_category_string_8;
  const char *return_value_category_string_9;
  const char *return_value_category_string_10;
  const char *return_value_category_string_11;
  for( ; !(i >= maxhid); i = i + 1)
  {
    first = 1;
    struct hash_t_ *hsh = id_to_hash[(signed long int)i];
    enum anonymous_0 kind = hsh->kind;
    struct hash_t_ *lmhsh1 = ((struct hash_t_ *)NULL);
    struct hash_t_ *lmhsh2 = ((struct hash_t_ *)NULL);
    struct hash_t_ *nthsh = ((struct hash_t_ *)NULL);
    signed int type = 0;
    switch((signed int)kind)
    {
      case lm1:
      {
        lmhsh1 = hsh;
        lmhsh2 = hsh->lmhsh2;
        nthsh = hsh->lmhsh1;
        if(lmhsh2 == ((struct hash_t_ *)NULL) && nthsh == ((struct hash_t_ *)NULL))
          type = 1;

        if(nthsh == ((struct hash_t_ *)NULL) && !(lmhsh2 == ((struct hash_t_ *)NULL)))
          type = 2;

        break;
      }
      case lm2:
      {
        lmhsh1 = hsh->lmhsh1;
        lmhsh2 = hsh;
        nthsh = hsh->lmhsh2;
        if(nthsh == ((struct hash_t_ *)NULL) && !(lmhsh1 == ((struct hash_t_ *)NULL)))
          type = 2;

        break;
      }
      case nt:
      {
        lmhsh1 = hsh->lmhsh1;
        lmhsh2 = hsh->lmhsh2;
        nthsh = hsh;
        if(!(lmhsh1 == ((struct hash_t_ *)NULL)) && !(lmhsh2 == ((struct hash_t_ *)NULL)))
          type = 3;

        if(lmhsh1 == ((struct hash_t_ *)NULL) && lmhsh2 == ((struct hash_t_ *)NULL))
          type = 4;

      }
    }
    if(!(type == 0))
    {
      if(!(*fields == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        if(!(quote == 0))
          fprintf(file, "%c%d%c", quote, hsh->id, quote);

        else
          fprintf(file, "%d", hsh->id);
        first = 0;
      }

      if(!(fields[1l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        if(!(quote == 0))
        {
          if(!(hsh->uid == 0))
            fprintf(file, "%c%d%c", quote, hsh->uid, quote);

        }

        else
          if(!(hsh->uid == 0))
            fprintf(file, "%d", hsh->uid);

        first = 0;
      }

      if(!(fields[2l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        if(!(quote == 0))
        {
          if(!(hide == 0))
            fprintf(file, "%c*****%c", quote, quote);

          else
            if(!(hsh->info[0l] == 0))
              fprintf(file, "%c%s%c", quote, (const void *)hsh->info, quote);

        }

        else
          if(!(hide == 0))
            fprintf(file, "*****");

          else
            if(!(hsh->info[0l] == 0))
              fprintf(file, "%s", (const void *)hsh->info);

        first = 0;
      }

      if(!(fields[3l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        if(!(quote == 0))
        {
          if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
            fprintf(file, "%c%s%c", quote, lmhsh1->str, quote);

        }

        else
          if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
            fprintf(file, "%s", lmhsh1->str);

        first = 0;
      }

      if(!(fields[4l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        if(!(quote == 0))
        {
          if(!(nthsh == ((struct hash_t_ *)NULL)))
            fprintf(file, "%c%s%c", quote, nthsh->str, quote);

        }

        else
          if(!(nthsh == ((struct hash_t_ *)NULL)))
            fprintf(file, "%s", nthsh->str);

        first = 0;
      }

      if(!(fields[5l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        if(!(quote == 0))
        {
          if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
            fprintf(file, "%c%s%c", quote, lmhsh1->pwd, quote);

        }

        else
          if(!(lmhsh1 == ((struct hash_t_ *)NULL)))
            fprintf(file, "%s", lmhsh1->pwd);

        first = 0;
      }

      if(!(fields[6l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        if(!(quote == 0))
        {
          if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
            fprintf(file, "%c%s%c", quote, lmhsh2->pwd, quote);

        }

        else
          if(!(lmhsh2 == ((struct hash_t_ *)NULL)))
            fprintf(file, "%s", lmhsh2->pwd);

        first = 0;
      }

      if(!(fields[7l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        if(!(quote == 0))
        {
          if(!(nthsh == ((struct hash_t_ *)NULL)))
            fprintf(file, "%c%s%c", quote, nthsh->pwd, quote);

        }

        else
          if(!(nthsh == ((struct hash_t_ *)NULL)))
            fprintf(file, "%s", nthsh->pwd);

        first = 0;
      }

      if(!(fields[8l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        switch(type)
        {
          case 1:
          {
            if(!(quote == 0))
              fprintf(file, "%c%d%c", quote, lmhsh1->done, quote);

            else
              fprintf(file, "%d", lmhsh1->done);
            break;
          }
          case 2:
          {
            if(!(quote == 0))
            {
              if(!(lmhsh1->done == 0))
                tmp_if_expr_2 = lmhsh2->done != 0 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_2 = (_Bool)0;
              fprintf(file, "%c%d%c", quote, tmp_if_expr_2, quote);
            }

            else
            {
              if(!(lmhsh1->done == 0))
                tmp_if_expr_3 = lmhsh2->done != 0 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_3 = (_Bool)0;
              fprintf(file, "%d", tmp_if_expr_3);
            }
            break;
          }
          case 3:

          case 4:

          default:
            if(!(quote == 0))
              fprintf(file, "%c%d%c", quote, nthsh->done, quote);

            else
              fprintf(file, "%d", nthsh->done);
        }
        first = 0;
      }

      if(!(fields[9l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        switch(type)
        {
          case 1:
          {
            if(!(quote == 0))
            {
              if(lmhsh1->done >= 1)
                fprintf(file, "%c%d%c", quote, lmhsh1->time, quote);

            }

            else
              if(lmhsh1->done >= 1)
                fprintf(file, "%d", lmhsh1->time);

            break;
          }
          case 2:
          {
            if(!(quote == 0))
            {
              if(lmhsh1->done >= 1)
              {
                if(lmhsh2->done >= 1)
                {
                  if(!(lmhsh2->time >= lmhsh1->time))
                    tmp_if_expr_4 = lmhsh1->time;

                  else
                    tmp_if_expr_4 = lmhsh2->time;
                  fprintf(file, "%c%d%c", quote, tmp_if_expr_4, quote);
                }

              }

            }

            else
              if(lmhsh1->done >= 1)
              {
                if(lmhsh2->done >= 1)
                {
                  if(!(lmhsh2->time >= lmhsh1->time))
                    tmp_if_expr_5 = lmhsh1->time;

                  else
                    tmp_if_expr_5 = lmhsh2->time;
                  fprintf(file, "%d", tmp_if_expr_5);
                }

              }

            break;
          }
          case 3:

          case 4:

          default:
            if(!(quote == 0))
            {
              if(nthsh->done >= 1)
                fprintf(file, "%c%d%c", quote, nthsh->time, quote);

            }

            else
              if(nthsh->done >= 1)
                fprintf(file, "%d", nthsh->time);

        }
        first = 0;
      }

      if(!(fields[10l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        switch(type)
        {
          case 1:
          {
            if(!(quote == 0))
            {
              if(lmhsh1->done >= 1)
                fprintf(file, "%c%d%c", quote, lmhsh1->length, quote);

            }

            else
              if(lmhsh1->done >= 1)
                fprintf(file, "%d", lmhsh1->length);

            break;
          }
          case 2:
          {
            if(!(quote == 0))
            {
              if(lmhsh1->done >= 1)
              {
                if(lmhsh2->done >= 1)
                  fprintf(file, "%c%d%c", quote, lmhsh1->length + lmhsh2->length, quote);

              }

            }

            else
              if(lmhsh1->done >= 1)
              {
                if(lmhsh2->done >= 1)
                  fprintf(file, "%d", lmhsh1->length + lmhsh2->length);

              }

            break;
          }
          case 3:

          case 4:

          default:
            if(!(quote == 0))
            {
              if(!(nthsh->done == 0))
                fprintf(file, "%c%d%c", quote, nthsh->length, quote);

            }

            else
              if(!(nthsh->done == 0))
                fprintf(file, "%d", nthsh->length);

        }
        first = 0;
      }

      if(!(fields[11l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        switch(type)
        {
          case 1:
          {
            if(!(quote == 0))
            {
              if(lmhsh1->done >= 1)
              {
                return_value_category_string_6=category_string(lmhsh1->category);
                fprintf(file, "%c%s%c", quote, return_value_category_string_6, quote);
              }

            }

            else
              if(lmhsh1->done >= 1)
              {
                return_value_category_string_7=category_string(lmhsh1->category);
                fprintf(file, "%s", return_value_category_string_7);
              }

            break;
          }
          case 2:
          {
            if(!(quote == 0))
            {
              if(lmhsh1->done >= 1)
              {
                if(lmhsh2->done >= 1)
                {
                  return_value_category_string_8=category_string(lmhsh1->category | lmhsh2->category);
                  fprintf(file, "%c%s%c", quote, return_value_category_string_8, quote);
                }

              }

            }

            else
              if(lmhsh1->done >= 1)
              {
                if(lmhsh2->done >= 1)
                {
                  return_value_category_string_9=category_string(lmhsh1->category | lmhsh2->category);
                  fprintf(file, "%s", return_value_category_string_9);
                }

              }

            break;
          }
          case 3:

          case 4:

          default:
            if(!(quote == 0))
            {
              if(!(nthsh->done == 0))
              {
                return_value_category_string_10=category_string(nthsh->category);
                fprintf(file, "%c%s%c", quote, return_value_category_string_10, quote);
              }

            }

            else
              if(!(nthsh->done == 0))
              {
                return_value_category_string_11=category_string(nthsh->category);
                fprintf(file, "%s", return_value_category_string_11);
              }

        }
        first = 0;
      }

      if(!(fields[12l] == 0))
      {
        if(first == 0)
          fprintf(file, "%c", separator);

        switch(type)
        {
          case 1:
          {
            if(!(quote == 0))
            {
              if(lmhsh1->done >= 1)
                fprintf(file, "%c%s%c", quote, lmhsh1->table, quote);

            }

            else
              if(lmhsh1->done >= 1)
                fprintf(file, "%s", lmhsh1->table);

            break;
          }
          case 2:
          {
            if(!(quote == 0))
            {
              if(lmhsh1->done >= 1)
              {
                if(lmhsh2->done >= 1)
                  fprintf(file, "%c%s/%s%c", quote, lmhsh1->table, lmhsh2->table, quote);

              }

            }

            else
              if(lmhsh1->done >= 1)
              {
                if(lmhsh2->done >= 1)
                  fprintf(file, "%s/%s", lmhsh1->table, lmhsh2->table);

              }

            break;
          }
          case 3:
          {
            if(!(quote == 0))
            {
              if(!(nthsh->done == 0))
                fprintf(file, "%c%s/%s%c", quote, lmhsh1->table, lmhsh2->table, quote);

            }

            else
              if(!(nthsh->done == 0))
                fprintf(file, "%s/%s", lmhsh1->table, lmhsh2->table);

            break;
          }
          case 4:

          default:
            if(!(quote == 0))
            {
              if(!(nthsh->done == 0))
                fprintf(file, "%c%s%c", quote, nthsh->table, quote);

            }

            else
              if(!(nthsh->done == 0))
                fprintf(file, "%s", nthsh->table);

        }
        first = 0;
      }

      fprintf(file, "\n");
    }

  }
  free((void *)id_to_hash);
}

// ophcrack_find
// file ophcrack.c line 517
struct ophtask_t_ * ophcrack_find(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
  struct hash_t_ *hsh = work->hsh;
  struct table_t_ *tbl = work->htbl->tbl;
  signed int cmin = work->cmin;
  signed int cmax = work->cmax;
  signed int size = (cmax - cmin) + 1;
  struct arg_t_ *arg = crack->arg;
  if(!(arg->verbose == 0))
    message_work(hsh, tbl, find, cmin, cmax);

  ophtask_convert(task, (enum anonymous_12)find, (enum anonymous_12)lookup_idx);
  signed int i;
  struct ophel_t_ **tosearch = work->tosearch;
  i = 0;
  if(!(i >= size))
  {
    if(!(arg->debug == 0))
    {
      pthread_mutex_lock(mutex);
      signed int hid = hsh->id;
      signed int idx = tbl->idx;
      const char *name = tbl->name;
      fprintf(arg->lfile, "find: ");
      switch((signed int)hsh->kind)
      {
        case lm1:
        {
          fprintf(arg->lfile, "1st LM hash ");
          break;
        }
        case lm2:
        {
          fprintf(arg->lfile, "2nd LM hash ");
          break;
        }
        case nt:
          fprintf(arg->lfile, "NT hash ");
      }
      fprintf(arg->lfile, "#%d in table %s,%d ", hid, name, idx);
      fprintf(arg->lfile, "at column %d ... ", cmax - i);
    }

    tosearch[(signed long int)i]->col = cmax - i;
    tbl->find((void *)hsh, (void *)tbl, (void *)tosearch[(signed long int)i]);
    if(!(arg->debug == 0))
    {
      unsigned int prefix = (unsigned int)tosearch[(signed long int)i]->prefix;
      unsigned short int postfix = (unsigned short int)tosearch[(signed long int)i]->postfix;
      fprintf(arg->lfile, "prefix = %u, postfix = %u.\n", (unsigned int)prefix, (unsigned int)postfix);
      pthread_mutex_unlock(mutex);
    }

    i = i + 1;
  }

  if(!(tbl->idxmem == ((char *)NULL)))
    task=ophcrack_lookup_idx(crack, task, id);

  else
  {
    scheduler_add(sched, (void *)task, (enum anonymous_8)disk);
    task = ((struct ophtask_t_ *)NULL);
  }
  return task;
}

// ophcrack_find_cmin
// file ophcrack.c line 1385
signed int ophcrack_find_cmin(signed int ncols, signed int cmax, signed int total)
{
  double y = (double)(ncols - cmax);
  double d = (double)1 - (double)4 * (((double)(-2 * total) - y * y) + y);
  double x;
  double return_value_sqrt_1;
  return_value_sqrt_1=sqrt(d);
  x=floor(0.5 * ((double)-1 + return_value_sqrt_1));
  signed int cmin = ncols - (signed int)x;
  if(cmin >= cmax)
    cmin = cmax - 1;

  return cmin < 0 ? 0 : cmin;
}

// ophcrack_found
// file ophcrack.c line 1547
void ophcrack_found(struct ophcrack_t_ *crack, struct hash_t_ *hsh, struct table_t_ *tbl, signed int col, char *pwd)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophtask_t_ *task = ((struct ophtask_t_ *)NULL);
  struct ophbforce_t_ *force = ((struct ophbforce_t_ *)NULL);
  char *lmpwd1 = ((char *)NULL);
  char *lmpwd2 = ((char *)NULL);
  pthread_mutex_lock(mutex);
  unsigned long int return_value_strlen_1;
  const char *return_value_table_string_3;
  signed int tmp_if_expr_4;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  signed int tmp_if_expr_5;
  signed int tmp_if_expr_6;
  _Bool tmp_if_expr_12;
  struct hash_t_ *tmp_if_expr_9;
  if(hsh->done == 0)
  {
    if(hsh->id >= 0)
    {
      if(!(hsh->pwd == pwd))
        strcpy(hsh->pwd, pwd);

      hsh->done = 1;
      if(hsh->length == 0)
      {
        return_value_strlen_1=strlen(pwd);
        hsh->length = (signed int)return_value_strlen_1;
      }

      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)32 * sizeof(char) /*1ul*/ );
      hsh->table = (char *)return_value_malloc_2;
      if(tbl == ((struct table_t_ *)NULL))
        snprintf(hsh->table, (unsigned long int)32, "Bruteforce");

      else
      {
        return_value_table_string_3=table_string(tbl->kind);
        snprintf(hsh->table, (unsigned long int)32, "%s", return_value_table_string_3);
      }
      hsh->category=categorize_password(hsh->pwd);
      if(hsh->time == -1)
      {
        if(tm_main_total.tv_sec == 0l)
        {
          if(tm_main_start.tv_sec == 0l)
            hsh->time = 0;

          else
          {
            struct timeval now;
            gettimeofday(&now, ((struct timezone *)NULL));
            signed long int tv_sec = now.tv_sec - tm_main_start.tv_sec;
            hsh->time = (signed int)tv_sec;
          }
        }

        else
          hsh->time = (signed int)tm_main_total.tv_sec;
      }

      message_found(hsh, tbl, col);
      if((signed int)hsh->kind == nt)
      {
        crack->npwds_found = crack->npwds_found + 1;
        if(hsh->length >= 16)
          tmp_if_expr_4 = 15;

        else
          tmp_if_expr_4 = hsh->length;
        crack->stat->length[(signed long int)tmp_if_expr_4] = crack->stat->length[(signed long int)tmp_if_expr_4] + 1u;
        crack->stat->category[(signed long int)hsh->category] = crack->stat->category[(signed long int)hsh->category] + 1u;
        list_add_tail(crack->stat->time, (void *)&hsh->time);
      }

      else
      {
        if((signed int)hsh->kind == lm1)
          tmp_if_expr_7 = hsh->lmhsh1 == ((struct hash_t_ *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_7 = (_Bool)0;
        if(tmp_if_expr_7)
          tmp_if_expr_8 = hsh->lmhsh2->done > 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_8 = (_Bool)0;
        if(tmp_if_expr_8)
        {
          crack->npwds_found = crack->npwds_found + 1;
          if(hsh->length >= 16)
            tmp_if_expr_5 = 15;

          else
            tmp_if_expr_5 = hsh->length;
          crack->stat->length[(signed long int)tmp_if_expr_5] = crack->stat->length[(signed long int)tmp_if_expr_5] + 1u;
          crack->stat->category[(signed long int)hsh->category] = crack->stat->category[(signed long int)hsh->category] + 1u;
          list_add_tail(crack->stat->time, (void *)&hsh->time);
        }

        else
          if((signed int)hsh->kind == lm2)
          {
            if(hsh->lmhsh2 == ((struct hash_t_ *)NULL))
            {
              if(hsh->lmhsh1->done >= 1)
              {
                crack->npwds_found = crack->npwds_found + 1;
                if(hsh->length >= 16)
                  tmp_if_expr_6 = 15;

                else
                  tmp_if_expr_6 = hsh->length;
                crack->stat->length[(signed long int)tmp_if_expr_6] = crack->stat->length[(signed long int)tmp_if_expr_6] + 1u;
                crack->stat->category[(signed long int)hsh->category] = crack->stat->category[(signed long int)hsh->category] + 1u;
                list_add_tail(crack->stat->time, (void *)&hsh->time);
              }

            }

          }

      }
      if((signed int)hsh->kind == lm1)
        tmp_if_expr_12 = (_Bool)1;

      else
        tmp_if_expr_12 = (signed int)hsh->kind == lm2 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_12)
      {
        struct hash_t_ *nthsh;
        if((signed int)hsh->kind == lm1)
          tmp_if_expr_9 = hsh->lmhsh1;

        else
          tmp_if_expr_9 = hsh->lmhsh2;
        nthsh = tmp_if_expr_9;
        if(!(nthsh == ((struct hash_t_ *)NULL)))
        {
          if(nthsh->done == 0)
          {
            struct hash_t_ *lmhsh1 = nthsh->lmhsh1;
            struct hash_t_ *lmhsh2 = nthsh->lmhsh2;
            if(lmhsh1->done >= 1)
            {
              if(lmhsh2->done >= 1)
              {
                task=ophtask_alloc((enum anonymous_12)resolve_nt);
                force = (struct ophbforce_t_ *)task->data;
                force->nhashes = 1;
                void *return_value_malloc_10;
                return_value_malloc_10=malloc(sizeof(struct hash_t_ *) /*8ul*/ );
                force->hashes = (struct hash_t_ **)return_value_malloc_10;
                force->hashes[(signed long int)0] = nthsh;
              }

            }

          }

        }

      }

      else
      {
        struct hash_t_ *ophcrack_found__1__1__6__lmhsh1 = hsh->lmhsh1;
        struct hash_t_ *ophcrack_found__1__1__6__lmhsh2 = hsh->lmhsh2;
        char *ophcrack_found__1__1__6__pwd = hsh->pwd;
        signed int len;
        unsigned long int return_value_strlen_11;
        return_value_strlen_11=strlen(hsh->pwd);
        len = (signed int)return_value_strlen_11;
        if(!(ophcrack_found__1__1__6__lmhsh1 == ((struct hash_t_ *)NULL)))
        {
          if(ophcrack_found__1__1__6__lmhsh1->done == 0)
          {
            signed int n = 7 < len ? 7 : len;
            lmpwd1=lm_from_nt(ophcrack_found__1__1__6__pwd, n, ophcrack_found__1__1__6__lmhsh1->hash);
          }

        }

        if(!(ophcrack_found__1__1__6__lmhsh2 == ((struct hash_t_ *)NULL)))
        {
          if(ophcrack_found__1__1__6__lmhsh2->done == 0)
          {
            if(len >= 8)
            {
              signed int ophcrack_found__1__1__6__2__n = 7 < len - 7 ? 7 : len - 7;
              lmpwd2=lm_from_nt(ophcrack_found__1__1__6__pwd + (signed long int)7, ophcrack_found__1__1__6__2__n, ophcrack_found__1__1__6__lmhsh2->hash);
            }

          }

        }

      }
    }

  }

  pthread_mutex_unlock(mutex);
  if(!(lmpwd1 == ((char *)NULL)))
  {
    ophcrack_found(crack, hsh->lmhsh1, ((struct table_t_ *)NULL), 0, lmpwd1);
    free((void *)lmpwd1);
  }

  if(!(lmpwd2 == ((char *)NULL)))
  {
    ophcrack_found(crack, hsh->lmhsh2, ((struct table_t_ *)NULL), 0, lmpwd2);
    free((void *)lmpwd2);
  }

  if(!(task == ((struct ophtask_t_ *)NULL)))
    scheduler_add(sched, (void *)task, (enum anonymous_8)high);

}

// ophcrack_free
// file ophcrack.c line 84
void ophcrack_free(struct ophcrack_t_ *crack)
{
  scheduler_free(crack->sched);
  list_free(crack->tables);
  list_free(crack->hashes);
  list_free(crack->active);
  list_free(crack->enabled);
  list_free(crack->remaining);
  ophstat_free(crack->stat);
  free((void *)crack);
}

// ophcrack_has_next
// file ophcrack.c line 1401
signed int ophcrack_has_next(struct ophcrack_t_ *crack)
{
  struct list_t_ *hashes = crack->hashes;
  struct list_nd_t_ *hnd = hashes->head;
  for( ; !(hnd == ((struct list_nd_t_ *)NULL)); hnd = hnd->next)
  {
    struct hash_t_ *hsh = (struct hash_t_ *)hnd->data;
    struct list_t_ *tables = hsh->tables;
    struct list_nd_t_ *tnd;
    if(hsh->done == 0)
    {
      tnd = tables->head;
      for( ; !(tnd == ((struct list_nd_t_ *)NULL)); tnd = tnd->next)
      {
        struct htbl_t_ *htbl = (struct htbl_t_ *)tnd->data;
        struct table_t_ *tbl = htbl->tbl;
        if(!(tbl->active == 0))
        {
          if(htbl->col >= 1)
            return 1;

        }

      }
    }

  }
  return 0;
}

// ophcrack_lookup_end
// file ophcrack.c line 689
struct ophtask_t_ * ophcrack_lookup_end(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
  struct hash_t_ *hsh = work->hsh;
  struct table_t_ *tbl = work->htbl->tbl;
  signed int cmin = work->cmin;
  signed int cmax = work->cmax;
  signed int size = (cmax - cmin) + 1;
  struct arg_t_ *arg = crack->arg;
  if(!(arg->verbose == 0))
    message_work(hsh, tbl, lookup_end, cmin, cmax);

  task->kind = (enum anonymous_12)lookup_srt;
  signed int i;
  signed int count = size;
  struct ophel_t_ **tosearch = work->tosearch;
  i = 0;
  if(!(i >= size))
  {
    if(!(arg->debug == 0))
    {
      pthread_mutex_lock(mutex);
      signed int hid = hsh->id;
      signed int idx = tbl->idx;
      const char *name = tbl->name;
      fprintf(arg->lfile, "lookup_end: ");
      switch((signed int)hsh->kind)
      {
        case lm1:
        {
          fprintf(arg->lfile, "1st LM hash ");
          break;
        }
        case lm2:
        {
          fprintf(arg->lfile, "2nd LM hash ");
          break;
        }
        case nt:
          fprintf(arg->lfile, "NT hash ");
      }
      unsigned int prefix = (unsigned int)tosearch[(signed long int)i]->prefix;
      unsigned short int postfix = (unsigned short int)tosearch[(signed long int)i]->postfix;
      unsigned long int low = tosearch[(signed long int)i]->low;
      unsigned long int high = tosearch[(signed long int)i]->high;
      fprintf(arg->lfile, "#%d in table %s,%d ", hid, name, idx);
      fprintf(arg->lfile, "at column %d, ", cmax - i);
      fprintf(arg->lfile, "with prefix = %u, ", prefix);
      fprintf(arg->lfile, "postfix = %u, ", (unsigned int)postfix);
      fprintf(arg->lfile, "low = %llu and high = %llu ... ", (unsigned long long int)low, (unsigned long long int)high);
    }

    signed int ret;
    ret=tbl->lookup_end((void *)hsh, (void *)tbl, (void *)tosearch[(signed long int)i]);
    if(ret == 0)
    {
      ophstat_add(task->stat, tosearch[(signed long int)i]->stat);
      ophel_free(tosearch[(signed long int)i]);
      tosearch[(signed long int)i] = ((struct ophel_t_ *)NULL);
      count = count - 1;
    }

    if(!(arg->debug == 0))
    {
      if(ret == 0)
        fprintf(arg->lfile, "no offset found.\n");

      else
        fprintf(arg->lfile, "offset = %llu.\n", (unsigned long long int)tosearch[(signed long int)i]->offset);
      pthread_mutex_unlock(mutex);
    }

    i = i + 1;
  }

  if(count >= 1)
    qsort((void *)tosearch, (unsigned long int)size, sizeof(struct ophel_t_ *) /*8ul*/ , ophcrack_col_cmp);

  else
    return task;
  signed int both_in_mem;
  _Bool tmp_if_expr_1;
  if(!(tbl->endmem == ((char *)NULL)))
    tmp_if_expr_1 = tbl->srtmem != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  both_in_mem = (signed int)tmp_if_expr_1;
  signed int both_on_disk;
  _Bool tmp_if_expr_2;
  if(tbl->endmem == ((char *)NULL))
    tmp_if_expr_2 = !(tbl->srtmem != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  both_on_disk = (signed int)tmp_if_expr_2;
  if(!(both_in_mem == 0) || !(both_on_disk == 0))
    task=ophcrack_lookup_srt(crack, task, id);

  else
  {
    enum anonymous_8 priority = (enum anonymous_8)(tbl->srtmem != ((char *)NULL) ? low : disk);
    scheduler_add(sched, (void *)task, priority);
    task = ((struct ophtask_t_ *)NULL);
  }
  return task;
}

// ophcrack_lookup_idx
// file ophcrack.c line 598
struct ophtask_t_ * ophcrack_lookup_idx(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
  struct hash_t_ *hsh = work->hsh;
  struct table_t_ *tbl = work->htbl->tbl;
  signed int cmin = work->cmin;
  signed int cmax = work->cmax;
  signed int size = (cmax - cmin) + 1;
  struct arg_t_ *arg = crack->arg;
  if(!(arg->verbose == 0))
    message_work(hsh, tbl, lookup_idx, cmin, cmax);

  task->kind = (enum anonymous_12)lookup_end;
  struct ophel_t_ **tosearch = work->tosearch;
  if(tbl->idxmem == ((char *)NULL))
    qsort((void *)tosearch, (unsigned long int)size, sizeof(struct ophel_t_ *) /*8ul*/ , ophcrack_pwd_cmp);

  signed int i = 0;
  if(!(i >= size))
  {
    if(!(arg->debug == 0))
    {
      pthread_mutex_lock(mutex);
      signed int hid = hsh->id;
      signed int idx = tbl->idx;
      const char *name = tbl->name;
      fprintf(arg->lfile, "lookup_idx: ");
      switch((signed int)hsh->kind)
      {
        case lm1:
        {
          fprintf(arg->lfile, "1st LM hash ");
          break;
        }
        case lm2:
        {
          fprintf(arg->lfile, "2nd LM hash ");
          break;
        }
        case nt:
          fprintf(arg->lfile, "NT hash ");
      }
      unsigned int prefix = (unsigned int)tosearch[(signed long int)i]->prefix;
      unsigned short int postfix = (unsigned short int)tosearch[(signed long int)i]->postfix;
      fprintf(arg->lfile, "#%d in table %s,%d ", hid, name, idx);
      fprintf(arg->lfile, "at column %d, ", cmax - i);
      fprintf(arg->lfile, "with prefix = %u ", prefix);
      fprintf(arg->lfile, "and postfix = %u ... ", (unsigned int)postfix);
    }

    tbl->lookup_idx((void *)hsh, (void *)tbl, (void *)tosearch[(signed long int)i]);
    if(!(arg->debug == 0))
    {
      unsigned long int low = tosearch[(signed long int)i]->low;
      unsigned long int high = tosearch[(signed long int)i]->high;
      fprintf(arg->lfile, "low = %llu, high = %llu.\n", (unsigned long long int)low, (unsigned long long int)high);
      pthread_mutex_unlock(mutex);
    }

    i = i + 1;
  }

  signed int both_in_mem;
  _Bool tmp_if_expr_1;
  if(!(tbl->idxmem == ((char *)NULL)))
    tmp_if_expr_1 = tbl->endmem != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  both_in_mem = (signed int)tmp_if_expr_1;
  signed int both_on_disk;
  _Bool tmp_if_expr_2;
  if(tbl->idxmem == ((char *)NULL))
    tmp_if_expr_2 = !(tbl->endmem != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  both_on_disk = (signed int)tmp_if_expr_2;
  if(!(both_in_mem == 0) || !(both_on_disk == 0))
    task=ophcrack_lookup_end(crack, task, id);

  else
  {
    enum anonymous_8 priority = (enum anonymous_8)(tbl->endmem != ((char *)NULL) ? low : disk);
    scheduler_add(sched, (void *)task, priority);
    task = ((struct ophtask_t_ *)NULL);
  }
  return task;
}

// ophcrack_lookup_srt
// file ophcrack.c line 797
struct ophtask_t_ * ophcrack_lookup_srt(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
  struct hash_t_ *hsh = work->hsh;
  struct table_t_ *tbl = work->htbl->tbl;
  signed int cmin = work->cmin;
  signed int cmax = work->cmax;
  signed int size = (cmax - cmin) + 1;
  struct arg_t_ *arg = crack->arg;
  if(!(arg->verbose == 0))
    message_work(hsh, tbl, lookup_srt, cmin, cmax);

  task->kind = (enum anonymous_12)check;
  signed int i;
  struct ophel_t_ **tosearch = work->tosearch;
  i = 0;
  if(!(i >= size))
  {
    if(!(tosearch[(signed long int)i] == ((struct ophel_t_ *)NULL)))
    {
      if(!(arg->debug == 0))
      {
        pthread_mutex_lock(mutex);
        signed int hid = hsh->id;
        signed int idx = tbl->idx;
        const char *name = tbl->name;
        fprintf(arg->lfile, "lookup_srt: ");
        switch((signed int)hsh->kind)
        {
          case lm1:
          {
            fprintf(arg->lfile, "1st LM hash ");
            break;
          }
          case lm2:
          {
            fprintf(arg->lfile, "2nd LM hash ");
            break;
          }
          case nt:
            fprintf(arg->lfile, "NT hash ");
        }
        unsigned int prefix = (unsigned int)tosearch[(signed long int)i]->prefix;
        unsigned short int postfix = (unsigned short int)tosearch[(signed long int)i]->postfix;
        unsigned long int low = tosearch[(signed long int)i]->low;
        unsigned long int high = tosearch[(signed long int)i]->high;
        unsigned long int offset = tosearch[(signed long int)i]->offset;
        fprintf(arg->lfile, "#%d in table %s,%d ", hid, name, idx);
        fprintf(arg->lfile, "at column %d, ", cmax - i);
        fprintf(arg->lfile, "with prefix = %u, ", prefix);
        fprintf(arg->lfile, "postfix = %u, ", (unsigned int)postfix);
        fprintf(arg->lfile, "low = %llu, high = %llu ", (unsigned long long int)low, (unsigned long long int)high);
        fprintf(arg->lfile, "and offset = %llu ... ", (unsigned long long int)offset);
      }

      tbl->lookup_srt((void *)hsh, (void *)tbl, (void *)tosearch[(signed long int)i]);
      if(!(arg->debug == 0))
      {
        fprintf(arg->lfile, "start = ");
        fprintf_hex(arg->lfile, tosearch[(signed long int)i]->pwd, 16);
        fprintf(arg->lfile, "\n.");
        pthread_mutex_unlock(mutex);
      }

      i = i + 1;
    }

  }

  scheduler_add(sched, (void *)task, (enum anonymous_8)high);
  return ((struct ophtask_t_ *)NULL);
}

// ophcrack_next
// file ophcrack.c line 1424
signed int ophcrack_next(struct ophcrack_t_ *crack)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  pthread_mutex_lock(mutex);
  struct list_t_ *hashes = crack->hashes;
  signed int count = hashes->size + 1;
  struct ophtask_t_ *task = ((struct ophtask_t_ *)NULL);
  struct ophwork_t_ *work = ((struct ophwork_t_ *)NULL);
  signed int tmp_post_1;
  struct list_nd_t_ *tmp_if_expr_2;
  struct list_nd_t_ *tmp_if_expr_3;
  struct list_nd_t_ *tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  while(task == ((struct ophtask_t_ *)NULL))
  {
    tmp_post_1 = count;
    count = count - 1;
    if(tmp_post_1 == 0)
      break;

    struct list_nd_t_ *hnd;
    if(crack->hnd == ((struct list_nd_t_ *)NULL))
      tmp_if_expr_2 = hashes->head;

    else
      tmp_if_expr_2 = crack->hnd;
    hnd = tmp_if_expr_2;
    struct hash_t_ *hsh = (struct hash_t_ *)hnd->data;
    struct list_t_ *tables = hsh->tables;
    signed int ntables = tables->size;
    if(hsh->done == 0)
    {
      if(ntables >= 1)
      {
        struct list_nd_t_ *tnd;
        if(hsh->tnd == ((struct list_nd_t_ *)NULL))
          tmp_if_expr_3 = tables->head;

        else
          tmp_if_expr_3 = hsh->tnd;
        tnd = tmp_if_expr_3;
        struct htbl_t_ *htbl = (struct htbl_t_ *)tnd->data;
        struct table_t_ *tbl = htbl->tbl;
        for( ; (_Bool)1; tbl = htbl->tbl)
        {
          if(!(tbl->active == 0))
          {
            if(htbl->col >= 0)
              goto __CPROVER_DUMP_L10;

          }

          ntables = ntables - 1;
          if(ntables == 0)
            break;

          if(tnd->next == ((struct list_nd_t_ *)NULL))
            tmp_if_expr_4 = tables->head;

          else
            tmp_if_expr_4 = tnd->next;
          tnd = tmp_if_expr_4;
          htbl = (struct htbl_t_ *)tnd->data;
        }

      __CPROVER_DUMP_L10:
        ;
        if(!(tbl->active == 0))
          tmp_if_expr_5 = htbl->col >= 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_5 = (_Bool)0;
        if(tmp_if_expr_5)
        {
          signed int nhredux = crack->arg->nhredux;
          signed int cmax = htbl->col;
          signed int cmin;
          cmin=ophcrack_find_cmin(tbl->ncols, cmax, nhredux);
          task=ophtask_alloc((enum anonymous_12)find);
          work = (struct ophwork_t_ *)task->data;
          work->hsh = hsh;
          work->htbl = htbl;
          work->cmin = cmin;
          work->cmax = cmax;
          htbl->col = cmin - 1;
          hsh->tnd = tnd->next;
        }

        else
          hsh->tnd = tnd->next;
      }

    }

    crack->hnd = hnd->next;
  }
  pthread_mutex_unlock(mutex);
  if(!(task == ((struct ophtask_t_ *)NULL)))
    scheduler_add(sched, (void *)task, (enum anonymous_8)low);

  else
    message_done((enum anonymous_12)find);
  return task != ((struct ophtask_t_ *)NULL) ? 1 : 0;
}

// ophcrack_notfound
// file ophcrack.c line 1693
void ophcrack_notfound(struct ophcrack_t_ *crack, struct hash_t_ *hsh)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  pthread_mutex_lock(mutex);
  if(hsh->done == 0)
  {
    hsh->done = -1;
    message_found(hsh, ((struct table_t_ *)NULL), 0);
  }

  pthread_mutex_unlock(mutex);
}

// ophcrack_preload_all
// file ophcrack.c line 1758
struct ophtask_t_ * ophcrack_preload_all(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  struct ophload_t_ *ophcrack_preload_all__1__load = (struct ophload_t_ *)task->data;
  signed int force_preload = crack->arg->preload;
  struct list_t_ *tables = ophcrack_preload_all__1__load->tables;
  struct list_t_ *active = crack->active;
  struct list_t_ *enabled = crack->enabled;
  struct list_t_ *remaining = crack->remaining;
  unsigned long int freeram0;
  freeram0=crack->find_freeram();
  unsigned long int freeram1 = crack->freeram;
  unsigned long int freeram = freeram0 < freeram1 ? freeram0 : freeram1;
  unsigned char *initialised;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)crack->maxtkind, sizeof(unsigned char) /*1ul*/ );
  initialised = (unsigned char *)return_value_calloc_1;
  struct list_nd_t_ *ophcrack_preload_all__1__1__nd = crack->tables->head;
  _Bool tmp_if_expr_4;
  unsigned long int return_value_table_preload_size_2;
  unsigned long int return_value_table_preload_size_3;
  if(!(ophcrack_preload_all__1__1__nd == ((struct list_nd_t_ *)NULL)))
  {
    struct table_t_ *ophcrack_preload_all__1__1__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__1__nd->data;
    enum anonymous_10 ophcrack_preload_all__1__1__1__state;
    ophcrack_preload_all__1__1__1__state=table_preload_state(ophcrack_preload_all__1__1__1__tbl);
    if(!(ophcrack_preload_all__1__1__1__tbl->shared_init == 0))
      tmp_if_expr_4 = initialised[(signed long int)ophcrack_preload_all__1__1__1__tbl->kind] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
    {
      return_value_table_preload_size_2=table_preload_size(ophcrack_preload_all__1__1__1__tbl, (enum anonymous_10)((signed int)ophcrack_preload_all__1__1__1__state & ~preload_init));
      freeram = freeram + return_value_table_preload_size_2;
    }

    else
    {
      return_value_table_preload_size_3=table_preload_size(ophcrack_preload_all__1__1__1__tbl, ophcrack_preload_all__1__1__1__state);
      freeram = freeram + return_value_table_preload_size_3;
    }
    initialised[(signed long int)ophcrack_preload_all__1__1__1__tbl->kind] = initialised[(signed long int)ophcrack_preload_all__1__1__1__tbl->kind] | (unsigned char)((signed int)ophcrack_preload_all__1__1__1__state & preload_init);
    ophcrack_preload_all__1__1__nd = ophcrack_preload_all__1__1__nd->next;
  }

  enum anonymous_10 *preload;
  void *return_value_calloc_5;
  return_value_calloc_5=calloc((unsigned long int)crack->maxtid, sizeof(enum anonymous_10) /*4ul*/ );
  preload = (enum anonymous_10 *)return_value_calloc_5;
  struct list_nd_t_ *ophcrack_preload_all__1__2__nd = crack->tables->head;
  if(!(ophcrack_preload_all__1__2__nd == ((struct list_nd_t_ *)NULL)))
  {
    struct table_t_ *ophcrack_preload_all__1__2__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__2__nd->data;
    preload[(signed long int)ophcrack_preload_all__1__2__1__tbl->id] = (enum anonymous_10)preload_none;
    initialised[(signed long int)ophcrack_preload_all__1__2__1__tbl->kind] = (unsigned char)0;
    ophcrack_preload_all__1__2__1__tbl->active = 0;
    ophcrack_preload_all__1__2__nd = ophcrack_preload_all__1__2__nd->next;
  }

  if(tables->size == 0)
  {
    struct list_nd_t_ *ophcrack_preload_all__1__3__1__nd = active->head;
    if(!(ophcrack_preload_all__1__3__1__nd == ((struct list_nd_t_ *)NULL)))
    {
      struct table_t_ *ophcrack_preload_all__1__3__1__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__3__1__nd->data;
      if(!(ophcrack_preload_all__1__3__1__1__tbl->enabled == 0))
        list_add_tail(tables, (void *)ophcrack_preload_all__1__3__1__1__tbl);

      ophcrack_preload_all__1__3__1__nd = ophcrack_preload_all__1__3__1__nd->next;
    }

    struct list_nd_t_ *ophcrack_preload_all__1__3__2__nd = remaining->head;
    if(!(ophcrack_preload_all__1__3__2__nd == ((struct list_nd_t_ *)NULL)))
    {
      struct table_t_ *ophcrack_preload_all__1__3__2__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__3__2__nd->data;
      if(!(ophcrack_preload_all__1__3__2__1__tbl->enabled == 0))
        list_add_tail(tables, (void *)ophcrack_preload_all__1__3__2__1__tbl);

      ophcrack_preload_all__1__3__2__nd = ophcrack_preload_all__1__3__2__nd->next;
    }

  }

  list_clear(active);
  list_clear(remaining);
  enum anonymous_10 states[3l] = { (enum anonymous_10)(preload_init + preload_idx + preload_end),
    (enum anonymous_10)(preload_init + preload_idx),
    (enum anonymous_10)preload_init };
  signed int ondisk = 0;
  struct list_nd_t_ *ophcrack_preload_all__1__4__nd = tables->head;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  if(!(ophcrack_preload_all__1__4__nd == ((struct list_nd_t_ *)NULL)))
  {
    struct table_t_ *ophcrack_preload_all__1__4__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__4__nd->data;
    if(!(ophcrack_preload_all__1__4__1__tbl->cmax == 0))
    {
      signed int ophcrack_preload_all__1__4__1__1__i = 0;
      if(!(ophcrack_preload_all__1__4__1__1__i >= 3))
      {
        enum anonymous_10 ophcrack_preload_all__1__4__1__1__1__state = states[(signed long int)ophcrack_preload_all__1__4__1__1__i];
        unsigned long int size = (unsigned long int)0;
        if(!(ophcrack_preload_all__1__4__1__tbl->shared_init == 0))
          tmp_if_expr_6 = initialised[(signed long int)ophcrack_preload_all__1__4__1__tbl->kind] != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
          size=table_preload_size(ophcrack_preload_all__1__4__1__tbl, (enum anonymous_10)((signed int)ophcrack_preload_all__1__4__1__1__1__state & ~preload_init));

        else
          size=table_preload_size(ophcrack_preload_all__1__4__1__tbl, ophcrack_preload_all__1__4__1__1__1__state);
        static const enum anonymous_10 idxend = (const enum anonymous_10)(preload_idx + preload_end);
        signed int accept = (signed int)(!(ondisk != 0) || ondisk != 0 && ((signed int)ophcrack_preload_all__1__4__1__1__1__state & (signed int)idxend) == (signed int)idxend);
        if(freeram >= size && !(accept == 0))
        {
          freeram = freeram - size;
          preload[(signed long int)ophcrack_preload_all__1__4__1__tbl->id] = ophcrack_preload_all__1__4__1__1__1__state;
          initialised[(signed long int)ophcrack_preload_all__1__4__1__tbl->kind] = initialised[(signed long int)ophcrack_preload_all__1__4__1__tbl->kind] | (unsigned char)((signed int)ophcrack_preload_all__1__4__1__1__1__state & preload_init);
        }

        else
          ophcrack_preload_all__1__4__1__1__i = ophcrack_preload_all__1__4__1__1__i + 1;
      }

      if(!(ondisk == 0))
        tmp_if_expr_8 = (_Bool)1;

      else
      {
        if((preload_idx & (signed int)preload[(signed long int)ophcrack_preload_all__1__4__1__tbl->id]) == 0)
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = !(((signed int)preload[(signed long int)ophcrack_preload_all__1__4__1__tbl->id] & preload_end) != 0) ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
      }
      ondisk = (signed int)tmp_if_expr_8;
      if((signed int)preload[(signed long int)ophcrack_preload_all__1__4__1__tbl->id] == preload_none)
        list_add_tail(remaining, (void *)ophcrack_preload_all__1__4__1__tbl);

      else
        list_add_tail(active, (void *)ophcrack_preload_all__1__4__1__tbl);
    }

    ophcrack_preload_all__1__4__nd = ophcrack_preload_all__1__4__nd->next;
  }

  struct list_nd_t_ *ophcrack_preload_all__1__5__nd = active->head;
  if(!(ophcrack_preload_all__1__5__nd == ((struct list_nd_t_ *)NULL)))
  {
    struct table_t_ *ophcrack_preload_all__1__5__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__5__nd->data;
    if(!((preload_idx & (signed int)preload[(signed long int)ophcrack_preload_all__1__5__1__tbl->id]) == 0))
    {
      unsigned long int ophcrack_preload_all__1__5__1__1__size;
      ophcrack_preload_all__1__5__1__1__size=table_preload_size(ophcrack_preload_all__1__5__1__tbl, (enum anonymous_10)preload_srt);
      if(freeram >= ophcrack_preload_all__1__5__1__1__size)
      {
        freeram = freeram - ophcrack_preload_all__1__5__1__1__size;
        preload[(signed long int)ophcrack_preload_all__1__5__1__tbl->id] = preload[(signed long int)ophcrack_preload_all__1__5__1__tbl->id] + (enum anonymous_10)preload_srt;
      }

    }

    ophcrack_preload_all__1__5__nd = ophcrack_preload_all__1__5__nd->next;
  }

  struct list_nd_t_ *ophcrack_preload_all__1__6__nd = active->head;
  if(!(ophcrack_preload_all__1__6__nd == ((struct list_nd_t_ *)NULL)))
  {
    struct table_t_ *ophcrack_preload_all__1__6__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__6__nd->data;
    ophcrack_preload_all__1__6__1__tbl->active = 1;
    ophcrack_preload_all__1__6__nd = ophcrack_preload_all__1__6__nd->next;
  }

  struct list_nd_t_ *ophcrack_preload_all__1__7__nd = remaining->head;
  if(!(ophcrack_preload_all__1__7__nd == ((struct list_nd_t_ *)NULL)))
  {
    struct table_t_ *ophcrack_preload_all__1__7__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__7__nd->data;
    ophcrack_preload_all__1__7__1__tbl->active = 0;
    ophcrack_preload_all__1__7__nd = ophcrack_preload_all__1__7__nd->next;
  }

  struct list_nd_t_ *ophcrack_preload_all__1__8__nd = crack->tables->head;
  if(!(ophcrack_preload_all__1__8__nd == ((struct list_nd_t_ *)NULL)))
  {
    struct table_t_ *ophcrack_preload_all__1__8__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__8__nd->data;
    enum anonymous_10 state;
    state=table_preload_state(ophcrack_preload_all__1__8__1__tbl);
    if(ophcrack_preload_all__1__8__1__tbl->enabled == 0)
    {
      if(!((signed int)state == preload_none))
      {
        struct ophtask_t_ *ophcrack_preload_all__1__8__1__1__task;
        ophcrack_preload_all__1__8__1__1__task=ophtask_alloc((enum anonymous_12)unload);
        struct ophload_t_ *load = (struct ophload_t_ *)ophcrack_preload_all__1__8__1__1__task->data;
        load->tbl = ophcrack_preload_all__1__8__1__tbl;
        load->preload = state;
        scheduler_add(sched, (void *)ophcrack_preload_all__1__8__1__1__task, (enum anonymous_8)disk);
      }

    }

    ophcrack_preload_all__1__8__nd = ophcrack_preload_all__1__8__nd->next;
  }

  unsigned long int total_size = (unsigned long int)0;
  signed int return_value_ophcrack_has_next_10;
  return_value_ophcrack_has_next_10=ophcrack_has_next(crack);
  if(!(return_value_ophcrack_has_next_10 == 0))
  {
    struct list_nd_t_ *nd = enabled->head;
    if(!(nd == ((struct list_nd_t_ *)NULL)))
    {
      struct table_t_ *tbl = (struct table_t_ *)nd->data;
      enum anonymous_10 ophcrack_preload_all__1__9__1__1__state;
      ophcrack_preload_all__1__9__1__1__state=table_preload_state(tbl);
      enum anonymous_10 unload_bits = (enum anonymous_10)((signed int)ophcrack_preload_all__1__9__1__1__state & ~((signed int)preload[(signed long int)tbl->id]));
      if(!((signed int)unload_bits == preload_none))
      {
        struct ophtask_t_ *ophcrack_preload_all__1__9__1__1__1__task;
        ophcrack_preload_all__1__9__1__1__1__task=ophtask_alloc((enum anonymous_12)unload);
        struct ophload_t_ *ophcrack_preload_all__1__9__1__1__1__load = (struct ophload_t_ *)ophcrack_preload_all__1__9__1__1__1__task->data;
        ophcrack_preload_all__1__9__1__1__1__load->tbl = tbl;
        ophcrack_preload_all__1__9__1__1__1__load->preload = unload_bits;
        scheduler_add(sched, (void *)ophcrack_preload_all__1__9__1__1__1__task, (enum anonymous_8)disk);
      }

      nd = nd->next;
    }

    struct ophtask_t_ *unload_done;
    unload_done=ophtask_alloc((enum anonymous_12)unload);
    scheduler_add(sched, (void *)unload_done, (enum anonymous_8)disk);
    struct list_nd_t_ *ophcrack_preload_all__1__9__2__nd = enabled->head;
    if(!(ophcrack_preload_all__1__9__2__nd == ((struct list_nd_t_ *)NULL)))
    {
      struct table_t_ *ophcrack_preload_all__1__9__2__1__tbl = (struct table_t_ *)ophcrack_preload_all__1__9__2__nd->data;
      enum anonymous_10 ophcrack_preload_all__1__9__2__1__state;
      ophcrack_preload_all__1__9__2__1__state=table_preload_state(ophcrack_preload_all__1__9__2__1__tbl);
      enum anonymous_10 load_bits = (enum anonymous_10)(~((signed int)ophcrack_preload_all__1__9__2__1__state) & (signed int)preload[(signed long int)ophcrack_preload_all__1__9__2__1__tbl->id]);
      if(!((signed int)load_bits == preload_none))
      {
        unsigned long int return_value_table_preload_size_9;
        return_value_table_preload_size_9=table_preload_size(ophcrack_preload_all__1__9__2__1__tbl, load_bits);
        total_size = total_size + return_value_table_preload_size_9;
        signed int i = 0;
        if(!(i >= 4))
        {
          static const enum anonymous_10 steps[4l] = { (const enum anonymous_10)preload_init, (const enum anonymous_10)preload_idx, (const enum anonymous_10)preload_end, (const enum anonymous_10)preload_srt };
          if(!(((signed int)steps[(signed long int)i] & (signed int)load_bits) == 0))
          {
            struct ophtask_t_ *ophcrack_preload_all__1__9__2__1__1__1__1__task;
            ophcrack_preload_all__1__9__2__1__1__1__1__task=ophtask_alloc((enum anonymous_12)preload_one);
            struct ophload_t_ *ophcrack_preload_all__1__9__2__1__1__1__1__load = (struct ophload_t_ *)ophcrack_preload_all__1__9__2__1__1__1__1__task->data;
            ophcrack_preload_all__1__9__2__1__1__1__1__load->tbl = ophcrack_preload_all__1__9__2__1__tbl;
            ophcrack_preload_all__1__9__2__1__1__1__1__load->preload = steps[(signed long int)i];
            scheduler_add(sched, (void *)ophcrack_preload_all__1__9__2__1__1__1__1__task, (enum anonymous_8)disk);
          }

          i = i + 1;
        }

      }

      ophcrack_preload_all__1__9__2__nd = ophcrack_preload_all__1__9__2__nd->next;
    }

  }

  if(active->size == 0)
  {
    if(remaining->size >= 1)
    {
      struct table_t_ *ophcrack_preload_all__1__10__1__tbl;
      void *return_value_list_rem_head_11;
      return_value_list_rem_head_11=list_rem_head(remaining);
      ophcrack_preload_all__1__10__1__tbl = (struct table_t_ *)return_value_list_rem_head_11;
    }

  }

  message_preload(((struct table_t_ *)NULL), active->size, 0, total_size);
  struct ophtask_t_ *preload_done;
  preload_done=ophtask_alloc((enum anonymous_12)preload_one);
  scheduler_add(sched, (void *)preload_done, (enum anonymous_8)disk);
  free((void *)preload);
  free((void *)initialised);
  return task;
}

// ophcrack_preload_check
// file ophcrack.c line 1710
void ophcrack_preload_check(struct ophcrack_t_ *crack)
{
  struct list_t_ *active = crack->active;
  signed int tmp_post_1;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_3;
  if(!(active->size == 1))
  {
    struct list_t_ *tables;
    tables=list_alloc();
    signed int size = active->size;
    signed int flag = 1;
    do
    {
      tmp_post_1 = size;
      size = size - 1;
      if(tmp_post_1 == 0)
        break;

      struct table_t_ *tbl;
      void *return_value_list_rem_head_2;
      return_value_list_rem_head_2=list_rem_head(active);
      tbl = (struct table_t_ *)return_value_list_rem_head_2;
      if(!(tbl->idxmem == ((char *)NULL)))
        tmp_if_expr_4 = tbl->endmem != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_4 = (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = tbl->srtmem != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
        list_add_tail(active, (void *)tbl);

      else
      {
        if(!(tbl->idxmem == ((char *)NULL)))
          tmp_if_expr_3 = tbl->endmem != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(!(flag == 0) && tmp_if_expr_3)
        {
          list_add_tail(active, (void *)tbl);
          flag = 0;
        }

        else
          list_add_tail(tables, (void *)tbl);
      }
    }
    while((_Bool)1);
    struct list_t_ *remaining = crack->remaining;
    while(tables->size >= 1)
    {
      struct table_t_ *ophcrack_preload_check__1__2__tbl;
      void *return_value_list_rem_tail_6;
      return_value_list_rem_tail_6=list_rem_tail(tables);
      ophcrack_preload_check__1__2__tbl = (struct table_t_ *)return_value_list_rem_tail_6;
      ophcrack_preload_check__1__2__tbl->active = 0;
      list_add_head(remaining, (void *)ophcrack_preload_check__1__2__tbl);
    }
    list_free(tables);
  }

}

// ophcrack_preload_one
// file ophcrack.c line 2026
struct ophtask_t_ * ophcrack_preload_one(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophload_t_ *load = (struct ophload_t_ *)task->data;
  struct table_t_ *tbl = load->tbl;
  if(!(tbl == ((struct table_t_ *)NULL)))
  {
    unsigned long int size;
    size=table_preload_size(tbl, load->preload);
    message_preload(tbl, (signed int)load->preload, 0, size);
    size=table_preload(tbl, load->preload);
    pthread_mutex_lock(mutex);
    crack->freeram = crack->freeram - size;
    pthread_mutex_unlock(mutex);
    enum anonymous_10 state;
    state=table_preload_state(tbl);
    message_preload(tbl, (signed int)state, 1, size);
  }

  else
    message_done((enum anonymous_12)preload_all);
  return task;
}

// ophcrack_pwd_cmp
// file ophcrack.c line 1508
signed int ophcrack_pwd_cmp(const void *a, const void *b)
{
  struct ophel_t_ *ela = *((struct ophel_t_ **)a);
  struct ophel_t_ *elb = *((struct ophel_t_ **)b);
  if(!(elb->prefix >= ela->prefix))
    return 1;

  else
    if(!(ela->prefix >= elb->prefix))
      return -1;

    else
      if(!(elb->postfix >= ela->postfix))
        return 1;

      else
        if(!(ela->postfix >= elb->postfix))
          return -1;

        else
          return 0;
}

// ophcrack_reset
// file ophcrack.c line 275
void ophcrack_reset(struct ophcrack_t_ *crack, signed int kind_mask, signed int remove)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophtask_t_ *task = ((struct ophtask_t_ *)NULL);
  signed int i;
  pthread_mutex_lock(mutex);
  i = 0;
  signed int tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  for( ; !(i >= 3); i = i + 1)
  {
    struct list_t_ *queue = sched->queue[(signed long int)i];
    signed int size = queue->size;
    signed int j = 0;
    for( ; !(j >= size); j = j + 1)
    {
      void *return_value_list_rem_head_1;
      return_value_list_rem_head_1=list_rem_head(queue);
      task = (struct ophtask_t_ *)return_value_list_rem_head_1;
      static signed int work_mask = find | lookup_idx | lookup_end | lookup_srt | check;
      if(!((work_mask & (signed int)task->kind) == 0))
      {
        struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
        struct htbl_t_ *htbl = work->htbl;
        if(!(htbl == ((struct htbl_t_ *)NULL)))
        {
          if(!(1 + work->cmax >= htbl->covered))
            tmp_if_expr_2 = htbl->covered;

          else
            tmp_if_expr_2 = work->cmax + 1;
          htbl->covered = tmp_if_expr_2;
        }

      }

      if(!(remove == 0))
        tmp_if_expr_3 = ((signed int)task->kind & kind_mask) != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
      {
        ophtask_free(task);
        sched->ntasks = sched->ntasks - 1;
      }

      else
        list_add_tail(queue, (void *)task);
    }
  }
  pthread_mutex_unlock(mutex);
}

// ophcrack_resolve_nt
// file ophcrack.c line 1079
struct ophtask_t_ * ophcrack_resolve_nt(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct ophbforce_t_ *force = (struct ophbforce_t_ *)task->data;
  signed int mode = 0;
  struct hash_t_ **hashes = force->hashes;
  signed int nhashes = force->nhashes;
  signed int n = 0;
  for( ; !(n >= nhashes); n = n + 1)
  {
    struct hash_t_ *nthsh = hashes[(signed long int)n];
    struct hash_t_ *lmhsh1 = nthsh->lmhsh1;
    struct hash_t_ *lmhsh2 = nthsh->lmhsh2;
    char *lmpwd1 = lmhsh1->pwd;
    char *lmpwd2 = lmhsh2->pwd;
    char *nthash = (char *)nthsh->hash;
    char ntpwd[16l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    signed int return_value_resolve_nt_hash_1;
    return_value_resolve_nt_hash_1=resolve_nt_hash(lmpwd1, lmpwd2, nthash, (unsigned char *)ntpwd, mode);
    if(!(return_value_resolve_nt_hash_1 == 0))
      ophcrack_found(crack, nthsh, ((struct table_t_ *)NULL), 0, ntpwd);

  }
  return task;
}

// ophcrack_run
// file ophcrack.c line 313
void * ophcrack_run(void *arg)
{
  signed int myid;
  static signed int gid = 0;
  signed int tmp_post_1 = gid;
  gid = gid + 1;
  myid = tmp_post_1;
  struct ophcrack_t_ *crack = (struct ophcrack_t_ *)arg;
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  pthread_setcancelstate(0, ((signed int *)NULL));
  pthread_setcanceltype(0, ((signed int *)NULL));
  signed int tmp_if_expr_3;
  while((_Bool)1)
  {
    struct ophtask_t_ *task;
    void *return_value_scheduler_get_2;
    return_value_scheduler_get_2=scheduler_get(sched, myid);
    task = (struct ophtask_t_ *)return_value_scheduler_get_2;
    enum anonymous_12 kind = task->kind;
    if((signed int)kind == preload_all)
      task=ophcrack_preload_all(crack, task, myid);

    else
      if((signed int)kind == preload_one)
        task=ophcrack_preload_one(crack, task, myid);

      else
        if((signed int)kind == unload)
          task=ophcrack_unload(crack, task, myid);

        else
          if((signed int)kind == bforce_all || (signed int)kind == bforce_nt || (signed int)kind == bforce_lm || (signed int)kind == resolve_nt)
          {
            struct ophbforce_t_ *force = (struct ophbforce_t_ *)task->data;
            signed int nhashes = force->nhashes;
            signed int n = 0;
            if(!(force->hashes == ((struct hash_t_ **)NULL)))
            {
              n = 0;
              for( ; !(n >= nhashes); n = n + 1)
                if(force->hashes[(signed long int)n]->done == 0)
                  break;

            }

            if(!(n >= nhashes))
              switch((signed int)kind)
              {
                case bforce_all:
                {
                  task=ophcrack_bforce_all(crack, task, myid);
                  break;
                }
                case bforce_nt:
                {
                  task=ophcrack_bforce_nt(crack, task, myid);
                  break;
                }
                case bforce_lm:
                {
                  task=ophcrack_bforce_lm(crack, task, myid);
                  break;
                }
                case resolve_nt:
                  task=ophcrack_resolve_nt(crack, task, myid);
              }

          }

          else
          {
            struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
            if(!(work->hsh == ((struct hash_t_ *)NULL)))
            {
              if(work->hsh->done == 0)
              {
                switch((signed int)kind)
                {
                  case find:
                  {
                    task=ophcrack_find(crack, task, myid);
                    break;
                  }
                  case lookup_idx:
                  {
                    task=ophcrack_lookup_idx(crack, task, myid);
                    break;
                  }
                  case lookup_end:
                  {
                    task=ophcrack_lookup_end(crack, task, myid);
                    break;
                  }
                  case lookup_srt:
                  {
                    task=ophcrack_lookup_srt(crack, task, myid);
                    break;
                  }
                  case check:
                    task=ophcrack_check(crack, task, myid);
                }
                if(!(task == ((struct ophtask_t_ *)NULL)))
                {
                  struct htbl_t_ *htbl = work->htbl;
                  signed int cmin = work->cmin;
                  pthread_mutex_lock(mutex);
                  if(!(work->hsh->done == 0))
                    htbl->covered = 0;

                  else
                  {
                    if(!(htbl->covered >= cmin))
                      tmp_if_expr_3 = htbl->covered;

                    else
                      tmp_if_expr_3 = cmin;
                    htbl->covered = tmp_if_expr_3;
                  }
                  pthread_mutex_unlock(mutex);
                }

              }

            }

          }
    pthread_mutex_lock(mutex);
    if(!(task == ((struct ophtask_t_ *)NULL)))
    {
      ophstat_add(crack->stat, task->stat);
      if(!((bforce_nt & (signed int)task->kind) == 0))
      {
        struct ophbforce_t_ *ophcrack_run__1__1__3__1__force = (struct ophbforce_t_ *)task->data;
        unsigned long int count = (unsigned long int)ophcrack_run__1__1__3__1__force->count;
        message_bforce(1, count);
      }

      ophtask_free(task);
    }

    signed int disk_size = sched->queue[(signed long int)disk]->size;
    signed int mdqueue = crack->arg->mdqueue;
    signed int ntasks = 0;
    static signed int wait = 0;
    if((signed int)kind == find)
    {
      if(!(mdqueue >= disk_size))
        wait = wait + 1;

      else
        if(wait == 0)
          ntasks = 1;

    }

    if(mdqueue / 2 >= disk_size && wait >= 1)
    {
      ntasks = wait;
      wait = 0;
    }

    pthread_mutex_unlock(mutex);
    signed int i = 0;
    for( ; !(i >= ntasks); i = i + 1)
      ophcrack_next(crack);
    ntasks=scheduler_done(sched, myid);
    if(ntasks == 0)
      message_done((enum anonymous_12)all);

  }
  return NULL;
}

// ophcrack_save
// file ophcrack.h line 106
void ophcrack_save(struct ophcrack_t_ *crack, struct _IO_FILE *file, signed int nice, signed int status)
{
  signed int maxhid = crack->maxhid;
  struct hash_t_ **id_to_hash;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)maxhid, sizeof(struct hash_t_ *) /*8ul*/ );
  id_to_hash = (struct hash_t_ **)return_value_calloc_1;
  struct list_t_ *hashes = crack->hashes;
  struct list_nd_t_ *nd;
  struct arg_t_ *arg = crack->arg;
  nd = hashes->head;
  for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
  {
    struct hash_t_ *hsh = (struct hash_t_ *)nd->data;
    id_to_hash[(signed long int)hsh->id] = hsh;
  }
  signed int i = 0;
  for( ; !(i >= maxhid); i = i + 1)
    hash_print(id_to_hash[(signed long int)i], file, nice, status, arg->hideuname);
  free((void *)id_to_hash);
}

// ophcrack_setup_table
// file ophcrack.h line 78
signed int ophcrack_setup_table(struct table_t_ *tbl)
{
  tbl->kind=table_kind(tbl->code);
  signed int ret = 0;
  switch((signed int)tbl->kind)
  {
    case lmalphanum10k:
    {
      ret=lmtable_setup((void *)tbl);
      break;
    }
    case lmalphanum5k:
    {
      ret=lmtable_setup((void *)tbl);
      break;
    }
    case lmextended:
    {
      ret=lmtable_setup((void *)tbl);
      break;
    }
    case lmgermanv1:
    {
      ret=lmgerman_setup((void *)tbl);
      break;
    }
    case lmgermanv2:
    {
      ret=lmgerman_setup((void *)tbl);
      break;
    }
    case ntextended:
    {
      ret=ntextended_setup((void *)tbl);
      break;
    }
    case ntdict:
    {
      ret=ntdict_setup((void *)tbl);
      break;
    }
    case ntnine:
    {
      ret=ntnine_setup((void *)tbl);
      break;
    }
    case nteight:
    {
      ret=nteight_setup((void *)tbl);
      break;
    }
    case ntnum:
    {
      ret=ntnum_setup((void *)tbl);
      break;
    }
    case ntseven:
    {
      ret=ntseven_setup((void *)tbl);
      break;
    }
    case lmflash:
    {
      ret=lmflash_setup((void *)tbl);
      break;
    }
    case nteightxl:
    {
      ret=nteightxl_setup((void *)tbl);
      break;
    }
    case ntspecialxl:
    {
      ret=ntspecialxl_setup((void *)tbl);
      break;
    }
    case ntprobafree:
    {
      ret=ntproba_setup((void *)tbl);
      break;
    }
    case ntproba10g:
    {
      ret=ntproba_setup((void *)tbl);
      break;
    }
    case ntproba60g:
    {
      ret=ntproba_setup((void *)tbl);
      break;
    }
    case unknown:
      ret = -1;
  }
  return ret;
}

// ophcrack_start
// file ophcrack.h line 75
void ophcrack_start(struct ophcrack_t_ *crack)
{
  crack->freeram=crack->find_freeram();
  scheduler_start(crack->sched, ophcrack_run, (void *)crack);
}

// ophcrack_stop
// file ophcrack.c line 103
void ophcrack_stop(struct ophcrack_t_ *crack)
{
  scheduler_stop(crack->sched);
  scheduler_wait(crack->sched);
}

// ophcrack_unload
// file ophcrack.c line 2054
struct ophtask_t_ * ophcrack_unload(struct ophcrack_t_ *crack, struct ophtask_t_ *task, signed int id)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  struct ophload_t_ *load = (struct ophload_t_ *)task->data;
  struct table_t_ *tbl = load->tbl;
  if(!(tbl == ((struct table_t_ *)NULL)))
  {
    unsigned long int size;
    size=table_unload(tbl, load->preload);
    pthread_mutex_lock(mutex);
    crack->freeram = crack->freeram + size;
    pthread_mutex_unlock(mutex);
    message_unload(tbl, size);
  }

  else
    message_done((enum anonymous_12)unload);
  return task;
}

// ophcrack_update
// file ophcrack.h line 100
void ophcrack_update(struct ophcrack_t_ *crack)
{
  struct scheduler_t_ *sched = crack->sched;
  union anonymous_7 *mutex = sched->mutex;
  signed int *seen;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)crack->maxtid, sizeof(signed int) /*4ul*/ );
  seen = (signed int *)return_value_calloc_1;
  struct list_t_ *hashes = crack->hashes;
  struct list_nd_t_ *hnd;
  pthread_mutex_lock(mutex);
  hnd = hashes->head;
  signed int tmp_if_expr_2;
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  signed int tmp_if_expr_5;
  for( ; !(hnd == ((struct list_nd_t_ *)NULL)); hnd = hnd->next)
  {
    struct hash_t_ *hsh = (struct hash_t_ *)hnd->data;
    struct list_t_ *tables = hsh->tables;
    struct list_nd_t_ *tnd = tables->head;
    for( ; !(tnd == ((struct list_nd_t_ *)NULL)); tnd = tnd->next)
    {
      struct htbl_t_ *htbl = (struct htbl_t_ *)tnd->data;
      struct table_t_ *tbl = htbl->tbl;
      signed int id = tbl->id;
      signed int cmin;
      if(!(hsh->done == 0))
        tmp_if_expr_2 = 0;

      else
        tmp_if_expr_2 = htbl->col + 1;
      cmin = tmp_if_expr_2;
      signed int cmax;
      if(!(hsh->done == 0))
        tmp_if_expr_3 = 0;

      else
        tmp_if_expr_3 = htbl->covered;
      cmax = tmp_if_expr_3;
      if(seen[(signed long int)id] == 0)
      {
        tbl->cmin = cmin;
        tbl->cmax = cmax;
        seen[(signed long int)id] = 1;
      }

      else
      {
        if(!(cmin >= tbl->cmin))
          tmp_if_expr_4 = tbl->cmin;

        else
          tmp_if_expr_4 = cmin;
        tbl->cmin = tmp_if_expr_4;
        if(!(cmax >= tbl->cmax))
          tmp_if_expr_5 = tbl->cmax;

        else
          tmp_if_expr_5 = cmax;
        tbl->cmax = tmp_if_expr_5;
      }
    }
  }
  signed int done = 0;
  struct list_t_ *active = crack->active;
  struct list_nd_t_ *nd = active->head;
  for( ; !(nd == ((struct list_nd_t_ *)NULL)); nd = nd->next)
  {
    struct table_t_ *ophcrack_update__1__2__1__tbl = (struct table_t_ *)nd->data;
    if(!(ophcrack_update__1__2__1__tbl->active == 0))
    {
      if(ophcrack_update__1__2__1__tbl->cmax == 0)
      {
        ophcrack_update__1__2__1__tbl->active = 0;
        done = 1;
      }

    }

  }
  pthread_mutex_unlock(mutex);
  if(!(done == 0))
    message_done((enum anonymous_12)check);

  free((void *)seen);
}

// ophel_alloc
// file ophel.c line 38
struct ophel_t_ * ophel_alloc(void)
{
  struct ophel_t_ *el;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct ophel_t_) /*112ul*/ );
  el = (struct ophel_t_ *)return_value_malloc_1;
  el->col = 0;
  memset((void *)el->pwd, 0, (unsigned long int)(50 + 1));
  el->prefix = (unsigned long int)0;
  el->postfix = (unsigned long int)0;
  el->start = (unsigned long int)0;
  el->low = (unsigned long int)0;
  el->high = (unsigned long int)0;
  el->offset = (unsigned long int)0;
  el->stat=ophstat_alloc();
  return el;
}

// ophel_free
// file ophel.c line 55
void ophel_free(struct ophel_t_ *el)
{
  ophstat_free(el->stat);
  free((void *)el);
}

// ophstat_add
// file ophstat.c line 56
void ophstat_add(struct ophstat_t_ *stat1, struct ophstat_t_ *stat2)
{
  stat1->hredux = stat1->hredux + stat2->hredux;
  stat1->prefix = stat1->prefix + stat2->prefix;
  stat1->postfix = stat1->postfix + stat2->postfix;
  stat1->start = stat1->start + stat2->start;
  stat1->fseek_idx = stat1->fseek_idx + stat2->fseek_idx;
  stat1->fseek_end = stat1->fseek_end + stat2->fseek_end;
  stat1->fseek_srt = stat1->fseek_srt + stat2->fseek_srt;
  stat1->falarm = stat1->falarm + stat2->falarm;
  stat1->falarm_hredux = stat1->falarm_hredux + stat2->falarm_hredux;
  stat1->match_table = stat1->match_table + stat2->match_table;
  stat1->match_bforce = stat1->match_bforce + stat2->match_bforce;
}

// ophstat_alloc
// file ophstat.c line 36
struct ophstat_t_ * ophstat_alloc(void)
{
  struct ophstat_t_ *stat;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct ophstat_t_) /*224ul*/ );
  stat = (struct ophstat_t_ *)return_value_malloc_1;
  signed int i = 0;
  for( ; !(i >= 16); i = i + 1)
  {
    stat->length[(signed long int)i] = (unsigned int)0;
    stat->category[(signed long int)i] = (unsigned int)0;
  }
  stat->time=list_alloc();
  ophstat_reset(stat);
  return stat;
}

// ophstat_free
// file ophstat.c line 51
void ophstat_free(struct ophstat_t_ *stat)
{
  list_free(stat->time);
  free((void *)stat);
}

// ophstat_reset
// file ophstat.c line 70
void ophstat_reset(struct ophstat_t_ *stat)
{
  stat->hredux = (unsigned long int)0;
  stat->prefix = (unsigned long int)0;
  stat->postfix = (unsigned long int)0;
  stat->start = (unsigned long int)0;
  stat->fseek_idx = (unsigned long int)0;
  stat->fseek_end = (unsigned long int)0;
  stat->fseek_srt = (unsigned long int)0;
  stat->falarm = (unsigned long int)0;
  stat->falarm_hredux = (unsigned long int)0;
  stat->match_table = (unsigned long int)0;
  stat->match_bforce = (unsigned long int)0;
}

// ophtask_alloc
// file ophtask.c line 38
struct ophtask_t_ * ophtask_alloc(enum anonymous_12 kind)
{
  struct ophtask_t_ *task;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct ophtask_t_) /*24ul*/ );
  task = (struct ophtask_t_ *)return_value_malloc_1;
  task->kind = kind;
  task->data = NULL;
  task->stat=ophstat_alloc();
  switch((signed int)kind)
  {
    case preload_all:
    {
      struct ophload_t_ *load;
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct ophload_t_) /*24ul*/ );
      load = (struct ophload_t_ *)return_value_malloc_2;
      task->data = (void *)load;
      load->tables=list_alloc();
      load->tbl = ((struct table_t_ *)NULL);
      load->preload = (enum anonymous_10)preload_none;
      goto __CPROVER_DUMP_L5;
    }
    case preload_one:

    case unload:
    {
      struct ophload_t_ *ophtask_alloc__1__1__2__load;
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(sizeof(struct ophload_t_) /*24ul*/ );
      ophtask_alloc__1__1__2__load = (struct ophload_t_ *)return_value_malloc_3;
      task->data = (void *)ophtask_alloc__1__1__2__load;
      ophtask_alloc__1__1__2__load->tables = ((struct list_t_ *)NULL);
      ophtask_alloc__1__1__2__load->tbl = ((struct table_t_ *)NULL);
      ophtask_alloc__1__1__2__load->preload = (enum anonymous_10)preload_none;
      goto __CPROVER_DUMP_L5;
    }
    case find:

    case lookup_idx:

    case lookup_end:

    case lookup_srt:

    case check:
    {
      struct ophwork_t_ *work;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(struct ophwork_t_) /*32ul*/ );
      work = (struct ophwork_t_ *)return_value_malloc_4;
      task->data = (void *)work;
      work->hsh = ((struct hash_t_ *)NULL);
      work->htbl = ((struct htbl_t_ *)NULL);
      work->cmin = 0;
      work->cmax = 0;
      work->tosearch = ((struct ophel_t_ **)NULL);
      goto __CPROVER_DUMP_L5;
    }
    case bforce_all:

    case bforce_nt:

    case bforce_lm:

    case resolve_nt:
    {
      struct ophbforce_t_ *force;
      void *return_value_malloc_5;
      return_value_malloc_5=malloc(sizeof(struct ophbforce_t_) /*131144ul*/ );
      force = (struct ophbforce_t_ *)return_value_malloc_5;
      task->data = (void *)force;
      force->nhashes = 0;
      force->hashes = ((struct hash_t_ **)NULL);
      force->hash = ((unsigned char **)NULL);
      force->found = ((signed int *)NULL);
      force->len = 1;
      force->count = 0;
      memset((void *)force->idx, 0, sizeof(signed int [8l]) /*32ul*/ );
      memset((void *)force->bloom, 0, sizeof(signed int [32768l]) /*131072ul*/ );
    }
    case all:

    default:
    {

    __CPROVER_DUMP_L5:
      ;
      return task;
    }
  }
}

// ophtask_convert
// file ophtask.c line 179
void ophtask_convert(struct ophtask_t_ *task, enum anonymous_12 from, enum anonymous_12 to)
{
  if((signed int)from == find)
  {
    struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
    signed int cmin = work->cmin;
    signed int cmax = work->cmax;
    signed int size = (cmax - cmin) + 1;
    signed int i;
    if((signed int)to == lookup_idx || (signed int)to == lookup_end || (signed int)to == lookup_srt)
    {
      task->kind = to;
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)size * sizeof(struct ophel_t_) /*112ul*/ );
      work->tosearch = (struct ophel_t_ **)return_value_malloc_1;
      i = 0;
      for( ; !(i >= size); i = i + 1)
        work->tosearch[(signed long int)i]=ophel_alloc();
    }

  }

}

// ophtask_free
// file ophtask.c line 105
void ophtask_free(struct ophtask_t_ *task)
{
  signed int kind = (signed int)task->kind;
  switch(kind)
  {
    case preload_all:
    {
      struct ophload_t_ *load = (struct ophload_t_ *)task->data;
      list_free(load->tables);
      free((void *)load);
      goto __CPROVER_DUMP_L15;
    }
    case preload_one:

    case unload:
    {
      struct ophload_t_ *ophtask_free__1__1__2__load = (struct ophload_t_ *)task->data;
      free((void *)ophtask_free__1__1__2__load);
      goto __CPROVER_DUMP_L15;
    }
    case find:

    case lookup_idx:

    case lookup_end:

    case lookup_srt:

    case check:
    {
      struct ophwork_t_ *work = (struct ophwork_t_ *)task->data;
      struct ophel_t_ **tosearch = work->tosearch;
      signed int cmax = work->cmax;
      signed int cmin = work->cmin;
      signed int size = (cmax - cmin) + 1;
      signed int i;
      if(!(tosearch == ((struct ophel_t_ **)NULL)))
      {
        i = 0;
        for( ; !(i >= size); i = i + 1)
          if(!(tosearch[(signed long int)i] == ((struct ophel_t_ *)NULL)))
            ophel_free(tosearch[(signed long int)i]);

        free((void *)tosearch);
      }

      free((void *)work);
      goto __CPROVER_DUMP_L15;
    }
    case bforce_all:

    case bforce_nt:

    case bforce_lm:

    case resolve_nt:
    {
      struct ophbforce_t_ *force = (struct ophbforce_t_ *)task->data;
      struct hash_t_ **hashes = force->hashes;
      unsigned char **hash = force->hash;
      signed int *found = force->found;
      signed int nhashes = force->nhashes;
      signed int ophtask_free__1__1__4__i;
      if(!(hash == ((unsigned char **)NULL)))
      {
        ophtask_free__1__1__4__i = 0;
        for( ; !(ophtask_free__1__1__4__i >= nhashes); ophtask_free__1__1__4__i = ophtask_free__1__1__4__i + 1)
          if(!(hash[(signed long int)ophtask_free__1__1__4__i] == ((unsigned char *)NULL)))
            free((void *)hash[(signed long int)ophtask_free__1__1__4__i]);

        free((void *)hash);
      }

      if(!(found == ((signed int *)NULL)))
        free((void *)found);

      if(!(hashes == ((struct hash_t_ **)NULL)))
        free((void *)hashes);

      free((void *)force);
    }
    case all:

    default:
    {

    __CPROVER_DUMP_L15:
      ;
      ophstat_free(task->stat);
      free((void *)task);
    }
  }
}

// parself
// file hive.c line 173
signed long int parself(struct hive *h, char *t, unsigned long int off)
{
  struct _nk_hdr *n;
  struct _lf_hdr *l;
  struct _hashrecord *hr;
  signed long int res;
  signed int i;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _hashrecord) /*8ul*/ );
  hr = (struct _hashrecord *)return_value_malloc_1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct _nk_hdr) /*88ul*/ );
  n = (struct _nk_hdr *)return_value_malloc_2;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct _lf_hdr) /*16ul*/ );
  l = (struct _lf_hdr *)return_value_malloc_3;
  l=read_lf(l, h, (signed int)off);
  i = 0;
  unsigned long int return_value_strlen_4;
  for( ; !(i >= (signed int)l->key_num); i = i + 1)
  {
    hr=read_hr(hr, l->hr, i);
    n=read_nk(n, h, hr->nk_offset + 0x1000);
    signed int return_value_memcmp_5;
    return_value_memcmp_5=memcmp((const void *)t, (const void *)n->key_name, (unsigned long int)n->name_len);
    if(return_value_memcmp_5 == 0)
    {
      return_value_strlen_4=strlen(t);
      if(return_value_strlen_4 == (unsigned long int)n->name_len)
      {
        res = (signed long int)hr->nk_offset;
        free((void *)n);
        free((void *)l);
        return res;
      }

    }

  }
  free((void *)n);
  free((void *)l);
  return (signed long int)-1;
}

// power
// file pattern.c line 45
unsigned long int power(unsigned int a, unsigned int b)
{
  unsigned long int result = (unsigned long int)1;
  unsigned int i = (unsigned int)0;
  for( ; !(i >= b); i = i + 1u)
    result = result * (unsigned long int)a;
  return result;
}

// proba_info_alloc
// file ./ntproba/proba_info.h line 52
struct proba_info_ * proba_info_alloc(void)
{
  struct proba_info_ *proba;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct proba_info_) /*48ul*/ );
  proba = (struct proba_info_ *)return_value_malloc_1;
  proba->mtype = (enum markovType)0;
  proba->nbByteM0 = (unsigned int)0;
  proba->nbByteM = (unsigned int)0;
  proba->nbByteBin = (unsigned int)0;
  proba->nbBitIndex = (unsigned int)0;
  proba->power2 = (unsigned int)0;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct patternArray) /*40ul*/ );
  proba->array = (struct patternArray *)return_value_malloc_2;
  proba->mis = ((struct markovImprobaStruct *)NULL);
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct markovDynProgWrapper) /*40ul*/ );
  proba->mdpw = (struct markovDynProgWrapper *)return_value_malloc_3;
  return proba;
}

// proba_info_free
// file ./ntproba/proba_info.h line 53
void proba_info_free(struct proba_info_ *proba)
{
  free((void *)proba->array);
  free((void *)proba->mdpw);
  free((void *)proba);
}

// readImprobaStructFromBinFile
// file ./ntproba/ioMarkov.h line 44
char readImprobaStructFromBinFile(struct markovImprobaStruct **mis, char *path, char *fileName)
{
  struct stat sb;
  signed int binFile;
  char buffer[256l];
  if(!(fileName == ((char *)NULL)))
  {
    sprintf(buffer, "%s/%s", path, fileName);
    binFile=open(buffer, 00);
  }

  else
  {
    sprintf(buffer, "%s/%s", path, (const void *)"markovI.dat");
    binFile=open(buffer, 00);
  }
  if(binFile == -1)
    return (char)0;

  else
  {
    signed int return_value_fstat_1;
    return_value_fstat_1=fstat_link1(binFile, &sb);
    if(return_value_fstat_1 == -1)
    {
      close(binFile);
      return (char)0;
    }

    else
      if(!((unsigned long int)sb.st_size == sizeof(struct markovImprobaStruct) /*73220ul*/ ))
      {
        close(binFile);
        return (char)0;
      }

      else
      {
        void *return_value_mmap_2;
        return_value_mmap_2=mmap((void *)0, sizeof(struct markovImprobaStruct) /*73220ul*/ , 0x1, 0x02, binFile, (signed long int)0);
        *mis = (struct markovImprobaStruct *)return_value_mmap_2;
        if(*mis == (struct markovImprobaStruct *)-1)
        {
          close(binFile);
          return (char)0;
        }

        else
        {
          close(binFile);
          return (char)1;
        }
      }
  }
}

// readPatternArrayFromXMLFile
// file ./ntproba/ioPattern.h line 42
char readPatternArrayFromXMLFile(struct patternArray *array, char *path, char *fileName)
{
  struct stat sb;
  char *xmlBuff;
  char buffer[256l];
  signed int xmlFile;
  if(fileName == ((char *)NULL))
    sprintf(buffer, "%s/%s", path, (const void *)"pattern.xml");

  else
    sprintf(buffer, "%s/%s", path, fileName);
  xmlFile=open(buffer, 00);
  if(xmlFile == -1)
    return (char)0;

  else
  {
    signed int return_value_fstat_1;
    return_value_fstat_1=fstat_link2(xmlFile, &sb);
    if(return_value_fstat_1 == -1)
    {
      close(xmlFile);
      return (char)0;
    }

    else
    {
      void *return_value_mmap_2;
      return_value_mmap_2=mmap((void *)0, (unsigned long int)sb.st_size, 0x1, 0x02, xmlFile, (signed long int)0);
      xmlBuff = (char *)return_value_mmap_2;
      if(xmlBuff == (char *)-1)
      {
        close(xmlFile);
        return (char)0;
      }

      else
      {
        struct xmlDataWrapper data;
        data.array = array;
        data.currentPattern = (unsigned int)0;
        data.currentCharType = (unsigned int)0;
        struct XML_ParserStruct *parser;
        parser=XML_ParserCreate((const char *)(void *)0);
        XML_SetUserData(parser, (void *)&data);
        XML_SetElementHandler(parser, start_element, end_element);
        enum XML_Status return_value_XML_Parse_3;
        return_value_XML_Parse_3=XML_Parse(parser, xmlBuff, (signed int)sb.st_size, (signed int)(unsigned char)1);
        if((signed int)return_value_XML_Parse_3 == XML_STATUS_ERROR)
        {
          XML_ParserFree(parser);
          munmap((void *)xmlBuff, (unsigned long int)sb.st_size);
          close(xmlFile);
          return (char)0;
        }

        else
        {
          initLookUpTable(array->lut, array);
          XML_ParserFree(parser);
          munmap((void *)xmlBuff, (unsigned long int)sb.st_size);
          close(xmlFile);
          return (char)1;
        }
      }
    }
  }
}

// read_data
// file hive.c line 109
unsigned char * read_data(struct hive *h, signed int offset)
{
  return (unsigned char *)(h->base + (signed long int)offset + (signed long int)4);
}

// read_hr
// file hive.c line 98
struct _hashrecord * read_hr(struct _hashrecord *hr, unsigned char *pos, signed int index)
{
  pos = pos + (signed long int)(8 * index);
  memcpy((void *)hr, (const void *)pos, sizeof(struct _hashrecord) /*8ul*/ );
  return hr;
}

// read_lf
// file hive.c line 61
struct _lf_hdr * read_lf(struct _lf_hdr *lf, struct hive *h, signed int offset)
{
  memcpy((void *)lf, (const void *)(h->base + (signed long int)offset + (signed long int)4), sizeof(struct _lf_hdr) /*16ul*/ );
  lf->hr = h->base + (signed long int)offset + (signed long int)4 + (signed long int)4;
  return lf;
}

// read_nk
// file hive.c line 42
struct _nk_hdr * read_nk(struct _nk_hdr *nk, struct hive *h, signed int offset)
{
  memcpy((void *)nk, (const void *)(h->base + (signed long int)offset + (signed long int)4), sizeof(struct _nk_hdr) /*88ul*/ );
  nk->key_name = h->base + (signed long int)offset + (signed long int)4 + (signed long int)76;
  return nk;
}

// read_valuelist
// file hive.c line 87
signed int * read_valuelist(signed int *value, struct hive *h, signed int offset, signed int size)
{
  memcpy((void *)value, (const void *)(h->base + (signed long int)offset + (signed long int)4), (unsigned long int)size * sizeof(signed int) /*4ul*/ );
  return value;
}

// read_vk
// file hive.c line 72
struct _vk_hdr * read_vk(struct _vk_hdr *vk, struct hive *h, signed int offset)
{
  memcpy((void *)vk, (const void *)(h->base + (signed long int)offset + (signed long int)4), sizeof(struct _vk_hdr) /*32ul*/ );
  vk->value_name = h->base + (signed long int)offset + (signed long int)4 + (signed long int)20;
  return vk;
}

// resolve_nt_hash
// file original.c line 48
signed int resolve_nt_hash(char *p1, char *p2, char *h, unsigned char *pw, signed int insist)
{
  unsigned int i;
  unsigned int j;
  unsigned int combinations;
  unsigned int l;
  unsigned int max = (unsigned int)0;
  unsigned char md4[17l];
  unsigned char *p;
  unsigned char orig[15l] = { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  memset((void *)pw, 0, (unsigned long int)16);
  strcpy((char *)pw, p1);
  strcpy((char *)(pw + (signed long int)7), p2);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen((char *)pw);
  l = (unsigned int)return_value_strlen_1;
  p = (unsigned char *)pw;
  i = (unsigned int)0;
  for( ; !(i >= l); i = i + 1u)
    if((signed int)p[(signed long int)i] >= 128)
      switch((signed int)p[(signed long int)i])
      {
        case 0x8e:
        {
          p[(signed long int)i] = (unsigned char)0xc4;
          break;
        }
        case 0x99:
        {
          p[(signed long int)i] = (unsigned char)0xd6;
          break;
        }
        case 0x9a:
        {
          p[(signed long int)i] = (unsigned char)0xdc;
          break;
        }
        case 0xe1:
        {
          p[(signed long int)i] = (unsigned char)0xdf;
          break;
        }
        case 0xa5:
        {
          p[(signed long int)i] = (unsigned char)0xd1;
          break;
        }
        case 0x90:
        {
          p[(signed long int)i] = (unsigned char)0xc9;
          break;
        }
        case 0x80:
          p[(signed long int)i] = (unsigned char)0xc7;
      }

  strcpy((char *)orig, (char *)pw);
  combinations = (unsigned int)1;
  i = (unsigned int)0;
  static unsigned char is_multi[256l] = { (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)8, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)8, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)8, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)8, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)8, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)2, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)2, (unsigned char)1, (unsigned char)1, (unsigned char)2, (unsigned char)1, (unsigned char)2, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)2, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)2, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)2, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1, (unsigned char)1 };
  for( ; !(i >= l); i = i + 1u)
    combinations = combinations * (unsigned int)is_multi[(signed long int)pw[(signed long int)i]];
  unsigned int tmp_if_expr_2;
  if(insist == 0)
  {
    static signed int max_multi = 8;
    max = (unsigned int)max_multi;
    while(combinations >= 50000001u)
    {
      max = max - 1u;
      combinations = (unsigned int)1;
      i = (unsigned int)0;
      for( ; !(i >= l); i = i + 1u)
      {
        if(!((unsigned int)is_multi[(signed long int)pw[(signed long int)i]] >= max))
          tmp_if_expr_2 = (unsigned int)is_multi[(signed long int)pw[(signed long int)i]];

        else
          tmp_if_expr_2 = max;
        combinations = combinations * tmp_if_expr_2;
      }
    }
  }

  i = (unsigned int)0;
  unsigned int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  for( ; !(i >= combinations); i = i + 1u)
  {
    signed int c;
    signed int m;
    c = (signed int)i;
    j = (unsigned int)0;
    for( ; !(j >= l); j = j + 1u)
    {
      if(!((unsigned int)is_multi[(signed long int)orig[(signed long int)j]] >= max))
        tmp_if_expr_3 = (unsigned int)is_multi[(signed long int)orig[(signed long int)j]];

      else
        tmp_if_expr_3 = max;
      m = (signed int)tmp_if_expr_3;
      static unsigned char multi_char[256l][12l] = { { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)65, (unsigned char)97, (unsigned char)0xe0, (unsigned char)0xe2, (unsigned char)0xc0, (unsigned char)0xc2, (unsigned char)0xe3, (unsigned char)0xc3, 0, 0, 0, 0 },
    { 'B', 'b', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'C', 'c', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'D', 'd', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)69, (unsigned char)101, (unsigned char)0xc8, (unsigned char)0xe8, (unsigned char)0xca, (unsigned char)0xea, (unsigned char)0xeb, (unsigned char)0xcb, 0, 0, 0, 0 },
    { 'F', 'f', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'G', 'g', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'H', 'h', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)73, (unsigned char)105, (unsigned char)0xee, (unsigned char)0xef, (unsigned char)0xce, (unsigned char)0xcf, (unsigned char)0xed, (unsigned char)0xcd, 0, 0, 0, 0 },
    { 'J', 'j', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'K', 'k', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'L', 'l', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'M', 'm', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'N', 'n', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)79, (unsigned char)111, (unsigned char)0xf4, (unsigned char)0xd4, (unsigned char)0xf3, (unsigned char)0xf5, (unsigned char)0xd3, (unsigned char)0xd5, 0, 0, 0, 0 },
    { 'P', 'p', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'Q', 'q', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'R', 'r', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'S', 's', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'T', 't', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)85, (unsigned char)117, (unsigned char)0xf9, (unsigned char)0xfb, (unsigned char)0xd9, (unsigned char)0xdb, (unsigned char)0xfa, (unsigned char)0xda, 0, 0, 0, 0 },
    { 'V', 'v', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'W', 'w', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'X', 'x', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'Y', 'y', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 'Z', 'z', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0xc4, (unsigned char)0xe4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0xe7, (unsigned char)0xc7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0xc9, (unsigned char)0xe9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0xd1, (unsigned char)0xf1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0xd6, (unsigned char)0xf6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0xdc, (unsigned char)0xfc, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0xdf, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { (unsigned char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
      if(m >= 2)
        tmp_if_expr_4 = (signed int)multi_char[(signed long int)orig[(signed long int)j]][(signed long int)(c % m)];

      else
        tmp_if_expr_4 = (signed int)orig[(signed long int)j];
      pw[(signed long int)j] = (unsigned char)tmp_if_expr_4;
      c = c / m;
    }
    md4[(signed long int)16] = (unsigned char)0;
    make_nthash((char *)pw, (char *)md4);
    signed int return_value_memcmp_5;
    return_value_memcmp_5=memcmp((const void *)md4, (const void *)h, (unsigned long int)16);
    if(return_value_memcmp_5 == 0)
      return 1;

  }
  memset((void *)pw, 0, (unsigned long int)16);
  return 0;
}

// samdump2
// file ./samdump2/samdump2.h line 32
signed int samdump2(unsigned char *sam, struct list_t_ *list, unsigned char *bootkey, char *error, signed int debug, signed int live, unsigned int size)
{
  char *regaccountkey;
  char *reguserskey;
  unsigned char aqwerty[47l] = { '!', '@', '#', '_', '%', '^', '&', '*', '(', ')', 'q', 'w', 'e', 'r', 't', 'y', 'U', 'I', 'O', 'P', 'A', 'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Q', 'Q', 'Q', 'Q', 'Q', 'Q', 'Q', 'Q', 'Q', 'Q', 'Q', 'Q', ')', '(', '*', '@', '&', '%', 0 };
  unsigned char anum[41l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 };
  unsigned char antpassword[11l] = { 'N', 'T', 'P', 'A', 'S', 'S', 'W', 'O', 'R', 'D', 0 };
  unsigned char almpassword[11l] = { 'L', 'M', 'P', 'A', 'S', 'S', 'W', 'O', 'R', 'D', 0 };
  char *buff;
  signed int buff_len;
  char *root_key;
  struct hive h;
  struct _nk_hdr *n = (struct _nk_hdr *)(void *)0;
  unsigned char *b = (unsigned char *)(void *)0;
  signed int blen;
  unsigned char regkeyname[50l];
  signed int regkeynamelen;
  char *keyname;
  struct MD5state_st md5c;
  unsigned char md5hash[16l];
  struct rc4_key_st rc4k;
  unsigned char hbootkey[32l];
  struct DES_ks ks1;
  struct DES_ks ks2;
  unsigned char deskey1[8l];
  unsigned char deskey2[8l];
  signed int i;
  signed int j;
  char *username_utf8;
  signed int rid;
  unsigned short int disabled = (unsigned short int)0;
  signed int usernameoffset;
  signed int usernamelen;
  signed int lm_hashesoffset;
  signed int nt_hashesoffset;
  signed int lm_size;
  signed int nt_size;
  unsigned char obfkey[16l];
  unsigned char fb[16l];
  _InitHive(&h);
  if(live == 0)
  {
    signed int return_value__RegOpenHive_1;
    return_value__RegOpenHive_1=_RegOpenHive(sam, &h);
    if(!(return_value__RegOpenHive_1 == 0))
    {
      sprintf(error, "Error opening sam hive or not valid file(\"%s\")\n", sam);
      return -1;
    }

  }

  else
  {
    signed int return_value__RegOpenHiveBuffer_2;
    return_value__RegOpenHiveBuffer_2=_RegOpenHiveBuffer(sam, (unsigned long int)size, &h);
    if(!(return_value__RegOpenHiveBuffer_2 == 0))
    {
      sprintf(error, "Error opening sam hive, hive not valid\n");
      return -1;
    }

  }
  signed int return_value__RegGetRootKey_3;
  return_value__RegGetRootKey_3=_RegGetRootKey(&h, &root_key);
  if(!(return_value__RegGetRootKey_3 == 0))
  {
    sprintf(error, "Error reading hive root key\n");
    return -1;
  }

  else
  {
    if(!(debug == 0))
      printf("Root Key : %s\n", root_key);

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(root_key);
    void *return_value_malloc_5;
    return_value_malloc_5=malloc(return_value_strlen_4 + (unsigned long int)30);
    regaccountkey = (char *)return_value_malloc_5;
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(root_key);
    void *return_value_malloc_7;
    return_value_malloc_7=malloc(return_value_strlen_6 + (unsigned long int)30);
    reguserskey = (char *)return_value_malloc_7;
    sprintf(regaccountkey, "%s\\SAM\\Domains\\Account", root_key);
    sprintf(reguserskey, "%s\\SAM\\Domains\\Account\\Users", root_key);
    void *return_value_malloc_8;
    return_value_malloc_8=malloc(sizeof(struct _nk_hdr) /*88ul*/ );
    n = (struct _nk_hdr *)return_value_malloc_8;
    signed int return_value__RegOpenKey_9;
    return_value__RegOpenKey_9=_RegOpenKey(&h, regaccountkey, &n);
    if(!(return_value__RegOpenKey_9 == 0))
    {
      _RegCloseHive(&h);
      sprintf(error, "%s key!\n", regaccountkey);
      return -1;
    }

    else
    {
      signed int return_value__RegQueryValue_10;
      return_value__RegQueryValue_10=_RegQueryValue(&h, "F", n, &b, &blen);
      if(!(return_value__RegQueryValue_10 == 0))
      {
        _RegCloseHive(&h);
        sprintf(error, "No F!\n");
        return -1;
      }

      else
      {
        MD5_Init(&md5c);
        MD5_Update(&md5c, (const void *)&b[(signed long int)0x70], (unsigned long int)0x10);
        MD5_Update(&md5c, (const void *)aqwerty, (unsigned long int)0x2f);
        MD5_Update(&md5c, (const void *)bootkey, (unsigned long int)0x10);
        MD5_Update(&md5c, (const void *)anum, (unsigned long int)0x29);
        MD5_Final(md5hash, &md5c);
        RC4_set_key(&rc4k, 0x10, md5hash);
        RC4(&rc4k, (unsigned long int)0x20, &b[(signed long int)0x80], hbootkey);
        j = 0;
        while(!(j == -1))
        {
          signed int return_value__RegOpenKey_11;
          return_value__RegOpenKey_11=_RegOpenKey(&h, reguserskey, &n);
          if(!(return_value__RegOpenKey_11 == 0))
          {
            _RegCloseHive(&h);
            sprintf(error, "No Users key!\n");
            return -1;
          }

          regkeynamelen = (signed int)sizeof(unsigned char [50l]) /*50ul*/ ;
          j=_RegEnumKey(&h, n, j, (char *)regkeyname, &regkeynamelen);
          if(!(debug == 0))
            printf("******************** %d ********************\n", j);

          signed int return_value_memcmp_12;
          return_value_memcmp_12=memcmp((const void *)regkeyname, (const void *)"Names", (unsigned long int)regkeynamelen);
          if(!(return_value_memcmp_12 == 0))
          {
            unsigned long int return_value_strlen_13;
            return_value_strlen_13=strlen(reguserskey);
            void *return_value_malloc_14;
            return_value_malloc_14=malloc(return_value_strlen_13 + (unsigned long int)regkeynamelen + (unsigned long int)2);
            keyname = (char *)return_value_malloc_14;
            strcpy(keyname, reguserskey);
            strcat(keyname, "\\");
            strcat(keyname, (char *)regkeyname);
            if(!(debug == 0))
              printf("keyname = %s\n", keyname);

            signed int return_value__RegOpenKey_15;
            return_value__RegOpenKey_15=_RegOpenKey(&h, keyname, &n);
            if(!(return_value__RegOpenKey_15 == 0))
            {
              _RegCloseHive(&h);
              sprintf(error, "Asd -_- _RegEnumKey fail!\n");
              return -1;
            }

            signed int return_value__RegQueryValue_16;
            return_value__RegQueryValue_16=_RegQueryValue(&h, "F", n, &b, &blen);
            if(!(return_value__RegQueryValue_16 == 0))
            {
              _RegCloseHive(&h);
              sprintf(error, "No F value!\n");
              return -1;
            }

            disabled = (unsigned short int)((signed int)(unsigned short int)b[(signed long int)56] & 0x0001);
            if(!(debug == 0))
              printf("disabled = %d\n", disabled);

            signed int return_value__RegQueryValue_17;
            return_value__RegQueryValue_17=_RegQueryValue(&h, "V", n, &b, &blen);
            if(!(return_value__RegQueryValue_17 == 0))
            {
              _RegCloseHive(&h);
              sprintf(error, "No V value!\n");
              return -1;
            }

            unsigned long int return_value_strtoul_18;
            return_value_strtoul_18=strtoul((char *)regkeyname, (char ** restrict )(void *)0, 16);
            rid = (signed int)return_value_strtoul_18;
            usernamelen = *((signed int *)(b + (signed long int)0x10)) >> 1;
            usernameoffset = (signed int)b[(signed long int)0xc] + 0xcc;
            if(!(debug == 0))
              printf("\nusername len=%d, off=%x\n", usernamelen, usernameoffset);

            void *return_value_malloc_19;
            return_value_malloc_19=malloc((unsigned long int)(usernamelen * 2 + 1));
            username_utf8 = (char *)return_value_malloc_19;
            memset((void *)username_utf8, 0, (unsigned long int)(usernamelen * 2 + 1));
            utf16_to_utf8((unsigned char *)username_utf8, (unsigned short int *)&b[(signed long int)usernameoffset], (unsigned long int)usernamelen);
            lm_hashesoffset = *((signed int *)(b + (signed long int)0x9c)) + 0xcc;
            lm_size = *((signed int *)(b + (signed long int)0xa0));
            nt_hashesoffset = *((signed int *)(b + (signed long int)0xa8)) + 0xcc;
            nt_size = *((signed int *)(b + (signed long int)0xac));
            if(!(debug == 0))
            {
              printf("lm_hashoffset = %x, lm_size = %x\n", lm_hashesoffset, lm_size);
              printf("nt_hashoffset = %x, nt_size = %x\n", nt_hashesoffset, nt_size);
            }

            void *return_value_malloc_20;
            return_value_malloc_20=malloc((unsigned long int)512);
            buff = (char *)return_value_malloc_20;
            if(!(disabled == 0))
              buff_len=sprintf(buff, "*disabled* %s:%d:", username_utf8, rid);

            else
              buff_len=sprintf(buff, "%s:%d:", username_utf8, rid);
            if(lm_size == 0x14)
            {
              if(!(debug == 0))
              {
                printf("\n");
                i = 0;
                for( ; !(i >= 0x10); i = i + 1)
                  printf("%.2x", b[(signed long int)(lm_hashesoffset + 4 + i)]);
              }

              MD5_Init(&md5c);
              MD5_Update(&md5c, (const void *)hbootkey, (unsigned long int)0x10);
              MD5_Update(&md5c, (const void *)&rid, (unsigned long int)0x4);
              MD5_Update(&md5c, (const void *)almpassword, (unsigned long int)0xb);
              MD5_Final(md5hash, &md5c);
              RC4_set_key(&rc4k, 0x10, md5hash);
              RC4(&rc4k, (unsigned long int)0x10, &b[(signed long int)(lm_hashesoffset + 4)], obfkey);
              if(!(debug == 0))
              {
                printf("\nobfkey: ");
                i = 0;
                for( ; !(i >= 0x10); i = i + 1)
                  printf("%.2x", (unsigned char)obfkey[(signed long int)i]);
                printf("\n");
              }

              sid_to_key1((unsigned long int)rid, (unsigned char *)deskey1);
              DES_set_key_checked((unsigned char (*)[8l])deskey1, &ks1);
              sid_to_key2((unsigned long int)rid, (unsigned char *)deskey2);
              DES_set_key_unchecked((unsigned char (*)[8l])deskey2, &ks2);
              DES_ecb_encrypt((unsigned char (*)[8l])obfkey, (unsigned char (*)[8l])fb, &ks1, 0);
              DES_ecb_encrypt((unsigned char (*)[8l])(obfkey + (signed long int)8), (unsigned char (*)[8l])&fb[(signed long int)8], &ks2, 0);
              i = 0;
              for( ; !(i >= 0x10); i = i + 1)
              {
                sprintf(buff + (signed long int)buff_len, "%.2x", fb[(signed long int)i]);
                buff_len = buff_len + 2;
              }
            }

            else
            {
              sprintf(buff + (signed long int)buff_len, "aad3b435b51404eeaad3b435b51404ee");
              buff_len = buff_len + 32;
            }
            sprintf(buff + (signed long int)buff_len, ":");
            buff_len = buff_len + 1;
            if(nt_size == 0x14)
            {
              if(!(debug == 0))
              {
                printf("\n");
                i = 0;
                for( ; !(i >= 0x10); i = i + 1)
                  printf("%.2x", b[(signed long int)(nt_hashesoffset + 4 + i)]);
                printf("\n");
              }

              MD5_Init(&md5c);
              MD5_Update(&md5c, (const void *)hbootkey, (unsigned long int)0x10);
              MD5_Update(&md5c, (const void *)&rid, (unsigned long int)0x4);
              MD5_Update(&md5c, (const void *)antpassword, (unsigned long int)0xb);
              MD5_Final(md5hash, &md5c);
              RC4_set_key(&rc4k, 0x10, md5hash);
              RC4(&rc4k, (unsigned long int)0x10, &b[(signed long int)(nt_hashesoffset + 4)], obfkey);
              if(!(lm_size == 0x14))
              {
                sid_to_key1((unsigned long int)rid, (unsigned char *)deskey1);
                DES_set_key((unsigned char (*)[8l])deskey1, &ks1);
                sid_to_key2((unsigned long int)rid, (unsigned char *)deskey2);
                DES_set_key((unsigned char (*)[8l])deskey2, &ks2);
              }

              DES_ecb_encrypt((unsigned char (*)[8l])obfkey, (unsigned char (*)[8l])fb, &ks1, 0);
              DES_ecb_encrypt((unsigned char (*)[8l])(obfkey + (signed long int)8), (unsigned char (*)[8l])&fb[(signed long int)8], &ks2, 0);
              i = 0;
              for( ; !(i >= 0x10); i = i + 1)
              {
                sprintf(buff + (signed long int)buff_len, "%.2x", fb[(signed long int)i]);
                buff_len = buff_len + 2;
              }
            }

            else
            {
              sprintf(buff + (signed long int)buff_len, "31d6cfe0d16ae931b73c59d7e0c089c0");
              buff_len = buff_len + 32;
            }
            sprintf(buff + (signed long int)buff_len, ":::");
            buff_len = buff_len + 3;
            list_add_tail(list, (void *)buff);
            free((void *)username_utf8);
            free((void *)keyname);
          }

        }
        _RegCloseHive(&h);
        free((void *)n);
        free((void *)b);
        return 0;
      }
    }
  }
}

// scheduler_add
// file scheduler.c line 157
void scheduler_add(struct scheduler_t_ *sched, void *task, enum anonymous_8 prty)
{
  union anonymous_7 *mutex = sched->mutex;
  struct list_t_ *queue = sched->queue[(signed long int)prty];
  pthread_mutex_lock(mutex);
  list_add_tail(queue, task);
  sched->ntasks = sched->ntasks + 1;
  if(!((signed int)prty == disk))
    sem_post(sched->sem);

  else
    if(sched->disk == -1)
    {
      if(queue->size == 1)
        sem_post(sched->sem);

    }

  pthread_mutex_unlock(mutex);
}

// scheduler_alloc
// file scheduler.c line 39
struct scheduler_t_ * scheduler_alloc(signed int nthreads)
{
  struct scheduler_t_ *sched;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct scheduler_t_) /*72ul*/ );
  sched = (struct scheduler_t_ *)return_value_malloc_1;
  sched->nthreads = nthreads;
  sched->ntasks = 0;
  sched->pause = 0;
  sched->disk = -1;
  sched->queue[(signed long int)low]=list_alloc();
  sched->queue[(signed long int)disk]=list_alloc();
  sched->queue[(signed long int)high]=list_alloc();
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(union anonymous_4) /*32ul*/ );
  sched->sem = (union anonymous_4 *)return_value_malloc_2;
  signed int return_value_sem_init_3;
  return_value_sem_init_3=sem_init(sched->sem, 0, (unsigned int)0);
  if(!(return_value_sem_init_3 == 0))
  {
    fprintf(stderr, "scheduler_alloc: cannot initialise the semaphore\n");
    exit(1);
  }

  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(union anonymous_7) /*40ul*/ );
  sched->mutex = (union anonymous_7 *)return_value_malloc_4;
  pthread_mutex_init(sched->mutex, ((const union anonymous_9 *)NULL));
  void *return_value_malloc_5;
  return_value_malloc_5=malloc(sizeof(union anonymous_6) /*48ul*/ );
  sched->cond = (union anonymous_6 *)return_value_malloc_5;
  pthread_cond_init(sched->cond, ((const union anonymous_9 *)NULL));
  void *return_value_malloc_6;
  return_value_malloc_6=malloc((unsigned long int)nthreads * sizeof(unsigned long int) /*8ul*/ );
  sched->thread = (unsigned long int *)return_value_malloc_6;
  return sched;
}

// scheduler_continue
// file scheduler.c line 131
void scheduler_continue(struct scheduler_t_ *sched)
{
  union anonymous_7 *mutex = sched->mutex;
  union anonymous_6 *cond = sched->cond;
  pthread_mutex_lock(mutex);
  sched->pause = 0;
  pthread_cond_broadcast(cond);
  pthread_mutex_unlock(mutex);
}

// scheduler_done
// file scheduler.c line 237
signed int scheduler_done(struct scheduler_t_ *sched, signed int id)
{
  signed int ntasks;
  struct list_t_ **queue = sched->queue;
  union anonymous_7 *mutex = sched->mutex;
  pthread_mutex_lock(mutex);
  sched->ntasks = sched->ntasks - 1;
  ntasks = sched->ntasks;
  if(sched->disk == id)
  {
    sched->disk = -1;
    if(queue[1l]->size >= 1)
      sem_post(sched->sem);

  }

  pthread_mutex_unlock(mutex);
  return ntasks;
}

// scheduler_free
// file scheduler.c line 84
void scheduler_free(struct scheduler_t_ *sched)
{
  list_free(sched->queue[(signed long int)disk]);
  list_free(sched->queue[(signed long int)high]);
  list_free(sched->queue[(signed long int)low]);
  sem_destroy(sched->sem);
  pthread_mutex_destroy(sched->mutex);
  pthread_cond_destroy(sched->cond);
  free((void *)sched->sem);
  free((void *)sched->mutex);
  free((void *)sched->cond);
  free((void *)sched->thread);
  free((void *)sched);
}

// scheduler_get
// file scheduler.c line 185
void * scheduler_get(struct scheduler_t_ *sched, signed int id)
{
  void *task = NULL;
  union anonymous_7 *mutex = sched->mutex;
  union anonymous_6 *cond = sched->cond;
  struct list_t_ **queue = sched->queue;
  _Bool tmp_if_expr_1;
  while(task == NULL)
  {
    sem_wait(sched->sem);
    pthread_mutex_lock(mutex);
    if(!(sched->pause == 0))
    {
      message_pause();
      pthread_cond_wait(cond, mutex);
    }

    if(queue[2l]->size >= 1)
      task=list_rem_head(queue[(signed long int)high]);

    else
    {
      if(queue[1l]->size >= 1)
        tmp_if_expr_1 = sched->disk == -1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        sched->disk = id;
        task=list_rem_head(queue[(signed long int)disk]);
      }

      else
        task=list_rem_head(queue[(signed long int)low]);
    }
    pthread_mutex_unlock(mutex);
  }
  return task;
}

// scheduler_pause
// file scheduler.c line 115
void scheduler_pause(struct scheduler_t_ *sched)
{
  union anonymous_7 *mutex = sched->mutex;
  signed int i;
  pthread_mutex_lock(mutex);
  sched->pause = 1;
  pthread_mutex_unlock(mutex);
  i = 0;
  for( ; !(i >= sched->nthreads); i = i + 1)
    sem_post(sched->sem);
}

// scheduler_start
// file scheduler.c line 101
signed int scheduler_start(struct scheduler_t_ *sched, void * (*fun)(void *), void *arg)
{
  signed int i;
  signed int j;
  signed int nthreads = sched->nthreads;
  unsigned long int *thread = sched->thread;
  i = 0;
  signed int return_value_pthread_create_1;
  for( ; !(i >= nthreads); i = i + 1)
  {
    return_value_pthread_create_1=pthread_create(thread + (signed long int)i, ((const union pthread_attr_t *)NULL), fun, arg);
    if(!(return_value_pthread_create_1 == 0))
      break;

  }
  if(!(i >= nthreads))
  {
    j = 0;
    for( ; !(j >= i); j = j + 1)
      pthread_cancel(thread[(signed long int)j]);
  }

  return i;
}

// scheduler_stop
// file scheduler.c line 149
void scheduler_stop(struct scheduler_t_ *sched)
{
  signed int i;
  signed int nthreads = sched->nthreads;
  unsigned long int *thread = sched->thread;
  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
    pthread_cancel(thread[(signed long int)i]);
}

// scheduler_wait
// file scheduler.c line 141
void scheduler_wait(struct scheduler_t_ *sched)
{
  signed int i;
  signed int nthreads = sched->nthreads;
  unsigned long int *thread = sched->thread;
  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
    pthread_join(thread[(signed long int)i], ((void **)NULL));
}

// selectCharacterUTF
// file hashToPwd.c line 205
unsigned int selectCharacterUTF(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned long int patternDescriptor, unsigned long int patternLength, unsigned long int biasedCoin, unsigned long int fairDice, char *result)
{
  unsigned int i = (unsigned int)0;
  unsigned int k = (unsigned int)0;
  char spe[34l] = { ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\', ']', '^', '_', '`', '{', '|', '}', 126, 0 };
  unsigned int markov_length = (unsigned int)0;
  unsigned int markov_level = (unsigned int)0;
  char *pointerAlias = (char *)(void *)0;
  unsigned int *pointerImproba = (unsigned int *)(void *)0;
  unsigned long int space = (unsigned long int)0;
  unsigned int prevChar1 = (unsigned int)0;
  unsigned int prevChar2 = (unsigned int)0;
  unsigned int predicate = (unsigned int)0;
  i = (unsigned int)0;
  for( ; !(i >= 16u); i = i + 1u)
    if(!((1u & (unsigned int)(patternDescriptor >> 4u * i + 2u)) == 0u))
    {
      switch((unsigned int)(patternDescriptor >> (unsigned int)4 * i) & (unsigned int)0x00000003)
      {
        case (unsigned int)0x00:
        {
          markov_length = (unsigned int)(patternLength >> (unsigned int)4 * i) & (unsigned int)0x0000000f;
          markov_level = (((unsigned int)12 - markov_length) - (unsigned int)1) * mis->meanImprobaMark0;
          pointerAlias = mdpw->amdp->amb->bufferRoot + (signed long int)mdpw->amdp->rootValue[(signed long int)markov_length];
          pointerImproba = mis->improbaFirst;
          break;
        }
        case (unsigned int)0x01:
        {
          markov_length = markov_length - 1u;
          pointerAlias = mdpw->amdp->amb->bufferFLine + (signed long int)mdpw->amdp->firstLine[(signed long int)(prevChar1 + markov_length * (unsigned int)26)];
          switch((signed int)mdpw->type)
          {
            case MARK0:
            {
              pointerImproba = mis->improbaMark0;
              goto __CPROVER_DUMP_L7;
            }
            case MARK1:
            {
              pointerImproba = mis->improbaMark1[(signed long int)prevChar1];
              goto __CPROVER_DUMP_L7;
            }
            case MARK2:
              pointerImproba = mis->improbaMark1[(signed long int)prevChar1];
            case NO_MARK:

            default:
            {

            __CPROVER_DUMP_L7:
              ;
              markov_length = (unsigned int)12 - markov_length;
              prevChar2 = prevChar1;
              goto __CPROVER_DUMP_L13;
            }
          }
        }
        case (unsigned int)0x02:
          switch((signed int)mdpw->type)
          {
            case MARK0:
            {
              pointerAlias = mdpw->amdp->amb->bufferMain + (signed long int)mdpw->amdp->buffer[(signed long int)(((markov_length - (unsigned int)2) * mdpw->amdp->bufferWidth + markov_level) - markov_length * mdpw->amdp->minImproba)];
              pointerImproba = mis->improbaMark0;
              goto __CPROVER_DUMP_L12;
            }
            case MARK1:
            {
              pointerAlias = mdpw->amdp->amb->bufferMain + (signed long int)mdpw->amdp->buffer[(signed long int)((((markov_length - (unsigned int)2) * mdpw->amdp->bufferWidth + markov_level) - markov_length * mdpw->amdp->minImproba) * (unsigned int)26 + prevChar1)];
              pointerImproba = mis->improbaMark1[(signed long int)prevChar1];
              goto __CPROVER_DUMP_L12;
            }
            case MARK2:
            {
              pointerAlias = mdpw->amdp->amb->bufferMain + (signed long int)mdpw->amdp->buffer[(signed long int)(((((markov_length - (unsigned int)2) * mdpw->amdp->bufferWidth + markov_level) - markov_length * mdpw->amdp->minImproba) * (unsigned int)26 + prevChar1) * (unsigned int)26 + prevChar2)];
              pointerImproba = mis->improbaMark2[(signed long int)prevChar2][(signed long int)prevChar1];
            }
            case NO_MARK:

            default:
            {

            __CPROVER_DUMP_L12:
              ;
              markov_length = markov_length + 1u;
              prevChar2 = prevChar1;
            }
          }
      }

    __CPROVER_DUMP_L13:
      ;
      space = *((unsigned long int *)pointerAlias);
      predicate = (unsigned int)((space & (unsigned long int)0xffffffff00000000) != (unsigned long int)0);
      prevChar1 = (unsigned int)(fairDice % (unsigned long int)26);
      pointerAlias = pointerAlias + (signed long int)8;
      if(biasedCoin % space >= (unsigned long int)*((unsigned int *)(pointerAlias + (signed long int)(prevChar1 << 2u + predicate))))
      {
        pointerAlias = pointerAlias + (signed long int)(26 << (unsigned int)2 + predicate);
        prevChar1 = (unsigned int)*((unsigned char *)(pointerAlias + (signed long int)prevChar1));
      }

      result[(signed long int)k] = (char)(((unsigned int)97 - (unsigned int)32 * ((unsigned int)(patternDescriptor >> (unsigned int)3 + (unsigned int)4 * i) & (unsigned int)0x00000001)) + prevChar1);
      markov_level = markov_level + pointerImproba[(signed long int)prevChar1];
      fairDice = fairDice / (unsigned long int)26;
      k = k + (unsigned int)2;
    }

    else
      switch((unsigned int)(patternDescriptor >> (unsigned int)4 * i) & (unsigned int)0x00000003)
      {
        case (unsigned int)0x00:
        {
          result[(signed long int)k] = (char)0;
          break;
        }
        case (unsigned int)0x01:
        {
          result[(signed long int)k] = spe[(signed long int)(biasedCoin % (unsigned long int)33)];
          biasedCoin = biasedCoin / (unsigned long int)33;
          k = k + (unsigned int)2;
          break;
        }
        case (unsigned int)0x02:
        {
          result[(signed long int)k] = (char)((unsigned long int)48 + biasedCoin % (unsigned long int)10);
          biasedCoin = biasedCoin / (unsigned long int)10;
          k = k + (unsigned int)2;
          break;
        }
        case (unsigned int)0x03:
        {
          result[(signed long int)k] = (char)((unsigned long int)((unsigned int)97 - (unsigned int)32 * ((unsigned int)(patternDescriptor >> (unsigned int)3 + (unsigned int)4 * i) & (unsigned int)0x00000001)) + biasedCoin % (unsigned long int)26);
          biasedCoin = biasedCoin / (unsigned long int)26;
          k = k + (unsigned int)2;
        }
      }
  return k;
}

// selectCharacterUTFFirstRound
// file hashToPwd.c line 64
unsigned int selectCharacterUTFFirstRound(struct markovDynProgWrapper *mdpw, struct markovImprobaStruct *mis, unsigned long int patternDescriptor, unsigned long int patternLength, unsigned long int subIndex, char *result)
{
  unsigned int i = (unsigned int)0;
  unsigned int j = (unsigned int)0;
  unsigned int k = (unsigned int)0;
  char spe[34l] = { ' ', '!', '"', '#', '_', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\', ']', '^', '_', '`', '{', '|', '}', 126, 0 };
  unsigned int prevChar1 = (unsigned int)0;
  unsigned int prevChar2 = (unsigned int)0;
  unsigned int markov_length = (unsigned int)0;
  unsigned int markov_level = (unsigned int)0;
  unsigned int *pointerImproba = (unsigned int *)(void *)0;
  unsigned long int markovIndex = (unsigned long int)0;
  unsigned long int sum = (unsigned long int)0;
  unsigned long int size = (unsigned long int)0;
  i = (unsigned int)0;
  for( ; !(i >= 16u); i = i + 1u)
    if(!((1u & (unsigned int)(patternDescriptor >> 4u * i + 2u)) == 0u))
    {
      switch((unsigned int)(patternDescriptor >> (unsigned int)4 * i) & (unsigned int)0x00000003)
      {
        case (unsigned int)0x00:
        {
          markov_length = ((unsigned int)(patternLength >> (unsigned int)4 * i) & (unsigned int)0x0000000f) + (unsigned int)1;
          markov_level = ((unsigned int)12 - markov_length) * mis->meanImprobaMark0;
          switch((signed int)mdpw->type)
          {
            case MARK0:
            {
              markovIndex = subIndex % mdpw->m0dp->rootValue[(signed long int)(markov_length - (unsigned int)1)];
              subIndex = subIndex / mdpw->m0dp->rootValue[(signed long int)(markov_length - (unsigned int)1)];
              goto __CPROVER_DUMP_L6;
            }
            case MARK1:
            {
              markovIndex = subIndex % mdpw->m1dp->rootValue[(signed long int)(markov_length - (unsigned int)1)];
              subIndex = subIndex / mdpw->m1dp->rootValue[(signed long int)(markov_length - (unsigned int)1)];
              goto __CPROVER_DUMP_L6;
            }
            case MARK2:
            {
              markovIndex = subIndex % mdpw->m2dp->rootValue[(signed long int)(markov_length - (unsigned int)1)];
              subIndex = subIndex / mdpw->m2dp->rootValue[(signed long int)(markov_length - (unsigned int)1)];
            }
            case NO_MARK:

            default:
            {

            __CPROVER_DUMP_L6:
              ;
              pointerImproba = mis->improbaFirst;
              goto __CPROVER_DUMP_L17;
            }
          }
        }
        case (unsigned int)0x01:
          switch((signed int)mdpw->type)
          {
            case MARK0:
            {
              pointerImproba = mis->improbaMark0;
              goto __CPROVER_DUMP_L11;
            }
            case MARK1:
            {
              pointerImproba = mis->improbaMark1[(signed long int)prevChar1];
              goto __CPROVER_DUMP_L11;
            }
            case MARK2:
              pointerImproba = mis->improbaMark1[(signed long int)prevChar1];
            case NO_MARK:

            default:
            {

            __CPROVER_DUMP_L11:
              ;
              markov_length = ((unsigned int)12 - markov_length) + (unsigned int)2;
              prevChar2 = prevChar1;
              goto __CPROVER_DUMP_L17;
            }
          }
        case (unsigned int)0x02:
          switch((signed int)mdpw->type)
          {
            case MARK0:
            {
              pointerImproba = mis->improbaMark0;
              goto __CPROVER_DUMP_L16;
            }
            case MARK1:
            {
              pointerImproba = mis->improbaMark1[(signed long int)prevChar1];
              goto __CPROVER_DUMP_L16;
            }
            case MARK2:
              pointerImproba = mis->improbaMark2[(signed long int)prevChar2][(signed long int)prevChar1];
            case NO_MARK:

            default:
            {

            __CPROVER_DUMP_L16:
              ;
              markov_length = markov_length + 1u;
              prevChar2 = prevChar1;
            }
          }
      }

    __CPROVER_DUMP_L17:
      ;
      sum = (unsigned long int)0;
      j = (unsigned int)0;
      while(markovIndex >= sum)
      {
        switch((unsigned int)(patternDescriptor >> (unsigned int)4 * i) & (unsigned int)0x00000003)
        {
          case (unsigned int)0x00:
            switch((signed int)mdpw->type)
            {
              case MARK0:
              {
                size=getMarkov0DynProgFirstLine(mdpw->m0dp, mis, j, markov_length);
                goto __CPROVER_DUMP_L23;
              }
              case MARK1:
              {
                size=getMarkov1DynProgFirstLine(mdpw->m1dp, mis, j, markov_length);
                goto __CPROVER_DUMP_L23;
              }
              case MARK2:
                size=getMarkov2DynProgFirstLine(mdpw->m2dp, mis, j, markov_length);
              case NO_MARK:

              default:
              {

              __CPROVER_DUMP_L23:
                ;
                goto __CPROVER_DUMP_L33;
              }
            }
          case (unsigned int)0x01:
            switch((signed int)mdpw->type)
            {
              case MARK0:
              {
                size=getMarkov0DynProgSpace(mdpw->m0dp, mis, markov_length, markov_level + pointerImproba[(signed long int)j]);
                goto __CPROVER_DUMP_L28;
              }
              case MARK1:
              {
                size=getMarkov1DynProgSpace(mdpw->m1dp, mis, markov_length, markov_level + pointerImproba[(signed long int)j], j);
                goto __CPROVER_DUMP_L28;
              }
              case MARK2:
                size=getMarkov2DynProgSpace(mdpw->m2dp, mis, markov_length, markov_level + pointerImproba[(signed long int)j], j, prevChar1);
              case NO_MARK:

              default:
              {

              __CPROVER_DUMP_L28:
                ;
                goto __CPROVER_DUMP_L33;
              }
            }
          case (unsigned int)0x02:
            switch((signed int)mdpw->type)
            {
              case MARK0:
              {
                size=getMarkov0DynProgSpace(mdpw->m0dp, mis, markov_length, markov_level + pointerImproba[(signed long int)j]);
                break;
              }
              case MARK1:
              {
                size=getMarkov1DynProgSpace(mdpw->m1dp, mis, markov_length, markov_level + pointerImproba[(signed long int)j], j);
                break;
              }
              case MARK2:
                size=getMarkov2DynProgSpace(mdpw->m2dp, mis, markov_length, markov_level + pointerImproba[(signed long int)j], j, prevChar1);
              case NO_MARK:

              default:
                ;
            }
        }

      __CPROVER_DUMP_L33:
        ;
        if(!(markovIndex >= size + sum))
        {
          markovIndex = markovIndex - sum;
          sum = sum + size;
          prevChar1 = j;
        }

        else
        {
          sum = sum + size;
          j = j + 1u;
        }
      }
      result[(signed long int)k] = (char)(((unsigned int)97 - (unsigned int)32 * ((unsigned int)(patternDescriptor >> (unsigned int)3 + (unsigned int)4 * i) & (unsigned int)0x00000001)) + prevChar1);
      markov_level = markov_level + pointerImproba[(signed long int)prevChar1];
      k = k + (unsigned int)2;
    }

    else
      switch((unsigned int)(patternDescriptor >> (unsigned int)4 * i) & (unsigned int)0x00000003)
      {
        case (unsigned int)0x00:
        {
          result[(signed long int)k] = (char)0;
          break;
        }
        case (unsigned int)0x01:
        {
          result[(signed long int)k] = spe[(signed long int)(subIndex % (unsigned long int)33)];
          subIndex = subIndex / (unsigned long int)33;
          k = k + (unsigned int)2;
          break;
        }
        case (unsigned int)0x02:
        {
          result[(signed long int)k] = (char)((unsigned long int)48 + subIndex % (unsigned long int)10);
          subIndex = subIndex / (unsigned long int)10;
          k = k + (unsigned int)2;
          break;
        }
        case (unsigned int)0x03:
        {
          result[(signed long int)k] = (char)((unsigned long int)((unsigned int)97 - (unsigned int)32 * ((unsigned int)(patternDescriptor >> (unsigned int)3 + (unsigned int)4 * i) & (unsigned int)0x00000001)) + subIndex % (unsigned long int)26);
          subIndex = subIndex / (unsigned long int)26;
          k = k + (unsigned int)2;
        }
      }
  return k;
}

// selectPatternAlias
// file aliasPattern.c line 114
unsigned int selectPatternAlias(struct lookUpTable *lut, unsigned long int biasedCoin, unsigned short int fairDice_)
{
  unsigned int fairDice = (unsigned int)((unsigned int)fairDice_ % lut->length);
  if(biasedCoin >= lut->proba[(signed long int)fairDice])
    return lut->alias[(signed long int)fairDice];

  else
    return fairDice;
}

// sid_to_key1
// file samdump2.c line 82
void sid_to_key1(unsigned long int sid, unsigned char *deskey)
{
  unsigned char s[7l];
  s[(signed long int)0] = (unsigned char)(sid & (unsigned long int)0xFF);
  s[(signed long int)1] = (unsigned char)(sid >> 8 & (unsigned long int)0xFF);
  s[(signed long int)2] = (unsigned char)(sid >> 16 & (unsigned long int)0xFF);
  s[(signed long int)3] = (unsigned char)(sid >> 24 & (unsigned long int)0xFF);
  s[(signed long int)4] = s[(signed long int)0];
  s[(signed long int)5] = s[(signed long int)1];
  s[(signed long int)6] = s[(signed long int)2];
  str_to_key(s, deskey);
}

// sid_to_key2
// file samdump2.c line 101
void sid_to_key2(unsigned long int sid, unsigned char *deskey)
{
  unsigned char s[7l];
  s[(signed long int)0] = (unsigned char)(sid >> 24 & (unsigned long int)0xFF);
  s[(signed long int)1] = (unsigned char)(sid & (unsigned long int)0xFF);
  s[(signed long int)2] = (unsigned char)(sid >> 8 & (unsigned long int)0xFF);
  s[(signed long int)3] = (unsigned char)(sid >> 16 & (unsigned long int)0xFF);
  s[(signed long int)4] = s[(signed long int)0];
  s[(signed long int)5] = s[(signed long int)1];
  s[(signed long int)6] = s[(signed long int)2];
  str_to_key(s, deskey);
}

// start_element
// file ioPattern.c line 57
void start_element(void *data, const char *element, const char **attribute)
{
  struct xmlDataWrapper *wrapper = (struct xmlDataWrapper *)data;
  unsigned int i;
  signed int tmp_statement_expression_6;
  unsigned long int start_element__1__1____s1_len;
  unsigned long int start_element__1__1____s2_len;
  signed int return_value___builtin_strcmp_7;
  return_value___builtin_strcmp_7=__builtin_strcmp(element, "patternArray");
  tmp_statement_expression_6 = return_value___builtin_strcmp_7;
  if(tmp_statement_expression_6 == 0)
  {
    signed int return_value_atoi_1;
    return_value_atoi_1=atoi_link4(attribute[(signed long int)1]);
    wrapper->array->size = (unsigned int)return_value_atoi_1;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)wrapper->array->size);
    wrapper->array->sizeArray = (unsigned long int *)return_value_malloc_2;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)wrapper->array->size);
    wrapper->array->patternDescriptor = (unsigned long int *)return_value_malloc_3;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)wrapper->array->size);
    wrapper->array->patternLength = (unsigned long int *)return_value_malloc_4;
    void *return_value_malloc_5;
    return_value_malloc_5=malloc(sizeof(struct lookUpTable) /*24ul*/ );
    wrapper->array->lut = (struct lookUpTable *)return_value_malloc_5;
    memset((void *)wrapper->array->patternDescriptor, 0, (unsigned long int)wrapper->array->size * sizeof(unsigned long int) /*8ul*/ );
    memset((void *)wrapper->array->patternLength, 0, (unsigned long int)wrapper->array->size * sizeof(unsigned long int) /*8ul*/ );
    wrapper->currentPattern = (unsigned int)0;
    goto __CPROVER_DUMP_L34;
  }

  signed int tmp_statement_expression_8;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp_9;
  return_value___builtin_strcmp_9=__builtin_strcmp(element, "pattern");
  tmp_statement_expression_8 = return_value___builtin_strcmp_9;
  signed int tmp_statement_expression_24;
  signed int return_value_atoi_10;
  signed int return_value_atoi_11;
  signed int return_value_atoi_12;
  signed int return_value_atoi_13;
  signed int return_value_atoi_14;
  signed int return_value_atoi_15;
  signed int return_value_atoi_16;
  signed int return_value_atoi_17;
  signed int return_value_atoi_18;
  signed int return_value_atoi_19;
  signed int return_value_atoi_20;
  signed int return_value_atoi_21;
  signed int return_value_atoi_22;
  signed int return_value_atoi_23;
  if(tmp_statement_expression_8 == 0)
  {
    wrapper->array->sizeArray[(signed long int)wrapper->currentPattern]=strtoull(attribute[(signed long int)1], (char ** restrict )(void *)0, 16);
    wrapper->currentCharType = (unsigned int)0;
  }

  else
  {
    unsigned long int start_element__1__5____s1_len;
    unsigned long int start_element__1__5____s2_len;
    signed int return_value___builtin_strcmp_25;
    return_value___builtin_strcmp_25=__builtin_strcmp(element, "element");
    tmp_statement_expression_24 = return_value___builtin_strcmp_25;
    if(tmp_statement_expression_24 == 0)
      switch((signed int)attribute[(signed long int)3][(signed long int)0])
      {
        case 85:
        {
          switch((signed int)attribute[(signed long int)3][(signed long int)1])
          {
            case 78:
            {
              i = (unsigned int)0;
              do
              {
                return_value_atoi_10=atoi_link4(attribute[(signed long int)1]);
                if(i >= (unsigned int)return_value_atoi_10)
                  break;

                wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x0B << (unsigned int)4 * (wrapper->currentCharType + i);
                i = i + 1u;
              }
              while((_Bool)1);
              return_value_atoi_11=atoi_link4(attribute[(signed long int)1]);
              wrapper->currentCharType = wrapper->currentCharType + (unsigned int)return_value_atoi_11;
              break;
            }
            case 49:
            {
              wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x0C << (unsigned int)4 * wrapper->currentCharType;
              return_value_atoi_12=atoi_link4(attribute[(signed long int)1]);
              wrapper->array->patternLength[(signed long int)wrapper->currentPattern] = wrapper->array->patternLength[(signed long int)wrapper->currentPattern] | (unsigned long int)(return_value_atoi_12 - 1 & 0x0000000f) << (unsigned int)4 * wrapper->currentCharType;
              wrapper->currentCharType = wrapper->currentCharType + 1u;
              break;
            }
            case 50:
            {
              wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x0D << (unsigned int)4 * wrapper->currentCharType;
              wrapper->currentCharType = wrapper->currentCharType + 1u;
              break;
            }
            case 77:
            {
              i = (unsigned int)0;
              do
              {
                return_value_atoi_13=atoi_link4(attribute[(signed long int)1]);
                if(i >= (unsigned int)return_value_atoi_13)
                  break;

                wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x0E << (unsigned int)4 * (wrapper->currentCharType + i);
                i = i + 1u;
              }
              while((_Bool)1);
              return_value_atoi_14=atoi_link4(attribute[(signed long int)1]);
              wrapper->currentCharType = wrapper->currentCharType + (unsigned int)return_value_atoi_14;
              break;
            }
            default:
              printf("Error while parsing XML file: unknown symbol\n");
          }
          break;
        }
        case 76:
        {
          switch((signed int)attribute[(signed long int)3][(signed long int)1])
          {
            case 78:
            {
              i = (unsigned int)0;
              do
              {
                return_value_atoi_15=atoi_link4(attribute[(signed long int)1]);
                if(i >= (unsigned int)return_value_atoi_15)
                  break;

                wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x03 << (unsigned int)4 * (wrapper->currentCharType + i);
                i = i + 1u;
              }
              while((_Bool)1);
              return_value_atoi_16=atoi_link4(attribute[(signed long int)1]);
              wrapper->currentCharType = wrapper->currentCharType + (unsigned int)return_value_atoi_16;
              break;
            }
            case 49:
            {
              wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x04 << (unsigned int)4 * wrapper->currentCharType;
              return_value_atoi_17=atoi_link4(attribute[(signed long int)1]);
              wrapper->array->patternLength[(signed long int)wrapper->currentPattern] = wrapper->array->patternLength[(signed long int)wrapper->currentPattern] | (unsigned long int)(return_value_atoi_17 - 1 & 0x0000000f) << (unsigned int)4 * wrapper->currentCharType;
              wrapper->currentCharType = wrapper->currentCharType + 1u;
              break;
            }
            case 50:
            {
              wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x05 << (unsigned int)4 * wrapper->currentCharType;
              wrapper->currentCharType = wrapper->currentCharType + 1u;
              break;
            }
            case 77:
            {
              i = (unsigned int)0;
              do
              {
                return_value_atoi_18=atoi_link4(attribute[(signed long int)1]);
                if(i >= (unsigned int)return_value_atoi_18)
                  break;

                wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x06 << (unsigned int)4 * (wrapper->currentCharType + i);
                i = i + 1u;
              }
              while((_Bool)1);
              return_value_atoi_19=atoi_link4(attribute[(signed long int)1]);
              wrapper->currentCharType = wrapper->currentCharType + (unsigned int)return_value_atoi_19;
              break;
            }
            default:
              printf("Error while parsing XML file: unknown symbol\n");
          }
          break;
        }
        case 78:
        {
          i = (unsigned int)0;
          do
          {
            return_value_atoi_20=atoi_link4(attribute[(signed long int)1]);
            if(i >= (unsigned int)return_value_atoi_20)
              break;

            wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x02 << (unsigned int)4 * (wrapper->currentCharType + i);
            i = i + 1u;
          }
          while((_Bool)1);
          return_value_atoi_21=atoi_link4(attribute[(signed long int)1]);
          wrapper->currentCharType = wrapper->currentCharType + (unsigned int)return_value_atoi_21;
          break;
        }
        case 83:
        {
          i = (unsigned int)0;
          do
          {
            return_value_atoi_22=atoi_link4(attribute[(signed long int)1]);
            if(i >= (unsigned int)return_value_atoi_22)
              break;

            wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] = wrapper->array->patternDescriptor[(signed long int)wrapper->currentPattern] | (unsigned long int)0x01 << (unsigned int)4 * (wrapper->currentCharType + i);
            i = i + 1u;
          }
          while((_Bool)1);
          return_value_atoi_23=atoi_link4(attribute[(signed long int)1]);
          wrapper->currentCharType = wrapper->currentCharType + (unsigned int)return_value_atoi_23;
          break;
        }
        default:
          printf("Error while parsing XML file: unknown symbol\n");
      }

  }

__CPROVER_DUMP_L34:
  ;
}

// str_to_key
// file samdump2.c line 59
void str_to_key(unsigned char *str, unsigned char *key)
{
  signed int i;
  key[(signed long int)0] = (unsigned char)((signed int)str[(signed long int)0] >> 1);
  key[(signed long int)1] = (unsigned char)(((signed int)str[(signed long int)0] & 0x01) << 6 | (signed int)str[(signed long int)1] >> 2);
  key[(signed long int)2] = (unsigned char)(((signed int)str[(signed long int)1] & 0x03) << 5 | (signed int)str[(signed long int)2] >> 3);
  key[(signed long int)3] = (unsigned char)(((signed int)str[(signed long int)2] & 0x07) << 4 | (signed int)str[(signed long int)3] >> 4);
  key[(signed long int)4] = (unsigned char)(((signed int)str[(signed long int)3] & 0x0F) << 3 | (signed int)str[(signed long int)4] >> 5);
  key[(signed long int)5] = (unsigned char)(((signed int)str[(signed long int)4] & 0x1F) << 2 | (signed int)str[(signed long int)5] >> 6);
  key[(signed long int)6] = (unsigned char)(((signed int)str[(signed long int)5] & 0x3F) << 1 | (signed int)str[(signed long int)6] >> 7);
  key[(signed long int)7] = (unsigned char)((signed int)str[(signed long int)6] & 0x7F);
  i = 0;
  for( ; !(i >= 8); i = i + 1)
    key[(signed long int)i] = (unsigned char)((signed int)key[(signed long int)i] << 1);
  DES_set_odd_parity((unsigned char (*)[8l])key);
}

// table_alloc
// file table.c line 46
struct table_t_ * table_alloc(unsigned int code, char *path, signed int idx)
{
  struct table_t_ *tbl;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct table_t_) /*224ul*/ );
  tbl = (struct table_t_ *)return_value_malloc_1;
  tbl->kind=table_kind(code);
  tbl->code = code;
  char *return_value___strdup_2;
  return_value___strdup_2=__strdup(path);
  tbl->path = return_value___strdup_2;
  const char *return_value_table_string_3;
  return_value_table_string_3=table_string(tbl->kind);
  char *return_value___strdup_4;
  return_value___strdup_4=__strdup(return_value_table_string_3);
  tbl->name = return_value___strdup_4;
  tbl->id = 0;
  tbl->idx = idx;
  tbl->cmin = 0;
  tbl->cmax = 0;
  tbl->ncols = 0;
  tbl->offset = 0;
  tbl->enabled = 0;
  tbl->active = 0;
  tbl->idxfile = ((struct _IO_FILE *)NULL);
  tbl->endfile = ((struct _IO_FILE *)NULL);
  tbl->srtfile = ((struct _IO_FILE *)NULL);
  tbl->shared_init = (unsigned char)0;
  tbl->inisize = (unsigned long int)0;
  tbl->idxsize = (unsigned long int)0;
  tbl->endsize = (unsigned long int)0;
  tbl->srtsize = (unsigned long int)0;
  tbl->sizes = (const unsigned long int *)(void *)0;
  tbl->param = (void *)0;
  tbl->idxmem = ((char *)NULL);
  tbl->endmem = ((char *)NULL);
  tbl->srtmem = ((char *)NULL);
  tbl->init = (void * (*)(void *))(void *)0;
  tbl->cleanup = (void (*)(void *))(void *)0;
  tbl->find = (void (*)(void *, void *, void *))(void *)0;
  tbl->lookup_idx = (signed int (*)(void *, void *, void *))(void *)0;
  tbl->lookup_end = (signed int (*)(void *, void *, void *))(void *)0;
  tbl->lookup_srt = (signed int (*)(void *, void *, void *))(void *)0;
  tbl->check = (signed int (*)(void *, void *, void *))(void *)0;
  tbl->isvalid = (signed int (*)(void *, void *))(void *)0;
  return tbl;
}

// table_free
// file table.c line 95
void table_free(struct table_t_ *tbl)
{
  if(!(tbl->path == ((char *)NULL)))
    free((void *)tbl->path);

  if(!(tbl->name == ((char *)NULL)))
    free((void *)tbl->name);

  if(!(tbl->srtfile == ((struct _IO_FILE *)NULL)))
    fclose(tbl->srtfile);

  if(!(tbl->idxfile == ((struct _IO_FILE *)NULL)))
    fclose(tbl->idxfile);

  if(!(tbl->endfile == ((struct _IO_FILE *)NULL)))
    fclose(tbl->endfile);

  if(!(tbl->srtmem == ((char *)NULL)))
    munmap((void *)tbl->srtmem, tbl->srtsize);

  if(!(tbl->idxmem == ((char *)NULL)))
    munmap((void *)tbl->idxmem, tbl->idxsize);

  if(!(tbl->endmem == ((char *)NULL)))
    munmap((void *)tbl->endmem, tbl->endsize);

  free((void *)tbl);
}

// table_kind
// file table.c line 460
enum anonymous_2 table_kind(unsigned int code)
{
  switch(code)
  {
    case (unsigned int)0x3cc21790:
      return (enum anonymous_2)lmalphanum10k;
    case (unsigned int)0x0fa2031c:
      return (enum anonymous_2)lmalphanum5k;
    case (unsigned int)0x0e3402df:
      return (enum anonymous_2)lmextended;
    case (unsigned int)0x103e02a6:
      return (enum anonymous_2)lmgermanv1;
    case (unsigned int)0x10cb073e:
      return (enum anonymous_2)lmgermanv2;
    case 0xc7ed7df5:
      return (enum anonymous_2)ntextended;
    case (unsigned int)0x16501507:
      return (enum anonymous_2)ntdict;
    case (unsigned int)0x2ee9fa88:
      return (enum anonymous_2)ntnine;
    case (unsigned int)0x1990057f:
      return (enum anonymous_2)nteight;
    case 0xdf28cff0:
      return (enum anonymous_2)ntnum;
    case 0x9542377a:
      return (enum anonymous_2)ntseven;
    case (unsigned int)0x05080366:
      return (enum anonymous_2)lmflash;
    case (unsigned int)0x229e1899:
      return (enum anonymous_2)nteightxl;
    case 0x82506b6e:
      return (enum anonymous_2)ntspecialxl;
    case 0xbb00950e:
      return (enum anonymous_2)ntprobafree;
    case (unsigned int)0x47000fdf:
      return (enum anonymous_2)ntproba10g;
    case (unsigned int)0x2c002335:
      return (enum anonymous_2)ntproba60g;
    default:
      return (enum anonymous_2)unknown;
  }
}

// table_load
// file table.c line 116
signed int table_load(struct table_t_ *tbl)
{
  char fname[512l];
  char *path = tbl->path;
  signed int idx = tbl->idx;
  snprintf(fname, sizeof(char [512l]) /*512ul*/ , "%s/table%d.start", path, idx);
  tbl->srtfile=fopen(fname, "rb");
  if(tbl->srtfile == ((struct _IO_FILE *)NULL))
    return 0;

  else
  {
    snprintf(fname, sizeof(char [512l]) /*512ul*/ , "%s/table%d.index", path, idx);
    tbl->idxfile=fopen(fname, "rb");
    if(tbl->idxfile == ((struct _IO_FILE *)NULL))
      return 0;

    else
    {
      snprintf(fname, sizeof(char [512l]) /*512ul*/ , "%s/table%d.bin", path, idx);
      tbl->endfile=fopen(fname, "rb");
      if(tbl->endfile == ((struct _IO_FILE *)NULL))
        return 0;

      else
      {
        table_set_size(tbl);
        return 1;
      }
    }
  }
}

// table_mmap
// file table.c line 171
char * table_mmap(struct table_t_ *tbl, enum anonymous_10 preload)
{
  struct _IO_FILE *file = (struct _IO_FILE *)(void *)0;
  unsigned long int size = (unsigned long int)0;
  switch((signed int)preload)
  {
    case preload_idx:
    {
      file = tbl->idxfile;
      size = tbl->idxsize;
      break;
    }
    case preload_end:
    {
      file = tbl->endfile;
      size = tbl->endsize;
      break;
    }
    case preload_srt:
    {
      file = tbl->srtfile;
      size = tbl->srtsize;
    }
  }
  char *mem = (char *)(void *)0;
  signed int prot = 0x1 | 0x2;
  signed int flags = 0x02 | 0x20;
  void *return_value_mmap_1;
  return_value_mmap_1=mmap(NULL, size, prot, flags, -1, (signed long int)0);
  mem = (char *)return_value_mmap_1;
  if(mem == (char *)-1)
  {
    fprintf(stderr, "Problem while mapping memory for table %s,%d (preload=%d).\n", tbl->name, tbl->idx, preload);
    return ((char *)NULL);
  }

  else
  {
    rewind(file);
    unsigned long int return_value_fread_2;
    return_value_fread_2=fread((void *)mem, (unsigned long int)1, size, file);
    if(!(return_value_fread_2 == size))
    {
      fprintf(stderr, "Problem while preloading table %s,%d (preload=%d).\n", tbl->name, tbl->idx, preload);
      perror(((const char *)NULL));
      munmap((void *)mem, size);
      return ((char *)NULL);
    }

    else
      return mem;
  }
}

// table_open
// file table.h line 140
signed int table_open(struct list_t_ *tables, const char *dir, const char *tblstr)
{
  char name[512l];
  char path[512l];
  char *args;
  __builtin_strncpy(name, tblstr, sizeof(char [512l]) /*512ul*/ );
  char *return_value___builtin_strchr_1;
  return_value___builtin_strchr_1=__builtin_strchr(name, 44);
  args = return_value___builtin_strchr_1;
  if(!(args == ((char *)NULL)))
  {
    args[(signed long int)0] = (char)0;
    args = args + 1l;
  }

  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(dir);
  if(return_value_strlen_2 >= 1ul)
    snprintf(path, sizeof(char [512l]) /*512ul*/ , "%s/%s", dir, (const void *)name);

  else
    snprintf(path, sizeof(char [512l]) /*512ul*/ , "%s", (const void *)name);
  char buff[512l];
  struct _IO_FILE *file;
  snprintf(buff, sizeof(char [512l]) /*512ul*/ , "%s/table0.bin", (const void *)path);
  file=fopen(buff, "rb");
  char *tmp_statement_expression_5;
  signed int tmp_statement_expression_7;
  _Bool tmp_if_expr_9;
  if(file == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    unsigned int code;
    fread((void *)&code, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, file);
    code = code;
    fclose(file);
    signed int ntables = 0;
    signed int i = 0;
    do
    {
      struct table_t_ *tbl;
      tbl=table_alloc(code, path, i);
      signed int return_value_table_load_3;
      return_value_table_load_3=table_load(tbl);
      if(!(return_value_table_load_3 == 0))
      {
        list_add_tail(tables, (void *)tbl);
        ntables = ntables + 1;
      }

      else
        break;
      i = i + 1;
    }
    while((_Bool)1);
    struct list_nd_t_ *nd = ((struct list_nd_t_ *)NULL);
    signed int nenabled = 0;
    if(args == ((char *)NULL))
    {
      i = 0;
      nd = tables->tail;
      for( ; !(i >= ntables); nd = nd->prev)
      {
        struct table_t_ *table_open__1__3__1__tbl = (struct table_t_ *)nd->data;
        table_open__1__3__1__tbl->enabled = 1;
        nenabled = nenabled + 1;
        i = i + 1;
      }
    }

    else
      if(!((signed int)*args == 45))
      {
        struct table_t_ **ptr;
        void *return_value_calloc_4;
        return_value_calloc_4=calloc((unsigned long int)ntables, sizeof(struct table_t_ *) /*8ul*/ );
        ptr = (struct table_t_ **)return_value_calloc_4;
        char *p;
        i = 0;
        nd = tables->tail;
        for( ; !(i >= ntables); nd = nd->prev)
        {
          struct table_t_ *table_open__1__4__1__1__tbl = (struct table_t_ *)nd->data;
          ptr[(signed long int)table_open__1__4__1__1__tbl->idx] = table_open__1__4__1__1__tbl;
          i = i + 1;
        }
        do
        {
          char __r0;
          char __r1;
          char __r2;
          char *return_value___strsep_g_6;
          return_value___strsep_g_6=__strsep_g(&args, ",");
          tmp_statement_expression_5 = return_value___strsep_g_6;
          p = tmp_statement_expression_5;
          if(p == ((char *)NULL))
            break;

          unsigned long int __s1_len;
          unsigned long int __s2_len;
          signed int return_value___builtin_strcmp_8;
          return_value___builtin_strcmp_8=__builtin_strcmp(p, "");
          tmp_statement_expression_7 = return_value___builtin_strcmp_8;
          if(tmp_statement_expression_7 == 0)
            break;

          signed int idx;
          idx=atoi_link1(p);
          if(idx >= 0 && !(idx >= ntables))
            tmp_if_expr_9 = ptr[(signed long int)idx] != ((struct table_t_ *)NULL) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_9 = (_Bool)0;
          if(tmp_if_expr_9)
          {
            ptr[(signed long int)idx]->enabled = 1;
            nenabled = nenabled + 1;
          }

          else
            return -(idx + 2);
        }
        while((_Bool)1);
        free((void *)ptr);
      }

    return nenabled;
  }
}

// table_preload
// file table.c line 243
unsigned long int table_preload(struct table_t_ *tbl, enum anonymous_10 preload)
{
  unsigned long int size = (unsigned long int)0;
  struct table_t_ *tmp_if_expr_1;
  void *return_value;
  unsigned long int tmp_if_expr_2;
  if(!((preload_init & (signed int)preload) == 0))
  {
    if(tbl->param == NULL)
    {
      if(!(tbl->init == ((void * (*)(void *))NULL)))
      {
        return_value=tbl->init((void *)tbl);
        tmp_if_expr_1 = (struct table_t_ *)return_value;
      }

      else
        tmp_if_expr_1 = tbl;
      tbl->param = (void *)tmp_if_expr_1;
      if(!((preload_init & (signed int)preload) == 0))
        tmp_if_expr_2 = tbl->inisize;

      else
        tmp_if_expr_2 = (unsigned long int)0;
      size = size + tmp_if_expr_2;
    }

  }

  if(!((preload_idx & (signed int)preload) == 0))
  {
    if(tbl->idxmem == ((char *)NULL))
    {
      tbl->idxmem=table_mmap(tbl, (enum anonymous_10)preload_idx);
      size = size + tbl->idxsize;
    }

  }

  if(!((preload_end & (signed int)preload) == 0))
  {
    if(tbl->endmem == ((char *)NULL))
    {
      tbl->endmem=table_mmap(tbl, (enum anonymous_10)preload_end);
      size = size + tbl->endsize;
    }

  }

  if(!((preload_srt & (signed int)preload) == 0))
  {
    if(tbl->srtmem == ((char *)NULL))
    {
      tbl->srtmem=table_mmap(tbl, (enum anonymous_10)preload_srt);
      size = size + tbl->srtsize;
    }

  }

  return size;
}

// table_preload_size
// file table.c line 334
unsigned long int table_preload_size(struct table_t_ *tbl, enum anonymous_10 preload)
{
  unsigned long int size = (unsigned long int)0;
  if(!((preload_init & (signed int)preload) == 0))
    size = size + tbl->inisize;

  if(!((preload_idx & (signed int)preload) == 0))
    size = size + tbl->idxsize;

  if(!((preload_end & (signed int)preload) == 0))
    size = size + tbl->endsize;

  if(!((preload_srt & (signed int)preload) == 0))
    size = size + tbl->srtsize;

  return size;
}

// table_preload_state
// file table.c line 449
enum anonymous_10 table_preload_state(struct table_t_ *tbl)
{
  enum anonymous_10 state = (enum anonymous_10)preload_none;
  if(!(tbl->param == NULL))
    state = state + (enum anonymous_10)preload_init;

  if(!(tbl->idxmem == ((char *)NULL)))
    state = state + (enum anonymous_10)preload_idx;

  if(!(tbl->endmem == ((char *)NULL)))
    state = state + (enum anonymous_10)preload_end;

  if(!(tbl->srtmem == ((char *)NULL)))
    state = state + (enum anonymous_10)preload_srt;

  return state;
}

// table_set_size
// file table.c line 139
void table_set_size(struct table_t_ *tbl)
{
  signed int fd;
  struct stat buf;
  fd=fileno(tbl->srtfile);
  fstat(fd, &buf);
  tbl->srtsize = (unsigned long int)buf.st_size;
  fd=fileno(tbl->idxfile);
  fstat(fd, &buf);
  tbl->idxsize = (unsigned long int)buf.st_size;
  fd=fileno(tbl->endfile);
  fstat(fd, &buf);
  tbl->endsize = (unsigned long int)buf.st_size;
}

// table_size
// file table.c line 345
unsigned long int table_size(struct table_t_ *tbl)
{
  unsigned long int return_value_table_preload_size_1;
  return_value_table_preload_size_1=table_preload_size(tbl, (enum anonymous_10)preload_full);
  return return_value_table_preload_size_1;
}

// table_string
// file table.c line 483
const char * table_string(enum anonymous_2 kind)
{
  switch((signed int)kind)
  {
    case lmalphanum10k:
      return "XP free small";
    case lmalphanum5k:
      return "XP free fast";
    case lmextended:
      return "XP special";
    case lmgermanv1:
      return "XP german v1";
    case lmgermanv2:
      return "XP german v2";
    case ntextended:
      return "Vista special";
    case ntdict:
      return "Vista free";
    case ntnine:
      return "Vista nine";
    case nteight:
      return "Vista eight";
    case ntnum:
      return "Vista num";
    case ntseven:
      return "Vista seven";
    case lmflash:
      return "XP flash";
    case nteightxl:
      return "Vista eight XL";
    case ntspecialxl:
      return "Vista special XL";
    case ntprobafree:
      return "Vista probabilistic free";
    case ntproba10g:
      return "Vista probabilistic 10G";
    case ntproba60g:
      return "Vista probabilistic 60G";
    case unknown:
      return "Unknown";
    default:
      return "Unknown";
  }
}

// table_unload
// file table.c line 307
unsigned long int table_unload(struct table_t_ *tbl, enum anonymous_10 preload)
{
  unsigned long int size = (unsigned long int)0;
  if(!((preload_init & (signed int)preload) == 0))
  {
    if(!(tbl->param == NULL))
    {
      if(!(tbl->cleanup == ((void (*)(void *))NULL)))
        tbl->cleanup((void *)tbl);

      tbl->param = (void *)0;
      size = size + tbl->inisize;
    }

  }

  if(!((preload_idx & (signed int)preload) == 0))
  {
    if(!(tbl->idxmem == ((char *)NULL)))
    {
      tbl->idxmem=table_unmap(tbl, (enum anonymous_10)preload_idx);
      size = size + tbl->idxsize;
    }

  }

  if(!((preload_end & (signed int)preload) == 0))
  {
    if(!(tbl->endmem == ((char *)NULL)))
    {
      tbl->endmem=table_unmap(tbl, (enum anonymous_10)preload_end);
      size = size + tbl->endsize;
    }

  }

  if(!((preload_srt & (signed int)preload) == 0))
  {
    if(!(tbl->srtmem == ((char *)NULL)))
    {
      tbl->srtmem=table_unmap(tbl, (enum anonymous_10)preload_srt);
      size = size + tbl->srtsize;
    }

  }

  return size;
}

// table_unmap
// file table.c line 274
char * table_unmap(struct table_t_ *tbl, enum anonymous_10 preload)
{
  char *mem = (char *)(void *)0;
  unsigned long int size = (unsigned long int)0;
  switch((signed int)preload)
  {
    case preload_idx:
    {
      mem = tbl->idxmem;
      size = tbl->idxsize;
      break;
    }
    case preload_end:
    {
      mem = tbl->endmem;
      size = tbl->endsize;
      break;
    }
    case preload_srt:
    {
      mem = tbl->srtmem;
      size = tbl->srtsize;
    }
  }
  munmap((void *)mem, size);
  return (char *)(void *)0;
}

// table_verify
// file table.h line 134
signed int table_verify(struct table_t_ *tbl)
{
  signed int idx = tbl->idx;
  const unsigned long int *sizes = tbl->sizes;
  if(tbl->sizes == ((const unsigned long int *)NULL))
    return 0;

  else
  {
    if(!((unsigned long int)idx >= *sizes))
    {
      if(!(tbl->idxsize == sizes[1l]))
        return -1;

      if(!(tbl->endsize == sizes[(signed long int)(2 * idx + 2)]))
        return -1;

      if(!(tbl->srtsize == sizes[(signed long int)(2 * idx + 3)]))
        return -1;

    }

    else
      return -1;
    return 1;
  }
}

// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c)
{
  signed int tmp_if_expr_2;
  const signed int **return_value___ctype_tolower_loc_1;
  if(__c >= -128 && !(__c >= 256))
  {
    return_value___ctype_tolower_loc_1=__ctype_tolower_loc();
    tmp_if_expr_2 = (*return_value___ctype_tolower_loc_1)[(signed long int)__c];
  }

  else
    tmp_if_expr_2 = __c;
  return tmp_if_expr_2;
}

// usage
// file main.c line 60
void usage()
{
  printf("ophcrack 3.6.0 by Objectif Securite (http://www.objectif-securite.ch)\n\n");
  printf("Usage: ophcrack [OPTIONS]\n");
  printf("Cracks Windows passwords with Rainbow tables\n\n");
  printf("  -a              disable audit mode (default)\n");
  printf("  -A              enable audit mode\n");
  printf("  -b              disable bruteforce\n");
  printf("  -B              enable bruteforce (default)\n");
  printf("  -c config_file  specify the config file to use\n");
  printf("  -D              display (lots of!) debugging information\n");
  printf("  -d dir          specify tables base directory\n");
  printf("  -e              do not display empty passwords\n");
  printf("  -f file         load hashes from the specified file (pwdump or session)\n");
  printf("  -g              disable GUI\n");
  printf("  -h              display this information\n");
  printf("  -i              hide usernames\n");
  printf("  -I              show usernames (default)\n");
  printf("  -l file         log all output to the specified file\n");
  printf("  -n num          specify the number of threads to use\n");
  printf("  -o file         write cracking output to file in pwdump format\n");
  printf("  -p num          preload (0 none, 1 index, 2 index+end, 3 all default)\n");
  printf("  -q              quiet mode\n");
  printf("  -r              launch the cracking when ophcrack starts (GUI only)\n");
  printf("  -s              disable session auto-saving\n");
  printf("  -S session_file specify the file to use to automatically save the progress of the search\n");
  printf("  -u              display statistics when cracking ends\n");
  printf("  -t table1[,a[,b,...]][:table2[,a[,b,...]]]\n");
  printf("                  specify which table to use in the directory given by -d\n");
  printf("  -v              verbose\n");
  printf("  -w dir          load hashes from encrypted SAM file in directory dir\n");
  printf("  -x file         export data in CSV format to file\n");
  printf("\n\nExample:\tophcrack -g -d /path/to/tables -t xp_free_fast,0,3:vista_free -f in.txt\n\n");
  printf("\t\tLaunch ophcrack in command line using tables 0 and 3 in\n");
  printf("\t\t/path/to/tables/xp_free_fast and all tables in /path/to/tables/vista_free\n");
  printf("\t\tand cracks hashes from pwdump file in.txt\n\n");
  exit(0);
}

// utf16_to_utf8
// file samdump2.c line 121
unsigned char * utf16_to_utf8(unsigned char *dest, unsigned short int *src, unsigned long int size)
{
  unsigned int code_high = (unsigned int)0;
  unsigned long int tmp_post_1;
  unsigned short int *tmp_post_2;
  unsigned char *tmp_post_3;
  unsigned char *tmp_post_4;
  unsigned char *tmp_post_5;
  unsigned char *tmp_post_6;
  unsigned char *tmp_post_7;
  unsigned char *tmp_post_8;
  unsigned char *tmp_post_9;
  unsigned char *tmp_post_10;
  unsigned char *tmp_post_11;
  unsigned char *tmp_post_12;
  unsigned char *tmp_post_13;
  unsigned char *tmp_post_14;
  do
  {
    tmp_post_1 = size;
    size = size - 1ul;
    if(tmp_post_1 == 0ul)
      break;

    unsigned int code;
    tmp_post_2 = src;
    src = src + 1l;
    code = (unsigned int)*tmp_post_2;
    if(!(code_high == 0u))
    {
      if(code >= 56320u && !(code >= 57344u))
      {
        code = (code_high - (unsigned int)0xD800 << 12) + (code - (unsigned int)0xDC00) + (unsigned int)0x10000;
        tmp_post_3 = dest;
        dest = dest + 1l;
        *tmp_post_3 = (unsigned char)(code >> 18 | (unsigned int)0xF0);
        tmp_post_4 = dest;
        dest = dest + 1l;
        *tmp_post_4 = (unsigned char)(code >> 12 & (unsigned int)0x3F | (unsigned int)0x80);
        tmp_post_5 = dest;
        dest = dest + 1l;
        *tmp_post_5 = (unsigned char)(code >> 6 & (unsigned int)0x3F | (unsigned int)0x80);
        tmp_post_6 = dest;
        dest = dest + 1l;
        *tmp_post_6 = (unsigned char)(code & (unsigned int)0x3F | (unsigned int)0x80);
      }

      else
      {
        tmp_post_7 = dest;
        dest = dest + 1l;
        *tmp_post_7 = (unsigned char)63;
      }
      code_high = (unsigned int)0;
    }

    else
      if(!(code >= 128u))
      {
        tmp_post_8 = dest;
        dest = dest + 1l;
        *tmp_post_8 = (unsigned char)code;
      }

      else
        if(!(code >= 2048u))
        {
          tmp_post_9 = dest;
          dest = dest + 1l;
          *tmp_post_9 = (unsigned char)(code >> 6 | (unsigned int)0xC0);
          tmp_post_10 = dest;
          dest = dest + 1l;
          *tmp_post_10 = (unsigned char)(code & (unsigned int)0x3F | (unsigned int)0x80);
        }

        else
          if(code >= 55296u && !(code >= 56320u))
          {
            code_high = code;
            continue;
          }

          else
            if(code >= 56320u && !(code >= 57344u))
            {
              tmp_post_11 = dest;
              dest = dest + 1l;
              *tmp_post_11 = (unsigned char)63;
            }

            else
            {
              tmp_post_12 = dest;
              dest = dest + 1l;
              *tmp_post_12 = (unsigned char)(code >> 12 | (unsigned int)0xE0);
              tmp_post_13 = dest;
              dest = dest + 1l;
              *tmp_post_13 = (unsigned char)(code >> 6 & (unsigned int)0x3F | (unsigned int)0x80);
              tmp_post_14 = dest;
              dest = dest + 1l;
              *tmp_post_14 = (unsigned char)(code & (unsigned int)0x3F | (unsigned int)0x80);
            }
  }
  while((_Bool)1);
  return dest;
}

// wincp1252_to_ascii
// file misc.c line 221
void wincp1252_to_ascii(unsigned char *str)
{
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen((char *)str);
  len = (signed int)return_value_strlen_1;
  signed int i = 0;
  for( ; !(i >= len); i = i + 1)
    if((signed int)str[(signed long int)i] >= 128)
      switch((signed int)str[(signed long int)i])
      {
        case 0x8e:
        {
          str[(signed long int)i] = (unsigned char)0xc4;
          break;
        }
        case 0x99:
        {
          str[(signed long int)i] = (unsigned char)0xd6;
          break;
        }
        case 0x9a:
        {
          str[(signed long int)i] = (unsigned char)0xdc;
          break;
        }
        case 0xe1:
        {
          str[(signed long int)i] = (unsigned char)0xdf;
          break;
        }
        case 0xa5:
        {
          str[(signed long int)i] = (unsigned char)0xd1;
          break;
        }
        case 0x90:
        {
          str[(signed long int)i] = (unsigned char)0xc9;
          break;
        }
        case 0x80:
          str[(signed long int)i] = (unsigned char)0xc7;
      }

}

