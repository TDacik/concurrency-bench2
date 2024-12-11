// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-_Achain
// file mltaln.h line 248
struct _Achain;

// tag-_Addtree
// file mltaln.h line 286
struct _Addtree;

// tag-_Bchain
// file mltaln.h line 241
struct _Bchain;

// tag-_Gappattern
// file mltaln.h line 262
struct _Gappattern;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_LocalHom
// file mltaln.h line 187
struct _LocalHom;

// tag-_RNApair
// file mltaln.h line 268
struct _RNApair;

// tag-_Segment
// file mltaln.h line 221
struct _Segment;

// tag-_Treedep
// file mltaln.h line 278
struct _Treedep;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_jobtable
// file dndpre.c line 11
struct _jobtable;

// tag-_thread_arg
// file dndpre.c line 17
struct _thread_arg;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// AllocateCharCub
// file mtxutl.c line 313
char *** AllocateCharCub(signed int ll1, signed int ll2, signed int ll3);
// AllocateCharHcu
// file mtxutl.c line 366
char **** AllocateCharHcu(signed int ll1, signed int ll2, signed int ll3, signed int ll4);
// AllocateCharMtx
// file mtxutl.h line 7
char ** AllocateCharMtx(signed int l1, signed int l2);
// AllocateCharVec
// file mtxutl.h line 4
char * AllocateCharVec(signed int l1);
// AllocateDoubleCub
// file mtxutl.c line 488
double *** AllocateDoubleCub(signed int ll1, signed int ll2, signed int ll3);
// AllocateDoubleMtx
// file mtxutl.h line 37
double ** AllocateDoubleMtx(signed int ll1, signed int ll2);
// AllocateDoubleVec
// file mtxutl.h line 34
double * AllocateDoubleVec(signed int ll1);
// AllocateFloatCub
// file mtxutl.c line 458
double *** AllocateFloatCub(signed int ll1, signed int ll2, signed int ll3);
// AllocateFloatHalfMtx
// file mtxutl.c line 150
double ** AllocateFloatHalfMtx(signed int ll1);
// AllocateFloatMtx
// file mtxutl.c line 174
double ** AllocateFloatMtx(signed int ll1, signed int ll2);
// AllocateFloatTri
// file mtxutl.c line 240
double ** AllocateFloatTri(signed int ll1);
// AllocateFloatVec
// file mtxutl.h line 11
double * AllocateFloatVec(signed int l1);
// AllocateIntCub
// file mtxutl.c line 402
signed int *** AllocateIntCub(signed int ll1, signed int ll2, signed int ll3);
// AllocateIntMtx
// file mtxutl.h line 25
signed int ** AllocateIntMtx(signed int ll1, signed int ll2);
// AllocateIntVec
// file mtxutl.h line 22
signed int * AllocateIntVec(signed int ll1);
// AllocateShortMtx
// file mtxutl.c line 537
signed short int ** AllocateShortMtx(signed int ll1, signed int ll2);
// AllocateShortVec
// file mtxutl.c line 519
signed short int * AllocateShortVec(signed int ll1);
// AllocateTmpSeqs
// file mltaln9.c line 5670
extern void AllocateTmpSeqs(char ***mseq2pt, char **mseq1pt, signed int locnlenmax);
// BLOSUMmtx
// file blosum.c line 6
extern void BLOSUMmtx(signed int n, double **matrix, double *freq, char *amino, char *amino_grp);
// DSPscore
// file mltaln9.c line 6451
extern double DSPscore(signed int s, char **seq);
// ErrorExit
// file io.c line 935
extern void ErrorExit(char *message);
// FRead
// file io.c line 1077
extern void FRead(struct _IO_FILE *fp, char (*name)[256l], signed int *nlen, char **seq);
// FreeCharCub
// file mtxutl.c line 335
void FreeCharCub(char ***cub);
// FreeCharHcu
// file mtxutl.c line 379
void FreeCharHcu(char ****hcu);
// FreeCharMtx
// file mtxutl.c line 116
void FreeCharMtx(char **mtx);
// FreeCommonIP
// file mltaln9.c line 9580
extern void FreeCommonIP();
// FreeDoubleCub
// file mtxutl.c line 507
void FreeDoubleCub(double ***cub);
// FreeDoubleMtx
// file mtxutl.h line 38
void FreeDoubleMtx(double **mtx);
// FreeDoubleVec
// file mtxutl.h line 35
void FreeDoubleVec(double *vec);
// FreeFloatCub
// file mtxutl.c line 477
void FreeFloatCub(double ***cub);
// FreeFloatHalfMtx
// file mtxutl.c line 201
void FreeFloatHalfMtx(double **mtx, signed int n);
// FreeFloatMtx
// file mtxutl.c line 211
void FreeFloatMtx(double **mtx);
// FreeFloatTri
// file mtxutl.c line 260
void FreeFloatTri(double **tri);
// FreeFloatVec
// file mtxutl.c line 145
void FreeFloatVec(double *vec);
// FreeIntCub
// file mtxutl.c line 420
void FreeIntCub(signed int ***cub);
// FreeIntMtx
// file mtxutl.h line 26
void FreeIntMtx(signed int **mtx);
// FreeIntVec
// file mtxutl.c line 235
void FreeIntVec(signed int *vec);
// FreeLocalHomTable
// file io.c line 4628
extern void FreeLocalHomTable(struct _LocalHom **localhomtable, signed int n);
// FreeLocalHomTable_one
// file io.c line 4588
extern void FreeLocalHomTable_one(struct _LocalHom **localhomtable, signed int n, signed int m);
// FreeLocalHomTable_part
// file io.c line 4483
extern void FreeLocalHomTable_part(struct _LocalHom **localhomtable, signed int n, signed int m);
// FreeLocalHomTable_two
// file io.c line 4522
extern void FreeLocalHomTable_two(struct _LocalHom **localhomtable, signed int n, signed int m);
// FreeShortMtx
// file mtxutl.c line 557
void FreeShortMtx(signed short int **mtx);
// FreeShortVec
// file mtxutl.c line 532
void FreeShortVec(signed short int *vec);
// FreeTmpSeqs
// file mltaln9.c line 5676
extern void FreeTmpSeqs(char **mseq2, char *mseq1);
// JTTmtx
// file JTT.c line 9
extern void JTTmtx(double **rsr, double *freq, char *locamino, char *locgrp, signed int isTM);
// MtxmltDouble
// file mtxutl.h line 2
void MtxmltDouble(double **mtx1, double **mtx2, signed int n);
// MtxuntDouble
// file mtxutl.h line 1
void MtxuntDouble(double **mtx, signed int n);
// PreRead
// file io.c line 1032
extern void PreRead(struct _IO_FILE *fp, signed int *locnjob, signed int *locnlenmax);
// Read
// file io.c line 1070
extern void Read(char (*name)[256l], signed int *nlen, char **seq);
// ReadBlastm7
// file io.c line 3194
extern signed int ReadBlastm7(struct _IO_FILE *fp, double *dis, signed int qmem, char **name, struct _LocalHom *localhomlist);
// ReadBlastm7_avscore
// file io.c line 2950
extern signed int ReadBlastm7_avscore(struct _IO_FILE *fp, double *dis, signed int nin);
// ReadBlastm7_scoreonly
// file io.c line 3077
extern signed int ReadBlastm7_scoreonly(struct _IO_FILE *fp, double *dis, signed int nin);
// ReadFasta
// file io.c line 3873
extern signed int ReadFasta(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l]);
// ReadFasta3
// file io.c line 3843
extern signed int ReadFasta3(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l]);
// ReadFasta34
// file io.c line 3778
extern signed int ReadFasta34(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l], struct _LocalHom *localhomlist);
// ReadFasta34m10
// file io.c line 3480
extern signed int ReadFasta34m10(struct _IO_FILE *fp, double *dis, signed int qmem, char **name, struct _LocalHom *localhomlist);
// ReadFasta34m10_nuc
// file io.c line 3341
extern signed int ReadFasta34m10_nuc(struct _IO_FILE *fp, double *dis, signed int qmem, char **name, struct _LocalHom *localhomlist);
// ReadFasta34m10_scoreonly
// file io.c line 3721
extern signed int ReadFasta34m10_scoreonly(struct _IO_FILE *fp, double *dis, signed int nin);
// ReadFasta34m10_scoreonly_nuc
// file io.c line 3660
extern signed int ReadFasta34m10_scoreonly_nuc(struct _IO_FILE *fp, double *dis, signed int nin);
// ReadFasta34m10_scoreonly_nucbk
// file io.c line 3617
signed int ReadFasta34m10_scoreonly_nucbk(struct _IO_FILE *fp, double *dis, signed int nin);
// ReadFasta34noalign
// file io.c line 3309
extern signed int ReadFasta34noalign(struct _IO_FILE *fp, double *dis, signed int qmem, char **name, struct _LocalHom *localhomlist);
// ReadFasta_sub
// file io.c line 2882
extern signed int ReadFasta_sub(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l]);
// ReadOpt
// file io.c line 3911
extern signed int ReadOpt(struct _IO_FILE *fp, signed int *opt, signed int nseq, char (*name)[256l]);
// ReadOpt2
// file io.c line 3933
extern signed int ReadOpt2(struct _IO_FILE *fp, signed int *opt, signed int nseq, char (*name)[256l]);
// ReadSsearch
// file io.c line 2915
extern signed int ReadSsearch(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l]);
// ReallocateCharMtx
// file mtxutl.c line 80
void ReallocateCharMtx(char **mtx, signed int l1, signed int l2);
// SSPscore
// file mltaln9.c line 6380
extern double SSPscore(signed int s, char **seq);
// SSPscore___
// file mltaln9.c line 6309
double SSPscore___(signed int s, char **seq, signed int ex);
// WriteFloatHat2
// file io.c line 2758
extern void WriteFloatHat2(struct _IO_FILE *hat2p, signed int locnjob, char (*name)[256l], double **mtx);
// WriteFloatHat2_pointer
// file io.c line 2737
void WriteFloatHat2_pointer(struct _IO_FILE *hat2p, signed int locnjob, char **name, double **mtx);
// WriteFloatHat2_pointer_halfmtx
// file io.c line 2715
extern void WriteFloatHat2_pointer_halfmtx(struct _IO_FILE *hat2p, signed int locnjob, char **name, double **mtx);
// WriteForFasta
// file io.c line 4109
extern void WriteForFasta(struct _IO_FILE *fp, signed int locnjob, char **name, signed int *nlen, char **aseq);
// WriteGapFill
// file io.c line 2367
extern void WriteGapFill(struct _IO_FILE *fp, signed int locnjob, char (*name)[256l], signed int *nlen, char **aseq);
// WriteHat2
// file io.c line 2844
extern void WriteHat2(struct _IO_FILE *hat2p, signed int locnjob, char (*name)[256l], double **mtx);
// WriteHat2_int
// file io.c line 2779
extern void WriteHat2_int(struct _IO_FILE *hat2p, signed int locnjob, char (*name)[256l], signed int **mtx);
// WriteHat2_part_pointer
// file io.c line 2801
extern void WriteHat2_part_pointer(struct _IO_FILE *hat2p, signed int locnjob, signed int nadd, char **name, double **mtx);
// WriteHat2_pointer
// file functions.h line 218
extern void WriteHat2_pointer(struct _IO_FILE *hat2p, signed int locnjob, char **name, double **mtx);
// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// _IO_putc
// file /usr/include/libio.h line 435
extern signed int _IO_putc(signed int, struct _IO_FILE *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// addlocalhom2_e
// file mltaln9.c line 7191
static void addlocalhom2_e(struct _LocalHom *pt, struct _LocalHom *lh, signed int sti, signed int stj, signed int eni, signed int enj, double opt, signed int overlp, signed int interm);
// addlocalhom_r
// file io.c line 212
static signed int addlocalhom_r(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa, signed int skip);
// addonetip
// file mltaln9.c line 8813
extern signed int addonetip(signed int njobc, signed int ***topolc, double **lenc, double **iscorec, signed int ***topol, double **len, struct _Treedep *dep, signed int treeout, struct _Addtree *addtree, signed int iadd, char **name, signed int *alnleninnode, signed int *nogaplen, signed int noalign);
// allSpace
// file io.c line 1063
extern signed int allSpace(char *str);
// ambiguousscore
// file constants.c line 25
static void ambiguousscore(signed int *amino_n, signed int **n_dis);
// arguments
// file dndpre.c line 108
void arguments(signed int argc, char **argv);
// athread
// file dndpre.c line 29
void * athread(void *arg);
// atof
// file /usr/include/stdlib.h line 144
extern double atof(const char *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bscore_calc
// file mltaln9.c line 5618
extern double bscore_calc(char **seq, signed int s, double **eff);
// calcfreq
// file constants.c line 106
static void calcfreq(signed int nseq, char **seq, double *datafreq);
// calcfreq_extended
// file constants.c line 140
static void calcfreq_extended(signed int nseq, char **seq, double *datafreq);
// calcfreq_nuc
// file constants.c line 66
static void calcfreq_nuc(signed int nseq, char **seq, double *datafreq);
// calcimportance
// file mltaln9.c line 6687
extern void calcimportance(signed int nseq, double *eff, char **seq, struct _LocalHom **localhom);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// catData
// file io.c line 1909
extern void catData(struct _IO_FILE *fp);
// charfilter
// file io.c line 1240
static signed int charfilter(unsigned char *str);
// closeFiles
// file io.c line 4102
extern void closeFiles(void);
// clustalout_pointer
// file io.c line 4740
extern void clustalout_pointer(struct _IO_FILE *fp, signed int nseq, signed int maxlen, char **seq, char **name, char *mark, char *comment, signed int *order, signed int namelen);
// cluster_average_double
// file mltaln9.c line 1509
static double cluster_average_double(double d1, double d2);
// cluster_minimum_double
// file mltaln9.c line 1513
static double cluster_minimum_double(double d1, double d2);
// cluster_mix_double
// file mltaln9.c line 1505
static double cluster_mix_double(double d1, double d2);
// commongappick
// file mltaln9.c line 5773
extern void commongappick(signed int nseq, char **seq);
// commongappick_record
// file mltaln9.c line 5744
extern void commongappick_record(signed int nseq, char **seq, signed int *map);
// commongappickpair
// file mltaln9.c line 8211
static void commongappickpair(char *r1, char *r2, char *i1, char *i2);
// commongappickpairfast
// file mltaln9.c line 8156
static void commongappickpairfast(char *r1, char *r2, char *i1, char *i2, signed int *skip1, signed int *skip2);
// constants
// file mltaln.h line 154
extern void constants(signed int nseq, char **seq);
// copydatafromgui
// file io.c line 1587
extern signed int copydatafromgui(char **namegui, char **seqgui, char **name, signed int *nlen, char **seq);
// countATGC
// file io.c line 1944
extern signed int countATGC(char *s, signed int *total);
// countATGCbk
// file io.c line 1973
double countATGCbk(char *s);
// countKUorWA
// file io.c line 1186
static signed int countKUorWA(struct _IO_FILE *fp);
// counteff
// file mltaln9.c line 5284
extern void counteff(signed int nseq, signed int ***topol, double **len, double **node);
// counteff_simple
// file mltaln9.c line 5197
extern void counteff_simple(signed int nseq, signed int ***topol, double **len, double *node);
// counteff_simple_double
// file mltaln9.c line 5021
extern void counteff_simple_double(signed int nseq, signed int ***topol, double **len, double *node);
// counteff_simple_double_nostatic
// file mltaln9.c line 5097
extern void counteff_simple_double_nostatic(signed int nseq, signed int ***topol, double **len, double *node);
// countmem
// file mltaln9.c line 8798
static signed int countmem(signed int *s);
// countnode
// file mltaln9.c line 4936
extern void countnode(signed int nseq, signed int ***topol, double **node);
// countnode_int
// file mltaln9.c line 4975
extern void countnode_int(signed int nseq, signed int ***topol, signed int **node);
// countnogaplen
// file io.c line 1995
signed int countnogaplen(char *seq);
// countnormalletters
// file io.c line 2003
signed int countnormalletters(char *seq, char *ref);
// countspace
// file io.c line 5015
static signed int countspace(char *s);
// creverse
// file io.c line 8
char creverse(char f);
// cutAlignment
// file io.c line 1735
extern void cutAlignment(struct _IO_FILE *fp, signed int **regtable, char **revtable, signed int *outtable, char **name, char **outseq);
// cutData
// file io.c line 1824
extern void cutData(struct _IO_FILE *fp, signed int **regtable, char **revtable, signed int *outtable);
// cutal
// file io.c line 917
extern char * cutal(char *al, signed int al_display_start, signed int start, signed int end);
// display
// file mltaln9.c line 113
extern void display(char **seq, signed int nseq);
// dist2offset
// file mltaln9.c line 9514
extern double dist2offset(double dist);
// dontcalcimportance
// file mltaln9.c line 6614
extern void dontcalcimportance(signed int nseq, double *eff, char **seq, struct _LocalHom **localhom);
// dontcalcimportance_firstone
// file mltaln9.c line 6647
extern void dontcalcimportance_firstone(signed int nseq, double *eff, char **seq, struct _LocalHom **localhom);
// doublencpy
// file mltaln9.c line 6103
extern void doublencpy(double *vec1, double *vec2, signed int len);
// escapehtml
// file io.c line 2146
static void escapehtml(char *res, char *ori, signed int maxlen);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// exitall
// file mltaln9.c line 107
extern void exitall(char *arr);
// extendedmtx
// file blosum.c line 317
extern void extendedmtx(double **matrix, double *freq, unsigned char *amino, char *amino_grp);
// extendlocalhom2
// file mltaln9.c line 7223
extern void extendlocalhom2(signed int nseq, struct _LocalHom **localhom, double **dist);
// extractfirstword
// file io.c line 4687
static char * extractfirstword(char *str);
// fastsupg
// file mltaln9.c line 4565
extern void fastsupg(signed int nseq, double **oeff, signed int ***topol, double **len);
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
// fixed_musclesupg_double_realloc_nobk_halfmtx
// file mltaln9.c line 3390
extern void fixed_musclesupg_double_realloc_nobk_halfmtx(signed int nseq, double **eff, signed int ***topol, double **len, struct _Treedep *dep, signed int progressout, signed int efffree);
// fixed_musclesupg_double_realloc_nobk_halfmtx_treeout
// file mltaln9.c line 2136
extern void fixed_musclesupg_double_realloc_nobk_halfmtx_treeout(signed int nseq, double **eff, signed int ***topol, double **len, char **name, signed int *nlen, struct _Treedep *dep, signed int efffree);
// fixed_musclesupg_double_treeout
// file mltaln9.c line 2471
extern void fixed_musclesupg_double_treeout(signed int nseq, double **eff, signed int ***topol, double **len, char **name);
// fixed_supg_double_realloc_nobk_halfmtx_treeout_constrained
// file mltaln9.c line 1660
extern void fixed_supg_double_realloc_nobk_halfmtx_treeout_constrained(signed int nseq, double **eff, signed int ***topol, double **len, char **name, signed int *nlen, struct _Treedep *dep, signed int ngroup, signed int **groups, signed int efffree);
// fixed_supg_double_treeout_constrained
// file mltaln9.c line 2856
extern void fixed_supg_double_treeout_constrained(signed int nseq, double **eff, signed int ***topol, double **len, char **name, signed int ngroup, signed int **groups);
// fltncpy
// file mltaln9.c line 8793
extern void fltncpy(double *s1, double *s2, signed int n);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeconstants
// file constants.c line 1442
extern void freeconstants();
// freeintmtx
// file mtxutl.c line 346
void freeintmtx(signed int **mtx, signed int ll1, signed int ll2);
// gapcount
// file mltaln9.c line 9456
extern void gapcount(double *freq, char **seq, signed int nseq, double *eff, signed int lgth);
// gapcountf
// file mltaln9.c line 9478
extern void gapcountf(double *freq, char **seq, signed int nseq, double *eff, signed int lgth);
// gapireru
// file mltaln9.c line 7452
extern void gapireru(char *res, char *ori, char *gt);
// gappick
// file mltaln9.c line 5704
extern void gappick(signed int nseq, signed int s, char **aseq, char **mseq2, double **eff, double *effarr);
// gappick0
// file mltaln9.c line 5683
extern void gappick0(char *aseq, char *seq);
// gappick_samestring
// file io.c line 64
extern void gappick_samestring(char *seq);
// generatenuc1pam
// file constants.c line 176
static void generatenuc1pam(double **pam1, signed int kimuraR, double *freq);
// generatesubalignmentstable
// file mltaln9.c line 9625
extern signed int generatesubalignmentstable(signed int nseq, signed int ***tablept, signed int *nsubpt, signed int *maxmempt, signed int ***topol, double **len, double threshold);
// getGapPattern
// file mltaln9.c line 7823
extern void getGapPattern(double *fgcp, signed int clus, char **seq, double *eff, signed int len, char *xxx);
// getaline_fp_eof
// file io.c line 973
extern signed int getaline_fp_eof(char *s, signed int l, struct _IO_FILE *fp);
// getaline_fp_eof_new
// file io.c line 983
extern signed int getaline_fp_eof_new(char *s, signed int l, struct _IO_FILE *fp);
// getdiaminofreq_part
// file mltaln9.c line 7955
extern void getdiaminofreq_part(double *freq, signed int clus, char **seq, double *eff, signed int len, char *sgappat, char *egappat);
// getdiaminofreq_st
// file mltaln9.c line 7909
extern void getdiaminofreq_st(double *freq, signed int clus, char **seq, double *eff, signed int len);
// getdiaminofreq_x
// file mltaln9.c line 7887
extern void getdiaminofreq_x(double *freq, signed int clus, char **seq, double *eff, signed int len);
// getdigapfreq_part
// file mltaln9.c line 7931
extern void getdigapfreq_part(double *freq, signed int clus, char **seq, double *eff, signed int len, char *sgappat, char *egappat);
// getdigapfreq_st
// file mltaln9.c line 7865
extern void getdigapfreq_st(double *freq, signed int clus, char **seq, double *eff, signed int len);
// getgapfreq
// file mltaln9.c line 8019
extern void getgapfreq(double *freq, signed int clus, char **seq, double *eff, signed int len);
// getgapfreq_zure
// file mltaln9.c line 8000
extern void getgapfreq_zure(double *freq, signed int clus, char **seq, double *eff, signed int len);
// getgapfreq_zure_part
// file mltaln9.c line 7978
extern void getgapfreq_zure_part(double *freq, signed int clus, char **seq, double *eff, signed int len, char *sgap);
// getkyokaigap
// file mltaln9.c line 7469
extern void getkyokaigap(char *g, char **s, signed int pos, signed int n);
// getnumlen
// file functions.h line 200
extern void getnumlen(struct _IO_FILE *fp);
// getnumlen_casepreserve
// file io.c line 2011
extern void getnumlen_casepreserve(struct _IO_FILE *fp, signed int *nlenminpt);
// getnumlen_nogap
// file io.c line 2055
extern void getnumlen_nogap(struct _IO_FILE *fp, signed int *nlenminpt);
// getnumlen_nogap_outallreg
// file io.c line 2100
extern void getnumlen_nogap_outallreg(struct _IO_FILE *fp, signed int *nlenminpt);
// getnumlen_nogap_outallreg_web
// file io.c line 2188
extern void getnumlen_nogap_outallreg_web(struct _IO_FILE *fp, struct _IO_FILE *ofp, signed int *nlenminpt, signed int *isalignedpt);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// includemember
// file mltaln9.c line 9423
extern signed int includemember(signed int *mem, signed int *cand);
// increaseintergroupdistancesfullmtx
// file mltaln9.c line 1598
static void increaseintergroupdistancesfullmtx(double **eff, signed int ngroup, signed int **groups, signed int nseq);
// increaseintergroupdistanceshalfmtx
// file mltaln9.c line 1532
static void increaseintergroupdistanceshalfmtx(double **eff, signed int ngroup, signed int **groups, signed int nseq);
// initFiles
// file io.c line 4086
extern void initFiles(void);
// initSignalSM
// file io.c line 4063
extern void initSignalSM(void);
// initglobalvariables
// file defs.c line 130
extern void initglobalvariables();
// input_new
// file io.c line 1015
extern double input_new(struct _IO_FILE *fp, signed int d);
// intcat
// file mltaln9.c line 8767
extern void intcat(signed int *s1, signed int *s2);
// intcpy
// file mltaln9.c line 8778
extern void intcpy(signed int *s1, signed int *s2);
// intergroup_score
// file mltaln9.c line 415
extern void intergroup_score(char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value);
// intergroup_score_consweight
// file mltaln9.c line 130
void intergroup_score_consweight(char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value);
// intergroup_score_dynmtx
// file mltaln9.c line 339
void intergroup_score_dynmtx(double **offsetmtx, signed int (*scoringmtx)[128l], char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value);
// intergroup_score_gapnomi
// file mltaln9.c line 195
extern void intergroup_score_gapnomi(char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value);
// intergroup_score_multimtx
// file mltaln9.c line 261
extern void intergroup_score_multimtx(signed int **whichmtx, double ***scoringmatrices, char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value);
// intlen
// file mltaln9.c line 34
extern signed int intlen(signed int *num);
// intncpy
// file mltaln9.c line 8788
extern void intncpy(signed int *s1, signed int *s2, signed int n);
// ipower
// file mltaln9.c line 4923
extern double ipower(double x, signed int n);
// isaligned
// file mltaln9.c line 6035
extern signed int isaligned(signed int nseq, char **seq);
// isallgap
// file mltaln9.c line 5694
extern signed int isallgap(char *seq);
// kake2hiku
// file io.c line 1295
extern void kake2hiku(char *str);
// lastmem
// file mltaln9.c line 8805
static signed int lastmem(signed int *s);
// load1SeqWithoutName_new
// file io.c line 1388
extern signed int load1SeqWithoutName_new(struct _IO_FILE *fpp, char *cbuf);
// load1SeqWithoutName_realloc
// file io.c line 1340
extern char * load1SeqWithoutName_realloc(struct _IO_FILE *fpp);
// load1SeqWithoutName_realloc_casepreserve
// file io.c line 1302
extern char * load1SeqWithoutName_realloc_casepreserve(struct _IO_FILE *fpp);
// loadaamtx
// file io.c line 4833
extern double * loadaamtx(void);
// loadtop
// file mltaln9.c line 879
extern void loadtop(signed int nseq, double **mtx, signed int ***topol, double **len, char **name, signed int *nlen, struct _Treedep *dep);
// loadtree
// file mltaln9.c line 1181
extern void loadtree(signed int nseq, signed int ***topol, double **len, char **name, signed int *nlen, struct _Treedep *dep);
// loadtreeoneline
// file mltaln9.c line 841
static void loadtreeoneline(signed int *ar, double *len, struct _IO_FILE *fp);
// log
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 109
extern double log(double);
// log10
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 112
extern double log10(double);
// makedynamicmtx
// file mltaln9.c line 9522
extern void makedynamicmtx(double **out, double **in, double offset);
// makelocal
// file mltaln9.c line 7378
extern signed int makelocal(char *s1, char *s2, signed int thr);
// makeskiptable
// file functions.h line 358
extern void makeskiptable(signed int n, signed int **skip, char **seq);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// minimum
// file mltaln9.c line 8151
static signed int minimum(signed int i1, signed int i2);
// myatof
// file io.c line 5320
extern double myatof(char *in);
// myatoi
// file functions.h line 346
extern signed int myatoi(char *in);
// myfgets
// file io.c line 999
extern signed int myfgets(char *s, signed int l, struct _IO_FILE *fp);
// naiveHpairscore
// file mltaln9.c line 8427
extern double naiveHpairscore(signed int n1, signed int n2, char **seq1, char **seq2, double *eff1, double *eff2, signed int penal);
// naiveQpairscore
// file mltaln9.c line 8330
extern double naiveQpairscore(signed int n1, signed int n2, char **seq1, char **seq2, double *eff1, double *eff2, signed int penal);
// naiveRpairscore
// file mltaln9.c line 8233
extern double naiveRpairscore(signed int n1, signed int n2, char **seq1, char **seq2, double *eff1, double *eff2, signed int penal);
// naivepairscore
// file mltaln9.c line 8687
extern double naivepairscore(signed int n1, signed int n2, char **seq1, char **seq2, double *eff1, double *eff2, signed int penal);
// naivepairscore11
// file functions.h line 287
extern double naivepairscore11(char *seq1, char *seq2, signed int penal);
// naivepairscore11_dynmtx
// file mltaln9.c line 8579
extern double naivepairscore11_dynmtx(double **mtx, char *seq1, char *seq2, signed int penal);
// naivepairscorefast
// file functions.h line 289
extern double naivepairscorefast(char *seq1, char *seq2, signed int *skip1, signed int *skip2, signed int penal);
// new_FinalGapCount
// file mltaln9.c line 7651
extern void new_FinalGapCount(double *fgcp, signed int clus, char **seq, double *eff, signed int len, char *egappat);
// new_FinalGapCount_zure
// file mltaln9.c line 7587
extern void new_FinalGapCount_zure(double *fgcp, signed int clus, char **seq, double *eff, signed int len, char *sgappat, char *egappat);
// new_OpeningGapCount
// file mltaln9.c line 7478
extern void new_OpeningGapCount(double *ogcp, signed int clus, char **seq, double *eff, signed int len, char *sgappat);
// new_OpeningGapCount_zure
// file mltaln9.c line 7527
extern void new_OpeningGapCount_zure(double *ogcp, signed int clus, char **seq, double *eff, signed int len, char *sgappat, char *egappat);
// onlyAlpha_lower
// file io.c line 1270
static signed int onlyAlpha_lower(char *str);
// onlyAlpha_upper
// file io.c line 1282
static signed int onlyAlpha_upper(char *str);
// outgapcount
// file mltaln9.c line 9500
extern void outgapcount(double *freq, signed int nseq, char *gappat, double *eff);
// outlocalhom
// file io.c line 4451
extern void outlocalhom(struct _LocalHom **localhom, signed int nseq);
// outlocalhom_part
// file io.c line 4435
extern void outlocalhom_part(struct _LocalHom **localhom, signed int norg, signed int nadd);
// outlocalhompt
// file io.c line 4467
extern void outlocalhompt(struct _LocalHom ***localhom, signed int n1, signed int n2);
// overlapmember
// file mltaln9.c line 9447
extern signed int overlapmember(signed int *mem1, signed int *mem2);
// phylipout_pointer
// file io.c line 4710
extern void phylipout_pointer(struct _IO_FILE *fp, signed int nseq, signed int maxlen, char **seq, char **name, signed int *order, signed int namelen);
// plainscore
// file mltaln9.c line 8751
extern double plainscore(signed int nseq, char **s);
// progName
// file functions.h line 61
extern char * progName(char *str);
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
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// putlocalhom
// file io.c line 790
extern void putlocalhom(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa);
// putlocalhom2
// file io.c line 661
extern void putlocalhom2(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa);
// putlocalhom3
// file io.c line 336
extern void putlocalhom3(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa);
// putlocalhom_ext
// file io.c line 481
extern void putlocalhom_ext(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa);
// putlocalhom_str
// file io.c line 612
extern void putlocalhom_str(char *al1, char *al2, double *equiv, double scale, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// readData
// file io.c line 1694
extern void readData(struct _IO_FILE *fp, char (*name)[256l], signed int *nlen, char **seq);
// readData_pointer
// file functions.h line 196
extern void readData_pointer(struct _IO_FILE *fp, char **name, signed int *nlen, char **seq);
// readData_pointer2
// file io.c line 1488
extern void readData_pointer2(struct _IO_FILE *fp, signed int nseq, char **name, signed int *nlen, char **seq);
// readData_pointer_casepreserve
// file io.c line 1549
extern void readData_pointer_casepreserve(struct _IO_FILE *fp, char **name, signed int *nlen, char **seq);
// readData_varlen
// file io.c line 1452
extern void readData_varlen(struct _IO_FILE *fp, char **name, signed int *nlen, char **seq);
// readDataforgaln
// file io.c line 1411
extern void readDataforgaln(struct _IO_FILE *fp, char **name, signed int *nlen, char **seq);
// readOtherOptions
// file io.c line 4031
extern void readOtherOptions(signed int *ppidptr, signed int *fftThresholdptr, signed int *fftWinSizeptr);
// readasubalignment
// file io.c line 4978
static signed int readasubalignment(char *s, signed int *t, signed int *preservegaps);
// readhat2
// file io.c line 2684
extern void readhat2(struct _IO_FILE *fp, signed int nseq, char (*name)[256l], double **mtx);
// readhat2_double
// file io.c line 2593
extern void readhat2_double(struct _IO_FILE *fp, signed int nseq, char (*name)[256l], double **mtx);
// readhat2_doublehalf
// file io.c line 2563
extern void readhat2_doublehalf(struct _IO_FILE *fp, signed int nseq, char (*name)[256l], double **mtx);
// readhat2_doublehalf_part_pointer
// file io.c line 2493
extern void readhat2_doublehalf_part_pointer(struct _IO_FILE *fp, signed int nseq, signed int nadd, char **name, double **mtx);
// readhat2_doublehalf_pointer
// file io.c line 2529
extern void readhat2_doublehalf_pointer(struct _IO_FILE *fp, signed int nseq, char **name, double **mtx);
// readhat2_int
// file io.c line 2623
extern void readhat2_int(struct _IO_FILE *fp, signed int nseq, char (*name)[256l], signed int **mtx);
// readhat2_pointer
// file io.c line 2654
extern void readhat2_pointer(struct _IO_FILE *fp, signed int nseq, char **name, double **mtx);
// readlocalhomtable
// file io.c line 4209
extern void readlocalhomtable(struct _IO_FILE *fp, signed int njob, struct _LocalHom **localhomtable, char *kozoarivec);
// readlocalhomtable2
// file io.c line 4127
extern void readlocalhomtable2(struct _IO_FILE *fp, signed int njob, struct _LocalHom **localhomtable, char *kozoarivec);
// readlocalhomtable_one
// file io.c line 4375
extern void readlocalhomtable_one(struct _IO_FILE *fp, signed int norg, signed int nadd, struct _LocalHom **localhomtable, char *kozoarivec);
// readlocalhomtable_two
// file io.c line 4288
extern void readlocalhomtable_two(struct _IO_FILE *fp, signed int norg, signed int nadd, struct _LocalHom **localhomtable, struct _LocalHom **localhomtablex, char *kozoarivec);
// readmccaskill
// file io.c line 5125
void readmccaskill(struct _IO_FILE *fp, struct _RNApair **pairprob, signed int length);
// readpairfoldalign
// file io.c line 5189
extern void readpairfoldalign(struct _IO_FILE *fp, char *s1, char *s2, char *aln1, char *aln2, signed int q1, signed int q2, signed int *of1, signed int *of2, signed int sumlen);
// readsubalignmentstable
// file io.c line 5047
extern void readsubalignmentstable(signed int nseq, signed int **table, signed int *preservegaps, signed int *nsubpt, signed int *maxmempt);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reporterr
// file functions.h line 353
extern void reporterr(const char *str, ...);
// resetlocalhom
// file mltaln9.c line 7439
extern void resetlocalhom(signed int nseq, struct _LocalHom **lh);
// rewind
// file /usr/include/stdio.h line 759
extern void rewind(struct _IO_FILE *);
// samemember
// file mltaln9.c line 9345
extern signed int samemember(signed int *mem, signed int *cand);
// samemembern
// file mltaln9.c line 9382
extern signed int samemembern(signed int *mem, signed int *cand, signed int nc);
// scmx_calc
// file mltaln9.c line 72
extern void scmx_calc(signed int icyc, char **aseq, double *effarr, double **scmx);
// score_calc0
// file mltaln9.c line 5873
extern double score_calc0(char **seq, signed int s, double **eff, signed int ex);
// score_calc1
// file mltaln9.c line 5447
extern double score_calc1(char *seq1, char *seq2);
// score_calc4
// file mltaln9.c line 611
extern double score_calc4(char **seq, signed int s, double **eff, signed int ex);
// score_calc5
// file mltaln9.c line 490
extern double score_calc5(char **seq, signed int s, double **eff, signed int ex);
// score_calc_a
// file mltaln9.c line 6109
extern double score_calc_a(char **seq, signed int s, double **eff);
// score_calc_for_score
// file mltaln9.c line 6046
extern double score_calc_for_score(signed int nseq, char **seq);
// score_calc_for_score_s
// file mltaln9.c line 6240
extern double score_calc_for_score_s(signed int s, char **seq);
// score_calc_s
// file mltaln9.c line 6174
extern double score_calc_s(char **seq, signed int s, double **eff);
// score_calcp
// file mltaln9.c line 5408
extern double score_calcp(char *seq1, char *seq2, signed int len);
// searchAnchors
// file mltaln9.c line 6507
extern signed int searchAnchors(signed int nseq, char **seq, struct _Segment *seg);
// searchKUorWA
// file io.c line 1203
extern void searchKUorWA(struct _IO_FILE *fp);
// seqLower
// file io.c line 962
extern void seqLower(signed int nseq, char **seq);
// seqUpper
// file io.c line 951
extern void seqUpper(signed int nseq, char **seq);
// seqcheck
// file mltaln.h line 161
extern char seqcheck(char **seq);
// seqlen
// file mltaln9.c line 14
extern signed int seqlen(char *seq);
// setnearest
// file mltaln9.c line 760
static void setnearest(signed int nseq, struct _Bchain *acpt, double **eff, double *mindisfrompt, signed int *nearestpt, signed int pos);
// setnearest_double_fullmtx
// file mltaln9.c line 802
static void setnearest_double_fullmtx(signed int nseq, struct _Bchain *acpt, double **eff, double *mindisfrompt, signed int *nearestpt, signed int pos);
// shishagonyuu
// file constants.c line 15
static signed int shishagonyuu(double in);
// showaamtxexample
// file io.c line 4816
static void showaamtxexample();
// spg
// file mltaln9.c line 4842
extern void spg(signed int nseq, double **oeff, signed int ***topol, double **len);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sqrt
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 156
extern double sqrt(double);
// sreverse
// file io.c line 55
extern void sreverse(char *r, char *s);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// st_FinalGapCount
// file mltaln9.c line 7785
extern void st_FinalGapCount(double *fgcp, signed int clus, char **seq, double *eff, signed int len);
// st_FinalGapCount_zure
// file mltaln9.c line 7747
extern void st_FinalGapCount_zure(double *fgcp, signed int clus, char **seq, double *eff, signed int len);
// st_OpeningGapCount
// file mltaln9.c line 7716
extern void st_OpeningGapCount(double *ogcp, signed int clus, char **seq, double *eff, signed int len);
// st_getGapPattern
// file mltaln9.c line 8038
extern void st_getGapPattern(struct _Gappattern **pat, signed int clus, char **seq, double *eff, signed int len);
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
// strins
// file mltaln9.c line 6021
extern void strins(char *str1, char *str2);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strncpy_caseC
// file io.c line 941
extern void strncpy_caseC(char *str1, char *str2, signed int len);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// substitution
// file mltaln9.c line 5542
extern double substitution(char *seq1, char *seq2);
// substitution_hosei
// file mltaln9.c line 5497
extern double substitution_hosei(char *seq1, char *seq2);
// substitution_nid
// file mltaln9.c line 5467
extern double substitution_nid(char *seq1, char *seq2);
// substitution_score
// file mltaln9.c line 5482
extern double substitution_score(char *seq1, char *seq2);
// sumofpairsscore
// file mltaln9.c line 9706
extern double sumofpairsscore(signed int nseq, char **seq);
// supg
// file mltaln9.c line 4709
extern void supg(signed int nseq, double **oeff, signed int ***topol, double **len);
// tab2space
// file io.c line 4969
static void tab2space(char *s);
// tabtospace
// file io.c line 4676
static void tabtospace(char *str);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// treeconstruction
// file mltaln9.c line 5563
extern void treeconstruction(char **seq, signed int nseq, signed int ***topol, double **len, double **eff);
// ungetc
// file /usr/include/stdio.h line 702
extern signed int ungetc(signed int, struct _IO_FILE *);
// upg2
// file mltaln9.c line 685
extern void upg2(signed int nseq, double **eff, signed int ***topol, double **len);
// veryfastsupg
// file mltaln9.c line 4369
extern void veryfastsupg(signed int nseq, double **oeff, signed int ***topol, double **len);
// veryfastsupg_double_loadtree
// file mltaln9.c line 3666
extern void veryfastsupg_double_loadtree(signed int nseq, double **eff, signed int ***topol, double **len, char **name);
// veryfastsupg_double_outtree
// file mltaln9.c line 4149
extern void veryfastsupg_double_outtree(signed int nseq, double **eff, signed int ***topol, double **len, char **name);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// write1seq
// file io.c line 2483
extern void write1seq(struct _IO_FILE *fp, char *aseq);
// writeData
// file io.c line 2458
extern void writeData(struct _IO_FILE *fp, signed int locnjob, char (*name)[256l], signed int *nlen, char **aseq);
// writeData_pointer
// file io.c line 2434
extern void writeData_pointer(struct _IO_FILE *fp, signed int locnjob, char **name, signed int *nlen, char **aseq);
// writeData_reorder
// file io.c line 4792
extern void writeData_reorder(struct _IO_FILE *fp, signed int locnjob, char (*name)[256l], signed int *nlen, char **aseq, signed int *order);
// writeData_reorder_pointer
// file io.c line 4768
extern void writeData_reorder_pointer(struct _IO_FILE *fp, signed int locnjob, char **name, signed int *nlen, char **aseq, signed int *order);
// writeDataforgaln
// file io.c line 2413
extern void writeDataforgaln(struct _IO_FILE *fp, signed int locnjob, char **name, signed int *nlen, char **aseq);
// writePre
// file io.c line 3955
extern signed int writePre(signed int nseq, char **name, signed int *nlen, char **aseq, signed int force);

union anonymous_0
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

union anonymous
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct _Achain
{
  // next
  signed int next;
  // prev
  signed int prev;
};

struct _Addtree
{
  // nearest
  signed int nearest;
  // dist1
  double dist1;
  // neighbors
  char *neighbors;
  // dist2
  double dist2;
};

struct _Bchain
{
  // next
  struct _Bchain *next;
  // prev
  struct _Bchain *prev;
  // pos
  signed int pos;
};

struct _Gappattern
{
  // len
  signed int len;
  // freq
  double freq;
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

struct _LocalHom
{
  // nokori
  signed int nokori;
  // next
  struct _LocalHom *next;
  // last
  struct _LocalHom *last;
  // start1
  signed int start1;
  // end1
  signed int end1;
  // start2
  signed int start2;
  // end2
  signed int end2;
  // opt
  double opt;
  // overlapaa
  signed int overlapaa;
  // extended
  signed int extended;
  // importance
  double importance;
  // fimportance
  double fimportance;
  // wimportance
  double wimportance;
  // korh
  char korh;
};

struct _RNApair
{
  // uppos
  signed int uppos;
  // upscore
  double upscore;
  // downpos
  signed int downpos;
  // downscore
  double downscore;
  // bestpos
  signed int bestpos;
  // bestscore
  double bestscore;
};

struct _Segment
{
  // start
  signed int start;
  // end
  signed int end;
  // center
  signed int center;
  // score
  double score;
  // skipForeward
  signed int skipForeward;
  // skipBackward
  signed int skipBackward;
  // pair
  struct _Segment *pair;
  // number
  signed int number;
};

struct _Treedep
{
  // child0
  signed int child0;
  // child1
  signed int child1;
  // done
  signed int done;
  // distfromtip
  double distfromtip;
};

struct _jobtable
{
  // i
  signed int i;
  // j
  signed int j;
};

struct _thread_arg
{
  // njob
  signed int njob;
  // thread_no
  signed int thread_no;
  // selfscore
  double *selfscore;
  // mtx
  double **mtx;
  // seq
  char **seq;
  // skiptable
  signed int **skiptable;
  // jobpospt
  struct _jobtable *jobpospt;
  // mutex
  union anonymous *mutex;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};


// RNApenalty
// file defs.c line 57
signed int RNApenalty;
// RNApenalty_ex
// file defs.c line 58
signed int RNApenalty_ex;
// RNAppenalty
// file defs.c line 57
signed int RNAppenalty;
// RNAppenalty_ex
// file defs.c line 58
signed int RNAppenalty_ex;
// RNApthr
// file defs.c line 64
signed int RNApthr;
// RNAscoremtx
// file defs.c line 115
char RNAscoremtx = (char)110;
// RNAthr
// file defs.c line 64
signed int RNAthr;
// TMorJTT
// file defs.c line 67
signed int TMorJTT;
// addfile
// file defs.c line 97
char *addfile;
// addprofile
// file defs.c line 98
signed int addprofile = 1;
// alg
// file defs.c line 80
char alg;
// amino
// file defs.c line 26
unsigned char amino[256l];
// amino_dis
// file defs.c line 19
signed int **amino_dis;
// amino_dis_consweight_multi
// file defs.c line 22
double **amino_dis_consweight_multi;
// amino_grp
// file defs.c line 17
char amino_grp[256l];
// amino_n
// file defs.c line 16
signed int amino_n[256l];
// bunkatsu
// file defs.c line 40
signed int bunkatsu;
// calledByXced
// file defs.c line 44
signed int calledByXced;
// check
// file defs.c line 51
signed int check;
// checkC
// file defs.c line 88
signed int checkC;
// cnst
// file defs.c line 81
signed int cnst;
// commonAlloc1
// file defs.c line 5
signed int commonAlloc1 = 0;
// commonAlloc2
// file defs.c line 6
signed int commonAlloc2 = 0;
// commonIP
// file defs.c line 7
signed int **commonIP = (signed int **)(void *)0;
// commonJP
// file defs.c line 8
signed int **commonJP = (signed int **)(void *)0;
// constraint
// file defs.c line 35
signed int constraint;
// consweight_multi
// file defs.c line 113
double consweight_multi = 1.0;
// consweight_rna
// file defs.c line 114
double consweight_rna = 0.0;
// contin
// file defs.c line 43
signed int contin;
// cooling
// file defs.c line 53
signed int cooling;
// cut
// file defs.c line 52
double cut;
// devide
// file defs.c line 45
signed int devide;
// disopt
// file defs.c line 86
signed int disopt;
// disp
// file defs.c line 78
signed int disp;
// divThreshold
// file defs.c line 77
signed int divThreshold;
// divWinSize
// file defs.c line 76
signed int divWinSize;
// divpairscore
// file defs.c line 36
signed int divpairscore;
// dorp
// file defs.c line 41
signed int dorp;
// exgpm
// file miyata5.h line 2
signed int exgpm = +0;
// exgpn
// file DNA.h line 50
signed int exgpn = +00;
// fastathreshold
// file defs.c line 33
double fastathreshold;
// fftNoAnchStop
// file defs.c line 75
signed int fftNoAnchStop;
// fftRepeatStop
// file defs.c line 74
signed int fftRepeatStop;
// fftThreshold
// file defs.c line 73
signed int fftThreshold;
// fftWinSize
// file defs.c line 72
signed int fftWinSize;
// fftkeika
// file defs.c line 93
signed int fftkeika;
// fftscore
// file defs.c line 71
signed int fftscore;
// fmodel
// file defs.c line 37
signed int fmodel;
// force_fft
// file defs.c line 69
char force_fft;
// geta2
// file defs.c line 89
double geta2;
// gmsg
// file defs.c line 126
signed int gmsg = 0;
// inputfile
// file defs.c line 96
char *inputfile;
// kimuraR
// file defs.c line 91
signed int kimuraR;
// kobetsubunkatsu
// file defs.c line 39
signed int kobetsubunkatsu;
// legacygapcost
// file defs.c line 104
signed int legacygapcost = 0;
// locaminom
// file miyata5.h line 3
char locaminom[27l] = { 'A', 'R', 'N', 'D', 'C', 'Q', 'E', 'G', 'H', 'I', 'L', 'K', 'M', 'F', 'P', 'S', 'T', 'W', 'Y', 'V', 'B', 'Z', 'X', '.', '-', 'J', 0 };
// locaminon
// file DNA.h line 43
char locaminon[27l] = { 'a', 'g', 'c', 't', 'u', 'A', 'G', 'C', 'T', 'U', 'n', 'N', 'b', 'd', 'h', 'k', 'm', 'n', 'r', 's', 'v', 'w', 'y', 'x', '-', 'O', 0 };
// locgrpm
// file miyata5.h line 4
char locgrpm[26l] = { (char)0, (char)3, (char)2, (char)2, (char)5, (char)2, (char)2, (char)0, (char)3, (char)1, (char)1, (char)3, (char)1, (char)4, (char)0, (char)0, (char)0, (char)4, (char)4, (char)1, (char)2, (char)2, (char)6, (char)6, (char)6, (char)1 };
// locgrpn
// file DNA.h line 44
char locgrpn[26l] = { (char)0, (char)1, (char)2, (char)3, (char)3, (char)0, (char)1, (char)2, (char)3, (char)3, (char)4, (char)4, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5, (char)5 };
// locn_dism
// file miyata5.h line 9
signed int locn_dism[26l][26l] = { { 600, -235, 91, -78, 202, 51, -103, 340, -21, -169, -189, -246, -92, -323, 582, 454, 342, -400, -309, 71, 7, -26, -15, -400, 0, -1400 },
    { -235, 600, 17, -69, -275, 277, 185, -400, 365, -112, -149, 485, -55, -106, -229, -183, 20, -178, 22, -95, -26, 231, -15, -400, 0, -1400 },
    { 91, 17, 600, 414, -209, 317, 357, 39, 231, -363, -398, 74, -280, -400, 85, 225, 200, -400, -378, -189, 507, 337, -15, -400, 0, -1400 },
    { -78, -69, 414, 600, -395, 179, 342, -78, 108, -400, -400, 14, -400, -400, -86, 65, 14, -400, -400, -372, 507, 261, -15, -400, 0, -1400 },
    { 202, -275, -209, -395, 600, -109, -332, -35, -132, 134, 128, -335, 182, -40, 220, 74, 185, -355, -81, 354, -302, -220, -15, -400, 0, -1400 },
    { 51, 277, 317, 179, -109, 600, 360, -109, 508, -135, -172, 297, -58, -203, 51, 128, 280, -378, -109, -9, 248, 480, -15, -400, 0, -1400 },
    { -103, 185, 357, 342, -332, 360, 600, -195, 325, -369, -400, 274, -295, -400, -109, 11, 77, -400, -321, -249, 350, 480, -15, -400, 0, -1400 },
    { 340, -400, 39, -78, -35, -109, -195, 600, -195, -400, -400, -400, -355, -400, 322, 357, 114, -400, -400, -189, -19, -152, -15, -400, 0, -1400 },
    { -21, 365, 231, 108, -132, 508, 325, -195, 600, -100, -141, 374, -26, -152, -15, 45, 222, -303, -49, -3, 169, 417, -15, -400, 0, -1400 },
    { -169, -112, -363, -400, 134, -135, -369, -400, -100, 600, 560, -212, 517, 425, -149, -243, -12, 108, 354, 357, -400, -252, -15, -400, 0, -1400 },
    { -189, -149, -398, -400, 128, -172, -400, -400, -141, 560, 600, -252, 482, 420, -172, -269, -43, 105, 331, 340, -400, -290, -15, -400, 0, -1400 },
    { -246, 485, 74, 14, -335, 297, 274, -400, 374, -212, -252, 600, -152, -215, -240, -175, -1, -289, -92, -172, 44, 285, -15, -400, 0, -1400 },
    { -92, -55, -280, -400, 182, -58, -295, -355, -26, 517, 482, -152, 600, 365, -75, -163, 68, 59, 334, 422, -368, -176, -15, -400, 0, -1400 },
    { -323, -106, -400, -400, -40, -203, -400, -400, -152, 425, 420, -215, 365, 600, -306, -386, -143, 282, 462, 191, -400, -315, -15, -400, 0, -1400 },
    { 582, -229, 85, -86, 220, 51, -109, 322, -15, -149, -172, -240, -75, -306, 600, 440, 351, -400, -292, 88, 0, -29, -15, -400, 0, -1400 },
    { 454, -183, 225, 65, 74, 128, 11, 357, 45, -243, -269, -175, -163, -386, 440, 600, 345, -400, -352, -15, 145, 70, -15, -400, 0, -1400 },
    { 342, 20, 200, 14, 185, 280, 77, 114, 222, -12, -43, -1, 68, -143, 351, 345, 600, -400, -100, 194, 107, 178, -15, -400, 0, -1400 },
    { -400, -178, -400, -400, -355, -378, -400, -400, -303, 108, 105, -289, 59, 282, -400, -400, -400, 600, 297, -118, -400, -400, -15, -400, 0, -1400 },
    { -309, 22, -378, -400, -81, -109, -321, -400, -49, 354, 331, -92, 334, 462, -292, -352, -100, 297, 600, 165, -400, -215, -15, -400, 0, -1400 },
    { 71, -95, -189, -372, 354, -9, -249, -189, -3, 357, 340, -172, 422, 191, 88, -15, 194, -118, 165, 600, -280, -129, -15, -400, 0, -1400 },
    { 7, -26, 507, 507, -302, 248, 350, -19, 169, -400, -400, 44, -368, -400, 0, 145, 107, -400, -400, -280, 507, 299, -400, -400, 0, -1400 },
    { -26, 231, 337, 261, -220, 480, 480, -152, 417, -252, -290, 285, -176, -315, -29, 70, 178, -400, -215, -129, 299, 480, -400, -400, 0, -1400 },
    { -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -15, -400, -400, -400, -400, 0, -1400 },
    { -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, -400, 0, -1400 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, -1400, 0, 1600 } };
// locn_disn
// file DNA.h line 51
signed int locn_disn[26l][26l] = { { 1000, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 600, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 1000, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 600, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 500, 500, 0, 0, 0, 500, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -500 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, -500, 0, 500 } };
// locpenaltym
// file miyata5.h line 1
signed int locpenaltym = -1440;
// locpenaltyn
// file DNA.h line 42
signed int locpenaltyn = -1750;
// makedistmtx
// file defs.c line 95
signed int makedistmtx;
// maxdist
// file dndpre.c line 6
static signed int maxdist = 1;
// maxdistclass
// file defs.c line 124
signed int maxdistclass = -1;
// minimumweight
// file defs.c line 105
double minimumweight = 0.0005;
// mix
// file defs.c line 82
signed int mix;
// modelname
// file defs.c line 14
char modelname[500l];
// n_dis
// file defs.c line 23
signed int **n_dis;
// n_disFFT
// file defs.c line 24
signed int **n_disFFT;
// n_disLN
// file defs.c line 20
double **n_disLN;
// n_dis_consweight_multi
// file defs.c line 25
double **n_dis_consweight_multi;
// nadd
// file dndpre.c line 7
static signed int nadd = 0;
// nalphabets
// file defs.c line 119
signed int nalphabets = 26;
// nblosum
// file defs.c line 38
signed int nblosum;
// ndistclass
// file defs.c line 123
signed int ndistclass = 10;
// nevermemsave
// file defs.c line 70
signed int nevermemsave;
// newgapstr
// file defs.c line 117
char *newgapstr = "-";
// niter
// file defs.c line 42
signed int niter;
// njob
// file defs.c line 15
signed int njob;
// nlenmax
// file defs.c line 15
signed int nlenmax;
// nscoredalphabets
// file defs.c line 120
signed int nscoredalphabets = 20;
// nthread
// file defs.c line 9
signed int nthread = 1;
// offset
// file defs.c line 65
signed int offset;
// offsetFFT
// file defs.c line 65
signed int offsetFFT;
// offsetLN
// file defs.c line 65
signed int offsetLN;
// outgap
// file defs.c line 79
signed int outgap = 1;
// outnumber
// file defs.c line 103
signed int outnumber = 0;
// pamN
// file defs.c line 87
signed int pamN;
// parallelizationstrategy
// file defs.c line 11
signed int parallelizationstrategy = 2;
// penalty
// file defs.c line 55
signed int penalty;
// penaltyLN
// file defs.c line 55
signed int penaltyLN;
// penalty_EX
// file defs.c line 60
signed int penalty_EX;
// penalty_OP
// file defs.c line 61
signed int penalty_OP;
// penalty_dist
// file defs.c line 56
signed int penalty_dist;
// penalty_ex
// file defs.c line 59
signed int penalty_ex;
// penalty_exLN
// file defs.c line 59
signed int penalty_exLN;
// penalty_shift
// file defs.c line 62
signed int penalty_shift;
// penalty_shift_factor
// file defs.c line 63
double penalty_shift_factor = 100.0;
// poffset
// file defs.c line 65
signed int poffset;
// polarity
// file defs.c line 27
double polarity[256l];
// polarity_
// file miyata.h line 1
double polarity_[20l] = { 8.1, 10.5, 11.6, 13.0, 5.5, 10.5, 12.3, 9.0, 10.4, 5.2, 4.9, 11.3, 5.7, 5.2, 8.0, 9.2, 8.6, 5.4, 6.2, 5.9 };
// ppenalty
// file defs.c line 55
signed int ppenalty;
// ppenalty_EX
// file defs.c line 60
signed int ppenalty_EX;
// ppenalty_OP
// file defs.c line 61
signed int ppenalty_OP;
// ppenalty_dist
// file defs.c line 56
signed int ppenalty_dist;
// ppenalty_ex
// file defs.c line 59
signed int ppenalty_ex;
// ppenalty_shift
// file defs.c line 62
signed int ppenalty_shift;
// ppid
// file defs.c line 31
signed int ppid;
// ppslocal
// file defs.c line 34
signed int ppslocal;
// prep_g
// file defs.c line 108
struct _IO_FILE *prep_g;
// pslocal
// file defs.c line 34
signed int pslocal;
// randomseed
// file defs.c line 10
signed int randomseed = 0;
// refine
// file defs.c line 50
signed int refine;
// res_g
// file defs.c line 111
char **res_g;
// ribosum16
// file DNA.h line 21
double ribosum16[16l][16l] = { { -2.49, -8.24, -7.04, -4.32, -6.86, -8.39, -5.03, -5.84, -8.84, -4.68, -14.37, -12.64, -4.01, -6.16, -11.32, -9.05 },
    { -8.24, -0.80, -8.89, -5.13, -8.61, -5.38, -5.77, -6.60, -10.41, -4.57, -14.53, -10.14, -5.43, -5.94, -8.87, -11.07 },
    { -7.04, -8.89, -2.11, -2.04, -9.73, -11.05, -3.81, -4.72, -9.37, -5.86, -9.08, -10.45, -5.33, -6.93, -8.67, -7.83 },
    { -4.32, -5.13, -2.04, 4.49, -5.33, -5.61, 2.70, 0.59, -5.56, 1.67, -6.71, -5.17, 1.61, -0.51, -4.81, -2.98 },
    { -6.86, -8.61, -9.73, -5.33, -1.05, -8.67, -4.88, -6.10, -7.98, -6.00, -12.43, -7.71, -5.85, -7.55, -6.63, -11.54 },
    { -8.39, -5.38, -11.05, -5.61, -8.67, -1.98, -4.13, -5.77, -11.36, -4.66, -12.58, -13.69, -5.75, -4.27, -12.01, -10.79 },
    { -5.03, -5.77, -3.81, 2.70, -4.88, -4.13, 5.62, 1.21, -5.95, 2.11, -3.70, -5.84, 1.60, -0.08, -4.49, -3.90 },
    { -5.84, -6.60, -4.72, 0.59, -6.10, -5.77, 1.21, 3.47, -7.93, -0.27, -7.88, -5.61, -0.57, -2.09, -5.30, -4.45 },
    { -8.84, -10.41, -9.37, -5.56, -7.98, -11.36, -5.95, -7.93, -5.13, -3.57, -10.45, -8.49, -2.42, -5.63, -7.08, -8.39 },
    { -4.68, -4.57, -5.86, 1.67, -6.00, -4.66, 2.11, -0.27, -3.57, 5.36, -5.71, -4.96, 2.75, 1.32, -4.91, -3.67 },
    { -14.37, -14.53, -9.08, -6.71, -12.43, -12.58, -3.70, -7.88, -10.45, -5.71, -3.59, -5.77, -6.88, -8.41, -7.40, -5.41 },
    { -12.64, -10.14, -10.45, -5.17, -7.71, -13.69, -5.84, -5.61, -8.49, -4.96, -5.77, -2.28, -4.72, -7.36, -3.83, -5.21 },
    { -4.01, -5.43, -5.33, 1.61, -5.85, -5.75, 1.60, -0.57, -2.42, 2.75, -6.88, -4.72, 4.97, 1.14, -2.98, -3.39 },
    { -6.16, -5.94, -6.93, -0.51, -7.55, -4.27, -0.08, -2.09, -5.63, 1.32, -8.41, -7.36, 1.14, 3.36, -4.76, -4.28 },
    { -11.32, -8.87, -8.67, -4.81, -6.63, -12.01, -4.49, -5.30, -7.08, -4.91, -7.40, -3.83, -2.98, -4.76, -3.21, -5.97 },
    { -9.05, -11.07, -7.83, -2.98, -11.54, -10.79, -3.90, -4.45, -8.39, -3.67, -5.41, -5.21, -3.39, -4.28, -5.97, -0.02 } };
// ribosum4
// file DNA.h line 12
double ribosum4[4l][4l] = { { 2.22, -1.46, -1.86, -1.39 }, { -1.46, 1.03, -2.48, -1.74 }, { -1.86, -2.48, 1.16, -1.05 }, { -1.39, -1.74, -1.05, 1.65 } };
// ribosumdis
// file defs.c line 29
signed int ribosumdis[37l][37l];
// rnakozo
// file defs.c line 99
signed int rnakozo;
// rnaprediction
// file defs.c line 100
char rnaprediction;
// scmtd
// file defs.c line 46
signed int scmtd;
// score_check
// file defs.c line 94
signed int score_check;
// scoremtx
// file defs.c line 66
signed int scoremtx;
// scoreout
// file defs.c line 101
signed int scoreout = 0;
// seq_g
// file defs.c line 110
char **seq_g;
// signalSM
// file defs.c line 107
char *signalSM;
// specificityconsideration
// file defs.c line 122
double specificityconsideration = 0.0;
// spscoreout
// file defs.c line 102
signed int spscoreout = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// sueff05
// file mltaln9.c line 1502
static double sueff05;
// sueff1
// file mltaln9.c line 1502
static double sueff1;
// sueff_global
// file defs.c line 128
double sueff_global = 0.1;
// swopt
// file defs.c line 92
char *swopt;
// tbitr
// file defs.c line 83
signed int tbitr;
// tbrweight
// file defs.c line 85
signed int tbrweight;
// tbutree
// file defs.c line 49
signed int tbutree;
// tbweight
// file defs.c line 84
signed int tbweight;
// thrinter
// file defs.c line 32
double thrinter;
// trap_g
// file defs.c line 109
struct _IO_FILE *trap_g;
// treemethod
// file defs.c line 90
signed int treemethod;
// treeout
// file dndpre.c line 5
static signed int treeout = 0;
// trywarp
// file defs.c line 54
signed int trywarp = 0;
// upperCase
// file io.c line 3
static signed int upperCase = 0;
// use_fft
// file defs.c line 68
char use_fft;
// usenaivescoreinsteadofalignmentscore
// file dndpre.c line 8
static signed int usenaivescoreinsteadofalignmentscore = 0;
// utree
// file defs.c line 48
signed int utree;
// volume
// file defs.c line 28
double volume[256l];
// volume_
// file miyata.h line 25
double volume_[20l] = { 31.0, 124.0, 56.0, 54.0, 55.0, 85.0, 83.0, 3.0, 96.0, 111.0, 111.0, 119.0, 105.0, 132.0, 32.5, 32.0, 61.0, 170.0, 136.0, 84.0 };
// weight
// file defs.c line 47
signed int weight;

// AllocateCharCub
// file mtxutl.c line 313
char *** AllocateCharCub(signed int ll1, signed int ll2, signed int ll3)
{
  signed int i;
  char ***cub;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(ll1 + 1), sizeof(char **) /*8ul*/ );
  cub = (char ***)return_value_calloc_1;
  if(cub == ((char ***)NULL))
  {
    fprintf(stderr, "Allocation error( %d x %d x %d char cube\n", ll1, ll2, ll3);
    exit(1);
  }

  if(!(ll2 == 0))
  {
    i = 0;
    for( ; !(i >= ll1); i = i + 1)
      cub[(signed long int)i]=AllocateCharMtx(ll2, ll3);
  }

  cub[(signed long int)ll1] = (char **)(void *)0;
  return cub;
}

// AllocateCharHcu
// file mtxutl.c line 366
char **** AllocateCharHcu(signed int ll1, signed int ll2, signed int ll3, signed int ll4)
{
  signed int i;
  char ****hcu;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(ll1 + 1), sizeof(char ***) /*8ul*/ );
  hcu = (char ****)return_value_calloc_1;
  if(hcu == ((char ****)NULL))
    exit(1);

  i = 0;
  for( ; !(i >= ll1); i = i + 1)
    hcu[(signed long int)i]=AllocateCharCub(ll2, ll3, ll4);
  hcu[(signed long int)ll1] = (char ***)(void *)0;
  return hcu;
}

// AllocateCharMtx
// file mtxutl.h line 7
char ** AllocateCharMtx(signed int l1, signed int l2)
{
  signed int i;
  char **cmtx;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(l1 + 1), sizeof(char *) /*8ul*/ );
  cmtx = (char **)return_value_calloc_1;
  if(cmtx == ((char **)NULL))
  {
    fprintf(stderr, "Cannot allocate %d x %d character matrix.\n", l1, l2);
    exit(1);
  }

  if(!(l2 == 0))
  {
    i = 0;
    for( ; !(i >= l1); i = i + 1)
      cmtx[(signed long int)i]=AllocateCharVec(l2);
  }

  cmtx[(signed long int)l1] = (char *)(void *)0;
  return cmtx;
}

// AllocateCharVec
// file mtxutl.h line 4
char * AllocateCharVec(signed int l1)
{
  char *cvec;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)l1, sizeof(char) /*1ul*/ );
  cvec = (char *)return_value_calloc_1;
  if(cvec == ((char *)NULL))
  {
    fprintf(stderr, "Cannot allocate %d character vector.\n", l1);
    exit(1);
  }

  return cvec;
}

// AllocateDoubleCub
// file mtxutl.c line 488
double *** AllocateDoubleCub(signed int ll1, signed int ll2, signed int ll3)
{
  signed int i;
  double ***cub;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(ll1 + 1), sizeof(double **) /*8ul*/ );
  cub = (double ***)return_value_calloc_1;
  if(cub == ((double ***)NULL))
  {
    fprintf(stderr, "cannot allocate double cube.\n");
    exit(1);
  }

  i = 0;
  for( ; !(i >= ll1); i = i + 1)
    cub[(signed long int)i]=AllocateDoubleMtx(ll2, ll3);
  cub[(signed long int)ll1] = (double **)(void *)0;
  return cub;
}

// AllocateDoubleMtx
// file mtxutl.h line 37
double ** AllocateDoubleMtx(signed int ll1, signed int ll2)
{
  signed int i;
  double **mtx;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(ll1 + 1), sizeof(double *) /*8ul*/ );
  mtx = (double **)return_value_calloc_1;
  if(mtx == ((double **)NULL))
  {
    fprintf(stderr, "cannot allocate DoubleMtx\n");
    exit(1);
  }

  if(!(ll2 == 0))
  {
    i = 0;
    for( ; !(i >= ll1); i = i + 1)
      mtx[(signed long int)i]=AllocateDoubleVec(ll2);
  }

  mtx[(signed long int)ll1] = (double *)(void *)0;
  return mtx;
}

// AllocateDoubleVec
// file mtxutl.h line 34
double * AllocateDoubleVec(signed int ll1)
{
  double *vec;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)ll1, sizeof(double) /*8ul*/ );
  vec = (double *)return_value_calloc_1;
  return vec;
}

// AllocateFloatCub
// file mtxutl.c line 458
double *** AllocateFloatCub(signed int ll1, signed int ll2, signed int ll3)
{
  signed int i;
  double ***cub;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(ll1 + 1), sizeof(double **) /*8ul*/ );
  cub = (double ***)return_value_calloc_1;
  if(cub == ((double ***)NULL))
  {
    fprintf(stderr, "cannot allocate double cube.\n");
    exit(1);
  }

  i = 0;
  for( ; !(i >= ll1); i = i + 1)
    cub[(signed long int)i]=AllocateFloatMtx(ll2, ll3);
  cub[(signed long int)ll1] = (double **)(void *)0;
  return cub;
}

// AllocateFloatHalfMtx
// file mtxutl.c line 150
double ** AllocateFloatHalfMtx(signed int ll1)
{
  double **mtx;
  signed int i;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)((unsigned int)ll1 + (unsigned int)1), sizeof(double *) /*8ul*/ );
  mtx = (double **)return_value_calloc_1;
  if(mtx == ((double **)NULL))
  {
    fprintf(stderr, "Allocation error ( %d fload halfmtx )\n", ll1);
    exit(1);
  }

  i = 0;
  for( ; !(i >= ll1); i = i + 1)
  {
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)(ll1 - i), sizeof(double) /*8ul*/ );
    mtx[(signed long int)i] = (double *)return_value_calloc_2;
    if(mtx[(signed long int)i] == ((double *)NULL))
    {
      fprintf(stderr, "Allocation error( %d doublehalfmtx )\n", ll1);
      exit(1);
    }

  }
  mtx[(signed long int)ll1] = (double *)(void *)0;
  return mtx;
}

// AllocateFloatMtx
// file mtxutl.c line 174
double ** AllocateFloatMtx(signed int ll1, signed int ll2)
{
  double **mtx;
  signed int i;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)((unsigned int)ll1 + (unsigned int)1), sizeof(double *) /*8ul*/ );
  mtx = (double **)return_value_calloc_1;
  if(mtx == ((double **)NULL))
  {
    fprintf(stderr, "Allocation error ( %d x %d fload mtx )\n", ll1, ll2);
    exit(1);
  }

  if(!(ll2 == 0))
  {
    i = 0;
    for( ; !(i >= ll1); i = i + 1)
    {
      void *return_value_calloc_2;
      return_value_calloc_2=calloc((unsigned long int)ll2, sizeof(double) /*8ul*/ );
      mtx[(signed long int)i] = (double *)return_value_calloc_2;
      if(mtx[(signed long int)i] == ((double *)NULL))
      {
        fprintf(stderr, "Allocation error( %d x %d doublemtx )\n", ll1, ll2);
        exit(1);
      }

    }
  }

  mtx[(signed long int)ll1] = (double *)(void *)0;
  return mtx;
}

// AllocateFloatTri
// file mtxutl.c line 240
double ** AllocateFloatTri(signed int ll1)
{
  double **tri;
  signed int i;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)((unsigned int)ll1 + (unsigned int)1), sizeof(double *) /*8ul*/ );
  tri = (double **)return_value_calloc_1;
  if(tri == ((double **)NULL))
  {
    fprintf(stderr, "Allocation error ( double tri )\n");
    exit(1);
  }

  i = 0;
  for( ; !(i >= ll1); i = i + 1)
    tri[(signed long int)i]=AllocateFloatVec(i + 3);
  tri[(signed long int)ll1] = (double *)(void *)0;
  return tri;
}

// AllocateFloatVec
// file mtxutl.h line 11
double * AllocateFloatVec(signed int l1)
{
  double *vec;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(unsigned int)l1, sizeof(double) /*8ul*/ );
  vec = (double *)return_value_calloc_1;
  if(vec == ((double *)NULL))
  {
    fprintf(stderr, "Allocation error ( %d fload vec )\n", l1);
    exit(1);
  }

  return vec;
}

// AllocateIntCub
// file mtxutl.c line 402
signed int *** AllocateIntCub(signed int ll1, signed int ll2, signed int ll3)
{
  signed int i;
  signed int ***cub;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(ll1 + 1), sizeof(signed int **) /*8ul*/ );
  cub = (signed int ***)return_value_calloc_1;
  if(cub == ((signed int ***)NULL))
  {
    fprintf(stderr, "cannot allocate IntCub\n");
    exit(1);
  }

  i = 0;
  for( ; !(i >= ll1); i = i + 1)
    cub[(signed long int)i]=AllocateIntMtx(ll2, ll3);
  cub[(signed long int)ll1] = (signed int **)(void *)0;
  return cub;
}

// AllocateIntMtx
// file mtxutl.h line 25
signed int ** AllocateIntMtx(signed int ll1, signed int ll2)
{
  signed int i;
  signed int **mtx;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(ll1 + 1), sizeof(signed int *) /*8ul*/ );
  mtx = (signed int **)return_value_calloc_1;
  if(mtx == ((signed int **)NULL))
  {
    fprintf(stderr, "Allocation error( %d x %d int mtx )\n", ll1, ll2);
    exit(1);
  }

  if(!(ll2 == 0))
  {
    i = 0;
    for( ; !(i >= ll1); i = i + 1)
      mtx[(signed long int)i]=AllocateIntVec(ll2);
  }

  else
  {
    i = 0;
    for( ; !(i >= ll1); i = i + 1)
      mtx[(signed long int)i] = (signed int *)(void *)0;
  }
  mtx[(signed long int)ll1] = (signed int *)(void *)0;
  return mtx;
}

// AllocateIntVec
// file mtxutl.h line 22
signed int * AllocateIntVec(signed int ll1)
{
  signed int *vec;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)ll1, sizeof(signed int) /*4ul*/ );
  vec = (signed int *)return_value_calloc_1;
  if(vec == ((signed int *)NULL))
  {
    fprintf(stderr, "Allocation error( %d int vec )\n", ll1);
    exit(1);
  }

  return vec;
}

// AllocateShortMtx
// file mtxutl.c line 537
signed short int ** AllocateShortMtx(signed int ll1, signed int ll2)
{
  signed int i;
  signed short int **mtx;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)(ll1 + 1), sizeof(signed short int *) /*8ul*/ );
  mtx = (signed short int **)return_value_calloc_1;
  if(mtx == ((signed short int **)NULL))
  {
    fprintf(stderr, "Allocation error( %d x %d short mtx ) \n", ll1, ll2);
    exit(1);
  }

  i = 0;
  for( ; !(i >= ll1); i = i + 1)
    mtx[(signed long int)i]=AllocateShortVec(ll2);
  mtx[(signed long int)ll1] = (signed short int *)(void *)0;
  return mtx;
}

// AllocateShortVec
// file mtxutl.c line 519
signed short int * AllocateShortVec(signed int ll1)
{
  signed short int *vec;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)ll1, sizeof(signed short int) /*2ul*/ );
  vec = (signed short int *)return_value_calloc_1;
  if(vec == ((signed short int *)NULL))
  {
    fprintf(stderr, "Allocation error( %d short vec )\n", ll1);
    exit(1);
  }

  return vec;
}

// AllocateTmpSeqs
// file mltaln9.c line 5670
extern void AllocateTmpSeqs(char ***mseq2pt, char **mseq1pt, signed int locnlenmax)
{
  *mseq2pt=AllocateCharMtx(njob, locnlenmax + 1);
  *mseq1pt=AllocateCharVec(locnlenmax + 1);
}

// BLOSUMmtx
// file blosum.c line 6
extern void BLOSUMmtx(signed int n, double **matrix, double *freq, char *amino, char *amino_grp)
{
  char locaminod[27l] = { 'A', 'R', 'N', 'D', 'C', 'Q', 'E', 'G', 'H', 'I', 'L', 'K', 'M', 'F', 'P', 'S', 'T', 'W', 'Y', 'V', 'B', 'Z', 'X', '.', '-', 'J', 0 };
  char locgrpd[26l] = { (char)0, (char)3, (char)2, (char)2, (char)5, (char)2, (char)2, (char)0, (char)3, (char)1, (char)1, (char)3, (char)1, (char)4, (char)0, (char)0, (char)0, (char)4, (char)4, (char)1, (char)2, (char)2, (char)6, (char)6, (char)6, (char)1 };
  double freqd[20l] = { 0.077, 0.051, 0.043, 0.052, 0.020, 0.041, 0.062, 0.074, 0.023, 0.052, 0.091, 0.059, 0.024, 0.040, 0.051, 0.069, 0.059, 0.014, 0.032, 0.066 };
  double tmpmtx30[276l] = { (double)4, (double)-1, (double)8, (double)0, (double)-2, (double)8, (double)0, (double)-1, (double)1, (double)9, (double)-3, (double)-2, (double)-1, (double)-3, (double)17, (double)1, (double)3, (double)-1, (double)-1, (double)-2, (double)8, (double)0, (double)-1, (double)-1, (double)1, (double)1, (double)2, (double)6, (double)0, (double)-2, (double)0, (double)-1, (double)-4, (double)-2, (double)-2, (double)8, (double)-2, (double)-1, (double)-1, (double)-2, (double)-5, (double)0, (double)0, (double)-3, (double)14, (double)0, (double)-3, (double)0, (double)-4, (double)-2, (double)-2, (double)-3, (double)-1, (double)-2, (double)6, (double)-1, (double)-2, (double)-2, (double)-1, (double)0, (double)-2, (double)-1, (double)-2, (double)-1, (double)2, (double)4, (double)0, (double)1, (double)0, (double)0, (double)-3, (double)0, (double)2, (double)-1, (double)-2, (double)-2, (double)-2, (double)4, (double)1, (double)0, (double)0, (double)-3, (double)-2, (double)-1, (double)-1, (double)-2, (double)2, (double)1, (double)2, (double)2, (double)6, (double)-2, (double)-1, (double)-1, (double)-5, (double)-3, (double)-3, (double)-4, (double)-3, (double)-3, (double)0, (double)2, (double)-1, (double)-2, (double)10, (double)-1, (double)-1, (double)-3, (double)-1, (double)-3, (double)0, (double)1, (double)-1, (double)1, (double)-3, (double)-3, (double)1, (double)-4, (double)-4, (double)11, (double)1, (double)-1, (double)0, (double)0, (double)-2, (double)-1, (double)0, (double)0, (double)-1, (double)-1, (double)-2, (double)0, (double)-2, (double)-1, (double)-1, (double)4, (double)1, (double)-3, (double)1, (double)-1, (double)-2, (double)0, (double)-2, (double)-2, (double)-2, (double)0, (double)0, (double)-1, (double)0, (double)-2, (double)0, (double)2, (double)5, (double)-5, (double)0, (double)-7, (double)-4, (double)-2, (double)-1, (double)-1, (double)1, (double)-5, (double)-3, (double)-2, (double)-2, (double)-3, (double)1, (double)-3, (double)-3, (double)-5, (double)20, (double)-4, (double)0, (double)-4, (double)-1, (double)-6, (double)-1, (double)-2, (double)-3, (double)0, (double)-1, (double)3, (double)-1, (double)-1, (double)3, (double)-2, (double)-2, (double)-1, (double)5, (double)9, (double)1, (double)-1, (double)-2, (double)-2, (double)-2, (double)-3, (double)-3, (double)-3, (double)-3, (double)4, (double)1, (double)-2, (double)0, (double)1, (double)-4, (double)-1, (double)1, (double)-3, (double)1, (double)5, (double)0, (double)-2, (double)4, (double)5, (double)-2, (double)-1, (double)0, (double)0, (double)-2, (double)-2, (double)-1, (double)0, (double)-2, (double)-3, (double)-2, (double)0, (double)0, (double)-5, (double)-3, (double)-2, (double)5, (double)0, (double)0, (double)-1, (double)0, (double)0, (double)4, (double)5, (double)-2, (double)0, (double)-3, (double)-1, (double)1, (double)-1, (double)-4, (double)0, (double)-1, (double)-1, (double)-1, (double)-2, (double)-3, (double)0, (double)4, (double)0, (double)-1, (double)0, (double)-1, (double)-2, (double)0, (double)-1, (double)-1, (double)-1, (double)0, (double)0, (double)0, (double)0, (double)-1, (double)-1, (double)0, (double)0, (double)-2, (double)-1, (double)0, (double)-1, (double)0, (double)-1 };
  double tmpmtx45[210l] = { (double)5, (double)-2, (double)7, (double)-1, (double)0, (double)6, (double)-2, (double)-1, (double)2, (double)7, (double)-1, (double)-3, (double)-2, (double)-3, (double)12, (double)-1, (double)1, (double)0, (double)0, (double)-3, (double)6, (double)-1, (double)0, (double)0, (double)2, (double)-3, (double)2, (double)6, (double)0, (double)-2, (double)0, (double)-1, (double)-3, (double)-2, (double)-2, (double)7, (double)-2, (double)0, (double)1, (double)0, (double)-3, (double)1, (double)0, (double)-2, (double)10, (double)-1, (double)-3, (double)-2, (double)-4, (double)-3, (double)-2, (double)-3, (double)-4, (double)-3, (double)5, (double)-1, (double)-2, (double)-3, (double)-3, (double)-2, (double)-2, (double)-2, (double)-3, (double)-2, (double)2, (double)5, (double)-1, (double)3, (double)0, (double)0, (double)-3, (double)1, (double)1, (double)-2, (double)-1, (double)-3, (double)-3, (double)5, (double)-1, (double)-1, (double)-2, (double)-3, (double)-2, (double)0, (double)-2, (double)-2, (double)0, (double)2, (double)2, (double)-1, (double)6, (double)-2, (double)-2, (double)-2, (double)-4, (double)-2, (double)-4, (double)-3, (double)-3, (double)-2, (double)0, (double)1, (double)-3, (double)0, (double)8, (double)-1, (double)-2, (double)-2, (double)-1, (double)-4, (double)-1, (double)0, (double)-2, (double)-2, (double)-2, (double)-3, (double)-1, (double)-2, (double)-3, (double)9, (double)1, (double)-1, (double)1, (double)0, (double)-1, (double)0, (double)0, (double)0, (double)-1, (double)-2, (double)-3, (double)-1, (double)-2, (double)-2, (double)-1, (double)4, (double)0, (double)-1, (double)0, (double)-1, (double)-1, (double)-1, (double)-1, (double)-2, (double)-2, (double)-1, (double)-1, (double)-1, (double)-1, (double)-1, (double)-1, (double)2, (double)5, (double)-2, (double)-2, (double)-4, (double)-4, (double)-5, (double)-2, (double)-3, (double)-2, (double)-3, (double)-2, (double)-2, (double)-2, (double)-2, (double)1, (double)-3, (double)-4, (double)-3, (double)15, (double)-2, (double)-1, (double)-2, (double)-2, (double)-3, (double)-1, (double)-2, (double)-3, (double)2, (double)0, (double)0, (double)-1, (double)0, (double)3, (double)-3, (double)-2, (double)-1, (double)3, (double)8, (double)0, (double)-2, (double)-3, (double)-3, (double)-1, (double)-3, (double)-3, (double)-3, (double)-3, (double)3, (double)1, (double)-2, (double)1, (double)0, (double)-3, (double)-1, (double)0, (double)-3, (double)-1, (double)5 };
  double tmpmtx50[210l] = { (double)5, (double)-2, (double)7, (double)-1, (double)-1, (double)7, (double)-2, (double)-2, (double)2, (double)8, (double)-1, (double)-4, (double)-2, (double)-4, (double)13, (double)-1, (double)1, (double)0, (double)0, (double)-3, (double)7, (double)-1, (double)0, (double)0, (double)2, (double)-3, (double)2, (double)6, (double)0, (double)-3, (double)0, (double)-1, (double)-3, (double)-2, (double)-3, (double)8, (double)-2, (double)0, (double)1, (double)-1, (double)-3, (double)1, (double)0, (double)-2, (double)10, (double)-1, (double)-4, (double)-3, (double)-4, (double)-2, (double)-3, (double)-4, (double)-4, (double)-4, (double)5, (double)-2, (double)-3, (double)-4, (double)-4, (double)-2, (double)-2, (double)-3, (double)-4, (double)-3, (double)2, (double)5, (double)-1, (double)3, (double)0, (double)-1, (double)-3, (double)2, (double)1, (double)-2, (double)0, (double)-3, (double)-3, (double)6, (double)-1, (double)-2, (double)-2, (double)-4, (double)-2, (double)0, (double)-2, (double)-3, (double)-1, (double)2, (double)3, (double)-2, (double)7, (double)-3, (double)-3, (double)-4, (double)-5, (double)-2, (double)-4, (double)-3, (double)-4, (double)-1, (double)0, (double)1, (double)-4, (double)0, (double)8, (double)-1, (double)-3, (double)-2, (double)-1, (double)-4, (double)-1, (double)-1, (double)-2, (double)-2, (double)-3, (double)-4, (double)-1, (double)-3, (double)-4, (double)10, (double)1, (double)-1, (double)1, (double)0, (double)-1, (double)0, (double)-1, (double)0, (double)-1, (double)-3, (double)-3, (double)0, (double)-2, (double)-3, (double)-1, (double)5, (double)0, (double)-1, (double)0, (double)-1, (double)-1, (double)-1, (double)-1, (double)-2, (double)-2, (double)-1, (double)-1, (double)-1, (double)-1, (double)-2, (double)-1, (double)2, (double)5, (double)-3, (double)-3, (double)-4, (double)-5, (double)-5, (double)-1, (double)-3, (double)-3, (double)-3, (double)-3, (double)-2, (double)-3, (double)-1, (double)1, (double)-4, (double)-4, (double)-3, (double)15, (double)-2, (double)-1, (double)-2, (double)-3, (double)-3, (double)-1, (double)-2, (double)-3, (double)2, (double)-1, (double)-1, (double)-2, (double)0, (double)4, (double)-3, (double)-2, (double)-2, (double)2, (double)8, (double)0, (double)-3, (double)-3, (double)-4, (double)-1, (double)-3, (double)-3, (double)-4, (double)-4, (double)4, (double)1, (double)-3, (double)1, (double)-1, (double)-3, (double)-2, (double)0, (double)-3, (double)-1, (double)5 };
  double tmpmtx62[210l] = { (double)6, (double)-2, (double)8, (double)-2, (double)-1, (double)8, (double)-3, (double)-2, (double)2, (double)9, (double)-1, (double)-5, (double)-4, (double)-5, (double)13, (double)-1, (double)1, (double)0, (double)0, (double)-4, (double)8, (double)-1, (double)0, (double)0, (double)2, (double)-5, (double)3, (double)7, (double)0, (double)-3, (double)-1, (double)-2, (double)-4, (double)-3, (double)-3, (double)8, (double)-2, (double)0, (double)1, (double)-2, (double)-4, (double)1, (double)0, (double)-3, (double)11, (double)-2, (double)-4, (double)-5, (double)-5, (double)-2, (double)-4, (double)-5, (double)-6, (double)-5, (double)6, (double)-2, (double)-3, (double)-5, (double)-5, (double)-2, (double)-3, (double)-4, (double)-5, (double)-4, (double)2, (double)6, (double)-1, (double)3, (double)0, (double)-1, (double)-5, (double)2, (double)1, (double)-2, (double)-1, (double)-4, (double)-4, (double)7, (double)-1, (double)-2, (double)-3, (double)-5, (double)-2, (double)-1, (double)-3, (double)-4, (double)-2, (double)2, (double)3, (double)-2, (double)8, (double)-3, (double)-4, (double)-4, (double)-5, (double)-4, (double)-5, (double)-5, (double)-5, (double)-2, (double)0, (double)1, (double)-5, (double)0, (double)9, (double)-1, (double)-3, (double)-3, (double)-2, (double)-4, (double)-2, (double)-2, (double)-3, (double)-3, (double)-4, (double)-4, (double)-2, (double)-4, (double)-5, (double)11, (double)2, (double)-1, (double)1, (double)0, (double)-1, (double)0, (double)0, (double)0, (double)-1, (double)-4, (double)-4, (double)0, (double)-2, (double)-4, (double)-1, (double)6, (double)0, (double)-2, (double)0, (double)-2, (double)-1, (double)-1, (double)-1, (double)-2, (double)-3, (double)-1, (double)-2, (double)-1, (double)-1, (double)-3, (double)-2, (double)2, (double)7, (double)-4, (double)-4, (double)-6, (double)-6, (double)-3, (double)-3, (double)-4, (double)-4, (double)-4, (double)-4, (double)-2, (double)-4, (double)-2, (double)1, (double)-5, (double)-4, (double)-4, (double)16, (double)-3, (double)-3, (double)-3, (double)-5, (double)-4, (double)-2, (double)-3, (double)-5, (double)3, (double)-2, (double)-2, (double)-3, (double)-1, (double)4, (double)-4, (double)-3, (double)-2, (double)3, (double)10, (double)0, (double)-4, (double)-4, (double)-5, (double)-1, (double)-3, (double)-4, (double)-5, (double)-5, (double)4, (double)1, (double)-3, (double)1, (double)-1, (double)-4, (double)-2, (double)0, (double)-4, (double)-2, (double)6 };
  double tmpmtx80[210l] = { (double)7, (double)-3, (double)9, (double)-3, (double)-1, (double)9, (double)-3, (double)-3, (double)2, (double)10, (double)-1, (double)-6, (double)-5, (double)-7, (double)13, (double)-2, (double)1, (double)0, (double)-1, (double)-5, (double)9, (double)-2, (double)-1, (double)-1, (double)2, (double)-7, (double)3, (double)8, (double)0, (double)-4, (double)-1, (double)-3, (double)-6, (double)-4, (double)-4, (double)9, (double)-3, (double)0, (double)1, (double)-2, (double)-7, (double)1, (double)0, (double)-4, (double)12, (double)-3, (double)-5, (double)-6, (double)-7, (double)-2, (double)-5, (double)-6, (double)-7, (double)-6, (double)7, (double)-3, (double)-4, (double)-6, (double)-7, (double)-3, (double)-4, (double)-6, (double)-7, (double)-5, (double)2, (double)6, (double)-1, (double)3, (double)0, (double)-2, (double)-6, (double)2, (double)1, (double)-3, (double)-1, (double)-5, (double)-4, (double)8, (double)-2, (double)-3, (double)-4, (double)-6, (double)-3, (double)-1, (double)-4, (double)-5, (double)-4, (double)2, (double)3, (double)-3, (double)9, (double)-4, (double)-5, (double)-6, (double)-6, (double)-4, (double)-5, (double)-6, (double)-6, (double)-2, (double)-1, (double)0, (double)-5, (double)0, (double)10, (double)-1, (double)-3, (double)-4, (double)-3, (double)-6, (double)-3, (double)-2, (double)-5, (double)-4, (double)-5, (double)-5, (double)-2, (double)-4, (double)-6, (double)12, (double)2, (double)-2, (double)1, (double)-1, (double)-2, (double)-1, (double)-1, (double)-1, (double)-2, (double)-4, (double)-4, (double)-1, (double)-3, (double)-4, (double)-2, (double)7, (double)0, (double)-2, (double)0, (double)-2, (double)-2, (double)-1, (double)-2, (double)-3, (double)-3, (double)-2, (double)-3, (double)-1, (double)-1, (double)-4, (double)-3, (double)2, (double)8, (double)-5, (double)-5, (double)-7, (double)-8, (double)-5, (double)-4, (double)-6, (double)-6, (double)-4, (double)-5, (double)-4, (double)-6, (double)-3, (double)0, (double)-7, (double)-6, (double)-5, (double)16, (double)-4, (double)-4, (double)-4, (double)-6, (double)-5, (double)-3, (double)-5, (double)-6, (double)3, (double)-3, (double)-2, (double)-4, (double)-3, (double)4, (double)-6, (double)-3, (double)-3, (double)3, (double)11, (double)-1, (double)-4, (double)-5, (double)-6, (double)-2, (double)-4, (double)-4, (double)-6, (double)-5, (double)4, (double)1, (double)-4, (double)1, (double)-2, (double)-4, (double)-3, (double)0, (double)-5, (double)-3, (double)7 };
  double tmpmtx90[210l] = { (double)5, (double)-2, (double)6, (double)-2, (double)-1, (double)7, (double)-3, (double)-3, (double)1, (double)7, (double)-1, (double)-5, (double)-4, (double)-5, (double)9, (double)-1, (double)1, (double)0, (double)-1, (double)-4, (double)7, (double)-1, (double)-1, (double)-1, (double)1, (double)-6, (double)2, (double)6, (double)0, (double)-3, (double)-1, (double)-2, (double)-4, (double)-3, (double)-3, (double)6, (double)-2, (double)0, (double)0, (double)-2, (double)-5, (double)1, (double)-1, (double)-3, (double)8, (double)-2, (double)-4, (double)-4, (double)-5, (double)-2, (double)-4, (double)-4, (double)-5, (double)-4, (double)5, (double)-2, (double)-3, (double)-4, (double)-5, (double)-2, (double)-3, (double)-4, (double)-5, (double)-4, (double)1, (double)5, (double)-1, (double)2, (double)0, (double)-1, (double)-4, (double)1, (double)0, (double)-2, (double)-1, (double)-4, (double)-3, (double)6, (double)-2, (double)-2, (double)-3, (double)-4, (double)-2, (double)0, (double)-3, (double)-4, (double)-3, (double)1, (double)2, (double)-2, (double)7, (double)-3, (double)-4, (double)-4, (double)-5, (double)-3, (double)-4, (double)-5, (double)-5, (double)-2, (double)-1, (double)0, (double)-4, (double)-1, (double)7, (double)-1, (double)-3, (double)-3, (double)-3, (double)-4, (double)-2, (double)-2, (double)-3, (double)-3, (double)-4, (double)-4, (double)-2, (double)-3, (double)-4, (double)8, (double)1, (double)-1, (double)0, (double)-1, (double)-2, (double)-1, (double)-1, (double)-1, (double)-2, (double)-3, (double)-3, (double)-1, (double)-2, (double)-3, (double)-2, (double)5, (double)0, (double)-2, (double)0, (double)-2, (double)-2, (double)-1, (double)-1, (double)-3, (double)-2, (double)-1, (double)-2, (double)-1, (double)-1, (double)-3, (double)-2, (double)1, (double)6, (double)-4, (double)-4, (double)-5, (double)-6, (double)-4, (double)-3, (double)-5, (double)-4, (double)-3, (double)-4, (double)-3, (double)-5, (double)-2, (double)0, (double)-5, (double)-4, (double)-4, (double)11, (double)-3, (double)-3, (double)-3, (double)-4, (double)-4, (double)-3, (double)-4, (double)-5, (double)1, (double)-2, (double)-2, (double)-3, (double)-2, (double)3, (double)-4, (double)-3, (double)-2, (double)2, (double)8, (double)-1, (double)-3, (double)-4, (double)-5, (double)-2, (double)-3, (double)-3, (double)-5, (double)-4, (double)3, (double)0, (double)-3, (double)0, (double)-2, (double)-3, (double)-2, (double)-1, (double)-3, (double)-3, (double)5 };
  double tmpmtx100[210l] = { (double)8, (double)-3, (double)10, (double)-4, (double)-2, (double)11, (double)-5, (double)-5, (double)1, (double)10, (double)-2, (double)-8, (double)-5, (double)-8, (double)14, (double)-2, (double)0, (double)-1, (double)-2, (double)-7, (double)11, (double)-3, (double)-2, (double)-2, (double)2, (double)-9, (double)2, (double)10, (double)-1, (double)-6, (double)-2, (double)-4, (double)-7, (double)-5, (double)-6, (double)9, (double)-4, (double)-1, (double)0, (double)-3, (double)-8, (double)1, (double)-2, (double)-6, (double)13, (double)-4, (double)-7, (double)-7, (double)-8, (double)-3, (double)-6, (double)-7, (double)-9, (double)-7, (double)8, (double)-4, (double)-6, (double)-7, (double)-8, (double)-5, (double)-5, (double)-7, (double)-8, (double)-6, (double)2, (double)8, (double)-2, (double)3, (double)-1, (double)-3, (double)-8, (double)2, (double)0, (double)-5, (double)-3, (double)-6, (double)-6, (double)10, (double)-3, (double)-4, (double)-5, (double)-8, (double)-4, (double)-2, (double)-5, (double)-7, (double)-5, (double)1, (double)3, (double)-4, (double)12, (double)-5, (double)-6, (double)-7, (double)-8, (double)-4, (double)-6, (double)-8, (double)-8, (double)-4, (double)-2, (double)0, (double)-6, (double)-1, (double)11, (double)-2, (double)-5, (double)-5, (double)-5, (double)-8, (double)-4, (double)-4, (double)-6, (double)-5, (double)-7, (double)-7, (double)-3, (double)-5, (double)-7, (double)12, (double)1, (double)-3, (double)0, (double)-2, (double)-3, (double)-2, (double)-2, (double)-2, (double)-3, (double)-5, (double)-6, (double)-2, (double)-4, (double)-5, (double)-3, (double)9, (double)-1, (double)-3, (double)-1, (double)-4, (double)-3, (double)-3, (double)-3, (double)-5, (double)-4, (double)-3, (double)-4, (double)-3, (double)-2, (double)-5, (double)-4, (double)2, (double)9, (double)-6, (double)-7, (double)-8, (double)-10, (double)-7, (double)-5, (double)-8, (double)-7, (double)-5, (double)-6, (double)-5, (double)-8, (double)-4, (double)0, (double)-8, (double)-7, (double)-7, (double)17, (double)-5, (double)-5, (double)-5, (double)-7, (double)-6, (double)-4, (double)-7, (double)-8, (double)1, (double)-4, (double)-4, (double)-5, (double)-5, (double)4, (double)-7, (double)-5, (double)-5, (double)2, (double)12, (double)-2, (double)-6, (double)-7, (double)-8, (double)-3, (double)-5, (double)-5, (double)-8, (double)-7, (double)4, (double)0, (double)-5, (double)0, (double)-3, (double)-6, (double)-4, (double)-1, (double)-5, (double)-5, (double)8 };
  double tmpmtx0[210l] = { 2.4, -0.6, 4.7, -0.3, 0.3, 3.8, -0.3, -0.3, 2.2, 4.7, 0.5, -2.2, -1.8, -3.2, 11.5, -0.2, 1.5, 0.7, 0.9, -2.4, 2.7, 0.0, 0.4, 0.9, 2.7, -3.0, 1.7, 3.6, 0.5, -1.0, 0.4, 0.1, -2.0, -1.0, -0.8, 6.6, -0.8, 0.6, 1.2, 0.4, -1.3, 1.2, 0.4, -1.4, 6.0, -0.8, -2.4, -2.8, -3.8, -1.1, -1.9, -2.7, -4.5, -2.2, 4.0, -1.2, -2.2, -3.0, -4.0, -1.5, -1.6, -2.8, -4.4, -1.9, 2.8, 4.0, -0.4, 2.7, 0.8, 0.5, -2.8, 1.5, 1.2, -1.1, 0.6, -2.1, -2.1, 3.2, -0.7, -1.7, -2.2, -3.0, -0.9, -1.0, -2.0, -3.5, -1.3, 2.5, 2.8, -1.4, 4.3, -2.3, -3.2, -3.1, -4.5, -0.8, -2.6, -3.9, -5.2, -0.1, 1.0, 2.0, -3.3, 1.6, 7.0, 0.3, -0.9, -0.9, -0.7, -3.1, -0.2, -0.5, -1.6, -1.1, -2.6, -2.3, -0.6, -2.4, -3.8, 7.6, 1.1, -0.2, 0.9, 0.5, 0.1, 0.2, 0.2, 0.4, -0.2, -1.8, -2.1, 0.1, -1.4, -2.8, 0.4, 2.2, 0.6, -0.2, 0.5, 0.0, -0.5, 0.0, -0.1, -1.1, -0.3, -0.6, -1.3, 0.1, -0.6, -2.2, 0.1, 1.5, 2.5, -3.6, -1.6, -3.6, -5.2, -1.0, -2.7, -4.3, -4.0, -0.8, -1.8, -0.7, -3.5, -1.0, 3.6, -5.0, -3.3, -3.5, 14.2, -2.2, -1.8, -1.4, -2.8, -0.5, -1.7, -2.7, -4.0, 2.2, -0.7, 0.0, -2.1, -0.2, 5.1, -3.1, -1.9, -1.9, 4.1, 7.8, 0.1, -2.0, -2.2, -2.9, 0.0, -1.5, -1.9, -3.3, -2.0, 3.1, 1.8, -1.7, 1.6, 0.1, -1.8, -1.0, 0.0, -2.6, -1.1, 3.4 };
  signed int i;
  signed int j;
  signed int count;
  double av;
  double *tmpmtx;
  if(n == 30)
    tmpmtx = tmpmtx30;

  else
    if(n == 45)
      tmpmtx = tmpmtx45;

    else
      if(n == 50)
        tmpmtx = tmpmtx50;

      else
        if(n == 62)
          tmpmtx = tmpmtx62;

        else
          if(n == 80)
            tmpmtx = tmpmtx80;

          else
            if(n == 90)
              tmpmtx = tmpmtx90;

            else
              if(n == 100)
                tmpmtx = tmpmtx100;

              else
                if(n == 0)
                  tmpmtx = tmpmtx0;

                else
                  if(n == -1)
                    tmpmtx=loadaamtx();

                  else
                  {
                    fprintf(stderr, "blosum %d ?\n", n);
                    exit(1);
                  }
  count = 0;
  i = 0;
  signed int tmp_post_1;
  for( ; !(i >= 20); i = i + 1)
  {
    j = 0;
    for( ; i >= j; j = j + 1)
    {
      tmp_post_1 = count;
      count = count + 1;
      matrix[(signed long int)j][(signed long int)i] = (double)tmpmtx[(signed long int)tmp_post_1];
      matrix[(signed long int)i][(signed long int)j] = matrix[(signed long int)j][(signed long int)i];
    }
  }
  _Bool tmp_if_expr_2;
  if(n == -1)
    tmp_if_expr_2 = IEEE_FLOAT_NOTEQUAL(tmpmtx[(signed long int)400], -1.0) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
  {
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      freq[(signed long int)i] = tmpmtx[(signed long int)(400 + i)];
    av = 0.0;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      av = av + freq[(signed long int)i];
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      freq[(signed long int)i] = freq[(signed long int)i] / av;
  }

  else
  {
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      freq[(signed long int)i] = freqd[(signed long int)i];
  }
  i = 0;
  for( ; !(i >= 26); i = i + 1)
    amino[(signed long int)i] = locaminod[(signed long int)i];
  i = 0;
  for( ; !(i >= 26); i = i + 1)
    amino_grp[(signed long int)(signed int)amino[(signed long int)i]] = locgrpd[(signed long int)i];
}

// DSPscore
// file mltaln9.c line 6451
extern double DSPscore(signed int s, char **seq)
{
  signed int i;
  signed int j;
  signed int k;
  double c;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score;
  double tmpscore;
  char *mseq1;
  char *mseq2;
  score = 0.0;
  c = 0.0;
  i = 0;
  for( ; !(i >= s + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= s); j = j + 1)
    {
      mseq1 = seq[(signed long int)i];
      mseq2 = seq[(signed long int)j];
      tmpscore = 0.0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        if((signed int)mseq1[(signed long int)k] == 45)
        {
          if((signed int)mseq2[(signed long int)k] == 45)
            goto __CPROVER_DUMP_L10;

        }

        tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
        if((signed int)mseq1[(signed long int)k] == 45)
        {
          tmpscore = tmpscore + (double)penalty;
          do
          {
            k = k + 1;
            if(!((signed int)mseq1[(signed long int)k] == 45))
              break;

            tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
          }
          while((_Bool)1);
          k = k - 1;
          if(!(len + -2 >= k))
            break;

        }

        else
          if((signed int)mseq2[(signed long int)k] == 45)
          {
            tmpscore = tmpscore + (double)penalty;
            do
            {
              k = k + 1;
              if(!((signed int)mseq2[(signed long int)k] == 45))
                break;

              tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
            }
            while((_Bool)1);
            k = k - 1;
            if(!(len + -2 >= k))
              break;

          }


      __CPROVER_DUMP_L10:
        ;
      }
      score = score + (double)tmpscore;
    }
  }
  return score;
}

// ErrorExit
// file io.c line 935
extern void ErrorExit(char *message)
{
  fprintf(stderr, "%s\n", message);
  exit(1);
}

// FRead
// file io.c line 1077
extern void FRead(struct _IO_FILE *fp, char (*name)[256l], signed int *nlen, char **seq)
{
  signed int i;
  signed int j;
  char b[256l];
  fgets(b, 256 - 1, fp);
  char *return_value_strstr_7;
  return_value_strstr_7=strstr(b, "onnet");
  char *return_value_strstr_6;
  char *return_value_strstr_5;
  char *return_value_strstr_4;
  char *return_value_strstr_1;
  _Bool tmp_if_expr_3;
  char *return_value_strstr_2;
  if(!(return_value_strstr_7 == ((char *)NULL)))
    scoremtx = 1;

  else
  {
    return_value_strstr_6=strstr(b, "DnA");
    if(!(return_value_strstr_6 == ((char *)NULL)))
    {
      scoremtx = -1;
      upperCase = -1;
    }

    else
    {
      return_value_strstr_5=strstr(b, "dna");
      if(!(return_value_strstr_5 == ((char *)NULL)))
      {
        scoremtx = -1;
        upperCase = 0;
      }

      else
      {
        return_value_strstr_4=strstr(b, "DNA");
        if(!(return_value_strstr_4 == ((char *)NULL)))
        {
          scoremtx = -1;
          upperCase = 1;
        }

        else
        {
          return_value_strstr_1=strstr(b, "M-Y");
          if(!(return_value_strstr_1 == ((char *)NULL)))
            tmp_if_expr_3 = (_Bool)1;

          else
          {
            return_value_strstr_2=strstr(b, "iyata");
            tmp_if_expr_3 = return_value_strstr_2 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_3)
            scoremtx = 2;

          else
            scoremtx = 0;
        }
      }
    }
  }
  geta2 = 0.001;
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    getaline_fp_eof_new(b, 256 - 1, fp);
    strcpy(name[(signed long int)i], b);
    fgets(b, 256 - 1, fp);
    nlen[(signed long int)i]=atoi(b);
    seq[(signed long int)i][(signed long int)0] = (char)0;
    if(!(nlen[(signed long int)i] == 0))
    {
      j = 0;
      for( ; (nlen[(signed long int)i] + -1) / 60 >= j; j = j + 1)
      {
        getaline_fp_eof_new(b, 256 - 1, fp);
        strcat(seq[(signed long int)i], b);
      }
    }

    seq[(signed long int)i][(signed long int)nlen[(signed long int)i]] = (char)0;
  }
  if(scoremtx == -1 && !(upperCase == -1))
    seqLower(njob, seq);

}

// FreeCharCub
// file mtxutl.c line 335
void FreeCharCub(char ***cub)
{
  signed int i = 0;
  for( ; !(cub[(signed long int)i] == ((char **)NULL)); i = i + 1)
    FreeCharMtx(cub[(signed long int)i]);
  free((void *)cub);
}

// FreeCharHcu
// file mtxutl.c line 379
void FreeCharHcu(char ****hcu)
{
  signed int i = 0;
  for( ; !(hcu[(signed long int)i] == ((char ***)NULL)); i = i + 1)
    FreeCharCub(hcu[(signed long int)i]);
  free((void *)(char *)hcu);
}

// FreeCharMtx
// file mtxutl.c line 116
void FreeCharMtx(char **mtx)
{
  signed int i = 0;
  for( ; !(mtx[(signed long int)i] == ((char *)NULL)); i = i + 1)
    free((void *)mtx[(signed long int)i]);
  free((void *)mtx);
}

// FreeCommonIP
// file mltaln9.c line 9580
extern void FreeCommonIP()
{
  if(!(commonIP == ((signed int **)NULL)))
    FreeIntMtx(commonIP);

  commonIP = (signed int **)(void *)0;
  commonAlloc1 = 0;
  commonAlloc2 = 0;
}

// FreeDoubleCub
// file mtxutl.c line 507
void FreeDoubleCub(double ***cub)
{
  signed int i = 0;
  for( ; !(cub[(signed long int)i] == ((double **)NULL)); i = i + 1)
    FreeDoubleMtx(cub[(signed long int)i]);
  free((void *)cub);
}

// FreeDoubleMtx
// file mtxutl.h line 38
void FreeDoubleMtx(double **mtx)
{
  signed int i = 0;
  for( ; !(mtx[(signed long int)i] == ((double *)NULL)); i = i + 1)
    FreeDoubleVec(mtx[(signed long int)i]);
  free((void *)mtx);
}

// FreeDoubleVec
// file mtxutl.h line 35
void FreeDoubleVec(double *vec)
{
  free((void *)vec);
}

// FreeFloatCub
// file mtxutl.c line 477
void FreeFloatCub(double ***cub)
{
  signed int i = 0;
  for( ; !(cub[(signed long int)i] == ((double **)NULL)); i = i + 1)
    FreeFloatMtx(cub[(signed long int)i]);
  free((void *)cub);
}

// FreeFloatHalfMtx
// file mtxutl.c line 201
void FreeFloatHalfMtx(double **mtx, signed int n)
{
  signed int i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    if(!(mtx[(signed long int)i] == ((double *)NULL)))
      FreeFloatVec(mtx[(signed long int)i]);

    mtx[(signed long int)i] = (double *)(void *)0;
  }
  free((void *)mtx);
}

// FreeFloatMtx
// file mtxutl.c line 211
void FreeFloatMtx(double **mtx)
{
  signed int i = 0;
  for( ; !(mtx[(signed long int)i] == ((double *)NULL)); i = i + 1)
  {
    if(!(mtx[(signed long int)i] == ((double *)NULL)))
      FreeFloatVec(mtx[(signed long int)i]);

    mtx[(signed long int)i] = (double *)(void *)0;
  }
  free((void *)mtx);
}

// FreeFloatTri
// file mtxutl.c line 260
void FreeFloatTri(double **tri)
{
  signed int i = 0;
  for( ; !(tri[(signed long int)i] == ((double *)NULL)); i = i + 1)
    free((void *)tri[(signed long int)i]);
  free((void *)tri);
}

// FreeFloatVec
// file mtxutl.c line 145
void FreeFloatVec(double *vec)
{
  free((void *)(char *)vec);
}

// FreeIntCub
// file mtxutl.c line 420
void FreeIntCub(signed int ***cub)
{
  signed int i = 0;
  for( ; !(cub[(signed long int)i] == ((signed int **)NULL)); i = i + 1)
  {
    if(!(cub[(signed long int)i] == ((signed int **)NULL)))
      FreeIntMtx(cub[(signed long int)i]);

    cub[(signed long int)i] = (signed int **)(void *)0;
  }
  free((void *)cub);
}

// FreeIntMtx
// file mtxutl.h line 26
void FreeIntMtx(signed int **mtx)
{
  signed int i = 0;
  for( ; !(mtx[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
  {
    if(!(mtx[(signed long int)i] == ((signed int *)NULL)))
      free((void *)(char *)mtx[(signed long int)i]);

    mtx[(signed long int)i] = (signed int *)(void *)0;
  }
  free((void *)(char *)mtx);
}

// FreeIntVec
// file mtxutl.c line 235
void FreeIntVec(signed int *vec)
{
  free((void *)(char *)vec);
}

// FreeLocalHomTable
// file io.c line 4628
extern void FreeLocalHomTable(struct _LocalHom **localhomtable, signed int n)
{
  signed int i;
  signed int j;
  struct _LocalHom *ppp;
  struct _LocalHom *tmpptr;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    j = 0;
    for( ; !(j >= n); j = j + 1)
    {
      tmpptr = localhomtable[(signed long int)i] + (signed long int)j;
      ppp = tmpptr->next;
      for( ; !(tmpptr == ((struct _LocalHom *)NULL)); tmpptr = ppp)
      {
        ppp = tmpptr->next;
        if(!(tmpptr == localhomtable[(signed long int)i] + (signed long int)j))
          free((void *)tmpptr);

      }
    }
    free((void *)localhomtable[(signed long int)i]);
  }
  free((void *)localhomtable);
}

// FreeLocalHomTable_one
// file io.c line 4588
extern void FreeLocalHomTable_one(struct _LocalHom **localhomtable, signed int n, signed int m)
{
  signed int i;
  signed int j;
  struct _LocalHom *ppp;
  struct _LocalHom *tmpptr;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    j = 0;
    for( ; !(j >= m); j = j + 1)
    {
      tmpptr = localhomtable[(signed long int)i] + (signed long int)j;
      ppp = tmpptr->next;
      for( ; !(tmpptr == ((struct _LocalHom *)NULL)); tmpptr = ppp)
      {
        ppp = tmpptr->next;
        if(!(tmpptr == localhomtable[(signed long int)i] + (signed long int)j))
          free((void *)tmpptr);

      }
    }
    free((void *)localhomtable[(signed long int)i]);
  }
  free((void *)localhomtable);
}

// FreeLocalHomTable_part
// file io.c line 4483
extern void FreeLocalHomTable_part(struct _LocalHom **localhomtable, signed int n, signed int m)
{
  signed int i;
  signed int j;
  struct _LocalHom *ppp;
  struct _LocalHom *tmpptr;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    j = 0;
    for( ; !(j >= m); j = j + 1)
    {
      tmpptr = localhomtable[(signed long int)i] + (signed long int)j;
      ppp = tmpptr->next;
      for( ; !(tmpptr == ((struct _LocalHom *)NULL)); tmpptr = ppp)
      {
        ppp = tmpptr->next;
        if(!(tmpptr == localhomtable[(signed long int)i] + (signed long int)j))
          free((void *)tmpptr);

      }
    }
    free((void *)localhomtable[(signed long int)i]);
  }
  free((void *)localhomtable);
}

// FreeLocalHomTable_two
// file io.c line 4522
extern void FreeLocalHomTable_two(struct _LocalHom **localhomtable, signed int n, signed int m)
{
  signed int i;
  signed int j;
  struct _LocalHom *ppp;
  struct _LocalHom *tmpptr;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    j = 0;
    for( ; !(j >= m); j = j + 1)
    {
      tmpptr = localhomtable[(signed long int)i] + (signed long int)j;
      ppp = tmpptr->next;
      for( ; !(tmpptr == ((struct _LocalHom *)NULL)); tmpptr = ppp)
      {
        ppp = tmpptr->next;
        if(!(tmpptr == localhomtable[(signed long int)i] + (signed long int)j))
          free((void *)tmpptr);

      }
    }
    free((void *)localhomtable[(signed long int)i]);
  }
  i = n;
  for( ; !(i >= m + n); i = i + 1)
  {
    j = 0;
    for( ; !(j >= n); j = j + 1)
    {
      tmpptr = localhomtable[(signed long int)i] + (signed long int)j;
      ppp = tmpptr->next;
      for( ; !(tmpptr == ((struct _LocalHom *)NULL)); tmpptr = ppp)
      {
        ppp = tmpptr->next;
        if(!(tmpptr == localhomtable[(signed long int)i] + (signed long int)j))
          free((void *)tmpptr);

      }
    }
    free((void *)localhomtable[(signed long int)i]);
  }
  free((void *)localhomtable);
}

// FreeShortMtx
// file mtxutl.c line 557
void FreeShortMtx(signed short int **mtx)
{
  signed int i = 0;
  for( ; !(mtx[(signed long int)i] == ((signed short int *)NULL)); i = i + 1)
    free((void *)(char *)mtx[(signed long int)i]);
  free((void *)(char *)mtx);
}

// FreeShortVec
// file mtxutl.c line 532
void FreeShortVec(signed short int *vec)
{
  free((void *)(char *)vec);
}

// FreeTmpSeqs
// file mltaln9.c line 5676
extern void FreeTmpSeqs(char **mseq2, char *mseq1)
{
  FreeCharMtx(mseq2);
  free((void *)(char *)mseq1);
}

// JTTmtx
// file JTT.c line 9
extern void JTTmtx(double **rsr, double *freq, char *locamino, char *locgrp, signed int isTM)
{
  signed int i;
  signed int j;
  double r[20l][20l];
  char locamino0[27l] = { 'A', 'R', 'N', 'D', 'C', 'Q', 'E', 'G', 'H', 'I', 'L', 'K', 'M', 'F', 'P', 'S', 'T', 'W', 'Y', 'V', 'B', 'Z', 'X', '.', '-', 'J', 0 };
  char locgrp0[26l] = { (char)0, (char)3, (char)2, (char)2, (char)5, (char)2, (char)2, (char)0, (char)3, (char)1, (char)1, (char)3, (char)1, (char)4, (char)0, (char)0, (char)0, (char)4, (char)4, (char)1, (char)2, (char)2, (char)6, (char)6, (char)6, (char)1 };
  double freq0[20l] = { 0.077, 0.051, 0.043, 0.052, 0.020, 0.041, 0.062, 0.074, 0.023, 0.052, 0.091, 0.059, 0.024, 0.040, 0.051, 0.069, 0.059, 0.014, 0.032, 0.066 };
  double freq0_TM[20l] = { 0.1051, 0.0157, 0.0185, 0.0089, 0.0219, 0.0141, 0.0097, 0.0758, 0.0168, 0.1188, 0.1635, 0.0112, 0.0333, 0.0777, 0.0260, 0.0568, 0.0523, 0.0223, 0.0324, 0.1195 };
  r[(signed long int)1][(signed long int)0] = (double)247;
  r[(signed long int)2][(signed long int)0] = (double)216;
  r[(signed long int)2][(signed long int)1] = (double)116;
  r[(signed long int)3][(signed long int)0] = (double)386;
  r[(signed long int)3][(signed long int)1] = (double)48;
  r[(signed long int)3][(signed long int)2] = (double)1433;
  r[(signed long int)4][(signed long int)0] = (double)106;
  r[(signed long int)4][(signed long int)1] = (double)125;
  r[(signed long int)4][(signed long int)2] = (double)32;
  r[(signed long int)4][(signed long int)3] = (double)13;
  r[(signed long int)5][(signed long int)0] = (double)208;
  r[(signed long int)5][(signed long int)1] = (double)750;
  r[(signed long int)5][(signed long int)2] = (double)159;
  r[(signed long int)5][(signed long int)3] = (double)130;
  r[(signed long int)5][(signed long int)4] = (double)9;
  r[(signed long int)6][(signed long int)0] = (double)600;
  r[(signed long int)6][(signed long int)1] = (double)119;
  r[(signed long int)6][(signed long int)2] = (double)180;
  r[(signed long int)6][(signed long int)3] = (double)2914;
  r[(signed long int)6][(signed long int)4] = (double)8;
  r[(signed long int)6][(signed long int)5] = (double)1027;
  r[(signed long int)7][(signed long int)0] = (double)1183;
  r[(signed long int)7][(signed long int)1] = (double)614;
  r[(signed long int)7][(signed long int)2] = (double)291;
  r[(signed long int)7][(signed long int)3] = (double)577;
  r[(signed long int)7][(signed long int)4] = (double)98;
  r[(signed long int)7][(signed long int)5] = (double)84;
  r[(signed long int)7][(signed long int)6] = (double)610;
  r[(signed long int)8][(signed long int)0] = (double)46;
  r[(signed long int)8][(signed long int)1] = (double)446;
  r[(signed long int)8][(signed long int)2] = (double)466;
  r[(signed long int)8][(signed long int)3] = (double)144;
  r[(signed long int)8][(signed long int)4] = (double)40;
  r[(signed long int)8][(signed long int)5] = (double)635;
  r[(signed long int)8][(signed long int)6] = (double)41;
  r[(signed long int)8][(signed long int)7] = (double)41;
  r[(signed long int)9][(signed long int)0] = (double)173;
  r[(signed long int)9][(signed long int)1] = (double)76;
  r[(signed long int)9][(signed long int)2] = (double)130;
  r[(signed long int)9][(signed long int)3] = (double)37;
  r[(signed long int)9][(signed long int)4] = (double)19;
  r[(signed long int)9][(signed long int)5] = (double)20;
  r[(signed long int)9][(signed long int)6] = (double)43;
  r[(signed long int)9][(signed long int)7] = (double)25;
  r[(signed long int)9][(signed long int)8] = (double)26;
  r[(signed long int)10][(signed long int)0] = (double)257;
  r[(signed long int)10][(signed long int)1] = (double)205;
  r[(signed long int)10][(signed long int)2] = (double)63;
  r[(signed long int)10][(signed long int)3] = (double)34;
  r[(signed long int)10][(signed long int)4] = (double)36;
  r[(signed long int)10][(signed long int)5] = (double)314;
  r[(signed long int)10][(signed long int)6] = (double)65;
  r[(signed long int)10][(signed long int)7] = (double)56;
  r[(signed long int)10][(signed long int)8] = (double)134;
  r[(signed long int)10][(signed long int)9] = (double)1324;
  r[(signed long int)11][(signed long int)0] = (double)200;
  r[(signed long int)11][(signed long int)1] = (double)2348;
  r[(signed long int)11][(signed long int)2] = (double)758;
  r[(signed long int)11][(signed long int)3] = (double)102;
  r[(signed long int)11][(signed long int)4] = (double)7;
  r[(signed long int)11][(signed long int)5] = (double)858;
  r[(signed long int)11][(signed long int)6] = (double)754;
  r[(signed long int)11][(signed long int)7] = (double)142;
  r[(signed long int)11][(signed long int)8] = (double)85;
  r[(signed long int)11][(signed long int)9] = (double)75;
  r[(signed long int)11][(signed long int)10] = (double)94;
  r[(signed long int)12][(signed long int)0] = (double)100;
  r[(signed long int)12][(signed long int)1] = (double)61;
  r[(signed long int)12][(signed long int)2] = (double)39;
  r[(signed long int)12][(signed long int)3] = (double)27;
  r[(signed long int)12][(signed long int)4] = (double)23;
  r[(signed long int)12][(signed long int)5] = (double)52;
  r[(signed long int)12][(signed long int)6] = (double)30;
  r[(signed long int)12][(signed long int)7] = (double)27;
  r[(signed long int)12][(signed long int)8] = (double)21;
  r[(signed long int)12][(signed long int)9] = (double)704;
  r[(signed long int)12][(signed long int)10] = (double)974;
  r[(signed long int)12][(signed long int)11] = (double)103;
  r[(signed long int)13][(signed long int)0] = (double)51;
  r[(signed long int)13][(signed long int)1] = (double)16;
  r[(signed long int)13][(signed long int)2] = (double)15;
  r[(signed long int)13][(signed long int)3] = (double)8;
  r[(signed long int)13][(signed long int)4] = (double)66;
  r[(signed long int)13][(signed long int)5] = (double)9;
  r[(signed long int)13][(signed long int)6] = (double)13;
  r[(signed long int)13][(signed long int)7] = (double)18;
  r[(signed long int)13][(signed long int)8] = (double)50;
  r[(signed long int)13][(signed long int)9] = (double)196;
  r[(signed long int)13][(signed long int)10] = (double)1093;
  r[(signed long int)13][(signed long int)11] = (double)7;
  r[(signed long int)13][(signed long int)12] = (double)49;
  r[(signed long int)14][(signed long int)0] = (double)901;
  r[(signed long int)14][(signed long int)1] = (double)217;
  r[(signed long int)14][(signed long int)2] = (double)31;
  r[(signed long int)14][(signed long int)3] = (double)39;
  r[(signed long int)14][(signed long int)4] = (double)15;
  r[(signed long int)14][(signed long int)5] = (double)395;
  r[(signed long int)14][(signed long int)6] = (double)71;
  r[(signed long int)14][(signed long int)7] = (double)93;
  r[(signed long int)14][(signed long int)8] = (double)157;
  r[(signed long int)14][(signed long int)9] = (double)31;
  r[(signed long int)14][(signed long int)10] = (double)578;
  r[(signed long int)14][(signed long int)11] = (double)77;
  r[(signed long int)14][(signed long int)12] = (double)23;
  r[(signed long int)14][(signed long int)13] = (double)36;
  r[(signed long int)15][(signed long int)0] = (double)2413;
  r[(signed long int)15][(signed long int)1] = (double)413;
  r[(signed long int)15][(signed long int)2] = (double)1738;
  r[(signed long int)15][(signed long int)3] = (double)244;
  r[(signed long int)15][(signed long int)4] = (double)353;
  r[(signed long int)15][(signed long int)5] = (double)182;
  r[(signed long int)15][(signed long int)6] = (double)156;
  r[(signed long int)15][(signed long int)7] = (double)1131;
  r[(signed long int)15][(signed long int)8] = (double)138;
  r[(signed long int)15][(signed long int)9] = (double)172;
  r[(signed long int)15][(signed long int)10] = (double)436;
  r[(signed long int)15][(signed long int)11] = (double)228;
  r[(signed long int)15][(signed long int)12] = (double)54;
  r[(signed long int)15][(signed long int)13] = (double)309;
  r[(signed long int)15][(signed long int)14] = (double)1138;
  r[(signed long int)16][(signed long int)0] = (double)2440;
  r[(signed long int)16][(signed long int)1] = (double)230;
  r[(signed long int)16][(signed long int)2] = (double)693;
  r[(signed long int)16][(signed long int)3] = (double)151;
  r[(signed long int)16][(signed long int)4] = (double)66;
  r[(signed long int)16][(signed long int)5] = (double)149;
  r[(signed long int)16][(signed long int)6] = (double)142;
  r[(signed long int)16][(signed long int)7] = (double)164;
  r[(signed long int)16][(signed long int)8] = (double)76;
  r[(signed long int)16][(signed long int)9] = (double)930;
  r[(signed long int)16][(signed long int)10] = (double)172;
  r[(signed long int)16][(signed long int)11] = (double)398;
  r[(signed long int)16][(signed long int)12] = (double)343;
  r[(signed long int)16][(signed long int)13] = (double)39;
  r[(signed long int)16][(signed long int)14] = (double)412;
  r[(signed long int)16][(signed long int)15] = (double)2258;
  r[(signed long int)17][(signed long int)0] = (double)11;
  r[(signed long int)17][(signed long int)1] = (double)109;
  r[(signed long int)17][(signed long int)2] = (double)2;
  r[(signed long int)17][(signed long int)3] = (double)5;
  r[(signed long int)17][(signed long int)4] = (double)38;
  r[(signed long int)17][(signed long int)5] = (double)12;
  r[(signed long int)17][(signed long int)6] = (double)12;
  r[(signed long int)17][(signed long int)7] = (double)69;
  r[(signed long int)17][(signed long int)8] = (double)5;
  r[(signed long int)17][(signed long int)9] = (double)12;
  r[(signed long int)17][(signed long int)10] = (double)82;
  r[(signed long int)17][(signed long int)11] = (double)9;
  r[(signed long int)17][(signed long int)12] = (double)8;
  r[(signed long int)17][(signed long int)13] = (double)37;
  r[(signed long int)17][(signed long int)14] = (double)6;
  r[(signed long int)17][(signed long int)15] = (double)36;
  r[(signed long int)17][(signed long int)16] = (double)8;
  r[(signed long int)18][(signed long int)0] = (double)41;
  r[(signed long int)18][(signed long int)1] = (double)46;
  r[(signed long int)18][(signed long int)2] = (double)114;
  r[(signed long int)18][(signed long int)3] = (double)89;
  r[(signed long int)18][(signed long int)4] = (double)164;
  r[(signed long int)18][(signed long int)5] = (double)40;
  r[(signed long int)18][(signed long int)6] = (double)15;
  r[(signed long int)18][(signed long int)7] = (double)15;
  r[(signed long int)18][(signed long int)8] = (double)514;
  r[(signed long int)18][(signed long int)9] = (double)61;
  r[(signed long int)18][(signed long int)10] = (double)84;
  r[(signed long int)18][(signed long int)11] = (double)20;
  r[(signed long int)18][(signed long int)12] = (double)17;
  r[(signed long int)18][(signed long int)13] = (double)850;
  r[(signed long int)18][(signed long int)14] = (double)22;
  r[(signed long int)18][(signed long int)15] = (double)164;
  r[(signed long int)18][(signed long int)16] = (double)45;
  r[(signed long int)18][(signed long int)17] = (double)41;
  r[(signed long int)19][(signed long int)0] = (double)1766;
  r[(signed long int)19][(signed long int)1] = (double)69;
  r[(signed long int)19][(signed long int)2] = (double)55;
  r[(signed long int)19][(signed long int)3] = (double)127;
  r[(signed long int)19][(signed long int)4] = (double)99;
  r[(signed long int)19][(signed long int)5] = (double)58;
  r[(signed long int)19][(signed long int)6] = (double)226;
  r[(signed long int)19][(signed long int)7] = (double)276;
  r[(signed long int)19][(signed long int)8] = (double)22;
  r[(signed long int)19][(signed long int)9] = (double)3938;
  r[(signed long int)19][(signed long int)10] = (double)1261;
  r[(signed long int)19][(signed long int)11] = (double)58;
  r[(signed long int)19][(signed long int)12] = (double)559;
  r[(signed long int)19][(signed long int)13] = (double)189;
  r[(signed long int)19][(signed long int)14] = (double)84;
  r[(signed long int)19][(signed long int)15] = (double)219;
  r[(signed long int)19][(signed long int)16] = (double)526;
  r[(signed long int)19][(signed long int)17] = (double)27;
  r[(signed long int)19][(signed long int)18] = (double)42;
  r[(signed long int)0][(signed long int)1] = (double)21;
  r[(signed long int)0][(signed long int)2] = (double)2;
  r[(signed long int)0][(signed long int)3] = (double)7;
  r[(signed long int)0][(signed long int)4] = (double)13;
  r[(signed long int)0][(signed long int)5] = (double)4;
  r[(signed long int)0][(signed long int)6] = (double)6;
  r[(signed long int)0][(signed long int)7] = (double)160;
  r[(signed long int)0][(signed long int)8] = (double)6;
  r[(signed long int)0][(signed long int)9] = (double)44;
  r[(signed long int)0][(signed long int)10] = (double)43;
  r[(signed long int)0][(signed long int)11] = (double)5;
  r[(signed long int)0][(signed long int)12] = (double)10;
  r[(signed long int)0][(signed long int)13] = (double)21;
  r[(signed long int)0][(signed long int)14] = (double)34;
  r[(signed long int)0][(signed long int)15] = (double)198;
  r[(signed long int)0][(signed long int)16] = (double)202;
  r[(signed long int)0][(signed long int)17] = (double)0;
  r[(signed long int)0][(signed long int)18] = (double)1;
  r[(signed long int)0][(signed long int)19] = (double)292;
  r[(signed long int)1][(signed long int)2] = (double)0;
  r[(signed long int)1][(signed long int)3] = (double)1;
  r[(signed long int)1][(signed long int)4] = (double)2;
  r[(signed long int)1][(signed long int)5] = (double)21;
  r[(signed long int)1][(signed long int)6] = (double)3;
  r[(signed long int)1][(signed long int)7] = (double)22;
  r[(signed long int)1][(signed long int)8] = (double)21;
  r[(signed long int)1][(signed long int)9] = (double)4;
  r[(signed long int)1][(signed long int)10] = (double)8;
  r[(signed long int)1][(signed long int)11] = (double)53;
  r[(signed long int)1][(signed long int)12] = (double)19;
  r[(signed long int)1][(signed long int)13] = (double)0;
  r[(signed long int)1][(signed long int)14] = (double)1;
  r[(signed long int)1][(signed long int)15] = (double)5;
  r[(signed long int)1][(signed long int)16] = (double)5;
  r[(signed long int)1][(signed long int)17] = (double)28;
  r[(signed long int)1][(signed long int)18] = (double)0;
  r[(signed long int)1][(signed long int)19] = (double)0;
  r[(signed long int)2][(signed long int)3] = (double)14;
  r[(signed long int)2][(signed long int)4] = (double)1;
  r[(signed long int)2][(signed long int)5] = (double)7;
  r[(signed long int)2][(signed long int)6] = (double)0;
  r[(signed long int)2][(signed long int)7] = (double)0;
  r[(signed long int)2][(signed long int)8] = (double)8;
  r[(signed long int)2][(signed long int)9] = (double)4;
  r[(signed long int)2][(signed long int)10] = (double)5;
  r[(signed long int)2][(signed long int)11] = (double)11;
  r[(signed long int)2][(signed long int)12] = (double)3;
  r[(signed long int)2][(signed long int)13] = (double)1;
  r[(signed long int)2][(signed long int)14] = (double)2;
  r[(signed long int)2][(signed long int)15] = (double)32;
  r[(signed long int)2][(signed long int)16] = (double)19;
  r[(signed long int)2][(signed long int)17] = (double)1;
  r[(signed long int)2][(signed long int)18] = (double)1;
  r[(signed long int)2][(signed long int)19] = (double)2;
  r[(signed long int)3][(signed long int)4] = (double)0;
  r[(signed long int)3][(signed long int)5] = (double)0;
  r[(signed long int)3][(signed long int)6] = (double)12;
  r[(signed long int)3][(signed long int)7] = (double)15;
  r[(signed long int)3][(signed long int)8] = (double)4;
  r[(signed long int)3][(signed long int)9] = (double)1;
  r[(signed long int)3][(signed long int)10] = (double)0;
  r[(signed long int)3][(signed long int)11] = (double)2;
  r[(signed long int)3][(signed long int)12] = (double)1;
  r[(signed long int)3][(signed long int)13] = (double)0;
  r[(signed long int)3][(signed long int)14] = (double)1;
  r[(signed long int)3][(signed long int)15] = (double)0;
  r[(signed long int)3][(signed long int)16] = (double)6;
  r[(signed long int)3][(signed long int)17] = (double)0;
  r[(signed long int)3][(signed long int)18] = (double)1;
  r[(signed long int)3][(signed long int)19] = (double)4;
  r[(signed long int)4][(signed long int)5] = (double)0;
  r[(signed long int)4][(signed long int)6] = (double)0;
  r[(signed long int)4][(signed long int)7] = (double)13;
  r[(signed long int)4][(signed long int)8] = (double)2;
  r[(signed long int)4][(signed long int)9] = (double)4;
  r[(signed long int)4][(signed long int)10] = (double)11;
  r[(signed long int)4][(signed long int)11] = (double)0;
  r[(signed long int)4][(signed long int)12] = (double)1;
  r[(signed long int)4][(signed long int)13] = (double)34;
  r[(signed long int)4][(signed long int)14] = (double)0;
  r[(signed long int)4][(signed long int)15] = (double)48;
  r[(signed long int)4][(signed long int)16] = (double)13;
  r[(signed long int)4][(signed long int)17] = (double)8;
  r[(signed long int)4][(signed long int)18] = (double)23;
  r[(signed long int)4][(signed long int)19] = (double)47;
  r[(signed long int)5][(signed long int)6] = (double)16;
  r[(signed long int)5][(signed long int)7] = (double)1;
  r[(signed long int)5][(signed long int)8] = (double)26;
  r[(signed long int)5][(signed long int)9] = (double)1;
  r[(signed long int)5][(signed long int)10] = (double)16;
  r[(signed long int)5][(signed long int)11] = (double)6;
  r[(signed long int)5][(signed long int)12] = (double)3;
  r[(signed long int)5][(signed long int)13] = (double)0;
  r[(signed long int)5][(signed long int)14] = (double)5;
  r[(signed long int)5][(signed long int)15] = (double)7;
  r[(signed long int)5][(signed long int)16] = (double)2;
  r[(signed long int)5][(signed long int)17] = (double)0;
  r[(signed long int)5][(signed long int)18] = (double)0;
  r[(signed long int)5][(signed long int)19] = (double)0;
  r[(signed long int)6][(signed long int)7] = (double)21;
  r[(signed long int)6][(signed long int)8] = (double)0;
  r[(signed long int)6][(signed long int)9] = (double)0;
  r[(signed long int)6][(signed long int)10] = (double)0;
  r[(signed long int)6][(signed long int)11] = (double)0;
  r[(signed long int)6][(signed long int)12] = (double)0;
  r[(signed long int)6][(signed long int)13] = (double)0;
  r[(signed long int)6][(signed long int)14] = (double)0;
  r[(signed long int)6][(signed long int)15] = (double)4;
  r[(signed long int)6][(signed long int)16] = (double)2;
  r[(signed long int)6][(signed long int)17] = (double)0;
  r[(signed long int)6][(signed long int)18] = (double)0;
  r[(signed long int)6][(signed long int)19] = (double)7;
  r[(signed long int)7][(signed long int)8] = (double)1;
  r[(signed long int)7][(signed long int)9] = (double)10;
  r[(signed long int)7][(signed long int)10] = (double)0;
  r[(signed long int)7][(signed long int)11] = (double)0;
  r[(signed long int)7][(signed long int)12] = (double)3;
  r[(signed long int)7][(signed long int)13] = (double)4;
  r[(signed long int)7][(signed long int)14] = (double)7;
  r[(signed long int)7][(signed long int)15] = (double)64;
  r[(signed long int)7][(signed long int)16] = (double)12;
  r[(signed long int)7][(signed long int)17] = (double)5;
  r[(signed long int)7][(signed long int)18] = (double)0;
  r[(signed long int)7][(signed long int)19] = (double)53;
  r[(signed long int)8][(signed long int)9] = (double)3;
  r[(signed long int)8][(signed long int)10] = (double)2;
  r[(signed long int)8][(signed long int)11] = (double)0;
  r[(signed long int)8][(signed long int)12] = (double)1;
  r[(signed long int)8][(signed long int)13] = (double)0;
  r[(signed long int)8][(signed long int)14] = (double)0;
  r[(signed long int)8][(signed long int)15] = (double)0;
  r[(signed long int)8][(signed long int)16] = (double)4;
  r[(signed long int)8][(signed long int)17] = (double)0;
  r[(signed long int)8][(signed long int)18] = (double)29;
  r[(signed long int)8][(signed long int)19] = (double)2;
  r[(signed long int)9][(signed long int)10] = (double)273;
  r[(signed long int)9][(signed long int)11] = (double)0;
  r[(signed long int)9][(signed long int)12] = (double)161;
  r[(signed long int)9][(signed long int)13] = (double)66;
  r[(signed long int)9][(signed long int)14] = (double)4;
  r[(signed long int)9][(signed long int)15] = (double)22;
  r[(signed long int)9][(signed long int)16] = (double)150;
  r[(signed long int)9][(signed long int)17] = (double)1;
  r[(signed long int)9][(signed long int)18] = (double)4;
  r[(signed long int)9][(signed long int)19] = (double)883;
  r[(signed long int)10][(signed long int)11] = (double)1;
  r[(signed long int)10][(signed long int)12] = (double)153;
  r[(signed long int)10][(signed long int)13] = (double)251;
  r[(signed long int)10][(signed long int)14] = (double)37;
  r[(signed long int)10][(signed long int)15] = (double)43;
  r[(signed long int)10][(signed long int)16] = (double)26;
  r[(signed long int)10][(signed long int)17] = (double)20;
  r[(signed long int)10][(signed long int)18] = (double)6;
  r[(signed long int)10][(signed long int)19] = (double)255;
  r[(signed long int)11][(signed long int)12] = (double)4;
  r[(signed long int)11][(signed long int)13] = (double)0;
  r[(signed long int)11][(signed long int)14] = (double)0;
  r[(signed long int)11][(signed long int)15] = (double)1;
  r[(signed long int)11][(signed long int)16] = (double)2;
  r[(signed long int)11][(signed long int)17] = (double)0;
  r[(signed long int)11][(signed long int)18] = (double)5;
  r[(signed long int)11][(signed long int)19] = (double)1;
  r[(signed long int)12][(signed long int)13] = (double)8;
  r[(signed long int)12][(signed long int)14] = (double)0;
  r[(signed long int)12][(signed long int)15] = (double)1;
  r[(signed long int)12][(signed long int)16] = (double)32;
  r[(signed long int)12][(signed long int)17] = (double)1;
  r[(signed long int)12][(signed long int)18] = (double)5;
  r[(signed long int)12][(signed long int)19] = (double)89;
  r[(signed long int)13][(signed long int)14] = (double)0;
  r[(signed long int)13][(signed long int)15] = (double)32;
  r[(signed long int)13][(signed long int)16] = (double)9;
  r[(signed long int)13][(signed long int)17] = (double)2;
  r[(signed long int)13][(signed long int)18] = (double)54;
  r[(signed long int)13][(signed long int)19] = (double)37;
  r[(signed long int)14][(signed long int)15] = (double)9;
  r[(signed long int)14][(signed long int)16] = (double)10;
  r[(signed long int)14][(signed long int)17] = (double)0;
  r[(signed long int)14][(signed long int)18] = (double)1;
  r[(signed long int)14][(signed long int)19] = (double)1;
  r[(signed long int)15][(signed long int)16] = (double)134;
  r[(signed long int)15][(signed long int)17] = (double)1;
  r[(signed long int)15][(signed long int)18] = (double)22;
  r[(signed long int)15][(signed long int)19] = (double)13;
  r[(signed long int)16][(signed long int)17] = (double)1;
  r[(signed long int)16][(signed long int)18] = (double)3;
  r[(signed long int)16][(signed long int)19] = (double)48;
  r[(signed long int)17][(signed long int)18] = (double)2;
  r[(signed long int)17][(signed long int)19] = (double)18;
  r[(signed long int)18][(signed long int)19] = (double)2;
  i = 0;
  for( ; !(i >= 20); i = i + 1)
    r[(signed long int)i][(signed long int)i] = 0.0;
  if(!(isTM == 0))
  {
    i = 1;
    for( ; !(i >= 20); i = i + 1)
    {
      j = 0;
      for( ; !(j >= i); j = j + 1)
      {
        r[(signed long int)j][(signed long int)i] = r[(signed long int)j][(signed long int)i] / (400.0 * freq0_TM[(signed long int)i] * freq0_TM[(signed long int)j]);
        r[(signed long int)i][(signed long int)j] = r[(signed long int)j][(signed long int)i];
      }
    }
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      freq[(signed long int)i] = freq0_TM[(signed long int)i];
  }

  else
  {
    i = 1;
    for( ; !(i >= 20); i = i + 1)
    {
      j = 0;
      for( ; !(j >= i); j = j + 1)
      {
        r[(signed long int)i][(signed long int)j] = r[(signed long int)i][(signed long int)j] / (400.0 * freq0[(signed long int)i] * freq0[(signed long int)j]);
        r[(signed long int)j][(signed long int)i] = r[(signed long int)i][(signed long int)j];
      }
    }
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      freq[(signed long int)i] = freq0[(signed long int)i];
  }
  i = 0;
  for( ; !(i >= 26); i = i + 1)
    locamino[(signed long int)i] = locamino0[(signed long int)i];
  i = 0;
  for( ; !(i >= 26); i = i + 1)
    locgrp[(signed long int)(signed int)locamino[(signed long int)i]] = locgrp0[(signed long int)i];
  i = 0;
  for( ; !(i >= 20); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 20); j = j + 1)
      rsr[(signed long int)i][(signed long int)j] = r[(signed long int)i][(signed long int)j];
  }
}

// MtxmltDouble
// file mtxutl.h line 2
void MtxmltDouble(double **mtx1, double **mtx2, signed int n)
{
  signed int i;
  signed int j;
  signed int k;
  double s;
  double *tmp;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)n, sizeof(double) /*8ul*/ );
  tmp = (double *)return_value_calloc_1;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    k = 0;
    for( ; !(k >= n); k = k + 1)
      tmp[(signed long int)k] = mtx1[(signed long int)i][(signed long int)k];
    j = 0;
    for( ; !(j >= n); j = j + 1)
    {
      s = 0.0;
      k = 0;
      for( ; !(k >= n); k = k + 1)
        s = s + tmp[(signed long int)k] * mtx2[(signed long int)k][(signed long int)j];
      mtx1[(signed long int)i][(signed long int)j] = s;
    }
  }
  free((void *)tmp);
}

// MtxuntDouble
// file mtxutl.h line 1
void MtxuntDouble(double **mtx, signed int n)
{
  signed int i;
  signed int j;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    j = 0;
    for( ; !(j >= n); j = j + 1)
      mtx[(signed long int)i][(signed long int)j] = 0.0;
  }
  i = 0;
  for( ; !(i >= n); i = i + 1)
    mtx[(signed long int)i][(signed long int)i] = 1.0;
}

// PreRead
// file io.c line 1032
extern void PreRead(struct _IO_FILE *fp, signed int *locnjob, signed int *locnlenmax)
{
  signed int i;
  signed int nleni;
  char b[256l];
  fgets(b, 256 - 1, fp);
  *locnjob=atoi(b);
  *locnlenmax = 0;
  i = 0;
  while(!(i >= *locnjob))
  {
    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp(b, "=", (unsigned long int)1);
    if(return_value_strncmp_1 == 0)
    {
      i = i + 1;
      fgets(b, 256 - 1, fp);
      nleni=atoi(b);
      if(!(*locnlenmax >= nleni))
        *locnlenmax = nleni;

    }

  }
  if(*locnlenmax >= 5000001)
  {
    fprintf(stderr, "TOO LONG SEQUENCE!\n");
    exit(1);
  }

  if(njob >= 500001)
  {
    fprintf(stderr, "TOO MANY SEQUENCE!\n");
    fprintf(stderr, "%d > %d\n", njob, 500000);
    exit(1);
  }

}

// Read
// file io.c line 1070
extern void Read(char (*name)[256l], signed int *nlen, char **seq)
{
  FRead(stdin, name, nlen, seq);
}

// ReadBlastm7
// file io.c line 3194
extern signed int ReadBlastm7(struct _IO_FILE *fp, double *dis, signed int qmem, char **name, struct _LocalHom *localhomlist)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int overlapaa;
  double score;
  double sumscore;
  signed int qstart;
  signed int qend;
  signed int tstart;
  signed int tend;
  signed int nlocalhom;
  count = 0;
  sumscore = 0.0;
  score = 0.0;
  nlocalhom = 0;
  char *return_value_fgets_2;
  _Bool tmp_if_expr_5;
  signed int return_value_strncmp_4;
  char *return_value_fgets_7;
  signed int return_value_strncmp_8;
  char *return_value_fgets_9;
  signed int return_value_strncmp_10;
  char *return_value_fgets_12;
  signed int return_value_strncmp_13;
  char *return_value_fgets_15;
  signed int return_value_strncmp_16;
  char *return_value_fgets_18;
  signed int return_value_strncmp_19;
  char *return_value_fgets_21;
  signed int return_value_strncmp_22;
  char *return_value_fgets_23;
  signed int return_value_strncmp_24;
  char *return_value_fgets_25;
  signed int return_value_strncmp_26;
  char *return_value_fgets_28;
  signed int return_value_strncmp_29;
  signed int tmp_post_30;
  while((_Bool)1)
  {
    signed int return_value_feof_1;
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    do
    {
      return_value_fgets_2=fgets(b, 256 - 1, fp);
      if(return_value_fgets_2 == ((char *)NULL))
        break;

      signed int return_value_strncmp_3;
      return_value_strncmp_3=strncmp("          <Hit_def>", b, (unsigned long int)19);
      if(return_value_strncmp_3 == 0)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_strncmp_4=strncmp("              <Hsp_num>", b, (unsigned long int)23);
        tmp_if_expr_5 = !(return_value_strncmp_4 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        break;

    }
    while((_Bool)1);
    signed int return_value_strncmp_6;
    return_value_strncmp_6=strncmp("          <Hit_def>", b, (unsigned long int)19);
    static signed int junban[500000l];
    if(return_value_strncmp_6 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)31);
      nlocalhom = 0;
    }

    do
    {
      return_value_fgets_7=fgets(b, 256 - 1, fp);
      if(return_value_fgets_7 == ((char *)NULL))
        break;

      return_value_strncmp_8=strncmp("              <Hsp_score>", b, (unsigned long int)25);
      if(return_value_strncmp_8 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)25;
    score=atof(pt);
    sumscore = sumscore + score;
    do
    {
      return_value_fgets_9=fgets(b, 256 - 1, fp);
      if(return_value_fgets_9 == ((char *)NULL))
        break;

      return_value_strncmp_10=strncmp("              <Hsp_query-from>", b, (unsigned long int)30);
      if(return_value_strncmp_10 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)30;
    signed int return_value_atoi_11;
    return_value_atoi_11=atoi(pt);
    qstart = return_value_atoi_11 - 1;
    do
    {
      return_value_fgets_12=fgets(b, 256 - 1, fp);
      if(return_value_fgets_12 == ((char *)NULL))
        break;

      return_value_strncmp_13=strncmp("              <Hsp_query-to>", b, (unsigned long int)28);
      if(return_value_strncmp_13 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)28;
    signed int return_value_atoi_14;
    return_value_atoi_14=atoi(pt);
    qend = return_value_atoi_14 - 1;
    do
    {
      return_value_fgets_15=fgets(b, 256 - 1, fp);
      if(return_value_fgets_15 == ((char *)NULL))
        break;

      return_value_strncmp_16=strncmp("              <Hsp_hit-from>", b, (unsigned long int)28);
      if(return_value_strncmp_16 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)28;
    signed int return_value_atoi_17;
    return_value_atoi_17=atoi(pt);
    tstart = return_value_atoi_17 - 1;
    do
    {
      return_value_fgets_18=fgets(b, 256 - 1, fp);
      if(return_value_fgets_18 == ((char *)NULL))
        break;

      return_value_strncmp_19=strncmp("              <Hsp_hit-to>", b, (unsigned long int)26);
      if(return_value_strncmp_19 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)26;
    signed int return_value_atoi_20;
    return_value_atoi_20=atoi(pt);
    tend = return_value_atoi_20 - 1;
    do
    {
      return_value_fgets_21=fgets(b, 256 - 1, fp);
      if(return_value_fgets_21 == ((char *)NULL))
        break;

      return_value_strncmp_22=strncmp("              <Hsp_align-len>", b, (unsigned long int)29);
      if(return_value_strncmp_22 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)29;
    overlapaa=atoi(pt);
    static char al[5000000l];
    do
    {
      return_value_fgets_23=fgets(al, 5000000 - 100, fp);
      if(return_value_fgets_23 == ((char *)NULL))
        break;

      return_value_strncmp_24=strncmp("              <Hsp_qseq>", al, (unsigned long int)24);
      if(return_value_strncmp_24 == 0)
        break;

    }
    while((_Bool)1);
    static char qal[5000000l];
    strcpy(qal, al + (signed long int)24);
    pt = qal;
    do
    {
      pt = pt + 1l;
      if((signed int)*pt == 60)
        break;

    }
    while((_Bool)1);
    *pt = (char)0;
    do
    {
      return_value_fgets_25=fgets(al, 5000000 - 100, fp);
      if(return_value_fgets_25 == ((char *)NULL))
        break;

      return_value_strncmp_26=strncmp("              <Hsp_hseq>", al, (unsigned long int)24);
      if(return_value_strncmp_26 == 0)
        break;

    }
    while((_Bool)1);
    static char tal[5000000l];
    strcpy(tal, al + (signed long int)24);
    pt = tal;
    do
    {
      pt = pt + 1l;
      if((signed int)*pt == 60)
        break;

    }
    while((_Bool)1);
    *pt = (char)0;
    signed int return_value_addlocalhom_r_27;
    return_value_addlocalhom_r_27=addlocalhom_r(qal, tal, localhomlist + (signed long int)junban[(signed long int)count], qstart, tstart, (signed int)score, overlapaa, nlocalhom);
    nlocalhom = nlocalhom + return_value_addlocalhom_r_27;
    do
    {
      return_value_fgets_28=fgets(b, 256 - 1, fp);
      if(return_value_fgets_28 == ((char *)NULL))
        break;

      return_value_strncmp_29=strncmp("            </Hsp>:", b, (unsigned long int)18);
      if(return_value_strncmp_29 == 0)
        break;

    }
    while((_Bool)1);
    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_32;
    return_value_strncmp_32=strncmp("          </Hit_hsps>", b, (unsigned long int)21);
    if(return_value_strncmp_32 == 0)
    {
      tmp_post_30 = count;
      count = count + 1;
      dis[(signed long int)junban[(signed long int)tmp_post_30]] = sumscore;
      sumscore = 0.0;
      fgets(b, 256 - 1, fp);
      fgets(b, 256 - 1, fp);
      signed int return_value_strncmp_31;
      return_value_strncmp_31=strncmp("      </Iteration_hits>", b, (unsigned long int)23);
      if(return_value_strncmp_31 == 0)
        break;

    }

  }
  return count;
}

// ReadBlastm7_avscore
// file io.c line 2950
extern signed int ReadBlastm7_avscore(struct _IO_FILE *fp, double *dis, signed int nin)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int *junban;
  double score;
  double sumscore;
  double len;
  double sumlen;
  signed int qstart;
  signed int qend;
  signed int tstart;
  signed int tend;
  double scorepersite;
  signed int nlocalhom;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)nin, sizeof(signed int) /*4ul*/ );
  junban = (signed int *)return_value_calloc_1;
  count = 0;
  sumscore = 0.0;
  sumlen = 0.0;
  score = 0.0;
  len = 0.0;
  scorepersite = 0.0;
  char *return_value_fgets_3;
  _Bool tmp_if_expr_6;
  signed int return_value_strncmp_5;
  char *return_value_fgets_8;
  signed int return_value_strncmp_9;
  char *return_value_fgets_10;
  signed int return_value_strncmp_11;
  char *return_value_fgets_13;
  signed int return_value_strncmp_14;
  char *return_value_fgets_16;
  signed int return_value_strncmp_17;
  char *return_value_fgets_19;
  signed int return_value_strncmp_20;
  char *return_value_fgets_22;
  signed int return_value_strncmp_23;
  char *return_value_fgets_25;
  signed int return_value_strncmp_26;
  char *return_value_fgets_27;
  signed int return_value_strncmp_28;
  char *return_value_fgets_29;
  signed int return_value_strncmp_30;
  signed int tmp_post_31;
  while((_Bool)1)
  {
    signed int return_value_feof_2;
    return_value_feof_2=feof(fp);
    if(!(return_value_feof_2 == 0))
      break;

    do
    {
      return_value_fgets_3=fgets(b, 256 - 1, fp);
      if(return_value_fgets_3 == ((char *)NULL))
        break;

      signed int return_value_strncmp_4;
      return_value_strncmp_4=strncmp("          <Hit_def>", b, (unsigned long int)19);
      if(return_value_strncmp_4 == 0)
        tmp_if_expr_6 = (_Bool)1;

      else
      {
        return_value_strncmp_5=strncmp("              <Hsp_num>", b, (unsigned long int)23);
        tmp_if_expr_6 = !(return_value_strncmp_5 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_6)
        break;

    }
    while((_Bool)1);
    signed int return_value_strncmp_7;
    return_value_strncmp_7=strncmp("          <Hit_def>", b, (unsigned long int)19);
    if(return_value_strncmp_7 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)31);
      nlocalhom = 0;
    }

    do
    {
      return_value_fgets_8=fgets(b, 256 - 1, fp);
      if(return_value_fgets_8 == ((char *)NULL))
        break;

      return_value_strncmp_9=strncmp("              <Hsp_score>", b, (unsigned long int)25);
      if(return_value_strncmp_9 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)25;
    score=atof(pt);
    sumscore = sumscore + score;
    do
    {
      return_value_fgets_10=fgets(b, 256 - 1, fp);
      if(return_value_fgets_10 == ((char *)NULL))
        break;

      return_value_strncmp_11=strncmp("              <Hsp_query-from>", b, (unsigned long int)30);
      if(return_value_strncmp_11 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)30;
    signed int return_value_atoi_12;
    return_value_atoi_12=atoi(pt);
    qstart = return_value_atoi_12 - 1;
    do
    {
      return_value_fgets_13=fgets(b, 256 - 1, fp);
      if(return_value_fgets_13 == ((char *)NULL))
        break;

      return_value_strncmp_14=strncmp("              <Hsp_query-to>", b, (unsigned long int)28);
      if(return_value_strncmp_14 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)28;
    signed int return_value_atoi_15;
    return_value_atoi_15=atoi(pt);
    qend = return_value_atoi_15 - 1;
    do
    {
      return_value_fgets_16=fgets(b, 256 - 1, fp);
      if(return_value_fgets_16 == ((char *)NULL))
        break;

      return_value_strncmp_17=strncmp("              <Hsp_hit-from>", b, (unsigned long int)28);
      if(return_value_strncmp_17 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)28;
    signed int return_value_atoi_18;
    return_value_atoi_18=atoi(pt);
    tstart = return_value_atoi_18 - 1;
    do
    {
      return_value_fgets_19=fgets(b, 256 - 1, fp);
      if(return_value_fgets_19 == ((char *)NULL))
        break;

      return_value_strncmp_20=strncmp("              <Hsp_hit-to>", b, (unsigned long int)26);
      if(return_value_strncmp_20 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)26;
    signed int return_value_atoi_21;
    return_value_atoi_21=atoi(pt);
    tend = return_value_atoi_21 - 1;
    do
    {
      return_value_fgets_22=fgets(b, 256 - 1, fp);
      if(return_value_fgets_22 == ((char *)NULL))
        break;

      return_value_strncmp_23=strncmp("              <Hsp_align-len>", b, (unsigned long int)29);
      if(return_value_strncmp_23 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)29;
    signed int return_value_atoi_24;
    return_value_atoi_24=atoi(pt);
    len = (double)return_value_atoi_24;
    sumlen = sumlen + len;
    static char al[5000000l];
    do
    {
      return_value_fgets_25=fgets(al, 5000000 - 100, fp);
      if(return_value_fgets_25 == ((char *)NULL))
        break;

      return_value_strncmp_26=strncmp("              <Hsp_qseq>", al, (unsigned long int)24);
      if(return_value_strncmp_26 == 0)
        break;

    }
    while((_Bool)1);
    static char qal[5000000l];
    strcpy(qal, al + (signed long int)24);
    pt = qal;
    do
    {
      pt = pt + 1l;
      if((signed int)*pt == 60)
        break;

    }
    while((_Bool)1);
    *pt = (char)0;
    do
    {
      return_value_fgets_27=fgets(al, 5000000 - 100, fp);
      if(return_value_fgets_27 == ((char *)NULL))
        break;

      return_value_strncmp_28=strncmp("              <Hsp_hseq>", al, (unsigned long int)24);
      if(return_value_strncmp_28 == 0)
        break;

    }
    while((_Bool)1);
    static char tal[5000000l];
    strcpy(tal, al + (signed long int)24);
    pt = tal;
    do
    {
      pt = pt + 1l;
      if((signed int)*pt == 60)
        break;

    }
    while((_Bool)1);
    *pt = (char)0;
    do
    {
      return_value_fgets_29=fgets(b, 256 - 1, fp);
      if(return_value_fgets_29 == ((char *)NULL))
        break;

      return_value_strncmp_30=strncmp("            </Hsp>:", b, (unsigned long int)18);
      if(return_value_strncmp_30 == 0)
        break;

    }
    while((_Bool)1);
    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_33;
    return_value_strncmp_33=strncmp("          </Hit_hsps>", b, (unsigned long int)21);
    if(return_value_strncmp_33 == 0)
    {
      tmp_post_31 = count;
      count = count + 1;
      dis[(signed long int)junban[(signed long int)tmp_post_31]] = sumscore;
      sumscore = 0.0;
      fgets(b, 256 - 1, fp);
      fgets(b, 256 - 1, fp);
      scorepersite = sumscore / sumlen;
      if(IEEE_FLOAT_NOTEQUAL(scorepersite, (double)(signed int)scorepersite))
      {
        fprintf(stderr, "ERROR! sumscore=%f, sumlen=%f, and scorepersite=%f\n", sumscore, sumlen, scorepersite);
        exit(1);
      }

      signed int return_value_strncmp_32;
      return_value_strncmp_32=strncmp("      </Iteration_hits>", b, (unsigned long int)23);
      if(return_value_strncmp_32 == 0)
        break;

    }

  }
  free((void *)junban);
  return (signed int)scorepersite;
}

// ReadBlastm7_scoreonly
// file io.c line 3077
extern signed int ReadBlastm7_scoreonly(struct _IO_FILE *fp, double *dis, signed int nin)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int *junban;
  signed int overlapaa;
  double score;
  double sumscore;
  signed int qstart;
  signed int qend;
  signed int tstart;
  signed int tend;
  signed int nlocalhom;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)nin, sizeof(signed int) /*4ul*/ );
  junban = (signed int *)return_value_calloc_1;
  count = 0;
  sumscore = 0.0;
  score = 0.0;
  char *return_value_fgets_3;
  _Bool tmp_if_expr_6;
  signed int return_value_strncmp_5;
  char *return_value_fgets_8;
  signed int return_value_strncmp_9;
  char *return_value_fgets_10;
  signed int return_value_strncmp_11;
  char *return_value_fgets_13;
  signed int return_value_strncmp_14;
  char *return_value_fgets_16;
  signed int return_value_strncmp_17;
  char *return_value_fgets_19;
  signed int return_value_strncmp_20;
  char *return_value_fgets_22;
  signed int return_value_strncmp_23;
  char *return_value_fgets_24;
  signed int return_value_strncmp_25;
  char *return_value_fgets_26;
  signed int return_value_strncmp_27;
  char *return_value_fgets_28;
  signed int return_value_strncmp_29;
  signed int tmp_post_30;
  while((_Bool)1)
  {
    signed int return_value_feof_2;
    return_value_feof_2=feof(fp);
    if(!(return_value_feof_2 == 0))
      break;

    do
    {
      return_value_fgets_3=fgets(b, 256 - 1, fp);
      if(return_value_fgets_3 == ((char *)NULL))
        break;

      signed int return_value_strncmp_4;
      return_value_strncmp_4=strncmp("          <Hit_def>", b, (unsigned long int)19);
      if(return_value_strncmp_4 == 0)
        tmp_if_expr_6 = (_Bool)1;

      else
      {
        return_value_strncmp_5=strncmp("              <Hsp_num>", b, (unsigned long int)23);
        tmp_if_expr_6 = !(return_value_strncmp_5 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_6)
        break;

    }
    while((_Bool)1);
    signed int return_value_strncmp_7;
    return_value_strncmp_7=strncmp("          <Hit_def>", b, (unsigned long int)19);
    if(return_value_strncmp_7 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)31);
      nlocalhom = 0;
    }

    do
    {
      return_value_fgets_8=fgets(b, 256 - 1, fp);
      if(return_value_fgets_8 == ((char *)NULL))
        break;

      return_value_strncmp_9=strncmp("              <Hsp_score>", b, (unsigned long int)25);
      if(return_value_strncmp_9 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)25;
    score=atof(pt);
    sumscore = sumscore + score;
    do
    {
      return_value_fgets_10=fgets(b, 256 - 1, fp);
      if(return_value_fgets_10 == ((char *)NULL))
        break;

      return_value_strncmp_11=strncmp("              <Hsp_query-from>", b, (unsigned long int)30);
      if(return_value_strncmp_11 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)30;
    signed int return_value_atoi_12;
    return_value_atoi_12=atoi(pt);
    qstart = return_value_atoi_12 - 1;
    do
    {
      return_value_fgets_13=fgets(b, 256 - 1, fp);
      if(return_value_fgets_13 == ((char *)NULL))
        break;

      return_value_strncmp_14=strncmp("              <Hsp_query-to>", b, (unsigned long int)28);
      if(return_value_strncmp_14 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)28;
    signed int return_value_atoi_15;
    return_value_atoi_15=atoi(pt);
    qend = return_value_atoi_15 - 1;
    do
    {
      return_value_fgets_16=fgets(b, 256 - 1, fp);
      if(return_value_fgets_16 == ((char *)NULL))
        break;

      return_value_strncmp_17=strncmp("              <Hsp_hit-from>", b, (unsigned long int)28);
      if(return_value_strncmp_17 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)28;
    signed int return_value_atoi_18;
    return_value_atoi_18=atoi(pt);
    tstart = return_value_atoi_18 - 1;
    do
    {
      return_value_fgets_19=fgets(b, 256 - 1, fp);
      if(return_value_fgets_19 == ((char *)NULL))
        break;

      return_value_strncmp_20=strncmp("              <Hsp_hit-to>", b, (unsigned long int)26);
      if(return_value_strncmp_20 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)26;
    signed int return_value_atoi_21;
    return_value_atoi_21=atoi(pt);
    tend = return_value_atoi_21 - 1;
    do
    {
      return_value_fgets_22=fgets(b, 256 - 1, fp);
      if(return_value_fgets_22 == ((char *)NULL))
        break;

      return_value_strncmp_23=strncmp("              <Hsp_align-len>", b, (unsigned long int)29);
      if(return_value_strncmp_23 == 0)
        break;

    }
    while((_Bool)1);
    pt = b + (signed long int)29;
    overlapaa=atoi(pt);
    static char al[5000000l];
    do
    {
      return_value_fgets_24=fgets(al, 5000000 - 100, fp);
      if(return_value_fgets_24 == ((char *)NULL))
        break;

      return_value_strncmp_25=strncmp("              <Hsp_qseq>", al, (unsigned long int)24);
      if(return_value_strncmp_25 == 0)
        break;

    }
    while((_Bool)1);
    static char qal[5000000l];
    strcpy(qal, al + (signed long int)24);
    pt = qal;
    do
    {
      pt = pt + 1l;
      if((signed int)*pt == 60)
        break;

    }
    while((_Bool)1);
    *pt = (char)0;
    do
    {
      return_value_fgets_26=fgets(al, 5000000 - 100, fp);
      if(return_value_fgets_26 == ((char *)NULL))
        break;

      return_value_strncmp_27=strncmp("              <Hsp_hseq>", al, (unsigned long int)24);
      if(return_value_strncmp_27 == 0)
        break;

    }
    while((_Bool)1);
    static char tal[5000000l];
    strcpy(tal, al + (signed long int)24);
    pt = tal;
    do
    {
      pt = pt + 1l;
      if((signed int)*pt == 60)
        break;

    }
    while((_Bool)1);
    *pt = (char)0;
    do
    {
      return_value_fgets_28=fgets(b, 256 - 1, fp);
      if(return_value_fgets_28 == ((char *)NULL))
        break;

      return_value_strncmp_29=strncmp("            </Hsp>:", b, (unsigned long int)18);
      if(return_value_strncmp_29 == 0)
        break;

    }
    while((_Bool)1);
    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_32;
    return_value_strncmp_32=strncmp("          </Hit_hsps>", b, (unsigned long int)21);
    if(return_value_strncmp_32 == 0)
    {
      tmp_post_30 = count;
      count = count + 1;
      dis[(signed long int)junban[(signed long int)tmp_post_30]] = sumscore;
      sumscore = 0.0;
      fgets(b, 256 - 1, fp);
      fgets(b, 256 - 1, fp);
      signed int return_value_strncmp_31;
      return_value_strncmp_31=strncmp("      </Iteration_hits>", b, (unsigned long int)23);
      if(return_value_strncmp_31 == 0)
        break;

    }

  }
  free((void *)junban);
  return count;
}

// ReadFasta
// file io.c line 3873
extern signed int ReadFasta(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l])
{
  signed int i;
  signed int count = 0;
  char b[256l];
  signed int junban[500000l];
  signed int initn;
  signed int init1;
  signed int opt;
  count = 0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    dis[(signed long int)i] = 0.0;
  i = 0;
  signed int return_value_feof_1;
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0) || count >= nseq)
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_2 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      sscanf(b + (signed long int)50, "%d %d %d", &initn, &init1, &opt);
      dis[(signed long int)junban[(signed long int)count]] = (double)opt;
      count = count + 1;
    }

    i = i + 1;
  }
  while((_Bool)1);
  return 0;
}

// ReadFasta3
// file io.c line 3843
extern signed int ReadFasta3(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l])
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int junban[500000l];
  signed int initn;
  signed int init1;
  signed int opt;
  double z;
  count = 0;
  signed int return_value_feof_1;
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_3;
    return_value_strncmp_3=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_3 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      char *return_value_strchr_2;
      return_value_strchr_2=strchr(b, 41);
      pt = return_value_strchr_2 + (signed long int)1;
      sscanf(pt, "%d %d %d %lf", &initn, &init1, &opt, &z);
      dis[(signed long int)junban[(signed long int)count]] = (double)opt;
      count = count + 1;
    }

  }
  while((_Bool)1);
  return 0;
}

// ReadFasta34
// file io.c line 3778
extern signed int ReadFasta34(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l], struct _LocalHom *localhomlist)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int overlapaa;
  signed int opt;
  signed int qstart;
  signed int qend;
  signed int tstart;
  signed int tend;
  double z;
  double bits;
  count = 0;
  signed int return_value_feof_1;
  signed int return_value_strncmp_3;
  static signed int junban[500000l];
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_4;
    return_value_strncmp_4=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_4 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      char *return_value_strchr_2;
      return_value_strchr_2=strchr(b, 41);
      pt = return_value_strchr_2 + (signed long int)1;
      sscanf(pt, "%d %lf %lf", &opt, &bits, &z);
      dis[(signed long int)junban[(signed long int)count]] = (double)opt;
      count = count + 1;
    }

    else
    {
      return_value_strncmp_3=strncmp(">>+==========+", b, (unsigned long int)14);
      if(return_value_strncmp_3 == 0)
        break;

    }
  }
  while((_Bool)1);
  signed int return_value_feof_5;
  if(count == 0)
    return -1;

  else
  {
    count = 0;
    do
    {
      return_value_feof_5=feof(fp);
      if(!(return_value_feof_5 == 0))
        break;

      signed int return_value_strncmp_9;
      return_value_strncmp_9=strncmp(">>+==========+", b, (unsigned long int)14);
      if(return_value_strncmp_9 == 0)
      {
        junban[(signed long int)count]=atoi(b + (signed long int)14);
        count = count + 1;
        fgets(b, 256 - 1, fp);
        char *return_value_strstr_6;
        return_value_strstr_6=strstr(b, "opt: ");
        pt = return_value_strstr_6 + (signed long int)5;
        (localhomlist + (signed long int)junban[(signed long int)(count - 1)])->opt=atof(pt);
        fgets(b, 256 - 1, fp);
        char *return_value_strstr_7;
        return_value_strstr_7=strstr(b, "ungapped) in ");
        pt = return_value_strstr_7 + (signed long int)13;
        sscanf(pt, "%d", &overlapaa);
        fprintf(stderr, "pt = %s, overlapaa = %d\n", pt, overlapaa);
        char *return_value_strstr_8;
        return_value_strstr_8=strstr(b, "overlap (");
        pt = return_value_strstr_8 + (signed long int)8;
        sscanf(pt, "(%d-%d:%d-%d)", &qstart, &qend, &tstart, &tend);
        (localhomlist + (signed long int)junban[(signed long int)(count - 1)])->overlapaa = overlapaa;
        (localhomlist + (signed long int)junban[(signed long int)(count - 1)])->start1 = qstart - 1;
        (localhomlist + (signed long int)junban[(signed long int)(count - 1)])->end1 = qend - 1;
        (localhomlist + (signed long int)junban[(signed long int)(count - 1)])->start2 = tstart - 1;
        (localhomlist + (signed long int)junban[(signed long int)(count - 1)])->end2 = tend - 1;
      }

      fgets(b, 256 - 1, fp);
    }
    while((_Bool)1);
    fprintf(stderr, "count = %d\n", count);
    return count;
  }
}

// ReadFasta34m10
// file io.c line 3480
extern signed int ReadFasta34m10(struct _IO_FILE *fp, double *dis, signed int qmem, char **name, struct _LocalHom *localhomlist)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int overlapaa;
  signed int opt;
  signed int qstart;
  signed int qend;
  signed int tstart;
  signed int tend;
  double z;
  double bits;
  signed int qal_display_start;
  signed int tal_display_start;
  char *qal2;
  char *tal2;
  signed int c;
  count = 0;
  signed int return_value_feof_1;
  signed int return_value_strncmp_3;
  static signed int junban[500000l];
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_4;
    return_value_strncmp_4=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_4 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      char *return_value_strchr_2;
      return_value_strchr_2=strchr(b, 41);
      pt = return_value_strchr_2 + (signed long int)1;
      sscanf(pt, "%d %lf %lf", &opt, &bits, &z);
      dis[(signed long int)junban[(signed long int)count]] = (double)opt;
      count = count + 1;
    }

    else
    {
      return_value_strncmp_3=strncmp(">>+==========+", b, (unsigned long int)14);
      if(return_value_strncmp_3 == 0)
        break;

    }
  }
  while((_Bool)1);
  signed int tmp_post_7;
  char *return_value_fgets_8;
  signed int return_value_strncmp_9;
  _Bool tmp_if_expr_11;
  signed int return_value_strncmp_10;
  char *return_value_fgets_13;
  signed int return_value_strncmp_14;
  char *return_value_fgets_16;
  signed int return_value_strncmp_17;
  char *return_value_fgets_20;
  signed int return_value_strncmp_21;
  char *return_value_fgets_24;
  signed int return_value_strncmp_25;
  char *tmp_post_28;
  char *return_value_fgets_30;
  signed int return_value_strncmp_31;
  char *return_value_fgets_34;
  signed int return_value_strncmp_35;
  char *return_value_fgets_38;
  signed int return_value_strncmp_39;
  char *tmp_post_42;
  if(count == 0)
    return -1;

  else
  {
    count = 0;
    while((_Bool)1)
    {
      signed int return_value_strncmp_6;
      return_value_strncmp_6=strncmp(">>+==========+", b, (unsigned long int)14);
      if(!(return_value_strncmp_6 == 0))
      {
        fgets(b, 256 - 1, fp);
        signed int return_value_feof_5;
        return_value_feof_5=feof(fp);
        if(!(return_value_feof_5 == 0))
          break;

        continue;
      }

      tmp_post_7 = count;
      count = count + 1;
      junban[(signed long int)tmp_post_7]=atoi(b + (signed long int)14);
      do
      {
        return_value_fgets_8=fgets(b, 256 - 1, fp);
        if(return_value_fgets_8 == ((char *)NULL))
          break;

        return_value_strncmp_9=strncmp("; fa_opt:", b, (unsigned long int)9);
        if(return_value_strncmp_9 == 0)
          tmp_if_expr_11 = (_Bool)1;

        else
        {
          return_value_strncmp_10=strncmp("; sw_s-w opt:", b, (unsigned long int)13);
          tmp_if_expr_11 = !(return_value_strncmp_10 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_11)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_12;
      return_value_strstr_12=strstr(b, ":");
      pt = return_value_strstr_12 + (signed long int)1;
      opt=atoi(pt);
      do
      {
        return_value_fgets_13=fgets(b, 256 - 1, fp);
        if(return_value_fgets_13 == ((char *)NULL))
          break;

        return_value_strncmp_14=strncmp("_overlap:", b + (signed long int)4, (unsigned long int)9);
        if(return_value_strncmp_14 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_15;
      return_value_strstr_15=strstr(b, ":");
      pt = return_value_strstr_15 + (signed long int)1;
      overlapaa=atoi(pt);
      do
      {
        return_value_fgets_16=fgets(b, 256 - 1, fp);
        if(return_value_fgets_16 == ((char *)NULL))
          break;

        return_value_strncmp_17=strncmp("_start:", b + (signed long int)4, (unsigned long int)7);
        if(return_value_strncmp_17 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_18;
      return_value_strstr_18=strstr(b, ":");
      pt = return_value_strstr_18 + (signed long int)1;
      signed int return_value_atoi_19;
      return_value_atoi_19=atoi(pt);
      qstart = return_value_atoi_19 - 1;
      do
      {
        return_value_fgets_20=fgets(b, 256 - 1, fp);
        if(return_value_fgets_20 == ((char *)NULL))
          break;

        return_value_strncmp_21=strncmp("_stop:", b + (signed long int)4, (unsigned long int)6);
        if(return_value_strncmp_21 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_22;
      return_value_strstr_22=strstr(b, ":");
      pt = return_value_strstr_22 + (signed long int)1;
      signed int return_value_atoi_23;
      return_value_atoi_23=atoi(pt);
      qend = return_value_atoi_23 - 1;
      do
      {
        return_value_fgets_24=fgets(b, 256 - 1, fp);
        if(return_value_fgets_24 == ((char *)NULL))
          break;

        return_value_strncmp_25=strncmp("_display_start:", b + (signed long int)4, (unsigned long int)15);
        if(return_value_strncmp_25 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_26;
      return_value_strstr_26=strstr(b, ":");
      pt = return_value_strstr_26 + (signed long int)1;
      signed int return_value_atoi_27;
      return_value_atoi_27=atoi(pt);
      qal_display_start = return_value_atoi_27 - 1;
      static char qal[5000000l];
      pt = qal;
      do
      {
        c=fgetc(fp);
        if(c == 0)
          break;

        if(c == 62)
        {
          ungetc(c, fp);
          break;
        }

        const unsigned short int **return_value___ctype_b_loc_29;
        return_value___ctype_b_loc_29=__ctype_b_loc();
        if(c == 45 || !((1024 & (signed int)(*return_value___ctype_b_loc_29)[(signed long int)c]) == 0))
        {
          tmp_post_28 = pt;
          pt = pt + 1l;
          *tmp_post_28 = (char)c;
        }

      }
      while((_Bool)1);
      *pt = (char)0;
      do
      {
        return_value_fgets_30=fgets(b, 256 - 1, fp);
        if(return_value_fgets_30 == ((char *)NULL))
          break;

        return_value_strncmp_31=strncmp("_start:", b + (signed long int)4, (unsigned long int)7);
        if(return_value_strncmp_31 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_32;
      return_value_strstr_32=strstr(b, ":");
      pt = return_value_strstr_32 + (signed long int)1;
      signed int return_value_atoi_33;
      return_value_atoi_33=atoi(pt);
      tstart = return_value_atoi_33 - 1;
      do
      {
        return_value_fgets_34=fgets(b, 256 - 1, fp);
        if(return_value_fgets_34 == ((char *)NULL))
          break;

        return_value_strncmp_35=strncmp("_stop:", b + (signed long int)4, (unsigned long int)6);
        if(return_value_strncmp_35 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_36;
      return_value_strstr_36=strstr(b, ":");
      pt = return_value_strstr_36 + (signed long int)1;
      signed int return_value_atoi_37;
      return_value_atoi_37=atoi(pt);
      tend = return_value_atoi_37 - 1;
      do
      {
        return_value_fgets_38=fgets(b, 256 - 1, fp);
        if(return_value_fgets_38 == ((char *)NULL))
          break;

        return_value_strncmp_39=strncmp("_display_start:", b + (signed long int)4, (unsigned long int)15);
        if(return_value_strncmp_39 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_40;
      return_value_strstr_40=strstr(b, ":");
      pt = return_value_strstr_40 + (signed long int)1;
      signed int return_value_atoi_41;
      return_value_atoi_41=atoi(pt);
      tal_display_start = return_value_atoi_41 - 1;
      static char tal[5000000l];
      pt = tal;
      do
      {
        c=fgetc(fp);
        if(c == 0)
          break;

        if(c == 62)
        {
          ungetc(c, fp);
          break;
        }

        const unsigned short int **return_value___ctype_b_loc_43;
        return_value___ctype_b_loc_43=__ctype_b_loc();
        if(c == 45 || !((1024 & (signed int)(*return_value___ctype_b_loc_43)[(signed long int)c]) == 0))
        {
          tmp_post_42 = pt;
          pt = pt + 1l;
          *tmp_post_42 = (char)c;
        }

      }
      while((_Bool)1);
      *pt = (char)0;
      qal2=cutal(qal, qal_display_start, qstart, qend);
      tal2=cutal(tal, tal_display_start, tstart, tend);
      putlocalhom(qal2, tal2, localhomlist + (signed long int)junban[(signed long int)(count - 1)], qstart, tstart, opt, overlapaa);
    }
    return count;
  }
}

// ReadFasta34m10_nuc
// file io.c line 3341
extern signed int ReadFasta34m10_nuc(struct _IO_FILE *fp, double *dis, signed int qmem, char **name, struct _LocalHom *localhomlist)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int overlapaa;
  signed int opt;
  signed int qstart;
  signed int qend;
  signed int tstart;
  signed int tend;
  double z;
  double bits;
  signed int qal_display_start;
  signed int tal_display_start;
  char *qal2;
  char *tal2;
  signed int c;
  count = 0;
  signed int return_value_feof_1;
  signed int return_value_strncmp_4;
  static signed int junban[500000l];
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_5;
    return_value_strncmp_5=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_5 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      char *return_value_strchr_2;
      return_value_strchr_2=strchr(b, 114);
      if(!(return_value_strchr_2 == ((char *)NULL)))
        continue;

      char *return_value_strchr_3;
      return_value_strchr_3=strchr(b, 93);
      pt = return_value_strchr_3 + (signed long int)1;
      sscanf(pt, "%d %lf %lf", &opt, &bits, &z);
      dis[(signed long int)junban[(signed long int)count]] = (double)opt;
      count = count + 1;
    }

    else
    {
      return_value_strncmp_4=strncmp(">>+==========+", b, (unsigned long int)14);
      if(return_value_strncmp_4 == 0)
        break;

    }
  }
  while((_Bool)1);
  signed int tmp_post_8;
  char *return_value_fgets_9;
  signed int return_value_strncmp_10;
  _Bool tmp_if_expr_12;
  signed int return_value_strncmp_11;
  char *return_value_fgets_14;
  signed int return_value_strncmp_15;
  char *return_value_fgets_17;
  signed int return_value_strncmp_18;
  char *return_value_fgets_21;
  signed int return_value_strncmp_22;
  char *return_value_fgets_25;
  signed int return_value_strncmp_26;
  char *tmp_post_29;
  char *return_value_fgets_31;
  signed int return_value_strncmp_32;
  char *return_value_fgets_35;
  signed int return_value_strncmp_36;
  char *return_value_fgets_39;
  signed int return_value_strncmp_40;
  char *tmp_post_43;
  if(count == 0)
    return -1;

  else
  {
    count = 0;
    while((_Bool)1)
    {
      signed int return_value_strncmp_7;
      return_value_strncmp_7=strncmp(">>+==========+", b, (unsigned long int)14);
      if(!(return_value_strncmp_7 == 0))
      {
        fgets(b, 256 - 1, fp);
        signed int return_value_feof_6;
        return_value_feof_6=feof(fp);
        if(!(return_value_feof_6 == 0))
          break;

        continue;
      }

      tmp_post_8 = count;
      count = count + 1;
      junban[(signed long int)tmp_post_8]=atoi(b + (signed long int)14);
      do
      {
        return_value_fgets_9=fgets(b, 256 - 1, fp);
        if(return_value_fgets_9 == ((char *)NULL))
          break;

        return_value_strncmp_10=strncmp("; fa_opt:", b, (unsigned long int)9);
        if(return_value_strncmp_10 == 0)
          tmp_if_expr_12 = (_Bool)1;

        else
        {
          return_value_strncmp_11=strncmp("; sw_s-w opt:", b, (unsigned long int)13);
          tmp_if_expr_12 = !(return_value_strncmp_11 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_12)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_13;
      return_value_strstr_13=strstr(b, ":");
      pt = return_value_strstr_13 + (signed long int)1;
      opt=atoi(pt);
      do
      {
        return_value_fgets_14=fgets(b, 256 - 1, fp);
        if(return_value_fgets_14 == ((char *)NULL))
          break;

        return_value_strncmp_15=strncmp("_overlap:", b + (signed long int)4, (unsigned long int)9);
        if(return_value_strncmp_15 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_16;
      return_value_strstr_16=strstr(b, ":");
      pt = return_value_strstr_16 + (signed long int)1;
      overlapaa=atoi(pt);
      do
      {
        return_value_fgets_17=fgets(b, 256 - 1, fp);
        if(return_value_fgets_17 == ((char *)NULL))
          break;

        return_value_strncmp_18=strncmp("_start:", b + (signed long int)4, (unsigned long int)7);
        if(return_value_strncmp_18 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_19;
      return_value_strstr_19=strstr(b, ":");
      pt = return_value_strstr_19 + (signed long int)1;
      signed int return_value_atoi_20;
      return_value_atoi_20=atoi(pt);
      qstart = return_value_atoi_20 - 1;
      do
      {
        return_value_fgets_21=fgets(b, 256 - 1, fp);
        if(return_value_fgets_21 == ((char *)NULL))
          break;

        return_value_strncmp_22=strncmp("_stop:", b + (signed long int)4, (unsigned long int)6);
        if(return_value_strncmp_22 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_23;
      return_value_strstr_23=strstr(b, ":");
      pt = return_value_strstr_23 + (signed long int)1;
      signed int return_value_atoi_24;
      return_value_atoi_24=atoi(pt);
      qend = return_value_atoi_24 - 1;
      do
      {
        return_value_fgets_25=fgets(b, 256 - 1, fp);
        if(return_value_fgets_25 == ((char *)NULL))
          break;

        return_value_strncmp_26=strncmp("_display_start:", b + (signed long int)4, (unsigned long int)15);
        if(return_value_strncmp_26 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_27;
      return_value_strstr_27=strstr(b, ":");
      pt = return_value_strstr_27 + (signed long int)1;
      signed int return_value_atoi_28;
      return_value_atoi_28=atoi(pt);
      qal_display_start = return_value_atoi_28 - 1;
      static char qal[5000000l];
      pt = qal;
      do
      {
        c=fgetc(fp);
        if(c == 0)
          break;

        if(c == 62)
        {
          ungetc(c, fp);
          break;
        }

        const unsigned short int **return_value___ctype_b_loc_30;
        return_value___ctype_b_loc_30=__ctype_b_loc();
        if(c == 45 || !((1024 & (signed int)(*return_value___ctype_b_loc_30)[(signed long int)c]) == 0))
        {
          tmp_post_29 = pt;
          pt = pt + 1l;
          *tmp_post_29 = (char)c;
        }

      }
      while((_Bool)1);
      *pt = (char)0;
      do
      {
        return_value_fgets_31=fgets(b, 256 - 1, fp);
        if(return_value_fgets_31 == ((char *)NULL))
          break;

        return_value_strncmp_32=strncmp("_start:", b + (signed long int)4, (unsigned long int)7);
        if(return_value_strncmp_32 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_33;
      return_value_strstr_33=strstr(b, ":");
      pt = return_value_strstr_33 + (signed long int)1;
      signed int return_value_atoi_34;
      return_value_atoi_34=atoi(pt);
      tstart = return_value_atoi_34 - 1;
      do
      {
        return_value_fgets_35=fgets(b, 256 - 1, fp);
        if(return_value_fgets_35 == ((char *)NULL))
          break;

        return_value_strncmp_36=strncmp("_stop:", b + (signed long int)4, (unsigned long int)6);
        if(return_value_strncmp_36 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_37;
      return_value_strstr_37=strstr(b, ":");
      pt = return_value_strstr_37 + (signed long int)1;
      signed int return_value_atoi_38;
      return_value_atoi_38=atoi(pt);
      tend = return_value_atoi_38 - 1;
      do
      {
        return_value_fgets_39=fgets(b, 256 - 1, fp);
        if(return_value_fgets_39 == ((char *)NULL))
          break;

        return_value_strncmp_40=strncmp("_display_start:", b + (signed long int)4, (unsigned long int)15);
        if(return_value_strncmp_40 == 0)
          break;

      }
      while((_Bool)1);
      char *return_value_strstr_41;
      return_value_strstr_41=strstr(b, ":");
      pt = return_value_strstr_41 + (signed long int)1;
      signed int return_value_atoi_42;
      return_value_atoi_42=atoi(pt);
      tal_display_start = return_value_atoi_42 - 1;
      static char tal[5000000l];
      pt = tal;
      do
      {
        c=fgetc(fp);
        if(c == 0)
          break;

        if(c == 62)
        {
          ungetc(c, fp);
          break;
        }

        const unsigned short int **return_value___ctype_b_loc_44;
        return_value___ctype_b_loc_44=__ctype_b_loc();
        if(c == 45 || !((1024 & (signed int)(*return_value___ctype_b_loc_44)[(signed long int)c]) == 0))
        {
          tmp_post_43 = pt;
          pt = pt + 1l;
          *tmp_post_43 = (char)c;
        }

      }
      while((_Bool)1);
      *pt = (char)0;
      qal2=cutal(qal, qal_display_start, qstart, qend);
      tal2=cutal(tal, tal_display_start, tstart, tend);
      putlocalhom(qal2, tal2, localhomlist + (signed long int)junban[(signed long int)(count - 1)], qstart, tstart, opt, overlapaa);
    }
    return count;
  }
}

// ReadFasta34m10_scoreonly
// file io.c line 3721
extern signed int ReadFasta34m10_scoreonly(struct _IO_FILE *fp, double *dis, signed int nin)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int pos;
  signed int opt;
  double z;
  double bits;
  signed int c;
  signed int *yonda;
  yonda=AllocateIntVec(nin);
  c = 0;
  for( ; !(c >= nin); c = c + 1)
    yonda[(signed long int)c] = 0;
  c = 0;
  for( ; !(c >= nin); c = c + 1)
    dis[(signed long int)c] = 0.0;
  count = 0;
  signed int return_value_feof_1;
  signed int return_value_strncmp_4;
  signed int return_value_strncmp_3;
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_5;
    return_value_strncmp_5=strncmp("+===========+", b, (unsigned long int)13);
    if(return_value_strncmp_5 == 0)
    {
      pos=atoi(b + (signed long int)13);
      char *return_value_strchr_2;
      return_value_strchr_2=strchr(b, 41);
      pt = return_value_strchr_2 + (signed long int)1;
      sscanf(pt, "%d %lf %lf", &opt, &bits, &z);
      if(yonda[(signed long int)pos] == 0)
      {
        dis[(signed long int)pos] = dis[(signed long int)pos] + (double)opt;
        yonda[(signed long int)pos] = 1;
      }

      count = count + 1;
    }

    else
    {
      return_value_strncmp_4=strncmp(">>>", b, (unsigned long int)3);
      if(return_value_strncmp_4 == 0)
      {
        c = 0;
        for( ; !(c >= nin); c = c + 1)
          yonda[(signed long int)c] = 0;
      }

      else
      {
        return_value_strncmp_3=strncmp(">>><<<", b, (unsigned long int)6);
        if(return_value_strncmp_3 == 0)
          break;

      }
    }
  }
  while((_Bool)1);
  free((void *)yonda);
  if(count == 0)
    return -1;

  else
    return count;
}

// ReadFasta34m10_scoreonly_nuc
// file io.c line 3660
extern signed int ReadFasta34m10_scoreonly_nuc(struct _IO_FILE *fp, double *dis, signed int nin)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int pos;
  signed int opt;
  double z;
  double bits;
  signed int c;
  signed int *yonda;
  yonda=AllocateIntVec(nin);
  c = 0;
  for( ; !(c >= nin); c = c + 1)
    yonda[(signed long int)c] = 0;
  c = 0;
  for( ; !(c >= nin); c = c + 1)
    dis[(signed long int)c] = 0.0;
  count = 0;
  signed int return_value_feof_1;
  signed int return_value_strncmp_5;
  signed int return_value_strncmp_4;
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_6;
    return_value_strncmp_6=strncmp("+===========+", b, (unsigned long int)13);
    if(return_value_strncmp_6 == 0)
    {
      pos=atoi(b + (signed long int)13);
      char *return_value_strchr_2;
      return_value_strchr_2=strchr(b, 114);
      if(!(return_value_strchr_2 == ((char *)NULL)))
        continue;

      char *return_value_strchr_3;
      return_value_strchr_3=strchr(b, 93);
      pt = return_value_strchr_3 + (signed long int)1;
      sscanf(pt, "%d %lf %lf", &opt, &bits, &z);
      if(yonda[(signed long int)pos] == 0)
      {
        dis[(signed long int)pos] = dis[(signed long int)pos] + (double)opt;
        yonda[(signed long int)pos] = 1;
      }

      count = count + 1;
    }

    else
    {
      return_value_strncmp_5=strncmp(">>>", b, (unsigned long int)3);
      if(return_value_strncmp_5 == 0)
      {
        c = 0;
        for( ; !(c >= nin); c = c + 1)
          yonda[(signed long int)c] = 0;
      }

      else
      {
        return_value_strncmp_4=strncmp(">>><<<", b, (unsigned long int)6);
        if(return_value_strncmp_4 == 0)
          break;

      }
    }
  }
  while((_Bool)1);
  free((void *)yonda);
  if(count == 0)
    return -1;

  else
    return count;
}

// ReadFasta34m10_scoreonly_nucbk
// file io.c line 3617
signed int ReadFasta34m10_scoreonly_nucbk(struct _IO_FILE *fp, double *dis, signed int nin)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int pos;
  signed int opt;
  double z;
  double bits;
  count = 0;
  signed int return_value_feof_1;
  signed int return_value_strncmp_4;
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_5;
    return_value_strncmp_5=strncmp("+===========+", b, (unsigned long int)13);
    if(return_value_strncmp_5 == 0)
    {
      pos=atoi(b + (signed long int)13);
      char *return_value_strchr_2;
      return_value_strchr_2=strchr(b, 114);
      if(!(return_value_strchr_2 == ((char *)NULL)))
        continue;

      char *return_value_strchr_3;
      return_value_strchr_3=strchr(b, 93);
      pt = return_value_strchr_3 + (signed long int)1;
      sscanf(pt, "%d %lf %lf", &opt, &bits, &z);
      dis[(signed long int)pos] = dis[(signed long int)pos] + (double)opt;
      count = count + 1;
    }

    else
    {
      return_value_strncmp_4=strncmp(">>><<<", b, (unsigned long int)6);
      if(return_value_strncmp_4 == 0)
        break;

    }
  }
  while((_Bool)1);
  if(count == 0)
    return -1;

  else
    return count;
}

// ReadFasta34noalign
// file io.c line 3309
extern signed int ReadFasta34noalign(struct _IO_FILE *fp, double *dis, signed int qmem, char **name, struct _LocalHom *localhomlist)
{
  signed int count = 0;
  char b[256l];
  char *pt;
  signed int opt;
  double z;
  double bits;
  count = 0;
  signed int return_value_feof_1;
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_3;
    return_value_strncmp_3=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_3 == 0)
    {
      static signed int junban[500000l];
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      char *return_value_strchr_2;
      return_value_strchr_2=strchr(b, 41);
      pt = return_value_strchr_2 + (signed long int)1;
      sscanf(pt, "%d %lf %lf", &opt, &bits, &z);
      dis[(signed long int)junban[(signed long int)count]] = (double)opt;
      count = count + 1;
    }

  }
  while((_Bool)1);
  return count;
}

// ReadFasta_sub
// file io.c line 2882
extern signed int ReadFasta_sub(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l])
{
  signed int i;
  signed int count = 0;
  char b[256l];
  signed int junban[500000l];
  count = 0;
  i = 0;
  for( ; !(count >= nseq) && !(i >= 10000000); i = i + 1)
  {
    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_1 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      count = count + 1;
    }

  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    dis[(signed long int)i] = 0.0;
  count = 0;
  i = 0;
  for( ; !(count >= nseq) && !(i >= 100000); i = i + 1)
  {
    char *return_value_fgets_2;
    return_value_fgets_2=fgets(b, 256 - 1, fp);
    if(!(return_value_fgets_2 == ((char *)NULL)))
      break;

    signed int return_value_strncmp_3;
    return_value_strncmp_3=strncmp(name[(signed long int)junban[(signed long int)count]], b, (unsigned long int)20);
    if(return_value_strncmp_3 == 0)
    {
      fgets(b, 256 - 1, fp);
      dis[(signed long int)junban[(signed long int)count]]=atof(b);
      count = count + 1;
    }

  }
  return 0;
}

// ReadOpt
// file io.c line 3911
extern signed int ReadOpt(struct _IO_FILE *fp, signed int *opt, signed int nseq, char (*name)[256l])
{
  signed int i;
  signed int count = 0;
  char b[256l];
  signed int junban[500000l];
  signed int optt;
  signed int initn;
  signed int init1;
  count = 0;
  i = 0;
  for( ; !(count >= nseq) && !(i >= 10000000); i = i + 1)
  {
    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_1 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      sscanf(b + (signed long int)50, "%d %d %d", &initn, &init1, &optt);
      opt[(signed long int)junban[(signed long int)count]] = (signed int)(double)optt;
      count = count + 1;
    }

  }
  return 0;
}

// ReadOpt2
// file io.c line 3933
extern signed int ReadOpt2(struct _IO_FILE *fp, signed int *opt, signed int nseq, char (*name)[256l])
{
  signed int i;
  signed int count = 0;
  char b[256l];
  signed int junban[500000l];
  count = 0;
  i = 0;
  for( ; !(count >= nseq) && !(i >= 10000000); i = i + 1)
  {
    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_1 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      opt[(signed long int)junban[(signed long int)count]]=atoi(b + (signed long int)65);
      count = count + 1;
    }

  }
  return 0;
}

// ReadSsearch
// file io.c line 2915
extern signed int ReadSsearch(struct _IO_FILE *fp, double *dis, signed int nseq, char (*name)[256l])
{
  signed int i;
  signed int count = 0;
  char b[256l];
  signed int junban[500000l];
  signed int opt;
  count = 0;
  i = 0;
  for( ; !(count >= nseq) && !(i >= 10000000); i = i + 1)
  {
    fgets(b, 256 - 1, fp);
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp("+==========+", b, (unsigned long int)12);
    if(return_value_strncmp_1 == 0)
    {
      junban[(signed long int)count]=atoi(b + (signed long int)12);
      sscanf(b + (signed long int)75, "%d", &opt);
      dis[(signed long int)junban[(signed long int)count]] = (double)opt;
      count = count + 1;
    }

  }
  return 0;
}

// ReallocateCharMtx
// file mtxutl.c line 80
void ReallocateCharMtx(char **mtx, signed int l1, signed int l2)
{
  signed int i = 0;
  for( ; !(i >= l1); i = i + 1)
  {
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)mtx[(signed long int)i], (unsigned long int)(l2 + 1) * sizeof(char) /*1ul*/ );
    mtx[(signed long int)i] = (char *)return_value_realloc_1;
    if(mtx[(signed long int)i] == ((char *)NULL))
      fprintf(stderr, "Cannot reallocate %d x %d character matrix.\n", l1, l2);

  }
}

// SSPscore
// file mltaln9.c line 6380
extern double SSPscore(signed int s, char **seq)
{
  signed int i;
  signed int j;
  signed int k;
  signed int gb1;
  signed int gb2;
  signed int gc1;
  signed int gc2;
  signed int cob;
  signed int nglen;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score = (double)0;
  nglen = 0;
  i = 0;
  for( ; !(i >= s + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= s); j = j + 1)
    {
      gc1 = 0;
      gc2 = 0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        gb1 = gc1;
        gb2 = gc2;
        gc1 = (signed int)((signed int)seq[(signed long int)i][(signed long int)k] == 45);
        gc2 = (signed int)((signed int)seq[(signed long int)j][(signed long int)k] == 45);
        cob = (signed int)!(gb1 != 0) * gc1 * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2 + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * gb2 * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * gc1 * gb2 * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2;
        score = score + 0.5 * (double)cob * (double)penalty;
        score = score + (double)amino_dis[(signed long int)(unsigned char)seq[(signed long int)i][(signed long int)k]][(signed long int)(unsigned char)seq[(signed long int)j][(signed long int)k]];
        nglen = nglen + (signed int)!(gc1 != 0) * (signed int)!(gc2 != 0);
      }
    }
  }
  return (double)score;
}

// SSPscore___
// file mltaln9.c line 6309
double SSPscore___(signed int s, char **seq, signed int ex)
{
  signed int i;
  signed int j;
  signed int k;
  signed int gb1;
  signed int gb2;
  signed int gc1;
  signed int gc2;
  signed int cob;
  signed int nglen;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score = (double)0;
  nglen = 0;
  i = ex;
  j = 0;
  for( ; !(j >= s); j = j + 1)
    if(!(j == ex))
    {
      gc1 = 0;
      gc2 = 0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        gb1 = gc1;
        gb2 = gc2;
        gc1 = (signed int)((signed int)seq[(signed long int)i][(signed long int)k] == 45);
        gc2 = (signed int)((signed int)seq[(signed long int)j][(signed long int)k] == 45);
        cob = (signed int)((double)((signed int)!(gb1 != 0) * gc1 * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2 + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * gb2 * (signed int)!(gc2 != 0)) + (double)((signed int)!(gb1 != 0) * gc1 * gb2 * (signed int)!(gc2 != 0)) * 2.0 + (double)(gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2) * 2.0);
        score = score + 0.5 * (double)cob * (double)penalty;
        score = score + (double)amino_dis[(signed long int)(unsigned char)seq[(signed long int)i][(signed long int)k]][(signed long int)(unsigned char)seq[(signed long int)j][(signed long int)k]];
        nglen = nglen + (signed int)!(gc1 != 0) * (signed int)!(gc2 != 0);
      }
    }

  return (double)score;
}

// WriteFloatHat2
// file io.c line 2758
extern void WriteFloatHat2(struct _IO_FILE *hat2p, signed int locnjob, char (*name)[256l], double **mtx)
{
  signed int i;
  signed int j;
  double max = 0.0;
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = 1;
    for( ; !(j >= locnjob + -i); j = j + 1)
      if(mtx[(signed long int)i][(signed long int)j] > max)
        max = mtx[(signed long int)i][(signed long int)j];

  }
  fprintf(hat2p, "%5d\n", 1);
  fprintf(hat2p, "%5d\n", locnjob);
  fprintf(hat2p, " %#6.3f\n", max * 2.5);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
    fprintf(hat2p, "%4d. %s\n", i + 1, (const void *)name[(signed long int)i]);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    j = 1;
    for( ; !(j >= locnjob + -i); j = j + 1)
    {
      fprintf(hat2p, "%#6.3f", mtx[(signed long int)i][(signed long int)j]);
      if(j % 12 == 0 || j == locnjob + -i + -1)
        fprintf(hat2p, "\n");

    }
  }
}

// WriteFloatHat2_pointer
// file io.c line 2737
void WriteFloatHat2_pointer(struct _IO_FILE *hat2p, signed int locnjob, char **name, double **mtx)
{
  signed int i;
  signed int j;
  double max = 0.0;
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = 1;
    for( ; !(j >= locnjob + -i); j = j + 1)
      if(mtx[(signed long int)i][(signed long int)j] > max)
        max = mtx[(signed long int)i][(signed long int)j];

  }
  fprintf(hat2p, "%5d\n", 1);
  fprintf(hat2p, "%5d\n", locnjob);
  fprintf(hat2p, " %#6.3f\n", max * 2.5);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
    fprintf(hat2p, "%4d. %s\n", i + 1, name[(signed long int)i]);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    j = 1;
    for( ; !(j >= locnjob + -i); j = j + 1)
    {
      fprintf(hat2p, "%#6.3f", mtx[(signed long int)i][(signed long int)j]);
      if(j % 12 == 0 || j == locnjob + -i + -1)
        fprintf(hat2p, "\n");

    }
  }
}

// WriteFloatHat2_pointer_halfmtx
// file io.c line 2715
extern void WriteFloatHat2_pointer_halfmtx(struct _IO_FILE *hat2p, signed int locnjob, char **name, double **mtx)
{
  signed int i;
  signed int j;
  signed int ijsa;
  double max = 0.0;
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = 1;
    for( ; !(j >= locnjob + -i); j = j + 1)
      if(mtx[(signed long int)i][(signed long int)j] > max)
        max = mtx[(signed long int)i][(signed long int)j];

  }
  fprintf(hat2p, "%5d\n", 1);
  fprintf(hat2p, "%5d\n", locnjob);
  fprintf(hat2p, " %#6.3f\n", max * 2.5);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
    fprintf(hat2p, "%4d. %s\n", i + 1, name[(signed long int)i]);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= njob); j = j + 1)
    {
      fprintf(hat2p, "%#6.3f", mtx[(signed long int)i][(signed long int)(j - i)]);
      ijsa = j - i;
      if(ijsa % 12 == 0 || ijsa == locnjob + -i + -1)
        fprintf(hat2p, "\n");

    }
  }
}

// WriteForFasta
// file io.c line 4109
extern void WriteForFasta(struct _IO_FILE *fp, signed int locnjob, char **name, signed int *nlen, char **aseq)
{
  signed int i;
  signed int j;
  signed int nalen[500000l];
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(aseq[(signed long int)i]);
    nalen[(signed long int)i] = (signed int)return_value_strlen_1;
    fprintf(fp, ">%s\n", name[(signed long int)i]);
    j = 0;
    for( ; !(j >= nalen[(signed long int)i]); j = j + 60)
    {
      static char b[5000000l];
      strncpy(b, aseq[(signed long int)i] + (signed long int)j, (unsigned long int)60);
      b[(signed long int)60] = (char)0;
      fprintf(fp, "%s\n", (const void *)b);
    }
  }
}

// WriteGapFill
// file io.c line 2367
extern void WriteGapFill(struct _IO_FILE *fp, signed int locnjob, char (*name)[256l], signed int *nlen, char **aseq)
{
  signed int i;
  signed int j;
  signed int nalen[500000l];
  nlenmax = 0;
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    signed int len;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(aseq[(signed long int)i]);
    len = (signed int)return_value_strlen_1;
    if(!(nlenmax >= len))
      nlenmax = len;

  }
  i = 0;
  static char gap[5000000l];
  for( ; !(i >= nlenmax); i = i + 1)
    gap[(signed long int)i] = (char)45;
  gap[(signed long int)nlenmax] = (char)0;
  fprintf(fp, "%5d", locnjob);
  fprintf(fp, "\n");
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    static char buff[5000000l];
    strcpy(buff, aseq[(signed long int)i]);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(aseq[(signed long int)i]);
    strncat(buff, gap, (unsigned long int)nlenmax - return_value_strlen_2);
    buff[(signed long int)nlenmax] = (char)0;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(buff);
    nalen[(signed long int)i] = (signed int)return_value_strlen_3;
    fprintf(fp, "%s\n", (const void *)name[(signed long int)i]);
    fprintf(fp, "%5d\n", nalen[(signed long int)i]);
    j = 0;
    for( ; !(j >= nalen[(signed long int)i]); j = j + 60)
    {
      static char b[5000000l];
      strncpy_caseC(b, buff + (signed long int)j, 60);
      b[(signed long int)60] = (char)0;
      fprintf(fp, "%s\n", (const void *)b);
    }
  }
}

// WriteHat2
// file io.c line 2844
extern void WriteHat2(struct _IO_FILE *hat2p, signed int locnjob, char (*name)[256l], double **mtx)
{
  signed int i;
  signed int j;
  double max = 0.0;
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= locnjob); j = j + 1)
      if(mtx[(signed long int)i][(signed long int)j] > max)
        max = mtx[(signed long int)i][(signed long int)j];

  }
  fprintf(hat2p, "%5d\n", 1);
  fprintf(hat2p, "%5d\n", locnjob);
  fprintf(hat2p, " %#6.3f\n", max * 2.5);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
    fprintf(hat2p, "%4d. %s\n", i + 1, (const void *)name[(signed long int)i]);
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= locnjob); j = j + 1)
    {
      fprintf(hat2p, "%#6.3f", mtx[(signed long int)i][(signed long int)j]);
      if((j + -i) % 12 == 0 || j == locnjob + -1)
        fprintf(hat2p, "\n");

    }
  }
}

// WriteHat2_int
// file io.c line 2779
extern void WriteHat2_int(struct _IO_FILE *hat2p, signed int locnjob, char (*name)[256l], signed int **mtx)
{
  signed int i;
  signed int j;
  double max = 0.0;
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= locnjob); j = j + 1)
      if((double)mtx[(signed long int)i][(signed long int)j] > max)
        max = (double)mtx[(signed long int)i][(signed long int)j];

  }
  max = max / 1000000.0;
  fprintf(hat2p, "%5d\n", 1);
  fprintf(hat2p, "%5d\n", locnjob);
  fprintf(hat2p, " %#6.3f\n", max * 2.5);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
    fprintf(hat2p, "%4d. %s\n", i + 1, (const void *)name[(signed long int)i]);
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= locnjob); j = j + 1)
    {
      fprintf(hat2p, "%#6.3f", (double)mtx[(signed long int)i][(signed long int)j] / 1000000.0);
      if((j + -i) % 12 == 0 || j == locnjob + -1)
        fprintf(hat2p, "\n");

    }
  }
}

// WriteHat2_part_pointer
// file io.c line 2801
extern void WriteHat2_part_pointer(struct _IO_FILE *hat2p, signed int locnjob, signed int nadd, char **name, double **mtx)
{
  signed int i;
  signed int j;
  signed int norg = locnjob - nadd;
  double max = 0.0;
  fprintf(hat2p, "%5d\n", 1);
  fprintf(hat2p, "%5d\n", locnjob);
  fprintf(hat2p, " %#6.3f\n", max * 2.5);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
    fprintf(hat2p, "%4d. %s\n", i + 1, name[(signed long int)i]);
  i = 0;
  for( ; !(i >= norg); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nadd); j = j + 1)
    {
      fprintf(hat2p, "%#6.3f", mtx[(signed long int)i][(signed long int)j]);
      if((1 + j) % 12 == 0 || j == nadd + -1)
        fprintf(hat2p, "\n");

    }
  }
}

// WriteHat2_pointer
// file functions.h line 218
extern void WriteHat2_pointer(struct _IO_FILE *hat2p, signed int locnjob, char **name, double **mtx)
{
  signed int i;
  signed int j;
  double max = 0.0;
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= locnjob); j = j + 1)
      if(mtx[(signed long int)i][(signed long int)j] > max)
        max = mtx[(signed long int)i][(signed long int)j];

  }
  fprintf(hat2p, "%5d\n", 1);
  fprintf(hat2p, "%5d\n", locnjob);
  fprintf(hat2p, " %#6.3f\n", max * 2.5);
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
    fprintf(hat2p, "%4d. %s\n", i + 1, name[(signed long int)i]);
  i = 0;
  for( ; !(i >= locnjob + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= locnjob); j = j + 1)
    {
      fprintf(hat2p, "%#6.3f", mtx[(signed long int)i][(signed long int)j]);
      if((j + -i) % 12 == 0 || j == locnjob + -1)
        fprintf(hat2p, "\n");

    }
  }
}

// addlocalhom2_e
// file mltaln9.c line 7191
static void addlocalhom2_e(struct _LocalHom *pt, struct _LocalHom *lh, signed int sti, signed int stj, signed int eni, signed int enj, double opt, signed int overlp, signed int interm)
{
  if(!(pt == lh))
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
    pt->next = (struct _LocalHom *)return_value_calloc_1;
    pt = pt->next;
    pt->next = (struct _LocalHom *)(void *)0;
    lh->last = pt;
  }

  else
    lh->last = pt;
  lh->nokori = lh->nokori + 1;
  pt->start1 = sti;
  pt->start2 = stj;
  pt->end1 = eni;
  pt->end2 = enj;
  pt->opt = opt;
  pt->extended = interm;
  pt->overlapaa = overlp;
}

// addlocalhom_r
// file io.c line 212
static signed int addlocalhom_r(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa, signed int skip)
{
  signed int pos1;
  signed int pos2;
  signed int start1;
  signed int start2;
  signed int end1;
  signed int end2;
  char *pt1;
  char *pt2;
  double score;
  double sumscore;
  signed int sumoverlap;
  struct _LocalHom *tmppt = (struct _LocalHom *)(void *)0;
  signed int st;
  signed int nlocalhom = 0;
  pt1 = al1;
  pt2 = al2;
  pos1 = off1;
  pos2 = off2;
  sumscore = 0.0;
  sumoverlap = 0;
  start1 = 0;
  start2 = 0;
  fprintf(stderr, "pt1 = \n%s\n, pt2 = \n%s\n", pt1, pt2);
  if(!(skip == 0))
  {
    do
    {
      skip = skip - 1;
      if(!(skip >= 1))
        break;

      localhompt = localhompt->next;
    }
    while((_Bool)1);
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
    localhompt->next = (struct _LocalHom *)return_value_calloc_1;
    localhompt = localhompt->next;
    fprintf(stderr, "tmppt = %p, localhompt = %p\n", (void *)tmppt, (void *)localhompt);
  }

  tmppt = localhompt;
  st = 0;
  score = 0.0;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  signed int tmp_post_3;
  char *tmp_post_6;
  char *tmp_post_7;
  while(!((signed int)*pt1 == 0))
  {
    fprintf(stderr, "In in while loop\n");
    fprintf(stderr, "pt = %c, %c, st=%d\n", *pt1, *pt2, st);
    if(st == 1)
    {
      if((signed int)*pt1 == 45)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (signed int)*pt2 == 45 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
    {
      end1 = pos1 - 1;
      end2 = pos2 - 1;
      tmp_post_3 = nlocalhom;
      nlocalhom = nlocalhom + 1;
      if(tmp_post_3 >= 1)
      {
        void *return_value_calloc_2;
        return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
        tmppt->next = (struct _LocalHom *)return_value_calloc_2;
        tmppt = tmppt->next;
        tmppt->next = (struct _LocalHom *)(void *)0;
      }

      tmppt->start1 = start1;
      tmppt->start2 = start2;
      tmppt->end1 = end1;
      tmppt->end2 = end2;
      sumscore = sumscore + score;
      sumoverlap = sumoverlap + (end2 - start2) + 1;
      fprintf(stderr, "score (1)= %f\n", score);
      fprintf(stderr, "al1: %d - %d\n", start1, end1);
      fprintf(stderr, "al2: %d - %d\n", start2, end2);
      score = 0.0;
      st = 0;
    }

    else
      if(!((signed int)*pt1 == 45))
      {
        if(!((signed int)*pt2 == 45))
        {
          if(st == 0)
          {
            start1 = pos1;
            start2 = pos2;
            st = 1;
          }

          score = score + (double)n_dis[(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt1]][(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt2]];
        }

      }

    tmp_post_6 = pt1;
    pt1 = pt1 + 1l;
    if(!((signed int)*tmp_post_6 == 45))
      pos1 = pos1 + 1;

    tmp_post_7 = pt2;
    pt2 = pt2 + 1l;
    if(!((signed int)*tmp_post_7 == 45))
      pos2 = pos2 + 1;

  }
  signed int tmp_post_9 = nlocalhom;
  nlocalhom = nlocalhom + 1;
  if(tmp_post_9 >= 1)
  {
    void *return_value_calloc_8;
    return_value_calloc_8=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
    tmppt->next = (struct _LocalHom *)return_value_calloc_8;
    tmppt = tmppt->next;
    tmppt->next = (struct _LocalHom *)(void *)0;
  }

  end1 = pos1 - 1;
  end2 = pos2 - 1;
  tmppt->start1 = start1;
  tmppt->start2 = start2;
  tmppt->end1 = end1;
  tmppt->end2 = end2;
  sumscore = sumscore + score;
  sumoverlap = sumoverlap + (end2 - start2) + 1;
  fprintf(stderr, "score (2)= %f\n", score);
  fprintf(stderr, "al1: %d - %d\n", start1, end1);
  fprintf(stderr, "al2: %d - %d\n", start2, end2);
  tmppt = localhompt;
  for( ; !(tmppt == ((struct _LocalHom *)NULL)); tmppt = tmppt->next)
  {
    tmppt->overlapaa = sumoverlap;
    tmppt->opt = ((sumscore * 5.8) / (double)600) / (double)sumoverlap;
  }
  return nlocalhom;
}

// addonetip
// file mltaln9.c line 8813
extern signed int addonetip(signed int njobc, signed int ***topolc, double **lenc, double **iscorec, signed int ***topol, double **len, struct _Treedep *dep, signed int treeout, struct _Addtree *addtree, signed int iadd, char **name, signed int *alnleninnode, signed int *nogaplen, signed int noalign)
{
  signed int i;
  signed int j;
  signed int mem0;
  signed int mem1;
  signed int posinnew;
  signed int m;
  signed int nstep;
  signed int norg;
  double minscore;
  double minscoreo;
  double eff0;
  double eff1;
  double addedlen;
  double tmpmin;
  signed int nearest;
  signed int nearesto;
  signed int repnorg;
  signed int *leaf2node;
  signed int *additionaltopol;
  struct _Bchain *ac;
  struct _Bchain *acpt;
  struct _Bchain *acori;
  struct _Bchain *acnext;
  struct _Bchain *acprev;
  signed int neighbor;
  char *neighborlist;
  char *npt;
  signed int reflen;
  signed int nearestnode;
  signed int nogaplentoadd;
  signed int *topoldum0 = (signed int *)(void *)0;
  signed int *topoldum1 = (signed int *)(void *)0;
  signed int *topolo0;
  signed int *topolo1;
  signed int seqlengthcondition;
  double sueff1_double_local = 1.0 - sueff_global;
  double sueff05_double_local = sueff_global * 0.5;
  norg = njobc - 1;
  nstep = njobc - 2;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)2, sizeof(signed int) /*4ul*/ );
  additionaltopol = (signed int *)return_value_calloc_1;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)norg, sizeof(signed int) /*4ul*/ );
  leaf2node = (signed int *)return_value_calloc_2;
  if(!(treeout == 0))
  {
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)(norg * 30), sizeof(char) /*1ul*/ );
    neighborlist = (char *)return_value_calloc_3;
  }

  if(leaf2node == ((signed int *)NULL))
  {
    reporterr("Cannot allocate leaf2node.\n");
    exit(1);
  }

  additionaltopol[(signed long int)0] = norg;
  additionaltopol[(signed long int)1] = -1;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc((unsigned long int)norg * sizeof(struct _Bchain) /*24ul*/ );
  ac = (struct _Bchain *)return_value_malloc_4;
  i = 0;
  for( ; !(i >= norg); i = i + 1)
  {
    (ac + (signed long int)i)->next = ac + (signed long int)i + (signed long int)1;
    (ac + (signed long int)i)->prev = (ac + (signed long int)i) - (signed long int)1;
    (ac + (signed long int)i)->pos = i;
  }
  (ac + (signed long int)(norg - 1))->next = (struct _Bchain *)(void *)0;
  void *return_value_malloc_5;
  return_value_malloc_5=malloc((unsigned long int)1 * sizeof(struct _Bchain) /*24ul*/ );
  acori = (struct _Bchain *)return_value_malloc_5;
  acori->next = ac;
  acori->pos = -1;
  (ac + (signed long int)0)->prev = acori;
  minscore = 9999.9;
  nearest = -1;
  i = 0;
  for( ; !(i >= norg); i = i + 1)
  {
    tmpmin = iscorec[(signed long int)i][(signed long int)(norg - i)];
    if(minscore > tmpmin)
    {
      minscore = tmpmin;
      nearest = i;
    }

  }
  nearesto = nearest;
  minscoreo = minscore;
  posinnew = 0;
  repnorg = -1;
  nogaplentoadd = nogaplen[(signed long int)norg];
  i = 0;
  for( ; !(i >= norg); i = i + 1)
    leaf2node[(signed long int)i] = -1;
  i = 0;
  for( ; !(i >= nstep); i = i + 1)
  {
    mem0 = topol[(signed long int)i][(signed long int)0][(signed long int)0];
    mem1 = topol[(signed long int)i][(signed long int)1][(signed long int)0];
    nearestnode = leaf2node[(signed long int)nearest];
    if(nearestnode == -1)
      reflen = nogaplen[(signed long int)nearest];

    else
      reflen = alnleninnode[(signed long int)nearestnode];
    if(!(noalign == 0))
      seqlengthcondition = 1;

    else
      seqlengthcondition = (signed int)(nogaplentoadd <= reflen);
    if(repnorg == -1)
    {
      if((dep + (signed long int)i)->distfromtip * 2.000000 > minscore)
      {
        if(!(seqlengthcondition == 0))
        {
          if(nearestnode == -1)
          {
            void *return_value_realloc_6;
            return_value_realloc_6=realloc((void *)topolc[(signed long int)posinnew][(signed long int)0], (unsigned long int)(1 + 1) * sizeof(signed int) /*4ul*/ );
            topolc[(signed long int)posinnew][(signed long int)0] = (signed int *)return_value_realloc_6;
            topolc[(signed long int)posinnew][(signed long int)0][(signed long int)0] = nearest;
            topolc[(signed long int)posinnew][(signed long int)0][(signed long int)1] = -1;
            lenc[(signed long int)posinnew][(signed long int)0] = minscore / (double)2;
            addedlen = lenc[(signed long int)posinnew][(signed long int)0];
          }

          else
          {
            signed int return_value_countmem_7;
            return_value_countmem_7=countmem(topol[(signed long int)nearestnode][(signed long int)0]);
            signed int return_value_countmem_8;
            return_value_countmem_8=countmem(topol[(signed long int)nearestnode][(signed long int)1]);
            void *return_value_realloc_9;
            return_value_realloc_9=realloc((void *)topolc[(signed long int)posinnew][(signed long int)0], (unsigned long int)(return_value_countmem_7 + return_value_countmem_8 + 1) * sizeof(signed int) /*4ul*/ );
            topolc[(signed long int)posinnew][(signed long int)0] = (signed int *)return_value_realloc_9;
            intcpy(topolc[(signed long int)posinnew][(signed long int)0], topol[(signed long int)nearestnode][(signed long int)0]);
            intcat(topolc[(signed long int)posinnew][(signed long int)0], topol[(signed long int)nearestnode][(signed long int)1]);
            lenc[(signed long int)posinnew][(signed long int)0] = (dep + (signed long int)i)->distfromtip - minscore / (double)2;
            addedlen = lenc[(signed long int)posinnew][(signed long int)0];
          }
          neighbor=lastmem(topolc[(signed long int)posinnew][(signed long int)0]);
          if(!(treeout == 0))
          {
            (addtree + (signed long int)iadd)->nearest = nearesto;
            (addtree + (signed long int)iadd)->dist1 = minscoreo;
            (addtree + (signed long int)iadd)->dist2 = minscore;
            neighborlist[(signed long int)0] = (char)0;
            npt = neighborlist;
            j = 0;
            for( ; !((*topolc[(signed long int)posinnew])[(signed long int)j] == -1); j = j + 1)
            {
              sprintf(npt, "%d ", topolc[(signed long int)posinnew][(signed long int)0][(signed long int)j] + 1);
              unsigned long int return_value_strlen_10;
              return_value_strlen_10=strlen(npt);
              npt = npt + (signed long int)return_value_strlen_10;
            }
            void *return_value_calloc_11;
            return_value_calloc_11=calloc((unsigned long int)((npt - neighborlist) + (signed long int)1), sizeof(char) /*1ul*/ );
            (addtree + (signed long int)iadd)->neighbors = (char *)return_value_calloc_11;
            strcpy((addtree + (signed long int)iadd)->neighbors, neighborlist);
          }

          void *return_value_realloc_12;
          return_value_realloc_12=realloc((void *)topolc[(signed long int)posinnew][(signed long int)1], (unsigned long int)(1 + 1) * sizeof(signed int) /*4ul*/ );
          topolc[(signed long int)posinnew][(signed long int)1] = (signed int *)return_value_realloc_12;
          topolc[(signed long int)posinnew][(signed long int)1][(signed long int)0] = norg;
          topolc[(signed long int)posinnew][(signed long int)1][(signed long int)1] = -1;
          lenc[(signed long int)posinnew][(signed long int)1] = minscore / (double)2;
          repnorg = nearest;
          posinnew = posinnew + 1;
        }

      }

    }

    eff0 = iscorec[(signed long int)mem0][(signed long int)(norg - mem0)];
    eff1 = iscorec[(signed long int)mem1][(signed long int)(norg - mem1)];
    iscorec[(signed long int)mem0][(signed long int)(norg - mem0)] = (eff0 < eff1 ? eff0 : eff1) * sueff1_double_local + (eff0 + eff1) * sueff05_double_local;
    iscorec[(signed long int)mem1][(signed long int)(norg - mem1)] = 9999.9;
    acprev = (ac + (signed long int)mem1)->prev;
    acnext = (ac + (signed long int)mem1)->next;
    acprev->next = acnext;
    if(!(acnext == ((struct _Bchain *)NULL)))
      acnext->prev = acprev;

    if(nearest == mem0 || nearest == mem1)
    {
      minscore = 9999.9;
      acpt = acori->next;
      for( ; !(acpt == ((struct _Bchain *)NULL)); acpt = acpt->next)
      {
        j = acpt->pos;
        tmpmin = iscorec[(signed long int)j][(signed long int)(norg - j)];
        if(minscore > tmpmin)
        {
          minscore = tmpmin;
          nearest = j;
        }

      }
    }

    if(*(*topol[(signed long int)i]) == repnorg)
    {
      signed int return_value_countmem_13;
      return_value_countmem_13=countmem(topol[(signed long int)i][(signed long int)0]);
      void *return_value_realloc_14;
      return_value_realloc_14=realloc((void *)topolc[(signed long int)posinnew][(signed long int)0], (unsigned long int)(return_value_countmem_13 + 2) * sizeof(signed int) /*4ul*/ );
      topolc[(signed long int)posinnew][(signed long int)0] = (signed int *)return_value_realloc_14;
      intcpy(topolc[(signed long int)posinnew][(signed long int)0], topol[(signed long int)i][(signed long int)0]);
      intcat(topolc[(signed long int)posinnew][(signed long int)0], additionaltopol);
      lenc[(signed long int)posinnew][(signed long int)0] = len[(signed long int)i][(signed long int)0] - addedlen;
      addedlen = 0.0;
    }

    else
    {
      signed int return_value_countmem_15;
      return_value_countmem_15=countmem(topol[(signed long int)i][(signed long int)0]);
      void *return_value_realloc_16;
      return_value_realloc_16=realloc((void *)topolc[(signed long int)posinnew][(signed long int)0], (unsigned long int)(return_value_countmem_15 + 1) * sizeof(signed int) /*4ul*/ );
      topolc[(signed long int)posinnew][(signed long int)0] = (signed int *)return_value_realloc_16;
      intcpy(topolc[(signed long int)posinnew][(signed long int)0], topol[(signed long int)i][(signed long int)0]);
      lenc[(signed long int)posinnew][(signed long int)0] = len[(signed long int)i][(signed long int)0];
    }
    if(*topol[(signed long int)i][1l] == repnorg)
    {
      signed int return_value_countmem_17;
      return_value_countmem_17=countmem(topol[(signed long int)i][(signed long int)1]);
      void *return_value_realloc_18;
      return_value_realloc_18=realloc((void *)topolc[(signed long int)posinnew][(signed long int)1], (unsigned long int)(return_value_countmem_17 + 2) * sizeof(signed int) /*4ul*/ );
      topolc[(signed long int)posinnew][(signed long int)1] = (signed int *)return_value_realloc_18;
      intcpy(topolc[(signed long int)posinnew][(signed long int)1], topol[(signed long int)i][(signed long int)1]);
      intcat(topolc[(signed long int)posinnew][(signed long int)1], additionaltopol);
      lenc[(signed long int)posinnew][(signed long int)1] = len[(signed long int)i][(signed long int)1] - addedlen;
      addedlen = 0.0;
      repnorg = topolc[(signed long int)posinnew][(signed long int)0][(signed long int)0];
    }

    else
    {
      signed int return_value_countmem_19;
      return_value_countmem_19=countmem(topol[(signed long int)i][(signed long int)1]);
      void *return_value_realloc_20;
      return_value_realloc_20=realloc((void *)topolc[(signed long int)posinnew][(signed long int)1], (unsigned long int)(return_value_countmem_19 + 1) * sizeof(signed int) /*4ul*/ );
      topolc[(signed long int)posinnew][(signed long int)1] = (signed int *)return_value_realloc_20;
      intcpy(topolc[(signed long int)posinnew][(signed long int)1], topol[(signed long int)i][(signed long int)1]);
      lenc[(signed long int)posinnew][(signed long int)1] = len[(signed long int)i][(signed long int)1];
    }
    j = 0;
    do
    {
      m = topol[(signed long int)i][(signed long int)0][(signed long int)j];
      if(m == -1)
        break;

      leaf2node[(signed long int)m] = i;
      j = j + 1;
    }
    while((_Bool)1);
    j = 0;
    do
    {
      m = topol[(signed long int)i][(signed long int)1][(signed long int)j];
      if(m == -1)
        break;

      leaf2node[(signed long int)m] = i;
      j = j + 1;
    }
    while((_Bool)1);
    posinnew = posinnew + 1;
  }
  if(!(nstep == 0))
  {
    i = i - 1;
    topolo0 = topol[(signed long int)i][(signed long int)0];
    topolo1 = topol[(signed long int)i][(signed long int)1];
  }

  else
  {
    void *return_value_calloc_21;
    return_value_calloc_21=calloc((unsigned long int)2, sizeof(signed int) /*4ul*/ );
    topoldum0 = (signed int *)return_value_calloc_21;
    void *return_value_calloc_22;
    return_value_calloc_22=calloc((unsigned long int)1, sizeof(signed int) /*4ul*/ );
    topoldum1 = (signed int *)return_value_calloc_22;
    topoldum0[(signed long int)0] = 0;
    topoldum0[(signed long int)1] = -1;
    topoldum1[(signed long int)0] = -1;
    topolo0 = topoldum0;
    topolo1 = topoldum1;
  }
  if(repnorg == -1)
  {
    signed int return_value_countmem_23;
    return_value_countmem_23=countmem(topolo0);
    signed int return_value_countmem_24;
    return_value_countmem_24=countmem(topolo1);
    void *return_value_realloc_25;
    return_value_realloc_25=realloc((void *)topolc[(signed long int)posinnew][(signed long int)0], (unsigned long int)(return_value_countmem_23 + return_value_countmem_24 + 1) * sizeof(signed int) /*4ul*/ );
    topolc[(signed long int)posinnew][(signed long int)0] = (signed int *)return_value_realloc_25;
    intcpy(topolc[(signed long int)posinnew][(signed long int)0], topolo0);
    intcat(topolc[(signed long int)posinnew][(signed long int)0], topolo1);
    if(!(nstep == 0))
      lenc[(signed long int)posinnew][(signed long int)0] = minscore / (double)2 - (dep + (signed long int)(nstep - 1))->distfromtip;

    else
      lenc[(signed long int)posinnew][(signed long int)0] = minscore / (double)2;
    void *return_value_realloc_26;
    return_value_realloc_26=realloc((void *)topolc[(signed long int)posinnew][(signed long int)1], (unsigned long int)2 * sizeof(signed int) /*4ul*/ );
    topolc[(signed long int)posinnew][(signed long int)1] = (signed int *)return_value_realloc_26;
    intcpy(topolc[(signed long int)posinnew][(signed long int)1], additionaltopol);
    lenc[(signed long int)posinnew][(signed long int)1] = minscore / (double)2;
    neighbor = norg - 1;
    if(!(treeout == 0))
    {
      (addtree + (signed long int)iadd)->nearest = nearesto;
      (addtree + (signed long int)iadd)->dist1 = minscoreo;
      (addtree + (signed long int)iadd)->dist2 = minscore;
      neighborlist[(signed long int)0] = (char)0;
      npt = neighborlist;
      j = 0;
      for( ; !((*topolc[(signed long int)posinnew])[(signed long int)j] == -1); j = j + 1)
      {
        sprintf(npt, "%d ", topolc[(signed long int)posinnew][(signed long int)0][(signed long int)j] + 1);
        unsigned long int return_value_strlen_27;
        return_value_strlen_27=strlen(npt);
        npt = npt + (signed long int)return_value_strlen_27;
      }
      void *return_value_calloc_28;
      return_value_calloc_28=calloc((unsigned long int)((npt - neighborlist) + (signed long int)1), sizeof(char) /*1ul*/ );
      (addtree + (signed long int)iadd)->neighbors = (char *)return_value_calloc_28;
      strcpy((addtree + (signed long int)iadd)->neighbors, neighborlist);
    }

  }

  if(!(topoldum0 == ((signed int *)NULL)))
    free((void *)topoldum0);

  if(!(topoldum1 == ((signed int *)NULL)))
    free((void *)topoldum1);

  free((void *)leaf2node);
  free((void *)additionaltopol);
  free((void *)ac);
  free((void *)acori);
  if(!(treeout == 0))
    free((void *)neighborlist);

  return neighbor;
}

// allSpace
// file io.c line 1063
extern signed int allSpace(char *str)
{
  signed int value = 1;
  const unsigned short int **return_value___ctype_b_loc_1;
  char *tmp_post_2;
  for( ; !(*str == 0); value = value * (signed int)!(((signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)*tmp_post_2] & (signed int)(unsigned short int)2048) != 0))
  {
    return_value___ctype_b_loc_1=__ctype_b_loc();
    tmp_post_2 = str;
    str = str + 1l;
  }
  return value;
}

// ambiguousscore
// file constants.c line 25
static void ambiguousscore(signed int *amino_n, signed int **n_dis)
{
  signed int i = 0;
  for( ; !(i >= 26); i = i + 1)
  {
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)114]]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)121]]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)107]]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)109]]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)115]]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)119]]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)98]]=shishagonyuu(((double)1 / (double)3) * (double)(n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)100]]=shishagonyuu(((double)1 / (double)3) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)104]]=shishagonyuu(((double)1 / (double)3) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)i]));
    n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)118]]=shishagonyuu(((double)1 / (double)3) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)i] + n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)i]));
    n_dis[(signed long int)amino_n[(signed long int)114]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)114]];
    n_dis[(signed long int)amino_n[(signed long int)121]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)121]];
    n_dis[(signed long int)amino_n[(signed long int)107]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)107]];
    n_dis[(signed long int)amino_n[(signed long int)109]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)109]];
    n_dis[(signed long int)amino_n[(signed long int)115]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)115]];
    n_dis[(signed long int)amino_n[(signed long int)119]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)119]];
    n_dis[(signed long int)amino_n[(signed long int)98]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)98]];
    n_dis[(signed long int)amino_n[(signed long int)100]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)100]];
    n_dis[(signed long int)amino_n[(signed long int)104]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)104]];
    n_dis[(signed long int)amino_n[(signed long int)118]][(signed long int)i] = n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)118]];
  }
  i = amino_n[(signed long int)114];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)amino_n[(signed long int)97]] + n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)amino_n[(signed long int)103]]));
  i = amino_n[(signed long int)121];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)amino_n[(signed long int)99]] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)amino_n[(signed long int)116]]));
  i = amino_n[(signed long int)107];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)amino_n[(signed long int)103]] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)amino_n[(signed long int)116]]));
  i = amino_n[(signed long int)109];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)amino_n[(signed long int)97]] + n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)amino_n[(signed long int)99]]));
  i = amino_n[(signed long int)115];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)amino_n[(signed long int)103]] + n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)amino_n[(signed long int)99]]));
  i = amino_n[(signed long int)119];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)2) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)amino_n[(signed long int)97]] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)amino_n[(signed long int)116]]));
  i = amino_n[(signed long int)98];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)3) * (double)(n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)amino_n[(signed long int)99]] + n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)amino_n[(signed long int)103]] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)amino_n[(signed long int)116]]));
  i = amino_n[(signed long int)100];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)3) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)amino_n[(signed long int)97]] + n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)amino_n[(signed long int)103]] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)amino_n[(signed long int)116]]));
  i = amino_n[(signed long int)104];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)3) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)amino_n[(signed long int)97]] + n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)amino_n[(signed long int)99]] + n_dis[(signed long int)amino_n[(signed long int)116]][(signed long int)amino_n[(signed long int)116]]));
  i = amino_n[(signed long int)118];
  n_dis[(signed long int)i][(signed long int)i]=shishagonyuu(((double)1 / (double)3) * (double)(n_dis[(signed long int)amino_n[(signed long int)97]][(signed long int)amino_n[(signed long int)97]] + n_dis[(signed long int)amino_n[(signed long int)99]][(signed long int)amino_n[(signed long int)99]] + n_dis[(signed long int)amino_n[(signed long int)103]][(signed long int)amino_n[(signed long int)103]]));
}

// arguments
// file dndpre.c line 108
void arguments(signed int argc, char **argv)
{
  signed int c;
  nadd = 0;
  nthread = 1;
  alg = (char)88;
  fmodel = 0;
  treeout = 0;
  scoremtx = 1;
  nblosum = 62;
  dorp = 100009;
  inputfile = (char *)(void *)0;
  ppenalty = 100009;
  ppenalty_ex = 100009;
  poffset = 100009;
  kimuraR = 100009;
  pamN = 100009;
  usenaivescoreinsteadofalignmentscore = 0;
  double return_value_atof_1;
  double return_value_atof_2;
  double return_value_atof_3;
  do
  {
    argc = argc - 1;
    if(!(argc >= 1))
      break;

    argv = argv + 1l;
    if(!((signed int)*(*argv) == 45))
      break;

    do
    {
      argv[(signed long int)0] = argv[(signed long int)0] + 1l;
      c = (signed int)*argv[(signed long int)0];
      if(c == 0)
        break;

      switch(c)
      {
        case 90:
        {
          usenaivescoreinsteadofalignmentscore = 1;
          break;
        }
        case 116:
        {
          treeout = 49;
          break;
        }
        case 68:
        {
          dorp = 100;
          break;
        }
        case 97:
        {
          fmodel = 1;
          break;
        }
        case 80:
        {
          dorp = 112;
          break;
        }
        case 75:
          break;
        case 73:
        {
          argv = argv + 1l;
          nadd=myatoi(*argv);
          fprintf(stderr, "nadd = %d\n", nadd);
          argc = argc - 1;
          goto nextoption;
        }
        case 102:
        {
          argv = argv + 1l;
          return_value_atof_1=atof(*argv);
          ppenalty = (signed int)(return_value_atof_1 * (double)1000 - 0.5);
          argc = argc - 1;
          goto nextoption;
        }
        case 103:
        {
          argv = argv + 1l;
          return_value_atof_2=atof(*argv);
          ppenalty_ex = (signed int)(return_value_atof_2 * (double)1000 - 0.5);
          argc = argc - 1;
          goto nextoption;
        }
        case 104:
        {
          argv = argv + 1l;
          return_value_atof_3=atof(*argv);
          poffset = (signed int)(return_value_atof_3 * (double)1000 - 0.5);
          argc = argc - 1;
          goto nextoption;
        }
        case 107:
        {
          argv = argv + 1l;
          kimuraR=myatoi(*argv);
          argc = argc - 1;
          goto nextoption;
        }
        case 98:
        {
          argv = argv + 1l;
          nblosum=myatoi(*argv);
          scoremtx = 1;
          argc = argc - 1;
          goto nextoption;
        }
        case 106:
        {
          argv = argv + 1l;
          pamN=myatoi(*argv);
          scoremtx = 0;
          TMorJTT = 201;
          fprintf(stderr, "jtt %d\n", pamN);
          argc = argc - 1;
          goto nextoption;
        }
        case 109:
        {
          argv = argv + 1l;
          pamN=myatoi(*argv);
          scoremtx = 0;
          TMorJTT = 202;
          fprintf(stderr, "TM %d\n", pamN);
          argc = argc - 1;
          goto nextoption;
        }
        case 105:
        {
          argv = argv + 1l;
          inputfile = *argv;
          fprintf(stderr, "inputfile = %s\n", inputfile);
          argc = argc - 1;
          goto nextoption;
        }
        case 77:
        {
          argv = argv + 1l;
          maxdist=myatoi(*argv);
          fprintf(stderr, "maxdist = %d\n", maxdist);
          argc = argc - 1;
          goto nextoption;
        }
        case 67:
        {
          argv = argv + 1l;
          nthread=myatoi(*argv);
          fprintf(stderr, "nthread = %d\n", nthread);
          argc = argc - 1;
          goto nextoption;
        }
        default:
          ;
      }
    }
    while((_Bool)1);

  nextoption:
    ;
  }
  while((_Bool)1);
  if(!(argc == 0))
  {
    fprintf(stderr, "options: Check source file !\n");
    exit(1);
  }

}

// athread
// file dndpre.c line 29
void * athread(void *arg)
{
  struct _thread_arg *targ = (struct _thread_arg *)arg;
  signed int athread__1__njob = targ->njob;
  signed int thread_no = targ->thread_no;
  double *selfscore = targ->selfscore;
  double **mtx = targ->mtx;
  char **seq = targ->seq;
  signed int **skiptable = targ->skiptable;
  struct _jobtable *jobpospt = targ->jobpospt;
  signed int i;
  signed int j;
  double ssi;
  double ssj;
  double bunbo;
  double mtxv;
  double return_value_naivepairscorefast_1;
  double return_value_naivepairscorefast_2;
  if(athread__1__njob == 1)
    return (void *)0;

  else
    for( ; (_Bool)1; mtx[(signed long int)i][(signed long int)j] = mtxv)
    {
      pthread_mutex_lock(targ->mutex);
      j = jobpospt->j;
      i = jobpospt->i;
      j = j + 1;
      if(j == athread__1__njob)
      {
        fprintf(stderr, "%4d/%4d (thread %4d), dndpre\r", i + 1, athread__1__njob, thread_no);
        i = i + 1;
        j = i + 1;
        if(i == athread__1__njob + -1)
        {
          pthread_mutex_unlock(targ->mutex);
          return (void *)0;
        }

      }

      jobpospt->j = j;
      jobpospt->i = i;
      pthread_mutex_unlock(targ->mutex);
      ssi = selfscore[(signed long int)i];
      ssj = selfscore[(signed long int)j];
      bunbo = ssi < ssj ? ssi : ssj;
      if(IEEE_FLOAT_EQUAL(bunbo, 0.0))
        mtxv = (double)maxdist;

      else
        if(!(usenaivescoreinsteadofalignmentscore == 0))
        {
          return_value_naivepairscorefast_1=naivepairscorefast(seq[(signed long int)i], seq[(signed long int)j], skiptable[(signed long int)i], skiptable[(signed long int)j], (signed int)0.0);
          mtxv = (double)maxdist * (1.0 - (double)return_value_naivepairscorefast_1 / bunbo);
        }

        else
        {
          return_value_naivepairscorefast_2=naivepairscorefast(seq[(signed long int)i], seq[(signed long int)j], skiptable[(signed long int)i], skiptable[(signed long int)j], penalty);
          mtxv = (double)maxdist * (1.0 - (double)return_value_naivepairscorefast_2 / bunbo);
        }
      if(mtxv < 0.0 || mtxv > 9.0)
      {
        fprintf(stderr, "Distance %d-%d is strange, %f.\n", i, j, mtxv);
        exit(1);
      }

    }
}

// bscore_calc
// file mltaln9.c line 5618
extern double bscore_calc(char **seq, signed int s, double **eff)
{
  signed int i;
  signed int j;
  signed int k;
  signed int gb1;
  signed int gb2;
  signed int gc1;
  signed int gc2;
  signed int cob;
  signed int nglen;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  signed long int score = (signed long int)0;
  nglen = 0;
  i = 0;
  for( ; !(i >= s + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= s); j = j + 1)
    {
      double efficient = eff[(signed long int)i][(signed long int)j];
      gc1 = 0;
      gc2 = 0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        gb1 = gc1;
        gb2 = gc2;
        gc1 = (signed int)((signed int)seq[(signed long int)i][(signed long int)k] == 45);
        gc2 = (signed int)((signed int)seq[(signed long int)j][(signed long int)k] == 45);
        cob = (signed int)((double)((signed int)!(gb1 != 0) * gc1 * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2 + (signed int)!(gb1 != 0) * gc1 * gb2 * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2) + (double)(gb1 * (signed int)!(gc1 != 0) * gb2 * gc2) * 1.0 + (double)(gb1 * gc1 * gb2 * (signed int)!(gc2 != 0)) * 1.0);
        score = score + (signed long int)((double)((signed long int)cob * (signed long int)penalty) * efficient);
        score = score + (signed long int)((double)(signed long int)amino_dis[(signed long int)(unsigned char)seq[(signed long int)i][(signed long int)k]][(signed long int)(unsigned char)seq[(signed long int)j][(signed long int)k]] * efficient);
        nglen = nglen + (signed int)!(gc1 != 0) * (signed int)!(gc2 != 0);
      }
    }
  }
  return (double)score / (double)nglen + 400.0 * (double)!(scoremtx != 0);
}

// calcfreq
// file constants.c line 106
static void calcfreq(signed int nseq, char **seq, double *datafreq)
{
  signed int i;
  signed int j;
  signed int l;
  signed int aan;
  double total;
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    datafreq[(signed long int)i] = 0.0;
  total = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    l = (signed int)return_value_strlen_1;
    j = 0;
    for( ; !(j >= l); j = j + 1)
    {
      aan = amino_n[(signed long int)(signed int)seq[(signed long int)i][(signed long int)j]];
      if(aan >= 0 && !(aan >= nscoredalphabets))
      {
        if(!((signed int)seq[(signed long int)i][(signed long int)j] == 45))
        {
          datafreq[(signed long int)aan] = datafreq[(signed long int)aan] + 1.0;
          total = total + 1.0;
        }

      }

    }
  }
  total = 0.0;
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    total = total + datafreq[(signed long int)i];
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    datafreq[(signed long int)i] = datafreq[(signed long int)i] / (double)total;
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    if(datafreq[(signed long int)i] < 0.0001)
      datafreq[(signed long int)i] = 0.0001;

  total = 0.0;
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    total = total + datafreq[(signed long int)i];
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    datafreq[(signed long int)i] = datafreq[(signed long int)i] / (double)total;
}

// calcfreq_extended
// file constants.c line 140
static void calcfreq_extended(signed int nseq, char **seq, double *datafreq)
{
  signed int i;
  signed int j;
  signed int l;
  signed int aan;
  double total;
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    datafreq[(signed long int)i] = 0.0;
  total = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    l = (signed int)return_value_strlen_1;
    j = 0;
    for( ; !(j >= l); j = j + 1)
    {
      aan = amino_n[(signed long int)(unsigned char)seq[(signed long int)i][(signed long int)j]];
      if(aan >= 0 && !(aan >= nscoredalphabets))
      {
        if(!((signed int)seq[(signed long int)i][(signed long int)j] == 45))
        {
          datafreq[(signed long int)aan] = datafreq[(signed long int)aan] + 1.0;
          total = total + 1.0;
        }

      }

    }
  }
  total = 0.0;
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    total = total + datafreq[(signed long int)i];
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    datafreq[(signed long int)i] = datafreq[(signed long int)i] / (double)total;
  total = 0.0;
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    total = total + datafreq[(signed long int)i];
  i = 0;
  for( ; !(i >= nscoredalphabets); i = i + 1)
    datafreq[(signed long int)i] = datafreq[(signed long int)i] / (double)total;
}

// calcfreq_nuc
// file constants.c line 66
static void calcfreq_nuc(signed int nseq, char **seq, double *datafreq)
{
  signed int i;
  signed int j;
  signed int l;
  signed int aan;
  double total;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    datafreq[(signed long int)i] = 0.0;
  total = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    l = (signed int)return_value_strlen_1;
    j = 0;
    for( ; !(j >= l); j = j + 1)
    {
      aan = amino_n[(signed long int)(signed int)seq[(signed long int)i][(signed long int)j]];
      if(aan == 4)
        aan = 3;

      if(aan >= 0 && !(aan >= 4))
      {
        datafreq[(signed long int)aan] = datafreq[(signed long int)aan] + 1.0;
        total = total + 1.0;
      }

    }
  }
  total = 0.0;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    total = total + datafreq[(signed long int)i];
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    datafreq[(signed long int)i] = datafreq[(signed long int)i] / (double)total;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    if(datafreq[(signed long int)i] < 0.0001)
      datafreq[(signed long int)i] = 0.0001;

  total = 0.0;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    total = total + datafreq[(signed long int)i];
  i = 0;
  for( ; !(i >= 4); i = i + 1)
    datafreq[(signed long int)i] = datafreq[(signed long int)i] / (double)total;
}

// calcimportance
// file mltaln9.c line 6687
extern void calcimportance(signed int nseq, double *eff, char **seq, struct _LocalHom **localhom)
{
  signed int i;
  signed int j;
  signed int pos;
  signed int len;
  double *importance;
  double tmpdouble;
  double *ieff;
  double totaleff;
  signed int *nogaplen;
  struct _LocalHom *tmpptr;
  importance=AllocateDoubleVec(nlenmax);
  nogaplen=AllocateIntVec(nseq);
  ieff=AllocateDoubleVec(nseq);
  totaleff = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    nogaplen[(signed long int)i]=seqlen(seq[(signed long int)i]);
    if(nogaplen[(signed long int)i] == 0)
      ieff[(signed long int)i] = 0.0;

    else
      ieff[(signed long int)i] = eff[(signed long int)i];
    totaleff = totaleff + ieff[(signed long int)i];
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    ieff[(signed long int)i] = ieff[(signed long int)i] / totaleff;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    pos = 0;
    for( ; !(pos >= nlenmax); pos = pos + 1)
      importance[(signed long int)pos] = 0.0;
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      if(!(i == j))
      {
        tmpptr = localhom[(signed long int)i] + (signed long int)j;
        tmpptr = localhom[(signed long int)i] + (signed long int)j;
        for( ; !(tmpptr == ((struct _LocalHom *)NULL)); tmpptr = tmpptr->next)
          if(!IEEE_FLOAT_EQUAL(tmpptr->opt, -1.000000))
          {
            pos = tmpptr->start1;
            for( ; tmpptr->end1 >= pos; pos = pos + 1)
              importance[(signed long int)pos] = importance[(signed long int)pos] + ieff[(signed long int)j];
          }

      }

    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      if(!(i == j))
      {
        if(!IEEE_FLOAT_EQUAL((localhom[(signed long int)i] + (signed long int)j)->opt, -1.000000))
        {
          tmpptr = localhom[(signed long int)i] + (signed long int)j;
          for( ; !(tmpptr == ((struct _LocalHom *)NULL)); tmpptr = tmpptr->next)
            if(!IEEE_FLOAT_EQUAL(tmpptr->opt, -1.000000))
            {
              tmpdouble = 0.0;
              len = 0;
              pos = tmpptr->start1;
              for( ; tmpptr->end1 >= pos; pos = pos + 1)
              {
                tmpdouble = tmpdouble + importance[(signed long int)pos];
                len = len + 1;
              }
              tmpdouble = tmpdouble / (double)len;
              tmpptr->importance = tmpdouble * tmpptr->opt;
              tmpptr->fimportance = (double)tmpptr->importance;
            }

        }

      }

  }
  i = 0;
  _Bool tmp_if_expr_1;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
    {
      double imp;
      struct _LocalHom *tmpptr1;
      struct _LocalHom *tmpptr2;
      tmpptr1 = localhom[(signed long int)i] + (signed long int)j;
      tmpptr2 = localhom[(signed long int)j] + (signed long int)i;
      for( ; !(tmpptr1 == ((struct _LocalHom *)NULL)) && !(tmpptr2 == ((struct _LocalHom *)NULL)); tmpptr2 = tmpptr2->next)
      {
        if(IEEE_FLOAT_EQUAL(tmpptr1->opt, -1.000000))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = IEEE_FLOAT_EQUAL(tmpptr2->opt, -1.0) ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_1)
        {
          imp = 0.5 * (tmpptr1->importance + tmpptr2->importance);
          tmpptr2->importance = imp;
          tmpptr1->importance = tmpptr2->importance;
          tmpptr2->fimportance = (double)imp;
          tmpptr1->fimportance = tmpptr2->fimportance;
        }

        tmpptr1 = tmpptr1->next;
      }
    }
  }
  free((void *)importance);
  free((void *)nogaplen);
  free((void *)ieff);
}

// catData
// file io.c line 1909
extern void catData(struct _IO_FILE *fp)
{
  signed int i;
  static char *dumname = (char *)(void *)0;
  if(dumname == ((char *)NULL))
    dumname=AllocateCharVec(5000000);

  rewind(fp);
  searchKUorWA(fp);
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    dumname[(signed long int)0] = (char)61;
    _IO_getc(fp);
    myfgets(dumname + (signed long int)1, 256 - 2, fp);
    if(!(outnumber == 0))
      fprintf(stdout, ">_numo_s_%08d_numo_e_", i + 1);

    else
      _IO_putc(62, stdout);
    puts(dumname + (signed long int)1);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc(fp);
    if(dorp == 100 && !(upperCase == -1))
      seqLower(1, &tmpseq);

    puts(tmpseq);
    free((void *)tmpseq);
  }
}

// charfilter
// file io.c line 1240
static signed int charfilter(unsigned char *str)
{
  unsigned char tmp;
  unsigned char *res = str;
  unsigned char *bk = str;
  unsigned char *tmp_post_1;
  unsigned char *tmp_post_2;
  do
  {
    tmp_post_1 = str;
    str = str + 1l;
    tmp = *tmp_post_1;
    if(tmp == 0)
      break;

    if((signed int)tmp == 60 || (signed int)tmp == 61 || (signed int)tmp == 62)
    {
      fprintf(stderr, "\n");
      fprintf(stderr, "Characters '= < >' are not accepted in the --text mode, \nalthough most printable characters are ok.\n");
      fprintf(stderr, "\n");
      exit(1);
    }

    if(!((signed int)tmp == 0x0a) && !((signed int)tmp == 0x0d) && !((signed int)tmp == 0x20))
    {
      tmp_post_2 = res;
      res = res + 1l;
      *tmp_post_2 = tmp;
    }

  }
  while((_Bool)1);
  *res = (unsigned char)0;
  return (signed int)(res - bk);
}

// closeFiles
// file io.c line 4102
extern void closeFiles(void)
{
  fclose(prep_g);
  fclose(trap_g);
}

// clustalout_pointer
// file io.c line 4740
extern void clustalout_pointer(struct _IO_FILE *fp, signed int nseq, signed int maxlen, char **seq, char **name, char *mark, char *comment, signed int *order, signed int namelen)
{
  signed int pos;
  signed int j;
  if(namelen == -1)
    namelen = 15;

  pos = 0;
  if(comment == ((char *)NULL))
    fprintf(fp, "CLUSTAL format alignment by MAFFT (v%s)\n\n", (const void *)"7.271");

  else
    fprintf(fp, "CLUSTAL format alignment by MAFFT %s (v%s)\n\n", comment, (const void *)"7.271");
  for( ; !(pos >= maxlen); pos = pos + 60)
  {
    fprintf(fp, "\n");
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
    {
      char *return_value_extractfirstword_1;
      return_value_extractfirstword_1=extractfirstword(name[(signed long int)order[(signed long int)j]] + (signed long int)1);
      fprintf(fp, "%-*.*s ", namelen, namelen, return_value_extractfirstword_1);
      fprintf(fp, "%.60s\n", seq[(signed long int)order[(signed long int)j]] + (signed long int)pos);
    }
    if(!(mark == ((char *)NULL)))
    {
      fprintf(fp, "%-*.*s ", namelen, namelen, (const void *)"");
      fprintf(fp, "%.60s\n", mark + (signed long int)pos);
    }

  }
}

// cluster_average_double
// file mltaln9.c line 1509
static double cluster_average_double(double d1, double d2)
{
  return (d1 + d2) * 0.5;
}

// cluster_minimum_double
// file mltaln9.c line 1513
static double cluster_minimum_double(double d1, double d2)
{
  return d1 < d2 ? d1 : d2;
}

// cluster_mix_double
// file mltaln9.c line 1505
static double cluster_mix_double(double d1, double d2)
{
  return (d1 < d2 ? d1 : d2) * sueff1 + (d1 + d2) * sueff05;
}

// commongappick
// file mltaln9.c line 5773
extern void commongappick(signed int nseq, char **seq)
{
  signed int i;
  signed int j;
  signed int count;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  signed int *mapfromnewtoold;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)(len + 1), sizeof(signed int) /*4ul*/ );
  mapfromnewtoold = (signed int *)return_value_calloc_2;
  i = 0;
  count = 0;
  signed int tmp_post_3;
  for( ; len >= i; i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      if(!((signed int)seq[(signed long int)j][(signed long int)i] == 45))
        break;

    if(!(j == nseq))
    {
      tmp_post_3 = count;
      count = count + 1;
      mapfromnewtoold[(signed long int)tmp_post_3] = i;
    }

  }
  j = 0;
  for( ; !(j >= nseq); j = j + 1)
  {
    i = 0;
    for( ; !(i >= count); i = i + 1)
      seq[(signed long int)j][(signed long int)i] = seq[(signed long int)j][(signed long int)mapfromnewtoold[(signed long int)i]];
  }
  free((void *)mapfromnewtoold);
}

// commongappick_record
// file mltaln9.c line 5744
extern void commongappick_record(signed int nseq, char **seq, signed int *map)
{
  signed int i;
  signed int j;
  signed int count;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  i = 0;
  count = 0;
  for( ; len >= i; i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      if(!((signed int)seq[(signed long int)j][(signed long int)i] == 45))
        break;

    if(!(j == nseq))
    {
      j = 0;
      for( ; !(j >= nseq); j = j + 1)
        seq[(signed long int)j][(signed long int)count] = seq[(signed long int)j][(signed long int)i];
      map[(signed long int)count] = i;
      count = count + 1;
    }

  }
}

// commongappickpair
// file mltaln9.c line 8211
static void commongappickpair(char *r1, char *r2, char *i1, char *i2)
{
  _Bool tmp_if_expr_5;
  char *tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  while(!(*i1 == 0))
  {
    if((signed int)*i1 == 45)
      tmp_if_expr_5 = (signed int)*i2 == 45 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
    {
      i1 = i1 + 1l;
      i2 = i2 + 1l;
    }

    else
    {
      tmp_post_1 = r1;
      r1 = r1 + 1l;
      tmp_post_2 = i1;
      i1 = i1 + 1l;
      *tmp_post_1 = *tmp_post_2;
      tmp_post_3 = r2;
      r2 = r2 + 1l;
      tmp_post_4 = i2;
      i2 = i2 + 1l;
      *tmp_post_3 = *tmp_post_4;
    }
  }
  *r1 = (char)0;
  *r2 = (char)0;
}

// commongappickpairfast
// file mltaln9.c line 8156
static void commongappickpairfast(char *r1, char *r2, char *i1, char *i2, signed int *skip1, signed int *skip2)
{
  signed int skip;
  signed int skipped1;
  signed int skipped2 = 0;
  skipped1 = skipped2;
  char *tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  for( ; (_Bool)1; *tmp_post_3 = *tmp_post_4)
  {
    skip=minimum(*skip1 - skipped1, *skip2 - skipped2);
    i1 = i1 + (signed long int)skip;
    i2 = i2 + (signed long int)skip;
    skipped1 = skipped1 + skip;
    skipped2 = skipped2 + skip;
    if(*i1 == 0)
      break;

    if(!((signed int)*i1 == 45))
    {
      skipped1 = 0;
      skip1 = skip1 + 1l;
    }

    else
      skipped1 = skipped1 + 1;
    if(!((signed int)*i2 == 45))
    {
      skipped2 = 0;
      skip2 = skip2 + 1l;
    }

    else
      skipped2 = skipped2 + 1;
    tmp_post_1 = r1;
    r1 = r1 + 1l;
    tmp_post_2 = i1;
    i1 = i1 + 1l;
    *tmp_post_1 = *tmp_post_2;
    tmp_post_3 = r2;
    r2 = r2 + 1l;
    tmp_post_4 = i2;
    i2 = i2 + 1l;
  }
  *r1 = (char)0;
  *r2 = (char)0;
}

// constants
// file mltaln.h line 154
extern void constants(signed int nseq, char **seq)
{
  signed int i;
  signed int j;
  signed int x;
  char shiftmodel[100l];
  signed int charsize;
  if(!(nblosum >= 0))
    dorp = 112;

  if(penalty_shift_factor >= 10.000000)
    trywarp = 0;

  else
    trywarp = 1;
  signed int return_value_shishagonyuu_2;
  signed int return_value_shishagonyuu_3;
  signed int return_value_shishagonyuu_4;
  signed int return_value_shishagonyuu_5;
  signed int return_value_shishagonyuu_6;
  signed int return_value_shishagonyuu_8;
  if(dorp == 100)
  {
    signed int k;
    signed int m;
    double constants__1__1__average;
    double **constants__1__1__pamx;
    constants__1__1__pamx=AllocateDoubleMtx(11, 11);
    double **constants__1__1__pam1;
    constants__1__1__pam1=AllocateDoubleMtx(4, 4);
    double *constants__1__1__freq;
    constants__1__1__freq=AllocateDoubleVec(4);
    nalphabets = 26;
    nscoredalphabets = 10;
    charsize = 0x80;
    n_dis=AllocateIntMtx(nalphabets, nalphabets);
    n_disLN=AllocateDoubleMtx(nalphabets, nalphabets);
    scoremtx = -1;
    if(RNAppenalty == 100009)
      RNAppenalty = -1530;

    if(RNAppenalty_ex == 100009)
      RNAppenalty_ex = 0;

    if(ppenalty == 100009)
      ppenalty = -1530;

    if(ppenalty_dist == 100009)
      ppenalty_dist = ppenalty;

    if(ppenalty_OP == 100009)
      ppenalty_OP = -1530;

    if(ppenalty_ex == 100009)
      ppenalty_ex = 0;

    if(ppenalty_EX == 100009)
      ppenalty_EX = 0;

    if(poffset == 100009)
      poffset = -369;

    if(RNApthr == 100009)
      RNApthr = 0;

    if(pamN == 100009)
      pamN = 200;

    if(kimuraR == 100009)
      kimuraR = 2;

    RNApenalty = (signed int)((((double)3 * 600.0) / 1000.0) * (double)RNAppenalty + 0.5);
    RNApenalty_ex = (signed int)((((double)3 * 600.0) / 1000.0) * (double)RNAppenalty_ex + 0.5);
    RNAthr = (signed int)((((double)3 * 600.0) / 1000.0) * (double)RNApthr + 0.5);
    penalty = (signed int)((((double)3 * 600.0) / 1000.0) * (double)ppenalty + 0.5);
    penalty_dist = (signed int)((((double)3 * 600.0) / 1000.0) * (double)ppenalty_dist + 0.5);
    penalty_shift = (signed int)(penalty_shift_factor * (double)penalty);
    penalty_OP = (signed int)((((double)3 * 600.0) / 1000.0) * (double)ppenalty_OP + 0.5);
    penalty_ex = (signed int)((((double)3 * 600.0) / 1000.0) * (double)ppenalty_ex + 0.5);
    penalty_EX = (signed int)((((double)3 * 600.0) / 1000.0) * (double)ppenalty_EX + 0.5);
    offset = (signed int)((((double)1 * 600.0) / 1000.0) * (double)poffset + 0.5);
    offsetFFT = (signed int)((((double)1 * 600.0) / 1000.0) * (double)-0 + 0.5);
    offsetLN = (signed int)((((double)1 * 600.0) / 1000.0) * (double)100 + 0.5);
    penaltyLN = (signed int)((((double)3 * 600.0) / 1000.0) * (double)-2000 + 0.5);
    penalty_exLN = (signed int)((((double)3 * 600.0) / 1000.0) * (double)-100 + 0.5);
    if(!(trywarp == 0))
      sprintf(shiftmodel, "%4.2f (%4.2f)", -((double)penalty_shift) / (double)1800, -((double)penalty_shift) / (double)600);

    else
      sprintf(shiftmodel, "noshift");
    sprintf(modelname, "%s%d (%d), %4.2f (%4.2f), %4.2f (%4.2f), %s", rnakozo != 0 ? "RNA" : "DNA", pamN, kimuraR, -((double)ppenalty) * 0.001, -((double)ppenalty) * 0.003, -((double)poffset) * 0.001, -((double)poffset) * 0.003, (const void *)shiftmodel);
    i = 0;
    for( ; !(i >= 26); i = i + 1)
      amino[(signed long int)i] = (unsigned char)locaminon[(signed long int)i];
    i = 0;
    for( ; !(i >= 0x80); i = i + 1)
      amino_n[(signed long int)i] = -1;
    i = 0;
    for( ; !(i >= 26); i = i + 1)
      amino_n[(signed long int)(signed int)amino[(signed long int)i]] = i;
    if(fmodel == 1)
    {
      calcfreq_nuc(nseq, seq, constants__1__1__freq);
      reporterr("a, freq[0] = %f\n", constants__1__1__freq[(signed long int)0]);
      reporterr("g, freq[1] = %f\n", constants__1__1__freq[(signed long int)1]);
      reporterr("c, freq[2] = %f\n", constants__1__1__freq[(signed long int)2]);
      reporterr("t, freq[3] = %f\n", constants__1__1__freq[(signed long int)3]);
    }

    else
    {
      constants__1__1__freq[(signed long int)0] = 0.25;
      constants__1__1__freq[(signed long int)1] = 0.25;
      constants__1__1__freq[(signed long int)2] = 0.25;
      constants__1__1__freq[(signed long int)3] = 0.25;
    }
    if(kimuraR == 9999)
    {
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = (double)locn_disn[(signed long int)i][(signed long int)j];
      }
      constants__1__1__average = 0.0;
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__average = constants__1__1__average + constants__1__1__pamx[(signed long int)i][(signed long int)j];
      }
      constants__1__1__average = constants__1__1__average / 16.0;
      if(!(disp == 0))
        reporterr("average = %f\n", constants__1__1__average);

      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = constants__1__1__pamx[(signed long int)i][(signed long int)j] - constants__1__1__average;
      }
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = constants__1__1__pamx[(signed long int)i][(signed long int)j] * (600.0 / constants__1__1__average);
      }
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = constants__1__1__pamx[(signed long int)i][(signed long int)j] - (double)offset;
      }
    }

    else
    {
      generatenuc1pam(constants__1__1__pam1, kimuraR, constants__1__1__freq);
      reporterr("generating a scoring matrix for nucleotide (dist=%d) ... ", pamN);
      if(!(disp == 0))
      {
        reporterr(" TPM \n");
        i = 0;
        for( ; !(i >= 4); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 4); j = j + 1)
            reporterr("%+#6.10f", constants__1__1__pam1[(signed long int)i][(signed long int)j]);
          reporterr("\n");
        }
        reporterr("\n");
      }

      MtxuntDouble(constants__1__1__pamx, 4);
      x = 0;
      for( ; !(x >= pamN); x = x + 1)
        MtxmltDouble(constants__1__1__pamx, constants__1__1__pam1, 4);
      if(!(disp == 0))
      {
        reporterr(" TPM \n");
        i = 0;
        for( ; !(i >= 4); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 4); j = j + 1)
            reporterr("%+#6.10f", constants__1__1__pamx[(signed long int)i][(signed long int)j]);
          reporterr("\n");
        }
        reporterr("\n");
      }

      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = constants__1__1__pamx[(signed long int)i][(signed long int)j] / constants__1__1__freq[(signed long int)j];
      }
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
        {
          if(IEEE_FLOAT_EQUAL(constants__1__1__pamx[(signed long int)i][(signed long int)j], 0.0))
          {
            reporterr("WARNING: pamx[i][j] = 0.0 ?\n");
            constants__1__1__pamx[(signed long int)i][(signed long int)j] = 0.00001;
          }

          double return_value_log10_1;
          return_value_log10_1=log10(constants__1__1__pamx[(signed long int)i][(signed long int)j]);
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = return_value_log10_1 * 1000.0;
        }
      }
      if(!(disp == 0))
      {
        reporterr(" after log\n");
        i = 0;
        for( ; !(i >= 4); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 4); j = j + 1)
            reporterr("%+10.6f ", constants__1__1__pamx[(signed long int)i][(signed long int)j]);
          reporterr("\n");
        }
        reporterr("\n");
      }

      constants__1__1__average = 0.0;
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__average = constants__1__1__average + constants__1__1__pamx[(signed long int)i][(signed long int)j] * constants__1__1__freq[(signed long int)i] * constants__1__1__freq[(signed long int)j];
      }
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = constants__1__1__pamx[(signed long int)i][(signed long int)j] - constants__1__1__average;
      }
      constants__1__1__average = 0.0;
      i = 0;
      for( ; !(i >= 4); i = i + 1)
        constants__1__1__average = constants__1__1__average + (constants__1__1__pamx[(signed long int)i][(signed long int)i] * 1.0) / 4.0;
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = constants__1__1__pamx[(signed long int)i][(signed long int)j] * (600.0 / constants__1__1__average);
      }
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = constants__1__1__pamx[(signed long int)i][(signed long int)j] - (double)offset;
      }
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
        {
          return_value_shishagonyuu_2=shishagonyuu(constants__1__1__pamx[(signed long int)i][(signed long int)j]);
          constants__1__1__pamx[(signed long int)i][(signed long int)j] = (double)return_value_shishagonyuu_2;
        }
      }
      if(!(disp == 0))
      {
        reporterr(" after shishagonyuu\n");
        i = 0;
        for( ; !(i >= 4); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 4); j = j + 1)
            reporterr("%+#6.10f", constants__1__1__pamx[(signed long int)i][(signed long int)j]);
          reporterr("\n");
        }
        reporterr("\n");
      }

      reporterr("done\n");
    }
    i = 0;
    for( ; !(i >= 5); i = i + 1)
    {
      constants__1__1__pamx[(signed long int)4][(signed long int)i] = constants__1__1__pamx[(signed long int)3][(signed long int)i];
      constants__1__1__pamx[(signed long int)i][(signed long int)4] = constants__1__1__pamx[(signed long int)i][(signed long int)3];
    }
    i = 5;
    for( ; !(i >= 10); i = i + 1)
    {
      j = 5;
      for( ; !(j >= 10); j = j + 1)
        constants__1__1__pamx[(signed long int)i][(signed long int)j] = constants__1__1__pamx[(signed long int)(i - 5)][(signed long int)(j - 5)];
    }
    if(!(disp == 0))
    {
      reporterr(" before dis\n");
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          reporterr("%+#6.10f", constants__1__1__pamx[(signed long int)i][(signed long int)j]);
        reporterr("\n");
      }
      reporterr("\n");
    }

    if(!(disp == 0))
    {
      reporterr(" score matrix  \n");
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          reporterr("%+#6.10f", constants__1__1__pamx[(signed long int)i][(signed long int)j]);
        reporterr("\n");
      }
      reporterr("\n");
      exit(1);
    }

    i = 0;
    for( ; !(i >= 26); i = i + 1)
      amino[(signed long int)i] = (unsigned char)locaminon[(signed long int)i];
    i = 0;
    for( ; !(i >= 26); i = i + 1)
      amino_grp[(signed long int)(signed int)amino[(signed long int)i]] = locgrpn[(signed long int)i];
    i = 0;
    for( ; !(i >= 26); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 26); j = j + 1)
        n_dis[(signed long int)i][(signed long int)j] = 0;
    }
    i = 0;
    for( ; !(i >= 10); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 10); j = j + 1)
        n_dis[(signed long int)i][(signed long int)j]=shishagonyuu(constants__1__1__pamx[(signed long int)i][(signed long int)j]);
    }
    ambiguousscore(amino_n, n_dis);
    if(!(disp == 0))
    {
      reporterr(" score matrix  \n");
      i = 0;
      for( ; !(i >= 26); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 26); j = j + 1)
          reporterr("%+6d", n_dis[(signed long int)i][(signed long int)j]);
        reporterr("\n");
      }
      reporterr("\n");
      reporterr("penalty = %d, penalty_ex = %d\n", penalty, penalty_ex);
    }

    constants__1__1__average = 0.0;
    i = 0;
    for( ; !(i >= 4); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 4); j = j + 1)
        constants__1__1__average = constants__1__1__average + ribosum4[(signed long int)i][(signed long int)j] * constants__1__1__freq[(signed long int)i] * constants__1__1__freq[(signed long int)j];
    }
    i = 0;
    for( ; !(i >= 4); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 4); j = j + 1)
        ribosum4[(signed long int)i][(signed long int)j] = ribosum4[(signed long int)i][(signed long int)j] - constants__1__1__average;
    }
    constants__1__1__average = 0.0;
    i = 0;
    for( ; !(i >= 4); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 4); j = j + 1)
      {
        k = 0;
        for( ; !(k >= 4); k = k + 1)
        {
          m = 0;
          for( ; !(m >= 4); m = m + 1)
            constants__1__1__average = constants__1__1__average + ribosum16[(signed long int)(i * 4 + j)][(signed long int)(k * 4 + m)] * constants__1__1__freq[(signed long int)i] * constants__1__1__freq[(signed long int)j] * constants__1__1__freq[(signed long int)k] * constants__1__1__freq[(signed long int)m];
        }
      }
    }
    i = 0;
    for( ; !(i >= 16); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 16); j = j + 1)
        ribosum16[(signed long int)i][(signed long int)j] = ribosum16[(signed long int)i][(signed long int)j] - constants__1__1__average;
    }
    constants__1__1__average = 0.0;
    i = 0;
    for( ; !(i >= 4); i = i + 1)
      constants__1__1__average = constants__1__1__average + ribosum4[(signed long int)i][(signed long int)i] * constants__1__1__freq[(signed long int)i];
    i = 0;
    for( ; !(i >= 4); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 4); j = j + 1)
        ribosum4[(signed long int)i][(signed long int)j] = ribosum4[(signed long int)i][(signed long int)j] * (600.0 / constants__1__1__average);
    }
    constants__1__1__average = 0.0;
    constants__1__1__average = constants__1__1__average + ribosum16[(signed long int)(0 * 4 + 3)][(signed long int)(0 * 4 + 3)] * constants__1__1__freq[(signed long int)0] * constants__1__1__freq[(signed long int)3];
    constants__1__1__average = constants__1__1__average + ribosum16[(signed long int)(3 * 4 + 0)][(signed long int)(3 * 4 + 0)] * constants__1__1__freq[(signed long int)3] * constants__1__1__freq[(signed long int)0];
    constants__1__1__average = constants__1__1__average + ribosum16[(signed long int)(1 * 4 + 2)][(signed long int)(1 * 4 + 2)] * constants__1__1__freq[(signed long int)1] * constants__1__1__freq[(signed long int)2];
    constants__1__1__average = constants__1__1__average + ribosum16[(signed long int)(2 * 4 + 1)][(signed long int)(2 * 4 + 1)] * constants__1__1__freq[(signed long int)2] * constants__1__1__freq[(signed long int)1];
    constants__1__1__average = constants__1__1__average + ribosum16[(signed long int)(1 * 4 + 3)][(signed long int)(1 * 4 + 3)] * constants__1__1__freq[(signed long int)1] * constants__1__1__freq[(signed long int)3];
    constants__1__1__average = constants__1__1__average + ribosum16[(signed long int)(3 * 4 + 1)][(signed long int)(3 * 4 + 1)] * constants__1__1__freq[(signed long int)3] * constants__1__1__freq[(signed long int)1];
    i = 0;
    for( ; !(i >= 16); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 16); j = j + 1)
        ribosum16[(signed long int)i][(signed long int)j] = ribosum16[(signed long int)i][(signed long int)j] * (600.0 / constants__1__1__average);
    }
    i = 0;
    for( ; !(i >= 4); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 4); j = j + 1)
        ribosum4[(signed long int)i][(signed long int)j] = ribosum4[(signed long int)i][(signed long int)j] - (double)offset;
    }
    i = 0;
    for( ; !(i >= 16); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 16); j = j + 1)
        ribosum16[(signed long int)i][(signed long int)j] = ribosum16[(signed long int)i][(signed long int)j] - (double)offset;
    }
    i = 0;
    for( ; !(i >= 4); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 4); j = j + 1)
      {
        return_value_shishagonyuu_3=shishagonyuu(ribosum4[(signed long int)i][(signed long int)j]);
        ribosum4[(signed long int)i][(signed long int)j] = (double)return_value_shishagonyuu_3;
      }
    }
    i = 0;
    for( ; !(i >= 16); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 16); j = j + 1)
      {
        return_value_shishagonyuu_4=shishagonyuu(ribosum16[(signed long int)i][(signed long int)j]);
        ribosum16[(signed long int)i][(signed long int)j] = (double)return_value_shishagonyuu_4;
      }
    }
    if(!(disp == 0))
    {
      reporterr("ribosum after shishagonyuu\n");
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 4); j = j + 1)
          reporterr("%+#6.10f", ribosum4[(signed long int)i][(signed long int)j]);
        reporterr("\n");
      }
      reporterr("\n");
      reporterr("ribosum16 after shishagonyuu\n");
      i = 0;
      for( ; !(i >= 16); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 16); j = j + 1)
          reporterr("%+#7.0f", ribosum16[(signed long int)i][(signed long int)j]);
        reporterr("\n");
      }
      reporterr("\n");
    }

    reporterr("done\n");
    i = 0;
    for( ; !(i >= 37); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 37); j = j + 1)
        ribosumdis[(signed long int)i][(signed long int)j] = (signed int)0.0;
    }
    m = 0;
    for( ; !(m >= 9); m = m + 1)
    {
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        k = 0;
        for( ; !(k >= 9); k = k + 1)
        {
          j = 0;
          for( ; !(j >= 4); j = j + 1)
            ribosumdis[(signed long int)(m * 4 + i)][(signed long int)(k * 4 + j)] = (signed int)ribosum4[(signed long int)i][(signed long int)j];
        }
      }
    }
    i = 0;
    for( ; !(i >= 16); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 16); j = j + 1)
        ribosumdis[(signed long int)(i + 4)][(signed long int)(j + 4)] = (signed int)ribosum16[(signed long int)i][(signed long int)j];
    }
    i = 0;
    for( ; !(i >= 16); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 16); j = j + 1)
        ribosumdis[(signed long int)(i + 20)][(signed long int)(j + 20)] = (signed int)ribosum16[(signed long int)i][(signed long int)j];
    }
    if(!(disp == 0))
    {
      reporterr("ribosumdis\n");
      i = 0;
      for( ; !(i >= 37); i = i + 1)
      {
        j = 0;
        for( ; !(j >= 37); j = j + 1)
          reporterr("%+5d", ribosumdis[(signed long int)i][(signed long int)j]);
        reporterr("\n");
      }
      reporterr("\n");
    }

    reporterr("done\n");
    FreeDoubleMtx(constants__1__1__pam1);
    FreeDoubleMtx(constants__1__1__pamx);
    free((void *)constants__1__1__freq);
  }

  else
    if(dorp == 112 && nblosum == -2 && scoremtx == 1)
    {
      double *freq;
      double *freq1;
      double *datafreq;
      double average;
      double **n_distmp;
      nalphabets = 0x100;
      nscoredalphabets = 0x100;
      charsize = 0x100;
      reporterr("nalphabets = %d\n", nalphabets);
      n_dis=AllocateIntMtx(nalphabets, nalphabets);
      n_disLN=AllocateDoubleMtx(nalphabets, nalphabets);
      n_distmp=AllocateDoubleMtx(nalphabets, nalphabets);
      datafreq=AllocateDoubleVec(nalphabets);
      freq=AllocateDoubleVec(nalphabets);
      if(ppenalty == 100009)
        ppenalty = -1530;

      if(ppenalty_dist == 100009)
        ppenalty_dist = ppenalty;

      if(ppenalty_OP == 100009)
        ppenalty_OP = -1530;

      if(ppenalty_ex == 100009)
        ppenalty_ex = -00;

      if(ppenalty_EX == 100009)
        ppenalty_EX = -00;

      if(poffset == 100009)
        poffset = -123;

      if(pamN == 100009)
        pamN = 0;

      if(kimuraR == 100009)
        kimuraR = 1;

      penalty = (signed int)((600.0 / 1000.0) * (double)ppenalty + 0.5);
      penalty_dist = (signed int)((600.0 / 1000.0) * (double)ppenalty_dist + 0.5);
      penalty_shift = (signed int)(penalty_shift_factor * (double)penalty);
      penalty_OP = (signed int)((600.0 / 1000.0) * (double)ppenalty_OP + 0.5);
      penalty_ex = (signed int)((600.0 / 1000.0) * (double)ppenalty_ex + 0.5);
      penalty_EX = (signed int)((600.0 / 1000.0) * (double)ppenalty_EX + 0.5);
      offset = (signed int)((600.0 / 1000.0) * (double)poffset + 0.5);
      offsetFFT = (signed int)((600.0 / 1000.0) * (double)-0 + 0.5);
      offsetLN = (signed int)((600.0 / 1000.0) * (double)100 + 0.5);
      penaltyLN = (signed int)((600.0 / 1000.0) * (double)-2000 + 0.5);
      penalty_exLN = (signed int)((600.0 / 1000.0) * (double)-100 + 0.5);
      extendedmtx(n_distmp, freq, amino, amino_grp);
      if(!(trywarp == 0))
        sprintf(shiftmodel, "%4.2f", -((double)penalty_shift) / (double)600);

      else
        sprintf(shiftmodel, "noshift");
      sprintf(modelname, "Extended, %4.2f, %+4.2f, %+4.2f, %s", -((double)ppenalty) / (double)1000, -((double)poffset) / (double)1000, -((double)ppenalty_ex) / (double)1000, (const void *)shiftmodel);
      i = 0;
      for( ; !(i >= 0x100); i = i + 1)
        amino_n[(signed long int)i] = -1;
      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
        amino_n[(signed long int)(unsigned char)amino[(signed long int)i]] = i;
      if(fmodel == 1)
      {
        calcfreq_extended(nseq, seq, datafreq);
        freq1 = datafreq;
      }

      else
        freq1 = freq;
      if(fmodel == -1)
        average = 0.0;

      else
      {
        i = 0;
        for( ; !(i >= nalphabets); i = i + 1)
          average = 0.0;
        i = 0;
        for( ; !(i >= nalphabets); i = i + 1)
        {
          j = 0;
          for( ; !(j >= nalphabets); j = j + 1)
            average = average + n_distmp[(signed long int)i][(signed long int)j] * freq1[(signed long int)i] * freq1[(signed long int)j];
        }
      }
      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
      {
        j = 0;
        for( ; !(j >= nalphabets); j = j + 1)
          n_distmp[(signed long int)i][(signed long int)j] = n_distmp[(signed long int)i][(signed long int)j] - average;
      }
      average = 0.0;
      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
        average = average + n_distmp[(signed long int)i][(signed long int)i] * freq1[(signed long int)i];
      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
      {
        j = 0;
        for( ; !(j >= nalphabets); j = j + 1)
          n_distmp[(signed long int)i][(signed long int)j] = n_distmp[(signed long int)i][(signed long int)j] * (600.0 / average);
      }
      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
      {
        j = 0;
        for( ; !(j >= nalphabets); j = j + 1)
          n_distmp[(signed long int)i][(signed long int)j] = n_distmp[(signed long int)i][(signed long int)j] - (double)offset;
      }
      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
      {
        j = 0;
        for( ; !(j >= nalphabets); j = j + 1)
        {
          return_value_shishagonyuu_5=shishagonyuu(n_distmp[(signed long int)i][(signed long int)j]);
          n_distmp[(signed long int)i][(signed long int)j] = (double)return_value_shishagonyuu_5;
        }
      }
      if(!(disp == 0))
      {
        fprintf(stdout, "freq = \n");
        i = 0;
        for( ; !(i >= nalphabets); i = i + 1)
          fprintf(stdout, "%c %f\n", amino[(signed long int)i], freq1[(signed long int)i]);
        fprintf(stdout, " scoring matrix  \n");
        i = 0;
        for( ; !(i >= nalphabets); i = i + 1)
        {
          fprintf(stdout, "%c    ", amino[(signed long int)i]);
          j = 0;
          for( ; !(j >= nalphabets); j = j + 1)
            fprintf(stdout, "%5.0f", n_distmp[(signed long int)i][(signed long int)j]);
          fprintf(stdout, "\n");
        }
        fprintf(stdout, "     ");
        i = 0;
        for( ; !(i >= nalphabets); i = i + 1)
          fprintf(stdout, "    %c", amino[(signed long int)i]);
        average = 0.0;
        i = 0;
        for( ; !(i >= nalphabets); i = i + 1)
        {
          j = 0;
          for( ; !(j >= nalphabets); j = j + 1)
            average = average + n_distmp[(signed long int)i][(signed long int)j] * freq1[(signed long int)i] * freq1[(signed long int)j];
        }
        fprintf(stdout, "average = %f\n", average);
        average = 0.0;
        i = 0;
        for( ; !(i >= nalphabets); i = i + 1)
          average = average + n_distmp[(signed long int)i][(signed long int)i] * freq1[(signed long int)i];
        fprintf(stdout, "itch average = %f\n", average);
        reporterr("parameters: %d, %d, %d\n", penalty, penalty_ex, offset);
        exit(1);
      }

      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
      {
        j = 0;
        for( ; !(j >= nalphabets); j = j + 1)
          n_dis[(signed long int)i][(signed long int)j] = 0;
      }
      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
      {
        j = 0;
        for( ; !(j >= nalphabets); j = j + 1)
          n_dis[(signed long int)i][(signed long int)j] = (signed int)n_distmp[(signed long int)i][(signed long int)j];
      }
      i = 0;
      for( ; !(i >= nalphabets); i = i + 1)
      {
        j = 0;
        for( ; !(j >= nalphabets); j = j + 1)
        {
          n_dis[(signed long int)amino_n[(signed long int)45]][(signed long int)i] = (signed int)0.0;
          n_dis[(signed long int)i][(signed long int)amino_n[(signed long int)45]] = n_dis[(signed long int)amino_n[(signed long int)45]][(signed long int)i];
        }
      }
      FreeDoubleMtx(n_distmp);
      FreeDoubleVec(datafreq);
      FreeDoubleVec(freq);
      reporterr("done.\n");
    }

    else
      if(dorp == 112 && scoremtx == 1)
      {
        double *constants__1__3__freq;
        double *constants__1__3__freq1;
        double *constants__1__3__datafreq;
        double constants__1__3__average;
        double iaverage;
        double **constants__1__3__n_distmp;
        signed int makeaverage0;
        if(nblosum == 0)
        {
          reporterr("nblosum=%d??\n", nblosum);
          exit(1);
        }

        if(!(nblosum >= 0))
        {
          nblosum = nblosum * -1;
          makeaverage0 = 0;
        }

        else
          makeaverage0 = 1;
        nalphabets = 26;
        nscoredalphabets = 20;
        charsize = 0x80;
        n_dis=AllocateIntMtx(nalphabets, nalphabets);
        n_disLN=AllocateDoubleMtx(nalphabets, nalphabets);
        constants__1__3__n_distmp=AllocateDoubleMtx(20, 20);
        constants__1__3__datafreq=AllocateDoubleVec(20);
        constants__1__3__freq=AllocateDoubleVec(20);
        if(ppenalty == 100009)
          ppenalty = -1530;

        if(ppenalty_dist == 100009)
          ppenalty_dist = ppenalty;

        if(ppenalty_OP == 100009)
          ppenalty_OP = -1530;

        if(ppenalty_ex == 100009)
          ppenalty_ex = -00;

        if(ppenalty_EX == 100009)
          ppenalty_EX = -00;

        if(poffset == 100009)
          poffset = -123;

        if(pamN == 100009)
          pamN = 0;

        if(kimuraR == 100009)
          kimuraR = 1;

        penalty = (signed int)((600.0 / 1000.0) * (double)ppenalty + 0.5);
        penalty_dist = (signed int)((600.0 / 1000.0) * (double)ppenalty_dist + 0.5);
        penalty_shift = (signed int)(penalty_shift_factor * (double)penalty);
        penalty_OP = (signed int)((600.0 / 1000.0) * (double)ppenalty_OP + 0.5);
        penalty_ex = (signed int)((600.0 / 1000.0) * (double)ppenalty_ex + 0.5);
        penalty_EX = (signed int)((600.0 / 1000.0) * (double)ppenalty_EX + 0.5);
        offset = (signed int)((600.0 / 1000.0) * (double)poffset + 0.5);
        offsetFFT = (signed int)((600.0 / 1000.0) * (double)-0 + 0.5);
        offsetLN = (signed int)((600.0 / 1000.0) * (double)100 + 0.5);
        penaltyLN = (signed int)((600.0 / 1000.0) * (double)-2000 + 0.5);
        penalty_exLN = (signed int)((600.0 / 1000.0) * (double)-100 + 0.5);
        BLOSUMmtx(nblosum, constants__1__3__n_distmp, constants__1__3__freq, (char *)amino, amino_grp);
        if(!(trywarp == 0))
          sprintf(shiftmodel, "%4.2f", -((double)penalty_shift) / (double)600);

        else
          sprintf(shiftmodel, "noshift");
        if(nblosum == -1)
          sprintf(modelname, "User-defined, %4.2f, %+4.2f, %+4.2f, %s", -((double)ppenalty) / (double)1000, -((double)poffset) / (double)1000, -((double)ppenalty_ex) / (double)1000, (const void *)shiftmodel);

        else
          sprintf(modelname, "BLOSUM%d, %4.2f, %+4.2f, %+4.2f, %s", nblosum, -((double)ppenalty) / (double)1000, -((double)poffset) / (double)1000, -((double)ppenalty_ex) / (double)1000, (const void *)shiftmodel);
        i = 0;
        for( ; !(i >= 0x80); i = i + 1)
          amino_n[(signed long int)i] = -1;
        i = 0;
        for( ; !(i >= 26); i = i + 1)
          amino_n[(signed long int)(signed int)amino[(signed long int)i]] = i;
        if(fmodel == 1)
        {
          calcfreq(nseq, seq, constants__1__3__datafreq);
          constants__1__3__freq1 = constants__1__3__datafreq;
        }

        else
          constants__1__3__freq1 = constants__1__3__freq;
        if(fmodel == -1)
          constants__1__3__average = 0.0;

        else
        {
          i = 0;
          for( ; !(i >= 20); i = i + 1)
            constants__1__3__average = 0.0;
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              constants__1__3__average = constants__1__3__average + constants__1__3__n_distmp[(signed long int)i][(signed long int)j] * constants__1__3__freq1[(signed long int)i] * constants__1__3__freq1[(signed long int)j];
          }
        }
        if(!(makeaverage0 == 0))
        {
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              constants__1__3__n_distmp[(signed long int)i][(signed long int)j] = constants__1__3__n_distmp[(signed long int)i][(signed long int)j] - constants__1__3__average;
          }
        }

        constants__1__3__average = 0.0;
        i = 0;
        for( ; !(i >= 20); i = i + 1)
          constants__1__3__average = constants__1__3__average + constants__1__3__n_distmp[(signed long int)i][(signed long int)i] * constants__1__3__freq1[(signed long int)i];
        i = 0;
        for( ; !(i >= 20); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 20); j = j + 1)
            constants__1__3__n_distmp[(signed long int)i][(signed long int)j] = constants__1__3__n_distmp[(signed long int)i][(signed long int)j] * (600.0 / constants__1__3__average);
        }
        i = 0;
        for( ; !(i >= 20); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 20); j = j + 1)
            constants__1__3__n_distmp[(signed long int)i][(signed long int)j] = constants__1__3__n_distmp[(signed long int)i][(signed long int)j] - (double)offset;
        }
        i = 0;
        for( ; !(i >= 20); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 20); j = j + 1)
          {
            return_value_shishagonyuu_6=shishagonyuu(constants__1__3__n_distmp[(signed long int)i][(signed long int)j]);
            constants__1__3__n_distmp[(signed long int)i][(signed long int)j] = (double)return_value_shishagonyuu_6;
          }
        }
        if(!(disp == 0))
        {
          fprintf(stdout, " scoring matrix  \n");
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            fprintf(stdout, "%c    ", amino[(signed long int)i]);
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              fprintf(stdout, "%5.0f", constants__1__3__n_distmp[(signed long int)i][(signed long int)j]);
            fprintf(stdout, "\n");
          }
          fprintf(stdout, "     ");
          i = 0;
          for( ; !(i >= 20); i = i + 1)
            fprintf(stdout, "    %c", amino[(signed long int)i]);
          constants__1__3__average = 0.0;
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              constants__1__3__average = constants__1__3__average + constants__1__3__n_distmp[(signed long int)i][(signed long int)j] * constants__1__3__freq1[(signed long int)i] * constants__1__3__freq1[(signed long int)j];
          }
          fprintf(stdout, "\naverage = %f\n", constants__1__3__average);
          iaverage = 0.0;
          i = 0;
          for( ; !(i >= 20); i = i + 1)
            iaverage = iaverage + constants__1__3__n_distmp[(signed long int)i][(signed long int)i] * constants__1__3__freq1[(signed long int)i];
          fprintf(stdout, "itch average = %f, E=%f\n", iaverage, constants__1__3__average / iaverage);
          reporterr("parameters: %d, %d, %d\n", penalty, penalty_ex, offset);
          exit(1);
        }

        i = 0;
        for( ; !(i >= 26); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 26); j = j + 1)
            n_dis[(signed long int)i][(signed long int)j] = 0;
        }
        i = 0;
        for( ; !(i >= 20); i = i + 1)
        {
          j = 0;
          for( ; !(j >= 20); j = j + 1)
            n_dis[(signed long int)i][(signed long int)j] = (signed int)constants__1__3__n_distmp[(signed long int)i][(signed long int)j];
        }
        FreeDoubleMtx(constants__1__3__n_distmp);
        FreeDoubleVec(constants__1__3__datafreq);
        FreeDoubleVec(constants__1__3__freq);
        reporterr("done.\n");
      }

      else
        if(dorp == 112 && scoremtx == 2)
        {
          reporterr("Not supported\n");
          exit(1);
        }

        else
        {
          double **rsr;
          double **pam1;
          double **pamx;
          double *constants__1__5__freq;
          double *constants__1__5__freq1;
          double *mutab;
          double *constants__1__5__datafreq;
          double constants__1__5__average;
          double constants__1__5__iaverage;
          double tmp;
          double delta;
          signed int constants__1__5__makeaverage0;
          nalphabets = 26;
          nscoredalphabets = 20;
          charsize = 0x80;
          n_dis=AllocateIntMtx(nalphabets, nalphabets);
          n_disLN=AllocateDoubleMtx(nalphabets, nalphabets);
          rsr=AllocateDoubleMtx(20, 20);
          pam1=AllocateDoubleMtx(20, 20);
          pamx=AllocateDoubleMtx(20, 20);
          constants__1__5__freq=AllocateDoubleVec(20);
          mutab=AllocateDoubleVec(20);
          constants__1__5__datafreq=AllocateDoubleVec(20);
          if(ppenalty == 100009)
            ppenalty = -1530;

          if(ppenalty_dist == 100009)
            ppenalty_dist = ppenalty;

          if(ppenalty_OP == 100009)
            ppenalty_OP = -1530;

          if(ppenalty_ex == 100009)
            ppenalty_ex = -00;

          if(ppenalty_EX == 100009)
            ppenalty_EX = -00;

          if(poffset == 100009)
            poffset = -123;

          if(pamN == 100009)
            pamN = 200;

          if(kimuraR == 100009)
            kimuraR = 1;

          if(pamN == 0)
          {
            reporterr("pamN=%d??\n", pamN);
            exit(1);
          }

          if(!(pamN >= 0))
          {
            pamN = pamN * -1;
            constants__1__5__makeaverage0 = 0;
          }

          else
            constants__1__5__makeaverage0 = 1;
          penalty = (signed int)((600.0 / 1000.0) * (double)ppenalty + 0.5);
          penalty_dist = (signed int)((600.0 / 1000.0) * (double)ppenalty_dist + 0.5);
          penalty_shift = (signed int)(penalty_shift_factor * (double)penalty);
          penalty_OP = (signed int)((600.0 / 1000.0) * (double)ppenalty_OP + 0.5);
          penalty_ex = (signed int)((600.0 / 1000.0) * (double)ppenalty_ex + 0.5);
          penalty_EX = (signed int)((600.0 / 1000.0) * (double)ppenalty_EX + 0.5);
          offset = (signed int)((600.0 / 1000.0) * (double)poffset + 0.5);
          offsetFFT = (signed int)((600.0 / 1000.0) * (double)-0 + 0.5);
          offsetLN = (signed int)((600.0 / 1000.0) * (double)100 + 0.5);
          penaltyLN = (signed int)((600.0 / 1000.0) * (double)-2000 + 0.5);
          penalty_exLN = (signed int)((600.0 / 1000.0) * (double)-100 + 0.5);
          if(!(trywarp == 0))
            sprintf(shiftmodel, "%4.2f", -((double)penalty_shift) / (double)600);

          else
            sprintf(shiftmodel, "noshift");
          sprintf(modelname, "%s %dPAM, %4.2f, %4.2f, %s", TMorJTT == 202 ? "Transmembrane" : "JTT", pamN, -((double)ppenalty) / (double)1000, -((double)poffset) / (double)1000, (const void *)shiftmodel);
          JTTmtx(rsr, constants__1__5__freq, (char *)amino, amino_grp, (signed int)(TMorJTT == 202));
          i = 0;
          for( ; !(i >= 0x80); i = i + 1)
            amino_n[(signed long int)i] = -1;
          i = 0;
          for( ; !(i >= 26); i = i + 1)
            amino_n[(signed long int)(signed int)amino[(signed long int)i]] = i;
          if(fmodel == 1)
          {
            calcfreq(nseq, seq, constants__1__5__datafreq);
            constants__1__5__freq1 = constants__1__5__datafreq;
          }

          else
            constants__1__5__freq1 = constants__1__5__freq;
          reporterr("generating %dPAM %s scoring matrix for amino acids ... ", pamN, TMorJTT == 202 ? "Transmembrane" : "JTT");
          tmp = 0.0;
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            mutab[(signed long int)i] = 0.0;
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              mutab[(signed long int)i] = mutab[(signed long int)i] + rsr[(signed long int)i][(signed long int)j] * constants__1__5__freq1[(signed long int)j];
            tmp = tmp + mutab[(signed long int)i] * constants__1__5__freq1[(signed long int)i];
          }
          delta = 0.01 / tmp;
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              if(!(i == j))
                pam1[(signed long int)i][(signed long int)j] = delta * rsr[(signed long int)i][(signed long int)j] * constants__1__5__freq1[(signed long int)j];

              else
                pam1[(signed long int)i][(signed long int)j] = 1.0 - delta * mutab[(signed long int)i];
          }
          if(!(disp == 0))
          {
            fprintf(stdout, "pam1 = \n");
            i = 0;
            for( ; !(i >= 20); i = i + 1)
            {
              j = 0;
              for( ; !(j >= 20); j = j + 1)
                fprintf(stdout, "%9.6f ", pam1[(signed long int)i][(signed long int)j]);
              fprintf(stdout, "\n");
            }
          }

          MtxuntDouble(pamx, 20);
          x = 0;
          for( ; !(x >= pamN); x = x + 1)
            MtxmltDouble(pamx, pam1, 20);
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              pamx[(signed long int)i][(signed long int)j] = pamx[(signed long int)i][(signed long int)j] / constants__1__5__freq1[(signed long int)j];
          }
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
            {
              if(IEEE_FLOAT_EQUAL(pamx[(signed long int)i][(signed long int)j], 0.0))
              {
                reporterr("WARNING: pamx[%d][%d] = 0.0?\n", i, j);
                pamx[(signed long int)i][(signed long int)j] = 0.00001;
              }

              double return_value_log10_7;
              return_value_log10_7=log10(pamx[(signed long int)i][(signed long int)j]);
              pamx[(signed long int)i][(signed long int)j] = return_value_log10_7 * 1000.0;
            }
          }
          if(fmodel == -1)
            constants__1__5__average = 0.0;

          else
          {
            constants__1__5__average = 0.0;
            i = 0;
            for( ; !(i >= 20); i = i + 1)
            {
              j = 0;
              for( ; !(j >= 20); j = j + 1)
                constants__1__5__average = constants__1__5__average + pamx[(signed long int)i][(signed long int)j] * constants__1__5__freq1[(signed long int)i] * constants__1__5__freq1[(signed long int)j];
            }
          }
          if(!(constants__1__5__makeaverage0 == 0))
          {
            i = 0;
            for( ; !(i >= 20); i = i + 1)
            {
              j = 0;
              for( ; !(j >= 20); j = j + 1)
                pamx[(signed long int)i][(signed long int)j] = pamx[(signed long int)i][(signed long int)j] - constants__1__5__average;
            }
          }

          constants__1__5__average = 0.0;
          i = 0;
          for( ; !(i >= 20); i = i + 1)
            constants__1__5__average = constants__1__5__average + pamx[(signed long int)i][(signed long int)i] * constants__1__5__freq1[(signed long int)i];
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              pamx[(signed long int)i][(signed long int)j] = pamx[(signed long int)i][(signed long int)j] * (600.0 / constants__1__5__average);
          }
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              pamx[(signed long int)i][(signed long int)j] = pamx[(signed long int)i][(signed long int)j] - (double)offset;
          }
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
            {
              return_value_shishagonyuu_8=shishagonyuu(pamx[(signed long int)i][(signed long int)j]);
              pamx[(signed long int)i][(signed long int)j] = (double)return_value_shishagonyuu_8;
            }
          }
          if(!(disp == 0))
          {
            fprintf(stdout, " scoring matrix  \n");
            i = 0;
            for( ; !(i >= 20); i = i + 1)
            {
              fprintf(stdout, "%c    ", amino[(signed long int)i]);
              j = 0;
              for( ; !(j >= 20); j = j + 1)
                fprintf(stdout, "%5.0f", pamx[(signed long int)i][(signed long int)j]);
              fprintf(stdout, "\n");
            }
            fprintf(stdout, "     ");
            i = 0;
            for( ; !(i >= 20); i = i + 1)
              fprintf(stdout, "    %c", amino[(signed long int)i]);
            constants__1__5__average = 0.0;
            i = 0;
            for( ; !(i >= 20); i = i + 1)
            {
              j = 0;
              for( ; !(j >= 20); j = j + 1)
                constants__1__5__average = constants__1__5__average + pamx[(signed long int)i][(signed long int)j] * constants__1__5__freq1[(signed long int)i] * constants__1__5__freq1[(signed long int)j];
            }
            fprintf(stdout, "\naverage = %f\n", constants__1__5__average);
            constants__1__5__iaverage = 0.0;
            i = 0;
            for( ; !(i >= 20); i = i + 1)
              constants__1__5__iaverage = constants__1__5__iaverage + pamx[(signed long int)i][(signed long int)i] * constants__1__5__freq1[(signed long int)i];
            fprintf(stdout, "itch average = %f, E=%f\n", constants__1__5__average, constants__1__5__average / constants__1__5__iaverage);
            reporterr("parameters: %d, %d, %d\n", penalty, penalty_ex, offset);
            exit(1);
          }

          i = 0;
          for( ; !(i >= 26); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 26); j = j + 1)
              n_dis[(signed long int)i][(signed long int)j] = 0;
          }
          i = 0;
          for( ; !(i >= 20); i = i + 1)
          {
            j = 0;
            for( ; !(j >= 20); j = j + 1)
              n_dis[(signed long int)i][(signed long int)j] = (signed int)pamx[(signed long int)i][(signed long int)j];
          }
          reporterr("done.\n");
          FreeDoubleMtx(rsr);
          FreeDoubleMtx(pam1);
          FreeDoubleMtx(pamx);
          FreeDoubleVec(constants__1__5__freq);
          FreeDoubleVec(mutab);
          FreeDoubleVec(constants__1__5__datafreq);
        }
  reporterr("scoremtx = %d\n", scoremtx);
  amino_dis=AllocateIntMtx(charsize, charsize);
  amino_dis_consweight_multi=AllocateDoubleMtx(charsize, charsize);
  reporterr("charsize=%d\n", charsize);
  i = 0;
  for( ; !(i >= charsize); i = i + 1)
    amino_n[(signed long int)i] = -1;
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
    amino_n[(signed long int)(signed int)amino[(signed long int)i]] = i;
  i = 0;
  for( ; !(i >= charsize); i = i + 1)
  {
    j = 0;
    for( ; !(j >= charsize); j = j + 1)
      amino_dis[(signed long int)i][(signed long int)j] = 0;
  }
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nalphabets); j = j + 1)
      n_disLN[(signed long int)i][(signed long int)j] = (double)0;
  }
  i = 0;
  for( ; !(i >= charsize); i = i + 1)
  {
    j = 0;
    for( ; !(j >= charsize); j = j + 1)
      amino_dis_consweight_multi[(signed long int)i][(signed long int)j] = 0.0;
  }
  n_dis_consweight_multi=AllocateDoubleMtx(nalphabets, nalphabets);
  n_disFFT=AllocateIntMtx(nalphabets, nalphabets);
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nalphabets); j = j + 1)
    {
      amino_dis[(signed long int)(signed int)amino[(signed long int)i]][(signed long int)(signed int)amino[(signed long int)j]] = n_dis[(signed long int)i][(signed long int)j];
      n_dis_consweight_multi[(signed long int)i][(signed long int)j] = (double)n_dis[(signed long int)i][(signed long int)j] * consweight_multi;
      amino_dis_consweight_multi[(signed long int)(signed int)amino[(signed long int)i]][(signed long int)(signed int)amino[(signed long int)j]] = (double)n_dis[(signed long int)i][(signed long int)j] * consweight_multi;
    }
  }
  if(dorp == 100)
  {
    i = 0;
    for( ; !(i >= 10); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 10); j = j + 1)
        n_disLN[(signed long int)i][(signed long int)j] = ((double)n_dis[(signed long int)i][(signed long int)j] + (double)offset) - (double)offsetLN;
    }
    i = 0;
    for( ; !(i >= 10); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 10); j = j + 1)
        n_disFFT[(signed long int)i][(signed long int)j] = (n_dis[(signed long int)i][(signed long int)j] + offset) - offsetFFT;
    }
  }

  else
  {
    i = 0;
    for( ; !(i >= 20); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 20); j = j + 1)
        n_disLN[(signed long int)i][(signed long int)j] = ((double)n_dis[(signed long int)i][(signed long int)j] + (double)offset) - (double)offsetLN;
    }
    i = 0;
    for( ; !(i >= 20); i = i + 1)
    {
      j = 0;
      for( ; !(j >= 20); j = j + 1)
        n_disFFT[(signed long int)i][(signed long int)j] = (n_dis[(signed long int)i][(signed long int)j] + offset) - offsetFFT;
    }
  }
  ppid = 0;
  if(fftThreshold == 100009)
    fftThreshold = 80;

  if(fftWinSize == 100009)
  {
    if(dorp == 100)
      fftWinSize = 100;

    else
      fftWinSize = 20;
  }

  if(!(fftscore == 0))
  {
    double av;
    double sd;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      polarity[(signed long int)i] = polarity_[(signed long int)i];
    av = 0.0;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      av = av + polarity[(signed long int)i];
    av = av / 20.0;
    sd = 0.0;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      sd = sd + (polarity[(signed long int)i] - av) * (polarity[(signed long int)i] - av);
    sd = sd / 20.0;
    sd=sqrt(sd);
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      polarity[(signed long int)i] = polarity[(signed long int)i] - av;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      polarity[(signed long int)i] = polarity[(signed long int)i] / sd;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      volume[(signed long int)i] = volume_[(signed long int)i];
    av = 0.0;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      av = av + volume[(signed long int)i];
    av = av / 20.0;
    sd = 0.0;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      sd = sd + (volume[(signed long int)i] - av) * (volume[(signed long int)i] - av);
    sd = sd / 20.0;
    sd=sqrt(sd);
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      volume[(signed long int)i] = volume[(signed long int)i] - av;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
      volume[(signed long int)i] = volume[(signed long int)i] / sd;
  }

}

// copydatafromgui
// file io.c line 1587
extern signed int copydatafromgui(char **namegui, char **seqgui, char **name, signed int *nlen, char **seq)
{
  signed int i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    name[(signed long int)i][(signed long int)0] = (char)61;
    strncpy(name[(signed long int)i] + (signed long int)1, namegui[(signed long int)i], (unsigned long int)(256 - 2));
    name[(signed long int)i][(signed long int)(256 - 1)] = (char)0;
    strcpy(seq[(signed long int)i], seqgui[(signed long int)i]);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    nlen[(signed long int)i] = (signed int)return_value_strlen_1;
  }
  if(dorp == 100)
    seqLower(njob, seq);

  else
    if(dorp == 112)
      seqUpper(njob, seq);

    else
    {
      reporterr("DNA or Protein?\n");
      return 1;
    }
  if(!(outnumber == 0))
  {
    char *namebuf;
    char *cptr;
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)(256 + 100), sizeof(char) /*1ul*/ );
    namebuf = (char *)return_value_calloc_2;
    i = 0;
    for( ; !(i >= njob); i = i + 1)
    {
      namebuf[(signed long int)0] = (char)61;
      cptr=strstr(name[(signed long int)i], "_numo_e_");
      if(!(cptr == ((char *)NULL)))
        sprintf(namebuf + (signed long int)1, "_numo_s_%08d_numo_e_%s", i + 1, cptr + (signed long int)8);

      else
        sprintf(namebuf + (signed long int)1, "_numo_s_%08d_numo_e_%s", i + 1, name[(signed long int)i] + (signed long int)1);
      strncpy(name[(signed long int)i], namebuf, (unsigned long int)256);
      name[(signed long int)i][(signed long int)(256 - 1)] = (char)0;
    }
    free((void *)namebuf);
  }

  return 0;
}

// countATGC
// file io.c line 1944
extern signed int countATGC(char *s, signed int *total)
{
  signed int nATGC;
  signed int nChar;
  char c;
  nChar = 0;
  nATGC = nChar;
  if((signed int)*s == 0)
  {
    *total = 0;
    return 0;
  }

  else
  {
    do
    {
      signed int return_value_tolower_1;
      return_value_tolower_1=tolower((signed int)*s);
      c = (char)return_value_tolower_1;
      const unsigned short int **return_value___ctype_b_loc_2;
      return_value___ctype_b_loc_2=__ctype_b_loc();
      if(!((1024 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)c]) == 0))
      {
        nChar = nChar + 1;
        if((signed int)c == 97 || (signed int)c == 99 || (signed int)c == 103 || (signed int)c == 110 || (signed int)c == 116 || (signed int)c == 117)
          nATGC = nATGC + 1;

      }

      s = s + 1l;
    }
    while(!(*s == 0));
    *total = nChar;
    return nATGC;
  }
}

// countATGCbk
// file io.c line 1973
double countATGCbk(char *s)
{
  signed int nATGC;
  signed int nChar;
  char c;
  nChar = 0;
  nATGC = nChar;
  do
  {
    signed int return_value_tolower_1;
    return_value_tolower_1=tolower((signed int)*s);
    c = (char)return_value_tolower_1;
    const unsigned short int **return_value___ctype_b_loc_2;
    return_value___ctype_b_loc_2=__ctype_b_loc();
    if(!((1024 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)c]) == 0))
    {
      nChar = nChar + 1;
      if((signed int)c == 97 || (signed int)c == 99 || (signed int)c == 103 || (signed int)c == 110 || (signed int)c == 116 || (signed int)c == 117)
        nATGC = nATGC + 1;

    }

    s = s + 1l;
  }
  while(!(*s == 0));
  return (double)nATGC / (double)nChar;
}

// countKUorWA
// file io.c line 1186
static signed int countKUorWA(struct _IO_FILE *fp)
{
  signed int value;
  signed int c;
  signed int b;
  value = 0;
  b = 10;
  do
  {
    c=_IO_getc(fp);
    if(c == -1)
      break;

    if(b == 10 && c == 62)
      value = value + 1;

    b = c;
  }
  while((_Bool)1);
  rewind(fp);
  return value;
}

// counteff
// file mltaln9.c line 5284
extern void counteff(signed int nseq, signed int ***topol, double **len, double **node)
{
  signed int i;
  signed int j;
  signed int k;
  signed int s1;
  signed int s2;
  double rootnode[500000l];
  double eff[500000l];
  if(!(mix == 0))
    switch(weight)
    {
      case 2:
      {
        weight = 3;
        break;
      }
      case 3:
      {
        weight = 2;
        break;
      }
      default:
        ErrorExit("mix error");
    }

  double return_value_ipower_1;
  if(weight == 2)
  {
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      rootnode[(signed long int)i] = (double)0;
    i = 0;
    for( ; !(i >= nseq + -2); i = i + 1)
    {
      j = 0;
      for( ; (*topol[(signed long int)i])[(signed long int)j] >= 0; j = j + 1)
        rootnode[(signed long int)topol[(signed long int)i][(signed long int)0][(signed long int)j]] = rootnode[(signed long int)topol[(signed long int)i][(signed long int)0][(signed long int)j]] + 1.000000;
      j = 0;
      for( ; topol[(signed long int)i][1l][(signed long int)j] >= 0; j = j + 1)
        rootnode[(signed long int)topol[(signed long int)i][(signed long int)1][(signed long int)j]] = rootnode[(signed long int)topol[(signed long int)i][(signed long int)1][(signed long int)j]] + 1.000000;
      j = 0;
      for( ; (*topol[(signed long int)i])[(signed long int)j] >= 0; j = j + 1)
      {
        s1 = topol[(signed long int)i][(signed long int)0][(signed long int)j];
        k = 0;
        for( ; topol[(signed long int)i][1l][(signed long int)k] >= 0; k = k + 1)
        {
          s2 = topol[(signed long int)i][(signed long int)1][(signed long int)k];
          node[(signed long int)(s1 < s2 ? s1 : s2)][(signed long int)(s1 > s2 ? s1 : s2)] = (rootnode[(signed long int)s1] + rootnode[(signed long int)s2]) - (double)1;
        }
      }
    }
    j = 0;
    for( ; (*topol[(signed long int)(nseq + -2)])[(signed long int)j] >= 0; j = j + 1)
    {
      s1 = topol[(signed long int)(nseq - 2)][(signed long int)0][(signed long int)j];
      k = 0;
      for( ; topol[(signed long int)(nseq + -2)][1l][(signed long int)k] >= 0; k = k + 1)
      {
        s2 = topol[(signed long int)(nseq - 2)][(signed long int)1][(signed long int)k];
        node[(signed long int)(s1 < s2 ? s1 : s2)][(signed long int)(s1 > s2 ? s1 : s2)] = rootnode[(signed long int)s1] + rootnode[(signed long int)s2];
      }
    }
    i = 0;
    for( ; !(i >= nseq + -1); i = i + 1)
    {
      j = i + 1;
      for( ; !(j >= nseq); j = j + 1)
      {
        return_value_ipower_1=ipower(0.5, (signed int)node[(signed long int)i][(signed long int)j]);
        node[(signed long int)i][(signed long int)j] = return_value_ipower_1 + geta2;
      }
    }
    i = 0;
    for( ; !(i >= nseq + -1); i = i + 1)
    {
      j = i + 1;
      for( ; !(j >= nseq); j = j + 1)
        node[(signed long int)j][(signed long int)i] = node[(signed long int)i][(signed long int)j];
    }
  }

  if(weight == 3)
  {
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
    {
      rootnode[(signed long int)i] = 0.0;
      eff[(signed long int)i] = 1.0;
    }
    i = 0;
    for( ; !(i >= nseq + -1); i = i + 1)
    {
      j = 0;
      do
      {
        s1 = topol[(signed long int)i][(signed long int)0][(signed long int)j];
        if(!(s1 >= 0))
          break;

        rootnode[(signed long int)s1] = rootnode[(signed long int)s1] + len[(signed long int)i][(signed long int)0] * eff[(signed long int)s1];
        eff[(signed long int)s1] = eff[(signed long int)s1] * 0.5;
        j = j + 1;
      }
      while((_Bool)1);
      j = 0;
      do
      {
        s2 = topol[(signed long int)i][(signed long int)1][(signed long int)j];
        if(!(s2 >= 0))
          break;

        rootnode[(signed long int)s2] = rootnode[(signed long int)s2] + len[(signed long int)i][(signed long int)1] * eff[(signed long int)s2];
        eff[(signed long int)s2] = eff[(signed long int)s2] * 0.5;
        j = j + 1;
      }
      while((_Bool)1);
    }
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      rootnode[(signed long int)i] = rootnode[(signed long int)i] + 0.001;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
    {
      j = 0;
      for( ; !(j >= nseq); j = j + 1)
        if(!(j == i))
          node[(signed long int)i][(signed long int)j] = (double)rootnode[(signed long int)i] * rootnode[(signed long int)j];

        else
          node[(signed long int)i][(signed long int)i] = rootnode[(signed long int)i];
    }
  }

}

// counteff_simple
// file mltaln9.c line 5197
extern void counteff_simple(signed int nseq, signed int ***topol, double **len, double *node)
{
  signed int i;
  signed int j;
  signed int s1;
  signed int s2;
  double total;
  double *rootnode;
  double *eff;
  rootnode=AllocateDoubleVec(nseq);
  eff=AllocateDoubleVec(nseq);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    rootnode[(signed long int)i] = 0.0;
    eff[(signed long int)i] = 1.0;
  }
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = 0;
    do
    {
      s1 = topol[(signed long int)i][(signed long int)0][(signed long int)j];
      if(!(s1 >= 0))
        break;

      rootnode[(signed long int)s1] = rootnode[(signed long int)s1] + len[(signed long int)i][(signed long int)0] * eff[(signed long int)s1];
      eff[(signed long int)s1] = eff[(signed long int)s1] * 0.5;
      j = j + 1;
    }
    while((_Bool)1);
    j = 0;
    do
    {
      s2 = topol[(signed long int)i][(signed long int)1][(signed long int)j];
      if(!(s2 >= 0))
        break;

      rootnode[(signed long int)s2] = rootnode[(signed long int)s2] + len[(signed long int)i][(signed long int)1] * eff[(signed long int)s2];
      eff[(signed long int)s2] = eff[(signed long int)s2] * 0.5;
      j = j + 1;
    }
    while((_Bool)1);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    rootnode[(signed long int)i] = rootnode[(signed long int)i] + 0.001;
  total = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    total = total + rootnode[(signed long int)i];
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    node[(signed long int)i] = rootnode[(signed long int)i] / total;
  free((void *)rootnode);
  free((void *)eff);
}

// counteff_simple_double
// file mltaln9.c line 5021
extern void counteff_simple_double(signed int nseq, signed int ***topol, double **len, double *node)
{
  signed int i;
  signed int j;
  signed int s1;
  signed int s2;
  double total;
  i = 0;
  static double eff[500000l];
  static double rootnode[500000l];
  for( ; !(i >= nseq); i = i + 1)
  {
    rootnode[(signed long int)i] = 0.0;
    eff[(signed long int)i] = 1.0;
  }
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = 0;
    do
    {
      s1 = topol[(signed long int)i][(signed long int)0][(signed long int)j];
      if(!(s1 >= 0))
        break;

      rootnode[(signed long int)s1] = rootnode[(signed long int)s1] + (double)len[(signed long int)i][(signed long int)0] * eff[(signed long int)s1];
      eff[(signed long int)s1] = eff[(signed long int)s1] * 0.5;
      j = j + 1;
    }
    while((_Bool)1);
    j = 0;
    do
    {
      s2 = topol[(signed long int)i][(signed long int)1][(signed long int)j];
      if(!(s2 >= 0))
        break;

      rootnode[(signed long int)s2] = rootnode[(signed long int)s2] + (double)len[(signed long int)i][(signed long int)1] * eff[(signed long int)s2];
      eff[(signed long int)s2] = eff[(signed long int)s2] * 0.5;
      j = j + 1;
    }
    while((_Bool)1);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    rootnode[(signed long int)i] = rootnode[(signed long int)i] + 0.001;
  total = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    total = total + rootnode[(signed long int)i];
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    node[(signed long int)i] = rootnode[(signed long int)i] / total;
}

// counteff_simple_double_nostatic
// file mltaln9.c line 5097
extern void counteff_simple_double_nostatic(signed int nseq, signed int ***topol, double **len, double *node)
{
  signed int i;
  signed int j;
  signed int s1;
  signed int s2;
  double total;
  double *rootnode;
  double *eff;
  rootnode=AllocateDoubleVec(nseq);
  eff=AllocateDoubleVec(nseq);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    if(*len[(signed long int)i] < 0.0)
    {
      reporterr("WARNING: negative branch length %f, step %d-0\n", len[(signed long int)i][(signed long int)0], i);
      len[(signed long int)i][(signed long int)0] = 0.0;
    }

    if(len[(signed long int)i][1l] < 0.0)
    {
      reporterr("WARNING: negative branch length %f, step %d-1\n", len[(signed long int)i][(signed long int)1], i);
      len[(signed long int)i][(signed long int)1] = 0.0;
    }

  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    rootnode[(signed long int)i] = 0.0;
    eff[(signed long int)i] = 1.0;
  }
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = 0;
    do
    {
      s1 = topol[(signed long int)i][(signed long int)0][(signed long int)j];
      if(!(s1 >= 0))
        break;

      rootnode[(signed long int)s1] = rootnode[(signed long int)s1] + (double)len[(signed long int)i][(signed long int)0] * eff[(signed long int)s1];
      eff[(signed long int)s1] = eff[(signed long int)s1] * 0.5;
      j = j + 1;
    }
    while((_Bool)1);
    j = 0;
    do
    {
      s2 = topol[(signed long int)i][(signed long int)1][(signed long int)j];
      if(!(s2 >= 0))
        break;

      rootnode[(signed long int)s2] = rootnode[(signed long int)s2] + (double)len[(signed long int)i][(signed long int)1] * eff[(signed long int)s2];
      eff[(signed long int)s2] = eff[(signed long int)s2] * 0.5;
      j = j + 1;
    }
    while((_Bool)1);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    rootnode[(signed long int)i] = rootnode[(signed long int)i] + 0.001;
  total = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    total = total + rootnode[(signed long int)i];
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    node[(signed long int)i] = rootnode[(signed long int)i] / total;
  free((void *)rootnode);
  free((void *)eff);
}

// countmem
// file mltaln9.c line 8798
static signed int countmem(signed int *s)
{
  signed int v = 0;
  signed int *tmp_post_1;
  do
  {
    tmp_post_1 = s;
    s = s + 1l;
    if(*tmp_post_1 == -1)
      break;

    v = v + 1;
  }
  while((_Bool)1);
  return v;
}

// countnode
// file mltaln9.c line 4936
extern void countnode(signed int nseq, signed int ***topol, double **node)
{
  signed int i;
  signed int j;
  signed int k;
  signed int s1;
  signed int s2;
  if(!(nseq + -2 >= 0))
  {
    reporterr("Too few sequence for countnode: nseq = %d\n", nseq);
    exit(1);
  }

  i = 0;
  static double rootnode[500000l];
  for( ; !(i >= nseq); i = i + 1)
    rootnode[(signed long int)i] = (double)0;
  i = 0;
  for( ; !(i >= nseq + -2); i = i + 1)
  {
    j = 0;
    for( ; (*topol[(signed long int)i])[(signed long int)j] >= 0; j = j + 1)
      rootnode[(signed long int)topol[(signed long int)i][(signed long int)0][(signed long int)j]] = rootnode[(signed long int)topol[(signed long int)i][(signed long int)0][(signed long int)j]] + 1.000000;
    j = 0;
    for( ; topol[(signed long int)i][1l][(signed long int)j] >= 0; j = j + 1)
      rootnode[(signed long int)topol[(signed long int)i][(signed long int)1][(signed long int)j]] = rootnode[(signed long int)topol[(signed long int)i][(signed long int)1][(signed long int)j]] + 1.000000;
    j = 0;
    for( ; (*topol[(signed long int)i])[(signed long int)j] >= 0; j = j + 1)
    {
      s1 = topol[(signed long int)i][(signed long int)0][(signed long int)j];
      k = 0;
      for( ; topol[(signed long int)i][1l][(signed long int)k] >= 0; k = k + 1)
      {
        s2 = topol[(signed long int)i][(signed long int)1][(signed long int)k];
        node[(signed long int)(s1 < s2 ? s1 : s2)][(signed long int)(s1 > s2 ? s1 : s2)] = (rootnode[(signed long int)s1] + rootnode[(signed long int)s2]) - (double)1;
      }
    }
  }
  j = 0;
  for( ; (*topol[(signed long int)(nseq + -2)])[(signed long int)j] >= 0; j = j + 1)
  {
    s1 = topol[(signed long int)(nseq - 2)][(signed long int)0][(signed long int)j];
    k = 0;
    for( ; topol[(signed long int)(nseq + -2)][1l][(signed long int)k] >= 0; k = k + 1)
    {
      s2 = topol[(signed long int)(nseq - 2)][(signed long int)1][(signed long int)k];
      node[(signed long int)(s1 < s2 ? s1 : s2)][(signed long int)(s1 > s2 ? s1 : s2)] = rootnode[(signed long int)s1] + rootnode[(signed long int)s2];
    }
  }
}

// countnode_int
// file mltaln9.c line 4975
extern void countnode_int(signed int nseq, signed int ***topol, signed int **node)
{
  signed int i;
  signed int j;
  signed int k;
  signed int s1;
  signed int s2;
  signed int rootnode[500000l];
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    rootnode[(signed long int)i] = 0;
  i = 0;
  for( ; !(i >= nseq + -2); i = i + 1)
  {
    j = 0;
    for( ; (*topol[(signed long int)i])[(signed long int)j] >= 0; j = j + 1)
      rootnode[(signed long int)topol[(signed long int)i][(signed long int)0][(signed long int)j]] = rootnode[(signed long int)topol[(signed long int)i][(signed long int)0][(signed long int)j]] + 1;
    j = 0;
    for( ; topol[(signed long int)i][1l][(signed long int)j] >= 0; j = j + 1)
      rootnode[(signed long int)topol[(signed long int)i][(signed long int)1][(signed long int)j]] = rootnode[(signed long int)topol[(signed long int)i][(signed long int)1][(signed long int)j]] + 1;
    j = 0;
    for( ; (*topol[(signed long int)i])[(signed long int)j] >= 0; j = j + 1)
    {
      s1 = topol[(signed long int)i][(signed long int)0][(signed long int)j];
      k = 0;
      for( ; topol[(signed long int)i][1l][(signed long int)k] >= 0; k = k + 1)
      {
        s2 = topol[(signed long int)i][(signed long int)1][(signed long int)k];
        node[(signed long int)(s1 < s2 ? s1 : s2)][(signed long int)(s1 > s2 ? s1 : s2)] = (rootnode[(signed long int)s1] + rootnode[(signed long int)s2]) - 1;
      }
    }
  }
  j = 0;
  for( ; (*topol[(signed long int)(nseq + -2)])[(signed long int)j] >= 0; j = j + 1)
  {
    s1 = topol[(signed long int)(nseq - 2)][(signed long int)0][(signed long int)j];
    k = 0;
    for( ; topol[(signed long int)(nseq + -2)][1l][(signed long int)k] >= 0; k = k + 1)
    {
      s2 = topol[(signed long int)(nseq - 2)][(signed long int)1][(signed long int)k];
      node[(signed long int)(s1 < s2 ? s1 : s2)][(signed long int)(s1 > s2 ? s1 : s2)] = rootnode[(signed long int)s1] + rootnode[(signed long int)s2];
    }
  }
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
      node[(signed long int)j][(signed long int)i] = node[(signed long int)i][(signed long int)j];
  }
}

// countnogaplen
// file io.c line 1995
signed int countnogaplen(char *seq)
{
  signed int val = 0;
  char *tmp_post_1;
  while(!(*seq == 0))
  {
    tmp_post_1 = seq;
    seq = seq + 1l;
    if(!((signed int)*tmp_post_1 == 45))
      val = val + 1;

  }
  return val;
}

// countnormalletters
// file io.c line 2003
signed int countnormalletters(char *seq, char *ref)
{
  signed int val = 0;
  char *tmp_post_1;
  char *return_value_strchr_2;
  while(!(*seq == 0))
  {
    tmp_post_1 = seq;
    seq = seq + 1l;
    return_value_strchr_2=strchr(ref, (signed int)*tmp_post_1);
    if(!(return_value_strchr_2 == ((char *)NULL)))
      val = val + 1;

  }
  return val;
}

// countspace
// file io.c line 5015
static signed int countspace(char *s)
{
  signed int v = 0;
  char status = (char)115;
  char *pt = s;
  tab2space(s);
  _Bool tmp_if_expr_1;
  for( ; !(*pt == 0); pt = pt + 1l)
    if((signed int)*pt == 32)
      status = (char)115;

    else
      if((signed int)status == 115)
      {
        if((signed int)*pt == 10)
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (signed int)*pt == 35 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          break;

        v = v + 1;
        status = (char)110;
        signed int return_value_atoi_2;
        return_value_atoi_2=atoi(pt);
        if(return_value_atoi_2 == 0)
        {
          fprintf(stderr, "Format error? Sequences should be specified as 1, 2, 3...\n");
          exit(1);
        }

      }

  return v;
}

// creverse
// file io.c line 8
char creverse(char f)
{
  static char *table = (char *)(void *)0;
  if(table == ((char *)NULL))
  {
    signed int i;
    table=AllocateCharVec(0x80);
    i = 0;
    for( ; !(i >= 0x80); i = i + 1)
      table[(signed long int)i] = (char)i;
    table[(signed long int)65] = (char)84;
    table[(signed long int)67] = (char)71;
    table[(signed long int)71] = (char)67;
    table[(signed long int)84] = (char)65;
    table[(signed long int)85] = (char)65;
    table[(signed long int)77] = (char)75;
    table[(signed long int)82] = (char)89;
    table[(signed long int)87] = (char)87;
    table[(signed long int)83] = (char)83;
    table[(signed long int)89] = (char)82;
    table[(signed long int)75] = (char)77;
    table[(signed long int)86] = (char)66;
    table[(signed long int)72] = (char)68;
    table[(signed long int)68] = (char)72;
    table[(signed long int)66] = (char)86;
    table[(signed long int)78] = (char)78;
    table[(signed long int)97] = (char)116;
    table[(signed long int)99] = (char)103;
    table[(signed long int)103] = (char)99;
    table[(signed long int)116] = (char)97;
    table[(signed long int)117] = (char)97;
    table[(signed long int)109] = (char)107;
    table[(signed long int)114] = (char)121;
    table[(signed long int)119] = (char)119;
    table[(signed long int)115] = (char)115;
    table[(signed long int)121] = (char)114;
    table[(signed long int)107] = (char)109;
    table[(signed long int)118] = (char)98;
    table[(signed long int)104] = (char)100;
    table[(signed long int)100] = (char)104;
    table[(signed long int)98] = (char)118;
    table[(signed long int)110] = (char)110;
  }

  return table[(signed long int)(signed int)f];
}

// cutAlignment
// file io.c line 1735
extern void cutAlignment(struct _IO_FILE *fp, signed int **regtable, char **revtable, signed int *outtable, char **name, char **outseq)
{
  signed int i;
  signed int j;
  signed int outlen;
  char *fs;
  char *rs;
  signed int npos;
  signed int lpos;
  signed int startpos;
  signed int endpos;
  signed int cutAlignment__1__seqlen;
  static char *dumname = (char *)(void *)0;
  if(dumname == ((char *)NULL))
    dumname=AllocateCharVec(5000000);

  rewind(fp);
  searchKUorWA(fp);
  npos = 0;
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    dumname[(signed long int)0] = (char)62;
    _IO_getc(fp);
    myfgets(dumname + (signed long int)1, 256 - 1, fp);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc_casepreserve(fp);
    if(!(outtable[(signed long int)i] == 0))
    {
      strncat(name[(signed long int)npos], dumname, (unsigned long int)(256 - 1));
      name[(signed long int)npos][(signed long int)(256 - 1)] = (char)0;
      if(dorp == 100 && !(upperCase == -1))
        seqLower(1, &tmpseq);

      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(tmpseq);
      cutAlignment__1__seqlen = (signed int)return_value_strlen_1;
      lpos = 0;
      j = 0;
      for( ; !(j >= 5); j = j + 1)
      {
        if((*regtable)[(signed long int)(2 * j)] == -1)
        {
          if((*regtable)[(signed long int)(2 * j + 1)] == -1)
            goto __CPROVER_DUMP_L13;

        }

        startpos = regtable[(signed long int)0][(signed long int)(j * 2)];
        endpos = regtable[(signed long int)0][(signed long int)(j * 2 + 1)];
        if(!(endpos >= startpos))
        {
          endpos = regtable[(signed long int)0][(signed long int)(j * 2)];
          startpos = regtable[(signed long int)0][(signed long int)(j * 2 + 1)];
        }

        if(!(startpos >= 0))
          startpos = 0;

        if(!(endpos >= 0))
          endpos = 0;

        if(endpos >= cutAlignment__1__seqlen)
          endpos = cutAlignment__1__seqlen - 1;

        if(startpos >= cutAlignment__1__seqlen)
          startpos = cutAlignment__1__seqlen - 1;

        outlen = (endpos - startpos) + 1;
        if((signed int)(*revtable)[(signed long int)j] == 102)
        {
          strncpy(outseq[(signed long int)npos] + (signed long int)lpos, tmpseq + (signed long int)startpos, (unsigned long int)outlen);
          lpos = lpos + outlen;
        }

        else
        {
          fs=AllocateCharVec(outlen + 1);
          rs=AllocateCharVec(outlen + 1);
          fs[(signed long int)outlen] = (char)0;
          strncpy(fs, tmpseq + (signed long int)startpos, (unsigned long int)outlen);
          sreverse(rs, fs);
          strncpy(outseq[(signed long int)npos] + (signed long int)lpos, rs, (unsigned long int)outlen);
          lpos = lpos + outlen;
          free((void *)fs);
          free((void *)rs);
        }
        outseq[(signed long int)npos][(signed long int)lpos] = (char)0;

      __CPROVER_DUMP_L13:
        ;
      }
      npos = npos + 1;
    }

    free((void *)tmpseq);
  }
}

// cutData
// file io.c line 1824
extern void cutData(struct _IO_FILE *fp, signed int **regtable, char **revtable, signed int *outtable)
{
  signed int i;
  signed int j;
  signed int outlen;
  signed int cutData__1__seqlen;
  signed int startpos;
  signed int endpos;
  char *fs;
  char *rs;
  static char *dumname = (char *)(void *)0;
  if(dumname == ((char *)NULL))
    dumname=AllocateCharVec(5000000);

  rewind(fp);
  searchKUorWA(fp);
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    dumname[(signed long int)0] = (char)61;
    _IO_getc(fp);
    myfgets(dumname + (signed long int)1, 256 - 2, fp);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc_casepreserve(fp);
    if(!(outtable[(signed long int)i] == 0))
    {
      gappick_samestring(tmpseq);
      _IO_putc(62, stdout);
      puts(dumname + (signed long int)1);
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(tmpseq);
      cutData__1__seqlen = (signed int)return_value_strlen_1;
      if(dorp == 100 && !(upperCase == -1))
        seqLower(1, &tmpseq);

      if(outtable[(signed long int)i] == 2)
      {
        startpos = 0;
        endpos = cutData__1__seqlen - 1;
        outlen = (endpos - startpos) + 1;
        fprintf(stdout, "%.*s\n", outlen, tmpseq + (signed long int)startpos);
      }

      else
      {
        j = 0;
        for( ; !(j >= 5); j = j + 1)
        {
          if(regtable[(signed long int)i][(signed long int)(2 * j)] == -1)
          {
            if(regtable[(signed long int)i][(signed long int)(2 * j + 1)] == -1)
              goto __CPROVER_DUMP_L13;

          }

          startpos = regtable[(signed long int)i][(signed long int)(j * 2)];
          endpos = regtable[(signed long int)i][(signed long int)(j * 2 + 1)];
          if(!(endpos >= startpos))
          {
            endpos = regtable[(signed long int)i][(signed long int)(j * 2)];
            startpos = regtable[(signed long int)i][(signed long int)(j * 2 + 1)];
          }

          if(!(startpos >= 0))
            startpos = 0;

          if(!(endpos >= 0))
            endpos = 0;

          if(endpos >= cutData__1__seqlen)
            endpos = cutData__1__seqlen - 1;

          if(startpos >= cutData__1__seqlen)
            startpos = cutData__1__seqlen - 1;

          outlen = (endpos - startpos) + 1;
          if((signed int)revtable[(signed long int)i][(signed long int)j] == 102)
          {
            fprintf(stderr, "startpos = %d\n", startpos);
            fprintf(stderr, "endpos   = %d\n", endpos);
            fprintf(stderr, "outlen = %d\n", outlen);
            fprintf(stdout, "%.*s\n", outlen, tmpseq + (signed long int)startpos);
          }

          else
          {
            fs=AllocateCharVec(outlen + 1);
            rs=AllocateCharVec(outlen + 1);
            fs[(signed long int)outlen] = (char)0;
            strncpy(fs, tmpseq + (signed long int)startpos, (unsigned long int)outlen);
            sreverse(rs, fs);
            fprintf(stdout, "%s\n", rs);
            free((void *)fs);
            free((void *)rs);
          }

        __CPROVER_DUMP_L13:
          ;
        }
      }
    }

    free((void *)tmpseq);
  }
}

// cutal
// file io.c line 917
extern char * cutal(char *al, signed int al_display_start, signed int start, signed int end)
{
  signed int pos;
  char *pt = al;
  char *val = (char *)(void *)0;
  pos = al_display_start;
  char *tmp_post_1;
  while((_Bool)1)
  {
    if(start == pos)
      val = pt;

    if(end == pos)
      break;

    if(!((signed int)*pt == 45))
      pos = pos + 1;

    tmp_post_1 = pt;
    pt = pt + 1l;
    if((signed int)*tmp_post_1 == 0)
      break;

  }
  pt[(signed long int)1] = (char)0;
  return val;
}

// display
// file mltaln9.c line 113
extern void display(char **seq, signed int nseq)
{
  signed int i;
  signed int imax;
  char b[121l];
  if(!(disp == 0))
  {
    if(nseq >= 61)
      imax = 60;

    else
      imax = nseq;
    reporterr("    ....,....+....,....+....,....+....,....+....,....+....,....+....,....+....,....+....,....+....,....+....,....+....,....+\n");
    i = 0;
    for( ; !(i >= imax); i = i + 1)
    {
      strncpy(b, seq[(signed long int)i] + (signed long int)0, (unsigned long int)120);
      b[(signed long int)120] = (char)0;
      reporterr("%3d %s\n", i + 1, (const void *)b);
    }
  }

}

// dist2offset
// file mltaln9.c line 9514
extern double dist2offset(double dist)
{
  double val = dist * 0.5 - specificityconsideration;
  if(val > 0.0)
    val = 0.0;

  return val;
}

// dontcalcimportance
// file mltaln9.c line 6614
extern void dontcalcimportance(signed int nseq, double *eff, char **seq, struct _LocalHom **localhom)
{
  signed int i;
  signed int j;
  struct _LocalHom *ptr;
  signed int *nogaplen;
  nogaplen=AllocateIntVec(nseq);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    nogaplen[(signed long int)i]=seqlen(seq[(signed long int)i]);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
    {
      ptr = localhom[(signed long int)i] + (signed long int)j;
      for( ; !(ptr == ((struct _LocalHom *)NULL)); ptr = ptr->next)
      {
        ptr->importance = ptr->opt / (double)ptr->overlapaa;
        ptr->fimportance = (double)ptr->importance;
      }
    }
  }
  free((void *)nogaplen);
}

// dontcalcimportance_firstone
// file mltaln9.c line 6647
extern void dontcalcimportance_firstone(signed int nseq, double *eff, char **seq, struct _LocalHom **localhom)
{
  signed int i;
  signed int j;
  signed int nseq1;
  struct _LocalHom *ptr;
  nseq1 = nseq - 1;
  i = 0;
  for( ; !(i >= nseq1); i = i + 1)
  {
    j = 0;
    ptr = localhom[(signed long int)i] + (signed long int)j;
    for( ; !(ptr == ((struct _LocalHom *)NULL)); ptr = ptr->next)
    {
      ptr->importance = ptr->opt * 0.5;
      ptr->fimportance = (double)ptr->importance;
    }
  }
}

// doublencpy
// file mltaln9.c line 6103
extern void doublencpy(double *vec1, double *vec2, signed int len)
{
  signed int tmp_post_1;
  double *tmp_post_2;
  double *tmp_post_3;
  do
  {
    tmp_post_1 = len;
    len = len - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = vec1;
    vec1 = vec1 + 1l;
    tmp_post_3 = vec2;
    vec2 = vec2 + 1l;
    *tmp_post_2 = *tmp_post_3;
  }
  while((_Bool)1);
}

// escapehtml
// file io.c line 2146
static void escapehtml(char *res, char *ori, signed int maxlen)
{
  char *res0 = res;
  while(!(*ori == 0))
  {
    if((signed int)*ori == 60)
    {
      strcpy(res, "&lt;");
      res = res + (signed long int)3;
    }

    else
      if((signed int)*ori == 62)
      {
        strcpy(res, "&gt;");
        res = res + (signed long int)3;
      }

      else
        if((signed int)*ori == 38)
        {
          strcpy(res, "&amp;");
          res = res + (signed long int)4;
        }

        else
          if((signed int)*ori == 34)
          {
            strcpy(res, "&quot;");
            res = res + (signed long int)5;
          }

          else
            if((signed int)*ori == 32)
            {
              strcpy(res, "&nbsp;");
              res = res + (signed long int)5;
            }

            else
              *res = *ori;
    res = res + 1l;
    ori = ori + 1l;
    if((res - res0) + -10l >= 5000001l)
      break;

  }
  *res = (char)0;
}

// exitall
// file mltaln9.c line 107
extern void exitall(char *arr)
{
  reporterr("%s\n", arr);
  exit(1);
}

// extendedmtx
// file blosum.c line 317
extern void extendedmtx(double **matrix, double *freq, unsigned char *amino, char *amino_grp)
{
  signed int i;
  signed int j;
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
    amino[(signed long int)i] = (unsigned char)i;
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
    amino_grp[(signed long int)(signed int)amino[(signed long int)i]] = (char)(i % 6);
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
    freq[(signed long int)i] = 1.0 / (double)nalphabets;
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
  {
    j = 0;
    for( ; i >= j; j = j + 1)
    {
      matrix[(signed long int)j][(signed long int)i] = (double)-1.0;
      matrix[(signed long int)i][(signed long int)j] = matrix[(signed long int)j][(signed long int)i];
    }
  }
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
  {
    matrix[(signed long int)i][(signed long int)i] = (double)1.0;
    matrix[(signed long int)i][(signed long int)i] = matrix[(signed long int)i][(signed long int)i];
  }
}

// extendlocalhom2
// file mltaln9.c line 7223
extern void extendlocalhom2(signed int nseq, struct _LocalHom **localhom, double **dist)
{
  signed int overlp;
  signed int plim;
  signed int i;
  signed int j;
  signed int k;
  signed int pi;
  signed int pj;
  signed int pk;
  signed int len;
  signed int status;
  signed int sti;
  signed int stj;
  signed int *ipt;
  signed int co;
  struct _LocalHom *pt;
  sti = 0;
  stj = 0;
  static signed int *inj = (signed int *)(void *)0;
  static signed int *ini = (signed int *)(void *)0;
  if(ini == ((signed int *)NULL))
  {
    ini=AllocateIntVec(nlenmax + 1);
    inj=AllocateIntVec(nlenmax + 1);
  }

  i = 0;
  _Bool tmp_if_expr_1;
  signed int tmp_post_2;
  signed int *tmp_post_3;
  signed int tmp_post_4;
  signed int *tmp_post_5;
  signed int tmp_post_6;
  signed int *tmp_post_7;
  signed int tmp_post_8;
  signed int tmp_post_9;
  signed int *tmp_post_10;
  signed int tmp_post_11;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  double tmp_if_expr_12;
  double tmp_if_expr_13;
  _Bool tmp_if_expr_17;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
    {
      k = 0;
      for( ; !(k >= nseq); k = k + 1)
        if(!(k == i) && !(k == j))
        {
          if(dist[(signed long int)(i >= k ? k : i)][(signed long int)(k >= i ? k : i)] > dist[(signed long int)i][(signed long int)j] * thrinter)
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = dist[(signed long int)(j < k ? j : k)][(signed long int)(j > k ? j : k)] > dist[(signed long int)i][(signed long int)j] * thrinter ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_1)
          {
            ipt = ini;
            co = nlenmax + 1;
            do
            {
              tmp_post_2 = co;
              co = co - 1;
              if(tmp_post_2 == 0)
                break;

              tmp_post_3 = ipt;
              ipt = ipt + 1l;
              *tmp_post_3 = -1;
            }
            while((_Bool)1);
            ipt = inj;
            co = nlenmax + 1;
            do
            {
              tmp_post_4 = co;
              co = co - 1;
              if(tmp_post_4 == 0)
                break;

              tmp_post_5 = ipt;
              ipt = ipt + 1l;
              *tmp_post_5 = -1;
            }
            while((_Bool)1);
            overlp = 0;
            pt = localhom[(signed long int)i] + (signed long int)k;
            for( ; !(pt == ((struct _LocalHom *)NULL)); pt = pt->next)
            {
              if(IEEE_FLOAT_EQUAL(pt->opt, -1.000000))
                reporterr("opt kainaide tbfast.c = %f\n", pt->opt);

              if(pt->extended >= 0)
                break;

              pi = pt->start1;
              pk = pt->start2;
              len = (pt->end1 - pt->start1) + 1;
              ipt = ini + (signed long int)pk;
              do
              {
                tmp_post_6 = len;
                len = len - 1;
                if(tmp_post_6 == 0)
                  break;

                tmp_post_7 = ipt;
                ipt = ipt + 1l;
                tmp_post_8 = pi;
                pi = pi + 1;
                *tmp_post_7 = tmp_post_8;
              }
              while((_Bool)1);
            }
            pt = localhom[(signed long int)j] + (signed long int)k;
            for( ; !(pt == ((struct _LocalHom *)NULL)); pt = pt->next)
            {
              if(IEEE_FLOAT_EQUAL(pt->opt, -1.000000))
                reporterr("opt kainaide tbfast.c = %f\n", pt->opt);

              if(pt->extended >= 0)
                break;

              pj = pt->start1;
              pk = pt->start2;
              len = (pt->end1 - pt->start1) + 1;
              ipt = inj + (signed long int)pk;
              do
              {
                tmp_post_9 = len;
                len = len - 1;
                if(tmp_post_9 == 0)
                  break;

                tmp_post_10 = ipt;
                ipt = ipt + 1l;
                tmp_post_11 = pj;
                pj = pj + 1;
                *tmp_post_10 = tmp_post_11;
              }
              while((_Bool)1);
            }
            overlp = 0;
            plim = nlenmax + 1;
            pk = 0;
            for( ; !(pk >= plim); pk = pk + 1)
              if(!(ini[(signed long int)pk] == -1))
              {
                if(!(inj[(signed long int)pk] == -1))
                  overlp = overlp + 1;

              }

            status = 0;
            plim = nlenmax + 1;
            pk = 0;
            for( ; !(pk >= plim); pk = pk + 1)
            {
              if(!(status == 0))
              {
                if(ini[(signed long int)pk] == -1)
                  tmp_if_expr_14 = (_Bool)1;

                else
                  tmp_if_expr_14 = inj[(signed long int)pk] == -1 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_14)
                  tmp_if_expr_15 = (_Bool)1;

                else
                  tmp_if_expr_15 = ini[(signed long int)(pk - 1)] != ini[(signed long int)pk] - 1 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_15)
                  tmp_if_expr_16 = (_Bool)1;

                else
                  tmp_if_expr_16 = inj[(signed long int)(pk - 1)] != inj[(signed long int)pk] - 1 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_16)
                {
                  status = 0;
                  pt = (localhom[(signed long int)i] + (signed long int)j)->last;
                  if((localhom[(signed long int)i] + (signed long int)k)->opt < (localhom[(signed long int)j] + (signed long int)k)->opt)
                    tmp_if_expr_12 = (localhom[(signed long int)i] + (signed long int)k)->opt;

                  else
                    tmp_if_expr_12 = (localhom[(signed long int)j] + (signed long int)k)->opt;
                  addlocalhom2_e(pt, localhom[(signed long int)i] + (signed long int)j, sti, stj, ini[(signed long int)(pk - 1)], inj[(signed long int)(pk - 1)], tmp_if_expr_12 * 1.0, overlp, k);
                  pt = (localhom[(signed long int)j] + (signed long int)i)->last;
                  if((localhom[(signed long int)i] + (signed long int)k)->opt < (localhom[(signed long int)j] + (signed long int)k)->opt)
                    tmp_if_expr_13 = (localhom[(signed long int)i] + (signed long int)k)->opt;

                  else
                    tmp_if_expr_13 = (localhom[(signed long int)j] + (signed long int)k)->opt;
                  addlocalhom2_e(pt, localhom[(signed long int)j] + (signed long int)i, stj, sti, inj[(signed long int)(pk - 1)], ini[(signed long int)(pk - 1)], tmp_if_expr_13 * 1.0, overlp, k);
                }

              }

              if(status == 0)
              {
                if(ini[(signed long int)pk] == -1)
                  tmp_if_expr_17 = (_Bool)1;

                else
                  tmp_if_expr_17 = inj[(signed long int)pk] == -1 ? (_Bool)1 : (_Bool)0;
                if(!tmp_if_expr_17)
                {
                  sti = ini[(signed long int)pk];
                  stj = inj[(signed long int)pk];
                  status = 1;
                }

              }

            }
          }

        }

    }
  }
}

// extractfirstword
// file io.c line 4687
static char * extractfirstword(char *str)
{
  char *val = str;
  tabtospace(str);
  _Bool tmp_if_expr_1;
  while(!(*str == 0))
  {
    if(val == str)
      tmp_if_expr_1 = (signed int)*str == 32 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(tmp_if_expr_1)
    {
      val = val + 1l;
      str = str + 1l;
    }

    else
      if(!((signed int)*str == 32))
        str = str + 1l;

      else
        if((signed int)*str == 32)
          *str = (char)0;

  }
  return val;
}

// fastsupg
// file mltaln9.c line 4565
extern void fastsupg(signed int nseq, double **oeff, signed int ***topol, double **len)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  double tmpdouble;
  double eff1;
  double eff0;
  double minscore;
  signed int im = -1;
  signed int jm = -1;
  static struct _Achain *ac;
  static double *tmplen;
  static char **pair = (char **)(void *)0;
  static double **eff = (double **)(void *)0;
  if(eff == ((double **)NULL))
  {
    eff=AllocateFloatMtx(njob, njob);
    pair=AllocateCharMtx(njob, njob);
    tmplen=AllocateFloatVec(njob);
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)njob, sizeof(struct _Achain) /*8ul*/ );
    ac = (struct _Achain *)return_value_calloc_1;
  }

  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      eff[(signed long int)i][(signed long int)j] = (double)oeff[(signed long int)i][(signed long int)j];
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = i + 1;
    (ac + (signed long int)i)->prev = i - 1;
  }
  (ac + (signed long int)(nseq - 1))->next = -1;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      pair[(signed long int)i][(signed long int)j] = (char)0;
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    pair[(signed long int)i][(signed long int)i] = (char)1;
  reporterr("\n");
  k = 0;
  signed int *tmp_post_2;
  signed int *tmp_post_3;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("%d / %d\r", k, nseq);

    minscore = 9999.0;
    i = 0;
    for( ; !((ac + (signed long int)i)->next == -1); i = (ac + (signed long int)i)->next)
    {
      j = (ac + (signed long int)i)->next;
      for( ; !(j == -1); j = (ac + (signed long int)j)->next)
      {
        tmpdouble = eff[(signed long int)i][(signed long int)j];
        if(tmpdouble < minscore)
        {
          minscore = tmpdouble;
          im = i;
          jm = j;
        }

      }
    }
    intpt = topol[(signed long int)k][(signed long int)0];
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      if((signed int)pair[(signed long int)im][(signed long int)i] >= 1)
      {
        tmp_post_2 = intpt;
        intpt = intpt + 1l;
        *tmp_post_2 = i;
      }

    *intpt = -1;
    intpt = topol[(signed long int)k][(signed long int)1];
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      if((signed int)pair[(signed long int)jm][(signed long int)i] >= 1)
      {
        tmp_post_3 = intpt;
        intpt = intpt + 1l;
        *tmp_post_3 = i;
      }

    *intpt = -1;
    minscore = minscore / 2.0;
    len[(signed long int)k][(signed long int)0] = (double)minscore - tmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = (double)minscore - tmplen[(signed long int)jm];
    tmplen[(signed long int)im] = (double)minscore;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      pair[(signed long int)im][(signed long int)i] = pair[(signed long int)im][(signed long int)i] + (char)((signed int)pair[(signed long int)jm][(signed long int)i] > 0);
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      pair[(signed long int)jm][(signed long int)i] = (char)0;
    i = 0;
    for( ; !(i == -1); i = (ac + (signed long int)i)->next)
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)maxiim];
        eff1 = eff[(signed long int)minijm][(signed long int)maxijm];
        eff[(signed long int)miniim][(signed long int)maxiim] = (eff0 < eff1 ? eff0 : eff1) * (1.0 - sueff_global) + (eff0 + eff1) * 0.5 * sueff_global;
      }

    (ac + (signed long int)(ac + (signed long int)jm)->prev)->next = (ac + (signed long int)jm)->next;
    (ac + (signed long int)(ac + (signed long int)jm)->next)->prev = (ac + (signed long int)jm)->prev;
  }
  reporterr("\n");
}

// fixed_musclesupg_double_realloc_nobk_halfmtx
// file mltaln9.c line 3390
extern void fixed_musclesupg_double_realloc_nobk_halfmtx(signed int nseq, double **eff, signed int ***topol, double **len, struct _Treedep *dep, signed int progressout, signed int efffree)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  double tmpdouble;
  double eff1;
  double eff0;
  double *tmptmplen = (double *)(void *)0;
  signed int *hist = (signed int *)(void *)0;
  struct _Bchain *ac = (struct _Bchain *)(void *)0;
  signed int im = -1;
  signed int jm = -1;
  struct _Bchain *acjmnext;
  struct _Bchain *acjmprev;
  signed int prevnode;
  struct _Bchain *acpti;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  signed int *nmemar;
  signed int nmemim;
  signed int nmemjm;
  double minscore;
  signed int *nearest = (signed int *)(void *)0;
  double *mindisfrom = (double *)(void *)0;
  double (*clusterfuncpt[1l])(double, double);
  sueff1 = (double)1 - (double)sueff_global;
  sueff05 = (double)sueff_global * 0.5;
  if(treemethod == 88)
    clusterfuncpt[(signed long int)0] = cluster_mix_double;

  else
    if(treemethod == 69)
      clusterfuncpt[(signed long int)0] = cluster_average_double;

    else
      if(treemethod == 113)
        clusterfuncpt[(signed long int)0] = cluster_minimum_double;

      else
      {
        reporterr("Unknown treemethod, %c\n", treemethod);
        exit(1);
      }
  if(hist == ((signed int *)NULL))
  {
    hist=AllocateIntVec(njob);
    tmptmplen=AllocateFloatVec(njob);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)njob * sizeof(struct _Bchain) /*24ul*/ );
    ac = (struct _Bchain *)return_value_malloc_1;
    nmemar=AllocateIntVec(njob);
    mindisfrom=AllocateFloatVec(njob);
    nearest=AllocateIntVec(njob);
  }

  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = ac + (signed long int)i + (signed long int)1;
    (ac + (signed long int)i)->prev = (ac + (signed long int)i) - (signed long int)1;
    (ac + (signed long int)i)->pos = i;
  }
  (ac + (signed long int)(nseq - 1))->next = (struct _Bchain *)(void *)0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    setnearest(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmptmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    hist[(signed long int)i] = -1;
    nmemar[(signed long int)i] = 1;
  }
  if(!(progressout == 0))
    reporterr("\n");

  k = 0;
  signed int *tmp_post_3;
  signed int *tmp_post_4;
  signed int *tmp_post_5;
  signed int *tmp_post_6;
  signed int *tmp_post_7;
  signed int *tmp_post_9;
  signed int *tmp_post_10;
  signed int *tmp_post_11;
  signed int *tmp_post_12;
  signed int *tmp_post_13;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0 && !(progressout == 0))
      reporterr("\r% 5d / %d", k, nseq);

    minscore = 999.9;
    acpti = ac;
    for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(mindisfrom[(signed long int)i] < minscore)
      {
        im = i;
        minscore = mindisfrom[(signed long int)i];
      }

    }
    jm = nearest[(signed long int)im];
    if(!(jm >= im))
    {
      j = jm;
      jm = im;
      im = j;
    }

    prevnode = hist[(signed long int)im];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child0 = prevnode;

    nmemim = nmemar[(signed long int)im];
    void *return_value_realloc_2;
    return_value_realloc_2=realloc((void *)topol[(signed long int)k][(signed long int)0], (unsigned long int)(nmemim + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)0] = (signed int *)return_value_realloc_2;
    intpt = topol[(signed long int)k][(signed long int)0];
    if(prevnode == -1)
    {
      tmp_post_3 = intpt;
      intpt = intpt + 1l;
      *tmp_post_3 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_4 = *tmp_post_5)
      {
        tmp_post_4 = intpt;
        intpt = intpt + 1l;
        tmp_post_5 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_6 = *tmp_post_7)
      {
        tmp_post_6 = intpt;
        intpt = intpt + 1l;
        tmp_post_7 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    prevnode = hist[(signed long int)jm];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child1 = prevnode;

    nmemjm = nmemar[(signed long int)jm];
    void *return_value_realloc_8;
    return_value_realloc_8=realloc((void *)topol[(signed long int)k][(signed long int)1], (unsigned long int)(nmemjm + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)1] = (signed int *)return_value_realloc_8;
    intpt = topol[(signed long int)k][(signed long int)1];
    if(intpt == ((signed int *)NULL))
    {
      reporterr("Cannot reallocate topol\n");
      exit(1);
    }

    if(prevnode == -1)
    {
      tmp_post_9 = intpt;
      intpt = intpt + 1l;
      *tmp_post_9 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_10 = *tmp_post_11)
      {
        tmp_post_10 = intpt;
        intpt = intpt + 1l;
        tmp_post_11 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_12 = *tmp_post_13)
      {
        tmp_post_12 = intpt;
        intpt = intpt + 1l;
        tmp_post_13 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    minscore = minscore * 0.5;
    len[(signed long int)k][(signed long int)0] = minscore - tmptmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscore - tmptmplen[(signed long int)jm];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->distfromtip = minscore;

    tmptmplen[(signed long int)im] = minscore;
    hist[(signed long int)im] = k;
    nmemar[(signed long int)im] = nmemim + nmemjm;
    mindisfrom[(signed long int)im] = 999.9;
    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)(maxiim - miniim)];
        eff1 = eff[(signed long int)minijm][(signed long int)(maxijm - minijm)];
        eff[(signed long int)miniim][(signed long int)(maxiim - miniim)]=clusterfuncpt[(signed long int)0](eff0, eff1);
        tmpdouble = eff[(signed long int)miniim][(signed long int)(maxiim - miniim)];
        if(tmpdouble < mindisfrom[(signed long int)i])
        {
          mindisfrom[(signed long int)i] = tmpdouble;
          nearest[(signed long int)i] = im;
        }

        if(tmpdouble < mindisfrom[(signed long int)im])
        {
          mindisfrom[(signed long int)im] = tmpdouble;
          nearest[(signed long int)im] = i;
        }

        if(nearest[(signed long int)i] == jm)
          nearest[(signed long int)i] = im;

      }

    }
    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    acjmprev->next = acjmnext;
    if(!(acjmnext == ((struct _Bchain *)NULL)))
      acjmnext->prev = acjmprev;

    if(!(efffree == 0))
    {
      free((void *)eff[(signed long int)jm]);
      eff[(signed long int)jm] = (double *)(void *)0;
    }

    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(nearest[(signed long int)i] == im)
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
        }

        else
        {
          miniim = im;
          maxiim = i;
        }
        if(eff[(signed long int)miniim][(signed long int)(maxiim + -miniim)] > mindisfrom[(signed long int)i])
          setnearest(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);

      }

    }
  }
  free((void *)tmptmplen);
  tmptmplen = (double *)(void *)0;
  free((void *)hist);
  hist = (signed int *)(void *)0;
  free((void *)(char *)ac);
  ac = (struct _Bchain *)(void *)0;
  free((void *)nmemar);
  nmemar = (signed int *)(void *)0;
  free((void *)mindisfrom);
  free((void *)nearest);
}

// fixed_musclesupg_double_realloc_nobk_halfmtx_treeout
// file mltaln9.c line 2136
extern void fixed_musclesupg_double_realloc_nobk_halfmtx_treeout(signed int nseq, double **eff, signed int ***topol, double **len, char **name, signed int *nlen, struct _Treedep *dep, signed int efffree)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  double tmpdouble;
  double eff1;
  double eff0;
  double *tmptmplen = (double *)(void *)0;
  signed int *hist = (signed int *)(void *)0;
  struct _Bchain *ac = (struct _Bchain *)(void *)0;
  signed int im = -1;
  signed int jm = -1;
  struct _Bchain *acjmnext;
  struct _Bchain *acjmprev;
  signed int prevnode;
  struct _Bchain *acpti;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  signed int *nmemar;
  signed int nmemim;
  signed int nmemjm;
  double minscore;
  signed int *nearest = (signed int *)(void *)0;
  double *mindisfrom = (double *)(void *)0;
  char **tree;
  char *treetmp;
  char *nametmp;
  char *nameptr;
  char *tmpptr;
  struct _IO_FILE *fp;
  double (*clusterfuncpt[1l])(double, double);
  char namec;
  sueff1 = (double)1 - (double)sueff_global;
  sueff05 = (double)sueff_global * 0.5;
  if(treemethod == 88)
    clusterfuncpt[(signed long int)0] = cluster_mix_double;

  else
    if(treemethod == 69)
      clusterfuncpt[(signed long int)0] = cluster_average_double;

    else
      if(treemethod == 113)
        clusterfuncpt[(signed long int)0] = cluster_minimum_double;

      else
      {
        reporterr("Unknown treemethod, %c\n", treemethod);
        exit(1);
      }
  if(hist == ((signed int *)NULL))
  {
    hist=AllocateIntVec(njob);
    tmptmplen=AllocateFloatVec(njob);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)njob * sizeof(struct _Bchain) /*24ul*/ );
    ac = (struct _Bchain *)return_value_malloc_1;
    nmemar=AllocateIntVec(njob);
    mindisfrom=AllocateFloatVec(njob);
    nearest=AllocateIntVec(njob);
    treetmp = (char *)(void *)0;
    nametmp=AllocateCharVec(1000);
    tree=AllocateCharMtx(njob, 0);
  }

  i = 0;
  const unsigned short int **return_value___ctype_b_loc_2;
  char *return_value_strstr_3;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 999); j = j + 1)
      nametmp[(signed long int)j] = (char)0;
    j = 0;
    for( ; !(j >= 999); j = j + 1)
    {
      namec = name[(signed long int)i][(signed long int)j];
      if((signed int)namec == 0)
        break;

      else
      {
        return_value___ctype_b_loc_2=__ctype_b_loc();
        if((signed int)namec == 45 || (signed int)namec == 47 || (signed int)namec == 61 || (signed int)namec == 123 || (signed int)namec == 125 || !((8 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)namec]) == 0))
          nametmp[(signed long int)j] = namec;

        else
          nametmp[(signed long int)j] = (char)95;
      }
    }
    nametmp[(signed long int)j] = (char)0;
    if(!(outnumber == 0))
    {
      return_value_strstr_3=strstr(nametmp, "_numo_e");
      nameptr = return_value_strstr_3 + (signed long int)8;
    }

    else
      nameptr = nametmp + (signed long int)1;
    tmpptr=strstr(nameptr, "_oe_");
    if(!(tmpptr == ((char *)NULL)))
      nameptr = tmpptr + (signed long int)4;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(nametmp);
    void *return_value_calloc_5;
    return_value_calloc_5=calloc(return_value_strlen_4 + (unsigned long int)100, sizeof(char) /*1ul*/ );
    tree[(signed long int)i] = (char *)return_value_calloc_5;
    if(tree[(signed long int)i] == ((char *)NULL))
    {
      reporterr("Cannot allocate tree!\n");
      exit(1);
    }

    sprintf(tree[(signed long int)i], "\n%d_%.900s\n", i + 1, nameptr);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = ac + (signed long int)i + (signed long int)1;
    (ac + (signed long int)i)->prev = (ac + (signed long int)i) - (signed long int)1;
    (ac + (signed long int)i)->pos = i;
  }
  (ac + (signed long int)(nseq - 1))->next = (struct _Bchain *)(void *)0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    setnearest(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmptmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    hist[(signed long int)i] = -1;
    nmemar[(signed long int)i] = 1;
  }
  reporterr("\n");
  k = 0;
  signed int *tmp_post_7;
  signed int *tmp_post_8;
  signed int *tmp_post_9;
  signed int *tmp_post_10;
  signed int *tmp_post_11;
  signed int *tmp_post_13;
  signed int *tmp_post_14;
  signed int *tmp_post_15;
  signed int *tmp_post_16;
  signed int *tmp_post_17;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("\r% 5d / %d", k, nseq);

    minscore = 999.9;
    acpti = ac;
    for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(mindisfrom[(signed long int)i] < minscore)
      {
        im = i;
        minscore = mindisfrom[(signed long int)i];
      }

    }
    jm = nearest[(signed long int)im];
    if(!(jm >= im))
    {
      j = jm;
      jm = im;
      im = j;
    }

    prevnode = hist[(signed long int)im];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child0 = prevnode;

    nmemim = nmemar[(signed long int)im];
    void *return_value_realloc_6;
    return_value_realloc_6=realloc((void *)topol[(signed long int)k][(signed long int)0], (unsigned long int)(nmemim + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)0] = (signed int *)return_value_realloc_6;
    intpt = topol[(signed long int)k][(signed long int)0];
    if(prevnode == -1)
    {
      tmp_post_7 = intpt;
      intpt = intpt + 1l;
      *tmp_post_7 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_8 = *tmp_post_9)
      {
        tmp_post_8 = intpt;
        intpt = intpt + 1l;
        tmp_post_9 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_10 = *tmp_post_11)
      {
        tmp_post_10 = intpt;
        intpt = intpt + 1l;
        tmp_post_11 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    prevnode = hist[(signed long int)jm];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child1 = prevnode;

    nmemjm = nmemar[(signed long int)jm];
    void *return_value_realloc_12;
    return_value_realloc_12=realloc((void *)topol[(signed long int)k][(signed long int)1], (unsigned long int)(nmemjm + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)1] = (signed int *)return_value_realloc_12;
    intpt = topol[(signed long int)k][(signed long int)1];
    if(intpt == ((signed int *)NULL))
    {
      reporterr("Cannot reallocate topol\n");
      exit(1);
    }

    if(prevnode == -1)
    {
      tmp_post_13 = intpt;
      intpt = intpt + 1l;
      *tmp_post_13 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_14 = *tmp_post_15)
      {
        tmp_post_14 = intpt;
        intpt = intpt + 1l;
        tmp_post_15 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_16 = *tmp_post_17)
      {
        tmp_post_16 = intpt;
        intpt = intpt + 1l;
        tmp_post_17 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    minscore = minscore * 0.5;
    len[(signed long int)k][(signed long int)0] = minscore - tmptmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscore - tmptmplen[(signed long int)jm];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->distfromtip = minscore;

    tmptmplen[(signed long int)im] = minscore;
    hist[(signed long int)im] = k;
    nmemar[(signed long int)im] = nmemim + nmemjm;
    mindisfrom[(signed long int)im] = 999.9;
    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)(maxiim - miniim)];
        eff1 = eff[(signed long int)minijm][(signed long int)(maxijm - minijm)];
        eff[(signed long int)miniim][(signed long int)(maxiim - miniim)]=clusterfuncpt[(signed long int)0](eff0, eff1);
        tmpdouble = eff[(signed long int)miniim][(signed long int)(maxiim - miniim)];
        if(tmpdouble < mindisfrom[(signed long int)i])
        {
          mindisfrom[(signed long int)i] = tmpdouble;
          nearest[(signed long int)i] = im;
        }

        if(tmpdouble < mindisfrom[(signed long int)im])
        {
          mindisfrom[(signed long int)im] = tmpdouble;
          nearest[(signed long int)im] = i;
        }

        if(nearest[(signed long int)i] == jm)
          nearest[(signed long int)i] = im;

      }

    }
    unsigned long int return_value_strlen_18;
    return_value_strlen_18=strlen(tree[(signed long int)im]);
    unsigned long int return_value_strlen_19;
    return_value_strlen_19=strlen(tree[(signed long int)jm]);
    void *return_value_realloc_20;
    return_value_realloc_20=realloc((void *)treetmp, return_value_strlen_18 + return_value_strlen_19 + (unsigned long int)100);
    treetmp = (char *)return_value_realloc_20;
    if(treetmp == ((char *)NULL))
    {
      reporterr("Cannot allocate treetmp\n");
      exit(1);
    }

    sprintf(treetmp, "(%s:%7.5f,%s:%7.5f)", tree[(signed long int)im], len[(signed long int)k][(signed long int)0], tree[(signed long int)jm], len[(signed long int)k][(signed long int)1]);
    free((void *)tree[(signed long int)im]);
    free((void *)tree[(signed long int)jm]);
    unsigned long int return_value_strlen_21;
    return_value_strlen_21=strlen(treetmp);
    void *return_value_calloc_22;
    return_value_calloc_22=calloc(return_value_strlen_21 + (unsigned long int)1, sizeof(char) /*1ul*/ );
    tree[(signed long int)im] = (char *)return_value_calloc_22;
    tree[(signed long int)jm] = (char *)(void *)0;
    if(tree[(signed long int)im] == ((char *)NULL))
    {
      reporterr("Cannot reallocate tree!\n");
      exit(1);
    }

    strcpy(tree[(signed long int)im], treetmp);
    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    acjmprev->next = acjmnext;
    if(!(acjmnext == ((struct _Bchain *)NULL)))
      acjmnext->prev = acjmprev;

    if(!(efffree == 0))
    {
      free((void *)eff[(signed long int)jm]);
      eff[(signed long int)jm] = (double *)(void *)0;
    }

    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(nearest[(signed long int)i] == im)
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
        }

        else
        {
          miniim = im;
          maxiim = i;
        }
        if(eff[(signed long int)miniim][(signed long int)(maxiim + -miniim)] > mindisfrom[(signed long int)i])
          setnearest(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);

      }

    }
  }
  fp=fopen("infile.tree", "w");
  fprintf(fp, "%s\n", treetmp);
  fclose(fp);
  free((void *)tree[(signed long int)0]);
  free((void *)tree);
  free((void *)treetmp);
  free((void *)nametmp);
  free((void *)tmptmplen);
  tmptmplen = (double *)(void *)0;
  free((void *)hist);
  hist = (signed int *)(void *)0;
  free((void *)(char *)ac);
  ac = (struct _Bchain *)(void *)0;
  free((void *)nmemar);
  nmemar = (signed int *)(void *)0;
  free((void *)mindisfrom);
  free((void *)nearest);
}

// fixed_musclesupg_double_treeout
// file mltaln9.c line 2471
extern void fixed_musclesupg_double_treeout(signed int nseq, double **eff, signed int ***topol, double **len, char **name)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  double tmpdouble;
  double eff1;
  double eff0;
  signed int im = -1;
  signed int jm = -1;
  struct _Bchain *acjmnext;
  struct _Bchain *acjmprev;
  signed int prevnode;
  struct _Bchain *acpti;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  signed int nmemim;
  signed int nmemjm;
  double minscore;
  signed int *nearest = (signed int *)(void *)0;
  double *mindisfrom = (double *)(void *)0;
  struct _IO_FILE *fp;
  double (*clusterfuncpt[1l])(double, double);
  char namec;
  sueff1 = 1.0 - sueff_global;
  sueff05 = sueff_global * 0.5;
  if(treemethod == 88)
    clusterfuncpt[(signed long int)0] = cluster_mix_double;

  else
    if(treemethod == 69)
      clusterfuncpt[(signed long int)0] = cluster_average_double;

    else
      if(treemethod == 113)
        clusterfuncpt[(signed long int)0] = cluster_minimum_double;

      else
      {
        reporterr("Unknown treemethod, %c\n", treemethod);
        exit(1);
      }
  static char **tree;
  static char *nametmp;
  static char *treetmp;
  static signed int *nmemar;
  static struct _Bchain *ac = (struct _Bchain *)(void *)0;
  static double *tmptmplen = (double *)(void *)0;
  static signed int *hist = (signed int *)(void *)0;
  if(hist == ((signed int *)NULL))
  {
    hist=AllocateIntVec(njob);
    tmptmplen=AllocateDoubleVec(njob);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)njob * sizeof(struct _Bchain) /*24ul*/ );
    ac = (struct _Bchain *)return_value_malloc_1;
    nmemar=AllocateIntVec(njob);
    mindisfrom=AllocateDoubleVec(njob);
    nearest=AllocateIntVec(njob);
    treetmp = (char *)(void *)0;
    nametmp=AllocateCharVec(1000);
    tree=AllocateCharMtx(njob, 0);
  }

  i = 0;
  const unsigned short int **return_value___ctype_b_loc_2;
  char *return_value_strstr_3;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 999); j = j + 1)
      nametmp[(signed long int)j] = (char)0;
    j = 0;
    for( ; !(j >= 999); j = j + 1)
    {
      namec = name[(signed long int)i][(signed long int)j];
      if((signed int)namec == 0)
        break;

      else
      {
        return_value___ctype_b_loc_2=__ctype_b_loc();
        if((signed int)namec == 45 || (signed int)namec == 47 || (signed int)namec == 61 || (signed int)namec == 123 || (signed int)namec == 125 || !((8 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)namec]) == 0))
          nametmp[(signed long int)j] = namec;

        else
          nametmp[(signed long int)j] = (char)95;
      }
    }
    nametmp[(signed long int)j] = (char)0;
    static char *nameptr;
    if(!(outnumber == 0))
    {
      return_value_strstr_3=strstr(nametmp, "_numo_e");
      nameptr = return_value_strstr_3 + (signed long int)8;
    }

    else
      nameptr = nametmp + (signed long int)1;
    static char *tmpptr;
    tmpptr=strstr(nameptr, "_oe_");
    if(!(tmpptr == ((char *)NULL)))
      nameptr = tmpptr + (signed long int)4;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(nametmp);
    void *return_value_calloc_5;
    return_value_calloc_5=calloc(return_value_strlen_4 + (unsigned long int)100, sizeof(char) /*1ul*/ );
    tree[(signed long int)i] = (char *)return_value_calloc_5;
    if(tree[(signed long int)i] == ((char *)NULL))
    {
      reporterr("Cannot allocate tree!\n");
      exit(1);
    }

    sprintf(tree[(signed long int)i], "\n%d_%.900s\n", i + 1, nameptr);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = ac + (signed long int)i + (signed long int)1;
    (ac + (signed long int)i)->prev = (ac + (signed long int)i) - (signed long int)1;
    (ac + (signed long int)i)->pos = i;
  }
  (ac + (signed long int)(nseq - 1))->next = (struct _Bchain *)(void *)0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    setnearest_double_fullmtx(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmptmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    hist[(signed long int)i] = -1;
    nmemar[(signed long int)i] = 1;
  }
  reporterr("\n");
  k = 0;
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
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("\r% 5d / %d", k, nseq);

    minscore = 999.9;
    acpti = ac;
    for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(mindisfrom[(signed long int)i] < minscore)
      {
        im = i;
        minscore = mindisfrom[(signed long int)i];
      }

    }
    jm = nearest[(signed long int)im];
    if(!(jm >= im))
    {
      j = jm;
      jm = im;
      im = j;
    }

    prevnode = hist[(signed long int)im];
    nmemim = nmemar[(signed long int)im];
    intpt = topol[(signed long int)k][(signed long int)0];
    if(prevnode == -1)
    {
      tmp_post_6 = intpt;
      intpt = intpt + 1l;
      *tmp_post_6 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_7 = *tmp_post_8)
      {
        tmp_post_7 = intpt;
        intpt = intpt + 1l;
        tmp_post_8 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_9 = *tmp_post_10)
      {
        tmp_post_9 = intpt;
        intpt = intpt + 1l;
        tmp_post_10 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    prevnode = hist[(signed long int)jm];
    nmemjm = nmemar[(signed long int)jm];
    intpt = topol[(signed long int)k][(signed long int)1];
    if(prevnode == -1)
    {
      tmp_post_11 = intpt;
      intpt = intpt + 1l;
      *tmp_post_11 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_12 = *tmp_post_13)
      {
        tmp_post_12 = intpt;
        intpt = intpt + 1l;
        tmp_post_13 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_14 = *tmp_post_15)
      {
        tmp_post_14 = intpt;
        intpt = intpt + 1l;
        tmp_post_15 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    minscore = minscore * 0.5;
    len[(signed long int)k][(signed long int)0] = minscore - tmptmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscore - tmptmplen[(signed long int)jm];
    tmptmplen[(signed long int)im] = minscore;
    hist[(signed long int)im] = k;
    nmemar[(signed long int)im] = nmemim + nmemjm;
    mindisfrom[(signed long int)im] = 999.9;
    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)maxiim];
        eff1 = eff[(signed long int)minijm][(signed long int)maxijm];
        eff[(signed long int)miniim][(signed long int)maxiim]=clusterfuncpt[(signed long int)0](eff0, eff1);
        tmpdouble = eff[(signed long int)miniim][(signed long int)maxiim];
        if(tmpdouble < mindisfrom[(signed long int)i])
        {
          mindisfrom[(signed long int)i] = tmpdouble;
          nearest[(signed long int)i] = im;
        }

        if(tmpdouble < mindisfrom[(signed long int)im])
        {
          mindisfrom[(signed long int)im] = tmpdouble;
          nearest[(signed long int)im] = i;
        }

        if(nearest[(signed long int)i] == jm)
          nearest[(signed long int)i] = im;

      }

    }
    unsigned long int return_value_strlen_16;
    return_value_strlen_16=strlen(tree[(signed long int)im]);
    unsigned long int return_value_strlen_17;
    return_value_strlen_17=strlen(tree[(signed long int)jm]);
    void *return_value_realloc_18;
    return_value_realloc_18=realloc((void *)treetmp, return_value_strlen_16 + return_value_strlen_17 + (unsigned long int)100);
    treetmp = (char *)return_value_realloc_18;
    if(treetmp == ((char *)NULL))
    {
      reporterr("Cannot allocate treetmp\n");
      exit(1);
    }

    sprintf(treetmp, "(%s:%7.5f,%s:%7.5f)", tree[(signed long int)im], len[(signed long int)k][(signed long int)0], tree[(signed long int)jm], len[(signed long int)k][(signed long int)1]);
    free((void *)tree[(signed long int)im]);
    free((void *)tree[(signed long int)jm]);
    unsigned long int return_value_strlen_19;
    return_value_strlen_19=strlen(treetmp);
    void *return_value_calloc_20;
    return_value_calloc_20=calloc(return_value_strlen_19 + (unsigned long int)1, sizeof(char) /*1ul*/ );
    tree[(signed long int)im] = (char *)return_value_calloc_20;
    tree[(signed long int)jm] = (char *)(void *)0;
    if(tree[(signed long int)im] == ((char *)NULL))
    {
      reporterr("Cannot reallocate tree!\n");
      exit(1);
    }

    strcpy(tree[(signed long int)im], treetmp);
    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    acjmprev->next = acjmnext;
    if(!(acjmnext == ((struct _Bchain *)NULL)))
      acjmnext->prev = acjmprev;

    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(nearest[(signed long int)i] == im)
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
        }

        else
        {
          miniim = im;
          maxiim = i;
        }
        if(eff[(signed long int)miniim][(signed long int)maxiim] > mindisfrom[(signed long int)i])
          setnearest_double_fullmtx(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);

      }

    }
  }
  fp=fopen("infile.tree", "w");
  fprintf(fp, "%s\n", treetmp);
  fclose(fp);
  free((void *)tree[(signed long int)0]);
  free((void *)tree);
  free((void *)treetmp);
  free((void *)nametmp);
  free((void *)tmptmplen);
  tmptmplen = (double *)(void *)0;
  free((void *)hist);
  hist = (signed int *)(void *)0;
  free((void *)(char *)ac);
  ac = (struct _Bchain *)(void *)0;
  free((void *)nmemar);
  nmemar = (signed int *)(void *)0;
  free((void *)mindisfrom);
  free((void *)nearest);
}

// fixed_supg_double_realloc_nobk_halfmtx_treeout_constrained
// file mltaln9.c line 1660
extern void fixed_supg_double_realloc_nobk_halfmtx_treeout_constrained(signed int nseq, double **eff, signed int ***topol, double **len, char **name, signed int *nlen, struct _Treedep *dep, signed int ngroup, signed int **groups, signed int efffree)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  double tmpdouble;
  double eff1;
  double eff0;
  double *tmptmplen = (double *)(void *)0;
  signed int *hist = (signed int *)(void *)0;
  struct _Bchain *ac = (struct _Bchain *)(void *)0;
  signed int im = -1;
  signed int jm = -1;
  struct _Bchain *acjmnext;
  struct _Bchain *acjmprev;
  signed int prevnode;
  struct _Bchain *acpti;
  struct _Bchain *acptj;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  signed int *nmemar;
  signed int nmemim;
  signed int nmemjm;
  double minscore;
  signed int *nearest = (signed int *)(void *)0;
  double *mindisfrom = (double *)(void *)0;
  char **tree;
  char *treetmp;
  char *nametmp;
  char *nameptr;
  char *tmpptr;
  struct _IO_FILE *fp;
  double (*clusterfuncpt[1l])(double, double);
  char namec;
  signed int *testtopol;
  signed int **inconsistent;
  signed int **inconsistentpairlist;
  signed int ninconsistentpairs;
  signed int *warned;
  signed int allinconsistent;
  signed int firsttime;
  increaseintergroupdistanceshalfmtx(eff, ngroup, groups, nseq);
  sueff1 = (double)1 - (double)sueff_global;
  sueff05 = (double)sueff_global * 0.5;
  if(treemethod == 88)
    clusterfuncpt[(signed long int)0] = cluster_mix_double;

  else
    if(treemethod == 69)
      clusterfuncpt[(signed long int)0] = cluster_average_double;

    else
      if(treemethod == 113)
        clusterfuncpt[(signed long int)0] = cluster_minimum_double;

      else
      {
        reporterr("Unknown treemethod, %c\n", treemethod);
        exit(1);
      }
  if(hist == ((signed int *)NULL))
  {
    hist=AllocateIntVec(njob);
    tmptmplen=AllocateFloatVec(njob);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)njob * sizeof(struct _Bchain) /*24ul*/ );
    ac = (struct _Bchain *)return_value_malloc_1;
    nmemar=AllocateIntVec(njob);
    mindisfrom=AllocateFloatVec(njob);
    nearest=AllocateIntVec(njob);
    treetmp = (char *)(void *)0;
    nametmp=AllocateCharVec(1000);
    tree=AllocateCharMtx(njob, 0);
    testtopol=AllocateIntVec(njob + 1);
    inconsistent=AllocateIntMtx(njob, njob);
    inconsistentpairlist=AllocateIntMtx((njob * (njob - 1)) / 2 + 1, 2);
    warned=AllocateIntVec(ngroup);
  }

  i = 0;
  const unsigned short int **return_value___ctype_b_loc_2;
  char *return_value_strstr_3;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 999); j = j + 1)
      nametmp[(signed long int)j] = (char)0;
    j = 0;
    for( ; !(j >= 999); j = j + 1)
    {
      namec = name[(signed long int)i][(signed long int)j];
      if((signed int)namec == 0)
        break;

      else
      {
        return_value___ctype_b_loc_2=__ctype_b_loc();
        if((signed int)namec == 45 || (signed int)namec == 47 || (signed int)namec == 61 || (signed int)namec == 123 || (signed int)namec == 125 || !((8 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)namec]) == 0))
          nametmp[(signed long int)j] = namec;

        else
          nametmp[(signed long int)j] = (char)95;
      }
    }
    nametmp[(signed long int)j] = (char)0;
    if(!(outnumber == 0))
    {
      return_value_strstr_3=strstr(nametmp, "_numo_e");
      nameptr = return_value_strstr_3 + (signed long int)8;
    }

    else
      nameptr = nametmp + (signed long int)1;
    tmpptr=strstr(nameptr, "_oe_");
    if(!(tmpptr == ((char *)NULL)))
      nameptr = tmpptr + (signed long int)4;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(nametmp);
    void *return_value_calloc_5;
    return_value_calloc_5=calloc(return_value_strlen_4 + (unsigned long int)100, sizeof(char) /*1ul*/ );
    tree[(signed long int)i] = (char *)return_value_calloc_5;
    if(tree[(signed long int)i] == ((char *)NULL))
    {
      reporterr("Cannot allocate tree!\n");
      exit(1);
    }

    sprintf(tree[(signed long int)i], "\n%d_%.900s\n", i + 1, nameptr);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = ac + (signed long int)i + (signed long int)1;
    (ac + (signed long int)i)->prev = (ac + (signed long int)i) - (signed long int)1;
    (ac + (signed long int)i)->pos = i;
  }
  (ac + (signed long int)(nseq - 1))->next = (struct _Bchain *)(void *)0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    setnearest(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmptmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    hist[(signed long int)i] = -1;
    nmemar[(signed long int)i] = 1;
  }
  reporterr("\n");
  ninconsistentpairs = 0;
  k = 0;
  _Bool tmp_if_expr_6;
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
  signed int return_value_includemember_17;
  signed int *tmp_post_21;
  signed int *tmp_post_22;
  signed int *tmp_post_23;
  signed int *tmp_post_24;
  signed int *tmp_post_25;
  signed int *tmp_post_27;
  signed int *tmp_post_28;
  signed int *tmp_post_29;
  signed int *tmp_post_30;
  signed int *tmp_post_31;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("\r% 5d / %d", k, nseq);

    i = 0;
    for( ; !(i >= ninconsistentpairs); i = i + 1)
      inconsistent[(signed long int)inconsistentpairlist[(signed long int)i][(signed long int)0]][(signed long int)inconsistentpairlist[(signed long int)i][(signed long int)1]] = 0;
    ninconsistentpairs = 0;
    firsttime = 1;
    while((_Bool)1)
    {
      if(!(firsttime == 0))
      {
        firsttime = 0;
        minscore = 999.9;
        acpti = ac;
        for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
        {
          i = acpti->pos;
          if(mindisfrom[(signed long int)i] < minscore)
          {
            im = i;
            minscore = mindisfrom[(signed long int)i];
          }

        }
        jm = nearest[(signed long int)im];
        if(!(jm >= im))
        {
          j = jm;
          jm = im;
          im = j;
        }

      }

      else
      {
        minscore = 999.9;
        acpti = ac;
        for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
        {
          i = acpti->pos;
          acptj = acpti->next;
          for( ; !(acptj == ((struct _Bchain *)NULL)); acptj = acptj->next)
          {
            j = acptj->pos;
            if(inconsistent[(signed long int)i][(signed long int)j] == 0)
            {
              tmpdouble = eff[(signed long int)i][(signed long int)(j - i)];
              if(tmpdouble < minscore)
              {
                minscore = tmpdouble;
                im = i;
                jm = j;
              }

            }

          }
          acptj = ac;
          do
          {
            if(!(acptj == ((struct _Bchain *)NULL)))
              tmp_if_expr_6 = acptj->pos != i ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_6 = (_Bool)0;
            if(!tmp_if_expr_6)
              break;

            j = acptj->pos;
            if(inconsistent[(signed long int)j][(signed long int)i] == 0)
            {
              tmpdouble = eff[(signed long int)j][(signed long int)(i - j)];
              if(tmpdouble < minscore)
              {
                minscore = tmpdouble;
                im = j;
                jm = i;
              }

            }

            acptj = acptj->next;
          }
          while((_Bool)1);
        }
      }
      allinconsistent = 1;
      acpti = ac;
      for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
      {
        acptj = acpti->next;
        for( ; !(acptj == ((struct _Bchain *)NULL)); acptj = acptj->next)
          if(inconsistent[(signed long int)acpti->pos][(signed long int)acptj->pos] == 0)
          {
            allinconsistent = 0;
            goto exitloop_f;
          }

      }

    exitloop_f:
      ;
      if(!(allinconsistent == 0))
      {
        reporterr("\n\n\nPlease check whether the grouping is possible.\n\n\n");
        exit(1);
      }

      intpt = testtopol;
      prevnode = hist[(signed long int)im];
      if(prevnode == -1)
      {
        tmp_post_7 = intpt;
        intpt = intpt + 1l;
        *tmp_post_7 = im;
      }

      else
      {
        intpt2 = topol[(signed long int)prevnode][(signed long int)0];
        for( ; !(*intpt2 == -1); *tmp_post_8 = *tmp_post_9)
        {
          tmp_post_8 = intpt;
          intpt = intpt + 1l;
          tmp_post_9 = intpt2;
          intpt2 = intpt2 + 1l;
        }
        intpt2 = topol[(signed long int)prevnode][(signed long int)1];
        for( ; !(*intpt2 == -1); *tmp_post_10 = *tmp_post_11)
        {
          tmp_post_10 = intpt;
          intpt = intpt + 1l;
          tmp_post_11 = intpt2;
          intpt2 = intpt2 + 1l;
        }
      }
      prevnode = hist[(signed long int)jm];
      if(prevnode == -1)
      {
        tmp_post_12 = intpt;
        intpt = intpt + 1l;
        *tmp_post_12 = jm;
      }

      else
      {
        intpt2 = topol[(signed long int)prevnode][(signed long int)0];
        for( ; !(*intpt2 == -1); *tmp_post_13 = *tmp_post_14)
        {
          tmp_post_13 = intpt;
          intpt = intpt + 1l;
          tmp_post_14 = intpt2;
          intpt2 = intpt2 + 1l;
        }
        intpt2 = topol[(signed long int)prevnode][(signed long int)1];
        for( ; !(*intpt2 == -1); *tmp_post_15 = *tmp_post_16)
        {
          tmp_post_15 = intpt;
          intpt = intpt + 1l;
          tmp_post_16 = intpt2;
          intpt2 = intpt2 + 1l;
        }
      }
      *intpt = -1;
      i = 0;
      for( ; !(i >= ngroup); i = i + 1)
      {
        signed int return_value_overlapmember_19;
        return_value_overlapmember_19=overlapmember(groups[(signed long int)i], testtopol);
        if(!(return_value_overlapmember_19 == 0))
        {
          signed int return_value_includemember_18;
          return_value_includemember_18=includemember(testtopol, groups[(signed long int)i]);
          if(return_value_includemember_18 == 0)
          {
            return_value_includemember_17=includemember(groups[(signed long int)i], testtopol);
            if(return_value_includemember_17 == 0)
            {
              if(warned[(signed long int)i] == 0)
              {
                warned[(signed long int)i] = 1;
                reporterr("\n###################################################################\n");
                reporterr("# WARNING: Group %d is forced to be a monophyletic cluster.\n", i + 1);
                reporterr("###################################################################\n");
              }

              inconsistent[(signed long int)im][(signed long int)jm] = 1;
              inconsistentpairlist[(signed long int)ninconsistentpairs][(signed long int)0] = im;
              inconsistentpairlist[(signed long int)ninconsistentpairs][(signed long int)1] = jm;
              ninconsistentpairs = ninconsistentpairs + 1;
              break;
            }

          }

        }

      }
      if(i == ngroup)
        break;

    }
    prevnode = hist[(signed long int)im];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child0 = prevnode;

    nmemim = nmemar[(signed long int)im];
    void *return_value_realloc_20;
    return_value_realloc_20=realloc((void *)topol[(signed long int)k][(signed long int)0], (unsigned long int)(nmemim + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)0] = (signed int *)return_value_realloc_20;
    intpt = topol[(signed long int)k][(signed long int)0];
    if(prevnode == -1)
    {
      tmp_post_21 = intpt;
      intpt = intpt + 1l;
      *tmp_post_21 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_22 = *tmp_post_23)
      {
        tmp_post_22 = intpt;
        intpt = intpt + 1l;
        tmp_post_23 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_24 = *tmp_post_25)
      {
        tmp_post_24 = intpt;
        intpt = intpt + 1l;
        tmp_post_25 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    prevnode = hist[(signed long int)jm];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child1 = prevnode;

    nmemjm = nmemar[(signed long int)jm];
    void *return_value_realloc_26;
    return_value_realloc_26=realloc((void *)topol[(signed long int)k][(signed long int)1], (unsigned long int)(nmemjm + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)1] = (signed int *)return_value_realloc_26;
    intpt = topol[(signed long int)k][(signed long int)1];
    if(intpt == ((signed int *)NULL))
    {
      reporterr("Cannot reallocate topol\n");
      exit(1);
    }

    if(prevnode == -1)
    {
      tmp_post_27 = intpt;
      intpt = intpt + 1l;
      *tmp_post_27 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_28 = *tmp_post_29)
      {
        tmp_post_28 = intpt;
        intpt = intpt + 1l;
        tmp_post_29 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_30 = *tmp_post_31)
      {
        tmp_post_30 = intpt;
        intpt = intpt + 1l;
        tmp_post_31 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    minscore = minscore * 0.5;
    len[(signed long int)k][(signed long int)0] = minscore - tmptmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscore - tmptmplen[(signed long int)jm];
    if(*len[(signed long int)k] < 0.0)
      len[(signed long int)k][(signed long int)0] = 0.0;

    if(len[(signed long int)k][1l] < 0.0)
      len[(signed long int)k][(signed long int)1] = 0.0;

    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->distfromtip = minscore;

    tmptmplen[(signed long int)im] = minscore;
    hist[(signed long int)im] = k;
    nmemar[(signed long int)im] = nmemim + nmemjm;
    mindisfrom[(signed long int)im] = 999.9;
    eff[(signed long int)im][(signed long int)(jm - im)] = 999.9;
    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)(maxiim - miniim)];
        eff1 = eff[(signed long int)minijm][(signed long int)(maxijm - minijm)];
        eff[(signed long int)miniim][(signed long int)(maxiim - miniim)]=clusterfuncpt[(signed long int)0](eff0, eff1);
        tmpdouble = eff[(signed long int)miniim][(signed long int)(maxiim - miniim)];
        if(tmpdouble < mindisfrom[(signed long int)i])
        {
          mindisfrom[(signed long int)i] = tmpdouble;
          nearest[(signed long int)i] = im;
        }

        if(tmpdouble < mindisfrom[(signed long int)im])
        {
          mindisfrom[(signed long int)im] = tmpdouble;
          nearest[(signed long int)im] = i;
        }

        if(nearest[(signed long int)i] == jm)
          nearest[(signed long int)i] = im;

      }

    }
    unsigned long int return_value_strlen_32;
    return_value_strlen_32=strlen(tree[(signed long int)im]);
    unsigned long int return_value_strlen_33;
    return_value_strlen_33=strlen(tree[(signed long int)jm]);
    void *return_value_realloc_34;
    return_value_realloc_34=realloc((void *)treetmp, return_value_strlen_32 + return_value_strlen_33 + (unsigned long int)100);
    treetmp = (char *)return_value_realloc_34;
    if(treetmp == ((char *)NULL))
    {
      reporterr("Cannot allocate treetmp\n");
      exit(1);
    }

    sprintf(treetmp, "(%s:%7.5f,%s:%7.5f)", tree[(signed long int)im], len[(signed long int)k][(signed long int)0], tree[(signed long int)jm], len[(signed long int)k][(signed long int)1]);
    free((void *)tree[(signed long int)im]);
    free((void *)tree[(signed long int)jm]);
    unsigned long int return_value_strlen_35;
    return_value_strlen_35=strlen(treetmp);
    void *return_value_calloc_36;
    return_value_calloc_36=calloc(return_value_strlen_35 + (unsigned long int)1, sizeof(char) /*1ul*/ );
    tree[(signed long int)im] = (char *)return_value_calloc_36;
    tree[(signed long int)jm] = (char *)(void *)0;
    if(tree[(signed long int)im] == ((char *)NULL))
    {
      reporterr("Cannot reallocate tree!\n");
      exit(1);
    }

    strcpy(tree[(signed long int)im], treetmp);
    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    acjmprev->next = acjmnext;
    if(!(acjmnext == ((struct _Bchain *)NULL)))
      acjmnext->prev = acjmprev;

    if(!(efffree == 0))
    {
      free((void *)eff[(signed long int)jm]);
      eff[(signed long int)jm] = (double *)(void *)0;
    }

    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(nearest[(signed long int)i] == im)
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
        }

        else
        {
          miniim = im;
          maxiim = i;
        }
        if(eff[(signed long int)miniim][(signed long int)(maxiim + -miniim)] > mindisfrom[(signed long int)i])
          setnearest(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);

      }

    }
  }
  fp=fopen("infile.tree", "w");
  fprintf(fp, "%s\n", treetmp);
  fclose(fp);
  free((void *)tree[(signed long int)0]);
  free((void *)tree);
  free((void *)treetmp);
  free((void *)nametmp);
  free((void *)tmptmplen);
  tmptmplen = (double *)(void *)0;
  free((void *)hist);
  hist = (signed int *)(void *)0;
  free((void *)(char *)ac);
  ac = (struct _Bchain *)(void *)0;
  free((void *)nmemar);
  nmemar = (signed int *)(void *)0;
  free((void *)mindisfrom);
  free((void *)nearest);
  free((void *)testtopol);
  FreeIntMtx(inconsistent);
  FreeIntMtx(inconsistentpairlist);
  free((void *)warned);
}

// fixed_supg_double_treeout_constrained
// file mltaln9.c line 2856
extern void fixed_supg_double_treeout_constrained(signed int nseq, double **eff, signed int ***topol, double **len, char **name, signed int ngroup, signed int **groups)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  double tmpdouble;
  double eff1;
  double eff0;
  signed int im = -1;
  signed int jm = -1;
  struct _Bchain *acjmnext;
  struct _Bchain *acjmprev;
  signed int prevnode;
  struct _Bchain *acpti;
  struct _Bchain *acptj;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  signed int nmemim;
  signed int nmemjm;
  double minscore;
  signed int *nearest = (signed int *)(void *)0;
  double *mindisfrom = (double *)(void *)0;
  struct _IO_FILE *fp;
  double (*clusterfuncpt[1l])(double, double);
  char namec;
  signed int *testtopol;
  signed int **inconsistent;
  signed int **inconsistentpairlist;
  signed int ninconsistentpairs;
  signed int *warned;
  signed int allinconsistent;
  signed int firsttime;
  increaseintergroupdistancesfullmtx(eff, ngroup, groups, nseq);
  sueff1 = (double)1 - sueff_global;
  sueff05 = sueff_global * 0.5;
  if(treemethod == 88)
    clusterfuncpt[(signed long int)0] = cluster_mix_double;

  else
    if(treemethod == 69)
      clusterfuncpt[(signed long int)0] = cluster_average_double;

    else
      if(treemethod == 113)
        clusterfuncpt[(signed long int)0] = cluster_minimum_double;

      else
      {
        reporterr("Unknown treemethod, %c\n", treemethod);
        exit(1);
      }
  static char **tree;
  static char *nametmp;
  static char *treetmp;
  static signed int *nmemar;
  static struct _Bchain *ac = (struct _Bchain *)(void *)0;
  static double *tmptmplen = (double *)(void *)0;
  static signed int *hist = (signed int *)(void *)0;
  if(hist == ((signed int *)NULL))
  {
    hist=AllocateIntVec(njob);
    tmptmplen=AllocateDoubleVec(njob);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)njob * sizeof(struct _Bchain) /*24ul*/ );
    ac = (struct _Bchain *)return_value_malloc_1;
    nmemar=AllocateIntVec(njob);
    mindisfrom=AllocateDoubleVec(njob);
    nearest=AllocateIntVec(njob);
    treetmp = (char *)(void *)0;
    nametmp=AllocateCharVec(1000);
    tree=AllocateCharMtx(njob, 0);
    testtopol=AllocateIntVec(njob + 1);
    inconsistent=AllocateIntMtx(njob, njob);
    inconsistentpairlist=AllocateIntMtx((njob * (njob - 1)) / 2 + 1, 2);
    warned=AllocateIntVec(ngroup);
  }

  i = 0;
  const unsigned short int **return_value___ctype_b_loc_2;
  char *return_value_strstr_3;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 999); j = j + 1)
      nametmp[(signed long int)j] = (char)0;
    j = 0;
    for( ; !(j >= 999); j = j + 1)
    {
      namec = name[(signed long int)i][(signed long int)j];
      if((signed int)namec == 0)
        break;

      else
      {
        return_value___ctype_b_loc_2=__ctype_b_loc();
        if((signed int)namec == 45 || (signed int)namec == 47 || (signed int)namec == 61 || (signed int)namec == 123 || (signed int)namec == 125 || !((8 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)namec]) == 0))
          nametmp[(signed long int)j] = namec;

        else
          nametmp[(signed long int)j] = (char)95;
      }
    }
    nametmp[(signed long int)j] = (char)0;
    static char *nameptr;
    if(!(outnumber == 0))
    {
      return_value_strstr_3=strstr(nametmp, "_numo_e");
      nameptr = return_value_strstr_3 + (signed long int)8;
    }

    else
      nameptr = nametmp + (signed long int)1;
    static char *tmpptr;
    tmpptr=strstr(nameptr, "_oe_");
    if(!(tmpptr == ((char *)NULL)))
      nameptr = tmpptr + (signed long int)4;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(nametmp);
    void *return_value_calloc_5;
    return_value_calloc_5=calloc(return_value_strlen_4 + (unsigned long int)100, sizeof(char) /*1ul*/ );
    tree[(signed long int)i] = (char *)return_value_calloc_5;
    if(tree[(signed long int)i] == ((char *)NULL))
    {
      reporterr("Cannot allocate tree!\n");
      exit(1);
    }

    sprintf(tree[(signed long int)i], "\n%d_%.900s\n", i + 1, nameptr);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = ac + (signed long int)i + (signed long int)1;
    (ac + (signed long int)i)->prev = (ac + (signed long int)i) - (signed long int)1;
    (ac + (signed long int)i)->pos = i;
  }
  (ac + (signed long int)(nseq - 1))->next = (struct _Bchain *)(void *)0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    setnearest_double_fullmtx(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmptmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    hist[(signed long int)i] = -1;
    nmemar[(signed long int)i] = 1;
  }
  reporterr("\n");
  ninconsistentpairs = 0;
  k = 0;
  _Bool tmp_if_expr_6;
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
  signed int return_value_includemember_17;
  signed int *tmp_post_20;
  signed int *tmp_post_21;
  signed int *tmp_post_22;
  signed int *tmp_post_23;
  signed int *tmp_post_24;
  signed int *tmp_post_25;
  signed int *tmp_post_26;
  signed int *tmp_post_27;
  signed int *tmp_post_28;
  signed int *tmp_post_29;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("\r% 5d / %d", k, nseq);

    i = 0;
    for( ; !(i >= ninconsistentpairs); i = i + 1)
      inconsistent[(signed long int)inconsistentpairlist[(signed long int)i][(signed long int)0]][(signed long int)inconsistentpairlist[(signed long int)i][(signed long int)1]] = 0;
    ninconsistentpairs = 0;
    firsttime = 1;
    while((_Bool)1)
    {
      if(!(firsttime == 0))
      {
        firsttime = 0;
        minscore = 999.9;
        acpti = ac;
        for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
        {
          i = acpti->pos;
          if(mindisfrom[(signed long int)i] < minscore)
          {
            im = i;
            minscore = mindisfrom[(signed long int)i];
          }

        }
        jm = nearest[(signed long int)im];
        if(!(jm >= im))
        {
          j = jm;
          jm = im;
          im = j;
        }

      }

      else
      {
        minscore = 999.9;
        acpti = ac;
        for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
        {
          i = acpti->pos;
          acptj = acpti->next;
          for( ; !(acptj == ((struct _Bchain *)NULL)); acptj = acptj->next)
          {
            j = acptj->pos;
            if(inconsistent[(signed long int)i][(signed long int)j] == 0)
            {
              tmpdouble = eff[(signed long int)i][(signed long int)j];
              if(tmpdouble < minscore)
              {
                minscore = tmpdouble;
                im = i;
                jm = j;
              }

            }

          }
          acptj = ac;
          do
          {
            if(!(acptj == ((struct _Bchain *)NULL)))
              tmp_if_expr_6 = acptj->pos != i ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_6 = (_Bool)0;
            if(!tmp_if_expr_6)
              break;

            j = acptj->pos;
            if(inconsistent[(signed long int)j][(signed long int)i] == 0)
            {
              tmpdouble = eff[(signed long int)j][(signed long int)i];
              if(tmpdouble < minscore)
              {
                minscore = tmpdouble;
                im = j;
                jm = i;
              }

            }

            acptj = acptj->next;
          }
          while((_Bool)1);
        }
      }
      allinconsistent = 1;
      acpti = ac;
      for( ; !(acpti->next == ((struct _Bchain *)NULL)); acpti = acpti->next)
      {
        acptj = acpti->next;
        for( ; !(acptj == ((struct _Bchain *)NULL)); acptj = acptj->next)
          if(inconsistent[(signed long int)acpti->pos][(signed long int)acptj->pos] == 0)
          {
            allinconsistent = 0;
            goto exitloop_d;
          }

      }

    exitloop_d:
      ;
      if(!(allinconsistent == 0))
      {
        reporterr("\n\n\nPlease check whether the grouping is possible.\n\n\n");
        exit(1);
      }

      intpt = testtopol;
      prevnode = hist[(signed long int)im];
      if(prevnode == -1)
      {
        tmp_post_7 = intpt;
        intpt = intpt + 1l;
        *tmp_post_7 = im;
      }

      else
      {
        intpt2 = topol[(signed long int)prevnode][(signed long int)0];
        for( ; !(*intpt2 == -1); *tmp_post_8 = *tmp_post_9)
        {
          tmp_post_8 = intpt;
          intpt = intpt + 1l;
          tmp_post_9 = intpt2;
          intpt2 = intpt2 + 1l;
        }
        intpt2 = topol[(signed long int)prevnode][(signed long int)1];
        for( ; !(*intpt2 == -1); *tmp_post_10 = *tmp_post_11)
        {
          tmp_post_10 = intpt;
          intpt = intpt + 1l;
          tmp_post_11 = intpt2;
          intpt2 = intpt2 + 1l;
        }
      }
      prevnode = hist[(signed long int)jm];
      if(prevnode == -1)
      {
        tmp_post_12 = intpt;
        intpt = intpt + 1l;
        *tmp_post_12 = jm;
      }

      else
      {
        intpt2 = topol[(signed long int)prevnode][(signed long int)0];
        for( ; !(*intpt2 == -1); *tmp_post_13 = *tmp_post_14)
        {
          tmp_post_13 = intpt;
          intpt = intpt + 1l;
          tmp_post_14 = intpt2;
          intpt2 = intpt2 + 1l;
        }
        intpt2 = topol[(signed long int)prevnode][(signed long int)1];
        for( ; !(*intpt2 == -1); *tmp_post_15 = *tmp_post_16)
        {
          tmp_post_15 = intpt;
          intpt = intpt + 1l;
          tmp_post_16 = intpt2;
          intpt2 = intpt2 + 1l;
        }
      }
      *intpt = -1;
      i = 0;
      for( ; !(i >= ngroup); i = i + 1)
      {
        signed int return_value_overlapmember_19;
        return_value_overlapmember_19=overlapmember(testtopol, groups[(signed long int)i]);
        if(!(return_value_overlapmember_19 == 0))
        {
          signed int return_value_includemember_18;
          return_value_includemember_18=includemember(testtopol, groups[(signed long int)i]);
          if(return_value_includemember_18 == 0)
          {
            return_value_includemember_17=includemember(groups[(signed long int)i], testtopol);
            if(return_value_includemember_17 == 0)
            {
              if(warned[(signed long int)i] == 0)
              {
                warned[(signed long int)i] = 1;
                reporterr("\n###################################################################\n");
                reporterr("# WARNING: Group %d is forced to be a monophyletic cluster.\n", i + 1);
                reporterr("###################################################################\n");
              }

              inconsistent[(signed long int)im][(signed long int)jm] = 1;
              inconsistentpairlist[(signed long int)ninconsistentpairs][(signed long int)0] = im;
              inconsistentpairlist[(signed long int)ninconsistentpairs][(signed long int)1] = jm;
              ninconsistentpairs = ninconsistentpairs + 1;
              break;
            }

          }

        }

      }
      if(i == ngroup)
        break;

    }
    prevnode = hist[(signed long int)im];
    nmemim = nmemar[(signed long int)im];
    intpt = topol[(signed long int)k][(signed long int)0];
    if(prevnode == -1)
    {
      tmp_post_20 = intpt;
      intpt = intpt + 1l;
      *tmp_post_20 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_21 = *tmp_post_22)
      {
        tmp_post_21 = intpt;
        intpt = intpt + 1l;
        tmp_post_22 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_23 = *tmp_post_24)
      {
        tmp_post_23 = intpt;
        intpt = intpt + 1l;
        tmp_post_24 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    prevnode = hist[(signed long int)jm];
    nmemjm = nmemar[(signed long int)jm];
    intpt = topol[(signed long int)k][(signed long int)1];
    if(prevnode == -1)
    {
      tmp_post_25 = intpt;
      intpt = intpt + 1l;
      *tmp_post_25 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_26 = *tmp_post_27)
      {
        tmp_post_26 = intpt;
        intpt = intpt + 1l;
        tmp_post_27 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_28 = *tmp_post_29)
      {
        tmp_post_28 = intpt;
        intpt = intpt + 1l;
        tmp_post_29 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    minscore = minscore * 0.5;
    len[(signed long int)k][(signed long int)0] = minscore - tmptmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscore - tmptmplen[(signed long int)jm];
    if(*len[(signed long int)k] < 0.0)
      len[(signed long int)k][(signed long int)0] = 0.0;

    if(len[(signed long int)k][1l] < 0.0)
      len[(signed long int)k][(signed long int)1] = 0.0;

    tmptmplen[(signed long int)im] = minscore;
    hist[(signed long int)im] = k;
    nmemar[(signed long int)im] = nmemim + nmemjm;
    mindisfrom[(signed long int)im] = 999.9;
    eff[(signed long int)im][(signed long int)jm] = 999.9;
    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)maxiim];
        eff1 = eff[(signed long int)minijm][(signed long int)maxijm];
        eff[(signed long int)miniim][(signed long int)maxiim]=clusterfuncpt[(signed long int)0](eff0, eff1);
        tmpdouble = eff[(signed long int)miniim][(signed long int)maxiim];
        if(tmpdouble < mindisfrom[(signed long int)i])
        {
          mindisfrom[(signed long int)i] = tmpdouble;
          nearest[(signed long int)i] = im;
        }

        if(tmpdouble < mindisfrom[(signed long int)im])
        {
          mindisfrom[(signed long int)im] = tmpdouble;
          nearest[(signed long int)im] = i;
        }

        if(nearest[(signed long int)i] == jm)
          nearest[(signed long int)i] = im;

      }

    }
    unsigned long int return_value_strlen_30;
    return_value_strlen_30=strlen(tree[(signed long int)im]);
    unsigned long int return_value_strlen_31;
    return_value_strlen_31=strlen(tree[(signed long int)jm]);
    void *return_value_realloc_32;
    return_value_realloc_32=realloc((void *)treetmp, return_value_strlen_30 + return_value_strlen_31 + (unsigned long int)100);
    treetmp = (char *)return_value_realloc_32;
    if(treetmp == ((char *)NULL))
    {
      reporterr("Cannot allocate treetmp\n");
      exit(1);
    }

    sprintf(treetmp, "(%s:%7.5f,%s:%7.5f)", tree[(signed long int)im], len[(signed long int)k][(signed long int)0], tree[(signed long int)jm], len[(signed long int)k][(signed long int)1]);
    free((void *)tree[(signed long int)im]);
    free((void *)tree[(signed long int)jm]);
    unsigned long int return_value_strlen_33;
    return_value_strlen_33=strlen(treetmp);
    void *return_value_calloc_34;
    return_value_calloc_34=calloc(return_value_strlen_33 + (unsigned long int)1, sizeof(char) /*1ul*/ );
    tree[(signed long int)im] = (char *)return_value_calloc_34;
    tree[(signed long int)jm] = (char *)(void *)0;
    if(tree[(signed long int)im] == ((char *)NULL))
    {
      reporterr("Cannot reallocate tree!\n");
      exit(1);
    }

    strcpy(tree[(signed long int)im], treetmp);
    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    acjmprev->next = acjmnext;
    if(!(acjmnext == ((struct _Bchain *)NULL)))
      acjmnext->prev = acjmprev;

    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(nearest[(signed long int)i] == im)
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
        }

        else
        {
          miniim = im;
          maxiim = i;
        }
        if(eff[(signed long int)miniim][(signed long int)maxiim] > mindisfrom[(signed long int)i])
          setnearest_double_fullmtx(nseq, ac, eff, mindisfrom + (signed long int)i, nearest + (signed long int)i, i);

      }

    }
  }
  fp=fopen("infile.tree", "w");
  fprintf(fp, "%s\n", treetmp);
  fclose(fp);
  free((void *)tree[(signed long int)0]);
  free((void *)tree);
  free((void *)treetmp);
  free((void *)nametmp);
  free((void *)tmptmplen);
  tmptmplen = (double *)(void *)0;
  free((void *)hist);
  hist = (signed int *)(void *)0;
  free((void *)(char *)ac);
  ac = (struct _Bchain *)(void *)0;
  free((void *)nmemar);
  nmemar = (signed int *)(void *)0;
  free((void *)mindisfrom);
  free((void *)nearest);
  free((void *)testtopol);
  FreeIntMtx(inconsistent);
  FreeIntMtx(inconsistentpairlist);
  free((void *)warned);
}

// fltncpy
// file mltaln9.c line 8793
extern void fltncpy(double *s1, double *s2, signed int n)
{
  signed int tmp_post_1;
  double *tmp_post_2;
  double *tmp_post_3;
  do
  {
    tmp_post_1 = n;
    n = n - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = s1;
    s1 = s1 + 1l;
    tmp_post_3 = s2;
    s2 = s2 + 1l;
    *tmp_post_2 = *tmp_post_3;
  }
  while((_Bool)1);
}

// freeconstants
// file constants.c line 1442
extern void freeconstants()
{
  FreeDoubleMtx(n_disLN);
  FreeIntMtx(n_dis);
  FreeIntMtx(n_disFFT);
  FreeDoubleMtx(n_dis_consweight_multi);
}

// freeintmtx
// file mtxutl.c line 346
void freeintmtx(signed int **mtx, signed int ll1, signed int ll2)
{
  signed int i = 0;
  for( ; !(i >= ll1); i = i + 1)
    free((void *)(char *)mtx[(signed long int)i]);
  free((void *)(char *)mtx);
}

// gapcount
// file mltaln9.c line 9456
extern void gapcount(double *freq, char **seq, signed int nseq, double *eff, signed int lgth)
{
  signed int i;
  signed int j;
  double fr;
  i = 0;
  for( ; !(i >= lgth); i = i + 1)
  {
    fr = 0.0;
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      if((signed int)seq[(signed long int)j][(signed long int)i] == 45)
        fr = fr + eff[(signed long int)j];

    freq[(signed long int)i] = fr;
  }
  goto __CPROVER_DUMP_L6;

__CPROVER_DUMP_L6:
  ;
}

// gapcountf
// file mltaln9.c line 9478
extern void gapcountf(double *freq, char **seq, signed int nseq, double *eff, signed int lgth)
{
  signed int i;
  signed int j;
  double fr;
  i = 0;
  for( ; !(i >= lgth); i = i + 1)
  {
    fr = 0.0;
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      if((signed int)seq[(signed long int)j][(signed long int)i] == 45)
        fr = fr + eff[(signed long int)j];

    freq[(signed long int)i] = fr;
  }
  goto __CPROVER_DUMP_L6;

__CPROVER_DUMP_L6:
  ;
}

// gapireru
// file mltaln9.c line 7452
extern void gapireru(char *res, char *ori, char *gt)
{
  char g;
  char *tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  do
  {
    tmp_post_1 = gt;
    gt = gt + 1l;
    g = *tmp_post_1;
    if(g == 0)
      break;

    if((signed int)g == 45)
    {
      tmp_post_2 = res;
      res = res + 1l;
      *tmp_post_2 = *newgapstr;
    }

    else
    {
      tmp_post_3 = res;
      res = res + 1l;
      tmp_post_4 = ori;
      ori = ori + 1l;
      *tmp_post_3 = *tmp_post_4;
    }
  }
  while((_Bool)1);
  *res = (char)0;
}

// gappick
// file mltaln9.c line 5704
extern void gappick(signed int nseq, signed int s, char **aseq, char **mseq2, double **eff, double *effarr)
{
  signed int i;
  signed int j;
  signed int count;
  signed int countjob;
  signed int len;
  signed int allgap;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(aseq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  i = 0;
  count = 0;
  for( ; !(i >= len); i = i + 1)
  {
    allgap = 1;
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      if(!(j == s))
        allgap = allgap * (signed int)((signed int)aseq[(signed long int)j][(signed long int)i] == 45);

    if(allgap == 0)
    {
      j = 0;
      countjob = 0;
      for( ; !(j >= nseq); j = j + 1)
        if(!(j == s))
        {
          mseq2[(signed long int)countjob][(signed long int)count] = aseq[(signed long int)j][(signed long int)i];
          countjob = countjob + 1;
        }

      count = count + 1;
    }

  }
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
    mseq2[(signed long int)i][(signed long int)count] = (char)0;
  i = 0;
  countjob = 0;
  for( ; !(i >= nseq); i = i + 1)
    if(!(i == s))
    {
      effarr[(signed long int)countjob] = eff[(signed long int)s][(signed long int)i];
      countjob = countjob + 1;
    }

}

// gappick0
// file mltaln9.c line 5683
extern void gappick0(char *aseq, char *seq)
{
  char *tmp_post_1;
  for( ; !((signed int)*seq == 0); seq = seq + 1l)
    if(!((signed int)*seq == 45))
    {
      tmp_post_1 = aseq;
      aseq = aseq + 1l;
      *tmp_post_1 = *seq;
    }

  *aseq = (char)0;
}

// gappick_samestring
// file io.c line 64
extern void gappick_samestring(char *seq)
{
  char *aseq = seq;
  char *tmp_post_1;
  for( ; !((signed int)*seq == 0); seq = seq + 1l)
    if(!((signed int)*seq == 45))
    {
      tmp_post_1 = aseq;
      aseq = aseq + 1l;
      *tmp_post_1 = *seq;
    }

  *aseq = (char)0;
}

// generatenuc1pam
// file constants.c line 176
static void generatenuc1pam(double **pam1, signed int kimuraR, double *freq)
{
  signed int i;
  signed int j;
  double R[4l][4l];
  double mut[4l];
  double total;
  double tmp;
  R[(signed long int)0][(signed long int)0] = 0.0;
  R[(signed long int)0][(signed long int)1] = (double)kimuraR;
  R[(signed long int)0][(signed long int)2] = 1.0;
  R[(signed long int)0][(signed long int)3] = 1.0;
  R[(signed long int)1][(signed long int)0] = (double)kimuraR;
  R[(signed long int)1][(signed long int)1] = 0.0;
  R[(signed long int)1][(signed long int)2] = 1.0;
  R[(signed long int)1][(signed long int)3] = 1.0;
  R[(signed long int)2][(signed long int)0] = 1.0;
  R[(signed long int)2][(signed long int)1] = 1.0;
  R[(signed long int)2][(signed long int)2] = 0.0;
  R[(signed long int)2][(signed long int)3] = (double)kimuraR;
  R[(signed long int)3][(signed long int)0] = 1.0;
  R[(signed long int)3][(signed long int)1] = 1.0;
  R[(signed long int)3][(signed long int)2] = (double)kimuraR;
  R[(signed long int)3][(signed long int)3] = 0.0;
  total = 0.0;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    tmp = 0.0;
    j = 0;
    for( ; !(j >= 4); j = j + 1)
      tmp = tmp + R[(signed long int)i][(signed long int)j] * freq[(signed long int)j];
    mut[(signed long int)i] = tmp;
    total = total + tmp * freq[(signed long int)i];
  }
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 4); j = j + 1)
      if(!(i == j))
        pam1[(signed long int)i][(signed long int)j] = (0.01 / total) * R[(signed long int)i][(signed long int)j] * freq[(signed long int)j];

      else
        pam1[(signed long int)i][(signed long int)j] = 1.0 - (0.01 / total) * mut[(signed long int)i];
  }
}

// generatesubalignmentstable
// file mltaln9.c line 9625
extern signed int generatesubalignmentstable(signed int nseq, signed int ***tablept, signed int *nsubpt, signed int *maxmempt, signed int ***topol, double **len, double threshold)
{
  signed int i;
  signed int j;
  signed int rep0;
  signed int rep1;
  signed int nmem;
  signed int mem;
  double distfromtip0;
  double distfromtip1;
  double *distfromtip;
  reporterr("\n\n\n");
  *maxmempt = 0;
  *nsubpt = 0;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)nseq, sizeof(double) /*8ul*/ );
  distfromtip = (double *)return_value_calloc_1;
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    rep0 = topol[(signed long int)i][(signed long int)0][(signed long int)0];
    distfromtip0 = distfromtip[(signed long int)rep0];
    distfromtip[(signed long int)rep0] = distfromtip[(signed long int)rep0] + len[(signed long int)i][(signed long int)0];
    rep1 = topol[(signed long int)i][(signed long int)1][(signed long int)0];
    distfromtip1 = distfromtip[(signed long int)rep1];
    distfromtip[(signed long int)rep1] = distfromtip[(signed long int)rep1] + len[(signed long int)i][(signed long int)1];
    if(!((*topol[(signed long int)i])[1l] == -1))
    {
      if(distfromtip0 <= threshold)
      {
        if(threshold < distfromtip[(signed long int)rep0])
        {
          void *return_value_realloc_2;
          return_value_realloc_2=realloc((void *)*tablept, sizeof(char *) /*8ul*/  * (unsigned long int)(*nsubpt + 2));
          *tablept = (signed int **)return_value_realloc_2;
          j = 0;
          nmem = 0;
          do
          {
            mem = topol[(signed long int)i][(signed long int)0][(signed long int)j];
            if(mem == -1)
              break;

            nmem = nmem + 1;
            j = j + 1;
          }
          while((_Bool)1);
          void *return_value_calloc_3;
          return_value_calloc_3=calloc((unsigned long int)(nmem + 1), sizeof(signed int) /*4ul*/ );
          (*tablept)[(signed long int)*nsubpt] = (signed int *)return_value_calloc_3;
          (*tablept)[(signed long int)(*nsubpt + 1)] = (signed int *)(void *)0;
          intcpy((*tablept)[(signed long int)*nsubpt], topol[(signed long int)i][(signed long int)0]);
          if(!(*maxmempt >= nmem))
            *maxmempt = nmem;

          *nsubpt = *nsubpt + 1;
        }

      }

    }

    if(!(topol[(signed long int)i][1l][1l] == -1))
    {
      if(distfromtip1 <= threshold)
      {
        if(threshold < distfromtip[(signed long int)rep1])
        {
          void *return_value_realloc_4;
          return_value_realloc_4=realloc((void *)*tablept, sizeof(char *) /*8ul*/  * (unsigned long int)(*nsubpt + 2));
          *tablept = (signed int **)return_value_realloc_4;
          j = 0;
          nmem = 0;
          do
          {
            mem = topol[(signed long int)i][(signed long int)1][(signed long int)j];
            if(mem == -1)
              break;

            nmem = nmem + 1;
            j = j + 1;
          }
          while((_Bool)1);
          void *return_value_calloc_5;
          return_value_calloc_5=calloc((unsigned long int)(nmem + 1), sizeof(signed int) /*4ul*/ );
          (*tablept)[(signed long int)*nsubpt] = (signed int *)return_value_calloc_5;
          (*tablept)[(signed long int)(*nsubpt + 1)] = (signed int *)(void *)0;
          intcpy((*tablept)[(signed long int)*nsubpt], topol[(signed long int)i][(signed long int)1]);
          if(!(*maxmempt >= nmem))
            *maxmempt = nmem;

          *nsubpt = *nsubpt + 1;
        }

      }

    }

  }
  if(*distfromtip <= threshold)
  {
    free((void *)distfromtip);
    return 1;
  }

  else
  {
    free((void *)distfromtip);
    return 0;
  }
}

// getGapPattern
// file mltaln9.c line 7823
extern void getGapPattern(double *fgcp, signed int clus, char **seq, double *eff, signed int len, char *xxx)
{
  signed int i;
  signed int j;
  signed int gc;
  signed int gb;
  double feff;
  double *fpt;
  char *spt;
  fpt = fgcp;
  i = len + 1;
  signed int tmp_post_1;
  double *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = 0.0;
  }
  while((_Bool)1);
  j = 0;
  signed int tmp_post_3;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    fpt = fgcp;
    spt = seq[(signed long int)j];
    gc = (signed int)((signed int)*spt == 45);
    i = len + 1;
    do
    {
      tmp_post_3 = i;
      i = i - 1;
      if(tmp_post_3 == 0)
        break;

      gb = gc;
      spt = spt + 1l;
      gc = (signed int)((signed int)*spt == 45);
      if(!(gb * (signed int)(gc == 0) == 0))
        *fpt = *fpt + feff;

      fpt = fpt + 1l;
    }
    while((_Bool)1);
  }
  j = 0;
  for( ; !(j >= len); j = j + 1)
    reporterr("%d, %f\n", j, fgcp[(signed long int)j]);
}

// getaline_fp_eof
// file io.c line 973
extern signed int getaline_fp_eof(char *s, signed int l, struct _IO_FILE *fp)
{
  signed int c;
  signed int i = 0;
  signed int noteofflag = 0;
  i = 0;
  _Bool tmp_if_expr_1;
  char *tmp_post_2;
  do
  {
    if(!(i >= l))
    {
      c=_IO_getc(fp);
      noteofflag = (signed int)(c != -1);
      tmp_if_expr_1 = noteofflag != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_1 = (_Bool)0;
    if(c == 10 || !tmp_if_expr_1)
      break;

    tmp_post_2 = s;
    s = s + 1l;
    *tmp_post_2 = (char)c;
    i = i + 1;
  }
  while((_Bool)1);
  *s = (char)0;
  return (signed int)!(noteofflag != 0);
}

// getaline_fp_eof_new
// file io.c line 983
extern signed int getaline_fp_eof_new(char *s, signed int l, struct _IO_FILE *fp)
{
  signed int c = 0;
  signed int i = 0;
  signed int noteofflag = 0;
  signed int return_value_feof_1;
  return_value_feof_1=feof(fp);
  _Bool tmp_if_expr_2;
  char *tmp_post_3;
  signed int return_value__IO_getc_4;
  if(!(return_value_feof_1 == 0))
    return 1;

  else
  {
    i = 0;
    do
    {
      if(!(i >= l))
      {
        c=_IO_getc(fp);
        noteofflag = (signed int)(c != -1);
        tmp_if_expr_2 = noteofflag != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(c == 10 || !tmp_if_expr_2)
        break;

      tmp_post_3 = s;
      s = s + 1l;
      *tmp_post_3 = (char)c;
      i = i + 1;
    }
    while((_Bool)1);
    *s = (char)0;
    if(!(c == 10) && !(c == -1))
      do
      {
        return_value__IO_getc_4=_IO_getc(fp);
        if(return_value__IO_getc_4 == 10)
          break;

      }
      while((_Bool)1);

    return (signed int)!(noteofflag != 0);
  }
}

// getdiaminofreq_part
// file mltaln9.c line 7955
extern void getdiaminofreq_part(double *freq, signed int clus, char **seq, double *eff, signed int len, char *sgappat, char *egappat)
{
  signed int i;
  signed int j;
  double feff;
  i = 0;
  for( ; !(i >= 2 + len); i = i + 1)
    freq[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= clus); i = i + 1)
  {
    feff = eff[(signed long int)i];
    if(!((signed int)*seq[(signed long int)i] == 45))
    {
      if(!((signed int)sgappat[(signed long int)i] == 45))
        freq[(signed long int)0] = freq[(signed long int)0] + feff;

    }

    j = 1;
    for( ; !(j >= len); j = j + 1)
      if(!((signed int)seq[(signed long int)i][(signed long int)j] == 45))
      {
        if(!((signed int)seq[(signed long int)i][(signed long int)(j + -1)] == 45))
          freq[(signed long int)j] = freq[(signed long int)j] + feff;

      }

    if(!((signed int)egappat[(signed long int)i] == 45))
    {
      if(!((signed int)seq[(signed long int)i][(signed long int)(len + -1)] == 45))
        freq[(signed long int)len] = freq[(signed long int)len] + feff;

    }

  }
}

// getdiaminofreq_st
// file mltaln9.c line 7909
extern void getdiaminofreq_st(double *freq, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  double feff;
  i = 0;
  for( ; !(i >= 1 + len); i = i + 1)
    freq[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= clus); i = i + 1)
  {
    feff = eff[(signed long int)i];
    if(!((signed int)*seq[(signed long int)i] == 45))
      freq[(signed long int)0] = freq[(signed long int)0] + feff;

    j = 1;
    for( ; !(j >= len); j = j + 1)
      if(!((signed int)seq[(signed long int)i][(signed long int)j] == 45))
      {
        if(!((signed int)seq[(signed long int)i][(signed long int)(j + -1)] == 45))
          freq[(signed long int)j] = freq[(signed long int)j] + feff;

      }

    freq[(signed long int)len] = freq[(signed long int)len] + feff;
  }
}

// getdiaminofreq_x
// file mltaln9.c line 7887
extern void getdiaminofreq_x(double *freq, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  double feff;
  i = 0;
  for( ; !(i >= 2 + len); i = i + 1)
    freq[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= clus); i = i + 1)
  {
    feff = eff[(signed long int)i];
    if(!((signed int)*seq[(signed long int)i] == 45))
      freq[(signed long int)0] = freq[(signed long int)0] + feff;

    j = 1;
    for( ; !(j >= len); j = j + 1)
      if(!((signed int)seq[(signed long int)i][(signed long int)j] == 45))
      {
        if(!((signed int)seq[(signed long int)i][(signed long int)(j + -1)] == 45))
          freq[(signed long int)j] = freq[(signed long int)j] + feff;

      }

    if(!((signed int)seq[(signed long int)i][(signed long int)(len + -1)] == 45))
      freq[(signed long int)len] = freq[(signed long int)len] + feff;

  }
}

// getdigapfreq_part
// file mltaln9.c line 7931
extern void getdigapfreq_part(double *freq, signed int clus, char **seq, double *eff, signed int len, char *sgappat, char *egappat)
{
  signed int i;
  signed int j;
  double feff;
  i = 0;
  for( ; !(i >= 2 + len); i = i + 1)
    freq[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= clus); i = i + 1)
  {
    feff = eff[(signed long int)i];
    if((signed int)*seq[(signed long int)i] == 45)
    {
      if((signed int)sgappat[(signed long int)i] == 45)
        freq[(signed long int)0] = freq[(signed long int)0] + feff;

    }

    j = 1;
    for( ; !(j >= len); j = j + 1)
      if((signed int)seq[(signed long int)i][(signed long int)j] == 45)
      {
        if((signed int)seq[(signed long int)i][(signed long int)(j + -1)] == 45)
          freq[(signed long int)j] = freq[(signed long int)j] + feff;

      }

    if((signed int)egappat[(signed long int)i] == 45)
    {
      if((signed int)seq[(signed long int)i][(signed long int)(len + -1)] == 45)
        freq[(signed long int)len] = freq[(signed long int)len] + feff;

    }

  }
}

// getdigapfreq_st
// file mltaln9.c line 7865
extern void getdigapfreq_st(double *freq, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  double feff;
  i = 0;
  for( ; !(i >= 1 + len); i = i + 1)
    freq[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= clus); i = i + 1)
  {
    feff = eff[(signed long int)i];
    j = 1;
    for( ; !(j >= len); j = j + 1)
      if((signed int)seq[(signed long int)i][(signed long int)j] == 45)
      {
        if((signed int)seq[(signed long int)i][(signed long int)(j + -1)] == 45)
          freq[(signed long int)j] = freq[(signed long int)j] + feff;

      }

  }
}

// getgapfreq
// file mltaln9.c line 8019
extern void getgapfreq(double *freq, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  double feff;
  i = 0;
  for( ; !(i >= 1 + len); i = i + 1)
    freq[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= clus); i = i + 1)
  {
    feff = eff[(signed long int)i];
    j = 0;
    for( ; !(j >= len); j = j + 1)
      if((signed int)seq[(signed long int)i][(signed long int)j] == 45)
        freq[(signed long int)j] = freq[(signed long int)j] + feff;

  }
  freq[(signed long int)len] = 0.0;
}

// getgapfreq_zure
// file mltaln9.c line 8000
extern void getgapfreq_zure(double *freq, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  double feff;
  i = 0;
  for( ; !(i >= 1 + len); i = i + 1)
    freq[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= clus); i = i + 1)
  {
    feff = eff[(signed long int)i];
    j = 0;
    for( ; !(j >= len); j = j + 1)
      if((signed int)seq[(signed long int)i][(signed long int)j] == 45)
        freq[(signed long int)(j + 1)] = freq[(signed long int)(j + 1)] + feff;

  }
  freq[(signed long int)(len + 1)] = 0.0;
}

// getgapfreq_zure_part
// file mltaln9.c line 7978
extern void getgapfreq_zure_part(double *freq, signed int clus, char **seq, double *eff, signed int len, char *sgap)
{
  signed int i;
  signed int j;
  double feff;
  i = 0;
  for( ; !(i >= 2 + len); i = i + 1)
    freq[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= clus); i = i + 1)
  {
    feff = eff[(signed long int)i];
    if((signed int)sgap[(signed long int)i] == 45)
      freq[(signed long int)0] = freq[(signed long int)0] + feff;

    j = 0;
    for( ; !(j >= len); j = j + 1)
      if((signed int)seq[(signed long int)i][(signed long int)j] == 45)
        freq[(signed long int)(j + 1)] = freq[(signed long int)(j + 1)] + feff;

  }
}

// getkyokaigap
// file mltaln9.c line 7469
extern void getkyokaigap(char *g, char **s, signed int pos, signed int n)
{
  signed int tmp_post_1;
  char *tmp_post_2;
  char **tmp_post_3;
  do
  {
    tmp_post_1 = n;
    n = n - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = g;
    g = g + 1l;
    tmp_post_3 = s;
    s = s + 1l;
    *tmp_post_2 = (*tmp_post_3)[(signed long int)pos];
  }
  while((_Bool)1);
}

// getnumlen
// file functions.h line 200
extern void getnumlen(struct _IO_FILE *fp)
{
  signed int total;
  signed int nsite = 0;
  signed int atgcnum;
  signed int i;
  signed int tmp;
  char *tmpseq;
  char *tmpname;
  double atgcfreq;
  tmpname=AllocateCharVec(5000000);
  njob=countKUorWA(fp);
  searchKUorWA(fp);
  nlenmax = 0;
  atgcnum = 0;
  total = 0;
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    myfgets(tmpname, 5000000 - 1, fp);
    tmpseq=load1SeqWithoutName_realloc(fp);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(tmpseq);
    tmp = (signed int)return_value_strlen_1;
    if(!(nlenmax >= tmp))
      nlenmax = tmp;

    signed int return_value_countATGC_2;
    return_value_countATGC_2=countATGC(tmpseq, &nsite);
    atgcnum = atgcnum + return_value_countATGC_2;
    total = total + nsite;
    free((void *)tmpseq);
  }
  atgcfreq = (double)atgcnum / (double)total;
  if(dorp == 100009)
  {
    if(atgcfreq > 0.75)
    {
      dorp = 100;
      upperCase = -1;
    }

    else
    {
      dorp = 112;
      upperCase = 0;
    }
  }

  free((void *)tmpname);
}

// getnumlen_casepreserve
// file io.c line 2011
extern void getnumlen_casepreserve(struct _IO_FILE *fp, signed int *nlenminpt)
{
  signed int total;
  signed int nsite = 0;
  signed int atgcnum;
  signed int i;
  signed int tmp;
  char *tmpseq;
  char *tmpname;
  double atgcfreq;
  tmpname=AllocateCharVec(5000000);
  njob=countKUorWA(fp);
  searchKUorWA(fp);
  nlenmax = 0;
  *nlenminpt = 99999999;
  atgcnum = 0;
  total = 0;
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    myfgets(tmpname, 5000000 - 1, fp);
    tmpseq=load1SeqWithoutName_realloc_casepreserve(fp);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(tmpseq);
    tmp = (signed int)return_value_strlen_1;
    if(!(nlenmax >= tmp))
      nlenmax = tmp;

    if(!(tmp >= *nlenminpt))
      *nlenminpt = tmp;

    signed int return_value_countATGC_2;
    return_value_countATGC_2=countATGC(tmpseq, &nsite);
    atgcnum = atgcnum + return_value_countATGC_2;
    total = total + nsite;
    free((void *)tmpseq);
  }
  free((void *)tmpname);
  atgcfreq = (double)atgcnum / (double)total;
  if(dorp == 100009)
  {
    if(atgcfreq > 0.75)
    {
      dorp = 100;
      upperCase = -1;
    }

    else
    {
      dorp = 112;
      upperCase = 0;
    }
  }

}

// getnumlen_nogap
// file io.c line 2055
extern void getnumlen_nogap(struct _IO_FILE *fp, signed int *nlenminpt)
{
  signed int total;
  signed int nsite = 0;
  signed int atgcnum;
  signed int i;
  signed int tmp;
  char *tmpseq;
  char *tmpname;
  double atgcfreq;
  tmpname=AllocateCharVec(5000000);
  njob=countKUorWA(fp);
  searchKUorWA(fp);
  nlenmax = 0;
  *nlenminpt = 99999999;
  atgcnum = 0;
  total = 0;
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    myfgets(tmpname, 5000000 - 1, fp);
    tmpseq=load1SeqWithoutName_realloc(fp);
    tmp=countnogaplen(tmpseq);
    if(!(nlenmax >= tmp))
      nlenmax = tmp;

    if(!(tmp >= *nlenminpt))
      *nlenminpt = tmp;

    signed int return_value_countATGC_1;
    return_value_countATGC_1=countATGC(tmpseq, &nsite);
    atgcnum = atgcnum + return_value_countATGC_1;
    total = total + nsite;
    free((void *)tmpseq);
  }
  free((void *)tmpname);
  atgcfreq = (double)atgcnum / (double)total;
  fprintf(stderr, "##### atgcfreq = %f\n", atgcfreq);
  if(dorp == 100009)
  {
    if(atgcfreq > 0.75)
    {
      dorp = 100;
      upperCase = -1;
    }

    else
    {
      dorp = 112;
      upperCase = 0;
    }
  }

}

// getnumlen_nogap_outallreg
// file io.c line 2100
extern void getnumlen_nogap_outallreg(struct _IO_FILE *fp, signed int *nlenminpt)
{
  signed int total;
  signed int nsite = 0;
  signed int atgcnum;
  signed int i;
  signed int tmp;
  char *tmpseq;
  char *tmpname;
  double atgcfreq;
  tmpname=AllocateCharVec(5000000);
  njob=countKUorWA(fp);
  searchKUorWA(fp);
  nlenmax = 0;
  *nlenminpt = 99999999;
  atgcnum = 0;
  total = 0;
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    myfgets(tmpname, 5000000 - 1, fp);
    fprintf(stdout, "%s\n", tmpname);
    tmpseq=load1SeqWithoutName_realloc_casepreserve(fp);
    tmp=countnogaplen(tmpseq);
    fprintf(stdout, "%d\n", tmp);
    if(!(nlenmax >= tmp))
      nlenmax = tmp;

    if(!(tmp >= *nlenminpt))
      *nlenminpt = tmp;

    signed int return_value_countATGC_1;
    return_value_countATGC_1=countATGC(tmpseq, &nsite);
    atgcnum = atgcnum + return_value_countATGC_1;
    total = total + nsite;
    free((void *)tmpseq);
  }
  free((void *)tmpname);
  atgcfreq = (double)atgcnum / (double)total;
  fprintf(stderr, "##### atgcfreq = %f\n", atgcfreq);
  if(dorp == 100009)
  {
    if(atgcfreq > 0.75)
    {
      dorp = 100;
      upperCase = -1;
    }

    else
    {
      dorp = 112;
      upperCase = 0;
    }
  }

}

// getnumlen_nogap_outallreg_web
// file io.c line 2188
extern void getnumlen_nogap_outallreg_web(struct _IO_FILE *fp, struct _IO_FILE *ofp, signed int *nlenminpt, signed int *isalignedpt)
{
  signed int total;
  signed int nsite = 0;
  signed int atgcnum;
  signed int alnlen = 0;
  signed int alnlen_prev;
  signed int i;
  signed int tmp;
  signed int lennormalchar;
  char *tmpseq;
  char *tmpname;
  char *tmpname2;
  double atgcfreq;
  tmpname=AllocateCharVec(5000000);
  tmpname2=AllocateCharVec(5000000);
  njob=countKUorWA(fp);
  searchKUorWA(fp);
  nlenmax = 0;
  *nlenminpt = 99999999;
  atgcnum = 0;
  total = 0;
  alnlen_prev = -1;
  *isalignedpt = 1;
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    myfgets(tmpname, 5000000 - 1, fp);
    tmpname2[(signed long int)0] = tmpname[(signed long int)0];
    escapehtml(tmpname2 + (signed long int)1, tmpname + (signed long int)1, 5000000);
    tmpseq=load1SeqWithoutName_realloc_casepreserve(fp);
    tmp=countnogaplen(tmpseq);
    if(!(nlenmax >= tmp))
      nlenmax = tmp;

    if(!(tmp >= *nlenminpt))
      *nlenminpt = tmp;

    signed int return_value_countATGC_1;
    return_value_countATGC_1=countATGC(tmpseq, &nsite);
    atgcnum = atgcnum + return_value_countATGC_1;
    total = total + nsite;
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(tmpseq);
    alnlen = (signed int)return_value_strlen_2;
    if(i >= 1 && !(alnlen_prev == alnlen))
      *isalignedpt = 0;

    alnlen_prev = alnlen;
    atgcfreq = (double)atgcnum / (double)total;
    if(atgcfreq > 0.75)
    {
      dorp = 100;
      upperCase = -1;
    }

    else
    {
      dorp = 112;
      upperCase = 0;
    }
    if(dorp == 100)
      lennormalchar=countnormalletters(tmpseq, "atgcuATGCU");

    else
      lennormalchar=countnormalletters(tmpseq, "ARNDCQEGHILKMFPSTWYVarndcqeghilkmfpstwyv");
    free((void *)tmpseq);
    fprintf(ofp, " <label for='s%d'><span id='ss%d'><input type='checkbox' id='s%d' name='s%d' checked></span> <input type='text' class='ll' id='ll%d' style='display:none' size='6' value='%d' readonly='readonly'>%s</label>\n", i, i, i, i, i, lennormalchar, tmpname2);
    fprintf(ofp, "<span id='t%d-0' style='display:none'>", i);
    fprintf(ofp, " <a href='javascript:void(0)' onclick='ddcycle(this.form,\"t%d\")'>+reg</a>", i);
    fprintf(ofp, " Begin:<input type='text' name='b%d-0' size='8' value='1' class='ie'> End:<input type='text' name='e%d-0' size='8' value='%d' class='ie'>", i, i, tmp);
    if(dorp == 100)
      fprintf(ofp, " <label for='r%d-0'><input type='checkbox' name='r%d-0' id='r%d-0'>Reverse</label>", i, i, i);

    fprintf(ofp, "\n</span>");
    fprintf(ofp, "<span id='t%d-1' style='display:none'>", i);
    fprintf(ofp, "      Begin:<input type='text' name='b%d-1' size='8' value='' class='ie'> End:<input type='text' name='e%d-1' size='8' value='' class='ie'>", i, i);
    if(dorp == 100)
      fprintf(ofp, " <label for='r%d-1'><input type='checkbox' name='r%d-1' id='r%d-1'>Reverse</label>", i, i, i);

    fprintf(ofp, "\n</span>");
    fprintf(ofp, "<span id='t%d-2' style='display:none'>", i);
    fprintf(ofp, "      Begin:<input type='text' name='b%d-2' size='8' value='' class='ie'> End:<input type='text' name='e%d-2' size='8' value='' class='ie'>", i, i);
    if(dorp == 100)
      fprintf(ofp, " <label for='r%d-2'><input type='checkbox' name='r%d-2' id='r%d-2'>Reverse</label>", i, i, i);

    fprintf(ofp, "\n</span>");
    fprintf(ofp, "<span id='t%d-3' style='display:none'>", i);
    fprintf(ofp, "      Begin:<input type='text' name='b%d-3' size='8' value='' class='ie'> End:<input type='text' name='e%d-3' size='8' value='' class='ie'>", i, i);
    if(dorp == 100)
      fprintf(ofp, " <label for='r%d-3'><input type='checkbox' name='r%d-3' id='r%d-3'>Reverse</label>", i, i, i);

    fprintf(ofp, "\n</span>");
    fprintf(ofp, "<span id='t%d-4' style='display:none'>", i);
    fprintf(ofp, "      Begin:<input type='text' name='b%d-4' size='8' value='' class='ie'> End:<input type='text' name='e%d-4' size='8' value='' class='ie'>", i, i);
    if(dorp == 100)
      fprintf(ofp, " <label for='r%d-4'><input type='checkbox' name='r%d-4' id='r%d-4'>Reverse</label>", i, i, i);

    fprintf(ofp, "\n</span>");
  }
  free((void *)tmpname);
  free((void *)tmpname2);
  atgcfreq = (double)atgcnum / (double)total;
  fprintf(stderr, "##### atgcfreq = %f\n", atgcfreq);
  if(atgcfreq > 0.75)
  {
    dorp = 100;
    upperCase = -1;
  }

  else
  {
    dorp = 112;
    upperCase = 0;
  }
  fprintf(ofp, "\n");
  if(!(*isalignedpt == 0))
  {
    fprintf(ofp, "<span id='tall-0' style='display:none'>");
    fprintf(ofp, "Cut the alignment\n");
    fprintf(ofp, " <a href='javascript:void(0)' onclick='ddcycle(this.form,\"tall\")'>+reg</a>");
    fprintf(ofp, " Begin:<input type='text' name='ball-0' size='8' value='1'> End:<input type='text' name='eall-0' size='8' value='%d'>", alnlen);
    if(dorp == 100)
      fprintf(ofp, " <label for='rall-0'><input type='checkbox' name='rall-0' id='rall-0'>Reverse</label>");

    fprintf(ofp, "  Alignment length:<input type='text' name='lall' size='8' value='%d' readonly='readonly'>", alnlen);
    fprintf(ofp, "\n</span>");
    fprintf(ofp, "<span id='tall-1' style='display:none'>");
    fprintf(ofp, "      Begin:<input type='text' name='ball-1' size='8' value=''> End:<input type='text' name='eall-1' size='8' value=''>");
    if(dorp == 100)
      fprintf(ofp, " <label for='rall-1'><input type='checkbox' name='rall-1' id='rall-1'>Reverse</label>");

    fprintf(ofp, "\n</span>");
    fprintf(ofp, "<span id='tall-2' style='display:none'>");
    fprintf(ofp, "      Begin:<input type='text' name='ball-2' size='8' value=''> End:<input type='text' name='eall-1' size='8' value=''>");
    if(dorp == 100)
      fprintf(ofp, " <label for='rall-2'><input type='checkbox' name='rall-2' id='rall-2'>Reverse</label>");

    fprintf(ofp, "\n</span>");
    fprintf(ofp, "<span id='tall-3' style='display:none'>");
    fprintf(ofp, "      Begin:<input type='text' name='ball-3' size='8' value=''> End:<input type='text' name='eall-1' size='8' value=''>");
    if(dorp == 100)
      fprintf(ofp, " <label for='rall-3'><input type='checkbox' name='rall-3' id='rall-3'>Reverse</label>");

    fprintf(ofp, "\n</span>");
    fprintf(ofp, "<span id='tall-4' style='display:none'>");
    fprintf(ofp, "      Begin:<input type='text' name='ball-4' size='8' value=''> End:<input type='text' name='eall-1' size='8' value=''>");
    if(dorp == 100)
      fprintf(ofp, " <label for='rall-4'><input type='checkbox' name='rall-4' id='rall-4'>Reverse</label>");

    fprintf(ofp, "\n</span>");
  }

}

// includemember
// file mltaln9.c line 9423
extern signed int includemember(signed int *mem, signed int *cand)
{
  signed int i;
  signed int j;
  i = 0;
  for( ; mem[(signed long int)i] >= 0; i = i + 1)
  {
    j = 0;
    for( ; cand[(signed long int)j] >= 0; j = j + 1)
      if(mem[(signed long int)i] == cand[(signed long int)j])
        break;

    if(cand[(signed long int)j] == -1)
      return 0;

  }
  return 1;
}

// increaseintergroupdistancesfullmtx
// file mltaln9.c line 1598
static void increaseintergroupdistancesfullmtx(double **eff, signed int ngroup, signed int **groups, signed int nseq)
{
  signed int nwarned = 0;
  signed int i;
  signed int k;
  signed int m;
  signed int s1;
  signed int s2;
  signed int sl;
  signed int ss;
  signed int *others;
  signed int *tft;
  double increaseintergroupdistancesfullmtx__1__maxdist;
  double *dptr;
  double dtmp;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)nseq, sizeof(signed int *) /*8ul*/ );
  tft = (signed int *)return_value_calloc_1;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)nseq, sizeof(signed int *) /*8ul*/ );
  others = (signed int *)return_value_calloc_2;
  reporterr("\n");
  i = 0;
  signed int tmp_post_3;
  signed int tmp_post_4;
  for( ; !(i >= ngroup); i = i + 1)
    if(!(groups[(signed long int)i][1l] == -1))
    {
      m = 0;
      for( ; !(m >= nseq); m = m + 1)
        tft[(signed long int)m] = 0;
      m = 0;
      do
      {
        s1 = groups[(signed long int)i][(signed long int)m];
        if(!(s1 >= 0))
          break;

        tft[(signed long int)s1] = 1;
        m = m + 1;
      }
      while((_Bool)1);
      m = 0;
      k = 0;
      for( ; !(m >= nseq); m = m + 1)
        if(tft[(signed long int)m] == 0)
        {
          tmp_post_3 = k;
          k = k + 1;
          others[(signed long int)tmp_post_3] = m;
        }

      others[(signed long int)k] = -1;
      increaseintergroupdistancesfullmtx__1__maxdist = 0.0;
      m = 1;
      do
      {
        s2 = groups[(signed long int)i][(signed long int)m];
        if(!(s2 >= 0))
          break;

        k = 0;
        do
        {
          s1 = groups[(signed long int)i][(signed long int)k];
          if(!(s1 >= 0) || k >= m)
            break;

          if(!(s1 >= s2))
          {
            sl = s2;
            ss = s1;
          }

          else
          {
            sl = s1;
            ss = s2;
          }
          dtmp = eff[(signed long int)ss][(signed long int)sl];
          if(dtmp > increaseintergroupdistancesfullmtx__1__maxdist)
            increaseintergroupdistancesfullmtx__1__maxdist = dtmp;

          k = k + 1;
        }
        while((_Bool)1);
        m = m + 1;
      }
      while((_Bool)1);
      m = 0;
      do
      {
        s2 = groups[(signed long int)i][(signed long int)m];
        if(!(s2 >= 0))
          break;

        k = 0;
        do
        {
          s1 = others[(signed long int)k];
          if(!(s1 >= 0))
            break;

          if(!(s1 >= s2))
          {
            sl = s2;
            ss = s1;
          }

          else
          {
            sl = s1;
            ss = s2;
          }
          dptr = eff[(signed long int)ss] + (signed long int)sl;
          if(*dptr < increaseintergroupdistancesfullmtx__1__maxdist)
          {
            if(*dptr < 0.5)
            {
              tmp_post_4 = nwarned;
              nwarned = nwarned + 1;
              if(!(tmp_post_4 >= 100))
                reporterr("# Sequences %d and %d seem to be closely related, but are not in the same sub MSA (%d) in your setting.\n", s2 + 1, s1 + 1, i + 1);

            }

            *dptr = increaseintergroupdistancesfullmtx__1__maxdist;
          }

          k = k + 1;
        }
        while((_Bool)1);
        m = m + 1;
      }
      while((_Bool)1);
    }

  if(nwarned >= 101)
    reporterr("# Sequenc.... (more pairs)\n");

  free((void *)tft);
  free((void *)others);
}

// increaseintergroupdistanceshalfmtx
// file mltaln9.c line 1532
static void increaseintergroupdistanceshalfmtx(double **eff, signed int ngroup, signed int **groups, signed int nseq)
{
  signed int nwarned = 0;
  signed int i;
  signed int k;
  signed int m;
  signed int s1;
  signed int s2;
  signed int sl;
  signed int ss;
  signed int *others;
  signed int *tft;
  double increaseintergroupdistanceshalfmtx__1__maxdist;
  double *dptr;
  double dtmp;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)nseq, sizeof(signed int *) /*8ul*/ );
  tft = (signed int *)return_value_calloc_1;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)nseq, sizeof(signed int *) /*8ul*/ );
  others = (signed int *)return_value_calloc_2;
  reporterr("\n");
  i = 0;
  signed int tmp_post_3;
  signed int tmp_post_4;
  for( ; !(i >= ngroup); i = i + 1)
    if(!(groups[(signed long int)i][1l] == -1))
    {
      m = 0;
      for( ; !(m >= nseq); m = m + 1)
        tft[(signed long int)m] = 0;
      m = 0;
      do
      {
        s1 = groups[(signed long int)i][(signed long int)m];
        if(!(s1 >= 0))
          break;

        tft[(signed long int)s1] = 1;
        m = m + 1;
      }
      while((_Bool)1);
      m = 0;
      k = 0;
      for( ; !(m >= nseq); m = m + 1)
        if(tft[(signed long int)m] == 0)
        {
          tmp_post_3 = k;
          k = k + 1;
          others[(signed long int)tmp_post_3] = m;
        }

      others[(signed long int)k] = -1;
      increaseintergroupdistanceshalfmtx__1__maxdist = 0.0;
      m = 1;
      do
      {
        s2 = groups[(signed long int)i][(signed long int)m];
        if(!(s2 >= 0))
          break;

        k = 0;
        do
        {
          s1 = groups[(signed long int)i][(signed long int)k];
          if(!(s1 >= 0) || k >= m)
            break;

          if(!(s1 >= s2))
          {
            sl = s2;
            ss = s1;
          }

          else
          {
            sl = s1;
            ss = s2;
          }
          dtmp = eff[(signed long int)ss][(signed long int)(sl - ss)];
          if(dtmp > increaseintergroupdistanceshalfmtx__1__maxdist)
            increaseintergroupdistanceshalfmtx__1__maxdist = dtmp;

          k = k + 1;
        }
        while((_Bool)1);
        m = m + 1;
      }
      while((_Bool)1);
      m = 0;
      do
      {
        s2 = groups[(signed long int)i][(signed long int)m];
        if(!(s2 >= 0))
          break;

        k = 0;
        do
        {
          s1 = others[(signed long int)k];
          if(!(s1 >= 0))
            break;

          if(!(s1 >= s2))
          {
            sl = s2;
            ss = s1;
          }

          else
          {
            sl = s1;
            ss = s2;
          }
          dptr = (eff[(signed long int)ss] + (signed long int)sl) - (signed long int)ss;
          if(*dptr < increaseintergroupdistanceshalfmtx__1__maxdist)
          {
            if(*dptr < 0.5)
            {
              tmp_post_4 = nwarned;
              nwarned = nwarned + 1;
              if(!(tmp_post_4 >= 100))
                reporterr("# Sequences %d and %d seem to be closely related, but are not in the same sub MSA (%d) in your setting.\n", s2 + 1, s1 + 1, i + 1);

            }

            *dptr = increaseintergroupdistanceshalfmtx__1__maxdist;
          }

          k = k + 1;
        }
        while((_Bool)1);
        m = m + 1;
      }
      while((_Bool)1);
    }

  if(nwarned >= 101)
    reporterr("# Sequenc.... (more pairs)\n");

  free((void *)tft);
  free((void *)others);
}

// initFiles
// file io.c line 4086
extern void initFiles(void)
{
  char pname[100l];
  if(!(ppid == 0))
    sprintf(pname, "/tmp/pre.%d", ppid);

  else
    sprintf(pname, "pre");
  prep_g=fopen(pname, "w");
  if(prep_g == ((struct _IO_FILE *)NULL))
    ErrorExit("Cannot open pre");

  trap_g=fopen("trace", "w");
  if(trap_g == ((struct _IO_FILE *)NULL))
    ErrorExit("cannot open trace");

  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  fprintf(trap_g, "PID = %d\n", return_value_getpid_1);
  fflush(trap_g);
}

// initSignalSM
// file io.c line 4063
extern void initSignalSM(void)
{
  if(ppid == 0)
    signalSM = (char *)(void *)0;

}

// initglobalvariables
// file defs.c line 130
extern void initglobalvariables()
{
  commonAlloc1 = 0;
  commonAlloc2 = 0;
  commonIP = (signed int **)(void *)0;
  commonJP = (signed int **)(void *)0;
  nthread = 1;
  randomseed = 0;
  parallelizationstrategy = 2;
  trywarp = 0;
  penalty_shift_factor = 100.0;
  outgap = 1;
  addprofile = 1;
  scoreout = 0;
  outnumber = 0;
  legacygapcost = 0;
  consweight_multi = 1.0;
  consweight_rna = 0.0;
  RNAscoremtx = (char)110;
  newgapstr = "-";
  nalphabets = 26;
  nscoredalphabets = 20;
  specificityconsideration = 0.0;
  ndistclass = 10;
  maxdistclass = -1;
  gmsg = 0;
}

// input_new
// file io.c line 1015
extern double input_new(struct _IO_FILE *fp, signed int d)
{
  char mojiretsu[10l];
  signed int i;
  signed int c;
  c=_IO_getc(fp);
  if(!(c == 10))
    ungetc(c, fp);

  i = 0;
  signed int return_value__IO_getc_1;
  for( ; !(i >= d); i = i + 1)
  {
    return_value__IO_getc_1=_IO_getc(fp);
    mojiretsu[(signed long int)i] = (char)return_value__IO_getc_1;
  }
  mojiretsu[(signed long int)i] = (char)0;
  double return_value_atof_2;
  return_value_atof_2=atof(mojiretsu);
  return return_value_atof_2;
}

// intcat
// file mltaln9.c line 8767
extern void intcat(signed int *s1, signed int *s2)
{
  for( ; !(*s1 == -1); s1 = s1 + 1l)
    ;
  signed int *tmp_post_1;
  signed int *tmp_post_2;
  for( ; !(*s2 == -1); *tmp_post_1 = *tmp_post_2)
  {
    tmp_post_1 = s1;
    s1 = s1 + 1l;
    tmp_post_2 = s2;
    s2 = s2 + 1l;
  }
  *s1 = -1;
}

// intcpy
// file mltaln9.c line 8778
extern void intcpy(signed int *s1, signed int *s2)
{
  signed int *tmp_post_1;
  signed int *tmp_post_2;
  for( ; !(*s2 == -1); *tmp_post_1 = *tmp_post_2)
  {
    tmp_post_1 = s1;
    s1 = s1 + 1l;
    tmp_post_2 = s2;
    s2 = s2 + 1l;
  }
  *s1 = -1;
}

// intergroup_score
// file mltaln9.c line 415
extern void intergroup_score(char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value)
{
  signed int i;
  signed int j;
  signed int k;
  signed int len2 = len - 2;
  unsigned char ms1;
  unsigned char ms2;
  double tmpscore;
  char *mseq1;
  char *mseq2;
  double efficient;
  double gaptmpscore;
  double gapscore = 0.0;
  *value = 0.0;
  i = 0;
  for( ; !(i >= clus1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= clus2); j = j + 1)
    {
      efficient = eff1[(signed long int)i] * eff2[(signed long int)j];
      mseq1 = seq1[(signed long int)i];
      mseq2 = seq2[(signed long int)j];
      tmpscore = 0.0;
      gaptmpscore = 0.0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        ms1 = (unsigned char)mseq1[(signed long int)k];
        ms2 = (unsigned char)mseq2[(signed long int)k];
        if(!((signed int)ms1 == 45) || !((signed int)ms2 == 45))
        {
          tmpscore = tmpscore + (double)amino_dis_consweight_multi[(signed long int)ms1][(signed long int)ms2];
          if((signed int)ms1 == 45)
          {
            tmpscore = tmpscore + (double)penalty;
            gaptmpscore = gaptmpscore + (double)penalty;
            tmpscore = tmpscore + (double)amino_dis_consweight_multi[(signed long int)ms1][(signed long int)ms2];
            do
            {
              k = k + 1;
              ms1 = (unsigned char)mseq1[(signed long int)k];
              if(!((signed int)ms1 == 45))
                break;

              tmpscore = tmpscore + (double)amino_dis_consweight_multi[(signed long int)ms1][(signed long int)ms2];
            }
            while((_Bool)1);
            k = k - 1;
            if(!(len2 >= k))
              break;

          }

          else
            if((signed int)ms2 == 45)
            {
              tmpscore = tmpscore + (double)penalty;
              gaptmpscore = gaptmpscore + (double)penalty;
              tmpscore = tmpscore + (double)amino_dis_consweight_multi[(signed long int)ms1][(signed long int)ms2];
              do
              {
                k = k + 1;
                ms2 = (unsigned char)mseq2[(signed long int)k];
                if(!((signed int)ms2 == 45))
                  break;

                tmpscore = tmpscore + (double)amino_dis_consweight_multi[(signed long int)ms1][(signed long int)ms2];
              }
              while((_Bool)1);
              k = k - 1;
              if(!(len2 >= k))
                break;

            }

        }

      }
      *value = *value + (double)tmpscore * (double)efficient;
      gapscore = gapscore + (double)gaptmpscore * (double)efficient;
    }
  }
}

// intergroup_score_consweight
// file mltaln9.c line 130
void intergroup_score_consweight(char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value)
{
  signed int i;
  signed int j;
  signed int k;
  signed int len2 = len - 2;
  unsigned char ms1;
  unsigned char ms2;
  double tmpscore;
  char *mseq1;
  char *mseq2;
  double efficient;
  *value = 0.0;
  i = 0;
  for( ; !(i >= clus1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= clus2); j = j + 1)
    {
      efficient = eff1[(signed long int)i] * eff2[(signed long int)j];
      mseq1 = seq1[(signed long int)i];
      mseq2 = seq2[(signed long int)j];
      tmpscore = 0.0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        ms1 = (unsigned char)mseq1[(signed long int)k];
        ms2 = (unsigned char)mseq2[(signed long int)k];
        if(!((signed int)ms1 == 45) || !((signed int)ms2 == 45))
        {
          tmpscore = tmpscore + (double)amino_dis_consweight_multi[(signed long int)ms1][(signed long int)ms2];
          if((signed int)ms1 == 45)
          {
            tmpscore = tmpscore + (double)penalty;
            tmpscore = tmpscore + (double)amino_dis_consweight_multi[(signed long int)ms1][(signed long int)ms2];
            do
            {
              k = k + 1;
              ms1 = (unsigned char)mseq1[(signed long int)k];
              if(!((signed int)ms1 == 45))
                break;

            }
            while((_Bool)1);
            k = k - 1;
            if(!(len2 >= k))
              break;

          }

          else
            if((signed int)ms2 == 45)
            {
              tmpscore = tmpscore + (double)penalty;
              tmpscore = tmpscore + (double)amino_dis_consweight_multi[(signed long int)ms1][(signed long int)ms2];
              do
              {
                k = k + 1;
                ms2 = (unsigned char)mseq2[(signed long int)k];
                if(!((signed int)ms2 == 45))
                  break;

              }
              while((_Bool)1);
              k = k - 1;
              if(!(len2 >= k))
                break;

            }

        }

      }
      *value = *value + (double)tmpscore * (double)efficient;
    }
  }
}

// intergroup_score_dynmtx
// file mltaln9.c line 339
void intergroup_score_dynmtx(double **offsetmtx, signed int (*scoringmtx)[128l], char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value)
{
  signed int i;
  signed int j;
  signed int k;
  signed int len2 = len - 2;
  signed int ms1;
  signed int ms2;
  double tmpscore;
  char *mseq1;
  char *mseq2;
  double efficient;
  double gaptmpscore;
  double gapscore = 0.0;
  reporterr("\n intergroup_score_dynmtx ...");
  *value = 0.0;
  i = 0;
  for( ; !(i >= clus1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= clus2); j = j + 1)
    {
      efficient = eff1[(signed long int)i] * eff2[(signed long int)j];
      mseq1 = seq1[(signed long int)i];
      mseq2 = seq2[(signed long int)j];
      tmpscore = 0.0;
      gaptmpscore = 0.0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        ms1 = (signed int)mseq1[(signed long int)k];
        ms2 = (signed int)mseq2[(signed long int)k];
        if(!(ms1 == 45) || !(ms2 == 45))
        {
          tmpscore = tmpscore + (double)scoringmtx[(signed long int)ms1][(signed long int)ms2] + offsetmtx[(signed long int)i][(signed long int)j] * (double)600;
          if(ms1 == 45)
          {
            tmpscore = tmpscore + (double)penalty;
            gaptmpscore = gaptmpscore + (double)penalty;
            tmpscore = tmpscore + (double)scoringmtx[(signed long int)ms1][(signed long int)ms2] + offsetmtx[(signed long int)i][(signed long int)j] * (double)600;
            do
            {
              k = k + 1;
              ms1 = (signed int)mseq1[(signed long int)k];
              if(!(ms1 == 45))
                break;

              tmpscore = tmpscore + (double)scoringmtx[(signed long int)ms1][(signed long int)ms2] + offsetmtx[(signed long int)i][(signed long int)j] * (double)600;
            }
            while((_Bool)1);
            k = k - 1;
            if(!(len2 >= k))
              break;

          }

          else
            if(ms2 == 45)
            {
              tmpscore = tmpscore + (double)penalty;
              gaptmpscore = gaptmpscore + (double)penalty;
              tmpscore = tmpscore + (double)scoringmtx[(signed long int)ms1][(signed long int)ms2] + offsetmtx[(signed long int)i][(signed long int)j] * (double)600;
              do
              {
                k = k + 1;
                ms2 = (signed int)mseq2[(signed long int)k];
                if(!(ms2 == 45))
                  break;

                tmpscore = tmpscore + (double)scoringmtx[(signed long int)ms1][(signed long int)ms2] + offsetmtx[(signed long int)i][(signed long int)j] * (double)600;
              }
              while((_Bool)1);
              k = k - 1;
              if(!(len2 >= k))
                break;

            }

        }

      }
      *value = *value + (double)tmpscore * (double)efficient;
      gapscore = gapscore + (double)gaptmpscore * (double)efficient;
    }
  }
  reporterr("done.");
}

// intergroup_score_gapnomi
// file mltaln9.c line 195
extern void intergroup_score_gapnomi(char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value)
{
  signed int i;
  signed int j;
  signed int k;
  signed int len2 = len - 2;
  signed int ms1;
  signed int ms2;
  double tmpscore;
  char *mseq1;
  char *mseq2;
  double efficient;
  *value = 0.0;
  i = 0;
  for( ; !(i >= clus1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= clus2); j = j + 1)
    {
      efficient = eff1[(signed long int)i] * eff2[(signed long int)j];
      mseq1 = seq1[(signed long int)i];
      mseq2 = seq2[(signed long int)j];
      tmpscore = 0.0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        ms1 = (signed int)mseq1[(signed long int)k];
        ms2 = (signed int)mseq2[(signed long int)k];
        if(!(ms1 == 45) || !(ms2 == 45))
        {
          if(ms1 == 45)
          {
            tmpscore = tmpscore + (double)penalty;
            do
            {
              k = k + 1;
              ms1 = (signed int)mseq1[(signed long int)k];
              if(!(ms1 == 45))
                break;

            }
            while((_Bool)1);
            k = k - 1;
            if(!(len2 >= k))
              break;

          }

          else
            if(ms2 == 45)
            {
              tmpscore = tmpscore + (double)penalty;
              do
              {
                k = k + 1;
                ms2 = (signed int)mseq2[(signed long int)k];
                if(!(ms2 == 45))
                  break;

              }
              while((_Bool)1);
              k = k - 1;
              if(!(len2 >= k))
                break;

            }

        }

      }
      *value = *value + (double)tmpscore * (double)efficient;
    }
  }
}

// intergroup_score_multimtx
// file mltaln9.c line 261
extern void intergroup_score_multimtx(signed int **whichmtx, double ***scoringmatrices, char **seq1, char **seq2, double *eff1, double *eff2, signed int clus1, signed int clus2, signed int len, double *value)
{
  signed int i;
  signed int j;
  signed int k;
  signed int c;
  signed int len2 = len - 2;
  signed int mn1;
  signed int mn2;
  double tmpscore;
  char *mseq1;
  char *mseq2;
  double efficient;
  signed int gapnum = amino_n[(signed long int)45];
  double gaptmpscore;
  double gapscore = 0.0;
  *value = 0.0;
  i = 0;
  for( ; !(i >= clus1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= clus2); j = j + 1)
    {
      efficient = eff1[(signed long int)i] * eff2[(signed long int)j];
      c = whichmtx[(signed long int)i][(signed long int)j];
      mseq1 = seq1[(signed long int)i];
      mseq2 = seq2[(signed long int)j];
      tmpscore = 0.0;
      gaptmpscore = 0.0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        mn1 = amino_n[(signed long int)(unsigned char)mseq1[(signed long int)k]];
        mn2 = amino_n[(signed long int)(unsigned char)mseq2[(signed long int)k]];
        if(!(mn1 == gapnum) || !(mn2 == gapnum))
        {
          tmpscore = tmpscore + (double)scoringmatrices[(signed long int)c][(signed long int)mn1][(signed long int)mn2];
          if(mn1 == gapnum)
          {
            tmpscore = tmpscore + (double)penalty;
            gaptmpscore = gaptmpscore + (double)penalty;
            tmpscore = tmpscore + (double)scoringmatrices[(signed long int)c][(signed long int)mn1][(signed long int)mn2];
            do
            {
              k = k + 1;
              mn1 = amino_n[(signed long int)(unsigned char)mseq1[(signed long int)k]];
              if(!(mn1 == gapnum))
                break;

              tmpscore = tmpscore + (double)scoringmatrices[(signed long int)c][(signed long int)mn1][(signed long int)mn2];
            }
            while((_Bool)1);
            k = k - 1;
            if(!(len2 >= k))
              break;

          }

          else
            if(mn2 == gapnum)
            {
              tmpscore = tmpscore + (double)penalty;
              gaptmpscore = gaptmpscore + (double)penalty;
              tmpscore = tmpscore + (double)scoringmatrices[(signed long int)c][(signed long int)mn1][(signed long int)mn2];
              do
              {
                k = k + 1;
                mn2 = amino_n[(signed long int)(unsigned char)mseq2[(signed long int)k]];
                if(!(mn2 == gapnum))
                  break;

                tmpscore = tmpscore + (double)scoringmatrices[(signed long int)c][(signed long int)mn1][(signed long int)mn2];
              }
              while((_Bool)1);
              k = k - 1;
              if(!(len2 >= k))
                break;

            }

        }

      }
      *value = *value + (double)tmpscore * (double)efficient;
      gapscore = gapscore + (double)gaptmpscore * (double)efficient;
    }
  }
}

// intlen
// file mltaln9.c line 34
extern signed int intlen(signed int *num)
{
  signed int value = 0;
  signed int *tmp_post_1;
  do
  {
    tmp_post_1 = num;
    num = num + 1l;
    if(*tmp_post_1 == -1)
      break;

    value = value + 1;
  }
  while((_Bool)1);
  return value;
}

// intncpy
// file mltaln9.c line 8788
extern void intncpy(signed int *s1, signed int *s2, signed int n)
{
  signed int tmp_post_1;
  signed int *tmp_post_2;
  signed int *tmp_post_3;
  do
  {
    tmp_post_1 = n;
    n = n - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = s1;
    s1 = s1 + 1l;
    tmp_post_3 = s2;
    s2 = s2 + 1l;
    *tmp_post_2 = *tmp_post_3;
  }
  while((_Bool)1);
}

// ipower
// file mltaln9.c line 4923
extern double ipower(double x, signed int n)
{
  double r = (double)1;
  for( ; !(n == 0); n = n >> 1)
  {
    if(!((1 & n) == 0))
      r = r * x;

    x = x * x;
  }
  return r;
}

// isaligned
// file mltaln9.c line 6035
extern signed int isaligned(signed int nseq, char **seq)
{
  signed int i;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  i = 1;
  for( ; !(i >= nseq); i = i + 1)
  {
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(seq[(signed long int)i]);
    if(!(return_value_strlen_2 == (unsigned long int)len))
      return 0;

  }
  return 1;
}

// isallgap
// file mltaln9.c line 5694
extern signed int isallgap(char *seq)
{
  for( ; !((signed int)*seq == 0); seq = seq + 1l)
    if(!((signed int)*seq == 45))
      return 0;

  return 1;
}

// kake2hiku
// file io.c line 1295
extern void kake2hiku(char *str)
{
  char *tmp_post_1;
  while((_Bool)1)
  {
    if((signed int)*str == 42)
      *str = (char)45;

    tmp_post_1 = str;
    str = str + 1l;
    if(*tmp_post_1 == 0)
      break;

  }
}

// lastmem
// file mltaln9.c line 8805
static signed int lastmem(signed int *s)
{
  signed int *tmp_post_1;
  do
  {
    tmp_post_1 = s;
    s = s + 1l;
    if(*tmp_post_1 == -1)
      break;

  }
  while((_Bool)1);
  return *(s - (signed long int)2);
}

// load1SeqWithoutName_new
// file io.c line 1388
extern signed int load1SeqWithoutName_new(struct _IO_FILE *fpp, char *cbuf)
{
  signed int c;
  signed int b;
  char *bk = cbuf;
  b = 10;
  char *tmp_post_1;
  do
  {
    c=_IO_getc(fpp);
    if(c == -1)
      break;

    if(b == 10 && (c == 62 || c == -1))
      break;

    tmp_post_1 = cbuf;
    cbuf = cbuf + 1l;
    *tmp_post_1 = (char)c;
    b = c;
  }
  while((_Bool)1);
  ungetc(c, fpp);
  *cbuf = (char)0;
  if(dorp == 100)
    onlyAlpha_lower(bk);

  else
    onlyAlpha_upper(bk);
  kake2hiku(bk);
  return 0;
}

// load1SeqWithoutName_realloc
// file io.c line 1340
extern char * load1SeqWithoutName_realloc(struct _IO_FILE *fpp)
{
  signed int c;
  signed int b;
  char *cbuf;
  signed int size = 5000000;
  char *val;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)(size + 1) * sizeof(char) /*1ul*/ );
  val = (char *)return_value_malloc_1;
  cbuf = val;
  b = 10;
  char *tmp_post_2;
  do
  {
    c=_IO_getc(fpp);
    if(c == -1)
      break;

    if(b == 10 && (c == 62 || c == -1))
      break;

    tmp_post_2 = cbuf;
    cbuf = cbuf + 1l;
    *tmp_post_2 = (char)c;
    if(cbuf - val == (signed long int)size)
    {
      size = size + 5000000;
      fprintf(stderr, "reallocating...\n");
      void *return_value_realloc_3;
      return_value_realloc_3=realloc((void *)val, (unsigned long int)(size + 1) * sizeof(char) /*1ul*/ );
      val = (char *)return_value_realloc_3;
      if(val == ((char *)NULL))
      {
        fprintf(stderr, "Allocation error in load1SeqWithoutName_realloc \n");
        exit(1);
      }

      fprintf(stderr, "done.\n");
      cbuf = (val + (signed long int)size) - (signed long int)5000000;
    }

    b = c;
  }
  while((_Bool)1);
  ungetc(c, fpp);
  *cbuf = (char)0;
  if(nblosum == -2)
    charfilter((unsigned char *)val);

  else
  {
    if(dorp == 100)
      onlyAlpha_lower(val);

    else
      onlyAlpha_upper(val);
    kake2hiku(val);
  }
  return val;
}

// load1SeqWithoutName_realloc_casepreserve
// file io.c line 1302
extern char * load1SeqWithoutName_realloc_casepreserve(struct _IO_FILE *fpp)
{
  signed int c;
  signed int b;
  char *cbuf;
  signed int size = 5000000;
  char *val;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)(size + 1) * sizeof(char) /*1ul*/ );
  val = (char *)return_value_malloc_1;
  cbuf = val;
  b = 10;
  char *tmp_post_2;
  do
  {
    c=_IO_getc(fpp);
    if(c == -1)
      break;

    if(b == 10 && (c == 62 || c == -1))
      break;

    tmp_post_2 = cbuf;
    cbuf = cbuf + 1l;
    *tmp_post_2 = (char)c;
    if(cbuf - val == (signed long int)size)
    {
      size = size + 5000000;
      fprintf(stderr, "reallocating...\n");
      void *return_value_realloc_3;
      return_value_realloc_3=realloc((void *)val, (unsigned long int)(size + 1) * sizeof(char) /*1ul*/ );
      val = (char *)return_value_realloc_3;
      if(val == ((char *)NULL))
      {
        fprintf(stderr, "Allocation error in load1SeqWithoutName_realloc \n");
        exit(1);
      }

      fprintf(stderr, "done.\n");
      cbuf = (val + (signed long int)size) - (signed long int)5000000;
    }

    b = c;
  }
  while((_Bool)1);
  ungetc(c, fpp);
  *cbuf = (char)0;
  charfilter((unsigned char *)val);
  return val;
}

// loadaamtx
// file io.c line 4833
extern double * loadaamtx(void)
{
  signed int i;
  signed int j;
  signed int k;
  signed int ii;
  signed int jj;
  double *val;
  double **raw;
  signed int *map;
  char *aaorder = "ARNDCQEGHILKMFPSTWYV";
  char *inorder;
  char *line;
  char *ptr1;
  char *ptr2;
  char *mtxfname = "_aamtx";
  struct _IO_FILE *mf;
  raw=AllocateDoubleMtx(21, 20);
  val=AllocateDoubleVec(420);
  map=AllocateIntVec(20);
  if(!(dorp == 112))
  {
    fprintf(stderr, "User-defined matrix is not supported for DNA\n");
    exit(1);
  }

  mf=fopen(mtxfname, "r");
  if(mf == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Cannot open the _aamtx file\n");
    exit(1);
  }

  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1000, sizeof(char) /*1ul*/ );
  inorder = (char *)return_value_calloc_1;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)1000, sizeof(char) /*1ul*/ );
  line = (char *)return_value_calloc_2;
  signed int return_value_feof_3;
  do
  {
    return_value_feof_3=feof(mf);
    if(!(return_value_feof_3 == 0))
      break;

    fgets(inorder, 999, mf);
    if(!((signed int)*inorder == 35))
      break;

  }
  while((_Bool)1);
  ptr2 = inorder;
  ptr1 = ptr2;
  while(!(*ptr2 == 0))
  {
    const unsigned short int **return_value___ctype_b_loc_5;
    return_value___ctype_b_loc_5=__ctype_b_loc();
    if(!((1024 & (signed int)(*return_value___ctype_b_loc_5)[(signed long int)(signed int)*ptr2]) == 0))
    {
      signed int return_value_toupper_4;
      return_value_toupper_4=toupper((signed int)*ptr2);
      *ptr1 = (char)return_value_toupper_4;
      ptr1 = ptr1 + 1l;
    }

    ptr2 = ptr2 + 1l;
  }
  inorder[(signed long int)20] = (char)0;
  i = 0;
  for( ; !(i >= 20); i = i + 1)
  {
    ptr2=strchr(inorder, (signed int)aaorder[(signed long int)i]);
    if(ptr2 == ((char *)NULL))
    {
      fprintf(stderr, "%c: not found in the first 20 letters.\n", aaorder[(signed long int)i]);
      showaamtxexample();
    }

    else
      map[(signed long int)i] = (signed int)(ptr2 - inorder);
  }
  i = 0;
  signed int return_value_feof_6;
  const unsigned short int **return_value___ctype_b_loc_7;
  do
  {
    return_value_feof_6=feof(mf);
    if(!(return_value_feof_6 == 0))
      break;

    fgets(line, 999, mf);
    if(!((signed int)*line == 35))
    {
      ptr1 = line;
      j = 0;
      for( ; i >= j; j = j + 1)
      {
        do
        {
          return_value___ctype_b_loc_7=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc_7)[(signed long int)(signed int)*ptr1]) == 0))
            break;

          if((signed int)*ptr1 == 45)
            break;

          if((signed int)*ptr1 == 46)
            break;

          ptr1 = ptr1 + 1l;
        }
        while((_Bool)1);
        raw[(signed long int)i][(signed long int)j]=atof(ptr1);
        ptr1=strchr(ptr1, 32);
        if(ptr1 == ((char *)NULL) && !(j >= i))
          showaamtxexample();

      }
      i = i + 1;
      if(i >= 20)
        break;

    }

  }
  while((_Bool)1);
  i = 0;
  for( ; !(i >= 20); i = i + 1)
    raw[(signed long int)20][(signed long int)i] = -1.0;
  signed int return_value_feof_8;
  const unsigned short int **return_value___ctype_b_loc_9;
  do
  {
    return_value_feof_8=feof(mf);
    if(!(return_value_feof_8 == 0))
      break;

    fgets(line, 999, mf);
    if((signed int)*line == 102)
    {
      ptr1 = line;
      j = 0;
      for( ; !(j >= 20); j = j + 1)
      {
        do
        {
          return_value___ctype_b_loc_9=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc_9)[(signed long int)(signed int)*ptr1]) == 0))
            break;

          if((signed int)*ptr1 == 45)
            break;

          if((signed int)*ptr1 == 46)
            break;

          ptr1 = ptr1 + 1l;
        }
        while((_Bool)1);
        raw[(signed long int)20][(signed long int)j]=atof(ptr1);
        ptr1=strchr(ptr1, 32);
        if(ptr1 == ((char *)NULL) && !(j >= 19))
          showaamtxexample();

      }
      break;
    }

  }
  while((_Bool)1);
  k = 0;
  i = 0;
  signed int tmp_if_expr_10;
  signed int tmp_if_expr_11;
  signed int tmp_post_12;
  for( ; !(i >= 20); i = i + 1)
  {
    j = 0;
    for( ; i >= j; j = j + 1)
    {
      if(!(i == j))
      {
        if(!(map[(signed long int)j] >= map[(signed long int)i]))
          tmp_if_expr_10 = map[(signed long int)i];

        else
          tmp_if_expr_10 = map[(signed long int)j];
        ii = tmp_if_expr_10;
        if(!(map[(signed long int)i] >= map[(signed long int)j]))
          tmp_if_expr_11 = map[(signed long int)i];

        else
          tmp_if_expr_11 = map[(signed long int)j];
        jj = tmp_if_expr_11;
      }

      else
      {
        jj = map[(signed long int)i];
        ii = jj;
      }
      tmp_post_12 = k;
      k = k + 1;
      val[(signed long int)tmp_post_12] = raw[(signed long int)ii][(signed long int)jj];
    }
  }
  i = 0;
  for( ; !(i >= 20); i = i + 1)
    val[(signed long int)(400 + i)] = raw[(signed long int)20][(signed long int)map[(signed long int)i]];
  fprintf(stderr, "inorder = %s\n", inorder);
  fclose(mf);
  free((void *)inorder);
  free((void *)line);
  FreeDoubleMtx(raw);
  free((void *)map);
  return val;
}

// loadtop
// file mltaln9.c line 879
extern void loadtop(signed int nseq, double **mtx, signed int ***topol, double **len, char **name, signed int *nlen, struct _Treedep *dep)
{
  signed int i;
  signed int j;
  signed int k;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  signed int *hist = (signed int *)(void *)0;
  struct _Bchain *ac = (struct _Bchain *)(void *)0;
  signed int im = -1;
  signed int jm = -1;
  struct _Bchain *acjmnext;
  struct _Bchain *acjmprev;
  signed int prevnode;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  signed int *nmemar;
  signed int nmemim;
  signed int nmemjm;
  char **tree;
  char *treetmp;
  char *nametmp;
  char *nameptr;
  char *tmpptr;
  char namec;
  struct _IO_FILE *fp;
  signed int node[2l];
  double *height;
  double clusterdist;
  signed int mpair;
  signed int mi;
  signed int mj;
  fp=fopen("_guidetree", "r");
  if(fp == ((struct _IO_FILE *)NULL))
  {
    reporterr("cannot open _guidetree\n");
    exit(1);
  }

  if(hist == ((signed int *)NULL))
  {
    hist=AllocateIntVec(nseq);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)nseq * sizeof(struct _Bchain) /*24ul*/ );
    ac = (struct _Bchain *)return_value_malloc_1;
    nmemar=AllocateIntVec(nseq);
    treetmp = (char *)(void *)0;
    nametmp=AllocateCharVec(1000);
    tree=AllocateCharMtx(nseq, 0);
    height=AllocateFloatVec(nseq);
  }

  i = 0;
  const unsigned short int **return_value___ctype_b_loc_2;
  char *return_value_strstr_3;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 999); j = j + 1)
      nametmp[(signed long int)j] = (char)0;
    j = 0;
    for( ; !(j >= 999); j = j + 1)
    {
      namec = name[(signed long int)i][(signed long int)j];
      if((signed int)namec == 0)
        break;

      else
      {
        return_value___ctype_b_loc_2=__ctype_b_loc();
        if((signed int)namec == 45 || (signed int)namec == 47 || (signed int)namec == 61 || (signed int)namec == 123 || (signed int)namec == 125 || !((8 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)namec]) == 0))
          nametmp[(signed long int)j] = namec;

        else
          nametmp[(signed long int)j] = (char)95;
      }
    }
    nametmp[(signed long int)j] = (char)0;
    if(!(outnumber == 0))
    {
      return_value_strstr_3=strstr(nametmp, "_numo_e");
      nameptr = return_value_strstr_3 + (signed long int)8;
    }

    else
      nameptr = nametmp + (signed long int)1;
    tmpptr=strstr(nameptr, "_oe_");
    if(!(tmpptr == ((char *)NULL)))
      nameptr = tmpptr + (signed long int)4;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(nametmp);
    void *return_value_calloc_5;
    return_value_calloc_5=calloc(return_value_strlen_4 + (unsigned long int)100, sizeof(char) /*1ul*/ );
    tree[(signed long int)i] = (char *)return_value_calloc_5;
    if(tree[(signed long int)i] == ((char *)NULL))
    {
      reporterr("Cannot allocate tree!\n");
      exit(1);
    }

    sprintf(tree[(signed long int)i], "\n%d_%.900s\n", i + 1, nameptr);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = ac + (signed long int)i + (signed long int)1;
    (ac + (signed long int)i)->prev = (ac + (signed long int)i) - (signed long int)1;
    (ac + (signed long int)i)->pos = i;
  }
  (ac + (signed long int)(nseq - 1))->next = (struct _Bchain *)(void *)0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    hist[(signed long int)i] = -1;
    nmemar[(signed long int)i] = 1;
  }
  reporterr("\n");
  k = 0;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  signed int *tmp_post_9;
  signed int *tmp_post_10;
  signed int *tmp_post_11;
  signed int *tmp_post_12;
  signed int *tmp_post_13;
  signed int *tmp_post_15;
  signed int *tmp_post_16;
  signed int *tmp_post_17;
  signed int *tmp_post_18;
  signed int *tmp_post_19;
  _Bool tmp_if_expr_20;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("\r% 5d / %d", k, nseq);

    len[(signed long int)k][(signed long int)1] = -1.0;
    len[(signed long int)k][(signed long int)0] = len[(signed long int)k][(signed long int)1];
    loadtreeoneline(node, len[(signed long int)k], fp);
    im = node[(signed long int)0];
    jm = node[(signed long int)1];
    if(!(nseq + -1 >= im) || !(nseq + -1 >= jm))
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = tree[(signed long int)im] == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
      tmp_if_expr_7 = (_Bool)1;

    else
      tmp_if_expr_7 = tree[(signed long int)jm] == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_7)
    {
      reporterr("\n\nCheck the guide tree.\n");
      reporterr("im=%d, jm=%d\n", im + 1, jm + 1);
      reporterr("Please use newick2mafft.rb to generate a tree file from a newick tree.\n\n");
      exit(1);
    }

    prevnode = hist[(signed long int)im];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child0 = prevnode;

    nmemim = nmemar[(signed long int)im];
    void *return_value_realloc_8;
    return_value_realloc_8=realloc((void *)topol[(signed long int)k][(signed long int)0], (unsigned long int)(nmemim + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)0] = (signed int *)return_value_realloc_8;
    intpt = topol[(signed long int)k][(signed long int)0];
    if(prevnode == -1)
    {
      tmp_post_9 = intpt;
      intpt = intpt + 1l;
      *tmp_post_9 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_10 = *tmp_post_11)
      {
        tmp_post_10 = intpt;
        intpt = intpt + 1l;
        tmp_post_11 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_12 = *tmp_post_13)
      {
        tmp_post_12 = intpt;
        intpt = intpt + 1l;
        tmp_post_13 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    nmemjm = nmemar[(signed long int)jm];
    prevnode = hist[(signed long int)jm];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child1 = prevnode;

    void *return_value_realloc_14;
    return_value_realloc_14=realloc((void *)topol[(signed long int)k][(signed long int)1], (unsigned long int)(nmemjm + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)1] = (signed int *)return_value_realloc_14;
    intpt = topol[(signed long int)k][(signed long int)1];
    if(intpt == ((signed int *)NULL))
    {
      reporterr("Cannot reallocate topol\n");
      exit(1);
    }

    if(prevnode == -1)
    {
      tmp_post_15 = intpt;
      intpt = intpt + 1l;
      *tmp_post_15 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_16 = *tmp_post_17)
      {
        tmp_post_16 = intpt;
        intpt = intpt + 1l;
        tmp_post_17 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_18 = *tmp_post_19)
      {
        tmp_post_18 = intpt;
        intpt = intpt + 1l;
        tmp_post_19 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    hist[(signed long int)im] = k;
    nmemar[(signed long int)im] = nmemim + nmemjm;
    if(IEEE_FLOAT_EQUAL(*len[(signed long int)k], -1.000000))
      tmp_if_expr_20 = (_Bool)1;

    else
      tmp_if_expr_20 = IEEE_FLOAT_EQUAL(len[(signed long int)k][(signed long int)1], (double)-1) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_20)
    {
      reporterr("Re-computing the length of branch %d..\n", k);
      clusterdist = 0.0;
      mpair = 0;
      i = 0;
      do
      {
        mi = topol[(signed long int)k][(signed long int)0][(signed long int)i];
        if(!(mi >= 0))
          break;

        j = 0;
        do
        {
          mj = topol[(signed long int)k][(signed long int)1][(signed long int)j];
          if(!(mj >= 0))
            break;

          minijm = mi < mj ? mi : mj;
          maxijm = mi > mj ? mi : mj;
          clusterdist = clusterdist + mtx[(signed long int)minijm][(signed long int)(maxijm - minijm)];
          mpair = mpair + 1;
          j = j + 1;
        }
        while((_Bool)1);
        i = i + 1;
      }
      while((_Bool)1);
      clusterdist = clusterdist / (double)mpair;
      reporterr("clusterdist = %f\n", clusterdist);
      if(IEEE_FLOAT_EQUAL(*len[(signed long int)k], -1.000000))
        len[(signed long int)k][(signed long int)0] = clusterdist / 2.0 - height[(signed long int)im];

      if(IEEE_FLOAT_EQUAL(len[(signed long int)k][1l], -1.000000))
        len[(signed long int)k][(signed long int)1] = clusterdist / 2.0 - height[(signed long int)im];

      fprintf(stderr, "len0 = %f\n", len[(signed long int)k][(signed long int)0]);
      fprintf(stderr, "len1 = %f\n\n", len[(signed long int)k][(signed long int)1]);
    }

    height[(signed long int)im] = height[(signed long int)im] + len[(signed long int)k][(signed long int)0];
    (dep + (signed long int)k)->distfromtip = height[(signed long int)im];
    unsigned long int return_value_strlen_21;
    return_value_strlen_21=strlen(tree[(signed long int)im]);
    unsigned long int return_value_strlen_22;
    return_value_strlen_22=strlen(tree[(signed long int)jm]);
    void *return_value_realloc_23;
    return_value_realloc_23=realloc((void *)treetmp, return_value_strlen_21 + return_value_strlen_22 + (unsigned long int)100);
    treetmp = (char *)return_value_realloc_23;
    if(treetmp == ((char *)NULL))
    {
      reporterr("Cannot allocate treetmp\n");
      exit(1);
    }

    sprintf(treetmp, "(%s:%7.5f,%s:%7.5f)", tree[(signed long int)im], len[(signed long int)k][(signed long int)0], tree[(signed long int)jm], len[(signed long int)k][(signed long int)1]);
    free((void *)tree[(signed long int)im]);
    free((void *)tree[(signed long int)jm]);
    unsigned long int return_value_strlen_24;
    return_value_strlen_24=strlen(treetmp);
    void *return_value_calloc_25;
    return_value_calloc_25=calloc(return_value_strlen_24 + (unsigned long int)1, sizeof(char) /*1ul*/ );
    tree[(signed long int)im] = (char *)return_value_calloc_25;
    tree[(signed long int)jm] = (char *)(void *)0;
    if(tree[(signed long int)im] == ((char *)NULL))
    {
      reporterr("Cannot reallocate tree!\n");
      exit(1);
    }

    strcpy(tree[(signed long int)im], treetmp);
    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    acjmprev->next = acjmnext;
    if(!(acjmnext == ((struct _Bchain *)NULL)))
      acjmnext->prev = acjmprev;

  }
  fclose(fp);
  fp=fopen("infile.tree", "w");
  fprintf(fp, "%s\n", treetmp);
  fprintf(fp, "#by loadtop\n");
  fclose(fp);
  FreeCharMtx(tree);
  free((void *)treetmp);
  free((void *)nametmp);
  free((void *)hist);
  free((void *)(char *)ac);
  free((void *)nmemar);
  free((void *)height);
}

// loadtree
// file mltaln9.c line 1181
extern void loadtree(signed int nseq, signed int ***topol, double **len, char **name, signed int *nlen, struct _Treedep *dep)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  signed int *hist = (signed int *)(void *)0;
  struct _Bchain *ac = (struct _Bchain *)(void *)0;
  signed int im = -1;
  signed int jm = -1;
  struct _Bchain *acjmnext;
  struct _Bchain *acjmprev;
  signed int prevnode;
  struct _Bchain *acpti;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  signed int *nmemar;
  signed int nmemim;
  signed int nmemjm;
  char **tree;
  char *treetmp;
  char *nametmp;
  char *nameptr;
  char *tmpptr;
  char namec;
  struct _IO_FILE *fp;
  signed int node[2l];
  double *height;
  fp=fopen("_guidetree", "r");
  if(fp == ((struct _IO_FILE *)NULL))
  {
    reporterr("cannot open _guidetree\n");
    exit(1);
  }

  if(hist == ((signed int *)NULL))
  {
    hist=AllocateIntVec(nseq);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)nseq * sizeof(struct _Bchain) /*24ul*/ );
    ac = (struct _Bchain *)return_value_malloc_1;
    nmemar=AllocateIntVec(nseq);
    treetmp = (char *)(void *)0;
    nametmp=AllocateCharVec(1000);
    tree=AllocateCharMtx(nseq, 0);
    if(!(dep == ((struct _Treedep *)NULL)))
      height=AllocateFloatVec(nseq);

  }

  i = 0;
  const unsigned short int **return_value___ctype_b_loc_2;
  char *return_value_strstr_3;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 999); j = j + 1)
      nametmp[(signed long int)j] = (char)0;
    j = 0;
    for( ; !(j >= 999); j = j + 1)
    {
      namec = name[(signed long int)i][(signed long int)j];
      if((signed int)namec == 0)
        break;

      else
      {
        return_value___ctype_b_loc_2=__ctype_b_loc();
        if((signed int)namec == 45 || (signed int)namec == 47 || (signed int)namec == 61 || (signed int)namec == 123 || (signed int)namec == 125 || !((8 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)namec]) == 0))
          nametmp[(signed long int)j] = namec;

        else
          nametmp[(signed long int)j] = (char)95;
      }
    }
    nametmp[(signed long int)j] = (char)0;
    if(!(outnumber == 0))
    {
      return_value_strstr_3=strstr(nametmp, "_numo_e");
      nameptr = return_value_strstr_3 + (signed long int)8;
    }

    else
      nameptr = nametmp + (signed long int)1;
    tmpptr=strstr(nameptr, "_oe_");
    if(!(tmpptr == ((char *)NULL)))
      nameptr = tmpptr + (signed long int)4;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(nametmp);
    void *return_value_calloc_5;
    return_value_calloc_5=calloc(return_value_strlen_4 + (unsigned long int)100, sizeof(char) /*1ul*/ );
    tree[(signed long int)i] = (char *)return_value_calloc_5;
    if(tree[(signed long int)i] == ((char *)NULL))
    {
      reporterr("Cannot allocate tree!\n");
      exit(1);
    }

    sprintf(tree[(signed long int)i], "\n%d_%.900s\n", i + 1, nameptr);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = ac + (signed long int)i + (signed long int)1;
    (ac + (signed long int)i)->prev = (ac + (signed long int)i) - (signed long int)1;
    (ac + (signed long int)i)->pos = i;
  }
  (ac + (signed long int)(nseq - 1))->next = (struct _Bchain *)(void *)0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    hist[(signed long int)i] = -1;
    nmemar[(signed long int)i] = 1;
  }
  reporterr("\n");
  k = 0;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  signed int *tmp_post_10;
  signed int *tmp_post_11;
  signed int *tmp_post_12;
  signed int *tmp_post_13;
  signed int *tmp_post_14;
  signed int *tmp_post_16;
  signed int *tmp_post_17;
  signed int *tmp_post_18;
  signed int *tmp_post_19;
  signed int *tmp_post_20;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("\r% 5d / %d", k, nseq);

    len[(signed long int)k][(signed long int)1] = -1.0;
    len[(signed long int)k][(signed long int)0] = len[(signed long int)k][(signed long int)1];
    loadtreeoneline(node, len[(signed long int)k], fp);
    im = node[(signed long int)0];
    jm = node[(signed long int)1];
    if(!(nseq + -1 >= im) || !(nseq + -1 >= jm))
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = tree[(signed long int)im] == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
      tmp_if_expr_7 = (_Bool)1;

    else
      tmp_if_expr_7 = tree[(signed long int)jm] == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_7)
    {
      reporterr("\n\nCheck the guide tree.\n");
      reporterr("im=%d, jm=%d\n", im + 1, jm + 1);
      reporterr("Please use newick2mafft.rb to generate a tree file from a newick tree.\n\n");
      exit(1);
    }

    if(IEEE_FLOAT_EQUAL(*len[(signed long int)k], -1.000000))
      tmp_if_expr_8 = (_Bool)1;

    else
      tmp_if_expr_8 = IEEE_FLOAT_EQUAL(len[(signed long int)k][(signed long int)1], -1.0) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_8)
    {
      reporterr("\n\nERROR: Branch length is not given.\n");
      exit(1);
    }

    if(*len[(signed long int)k] < 0.0)
      len[(signed long int)k][(signed long int)0] = 0.0;

    if(len[(signed long int)k][1l] < 0.0)
      len[(signed long int)k][(signed long int)1] = 0.0;

    prevnode = hist[(signed long int)im];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child0 = prevnode;

    nmemim = nmemar[(signed long int)im];
    void *return_value_realloc_9;
    return_value_realloc_9=realloc((void *)topol[(signed long int)k][(signed long int)0], (unsigned long int)(nmemim + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)0] = (signed int *)return_value_realloc_9;
    intpt = topol[(signed long int)k][(signed long int)0];
    if(prevnode == -1)
    {
      tmp_post_10 = intpt;
      intpt = intpt + 1l;
      *tmp_post_10 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_11 = *tmp_post_12)
      {
        tmp_post_11 = intpt;
        intpt = intpt + 1l;
        tmp_post_12 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_13 = *tmp_post_14)
      {
        tmp_post_13 = intpt;
        intpt = intpt + 1l;
        tmp_post_14 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    nmemjm = nmemar[(signed long int)jm];
    prevnode = hist[(signed long int)jm];
    if(!(dep == ((struct _Treedep *)NULL)))
      (dep + (signed long int)k)->child1 = prevnode;

    void *return_value_realloc_15;
    return_value_realloc_15=realloc((void *)topol[(signed long int)k][(signed long int)1], (unsigned long int)(nmemjm + 1) * sizeof(signed int) /*4ul*/ );
    topol[(signed long int)k][(signed long int)1] = (signed int *)return_value_realloc_15;
    intpt = topol[(signed long int)k][(signed long int)1];
    if(intpt == ((signed int *)NULL))
    {
      reporterr("Cannot reallocate topol\n");
      exit(1);
    }

    if(prevnode == -1)
    {
      tmp_post_16 = intpt;
      intpt = intpt + 1l;
      *tmp_post_16 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_17 = *tmp_post_18)
      {
        tmp_post_17 = intpt;
        intpt = intpt + 1l;
        tmp_post_18 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_19 = *tmp_post_20)
      {
        tmp_post_19 = intpt;
        intpt = intpt + 1l;
        tmp_post_20 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    hist[(signed long int)im] = k;
    nmemar[(signed long int)im] = nmemim + nmemjm;
    acpti = ac;
    for( ; !(acpti == ((struct _Bchain *)NULL)); acpti = acpti->next)
    {
      i = acpti->pos;
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
      }

    }
    unsigned long int return_value_strlen_21;
    return_value_strlen_21=strlen(tree[(signed long int)im]);
    unsigned long int return_value_strlen_22;
    return_value_strlen_22=strlen(tree[(signed long int)jm]);
    void *return_value_realloc_23;
    return_value_realloc_23=realloc((void *)treetmp, return_value_strlen_21 + return_value_strlen_22 + (unsigned long int)100);
    treetmp = (char *)return_value_realloc_23;
    if(treetmp == ((char *)NULL))
    {
      reporterr("Cannot allocate treetmp\n");
      exit(1);
    }

    sprintf(treetmp, "(%s:%7.5f,%s:%7.5f)", tree[(signed long int)im], len[(signed long int)k][(signed long int)0], tree[(signed long int)jm], len[(signed long int)k][(signed long int)1]);
    free((void *)tree[(signed long int)im]);
    free((void *)tree[(signed long int)jm]);
    unsigned long int return_value_strlen_24;
    return_value_strlen_24=strlen(treetmp);
    void *return_value_calloc_25;
    return_value_calloc_25=calloc(return_value_strlen_24 + (unsigned long int)1, sizeof(char) /*1ul*/ );
    tree[(signed long int)im] = (char *)return_value_calloc_25;
    tree[(signed long int)jm] = (char *)(void *)0;
    if(tree[(signed long int)im] == ((char *)NULL))
    {
      reporterr("Cannot reallocate tree!\n");
      exit(1);
    }

    strcpy(tree[(signed long int)im], treetmp);
    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    acjmprev->next = acjmnext;
    if(!(acjmnext == ((struct _Bchain *)NULL)))
      acjmnext->prev = acjmprev;

    if(!(dep == ((struct _Treedep *)NULL)))
    {
      height[(signed long int)im] = height[(signed long int)im] + len[(signed long int)k][(signed long int)0];
      (dep + (signed long int)k)->distfromtip = height[(signed long int)im];
    }

  }
  fclose(fp);
  fp=fopen("infile.tree", "w");
  fprintf(fp, "%s\n", treetmp);
  fprintf(fp, "#by loadtree\n");
  fclose(fp);
  FreeCharMtx(tree);
  free((void *)treetmp);
  free((void *)nametmp);
  free((void *)hist);
  free((void *)(char *)ac);
  free((void *)nmemar);
  if(!(dep == ((struct _Treedep *)NULL)))
    free((void *)height);

}

// loadtreeoneline
// file mltaln9.c line 841
static void loadtreeoneline(signed int *ar, double *len, struct _IO_FILE *fp)
{
  signed int res;
  char *p;
  static char gett[1000l];
  p=fgets(gett, 999, fp);
  if(p == ((char *)NULL))
  {
    reporterr("\n\nFormat error (1) in the tree?  It has to be a bifurcated and rooted tree.\n");
    reporterr("Please use newick2mafft.rb to generate a tree file from a newick tree.\n\n");
    exit(1);
  }

  res=sscanf(gett, "%d %d %lf %lf", ar, ar + (signed long int)1, len, len + (signed long int)1);
  if(!(res == 4))
  {
    reporterr("\n\nFormat error (2) in the tree?  It has to be a bifurcated and rooted tree.\n");
    reporterr("Please use newick2mafft.rb to generate a tree file from a newick tree.\n\n");
    exit(1);
  }

  ar[(signed long int)0] = ar[(signed long int)0] - 1;
  ar[(signed long int)1] = ar[(signed long int)1] - 1;
  if(*ar >= ar[1l])
  {
    reporterr("\n\nIncorrect guide tree\n");
    reporterr("Please use newick2mafft.rb to generate a tree file from a newick tree.\n\n");
    exit(1);
  }

}

// main
// file dndpre.c line 221
signed int main(signed int argc, char **argv)
{
  signed int i;
  signed int j;
  signed int ilim;
  char **seq;
  signed int *nlen;
  double *selfscore;
  double **mtx;
  double mtxv;
  struct _IO_FILE *fp;
  struct _IO_FILE *infp;
  double ssi;
  double ssj;
  double bunbo;
  signed int **skiptable = (signed int **)(void *)0;
  char c;
  arguments(argc, argv);
  if(!(inputfile == ((char *)NULL)))
  {
    infp=fopen(inputfile, "r");
    if(infp == ((struct _IO_FILE *)NULL))
    {
      fprintf(stderr, "Cannot open %s\n", inputfile);
      exit(1);
    }

  }

  else
    infp = stdin;
  getnumlen(infp);
  rewind(infp);
  njob = njob - nadd;
  seq=AllocateCharMtx(njob, nlenmax + 1);
  static char **name;
  name=AllocateCharMtx(njob, 256 + 1);
  mtx=AllocateDoubleMtx(njob, njob);
  selfscore=AllocateFloatVec(njob);
  nlen=AllocateIntVec(njob);
  readData_pointer(infp, name, nlen, seq);
  fclose(infp);
  i = 1;
  for( ; !(i >= njob); i = i + 1)
    if(!(nlen[(signed long int)i] == *nlen))
    {
      reporterr("Not aligned!\n");
      exit(1);
    }

  constants(njob, seq);
  c=seqcheck(seq);
  if(!(c == 0))
  {
    reporterr("Illegal character %c\n", c);
    exit(1);
  }

  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    double return_value_naivepairscore11_1;
    return_value_naivepairscore11_1=naivepairscore11(seq[(signed long int)i], seq[(signed long int)i], penalty);
    selfscore[(signed long int)i] = (double)return_value_naivepairscore11_1;
  }
  skiptable=AllocateIntMtx(njob, 0);
  makeskiptable(njob, skiptable, seq);
  double return_value_naivepairscorefast_4;
  double return_value_naivepairscorefast_5;
  if(nthread >= 1)
  {
    struct _thread_arg *targ;
    struct _jobtable jobpos;
    unsigned long int *handle;
    union anonymous mutex;
    jobpos.i = 0;
    jobpos.j = 0;
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)nthread, sizeof(struct _thread_arg) /*56ul*/ );
    targ = (struct _thread_arg *)return_value_calloc_2;
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)nthread, sizeof(unsigned long int) /*8ul*/ );
    handle = (unsigned long int *)return_value_calloc_3;
    pthread_mutex_init(&mutex, (const union anonymous_0 *)(void *)0);
    i = 0;
    for( ; !(i >= nthread); i = i + 1)
    {
      (targ + (signed long int)i)->thread_no = i;
      (targ + (signed long int)i)->njob = njob;
      (targ + (signed long int)i)->selfscore = selfscore;
      (targ + (signed long int)i)->mtx = mtx;
      (targ + (signed long int)i)->seq = seq;
      (targ + (signed long int)i)->skiptable = skiptable;
      (targ + (signed long int)i)->jobpospt = &jobpos;
      (targ + (signed long int)i)->mutex = &mutex;
      pthread_create(handle + (signed long int)i, (const union pthread_attr_t *)(void *)0, athread, (void *)(targ + (signed long int)i));
    }
    i = 0;
    for( ; !(i >= nthread); i = i + 1)
      pthread_join(handle[(signed long int)i], (void **)(void *)0);
    pthread_mutex_destroy(&mutex);
  }

  else
  {
    ilim = njob - 1;
    i = 0;
    for( ; !(i >= ilim); i = i + 1)
    {
      ssi = selfscore[(signed long int)i];
      fprintf(stderr, "%4d/%4d\r", i + 1, njob);
      j = i + 1;
      for( ; !(j >= njob); j = j + 1)
      {
        ssj = selfscore[(signed long int)j];
        bunbo = ssi < ssj ? ssi : ssj;
        if(IEEE_FLOAT_EQUAL(bunbo, 0.0))
          mtxv = (double)maxdist;

        else
          if(!(usenaivescoreinsteadofalignmentscore == 0))
          {
            return_value_naivepairscorefast_4=naivepairscorefast(seq[(signed long int)i], seq[(signed long int)j], skiptable[(signed long int)i], skiptable[(signed long int)j], (signed int)0.0);
            mtxv = (double)maxdist * (1.0 - (double)return_value_naivepairscorefast_4 / bunbo);
          }

          else
          {
            return_value_naivepairscorefast_5=naivepairscorefast(seq[(signed long int)i], seq[(signed long int)j], skiptable[(signed long int)i], skiptable[(signed long int)j], penalty);
            mtxv = (double)maxdist * (1.0 - (double)return_value_naivepairscorefast_5 / bunbo);
          }
        if(mtxv < 0.0 || mtxv > 9.0)
        {
          fprintf(stderr, "Distance %d-%d is strange, %f.\n", i, j, mtxv);
          exit(1);
        }

        mtx[(signed long int)i][(signed long int)j] = mtxv;
      }
    }
  }
  fp=fopen("hat2", "w");
  WriteHat2_pointer(fp, njob, name, mtx);
  fclose(fp);
  if(!(skiptable == ((signed int **)NULL)))
    FreeIntMtx(skiptable);

  skiptable = (signed int **)(void *)0;
  char *return_value_progName_6;
  return_value_progName_6=progName(argv[(signed long int)0]);
  reporterr("%s (%s) Version 7.271 alg=%c, model=%s, amax=%3.1f\n%d thread(s)\n", return_value_progName_6, dorp == 100 ? "nuc" : (nblosum == -2 ? "text" : "aa"), alg, (const void *)modelname, specificityconsideration, nthread);
  exit(0);
}

// makedynamicmtx
// file mltaln9.c line 9522
extern void makedynamicmtx(double **out, double **in, double offset)
{
  signed int i;
  signed int j;
  signed int ii;
  signed int jj;
  double av;
  offset=dist2offset(offset * 2.0);
  i = 0;
  for( ; !(i >= nalphabets); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nalphabets); j = j + 1)
      out[(signed long int)i][(signed long int)j] = in[(signed long int)i][(signed long int)j];
  }
  if(!IEEE_FLOAT_EQUAL(offset, 0.0))
  {
    i = 0;
    for( ; !(i >= nalphabets); i = i + 1)
    {
      ii = (signed int)amino[(signed long int)i];
      if(!(ii == 45))
      {
        j = 0;
        for( ; !(j >= nalphabets); j = j + 1)
        {
          jj = (signed int)amino[(signed long int)j];
          if(!(jj == 45))
            out[(signed long int)i][(signed long int)j] = in[(signed long int)i][(signed long int)j] + offset * (double)600;

        }
      }

    }
    goto __CPROVER_DUMP_L19;
    av = 0.0;
    i = 0;
    if(!(i >= nalphabets))
    {
      if(!(ii == 45))
        av = av + out[(signed long int)i][(signed long int)i];

      i = i + 1;
    }

    av = av / (double)nalphabets;
    i = 0;
    if(!(i >= nalphabets))
    {
      if(!((signed int)amino[(signed long int)i] == 45))
      {
        j = 0;
        if(!(j >= nalphabets))
        {
          if(!((signed int)amino[(signed long int)j] == 45))
          {
            out[(signed long int)i][(signed long int)j] = (out[(signed long int)i][(signed long int)j] * (double)600) / av;
            reporterr("%c-%c: %f\n", amino[(signed long int)i], amino[(signed long int)j], out[(signed long int)i][(signed long int)j]);
          }

          j = j + 1;
        }

      }

      i = i + 1;
    }

  }


__CPROVER_DUMP_L19:
  ;
}

// makelocal
// file mltaln9.c line 7378
extern signed int makelocal(char *s1, char *s2, signed int thr)
{
  signed int start;
  signed int maxstart;
  signed int maxend;
  char *pt1;
  char *pt2;
  double score;
  double maxscore;
  pt1 = s1;
  pt2 = s2;
  maxend = 0;
  maxscore = 0.0;
  score = 0.0;
  start = 0;
  maxstart = 0;
  _Bool tmp_if_expr_1;
  char *tmp_post_2;
  char *tmp_post_3;
  while(!(*pt1 == 0))
  {
    if((signed int)*pt1 == 45)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)*pt2 == 45 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      score = score + (double)penalty;
      for( ; (_Bool)1; pt2 = pt2 + 1l)
      {
        if(!((signed int)*pt1 == 45))
        {
          if(!((signed int)*pt2 == 45))
            goto __CPROVER_DUMP_L6;

        }

        pt1 = pt1 + 1l;
      }
    }

    else
    {
      tmp_post_2 = pt1;
      pt1 = pt1 + 1l;
      tmp_post_3 = pt2;
      pt2 = pt2 + 1l;
      score = score + (double)(amino_dis[(signed long int)(unsigned char)*tmp_post_2][(signed long int)(unsigned char)*tmp_post_3] - thr);
      if(score > maxscore)
      {
        maxscore = score;
        maxstart = start;
      }

      if(score < 0.0)
      {
        if(start == maxstart)
          maxend = (signed int)(pt1 - s1);

        score = 0.0;
        start = (signed int)(pt1 - s1);
      }

    }

  __CPROVER_DUMP_L6:
    ;
  }
  if(start == maxstart)
    maxend = (signed int)((pt1 - s1) - (signed long int)1);

  s1[(signed long int)(maxend + 1)] = (char)0;
  s2[(signed long int)(maxend + 1)] = (char)0;
  return maxstart;
}

// makeskiptable
// file functions.h line 358
extern void makeskiptable(signed int n, signed int **skip, char **seq)
{
  char *nogapseq;
  signed int nogaplen;
  signed int alnlen;
  signed int i;
  signed int j;
  signed int posinseq;
  signed int gaplen;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  void *return_value_calloc_2;
  return_value_calloc_2=calloc(return_value_strlen_1 + (unsigned long int)1, sizeof(char) /*1ul*/ );
  nogapseq = (char *)return_value_calloc_2;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    gappick0(nogapseq, seq[(signed long int)i]);
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(nogapseq);
    nogaplen = (signed int)return_value_strlen_3;
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(seq[(signed long int)i]);
    alnlen = (signed int)return_value_strlen_4;
    void *return_value_calloc_5;
    return_value_calloc_5=calloc((unsigned long int)(nogaplen + 1), sizeof(signed int) /*4ul*/ );
    skip[(signed long int)i] = (signed int *)return_value_calloc_5;
    posinseq = 0;
    gaplen = 0;
    j = 0;
    for( ; !(j >= alnlen); j = j + 1)
      if((signed int)seq[(signed long int)i][(signed long int)j] == 45)
        skip[(signed long int)i][(signed long int)posinseq] = skip[(signed long int)i][(signed long int)posinseq] + 1;

      else
        posinseq = posinseq + 1;
  }
  free((void *)nogapseq);
}

// minimum
// file mltaln9.c line 8151
static signed int minimum(signed int i1, signed int i2)
{
  return i1 < i2 ? i1 : i2;
}

// myatof
// file io.c line 5320
extern double myatof(char *in)
{
  if(in == ((char *)NULL))
  {
    fprintf(stderr, "Error in myatof()\n");
    exit(1);
  }

  double return_value_atof_1;
  return_value_atof_1=atof(in);
  return return_value_atof_1;
}

// myatoi
// file functions.h line 346
extern signed int myatoi(char *in)
{
  if(in == ((char *)NULL))
  {
    fprintf(stderr, "Error in myatoi()\n");
    exit(1);
  }

  signed int return_value_atoi_1;
  return_value_atoi_1=atoi(in);
  return return_value_atoi_1;
}

// myfgets
// file io.c line 999
extern signed int myfgets(char *s, signed int l, struct _IO_FILE *fp)
{
  signed int c = 0;
  signed int i = 0;
  signed int return_value_feof_1;
  return_value_feof_1=feof(fp);
  _Bool tmp_if_expr_2;
  char *tmp_post_3;
  signed int return_value__IO_getc_4;
  if(!(return_value_feof_1 == 0))
    return 1;

  else
  {
    i = 0;
    do
    {
      if(!(i >= l))
      {
        c=_IO_getc(fp);
        tmp_if_expr_2 = c != 10 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
        break;

      tmp_post_3 = s;
      s = s + 1l;
      *tmp_post_3 = (char)c;
      i = i + 1;
    }
    while((_Bool)1);
    *s = (char)0;
    if(!(c == 10))
      do
      {
        return_value__IO_getc_4=_IO_getc(fp);
        if(return_value__IO_getc_4 == 10)
          break;

      }
      while((_Bool)1);

    return 0;
  }
}

// naiveHpairscore
// file mltaln9.c line 8427
extern double naiveHpairscore(signed int n1, signed int n2, char **seq1, char **seq2, double *eff1, double *eff2, signed int penal)
{
  signed int i;
  signed int j;
  double val;
  double valf;
  signed int pv;
  double deff;
  char *p1;
  char *p2;
  char *p1p;
  char *p2p;
  val = 0.0;
  i = 0;
  char *tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  for( ; !(i >= n1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= n2); j = j + 1)
    {
      deff = eff1[(signed long int)i] * eff2[(signed long int)j];
      valf = (double)0;
      p1 = seq1[(signed long int)i];
      p2 = seq2[(signed long int)j];
      pv = 0;
      if((signed int)*p1 == 45)
      {
        if(!((signed int)*p2 == 45))
          pv = penal;

      }

      if(!((signed int)*p1 == 45))
      {
        if((signed int)*p2 == 45)
          pv = penal;

      }

      if(!(pv == 0))
        reporterr("Penal!, %f, %d-%d, pos1,pos2=%d,%d\n", (double)pv * deff * 0.5, i, j, (signed int)(p1 - seq1[(signed long int)i]), (signed int)(p2 - seq2[(signed long int)j]));

      p1p = p1;
      p2p = p2;
      tmp_post_1 = p1;
      p1 = p1 + 1l;
      tmp_post_2 = p2;
      p2 = p2 + 1l;
      valf = valf + (double)amino_dis[(signed long int)(unsigned char)*tmp_post_1][(signed long int)(unsigned char)*tmp_post_2] + 0.5 * (double)pv;
      for( ; !(*p1p == 0); p2p = p2p + 1l)
      {
        pv = 0;
        if(!((signed int)*p1p == 45))
        {
          if(!((signed int)*p2p == 45))
          {
            if((signed int)*p1 == 45)
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

            if(!((signed int)*p1 == 45))
            {
              if((signed int)*p2 == 45)
                pv = penal;

            }

          }

        }

        if(!((signed int)*p1p == 45))
        {
          if((signed int)*p2p == 45)
          {
            if(!((signed int)*p1 == 45))
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

          }

        }

        if((signed int)*p1p == 45)
        {
          if(!((signed int)*p2p == 45))
          {
            if(!((signed int)*p1 == 45))
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

          }

        }

        tmp_post_3 = p1;
        p1 = p1 + 1l;
        tmp_post_4 = p2;
        p2 = p2 + 1l;
        valf = valf + (double)amino_dis[(signed long int)(unsigned char)*tmp_post_3][(signed long int)(unsigned char)*tmp_post_4] + 0.5 * (double)pv;
        p1p = p1p + 1l;
      }
      val = val + deff * valf;
    }
  }
  reporterr("val = %f\n", val);
  return val;
}

// naiveQpairscore
// file mltaln9.c line 8330
extern double naiveQpairscore(signed int n1, signed int n2, char **seq1, char **seq2, double *eff1, double *eff2, signed int penal)
{
  signed int i;
  signed int j;
  double val;
  double valf;
  signed int pv;
  double deff;
  char *p1;
  char *p2;
  char *p1p;
  char *p2p;
  return (double)0;
  val = 0.0;
  i = 0;
  char *tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  if(!(i >= n1))
  {
    j = 0;
    if(!(j >= n2))
    {
      deff = eff1[(signed long int)i] * eff2[(signed long int)j];
      valf = (double)0;
      p1 = seq1[(signed long int)i];
      p2 = seq2[(signed long int)j];
      pv = 0;
      if((signed int)*p1 == 45)
      {
        if(!((signed int)*p2 == 45))
          pv = penal;

      }

      if(!((signed int)*p1 == 45))
      {
        if((signed int)*p2 == 45)
          pv = penal;

      }

      p1p = p1;
      p2p = p2;
      tmp_post_1 = p1;
      p1 = p1 + 1l;
      tmp_post_2 = p2;
      p2 = p2 + 1l;
      valf = valf + (double)amino_dis[(signed long int)(unsigned char)*tmp_post_1][(signed long int)(unsigned char)*tmp_post_2] + 0.5 * (double)pv;
      if(!(*p1p == 0))
      {
        pv = 0;
        if(!((signed int)*p1p == 45))
        {
          if(!((signed int)*p2p == 45))
          {
            if((signed int)*p1 == 45)
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

            if(!((signed int)*p1 == 45))
            {
              if((signed int)*p2 == 45)
                pv = penal;

            }

          }

        }

        if(!((signed int)*p1p == 45))
        {
          if((signed int)*p2p == 45)
          {
            if((signed int)*p1 == 45)
            {
              if(!((signed int)*p2 == 45))
                pv = penal * 2;

            }

            if(!((signed int)*p1 == 45))
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

          }

        }

        if((signed int)*p1p == 45)
        {
          if(!((signed int)*p2p == 45))
          {
            if(!((signed int)*p1 == 45))
            {
              if((signed int)*p2 == 45)
                pv = penal * 2;

            }

            if(!((signed int)*p1 == 45))
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

          }

        }

        tmp_post_3 = p1;
        p1 = p1 + 1l;
        tmp_post_4 = p2;
        p2 = p2 + 1l;
        valf = valf + (double)amino_dis[(signed long int)(unsigned char)*tmp_post_3][(signed long int)(unsigned char)*tmp_post_4] + 0.5 * (double)pv;
        p1p = p1p + 1l;
        p2p = p2p + 1l;
      }

      val = val + deff * valf;
      j = j + 1;
    }

    i = i + 1;
  }

  reporterr("val = %f\n", val);
  return val;
}

// naiveRpairscore
// file mltaln9.c line 8233
extern double naiveRpairscore(signed int n1, signed int n2, char **seq1, char **seq2, double *eff1, double *eff2, signed int penal)
{
  signed int i;
  signed int j;
  double val;
  double valf;
  signed int pv;
  double deff;
  char *p1;
  char *p2;
  char *p1p;
  char *p2p;
  val = 0.0;
  i = 0;
  char *tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  for( ; !(i >= n1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= n2); j = j + 1)
    {
      deff = eff1[(signed long int)i] * eff2[(signed long int)j];
      valf = (double)0;
      p1 = seq1[(signed long int)i];
      p2 = seq2[(signed long int)j];
      pv = 0;
      if((signed int)*p1 == 45)
      {
        if(!((signed int)*p2 == 45))
          pv = penal;

      }

      if(!((signed int)*p1 == 45))
      {
        if((signed int)*p2 == 45)
          pv = penal;

      }

      p1p = p1;
      p2p = p2;
      tmp_post_1 = p1;
      p1 = p1 + 1l;
      tmp_post_2 = p2;
      p2 = p2 + 1l;
      valf = valf + (double)amino_dis[(signed long int)(unsigned char)*tmp_post_1][(signed long int)(unsigned char)*tmp_post_2] + 0.5 * (double)pv;
      for( ; !(*p1p == 0); p2p = p2p + 1l)
      {
        pv = 0;
        if(!((signed int)*p1p == 45))
        {
          if(!((signed int)*p2p == 45))
          {
            if((signed int)*p1 == 45)
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

            if(!((signed int)*p1 == 45))
            {
              if((signed int)*p2 == 45)
                pv = penal;

            }

          }

        }

        if((signed int)*p1p == 45)
        {
          if((signed int)*p2p == 45)
          {
            if((signed int)*p1 == 45)
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

            if(!((signed int)*p1 == 45))
            {
              if((signed int)*p2 == 45)
                pv = penal;

            }

          }

        }

        if(!((signed int)*p1p == 45))
        {
          if((signed int)*p2p == 45)
          {
            if((signed int)*p1 == 45)
            {
              if(!((signed int)*p2 == 45))
                pv = penal * 2;

            }

            if(!((signed int)*p1 == 45))
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

            if((signed int)*p1 == 45)
            {
              if((signed int)*p2 == 45)
                pv = penal;

            }

          }

        }

        if((signed int)*p1p == 45)
        {
          if(!((signed int)*p2p == 45))
          {
            if(!((signed int)*p1 == 45))
            {
              if((signed int)*p2 == 45)
                pv = penal * 2;

            }

            if(!((signed int)*p1 == 45))
            {
              if(!((signed int)*p2 == 45))
                pv = penal;

            }

            if((signed int)*p1 == 45)
            {
              if((signed int)*p2 == 45)
                pv = penal;

            }

          }

        }

        tmp_post_3 = p1;
        p1 = p1 + 1l;
        tmp_post_4 = p2;
        p2 = p2 + 1l;
        valf = valf + (double)amino_dis[(signed long int)(unsigned char)*tmp_post_3][(signed long int)(unsigned char)*tmp_post_4] + 0.5 * (double)pv;
        p1p = p1p + 1l;
      }
      val = val + deff * valf;
    }
  }
  reporterr("val = %f\n", val);
  return val;
}

// naivepairscore
// file mltaln9.c line 8687
extern double naivepairscore(signed int n1, signed int n2, char **seq1, char **seq2, double *eff1, double *eff2, signed int penal)
{
  signed int i;
  signed int j;
  double val;
  signed int vali;
  double feff;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq1[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  char *s1;
  char *s2;
  char *p1;
  char *p2;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)(len + 1), sizeof(char) /*1ul*/ );
  s1 = (char *)return_value_calloc_2;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)(len + 1), sizeof(char) /*1ul*/ );
  s2 = (char *)return_value_calloc_3;
  val = 0.0;
  i = 0;
  char *tmp_post_4;
  char *tmp_post_5;
  for( ; !(i >= n1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= n2); j = j + 1)
    {
      vali = 0;
      feff = eff1[(signed long int)i] * eff2[(signed long int)j];
      commongappickpair(s1, s2, seq1[(signed long int)i], seq2[(signed long int)j]);
      p1 = s1;
      p2 = s2;
      while(!(*p1 == 0))
        if((signed int)*p1 == 45)
        {
          vali = vali + penal;
          for( ; (signed int)*p1 == 45; p2 = p2 + 1l)
            p1 = p1 + 1l;
        }

        else
          if((signed int)*p2 == 45)
          {
            vali = vali + penal;
            for( ; (signed int)*p2 == 45; p2 = p2 + 1l)
              p1 = p1 + 1l;
          }

          else
          {
            tmp_post_4 = p1;
            p1 = p1 + 1l;
            tmp_post_5 = p2;
            p2 = p2 + 1l;
            vali = vali + amino_dis[(signed long int)(unsigned char)*tmp_post_4][(signed long int)(unsigned char)*tmp_post_5];
          }
      val = val + feff * (double)vali;
    }
  }
  free((void *)s1);
  free((void *)s2);
  reporterr("val = %f\n", val);
  return val;
}

// naivepairscore11
// file functions.h line 287
extern double naivepairscore11(char *seq1, char *seq2, signed int penal)
{
  double vali;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq1);
  len = (signed int)return_value_strlen_1;
  char *s1;
  char *s2;
  char *p1;
  char *p2;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)(len + 1), sizeof(char) /*1ul*/ );
  s1 = (char *)return_value_calloc_2;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)(len + 1), sizeof(char) /*1ul*/ );
  s2 = (char *)return_value_calloc_3;
  vali = 0.0;
  commongappickpair(s1, s2, seq1, seq2);
  p1 = s1;
  p2 = s2;
  char *tmp_post_4;
  char *tmp_post_5;
  while(!(*p1 == 0))
    if((signed int)*p1 == 45)
    {
      vali = vali + (double)penal;
      for( ; (signed int)*p1 == 45; p2 = p2 + 1l)
        p1 = p1 + 1l;
    }

    else
      if((signed int)*p2 == 45)
      {
        vali = vali + (double)penal;
        for( ; (signed int)*p2 == 45; p2 = p2 + 1l)
          p1 = p1 + 1l;
      }

      else
      {
        tmp_post_4 = p1;
        p1 = p1 + 1l;
        tmp_post_5 = p2;
        p2 = p2 + 1l;
        vali = vali + (double)amino_dis[(signed long int)(unsigned char)*tmp_post_4][(signed long int)(unsigned char)*tmp_post_5];
      }
  free((void *)s1);
  free((void *)s2);
  return vali;
}

// naivepairscore11_dynmtx
// file mltaln9.c line 8579
extern double naivepairscore11_dynmtx(double **mtx, char *seq1, char *seq2, signed int penal)
{
  double vali;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq1);
  len = (signed int)return_value_strlen_1;
  char *s1;
  char *s2;
  char *p1;
  char *p2;
  signed int c1;
  signed int c2;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)(len + 1), sizeof(char) /*1ul*/ );
  s1 = (char *)return_value_calloc_2;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)(len + 1), sizeof(char) /*1ul*/ );
  s2 = (char *)return_value_calloc_3;
  vali = 0.0;
  commongappickpair(s1, s2, seq1, seq2);
  p1 = s1;
  p2 = s2;
  char *tmp_post_4;
  char *tmp_post_5;
  while(!(*p1 == 0))
    if((signed int)*p1 == 45)
    {
      vali = vali + (double)penal;
      for( ; (signed int)*p1 == 45; p2 = p2 + 1l)
        p1 = p1 + 1l;
    }

    else
      if((signed int)*p2 == 45)
      {
        vali = vali + (double)penal;
        for( ; (signed int)*p2 == 45; p2 = p2 + 1l)
          p1 = p1 + 1l;
      }

      else
      {
        tmp_post_4 = p1;
        p1 = p1 + 1l;
        c1 = amino_n[(signed long int)(unsigned char)*tmp_post_4];
        tmp_post_5 = p2;
        p2 = p2 + 1l;
        c2 = amino_n[(signed long int)(unsigned char)*tmp_post_5];
        vali = vali + (double)mtx[(signed long int)c1][(signed long int)c2];
      }
  free((void *)s1);
  free((void *)s2);
  return vali;
}

// naivepairscorefast
// file functions.h line 289
extern double naivepairscorefast(char *seq1, char *seq2, signed int *skip1, signed int *skip2, signed int penal)
{
  double vali;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq1);
  len = (signed int)return_value_strlen_1;
  char *s1;
  char *s2;
  char *p1;
  char *p2;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)(len + 1), sizeof(char) /*1ul*/ );
  s1 = (char *)return_value_calloc_2;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc((unsigned long int)(len + 1), sizeof(char) /*1ul*/ );
  s2 = (char *)return_value_calloc_3;
  vali = 0.0;
  commongappickpairfast(s1, s2, seq1, seq2, skip1, skip2);
  p1 = s1;
  p2 = s2;
  char *tmp_post_4;
  char *tmp_post_5;
  while(!(*p1 == 0))
    if((signed int)*p1 == 45)
    {
      vali = vali + (double)penal;
      for( ; (signed int)*p1 == 45; p2 = p2 + 1l)
        p1 = p1 + 1l;
    }

    else
      if((signed int)*p2 == 45)
      {
        vali = vali + (double)penal;
        for( ; (signed int)*p2 == 45; p2 = p2 + 1l)
          p1 = p1 + 1l;
      }

      else
      {
        tmp_post_4 = p1;
        p1 = p1 + 1l;
        tmp_post_5 = p2;
        p2 = p2 + 1l;
        vali = vali + (double)amino_dis[(signed long int)(unsigned char)*tmp_post_4][(signed long int)(unsigned char)*tmp_post_5];
      }
  free((void *)s1);
  free((void *)s2);
  return vali;
}

// new_FinalGapCount
// file mltaln9.c line 7651
extern void new_FinalGapCount(double *fgcp, signed int clus, char **seq, double *eff, signed int len, char *egappat)
{
  signed int i;
  signed int j;
  signed int gc;
  signed int gb;
  double feff;
  double *fpt;
  char *spt;
  fpt = fgcp;
  i = len;
  signed int tmp_post_1;
  double *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = 0.0;
  }
  while((_Bool)1);
  j = 0;
  signed int tmp_post_3;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    fpt = fgcp;
    spt = seq[(signed long int)j];
    gc = (signed int)((signed int)*spt == 45);
    i = len;
    do
    {
      tmp_post_3 = i;
      i = i - 1;
      if(tmp_post_3 == 0)
        break;

      gb = gc;
      spt = spt + 1l;
      gc = (signed int)((signed int)*spt == 45);
      if(!(gb * (signed int)(gc == 0) == 0))
        *fpt = *fpt + feff;

      fpt = fpt + 1l;
    }
    while((_Bool)1);
    gb = gc;
    gc = (signed int)((signed int)egappat[(signed long int)j] == 45);
    if(!(gb * (signed int)(gc == 0) == 0))
      *fpt = *fpt + feff;

  }
}

// new_FinalGapCount_zure
// file mltaln9.c line 7587
extern void new_FinalGapCount_zure(double *fgcp, signed int clus, char **seq, double *eff, signed int len, char *sgappat, char *egappat)
{
  signed int i;
  signed int j;
  signed int gc;
  signed int gb;
  double feff;
  double *fpt;
  char *spt;
  fpt = fgcp;
  i = len + 2;
  signed int tmp_post_1;
  double *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = 0.0;
  }
  while((_Bool)1);
  j = 0;
  signed int tmp_post_3;
  char *tmp_post_4;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    fpt = fgcp;
    spt = seq[(signed long int)j];
    gc = (signed int)((signed int)sgappat[(signed long int)j] == 45);
    i = len;
    do
    {
      tmp_post_3 = i;
      i = i - 1;
      if(tmp_post_3 == 0)
        break;

      gb = gc;
      tmp_post_4 = spt;
      spt = spt + 1l;
      gc = (signed int)((signed int)*tmp_post_4 == 45);
      if(!(gb * (signed int)(gc == 0) == 0))
        *fpt = *fpt + feff;

      fpt = fpt + 1l;
    }
    while((_Bool)1);
    gb = gc;
    gc = (signed int)((signed int)egappat[(signed long int)j] == 45);
    if(!(gb * (signed int)(gc == 0) == 0))
      *fpt = *fpt + feff;

  }
}

// new_OpeningGapCount
// file mltaln9.c line 7478
extern void new_OpeningGapCount(double *ogcp, signed int clus, char **seq, double *eff, signed int len, char *sgappat)
{
  signed int i;
  signed int j;
  signed int gc;
  signed int gb;
  double feff;
  double *fpt;
  char *spt;
  fpt = ogcp;
  i = len;
  signed int tmp_post_1;
  double *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = 0.0;
  }
  while((_Bool)1);
  j = 0;
  signed int tmp_post_3;
  char *tmp_post_4;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    spt = seq[(signed long int)j];
    fpt = ogcp;
    gc = (signed int)((signed int)sgappat[(signed long int)j] == 45);
    i = len;
    do
    {
      tmp_post_3 = i;
      i = i - 1;
      if(tmp_post_3 == 0)
        break;

      gb = gc;
      tmp_post_4 = spt;
      spt = spt + 1l;
      gc = (signed int)((signed int)*tmp_post_4 == 45);
      if(!(gc * (signed int)(gb == 0) == 0))
        *fpt = *fpt + feff;

      fpt = fpt + 1l;
    }
    while((_Bool)1);
  }
}

// new_OpeningGapCount_zure
// file mltaln9.c line 7527
extern void new_OpeningGapCount_zure(double *ogcp, signed int clus, char **seq, double *eff, signed int len, char *sgappat, char *egappat)
{
  signed int i;
  signed int j;
  signed int gc;
  signed int gb;
  double feff;
  double *fpt;
  char *spt;
  fpt = ogcp;
  i = len + 2;
  signed int tmp_post_1;
  double *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = 0.0;
  }
  while((_Bool)1);
  j = 0;
  signed int tmp_post_3;
  char *tmp_post_4;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    spt = seq[(signed long int)j];
    fpt = ogcp;
    gc = (signed int)((signed int)sgappat[(signed long int)j] == 45);
    i = len;
    do
    {
      tmp_post_3 = i;
      i = i - 1;
      if(tmp_post_3 == 0)
        break;

      gb = gc;
      tmp_post_4 = spt;
      spt = spt + 1l;
      gc = (signed int)((signed int)*tmp_post_4 == 45);
      if(!(gc * (signed int)(gb == 0) == 0))
        *fpt = *fpt + feff;

      fpt = fpt + 1l;
    }
    while((_Bool)1);
    gb = gc;
    gc = (signed int)((signed int)egappat[(signed long int)j] == 45);
    if(!(gc * (signed int)(gb == 0) == 0))
      *fpt = *fpt + feff;

  }
}

// onlyAlpha_lower
// file io.c line 1270
static signed int onlyAlpha_lower(char *str)
{
  char tmp;
  char *res = str;
  char *bk = str;
  char *tmp_post_1;
  const unsigned short int **return_value___ctype_b_loc_4;
  char *tmp_post_2;
  signed int return_value_tolower_3;
  do
  {
    tmp_post_1 = str;
    str = str + 1l;
    tmp = *tmp_post_1;
    if(tmp == 0)
      break;

    return_value___ctype_b_loc_4=__ctype_b_loc();
    if((signed int)tmp == 42 || (signed int)tmp == 45 || (signed int)tmp == 46 || !((1024 & (signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)tmp]) == 0))
    {
      tmp_post_2 = res;
      res = res + 1l;
      return_value_tolower_3=tolower((signed int)tmp);
      *tmp_post_2 = (char)return_value_tolower_3;
    }

  }
  while((_Bool)1);
  *res = (char)0;
  return (signed int)(res - bk);
}

// onlyAlpha_upper
// file io.c line 1282
static signed int onlyAlpha_upper(char *str)
{
  char tmp;
  char *res = str;
  char *bk = str;
  char *tmp_post_1;
  const unsigned short int **return_value___ctype_b_loc_4;
  char *tmp_post_2;
  signed int return_value_toupper_3;
  do
  {
    tmp_post_1 = str;
    str = str + 1l;
    tmp = *tmp_post_1;
    if(tmp == 0)
      break;

    return_value___ctype_b_loc_4=__ctype_b_loc();
    if((signed int)tmp == 42 || (signed int)tmp == 45 || (signed int)tmp == 46 || !((1024 & (signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)tmp]) == 0))
    {
      tmp_post_2 = res;
      res = res + 1l;
      return_value_toupper_3=toupper((signed int)tmp);
      *tmp_post_2 = (char)return_value_toupper_3;
    }

  }
  while((_Bool)1);
  *res = (char)0;
  return (signed int)(res - bk);
}

// outgapcount
// file mltaln9.c line 9500
extern void outgapcount(double *freq, signed int nseq, char *gappat, double *eff)
{
  signed int j;
  double fr = 0.0;
  j = 0;
  for( ; !(j >= nseq); j = j + 1)
    if((signed int)gappat[(signed long int)j] == 45)
      fr = fr + eff[(signed long int)j];

  *freq = fr;
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// outlocalhom
// file io.c line 4451
extern void outlocalhom(struct _LocalHom **localhom, signed int nseq)
{
  signed int i;
  signed int j;
  struct _LocalHom *tmpptr;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
    {
      tmpptr = localhom[(signed long int)i] + (signed long int)j;
      fprintf(stderr, "%d-%d\n", i, j);
      do
      {
        fprintf(stderr, "reg1=%d-%d, reg2=%d-%d, imp=%f, opt=%f\n", tmpptr->start1, tmpptr->end1, tmpptr->start2, tmpptr->end2, tmpptr->importance, tmpptr->opt);
        tmpptr = tmpptr->next;
      }
      while(!(tmpptr == ((struct _LocalHom *)NULL)));
    }
  }
}

// outlocalhom_part
// file io.c line 4435
extern void outlocalhom_part(struct _LocalHom **localhom, signed int norg, signed int nadd)
{
  signed int i;
  signed int j;
  struct _LocalHom *tmpptr;
  i = 0;
  for( ; !(i >= norg); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nadd); j = j + 1)
    {
      tmpptr = localhom[(signed long int)i] + (signed long int)j;
      fprintf(stderr, "%d-%d\n", i, j + norg);
      do
      {
        fprintf(stderr, "reg1=%d-%d, reg2=%d-%d, imp=%f, opt=%f\n", tmpptr->start1, tmpptr->end1, tmpptr->start2, tmpptr->end2, tmpptr->importance, tmpptr->opt);
        tmpptr = tmpptr->next;
      }
      while(!(tmpptr == ((struct _LocalHom *)NULL)));
    }
  }
}

// outlocalhompt
// file io.c line 4467
extern void outlocalhompt(struct _LocalHom ***localhom, signed int n1, signed int n2)
{
  signed int i;
  signed int j;
  struct _LocalHom *tmpptr;
  i = 0;
  for( ; !(i >= n1); i = i + 1)
  {
    j = 0;
    for( ; !(j >= n2); j = j + 1)
    {
      tmpptr = localhom[(signed long int)i][(signed long int)j];
      do
      {
        fprintf(stdout, "%d-%d, reg1=%d-%d, reg2=%d-%d, imp=%f, opt=%f, wimp=%f\n", i, j, tmpptr->start1, tmpptr->end1, tmpptr->start2, tmpptr->end2, tmpptr->importance, tmpptr->opt, tmpptr->wimportance);
        tmpptr = tmpptr->next;
      }
      while(!(tmpptr == ((struct _LocalHom *)NULL)));
    }
  }
}

// overlapmember
// file mltaln9.c line 9447
extern signed int overlapmember(signed int *mem1, signed int *mem2)
{
  signed int i;
  signed int j;
  i = 0;
  for( ; mem1[(signed long int)i] >= 0; i = i + 1)
  {
    j = 0;
    for( ; mem2[(signed long int)j] >= 0; j = j + 1)
      if(mem1[(signed long int)i] == mem2[(signed long int)j])
        return 1;

  }
  return 0;
}

// phylipout_pointer
// file io.c line 4710
extern void phylipout_pointer(struct _IO_FILE *fp, signed int nseq, signed int maxlen, char **seq, char **name, signed int *order, signed int namelen)
{
  signed int pos;
  signed int pos2;
  signed int j;
  if(namelen == -1)
    namelen = 10;

  pos = 0;
  fprintf(fp, " %d %d\n", nseq, maxlen);
  char *return_value_extractfirstword_1;
  for( ; !(pos >= maxlen); pos = pos + 50)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
    {
      if(pos == 0)
      {
        return_value_extractfirstword_1=extractfirstword(name[(signed long int)order[(signed long int)j]] + (signed long int)1);
        fprintf(fp, "%-*.*s", namelen, namelen, return_value_extractfirstword_1);
      }

      else
        fprintf(fp, "%-*.*s", namelen, namelen, (const void *)"");
      pos2 = pos;
      for( ; !(pos2 >= 41 + pos) && !(pos2 >= maxlen); pos2 = pos2 + 10)
        fprintf(fp, " %.10s", seq[(signed long int)order[(signed long int)j]] + (signed long int)pos2);
      fprintf(fp, "\n");
    }
    fprintf(fp, "\n");
  }
}

// plainscore
// file mltaln9.c line 8751
extern double plainscore(signed int nseq, char **s)
{
  signed int i;
  signed int j;
  signed int ilim;
  double v = 0.0;
  ilim = nseq - 1;
  i = 0;
  for( ; !(i >= ilim); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
    {
      double return_value_naivepairscore11_1;
      return_value_naivepairscore11_1=naivepairscore11(s[(signed long int)i], s[(signed long int)j], penalty);
      v = v + (double)return_value_naivepairscore11_1;
    }
  }
  reporterr("penalty = %d\n", penalty);
  return v;
}

// progName
// file functions.h line 61
extern char * progName(char *str)
{
  char *value;
  value=strrchr(str, 47);
  if(!(value == ((char *)NULL)))
    return value + (signed long int)1;

  else
    return str;
}

// putlocalhom
// file io.c line 790
extern void putlocalhom(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa)
{
  signed int pos1;
  signed int pos2;
  signed int start1;
  signed int start2;
  signed int end1;
  signed int end2;
  char *pt1;
  char *pt2;
  double score;
  double sumscore;
  signed int sumoverlap;
  struct _LocalHom *tmppt = localhompt;
  signed int nlocalhom = 0;
  signed int st;
  pt1 = al1;
  pt2 = al2;
  pos1 = off1;
  pos2 = off2;
  sumscore = 0.0;
  sumoverlap = 0;
  start1 = 0;
  start2 = 0;
  st = 0;
  score = 0.0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  signed int tmp_post_2;
  char *tmp_post_5;
  char *tmp_post_6;
  while(!((signed int)*pt1 == 0))
  {
    if(st == 1)
    {
      if((signed int)*pt1 == 45)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)*pt2 == 45 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
    {
      end1 = pos1 - 1;
      end2 = pos2 - 1;
      tmp_post_2 = nlocalhom;
      nlocalhom = nlocalhom + 1;
      if(tmp_post_2 >= 1)
      {
        void *return_value_calloc_1;
        return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
        tmppt->next = (struct _LocalHom *)return_value_calloc_1;
        tmppt = tmppt->next;
        tmppt->next = (struct _LocalHom *)(void *)0;
      }

      tmppt->start1 = start1;
      tmppt->start2 = start2;
      tmppt->end1 = end1;
      tmppt->end2 = end2;
      if(!(divpairscore == 0))
      {
        tmppt->overlapaa = (end2 - start2) + 1;
        tmppt->opt = ((score / (double)tmppt->overlapaa) * 5.8) / (double)600;
      }

      else
      {
        sumscore = sumscore + score;
        sumoverlap = sumoverlap + (end2 - start2) + 1;
      }
      score = 0.0;
      st = 0;
    }

    else
      if(!((signed int)*pt1 == 45))
      {
        if(!((signed int)*pt2 == 45))
        {
          if(st == 0)
          {
            start1 = pos1;
            start2 = pos2;
            st = 1;
          }

          score = score + (double)n_dis[(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt1]][(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt2]];
        }

      }

    tmp_post_5 = pt1;
    pt1 = pt1 + 1l;
    if(!((signed int)*tmp_post_5 == 45))
      pos1 = pos1 + 1;

    tmp_post_6 = pt2;
    pt2 = pt2 + 1l;
    if(!((signed int)*tmp_post_6 == 45))
      pos2 = pos2 + 1;

  }
  signed int tmp_post_8 = nlocalhom;
  nlocalhom = nlocalhom + 1;
  if(tmp_post_8 >= 1)
  {
    void *return_value_calloc_7;
    return_value_calloc_7=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
    tmppt->next = (struct _LocalHom *)return_value_calloc_7;
    tmppt = tmppt->next;
    tmppt->next = (struct _LocalHom *)(void *)0;
  }

  end1 = pos1 - 1;
  end2 = pos2 - 1;
  tmppt->start1 = start1;
  tmppt->start2 = start2;
  tmppt->end1 = end1;
  tmppt->end2 = end2;
  if(!(divpairscore == 0))
  {
    tmppt->overlapaa = (end2 - start2) + 1;
    tmppt->opt = ((score / (double)tmppt->overlapaa) * 5.8) / (double)600;
  }

  else
  {
    sumscore = sumscore + score;
    sumoverlap = sumoverlap + (end2 - start2) + 1;
  }
  if(divpairscore == 0)
  {
    tmppt = localhompt;
    for( ; !(tmppt == ((struct _LocalHom *)NULL)); tmppt = tmppt->next)
    {
      tmppt->overlapaa = sumoverlap;
      tmppt->opt = ((sumscore * 5.8) / (double)600) / (double)sumoverlap;
    }
  }

}

// putlocalhom2
// file io.c line 661
extern void putlocalhom2(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa)
{
  signed int pos1;
  signed int pos2;
  signed int start1;
  signed int start2;
  signed int end1;
  signed int end2;
  char *pt1;
  char *pt2;
  signed int iscore;
  signed int isumscore;
  signed int sumoverlap;
  struct _LocalHom *tmppt = localhompt;
  signed int nlocalhom = 0;
  signed int st;
  pt1 = al1;
  pt2 = al2;
  pos1 = off1;
  pos2 = off2;
  isumscore = 0;
  sumoverlap = 0;
  start1 = 0;
  start2 = 0;
  st = 0;
  iscore = 0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  signed int tmp_post_2;
  char *tmp_post_5;
  char *tmp_post_6;
  while(!((signed int)*pt1 == 0))
  {
    if(st == 1)
    {
      if((signed int)*pt1 == 45)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)*pt2 == 45 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
    {
      end1 = pos1 - 1;
      end2 = pos2 - 1;
      tmp_post_2 = nlocalhom;
      nlocalhom = nlocalhom + 1;
      if(tmp_post_2 >= 1)
      {
        void *return_value_calloc_1;
        return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
        tmppt->next = (struct _LocalHom *)return_value_calloc_1;
        tmppt = tmppt->next;
        tmppt->next = (struct _LocalHom *)(void *)0;
      }

      tmppt->start1 = start1;
      tmppt->start2 = start2;
      tmppt->end1 = end1;
      tmppt->end2 = end2;
      if(!(divpairscore == 0))
      {
        tmppt->overlapaa = (end2 - start2) + 1;
        tmppt->opt = (((double)iscore / (double)tmppt->overlapaa) * 5.8) / (double)600;
      }

      else
      {
        isumscore = isumscore + iscore;
        sumoverlap = sumoverlap + (end2 - start2) + 1;
      }
      iscore = 0;
      st = 0;
    }

    else
      if(!((signed int)*pt1 == 45))
      {
        if(!((signed int)*pt2 == 45))
        {
          if(st == 0)
          {
            start1 = pos1;
            start2 = pos2;
            st = 1;
          }

          iscore = iscore + n_dis[(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt1]][(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt2]];
        }

      }

    tmp_post_5 = pt1;
    pt1 = pt1 + 1l;
    if(!((signed int)*tmp_post_5 == 45))
      pos1 = pos1 + 1;

    tmp_post_6 = pt2;
    pt2 = pt2 + 1l;
    if(!((signed int)*tmp_post_6 == 45))
      pos2 = pos2 + 1;

  }
  signed int tmp_post_8;
  if(!((signed int)pt1[-1l] == 45))
  {
    if(!((signed int)pt2[-1l] == 45))
    {
      tmp_post_8 = nlocalhom;
      nlocalhom = nlocalhom + 1;
      if(tmp_post_8 >= 1)
      {
        void *return_value_calloc_7;
        return_value_calloc_7=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
        tmppt->next = (struct _LocalHom *)return_value_calloc_7;
        tmppt = tmppt->next;
        tmppt->next = (struct _LocalHom *)(void *)0;
      }

      end1 = pos1 - 1;
      end2 = pos2 - 1;
      tmppt->start1 = start1;
      tmppt->start2 = start2;
      tmppt->end1 = end1;
      tmppt->end2 = end2;
      if(!(divpairscore == 0))
      {
        tmppt->overlapaa = (end2 - start2) + 1;
        tmppt->opt = (((double)iscore / (double)tmppt->overlapaa) * 5.8) / (double)600;
      }

      else
      {
        isumscore = isumscore + iscore;
        sumoverlap = sumoverlap + (end2 - start2) + 1;
      }
    }

  }

  if(divpairscore == 0)
  {
    tmppt = localhompt;
    for( ; !(tmppt == ((struct _LocalHom *)NULL)); tmppt = tmppt->next)
    {
      tmppt->overlapaa = sumoverlap;
      tmppt->opt = ((double)isumscore * 5.8) / (double)(600 * sumoverlap);
    }
  }

}

// putlocalhom3
// file io.c line 336
extern void putlocalhom3(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa)
{
  signed int pos1;
  signed int pos2;
  signed int start1;
  signed int start2;
  signed int end1;
  signed int end2;
  char *pt1;
  char *pt2;
  double score;
  double sumscore;
  signed int sumoverlap;
  struct _LocalHom *tmppt;
  struct _LocalHom *subnosento;
  signed int st;
  signed int saisho;
  pt1 = al1;
  pt2 = al2;
  pos1 = off1;
  pos2 = off2;
  sumscore = 0.0;
  sumoverlap = 0;
  start1 = 0;
  start2 = 0;
  subnosento = localhompt;
  for( ; !(subnosento->next == ((struct _LocalHom *)NULL)); subnosento = subnosento->next)
    ;
  tmppt = subnosento;
  saisho = (signed int)(localhompt->nokori == 0);
  fprintf(stderr, "localhompt = %p\n", (void *)localhompt);
  fprintf(stderr, "tmppt = %p\n", (void *)tmppt);
  fprintf(stderr, "subnosento = %p\n", (void *)subnosento);
  st = 0;
  score = 0.0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  signed int tmp_post_2;
  char *tmp_post_5;
  char *tmp_post_6;
  while(!((signed int)*pt1 == 0))
  {
    if(st == 1)
    {
      if((signed int)*pt1 == 45)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)*pt2 == 45 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
    {
      end1 = pos1 - 1;
      end2 = pos2 - 1;
      tmp_post_2 = localhompt->nokori;
      localhompt->nokori = localhompt->nokori + 1;
      if(tmp_post_2 >= 1)
      {
        void *return_value_calloc_1;
        return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
        tmppt->next = (struct _LocalHom *)return_value_calloc_1;
        tmppt = tmppt->next;
        tmppt->next = (struct _LocalHom *)(void *)0;
      }

      tmppt->start1 = start1;
      tmppt->start2 = start2;
      tmppt->end1 = end1;
      tmppt->end2 = end2;
      if(!(divpairscore == 0))
      {
        tmppt->overlapaa = (end2 - start2) + 1;
        tmppt->opt = ((score / (double)tmppt->overlapaa) * 5.8) / (double)600;
      }

      else
      {
        sumscore = sumscore + score;
        sumoverlap = sumoverlap + (end2 - start2) + 1;
      }
      score = 0.0;
      st = 0;
    }

    else
      if(!((signed int)*pt1 == 45))
      {
        if(!((signed int)*pt2 == 45))
        {
          if(st == 0)
          {
            start1 = pos1;
            start2 = pos2;
            st = 1;
          }

          score = score + (double)n_dis[(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt1]][(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt2]];
        }

      }

    tmp_post_5 = pt1;
    pt1 = pt1 + 1l;
    if(!((signed int)*tmp_post_5 == 45))
      pos1 = pos1 + 1;

    tmp_post_6 = pt2;
    pt2 = pt2 + 1l;
    if(!((signed int)*tmp_post_6 == 45))
      pos2 = pos2 + 1;

  }
  signed int tmp_post_8;
  if(!((signed int)pt1[-1l] == 45))
  {
    if(!((signed int)pt2[-1l] == 45))
    {
      tmp_post_8 = localhompt->nokori;
      localhompt->nokori = localhompt->nokori + 1;
      if(tmp_post_8 >= 1)
      {
        void *return_value_calloc_7;
        return_value_calloc_7=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
        tmppt->next = (struct _LocalHom *)return_value_calloc_7;
        tmppt = tmppt->next;
        tmppt->next = (struct _LocalHom *)(void *)0;
      }

      end1 = pos1 - 1;
      end2 = pos2 - 1;
      tmppt->start1 = start1;
      tmppt->start2 = start2;
      tmppt->end1 = end1;
      tmppt->end2 = end2;
      if(!(divpairscore == 0))
      {
        tmppt->overlapaa = (end2 - start2) + 1;
        tmppt->opt = ((score / (double)tmppt->overlapaa) * 5.8) / (double)600;
      }

      else
      {
        sumscore = sumscore + score;
        sumoverlap = sumoverlap + (end2 - start2) + 1;
      }
    }

  }

  fprintf(stderr, "sumscore = %f\n", sumscore);
  if(divpairscore == 0)
  {
    if(saisho == 0)
      subnosento = subnosento->next;

    tmppt = subnosento;
    for( ; !(tmppt == ((struct _LocalHom *)NULL)); tmppt = tmppt->next)
    {
      tmppt->overlapaa = sumoverlap;
      tmppt->opt = ((sumscore * 5.8) / (double)600) / (double)sumoverlap;
      fprintf(stderr, "tmpptr->opt = %f\n", tmppt->opt);
    }
  }

}

// putlocalhom_ext
// file io.c line 481
extern void putlocalhom_ext(char *al1, char *al2, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa)
{
  signed int pos1;
  signed int pos2;
  signed int start1;
  signed int start2;
  signed int end1;
  signed int end2;
  char *pt1;
  char *pt2;
  signed int iscore;
  signed int isumscore;
  signed int sumoverlap;
  struct _LocalHom *tmppt = localhompt;
  signed int nlocalhom = 0;
  signed int st;
  pt1 = al1;
  pt2 = al2;
  pos1 = off1;
  pos2 = off2;
  isumscore = 0;
  sumoverlap = 0;
  start1 = 0;
  start2 = 0;
  st = 0;
  iscore = 0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  signed int tmp_post_2;
  char *tmp_post_5;
  char *tmp_post_6;
  while(!((signed int)*pt1 == 0))
  {
    if(st == 1)
    {
      if((signed int)*pt1 == 45)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)*pt2 == 45 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
    {
      end1 = pos1 - 1;
      end2 = pos2 - 1;
      tmp_post_2 = nlocalhom;
      nlocalhom = nlocalhom + 1;
      if(tmp_post_2 >= 1)
      {
        void *return_value_calloc_1;
        return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
        tmppt->next = (struct _LocalHom *)return_value_calloc_1;
        tmppt = tmppt->next;
        tmppt->next = (struct _LocalHom *)(void *)0;
      }

      tmppt->start1 = start1;
      tmppt->start2 = start2;
      tmppt->end1 = end1;
      tmppt->end2 = end2;
      if(!(divpairscore == 0))
      {
        tmppt->overlapaa = (end2 - start2) + 1;
        tmppt->opt = (((double)iscore / (double)tmppt->overlapaa) * 5.8) / (double)600;
      }

      else
      {
        isumscore = isumscore + iscore;
        sumoverlap = sumoverlap + (end2 - start2) + 1;
      }
      iscore = 0;
      st = 0;
    }

    else
      if(!((signed int)*pt1 == 45))
      {
        if(!((signed int)*pt2 == 45))
        {
          if(st == 0)
          {
            start1 = pos1;
            start2 = pos2;
            st = 1;
          }

          iscore = iscore + n_dis[(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt1]][(signed long int)(signed int)amino_n[(signed long int)(unsigned char)*pt2]];
        }

      }

    tmp_post_5 = pt1;
    pt1 = pt1 + 1l;
    if(!((signed int)*tmp_post_5 == 45))
      pos1 = pos1 + 1;

    tmp_post_6 = pt2;
    pt2 = pt2 + 1l;
    if(!((signed int)*tmp_post_6 == 45))
      pos2 = pos2 + 1;

  }
  signed int tmp_post_8;
  if(!((signed int)pt1[-1l] == 45))
  {
    if(!((signed int)pt2[-1l] == 45))
    {
      tmp_post_8 = nlocalhom;
      nlocalhom = nlocalhom + 1;
      if(tmp_post_8 >= 1)
      {
        void *return_value_calloc_7;
        return_value_calloc_7=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
        tmppt->next = (struct _LocalHom *)return_value_calloc_7;
        tmppt = tmppt->next;
        tmppt->next = (struct _LocalHom *)(void *)0;
      }

      end1 = pos1 - 1;
      end2 = pos2 - 1;
      tmppt->start1 = start1;
      tmppt->start2 = start2;
      tmppt->end1 = end1;
      tmppt->end2 = end2;
      if(!(divpairscore == 0))
      {
        tmppt->overlapaa = (end2 - start2) + 1;
        tmppt->opt = (((double)iscore / (double)tmppt->overlapaa) * 5.8) / (double)600;
      }

      else
      {
        isumscore = isumscore + iscore;
        sumoverlap = sumoverlap + (end2 - start2) + 1;
      }
    }

  }

  if(divpairscore == 0)
  {
    tmppt = localhompt;
    for( ; !(tmppt == ((struct _LocalHom *)NULL)); tmppt = tmppt->next)
    {
      tmppt->overlapaa = sumoverlap;
      tmppt->opt = ((double)600 * 5.8) / (double)600;
    }
  }

}

// putlocalhom_str
// file io.c line 612
extern void putlocalhom_str(char *al1, char *al2, double *equiv, double scale, struct _LocalHom *localhompt, signed int off1, signed int off2, signed int opt, signed int overlapaa)
{
  signed int posinaln;
  signed int pos1;
  signed int pos2;
  signed int start1;
  signed int start2;
  signed int end1;
  signed int end2;
  char *pt1;
  char *pt2;
  signed int isumscore;
  signed int sumoverlap;
  struct _LocalHom *tmppt = localhompt;
  signed int nlocalhom = 0;
  pt1 = al1;
  pt2 = al2;
  pos1 = off1;
  pos2 = off2;
  isumscore = 0;
  sumoverlap = 0;
  start1 = 0;
  start2 = 0;
  posinaln = 0;
  signed int tmp_post_2;
  char *tmp_post_3;
  char *tmp_post_4;
  for( ; !((signed int)*pt1 == 0); posinaln = posinaln + 1)
  {
    if(!((signed int)*pt1 == 45))
    {
      if(!((signed int)*pt2 == 45))
      {
        if(equiv[(signed long int)posinaln] > 0.0)
        {
          end1 = pos1;
          start1 = end1;
          end2 = pos2;
          start2 = end2;
          tmp_post_2 = nlocalhom;
          nlocalhom = nlocalhom + 1;
          if(tmp_post_2 >= 1)
          {
            void *return_value_calloc_1;
            return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
            tmppt->next = (struct _LocalHom *)return_value_calloc_1;
            tmppt = tmppt->next;
            tmppt->next = (struct _LocalHom *)(void *)0;
          }

          tmppt->start1 = start1;
          tmppt->start2 = start2;
          tmppt->end1 = end1;
          tmppt->end2 = end2;
          tmppt->overlapaa = 1;
          tmppt->opt = equiv[(signed long int)posinaln] * scale;
        }

      }

    }

    tmp_post_3 = pt1;
    pt1 = pt1 + 1l;
    if(!((signed int)*tmp_post_3 == 45))
      pos1 = pos1 + 1;

    tmp_post_4 = pt2;
    pt2 = pt2 + 1l;
    if(!((signed int)*tmp_post_4 == 45))
      pos2 = pos2 + 1;

  }
}

// readData
// file io.c line 1694
extern void readData(struct _IO_FILE *fp, char (*name)[256l], signed int *nlen, char **seq)
{
  signed int i;
  rewind(fp);
  searchKUorWA(fp);
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    name[(signed long int)i][(signed long int)0] = (char)61;
    _IO_getc(fp);
    myfgets(name[(signed long int)i] + (signed long int)1, 256 - 2, fp);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc(fp);
    strcpy(seq[(signed long int)i], tmpseq);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    nlen[(signed long int)i] = (signed int)return_value_strlen_1;
    free((void *)tmpseq);
  }
  if(dorp == 100 && !(upperCase == -1))
    seqLower(njob, seq);

}

// readData_pointer
// file functions.h line 196
extern void readData_pointer(struct _IO_FILE *fp, char **name, signed int *nlen, char **seq)
{
  signed int i;
  rewind(fp);
  searchKUorWA(fp);
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    name[(signed long int)i][(signed long int)0] = (char)61;
    _IO_getc(fp);
    myfgets(name[(signed long int)i] + (signed long int)1, 256 - 2, fp);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc(fp);
    strcpy(seq[(signed long int)i], tmpseq);
    free((void *)tmpseq);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    nlen[(signed long int)i] = (signed int)return_value_strlen_1;
  }
  if(dorp == 100 && !(upperCase == -1))
    seqLower(njob, seq);

  if(!(outnumber == 0))
  {
    char *namebuf;
    char *cptr;
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)(256 + 100), sizeof(char) /*1ul*/ );
    namebuf = (char *)return_value_calloc_2;
    i = 0;
    for( ; !(i >= njob); i = i + 1)
    {
      namebuf[(signed long int)0] = (char)61;
      cptr=strstr(name[(signed long int)i], "_numo_e_");
      if(!(cptr == ((char *)NULL)))
        sprintf(namebuf + (signed long int)1, "_numo_s_%08d_numo_e_%s", i + 1, cptr + (signed long int)8);

      else
        sprintf(namebuf + (signed long int)1, "_numo_s_%08d_numo_e_%s", i + 1, name[(signed long int)i] + (signed long int)1);
      strncpy(name[(signed long int)i], namebuf, (unsigned long int)256);
      name[(signed long int)i][(signed long int)(256 - 1)] = (char)0;
    }
    free((void *)namebuf);
  }

}

// readData_pointer2
// file io.c line 1488
extern void readData_pointer2(struct _IO_FILE *fp, signed int nseq, char **name, signed int *nlen, char **seq)
{
  signed int i;
  rewind(fp);
  searchKUorWA(fp);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    name[(signed long int)i][(signed long int)0] = (char)61;
    _IO_getc(fp);
    myfgets(name[(signed long int)i] + (signed long int)1, 256 - 2, fp);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc(fp);
    strcpy(seq[(signed long int)i], tmpseq);
    free((void *)tmpseq);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    nlen[(signed long int)i] = (signed int)return_value_strlen_1;
  }
  if(dorp == 100 && !(upperCase == -1))
    seqLower(nseq, seq);

  if(!(outnumber == 0))
  {
    char *namebuf;
    char *cptr;
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)(256 + 100), sizeof(char) /*1ul*/ );
    namebuf = (char *)return_value_calloc_2;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
    {
      namebuf[(signed long int)0] = (char)61;
      cptr=strstr(name[(signed long int)i], "_numo_e_");
      if(!(cptr == ((char *)NULL)))
        sprintf(namebuf + (signed long int)1, "_numo_s_%08d_numo_e_%s", i + 1, cptr + (signed long int)8);

      else
        sprintf(namebuf + (signed long int)1, "_numo_s_%08d_numo_e_%s", i + 1, name[(signed long int)i] + (signed long int)1);
      strncpy(name[(signed long int)i], namebuf, (unsigned long int)256);
      name[(signed long int)i][(signed long int)(256 - 1)] = (char)0;
    }
    free((void *)namebuf);
  }

}

// readData_pointer_casepreserve
// file io.c line 1549
extern void readData_pointer_casepreserve(struct _IO_FILE *fp, char **name, signed int *nlen, char **seq)
{
  signed int i;
  rewind(fp);
  searchKUorWA(fp);
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    name[(signed long int)i][(signed long int)0] = (char)61;
    _IO_getc(fp);
    myfgets(name[(signed long int)i] + (signed long int)1, 256 - 2, fp);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc_casepreserve(fp);
    strcpy(seq[(signed long int)i], tmpseq);
    free((void *)tmpseq);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    nlen[(signed long int)i] = (signed int)return_value_strlen_1;
  }
}

// readData_varlen
// file io.c line 1452
extern void readData_varlen(struct _IO_FILE *fp, char **name, signed int *nlen, char **seq)
{
  signed int i;
  rewind(fp);
  searchKUorWA(fp);
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    name[(signed long int)i][(signed long int)0] = (char)61;
    _IO_getc(fp);
    myfgets(name[(signed long int)i] + (signed long int)1, 256 - 2, fp);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc(fp);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(tmpseq);
    nlen[(signed long int)i] = (signed int)return_value_strlen_1;
    void *return_value_calloc_2;
    return_value_calloc_2=calloc((unsigned long int)(nlen[(signed long int)i] + 1), sizeof(char) /*1ul*/ );
    seq[(signed long int)i] = (char *)return_value_calloc_2;
    strcpy(seq[(signed long int)i], tmpseq);
    free((void *)tmpseq);
  }
  if(dorp == 100 && !(upperCase == -1))
    seqLower(njob, seq);

}

// readDataforgaln
// file io.c line 1411
extern void readDataforgaln(struct _IO_FILE *fp, char **name, signed int *nlen, char **seq)
{
  signed int i;
  rewind(fp);
  searchKUorWA(fp);
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    name[(signed long int)i][(signed long int)0] = (char)61;
    _IO_getc(fp);
    myfgets(name[(signed long int)i] + (signed long int)1, 256 - 2, fp);
    static char *tmpseq = (char *)(void *)0;
    tmpseq=load1SeqWithoutName_realloc(fp);
    strcpy(seq[(signed long int)i], tmpseq);
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    nlen[(signed long int)i] = (signed int)return_value_strlen_1;
    free((void *)tmpseq);
  }
  if(dorp == 100 && !(upperCase == -1))
    seqLower(njob, seq);

}

// readOtherOptions
// file io.c line 4031
extern void readOtherOptions(signed int *ppidptr, signed int *fftThresholdptr, signed int *fftWinSizeptr)
{
  if(!(calledByXced == 0))
  {
    struct _IO_FILE *fp;
    fp=fopen("pre", "r");
    char b[256l];
    if(fp == ((struct _IO_FILE *)NULL))
      ErrorExit("Cannot open pre.\n");

    fgets(b, 256 - 1, fp);
    sscanf(b, "%d %d %d", ppidptr, fftThresholdptr, fftWinSizeptr);
    fclose(fp);
  }

  else
  {
    *ppidptr = 0;
    *fftThresholdptr = 80;
    if(dorp == 100)
      *fftWinSizeptr = 100;

    else
      *fftWinSizeptr = 20;
  }
}

// readasubalignment
// file io.c line 4978
static signed int readasubalignment(char *s, signed int *t, signed int *preservegaps)
{
  signed int v = 0;
  char status = (char)115;
  char *pt = s;
  *preservegaps = 0;
  tab2space(s);
  _Bool tmp_if_expr_1;
  for( ; !(*pt == 0); pt = pt + 1l)
    if((signed int)*pt == 32)
      status = (char)115;

    else
      if((signed int)status == 115)
      {
        if((signed int)*pt == 10)
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (signed int)*pt == 35 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          break;

        status = (char)110;
        t[(signed long int)v]=atoi(pt);
        if(t[(signed long int)v] == 0)
        {
          fprintf(stderr, "Format error? Sequences must be specified as 1, 2, 3...\n");
          exit(1);
        }

        if(!(t[(signed long int)v] >= 0))
          *preservegaps = 1;

        t[(signed long int)v]=abs(t[(signed long int)v]);
        t[(signed long int)v] = t[(signed long int)v] - 1;
        v = v + 1;
      }

  t[(signed long int)v] = -1;
  return v;
}

// readhat2
// file io.c line 2684
extern void readhat2(struct _IO_FILE *fp, signed int nseq, char (*name)[256l], double **mtx)
{
  signed int i;
  signed int j;
  signed int nseq0;
  char b[256l];
  fgets(b, 256, fp);
  fgets(b, 256, fp);
  b[(signed long int)5] = (char)0;
  nseq0=atoi(b);
  if(!(nseq == nseq0))
    ErrorExit("hat2 is wrong.");

  fgets(b, 256, fp);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    myfgets(b, 256 - 2, fp);
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
    {
      double return_value_input_new_1;
      return_value_input_new_1=input_new(fp, 6);
      mtx[(signed long int)i][(signed long int)j] = (double)return_value_input_new_1;
    }
  }
}

// readhat2_double
// file io.c line 2593
extern void readhat2_double(struct _IO_FILE *fp, signed int nseq, char (*name)[256l], double **mtx)
{
  signed int i;
  signed int j;
  signed int nseq0;
  char b[256l];
  fgets(b, 256, fp);
  fgets(b, 256, fp);
  b[(signed long int)5] = (char)0;
  nseq0=atoi(b);
  if(!(nseq == nseq0))
    ErrorExit("hat2 is wrong.");

  fgets(b, 256, fp);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    myfgets(b, 256 - 2, fp);
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
      mtx[(signed long int)i][(signed long int)j]=input_new(fp, 6);
  }
}

// readhat2_doublehalf
// file io.c line 2563
extern void readhat2_doublehalf(struct _IO_FILE *fp, signed int nseq, char (*name)[256l], double **mtx)
{
  signed int i;
  signed int j;
  signed int nseq0;
  char b[256l];
  fgets(b, 256, fp);
  fgets(b, 256, fp);
  b[(signed long int)5] = (char)0;
  nseq0=atoi(b);
  if(!(nseq == nseq0))
    ErrorExit("hat2 is wrong.");

  fgets(b, 256, fp);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    myfgets(b, 256 - 2, fp);
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
      mtx[(signed long int)i][(signed long int)(j - i)]=input_new(fp, 6);
  }
}

// readhat2_doublehalf_part_pointer
// file io.c line 2493
extern void readhat2_doublehalf_part_pointer(struct _IO_FILE *fp, signed int nseq, signed int nadd, char **name, double **mtx)
{
  signed int i;
  signed int j;
  signed int nseq0;
  signed int norg;
  char b[256l];
  fgets(b, 256, fp);
  fgets(b, 256, fp);
  b[(signed long int)5] = (char)0;
  nseq0=atoi(b);
  if(!(nseq == nseq0))
  {
    fprintf(stderr, "%d != %d\n", nseq, nseq0);
    ErrorExit("hat2 is wrong.");
  }

  fgets(b, 256, fp);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    myfgets(b, 256 - 2, fp);
  norg = nseq - nadd;
  i = 0;
  for( ; !(i >= norg); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nadd); j = j + 1)
      mtx[(signed long int)i][(signed long int)j]=input_new(fp, 6);
  }
}

// readhat2_doublehalf_pointer
// file io.c line 2529
extern void readhat2_doublehalf_pointer(struct _IO_FILE *fp, signed int nseq, char **name, double **mtx)
{
  signed int i;
  signed int j;
  signed int nseq0;
  char b[256l];
  fgets(b, 256, fp);
  fgets(b, 256, fp);
  b[(signed long int)5] = (char)0;
  nseq0=atoi(b);
  if(!(nseq == nseq0))
  {
    fprintf(stderr, "%d != %d\n", nseq, nseq0);
    ErrorExit("hat2 is wrong.");
  }

  fgets(b, 256, fp);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    myfgets(b, 256 - 2, fp);
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
      mtx[(signed long int)i][(signed long int)(j - i)]=input_new(fp, 6);
  }
}

// readhat2_int
// file io.c line 2623
extern void readhat2_int(struct _IO_FILE *fp, signed int nseq, char (*name)[256l], signed int **mtx)
{
  signed int i;
  signed int j;
  signed int nseq0;
  char b[256l];
  fgets(b, 256, fp);
  fgets(b, 256, fp);
  b[(signed long int)5] = (char)0;
  nseq0=atoi(b);
  if(!(nseq == nseq0))
    ErrorExit("hat2 is wrong.");

  fgets(b, 256, fp);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    myfgets(b, 256 - 2, fp);
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
    {
      double return_value_input_new_1;
      return_value_input_new_1=input_new(fp, 6);
      mtx[(signed long int)i][(signed long int)j] = (signed int)(return_value_input_new_1 * 1000000.0 + 0.5);
    }
  }
}

// readhat2_pointer
// file io.c line 2654
extern void readhat2_pointer(struct _IO_FILE *fp, signed int nseq, char **name, double **mtx)
{
  signed int i;
  signed int j;
  signed int nseq0;
  char b[256l];
  fgets(b, 256, fp);
  fgets(b, 256, fp);
  b[(signed long int)5] = (char)0;
  nseq0=atoi(b);
  if(!(nseq == nseq0))
    ErrorExit("hat2 is wrong.");

  fgets(b, 256, fp);
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    myfgets(b, 256 - 2, fp);
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
    {
      double return_value_input_new_1;
      return_value_input_new_1=input_new(fp, 6);
      mtx[(signed long int)i][(signed long int)j] = (double)return_value_input_new_1;
    }
  }
}

// readlocalhomtable
// file io.c line 4209
extern void readlocalhomtable(struct _IO_FILE *fp, signed int njob, struct _LocalHom **localhomtable, char *kozoarivec)
{
  double opt;
  char infor[100l];
  signed int i;
  signed int j;
  signed int overlapaa;
  signed int start1;
  signed int end1;
  signed int start2;
  signed int end2;
  signed int **nlocalhom = (signed int **)(void *)0;
  struct _LocalHom *tmpptr1 = (struct _LocalHom *)(void *)0;
  struct _LocalHom *tmpptr2 = (struct _LocalHom *)(void *)0;
  nlocalhom=AllocateIntMtx(njob, njob);
  i = 0;
  for( ; !(i >= njob); i = i + 1)
  {
    j = 0;
    for( ; !(j >= njob); j = j + 1)
      nlocalhom[(signed long int)i][(signed long int)j] = 0;
  }
  char *return_value_fgets_1;
  signed int tmp_post_3;
  signed int tmp_post_5;
  do
  {
    static char buff[256l];
    return_value_fgets_1=fgets(buff, 256 - 1, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    sscanf(buff, "%d %d %d %lf %d %d %d %d %s", &i, &j, &overlapaa, &opt, &start1, &end1, &start2, &end2, (const void *)infor);
    if((signed int)infor[0l] == 107)
    {
      kozoarivec[(signed long int)j] = (char)1;
      kozoarivec[(signed long int)i] = kozoarivec[(signed long int)j];
    }

    tmp_post_3 = nlocalhom[(signed long int)i][(signed long int)j];
    nlocalhom[(signed long int)i][(signed long int)j] = nlocalhom[(signed long int)i][(signed long int)j] + 1;
    if(tmp_post_3 >= 1)
    {
      void *return_value_calloc_2;
      return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
      tmpptr1->next = (struct _LocalHom *)return_value_calloc_2;
      tmpptr1 = tmpptr1->next;
      tmpptr1->next = (struct _LocalHom *)(void *)0;
    }

    else
      tmpptr1 = localhomtable[(signed long int)i] + (signed long int)j;
    tmpptr1->start1 = start1;
    tmpptr1->start2 = start2;
    tmpptr1->end1 = end1;
    tmpptr1->end2 = end2;
    tmpptr1->opt = ((opt + 0.00) / 5.8) * (double)600;
    tmpptr1->overlapaa = overlapaa;
    tmpptr1->korh = infor[0l];
    tmp_post_5 = nlocalhom[(signed long int)j][(signed long int)i];
    nlocalhom[(signed long int)j][(signed long int)i] = nlocalhom[(signed long int)j][(signed long int)i] + 1;
    if(tmp_post_5 >= 1)
    {
      void *return_value_calloc_4;
      return_value_calloc_4=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
      tmpptr2->next = (struct _LocalHom *)return_value_calloc_4;
      tmpptr2 = tmpptr2->next;
      tmpptr2->next = (struct _LocalHom *)(void *)0;
    }

    else
      tmpptr2 = localhomtable[(signed long int)j] + (signed long int)i;
    tmpptr2->start2 = start1;
    tmpptr2->start1 = start2;
    tmpptr2->end2 = end1;
    tmpptr2->end1 = end2;
    tmpptr2->opt = ((opt + 0.00) / 5.8) * (double)600;
    tmpptr2->overlapaa = overlapaa;
    tmpptr2->korh = infor[0l];
  }
  while((_Bool)1);
  FreeIntMtx(nlocalhom);
}

// readlocalhomtable2
// file io.c line 4127
extern void readlocalhomtable2(struct _IO_FILE *fp, signed int njob, struct _LocalHom **localhomtable, char *kozoarivec)
{
  double opt;
  char infor[100l];
  signed int i;
  signed int j;
  signed int overlapaa;
  signed int start1;
  signed int end1;
  signed int start2;
  signed int end2;
  struct _LocalHom *tmpptr1;
  struct _LocalHom *tmpptr2;
  char *return_value_fgets_1;
  signed int tmp_post_3;
  signed int tmp_post_5;
  do
  {
    static char buff[256l];
    return_value_fgets_1=fgets(buff, 256 - 1, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    sscanf(buff, "%d %d %d %lf %d %d %d %d %s", &i, &j, &overlapaa, &opt, &start1, &end1, &start2, &end2, (const void *)infor);
    if((signed int)infor[0l] == 107)
    {
      kozoarivec[(signed long int)j] = (char)1;
      kozoarivec[(signed long int)i] = kozoarivec[(signed long int)j];
    }

    tmp_post_3 = (localhomtable[(signed long int)i] + (signed long int)j)->nokori;
    (localhomtable[(signed long int)i] + (signed long int)j)->nokori = (localhomtable[(signed long int)i] + (signed long int)j)->nokori + 1;
    if(tmp_post_3 >= 1)
    {
      tmpptr1 = (localhomtable[(signed long int)i] + (signed long int)j)->last;
      void *return_value_calloc_2;
      return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
      tmpptr1->next = (struct _LocalHom *)return_value_calloc_2;
      tmpptr1 = tmpptr1->next;
      tmpptr1->extended = -1;
      tmpptr1->next = (struct _LocalHom *)(void *)0;
      (localhomtable[(signed long int)i] + (signed long int)j)->last = tmpptr1;
    }

    else
      tmpptr1 = localhomtable[(signed long int)i] + (signed long int)j;
    tmpptr1->start1 = start1;
    tmpptr1->start2 = start2;
    tmpptr1->end1 = end1;
    tmpptr1->end2 = end2;
    tmpptr1->opt = ((opt + 0.00) / 5.8) * (double)600;
    tmpptr1->overlapaa = overlapaa;
    tmpptr1->korh = infor[0l];
    tmp_post_5 = (localhomtable[(signed long int)j] + (signed long int)i)->nokori;
    (localhomtable[(signed long int)j] + (signed long int)i)->nokori = (localhomtable[(signed long int)j] + (signed long int)i)->nokori + 1;
    if(tmp_post_5 >= 1)
    {
      tmpptr2 = (localhomtable[(signed long int)j] + (signed long int)i)->last;
      void *return_value_calloc_4;
      return_value_calloc_4=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
      tmpptr2->next = (struct _LocalHom *)return_value_calloc_4;
      tmpptr2 = tmpptr2->next;
      tmpptr2->extended = -1;
      tmpptr2->next = (struct _LocalHom *)(void *)0;
      (localhomtable[(signed long int)j] + (signed long int)i)->last = tmpptr2;
    }

    else
      tmpptr2 = localhomtable[(signed long int)j] + (signed long int)i;
    tmpptr2->start2 = start1;
    tmpptr2->start1 = start2;
    tmpptr2->end2 = end1;
    tmpptr2->end1 = end2;
    tmpptr2->opt = ((opt + 0.00) / 5.8) * (double)600;
    tmpptr2->overlapaa = overlapaa;
    tmpptr2->korh = infor[0l];
  }
  while((_Bool)1);
}

// readlocalhomtable_one
// file io.c line 4375
extern void readlocalhomtable_one(struct _IO_FILE *fp, signed int norg, signed int nadd, struct _LocalHom **localhomtable, char *kozoarivec)
{
  double opt;
  char infor[100l];
  signed int i;
  signed int j;
  signed int overlapaa;
  signed int start1;
  signed int end1;
  signed int start2;
  signed int end2;
  signed int **nlocalhom = (signed int **)(void *)0;
  struct _LocalHom *tmpptr1 = (struct _LocalHom *)(void *)0;
  nlocalhom=AllocateIntMtx(norg, nadd);
  i = 0;
  for( ; !(i >= norg); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nadd); j = j + 1)
      nlocalhom[(signed long int)i][(signed long int)j] = 0;
  }
  char *return_value_fgets_1;
  signed int tmp_post_3;
  do
  {
    static char buff[256l];
    return_value_fgets_1=fgets(buff, 256 - 1, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    sscanf(buff, "%d %d %d %lf %d %d %d %d %s", &i, &j, &overlapaa, &opt, &start1, &end1, &start2, &end2, (const void *)infor);
    if((signed int)infor[0l] == 107)
    {
      fprintf(stderr, "Not supported!\n");
      exit(1);
    }

    j = j - norg;
    tmp_post_3 = nlocalhom[(signed long int)i][(signed long int)j];
    nlocalhom[(signed long int)i][(signed long int)j] = nlocalhom[(signed long int)i][(signed long int)j] + 1;
    if(tmp_post_3 >= 1)
    {
      void *return_value_calloc_2;
      return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
      tmpptr1->next = (struct _LocalHom *)return_value_calloc_2;
      tmpptr1 = tmpptr1->next;
      tmpptr1->next = (struct _LocalHom *)(void *)0;
    }

    else
      tmpptr1 = localhomtable[(signed long int)i] + (signed long int)j;
    tmpptr1->start1 = start1;
    tmpptr1->start2 = start2;
    tmpptr1->end1 = end1;
    tmpptr1->end2 = end2;
    tmpptr1->opt = ((opt + 0.00) / 5.8) * (double)600;
    tmpptr1->overlapaa = overlapaa;
    tmpptr1->korh = infor[0l];
  }
  while((_Bool)1);
  FreeIntMtx(nlocalhom);
}

// readlocalhomtable_two
// file io.c line 4288
extern void readlocalhomtable_two(struct _IO_FILE *fp, signed int norg, signed int nadd, struct _LocalHom **localhomtable, struct _LocalHom **localhomtablex, char *kozoarivec)
{
  double opt;
  char infor[100l];
  signed int i;
  signed int j;
  signed int overlapaa;
  signed int start1;
  signed int end1;
  signed int start2;
  signed int end2;
  signed int **nlocalhom = (signed int **)(void *)0;
  signed int **nlocalhomx = (signed int **)(void *)0;
  struct _LocalHom *tmpptr1 = (struct _LocalHom *)(void *)0;
  struct _LocalHom *tmpptr2 = (struct _LocalHom *)(void *)0;
  nlocalhom=AllocateIntMtx(norg, nadd);
  i = 0;
  for( ; !(i >= norg); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nadd); j = j + 1)
      nlocalhom[(signed long int)i][(signed long int)j] = 0;
  }
  nlocalhomx=AllocateIntMtx(nadd, norg);
  i = 0;
  for( ; !(i >= nadd); i = i + 1)
  {
    j = 0;
    for( ; !(j >= norg); j = j + 1)
      nlocalhomx[(signed long int)i][(signed long int)j] = 0;
  }
  char *return_value_fgets_1;
  signed int tmp_post_3;
  signed int tmp_post_5;
  do
  {
    static char buff[256l];
    return_value_fgets_1=fgets(buff, 256 - 1, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    sscanf(buff, "%d %d %d %lf %d %d %d %d %s", &i, &j, &overlapaa, &opt, &start1, &end1, &start2, &end2, (const void *)infor);
    if((signed int)infor[0l] == 107)
    {
      fprintf(stderr, "Not supported!\n");
      exit(1);
    }

    j = j - norg;
    tmp_post_3 = nlocalhom[(signed long int)i][(signed long int)j];
    nlocalhom[(signed long int)i][(signed long int)j] = nlocalhom[(signed long int)i][(signed long int)j] + 1;
    if(tmp_post_3 >= 1)
    {
      void *return_value_calloc_2;
      return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
      tmpptr1->next = (struct _LocalHom *)return_value_calloc_2;
      tmpptr1 = tmpptr1->next;
      tmpptr1->next = (struct _LocalHom *)(void *)0;
    }

    else
      tmpptr1 = localhomtable[(signed long int)i] + (signed long int)j;
    tmpptr1->start1 = start1;
    tmpptr1->start2 = start2;
    tmpptr1->end1 = end1;
    tmpptr1->end2 = end2;
    tmpptr1->opt = ((opt + 0.00) / 5.8) * (double)600;
    tmpptr1->overlapaa = overlapaa;
    tmpptr1->korh = infor[0l];
    tmp_post_5 = nlocalhomx[(signed long int)j][(signed long int)i];
    nlocalhomx[(signed long int)j][(signed long int)i] = nlocalhomx[(signed long int)j][(signed long int)i] + 1;
    if(tmp_post_5 >= 1)
    {
      void *return_value_calloc_4;
      return_value_calloc_4=calloc((unsigned long int)1, sizeof(struct _LocalHom) /*88ul*/ );
      tmpptr2->next = (struct _LocalHom *)return_value_calloc_4;
      tmpptr2 = tmpptr2->next;
      tmpptr2->next = (struct _LocalHom *)(void *)0;
    }

    else
      tmpptr2 = localhomtablex[(signed long int)j] + (signed long int)i;
    tmpptr2->start2 = start1 + 1;
    tmpptr2->start1 = start2;
    tmpptr2->end2 = end1 + 1;
    tmpptr2->end1 = end2;
    tmpptr2->opt = ((opt + 0.00) / 5.8) * (double)600;
    tmpptr2->overlapaa = overlapaa;
    tmpptr2->korh = infor[0l];
  }
  while((_Bool)1);
  FreeIntMtx(nlocalhom);
  FreeIntMtx(nlocalhomx);
}

// readmccaskill
// file io.c line 5125
void readmccaskill(struct _IO_FILE *fp, struct _RNApair **pairprob, signed int length)
{
  char gett[1000l];
  signed int *pairnum;
  signed int i;
  signed int left;
  signed int right;
  double prob;
  signed int c;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)length, sizeof(signed int) /*4ul*/ );
  pairnum = (signed int *)return_value_calloc_1;
  i = 0;
  for( ; !(i >= length); i = i + 1)
    pairnum[(signed long int)i] = 0;
  c=_IO_getc(fp);
  if(!(c == 62))
  {
    fprintf(stderr, "format error in hat4 - 1\n");
    exit(1);
  }

  fgets(gett, 999, fp);
  while((_Bool)1)
  {
    signed int return_value_feof_2;
    return_value_feof_2=feof(fp);
    if(!(return_value_feof_2 == 0))
      break;

    c=_IO_getc(fp);
    ungetc(c, fp);
    if(c == 62 || c == -1)
      break;

    fgets(gett, 999, fp);
    sscanf(gett, "%d %d %lf", &left, &right, &prob);
    if(left >= length || right >= length)
    {
      fprintf(stderr, "format error in hat4 - 2\n");
      exit(1);
    }

    if(!(prob < 0.01))
    {
      if(prob > 0.0 && !(left == right))
      {
        void *return_value_realloc_3;
        return_value_realloc_3=realloc((void *)pairprob[(signed long int)left], (unsigned long int)(pairnum[(signed long int)left] + 2) * sizeof(struct _RNApair) /*48ul*/ );
        pairprob[(signed long int)left] = (struct _RNApair *)return_value_realloc_3;
        (pairprob[(signed long int)left] + (signed long int)pairnum[(signed long int)left])->bestscore = prob;
        (pairprob[(signed long int)left] + (signed long int)pairnum[(signed long int)left])->bestpos = right;
        pairnum[(signed long int)left] = pairnum[(signed long int)left] + 1;
        (pairprob[(signed long int)left] + (signed long int)pairnum[(signed long int)left])->bestscore = -1.0;
        (pairprob[(signed long int)left] + (signed long int)pairnum[(signed long int)left])->bestpos = -1;
        void *return_value_realloc_4;
        return_value_realloc_4=realloc((void *)pairprob[(signed long int)right], (unsigned long int)(pairnum[(signed long int)right] + 2) * sizeof(struct _RNApair) /*48ul*/ );
        pairprob[(signed long int)right] = (struct _RNApair *)return_value_realloc_4;
        (pairprob[(signed long int)right] + (signed long int)pairnum[(signed long int)right])->bestscore = prob;
        (pairprob[(signed long int)right] + (signed long int)pairnum[(signed long int)right])->bestpos = left;
        pairnum[(signed long int)right] = pairnum[(signed long int)right] + 1;
        (pairprob[(signed long int)right] + (signed long int)pairnum[(signed long int)right])->bestscore = -1.0;
        (pairprob[(signed long int)right] + (signed long int)pairnum[(signed long int)right])->bestpos = -1;
      }

    }

  }
  free((void *)pairnum);
}

// readpairfoldalign
// file io.c line 5189
extern void readpairfoldalign(struct _IO_FILE *fp, char *s1, char *s2, char *aln1, char *aln2, signed int q1, signed int q2, signed int *of1, signed int *of2, signed int sumlen)
{
  char gett[1000l];
  signed int *maptoseq1;
  signed int *maptoseq2;
  char dumc;
  signed int dumi;
  char sinseq[100l];
  char sinaln[100l];
  signed int posinseq;
  signed int posinaln;
  signed int alnlen;
  signed int i;
  signed int pos1;
  signed int pos2;
  char *pa1;
  char *pa2;
  char qstr[1000l];
  *of1 = -1;
  *of2 = -1;
  maptoseq1=AllocateIntVec(sumlen + 1);
  maptoseq2=AllocateIntVec(sumlen + 1);
  posinaln = 0;
  signed int return_value_feof_1;
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    fgets(gett, 999, fp);
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp(gett, "; ALIGNING", (unsigned long int)10);
    if(return_value_strncmp_2 == 0)
      break;

  }
  while((_Bool)1);
  sprintf(qstr, "; ALIGNING            %d against %d\n", q1 + 1, q2 + 1);
  signed int return_value_strcmp_3;
  return_value_strcmp_3=strcmp(gett, qstr);
  if(!(return_value_strcmp_3 == 0))
  {
    fprintf(stderr, "Error in FOLDALIGN\n");
    fprintf(stderr, "qstr = %s, but gett = %s\n", (const void *)qstr, (const void *)gett);
    exit(1);
  }

  signed int return_value_feof_4;
  do
  {
    return_value_feof_4=feof(fp);
    if(!(return_value_feof_4 == 0))
      break;

    fgets(gett, 999, fp);
    signed int return_value_strncmp_5;
    return_value_strncmp_5=strncmp(gett, "; --------", (unsigned long int)10);
    if(return_value_strncmp_5 == 0)
      break;

  }
  while((_Bool)1);
  signed int return_value_feof_6;
  do
  {
    return_value_feof_6=feof(fp);
    if(!(return_value_feof_6 == 0))
      break;

    fgets(gett, 999, fp);
    signed int return_value_strncmp_7;
    return_value_strncmp_7=strncmp(gett, "; ********", (unsigned long int)10);
    if(return_value_strncmp_7 == 0)
      break;

    sscanf(gett, "%c %c %s %s %d %d", &dumc, &dumc, (const void *)sinseq, (const void *)sinaln, &dumi, &dumi);
    posinaln=atoi(sinaln);
    posinseq=atoi(sinseq);
    maptoseq1[(signed long int)(posinaln - 1)] = posinseq - 1;
  }
  while((_Bool)1);
  alnlen = posinaln;
  signed int return_value_feof_8;
  do
  {
    return_value_feof_8=feof(fp);
    if(!(return_value_feof_8 == 0))
      break;

    fgets(gett, 999, fp);
    signed int return_value_strncmp_9;
    return_value_strncmp_9=strncmp(gett, "; --------", (unsigned long int)10);
    if(return_value_strncmp_9 == 0)
      break;

  }
  while((_Bool)1);
  signed int return_value_feof_10;
  do
  {
    return_value_feof_10=feof(fp);
    if(!(return_value_feof_10 == 0))
      break;

    fgets(gett, 999, fp);
    signed int return_value_strncmp_11;
    return_value_strncmp_11=strncmp(gett, "; ********", (unsigned long int)10);
    if(return_value_strncmp_11 == 0)
      break;

    sscanf(gett, "%c %c %s %s %d %d", &dumc, &dumc, (const void *)sinseq, (const void *)sinaln, &dumi, &dumi);
    double return_value_atof_12;
    return_value_atof_12=atof(sinaln);
    posinaln = (signed int)return_value_atof_12;
    double return_value_atof_13;
    return_value_atof_13=atof(sinseq);
    posinseq = (signed int)return_value_atof_13;
    maptoseq2[(signed long int)(posinaln - 1)] = posinseq - 1;
  }
  while((_Bool)1);
  if(!(alnlen == posinaln))
  {
    fprintf(stderr, "Error in foldalign?\n");
    exit(1);
  }

  pa1 = aln1;
  pa2 = aln2;
  i = 0;
  char *tmp_post_14;
  char *tmp_post_15;
  char *tmp_post_16;
  char *tmp_post_17;
  for( ; !(i >= alnlen); i = i + 1)
  {
    pos1 = maptoseq1[(signed long int)i];
    pos2 = maptoseq2[(signed long int)i];
    if(pos1 >= 0)
    {
      tmp_post_14 = pa1;
      pa1 = pa1 + 1l;
      *tmp_post_14 = s1[(signed long int)pos1];
    }

    else
    {
      tmp_post_15 = pa1;
      pa1 = pa1 + 1l;
      *tmp_post_15 = (char)45;
    }
    if(pos2 >= 0)
    {
      tmp_post_16 = pa2;
      pa2 = pa2 + 1l;
      *tmp_post_16 = s2[(signed long int)pos2];
    }

    else
    {
      tmp_post_17 = pa2;
      pa2 = pa2 + 1l;
      *tmp_post_17 = (char)45;
    }
  }
  *pa1 = (char)0;
  *pa2 = (char)0;
  *of1 = 0;
  i = 0;
  for( ; !(i >= alnlen); i = i + 1)
  {
    *of1 = maptoseq1[(signed long int)i];
    if(*of1 >= 0)
      break;

  }
  *of2 = 0;
  i = 0;
  for( ; !(i >= alnlen); i = i + 1)
  {
    *of2 = maptoseq2[(signed long int)i];
    if(*of2 >= 0)
      break;

  }
  free((void *)maptoseq1);
  free((void *)maptoseq2);
}

// readsubalignmentstable
// file io.c line 5047
extern void readsubalignmentstable(signed int nseq, signed int **table, signed int *preservegaps, signed int *nsubpt, signed int *maxmempt)
{
  struct _IO_FILE *fp;
  char *line;
  signed int linelen = 1000000;
  signed int nmem;
  signed int lpos;
  signed int i;
  signed int p;
  signed int *tab01;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)linelen, sizeof(char) /*1ul*/ );
  line = (char *)return_value_calloc_1;
  fp=fopen("_subalignmentstable", "r");
  if(fp == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Cannot open _subalignmentstable\n");
    exit(1);
  }

  if(table == ((signed int **)NULL))
  {
    *nsubpt = 0;
    *maxmempt = 0;
    while((_Bool)1)
    {
      fgets(line, linelen - 1, fp);
      signed int return_value_feof_2;
      return_value_feof_2=feof(fp);
      if(!(return_value_feof_2 == 0))
        break;

      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(line);
      if(!((signed int)line[-1l + (signed long int)return_value_strlen_3] == 10))
      {
        fprintf(stderr, "too long line? \n");
        exit(1);
      }

      if(!((signed int)*line == 35))
      {
        signed int return_value_atoi_4;
        return_value_atoi_4=atoi(line);
        if(!(return_value_atoi_4 == 0))
        {
          nmem=countspace(line);
          if(!(*maxmempt >= nmem))
            *maxmempt = nmem;

          *nsubpt = *nsubpt + 1;
        }

      }

    }
  }

  else
  {
    void *return_value_calloc_5;
    return_value_calloc_5=calloc((unsigned long int)nseq, sizeof(signed int) /*4ul*/ );
    tab01 = (signed int *)return_value_calloc_5;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      tab01[(signed long int)i] = 0;
    lpos = 0;
    while((_Bool)1)
    {
      fgets(line, linelen - 1, fp);
      signed int return_value_feof_6;
      return_value_feof_6=feof(fp);
      if(!(return_value_feof_6 == 0))
        break;

      unsigned long int return_value_strlen_7;
      return_value_strlen_7=strlen(line);
      if(!((signed int)line[-1l + (signed long int)return_value_strlen_7] == 10))
      {
        fprintf(stderr, "too long line? \n");
        exit(1);
      }

      if(!((signed int)*line == 35))
      {
        signed int return_value_atoi_8;
        return_value_atoi_8=atoi(line);
        if(!(return_value_atoi_8 == 0))
        {
          readasubalignment(line, table[(signed long int)lpos], preservegaps + (signed long int)lpos);
          i = 0;
          do
          {
            p = table[(signed long int)lpos][(signed long int)i];
            if(p == -1)
              break;

            if(!(tab01[(signed long int)p] == 0))
            {
              fprintf(stderr, "\nSequence %d appears in different groups.\n", p + 1);
              fprintf(stderr, "Hierarchical grouping is not supported.\n\n");
              exit(1);
            }

            tab01[(signed long int)p] = 1;
            if(!(nseq + -1 >= p))
            {
              fprintf(stderr, "Sequence %d does not exist in the input sequence file.\n", p + 1);
              exit(1);
            }

            i = i + 1;
          }
          while((_Bool)1);
          lpos = lpos + 1;
        }

      }

    }
    free((void *)tab01);
  }
  fclose(fp);
  free((void *)line);
}

// reporterr
// file functions.h line 353
extern void reporterr(const char *str, ...)
{
  void **args;
  if(!(gmsg == 0))
  {
    static struct _IO_FILE *errtmpfp = (struct _IO_FILE *)(void *)0;
    if(errtmpfp == ((struct _IO_FILE *)NULL))
      errtmpfp=fopen("maffterr", "w");

    else
      errtmpfp=fopen("maffterr", "a");
    args = (void **)&str;
    vfprintf(errtmpfp, str, args);
    args = ((void **)NULL);
    fclose(errtmpfp);
  }

  else
  {
    args = (void **)&str;
    vfprintf(stderr, str, args);
    args = ((void **)NULL);
  }
  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// resetlocalhom
// file mltaln9.c line 7439
extern void resetlocalhom(signed int nseq, struct _LocalHom **lh)
{
  signed int i;
  signed int j;
  struct _LocalHom *pt;
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
    {
      pt = lh[(signed long int)i] + (signed long int)j;
      for( ; !(pt == ((struct _LocalHom *)NULL)); pt = pt->next)
        pt->opt = 1.0;
    }
  }
}

// samemember
// file mltaln9.c line 9345
extern signed int samemember(signed int *mem, signed int *cand)
{
  signed int i;
  signed int j;
  signed int nm;
  signed int nc;
  nm = 0;
  i = 0;
  for( ; mem[(signed long int)i] >= 0; i = i + 1)
    nm = nm + 1;
  nc = 0;
  i = 0;
  for( ; cand[(signed long int)i] >= 0; i = i + 1)
    nc = nc + 1;
  if(!(nm == nc))
    return 0;

  else
  {
    i = 0;
    for( ; mem[(signed long int)i] >= 0; i = i + 1)
    {
      j = 0;
      for( ; cand[(signed long int)j] >= 0; j = j + 1)
        if(mem[(signed long int)i] == cand[(signed long int)j])
          break;

      if(cand[(signed long int)j] == -1)
        return 0;

    }
    if(mem[(signed long int)i] == -1)
      return 1;

    else
      return 0;
  }
}

// samemembern
// file mltaln9.c line 9382
extern signed int samemembern(signed int *mem, signed int *cand, signed int nc)
{
  signed int i;
  signed int j;
  signed int nm = 0;
  i = 0;
  for( ; mem[(signed long int)i] >= 0; i = i + 1)
  {
    nm = nm + 1;
    if(!(nc >= nm))
      return 0;

  }
  if(!(nm == nc))
    return 0;

  else
  {
    i = 0;
    for( ; mem[(signed long int)i] >= 0; i = i + 1)
    {
      j = 0;
      for( ; !(j >= nc); j = j + 1)
        if(mem[(signed long int)i] == cand[(signed long int)j])
          break;

      if(j == nc)
        return 0;

    }
    if(mem[(signed long int)i] == -1)
      return 1;

    else
      return 0;
  }
}

// scmx_calc
// file mltaln9.c line 72
extern void scmx_calc(signed int icyc, char **aseq, double *effarr, double **scmx)
{
  signed int i;
  signed int j;
  signed int lgth;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(aseq[(signed long int)0]);
  lgth = (signed int)return_value_strlen_1;
  j = 0;
  for( ; !(j >= lgth); j = j + 1)
  {
    i = 0;
    for( ; !(i >= nalphabets); i = i + 1)
      scmx[(signed long int)i][(signed long int)j] = (double)0;
  }
  i = 0;
  for( ; !(i >= 1 + icyc); i = i + 1)
  {
    signed int scmx_calc__1__2__1__id = amino_n[(signed long int)(unsigned char)aseq[(signed long int)i][(signed long int)0]];
    scmx[(signed long int)scmx_calc__1__2__1__id][(signed long int)0] = scmx[(signed long int)scmx_calc__1__2__1__id][(signed long int)0] + (double)effarr[(signed long int)i];
  }
  j = 1;
  for( ; !(j >= lgth + -1); j = j + 1)
  {
    i = 0;
    for( ; !(i >= 1 + icyc); i = i + 1)
    {
      signed int scmx_calc__1__3__1__1__1__id = amino_n[(signed long int)(unsigned char)aseq[(signed long int)i][(signed long int)j]];
      scmx[(signed long int)scmx_calc__1__3__1__1__1__id][(signed long int)j] = scmx[(signed long int)scmx_calc__1__3__1__1__1__id][(signed long int)j] + (double)effarr[(signed long int)i];
    }
  }
  i = 0;
  for( ; !(i >= 1 + icyc); i = i + 1)
  {
    signed int id = amino_n[(signed long int)(unsigned char)aseq[(signed long int)i][(signed long int)(lgth - 1)]];
    scmx[(signed long int)id][(signed long int)(lgth - 1)] = scmx[(signed long int)id][(signed long int)(lgth - 1)] + (double)effarr[(signed long int)i];
  }
}

// score_calc0
// file mltaln9.c line 5873
extern double score_calc0(char **seq, signed int s, double **eff, signed int ex)
{
  double tmp;
  if(scmtd == 4)
    tmp=score_calc4(seq, s, eff, ex);

  if(scmtd == 5)
    tmp=score_calc5(seq, s, eff, ex);

  else
    tmp=score_calc5(seq, s, eff, ex);
  return tmp;
}

// score_calc1
// file mltaln9.c line 5447
extern double score_calc1(char *seq1, char *seq2)
{
  signed int k;
  double score = 0.0;
  signed int count = 0;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq1);
  len = (signed int)return_value_strlen_1;
  k = 0;
  for( ; !(k >= len); k = k + 1)
    if(!((signed int)seq1[(signed long int)k] == 45))
    {
      if(!((signed int)seq2[(signed long int)k] == 45))
      {
        score = score + (double)amino_dis[(signed long int)(unsigned char)seq1[(signed long int)k]][(signed long int)(unsigned char)seq2[(signed long int)k]];
        count = count + 1;
      }

    }

  if(!(count == 0))
    score = score / (double)count;

  else
    score = 1.0;
  return score;
}

// score_calc4
// file mltaln9.c line 611
extern double score_calc4(char **seq, signed int s, double **eff, signed int ex)
{
  signed int i;
  signed int j;
  signed int k;
  double c;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score;
  signed long int tmpscore;
  char *mseq1;
  char *mseq2;
  double efficient;
  score = 0.0;
  c = 0.0;
  i = 0;
  for( ; !(i >= s + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= s); j = j + 1)
    {
      efficient = eff[(signed long int)i][(signed long int)j];
      if(mix == 1)
        efficient = 1.0;

      mseq1 = seq[(signed long int)i];
      mseq2 = seq[(signed long int)j];
      tmpscore = (signed long int)0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        if((signed int)mseq1[(signed long int)k] == 45)
        {
          if((signed int)mseq2[(signed long int)k] == 45)
            goto __CPROVER_DUMP_L11;

        }

        tmpscore = tmpscore + (signed long int)(amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]] + 400 * (signed int)!(scoremtx != 0));
        c = c + efficient;
        if((signed int)mseq1[(signed long int)k] == 45)
        {
          tmpscore = tmpscore + (signed long int)(penalty - n_dis[(signed long int)24][(signed long int)0]);
          do
          {
            k = k + 1;
            if(!((signed int)mseq1[(signed long int)k] == 45))
              break;

          }
          while((_Bool)1);
          k = k - 1;
          if(!(len + -2 >= k))
            break;

        }

        else
          if((signed int)mseq2[(signed long int)k] == 45)
          {
            tmpscore = tmpscore + (signed long int)(penalty - n_dis[(signed long int)24][(signed long int)0]);
            do
            {
              k = k + 1;
              if(!((signed int)mseq2[(signed long int)k] == 45))
                break;

            }
            while((_Bool)1);
            k = k - 1;
            if(!(len + -2 >= k))
              break;

          }


      __CPROVER_DUMP_L11:
        ;
      }
      score = score + (double)tmpscore * efficient;
    }
  }
  score = score / c;
  return (double)score;
}

// score_calc5
// file mltaln9.c line 490
extern double score_calc5(char **seq, signed int s, double **eff, signed int ex)
{
  signed int i;
  signed int j;
  signed int k;
  double c;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score;
  double tmpscore;
  char *mseq1;
  char *mseq2;
  double efficient;
  score = 0.0;
  c = 0.0;
  i = 0;
  for( ; !(i >= s); i = i + 1)
    if(!(i == ex))
    {
      efficient = eff[(signed long int)i][(signed long int)ex];
      mseq1 = seq[(signed long int)i];
      mseq2 = seq[(signed long int)ex];
      tmpscore = 0.0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        if((signed int)mseq1[(signed long int)k] == 45)
        {
          if((signed int)mseq2[(signed long int)k] == 45)
            goto __CPROVER_DUMP_L9;

        }

        tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
        if((signed int)mseq1[(signed long int)k] == 45)
        {
          tmpscore = tmpscore + (double)penalty;
          do
          {
            k = k + 1;
            if(!((signed int)mseq1[(signed long int)k] == 45))
              break;

            tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
          }
          while((_Bool)1);
          k = k - 1;
          if(!(len + -2 >= k))
            break;

        }

        else
          if((signed int)mseq2[(signed long int)k] == 45)
          {
            tmpscore = tmpscore + (double)penalty;
            do
            {
              k = k + 1;
              if(!((signed int)mseq2[(signed long int)k] == 45))
                break;

              tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
            }
            while((_Bool)1);
            k = k - 1;
            if(!(len + -2 >= k))
              break;

          }


      __CPROVER_DUMP_L9:
        ;
      }
      score = score + (double)tmpscore * efficient;
    }

  i = 0;
  for( ; !(i >= s + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= s); j = j + 1)
      if(!(i == ex) && !(j == ex))
      {
        efficient = eff[(signed long int)i][(signed long int)j];
        mseq1 = seq[(signed long int)i];
        mseq2 = seq[(signed long int)j];
        tmpscore = 0.0;
        k = 0;
        for( ; !(k >= len); k = k + 1)
        {
          if((signed int)mseq1[(signed long int)k] == 45)
          {
            if((signed int)mseq2[(signed long int)k] == 45)
              goto __CPROVER_DUMP_L22;

          }

          tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
          if((signed int)mseq1[(signed long int)k] == 45)
          {
            tmpscore = tmpscore + (double)penalty;
            do
            {
              k = k + 1;
              if(!((signed int)mseq1[(signed long int)k] == 45))
                break;

              tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
            }
            while((_Bool)1);
            k = k - 1;
            if(!(len + -2 >= k))
              break;

          }

          else
            if((signed int)mseq2[(signed long int)k] == 45)
            {
              tmpscore = tmpscore + (double)penalty;
              do
              {
                k = k + 1;
                if(!((signed int)mseq2[(signed long int)k] == 45))
                  break;

                tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
              }
              while((_Bool)1);
              k = k - 1;
              if(!(len + -2 >= k))
                break;

            }


        __CPROVER_DUMP_L22:
          ;
        }
        score = score + (double)tmpscore * efficient;
      }

  }
  return (double)score;
}

// score_calc_a
// file mltaln9.c line 6109
extern double score_calc_a(char **seq, signed int s, double **eff)
{
  signed int i;
  signed int j;
  signed int k;
  signed int gb1;
  signed int gb2;
  signed int gc1;
  signed int gc2;
  signed int cob;
  signed int nglen;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score = (double)0;
  nglen = 0;
  i = 0;
  for( ; !(i >= s + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= s); j = j + 1)
    {
      double efficient = eff[(signed long int)i][(signed long int)j];
      gc1 = 0;
      gc2 = 0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        gb1 = gc1;
        gb2 = gc2;
        gc1 = (signed int)((signed int)seq[(signed long int)i][(signed long int)k] == 45);
        gc2 = (signed int)((signed int)seq[(signed long int)j][(signed long int)k] == 45);
        cob = (signed int)!(gb1 != 0) * gc1 * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2 + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * gb2 * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * gc1 * gb2 * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2 + gb1 * (signed int)!(gc1 != 0) * gb2 * gc2 + gb1 * gc1 * gb2 * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * gc1 * gb2 * gc2 + gb1 * gc1 * (signed int)!(gb2 != 0) * gc2;
        score = score + 0.5 * (double)cob * (double)penalty * efficient;
        score = score + (double)amino_dis[(signed long int)(unsigned char)seq[(signed long int)i][(signed long int)k]][(signed long int)(unsigned char)seq[(signed long int)j][(signed long int)k]] * (double)efficient;
        nglen = nglen + (signed int)!(gc1 != 0) * (signed int)!(gc2 != 0);
      }
    }
  }
  return (double)score / (double)nglen + 400.0 * (double)!(scoremtx != 0);
}

// score_calc_for_score
// file mltaln9.c line 6046
extern double score_calc_for_score(signed int nseq, char **seq)
{
  signed int i;
  signed int j;
  signed int k;
  signed int c;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score;
  double tmpscore;
  char *mseq1;
  char *mseq2;
  score = 0.0;
  i = 0;
  for( ; !(i >= nseq + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= nseq); j = j + 1)
    {
      mseq1 = seq[(signed long int)i];
      mseq2 = seq[(signed long int)j];
      tmpscore = 0.0;
      c = 0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        if((signed int)mseq1[(signed long int)k] == 45)
        {
          if((signed int)mseq2[(signed long int)k] == 45)
            goto __CPROVER_DUMP_L10;

        }

        tmpscore = tmpscore + (double)amino_dis[(signed long int)(unsigned char)mseq1[(signed long int)k]][(signed long int)(unsigned char)mseq2[(signed long int)k]];
        c = c + 1;
        if((signed int)mseq1[(signed long int)k] == 45)
        {
          tmpscore = tmpscore + (double)(penalty - n_dis[(signed long int)0][(signed long int)24]);
          do
          {
            k = k + 1;
            if(!((signed int)mseq1[(signed long int)k] == 45))
              break;

          }
          while((_Bool)1);
          k = k - 1;
          if(!(len + -2 >= k))
            break;

        }

        else
          if((signed int)mseq2[(signed long int)k] == 45)
          {
            tmpscore = tmpscore + (double)(penalty - n_dis[(signed long int)0][(signed long int)24]);
            do
            {
              k = k + 1;
              if(!((signed int)mseq2[(signed long int)k] == 45))
                break;

            }
            while((_Bool)1);
            k = k - 1;
            if(!(len + -2 >= k))
              break;

          }


      __CPROVER_DUMP_L10:
        ;
      }
      score = score + (double)tmpscore / (double)c;
    }
  }
  reporterr("raw score = %f\n", score);
  score = score / (((double)nseq * ((double)nseq - 1.0)) / 2.0);
  score = score + 400.0;
  return (double)score;
}

// score_calc_for_score_s
// file mltaln9.c line 6240
extern double score_calc_for_score_s(signed int s, char **seq)
{
  signed int i;
  signed int j;
  signed int k;
  signed int gb1;
  signed int gb2;
  signed int gc1;
  signed int gc2;
  signed int cob;
  signed int nglen;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score = (double)0;
  nglen = 0;
  i = 0;
  for( ; !(i >= s + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= s); j = j + 1)
    {
      gc1 = 0;
      gc2 = 0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        gb1 = gc1;
        gb2 = gc2;
        gc1 = (signed int)((signed int)seq[(signed long int)i][(signed long int)k] == 45);
        gc2 = (signed int)((signed int)seq[(signed long int)j][(signed long int)k] == 45);
        cob = (signed int)!(gb1 != 0) * gc1 * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2 + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * gb2 * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * gc1 * gb2 * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2;
        score = score + 0.5 * (double)cob * (double)penalty;
        score = score + (double)amino_dis[(signed long int)(signed int)seq[(signed long int)i][(signed long int)k]][(signed long int)(unsigned char)seq[(signed long int)j][(signed long int)k]];
        nglen = nglen + (signed int)!(gc1 != 0) * (signed int)!(gc2 != 0);
      }
    }
  }
  return (double)score / (double)nglen + 400.0;
}

// score_calc_s
// file mltaln9.c line 6174
extern double score_calc_s(char **seq, signed int s, double **eff)
{
  signed int i;
  signed int j;
  signed int k;
  signed int gb1;
  signed int gb2;
  signed int gc1;
  signed int gc2;
  signed int cob;
  signed int nglen;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  double score = (double)0;
  nglen = 0;
  i = 0;
  for( ; !(i >= s + -1); i = i + 1)
  {
    j = i + 1;
    for( ; !(j >= s); j = j + 1)
    {
      double efficient = eff[(signed long int)i][(signed long int)j];
      gc1 = 0;
      gc2 = 0;
      k = 0;
      for( ; !(k >= len); k = k + 1)
      {
        gb1 = gc1;
        gb2 = gc2;
        gc1 = (signed int)((signed int)seq[(signed long int)i][(signed long int)k] == 45);
        gc2 = (signed int)((signed int)seq[(signed long int)j][(signed long int)k] == 45);
        cob = (signed int)!(gb1 != 0) * gc1 * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2 + (signed int)!(gb1 != 0) * (signed int)!(gc1 != 0) * gb2 * (signed int)!(gc2 != 0) + (signed int)!(gb1 != 0) * gc1 * gb2 * (signed int)!(gc2 != 0) + gb1 * (signed int)!(gc1 != 0) * (signed int)!(gb2 != 0) * gc2;
        score = score + 0.5 * (double)cob * (double)penalty * efficient;
        score = score + (double)amino_dis[(signed long int)(unsigned char)seq[(signed long int)i][(signed long int)k]][(signed long int)(signed int)seq[(signed long int)j][(signed long int)k]] * (double)efficient;
        nglen = nglen + (signed int)!(gc1 != 0) * (signed int)!(gc2 != 0);
      }
    }
  }
  return (double)score / (double)nglen + 400.0;
}

// score_calcp
// file mltaln9.c line 5408
extern double score_calcp(char *seq1, char *seq2, signed int len)
{
  signed int k;
  unsigned char ms1;
  unsigned char ms2;
  double tmpscore;
  signed int len2 = len - 2;
  tmpscore = 0.0;
  k = 0;
  for( ; !(k >= len); k = k + 1)
  {
    ms1 = (unsigned char)seq1[(signed long int)k];
    ms2 = (unsigned char)seq2[(signed long int)k];
    if(!((signed int)ms1 == 45) || !((signed int)ms2 == 45))
    {
      tmpscore = tmpscore + (double)amino_dis[(signed long int)ms1][(signed long int)ms2];
      if((signed int)ms1 == 45)
      {
        tmpscore = tmpscore + (double)penalty;
        tmpscore = tmpscore + (double)amino_dis[(signed long int)ms1][(signed long int)ms2];
        do
        {
          k = k + 1;
          ms1 = (unsigned char)seq1[(signed long int)k];
          if(!((signed int)ms1 == 45))
            break;

          tmpscore = tmpscore + (double)amino_dis[(signed long int)ms1][(signed long int)ms2];
        }
        while((_Bool)1);
        k = k - 1;
        if(!(len2 >= k))
          break;

      }

      else
        if((signed int)ms2 == 45)
        {
          tmpscore = tmpscore + (double)penalty;
          tmpscore = tmpscore + (double)amino_dis[(signed long int)ms1][(signed long int)ms2];
          do
          {
            k = k + 1;
            ms2 = (unsigned char)seq2[(signed long int)k];
            if(!((signed int)ms2 == 45))
              break;

            tmpscore = tmpscore + (double)amino_dis[(signed long int)ms1][(signed long int)ms2];
          }
          while((_Bool)1);
          k = k - 1;
          if(!(len2 >= k))
            break;

        }

    }

  }
  return tmpscore;
}

// searchAnchors
// file mltaln9.c line 6507
extern signed int searchAnchors(signed int nseq, char **seq, struct _Segment *seg)
{
  signed int i;
  signed int j;
  signed int k;
  signed int kcyc;
  signed int status;
  double score;
  signed int value = 0;
  signed int len;
  signed int length;
  double cumscore;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq[(signed long int)0]);
  len = (signed int)return_value_strlen_1;
  static double threshold;
  static double *stra = (double *)(void *)0;
  static signed int alloclen = 0;
  if(!(alloclen >= len))
  {
    if(!(alloclen == 0))
      FreeDoubleVec(stra);

    else
      threshold = ((double)(signed int)divThreshold / 100.0) * 600.0 * (double)divWinSize;
    stra=AllocateDoubleVec(len);
    alloclen = len;
  }

  i = 0;
  for( ; !(i >= len); i = i + 1)
  {
    stra[(signed long int)i] = 0.0;
    kcyc = nseq - 1;
    k = 0;
    for( ; !(k >= kcyc); k = k + 1)
    {
      j = k + 1;
      for( ; !(j >= nseq); j = j + 1)
        stra[(signed long int)i] = stra[(signed long int)i] + (double)n_dis[(signed long int)(signed int)amino_n[(signed long int)(unsigned char)seq[(signed long int)k][(signed long int)i]]][(signed long int)(signed int)amino_n[(signed long int)(unsigned char)seq[(signed long int)j][(signed long int)i]]];
    }
    stra[(signed long int)i] = stra[(signed long int)i] / (((double)nseq * (double)(nseq - 1)) / (double)2);
  }
  (seg + (signed long int)0)->skipForeward = 0;
  (seg + (signed long int)1)->skipBackward = 0;
  status = 0;
  cumscore = 0.0;
  score = 0.0;
  length = 0;
  j = 0;
  for( ; !(j >= divWinSize); j = j + 1)
    score = score + stra[(signed long int)j];
  i = 1;
  for( ; !(i >= len + -divWinSize); i = i + 1)
  {
    score = (score - stra[(signed long int)(i - 1)]) + stra[(signed long int)((i + divWinSize) - 1)];
    if(score > threshold)
    {
      if(status == 0)
      {
        status = 1;
        seg->start = i;
        length = 0;
        cumscore = 0.0;
      }

      length = length + 1;
      cumscore = cumscore + score;
    }

    if(score <= threshold || length >= 151)
    {
      if(!(status == 0))
      {
        seg->end = i;
        seg->center = (seg->start + seg->end + divWinSize) / 2;
        seg->score = cumscore;
        if(length >= 151)
        {
          (seg + (signed long int)0)->skipForeward = 1;
          (seg + (signed long int)1)->skipBackward = 1;
        }

        else
        {
          (seg + (signed long int)0)->skipForeward = 0;
          (seg + (signed long int)1)->skipBackward = 0;
        }
        length = 0;
        cumscore = 0.0;
        status = 0;
        value = value + 1;
        seg = seg + 1l;
        if(value >= 99998)
          ErrorExit("TOO MANY SEGMENTS!");

      }

    }

  }
  if(!(status == 0))
  {
    seg->end = i;
    seg->center = (seg->start + seg->end + divWinSize) / 2;
    seg->score = cumscore;
    value = value + 1;
  }

  return value;
}

// searchKUorWA
// file io.c line 1203
extern void searchKUorWA(struct _IO_FILE *fp)
{
  signed int c;
  signed int b = 10;
  do
  {
    c=_IO_getc(fp);
    if(!(c == 62))
    {
      if(c == -1)
        goto __CPROVER_DUMP_L2;

    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(b == 10)
        break;

    }
    b = c;
  }
  while((_Bool)1);
  ungetc(c, fp);
}

// seqLower
// file io.c line 962
extern void seqLower(signed int nseq, char **seq)
{
  signed int i;
  signed int j;
  signed int len;
  i = 0;
  signed int return_value_tolower_2;
  for( ; !(i >= nseq); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    len = (signed int)return_value_strlen_1;
    j = 0;
    for( ; !(j >= len); j = j + 1)
    {
      return_value_tolower_2=tolower((signed int)seq[(signed long int)i][(signed long int)j]);
      seq[(signed long int)i][(signed long int)j] = (char)return_value_tolower_2;
    }
  }
}

// seqUpper
// file io.c line 951
extern void seqUpper(signed int nseq, char **seq)
{
  signed int i;
  signed int j;
  signed int len;
  i = 0;
  signed int return_value_toupper_2;
  for( ; !(i >= nseq); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(seq[(signed long int)i]);
    len = (signed int)return_value_strlen_1;
    j = 0;
    for( ; !(j >= len); j = j + 1)
    {
      return_value_toupper_2=toupper((signed int)seq[(signed long int)i][(signed long int)j]);
      seq[(signed long int)i][(signed long int)j] = (char)return_value_toupper_2;
    }
  }
}

// seqcheck
// file mltaln.h line 161
extern char seqcheck(char **seq)
{
  signed int i;
  signed int len;
  char **seqbk = seq;
  while(!(*seq == ((char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(*seq);
    len = (signed int)return_value_strlen_1;
    i = 0;
    for( ; !(i >= len); i = i + 1)
      if(amino_n[(signed long int)(signed int)(*seq)[(signed long int)i]] == -1)
      {
        reporterr("========================================================================= \n");
        reporterr("========================================================================= \n");
        reporterr("=== \n");
        reporterr("=== Alphabet '%c' is unknown.\n", (*seq)[(signed long int)i]);
        reporterr("=== Please check site %d in sequence %d.\n", i + 1, (signed int)((seq - seqbk) + (signed long int)1));
        reporterr("=== \n");
        reporterr("=== To make an alignment having unusual characters (U, @, #, etc), try\n");
        reporterr("=== %% mafft --anysymbol input > output\n");
        reporterr("=== \n");
        reporterr("========================================================================= \n");
        reporterr("========================================================================= \n");
        return (char)(signed int)(*seq)[(signed long int)i];
      }

    seq = seq + 1l;
  }
  return (char)0;
}

// seqlen
// file mltaln9.c line 14
extern signed int seqlen(char *seq)
{
  signed int val = 0;
  char *tmp_post_1;
  if((signed int)*newgapstr == 45)
    while(!(*seq == 0))
    {
      tmp_post_1 = seq;
      seq = seq + 1l;
      if(!((signed int)*tmp_post_1 == 45))
        val = val + 1;

    }

  else
    for( ; !(*seq == 0); seq = seq + 1l)
      if(!((signed int)*seq == 45))
      {
        if(!(*seq == *newgapstr))
          val = val + 1;

      }

  return val;
}

// setnearest
// file mltaln9.c line 760
static void setnearest(signed int nseq, struct _Bchain *acpt, double **eff, double *mindisfrompt, signed int *nearestpt, signed int pos)
{
  signed int j;
  double tmpdouble;
  double mindisfrom;
  signed int nearest;
  struct _Bchain *acptj;
  mindisfrom = 999.9;
  nearest = -1;
  acptj = (acpt + (signed long int)pos)->next;
  for( ; !(acptj == ((struct _Bchain *)NULL)); acptj = acptj->next)
  {
    j = acptj->pos;
    tmpdouble = eff[(signed long int)pos][(signed long int)(j - pos)];
    if(tmpdouble < mindisfrom)
    {
      mindisfrom = tmpdouble;
      nearest = j;
    }

  }
  acptj = acpt;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(acptj == ((struct _Bchain *)NULL)))
      tmp_if_expr_1 = acptj->pos != pos ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    j = acptj->pos;
    tmpdouble = eff[(signed long int)j][(signed long int)(pos - j)];
    if(tmpdouble < mindisfrom)
    {
      mindisfrom = tmpdouble;
      nearest = j;
    }

    acptj = acptj->next;
  }
  while((_Bool)1);
  *mindisfrompt = mindisfrom;
  *nearestpt = nearest;
}

// setnearest_double_fullmtx
// file mltaln9.c line 802
static void setnearest_double_fullmtx(signed int nseq, struct _Bchain *acpt, double **eff, double *mindisfrompt, signed int *nearestpt, signed int pos)
{
  signed int j;
  double tmpdouble;
  double **effptpt;
  struct _Bchain *acptj;
  *mindisfrompt = 999.9;
  *nearestpt = -1;
  acptj = (acpt + (signed long int)pos)->next;
  for( ; !(acptj == ((struct _Bchain *)NULL)); acptj = acptj->next)
  {
    j = acptj->pos;
    tmpdouble = eff[(signed long int)pos][(signed long int)j];
    if(tmpdouble < *mindisfrompt)
    {
      *mindisfrompt = tmpdouble;
      *nearestpt = j;
    }

  }
  effptpt = eff;
  acptj = acpt;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(acptj == ((struct _Bchain *)NULL)))
      tmp_if_expr_1 = acptj->pos != pos ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    j = acptj->pos;
    tmpdouble = eff[(signed long int)j][(signed long int)pos];
    if(tmpdouble < *mindisfrompt)
    {
      *mindisfrompt = tmpdouble;
      *nearestpt = j;
    }

    acptj = acptj->next;
  }
  while((_Bool)1);
}

// shishagonyuu
// file constants.c line 15
static signed int shishagonyuu(double in)
{
  signed int out;
  if(in > 0.0)
    out = (signed int)(in + 0.5);

  else
    if(IEEE_FLOAT_EQUAL(in, 0.0))
      out = 0;

    else
      if(in < 0.0)
        out = (signed int)(in - 0.5);

      else
        out = 0;
  return out;
}

// showaamtxexample
// file io.c line 4816
static void showaamtxexample()
{
  fprintf(stderr, "Format error in aa matrix\n");
  fprintf(stderr, "# Example:\n");
  fprintf(stderr, "# comment\n");
  fprintf(stderr, "   A  R  N  D  C  Q  E  G  H  I  L  K  M  F  P  S  T  W  Y  V\n");
  fprintf(stderr, "A  4 -1 -2 -2  0 -1 -1  0 -2 -1 -1 -1 -1 -2 -1  1  0 -3 -2  0\n");
  fprintf(stderr, "R -1  5  0 -2 -3  1  0 -2  0 -3 -2  2 -1 -3 -2 -1 -1 -3 -2 -3\n");
  fprintf(stderr, "...\n");
  fprintf(stderr, "V  0 -3 -3 -3 -1 -2 -2 -3 -3  3  1 -2  1 -1 -2 -2  0 -3 -1  4\n");
  fprintf(stderr, "frequency 0.07 0.05 0.04 0.05 0.02 .. \n");
  fprintf(stderr, "# Example end\n");
  fprintf(stderr, "Only the lower half is loaded\n");
  fprintf(stderr, "The last line (frequency) is optional.\n");
  exit(1);
}

// spg
// file mltaln9.c line 4842
extern void spg(signed int nseq, double **oeff, signed int ***topol, double **len)
{
  signed int i;
  signed int j;
  signed int k;
  double tmplen[500000l];
  double **eff = (double **)(void *)0;
  char **pair = (char **)(void *)0;
  if(eff == ((double **)NULL))
  {
    eff=AllocateDoubleMtx(njob, njob);
    pair=AllocateCharMtx(njob, njob);
  }

  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      eff[(signed long int)i][(signed long int)j] = oeff[(signed long int)i][(signed long int)j];
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      pair[(signed long int)i][(signed long int)j] = (char)0;
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    pair[(signed long int)i][(signed long int)i] = (char)1;
  k = 0;
  double tmp_if_expr_1;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    double minscore = 9999.0;
    signed int im = -1;
    signed int jm = -1;
    signed int count;
    i = 0;
    for( ; !(i >= nseq + -1); i = i + 1)
    {
      j = i + 1;
      for( ; !(j >= nseq); j = j + 1)
        if(eff[(signed long int)i][(signed long int)j] < minscore)
        {
          minscore = eff[(signed long int)i][(signed long int)j];
          im = i;
          jm = j;
        }

    }
    i = 0;
    count = 0;
    for( ; !(i >= nseq); i = i + 1)
      if((signed int)pair[(signed long int)im][(signed long int)i] >= 1)
      {
        topol[(signed long int)k][(signed long int)0][(signed long int)count] = i;
        count = count + 1;
      }

    topol[(signed long int)k][(signed long int)0][(signed long int)count] = -1;
    i = 0;
    count = 0;
    for( ; !(i >= nseq); i = i + 1)
      if((signed int)pair[(signed long int)jm][(signed long int)i] >= 1)
      {
        topol[(signed long int)k][(signed long int)1][(signed long int)count] = i;
        count = count + 1;
      }

    topol[(signed long int)k][(signed long int)1][(signed long int)count] = -1;
    len[(signed long int)k][(signed long int)0] = minscore / 2.0 - tmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscore / 2.0 - tmplen[(signed long int)jm];
    tmplen[(signed long int)im] = minscore / 2.0;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      pair[(signed long int)im][(signed long int)i] = pair[(signed long int)im][(signed long int)i] + (char)((signed int)pair[(signed long int)jm][(signed long int)i] > 0);
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      pair[(signed long int)jm][(signed long int)i] = (char)0;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
    {
      if(!(i == im) && !(i == jm))
      {
        if(eff[(signed long int)(i >= im ? im : i)][(signed long int)(im >= i ? im : i)] < eff[(signed long int)(i >= jm ? jm : i)][(signed long int)(jm >= i ? jm : i)])
          tmp_if_expr_1 = eff[(signed long int)(i < im ? i : im)][(signed long int)(i > im ? i : im)];

        else
          tmp_if_expr_1 = eff[(signed long int)(i < jm ? i : jm)][(signed long int)(i > jm ? i : jm)];
        eff[(signed long int)(i < im ? i : im)][(signed long int)(i > im ? i : im)] = tmp_if_expr_1;
        eff[(signed long int)(i < jm ? i : jm)][(signed long int)(i > jm ? i : jm)] = 9999.0;
      }

      eff[(signed long int)im][(signed long int)jm] = 9999.0;
    }
  }
}

// sreverse
// file io.c line 55
extern void sreverse(char *r, char *s)
{
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s);
  r = r + (signed long int)return_value_strlen_1;
  char *tmp_post_2 = r;
  r = r - 1l;
  *tmp_post_2 = (char)0;
  char *tmp_post_3;
  char *tmp_post_4;
  while(!(*s == 0))
  {
    tmp_post_3 = r;
    r = r - 1l;
    tmp_post_4 = s;
    s = s + 1l;
    *tmp_post_3=creverse(*tmp_post_4);
  }
}

// st_FinalGapCount
// file mltaln9.c line 7785
extern void st_FinalGapCount(double *fgcp, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  signed int gc;
  signed int gb;
  double feff;
  double *fpt;
  char *spt;
  fpt = fgcp;
  i = len;
  signed int tmp_post_1;
  double *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = 0.0;
  }
  while((_Bool)1);
  j = 0;
  signed int tmp_post_3;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    fpt = fgcp;
    spt = seq[(signed long int)j];
    gc = (signed int)((signed int)*spt == 45);
    i = len;
    do
    {
      tmp_post_3 = i;
      i = i - 1;
      if(tmp_post_3 == 0)
        break;

      gb = gc;
      spt = spt + 1l;
      gc = (signed int)((signed int)*spt == 45);
      if(!(gb * (signed int)(gc == 0) == 0))
        *fpt = *fpt + feff;

      fpt = fpt + 1l;
    }
    while((_Bool)1);
    gb = gc;
    gc = 0;
    if(!(gb * (signed int)(gc == 0) == 0))
      *fpt = *fpt + feff;

  }
}

// st_FinalGapCount_zure
// file mltaln9.c line 7747
extern void st_FinalGapCount_zure(double *fgcp, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  signed int gc;
  signed int gb;
  double feff;
  double *fpt;
  char *spt;
  fpt = fgcp;
  i = len + 1;
  signed int tmp_post_1;
  double *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = 0.0;
  }
  while((_Bool)1);
  j = 0;
  signed int tmp_post_3;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    fpt = fgcp + (signed long int)1;
    spt = seq[(signed long int)j];
    gc = (signed int)((signed int)*spt == 45);
    i = len;
    do
    {
      tmp_post_3 = i;
      i = i - 1;
      if(tmp_post_3 == 0)
        break;

      gb = gc;
      spt = spt + 1l;
      gc = (signed int)((signed int)*spt == 45);
      if(!(gb * (signed int)(gc == 0) == 0))
        *fpt = *fpt + feff;

      fpt = fpt + 1l;
    }
    while((_Bool)1);
    gb = gc;
    gc = 0;
    if(!(gb * (signed int)(gc == 0) == 0))
      *fpt = *fpt + feff;

  }
}

// st_OpeningGapCount
// file mltaln9.c line 7716
extern void st_OpeningGapCount(double *ogcp, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  signed int gc;
  signed int gb;
  double feff;
  double *fpt;
  char *spt;
  fpt = ogcp;
  i = len;
  signed int tmp_post_1;
  double *tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = 0.0;
  }
  while((_Bool)1);
  j = 0;
  signed int tmp_post_3;
  char *tmp_post_4;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    spt = seq[(signed long int)j];
    fpt = ogcp;
    gc = 0;
    i = len;
    do
    {
      tmp_post_3 = i;
      i = i - 1;
      if(tmp_post_3 == 0)
        break;

      gb = gc;
      tmp_post_4 = spt;
      spt = spt + 1l;
      gc = (signed int)((signed int)*tmp_post_4 == 45);
      if(!(gc * (signed int)(gb == 0) == 0))
        *fpt = *fpt + feff;

      fpt = fpt + 1l;
    }
    while((_Bool)1);
  }
  ogcp[(signed long int)len] = 0.0;
}

// st_getGapPattern
// file mltaln9.c line 8038
extern void st_getGapPattern(struct _Gappattern **pat, signed int clus, char **seq, double *eff, signed int len)
{
  signed int i;
  signed int j;
  signed int k;
  signed int gb;
  signed int gc;
  signed int known;
  double feff;
  struct _Gappattern **fpt;
  char *spt;
  signed int gaplen;
  fpt = pat;
  i = len + 1;
  signed int tmp_post_1;
  struct _Gappattern **tmp_post_2;
  do
  {
    tmp_post_1 = i;
    i = i - 1;
    if(tmp_post_1 == 0)
      break;

    if(!(*fpt == ((struct _Gappattern *)NULL)))
      free((void *)*fpt);

    tmp_post_2 = fpt;
    fpt = fpt + 1l;
    *tmp_post_2 = (struct _Gappattern *)(void *)0;
  }
  while((_Bool)1);
  j = 0;
  _Bool tmp_if_expr_4;
  char *tmp_post_3;
  for( ; !(j >= clus); j = j + 1)
  {
    feff = (double)eff[(signed long int)j];
    fpt = pat;
    *fpt = (struct _Gappattern *)(void *)0;
    spt = seq[(signed long int)j];
    gc = 0;
    gaplen = 0;
    i = 0;
    for( ; !(i >= 1 + len); i = i + 1)
    {
      gb = gc;
      if(!(i == len))
      {
        tmp_post_3 = spt;
        spt = spt + 1l;
        tmp_if_expr_4 = (signed int)*tmp_post_3 == 45 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_4 = (_Bool)0;
      gc = (signed int)tmp_if_expr_4;
      if(!(gc == 0))
        gaplen = gaplen + 1;

      else
        if(!(gaplen == 0) && !(gb == 0))
        {
          k = 1;
          known = 0;
          if(!(*fpt == ((struct _Gappattern *)NULL)))
            for( ; !((*fpt + (signed long int)k)->len == -1); k = k + 1)
              if((*fpt + (signed long int)k)->len == gaplen)
              {
                known = 1;
                break;
              }


          if(known == 0)
          {
            void *return_value_realloc_5;
            return_value_realloc_5=realloc((void *)*fpt, (unsigned long int)(k + 3) * sizeof(struct _Gappattern) /*16ul*/ );
            *fpt = (struct _Gappattern *)return_value_realloc_5;
            if(*fpt == ((struct _Gappattern *)NULL))
            {
              reporterr("Cannot allocate gappattern!'n");
              reporterr("Use an approximate method, with the --mafft5 option.\n");
              exit(1);
            }

            (*fpt + (signed long int)k)->freq = 0.0;
            (*fpt + (signed long int)k)->len = gaplen;
            (*fpt + (signed long int)(k + 1))->len = -1;
            (*fpt + (signed long int)(k + 1))->freq = 0.0;
          }

          (*fpt + (signed long int)k)->freq = (*fpt + (signed long int)k)->freq + feff;
          gaplen = 0;
        }

      fpt = fpt + 1l;
    }
  }
  j = 0;
  for( ; !(j >= 1 + len); j = j + 1)
    if(!(pat[(signed long int)j] == ((struct _Gappattern *)NULL)))
    {
      (pat[(signed long int)j] + (signed long int)0)->len = 0;
      (pat[(signed long int)j] + (signed long int)0)->freq = 0.0;
      i = 1;
      for( ; !((pat[(signed long int)j] + (signed long int)i)->len == -1); i = i + 1)
        (pat[(signed long int)j] + (signed long int)0)->freq = (pat[(signed long int)j] + (signed long int)0)->freq + (pat[(signed long int)j] + (signed long int)i)->freq;
      (pat[(signed long int)j] + (signed long int)i)->freq = 1.0 - (pat[(signed long int)j] + (signed long int)0)->freq;
      (pat[(signed long int)j] + (signed long int)i)->len = 0;
      (pat[(signed long int)j] + (signed long int)(i + 1))->len = -1;
    }

    else
    {
      void *return_value_calloc_6;
      return_value_calloc_6=calloc((unsigned long int)3, sizeof(struct _Gappattern) /*16ul*/ );
      pat[(signed long int)j] = (struct _Gappattern *)return_value_calloc_6;
      (pat[(signed long int)j] + (signed long int)0)->freq = 0.0;
      (pat[(signed long int)j] + (signed long int)0)->len = 0;
      (pat[(signed long int)j] + (signed long int)1)->freq = 1.0 - (pat[(signed long int)j] + (signed long int)0)->freq;
      (pat[(signed long int)j] + (signed long int)1)->len = 0;
      (pat[(signed long int)j] + (signed long int)2)->len = -1;
    }
}

// strins
// file mltaln9.c line 6021
extern void strins(char *str1, char *str2)
{
  char *bk;
  signed int len1;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(str1);
  len1 = (signed int)return_value_strlen_1;
  signed int len2;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(str2);
  len2 = (signed int)return_value_strlen_2;
  bk = str2;
  str2 = str2 + (signed long int)(len1 + len2);
  str1 = str1 + (signed long int)(len1 - 1);
  for( ; str2 >= bk + (signed long int)len1; str2 = str2 - 1l)
    *str2 = *(str2 - (signed long int)len1);
  char *tmp_post_3;
  char *tmp_post_4;
  for( ; str2 >= bk; *tmp_post_3 = *tmp_post_4)
  {
    tmp_post_3 = str2;
    str2 = str2 - 1l;
    tmp_post_4 = str1;
    str1 = str1 - 1l;
  }
}

// strncpy_caseC
// file io.c line 941
extern void strncpy_caseC(char *str1, char *str2, signed int len)
{
  signed int tmp_post_1;
  char *tmp_post_2;
  char *tmp_post_3;
  signed int return_value_toupper_4;
  if(dorp == 100 && upperCase >= 1)
    do
    {
      tmp_post_1 = len;
      len = len - 1;
      if(tmp_post_1 == 0)
        break;

      tmp_post_2 = str1;
      str1 = str1 + 1l;
      tmp_post_3 = str2;
      str2 = str2 + 1l;
      return_value_toupper_4=toupper((signed int)*tmp_post_3);
      *tmp_post_2 = (char)return_value_toupper_4;
    }
    while((_Bool)1);

  else
    strncpy(str1, str2, (unsigned long int)len);
}

// substitution
// file mltaln9.c line 5542
extern double substitution(char *seq1, char *seq2)
{
  signed int k;
  double score = 0.0;
  signed int count = 0;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq1);
  len = (signed int)return_value_strlen_1;
  k = 0;
  for( ; !(k >= len); k = k + 1)
    if(!((signed int)seq1[(signed long int)k] == 45))
    {
      if(!((signed int)seq2[(signed long int)k] == 45))
      {
        score = score + (double)(seq1[(signed long int)k] != seq2[(signed long int)k]);
        count = count + 1;
      }

    }

  if(!(count == 0))
    score = score / (double)count;

  else
    score = 1.0;
  return score;
}

// substitution_hosei
// file mltaln9.c line 5497
extern double substitution_hosei(char *seq1, char *seq2)
{
  signed int count = 0;
  double score;
  signed int iscore = 0;
  char s1;
  char s2;
  char *tmp_post_1;
  char *tmp_post_2;
  do
  {
    tmp_post_1 = seq1;
    seq1 = seq1 + 1l;
    s1 = *tmp_post_1;
    if(s1 == 0)
      break;

    tmp_post_2 = seq2;
    seq2 = seq2 + 1l;
    s2 = *tmp_post_2;
    if(!((signed int)s1 == 45))
    {
      if(!((signed int)s2 == 45))
      {
        iscore = iscore + (signed int)(s1 != s2);
        count = count + 1;
      }

    }

  }
  while((_Bool)1);
  if(!(count == 0))
    score = (double)iscore / (double)count;

  else
    score = 1.0;
  double return_value_log_3;
  if(score < 0.95)
  {
    return_value_log_3=log(1.0 - score);
    score = -return_value_log_3;
  }

  else
    score = 3.0;
  return score;
}

// substitution_nid
// file mltaln9.c line 5467
extern double substitution_nid(char *seq1, char *seq2)
{
  signed int k;
  double s12;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq1);
  len = (signed int)return_value_strlen_1;
  s12 = 0.0;
  k = 0;
  for( ; !(k >= len); k = k + 1)
    if(!((signed int)seq1[(signed long int)k] == 45))
    {
      if(!((signed int)seq2[(signed long int)k] == 45))
        s12 = s12 + (double)(seq1[(signed long int)k] == seq2[(signed long int)k]);

    }

  return s12;
}

// substitution_score
// file mltaln9.c line 5482
extern double substitution_score(char *seq1, char *seq2)
{
  signed int k;
  double s12;
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(seq1);
  len = (signed int)return_value_strlen_1;
  s12 = 0.0;
  k = 0;
  for( ; !(k >= len); k = k + 1)
    if(!((signed int)seq1[(signed long int)k] == 45))
    {
      if(!((signed int)seq2[(signed long int)k] == 45))
        s12 = s12 + (double)amino_dis[(signed long int)(unsigned char)seq1[(signed long int)k]][(signed long int)(unsigned char)seq2[(signed long int)k]];

    }

  return s12;
}

// sumofpairsscore
// file mltaln9.c line 9706
extern double sumofpairsscore(signed int nseq, char **seq)
{
  double v = (double)0;
  signed int i;
  signed int j;
  i = 1;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= i); j = j + 1)
    {
      double return_value_naivepairscore11_1;
      return_value_naivepairscore11_1=naivepairscore11(seq[(signed long int)i], seq[(signed long int)j], penalty);
      v = v + return_value_naivepairscore11_1 / (double)600;
    }
  }
  return v;
}

// supg
// file mltaln9.c line 4709
extern void supg(signed int nseq, double **oeff, signed int ***topol, double **len)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  double **doubleptpt;
  double *doublept;
  double tmpdouble;
  double eff1;
  double eff0;
  static double *tmplen;
  static char **pair = (char **)(void *)0;
  static double **eff = (double **)(void *)0;
  if(eff == ((double **)NULL))
  {
    eff=AllocateFloatMtx(njob, njob);
    pair=AllocateCharMtx(njob, njob);
    tmplen=AllocateFloatVec(njob);
  }

  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      eff[(signed long int)i][(signed long int)j] = (double)oeff[(signed long int)i][(signed long int)j];
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      pair[(signed long int)i][(signed long int)j] = (char)0;
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    pair[(signed long int)i][(signed long int)i] = (char)1;
  k = 0;
  double **tmp_post_1;
  double *tmp_post_2;
  signed int *tmp_post_3;
  signed int *tmp_post_4;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    double minscore = 9999.0;
    signed int im = -1;
    signed int jm = -1;
    doubleptpt = eff;
    i = 0;
    for( ; !(i >= nseq + -1); i = i + 1)
    {
      tmp_post_1 = doubleptpt;
      doubleptpt = doubleptpt + 1l;
      doublept = *tmp_post_1 + (signed long int)i + (signed long int)1;
      j = i + 1;
      for( ; !(j >= nseq); j = j + 1)
      {
        tmp_post_2 = doublept;
        doublept = doublept + 1l;
        tmpdouble = *tmp_post_2;
        if(tmpdouble < minscore)
        {
          minscore = tmpdouble;
          im = i;
          jm = j;
        }

      }
    }
    intpt = topol[(signed long int)k][(signed long int)0];
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      if((signed int)pair[(signed long int)im][(signed long int)i] >= 1)
      {
        tmp_post_3 = intpt;
        intpt = intpt + 1l;
        *tmp_post_3 = i;
      }

    *intpt = -1;
    intpt = topol[(signed long int)k][(signed long int)1];
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      if((signed int)pair[(signed long int)jm][(signed long int)i] >= 1)
      {
        tmp_post_4 = intpt;
        intpt = intpt + 1l;
        *tmp_post_4 = i;
      }

    *intpt = -1;
    len[(signed long int)k][(signed long int)0] = (double)minscore / 2.0 - tmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = (double)minscore / 2.0 - tmplen[(signed long int)jm];
    tmplen[(signed long int)im] = (double)minscore / 2.0;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      pair[(signed long int)im][(signed long int)i] = pair[(signed long int)im][(signed long int)i] + (char)((signed int)pair[(signed long int)jm][(signed long int)i] > 0);
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      pair[(signed long int)jm][(signed long int)i] = (char)0;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)maxiim];
        eff1 = eff[(signed long int)minijm][(signed long int)maxijm];
        eff[(signed long int)miniim][(signed long int)maxiim] = (eff0 < eff1 ? eff0 : eff1) * (1.0 - sueff_global) + (eff0 + eff1) * 0.5 * sueff_global;
        eff[(signed long int)minijm][(signed long int)maxijm] = 9999.0;
        eff[(signed long int)im][(signed long int)jm] = 9999.0;
      }

  }
}

// tab2space
// file io.c line 4969
static void tab2space(char *s)
{
  for( ; !(*s == 0); s = s + 1l)
    if((signed int)*s == 9)
      *s = (char)32;

}

// tabtospace
// file io.c line 4676
static void tabtospace(char *str)
{
  char *p;
  do
  {
    p=strchr(str, 9);
    if(p == ((char *)NULL))
      break;

    *p = (char)32;
  }
  while((_Bool)1);
}

// treeconstruction
// file mltaln9.c line 5563
extern void treeconstruction(char **seq, signed int nseq, signed int ***topol, double **len, double **eff)
{
  signed int i;
  signed int j;
  if(weight >= 2)
  {
    if(utree == 0)
    {
      i = 0;
      for( ; !(i >= nseq + -1); i = i + 1)
      {
        j = i + 1;
        for( ; !(j >= nseq); j = j + 1)
        {
          double return_value_substitution_hosei_1;
          return_value_substitution_hosei_1=substitution_hosei(seq[(signed long int)i], seq[(signed long int)j]);
          eff[(signed long int)i][(signed long int)j] = (double)return_value_substitution_hosei_1;
        }
      }
      spg(nseq, eff, topol, len);
      counteff(nseq, topol, len, eff);
    }

  }

  else
  {
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
    {
      j = 0;
      for( ; !(j >= nseq); j = j + 1)
        eff[(signed long int)i][(signed long int)j] = 1.0;
    }
  }
}

// upg2
// file mltaln9.c line 685
extern void upg2(signed int nseq, double **eff, signed int ***topol, double **len)
{
  signed int i;
  signed int j;
  signed int k;
  double tmplen[500000l];
  static char **pair = (char **)(void *)0;
  if(pair == ((char **)NULL))
    pair=AllocateCharMtx(njob, njob);

  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      pair[(signed long int)i][(signed long int)j] = (char)0;
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    pair[(signed long int)i][(signed long int)i] = (char)1;
  k = 0;
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    double minscore = 9999.0;
    signed int im = -1;
    signed int jm = -1;
    signed int count;
    i = 0;
    for( ; !(i >= nseq + -1); i = i + 1)
    {
      j = i + 1;
      for( ; !(j >= nseq); j = j + 1)
        if(eff[(signed long int)i][(signed long int)j] < minscore)
        {
          minscore = eff[(signed long int)i][(signed long int)j];
          im = i;
          jm = j;
        }

    }
    i = 0;
    count = 0;
    for( ; !(i >= nseq); i = i + 1)
      if((signed int)pair[(signed long int)im][(signed long int)i] >= 1)
      {
        topol[(signed long int)k][(signed long int)0][(signed long int)count] = i;
        count = count + 1;
      }

    topol[(signed long int)k][(signed long int)0][(signed long int)count] = -1;
    i = 0;
    count = 0;
    for( ; !(i >= nseq); i = i + 1)
      if((signed int)pair[(signed long int)jm][(signed long int)i] >= 1)
      {
        topol[(signed long int)k][(signed long int)1][(signed long int)count] = i;
        count = count + 1;
      }

    topol[(signed long int)k][(signed long int)1][(signed long int)count] = -1;
    len[(signed long int)k][(signed long int)0] = minscore / 2.0 - tmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscore / 2.0 - tmplen[(signed long int)jm];
    tmplen[(signed long int)im] = minscore / 2.0;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      pair[(signed long int)im][(signed long int)i] = pair[(signed long int)im][(signed long int)i] + (char)((signed int)pair[(signed long int)jm][(signed long int)i] > 0);
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
      pair[(signed long int)jm][(signed long int)i] = (char)0;
    i = 0;
    for( ; !(i >= nseq); i = i + 1)
    {
      if(!(i == im) && !(i == jm))
      {
        eff[(signed long int)(i < im ? i : im)][(signed long int)(i > im ? i : im)] = (eff[(signed long int)(i < im ? i : im)][(signed long int)(i > im ? i : im)] + eff[(signed long int)(i < jm ? i : jm)][(signed long int)(i > jm ? i : jm)]) / 2.0;
        eff[(signed long int)(i < jm ? i : jm)][(signed long int)(i > jm ? i : jm)] = 9999.0;
      }

      eff[(signed long int)im][(signed long int)jm] = 9999.0;
    }
  }
}

// veryfastsupg
// file mltaln9.c line 4369
extern void veryfastsupg(signed int nseq, double **oeff, signed int ***topol, double **len)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  signed int tmpint;
  signed int eff1;
  signed int eff0;
  signed int minscore;
  double minscoref;
  signed int im = -1;
  signed int jm = -1;
  signed int prevnode;
  signed int acjmnext;
  signed int acjmprev;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  static struct _Achain *ac = (struct _Achain *)(void *)0;
  static double *tmptmplen = (double *)(void *)0;
  static signed int *hist = (signed int *)(void *)0;
  static signed int **eff = (signed int **)(void *)0;
  if(eff == ((signed int **)NULL))
  {
    eff=AllocateIntMtx(njob, njob);
    hist=AllocateIntVec(njob);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)njob * sizeof(double) /*8ul*/ );
    tmptmplen = (double *)return_value_malloc_1;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)njob * sizeof(struct _Achain) /*8ul*/ );
    ac = (struct _Achain *)return_value_malloc_2;
  }

  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= nseq); j = j + 1)
      eff[(signed long int)i][(signed long int)j] = (signed int)(oeff[(signed long int)i][(signed long int)j] * 1000000.0 + 0.5);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = i + 1;
    (ac + (signed long int)i)->prev = i - 1;
  }
  (ac + (signed long int)(nseq - 1))->next = -1;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmptmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    hist[(signed long int)i] = -1;
  reporterr("\n");
  k = 0;
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
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("%d / %d\r", k, nseq);

    minscore = (signed int)(1000000.0 * (double)4);
    i = 0;
    for( ; !((ac + (signed long int)i)->next == -1); i = (ac + (signed long int)i)->next)
    {
      j = (ac + (signed long int)i)->next;
      for( ; !(j == -1); j = (ac + (signed long int)j)->next)
      {
        tmpint = eff[(signed long int)i][(signed long int)j];
        if(!(tmpint >= minscore))
        {
          minscore = tmpint;
          im = i;
          jm = j;
        }

      }
    }
    minscoref = ((double)minscore * 0.5) / 1000000.0;
    intpt = topol[(signed long int)k][(signed long int)0];
    prevnode = hist[(signed long int)im];
    if(prevnode == -1)
    {
      tmp_post_3 = intpt;
      intpt = intpt + 1l;
      *tmp_post_3 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_4 = *tmp_post_5)
      {
        tmp_post_4 = intpt;
        intpt = intpt + 1l;
        tmp_post_5 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_6 = *tmp_post_7)
      {
        tmp_post_6 = intpt;
        intpt = intpt + 1l;
        tmp_post_7 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    intpt = topol[(signed long int)k][(signed long int)1];
    prevnode = hist[(signed long int)jm];
    if(prevnode == -1)
    {
      tmp_post_8 = intpt;
      intpt = intpt + 1l;
      *tmp_post_8 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_9 = *tmp_post_10)
      {
        tmp_post_9 = intpt;
        intpt = intpt + 1l;
        tmp_post_10 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_11 = *tmp_post_12)
      {
        tmp_post_11 = intpt;
        intpt = intpt + 1l;
        tmp_post_12 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    len[(signed long int)k][(signed long int)0] = minscoref - tmptmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscoref - tmptmplen[(signed long int)jm];
    tmptmplen[(signed long int)im] = minscoref;
    hist[(signed long int)im] = k;
    i = 0;
    for( ; !(i == -1); i = (ac + (signed long int)i)->next)
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)maxiim];
        eff1 = eff[(signed long int)minijm][(signed long int)maxijm];
        eff[(signed long int)miniim][(signed long int)maxiim] = (signed int)((double)(eff0 < eff1 ? eff0 : eff1) * (1.0 - sueff_global) + (double)(eff0 + eff1) * 0.5 * sueff_global);
      }

    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    (ac + (signed long int)acjmprev)->next = acjmnext;
    if(!(acjmnext == -1))
      (ac + (signed long int)acjmnext)->prev = acjmprev;

  }
  FreeIntMtx(eff);
  eff = (signed int **)(void *)0;
  free((void *)tmptmplen);
  tmptmplen = (double *)(void *)0;
  free((void *)hist);
  hist = (signed int *)(void *)0;
  free((void *)(char *)ac);
  ac = (struct _Achain *)(void *)0;
}

// veryfastsupg_double_loadtree
// file mltaln9.c line 3666
extern void veryfastsupg_double_loadtree(signed int nseq, double **eff, signed int ***topol, double **len, char **name)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  double eff1;
  double eff0;
  signed int *hist = (signed int *)(void *)0;
  struct _Achain *ac = (struct _Achain *)(void *)0;
  double minscore;
  char **tree;
  char *treetmp;
  signed int im = -1;
  signed int jm = -1;
  signed int prevnode;
  signed int acjmnext;
  signed int acjmprev;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  struct _IO_FILE *fp;
  signed int node[2l];
  double lenfl[2l];
  char *nametmp;
  char *nameptr;
  char *tmpptr;
  char namec;
  fp=fopen("_guidetree", "r");
  if(fp == ((struct _IO_FILE *)NULL))
  {
    reporterr("cannot open _guidetree\n");
    exit(1);
  }

  if(hist == ((signed int *)NULL))
  {
    treetmp = (char *)(void *)0;
    tree=AllocateCharMtx(njob, 0);
    nametmp=AllocateCharVec(1000);
    hist=AllocateIntVec(njob);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)njob * sizeof(struct _Achain) /*8ul*/ );
    ac = (struct _Achain *)return_value_malloc_1;
  }

  i = 0;
  const unsigned short int **return_value___ctype_b_loc_2;
  char *return_value_strstr_3;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 999); j = j + 1)
      nametmp[(signed long int)j] = (char)0;
    j = 0;
    for( ; !(j >= 999); j = j + 1)
    {
      namec = name[(signed long int)i][(signed long int)j];
      if((signed int)namec == 0)
        break;

      else
      {
        return_value___ctype_b_loc_2=__ctype_b_loc();
        if((signed int)namec == 45 || (signed int)namec == 47 || (signed int)namec == 61 || (signed int)namec == 123 || (signed int)namec == 125 || !((8 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)namec]) == 0))
          nametmp[(signed long int)j] = namec;

        else
          nametmp[(signed long int)j] = (char)95;
      }
    }
    nametmp[(signed long int)j] = (char)0;
    if(!(outnumber == 0))
    {
      return_value_strstr_3=strstr(nametmp, "_numo_e");
      nameptr = return_value_strstr_3 + (signed long int)8;
    }

    else
      nameptr = nametmp + (signed long int)1;
    tmpptr=strstr(nameptr, "_oe_");
    if(!(tmpptr == ((char *)NULL)))
      nameptr = tmpptr + (signed long int)4;

    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(nametmp);
    void *return_value_calloc_5;
    return_value_calloc_5=calloc(return_value_strlen_4 + (unsigned long int)100, sizeof(char) /*1ul*/ );
    tree[(signed long int)i] = (char *)return_value_calloc_5;
    if(tree[(signed long int)i] == ((char *)NULL))
    {
      reporterr("Cannot allocate tree!\n");
      exit(1);
    }

    sprintf(tree[(signed long int)i], "\n%d_%.900s\n", i + 1, nameptr);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = i + 1;
    (ac + (signed long int)i)->prev = i - 1;
  }
  (ac + (signed long int)(nseq - 1))->next = -1;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    hist[(signed long int)i] = -1;
  reporterr("\n");
  k = 0;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
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
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("%d / %d\r", k, nseq);

    lenfl[(signed long int)1] = -1.0;
    lenfl[(signed long int)0] = lenfl[(signed long int)1];
    loadtreeoneline(node, lenfl, fp);
    im = node[(signed long int)0];
    jm = node[(signed long int)1];
    minscore = eff[(signed long int)im][(signed long int)jm];
    if(!(nseq + -1 >= im) || !(nseq + -1 >= jm))
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = tree[(signed long int)im] == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
      tmp_if_expr_7 = (_Bool)1;

    else
      tmp_if_expr_7 = tree[(signed long int)jm] == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_7)
    {
      reporterr("\n\nCheck the guide tree.\n");
      reporterr("im=%d, jm=%d\n", im + 1, jm + 1);
      reporterr("Please use newick2mafft.rb to generate a tree file from a newick tree.\n\n");
      exit(1);
    }

    if(IEEE_FLOAT_EQUAL(lenfl[0l], -1.000000))
      tmp_if_expr_8 = (_Bool)1;

    else
      tmp_if_expr_8 = IEEE_FLOAT_EQUAL(lenfl[(signed long int)1], -1.0) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_8)
    {
      reporterr("\n\nWARNING: Branch length is not given.\n");
      exit(1);
    }

    if(lenfl[0l] < 0.0)
      lenfl[(signed long int)0] = 0.0;

    if(lenfl[1l] < 0.0)
      lenfl[(signed long int)1] = 0.0;

    intpt = topol[(signed long int)k][(signed long int)0];
    prevnode = hist[(signed long int)im];
    if(prevnode == -1)
    {
      tmp_post_9 = intpt;
      intpt = intpt + 1l;
      *tmp_post_9 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_10 = *tmp_post_11)
      {
        tmp_post_10 = intpt;
        intpt = intpt + 1l;
        tmp_post_11 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_12 = *tmp_post_13)
      {
        tmp_post_12 = intpt;
        intpt = intpt + 1l;
        tmp_post_13 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    intpt = topol[(signed long int)k][(signed long int)1];
    prevnode = hist[(signed long int)jm];
    if(prevnode == -1)
    {
      tmp_post_14 = intpt;
      intpt = intpt + 1l;
      *tmp_post_14 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_15 = *tmp_post_16)
      {
        tmp_post_15 = intpt;
        intpt = intpt + 1l;
        tmp_post_16 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_17 = *tmp_post_18)
      {
        tmp_post_17 = intpt;
        intpt = intpt + 1l;
        tmp_post_18 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    minscore = minscore * 0.5;
    len[(signed long int)k][(signed long int)0] = lenfl[(signed long int)0];
    len[(signed long int)k][(signed long int)1] = lenfl[(signed long int)1];
    hist[(signed long int)im] = k;
    i = 0;
    for( ; !(i == -1); i = (ac + (signed long int)i)->next)
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)maxiim];
        eff1 = eff[(signed long int)minijm][(signed long int)maxijm];
        eff[(signed long int)miniim][(signed long int)maxiim] = (eff0 < eff1 ? eff0 : eff1) * (1.0 - sueff_global) + (eff0 + eff1) * 0.5 * sueff_global;
      }

    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    (ac + (signed long int)acjmprev)->next = acjmnext;
    if(!(acjmnext == -1))
      (ac + (signed long int)acjmnext)->prev = acjmprev;

    unsigned long int return_value_strlen_19;
    return_value_strlen_19=strlen(tree[(signed long int)im]);
    unsigned long int return_value_strlen_20;
    return_value_strlen_20=strlen(tree[(signed long int)jm]);
    void *return_value_realloc_21;
    return_value_realloc_21=realloc((void *)treetmp, return_value_strlen_19 + return_value_strlen_20 + (unsigned long int)100);
    treetmp = (char *)return_value_realloc_21;
    if(treetmp == ((char *)NULL))
    {
      reporterr("Cannot allocate treetmp\n");
      exit(1);
    }

    sprintf(treetmp, "(%s:%7.5f,%s:%7.5f)", tree[(signed long int)im], len[(signed long int)k][(signed long int)0], tree[(signed long int)jm], len[(signed long int)k][(signed long int)1]);
    free((void *)tree[(signed long int)im]);
    free((void *)tree[(signed long int)jm]);
    unsigned long int return_value_strlen_22;
    return_value_strlen_22=strlen(treetmp);
    void *return_value_calloc_23;
    return_value_calloc_23=calloc(return_value_strlen_22 + (unsigned long int)1, sizeof(char) /*1ul*/ );
    tree[(signed long int)im] = (char *)return_value_calloc_23;
    tree[(signed long int)jm] = (char *)(void *)0;
    if(tree[(signed long int)im] == ((char *)NULL))
    {
      reporterr("Cannot reallocate tree!\n");
      exit(1);
    }

    strcpy(tree[(signed long int)im], treetmp);
  }
  fclose(fp);
  fp=fopen("infile.tree", "w");
  fprintf(fp, "%s\n", treetmp);
  fclose(fp);
  reporterr("\n");
  free((void *)hist);
  free((void *)(char *)ac);
  FreeCharMtx(tree);
  free((void *)treetmp);
  free((void *)nametmp);
}

// veryfastsupg_double_outtree
// file mltaln9.c line 4149
extern void veryfastsupg_double_outtree(signed int nseq, double **eff, signed int ***topol, double **len, char **name)
{
  signed int i;
  signed int j;
  signed int k;
  signed int miniim;
  signed int maxiim;
  signed int minijm;
  signed int maxijm;
  signed int *intpt;
  signed int *intpt2;
  double tmpdouble;
  double eff1;
  double eff0;
  double minscore;
  struct _IO_FILE *fpout;
  signed int im = -1;
  signed int jm = -1;
  signed int prevnode;
  signed int acjmnext;
  signed int acjmprev;
  signed int *pt1;
  signed int *pt2;
  signed int *pt11;
  signed int *pt22;
  double (*clusterfuncpt[1l])(double, double);
  sueff1 = (double)1 - sueff_global;
  sueff05 = sueff_global * 0.5;
  if(treemethod == 88)
    clusterfuncpt[(signed long int)0] = cluster_mix_double;

  else
    if(treemethod == 69)
      clusterfuncpt[(signed long int)0] = cluster_average_double;

    else
      if(treemethod == 113)
        clusterfuncpt[(signed long int)0] = cluster_minimum_double;

      else
      {
        reporterr("Unknown treemethod, %c\n", treemethod);
        exit(1);
      }
  static char *nametmp;
  static struct _Achain *ac = (struct _Achain *)(void *)0;
  static double *tmptmplen = (double *)(void *)0;
  static char **tree;
  static char *treetmp;
  static signed int *hist = (signed int *)(void *)0;
  if(hist == ((signed int *)NULL))
  {
    treetmp=AllocateCharVec(njob * 50);
    tree=AllocateCharMtx(njob, njob * 50);
    hist=AllocateIntVec(njob);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)njob * sizeof(double) /*8ul*/ );
    tmptmplen = (double *)return_value_malloc_1;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)njob * sizeof(struct _Achain) /*8ul*/ );
    ac = (struct _Achain *)return_value_malloc_2;
    nametmp=AllocateCharVec(31);
  }

  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    j = 0;
    for( ; !(j >= 30); j = j + 1)
      nametmp[(signed long int)j] = (char)0;
    j = 0;
    for( ; !(j >= 30); j = j + 1)
    {
      const unsigned short int **return_value___ctype_b_loc_3;
      return_value___ctype_b_loc_3=__ctype_b_loc();
      if(!((8 & (signed int)(*return_value___ctype_b_loc_3)[(signed long int)(signed int)name[(signed long int)i][(signed long int)j]]) == 0))
        nametmp[(signed long int)j] = name[(signed long int)i][(signed long int)j];

      else
        nametmp[(signed long int)j] = (char)95;
    }
    nametmp[(signed long int)30] = (char)0;
    sprintf(tree[(signed long int)i], "%d_%.20s", i + 1, nametmp + (signed long int)1);
  }
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
  {
    (ac + (signed long int)i)->next = i + 1;
    (ac + (signed long int)i)->prev = i - 1;
  }
  (ac + (signed long int)(nseq - 1))->next = -1;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    tmptmplen[(signed long int)i] = 0.0;
  i = 0;
  for( ; !(i >= nseq); i = i + 1)
    hist[(signed long int)i] = -1;
  reporterr("\n");
  k = 0;
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
  for( ; !(k >= nseq + -1); k = k + 1)
  {
    if(k % 10 == 0)
      reporterr("%d / %d\r", k, nseq);

    minscore = 99999.9;
    i = 0;
    for( ; !((ac + (signed long int)i)->next == -1); i = (ac + (signed long int)i)->next)
    {
      j = (ac + (signed long int)i)->next;
      for( ; !(j == -1); j = (ac + (signed long int)j)->next)
      {
        tmpdouble = eff[(signed long int)i][(signed long int)j];
        if(tmpdouble < minscore)
        {
          minscore = tmpdouble;
          im = i;
          jm = j;
        }

      }
    }
    intpt = topol[(signed long int)k][(signed long int)0];
    prevnode = hist[(signed long int)im];
    if(prevnode == -1)
    {
      tmp_post_4 = intpt;
      intpt = intpt + 1l;
      *tmp_post_4 = im;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_5 = *tmp_post_6)
      {
        tmp_post_5 = intpt;
        intpt = intpt + 1l;
        tmp_post_6 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_7 = *tmp_post_8)
      {
        tmp_post_7 = intpt;
        intpt = intpt + 1l;
        tmp_post_8 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    intpt = topol[(signed long int)k][(signed long int)1];
    prevnode = hist[(signed long int)jm];
    if(prevnode == -1)
    {
      tmp_post_9 = intpt;
      intpt = intpt + 1l;
      *tmp_post_9 = jm;
      *intpt = -1;
    }

    else
    {
      pt1 = topol[(signed long int)prevnode][(signed long int)0];
      pt2 = topol[(signed long int)prevnode][(signed long int)1];
      if(!(*pt2 >= *pt1))
      {
        pt11 = pt2;
        pt22 = pt1;
      }

      else
      {
        pt11 = pt1;
        pt22 = pt2;
      }
      intpt2 = pt11;
      for( ; !(*intpt2 == -1); *tmp_post_10 = *tmp_post_11)
      {
        tmp_post_10 = intpt;
        intpt = intpt + 1l;
        tmp_post_11 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      intpt2 = pt22;
      for( ; !(*intpt2 == -1); *tmp_post_12 = *tmp_post_13)
      {
        tmp_post_12 = intpt;
        intpt = intpt + 1l;
        tmp_post_13 = intpt2;
        intpt2 = intpt2 + 1l;
      }
      *intpt = -1;
    }
    minscore = minscore * 0.5;
    len[(signed long int)k][(signed long int)0] = minscore - tmptmplen[(signed long int)im];
    len[(signed long int)k][(signed long int)1] = minscore - tmptmplen[(signed long int)jm];
    tmptmplen[(signed long int)im] = minscore;
    hist[(signed long int)im] = k;
    i = 0;
    for( ; !(i == -1); i = (ac + (signed long int)i)->next)
      if(!(i == im) && !(i == jm))
      {
        if(!(i >= im))
        {
          miniim = i;
          maxiim = im;
          minijm = i;
          maxijm = jm;
        }

        else
          if(!(i >= jm))
          {
            miniim = im;
            maxiim = i;
            minijm = i;
            maxijm = jm;
          }

          else
          {
            miniim = im;
            maxiim = i;
            minijm = jm;
            maxijm = i;
          }
        eff0 = eff[(signed long int)miniim][(signed long int)maxiim];
        eff1 = eff[(signed long int)minijm][(signed long int)maxijm];
        eff[(signed long int)miniim][(signed long int)maxiim]=clusterfuncpt[(signed long int)0](eff0, eff1);
      }

    acjmprev = (ac + (signed long int)jm)->prev;
    acjmnext = (ac + (signed long int)jm)->next;
    (ac + (signed long int)acjmprev)->next = acjmnext;
    if(!(acjmnext == -1))
      (ac + (signed long int)acjmnext)->prev = acjmprev;

    sprintf(treetmp, "(%s:%7.5f,%s:%7.5f)", tree[(signed long int)im], len[(signed long int)k][(signed long int)0], tree[(signed long int)jm], len[(signed long int)k][(signed long int)1]);
    strcpy(tree[(signed long int)im], treetmp);
  }
  fpout=fopen("infile.tree", "w");
  fprintf(fpout, "%s\n", treetmp);
  fclose(fpout);
  reporterr("\n");
  free((void *)tmptmplen);
  tmptmplen = (double *)(void *)0;
  free((void *)hist);
  hist = (signed int *)(void *)0;
  free((void *)(char *)ac);
  ac = (struct _Achain *)(void *)0;
  FreeCharMtx(tree);
  free((void *)treetmp);
  free((void *)nametmp);
}

// write1seq
// file io.c line 2483
extern void write1seq(struct _IO_FILE *fp, char *aseq)
{
  signed int j;
  signed int nalen;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(aseq);
  nalen = (signed int)return_value_strlen_1;
  j = 0;
  for( ; !(j >= nalen); j = j + 60)
    fprintf(fp, "%.*s\n", 60, aseq + (signed long int)j);
}

// writeData
// file io.c line 2458
extern void writeData(struct _IO_FILE *fp, signed int locnjob, char (*name)[256l], signed int *nlen, char **aseq)
{
  signed int i;
  signed int j;
  signed int nalen;
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(aseq[(signed long int)i]);
    nalen = (signed int)return_value_strlen_1;
    fprintf(fp, ">%s\n", name[(signed long int)i] + (signed long int)1);
    j = 0;
    for( ; !(j >= nalen); j = j + 60)
      fprintf(fp, "%.*s\n", 60, aseq[(signed long int)i] + (signed long int)j);
  }
}

// writeData_pointer
// file io.c line 2434
extern void writeData_pointer(struct _IO_FILE *fp, signed int locnjob, char **name, signed int *nlen, char **aseq)
{
  signed int i;
  signed int j;
  signed int nalen;
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(aseq[(signed long int)i]);
    nalen = (signed int)return_value_strlen_1;
    fprintf(fp, ">%s\n", name[(signed long int)i] + (signed long int)1);
    j = 0;
    for( ; !(j >= nalen); j = j + 60)
      fprintf(fp, "%.*s\n", 60, aseq[(signed long int)i] + (signed long int)j);
  }
}

// writeData_reorder
// file io.c line 4792
extern void writeData_reorder(struct _IO_FILE *fp, signed int locnjob, char (*name)[256l], signed int *nlen, char **aseq, signed int *order)
{
  signed int i;
  signed int j;
  signed int k;
  signed int nalen;
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    k = order[(signed long int)i];
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(aseq[(signed long int)k]);
    nalen = (signed int)return_value_strlen_1;
    fprintf(fp, ">%s\n", name[(signed long int)k] + (signed long int)1);
    j = 0;
    for( ; !(j >= nalen); j = j + 60)
      fprintf(fp, "%.*s\n", 60, aseq[(signed long int)k] + (signed long int)j);
  }
}

// writeData_reorder_pointer
// file io.c line 4768
extern void writeData_reorder_pointer(struct _IO_FILE *fp, signed int locnjob, char **name, signed int *nlen, char **aseq, signed int *order)
{
  signed int i;
  signed int j;
  signed int k;
  signed int nalen;
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    k = order[(signed long int)i];
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(aseq[(signed long int)k]);
    nalen = (signed int)return_value_strlen_1;
    fprintf(fp, ">%s\n", name[(signed long int)k] + (signed long int)1);
    j = 0;
    for( ; !(j >= nalen); j = j + 60)
      fprintf(fp, "%.*s\n", 60, aseq[(signed long int)k] + (signed long int)j);
  }
}

// writeDataforgaln
// file io.c line 2413
extern void writeDataforgaln(struct _IO_FILE *fp, signed int locnjob, char **name, signed int *nlen, char **aseq)
{
  signed int i;
  signed int j;
  signed int nalen;
  i = 0;
  for( ; !(i >= locnjob); i = i + 1)
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(aseq[(signed long int)i]);
    nalen = (signed int)return_value_strlen_1;
    fprintf(fp, ">%s\n", name[(signed long int)i] + (signed long int)1);
    j = 0;
    for( ; !(j >= nalen); j = j + 60)
      fprintf(fp, "%.*s\n", 60, aseq[(signed long int)i] + (signed long int)j);
  }
}

// writePre
// file io.c line 3955
extern signed int writePre(signed int nseq, char **name, signed int *nlen, char **aseq, signed int force)
{
  if(!(force == 0))
  {
    rewind(prep_g);
    writeData_pointer(prep_g, nseq, name, nlen, aseq);
  }

  return 0;
}

