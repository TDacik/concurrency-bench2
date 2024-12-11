// #anon_enum$JU_ERRNO_NONE=0$JU_ERRNO_FULL=1$JU_ERRNO_NFMAX=1$JU_ERRNO_NOMEM=2$JU_ERRNO_NULLPPARRAY=3$JU_ERRNO_NONNULLPARRAY=10$JU_ERRNO_NULLPINDEX=4$JU_ERRNO_NULLPVALUE=11$JU_ERRNO_NOTJUDY1=5$JU_ERRNO_NOTJUDYL=6$JU_ERRNO_NOTJUDYSL=7$JU_ERRNO_UNSORTED=12$JU_ERRNO_OVERRUN=8$JU_ERRNO_CORRUPT=9
// file /usr/include/Judy.h line 110
enum anonymous$9 { JU_ERRNO_NONE=0, JU_ERRNO_FULL=1, JU_ERRNO_NFMAX=1, JU_ERRNO_NOMEM=2, JU_ERRNO_NULLPPARRAY=3, JU_ERRNO_NONNULLPARRAY=10, JU_ERRNO_NULLPINDEX=4, JU_ERRNO_NULLPVALUE=11, JU_ERRNO_NOTJUDY1=5, JU_ERRNO_NOTJUDYL=6, JU_ERRNO_NOTJUDYSL=7, JU_ERRNO_UNSORTED=12, JU_ERRNO_OVERRUN=8, JU_ERRNO_CORRUPT=9 };

// #anon_enum$byPtr=0$byU32=1$byU16=2
// file ./fst/lz4.c line 445
enum anonymous$1 { byPtr=0, byU32=1, byU16=2 };

// #anon_enum$noDict=0$withPrefix64k=1$usingExtDict=2
// file ./fst/lz4.c line 447
enum anonymous$2 { noDict=0, withPrefix64k=1, usingExtDict=2 };

// #anon_enum$noDictIssue=0$dictSmall=1
// file ./fst/lz4.c line 448
enum anonymous$3 { noDictIssue=0, dictSmall=1 };

// #anon_enum$notLimited=0$limitedOutput=1
// file ./fst/lz4.c line 444
enum anonymous$5 { notLimited=0, limitedOutput=1 };

// tag-#anon#ST[*{U8}$U8$'externalDict'||U64'extDictSize'||*{U8}$U8$'prefixEnd'||U64'prefixSize'|]
// file ./fst/lz4.c line 1139
struct anonymous$11;

// tag-#anon#ST[ARR2052{S64}$S64$'table'|]
// file ./fst/lz4.h line 184
struct anonymous$8;

// tag-#anon#ST[ARR4096{U32}$U32$'hashTable'||U32'currentOffset'||U32'initCheck'||*{cU8}$cU8$'dictionary'||*{cU8}$cU8$'bufferStart'||U32'dictSize'||U32'$pad0'|]
// file ./fst/lz4.c line 435
struct anonymous$4;

// tag-#anon#ST[ARR4{U64}$U64$'table'|]
// file ./fst/lz4.h line 242
struct anonymous$10;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$7;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$6;

// tag-#anon#UN[SYM#tag-fstHierScope#'scope'||SYM#tag-fstHierVar#'var'||SYM#tag-fstHierAttr#'attr'|]
// file ./fst/fstapi.h line 286
union anonymous;

// tag-J_UDY_ERROR_STRUCT
// file /usr/include/Judy.h line 181
struct J_UDY_ERROR_STRUCT;

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

// tag-fstAttrType
// file ./fst/fstapi.h line 174
enum fstAttrType { FST_AT_MIN=0, FST_AT_MISC=0, FST_AT_ARRAY=1, FST_AT_ENUM=2, FST_AT_PACK=3, FST_AT_MAX=3 };

// tag-fstBlackoutChain
// file ./fst/fstapi.c line 698
struct fstBlackoutChain;

// tag-fstCurrHier
// file ./fst/fstapi.c line 3011
struct fstCurrHier;

// tag-fstFileType
// file ./fst/fstapi.h line 49
enum fstFileType { FST_FT_MIN=0, FST_FT_VERILOG=0, FST_FT_VHDL=1, FST_FT_VERILOG_VHDL=2, FST_FT_MAX=2 };

// tag-fstHier
// file ./fst/fstapi.h line 282
struct fstHier;

// tag-fstHierAttr
// file ./fst/fstapi.h line 311
struct fstHierAttr;

// tag-fstHierScope
// file ./fst/fstapi.h line 288
struct fstHierScope;

// tag-fstHierVar
// file ./fst/fstapi.h line 297
struct fstHierVar;

// tag-fstReaderContext
// file ./fst/fstapi.c line 3019
struct fstReaderContext;

// tag-fstScopeType
// file ./fst/fstapi.h line 74
enum fstScopeType { FST_ST_MIN=0, FST_ST_VCD_MODULE=0, FST_ST_VCD_TASK=1, FST_ST_VCD_FUNCTION=2, FST_ST_VCD_BEGIN=3, FST_ST_VCD_FORK=4, FST_ST_VCD_GENERATE=5, FST_ST_VCD_STRUCT=6, FST_ST_VCD_UNION=7, FST_ST_VCD_CLASS=8, FST_ST_VCD_INTERFACE=9, FST_ST_VCD_PACKAGE=10, FST_ST_VCD_PROGRAM=11, FST_ST_VHDL_ARCHITECTURE=12, FST_ST_VHDL_PROCEDURE=13, FST_ST_VHDL_FUNCTION=14, FST_ST_VHDL_RECORD=15, FST_ST_VHDL_PROCESS=16, FST_ST_VHDL_BLOCK=17, FST_ST_VHDL_FOR_GENERATE=18, FST_ST_VHDL_IF_GENERATE=19, FST_ST_VHDL_GENERATE=20, FST_ST_VHDL_PACKAGE=21, FST_ST_MAX=21, FST_ST_GEN_ATTRBEGIN=252, FST_ST_GEN_ATTREND=253, FST_ST_VCD_SCOPE=254, FST_ST_VCD_UPSCOPE=255 };

// tag-fstSupplementalDataType
// file ./fst/fstapi.h line 253
enum fstSupplementalDataType { FST_SDT_MIN=0, FST_SDT_NONE=0, FST_SDT_VHDL_BOOLEAN=1, FST_SDT_VHDL_BIT=2, FST_SDT_VHDL_BIT_VECTOR=3, FST_SDT_VHDL_STD_ULOGIC=4, FST_SDT_VHDL_STD_ULOGIC_VECTOR=5, FST_SDT_VHDL_STD_LOGIC=6, FST_SDT_VHDL_STD_LOGIC_VECTOR=7, FST_SDT_VHDL_UNSIGNED=8, FST_SDT_VHDL_SIGNED=9, FST_SDT_VHDL_INTEGER=10, FST_SDT_VHDL_REAL=11, FST_SDT_VHDL_NATURAL=12, FST_SDT_VHDL_POSITIVE=13, FST_SDT_VHDL_TIME=14, FST_SDT_VHDL_CHARACTER=15, FST_SDT_VHDL_STRING=16, FST_SDT_MAX=16, FST_SDT_SVT_SHIFT_COUNT=10, FST_SDT_ABS_MAX=1023 };

// tag-fstSupplementalVarType
// file ./fst/fstapi.h line 239
enum fstSupplementalVarType { FST_SVT_MIN=0, FST_SVT_NONE=0, FST_SVT_VHDL_SIGNAL=1, FST_SVT_VHDL_VARIABLE=2, FST_SVT_VHDL_CONSTANT=3, FST_SVT_VHDL_FILE=4, FST_SVT_VHDL_MEMORY=5, FST_SVT_MAX=5 };

// tag-fstVarDir
// file ./fst/fstapi.h line 149
enum fstVarDir { FST_VD_MIN=0, FST_VD_IMPLICIT=0, FST_VD_INPUT=1, FST_VD_OUTPUT=2, FST_VD_INOUT=3, FST_VD_BUFFER=4, FST_VD_LINKAGE=5, FST_VD_MAX=5 };

// tag-fstVarType
// file ./fst/fstapi.h line 110
enum fstVarType { FST_VT_MIN=0, FST_VT_VCD_EVENT=0, FST_VT_VCD_INTEGER=1, FST_VT_VCD_PARAMETER=2, FST_VT_VCD_REAL=3, FST_VT_VCD_REAL_PARAMETER=4, FST_VT_VCD_REG=5, FST_VT_VCD_SUPPLY0=6, FST_VT_VCD_SUPPLY1=7, FST_VT_VCD_TIME=8, FST_VT_VCD_TRI=9, FST_VT_VCD_TRIAND=10, FST_VT_VCD_TRIOR=11, FST_VT_VCD_TRIREG=12, FST_VT_VCD_TRI0=13, FST_VT_VCD_TRI1=14, FST_VT_VCD_WAND=15, FST_VT_VCD_WIRE=16, FST_VT_VCD_WOR=17, FST_VT_VCD_PORT=18, FST_VT_VCD_SPARRAY=19, FST_VT_VCD_REALTIME=20, FST_VT_GEN_STRING=21, FST_VT_SV_BIT=22, FST_VT_SV_LOGIC=23, FST_VT_SV_INT=24, FST_VT_SV_SHORTINT=25, FST_VT_SV_LONGINT=26, FST_VT_SV_BYTE=27, FST_VT_SV_ENUM=28, FST_VT_SV_SHORTREAL=29, FST_VT_MAX=29 };

// tag-fstWriterContext
// file ./fst/fstapi.c line 706
struct fstWriterContext;

// tag-fstWriterPackType
// file ./fst/fstapi.h line 43
enum fstWriterPackType { FST_WR_PT_ZLIB=0, FST_WR_PT_FASTLZ=1, FST_WR_PT_LZ4=2 };

// tag-gzFile_s
// file /usr/include/zlib.h line 1224
struct gzFile_s;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// JudyHSFreeArray
// file /usr/include/Judy.h line 289
extern unsigned long int JudyHSFreeArray(void **, struct J_UDY_ERROR_STRUCT *);
// JudyHSIns
// file /usr/include/Judy.h line 287
extern void ** JudyHSIns(void **, void *, unsigned long int, struct J_UDY_ERROR_STRUCT *);
// LZ4_64bits
// file ./fst/lz4.c line 178
static unsigned int LZ4_64bits(void);
// LZ4_NbCommonBytes
// file ./fst/lz4.c line 327
static unsigned int LZ4_NbCommonBytes(unsigned long int val);
// LZ4_compress
// file ./fst/lz4.c line 710
signed int LZ4_compress(const char *source, char *dest, signed int inputSize);
// LZ4_compressBound
// file ./fst/lz4.c line 429
signed int LZ4_compressBound(signed int isize);
// LZ4_compress_continue
// file ./fst/lz4.c line 883
signed int LZ4_compress_continue(struct anonymous$8 *LZ4_stream, const char *source, char *dest, signed int inputSize);
// LZ4_compress_continue_generic
// file ./fst/lz4.c line 833
static inline signed int LZ4_compress_continue_generic(void *LZ4_stream, const char *source, char *dest, signed int inputSize, signed int maxOutputSize, enum anonymous$5 limit);
// LZ4_compress_forceExtDict
// file ./fst/lz4.c line 895
signed int LZ4_compress_forceExtDict(struct anonymous$8 *LZ4_dict, const char *source, char *dest, signed int inputSize);
// LZ4_compress_generic
// file ./fst/lz4.c line 498
static signed int LZ4_compress_generic(void *ctx, const char *source, char *dest, signed int inputSize, signed int maxOutputSize, enum anonymous$5 outputLimited, enum anonymous$1 tableType, enum anonymous$2 dict, enum anonymous$3 dictIssue);
// LZ4_compress_limitedOutput
// file ./fst/lz4.c line 730
signed int LZ4_compress_limitedOutput(const char *source, char *dest, signed int inputSize, signed int maxOutputSize);
// LZ4_compress_limitedOutput_continue
// file ./fst/lz4.c line 888
signed int LZ4_compress_limitedOutput_continue(struct anonymous$8 *LZ4_stream, const char *source, char *dest, signed int inputSize, signed int maxOutputSize);
// LZ4_compress_limitedOutput_withState
// file ./fst/lz4.c line 1343
signed int LZ4_compress_limitedOutput_withState(void *state, const char *source, char *dest, signed int inputSize, signed int maxOutputSize);
// LZ4_compress_withState
// file ./fst/lz4.c line 1332
signed int LZ4_compress_withState(void *state, const char *source, char *dest, signed int inputSize);
// LZ4_copy4
// file ./fst/lz4.c line 259
static void LZ4_copy4(void *dstPtr, const void *srcPtr);
// LZ4_copy8
// file ./fst/lz4.c line 269
static void LZ4_copy8(void *dstPtr, const void *srcPtr);
// LZ4_count
// file ./fst/lz4.c line 394
static unsigned int LZ4_count(const unsigned char *pIn, const unsigned char *pMatch, const unsigned char *pInLimit);
// LZ4_create
// file ./fst/lz4.c line 1314
void * LZ4_create(const char *inputBuffer);
// LZ4_createStream
// file ./fst/lz4.c line 765
struct anonymous$8 * LZ4_createStream(void);
// LZ4_createStreamDecode
// file ./fst/lz4.c line 1152
struct anonymous$10 * LZ4_createStreamDecode(void);
// LZ4_decompress_fast
// file ./fst/lz4.c line 1131
signed int LZ4_decompress_fast(const char *source, char *dest, signed int originalSize);
// LZ4_decompress_fast_continue
// file ./fst/lz4.c line 1217
signed int LZ4_decompress_fast_continue(struct anonymous$10 *LZ4_streamDecode, const char *source, char *dest, signed int originalSize);
// LZ4_decompress_fast_usingDict
// file ./fst/lz4.c line 1272
signed int LZ4_decompress_fast_usingDict(const char *source, char *dest, signed int originalSize, const char *dictStart, signed int dictSize);
// LZ4_decompress_fast_withPrefix64k
// file ./fst/lz4.c line 1361
signed int LZ4_decompress_fast_withPrefix64k(const char *source, char *dest, signed int originalSize);
// LZ4_decompress_generic
// file ./fst/lz4.c line 942
static inline signed int LZ4_decompress_generic(const char * const source, char * const dest, signed int inputSize, signed int outputSize, signed int endOnInput, signed int partialDecoding, signed int targetOutputSize, signed int dict, const unsigned char * const lowPrefix, const unsigned char * const dictStart, const unsigned long int dictSize);
// LZ4_decompress_safe
// file ./fst/lz4.c line 1121
signed int LZ4_decompress_safe(const char *source, char *dest, signed int compressedSize, signed int maxDecompressedSize);
// LZ4_decompress_safe_continue
// file ./fst/lz4.c line 1188
signed int LZ4_decompress_safe_continue(struct anonymous$10 *LZ4_streamDecode, const char *source, char *dest, signed int compressedSize, signed int maxOutputSize);
// LZ4_decompress_safe_forceExtDict
// file ./fst/lz4.c line 1278
signed int LZ4_decompress_safe_forceExtDict(const char *source, char *dest, signed int compressedSize, signed int maxOutputSize, const char *dictStart, signed int dictSize);
// LZ4_decompress_safe_partial
// file ./fst/lz4.c line 1126
signed int LZ4_decompress_safe_partial(const char *source, char *dest, signed int compressedSize, signed int targetOutputSize, signed int maxDecompressedSize);
// LZ4_decompress_safe_usingDict
// file ./fst/lz4.c line 1267
signed int LZ4_decompress_safe_usingDict(const char *source, char *dest, signed int compressedSize, signed int maxOutputSize, const char *dictStart, signed int dictSize);
// LZ4_decompress_safe_withPrefix64k
// file ./fst/lz4.c line 1356
signed int LZ4_decompress_safe_withPrefix64k(const char *source, char *dest, signed int compressedSize, signed int maxOutputSize);
// LZ4_decompress_usingDict_generic
// file ./fst/lz4.c line 1254
static inline signed int LZ4_decompress_usingDict_generic(const char *source, char *dest, signed int compressedSize, signed int maxOutputSize, signed int safe, const char *dictStart, signed int dictSize);
// LZ4_freeStream
// file ./fst/lz4.c line 773
signed int LZ4_freeStream(struct anonymous$8 *LZ4_stream);
// LZ4_freeStreamDecode
// file ./fst/lz4.c line 1158
signed int LZ4_freeStreamDecode(struct anonymous$10 *LZ4_stream);
// LZ4_getPosition
// file ./fst/lz4.c line 492
static const unsigned char * LZ4_getPosition(const unsigned char *p, void *tableBase, enum anonymous$1 tableType, const unsigned char *srcBase);
// LZ4_getPositionOnHash
// file ./fst/lz4.c line 485
static const unsigned char * LZ4_getPositionOnHash(unsigned int h, void *tableBase, enum anonymous$1 tableType, const unsigned char *srcBase);
// LZ4_hashPosition
// file ./fst/lz4.c line 467
static unsigned int LZ4_hashPosition(const unsigned char *p, enum anonymous$1 tableType);
// LZ4_hashSequence
// file ./fst/lz4.c line 459
static unsigned int LZ4_hashSequence(unsigned int sequence, enum anonymous$1 tableType);
// LZ4_init
// file ./fst/lz4.c line 1301
static void LZ4_init(struct anonymous$4 *lz4ds, const unsigned char *base);
// LZ4_isLittleEndian
// file ./fst/lz4.c line 180
static unsigned int LZ4_isLittleEndian(void);
// LZ4_loadDict
// file ./fst/lz4.c line 780
signed int LZ4_loadDict(struct anonymous$8 *LZ4_dict, const char *dictionary, signed int dictSize);
// LZ4_putPosition
// file ./fst/lz4.c line 479
static void LZ4_putPosition(const unsigned char *p, void *tableBase, enum anonymous$1 tableType, const unsigned char *srcBase);
// LZ4_putPositionOnHash
// file ./fst/lz4.c line 469
static void LZ4_putPositionOnHash(const unsigned char *p, unsigned int h, void *tableBase, enum anonymous$1 tableType, const unsigned char *srcBase);
// LZ4_read16
// file ./fst/lz4.c line 214
static unsigned short int LZ4_read16(const void *memPtr);
// LZ4_read32
// file ./fst/lz4.c line 226
static unsigned int LZ4_read32(const void *memPtr);
// LZ4_read64
// file ./fst/lz4.c line 238
static unsigned long int LZ4_read64(const void *memPtr);
// LZ4_readLE16
// file ./fst/lz4.c line 187
static unsigned short int LZ4_readLE16(const void *memPtr);
// LZ4_read_ARCH
// file ./fst/lz4.c line 250
static unsigned long int LZ4_read_ARCH(const void *p);
// LZ4_renormDictT
// file ./fst/lz4.c line 812
static void LZ4_renormDictT(struct anonymous$4 *LZ4_dict, const unsigned char *src);
// LZ4_resetStream
// file ./fst/lz4.c line 760
void LZ4_resetStream(struct anonymous$8 *LZ4_stream);
// LZ4_resetStreamState
// file ./fst/lz4.c line 1307
signed int LZ4_resetStreamState(void *state, const char *inputBuffer);
// LZ4_saveDict
// file ./fst/lz4.c line 915
signed int LZ4_saveDict(struct anonymous$8 *LZ4_dict, char *safeBuffer, signed int dictSize);
// LZ4_setStreamDecode
// file ./fst/lz4.c line 1171
signed int LZ4_setStreamDecode(struct anonymous$10 *LZ4_streamDecode, const char *dictionary, signed int dictSize);
// LZ4_sizeofState
// file ./fst/lz4.c line 1330
signed int LZ4_sizeofState(void);
// LZ4_sizeofStreamState
// file ./fst/lz4.c line 1299
signed int LZ4_sizeofStreamState(void);
// LZ4_slideInputBuffer
// file ./fst/lz4.c line 1321
char * LZ4_slideInputBuffer(void *LZ4_Data);
// LZ4_uncompress
// file ./fst/lz4.c line 1293
signed int LZ4_uncompress(const char *source, char *dest, signed int outputSize);
// LZ4_uncompress_unknownOutputSize
// file ./fst/lz4.c line 1294
signed int LZ4_uncompress_unknownOutputSize(const char *source, char *dest, signed int isize, signed int maxOutputSize);
// LZ4_versionNumber
// file ./fst/lz4.c line 428
signed int LZ4_versionNumber(void);
// LZ4_wildCopy
// file ./fst/lz4.c line 286
static void LZ4_wildCopy(void *dstPtr, const void *srcPtr, void *dstEnd);
// LZ4_writeLE16
// file ./fst/lz4.c line 198
static void LZ4_writeLE16(void *memPtr, unsigned short int value);
// asctime
// file /usr/include/time.h line 261
extern char * asctime(struct tm *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atol
// file /usr/include/stdlib.h line 150
extern signed long int atol(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// clearerr
// file /usr/include/stdio.h line 826
extern void clearerr(struct _IO_FILE *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// compress2
// file /usr/include/zlib.h line 1174
extern signed int compress2(unsigned char *, unsigned long int *, const unsigned char *, unsigned long int, signed int);
// compressBound
// file /usr/include/zlib.h line 1190
extern unsigned long int compressBound(unsigned long int);
// dup
// file /usr/include/unistd.h line 531
extern signed int dup(signed int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fastlz1_compress
// file ./fst/fastlz.c line 162
static inline signed int fastlz1_compress(const void *input, signed int length, void *output);
// fastlz1_decompress
// file ./fst/fastlz.c line 416
static inline signed int fastlz1_decompress(const void *input, signed int length, void *output, signed int maxout);
// fastlz2_compress
// file ./fst/fastlz.c line 162
static inline signed int fastlz2_compress(const void *input, signed int length, void *output);
// fastlz2_decompress
// file ./fst/fastlz.c line 416
static inline signed int fastlz2_decompress(const void *input, signed int length, void *output, signed int maxout);
// fastlz_compress
// file ./fst/fastlz.c line 126
signed int fastlz_compress(const void *input, signed int length, void *output);
// fastlz_compress_level
// file ./fst/fastlz.c line 150
signed int fastlz_compress_level(signed int level, const void *input, signed int length, void *output);
// fastlz_decompress
// file ./fst/fastlz.c line 136
signed int fastlz_decompress(const void *input, signed int length, void *output, signed int maxout);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgetc
// file /usr/include/stdio.h line 531
extern signed int fgetc(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputc
// file /usr/include/stdio.h line 573
extern signed int fputc(signed int, struct _IO_FILE *);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fseeko
// file /usr/include/stdio.h line 773
extern signed int fseeko(struct _IO_FILE *, signed long int, signed int);
// fstCopyVarint32ToLeft
// file ./fst/fstapi.c line 458
static unsigned char * fstCopyVarint32ToLeft(unsigned char *pnt, unsigned int v);
// fstCopyVarint64ToRight
// file ./fst/fstapi.c line 486
static unsigned char * fstCopyVarint64ToRight(unsigned char *pnt, unsigned long int v);
// fstDestroyMmaps
// file ./fst/fstapi.c line 981
static void fstDestroyMmaps(struct fstWriterContext *xc, signed int is_closing);
// fstDetermineBreakSize
// file ./fst/fstapi.c line 1018
static void fstDetermineBreakSize(struct fstWriterContext *xc);
// fstExtractRvatDataFromFrame
// file ./fst/fstapi.c line 5637
static char * fstExtractRvatDataFromFrame(struct fstReaderContext *xc, unsigned int facidx, char *buf);
// fstFread
// file ./fst/fstapi.c line 260
static unsigned long int fstFread(void *buf, unsigned long int siz, unsigned long int cnt, struct _IO_FILE *fp);
// fstFtruncate
// file ./fst/fstapi.c line 270
static signed int fstFtruncate(signed int fd, signed long int length);
// fstFwrite
// file ./fst/fstapi.c line 265
static unsigned long int fstFwrite(const void *buf, unsigned long int siz, unsigned long int cnt, struct _IO_FILE *fp);
// fstGetSVarint64
// file ./fst/fstapi.c line 635
static signed long int fstGetSVarint64(unsigned char *mem, signed int *skiplen);
// fstGetVarint32
// file ./fst/fstapi.c line 396
static unsigned int fstGetVarint32(unsigned char *mem, signed int *skiplen);
// fstGetVarint32Length
// file ./fst/fstapi.c line 421
static unsigned int fstGetVarint32Length(unsigned char *mem);
// fstGetVarint32NoSkip
// file ./fst/fstapi.c line 434
static unsigned int fstGetVarint32NoSkip(unsigned char *mem);
// fstGetVarint64
// file ./fst/fstapi.c line 501
static unsigned long int fstGetVarint64(unsigned char *mem, signed int *skiplen);
// fstReaderClose
// file fst/fstapi.h line 369
void fstReaderClose(void *ctx);
// fstReaderClrFacProcessMask
// file ./fst/fstapi.c line 3343
void fstReaderClrFacProcessMask(void *ctx, unsigned int facidx);
// fstReaderClrFacProcessMaskAll
// file ./fst/fstapi.c line 3372
void fstReaderClrFacProcessMaskAll(void *ctx);
// fstReaderDeallocateRvatData
// file ./fst/fstapi.c line 4592
static void fstReaderDeallocateRvatData(void *ctx);
// fstReaderDeallocateScopeData
// file ./fst/fstapi.c line 3167
static void fstReaderDeallocateScopeData(struct fstReaderContext *xc);
// fstReaderFseeko
// file ./fst/fstapi.c line 3112
signed int fstReaderFseeko(struct fstReaderContext *xc, struct _IO_FILE *stream, signed long int offset, signed int whence);
// fstReaderGetAliasCount
// file ./fst/fstapi.c line 3435
unsigned long int fstReaderGetAliasCount(void *ctx);
// fstReaderGetCurrentFlatScope
// file ./fst/fstapi.c line 3181
const char * fstReaderGetCurrentFlatScope(void *ctx);
// fstReaderGetCurrentScopeLen
// file ./fst/fstapi.c line 3278
signed int fstReaderGetCurrentScopeLen(void *ctx);
// fstReaderGetCurrentScopeUserInfo
// file ./fst/fstapi.c line 3195
void * fstReaderGetCurrentScopeUserInfo(void *ctx);
// fstReaderGetDateString
// file ./fst/fstapi.c line 3463
const char * fstReaderGetDateString(void *ctx);
// fstReaderGetDoubleEndianMatchState
// file ./fst/fstapi.c line 3449
signed int fstReaderGetDoubleEndianMatchState(void *ctx);
// fstReaderGetDumpActivityChangeTime
// file ./fst/fstapi.c line 3491
unsigned long int fstReaderGetDumpActivityChangeTime(void *ctx, unsigned int idx);
// fstReaderGetDumpActivityChangeValue
// file ./fst/fstapi.c line 3506
unsigned char fstReaderGetDumpActivityChangeValue(void *ctx, unsigned int idx);
// fstReaderGetEndTime
// file ./fst/fstapi.c line 3400
unsigned long int fstReaderGetEndTime(void *ctx);
// fstReaderGetFacProcessMask
// file ./fst/fstapi.c line 3306
signed int fstReaderGetFacProcessMask(void *ctx, unsigned int facidx);
// fstReaderGetFileType
// file ./fst/fstapi.c line 3470
signed int fstReaderGetFileType(void *ctx);
// fstReaderGetFseekFailed
// file ./fst/fstapi.c line 3291
signed int fstReaderGetFseekFailed(void *ctx);
// fstReaderGetMaxHandle
// file ./fst/fstapi.c line 3428
unsigned int fstReaderGetMaxHandle(void *ctx);
// fstReaderGetMemoryUsedByWriter
// file ./fst/fstapi.c line 3407
unsigned long int fstReaderGetMemoryUsedByWriter(void *ctx);
// fstReaderGetNumberDumpActivityChanges
// file ./fst/fstapi.c line 3484
unsigned int fstReaderGetNumberDumpActivityChanges(void *ctx);
// fstReaderGetScopeCount
// file ./fst/fstapi.c line 3414
unsigned long int fstReaderGetScopeCount(void *ctx);
// fstReaderGetStartTime
// file ./fst/fstapi.c line 3393
unsigned long int fstReaderGetStartTime(void *ctx);
// fstReaderGetTimescale
// file ./fst/fstapi.c line 3386
signed char fstReaderGetTimescale(void *ctx);
// fstReaderGetTimezero
// file ./fst/fstapi.c line 3477
signed long int fstReaderGetTimezero(void *ctx);
// fstReaderGetValueChangeSectionCount
// file ./fst/fstapi.c line 3442
unsigned long int fstReaderGetValueChangeSectionCount(void *ctx);
// fstReaderGetValueFromHandleAtTime
// file ./fst/fstapi.c line 5684
char * fstReaderGetValueFromHandleAtTime(void *ctx, unsigned long int tim, unsigned int facidx, char *buf);
// fstReaderGetVarCount
// file ./fst/fstapi.c line 3421
unsigned long int fstReaderGetVarCount(void *ctx);
// fstReaderGetVersionString
// file ./fst/fstapi.c line 3456
const char * fstReaderGetVersionString(void *ctx);
// fstReaderInit
// file ./fst/fstapi.c line 4223
signed int fstReaderInit(struct fstReaderContext *xc);
// fstReaderIterBlocks
// file fst/fstapi.h line 397
signed int fstReaderIterBlocks(void *ctx, void (*value_change_callback)(void *, unsigned long int, unsigned int, const unsigned char *), void *user_callback_data_pointer, struct _IO_FILE *fv);
// fstReaderIterBlocks2
// file ./fst/fstapi.c line 4659
signed int fstReaderIterBlocks2(void *ctx, void (*value_change_callback)(void *, unsigned long int, unsigned int, const unsigned char *), void (*value_change_callback_varlen)(void *, unsigned long int, unsigned int, const unsigned char *, unsigned int), void *user_callback_data_pointer, struct _IO_FILE *fv);
// fstReaderIterBlocks2::value_change_callback$object
//
void value_change_callback$object(void *, unsigned long int, unsigned int, const unsigned char *);
// fstReaderIterBlocks2::value_change_callback_varlen$object
//
void value_change_callback_varlen$object(void *, unsigned long int, unsigned int, const unsigned char *, unsigned int);
// fstReaderIterBlocks::value_change_callback$object
//
void value_change_callback$object(void *, unsigned long int, unsigned int, const unsigned char *);
// fstReaderIterBlocksSetNativeDoublesOnCallback
// file ./fst/fstapi.c line 3556
void fstReaderIterBlocksSetNativeDoublesOnCallback(void *ctx, signed int enable);
// fstReaderIterateHier
// file ./fst/fstapi.c line 3781
struct fstHier * fstReaderIterateHier(void *ctx);
// fstReaderIterateHierRewind
// file ./fst/fstapi.c line 3761
signed int fstReaderIterateHierRewind(void *ctx);
// fstReaderOpen
// file fst/fstapi.h line 405
void * fstReaderOpen(const char *nam);
// fstReaderOpenForUtilitiesOnly
// file ./fst/fstapi.c line 4541
void * fstReaderOpenForUtilitiesOnly(void);
// fstReaderPopScope
// file ./fst/fstapi.c line 3209
const char * fstReaderPopScope(void *ctx);
// fstReaderProcessHier
// file fst/fstapi.h line 408
signed int fstReaderProcessHier(void *ctx, struct _IO_FILE *fv);
// fstReaderPushScope
// file ./fst/fstapi.c line 3243
const char * fstReaderPushScope(void *ctx, const char *nam, void *user_info);
// fstReaderRecreateHierFile
// file ./fst/fstapi.c line 3599
static signed int fstReaderRecreateHierFile(struct fstReaderContext *xc);
// fstReaderResetScope
// file ./fst/fstapi.c line 3232
void fstReaderResetScope(void *ctx);
// fstReaderSetFacProcessMask
// file ./fst/fstapi.c line 3325
void fstReaderSetFacProcessMask(void *ctx, unsigned int facidx);
// fstReaderSetFacProcessMaskAll
// file fst/fstapi.h line 412
void fstReaderSetFacProcessMaskAll(void *ctx);
// fstReaderSetLimitTimeRange
// file ./fst/fstapi.c line 3521
void fstReaderSetLimitTimeRange(void *ctx, unsigned long int start_time, unsigned long int end_time);
// fstReaderSetUnlimitedTimeRange
// file ./fst/fstapi.c line 3534
void fstReaderSetUnlimitedTimeRange(void *ctx);
// fstReaderSetVcdExtensions
// file fst/fstapi.h line 415
void fstReaderSetVcdExtensions(void *ctx, signed int enable);
// fstReaderUint64
// file ./fst/fstapi.c line 379
static unsigned long int fstReaderUint64(struct _IO_FILE *f);
// fstReaderVarint32
// file ./fst/fstapi.c line 526
static unsigned int fstReaderVarint32(struct _IO_FILE *f);
// fstReaderVarint32WithSkip
// file ./fst/fstapi.c line 555
static unsigned int fstReaderVarint32WithSkip(struct _IO_FILE *f, unsigned int *skiplen);
// fstReaderVarint64
// file ./fst/fstapi.c line 585
static unsigned long int fstReaderVarint64(struct _IO_FILE *f);
// fstRealpath
// file ./fst/fstapi.c line 279
static char * fstRealpath(const char *path, char *resolved_path);
// fstUtilityBinToEsc
// file ./fst/fstapi.c line 6439
signed int fstUtilityBinToEsc(unsigned char *d, unsigned char *s, signed int len);
// fstUtilityEscToBin
// file ./fst/fstapi.c line 6484
signed int fstUtilityEscToBin(unsigned char *d, unsigned char *s, signed int len);
// fstVcdID
// file ./fst/fstapi.c line 3568
static void fstVcdID(char *buf, unsigned int value);
// fstVcdIDForFwrite
// file ./fst/fstapi.c line 3583
static signed int fstVcdIDForFwrite(char *buf, unsigned int value);
// fstWriterClose
// file ./fst/fstapi.c line 1857
void fstWriterClose(void *ctx);
// fstWriterCreate
// file ./fst/fstapi.c line 1105
void * fstWriterCreate(const char *nam, signed int use_compressed_hier);
// fstWriterCreateMmaps
// file ./fst/fstapi.c line 949
static void fstWriterCreateMmaps(struct fstWriterContext *xc);
// fstWriterCreateVar
// file ./fst/fstapi.c line 2536
unsigned int fstWriterCreateVar(void *ctx, enum fstVarType vt, enum fstVarDir vd, unsigned int len, const char *nam, unsigned int aliasHandle);
// fstWriterCreateVar2
// file ./fst/fstapi.c line 2527
unsigned int fstWriterCreateVar2(void *ctx, enum fstVarType vt, enum fstVarDir vd, unsigned int len, const char *nam, unsigned int aliasHandle, const char *type, enum fstSupplementalVarType svt, enum fstSupplementalDataType sdt);
// fstWriterEmitDumpActive
// file ./fst/fstapi.c line 2944
void fstWriterEmitDumpActive(void *ctx, signed int enable);
// fstWriterEmitHdrBytes
// file ./fst/fstapi.c line 881
static void fstWriterEmitHdrBytes(struct fstWriterContext *xc);
// fstWriterEmitSectionHeader
// file ./fst/fstapi.c line 1170
static void fstWriterEmitSectionHeader(void *ctx);
// fstWriterEmitTimeChange
// file ./fst/fstapi.c line 2889
void fstWriterEmitTimeChange(void *ctx, unsigned long int tim);
// fstWriterEmitValueChange
// file ./fst/fstapi.c line 2728
void fstWriterEmitValueChange(void *ctx, unsigned int handle, const void *val);
// fstWriterEmitVariableLengthValueChange
// file ./fst/fstapi.c line 2846
void fstWriterEmitVariableLengthValueChange(void *ctx, unsigned int handle, const void *val, unsigned int len);
// fstWriterFlushContext
// file ./fst/fstapi.c line 1841
void fstWriterFlushContext(void *ctx);
// fstWriterFlushContextPrivate
// file ./fst/fstapi.c line 1776
static void fstWriterFlushContextPrivate(void *ctx);
// fstWriterFlushContextPrivate1
// file ./fst/fstapi.c line 1756
static void * fstWriterFlushContextPrivate1(void *ctx);
// fstWriterFlushContextPrivate2
// file ./fst/fstapi.c line 1225
static void fstWriterFlushContextPrivate2(void *ctx);
// fstWriterFseeko
// file ./fst/fstapi.c line 797
static signed int fstWriterFseeko(struct fstWriterContext *xc, struct _IO_FILE *stream, signed long int offset, signed int whence);
// fstWriterGetDumpSizeLimitReached
// file ./fst/fstapi.c line 2498
signed int fstWriterGetDumpSizeLimitReached(void *ctx);
// fstWriterGetFseekFailed
// file ./fst/fstapi.c line 2510
signed int fstWriterGetFseekFailed(void *ctx);
// fstWriterSVarint
// file ./fst/fstapi.c line 662
static signed int fstWriterSVarint(struct _IO_FILE *handle, signed long int v);
// fstWriterSetAttrBegin
// file ./fst/fstapi.c line 2677
void fstWriterSetAttrBegin(void *ctx, enum fstAttrType attrtype, signed int subtype, const char *attrname, unsigned long int arg);
// fstWriterSetAttrDoubleArgGeneric
// file ./fst/fstapi.c line 2254
static void fstWriterSetAttrDoubleArgGeneric(void *ctx, signed int typ, unsigned long int arg1, unsigned long int arg2);
// fstWriterSetAttrEnd
// file ./fst/fstapi.c line 2713
void fstWriterSetAttrEnd(void *ctx);
// fstWriterSetAttrGeneric
// file ./fst/fstapi.c line 2271
static void fstWriterSetAttrGeneric(void *ctx, const char *comm, signed int typ, unsigned long int arg);
// fstWriterSetComment
// file ./fst/fstapi.c line 2359
void fstWriterSetComment(void *ctx, const char *comm);
// fstWriterSetDate
// file ./fst/fstapi.c line 2196
void fstWriterSetDate(void *ctx, const char *dat);
// fstWriterSetDumpSizeLimit
// file ./fst/fstapi.c line 2488
void fstWriterSetDumpSizeLimit(void *ctx, unsigned long int numbytes);
// fstWriterSetEnvVar
// file ./fst/fstapi.c line 2371
void fstWriterSetEnvVar(void *ctx, const char *envvar);
// fstWriterSetFileType
// file ./fst/fstapi.c line 2234
void fstWriterSetFileType(void *ctx, enum fstFileType filetype);
// fstWriterSetPackType
// file ./fst/fstapi.c line 2449
void fstWriterSetPackType(void *ctx, enum fstWriterPackType typ);
// fstWriterSetParallelMode
// file ./fst/fstapi.c line 2470
void fstWriterSetParallelMode(void *ctx, signed int enable);
// fstWriterSetRepackOnClose
// file ./fst/fstapi.c line 2460
void fstWriterSetRepackOnClose(void *ctx, signed int enable);
// fstWriterSetScope
// file ./fst/fstapi.c line 2636
void fstWriterSetScope(void *ctx, enum fstScopeType scopetype, const char *scopename, const char *scopecomp);
// fstWriterSetSourceInstantiationStem
// file ./fst/fstapi.c line 2353
void fstWriterSetSourceInstantiationStem(void *ctx, const char *path, unsigned int line, unsigned int use_realpath);
// fstWriterSetSourceStem
// file ./fst/fstapi.c line 2347
void fstWriterSetSourceStem(void *ctx, const char *path, unsigned int line, unsigned int use_realpath);
// fstWriterSetSourceStem_2
// file ./fst/fstapi.c line 2291
static void fstWriterSetSourceStem_2(void *ctx, const char *path, unsigned int line, unsigned int use_realpath, signed int typ);
// fstWriterSetTimescale
// file ./fst/fstapi.c line 2377
void fstWriterSetTimescale(void *ctx, signed int ts);
// fstWriterSetTimescaleFromString
// file ./fst/fstapi.c line 2391
void fstWriterSetTimescaleFromString(void *ctx, const char *s);
// fstWriterSetTimezero
// file ./fst/fstapi.c line 2435
void fstWriterSetTimezero(void *ctx, signed long int tim);
// fstWriterSetUpscope
// file ./fst/fstapi.c line 2665
void fstWriterSetUpscope(void *ctx);
// fstWriterSetValueList
// file ./fst/fstapi.c line 2365
void fstWriterSetValueList(void *ctx, const char *vl);
// fstWriterSetVersion
// file ./fst/fstapi.c line 2215
void fstWriterSetVersion(void *ctx, const char *vers);
// fstWriterUint32WithVarint32
// file ./fst/fstapi.c line 814
static unsigned int fstWriterUint32WithVarint32(struct fstWriterContext *xc, unsigned int *u, unsigned int v, const void *dbuf, unsigned int siz);
// fstWriterUint32WithVarint32AndLength
// file ./fst/fstapi.c line 841
static unsigned int fstWriterUint32WithVarint32AndLength(struct fstWriterContext *xc, unsigned int *u, unsigned int v, const void *dbuf, unsigned int siz);
// fstWriterUint64
// file ./fst/fstapi.c line 363
static signed int fstWriterUint64(struct _IO_FILE *handle, unsigned long int v);
// fstWriterVarint
// file ./fst/fstapi.c line 614
static signed int fstWriterVarint(struct _IO_FILE *handle, unsigned long int v);
// fstWritex
// file ./fst/fstapi.c line 3130
static void fstWritex(struct fstReaderContext *xc, void *v, signed int len);
// ftello
// file /usr/include/stdio.h line 778
extern signed long int ftello(struct _IO_FILE *);
// ftruncate
// file /usr/include/unistd.h line 1016
extern signed int ftruncate(signed int, signed long int);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gzclose
// file /usr/include/zlib.h line 1511
extern signed int gzclose(struct gzFile_s *);
// gzdopen
// file /usr/include/zlib.h line 1264
extern struct gzFile_s * gzdopen(signed int, const char *);
// gzread
// file /usr/include/zlib.h line 1313
extern signed int gzread(struct gzFile_s *, void *, unsigned int);
// gzwrite
// file /usr/include/zlib.h line 1341
extern signed int gzwrite(struct gzFile_s *, const void *, unsigned int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
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
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 57
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// print_help
// file fst2vcd.c line 34
void print_help(char *nam);
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
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$6 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$6 *, const union anonymous$7 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$6 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$6 *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// realpath
// file /usr/include/stdlib.h line 733
extern char * realpath(const char *, char *);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// setenv
// file /usr/include/stdlib.h line 584
extern signed int setenv(const char *, const char *, signed int);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tmpfile
// file /usr/include/stdio.h line 195
extern struct _IO_FILE * tmpfile(void);
// tmpfile_close
// file ./fst/fstapi.c line 235
static void tmpfile_close(struct _IO_FILE **f, char **nam);
// tmpfile_open
// file ./fst/fstapi.c line 225
static struct _IO_FILE * tmpfile_open(char **nam);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// uncompress
// file /usr/include/zlib.h line 1197
extern signed int uncompress(unsigned char *, unsigned long int *, const unsigned char *, unsigned long int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// unlink_fopen
// file ./fst/fstapi.c line 170
static struct _IO_FILE * unlink_fopen(const char *nam, const char *mode);
// unsetenv
// file /usr/include/stdlib.h line 588
extern signed int unsetenv(const char *);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous$11
{
  // externalDict
  unsigned char *externalDict;
  // extDictSize
  unsigned long int extDictSize;
  // prefixEnd
  unsigned char *prefixEnd;
  // prefixSize
  unsigned long int prefixSize;
};

struct anonymous$8
{
  // table
  signed long long int table[2052l];
};

struct anonymous$4
{
  // hashTable
  unsigned int hashTable[4096l];
  // currentOffset
  unsigned int currentOffset;
  // initCheck
  unsigned int initCheck;
  // dictionary
  const unsigned char *dictionary;
  // bufferStart
  const unsigned char *bufferStart;
  // dictSize
  unsigned int dictSize;
};

struct anonymous$10
{
  // table
  unsigned long long int table[4l];
};

union anonymous$7
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
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

union anonymous$6
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct fstHierScope
{
  // typ
  unsigned char typ;
  // name
  const char *name;
  // component
  const char *component;
  // name_length
  unsigned int name_length;
  // component_length
  unsigned int component_length;
};

struct fstHierVar
{
  // typ
  unsigned char typ;
  // direction
  unsigned char direction;
  // svt_workspace
  unsigned char svt_workspace;
  // sdt_workspace
  unsigned char sdt_workspace;
  // sxt_workspace
  unsigned int sxt_workspace;
  // name
  const char *name;
  // length
  unsigned int length;
  // handle
  unsigned int handle;
  // name_length
  unsigned int name_length;
  // is_alias
  unsigned int is_alias : 1;
};

struct fstHierAttr
{
  // typ
  unsigned char typ;
  // subtype
  unsigned char subtype;
  // name
  const char *name;
  // arg
  unsigned long int arg;
  // arg_from_name
  unsigned long int arg_from_name;
  // name_length
  unsigned int name_length;
};

union anonymous
{
  // scope
  struct fstHierScope scope;
  // var
  struct fstHierVar var;
  // attr
  struct fstHierAttr attr;
};

struct J_UDY_ERROR_STRUCT
{
  // je_Errno
  enum anonymous$9 je_Errno;
  // je_ErrID
  signed int je_ErrID;
  // je_reserved
  unsigned long int je_reserved[4l];
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

struct fstBlackoutChain
{
  // next
  struct fstBlackoutChain *next;
  // tim
  unsigned long int tim;
  // active
  unsigned int active : 1;
};

struct fstCurrHier
{
  // prev
  struct fstCurrHier *prev;
  // user_info
  void *user_info;
  // len
  signed int len;
};

struct fstHier
{
  // htyp
  unsigned char htyp;
  // u
  union anonymous u;
};

struct fstReaderContext
{
  // f
  struct _IO_FILE *f;
  // fh
  struct _IO_FILE *fh;
  // start_time
  unsigned long int start_time;
  // end_time
  unsigned long int end_time;
  // mem_used_by_writer
  unsigned long int mem_used_by_writer;
  // scope_count
  unsigned long int scope_count;
  // var_count
  unsigned long int var_count;
  // maxhandle
  unsigned int maxhandle;
  // num_alias
  unsigned long int num_alias;
  // vc_section_count
  unsigned long int vc_section_count;
  // signal_lens
  unsigned int *signal_lens;
  // signal_typs
  unsigned char *signal_typs;
  // process_mask
  unsigned char *process_mask;
  // longest_signal_value_len
  unsigned int longest_signal_value_len;
  // temp_signal_value_buf
  unsigned char *temp_signal_value_buf;
  // timescale
  signed char timescale;
  // filetype
  unsigned char filetype;
  // use_vcd_extensions
  unsigned int use_vcd_extensions : 1;
  // double_endian_match
  unsigned int double_endian_match : 1;
  // native_doubles_for_cb
  unsigned int native_doubles_for_cb : 1;
  // contains_geom_section
  unsigned int contains_geom_section : 1;
  // contains_hier_section
  unsigned int contains_hier_section : 1;
  // contains_hier_section_lz4duo
  unsigned int contains_hier_section_lz4duo : 1;
  // contains_hier_section_lz4
  unsigned int contains_hier_section_lz4 : 1;
  // limit_range_valid
  unsigned int limit_range_valid : 1;
  // version
  char version[129l];
  // date
  char date[120l];
  // timezero
  signed long int timezero;
  // filename
  char *filename;
  // filename_unpacked
  char *filename_unpacked;
  // hier_pos
  signed long int hier_pos;
  // num_blackouts
  unsigned int num_blackouts;
  // blackout_times
  unsigned long int *blackout_times;
  // blackout_activity
  unsigned char *blackout_activity;
  // limit_range_start
  unsigned long int limit_range_start;
  // limit_range_end
  unsigned long int limit_range_end;
  // rvat_data_valid
  unsigned int rvat_data_valid : 1;
  // rvat_time_table
  unsigned long int *rvat_time_table;
  // rvat_beg_tim
  unsigned long int rvat_beg_tim;
  // rvat_end_tim
  unsigned long int rvat_end_tim;
  // rvat_frame_data
  unsigned char *rvat_frame_data;
  // rvat_frame_maxhandle
  unsigned long int rvat_frame_maxhandle;
  // rvat_chain_table
  signed long int *rvat_chain_table;
  // rvat_chain_table_lengths
  unsigned int *rvat_chain_table_lengths;
  // rvat_vc_maxhandle
  unsigned long int rvat_vc_maxhandle;
  // rvat_vc_start
  signed long int rvat_vc_start;
  // rvat_sig_offs
  unsigned int *rvat_sig_offs;
  // rvat_chain_len
  unsigned int rvat_chain_len;
  // rvat_chain_mem
  unsigned char *rvat_chain_mem;
  // rvat_chain_facidx
  unsigned int rvat_chain_facidx;
  // rvat_chain_pos_tidx
  unsigned int rvat_chain_pos_tidx;
  // rvat_chain_pos_idx
  unsigned int rvat_chain_pos_idx;
  // rvat_chain_pos_time
  unsigned long int rvat_chain_pos_time;
  // rvat_chain_pos_valid
  unsigned int rvat_chain_pos_valid : 1;
  // hier
  struct fstHier hier;
  // curr_hier
  struct fstCurrHier *curr_hier;
  // current_handle
  unsigned int current_handle;
  // curr_flat_hier_nam
  char *curr_flat_hier_nam;
  // flat_hier_alloc_len
  signed int flat_hier_alloc_len;
  // do_rewind
  unsigned int do_rewind : 1;
  // str_scope_nam
  char str_scope_nam[513l];
  // str_scope_comp
  char str_scope_comp[513l];
  // fseek_failed
  unsigned int fseek_failed : 1;
  // writex_pos
  signed int writex_pos;
  // writex_fd
  signed int writex_fd;
  // writex_buf
  unsigned char writex_buf[65536l];
  // f_nam
  char *f_nam;
  // fh_nam
  char *fh_nam;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct fstWriterContext
{
  // handle
  struct _IO_FILE *handle;
  // hier_handle
  struct _IO_FILE *hier_handle;
  // geom_handle
  struct _IO_FILE *geom_handle;
  // valpos_handle
  struct _IO_FILE *valpos_handle;
  // curval_handle
  struct _IO_FILE *curval_handle;
  // tchn_handle
  struct _IO_FILE *tchn_handle;
  // vchg_mem
  unsigned char *vchg_mem;
  // hier_file_len
  signed long int hier_file_len;
  // valpos_mem
  unsigned int *valpos_mem;
  // curval_mem
  unsigned char *curval_mem;
  // filename
  char *filename;
  // maxhandle
  unsigned int maxhandle;
  // numsigs
  unsigned int numsigs;
  // maxvalpos
  unsigned int maxvalpos;
  // vc_emitted
  unsigned int vc_emitted : 1;
  // is_initial_time
  unsigned int is_initial_time : 1;
  // fourpack
  unsigned int fourpack : 1;
  // fastpack
  unsigned int fastpack : 1;
  // timezero
  signed long int timezero;
  // section_header_truncpos
  signed long int section_header_truncpos;
  // tchn_cnt
  unsigned int tchn_cnt;
  // tchn_idx
  unsigned int tchn_idx;
  // curtime
  unsigned long int curtime;
  // firsttime
  unsigned long int firsttime;
  // vchg_siz
  unsigned int vchg_siz;
  // vchg_alloc_siz
  unsigned int vchg_alloc_siz;
  // secnum
  unsigned int secnum;
  // section_start
  signed long int section_start;
  // numscopes
  unsigned int numscopes;
  // nan
  double nan;
  // blackout_head
  struct fstBlackoutChain *blackout_head;
  // blackout_curr
  struct fstBlackoutChain *blackout_curr;
  // num_blackouts
  unsigned int num_blackouts;
  // dump_size_limit
  unsigned long int dump_size_limit;
  // filetype
  unsigned char filetype;
  // compress_hier
  unsigned int compress_hier : 1;
  // repack_on_close
  unsigned int repack_on_close : 1;
  // skip_writing_section_hdr
  unsigned int skip_writing_section_hdr : 1;
  // size_limit_locked
  unsigned int size_limit_locked : 1;
  // section_header_only
  unsigned int section_header_only : 1;
  // flush_context_pending
  unsigned int flush_context_pending : 1;
  // parallel_enabled
  unsigned int parallel_enabled : 1;
  // parallel_was_enabled
  unsigned int parallel_was_enabled : 1;
  // already_in_flush
  unsigned char already_in_flush;
  // already_in_close
  unsigned char already_in_close;
  // mutex
  union anonymous$6 mutex;
  // thread
  unsigned long int thread;
  // thread_attr
  union pthread_attr_t thread_attr;
  // xc_parent
  struct fstWriterContext *xc_parent;
  // fst_orig_break_size
  unsigned long int fst_orig_break_size;
  // fst_orig_break_add_size
  unsigned long int fst_orig_break_add_size;
  // fst_break_size
  unsigned long int fst_break_size;
  // fst_break_add_size
  unsigned long int fst_break_add_size;
  // fst_huge_break_size
  unsigned long int fst_huge_break_size;
  // next_huge_break
  unsigned int next_huge_break;
  // path_array
  void *path_array;
  // path_array_count
  unsigned int path_array_count;
  // fseek_failed
  unsigned int fseek_failed : 1;
  // geom_handle_nam
  char *geom_handle_nam;
  // valpos_handle_nam
  char *valpos_handle_nam;
  // curval_handle_nam
  char *curval_handle_nam;
  // tchn_handle_nam
  char *tchn_handle_nam;
};

struct gzFile_s
{
  // have
  unsigned int have;
  // next
  unsigned char *next;
  // pos
  signed long int pos;
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


// LZ4_64Klimit
// file ./fst/lz4.c line 421
static const signed int LZ4_64Klimit = 64 * (1 << 10) + ((8 + 4) - 1);
// LZ4_minLength
// file ./fst/lz4.c line 303
static const signed int LZ4_minLength = 8 + 4 + 1;
// LZ4_skipTrigger
// file ./fst/lz4.c line 422
static const unsigned int LZ4_skipTrigger = (const unsigned int)6;
// arraytypes
// file ./fst/fstapi.c line 2997
static const char *arraytypes[4l] = { "none", "unpacked", "packed", "sparse" };
// attrtypes
// file ./fst/fstapi.c line 2993
static const char *attrtypes[4l] = { "misc", "array", "enum", "class" };
// enumvaluetypes
// file ./fst/fstapi.c line 3001
static const char *enumvaluetypes[14l] = { "integer", "bit", "logic", "int", "shortint", "longint", "byte", "unsigned_integer", "unsigned_bit", "unsigned_logic", "unsigned_int", "unsigned_shortint", "unsigned_longint", "unsigned_byte" };
// modtypes
// file ./fst/fstapi.c line 2988
static const char *modtypes[22l] = { "module", "task", "function", "begin", "fork", "generate", "struct", "union", "class", "interface", "package", "program", "vhdl_architecture", "vhdl_procedure", "vhdl_function", "vhdl_record", "vhdl_process", "vhdl_block", "vhdl_for_generate", "vhdl_if_generate", "vhdl_generate", "vhdl_package" };
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// packtypes
// file ./fst/fstapi.c line 3006
static const char *packtypes[4l] = { "none", "unpacked", "packed", "tagged_packed" };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// vartypes
// file ./fst/fstapi.c line 2979
static const char *vartypes[30l] = { "event", "integer", "parameter", "real", "real_parameter", "reg", "supply0", "supply1", "time", "tri", "triand", "trior", "trireg", "tri0", "tri1", "wand", "wire", "wor", "port", "sparray", "realtime", "string", "bit", "logic", "int", "shortint", "longint", "byte", "enum", "shortreal" };

// LZ4_64bits
// file ./fst/lz4.c line 178
static unsigned int LZ4_64bits(void)
{
  return (unsigned int)(sizeof(void *) /*8ul*/  == (unsigned long int)8);
}

// LZ4_NbCommonBytes
// file ./fst/lz4.c line 327
static unsigned int LZ4_NbCommonBytes(unsigned long int val)
{
  unsigned int return_value_LZ4_isLittleEndian$7;
  return_value_LZ4_isLittleEndian$7=LZ4_isLittleEndian();
  if(!(return_value_LZ4_isLittleEndian$7 == 0u))
  {
    unsigned int return_value_LZ4_64bits$3;
    return_value_LZ4_64bits$3=LZ4_64bits();
    if(!(return_value_LZ4_64bits$3 == 0u))
    {
      signed int return_value___builtin_ctzll$1;
      return_value___builtin_ctzll$1=__builtin_ctzll((unsigned long int)val);
      return (unsigned int)(return_value___builtin_ctzll$1 >> 3);
    }

    else
    {
      signed int return_value___builtin_ctz$2;
      return_value___builtin_ctz$2=__builtin_ctz((unsigned int)val);
      return (unsigned int)(return_value___builtin_ctz$2 >> 3);
    }
  }

  else
  {
    unsigned int return_value_LZ4_64bits$6;
    return_value_LZ4_64bits$6=LZ4_64bits();
    if(!(return_value_LZ4_64bits$6 == 0u))
    {
      signed int return_value___builtin_clzll$4;
      return_value___builtin_clzll$4=__builtin_clzll(val);
      return (unsigned int)(return_value___builtin_clzll$4 >> 3);
    }

    else
    {
      signed int return_value___builtin_clz$5;
      return_value___builtin_clz$5=__builtin_clz((unsigned int)val);
      return (unsigned int)(return_value___builtin_clz$5 >> 3);
    }
  }
}

// LZ4_compress
// file ./fst/lz4.c line 710
signed int LZ4_compress(const char *source, char *dest, signed int inputSize)
{
  unsigned long int ctx[2052l] = { (unsigned long int)0, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul };
  signed int result;
  unsigned int return_value_LZ4_64bits$1;
  if(!(inputSize >= LZ4_64Klimit))
    result=LZ4_compress_generic((void *)ctx, source, dest, inputSize, 0, (enum anonymous$5)notLimited, (enum anonymous$1)byU16, (enum anonymous$2)noDict, (enum anonymous$3)noDictIssue);

  else
  {
    return_value_LZ4_64bits$1=LZ4_64bits();
    result=LZ4_compress_generic((void *)ctx, source, dest, inputSize, 0, (enum anonymous$5)notLimited, (enum anonymous$1)(return_value_LZ4_64bits$1 != 0u ? byU32 : byPtr), (enum anonymous$2)noDict, (enum anonymous$3)noDictIssue);
  }
  return result;
}

// LZ4_compressBound
// file ./fst/lz4.c line 429
signed int LZ4_compressBound(signed int isize)
{
  return (unsigned int)isize > (unsigned int)0x7E000000 ? 0 : isize + isize / 255 + 16;
}

// LZ4_compress_continue
// file ./fst/lz4.c line 883
signed int LZ4_compress_continue(struct anonymous$8 *LZ4_stream, const char *source, char *dest, signed int inputSize)
{
  signed int return_value_LZ4_compress_continue_generic$1;
  return_value_LZ4_compress_continue_generic$1=LZ4_compress_continue_generic((void *)LZ4_stream, source, dest, inputSize, 0, (enum anonymous$5)notLimited);
  return return_value_LZ4_compress_continue_generic$1;
}

// LZ4_compress_continue_generic
// file ./fst/lz4.c line 833
static inline signed int LZ4_compress_continue_generic(void *LZ4_stream, const char *source, char *dest, signed int inputSize, signed int maxOutputSize, enum anonymous$5 limit)
{
  struct anonymous$4 *streamPtr = (struct anonymous$4 *)LZ4_stream;
  const unsigned char * const dictEnd = streamPtr->dictionary + (signed long int)streamPtr->dictSize;
  const unsigned char *smallest = (const unsigned char *)source;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  if(!(streamPtr->initCheck == 0u))
    return 0;

  else
  {
    if(streamPtr->dictSize >= 1u)
    {
      if(!(dictEnd >= smallest))
        smallest = dictEnd;

    }

    LZ4_renormDictT(streamPtr, smallest);
    const unsigned char *sourceEnd = (const unsigned char *)source + (signed long int)inputSize;
    if(!(streamPtr->dictionary >= sourceEnd))
    {
      if(!(sourceEnd >= dictEnd))
      {
        streamPtr->dictSize = (unsigned int)(dictEnd - sourceEnd);
        if(streamPtr->dictSize >= 65537u)
          streamPtr->dictSize = (unsigned int)(64 * (1 << 10));

        if(!(streamPtr->dictSize >= 4u))
          streamPtr->dictSize = (unsigned int)0;

        streamPtr->dictionary = dictEnd - (signed long int)streamPtr->dictSize;
      }

    }

    if(dictEnd == (const unsigned char *)source)
    {
      signed int result;
      if(!(streamPtr->dictSize >= 65536u))
        tmp_if_expr$1 = streamPtr->dictSize < streamPtr->currentOffset ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(tmp_if_expr$1)
        result=LZ4_compress_generic(LZ4_stream, source, dest, inputSize, maxOutputSize, limit, (enum anonymous$1)byU32, (enum anonymous$2)withPrefix64k, (enum anonymous$3)dictSmall);

      else
        result=LZ4_compress_generic(LZ4_stream, source, dest, inputSize, maxOutputSize, limit, (enum anonymous$1)byU32, (enum anonymous$2)withPrefix64k, (enum anonymous$3)noDictIssue);
      streamPtr->dictSize = streamPtr->dictSize + (unsigned int)inputSize;
      streamPtr->currentOffset = streamPtr->currentOffset + (unsigned int)inputSize;
      return result;
    }

    signed int LZ4_compress_continue_generic$$1$$3$$result;
    if(!(streamPtr->dictSize >= 65536u))
      tmp_if_expr$2 = streamPtr->dictSize < streamPtr->currentOffset ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
      LZ4_compress_continue_generic$$1$$3$$result=LZ4_compress_generic(LZ4_stream, source, dest, inputSize, maxOutputSize, limit, (enum anonymous$1)byU32, (enum anonymous$2)usingExtDict, (enum anonymous$3)dictSmall);

    else
      LZ4_compress_continue_generic$$1$$3$$result=LZ4_compress_generic(LZ4_stream, source, dest, inputSize, maxOutputSize, limit, (enum anonymous$1)byU32, (enum anonymous$2)usingExtDict, (enum anonymous$3)noDictIssue);
    streamPtr->dictionary = (const unsigned char *)source;
    streamPtr->dictSize = (unsigned int)inputSize;
    streamPtr->currentOffset = streamPtr->currentOffset + (unsigned int)inputSize;
    return LZ4_compress_continue_generic$$1$$3$$result;
  }
}

// LZ4_compress_forceExtDict
// file ./fst/lz4.c line 895
signed int LZ4_compress_forceExtDict(struct anonymous$8 *LZ4_dict, const char *source, char *dest, signed int inputSize)
{
  struct anonymous$4 *streamPtr = (struct anonymous$4 *)LZ4_dict;
  signed int result;
  const unsigned char * const dictEnd = streamPtr->dictionary + (signed long int)streamPtr->dictSize;
  const unsigned char *smallest = dictEnd;
  if(!((const unsigned char *)source >= smallest))
    smallest = (const unsigned char *)source;

  LZ4_renormDictT((struct anonymous$4 *)LZ4_dict, smallest);
  result=LZ4_compress_generic((void *)LZ4_dict, source, dest, inputSize, 0, (enum anonymous$5)notLimited, (enum anonymous$1)byU32, (enum anonymous$2)usingExtDict, (enum anonymous$3)noDictIssue);
  streamPtr->dictionary = (const unsigned char *)source;
  streamPtr->dictSize = (unsigned int)inputSize;
  streamPtr->currentOffset = streamPtr->currentOffset + (unsigned int)inputSize;
  return result;
}

// LZ4_compress_generic
// file ./fst/lz4.c line 498
static signed int LZ4_compress_generic(void *ctx, const char *source, char *dest, signed int inputSize, signed int maxOutputSize, enum anonymous$5 outputLimited, enum anonymous$1 tableType, enum anonymous$2 dict, enum anonymous$3 dictIssue)
{
  struct anonymous$4 * const dictPtr = (struct anonymous$4 *)ctx;
  const unsigned char *ip = (const unsigned char *)source;
  const unsigned char *base;
  const unsigned char *lowLimit;
  const unsigned char * const lowRefLimit = ip - (signed long int)dictPtr->dictSize;
  const unsigned char * const dictionary = dictPtr->dictionary;
  const unsigned char * const dictEnd = dictionary + (signed long int)dictPtr->dictSize;
  const unsigned long int dictDelta = (const unsigned long int)(dictEnd - (const unsigned char *)source);
  const unsigned char *anchor = (const unsigned char *)source;
  const unsigned char * const iend = ip + (signed long int)inputSize;
  const unsigned char * const mflimit = iend - (signed long int)(8 + 4);
  const unsigned char * const matchlimit = iend - (signed long int)5;
  unsigned char *op = (unsigned char *)dest;
  unsigned char * const olimit = op + (signed long int)maxOutputSize;
  unsigned int forwardH;
  unsigned long int refDelta = (unsigned long int)0;
  unsigned int tmp_post$4;
  _Bool tmp_if_expr$3;
  unsigned int return_value_LZ4_read32$1;
  unsigned int return_value_LZ4_read32$2;
  unsigned char *tmp_post$5;
  unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  unsigned char *tmp_post$8;
  unsigned char *tmp_post$9;
  unsigned char *tmp_post$10;
  unsigned char *tmp_post$11;
  unsigned int return_value_LZ4_read32$13;
  unsigned int return_value_LZ4_read32$14;
  unsigned char *tmp_post$12;
  unsigned char *tmp_post$15;
  unsigned char *tmp_post$16;
  unsigned char *tmp_post$17;
  unsigned char *tmp_post$18;
  if((unsigned int)inputSize >= 2113929217u)
    return 0;

  else
  {
    switch((signed int)dict)
    {
      case noDict:
      {
        base = (const unsigned char *)source;
        lowLimit = (const unsigned char *)source;
        break;
      }
      case withPrefix64k:
      {
        base = (const unsigned char *)source - (signed long int)dictPtr->currentOffset;
        lowLimit = (const unsigned char *)source - (signed long int)dictPtr->dictSize;
        break;
      }
      case usingExtDict:
      {
        base = (const unsigned char *)source - (signed long int)dictPtr->currentOffset;
        lowLimit = (const unsigned char *)source;
      }
    }
    if((signed int)tableType == byU16 && inputSize >= LZ4_64Klimit)
      return 0;

    else
    {
      if(inputSize >= LZ4_minLength)
      {
        LZ4_putPosition(ip, ctx, tableType, base);
        ip = ip + 1l;
        forwardH=LZ4_hashPosition(ip, tableType);
        do
        {
          const unsigned char *match;
          unsigned char *token;
          const unsigned char *forwardIp = ip;
          unsigned int step = (unsigned int)1;
          unsigned int searchMatchNb = 1U << LZ4_skipTrigger;
          do
          {
            unsigned int h = forwardH;
            ip = forwardIp;
            forwardIp = forwardIp + (signed long int)step;
            tmp_post$4 = searchMatchNb;
            searchMatchNb = searchMatchNb + 1u;
            step = tmp_post$4 >> LZ4_skipTrigger;
            if(!(mflimit >= forwardIp))
              goto _last_literals;

            match=LZ4_getPositionOnHash(h, ctx, tableType, base);
            if((signed int)dict == usingExtDict)
            {
              if(!(match >= (const unsigned char *)source))
              {
                refDelta = dictDelta;
                lowLimit = dictionary;
              }

              else
              {
                refDelta = (unsigned long int)0;
                lowLimit = (const unsigned char *)source;
              }
            }

            forwardH=LZ4_hashPosition(forwardIp, tableType);
            LZ4_putPositionOnHash(ip, h, ctx, tableType, base);
            if((signed int)dictIssue == dictSmall && !(match >= lowRefLimit) || !((signed int)tableType == byU16) && !(match + 65535l >= ip))
              tmp_if_expr$3 = (_Bool)1;

            else
            {
              return_value_LZ4_read32$1=LZ4_read32((const void *)(match + (signed long int)refDelta));
              return_value_LZ4_read32$2=LZ4_read32((const void *)ip);
              tmp_if_expr$3 = return_value_LZ4_read32$1 != return_value_LZ4_read32$2 ? (_Bool)1 : (_Bool)0;
            }
          }
          while(tmp_if_expr$3);
          for( ; !(anchor >= ip); match = match - 1l)
          {
            if(lowLimit >= match + (signed long int)refDelta)
              break;

            if(!(ip[-1l] == match[-1l + (signed long int)refDelta]))
              break;

            ip = ip - 1l;
          }
          unsigned int litLength = (unsigned int)(ip - anchor);
          tmp_post$5 = op;
          op = op + 1l;
          token = tmp_post$5;
          if(!(olimit >= op + (signed long int)litLength + 8l + (signed long int)(litLength / 255u)) && !(outputLimited == /*enum*/notLimited))
            return 0;

          if(litLength >= 15u)
          {
            signed int len = (signed int)((unsigned int)(signed int)litLength - ((1U << 8 - 4) - (unsigned int)1));
            *token = (unsigned char)((1U << 8 - 4) - (unsigned int)1 << 4);
            for( ; len >= 255; len = len - 255)
            {
              tmp_post$6 = op;
              op = op + 1l;
              *tmp_post$6 = (unsigned char)255;
            }
            tmp_post$7 = op;
            op = op + 1l;
            *tmp_post$7 = (unsigned char)len;
          }

          else
            *token = (unsigned char)(litLength << 4);
          LZ4_wildCopy((void *)op, (const void *)anchor, (void *)(op + (signed long int)litLength));
          op = op + (signed long int)litLength;
          do
          {

          _next_match:
            ;
            LZ4_writeLE16((void *)op, (unsigned short int)(ip - match));
            op = op + (signed long int)2;
            unsigned int matchLength;
            if(lowLimit == dictionary && (signed int)dict == usingExtDict)
            {
              const unsigned char *limit;
              match = match + (signed long int)refDelta;
              limit = ip + (dictEnd - match);
              if(!(matchlimit >= limit))
                limit = matchlimit;

              matchLength=LZ4_count(ip + (signed long int)4, match + (signed long int)4, limit);
              ip = ip + (signed long int)((unsigned int)4 + matchLength);
              if(ip == limit)
              {
                unsigned int more;
                more=LZ4_count(ip, (const unsigned char *)source, matchlimit);
                matchLength = matchLength + more;
                ip = ip + (signed long int)more;
              }

            }

            else
            {
              matchLength=LZ4_count(ip + (signed long int)4, match + (signed long int)4, matchlimit);
              ip = ip + (signed long int)((unsigned int)4 + matchLength);
            }
            if(!(olimit >= op + 6l + (signed long int)(matchLength >> 8)) && !(outputLimited == /*enum*/notLimited))
              return 0;

            if(matchLength >= 15u)
            {
              *token = *token + (unsigned char)((1U << 4) - (unsigned int)1);
              matchLength = matchLength - ((1U << 4) - (unsigned int)1);
              for( ; matchLength >= 510u; matchLength = matchLength - (unsigned int)510)
              {
                tmp_post$8 = op;
                op = op + 1l;
                *tmp_post$8 = (unsigned char)255;
                tmp_post$9 = op;
                op = op + 1l;
                *tmp_post$9 = (unsigned char)255;
              }
              if(matchLength >= 255u)
              {
                matchLength = matchLength - (unsigned int)255;
                tmp_post$10 = op;
                op = op + 1l;
                *tmp_post$10 = (unsigned char)255;
              }

              tmp_post$11 = op;
              op = op + 1l;
              *tmp_post$11 = (unsigned char)matchLength;
            }

            else
              *token = *token + (unsigned char)matchLength;
            anchor = ip;
            if(!(mflimit >= ip))
              goto _last_literals;

            LZ4_putPosition(ip - (signed long int)2, ctx, tableType, base);
            match=LZ4_getPosition(ip, ctx, tableType, base);
            if((signed int)dict == usingExtDict)
            {
              if(!(match >= (const unsigned char *)source))
              {
                refDelta = dictDelta;
                lowLimit = dictionary;
              }

              else
              {
                refDelta = (unsigned long int)0;
                lowLimit = (const unsigned char *)source;
              }
            }

            LZ4_putPosition(ip, ctx, tableType, base);
            if(!(match + 65535l >= ip) || !(match >= lowRefLimit) && (signed int)dictIssue == dictSmall)
              break;

            return_value_LZ4_read32$13=LZ4_read32((const void *)(match + (signed long int)refDelta));
            return_value_LZ4_read32$14=LZ4_read32((const void *)ip);
            if(!(return_value_LZ4_read32$13 == return_value_LZ4_read32$14))
              break;

            tmp_post$12 = op;
            op = op + 1l;
            token = tmp_post$12;
            *token = (unsigned char)0;
          }
          while((_Bool)1);
          ip = ip + 1l;
          forwardH=LZ4_hashPosition(ip, tableType);
        }
        while((_Bool)1);
      }


    _last_literals:
      ;
      signed int lastRun = (signed int)(iend - anchor);
      if(!((signed long int)(unsigned int)maxOutputSize >= ((char *)op - dest) + 1l + (signed long int)((255u + (unsigned int)lastRun + 4294967281u) / 255u) + (signed long int)lastRun) && !(outputLimited == /*enum*/notLimited))
        return 0;

      else
      {
        if(lastRun >= 15)
        {
          tmp_post$15 = op;
          op = op + 1l;
          *tmp_post$15 = (unsigned char)((1U << 8 - 4) - (unsigned int)1 << 4);
          lastRun = lastRun - (signed int)((1U << 8 - 4) - (unsigned int)1);
          for( ; lastRun >= 255; lastRun = lastRun - 255)
          {
            tmp_post$16 = op;
            op = op + 1l;
            *tmp_post$16 = (unsigned char)255;
          }
          tmp_post$17 = op;
          op = op + 1l;
          *tmp_post$17 = (unsigned char)lastRun;
        }

        else
        {
          tmp_post$18 = op;
          op = op + 1l;
          *tmp_post$18 = (unsigned char)(lastRun << 4);
        }
        memcpy((void *)op, (const void *)anchor, (unsigned long int)(iend - anchor));
        op = op + (iend - anchor);
        return (signed int)((char *)op - dest);
      }
    }
  }
}

// LZ4_compress_limitedOutput
// file ./fst/lz4.c line 730
signed int LZ4_compress_limitedOutput(const char *source, char *dest, signed int inputSize, signed int maxOutputSize)
{
  unsigned long int ctx[2052l] = { (unsigned long int)0, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul, 0ul };
  signed int result;
  unsigned int return_value_LZ4_64bits$1;
  if(!(inputSize >= LZ4_64Klimit))
    result=LZ4_compress_generic((void *)ctx, source, dest, inputSize, maxOutputSize, (enum anonymous$5)limitedOutput, (enum anonymous$1)byU16, (enum anonymous$2)noDict, (enum anonymous$3)noDictIssue);

  else
  {
    return_value_LZ4_64bits$1=LZ4_64bits();
    result=LZ4_compress_generic((void *)ctx, source, dest, inputSize, maxOutputSize, (enum anonymous$5)limitedOutput, (enum anonymous$1)(return_value_LZ4_64bits$1 != 0u ? byU32 : byPtr), (enum anonymous$2)noDict, (enum anonymous$3)noDictIssue);
  }
  return result;
}

// LZ4_compress_limitedOutput_continue
// file ./fst/lz4.c line 888
signed int LZ4_compress_limitedOutput_continue(struct anonymous$8 *LZ4_stream, const char *source, char *dest, signed int inputSize, signed int maxOutputSize)
{
  signed int return_value_LZ4_compress_continue_generic$1;
  return_value_LZ4_compress_continue_generic$1=LZ4_compress_continue_generic((void *)LZ4_stream, source, dest, inputSize, maxOutputSize, (enum anonymous$5)limitedOutput);
  return return_value_LZ4_compress_continue_generic$1;
}

// LZ4_compress_limitedOutput_withState
// file ./fst/lz4.c line 1343
signed int LZ4_compress_limitedOutput_withState(void *state, const char *source, char *dest, signed int inputSize, signed int maxOutputSize)
{
  signed int return_value_LZ4_compress_generic$1;
  unsigned int return_value_LZ4_64bits$2;
  signed int return_value_LZ4_compress_generic$3;
  if(!((3ul & (unsigned long int)state) == 0ul))
    return 0;

  else
  {
    memset(state, 0, (unsigned long int)((1 << 14 - 3) + 4) * sizeof(signed long long int) /*8ul*/ );
    if(!(inputSize >= LZ4_64Klimit))
    {
      return_value_LZ4_compress_generic$1=LZ4_compress_generic(state, source, dest, inputSize, maxOutputSize, (enum anonymous$5)limitedOutput, (enum anonymous$1)byU16, (enum anonymous$2)noDict, (enum anonymous$3)noDictIssue);
      return return_value_LZ4_compress_generic$1;
    }

    else
    {
      return_value_LZ4_64bits$2=LZ4_64bits();
      return_value_LZ4_compress_generic$3=LZ4_compress_generic(state, source, dest, inputSize, maxOutputSize, (enum anonymous$5)limitedOutput, (enum anonymous$1)(return_value_LZ4_64bits$2 != 0u ? byU32 : byPtr), (enum anonymous$2)noDict, (enum anonymous$3)noDictIssue);
      return return_value_LZ4_compress_generic$3;
    }
  }
}

// LZ4_compress_withState
// file ./fst/lz4.c line 1332
signed int LZ4_compress_withState(void *state, const char *source, char *dest, signed int inputSize)
{
  signed int return_value_LZ4_compress_generic$1;
  unsigned int return_value_LZ4_64bits$2;
  signed int return_value_LZ4_compress_generic$3;
  if(!((3ul & (unsigned long int)state) == 0ul))
    return 0;

  else
  {
    memset(state, 0, (unsigned long int)((1 << 14 - 3) + 4) * sizeof(signed long long int) /*8ul*/ );
    if(!(inputSize >= LZ4_64Klimit))
    {
      return_value_LZ4_compress_generic$1=LZ4_compress_generic(state, source, dest, inputSize, 0, (enum anonymous$5)notLimited, (enum anonymous$1)byU16, (enum anonymous$2)noDict, (enum anonymous$3)noDictIssue);
      return return_value_LZ4_compress_generic$1;
    }

    else
    {
      return_value_LZ4_64bits$2=LZ4_64bits();
      return_value_LZ4_compress_generic$3=LZ4_compress_generic(state, source, dest, inputSize, 0, (enum anonymous$5)notLimited, (enum anonymous$1)(return_value_LZ4_64bits$2 != 0u ? byU32 : byPtr), (enum anonymous$2)noDict, (enum anonymous$3)noDictIssue);
      return return_value_LZ4_compress_generic$3;
    }
  }
}

// LZ4_copy4
// file ./fst/lz4.c line 259
static void LZ4_copy4(void *dstPtr, const void *srcPtr)
{
  *((unsigned int *)dstPtr) = *((unsigned int *)srcPtr);
}

// LZ4_copy8
// file ./fst/lz4.c line 269
static void LZ4_copy8(void *dstPtr, const void *srcPtr)
{
  {
    unsigned int return_value_LZ4_64bits$1;
    return_value_LZ4_64bits$1=LZ4_64bits();
    if(!(return_value_LZ4_64bits$1 == 0u))
      *((unsigned long int *)dstPtr) = *((unsigned long int *)srcPtr);

    else
    {
      ((unsigned int *)dstPtr)[(signed long int)0] = ((unsigned int *)srcPtr)[(signed long int)0];
      ((unsigned int *)dstPtr)[(signed long int)1] = ((unsigned int *)srcPtr)[(signed long int)1];
    }
    goto __CPROVER_DUMP_L4;
  }
  memcpy(dstPtr, srcPtr, (unsigned long int)8);

__CPROVER_DUMP_L4:
  ;
}

// LZ4_count
// file ./fst/lz4.c line 394
static unsigned int LZ4_count(const unsigned char *pIn, const unsigned char *pMatch, const unsigned char *pInLimit)
{
  const unsigned char * const pStart = pIn;
  while(!(pIn >= pInLimit + -7l))
  {
    unsigned long int diff;
    unsigned long int return_value_LZ4_read_ARCH$1;
    return_value_LZ4_read_ARCH$1=LZ4_read_ARCH((const void *)pMatch);
    unsigned long int return_value_LZ4_read_ARCH$2;
    return_value_LZ4_read_ARCH$2=LZ4_read_ARCH((const void *)pIn);
    diff = return_value_LZ4_read_ARCH$1 ^ return_value_LZ4_read_ARCH$2;
    if(diff == 0ul)
    {
      pIn = pIn + (signed long int)sizeof(unsigned long int) /*8ul*/ ;
      pMatch = pMatch + (signed long int)sizeof(unsigned long int) /*8ul*/ ;
    }

    else
    {
      unsigned int return_value_LZ4_NbCommonBytes$3;
      return_value_LZ4_NbCommonBytes$3=LZ4_NbCommonBytes(diff);
      pIn = pIn + (signed long int)return_value_LZ4_NbCommonBytes$3;
      return (unsigned int)(pIn - pStart);
    }
  }
  unsigned int return_value_LZ4_64bits$6;
  return_value_LZ4_64bits$6=LZ4_64bits();
  unsigned int return_value_LZ4_read32$4;
  unsigned int return_value_LZ4_read32$5;
  if(!(return_value_LZ4_64bits$6 == 0u))
  {
    if(!(pIn >= pInLimit + -3l))
    {
      return_value_LZ4_read32$4=LZ4_read32((const void *)pMatch);
      return_value_LZ4_read32$5=LZ4_read32((const void *)pIn);
      if(return_value_LZ4_read32$4 == return_value_LZ4_read32$5)
      {
        pIn = pIn + (signed long int)4;
        pMatch = pMatch + (signed long int)4;
      }

    }

  }

  unsigned short int return_value_LZ4_read16$7;
  unsigned short int return_value_LZ4_read16$8;
  if(!(pIn >= pInLimit + -1l))
  {
    return_value_LZ4_read16$7=LZ4_read16((const void *)pMatch);
    return_value_LZ4_read16$8=LZ4_read16((const void *)pIn);
    if(return_value_LZ4_read16$7 == return_value_LZ4_read16$8)
    {
      pIn = pIn + (signed long int)2;
      pMatch = pMatch + (signed long int)2;
    }

  }

  if(!(pIn >= pInLimit))
  {
    if(*pMatch == *pIn)
      pIn = pIn + 1l;

  }

  return (unsigned int)(pIn - pStart);
}

// LZ4_create
// file ./fst/lz4.c line 1314
void * LZ4_create(const char *inputBuffer)
{
  void *lz4ds;
  lz4ds=calloc((unsigned long int)8, (unsigned long int)((1 << 14 - 3) + 4));
  LZ4_init((struct anonymous$4 *)lz4ds, (const unsigned char *)inputBuffer);
  return lz4ds;
}

// LZ4_createStream
// file ./fst/lz4.c line 765
struct anonymous$8 * LZ4_createStream(void)
{
  struct anonymous$8 *lz4s;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)8, (unsigned long int)((1 << 14 - 3) + 4));
  lz4s = (struct anonymous$8 *)return_value_calloc$1;
  LZ4_resetStream(lz4s);
  return lz4s;
}

// LZ4_createStreamDecode
// file ./fst/lz4.c line 1152
struct anonymous$10 * LZ4_createStreamDecode(void)
{
  struct anonymous$10 *lz4s;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc(sizeof(unsigned long int) /*8ul*/ , (unsigned long int)4);
  lz4s = (struct anonymous$10 *)return_value_calloc$1;
  return lz4s;
}

// LZ4_decompress_fast
// file ./fst/lz4.c line 1131
signed int LZ4_decompress_fast(const char *source, char *dest, signed int originalSize)
{
  signed int return_value_LZ4_decompress_generic$1;
  return_value_LZ4_decompress_generic$1=LZ4_decompress_generic(source, dest, 0, originalSize, 0, 0, 0, withPrefix64k, (unsigned char *)(dest - (signed long int)(64 * (1 << 10))), (const unsigned char *)(void *)0, (const unsigned long int)(64 * (1 << 10)));
  return return_value_LZ4_decompress_generic$1;
}

// LZ4_decompress_fast_continue
// file ./fst/lz4.c line 1217
signed int LZ4_decompress_fast_continue(struct anonymous$10 *LZ4_streamDecode, const char *source, char *dest, signed int originalSize)
{
  struct anonymous$11 *lz4sd = (struct anonymous$11 *)LZ4_streamDecode;
  signed int result;
  if(lz4sd->prefixEnd == (unsigned char *)dest)
  {
    result=LZ4_decompress_generic(source, dest, 0, originalSize, 0, 0, 0, usingExtDict, lz4sd->prefixEnd - (signed long int)lz4sd->prefixSize, lz4sd->externalDict, lz4sd->extDictSize);
    if(!(result >= 1))
      return result;

    lz4sd->prefixSize = lz4sd->prefixSize + (unsigned long int)originalSize;
    lz4sd->prefixEnd = lz4sd->prefixEnd + (signed long int)originalSize;
  }

  else
  {
    lz4sd->extDictSize = lz4sd->prefixSize;
    lz4sd->externalDict = (unsigned char *)dest - (signed long int)lz4sd->extDictSize;
    result=LZ4_decompress_generic(source, dest, 0, originalSize, 0, 0, 0, usingExtDict, (unsigned char *)dest, lz4sd->externalDict, lz4sd->extDictSize);
    if(!(result >= 1))
      return result;

    lz4sd->prefixSize = (unsigned long int)originalSize;
    lz4sd->prefixEnd = (unsigned char *)dest + (signed long int)originalSize;
  }
  return result;
}

// LZ4_decompress_fast_usingDict
// file ./fst/lz4.c line 1272
signed int LZ4_decompress_fast_usingDict(const char *source, char *dest, signed int originalSize, const char *dictStart, signed int dictSize)
{
  signed int return_value_LZ4_decompress_usingDict_generic$1;
  return_value_LZ4_decompress_usingDict_generic$1=LZ4_decompress_usingDict_generic(source, dest, 0, originalSize, 0, dictStart, dictSize);
  return return_value_LZ4_decompress_usingDict_generic$1;
}

// LZ4_decompress_fast_withPrefix64k
// file ./fst/lz4.c line 1361
signed int LZ4_decompress_fast_withPrefix64k(const char *source, char *dest, signed int originalSize)
{
  signed int return_value_LZ4_decompress_generic$1;
  return_value_LZ4_decompress_generic$1=LZ4_decompress_generic(source, dest, 0, originalSize, 0, 0, 0, withPrefix64k, (unsigned char *)dest - (signed long int)(64 * (1 << 10)), (const unsigned char *)(void *)0, (const unsigned long int)(64 * (1 << 10)));
  return return_value_LZ4_decompress_generic$1;
}

// LZ4_decompress_generic
// file ./fst/lz4.c line 942
static inline signed int LZ4_decompress_generic(const char * const source, char * const dest, signed int inputSize, signed int outputSize, signed int endOnInput, signed int partialDecoding, signed int targetOutputSize, signed int dict, const unsigned char * const lowPrefix, const unsigned char * const dictStart, const unsigned long int dictSize)
{
  const unsigned char * restrict ip = (const unsigned char *)source;
  const unsigned char * const iend = ip + (signed long int)inputSize;
  unsigned char *op = (unsigned char *)dest;
  unsigned char * const oend = op + (signed long int)outputSize;
  unsigned char *cpy;
  unsigned char *oexit = op + (signed long int)targetOutputSize;
  const unsigned char * const lowLimit = lowPrefix - (signed long int)dictSize;
  const unsigned char * const dictEnd = (const unsigned char *)dictStart + (signed long int)dictSize;
  const unsigned long int dec32table[8l] = { (const unsigned long int)4, (const unsigned long int)1, (const unsigned long int)2, (const unsigned long int)1, (const unsigned long int)4, (const unsigned long int)4, (const unsigned long int)4, (const unsigned long int)4 };
  const unsigned long int dec64table[8l] = { (const unsigned long int)0, (const unsigned long int)0, (const unsigned long int)0, (unsigned long int)-1, (const unsigned long int)0, (const unsigned long int)1, (const unsigned long int)2, (const unsigned long int)3 };
  const signed int safeDecode = (const signed int)(endOnInput == 1);
  const signed int checkOffset = (const signed int)(safeDecode != 0 && dictSize < (unsigned long int)(signed int)(64 * (1 << 10)));
  if(!(partialDecoding == 0) && !(oend + -12l >= oexit))
    oexit = oend - (signed long int)(8 + 4);

  _Bool tmp_if_expr$1;
  const unsigned char * restrict tmp_post$2;
  const unsigned char * restrict tmp_post$3;
  const unsigned char * restrict tmp_post$5;
  unsigned char *tmp_post$6;
  const unsigned char *tmp_post$7;
  unsigned char *tmp_post$8;
  const unsigned char *tmp_post$9;
  if(outputSize == 0 && !(endOnInput == 0))
  {
    if(inputSize == 1)
      tmp_if_expr$1 = (signed int)*ip == 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    return tmp_if_expr$1 ? 0 : -1;
  }

  else
    if(endOnInput == 0 && outputSize == 0)
      return (signed int)*ip == 0 ? 1 : -1;

    else
    {
      while((_Bool)1)
      {
        unsigned int token;
        unsigned long int length;
        const unsigned char *match;
        tmp_post$2 = ip;
        ip = ip + 1l;
        token = (unsigned int)*tmp_post$2;
        length = (unsigned long int)(token >> 4);
        if(length == 15ul)
        {
          unsigned int s;
          do
          {
            tmp_post$3 = ip;
            ip = ip + 1l;
            s = (unsigned int)*tmp_post$3;
            length = length + (unsigned long int)s;
          }
          while(s == 255u && (endOnInput == 0 || !(ip >= iend + -15l)));
          if(!(safeDecode == 0) && !((unsigned long int)(op + (signed long int)length) >= (unsigned long int)op))
            goto _output_error;

          if(!(safeDecode == 0) && !((unsigned long int)(ip + (signed long int)length) >= (unsigned long int)ip))
            goto _output_error;

        }

        cpy = op + (signed long int)length;
        if(endOnInput == 0 && !(oend + -8l >= cpy) || !(endOnInput == 0) && (!(iend + -8l >= ip + (signed long int)length) || !(partialDecoding == 0 ? oend + -12l >= cpy : oexit >= cpy)))
        {
          if(!(partialDecoding == 0))
          {
            if(!(oend >= cpy))
              goto _output_error;

            if(!(endOnInput == 0) && !(iend >= ip + (signed long int)length))
              goto _output_error;

          }

          else
          {
            if(endOnInput == 0 && !(cpy == oend))
              goto _output_error;

            if(!(endOnInput == 0) && (!(ip + (signed long int)length == iend) || !(oend >= cpy)))
              goto _output_error;

          }
          memcpy((void *)op, (const void *)ip, length);
          ip = ip + (signed long int)length;
          op = op + (signed long int)length;
          break;
        }

        LZ4_wildCopy((void *)op, (const void *)ip, (void *)cpy);
        ip = ip + (signed long int)length;
        op = cpy;
        unsigned short int return_value_LZ4_readLE16$4;
        return_value_LZ4_readLE16$4=LZ4_readLE16((const void *)ip);
        match = cpy - (signed long int)return_value_LZ4_readLE16$4;
        ip = ip + (signed long int)2;
        if(!(checkOffset == 0) && !(match >= lowLimit))
          goto _output_error;

        length = (unsigned long int)(token & (1U << 4) - (unsigned int)1);
        if(length == 15ul)
        {
          unsigned int LZ4_decompress_generic$$1$$1$$3$$s;
          while((_Bool)1)
          {
            if(!(endOnInput == 0) && !(iend + -5l >= ip))
              goto _output_error;

            tmp_post$5 = ip;
            ip = ip + 1l;
            LZ4_decompress_generic$$1$$1$$3$$s = (unsigned int)*tmp_post$5;
            length = length + (unsigned long int)LZ4_decompress_generic$$1$$1$$3$$s;
            if(!(LZ4_decompress_generic$$1$$1$$3$$s == 255u))
              break;

          }
          if(!(safeDecode == 0) && !((unsigned long int)(op + (signed long int)length) >= (unsigned long int)op))
            goto _output_error;

        }

        length = length + (unsigned long int)4;
        if(dict == usingExtDict && !(match >= lowPrefix))
        {
          if(!(oend + -5l >= op + (signed long int)length))
            goto _output_error;

          if((unsigned long int)(lowPrefix - match) >= length)
          {
            match = dictEnd - (lowPrefix - match);
            memcpy((void *)op, (const void *)match, length);
            op = op + (signed long int)length;
          }

          else
          {
            unsigned long int copySize = (unsigned long int)(lowPrefix - match);
            memcpy((void *)op, (const void *)(dictEnd - (signed long int)copySize), copySize);
            op = op + (signed long int)copySize;
            copySize = length - copySize;
            if(!((unsigned long int)(op - lowPrefix) >= copySize))
            {
              unsigned char * const endOfMatch = op + (signed long int)copySize;
              const unsigned char *copyFrom = lowPrefix;
              for( ; !(op >= endOfMatch); *tmp_post$6 = *tmp_post$7)
              {
                tmp_post$6 = op;
                op = op + 1l;
                tmp_post$7 = copyFrom;
                copyFrom = copyFrom + 1l;
              }
            }

            else
            {
              memcpy((void *)op, (const void *)lowPrefix, copySize);
              op = op + (signed long int)copySize;
            }
          }
        }

        else
        {
          cpy = op + (signed long int)length;
          if(!(op - match >= 8l))
          {
            const unsigned long int dec64 = dec64table[op - match];
            op[(signed long int)0] = match[(signed long int)0];
            op[(signed long int)1] = match[(signed long int)1];
            op[(signed long int)2] = match[(signed long int)2];
            op[(signed long int)3] = match[(signed long int)3];
            match = match + (signed long int)dec32table[op - match];
            LZ4_copy4((void *)(op + (signed long int)4), (const void *)match);
            op = op + (signed long int)8;
            match = match - (signed long int)dec64;
          }

          else
          {
            LZ4_copy8((void *)op, (const void *)match);
            op = op + (signed long int)8;
            match = match + (signed long int)8;
          }
          if(!(oend + -12l >= cpy))
          {
            if(!(oend + -5l >= cpy))
              goto _output_error;

            if(!(op >= oend + -8l))
            {
              LZ4_wildCopy((void *)op, (const void *)match, (void *)(oend - (signed long int)8));
              match = match + ((oend - (signed long int)8) - op);
              op = oend - (signed long int)8;
            }

            for( ; !(op >= cpy); *tmp_post$8 = *tmp_post$9)
            {
              tmp_post$8 = op;
              op = op + 1l;
              tmp_post$9 = match;
              match = match + 1l;
            }
          }

          else
            LZ4_wildCopy((void *)op, (const void *)match, (void *)cpy);
          op = cpy;
        }
      }
      if(!(endOnInput == 0))
        return (signed int)((char *)op - dest);

      else
        return (signed int)((char *)ip - source);

    _output_error:
      ;
      return (signed int)-((char *)ip - source) - 1;
    }
}

// LZ4_decompress_safe
// file ./fst/lz4.c line 1121
signed int LZ4_decompress_safe(const char *source, char *dest, signed int compressedSize, signed int maxDecompressedSize)
{
  signed int return_value_LZ4_decompress_generic$1;
  return_value_LZ4_decompress_generic$1=LZ4_decompress_generic(source, dest, compressedSize, maxDecompressedSize, 1, 0, 0, noDict, (unsigned char *)dest, (const unsigned char *)(void *)0, (const unsigned long int)0);
  return return_value_LZ4_decompress_generic$1;
}

// LZ4_decompress_safe_continue
// file ./fst/lz4.c line 1188
signed int LZ4_decompress_safe_continue(struct anonymous$10 *LZ4_streamDecode, const char *source, char *dest, signed int compressedSize, signed int maxOutputSize)
{
  struct anonymous$11 *lz4sd = (struct anonymous$11 *)LZ4_streamDecode;
  signed int result;
  if(lz4sd->prefixEnd == (unsigned char *)dest)
  {
    result=LZ4_decompress_generic(source, dest, compressedSize, maxOutputSize, 1, 0, 0, usingExtDict, lz4sd->prefixEnd - (signed long int)lz4sd->prefixSize, lz4sd->externalDict, lz4sd->extDictSize);
    if(!(result >= 1))
      return result;

    lz4sd->prefixSize = lz4sd->prefixSize + (unsigned long int)result;
    lz4sd->prefixEnd = lz4sd->prefixEnd + (signed long int)result;
  }

  else
  {
    lz4sd->extDictSize = lz4sd->prefixSize;
    lz4sd->externalDict = lz4sd->prefixEnd - (signed long int)lz4sd->extDictSize;
    result=LZ4_decompress_generic(source, dest, compressedSize, maxOutputSize, 1, 0, 0, usingExtDict, (unsigned char *)dest, lz4sd->externalDict, lz4sd->extDictSize);
    if(!(result >= 1))
      return result;

    lz4sd->prefixSize = (unsigned long int)result;
    lz4sd->prefixEnd = (unsigned char *)dest + (signed long int)result;
  }
  return result;
}

// LZ4_decompress_safe_forceExtDict
// file ./fst/lz4.c line 1278
signed int LZ4_decompress_safe_forceExtDict(const char *source, char *dest, signed int compressedSize, signed int maxOutputSize, const char *dictStart, signed int dictSize)
{
  signed int return_value_LZ4_decompress_generic$1;
  return_value_LZ4_decompress_generic$1=LZ4_decompress_generic(source, dest, compressedSize, maxOutputSize, 1, 0, 0, usingExtDict, (unsigned char *)dest, (unsigned char *)dictStart, (const unsigned long int)dictSize);
  return return_value_LZ4_decompress_generic$1;
}

// LZ4_decompress_safe_partial
// file ./fst/lz4.c line 1126
signed int LZ4_decompress_safe_partial(const char *source, char *dest, signed int compressedSize, signed int targetOutputSize, signed int maxDecompressedSize)
{
  signed int return_value_LZ4_decompress_generic$1;
  return_value_LZ4_decompress_generic$1=LZ4_decompress_generic(source, dest, compressedSize, maxDecompressedSize, 1, 1, targetOutputSize, noDict, (unsigned char *)dest, (const unsigned char *)(void *)0, (const unsigned long int)0);
  return return_value_LZ4_decompress_generic$1;
}

// LZ4_decompress_safe_usingDict
// file ./fst/lz4.c line 1267
signed int LZ4_decompress_safe_usingDict(const char *source, char *dest, signed int compressedSize, signed int maxOutputSize, const char *dictStart, signed int dictSize)
{
  signed int return_value_LZ4_decompress_usingDict_generic$1;
  return_value_LZ4_decompress_usingDict_generic$1=LZ4_decompress_usingDict_generic(source, dest, compressedSize, maxOutputSize, 1, dictStart, dictSize);
  return return_value_LZ4_decompress_usingDict_generic$1;
}

// LZ4_decompress_safe_withPrefix64k
// file ./fst/lz4.c line 1356
signed int LZ4_decompress_safe_withPrefix64k(const char *source, char *dest, signed int compressedSize, signed int maxOutputSize)
{
  signed int return_value_LZ4_decompress_generic$1;
  return_value_LZ4_decompress_generic$1=LZ4_decompress_generic(source, dest, compressedSize, maxOutputSize, 1, 0, 0, withPrefix64k, (unsigned char *)dest - (signed long int)(64 * (1 << 10)), (const unsigned char *)(void *)0, (const unsigned long int)(64 * (1 << 10)));
  return return_value_LZ4_decompress_generic$1;
}

// LZ4_decompress_usingDict_generic
// file ./fst/lz4.c line 1254
static inline signed int LZ4_decompress_usingDict_generic(const char *source, char *dest, signed int compressedSize, signed int maxOutputSize, signed int safe, const char *dictStart, signed int dictSize)
{
  signed int return_value_LZ4_decompress_generic$1;
  signed int return_value_LZ4_decompress_generic$2;
  if(dictSize == 0)
  {
    return_value_LZ4_decompress_generic$1=LZ4_decompress_generic(source, dest, compressedSize, maxOutputSize, safe, 0, 0, noDict, (unsigned char *)dest, (const unsigned char *)(void *)0, (const unsigned long int)0);
    return return_value_LZ4_decompress_generic$1;
  }

  else
  {
    if(dictStart + (signed long int)dictSize == dest)
    {
      if(dictSize >= 64)
      {
        return_value_LZ4_decompress_generic$2=LZ4_decompress_generic(source, dest, compressedSize, maxOutputSize, safe, 0, 0, withPrefix64k, (unsigned char *)dest - (signed long int)(64 * (1 << 10)), (const unsigned char *)(void *)0, (const unsigned long int)0);
        return return_value_LZ4_decompress_generic$2;
      }

      signed int return_value_LZ4_decompress_generic$3;
      return_value_LZ4_decompress_generic$3=LZ4_decompress_generic(source, dest, compressedSize, maxOutputSize, safe, 0, 0, noDict, (unsigned char *)dest - (signed long int)dictSize, (const unsigned char *)(void *)0, (const unsigned long int)0);
      return return_value_LZ4_decompress_generic$3;
    }

    signed int return_value_LZ4_decompress_generic$4;
    return_value_LZ4_decompress_generic$4=LZ4_decompress_generic(source, dest, compressedSize, maxOutputSize, safe, 0, 0, usingExtDict, (unsigned char *)dest, (unsigned char *)dictStart, (const unsigned long int)dictSize);
    return return_value_LZ4_decompress_generic$4;
  }
}

// LZ4_freeStream
// file ./fst/lz4.c line 773
signed int LZ4_freeStream(struct anonymous$8 *LZ4_stream)
{
  free((void *)LZ4_stream);
  return 0;
}

// LZ4_freeStreamDecode
// file ./fst/lz4.c line 1158
signed int LZ4_freeStreamDecode(struct anonymous$10 *LZ4_stream)
{
  free((void *)LZ4_stream);
  return 0;
}

// LZ4_getPosition
// file ./fst/lz4.c line 492
static const unsigned char * LZ4_getPosition(const unsigned char *p, void *tableBase, enum anonymous$1 tableType, const unsigned char *srcBase)
{
  unsigned int h;
  h=LZ4_hashPosition(p, tableType);
  const unsigned char *return_value_LZ4_getPositionOnHash$1;
  return_value_LZ4_getPositionOnHash$1=LZ4_getPositionOnHash(h, tableBase, tableType, srcBase);
  return return_value_LZ4_getPositionOnHash$1;
}

// LZ4_getPositionOnHash
// file ./fst/lz4.c line 485
static const unsigned char * LZ4_getPositionOnHash(unsigned int h, void *tableBase, enum anonymous$1 tableType, const unsigned char *srcBase)
{
  if((signed int)tableType == byPtr)
  {
    const unsigned char **LZ4_getPositionOnHash$$1$$1$$hashTable = (const unsigned char **)tableBase;
    return LZ4_getPositionOnHash$$1$$1$$hashTable[(signed long int)h];
  }

  if((signed int)tableType == byU32)
  {
    unsigned int *LZ4_getPositionOnHash$$1$$2$$hashTable = (unsigned int *)tableBase;
    return (signed long int)LZ4_getPositionOnHash$$1$$2$$hashTable[(signed long int)h] + srcBase;
  }

  unsigned short int *hashTable = (unsigned short int *)tableBase;
  return (signed long int)hashTable[(signed long int)h] + srcBase;
}

// LZ4_hashPosition
// file ./fst/lz4.c line 467
static unsigned int LZ4_hashPosition(const unsigned char *p, enum anonymous$1 tableType)
{
  unsigned int return_value_LZ4_read32$1;
  return_value_LZ4_read32$1=LZ4_read32((const void *)p);
  unsigned int return_value_LZ4_hashSequence$2;
  return_value_LZ4_hashSequence$2=LZ4_hashSequence(return_value_LZ4_read32$1, tableType);
  return return_value_LZ4_hashSequence$2;
}

// LZ4_hashSequence
// file ./fst/lz4.c line 459
static unsigned int LZ4_hashSequence(unsigned int sequence, enum anonymous$1 tableType)
{
  if((signed int)tableType == byU16)
    return sequence * 2654435761U >> 4 * 8 - ((14 - 2) + 1);

  else
    return sequence * 2654435761U >> 4 * 8 - (14 - 2);
}

// LZ4_init
// file ./fst/lz4.c line 1301
static void LZ4_init(struct anonymous$4 *lz4ds, const unsigned char *base)
{
  memset((void *)lz4ds, 0, (unsigned long int)((1 << 14 - 3) + 4) * sizeof(signed long long int) /*8ul*/ );
  lz4ds->bufferStart = base;
}

// LZ4_isLittleEndian
// file ./fst/lz4.c line 180
static unsigned int LZ4_isLittleEndian(void)
{
  /* tag-#anon#clUN[U32'i'||lARR4{U8}$U8$'c'|] */
union anonymous$12
{
  // i
  unsigned int i;
  // c
  unsigned char c[4l];
};

/* */
  ;
  union anonymous$12 one = { .i=(unsigned int)1 };
  return (unsigned int)one.c[(signed long int)0];
}

// LZ4_loadDict
// file ./fst/lz4.c line 780
signed int LZ4_loadDict(struct anonymous$8 *LZ4_dict, const char *dictionary, signed int dictSize)
{
  struct anonymous$4 *dict = (struct anonymous$4 *)LZ4_dict;
  const unsigned char *p = (const unsigned char *)dictionary;
  const unsigned char * const dictEnd = p + (signed long int)dictSize;
  const unsigned char *base;
  if(!(dict->initCheck == 0u))
    LZ4_resetStream(LZ4_dict);

  if(!(dictSize >= 4))
  {
    dict->dictionary = (const unsigned char *)(void *)0;
    dict->dictSize = (unsigned int)0;
    return 0;
  }

  else
  {
    if(dictEnd + -65536l >= p)
      p = dictEnd - (signed long int)(64 * (1 << 10));

    base = p - (signed long int)dict->currentOffset;
    dict->dictionary = p;
    dict->dictSize = (unsigned int)(dictEnd - p);
    dict->currentOffset = dict->currentOffset + dict->dictSize;
    for( ; dictEnd + -4l >= p; p = p + (signed long int)3)
      LZ4_putPosition(p, (void *)dict, (enum anonymous$1)byU32, base);
    return (signed int)dict->dictSize;
  }
}

// LZ4_putPosition
// file ./fst/lz4.c line 479
static void LZ4_putPosition(const unsigned char *p, void *tableBase, enum anonymous$1 tableType, const unsigned char *srcBase)
{
  unsigned int h;
  h=LZ4_hashPosition(p, tableType);
  LZ4_putPositionOnHash(p, h, tableBase, tableType, srcBase);
}

// LZ4_putPositionOnHash
// file ./fst/lz4.c line 469
static void LZ4_putPositionOnHash(const unsigned char *p, unsigned int h, void *tableBase, enum anonymous$1 tableType, const unsigned char *srcBase)
{
  const unsigned char **LZ4_putPositionOnHash$$1$$1$$1$$hashTable;
  unsigned int *LZ4_putPositionOnHash$$1$$1$$2$$hashTable;
  unsigned short int *hashTable;
  switch((signed int)tableType)
  {
    case byPtr:
    {
      LZ4_putPositionOnHash$$1$$1$$1$$hashTable = (const unsigned char **)tableBase;
      LZ4_putPositionOnHash$$1$$1$$1$$hashTable[(signed long int)h] = p;
      break;
    }
    case byU32:
    {
      LZ4_putPositionOnHash$$1$$1$$2$$hashTable = (unsigned int *)tableBase;
      LZ4_putPositionOnHash$$1$$1$$2$$hashTable[(signed long int)h] = (unsigned int)(p - srcBase);
      break;
    }
    case byU16:
    {
      hashTable = (unsigned short int *)tableBase;
      hashTable[(signed long int)h] = (unsigned short int)(p - srcBase);
    }
  }
}

// LZ4_read16
// file ./fst/lz4.c line 214
static unsigned short int LZ4_read16(const void *memPtr)
{
  return *((unsigned short int *)memPtr);
}

// LZ4_read32
// file ./fst/lz4.c line 226
static unsigned int LZ4_read32(const void *memPtr)
{
  return *((unsigned int *)memPtr);
}

// LZ4_read64
// file ./fst/lz4.c line 238
static unsigned long int LZ4_read64(const void *memPtr)
{
  return *((unsigned long int *)memPtr);
}

// LZ4_readLE16
// file ./fst/lz4.c line 187
static unsigned short int LZ4_readLE16(const void *memPtr)
{
  unsigned int return_value_LZ4_isLittleEndian$1;
  return_value_LZ4_isLittleEndian$1=LZ4_isLittleEndian();
  if(!(return_value_LZ4_isLittleEndian$1 == 0u))
    return *((unsigned short int *)memPtr);

  else
  {
    const unsigned char *p = (const unsigned char *)memPtr;
    return (unsigned short int)((signed int)(unsigned short int)p[(signed long int)0] + ((signed int)p[(signed long int)1] << 8));
  }
}

// LZ4_read_ARCH
// file ./fst/lz4.c line 250
static unsigned long int LZ4_read_ARCH(const void *p)
{
  unsigned int return_value_LZ4_64bits$3;
  return_value_LZ4_64bits$3=LZ4_64bits();
  unsigned long int return_value_LZ4_read64$1;
  unsigned int return_value_LZ4_read32$2;
  if(!(return_value_LZ4_64bits$3 == 0u))
  {
    return_value_LZ4_read64$1=LZ4_read64(p);
    return (unsigned long int)return_value_LZ4_read64$1;
  }

  else
  {
    return_value_LZ4_read32$2=LZ4_read32(p);
    return (unsigned long int)return_value_LZ4_read32$2;
  }
}

// LZ4_renormDictT
// file ./fst/lz4.c line 812
static void LZ4_renormDictT(struct anonymous$4 *LZ4_dict, const unsigned char *src)
{
  _Bool tmp_if_expr$1;
  if(LZ4_dict->currentOffset >= 2147483649u)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (unsigned long int)LZ4_dict->currentOffset > (unsigned long int)src ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
  {
    unsigned int delta = LZ4_dict->currentOffset - (unsigned int)(64 * (1 << 10));
    const unsigned char *dictEnd = LZ4_dict->dictionary + (signed long int)LZ4_dict->dictSize;
    signed int i = 0;
    for( ; !(i >= 4096); i = i + 1)
      if(!(LZ4_dict->hashTable[(signed long int)i] >= delta))
        LZ4_dict->hashTable[(signed long int)i] = (unsigned int)0;

      else
        LZ4_dict->hashTable[(signed long int)i] = LZ4_dict->hashTable[(signed long int)i] - delta;
    LZ4_dict->currentOffset = (unsigned int)(64 * (1 << 10));
    if(LZ4_dict->dictSize >= 65537u)
      LZ4_dict->dictSize = (unsigned int)(64 * (1 << 10));

    LZ4_dict->dictionary = dictEnd - (signed long int)LZ4_dict->dictSize;
  }

}

// LZ4_resetStream
// file ./fst/lz4.c line 760
void LZ4_resetStream(struct anonymous$8 *LZ4_stream)
{
  memset((void *)LZ4_stream, 0, sizeof(struct anonymous$8) /*16416ul*/ );
}

// LZ4_resetStreamState
// file ./fst/lz4.c line 1307
signed int LZ4_resetStreamState(void *state, const char *inputBuffer)
{
  if(!((3ul & (unsigned long int)state) == 0ul))
    return 1;

  else
  {
    LZ4_init((struct anonymous$4 *)state, (const unsigned char *)inputBuffer);
    return 0;
  }
}

// LZ4_saveDict
// file ./fst/lz4.c line 915
signed int LZ4_saveDict(struct anonymous$8 *LZ4_dict, char *safeBuffer, signed int dictSize)
{
  struct anonymous$4 *dict = (struct anonymous$4 *)LZ4_dict;
  const unsigned char *previousDictEnd = dict->dictionary + (signed long int)dict->dictSize;
  if((unsigned int)dictSize >= 65537u)
    dictSize = 64 * (1 << 10);

  if(!(dict->dictSize >= (unsigned int)dictSize))
    dictSize = (signed int)dict->dictSize;

  memmove((void *)safeBuffer, (const void *)(previousDictEnd - (signed long int)dictSize), (unsigned long int)dictSize);
  dict->dictionary = (const unsigned char *)safeBuffer;
  dict->dictSize = (unsigned int)dictSize;
  return dictSize;
}

// LZ4_setStreamDecode
// file ./fst/lz4.c line 1171
signed int LZ4_setStreamDecode(struct anonymous$10 *LZ4_streamDecode, const char *dictionary, signed int dictSize)
{
  struct anonymous$11 *lz4sd = (struct anonymous$11 *)LZ4_streamDecode;
  lz4sd->prefixSize = (unsigned long int)dictSize;
  lz4sd->prefixEnd = (unsigned char *)dictionary + (signed long int)dictSize;
  lz4sd->externalDict = (unsigned char *)(void *)0;
  lz4sd->extDictSize = (unsigned long int)0;
  return 1;
}

// LZ4_sizeofState
// file ./fst/lz4.c line 1330
signed int LZ4_sizeofState(void)
{
  return (signed int)((unsigned long int)((1 << 14 - 3) + 4) * sizeof(signed long long int) /*8ul*/ );
}

// LZ4_sizeofStreamState
// file ./fst/lz4.c line 1299
signed int LZ4_sizeofStreamState(void)
{
  return (signed int)((unsigned long int)((1 << 14 - 3) + 4) * sizeof(signed long long int) /*8ul*/ );
}

// LZ4_slideInputBuffer
// file ./fst/lz4.c line 1321
char * LZ4_slideInputBuffer(void *LZ4_Data)
{
  struct anonymous$4 *ctx = (struct anonymous$4 *)LZ4_Data;
  signed int dictSize;
  dictSize=LZ4_saveDict((struct anonymous$8 *)ctx, (char *)ctx->bufferStart, 64 * (1 << 10));
  return (char *)(ctx->bufferStart + (signed long int)dictSize);
}

// LZ4_uncompress
// file ./fst/lz4.c line 1293
signed int LZ4_uncompress(const char *source, char *dest, signed int outputSize)
{
  signed int return_value_LZ4_decompress_fast$1;
  return_value_LZ4_decompress_fast$1=LZ4_decompress_fast(source, dest, outputSize);
  return return_value_LZ4_decompress_fast$1;
}

// LZ4_uncompress_unknownOutputSize
// file ./fst/lz4.c line 1294
signed int LZ4_uncompress_unknownOutputSize(const char *source, char *dest, signed int isize, signed int maxOutputSize)
{
  signed int return_value_LZ4_decompress_safe$1;
  return_value_LZ4_decompress_safe$1=LZ4_decompress_safe(source, dest, isize, maxOutputSize);
  return return_value_LZ4_decompress_safe$1;
}

// LZ4_versionNumber
// file ./fst/lz4.c line 428
signed int LZ4_versionNumber(void)
{
  return 1 * 100 * 100 + 5 * 100 + 0;
}

// LZ4_wildCopy
// file ./fst/lz4.c line 286
static void LZ4_wildCopy(void *dstPtr, const void *srcPtr, void *dstEnd)
{
  unsigned char *d = (unsigned char *)dstPtr;
  const unsigned char *s = (const unsigned char *)srcPtr;
  unsigned char *e = (unsigned char *)dstEnd;
  do
  {
    LZ4_copy8((void *)d, (const void *)s);
    d = d + (signed long int)8;
    s = s + (signed long int)8;
  }
  while(!(d >= e));
}

// LZ4_writeLE16
// file ./fst/lz4.c line 198
static void LZ4_writeLE16(void *memPtr, unsigned short int value)
{
  unsigned int return_value_LZ4_isLittleEndian$1;
  return_value_LZ4_isLittleEndian$1=LZ4_isLittleEndian();
  if(!(return_value_LZ4_isLittleEndian$1 == 0u))
  {
    *((unsigned short int *)memPtr) = value;
    goto __CPROVER_DUMP_L3;
  }

  else
  {
    unsigned char *p = (unsigned char *)memPtr;
    p[(signed long int)0] = (unsigned char)value;
    p[(signed long int)1] = (unsigned char)((signed int)value >> 8);
  }

__CPROVER_DUMP_L3:
  ;
}

// fastlz1_compress
// file ./fst/fastlz.c line 162
static inline signed int fastlz1_compress(const void *input, signed int length, void *output)
{
  const unsigned char *ip = (const unsigned char *)input;
  const unsigned char *ip_bound = (ip + (signed long int)length) - (signed long int)2;
  const unsigned char *ip_limit = (ip + (signed long int)length) - (signed long int)12;
  unsigned char *op = (unsigned char *)output;
  const unsigned char *htab[8192l];
  const unsigned char **hslot;
  unsigned int hval;
  unsigned int copy;
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  const unsigned char *tmp_post$3;
  unsigned char *tmp_post$4;
  unsigned char *tmp_post$5;
  const unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  const unsigned char *tmp_post$8;
  _Bool tmp_if_expr$11;
  const unsigned char *tmp_post$9;
  const unsigned char *tmp_post$10;
  _Bool tmp_if_expr$14;
  const unsigned char *tmp_post$12;
  const unsigned char *tmp_post$13;
  _Bool tmp_if_expr$17;
  const unsigned char *tmp_post$15;
  const unsigned char *tmp_post$16;
  const unsigned char *tmp_post$18;
  const unsigned char *tmp_post$19;
  const unsigned char *tmp_post$20;
  const unsigned char *tmp_post$21;
  const unsigned char *tmp_post$22;
  const unsigned char *tmp_post$23;
  const unsigned char *tmp_post$24;
  const unsigned char *tmp_post$25;
  const unsigned char *tmp_post$26;
  const unsigned char *tmp_post$27;
  const unsigned char *tmp_post$28;
  const unsigned char *tmp_post$29;
  const unsigned char *tmp_post$30;
  const unsigned char *tmp_post$31;
  const unsigned char *tmp_post$32;
  const unsigned char *tmp_post$33;
  const unsigned char *tmp_post$34;
  const unsigned char *tmp_post$35;
  const unsigned char *tmp_post$36;
  unsigned char *tmp_post$37;
  unsigned char *tmp_post$38;
  unsigned char *tmp_post$39;
  unsigned char *tmp_post$40;
  unsigned char *tmp_post$41;
  unsigned char *tmp_post$42;
  unsigned char *tmp_post$43;
  unsigned char *tmp_post$44;
  const unsigned char *tmp_post$45;
  const unsigned char *tmp_post$46;
  unsigned char *tmp_post$47;
  unsigned char *tmp_post$48;
  const unsigned char *tmp_post$49;
  unsigned char *tmp_post$50;
  unsigned char *tmp_post$51;
  const unsigned char *tmp_post$52;
  unsigned char *tmp_post$53;
  if(!(length >= 4))
  {
    if(!(length == 0))
    {
      tmp_post$1 = op;
      op = op + 1l;
      *tmp_post$1 = (unsigned char)(length - 1);
      ip_bound = ip_bound + 1l;
      for( ; ip_bound >= ip; *tmp_post$2 = *tmp_post$3)
      {
        tmp_post$2 = op;
        op = op + 1l;
        tmp_post$3 = ip;
        ip = ip + 1l;
      }
      return length + 1;
    }

    return 0;
  }

  else
  {
    hslot = htab;
    for( ; !(hslot >= htab + 8192l); hslot = hslot + 1l)
      *hslot = ip;
    copy = (unsigned int)2;
    tmp_post$4 = op;
    op = op + 1l;
    *tmp_post$4 = (unsigned char)(32 - 1);
    tmp_post$5 = op;
    op = op + 1l;
    tmp_post$6 = ip;
    ip = ip + 1l;
    *tmp_post$5 = *tmp_post$6;
    tmp_post$7 = op;
    op = op + 1l;
    tmp_post$8 = ip;
    ip = ip + 1l;
    *tmp_post$7 = *tmp_post$8;
    while(!(ip >= ip_limit))
    {
      const unsigned char *ref;
      unsigned int distance;
      unsigned int len = (unsigned int)3;
      const unsigned char *anchor = ip;
      hval = (unsigned int)*((const unsigned short int *)ip);
      hval = hval ^ (unsigned int)*((const unsigned short int *)(ip + (signed long int)1)) ^ hval >> 16 - 13;
      hval = hval & (unsigned int)((1 << 13) - 1);
      hslot = htab + (signed long int)hval;
      ref = htab[(signed long int)hval];
      distance = (unsigned int)(anchor - ref);
      *hslot = anchor;
      if(distance == 0u || distance >= 8192u)
        tmp_if_expr$11 = (_Bool)1;

      else
      {
        tmp_post$9 = ref;
        ref = ref + 1l;
        tmp_post$10 = ip;
        ip = ip + 1l;
        tmp_if_expr$11 = *tmp_post$9 != *tmp_post$10 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$11)
        tmp_if_expr$14 = (_Bool)1;

      else
      {
        tmp_post$12 = ref;
        ref = ref + 1l;
        tmp_post$13 = ip;
        ip = ip + 1l;
        tmp_if_expr$14 = *tmp_post$12 != *tmp_post$13 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$14)
        tmp_if_expr$17 = (_Bool)1;

      else
      {
        tmp_post$15 = ref;
        ref = ref + 1l;
        tmp_post$16 = ip;
        ip = ip + 1l;
        tmp_if_expr$17 = *tmp_post$15 != *tmp_post$16 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr$17)
      {
        ip = anchor + (signed long int)len;
        distance = distance - 1u;
        if(distance == 0u)
        {
          unsigned char x = ip[(signed long int)-1];
          while(!(ip >= ip_bound))
          {
            tmp_post$18 = ref;
            ref = ref + 1l;
            if(!(*tmp_post$18 == x))
              break;

            else
              ip = ip + 1l;
          }
        }

        else
        {
          tmp_post$19 = ref;
          ref = ref + 1l;
          tmp_post$20 = ip;
          ip = ip + 1l;
          if(*tmp_post$19 == *tmp_post$20)
          {
            tmp_post$21 = ref;
            ref = ref + 1l;
            tmp_post$22 = ip;
            ip = ip + 1l;
            if(*tmp_post$21 == *tmp_post$22)
            {
              tmp_post$23 = ref;
              ref = ref + 1l;
              tmp_post$24 = ip;
              ip = ip + 1l;
              if(*tmp_post$23 == *tmp_post$24)
              {
                tmp_post$25 = ref;
                ref = ref + 1l;
                tmp_post$26 = ip;
                ip = ip + 1l;
                if(*tmp_post$25 == *tmp_post$26)
                {
                  tmp_post$27 = ref;
                  ref = ref + 1l;
                  tmp_post$28 = ip;
                  ip = ip + 1l;
                  if(*tmp_post$27 == *tmp_post$28)
                  {
                    tmp_post$29 = ref;
                    ref = ref + 1l;
                    tmp_post$30 = ip;
                    ip = ip + 1l;
                    if(*tmp_post$29 == *tmp_post$30)
                    {
                      tmp_post$31 = ref;
                      ref = ref + 1l;
                      tmp_post$32 = ip;
                      ip = ip + 1l;
                      if(*tmp_post$31 == *tmp_post$32)
                      {
                        tmp_post$33 = ref;
                        ref = ref + 1l;
                        tmp_post$34 = ip;
                        ip = ip + 1l;
                        if(*tmp_post$33 == *tmp_post$34)
                          while(!(ip >= ip_bound))
                          {
                            tmp_post$35 = ref;
                            ref = ref + 1l;
                            tmp_post$36 = ip;
                            ip = ip + 1l;
                            if(!(*tmp_post$35 == *tmp_post$36))
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
        if(!(copy == 0u))
          *((op - (signed long int)copy) - (signed long int)1) = (unsigned char)(copy - (unsigned int)1);

        else
          op = op - 1l;
        copy = (unsigned int)0;
        ip = ip - (signed long int)3;
        len = (unsigned int)(ip - anchor);
        if(len >= 263u)
          for( ; len >= 263u; len = len - (unsigned int)(264 - 2))
          {
            tmp_post$37 = op;
            op = op + 1l;
            *tmp_post$37 = (unsigned char)((unsigned int)(7 << 5) + (distance >> 8));
            tmp_post$38 = op;
            op = op + 1l;
            *tmp_post$38 = (unsigned char)(((264 - 2) - 7) - 2);
            tmp_post$39 = op;
            op = op + 1l;
            *tmp_post$39 = (unsigned char)(distance & (unsigned int)255);
          }

        if(!(len >= 7u))
        {
          tmp_post$40 = op;
          op = op + 1l;
          *tmp_post$40 = (unsigned char)((len << 5) + (distance >> 8));
          tmp_post$41 = op;
          op = op + 1l;
          *tmp_post$41 = (unsigned char)(distance & (unsigned int)255);
        }

        else
        {
          tmp_post$42 = op;
          op = op + 1l;
          *tmp_post$42 = (unsigned char)((unsigned int)(7 << 5) + (distance >> 8));
          tmp_post$43 = op;
          op = op + 1l;
          *tmp_post$43 = (unsigned char)(len - (unsigned int)7);
          tmp_post$44 = op;
          op = op + 1l;
          *tmp_post$44 = (unsigned char)(distance & (unsigned int)255);
        }
        hval = (unsigned int)*((const unsigned short int *)ip);
        hval = hval ^ (unsigned int)*((const unsigned short int *)(ip + (signed long int)1)) ^ hval >> 16 - 13;
        hval = hval & (unsigned int)((1 << 13) - 1);
        tmp_post$45 = ip;
        ip = ip + 1l;
        htab[(signed long int)hval] = tmp_post$45;
        hval = (unsigned int)*((const unsigned short int *)ip);
        hval = hval ^ (unsigned int)*((const unsigned short int *)(ip + (signed long int)1)) ^ hval >> 16 - 13;
        hval = hval & (unsigned int)((1 << 13) - 1);
        tmp_post$46 = ip;
        ip = ip + 1l;
        htab[(signed long int)hval] = tmp_post$46;
        tmp_post$47 = op;
        op = op + 1l;
        *tmp_post$47 = (unsigned char)(32 - 1);
      }

      else
      {

      literal:
        ;
        tmp_post$48 = op;
        op = op + 1l;
        tmp_post$49 = anchor;
        anchor = anchor + 1l;
        *tmp_post$48 = *tmp_post$49;
        ip = anchor;
        copy = copy + 1u;
        if(copy == 32u)
        {
          copy = (unsigned int)0;
          tmp_post$50 = op;
          op = op + 1l;
          *tmp_post$50 = (unsigned char)(32 - 1);
        }

      }
    }
    ip_bound = ip_bound + 1l;
    while(ip_bound >= ip)
    {
      tmp_post$51 = op;
      op = op + 1l;
      tmp_post$52 = ip;
      ip = ip + 1l;
      *tmp_post$51 = *tmp_post$52;
      copy = copy + 1u;
      if(copy == 32u)
      {
        copy = (unsigned int)0;
        tmp_post$53 = op;
        op = op + 1l;
        *tmp_post$53 = (unsigned char)(32 - 1);
      }

    }
    if(!(copy == 0u))
      *((op - (signed long int)copy) - (signed long int)1) = (unsigned char)(copy - (unsigned int)1);

    else
      op = op - 1l;
    return (signed int)(op - (unsigned char *)output);
  }
}

// fastlz1_decompress
// file ./fst/fastlz.c line 416
static inline signed int fastlz1_decompress(const void *input, signed int length, void *output, signed int maxout)
{
  const unsigned char *ip = (const unsigned char *)input;
  const unsigned char *ip_limit = ip + (signed long int)length;
  unsigned char *op = (unsigned char *)output;
  unsigned char *op_limit = op + (signed long int)maxout;
  unsigned int ctrl;
  const unsigned char *tmp_post$1 = ip;
  ip = ip + 1l;
  ctrl = (unsigned int)((signed int)*tmp_post$1 & 31);
  signed int loop = 1;
  const unsigned char *tmp_post$2;
  const unsigned char *tmp_post$3;
  const unsigned char *tmp_post$4;
  unsigned char *tmp_post$5;
  unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  unsigned char *tmp_post$8;
  unsigned char *tmp_post$9;
  const unsigned char *tmp_post$10;
  unsigned char *tmp_post$11;
  const unsigned char *tmp_post$12;
  unsigned char *tmp_post$13;
  const unsigned char *tmp_post$14;
  unsigned char *tmp_post$15;
  const unsigned char *tmp_post$16;
  unsigned short int *tmp_post$17;
  const unsigned short int *tmp_post$18;
  unsigned short int *tmp_post$19;
  const unsigned short int *tmp_post$20;
  unsigned short int *tmp_post$21;
  const unsigned short int *tmp_post$22;
  unsigned short int *tmp_post$23;
  const unsigned short int *tmp_post$24;
  unsigned short int *tmp_post$25;
  const unsigned short int *tmp_post$26;
  unsigned char *tmp_post$27;
  const unsigned char *tmp_post$28;
  unsigned char *tmp_post$29;
  const unsigned char *tmp_post$30;
  const unsigned char *tmp_post$31;
  do
  {
    const unsigned char *ref = op;
    unsigned int len = ctrl >> 5;
    unsigned int ofs = (ctrl & (unsigned int)31) << 8;
    if(ctrl >= 32u)
    {
      len = len - 1u;
      ref = ref - (signed long int)ofs;
      if(len == 6u)
      {
        tmp_post$2 = ip;
        ip = ip + 1l;
        len = len + (unsigned int)*tmp_post$2;
      }

      tmp_post$3 = ip;
      ip = ip + 1l;
      ref = ref - (signed long int)*tmp_post$3;
      if(!(op_limit >= op + (signed long int)len + 3l))
        return 0;

      if(!(ref + -1l >= (unsigned char *)output))
        return 0;

      if(!(ip >= ip_limit))
      {
        tmp_post$4 = ip;
        ip = ip + 1l;
        ctrl = (unsigned int)*tmp_post$4;
      }

      else
        loop = 0;
      if(ref == op)
      {
        unsigned char b = ref[(signed long int)-1];
        tmp_post$5 = op;
        op = op + 1l;
        *tmp_post$5 = b;
        tmp_post$6 = op;
        op = op + 1l;
        *tmp_post$6 = b;
        tmp_post$7 = op;
        op = op + 1l;
        *tmp_post$7 = b;
        for( ; !(len == 0u); len = len - 1u)
        {
          tmp_post$8 = op;
          op = op + 1l;
          *tmp_post$8 = b;
        }
      }

      else
      {
        const unsigned short int *p;
        unsigned short int *q;
        ref = ref - 1l;
        tmp_post$9 = op;
        op = op + 1l;
        tmp_post$10 = ref;
        ref = ref + 1l;
        *tmp_post$9 = *tmp_post$10;
        tmp_post$11 = op;
        op = op + 1l;
        tmp_post$12 = ref;
        ref = ref + 1l;
        *tmp_post$11 = *tmp_post$12;
        tmp_post$13 = op;
        op = op + 1l;
        tmp_post$14 = ref;
        ref = ref + 1l;
        *tmp_post$13 = *tmp_post$14;
        if(!((1u & len) == 0u))
        {
          tmp_post$15 = op;
          op = op + 1l;
          tmp_post$16 = ref;
          ref = ref + 1l;
          *tmp_post$15 = *tmp_post$16;
          len = len - 1u;
        }

        q = (unsigned short int *)op;
        op = op + (signed long int)len;
        p = (const unsigned short int *)ref;
        len = len >> 1;
        for( ; len >= 5u; len = len - (unsigned int)4)
        {
          tmp_post$17 = q;
          q = q + 1l;
          tmp_post$18 = p;
          p = p + 1l;
          *tmp_post$17 = *tmp_post$18;
          tmp_post$19 = q;
          q = q + 1l;
          tmp_post$20 = p;
          p = p + 1l;
          *tmp_post$19 = *tmp_post$20;
          tmp_post$21 = q;
          q = q + 1l;
          tmp_post$22 = p;
          p = p + 1l;
          *tmp_post$21 = *tmp_post$22;
          tmp_post$23 = q;
          q = q + 1l;
          tmp_post$24 = p;
          p = p + 1l;
          *tmp_post$23 = *tmp_post$24;
        }
        for( ; !(len == 0u); len = len - 1u)
        {
          tmp_post$25 = q;
          q = q + 1l;
          tmp_post$26 = p;
          p = p + 1l;
          *tmp_post$25 = *tmp_post$26;
        }
      }
    }

    else
    {
      ctrl = ctrl + 1u;
      if(!(op_limit >= op + (signed long int)ctrl))
        return 0;

      if(!(ip_limit >= ip + (signed long int)ctrl))
        return 0;

      tmp_post$27 = op;
      op = op + 1l;
      tmp_post$28 = ip;
      ip = ip + 1l;
      *tmp_post$27 = *tmp_post$28;
      ctrl = ctrl - 1u;
      for( ; !(ctrl == 0u); ctrl = ctrl - 1u)
      {
        tmp_post$29 = op;
        op = op + 1l;
        tmp_post$30 = ip;
        ip = ip + 1l;
        *tmp_post$29 = *tmp_post$30;
      }
      loop = (signed int)(signed long int)(ip < ip_limit);
      if(!(loop == 0))
      {
        tmp_post$31 = ip;
        ip = ip + 1l;
        ctrl = (unsigned int)*tmp_post$31;
      }

    }
  }
  while(!((signed long int)loop == 0l));
  return (signed int)(op - (unsigned char *)output);
}

// fastlz2_compress
// file ./fst/fastlz.c line 162
static inline signed int fastlz2_compress(const void *input, signed int length, void *output)
{
  const unsigned char *ip = (const unsigned char *)input;
  const unsigned char *ip_bound = (ip + (signed long int)length) - (signed long int)2;
  const unsigned char *ip_limit = (ip + (signed long int)length) - (signed long int)12;
  unsigned char *op = (unsigned char *)output;
  const unsigned char *htab[8192l];
  const unsigned char **hslot;
  unsigned int hval;
  unsigned int copy;
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  const unsigned char *tmp_post$3;
  unsigned char *tmp_post$4;
  unsigned char *tmp_post$5;
  const unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  const unsigned char *tmp_post$8;
  _Bool tmp_if_expr$11;
  const unsigned char *tmp_post$9;
  const unsigned char *tmp_post$10;
  _Bool tmp_if_expr$14;
  const unsigned char *tmp_post$12;
  const unsigned char *tmp_post$13;
  _Bool tmp_if_expr$17;
  const unsigned char *tmp_post$15;
  const unsigned char *tmp_post$16;
  const unsigned char *tmp_post$18;
  const unsigned char *tmp_post$19;
  _Bool tmp_if_expr$22;
  const unsigned char *tmp_post$20;
  const unsigned char *tmp_post$21;
  const unsigned char *tmp_post$23;
  const unsigned char *tmp_post$24;
  const unsigned char *tmp_post$25;
  const unsigned char *tmp_post$26;
  const unsigned char *tmp_post$27;
  const unsigned char *tmp_post$28;
  const unsigned char *tmp_post$29;
  const unsigned char *tmp_post$30;
  const unsigned char *tmp_post$31;
  const unsigned char *tmp_post$32;
  const unsigned char *tmp_post$33;
  const unsigned char *tmp_post$34;
  const unsigned char *tmp_post$35;
  const unsigned char *tmp_post$36;
  const unsigned char *tmp_post$37;
  const unsigned char *tmp_post$38;
  const unsigned char *tmp_post$39;
  const unsigned char *tmp_post$40;
  const unsigned char *tmp_post$41;
  unsigned char *tmp_post$42;
  unsigned char *tmp_post$43;
  unsigned char *tmp_post$44;
  unsigned char *tmp_post$45;
  unsigned char *tmp_post$46;
  unsigned char *tmp_post$47;
  unsigned char *tmp_post$48;
  unsigned char *tmp_post$49;
  unsigned char *tmp_post$50;
  unsigned char *tmp_post$51;
  unsigned char *tmp_post$52;
  unsigned char *tmp_post$53;
  unsigned char *tmp_post$54;
  unsigned char *tmp_post$55;
  unsigned char *tmp_post$56;
  unsigned char *tmp_post$57;
  const unsigned char *tmp_post$58;
  const unsigned char *tmp_post$59;
  unsigned char *tmp_post$60;
  unsigned char *tmp_post$61;
  const unsigned char *tmp_post$62;
  unsigned char *tmp_post$63;
  unsigned char *tmp_post$64;
  const unsigned char *tmp_post$65;
  unsigned char *tmp_post$66;
  if(!(length >= 4))
  {
    if(!(length == 0))
    {
      tmp_post$1 = op;
      op = op + 1l;
      *tmp_post$1 = (unsigned char)(length - 1);
      ip_bound = ip_bound + 1l;
      for( ; ip_bound >= ip; *tmp_post$2 = *tmp_post$3)
      {
        tmp_post$2 = op;
        op = op + 1l;
        tmp_post$3 = ip;
        ip = ip + 1l;
      }
      return length + 1;
    }

    return 0;
  }

  else
  {
    hslot = htab;
    for( ; !(hslot >= htab + 8192l); hslot = hslot + 1l)
      *hslot = ip;
    copy = (unsigned int)2;
    tmp_post$4 = op;
    op = op + 1l;
    *tmp_post$4 = (unsigned char)(32 - 1);
    tmp_post$5 = op;
    op = op + 1l;
    tmp_post$6 = ip;
    ip = ip + 1l;
    *tmp_post$5 = *tmp_post$6;
    tmp_post$7 = op;
    op = op + 1l;
    tmp_post$8 = ip;
    ip = ip + 1l;
    *tmp_post$7 = *tmp_post$8;
    while(!(ip >= ip_limit))
    {
      const unsigned char *ref;
      unsigned int distance;
      unsigned int len = (unsigned int)3;
      const unsigned char *anchor = ip;
      if(*ip == ip[-1l])
      {
        if(!(*((const unsigned short int *)(ip + -1l)) == *((const unsigned short int *)(ip + 1l))))
          goto __CPROVER_DUMP_L8;

        distance = (unsigned int)1;
        ref = (anchor - (signed long int)1) + (signed long int)3;
      }

      else
      {

      __CPROVER_DUMP_L8:
        ;
        hval = (unsigned int)*((const unsigned short int *)ip);
        hval = hval ^ (unsigned int)*((const unsigned short int *)(ip + (signed long int)1)) ^ hval >> 16 - 13;
        hval = hval & (unsigned int)((1 << 13) - 1);
        hslot = htab + (signed long int)hval;
        ref = htab[(signed long int)hval];
        distance = (unsigned int)(anchor - ref);
        *hslot = anchor;
        if(distance == 0u || distance >= 73725u)
          tmp_if_expr$11 = (_Bool)1;

        else
        {
          tmp_post$9 = ref;
          ref = ref + 1l;
          tmp_post$10 = ip;
          ip = ip + 1l;
          tmp_if_expr$11 = *tmp_post$9 != *tmp_post$10 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$11)
          tmp_if_expr$14 = (_Bool)1;

        else
        {
          tmp_post$12 = ref;
          ref = ref + 1l;
          tmp_post$13 = ip;
          ip = ip + 1l;
          tmp_if_expr$14 = *tmp_post$12 != *tmp_post$13 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$14)
          tmp_if_expr$17 = (_Bool)1;

        else
        {
          tmp_post$15 = ref;
          ref = ref + 1l;
          tmp_post$16 = ip;
          ip = ip + 1l;
          tmp_if_expr$17 = *tmp_post$15 != *tmp_post$16 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$17)
          goto literal;

        if(distance >= 8191u)
        {
          tmp_post$18 = ip;
          ip = ip + 1l;
          tmp_post$19 = ref;
          ref = ref + 1l;
          if(!(*tmp_post$18 == *tmp_post$19))
            tmp_if_expr$22 = (_Bool)1;

          else
          {
            tmp_post$20 = ip;
            ip = ip + 1l;
            tmp_post$21 = ref;
            ref = ref + 1l;
            tmp_if_expr$22 = *tmp_post$20 != *tmp_post$21 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$22)
            goto literal;

          len = len + (unsigned int)2;
        }

      }

    match:
      ;
      ip = anchor + (signed long int)len;
      distance = distance - 1u;
      if(distance == 0u)
      {
        unsigned char x = ip[(signed long int)-1];
        while(!(ip >= ip_bound))
        {
          tmp_post$23 = ref;
          ref = ref + 1l;
          if(!(*tmp_post$23 == x))
            break;

          else
            ip = ip + 1l;
        }
      }

      else
      {
        tmp_post$24 = ref;
        ref = ref + 1l;
        tmp_post$25 = ip;
        ip = ip + 1l;
        if(*tmp_post$24 == *tmp_post$25)
        {
          tmp_post$26 = ref;
          ref = ref + 1l;
          tmp_post$27 = ip;
          ip = ip + 1l;
          if(*tmp_post$26 == *tmp_post$27)
          {
            tmp_post$28 = ref;
            ref = ref + 1l;
            tmp_post$29 = ip;
            ip = ip + 1l;
            if(*tmp_post$28 == *tmp_post$29)
            {
              tmp_post$30 = ref;
              ref = ref + 1l;
              tmp_post$31 = ip;
              ip = ip + 1l;
              if(*tmp_post$30 == *tmp_post$31)
              {
                tmp_post$32 = ref;
                ref = ref + 1l;
                tmp_post$33 = ip;
                ip = ip + 1l;
                if(*tmp_post$32 == *tmp_post$33)
                {
                  tmp_post$34 = ref;
                  ref = ref + 1l;
                  tmp_post$35 = ip;
                  ip = ip + 1l;
                  if(*tmp_post$34 == *tmp_post$35)
                  {
                    tmp_post$36 = ref;
                    ref = ref + 1l;
                    tmp_post$37 = ip;
                    ip = ip + 1l;
                    if(*tmp_post$36 == *tmp_post$37)
                    {
                      tmp_post$38 = ref;
                      ref = ref + 1l;
                      tmp_post$39 = ip;
                      ip = ip + 1l;
                      if(*tmp_post$38 == *tmp_post$39)
                        while(!(ip >= ip_bound))
                        {
                          tmp_post$40 = ref;
                          ref = ref + 1l;
                          tmp_post$41 = ip;
                          ip = ip + 1l;
                          if(!(*tmp_post$40 == *tmp_post$41))
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
      if(!(copy == 0u))
        *((op - (signed long int)copy) - (signed long int)1) = (unsigned char)(copy - (unsigned int)1);

      else
        op = op - 1l;
      copy = (unsigned int)0;
      ip = ip - (signed long int)3;
      len = (unsigned int)(ip - anchor);
      if(!(distance >= 8191u))
      {
        if(!(len >= 7u))
        {
          tmp_post$42 = op;
          op = op + 1l;
          *tmp_post$42 = (unsigned char)((len << 5) + (distance >> 8));
          tmp_post$43 = op;
          op = op + 1l;
          *tmp_post$43 = (unsigned char)(distance & (unsigned int)255);
        }

        else
        {
          tmp_post$44 = op;
          op = op + 1l;
          *tmp_post$44 = (unsigned char)((unsigned int)(7 << 5) + (distance >> 8));
          len = len - (unsigned int)7;
          for( ; len >= 255u; len = len - (unsigned int)255)
          {
            tmp_post$45 = op;
            op = op + 1l;
            *tmp_post$45 = (unsigned char)255;
          }
          tmp_post$46 = op;
          op = op + 1l;
          *tmp_post$46 = (unsigned char)len;
          tmp_post$47 = op;
          op = op + 1l;
          *tmp_post$47 = (unsigned char)(distance & (unsigned int)255);
        }
      }

      else
        if(!(len >= 7u))
        {
          distance = distance - (unsigned int)8191;
          tmp_post$48 = op;
          op = op + 1l;
          *tmp_post$48 = (unsigned char)((len << 5) + (unsigned int)31);
          tmp_post$49 = op;
          op = op + 1l;
          *tmp_post$49 = (unsigned char)255;
          tmp_post$50 = op;
          op = op + 1l;
          *tmp_post$50 = (unsigned char)(distance >> 8);
          tmp_post$51 = op;
          op = op + 1l;
          *tmp_post$51 = (unsigned char)(distance & (unsigned int)255);
        }

        else
        {
          distance = distance - (unsigned int)8191;
          tmp_post$52 = op;
          op = op + 1l;
          *tmp_post$52 = (unsigned char)((7 << 5) + 31);
          len = len - (unsigned int)7;
          for( ; len >= 255u; len = len - (unsigned int)255)
          {
            tmp_post$53 = op;
            op = op + 1l;
            *tmp_post$53 = (unsigned char)255;
          }
          tmp_post$54 = op;
          op = op + 1l;
          *tmp_post$54 = (unsigned char)len;
          tmp_post$55 = op;
          op = op + 1l;
          *tmp_post$55 = (unsigned char)255;
          tmp_post$56 = op;
          op = op + 1l;
          *tmp_post$56 = (unsigned char)(distance >> 8);
          tmp_post$57 = op;
          op = op + 1l;
          *tmp_post$57 = (unsigned char)(distance & (unsigned int)255);
        }
      hval = (unsigned int)*((const unsigned short int *)ip);
      hval = hval ^ (unsigned int)*((const unsigned short int *)(ip + (signed long int)1)) ^ hval >> 16 - 13;
      hval = hval & (unsigned int)((1 << 13) - 1);
      tmp_post$58 = ip;
      ip = ip + 1l;
      htab[(signed long int)hval] = tmp_post$58;
      hval = (unsigned int)*((const unsigned short int *)ip);
      hval = hval ^ (unsigned int)*((const unsigned short int *)(ip + (signed long int)1)) ^ hval >> 16 - 13;
      hval = hval & (unsigned int)((1 << 13) - 1);
      tmp_post$59 = ip;
      ip = ip + 1l;
      htab[(signed long int)hval] = tmp_post$59;
      tmp_post$60 = op;
      op = op + 1l;
      *tmp_post$60 = (unsigned char)(32 - 1);
      continue;

    literal:
      ;
      tmp_post$61 = op;
      op = op + 1l;
      tmp_post$62 = anchor;
      anchor = anchor + 1l;
      *tmp_post$61 = *tmp_post$62;
      ip = anchor;
      copy = copy + 1u;
      if(copy == 32u)
      {
        copy = (unsigned int)0;
        tmp_post$63 = op;
        op = op + 1l;
        *tmp_post$63 = (unsigned char)(32 - 1);
      }

    }
    ip_bound = ip_bound + 1l;
    while(ip_bound >= ip)
    {
      tmp_post$64 = op;
      op = op + 1l;
      tmp_post$65 = ip;
      ip = ip + 1l;
      *tmp_post$64 = *tmp_post$65;
      copy = copy + 1u;
      if(copy == 32u)
      {
        copy = (unsigned int)0;
        tmp_post$66 = op;
        op = op + 1l;
        *tmp_post$66 = (unsigned char)(32 - 1);
      }

    }
    if(!(copy == 0u))
      *((op - (signed long int)copy) - (signed long int)1) = (unsigned char)(copy - (unsigned int)1);

    else
      op = op - 1l;
    *((unsigned char *)output) = *((unsigned char *)output) | (unsigned char)(1 << 5);
    return (signed int)(op - (unsigned char *)output);
  }
}

// fastlz2_decompress
// file ./fst/fastlz.c line 416
static inline signed int fastlz2_decompress(const void *input, signed int length, void *output, signed int maxout)
{
  const unsigned char *ip = (const unsigned char *)input;
  const unsigned char *ip_limit = ip + (signed long int)length;
  unsigned char *op = (unsigned char *)output;
  unsigned char *op_limit = op + (signed long int)maxout;
  unsigned int ctrl;
  const unsigned char *tmp_post$1 = ip;
  ip = ip + 1l;
  ctrl = (unsigned int)((signed int)*tmp_post$1 & 31);
  signed int loop = 1;
  const unsigned char *tmp_post$2;
  const unsigned char *tmp_post$3;
  const unsigned char *tmp_post$4;
  const unsigned char *tmp_post$5;
  const unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  unsigned char *tmp_post$8;
  unsigned char *tmp_post$9;
  unsigned char *tmp_post$10;
  unsigned char *tmp_post$11;
  const unsigned char *tmp_post$12;
  unsigned char *tmp_post$13;
  const unsigned char *tmp_post$14;
  unsigned char *tmp_post$15;
  const unsigned char *tmp_post$16;
  unsigned char *tmp_post$17;
  const unsigned char *tmp_post$18;
  unsigned short int *tmp_post$19;
  const unsigned short int *tmp_post$20;
  unsigned short int *tmp_post$21;
  const unsigned short int *tmp_post$22;
  unsigned short int *tmp_post$23;
  const unsigned short int *tmp_post$24;
  unsigned short int *tmp_post$25;
  const unsigned short int *tmp_post$26;
  unsigned short int *tmp_post$27;
  const unsigned short int *tmp_post$28;
  unsigned char *tmp_post$29;
  const unsigned char *tmp_post$30;
  unsigned char *tmp_post$31;
  const unsigned char *tmp_post$32;
  const unsigned char *tmp_post$33;
  do
  {
    const unsigned char *ref = op;
    unsigned int len = ctrl >> 5;
    unsigned int ofs = (ctrl & (unsigned int)31) << 8;
    if(ctrl >= 32u)
    {
      unsigned char code;
      len = len - 1u;
      ref = ref - (signed long int)ofs;
      if(len == 6u)
        do
        {
          tmp_post$2 = ip;
          ip = ip + 1l;
          code = *tmp_post$2;
          len = len + (unsigned int)code;
        }
        while((signed int)code == 255);

      tmp_post$3 = ip;
      ip = ip + 1l;
      code = *tmp_post$3;
      ref = ref - (signed long int)code;
      if((signed int)code == 255)
      {
        if(ofs == 7936u)
        {
          tmp_post$4 = ip;
          ip = ip + 1l;
          ofs = (unsigned int)((signed int)*tmp_post$4 << 8);
          tmp_post$5 = ip;
          ip = ip + 1l;
          ofs = ofs + (unsigned int)*tmp_post$5;
          ref = (op - (signed long int)ofs) - (signed long int)8191;
        }

      }

      if(!(op_limit >= op + (signed long int)len + 3l))
        return 0;

      if(!(ref + -1l >= (unsigned char *)output))
        return 0;

      if(!(ip >= ip_limit))
      {
        tmp_post$6 = ip;
        ip = ip + 1l;
        ctrl = (unsigned int)*tmp_post$6;
      }

      else
        loop = 0;
      if(ref == op)
      {
        unsigned char b = ref[(signed long int)-1];
        tmp_post$7 = op;
        op = op + 1l;
        *tmp_post$7 = b;
        tmp_post$8 = op;
        op = op + 1l;
        *tmp_post$8 = b;
        tmp_post$9 = op;
        op = op + 1l;
        *tmp_post$9 = b;
        for( ; !(len == 0u); len = len - 1u)
        {
          tmp_post$10 = op;
          op = op + 1l;
          *tmp_post$10 = b;
        }
      }

      else
      {
        const unsigned short int *p;
        unsigned short int *q;
        ref = ref - 1l;
        tmp_post$11 = op;
        op = op + 1l;
        tmp_post$12 = ref;
        ref = ref + 1l;
        *tmp_post$11 = *tmp_post$12;
        tmp_post$13 = op;
        op = op + 1l;
        tmp_post$14 = ref;
        ref = ref + 1l;
        *tmp_post$13 = *tmp_post$14;
        tmp_post$15 = op;
        op = op + 1l;
        tmp_post$16 = ref;
        ref = ref + 1l;
        *tmp_post$15 = *tmp_post$16;
        if(!((1u & len) == 0u))
        {
          tmp_post$17 = op;
          op = op + 1l;
          tmp_post$18 = ref;
          ref = ref + 1l;
          *tmp_post$17 = *tmp_post$18;
          len = len - 1u;
        }

        q = (unsigned short int *)op;
        op = op + (signed long int)len;
        p = (const unsigned short int *)ref;
        len = len >> 1;
        for( ; len >= 5u; len = len - (unsigned int)4)
        {
          tmp_post$19 = q;
          q = q + 1l;
          tmp_post$20 = p;
          p = p + 1l;
          *tmp_post$19 = *tmp_post$20;
          tmp_post$21 = q;
          q = q + 1l;
          tmp_post$22 = p;
          p = p + 1l;
          *tmp_post$21 = *tmp_post$22;
          tmp_post$23 = q;
          q = q + 1l;
          tmp_post$24 = p;
          p = p + 1l;
          *tmp_post$23 = *tmp_post$24;
          tmp_post$25 = q;
          q = q + 1l;
          tmp_post$26 = p;
          p = p + 1l;
          *tmp_post$25 = *tmp_post$26;
        }
        for( ; !(len == 0u); len = len - 1u)
        {
          tmp_post$27 = q;
          q = q + 1l;
          tmp_post$28 = p;
          p = p + 1l;
          *tmp_post$27 = *tmp_post$28;
        }
      }
    }

    else
    {
      ctrl = ctrl + 1u;
      if(!(op_limit >= op + (signed long int)ctrl))
        return 0;

      if(!(ip_limit >= ip + (signed long int)ctrl))
        return 0;

      tmp_post$29 = op;
      op = op + 1l;
      tmp_post$30 = ip;
      ip = ip + 1l;
      *tmp_post$29 = *tmp_post$30;
      ctrl = ctrl - 1u;
      for( ; !(ctrl == 0u); ctrl = ctrl - 1u)
      {
        tmp_post$31 = op;
        op = op + 1l;
        tmp_post$32 = ip;
        ip = ip + 1l;
        *tmp_post$31 = *tmp_post$32;
      }
      loop = (signed int)(signed long int)(ip < ip_limit);
      if(!(loop == 0))
      {
        tmp_post$33 = ip;
        ip = ip + 1l;
        ctrl = (unsigned int)*tmp_post$33;
      }

    }
  }
  while(!((signed long int)loop == 0l));
  return (signed int)(op - (unsigned char *)output);
}

// fastlz_compress
// file ./fst/fastlz.c line 126
signed int fastlz_compress(const void *input, signed int length, void *output)
{
  signed int return_value_fastlz1_compress$1;
  if(!(length >= 65536))
  {
    return_value_fastlz1_compress$1=fastlz1_compress(input, length, output);
    return return_value_fastlz1_compress$1;
  }

  else
  {
    signed int return_value_fastlz2_compress$2;
    return_value_fastlz2_compress$2=fastlz2_compress(input, length, output);
    return return_value_fastlz2_compress$2;
  }
}

// fastlz_compress_level
// file ./fst/fastlz.c line 150
signed int fastlz_compress_level(signed int level, const void *input, signed int length, void *output)
{
  signed int return_value_fastlz1_compress$1;
  signed int return_value_fastlz2_compress$2;
  if(level == 1)
  {
    return_value_fastlz1_compress$1=fastlz1_compress(input, length, output);
    return return_value_fastlz1_compress$1;
  }

  else
    if(level == 2)
    {
      return_value_fastlz2_compress$2=fastlz2_compress(input, length, output);
      return return_value_fastlz2_compress$2;
    }

    else
      return 0;
}

// fastlz_decompress
// file ./fst/fastlz.c line 136
signed int fastlz_decompress(const void *input, signed int length, void *output, signed int maxout)
{
  signed int level = ((signed int)*((const unsigned char *)input) >> 5) + 1;
  signed int return_value_fastlz1_decompress$1;
  signed int return_value_fastlz2_decompress$2;
  if(level == 1)
  {
    return_value_fastlz1_decompress$1=fastlz1_decompress(input, length, output, maxout);
    return return_value_fastlz1_decompress$1;
  }

  else
    if(level == 2)
    {
      return_value_fastlz2_decompress$2=fastlz2_decompress(input, length, output, maxout);
      return return_value_fastlz2_decompress$2;
    }

    else
      return 0;
}

// fstCopyVarint32ToLeft
// file ./fst/fstapi.c line 458
static unsigned char * fstCopyVarint32ToLeft(unsigned char *pnt, unsigned int v)
{
  unsigned char *spnt;
  unsigned int nxt = v;
  signed int cnt = 1;
  signed int i;
  do
  {
    nxt = nxt >> 7;
    if(nxt == 0u)
      break;

    cnt = cnt + 1;
  }
  while((_Bool)1);
  pnt = pnt - (signed long int)cnt;
  spnt = pnt;
  cnt = cnt - 1;
  i = 0;
  unsigned char *tmp_post$1;
  for( ; !(i >= cnt); i = i + 1)
  {
    nxt = v >> 7;
    tmp_post$1 = spnt;
    spnt = spnt + 1l;
    *tmp_post$1 = (unsigned char)((signed int)(unsigned char)v | 0x80);
    v = nxt;
  }
  *spnt = (unsigned char)v;
  return pnt;
}

// fstCopyVarint64ToRight
// file ./fst/fstapi.c line 486
static unsigned char * fstCopyVarint64ToRight(unsigned char *pnt, unsigned long int v)
{
  unsigned long int nxt;
  unsigned char *tmp_post$1;
  do
  {
    nxt = v >> 7;
    if(nxt == 0ul)
      break;

    tmp_post$1 = pnt;
    pnt = pnt + 1l;
    *tmp_post$1 = (unsigned char)((signed int)(unsigned char)v | 0x80);
    v = nxt;
  }
  while((_Bool)1);
  unsigned char *tmp_post$2 = pnt;
  pnt = pnt + 1l;
  *tmp_post$2 = (unsigned char)v;
  return pnt;
}

// fstDestroyMmaps
// file ./fst/fstapi.c line 981
static void fstDestroyMmaps(struct fstWriterContext *xc, signed int is_closing)
{
  (void)is_closing;
  if(!(xc->valpos_mem == ((unsigned int *)NULL)))
    munmap((void *)xc->valpos_mem, (unsigned long int)(xc->maxhandle * (unsigned int)4) * sizeof(unsigned int) /*4ul*/ );

  xc->valpos_mem = (unsigned int *)(void *)0;
  if(!(xc->curval_mem == ((unsigned char *)NULL)))
    munmap((void *)xc->curval_mem, (unsigned long int)xc->maxvalpos);

  xc->curval_mem = (unsigned char *)(void *)0;
}

// fstDetermineBreakSize
// file ./fst/fstapi.c line 1018
static void fstDetermineBreakSize(struct fstWriterContext *xc)
{
  signed int was_set = 0;
  struct _IO_FILE *f;
  f=fopen("/proc/meminfo", "rb");
  signed int return_value_feof$1;
  if(!(f == ((struct _IO_FILE *)NULL)))
  {
    char buf[257l];
    char *s;
    do
    {
      return_value_feof$1=feof(f);
      if(!(return_value_feof$1 == 0))
        break;

      buf[(signed long int)0] = (char)0;
      s=fgets(buf, 256, f);
      if(!(s == ((char *)NULL)))
      {
        if(!(*s == 0))
        {
          signed int return_value_strncmp$3;
          return_value_strncmp$3=strncmp(s, "MemTotal:", (unsigned long int)9);
          if(return_value_strncmp$3 == 0)
          {
            unsigned long int v;
            signed long int return_value_atol$2;
            return_value_atol$2=atol(s + (signed long int)10);
            v = (unsigned long int)return_value_atol$2;
            v = v * (unsigned long int)1024;
            v = v / (unsigned long int)8;
            if(v >= 134217729ul)
            {
              if(v >= 2147483649ul)
                v = 1UL << 31;

              xc->fst_huge_break_size = v;
              was_set = 1;
              break;
            }

          }

        }

      }

    }
    while((_Bool)1);
    fclose(f);
  }

  if(was_set == 0)
    xc->fst_huge_break_size = 1UL << 27;

  xc->fst_orig_break_size = 1UL << 27;
  xc->fst_break_size = xc->fst_orig_break_size;
  xc->fst_orig_break_add_size = 1UL << 22;
  xc->fst_break_add_size = xc->fst_orig_break_add_size;
  xc->next_huge_break = (unsigned int)1000000;
}

// fstExtractRvatDataFromFrame
// file ./fst/fstapi.c line 5637
static char * fstExtractRvatDataFromFrame(struct fstReaderContext *xc, unsigned int facidx, char *buf)
{
  if((unsigned long int)facidx >= xc->rvat_frame_maxhandle)
    return (char *)(void *)0;

  else
  {
    if(xc->signal_lens[(signed long int)facidx] == 1u)
    {
      buf[(signed long int)0] = (char)xc->rvat_frame_data[(signed long int)xc->rvat_sig_offs[(signed long int)facidx]];
      buf[(signed long int)1] = (char)0;
    }

    else
      if(!((signed int)xc->signal_typs[(signed long int)facidx] == FST_VT_VCD_REAL))
      {
        memcpy((void *)buf, (const void *)(xc->rvat_frame_data + (signed long int)xc->rvat_sig_offs[(signed long int)facidx]), (unsigned long int)xc->signal_lens[(signed long int)facidx]);
        buf[(signed long int)xc->signal_lens[(signed long int)facidx]] = (char)0;
      }

      else
      {
        double d;
        unsigned char *clone_d = (unsigned char *)&d;
        unsigned char *srcdata = xc->rvat_frame_data + (signed long int)xc->rvat_sig_offs[(signed long int)facidx];
        if(!(xc->double_endian_match == 0u))
          memcpy((void *)clone_d, (const void *)srcdata, (unsigned long int)8);

        else
        {
          signed int j = 0;
          for( ; !(j >= 8); j = j + 1)
            clone_d[(signed long int)j] = srcdata[(signed long int)(7 - j)];
        }
        sprintf((char *)buf, "%.16g", d);
      }
    return buf;
  }
}

// fstFread
// file ./fst/fstapi.c line 260
static unsigned long int fstFread(void *buf, unsigned long int siz, unsigned long int cnt, struct _IO_FILE *fp)
{
  unsigned long int return_value_fread$1;
  return_value_fread$1=fread(buf, siz, cnt, fp);
  return return_value_fread$1;
}

// fstFtruncate
// file ./fst/fstapi.c line 270
static signed int fstFtruncate(signed int fd, signed long int length)
{
  signed int return_value_ftruncate$1;
  return_value_ftruncate$1=ftruncate(fd, length);
  return return_value_ftruncate$1;
}

// fstFwrite
// file ./fst/fstapi.c line 265
static unsigned long int fstFwrite(const void *buf, unsigned long int siz, unsigned long int cnt, struct _IO_FILE *fp)
{
  unsigned long int return_value_fwrite$1;
  return_value_fwrite$1=fwrite(buf, siz, cnt, fp);
  return return_value_fwrite$1;
}

// fstGetSVarint64
// file ./fst/fstapi.c line 635
static signed long int fstGetSVarint64(unsigned char *mem, signed int *skiplen)
{
  unsigned char *mem_orig = mem;
  signed long int rc = (signed long int)0;
  const signed long int one = (const signed long int)1;
  const signed int siz = (const signed int)(sizeof(signed long int) /*8ul*/  * (unsigned long int)8);
  signed int shift = 0;
  unsigned char byt;
  unsigned char *tmp_post$1;
  do
  {
    tmp_post$1 = mem;
    mem = mem + 1l;
    byt = *tmp_post$1;
    rc = rc | (signed long int)((signed int)byt & 0x7f) << shift;
    shift = shift + 7;
  }
  while(!((0x80 & (signed int)byt) == 0));
  if(!((0x40 & (signed int)byt) == 0) && !(shift >= siz))
    rc = rc | -(one << shift);

  *skiplen = (signed int)(mem - mem_orig);
  return rc;
}

// fstGetVarint32
// file ./fst/fstapi.c line 396
static unsigned int fstGetVarint32(unsigned char *mem, signed int *skiplen)
{
  unsigned char *mem_orig = mem;
  unsigned int rc = (unsigned int)0;
  for( ; !((0x80 & (signed int)*mem) == 0); mem = mem + 1l)
    ;
  *skiplen = (signed int)((mem - mem_orig) + (signed long int)1);
  do
  {
    rc = rc << 7;
    rc = rc | (unsigned int)((signed int)*mem & 0x7f);
    if(mem == mem_orig)
      break;

    mem = mem - 1l;
  }
  while((_Bool)1);
  return rc;
}

// fstGetVarint32Length
// file ./fst/fstapi.c line 421
static unsigned int fstGetVarint32Length(unsigned char *mem)
{
  unsigned char *mem_orig = mem;
  for( ; !((0x80 & (signed int)*mem) == 0); mem = mem + 1l)
    ;
  return (unsigned int)((mem - mem_orig) + (signed long int)1);
}

// fstGetVarint32NoSkip
// file ./fst/fstapi.c line 434
static unsigned int fstGetVarint32NoSkip(unsigned char *mem)
{
  unsigned char *mem_orig = mem;
  unsigned int rc = (unsigned int)0;
  for( ; !((0x80 & (signed int)*mem) == 0); mem = mem + 1l)
    ;
  do
  {
    rc = rc << 7;
    rc = rc | (unsigned int)((signed int)*mem & 0x7f);
    if(mem == mem_orig)
      break;

    mem = mem - 1l;
  }
  while((_Bool)1);
  return rc;
}

// fstGetVarint64
// file ./fst/fstapi.c line 501
static unsigned long int fstGetVarint64(unsigned char *mem, signed int *skiplen)
{
  unsigned char *mem_orig = mem;
  unsigned long int rc = (unsigned long int)0;
  for( ; !((0x80 & (signed int)*mem) == 0); mem = mem + 1l)
    ;
  *skiplen = (signed int)((mem - mem_orig) + (signed long int)1);
  do
  {
    rc = rc << 7;
    rc = rc | (unsigned long int)((signed int)*mem & 0x7f);
    if(mem == mem_orig)
      break;

    mem = mem - 1l;
  }
  while((_Bool)1);
  return rc;
}

// fstReaderClose
// file fst/fstapi.h line 369
void fstReaderClose(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    fstReaderDeallocateScopeData(xc);
    fstReaderDeallocateRvatData((void *)xc);
    free((void *)xc->rvat_sig_offs);
    xc->rvat_sig_offs = (unsigned int *)(void *)0;
    free((void *)xc->process_mask);
    xc->process_mask = (unsigned char *)(void *)0;
    free((void *)xc->blackout_times);
    xc->blackout_times = (unsigned long int *)(void *)0;
    free((void *)xc->blackout_activity);
    xc->blackout_activity = (unsigned char *)(void *)0;
    free((void *)xc->temp_signal_value_buf);
    xc->temp_signal_value_buf = (unsigned char *)(void *)0;
    free((void *)xc->signal_typs);
    xc->signal_typs = (unsigned char *)(void *)0;
    free((void *)xc->signal_lens);
    xc->signal_lens = (unsigned int *)(void *)0;
    free((void *)xc->filename);
    xc->filename = (char *)(void *)0;
    if(!(xc->fh == ((struct _IO_FILE *)NULL)))
      tmpfile_close(&xc->fh, &xc->fh_nam);

    if(!(xc->f == ((struct _IO_FILE *)NULL)))
    {
      tmpfile_close(&xc->f, &xc->f_nam);
      if(!(xc->filename_unpacked == ((char *)NULL)))
      {
        unlink(xc->filename_unpacked);
        free((void *)xc->filename_unpacked);
      }

    }

    free((void *)xc);
  }

}

// fstReaderClrFacProcessMask
// file ./fst/fstapi.c line 3343
void fstReaderClrFacProcessMask(void *ctx, unsigned int facidx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    facidx = facidx - 1u;
    if(!(facidx >= xc->maxhandle))
    {
      signed int idx = (signed int)(facidx / (unsigned int)8);
      signed int bitpos = (signed int)(facidx & (unsigned int)7);
      xc->process_mask[(signed long int)idx] = xc->process_mask[(signed long int)idx] & (unsigned char)~(1 << bitpos);
    }

  }

}

// fstReaderClrFacProcessMaskAll
// file ./fst/fstapi.c line 3372
void fstReaderClrFacProcessMaskAll(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    memset((void *)xc->process_mask, 0x00, (unsigned long int)((xc->maxhandle + (unsigned int)7) / (unsigned int)8));

}

// fstReaderDeallocateRvatData
// file ./fst/fstapi.c line 4592
static void fstReaderDeallocateRvatData(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    free((void *)xc->rvat_chain_mem);
    xc->rvat_chain_mem = (unsigned char *)(void *)0;
    free((void *)xc->rvat_frame_data);
    xc->rvat_frame_data = (unsigned char *)(void *)0;
    free((void *)xc->rvat_time_table);
    xc->rvat_time_table = (unsigned long int *)(void *)0;
    free((void *)xc->rvat_chain_table);
    xc->rvat_chain_table = (signed long int *)(void *)0;
    free((void *)xc->rvat_chain_table_lengths);
    xc->rvat_chain_table_lengths = (unsigned int *)(void *)0;
    xc->rvat_data_valid = (unsigned int)0;
  }

}

// fstReaderDeallocateScopeData
// file ./fst/fstapi.c line 3167
static void fstReaderDeallocateScopeData(struct fstReaderContext *xc)
{
  struct fstCurrHier *chp;
  free((void *)xc->curr_flat_hier_nam);
  xc->curr_flat_hier_nam = (char *)(void *)0;
  for( ; !(xc->curr_hier == ((struct fstCurrHier *)NULL)); xc->curr_hier = chp)
  {
    chp = xc->curr_hier->prev;
    free((void *)xc->curr_hier);
  }
}

// fstReaderFseeko
// file ./fst/fstapi.c line 3112
signed int fstReaderFseeko(struct fstReaderContext *xc, struct _IO_FILE *stream, signed long int offset, signed int whence)
{
  signed int rc;
  rc=fseeko(stream, offset, whence);
  if(!(rc >= 0))
    xc->fseek_failed = (unsigned int)1;

  return rc;
}

// fstReaderGetAliasCount
// file ./fst/fstapi.c line 3435
unsigned long int fstReaderGetAliasCount(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned long int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->num_alias;

  else
    tmp_if_expr$1 = (unsigned long int)0;
  return tmp_if_expr$1;
}

// fstReaderGetCurrentFlatScope
// file ./fst/fstapi.c line 3181
const char * fstReaderGetCurrentFlatScope(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  char *tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    if(!(xc->curr_flat_hier_nam == ((char *)NULL)))
      tmp_if_expr$1 = xc->curr_flat_hier_nam;

    else
      tmp_if_expr$1 = "";
    return tmp_if_expr$1;
  }

  else
    return (const char *)(void *)0;
}

// fstReaderGetCurrentScopeLen
// file ./fst/fstapi.c line 3278
signed int fstReaderGetCurrentScopeLen(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    if(xc->curr_hier == ((struct fstCurrHier *)NULL))
      goto __CPROVER_DUMP_L1;

    return xc->curr_hier->len;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return 0;
  }
}

// fstReaderGetCurrentScopeUserInfo
// file ./fst/fstapi.c line 3195
void * fstReaderGetCurrentScopeUserInfo(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  void *tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    if(!(xc->curr_hier == ((struct fstCurrHier *)NULL)))
      tmp_if_expr$1 = xc->curr_hier->user_info;

    else
      tmp_if_expr$1 = (void *)0;
    return tmp_if_expr$1;
  }

  else
    return (void *)0;
}

// fstReaderGetDateString
// file ./fst/fstapi.c line 3463
const char * fstReaderGetDateString(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  char *tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->date;

  else
    tmp_if_expr$1 = (char *)(void *)0;
  return tmp_if_expr$1;
}

// fstReaderGetDoubleEndianMatchState
// file ./fst/fstapi.c line 3449
signed int fstReaderGetDoubleEndianMatchState(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  signed int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = (signed int)xc->double_endian_match;

  else
    tmp_if_expr$1 = 0;
  return tmp_if_expr$1;
}

// fstReaderGetDumpActivityChangeTime
// file ./fst/fstapi.c line 3491
unsigned long int fstReaderGetDumpActivityChangeTime(void *ctx, unsigned int idx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  _Bool tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = idx < xc->num_blackouts ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = xc->blackout_times != ((unsigned long int *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
    return xc->blackout_times[(signed long int)idx];

  else
    return (unsigned long int)0;
}

// fstReaderGetDumpActivityChangeValue
// file ./fst/fstapi.c line 3506
unsigned char fstReaderGetDumpActivityChangeValue(void *ctx, unsigned int idx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  _Bool tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = idx < xc->num_blackouts ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = xc->blackout_activity != ((unsigned char *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
    return xc->blackout_activity[(signed long int)idx];

  else
    return (unsigned char)0;
}

// fstReaderGetEndTime
// file ./fst/fstapi.c line 3400
unsigned long int fstReaderGetEndTime(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned long int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->end_time;

  else
    tmp_if_expr$1 = (unsigned long int)0;
  return tmp_if_expr$1;
}

// fstReaderGetFacProcessMask
// file ./fst/fstapi.c line 3306
signed int fstReaderGetFacProcessMask(void *ctx, unsigned int facidx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    facidx = facidx - 1u;
    if(!(facidx >= xc->maxhandle))
    {
      signed int process_idx = (signed int)(facidx / (unsigned int)8);
      signed int process_bit = (signed int)(facidx & (unsigned int)7);
      return (signed int)(((signed int)xc->process_mask[(signed long int)process_idx] & 1 << process_bit) != 0);
    }

  }

  return 0;
}

// fstReaderGetFileType
// file ./fst/fstapi.c line 3470
signed int fstReaderGetFileType(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  signed int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = (signed int)xc->filetype;

  else
    tmp_if_expr$1 = FST_FT_VERILOG;
  return tmp_if_expr$1;
}

// fstReaderGetFseekFailed
// file ./fst/fstapi.c line 3291
signed int fstReaderGetFseekFailed(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    return (signed int)((signed int)xc->fseek_failed != 0);

  else
    return 0;
}

// fstReaderGetMaxHandle
// file ./fst/fstapi.c line 3428
unsigned int fstReaderGetMaxHandle(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->maxhandle;

  else
    tmp_if_expr$1 = (unsigned int)0;
  return tmp_if_expr$1;
}

// fstReaderGetMemoryUsedByWriter
// file ./fst/fstapi.c line 3407
unsigned long int fstReaderGetMemoryUsedByWriter(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned long int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->mem_used_by_writer;

  else
    tmp_if_expr$1 = (unsigned long int)0;
  return tmp_if_expr$1;
}

// fstReaderGetNumberDumpActivityChanges
// file ./fst/fstapi.c line 3484
unsigned int fstReaderGetNumberDumpActivityChanges(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->num_blackouts;

  else
    tmp_if_expr$1 = (unsigned int)0;
  return tmp_if_expr$1;
}

// fstReaderGetScopeCount
// file ./fst/fstapi.c line 3414
unsigned long int fstReaderGetScopeCount(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned long int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->scope_count;

  else
    tmp_if_expr$1 = (unsigned long int)0;
  return tmp_if_expr$1;
}

// fstReaderGetStartTime
// file ./fst/fstapi.c line 3393
unsigned long int fstReaderGetStartTime(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned long int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->start_time;

  else
    tmp_if_expr$1 = (unsigned long int)0;
  return tmp_if_expr$1;
}

// fstReaderGetTimescale
// file ./fst/fstapi.c line 3386
signed char fstReaderGetTimescale(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  signed int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = (signed int)xc->timescale;

  else
    tmp_if_expr$1 = 0;
  return (signed char)tmp_if_expr$1;
}

// fstReaderGetTimezero
// file ./fst/fstapi.c line 3477
signed long int fstReaderGetTimezero(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  signed long int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->timezero;

  else
    tmp_if_expr$1 = (signed long int)0;
  return tmp_if_expr$1;
}

// fstReaderGetValueChangeSectionCount
// file ./fst/fstapi.c line 3442
unsigned long int fstReaderGetValueChangeSectionCount(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned long int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->vc_section_count;

  else
    tmp_if_expr$1 = (unsigned long int)0;
  return tmp_if_expr$1;
}

// fstReaderGetValueFromHandleAtTime
// file ./fst/fstapi.c line 5684
char * fstReaderGetValueFromHandleAtTime(void *ctx, unsigned long int tim, unsigned int facidx, char *buf)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  signed long int blkpos = (signed long int)0;
  signed long int prev_blkpos;
  unsigned long int beg_tim;
  unsigned long int end_tim;
  unsigned long int beg_tim2;
  unsigned long int end_tim2;
  signed int sectype;
  unsigned int secnum = (unsigned int)0;
  unsigned long int seclen;
  unsigned long int tsec_uclen = (unsigned long int)0;
  unsigned long int tsec_clen = (unsigned long int)0;
  unsigned long int tsec_nitems;
  unsigned long int frame_uclen;
  unsigned long int frame_clen;
  signed long int indx_pntr;
  signed long int indx_pos;
  signed long int chain_clen;
  unsigned char *chain_cmem;
  unsigned char *pnt;
  unsigned int idx;
  unsigned int pidx = (unsigned int)0;
  unsigned int i;
  unsigned long int pval;
  _Bool tmp_if_expr$1;
  if(xc == ((struct fstReaderContext *)NULL) || facidx == 0u)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = facidx > xc->maxhandle ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(buf == ((char *)NULL) || tmp_if_expr$1)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = !(xc->signal_lens[(signed long int)(facidx - (unsigned int)1)] != 0u) ? (_Bool)1 : (_Bool)0;
  unsigned int tmp_post$15;
  unsigned int tmp_post$16;
  _Bool tmp_if_expr$18;
  _Bool tmp_if_expr$19;
  _Bool tmp_if_expr$23;
  if(tmp_if_expr$2)
    return (char *)(void *)0;

  else
  {
    if(xc->rvat_sig_offs == ((unsigned int *)NULL))
    {
      unsigned int cur_offs = (unsigned int)0;
      void *return_value_calloc$3;
      return_value_calloc$3=calloc((unsigned long int)xc->maxhandle, sizeof(unsigned int) /*4ul*/ );
      xc->rvat_sig_offs = (unsigned int *)return_value_calloc$3;
      i = (unsigned int)0;
      for( ; !(i >= xc->maxhandle); i = i + 1u)
      {
        xc->rvat_sig_offs[(signed long int)i] = cur_offs;
        cur_offs = cur_offs + xc->signal_lens[(signed long int)i];
      }
    }

    if(!(xc->rvat_data_valid == 0u))
    {
      if(tim >= xc->rvat_beg_tim)
      {
        if(xc->rvat_end_tim >= tim)
          goto process_value;

      }

      fstReaderDeallocateRvatData((void *)xc);
    }

    xc->rvat_chain_pos_valid = (unsigned int)0;
    do
    {
      prev_blkpos = blkpos;
      fstReaderFseeko(xc, xc->f, prev_blkpos, 0);
      sectype=fgetc(xc->f);
      seclen=fstReaderUint64(xc->f);
      if(sectype == 255 || sectype == -1 || seclen == 0ul)
        return (char *)(void *)0;

      blkpos = blkpos + 1l;
      if(!(sectype == 1) && !(sectype == 5) && !(sectype == 8))
        blkpos = blkpos + (signed long int)seclen;

      else
      {
        beg_tim=fstReaderUint64(xc->f);
        end_tim=fstReaderUint64(xc->f);
        if(end_tim >= tim && tim >= beg_tim)
        {
          if(tim == end_tim)
          {
            if(!(tim == xc->end_time))
            {
              signed long int cached_pos;
              cached_pos=ftello(xc->f);
              fstReaderFseeko(xc, xc->f, blkpos, 0);
              sectype=fgetc(xc->f);
              seclen=fstReaderUint64(xc->f);
              beg_tim2=fstReaderUint64(xc->f);
              end_tim2=fstReaderUint64(xc->f);
              if(seclen == 0ul || !(sectype == 1) && !(sectype == 5) && !(sectype == 8) || !(beg_tim2 == tim))
              {
                blkpos = prev_blkpos;
                break;
              }

              beg_tim = beg_tim2;
              end_tim = end_tim2;
              fstReaderFseeko(xc, xc->f, cached_pos, 0);
            }

          }

          break;
        }

        blkpos = blkpos + (signed long int)seclen;
        secnum = secnum + 1u;
      }
    }
    while((_Bool)1);
    xc->rvat_beg_tim = beg_tim;
    xc->rvat_end_tim = end_tim;
    fstReaderUint64(xc->f);
    unsigned char *ucdata;
    unsigned char *cdata;
    unsigned long int destlen;
    unsigned long int sourcelen;
    signed int rc;
    unsigned char *tpnt;
    unsigned long int tpval;
    unsigned int ti;
    fstReaderFseeko(xc, xc->f, (signed long int)(((unsigned long int)blkpos + seclen) - (unsigned long int)24), 0);
    tsec_uclen=fstReaderUint64(xc->f);
    tsec_clen=fstReaderUint64(xc->f);
    tsec_nitems=fstReaderUint64(xc->f);
    void *return_value_malloc$4;
    return_value_malloc$4=malloc(tsec_uclen);
    ucdata = (unsigned char *)return_value_malloc$4;
    destlen = tsec_uclen;
    sourcelen = tsec_clen;
    fstReaderFseeko(xc, xc->f, (signed long int)-24 - (signed long int)tsec_clen, 1);
    if(!(tsec_uclen == tsec_clen))
    {
      void *return_value_malloc$5;
      return_value_malloc$5=malloc(tsec_clen);
      cdata = (unsigned char *)return_value_malloc$5;
      fstFread((void *)cdata, tsec_clen, (unsigned long int)1, xc->f);
      rc=uncompress(ucdata, &destlen, cdata, sourcelen);
      if(!(rc == 0))
      {
        printf("tsec uncompress rc = %d\n", rc);
        exit(255);
      }

      free((void *)cdata);
    }

    else
      fstFread((void *)ucdata, tsec_uclen, (unsigned long int)1, xc->f);
    void *return_value_calloc$6;
    return_value_calloc$6=calloc(tsec_nitems, sizeof(unsigned long int) /*8ul*/ );
    xc->rvat_time_table = (unsigned long int *)return_value_calloc$6;
    tpnt = ucdata;
    tpval = (unsigned long int)0;
    ti = (unsigned int)0;
    for( ; !((unsigned long int)ti >= tsec_nitems); ti = ti + 1u)
    {
      signed int fstReaderGetValueFromHandleAtTime$$1$$5$$3$$1$$skiplen;
      unsigned long int fstReaderGetValueFromHandleAtTime$$1$$5$$3$$1$$val;
      fstReaderGetValueFromHandleAtTime$$1$$5$$3$$1$$val=fstGetVarint64(tpnt, &fstReaderGetValueFromHandleAtTime$$1$$5$$3$$1$$skiplen);
      xc->rvat_time_table[(signed long int)ti] = tpval + fstReaderGetValueFromHandleAtTime$$1$$5$$3$$1$$val;
      tpval = xc->rvat_time_table[(signed long int)ti];
      tpnt = tpnt + (signed long int)fstReaderGetValueFromHandleAtTime$$1$$5$$3$$1$$skiplen;
    }
    free((void *)ucdata);
    fstReaderFseeko(xc, xc->f, blkpos + (signed long int)32, 0);
    frame_uclen=fstReaderVarint64(xc->f);
    frame_clen=fstReaderVarint64(xc->f);
    xc->rvat_frame_maxhandle=fstReaderVarint64(xc->f);
    void *return_value_malloc$7;
    return_value_malloc$7=malloc(frame_uclen);
    xc->rvat_frame_data = (unsigned char *)return_value_malloc$7;
    if(frame_uclen == frame_clen)
      fstFread((void *)xc->rvat_frame_data, frame_uclen, (unsigned long int)1, xc->f);

    else
    {
      unsigned char *fstReaderGetValueFromHandleAtTime$$1$$7$$mc;
      void *return_value_malloc$8;
      return_value_malloc$8=malloc(frame_clen);
      fstReaderGetValueFromHandleAtTime$$1$$7$$mc = (unsigned char *)return_value_malloc$8;
      signed int fstReaderGetValueFromHandleAtTime$$1$$7$$rc;
      unsigned long int fstReaderGetValueFromHandleAtTime$$1$$7$$destlen = frame_uclen;
      unsigned long int fstReaderGetValueFromHandleAtTime$$1$$7$$sourcelen = frame_clen;
      fstFread((void *)fstReaderGetValueFromHandleAtTime$$1$$7$$mc, fstReaderGetValueFromHandleAtTime$$1$$7$$sourcelen, (unsigned long int)1, xc->f);
      fstReaderGetValueFromHandleAtTime$$1$$7$$rc=uncompress(xc->rvat_frame_data, &fstReaderGetValueFromHandleAtTime$$1$$7$$destlen, fstReaderGetValueFromHandleAtTime$$1$$7$$mc, fstReaderGetValueFromHandleAtTime$$1$$7$$sourcelen);
      if(!(fstReaderGetValueFromHandleAtTime$$1$$7$$rc == 0))
      {
        printf("decompress rc: %d\n", fstReaderGetValueFromHandleAtTime$$1$$7$$rc);
        exit(255);
      }

      free((void *)fstReaderGetValueFromHandleAtTime$$1$$7$$mc);
    }
    xc->rvat_vc_maxhandle=fstReaderVarint64(xc->f);
    xc->rvat_vc_start=ftello(xc->f);
    indx_pntr = (signed long int)(((((unsigned long int)blkpos + seclen) - (unsigned long int)24) - tsec_clen) - (unsigned long int)8);
    fstReaderFseeko(xc, xc->f, indx_pntr, 0);
    unsigned long int return_value_fstReaderUint64$9;
    return_value_fstReaderUint64$9=fstReaderUint64(xc->f);
    chain_clen = (signed long int)return_value_fstReaderUint64$9;
    indx_pos = indx_pntr - chain_clen;
    void *return_value_malloc$10;
    return_value_malloc$10=malloc((unsigned long int)chain_clen);
    chain_cmem = (unsigned char *)return_value_malloc$10;
    fstReaderFseeko(xc, xc->f, indx_pos, 0);
    fstFread((void *)chain_cmem, (unsigned long int)chain_clen, (unsigned long int)1, xc->f);
    void *return_value_calloc$11;
    return_value_calloc$11=calloc(xc->rvat_vc_maxhandle + (unsigned long int)1, sizeof(signed long int) /*8ul*/ );
    xc->rvat_chain_table = (signed long int *)return_value_calloc$11;
    void *return_value_calloc$12;
    return_value_calloc$12=calloc(xc->rvat_vc_maxhandle + (unsigned long int)1, sizeof(unsigned int) /*4ul*/ );
    xc->rvat_chain_table_lengths = (unsigned int *)return_value_calloc$12;
    pnt = chain_cmem;
    idx = (unsigned int)0;
    pval = (unsigned long int)0;
    do
    {
      signed int fstReaderGetValueFromHandleAtTime$$1$$8$$skiplen;
      unsigned long int val;
      unsigned int return_value_fstGetVarint32$13;
      return_value_fstGetVarint32$13=fstGetVarint32(pnt, &fstReaderGetValueFromHandleAtTime$$1$$8$$skiplen);
      val = (unsigned long int)return_value_fstGetVarint32$13;
      if(val == 0ul)
      {
        pnt = pnt + (signed long int)fstReaderGetValueFromHandleAtTime$$1$$8$$skiplen;
        unsigned int return_value_fstGetVarint32$14;
        return_value_fstGetVarint32$14=fstGetVarint32(pnt, &fstReaderGetValueFromHandleAtTime$$1$$8$$skiplen);
        val = (unsigned long int)return_value_fstGetVarint32$14;
        xc->rvat_chain_table[(signed long int)idx] = (signed long int)0;
        xc->rvat_chain_table_lengths[(signed long int)idx] = (unsigned int)-val;
        idx = idx + 1u;
      }

      else
        if(!((1ul & val) == 0ul))
        {
          xc->rvat_chain_table[(signed long int)idx] = (signed long int)(pval + (val >> 1));
          pval = (unsigned long int)xc->rvat_chain_table[(signed long int)idx];
          if(!(idx == 0u))
            xc->rvat_chain_table_lengths[(signed long int)pidx] = (unsigned int)(pval - (unsigned long int)xc->rvat_chain_table[(signed long int)pidx]);

          tmp_post$15 = idx;
          idx = idx + 1u;
          pidx = tmp_post$15;
        }

        else
        {
          unsigned int loopcnt = (unsigned int)(val >> 1);
          i = (unsigned int)0;
          for( ; !(i >= loopcnt); i = i + 1u)
          {
            tmp_post$16 = idx;
            idx = idx + 1u;
            xc->rvat_chain_table[(signed long int)tmp_post$16] = (signed long int)0;
          }
        }
      pnt = pnt + (signed long int)fstReaderGetValueFromHandleAtTime$$1$$8$$skiplen;
    }
    while(!(pnt == chain_cmem + chain_clen));
    free((void *)chain_cmem);
    xc->rvat_chain_table[(signed long int)idx] = indx_pos - xc->rvat_vc_start;
    xc->rvat_chain_table_lengths[(signed long int)pidx] = (unsigned int)(xc->rvat_chain_table[(signed long int)idx] - xc->rvat_chain_table[(signed long int)pidx]);
    i = (unsigned int)0;
    for( ; !(i >= idx); i = i + 1u)
    {
      signed int v32 = (signed int)xc->rvat_chain_table_lengths[(signed long int)i];
      if(!(v32 >= 0))
      {
        if(xc->rvat_chain_table[(signed long int)i] == 0l)
        {
          v32 = -v32;
          v32 = v32 - 1;
          if(!((unsigned int)v32 >= i))
          {
            xc->rvat_chain_table[(signed long int)i] = xc->rvat_chain_table[(signed long int)v32];
            xc->rvat_chain_table_lengths[(signed long int)i] = xc->rvat_chain_table_lengths[(signed long int)v32];
          }

        }

      }

    }
    xc->rvat_data_valid = (unsigned int)1;

  process_value:
    ;
    if(!(xc->rvat_vc_maxhandle >= (unsigned long int)facidx))
      return (char *)(void *)0;

    else
    {
      facidx = facidx - 1u;
      if(tim == xc->rvat_beg_tim)
        tmp_if_expr$18 = !(xc->rvat_chain_table[(signed long int)facidx] != 0l) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$18 = (_Bool)0;
      if(tmp_if_expr$18)
        tmp_if_expr$19 = (_Bool)1;

      else
        tmp_if_expr$19 = !(xc->rvat_chain_table[(signed long int)facidx] != 0l) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$19)
      {
        char *return_value_fstExtractRvatDataFromFrame$17;
        return_value_fstExtractRvatDataFromFrame$17=fstExtractRvatDataFromFrame(xc, facidx, buf);
        return return_value_fstExtractRvatDataFromFrame$17;
      }

      if(!(facidx == xc->rvat_chain_facidx))
      {
        if(!(xc->rvat_chain_mem == ((unsigned char *)NULL)))
        {
          free((void *)xc->rvat_chain_mem);
          xc->rvat_chain_mem = (unsigned char *)(void *)0;
          xc->rvat_chain_pos_valid = (unsigned int)0;
        }

      }

      if(xc->rvat_chain_mem == ((unsigned char *)NULL))
      {
        unsigned int fstReaderGetValueFromHandleAtTime$$1$$13$$skiplen;
        fstReaderFseeko(xc, xc->f, xc->rvat_vc_start + xc->rvat_chain_table[(signed long int)facidx], 0);
        xc->rvat_chain_len=fstReaderVarint32WithSkip(xc->f, &fstReaderGetValueFromHandleAtTime$$1$$13$$skiplen);
        if(!(xc->rvat_chain_len == 0u))
        {
          unsigned char *mu;
          void *return_value_malloc$20;
          return_value_malloc$20=malloc((unsigned long int)xc->rvat_chain_len);
          mu = (unsigned char *)return_value_malloc$20;
          unsigned char *mc;
          void *return_value_malloc$21;
          return_value_malloc$21=malloc((unsigned long int)xc->rvat_chain_table_lengths[(signed long int)facidx]);
          mc = (unsigned char *)return_value_malloc$21;
          unsigned long int fstReaderGetValueFromHandleAtTime$$1$$13$$1$$destlen = (unsigned long int)xc->rvat_chain_len;
          unsigned long int fstReaderGetValueFromHandleAtTime$$1$$13$$1$$sourcelen = (unsigned long int)xc->rvat_chain_table_lengths[(signed long int)facidx];
          signed int fstReaderGetValueFromHandleAtTime$$1$$13$$1$$rc;
          fstFread((void *)mc, (unsigned long int)xc->rvat_chain_table_lengths[(signed long int)facidx], (unsigned long int)1, xc->f);
          fstReaderGetValueFromHandleAtTime$$1$$13$$1$$rc=uncompress(mu, &fstReaderGetValueFromHandleAtTime$$1$$13$$1$$destlen, mc, fstReaderGetValueFromHandleAtTime$$1$$13$$1$$sourcelen);
          free((void *)mc);
          if(!(fstReaderGetValueFromHandleAtTime$$1$$13$$1$$rc == 0))
          {
            printf("\tclen: %d (rc=%d)\n", (signed int)xc->rvat_chain_len, fstReaderGetValueFromHandleAtTime$$1$$13$$1$$rc);
            exit(255);
          }

          xc->rvat_chain_mem = mu;
        }

        else
        {
          signed int fstReaderGetValueFromHandleAtTime$$1$$13$$2$$destlen = (signed int)(xc->rvat_chain_table_lengths[(signed long int)facidx] - fstReaderGetValueFromHandleAtTime$$1$$13$$skiplen);
          unsigned char *fstReaderGetValueFromHandleAtTime$$1$$13$$2$$mu;
          xc->rvat_chain_len = (unsigned int)fstReaderGetValueFromHandleAtTime$$1$$13$$2$$destlen;
          void *return_value_malloc$22;
          return_value_malloc$22=malloc((unsigned long int)xc->rvat_chain_len);
          fstReaderGetValueFromHandleAtTime$$1$$13$$2$$mu = (unsigned char *)return_value_malloc$22;
          fstFread((void *)fstReaderGetValueFromHandleAtTime$$1$$13$$2$$mu, (unsigned long int)fstReaderGetValueFromHandleAtTime$$1$$13$$2$$destlen, (unsigned long int)1, xc->f);
          xc->rvat_chain_mem = fstReaderGetValueFromHandleAtTime$$1$$13$$2$$mu;
        }
        xc->rvat_chain_facidx = facidx;
      }

      unsigned int tidx = (unsigned int)0;
      unsigned int ptidx = (unsigned int)0;
      unsigned int tdelta;
      signed int skiplen;
      unsigned int iprev = xc->rvat_chain_len;
      unsigned int pvli = (unsigned int)0;
      signed int pskip = 0;
      if(!(xc->rvat_chain_pos_valid == 0u))
        tmp_if_expr$23 = tim >= xc->rvat_chain_pos_time ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$23 = (_Bool)0;
      if(tmp_if_expr$23)
      {
        i = xc->rvat_chain_pos_idx;
        tidx = xc->rvat_chain_pos_tidx;
      }

      else
      {
        i = (unsigned int)0;
        tidx = (unsigned int)0;
        xc->rvat_chain_pos_time = xc->rvat_beg_tim;
      }
      if(xc->signal_lens[(signed long int)facidx] == 1u)
      {
        while(!(i >= xc->rvat_chain_len))
        {
          unsigned int vli;
          vli=fstGetVarint32(xc->rvat_chain_mem + (signed long int)i, &skiplen);
          unsigned int shcnt = (unsigned int)(2 << (vli & (unsigned int)1));
          tdelta = vli >> shcnt;
          if(tim >= xc->rvat_time_table[(signed long int)(tdelta + tidx)])
          {
            iprev = i;
            pvli = vli;
            ptidx = tidx;
            tidx = tidx + tdelta;
            i = i + (unsigned int)skiplen;
          }

          else
            break;
        }
        if(!(iprev == xc->rvat_chain_len))
        {
          xc->rvat_chain_pos_tidx = ptidx;
          xc->rvat_chain_pos_idx = iprev;
          xc->rvat_chain_pos_time = tim;
          xc->rvat_chain_pos_valid = (unsigned int)1;
          if((1u & pvli) == 0u)
            buf[(signed long int)0] = (char)(pvli >> 1 & (unsigned int)1 | (unsigned int)48);

          else
            buf[(signed long int)0] = "xzhuwl-?"[(signed long int)(pvli >> 1 & (unsigned int)7)];
          buf[(signed long int)1] = (char)0;
          return buf;
        }

        else
        {
          char *return_value_fstExtractRvatDataFromFrame$24;
          return_value_fstExtractRvatDataFromFrame$24=fstExtractRvatDataFromFrame(xc, facidx, buf);
          return return_value_fstExtractRvatDataFromFrame$24;
        }
      }

      else
      {
        while(!(i >= xc->rvat_chain_len))
        {
          unsigned int fstReaderGetValueFromHandleAtTime$$1$$14$$4$$1$$vli;
          fstReaderGetValueFromHandleAtTime$$1$$14$$4$$1$$vli=fstGetVarint32(xc->rvat_chain_mem + (signed long int)i, &skiplen);
          tdelta = fstReaderGetValueFromHandleAtTime$$1$$14$$4$$1$$vli >> 1;
          if(tim >= xc->rvat_time_table[(signed long int)(tdelta + tidx)])
          {
            iprev = i;
            pvli = fstReaderGetValueFromHandleAtTime$$1$$14$$4$$1$$vli;
            ptidx = tidx;
            pskip = skiplen;
            tidx = tidx + tdelta;
            i = i + (unsigned int)skiplen;
            if((1u & pvli) == 0u)
              i = i + (xc->signal_lens[(signed long int)facidx] + (unsigned int)7) / (unsigned int)8;

            else
              i = i + xc->signal_lens[(signed long int)facidx];
          }

          else
            break;
        }
        if(!(iprev == xc->rvat_chain_len))
        {
          unsigned char *vdata = xc->rvat_chain_mem + (signed long int)iprev + (signed long int)pskip;
          xc->rvat_chain_pos_tidx = ptidx;
          xc->rvat_chain_pos_idx = iprev;
          xc->rvat_chain_pos_time = tim;
          xc->rvat_chain_pos_valid = (unsigned int)1;
          if(!((signed int)xc->signal_typs[(signed long int)facidx] == FST_VT_VCD_REAL))
          {
            if((1u & pvli) == 0u)
            {
              signed int byte = 0;
              signed int bit;
              unsigned int j = (unsigned int)0;
              for( ; !(j >= xc->signal_lens[(signed long int)facidx]); j = j + 1u)
              {
                unsigned char ch;
                byte = (signed int)(j / (unsigned int)8);
                bit = (signed int)((unsigned int)7 - (j & (unsigned int)7));
                ch = (unsigned char)((signed int)vdata[(signed long int)byte] >> bit & 1 | 48);
                buf[(signed long int)j] = (char)ch;
              }
              buf[(signed long int)j] = (char)0;
              return buf;
            }

            else
            {
              memcpy((void *)buf, (const void *)vdata, (unsigned long int)xc->signal_lens[(signed long int)facidx]);
              buf[(signed long int)xc->signal_lens[(signed long int)facidx]] = (char)0;
              return buf;
            }
          }

          else
          {
            double d;
            unsigned char *clone_d = (unsigned char *)&d;
            unsigned char bufd[8l];
            unsigned char *srcdata;
            if((1u & pvli) == 0u)
            {
              signed int fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$bit;
              signed int fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$j = 0;
              for( ; !(fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$j >= 8); fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$j = fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$j + 1)
              {
                unsigned char fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$1$$1$$ch;
                fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$bit = 7 - (fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$j & 7);
                fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$1$$1$$ch = (unsigned char)((signed int)vdata[(signed long int)0] >> fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$bit & 1 | 48);
                bufd[(signed long int)fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$j] = fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$1$$1$$1$$ch;
              }
              srcdata = bufd;
            }

            else
              srcdata = vdata;
            if(!(xc->double_endian_match == 0u))
              memcpy((void *)clone_d, (const void *)srcdata, (unsigned long int)8);

            else
            {
              signed int fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$4$$j = 0;
              for( ; !(fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$4$$j >= 8); fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$4$$j = fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$4$$j + 1)
                clone_d[(signed long int)fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$4$$j] = srcdata[(signed long int)(7 - fstReaderGetValueFromHandleAtTime$$1$$14$$4$$2$$2$$4$$j)];
            }
            sprintf(buf, "r%.16g", d);
            return buf;
          }
        }

        else
        {
          char *return_value_fstExtractRvatDataFromFrame$25;
          return_value_fstExtractRvatDataFromFrame$25=fstExtractRvatDataFromFrame(xc, facidx, buf);
          return return_value_fstExtractRvatDataFromFrame$25;
        }
      }
    }
  }
}

// fstReaderGetVarCount
// file ./fst/fstapi.c line 3421
unsigned long int fstReaderGetVarCount(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned long int tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->var_count;

  else
    tmp_if_expr$1 = (unsigned long int)0;
  return tmp_if_expr$1;
}

// fstReaderGetVersionString
// file ./fst/fstapi.c line 3456
const char * fstReaderGetVersionString(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  char *tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    tmp_if_expr$1 = xc->version;

  else
    tmp_if_expr$1 = (char *)(void *)0;
  return tmp_if_expr$1;
}

// fstReaderInit
// file ./fst/fstapi.c line 4223
signed int fstReaderInit(struct fstReaderContext *xc)
{
  signed long int blkpos = (signed long int)0;
  signed long int endfile;
  unsigned long int seclen;
  signed int sectype;
  unsigned long int vc_section_count_actual = (unsigned long int)0;
  signed int hdr_incomplete = 0;
  signed int hdr_seen = 0;
  signed int gzread_pass_status = 1;
  sectype=fgetc(xc->f);
  if(sectype == 254)
  {
    struct _IO_FILE *fcomp;
    signed long int offpnt;
    signed long int fstReaderInit$$1$$1$$uclen;
    char gz_membuf[32768l];
    void *zhandle;
    signed int zfd;
    signed int flen;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(xc->filename);
    flen = (signed int)return_value_strlen$1;
    char *hf;
    seclen=fstReaderUint64(xc->f);
    unsigned long int return_value_fstReaderUint64$2;
    return_value_fstReaderUint64$2=fstReaderUint64(xc->f);
    fstReaderInit$$1$$1$$uclen = (signed long int)return_value_fstReaderUint64$2;
    if(seclen == 0ul)
      return 0;

    void *return_value_calloc$3;
    return_value_calloc$3=calloc((unsigned long int)1, (unsigned long int)(flen + 16 + 32 + 1));
    hf = (char *)return_value_calloc$3;
    signed int return_value_getpid$4;
    return_value_getpid$4=getpid();
    sprintf(hf, "%s.upk_%d_%p", xc->filename, return_value_getpid$4, (void *)xc);
    fcomp=fopen(hf, "w+b");
    if(fcomp == ((struct _IO_FILE *)NULL))
    {
      fcomp=tmpfile_open(&xc->f_nam);
      free((void *)hf);
      hf = (char *)(void *)0;
      if(fcomp == ((struct _IO_FILE *)NULL))
      {
        tmpfile_close(&fcomp, &xc->f_nam);
        return 0;
      }

    }

    if(!(hf == ((char *)NULL)))
    {
      unlink(hf);
      free((void *)hf);
    }

    fstReaderFseeko(xc, xc->f, (signed long int)(1 + 8 + 8), 0);
    fflush(xc->f);
    signed int return_value_fileno$5;
    return_value_fileno$5=fileno(xc->f);
    zfd=dup(return_value_fileno$5);
    struct gzFile_s *return_value_gzdopen$6;
    return_value_gzdopen$6=gzdopen(zfd, "rb");
    zhandle = (void *)return_value_gzdopen$6;
    if(!(zhandle == NULL))
    {
      offpnt = (signed long int)0;
      for( ; !(offpnt >= fstReaderInit$$1$$1$$uclen); offpnt = offpnt + (signed long int)32768)
      {
        unsigned long int this_len = (unsigned long int)(fstReaderInit$$1$$1$$uclen - offpnt > (signed long int)32768 ? (signed long int)32768 : fstReaderInit$$1$$1$$uclen - offpnt);
        unsigned long int gzreadlen;
        signed int return_value_gzread$7;
        return_value_gzread$7=gzread((struct gzFile_s *)zhandle, (void *)gz_membuf, (unsigned int)this_len);
        gzreadlen = (unsigned long int)return_value_gzread$7;
        unsigned long int fwlen;
        if(!(gzreadlen == this_len))
        {
          gzread_pass_status = 0;
          break;
        }

        fwlen=fstFwrite((const void *)gz_membuf, this_len, (unsigned long int)1, fcomp);
        if(!(fwlen == 1ul))
        {
          gzread_pass_status = 0;
          break;
        }

      }
      gzclose((struct gzFile_s *)zhandle);
    }

    else
      close(zfd);
    fflush(fcomp);
    fclose(xc->f);
    xc->f = fcomp;
  }

  _Bool tmp_if_expr$8;
  if(!(gzread_pass_status == 0))
  {
    fstReaderFseeko(xc, xc->f, (signed long int)0, 2);
    endfile=ftello(xc->f);
    while(!(blkpos >= endfile))
    {
      fstReaderFseeko(xc, xc->f, blkpos, 0);
      sectype=fgetc(xc->f);
      seclen=fstReaderUint64(xc->f);
      if(sectype == -1)
        break;

      if(seclen == 0ul && !(hdr_incomplete == 0))
        break;

      if(hdr_seen == 0 && !(sectype == 0))
        break;

      blkpos = blkpos + 1l;
      if(sectype == 0)
      {
        if(hdr_seen == 0)
        {
          signed int ch;
          double dcheck;
          xc->start_time=fstReaderUint64(xc->f);
          xc->end_time=fstReaderUint64(xc->f);
          if(xc->start_time == 0ul)
            tmp_if_expr$8 = xc->end_time == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$8 = (_Bool)0;
          hdr_incomplete = (signed int)tmp_if_expr$8;
          fstFread((void *)&dcheck, (unsigned long int)8, (unsigned long int)1, xc->f);
          xc->double_endian_match = (unsigned int)IEEE_FLOAT_EQUAL(dcheck, 2.7182818284590452354);
          if(xc->double_endian_match == 0u)
          {
            /* tag-#anon#lUN[lARR8{U8}$U8$'rvs_buf'||F64'd'|] */
union anonymous$0
{
  // rvs_buf
  unsigned char rvs_buf[8l];
  // d
  double d;
};

/* */
            ;
            union anonymous$0 vu;
            unsigned char *dcheck_alias = (unsigned char *)&dcheck;
            signed int rvs_idx = 0;
            for( ; !(rvs_idx >= 8); rvs_idx = rvs_idx + 1)
              vu.rvs_buf[(signed long int)rvs_idx] = dcheck_alias[(signed long int)(7 - rvs_idx)];
            if(IEEE_FLOAT_NOTEQUAL(vu.d, 2.7182818284590452354))
              break;

          }

          hdr_seen = 1;
          xc->mem_used_by_writer=fstReaderUint64(xc->f);
          xc->scope_count=fstReaderUint64(xc->f);
          xc->var_count=fstReaderUint64(xc->f);
          unsigned long int return_value_fstReaderUint64$9;
          return_value_fstReaderUint64$9=fstReaderUint64(xc->f);
          xc->maxhandle = (unsigned int)return_value_fstReaderUint64$9;
          xc->num_alias = xc->var_count - (unsigned long int)xc->maxhandle;
          xc->vc_section_count=fstReaderUint64(xc->f);
          ch=fgetc(xc->f);
          xc->timescale = (signed char)ch;
          fstFread((void *)xc->version, (unsigned long int)128, (unsigned long int)1, xc->f);
          xc->version[(signed long int)128] = (char)0;
          fstFread((void *)xc->date, (unsigned long int)119, (unsigned long int)1, xc->f);
          xc->date[(signed long int)119] = (char)0;
          ch=fgetc(xc->f);
          xc->filetype = (unsigned char)ch;
          unsigned long int return_value_fstReaderUint64$10;
          return_value_fstReaderUint64$10=fstReaderUint64(xc->f);
          xc->timezero = (signed long int)return_value_fstReaderUint64$10;
        }

      }

      else
        if(sectype == 1 || sectype == 5 || sectype == 8)
        {
          if(!(hdr_incomplete == 0))
          {
            unsigned long int bt;
            bt=fstReaderUint64(xc->f);
            xc->end_time=fstReaderUint64(xc->f);
            if(vc_section_count_actual == 0ul)
              xc->start_time = bt;

          }

          vc_section_count_actual = vc_section_count_actual + 1ul;
        }

        else
          if(sectype == 3)
          {
            if(hdr_incomplete == 0)
            {
              unsigned long int clen = seclen - (unsigned long int)24;
              unsigned long int uclen;
              uclen=fstReaderUint64(xc->f);
              unsigned char *ucdata;
              void *return_value_malloc$11;
              return_value_malloc$11=malloc(uclen);
              ucdata = (unsigned char *)return_value_malloc$11;
              unsigned char *pnt = ucdata;
              unsigned int i;
              xc->contains_geom_section = (unsigned int)1;
              unsigned long int return_value_fstReaderUint64$12;
              return_value_fstReaderUint64$12=fstReaderUint64(xc->f);
              xc->maxhandle = (unsigned int)return_value_fstReaderUint64$12;
              xc->longest_signal_value_len = (unsigned int)32;
              free((void *)xc->process_mask);
              void *return_value_calloc$13;
              return_value_calloc$13=calloc((unsigned long int)1, (unsigned long int)((xc->maxhandle + (unsigned int)7) / (unsigned int)8));
              xc->process_mask = (unsigned char *)return_value_calloc$13;
              if(!(clen == uclen))
              {
                unsigned char *cdata;
                void *return_value_malloc$14;
                return_value_malloc$14=malloc(clen);
                cdata = (unsigned char *)return_value_malloc$14;
                unsigned long int destlen = uclen;
                unsigned long int sourcelen = clen;
                signed int rc;
                fstFread((void *)cdata, clen, (unsigned long int)1, xc->f);
                rc=uncompress(ucdata, &destlen, cdata, sourcelen);
                if(!(rc == 0))
                {
                  printf("geom uncompress rc = %d\n", rc);
                  exit(255);
                }

                free((void *)cdata);
              }

              else
                fstFread((void *)ucdata, uclen, (unsigned long int)1, xc->f);
              free((void *)xc->signal_lens);
              void *return_value_malloc$15;
              return_value_malloc$15=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)xc->maxhandle);
              xc->signal_lens = (unsigned int *)return_value_malloc$15;
              free((void *)xc->signal_typs);
              void *return_value_malloc$16;
              return_value_malloc$16=malloc(sizeof(unsigned char) /*1ul*/  * (unsigned long int)xc->maxhandle);
              xc->signal_typs = (unsigned char *)return_value_malloc$16;
              i = (unsigned int)0;
              for( ; !(i >= xc->maxhandle); i = i + 1u)
              {
                signed int skiplen;
                unsigned long int val;
                unsigned int return_value_fstGetVarint32$17;
                return_value_fstGetVarint32$17=fstGetVarint32(pnt, &skiplen);
                val = (unsigned long int)return_value_fstGetVarint32$17;
                pnt = pnt + (signed long int)skiplen;
                if(!(val == 0ul))
                {
                  xc->signal_lens[(signed long int)i] = (unsigned int)(val != (unsigned long int)0xFFFFFFFF ? val : (unsigned long int)0);
                  xc->signal_typs[(signed long int)i] = (unsigned char)FST_VT_VCD_WIRE;
                  if(!(xc->longest_signal_value_len >= xc->signal_lens[(signed long int)i]))
                    xc->longest_signal_value_len = xc->signal_lens[(signed long int)i];

                }

                else
                {
                  xc->signal_lens[(signed long int)i] = (unsigned int)8;
                  xc->signal_typs[(signed long int)i] = (unsigned char)FST_VT_VCD_REAL;
                }
              }
              free((void *)xc->temp_signal_value_buf);
              void *return_value_malloc$18;
              return_value_malloc$18=malloc((unsigned long int)(xc->longest_signal_value_len + (unsigned int)1));
              xc->temp_signal_value_buf = (unsigned char *)return_value_malloc$18;
              free((void *)ucdata);
            }

          }

          else
            if(sectype == 4)
            {
              xc->contains_hier_section = (unsigned int)1;
              xc->hier_pos=ftello(xc->f);
            }

            else
              if(sectype == 7)
              {
                xc->contains_hier_section_lz4 = (unsigned int)1;
                xc->contains_hier_section_lz4duo = (unsigned int)1;
                xc->hier_pos=ftello(xc->f);
              }

              else
                if(sectype == 6)
                {
                  xc->contains_hier_section_lz4 = (unsigned int)1;
                  xc->hier_pos=ftello(xc->f);
                }

                else
                  if(sectype == 2)
                  {
                    unsigned int fstReaderInit$$1$$2$$1$$10$$i;
                    unsigned long int cur_bl = (unsigned long int)0;
                    unsigned long int delta;
                    xc->num_blackouts=fstReaderVarint32(xc->f);
                    free((void *)xc->blackout_times);
                    void *return_value_calloc$19;
                    return_value_calloc$19=calloc((unsigned long int)xc->num_blackouts, sizeof(unsigned long int) /*8ul*/ );
                    xc->blackout_times = (unsigned long int *)return_value_calloc$19;
                    free((void *)xc->blackout_activity);
                    void *return_value_calloc$20;
                    return_value_calloc$20=calloc((unsigned long int)xc->num_blackouts, sizeof(unsigned char) /*1ul*/ );
                    xc->blackout_activity = (unsigned char *)return_value_calloc$20;
                    fstReaderInit$$1$$2$$1$$10$$i = (unsigned int)0;
                    for( ; !(fstReaderInit$$1$$2$$1$$10$$i >= xc->num_blackouts); fstReaderInit$$1$$2$$1$$10$$i = fstReaderInit$$1$$2$$1$$10$$i + 1u)
                    {
                      signed int return_value_fgetc$21;
                      return_value_fgetc$21=fgetc(xc->f);
                      xc->blackout_activity[(signed long int)fstReaderInit$$1$$2$$1$$10$$i] = (unsigned char)(return_value_fgetc$21 != 0);
                      delta=fstReaderVarint64(xc->f);
                      cur_bl = cur_bl + delta;
                      xc->blackout_times[(signed long int)fstReaderInit$$1$$2$$1$$10$$i] = cur_bl;
                    }
                  }

      blkpos = blkpos + (signed long int)seclen;
      if(hdr_seen == 0)
        break;

    }
    if(!(hdr_seen == 0))
    {
      if(!(xc->vc_section_count == vc_section_count_actual))
        xc->vc_section_count = vc_section_count_actual;

      if(xc->contains_geom_section == 0u)
        fstReaderProcessHier((void *)xc, (struct _IO_FILE *)(void *)0);

    }

  }

  return hdr_seen;
}

// fstReaderIterBlocks
// file fst/fstapi.h line 397
signed int fstReaderIterBlocks(void *ctx, void (*value_change_callback)(void *, unsigned long int, unsigned int, const unsigned char *), void *user_callback_data_pointer, struct _IO_FILE *fv)
{
  signed int return_value_fstReaderIterBlocks2$1;
  return_value_fstReaderIterBlocks2$1=fstReaderIterBlocks2(ctx, value_change_callback, (void (*)(void *, unsigned long int, unsigned int, const unsigned char *, unsigned int))(void *)0, user_callback_data_pointer, fv);
  return return_value_fstReaderIterBlocks2$1;
}

// fstReaderIterBlocks2
// file ./fst/fstapi.c line 4659
signed int fstReaderIterBlocks2(void *ctx, void (*value_change_callback)(void *, unsigned long int, unsigned int, const unsigned char *), void (*value_change_callback_varlen)(void *, unsigned long int, unsigned int, const unsigned char *, unsigned int), void *user_callback_data_pointer, struct _IO_FILE *fv)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  unsigned long int previous_time = 18446744073709551615UL;
  unsigned long int *time_table = (unsigned long int *)(void *)0;
  unsigned long int tsec_nitems;
  unsigned int secnum = (unsigned int)0;
  signed int blocks_skipped = 0;
  signed long int blkpos = (signed long int)0;
  unsigned long int seclen;
  unsigned long int beg_tim;
  unsigned long int frame_uclen;
  unsigned long int frame_clen;
  unsigned long int frame_maxhandle;
  unsigned long int vc_maxhandle;
  signed long int vc_start;
  signed long int indx_pntr;
  signed long int indx_pos;
  signed long int *chain_table = (signed long int *)(void *)0;
  unsigned int *chain_table_lengths = (unsigned int *)(void *)0;
  unsigned char *chain_cmem;
  unsigned char *pnt;
  signed long int chain_clen;
  unsigned int idx;
  unsigned int pidx = (unsigned int)0;
  unsigned int i;
  unsigned long int pval;
  unsigned long int vc_maxhandle_largest = (unsigned long int)0;
  unsigned long int tsec_uclen = (unsigned long int)0;
  unsigned long int tsec_clen = (unsigned long int)0;
  signed int sectype;
  unsigned long int mem_required_for_traversal;
  unsigned char *mem_for_traversal = (unsigned char *)(void *)0;
  unsigned int traversal_mem_offs;
  unsigned int *scatterptr;
  unsigned int *headptr;
  unsigned int *length_remaining;
  unsigned int cur_blackout = (unsigned int)0;
  signed int packtype;
  unsigned char *mc_mem = (unsigned char *)(void *)0;
  unsigned int mc_mem_len;
  unsigned int tmp_post$11;
  unsigned int tmp_post$18;
  unsigned int tmp_post$20;
  unsigned int tmp_post$23;
  unsigned int tmp_post$24;
  void *return_value_malloc$25;
  signed int return_value_LZ4_decompress_safe_partial$27;
  unsigned int tmp_post$28;
  if(xc == ((struct fstReaderContext *)NULL))
    return 0;

  else
  {
    void *return_value_calloc$1;
    return_value_calloc$1=calloc((unsigned long int)xc->maxhandle, sizeof(unsigned int) /*4ul*/ );
    scatterptr = (unsigned int *)return_value_calloc$1;
    void *return_value_calloc$2;
    return_value_calloc$2=calloc((unsigned long int)xc->maxhandle, sizeof(unsigned int) /*4ul*/ );
    headptr = (unsigned int *)return_value_calloc$2;
    void *return_value_calloc$3;
    return_value_calloc$3=calloc((unsigned long int)xc->maxhandle, sizeof(unsigned int) /*4ul*/ );
    length_remaining = (unsigned int *)return_value_calloc$3;
    if(!(fv == ((struct _IO_FILE *)NULL)))
    {
      fprintf(fv, "$dumpvars\n");
      fflush(fv);
      setvbuf(fv, (char *)(void *)0, 2, (unsigned long int)0);
      xc->writex_fd=fileno(fv);
    }

    do
    {
      unsigned int *tc_head = (unsigned int *)(void *)0;
      traversal_mem_offs = (unsigned int)0;
      fstReaderFseeko(xc, xc->f, blkpos, 0);
      sectype=fgetc(xc->f);
      seclen=fstReaderUint64(xc->f);
      if(sectype == 255 || sectype == -1)
        break;

      blkpos = blkpos + 1l;
      if(!(sectype == 1) && !(sectype == 5) && !(sectype == 8))
        blkpos = blkpos + (signed long int)seclen;

      else
      {
        if(seclen == 0ul)
          break;

        beg_tim=fstReaderUint64(xc->f);
        fstReaderUint64(xc->f);
        if(!(xc->limit_range_valid == 0u))
        {
          if(!(beg_tim >= xc->limit_range_start))
          {
            blocks_skipped = blocks_skipped + 1;
            blkpos = blkpos + (signed long int)seclen;
            continue;
          }

          if(!(xc->limit_range_end >= beg_tim))
            break;

        }

        mem_required_for_traversal=fstReaderUint64(xc->f);
        void *return_value_malloc$4;
        return_value_malloc$4=malloc(mem_required_for_traversal + (unsigned long int)66);
        mem_for_traversal = (unsigned char *)return_value_malloc$4;
        unsigned char *ucdata;
        unsigned char *cdata;
        unsigned long int fstReaderIterBlocks2$$1$$2$$1$$4$$destlen;
        unsigned long int fstReaderIterBlocks2$$1$$2$$1$$4$$sourcelen;
        signed int fstReaderIterBlocks2$$1$$2$$1$$4$$rc;
        unsigned char *tpnt;
        unsigned long int tpval;
        unsigned int ti;
        signed int return_value_fstReaderFseeko$5;
        return_value_fstReaderFseeko$5=fstReaderFseeko(xc, xc->f, (signed long int)(((unsigned long int)blkpos + seclen) - (unsigned long int)24), 0);
        if(!(return_value_fstReaderFseeko$5 == 0))
          break;

        tsec_uclen=fstReaderUint64(xc->f);
        tsec_clen=fstReaderUint64(xc->f);
        tsec_nitems=fstReaderUint64(xc->f);
        if(!(seclen >= tsec_clen))
          break;

        void *return_value_malloc$6;
        return_value_malloc$6=malloc(tsec_uclen);
        ucdata = (unsigned char *)return_value_malloc$6;
        if(ucdata == ((unsigned char *)NULL))
          break;

        fstReaderIterBlocks2$$1$$2$$1$$4$$destlen = tsec_uclen;
        fstReaderIterBlocks2$$1$$2$$1$$4$$sourcelen = tsec_clen;
        fstReaderFseeko(xc, xc->f, (signed long int)-24 - (signed long int)tsec_clen, 1);
        if(!(tsec_uclen == tsec_clen))
        {
          void *return_value_malloc$7;
          return_value_malloc$7=malloc(tsec_clen);
          cdata = (unsigned char *)return_value_malloc$7;
          fstFread((void *)cdata, tsec_clen, (unsigned long int)1, xc->f);
          fstReaderIterBlocks2$$1$$2$$1$$4$$rc=uncompress(ucdata, &fstReaderIterBlocks2$$1$$2$$1$$4$$destlen, cdata, fstReaderIterBlocks2$$1$$2$$1$$4$$sourcelen);
          if(!(fstReaderIterBlocks2$$1$$2$$1$$4$$rc == 0))
          {
            printf("tsec uncompress rc = %d\n", fstReaderIterBlocks2$$1$$2$$1$$4$$rc);
            exit(255);
          }

          free((void *)cdata);
        }

        else
          fstFread((void *)ucdata, tsec_uclen, (unsigned long int)1, xc->f);
        free((void *)time_table);
        void *return_value_calloc$8;
        return_value_calloc$8=calloc(tsec_nitems, sizeof(unsigned long int) /*8ul*/ );
        time_table = (unsigned long int *)return_value_calloc$8;
        tpnt = ucdata;
        tpval = (unsigned long int)0;
        ti = (unsigned int)0;
        for( ; !((unsigned long int)ti >= tsec_nitems); ti = ti + 1u)
        {
          signed int fstReaderIterBlocks2$$1$$2$$1$$4$$3$$1$$skiplen;
          unsigned long int fstReaderIterBlocks2$$1$$2$$1$$4$$3$$1$$val;
          fstReaderIterBlocks2$$1$$2$$1$$4$$3$$1$$val=fstGetVarint64(tpnt, &fstReaderIterBlocks2$$1$$2$$1$$4$$3$$1$$skiplen);
          time_table[(signed long int)ti] = tpval + fstReaderIterBlocks2$$1$$2$$1$$4$$3$$1$$val;
          tpval = time_table[(signed long int)ti];
          tpnt = tpnt + (signed long int)fstReaderIterBlocks2$$1$$2$$1$$4$$3$$1$$skiplen;
        }
        void *return_value_calloc$9;
        return_value_calloc$9=calloc(tsec_nitems != 0ul ? tsec_nitems : (unsigned long int)1, sizeof(unsigned int) /*4ul*/ );
        tc_head = (unsigned int *)return_value_calloc$9;
        free((void *)ucdata);
        fstReaderFseeko(xc, xc->f, blkpos + (signed long int)32, 0);
        frame_uclen=fstReaderVarint64(xc->f);
        frame_clen=fstReaderVarint64(xc->f);
        frame_maxhandle=fstReaderVarint64(xc->f);
        if(secnum == 0u)
        {
          if(!(blocks_skipped == 0) || !(beg_tim == *time_table))
          {
            unsigned char *fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu;
            void *return_value_malloc$10;
            return_value_malloc$10=malloc(frame_uclen);
            fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu = (unsigned char *)return_value_malloc$10;
            unsigned int sig_offs = (unsigned int)0;
            if(!(fv == ((struct _IO_FILE *)NULL)))
            {
              char fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_buf[32l];
              signed int fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_len;
              if(!(beg_tim == 0ul))
              {
                fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_len=sprintf(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_buf, "#%lu\n", beg_tim);
                fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_buf, fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_len);
              }

              if(!(xc->num_blackouts == 0u))
              {
                if(!(cur_blackout == xc->num_blackouts))
                {
                  if(beg_tim == xc->blackout_times[(signed long int)cur_blackout])
                  {
                    tmp_post$11 = cur_blackout;
                    cur_blackout = cur_blackout + 1u;
                    fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_len=sprintf(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_buf, "$dump%s $end\n", xc->blackout_activity[(signed long int)tmp_post$11] != 0 ? "on" : "off");
                    fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_buf, fstReaderIterBlocks2$$1$$2$$1$$5$$1$$1$$wx_len);
                  }

                }

              }

            }

            if(frame_uclen == frame_clen)
              fstFread((void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu, frame_uclen, (unsigned long int)1, xc->f);

            else
            {
              unsigned char *fstReaderIterBlocks2$$1$$2$$1$$5$$1$$3$$mc;
              void *return_value_malloc$12;
              return_value_malloc$12=malloc(frame_clen);
              fstReaderIterBlocks2$$1$$2$$1$$5$$1$$3$$mc = (unsigned char *)return_value_malloc$12;
              signed int rc;
              unsigned long int destlen = frame_uclen;
              unsigned long int sourcelen = frame_clen;
              fstFread((void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$3$$mc, sourcelen, (unsigned long int)1, xc->f);
              rc=uncompress(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu, &destlen, fstReaderIterBlocks2$$1$$2$$1$$5$$1$$3$$mc, sourcelen);
              if(!(rc == 0))
              {
                printf("rc: %d\n", rc);
                exit(255);
              }

              free((void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$3$$mc);
            }
            idx = (unsigned int)0;
            for( ; !((unsigned long int)idx >= frame_maxhandle); idx = idx + 1u)
            {
              signed int process_idx = (signed int)(idx / (unsigned int)8);
              signed int process_bit = (signed int)(idx & (unsigned int)7);
              if(!((1 << process_bit & (signed int)xc->process_mask[(signed long int)process_idx]) == 0))
              {
                if(!(xc->signal_lens[(signed long int)idx] >= 2u))
                {
                  if(xc->signal_lens[(signed long int)idx] == 1u)
                  {
                    unsigned char fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$1$$1$$val = fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu[(signed long int)sig_offs];
                    if(!(value_change_callback == ((void (*)(void *, unsigned long int, unsigned int, const unsigned char *))NULL)))
                    {
                      xc->temp_signal_value_buf[(signed long int)0] = fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$1$$1$$val;
                      xc->temp_signal_value_buf[(signed long int)1] = (unsigned char)0;
                      value_change_callback(user_callback_data_pointer, beg_tim, idx + (unsigned int)1, xc->temp_signal_value_buf);
                    }

                    else
                      if(!(fv == ((struct _IO_FILE *)NULL)))
                      {
                        char vcd_id[16l];
                        signed int fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$1$$1$$2$$1$$vcdid_len;
                        fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$1$$1$$2$$1$$vcdid_len=fstVcdIDForFwrite(vcd_id + (signed long int)1, idx + (unsigned int)1);
                        vcd_id[(signed long int)0] = (char)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$1$$1$$val;
                        vcd_id[(signed long int)(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$1$$1$$2$$1$$vcdid_len + 1)] = (char)10;
                        fstWritex(xc, (void *)vcd_id, fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$1$$1$$2$$1$$vcdid_len + 2);
                      }

                  }

                }

                else
                  if(!((signed int)xc->signal_typs[(signed long int)idx] == FST_VT_VCD_REAL))
                  {
                    if(!(value_change_callback == ((void (*)(void *, unsigned long int, unsigned int, const unsigned char *))NULL)))
                    {
                      memcpy((void *)xc->temp_signal_value_buf, (const void *)(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu + (signed long int)sig_offs), (unsigned long int)xc->signal_lens[(signed long int)idx]);
                      xc->temp_signal_value_buf[(signed long int)xc->signal_lens[(signed long int)idx]] = (unsigned char)0;
                      value_change_callback(user_callback_data_pointer, beg_tim, idx + (unsigned int)1, xc->temp_signal_value_buf);
                    }

                    else
                      if(!(fv == ((struct _IO_FILE *)NULL)))
                      {
                        char fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcd_id[16l];
                        signed int fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcdid_len;
                        fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcdid_len=fstVcdIDForFwrite(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcd_id + (signed long int)1, idx + (unsigned int)1);
                        fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcd_id[(signed long int)0] = (char)((signed int)xc->signal_typs[(signed long int)idx] != FST_VT_VCD_PORT ? 98 : 112);
                        fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcd_id, 1);
                        fstWritex(xc, (void *)(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu + (signed long int)sig_offs), (signed int)xc->signal_lens[(signed long int)idx]);
                        fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcd_id[(signed long int)0] = (char)32;
                        fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcd_id[(signed long int)(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcdid_len + 1)] = (char)10;
                        fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcd_id, fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$1$$2$$1$$vcdid_len + 2);
                      }

                  }

                  else
                  {
                    double d;
                    unsigned char *clone_d;
                    unsigned char *srcdata = fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu + (signed long int)sig_offs;
                    if(!(value_change_callback == ((void (*)(void *, unsigned long int, unsigned int, const unsigned char *))NULL)))
                    {
                      if(!(xc->native_doubles_for_cb == 0u))
                      {
                        if(!(xc->double_endian_match == 0u))
                          clone_d = srcdata;

                        else
                        {
                          signed int fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$1$$2$$j;
                          clone_d = (unsigned char *)&d;
                          fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$1$$2$$j = 0;
                          for( ; !(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$1$$2$$j >= 8); fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$1$$2$$j = fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$1$$2$$j + 1)
                            clone_d[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$1$$2$$j] = srcdata[(signed long int)(7 - fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$1$$2$$j)];
                        }
                        value_change_callback(user_callback_data_pointer, beg_tim, idx + (unsigned int)1, clone_d);
                      }

                      else
                      {
                        clone_d = (unsigned char *)&d;
                        if(!(xc->double_endian_match == 0u))
                          memcpy((void *)clone_d, (const void *)srcdata, (unsigned long int)8);

                        else
                        {
                          signed int fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$2$$2$$j = 0;
                          for( ; !(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$2$$2$$j >= 8); fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$2$$2$$j = fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$2$$2$$j + 1)
                            clone_d[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$2$$2$$j] = srcdata[(signed long int)(7 - fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$1$$2$$2$$j)];
                        }
                        sprintf((char *)xc->temp_signal_value_buf, "%.16g", d);
                        value_change_callback(user_callback_data_pointer, beg_tim, idx + (unsigned int)1, xc->temp_signal_value_buf);
                      }
                    }

                    else
                      if(!(fv == ((struct _IO_FILE *)NULL)))
                      {
                        char vcdid_buf[16l];
                        char fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$wx_buf[64l];
                        signed int fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$wx_len;
                        clone_d = (unsigned char *)&d;
                        if(!(xc->double_endian_match == 0u))
                          memcpy((void *)clone_d, (const void *)srcdata, (unsigned long int)8);

                        else
                        {
                          signed int fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$2$$j = 0;
                          for( ; !(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$2$$j >= 8); fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$2$$j = fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$2$$j + 1)
                            clone_d[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$2$$j] = srcdata[(signed long int)(7 - fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$2$$j)];
                        }
                        fstVcdID(vcdid_buf, idx + (unsigned int)1);
                        fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$wx_len=sprintf(fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$wx_buf, "r%.16g %s\n", d, (const void *)vcdid_buf);
                        fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$wx_buf, fstReaderIterBlocks2$$1$$2$$1$$5$$1$$4$$1$$1$$2$$2$$2$$1$$wx_len);
                      }

                  }
              }

              sig_offs = sig_offs + xc->signal_lens[(signed long int)idx];
            }
            free((void *)fstReaderIterBlocks2$$1$$2$$1$$5$$1$$mu);
            fstReaderFseeko(xc, xc->f, -((signed long int)frame_clen), 1);
          }

        }

        fstReaderFseeko(xc, xc->f, (signed long int)frame_clen, 1);
        vc_maxhandle=fstReaderVarint64(xc->f);
        vc_start=ftello(xc->f);
        packtype=fgetc(xc->f);
        indx_pntr = (signed long int)(((((unsigned long int)blkpos + seclen) - (unsigned long int)24) - tsec_clen) - (unsigned long int)8);
        fstReaderFseeko(xc, xc->f, indx_pntr, 0);
        unsigned long int return_value_fstReaderUint64$13;
        return_value_fstReaderUint64$13=fstReaderUint64(xc->f);
        chain_clen = (signed long int)return_value_fstReaderUint64$13;
        indx_pos = indx_pntr - chain_clen;
        void *return_value_malloc$14;
        return_value_malloc$14=malloc((unsigned long int)chain_clen);
        chain_cmem = (unsigned char *)return_value_malloc$14;
        if(!(chain_cmem == ((unsigned char *)NULL)))
        {
          fstReaderFseeko(xc, xc->f, indx_pos, 0);
          fstFread((void *)chain_cmem, (unsigned long int)chain_clen, (unsigned long int)1, xc->f);
          if(!(vc_maxhandle_largest >= vc_maxhandle))
          {
            free((void *)chain_table);
            free((void *)chain_table_lengths);
            vc_maxhandle_largest = vc_maxhandle;
            void *return_value_calloc$15;
            return_value_calloc$15=calloc(vc_maxhandle + (unsigned long int)1, sizeof(signed long int) /*8ul*/ );
            chain_table = (signed long int *)return_value_calloc$15;
            void *return_value_calloc$16;
            return_value_calloc$16=calloc(vc_maxhandle + (unsigned long int)1, sizeof(unsigned int) /*4ul*/ );
            chain_table_lengths = (unsigned int *)return_value_calloc$16;
          }

          if(!(chain_table == ((signed long int *)NULL)) && !(chain_table_lengths == ((unsigned int *)NULL)))
          {
            pnt = chain_cmem;
            idx = (unsigned int)0;
            pval = (unsigned long int)0;
            if(sectype == 8)
            {
              unsigned int prev_alias = (unsigned int)0;
              do
              {
                signed int skiplen;
                if(!((0x01 & (signed int)*pnt) == 0))
                {
                  signed long int shval;
                  signed long int return_value_fstGetSVarint64$17;
                  return_value_fstGetSVarint64$17=fstGetSVarint64(pnt, &skiplen);
                  shval = return_value_fstGetSVarint64$17 >> 1;
                  if(shval >= 1l)
                  {
                    chain_table[(signed long int)idx] = (signed long int)(pval + (unsigned long int)shval);
                    pval = (unsigned long int)chain_table[(signed long int)idx];
                    if(!(idx == 0u))
                      chain_table_lengths[(signed long int)pidx] = (unsigned int)(pval - (unsigned long int)chain_table[(signed long int)pidx]);

                    tmp_post$18 = idx;
                    idx = idx + 1u;
                    pidx = tmp_post$18;
                  }

                  else
                    if(!(shval >= 0l))
                    {
                      chain_table[(signed long int)idx] = (signed long int)0;
                      prev_alias = (unsigned int)shval;
                      chain_table_lengths[(signed long int)idx] = prev_alias;
                      idx = idx + 1u;
                    }

                    else
                    {
                      chain_table[(signed long int)idx] = (signed long int)0;
                      chain_table_lengths[(signed long int)idx] = prev_alias;
                      idx = idx + 1u;
                    }
                }

                else
                {
                  unsigned long int fstReaderIterBlocks2$$1$$2$$1$$7$$1$$2$$val;
                  unsigned int return_value_fstGetVarint32$19;
                  return_value_fstGetVarint32$19=fstGetVarint32(pnt, &skiplen);
                  fstReaderIterBlocks2$$1$$2$$1$$7$$1$$2$$val = (unsigned long int)return_value_fstGetVarint32$19;
                  unsigned int fstReaderIterBlocks2$$1$$2$$1$$7$$1$$2$$loopcnt = (unsigned int)(fstReaderIterBlocks2$$1$$2$$1$$7$$1$$2$$val >> 1);
                  i = (unsigned int)0;
                  for( ; !(i >= fstReaderIterBlocks2$$1$$2$$1$$7$$1$$2$$loopcnt); i = i + 1u)
                  {
                    tmp_post$20 = idx;
                    idx = idx + 1u;
                    chain_table[(signed long int)tmp_post$20] = (signed long int)0;
                  }
                }
                pnt = pnt + (signed long int)skiplen;
              }
              while(!(pnt == chain_cmem + chain_clen));
            }

            else
              do
              {
                signed int fstReaderIterBlocks2$$1$$2$$1$$8$$1$$skiplen;
                unsigned long int fstReaderIterBlocks2$$1$$2$$1$$8$$1$$val;
                unsigned int return_value_fstGetVarint32$21;
                return_value_fstGetVarint32$21=fstGetVarint32(pnt, &fstReaderIterBlocks2$$1$$2$$1$$8$$1$$skiplen);
                fstReaderIterBlocks2$$1$$2$$1$$8$$1$$val = (unsigned long int)return_value_fstGetVarint32$21;
                if(fstReaderIterBlocks2$$1$$2$$1$$8$$1$$val == 0ul)
                {
                  pnt = pnt + (signed long int)fstReaderIterBlocks2$$1$$2$$1$$8$$1$$skiplen;
                  unsigned int return_value_fstGetVarint32$22;
                  return_value_fstGetVarint32$22=fstGetVarint32(pnt, &fstReaderIterBlocks2$$1$$2$$1$$8$$1$$skiplen);
                  fstReaderIterBlocks2$$1$$2$$1$$8$$1$$val = (unsigned long int)return_value_fstGetVarint32$22;
                  chain_table[(signed long int)idx] = (signed long int)0;
                  chain_table_lengths[(signed long int)idx] = (unsigned int)-fstReaderIterBlocks2$$1$$2$$1$$8$$1$$val;
                  idx = idx + 1u;
                }

                else
                  if(!((1ul & fstReaderIterBlocks2$$1$$2$$1$$8$$1$$val) == 0ul))
                  {
                    chain_table[(signed long int)idx] = (signed long int)(pval + (fstReaderIterBlocks2$$1$$2$$1$$8$$1$$val >> 1));
                    pval = (unsigned long int)chain_table[(signed long int)idx];
                    if(!(idx == 0u))
                      chain_table_lengths[(signed long int)pidx] = (unsigned int)(pval - (unsigned long int)chain_table[(signed long int)pidx]);

                    tmp_post$23 = idx;
                    idx = idx + 1u;
                    pidx = tmp_post$23;
                  }

                  else
                  {
                    unsigned int loopcnt = (unsigned int)(fstReaderIterBlocks2$$1$$2$$1$$8$$1$$val >> 1);
                    i = (unsigned int)0;
                    for( ; !(i >= loopcnt); i = i + 1u)
                    {
                      tmp_post$24 = idx;
                      idx = idx + 1u;
                      chain_table[(signed long int)tmp_post$24] = (signed long int)0;
                    }
                  }
                pnt = pnt + (signed long int)fstReaderIterBlocks2$$1$$2$$1$$8$$1$$skiplen;
              }
              while(!(pnt == chain_cmem + chain_clen));
            chain_table[(signed long int)idx] = indx_pos - vc_start;
            chain_table_lengths[(signed long int)pidx] = (unsigned int)(chain_table[(signed long int)idx] - chain_table[(signed long int)pidx]);
            i = (unsigned int)0;
            for( ; !(i >= idx); i = i + 1u)
            {
              signed int v32 = (signed int)chain_table_lengths[(signed long int)i];
              if(!(v32 >= 0))
              {
                if(chain_table[(signed long int)i] == 0l)
                {
                  v32 = -v32;
                  v32 = v32 - 1;
                  if(!((unsigned int)v32 >= i))
                  {
                    chain_table[(signed long int)i] = chain_table[(signed long int)v32];
                    chain_table_lengths[(signed long int)i] = chain_table_lengths[(signed long int)v32];
                  }

                }

              }

            }
            mc_mem_len = (unsigned int)16384;
            return_value_malloc$25=malloc((unsigned long int)mc_mem_len);
            mc_mem = (unsigned char *)return_value_malloc$25;
            if(!(xc->maxhandle >= idx))
              idx = xc->maxhandle;

            i = (unsigned int)0;
            for( ; !(i >= idx); i = i + 1u)
              if(!(chain_table[(signed long int)i] == 0l))
              {
                signed int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$process_idx = (signed int)(i / (unsigned int)8);
                signed int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$process_bit = (signed int)(i & (unsigned int)7);
                if(!((1 << fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$process_bit & (signed int)xc->process_mask[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$process_idx]) == 0))
                {
                  signed int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$rc = 0;
                  unsigned int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$val;
                  unsigned int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$skiplen;
                  unsigned int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$tdelta;
                  fstReaderFseeko(xc, xc->f, vc_start + chain_table[(signed long int)i], 0);
                  fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$val=fstReaderVarint32WithSkip(xc->f, &fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$skiplen);
                  if(!(fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$val == 0u))
                  {
                    unsigned char *mu = mem_for_traversal + (signed long int)traversal_mem_offs;
                    unsigned char *mc;
                    unsigned long int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$destlen = (unsigned long int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$val;
                    unsigned long int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$sourcelen = (unsigned long int)chain_table_lengths[(signed long int)i];
                    if(!(mc_mem_len >= chain_table_lengths[(signed long int)i]))
                    {
                      free((void *)mc_mem);
                      mc_mem_len = chain_table_lengths[(signed long int)i];
                      void *return_value_malloc$26;
                      return_value_malloc$26=malloc((unsigned long int)mc_mem_len);
                      mc_mem = (unsigned char *)return_value_malloc$26;
                    }

                    mc = mc_mem;
                    fstFread((void *)mc, (unsigned long int)chain_table_lengths[(signed long int)i], (unsigned long int)1, xc->f);
                    switch(packtype)
                    {
                      case 52:
                      {
                        return_value_LZ4_decompress_safe_partial$27=LZ4_decompress_safe_partial((char *)mc, (char *)mu, (signed int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$sourcelen, (signed int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$destlen, (signed int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$destlen);
                        fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$rc = fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$destlen == (unsigned long int)return_value_LZ4_decompress_safe_partial$27 ? 0 : -3;
                        break;
                      }
                      case 70:
                      {
                        fastlz_decompress((const void *)mc, (signed int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$sourcelen, (void *)mu, (signed int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$destlen);
                        break;
                      }
                      default:
                        fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$rc=uncompress(mu, &fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$destlen, mc, fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$1$$sourcelen);
                    }
                    headptr[(signed long int)i] = traversal_mem_offs;
                    length_remaining[(signed long int)i] = fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$val;
                    traversal_mem_offs = traversal_mem_offs + fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$val;
                  }

                  else
                  {
                    signed int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$2$$destlen = (signed int)(chain_table_lengths[(signed long int)i] - fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$skiplen);
                    unsigned char *fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$2$$mu = mem_for_traversal + (signed long int)traversal_mem_offs;
                    fstFread((void *)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$2$$mu, (unsigned long int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$2$$destlen, (unsigned long int)1, xc->f);
                    headptr[(signed long int)i] = traversal_mem_offs;
                    length_remaining[(signed long int)i] = (unsigned int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$2$$destlen;
                    traversal_mem_offs = traversal_mem_offs + (unsigned int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$2$$destlen;
                  }
                  if(!(fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$rc == 0))
                  {
                    printf("\tfac: %d clen: %d (rc=%d)\n", (signed int)i, (signed int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$val, fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$rc);
                    exit(255);
                  }

                  if(xc->signal_lens[(signed long int)i] == 1u)
                  {
                    unsigned int vli;
                    vli=fstGetVarint32NoSkip(mem_for_traversal + (signed long int)headptr[(signed long int)i]);
                    unsigned int shcnt = (unsigned int)(2 << (vli & (unsigned int)1));
                    fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$tdelta = vli >> shcnt;
                  }

                  else
                  {
                    unsigned int fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$5$$vli;
                    fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$5$$vli=fstGetVarint32NoSkip(mem_for_traversal + (signed long int)headptr[(signed long int)i]);
                    fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$tdelta = fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$5$$vli >> 1;
                  }
                  scatterptr[(signed long int)i] = tc_head[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$tdelta];
                  tc_head[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$10$$1$$1$$1$$tdelta] = i + (unsigned int)1;
                }

              }

            free((void *)mc_mem);
            i = (unsigned int)0;
            for( ; !((unsigned long int)i >= tsec_nitems); i = i + 1u)
            {
              unsigned int tdelta;
              signed int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
              signed int skiplen2;
              unsigned int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli;
              if(!(fv == ((struct _IO_FILE *)NULL)))
              {
                char fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_buf[32l];
                signed int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_len;
                if(!(time_table[(signed long int)i] == previous_time))
                {
                  if(!(xc->limit_range_valid == 0u))
                  {
                    if(!(xc->limit_range_end >= time_table[(signed long int)i]))
                      break;

                  }

                  fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_len=sprintf(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_buf, "#%lu\n", time_table[(signed long int)i]);
                  fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_buf, fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_len);
                  if(!(xc->num_blackouts == 0u))
                  {
                    if(!(cur_blackout == xc->num_blackouts))
                    {
                      if(time_table[(signed long int)i] == xc->blackout_times[(signed long int)cur_blackout])
                      {
                        tmp_post$28 = cur_blackout;
                        cur_blackout = cur_blackout + 1u;
                        fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_len=sprintf(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_buf, "$dump%s $end\n", xc->blackout_activity[(signed long int)tmp_post$28] != 0 ? "on" : "off");
                        fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_buf, fstReaderIterBlocks2$$1$$2$$1$$11$$1$$1$$wx_len);
                      }

                    }

                  }

                  previous_time = time_table[(signed long int)i];
                }

              }

              while(!(tc_head[(signed long int)i] == 0u))
              {
                idx = tc_head[(signed long int)i] - (unsigned int)1;
                fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli=fstGetVarint32(mem_for_traversal + (signed long int)headptr[(signed long int)idx], &fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen);
                if(!(xc->signal_lens[(signed long int)idx] >= 2u))
                {
                  if(xc->signal_lens[(signed long int)idx] == 1u)
                  {
                    unsigned char val;
                    if((1u & fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli) == 0u)
                      val = (unsigned char)(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli >> 1 & (unsigned int)1 | (unsigned int)48);

                    else
                      val = (unsigned char)"xzhuwl-?"[(signed long int)(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli >> 1 & (unsigned int)7)];
                    if(!(value_change_callback == ((void (*)(void *, unsigned long int, unsigned int, const unsigned char *))NULL)))
                    {
                      xc->temp_signal_value_buf[(signed long int)0] = val;
                      xc->temp_signal_value_buf[(signed long int)1] = (unsigned char)0;
                      value_change_callback(user_callback_data_pointer, time_table[(signed long int)i], idx + (unsigned int)1, xc->temp_signal_value_buf);
                    }

                    else
                      if(!(fv == ((struct _IO_FILE *)NULL)))
                      {
                        char fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcd_id[16l];
                        signed int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcdid_len;
                        fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcdid_len=fstVcdIDForFwrite(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcd_id + (signed long int)1, idx + (unsigned int)1);
                        fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcd_id[(signed long int)0] = (char)val;
                        fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcd_id[(signed long int)(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcdid_len + 1)] = (char)10;
                        fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcd_id, fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$1$$4$$1$$vcdid_len + 2);
                      }

                    headptr[(signed long int)idx] = headptr[(signed long int)idx] + (unsigned int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
                    length_remaining[(signed long int)idx] = length_remaining[(signed long int)idx] - (unsigned int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
                    tc_head[(signed long int)i] = scatterptr[(signed long int)idx];
                    scatterptr[(signed long int)idx] = (unsigned int)0;
                    if(!(length_remaining[(signed long int)idx] == 0u))
                    {
                      signed int shamt;
                      fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli=fstGetVarint32NoSkip(mem_for_traversal + (signed long int)headptr[(signed long int)idx]);
                      shamt = 2 << (fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli & (unsigned int)1);
                      tdelta = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli >> shamt;
                      scatterptr[(signed long int)idx] = tc_head[(signed long int)(i + tdelta)];
                      tc_head[(signed long int)(i + tdelta)] = idx + (unsigned int)1;
                    }

                  }

                  else
                  {
                    unsigned char *vdata;
                    unsigned int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$len;
                    fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli=fstGetVarint32(mem_for_traversal + (signed long int)headptr[(signed long int)idx], &fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen);
                    fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$len=fstGetVarint32(mem_for_traversal + (signed long int)headptr[(signed long int)idx] + (signed long int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen, &skiplen2);
                    fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen + skiplen2;
                    vdata = mem_for_traversal + (signed long int)headptr[(signed long int)idx] + (signed long int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
                    if((1u & fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli) == 0u)
                    {
                      if(!(value_change_callback_varlen == ((void (*)(void *, unsigned long int, unsigned int, const unsigned char *, unsigned int))NULL)))
                        value_change_callback_varlen(user_callback_data_pointer, time_table[(signed long int)i], idx + (unsigned int)1, vdata, fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$len);

                      else
                        if(!(fv == ((struct _IO_FILE *)NULL)))
                        {
                          char fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcd_id[16l];
                          signed int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcdid_len;
                          fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcd_id[(signed long int)0] = (char)115;
                          fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcd_id, 1);
                          fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcdid_len=fstVcdIDForFwrite(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcd_id + (signed long int)1, idx + (unsigned int)1);
                          unsigned char *vesc;
                          void *return_value_malloc$29;
                          return_value_malloc$29=malloc((unsigned long int)(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$len * (unsigned int)4 + (unsigned int)1));
                          vesc = (unsigned char *)return_value_malloc$29;
                          signed int vlen;
                          vlen=fstUtilityBinToEsc(vesc, vdata, (signed int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$len);
                          fstWritex(xc, (void *)vesc, vlen);
                          free((void *)vesc);
                          fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcd_id[(signed long int)0] = (char)32;
                          fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcd_id[(signed long int)(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcdid_len + 1)] = (char)10;
                          fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcd_id, fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$1$$2$$1$$vcdid_len + 2);
                        }

                    }

                    fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen + (signed int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$1$$2$$len;
                    headptr[(signed long int)idx] = headptr[(signed long int)idx] + (unsigned int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
                    length_remaining[(signed long int)idx] = length_remaining[(signed long int)idx] - (unsigned int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
                    tc_head[(signed long int)i] = scatterptr[(signed long int)idx];
                    scatterptr[(signed long int)idx] = (unsigned int)0;
                    if(!(length_remaining[(signed long int)idx] == 0u))
                    {
                      fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli=fstGetVarint32NoSkip(mem_for_traversal + (signed long int)headptr[(signed long int)idx]);
                      tdelta = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli >> 1;
                      scatterptr[(signed long int)idx] = tc_head[(signed long int)(i + tdelta)];
                      tc_head[(signed long int)(i + tdelta)] = idx + (unsigned int)1;
                    }

                  }
                }

                else
                {
                  unsigned int len = xc->signal_lens[(signed long int)idx];
                  unsigned char *fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$vdata;
                  fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli=fstGetVarint32(mem_for_traversal + (signed long int)headptr[(signed long int)idx], &fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen);
                  fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$vdata = mem_for_traversal + (signed long int)headptr[(signed long int)idx] + (signed long int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
                  if(!((signed int)xc->signal_typs[(signed long int)idx] == FST_VT_VCD_REAL))
                  {
                    if((1u & fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli) == 0u)
                    {
                      signed int byte = 0;
                      signed int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$bit;
                      unsigned int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$j = (unsigned int)0;
                      for( ; !(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$j >= len); fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$j = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$j + 1u)
                      {
                        unsigned char ch;
                        byte = (signed int)(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$j / (unsigned int)8);
                        fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$bit = (signed int)((unsigned int)7 - (fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$j & (unsigned int)7));
                        ch = (unsigned char)((signed int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$vdata[(signed long int)byte] >> fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$bit & 1 | 48);
                        xc->temp_signal_value_buf[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$j] = ch;
                      }
                      xc->temp_signal_value_buf[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$1$$j] = (unsigned char)0;
                      if(!(value_change_callback == ((void (*)(void *, unsigned long int, unsigned int, const unsigned char *))NULL)))
                        value_change_callback(user_callback_data_pointer, time_table[(signed long int)i], idx + (unsigned int)1, xc->temp_signal_value_buf);

                      else
                        if(!(fv == ((struct _IO_FILE *)NULL)))
                        {
                          unsigned char ch_bp = (unsigned char)((signed int)xc->signal_typs[(signed long int)idx] != FST_VT_VCD_PORT ? 98 : 112);
                          fstWritex(xc, (void *)&ch_bp, 1);
                          fstWritex(xc, (void *)xc->temp_signal_value_buf, (signed int)len);
                        }

                      len = (unsigned int)(byte + 1);
                    }

                    else
                      if(!(value_change_callback == ((void (*)(void *, unsigned long int, unsigned int, const unsigned char *))NULL)))
                      {
                        memcpy((void *)xc->temp_signal_value_buf, (const void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$vdata, (unsigned long int)len);
                        xc->temp_signal_value_buf[(signed long int)len] = (unsigned char)0;
                        value_change_callback(user_callback_data_pointer, time_table[(signed long int)i], idx + (unsigned int)1, xc->temp_signal_value_buf);
                      }

                      else
                        if(!(fv == ((struct _IO_FILE *)NULL)))
                        {
                          unsigned char fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$2$$2$$1$$ch_bp = (unsigned char)((signed int)xc->signal_typs[(signed long int)idx] != FST_VT_VCD_PORT ? 98 : 112);
                          fstWritex(xc, (void *)&fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$1$$2$$2$$1$$ch_bp, 1);
                          fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$vdata, (signed int)len);
                        }

                  }

                  else
                  {
                    double fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$d;
                    unsigned char *fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d;
                    unsigned char buf[8l];
                    unsigned char *fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata;
                    if((1u & fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli) == 0u)
                    {
                      signed int bit;
                      signed int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$j = 0;
                      for( ; !(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$j >= 8); fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$j = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$j + 1)
                      {
                        unsigned char fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$1$$1$$ch;
                        bit = 7 - (fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$j & 7);
                        fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$1$$1$$ch = (unsigned char)((signed int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$vdata[(signed long int)0] >> bit & 1 | 48);
                        buf[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$j] = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$1$$1$$1$$ch;
                      }
                      len = (unsigned int)1;
                      fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata = buf;
                    }

                    else
                      fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$vdata;
                    if(!(value_change_callback == ((void (*)(void *, unsigned long int, unsigned int, const unsigned char *))NULL)))
                    {
                      if(!(xc->native_doubles_for_cb == 0u))
                      {
                        if(!(xc->double_endian_match == 0u))
                          fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata;

                        else
                        {
                          signed int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$3$$1$$2$$j;
                          fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d = (unsigned char *)&fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$d;
                          fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$3$$1$$2$$j = 0;
                          for( ; !(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$3$$1$$2$$j >= 8); fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$3$$1$$2$$j = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$3$$1$$2$$j + 1)
                            fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$3$$1$$2$$j] = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata[(signed long int)(7 - fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$3$$1$$2$$j)];
                        }
                        value_change_callback(user_callback_data_pointer, time_table[(signed long int)i], idx + (unsigned int)1, fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d);
                      }

                      else
                      {
                        fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d = (unsigned char *)&fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$d;
                        if(!(xc->double_endian_match == 0u))
                          memcpy((void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d, (const void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata, (unsigned long int)8);

                        else
                        {
                          signed int j = 0;
                          for( ; !(j >= 8); j = j + 1)
                            fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d[(signed long int)j] = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata[(signed long int)(7 - j)];
                        }
                        sprintf((char *)xc->temp_signal_value_buf, "%.16g", fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$d);
                        value_change_callback(user_callback_data_pointer, time_table[(signed long int)i], idx + (unsigned int)1, xc->temp_signal_value_buf);
                      }
                    }

                    else
                      if(!(fv == ((struct _IO_FILE *)NULL)))
                      {
                        char wx_buf[32l];
                        signed int wx_len;
                        fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d = (unsigned char *)&fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$d;
                        if(!(xc->double_endian_match == 0u))
                          memcpy((void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d, (const void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata, (unsigned long int)8);

                        else
                        {
                          signed int fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$4$$1$$2$$j = 0;
                          for( ; !(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$4$$1$$2$$j >= 8); fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$4$$1$$2$$j = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$4$$1$$2$$j + 1)
                            fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$clone_d[(signed long int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$4$$1$$2$$j] = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$srcdata[(signed long int)(7 - fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$4$$1$$2$$j)];
                        }
                        wx_len=sprintf(wx_buf, "r%.16g", fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$2$$d);
                        fstWritex(xc, (void *)wx_buf, wx_len);
                      }

                  }
                  if(!(fv == ((struct _IO_FILE *)NULL)))
                  {
                    char fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$3$$vcd_id[16l];
                    signed int vcdid_len;
                    vcdid_len=fstVcdIDForFwrite(fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$3$$vcd_id + (signed long int)1, idx + (unsigned int)1);
                    fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$3$$vcd_id[(signed long int)0] = (char)32;
                    fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$3$$vcd_id[(signed long int)(vcdid_len + 1)] = (char)10;
                    fstWritex(xc, (void *)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$2$$2$$3$$vcd_id, vcdid_len + 2);
                  }

                  fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen + (signed int)len;
                  headptr[(signed long int)idx] = headptr[(signed long int)idx] + (unsigned int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
                  length_remaining[(signed long int)idx] = length_remaining[(signed long int)idx] - (unsigned int)fstReaderIterBlocks2$$1$$2$$1$$11$$1$$skiplen;
                  tc_head[(signed long int)i] = scatterptr[(signed long int)idx];
                  scatterptr[(signed long int)idx] = (unsigned int)0;
                  if(!(length_remaining[(signed long int)idx] == 0u))
                  {
                    fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli=fstGetVarint32NoSkip(mem_for_traversal + (signed long int)headptr[(signed long int)idx]);
                    tdelta = fstReaderIterBlocks2$$1$$2$$1$$11$$1$$vli >> 1;
                    scatterptr[(signed long int)idx] = tc_head[(signed long int)(i + tdelta)];
                    tc_head[(signed long int)(i + tdelta)] = idx + (unsigned int)1;
                  }

                }
              }
            }
          }

        }


      block_err:
        ;
        free((void *)tc_head);
        free((void *)chain_cmem);
        free((void *)mem_for_traversal);
        mem_for_traversal = (unsigned char *)(void *)0;
        secnum = secnum + 1u;
        if((unsigned long int)secnum == xc->vc_section_count)
          break;

        blkpos = blkpos + (signed long int)seclen;
      }
    }
    while((_Bool)1);
    if(!(mem_for_traversal == ((unsigned char *)NULL)))
      free((void *)mem_for_traversal);

    free((void *)length_remaining);
    free((void *)headptr);
    free((void *)scatterptr);
    if(!(chain_table == ((signed long int *)NULL)))
      free((void *)chain_table);

    if(!(chain_table_lengths == ((unsigned int *)NULL)))
      free((void *)chain_table_lengths);

    free((void *)time_table);
    if(!(fv == ((struct _IO_FILE *)NULL)))
      fstWritex(xc, (void *)0, 0);

    return 1;
  }
}

// fstReaderIterBlocksSetNativeDoublesOnCallback
// file ./fst/fstapi.c line 3556
void fstReaderIterBlocksSetNativeDoublesOnCallback(void *ctx, signed int enable)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    xc->native_doubles_for_cb = (unsigned int)(enable != 0);

}

// fstReaderIterateHier
// file ./fst/fstapi.c line 3781
struct fstHier * fstReaderIterateHier(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  signed int isfeof;
  unsigned int alias;
  char *pnt;
  signed int ch;
  signed int return_value_fgetc$2;
  char *tmp_post$3;
  char *tmp_post$4;
  signed int return_value_fgetc$5;
  signed int return_value_fgetc$6;
  char *tmp_post$7;
  _Bool tmp_if_expr$8;
  signed int return_value_fgetc$9;
  char *tmp_post$10;
  struct fstHier *tmp_if_expr$11;
  if(xc == ((struct fstReaderContext *)NULL))
    return (struct fstHier *)(void *)0;

  else
  {
    if(xc->fh == ((struct _IO_FILE *)NULL))
    {
      signed int return_value_fstReaderRecreateHierFile$1;
      return_value_fstReaderRecreateHierFile$1=fstReaderRecreateHierFile(xc);
      if(return_value_fstReaderRecreateHierFile$1 == 0)
        return (struct fstHier *)(void *)0;

    }

    if(!(xc->do_rewind == 0u))
    {
      xc->do_rewind = (unsigned int)0;
      xc->current_handle = (unsigned int)0;
      fstReaderFseeko(xc, xc->fh, (signed long int)0, 0);
      clearerr(xc->fh);
    }

    isfeof=feof(xc->fh);
    if(isfeof == 0)
    {
      signed int tag;
      tag=fgetc(xc->fh);
      switch(tag)
      {
        case FST_ST_VCD_SCOPE:
        {
          xc->hier.htyp = (unsigned char)0;
          return_value_fgetc$2=fgetc(xc->fh);
          xc->hier.u.scope.typ = (unsigned char)return_value_fgetc$2;
          pnt = xc->str_scope_nam;
          xc->hier.u.scope.name = pnt;
          do
          {
            ch=fgetc(xc->fh);
            if(ch == 0)
              break;

            tmp_post$3 = pnt;
            pnt = pnt + 1l;
            *tmp_post$3 = (char)ch;
          }
          while((_Bool)1);
          *pnt = (char)0;
          xc->hier.u.scope.name_length = (unsigned int)(pnt - xc->hier.u.scope.name);
          pnt = xc->str_scope_comp;
          xc->hier.u.scope.component = pnt;
          do
          {
            ch=fgetc(xc->fh);
            if(ch == 0)
              break;

            tmp_post$4 = pnt;
            pnt = pnt + 1l;
            *tmp_post$4 = (char)ch;
          }
          while((_Bool)1);
          *pnt = (char)0;
          xc->hier.u.scope.component_length = (unsigned int)(pnt - xc->hier.u.scope.component);
          break;
        }
        case FST_ST_VCD_UPSCOPE:
        {
          xc->hier.htyp = (unsigned char)1;
          break;
        }
        case FST_ST_GEN_ATTRBEGIN:
        {
          xc->hier.htyp = (unsigned char)3;
          return_value_fgetc$5=fgetc(xc->fh);
          xc->hier.u.attr.typ = (unsigned char)return_value_fgetc$5;
          return_value_fgetc$6=fgetc(xc->fh);
          xc->hier.u.attr.subtype = (unsigned char)return_value_fgetc$6;
          pnt = xc->str_scope_nam;
          xc->hier.u.attr.name = pnt;
          do
          {
            ch=fgetc(xc->fh);
            if(ch == 0)
              break;

            tmp_post$7 = pnt;
            pnt = pnt + 1l;
            *tmp_post$7 = (char)ch;
          }
          while((_Bool)1);
          *pnt = (char)0;
          xc->hier.u.attr.name_length = (unsigned int)(pnt - xc->hier.u.scope.name);
          xc->hier.u.attr.arg=fstReaderVarint64(xc->fh);
          if((signed int)xc->hier.u.attr.typ == FST_AT_MISC)
          {
            if((signed int)xc->hier.u.attr.subtype == 4)
              tmp_if_expr$8 = (_Bool)1;

            else
              tmp_if_expr$8 = (signed int)xc->hier.u.attr.subtype == 5 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$8)
            {
              signed int sidx_skiplen_dummy = 0;
              xc->hier.u.attr.arg_from_name=fstGetVarint64((unsigned char *)xc->str_scope_nam, &sidx_skiplen_dummy);
            }

          }

          break;
        }
        case FST_ST_GEN_ATTREND:
        {
          xc->hier.htyp = (unsigned char)4;
          break;
        }
        case FST_VT_VCD_EVENT:

        case FST_VT_VCD_INTEGER:

        case FST_VT_VCD_PARAMETER:

        case FST_VT_VCD_REAL:

        case FST_VT_VCD_REAL_PARAMETER:

        case FST_VT_VCD_REG:

        case FST_VT_VCD_SUPPLY0:

        case FST_VT_VCD_SUPPLY1:

        case FST_VT_VCD_TIME:

        case FST_VT_VCD_TRI:

        case FST_VT_VCD_TRIAND:

        case FST_VT_VCD_TRIOR:

        case FST_VT_VCD_TRIREG:

        case FST_VT_VCD_TRI0:

        case FST_VT_VCD_TRI1:

        case FST_VT_VCD_WAND:

        case FST_VT_VCD_WIRE:

        case FST_VT_VCD_WOR:

        case FST_VT_VCD_PORT:

        case FST_VT_VCD_SPARRAY:

        case FST_VT_VCD_REALTIME:

        case FST_VT_GEN_STRING:

        case FST_VT_SV_BIT:

        case FST_VT_SV_LOGIC:

        case FST_VT_SV_INT:

        case FST_VT_SV_SHORTINT:

        case FST_VT_SV_LONGINT:

        case FST_VT_SV_BYTE:

        case FST_VT_SV_ENUM:

        case FST_VT_SV_SHORTREAL:
        {
          xc->hier.htyp = (unsigned char)2;
          xc->hier.u.var.svt_workspace = (unsigned char)FST_SVT_NONE;
          xc->hier.u.var.sdt_workspace = (unsigned char)FST_SDT_NONE;
          xc->hier.u.var.sxt_workspace = (unsigned int)0;
          xc->hier.u.var.typ = (unsigned char)tag;
          return_value_fgetc$9=fgetc(xc->fh);
          xc->hier.u.var.direction = (unsigned char)return_value_fgetc$9;
          pnt = xc->str_scope_nam;
          xc->hier.u.var.name = pnt;
          do
          {
            ch=fgetc(xc->fh);
            if(ch == 0)
              break;

            tmp_post$10 = pnt;
            pnt = pnt + 1l;
            *tmp_post$10 = (char)ch;
          }
          while((_Bool)1);
          *pnt = (char)0;
          xc->hier.u.var.name_length = (unsigned int)(pnt - xc->hier.u.var.name);
          xc->hier.u.var.length=fstReaderVarint32(xc->fh);
          if(tag == FST_VT_VCD_PORT)
          {
            xc->hier.u.var.length = xc->hier.u.var.length - (unsigned int)2;
            xc->hier.u.var.length = xc->hier.u.var.length / (unsigned int)3;
          }

          alias=fstReaderVarint32(xc->fh);
          if(alias == 0u)
          {
            xc->current_handle = xc->current_handle + 1u;
            xc->hier.u.var.handle = xc->current_handle;
            xc->hier.u.var.is_alias = (unsigned int)0;
          }

          else
          {
            xc->hier.u.var.handle = alias;
            xc->hier.u.var.is_alias = (unsigned int)1;
          }
          break;
        }
        default:
          isfeof = 1;
      }
    }

    if(isfeof == 0)
      tmp_if_expr$11 = &xc->hier;

    else
      tmp_if_expr$11 = (struct fstHier *)(void *)0;
    return tmp_if_expr$11;
  }
}

// fstReaderIterateHierRewind
// file ./fst/fstapi.c line 3761
signed int fstReaderIterateHierRewind(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  signed int pass_status = 0;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    pass_status = 1;
    if(xc->fh == ((struct _IO_FILE *)NULL))
      pass_status=fstReaderRecreateHierFile(xc);

    xc->do_rewind = (unsigned int)1;
  }

  return pass_status;
}

// fstReaderOpen
// file fst/fstapi.h line 405
void * fstReaderOpen(const char *nam)
{
  struct fstReaderContext *xc;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct fstReaderContext) /*67248ul*/ );
  xc = (struct fstReaderContext *)return_value_calloc$1;
  _Bool tmp_if_expr$9;
  if(nam == ((const char *)NULL))
    tmp_if_expr$9 = (_Bool)1;

  else
  {
    xc->f=fopen(nam, "rb");
    tmp_if_expr$9 = !(xc->f != ((struct _IO_FILE *)NULL)) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$6;
  if(tmp_if_expr$9)
  {
    free((void *)xc);
    xc = (struct fstReaderContext *)(void *)0;
  }

  else
  {
    signed int flen;
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(nam);
    flen = (signed int)return_value_strlen$2;
    char *hf;
    void *return_value_calloc$3;
    return_value_calloc$3=calloc((unsigned long int)1, (unsigned long int)(flen + 6));
    hf = (char *)return_value_calloc$3;
    signed int rc;
    memcpy((void *)hf, (const void *)nam, (unsigned long int)flen);
    strcpy(hf + (signed long int)flen, ".hier");
    xc->fh=fopen(hf, "rb");
    free((void *)hf);
    xc->filename=strdup(nam);
    rc=fstReaderInit(xc);
    if(!(rc == 0))
      tmp_if_expr$4 = xc->vc_section_count != 0ul ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$4 = (_Bool)0;
    if(tmp_if_expr$4)
      tmp_if_expr$5 = xc->maxhandle != 0u ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
    {
      if(!(xc->fh == ((struct _IO_FILE *)NULL)))
        tmp_if_expr$7 = (_Bool)1;

      else
      {
        if(!(xc->contains_hier_section == 0u))
          tmp_if_expr$6 = (_Bool)1;

        else
          tmp_if_expr$6 = xc->contains_hier_section_lz4 != 0u ? (_Bool)1 : (_Bool)0;
        tmp_if_expr$7 = tmp_if_expr$6 ? (_Bool)1 : (_Bool)0;
      }
      tmp_if_expr$8 = tmp_if_expr$7 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$8 = (_Bool)0;
    if(tmp_if_expr$8)
      xc->do_rewind = (unsigned int)1;

    else
    {
      fstReaderClose((void *)xc);
      xc = (struct fstReaderContext *)(void *)0;
    }
  }
  return (void *)xc;
}

// fstReaderOpenForUtilitiesOnly
// file ./fst/fstapi.c line 4541
void * fstReaderOpenForUtilitiesOnly(void)
{
  struct fstReaderContext *xc;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct fstReaderContext) /*67248ul*/ );
  xc = (struct fstReaderContext *)return_value_calloc$1;
  return (void *)xc;
}

// fstReaderPopScope
// file ./fst/fstapi.c line 3209
const char * fstReaderPopScope(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  char *tmp_if_expr$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    if(!(xc->curr_hier == ((struct fstCurrHier *)NULL)))
    {
      struct fstCurrHier *ch = xc->curr_hier;
      if(!(xc->curr_hier->prev == ((struct fstCurrHier *)NULL)))
        xc->curr_flat_hier_nam[(signed long int)xc->curr_hier->prev->len] = (char)0;

      else
        *xc->curr_flat_hier_nam = (char)0;
      xc->curr_hier = xc->curr_hier->prev;
      free((void *)ch);
      if(!(xc->curr_flat_hier_nam == ((char *)NULL)))
        tmp_if_expr$1 = xc->curr_flat_hier_nam;

      else
        tmp_if_expr$1 = "";
      return tmp_if_expr$1;
    }

  }

  return (const char *)(void *)0;
}

// fstReaderProcessHier
// file fst/fstapi.h line 408
signed int fstReaderProcessHier(void *ctx, struct _IO_FILE *fv)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  char *str;
  char *pnt;
  signed int ch;
  signed int scopetype;
  signed int vartype;
  unsigned int len;
  unsigned int alias;
  unsigned int num_signal_dyn = (unsigned int)65536;
  signed int attrtype;
  signed int subtype;
  unsigned long int attrarg;
  unsigned int maxhandle_scanbuild;
  signed int return_value_feof$5;
  char *tmp_post$6;
  signed int return_value_fgetc$7;
  char *tmp_post$8;
  char *tmp_post$9;
  unsigned int tmp_if_expr$12;
  if(xc == ((struct fstReaderContext *)NULL))
    return 0;

  else
  {
    xc->longest_signal_value_len = (unsigned int)32;
    if(xc->fh == ((struct _IO_FILE *)NULL))
    {
      signed int return_value_fstReaderRecreateHierFile$1;
      return_value_fstReaderRecreateHierFile$1=fstReaderRecreateHierFile(xc);
      if(return_value_fstReaderRecreateHierFile$1 == 0)
        return 0;

    }

    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)(65536 + 4096 + 1));
    str = (char *)return_value_malloc$2;
    if(!(fv == ((struct _IO_FILE *)NULL)))
    {
      char time_dimension[2l] = { (char)0, (char)0 };
      signed int time_scale = 1;
      fprintf(fv, "$date\n\t%s\n$end\n", (const void *)xc->date);
      fprintf(fv, "$version\n\t%s\n$end\n", (const void *)xc->version);
      if(!(xc->timezero == 0l))
        fprintf(fv, "$timezero\n\t%ld\n$end\n", xc->timezero);

      if(!((signed int)xc->timescale == 2))
      {
        if((signed int)xc->timescale == 1)
          goto __CPROVER_DUMP_L6;

        if((signed int)xc->timescale == 0)
          goto __CPROVER_DUMP_L7;

        if((signed int)xc->timescale == -1)
          goto __CPROVER_DUMP_L8;

        if((signed int)xc->timescale == -2)
          goto __CPROVER_DUMP_L9;

        if((signed int)xc->timescale == -3)
          goto __CPROVER_DUMP_L10;

        if((signed int)xc->timescale == -4)
          goto __CPROVER_DUMP_L11;

        if((signed int)xc->timescale == -5)
          goto __CPROVER_DUMP_L12;

        if((signed int)xc->timescale == -6)
          goto __CPROVER_DUMP_L13;

        if((signed int)xc->timescale == -10)
          goto __CPROVER_DUMP_L14;

        if((signed int)xc->timescale == -11)
          goto __CPROVER_DUMP_L15;

        if((signed int)xc->timescale == -12)
          goto __CPROVER_DUMP_L16;

        if((signed int)xc->timescale == -13)
          goto __CPROVER_DUMP_L17;

        if((signed int)xc->timescale == -14)
          goto __CPROVER_DUMP_L18;

        if((signed int)xc->timescale == -15)
          goto __CPROVER_DUMP_L19;

        if((signed int)xc->timescale == -16)
          goto __CPROVER_DUMP_L20;

        if((signed int)xc->timescale == -17)
          goto __CPROVER_DUMP_L21;

        if((signed int)xc->timescale == -18)
          goto __CPROVER_DUMP_L22;

        if((signed int)xc->timescale == -19)
          goto __CPROVER_DUMP_L23;

        if((signed int)xc->timescale == -20)
          goto __CPROVER_DUMP_L24;

        if((signed int)xc->timescale == -21)
          goto __CPROVER_DUMP_L25;

        if((signed int)xc->timescale == -7)
          goto __CPROVER_DUMP_L26;

        if((signed int)xc->timescale == -8)
          goto __CPROVER_DUMP_L27;

        if((signed int)xc->timescale == -9)
          goto __CPROVER_DUMP_L28;

      }

      else
      {
        time_scale = 100;
        time_dimension[(signed long int)0] = (char)0;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L6:
        ;
        time_scale = 10;

      __CPROVER_DUMP_L7:
        ;
        time_dimension[(signed long int)0] = (char)0;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L8:
        ;
        time_scale = 100;
        time_dimension[(signed long int)0] = (char)109;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L9:
        ;
        time_scale = 10;

      __CPROVER_DUMP_L10:
        ;
        time_dimension[(signed long int)0] = (char)109;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L11:
        ;
        time_scale = 100;
        time_dimension[(signed long int)0] = (char)117;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L12:
        ;
        time_scale = 10;

      __CPROVER_DUMP_L13:
        ;
        time_dimension[(signed long int)0] = (char)117;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L14:
        ;
        time_scale = 100;
        time_dimension[(signed long int)0] = (char)112;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L15:
        ;
        time_scale = 10;

      __CPROVER_DUMP_L16:
        ;
        time_dimension[(signed long int)0] = (char)112;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L17:
        ;
        time_scale = 100;
        time_dimension[(signed long int)0] = (char)102;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L18:
        ;
        time_scale = 10;

      __CPROVER_DUMP_L19:
        ;
        time_dimension[(signed long int)0] = (char)102;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L20:
        ;
        time_scale = 100;
        time_dimension[(signed long int)0] = (char)97;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L21:
        ;
        time_scale = 10;

      __CPROVER_DUMP_L22:
        ;
        time_dimension[(signed long int)0] = (char)97;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L23:
        ;
        time_scale = 100;
        time_dimension[(signed long int)0] = (char)122;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L24:
        ;
        time_scale = 10;

      __CPROVER_DUMP_L25:
        ;
        time_dimension[(signed long int)0] = (char)122;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L26:
        ;
        time_scale = 100;
        time_dimension[(signed long int)0] = (char)110;
        goto __CPROVER_DUMP_L29;

      __CPROVER_DUMP_L27:
        ;
        time_scale = 10;
      }

    __CPROVER_DUMP_L28:
      ;
      time_dimension[(signed long int)0] = (char)110;

    __CPROVER_DUMP_L29:
      ;
      if(!(fv == ((struct _IO_FILE *)NULL)))
        fprintf(fv, "$timescale\n\t%d%ss\n$end\n", time_scale, (const void *)time_dimension);

    }

    xc->maxhandle = (unsigned int)0;
    xc->num_alias = (unsigned long int)0;
    free((void *)xc->signal_lens);
    void *return_value_malloc$3;
    return_value_malloc$3=malloc((unsigned long int)num_signal_dyn * sizeof(unsigned int) /*4ul*/ );
    xc->signal_lens = (unsigned int *)return_value_malloc$3;
    free((void *)xc->signal_typs);
    void *return_value_malloc$4;
    return_value_malloc$4=malloc((unsigned long int)num_signal_dyn * sizeof(unsigned char) /*1ul*/ );
    xc->signal_typs = (unsigned char *)return_value_malloc$4;
    fstReaderFseeko(xc, xc->fh, (signed long int)0, 0);
    do
    {
      return_value_feof$5=feof(xc->fh);
      if(!(return_value_feof$5 == 0))
        break;

      signed int tag;
      tag=fgetc(xc->fh);
      switch(tag)
      {
        case FST_ST_VCD_SCOPE:
        {
          scopetype=fgetc(xc->fh);
          if(scopetype >= 22 || !(scopetype >= FST_ST_MIN))
            scopetype = FST_ST_VCD_MODULE;

          pnt = str;
          do
          {
            ch=fgetc(xc->fh);
            if(ch == 0)
              break;

            tmp_post$6 = pnt;
            pnt = pnt + 1l;
            *tmp_post$6 = (char)ch;
          }
          while((_Bool)1);
          *pnt = (char)0;
          do
          {
            return_value_fgetc$7=fgetc(xc->fh);
            if(return_value_fgetc$7 == 0)
              break;

          }
          while((_Bool)1);
          if(!(fv == ((struct _IO_FILE *)NULL)))
            fprintf(fv, "$scope %s %s $end\n", modtypes[(signed long int)scopetype], str);

          break;
        }
        case FST_ST_VCD_UPSCOPE:
        {
          if(!(fv == ((struct _IO_FILE *)NULL)))
            fprintf(fv, "$upscope $end\n");

          break;
        }
        case FST_ST_GEN_ATTRBEGIN:
        {
          attrtype=fgetc(xc->fh);
          subtype=fgetc(xc->fh);
          pnt = str;
          do
          {
            ch=fgetc(xc->fh);
            if(ch == 0)
              break;

            tmp_post$8 = pnt;
            pnt = pnt + 1l;
            *tmp_post$8 = (char)ch;
          }
          while((_Bool)1);
          *pnt = (char)0;
          if(*str == 0)
            strcpy(str, "\"\"");

          attrarg=fstReaderVarint64(xc->fh);
          if(!(fv == ((struct _IO_FILE *)NULL)))
          {
            if(!(xc->use_vcd_extensions == 0u))
              switch(attrtype)
              {
                case FST_AT_ARRAY:
                {
                  if(subtype >= 4 || !(subtype >= 0))
                    subtype = 0;

                  fprintf(fv, "$attrbegin %s %s %s %ld $end\n", attrtypes[(signed long int)attrtype], arraytypes[(signed long int)subtype], str, attrarg);
                  break;
                }
                case FST_AT_ENUM:
                {
                  if(subtype >= 14 || !(subtype >= 0))
                    subtype = 0;

                  fprintf(fv, "$attrbegin %s %s %s %ld $end\n", attrtypes[(signed long int)attrtype], enumvaluetypes[(signed long int)subtype], str, attrarg);
                  break;
                }
                case FST_AT_PACK:
                {
                  if(subtype >= 4 || !(subtype >= 0))
                    subtype = 0;

                  fprintf(fv, "$attrbegin %s %s %s %ld $end\n", attrtypes[(signed long int)attrtype], packtypes[(signed long int)subtype], str, attrarg);
                  break;
                }
                case FST_AT_MISC:

                default:
                {
                  attrtype = FST_AT_MISC;
                  if(subtype == 0)
                    fprintf(fv, "$comment\n\t%s\n$end\n", str);

                  else
                    if(subtype == 4 || subtype == 5)
                    {
                      signed int sidx_skiplen_dummy = 0;
                      unsigned long int sidx;
                      sidx=fstGetVarint64((unsigned char *)str, &sidx_skiplen_dummy);
                      fprintf(fv, "$attrbegin %s %02x %ld %ld $end\n", attrtypes[(signed long int)attrtype], subtype, sidx, attrarg);
                    }

                    else
                      fprintf(fv, "$attrbegin %s %02x %s %ld $end\n", attrtypes[(signed long int)attrtype], subtype, str, attrarg);
                }
              }

          }

          break;
        }
        case FST_ST_GEN_ATTREND:
        {
          if(!(fv == ((struct _IO_FILE *)NULL)))
          {
            if(!(xc->use_vcd_extensions == 0u))
              fprintf(fv, "$attrend $end\n");

          }

          break;
        }
        case FST_VT_VCD_EVENT:

        case FST_VT_VCD_INTEGER:

        case FST_VT_VCD_PARAMETER:

        case FST_VT_VCD_REAL:

        case FST_VT_VCD_REAL_PARAMETER:

        case FST_VT_VCD_REG:

        case FST_VT_VCD_SUPPLY0:

        case FST_VT_VCD_SUPPLY1:

        case FST_VT_VCD_TIME:

        case FST_VT_VCD_TRI:

        case FST_VT_VCD_TRIAND:

        case FST_VT_VCD_TRIOR:

        case FST_VT_VCD_TRIREG:

        case FST_VT_VCD_TRI0:

        case FST_VT_VCD_TRI1:

        case FST_VT_VCD_WAND:

        case FST_VT_VCD_WIRE:

        case FST_VT_VCD_WOR:

        case FST_VT_VCD_PORT:

        case FST_VT_VCD_SPARRAY:

        case FST_VT_VCD_REALTIME:

        case FST_VT_GEN_STRING:

        case FST_VT_SV_BIT:

        case FST_VT_SV_LOGIC:

        case FST_VT_SV_INT:

        case FST_VT_SV_SHORTINT:

        case FST_VT_SV_LONGINT:

        case FST_VT_SV_BYTE:

        case FST_VT_SV_ENUM:

        case FST_VT_SV_SHORTREAL:
        {
          vartype = tag;
          fgetc(xc->fh);
          pnt = str;
          do
          {
            ch=fgetc(xc->fh);
            if(ch == 0)
              break;

            tmp_post$9 = pnt;
            pnt = pnt + 1l;
            *tmp_post$9 = (char)ch;
          }
          while((_Bool)1);
          *pnt = (char)0;
          len=fstReaderVarint32(xc->fh);
          alias=fstReaderVarint32(xc->fh);
          if(alias == 0u)
          {
            if(xc->maxhandle == num_signal_dyn)
            {
              num_signal_dyn = num_signal_dyn * (unsigned int)2;
              void *return_value_realloc$10;
              return_value_realloc$10=realloc((void *)xc->signal_lens, (unsigned long int)num_signal_dyn * sizeof(unsigned int) /*4ul*/ );
              xc->signal_lens = (unsigned int *)return_value_realloc$10;
              void *return_value_realloc$11;
              return_value_realloc$11=realloc((void *)xc->signal_typs, (unsigned long int)num_signal_dyn * sizeof(unsigned char) /*1ul*/ );
              xc->signal_typs = (unsigned char *)return_value_realloc$11;
            }

            xc->signal_lens[(signed long int)xc->maxhandle] = len;
            xc->signal_typs[(signed long int)xc->maxhandle] = (unsigned char)vartype;
            if(!(xc->longest_signal_value_len >= len))
              xc->longest_signal_value_len = len;

            if(vartype == FST_VT_VCD_REAL || vartype == FST_VT_VCD_REAL_PARAMETER || vartype == FST_VT_VCD_REALTIME || vartype == FST_VT_SV_SHORTREAL)
            {
              len = (unsigned int)(vartype != FST_VT_SV_SHORTREAL ? 64 : 32);
              xc->signal_typs[(signed long int)xc->maxhandle] = (unsigned char)FST_VT_VCD_REAL;
            }

            if(!(fv == ((struct _IO_FILE *)NULL)))
            {
              char vcdid_buf[16l];
              unsigned int modlen = vartype != FST_VT_VCD_PORT ? len : (len - (unsigned int)2) / (unsigned int)3;
              fstVcdID(vcdid_buf, xc->maxhandle + (unsigned int)1);
              fprintf(fv, "$var %s %u %s %s $end\n", vartypes[(signed long int)vartype], modlen, (const void *)vcdid_buf, str);
            }

            xc->maxhandle = xc->maxhandle + 1u;
          }

          else
          {
            if(vartype == FST_VT_VCD_REAL || vartype == FST_VT_VCD_REAL_PARAMETER || vartype == FST_VT_VCD_REALTIME || vartype == FST_VT_SV_SHORTREAL)
            {
              len = (unsigned int)(vartype != FST_VT_SV_SHORTREAL ? 64 : 32);
              xc->signal_typs[(signed long int)xc->maxhandle] = (unsigned char)FST_VT_VCD_REAL;
            }

            if(!(fv == ((struct _IO_FILE *)NULL)))
            {
              char fstReaderProcessHier$$1$$3$$1$$8$$2$$vcdid_buf[16l];
              unsigned int fstReaderProcessHier$$1$$3$$1$$8$$2$$modlen = vartype != FST_VT_VCD_PORT ? len : (len - (unsigned int)2) / (unsigned int)3;
              fstVcdID(fstReaderProcessHier$$1$$3$$1$$8$$2$$vcdid_buf, alias);
              fprintf(fv, "$var %s %u %s %s $end\n", vartypes[(signed long int)vartype], fstReaderProcessHier$$1$$3$$1$$8$$2$$modlen, (const void *)fstReaderProcessHier$$1$$3$$1$$8$$2$$vcdid_buf, str);
            }

            xc->num_alias = xc->num_alias + 1ul;
          }
          break;
        }
        default:
          ;
      }
    }
    while((_Bool)1);
    if(!(fv == ((struct _IO_FILE *)NULL)))
      fprintf(fv, "$enddefinitions $end\n");

    if(!(xc->maxhandle == 0u))
      tmp_if_expr$12 = xc->maxhandle;

    else
      tmp_if_expr$12 = (unsigned int)1;
    maxhandle_scanbuild = tmp_if_expr$12;
    void *return_value_realloc$13;
    return_value_realloc$13=realloc((void *)xc->signal_lens, (unsigned long int)maxhandle_scanbuild * sizeof(unsigned int) /*4ul*/ );
    xc->signal_lens = (unsigned int *)return_value_realloc$13;
    void *return_value_realloc$14;
    return_value_realloc$14=realloc((void *)xc->signal_typs, (unsigned long int)maxhandle_scanbuild * sizeof(unsigned char) /*1ul*/ );
    xc->signal_typs = (unsigned char *)return_value_realloc$14;
    free((void *)xc->process_mask);
    void *return_value_calloc$15;
    return_value_calloc$15=calloc((unsigned long int)1, (unsigned long int)((maxhandle_scanbuild + (unsigned int)7) / (unsigned int)8));
    xc->process_mask = (unsigned char *)return_value_calloc$15;
    free((void *)xc->temp_signal_value_buf);
    void *return_value_malloc$16;
    return_value_malloc$16=malloc((unsigned long int)(xc->longest_signal_value_len + (unsigned int)1));
    xc->temp_signal_value_buf = (unsigned char *)return_value_malloc$16;
    xc->var_count = (unsigned long int)xc->maxhandle + xc->num_alias;
    free((void *)str);
    return 1;
  }
}

// fstReaderPushScope
// file ./fst/fstapi.c line 3243
const char * fstReaderPushScope(void *ctx, const char *nam, void *user_info)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  signed int tmp_if_expr$2;
  void *tmp_if_expr$6;
  void *return_value_realloc$4;
  void *return_value_malloc$5;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    struct fstCurrHier *ch;
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct fstCurrHier) /*24ul*/ );
    ch = (struct fstCurrHier *)return_value_malloc$1;
    signed int chl;
    if(!(xc->curr_hier == ((struct fstCurrHier *)NULL)))
      tmp_if_expr$2 = xc->curr_hier->len;

    else
      tmp_if_expr$2 = 0;
    chl = tmp_if_expr$2;
    signed int len;
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(nam);
    len = (signed int)((unsigned long int)(chl + 1) + return_value_strlen$3);
    if(len >= xc->flat_hier_alloc_len)
    {
      if(!(xc->curr_flat_hier_nam == ((char *)NULL)))
      {
        return_value_realloc$4=realloc((void *)xc->curr_flat_hier_nam, (unsigned long int)(len + 1));
        tmp_if_expr$6 = return_value_realloc$4;
      }

      else
      {
        return_value_malloc$5=malloc((unsigned long int)(len + 1));
        tmp_if_expr$6 = return_value_malloc$5;
      }
      xc->curr_flat_hier_nam = (char *)tmp_if_expr$6;
    }

    if(!(chl == 0))
    {
      xc->curr_flat_hier_nam[(signed long int)chl] = (char)46;
      strcpy(xc->curr_flat_hier_nam + (signed long int)chl + (signed long int)1, nam);
    }

    else
    {
      strcpy(xc->curr_flat_hier_nam, nam);
      len = len - 1;
    }
    ch->len = len;
    ch->prev = xc->curr_hier;
    ch->user_info = user_info;
    xc->curr_hier = ch;
    return xc->curr_flat_hier_nam;
  }

  return (const char *)(void *)0;
}

// fstReaderRecreateHierFile
// file ./fst/fstapi.c line 3599
static signed int fstReaderRecreateHierFile(struct fstReaderContext *xc)
{
  signed int pass_status = 1;
  _Bool tmp_if_expr$4;
  if(xc->fh == ((struct _IO_FILE *)NULL))
  {
    signed long int offs_cache;
    offs_cache=ftello(xc->f);
    char *fnam;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(xc->filename);
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(return_value_strlen$1 + (unsigned long int)6 + (unsigned long int)16 + (unsigned long int)32 + (unsigned long int)1);
    fnam = (char *)return_value_malloc$2;
    unsigned char *mem;
    void *return_value_malloc$3;
    return_value_malloc$3=malloc((unsigned long int)32768);
    mem = (unsigned char *)return_value_malloc$3;
    signed long int hl;
    signed long int uclen;
    signed long int clen = (signed long int)0;
    struct gzFile_s *zhandle = (struct gzFile_s *)(void *)0;
    signed int zfd;
    signed int htyp = 255;
    if(xc->contains_hier_section_lz4 == 0u)
      tmp_if_expr$4 = xc->contains_hier_section != 0u ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$4 = (_Bool)0;
    if(tmp_if_expr$4)
      htyp = 4;

    else
      if(!(xc->contains_hier_section_lz4 == 0u))
      {
        if(xc->contains_hier_section == 0u)
          htyp = xc->contains_hier_section_lz4duo != 0u ? 7 : 6;

      }

    signed int return_value_getpid$5;
    return_value_getpid$5=getpid();
    sprintf(fnam, "%s.hier_%d_%p", xc->filename, return_value_getpid$5, (void *)xc);
    fstReaderFseeko(xc, xc->f, xc->hier_pos, 0);
    unsigned long int return_value_fstReaderUint64$6;
    return_value_fstReaderUint64$6=fstReaderUint64(xc->f);
    uclen = (signed long int)return_value_fstReaderUint64$6;
    fflush(xc->f);
    if(htyp == 4)
    {
      fstReaderFseeko(xc, xc->f, xc->hier_pos, 0);
      unsigned long int return_value_fstReaderUint64$7;
      return_value_fstReaderUint64$7=fstReaderUint64(xc->f);
      uclen = (signed long int)return_value_fstReaderUint64$7;
      fflush(xc->f);
      signed int return_value_fileno$8;
      return_value_fileno$8=fileno(xc->f);
      zfd=dup(return_value_fileno$8);
      zhandle=gzdopen(zfd, "rb");
      if(zhandle == ((struct gzFile_s *)NULL))
      {
        close(zfd);
        free((void *)mem);
        free((void *)fnam);
        return 0;
      }

    }

    else
      if(htyp == 6 || htyp == 7)
      {
        fstReaderFseeko(xc, xc->f, xc->hier_pos - (signed long int)8, 0);
        unsigned long int return_value_fstReaderUint64$9;
        return_value_fstReaderUint64$9=fstReaderUint64(xc->f);
        clen = (signed long int)(return_value_fstReaderUint64$9 - (unsigned long int)16);
        unsigned long int return_value_fstReaderUint64$10;
        return_value_fstReaderUint64$10=fstReaderUint64(xc->f);
        uclen = (signed long int)return_value_fstReaderUint64$10;
        fflush(xc->f);
      }

    xc->fh=fopen(fnam, "w+b");
    if(xc->fh == ((struct _IO_FILE *)NULL))
    {
      xc->fh=tmpfile_open(&xc->fh_nam);
      free((void *)fnam);
      fnam = (char *)(void *)0;
      if(xc->fh == ((struct _IO_FILE *)NULL))
      {
        tmpfile_close(&xc->fh, &xc->fh_nam);
        free((void *)mem);
        return 0;
      }

    }

    if(!(fnam == ((char *)NULL)))
      unlink(fnam);

    if(htyp == 4)
    {
      hl = (signed long int)0;
      for( ; !(hl >= uclen); hl = hl + (signed long int)32768)
      {
        unsigned long int len = (unsigned long int)(uclen - hl > (signed long int)32768 ? (signed long int)32768 : uclen - hl);
        unsigned long int gzreadlen;
        signed int return_value_gzread$11;
        return_value_gzread$11=gzread(zhandle, (void *)mem, (unsigned int)len);
        gzreadlen = (unsigned long int)return_value_gzread$11;
        unsigned long int fwlen;
        if(!(gzreadlen == len))
        {
          pass_status = 0;
          break;
        }

        fwlen=fstFwrite((const void *)mem, len, (unsigned long int)1, xc->fh);
        if(!(fwlen == 1ul))
        {
          pass_status = 0;
          break;
        }

      }
      gzclose(zhandle);
    }

    else
      if(htyp == 7)
      {
        unsigned char *lz4_cmem;
        void *return_value_malloc$12;
        return_value_malloc$12=malloc((unsigned long int)clen);
        lz4_cmem = (unsigned char *)return_value_malloc$12;
        unsigned char *lz4_ucmem;
        void *return_value_malloc$13;
        return_value_malloc$13=malloc((unsigned long int)uclen);
        lz4_ucmem = (unsigned char *)return_value_malloc$13;
        unsigned char *lz4_ucmem2;
        unsigned long int uclen2;
        signed int skiplen2 = 0;
        fstFread((void *)lz4_cmem, (unsigned long int)clen, (unsigned long int)1, xc->f);
        uclen2=fstGetVarint64(lz4_cmem, &skiplen2);
        void *return_value_malloc$14;
        return_value_malloc$14=malloc(uclen2);
        lz4_ucmem2 = (unsigned char *)return_value_malloc$14;
        signed int return_value_LZ4_decompress_safe_partial$15;
        return_value_LZ4_decompress_safe_partial$15=LZ4_decompress_safe_partial((char *)lz4_cmem + (signed long int)skiplen2, (char *)lz4_ucmem2, (signed int)(clen - (signed long int)skiplen2), (signed int)uclen2, (signed int)uclen2);
        pass_status = (signed int)(uclen2 == (unsigned long int)return_value_LZ4_decompress_safe_partial$15);
        if(!(pass_status == 0))
        {
          signed int return_value_LZ4_decompress_safe_partial$16;
          return_value_LZ4_decompress_safe_partial$16=LZ4_decompress_safe_partial((char *)lz4_ucmem2, (char *)lz4_ucmem, (signed int)uclen2, (signed int)uclen, (signed int)uclen);
          pass_status = (signed int)(uclen == (signed long int)return_value_LZ4_decompress_safe_partial$16);
          unsigned long int return_value_fstFwrite$17;
          return_value_fstFwrite$17=fstFwrite((const void *)lz4_ucmem, (unsigned long int)uclen, (unsigned long int)1, xc->fh);
          if(!(return_value_fstFwrite$17 == 1ul))
            pass_status = 0;

        }

        free((void *)lz4_ucmem2);
        free((void *)lz4_ucmem);
        free((void *)lz4_cmem);
      }

      else
        if(htyp == 6)
        {
          unsigned char *fstReaderRecreateHierFile$$1$$1$$8$$lz4_cmem;
          void *return_value_malloc$18;
          return_value_malloc$18=malloc((unsigned long int)clen);
          fstReaderRecreateHierFile$$1$$1$$8$$lz4_cmem = (unsigned char *)return_value_malloc$18;
          unsigned char *fstReaderRecreateHierFile$$1$$1$$8$$lz4_ucmem;
          void *return_value_malloc$19;
          return_value_malloc$19=malloc((unsigned long int)uclen);
          fstReaderRecreateHierFile$$1$$1$$8$$lz4_ucmem = (unsigned char *)return_value_malloc$19;
          fstFread((void *)fstReaderRecreateHierFile$$1$$1$$8$$lz4_cmem, (unsigned long int)clen, (unsigned long int)1, xc->f);
          signed int return_value_LZ4_decompress_safe_partial$20;
          return_value_LZ4_decompress_safe_partial$20=LZ4_decompress_safe_partial((char *)fstReaderRecreateHierFile$$1$$1$$8$$lz4_cmem, (char *)fstReaderRecreateHierFile$$1$$1$$8$$lz4_ucmem, (signed int)clen, (signed int)uclen, (signed int)uclen);
          pass_status = (signed int)(uclen == (signed long int)return_value_LZ4_decompress_safe_partial$20);
          unsigned long int return_value_fstFwrite$21;
          return_value_fstFwrite$21=fstFwrite((const void *)fstReaderRecreateHierFile$$1$$1$$8$$lz4_ucmem, (unsigned long int)uclen, (unsigned long int)1, xc->fh);
          if(!(return_value_fstFwrite$21 == 1ul))
            pass_status = 0;

          free((void *)fstReaderRecreateHierFile$$1$$1$$8$$lz4_ucmem);
          free((void *)fstReaderRecreateHierFile$$1$$1$$8$$lz4_cmem);
        }

        else
          pass_status = 0;
    free((void *)mem);
    free((void *)fnam);
    fstReaderFseeko(xc, xc->f, offs_cache, 0);
  }

  return pass_status;
}

// fstReaderResetScope
// file ./fst/fstapi.c line 3232
void fstReaderResetScope(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  const char *return_value_fstReaderPopScope$1;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    do
    {
      return_value_fstReaderPopScope$1=fstReaderPopScope((void *)xc);
      if(return_value_fstReaderPopScope$1 == ((const char *)NULL))
        break;

    }
    while((_Bool)1);

}

// fstReaderSetFacProcessMask
// file ./fst/fstapi.c line 3325
void fstReaderSetFacProcessMask(void *ctx, unsigned int facidx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    facidx = facidx - 1u;
    if(!(facidx >= xc->maxhandle))
    {
      signed int idx = (signed int)(facidx / (unsigned int)8);
      signed int bitpos = (signed int)(facidx & (unsigned int)7);
      xc->process_mask[(signed long int)idx] = xc->process_mask[(signed long int)idx] | (unsigned char)(1 << bitpos);
    }

  }

}

// fstReaderSetFacProcessMaskAll
// file fst/fstapi.h line 412
void fstReaderSetFacProcessMaskAll(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    memset((void *)xc->process_mask, 0xff, (unsigned long int)((xc->maxhandle + (unsigned int)7) / (unsigned int)8));

}

// fstReaderSetLimitTimeRange
// file ./fst/fstapi.c line 3521
void fstReaderSetLimitTimeRange(void *ctx, unsigned long int start_time, unsigned long int end_time)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
  {
    xc->limit_range_valid = (unsigned int)1;
    xc->limit_range_start = start_time;
    xc->limit_range_end = end_time;
  }

}

// fstReaderSetUnlimitedTimeRange
// file ./fst/fstapi.c line 3534
void fstReaderSetUnlimitedTimeRange(void *ctx)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    xc->limit_range_valid = (unsigned int)0;

}

// fstReaderSetVcdExtensions
// file fst/fstapi.h line 415
void fstReaderSetVcdExtensions(void *ctx, signed int enable)
{
  struct fstReaderContext *xc = (struct fstReaderContext *)ctx;
  if(!(xc == ((struct fstReaderContext *)NULL)))
    xc->use_vcd_extensions = (unsigned int)(enable != 0);

}

// fstReaderUint64
// file ./fst/fstapi.c line 379
static unsigned long int fstReaderUint64(struct _IO_FILE *f)
{
  unsigned long int val = (unsigned long int)0;
  unsigned char buf[(signed long int)sizeof(unsigned long int) /*8l*/ ];
  unsigned int i;
  fstFread((void *)buf, sizeof(unsigned long int) /*8ul*/ , (unsigned long int)1, f);
  i = (unsigned int)0;
  for( ; !((unsigned long int)i >= sizeof(unsigned long int) /*8ul*/ ); i = i + 1u)
  {
    val = val << 8;
    val = val | (unsigned long int)buf[(signed long int)i];
  }
  return val;
}

// fstReaderVarint32
// file ./fst/fstapi.c line 526
static unsigned int fstReaderVarint32(struct _IO_FILE *f)
{
  unsigned char buf[5l];
  unsigned char *mem = buf;
  unsigned int rc = (unsigned int)0;
  signed int ch;
  unsigned char *tmp_post$1;
  do
  {
    ch=fgetc(f);
    tmp_post$1 = mem;
    mem = mem + 1l;
    *tmp_post$1 = (unsigned char)ch;
  }
  while(!((0x80 & ch) == 0));
  mem = mem - 1l;
  do
  {
    rc = rc << 7;
    rc = rc | (unsigned int)((signed int)*mem & 0x7f);
    if(mem == buf)
      break;

    mem = mem - 1l;
  }
  while((_Bool)1);
  return rc;
}

// fstReaderVarint32WithSkip
// file ./fst/fstapi.c line 555
static unsigned int fstReaderVarint32WithSkip(struct _IO_FILE *f, unsigned int *skiplen)
{
  unsigned char buf[5l];
  unsigned char *mem = buf;
  unsigned int rc = (unsigned int)0;
  signed int ch;
  unsigned char *tmp_post$1;
  do
  {
    ch=fgetc(f);
    tmp_post$1 = mem;
    mem = mem + 1l;
    *tmp_post$1 = (unsigned char)ch;
  }
  while(!((0x80 & ch) == 0));
  *skiplen = (unsigned int)(mem - buf);
  mem = mem - 1l;
  do
  {
    rc = rc << 7;
    rc = rc | (unsigned int)((signed int)*mem & 0x7f);
    if(mem == buf)
      break;

    mem = mem - 1l;
  }
  while((_Bool)1);
  return rc;
}

// fstReaderVarint64
// file ./fst/fstapi.c line 585
static unsigned long int fstReaderVarint64(struct _IO_FILE *f)
{
  unsigned char buf[16l];
  unsigned char *mem = buf;
  unsigned long int rc = (unsigned long int)0;
  signed int ch;
  unsigned char *tmp_post$1;
  do
  {
    ch=fgetc(f);
    tmp_post$1 = mem;
    mem = mem + 1l;
    *tmp_post$1 = (unsigned char)ch;
  }
  while(!((0x80 & ch) == 0));
  mem = mem - 1l;
  do
  {
    rc = rc << 7;
    rc = rc | (unsigned long int)((signed int)*mem & 0x7f);
    if(mem == buf)
      break;

    mem = mem - 1l;
  }
  while((_Bool)1);
  return rc;
}

// fstRealpath
// file ./fst/fstapi.c line 279
static char * fstRealpath(const char *path, char *resolved_path)
{
  char *return_value_realpath$1;
  return_value_realpath$1=realpath(path, resolved_path);
  return return_value_realpath$1;
}

// fstUtilityBinToEsc
// file ./fst/fstapi.c line 6439
signed int fstUtilityBinToEsc(unsigned char *d, unsigned char *s, signed int len)
{
  unsigned char *src = s;
  unsigned char *dst = d;
  unsigned char val;
  signed int i = 0;
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
  unsigned char *tmp_post$16;
  unsigned char *tmp_post$17;
  unsigned char *tmp_post$18;
  unsigned char *tmp_post$19;
  unsigned char *tmp_post$20;
  unsigned char *tmp_post$21;
  unsigned char *tmp_post$22;
  _Bool tmp_if_expr$28;
  unsigned char *tmp_post$23;
  unsigned char *tmp_post$24;
  unsigned char *tmp_post$25;
  unsigned char *tmp_post$26;
  unsigned char *tmp_post$27;
  for( ; !(i >= len); i = i + 1)
    switch((signed int)src[(signed long int)i])
    {
      case 7:
      {
        tmp_post$1 = dst;
        dst = dst + 1l;
        *tmp_post$1 = (unsigned char)92;
        tmp_post$2 = dst;
        dst = dst + 1l;
        *tmp_post$2 = (unsigned char)97;
        break;
      }
      case 8:
      {
        tmp_post$3 = dst;
        dst = dst + 1l;
        *tmp_post$3 = (unsigned char)92;
        tmp_post$4 = dst;
        dst = dst + 1l;
        *tmp_post$4 = (unsigned char)98;
        break;
      }
      case 12:
      {
        tmp_post$5 = dst;
        dst = dst + 1l;
        *tmp_post$5 = (unsigned char)92;
        tmp_post$6 = dst;
        dst = dst + 1l;
        *tmp_post$6 = (unsigned char)102;
        break;
      }
      case 10:
      {
        tmp_post$7 = dst;
        dst = dst + 1l;
        *tmp_post$7 = (unsigned char)92;
        tmp_post$8 = dst;
        dst = dst + 1l;
        *tmp_post$8 = (unsigned char)110;
        break;
      }
      case 13:
      {
        tmp_post$9 = dst;
        dst = dst + 1l;
        *tmp_post$9 = (unsigned char)92;
        tmp_post$10 = dst;
        dst = dst + 1l;
        *tmp_post$10 = (unsigned char)114;
        break;
      }
      case 9:
      {
        tmp_post$11 = dst;
        dst = dst + 1l;
        *tmp_post$11 = (unsigned char)92;
        tmp_post$12 = dst;
        dst = dst + 1l;
        *tmp_post$12 = (unsigned char)116;
        break;
      }
      case 11:
      {
        tmp_post$13 = dst;
        dst = dst + 1l;
        *tmp_post$13 = (unsigned char)92;
        tmp_post$14 = dst;
        dst = dst + 1l;
        *tmp_post$14 = (unsigned char)118;
        break;
      }
      case 39:
      {
        tmp_post$15 = dst;
        dst = dst + 1l;
        *tmp_post$15 = (unsigned char)92;
        tmp_post$16 = dst;
        dst = dst + 1l;
        *tmp_post$16 = (unsigned char)39;
        break;
      }
      case 34:
      {
        tmp_post$17 = dst;
        dst = dst + 1l;
        *tmp_post$17 = (unsigned char)92;
        tmp_post$18 = dst;
        dst = dst + 1l;
        *tmp_post$18 = (unsigned char)34;
        break;
      }
      case 92:
      {
        tmp_post$19 = dst;
        dst = dst + 1l;
        *tmp_post$19 = (unsigned char)92;
        tmp_post$20 = dst;
        dst = dst + 1l;
        *tmp_post$20 = (unsigned char)92;
        break;
      }
      case 63:
      {
        tmp_post$21 = dst;
        dst = dst + 1l;
        *tmp_post$21 = (unsigned char)92;
        tmp_post$22 = dst;
        dst = dst + 1l;
        *tmp_post$22 = (unsigned char)63;
        break;
      }
      default:
      {
        if((signed int)src[(signed long int)i] >= 33)
          tmp_if_expr$28 = (signed int)src[(signed long int)i] <= 126 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$28 = (_Bool)0;
        if(tmp_if_expr$28)
        {
          tmp_post$23 = dst;
          dst = dst + 1l;
          *tmp_post$23 = src[(signed long int)i];
        }

        else
        {
          val = src[(signed long int)i];
          tmp_post$24 = dst;
          dst = dst + 1l;
          *tmp_post$24 = (unsigned char)92;
          tmp_post$25 = dst;
          dst = dst + 1l;
          *tmp_post$25 = (unsigned char)((signed int)val / 64 + 48);
          val = (unsigned char)((signed int)val & 63);
          tmp_post$26 = dst;
          dst = dst + 1l;
          *tmp_post$26 = (unsigned char)((signed int)val / 8 + 48);
          val = (unsigned char)((signed int)val & 7);
          tmp_post$27 = dst;
          dst = dst + 1l;
          *tmp_post$27 = (unsigned char)((signed int)val + 48);
        }
      }
    }
  return (signed int)(dst - d);
}

// fstUtilityEscToBin
// file ./fst/fstapi.c line 6484
signed int fstUtilityEscToBin(unsigned char *d, unsigned char *s, signed int len)
{
  unsigned char *src = s;
  unsigned char *dst;
  unsigned char *tmp_if_expr$1;
  if(d == ((unsigned char *)NULL))
    tmp_if_expr$1 = s;

  else
  {
    s = d;
    tmp_if_expr$1 = s;
  }
  dst = tmp_if_expr$1;
  unsigned char val[3l];
  signed int i = 0;
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
  signed int return_value_toupper$14;
  signed int return_value_toupper$15;
  _Bool tmp_if_expr$16;
  signed int tmp_if_expr$17;
  _Bool tmp_if_expr$18;
  signed int tmp_if_expr$19;
  unsigned char *tmp_post$20;
  unsigned char *tmp_post$21;
  unsigned char *tmp_post$22;
  for( ; !(i >= len); i = i + 1)
    if(!((signed int)src[(signed long int)i] == 92))
    {
      tmp_post$2 = dst;
      dst = dst + 1l;
      *tmp_post$2 = src[(signed long int)i];
    }

    else
    {
      i = i + 1;
      switch((signed int)src[(signed long int)i])
      {
        case 97:
        {
          tmp_post$3 = dst;
          dst = dst + 1l;
          *tmp_post$3 = (unsigned char)7;
          break;
        }
        case 98:
        {
          tmp_post$4 = dst;
          dst = dst + 1l;
          *tmp_post$4 = (unsigned char)8;
          break;
        }
        case 102:
        {
          tmp_post$5 = dst;
          dst = dst + 1l;
          *tmp_post$5 = (unsigned char)12;
          break;
        }
        case 110:
        {
          tmp_post$6 = dst;
          dst = dst + 1l;
          *tmp_post$6 = (unsigned char)10;
          break;
        }
        case 114:
        {
          tmp_post$7 = dst;
          dst = dst + 1l;
          *tmp_post$7 = (unsigned char)13;
          break;
        }
        case 116:
        {
          tmp_post$8 = dst;
          dst = dst + 1l;
          *tmp_post$8 = (unsigned char)9;
          break;
        }
        case 118:
        {
          tmp_post$9 = dst;
          dst = dst + 1l;
          *tmp_post$9 = (unsigned char)11;
          break;
        }
        case 39:
        {
          tmp_post$10 = dst;
          dst = dst + 1l;
          *tmp_post$10 = (unsigned char)39;
          break;
        }
        case 34:
        {
          tmp_post$11 = dst;
          dst = dst + 1l;
          *tmp_post$11 = (unsigned char)34;
          break;
        }
        case 92:
        {
          tmp_post$12 = dst;
          dst = dst + 1l;
          *tmp_post$12 = (unsigned char)92;
          break;
        }
        case 63:
        {
          tmp_post$13 = dst;
          dst = dst + 1l;
          *tmp_post$13 = (unsigned char)63;
          break;
        }
        case 120:
        {
          i = i + 1;
          return_value_toupper$14=toupper((signed int)src[(signed long int)i]);
          val[(signed long int)0] = (unsigned char)return_value_toupper$14;
          i = i + 1;
          return_value_toupper$15=toupper((signed int)src[(signed long int)i]);
          val[(signed long int)1] = (unsigned char)return_value_toupper$15;
          if((signed int)val[0l] >= 65)
            tmp_if_expr$16 = (signed int)val[(signed long int)0] <= 70 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$16 = (_Bool)0;
          if(tmp_if_expr$16)
            tmp_if_expr$17 = ((signed int)val[(signed long int)0] - 65) + 10;

          else
            tmp_if_expr$17 = (signed int)val[(signed long int)0] - 48;
          val[(signed long int)0] = (unsigned char)tmp_if_expr$17;
          if((signed int)val[1l] >= 65)
            tmp_if_expr$18 = (signed int)val[(signed long int)1] <= 70 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$18 = (_Bool)0;
          if(tmp_if_expr$18)
            tmp_if_expr$19 = ((signed int)val[(signed long int)1] - 65) + 10;

          else
            tmp_if_expr$19 = (signed int)val[(signed long int)1] - 48;
          val[(signed long int)1] = (unsigned char)tmp_if_expr$19;
          tmp_post$20 = dst;
          dst = dst + 1l;
          *tmp_post$20 = (unsigned char)((signed int)val[(signed long int)0] * 16 + (signed int)val[(signed long int)1]);
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
          val[(signed long int)0] = (unsigned char)((signed int)src[(signed long int)i] - 48);
          i = i + 1;
          val[(signed long int)1] = (unsigned char)((signed int)src[(signed long int)i] - 48);
          i = i + 1;
          val[(signed long int)2] = (unsigned char)((signed int)src[(signed long int)i] - 48);
          tmp_post$21 = dst;
          dst = dst + 1l;
          *tmp_post$21 = (unsigned char)((signed int)val[(signed long int)0] * 64 + (signed int)val[(signed long int)1] * 8 + (signed int)val[(signed long int)2]);
          break;
        }
        default:
        {
          tmp_post$22 = dst;
          dst = dst + 1l;
          *tmp_post$22 = src[(signed long int)i];
        }
      }
    }
  return (signed int)(dst - s);
}

// fstVcdID
// file ./fst/fstapi.c line 3568
static void fstVcdID(char *buf, unsigned int value)
{
  char *pnt = buf;
  char *tmp_post$1;
  for( ; !(value == 0u); value = value / (unsigned int)94)
  {
    value = value - 1u;
    tmp_post$1 = pnt;
    pnt = pnt + 1l;
    *tmp_post$1 = (char)((unsigned int)33 + value % (unsigned int)94);
  }
  *pnt = (char)0;
}

// fstVcdIDForFwrite
// file ./fst/fstapi.c line 3583
static signed int fstVcdIDForFwrite(char *buf, unsigned int value)
{
  char *pnt = buf;
  char *tmp_post$1;
  for( ; !(value == 0u); value = value / (unsigned int)94)
  {
    value = value - 1u;
    tmp_post$1 = pnt;
    pnt = pnt + 1l;
    *tmp_post$1 = (char)((unsigned int)33 + value % (unsigned int)94);
  }
  return (signed int)(pnt - buf);
}

// fstWriterClose
// file ./fst/fstapi.c line 1857
void fstWriterClose(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    pthread_mutex_lock(&xc->mutex);
    pthread_mutex_unlock(&xc->mutex);
  }

  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  signed long int tmp_if_expr$13;
  _Bool tmp_if_expr$17;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    if(xc->already_in_close == 0)
    {
      if(xc->already_in_flush == 0)
      {
        unsigned char *tmem;
        signed long int fixup_offs;
        signed long int tlen;
        signed long int hlen;
        xc->already_in_close = (unsigned char)1;
        if(!(xc->section_header_only == 0u))
          tmp_if_expr$2 = xc->section_header_truncpos != 0l ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(tmp_if_expr$2)
          tmp_if_expr$3 = xc->vchg_siz <= (unsigned int)1 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$3 = (_Bool)0;
        if(tmp_if_expr$3)
          tmp_if_expr$4 = !(xc->is_initial_time != 0u) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(tmp_if_expr$4)
        {
          signed int return_value_fileno$1;
          return_value_fileno$1=fileno(xc->handle);
          fstFtruncate(return_value_fileno$1, xc->section_header_truncpos);
          fstWriterFseeko(xc, xc->handle, xc->section_header_truncpos, 0);
          xc->section_header_only = (unsigned int)0;
        }

        else
        {
          xc->skip_writing_section_hdr = (unsigned int)1;
          if(xc->size_limit_locked == 0u)
          {
            if(!(xc->is_initial_time == 0u))
            {
              unsigned int dupe_idx;
              fstWriterEmitTimeChange((void *)xc, (unsigned long int)0);
              dupe_idx = (unsigned int)0;
              for( ; !(dupe_idx >= xc->maxhandle); dupe_idx = dupe_idx + 1u)
                fstWriterEmitValueChange((void *)xc, dupe_idx + (unsigned int)1, (const void *)(xc->curval_mem + (signed long int)xc->valpos_mem[(signed long int)((unsigned int)4 * dupe_idx)]));
            }

            fstWriterFlushContextPrivate((void *)xc);
            pthread_mutex_lock(&xc->mutex);
            pthread_mutex_unlock(&xc->mutex);
          }

        }
        fstDestroyMmaps(xc, 1);
        fflush(xc->geom_handle);
        tlen=ftello(xc->geom_handle);
        signed int return_value_fileno$5;
        return_value_fileno$5=fileno(xc->geom_handle);
        void *return_value_mmap$6;
        return_value_mmap$6=mmap((void *)0, (unsigned long int)tlen, 0x1 | 0x2, 0x01, return_value_fileno$5, (signed long int)0);
        tmem = (unsigned char *)(void *)return_value_mmap$6;
        if(!(tmem == ((unsigned char *)NULL)))
        {
          unsigned long int destlen = (unsigned long int)tlen;
          unsigned char *dmem;
          unsigned long int return_value_compressBound$7;
          return_value_compressBound$7=compressBound(destlen);
          void *return_value_malloc$8;
          return_value_malloc$8=malloc(return_value_compressBound$7);
          dmem = (unsigned char *)return_value_malloc$8;
          signed int rc;
          rc=compress2(dmem, &destlen, tmem, (unsigned long int)tlen, 9);
          if(!(rc == 0) || !(tlen >= (signed long int)destlen))
            destlen = (unsigned long int)tlen;

          fixup_offs=ftello(xc->handle);
          fputc(255, xc->handle);
          fstWriterUint64(xc->handle, destlen + (unsigned long int)24);
          fstWriterUint64(xc->handle, (unsigned long int)tlen);
          fstWriterUint64(xc->handle, (unsigned long int)xc->maxhandle);
          fstFwrite((const void *)((signed long int)destlen != tlen ? dmem : tmem), destlen, (unsigned long int)1, xc->handle);
          fflush(xc->handle);
          fstWriterFseeko(xc, xc->handle, fixup_offs, 0);
          fputc(3, xc->handle);
          fstWriterFseeko(xc, xc->handle, (signed long int)0, 2);
          fflush(xc->handle);
          free((void *)dmem);
          if(!(tmem == ((unsigned char *)NULL)))
            munmap((void *)tmem, (unsigned long int)tlen);

        }

        if(!(xc->num_blackouts == 0u))
        {
          unsigned long int cur_bl = (unsigned long int)0;
          signed long int bpos;
          signed long int fstWriterClose$$1$$2$$4$$eos;
          unsigned int i;
          fixup_offs=ftello(xc->handle);
          fputc(255, xc->handle);
          bpos = fixup_offs + (signed long int)1;
          fstWriterUint64(xc->handle, (unsigned long int)0);
          fstWriterVarint(xc->handle, (unsigned long int)xc->num_blackouts);
          i = (unsigned int)0;
          for( ; !(i >= xc->num_blackouts); i = i + 1u)
          {
            fputc((signed int)xc->blackout_head->active, xc->handle);
            fstWriterVarint(xc->handle, xc->blackout_head->tim - cur_bl);
            cur_bl = xc->blackout_head->tim;
            xc->blackout_curr = xc->blackout_head->next;
            free((void *)xc->blackout_head);
            xc->blackout_head = xc->blackout_curr;
          }
          fstWriterClose$$1$$2$$4$$eos=ftello(xc->handle);
          fstWriterFseeko(xc, xc->handle, bpos, 0);
          fstWriterUint64(xc->handle, (unsigned long int)(fstWriterClose$$1$$2$$4$$eos - bpos));
          fflush(xc->handle);
          fstWriterFseeko(xc, xc->handle, fixup_offs, 0);
          fputc(2, xc->handle);
          fstWriterFseeko(xc, xc->handle, (signed long int)0, 2);
          fflush(xc->handle);
        }

        if(!(xc->compress_hier == 0u))
        {
          signed long int hl;
          signed long int eos;
          struct gzFile_s *zhandle;
          signed int fstWriterClose$$1$$2$$5$$zfd;
          signed int fourpack_duo = 0;
          char *fnam;
          unsigned long int return_value_strlen$9;
          return_value_strlen$9=strlen(xc->filename);
          void *return_value_malloc$10;
          return_value_malloc$10=malloc(return_value_strlen$9 + (unsigned long int)5 + (unsigned long int)1);
          fnam = (char *)return_value_malloc$10;
          fixup_offs=ftello(xc->handle);
          fputc(255, xc->handle);
          hlen=ftello(xc->handle);
          fstWriterUint64(xc->handle, (unsigned long int)0);
          fstWriterUint64(xc->handle, (unsigned long int)xc->hier_file_len);
          if(xc->fourpack == 0u)
          {
            unsigned char *mem;
            void *return_value_malloc$11;
            return_value_malloc$11=malloc((unsigned long int)32768);
            mem = (unsigned char *)return_value_malloc$11;
            signed int return_value_fileno$12;
            return_value_fileno$12=fileno(xc->handle);
            fstWriterClose$$1$$2$$5$$zfd=dup(return_value_fileno$12);
            fflush(xc->handle);
            zhandle=gzdopen(fstWriterClose$$1$$2$$5$$zfd, "wb4");
            if(!(zhandle == ((struct gzFile_s *)NULL)))
            {
              fstWriterFseeko(xc, xc->hier_handle, (signed long int)0, 0);
              hl = (signed long int)0;
              for( ; !(hl >= xc->hier_file_len); hl = hl + (signed long int)32768)
              {
                unsigned int len;
                if(xc->hier_file_len + -hl >= 32769l)
                  tmp_if_expr$13 = (signed long int)32768;

                else
                  tmp_if_expr$13 = xc->hier_file_len - hl;
                len = (unsigned int)tmp_if_expr$13;
                fstFread((void *)mem, (unsigned long int)len, (unsigned long int)1, xc->hier_handle);
                gzwrite(zhandle, (const void *)mem, len);
              }
              gzclose(zhandle);
            }

            else
              close(fstWriterClose$$1$$2$$5$$zfd);
            free((void *)mem);
          }

          else
          {
            signed int lz4_maxlen;
            unsigned char *fstWriterClose$$1$$2$$5$$2$$mem;
            unsigned char *hmem;
            signed int packed_len;
            fflush(xc->handle);
            lz4_maxlen=LZ4_compressBound((signed int)xc->hier_file_len);
            void *return_value_malloc$14;
            return_value_malloc$14=malloc((unsigned long int)lz4_maxlen);
            fstWriterClose$$1$$2$$5$$2$$mem = (unsigned char *)return_value_malloc$14;
            signed int return_value_fileno$15;
            return_value_fileno$15=fileno(xc->hier_handle);
            void *return_value_mmap$16;
            return_value_mmap$16=mmap((void *)0, (unsigned long int)xc->hier_file_len, 0x1 | 0x2, 0x01, return_value_fileno$15, (signed long int)0);
            hmem = (unsigned char *)(void *)return_value_mmap$16;
            packed_len=LZ4_compress((char *)hmem, (char *)fstWriterClose$$1$$2$$5$$2$$mem, (signed int)xc->hier_file_len);
            if(!(hmem == ((unsigned char *)NULL)))
              munmap((void *)hmem, (unsigned long int)xc->hier_file_len);

            if(xc->repack_on_close == 0u)
              tmp_if_expr$17 = xc->hier_file_len > (signed long int)(4 * 1024 * 1024) ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$17 = (_Bool)0;
            fourpack_duo = (signed int)tmp_if_expr$17;
            if(!(fourpack_duo == 0))
            {
              unsigned char *mem_duo;
              signed int lz4_maxlen_duo;
              signed int packed_len_duo;
              lz4_maxlen_duo=LZ4_compressBound(packed_len);
              void *return_value_malloc$18;
              return_value_malloc$18=malloc((unsigned long int)lz4_maxlen_duo);
              mem_duo = (unsigned char *)return_value_malloc$18;
              packed_len_duo=LZ4_compress((char *)fstWriterClose$$1$$2$$5$$2$$mem, (char *)mem_duo, packed_len);
              fstWriterVarint(xc->handle, (unsigned long int)packed_len);
              fstFwrite((const void *)mem_duo, (unsigned long int)packed_len_duo, (unsigned long int)1, xc->handle);
              free((void *)mem_duo);
            }

            else
              fstFwrite((const void *)fstWriterClose$$1$$2$$5$$2$$mem, (unsigned long int)packed_len, (unsigned long int)1, xc->handle);
            free((void *)fstWriterClose$$1$$2$$5$$2$$mem);
          }
          fstWriterFseeko(xc, xc->handle, (signed long int)0, 2);
          eos=ftello(xc->handle);
          fstWriterFseeko(xc, xc->handle, hlen, 0);
          fstWriterUint64(xc->handle, (unsigned long int)(eos - hlen));
          fflush(xc->handle);
          fstWriterFseeko(xc, xc->handle, fixup_offs, 0);
          fputc(xc->fourpack != 0u ? (fourpack_duo != 0 ? 7 : 6) : 4, xc->handle);
          fstWriterFseeko(xc, xc->handle, (signed long int)0, 2);
          fflush(xc->handle);
          sprintf(fnam, "%s.hier", xc->filename);
          unlink(fnam);
          free((void *)fnam);
        }

        fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8), 0);
        fstWriterUint64(xc->handle, xc->firsttime);
        fstWriterUint64(xc->handle, xc->curtime);
        fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8 + 8 + 8 + 8 + 8), 0);
        fstWriterUint64(xc->handle, (unsigned long int)xc->numscopes);
        fstWriterUint64(xc->handle, (unsigned long int)xc->numsigs);
        fstWriterUint64(xc->handle, (unsigned long int)xc->maxhandle);
        fstWriterUint64(xc->handle, (unsigned long int)xc->secnum);
        fflush(xc->handle);
        tmpfile_close(&xc->tchn_handle, &xc->tchn_handle_nam);
        free((void *)xc->vchg_mem);
        xc->vchg_mem = (unsigned char *)(void *)0;
        tmpfile_close(&xc->curval_handle, &xc->curval_handle_nam);
        tmpfile_close(&xc->valpos_handle, &xc->valpos_handle_nam);
        tmpfile_close(&xc->geom_handle, &xc->geom_handle_nam);
        if(!(xc->hier_handle == ((struct _IO_FILE *)NULL)))
        {
          fclose(xc->hier_handle);
          xc->hier_handle = (struct _IO_FILE *)(void *)0;
        }

        if(!(xc->handle == ((struct _IO_FILE *)NULL)))
        {
          if(!(xc->repack_on_close == 0u))
          {
            struct _IO_FILE *fp;
            signed long int offpnt;
            signed long int uclen;
            signed int flen;
            unsigned long int return_value_strlen$19;
            return_value_strlen$19=strlen(xc->filename);
            flen = (signed int)return_value_strlen$19;
            char *hf;
            void *return_value_calloc$20;
            return_value_calloc$20=calloc((unsigned long int)1, (unsigned long int)(flen + 5));
            hf = (char *)return_value_calloc$20;
            strcpy(hf, xc->filename);
            strcpy(hf + (signed long int)flen, ".pak");
            fp=fopen(hf, "wb");
            if(!(fp == ((struct _IO_FILE *)NULL)))
            {
              void *dsth;
              signed int zfd;
              char gz_membuf[32768l];
              fstWriterFseeko(xc, xc->handle, (signed long int)0, 2);
              uclen=ftello(xc->handle);
              fputc(254, fp);
              fstWriterUint64(fp, (unsigned long int)0);
              fstWriterUint64(fp, (unsigned long int)uclen);
              fflush(fp);
              fstWriterFseeko(xc, xc->handle, (signed long int)0, 0);
              signed int return_value_fileno$21;
              return_value_fileno$21=fileno(fp);
              zfd=dup(return_value_fileno$21);
              struct gzFile_s *return_value_gzdopen$22;
              return_value_gzdopen$22=gzdopen(zfd, "wb4");
              dsth = (void *)return_value_gzdopen$22;
              if(!(dsth == NULL))
              {
                offpnt = (signed long int)0;
                for( ; !(offpnt >= uclen); offpnt = offpnt + (signed long int)32768)
                {
                  unsigned long int this_len = (unsigned long int)(uclen - offpnt > (signed long int)32768 ? (signed long int)32768 : uclen - offpnt);
                  fstFread((void *)gz_membuf, this_len, (unsigned long int)1, xc->handle);
                  gzwrite((struct gzFile_s *)dsth, (const void *)gz_membuf, (unsigned int)this_len);
                }
                gzclose((struct gzFile_s *)dsth);
              }

              else
                close(zfd);
              fstWriterFseeko(xc, fp, (signed long int)0, 2);
              offpnt=ftello(fp);
              fstWriterFseeko(xc, fp, (signed long int)1, 0);
              fstWriterUint64(fp, (unsigned long int)(offpnt - (signed long int)1));
              fclose(fp);
              fclose(xc->handle);
              xc->handle = (struct _IO_FILE *)(void *)0;
              unlink(xc->filename);
              rename(hf, xc->filename);
            }

            else
            {
              xc->repack_on_close = (unsigned int)0;
              fclose(xc->handle);
              xc->handle = (struct _IO_FILE *)(void *)0;
            }
            free((void *)hf);
          }

          else
          {
            fclose(xc->handle);
            xc->handle = (struct _IO_FILE *)(void *)0;
          }
        }

        pthread_mutex_destroy(&xc->mutex);
        pthread_attr_destroy(&xc->thread_attr);
        if(!(xc->path_array == NULL))
          JudyHSFreeArray(&xc->path_array, (struct J_UDY_ERROR_STRUCT *)(void *)0);

        free((void *)xc->filename);
        xc->filename = (char *)(void *)0;
        free((void *)xc);
      }

    }

  }

}

// fstWriterCreate
// file ./fst/fstapi.c line 1105
void * fstWriterCreate(const char *nam, signed int use_compressed_hier)
{
  struct fstWriterContext *xc;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct fstWriterContext) /*432ul*/ );
  xc = (struct fstWriterContext *)return_value_calloc$1;
  xc->compress_hier = (unsigned int)use_compressed_hier;
  fstDetermineBreakSize(xc);
  _Bool tmp_if_expr$10;
  if(nam == ((const char *)NULL))
    tmp_if_expr$10 = (_Bool)1;

  else
  {
    xc->handle=unlink_fopen(nam, "w+b");
    tmp_if_expr$10 = !(xc->handle != ((struct _IO_FILE *)NULL)) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  if(tmp_if_expr$10)
  {
    free((void *)xc);
    xc = (struct fstWriterContext *)(void *)0;
  }

  else
  {
    signed int flen;
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(nam);
    flen = (signed int)return_value_strlen$2;
    char *hf;
    void *return_value_calloc$3;
    return_value_calloc$3=calloc((unsigned long int)1, (unsigned long int)(flen + 6));
    hf = (char *)return_value_calloc$3;
    memcpy((void *)hf, (const void *)nam, (unsigned long int)flen);
    strcpy(hf + (signed long int)flen, ".hier");
    xc->hier_handle=unlink_fopen(hf, "w+b");
    xc->geom_handle=tmpfile_open(&xc->geom_handle_nam);
    xc->valpos_handle=tmpfile_open(&xc->valpos_handle_nam);
    xc->curval_handle=tmpfile_open(&xc->curval_handle_nam);
    xc->tchn_handle=tmpfile_open(&xc->tchn_handle_nam);
    xc->vchg_alloc_siz = (unsigned int)(xc->fst_break_size + xc->fst_break_add_size);
    void *return_value_malloc$4;
    return_value_malloc$4=malloc((unsigned long int)xc->vchg_alloc_siz);
    xc->vchg_mem = (unsigned char *)return_value_malloc$4;
    if(!(xc->hier_handle == ((struct _IO_FILE *)NULL)))
      tmp_if_expr$5 = xc->geom_handle != ((struct _IO_FILE *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
      tmp_if_expr$6 = xc->valpos_handle != ((struct _IO_FILE *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$6 = (_Bool)0;
    if(tmp_if_expr$6)
      tmp_if_expr$7 = xc->curval_handle != ((struct _IO_FILE *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$7 = (_Bool)0;
    if(tmp_if_expr$7)
      tmp_if_expr$8 = xc->vchg_mem != ((unsigned char *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$8 = (_Bool)0;
    if(tmp_if_expr$8)
      tmp_if_expr$9 = xc->tchn_handle != ((struct _IO_FILE *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$9 = (_Bool)0;
    if(tmp_if_expr$9)
    {
      xc->filename=strdup(nam);
      xc->is_initial_time = (unsigned int)1;
      fstWriterEmitHdrBytes(xc);
      xc->nan=strtod("NaN", (char ** restrict )(void *)0);
      pthread_mutex_init(&xc->mutex, (const union anonymous$7 *)(void *)0);
      pthread_attr_init(&xc->thread_attr);
      pthread_attr_setdetachstate(&xc->thread_attr, 1);
    }

    else
    {
      fclose(xc->handle);
      if(!(xc->hier_handle == ((struct _IO_FILE *)NULL)))
      {
        fclose(xc->hier_handle);
        unlink(hf);
      }

      tmpfile_close(&xc->geom_handle, &xc->geom_handle_nam);
      tmpfile_close(&xc->valpos_handle, &xc->valpos_handle_nam);
      tmpfile_close(&xc->curval_handle, &xc->curval_handle_nam);
      tmpfile_close(&xc->tchn_handle, &xc->tchn_handle_nam);
      free((void *)xc->vchg_mem);
      free((void *)xc);
      xc = (struct fstWriterContext *)(void *)0;
    }
    free((void *)hf);
  }
  return (void *)xc;
}

// fstWriterCreateMmaps
// file ./fst/fstapi.c line 949
static void fstWriterCreateMmaps(struct fstWriterContext *xc)
{
  signed long int curpos;
  curpos=ftello(xc->handle);
  fflush(xc->hier_handle);
  fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8), 0);
  fstWriterUint64(xc->handle, xc->firsttime);
  fstWriterUint64(xc->handle, xc->curtime);
  fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8 + 8 + 8 + 8 + 8), 0);
  fstWriterUint64(xc->handle, (unsigned long int)xc->numscopes);
  fstWriterUint64(xc->handle, (unsigned long int)xc->numsigs);
  fstWriterUint64(xc->handle, (unsigned long int)xc->maxhandle);
  fstWriterUint64(xc->handle, (unsigned long int)xc->secnum);
  fstWriterFseeko(xc, xc->handle, curpos, 0);
  fflush(xc->handle);
  if(xc->valpos_mem == ((unsigned int *)NULL))
  {
    fflush(xc->valpos_handle);
    signed int return_value_fileno$1;
    return_value_fileno$1=fileno(xc->valpos_handle);
    void *return_value_mmap$2;
    return_value_mmap$2=mmap((void *)0, (unsigned long int)(xc->maxhandle * (unsigned int)4) * sizeof(unsigned int) /*4ul*/ , 0x1 | 0x2, 0x01, return_value_fileno$1, (signed long int)0);
    xc->valpos_mem = (unsigned int *)(void *)return_value_mmap$2;
  }

  if(xc->curval_mem == ((unsigned char *)NULL))
  {
    fflush(xc->curval_handle);
    signed int return_value_fileno$3;
    return_value_fileno$3=fileno(xc->curval_handle);
    void *return_value_mmap$4;
    return_value_mmap$4=mmap((void *)0, (unsigned long int)xc->maxvalpos, 0x1 | 0x2, 0x01, return_value_fileno$3, (signed long int)0);
    xc->curval_mem = (unsigned char *)(void *)return_value_mmap$4;
  }

}

// fstWriterCreateVar
// file ./fst/fstapi.c line 2536
unsigned int fstWriterCreateVar(void *ctx, enum fstVarType vt, enum fstVarDir vd, unsigned int len, const char *nam, unsigned int aliasHandle)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  unsigned int i;
  signed int nlen;
  signed int is_real;
  if(!(nam == ((const char *)NULL)) && !(xc == ((struct fstWriterContext *)NULL)))
  {
    if(!(xc->valpos_mem == ((unsigned int *)NULL)))
      fstDestroyMmaps(xc, 0);

    fputc((signed int)vt, xc->hier_handle);
    fputc((signed int)vd, xc->hier_handle);
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(nam);
    nlen = (signed int)return_value_strlen$1;
    fstFwrite((const void *)nam, (unsigned long int)nlen, (unsigned long int)1, xc->hier_handle);
    fputc(0, xc->hier_handle);
    xc->hier_file_len = xc->hier_file_len + (signed long int)(nlen + 3);
    if((signed int)vt == FST_VT_VCD_REAL || (signed int)vt == FST_VT_VCD_REAL_PARAMETER || (signed int)vt == FST_VT_VCD_REALTIME || (signed int)vt == FST_VT_SV_SHORTREAL)
    {
      is_real = 1;
      len = (unsigned int)8;
    }

    else
    {
      is_real = 0;
      if((signed int)vt == FST_VT_GEN_STRING)
        len = (unsigned int)0;

    }
    signed int return_value_fstWriterVarint$2;
    return_value_fstWriterVarint$2=fstWriterVarint(xc->hier_handle, (unsigned long int)len);
    xc->hier_file_len = xc->hier_file_len + (signed long int)return_value_fstWriterVarint$2;
    if(!(xc->maxhandle >= aliasHandle))
      aliasHandle = (unsigned int)0;

    signed int return_value_fstWriterVarint$3;
    return_value_fstWriterVarint$3=fstWriterVarint(xc->hier_handle, (unsigned long int)aliasHandle);
    xc->hier_file_len = xc->hier_file_len + (signed long int)return_value_fstWriterVarint$3;
    xc->numsigs = xc->numsigs + 1u;
    if(xc->numsigs == xc->next_huge_break)
    {
      if(!(xc->fst_break_size >= xc->fst_huge_break_size))
      {
        xc->next_huge_break = xc->next_huge_break + (unsigned int)1000000;
        xc->fst_break_size = xc->fst_break_size + xc->fst_orig_break_size;
        xc->fst_break_add_size = xc->fst_break_add_size + xc->fst_orig_break_add_size;
        xc->vchg_alloc_siz = (unsigned int)(xc->fst_break_size + xc->fst_break_add_size);
        if(!(xc->vchg_mem == ((unsigned char *)NULL)))
        {
          void *return_value_realloc$4;
          return_value_realloc$4=realloc((void *)xc->vchg_mem, (unsigned long int)xc->vchg_alloc_siz);
          xc->vchg_mem = (unsigned char *)return_value_realloc$4;
        }

      }

    }

    if(aliasHandle == 0u)
    {
      unsigned int zero = (unsigned int)0;
      if(!(len == 0u))
        fstWriterVarint(xc->geom_handle, (unsigned long int)(!(is_real != 0) ? len : (unsigned int)0));

      else
        fstWriterVarint(xc->geom_handle, (unsigned long int)0xFFFFFFFF);
      fstFwrite((const void *)&xc->maxvalpos, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, xc->valpos_handle);
      fstFwrite((const void *)&len, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, xc->valpos_handle);
      fstFwrite((const void *)&zero, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, xc->valpos_handle);
      fstFwrite((const void *)&zero, sizeof(unsigned int) /*4ul*/ , (unsigned long int)1, xc->valpos_handle);
      if(is_real == 0)
      {
        i = (unsigned int)0;
        for( ; !(i >= len); i = i + 1u)
          fputc(120, xc->curval_handle);
      }

      else
        fstFwrite((const void *)&xc->nan, (unsigned long int)8, (unsigned long int)1, xc->curval_handle);
      xc->maxvalpos = xc->maxvalpos + len;
      xc->maxhandle = xc->maxhandle + 1u;
      return xc->maxhandle;
    }

    else
      return aliasHandle;
  }

  return (unsigned int)0;
}

// fstWriterCreateVar2
// file ./fst/fstapi.c line 2527
unsigned int fstWriterCreateVar2(void *ctx, enum fstVarType vt, enum fstVarDir vd, unsigned int len, const char *nam, unsigned int aliasHandle, const char *type, enum fstSupplementalVarType svt, enum fstSupplementalDataType sdt)
{
  fstWriterSetAttrGeneric(ctx, type != ((const char *)NULL) ? type : "", 2, (unsigned long int)((signed int)svt << FST_SDT_SVT_SHIFT_COUNT | (signed int)sdt & FST_SDT_ABS_MAX));
  unsigned int return_value_fstWriterCreateVar$1;
  return_value_fstWriterCreateVar$1=fstWriterCreateVar(ctx, vt, vd, len, nam, aliasHandle);
  return return_value_fstWriterCreateVar$1;
}

// fstWriterEmitDumpActive
// file ./fst/fstapi.c line 2944
void fstWriterEmitDumpActive(void *ctx, signed int enable)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    struct fstBlackoutChain *b;
    void *return_value_calloc$1;
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct fstBlackoutChain) /*24ul*/ );
    b = (struct fstBlackoutChain *)return_value_calloc$1;
    b->tim = xc->curtime;
    b->active = (unsigned int)(enable != 0);
    xc->num_blackouts = xc->num_blackouts + 1u;
    if(!(xc->blackout_curr == ((struct fstBlackoutChain *)NULL)))
    {
      xc->blackout_curr->next = b;
      xc->blackout_curr = b;
    }

    else
    {
      xc->blackout_head = b;
      xc->blackout_curr = b;
    }
  }

}

// fstWriterEmitHdrBytes
// file ./fst/fstapi.c line 881
static void fstWriterEmitHdrBytes(struct fstWriterContext *xc)
{
  char vbuf[128l];
  char dbuf[119l];
  double endtest = 2.7182818284590452354;
  signed long int walltime;
  fputc(0, xc->handle);
  fstWriterUint64(xc->handle, (unsigned long int)329);
  fstWriterUint64(xc->handle, (unsigned long int)0);
  fstWriterUint64(xc->handle, (unsigned long int)0);
  fstFwrite((const void *)&endtest, (unsigned long int)8, (unsigned long int)1, xc->handle);
  fstWriterUint64(xc->handle, xc->fst_break_size);
  fstWriterUint64(xc->handle, (unsigned long int)0);
  fstWriterUint64(xc->handle, (unsigned long int)0);
  fstWriterUint64(xc->handle, (unsigned long int)0);
  fstWriterUint64(xc->handle, (unsigned long int)0);
  fputc(-9 & 255, xc->handle);
  memset((void *)vbuf, 0, (unsigned long int)128);
  strcpy(vbuf, "fstWriter");
  fstFwrite((const void *)vbuf, (unsigned long int)128, (unsigned long int)1, xc->handle);
  memset((void *)dbuf, 0, (unsigned long int)119);
  time(&walltime);
  struct tm *return_value_localtime$1;
  return_value_localtime$1=localtime(&walltime);
  char *return_value_asctime$2;
  return_value_asctime$2=asctime(return_value_localtime$1);
  strcpy(dbuf, return_value_asctime$2);
  fstFwrite((const void *)dbuf, (unsigned long int)119, (unsigned long int)1, xc->handle);
  fputc((signed int)xc->filetype, xc->handle);
  fstWriterUint64(xc->handle, (unsigned long int)xc->timezero);
  fflush(xc->handle);
}

// fstWriterEmitSectionHeader
// file ./fst/fstapi.c line 1170
static void fstWriterEmitSectionHeader(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  unsigned long int tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    unsigned long int destlen;
    unsigned char *dmem;
    signed int rc;
    destlen = (unsigned long int)xc->maxvalpos;
    unsigned long int return_value_compressBound$1;
    return_value_compressBound$1=compressBound(destlen);
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(return_value_compressBound$1);
    dmem = (unsigned char *)return_value_malloc$2;
    rc=compress2(dmem, &destlen, xc->curval_mem, (unsigned long int)xc->maxvalpos, 4);
    fputc(255, xc->handle);
    xc->section_start=ftello(xc->handle);
    if(!(xc->xc_parent == ((struct fstWriterContext *)NULL)))
      xc->xc_parent->section_start = xc->section_start;

    xc->section_header_only = (unsigned int)1;
    fstWriterUint64(xc->handle, (unsigned long int)0);
    if(!(xc->is_initial_time == 0u))
      tmp_if_expr$3 = xc->firsttime;

    else
      tmp_if_expr$3 = xc->curtime;
    fstWriterUint64(xc->handle, tmp_if_expr$3);
    fstWriterUint64(xc->handle, xc->curtime);
    fstWriterUint64(xc->handle, (unsigned long int)0);
    fstWriterVarint(xc->handle, (unsigned long int)xc->maxvalpos);
    if(rc == 0)
      tmp_if_expr$4 = destlen < (unsigned long int)xc->maxvalpos ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$4 = (_Bool)0;
    if(tmp_if_expr$4)
      fstWriterVarint(xc->handle, destlen);

    else
      fstWriterVarint(xc->handle, (unsigned long int)xc->maxvalpos);
    fstWriterVarint(xc->handle, (unsigned long int)xc->maxhandle);
    if(rc == 0)
      tmp_if_expr$5 = destlen < (unsigned long int)xc->maxvalpos ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
      fstFwrite((const void *)dmem, destlen, (unsigned long int)1, xc->handle);

    else
      fstFwrite((const void *)xc->curval_mem, (unsigned long int)xc->maxvalpos, (unsigned long int)1, xc->handle);
    free((void *)dmem);
  }

}

// fstWriterEmitTimeChange
// file ./fst/fstapi.c line 2889
void fstWriterEmitTimeChange(void *ctx, unsigned long int tim)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  unsigned int i;
  signed int skip = 0;
  _Bool tmp_if_expr$1;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    if(!(xc->is_initial_time == 0u))
    {
      if(!(xc->size_limit_locked == 0u))
        goto __CPROVER_DUMP_L11;

      if(xc->valpos_mem == ((unsigned int *)NULL))
        fstWriterCreateMmaps(xc);

      skip = 1;
      xc->firsttime = xc->vc_emitted != 0u ? (unsigned long int)0 : tim;
      xc->curtime = (unsigned long int)0;
      xc->vchg_mem[(signed long int)0] = (unsigned char)33;
      xc->vchg_siz = (unsigned int)1;
      fstWriterEmitSectionHeader((void *)xc);
      i = (unsigned int)0;
      for( ; !(i >= xc->maxhandle); i = i + 1u)
      {
        xc->valpos_mem[(signed long int)((unsigned int)4 * i + (unsigned int)2)] = (unsigned int)0;
        xc->valpos_mem[(signed long int)((unsigned int)4 * i + (unsigned int)3)] = (unsigned int)0;
      }
      xc->is_initial_time = (unsigned int)0;
    }

    else
    {
      if((unsigned long int)xc->vchg_siz >= xc->fst_break_size)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = xc->flush_context_pending != 0u ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
      {
        xc->flush_context_pending = (unsigned int)0;
        fstWriterFlushContextPrivate((void *)xc);
        xc->tchn_cnt = xc->tchn_cnt + 1u;
        fstWriterVarint(xc->tchn_handle, xc->curtime);
      }

    }
    if(skip == 0)
      xc->tchn_idx = xc->tchn_idx + 1u;

    fstWriterVarint(xc->tchn_handle, tim - xc->curtime);
    xc->tchn_cnt = xc->tchn_cnt + 1u;
    xc->curtime = tim;
  }


__CPROVER_DUMP_L11:
  ;
}

// fstWriterEmitValueChange
// file ./fst/fstapi.c line 2728
void fstWriterEmitValueChange(void *ctx, unsigned int handle, const void *val)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  const unsigned char *buf = (const unsigned char *)val;
  unsigned int offs;
  signed int len;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    if(xc->maxhandle >= handle)
    {
      unsigned int fpos;
      unsigned int *vm4ip;
      if(xc->valpos_mem == ((unsigned int *)NULL))
      {
        xc->vc_emitted = (unsigned int)1;
        fstWriterCreateMmaps(xc);
      }

      handle = handle - 1u;
      vm4ip = &xc->valpos_mem[(signed long int)((unsigned int)4 * handle)];
      len = (signed int)vm4ip[(signed long int)1];
      if(!(len == 0))
      {
        if(xc->is_initial_time == 0u)
        {
          fpos = xc->vchg_siz;
          if(!(xc->vchg_alloc_siz >= 10u + fpos + (unsigned int)len))
          {
            xc->vchg_alloc_siz = xc->vchg_alloc_siz + (unsigned int)(xc->fst_break_add_size + (unsigned long int)len);
            void *return_value_realloc$1;
            return_value_realloc$1=realloc((void *)xc->vchg_mem, (unsigned long int)xc->vchg_alloc_siz);
            xc->vchg_mem = (unsigned char *)return_value_realloc$1;
            if(xc->vchg_mem == ((unsigned char *)NULL))
            {
              fprintf(stderr, "FATAL ERROR, could not realloc() in fstWriterEmitValueChange, exiting.\n");
              exit(255);
            }

          }

          unsigned int return_value_fstWriterUint32WithVarint32$2;
          return_value_fstWriterUint32WithVarint32$2=fstWriterUint32WithVarint32(xc, &vm4ip[(signed long int)2], xc->tchn_idx - vm4ip[(signed long int)3], (const void *)buf, (unsigned int)len);
          xc->vchg_siz = xc->vchg_siz + return_value_fstWriterUint32WithVarint32$2;
          vm4ip[(signed long int)3] = xc->tchn_idx;
          vm4ip[(signed long int)2] = fpos;
        }

        else
        {
          offs = vm4ip[(signed long int)0];
          memcpy((void *)(xc->curval_mem + (signed long int)offs), (const void *)buf, (unsigned long int)len);
        }
      }

    }

  }

}

// fstWriterEmitVariableLengthValueChange
// file ./fst/fstapi.c line 2846
void fstWriterEmitVariableLengthValueChange(void *ctx, unsigned int handle, const void *val, unsigned int len)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  const unsigned char *buf = (const unsigned char *)val;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    if(xc->maxhandle >= handle)
    {
      unsigned int fpos;
      unsigned int *vm4ip;
      if(xc->valpos_mem == ((unsigned int *)NULL))
      {
        xc->vc_emitted = (unsigned int)1;
        fstWriterCreateMmaps(xc);
      }

      handle = handle - 1u;
      vm4ip = &xc->valpos_mem[(signed long int)((unsigned int)4 * handle)];
      if(vm4ip[1l] == 0u)
      {
        fpos = xc->vchg_siz;
        if(!(xc->vchg_alloc_siz >= 15u + fpos + len))
        {
          xc->vchg_alloc_siz = xc->vchg_alloc_siz + (unsigned int)(xc->fst_break_add_size + (unsigned long int)len + (unsigned long int)5);
          void *return_value_realloc$1;
          return_value_realloc$1=realloc((void *)xc->vchg_mem, (unsigned long int)xc->vchg_alloc_siz);
          xc->vchg_mem = (unsigned char *)return_value_realloc$1;
          if(xc->vchg_mem == ((unsigned char *)NULL))
          {
            fprintf(stderr, "FATAL ERROR, could not realloc() in fstWriterEmitVariableLengthValueChange, exiting.\n");
            exit(255);
          }

        }

        unsigned int return_value_fstWriterUint32WithVarint32AndLength$2;
        return_value_fstWriterUint32WithVarint32AndLength$2=fstWriterUint32WithVarint32AndLength(xc, &vm4ip[(signed long int)2], xc->tchn_idx - vm4ip[(signed long int)3], (const void *)buf, len);
        xc->vchg_siz = xc->vchg_siz + return_value_fstWriterUint32WithVarint32AndLength$2;
        vm4ip[(signed long int)3] = xc->tchn_idx;
        vm4ip[(signed long int)2] = fpos;
      }

    }

  }

}

// fstWriterFlushContext
// file ./fst/fstapi.c line 1841
void fstWriterFlushContext(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    if(xc->tchn_idx >= 2u)
      xc->flush_context_pending = (unsigned int)1;

  }

}

// fstWriterFlushContextPrivate
// file ./fst/fstapi.c line 1776
static void fstWriterFlushContextPrivate(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc->parallel_enabled == 0u))
  {
    struct fstWriterContext *xc2;
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct fstWriterContext) /*432ul*/ );
    xc2 = (struct fstWriterContext *)return_value_malloc$1;
    unsigned int i;
    pthread_mutex_lock(&xc->mutex);
    pthread_mutex_unlock(&xc->mutex);
    xc->xc_parent = xc;
    memcpy((void *)xc2, (const void *)xc, sizeof(struct fstWriterContext) /*432ul*/ );
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)(xc->maxhandle * (unsigned int)4) * sizeof(unsigned int) /*4ul*/ );
    xc2->valpos_mem = (unsigned int *)return_value_malloc$2;
    memcpy((void *)xc2->valpos_mem, (const void *)xc->valpos_mem, (unsigned long int)(xc->maxhandle * (unsigned int)4) * sizeof(unsigned int) /*4ul*/ );
    void *return_value_malloc$3;
    return_value_malloc$3=malloc((unsigned long int)xc->vchg_alloc_siz);
    xc->vchg_mem = (unsigned char *)return_value_malloc$3;
    xc->vchg_mem[(signed long int)0] = (unsigned char)33;
    xc->vchg_siz = (unsigned int)1;
    i = (unsigned int)0;
    for( ; !(i >= xc->maxhandle); i = i + 1u)
    {
      unsigned int *vm4ip = &xc->valpos_mem[(signed long int)((unsigned int)4 * i)];
      vm4ip[(signed long int)2] = (unsigned int)0;
      vm4ip[(signed long int)3] = (unsigned int)0;
    }
    xc->tchn_idx = (unsigned int)0;
    xc->tchn_cnt = xc->tchn_idx;
    xc->tchn_handle=tmpfile_open(&xc->tchn_handle_nam);
    fstWriterFseeko(xc, xc->tchn_handle, (signed long int)0, 0);
    signed int return_value_fileno$4;
    return_value_fileno$4=fileno(xc->tchn_handle);
    fstFtruncate(return_value_fileno$4, (signed long int)0);
    xc->section_header_only = (unsigned int)0;
    xc->secnum = xc->secnum + 1u;
    pthread_mutex_lock(&xc->mutex);
    pthread_create(&xc->thread, &xc->thread_attr, fstWriterFlushContextPrivate1, (void *)xc2);
  }

  else
  {
    if(!(xc->parallel_was_enabled == 0u))
    {
      pthread_mutex_lock(&xc->mutex);
      pthread_mutex_unlock(&xc->mutex);
    }

    xc->xc_parent = xc;
    fstWriterFlushContextPrivate2((void *)xc);
  }
}

// fstWriterFlushContextPrivate1
// file ./fst/fstapi.c line 1756
static void * fstWriterFlushContextPrivate1(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  fstWriterFlushContextPrivate2((void *)xc);
  pthread_mutex_unlock(&xc->xc_parent->mutex);
  free((void *)xc->valpos_mem);
  free((void *)xc->vchg_mem);
  tmpfile_close(&xc->tchn_handle, &xc->tchn_handle_nam);
  free((void *)xc);
  return (void *)0;
}

// fstWriterFlushContextPrivate2
// file ./fst/fstapi.c line 1225
static void fstWriterFlushContextPrivate2(void *ctx)
{
  unsigned int i;
  unsigned char *vchg_mem;
  struct _IO_FILE *f;
  signed long int fpos;
  signed long int indxpos;
  signed long int endpos;
  unsigned int prevpos;
  signed int zerocnt;
  unsigned char *scratchpad;
  unsigned char *scratchpnt;
  unsigned char *tmem;
  signed long int tlen;
  signed long int unc_memreq = (signed long int)0;
  unsigned char *packmem;
  unsigned int packmemlen;
  unsigned int *vm4ip;
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  struct fstWriterContext *xc2 = xc->xc_parent;
  void *PJHSArray = (void *)0;
  _Bool tmp_if_expr$1;
  if(!(xc->vchg_siz >= 2u))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = xc->already_in_flush != 0 ? (_Bool)1 : (_Bool)0;
  signed int tmp_if_expr$3;
  _Bool tmp_if_expr$5;
  signed int tmp_if_expr$14;
  signed int return_value_LZ4_compress$12;
  signed int return_value_fastlz_compress$13;
  if(!tmp_if_expr$1)
  {
    xc->already_in_flush = (unsigned char)1;
    xc->section_header_only = (unsigned int)0;
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)xc->vchg_siz);
    scratchpad = (unsigned char *)return_value_malloc$2;
    vchg_mem = xc->vchg_mem;
    f = xc->handle;
    fstWriterVarint(f, (unsigned long int)xc->maxhandle);
    if(!(xc->fourpack == 0u))
      tmp_if_expr$3 = 52;

    else
      tmp_if_expr$3 = xc->fastpack != 0u ? 70 : 90;
    fputc(tmp_if_expr$3, f);
    fpos = (signed long int)1;
    packmemlen = (unsigned int)1024;
    void *return_value_malloc$4;
    return_value_malloc$4=malloc((unsigned long int)packmemlen);
    packmem = (unsigned char *)return_value_malloc$4;
    i = (unsigned int)0;
    for( ; !(i >= xc->maxhandle); i = i + 1u)
    {
      vm4ip = &xc->valpos_mem[(signed long int)((unsigned int)4 * i)];
      if(!(vm4ip[2l] == 0u))
      {
        unsigned int offs = vm4ip[(signed long int)2];
        unsigned int next_offs;
        unsigned int wrlen;
        vm4ip[(signed long int)2] = (unsigned int)fpos;
        scratchpnt = scratchpad + (signed long int)xc->vchg_siz;
        if(!(vm4ip[1l] >= 2u))
        {
          if(vm4ip[1l] == 1u)
          {
            wrlen=fstGetVarint32Length(vchg_mem + (signed long int)offs + (signed long int)4);
            xc->curval_mem[(signed long int)vm4ip[(signed long int)0]] = vchg_mem[(signed long int)(offs + (unsigned int)4 + wrlen)];
            while(!(offs == 0u))
            {
              unsigned char val;
              unsigned int time_delta;
              unsigned int rcv;
              next_offs = *((unsigned int *)(vchg_mem + (signed long int)offs));
              offs = offs + (unsigned int)4;
              time_delta=fstGetVarint32(vchg_mem + (signed long int)offs, (signed int *)&wrlen);
              val = vchg_mem[(signed long int)(offs + wrlen)];
              offs = next_offs;
              switch((signed int)val)
              {
                case 48:

                case 49:
                {
                  rcv = (unsigned int)(((signed int)val & 1) << 1) | time_delta << 2;
                  break;
                }
                case 120:

                case 88:
                {
                  rcv = (unsigned int)(1 | 0 << 1) | time_delta << 4;
                  break;
                }
                case 122:

                case 90:
                {
                  rcv = (unsigned int)(1 | 1 << 1) | time_delta << 4;
                  break;
                }
                case 104:

                case 72:
                {
                  rcv = (unsigned int)(1 | 2 << 1) | time_delta << 4;
                  break;
                }
                case 117:

                case 85:
                {
                  rcv = (unsigned int)(1 | 3 << 1) | time_delta << 4;
                  break;
                }
                case 119:

                case 87:
                {
                  rcv = (unsigned int)(1 | 4 << 1) | time_delta << 4;
                  break;
                }
                case 108:

                case 76:
                {
                  rcv = (unsigned int)(1 | 5 << 1) | time_delta << 4;
                  break;
                }
                default:
                  rcv = (unsigned int)(1 | 6 << 1) | time_delta << 4;
              }
              scratchpnt=fstCopyVarint32ToLeft(scratchpnt, rcv);
            }
          }

          else
          {
            unsigned char *pnt;
            unsigned int record_len;
            unsigned int fstWriterFlushContextPrivate2$$1$$1$$1$$1$$1$$2$$time_delta;
            while(!(offs == 0u))
            {
              next_offs = *((unsigned int *)(vchg_mem + (signed long int)offs));
              offs = offs + (unsigned int)4;
              pnt = vchg_mem + (signed long int)offs;
              offs = next_offs;
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$1$$2$$time_delta=fstGetVarint32(pnt, (signed int *)&wrlen);
              pnt = pnt + (signed long int)wrlen;
              record_len=fstGetVarint32(pnt, (signed int *)&wrlen);
              pnt = pnt + (signed long int)wrlen;
              scratchpnt = scratchpnt - (signed long int)record_len;
              memcpy((void *)scratchpnt, (const void *)pnt, (unsigned long int)record_len);
              scratchpnt=fstCopyVarint32ToLeft(scratchpnt, record_len);
              scratchpnt=fstCopyVarint32ToLeft(scratchpnt, fstWriterFlushContextPrivate2$$1$$1$$1$$1$$1$$2$$time_delta << 1);
            }
          }
        }

        else
        {
          wrlen=fstGetVarint32Length(vchg_mem + (signed long int)offs + (signed long int)4);
          memcpy((void *)(xc->curval_mem + (signed long int)vm4ip[(signed long int)0]), (const void *)(vchg_mem + (signed long int)offs + (signed long int)4 + (signed long int)wrlen), (unsigned long int)vm4ip[(signed long int)1]);
          while(!(offs == 0u))
          {
            unsigned int idx;
            char is_binary = (char)1;
            unsigned char *fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt;
            unsigned int fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$time_delta;
            next_offs = *((unsigned int *)(vchg_mem + (signed long int)offs));
            offs = offs + (unsigned int)4;
            fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$time_delta=fstGetVarint32(vchg_mem + (signed long int)offs, (signed int *)&wrlen);
            fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt = vchg_mem + (signed long int)offs + (signed long int)wrlen;
            offs = next_offs;
            idx = (unsigned int)0;
            for( ; !(idx >= vm4ip[1l]); idx = idx + 1u)
            {
              if((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)idx] == 48)
                tmp_if_expr$5 = (_Bool)1;

              else
                tmp_if_expr$5 = (signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)idx] == 49 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$5)
                goto __CPROVER_DUMP_L28;

              else
              {
                is_binary = (char)0;
                break;
              }

            __CPROVER_DUMP_L28:
              ;
            }
            if(!(is_binary == 0))
            {
              unsigned char acc = (unsigned char)0;
              idx = vm4ip[(signed long int)1] + (unsigned int)7 & (unsigned int)~7;
              switch(vm4ip[(signed long int)1] & (unsigned int)7)
              {
                case (unsigned int)7:
                  acc = acc | (unsigned char)(((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)((idx + (unsigned int)6) - (unsigned int)8)] & 1) << 1);
                case (unsigned int)6:
                  acc = acc | (unsigned char)(((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)((idx + (unsigned int)5) - (unsigned int)8)] & 1) << 2);
                case (unsigned int)5:
                  acc = acc | (unsigned char)(((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)((idx + (unsigned int)4) - (unsigned int)8)] & 1) << 3);
                case (unsigned int)4:
                  acc = acc | (unsigned char)(((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)((idx + (unsigned int)3) - (unsigned int)8)] & 1) << 4);
                case (unsigned int)3:
                  acc = acc | (unsigned char)(((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)((idx + (unsigned int)2) - (unsigned int)8)] & 1) << 5);
                case (unsigned int)2:
                  acc = acc | (unsigned char)(((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)((idx + (unsigned int)1) - (unsigned int)8)] & 1) << 6);
                case (unsigned int)1:
                {
                  acc = acc | (unsigned char)(((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)((idx + (unsigned int)0) - (unsigned int)8)] & 1) << 7);
                  scratchpnt = scratchpnt - 1l;
                  *scratchpnt = acc;
                  idx = idx - (unsigned int)8;
                  if(!(idx == 0u))
                    goto __CPROVER_DUMP_L30;

                }
                case (unsigned int)0:
                {

                __CPROVER_DUMP_L30:
                  ;
                  acc = (unsigned char)(((signed int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt[(signed long int)((idx + (unsigned int)7) - (unsigned int)8)] & 1) << 0);
                }
                default:
                  scratchpnt=fstCopyVarint32ToLeft(scratchpnt, fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$time_delta << 1);
              }
            }

            else
            {
              scratchpnt = scratchpnt - (signed long int)vm4ip[(signed long int)1];
              memcpy((void *)scratchpnt, (const void *)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$pnt, (unsigned long int)vm4ip[(signed long int)1]);
              scratchpnt=fstCopyVarint32ToLeft(scratchpnt, fstWriterFlushContextPrivate2$$1$$1$$1$$1$$2$$1$$time_delta << 1 | (unsigned int)1);
            }
          }
        }
        wrlen = (unsigned int)((scratchpad + (signed long int)xc->vchg_siz) - scratchpnt);
        unc_memreq = unc_memreq + (signed long int)wrlen;
        if(wrlen >= 33u)
        {
          unsigned long int fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$destlen = (unsigned long int)wrlen;
          unsigned char *fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem;
          unsigned int fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$rc;
          if(xc->fastpack == 0u)
          {
            if(packmemlen >= wrlen)
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem = packmem;

            else
            {
              free((void *)packmem);
              packmemlen = wrlen;
              unsigned long int return_value_compressBound$6;
              return_value_compressBound$6=compressBound((unsigned long int)packmemlen);
              void *return_value_malloc$7;
              return_value_malloc$7=malloc(return_value_compressBound$6);
              packmem = (unsigned char *)return_value_malloc$7;
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem = packmem;
            }
            signed int return_value_compress2$8;
            return_value_compress2$8=compress2(fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem, &fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$destlen, scratchpnt, (unsigned long int)wrlen, 4);
            fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$rc = (unsigned int)return_value_compress2$8;
            if(fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$rc == 0u)
            {
              void **fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$3$$pv;
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$3$$pv=JudyHSIns(&PJHSArray, (void *)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem, fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$destlen, (struct J_UDY_ERROR_STRUCT *)(void *)0);
              if(!(*fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$3$$pv == NULL))
              {
                unsigned int fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$3$$1$$pvi = (unsigned int)(signed long int)*fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$3$$pv;
                vm4ip[(signed long int)2] = -fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$3$$1$$pvi;
              }

              else
              {
                *fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$3$$pv = (void *)(signed long int)(i + (unsigned int)1);
                signed int return_value_fstWriterVarint$9;
                return_value_fstWriterVarint$9=fstWriterVarint(f, (unsigned long int)wrlen);
                fpos = fpos + (signed long int)return_value_fstWriterVarint$9;
                fpos = fpos + (signed long int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$destlen;
                fstFwrite((const void *)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem, fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$destlen, (unsigned long int)1, f);
              }
            }

            else
            {
              void **fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$4$$pv;
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$4$$pv=JudyHSIns(&PJHSArray, (void *)scratchpnt, (unsigned long int)wrlen, (struct J_UDY_ERROR_STRUCT *)(void *)0);
              if(!(*fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$4$$pv == NULL))
              {
                unsigned int fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$4$$1$$pvi = (unsigned int)(signed long int)*fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$4$$pv;
                vm4ip[(signed long int)2] = -fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$4$$1$$pvi;
              }

              else
              {
                *fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$1$$4$$pv = (void *)(signed long int)(i + (unsigned int)1);
                signed int return_value_fstWriterVarint$10;
                return_value_fstWriterVarint$10=fstWriterVarint(f, (unsigned long int)0);
                fpos = fpos + (signed long int)return_value_fstWriterVarint$10;
                fpos = fpos + (signed long int)wrlen;
                fstFwrite((const void *)scratchpnt, (unsigned long int)wrlen, (unsigned long int)1, f);
              }
            }
          }

          else
          {
            if(packmemlen >= 2u * wrlen + 2u)
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem = packmem;

            else
            {
              free((void *)packmem);
              packmemlen = wrlen * (unsigned int)2 + (unsigned int)2;
              void *return_value_malloc$11;
              return_value_malloc$11=malloc((unsigned long int)packmemlen);
              packmem = (unsigned char *)return_value_malloc$11;
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem = packmem;
            }
            if(!(xc->fourpack == 0u))
            {
              return_value_LZ4_compress$12=LZ4_compress((char *)scratchpnt, (char *)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem, (signed int)wrlen);
              tmp_if_expr$14 = return_value_LZ4_compress$12;
            }

            else
            {
              return_value_fastlz_compress$13=fastlz_compress((const void *)scratchpnt, (signed int)wrlen, (void *)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem);
              tmp_if_expr$14 = return_value_fastlz_compress$13;
            }
            fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$rc = (unsigned int)tmp_if_expr$14;
            if(!((unsigned long int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$rc >= fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$destlen))
            {
              void **fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$3$$pv;
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$3$$pv=JudyHSIns(&PJHSArray, (void *)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem, (unsigned long int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$rc, (struct J_UDY_ERROR_STRUCT *)(void *)0);
              if(!(*fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$3$$pv == NULL))
              {
                unsigned int fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$3$$1$$pvi = (unsigned int)(signed long int)*fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$3$$pv;
                vm4ip[(signed long int)2] = -fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$3$$1$$pvi;
              }

              else
              {
                *fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$3$$pv = (void *)(signed long int)(i + (unsigned int)1);
                signed int return_value_fstWriterVarint$15;
                return_value_fstWriterVarint$15=fstWriterVarint(f, (unsigned long int)wrlen);
                fpos = fpos + (signed long int)return_value_fstWriterVarint$15;
                fpos = fpos + (signed long int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$rc;
                fstFwrite((const void *)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$dmem, (unsigned long int)fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$rc, (unsigned long int)1, f);
              }
            }

            else
            {
              void **fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$4$$pv;
              fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$4$$pv=JudyHSIns(&PJHSArray, (void *)scratchpnt, (unsigned long int)wrlen, (struct J_UDY_ERROR_STRUCT *)(void *)0);
              if(!(*fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$4$$pv == NULL))
              {
                unsigned int fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$4$$1$$pvi = (unsigned int)(signed long int)*fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$4$$pv;
                vm4ip[(signed long int)2] = -fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$4$$1$$pvi;
              }

              else
              {
                *fstWriterFlushContextPrivate2$$1$$1$$1$$1$$3$$2$$4$$pv = (void *)(signed long int)(i + (unsigned int)1);
                signed int return_value_fstWriterVarint$16;
                return_value_fstWriterVarint$16=fstWriterVarint(f, (unsigned long int)0);
                fpos = fpos + (signed long int)return_value_fstWriterVarint$16;
                fpos = fpos + (signed long int)wrlen;
                fstFwrite((const void *)scratchpnt, (unsigned long int)wrlen, (unsigned long int)1, f);
              }
            }
          }
        }

        else
        {
          void **pv;
          pv=JudyHSIns(&PJHSArray, (void *)scratchpnt, (unsigned long int)wrlen, (struct J_UDY_ERROR_STRUCT *)(void *)0);
          if(!(*pv == NULL))
          {
            unsigned int pvi = (unsigned int)(signed long int)*pv;
            vm4ip[(signed long int)2] = -pvi;
          }

          else
          {
            *pv = (void *)(signed long int)(i + (unsigned int)1);
            signed int return_value_fstWriterVarint$17;
            return_value_fstWriterVarint$17=fstWriterVarint(f, (unsigned long int)0);
            fpos = fpos + (signed long int)return_value_fstWriterVarint$17;
            fpos = fpos + (signed long int)wrlen;
            fstFwrite((const void *)scratchpnt, (unsigned long int)wrlen, (unsigned long int)1, f);
          }
        }
      }

    }
    JudyHSFreeArray(&PJHSArray, (struct J_UDY_ERROR_STRUCT *)(void *)0);
    free((void *)packmem);
    packmem = (unsigned char *)(void *)0;
    prevpos = (unsigned int)0;
    zerocnt = 0;
    free((void *)scratchpad);
    scratchpad = (unsigned char *)(void *)0;
    indxpos=ftello(f);
    xc->secnum = xc->secnum + 1u;
    {
      unsigned int prev_alias = (unsigned int)0;
      i = (unsigned int)0;
      for( ; !(i >= xc->maxhandle); i = i + 1u)
      {
        vm4ip = &xc->valpos_mem[(signed long int)((unsigned int)4 * i)];
        if(!(vm4ip[2l] == 0u))
        {
          if(!(zerocnt == 0))
          {
            signed int return_value_fstWriterVarint$18;
            return_value_fstWriterVarint$18=fstWriterVarint(f, (unsigned long int)(zerocnt << 1));
            fpos = fpos + (signed long int)return_value_fstWriterVarint$18;
            zerocnt = 0;
          }

          if(!((0x80000000 & vm4ip[2l]) == 0u))
          {
            if(!(vm4ip[2l] == prev_alias))
            {
              prev_alias = vm4ip[(signed long int)2];
              signed int return_value_fstWriterSVarint$19;
              return_value_fstWriterSVarint$19=fstWriterSVarint(f, (signed long int)(signed int)prev_alias << 1 | (signed long int)1);
              fpos = fpos + (signed long int)return_value_fstWriterSVarint$19;
            }

            else
            {
              signed int return_value_fstWriterSVarint$20;
              return_value_fstWriterSVarint$20=fstWriterSVarint(f, (signed long int)(0 << 1 | 1));
              fpos = fpos + (signed long int)return_value_fstWriterSVarint$20;
            }
          }

          else
          {
            signed int return_value_fstWriterSVarint$21;
            return_value_fstWriterSVarint$21=fstWriterSVarint(f, (signed long int)(vm4ip[(signed long int)2] - prevpos << 1 | (unsigned int)1));
            fpos = fpos + (signed long int)return_value_fstWriterSVarint$21;
            prevpos = vm4ip[(signed long int)2];
          }
          vm4ip[(signed long int)2] = (unsigned int)0;
          vm4ip[(signed long int)3] = (unsigned int)0;
        }

        else
          zerocnt = zerocnt + 1;
      }
    }
    if(!(zerocnt == 0))
      fstWriterVarint(f, (unsigned long int)(zerocnt << 1));

    xc->vchg_mem[(signed long int)0] = (unsigned char)33;
    xc->vchg_siz = (unsigned int)1;
    endpos=ftello(xc->handle);
    fstWriterUint64(xc->handle, (unsigned long int)(endpos - indxpos));
    fflush(xc->tchn_handle);
    tlen=ftello(xc->tchn_handle);
    fstWriterFseeko(xc, xc->tchn_handle, (signed long int)0, 0);
    signed int return_value_fileno$26;
    return_value_fileno$26=fileno(xc->tchn_handle);
    void *return_value_mmap$27;
    return_value_mmap$27=mmap((void *)0, (unsigned long int)tlen, 0x1 | 0x2, 0x01, return_value_fileno$26, (signed long int)0);
    tmem = (unsigned char *)(void *)return_value_mmap$27;
    if(!(tmem == ((unsigned char *)NULL)))
    {
      unsigned long int destlen = (unsigned long int)tlen;
      unsigned char *dmem;
      unsigned long int return_value_compressBound$28;
      return_value_compressBound$28=compressBound(destlen);
      void *return_value_malloc$29;
      return_value_malloc$29=malloc(return_value_compressBound$28);
      dmem = (unsigned char *)return_value_malloc$29;
      signed int rc;
      rc=compress2(dmem, &destlen, tmem, (unsigned long int)tlen, 9);
      if(rc == 0 && !((signed long int)destlen >= tlen))
        fstFwrite((const void *)dmem, destlen, (unsigned long int)1, xc->handle);

      else
      {
        fstFwrite((const void *)tmem, (unsigned long int)tlen, (unsigned long int)1, xc->handle);
        destlen = (unsigned long int)tlen;
      }
      free((void *)dmem);
      if(!(tmem == ((unsigned char *)NULL)))
        munmap((void *)tmem, (unsigned long int)tlen);

      fstWriterUint64(xc->handle, (unsigned long int)tlen);
      fstWriterUint64(xc->handle, destlen);
      fstWriterUint64(xc->handle, (unsigned long int)xc->tchn_cnt);
    }

    xc->tchn_idx = (unsigned int)0;
    xc->tchn_cnt = xc->tchn_idx;
    fstWriterFseeko(xc, xc->tchn_handle, (signed long int)0, 0);
    signed int return_value_fileno$30;
    return_value_fileno$30=fileno(xc->tchn_handle);
    fstFtruncate(return_value_fileno$30, (signed long int)0);
    endpos=ftello(xc->handle);
    fstWriterFseeko(xc, xc->handle, xc->section_start, 0);
    fstWriterUint64(xc->handle, (unsigned long int)(endpos - xc->section_start));
    fstWriterFseeko(xc, xc->handle, (signed long int)8, 1);
    fstWriterUint64(xc->handle, xc->curtime);
    fstWriterUint64(xc->handle, (unsigned long int)unc_memreq);
    fflush(xc->handle);
    fstWriterFseeko(xc, xc->handle, xc->section_start - (signed long int)1, 0);
    fputc(8, xc->handle);
    fflush(xc->handle);
    fstWriterFseeko(xc, xc->handle, endpos, 0);
    xc2->section_header_truncpos = endpos;
    if(!(xc->dump_size_limit == 0ul))
    {
      if(endpos >= (signed long int)xc->dump_size_limit)
      {
        xc2->skip_writing_section_hdr = (unsigned int)1;
        xc2->size_limit_locked = (unsigned int)1;
        xc2->is_initial_time = (unsigned int)1;
      }

    }

    if(xc2->skip_writing_section_hdr == 0u)
      fstWriterEmitSectionHeader((void *)xc);

    fflush(xc->handle);
    xc->already_in_flush = (unsigned char)0;
  }

}

// fstWriterFseeko
// file ./fst/fstapi.c line 797
static signed int fstWriterFseeko(struct fstWriterContext *xc, struct _IO_FILE *stream, signed long int offset, signed int whence)
{
  signed int rc;
  rc=fseeko(stream, offset, whence);
  if(!(rc >= 0))
    xc->fseek_failed = (unsigned int)1;

  return rc;
}

// fstWriterGetDumpSizeLimitReached
// file ./fst/fstapi.c line 2498
signed int fstWriterGetDumpSizeLimitReached(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
    return (signed int)((signed int)xc->size_limit_locked != 0);

  else
    return 0;
}

// fstWriterGetFseekFailed
// file ./fst/fstapi.c line 2510
signed int fstWriterGetFseekFailed(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
    return (signed int)((signed int)xc->fseek_failed != 0);

  else
    return 0;
}

// fstWriterSVarint
// file ./fst/fstapi.c line 662
static signed int fstWriterSVarint(struct _IO_FILE *handle, signed long int v)
{
  unsigned char buf[15l];
  unsigned char byt;
  unsigned char *pnt = buf;
  signed int more = 1;
  signed int len;
  unsigned char *tmp_post$1;
  do
  {
    byt = (unsigned char)(v | (signed long int)0x80);
    v = v >> 7;
    if((0x40 & (signed int)byt) == 0 && v == 0l || v == -1l && !((0x40 & (signed int)byt) == 0))
    {
      more = 0;
      byt = byt & (unsigned char)0x7f;
    }

    tmp_post$1 = pnt;
    pnt = pnt + 1l;
    *tmp_post$1 = byt;
  }
  while(!(more == 0));
  len = (signed int)(pnt - buf);
  fstFwrite((const void *)buf, (unsigned long int)len, (unsigned long int)1, handle);
  return len;
}

// fstWriterSetAttrBegin
// file ./fst/fstapi.c line 2677
void fstWriterSetAttrBegin(void *ctx, enum fstAttrType attrtype, signed int subtype, const char *attrname, unsigned long int arg)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    fputc(FST_ST_GEN_ATTRBEGIN, xc->hier_handle);
    if((signed int)attrtype >= 4)
    {
      attrtype = (enum fstAttrType)FST_AT_MISC;
      subtype = 7;
    }

    fputc((signed int)attrtype, xc->hier_handle);
    switch((signed int)attrtype)
    {
      case FST_AT_ARRAY:
      {
        if(subtype >= 4 || !(subtype >= 0))
          subtype = 0;

        goto __CPROVER_DUMP_L7;
      }
      case FST_AT_ENUM:
      {
        if(subtype >= 14 || !(subtype >= 0))
          subtype = 0;

        goto __CPROVER_DUMP_L7;
      }
      case FST_AT_PACK:
        if(subtype >= 4 || !(subtype >= 0))
          subtype = 0;

      case FST_AT_MISC:

      default:
      {

      __CPROVER_DUMP_L7:
        ;
        fputc(subtype, xc->hier_handle);
        fprintf(xc->hier_handle, "%s%c", attrname != ((const char *)NULL) ? attrname : "", 0);
        if(!(attrname == ((const char *)NULL)))
        {
          unsigned long int return_value_strlen$1;
          return_value_strlen$1=strlen(attrname);
          xc->hier_file_len = xc->hier_file_len + (signed long int)return_value_strlen$1;
        }

        xc->hier_file_len = xc->hier_file_len + (signed long int)4;
        signed int return_value_fstWriterVarint$2;
        return_value_fstWriterVarint$2=fstWriterVarint(xc->hier_handle, arg);
        xc->hier_file_len = xc->hier_file_len + (signed long int)return_value_fstWriterVarint$2;
      }
    }
  }

}

// fstWriterSetAttrDoubleArgGeneric
// file ./fst/fstapi.c line 2254
static void fstWriterSetAttrDoubleArgGeneric(void *ctx, signed int typ, unsigned long int arg1, unsigned long int arg2)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    unsigned char buf[11l];
    unsigned char *pnt;
    pnt=fstCopyVarint64ToRight(buf, arg1);
    if(!(arg1 == 0ul))
      *pnt = (unsigned char)0;

    fstWriterSetAttrBegin((void *)xc, (enum fstAttrType)FST_AT_MISC, typ, (char *)buf, arg2);
  }

}

// fstWriterSetAttrEnd
// file ./fst/fstapi.c line 2713
void fstWriterSetAttrEnd(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    fputc(FST_ST_GEN_ATTREND, xc->hier_handle);
    xc->hier_file_len = xc->hier_file_len + 1l;
  }

}

// fstWriterSetAttrGeneric
// file ./fst/fstapi.c line 2271
static void fstWriterSetAttrGeneric(void *ctx, const char *comm, signed int typ, unsigned long int arg)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  _Bool tmp_if_expr$1;
  if(!(comm == ((const char *)NULL)) && !(xc == ((struct fstWriterContext *)NULL)))
  {
    char *s;
    s=strdup(comm);
    char *sf = s;
    for( ; !(*s == 0); s = s + 1l)
    {
      if((signed int)*s == 10)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)*s == 13 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        *s = (char)32;

    }
    fstWriterSetAttrBegin((void *)xc, (enum fstAttrType)FST_AT_MISC, typ, sf, arg);
    free((void *)sf);
  }

}

// fstWriterSetComment
// file ./fst/fstapi.c line 2359
void fstWriterSetComment(void *ctx, const char *comm)
{
  fstWriterSetAttrGeneric(ctx, comm, 0, (unsigned long int)0);
}

// fstWriterSetDate
// file ./fst/fstapi.c line 2196
void fstWriterSetDate(void *ctx, const char *dat)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    char s[119l];
    signed long int fpos;
    fpos=ftello(xc->handle);
    signed int len;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(dat);
    len = (signed int)return_value_strlen$1;
    fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 1 + 128), 0);
    memset((void *)s, 0, (unsigned long int)119);
    memcpy((void *)s, (const void *)dat, (unsigned long int)(len < 119 ? len : 119));
    fstFwrite((const void *)s, (unsigned long int)119, (unsigned long int)1, xc->handle);
    fflush(xc->handle);
    fstWriterFseeko(xc, xc->handle, fpos, 0);
  }

}

// fstWriterSetDumpSizeLimit
// file ./fst/fstapi.c line 2488
void fstWriterSetDumpSizeLimit(void *ctx, unsigned long int numbytes)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
    xc->dump_size_limit = numbytes;

}

// fstWriterSetEnvVar
// file ./fst/fstapi.c line 2371
void fstWriterSetEnvVar(void *ctx, const char *envvar)
{
  fstWriterSetAttrGeneric(ctx, envvar, 1, (unsigned long int)0);
}

// fstWriterSetFileType
// file ./fst/fstapi.c line 2234
void fstWriterSetFileType(void *ctx, enum fstFileType filetype)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    if(!((signed int)filetype >= 3))
    {
      signed long int fpos;
      fpos=ftello(xc->handle);
      xc->filetype = (unsigned char)filetype;
      fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 1 + 128 + 119), 0);
      fputc((signed int)xc->filetype, xc->handle);
      fflush(xc->handle);
      fstWriterFseeko(xc, xc->handle, fpos, 0);
    }

  }

}

// fstWriterSetPackType
// file ./fst/fstapi.c line 2449
void fstWriterSetPackType(void *ctx, enum fstWriterPackType typ)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    xc->fastpack = (unsigned int)((signed int)typ != FST_WR_PT_ZLIB);
    xc->fourpack = (unsigned int)((signed int)typ == FST_WR_PT_LZ4);
  }

}

// fstWriterSetParallelMode
// file ./fst/fstapi.c line 2470
void fstWriterSetParallelMode(void *ctx, signed int enable)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    xc->parallel_was_enabled = (unsigned int)xc->parallel_was_enabled | (unsigned int)xc->parallel_enabled;
    xc->parallel_enabled = (unsigned int)(enable != 0);
  }

}

// fstWriterSetRepackOnClose
// file ./fst/fstapi.c line 2460
void fstWriterSetRepackOnClose(void *ctx, signed int enable)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
    xc->repack_on_close = (unsigned int)(enable != 0);

}

// fstWriterSetScope
// file ./fst/fstapi.c line 2636
void fstWriterSetScope(void *ctx, enum fstScopeType scopetype, const char *scopename, const char *scopecomp)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    fputc(FST_ST_VCD_SCOPE, xc->hier_handle);
    if((signed int)scopetype >= 22)
      scopetype = (enum fstScopeType)FST_ST_VCD_MODULE;

    fputc((signed int)scopetype, xc->hier_handle);
    fprintf(xc->hier_handle, "%s%c%s%c", scopename != ((const char *)NULL) ? scopename : "", 0, scopecomp != ((const char *)NULL) ? scopecomp : "", 0);
    if(!(scopename == ((const char *)NULL)))
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(scopename);
      xc->hier_file_len = xc->hier_file_len + (signed long int)return_value_strlen$1;
    }

    if(!(scopecomp == ((const char *)NULL)))
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(scopecomp);
      xc->hier_file_len = xc->hier_file_len + (signed long int)return_value_strlen$2;
    }

    xc->hier_file_len = xc->hier_file_len + (signed long int)4;
    xc->numscopes = xc->numscopes + 1u;
  }

}

// fstWriterSetSourceInstantiationStem
// file ./fst/fstapi.c line 2353
void fstWriterSetSourceInstantiationStem(void *ctx, const char *path, unsigned int line, unsigned int use_realpath)
{
  fstWriterSetSourceStem_2(ctx, path, line, use_realpath, 5);
}

// fstWriterSetSourceStem
// file ./fst/fstapi.c line 2347
void fstWriterSetSourceStem(void *ctx, const char *path, unsigned int line, unsigned int use_realpath)
{
  fstWriterSetSourceStem_2(ctx, path, line, use_realpath, 4);
}

// fstWriterSetSourceStem_2
// file ./fst/fstapi.c line 2291
static void fstWriterSetSourceStem_2(void *ctx, const char *path, unsigned int line, unsigned int use_realpath, signed int typ)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(path == ((const char *)NULL)) && !(xc == ((struct fstWriterContext *)NULL)))
  {
    if(!(*path == 0))
    {
      unsigned long int sidx = (unsigned long int)0;
      signed int slen;
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(path);
      slen = (signed int)return_value_strlen$1;
      char *path2;
      void *return_value___builtin_alloca$2;
      return_value___builtin_alloca$2=__builtin_alloca((unsigned long int)(slen + 1));
      path2 = (char *)return_value___builtin_alloca$2;
      void **pv;
      strcpy(path2, path);
      pv=JudyHSIns(&xc->path_array, (void *)path2, (unsigned long int)slen, (struct J_UDY_ERROR_STRUCT *)(void *)0);
      if(!(*pv == NULL))
        sidx = (unsigned long int)(signed long int)*pv;

      else
      {
        char *rp = (char *)(void *)0;
        xc->path_array_count = xc->path_array_count + 1u;
        sidx = (unsigned long int)xc->path_array_count;
        *pv = (void *)(signed long int)xc->path_array_count;
        if(!(use_realpath == 0u))
          rp=fstRealpath(path2, (char *)(void *)0);

        fstWriterSetAttrGeneric((void *)xc, rp != ((char *)NULL) ? rp : path2, 3, sidx);
        if(!(rp == ((char *)NULL)))
          free((void *)rp);

      }
      fstWriterSetAttrDoubleArgGeneric((void *)xc, typ, sidx, (unsigned long int)line);
    }

  }

}

// fstWriterSetTimescale
// file ./fst/fstapi.c line 2377
void fstWriterSetTimescale(void *ctx, signed int ts)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    signed long int fpos;
    fpos=ftello(xc->handle);
    fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8), 0);
    fputc(ts & 255, xc->handle);
    fflush(xc->handle);
    fstWriterFseeko(xc, xc->handle, fpos, 0);
  }

}

// fstWriterSetTimescaleFromString
// file ./fst/fstapi.c line 2391
void fstWriterSetTimescaleFromString(void *ctx, const char *s)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(s == ((const char *)NULL)) && !(xc == ((struct fstWriterContext *)NULL)))
  {
    signed int mat = 0;
    signed int seconds_exp = -9;
    signed int tv;
    tv=atoi(s);
    const char *pnt = s;
    for( ; !(*pnt == 0); pnt = pnt + 1l)
    {
      switch((signed int)*pnt)
      {
        case 109:
        {
          seconds_exp = -3;
          mat = 1;
          break;
        }
        case 117:
        {
          seconds_exp = -6;
          mat = 1;
          break;
        }
        case 110:
        {
          seconds_exp = -9;
          mat = 1;
          break;
        }
        case 112:
        {
          seconds_exp = -12;
          mat = 1;
          break;
        }
        case 102:
        {
          seconds_exp = -15;
          mat = 1;
          break;
        }
        case 97:
        {
          seconds_exp = -18;
          mat = 1;
          break;
        }
        case 122:
        {
          seconds_exp = -21;
          mat = 1;
          break;
        }
        case 115:
        {
          seconds_exp = 0;
          mat = 1;
        }
      }
      if(!(mat == 0))
        break;

    }
    if(tv == 10)
      seconds_exp = seconds_exp + 1;

    else
      if(tv == 100)
        seconds_exp = seconds_exp + 2;

    fstWriterSetTimescale(ctx, seconds_exp);
  }

}

// fstWriterSetTimezero
// file ./fst/fstapi.c line 2435
void fstWriterSetTimezero(void *ctx, signed long int tim)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    signed long int fpos;
    fpos=ftello(xc->handle);
    fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 1 + 128 + 119 + 1), 0);
    xc->timezero = tim;
    fstWriterUint64(xc->handle, (unsigned long int)xc->timezero);
    fflush(xc->handle);
    fstWriterFseeko(xc, xc->handle, fpos, 0);
  }

}

// fstWriterSetUpscope
// file ./fst/fstapi.c line 2665
void fstWriterSetUpscope(void *ctx)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(xc == ((struct fstWriterContext *)NULL)))
  {
    fputc(FST_ST_VCD_UPSCOPE, xc->hier_handle);
    xc->hier_file_len = xc->hier_file_len + 1l;
  }

}

// fstWriterSetValueList
// file ./fst/fstapi.c line 2365
void fstWriterSetValueList(void *ctx, const char *vl)
{
  fstWriterSetAttrGeneric(ctx, vl, 6, (unsigned long int)0);
}

// fstWriterSetVersion
// file ./fst/fstapi.c line 2215
void fstWriterSetVersion(void *ctx, const char *vers)
{
  struct fstWriterContext *xc = (struct fstWriterContext *)ctx;
  if(!(vers == ((const char *)NULL)) && !(xc == ((struct fstWriterContext *)NULL)))
  {
    char s[128l];
    signed long int fpos;
    fpos=ftello(xc->handle);
    signed int len;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(vers);
    len = (signed int)return_value_strlen$1;
    fstWriterFseeko(xc, xc->handle, (signed long int)(0 + 1 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 8 + 1), 0);
    memset((void *)s, 0, (unsigned long int)128);
    memcpy((void *)s, (const void *)vers, (unsigned long int)(len < 128 ? len : 128));
    fstFwrite((const void *)s, (unsigned long int)128, (unsigned long int)1, xc->handle);
    fflush(xc->handle);
    fstWriterFseeko(xc, xc->handle, fpos, 0);
  }

}

// fstWriterUint32WithVarint32
// file ./fst/fstapi.c line 814
static unsigned int fstWriterUint32WithVarint32(struct fstWriterContext *xc, unsigned int *u, unsigned int v, const void *dbuf, unsigned int siz)
{
  unsigned char *buf = xc->vchg_mem + (signed long int)xc->vchg_siz;
  unsigned char *pnt = buf;
  unsigned int nxt;
  unsigned int len;
  *((unsigned int *)pnt) = *((unsigned int *)u);
  pnt = pnt + (signed long int)4;
  unsigned char *tmp_post$1;
  do
  {
    nxt = v >> 7;
    if(nxt == 0u)
      break;

    tmp_post$1 = pnt;
    pnt = pnt + 1l;
    *tmp_post$1 = (unsigned char)((signed int)(unsigned char)v | 0x80);
    v = nxt;
  }
  while((_Bool)1);
  unsigned char *tmp_post$2 = pnt;
  pnt = pnt + 1l;
  *tmp_post$2 = (unsigned char)v;
  memcpy((void *)pnt, dbuf, (unsigned long int)siz);
  len = (unsigned int)((pnt - buf) + (signed long int)siz);
  return len;
}

// fstWriterUint32WithVarint32AndLength
// file ./fst/fstapi.c line 841
static unsigned int fstWriterUint32WithVarint32AndLength(struct fstWriterContext *xc, unsigned int *u, unsigned int v, const void *dbuf, unsigned int siz)
{
  unsigned char *buf = xc->vchg_mem + (signed long int)xc->vchg_siz;
  unsigned char *pnt = buf;
  unsigned int nxt;
  unsigned int len;
  *((unsigned int *)pnt) = *((unsigned int *)u);
  pnt = pnt + (signed long int)4;
  unsigned char *tmp_post$1;
  do
  {
    nxt = v >> 7;
    if(nxt == 0u)
      break;

    tmp_post$1 = pnt;
    pnt = pnt + 1l;
    *tmp_post$1 = (unsigned char)((signed int)(unsigned char)v | 0x80);
    v = nxt;
  }
  while((_Bool)1);
  unsigned char *tmp_post$2 = pnt;
  pnt = pnt + 1l;
  *tmp_post$2 = (unsigned char)v;
  v = siz;
  unsigned char *tmp_post$3;
  do
  {
    nxt = v >> 7;
    if(nxt == 0u)
      break;

    tmp_post$3 = pnt;
    pnt = pnt + 1l;
    *tmp_post$3 = (unsigned char)((signed int)(unsigned char)v | 0x80);
    v = nxt;
  }
  while((_Bool)1);
  unsigned char *tmp_post$4 = pnt;
  pnt = pnt + 1l;
  *tmp_post$4 = (unsigned char)v;
  memcpy((void *)pnt, dbuf, (unsigned long int)siz);
  len = (unsigned int)((pnt - buf) + (signed long int)siz);
  return len;
}

// fstWriterUint64
// file ./fst/fstapi.c line 363
static signed int fstWriterUint64(struct _IO_FILE *handle, unsigned long int v)
{
  unsigned char buf[8l];
  signed int i = 7;
  for( ; i >= 0; i = i - 1)
  {
    buf[(signed long int)i] = (unsigned char)(v & (unsigned long int)0xff);
    v = v >> 8;
  }
  fstFwrite((const void *)buf, (unsigned long int)8, (unsigned long int)1, handle);
  return 8;
}

// fstWriterVarint
// file ./fst/fstapi.c line 614
static signed int fstWriterVarint(struct _IO_FILE *handle, unsigned long int v)
{
  unsigned long int nxt;
  unsigned char buf[10l];
  unsigned char *pnt = buf;
  signed int len;
  unsigned char *tmp_post$1;
  do
  {
    nxt = v >> 7;
    if(nxt == 0ul)
      break;

    tmp_post$1 = pnt;
    pnt = pnt + 1l;
    *tmp_post$1 = (unsigned char)((signed int)(unsigned char)v | 0x80);
    v = nxt;
  }
  while((_Bool)1);
  unsigned char *tmp_post$2 = pnt;
  pnt = pnt + 1l;
  *tmp_post$2 = (unsigned char)v;
  len = (signed int)(pnt - buf);
  fstFwrite((const void *)buf, (unsigned long int)len, (unsigned long int)1, handle);
  return len;
}

// fstWritex
// file ./fst/fstapi.c line 3130
static void fstWritex(struct fstReaderContext *xc, void *v, signed int len)
{
  unsigned char *s = (unsigned char *)v;
  if(!(len == 0))
  {
    if(!(len >= 64))
    {
      if(xc->writex_pos + len >= 64)
        fstWritex(xc, (void *)0, 0);

      memcpy((void *)(xc->writex_buf + (signed long int)xc->writex_pos), (const void *)s, (unsigned long int)len);
      xc->writex_pos = xc->writex_pos + len;
    }

    else
    {
      fstWritex(xc, (void *)0, 0);
      signed long int return_value_write$1;
      return_value_write$1=write(xc->writex_fd, (const void *)s, (unsigned long int)len);
    }
  }

  else
    if(!(xc->writex_pos == 0))
    {
      signed long int return_value_write$2;
      return_value_write$2=write(xc->writex_fd, (const void *)xc->writex_buf, (unsigned long int)xc->writex_pos);
      xc->writex_pos = 0;
    }

}

// main
// file fst2vcd.c line 60
signed int main(signed int argc, char **argv)
{
  char opt_errors_encountered = (char)0;
  char *fstname = (char *)(void *)0;
  char *outname = (char *)(void *)0;
  char *fvbuf = (char *)(void *)0;
  signed int c;
  struct fstReaderContext *xc;
  struct _IO_FILE *fv;
  signed int use_extensions = 0;
  char *wlve;
  wlve=getenv("LANG");
  if(!(wlve == ((char *)NULL)))
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(wlve, "C");
    if(!(return_value_strcmp$1 == 0))
    {
      setenv("LC_NUMERIC", "C", 1);
      setenv("LC_COLLATE", "C", 1);
      setenv("LC_CTYPE", "C", 1);
    }

  }

  wlve=getenv("LC_ALL");
  if(!(wlve == ((char *)NULL)))
  {
    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(wlve, "C");
    if(!(return_value_strcmp$2 == 0))
      unsetenv("LC_ALL");

  }

  unsigned long int return_value_strlen$3;
  void *return_value_malloc$4;
  unsigned long int return_value_strlen$5;
  void *return_value_malloc$6;
  while((_Bool)1)
  {
    signed int option_index = 0;
    static struct option long_options[5l] = { { .name="extensions", .has_arg=0, .flag=((signed int *)NULL), .val=101 },
    { .name="fstname", .has_arg=1, .flag=((signed int *)NULL), .val=102 },
    { .name="output", .has_arg=1, .flag=((signed int *)NULL), .val=111 },
    { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
    c=getopt_long(argc, argv, "ef:o:h", long_options, &option_index);
    if(c == -1)
      break;

    switch(c)
    {
      case 101:
      {
        use_extensions = 1;
        break;
      }
      case 102:
      {
        if(!(fstname == ((char *)NULL)))
          free((void *)fstname);

        return_value_strlen$3=strlen(optarg);
        return_value_malloc$4=malloc(return_value_strlen$3 + (unsigned long int)1);
        fstname = (char *)return_value_malloc$4;
        strcpy(fstname, optarg);
        break;
      }
      case 111:
      {
        if(!(outname == ((char *)NULL)))
          free((void *)outname);

        return_value_strlen$5=strlen(optarg);
        return_value_malloc$6=malloc(return_value_strlen$5 + (unsigned long int)1);
        outname = (char *)return_value_malloc$6;
        strcpy(outname, optarg);
        break;
      }
      case 104:
      {
        print_help(argv[(signed long int)0]);
        break;
      }
      case 63:
      {
        opt_errors_encountered = (char)1;
        break;
      }
      default:
        ;
    }
  }
  if(!(opt_errors_encountered == 0))
    print_help(argv[(signed long int)0]);

  signed int tmp_post$9;
  if(!(optind >= argc))
    while(!(optind >= argc))
      if(fstname == ((char *)NULL))
      {
        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(argv[(signed long int)optind]);
        void *return_value_malloc$8;
        return_value_malloc$8=malloc(return_value_strlen$7 + (unsigned long int)1);
        fstname = (char *)return_value_malloc$8;
        tmp_post$9 = optind;
        optind = optind + 1;
        strcpy(fstname, argv[(signed long int)tmp_post$9]);
      }

      else
        break;

  if(fstname == ((char *)NULL))
    print_help(argv[(signed long int)0]);

  void *return_value_fstReaderOpen$10;
  return_value_fstReaderOpen$10=fstReaderOpen(fstname);
  xc = (struct fstReaderContext *)return_value_fstReaderOpen$10;
  if(xc == ((struct fstReaderContext *)NULL))
  {
    fprintf(stderr, "Could not open '%s', exiting.\n", fstname);
    exit(255);
  }

  if(!(outname == ((char *)NULL)))
  {
    fv=fopen(outname, "wb");
    if(fv == ((struct _IO_FILE *)NULL))
    {
      fprintf(stderr, "Could not open '%s', exiting.\n", outname);
      perror("Why");
      exit(255);
    }

    void *return_value_malloc$11;
    return_value_malloc$11=malloc((unsigned long int)(2 * 1024 * 1024));
    fvbuf = (char *)return_value_malloc$11;
    setvbuf(fv, fvbuf, 0, (unsigned long int)(2 * 1024 * 1024));
  }

  else
    fv = stdout;
  fstReaderSetVcdExtensions((void *)xc, use_extensions);
  signed int return_value_fstReaderProcessHier$12;
  return_value_fstReaderProcessHier$12=fstReaderProcessHier((void *)xc, fv);
  if(return_value_fstReaderProcessHier$12 == 0)
  {
    fprintf(stderr, "could not process hierarchy for '%s', exiting.\n", fstname);
    exit(255);
  }

  fstReaderSetFacProcessMaskAll((void *)xc);
  fstReaderIterBlocks((void *)xc, (void (*)(void *, unsigned long int, unsigned int, const unsigned char *))(void *)0, (void *)0, fv);
  fstReaderClose((void *)xc);
  if(!(outname == ((char *)NULL)))
  {
    free((void *)outname);
    fclose(fv);
  }

  free((void *)fvbuf);
  free((void *)fstname);
  exit(0);
}

// print_help
// file fst2vcd.c line 34
void print_help(char *nam)
{
  printf("Usage: %s [OPTION]... [FSTFILE]\n\n  -f, --fstname=FILE         specify FST input filename\n  -o, --output=FILE          specify output filename\n  -e, --extensions           emit FST extensions to VCD\n  -h, --help                 display this help then exit\n\nVCD is emitted to stdout if output filename is unspecified.\n\nReport bugs to <bybell@rocketmail.com>.\n", nam);
  exit(0);
}

// tmpfile_close
// file ./fst/fstapi.c line 235
static void tmpfile_close(struct _IO_FILE **f, char **nam)
{
  if(!(f == ((struct _IO_FILE **)NULL)))
  {
    if(!(*f == ((struct _IO_FILE *)NULL)))
    {
      fclose(*f);
      *f = (struct _IO_FILE *)(void *)0;
    }

  }

  if(!(nam == ((char **)NULL)))
  {
    if(!(*nam == ((char *)NULL)))
    {
      unlink(*nam);
      free((void *)*nam);
      *nam = (char *)(void *)0;
    }

  }

}

// tmpfile_open
// file ./fst/fstapi.c line 225
static struct _IO_FILE * tmpfile_open(char **nam)
{
  struct _IO_FILE *f;
  f=tmpfile();
  if(!(nam == ((char **)NULL)))
    *nam = (char *)(void *)0;

  return f;
}

// unlink_fopen
// file ./fst/fstapi.c line 170
static struct _IO_FILE * unlink_fopen(const char *nam, const char *mode)
{
  unlink(nam);
  struct _IO_FILE *return_value_fopen$1;
  return_value_fopen$1=fopen(nam, mode);
  return return_value_fopen$1;
}

