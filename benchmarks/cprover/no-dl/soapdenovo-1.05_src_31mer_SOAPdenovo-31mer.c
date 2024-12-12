// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

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

// tag-arc
// file inc/def.h line 104
struct arc;

// tag-block_start
// file inc/def2.h line 35
struct block_start;

// tag-block_starter
// file inc/stack.h line 30
struct block_starter;

// tag-connection
// file inc/def.h line 132
struct connection;

// tag-contig
// file inc/def.h line 165
struct contig;

// tag-ctg4heap
// file inc/def.h line 290
struct ctg4heap;

// tag-ctg4scaf
// file inc/def.h line 300
struct ctg4scaf;

// tag-dfibheap
// file inc/def2.h line 32
struct dfibheap;

// tag-dfibheap_el
// file inc/def2.h line 33
struct dfibheap_el;

// tag-dynamic_array
// file inc/darray.h line 30
struct dynamic_array;

// tag-edge
// file inc/def.h line 105
struct edge;

// tag-fibheap
// file inc/def2.h line 30
struct fibheap;

// tag-fibheap_el
// file inc/def2.h line 31
struct fibheap_el;

// tag-kmerSet_st
// file inc/newhash.h line 69
struct kmerSet_st;

// tag-kmer_pt
// file inc/newhash.h line 80
struct kmer_pt;

// tag-kmer_st
// file inc/newhash.h line 56
struct kmer_st;

// tag-lib_info
// file inc/def.h line 243
struct lib_info;

// tag-mem_manager
// file inc/def2.h line 45
struct mem_manager;

// tag-node
// file inc/def.h line 60
struct node;

// tag-parameter
// file inc/def.h line 197
struct parameter;

// tag-pe_info
// file inc/def.h line 313
struct pe_info;

// tag-prearc
// file inc/def.h line 158
struct prearc;

// tag-preedge
// file inc/def.h line 82
struct preedge;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-read_nearby
// file inc/def.h line 183
struct read_nearby;

// tag-readinterval
// file inc/def.h line 92
struct readinterval;

// tag-recycle_mark
// file inc/def2.h line 40
struct recycle_mark;

// tag-stack
// file inc/stack.h line 36
struct stack;

// tag-vertex
// file inc/def.h line 127
struct vertex;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// EdLargerThanTwin
// file loadPreGraph.c line 294
extern char EdLargerThanTwin(unsigned int edgeno);
// EdSameAsTwin
// file inc/extfunc.h line 215
extern char EdSameAsTwin(unsigned int edgeno);
// EdSmallerThanTwin
// file inc/extfunc.h line 213
extern char EdSmallerThanTwin(unsigned int edgeno);
// HasMin
// file dfib.c line 181
char HasMin(struct dfibheap *h);
// IsHeapEmpty
// file fibHeap.c line 58
char IsHeapEmpty(struct fibheap *heap);
// KmerPlus
// file kmer.c line 136
extern unsigned long long int KmerPlus(unsigned long long int prev, char ch);
// Links2Scaf
// file orderContig.c line 2874
extern void Links2Scaf(char *infile);
// Mark1in1outNode
// file cutTipPreGraph.c line 458
static void Mark1in1outNode();
// Mark1in1outNode_link1
// file prlHashReads.c line 589
static void Mark1in1outNode_link1(unsigned char *thrdSignal);
// MarkCtgOccu
// file prlReadFillGap.c line 973
static void MarkCtgOccu(unsigned int ctg);
// MaskContig
// file prlReadFillGap.c line 967
static void MaskContig(unsigned int ctg);
// PE2Links
// file orderContig.c line 2742
extern void PE2Links(char *infile);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// add1Arc
// file loadGraph.c line 353
static void add1Arc(unsigned int from_ed, unsigned int to_ed, unsigned int weight);
// add1Arc_link1
// file loadPreGraph.c line 304
static void add1Arc_link1(unsigned int from_ed_link1, unsigned int to_ed_link1, unsigned int weight_link1);
// add1Connect
// file attachPEinfo.c line 142
extern struct connection * add1Connect(unsigned int e1, unsigned int e2, signed int gap, signed int weight, char inherit);
// add1LongPEcov
// file orderContig.c line 159
static void add1LongPEcov(unsigned int fromCtg, unsigned int toCtg, signed int weight);
// add1marker2edge
// file loadPath.c line 28
static void add1marker2edge(unsigned int edgeno, signed long long int readid);
// addRv
// file bubble.c line 555
static struct readinterval * addRv(struct readinterval *rv_list, struct readinterval *rv);
// alloc_pe_mem
// file inc/extfunc.h line 189
extern void alloc_pe_mem(signed int gradsCounter);
// allocateArc
// file arc.c line 133
extern struct arc * allocateArc(unsigned int edgeid);
// allocateCN
// file inc/extfunc.h line 92
extern struct connection * allocateCN(unsigned int contigId, signed int gap);
// allocateDFibHeapNode
// file dfib.c line 60
static struct dfibheap_el * allocateDFibHeapNode(struct dfibheap *heap);
// allocateFibHeapEl
// file fib.c line 62
static struct fibheap_el * allocateFibHeapEl(struct fibheap *heap);
// allocatePreArc
// file arc.c line 65
extern struct prearc * allocatePreArc(unsigned int edgeid);
// allocateRV
// file inc/extfunc.h line 64
extern struct readinterval * allocateRV(signed int readid, signed int edgeid);
// allpathUpdateEdge
// file concatenateEdge.c line 92
void allpathUpdateEdge(unsigned int e1, unsigned int e2, signed int indicate);
// arcCount
// file cutTip_graph.c line 66
extern struct arc * arcCount(unsigned int edgeid, unsigned int *num);
// arcCounts
// file splitReps.c line 63
static struct arc * arcCounts(unsigned int edgeid, unsigned int *num);
// arrangeNodes_general
// file orderContig.c line 3480
static void arrangeNodes_general();
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// atoi_link1
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link1(const char *__nptr_link1);
// atoi_link10
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link10(const char *__nptr_link10);
// atoi_link2
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link2(const char *__nptr_link2);
// atoi_link3
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link3(const char *__nptr_link3);
// atoi_link4
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link4(const char *__nptr_link4);
// atoi_link5
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link5(const char *__nptr_link5);
// atoi_link6
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link6(const char *__nptr_link6);
// atoi_link7
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link7(const char *__nptr_link7);
// atoi_link8
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link8(const char *__nptr_link8);
// atoi_link9
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link9(const char *__nptr_link9);
// attach1PE
// file attachPEinfo.c line 229
signed int attach1PE(unsigned int e1, signed int pre_pos, unsigned int bal_e2, signed int pos, signed int insert_size);
// attach1read2contig
// file prlReadFillGap.c line 56
static void attach1read2contig(unsigned int ctgID, signed int len, signed int pos, signed long long int starter);
// attachPath
// file bubble.c line 625
static void attachPath(struct readinterval *path);
// basicContigInfo
// file prlRead2Ctg.c line 487
extern void basicContigInfo(char *infile);
// bcopy
// file /usr/include/string.h line 454
extern void bcopy(const void *, void *, unsigned long int);
// bisearch
// file loadPreGraph.c line 100
extern signed int bisearch(struct vertex *vts, signed int num, unsigned long long int target);
// bubblePinch
// file bubble.c line 1920
extern void bubblePinch(double simiCutoff, char *outfile, signed int M);
// buildReverseComplementEdge
// file loadPreGraph.c line 156
static void buildReverseComplementEdge(unsigned int edgeno);
// calcuIS
// file attachPEinfo.c line 359
static signed int calcuIS(struct stack *intStack);
// call_align
// file map.c line 62
signed int call_align(signed int argc, char **argv);
// call_heavygraph
// file contig.c line 35
signed int call_heavygraph(signed int argc, char **argv);
// call_pregraph
// file pregraph.c line 35
signed int call_pregraph(signed int argc, char **argv);
// call_scaffold
// file scaffold.c line 34
signed int call_scaffold(signed int argc, char **argv);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// canDheapWait
// file orderContig.c line 3078
static char canDheapWait(unsigned int currNode, signed int dis, signed int DmaxDis);
// canUheapWait
// file orderContig.c line 3178
static char canUheapWait(unsigned int currNode, signed int dis, signed int UmaxDis);
// catUsDsContig
// file orderContig.c line 1035
static void catUsDsContig();
// ceillog2
// file dfib.c line 85
static inline signed long long int ceillog2(signed long long int a);
// ceillog2_link1
// file fib.c line 82
static inline signed long long int ceillog2_link1(signed long long int a_link1);
// changeScafBegin
// file orderContig.c line 4101
static void changeScafBegin(struct stack *scafStack, unsigned int start);
// changeScafEnd
// file orderContig.c line 4087
static void changeScafEnd(struct stack *scafStack, unsigned int end);
// check1scaf
// file prlReadFillGap.c line 571
static void check1scaf(signed int t, signed int thrdID);
// checkCircle
// file orderContig.c line 4359
static void checkCircle();
// checkConflictCnt_general
// file orderContig.c line 3685
static char checkConflictCnt_general(double tolerance);
// checkConnect
// file orderContig.c line 649
static struct connection * checkConnect(unsigned int from_c, unsigned int to_c);
// checkEligible
// file orderContig.c line 3348
static char checkEligible();
// checkOverlapInBetween
// file orderContig.c line 1520
static char checkOverlapInBetween(double tolerance);
// checkOverlapInBetween_general
// file orderContig.c line 3652
char checkOverlapInBetween_general(double tolerance);
// checkScafConsist
// file orderContig.c line 3987
static char checkScafConsist(struct stack *scafStack1, struct stack *scafStack2);
// checkSimple
// file orderContig.c line 4333
static char checkSimple(struct dynamic_array *ctgArray, signed int count);
// checkUnique
// file orderContig.c line 1357
static char checkUnique(unsigned int node, double tolerance);
// check_iden_kmerList
// file node2edge.c line 442
static signed int check_iden_kmerList(struct stack *stack1, struct stack *stack2);
// check_link2next
// file kmer.c line 44
extern unsigned char check_link2next(struct node *node, char ch);
// check_link2prev
// file kmer.c line 68
extern unsigned char check_link2prev(struct node *node, char ch);
// check_linkB2next
// file kmer.c line 39
unsigned char check_linkB2next(struct node *node, char ch);
// check_linkB2prev
// file kmer.c line 63
unsigned char check_linkB2prev(struct node *node, char ch);
// chopKmer4Ctg
// file localAsm.c line 89
static void chopKmer4Ctg(unsigned long long int *kmerCtg, signed int lenCtg, signed int overlap, char *src_seq, unsigned long long int WORDF);
// chopKmer4read
// file localAsm.c line 110
static void chopKmer4read(signed int len_seq, signed int overlap, char *src_seq, char *bal_seq, unsigned long long int *kmerBuffer, char *prevcBuffer, char *nextcBuffer, signed int *kmer_c, unsigned long long int WORDF);
// chopKmer4read_link1
// file prlHashCtg.c line 162
static void chopKmer4read_link1(signed int t, signed int threadID);
// chopKmer4read_link2
// file prlHashReads.c line 149
static void chopKmer4read_link2(signed int t_link1, signed int threadID_link1);
// chopKmer4read_link3
// file prlRead2Ctg.c line 146
static void chopKmer4read_link3(signed int t_link2, signed int threadID_link2);
// chopKmer4read_link4
// file prlRead2path.c line 195
static void chopKmer4read_link4(signed int t_link3, signed int threadID_link3);
// chopReadFillGap
// file localAsm.c line 1464
static char chopReadFillGap(signed int len_seq, signed int overlap, char *src_seq, char *bal_seq, struct kmerSet_st *kset, unsigned long long int WORDF, signed int *start, signed int *end, char *bal, unsigned long long int *KmerCtg1, signed int len1, unsigned long long int *KmerCtg2, signed int len2, signed int *index1, signed int *index2);
// ckalloc
// file check.c line 44
void * ckalloc(unsigned long long int amount);
// ckopen
// file check.c line 28
struct _IO_FILE * ckopen(char *name, char *mode);
// ckrealloc
// file check.c line 64
void * ckrealloc(void *p, unsigned long int new_size, unsigned long int old_size);
// cleanUpRedundancy
// file bubble.c line 1494
static char cleanUpRedundancy();
// clipTipFromNode
// file cutTipPreGraph.c line 52
static signed int clipTipFromNode(struct kmer_st *node1, signed int cut_len, char THIN);
// closeFp1InLab
// file readseq1by1.c line 402
static void closeFp1InLab(signed int libNo);
// closeFp2InLab
// file readseq1by1.c line 427
static void closeFp2InLab(signed int libNo);
// cmp_ctg
// file orderContig.c line 3334
static signed int cmp_ctg(const void *a, const void *b);
// cmp_edge
// file output_contig.c line 107
signed int cmp_edge(const void *a, const void *b);
// cmp_int
// file inc/extfunc.h line 91
extern signed int cmp_int(const void *a, const void *b);
// cmp_lib
// file lib.c line 64
static signed int cmp_lib(const void *a, const void *b);
// cmp_pe
// file attachPEinfo.c line 42
static signed int cmp_pe(const void *a, const void *b);
// cmp_reads
// file prlReadFillGap.c line 280
static signed int cmp_reads(const void *a, const void *b);
// cmp_vertex
// file loadPreGraph.c line 30
extern signed int cmp_vertex(const void *a, const void *b);
// cntByReads
// file splitReps.c line 108
static signed long long int cntByReads(unsigned int left, unsigned int middle, unsigned int right);
// combineCOV
// file bubble.c line 910
static void combineCOV(unsigned int source, signed int len_s, unsigned int target, signed int len_t);
// compactEdgeArray
// file compactEdge.c line 89
extern void compactEdgeArray();
// comparePaths
// file bubble.c line 1653
static void comparePaths(unsigned int destination, unsigned int origin);
// compareSequences
// file bubble.c line 384
static char compareSequences(char *sequence1, char *sequence2, signed int length1, signed int length2);
// compareSequences_link1
// file localAsm.c line 1368
static signed int compareSequences_link1(char *sequence1_link1, char *sequence2_link1, signed int length1_link1, signed int length2_link1);
// compl_int_seq
// file seq.c line 152
char * compl_int_seq(char *seq, signed int len);
// connectByPE_grad
// file attachPEinfo.c line 281
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// connectInRead
// file bubble.c line 946
static void connectInRead(struct readinterval *previous, struct readinterval *next);
// consolidate
// file orderContig.c line 1051
static void consolidate();
// contigElligible
// file read2scaf.c line 228
static char contigElligible(unsigned int contigno);
// convertIndex
// file prlReadFillGap.c line 75
static void convertIndex();
// convertIndex_link1
// file read2scaf.c line 37
static void convertIndex_link1();
// copyEdge
// file compactEdge.c line 28
void copyEdge(unsigned int source, unsigned int target);
// copySeq
// file bubble.c line 322
static void copySeq(char *targetS, char *sourceS, signed int pos, signed int length);
// copySeq_link1
// file concatenateEdge.c line 28
void copySeq_link1(char *targetS_link1, char *sourceS_link1, signed int pos_link1, signed int length_link1);
// count_branch2next
// file inc/newhash.h line 98
extern signed int count_branch2next(struct kmer_st *node);
// count_branch2prev
// file inc/newhash.h line 97
extern signed int count_branch2prev(struct kmer_st *node);
// count_kmerset
// file newhash.c line 298
extern signed long long int count_kmerset(struct kmerSet_st *set);
// count_link2next
// file kmer.c line 78
extern signed int count_link2next(struct node *node);
// count_link2nextB
// file kmer.c line 92
extern signed int count_link2nextB(struct node *node);
// count_link2prev
// file kmer.c line 121
extern signed int count_link2prev(struct node *node);
// count_link2prevB
// file kmer.c line 106
extern signed int count_link2prevB(struct node *node);
// cp1edge
// file splitReps.c line 267
static unsigned int cp1edge(unsigned int source, unsigned int target);
// crc32
// file hashFunction.c line 85
static signed int crc32(signed int crc, const char *buf, signed int len);
// creatThrds
// file cutTipPreGraph.c line 378
static void creatThrds(unsigned long int *threads, struct parameter *paras);
// creatThrds_link1
// file prlHashCtg.c line 135
static void creatThrds_link1(unsigned long int *threads_link1, struct parameter *paras_link1);
// creatThrds_link2
// file prlHashReads.c line 122
static void creatThrds_link2(unsigned long int *threads_link2, struct parameter *paras_link2);
// creatThrds_link3
// file prlRead2Ctg.c line 61
static void creatThrds_link3(unsigned long int *threads_link3, struct parameter *paras_link3);
// creatThrds_link4
// file prlRead2path.c line 65
static void creatThrds_link4(unsigned long int *threads_link4, struct parameter *paras_link4);
// creatThrds_link5
// file prlReadFillGap.c line 909
static void creatThrds_link5(unsigned long int *threads_link5, struct parameter *paras_link5);
// createAnalogousArc
// file bubble.c line 784
static void createAnalogousArc(unsigned int originNode, unsigned int destinationNode, struct arc *refArc);
// createAnalogousCnt
// file orderContig.c line 129
static void createAnalogousCnt(unsigned int sourceStart, struct connection *originCnt, signed int gap, unsigned int targetStart, unsigned int targetStop);
// createArcLookupTable
// file arc.c line 152
extern void createArcLookupTable();
// createArcMemo
// file arc.c line 119
extern void createArcMemo();
// createCntLookupTable
// file connect.c line 120
extern void createCntLookupTable();
// createCntMemManager
// file connect.c line 30
extern void createCntMemManager();
// createDarray
// file darray.c line 26
struct dynamic_array * createDarray(signed int num_items, unsigned long int unit_size);
// createMem_manager
// file inc/extfunc2.h line 25
extern struct mem_manager * createMem_manager(signed int num_items, unsigned long int unit_size);
// createPreArcMemManager
// file arc.c line 30
extern void createPreArcMemManager();
// createRVmemo
// file inc/extfunc.h line 65
extern void createRVmemo();
// createStack
// file inc/stack.h line 54
struct stack * createStack(signed int num_items, unsigned long int unit_size);
// cutRdArray
// file prlReadFillGap.c line 294
static void cutRdArray(struct read_nearby *rdArray, signed int gapStart, signed int gapEnd, signed int *count, signed int arrayLen, struct read_nearby *cutArray);
// cutSeqFromCtg
// file localAsm.c line 1655
static signed int cutSeqFromCtg(unsigned int ctgID, signed int start, signed int end, char *sequence, signed int originOverlap);
// cutSeqFromRead
// file localAsm.c line 1670
static signed int cutSeqFromRead(char *src_seq, signed int length, signed int start, signed int end, char *sequence);
// cutSeqFromTightStr
// file localAsm.c line 1635
static signed int cutSeqFromTightStr(char *tightStr, signed int length, signed int start, signed int end, signed int revS, char *src_seq);
// cutTipsInGraph
// file inc/extfunc.h line 121
extern void cutTipsInGraph(signed int cutLen, char strict);
// darrayGet
// file darray.c line 55
void * darrayGet(struct dynamic_array *darray, signed long long int index);
// darrayPut
// file darray.c line 36
void * darrayPut(struct dynamic_array *darray, signed long long int index);
// deLowCov
// file prlHashReads.c line 498
static void deLowCov(unsigned char *thrdSignal);
// deallocateDFibHeapNode
// file dfib.c line 65
static void deallocateDFibHeapNode(struct dfibheap_el *a, struct dfibheap *heap);
// deallocateFibHeapEl
// file fib.c line 67
static void deallocateFibHeapEl(struct fibheap_el *a, struct fibheap *heap);
// debugging
// file orderContig.c line 1278
static void debugging();
// debugging1
// file orderContig.c line 1116
static void debugging1(unsigned int ctg1, unsigned int ctg2);
// deleteArc
// file bubble.c line 535
extern struct arc * deleteArc(struct arc *arc_list, struct arc *arc);
// deleteArcLookupTable
// file arc.c line 158
extern void deleteArcLookupTable();
// deleteCntLookupTable
// file connect.c line 126
extern void deleteCntLookupTable();
// deleteRv
// file bubble.c line 567
static struct readinterval * deleteRv(struct readinterval *rv_list, struct readinterval *rv);
// deleteWeakCnt
// file orderContig.c line 858
static void deleteWeakCnt(signed int cut_off);
// destroyArc
// file bubble.c line 764
static void destroyArc(unsigned int from_ed, struct arc *arc);
// destroyArcMem
// file arc.c line 127
extern void destroyArcMem();
// destroyConnectMem
// file connect.c line 38
extern void destroyConnectMem();
// destroyDHeap
// file inc/dfibHeap.h line 34
void destroyDHeap(struct dfibheap *heap);
// destroyEdge
// file cutTip_graph.c line 31
void destroyEdge(unsigned int edgeid);
// destroyHeap
// file fibHeap.c line 64
void destroyHeap(struct fibheap *heap);
// destroyNodeInDHeap
// file dfibHeap.c line 80
void destroyNodeInDHeap(struct dfibheap_el *node, struct dfibheap *heap);
// destroyNodeInHeap
// file fibHeap.c line 76
void destroyNodeInHeap(struct fibheap_el *node, struct fibheap *heap);
// destroyPreArcMem
// file arc.c line 49
extern void destroyPreArcMem();
// destroyReadIntervMem
// file inc/extfunc.h line 67
extern void destroyReadIntervMem();
// detachPath
// file bubble.c line 667
static void detachPath(struct readinterval *path);
// detachPathSingle
// file bubble.c line 651
static void detachPathSingle(struct readinterval *path);
// detectBreakScaf
// file orderContig.c line 4115
static void detectBreakScaf();
// dfh_cascading_cut
// file dfib.c line 413
static void dfh_cascading_cut(struct dfibheap *h, struct dfibheap_el *y);
// dfh_checkcons
// file dfib.c line 497
static void dfh_checkcons(struct dfibheap *h);
// dfh_compare
// file dfib.c line 521
static signed int dfh_compare(struct dfibheap *h, struct dfibheap_el *a, struct dfibheap_el *b);
// dfh_comparedata
// file dfib.c line 533
static signed int dfh_comparedata(struct dfibheap *h, double key, unsigned int data, struct dfibheap_el *b);
// dfh_consolidate
// file dfib.c line 339
static void dfh_consolidate(struct dfibheap *h);
// dfh_cut
// file dfib.c line 404
static void dfh_cut(struct dfibheap *h, struct dfibheap_el *x, struct dfibheap_el *y);
// dfh_delete
// file dfib.c line 269
unsigned int dfh_delete(struct dfibheap *h, struct dfibheap_el *x);
// dfh_deleteheap
// file dfib.c line 136
void dfh_deleteheap(struct dfibheap *h);
// dfh_extractmin
// file dfib.c line 245
unsigned int dfh_extractmin(struct dfibheap *h);
// dfh_extractminel
// file dfib.c line 282
static struct dfibheap_el * dfh_extractminel(struct dfibheap *h);
// dfh_heaplink
// file dfib.c line 391
static void dfh_heaplink(struct dfibheap *h, struct dfibheap_el *y, struct dfibheap_el *x);
// dfh_insertel
// file dfib.c line 541
static void dfh_insertel(struct dfibheap *h, struct dfibheap_el *x);
// dfh_insertkey
// file dfib.c line 151
struct dfibheap_el * dfh_insertkey(struct dfibheap *h, double key, unsigned int data);
// dfh_insertrootlist
// file dfib.c line 318
static void dfh_insertrootlist(struct dfibheap *h, struct dfibheap_el *x);
// dfh_makekeyheap
// file dfib.c line 120
struct dfibheap * dfh_makekeyheap(void);
// dfh_removerootlist
// file dfib.c line 331
static void dfh_removerootlist(struct dfibheap *h, struct dfibheap_el *x);
// dfh_replacedata
// file dfib.c line 261
unsigned int dfh_replacedata(struct dfibheap_el *x, unsigned int data);
// dfh_replacekey
// file dfib.c line 165
double dfh_replacekey(struct dfibheap *h, struct dfibheap_el *x, double key);
// dfh_replacekeydata
// file dfib.c line 189
unsigned int dfh_replacekeydata(struct dfibheap *h, struct dfibheap_el *x, double key, unsigned int data);
// dfhe_insertafter
// file dfib.c line 452
static void dfhe_insertafter(struct dfibheap_el *a, struct dfibheap_el *b);
// dfhe_insertbefore
// file dfib.c line 470
static inline void dfhe_insertbefore(struct dfibheap_el *a, struct dfibheap_el *b);
// dfhe_newelem
// file dfib.c line 435
static struct dfibheap_el * dfhe_newelem(struct dfibheap *h);
// dfhe_remove
// file dfib.c line 475
static struct dfibheap_el * dfhe_remove(struct dfibheap_el *x);
// dfibheap_el_getKey
// file dfib.c line 551
double dfibheap_el_getKey(struct dfibheap_el *node);
// dfibheap_getSize
// file dfib.c line 70
signed long long int dfibheap_getSize(struct dfibheap *heap);
// dislink2nextUncertain
// file newhash.c line 370
extern void dislink2nextUncertain(struct kmer_st *node, char ch, char smaller);
// dislink2prevUncertain
// file inc/newhash.h line 95
extern void dislink2prevUncertain(struct kmer_st *node, char ch, char smaller);
// dismissArc
// file arc.c line 145
extern void dismissArc(struct arc *arc);
// dismissRV
// file inc/extfunc.h line 66
extern void dismissRV(struct readinterval *rv);
// dispatch1node
// file orderContig.c line 3038
static char dispatch1node(signed int dis, unsigned int tempNode, signed int maxNodes, struct fibheap *dheap, struct fibheap *uheap, signed int *DmaxDis, signed int *UmaxDis);
// display_all_usage
// file main.c line 298
static void display_all_usage();
// display_contig_usage
// file contig.c line 148
static void display_contig_usage();
// display_map_usage
// file map.c line 144
static void display_map_usage();
// display_pregraph_usage
// file pregraph.c line 166
static void display_pregraph_usage();
// display_scaff_usage
// file scaffold.c line 136
static void display_scaff_usage();
// display_usage
// file main.c line 80
static void display_usage();
// downSlide
// file orderContig.c line 226
static void downSlide();
// edgeMove
// file compactEdge.c line 47
void edgeMove(unsigned int source, unsigned int target);
// emptyDarray
// file darray.c line 65
void emptyDarray(struct dynamic_array *darray);
// emptyStack
// file inc/stack.h line 53
void emptyStack(struct stack *astack);
// encap_kmerset
// file newhash.c line 175
static inline void encap_kmerset(struct kmerSet_st *set, unsigned long long int num);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// extractSequence
// file bubble.c line 336
static signed int extractSequence(struct readinterval *path, char *sequence);
// fastReverseComp
// file seq.c line 58
static unsigned long long int fastReverseComp(unsigned long long int seq, char seq_size);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fh_cascading_cut
// file fib.c line 519
static void fh_cascading_cut(struct fibheap *h, struct fibheap_el *y);
// fh_checkcons
// file fib.c line 608
static void fh_checkcons(struct fibheap *h);
// fh_compare
// file fib.c line 632
static signed int fh_compare(struct fibheap *h, struct fibheap_el *a, struct fibheap_el *b);
// fh_comparedata
// file fib.c line 644
static signed int fh_comparedata(struct fibheap *h, signed long long int key, unsigned int data, struct fibheap_el *b);
// fh_consolidate
// file fib.c line 445
static void fh_consolidate(struct fibheap *h);
// fh_cut
// file fib.c line 510
static void fh_cut(struct fibheap *h, struct fibheap_el *x, struct fibheap_el *y);
// fh_delete
// file fib.c line 371
unsigned int fh_delete(struct fibheap *h, struct fibheap_el *x);
// fh_deleteheap
// file fib.c line 221
void fh_deleteheap(struct fibheap *h);
// fh_destroyheap
// file fib.c line 130
static void fh_destroyheap(struct fibheap *h);
// fh_extractmin
// file fib.c line 347
unsigned int fh_extractmin(struct fibheap *h);
// fh_extractminel
// file fib.c line 388
static struct fibheap_el * fh_extractminel(struct fibheap *h);
// fh_heaplink
// file fib.c line 497
static void fh_heaplink(struct fibheap *h, struct fibheap_el *y, struct fibheap_el *x);
// fh_initheap
// file fib.c line 117
static void fh_initheap(struct fibheap *new);
// fh_insert
// file fib.c line 326
struct fibheap_el * fh_insert(struct fibheap *h, unsigned int data);
// fh_insertel
// file fib.c line 652
static void fh_insertel(struct fibheap *h, struct fibheap_el *x);
// fh_insertkey
// file fib.c line 231
struct fibheap_el * fh_insertkey(struct fibheap *h, signed long long int key, unsigned int data);
// fh_insertrootlist
// file fib.c line 424
static void fh_insertrootlist(struct fibheap *h, struct fibheap_el *x);
// fh_isempty
// file fib.c line 245
char fh_isempty(struct fibheap *h);
// fh_makeheap
// file fib.c line 157
struct fibheap * fh_makeheap(void);
// fh_makekeyheap
// file fib.c line 145
struct fibheap * fh_makekeyheap(void);
// fh_min
// file fib.c line 339
unsigned int fh_min(struct fibheap *h);
// fh_minkey
// file fib.c line 253
signed long long int fh_minkey(struct fibheap *h);
// fh_removerootlist
// file fib.c line 437
static void fh_removerootlist(struct fibheap *h, struct fibheap_el *x);
// fh_replacedata
// file fib.c line 364
unsigned int fh_replacedata(struct fibheap_el *x, unsigned int data);
// fh_replacekey
// file fib.c line 310
signed long long int fh_replacekey(struct fibheap *h, struct fibheap_el *x, signed long long int key);
// fh_replacekeydata
// file fib.c line 262
unsigned int fh_replacekeydata(struct fibheap *h, struct fibheap_el *x, signed long long int key, unsigned int data);
// fh_setcmp
// file fib.c line 168
signed long long int (*fh_setcmp(struct fibheap *h, signed long long int (*fnct)(unsigned int, unsigned int)))(unsigned int, unsigned int);
// fh_setcmp::1::oldfnct_object
//
signed long long int oldfnct_object(unsigned int, unsigned int);
// fh_setcmp::fnct_object
//
signed long long int fnct_object(unsigned int, unsigned int);
// fh_setneginf
// file fib.c line 176
unsigned int fh_setneginf(struct fibheap *h, unsigned int data);
// fh_union
// file fib.c line 184
struct fibheap * fh_union(struct fibheap *ha, struct fibheap *hb);
// fhe_initelem
// file fib.c line 552
static void fhe_initelem(struct fibheap_el *e);
// fhe_insertafter
// file fib.c line 563
static void fhe_insertafter(struct fibheap_el *a, struct fibheap_el *b);
// fhe_insertbefore
// file fib.c line 581
static inline void fhe_insertbefore(struct fibheap_el *a, struct fibheap_el *b);
// fhe_newelem
// file fib.c line 541
static struct fibheap_el * fhe_newelem(struct fibheap *h);
// fhe_remove
// file fib.c line 586
static struct fibheap_el * fhe_remove(struct fibheap_el *x);
// fill1scaf
// file prlReadFillGap.c line 596
static void fill1scaf(signed int index, struct stack *ctgsStack, signed int thrdID);
// find_next_prime_kh
// file newhash.c line 86
static inline unsigned long long int find_next_prime_kh(unsigned long long int num);
// firstCharInKmer
// file inc/newhash.h line 99
extern char firstCharInKmer(unsigned long long int kmer);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeContig_array
// file loadGraph.c line 449
extern void freeContig_array();
// freeDarray
// file darray.c line 70
void freeDarray(struct dynamic_array *darray);
// freeMem_manager
// file inc/extfunc2.h line 28
extern void freeMem_manager(struct mem_manager *mem_Manager);
// freeStack
// file inc/stack.h line 52
void freeStack(struct stack *astack);
// freeStackBuf
// file prlReadFillGap.c line 873
static void freeStackBuf(struct stack **ctgStackBuffer, signed int scafBufSize);
// freeStackBuf_link1
// file read2scaf.c line 80
static void freeStackBuf_link1(struct stack **ctgStackBuffer_link1, signed int scafBufSize_link1);
// free_Sets
// file inc/newhash.h line 92
extern void free_Sets(struct kmerSet_st **sets, signed int num);
// free_edge_array
// file inc/extfunc.h line 52
extern void free_edge_array(struct edge *ed_array, signed int ed_num);
// free_kmerset
// file inc/newhash.h line 93
extern void free_kmerset(struct kmerSet_st *set);
// free_libs
// file lib.c line 358
extern void free_libs();
// free_pe_mem
// file lib.c line 443
extern void free_pe_mem();
// freezing
// file orderContig.c line 1893
static void freezing();
// freqStat
// file prlHashReads.c line 612
static void freqStat(char *outfile);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// general_linearization
// file orderContig.c line 3720
static void general_linearization(char strict);
// getArcBetween
// file arc.c line 242
extern struct arc * getArcBetween(unsigned int from_ed, unsigned int to_ed);
// getArcInLookupTable
// file arc.c line 177
static struct arc * getArcInLookupTable(unsigned int from_ed, unsigned int to_ed);
// getBindCnt
// file orderContig.c line 83
static struct connection * getBindCnt(unsigned int ctg);
// getCharInTightString
// file inc/extfunc.h line 54
extern char getCharInTightString(char *tightSeq, signed int pos);
// getCntBetween
// file inc/extfunc.h line 167
extern struct connection * getCntBetween(unsigned int from_c, unsigned int to_c);
// getCntInLookupTable
// file connect.c line 145
static struct connection * getCntInLookupTable(unsigned int from_c, unsigned int to_c);
// getDFibHeapSize
// file dfibHeap.c line 30
signed long long int getDFibHeapSize(struct dfibheap *heap);
// getDSLink2Scaf
// file orderContig.c line 3883
static signed int getDSLink2Scaf(struct stack *scafStack, struct dynamic_array *SCAF, struct dynamic_array *WT);
// getID
// file prlHashCtg.c line 247
static signed int getID(char *name);
// getIndexInArray
// file orderContig.c line 1295
static signed int getIndexInArray(unsigned int node);
// getItem
// file inc/extfunc2.h line 26
extern void * getItem(struct mem_manager *mem_Manager);
// getKey
// file inc/dfibHeap.h line 44
double getKey(struct dfibheap_el *node);
// getMaxLongReadLen
// file lib.c line 337
extern signed int getMaxLongReadLen(signed int num_libs);
// getMinOverlap
// file map.c line 34
static signed int getMinOverlap(char *gfile);
// getNextContig
// file orderContig.c line 579
static struct connection * getNextContig(unsigned int ctg, struct connection *preCNT, char *exception);
// getNodeDHeapNode
// file bubble.c line 873
static struct dfibheap_el * getNodeDHeapNode(unsigned int node);
// getNodePrevious
// file bubble.c line 293
unsigned int getNodePrevious(unsigned int node);
// getPreArcBetween
// file prlRead2path.c line 272
static struct prearc * getPreArcBetween(unsigned int from_ed, unsigned int to_ed);
// getRead1by1
// file prlReadFillGap.c line 95
static signed long long int getRead1by1(struct _IO_FILE *fp, struct dynamic_array *readSeqInGap);
// getReadIngap
// file prlRead2Ctg.c line 408
static void getReadIngap(signed int t, signed int insSize, struct _IO_FILE *outfp, char readOne);
// getScaffold
// file orderContig.c line 3929
static signed int getScaffold(unsigned int start, struct stack *scafStack);
// getSeqFromCtg
// file localAsm.c line 203
static signed int getSeqFromCtg(struct ctg4scaf *ctg, char fromHead, unsigned int len, signed int originOverlap, char *src_seq);
// getSeqFromRead
// file localAsm.c line 79
static void getSeqFromRead(struct read_nearby read, char *src_seq);
// getTwinCtg
// file attachPEinfo.c line 406
extern unsigned int getTwinCtg(unsigned int ctg);
// getTwinEdge
// file inc/extfunc.h line 212
extern unsigned int getTwinEdge(unsigned int edgeno);
// getWtFromSarray
// file orderContig.c line 3962
static signed int getWtFromSarray(struct dynamic_array *SCAF, struct dynamic_array *WT, signed int count, unsigned int scaf);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// hash_kmer
// file hashFunction.c line 101
unsigned long long int hash_kmer(unsigned long long int kmer);
// headTightStr
// file localAsm.c line 187
static void headTightStr(char *tightStr, signed int length, signed int start, signed int headLen, signed int revS, char *src_seq);
// initStackBuf
// file prlReadFillGap.c line 863
static void initStackBuf(struct stack **ctgStackBuffer, signed int scafBufSize);
// initStackBuf_link1
// file read2scaf.c line 73
static void initStackBuf_link1(struct stack **ctgStackBuffer_link1, signed int scafBufSize_link1);
// init_kmerset
// file inc/newhash.h line 88
extern struct kmerSet_st * init_kmerset(unsigned long long int init_size, float load_factor);
// initenv
// file contig.c line 103
static void initenv(signed int argc, char **argv);
// initenv_link1
// file map.c line 96
static void initenv_link1(signed int argc_link1, char **argv_link1);
// initenv_link2
// file pregraph.c line 105
static void initenv_link2(signed int argc_link2, char **argv_link2);
// initenv_link3
// file scaffold.c line 79
static void initenv_link3(signed int argc_link3, char **argv_link3);
// initiateCtgInScaf
// file prlReadFillGap.c line 226
static void initiateCtgInScaf(struct ctg4scaf *actg);
// inputLinks
// file orderContig.c line 2804
static signed int inputLinks(struct _IO_FILE *fp, signed int insertS, char *line);
// insertNodeIntoDHeap
// file inc/dfibHeap.h line 28
struct dfibheap_el * insertNodeIntoDHeap(struct dfibheap *heap, double key, unsigned int node);
// insertNodeIntoHeap
// file fibHeap.c line 33
struct fibheap_el * insertNodeIntoHeap(struct fibheap *heap, signed long long int key, unsigned int node);
// interferingCheck
// file splitReps.c line 33
static char interferingCheck(unsigned int edgeno, signed int repTimes);
// isLargerThanTwin
// file attachPEinfo.c line 416
extern char isLargerThanTwin(unsigned int ctg);
// isLinkReliable
// file orderContig.c line 3951
static char isLinkReliable(struct dynamic_array *WT, signed int count);
// isPreviousToNode
// file bubble.c line 298
static char isPreviousToNode(unsigned int previous, unsigned int target);
// isSameAsTwin
// file attachPEinfo.c line 421
extern char isSameAsTwin(unsigned int ctg);
// isSmallerThanTwin
// file attachPEinfo.c line 411
extern char isSmallerThanTwin(unsigned int ctg);
// isUnreliableTip
// file cutTip_graph.c line 164
char isUnreliableTip(unsigned int edgeid, signed int cutLen, char strict);
// isUnreliableTip_strict
// file cutTip_graph.c line 255
char isUnreliableTip_strict(unsigned int edgeid, signed int cutLen);
// is_prime_kh
// file newhash.c line 71
static inline signed int is_prime_kh(unsigned long long int num);
// kmer2edges
// file node2edge.c line 45
extern void kmer2edges(char *outfile);
// kmer2seq
// file seq.c line 192
char * kmer2seq(unsigned long long int word);
// kmer2vt
// file loadPreGraph.c line 124
extern signed int kmer2vt(unsigned long long int kmer);
// kmerSet_mark
// file localAsm.c line 306
static void kmerSet_mark(struct kmerSet_st *set);
// lengthSearch
// file loadGraph.c line 97
signed int lengthSearch(unsigned int *len_array, unsigned int *flag_array, signed int num, unsigned int target);
// linearC2C
// file orderContig.c line 903
static signed int linearC2C(unsigned int starter, struct connection *cnt2c1, unsigned int c2, signed int min_dis, signed int max_dis);
// linearConcatenate
// file inc/extfunc.h line 118
extern void linearConcatenate();
// linearUpdateConnection
// file concatenateEdge.c line 42
void linearUpdateConnection(unsigned int e1, unsigned int e2, signed int indicate);
// link2next
// file kmer.c line 31
extern void link2next(struct node *node, char ch);
// link2prev
// file kmer.c line 55
extern void link2prev(struct node *node, char ch);
// loadArcs
// file loadGraph.c line 364
static void loadArcs(char *graphfile);
// loadContig
// file loadGraph.c line 395
static void loadContig(char *graphfile);
// loadEdge
// file inc/extfunc.h line 62
extern void loadEdge(char *graphfile);
// loadPEgrads
// file attachPEinfo.c line 56
extern void loadPEgrads(char *infile);
// loadPath
// file loadPath.c line 40
extern char loadPath(char *graphfile);
// loadPathBin
// file inc/extfunc.h line 161
extern char loadPathBin(char *graphfile);
// loadPreArcs
// file loadPreGraph.c line 364
static void loadPreArcs(char *graphfile);
// loadReads4gap
// file prlReadFillGap.c line 134
static char loadReads4gap(char *graphfile);
// loadUpdatedEdges
// file loadGraph.c line 175
extern void loadUpdatedEdges(char *graphfile);
// loadUpdatedVertex
// file loadGraph.c line 33
extern void loadUpdatedVertex(char *graphfile);
// loadVertex
// file inc/extfunc.h line 60
extern void loadVertex(char *graphfile);
// localGraph
// file localAsm.c line 1218
extern signed int localGraph(struct read_nearby *rdArray, signed int num, struct ctg4scaf *ctg1, struct ctg4scaf *ctg2, signed int origOverlap, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, signed int overlap, struct dynamic_array *gapSeqArray, char *seqCtg1, char *seqCtg2, char *seqGap);
// locateContigOnscaff
// file read2scaf.c line 122
static void locateContigOnscaff(char *graphfile);
// locateReadOnScaf
// file read2scaf.c line 263
extern void locateReadOnScaf(char *graphfile);
// make_edge
// file node2edge.c line 275
static void make_edge(struct _IO_FILE *fp);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mapCtg2Scaf
// file read2scaf.c line 88
static void mapCtg2Scaf(signed int scafInBuf);
// mapDistancesOntoPaths
// file bubble.c line 597
static signed int mapDistancesOntoPaths();
// mapSlowOntoFast
// file bubble.c line 457
static void mapSlowOntoFast();
// markerLeadsToArc
// file bubble.c line 1287
static char markerLeadsToArc(struct readinterval *marker, unsigned int nodeA, unsigned int nodeB);
// markerLeadsToNode
// file bubble.c line 1257
static char markerLeadsToNode(struct readinterval *marker, unsigned int node);
// maskContig
// file orderContig.c line 778
static void maskContig(unsigned int ctg, char flag);
// maskPuzzle
// file orderContig.c line 818
static signed int maskPuzzle(signed int num_connect, unsigned int contigLen);
// maskRepeat
// file orderContig.c line 1417
static void maskRepeat();
// maskRepeatNode
// file localAsm.c line 966
static void maskRepeatNode(struct kmerSet_st *kset, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, signed int overlap, signed int len1, signed int len2, signed int max, unsigned long long int WordFilter);
// max
// file bubble.c line 378
static signed int max(signed int A, signed int B, signed int C);
// max_link1
// file localAsm.c line 1362
static signed int max_link1(signed int A_link1, signed int B_link1, signed int C_link1);
// maxKmer
// file prlReadFillGap.c line 803
static unsigned long long int maxKmer();
// memoAlloc4preArc
// file prlRead2path.c line 303
static void memoAlloc4preArc();
// memoFree4preArc
// file prlRead2path.c line 312
static void memoFree4preArc();
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// merge_linearV2
// file node2edge.c line 312
static void merge_linearV2(char bal_edge, struct stack *nStack, signed int count, struct _IO_FILE *fp);
// minInDHeap
// file dfib.c line 173
unsigned int minInDHeap(struct dfibheap *h);
// minKeyOfHeap
// file fibHeap.c line 40
signed long long int minKeyOfHeap(struct fibheap *heap);
// moveArc2cp
// file splitReps.c line 318
static void moveArc2cp(unsigned int leftEd, unsigned int rightEd, unsigned int source, unsigned int target);
// multiFileParse
// file readseq1by1.c line 119
extern signed long long int multiFileParse(signed int *max_leg, signed int *min_leg, signed int *max_name_leg, struct _IO_FILE *fp);
// nPick1
// file localAsm.c line 390
static signed int nPick1(signed int *array, signed int n);
// newDFibHeap
// file inc/dfibHeap.h line 26
struct dfibheap * newDFibHeap();
// newFibHeap
// file fibHeap.c line 27
struct fibheap * newFibHeap();
// nextKmer
// file inc/extfunc.h line 42
extern unsigned long long int nextKmer(unsigned long long int prev, char ch);
// nextKmerLocal
// file localAsm.c line 48
static unsigned long long int nextKmerLocal(unsigned long long int prev, char ch, unsigned long long int WordFilter);
// nextStartingPoint
// file bubble.c line 254
static unsigned int nextStartingPoint();
// nextValidIndex
// file readseq1by1.c line 253
static signed int nextValidIndex(signed int libNo, char pair, unsigned char asm_ctg);
// openFile4read
// file readseq1by1.c line 320
static struct _IO_FILE * openFile4read(char *fname);
// openFileInLib
// file readseq1by1.c line 338
void openFileInLib(signed int libNo);
// ordering
// file orderContig.c line 1479
static void ordering(char deWeak, char downS, char nonlinear, char *infile);
// output1gap
// file orderContig.c line 2082
void output1gap(struct _IO_FILE *fo, signed int max_steps);
// output1gap_link1
// file prlReadFillGap.c line 429
static void output1gap_link1(struct _IO_FILE *fo_link1, signed int scafIndex, struct ctg4scaf *prevCtg, struct ctg4scaf *actg, struct dynamic_array *gapSeqArray);
// output1read
// file prlRead2Ctg.c line 384
static void output1read(signed int t, struct _IO_FILE *outfp);
// output1read_link1
// file read2scaf.c line 237
static void output1read_link1(struct _IO_FILE *fo, signed long long int readno, unsigned int contigno, signed int pos);
// output1vt
// file output_pregraph.c line 31
static void output1vt(struct kmer_st *node1, struct _IO_FILE *fp);
// outputGapSeq
// file prlReadFillGap.c line 488
static void outputGapSeq(struct _IO_FILE *fo, signed int index, struct stack *ctgsStack, struct dynamic_array *gapSeqArray);
// outputLinks
// file orderContig.c line 2708
static void outputLinks(struct _IO_FILE *fp, signed int insertS);
// outputNs
// file prlReadFillGap.c line 395
static void outputNs(struct _IO_FILE *fp, signed int gapN, signed int *col);
// outputScafSeq
// file prlReadFillGap.c line 502
static void outputScafSeq(struct _IO_FILE *fo, signed int index, struct stack *ctgsStack, struct dynamic_array *gapSeqArray);
// outputSeqs
// file prlReadFillGap.c line 955
static void outputSeqs(struct _IO_FILE *fo, struct _IO_FILE *fo2, signed int scafInBuf);
// outputTightStr
// file prlReadFillGap.c line 315
static void outputTightStr(struct _IO_FILE *fp, char *tightStr, signed int start, signed int length, signed int outputlen, signed int revS, signed int *col);
// outputTightStrLowerCase
// file prlReadFillGap.c line 355
static void outputTightStrLowerCase(struct _IO_FILE *fp, char *tightStr, signed int start, signed int length, signed int outputlen, signed int revS, signed int *col);
// output_1contig
// file output_contig.c line 63
static void output_1contig(signed int id, struct edge *edge, struct _IO_FILE *fp, char tip);
// output_1edge
// file inc/extfunc.h line 101
extern void output_1edge(struct preedge *edge, struct _IO_FILE *fp);
// output_arcGVZ
// file arc.c line 76
void output_arcGVZ(char *outfile, char IsContig);
// output_arcs
// file prlRead2path.c line 320
static void output_arcs(char *outfile);
// output_cntGVZ
// file connect.c line 67
extern void output_cntGVZ(char *outfile);
// output_contig
// file inc/extfunc.h line 72
extern void output_contig(struct edge *ed_array, unsigned int ed_num, char *outfile, signed int cut_len);
// output_contig_graph
// file output_scaffold.c line 28
extern void output_contig_graph(char *outfile);
// output_ctg
// file prlReadFillGap.c line 979
static void output_ctg(unsigned int ctg, struct _IO_FILE *fo);
// output_graph
// file output_contig.c line 30
extern void output_graph(char *outfile);
// output_heavyArcs
// file inc/extfunc.h line 133
extern void output_heavyArcs(char *outfile);
// output_scaf
// file output_scaffold.c line 46
void output_scaf(char *outfile);
// output_updated_edges
// file inc/extfunc.h line 80
extern void output_updated_edges(char *outfile);
// output_vertex
// file output_pregraph.c line 46
extern void output_vertex(char *outfile);
// parse1read
// file prlRead2Ctg.c line 227
static void parse1read(signed int t, signed int threadID);
// parse1read_link1
// file prlRead2path.c line 430
static void parse1read_link1(signed int t_link1, signed int threadID_link1);
// pclose
// file /usr/include/stdio.h line 878
extern signed int pclose(struct _IO_FILE *);
// pickUpGeneralSubgraph
// file orderContig.c line 3280
static char pickUpGeneralSubgraph(unsigned int node1, signed int maxNodes);
// pipeline
// file main.c line 90
static void pipeline(signed int argc, char **argv);
// popen
// file /usr/include/stdio.h line 872
extern struct _IO_FILE * popen(const char *, const char *);
// prevKmer
// file kmer.c line 152
extern unsigned long long int prevKmer(unsigned long long int next, char ch);
// prevKmerLocal
// file localAsm.c line 41
static unsigned long long int prevKmerLocal(unsigned long long int next, char ch, signed int overlap);
// printCnts
// file orderContig.c line 2111
static char printCnts(struct _IO_FILE *fp, unsigned int ctg);
// printTightString
// file seq.c line 43
extern void printTightString(char *tightSeq, signed int len);
// print_kmer
// file inc/extfunc.h line 78
extern void print_kmer(struct _IO_FILE *fp, unsigned long long int kmer, char c);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// prlAllocatePreArc
// file arc.c line 55
extern struct prearc * prlAllocatePreArc(unsigned int edgeid, struct mem_manager *manager);
// prlContig2nodes
// file inc/extfunc.h line 178
extern char prlContig2nodes(char *grapfile, signed int len_cut);
// prlDestroyPreArcMem
// file arc.c line 35
extern void prlDestroyPreArcMem();
// prlLongRead2Ctg
// file inc/extfunc.h line 177
extern void prlLongRead2Ctg(char *libfile, char *outfile);
// prlRead2Ctg
// file inc/extfunc.h line 176
extern void prlRead2Ctg(char *libfile, char *outfile);
// prlRead2HashTable
// file inc/extfunc.h line 194
extern char prlRead2HashTable(char *libfile, char *outfile);
// prlRead2edge
// file inc/extfunc.h line 102
extern void prlRead2edge(char *libfile, char *outfile);
// prlReadsCloseGap
// file prlReadFillGap.c line 1005
extern void prlReadsCloseGap(char *graphfile);
// procGap
// file prlReadFillGap.c line 233
static signed int procGap(char *line, struct stack *ctgsStack);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// putArc2LookupTable
// file arc.c line 167
extern void putArc2LookupTable(unsigned int from_ed, struct arc *arc);
// putChainIntoSubgraph
// file orderContig.c line 1325
static char putChainIntoSubgraph(struct fibheap *heap, signed int distance, unsigned int node, signed int *index, struct connection *prevC);
// putCnt2LookupTable
// file inc/extfunc.h line 172
extern void putCnt2LookupTable(unsigned int from_c, struct connection *cnt);
// putItem2Sarray
// file orderContig.c line 3859
static char putItem2Sarray(unsigned int scaf, signed int wt, struct dynamic_array *SCAF, struct dynamic_array *WT, signed int counter);
// putKmer2DBgraph
// file localAsm.c line 71
static void putKmer2DBgraph(struct kmerSet_st *kset, signed int flag, signed int kmer_c, unsigned long long int *kmerBuffer, char *prevcBuffer, char *nextcBuffer);
// putNodeInArray
// file orderContig.c line 3000
static char putNodeInArray(unsigned int node, signed int maxNodes, signed int dis);
// putNodeIntoSubgraph
// file orderContig.c line 1306
static char putNodeIntoSubgraph(struct fibheap *heap, signed int distance, unsigned int node, signed int index);
// put_kmerset
// file inc/newhash.h line 90
extern signed int put_kmerset(struct kmerSet_st *set, unsigned long long int seq, unsigned char left, unsigned char right, struct kmer_st **kmer_p);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// quick_sort_int
// file loadGraph.c line 143
void quick_sort_int(unsigned int *length_array, signed int low, signed int high);
// read1seqInLib
// file inc/extfunc.h line 182
extern char read1seqInLib(char *src_seq, char *src_name, signed int *len_seq, signed int *libNo, char pair, unsigned char asm_ctg);
// read1seqfq
// file readseq1by1.c line 184
void read1seqfq(char *src_seq, char *src_name, signed int *len_seq, struct _IO_FILE *fp);
// readOnEdge
// file splitReps.c line 85
static char readOnEdge(signed long long int readid, unsigned int edge);
// read_one_sequence
// file readseq1by1.c line 95
extern void read_one_sequence(struct _IO_FILE *fp, signed long long int *T, char **X);
// readsCrossGap
// file localAsm.c line 1695
static char readsCrossGap(struct read_nearby *rdArray, signed int num, signed int originOverlap, struct dynamic_array *gapSeqArray, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, signed int overlap, struct ctg4scaf *ctg1, struct ctg4scaf *ctg2, struct kmerSet_st *kmerS, unsigned long long int WordFilter, signed int min, signed int max, signed int offset1, signed int offset2, char *seqGap, char *seqCtg1, char *seqCtg2, signed int cut1, signed int cut2);
// readsInGap2DBgraph
// file localAsm.c line 233
static struct kmerSet_st * readsInGap2DBgraph(struct read_nearby *rdArray, signed int num, struct ctg4scaf *ctg1, struct ctg4scaf *ctg2, signed int originOverlap, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, signed int overlap, unsigned long long int WordFilter);
// readseq1by1
// file inc/extfunc.h line 27
extern void readseq1by1(char *src_seq, char *src_name, signed int *len_seq, struct _IO_FILE *fp, signed long long int num_seq);
// readseqpar
// file inc/extfunc.h line 44
extern signed long long int readseqpar(signed int *max_leg, signed int *min_leg, signed int *max_name_leg, struct _IO_FILE *fp);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recordAlldgn
// file prlRead2Ctg.c line 443
static void recordAlldgn(struct _IO_FILE *outfp, signed int insSize, struct _IO_FILE *outfp2);
// recordArcsInLookupTable
// file arc.c line 225
extern void recordArcsInLookupTable();
// recordLongRead
// file prlRead2Ctg.c line 430
static void recordLongRead(struct _IO_FILE *outfp);
// recordPathBin
// file prlRead2path.c line 370
static void recordPathBin(struct _IO_FILE *outfp);
// recoverMask
// file orderContig.c line 1669
static void recoverMask();
// reduceNode
// file bubble.c line 1269
static void reduceNode(unsigned int node);
// reduceSlowNodes
// file bubble.c line 1276
static void reduceSlowNodes(struct readinterval *slowMarker, unsigned int finish);
// remapBackOfNodeArcsOntoNeighbour
// file bubble.c line 1225
static void remapBackOfNodeArcsOntoNeighbour(unsigned int source, unsigned int target);
// remapBackOfNodeDescriptorOntoNeighbour
// file bubble.c line 1159
static void remapBackOfNodeDescriptorOntoNeighbour(unsigned int source, unsigned int target, char slowToFast, signed int offset);
// remapBackOfNodeMarkersOntoNeighbour
// file bubble.c line 970
static signed int remapBackOfNodeMarkersOntoNeighbour(unsigned int source, struct readinterval *sourceMarker, unsigned int target, struct readinterval *targetMarker, char slowToFast);
// remapBackOfNodeOntoNeighbour
// file bubble.c line 1236
static void remapBackOfNodeOntoNeighbour(unsigned int source, struct readinterval *sourceMarker, unsigned int target, struct readinterval *targetMarker, char slowToFast);
// remapBackOfNodeTimesOntoNeighbour
// file bubble.c line 1176
static void remapBackOfNodeTimesOntoNeighbour(unsigned int source, unsigned int target);
// remapEmptyPathArcsOntoMiddlePathSimple
// file bubble.c line 1312
static void remapEmptyPathArcsOntoMiddlePathSimple(struct readinterval *emptyPath, struct readinterval *targetPath);
// remapEmptyPathMarkersOntoMiddlePathSimple
// file bubble.c line 1363
static void remapEmptyPathMarkersOntoMiddlePathSimple(struct readinterval *emptyPath, struct readinterval *targetPath, char slowToFast);
// remapEmptyPathOntoMiddlePath
// file bubble.c line 1470
static void remapEmptyPathOntoMiddlePath(struct readinterval *emptyPath, struct readinterval *targetPath, char slowToFast);
// remapNodeArcsOntoNeighbour
// file bubble.c line 866
static void remapNodeArcsOntoNeighbour(unsigned int source, unsigned int target);
// remapNodeArcsOntoTarget
// file bubble.c line 844
static void remapNodeArcsOntoTarget(unsigned int source, unsigned int target);
// remapNodeFibHeapReferencesOntoNode
// file bubble.c line 883
static void remapNodeFibHeapReferencesOntoNode(unsigned int source, unsigned int target);
// remapNodeInwardReferencesOntoNode
// file bubble.c line 710
static void remapNodeInwardReferencesOntoNode(unsigned int source, unsigned int target);
// remapNodeMarkersOntoNeighbour
// file bubble.c line 691
static void remapNodeMarkersOntoNeighbour(unsigned int source, unsigned int target);
// remapNodeOntoNeighbour
// file bubble.c line 922
static void remapNodeOntoNeighbour(unsigned int source, unsigned int target);
// remapNodeTimesOntoForwardMiddlePath
// file bubble.c line 1410
static void remapNodeTimesOntoForwardMiddlePath(unsigned int source, struct readinterval *path);
// remapNodeTimesOntoNeighbour
// file bubble.c line 757
static void remapNodeTimesOntoNeighbour(unsigned int source, unsigned int target);
// remapNodeTimesOntoTargetNode
// file bubble.c line 726
static void remapNodeTimesOntoTargetNode(unsigned int source, unsigned int target);
// remapNodeTimesOntoTwinMiddlePath
// file bubble.c line 1437
static void remapNodeTimesOntoTwinMiddlePath(unsigned int source, struct readinterval *path);
// removeArcInLookupTable
// file arc.c line 193
extern void removeArcInLookupTable(unsigned int from_ed, unsigned int to_ed);
// removeDeadArcs
// file cutTip_graph.c line 330
extern void removeDeadArcs();
// removeLowCovEdges
// file inc/extfunc.h line 216
extern void removeLowCovEdges(signed int lenCutoff, unsigned short int covCutoff);
// removeMinorTips
// file cutTipPreGraph.c line 313
extern void removeMinorTips();
// removeNextNodeFromDHeap
// file inc/dfibHeap.h line 32
unsigned int removeNextNodeFromDHeap(struct dfibheap *heap);
// removeNextNodeFromHeap
// file fibHeap.c line 53
unsigned int removeNextNodeFromHeap(struct fibheap *heap);
// removeSingleTips
// file cutTipPreGraph.c line 281
extern void removeSingleTips();
// removeTransitive
// file orderContig.c line 1139
static void removeTransitive();
// removeWeakEdges
// file inc/extfunc.h line 143
extern void removeWeakEdges(signed int lenCutoff, unsigned int multiCutoff);
// replaceKeyInDHeap
// file inc/dfibHeap.h line 30
double replaceKeyInDHeap(struct dfibheap *heap, struct dfibheap_el *node, double newKey);
// replaceKeyInHeap
// file fibHeap.c line 46
signed long long int replaceKeyInHeap(struct fibheap *heap, struct fibheap_el *node, signed long long int newKey);
// replaceValueInDHeap
// file inc/dfibHeap.h line 38
void replaceValueInDHeap(struct dfibheap_el *node, unsigned int newValue);
// replaceValueInHeap
// file fibHeap.c line 70
void replaceValueInHeap(struct fibheap_el *node, unsigned int newValue);
// resetNodeStatus
// file bubble.c line 163
static void resetNodeStatus();
// returnItem
// file inc/extfunc2.h line 27
extern void returnItem(struct mem_manager *mem_Manager, void *item);
// reverse2k
// file readseq1by1.c line 390
static void reverse2k(char *src_seq, signed int len_seq);
// reverseComplement
// file inc/extfunc.h line 32
extern unsigned long long int reverseComplement(unsigned long long int word, signed int overlap);
// reverseComplementSeq
// file inc/extfunc.h line 47
extern void reverseComplementSeq(char *seq, signed int len, char *bal_seq);
// reverseComplementVerbose
// file inc/extfunc.h line 131
extern unsigned long long int reverseComplementVerbose(unsigned long long int word, signed int overlap);
// reverseStack
// file prlReadFillGap.c line 744
static void reverseStack(struct stack *dStack, struct stack *sStack);
// reverseStack_link1
// file read2scaf.c line 57
static void reverseStack_link1(struct stack *dStack_link1, struct stack *sStack_link1);
// rewind
// file /usr/include/stdio.h line 759
extern void rewind(struct _IO_FILE *);
// scaffold_count
// file orderContig.c line 2474
void scaffold_count(unsigned int len_cut);
// scaffolding
// file orderContig.c line 2179
extern void scaffolding(unsigned int len_cut, char *outfile);
// scan_libInfo
// file lib.c line 78
extern void scan_libInfo(char *libfile);
// search1kmerPlus
// file prlRead2path.c line 404
static void search1kmerPlus(signed int j, unsigned char thrdID);
// searchFgap
// file localAsm.c line 545
static signed int searchFgap(struct kmerSet_st *kset, struct ctg4scaf *ctg1, struct ctg4scaf *ctg2, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, unsigned int origOverlap, signed int overlap, struct dynamic_array *gapSeqArray, signed int len1, signed int len2, unsigned long long int WordFilter, signed int *offset1, signed int *offset2, char *seqGap, signed int *cut1, signed int *cut2);
// searchKmer
// file prlRead2Ctg.c line 216
static void searchKmer(signed int t, struct kmerSet_st *kset);
// searchKmer_link1
// file prlRead2path.c line 261
static void searchKmer_link1(signed int t_link1, struct kmerSet_st *kset_link1);
// searchKmerOnCtg
// file localAsm.c line 374
static signed int searchKmerOnCtg(unsigned long long int currW, unsigned long long int *kmerDest, signed int num);
// searchNode
// file localAsm.c line 357
static struct kmer_st * searchNode(unsigned long long int word, struct kmerSet_st *kset, signed int overlap);
// search_kmerset
// file inc/newhash.h line 89
extern signed int search_kmerset(struct kmerSet_st *set, unsigned long long int seq, struct kmer_st **rs);
// sendWorkSignal
// file cutTipPreGraph.c line 438
static void sendWorkSignal(unsigned char SIG, unsigned char *thrdSignals);
// sendWorkSignal_link1
// file prlHashCtg.c line 227
static void sendWorkSignal_link1(unsigned char SIG_link1, unsigned char *thrdSignals_link1);
// sendWorkSignal_link2
// file prlHashReads.c line 228
static void sendWorkSignal_link2(unsigned char SIG_link2, unsigned char *thrdSignals_link2);
// sendWorkSignal_link3
// file prlRead2Ctg.c line 328
static void sendWorkSignal_link3(unsigned char SIG_link3, unsigned char *thrdSignals_link3);
// sendWorkSignal_link4
// file prlRead2path.c line 539
static void sendWorkSignal_link4(unsigned char SIG_link4, unsigned char *thrdSignals_link4);
// sendWorkSignal_link5
// file prlReadFillGap.c line 926
static void sendWorkSignal_link5(unsigned char SIG_link5, unsigned char *thrdSignals_link5);
// setBreakPoints
// file orderContig.c line 4045
static void setBreakPoints(struct dynamic_array *ctgArray, signed int count, signed int weakest, signed int *start, signed int *finish);
// setConnectDelete
// file orderContig.c line 748
static signed int setConnectDelete(unsigned int from_c, unsigned int to_c, char flag, char cleanBinding);
// setConnectMask
// file orderContig.c line 662
static signed int setConnectMask(unsigned int from_c, unsigned int to_c, char mask);
// setConnectUsed
// file orderContig.c line 710
static char setConnectUsed(unsigned int from_c, unsigned int to_c, char flag);
// setConnectWP
// file orderContig.c line 728
static signed int setConnectWP(unsigned int from_c, unsigned int to_c, char flag);
// setInGraph
// file orderContig.c line 3023
static void setInGraph(char flag);
// setNextInScaf
// file orderContig.c line 422
static char setNextInScaf(struct connection *cnt, struct connection *nextCnt);
// setNodeDHeapNode
// file bubble.c line 878
static void setNodeDHeapNode(unsigned int node, struct dfibheap_el *dheapNode);
// setPrevInScaf
// file orderContig.c line 452
static char setPrevInScaf(struct connection *cnt, char flag);
// setUsed
// file orderContig.c line 1559
static char setUsed(unsigned int start, unsigned int *array, signed int max_steps, char flag);
// set_new_kmer
// file newhash.c line 58
static inline void set_new_kmer(struct kmer_st *mer, unsigned long long int seq, unsigned char left, unsigned char right);
// simplifyCnt
// file orderContig.c line 1287
static void simplifyCnt();
// singleKmer
// file localAsm.c line 56
static void singleKmer(signed int t, struct kmerSet_st *kset, signed int flag, unsigned long long int *kmerBuffer, char *prevcBuffer, char *nextcBuffer);
// singleKmer_link1
// file prlHashCtg.c line 112
static void singleKmer_link1(signed int t_link1, struct kmerSet_st *kset_link1, unsigned int seq_index, unsigned int pos);
// singleKmer_link2
// file prlHashReads.c line 116
static void singleKmer_link2(signed int t_link2, struct kmerSet_st *kset_link2);
// smallScaf
// file orderContig.c line 3795
static void smallScaf();
// solvable
// file splitReps.c line 147
unsigned int solvable(unsigned int edgeno);
// solveReps
// file inc/extfunc.h line 150
extern void solveReps();
// split1edge
// file splitReps.c line 371
static void split1edge(unsigned int edgeno, signed int repTimes);
// splitColumn
// file lib.c line 30
static char splitColumn(char *line);
// splitNodeDescriptor
// file bubble.c line 1064
static void splitNodeDescriptor(unsigned int source, unsigned int target, signed int offset);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sqrt
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 156
extern double sqrt(double);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stackBackup
// file inc/stack.h line 48
void stackBackup(struct stack *astack);
// stackPop
// file inc/stack.h line 51
void * stackPop(struct stack *astack);
// stackPush
// file inc/stack.h line 50
void * stackPush(struct stack *astack);
// stackRecover
// file inc/stack.h line 49
void stackRecover(struct stack *astack);
// startEdgeFromNode
// file node2edge.c line 173
static signed int startEdgeFromNode(struct kmer_st *node1, struct _IO_FILE *fp);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// stringBeads
// file node2edge.c line 56
static void stringBeads(struct kmer_pt *firstBead, char nextch, signed int *node_c);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// substitueDSinScaf
// file orderContig.c line 520
static void substitueDSinScaf(struct connection *origin, unsigned int branch_c, unsigned int to_c_new);
// substitueUSinScaf
// file orderContig.c line 482
static void substitueUSinScaf(struct connection *origin, unsigned int from_c_new);
// switch2twin
// file orderContig.c line 3973
static void switch2twin(struct stack *scafStack);
// threadRoutine
// file cutTipPreGraph.c line 353
static void threadRoutine(void *para);
// threadRoutine_link1
// file prlHashCtg.c line 53
static void threadRoutine_link1(void *para_link1);
// threadRoutine_link2
// file prlHashReads.c line 58
static void threadRoutine_link2(void *para_link2);
// threadRoutine_link3
// file prlRead2Ctg.c line 79
static void threadRoutine_link3(void *para_link3);
// threadRoutine_link4
// file prlRead2path.c line 83
static void threadRoutine_link4(void *para_link4);
// threadRoutine_link5
// file prlReadFillGap.c line 881
static void threadRoutine_link5(void *para_link5);
// thread_add1preArc
// file prlRead2path.c line 288
static void thread_add1preArc(unsigned int from_ed, unsigned int to_ed, unsigned int thrdID);
// thread_delow
// file prlHashReads.c line 458
static void thread_delow(struct kmerSet_st *set, unsigned char thrdID);
// thread_mark
// file cutTipPreGraph.c line 395
static void thread_mark(struct kmerSet_st *set, unsigned char thrdID);
// thread_mark_link1
// file prlHashReads.c line 534
static void thread_mark_link1(struct kmerSet_st *set_link1, unsigned char thrdID_link1);
// thread_wait
// file cutTipPreGraph.c line 429
static void thread_wait(unsigned long int *threads);
// thread_wait_link1
// file prlHashCtg.c line 153
static void thread_wait_link1(unsigned long int *threads_link1);
// thread_wait_link2
// file prlHashReads.c line 140
static void thread_wait_link2(unsigned long int *threads_link2);
// thread_wait_link3
// file prlRead2Ctg.c line 713
static void thread_wait_link3(unsigned long int *threads_link3);
// thread_wait_link4
// file prlRead2path.c line 796
static void thread_wait_link4(unsigned long int *threads_link4);
// thread_wait_link5
// file prlReadFillGap.c line 946
static void thread_wait_link5(unsigned long int *threads_link5);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tourBus
// file bubble.c line 1903
static void tourBus(unsigned int startingPoint);
// tourBusArc
// file bubble.c line 1779
static void tourBusArc(unsigned int origin, unsigned int destination, unsigned int arcMulti, double originTime);
// tourBusNode
// file bubble.c line 1842
static void tourBusNode(unsigned int node);
// trace4Repeat
// file localAsm.c line 804
static void trace4Repeat(unsigned long long int currW, signed int steps, signed int min, signed int max, signed int *num_route, struct kmerSet_st *kset, unsigned long long int kmerDest, signed int overlap, unsigned long long int WORDF, signed int *traceCounter, signed int maxRoute, struct kmer_st **soFarNode, signed short int *multiOccu1, signed short int *multiOccu2, signed int *routeLens, char **foundRoutes, char *soFarSeq, signed long long int *soFarLinks, double *avgLinks);
// traceAlongArc
// file inc/extfunc.h line 136
extern void traceAlongArc(unsigned int destE, unsigned int currE, signed int max_steps, signed int min, signed int max, signed int index, signed int len, signed int *num_route);
// traceAlongConnect
// file searchPath.c line 96
void traceAlongConnect(unsigned int destE, struct connection *currCNT, signed int max_steps, signed int min, signed int max, signed int index, signed int len, signed int *num_route);
// traceAlongDBgraph
// file localAsm.c line 402
static void traceAlongDBgraph(unsigned long long int currW, signed int steps, signed int min, signed int max, signed int *num_route, struct kmerSet_st *kset, unsigned long long int *kmerDest, signed int num, signed int overlap, unsigned long long int WORDF, char **foundRoutes, signed int *routeEndOnCtg2, signed int *routeLens, char *soFarSeq, signed int *traceCounter, signed int maxRoute, struct kmer_st **soFarNode, char *multiOccu, signed long long int *soFarLinks, double *avgLinks);
// traceAlongMaskedCnt
// file inc/extfunc.h line 159
extern void traceAlongMaskedCnt(unsigned int destE, unsigned int currE, signed int max_steps, signed int min, signed int max, signed int index, signed int len, signed int *num_route);
// trans_seq
// file seq.c line 178
signed long long int trans_seq(char *seq, signed int len);
// unBindLink
// file orderContig.c line 1847
static void unBindLink(unsigned int CB, unsigned int CC);
// uniqueLenSearch
// file loadGraph.c line 72
extern signed int uniqueLenSearch(unsigned int *len_array, unsigned int *flag_array, signed int num, unsigned int target);
// unlink2next
// file kmer.c line 49
extern void unlink2next(struct node *node, char ch);
// unlink2prev
// file kmer.c line 73
extern void unlink2prev(struct node *node, char ch);
// updateNodeStatus
// file bubble.c line 280
static void updateNodeStatus();
// update_kmer
// file newhash.c line 33
static inline void update_kmer(struct kmer_st *mer, unsigned char left, unsigned char right);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// validConnect
// file orderContig.c line 555
static signed int validConnect(unsigned int ctg, struct connection *preCNT);
// workOnDheap
// file orderContig.c line 3086
static char workOnDheap(struct fibheap *dheap, struct fibheap *uheap, char *Dwait, char *Uwait, signed int *DmaxDis, signed int *UmaxDis, signed int maxNodes);
// workOnUheap
// file orderContig.c line 3188
static char workOnUheap(struct fibheap *dheap, struct fibheap *uheap, char *Dwait, char *Uwait, signed int *DmaxDis, signed int *UmaxDis, signed int maxNodes);
// writeChar2tightString
// file inc/extfunc.h line 130
extern void writeChar2tightString(char nt, char *tightSeq, signed int pos);

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

struct arc
{
  // to_ed
  unsigned int to_ed;
  // multiplicity
  unsigned int multiplicity;
  // prev
  struct arc *prev;
  // next
  struct arc *next;
  // bal_arc
  struct arc *bal_arc;
  // nextInLookupTable
  struct arc *nextInLookupTable;
};

struct block_start
{
  // next
  struct block_start *next;
};

struct block_starter
{
  // prev
  struct block_starter *prev;
  // next
  struct block_starter *next;
};

struct connection
{
  // contigID
  unsigned int contigID;
  // gapLen
  signed int gapLen;
  // maxGap
  unsigned short int maxGap;
  // minGap
  unsigned char minGap;
  // bySmall
  unsigned char bySmall : 1;
  // weakPoint
  unsigned char weakPoint : 1;
  // weightNotInherit
  unsigned char weightNotInherit;
  // weight
  unsigned char weight;
  // maxSingleWeight
  unsigned char maxSingleWeight;
  // mask
  unsigned char mask : 1;
  // used
  unsigned char used : 1;
  // weak
  unsigned char weak : 1;
  // deleted
  unsigned char deleted : 1;
  // prevInScaf
  unsigned char prevInScaf : 1;
  // inherit
  unsigned char inherit : 1;
  // checking
  unsigned char checking : 1;
  // singleInScaf
  unsigned char singleInScaf : 1;
  // nextInScaf
  struct connection *nextInScaf;
  // next
  struct connection *next;
  // nextInLookupTable
  struct connection *nextInLookupTable;
};

struct contig
{
  // from_vt
  unsigned int from_vt;
  // to_vt
  unsigned int to_vt;
  // length
  unsigned int length;
  // indexInScaf
  unsigned short int indexInScaf;
  // cvg
  unsigned char cvg;
  // bal_edge
  unsigned char bal_edge : 2;
  // mask
  unsigned char mask : 1;
  // flag
  unsigned char flag : 1;
  // multi
  unsigned char multi : 1;
  // inSubGraph
  unsigned char inSubGraph : 1;
  // seq
  char *seq;
  // downwardConnect
  struct connection *downwardConnect;
  // arcs
  struct prearc *arcs;
  // closeReads
  struct stack *closeReads;
};

struct ctg4heap
{
  // ctgID
  unsigned int ctgID;
  // dis
  signed int dis;
  // ds_shut4dheap
  unsigned char ds_shut4dheap : 1;
  // us_shut4dheap
  unsigned char us_shut4dheap : 1;
  // ds_shut4uheap
  unsigned char ds_shut4uheap : 1;
  // us_shut4uheap
  unsigned char us_shut4uheap : 1;
};

struct ctg4scaf
{
  // ctgID
  unsigned int ctgID;
  // start
  signed int start;
  // end
  signed int end;
  // cutHead
  unsigned int cutHead : 8;
  // cutTail
  unsigned int cutTail : 7;
  // scaftig_start
  unsigned int scaftig_start : 1;
  // mask
  unsigned int mask : 1;
  // gapSeqLen
  unsigned int gapSeqLen : 15;
  // gapSeqOffset
  signed int gapSeqOffset;
};

struct dfibheap
{
  // nodeMemory
  struct mem_manager *nodeMemory;
  // dfh_n
  signed long long int dfh_n;
  // dfh_Dl
  signed long long int dfh_Dl;
  // dfh_cons
  struct dfibheap_el **dfh_cons;
  // dfh_min
  struct dfibheap_el *dfh_min;
  // dfh_root
  struct dfibheap_el *dfh_root;
};

struct dfibheap_el
{
  // dfhe_degree
  signed int dfhe_degree;
  // dfhe_mark
  char dfhe_mark;
  // dfhe_p
  struct dfibheap_el *dfhe_p;
  // dfhe_child
  struct dfibheap_el *dfhe_child;
  // dfhe_left
  struct dfibheap_el *dfhe_left;
  // dfhe_right
  struct dfibheap_el *dfhe_right;
  // dfhe_key
  double dfhe_key;
  // dfhe_data
  unsigned int dfhe_data;
};

struct dynamic_array
{
  // array
  void *array;
  // array_size
  signed long long int array_size;
  // item_size
  unsigned long int item_size;
  // item_c
  signed long long int item_c;
};

struct edge
{
  // from_vt
  unsigned int from_vt;
  // to_vt
  unsigned int to_vt;
  // length
  signed int length;
  // cvg
  unsigned short int cvg : 14;
  // bal_edge
  unsigned short int bal_edge : 2;
  // multi
  unsigned short int multi : 14;
  // deleted
  unsigned short int deleted : 1;
  // flag
  unsigned short int flag : 1;
  // seq
  char *seq;
  // rv
  struct readinterval *rv;
  // arcs
  struct arc *arcs;
  // markers
  signed long long int *markers;
};

struct fibheap
{
  // fh_cmp_fnct
  signed long long int (*fh_cmp_fnct)(unsigned int, unsigned int);
  // nodeMemory
  struct mem_manager *nodeMemory;
  // fh_n
  signed long long int fh_n;
  // fh_Dl
  signed long long int fh_Dl;
  // fh_cons
  struct fibheap_el **fh_cons;
  // fh_min
  struct fibheap_el *fh_min;
  // fh_root
  struct fibheap_el *fh_root;
  // fh_neginf
  unsigned int fh_neginf;
  // fh_keys
  char fh_keys : 1;
};

struct fibheap_el
{
  // fhe_degree
  signed int fhe_degree;
  // fhe_mark
  char fhe_mark;
  // fhe_p
  struct fibheap_el *fhe_p;
  // fhe_child
  struct fibheap_el *fhe_child;
  // fhe_left
  struct fibheap_el *fhe_left;
  // fhe_right
  struct fibheap_el *fhe_right;
  // fhe_key
  signed long long int fhe_key;
  // fhe_data
  unsigned int fhe_data;
};

struct kmerSet_st
{
  // array
  struct kmer_st *array;
  // flags
  unsigned int *flags;
  // size
  unsigned long long int size;
  // count
  unsigned long long int count;
  // max
  unsigned long long int max;
  // load_factor
  double load_factor;
  // iter_ptr
  unsigned long long int iter_ptr;
};

struct kmer_pt
{
  // node
  struct kmer_st *node;
  // kmer
  unsigned long long int kmer;
  // isSmaller
  char isSmaller;
  // next
  struct kmer_pt *next;
};

struct kmer_st
{
  // seq
  unsigned long long int seq;
  // l_links
  unsigned int l_links;
  // r_links
  unsigned int r_links : 24;
  // linear
  unsigned int linear : 1;
  // deleted
  unsigned int deleted : 1;
  // checked
  unsigned int checked : 1;
  // single
  unsigned int single : 1;
  // twin
  unsigned int twin : 2;
  // inEdge
  unsigned int inEdge : 2;
};

struct lib_info
{
  // min_ins
  signed int min_ins;
  // max_ins
  signed int max_ins;
  // avg_ins
  signed int avg_ins;
  // rd_len_cutoff
  signed int rd_len_cutoff;
  // reverse
  signed int reverse;
  // asm_flag
  signed int asm_flag;
  // map_len
  signed int map_len;
  // pair_num_cut
  signed int pair_num_cut;
  // rank
  signed int rank;
  // curr_type
  signed int curr_type;
  // curr_index
  signed int curr_index;
  // fp1
  struct _IO_FILE *fp1;
  // fp2
  struct _IO_FILE *fp2;
  // f1_start
  char f1_start;
  // f2_start
  char f2_start;
  // paired
  signed int paired;
  // a1_fname
  char **a1_fname;
  // a2_fname
  char **a2_fname;
  // num_a1_file
  signed int num_a1_file;
  // num_a2_file
  signed int num_a2_file;
  // q1_fname
  char **q1_fname;
  // q2_fname
  char **q2_fname;
  // num_q1_file
  signed int num_q1_file;
  // num_q2_file
  signed int num_q2_file;
  // p_fname
  char **p_fname;
  // num_p_file
  signed int num_p_file;
  // s_a_fname
  char **s_a_fname;
  // num_s_a_file
  signed int num_s_a_file;
  // s_q_fname
  char **s_q_fname;
  // num_s_q_file
  signed int num_s_q_file;
};

struct mem_manager
{
  // block_list
  struct block_start *block_list;
  // index_in_block
  signed int index_in_block;
  // items_per_block
  signed int items_per_block;
  // item_size
  unsigned long int item_size;
  // recycle_list
  struct recycle_mark *recycle_list;
  // counter
  unsigned long long int counter;
};

struct node
{
  // kmer
  unsigned long long int kmer;
  // links
  unsigned char links;
  // linksB
  unsigned char linksB;
  // cvg
  unsigned char cvg;
  // linear
  unsigned char linear : 1;
  // deleted
  unsigned char deleted : 1;
  // mark
  unsigned char mark : 1;
  // to_end
  unsigned int to_end;
  // left
  struct node *left;
  // right
  struct node *right;
};

struct parameter
{
  // threadID
  unsigned char threadID;
  // hash_table
  void **hash_table;
  // mainSignal
  unsigned char *mainSignal;
  // selfSignal
  unsigned char *selfSignal;
};

struct pe_info
{
  // insertS
  signed int insertS;
  // PE_bound
  signed long long int PE_bound;
  // rank
  signed int rank;
  // pair_num_cut
  signed int pair_num_cut;
};

struct prearc
{
  // to_ed
  unsigned int to_ed;
  // multiplicity
  unsigned int multiplicity;
  // next
  struct prearc *next;
};

struct preedge
{
  // from_node
  unsigned long long int from_node;
  // to_node
  unsigned long long int to_node;
  // seq
  char *seq;
  // length
  signed int length;
  // cvg
  unsigned short int cvg;
  // bal_edge
  unsigned short int bal_edge : 2;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct read_nearby
{
  // len
  signed int len;
  // dis
  signed int dis;
  // seqStarter
  signed long long int seqStarter;
};

struct readinterval
{
  // readid
  signed int readid;
  // edgeid
  unsigned int edgeid;
  // start
  signed int start;
  // bal_rv
  struct readinterval *bal_rv;
  // nextOnEdge
  struct readinterval *nextOnEdge;
  // prevOnEdge
  struct readinterval *prevOnEdge;
  // nextInRead
  struct readinterval *nextInRead;
  // prevInRead
  struct readinterval *prevInRead;
};

struct recycle_mark
{
  // next
  struct recycle_mark *next;
};

struct stack
{
  // block_list
  struct block_starter *block_list;
  // index_in_block
  signed int index_in_block;
  // items_per_block
  signed int items_per_block;
  // item_c
  signed int item_c;
  // item_size
  unsigned long int item_size;
  // block_backup
  struct block_starter *block_backup;
  // index_backup
  signed int index_backup;
  // item_c_backup
  signed int item_c_backup;
};

struct vertex
{
  // kmer
  unsigned long long int kmer;
};


// ALIGNLEN
// file prlRead2Ctg.c line 35
static signed int ALIGNLEN = 0;
// ConflPercent
// file orderContig.c line 41
static double ConflPercent = 0.05;
// DIFF
// file bubble.c line 40
static signed int DIFF;
// Fmatrix
// file bubble.c line 74
static signed int Fmatrix[101l][101l];
// Fmatrix_link1
// file localAsm.c line 1358
static signed int Fmatrix_link1[101l][101l];
// GLDiff
// file inc/global.h line 82
signed int GLDiff = 50;
// HasChanged
// file bubble.c line 45
static char HasChanged;
// INDEL
// file bubble.c line 50
static const signed int INDEL = 0;
// INDEL_link1
// file localAsm.c line 1347
static const signed int INDEL_link1 = 0;
// KmerSets
// file inc/global.h line 74
struct kmerSet_st **KmerSets = (struct kmerSet_st **)(void *)0;
// KmerSetsPatch
// file inc/global.h line 75
struct kmerSet_st **KmerSetsPatch = (struct kmerSet_st **)(void *)0;
// LINK
// file scaffold.c line 31
static char LINK;
// M
// file contig.c line 33
static signed int M = 1;
// MAXKMER
// file prlReadFillGap.c line 31
static unsigned long long int MAXKMER;
// MAXNODELENGTH
// file bubble.c line 39
static signed int MAXNODELENGTH;
// Ncounter
// file prlReadFillGap.c line 32
static signed int Ncounter;
// Ncounter_link1
// file read2scaf.c line 28
static signed int Ncounter_link1;
// OverlapPercent
// file orderContig.c line 40
static double OverlapPercent = 0.05;
// SCAFF
// file scaffold.c line 31
static char SCAFF;
// SIM
// file bubble.c line 51
static const signed int SIM[4l][4l] = { { 1, 0, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 1, 0 }, { 0, 0, 0, 1 } };
// SIM_link1
// file localAsm.c line 1348
static const signed int SIM_link1[4l][4l] = { { 1, 0, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 1, 0 }, { 0, 0, 0, 1 } };
// WORDFILTER
// file inc/global.h line 38
unsigned long long int WORDFILTER;
// activeNode
// file bubble.c line 81
static unsigned int activeNode;
// allGaps
// file prlReadFillGap.c line 33
static signed int allGaps;
// allGaps_link1
// file read2scaf.c line 29
static signed int allGaps_link1;
// arcCounter
// file inc/global.h line 52
signed long long int arcCounter;
// arcCounters
// file prlRead2path.c line 30
static unsigned int *arcCounters;
// arcLookupTable
// file inc/global.h line 59
struct arc **arcLookupTable = (struct arc **)(void *)0;
// arc_mem_manager
// file inc/global.h line 32
struct mem_manager *arc_mem_manager = (struct mem_manager *)(void *)0;
// b_ban
// file inc/def.h line 43
signed int b_ban;
// bal_nodeStack
// file node2edge.c line 43
static struct stack *bal_nodeStack;
// btCounter
// file bubble.c line 92
static signed long long int btCounter;
// buffer_size
// file prlHashCtg.c line 42
static unsigned int buffer_size = (unsigned int)10000000;
// buffer_size_link1
// file prlHashReads.c line 43
static signed int buffer_size_link1 = 10000000;
// buffer_size_link2
// file prlRead2Ctg.c line 32
static signed int buffer_size_link2 = 10000000;
// buffer_size_link3
// file prlRead2path.c line 31
static signed int buffer_size_link3 = 10000000;
// caseA
// file bubble.c line 89
static signed long long int caseA;
// caseA_link1
// file cutTip_graph.c line 29
static signed int caseA_link1;
// caseB
// file bubble.c line 89
static signed long long int caseB;
// caseB_link1
// file cutTip_graph.c line 29
static signed int caseB_link1;
// caseC
// file bubble.c line 89
static signed long long int caseC;
// caseC_link1
// file cutTip_graph.c line 29
static signed int caseC_link1;
// caseD
// file bubble.c line 89
static signed long long int caseD;
// caseD_link1
// file cutTip_graph.c line 29
static signed int caseD_link1;
// caseE
// file cutTip_graph.c line 29
static signed int caseE;
// cmpCounter
// file bubble.c line 93
static signed long long int cmpCounter;
// cn_mem_manager
// file inc/global.h line 31
struct mem_manager *cn_mem_manager = (struct mem_manager *)(void *)0;
// cntLookupTable
// file inc/global.h line 65
struct connection **cntLookupTable = (struct connection **)(void *)0;
// contig_array
// file inc/global.h line 46
struct contig *contig_array = (struct contig *)(void *)0;
// counters
// file prlReadFillGap.c line 36
static signed int *counters;
// crc_table
// file hashFunction.c line 29
static signed int crc_table[256l] = { 0x00000000, 0x77073096, (signed int)0xee0e612c, (signed int)0x990951ba, 0x076dc419, 0x706af48f, (signed int)0xe963a535, (signed int)0x9e6495a3, 0x0edb8832, 0x79dcb8a4, (signed int)0xe0d5e91e, (signed int)0x97d2d988, 0x09b64c2b, 0x7eb17cbd, (signed int)0xe7b82d07, (signed int)0x90bf1d91, 0x1db71064, 0x6ab020f2, (signed int)0xf3b97148, (signed int)0x84be41de, 0x1adad47d, 0x6ddde4eb, (signed int)0xf4d4b551, (signed int)0x83d385c7, 0x136c9856, 0x646ba8c0, (signed int)0xfd62f97a, (signed int)0x8a65c9ec, 0x14015c4f, 0x63066cd9, (signed int)0xfa0f3d63, (signed int)0x8d080df5, 0x3b6e20c8, 0x4c69105e, (signed int)0xd56041e4, (signed int)0xa2677172, 0x3c03e4d1, 0x4b04d447, (signed int)0xd20d85fd, (signed int)0xa50ab56b, 0x35b5a8fa, 0x42b2986c, (signed int)0xdbbbc9d6, (signed int)0xacbcf940, 0x32d86ce3, 0x45df5c75, (signed int)0xdcd60dcf, (signed int)0xabd13d59, 0x26d930ac, 0x51de003a, (signed int)0xc8d75180, (signed int)0xbfd06116, 0x21b4f4b5, 0x56b3c423, (signed int)0xcfba9599, (signed int)0xb8bda50f, 0x2802b89e, 0x5f058808, (signed int)0xc60cd9b2, (signed int)0xb10be924, 0x2f6f7c87, 0x58684c11, (signed int)0xc1611dab, (signed int)0xb6662d3d, 0x76dc4190, 0x01db7106, (signed int)0x98d220bc, (signed int)0xefd5102a, 0x71b18589, 0x06b6b51f, (signed int)0x9fbfe4a5, (signed int)0xe8b8d433, 0x7807c9a2, 0x0f00f934, (signed int)0x9609a88e, (signed int)0xe10e9818, 0x7f6a0dbb, 0x086d3d2d, (signed int)0x91646c97, (signed int)0xe6635c01, 0x6b6b51f4, 0x1c6c6162, (signed int)0x856530d8, (signed int)0xf262004e, 0x6c0695ed, 0x1b01a57b, (signed int)0x8208f4c1, (signed int)0xf50fc457, 0x65b0d9c6, 0x12b7e950, (signed int)0x8bbeb8ea, (signed int)0xfcb9887c, 0x62dd1ddf, 0x15da2d49, (signed int)0x8cd37cf3, (signed int)0xfbd44c65, 0x4db26158, 0x3ab551ce, (signed int)0xa3bc0074, (signed int)0xd4bb30e2, 0x4adfa541, 0x3dd895d7, (signed int)0xa4d1c46d, (signed int)0xd3d6f4fb, 0x4369e96a, 0x346ed9fc, (signed int)0xad678846, (signed int)0xda60b8d0, 0x44042d73, 0x33031de5, (signed int)0xaa0a4c5f, (signed int)0xdd0d7cc9, 0x5005713c, 0x270241aa, (signed int)0xbe0b1010, (signed int)0xc90c2086, 0x5768b525, 0x206f85b3, (signed int)0xb966d409, (signed int)0xce61e49f, 0x5edef90e, 0x29d9c998, (signed int)0xb0d09822, (signed int)0xc7d7a8b4, 0x59b33d17, 0x2eb40d81, (signed int)0xb7bd5c3b, (signed int)0xc0ba6cad, (signed int)0xedb88320, (signed int)0x9abfb3b6, 0x03b6e20c, 0x74b1d29a, (signed int)0xead54739, (signed int)0x9dd277af, 0x04db2615, 0x73dc1683, (signed int)0xe3630b12, (signed int)0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8, (signed int)0xe40ecf0b, (signed int)0x9309ff9d, 0x0a00ae27, 0x7d079eb1, (signed int)0xf00f9344, (signed int)0x8708a3d2, 0x1e01f268, 0x6906c2fe, (signed int)0xf762575d, (signed int)0x806567cb, 0x196c3671, 0x6e6b06e7, (signed int)0xfed41b76, (signed int)0x89d32be0, 0x10da7a5a, 0x67dd4acc, (signed int)0xf9b9df6f, (signed int)0x8ebeeff9, 0x17b7be43, 0x60b08ed5, (signed int)0xd6d6a3e8, (signed int)0xa1d1937e, 0x38d8c2c4, 0x4fdff252, (signed int)0xd1bb67f1, (signed int)0xa6bc5767, 0x3fb506dd, 0x48b2364b, (signed int)0xd80d2bda, (signed int)0xaf0a1b4c, 0x36034af6, 0x41047a60, (signed int)0xdf60efc3, (signed int)0xa867df55, 0x316e8eef, 0x4669be79, (signed int)0xcb61b38c, (signed int)0xbc66831a, 0x256fd2a0, 0x5268e236, (signed int)0xcc0c7795, (signed int)0xbb0b4703, 0x220216b9, 0x5505262f, (signed int)0xc5ba3bbe, (signed int)0xb2bd0b28, 0x2bb45a92, 0x5cb36a04, (signed int)0xc2d7ffa7, (signed int)0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d, (signed int)0x9b64c2b0, (signed int)0xec63f226, 0x756aa39c, 0x026d930a, (signed int)0x9c0906a9, (signed int)0xeb0e363f, 0x72076785, 0x05005713, (signed int)0x95bf4a82, (signed int)0xe2b87a14, 0x7bb12bae, 0x0cb61b38, (signed int)0x92d28e9b, (signed int)0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21, (signed int)0x86d3d2d4, (signed int)0xf1d4e242, 0x68ddb3f8, 0x1fda836e, (signed int)0x81be16cd, (signed int)0xf6b9265b, 0x6fb077e1, 0x18b74777, (signed int)0x88085ae6, (signed int)0xff0f6a70, 0x66063bca, 0x11010b5c, (signed int)0x8f659eff, (signed int)0xf862ae69, 0x616bffd3, 0x166ccf45, (signed int)0xa00ae278, (signed int)0xd70dd2ee, 0x4e048354, 0x3903b3c2, (signed int)0xa7672661, (signed int)0xd06016f7, 0x4969474d, 0x3e6e77db, (signed int)0xaed16a4a, (signed int)0xd9d65adc, 0x40df0b66, 0x37d83bf0, (signed int)0xa9bcae53, (signed int)0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9, (signed int)0xbdbdf21c, (signed int)0xcabac28a, 0x53b39330, 0x24b4a3a6, (signed int)0xbad03605, (signed int)0xcdd70693, 0x54de5729, 0x23d967bf, (signed int)0xb3667a2e, (signed int)0xc4614ab8, 0x5d681b02, 0x2a6f2b94, (signed int)0xb40bbe37, (signed int)0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d };
// ctg4heapArray
// file orderContig.c line 52
static struct ctg4heap ctg4heapArray[10001l];
// ctgIdArray
// file prlHashCtg.c line 38
static signed int *ctgIdArray;
// ctgIdArray_link1
// file prlRead2Ctg.c line 41
static unsigned int *ctgIdArray_link1;
// ctgStackBuffer
// file prlReadFillGap.c line 41
static struct stack **ctgStackBuffer;
// ctgStackBuffer_link1
// file read2scaf.c line 33
static struct stack **ctgStackBuffer_link1;
// ctg_short
// file inc/global.h line 71
unsigned int ctg_short = (unsigned int)0;
// cutTips
// file pregraph.c line 31
static signed int cutTips = 1;
// cutoff
// file bubble.c line 72
static double cutoff;
// cvgAvg
// file inc/global.h line 73
signed int cvgAvg = 0;
// darrayBuf
// file inc/global.h line 78
struct dynamic_array **darrayBuf;
// deLowEdge
// file inc/global.h line 62
char deLowEdge = (char)1;
// deLowKmer
// file inc/global.h line 61
char deLowKmer = (char)0;
// deletion
// file prlRead2Ctg.c line 53
static signed int *deletion;
// deletion_link1
// file prlRead2path.c line 55
static signed int *deletion_link1;
// dheap
// file bubble.c line 79
static struct dfibheap *dheap;
// dheapNodes
// file bubble.c line 78
static struct dfibheap_el **dheapNodes;
// dnodeCounter
// file bubble.c line 90
static signed long long int dnodeCounter;
// downstreamCTG
// file orderContig.c line 63
static unsigned int downstreamCTG[200l];
// dsCtgCounter
// file orderContig.c line 65
static signed int dsCtgCounter;
// edgeCounter
// file node2edge.c line 34
static signed int edgeCounter;
// edge_array
// file inc/global.h line 43
struct edge *edge_array = (struct edge *)(void *)0;
// edge_c
// file node2edge.c line 34
static signed int edge_c;
// edge_length_limit
// file node2edge.c line 33
static signed int edge_length_limit = 100000;
// edge_no
// file prlRead2path.c line 47
static unsigned long long int **edge_no;
// edge_seq
// file node2edge.c line 36
static char edge_seq[100000l];
// eligibleStartingPoints
// file bubble.c line 86
static unsigned int *eligibleStartingPoints;
// empty_kmer
// file newhash.c line 31
static const struct kmer_st empty_kmer = { .seq=(unsigned long long int)0, .l_links=(unsigned int)0, .r_links=0,
    .linear=0, .deleted=0, .checked=0, .single=1,
    .twin=0, .inEdge=0 };
// existCounter
// file attachPEinfo.c line 37
static signed int existCounter;
// expCounter
// file bubble.c line 70
static unsigned int expCounter;
// expanded
// file bubble.c line 71
static unsigned int *expanded;
// extraEdgeNum
// file inc/global.h line 42
unsigned int extraEdgeNum;
// fastPath
// file bubble.c line 59
static struct readinterval *fastPath;
// fastSeqLength
// file bubble.c line 65
static signed int fastSeqLength;
// fastSequence
// file bubble.c line 62
static char fastSequence[100l];
// fastSequence_link1
// file localAsm.c line 1355
static char fastSequence_link1[100l];
// fastToSlowMapping
// file bubble.c line 76
static signed int fastToSlowMapping[101l];
// fillGap
// file inc/global.h line 50
signed int fillGap = 0;
// filter_array
// file kmer.c line 28
static unsigned char filter_array[8l] = { (unsigned char)1, (unsigned char)((signed int)(unsigned char)1 << 1),
    (unsigned char)((signed int)(unsigned char)1 << 2),
    (unsigned char)((signed int)(unsigned char)1 << 3),
    (unsigned char)((signed int)(unsigned char)1 << 4),
    (unsigned char)((signed int)(unsigned char)1 << 5),
    (unsigned char)((signed int)(unsigned char)1 << 6),
    (unsigned char)((signed int)(unsigned char)1 << 7) };
// flagArray
// file prlRead2path.c line 44
static char *flagArray;
// flagBuf
// file prlReadFillGap.c line 39
static char *flagBuf;
// flags
// file prlRead2path.c line 48
static char **flags;
// footprint
// file prlRead2Ctg.c line 44
static char *footprint;
// found_routes
// file inc/global.h line 34
unsigned int **found_routes = (unsigned int **)(void *)0;
// fwriteBuf
// file prlRead2path.c line 33
static unsigned int *fwriteBuf;
// gap3
// file orderContig.c line 61
static struct dynamic_array *gap3;
// gap5
// file orderContig.c line 61
static struct dynamic_array *gap5;
// gapCounter
// file orderContig.c line 43
static signed int gapCounter;
// gapSeqDarray
// file inc/global.h line 77
struct dynamic_array *gapSeqDarray = (struct dynamic_array *)(void *)0;
// getArcCounter
// file bubble.c line 97
static signed long long int getArcCounter;
// globalFlag
// file inc/global.h line 51
char globalFlag;
// gothrough
// file splitReps.c line 31
static unsigned char gothrough[4l][4l];
// gradsCounter
// file inc/global.h line 70
signed int gradsCounter;
// graphfile
// file contig.c line 30
char graphfile[256l];
// graphfile_link1
// file map.c line 30
static char graphfile_link1[256l];
// graphfile_link2
// file pregraph.c line 30
static char graphfile_link2[256l];
// graphfile_link3
// file scaffold.c line 32
static char graphfile_link3[256l];
// hashBanBuffer
// file prlHashCtg.c line 46
static unsigned long long int *hashBanBuffer;
// hashBanBuffer_link1
// file prlHashReads.c line 45
static unsigned long long int *hashBanBuffer_link1;
// hashBanBuffer_link2
// file prlRead2Ctg.c line 48
static unsigned long long int *hashBanBuffer_link2;
// hashBanBuffer_link3
// file prlRead2path.c line 50
static unsigned long long int *hashBanBuffer_link3;
// ignorePE1
// file attachPEinfo.c line 31
static signed int ignorePE1;
// ignorePE2
// file attachPEinfo.c line 31
static signed int ignorePE2;
// ignorePE3
// file attachPEinfo.c line 31
static signed int ignorePE3;
// inGraph
// file inc/global.h line 24
signed int inGraph;
// indexArray
// file prlHashCtg.c line 36
static unsigned int *indexArray;
// indexArray_link1
// file prlHashReads.c line 40
static signed int *indexArray_link1;
// indexArray_link2
// file prlRead2Ctg.c line 51
static unsigned int *indexArray_link2;
// indexArray_link3
// file prlRead2path.c line 53
static signed int *indexArray_link3;
// index_array
// file inc/global.h line 45
unsigned int *index_array = (unsigned int *)(void *)0;
// initKmerSetSize
// file inc/global.h line 83
signed int initKmerSetSize = 0;
// ins_size_var
// file inc/global.h line 28
signed int ins_size_var = 20;
// involved
// file splitReps.c line 28
static unsigned int involved[9l];
// isStack
// file attachPEinfo.c line 30
static struct stack *isStack;
// kmerBuffer
// file prlHashCtg.c line 46
static unsigned long long int *kmerBuffer;
// kmerBuffer_link1
// file prlHashReads.c line 45
static unsigned long long int *kmerBuffer_link1;
// kmerBuffer_link2
// file prlRead2Ctg.c line 48
static unsigned long long int *kmerBuffer_link2;
// kmerBuffer_link3
// file prlRead2path.c line 50
static unsigned long long int *kmerBuffer_link3;
// kmerCounter
// file prlHashCtg.c line 29
static signed long long int *kmerCounter;
// kmerCounter_link1
// file prlHashReads.c line 31
static signed long long int *kmerCounter_link1;
// kmerFreq
// file prlHashReads.c line 33
static signed long long int **kmerFreq;
// kmerSeq
// file output_contig.c line 28
static char *kmerSeq;
// kmer_c
// file prlHashCtg.c line 45
static volatile unsigned int kmer_c;
// kmer_c_link1
// file prlHashReads.c line 44
static volatile signed int kmer_c_link1;
// kmer_c_link2
// file prlRead2Ctg.c line 47
static signed int kmer_c_link2;
// kmer_c_link3
// file prlRead2path.c line 49
static signed int kmer_c_link3;
// lefts
// file splitReps.c line 29
static unsigned int lefts[4l];
// lenBuffer
// file prlHashCtg.c line 35
static signed int *lenBuffer;
// lenBuffer_link1
// file prlHashReads.c line 39
static signed int *lenBuffer_link1;
// lenBuffer_link2
// file prlRead2Ctg.c line 40
static signed int *lenBuffer_link2;
// lenBuffer_link3
// file prlRead2path.c line 39
static signed int *lenBuffer_link3;
// len_bar
// file inc/global.h line 48
signed int len_bar = 100;
// libNo
// file inc/global.h line 68
signed int libNo = 0;
// lib_array
// file inc/global.h line 67
struct lib_info *lib_array = (struct lib_info *)(void *)0;
// lineLen
// file inc/global.h line 47
signed int lineLen;
// linearCounter
// file cutTipPreGraph.c line 29
static signed long long int *linearCounter;
// mapCounter
// file prlRead2Ctg.c line 34
static signed long long int mapCounter;
// markCounter
// file prlRead2path.c line 32
static signed long long int markCounter = (signed long long int)0;
// markerOnEdge
// file prlRead2path.c line 34
static unsigned char *markerOnEdge;
// markersArray
// file inc/global.h line 60
signed long long int *markersArray = (signed long long int *)(void *)0;
// maskRep
// file inc/global.h line 81
char maskRep = (char)1;
// maxNameLen
// file inc/global.h line 58
signed int maxNameLen = 0;
// maxReadLen
// file inc/global.h line 55
signed int maxReadLen = 0;
// maxReadLen4all
// file inc/global.h line 56
signed int maxReadLen4all = 0;
// maxSteps
// file inc/global.h line 80
signed int maxSteps;
// max_n_routes
// file inc/global.h line 36
signed int max_n_routes = 10;
// max_read_c
// file prlHashCtg.c line 44
static unsigned int max_read_c;
// minReadLen
// file inc/global.h line 57
signed int minReadLen = 0;
// mixBuffer
// file prlRead2path.c line 43
static unsigned long long int *mixBuffer;
// mutex
// file prlReadFillGap.c line 37
static union anonymous mutex;
// n_ban
// file inc/global.h line 25
signed long long int n_ban;
// n_solexa
// file inc/global.h line 26
signed long long int n_solexa = (signed long long int)0;
// newCntCounter
// file inc/global.h line 63
signed long long int newCntCounter;
// nextcBuffer
// file prlHashReads.c line 46
static char *nextcBuffer;
// nodeBuffer
// file prlRead2Ctg.c line 49
static struct kmer_st **nodeBuffer;
// nodeBuffer_link1
// file prlRead2path.c line 51
static struct kmer_st **nodeBuffer_link1;
// nodeCounter
// file node2edge.c line 32
static signed int nodeCounter;
// nodeCounter_link1
// file orderContig.c line 55
static signed int nodeCounter_link1;
// nodeDistance
// file orderContig.c line 54
static signed int nodeDistance[10000l];
// nodeDistanceInOrder
// file orderContig.c line 58
static signed int nodeDistanceInOrder[10000l];
// nodeStack
// file node2edge.c line 42
static struct stack *nodeStack;
// nodesInSub
// file orderContig.c line 53
static unsigned int nodesInSub[10000l];
// nodesInSubInOrder
// file orderContig.c line 57
static unsigned int nodesInSubInOrder[10000l];
// num_ctg
// file inc/global.h line 40
unsigned int num_ctg = (unsigned int)0;
// num_ed
// file inc/global.h line 39
unsigned int num_ed = (unsigned int)0;
// num_ed_limit
// file inc/global.h line 41
unsigned int num_ed_limit;
// num_libs
// file inc/global.h line 66
signed int num_libs = 0;
// num_trace
// file inc/global.h line 37
signed int num_trace;
// num_vt
// file inc/global.h line 33
unsigned int num_vt = (unsigned int)0;
// onsameCtgPE
// file attachPEinfo.c line 32
static signed int onsameCtgPE;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// orienArray
// file prlRead2Ctg.c line 43
static char *orienArray;
// orienCounter
// file orderContig.c line 44
static signed int orienCounter;
// orig2new
// file inc/global.h line 79
char orig2new;
// outArcArray
// file bubble.c line 44
static struct arc *outArcArray[100l];
// outNodeArray
// file bubble.c line 43
static unsigned int outNodeArray[100l];
// outvCounter
// file output_pregraph.c line 28
static signed int outvCounter = 0;
// overlaplen
// file inc/global.h line 23
signed int overlaplen = 23;
// peSUM
// file attachPEinfo.c line 33
static unsigned long long int peSUM;
// pes
// file inc/global.h line 29
struct pe_info *pes = (struct pe_info *)(void *)0;
// pinCounter
// file bubble.c line 95
static signed long long int pinCounter;
// posArray
// file prlRead2Ctg.c line 42
static signed int *posArray;
// preArc_array
// file prlRead2path.c line 42
static struct prearc **preArc_array;
// preArc_mem_managers
// file inc/global.h line 54
struct mem_manager **preArc_mem_managers = (struct mem_manager **)(void *)0;
// prearc_mem_manager
// file inc/global.h line 53
struct mem_manager *prearc_mem_manager = (struct mem_manager *)(void *)0;
// prevNum
// file inc/global.h line 27
signed long long int prevNum = (signed long long int)0;
// prevcBuffer
// file prlHashReads.c line 46
static char *prevcBuffer;
// previous
// file bubble.c line 69
static unsigned int *previous;
// progress
// file bubble.c line 84
static signed int progress;
// rcSeq
// file prlHashCtg.c line 33
static char **rcSeq;
// rcSeq_link1
// file prlHashReads.c line 37
static char **rcSeq_link1;
// rcSeq_link2
// file prlRead2Ctg.c line 38
static char **rcSeq_link2;
// rcSeq_link3
// file prlRead2path.c line 37
static char **rcSeq_link3;
// readCounter
// file prlRead2Ctg.c line 33
static signed long long int readCounter;
// readNumBack
// file inc/global.h line 69
signed long long int readNumBack;
// readSeqInGap
// file inc/global.h line 76
struct dynamic_array *readSeqInGap = (struct dynamic_array *)(void *)0;
// read_c
// file prlHashCtg.c line 32
static unsigned int read_c;
// read_c_link1
// file prlHashReads.c line 36
static signed int read_c_link1;
// read_c_link2
// file prlRead2Ctg.c line 37
static signed int read_c_link2;
// read_c_link3
// file prlRead2path.c line 36
static signed int read_c_link3;
// readsInGap
// file prlRead2Ctg.c line 30
static signed long long int readsInGap = (signed long long int)0;
// repeatSolve
// file contig.c line 32
static char repeatSolve;
// replaceCounter
// file bubble.c line 96
static signed long long int replaceCounter;
// repsTie
// file inc/global.h line 64
char repsTie = (char)0;
// rights
// file splitReps.c line 30
static unsigned int rights[4l];
// rnodeCounter
// file bubble.c line 91
static signed long long int rnodeCounter;
// rv_mem_manager
// file inc/global.h line 30
struct mem_manager *rv_mem_manager = (struct mem_manager *)(void *)0;
// scaf3
// file orderContig.c line 60
static struct dynamic_array *scaf3;
// scaf5
// file orderContig.c line 60
static struct dynamic_array *scaf5;
// scafBufSize
// file prlReadFillGap.c line 38
static signed int scafBufSize = 100;
// scafBufSize_link1
// file read2scaf.c line 32
static signed int scafBufSize_link1 = 100;
// scafCounter
// file prlReadFillGap.c line 42
static signed int scafCounter;
// scafCounter_link1
// file read2scaf.c line 34
static signed int scafCounter_link1;
// scafInBuf
// file prlReadFillGap.c line 43
static signed int scafInBuf;
// scafInBuf_link1
// file read2scaf.c line 35
static signed int scafInBuf_link1;
// seqBreakers
// file prlHashCtg.c line 37
static unsigned int *seqBreakers;
// seqBuffer
// file prlHashCtg.c line 34
static char *seqBuffer;
// seqBuffer_link1
// file prlHashReads.c line 38
static char **seqBuffer_link1;
// seqBuffer_link2
// file prlRead2Ctg.c line 39
static char **seqBuffer_link2;
// seqBuffer_link3
// file prlRead2path.c line 38
static char **seqBuffer_link3;
// seq_buffer_size
// file prlHashCtg.c line 43
static unsigned int seq_buffer_size;
// shortrdsfile
// file contig.c line 30
char shortrdsfile[256l];
// shortrdsfile_link1
// file map.c line 29
static char shortrdsfile_link1[256l];
// shortrdsfile_link2
// file pregraph.c line 29
static char shortrdsfile_link2[256l];
// simiCounter
// file bubble.c line 94
static signed long long int simiCounter;
// slowPath
// file bubble.c line 60
static struct readinterval *slowPath;
// slowSeqLength
// file bubble.c line 66
static signed int slowSeqLength;
// slowSequence
// file bubble.c line 63
static char slowSequence[100l];
// slowSequence_link1
// file localAsm.c line 1356
static char slowSequence_link1[100l];
// slowToFastMapping
// file bubble.c line 75
static signed int slowToFastMapping[101l];
// smallerBuffer
// file prlHashCtg.c line 47
static char *smallerBuffer;
// smallerBuffer_link1
// file prlRead2Ctg.c line 50
static char *smallerBuffer_link1;
// smallerBuffer_link2
// file prlRead2path.c line 52
static char *smallerBuffer_link2;
// so_far
// file inc/global.h line 35
unsigned int *so_far = (unsigned int *)(void *)0;
// solidArray
// file orderContig.c line 47
static struct dynamic_array *solidArray;
// solidCounter
// file orderContig.c line 50
static signed int solidCounter;
// src_rc_seq
// file readseq1by1.c line 28
static char src_rc_seq[1024l];
// startingNode
// file bubble.c line 83
static unsigned int startingNode;
// static_flag
// file attachPEinfo.c line 31
static signed int static_flag;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// tabs
// file lib.c line 28
static char tabs[2l][1024l];
// tempArray
// file orderContig.c line 48
static struct dynamic_array *tempArray;
// temp_edge
// file node2edge.c line 35
static struct preedge temp_edge;
// thrdNoBuf
// file prlReadFillGap.c line 40
static unsigned char *thrdNoBuf;
// thrd_num
// file inc/global.h line 72
signed int thrd_num = 8;
// throughCounter
// file orderContig.c line 45
static signed int throughCounter;
// times
// file bubble.c line 68
static double *times;
// tip_c
// file cutTipPreGraph.c line 28
static signed int tip_c;
// tips
// file prlHashReads.c line 30
static signed long long int *tips;
// trace_limit
// file searchPath.c line 28
static signed int trace_limit = 5000;
// upstreamCTG
// file orderContig.c line 64
static unsigned int upstreamCTG[200l];
// usCtgCounter
// file orderContig.c line 66
static signed int usCtgCounter;
// vt_array
// file inc/global.h line 44
struct vertex *vt_array = (struct vertex *)(void *)0;
// weakCounter
// file orderContig.c line 2109
static signed int weakCounter;
// weakPE
// file inc/global.h line 49
signed int weakPE = 3;

// EdLargerThanTwin
// file loadPreGraph.c line 294
extern char EdLargerThanTwin(unsigned int edgeno)
{
  return (char)((signed int)(edge_array + (signed long int)edgeno)->bal_edge < 1);
}

// EdSameAsTwin
// file inc/extfunc.h line 215
extern char EdSameAsTwin(unsigned int edgeno)
{
  return (char)((signed int)(edge_array + (signed long int)edgeno)->bal_edge == 1);
}

// EdSmallerThanTwin
// file inc/extfunc.h line 213
extern char EdSmallerThanTwin(unsigned int edgeno)
{
  return (char)((signed int)(edge_array + (signed long int)edgeno)->bal_edge > 1);
}

// HasMin
// file dfib.c line 181
char HasMin(struct dfibheap *h)
{
  if(!(h->dfh_min == ((struct dfibheap_el *)NULL)))
    return (char)1;

  else
    return (char)0;
}

// IsHeapEmpty
// file fibHeap.c line 58
char IsHeapEmpty(struct fibheap *heap)
{
  char return_value_fh_isempty_1;
  return_value_fh_isempty_1=fh_isempty(heap);
  return return_value_fh_isempty_1;
}

// KmerPlus
// file kmer.c line 136
extern unsigned long long int KmerPlus(unsigned long long int prev, char ch)
{
  unsigned long long int word = prev;
  word = word << 2;
  word = word + (unsigned long long int)ch;
  return word;
}

// Links2Scaf
// file orderContig.c line 2874
extern void Links2Scaf(char *infile)
{
  char name[256l];
  char *line;
  struct _IO_FILE *fp;
  signed int i;
  signed int j = 1;
  signed int lib_n = 0;
  signed int cutoff_sum = 0;
  signed int flag = 0;
  signed int flag2;
  char downS;
  char nonLinear = (char)0;
  char smallPE = (char)0;
  char isPrevSmall = (char)0;
  char markSmall;
  if(pes == ((struct pe_info *)NULL))
    loadPEgrads(infile);

  sprintf(name, "%s.links", infile);
  fp=ckopen(name, "r");
  createCntMemManager();
  createCntLookupTable();
  lineLen = 1024;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)lineLen * sizeof(char) /*1ul*/ );
  line = (char *)return_value_ckalloc_1;
  fgets(line, lineLen, fp);
  line[(signed long int)0] = (char)0;
  struct dynamic_array *return_value_createDarray_2;
  return_value_createDarray_2=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  solidArray = (struct dynamic_array *)return_value_createDarray_2;
  struct dynamic_array *return_value_createDarray_3;
  return_value_createDarray_3=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  tempArray = (struct dynamic_array *)return_value_createDarray_3;
  struct dynamic_array *return_value_createDarray_4;
  return_value_createDarray_4=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  scaf3 = (struct dynamic_array *)return_value_createDarray_4;
  struct dynamic_array *return_value_createDarray_5;
  return_value_createDarray_5=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  scaf5 = (struct dynamic_array *)return_value_createDarray_5;
  struct dynamic_array *return_value_createDarray_6;
  return_value_createDarray_6=createDarray(1000, sizeof(signed int) /*4ul*/ );
  gap3 = (struct dynamic_array *)return_value_createDarray_6;
  struct dynamic_array *return_value_createDarray_7;
  return_value_createDarray_7=createDarray(1000, sizeof(signed int) /*4ul*/ );
  gap5 = (struct dynamic_array *)return_value_createDarray_7;
  weakPE = 3;
  printf("\n");
  i = 0;
  _Bool tmp_if_expr_9;
  signed int tmp_post_8;
  for( ; !(i >= gradsCounter); i = i + 1)
  {
    if(!((pes + (signed long int)i)->insertS >= 1000))
      isPrevSmall = (char)1;

    else
      if((pes + (signed long int)i)->insertS >= 1001)
      {
        if(!(isPrevSmall == 0))
        {
          smallScaf();
          isPrevSmall = (char)0;
        }

      }

    flag2=inputLinks(fp, (pes + (signed long int)i)->insertS, line);
    printf("Insert size %d: %d links input\n", (pes + (signed long int)i)->insertS, flag2);
    if(!(flag2 == 0))
    {
      lib_n = lib_n + 1;
      cutoff_sum = cutoff_sum + (pes + (signed long int)i)->pair_num_cut;
    }

    flag = flag + flag2;
    if(flag == 0)
      printf("\n");

    else
    {
      if(i == gradsCounter + -1)
        tmp_if_expr_9 = (_Bool)1;

      else
        tmp_if_expr_9 = (pes + (signed long int)(i + 1))->rank != (pes + (signed long int)i)->rank ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_9)
      {
        markSmall = (char)0;
        downS = markSmall;
        nonLinear = downS;
        flag = (signed int)nonLinear;
        if((pes + (signed long int)i)->insertS >= 1001)
        {
          if((pes + (signed long int)i)->rank >= 2)
            downS = (char)1;

        }

        if(!((pes + (signed long int)i)->insertS >= 1001))
          smallPE = (char)1;

        if((pes + (signed long int)i)->insertS >= 1000)
        {
          ins_size_var = 50;
          OverlapPercent = 0.05;
        }

        else
          if((pes + (signed long int)i)->insertS >= 300)
          {
            ins_size_var = 30;
            OverlapPercent = 0.05;
          }

          else
          {
            ins_size_var = 20;
            OverlapPercent = 0.05;
          }
        if((pes + (signed long int)i)->insertS >= 1001)
          weakPE = 5;

        if(lib_n >= 1)
        {
          weakPE = weakPE < cutoff_sum / lib_n ? cutoff_sum / lib_n : weakPE;
          cutoff_sum = 0;
          lib_n = cutoff_sum;
        }

        printf("Cutoff for number of pairs to make a reliable connection: %d\n", weakPE);
        if(i == gradsCounter + -1)
          nonLinear = (char)1;

        if(i == gradsCounter + -1 && isPrevSmall == 0 && !(smallPE == 0))
          detectBreakScaf();

        ordering((char)1, downS, nonLinear, infile);
        if(i == gradsCounter + -1)
          recoverMask();

        else
        {
          tmp_post_8 = j;
          j = j + 1;
          printf("\nthe %d rank", tmp_post_8);
          scaffold_count((unsigned int)100);
          printf("\n");
        }
      }

    }
  }
  freeDarray(tempArray);
  freeDarray(solidArray);
  freeDarray(scaf3);
  freeDarray(scaf5);
  freeDarray(gap3);
  freeDarray(gap5);
  free((void *)line);
  fclose(fp);
  printf("all links loaded\n");
}

// Mark1in1outNode
// file cutTipPreGraph.c line 458
static void Mark1in1outNode()
{
  signed int i;
  signed long long int counter = (signed long long int)0;
  const signed long int counter_array_size0 = (signed long int)thrd_num;
  unsigned long int threads[counter_array_size0];
  const signed long int threads_array_size0 = (signed long int)(thrd_num + 1);
  unsigned char thrdSignal[threads_array_size0];
  const signed long int thrdSignal_array_size0 = (signed long int)thrd_num;
  struct parameter paras[thrdSignal_array_size0];
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
  {
    thrdSignal[(signed long int)(i + 1)] = (unsigned char)0;
    paras[(signed long int)i].threadID = (unsigned char)i;
    paras[(signed long int)i].mainSignal = &thrdSignal[(signed long int)0];
    paras[(signed long int)i].selfSignal = &thrdSignal[(signed long int)(i + 1)];
  }
  creatThrds(threads, paras);
  thrdSignal[(signed long int)0] = (unsigned char)0;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)thrd_num * sizeof(signed long long int) /*8ul*/ );
  linearCounter = (signed long long int *)return_value_ckalloc_1;
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
    linearCounter[(signed long int)i] = (signed long long int)0;
  sendWorkSignal((unsigned char)1, thrdSignal);
  sendWorkSignal((unsigned char)2, thrdSignal);
  thread_wait(threads);
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
    counter = counter + linearCounter[(signed long int)i];
  free((void *)linearCounter);
  printf("%lld linear nodes\n", counter);
}

// Mark1in1outNode_link1
// file prlHashReads.c line 589
static void Mark1in1outNode_link1(unsigned char *thrdSignal)
{
  signed int i_link1;
  signed long long int counter_link1 = (signed long long int)0;
  void *return_value_ckalloc_1_link1;
  return_value_ckalloc_1_link1=ckalloc((unsigned long int)thrd_num * sizeof(signed long long int *) /*8ul*/ );
  kmerFreq = (signed long long int **)return_value_ckalloc_1_link1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)thrd_num * sizeof(signed long long int) /*8ul*/ );
  tips = (signed long long int *)return_value_ckalloc_2;
  i_link1 = 0;
  for( ; !(i_link1 >= thrd_num); i_link1 = i_link1 + 1)
  {
    void *return_value_ckalloc_3;
    return_value_ckalloc_3=ckalloc((unsigned long int)257 * sizeof(signed long long int) /*8ul*/ );
    kmerFreq[(signed long int)i_link1] = (signed long long int *)return_value_ckalloc_3;
    memset((void *)kmerFreq[(signed long int)i_link1], 0, (unsigned long int)257 * sizeof(signed long long int) /*8ul*/ );
    tips[(signed long int)i_link1] = (signed long long int)0;
  }
  sendWorkSignal_link2((unsigned char)4, thrdSignal);
  i_link1 = 0;
  for( ; !(i_link1 >= thrd_num); i_link1 = i_link1 + 1)
    counter_link1 = counter_link1 + tips[(signed long int)i_link1];
  free((void *)tips);
  printf("%lld linear nodes\n", counter_link1);
}

// MarkCtgOccu
// file prlReadFillGap.c line 973
static void MarkCtgOccu(unsigned int ctg)
{
  (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
  unsigned int return_value_getTwinCtg_1;
  return_value_getTwinCtg_1=getTwinCtg(ctg);
  (contig_array + (signed long int)return_value_getTwinCtg_1)->flag = (unsigned char)1;
}

// MaskContig
// file prlReadFillGap.c line 967
static void MaskContig(unsigned int ctg)
{
  (contig_array + (signed long int)ctg)->mask = (unsigned char)1;
  unsigned int return_value_getTwinCtg_1;
  return_value_getTwinCtg_1=getTwinCtg(ctg);
  (contig_array + (signed long int)return_value_getTwinCtg_1)->mask = (unsigned char)1;
}

// PE2Links
// file orderContig.c line 2742
extern void PE2Links(char *infile)
{
  char name[256l];
  char *line;
  struct _IO_FILE *fp;
  struct _IO_FILE *linkF;
  signed int i;
  signed int flag = 0;
  unsigned int j;
  sprintf(name, "%s.links", infile);
  linkF=ckopen(name, "w");
  if(pes == ((struct pe_info *)NULL))
    loadPEgrads(infile);

  sprintf(name, "%s.readOnContig", infile);
  fp=ckopen(name, "r");
  lineLen = 1024;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)lineLen * sizeof(char) /*1ul*/ );
  line = (char *)return_value_ckalloc_1;
  fgets(line, lineLen, fp);
  line[(signed long int)0] = (char)0;
  printf("\n");
  i = 0;
  for( ; !(i >= gradsCounter); i = i + 1)
  {
    createCntMemManager();
    createCntLookupTable();
    newCntCounter = (signed long long int)0;
    signed int return_value_connectByPE_grad_2;
    return_value_connectByPE_grad_2=connectByPE_grad(fp, i, line);
    flag = flag + return_value_connectByPE_grad_2;
    printf("%lld new connections\n", newCntCounter / (signed long int)2);
    if(flag == 0)
    {
      destroyConnectMem();
      deleteCntLookupTable();
      j = (unsigned int)1;
      for( ; num_ctg >= j; j = j + 1u)
        (contig_array + (signed long int)j)->downwardConnect = (struct connection *)(void *)0;
      printf("\n");
    }

    else
    {
      flag = 0;
      outputLinks(linkF, (pes + (signed long int)i)->insertS);
      destroyConnectMem();
      deleteCntLookupTable();
      j = (unsigned int)1;
      for( ; num_ctg >= j; j = j + 1u)
        (contig_array + (signed long int)j)->downwardConnect = (struct connection *)(void *)0;
    }
  }
  free((void *)line);
  fclose(fp);
  fclose(linkF);
  printf("all PEs attached\n");
}

// add1Arc
// file loadGraph.c line 353
static void add1Arc(unsigned int from_ed, unsigned int to_ed, unsigned int weight)
{
  struct prearc *parc;
  unsigned int from_c = index_array[(signed long int)from_ed];
  unsigned int to_c = index_array[(signed long int)to_ed];
  parc=allocatePreArc(to_c);
  parc->multiplicity = weight;
  parc->next = (contig_array + (signed long int)from_c)->arcs;
  (contig_array + (signed long int)from_c)->arcs = parc;
}

// add1Arc_link1
// file loadPreGraph.c line 304
static void add1Arc_link1(unsigned int from_ed_link1, unsigned int to_ed_link1, unsigned int weight_link1)
{
  if((edge_array + (signed long int)from_ed_link1)->to_vt == (edge_array + (signed long int)to_ed_link1)->from_vt)
  {
    unsigned int bal_fe;
    bal_fe=getTwinEdge(from_ed_link1);
    unsigned int bal_te;
    bal_te=getTwinEdge(to_ed_link1);
    if(num_ed >= bal_fe && num_ed >= bal_te && num_ed >= from_ed_link1 && num_ed >= to_ed_link1)
    {
      struct arc *parc_link1;
      struct arc *bal_parc;
      parc_link1=getArcBetween(from_ed_link1, to_ed_link1);
      if(!(parc_link1 == ((struct arc *)NULL)))
      {
        bal_parc = parc_link1->bal_arc;
        parc_link1->multiplicity = parc_link1->multiplicity + weight_link1;
        bal_parc->multiplicity = bal_parc->multiplicity + weight_link1;
      }

      else
      {
        parc_link1=allocateArc(to_ed_link1);
        parc_link1->multiplicity = weight_link1;
        parc_link1->prev = (struct arc *)(void *)0;
        if(!((edge_array + (signed long int)from_ed_link1)->arcs == ((struct arc *)NULL)))
          (edge_array + (signed long int)from_ed_link1)->arcs->prev = parc_link1;

        parc_link1->next = (edge_array + (signed long int)from_ed_link1)->arcs;
        (edge_array + (signed long int)from_ed_link1)->arcs = parc_link1;
        if(bal_te == from_ed_link1)
        {
          parc_link1->bal_arc = parc_link1;
          parc_link1->multiplicity = parc_link1->multiplicity + weight_link1;
        }

        else
        {
          bal_parc=allocateArc(bal_fe);
          bal_parc->multiplicity = weight_link1;
          bal_parc->prev = (struct arc *)(void *)0;
          if(!((edge_array + (signed long int)bal_te)->arcs == ((struct arc *)NULL)))
            (edge_array + (signed long int)bal_te)->arcs->prev = bal_parc;

          bal_parc->next = (edge_array + (signed long int)bal_te)->arcs;
          (edge_array + (signed long int)bal_te)->arcs = bal_parc;
          parc_link1->bal_arc = bal_parc;
          bal_parc->bal_arc = parc_link1;
        }
      }
    }

  }

}

// add1Connect
// file attachPEinfo.c line 142
extern struct connection * add1Connect(unsigned int e1, unsigned int e2, signed int gap, signed int weight, char inherit)
{
  _Bool tmp_if_expr_2;
  unsigned int return_value_getTwinCtg_1;
  if(e1 == e2)
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_getTwinCtg_1=getTwinCtg(e2);
    tmp_if_expr_2 = e1 == return_value_getTwinCtg_1 ? (_Bool)1 : (_Bool)0;
  }
  signed int tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_2)
    return (struct connection *)(void *)0;

  else
  {
    struct connection *connect = (struct connection *)(void *)0;
    signed long long int sum;
    if(weight >= 256)
      weight = 255;

    connect=getCntBetween(e1, e2);
    if(!(connect == ((struct connection *)NULL)))
    {
      if(weight == 0)
        return connect;

      existCounter = existCounter + 1;
      if(inherit == 0)
      {
        sum = (signed long long int)((signed int)connect->weightNotInherit * connect->gapLen + gap * weight);
        connect->gapLen = (signed int)(sum / (signed long int)((signed int)connect->weightNotInherit + weight));
        if(!(weight + (signed int)connect->weightNotInherit >= 256))
          connect->weightNotInherit = connect->weightNotInherit + (unsigned char)weight;

        else
          if(!((signed int)connect->weightNotInherit >= 255))
            connect->weightNotInherit = (unsigned char)255;

      }

      else
      {
        sum = (signed long long int)((signed int)connect->weight * connect->gapLen + gap * weight);
        connect->gapLen = (signed int)(sum / (signed long int)((signed int)connect->weight + weight));
        if(connect->inherit == 0)
          connect->maxSingleWeight = connect->weightNotInherit;

        connect->inherit = (unsigned char)1;
        if(!(weight >= (signed int)connect->maxSingleWeight))
          tmp_if_expr_3 = (signed int)connect->maxSingleWeight;

        else
          tmp_if_expr_3 = weight;
        connect->maxSingleWeight = (unsigned char)tmp_if_expr_3;
      }
      if(!(weight + (signed int)connect->weight >= 256))
        connect->weight = connect->weight + (unsigned char)weight;

      else
        if(!((signed int)connect->weight >= 255))
          connect->weight = (unsigned char)255;

    }

    else
    {
      newCntCounter = newCntCounter + 1ll;
      connect=allocateCN(e2, gap);
      if(!(cntLookupTable == ((struct connection **)NULL)))
        putCnt2LookupTable(e1, connect);

      connect->weight = (unsigned char)weight;
      if(!((contig_array + (signed long int)e1)->mask == 0))
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = (contig_array + (signed long int)e2)->mask != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        connect->mask = (unsigned char)1;

      connect->next = (contig_array + (signed long int)e1)->downwardConnect;
      (contig_array + (signed long int)e1)->downwardConnect = connect;
      if(inherit == 0)
        connect->weightNotInherit = (unsigned char)weight;

      else
      {
        connect->weightNotInherit = (unsigned char)0;
        connect->inherit = (unsigned char)1;
        connect->maxSingleWeight = (unsigned char)weight;
      }
    }
    return connect;
  }
}

// add1LongPEcov
// file orderContig.c line 159
static void add1LongPEcov(unsigned int fromCtg, unsigned int toCtg, signed int weight)
{
  _Bool tmp_if_expr_1;
  if(!((contig_array + (signed long int)fromCtg)->from_vt == (contig_array + (signed long int)toCtg)->from_vt))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (contig_array + (signed long int)fromCtg)->to_vt != (contig_array + (signed long int)toCtg)->to_vt ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    printf("Warning from add1LongPEcov: contig %d and %d not on the same scaffold\n", fromCtg, toCtg);

  else
    if((signed int)(contig_array + (signed long int)fromCtg)->indexInScaf >= (signed int)(contig_array + (signed long int)toCtg)->indexInScaf)
      printf("Warning from add1LongPEcov: wrong about order between contig %d and %d\n", fromCtg, toCtg);

    else
    {
      struct connection *bindCnt;
      unsigned int prevCtg = fromCtg;
      bindCnt=getBindCnt(fromCtg);
      for( ; !(bindCnt == ((struct connection *)NULL)); bindCnt = bindCnt->nextInScaf)
      {
        if(!(weight + (signed int)bindCnt->maxGap >= 1001))
          bindCnt->maxGap = bindCnt->maxGap + (unsigned short int)weight;

        else
          bindCnt->maxGap = (unsigned short int)1000;
        if(fromCtg == 0u && toCtg == 0u)
          printf("link (%d %d ) covered by link (%d %d), wt %d\n", prevCtg, bindCnt->contigID, fromCtg, toCtg, weight);

        if(bindCnt->contigID == toCtg)
          break;

        prevCtg = bindCnt->contigID;
      }
      unsigned int bal_fc;
      bal_fc=getTwinCtg(fromCtg);
      unsigned int bal_tc;
      bal_tc=getTwinCtg(toCtg);
      bindCnt=getBindCnt(bal_tc);
      prevCtg = bal_tc;
      for( ; !(bindCnt == ((struct connection *)NULL)); bindCnt = bindCnt->nextInScaf)
      {
        if(!(weight + (signed int)bindCnt->maxGap >= 1001))
          bindCnt->maxGap = bindCnt->maxGap + (unsigned short int)weight;

        else
          bindCnt->maxGap = (unsigned short int)1000;
        if(fromCtg == 0u && toCtg == 0u)
          printf("link (%d %d ) covered by link (%d %d), wt %d\n", prevCtg, bindCnt->contigID, fromCtg, toCtg, weight);

        if(bindCnt->contigID == bal_fc)
          goto __CPROVER_DUMP_L16;

        prevCtg = bindCnt->contigID;
      }
      printf("Warning from add1LongPEcov: not reach the end (%d %d) (B)\n", bal_tc, bal_fc);
    }

__CPROVER_DUMP_L16:
  ;
}

// add1marker2edge
// file loadPath.c line 28
static void add1marker2edge(unsigned int edgeno, signed long long int readid)
{
  unsigned short int tmp_post_1;
  unsigned short int tmp_post_2;
  if(!((signed int)(edge_array + (signed long int)edgeno)->multi == 255))
  {
    unsigned int bal_ed;
    bal_ed=getTwinEdge(edgeno);
    unsigned char counter;
    tmp_post_1 = (unsigned short int)(edge_array + (signed long int)edgeno)->multi;
    (edge_array + (signed long int)edgeno)->multi = (unsigned short int)(edge_array + (signed long int)edgeno)->multi + 1;
    counter = (unsigned char)tmp_post_1;
    (edge_array + (signed long int)edgeno)->markers[(signed long int)counter] = readid;
    tmp_post_2 = (unsigned short int)(edge_array + (signed long int)bal_ed)->multi;
    (edge_array + (signed long int)bal_ed)->multi = (unsigned short int)(edge_array + (signed long int)bal_ed)->multi + 1;
    counter = (unsigned char)tmp_post_2;
    (edge_array + (signed long int)bal_ed)->markers[(signed long int)counter] = -readid;
  }

}

// addRv
// file bubble.c line 555
static struct readinterval * addRv(struct readinterval *rv_list, struct readinterval *rv)
{
  rv->prevOnEdge = (struct readinterval *)(void *)0;
  rv->nextOnEdge = rv_list;
  if(!(rv_list == ((struct readinterval *)NULL)))
    rv_list->prevOnEdge = rv;

  rv_list = rv;
  return rv_list;
}

// alloc_pe_mem
// file inc/extfunc.h line 189
extern void alloc_pe_mem(signed int gradsCounter)
{
  if(!(gradsCounter == 0))
  {
    void *return_value_ckalloc_1;
    return_value_ckalloc_1=ckalloc((unsigned long int)gradsCounter * sizeof(struct pe_info) /*24ul*/ );
    pes = (struct pe_info *)return_value_ckalloc_1;
  }

}

// allocateArc
// file arc.c line 133
extern struct arc * allocateArc(unsigned int edgeid)
{
  arcCounter = arcCounter + 1ll;
  struct arc *newArc;
  void *return_value_getItem_1;
  return_value_getItem_1=getItem(arc_mem_manager);
  newArc = (struct arc *)return_value_getItem_1;
  newArc->to_ed = edgeid;
  newArc->multiplicity = (unsigned int)1;
  newArc->prev = (struct arc *)(void *)0;
  newArc->next = (struct arc *)(void *)0;
  return newArc;
}

// allocateCN
// file inc/extfunc.h line 92
extern struct connection * allocateCN(unsigned int contigId, signed int gap)
{
  struct connection *newCN;
  void *return_value_getItem_1;
  return_value_getItem_1=getItem(cn_mem_manager);
  newCN = (struct connection *)return_value_getItem_1;
  newCN->contigID = contigId;
  newCN->gapLen = gap;
  newCN->minGap = (unsigned char)0;
  newCN->maxGap = (unsigned short int)0;
  newCN->bySmall = (unsigned char)0;
  newCN->weakPoint = (unsigned char)0;
  newCN->weight = (unsigned char)1;
  newCN->weightNotInherit = (unsigned char)0;
  newCN->mask = (unsigned char)0;
  newCN->used = (unsigned char)0;
  newCN->checking = (unsigned char)0;
  newCN->deleted = (unsigned char)0;
  newCN->prevInScaf = (unsigned char)0;
  newCN->inherit = (unsigned char)0;
  newCN->singleInScaf = (unsigned char)0;
  newCN->nextInScaf = (struct connection *)(void *)0;
  return newCN;
}

// allocateDFibHeapNode
// file dfib.c line 60
static struct dfibheap_el * allocateDFibHeapNode(struct dfibheap *heap)
{
  void *return_value_getItem_1;
  return_value_getItem_1=getItem(heap->nodeMemory);
  return (struct dfibheap_el *)return_value_getItem_1;
}

// allocateFibHeapEl
// file fib.c line 62
static struct fibheap_el * allocateFibHeapEl(struct fibheap *heap)
{
  void *return_value_getItem_1;
  return_value_getItem_1=getItem(heap->nodeMemory);
  return (struct fibheap_el *)return_value_getItem_1;
}

// allocatePreArc
// file arc.c line 65
extern struct prearc * allocatePreArc(unsigned int edgeid)
{
  arcCounter = arcCounter + 1ll;
  struct prearc *newArc;
  void *return_value_getItem_1;
  return_value_getItem_1=getItem(prearc_mem_manager);
  newArc = (struct prearc *)return_value_getItem_1;
  newArc->to_ed = edgeid;
  newArc->multiplicity = (unsigned int)1;
  newArc->next = (struct prearc *)(void *)0;
  return newArc;
}

// allocateRV
// file inc/extfunc.h line 64
extern struct readinterval * allocateRV(signed int readid, signed int edgeid)
{
  struct readinterval *newRV;
  void *return_value_getItem_1;
  return_value_getItem_1=getItem(rv_mem_manager);
  newRV = (struct readinterval *)return_value_getItem_1;
  newRV->readid = readid;
  newRV->edgeid = (unsigned int)edgeid;
  newRV->nextInRead = (struct readinterval *)(void *)0;
  newRV->prevInRead = (struct readinterval *)(void *)0;
  newRV->nextOnEdge = (struct readinterval *)(void *)0;
  newRV->prevOnEdge = (struct readinterval *)(void *)0;
  return newRV;
}

// allpathUpdateEdge
// file concatenateEdge.c line 92
void allpathUpdateEdge(unsigned int e1, unsigned int e2, signed int indicate)
{
  signed int tightLen;
  char *tightSeq = (char *)(void *)0;
  if((signed int)(edge_array + (signed long int)e1)->cvg == 0)
    (edge_array + (signed long int)e1)->cvg = (unsigned short int)(edge_array + (signed long int)e2)->cvg;

  if((signed int)(edge_array + (signed long int)e2)->cvg == 0)
    (edge_array + (signed long int)e2)->cvg = (unsigned short int)(edge_array + (signed long int)e1)->cvg;

  unsigned int cvgsum = (unsigned int)((signed int)(edge_array + (signed long int)e1)->cvg * (edge_array + (signed long int)e1)->length + (signed int)(edge_array + (signed long int)e2)->cvg * (edge_array + (signed long int)e2)->length);
  tightLen = (edge_array + (signed long int)e1)->length + (edge_array + (signed long int)e2)->length;
  if(!(tightLen == 0))
  {
    void *return_value_ckalloc_1;
    return_value_ckalloc_1=ckalloc((unsigned long int)(tightLen / 4 + 1) * sizeof(char) /*1ul*/ );
    tightSeq = (char *)return_value_ckalloc_1;
  }

  tightLen = 0;
  if(!((edge_array + (signed long int)e1)->length == 0))
  {
    copySeq_link1(tightSeq, (edge_array + (signed long int)e1)->seq, 0, (edge_array + (signed long int)e1)->length);
    tightLen = (edge_array + (signed long int)e1)->length;
    if(!((edge_array + (signed long int)e1)->seq == ((char *)NULL)))
    {
      free((void *)(edge_array + (signed long int)e1)->seq);
      (edge_array + (signed long int)e1)->seq = (char *)(void *)0;
    }

    else
      printf("allpathUpdateEdge: edge %d with length %d, but without seq\n", e1, (edge_array + (signed long int)e1)->length);
  }

  if(!((edge_array + (signed long int)e2)->length == 0))
  {
    copySeq_link1(tightSeq, (edge_array + (signed long int)e2)->seq, tightLen, (edge_array + (signed long int)e2)->length);
    tightLen = tightLen + (edge_array + (signed long int)e2)->length;
    if(!((edge_array + (signed long int)e2)->seq == ((char *)NULL)))
    {
      free((void *)(edge_array + (signed long int)e2)->seq);
      (edge_array + (signed long int)e2)->seq = (char *)(void *)0;
    }

    else
      printf("allpathUpdateEdge: edge %d with length %d, but without seq\n", e2, (edge_array + (signed long int)e2)->length);
  }

  signed int tmp_if_expr_2;
  signed int tmp_if_expr_3;
  if(indicate == 0)
  {
    (edge_array + (signed long int)e2)->length = 0;
    (edge_array + (signed long int)e1)->to_vt = (edge_array + (signed long int)e2)->to_vt;
    (edge_array + (signed long int)e1)->length = tightLen;
    (edge_array + (signed long int)e1)->seq = tightSeq;
    if(!(tightLen == 0))
      (edge_array + (signed long int)e1)->cvg = (unsigned short int)(cvgsum / (unsigned int)tightLen);

    if((signed int)(edge_array + (signed long int)e1)->cvg >= 1)
      tmp_if_expr_2 = (signed int)(edge_array + (signed long int)e1)->cvg;

    else
      tmp_if_expr_2 = 1;
    (edge_array + (signed long int)e1)->cvg = (unsigned short int)tmp_if_expr_2;
  }

  else
  {
    (edge_array + (signed long int)e1)->length = 0;
    (edge_array + (signed long int)e2)->from_vt = (edge_array + (signed long int)e1)->from_vt;
    (edge_array + (signed long int)e2)->length = tightLen;
    (edge_array + (signed long int)e2)->seq = tightSeq;
    if(!(tightLen == 0))
      (edge_array + (signed long int)e2)->cvg = (unsigned short int)(cvgsum / (unsigned int)tightLen);

    if((signed int)(edge_array + (signed long int)e2)->cvg >= 1)
      tmp_if_expr_3 = (signed int)(edge_array + (signed long int)e2)->cvg;

    else
      tmp_if_expr_3 = 1;
    (edge_array + (signed long int)e2)->cvg = (unsigned short int)tmp_if_expr_3;
  }
}

// arcCount
// file cutTip_graph.c line 66
extern struct arc * arcCount(unsigned int edgeid, unsigned int *num)
{
  struct arc *arc;
  struct arc *firstValidArc = (struct arc *)(void *)0;
  unsigned int count = (unsigned int)0;
  arc = (edge_array + (signed long int)edgeid)->arcs;
  for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
    if(arc->to_ed >= 1u)
    {
      count = count + 1u;
      if(count == 1u)
        firstValidArc = arc;

      else
        if(count >= 2u)
        {
          *num = count;
          return firstValidArc;
        }

    }

  *num = count;
  return firstValidArc;
}

// arcCounts
// file splitReps.c line 63
static struct arc * arcCounts(unsigned int edgeid, unsigned int *num)
{
  struct arc *arc;
  struct arc *firstValidArc = (struct arc *)(void *)0;
  unsigned int count = (unsigned int)0;
  arc = (edge_array + (signed long int)edgeid)->arcs;
  for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
  {
    if(arc->to_ed >= 1u)
      count = count + 1u;

    if(count == 1u)
      firstValidArc = arc;

  }
  *num = count;
  return firstValidArc;
}

// arrangeNodes_general
// file orderContig.c line 3480
static void arrangeNodes_general()
{
  signed int i;
  signed int gap;
  struct connection *ite_cnt;
  struct connection *temp_cnt;
  struct connection *bal_cnt;
  struct connection *prev_cnt;
  struct connection *next_cnt;
  unsigned int node1;
  unsigned int node2;
  unsigned int bal_nd1;
  unsigned int bal_nd2;
  i = 1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  unsigned int return_value_getTwinCtg_4;
  for( ; nodeCounter_link1 >= i; i = i + 1)
  {
    node1 = ctg4heapArray[(signed long int)i].ctgID;
    ite_cnt = (contig_array + (signed long int)node1)->downwardConnect;
    while(!(ite_cnt == ((struct connection *)NULL)))
    {
      if(!(ite_cnt->mask == 0))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = ite_cnt->deleted != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = !((contig_array + (signed long int)ite_cnt->contigID)->inSubGraph != 0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        ite_cnt = ite_cnt->next;

      else
      {
        ite_cnt->deleted = (unsigned char)1;
        setNextInScaf(ite_cnt, (struct connection *)(void *)0);
        setPrevInScaf(ite_cnt, (char)0);
        ite_cnt = ite_cnt->next;
      }
    }
    bal_nd1=getTwinCtg(node1);
    ite_cnt = (contig_array + (signed long int)bal_nd1)->downwardConnect;
    while(!(ite_cnt == ((struct connection *)NULL)))
    {
      if(!(ite_cnt->mask == 0))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = ite_cnt->deleted != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_getTwinCtg_4=getTwinCtg(ite_cnt->contigID);
        tmp_if_expr_5 = !((contig_array + (signed long int)return_value_getTwinCtg_4)->inSubGraph != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
        ite_cnt = ite_cnt->next;

      else
      {
        ite_cnt->deleted = (unsigned char)1;
        setNextInScaf(ite_cnt, (struct connection *)(void *)0);
        setPrevInScaf(ite_cnt, (char)0);
        ite_cnt = ite_cnt->next;
      }
    }
  }
  next_cnt = (struct connection *)(void *)0;
  prev_cnt = next_cnt;
  i = 1;
  for( ; !(i >= nodeCounter_link1); i = i + 1)
  {
    node1 = ctg4heapArray[(signed long int)i].ctgID;
    node2 = ctg4heapArray[(signed long int)(i + 1)].ctgID;
    bal_nd1=getTwinCtg(node1);
    bal_nd2=getTwinCtg(node2);
    gap = (signed int)((unsigned int)(ctg4heapArray[(signed long int)(i + 1)].dis - ctg4heapArray[(signed long int)i].dis) - (contig_array + (signed long int)node2)->length);
    temp_cnt=getCntBetween(node1, node2);
    if(!(temp_cnt == ((struct connection *)NULL)))
    {
      temp_cnt->deleted = (unsigned char)0;
      temp_cnt->mask = (unsigned char)0;
      bal_cnt=getCntBetween(bal_nd2, bal_nd1);
      bal_cnt->deleted = (unsigned char)0;
      bal_cnt->mask = (unsigned char)0;
    }

    else
    {
      temp_cnt=allocateCN(node2, gap);
      if(!(cntLookupTable == ((struct connection **)NULL)))
        putCnt2LookupTable(node1, temp_cnt);

      temp_cnt->next = (contig_array + (signed long int)node1)->downwardConnect;
      (contig_array + (signed long int)node1)->downwardConnect = temp_cnt;
      bal_cnt=allocateCN(bal_nd1, gap);
      if(!(cntLookupTable == ((struct connection **)NULL)))
        putCnt2LookupTable(bal_nd2, bal_cnt);

      bal_cnt->next = (contig_array + (signed long int)bal_nd2)->downwardConnect;
      (contig_array + (signed long int)bal_nd2)->downwardConnect = bal_cnt;
    }
    if(!(prev_cnt == ((struct connection *)NULL)))
    {
      setNextInScaf(prev_cnt, temp_cnt);
      setPrevInScaf(temp_cnt, (char)1);
    }

    if(!(next_cnt == ((struct connection *)NULL)))
    {
      setNextInScaf(bal_cnt, next_cnt);
      setPrevInScaf(next_cnt, (char)1);
    }

    prev_cnt = temp_cnt;
    next_cnt = bal_cnt;
  }
  bal_nd2=getTwinCtg(ctg4heapArray[(signed long int)1].ctgID);
  ite_cnt = (contig_array + (signed long int)bal_nd2)->downwardConnect;
  _Bool tmp_if_expr_6;
  while(!(ite_cnt == ((struct connection *)NULL)))
  {
    if(!(ite_cnt->deleted == 0))
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
      ite_cnt = ite_cnt->next;

    else
    {
      if(ite_cnt->prevInScaf != 0)
        break;

      ite_cnt = ite_cnt->next;
    }
  }
  if(!(ite_cnt == ((struct connection *)NULL)))
  {
    bal_nd1 = ite_cnt->contigID;
    node1=getTwinCtg(bal_nd1);
    node2 = ctg4heapArray[(signed long int)1].ctgID;
    temp_cnt=checkConnect(node1, node2);
    bal_cnt = ite_cnt;
    next_cnt=checkConnect(ctg4heapArray[(signed long int)1].ctgID, ctg4heapArray[(signed long int)2].ctgID);
    unsigned int return_value_getTwinCtg_7;
    return_value_getTwinCtg_7=getTwinCtg(ctg4heapArray[(signed long int)2].ctgID);
    unsigned int return_value_getTwinCtg_8;
    return_value_getTwinCtg_8=getTwinCtg(ctg4heapArray[(signed long int)1].ctgID);
    prev_cnt=checkConnect(return_value_getTwinCtg_7, return_value_getTwinCtg_8);
    if(!(temp_cnt == ((struct connection *)NULL)))
    {
      setNextInScaf(temp_cnt, next_cnt);
      setPrevInScaf(temp_cnt->nextInScaf, (char)0);
      setPrevInScaf(next_cnt, (char)1);
      setNextInScaf(prev_cnt, bal_cnt);
    }

  }

  node1 = ctg4heapArray[(signed long int)nodeCounter_link1].ctgID;
  ite_cnt = (contig_array + (signed long int)node1)->downwardConnect;
  _Bool tmp_if_expr_9;
  while(!(ite_cnt == ((struct connection *)NULL)))
  {
    if(!(ite_cnt->deleted == 0))
      tmp_if_expr_9 = (_Bool)1;

    else
      tmp_if_expr_9 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_9)
      ite_cnt = ite_cnt->next;

    else
    {
      if(ite_cnt->prevInScaf != 0)
        break;

      ite_cnt = ite_cnt->next;
    }
  }
  if(!(ite_cnt == ((struct connection *)NULL)))
  {
    node2 = ite_cnt->contigID;
    bal_nd1=getTwinCtg(node1);
    bal_nd2=getTwinCtg(node2);
    temp_cnt = ite_cnt;
    bal_cnt=checkConnect(bal_nd2, bal_nd1);
    unsigned int return_value_getTwinCtg_10;
    return_value_getTwinCtg_10=getTwinCtg(ctg4heapArray[(signed long int)nodeCounter_link1].ctgID);
    unsigned int return_value_getTwinCtg_11;
    return_value_getTwinCtg_11=getTwinCtg(ctg4heapArray[(signed long int)(nodeCounter_link1 - 1)].ctgID);
    next_cnt=checkConnect(return_value_getTwinCtg_10, return_value_getTwinCtg_11);
    prev_cnt=checkConnect(ctg4heapArray[(signed long int)(nodeCounter_link1 - 1)].ctgID, ctg4heapArray[(signed long int)nodeCounter_link1].ctgID);
    setNextInScaf(prev_cnt, temp_cnt);
    setNextInScaf(bal_cnt, next_cnt);
    setPrevInScaf(next_cnt, (char)1);
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

// atoi_link10
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link10(const char *__nptr_link10)
{
  signed long int return_value_strtol_1_link10;
  return_value_strtol_1_link10=strtol(__nptr_link10, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link10;
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

// atoi_link5
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link5(const char *__nptr_link5)
{
  signed long int return_value_strtol_1_link5;
  return_value_strtol_1_link5=strtol(__nptr_link5, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link5;
}

// atoi_link6
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link6(const char *__nptr_link6)
{
  signed long int return_value_strtol_1_link6;
  return_value_strtol_1_link6=strtol(__nptr_link6, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link6;
}

// atoi_link7
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link7(const char *__nptr_link7)
{
  signed long int return_value_strtol_1_link7;
  return_value_strtol_1_link7=strtol(__nptr_link7, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link7;
}

// atoi_link8
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link8(const char *__nptr_link8)
{
  signed long int return_value_strtol_1_link8;
  return_value_strtol_1_link8=strtol(__nptr_link8, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link8;
}

// atoi_link9
// file /usr/include/stdlib.h line 278
static inline signed int atoi_link9(const char *__nptr_link9)
{
  signed long int return_value_strtol_1_link9;
  return_value_strtol_1_link9=strtol(__nptr_link9, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1_link9;
}

// attach1PE
// file attachPEinfo.c line 229
signed int attach1PE(unsigned int e1, signed int pre_pos, unsigned int bal_e2, signed int pos, signed int insert_size)
{
  signed int gap;
  signed int realpeSize;
  unsigned int bal_e1;
  unsigned int e2;
  if(e1 == bal_e2)
  {
    ignorePE1 = ignorePE1 + 1;
    return -1;
  }

  else
  {
    bal_e1=getTwinCtg(e1);
    e2=getTwinCtg(bal_e2);
    if(e1 == e2)
    {
      realpeSize = (signed int)((((contig_array + (signed long int)e1)->length + (unsigned int)overlaplen) - (unsigned int)pre_pos) - (unsigned int)pos);
      if(realpeSize >= 1)
      {
        peSUM = peSUM + (unsigned long long int)realpeSize;
        onsameCtgPE = onsameCtgPE + 1;
        if(!(insert_size >= (signed int)(contig_array + (signed long int)e1)->length))
        {
          signed int *item;
          void *return_value_stackPush_1;
          return_value_stackPush_1=stackPush(isStack);
          item = (signed int *)return_value_stackPush_1;
          *item = realpeSize;
        }

      }

      return 2;
    }

    else
    {
      gap = (signed int)(((unsigned int)((insert_size - overlaplen) + pre_pos + pos) - (contig_array + (signed long int)e1)->length) - (contig_array + (signed long int)e2)->length);
      if(!(gap >= -(insert_size / 10)))
      {
        ignorePE2 = ignorePE2 + 1;
        return 0;
      }

      else
        if(!(insert_size >= gap))
        {
          ignorePE3 = ignorePE3 + 1;
          return 0;
        }

        else
        {
          add1Connect(e1, e2, gap, 1, (char)0);
          add1Connect(bal_e2, bal_e1, gap, 1, (char)0);
          return 1;
        }
    }
  }
}

// attach1read2contig
// file prlReadFillGap.c line 56
static void attach1read2contig(unsigned int ctgID, signed int len, signed int pos, signed long long int starter)
{
  unsigned int ctg = index_array[(signed long int)ctgID];
  char return_value_isLargerThanTwin_1;
  return_value_isLargerThanTwin_1=isLargerThanTwin(ctg);
  if(!(return_value_isLargerThanTwin_1 == 0))
  {
    ctg=getTwinCtg(ctg);
    pos = (signed int)((((contig_array + (signed long int)ctg)->length + (unsigned int)overlaplen) - (unsigned int)pos) - (unsigned int)len);
  }

  if((contig_array + (signed long int)ctg)->closeReads == ((struct stack *)NULL))
  {
    struct stack *return_value_createStack_2;
    return_value_createStack_2=createStack(50, sizeof(struct read_nearby) /*16ul*/ );
    (contig_array + (signed long int)ctg)->closeReads = (struct stack *)return_value_createStack_2;
  }

  struct read_nearby *rd;
  void *return_value_stackPush_3;
  return_value_stackPush_3=stackPush((contig_array + (signed long int)ctg)->closeReads);
  rd = (struct read_nearby *)return_value_stackPush_3;
  rd->len = len;
  rd->dis = pos;
  rd->seqStarter = starter;
}

// attachPath
// file bubble.c line 625
static void attachPath(struct readinterval *path)
{
  struct readinterval *marker;
  struct readinterval *bal_marker;
  unsigned int ed;
  unsigned int bal_ed;
  marker = path;
  for( ; !(marker == ((struct readinterval *)NULL)); marker = marker->nextInRead)
  {
    ed = marker->edgeid;
    (edge_array + (signed long int)ed)->rv=addRv((edge_array + (signed long int)ed)->rv, marker);
    bal_ed=getTwinEdge(ed);
    bal_marker=allocateRV(-marker->readid, (signed int)bal_ed);
    (edge_array + (signed long int)bal_ed)->rv=addRv((edge_array + (signed long int)bal_ed)->rv, bal_marker);
    if(!(marker->prevInRead == ((struct readinterval *)NULL)))
    {
      marker->prevInRead->bal_rv->prevInRead = bal_marker;
      bal_marker->nextInRead = marker->prevInRead->bal_rv;
    }

    bal_marker->bal_rv = marker;
    marker->bal_rv = bal_marker;
  }
}

// basicContigInfo
// file prlRead2Ctg.c line 487
extern void basicContigInfo(char *infile)
{
  char name[256l];
  char lldne[1024l];
  struct _IO_FILE *fp;
  signed int length;
  signed int bal_ed;
  signed int num_all;
  signed int num_long;
  signed int index;
  sprintf(name, "%s.ContigIndex", infile);
  fp=ckopen(name, "r");
  fgets(lldne, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
  sscanf(lldne + (signed long int)8, "%d %d", &num_all, &num_long);
  printf("%d edges in graph\n", num_all);
  num_ctg = (unsigned int)num_all;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(num_all + 1) * sizeof(struct contig) /*48ul*/ );
  contig_array = (struct contig *)return_value_ckalloc_1;
  fgets(lldne, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
  num_long = 0;
  char *return_value_fgets_2;
  do
  {
    return_value_fgets_2=fgets(lldne, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_2 == ((char *)NULL))
      break;

    sscanf(lldne, "%d %d %d", &index, &length, &bal_ed);
    num_long = num_long + 1;
    (contig_array + (signed long int)num_long)->length = (unsigned int)length;
    (contig_array + (signed long int)num_long)->bal_edge = (unsigned char)(bal_ed + 1);
    if(!(index == num_long))
      printf("basicContigInfo: %d vs %d\n", index, num_long);

    if(!(bal_ed == 0))
    {
      num_long = num_long + 1;
      (contig_array + (signed long int)num_long)->length = (unsigned int)length;
      (contig_array + (signed long int)num_long)->bal_edge = (unsigned char)(-bal_ed + 1);
    }

  }
  while((_Bool)1);
  fclose(fp);
}

// bisearch
// file loadPreGraph.c line 100
extern signed int bisearch(struct vertex *vts, signed int num, unsigned long long int target)
{
  signed int mid;
  signed int low;
  signed int high;
  low = 0;
  high = num - 1;
  while(high >= low)
  {
    mid = (low + high) / 2;
    if((vts + (signed long int)mid)->kmer == target)
      break;

    else
      if(!((vts + (signed long int)mid)->kmer >= target))
        low = mid + 1;

      else
        high = mid - 1;
  }
  if(high >= low)
    return mid;

  else
    return -1;
}

// bubblePinch
// file bubble.c line 1920
extern void bubblePinch(double simiCutoff, char *outfile, signed int M)
{
  unsigned int index;
  unsigned int counter = (unsigned int)0;
  unsigned int bubblePinch__1__startingNode;
  char temp[256l];
  sprintf(temp, "%s.pathpair", outfile);
  caseD = (signed long long int)0;
  caseC = caseD;
  caseB = caseC;
  caseA = caseB;
  progress = 0;
  arcCounter = (signed long long int)0;
  dnodeCounter = (signed long long int)0;
  rnodeCounter = (signed long long int)0;
  btCounter = (signed long long int)0;
  cmpCounter = (signed long long int)0;
  simiCounter = (signed long long int)0;
  pinCounter = (signed long long int)0;
  replaceCounter = (signed long long int)0;
  getArcCounter = (signed long long int)0;
  cutoff = 1.0 - simiCutoff;
  if(!(M >= 2))
  {
    MAXNODELENGTH = 3;
    DIFF = 2;
  }

  else
    if(M == 2)
    {
      MAXNODELENGTH = 9;
      DIFF = 3;
    }

    else
    {
      MAXNODELENGTH = 30;
      DIFF = 10;
    }
  printf("start to pinch bubbles, cutoff %f, MAX NODE NUM %d, MAX DIFF %d\n", cutoff, MAXNODELENGTH, DIFF);
  createRVmemo();
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(num_ed + (unsigned int)1) * sizeof(double) /*8ul*/ );
  times = (double *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)(num_ed + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  previous = (unsigned int *)return_value_ckalloc_2;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)(num_ed + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  expanded = (unsigned int *)return_value_ckalloc_3;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)(num_ed + (unsigned int)1) * sizeof(struct dfibheap_el *) /*8ul*/ );
  dheapNodes = (struct dfibheap_el **)return_value_ckalloc_4;
  WORDFILTER = ((unsigned long long int)1 << 2 * overlaplen) - (unsigned long int)1;
  index = (unsigned int)1;
  for( ; num_ed >= index; index = index + 1u)
  {
    times[(signed long int)index] = (double)-1;
    previous[(signed long int)index] = (unsigned int)0;
    dheapNodes[(signed long int)index] = (struct dfibheap_el *)(void *)0;
  }
  dheap=newDFibHeap();
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)(num_ed + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  eligibleStartingPoints = (unsigned int *)return_value_ckalloc_5;
  resetNodeStatus();
  createArcLookupTable();
  recordArcsInLookupTable();
  do
  {
    bubblePinch__1__startingNode=nextStartingPoint();
    if(!(bubblePinch__1__startingNode >= 1u))
      break;

    counter = counter + 1u;
    expCounter = (unsigned int)0;
    tourBus(bubblePinch__1__startingNode);
    updateNodeStatus();
  }
  while((_Bool)1);
  resetNodeStatus();
  deleteArcLookupTable();
  destroyReadIntervMem();
  printf("%d startingPoints, %lld dheap nodes\n", counter, dnodeCounter);
  printf("%lld pairs found, %lld pairs of paths compared, %lld pairs merged\n", btCounter, cmpCounter, pinCounter);
  printf("sequenc compare failure: %lld %lld %lld %lld\n", caseA, caseB, caseC, caseD);
  free((void *)eligibleStartingPoints);
  destroyDHeap(dheap);
  free((void *)dheapNodes);
  free((void *)times);
  free((void *)previous);
  free((void *)expanded);
  linearConcatenate();
}

// buildReverseComplementEdge
// file loadPreGraph.c line 156
static void buildReverseComplementEdge(unsigned int edgeno)
{
  signed int length = (edge_array + (signed long int)edgeno)->length;
  signed int i;
  signed int index = 0;
  char *sequence;
  char ch;
  char *tightSeq;
  unsigned long long int kmer = (vt_array + (signed long int)(edge_array + (signed long int)edgeno)->from_vt)->kmer;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(overlaplen + length) * sizeof(char) /*1ul*/ );
  sequence = (char *)return_value_ckalloc_1;
  i = overlaplen - 1;
  for( ; i >= 0; i = i - 1)
  {
    ch = (char)(kmer & (unsigned long int)3);
    kmer = kmer >> 2;
    sequence[(signed long int)i] = ch;
  }
  i = 0;
  for( ; !(i >= length); i = i + 1)
    sequence[(signed long int)(i + overlaplen)]=getCharInTightString((edge_array + (signed long int)edgeno)->seq, i);
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)(length / 4 + 1) * sizeof(char) /*1ul*/ );
  tightSeq = (char *)return_value_ckalloc_2;
  i = length - 1;
  signed int tmp_post_3;
  for( ; i >= 0; i = i - 1)
  {
    tmp_post_3 = index;
    index = index + 1;
    writeChar2tightString((char)((signed int)sequence[(signed long int)i] ^ 0x02), tightSeq, tmp_post_3);
  }
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->length = length;
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->cvg = (unsigned short int)(edge_array + (signed long int)edgeno)->cvg;
  kmer = (vt_array + (signed long int)(edge_array + (signed long int)edgeno)->from_vt)->kmer;
  unsigned long long int return_value_reverseComplement_4;
  return_value_reverseComplement_4=reverseComplement(kmer, overlaplen);
  signed int return_value_kmer2vt_5;
  return_value_kmer2vt_5=kmer2vt(return_value_reverseComplement_4);
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->to_vt = (unsigned int)return_value_kmer2vt_5;
  kmer = (vt_array + (signed long int)(edge_array + (signed long int)edgeno)->to_vt)->kmer;
  unsigned long long int return_value_reverseComplement_6;
  return_value_reverseComplement_6=reverseComplement(kmer, overlaplen);
  signed int return_value_kmer2vt_7;
  return_value_kmer2vt_7=kmer2vt(return_value_reverseComplement_6);
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->from_vt = (unsigned int)return_value_kmer2vt_7;
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->seq = tightSeq;
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->bal_edge = (unsigned short int)0;
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->rv = (struct readinterval *)(void *)0;
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->arcs = (struct arc *)(void *)0;
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->flag = (unsigned short int)0;
  (edge_array + (signed long int)(edgeno + (unsigned int)1))->deleted = (unsigned short int)0;
  free((void *)sequence);
}

// calcuIS
// file attachPEinfo.c line 359
static signed int calcuIS(struct stack *intStack)
{
  signed long long int sum = (signed long long int)0;
  signed int avg = 0;
  signed int *item;
  signed int num = intStack->item_c;
  void *return_value_stackPop_1;
  void *return_value_stackPop_2;
  void *return_value_stackPop_4;
  signed int return_value_abs_5;
  if(!(num >= 100))
    return avg;

  else
  {
    stackBackup(intStack);
    do
    {
      return_value_stackPop_1=stackPop(intStack);
      item = (signed int *)return_value_stackPop_1;
      if(item == ((signed int *)NULL))
        break;

      sum = sum + (signed long long int)*item;
    }
    while((_Bool)1);
    stackRecover(intStack);
    num = intStack->item_c;
    avg = (signed int)(sum / (signed long int)num);
    sum = (signed long long int)0;
    stackBackup(intStack);
    do
    {
      return_value_stackPop_2=stackPop(intStack);
      item = (signed int *)return_value_stackPop_2;
      if(item == ((signed int *)NULL))
        break;

      sum = sum + (signed long long int)((*item - avg) * (*item - avg));
    }
    while((_Bool)1);
    signed int SD;
    double return_value_sqrt_3;
    return_value_sqrt_3=sqrt((double)(sum / (signed long int)(num - 1)));
    SD = (signed int)return_value_sqrt_3;
    if(SD == 0)
    {
      printf("SD=%d, ", SD);
      return avg;
    }

    else
    {
      stackRecover(intStack);
      num = 0;
      sum = (signed long long int)num;
      do
      {
        return_value_stackPop_4=stackPop(intStack);
        item = (signed int *)return_value_stackPop_4;
        if(item == ((signed int *)NULL))
          break;

        return_value_abs_5=abs(*item - avg);
        if(!(return_value_abs_5 >= 3 * SD))
        {
          sum = sum + (signed long long int)*item;
          num = num + 1;
        }

      }
      while((_Bool)1);
      avg = (signed int)(sum / (signed long int)num);
      printf("SD=%d, ", SD);
      return avg;
    }
  }
}

// call_align
// file map.c line 62
signed int call_align(signed int argc, char **argv)
{
  signed long int start_t;
  signed long int stop_t;
  signed long int time_bef;
  signed long int time_aft;
  time(&start_t);
  initenv_link1(argc, argv);
  overlaplen=getMinOverlap(graphfile_link1);
  printf("K = %d\n", overlaplen);
  time(&time_bef);
  ctg_short = (unsigned int)(overlaplen + 2);
  printf("contig len cutoff: %d\n", ctg_short);
  prlContig2nodes(graphfile_link1, (signed int)ctg_short);
  time(&time_aft);
  printf("time spent on De bruijn graph construction: %ds\n\n", (signed int)(time_aft - time_bef));
  time(&time_bef);
  prlLongRead2Ctg(shortrdsfile_link1, graphfile_link1);
  time(&time_aft);
  printf("time spent on mapping long reads: %ds\n\n", (signed int)(time_aft - time_bef));
  time(&time_bef);
  prlRead2Ctg(shortrdsfile_link1, graphfile_link1);
  time(&time_aft);
  printf("time spent on mapping reads: %ds\n\n", (signed int)(time_aft - time_bef));
  free_Sets(KmerSets, thrd_num);
  time(&stop_t);
  printf("overall time for alignment: %dm\n\n", (signed int)(stop_t - start_t) / 60);
  return 0;
}

// call_heavygraph
// file contig.c line 35
signed int call_heavygraph(signed int argc, char **argv)
{
  signed long int start_t;
  signed long int stop_t;
  signed long int time_bef;
  signed long int time_aft;
  time(&start_t);
  char ret;
  initenv(argc, argv);
  loadVertex(graphfile);
  loadEdge(graphfile);
  if(!(repeatSolve == 0))
  {
    time(&time_bef);
    ret=loadPathBin(graphfile);
    if(!(ret == 0))
      solveReps();

    else
      printf("repeat solving can't be done...\n");
    time(&time_aft);
    printf("time spent on solving repeat: %ds\n", (signed int)(time_aft - time_bef));
  }

  if(M >= 1)
  {
    time(&time_bef);
    bubblePinch(0.90, graphfile, M);
    time(&time_aft);
    printf("time spent on bubblePinch: %ds\n", (signed int)(time_aft - time_bef));
  }

  if(!(deLowEdge == 0))
  {
    removeWeakEdges(2 * overlaplen, (unsigned int)1);
    removeLowCovEdges(2 * overlaplen, (unsigned short int)deLowEdge);
  }

  cutTipsInGraph(0, (char)0);
  output_contig(edge_array, num_ed, graphfile, overlaplen + 1);
  output_updated_edges(graphfile);
  output_heavyArcs(graphfile);
  if(!(vt_array == ((struct vertex *)NULL)))
  {
    free((void *)vt_array);
    vt_array = (struct vertex *)(void *)0;
  }

  if(!(edge_array == ((struct edge *)NULL)))
  {
    free_edge_array(edge_array, (signed int)num_ed_limit);
    edge_array = (struct edge *)(void *)0;
  }

  destroyArcMem();
  time(&stop_t);
  printf("time elapsed: %dm\n\n", (signed int)(stop_t - start_t) / 60);
  return 0;
}

// call_pregraph
// file pregraph.c line 35
signed int call_pregraph(signed int argc, char **argv)
{
  signed long int start_t;
  signed long int stop_t;
  signed long int time_bef;
  signed long int time_aft;
  time(&start_t);
  initenv_link2(argc, argv);
  if(overlaplen % 2 == 0)
  {
    overlaplen = overlaplen + 1;
    printf("K should be an odd number\n");
  }

  if(!(overlaplen >= 13))
  {
    overlaplen = 13;
    printf("K should not be less than 13\n");
  }

  else
    if(overlaplen >= 32)
    {
      overlaplen = 31;
      printf("K should not be greater than 31\n");
    }

  time(&time_bef);
  prlRead2HashTable(shortrdsfile_link2, graphfile_link2);
  time(&time_aft);
  printf("time spent on pre-graph construction: %ds\n\n", (signed int)(time_aft - time_bef));
  printf("deLowKmer %d, deLowEdge %d\n", deLowKmer, deLowEdge);
  if(deLowKmer == 0 && !(cutTips == 0))
  {
    time(&time_bef);
    removeSingleTips();
    removeMinorTips();
    time(&time_aft);
    printf("time spent on cutTipe: %ds\n\n", (signed int)(time_aft - time_bef));
  }

  else
  {
    time(&time_bef);
    removeMinorTips();
    time(&time_aft);
    printf("time spent on cutTipe: %ds\n\n", (signed int)(time_aft - time_bef));
  }
  initKmerSetSize = 0;
  time(&time_bef);
  kmer2edges(graphfile_link2);
  time(&time_aft);
  printf("time spent on making edges: %ds\n\n", (signed int)(time_aft - time_bef));
  time(&time_bef);
  prlRead2edge(shortrdsfile_link2, graphfile_link2);
  time(&time_aft);
  printf("time spent on mapping reads: %ds\n\n", (signed int)(time_aft - time_bef));
  output_vertex(graphfile_link2);
  free_Sets(KmerSets, thrd_num);
  free_Sets(KmerSetsPatch, thrd_num);
  time(&stop_t);
  printf("overall time for lightgraph: %dm\n\n", (signed int)(stop_t - start_t) / 60);
  return 0;
}

// call_scaffold
// file scaffold.c line 34
signed int call_scaffold(signed int argc, char **argv)
{
  signed long int start_t;
  signed long int stop_t;
  signed long int time_bef;
  signed long int time_aft;
  time(&start_t);
  initenv_link3(argc, argv);
  loadPEgrads(graphfile_link3);
  time(&time_bef);
  loadUpdatedEdges(graphfile_link3);
  time(&time_aft);
  printf("time spent on loading edges %ds\n", (signed int)(time_aft - time_bef));
  if(SCAFF == 0)
  {
    time(&time_bef);
    PE2Links(graphfile_link3);
    time(&time_aft);
    printf("time spent on loading pair end info %ds\n", (signed int)(time_aft - time_bef));
    time(&time_bef);
    Links2Scaf(graphfile_link3);
    time(&time_aft);
    printf("time spent on creating scaffolds %ds\n", (signed int)(time_aft - time_bef));
    scaffolding((unsigned int)100, graphfile_link3);
  }

  prlReadsCloseGap(graphfile_link3);
  free_pe_mem();
  if(!(index_array == ((unsigned int *)NULL)))
    free((void *)index_array);

  freeContig_array();
  destroyPreArcMem();
  destroyConnectMem();
  deleteCntLookupTable();
  time(&stop_t);
  printf("time elapsed: %dm\n", (signed int)(stop_t - start_t) / 60);
  return 0;
}

// canDheapWait
// file orderContig.c line 3078
static char canDheapWait(unsigned int currNode, signed int dis, signed int DmaxDis)
{
  if(!(dis >= DmaxDis))
    return (char)0;

  else
    return (char)1;
}

// canUheapWait
// file orderContig.c line 3178
static char canUheapWait(unsigned int currNode, signed int dis, signed int UmaxDis)
{
  signed int temp_len = (signed int)(contig_array + (signed long int)currNode)->length;
  if(!(temp_len + -dis >= UmaxDis))
    return (char)0;

  else
    return (char)1;
}

// catUsDsContig
// file orderContig.c line 1035
static void catUsDsContig()
{
  signed int i = 0;
  for( ; !(i >= dsCtgCounter); i = i + 1)
  {
    void *return_value_darrayPut_1;
    return_value_darrayPut_1=darrayPut(solidArray, (signed long long int)i);
    *((unsigned int *)return_value_darrayPut_1) = downstreamCTG[(signed long int)i];
  }
  i = usCtgCounter - 1;
  signed int tmp_post_2;
  for( ; i >= 0; i = i - 1)
  {
    tmp_post_2 = dsCtgCounter;
    dsCtgCounter = dsCtgCounter + 1;
    void *return_value_darrayPut_3;
    return_value_darrayPut_3=darrayPut(solidArray, (signed long long int)tmp_post_2);
    *((unsigned int *)return_value_darrayPut_3)=getTwinCtg(upstreamCTG[(signed long int)i]);
  }
  solidCounter = dsCtgCounter;
}

// ceillog2
// file dfib.c line 85
static inline signed long long int ceillog2(signed long long int a)
{
  signed long long int oa;
  signed long long int i;
  signed long long int b;
  signed long long int cons;
  oa = a;
  b = (signed long long int)((sizeof(signed long long int) /*8ul*/  * (unsigned long int)8) / (unsigned long int)2);
  i = (signed long long int)0;
  for( ; !(b == 0ll); b = b / (signed long long int)2)
  {
    i = i << 1;
    cons = (signed long long int)1 << b;
    if(a >= cons)
    {
      a = a / cons;
      i = i | (signed long int)1;
    }

    else
      a = a & cons - (signed long int)1;
  }
  if(1ll << i == oa)
    return i;

  else
    return i + (signed long int)1;
}

// ceillog2_link1
// file fib.c line 82
static inline signed long long int ceillog2_link1(signed long long int a_link1)
{
  signed long long int oa_link1;
  signed long long int i_link1;
  signed long long int b_link1;
  signed long long int cons_link1;
  oa_link1 = a_link1;
  b_link1 = (signed long long int)((sizeof(signed long long int) /*8ul*/  * (unsigned long int)8) / (unsigned long int)2);
  i_link1 = (signed long long int)0;
  for( ; !(b_link1 == 0ll); b_link1 = b_link1 / (signed long long int)2)
  {
    i_link1 = i_link1 << 1;
    cons_link1 = (signed long long int)1 << b_link1;
    if(a_link1 >= cons_link1)
    {
      a_link1 = a_link1 / cons_link1;
      i_link1 = i_link1 | (signed long int)1;
    }

    else
      a_link1 = a_link1 & cons_link1 - (signed long int)1;
  }
  if(1ll << i_link1 == oa_link1)
    return i_link1;

  else
    return i_link1 + (signed long int)1;
}

// changeScafBegin
// file orderContig.c line 4101
static void changeScafBegin(struct stack *scafStack, unsigned int start)
{
  unsigned int ctg;
  unsigned int *pt;
  unsigned int end;
  end=getTwinCtg(start);
  stackRecover(scafStack);
  void *return_value_stackPop_1;
  do
  {
    return_value_stackPop_1=stackPop(scafStack);
    pt = (unsigned int *)return_value_stackPop_1;
    if(pt == ((unsigned int *)NULL))
      break;

    ctg = *pt;
    (contig_array + (signed long int)ctg)->from_vt = start;
    unsigned int return_value_getTwinCtg_2;
    return_value_getTwinCtg_2=getTwinCtg(ctg);
    (contig_array + (signed long int)return_value_getTwinCtg_2)->to_vt = end;
  }
  while((_Bool)1);
}

// changeScafEnd
// file orderContig.c line 4087
static void changeScafEnd(struct stack *scafStack, unsigned int end)
{
  unsigned int ctg;
  unsigned int *pt;
  unsigned int start;
  start=getTwinCtg(end);
  stackRecover(scafStack);
  void *return_value_stackPop_1;
  do
  {
    return_value_stackPop_1=stackPop(scafStack);
    pt = (unsigned int *)return_value_stackPop_1;
    if(pt == ((unsigned int *)NULL))
      break;

    ctg = *pt;
    (contig_array + (signed long int)ctg)->to_vt = end;
    unsigned int return_value_getTwinCtg_2;
    return_value_getTwinCtg_2=getTwinCtg(ctg);
    (contig_array + (signed long int)return_value_getTwinCtg_2)->from_vt = start;
  }
  while((_Bool)1);
}

// check1scaf
// file prlReadFillGap.c line 571
static void check1scaf(signed int t, signed int thrdID)
{
  if(flagBuf[(signed long int)t] == 0)
  {
    char late = (char)0;
    pthread_mutex_lock(&mutex);
    if(flagBuf[(signed long int)t] == 0)
    {
      flagBuf[(signed long int)t] = (char)1;
      thrdNoBuf[(signed long int)t] = (unsigned char)thrdID;
    }

    else
      late = (char)1;
    pthread_mutex_unlock(&mutex);
    if(late == 0)
    {
      counters[(signed long int)thrdID] = counters[(signed long int)thrdID] + 1;
      fill1scaf(scafCounter + t + 1, ctgStackBuffer[(signed long int)t], thrdID);
    }

  }

}

// checkCircle
// file orderContig.c line 4359
static void checkCircle()
{
  unsigned int i;
  unsigned int ctg;
  struct connection *cn_temp1;
  signed int counter = 0;
  i = (unsigned int)1;
  _Bool tmp_if_expr_1;
  for( ; num_ctg >= i; i = i + 1u)
  {
    cn_temp1 = (contig_array + (signed long int)i)->downwardConnect;
    while(!(cn_temp1 == ((struct connection *)NULL)))
    {
      if(!(cn_temp1->weak == 0))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = cn_temp1->deleted != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        cn_temp1 = cn_temp1->next;

      else
      {
        ctg = cn_temp1->contigID;
        struct connection *return_value_checkConnect_2;
        return_value_checkConnect_2=checkConnect(ctg, i);
        if(!(return_value_checkConnect_2 == ((struct connection *)NULL)))
        {
          counter = counter + 1;
          maskContig(i, (char)1);
          maskContig(ctg, (char)1);
        }

        cn_temp1 = cn_temp1->next;
      }
    }
  }
  printf("%d circles removed \n", counter);
}

// checkConflictCnt_general
// file orderContig.c line 3685
static char checkConflictCnt_general(double tolerance)
{
  signed int i;
  signed int j;
  signed int supportCounter = 0;
  signed int objectCounter = 0;
  struct connection *cnt;
  i = 1;
  for( ; !(i >= nodeCounter_link1); i = i + 1)
  {
    j = i + 1;
    for( ; nodeCounter_link1 >= j; j = j + 1)
    {
      cnt=checkConnect(ctg4heapArray[(signed long int)i].ctgID, ctg4heapArray[(signed long int)j].ctgID);
      if(!(cnt == ((struct connection *)NULL)))
        supportCounter = supportCounter + (signed int)cnt->weight;

      cnt=checkConnect(ctg4heapArray[(signed long int)j].ctgID, ctg4heapArray[(signed long int)i].ctgID);
      if(!(cnt == ((struct connection *)NULL)))
        objectCounter = objectCounter + (signed int)cnt->weight;

    }
  }
  if(!(supportCounter >= 1))
    return (char)1;

  else
    if((double)objectCounter / (double)supportCounter < tolerance)
      return (char)0;

    else
      return (char)1;
}

// checkConnect
// file orderContig.c line 649
static struct connection * checkConnect(unsigned int from_c, unsigned int to_c)
{
  struct connection *cn_temp;
  cn_temp=getCntBetween(from_c, to_c);
  if(cn_temp == ((struct connection *)NULL))
    return (struct connection *)(void *)0;

  else
    if(cn_temp->mask == 0)
    {
      if(cn_temp->deleted != 0)
        goto __CPROVER_DUMP_L2;

      return cn_temp;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      return (struct connection *)(void *)0;
    }
}

// checkEligible
// file orderContig.c line 3348
static char checkEligible()
{
  unsigned int firstNode = ctg4heapArray[(signed long int)1].ctgID;
  unsigned int twin;
  signed int i;
  char flag = (char)0;
  twin=getTwinCtg(firstNode);
  struct connection *ite_cnt = (contig_array + (signed long int)twin)->downwardConnect;
  _Bool tmp_if_expr_1;
  while(!(ite_cnt == ((struct connection *)NULL)))
  {
    if(!(ite_cnt->deleted == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      ite_cnt = ite_cnt->next;

    else
    {
      if(!((contig_array + (signed long int)ite_cnt->contigID)->inSubGraph == 0))
        return (char)0;

      if(!(ite_cnt->prevInScaf == 0))
      {
        if(!(flag == 0))
          return (char)0;

        flag = (char)1;
      }

      ite_cnt = ite_cnt->next;
    }
  }
  unsigned int lastNode = ctg4heapArray[(signed long int)nodeCounter_link1].ctgID;
  ite_cnt = (contig_array + (signed long int)lastNode)->downwardConnect;
  flag = (char)0;
  _Bool tmp_if_expr_2;
  while(!(ite_cnt == ((struct connection *)NULL)))
  {
    if(!(ite_cnt->deleted == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      ite_cnt = ite_cnt->next;

    else
    {
      twin=getTwinCtg(ite_cnt->contigID);
      if(!((contig_array + (signed long int)twin)->inSubGraph == 0))
        return (char)0;

      if(!(ite_cnt->prevInScaf == 0))
      {
        if(!(flag == 0))
          return (char)0;

        flag = (char)1;
      }

      ite_cnt = ite_cnt->next;
    }
  }
  i = 1;
  _Bool tmp_if_expr_3;
  for( ; !(i >= nodeCounter_link1); i = i + 1)
  {
    ite_cnt = (contig_array + (signed long int)ctg4heapArray[(signed long int)i].ctgID)->downwardConnect;
    while(!(ite_cnt == ((struct connection *)NULL)))
    {
      if(!(ite_cnt->deleted == 0))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        ite_cnt = ite_cnt->next;

      else
      {
        if((contig_array + (signed long int)ite_cnt->contigID)->inSubGraph == 0)
          return (char)0;

        ite_cnt = ite_cnt->next;
      }
    }
  }
  i = 2;
  _Bool tmp_if_expr_4;
  for( ; nodeCounter_link1 >= i; i = i + 1)
  {
    twin=getTwinCtg(ctg4heapArray[(signed long int)i].ctgID);
    ite_cnt = (contig_array + (signed long int)twin)->downwardConnect;
    while(!(ite_cnt == ((struct connection *)NULL)))
    {
      if(!(ite_cnt->deleted == 0))
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        ite_cnt = ite_cnt->next;

      else
      {
        unsigned int return_value_getTwinCtg_5;
        return_value_getTwinCtg_5=getTwinCtg(ite_cnt->contigID);
        if((contig_array + (signed long int)return_value_getTwinCtg_5)->inSubGraph == 0)
          return (char)0;

        ite_cnt = ite_cnt->next;
      }
    }
  }
  return (char)1;
}

// checkOverlapInBetween
// file orderContig.c line 1520
static char checkOverlapInBetween(double tolerance)
{
  signed int i;
  signed int gap;
  signed int index;
  unsigned int node;
  signed int lenSum;
  signed int lenOlp = 0;
  lenSum = lenOlp;
  i = 0;
  for( ; !(i >= nodeCounter_link1); i = i + 1)
  {
    node = nodesInSubInOrder[(signed long int)i];
    lenSum = lenSum + (signed int)(contig_array + (signed long int)node)->length;
    index=getIndexInArray(node);
    nodeDistanceInOrder[(signed long int)i] = nodeDistance[(signed long int)index];
  }
  if(!(lenSum >= 1))
    return (char)1;

  else
  {
    i = 0;
    for( ; !(i >= nodeCounter_link1 + -1); i = i + 1)
    {
      gap = (signed int)((unsigned int)(nodeDistanceInOrder[(signed long int)(i + 1)] - nodeDistanceInOrder[(signed long int)i]) - (contig_array + (signed long int)nodesInSubInOrder[(signed long int)(i + 1)])->length);
      if(-gap >= 1)
        lenOlp = lenOlp + -gap;

      if((double)lenOlp / (double)lenSum > tolerance)
        return (char)0;

    }
    return (char)1;
  }
}

// checkOverlapInBetween_general
// file orderContig.c line 3652
char checkOverlapInBetween_general(double tolerance)
{
  signed int i;
  signed int gap;
  unsigned int node;
  signed int lenSum;
  signed int lenOlp = 0;
  lenSum = lenOlp;
  i = 1;
  for( ; nodeCounter_link1 >= i; i = i + 1)
  {
    node = ctg4heapArray[(signed long int)i].ctgID;
    lenSum = lenSum + (signed int)(contig_array + (signed long int)node)->length;
  }
  if(!(lenSum >= 1))
    return (char)1;

  else
  {
    i = 1;
    for( ; !(i >= nodeCounter_link1); i = i + 1)
    {
      gap = (signed int)((unsigned int)(ctg4heapArray[(signed long int)(i + 1)].dis - ctg4heapArray[(signed long int)i].dis) - (contig_array + (signed long int)ctg4heapArray[(signed long int)(i + 1)].ctgID)->length);
      if(-gap >= 1)
        lenOlp = lenOlp + -gap;

      if((double)lenOlp / (double)lenSum > tolerance)
        return (char)0;

    }
    return (char)1;
  }
}

// checkScafConsist
// file orderContig.c line 3987
static char checkScafConsist(struct stack *scafStack1, struct stack *scafStack2)
{
  struct dynamic_array *downwardTo1;
  struct dynamic_array *return_value_createDarray_1;
  return_value_createDarray_1=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  downwardTo1 = (struct dynamic_array *)return_value_createDarray_1;
  struct dynamic_array *downwardTo2;
  struct dynamic_array *return_value_createDarray_2;
  return_value_createDarray_2=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  downwardTo2 = (struct dynamic_array *)return_value_createDarray_2;
  struct dynamic_array *downwardWt1;
  struct dynamic_array *return_value_createDarray_3;
  return_value_createDarray_3=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  downwardWt1 = (struct dynamic_array *)return_value_createDarray_3;
  struct dynamic_array *downwardWt2;
  struct dynamic_array *return_value_createDarray_4;
  return_value_createDarray_4=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  downwardWt2 = (struct dynamic_array *)return_value_createDarray_4;
  signed int linkCount1;
  linkCount1=getDSLink2Scaf(scafStack1, downwardTo1, downwardWt1);
  signed int linkCount2;
  linkCount2=getDSLink2Scaf(scafStack2, downwardTo2, downwardWt2);
  if(linkCount1 == 0 || linkCount2 == 0)
  {
    freeDarray(downwardTo1);
    freeDarray(downwardTo2);
    freeDarray(downwardWt1);
    freeDarray(downwardWt2);
    return (char)1;
  }

  else
  {
    char flag1;
    flag1=isLinkReliable(downwardWt1, linkCount1);
    char flag2;
    flag2=isLinkReliable(downwardWt2, linkCount2);
    if(flag1 == 0 || flag2 == 0)
    {
      freeDarray(downwardTo1);
      freeDarray(downwardTo2);
      freeDarray(downwardWt1);
      freeDarray(downwardWt2);
      return (char)1;
    }

    else
    {
      unsigned int scaf;
      signed int i;
      signed int wt1;
      signed int wt2;
      signed int ret = 1;
      i = 0;
      for( ; !(i >= linkCount1); i = i + 1)
      {
        void *return_value_darrayGet_5;
        return_value_darrayGet_5=darrayGet(downwardWt1, (signed long long int)i);
        wt1 = *((signed int *)return_value_darrayGet_5);
        if(wt1 >= weakPE)
        {
          void *return_value_darrayGet_6;
          return_value_darrayGet_6=darrayGet(downwardTo1, (signed long long int)i);
          scaf = *((unsigned int *)return_value_darrayGet_6);
          wt2=getWtFromSarray(downwardTo2, downwardWt2, linkCount2, scaf);
          if(!(wt2 >= 1))
          {
            ret = 0;
            break;
          }

        }

      }
      freeDarray(downwardTo1);
      freeDarray(downwardTo2);
      freeDarray(downwardWt1);
      freeDarray(downwardWt2);
      return (char)ret;
    }
  }
}

// checkSimple
// file orderContig.c line 4333
static char checkSimple(struct dynamic_array *ctgArray, signed int count)
{
  signed int i;
  unsigned int ctg;
  i = 0;
  for( ; !(i >= count); i = i + 1)
  {
    void *return_value_darrayGet_1;
    return_value_darrayGet_1=darrayGet(ctgArray, (signed long long int)i);
    ctg = *((unsigned int *)return_value_darrayGet_1);
    (contig_array + (signed long int)ctg)->flag = (unsigned char)0;
    unsigned int return_value_getTwinCtg_2;
    return_value_getTwinCtg_2=getTwinCtg(ctg);
    (contig_array + (signed long int)return_value_getTwinCtg_2)->flag = (unsigned char)0;
  }
  i = 0;
  for( ; !(i >= count); i = i + 1)
  {
    void *return_value_darrayGet_3;
    return_value_darrayGet_3=darrayGet(ctgArray, (signed long long int)i);
    ctg = *((unsigned int *)return_value_darrayGet_3);
    if(!((contig_array + (signed long int)ctg)->flag == 0))
      return (char)0;

    (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
    unsigned int return_value_getTwinCtg_4;
    return_value_getTwinCtg_4=getTwinCtg(ctg);
    (contig_array + (signed long int)return_value_getTwinCtg_4)->flag = (unsigned char)1;
  }
  return (char)1;
}

// checkUnique
// file orderContig.c line 1357
static char checkUnique(unsigned int node, double tolerance)
{
  struct connection *ite_cnt;
  unsigned int currNode;
  signed int distance;
  signed int popCounter = 0;
  char flag;
  currNode = node;
  struct fibheap *heap;
  heap=newFibHeap();
  putNodeIntoSubgraph(heap, 0, currNode, 0);
  nodeCounter_link1 = 1;
  ite_cnt = (contig_array + (signed long int)currNode)->downwardConnect;
  _Bool tmp_if_expr_1;
  while(!(ite_cnt == ((struct connection *)NULL)))
  {
    if(!(ite_cnt->deleted == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      ite_cnt = ite_cnt->next;

    else
    {
      currNode = ite_cnt->contigID;
      distance = (signed int)((unsigned int)ite_cnt->gapLen + (contig_array + (signed long int)currNode)->length);
      flag=putNodeIntoSubgraph(heap, distance, currNode, nodeCounter_link1);
      if(!((signed int)flag >= 0))
      {
        destroyHeap(heap);
        return (char)0;
      }

      if((signed int)flag >= 1)
        nodeCounter_link1 = nodeCounter_link1 + 1;

      flag=putChainIntoSubgraph(heap, distance, currNode, &nodeCounter_link1, ite_cnt);
      if(flag == 0)
      {
        destroyHeap(heap);
        return (char)0;
      }

      ite_cnt = ite_cnt->next;
    }
  }
  signed int tmp_post_2;
  if(!(nodeCounter_link1 >= 3))
  {
    destroyHeap(heap);
    return (char)1;
  }

  else
  {
    do
    {
      currNode=removeNextNodeFromHeap(heap);
      if(currNode == 0u)
        break;

      tmp_post_2 = popCounter;
      popCounter = popCounter + 1;
      nodesInSubInOrder[(signed long int)tmp_post_2] = currNode;
    }
    while((_Bool)1);
    destroyHeap(heap);
    flag=checkOverlapInBetween(tolerance);
    return flag;
  }
}

// check_iden_kmerList
// file node2edge.c line 442
static signed int check_iden_kmerList(struct stack *stack1, struct stack *stack2)
{
  struct kmer_pt *ite1;
  struct kmer_pt *ite2;
  _Bool tmp_if_expr_1;
  if(stack1->item_c == 0)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(stack2->item_c != 0) ? (_Bool)1 : (_Bool)0;
  void *return_value_stackPop_2;
  void *return_value_stackPop_3;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_1)
    return 0;

  else
  {
    do
    {
      return_value_stackPop_2=stackPop(stack1);
      ite1 = (struct kmer_pt *)return_value_stackPop_2;
      if(ite1 == ((struct kmer_pt *)NULL))
        break;

      return_value_stackPop_3=stackPop(stack2);
      ite2 = (struct kmer_pt *)return_value_stackPop_3;
      if(ite2 == ((struct kmer_pt *)NULL))
        break;

      if(!(ite1->kmer == ite2->kmer))
        return 0;

    }
    while((_Bool)1);
    if(!(stack1->item_c == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = stack2->item_c != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      return 0;

    else
      return 1;
  }
}

// check_link2next
// file kmer.c line 44
extern unsigned char check_link2next(struct node *node, char ch)
{
  return (unsigned char)((signed int)filter_array[(signed long int)(signed int)ch] & (signed int)node->links);
}

// check_link2prev
// file kmer.c line 68
extern unsigned char check_link2prev(struct node *node, char ch)
{
  return (unsigned char)((signed int)filter_array[(signed long int)((signed int)ch + 4)] & (signed int)node->links);
}

// check_linkB2next
// file kmer.c line 39
unsigned char check_linkB2next(struct node *node, char ch)
{
  return (unsigned char)((signed int)filter_array[(signed long int)(signed int)ch] & (signed int)node->linksB);
}

// check_linkB2prev
// file kmer.c line 63
unsigned char check_linkB2prev(struct node *node, char ch)
{
  return (unsigned char)((signed int)filter_array[(signed long int)((signed int)ch + 4)] & (signed int)node->linksB);
}

// chopKmer4Ctg
// file localAsm.c line 89
static void chopKmer4Ctg(unsigned long long int *kmerCtg, signed int lenCtg, signed int overlap, char *src_seq, unsigned long long int WORDF)
{
  signed int index;
  signed int j;
  unsigned long long int word = (unsigned long long int)0;
  index = 0;
  for( ; !(index >= overlap); index = index + 1)
  {
    word = word << 2;
    word = word + (unsigned long long int)src_seq[(signed long int)index];
  }
  index = 0;
  signed int tmp_post_1 = index;
  index = index + 1;
  kmerCtg[(signed long int)tmp_post_1] = word;
  j = 1;
  signed int tmp_post_2;
  for( ; lenCtg + -overlap >= j; j = j + 1)
  {
    word=nextKmerLocal(word, src_seq[(signed long int)((j - 1) + overlap)], WORDF);
    tmp_post_2 = index;
    index = index + 1;
    kmerCtg[(signed long int)tmp_post_2] = word;
  }
}

// chopKmer4read
// file localAsm.c line 110
static void chopKmer4read(signed int len_seq, signed int overlap, char *src_seq, char *bal_seq, unsigned long long int *kmerBuffer, char *prevcBuffer, char *nextcBuffer, signed int *kmer_c, unsigned long long int WORDF)
{
  signed int j;
  signed int bal_j;
  unsigned long long int word;
  unsigned long long int bal_word;
  signed int index;
  char InvalidCh = (char)4;
  signed int tmp_post_1;
  signed int tmp_post_2;
  signed int tmp_post_3;
  signed int tmp_post_4;
  signed int tmp_post_5;
  if(!(len_seq >= 1 + overlap))
    *kmer_c = 0;

  else
  {
    word = (unsigned long long int)0;
    index = 0;
    for( ; !(index >= overlap); index = index + 1)
    {
      word = word << 2;
      word = word + (unsigned long long int)src_seq[(signed long int)index];
    }
    reverseComplementSeq(src_seq, len_seq, bal_seq);
    bal_word=reverseComplement(word, overlap);
    bal_j = (len_seq - 0) - overlap;
    index = 0;
    if(!(word >= bal_word))
    {
      kmerBuffer[(signed long int)index] = word;
      prevcBuffer[(signed long int)index] = InvalidCh;
      tmp_post_1 = index;
      index = index + 1;
      nextcBuffer[(signed long int)tmp_post_1] = src_seq[(signed long int)(0 + overlap)];
    }

    else
    {
      kmerBuffer[(signed long int)index] = bal_word;
      prevcBuffer[(signed long int)index] = bal_seq[(signed long int)(bal_j - 1)];
      tmp_post_2 = index;
      index = index + 1;
      nextcBuffer[(signed long int)tmp_post_2] = InvalidCh;
    }
    j = 1;
    for( ; len_seq + -overlap >= j; j = j + 1)
    {
      word=nextKmerLocal(word, src_seq[(signed long int)((j - 1) + overlap)], WORDF);
      bal_j = (len_seq - j) - overlap;
      bal_word=prevKmerLocal(bal_word, bal_seq[(signed long int)bal_j], overlap);
      if(!(word >= bal_word))
      {
        kmerBuffer[(signed long int)index] = word;
        prevcBuffer[(signed long int)index] = src_seq[(signed long int)(j - 1)];
        if(!(j >= len_seq + -overlap))
        {
          tmp_post_3 = index;
          index = index + 1;
          nextcBuffer[(signed long int)tmp_post_3] = src_seq[(signed long int)(j + overlap)];
        }

        else
        {
          tmp_post_4 = index;
          index = index + 1;
          nextcBuffer[(signed long int)tmp_post_4] = InvalidCh;
        }
      }

      else
      {
        kmerBuffer[(signed long int)index] = bal_word;
        if(bal_j >= 1)
          prevcBuffer[(signed long int)index] = bal_seq[(signed long int)(bal_j - 1)];

        else
          prevcBuffer[(signed long int)index] = InvalidCh;
        tmp_post_5 = index;
        index = index + 1;
        nextcBuffer[(signed long int)tmp_post_5] = bal_seq[(signed long int)(bal_j + overlap)];
      }
    }
    *kmer_c = index;
  }
}

// chopKmer4read_link1
// file prlHashCtg.c line 162
static void chopKmer4read_link1(signed int t, signed int threadID)
{
  char *src_seq = seqBuffer + (signed long int)seqBreakers[(signed long int)t];
  char *bal_seq = rcSeq[(signed long int)threadID];
  signed int len_seq = lenBuffer[(signed long int)t];
  signed int j_link1;
  signed int bal_j_link1;
  unsigned long long int hash_ban;
  unsigned long long int bal_hash_ban;
  unsigned long long int word_link1;
  unsigned long long int bal_word_link1;
  signed int index_link1;
  word_link1 = (unsigned long long int)0;
  index_link1 = 0;
  for( ; !(index_link1 >= overlaplen); index_link1 = index_link1 + 1)
  {
    word_link1 = word_link1 << 2;
    word_link1 = word_link1 + (unsigned long long int)src_seq[(signed long int)index_link1];
  }
  reverseComplementSeq(src_seq, len_seq, bal_seq);
  bal_word_link1=reverseComplement(word_link1, overlaplen);
  bal_j_link1 = (len_seq - 0) - overlaplen;
  index_link1 = (signed int)indexArray[(signed long int)t];
  signed int tmp_post_1_link1;
  signed int tmp_post_2_link1;
  if(!(word_link1 >= bal_word_link1))
  {
    hash_ban=hash_kmer(word_link1);
    kmerBuffer[(signed long int)index_link1] = word_link1;
    hashBanBuffer[(signed long int)index_link1] = hash_ban;
    tmp_post_1_link1 = index_link1;
    index_link1 = index_link1 + 1;
    smallerBuffer[(signed long int)tmp_post_1_link1] = (char)1;
  }

  else
  {
    bal_hash_ban=hash_kmer(bal_word_link1);
    kmerBuffer[(signed long int)index_link1] = bal_word_link1;
    hashBanBuffer[(signed long int)index_link1] = bal_hash_ban;
    tmp_post_2_link1 = index_link1;
    index_link1 = index_link1 + 1;
    smallerBuffer[(signed long int)tmp_post_2_link1] = (char)0;
  }
  j_link1 = 1;
  signed int tmp_post_3_link1;
  signed int tmp_post_4_link1;
  for( ; len_seq + -overlaplen >= j_link1; j_link1 = j_link1 + 1)
  {
    word_link1=nextKmer(word_link1, src_seq[(signed long int)((j_link1 - 1) + overlaplen)]);
    bal_j_link1 = (len_seq - j_link1) - overlaplen;
    bal_word_link1=prevKmer(bal_word_link1, bal_seq[(signed long int)bal_j_link1]);
    if(!(word_link1 >= bal_word_link1))
    {
      hash_ban=hash_kmer(word_link1);
      kmerBuffer[(signed long int)index_link1] = word_link1;
      hashBanBuffer[(signed long int)index_link1] = hash_ban;
      tmp_post_3_link1 = index_link1;
      index_link1 = index_link1 + 1;
      smallerBuffer[(signed long int)tmp_post_3_link1] = (char)1;
    }

    else
    {
      bal_hash_ban=hash_kmer(bal_word_link1);
      kmerBuffer[(signed long int)index_link1] = bal_word_link1;
      hashBanBuffer[(signed long int)index_link1] = bal_hash_ban;
      tmp_post_4_link1 = index_link1;
      index_link1 = index_link1 + 1;
      smallerBuffer[(signed long int)tmp_post_4_link1] = (char)0;
    }
  }
}

// chopKmer4read_link2
// file prlHashReads.c line 149
static void chopKmer4read_link2(signed int t_link1, signed int threadID_link1)
{
  char *src_seq_link1 = seqBuffer_link1[(signed long int)t_link1];
  char *bal_seq_link1 = rcSeq_link1[(signed long int)threadID_link1];
  signed int len_seq_link1 = lenBuffer_link1[(signed long int)t_link1];
  signed int j_link2;
  signed int bal_j_link2;
  unsigned long long int hash_ban_link1;
  unsigned long long int bal_hash_ban_link1;
  unsigned long long int word_link2;
  unsigned long long int bal_word_link2;
  signed int index_link2;
  char InvalidCh_link1 = (char)4;
  word_link2 = (unsigned long long int)0;
  index_link2 = 0;
  for( ; !(index_link2 >= overlaplen); index_link2 = index_link2 + 1)
  {
    word_link2 = word_link2 << 2;
    word_link2 = word_link2 + (unsigned long long int)src_seq_link1[(signed long int)index_link2];
  }
  reverseComplementSeq(src_seq_link1, len_seq_link1, bal_seq_link1);
  bal_word_link2=reverseComplement(word_link2, overlaplen);
  bal_j_link2 = (len_seq_link1 - 0) - overlaplen;
  index_link2 = indexArray_link1[(signed long int)t_link1];
  signed int tmp_post_1_link2;
  signed int tmp_post_2_link2;
  if(!(word_link2 >= bal_word_link2))
  {
    hash_ban_link1=hash_kmer(word_link2);
    hashBanBuffer_link1[(signed long int)index_link2] = hash_ban_link1;
    kmerBuffer_link1[(signed long int)index_link2] = word_link2;
    prevcBuffer[(signed long int)index_link2] = InvalidCh_link1;
    tmp_post_1_link2 = index_link2;
    index_link2 = index_link2 + 1;
    nextcBuffer[(signed long int)tmp_post_1_link2] = src_seq_link1[(signed long int)(0 + overlaplen)];
  }

  else
  {
    bal_hash_ban_link1=hash_kmer(bal_word_link2);
    hashBanBuffer_link1[(signed long int)index_link2] = bal_hash_ban_link1;
    kmerBuffer_link1[(signed long int)index_link2] = bal_word_link2;
    prevcBuffer[(signed long int)index_link2] = bal_seq_link1[(signed long int)(bal_j_link2 - 1)];
    tmp_post_2_link2 = index_link2;
    index_link2 = index_link2 + 1;
    nextcBuffer[(signed long int)tmp_post_2_link2] = InvalidCh_link1;
  }
  j_link2 = 1;
  signed int tmp_post_3_link2;
  signed int tmp_post_4_link2;
  signed int tmp_post_5_link1;
  for( ; len_seq_link1 + -overlaplen >= j_link2; j_link2 = j_link2 + 1)
  {
    word_link2=nextKmer(word_link2, src_seq_link1[(signed long int)((j_link2 - 1) + overlaplen)]);
    bal_j_link2 = (len_seq_link1 - j_link2) - overlaplen;
    bal_word_link2=prevKmer(bal_word_link2, bal_seq_link1[(signed long int)bal_j_link2]);
    if(!(word_link2 >= bal_word_link2))
    {
      hash_ban_link1=hash_kmer(word_link2);
      hashBanBuffer_link1[(signed long int)index_link2] = hash_ban_link1;
      kmerBuffer_link1[(signed long int)index_link2] = word_link2;
      prevcBuffer[(signed long int)index_link2] = src_seq_link1[(signed long int)(j_link2 - 1)];
      if(!(j_link2 >= len_seq_link1 + -overlaplen))
      {
        tmp_post_3_link2 = index_link2;
        index_link2 = index_link2 + 1;
        nextcBuffer[(signed long int)tmp_post_3_link2] = src_seq_link1[(signed long int)(j_link2 + overlaplen)];
      }

      else
      {
        tmp_post_4_link2 = index_link2;
        index_link2 = index_link2 + 1;
        nextcBuffer[(signed long int)tmp_post_4_link2] = InvalidCh_link1;
      }
    }

    else
    {
      bal_hash_ban_link1=hash_kmer(bal_word_link2);
      hashBanBuffer_link1[(signed long int)index_link2] = bal_hash_ban_link1;
      kmerBuffer_link1[(signed long int)index_link2] = bal_word_link2;
      if(bal_j_link2 >= 1)
        prevcBuffer[(signed long int)index_link2] = bal_seq_link1[(signed long int)(bal_j_link2 - 1)];

      else
        prevcBuffer[(signed long int)index_link2] = InvalidCh_link1;
      tmp_post_5_link1 = index_link2;
      index_link2 = index_link2 + 1;
      nextcBuffer[(signed long int)tmp_post_5_link1] = bal_seq_link1[(signed long int)(bal_j_link2 + overlaplen)];
    }
  }
}

// chopKmer4read_link3
// file prlRead2Ctg.c line 146
static void chopKmer4read_link3(signed int t_link2, signed int threadID_link2)
{
  signed int len_seq_link2 = lenBuffer_link2[(signed long int)t_link2];
  signed int tmp_post_1_link3;
  signed int tmp_post_2_link3;
  signed int tmp_post_3_link3;
  signed int tmp_post_4_link3;
  if(len_seq_link2 >= 1 + overlaplen)
  {
    char *src_seq_link2 = seqBuffer_link2[(signed long int)t_link2];
    char *bal_seq_link2 = rcSeq_link2[(signed long int)threadID_link2];
    signed int j_link3;
    signed int bal_j_link3;
    unsigned long long int hash_ban_link2;
    unsigned long long int bal_hash_ban_link2;
    unsigned long long int word_link3;
    unsigned long long int bal_word_link3;
    signed int index_link3;
    word_link3 = (unsigned long long int)0;
    index_link3 = 0;
    for( ; !(index_link3 >= overlaplen); index_link3 = index_link3 + 1)
    {
      word_link3 = word_link3 << 2;
      word_link3 = word_link3 + (unsigned long long int)src_seq_link2[(signed long int)index_link3];
    }
    reverseComplementSeq(src_seq_link2, len_seq_link2, bal_seq_link2);
    bal_word_link3=reverseComplement(word_link3, overlaplen);
    bal_j_link3 = (len_seq_link2 - 0) - overlaplen;
    index_link3 = (signed int)indexArray_link2[(signed long int)t_link2];
    if(!(word_link3 >= bal_word_link3))
    {
      hash_ban_link2=hash_kmer(word_link3);
      kmerBuffer_link2[(signed long int)index_link3] = word_link3;
      smallerBuffer_link1[(signed long int)index_link3] = (char)1;
      tmp_post_1_link3 = index_link3;
      index_link3 = index_link3 + 1;
      hashBanBuffer_link2[(signed long int)tmp_post_1_link3] = hash_ban_link2;
    }

    else
    {
      bal_hash_ban_link2=hash_kmer(bal_word_link3);
      kmerBuffer_link2[(signed long int)index_link3] = bal_word_link3;
      smallerBuffer_link1[(signed long int)index_link3] = (char)0;
      tmp_post_2_link3 = index_link3;
      index_link3 = index_link3 + 1;
      hashBanBuffer_link2[(signed long int)tmp_post_2_link3] = bal_hash_ban_link2;
    }
    j_link3 = 1;
    for( ; len_seq_link2 + -overlaplen >= j_link3; j_link3 = j_link3 + 1)
    {
      word_link3=nextKmer(word_link3, src_seq_link2[(signed long int)((j_link3 - 1) + overlaplen)]);
      bal_j_link3 = (len_seq_link2 - j_link3) - overlaplen;
      bal_word_link3=prevKmer(bal_word_link3, bal_seq_link2[(signed long int)bal_j_link3]);
      if(!(word_link3 >= bal_word_link3))
      {
        hash_ban_link2=hash_kmer(word_link3);
        kmerBuffer_link2[(signed long int)index_link3] = word_link3;
        smallerBuffer_link1[(signed long int)index_link3] = (char)1;
        tmp_post_3_link3 = index_link3;
        index_link3 = index_link3 + 1;
        hashBanBuffer_link2[(signed long int)tmp_post_3_link3] = hash_ban_link2;
      }

      else
      {
        bal_hash_ban_link2=hash_kmer(bal_word_link3);
        kmerBuffer_link2[(signed long int)index_link3] = bal_word_link3;
        smallerBuffer_link1[(signed long int)index_link3] = (char)0;
        tmp_post_4_link3 = index_link3;
        index_link3 = index_link3 + 1;
        hashBanBuffer_link2[(signed long int)tmp_post_4_link3] = bal_hash_ban_link2;
      }
    }
  }

}

// chopKmer4read_link4
// file prlRead2path.c line 195
static void chopKmer4read_link4(signed int t_link3, signed int threadID_link3)
{
  char *src_seq_link3 = seqBuffer_link3[(signed long int)t_link3];
  char *bal_seq_link3 = rcSeq_link3[(signed long int)threadID_link3];
  signed int len_seq_link3 = lenBuffer_link3[(signed long int)t_link3];
  signed int j_link4;
  signed int bal_j_link4;
  unsigned long long int hash_ban_link3;
  unsigned long long int bal_hash_ban_link3;
  unsigned long long int word_link4;
  unsigned long long int bal_word_link4;
  signed int index_link4;
  word_link4 = (unsigned long long int)0;
  index_link4 = 0;
  for( ; !(index_link4 >= overlaplen); index_link4 = index_link4 + 1)
  {
    word_link4 = word_link4 << 2;
    word_link4 = word_link4 + (unsigned long long int)src_seq_link3[(signed long int)index_link4];
  }
  reverseComplementSeq(src_seq_link3, len_seq_link3, bal_seq_link3);
  bal_word_link4=reverseComplement(word_link4, overlaplen);
  bal_j_link4 = (len_seq_link3 - 0) - overlaplen;
  index_link4 = indexArray_link3[(signed long int)t_link3];
  signed int tmp_post_1_link4;
  signed int tmp_post_2_link4;
  if(!(word_link4 >= bal_word_link4))
  {
    hash_ban_link3=hash_kmer(word_link4);
    kmerBuffer_link3[(signed long int)index_link4] = word_link4;
    smallerBuffer_link2[(signed long int)index_link4] = (char)1;
    tmp_post_1_link4 = index_link4;
    index_link4 = index_link4 + 1;
    hashBanBuffer_link3[(signed long int)tmp_post_1_link4] = hash_ban_link3;
  }

  else
  {
    bal_hash_ban_link3=hash_kmer(bal_word_link4);
    kmerBuffer_link3[(signed long int)index_link4] = bal_word_link4;
    smallerBuffer_link2[(signed long int)index_link4] = (char)0;
    tmp_post_2_link4 = index_link4;
    index_link4 = index_link4 + 1;
    hashBanBuffer_link3[(signed long int)tmp_post_2_link4] = bal_hash_ban_link3;
  }
  j_link4 = 1;
  signed int tmp_post_3_link4;
  signed int tmp_post_4_link4;
  for( ; len_seq_link3 + -overlaplen >= j_link4; j_link4 = j_link4 + 1)
  {
    word_link4=nextKmer(word_link4, src_seq_link3[(signed long int)((j_link4 - 1) + overlaplen)]);
    bal_j_link4 = (len_seq_link3 - j_link4) - overlaplen;
    bal_word_link4=prevKmer(bal_word_link4, bal_seq_link3[(signed long int)bal_j_link4]);
    if(!(word_link4 >= bal_word_link4))
    {
      hash_ban_link3=hash_kmer(word_link4);
      kmerBuffer_link3[(signed long int)index_link4] = word_link4;
      smallerBuffer_link2[(signed long int)index_link4] = (char)1;
      tmp_post_3_link4 = index_link4;
      index_link4 = index_link4 + 1;
      hashBanBuffer_link3[(signed long int)tmp_post_3_link4] = hash_ban_link3;
    }

    else
    {
      bal_hash_ban_link3=hash_kmer(bal_word_link4);
      kmerBuffer_link3[(signed long int)index_link4] = bal_word_link4;
      smallerBuffer_link2[(signed long int)index_link4] = (char)0;
      tmp_post_4_link4 = index_link4;
      index_link4 = index_link4 + 1;
      hashBanBuffer_link3[(signed long int)tmp_post_4_link4] = bal_hash_ban_link3;
    }
  }
}

// chopReadFillGap
// file localAsm.c line 1464
static char chopReadFillGap(signed int len_seq, signed int overlap, char *src_seq, char *bal_seq, struct kmerSet_st *kset, unsigned long long int WORDF, signed int *start, signed int *end, char *bal, unsigned long long int *KmerCtg1, signed int len1, unsigned long long int *KmerCtg2, signed int len2, signed int *index1, signed int *index2)
{
  signed int index;
  signed int j = 0;
  signed int bal_j;
  unsigned long long int word;
  unsigned long long int bal_word;
  signed int flag = 0;
  signed int bal_flag = 0;
  signed int ctg1start;
  signed int bal_ctg1start;
  signed int ctg2end;
  signed int bal_ctg2end;
  signed int seqStart;
  signed int bal_start;
  signed int seqEnd;
  signed int bal_end;
  struct kmer_st *node;
  char found;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  if(!(len_seq >= 1 + overlap))
    return (char)0;

  else
  {
    word = (unsigned long long int)0;
    index = 0;
    for( ; !(index >= overlap); index = index + 1)
    {
      word = word << 2;
      word = word + (unsigned long long int)src_seq[(signed long int)index];
    }
    reverseComplementSeq(src_seq, len_seq, bal_seq);
    bal_word=reverseComplement(word, overlap);
    bal_j = (len_seq - 0) - overlap;
    bal_flag = 0;
    flag = bal_flag;
    if(!(word >= bal_word))
    {
      signed int return_value_search_kmerset_1;
      return_value_search_kmerset_1=search_kmerset(kset, word, &node);
      found = (char)return_value_search_kmerset_1;
    }

    else
    {
      signed int return_value_search_kmerset_2;
      return_value_search_kmerset_2=search_kmerset(kset, bal_word, &node);
      found = (char)return_value_search_kmerset_2;
    }
    if(!(found == 0))
    {
      if(node->linear == 0u)
      {
        if(node->checked == 0u)
        {
          if(flag == 0)
          {
            if((signed int)node->inEdge == 1)
            {
              ctg1start=searchKmerOnCtg(word, KmerCtg1, len1);
              if(ctg1start >= 0)
              {
                flag = 1;
                seqStart = (j + overlap) - 1;
              }

            }

          }

          if(bal_flag == 0)
          {
            if((signed int)node->inEdge == 2)
            {
              bal_ctg2end=searchKmerOnCtg(bal_word, KmerCtg2, len2);
              if(bal_ctg2end >= 0)
              {
                bal_flag = 2;
                bal_end = (bal_j + overlap) - 1;
              }

            }

          }

        }

      }

    }

    j = 1;
    for( ; len_seq + -overlap >= j; j = j + 1)
    {
      word=nextKmerLocal(word, src_seq[(signed long int)((j - 1) + overlap)], WORDF);
      bal_j = (len_seq - j) - overlap;
      bal_word=prevKmerLocal(bal_word, bal_seq[(signed long int)bal_j], overlap);
      if(!(word >= bal_word))
      {
        signed int return_value_search_kmerset_3;
        return_value_search_kmerset_3=search_kmerset(kset, word, &node);
        found = (char)return_value_search_kmerset_3;
      }

      else
      {
        signed int return_value_search_kmerset_4;
        return_value_search_kmerset_4=search_kmerset(kset, bal_word, &node);
        found = (char)return_value_search_kmerset_4;
      }
      if(!(found == 0))
      {
        if(node->linear == 0u)
        {
          if(node->checked == 0u)
          {
            if(flag == 0)
              tmp_if_expr_6 = (signed int)node->inEdge == 1 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_6 = (_Bool)0;
            if(tmp_if_expr_6)
            {
              ctg1start=searchKmerOnCtg(word, KmerCtg1, len1);
              if(ctg1start >= 0)
              {
                flag = 1;
                seqStart = (j + overlap) - 1;
              }

            }

            else
            {
              if(flag == 1)
                tmp_if_expr_5 = (signed int)node->inEdge == 1 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_5 = (_Bool)0;
              if(tmp_if_expr_5)
              {
                index=searchKmerOnCtg(word, KmerCtg1, len1);
                if(index >= 0 && !(ctg1start >= index))
                {
                  ctg1start = index;
                  seqStart = (j + overlap) - 1;
                }

              }

              else
                if(flag == 1)
                {
                  if((signed int)node->inEdge == 2)
                  {
                    ctg2end=searchKmerOnCtg(word, KmerCtg2, len2);
                    if(ctg2end >= 0)
                    {
                      flag = 3;
                      seqEnd = (j + overlap) - 1;
                      break;
                    }

                  }

                }

            }
            if(bal_flag == 0)
              tmp_if_expr_8 = (signed int)node->inEdge == 2 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_8 = (_Bool)0;
            if(tmp_if_expr_8)
            {
              bal_ctg2end=searchKmerOnCtg(bal_word, KmerCtg2, len2);
              if(bal_ctg2end >= 0)
              {
                bal_flag = 2;
                bal_end = (bal_j + overlap) - 1;
              }

            }

            else
            {
              if(bal_flag == 2)
                tmp_if_expr_7 = (signed int)node->inEdge == 2 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_7 = (_Bool)0;
              if(tmp_if_expr_7)
              {
                index=searchKmerOnCtg(bal_word, KmerCtg2, len2);
                if(index >= 0 && !(index >= bal_ctg2end))
                {
                  bal_ctg2end = index;
                  bal_end = (bal_j + overlap) - 1;
                }

              }

              else
                if(bal_flag == 2)
                {
                  if((signed int)node->inEdge == 1)
                  {
                    bal_ctg1start=searchKmerOnCtg(bal_word, KmerCtg1, len1);
                    if(bal_ctg1start >= 0)
                    {
                      bal_flag = 3;
                      bal_start = (bal_j + overlap) - 1;
                      break;
                    }

                  }

                }

            }
          }

        }

      }

    }
    if(flag == 3)
    {
      *start = seqStart;
      *end = seqEnd;
      *bal = (char)0;
      *index1 = ctg1start;
      *index2 = ctg2end;
      return (char)1;
    }

    else
      if(bal_flag == 3)
      {
        *start = bal_start;
        *end = bal_end;
        *bal = (char)1;
        *index1 = bal_ctg1start;
        *index2 = bal_ctg2end;
        return (char)1;
      }

    return (char)0;
  }
}

// ckalloc
// file check.c line 44
void * ckalloc(unsigned long long int amount)
{
  void *p;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, (unsigned long long int)amount);
  p = (void *)return_value_calloc_1;
  if(p == NULL)
  {
    if(!(amount == 0ul))
    {
      printf("Ran out of memory while applying %lldbytes\n", amount);
      printf("There may be errors as follows:\n");
      printf("1) Not enough memory.\n");
      printf("2) The ARRAY may be overrode.\n");
      printf("3) The wild pointers.\n");
      fflush(stdout);
      exit(-1);
    }

  }

  return p;
}

// ckopen
// file check.c line 28
struct _IO_FILE * ckopen(char *name, char *mode)
{
  struct _IO_FILE *fp;
  fp=fopen(name, mode);
  if(fp == ((struct _IO_FILE *)NULL))
  {
    printf("Cannot open %s. Now exit to system...\n", name);
    exit(-1);
  }

  return fp;
}

// ckrealloc
// file check.c line 64
void * ckrealloc(void *p, unsigned long int new_size, unsigned long int old_size)
{
  void *q;
  q=realloc((void *)p, new_size);
  if(new_size == 0ul || !(q == NULL))
    return q;

  else
  {
    q=ckalloc(new_size);
    bcopy(p, q, old_size);
    free(p);
    return q;
  }
}

// cleanUpRedundancy
// file bubble.c line 1494
static char cleanUpRedundancy()
{
  struct readinterval *slowMarker = slowPath->nextInRead;
  struct readinterval *fastMarker = fastPath->nextInRead;
  unsigned int slowNode;
  unsigned int fastNode;
  signed int slowLength;
  signed int fastLength;
  signed int fastConstraint = 0;
  signed int slowConstraint = 0;
  signed int finalLength;
  attachPath(slowPath);
  attachPath(fastPath);
  mapSlowOntoFast();
  finalLength=mapDistancesOntoPaths();
  fastLength = 0;
  slowLength = fastLength;
  unsigned int return_value_getTwinEdge_3;
  char return_value_markerLeadsToNode_2;
  char return_value_markerLeadsToNode_1;
  while(!(fastMarker == ((struct readinterval *)NULL)) && !(slowMarker == ((struct readinterval *)NULL)))
  {
    if(slowMarker->nextInRead == ((struct readinterval *)NULL))
      slowLength = finalLength;

    else
    {
      slowLength = slowToFastMapping[(signed long int)(slowMarker->bal_rv->start - 1)];
      if(!(slowLength >= slowConstraint))
        slowLength = slowConstraint;

    }
    fastLength = fastMarker->bal_rv->start - 1;
    if(!(fastLength >= fastConstraint))
      fastLength = fastConstraint;

    slowNode = slowMarker->edgeid;
    fastNode = fastMarker->edgeid;
    if(slowNode == fastNode)
    {
      if(!(slowLength >= fastLength))
        slowConstraint = fastLength;

      fastConstraint = slowLength;
      slowMarker = slowMarker->nextInRead;
      fastMarker = fastMarker->nextInRead;
    }

    else
    {
      return_value_getTwinEdge_3=getTwinEdge(fastNode);
      if(slowNode == return_value_getTwinEdge_3)
      {
        if(!(slowLength >= fastLength))
          slowConstraint = fastLength;

        fastConstraint = slowLength;
        slowMarker = slowMarker->nextInRead;
        fastMarker = fastMarker->nextInRead;
      }

      else
      {
        return_value_markerLeadsToNode_2=markerLeadsToNode(slowMarker, fastNode);
        if(!(return_value_markerLeadsToNode_2 == 0))
        {
          reduceSlowNodes(slowMarker, fastNode);
          remapEmptyPathOntoMiddlePath(fastMarker, slowMarker, (char)0);
          for( ; !(slowMarker->edgeid == fastNode); slowMarker = slowMarker->nextInRead)
            ;
        }

        else
        {
          return_value_markerLeadsToNode_1=markerLeadsToNode(fastMarker, slowNode);
          if(!(return_value_markerLeadsToNode_1 == 0))
          {
            remapEmptyPathOntoMiddlePath(slowMarker, fastMarker, (char)1);
            for( ; !(fastMarker->edgeid == slowNode); fastMarker = fastMarker->nextInRead)
              ;
          }

          else
            if(slowLength == fastLength)
            {
              remapNodeOntoNeighbour(slowNode, fastNode);
              slowMarker = slowMarker->nextInRead;
              fastMarker = fastMarker->nextInRead;
            }

            else
              if(!(slowLength >= fastLength))
              {
                remapBackOfNodeOntoNeighbour(fastNode, fastMarker, slowNode, slowMarker, (char)0);
                slowMarker = slowMarker->nextInRead;
              }

              else
              {
                remapBackOfNodeOntoNeighbour(slowNode, slowMarker, fastNode, fastMarker, (char)1);
                fastMarker = fastMarker->nextInRead;
              }
        }
      }
    }
    fflush(stdout);
  }
  detachPath(fastPath);
  detachPath(slowPath);
  return (char)1;
}

// clipTipFromNode
// file cutTipPreGraph.c line 52
static signed int clipTipFromNode(struct kmer_st *node1, signed int cut_len, char THIN)
{
  unsigned char ret = (unsigned char)0;
  unsigned char in_num;
  unsigned char out_num;
  unsigned char link;
  signed int sum;
  signed int count;
  struct kmer_st *out_node;
  unsigned long long int tempKmer;
  unsigned long long int pre_word;
  unsigned long long int word;
  unsigned long long int bal_word;
  unsigned long long int hash_ban;
  char ch1;
  char ch;
  char smaller;
  char found;
  signed int setPicker;
  unsigned int max_links;
  unsigned int singleCvg;
  _Bool tmp_if_expr_1;
  if(!(node1->linear == 0u))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = node1->deleted != 0u ? (_Bool)1 : (_Bool)0;
  signed int return_value_count_branch2next_8;
  signed int return_value_count_branch2next_10;
  if(tmp_if_expr_1)
    return (signed int)ret;

  else
    if(!(THIN == 0))
    {
      if(node1->single != 0u)
        goto __CPROVER_DUMP_L4;

      return (signed int)ret;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      signed int return_value_count_branch2prev_2;
      return_value_count_branch2prev_2=count_branch2prev(node1);
      in_num = (unsigned char)return_value_count_branch2prev_2;
      signed int return_value_count_branch2next_3;
      return_value_count_branch2next_3=count_branch2next(node1);
      out_num = (unsigned char)return_value_count_branch2next_3;
      if((signed int)in_num == 0 && (signed int)out_num == 1)
      {
        pre_word = node1->seq;
        ch1 = (char)0;
        for( ; !((signed int)ch1 >= 4); ch1 = ch1 + 1)
        {
          link = (unsigned char)((unsigned int)((signed int)node1->r_links >> (signed int)ch1 * 6) & 0x3FU);
          if(!(link == 0))
            break;

        }
        word=nextKmer(pre_word, ch1);
      }

      else
        if((signed int)in_num == 1 && (signed int)out_num == 0)
        {
          pre_word=reverseComplement(node1->seq, overlaplen);
          ch1 = (char)0;
          for( ; !((signed int)ch1 >= 4); ch1 = ch1 + 1)
          {
            link = (unsigned char)(node1->l_links >> (signed int)ch1 * 6 & 0x3FU);
            if(!(link == 0))
              break;

          }
          word=nextKmer(pre_word, (char)((signed int)ch1 ^ 0x02));
        }

        else
          return (signed int)ret;
      count = 1;
      bal_word=reverseComplement(word, overlaplen);
      if(!(bal_word >= word))
      {
        tempKmer = bal_word;
        bal_word = word;
        word = tempKmer;
        smaller = (char)0;
      }

      else
        smaller = (char)1;
      hash_ban=hash_kmer(word);
      setPicker = (signed int)(hash_ban % (unsigned long int)thrd_num);
      signed int return_value_search_kmerset_4;
      return_value_search_kmerset_4=search_kmerset(KmerSets[(signed long int)setPicker], word, &out_node);
      found = (char)return_value_search_kmerset_4;
      if(found == 0)
      {
        printf("kmer %llx not found, node1 %llx\n", word, node1->seq);
        exit(1);
      }

      while(!(out_node->linear == 0u))
      {
        count = count + 1;
        if(!(THIN == 0))
        {
          if(out_node->single == 0u)
            break;

        }

        if(!(cut_len >= count))
          return (signed int)ret;

        if(!(smaller == 0))
        {
          pre_word = word;
          ch = (char)0;
          for( ; !((signed int)ch >= 4); ch = ch + 1)
          {
            link = (unsigned char)((unsigned int)((signed int)out_node->r_links >> (signed int)ch * 6) & 0x3FU);
            if(!(link == 0))
              break;

          }
          word=nextKmer(pre_word, ch);
          bal_word=reverseComplement(word, overlaplen);
          if(!(bal_word >= word))
          {
            tempKmer = bal_word;
            bal_word = word;
            word = tempKmer;
            smaller = (char)0;
          }

          else
            smaller = (char)1;
          hash_ban=hash_kmer(word);
          setPicker = (signed int)(hash_ban % (unsigned long int)thrd_num);
          signed int return_value_search_kmerset_5;
          return_value_search_kmerset_5=search_kmerset(KmerSets[(signed long int)setPicker], word, &out_node);
          found = (char)return_value_search_kmerset_5;
          if(found == 0)
          {
            printf("kmer %llx not found, node1 %llx\n", word, node1->seq);
            printf("pre_word %llx with %d(smaller)\n", pre_word, ch);
            exit(1);
          }

        }

        else
        {
          pre_word = bal_word;
          ch = (char)0;
          for( ; !((signed int)ch >= 4); ch = ch + 1)
          {
            link = (unsigned char)(out_node->l_links >> (signed int)ch * 6 & 0x3FU);
            if(!(link == 0))
              break;

          }
          word=nextKmer(pre_word, (char)((signed int)ch ^ 0x02));
          bal_word=reverseComplement(word, overlaplen);
          if(!(bal_word >= word))
          {
            tempKmer = bal_word;
            bal_word = word;
            word = tempKmer;
            smaller = (char)0;
          }

          else
            smaller = (char)1;
          hash_ban=hash_kmer(word);
          setPicker = (signed int)(hash_ban % (unsigned long int)thrd_num);
          signed int return_value_search_kmerset_6;
          return_value_search_kmerset_6=search_kmerset(KmerSets[(signed long int)setPicker], word, &out_node);
          found = (char)return_value_search_kmerset_6;
          if(found == 0)
          {
            printf("kmer %llx not found, node1 %llx\n", word, node1->seq);
            unsigned long long int return_value_reverseComplement_7;
            return_value_reverseComplement_7=reverseComplement(pre_word, overlaplen);
            printf("pre_word %llx with %d(larger)\n", return_value_reverseComplement_7, (char)((signed int)ch ^ 0x02));
            exit(1);
          }

        }
      }
      signed int return_value_count_branch2next_12;
      return_value_count_branch2next_12=count_branch2next(out_node);
      signed int return_value_count_branch2prev_13;
      return_value_count_branch2prev_13=count_branch2prev(out_node);
      sum = return_value_count_branch2next_12 + return_value_count_branch2prev_13;
      if(sum == 1)
      {
        tip_c = tip_c + 1;
        node1->deleted = (unsigned int)1;
        out_node->deleted = (unsigned int)1;
        return 1;
      }

      else
      {
        ch=firstCharInKmer(pre_word);
        if(!(THIN == 0))
        {
          tip_c = tip_c + 1;
          node1->deleted = (unsigned int)1;
          dislink2prevUncertain(out_node, ch, smaller);
          out_node->linear = (unsigned int)0;
          return 1;
        }

        max_links = (unsigned int)0;
        ch1 = (char)0;
        for( ; !((signed int)ch1 >= 4); ch1 = ch1 + 1)
          if(!(smaller == 0))
          {
            singleCvg = out_node->l_links >> (signed int)ch1 * 6 & 0x3FU;
            if(!(max_links >= singleCvg))
              max_links = singleCvg;

          }

          else
          {
            singleCvg = (unsigned int)((signed int)out_node->r_links >> (signed int)ch1 * 6) & 0x3FU;
            if(!(max_links >= singleCvg))
              max_links = singleCvg;

          }
        if(!(smaller == 0))
        {
          if(!((0x3FU & out_node->l_links >> 6 * (signed int)ch) >= max_links))
          {
            tip_c = tip_c + 1;
            node1->deleted = (unsigned int)1;
            dislink2prevUncertain(out_node, ch, smaller);
            signed int return_value_count_branch2prev_9;
            return_value_count_branch2prev_9=count_branch2prev(out_node);
            if(return_value_count_branch2prev_9 == 1)
            {
              return_value_count_branch2next_8=count_branch2next(out_node);
              if(return_value_count_branch2next_8 == 1)
                out_node->linear = (unsigned int)1;

            }

            return 1;
          }

        }

        if(smaller == 0)
        {
          if(!((0x3FU & (unsigned int)((signed int)out_node->r_links >> 6 * (signed int)(2 ^ ch))) >= max_links))
          {
            tip_c = tip_c + 1;
            node1->deleted = (unsigned int)1;
            dislink2prevUncertain(out_node, ch, smaller);
            signed int return_value_count_branch2prev_11;
            return_value_count_branch2prev_11=count_branch2prev(out_node);
            if(return_value_count_branch2prev_11 == 1)
            {
              return_value_count_branch2next_10=count_branch2next(out_node);
              if(return_value_count_branch2next_10 == 1)
                out_node->linear = (unsigned int)1;

            }

            return 1;
          }

        }

      }
      return 0;
    }
}

// closeFp1InLab
// file readseq1by1.c line 402
static void closeFp1InLab(signed int libNo)
{
  signed int ftype = (lib_array + (signed long int)libNo)->curr_type;
  signed int index = (lib_array + (signed long int)libNo)->curr_index - 1;
  char *fname;
  if(ftype == 1)
    fname = (lib_array + (signed long int)libNo)->a1_fname[(signed long int)index];

  else
    if(ftype == 2)
      fname = (lib_array + (signed long int)libNo)->q1_fname[(signed long int)index];

    else
      if(ftype == 3)
        fname = (lib_array + (signed long int)libNo)->p_fname[(signed long int)index];

      else
        if(ftype == 4)
          fname = (lib_array + (signed long int)libNo)->s_a_fname[(signed long int)index];

        else
          if(ftype == 5)
            fname = (lib_array + (signed long int)libNo)->s_q_fname[(signed long int)index];

          else
            goto __CPROVER_DUMP_L11;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(fname);
  _Bool tmp_if_expr_5;
  signed int tmp_statement_expression_2;
  if(return_value_strlen_1 >= 4ul)
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(fname);
    signed int return_value___builtin_strcmp_4;
    return_value___builtin_strcmp_4=__builtin_strcmp((fname + (signed long int)return_value_strlen_3) - (signed long int)3, ".gz");
    tmp_statement_expression_2 = return_value___builtin_strcmp_4;
    tmp_if_expr_5 = tmp_statement_expression_2 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  if(tmp_if_expr_5)
    pclose((lib_array + (signed long int)libNo)->fp1);

  else
    fclose((lib_array + (signed long int)libNo)->fp1);

__CPROVER_DUMP_L11:
  ;
}

// closeFp2InLab
// file readseq1by1.c line 427
static void closeFp2InLab(signed int libNo)
{
  signed int ftype = (lib_array + (signed long int)libNo)->curr_type;
  signed int index = (lib_array + (signed long int)libNo)->curr_index - 1;
  char *fname;
  if(ftype == 1)
    fname = (lib_array + (signed long int)libNo)->a2_fname[(signed long int)index];

  else
    if(ftype == 2)
      fname = (lib_array + (signed long int)libNo)->q2_fname[(signed long int)index];

    else
      goto __CPROVER_DUMP_L8;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(fname);
  _Bool tmp_if_expr_5;
  signed int tmp_statement_expression_2;
  if(return_value_strlen_1 >= 4ul)
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(fname);
    signed int return_value___builtin_strcmp_4;
    return_value___builtin_strcmp_4=__builtin_strcmp((fname + (signed long int)return_value_strlen_3) - (signed long int)3, ".gz");
    tmp_statement_expression_2 = return_value___builtin_strcmp_4;
    tmp_if_expr_5 = tmp_statement_expression_2 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  if(tmp_if_expr_5)
    pclose((lib_array + (signed long int)libNo)->fp2);

  else
    fclose((lib_array + (signed long int)libNo)->fp2);

__CPROVER_DUMP_L8:
  ;
}

// cmp_ctg
// file orderContig.c line 3334
static signed int cmp_ctg(const void *a, const void *b)
{
  struct ctg4heap *A;
  struct ctg4heap *B;
  A = (struct ctg4heap *)a;
  B = (struct ctg4heap *)b;
  if(!(B->dis >= A->dis))
    return 1;

  else
    if(A->dis == B->dis)
      return 0;

    else
      return -1;
}

// cmp_edge
// file output_contig.c line 107
signed int cmp_edge(const void *a, const void *b)
{
  struct edge *A;
  struct edge *B;
  A = (struct edge *)a;
  B = (struct edge *)b;
  if(!(B->length >= A->length))
    return 1;

  else
    if(A->length == B->length)
      return 0;

    else
      return -1;
}

// cmp_int
// file inc/extfunc.h line 91
extern signed int cmp_int(const void *a, const void *b)
{
  signed int *A;
  signed int *B;
  A = (signed int *)a;
  B = (signed int *)b;
  if(!(*B >= *A))
    return 1;

  else
    if(*A == *B)
      return 0;

    else
      return -1;
}

// cmp_lib
// file lib.c line 64
static signed int cmp_lib(const void *a, const void *b)
{
  struct lib_info *A;
  struct lib_info *B;
  A = (struct lib_info *)a;
  B = (struct lib_info *)b;
  if(!(B->avg_ins >= A->avg_ins))
    return 1;

  else
    if(A->avg_ins == B->avg_ins)
      return 0;

    else
      return -1;
}

// cmp_pe
// file attachPEinfo.c line 42
static signed int cmp_pe(const void *a, const void *b)
{
  struct pe_info *A;
  struct pe_info *B;
  A = (struct pe_info *)a;
  B = (struct pe_info *)b;
  if(!(B->rank >= A->rank))
    return 1;

  else
    if(A->rank == B->rank)
      return 0;

    else
      return -1;
}

// cmp_reads
// file prlReadFillGap.c line 280
static signed int cmp_reads(const void *a, const void *b)
{
  struct read_nearby *A;
  struct read_nearby *B;
  A = (struct read_nearby *)a;
  B = (struct read_nearby *)b;
  if(!(B->dis >= A->dis))
    return 1;

  else
    if(A->dis == B->dis)
      return 0;

    else
      return -1;
}

// cmp_vertex
// file loadPreGraph.c line 30
extern signed int cmp_vertex(const void *a, const void *b)
{
  struct vertex *A;
  struct vertex *B;
  A = (struct vertex *)a;
  B = (struct vertex *)b;
  if(!(B->kmer >= A->kmer))
    return 1;

  else
    if(A->kmer == B->kmer)
      return 0;

    else
      return -1;
}

// cntByReads
// file splitReps.c line 108
static signed long long int cntByReads(unsigned int left, unsigned int middle, unsigned int right)
{
  signed int markNum;
  signed long long int *marklist;
  if(!((edge_array + (signed long int)left)->markers == ((signed long long int *)NULL)))
  {
    markNum = (signed int)(edge_array + (signed long int)left)->multi;
    marklist = (edge_array + (signed long int)left)->markers;
  }

  else
    return (signed long long int)0;
  signed int index;
  signed long long int readid;
  index = 0;
  char return_value_readOnEdge_1;
  for( ; !(index >= markNum); index = index + 1)
  {
    readid = marklist[(signed long int)index];
    char return_value_readOnEdge_2;
    return_value_readOnEdge_2=readOnEdge(readid, middle);
    if(!(return_value_readOnEdge_2 == 0))
    {
      return_value_readOnEdge_1=readOnEdge(readid, right);
      if(!(return_value_readOnEdge_1 == 0))
        return readid;

    }

  }
  return (signed long long int)0;
}

// combineCOV
// file bubble.c line 910
static void combineCOV(unsigned int source, signed int len_s, unsigned int target, signed int len_t)
{
  if(len_s >= 1 && len_t >= 1)
  {
    signed int cov = (len_s * (signed int)(edge_array + (signed long int)source)->cvg + len_t * (signed int)(edge_array + (signed long int)target)->cvg) / len_t;
    (edge_array + (signed long int)target)->cvg = (unsigned short int)(cov > 16000 ? 16000 : cov);
    unsigned int return_value_getTwinEdge_1;
    return_value_getTwinEdge_1=getTwinEdge(target);
    (edge_array + (signed long int)return_value_getTwinEdge_1)->cvg = (unsigned short int)(cov > 16000 ? 16000 : cov);
  }

}

// compactEdgeArray
// file compactEdge.c line 89
extern void compactEdgeArray()
{
  unsigned int i;
  unsigned int validCounter = (unsigned int)0;
  unsigned int bal_ed;
  printf("there're %d edges\n", num_ed);
  i = (unsigned int)1;
  for( ; num_ed >= i; i = i + 1u)
    if((edge_array + (signed long int)i)->deleted == 0)
    {
      validCounter = validCounter + 1u;
      if(!(i == validCounter))
      {
        bal_ed=getTwinEdge(i);
        edgeMove(i, validCounter);
        if(!(bal_ed == i))
        {
          i = i + 1u;
          validCounter = validCounter + 1u;
        }

      }

    }

  num_ed = validCounter;
  printf("after compacting %d edges left\n", num_ed);
}

// comparePaths
// file bubble.c line 1653
static void comparePaths(unsigned int destination, unsigned int origin)
{
  signed int slowLength;
  signed int fastLength;
  signed int i;
  unsigned int fastNode;
  unsigned int slowNode;
  struct readinterval *marker;
  fastLength = 0;
  slowLength = fastLength;
  fastNode = destination;
  slowNode = origin;
  btCounter = btCounter + 1ll;
  char return_value_isPreviousToNode_2;
  char return_value_isPreviousToNode_1;
  while(!(fastNode == slowNode))
  {
    if(times[(signed long int)fastNode] > times[(signed long int)slowNode])
    {
      fastLength = fastLength + 1;
      fastNode = previous[(signed long int)fastNode];
    }

    else
      if(times[(signed long int)fastNode] < times[(signed long int)slowNode])
      {
        slowLength = slowLength + 1;
        slowNode = previous[(signed long int)slowNode];
      }

      else
      {
        return_value_isPreviousToNode_2=isPreviousToNode(slowNode, fastNode);
        if(!(return_value_isPreviousToNode_2 == 0))
          for( ; !(fastNode == slowNode); fastNode = previous[(signed long int)fastNode])
            fastLength = fastLength + 1;

        else
        {
          return_value_isPreviousToNode_1=isPreviousToNode(fastNode, slowNode);
          if(!(return_value_isPreviousToNode_1 == 0))
            for( ; !(slowNode == fastNode); slowNode = previous[(signed long int)slowNode])
              slowLength = slowLength + 1;

          else
          {
            fastLength = fastLength + 1;
            fastNode = previous[(signed long int)fastNode];
            slowLength = slowLength + 1;
            slowNode = previous[(signed long int)slowNode];
          }
        }
      }
    if(!(MAXNODELENGTH >= fastLength) || !(MAXNODELENGTH >= slowLength))
      goto __CPROVER_DUMP_L21;

  }
  if(!(fastLength == 0))
  {
    marker=allocateRV(1, (signed int)destination);
    fastPath = marker;
    i = 0;
    for( ; !(i >= fastLength); i = i + 1)
    {
      marker=allocateRV(1, (signed int)previous[(signed long int)fastPath->edgeid]);
      marker->nextInRead = fastPath;
      fastPath->prevInRead = marker;
      fastPath = marker;
    }
    marker=allocateRV(2, (signed int)destination);
    slowPath = marker;
    marker=allocateRV(2, (signed int)origin);
    marker->nextInRead = slowPath;
    slowPath->prevInRead = marker;
    slowPath = marker;
    i = 0;
    for( ; !(i >= slowLength); i = i + 1)
    {
      marker=allocateRV(2, (signed int)previous[(signed long int)slowPath->edgeid]);
      marker->nextInRead = slowPath;
      slowPath->prevInRead = marker;
      slowPath = marker;
    }
    fastSeqLength=extractSequence(fastPath, fastSequence);
    slowSeqLength=extractSequence(slowPath, slowSequence);
    if(fastSeqLength == 0 || slowSeqLength == 0)
    {
      detachPathSingle(slowPath);
      detachPathSingle(fastPath);
    }

    else
    {
      cmpCounter = cmpCounter + 1ll;
      char return_value_compareSequences_3;
      return_value_compareSequences_3=compareSequences(fastSequence, slowSequence, fastSeqLength, slowSeqLength);
      if(return_value_compareSequences_3 == 0)
      {
        detachPathSingle(slowPath);
        detachPathSingle(fastPath);
      }

      else
      {
        simiCounter = simiCounter + 1ll;
        char return_value_cleanUpRedundancy_4;
        return_value_cleanUpRedundancy_4=cleanUpRedundancy();
        pinCounter = pinCounter + (signed long long int)return_value_cleanUpRedundancy_4;
        if(pinCounter % 100000l == 0l)
          printf(".............%lld\n", pinCounter);

        HasChanged = (char)1;
      }
    }
  }


__CPROVER_DUMP_L21:
  ;
}

// compareSequences
// file bubble.c line 384
static char compareSequences(char *sequence1, char *sequence2, signed int length1, signed int length2)
{
  signed int i;
  signed int j;
  signed int maxLength;
  signed int Choice1;
  signed int Choice2;
  signed int Choice3;
  signed int maxScore;
  if(length1 == 0 || length2 == 0)
  {
    caseA = caseA + 1ll;
    return (char)0;
  }

  else
  {
    signed int return_value_abs_1;
    return_value_abs_1=abs((signed int)length1 - (signed int)length2);
    if(return_value_abs_1 >= 3)
    {
      caseB = caseB + 1ll;
      return (char)0;
    }

    else
      if(!(length1 >= overlaplen + -1) || !(length2 >= overlaplen + -1))
      {
        caseB = caseB + 1ll;
        return (char)0;
      }

      else
      {
        i = 0;
        for( ; length1 >= i; i = i + 1)
          Fmatrix[(signed long int)i][(signed long int)0] = 0;
        j = 0;
        for( ; length2 >= j; j = j + 1)
          Fmatrix[(signed long int)0][(signed long int)j] = 0;
        i = 1;
        for( ; length1 >= i; i = i + 1)
        {
          j = 1;
          for( ; length2 >= j; j = j + 1)
          {
            Choice1 = Fmatrix[(signed long int)(i - 1)][(signed long int)(j - 1)] + SIM[(signed long int)(signed int)sequence1[(signed long int)(i - 1)]][(signed long int)(signed int)sequence2[(signed long int)(j - 1)]];
            Choice2 = Fmatrix[(signed long int)(i - 1)][(signed long int)j] + INDEL;
            Choice3 = Fmatrix[(signed long int)i][(signed long int)(j - 1)] + INDEL;
            Fmatrix[(signed long int)i][(signed long int)j]=max(Choice1, Choice2, Choice3);
          }
        }
        maxScore = Fmatrix[(signed long int)length1][(signed long int)length2];
        maxLength = length1 > length2 ? length1 : length2;
        if(!(maxScore >= maxLength + -DIFF))
        {
          caseC = caseC + 1ll;
          return (char)0;
        }

        else
          if(1.000000 + -((double)maxScore / (double)maxLength) > cutoff)
          {
            caseD = caseD + 1ll;
            return (char)0;
          }

          else
            return (char)1;
      }
  }
}

// compareSequences_link1
// file localAsm.c line 1368
static signed int compareSequences_link1(char *sequence1_link1, char *sequence2_link1, signed int length1_link1, signed int length2_link1)
{
  if(length1_link1 >= 101 || length2_link1 >= 101 || !(length1_link1 >= 1) || !(length2_link1 >= 1))
    return 0;

  else
  {
    signed int i_link1;
    signed int j_link1;
    signed int Choice1_link1;
    signed int Choice2_link1;
    signed int Choice3_link1;
    signed int maxScore_link1;
    i_link1 = 0;
    for( ; length1_link1 >= i_link1; i_link1 = i_link1 + 1)
      Fmatrix_link1[(signed long int)i_link1][(signed long int)0] = 0;
    j_link1 = 0;
    for( ; length2_link1 >= j_link1; j_link1 = j_link1 + 1)
      Fmatrix_link1[(signed long int)0][(signed long int)j_link1] = 0;
    i_link1 = 1;
    for( ; length1_link1 >= i_link1; i_link1 = i_link1 + 1)
    {
      j_link1 = 1;
      for( ; length2_link1 >= j_link1; j_link1 = j_link1 + 1)
      {
        Choice1_link1 = Fmatrix_link1[(signed long int)(i_link1 - 1)][(signed long int)(j_link1 - 1)] + SIM_link1[(signed long int)(signed int)sequence1_link1[(signed long int)(i_link1 - 1)]][(signed long int)(signed int)sequence2_link1[(signed long int)(j_link1 - 1)]];
        Choice2_link1 = Fmatrix_link1[(signed long int)(i_link1 - 1)][(signed long int)j_link1] + INDEL_link1;
        Choice3_link1 = Fmatrix_link1[(signed long int)i_link1][(signed long int)(j_link1 - 1)] + INDEL_link1;
        Fmatrix_link1[(signed long int)i_link1][(signed long int)j_link1]=max_link1(Choice1_link1, Choice2_link1, Choice3_link1);
      }
    }
    maxScore_link1 = Fmatrix_link1[(signed long int)length1_link1][(signed long int)length2_link1];
    return maxScore_link1;
  }
}

// compl_int_seq
// file seq.c line 152
char * compl_int_seq(char *seq, signed int len)
{
  char *bal_seq = (char *)(void *)0;
  char c;
  char bal_c;
  signed int i;
  signed int index;
  signed int tmp_post_2;
  if(!(len >= 1))
    return bal_seq;

  else
  {
    void *return_value_ckalloc_1;
    return_value_ckalloc_1=ckalloc((unsigned long int)len * sizeof(char) /*1ul*/ );
    bal_seq = (char *)return_value_ckalloc_1;
    index = 0;
    i = len - 1;
    for( ; i >= 0; i = i - 1)
    {
      c = seq[(signed long int)i];
      if(!((signed int)c >= 4))
        bal_c = (char)((signed int)c ^ 0x02);

      else
        bal_c = c;
      tmp_post_2 = index;
      index = index + 1;
      bal_seq[(signed long int)tmp_post_2] = bal_c;
    }
    return bal_seq;
  }
}

// connectByPE_grad
// file attachPEinfo.c line 281
extern signed int connectByPE_grad(struct _IO_FILE *fp, signed int peGrad, char *line)
{
  signed long long int pre_readno;
  signed long long int readno;
  signed long long int minno;
  signed long long int maxno;
  signed int pre_pos;
  signed int pos;
  signed int flag;
  signed int PE;
  signed int count = 0;
  unsigned int pre_contigno;
  unsigned int contigno;
  unsigned int newIndex;
  char *return_value_fgets_3;
  if(!(peGrad >= 0) || !(gradsCounter >= peGrad))
  {
    printf("specified pe grad is out of bound\n");
    return 0;
  }

  else
  {
    maxno = (pes + (signed long int)peGrad)->PE_bound;
    if(peGrad == 0)
      minno = (signed long long int)0;

    else
      minno = (pes + (signed long int)(peGrad - 1))->PE_bound;
    peSUM = (unsigned long long int)0;
    onsameCtgPE = (signed int)peSUM;
    PE = (pes + (signed long int)peGrad)->insertS;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(line);
    if(!(return_value_strlen_1 == 0ul))
    {
      sscanf(line, "%lld %d %d", &pre_readno, &pre_contigno, &pre_pos);
      if(minno >= pre_readno)
        pre_readno = (signed long long int)-1;

    }

    else
      pre_readno = (signed long long int)-1;
    ignorePE3 = 0;
    ignorePE2 = ignorePE3;
    ignorePE1 = ignorePE2;
    static_flag = 1;
    struct stack *return_value_createStack_2;
    return_value_createStack_2=createStack(10000, sizeof(signed int) /*4ul*/ );
    isStack = (struct stack *)return_value_createStack_2;
    do
    {
      return_value_fgets_3=fgets(line, lineLen, fp);
      if(return_value_fgets_3 == ((char *)NULL))
        break;

      sscanf(line, "%lld %d %d", &readno, &contigno, &pos);
      if(!(maxno >= readno))
        break;

      if(!(minno >= readno))
      {
        newIndex = index_array[(signed long int)contigno];
        char return_value_isSameAsTwin_4;
        return_value_isSameAsTwin_4=isSameAsTwin(newIndex);
        if(return_value_isSameAsTwin_4 == 0)
        {
          if(readno % 2l == 0l && pre_readno == readno + -1l && !(PE == 0))
          {
            flag=attach1PE(pre_contigno, pre_pos, newIndex, pos, PE);
            if(flag == 1)
              count = count + 1;

          }

          pre_readno = readno;
          pre_contigno = newIndex;
          pre_pos = pos;
        }

      }

    }
    while((_Bool)1);
    printf("%d PEs with insert size %d attached, %d + %d + %d ignored\n", count, PE, ignorePE1, ignorePE2, ignorePE3);
    if(onsameCtgPE >= 1)
      printf("estimated PE size %lli, by %d pairs\n", peSUM / (unsigned long int)onsameCtgPE, onsameCtgPE);

    printf("on contigs longer than %d, %d pairs found,", PE, isStack->item_c);
    signed int return_value_calcuIS_5;
    return_value_calcuIS_5=calcuIS(isStack);
    printf("insert_size estimated: %d\n", return_value_calcuIS_5);
    freeStack(isStack);
    return count;
  }
}

// connectInRead
// file bubble.c line 946
static void connectInRead(struct readinterval *previous, struct readinterval *next)
{
  if(!(previous == ((struct readinterval *)NULL)))
  {
    previous->nextInRead = next;
    if(!(next == ((struct readinterval *)NULL)))
      previous->bal_rv->prevInRead = next->bal_rv;

    else
      previous->bal_rv->prevInRead = (struct readinterval *)(void *)0;
  }

  if(!(next == ((struct readinterval *)NULL)))
  {
    next->prevInRead = previous;
    if(!(previous == ((struct readinterval *)NULL)))
      next->bal_rv->nextInRead = previous->bal_rv;

    else
      next->bal_rv->nextInRead = (struct readinterval *)(void *)0;
  }

}

// consolidate
// file orderContig.c line 1051
static void consolidate()
{
  signed int i;
  signed int j;
  struct connection *prevCNT = (struct connection *)(void *)0;
  struct connection *cnt;
  unsigned int to_ctg;
  unsigned int from_ctg;
  void *return_value_darrayGet_1;
  return_value_darrayGet_1=darrayGet(solidArray, (signed long long int)0);
  from_ctg = *((unsigned int *)return_value_darrayGet_1);
  i = 1;
  for( ; !(i >= solidCounter); i = i + 1)
  {
    void *return_value_darrayGet_2;
    return_value_darrayGet_2=darrayGet(solidArray, (signed long long int)i);
    to_ctg = *((unsigned int *)return_value_darrayGet_2);
    cnt=checkConnect(from_ctg, to_ctg);
    if(cnt == ((struct connection *)NULL))
    {
      printf("consolidate A: no connect from %d to %d\n", from_ctg, to_ctg);
      j = 0;
      for( ; !(j >= solidCounter); j = j + 1)
      {
        void *return_value_darrayGet_3;
        return_value_darrayGet_3=darrayGet(solidArray, (signed long long int)j);
        printf("%d-->", *((unsigned int *)return_value_darrayGet_3));
      }
      printf("\n");
      goto __CPROVER_DUMP_L11;
    }

    cnt->singleInScaf = (unsigned char)(solidCounter == 2 ? 1 : 0);
    if(!(prevCNT == ((struct connection *)NULL)))
    {
      setNextInScaf(prevCNT, cnt);
      setPrevInScaf(cnt, (char)1);
    }

    prevCNT = cnt;
    from_ctg = to_ctg;
  }
  void *return_value_darrayGet_4;
  return_value_darrayGet_4=darrayGet(solidArray, (signed long long int)(solidCounter - 1));
  from_ctg=getTwinCtg(*((unsigned int *)return_value_darrayGet_4));
  prevCNT = (struct connection *)(void *)0;
  i = solidCounter - 2;
  for( ; i >= 0; i = i - 1)
  {
    void *return_value_darrayGet_5;
    return_value_darrayGet_5=darrayGet(solidArray, (signed long long int)i);
    to_ctg=getTwinCtg(*((unsigned int *)return_value_darrayGet_5));
    cnt=checkConnect(from_ctg, to_ctg);
    if(cnt == ((struct connection *)NULL))
    {
      printf("consolidate B: no connect from %d to %d\n", from_ctg, to_ctg);
      goto __CPROVER_DUMP_L11;
    }

    cnt->singleInScaf = (unsigned char)(solidCounter == 2 ? 1 : 0);
    if(!(prevCNT == ((struct connection *)NULL)))
    {
      setNextInScaf(prevCNT, cnt);
      setPrevInScaf(cnt, (char)1);
    }

    prevCNT = cnt;
    from_ctg = to_ctg;
  }

__CPROVER_DUMP_L11:
  ;
}

// contigElligible
// file read2scaf.c line 228
static char contigElligible(unsigned int contigno)
{
  unsigned int ctg = index_array[(signed long int)contigno];
  _Bool tmp_if_expr_1;
  if((contig_array + (signed long int)ctg)->from_vt == 0u)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)(contig_array + (signed long int)ctg)->multi == 1 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    return (char)0;

  else
    return (char)1;
}

// convertIndex
// file prlReadFillGap.c line 75
static void convertIndex()
{
  signed int *length_array;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(num_ctg + (unsigned int)1) * sizeof(signed int) /*4ul*/ );
  length_array = (signed int *)return_value_ckalloc_1;
  unsigned int i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    length_array[(signed long int)i] = 0;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    if(index_array[(signed long int)i] >= 1u)
      length_array[(signed long int)index_array[(signed long int)i]] = (signed int)i;

  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    index_array[(signed long int)i] = (unsigned int)length_array[(signed long int)i];
  free((void *)length_array);
}

// convertIndex_link1
// file read2scaf.c line 37
static void convertIndex_link1()
{
  signed int *length_array_link1;
  void *return_value_ckalloc_1_link1;
  return_value_ckalloc_1_link1=ckalloc((unsigned long int)(num_ctg + (unsigned int)1) * sizeof(signed int) /*4ul*/ );
  length_array_link1 = (signed int *)return_value_ckalloc_1_link1;
  unsigned int i_link1 = (unsigned int)1;
  for( ; num_ctg >= i_link1; i_link1 = i_link1 + 1u)
    length_array_link1[(signed long int)i_link1] = 0;
  i_link1 = (unsigned int)1;
  for( ; num_ctg >= i_link1; i_link1 = i_link1 + 1u)
    if(index_array[(signed long int)i_link1] >= 1u)
      length_array_link1[(signed long int)index_array[(signed long int)i_link1]] = (signed int)i_link1;

  i_link1 = (unsigned int)1;
  for( ; num_ctg >= i_link1; i_link1 = i_link1 + 1u)
    index_array[(signed long int)i_link1] = (unsigned int)length_array_link1[(signed long int)i_link1];
  free((void *)length_array_link1);
}

// copyEdge
// file compactEdge.c line 28
void copyEdge(unsigned int source, unsigned int target)
{
  (edge_array + (signed long int)target)->from_vt = (edge_array + (signed long int)source)->from_vt;
  (edge_array + (signed long int)target)->to_vt = (edge_array + (signed long int)source)->to_vt;
  (edge_array + (signed long int)target)->length = (edge_array + (signed long int)source)->length;
  (edge_array + (signed long int)target)->cvg = (unsigned short int)(edge_array + (signed long int)source)->cvg;
  (edge_array + (signed long int)target)->multi = (unsigned short int)(edge_array + (signed long int)source)->multi;
  if(!((edge_array + (signed long int)target)->seq == ((char *)NULL)))
    free((void *)(edge_array + (signed long int)target)->seq);

  (edge_array + (signed long int)target)->seq = (edge_array + (signed long int)source)->seq;
  (edge_array + (signed long int)source)->seq = (char *)(void *)0;
  (edge_array + (signed long int)target)->arcs = (edge_array + (signed long int)source)->arcs;
  (edge_array + (signed long int)source)->arcs = (struct arc *)(void *)0;
  (edge_array + (signed long int)target)->deleted = (unsigned short int)(edge_array + (signed long int)source)->deleted;
}

// copySeq
// file bubble.c line 322
static void copySeq(char *targetS, char *sourceS, signed int pos, signed int length)
{
  char ch;
  signed int i;
  signed int index = pos;
  i = 0;
  signed int tmp_post_1;
  for( ; !(i >= length); i = i + 1)
  {
    ch=getCharInTightString(sourceS, i);
    tmp_post_1 = index;
    index = index + 1;
    targetS[(signed long int)tmp_post_1] = ch;
  }
}

// copySeq_link1
// file concatenateEdge.c line 28
void copySeq_link1(char *targetS_link1, char *sourceS_link1, signed int pos_link1, signed int length_link1)
{
  char ch_link1;
  signed int i_link1;
  signed int index_link1 = pos_link1;
  i_link1 = 0;
  signed int tmp_post_1_link1;
  for( ; !(i_link1 >= length_link1); i_link1 = i_link1 + 1)
  {
    ch_link1=getCharInTightString(sourceS_link1, i_link1);
    tmp_post_1_link1 = index_link1;
    index_link1 = index_link1 + 1;
    writeChar2tightString(ch_link1, targetS_link1, tmp_post_1_link1);
  }
}

// count_branch2next
// file inc/newhash.h line 98
extern signed int count_branch2next(struct kmer_st *node)
{
  signed int num = 0;
  signed int i = 0;
  for( ; !(i >= 4); i = i + 1)
    if((0x3FU & (unsigned int)((signed int)node->r_links >> 6 * i)) >= 1u)
      num = num + 1;

  return num;
}

// count_branch2prev
// file inc/newhash.h line 97
extern signed int count_branch2prev(struct kmer_st *node)
{
  signed int num = 0;
  signed int i = 0;
  for( ; !(i >= 4); i = i + 1)
    if((0x3FU & node->l_links >> 6 * i) >= 1u)
      num = num + 1;

  return num;
}

// count_kmerset
// file newhash.c line 298
extern signed long long int count_kmerset(struct kmerSet_st *set)
{
  return (signed long long int)set->count;
}

// count_link2next
// file kmer.c line 78
extern signed int count_link2next(struct node *node)
{
  signed int num = 0;
  signed int i;
  unsigned char ch = node->links;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    num = num + ((signed int)ch & 0x01);
    ch = ch >> 1;
  }
  return num;
}

// count_link2nextB
// file kmer.c line 92
extern signed int count_link2nextB(struct node *node)
{
  signed int num = 0;
  signed int i;
  unsigned char ch = node->linksB;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    num = num + ((signed int)ch & 0x01);
    ch = ch >> 1;
  }
  return num;
}

// count_link2prev
// file kmer.c line 121
extern signed int count_link2prev(struct node *node)
{
  signed int num = 0;
  signed int i;
  unsigned char ch = node->links;
  ch = ch >> 4;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    num = num + ((signed int)ch & 0x01);
    ch = ch >> 1;
  }
  return num;
}

// count_link2prevB
// file kmer.c line 106
extern signed int count_link2prevB(struct node *node)
{
  signed int num = 0;
  signed int i;
  unsigned char ch = node->linksB;
  ch = ch >> 4;
  i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    num = num + ((signed int)ch & 0x01);
    ch = ch >> 1;
  }
  return num;
}

// cp1edge
// file splitReps.c line 267
static unsigned int cp1edge(unsigned int source, unsigned int target)
{
  signed int length = (edge_array + (signed long int)source)->length;
  char *tightSeq;
  signed int index;
  unsigned int bal_source;
  bal_source=getTwinEdge(source);
  unsigned int bal_target;
  if(!(source >= bal_source))
    bal_target = target + (unsigned int)1;

  else
  {
    bal_target = target;
    target = target + (unsigned int)1;
  }
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(length / 4 + 1) * sizeof(char) /*1ul*/ );
  tightSeq = (char *)return_value_ckalloc_1;
  index = 0;
  for( ; !(index >= length / 4 + 1); index = index + 1)
    tightSeq[(signed long int)index] = (edge_array + (signed long int)source)->seq[(signed long int)index];
  (edge_array + (signed long int)target)->length = length;
  (edge_array + (signed long int)target)->cvg = (unsigned short int)(edge_array + (signed long int)source)->cvg;
  (edge_array + (signed long int)target)->to_vt = (edge_array + (signed long int)source)->to_vt;
  (edge_array + (signed long int)target)->from_vt = (edge_array + (signed long int)source)->from_vt;
  (edge_array + (signed long int)target)->seq = tightSeq;
  (edge_array + (signed long int)target)->bal_edge = (unsigned short int)(edge_array + (signed long int)source)->bal_edge;
  (edge_array + (signed long int)target)->rv = (struct readinterval *)(void *)0;
  (edge_array + (signed long int)target)->arcs = (struct arc *)(void *)0;
  (edge_array + (signed long int)target)->markers = (signed long long int *)(void *)0;
  (edge_array + (signed long int)target)->flag = (unsigned short int)0;
  (edge_array + (signed long int)target)->deleted = (unsigned short int)0;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)(length / 4 + 1) * sizeof(char) /*1ul*/ );
  tightSeq = (char *)return_value_ckalloc_2;
  index = 0;
  for( ; !(index >= length / 4 + 1); index = index + 1)
    tightSeq[(signed long int)index] = (edge_array + (signed long int)bal_source)->seq[(signed long int)index];
  (edge_array + (signed long int)bal_target)->length = length;
  (edge_array + (signed long int)bal_target)->cvg = (unsigned short int)(edge_array + (signed long int)bal_source)->cvg;
  (edge_array + (signed long int)bal_target)->to_vt = (edge_array + (signed long int)bal_source)->to_vt;
  (edge_array + (signed long int)bal_target)->from_vt = (edge_array + (signed long int)bal_source)->from_vt;
  (edge_array + (signed long int)bal_target)->seq = tightSeq;
  (edge_array + (signed long int)bal_target)->bal_edge = (unsigned short int)(edge_array + (signed long int)bal_source)->bal_edge;
  (edge_array + (signed long int)bal_target)->rv = (struct readinterval *)(void *)0;
  (edge_array + (signed long int)bal_target)->arcs = (struct arc *)(void *)0;
  (edge_array + (signed long int)bal_target)->markers = (signed long long int *)(void *)0;
  (edge_array + (signed long int)bal_target)->flag = (unsigned short int)0;
  (edge_array + (signed long int)bal_target)->deleted = (unsigned short int)0;
  return target;
}

// crc32
// file hashFunction.c line 85
static signed int crc32(signed int crc, const char *buf, signed int len)
{
  signed int tmp_post_1;
  const char *tmp_post_2;
  if(buf == ((const char *)NULL))
    return 0;

  else
  {
    crc = (signed int)((unsigned int)crc ^ 0xffffffff);
    do
    {
      tmp_post_1 = len;
      len = len - 1;
      if(tmp_post_1 == 0)
        break;

      tmp_post_2 = buf;
      buf = buf + 1l;
      crc = crc_table[(signed long int)(((signed int)crc ^ (signed int)*tmp_post_2) & 0xff)] ^ crc >> 8;
    }
    while((_Bool)1);
    return (signed int)((unsigned int)crc ^ 0xffffffff);
  }
}

// creatThrds
// file cutTipPreGraph.c line 378
static void creatThrds(unsigned long int *threads, struct parameter *paras)
{
  unsigned char i;
  signed int temp;
  i = (unsigned char)0;
  for( ; !((signed int)i >= thrd_num); i = i + 1)
  {
    temp=pthread_create(&threads[(signed long int)i], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)threadRoutine, (void *)&paras[(signed long int)i]);
    if(!(temp == 0))
    {
      printf("create threads failed\n");
      exit(1);
    }

  }
  printf("%d thread created\n", thrd_num);
}

// creatThrds_link1
// file prlHashCtg.c line 135
static void creatThrds_link1(unsigned long int *threads_link1, struct parameter *paras_link1)
{
  unsigned char i_link1;
  signed int temp_link1;
  i_link1 = (unsigned char)0;
  for( ; !((signed int)i_link1 >= thrd_num); i_link1 = i_link1 + 1)
  {
    temp_link1=pthread_create(&threads_link1[(signed long int)i_link1], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)threadRoutine_link1, (void *)&paras_link1[(signed long int)i_link1]);
    if(!(temp_link1 == 0))
    {
      printf("create threads failed\n");
      exit(1);
    }

  }
  printf("%d thread created\n", thrd_num);
}

// creatThrds_link2
// file prlHashReads.c line 122
static void creatThrds_link2(unsigned long int *threads_link2, struct parameter *paras_link2)
{
  unsigned char i_link2;
  signed int temp_link2;
  i_link2 = (unsigned char)0;
  for( ; !((signed int)i_link2 >= thrd_num); i_link2 = i_link2 + 1)
  {
    temp_link2=pthread_create(&threads_link2[(signed long int)i_link2], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)threadRoutine_link2, (void *)&paras_link2[(signed long int)i_link2]);
    if(!(temp_link2 == 0))
    {
      printf("create threads failed\n");
      exit(1);
    }

  }
  printf("%d thread created\n", thrd_num);
}

// creatThrds_link3
// file prlRead2Ctg.c line 61
static void creatThrds_link3(unsigned long int *threads_link3, struct parameter *paras_link3)
{
  unsigned char i_link3;
  signed int temp_link3;
  i_link3 = (unsigned char)0;
  for( ; !((signed int)i_link3 >= thrd_num); i_link3 = i_link3 + 1)
  {
    temp_link3=pthread_create(&threads_link3[(signed long int)i_link3], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)threadRoutine_link3, (void *)&paras_link3[(signed long int)i_link3]);
    if(!(temp_link3 == 0))
    {
      printf("create threads failed\n");
      exit(1);
    }

  }
  printf("%d thread created\n", thrd_num);
}

// creatThrds_link4
// file prlRead2path.c line 65
static void creatThrds_link4(unsigned long int *threads_link4, struct parameter *paras_link4)
{
  unsigned char i_link4;
  signed int temp_link4;
  i_link4 = (unsigned char)0;
  for( ; !((signed int)i_link4 >= thrd_num); i_link4 = i_link4 + 1)
  {
    temp_link4=pthread_create(&threads_link4[(signed long int)i_link4], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)threadRoutine_link4, (void *)&paras_link4[(signed long int)i_link4]);
    if(!(temp_link4 == 0))
    {
      printf("create threads failed\n");
      exit(1);
    }

  }
  printf("%d thread created\n", thrd_num);
}

// creatThrds_link5
// file prlReadFillGap.c line 909
static void creatThrds_link5(unsigned long int *threads_link5, struct parameter *paras_link5)
{
  unsigned char i_link5;
  signed int temp_link5;
  i_link5 = (unsigned char)0;
  for( ; !((signed int)i_link5 >= thrd_num); i_link5 = i_link5 + 1)
  {
    temp_link5=pthread_create(&threads_link5[(signed long int)i_link5], (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)threadRoutine_link5, (void *)&paras_link5[(signed long int)i_link5]);
    if(!(temp_link5 == 0))
    {
      printf("create threads failed\n");
      exit(1);
    }

  }
  printf("%d thread created\n...\n", thrd_num);
}

// createAnalogousArc
// file bubble.c line 784
static void createAnalogousArc(unsigned int originNode, unsigned int destinationNode, struct arc *refArc)
{
  struct arc *arc;
  struct arc *twinArc;
  unsigned int destinationTwin;
  arc=getArcBetween(originNode, destinationNode);
  if(!(arc == ((struct arc *)NULL)))
  {
    if(!(refArc->bal_arc == refArc))
    {
      arc->multiplicity = arc->multiplicity + refArc->multiplicity;
      arc->bal_arc->multiplicity = arc->bal_arc->multiplicity + refArc->multiplicity;
    }

    else
    {
      arc->multiplicity = arc->multiplicity + refArc->multiplicity / (unsigned int)2;
      arc->bal_arc->multiplicity = arc->bal_arc->multiplicity + refArc->multiplicity / (unsigned int)2;
    }
  }

  else
  {
    arc=allocateArc(destinationNode);
    arc->multiplicity = refArc->multiplicity;
    arc->prev = (struct arc *)(void *)0;
    arc->next = (edge_array + (signed long int)originNode)->arcs;
    if(!((edge_array + (signed long int)originNode)->arcs == ((struct arc *)NULL)))
      (edge_array + (signed long int)originNode)->arcs->prev = arc;

    (edge_array + (signed long int)originNode)->arcs = arc;
    putArc2LookupTable(originNode, arc);
    destinationTwin=getTwinEdge(destinationNode);
    if(destinationTwin == originNode)
    {
      arc->bal_arc = arc;
      if(!(refArc->bal_arc == refArc))
        arc->multiplicity = arc->multiplicity + refArc->multiplicity;

    }

    else
    {
      unsigned int return_value_getTwinEdge_1;
      return_value_getTwinEdge_1=getTwinEdge(originNode);
      twinArc=allocateArc(return_value_getTwinEdge_1);
      arc->bal_arc = twinArc;
      twinArc->bal_arc = arc;
      twinArc->multiplicity = refArc->multiplicity;
      twinArc->prev = (struct arc *)(void *)0;
      twinArc->next = (edge_array + (signed long int)destinationTwin)->arcs;
      if(!((edge_array + (signed long int)destinationTwin)->arcs == ((struct arc *)NULL)))
        (edge_array + (signed long int)destinationTwin)->arcs->prev = twinArc;

      (edge_array + (signed long int)destinationTwin)->arcs = twinArc;
      putArc2LookupTable(destinationTwin, twinArc);
    }
  }
}

// createAnalogousCnt
// file orderContig.c line 129
static void createAnalogousCnt(unsigned int sourceStart, struct connection *originCnt, signed int gap, unsigned int targetStart, unsigned int targetStop)
{
  struct connection *temp_cnt;
  unsigned int balTargetStart;
  balTargetStart=getTwinCtg(targetStart);
  unsigned int balTargetStop;
  balTargetStop=getTwinCtg(targetStop);
  unsigned int balSourceStart;
  balSourceStart=getTwinCtg(sourceStart);
  unsigned int balSourceStop;
  balSourceStop=getTwinCtg(originCnt->contigID);
  originCnt->deleted = (unsigned char)1;
  temp_cnt=getCntBetween(balSourceStop, balSourceStart);
  temp_cnt->deleted = (unsigned char)1;
  if(!(gap >= -2000))
    gapCounter = gapCounter + 1;

  else
  {
    temp_cnt=add1Connect(targetStart, targetStop, gap, (signed int)originCnt->weight, (char)1);
    if(!(temp_cnt == ((struct connection *)NULL)))
      temp_cnt->inherit = (unsigned char)1;

    temp_cnt=add1Connect(balTargetStop, balTargetStart, gap, (signed int)originCnt->weight, (char)1);
    if(!(temp_cnt == ((struct connection *)NULL)))
      temp_cnt->inherit = (unsigned char)1;

  }
}

// createArcLookupTable
// file arc.c line 152
extern void createArcLookupTable()
{
  if(arcLookupTable == ((struct arc **)NULL))
  {
    void *return_value_ckalloc_1;
    return_value_ckalloc_1=ckalloc((unsigned long int)((unsigned int)3 * num_ed + (unsigned int)1) * sizeof(struct arc *) /*8ul*/ );
    arcLookupTable = (struct arc **)return_value_ckalloc_1;
  }

}

// createArcMemo
// file arc.c line 119
extern void createArcMemo()
{
  if(arc_mem_manager == ((struct mem_manager *)NULL))
    arc_mem_manager=createMem_manager(100000, sizeof(struct arc) /*40ul*/ );

  else
    printf("Warning from createArcMemo: arc_mem_manager is active pointer\n");
}

// createCntLookupTable
// file connect.c line 120
extern void createCntLookupTable()
{
  if(cntLookupTable == ((struct connection **)NULL))
  {
    void *return_value_ckalloc_1;
    return_value_ckalloc_1=ckalloc((unsigned long int)((unsigned int)3 * num_ctg + (unsigned int)1) * sizeof(struct connection *) /*8ul*/ );
    cntLookupTable = (struct connection **)return_value_ckalloc_1;
  }

}

// createCntMemManager
// file connect.c line 30
extern void createCntMemManager()
{
  if(cn_mem_manager == ((struct mem_manager *)NULL))
    cn_mem_manager=createMem_manager(100000, sizeof(struct connection) /*40ul*/ );

  else
    printf("cn_mem_manger was created\n");
}

// createDarray
// file darray.c line 26
struct dynamic_array * createDarray(signed int num_items, unsigned long int unit_size)
{
  struct dynamic_array *newDarray;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)1 * sizeof(struct dynamic_array) /*32ul*/ );
  newDarray = (struct dynamic_array *)return_value_malloc_1;
  newDarray->array_size = (signed long long int)num_items;
  newDarray->item_size = unit_size;
  newDarray->item_c = (signed long long int)0;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)num_items * unit_size);
  newDarray->array = (void *)return_value_ckalloc_2;
  return newDarray;
}

// createMem_manager
// file inc/extfunc2.h line 25
extern struct mem_manager * createMem_manager(signed int num_items, unsigned long int unit_size)
{
  struct mem_manager *mem_Manager;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)1 * sizeof(struct mem_manager) /*40ul*/ );
  mem_Manager = (struct mem_manager *)return_value_ckalloc_1;
  mem_Manager->block_list = (struct block_start *)(void *)0;
  mem_Manager->items_per_block = num_items;
  mem_Manager->item_size = unit_size;
  mem_Manager->recycle_list = (struct recycle_mark *)(void *)0;
  mem_Manager->counter = (unsigned long long int)0;
  return mem_Manager;
}

// createPreArcMemManager
// file arc.c line 30
extern void createPreArcMemManager()
{
  prearc_mem_manager=createMem_manager(100000, sizeof(struct prearc) /*16ul*/ );
}

// createRVmemo
// file inc/extfunc.h line 65
extern void createRVmemo()
{
  if(rv_mem_manager == ((struct mem_manager *)NULL))
    rv_mem_manager=createMem_manager(1000, sizeof(struct readinterval) /*56ul*/ );

  else
    printf("Warning from createRVmemo: rv_mem_manager is an active pointer\n");
}

// createStack
// file inc/stack.h line 54
struct stack * createStack(signed int num_items, unsigned long int unit_size)
{
  struct stack *newStack;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)1 * sizeof(struct stack) /*48ul*/ );
  newStack = (struct stack *)return_value_malloc_1;
  newStack->block_list = (struct block_starter *)(void *)0;
  newStack->items_per_block = num_items;
  newStack->item_size = unit_size;
  newStack->item_c = 0;
  return newStack;
}

// cutRdArray
// file prlReadFillGap.c line 294
static void cutRdArray(struct read_nearby *rdArray, signed int gapStart, signed int gapEnd, signed int *count, signed int arrayLen, struct read_nearby *cutArray)
{
  signed int i;
  signed int num = 0;
  i = 0;
  signed int tmp_post_1;
  for( ; !(i >= arrayLen); i = i + 1)
  {
    if(!(gapEnd >= (rdArray + (signed long int)i)->dis))
      break;

    if((rdArray + (signed long int)i)->dis + (rdArray + (signed long int)i)->len >= gapStart)
    {
      (cutArray + (signed long int)num)->dis = (rdArray + (signed long int)i)->dis;
      (cutArray + (signed long int)num)->len = (rdArray + (signed long int)i)->len;
      tmp_post_1 = num;
      num = num + 1;
      (cutArray + (signed long int)tmp_post_1)->seqStarter = (rdArray + (signed long int)i)->seqStarter;
    }

  }
  *count = num;
}

// cutSeqFromCtg
// file localAsm.c line 1655
static signed int cutSeqFromCtg(unsigned int ctgID, signed int start, signed int end, char *sequence, signed int originOverlap)
{
  unsigned int bal_ctg;
  bal_ctg=getTwinCtg(ctgID);
  if(!((contig_array + (signed long int)ctgID)->length >= 1u))
    return 0;

  else
  {
    signed int length = (signed int)((contig_array + (signed long int)ctgID)->length + (unsigned int)originOverlap);
    if(!((contig_array + (signed long int)ctgID)->seq == ((char *)NULL)))
    {
      signed int return_value_cutSeqFromTightStr_1;
      return_value_cutSeqFromTightStr_1=cutSeqFromTightStr((contig_array + (signed long int)ctgID)->seq, length, start, end, 0, sequence);
      return return_value_cutSeqFromTightStr_1;
    }

    else
    {
      signed int return_value_cutSeqFromTightStr_2;
      return_value_cutSeqFromTightStr_2=cutSeqFromTightStr((contig_array + (signed long int)bal_ctg)->seq, length, start, end, 1, sequence);
      return return_value_cutSeqFromTightStr_2;
    }
  }
}

// cutSeqFromRead
// file localAsm.c line 1670
static signed int cutSeqFromRead(char *src_seq, signed int length, signed int start, signed int end, char *sequence)
{
  if(end >= length)
    printf("******: end %d length %d\n", end, length);

  end = end < length ? end : length - 1;
  start = start >= 0 ? start : 0;
  signed int i = start;
  for( ; end >= i; i = i + 1)
    sequence[(signed long int)(i - start)] = src_seq[(signed long int)i];
  return (end - start) + 1;
}

// cutSeqFromTightStr
// file localAsm.c line 1635
static signed int cutSeqFromTightStr(char *tightStr, signed int length, signed int start, signed int end, signed int revS, char *src_seq)
{
  signed int i;
  signed int index = 0;
  end = end < length ? end : length - 1;
  start = start >= 0 ? start : 0;
  signed int tmp_post_1;
  signed int tmp_post_2;
  if(revS == 0)
  {
    i = start;
    for( ; end >= i; i = i + 1)
    {
      tmp_post_1 = index;
      index = index + 1;
      src_seq[(signed long int)tmp_post_1]=getCharInTightString(tightStr, i);
    }
  }

  else
  {
    i = (length - 1) - start;
    for( ; i >= length + -end + -1; i = i - 1)
    {
      tmp_post_2 = index;
      index = index + 1;
      char return_value_getCharInTightString_3;
      return_value_getCharInTightString_3=getCharInTightString(tightStr, i);
      src_seq[(signed long int)tmp_post_2] = (char)((signed int)return_value_getCharInTightString_3 ^ 0x02);
    }
  }
  return (end - start) + 1;
}

// cutTipsInGraph
// file inc/extfunc.h line 121
extern void cutTipsInGraph(signed int cutLen, char strict)
{
  signed int flag = 1;
  unsigned int i;
  if(cutLen == 0)
    cutLen = 2 * overlaplen;

  printf("strict %d, cutLen %d\n", strict, cutLen);
  if(!(strict == 0))
    linearConcatenate();

  caseE = 0;
  caseD_link1 = caseE;
  caseC_link1 = caseD_link1;
  caseB_link1 = caseC_link1;
  caseA_link1 = caseB_link1;
  while(!(flag == 0))
  {
    flag = 0;
    i = (unsigned int)1;
    for( ; num_ed >= i; i = i + 1u)
      if((edge_array + (signed long int)i)->deleted == 0)
      {
        char return_value_isUnreliableTip_1;
        return_value_isUnreliableTip_1=isUnreliableTip(i, cutLen, strict);
        if(!(return_value_isUnreliableTip_1 == 0))
        {
          destroyEdge(i);
          flag = flag + 1;
        }

      }

    printf("a cutTipsInGraph lap, %d tips cut\n", flag);
  }
  removeDeadArcs();
  if(!(strict == 0))
    printf("case A %d, B %d C %d D %d E %d\n", caseA_link1, caseB_link1, caseC_link1, caseD_link1, caseE);

  linearConcatenate();
  compactEdgeArray();
}

// darrayGet
// file darray.c line 55
void * darrayGet(struct dynamic_array *darray, signed long long int index)
{
  if(!(index >= darray->array_size))
    return (void *)((void *)darray->array + (signed long int)(darray->item_size * (unsigned long int)index));

  else
  {
    printf("array read index %lld out of range %lld\n", index, darray->array_size);
    return (void *)0;
  }
}

// darrayPut
// file darray.c line 36
void * darrayPut(struct dynamic_array *darray, signed long long int index)
{
  signed int i = 2;
  if(!(darray->item_c >= 1l + index))
    darray->item_c = index + (signed long int)1;

  if(!(index >= darray->array_size))
    return darray->array + (signed long int)(darray->item_size * (unsigned long int)index);

  else
  {
    for( ; !(darray->array_size * (signed long int)i >= index); i = i + 1)
      ;
    void *return_value_ckrealloc_1;
    return_value_ckrealloc_1=ckrealloc(darray->array, (unsigned long int)((signed long int)i * darray->array_size) * darray->item_size, (unsigned long int)darray->array_size * darray->item_size);
    darray->array = (void *)return_value_ckrealloc_1;
    darray->array_size = darray->array_size * (signed long long int)i;
    return (void *)((void *)darray->array + (signed long int)(darray->item_size * (unsigned long int)index));
  }
}

// deLowCov
// file prlHashReads.c line 498
static void deLowCov(unsigned char *thrdSignal)
{
  signed int i;
  signed long long int counter = (signed long long int)0;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)thrd_num * sizeof(signed long long int) /*8ul*/ );
  tips = (signed long long int *)return_value_ckalloc_1;
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
    tips[(signed long int)i] = (signed long long int)0;
  sendWorkSignal_link2((unsigned char)5, thrdSignal);
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
    counter = counter + tips[(signed long int)i];
  free((void *)tips);
  printf("%lld kmer removed\n", counter);
}

// deallocateDFibHeapNode
// file dfib.c line 65
static void deallocateDFibHeapNode(struct dfibheap_el *a, struct dfibheap *heap)
{
  returnItem(heap->nodeMemory, (void *)a);
}

// deallocateFibHeapEl
// file fib.c line 67
static void deallocateFibHeapEl(struct fibheap_el *a, struct fibheap *heap)
{
  returnItem(heap->nodeMemory, (void *)a);
}

// debugging
// file orderContig.c line 1278
static void debugging()
{
  ;
}

// debugging1
// file orderContig.c line 1116
static void debugging1(unsigned int ctg1, unsigned int ctg2)
{
  struct connection *cn1;
  cn1=getCntBetween(ctg1, ctg2);
  if(!(cn1 == ((struct connection *)NULL)))
  {
    printf("(%d,%d) mask %d deleted %d w %d,singleInScaf %d\n", ctg1, ctg2, cn1->mask, cn1->deleted, cn1->weight, cn1->singleInScaf);
    if(!(cn1->nextInScaf == ((struct connection *)NULL)))
      printf("%d->%d->%d\n", ctg1, ctg2, cn1->nextInScaf->contigID);

    if(!(cn1->prevInScaf == 0))
      printf("*->%d->%d\n", ctg1, ctg2);

    else
      if(cn1->nextInScaf == ((struct connection *)NULL))
        printf("NULL->%d->%d->NULL\n", ctg1, ctg2);

  }

  else
    printf("%d -X- %d\n", ctg1, ctg2);
}

// deleteArc
// file bubble.c line 535
extern struct arc * deleteArc(struct arc *arc_list, struct arc *arc)
{
  if(!(arc->prev == ((struct arc *)NULL)))
    arc->prev->next = arc->next;

  else
    arc_list = arc->next;
  if(!(arc->next == ((struct arc *)NULL)))
    arc->next->prev = arc->prev;

  dismissArc(arc);
  return arc_list;
}

// deleteArcLookupTable
// file arc.c line 158
extern void deleteArcLookupTable()
{
  if(!(arcLookupTable == ((struct arc **)NULL)))
  {
    free((void *)arcLookupTable);
    arcLookupTable = (struct arc **)(void *)0;
  }

}

// deleteCntLookupTable
// file connect.c line 126
extern void deleteCntLookupTable()
{
  if(!(cntLookupTable == ((struct connection **)NULL)))
  {
    free((void *)cntLookupTable);
    cntLookupTable = (struct connection **)(void *)0;
  }

}

// deleteRv
// file bubble.c line 567
static struct readinterval * deleteRv(struct readinterval *rv_list, struct readinterval *rv)
{
  if(!(rv->prevOnEdge == ((struct readinterval *)NULL)))
    rv->prevOnEdge->nextOnEdge = rv->nextOnEdge;

  else
    rv_list = rv->nextOnEdge;
  if(!(rv->nextOnEdge == ((struct readinterval *)NULL)))
    rv->nextOnEdge->prevOnEdge = rv->prevOnEdge;

  return rv_list;
}

// deleteWeakCnt
// file orderContig.c line 858
static void deleteWeakCnt(signed int cut_off)
{
  unsigned int i;
  struct connection *cn_temp1;
  signed int weaks = 0;
  signed int counter = 0;
  i = (unsigned int)1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  for( ; num_ctg >= i; i = i + 1u)
  {
    cn_temp1 = (contig_array + (signed long int)i)->downwardConnect;
    for( ; !(cn_temp1 == ((struct connection *)NULL)); cn_temp1 = cn_temp1->next)
    {
      if(cn_temp1->mask == 0)
      {
        if(cn_temp1->deleted == 0)
        {
          if(cn_temp1->nextInScaf == ((struct connection *)NULL))
          {
            if(cn_temp1->singleInScaf == 0)
            {
              if(cn_temp1->prevInScaf == 0)
                counter = counter + 1;

            }

          }

        }

      }

      if(!(cn_temp1->weak == 0))
        tmp_if_expr_1 = cn_temp1->deleted != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = (signed int)cn_temp1->weight >= cut_off ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        cn_temp1->deleted = (unsigned char)0;
        cn_temp1->weak = (unsigned char)0;
      }

      else
        if(cn_temp1->deleted == 0)
        {
          if((signed int)cn_temp1->weight >= 1)
          {
            if(!((signed int)cn_temp1->weight >= cut_off))
            {
              if(cn_temp1->nextInScaf == ((struct connection *)NULL))
              {
                if(cn_temp1->prevInScaf == 0)
                {
                  cn_temp1->deleted = (unsigned char)1;
                  cn_temp1->weak = (unsigned char)1;
                  if(!(cn_temp1->singleInScaf == 0))
                    cn_temp1->singleInScaf = (unsigned char)0;

                  if(cn_temp1->mask == 0)
                    weaks = weaks + 1;

                }

              }

            }

          }

        }

    }
  }
  printf("%d weak connects removed (there were %d active cnnects))\n", weaks, counter);
  checkCircle();
}

// destroyArc
// file bubble.c line 764
static void destroyArc(unsigned int from_ed, struct arc *arc)
{
  unsigned int bal_dest;
  struct arc *twinArc;
  if(!(arc == ((struct arc *)NULL)))
  {
    bal_dest=getTwinEdge(arc->to_ed);
    twinArc = arc->bal_arc;
    removeArcInLookupTable(from_ed, arc->to_ed);
    (edge_array + (signed long int)from_ed)->arcs=deleteArc((edge_array + (signed long int)from_ed)->arcs, arc);
    if(!(bal_dest == from_ed))
    {
      unsigned int return_value_getTwinEdge_1;
      return_value_getTwinEdge_1=getTwinEdge(from_ed);
      removeArcInLookupTable(bal_dest, return_value_getTwinEdge_1);
      (edge_array + (signed long int)bal_dest)->arcs=deleteArc((edge_array + (signed long int)bal_dest)->arcs, twinArc);
    }

  }

}

// destroyArcMem
// file arc.c line 127
extern void destroyArcMem()
{
  freeMem_manager(arc_mem_manager);
  arc_mem_manager = (struct mem_manager *)(void *)0;
}

// destroyConnectMem
// file connect.c line 38
extern void destroyConnectMem()
{
  freeMem_manager(cn_mem_manager);
  cn_mem_manager = (struct mem_manager *)(void *)0;
}

// destroyDHeap
// file inc/dfibHeap.h line 34
void destroyDHeap(struct dfibheap *heap)
{
  dfh_deleteheap(heap);
}

// destroyEdge
// file cutTip_graph.c line 31
void destroyEdge(unsigned int edgeid)
{
  unsigned int bal_ed;
  bal_ed=getTwinEdge(edgeid);
  struct arc *arc;
  if(bal_ed == edgeid)
    (edge_array + (signed long int)edgeid)->length = 0;

  else
  {
    arc = (edge_array + (signed long int)edgeid)->arcs;
    for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
      arc->bal_arc->to_ed = (unsigned int)0;
    arc = (edge_array + (signed long int)bal_ed)->arcs;
    for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
      arc->bal_arc->to_ed = (unsigned int)0;
    (edge_array + (signed long int)edgeid)->arcs = (struct arc *)(void *)0;
    (edge_array + (signed long int)bal_ed)->arcs = (struct arc *)(void *)0;
    (edge_array + (signed long int)edgeid)->length = 0;
    (edge_array + (signed long int)bal_ed)->length = 0;
    (edge_array + (signed long int)edgeid)->deleted = (unsigned short int)1;
    (edge_array + (signed long int)bal_ed)->deleted = (unsigned short int)1;
  }
}

// destroyHeap
// file fibHeap.c line 64
void destroyHeap(struct fibheap *heap)
{
  fh_deleteheap(heap);
}

// destroyNodeInDHeap
// file dfibHeap.c line 80
void destroyNodeInDHeap(struct dfibheap_el *node, struct dfibheap *heap)
{
  dfh_delete(heap, node);
}

// destroyNodeInHeap
// file fibHeap.c line 76
void destroyNodeInHeap(struct fibheap_el *node, struct fibheap *heap)
{
  fh_delete(heap, node);
}

// destroyPreArcMem
// file arc.c line 49
extern void destroyPreArcMem()
{
  freeMem_manager(prearc_mem_manager);
  prearc_mem_manager = (struct mem_manager *)(void *)0;
}

// destroyReadIntervMem
// file inc/extfunc.h line 67
extern void destroyReadIntervMem()
{
  freeMem_manager(rv_mem_manager);
  rv_mem_manager = (struct mem_manager *)(void *)0;
}

// detachPath
// file bubble.c line 667
static void detachPath(struct readinterval *path)
{
  struct readinterval *marker;
  struct readinterval *bal_marker;
  struct readinterval *nextMarker;
  unsigned int ed;
  unsigned int bal_ed;
  marker = path;
  for( ; !(marker == ((struct readinterval *)NULL)); marker = nextMarker)
  {
    nextMarker = marker->nextInRead;
    bal_marker = marker->bal_rv;
    ed = marker->edgeid;
    (edge_array + (signed long int)ed)->rv=deleteRv((edge_array + (signed long int)ed)->rv, marker);
    dismissRV(marker);
    bal_ed=getTwinEdge(ed);
    (edge_array + (signed long int)bal_ed)->rv=deleteRv((edge_array + (signed long int)bal_ed)->rv, bal_marker);
    dismissRV(bal_marker);
  }
  fflush(stdout);
}

// detachPathSingle
// file bubble.c line 651
static void detachPathSingle(struct readinterval *path)
{
  struct readinterval *marker;
  struct readinterval *nextMarker;
  unsigned int ed;
  marker = path;
  for( ; !(marker == ((struct readinterval *)NULL)); marker = nextMarker)
  {
    nextMarker = marker->nextInRead;
    ed = marker->edgeid;
    (edge_array + (signed long int)ed)->rv=deleteRv((edge_array + (signed long int)ed)->rv, marker);
    dismissRV(marker);
  }
}

// detectBreakScaf
// file orderContig.c line 4115
static void detectBreakScaf()
{
  unsigned int i;
  unsigned int avgPE;
  unsigned int scafLen;
  unsigned int len;
  unsigned int ctg;
  unsigned int bal_ctg;
  unsigned int prevCtg;
  unsigned int thisCtg;
  signed long long int peCounter;
  signed long long int linkCounter;
  signed int num3;
  signed int num5;
  signed int weakPoint;
  signed int tempCounter;
  signed int j;
  signed int t;
  signed int counter = 0;
  struct connection *bindCnt;
  struct connection *cnt;
  struct connection *weakCnt;
  struct stack *scafStack1;
  struct stack *return_value_createStack_1;
  return_value_createStack_1=createStack(1000, sizeof(unsigned int) /*4ul*/ );
  scafStack1 = (struct stack *)return_value_createStack_1;
  struct stack *scafStack2;
  struct stack *return_value_createStack_2;
  return_value_createStack_2=createStack(1000, sizeof(unsigned int) /*4ul*/ );
  scafStack2 = (struct stack *)return_value_createStack_2;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    (contig_array + (signed long int)i)->flag = (unsigned char)0;
  i = (unsigned int)1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  signed int tmp_post_5;
  signed int tmp_post_8;
  signed int tmp_post_10;
  signed int tmp_post_12;
  void *return_value_darrayPut_13;
  void *return_value_darrayGet_14;
  signed int tmp_post_15;
  void *return_value_darrayPut_16;
  void *return_value_darrayGet_17;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_23;
  _Bool tmp_if_expr_22;
  _Bool tmp_if_expr_26;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!((contig_array + (signed long int)i)->flag == 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (contig_array + (signed long int)i)->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = !((contig_array + (signed long int)i)->downwardConnect != ((struct connection *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_4)
    {
      bindCnt=getBindCnt(i);
      if(!(bindCnt == ((struct connection *)NULL)))
      {
        linkCounter = (signed long long int)0;
        peCounter = linkCounter;
        num3 = (signed int)peCounter;
        num5 = num3;
        scafLen = (contig_array + (signed long int)i)->length;
        ctg = i;
        tmp_post_5 = num5;
        num5 = num5 + 1;
        void *return_value_darrayPut_6;
        return_value_darrayPut_6=darrayPut(scaf5, (signed long long int)tmp_post_5);
        *((unsigned int *)return_value_darrayPut_6) = i;
        (contig_array + (signed long int)i)->flag = (unsigned char)1;
        unsigned int return_value_getTwinCtg_7;
        return_value_getTwinCtg_7=getTwinCtg(i);
        (contig_array + (signed long int)return_value_getTwinCtg_7)->flag = (unsigned char)1;
        while(!(bindCnt == ((struct connection *)NULL)))
        {
          if(bindCnt->bySmall == 0)
            break;

          linkCounter = linkCounter + 1ll;
          peCounter = peCounter + (signed long long int)bindCnt->maxGap;
          ctg = bindCnt->contigID;
          scafLen = scafLen + (contig_array + (signed long int)ctg)->length;
          tmp_post_8 = num5;
          num5 = num5 + 1;
          void *return_value_darrayPut_9;
          return_value_darrayPut_9=darrayPut(scaf5, (signed long long int)tmp_post_8);
          *((unsigned int *)return_value_darrayPut_9) = ctg;
          bal_ctg=getTwinCtg(ctg);
          (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
          (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
          bindCnt = bindCnt->nextInScaf;
        }
        ctg=getTwinCtg(i);
        bindCnt=getBindCnt(ctg);
        while(!(bindCnt == ((struct connection *)NULL)))
        {
          if(bindCnt->bySmall == 0)
            break;

          linkCounter = linkCounter + 1ll;
          peCounter = peCounter + (signed long long int)bindCnt->maxGap;
          ctg = bindCnt->contigID;
          scafLen = scafLen + (contig_array + (signed long int)ctg)->length;
          bal_ctg=getTwinCtg(ctg);
          (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
          (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
          tmp_post_10 = num3;
          num3 = num3 + 1;
          void *return_value_darrayPut_11;
          return_value_darrayPut_11=darrayPut(scaf3, (signed long long int)tmp_post_10);
          *((unsigned int *)return_value_darrayPut_11) = bal_ctg;
          bindCnt = bindCnt->nextInScaf;
        }
        if(linkCounter >= 1l && scafLen >= 5000u)
        {
          avgPE = (unsigned int)(peCounter / linkCounter);
          if(avgPE >= 10u)
          {
            tempCounter = 0;
            j = num3 - 1;
            for( ; j >= 0; j = j - 1)
            {
              tmp_post_12 = tempCounter;
              tempCounter = tempCounter + 1;
              return_value_darrayPut_13=darrayPut(tempArray, (signed long long int)tmp_post_12);
              return_value_darrayGet_14=darrayGet(scaf3, (signed long long int)j);
              *((unsigned int *)return_value_darrayPut_13) = *((unsigned int *)return_value_darrayGet_14);
            }
            j = 0;
            for( ; !(j >= num5); j = j + 1)
            {
              tmp_post_15 = tempCounter;
              tempCounter = tempCounter + 1;
              return_value_darrayPut_16=darrayPut(tempArray, (signed long long int)tmp_post_15);
              return_value_darrayGet_17=darrayGet(scaf5, (signed long long int)j);
              *((unsigned int *)return_value_darrayPut_16) = *((unsigned int *)return_value_darrayGet_17);
            }
            void *return_value_darrayGet_18;
            return_value_darrayGet_18=darrayGet(tempArray, (signed long long int)0);
            prevCtg = *((unsigned int *)return_value_darrayGet_18);
            weakCnt = (struct connection *)(void *)0;
            weakPoint = 0;
            len = (contig_array + (signed long int)prevCtg)->length;
            t = 1;
            for( ; !(t >= tempCounter); t = t + 1)
            {
              void *return_value_darrayGet_19;
              return_value_darrayGet_19=darrayGet(tempArray, (signed long long int)t);
              thisCtg = *((unsigned int *)return_value_darrayGet_19);
              if(!(len >= 2000u))
              {
                len = len + (contig_array + (signed long int)thisCtg)->length;
                prevCtg = thisCtg;
                goto __CPROVER_DUMP_L25;
              }

              else
                if(!(scafLen + 4294965296u >= len))
                  break;

              len = len + (contig_array + (signed long int)thisCtg)->length;
              if(!((contig_array + (signed long int)prevCtg)->from_vt == (contig_array + (signed long int)thisCtg)->from_vt))
                tmp_if_expr_20 = (_Bool)1;

              else
                tmp_if_expr_20 = (signed int)(contig_array + (signed long int)prevCtg)->indexInScaf > (signed int)(contig_array + (signed long int)thisCtg)->indexInScaf ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_20)
                prevCtg = thisCtg;

              else
              {
                cnt=getCntBetween(prevCtg, thisCtg);
                if(weakCnt == ((struct connection *)NULL))
                  tmp_if_expr_21 = (_Bool)1;

                else
                  tmp_if_expr_21 = (signed int)weakCnt->maxGap > (signed int)cnt->maxGap ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_21)
                {
                  weakCnt = cnt;
                  weakPoint = t;
                }

                prevCtg = thisCtg;
              }

            __CPROVER_DUMP_L25:
              ;
            }
            if(weakCnt == ((struct connection *)NULL))
              tmp_if_expr_23 = (_Bool)1;

            else
            {
              if((signed int)weakCnt->maxGap >= 3)
                tmp_if_expr_22 = (unsigned int)weakCnt->maxGap > avgPE / (unsigned int)5 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_22 = (_Bool)0;
              tmp_if_expr_23 = tmp_if_expr_22 ? (_Bool)1 : (_Bool)0;
            }
            if(!tmp_if_expr_23)
            {
              void *return_value_darrayGet_24;
              return_value_darrayGet_24=darrayGet(tempArray, (signed long long int)(weakPoint - 1));
              prevCtg = *((unsigned int *)return_value_darrayGet_24);
              void *return_value_darrayGet_25;
              return_value_darrayGet_25=darrayGet(tempArray, (signed long long int)weakPoint);
              thisCtg = *((unsigned int *)return_value_darrayGet_25);
              if(!((contig_array + (signed long int)prevCtg)->from_vt == (contig_array + (signed long int)thisCtg)->from_vt))
                tmp_if_expr_26 = (_Bool)1;

              else
                tmp_if_expr_26 = (signed int)(contig_array + (signed long int)prevCtg)->indexInScaf > (signed int)(contig_array + (signed long int)thisCtg)->indexInScaf ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_26)
                printf("contig %d and %d not on the same scaff\n", prevCtg, thisCtg);

              else
              {
                setConnectWP(prevCtg, thisCtg, (char)1);
                signed int index1;
                signed int index2;
                setBreakPoints(tempArray, tempCounter, weakPoint - 1, &index1, &index2);
                unsigned int start;
                void *return_value_darrayGet_27;
                return_value_darrayGet_27=darrayGet(tempArray, (signed long long int)index1);
                start = *((unsigned int *)return_value_darrayGet_27);
                unsigned int finish;
                void *return_value_darrayGet_28;
                return_value_darrayGet_28=darrayGet(tempArray, (signed long long int)index2);
                finish = *((unsigned int *)return_value_darrayGet_28);
                signed int len1;
                unsigned int return_value_getTwinCtg_29;
                return_value_getTwinCtg_29=getTwinCtg(start);
                len1=getScaffold(return_value_getTwinCtg_29, scafStack1);
                signed int len2;
                len2=getScaffold(finish, scafStack2);
                if(len1 >= 2000 && len2 >= 2000)
                {
                  switch2twin(scafStack1);
                  signed int flag1;
                  char return_value_checkScafConsist_30;
                  return_value_checkScafConsist_30=checkScafConsist(scafStack1, scafStack2);
                  flag1 = (signed int)return_value_checkScafConsist_30;
                  switch2twin(scafStack1);
                  switch2twin(scafStack2);
                  signed int flag2;
                  char return_value_checkScafConsist_31;
                  return_value_checkScafConsist_31=checkScafConsist(scafStack2, scafStack1);
                  flag2 = (signed int)return_value_checkScafConsist_31;
                  if(flag1 == 0 || flag2 == 0)
                  {
                    unsigned int return_value_getTwinCtg_32;
                    return_value_getTwinCtg_32=getTwinCtg(start);
                    changeScafBegin(scafStack1, return_value_getTwinCtg_32);
                    unsigned int return_value_getTwinCtg_33;
                    return_value_getTwinCtg_33=getTwinCtg(finish);
                    changeScafEnd(scafStack2, return_value_getTwinCtg_33);
                    unsigned int nextCtg;
                    void *return_value_darrayGet_34;
                    return_value_darrayGet_34=darrayGet(tempArray, (signed long long int)(index1 + 1));
                    nextCtg = *((unsigned int *)return_value_darrayGet_34);
                    void *return_value_darrayGet_35;
                    return_value_darrayGet_35=darrayGet(tempArray, (signed long long int)index1);
                    thisCtg = *((unsigned int *)return_value_darrayGet_35);
                    unsigned int return_value_getTwinCtg_36;
                    return_value_getTwinCtg_36=getTwinCtg(nextCtg);
                    unsigned int return_value_getTwinCtg_37;
                    return_value_getTwinCtg_37=getTwinCtg(thisCtg);
                    cnt=getCntBetween(return_value_getTwinCtg_36, return_value_getTwinCtg_37);
                    if(!(cnt->nextInScaf == ((struct connection *)NULL)))
                    {
                      prevCtg=getTwinCtg(cnt->nextInScaf->contigID);
                      cnt->nextInScaf->prevInScaf = (unsigned char)0;
                      cnt=getCntBetween(prevCtg, thisCtg);
                      cnt->nextInScaf = (struct connection *)(void *)0;
                    }

                    void *return_value_darrayGet_38;
                    return_value_darrayGet_38=darrayGet(tempArray, (signed long long int)(index2 - 1));
                    prevCtg = *((unsigned int *)return_value_darrayGet_38);
                    void *return_value_darrayGet_39;
                    return_value_darrayGet_39=darrayGet(tempArray, (signed long long int)index2);
                    thisCtg = *((unsigned int *)return_value_darrayGet_39);
                    cnt=getCntBetween(prevCtg, thisCtg);
                    if(!(cnt->nextInScaf == ((struct connection *)NULL)))
                    {
                      nextCtg = cnt->nextInScaf->contigID;
                      cnt->nextInScaf->prevInScaf = (unsigned char)0;
                      unsigned int return_value_getTwinCtg_40;
                      return_value_getTwinCtg_40=getTwinCtg(nextCtg);
                      unsigned int return_value_getTwinCtg_41;
                      return_value_getTwinCtg_41=getTwinCtg(thisCtg);
                      cnt=getCntBetween(return_value_getTwinCtg_40, return_value_getTwinCtg_41);
                      cnt->nextInScaf = (struct connection *)(void *)0;
                    }

                    void *return_value_darrayGet_42;
                    return_value_darrayGet_42=darrayGet(tempArray, (signed long long int)index1);
                    prevCtg = *((unsigned int *)return_value_darrayGet_42);
                    t = index1 + 1;
                    for( ; index2 >= t; t = t + 1)
                    {
                      void *return_value_darrayGet_43;
                      return_value_darrayGet_43=darrayGet(tempArray, (signed long long int)t);
                      thisCtg = *((unsigned int *)return_value_darrayGet_43);
                      cnt=getCntBetween(prevCtg, thisCtg);
                      cnt->mask = (unsigned char)1;
                      cnt->nextInScaf = (struct connection *)(void *)0;
                      cnt->prevInScaf = (unsigned char)0;
                      unsigned int return_value_getTwinCtg_44;
                      return_value_getTwinCtg_44=getTwinCtg(thisCtg);
                      unsigned int return_value_getTwinCtg_45;
                      return_value_getTwinCtg_45=getTwinCtg(prevCtg);
                      cnt=getCntBetween(return_value_getTwinCtg_44, return_value_getTwinCtg_45);
                      cnt->mask = (unsigned char)1;
                      cnt->nextInScaf = (struct connection *)(void *)0;
                      cnt->prevInScaf = (unsigned char)0;
                      prevCtg = thisCtg;
                    }
                    counter = counter + 1;
                  }

                }

              }
            }

          }

        }

      }

    }

  }
  freeStack(scafStack1);
  freeStack(scafStack2);
  printf("Report from checkScaf: %d scaffold segments broken\n", counter);
}

// dfh_cascading_cut
// file dfib.c line 413
static void dfh_cascading_cut(struct dfibheap *h, struct dfibheap_el *y)
{
  struct dfibheap_el *z;
  do
  {
    z = y->dfhe_p;
    if(z == ((struct dfibheap_el *)NULL))
      break;

    if((signed int)y->dfhe_mark == 0)
    {
      y->dfhe_mark = (char)1;
      goto __CPROVER_DUMP_L5;
    }

    else
    {
      dfh_cut(h, y, z);
      y = z;
    }
  }
  while((_Bool)1);

__CPROVER_DUMP_L5:
  ;
}

// dfh_checkcons
// file dfib.c line 497
static void dfh_checkcons(struct dfibheap *h)
{
  signed long long int oDl;
  _Bool tmp_if_expr_3;
  if(h->dfh_Dl == -1l)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = h->dfh_n > (signed long int)(1 << h->dfh_Dl) ? (_Bool)1 : (_Bool)0;
  void *return_value_realloc_2;
  if(tmp_if_expr_3)
  {
    oDl = h->dfh_Dl;
    signed long long int return_value_ceillog2_1;
    return_value_ceillog2_1=ceillog2(h->dfh_n);
    h->dfh_Dl = return_value_ceillog2_1 + (signed long int)1;
    if(!(h->dfh_Dl >= 8l))
      h->dfh_Dl = (signed long long int)8;

    if(!(oDl == h->dfh_Dl))
    {
      return_value_realloc_2=realloc((void *)h->dfh_cons, sizeof(struct dfibheap_el *) /*8ul*/  * (unsigned long int)(h->dfh_Dl + (signed long int)1));
      h->dfh_cons = (struct dfibheap_el **)return_value_realloc_2;
    }

    if(h->dfh_cons == ((struct dfibheap_el **)NULL))
      abort();

  }

}

// dfh_compare
// file dfib.c line 521
static signed int dfh_compare(struct dfibheap *h, struct dfibheap_el *a, struct dfibheap_el *b)
{
  if(a->dfhe_key < b->dfhe_key)
    return -1;

  else
    if(IEEE_FLOAT_EQUAL(a->dfhe_key, b->dfhe_key))
      return 0;

    else
      return 1;
}

// dfh_comparedata
// file dfib.c line 533
static signed int dfh_comparedata(struct dfibheap *h, double key, unsigned int data, struct dfibheap_el *b)
{
  struct dfibheap_el a;
  a.dfhe_key = key;
  a.dfhe_data = data;
  signed int return_value_dfh_compare_1;
  return_value_dfh_compare_1=dfh_compare(h, &a, b);
  return return_value_dfh_compare_1;
}

// dfh_consolidate
// file dfib.c line 339
static void dfh_consolidate(struct dfibheap *h)
{
  struct dfibheap_el **a;
  struct dfibheap_el *w;
  struct dfibheap_el *y;
  struct dfibheap_el *x;
  signed long long int i;
  signed long long int d;
  signed long long int D;
  dfh_checkcons(h);
  D = h->dfh_Dl + (signed long int)1;
  a = h->dfh_cons;
  i = (signed long long int)0;
  for( ; !(i >= D); i = i + 1ll)
    a[i] = (struct dfibheap_el *)(void *)0;
  do
  {
    w = h->dfh_root;
    if(w == ((struct dfibheap_el *)NULL))
      break;

    x = w;
    dfh_removerootlist(h, w);
    d = (signed long long int)x->dfhe_degree;
    while(!(a[d] == ((struct dfibheap_el *)NULL)))
    {
      y = a[d];
      signed int return_value_dfh_compare_1;
      return_value_dfh_compare_1=dfh_compare(h, x, y);
      if(return_value_dfh_compare_1 >= 1)
        do
        {
          struct dfibheap_el *c = x;
          x = y;
          y = c;
        }
        while((_Bool)0);

      dfh_heaplink(h, y, x);
      a[d] = (struct dfibheap_el *)(void *)0;
      d = d + 1ll;
    }
    a[d] = x;
  }
  while((_Bool)1);
  h->dfh_min = (struct dfibheap_el *)(void *)0;
  i = (signed long long int)0;
  _Bool tmp_if_expr_3;
  signed int return_value_dfh_compare_2;
  for( ; !(i >= D); i = i + 1ll)
    if(!(a[i] == ((struct dfibheap_el *)NULL)))
    {
      dfh_insertrootlist(h, a[i]);
      if(h->dfh_min == ((struct dfibheap_el *)NULL))
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value_dfh_compare_2=dfh_compare(h, a[i], h->dfh_min);
        tmp_if_expr_3 = return_value_dfh_compare_2 < 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_3)
        h->dfh_min = a[i];

    }

}

// dfh_cut
// file dfib.c line 404
static void dfh_cut(struct dfibheap *h, struct dfibheap_el *x, struct dfibheap_el *y)
{
  dfhe_remove(x);
  y->dfhe_degree = y->dfhe_degree - 1;
  dfh_insertrootlist(h, x);
  x->dfhe_p = (struct dfibheap_el *)(void *)0;
  x->dfhe_mark = (char)0;
}

// dfh_delete
// file dfib.c line 269
unsigned int dfh_delete(struct dfibheap *h, struct dfibheap_el *x)
{
  unsigned int k = x->dfhe_data;
  dfh_replacekey(h, x, (double)(-0x7fffffff - 1));
  dfh_extractmin(h);
  return k;
}

// dfh_deleteheap
// file dfib.c line 136
void dfh_deleteheap(struct dfibheap *h)
{
  printf("DFibHeap: %lld Nodes allocated\n", h->nodeMemory->counter);
  freeMem_manager(h->nodeMemory);
  h->nodeMemory = (struct mem_manager *)(void *)0;
  if(!(h->dfh_cons == ((struct dfibheap_el **)NULL)))
    free((void *)h->dfh_cons);

  free((void *)h);
}

// dfh_extractmin
// file dfib.c line 245
unsigned int dfh_extractmin(struct dfibheap *h)
{
  struct dfibheap_el *z;
  unsigned int ret = (unsigned int)0;
  if(!(h->dfh_min == ((struct dfibheap_el *)NULL)))
  {
    z=dfh_extractminel(h);
    ret = z->dfhe_data;
    deallocateDFibHeapNode(z, h);
  }

  return ret;
}

// dfh_extractminel
// file dfib.c line 282
static struct dfibheap_el * dfh_extractminel(struct dfibheap *h)
{
  struct dfibheap_el *ret;
  struct dfibheap_el *x;
  struct dfibheap_el *y;
  struct dfibheap_el *orig;
  ret = h->dfh_min;
  orig = (struct dfibheap_el *)(void *)0;
  x = ret->dfhe_child;
  for( ; !(x == ((struct dfibheap_el *)NULL)) && !(x == orig); x = y)
  {
    if(orig == ((struct dfibheap_el *)NULL))
      orig = x;

    y = x->dfhe_right;
    x->dfhe_p = (struct dfibheap_el *)(void *)0;
    dfh_insertrootlist(h, x);
  }
  dfh_removerootlist(h, ret);
  h->dfh_n = h->dfh_n - 1ll;
  if(h->dfh_n == 0l)
    h->dfh_min = (struct dfibheap_el *)(void *)0;

  else
  {
    h->dfh_min = ret->dfhe_right;
    dfh_consolidate(h);
  }
  return ret;
}

// dfh_heaplink
// file dfib.c line 391
static void dfh_heaplink(struct dfibheap *h, struct dfibheap_el *y, struct dfibheap_el *x)
{
  if(x->dfhe_child == ((struct dfibheap_el *)NULL))
    x->dfhe_child = y;

  else
    dfhe_insertbefore(x->dfhe_child, y);
  y->dfhe_p = x;
  x->dfhe_degree = x->dfhe_degree + 1;
  y->dfhe_mark = (char)0;
}

// dfh_insertel
// file dfib.c line 541
static void dfh_insertel(struct dfibheap *h, struct dfibheap_el *x)
{
  dfh_insertrootlist(h, x);
  _Bool tmp_if_expr_1;
  if(h->dfh_min == ((struct dfibheap_el *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = x->dfhe_key < h->dfh_min->dfhe_key ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    h->dfh_min = x;

  h->dfh_n = h->dfh_n + 1ll;
}

// dfh_insertkey
// file dfib.c line 151
struct dfibheap_el * dfh_insertkey(struct dfibheap *h, double key, unsigned int data)
{
  struct dfibheap_el *x;
  x=dfhe_newelem(h);
  if(x == ((struct dfibheap_el *)NULL))
    return (struct dfibheap_el *)(void *)0;

  else
  {
    x->dfhe_data = data;
    x->dfhe_key = key;
    dfh_insertel(h, x);
    return x;
  }
}

// dfh_insertrootlist
// file dfib.c line 318
static void dfh_insertrootlist(struct dfibheap *h, struct dfibheap_el *x)
{
  if(h->dfh_root == ((struct dfibheap_el *)NULL))
  {
    h->dfh_root = x;
    x->dfhe_left = x;
    x->dfhe_right = x;
  }

  else
    dfhe_insertafter(h->dfh_root, x);
}

// dfh_makekeyheap
// file dfib.c line 120
struct dfibheap * dfh_makekeyheap(void)
{
  struct dfibheap *n;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct dfibheap) /*48ul*/ );
  n = (struct dfibheap *)return_value_malloc_1;
  if(n == ((struct dfibheap *)NULL))
    return (struct dfibheap *)(void *)0;

  else
  {
    n->nodeMemory=createMem_manager(1000, sizeof(struct dfibheap_el) /*56ul*/ );
    n->dfh_n = (signed long long int)0;
    n->dfh_Dl = (signed long long int)-1;
    n->dfh_cons = (struct dfibheap_el **)(void *)0;
    n->dfh_min = (struct dfibheap_el *)(void *)0;
    n->dfh_root = (struct dfibheap_el *)(void *)0;
    return n;
  }
}

// dfh_removerootlist
// file dfib.c line 331
static void dfh_removerootlist(struct dfibheap *h, struct dfibheap_el *x)
{
  if(x->dfhe_left == x)
    h->dfh_root = (struct dfibheap_el *)(void *)0;

  else
    h->dfh_root=dfhe_remove(x);
}

// dfh_replacedata
// file dfib.c line 261
unsigned int dfh_replacedata(struct dfibheap_el *x, unsigned int data)
{
  unsigned int odata = x->dfhe_data;
  x->dfhe_data = data;
  return odata;
}

// dfh_replacekey
// file dfib.c line 165
double dfh_replacekey(struct dfibheap *h, struct dfibheap_el *x, double key)
{
  double ret = x->dfhe_key;
  dfh_replacekeydata(h, x, key, x->dfhe_data);
  return ret;
}

// dfh_replacekeydata
// file dfib.c line 189
unsigned int dfh_replacekeydata(struct dfibheap *h, struct dfibheap_el *x, double key, unsigned int data)
{
  unsigned int odata;
  double okey;
  struct dfibheap_el *y;
  signed int r;
  odata = x->dfhe_data;
  okey = x->dfhe_key;
  r=dfh_comparedata(h, key, data, x);
  if(r >= 1)
    abort();

  x->dfhe_data = data;
  x->dfhe_key = key;
  signed int return_value_dfh_compare_1;
  if(r == 0)
    return odata;

  else
  {
    y = x->dfhe_p;
    if(IEEE_FLOAT_EQUAL(okey, key))
      return odata;

    else
    {
      if(!(y == ((struct dfibheap_el *)NULL)))
      {
        return_value_dfh_compare_1=dfh_compare(h, x, y);
        if(!(return_value_dfh_compare_1 >= 1))
        {
          dfh_cut(h, x, y);
          dfh_cascading_cut(h, y);
        }

      }

      signed int return_value_dfh_compare_2;
      return_value_dfh_compare_2=dfh_compare(h, x, h->dfh_min);
      if(!(return_value_dfh_compare_2 >= 1))
        h->dfh_min = x;

      return odata;
    }
  }
}

// dfhe_insertafter
// file dfib.c line 452
static void dfhe_insertafter(struct dfibheap_el *a, struct dfibheap_el *b)
{
  if(a == a->dfhe_right)
  {
    a->dfhe_right = b;
    a->dfhe_left = b;
    b->dfhe_right = a;
    b->dfhe_left = a;
  }

  else
  {
    b->dfhe_right = a->dfhe_right;
    a->dfhe_right->dfhe_left = b;
    a->dfhe_right = b;
    b->dfhe_left = a;
  }
}

// dfhe_insertbefore
// file dfib.c line 470
static inline void dfhe_insertbefore(struct dfibheap_el *a, struct dfibheap_el *b)
{
  dfhe_insertafter(a->dfhe_left, b);
}

// dfhe_newelem
// file dfib.c line 435
static struct dfibheap_el * dfhe_newelem(struct dfibheap *h)
{
  struct dfibheap_el *e;
  e=allocateDFibHeapNode(h);
  if(e == ((struct dfibheap_el *)NULL))
    return (struct dfibheap_el *)(void *)0;

  else
  {
    e->dfhe_degree = 0;
    e->dfhe_mark = (char)0;
    e->dfhe_p = (struct dfibheap_el *)(void *)0;
    e->dfhe_child = (struct dfibheap_el *)(void *)0;
    e->dfhe_left = e;
    e->dfhe_right = e;
    e->dfhe_data = (unsigned int)0;
    return e;
  }
}

// dfhe_remove
// file dfib.c line 475
static struct dfibheap_el * dfhe_remove(struct dfibheap_el *x)
{
  struct dfibheap_el *ret;
  if(x == x->dfhe_left)
    ret = (struct dfibheap_el *)(void *)0;

  else
    ret = x->dfhe_left;
  if(!(x->dfhe_p == ((struct dfibheap_el *)NULL)))
  {
    if(x->dfhe_p->dfhe_child == x)
      x->dfhe_p->dfhe_child = ret;

  }

  x->dfhe_right->dfhe_left = x->dfhe_left;
  x->dfhe_left->dfhe_right = x->dfhe_right;
  x->dfhe_p = (struct dfibheap_el *)(void *)0;
  x->dfhe_left = x;
  x->dfhe_right = x;
  return ret;
}

// dfibheap_el_getKey
// file dfib.c line 551
double dfibheap_el_getKey(struct dfibheap_el *node)
{
  return node->dfhe_key;
}

// dfibheap_getSize
// file dfib.c line 70
signed long long int dfibheap_getSize(struct dfibheap *heap)
{
  return heap->dfh_n;
}

// dislink2nextUncertain
// file newhash.c line 370
extern void dislink2nextUncertain(struct kmer_st *node, char ch, char smaller)
{
  if(!(smaller == 0))
    node->r_links = (unsigned int)node->r_links & ~(0x3FU << (signed int)ch * 6) | ((unsigned int)0 & 0x3FU) << (signed int)ch * 6;

  else
    node->l_links = node->l_links & ~(0x3FU << (signed int)(char)((signed int)ch ^ 0x02) * 6) | ((unsigned int)0 & 0x3FU) << (signed int)(char)((signed int)ch ^ 0x02) * 6;
}

// dislink2prevUncertain
// file inc/newhash.h line 95
extern void dislink2prevUncertain(struct kmer_st *node, char ch, char smaller)
{
  if(!(smaller == 0))
    node->l_links = node->l_links & ~(0x3FU << (signed int)ch * 6) | ((unsigned int)0 & 0x3FU) << (signed int)ch * 6;

  else
    node->r_links = (unsigned int)node->r_links & ~(0x3FU << (signed int)(char)((signed int)ch ^ 0x02) * 6) | ((unsigned int)0 & 0x3FU) << (signed int)(char)((signed int)ch ^ 0x02) * 6;
}

// dismissArc
// file arc.c line 145
extern void dismissArc(struct arc *arc)
{
  returnItem(arc_mem_manager, (void *)arc);
}

// dismissRV
// file inc/extfunc.h line 66
extern void dismissRV(struct readinterval *rv)
{
  returnItem(rv_mem_manager, (void *)rv);
}

// dispatch1node
// file orderContig.c line 3038
static char dispatch1node(signed int dis, unsigned int tempNode, signed int maxNodes, struct fibheap *dheap, struct fibheap *uheap, signed int *DmaxDis, signed int *UmaxDis)
{
  char ret;
  if(dis >= 0)
  {
    nodeCounter_link1 = nodeCounter_link1 + 1;
    ret=putNodeInArray(tempNode, maxNodes, dis);
    if(ret == 0)
      return (char)0;

    insertNodeIntoHeap(dheap, (signed long long int)dis, (unsigned int)nodeCounter_link1);
    if(!(*DmaxDis >= dis))
      *DmaxDis = dis;

    return (char)1;
  }

  else
  {
    nodeCounter_link1 = nodeCounter_link1 + 1;
    ret=putNodeInArray(tempNode, maxNodes, dis);
    if(ret == 0)
      return (char)0;

    insertNodeIntoHeap(uheap, (signed long long int)-dis, (unsigned int)nodeCounter_link1);
    signed int temp_len = (signed int)(contig_array + (signed long int)tempNode)->length;
    if(!(*UmaxDis >= temp_len + -dis))
      *UmaxDis = (signed int)((unsigned int)-dis + (contig_array + (signed long int)tempNode)->length);

    return (char)-1;
  }
  return (char)0;
}

// display_all_usage
// file main.c line 298
static void display_all_usage()
{
  printf("\nSOAPdenovo all -s configFile [-a initMemoryAssumption -K kmer -d KmerFreqCutOff -D EdgeCovCutoff -M mergeLevel -R -u -G gapLenDiff -L minContigLen -p n_cpu] -o Output\n");
  printf("  -s ShortSeqFile: The input file name of solexa reads\n");
  printf("  -a initMemoryAssumption: Initiate the memory assumption to avoid further reallocation\n");
  printf("  -K kmer(default 23): k value in kmer\n");
  printf("  -p n_cpu(default 8): number of cpu for use\n");
  printf("  -F (optional) fill gaps in scaffold\n");
  printf("  -M mergeLevel(default 1,min 0, max 3): the strength of merging similar sequences during contiging\n");
  printf("  -d KmerFreqCutoff(optional): delete kmers with frequency no larger than (default 0)\n");
  printf("  -D EdgeCovCutoff(optional): delete edges with coverage no largert than (default 1)\n");
  printf("  -R (optional): unsolve repeats by reads (default no)\n");
  printf("  -G gapLenDiff(default 50): allowed length difference between estimated and filled gap\n");
  printf("  -L minLen(default K+2): shortest contig for scaffolding\n");
  printf("  -u (optional): un-mask contigs with high coverage before scaffolding (default mask)\n");
  printf("  -o Output: prefix of output file name\n");
}

// display_contig_usage
// file contig.c line 148
static void display_contig_usage()
{
  printf("\ncontig -g InputGraph [-M mergeLevel -D EdgeCovCutoff -R]\n");
  printf("  -g InputFile: prefix of graph file names\n");
  printf("  -D EdgeCovCutoff(optional): delete edges with coverage no largert than (default 1)\n");
  printf("  -M mergeLevel(default 1,min 0, max 3): the strength of merging similar sequences during contiging\n");
  printf("  -R solve_repeats (optional): solve repeats by read paths(default: no)\n");
}

// display_map_usage
// file map.c line 144
static void display_map_usage()
{
  printf("\nmap -s readsInfoFile -g graphfile [-p n_cpu]\n");
  printf("  -s readsInfoFile: The file contains information of solexa reads\n");
  printf("  -p n_cpu(default 8): number of cpu for use\n");
  printf("  -g graphfile: prefix of graph files\n");
}

// display_pregraph_usage
// file pregraph.c line 166
static void display_pregraph_usage()
{
  printf("\npregraph -s readsInfoFile [-d KmerFreqCutoff -R -K kmer -p n_cpu] -o OutputFile\n");
  printf("  -s readsInfoFile: The file contains information of solexa reads\n");
  printf("  -a initMemoryAssumption: Initiate the memory assumption to avoid further reallocation\n");
  printf("  -p n_cpu(default 8): number of cpu for use\n");
  printf("  -K kmer(default 21): k value in kmer\n");
  printf("  -d KmerFreqCutoff(optional): delete kmers with frequency no larger than (default 0)\n");
  printf("  -R (optional): unsolve repeats by reads (default no)\n");
  printf("  -o OutputFile: prefix of output file name\n");
}

// display_scaff_usage
// file scaffold.c line 136
static void display_scaff_usage()
{
  printf("\nscaff -g InputGraph [-F -u -S] [-G gapLenDiff -L minContigLen] [-p n_cpu]\n");
  printf("  -g InputFile: prefix of graph file names\n");
  printf("  -F (optional) fill gaps in scaffold\n");
  printf("  -S (optional) scaffold structure exists(default: NO)\n");
  printf("  -G gapLenDiff(default 50): allowed length difference between estimated and filled gap\n");
  printf("  -u (optional): un-mask contigs with high coverage before scaffolding (default mask)\n");
  printf("  -p n_cpu(default 8): number of cpu for use\n");
  printf("  -L minLen(default K+2): shortest contig for scaffolding\n");
}

// display_usage
// file main.c line 80
static void display_usage()
{
  printf("\nUsage: SOAPdenovo <command> [option]\n");
  printf("    pregraph     construction kmer-graph\n");
  printf("    contig       eliminate errors and output contigs\n");
  printf("    map          map reads to contigs\n");
  printf("    scaff        scaffolding\n");
  printf("    all          doing all the above in turn\n");
}

// downSlide
// file orderContig.c line 226
static void downSlide()
{
  signed int len = 0;
  signed int gap;
  unsigned int i;
  struct connection *ite_cnt;
  struct connection *bindCnt;
  struct connection *temp_cnt;
  unsigned int bottomCtg;
  unsigned int topCtg;
  unsigned int bal_i;
  unsigned int targetCtg;
  unsigned int bal_target;
  char getThrough;
  char orienConflict;
  signed int slideLen;
  signed int slideLen2;
  throughCounter = 0;
  orienCounter = throughCounter;
  i = (unsigned int)1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!((contig_array + (signed long int)i)->mask == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = !((contig_array + (signed long int)i)->downwardConnect != ((struct connection *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
    {
      bindCnt=getBindCnt(i);
      if(!(bindCnt == ((struct connection *)NULL)))
      {
        bal_i=getTwinCtg(i);
        slideLen = 0;
        len = slideLen;
        bottomCtg = i;
        for( ; !(bindCnt->nextInScaf == ((struct connection *)NULL)); bindCnt = bindCnt->nextInScaf)
        {
          len = len + (signed int)((unsigned int)bindCnt->gapLen + (contig_array + (signed long int)bindCnt->contigID)->length);
          if((signed int)(contig_array + (signed long int)bindCnt->contigID)->mask == 0)
          {
            bottomCtg = bindCnt->contigID;
            slideLen = len;
          }

        }
        len = len + (signed int)((unsigned int)bindCnt->gapLen + (contig_array + (signed long int)bindCnt->contigID)->length);
        if(bottomCtg == 0u || (signed int)(contig_array + (signed long int)bindCnt->contigID)->mask == 0)
        {
          bottomCtg = bindCnt->contigID;
          slideLen = len;
        }

        ite_cnt = (contig_array + (signed long int)i)->downwardConnect;
        while(!(ite_cnt == ((struct connection *)NULL)))
        {
          if(!(ite_cnt->deleted == 0))
            tmp_if_expr_2 = (_Bool)1;

          else
            tmp_if_expr_2 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_2)
            tmp_if_expr_3 = (_Bool)1;

          else
            tmp_if_expr_3 = ite_cnt->singleInScaf != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_3)
            tmp_if_expr_4 = (_Bool)1;

          else
            tmp_if_expr_4 = ite_cnt->nextInScaf != ((struct connection *)NULL) ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_4)
            tmp_if_expr_5 = (_Bool)1;

          else
            tmp_if_expr_5 = ite_cnt->prevInScaf != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_5)
            tmp_if_expr_6 = (_Bool)1;

          else
            tmp_if_expr_6 = ite_cnt->inherit != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_6)
            ite_cnt = ite_cnt->next;

          else
          {
            targetCtg = ite_cnt->contigID;
            if((contig_array + (signed long int)i)->from_vt == (contig_array + (signed long int)targetCtg)->from_vt)
            {
              if(!((signed int)(contig_array + (signed long int)targetCtg)->indexInScaf >= (signed int)(contig_array + (signed long int)i)->indexInScaf))
                orienCounter = orienCounter + 1;

              else
                throughCounter = throughCounter + 1;
              setConnectDelete(i, ite_cnt->contigID, (char)1, (char)0);
              ite_cnt = ite_cnt->next;
            }

            else
            {
              temp_cnt=getBindCnt(targetCtg);
              orienConflict = (char)0;
              if(!(temp_cnt == ((struct connection *)NULL)))
              {
                for( ; !(temp_cnt->nextInScaf == ((struct connection *)NULL)); temp_cnt = temp_cnt->nextInScaf)
                  if(temp_cnt->contigID == i)
                  {
                    orienConflict = (char)1;
                    printf("Warning from downSlide: still on the same scaff: %d and %d\n", i, targetCtg);
                    printf("on scaff %d and %d\n", (contig_array + (signed long int)i)->from_vt, (contig_array + (signed long int)targetCtg)->from_vt);
                    printf("on bal_scaff %d and %d\n", (contig_array + (signed long int)bal_target)->to_vt, (contig_array + (signed long int)bal_i)->to_vt);
                    break;
                  }

                if(temp_cnt->contigID == i)
                  orienConflict = (char)1;

              }

              if(!(orienConflict == 0))
              {
                orienCounter = orienCounter + 1;
                setConnectDelete(i, ite_cnt->contigID, (char)1, (char)0);
                ite_cnt = ite_cnt->next;
              }

              else
              {
                bal_target=getTwinCtg(targetCtg);
                slideLen2 = 0;
                if((signed int)(contig_array + (signed long int)targetCtg)->mask == 0)
                  topCtg = bal_target;

                else
                  topCtg = (unsigned int)0;
                temp_cnt=getBindCnt(bal_target);
                len = 0;
                getThrough = (char)len;
                if(!(temp_cnt == ((struct connection *)NULL)))
                {
                  for( ; !(temp_cnt->nextInScaf == ((struct connection *)NULL)); temp_cnt = temp_cnt->nextInScaf)
                  {
                    if(temp_cnt->contigID == bal_i)
                    {
                      printf("Warning from downSlide: (B) still on the same scaff: %d and %d (%d and %d)\n", i, targetCtg, bal_target, bal_i);
                      printf("on scaff %d and %d\n", (contig_array + (signed long int)i)->from_vt, (contig_array + (signed long int)targetCtg)->from_vt);
                      printf("on bal_scaff %d and %d\n", (contig_array + (signed long int)bal_target)->to_vt, (contig_array + (signed long int)bal_i)->to_vt);
                      getThrough = (char)1;
                      break;
                    }

                    len = len + (signed int)((unsigned int)temp_cnt->gapLen + (contig_array + (signed long int)temp_cnt->contigID)->length);
                    if((signed int)(contig_array + (signed long int)temp_cnt->contigID)->mask == 0)
                    {
                      topCtg = temp_cnt->contigID;
                      slideLen2 = len;
                    }

                  }
                  len = len + (signed int)((unsigned int)temp_cnt->gapLen + (contig_array + (signed long int)temp_cnt->contigID)->length);
                  if(topCtg == 0u || (signed int)(contig_array + (signed long int)temp_cnt->contigID)->mask == 0)
                  {
                    topCtg = temp_cnt->contigID;
                    slideLen2 = len;
                  }

                  if(temp_cnt->contigID == bal_i)
                    getThrough = (char)1;

                  else
                    topCtg=getTwinCtg(topCtg);
                }

                else
                  topCtg = targetCtg;
                if(!(getThrough == 0))
                {
                  throughCounter = throughCounter + 1;
                  setConnectDelete(i, ite_cnt->contigID, (char)1, (char)0);
                  ite_cnt = ite_cnt->next;
                }

                else
                {
                  gap = (ite_cnt->gapLen - slideLen) - slideLen2;
                  if(!(bottomCtg == topCtg) && (!(i == bottomCtg) || !(targetCtg == topCtg)))
                  {
                    createAnalogousCnt(i, ite_cnt, gap, bottomCtg, topCtg);
                    if(!((contig_array + (signed long int)bottomCtg)->mask == 0))
                      tmp_if_expr_7 = (_Bool)1;

                    else
                      tmp_if_expr_7 = (contig_array + (signed long int)topCtg)->mask != 0 ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr_7)
                      printf("downSlide to masked contig\n");

                  }

                  ite_cnt = ite_cnt->next;
                }
              }
            }
          }
        }
      }

    }

  }
  printf("downSliding is done...orienConflict %d, fall inside %d\n", orienCounter, throughCounter);
}

// edgeMove
// file compactEdge.c line 47
void edgeMove(unsigned int source, unsigned int target)
{
  unsigned int bal_source;
  unsigned int bal_target;
  struct arc *arc;
  copyEdge(source, target);
  bal_source=getTwinEdge(source);
  if(!(bal_source == source))
  {
    bal_target = target + (unsigned int)1;
    copyEdge(bal_source, bal_target);
    (edge_array + (signed long int)target)->bal_edge = (unsigned short int)2;
    (edge_array + (signed long int)bal_target)->bal_edge = (unsigned short int)0;
  }

  else
  {
    (edge_array + (signed long int)target)->bal_edge = (unsigned short int)1;
    bal_target = target;
  }
  arc = (edge_array + (signed long int)target)->arcs;
  for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
    arc->bal_arc->to_ed = bal_target;
  if(!(bal_target == target))
  {
    arc = (edge_array + (signed long int)bal_target)->arcs;
    for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
      arc->bal_arc->to_ed = target;
  }

}

// emptyDarray
// file darray.c line 65
void emptyDarray(struct dynamic_array *darray)
{
  darray->item_c = (signed long long int)0;
}

// emptyStack
// file inc/stack.h line 53
void emptyStack(struct stack *astack)
{
  struct block_starter *block;
  _Bool tmp_if_expr_1;
  if(astack == ((struct stack *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(astack->block_list != ((struct block_starter *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr_1)
  {
    block = astack->block_list;
    if(!(block->next == ((struct block_starter *)NULL)))
      block = block->next;

    astack->block_list = block;
    astack->item_c = 0;
    astack->index_in_block = 0;
  }

}

// encap_kmerset
// file newhash.c line 175
static inline void encap_kmerset(struct kmerSet_st *set, unsigned long long int num)
{
  unsigned int *encap_kmerset__1__flags;
  unsigned int *f;
  unsigned long long int i;
  unsigned long long int n;
  unsigned long long int size;
  unsigned long long int hc;
  struct kmer_st key;
  struct kmer_st tmp;
  _Bool tmp_if_expr_3;
  if(!(set->max >= set->count + num))
  {
    if(!(initKmerSetSize == 0))
    {
      if(set->load_factor < 0.88)
      {
        set->load_factor = 0.88;
        set->max = (unsigned long long int)((double)set->size * set->load_factor);
        goto __CPROVER_DUMP_L19;
      }

      else
      {
        fprintf(stderr, "-- Static memory pool exploded, please define a larger value. --\nloadFactor\t%f\nsize\t%llu\ncnt\t%llu\n", set->load_factor, set->size, set->count);
        abort();
      }
    }

    n = set->size;
    while((_Bool)1)
    {
      if(!(n >= 268435455ul))
        n = n << 1;

      else
        n = n + (unsigned long long int)0xFFFFFFU;
      n=find_next_prime_kh(n);
      if(!((double)n * set->load_factor < (double)(set->count + num)))
        break;

    }
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)set->array, n * sizeof(struct kmer_st) /*16ul*/ );
    set->array = (struct kmer_st *)return_value_realloc_1;
    if(set->array == ((struct kmer_st *)NULL))
    {
      fprintf(stderr, "-- Out of memory --\n");
      abort();
    }

    void *return_value_malloc_2;
    return_value_malloc_2=malloc(((n + (unsigned long int)15) / (unsigned long int)16) * (unsigned long int)4);
    encap_kmerset__1__flags = (unsigned int *)return_value_malloc_2;
    memset((void *)encap_kmerset__1__flags, 0x55, ((n + (unsigned long int)15) / (unsigned long int)16) * (unsigned long int)4);
    size = set->size;
    set->size = n;
    set->max = (unsigned long long int)((double)n * set->load_factor);
    f = set->flags;
    set->flags = encap_kmerset__1__flags;
    encap_kmerset__1__flags = f;
    i = (unsigned long long int)0;
    for( ; !(i >= size); i = i + 1ull)
      if((3u & encap_kmerset__1__flags[(signed long int)(i >> 4)] >> ((15ul & i) << 1)) == 0u)
      {
        key = set->array[(signed long int)i];
        encap_kmerset__1__flags[(signed long int)(i >> 4)] = encap_kmerset__1__flags[(signed long int)(i >> 4)] | 0x02u << ((i & (unsigned long int)0x0f) << 1);
        while((_Bool)1)
        {
          hc = key.seq % set->size;
          while((1u & set->flags[(signed long int)(hc >> 4)] >> ((15ul & hc) << 1)) == 0u)
          {
            hc = hc + 1ull;
            if(hc == set->size)
              hc = (unsigned long long int)0;

          }
          set->flags[(signed long int)(hc >> 4)] = set->flags[(signed long int)(hc >> 4)] & ~(0x01u << ((hc & (unsigned long int)0x0f) << 1));
          if(!(hc >= size))
            tmp_if_expr_3 = !((encap_kmerset__1__flags[(signed long int)(hc >> 4)] >> ((hc & (unsigned long int)0x0f) << 1) & (unsigned int)0x03) != 0u) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_3 = (_Bool)0;
          if(tmp_if_expr_3)
          {
            tmp = key;
            key = set->array[(signed long int)hc];
            set->array[(signed long int)hc] = tmp;
            encap_kmerset__1__flags[(signed long int)(hc >> 4)] = encap_kmerset__1__flags[(signed long int)(hc >> 4)] | 0x02u << ((hc & (unsigned long int)0x0f) << 1);
          }

          else
          {
            set->array[(signed long int)hc] = key;
            break;
          }
        }
      }

    free((void *)encap_kmerset__1__flags);
  }


__CPROVER_DUMP_L19:
  ;
}

// extractSequence
// file bubble.c line 336
static signed int extractSequence(struct readinterval *path, char *sequence)
{
  struct readinterval *marker;
  signed int seqLength;
  signed int writeIndex = 0;
  seqLength = writeIndex;
  path->start = -10;
  marker = path->nextInRead;
  for( ; !(marker->nextInRead == ((struct readinterval *)NULL)); marker = marker->nextInRead)
  {
    marker->start = seqLength;
    seqLength = seqLength + (edge_array + (signed long int)marker->edgeid)->length;
  }
  marker->start = seqLength;
  if(seqLength >= 101)
    return 0;

  else
  {
    marker = path->nextInRead;
    for( ; !(marker->nextInRead == ((struct readinterval *)NULL)); marker = marker->nextInRead)
      if(!((edge_array + (signed long int)marker->edgeid)->length == 0))
      {
        if(!((edge_array + (signed long int)marker->edgeid)->seq == ((char *)NULL)))
        {
          copySeq(sequence, (edge_array + (signed long int)marker->edgeid)->seq, writeIndex, (edge_array + (signed long int)marker->edgeid)->length);
          writeIndex = writeIndex + (edge_array + (signed long int)marker->edgeid)->length;
        }

      }

    return seqLength;
  }
}

// fastReverseComp
// file seq.c line 58
static unsigned long long int fastReverseComp(unsigned long long int seq, char seq_size)
{
  seq = seq ^ 0xAAAAAAAAAAAAAAAALLU;
  seq = (seq & 0x3333333333333333LLU) << 2 | (seq & 0xCCCCCCCCCCCCCCCCLLU) >> 2;
  seq = (seq & 0x0F0F0F0F0F0F0F0FLLU) << 4 | (seq & 0xF0F0F0F0F0F0F0F0LLU) >> 4;
  seq = (seq & 0x00FF00FF00FF00FFLLU) << 8 | (seq & 0xFF00FF00FF00FF00LLU) >> 8;
  seq = (seq & 0x0000FFFF0000FFFFLLU) << 16 | (seq & 0xFFFF0000FFFF0000LLU) >> 16;
  seq = (seq & 0x00000000FFFFFFFFLLU) << 32 | (seq & 0xFFFFFFFF00000000LLU) >> 32;
  return seq >> 64 - ((signed int)seq_size << 1);
}

// fh_cascading_cut
// file fib.c line 519
static void fh_cascading_cut(struct fibheap *h, struct fibheap_el *y)
{
  struct fibheap_el *z;
  do
  {
    z = y->fhe_p;
    if(z == ((struct fibheap_el *)NULL))
      break;

    if((signed int)y->fhe_mark == 0)
    {
      y->fhe_mark = (char)1;
      goto __CPROVER_DUMP_L5;
    }

    else
    {
      fh_cut(h, y, z);
      y = z;
    }
  }
  while((_Bool)1);

__CPROVER_DUMP_L5:
  ;
}

// fh_checkcons
// file fib.c line 608
static void fh_checkcons(struct fibheap *h)
{
  signed long long int oDl;
  _Bool tmp_if_expr_3;
  if(h->fh_Dl == -1l)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = h->fh_n > (signed long int)(1 << h->fh_Dl) ? (_Bool)1 : (_Bool)0;
  void *return_value_realloc_2;
  if(tmp_if_expr_3)
  {
    oDl = h->fh_Dl;
    signed long long int return_value_ceillog2_1;
    return_value_ceillog2_1=ceillog2_link1(h->fh_n);
    h->fh_Dl = return_value_ceillog2_1 + (signed long int)1;
    if(!(h->fh_Dl >= 8l))
      h->fh_Dl = (signed long long int)8;

    if(!(oDl == h->fh_Dl))
    {
      return_value_realloc_2=realloc((void *)h->fh_cons, sizeof(struct fibheap_el *) /*8ul*/  * (unsigned long int)(h->fh_Dl + (signed long int)1));
      h->fh_cons = (struct fibheap_el **)return_value_realloc_2;
    }

    if(h->fh_cons == ((struct fibheap_el **)NULL))
      abort();

  }

}

// fh_compare
// file fib.c line 632
static signed int fh_compare(struct fibheap *h, struct fibheap_el *a, struct fibheap_el *b)
{
  if(!(a->fhe_key >= b->fhe_key))
    return -1;

  else
    if(a->fhe_key == b->fhe_key)
      return 0;

    else
      return 1;
}

// fh_comparedata
// file fib.c line 644
static signed int fh_comparedata(struct fibheap *h, signed long long int key, unsigned int data, struct fibheap_el *b)
{
  struct fibheap_el a;
  a.fhe_key = key;
  a.fhe_data = data;
  signed int return_value_fh_compare_1;
  return_value_fh_compare_1=fh_compare(h, &a, b);
  return return_value_fh_compare_1;
}

// fh_consolidate
// file fib.c line 445
static void fh_consolidate(struct fibheap *h)
{
  struct fibheap_el **a;
  struct fibheap_el *w;
  struct fibheap_el *y;
  struct fibheap_el *x;
  signed long long int i;
  signed long long int d;
  signed long long int D;
  fh_checkcons(h);
  D = h->fh_Dl + (signed long int)1;
  a = h->fh_cons;
  i = (signed long long int)0;
  for( ; !(i >= D); i = i + 1ll)
    a[i] = (struct fibheap_el *)(void *)0;
  do
  {
    w = h->fh_root;
    if(w == ((struct fibheap_el *)NULL))
      break;

    x = w;
    fh_removerootlist(h, w);
    d = (signed long long int)x->fhe_degree;
    while(!(a[d] == ((struct fibheap_el *)NULL)))
    {
      y = a[d];
      signed int return_value_fh_compare_1;
      return_value_fh_compare_1=fh_compare(h, x, y);
      if(return_value_fh_compare_1 >= 1)
        do
        {
          struct fibheap_el *c = x;
          x = y;
          y = c;
        }
        while((_Bool)0);

      fh_heaplink(h, y, x);
      a[d] = (struct fibheap_el *)(void *)0;
      d = d + 1ll;
    }
    a[d] = x;
  }
  while((_Bool)1);
  h->fh_min = (struct fibheap_el *)(void *)0;
  i = (signed long long int)0;
  _Bool tmp_if_expr_3;
  signed int return_value_fh_compare_2;
  for( ; !(i >= D); i = i + 1ll)
    if(!(a[i] == ((struct fibheap_el *)NULL)))
    {
      fh_insertrootlist(h, a[i]);
      if(h->fh_min == ((struct fibheap_el *)NULL))
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value_fh_compare_2=fh_compare(h, a[i], h->fh_min);
        tmp_if_expr_3 = return_value_fh_compare_2 < 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_3)
        h->fh_min = a[i];

    }

}

// fh_cut
// file fib.c line 510
static void fh_cut(struct fibheap *h, struct fibheap_el *x, struct fibheap_el *y)
{
  fhe_remove(x);
  y->fhe_degree = y->fhe_degree - 1;
  fh_insertrootlist(h, x);
  x->fhe_p = (struct fibheap_el *)(void *)0;
  x->fhe_mark = (char)0;
}

// fh_delete
// file fib.c line 371
unsigned int fh_delete(struct fibheap *h, struct fibheap_el *x)
{
  unsigned int k = x->fhe_data;
  if(h->fh_keys == 0)
    fh_replacedata(x, h->fh_neginf);

  else
    fh_replacekey(h, x, (signed long long int)(-0x7fffffff - 1));
  fh_extractmin(h);
  return k;
}

// fh_deleteheap
// file fib.c line 221
void fh_deleteheap(struct fibheap *h)
{
  freeMem_manager(h->nodeMemory);
  h->nodeMemory = (struct mem_manager *)(void *)0;
  fh_destroyheap(h);
}

// fh_destroyheap
// file fib.c line 130
static void fh_destroyheap(struct fibheap *h)
{
  h->fh_cmp_fnct = (signed long long int (*)(unsigned int, unsigned int))(void *)0;
  h->fh_neginf = (unsigned int)0;
  if(!(h->fh_cons == ((struct fibheap_el **)NULL)))
    free((void *)h->fh_cons);

  h->fh_cons = (struct fibheap_el **)(void *)0;
  free((void *)h);
}

// fh_extractmin
// file fib.c line 347
unsigned int fh_extractmin(struct fibheap *h)
{
  struct fibheap_el *z;
  unsigned int ret = (unsigned int)0;
  if(!(h->fh_min == ((struct fibheap_el *)NULL)))
  {
    z=fh_extractminel(h);
    ret = z->fhe_data;
    deallocateFibHeapEl(z, h);
  }

  return ret;
}

// fh_extractminel
// file fib.c line 388
static struct fibheap_el * fh_extractminel(struct fibheap *h)
{
  struct fibheap_el *ret;
  struct fibheap_el *x;
  struct fibheap_el *y;
  struct fibheap_el *orig;
  ret = h->fh_min;
  orig = (struct fibheap_el *)(void *)0;
  x = ret->fhe_child;
  for( ; !(x == ((struct fibheap_el *)NULL)) && !(x == orig); x = y)
  {
    if(orig == ((struct fibheap_el *)NULL))
      orig = x;

    y = x->fhe_right;
    x->fhe_p = (struct fibheap_el *)(void *)0;
    fh_insertrootlist(h, x);
  }
  fh_removerootlist(h, ret);
  h->fh_n = h->fh_n - 1ll;
  if(h->fh_n == 0l)
    h->fh_min = (struct fibheap_el *)(void *)0;

  else
  {
    h->fh_min = ret->fhe_right;
    fh_consolidate(h);
  }
  return ret;
}

// fh_heaplink
// file fib.c line 497
static void fh_heaplink(struct fibheap *h, struct fibheap_el *y, struct fibheap_el *x)
{
  if(x->fhe_child == ((struct fibheap_el *)NULL))
    x->fhe_child = y;

  else
    fhe_insertbefore(x->fhe_child, y);
  y->fhe_p = x;
  x->fhe_degree = x->fhe_degree + 1;
  y->fhe_mark = (char)0;
}

// fh_initheap
// file fib.c line 117
static void fh_initheap(struct fibheap *new)
{
  new->fh_cmp_fnct = (signed long long int (*)(unsigned int, unsigned int))(void *)0;
  new->nodeMemory=createMem_manager((signed int)sizeof(struct fibheap_el) /*56ul*/ , (unsigned long int)10000);
  new->fh_neginf = (unsigned int)0;
  new->fh_n = (signed long long int)0;
  new->fh_Dl = (signed long long int)-1;
  new->fh_cons = (struct fibheap_el **)(void *)0;
  new->fh_min = (struct fibheap_el *)(void *)0;
  new->fh_root = (struct fibheap_el *)(void *)0;
  new->fh_keys = (char)0;
}

// fh_insert
// file fib.c line 326
struct fibheap_el * fh_insert(struct fibheap *h, unsigned int data)
{
  struct fibheap_el *x;
  x=fhe_newelem(h);
  if(x == ((struct fibheap_el *)NULL))
    return (struct fibheap_el *)(void *)0;

  else
  {
    x->fhe_data = data;
    fh_insertel(h, x);
    return x;
  }
}

// fh_insertel
// file fib.c line 652
static void fh_insertel(struct fibheap *h, struct fibheap_el *x)
{
  fh_insertrootlist(h, x);
  _Bool tmp_if_expr_2;
  signed int tmp_if_expr_1;
  signed long long int return_value;
  if(h->fh_min == ((struct fibheap_el *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    if(!(h->fh_keys == 0))
      tmp_if_expr_1 = (signed int)(x->fhe_key < h->fh_min->fhe_key);

    else
    {
      return_value=h->fh_cmp_fnct(x->fhe_data, h->fh_min->fhe_data);
      tmp_if_expr_1 = (signed int)(return_value < (signed long int)0);
    }
    tmp_if_expr_2 = tmp_if_expr_1 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_2)
    h->fh_min = x;

  h->fh_n = h->fh_n + 1ll;
}

// fh_insertkey
// file fib.c line 231
struct fibheap_el * fh_insertkey(struct fibheap *h, signed long long int key, unsigned int data)
{
  struct fibheap_el *x;
  x=fhe_newelem(h);
  if(x == ((struct fibheap_el *)NULL))
    return (struct fibheap_el *)(void *)0;

  else
  {
    x->fhe_data = data;
    x->fhe_key = key;
    fh_insertel(h, x);
    return x;
  }
}

// fh_insertrootlist
// file fib.c line 424
static void fh_insertrootlist(struct fibheap *h, struct fibheap_el *x)
{
  if(h->fh_root == ((struct fibheap_el *)NULL))
  {
    h->fh_root = x;
    x->fhe_left = x;
    x->fhe_right = x;
  }

  else
    fhe_insertafter(h->fh_root, x);
}

// fh_isempty
// file fib.c line 245
char fh_isempty(struct fibheap *h)
{
  if(h->fh_min == ((struct fibheap_el *)NULL))
    return (char)1;

  else
    return (char)0;
}

// fh_makeheap
// file fib.c line 157
struct fibheap * fh_makeheap(void)
{
  struct fibheap *n;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct fibheap) /*64ul*/ );
  n = (struct fibheap *)return_value_malloc_1;
  if(n == ((struct fibheap *)NULL))
    return (struct fibheap *)(void *)0;

  else
  {
    fh_initheap(n);
    return n;
  }
}

// fh_makekeyheap
// file fib.c line 145
struct fibheap * fh_makekeyheap(void)
{
  struct fibheap *n;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct fibheap) /*64ul*/ );
  n = (struct fibheap *)return_value_malloc_1;
  if(n == ((struct fibheap *)NULL))
    return (struct fibheap *)(void *)0;

  else
  {
    fh_initheap(n);
    n->fh_keys = (char)1;
    return n;
  }
}

// fh_min
// file fib.c line 339
unsigned int fh_min(struct fibheap *h)
{
  if(h->fh_min == ((struct fibheap_el *)NULL))
    return (unsigned int)0;

  else
    return h->fh_min->fhe_data;
}

// fh_minkey
// file fib.c line 253
signed long long int fh_minkey(struct fibheap *h)
{
  if(h->fh_min == ((struct fibheap_el *)NULL))
    return (signed long long int)(-0x7fffffff - 1);

  else
    return h->fh_min->fhe_key;
}

// fh_removerootlist
// file fib.c line 437
static void fh_removerootlist(struct fibheap *h, struct fibheap_el *x)
{
  if(x->fhe_left == x)
    h->fh_root = (struct fibheap_el *)(void *)0;

  else
    h->fh_root=fhe_remove(x);
}

// fh_replacedata
// file fib.c line 364
unsigned int fh_replacedata(struct fibheap_el *x, unsigned int data)
{
  unsigned int odata = x->fhe_data;
  x->fhe_data = data;
  return odata;
}

// fh_replacekey
// file fib.c line 310
signed long long int fh_replacekey(struct fibheap *h, struct fibheap_el *x, signed long long int key)
{
  signed long long int ret = x->fhe_key;
  fh_replacekeydata(h, x, key, x->fhe_data);
  return ret;
}

// fh_replacekeydata
// file fib.c line 262
unsigned int fh_replacekeydata(struct fibheap *h, struct fibheap_el *x, signed long long int key, unsigned int data)
{
  unsigned int odata;
  signed long long int okey;
  struct fibheap_el *y;
  signed int r;
  odata = x->fhe_data;
  okey = x->fhe_key;
  r=fh_comparedata(h, key, data, x);
  if(r >= 1)
    abort();

  x->fhe_data = data;
  x->fhe_key = key;
  signed int return_value_fh_compare_1;
  if(r == 0)
    return odata;

  else
  {
    y = x->fhe_p;
    if(!(h->fh_keys == 0))
    {
      if(!(okey == key))
        goto __CPROVER_DUMP_L3;

      return odata;
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      if(!(y == ((struct fibheap_el *)NULL)))
      {
        return_value_fh_compare_1=fh_compare(h, x, y);
        if(!(return_value_fh_compare_1 >= 1))
        {
          fh_cut(h, x, y);
          fh_cascading_cut(h, y);
        }

      }

      signed int return_value_fh_compare_2;
      return_value_fh_compare_2=fh_compare(h, x, h->fh_min);
      if(!(return_value_fh_compare_2 >= 1))
        h->fh_min = x;

      return odata;
    }
  }
}

// fh_setcmp
// file fib.c line 168
signed long long int (*fh_setcmp(struct fibheap *h, signed long long int (*fnct)(unsigned int, unsigned int)))(unsigned int, unsigned int)
{
  signed long long int (*oldfnct)(unsigned int, unsigned int) = h->fh_cmp_fnct;
  h->fh_cmp_fnct = fnct;
  return oldfnct;
}

// fh_setneginf
// file fib.c line 176
unsigned int fh_setneginf(struct fibheap *h, unsigned int data)
{
  unsigned int old = h->fh_neginf;
  h->fh_neginf = data;
  return old;
}

// fh_union
// file fib.c line 184
struct fibheap * fh_union(struct fibheap *ha, struct fibheap *hb)
{
  struct fibheap_el *x;
  _Bool tmp_if_expr_1;
  if(ha->fh_root == ((struct fibheap_el *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = hb->fh_root == (struct fibheap_el *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
  {
    if(ha->fh_root == ((struct fibheap_el *)NULL))
    {
      fh_destroyheap(ha);
      return hb;
    }

    fh_destroyheap(hb);
    return ha;
  }

  else
  {
    ha->fh_root->fhe_left->fhe_right = hb->fh_root;
    hb->fh_root->fhe_left->fhe_right = ha->fh_root;
    x = ha->fh_root->fhe_left;
    ha->fh_root->fhe_left = hb->fh_root->fhe_left;
    hb->fh_root->fhe_left = x;
    ha->fh_n = ha->fh_n + hb->fh_n;
    signed int return_value_fh_compare_2;
    return_value_fh_compare_2=fh_compare(ha, hb->fh_min, ha->fh_min);
    if(!(return_value_fh_compare_2 >= 0))
      ha->fh_min = hb->fh_min;

    fh_destroyheap(hb);
    return ha;
  }
}

// fhe_initelem
// file fib.c line 552
static void fhe_initelem(struct fibheap_el *e)
{
  e->fhe_degree = 0;
  e->fhe_mark = (char)0;
  e->fhe_p = (struct fibheap_el *)(void *)0;
  e->fhe_child = (struct fibheap_el *)(void *)0;
  e->fhe_left = e;
  e->fhe_right = e;
  e->fhe_data = (unsigned int)0;
}

// fhe_insertafter
// file fib.c line 563
static void fhe_insertafter(struct fibheap_el *a, struct fibheap_el *b)
{
  if(a == a->fhe_right)
  {
    a->fhe_right = b;
    a->fhe_left = b;
    b->fhe_right = a;
    b->fhe_left = a;
  }

  else
  {
    b->fhe_right = a->fhe_right;
    a->fhe_right->fhe_left = b;
    a->fhe_right = b;
    b->fhe_left = a;
  }
}

// fhe_insertbefore
// file fib.c line 581
static inline void fhe_insertbefore(struct fibheap_el *a, struct fibheap_el *b)
{
  fhe_insertafter(a->fhe_left, b);
}

// fhe_newelem
// file fib.c line 541
static struct fibheap_el * fhe_newelem(struct fibheap *h)
{
  struct fibheap_el *e;
  e=allocateFibHeapEl(h);
  if(e == ((struct fibheap_el *)NULL))
    return (struct fibheap_el *)(void *)0;

  else
  {
    fhe_initelem(e);
    return e;
  }
}

// fhe_remove
// file fib.c line 586
static struct fibheap_el * fhe_remove(struct fibheap_el *x)
{
  struct fibheap_el *ret;
  if(x == x->fhe_left)
    ret = (struct fibheap_el *)(void *)0;

  else
    ret = x->fhe_left;
  if(!(x->fhe_p == ((struct fibheap_el *)NULL)))
  {
    if(x->fhe_p->fhe_child == x)
      x->fhe_p->fhe_child = ret;

  }

  x->fhe_right->fhe_left = x->fhe_left;
  x->fhe_left->fhe_right = x->fhe_right;
  x->fhe_p = (struct fibheap_el *)(void *)0;
  x->fhe_left = x;
  x->fhe_right = x;
  return ret;
}

// fill1scaf
// file prlReadFillGap.c line 596
static void fill1scaf(signed int index, struct stack *ctgsStack, signed int thrdID)
{
  struct ctg4scaf *actg;
  struct ctg4scaf *prevCtg = (struct ctg4scaf *)(void *)0;
  struct read_nearby *rdArray;
  struct read_nearby *rdArray4gap;
  struct read_nearby *rd;
  signed int numRd = 0;
  signed int count;
  signed int maxGLen = 0;
  unsigned int ctg;
  unsigned int bal_ctg;
  struct stack *rdStack;
  void *return_value_stackPop_1;
  signed int tmp_if_expr_2;
  do
  {
    return_value_stackPop_1=stackPop(ctgsStack);
    actg = (struct ctg4scaf *)return_value_stackPop_1;
    if(actg == ((struct ctg4scaf *)NULL))
      break;

    if(!(prevCtg == ((struct ctg4scaf *)NULL)))
    {
      if(!(maxGLen >= actg->start + -prevCtg->end))
        tmp_if_expr_2 = actg->start - prevCtg->end;

      else
        tmp_if_expr_2 = maxGLen;
      maxGLen = tmp_if_expr_2;
    }

    ctg = actg->ctgID;
    bal_ctg=getTwinCtg(ctg);
    if(!(actg->mask == 0u))
      prevCtg = actg;

    else
    {
      if(!((contig_array + (signed long int)ctg)->closeReads == ((struct stack *)NULL)))
        numRd = numRd + (contig_array + (signed long int)ctg)->closeReads->item_c;

      else
        if(!((contig_array + (signed long int)bal_ctg)->closeReads == ((struct stack *)NULL)))
          numRd = numRd + (contig_array + (signed long int)bal_ctg)->closeReads->item_c;

      prevCtg = actg;
    }
  }
  while((_Bool)1);
  void *return_value_stackPop_5;
  void *return_value_stackPop_6;
  signed int tmp_post_7;
  signed int tmp_post_8;
  void *return_value_stackPop_15;
  _Bool tmp_if_expr_16;
  if(numRd >= 1)
  {
    void *return_value_ckalloc_3;
    return_value_ckalloc_3=ckalloc((unsigned long int)numRd * sizeof(struct read_nearby) /*16ul*/ );
    rdArray = (struct read_nearby *)return_value_ckalloc_3;
    void *return_value_ckalloc_4;
    return_value_ckalloc_4=ckalloc((unsigned long int)numRd * sizeof(struct read_nearby) /*16ul*/ );
    rdArray4gap = (struct read_nearby *)return_value_ckalloc_4;
    signed int numRd2 = 0;
    stackRecover(ctgsStack);
    do
    {
      return_value_stackPop_5=stackPop(ctgsStack);
      actg = (struct ctg4scaf *)return_value_stackPop_5;
      if(actg == ((struct ctg4scaf *)NULL))
        break;

      ctg = actg->ctgID;
      bal_ctg=getTwinCtg(ctg);
      if(actg->mask == 0u)
      {
        if(!((contig_array + (signed long int)ctg)->closeReads == ((struct stack *)NULL)))
          rdStack = (contig_array + (signed long int)ctg)->closeReads;

        else
          if(!((contig_array + (signed long int)bal_ctg)->closeReads == ((struct stack *)NULL)))
            rdStack = (contig_array + (signed long int)bal_ctg)->closeReads;

          else
            continue;
        stackBackup(rdStack);
        do
        {
          return_value_stackPop_6=stackPop(rdStack);
          rd = (struct read_nearby *)return_value_stackPop_6;
          if(rd == ((struct read_nearby *)NULL))
            break;

          (rdArray + (signed long int)numRd2)->len = rd->len;
          (rdArray + (signed long int)numRd2)->seqStarter = rd->seqStarter;
          char return_value_isSmallerThanTwin_9;
          return_value_isSmallerThanTwin_9=isSmallerThanTwin(ctg);
          if(!(return_value_isSmallerThanTwin_9 == 0))
          {
            tmp_post_7 = numRd2;
            numRd2 = numRd2 + 1;
            (rdArray + (signed long int)tmp_post_7)->dis = (actg->start - overlaplen) + rd->dis;
          }

          else
          {
            tmp_post_8 = numRd2;
            numRd2 = numRd2 + 1;
            (rdArray + (signed long int)tmp_post_8)->dis = (signed int)((((unsigned int)(actg->start - overlaplen) + (contig_array + (signed long int)ctg)->length) - (unsigned int)rd->len) - (unsigned int)rd->dis);
          }
        }
        while((_Bool)1);
        stackRecover(rdStack);
      }

    }
    while((_Bool)1);
    if(!(numRd2 == numRd))
      printf("##reads numbers doesn't match, %d vs %d when scaffold %d\n", numRd, numRd2, index);

    qsort((void *)rdArray, (unsigned long int)numRd, sizeof(struct read_nearby) /*16ul*/ , cmp_reads);
    signed int gapStart;
    signed int gapEnd;
    signed int numIn = 0;
    char flag;
    signed int fill1scaf__1__buffer_size = maxReadLen > 100 ? maxReadLen : 100;
    signed int maxGSLen = maxGLen + GLDiff < 10 ? 10 : maxGLen + GLDiff;
    char *seqGap;
    void *return_value_ckalloc_10;
    return_value_ckalloc_10=ckalloc((unsigned long int)maxGSLen * sizeof(char) /*1ul*/ );
    seqGap = (char *)return_value_ckalloc_10;
    unsigned long long int *kmerCtg1;
    void *return_value_ckalloc_11;
    return_value_ckalloc_11=ckalloc((unsigned long int)fill1scaf__1__buffer_size * sizeof(unsigned long long int) /*8ul*/ );
    kmerCtg1 = (unsigned long long int *)return_value_ckalloc_11;
    unsigned long long int *kmerCtg2;
    void *return_value_ckalloc_12;
    return_value_ckalloc_12=ckalloc((unsigned long int)fill1scaf__1__buffer_size * sizeof(unsigned long long int) /*8ul*/ );
    kmerCtg2 = (unsigned long long int *)return_value_ckalloc_12;
    char *seqCtg1;
    void *return_value_ckalloc_13;
    return_value_ckalloc_13=ckalloc((unsigned long int)fill1scaf__1__buffer_size * sizeof(char) /*1ul*/ );
    seqCtg1 = (char *)return_value_ckalloc_13;
    char *seqCtg2;
    void *return_value_ckalloc_14;
    return_value_ckalloc_14=ckalloc((unsigned long int)fill1scaf__1__buffer_size * sizeof(char) /*1ul*/ );
    seqCtg2 = (char *)return_value_ckalloc_14;
    prevCtg = (struct ctg4scaf *)(void *)0;
    stackRecover(ctgsStack);
    do
    {
      return_value_stackPop_15=stackPop(ctgsStack);
      actg = (struct ctg4scaf *)return_value_stackPop_15;
      if(actg == ((struct ctg4scaf *)NULL))
        break;

      if(prevCtg == ((struct ctg4scaf *)NULL))
        tmp_if_expr_16 = (_Bool)1;

      else
        tmp_if_expr_16 = !(actg->scaftig_start != 0u) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_16)
        prevCtg = actg;

      else
      {
        gapStart = prevCtg->end - 100;
        gapEnd = (actg->start - overlaplen) + 100;
        cutRdArray(rdArray, gapStart, gapEnd, &count, numRd, rdArray4gap);
        numIn = numIn + count;
        signed int overlap = overlaplen;
        for( ; overlap >= 15; overlap = overlap - 2)
        {
          signed int return_value_localGraph_17;
          return_value_localGraph_17=localGraph(rdArray4gap, count, prevCtg, actg, overlaplen, kmerCtg1, kmerCtg2, overlap, darrayBuf[(signed long int)thrdID], seqCtg1, seqCtg2, seqGap);
          flag = (char)return_value_localGraph_17;
          if((signed int)flag == 1)
            break;

        }
        prevCtg = actg;
      }
    }
    while((_Bool)1);
    free((void *)seqGap);
    free((void *)kmerCtg1);
    free((void *)kmerCtg2);
    free((void *)seqCtg1);
    free((void *)seqCtg2);
    free((void *)rdArray);
    free((void *)rdArray4gap);
  }

}

// find_next_prime_kh
// file newhash.c line 86
static inline unsigned long long int find_next_prime_kh(unsigned long long int num)
{
  if(num % 2ul == 0ul)
    num = num + 1ull;

  while((_Bool)1)
  {
    signed int return_value_is_prime_kh_1;
    return_value_is_prime_kh_1=is_prime_kh(num);
    if(!(return_value_is_prime_kh_1 == 0))
      return num;

    num = num + (unsigned long long int)2;
  }
}

// firstCharInKmer
// file inc/newhash.h line 99
extern char firstCharInKmer(unsigned long long int kmer)
{
  return (char)(kmer >> 2 * (overlaplen - 1));
}

// freeContig_array
// file loadGraph.c line 449
extern void freeContig_array()
{
  if(!(contig_array == ((struct contig *)NULL)))
  {
    unsigned int i = (unsigned int)1;
    for( ; num_ctg >= i; i = i + 1u)
    {
      if(!((contig_array + (signed long int)i)->seq == ((char *)NULL)))
        free((void *)(contig_array + (signed long int)i)->seq);

      if(!((contig_array + (signed long int)i)->closeReads == ((struct stack *)NULL)))
        freeStack((contig_array + (signed long int)i)->closeReads);

    }
    free((void *)contig_array);
    contig_array = (struct contig *)(void *)0;
  }

}

// freeDarray
// file darray.c line 70
void freeDarray(struct dynamic_array *darray)
{
  if(!(darray == ((struct dynamic_array *)NULL)))
  {
    if(!(darray->array == NULL))
      free((void *)darray->array);

    free((void *)darray);
  }

}

// freeMem_manager
// file inc/extfunc2.h line 28
extern void freeMem_manager(struct mem_manager *mem_Manager)
{
  struct block_start *ite_block;
  struct block_start *temp_block;
  if(!(mem_Manager == ((struct mem_manager *)NULL)))
  {
    ite_block = mem_Manager->block_list;
    while(!(ite_block == ((struct block_start *)NULL)))
    {
      temp_block = ite_block;
      ite_block = ite_block->next;
      free((void *)temp_block);
    }
    free((void *)mem_Manager);
  }

}

// freeStack
// file inc/stack.h line 52
void freeStack(struct stack *astack)
{
  struct block_starter *ite_block;
  struct block_starter *temp_block;
  if(!(astack == ((struct stack *)NULL)))
  {
    ite_block = astack->block_list;
    if(!(ite_block == ((struct block_starter *)NULL)))
      for( ; !(ite_block->next == ((struct block_starter *)NULL)); ite_block = ite_block->next)
        ;

    while(!(ite_block == ((struct block_starter *)NULL)))
    {
      temp_block = ite_block;
      ite_block = ite_block->prev;
      free((void *)temp_block);
    }
    free((void *)astack);
  }

}

// freeStackBuf
// file prlReadFillGap.c line 873
static void freeStackBuf(struct stack **ctgStackBuffer, signed int scafBufSize)
{
  signed int i = 0;
  for( ; !(i >= scafBufSize); i = i + 1)
    freeStack(ctgStackBuffer[(signed long int)i]);
}

// freeStackBuf_link1
// file read2scaf.c line 80
static void freeStackBuf_link1(struct stack **ctgStackBuffer_link1, signed int scafBufSize_link1)
{
  signed int i_link1 = 0;
  for( ; !(i_link1 >= scafBufSize_link1); i_link1 = i_link1 + 1)
    freeStack(ctgStackBuffer_link1[(signed long int)i_link1]);
}

// free_Sets
// file inc/newhash.h line 92
extern void free_Sets(struct kmerSet_st **sets, signed int num)
{
  signed int i = 0;
  for( ; !(i >= num); i = i + 1)
    free_kmerset(sets[(signed long int)i]);
  free((void *)sets);
}

// free_edge_array
// file inc/extfunc.h line 52
extern void free_edge_array(struct edge *ed_array, signed int ed_num)
{
  signed int i = 1;
  for( ; ed_num >= i; i = i + 1)
    if(!((ed_array + (signed long int)i)->seq == ((char *)NULL)))
      free((void *)(ed_array + (signed long int)i)->seq);

  free((void *)ed_array);
}

// free_kmerset
// file inc/newhash.h line 93
extern void free_kmerset(struct kmerSet_st *set)
{
  free((void *)set->array);
  free((void *)set->flags);
  free((void *)set);
}

// free_libs
// file lib.c line 358
extern void free_libs()
{
  if(!(lib_array == ((struct lib_info *)NULL)))
  {
    signed int i;
    signed int j;
    i = 0;
    for( ; !(i >= num_libs); i = i + 1)
    {
      printf("[LIB] %d, avg_ins %d, reverse %d \n", i, (lib_array + (signed long int)i)->avg_ins, (lib_array + (signed long int)i)->reverse);
      if(!((lib_array + (signed long int)i)->num_s_a_file == 0))
      {
        j = 0;
        for( ; !(j >= (lib_array + (signed long int)i)->num_s_a_file); j = j + 1)
          free((void *)(lib_array + (signed long int)i)->s_a_fname[(signed long int)j]);
        free((void *)(lib_array + (signed long int)i)->s_a_fname);
      }

      if(!((lib_array + (signed long int)i)->num_s_q_file == 0))
      {
        j = 0;
        for( ; !(j >= (lib_array + (signed long int)i)->num_s_q_file); j = j + 1)
          free((void *)(lib_array + (signed long int)i)->s_q_fname[(signed long int)j]);
        free((void *)(lib_array + (signed long int)i)->s_q_fname);
      }

      if(!((lib_array + (signed long int)i)->num_p_file == 0))
      {
        j = 0;
        for( ; !(j >= (lib_array + (signed long int)i)->num_p_file); j = j + 1)
          free((void *)(lib_array + (signed long int)i)->p_fname[(signed long int)j]);
        free((void *)(lib_array + (signed long int)i)->p_fname);
      }

      if(!((lib_array + (signed long int)i)->num_a1_file == 0))
      {
        j = 0;
        for( ; !(j >= (lib_array + (signed long int)i)->num_a1_file); j = j + 1)
          free((void *)(lib_array + (signed long int)i)->a1_fname[(signed long int)j]);
        free((void *)(lib_array + (signed long int)i)->a1_fname);
      }

      if(!((lib_array + (signed long int)i)->num_a2_file == 0))
      {
        j = 0;
        for( ; !(j >= (lib_array + (signed long int)i)->num_a2_file); j = j + 1)
          free((void *)(lib_array + (signed long int)i)->a2_fname[(signed long int)j]);
        free((void *)(lib_array + (signed long int)i)->a2_fname);
      }

      if(!((lib_array + (signed long int)i)->num_q1_file == 0))
      {
        j = 0;
        for( ; !(j >= (lib_array + (signed long int)i)->num_q1_file); j = j + 1)
          free((void *)(lib_array + (signed long int)i)->q1_fname[(signed long int)j]);
        free((void *)(lib_array + (signed long int)i)->q1_fname);
      }

      if(!((lib_array + (signed long int)i)->num_q2_file == 0))
      {
        j = 0;
        for( ; !(j >= (lib_array + (signed long int)i)->num_q2_file); j = j + 1)
          free((void *)(lib_array + (signed long int)i)->q2_fname[(signed long int)j]);
        free((void *)(lib_array + (signed long int)i)->q2_fname);
      }

    }
    num_libs = 0;
    free((void *)lib_array);
  }

}

// free_pe_mem
// file lib.c line 443
extern void free_pe_mem()
{
  if(!(pes == ((struct pe_info *)NULL)))
  {
    free((void *)pes);
    pes = (struct pe_info *)(void *)0;
  }

}

// freezing
// file orderContig.c line 1893
static void freezing()
{
  signed int num5;
  signed int num3;
  unsigned int freezing__1__ctg;
  unsigned int bal_ctg;
  unsigned int i;
  signed int j;
  signed int t;
  struct connection *cnt;
  struct connection *prevCNT;
  struct connection *nextCnt;
  char excep;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
  {
    (contig_array + (signed long int)i)->flag = (unsigned char)0;
    (contig_array + (signed long int)i)->from_vt = (unsigned int)0;
    (contig_array + (signed long int)i)->to_vt = (unsigned int)0;
    cnt = (contig_array + (signed long int)i)->downwardConnect;
    for( ; !(cnt == ((struct connection *)NULL)); cnt = cnt->next)
    {
      cnt->used = (unsigned char)0;
      cnt->checking = (unsigned char)0;
      cnt->singleInScaf = (unsigned char)0;
    }
  }
  i = (unsigned int)1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  signed int return_value_validConnect_2;
  signed int tmp_post_4;
  signed int tmp_post_7;
  signed int tmp_post_11;
  signed int tmp_post_13;
  void *return_value_darrayPut_14;
  void *return_value_darrayGet_15;
  signed int tmp_post_16;
  void *return_value_darrayPut_17;
  void *return_value_darrayGet_18;
  void *return_value_darrayGet_20;
  void *return_value_darrayGet_22;
  void *return_value_darrayGet_23;
  void *return_value_darrayGet_24;
  void *return_value_darrayGet_25;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!((contig_array + (signed long int)i)->flag == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (contig_array + (signed long int)i)->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
    {
      if((contig_array + (signed long int)i)->downwardConnect == ((struct connection *)NULL))
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        return_value_validConnect_2=validConnect(i, (struct connection *)(void *)0);
        tmp_if_expr_3 = !(return_value_validConnect_2 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_3)
      {
        num3 = 0;
        num5 = num3;
        freezing__1__ctg = i;
        tmp_post_4 = num5;
        num5 = num5 + 1;
        void *return_value_darrayPut_5;
        return_value_darrayPut_5=darrayPut(scaf5, (signed long long int)tmp_post_4);
        *((unsigned int *)return_value_darrayPut_5) = i;
        (contig_array + (signed long int)i)->flag = (unsigned char)1;
        unsigned int return_value_getTwinCtg_6;
        return_value_getTwinCtg_6=getTwinCtg(i);
        (contig_array + (signed long int)return_value_getTwinCtg_6)->flag = (unsigned char)1;
        prevCNT = (struct connection *)(void *)0;
        cnt=getNextContig(freezing__1__ctg, prevCNT, &excep);
        while(!(cnt == ((struct connection *)NULL)))
        {
          if(!((contig_array + (signed long int)cnt->contigID)->flag == 0))
          {
            unBindLink(freezing__1__ctg, cnt->contigID);
            break;
          }

          nextCnt=getNextContig(cnt->contigID, cnt, &excep);
          setConnectUsed(freezing__1__ctg, cnt->contigID, (char)1);
          freezing__1__ctg = cnt->contigID;
          tmp_post_7 = num5;
          num5 = num5 + 1;
          void *return_value_darrayPut_8;
          return_value_darrayPut_8=darrayPut(scaf5, (signed long long int)tmp_post_7);
          *((unsigned int *)return_value_darrayPut_8) = freezing__1__ctg;
          bal_ctg=getTwinCtg(freezing__1__ctg);
          (contig_array + (signed long int)freezing__1__ctg)->flag = (unsigned char)1;
          (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
          prevCNT = cnt;
          cnt = nextCnt;
        }
        freezing__1__ctg=getTwinCtg(i);
        if(num5 >= 2)
        {
          void *return_value_darrayGet_9;
          return_value_darrayGet_9=darrayGet(scaf5, (signed long long int)1);
          unsigned int return_value_getTwinCtg_10;
          return_value_getTwinCtg_10=getTwinCtg(*((unsigned int *)return_value_darrayGet_9));
          prevCNT=checkConnect(return_value_getTwinCtg_10, freezing__1__ctg);
        }

        else
          prevCNT = (struct connection *)(void *)0;
        cnt=getNextContig(freezing__1__ctg, prevCNT, &excep);
        while(!(cnt == ((struct connection *)NULL)))
        {
          if(!((contig_array + (signed long int)cnt->contigID)->flag == 0))
          {
            unBindLink(freezing__1__ctg, cnt->contigID);
            break;
          }

          nextCnt=getNextContig(cnt->contigID, cnt, &excep);
          setConnectUsed(freezing__1__ctg, cnt->contigID, (char)1);
          freezing__1__ctg = cnt->contigID;
          bal_ctg=getTwinCtg(freezing__1__ctg);
          (contig_array + (signed long int)freezing__1__ctg)->flag = (unsigned char)1;
          (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
          tmp_post_11 = num3;
          num3 = num3 + 1;
          void *return_value_darrayPut_12;
          return_value_darrayPut_12=darrayPut(scaf3, (signed long long int)tmp_post_11);
          *((unsigned int *)return_value_darrayPut_12) = bal_ctg;
          prevCNT = cnt;
          cnt = nextCnt;
        }
        if(num3 + num5 >= 2)
        {
          solidCounter = 0;
          j = num3 - 1;
          for( ; j >= 0; j = j - 1)
          {
            tmp_post_13 = solidCounter;
            solidCounter = solidCounter + 1;
            return_value_darrayPut_14=darrayPut(solidArray, (signed long long int)tmp_post_13);
            return_value_darrayGet_15=darrayGet(scaf3, (signed long long int)j);
            *((unsigned int *)return_value_darrayPut_14) = *((unsigned int *)return_value_darrayGet_15);
          }
          j = 0;
          for( ; !(j >= num5); j = j + 1)
          {
            tmp_post_16 = solidCounter;
            solidCounter = solidCounter + 1;
            return_value_darrayPut_17=darrayPut(solidArray, (signed long long int)tmp_post_16);
            return_value_darrayGet_18=darrayGet(scaf5, (signed long long int)j);
            *((unsigned int *)return_value_darrayPut_17) = *((unsigned int *)return_value_darrayGet_18);
          }
          unsigned int firstCtg = (unsigned int)0;
          unsigned int lastCtg = (unsigned int)0;
          unsigned int firstTwin = (unsigned int)0;
          unsigned int lastTwin = (unsigned int)0;
          t = 0;
          for( ; !(t >= solidCounter); t = t + 1)
          {
            return_value_darrayGet_20=darrayGet(solidArray, (signed long long int)t);
            if((contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_20))->mask == 0)
            {
              void *return_value_darrayGet_19;
              return_value_darrayGet_19=darrayGet(solidArray, (signed long long int)t);
              firstCtg = *((unsigned int *)return_value_darrayGet_19);
              break;
            }

          }
          t = solidCounter - 1;
          for( ; t >= 0; t = t - 1)
          {
            return_value_darrayGet_22=darrayGet(solidArray, (signed long long int)t);
            if((contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_22))->mask == 0)
            {
              void *return_value_darrayGet_21;
              return_value_darrayGet_21=darrayGet(solidArray, (signed long long int)t);
              lastCtg = *((unsigned int *)return_value_darrayGet_21);
              break;
            }

          }
          if(firstCtg == 0u || lastCtg == 0u)
          {
            printf("scaffold start at %d, stop at %d, freezing began with %d\n", firstCtg, lastCtg, i);
            j = 0;
            for( ; !(j >= solidCounter); j = j + 1)
            {
              return_value_darrayGet_23=darrayGet(solidArray, (signed long long int)j);
              return_value_darrayGet_24=darrayGet(solidArray, (signed long long int)j);
              return_value_darrayGet_25=darrayGet(solidArray, (signed long long int)j);
              printf("->%d(%d %d)", *((unsigned int *)return_value_darrayGet_23), (contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_24))->mask, (contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_25))->flag);
            }
            printf("\n");
          }

          else
          {
            firstTwin=getTwinCtg(firstCtg);
            lastTwin=getTwinCtg(lastCtg);
          }
          t = 0;
          for( ; !(t >= solidCounter); t = t + 1)
          {
            unsigned int ctg;
            void *return_value_darrayGet_26;
            return_value_darrayGet_26=darrayGet(solidArray, (signed long long int)t);
            ctg = *((unsigned int *)return_value_darrayGet_26);
            if((contig_array + (signed long int)ctg)->from_vt >= 1u)
            {
              (contig_array + (signed long int)ctg)->mask = (unsigned char)1;
              unsigned int return_value_getTwinCtg_27;
              return_value_getTwinCtg_27=getTwinCtg(ctg);
              (contig_array + (signed long int)return_value_getTwinCtg_27)->mask = (unsigned char)1;
              unsigned int return_value_getTwinCtg_28;
              return_value_getTwinCtg_28=getTwinCtg(ctg);
              printf("Repeat: contig %d (%d) appears more than once\n", ctg, return_value_getTwinCtg_28);
            }

            else
            {
              (contig_array + (signed long int)ctg)->from_vt = firstCtg;
              (contig_array + (signed long int)ctg)->to_vt = lastCtg;
              (contig_array + (signed long int)ctg)->indexInScaf = (unsigned short int)(t + 1);
              unsigned int return_value_getTwinCtg_29;
              return_value_getTwinCtg_29=getTwinCtg(ctg);
              (contig_array + (signed long int)return_value_getTwinCtg_29)->from_vt = lastTwin;
              unsigned int return_value_getTwinCtg_30;
              return_value_getTwinCtg_30=getTwinCtg(ctg);
              (contig_array + (signed long int)return_value_getTwinCtg_30)->to_vt = firstTwin;
              unsigned int return_value_getTwinCtg_31;
              return_value_getTwinCtg_31=getTwinCtg(ctg);
              (contig_array + (signed long int)return_value_getTwinCtg_31)->indexInScaf = (unsigned short int)(solidCounter - t);
            }
          }
          consolidate();
        }

      }

    }

  }
  printf("Freezing is done....\n");
  fflush(stdout);
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!((contig_array + (signed long int)i)->flag == 0))
      (contig_array + (signed long int)i)->flag = (unsigned char)0;

    if((contig_array + (signed long int)i)->from_vt == 0u)
    {
      (contig_array + (signed long int)i)->from_vt = i;
      (contig_array + (signed long int)i)->to_vt = i;
    }

    cnt = (contig_array + (signed long int)i)->downwardConnect;
    for( ; !(cnt == ((struct connection *)NULL)); cnt = cnt->next)
    {
      cnt->used = (unsigned char)0;
      cnt->checking = (unsigned char)0;
    }
  }
}

// freqStat
// file prlHashReads.c line 612
static void freqStat(char *outfile)
{
  struct _IO_FILE *fo;
  char name[256l];
  signed int i;
  signed int j;
  signed long long int sum;
  sprintf(name, "%s.kmerFreq", outfile);
  fo=ckopen(name, "w");
  i = 1;
  for( ; !(i >= 256); i = i + 1)
  {
    sum = (signed long long int)0;
    j = 0;
    for( ; !(j >= thrd_num); j = j + 1)
      sum = sum + kmerFreq[(signed long int)j][(signed long int)i];
    fprintf(fo, "%lld\n", sum);
  }
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
    free((void *)kmerFreq[(signed long int)i]);
  free((void *)kmerFreq);
  fclose(fo);
}

// general_linearization
// file orderContig.c line 3720
static void general_linearization(char strict)
{
  unsigned int i;
  signed int subCounter = 0;
  signed int out_num;
  char flag;
  signed int conflCounter = 0;
  signed int overlapCounter = 0;
  signed int eligibleCounter = 0;
  double overlapTolerance;
  double conflTolerance;
  i = num_ctg;
  for( ; i >= 1u; i = i - 1u)
    if((contig_array + (signed long int)i)->mask == 0)
    {
      out_num=validConnect(i, (struct connection *)(void *)0);
      if(out_num >= 2)
      {
        flag=pickUpGeneralSubgraph(i, 10000);
        if(!(flag == 0))
        {
          subCounter = subCounter + 1;
          qsort((void *)&ctg4heapArray[(signed long int)1], (unsigned long int)nodeCounter_link1, sizeof(struct ctg4heap) /*12ul*/ , cmp_ctg);
          flag=checkEligible();
          if(flag == 0)
          {
            eligibleCounter = eligibleCounter + 1;
            setInGraph((char)0);
          }

          else
          {
            if(!(strict == 0))
            {
              overlapTolerance = OverlapPercent;
              conflTolerance = ConflPercent;
            }

            else
            {
              overlapTolerance = (double)2 * OverlapPercent;
              conflTolerance = (double)2 * ConflPercent;
            }
            flag=checkOverlapInBetween_general(overlapTolerance);
            if(flag == 0)
            {
              overlapCounter = overlapCounter + 1;
              setInGraph((char)0);
            }

            else
            {
              flag=checkConflictCnt_general(conflTolerance);
              if(!(flag == 0))
              {
                conflCounter = conflCounter + 1;
                setInGraph((char)0);
              }

              else
              {
                arrangeNodes_general();
                setInGraph((char)0);
              }
            }
          }
        }

      }

    }

  printf("Picked  %d subgraphs,%d have conflicting connections,%d have significant overlapping, %d eligible\n", subCounter, conflCounter, overlapCounter, eligibleCounter);
}

// getArcBetween
// file arc.c line 242
extern struct arc * getArcBetween(unsigned int from_ed, unsigned int to_ed)
{
  struct arc *parc;
  if(!(arcLookupTable == ((struct arc **)NULL)))
  {
    parc=getArcInLookupTable(from_ed, to_ed);
    return parc;
  }

  else
  {
    parc = (edge_array + (signed long int)from_ed)->arcs;
    for( ; !(parc == ((struct arc *)NULL)); parc = parc->next)
      if(parc->to_ed == to_ed)
        return parc;

    return parc;
  }
}

// getArcInLookupTable
// file arc.c line 177
static struct arc * getArcInLookupTable(unsigned int from_ed, unsigned int to_ed)
{
  unsigned int index = (unsigned int)2 * from_ed + to_ed;
  struct arc *ite_arc = arcLookupTable[(signed long int)index];
  for( ; !(ite_arc == ((struct arc *)NULL)); ite_arc = ite_arc->nextInLookupTable)
    if(ite_arc->to_ed == to_ed)
      return ite_arc;

  return (struct arc *)(void *)0;
}

// getBindCnt
// file orderContig.c line 83
static struct connection * getBindCnt(unsigned int ctg)
{
  struct connection *ite_cnt;
  struct connection *bindCnt = (struct connection *)(void *)0;
  struct connection *temp_cnt = (struct connection *)(void *)0;
  struct connection *temp3_cnt = (struct connection *)(void *)0;
  signed int count = 0;
  signed int count2 = 0;
  signed int count3 = 0;
  ite_cnt = (contig_array + (signed long int)ctg)->downwardConnect;
  for( ; !(ite_cnt == ((struct connection *)NULL)); ite_cnt = ite_cnt->next)
  {
    if(!(ite_cnt->nextInScaf == ((struct connection *)NULL)))
    {
      count = count + 1;
      bindCnt = ite_cnt;
    }

    if(!(ite_cnt->prevInScaf == 0))
    {
      temp_cnt = ite_cnt;
      count2 = count2 + 1;
    }

    if(!(ite_cnt->singleInScaf == 0))
    {
      temp3_cnt = ite_cnt;
      count3 = count3 + 1;
    }

  }
  if(count == 1)
    return bindCnt;

  else
    if(count == 0 && count2 == 1)
      return temp_cnt;

    else
      if(count == 0 && count2 == 0 && count3 == 1)
        return temp3_cnt;

      else
        return (struct connection *)(void *)0;
}

// getCharInTightString
// file inc/extfunc.h line 54
extern char getCharInTightString(char *tightSeq, signed int pos)
{
  char *byte = tightSeq + (signed long int)(pos / 4);
  switch(pos % 4)
  {
    case 3:
      return (char)((signed int)*byte & 3);
    case 2:
      return (char)(((signed int)*byte & 12) >> 2);
    case 1:
      return (char)(((signed int)*byte & 48) >> 4);
    case 0:
      return (char)(((signed int)*byte & 192) >> 6);
    default:
      return (char)0;
  }
}

// getCntBetween
// file inc/extfunc.h line 167
extern struct connection * getCntBetween(unsigned int from_c, unsigned int to_c)
{
  struct connection *pcnt;
  if(!(cntLookupTable == ((struct connection **)NULL)))
  {
    pcnt=getCntInLookupTable(from_c, to_c);
    return pcnt;
  }

  else
  {
    pcnt = (contig_array + (signed long int)from_c)->downwardConnect;
    for( ; !(pcnt == ((struct connection *)NULL)); pcnt = pcnt->next)
      if(pcnt->contigID == to_c)
        return pcnt;

    return pcnt;
  }
}

// getCntInLookupTable
// file connect.c line 145
static struct connection * getCntInLookupTable(unsigned int from_c, unsigned int to_c)
{
  unsigned int index = (unsigned int)2 * from_c + to_c;
  struct connection *ite_cnt = cntLookupTable[(signed long int)index];
  for( ; !(ite_cnt == ((struct connection *)NULL)); ite_cnt = ite_cnt->nextInLookupTable)
    if(ite_cnt->contigID == to_c)
      return ite_cnt;

  return (struct connection *)(void *)0;
}

// getDFibHeapSize
// file dfibHeap.c line 30
signed long long int getDFibHeapSize(struct dfibheap *heap)
{
  signed long long int return_value_dfibheap_getSize_1;
  return_value_dfibheap_getSize_1=dfibheap_getSize(heap);
  return return_value_dfibheap_getSize_1;
}

// getDSLink2Scaf
// file orderContig.c line 3883
static signed int getDSLink2Scaf(struct stack *scafStack, struct dynamic_array *SCAF, struct dynamic_array *WT)
{
  struct connection *ite_cnt;
  unsigned int ctg;
  unsigned int targetCtg;
  unsigned int *pt;
  signed int counter = 0;
  char inc;
  stackRecover(scafStack);
  void *return_value_stackPop_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  do
  {
    return_value_stackPop_1=stackPop(scafStack);
    pt = (unsigned int *)return_value_stackPop_1;
    if(pt == ((unsigned int *)NULL))
      break;

    ctg = *pt;
    if(!((contig_array + (signed long int)ctg)->mask == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = !((contig_array + (signed long int)ctg)->downwardConnect != ((struct connection *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_2)
    {
      ite_cnt = (contig_array + (signed long int)ctg)->downwardConnect;
      while(!(ite_cnt == ((struct connection *)NULL)))
      {
        if(!(ite_cnt->deleted == 0))
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = ite_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = ite_cnt->singleInScaf != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = ite_cnt->nextInScaf != ((struct connection *)NULL) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
          tmp_if_expr_6 = (_Bool)1;

        else
          tmp_if_expr_6 = ite_cnt->prevInScaf != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_6)
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = ite_cnt->inherit != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_7)
          ite_cnt = ite_cnt->next;

        else
        {
          targetCtg = ite_cnt->contigID;
          if((contig_array + (signed long int)ctg)->from_vt == (contig_array + (signed long int)targetCtg)->from_vt)
            ite_cnt = ite_cnt->next;

          else
          {
            inc=putItem2Sarray((contig_array + (signed long int)targetCtg)->from_vt, (signed int)ite_cnt->weight, SCAF, WT, counter);
            if(!(inc == 0))
              counter = counter + 1;

            ite_cnt = ite_cnt->next;
          }
        }
      }
    }

  }
  while((_Bool)1);
  return counter;
}

// getID
// file prlHashCtg.c line 247
static signed int getID(char *name)
{
  _Bool tmp_if_expr_2;
  if((signed int)*name >= 48)
    tmp_if_expr_2 = (signed int)name[(signed long int)0] <= 57 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
  {
    signed int return_value_atoi_1;
    return_value_atoi_1=atoi_link8(&name[(signed long int)0]);
    return return_value_atoi_1;
  }

  else
    return 0;
}

// getIndexInArray
// file orderContig.c line 1295
static signed int getIndexInArray(unsigned int node)
{
  signed int index = 0;
  for( ; !(index >= nodeCounter_link1); index = index + 1)
    if(nodesInSub[(signed long int)index] == node)
      return index;

  return -1;
}

// getItem
// file inc/extfunc2.h line 26
extern void * getItem(struct mem_manager *mem_Manager)
{
  struct recycle_mark *mark;
  struct block_start *block;
  _Bool tmp_if_expr_2;
  signed int tmp_post_3;
  if(mem_Manager == ((struct mem_manager *)NULL))
    return (void *)0;

  else
    if(!(mem_Manager->recycle_list == ((struct recycle_mark *)NULL)))
    {
      mark = mem_Manager->recycle_list;
      mem_Manager->recycle_list = mark->next;
      return (void *)mark;
    }

    else
    {
      mem_Manager->counter = mem_Manager->counter + 1ull;
      if(mem_Manager->block_list == ((struct block_start *)NULL))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = mem_Manager->index_in_block == mem_Manager->items_per_block ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
      {
        void *return_value_ckalloc_1;
        return_value_ckalloc_1=ckalloc(sizeof(struct block_start) /*8ul*/  + (unsigned long int)mem_Manager->items_per_block * mem_Manager->item_size);
        block = (struct block_start *)return_value_ckalloc_1;
        block->next = mem_Manager->block_list;
        mem_Manager->block_list = block;
        mem_Manager->index_in_block = 1;
        return (void *)(struct recycle_mark *)((void *)block + (signed long int)sizeof(struct block_start) /*8ul*/ );
      }

      block = mem_Manager->block_list;
      tmp_post_3 = mem_Manager->index_in_block;
      mem_Manager->index_in_block = mem_Manager->index_in_block + 1;
      return (void *)(struct recycle_mark *)((void *)block + (signed long int)sizeof(struct block_start) /*8ul*/  + (signed long int)(mem_Manager->item_size * (unsigned long int)tmp_post_3));
    }
}

// getKey
// file inc/dfibHeap.h line 44
double getKey(struct dfibheap_el *node)
{
  double return_value_dfibheap_el_getKey_1;
  return_value_dfibheap_el_getKey_1=dfibheap_el_getKey(node);
  return return_value_dfibheap_el_getKey_1;
}

// getMaxLongReadLen
// file lib.c line 337
extern signed int getMaxLongReadLen(signed int num_libs)
{
  signed int i;
  signed int maxLong = 0;
  char Has = (char)0;
  i = 0;
  signed int tmp_if_expr_1;
  for( ; !(i >= num_libs); i = i + 1)
    if((lib_array + (signed long int)i)->asm_flag == 4)
    {
      Has = (char)1;
      if(!(maxLong >= (lib_array + (signed long int)i)->rd_len_cutoff))
        tmp_if_expr_1 = (lib_array + (signed long int)i)->rd_len_cutoff;

      else
        tmp_if_expr_1 = maxLong;
      maxLong = tmp_if_expr_1;
    }

  if(Has == 0)
    return maxLong;

  else
    return maxLong > 0 ? maxLong : maxReadLen;
}

// getMinOverlap
// file map.c line 34
static signed int getMinOverlap(char *gfile)
{
  char name[256l];
  char ch;
  struct _IO_FILE *fp;
  signed int num_kmer;
  signed int getMinOverlap__1__overlaplen = 23;
  char line[1024l];
  sprintf(name, "%s.preGraphBasic", gfile);
  fp=fopen(name, "r");
  char *return_value_fgets_1;
  if(fp == ((struct _IO_FILE *)NULL))
    return getMinOverlap__1__overlaplen;

  else
  {
    do
    {
      return_value_fgets_1=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      if((signed int)line[0l] == 86)
        sscanf(line + (signed long int)6, "%d %c %d", &num_kmer, &ch, &getMinOverlap__1__overlaplen);

      else
        if((signed int)line[0l] == 77)
          sscanf(line, "MaxReadLen %d MinReadLen %d MaxNameLen %d", &maxReadLen, &minReadLen, &maxNameLen);

    }
    while((_Bool)1);
    fclose(fp);
    return getMinOverlap__1__overlaplen;
  }
}

// getNextContig
// file orderContig.c line 579
static struct connection * getNextContig(unsigned int ctg, struct connection *preCNT, char *exception)
{
  struct connection *cn_temp;
  struct connection *retCNT = (struct connection *)(void *)0;
  signed int count = 0;
  signed int valid_in;
  unsigned int nextCtg;
  unsigned int bal_ctg;
  *exception = (char)0;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_7;
  if(!(preCNT == ((struct connection *)NULL)))
  {
    if(preCNT->nextInScaf == ((struct connection *)NULL))
      goto __CPROVER_DUMP_L9;

    if(!(preCNT->contigID == ctg))
      printf("pre cnt does not lead to %d\n", ctg);

    nextCtg = preCNT->nextInScaf->contigID;
    cn_temp=getCntBetween(ctg, nextCtg);
    if(!(cn_temp == ((struct connection *)NULL)))
    {
      if(!(cn_temp->mask == 0))
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = cn_temp->deleted != 0 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_6 = (_Bool)0;
    if(tmp_if_expr_6)
    {
      unsigned int return_value_getTwinCtg_1;
      return_value_getTwinCtg_1=getTwinCtg(nextCtg);
      unsigned int return_value_getTwinCtg_2;
      return_value_getTwinCtg_2=getTwinCtg(ctg);
      printf("getNextContig: arc(%d %d) twin (%d %d) with mask %d deleted %d\n", ctg, nextCtg, return_value_getTwinCtg_1, return_value_getTwinCtg_2, cn_temp->mask, cn_temp->deleted);
      if(cn_temp->prevInScaf == 0)
        printf("not even has a prevInScaf\n");

      unsigned int return_value_getTwinCtg_3;
      return_value_getTwinCtg_3=getTwinCtg(nextCtg);
      unsigned int return_value_getTwinCtg_4;
      return_value_getTwinCtg_4=getTwinCtg(ctg);
      cn_temp=getCntBetween(return_value_getTwinCtg_3, return_value_getTwinCtg_4);
      if(cn_temp->nextInScaf == ((struct connection *)NULL))
        printf("its twin cnt not  has a nextInScaf\n");

      fflush(stdout);
      *exception = (char)1;
      goto __CPROVER_DUMP_L9;
    }

    return preCNT->nextInScaf;
  }

  else
  {

  __CPROVER_DUMP_L9:
    ;
    bal_ctg=getTwinCtg(ctg);
    valid_in=validConnect(bal_ctg, (struct connection *)(void *)0);
    if(valid_in >= 2)
      return (struct connection *)(void *)0;

    else
      if((contig_array + (signed long int)ctg)->downwardConnect == ((struct connection *)NULL))
        return (struct connection *)(void *)0;

      else
      {
        cn_temp = (contig_array + (signed long int)ctg)->downwardConnect;
        while(!(cn_temp == ((struct connection *)NULL)))
        {
          if(!(cn_temp->mask == 0))
            tmp_if_expr_7 = (_Bool)1;

          else
            tmp_if_expr_7 = cn_temp->deleted != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_7)
            cn_temp = cn_temp->next;

          else
          {
            count = count + 1;
            if(count == 1)
              retCNT = cn_temp;

            else
              if(count == 2)
                return (struct connection *)(void *)0;

            cn_temp = cn_temp->next;
          }
        }
        return retCNT;
      }
  }
}

// getNodeDHeapNode
// file bubble.c line 873
static struct dfibheap_el * getNodeDHeapNode(unsigned int node)
{
  return dheapNodes[(signed long int)node];
}

// getNodePrevious
// file bubble.c line 293
unsigned int getNodePrevious(unsigned int node)
{
  return previous[(signed long int)node];
}

// getPreArcBetween
// file prlRead2path.c line 272
static struct prearc * getPreArcBetween(unsigned int from_ed, unsigned int to_ed)
{
  struct prearc *parc = preArc_array[(signed long int)from_ed];
  for( ; !(parc == ((struct prearc *)NULL)); parc = parc->next)
    if(parc->to_ed == to_ed)
      return parc;

  return parc;
}

// getRead1by1
// file prlReadFillGap.c line 95
static signed long long int getRead1by1(struct _IO_FILE *fp, struct dynamic_array *readSeqInGap)
{
  signed long long int getRead1by1__1__readCounter = (signed long long int)0;
  unsigned long int return_value_fread_2;
  if(fp == ((struct _IO_FILE *)NULL))
    return getRead1by1__1__readCounter;

  else
  {
    signed int len;
    signed int ctgID;
    signed int pos;
    signed long long int starter;
    char *pt;
    char *freadBuf;
    void *return_value_ckalloc_1;
    return_value_ckalloc_1=ckalloc((unsigned long int)(maxReadLen / 4 + 1) * sizeof(char) /*1ul*/ );
    freadBuf = (char *)return_value_ckalloc_1;
    do
    {
      return_value_fread_2=fread((void *)&len, sizeof(signed int) /*4ul*/ , (unsigned long int)1, fp);
      if(!(return_value_fread_2 == 1ul))
        break;

      unsigned long int return_value_fread_3;
      return_value_fread_3=fread((void *)&ctgID, sizeof(signed int) /*4ul*/ , (unsigned long int)1, fp);
      if(!(return_value_fread_3 == 1ul))
        break;

      unsigned long int return_value_fread_4;
      return_value_fread_4=fread((void *)&pos, sizeof(signed int) /*4ul*/ , (unsigned long int)1, fp);
      if(!(return_value_fread_4 == 1ul))
        break;

      unsigned long int return_value_fread_5;
      return_value_fread_5=fread((void *)freadBuf, sizeof(char) /*1ul*/ , (unsigned long int)(len / 4 + 1), fp);
      if(!(return_value_fread_5 == (unsigned long int)(1u + (unsigned int)(len / 4))))
        break;

      starter = readSeqInGap->item_c;
      void *return_value_darrayPut_6;
      return_value_darrayPut_6=darrayPut(readSeqInGap, starter + (signed long int)(len / 4));
      if(return_value_darrayPut_6 == NULL)
        break;

      void *return_value_darrayPut_7;
      return_value_darrayPut_7=darrayPut(readSeqInGap, starter);
      pt = (char *)return_value_darrayPut_7;
      bcopy((const void *)freadBuf, (void *)pt, (unsigned long int)(len / 4 + 1));
      attach1read2contig((unsigned int)ctgID, len, pos, starter);
      getRead1by1__1__readCounter = getRead1by1__1__readCounter + 1ll;
    }
    while((_Bool)1);
    free((void *)freadBuf);
    return getRead1by1__1__readCounter;
  }
}

// getReadIngap
// file prlRead2Ctg.c line 408
static void getReadIngap(signed int t, signed int insSize, struct _IO_FILE *outfp, char readOne)
{
  signed int read1;
  signed int read2;
  if(!(readOne == 0))
  {
    read1 = t;
    read2 = t + 1;
    ctgIdArray_link1[(signed long int)read1] = ctgIdArray_link1[(signed long int)read2];
    posArray[(signed long int)read1] = (posArray[(signed long int)read2] + insSize) - lenBuffer_link2[(signed long int)read1];
    output1read(read1, outfp);
  }

  else
  {
    read2 = t;
    read1 = t - 1;
    ctgIdArray_link1[(signed long int)read2] = ctgIdArray_link1[(signed long int)read1];
    posArray[(signed long int)read2] = (posArray[(signed long int)read1] + insSize) - lenBuffer_link2[(signed long int)read2];
    output1read(read2, outfp);
  }
}

// getScaffold
// file orderContig.c line 3929
static signed int getScaffold(unsigned int start, struct stack *scafStack)
{
  signed int len = (signed int)(contig_array + (signed long int)start)->length;
  unsigned int *pt;
  unsigned int ctg;
  emptyStack(scafStack);
  void *return_value_stackPush_1;
  return_value_stackPush_1=stackPush(scafStack);
  pt = (unsigned int *)return_value_stackPush_1;
  *pt = start;
  struct connection *bindCnt;
  bindCnt=getBindCnt(start);
  while(!(bindCnt == ((struct connection *)NULL)))
  {
    ctg = bindCnt->contigID;
    void *return_value_stackPush_2;
    return_value_stackPush_2=stackPush(scafStack);
    pt = (unsigned int *)return_value_stackPush_2;
    *pt = ctg;
    len = len + (signed int)(contig_array + (signed long int)ctg)->length;
    bindCnt = bindCnt->nextInScaf;
  }
  stackBackup(scafStack);
  return len;
}

// getSeqFromCtg
// file localAsm.c line 203
static signed int getSeqFromCtg(struct ctg4scaf *ctg, char fromHead, unsigned int len, signed int originOverlap, char *src_seq)
{
  unsigned int ctgId = ctg->ctgID;
  unsigned int bal_ctg;
  bal_ctg=getTwinCtg(ctgId);
  if(!((contig_array + (signed long int)ctgId)->length >= 1u))
    return 0;

  else
  {
    unsigned int length = (contig_array + (signed long int)ctgId)->length + (unsigned int)originOverlap;
    len = len < length ? len : length;
    if(!(fromHead == 0))
    {
      if(!((contig_array + (signed long int)ctgId)->seq == ((char *)NULL)))
        headTightStr((contig_array + (signed long int)ctgId)->seq, (signed int)length, 0, (signed int)len, 0, src_seq);

      else
        headTightStr((contig_array + (signed long int)bal_ctg)->seq, (signed int)length, 0, (signed int)len, 1, src_seq);
    }

    else
      if(!((contig_array + (signed long int)ctgId)->seq == ((char *)NULL)))
        headTightStr((contig_array + (signed long int)ctgId)->seq, (signed int)length, (signed int)(length - len), (signed int)len, 0, src_seq);

      else
        headTightStr((contig_array + (signed long int)bal_ctg)->seq, (signed int)length, (signed int)(length - len), (signed int)len, 1, src_seq);
    return (signed int)len;
  }
}

// getSeqFromRead
// file localAsm.c line 79
static void getSeqFromRead(struct read_nearby read, char *src_seq)
{
  signed int len_seq = read.len;
  signed int j;
  char *tightSeq;
  void *return_value_darrayGet_1;
  return_value_darrayGet_1=darrayGet(readSeqInGap, read.seqStarter);
  tightSeq = (char *)return_value_darrayGet_1;
  j = 0;
  for( ; !(j >= len_seq); j = j + 1)
    src_seq[(signed long int)j]=getCharInTightString(tightSeq, j);
}

// getTwinCtg
// file attachPEinfo.c line 406
extern unsigned int getTwinCtg(unsigned int ctg)
{
  return (ctg + (unsigned int)(contig_array + (signed long int)ctg)->bal_edge) - (unsigned int)1;
}

// getTwinEdge
// file inc/extfunc.h line 212
extern unsigned int getTwinEdge(unsigned int edgeno)
{
  return (edgeno + (unsigned int)(edge_array + (signed long int)edgeno)->bal_edge) - (unsigned int)1;
}

// getWtFromSarray
// file orderContig.c line 3962
static signed int getWtFromSarray(struct dynamic_array *SCAF, struct dynamic_array *WT, signed int count, unsigned int scaf)
{
  signed int i = 0;
  void *return_value_darrayGet_2;
  for( ; !(i >= count); i = i + 1)
  {
    return_value_darrayGet_2=darrayGet(SCAF, (signed long long int)i);
    if(*((unsigned int *)return_value_darrayGet_2) == scaf)
    {
      void *return_value_darrayGet_1;
      return_value_darrayGet_1=darrayGet(WT, (signed long long int)i);
      return *((signed int *)return_value_darrayGet_1);
    }

  }
  return 0;
}

// hash_kmer
// file hashFunction.c line 101
unsigned long long int hash_kmer(unsigned long long int kmer)
{
  unsigned long long int hash = kmer;
  signed int return_value_crc32_1;
  return_value_crc32_1=crc32(0, (char *)&kmer, (signed int)sizeof(unsigned long long int) /*8ul*/ );
  hash = (unsigned long long int)return_value_crc32_1;
  hash = hash & (unsigned long long int)0x0000000000ffffffL;
  return hash;
}

// headTightStr
// file localAsm.c line 187
static void headTightStr(char *tightStr, signed int length, signed int start, signed int headLen, signed int revS, char *src_seq)
{
  signed int i;
  signed int index = 0;
  signed int tmp_post_1;
  signed int tmp_post_2;
  if(revS == 0)
  {
    i = start;
    for( ; !(i >= headLen + start); i = i + 1)
    {
      tmp_post_1 = index;
      index = index + 1;
      src_seq[(signed long int)tmp_post_1]=getCharInTightString(tightStr, i);
    }
  }

  else
  {
    i = (length - 1) - start;
    for( ; i >= length + -headLen + -start; i = i - 1)
    {
      tmp_post_2 = index;
      index = index + 1;
      char return_value_getCharInTightString_3;
      return_value_getCharInTightString_3=getCharInTightString(tightStr, i);
      src_seq[(signed long int)tmp_post_2] = (char)((signed int)return_value_getCharInTightString_3 ^ 0x02);
    }
  }
}

// initStackBuf
// file prlReadFillGap.c line 863
static void initStackBuf(struct stack **ctgStackBuffer, signed int scafBufSize)
{
  signed int i = 0;
  for( ; !(i >= scafBufSize); i = i + 1)
  {
    flagBuf[(signed long int)i] = (char)1;
    struct stack *return_value_createStack_1;
    return_value_createStack_1=createStack(100, sizeof(struct ctg4scaf) /*20ul*/ );
    ctgStackBuffer[(signed long int)i] = (struct stack *)return_value_createStack_1;
  }
}

// initStackBuf_link1
// file read2scaf.c line 73
static void initStackBuf_link1(struct stack **ctgStackBuffer_link1, signed int scafBufSize_link1)
{
  signed int i_link1 = 0;
  for( ; !(i_link1 >= scafBufSize_link1); i_link1 = i_link1 + 1)
  {
    struct stack *return_value_createStack_1_link1;
    return_value_createStack_1_link1=createStack(100, sizeof(struct ctg4scaf) /*20ul*/ );
    ctgStackBuffer_link1[(signed long int)i_link1] = (struct stack *)return_value_createStack_1_link1;
  }
}

// init_kmerset
// file inc/newhash.h line 88
extern struct kmerSet_st * init_kmerset(unsigned long long int init_size, float load_factor)
{
  struct kmerSet_st *set;
  if(!(init_size >= 3ul))
    init_size = (unsigned long long int)3;

  else
    init_size=find_next_prime_kh(init_size);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct kmerSet_st) /*56ul*/ );
  set = (struct kmerSet_st *)return_value_malloc_1;
  set->size = init_size;
  set->count = (unsigned long long int)0;
  set->max = (unsigned long long int)((float)set->size * load_factor);
  if(load_factor <= 0.000000f)
    load_factor = 0.25f;

  else
    if(load_factor >= 1.000000f)
      load_factor = 0.75f;

  set->load_factor = (double)load_factor;
  set->iter_ptr = (unsigned long long int)0;
  void *return_value_calloc_2;
  return_value_calloc_2=calloc(set->size, sizeof(struct kmer_st) /*16ul*/ );
  set->array = (struct kmer_st *)return_value_calloc_2;
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(((set->size + (unsigned long int)15) / (unsigned long int)16) * (unsigned long int)4);
  set->flags = (unsigned int *)return_value_malloc_3;
  memset((void *)set->flags, 0x55, ((set->size + (unsigned long int)15) / (unsigned long int)16) * (unsigned long int)4);
  return set;
}

// initenv
// file contig.c line 103
static void initenv(signed int argc, char **argv)
{
  signed int copt;
  signed int inpseq;
  signed int outseq;
  char temp[100l];
  repeatSolve = (char)0;
  outseq = (signed int)repeatSolve;
  inpseq = outseq;
  optind = 1;
  signed int return_value_atoi_1;
  signed int tmp_if_expr_3;
  signed int return_value_atoi_2;
  do
  {
    copt=getopt(argc, argv, "g:M:D:R");
    if(copt == -1)
      break;

    switch(copt)
    {
      case 77:
      {
        sscanf(optarg, "%s", (const void *)temp);
        M=atoi(temp);
        break;
      }
      case 68:
      {
        sscanf(optarg, "%s", (const void *)temp);
        return_value_atoi_1=atoi(temp);
        if(return_value_atoi_1 >= 0)
        {
          return_value_atoi_2=atoi(temp);
          tmp_if_expr_3 = return_value_atoi_2;
        }

        else
          tmp_if_expr_3 = 0;
        deLowEdge = (char)tmp_if_expr_3;
        break;
      }
      case 103:
      {
        inGraph = 1;
        sscanf(optarg, "%s", (const void *)graphfile);
        break;
      }
      case 82:
      {
        repeatSolve = (char)1;
        break;
      }
      default:
        if(inGraph == 0)
        {
          display_contig_usage();
          exit(-1);
        }

    }
  }
  while((_Bool)1);
  if(inGraph == 0)
  {
    display_contig_usage();
    exit(-1);
  }

}

// initenv_link1
// file map.c line 96
static void initenv_link1(signed int argc_link1, char **argv_link1)
{
  signed int copt_link1;
  signed int inpseq_link1;
  signed int outseq_link1;
  char temp_link1[100l];
  optind = 1;
  outseq_link1 = 0;
  inpseq_link1 = outseq_link1;
  do
  {
    copt_link1=getopt(argc_link1, argv_link1, "s:g:K:p:");
    if(copt_link1 == -1)
      break;

    switch(copt_link1)
    {
      case 115:
      {
        inpseq_link1 = 1;
        sscanf(optarg, "%s", (const void *)shortrdsfile_link1);
        break;
      }
      case 103:
      {
        outseq_link1 = 1;
        sscanf(optarg, "%s", (const void *)graphfile_link1);
        break;
      }
      case 75:
      {
        sscanf(optarg, "%s", (const void *)temp_link1);
        overlaplen=atoi_link6(temp_link1);
        break;
      }
      case 112:
      {
        sscanf(optarg, "%s", (const void *)temp_link1);
        thrd_num=atoi_link6(temp_link1);
        break;
      }
      default:
        if(inpseq_link1 == 0 || outseq_link1 == 0)
        {
          display_map_usage();
          exit(1);
        }

    }
  }
  while((_Bool)1);
  if(inpseq_link1 == 0 || outseq_link1 == 0)
  {
    display_map_usage();
    exit(1);
  }

}

// initenv_link2
// file pregraph.c line 105
static void initenv_link2(signed int argc_link2, char **argv_link2)
{
  signed int copt_link2;
  signed int inpseq_link2;
  signed int outseq_link2;
  char temp_link2[100l];
  optind = 1;
  outseq_link2 = 0;
  inpseq_link2 = outseq_link2;
  signed int return_value_atoi_1_link1;
  signed int tmp_if_expr_3_link1;
  signed int return_value_atoi_2_link1;
  do
  {
    copt_link2=getopt(argc_link2, argv_link2, "a:s:o:K:p:d:DR");
    if(copt_link2 == -1)
      break;

    switch(copt_link2)
    {
      case 115:
      {
        inpseq_link2 = 1;
        sscanf(optarg, "%s", (const void *)shortrdsfile_link2);
        break;
      }
      case 111:
      {
        outseq_link2 = 1;
        sscanf(optarg, "%s", (const void *)graphfile_link2);
        break;
      }
      case 75:
      {
        sscanf(optarg, "%s", (const void *)temp_link2);
        overlaplen=atoi_link7(temp_link2);
        break;
      }
      case 112:
      {
        sscanf(optarg, "%s", (const void *)temp_link2);
        thrd_num=atoi_link7(temp_link2);
        break;
      }
      case 82:
      {
        repsTie = (char)1;
        break;
      }
      case 100:
      {
        sscanf(optarg, "%s", (const void *)temp_link2);
        return_value_atoi_1_link1=atoi_link7(temp_link2);
        if(return_value_atoi_1_link1 >= 0)
        {
          return_value_atoi_2_link1=atoi_link7(temp_link2);
          tmp_if_expr_3_link1 = return_value_atoi_2_link1;
        }

        else
          tmp_if_expr_3_link1 = 0;
        deLowKmer = (char)tmp_if_expr_3_link1;
        break;
      }
      case 68:
      {
        deLowEdge = (char)1;
        break;
      }
      case 97:
      {
        initKmerSetSize=atoi_link7(optarg);
        break;
      }
      default:
        if(inpseq_link2 == 0 || outseq_link2 == 0)
        {
          display_pregraph_usage();
          exit(-1);
        }

    }
  }
  while((_Bool)1);
  if(inpseq_link2 == 0 || outseq_link2 == 0)
  {
    display_pregraph_usage();
    exit(-1);
  }

}

// initenv_link3
// file scaffold.c line 79
static void initenv_link3(signed int argc_link3, char **argv_link3)
{
  signed int copt_link3;
  signed int inpseq_link3;
  char temp_link3[256l];
  inpseq_link3 = 0;
  LINK = (char)0;
  SCAFF = (char)0;
  optind = 1;
  signed int return_value_atoi_1_link2;
  do
  {
    copt_link3=getopt(argc_link3, argv_link3, "g:L:p:G:FuS");
    if(copt_link3 == -1)
      break;

    switch(copt_link3)
    {
      case 103:
      {
        inGraph = 1;
        sscanf(optarg, "%s", (const void *)graphfile_link3);
        break;
      }
      case 71:
      {
        sscanf(optarg, "%s", (const void *)temp_link3);
        GLDiff=atoi_link10(temp_link3);
        break;
      }
      case 76:
      {
        sscanf(optarg, "%s", (const void *)temp_link3);
        return_value_atoi_1_link2=atoi_link10(temp_link3);
        ctg_short = (unsigned int)return_value_atoi_1_link2;
        break;
      }
      case 70:
      {
        fillGap = 1;
        break;
      }
      case 83:
      {
        SCAFF = (char)1;
        break;
      }
      case 117:
      {
        maskRep = (char)0;
        break;
      }
      case 112:
      {
        sscanf(optarg, "%s", (const void *)temp_link3);
        thrd_num=atoi_link10(temp_link3);
        break;
      }
      default:
        if(inGraph == 0)
        {
          display_scaff_usage();
          exit(-1);
        }

    }
  }
  while((_Bool)1);
  if(inGraph == 0)
  {
    display_scaff_usage();
    exit(-1);
  }

}

// initiateCtgInScaf
// file prlReadFillGap.c line 226
static void initiateCtgInScaf(struct ctg4scaf *actg)
{
  actg->cutTail = (unsigned int)0;
  actg->cutHead = (unsigned int)overlaplen;
  actg->gapSeqLen = (unsigned int)0;
}

// inputLinks
// file orderContig.c line 2804
static signed int inputLinks(struct _IO_FILE *fp, signed int insertS, char *line)
{
  unsigned int ctg;
  unsigned int bal_ctg;
  unsigned int toCtg;
  unsigned int bal_toCtg;
  signed int gap;
  signed int wt;
  signed int ins;
  unsigned int counter = (unsigned int)0;
  unsigned int onScafCounter = (unsigned int)0;
  unsigned int maskCounter = (unsigned int)0;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(line);
  _Bool tmp_if_expr_1;
  if(!(return_value_strlen_2 == 0ul))
  {
    sscanf(line, "%d %d %d %d %d", &ctg, &toCtg, &gap, &wt, &ins);
    if(!(ins == insertS))
      return (signed int)counter;

    bal_ctg=getTwinCtg(ctg);
    bal_toCtg=getTwinCtg(toCtg);
    add1Connect(ctg, toCtg, gap, wt, (char)0);
    add1Connect(bal_toCtg, bal_ctg, gap, wt, (char)0);
    counter = counter + 1u;
    if(!((contig_array + (signed long int)ctg)->mask == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (contig_array + (signed long int)toCtg)->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      maskCounter = maskCounter + 1u;

    if(insertS >= 1001)
    {
      if((contig_array + (signed long int)ctg)->from_vt == (contig_array + (signed long int)toCtg)->from_vt)
      {
        if(!((signed int)(contig_array + (signed long int)ctg)->indexInScaf >= (signed int)(contig_array + (signed long int)toCtg)->indexInScaf))
        {
          add1LongPEcov(ctg, toCtg, wt);
          onScafCounter = onScafCounter + 1u;
        }

      }

    }

  }

  char *return_value_fgets_3;
  _Bool tmp_if_expr_4;
  do
  {
    return_value_fgets_3=fgets(line, lineLen, fp);
    if(return_value_fgets_3 == ((char *)NULL))
      break;

    sscanf(line, "%d %d %d %d %d", &ctg, &toCtg, &gap, &wt, &ins);
    if(!(ins == insertS))
      break;

    if(insertS >= 1001)
    {
      if((contig_array + (signed long int)ctg)->from_vt == (contig_array + (signed long int)toCtg)->from_vt)
      {
        if(!((signed int)(contig_array + (signed long int)ctg)->indexInScaf >= (signed int)(contig_array + (signed long int)toCtg)->indexInScaf))
        {
          add1LongPEcov(ctg, toCtg, wt);
          onScafCounter = onScafCounter + 1u;
        }

      }

    }

    bal_ctg=getTwinCtg(ctg);
    bal_toCtg=getTwinCtg(toCtg);
    add1Connect(ctg, toCtg, gap, wt, (char)0);
    add1Connect(bal_toCtg, bal_ctg, gap, wt, (char)0);
    counter = counter + 1u;
    if(!((contig_array + (signed long int)ctg)->mask == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (contig_array + (signed long int)toCtg)->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      maskCounter = maskCounter + 1u;

  }
  while((_Bool)1);
  printf("%d link to masked contigs, %d links on a single scaff\n", maskCounter, onScafCounter);
  return (signed int)counter;
}

// insertNodeIntoDHeap
// file inc/dfibHeap.h line 28
struct dfibheap_el * insertNodeIntoDHeap(struct dfibheap *heap, double key, unsigned int node)
{
  struct dfibheap_el *res;
  res=dfh_insertkey(heap, key, node);
  return res;
}

// insertNodeIntoHeap
// file fibHeap.c line 33
struct fibheap_el * insertNodeIntoHeap(struct fibheap *heap, signed long long int key, unsigned int node)
{
  struct fibheap_el *return_value_fh_insertkey_1;
  return_value_fh_insertkey_1=fh_insertkey(heap, key, node);
  return return_value_fh_insertkey_1;
}

// interferingCheck
// file splitReps.c line 33
static char interferingCheck(unsigned int edgeno, signed int repTimes)
{
  signed int i;
  signed int j;
  signed int t;
  unsigned int bal_ed;
  involved[(signed long int)0] = edgeno;
  i = 1;
  j = 0;
  signed int tmp_post_1;
  for( ; !(j >= repTimes); j = j + 1)
  {
    tmp_post_1 = i;
    i = i + 1;
    involved[(signed long int)tmp_post_1] = lefts[(signed long int)j];
  }
  j = 0;
  signed int tmp_post_2;
  for( ; !(j >= repTimes); j = j + 1)
  {
    tmp_post_2 = i;
    i = i + 1;
    involved[(signed long int)tmp_post_2] = rights[(signed long int)j];
  }
  j = 0;
  for( ; !(j >= i + -1); j = j + 1)
  {
    t = j + 1;
    for( ; !(t >= i); t = t + 1)
      if(involved[(signed long int)j] == involved[(signed long int)t])
        return (char)1;

  }
  j = 0;
  for( ; !(j >= i); j = j + 1)
  {
    bal_ed=getTwinEdge(involved[(signed long int)j]);
    t = 0;
    for( ; !(t >= i); t = t + 1)
      if(bal_ed == involved[(signed long int)t])
        return (char)1;

  }
  return (char)0;
}

// isLargerThanTwin
// file attachPEinfo.c line 416
extern char isLargerThanTwin(unsigned int ctg)
{
  return (char)((signed int)(contig_array + (signed long int)ctg)->bal_edge < 1);
}

// isLinkReliable
// file orderContig.c line 3951
static char isLinkReliable(struct dynamic_array *WT, signed int count)
{
  signed int i = 0;
  void *return_value_darrayGet_1;
  for( ; !(i >= count); i = i + 1)
  {
    return_value_darrayGet_1=darrayGet(WT, (signed long long int)i);
    if(*((signed int *)return_value_darrayGet_1) >= weakPE)
      return (char)1;

  }
  return (char)0;
}

// isPreviousToNode
// file bubble.c line 298
static char isPreviousToNode(unsigned int previous, unsigned int target)
{
  unsigned int currentNode = target;
  unsigned int previousNode = (unsigned int)0;
  double targetTime = times[(signed long int)target];
  while(!(currentNode == 0u))
  {
    if(currentNode == previous)
      return (char)1;

    if(currentNode == previousNode)
      return (char)0;

    if(IEEE_FLOAT_NOTEQUAL(times[(signed long int)currentNode], targetTime))
      return (char)0;

    previousNode = currentNode;
    currentNode=getNodePrevious(currentNode);
  }
  return (char)0;
}

// isSameAsTwin
// file attachPEinfo.c line 421
extern char isSameAsTwin(unsigned int ctg)
{
  return (char)((signed int)(contig_array + (signed long int)ctg)->bal_edge == 1);
}

// isSmallerThanTwin
// file attachPEinfo.c line 411
extern char isSmallerThanTwin(unsigned int ctg)
{
  return (char)((signed int)(contig_array + (signed long int)ctg)->bal_edge > 1);
}

// isUnreliableTip
// file cutTip_graph.c line 164
char isUnreliableTip(unsigned int edgeid, signed int cutLen, char strict)
{
  unsigned int arcRight_n;
  unsigned int arcLeft_n;
  unsigned int bal_ed;
  unsigned int currentEd = edgeid;
  signed int length = 0;
  unsigned int mult = (unsigned int)0;
  struct arc *arc;
  struct arc *activeArc = (struct arc *)(void *)0;
  struct arc *tempArc;
  if(edgeid == 0u)
    return (char)0;

  else
  {
    bal_ed=getTwinEdge(edgeid);
    if(bal_ed == edgeid)
      return (char)0;

    else
    {
      arcCount(bal_ed, &arcLeft_n);
      if(arcLeft_n >= 1u)
        return (char)0;

      else
      {
        while(!(currentEd == 0u))
        {
          arcCount(bal_ed, &arcLeft_n);
          tempArc=arcCount(currentEd, &arcRight_n);
          if(arcLeft_n >= 2u || arcRight_n >= 2u)
            break;

          length = length + (edge_array + (signed long int)currentEd)->length;
          if(!(tempArc == ((struct arc *)NULL)))
          {
            activeArc = tempArc;
            currentEd = activeArc->to_ed;
            bal_ed=getTwinEdge(currentEd);
          }

          else
            currentEd = (unsigned int)0;
        }
        if(length >= cutLen)
          return (char)0;

        else
          if(currentEd == 0u)
          {
            caseB_link1 = caseB_link1 + 1;
            return (char)1;
          }

          else
            if(strict == 0)
            {
              if(!(arcLeft_n >= 2u))
                length = length + (edge_array + (signed long int)currentEd)->length;

              if(length >= cutLen)
                return (char)0;

              caseC_link1 = caseC_link1 + 1;
              return (char)1;
            }

            else
              if(!(arcLeft_n >= 2u))
                return (char)0;

              else
              {
                if(activeArc == ((struct arc *)NULL))
                  printf("no activeArc while checking edge %d\n", edgeid);

                if(activeArc->multiplicity == 1u)
                {
                  caseD_link1 = caseD_link1 + 1;
                  return (char)1;
                }

                else
                {
                  arc = (edge_array + (signed long int)bal_ed)->arcs;
                  for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
                    if(!(mult >= arc->multiplicity))
                      mult = arc->multiplicity;

                  if(!(activeArc->multiplicity >= mult))
                    caseE = caseE + 1;

                  return (char)(mult > activeArc->multiplicity);
                }
              }
      }
    }
  }
}

// isUnreliableTip_strict
// file cutTip_graph.c line 255
char isUnreliableTip_strict(unsigned int edgeid, signed int cutLen)
{
  unsigned int arcRight_n;
  unsigned int arcLeft_n;
  unsigned int bal_ed;
  unsigned int currentEd = edgeid;
  signed int length = 0;
  unsigned int mult = (unsigned int)0;
  struct arc *arc;
  struct arc *activeArc = (struct arc *)(void *)0;
  struct arc *tempArc;
  if(edgeid == 0u)
    return (char)0;

  else
  {
    bal_ed=getTwinEdge(edgeid);
    if(bal_ed == edgeid)
      return (char)0;

    else
    {
      arcCount(bal_ed, &arcLeft_n);
      if(arcLeft_n >= 1u)
        return (char)0;

      else
      {
        while(!(currentEd == 0u))
        {
          arcCount(bal_ed, &arcLeft_n);
          tempArc=arcCount(currentEd, &arcRight_n);
          if(arcLeft_n >= 2u || arcRight_n >= 2u)
          {
            if(length == 0 || arcLeft_n == 0u)
              return (char)0;

            else
              break;
          }

          length = length + (edge_array + (signed long int)currentEd)->length;
          if(length >= cutLen)
            return (char)0;

          if(!(tempArc == ((struct arc *)NULL)))
          {
            activeArc = tempArc;
            currentEd = activeArc->to_ed;
            bal_ed=getTwinEdge(currentEd);
          }

          else
            currentEd = (unsigned int)0;
        }
        if(currentEd == 0u)
        {
          caseA_link1 = caseA_link1 + 1;
          return (char)1;
        }

        else
        {
          if(activeArc == ((struct arc *)NULL))
            printf("no activeArc while checking edge %d\n", edgeid);

          if(activeArc->multiplicity == 1u)
          {
            caseB_link1 = caseB_link1 + 1;
            return (char)1;
          }

          else
          {
            arc = (edge_array + (signed long int)bal_ed)->arcs;
            for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
              if(!(mult >= arc->multiplicity))
                mult = arc->multiplicity;

            if(!(activeArc->multiplicity >= mult))
              caseC_link1 = caseC_link1 + 1;

            return (char)(mult > activeArc->multiplicity);
          }
        }
      }
    }
  }
}

// is_prime_kh
// file newhash.c line 71
static inline signed int is_prime_kh(unsigned long long int num)
{
  unsigned long long int i;
  unsigned long long int is_prime_kh__1__max;
  if(!(num >= 4ul))
    return 1;

  else
    if(num % 2ul == 0ul)
      return 0;

    else
    {
      double return_value_sqrt_1;
      return_value_sqrt_1=sqrt((double)(float)num);
      is_prime_kh__1__max = (unsigned long long int)return_value_sqrt_1;
      i = (unsigned long long int)3;
      for( ; !(i >= is_prime_kh__1__max); i = i + (unsigned long long int)2)
        if(num % i == 0ul)
          return 0;

      return 1;
    }
}

// kmer2edges
// file node2edge.c line 45
extern void kmer2edges(char *outfile)
{
  struct _IO_FILE *fp;
  char temp[256l];
  sprintf(temp, "%s.edge", outfile);
  fp=ckopen(temp, "w");
  make_edge(fp);
  fclose(fp);
  num_ed = (unsigned int)edge_c;
}

// kmer2seq
// file seq.c line 192
char * kmer2seq(unsigned long long int word)
{
  signed int i;
  char *seq;
  unsigned long long int charMask = (unsigned long long int)3;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)overlaplen * sizeof(char) /*1ul*/ );
  seq = (char *)return_value_ckalloc_1;
  i = overlaplen - 1;
  for( ; i >= 0; i = i - 1)
  {
    seq[(signed long int)i] = (char)(charMask & word);
    word = word >> 2;
  }
  return seq;
}

// kmer2vt
// file loadPreGraph.c line 124
extern signed int kmer2vt(unsigned long long int kmer)
{
  unsigned long long int bal_word;
  signed int vt_id;
  bal_word=reverseComplement(kmer, overlaplen);
  if(!(kmer >= bal_word))
  {
    vt_id=bisearch(&vt_array[(signed long int)0], (signed int)num_vt, kmer);
    if(!(vt_id >= 0))
    {
      unsigned long long int return_value_reverseComplement_1;
      return_value_reverseComplement_1=reverseComplement(kmer, overlaplen);
      printf("no vt found for kmer %llx, its twin %llx\n", kmer, return_value_reverseComplement_1);
    }

    return vt_id;
  }

  else
  {
    vt_id=bisearch(&vt_array[(signed long int)0], (signed int)num_vt, bal_word);
    if(vt_id >= 0)
      vt_id = vt_id + (signed int)num_vt;

    else
    {
      unsigned long long int return_value_reverseComplement_2;
      return_value_reverseComplement_2=reverseComplement(kmer, overlaplen);
      printf("no vt found for kmer %llx, its twin %llx\n", kmer, return_value_reverseComplement_2);
    }
    return vt_id;
  }
}

// kmerSet_mark
// file localAsm.c line 306
static void kmerSet_mark(struct kmerSet_st *set)
{
  signed int i;
  signed int in_num;
  signed int out_num;
  signed int cvgSingle;
  struct kmer_st *rs;
  signed long long int counter = (signed long long int)0;
  signed long long int linear = (signed long long int)0;
  unsigned long long int word;
  set->iter_ptr = (unsigned long long int)0;
  for( ; !(set->iter_ptr >= set->size); set->iter_ptr = set->iter_ptr + 1ull)
    if((1u & set->flags[(signed long int)(set->iter_ptr >> 4)] >> ((15ul & set->iter_ptr) << 1)) == 0u)
    {
      out_num = 0;
      in_num = out_num;
      rs = set->array + (signed long int)set->iter_ptr;
      word = rs->seq;
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        cvgSingle = (signed int)(rs->l_links >> i * 6 & 0x3FU);
        if(cvgSingle >= 1)
          in_num = in_num + 1;

        cvgSingle = (signed int)((unsigned int)((signed int)rs->r_links >> i * 6) & 0x3FU);
        if(cvgSingle >= 1)
          out_num = out_num + 1;

      }
      if(!(rs->single == 0u))
        counter = counter + 1ll;

      if(in_num == 1 && out_num == 1)
      {
        rs->linear = (unsigned int)1;
        linear = linear + 1ll;
      }

    }

}

// lengthSearch
// file loadGraph.c line 97
signed int lengthSearch(unsigned int *len_array, unsigned int *flag_array, signed int num, unsigned int target)
{
  signed int mid;
  signed int low;
  signed int high;
  signed int i;
  low = 1;
  high = num;
  while(high >= low)
  {
    mid = (low + high) / 2;
    if(len_array[(signed long int)mid] == target)
      break;

    else
      if(!(len_array[(signed long int)mid] >= target))
        low = mid + 1;

      else
        high = mid - 1;
  }
  _Bool tmp_if_expr_1;
  if(!(high >= low))
    return -1;

  else
    if(flag_array[(signed long int)mid] == 0u)
    {
      i = mid - 1;
      for( ; i >= 1; i = i - 1)
      {
        if(!(len_array[(signed long int)i] == len_array[(signed long int)mid]))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = flag_array[(signed long int)i] != 0u ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          break;

      }
      flag_array[(signed long int)(i + 1)] = (unsigned int)1;
      return i + 1;
    }

    else
    {
      i = mid + 1;
      for( ; num >= i; i = i + 1)
        if(flag_array[(signed long int)i] == 0u)
          break;

      flag_array[(signed long int)i] = (unsigned int)1;
      return i;
    }
}

// linearC2C
// file orderContig.c line 903
static signed int linearC2C(unsigned int starter, struct connection *cnt2c1, unsigned int c2, signed int min_dis, signed int max_dis)
{
  signed int out_num;
  signed int in_num;
  struct connection *prevCNT;
  struct connection *cnt;
  struct connection *cn_temp;
  unsigned int c1;
  unsigned int bal_c1;
  unsigned int ctg;
  unsigned int bal_c2;
  signed int len = 0;
  unsigned int bal_start;
  bal_start=getTwinCtg(starter);
  char excep;
  c1 = cnt2c1->contigID;
  signed int tmp_post_1;
  signed int tmp_post_2;
  signed int tmp_post_3;
  signed int tmp_post_4;
  if(c1 == c2)
  {
    printf("linearC2C: c1(%d) and c2(%d) are the same contig\n", c1, c2);
    return -1;
  }

  else
  {
    bal_c1=getTwinCtg(c1);
    in_num=validConnect(bal_c1, (struct connection *)(void *)0);
    if(in_num >= 2)
      return 0;

    else
    {
      dsCtgCounter = 1;
      usCtgCounter = 0;
      tmp_post_1 = dsCtgCounter;
      dsCtgCounter = dsCtgCounter + 1;
      downstreamCTG[(signed long int)tmp_post_1] = c1;
      bal_c2=getTwinCtg(c2);
      tmp_post_2 = usCtgCounter;
      usCtgCounter = usCtgCounter + 1;
      upstreamCTG[(signed long int)tmp_post_2] = bal_c2;
      prevCNT = cnt2c1;
      cnt = prevCNT;
      do
      {
        cnt=getNextContig(c1, prevCNT, &excep);
        if(cnt == ((struct connection *)NULL))
          break;

        c1 = cnt->contigID;
        len = len + (signed int)((unsigned int)cnt->gapLen + (contig_array + (signed long int)c1)->length);
        if(c1 == c2)
          return 1;

        if(c1 == bal_start || c1 == starter || !(max_dis >= len))
          return 0;

        tmp_post_3 = dsCtgCounter;
        dsCtgCounter = dsCtgCounter + 1;
        downstreamCTG[(signed long int)tmp_post_3] = c1;
        if(dsCtgCounter >= 200)
        {
          printf("%d downstream contigs, start at %d, max_dis %d, current dis %d\n", dsCtgCounter, starter, max_dis, len);
          return 0;
        }

        prevCNT = cnt;
      }
      while((_Bool)1);
      out_num=validConnect(c1, (struct connection *)(void *)0);
      if(!(out_num == 0))
        return 0;

      else
      {
        prevCNT = (struct connection *)(void *)0;
        cnt = prevCNT;
        ctg = bal_c2;
        do
        {
          cnt=getNextContig(ctg, prevCNT, &excep);
          if(cnt == ((struct connection *)NULL))
            break;

          ctg = cnt->contigID;
          len = len + (signed int)((unsigned int)cnt->gapLen + (contig_array + (signed long int)ctg)->length);
          if(ctg == bal_start || ctg == starter || !(max_dis >= len))
            return 0;

          prevCNT = cnt;
          tmp_post_4 = usCtgCounter;
          usCtgCounter = usCtgCounter + 1;
          upstreamCTG[(signed long int)tmp_post_4] = ctg;
          if(usCtgCounter >= 200)
          {
            printf("%d upstream contigs, start at %d, max_dis %d, current dis %d\n", usCtgCounter, starter, max_dis, len);
            return 0;
          }

        }
        while((_Bool)1);
        if(dsCtgCounter + usCtgCounter >= 201)
        {
          printf("%d downstream and %d upstream contigs\n", dsCtgCounter, usCtgCounter);
          return 0;
        }

        else
        {
          out_num=validConnect(ctg, (struct connection *)(void *)0);
          if(!(out_num == 0))
            return 0;

          else
          {
            c2=getTwinCtg(ctg);
            min_dis = min_dis - len;
            max_dis = max_dis - len;
            if(c1 == ctg || c1 == c2 || !(max_dis >= 0))
              return 0;

            else
            {
              cn_temp=getCntBetween(c1, c2);
              if(!(cn_temp == ((struct connection *)NULL)))
              {
                setConnectMask(c1, c2, (char)0);
                setConnectDelete(c1, c2, (char)0, (char)0);
                return 1;
              }

              else
              {
                len = (min_dis + max_dis) / 2 >= 0 ? (min_dis + max_dis) / 2 : 0;
                cn_temp=allocateCN(c2, len);
                if(!(cntLookupTable == ((struct connection **)NULL)))
                  putCnt2LookupTable(c1, cn_temp);

                cn_temp->weight = (unsigned char)0;
                cn_temp->next = (contig_array + (signed long int)c1)->downwardConnect;
                (contig_array + (signed long int)c1)->downwardConnect = cn_temp;
                bal_c1=getTwinCtg(c1);
                bal_c2=getTwinCtg(c2);
                cn_temp=allocateCN(bal_c1, len);
                if(!(cntLookupTable == ((struct connection **)NULL)))
                  putCnt2LookupTable(bal_c2, cn_temp);

                cn_temp->weight = (unsigned char)0;
                cn_temp->next = (contig_array + (signed long int)bal_c2)->downwardConnect;
                (contig_array + (signed long int)bal_c2)->downwardConnect = cn_temp;
                return 1;
              }
            }
          }
        }
      }
    }
  }
}

// linearConcatenate
// file inc/extfunc.h line 118
extern void linearConcatenate()
{
  unsigned int i;
  signed int conc_c = 1;
  signed int counter;
  unsigned int from_ed;
  unsigned int to_ed;
  unsigned int bal_ed;
  struct arc *parc;
  struct arc *parc2;
  unsigned int bal_fe;
  _Bool tmp_if_expr_2;
  char return_value_EdSameAsTwin_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  while(!(conc_c == 0))
  {
    conc_c = 0;
    counter = 0;
    i = (unsigned int)1;
    for( ; num_ed >= i; i = i + 1u)
    {
      if(!((edge_array + (signed long int)i)->deleted == 0))
        tmp_if_expr_2 = (_Bool)1;

      else
      {
        return_value_EdSameAsTwin_1=EdSameAsTwin(i);
        tmp_if_expr_2 = return_value_EdSameAsTwin_1 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_2)
      {
        if((edge_array + (signed long int)i)->length >= 1)
          counter = counter + 1;

        parc = (edge_array + (signed long int)i)->arcs;
        if(parc == ((struct arc *)NULL))
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = parc->next != ((struct arc *)NULL) ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_3)
        {
          to_ed = parc->to_ed;
          bal_ed=getTwinEdge(to_ed);
          parc2 = (edge_array + (signed long int)bal_ed)->arcs;
          if(parc2 == ((struct arc *)NULL) || bal_ed == to_ed)
            tmp_if_expr_4 = (_Bool)1;

          else
            tmp_if_expr_4 = parc2->next != ((struct arc *)NULL) ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_4)
          {
            from_ed = i;
            if(!(from_ed == bal_ed) && !(from_ed == to_ed))
            {
              conc_c = conc_c + 1;
              linearUpdateConnection(from_ed, to_ed, 0);
              allpathUpdateEdge(from_ed, to_ed, 0);
              bal_fe=getTwinEdge(from_ed);
              linearUpdateConnection(bal_ed, bal_fe, 1);
              allpathUpdateEdge(bal_ed, bal_fe, 1);
            }

          }

        }

      }

    }
    printf("a linear concatenation lap, %d concatenated\n", conc_c);
  }
  printf("%d edges in graph\n", counter);
}

// linearUpdateConnection
// file concatenateEdge.c line 42
void linearUpdateConnection(unsigned int e1, unsigned int e2, signed int indicate)
{
  unsigned int bal_ed;
  struct arc *parc;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  if(indicate == 0)
  {
    (edge_array + (signed long int)e1)->to_vt = (edge_array + (signed long int)e2)->to_vt;
    bal_ed=getTwinEdge(e1);
    parc = (edge_array + (signed long int)e2)->arcs;
    for( ; !(parc == ((struct arc *)NULL)); parc = parc->next)
      parc->bal_arc->to_ed = bal_ed;
    (edge_array + (signed long int)e1)->arcs = (edge_array + (signed long int)e2)->arcs;
    (edge_array + (signed long int)e2)->arcs = (struct arc *)(void *)0;
    if(!((edge_array + (signed long int)e1)->length == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (edge_array + (signed long int)e2)->length != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      (edge_array + (signed long int)e1)->cvg = (unsigned short int)(((signed int)(edge_array + (signed long int)e1)->cvg * (edge_array + (signed long int)e1)->length + (signed int)(edge_array + (signed long int)e2)->cvg * (edge_array + (signed long int)e2)->length) / ((edge_array + (signed long int)e1)->length + (edge_array + (signed long int)e2)->length));

    (edge_array + (signed long int)e2)->deleted = (unsigned short int)1;
  }

  else
  {
    unsigned int return_value_getTwinEdge_2;
    return_value_getTwinEdge_2=getTwinEdge(e1);
    parc = (edge_array + (signed long int)return_value_getTwinEdge_2)->arcs;
    for( ; !(parc == ((struct arc *)NULL)); parc = parc->next)
      parc->bal_arc->to_ed = e2;
    (edge_array + (signed long int)e1)->arcs = (struct arc *)(void *)0;
    (edge_array + (signed long int)e2)->from_vt = (edge_array + (signed long int)e1)->from_vt;
    if(!((edge_array + (signed long int)e1)->length == 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (edge_array + (signed long int)e2)->length != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      (edge_array + (signed long int)e2)->cvg = (unsigned short int)(((signed int)(edge_array + (signed long int)e1)->cvg * (edge_array + (signed long int)e1)->length + (signed int)(edge_array + (signed long int)e2)->cvg * (edge_array + (signed long int)e2)->length) / ((edge_array + (signed long int)e1)->length + (edge_array + (signed long int)e2)->length));

    (edge_array + (signed long int)e1)->deleted = (unsigned short int)1;
  }
}

// link2next
// file kmer.c line 31
extern void link2next(struct node *node, char ch)
{
  if(!(((signed int)filter_array[(signed long int)(signed int)ch] & (signed int)node->links) == 0))
    node->linksB = (unsigned char)((signed int)node->linksB | (signed int)filter_array[(signed long int)(signed int)ch]);

  else
    node->links = (unsigned char)((signed int)node->links | (signed int)filter_array[(signed long int)(signed int)ch]);
}

// link2prev
// file kmer.c line 55
extern void link2prev(struct node *node, char ch)
{
  if(!(((signed int)filter_array[(signed long int)(4 + (signed int)ch)] & (signed int)node->links) == 0))
    node->linksB = (unsigned char)((signed int)node->linksB | (signed int)filter_array[(signed long int)((signed int)ch + 4)]);

  else
    node->links = (unsigned char)((signed int)node->links | (signed int)filter_array[(signed long int)((signed int)ch + 4)]);
}

// loadArcs
// file loadGraph.c line 364
static void loadArcs(char *graphfile)
{
  struct _IO_FILE *fp;
  char name[256l];
  char line[1024l];
  unsigned int target;
  unsigned int weight;
  unsigned int from_ed;
  char *seg;
  sprintf(name, "%s.Arc", graphfile);
  fp=ckopen(name, "r");
  createPreArcMemManager();
  arcCounter = (signed long long int)0;
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    seg=strtok(line, " ");
    signed int return_value_atoi_2;
    return_value_atoi_2=atoi_link2(seg);
    from_ed = (unsigned int)return_value_atoi_2;
    do
    {
      seg=strtok((char *)(void *)0, " ");
      if(seg == ((char *)NULL))
        break;

      signed int return_value_atoi_3;
      return_value_atoi_3=atoi_link2(seg);
      target = (unsigned int)return_value_atoi_3;
      seg=strtok((char *)(void *)0, " ");
      signed int return_value_atoi_4;
      return_value_atoi_4=atoi_link2(seg);
      weight = (unsigned int)return_value_atoi_4;
      add1Arc(from_ed, target, weight);
    }
    while((_Bool)1);
  }
  while((_Bool)1);
  printf("%lld arcs loaded\n", arcCounter);
  fclose(fp);
}

// loadContig
// file loadGraph.c line 395
static void loadContig(char *graphfile)
{
  char c;
  char name[256l];
  char line[1024l];
  char *tightSeq = (char *)(void *)0;
  struct _IO_FILE *fp;
  signed int n = 0;
  signed int length;
  signed int index = -1;
  signed int edgeno;
  unsigned int i;
  unsigned int newIndex;
  sprintf(name, "%s.contig", graphfile);
  fp=ckopen(name, "r");
  char *return_value_fgets_1;
  unsigned long int return_value_strlen_3;
  _Bool tmp_if_expr_6;
  signed int tmp_post_4;
  signed int tmp_post_5;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 62)
    {
      if(index >= 0)
      {
        newIndex = index_array[(signed long int)edgeno];
        (contig_array + (signed long int)newIndex)->seq = tightSeq;
      }

      n = 0;
      index = index + 1;
      sscanf(line + (signed long int)1, "%d %s %d", &edgeno, (const void *)name, &length);
      void *return_value_ckalloc_2;
      return_value_ckalloc_2=ckalloc((unsigned long int)(length / 4 + 1) * sizeof(char) /*1ul*/ );
      tightSeq = (char *)return_value_ckalloc_2;
    }

    else
    {
      i = (unsigned int)0;
      do
      {
        return_value_strlen_3=strlen(line);
        if((unsigned long int)i >= return_value_strlen_3)
          break;

        if((signed int)line[(signed long int)i] >= 97)
          tmp_if_expr_6 = (signed int)line[(signed long int)i] <= 122 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
        {
          c = (char)((((signed int)line[(signed long int)i] - 97) + 65 & 0x06) >> 1);
          tmp_post_4 = n;
          n = n + 1;
          writeChar2tightString(c, tightSeq, tmp_post_4);
        }

        else
          if((signed int)line[(signed long int)i] >= 65)
          {
            if(!((signed int)line[(signed long int)i] >= 91))
            {
              c = (char)(((signed int)line[(signed long int)i] & 0x06) >> 1);
              tmp_post_5 = n;
              n = n + 1;
              writeChar2tightString(c, tightSeq, tmp_post_5);
            }

          }

        i = i + 1u;
      }
      while((_Bool)1);
    }
  }
  while((_Bool)1);
  if(index >= 0)
  {
    newIndex = index_array[(signed long int)edgeno];
    (contig_array + (signed long int)newIndex)->seq = tightSeq;
  }

  printf("input %d contigs\n", index + 1);
  fclose(fp);
}

// loadEdge
// file inc/extfunc.h line 62
extern void loadEdge(char *graphfile)
{
  char c;
  char name[256l];
  char line[1024l];
  char str[32l];
  char *tightSeq = (char *)(void *)0;
  struct _IO_FILE *fp;
  unsigned long long int from_kmer;
  unsigned long long int to_kmer;
  signed int n = 0;
  signed int i;
  signed int length;
  signed int cvg;
  signed int index = -1;
  signed int bal_ed;
  signed int edgeno;
  signed int linelen;
  unsigned int j;
  sprintf(name, "%s.edge", graphfile);
  fp=ckopen(name, "r");
  num_ed_limit = (unsigned int)(1.2 * (double)num_ed);
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(num_ed_limit + (unsigned int)1) * sizeof(struct edge) /*48ul*/ );
  edge_array = (struct edge *)return_value_ckalloc_1;
  j = num_ed + (unsigned int)1;
  for( ; num_ed_limit >= j; j = j + 1u)
    (edge_array + (signed long int)j)->seq = (char *)(void *)0;
  char *return_value_fgets_2;
  _Bool tmp_if_expr_9;
  signed int tmp_post_7;
  signed int tmp_post_8;
  do
  {
    return_value_fgets_2=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_2 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 62)
    {
      if(index >= 0)
      {
        edgeno = index + 1;
        (edge_array + (signed long int)edgeno)->length = length;
        (edge_array + (signed long int)edgeno)->cvg = (unsigned short int)cvg;
        signed int return_value_kmer2vt_3;
        return_value_kmer2vt_3=kmer2vt(from_kmer);
        (edge_array + (signed long int)edgeno)->from_vt = (unsigned int)return_value_kmer2vt_3;
        signed int return_value_kmer2vt_4;
        return_value_kmer2vt_4=kmer2vt(to_kmer);
        (edge_array + (signed long int)edgeno)->to_vt = (unsigned int)return_value_kmer2vt_4;
        (edge_array + (signed long int)edgeno)->seq = tightSeq;
        (edge_array + (signed long int)edgeno)->bal_edge = (unsigned short int)(bal_ed + 1);
        (edge_array + (signed long int)edgeno)->rv = (struct readinterval *)(void *)0;
        (edge_array + (signed long int)edgeno)->arcs = (struct arc *)(void *)0;
        (edge_array + (signed long int)edgeno)->flag = (unsigned short int)0;
        (edge_array + (signed long int)edgeno)->deleted = (unsigned short int)0;
        if(!(bal_ed == 0))
        {
          buildReverseComplementEdge((unsigned int)edgeno);
          index = index + 1;
        }

      }

      n = 0;
      index = index + 1;
      sscanf(line + (signed long int)7, "%d,%llx,%llx,%s %d,%d", &length, &from_kmer, &to_kmer, (const void *)str, &cvg, &bal_ed);
      void *return_value_ckalloc_5;
      return_value_ckalloc_5=ckalloc((unsigned long int)(length / 4 + 1) * sizeof(char) /*1ul*/ );
      tightSeq = (char *)return_value_ckalloc_5;
    }

    else
    {
      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen(line);
      linelen = (signed int)return_value_strlen_6;
      i = 0;
      for( ; !(i >= linelen); i = i + 1)
      {
        if((signed int)line[(signed long int)i] >= 97)
          tmp_if_expr_9 = (signed int)line[(signed long int)i] <= 122 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_9 = (_Bool)0;
        if(tmp_if_expr_9)
        {
          c = (char)((((signed int)line[(signed long int)i] - 97) + 65 & 0x06) >> 1);
          tmp_post_7 = n;
          n = n + 1;
          writeChar2tightString(c, tightSeq, tmp_post_7);
        }

        else
          if((signed int)line[(signed long int)i] >= 65)
          {
            if(!((signed int)line[(signed long int)i] >= 91))
            {
              c = (char)(((signed int)line[(signed long int)i] & 0x06) >> 1);
              tmp_post_8 = n;
              n = n + 1;
              writeChar2tightString(c, tightSeq, tmp_post_8);
            }

          }

      }
    }
  }
  while((_Bool)1);
  if(index >= 0)
  {
    edgeno = index + 1;
    (edge_array + (signed long int)edgeno)->length = length;
    (edge_array + (signed long int)edgeno)->cvg = (unsigned short int)cvg;
    signed int return_value_kmer2vt_10;
    return_value_kmer2vt_10=kmer2vt(from_kmer);
    (edge_array + (signed long int)edgeno)->from_vt = (unsigned int)return_value_kmer2vt_10;
    signed int return_value_kmer2vt_11;
    return_value_kmer2vt_11=kmer2vt(to_kmer);
    (edge_array + (signed long int)edgeno)->to_vt = (unsigned int)return_value_kmer2vt_11;
    (edge_array + (signed long int)edgeno)->seq = tightSeq;
    (edge_array + (signed long int)edgeno)->bal_edge = (unsigned short int)(bal_ed + 1);
    if(!(bal_ed == 0))
    {
      buildReverseComplementEdge((unsigned int)edgeno);
      index = index + 1;
    }

  }

  printf("input %d edges\n", index + 1);
  fclose(fp);
  createArcMemo();
  loadPreArcs(graphfile);
}

// loadPEgrads
// file attachPEinfo.c line 56
extern void loadPEgrads(char *infile)
{
  struct _IO_FILE *fp;
  char name[256l];
  char line[1024l];
  signed int i;
  char rankSet = (char)1;
  sprintf(name, "%s.peGrads", infile);
  fp=fopen(name, "r");
  char *return_value_fgets_1;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    printf("can not open file %s\n", (const void *)name);
    gradsCounter = 0;
  }

  else
  {
    do
    {
      return_value_fgets_1=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      if((signed int)line[0l] == 103)
      {
        sscanf(line + (signed long int)10, "%d %lld %d", &gradsCounter, &n_solexa, &maxReadLen);
        printf("there're %d grads, %lld reads, max read len %d\n", gradsCounter, n_solexa, maxReadLen);
        break;
      }

    }
    while((_Bool)1);
    alloc_pe_mem(gradsCounter);
    i = 0;
    for( ; !(i >= gradsCounter); i = i + 1)
    {
      fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
      (pes + (signed long int)i)->rank = 0;
      sscanf(line, "%d %lld %d %d", &(pes + (signed long int)i)->insertS, &(pes + (signed long int)i)->PE_bound, &(pes + (signed long int)i)->rank, &(pes + (signed long int)i)->pair_num_cut);
      if(!((pes + (signed long int)i)->rank >= 1))
        rankSet = (char)0;

    }
    fclose(fp);
    if(!(rankSet == 0))
      qsort((void *)&pes[(signed long int)0], (unsigned long int)gradsCounter, sizeof(struct pe_info) /*24ul*/ , cmp_pe);

    else
    {
      signed int lastRank = 0;
      i = 0;
      for( ; !(i >= gradsCounter); i = i + 1)
        if(i == 0)
        {
          lastRank = lastRank + 1;
          (pes + (signed long int)i)->rank = lastRank;
        }

        else
          if(!((pes + (signed long int)i)->insertS >= 300))
            (pes + (signed long int)i)->rank = lastRank;

          else
            if(!((pes + (signed long int)i)->insertS >= 800))
            {
              if(!((pes + (signed long int)(i + -1))->insertS >= 300))
              {
                lastRank = lastRank + 1;
                (pes + (signed long int)i)->rank = lastRank;
              }

              else
                (pes + (signed long int)i)->rank = lastRank;
            }

            else
              if(!((pes + (signed long int)i)->insertS >= 3000))
              {
                if(!((pes + (signed long int)(i + -1))->insertS >= 800))
                {
                  lastRank = lastRank + 1;
                  (pes + (signed long int)i)->rank = lastRank;
                }

                else
                  (pes + (signed long int)i)->rank = lastRank;
              }

              else
                if(!((pes + (signed long int)i)->insertS >= 7000))
                {
                  if(!((pes + (signed long int)(i + -1))->insertS >= 3000))
                  {
                    lastRank = lastRank + 1;
                    (pes + (signed long int)i)->rank = lastRank;
                  }

                  else
                    (pes + (signed long int)i)->rank = lastRank;
                }

                else
                  if(!((pes + (signed long int)(i + -1))->insertS >= 7000))
                  {
                    lastRank = lastRank + 1;
                    (pes + (signed long int)i)->rank = lastRank;
                  }

                  else
                    (pes + (signed long int)i)->rank = lastRank;
    }
  }
}

// loadPath
// file loadPath.c line 40
extern char loadPath(char *graphfile)
{
  struct _IO_FILE *fp;
  char name[256l];
  char line[1024l];
  unsigned int i;
  unsigned int bal_ed;
  unsigned int num1;
  unsigned int edgeno;
  unsigned int num2;
  signed long long int loadPath__1__markCounter = (signed long long int)0;
  signed long long int readid = (signed long long int)0;
  char *seg;
  sprintf(name, "%s.markOnEdge", graphfile);
  fp=fopen(name, "r");
  char *return_value_fgets_3;
  if(fp == ((struct _IO_FILE *)NULL))
    return (char)0;

  else
  {
    i = (unsigned int)1;
    for( ; num_ed >= i; i = i + 1u)
      (edge_array + (signed long int)i)->multi = (unsigned short int)0;
    i = (unsigned int)1;
    for( ; num_ed >= i; i = i + 1u)
    {
      fscanf(fp, "%d", &num1);
      char return_value_EdSmallerThanTwin_1;
      return_value_EdSmallerThanTwin_1=EdSmallerThanTwin(i);
      if(!(return_value_EdSmallerThanTwin_1 == 0))
      {
        fscanf(fp, "%d", &num2);
        bal_ed=getTwinEdge(i);
        if(num1 + num2 >= 255u)
        {
          (edge_array + (signed long int)i)->multi = (unsigned short int)255;
          (edge_array + (signed long int)bal_ed)->multi = (unsigned short int)255;
        }

        else
        {
          (edge_array + (signed long int)i)->multi = (unsigned short int)(num1 + num2);
          (edge_array + (signed long int)bal_ed)->multi = (unsigned short int)(num1 + num2);
          loadPath__1__markCounter = loadPath__1__markCounter + (signed long long int)((unsigned int)2 * (num1 + num2));
        }
        i = i + 1u;
      }

      else
        if(2u * num1 >= 255u)
          (edge_array + (signed long int)i)->multi = (unsigned short int)255;

        else
        {
          (edge_array + (signed long int)i)->multi = (unsigned short int)((unsigned int)2 * num1);
          loadPath__1__markCounter = loadPath__1__markCounter + (signed long long int)((unsigned int)2 * num1);
        }
    }
    fclose(fp);
    printf("%lld markers overall\n", loadPath__1__markCounter);
    void *return_value_ckalloc_2;
    return_value_ckalloc_2=ckalloc((unsigned long int)loadPath__1__markCounter * sizeof(signed long long int) /*8ul*/ );
    markersArray = (signed long long int *)return_value_ckalloc_2;
    loadPath__1__markCounter = (signed long long int)0;
    i = (unsigned int)1;
    for( ; num_ed >= i; i = i + 1u)
      if(!((signed int)(edge_array + (signed long int)i)->multi == 255))
      {
        (edge_array + (signed long int)i)->markers = markersArray + loadPath__1__markCounter;
        loadPath__1__markCounter = loadPath__1__markCounter + (signed long long int)(edge_array + (signed long int)i)->multi;
        (edge_array + (signed long int)i)->multi = (unsigned short int)0;
      }

    sprintf(name, "%s.path", graphfile);
    fp=fopen(name, "r");
    if(fp == ((struct _IO_FILE *)NULL))
      return (char)0;

    else
    {
      do
      {
        return_value_fgets_3=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
        if(return_value_fgets_3 == ((char *)NULL))
          break;

        readid = readid + 1ll;
        seg=strtok(line, " ");
        while(!(seg == ((char *)NULL)))
        {
          signed int return_value_atoi_4;
          return_value_atoi_4=atoi_link3(seg);
          edgeno = (unsigned int)return_value_atoi_4;
          add1marker2edge(edgeno, readid);
          seg=strtok((char *)(void *)0, " ");
        }
      }
      while((_Bool)1);
      fclose(fp);
      loadPath__1__markCounter = (signed long long int)0;
      i = (unsigned int)1;
      for( ; num_ed >= i; i = i + 1u)
        if(!((signed int)(edge_array + (signed long int)i)->multi == 255))
          loadPath__1__markCounter = loadPath__1__markCounter + (signed long long int)(edge_array + (signed long int)i)->multi;

      printf("%lld marks loaded\n", loadPath__1__markCounter);
      return (char)1;
    }
  }
}

// loadPathBin
// file inc/extfunc.h line 161
extern char loadPathBin(char *graphfile)
{
  struct _IO_FILE *fp;
  char name[256l];
  unsigned int i;
  unsigned int bal_ed;
  unsigned int num1;
  unsigned int num2;
  signed long long int loadPathBin__1__markCounter = (signed long long int)0;
  signed long long int readid = (signed long long int)0;
  unsigned char seg;
  unsigned char ch;
  unsigned int *freadBuf;
  sprintf(name, "%s.markOnEdge", graphfile);
  fp=fopen(name, "r");
  unsigned long int return_value_fread_4;
  if(fp == ((struct _IO_FILE *)NULL))
    return (char)0;

  else
  {
    i = (unsigned int)1;
    for( ; num_ed >= i; i = i + 1u)
    {
      (edge_array + (signed long int)i)->multi = (unsigned short int)0;
      (edge_array + (signed long int)i)->markers = (signed long long int *)(void *)0;
    }
    i = (unsigned int)1;
    for( ; num_ed >= i; i = i + 1u)
    {
      fscanf(fp, "%d", &num1);
      char return_value_EdSmallerThanTwin_1;
      return_value_EdSmallerThanTwin_1=EdSmallerThanTwin(i);
      if(!(return_value_EdSmallerThanTwin_1 == 0))
      {
        fscanf(fp, "%d", &num2);
        bal_ed=getTwinEdge(i);
        if(num1 + num2 >= 255u)
        {
          (edge_array + (signed long int)i)->multi = (unsigned short int)255;
          (edge_array + (signed long int)bal_ed)->multi = (unsigned short int)255;
        }

        else
        {
          (edge_array + (signed long int)i)->multi = (unsigned short int)(num1 + num2);
          (edge_array + (signed long int)bal_ed)->multi = (unsigned short int)(num1 + num2);
          loadPathBin__1__markCounter = loadPathBin__1__markCounter + (signed long long int)((unsigned int)2 * (num1 + num2));
        }
        i = i + 1u;
      }

      else
        if(2u * num1 >= 255u)
          (edge_array + (signed long int)i)->multi = (unsigned short int)255;

        else
        {
          (edge_array + (signed long int)i)->multi = (unsigned short int)((unsigned int)2 * num1);
          loadPathBin__1__markCounter = loadPathBin__1__markCounter + (signed long long int)((unsigned int)2 * num1);
        }
    }
    fclose(fp);
    printf("%lld markers overall\n", loadPathBin__1__markCounter);
    void *return_value_ckalloc_2;
    return_value_ckalloc_2=ckalloc((unsigned long int)loadPathBin__1__markCounter * sizeof(signed long long int) /*8ul*/ );
    markersArray = (signed long long int *)return_value_ckalloc_2;
    loadPathBin__1__markCounter = (signed long long int)0;
    i = (unsigned int)1;
    for( ; num_ed >= i; i = i + 1u)
      if(!((signed int)(edge_array + (signed long int)i)->multi == 255))
      {
        (edge_array + (signed long int)i)->markers = markersArray + loadPathBin__1__markCounter;
        loadPathBin__1__markCounter = loadPathBin__1__markCounter + (signed long long int)(edge_array + (signed long int)i)->multi;
        (edge_array + (signed long int)i)->multi = (unsigned short int)0;
      }

    sprintf(name, "%s.path", graphfile);
    fp=fopen(name, "rb");
    if(fp == ((struct _IO_FILE *)NULL))
      return (char)0;

    else
    {
      void *return_value_ckalloc_3;
      return_value_ckalloc_3=ckalloc((unsigned long int)((maxReadLen - overlaplen) + 1) * sizeof(unsigned int) /*4ul*/ );
      freadBuf = (unsigned int *)return_value_ckalloc_3;
      do
      {
        return_value_fread_4=fread((void *)&ch, sizeof(char) /*1ul*/ , (unsigned long int)1, fp);
        if(!(return_value_fread_4 == 1ul))
          break;

        unsigned long int return_value_fread_5;
        return_value_fread_5=fread((void *)freadBuf, sizeof(unsigned int) /*4ul*/ , (unsigned long int)ch, fp);
        if(!(return_value_fread_5 == (unsigned long int)ch))
          break;

        readid = readid + 1ll;
        seg = (unsigned char)0;
        for( ; !((signed int)seg >= (signed int)ch); seg = seg + 1)
          add1marker2edge(freadBuf[(signed long int)seg], readid);
      }
      while((_Bool)1);
      fclose(fp);
      loadPathBin__1__markCounter = (signed long long int)0;
      i = (unsigned int)1;
      for( ; num_ed >= i; i = i + 1u)
        if(!((signed int)(edge_array + (signed long int)i)->multi == 255))
          loadPathBin__1__markCounter = loadPathBin__1__markCounter + (signed long long int)(edge_array + (signed long int)i)->multi;

      printf("%lld markers loaded\n", loadPathBin__1__markCounter);
      free((void *)freadBuf);
      return (char)1;
    }
  }
}

// loadPreArcs
// file loadPreGraph.c line 364
static void loadPreArcs(char *graphfile)
{
  struct _IO_FILE *fp;
  char name[256l];
  char line[1024l];
  unsigned int target;
  unsigned int weight;
  unsigned int from_ed;
  char *seg;
  sprintf(name, "%s.preArc", graphfile);
  fp=ckopen(name, "r");
  arcCounter = (signed long long int)0;
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    seg=strtok(line, " ");
    signed int return_value_atoi_2;
    return_value_atoi_2=atoi_link4(seg);
    from_ed = (unsigned int)return_value_atoi_2;
    do
    {
      seg=strtok((char *)(void *)0, " ");
      if(seg == ((char *)NULL))
        break;

      signed int return_value_atoi_3;
      return_value_atoi_3=atoi_link4(seg);
      target = (unsigned int)return_value_atoi_3;
      seg=strtok((char *)(void *)0, " ");
      signed int return_value_atoi_4;
      return_value_atoi_4=atoi_link4(seg);
      weight = (unsigned int)return_value_atoi_4;
      add1Arc_link1(from_ed, target, weight);
    }
    while((_Bool)1);
  }
  while((_Bool)1);
  printf("%lli pre-arcs loaded\n", arcCounter);
  fclose(fp);
}

// loadReads4gap
// file prlReadFillGap.c line 134
static char loadReads4gap(char *graphfile)
{
  struct _IO_FILE *fp;
  struct _IO_FILE *fp2;
  char name[1024l];
  signed long long int loadReads4gap__1__readCounter;
  sprintf(name, "%s.readInGap", graphfile);
  fp=fopen(name, "rb");
  sprintf(name, "%s.longReadInGap", graphfile);
  fp2=fopen(name, "rb");
  if(fp == ((struct _IO_FILE *)NULL) && fp2 == ((struct _IO_FILE *)NULL))
    return (char)0;

  else
  {
    if(orig2new == 0)
    {
      convertIndex();
      orig2new = (char)1;
    }

    struct dynamic_array *return_value_createDarray_1;
    return_value_createDarray_1=createDarray(1000000, sizeof(char) /*1ul*/ );
    readSeqInGap = (struct dynamic_array *)return_value_createDarray_1;
    if(!(fp == ((struct _IO_FILE *)NULL)))
    {
      loadReads4gap__1__readCounter=getRead1by1(fp, readSeqInGap);
      printf("Loaded %lld reads from %s.readInGap\n", loadReads4gap__1__readCounter, graphfile);
      fclose(fp);
    }

    if(!(fp2 == ((struct _IO_FILE *)NULL)))
    {
      loadReads4gap__1__readCounter=getRead1by1(fp2, readSeqInGap);
      printf("Loaded %lld reads from %s.LongReadInGap\n", loadReads4gap__1__readCounter, graphfile);
      fclose(fp2);
    }

    return (char)1;
  }
}

// loadUpdatedEdges
// file loadGraph.c line 175
extern void loadUpdatedEdges(char *graphfile)
{
  char c;
  char name[256l];
  char line[1024l];
  signed int bal_ed;
  signed int cvg;
  struct _IO_FILE *fp;
  struct _IO_FILE *out_fp;
  unsigned long long int from_kmer;
  unsigned long long int to_kmer;
  unsigned int num_ctgge;
  unsigned int length;
  unsigned int index = (unsigned int)0;
  unsigned int num_kmer;
  unsigned int i = (unsigned int)0;
  unsigned int j;
  signed int newIndex;
  unsigned int *length_array;
  unsigned int *flag_array;
  unsigned int diff_len;
  char *outfile = graphfile;
  signed long long int cvgSum = (signed long long int)0;
  signed long long int counter = (signed long long int)0;
  sprintf(name, "%s.preGraphBasic", graphfile);
  fp=ckopen(name, "r");
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 86)
    {
      sscanf(line + (signed long int)6, "%d %c %d", &num_kmer, &c, &overlaplen);
      printf("K = %d\n", overlaplen);
      break;
    }

  }
  while((_Bool)1);
  if(ctg_short == 0u)
    ctg_short = (unsigned int)(overlaplen + 2);

  fclose(fp);
  sprintf(name, "%s.updated.edge", graphfile);
  fp=ckopen(name, "r");
  sprintf(name, "%s.newContigIndex", outfile);
  out_fp=ckopen(name, "w");
  char *return_value_fgets_2;
  do
  {
    return_value_fgets_2=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_2 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 69)
    {
      sscanf(line + (signed long int)5, "%d", &num_ctgge);
      printf("there're %d edge in edge file\n", num_ctgge);
      break;
    }

  }
  while((_Bool)1);
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)(num_ctgge + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  index_array = (unsigned int *)return_value_ckalloc_3;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)(num_ctgge + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  length_array = (unsigned int *)return_value_ckalloc_4;
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)(num_ctgge + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  flag_array = (unsigned int *)return_value_ckalloc_5;
  char *return_value_fgets_6;
  do
  {
    return_value_fgets_6=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_6 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 62)
    {
      sscanf(line + (signed long int)7, "%d", &length);
      index = index + 1u;
      index_array[(signed long int)index] = length;
      i = i + 1u;
      length_array[(signed long int)i] = length;
    }

  }
  while((_Bool)1);
  num_ctg = index;
  orig2new = (char)1;
  qsort((void *)&length_array[(signed long int)1], (unsigned long int)num_ctg, sizeof(unsigned int) /*4ul*/ , cmp_int);
  diff_len = (unsigned int)0;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
  {
    j = i + (unsigned int)1;
    for( ; num_ctg >= j; j = j + 1u)
      if(!(length_array[(signed long int)j] == length_array[(signed long int)i]))
        break;

    diff_len = diff_len + 1u;
    length_array[(signed long int)diff_len] = length_array[(signed long int)i];
    flag_array[(signed long int)diff_len] = i;
    i = j - (unsigned int)1;
  }
  void *return_value_ckalloc_7;
  return_value_ckalloc_7=ckalloc((unsigned long int)(num_ctg + (unsigned int)1) * sizeof(struct contig) /*48ul*/ );
  contig_array = (struct contig *)return_value_ckalloc_7;
  index = (unsigned int)0;
  rewind(fp);
  char *return_value_fgets_8;
  do
  {
    return_value_fgets_8=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_8 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 62)
    {
      sscanf(line, ">length %u,%llx,%llx,%d,%d", &length, &from_kmer, &to_kmer, &bal_ed, &cvg);
      newIndex=uniqueLenSearch(length_array, flag_array, (signed int)diff_len, length);
      index = index + 1u;
      index_array[(signed long int)index] = (unsigned int)newIndex;
      (contig_array + (signed long int)newIndex)->length = length;
      (contig_array + (signed long int)newIndex)->bal_edge = (unsigned char)(bal_ed + 1);
      (contig_array + (signed long int)newIndex)->downwardConnect = (struct connection *)(void *)0;
      (contig_array + (signed long int)newIndex)->mask = (unsigned char)0;
      (contig_array + (signed long int)newIndex)->flag = (unsigned char)0;
      (contig_array + (signed long int)newIndex)->arcs = (struct prearc *)(void *)0;
      (contig_array + (signed long int)newIndex)->seq = (char *)(void *)0;
      (contig_array + (signed long int)newIndex)->multi = (unsigned char)0;
      (contig_array + (signed long int)newIndex)->inSubGraph = (unsigned char)0;
      (contig_array + (signed long int)newIndex)->cvg = (unsigned char)(cvg / 10);
      if(!(cvg == 0))
      {
        counter = counter + (signed long long int)length;
        cvgSum = cvgSum + (signed long long int)((unsigned int)cvg * length);
      }

      fprintf(out_fp, "%d %d %d\n", index, newIndex, (contig_array + (signed long int)newIndex)->bal_edge);
    }

  }
  while((_Bool)1);
  if(!(counter == 0ll))
    cvgAvg = (signed int)((cvgSum / counter) / (signed long int)10 > (signed long int)2 ? (cvgSum / counter) / (signed long int)10 : (signed long int)3);

  signed int bal_i;
  if(!(maskRep == 0))
  {
    counter = (signed long long int)0;
    i = (unsigned int)1;
    for( ; num_ctg >= i; i = i + 1u)
    {
      unsigned int return_value_getTwinCtg_9;
      return_value_getTwinCtg_9=getTwinCtg(i);
      bal_i = (signed int)return_value_getTwinCtg_9;
      if(!(4 * cvgAvg >= (signed int)(contig_array + (signed long int)bal_i)->cvg + (signed int)(contig_array + (signed long int)i)->cvg))
      {
        (contig_array + (signed long int)i)->mask = (unsigned char)1;
        (contig_array + (signed long int)bal_i)->mask = (unsigned char)1;
        counter = counter + (signed long long int)2;
      }

      char return_value_isSmallerThanTwin_10;
      return_value_isSmallerThanTwin_10=isSmallerThanTwin(i);
      if(!(return_value_isSmallerThanTwin_10 == 0))
        i = i + 1u;

    }
    printf("average contig coverage is %d, %lld contig masked\n", cvgAvg, counter);
  }

  counter = (signed long long int)0;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    if((contig_array + (signed long int)i)->mask == 0)
    {
      unsigned int return_value_getTwinCtg_11;
      return_value_getTwinCtg_11=getTwinCtg(i);
      bal_i = (signed int)return_value_getTwinCtg_11;
      if(!((contig_array + (signed long int)i)->length >= ctg_short))
      {
        (contig_array + (signed long int)i)->mask = (unsigned char)1;
        (contig_array + (signed long int)bal_i)->mask = (unsigned char)1;
        counter = counter + (signed long long int)2;
      }

      char return_value_isSmallerThanTwin_12;
      return_value_isSmallerThanTwin_12=isSmallerThanTwin(i);
      if(!(return_value_isSmallerThanTwin_12 == 0))
        i = i + 1u;

    }

  printf("Mask contigs shorter than %d, %lld contig masked\n", ctg_short, counter);
  loadArcs(graphfile);
  loadContig(graphfile);
  printf("done loading updated edges\n");
  fflush(stdout);
  free((void *)length_array);
  free((void *)flag_array);
  fclose(fp);
  fclose(out_fp);
}

// loadUpdatedVertex
// file loadGraph.c line 33
extern void loadUpdatedVertex(char *graphfile)
{
  char name[256l];
  char line[256l];
  struct _IO_FILE *fp;
  unsigned long long int word;
  unsigned long long int bal_word;
  signed int num_kmer;
  signed int i;
  char ch;
  sprintf(name, "%s.updated.vertex", graphfile);
  fp=ckopen(name, "r");
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [256l]) /*256ul*/ , fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 86)
    {
      sscanf(line + (signed long int)6, "%d %c %d", &num_kmer, &ch, &overlaplen);
      printf("there're %d kmers in vertex file\n", num_kmer);
      break;
    }

  }
  while((_Bool)1);
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)(2 * num_kmer) * sizeof(struct vertex) /*8ul*/ );
  vt_array = (struct vertex *)return_value_ckalloc_2;
  i = 0;
  for( ; !(i >= num_kmer); i = i + 1)
  {
    fscanf(fp, "%llx ", &word);
    (vt_array + (signed long int)i)->kmer = word;
  }
  fclose(fp);
  i = 0;
  for( ; !(i >= num_kmer); i = i + 1)
  {
    bal_word=reverseComplement((vt_array + (signed long int)i)->kmer, overlaplen);
    (vt_array + (signed long int)(i + num_kmer))->kmer = bal_word;
  }
  num_vt = (unsigned int)num_kmer;
}

// loadVertex
// file inc/extfunc.h line 60
extern void loadVertex(char *graphfile)
{
  char name[256l];
  char line[256l];
  struct _IO_FILE *fp;
  unsigned long long int word;
  unsigned long long int bal_word;
  unsigned long long int temp;
  signed int num_kmer;
  signed int i;
  char ch;
  sprintf(name, "%s.preGraphBasic", graphfile);
  fp=ckopen(name, "r");
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [256l]) /*256ul*/ , fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 86)
    {
      sscanf(line + (signed long int)6, "%d %c %d", &num_kmer, &ch, &overlaplen);
      printf("there're %d kmers in vertex file\n", num_kmer);
    }

    else
      if((signed int)line[0l] == 69)
      {
        sscanf(line + (signed long int)5, "%d", &num_ed);
        printf("there're %d edge in edge file\n", num_ed);
      }

      else
        if((signed int)line[0l] == 77)
          sscanf(line, "MaxReadLen %d MinReadLen %d MaxNameLen %d", &maxReadLen, &minReadLen, &maxNameLen);

  }
  while((_Bool)1);
  fclose(fp);
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)(2 * num_kmer) * sizeof(struct vertex) /*8ul*/ );
  vt_array = (struct vertex *)return_value_ckalloc_2;
  sprintf(name, "%s.vertex", graphfile);
  fp=ckopen(name, "r");
  i = 0;
  for( ; !(i >= num_kmer); i = i + 1)
  {
    fscanf(fp, "%llx ", &word);
    bal_word=reverseComplement(word, overlaplen);
    if(!(word >= bal_word))
      (vt_array + (signed long int)i)->kmer = word;

    else
      (vt_array + (signed long int)i)->kmer = bal_word;
  }
  temp = (vt_array + (signed long int)(num_kmer - 1))->kmer;
  qsort((void *)&vt_array[(signed long int)0], (unsigned long int)num_kmer, sizeof(struct vertex) /*8ul*/ , cmp_vertex);
  printf("done sort\n");
  fclose(fp);
  i = 0;
  for( ; !(i >= num_kmer); i = i + 1)
  {
    bal_word=reverseComplement((vt_array + (signed long int)i)->kmer, overlaplen);
    (vt_array + (signed long int)(i + num_kmer))->kmer = bal_word;
  }
  num_vt = (unsigned int)num_kmer;
}

// localGraph
// file localAsm.c line 1218
extern signed int localGraph(struct read_nearby *rdArray, signed int num, struct ctg4scaf *ctg1, struct ctg4scaf *ctg2, signed int origOverlap, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, signed int overlap, struct dynamic_array *gapSeqArray, char *seqCtg1, char *seqCtg2, char *seqGap)
{
  struct kmerSet_st *kmerSet;
  unsigned long long int WordFilter = ((unsigned long long int)1 << 2 * overlap) - (unsigned long int)1;
  kmerSet=readsInGap2DBgraph(rdArray, num, ctg1, ctg2, origOverlap, kmerCtg1, kmerCtg2, overlap, WordFilter);
  signed long int tt;
  time(&tt);
  signed int gapLen = ((ctg2->start - ctg1->end) - origOverlap) + overlap;
  signed int min = gapLen - GLDiff > 0 ? gapLen - GLDiff : 0;
  signed int localGraph__1__max = gapLen + GLDiff < 10 ? 10 : gapLen + GLDiff;
  signed int len1;
  signed int len2;
  unsigned int tmp_if_expr_1;
  if((contig_array + (signed long int)ctg1->ctgID)->length + (unsigned int)origOverlap >= 36u)
    tmp_if_expr_1 = (unsigned int)35;

  else
    tmp_if_expr_1 = (contig_array + (signed long int)ctg1->ctgID)->length + (unsigned int)origOverlap;
  len1 = (signed int)tmp_if_expr_1;
  unsigned int tmp_if_expr_2;
  if((contig_array + (signed long int)ctg2->ctgID)->length + (unsigned int)origOverlap >= 36u)
    tmp_if_expr_2 = (unsigned int)35;

  else
    tmp_if_expr_2 = (contig_array + (signed long int)ctg2->ctgID)->length + (unsigned int)origOverlap;
  len2 = (signed int)tmp_if_expr_2;
  len1 = len1 - (overlap - 1);
  len2 = len2 - (overlap - 1);
  signed int offset1 = 0;
  signed int offset2 = 0;
  signed int cut1 = 0;
  signed int cut2 = 0;
  signed int pathNum;
  pathNum=searchFgap(kmerSet, ctg1, ctg2, kmerCtg1, kmerCtg2, (unsigned int)origOverlap, overlap, gapSeqArray, len1, len2, WordFilter, &offset1, &offset2, seqGap, &cut1, &cut2);
  if(pathNum == 0)
  {
    free_kmerset(kmerSet);
    return 0;
  }

  else
    if(pathNum == 1)
    {
      free_kmerset(kmerSet);
      return 1;
    }

  maskRepeatNode(kmerSet, kmerCtg1, kmerCtg2, overlap, len1, len2, localGraph__1__max, WordFilter);
  char found;
  found=readsCrossGap(rdArray, num, origOverlap, gapSeqArray, kmerCtg1, kmerCtg2, overlap, ctg1, ctg2, kmerSet, WordFilter, min, localGraph__1__max, offset1, offset2, seqGap, seqCtg1, seqCtg2, cut1, cut2);
  if(!(found == 0))
  {
    free_kmerset(kmerSet);
    return (signed int)found;
  }

  else
  {
    free_kmerset(kmerSet);
    return 0;
  }
}

// locateContigOnscaff
// file read2scaf.c line 122
static void locateContigOnscaff(char *graphfile)
{
  struct _IO_FILE *fp;
  char line[1024l];
  struct ctg4scaf *actg;
  struct stack *ctgStack;
  struct stack *aStack;
  signed int index = 0;
  signed int counter;
  signed int overallLen;
  signed int starter;
  signed int prev_start;
  signed int gapN;
  signed int scafLen;
  unsigned int ctg;
  unsigned int prev_ctg = (unsigned int)0;
  ctg = (unsigned int)1;
  for( ; num_ctg >= ctg; ctg = ctg + 1u)
  {
    (contig_array + (signed long int)ctg)->from_vt = (unsigned int)0;
    (contig_array + (signed long int)ctg)->multi = (unsigned char)0;
  }
  struct stack *return_value_createStack_1;
  return_value_createStack_1=createStack(1000, sizeof(struct ctg4scaf) /*20ul*/ );
  ctgStack = (struct stack *)return_value_createStack_1;
  sprintf(line, "%s.scaf_gap", graphfile);
  fp=ckopen(line, "r");
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)scafBufSize_link1 * sizeof(struct stack *) /*8ul*/ );
  ctgStackBuffer_link1 = (struct stack **)return_value_ckalloc_2;
  initStackBuf_link1(ctgStackBuffer_link1, scafBufSize_link1);
  allGaps_link1 = 0;
  scafInBuf_link1 = allGaps_link1;
  scafCounter_link1 = scafInBuf_link1;
  Ncounter_link1 = scafCounter_link1;
  char *return_value_fgets_3;
  signed int tmp_post_4;
  do
  {
    return_value_fgets_3=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_3 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 62)
    {
      if(!(index == 0))
      {
        tmp_post_4 = scafInBuf_link1;
        scafInBuf_link1 = scafInBuf_link1 + 1;
        aStack = ctgStackBuffer_link1[(signed long int)tmp_post_4];
        reverseStack_link1(aStack, ctgStack);
        if(scafInBuf_link1 == scafBufSize_link1)
        {
          mapCtg2Scaf(scafInBuf_link1);
          scafCounter_link1 = scafCounter_link1 + scafInBuf_link1;
          scafInBuf_link1 = 0;
        }

        if(index % 1000 == 0)
          printf("Processed %d scaffolds\n", index);

      }

      prev_ctg = (unsigned int)0;
      scafLen = (signed int)prev_ctg;
      emptyStack(ctgStack);
      sscanf(line + (signed long int)9, "%d %d %d", &index, &counter, &overallLen);
      fprintf(stderr, ">%d\n", index);
    }

    else
      if(!((signed int)line[0l] == 71))
      {
        if((signed int)line[0l] >= 48)
        {
          if(!((signed int)line[0l] >= 58))
          {
            sscanf(line, "%d %d", &ctg, &starter);
            void *return_value_stackPush_5;
            return_value_stackPush_5=stackPush(ctgStack);
            actg = (struct ctg4scaf *)return_value_stackPush_5;
            actg->ctgID = ctg;
            if(prev_ctg == 0u)
            {
              actg->start = scafLen;
              actg->end = (signed int)(((unsigned int)(actg->start + overlaplen) + (contig_array + (signed long int)ctg)->length) - (unsigned int)1);
            }

            else
            {
              gapN = (starter - prev_start) - (signed int)(contig_array + (signed long int)prev_ctg)->length;
              gapN = gapN < 1 ? 1 : gapN;
              actg->start = scafLen + gapN;
              actg->end = (signed int)(((unsigned int)actg->start + (contig_array + (signed long int)ctg)->length) - (unsigned int)1);
            }
            fprintf(stderr, "%d\t%d\n", actg->start, actg->end);
            scafLen = actg->end + 1;
            prev_ctg = ctg;
            prev_start = starter;
          }

        }

      }

  }
  while((_Bool)1);
  signed int tmp_post_6;
  if(!(index == 0))
  {
    tmp_post_6 = scafInBuf_link1;
    scafInBuf_link1 = scafInBuf_link1 + 1;
    aStack = ctgStackBuffer_link1[(signed long int)tmp_post_6];
    reverseStack_link1(aStack, ctgStack);
    mapCtg2Scaf(scafInBuf_link1);
  }

  gapN = 0;
  ctg = (unsigned int)1;
  _Bool tmp_if_expr_7;
  for( ; num_ctg >= ctg; ctg = ctg + 1u)
  {
    if((contig_array + (signed long int)ctg)->from_vt == 0u)
      tmp_if_expr_7 = (_Bool)1;

    else
      tmp_if_expr_7 = (signed int)(contig_array + (signed long int)ctg)->multi == 1 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_7)
      gapN = gapN + 1;

  }
  printf("\nDone with %d scaffolds, %d contigs in Scaffolld\n", index, gapN);
  fclose(fp);
  freeStack(ctgStack);
  freeStackBuf_link1(ctgStackBuffer_link1, scafBufSize_link1);
  free((void *)ctgStackBuffer_link1);
}

// locateReadOnScaf
// file read2scaf.c line 263
extern void locateReadOnScaf(char *graphfile)
{
  char name[1024l];
  char line[1024l];
  struct _IO_FILE *fp;
  struct _IO_FILE *fo;
  signed long long int readno;
  signed long long int counter = (signed long long int)0;
  signed long long int pre_readno = (signed long long int)0;
  unsigned int contigno;
  unsigned int pre_contigno;
  signed int pre_pos;
  signed int pos;
  locateContigOnscaff(graphfile);
  sprintf(name, "%s.readOnContig", graphfile);
  fp=ckopen(name, "r");
  sprintf(name, "%s.readOnScaf", graphfile);
  fo=ckopen(name, "w");
  if(orig2new == 0)
  {
    convertIndex_link1();
    orig2new = (char)1;
  }

  fgets(line, 1024, fp);
  char *return_value_fgets_1;
  char return_value_contigElligible_3;
  char return_value_contigElligible_2;
  do
  {
    return_value_fgets_1=fgets(line, 1024, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    sscanf(line, "%lld %d %d", &readno, &contigno, &pos);
    if(readno % 2l == 0l && pre_readno == readno + -1l)
    {
      return_value_contigElligible_3=contigElligible(pre_contigno);
      if(!(return_value_contigElligible_3 == 0))
      {
        return_value_contigElligible_2=contigElligible(contigno);
        if(!(return_value_contigElligible_2 == 0))
        {
          output1read_link1(fo, pre_readno, pre_contigno, pre_pos);
          output1read_link1(fo, readno, contigno, pos);
          counter = counter + 1ll;
        }

      }

    }

    pre_readno = readno;
    pre_contigno = contigno;
    pre_pos = pos;
  }
  while((_Bool)1);
  printf("%lld pairs on contig\n", counter);
  fclose(fp);
  fclose(fo);
}

// main
// file main.c line 39
signed int main(signed int argc, char **argv)
{
  printf("\nVersion 1.05: released on July 29th, 2010\n\n");
  argc = argc - 1;
  argv = argv + 1l;
  signed int tmp_statement_expression_9;
  signed int tmp_statement_expression_7;
  signed int tmp_statement_expression_5;
  signed int tmp_statement_expression_3;
  signed int tmp_statement_expression_1;
  if(argc == 0)
  {
    display_usage();
    return 0;
  }

  else
  {
    unsigned long int main__1__2____s1_len;
    unsigned long int main__1__2____s2_len;
    signed int return_value___builtin_strcmp_10;
    return_value___builtin_strcmp_10=__builtin_strcmp("pregraph", argv[(signed long int)0]);
    tmp_statement_expression_9 = return_value___builtin_strcmp_10;
    if(tmp_statement_expression_9 == 0)
      call_pregraph(argc, argv);

    else
    {
      unsigned long int main__1__4____s1_len;
      unsigned long int main__1__4____s2_len;
      signed int return_value___builtin_strcmp_8;
      return_value___builtin_strcmp_8=__builtin_strcmp("contig", argv[(signed long int)0]);
      tmp_statement_expression_7 = return_value___builtin_strcmp_8;
      if(tmp_statement_expression_7 == 0)
        call_heavygraph(argc, argv);

      else
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp_6;
        return_value___builtin_strcmp_6=__builtin_strcmp("map", argv[(signed long int)0]);
        tmp_statement_expression_5 = return_value___builtin_strcmp_6;
        if(tmp_statement_expression_5 == 0)
          call_align(argc, argv);

        else
        {
          unsigned long int main__1__8____s1_len;
          unsigned long int main__1__8____s2_len;
          signed int return_value___builtin_strcmp_4;
          return_value___builtin_strcmp_4=__builtin_strcmp("scaff", argv[(signed long int)0]);
          tmp_statement_expression_3 = return_value___builtin_strcmp_4;
          if(tmp_statement_expression_3 == 0)
            call_scaffold(argc, argv);

          else
          {
            unsigned long int main__1__10____s1_len;
            unsigned long int main__1__10____s2_len;
            signed int return_value___builtin_strcmp_2;
            return_value___builtin_strcmp_2=__builtin_strcmp("all", argv[(signed long int)0]);
            tmp_statement_expression_1 = return_value___builtin_strcmp_2;
            if(tmp_statement_expression_1 == 0)
              pipeline(argc, argv);

            else
              display_usage();
          }
        }
      }
    }
    return 0;
  }
}

// make_edge
// file node2edge.c line 275
static void make_edge(struct _IO_FILE *fp)
{
  signed int i = 0;
  struct kmer_st *node1;
  struct kmerSet_st *set;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)thrd_num * sizeof(struct kmerSet_st *) /*8ul*/ );
  KmerSetsPatch = (struct kmerSet_st **)return_value_ckalloc_1;
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
    KmerSetsPatch[(signed long int)i]=init_kmerset((unsigned long long int)1000, (float)0.75);
  struct stack *return_value_createStack_2;
  return_value_createStack_2=createStack(1000, sizeof(struct kmer_pt) /*32ul*/ );
  nodeStack = (struct stack *)return_value_createStack_2;
  struct stack *return_value_createStack_3;
  return_value_createStack_3=createStack(1000, sizeof(struct kmer_pt) /*32ul*/ );
  bal_nodeStack = (struct stack *)return_value_createStack_3;
  nodeCounter = 0;
  edge_c = nodeCounter;
  edgeCounter = 0;
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
  {
    set = KmerSets[(signed long int)i];
    set->iter_ptr = (unsigned long long int)0;
    for( ; !(set->iter_ptr >= set->size); set->iter_ptr = set->iter_ptr + 1ull)
      if((1u & set->flags[(signed long int)(set->iter_ptr >> 4)] >> ((15ul & set->iter_ptr) << 1)) == 0u)
      {
        node1 = set->array + (signed long int)set->iter_ptr;
        startEdgeFromNode(node1, fp);
      }

  }
  printf("%d (%d) edges %d extra nodes\n", edge_c, edgeCounter, nodeCounter);
  freeStack(nodeStack);
  freeStack(bal_nodeStack);
}

// mapCtg2Scaf
// file read2scaf.c line 88
static void mapCtg2Scaf(signed int scafInBuf)
{
  signed int i;
  signed int scafID;
  struct ctg4scaf *actg;
  struct stack *ctgsStack;
  unsigned int ctg;
  unsigned int bal_ctg;
  i = 0;
  void *return_value_stackPop_1;
  for( ; !(i >= scafInBuf); i = i + 1)
  {
    scafID = scafCounter_link1 + i + 1;
    ctgsStack = ctgStackBuffer_link1[(signed long int)i];
    do
    {
      return_value_stackPop_1=stackPop(ctgsStack);
      actg = (struct ctg4scaf *)return_value_stackPop_1;
      if(actg == ((struct ctg4scaf *)NULL))
        break;

      ctg = actg->ctgID;
      bal_ctg=getTwinCtg(ctg);
      if(!((contig_array + (signed long int)ctg)->from_vt == 0u))
      {
        (contig_array + (signed long int)ctg)->multi = (unsigned char)1;
        (contig_array + (signed long int)bal_ctg)->multi = (unsigned char)1;
      }

      else
      {
        (contig_array + (signed long int)ctg)->from_vt = (unsigned int)scafID;
        (contig_array + (signed long int)ctg)->to_vt = (unsigned int)actg->start;
        (contig_array + (signed long int)ctg)->flag = (unsigned char)0;
        (contig_array + (signed long int)bal_ctg)->from_vt = (unsigned int)scafID;
        (contig_array + (signed long int)bal_ctg)->to_vt = (unsigned int)actg->start;
        (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
      }
    }
    while((_Bool)1);
  }
}

// mapDistancesOntoPaths
// file bubble.c line 597
static signed int mapDistancesOntoPaths()
{
  struct readinterval *marker;
  signed int totalDistance = 0;
  marker = slowPath;
  for( ; !(marker->nextInRead == ((struct readinterval *)NULL)); marker->bal_rv->start = totalDistance)
  {
    marker = marker->nextInRead;
    marker->start = totalDistance;
    totalDistance = totalDistance + (edge_array + (signed long int)marker->edgeid)->length;
  }
  totalDistance = 0;
  marker = fastPath;
  for( ; !(marker->nextInRead == ((struct readinterval *)NULL)); marker->bal_rv->start = totalDistance)
  {
    marker = marker->nextInRead;
    marker->start = totalDistance;
    totalDistance = totalDistance + (edge_array + (signed long int)marker->edgeid)->length;
  }
  return totalDistance;
}

// mapSlowOntoFast
// file bubble.c line 457
static void mapSlowOntoFast()
{
  signed int slowIndex = slowSeqLength;
  signed int fastIndex = fastSeqLength;
  signed int fastn;
  signed int slown;
  signed int tmp_post_1;
  signed int tmp_post_2;
  if(slowIndex == 0)
  {
    slowToFastMapping[(signed long int)0] = fastIndex;
    for( ; fastIndex >= 0; fastToSlowMapping[(signed long int)tmp_post_1] = 0)
    {
      tmp_post_1 = fastIndex;
      fastIndex = fastIndex - 1;
    }
  }

  else
    if(fastIndex == 0)
    {
      for( ; slowIndex >= 0; slowToFastMapping[(signed long int)tmp_post_2] = 0)
      {
        tmp_post_2 = slowIndex;
        slowIndex = slowIndex - 1;
      }
      fastToSlowMapping[(signed long int)0] = slowIndex;
    }

    else
    {
      while(fastIndex >= 1 && slowIndex >= 1)
      {
        fastn = (signed int)fastSequence[(signed long int)(fastIndex - 1)];
        slown = (signed int)slowSequence[(signed long int)(slowIndex - 1)];
        if(Fmatrix[(signed long int)fastIndex][(signed long int)slowIndex] == SIM[(signed long int)fastn][(signed long int)slown] + Fmatrix[(signed long int)(fastIndex + -1)][(signed long int)(slowIndex + -1)])
        {
          fastIndex = fastIndex - 1;
          slowIndex = slowIndex - 1;
          fastToSlowMapping[(signed long int)fastIndex] = slowIndex;
          slowToFastMapping[(signed long int)slowIndex] = fastIndex;
        }

        else
          if(Fmatrix[(signed long int)fastIndex][(signed long int)slowIndex] == Fmatrix[(signed long int)(fastIndex + -1)][(signed long int)slowIndex] + INDEL)
          {
            fastIndex = fastIndex - 1;
            fastToSlowMapping[(signed long int)fastIndex] = slowIndex - 1;
          }

          else
            if(Fmatrix[(signed long int)fastIndex][(signed long int)slowIndex] == Fmatrix[(signed long int)fastIndex][(signed long int)(slowIndex + -1)] + INDEL)
            {
              slowIndex = slowIndex - 1;
              slowToFastMapping[(signed long int)slowIndex] = fastIndex - 1;
            }

            else
            {
              printf("Error");
              fflush(stdout);
              abort();
            }
      }
      for( ; slowIndex >= 1; slowToFastMapping[(signed long int)slowIndex] = -1)
        slowIndex = slowIndex - 1;
      for( ; fastIndex >= 1; fastToSlowMapping[(signed long int)fastIndex] = -1)
        fastIndex = fastIndex - 1;
      slowToFastMapping[(signed long int)slowSeqLength] = fastSeqLength;
      fastToSlowMapping[(signed long int)fastSeqLength] = slowSeqLength;
    }
}

// markerLeadsToArc
// file bubble.c line 1287
static char markerLeadsToArc(struct readinterval *marker, unsigned int nodeA, unsigned int nodeB)
{
  struct readinterval *current;
  struct readinterval *next;
  unsigned int twinA;
  twinA=getTwinEdge(nodeA);
  unsigned int twinB;
  twinB=getTwinEdge(nodeB);
  current = marker;
  for( ; !(current == ((struct readinterval *)NULL)); current = next)
  {
    next = current->nextInRead;
    if(current->edgeid == nodeA)
    {
      if(next->edgeid == nodeB)
        return (char)1;

    }

    if(current->edgeid == twinB)
    {
      if(next->edgeid == twinA)
        return (char)1;

    }

  }
  return (char)0;
}

// markerLeadsToNode
// file bubble.c line 1257
static char markerLeadsToNode(struct readinterval *marker, unsigned int node)
{
  struct readinterval *currentMarker = marker;
  for( ; !(currentMarker == ((struct readinterval *)NULL)); currentMarker = currentMarker->nextInRead)
    if(currentMarker->edgeid == node)
      return (char)1;

  return (char)0;
}

// maskContig
// file orderContig.c line 778
static void maskContig(unsigned int ctg, char flag)
{
  unsigned int bal_ctg;
  unsigned int ctg2;
  unsigned int bal_ctg2;
  struct connection *cn_temp;
  bal_ctg=getTwinCtg(ctg);
  cn_temp = (contig_array + (signed long int)ctg)->downwardConnect;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  while(!(cn_temp == ((struct connection *)NULL)))
  {
    if(!(cn_temp->mask == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = cn_temp->prevInScaf != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = cn_temp->nextInScaf != ((struct connection *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = cn_temp->singleInScaf != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      cn_temp = cn_temp->next;

    else
    {
      ctg2 = cn_temp->contigID;
      setConnectMask(ctg, ctg2, flag);
      cn_temp = cn_temp->next;
    }
  }
  cn_temp = (contig_array + (signed long int)bal_ctg)->downwardConnect;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  while(!(cn_temp == ((struct connection *)NULL)))
  {
    if(!(cn_temp->mask == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = cn_temp->prevInScaf != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = cn_temp->nextInScaf != ((struct connection *)NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = cn_temp->singleInScaf != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
      cn_temp = cn_temp->next;

    else
    {
      bal_ctg2 = cn_temp->contigID;
      setConnectMask(bal_ctg, bal_ctg2, flag);
      cn_temp = cn_temp->next;
    }
  }
  (contig_array + (signed long int)ctg)->mask = (unsigned char)flag;
  (contig_array + (signed long int)bal_ctg)->mask = (unsigned char)flag;
}

// maskPuzzle
// file orderContig.c line 818
static signed int maskPuzzle(signed int num_connect, unsigned int contigLen)
{
  signed int in_num;
  signed int out_num;
  signed int flag = 0;
  signed int puzzleCounter = 0;
  unsigned int i;
  unsigned int bal_i;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!(contigLen == 0u))
    {
      if(!(contigLen >= (contig_array + (signed long int)i)->length))
        break;

    }

    if((contig_array + (signed long int)i)->mask == 0)
    {
      bal_i=getTwinCtg(i);
      in_num=validConnect(bal_i, (struct connection *)(void *)0);
      out_num=validConnect(i, (struct connection *)(void *)0);
      if(in_num + out_num >= num_connect && (in_num >= 2 || out_num >= 2))
      {
        flag = flag + 1;
        maskContig(i, (char)1);
      }

      in_num=validConnect(bal_i, (struct connection *)(void *)0);
      out_num=validConnect(i, (struct connection *)(void *)0);
      if(in_num >= 2 || out_num >= 2)
        puzzleCounter = puzzleCounter + 1;

      char return_value_isSmallerThanTwin_1;
      return_value_isSmallerThanTwin_1=isSmallerThanTwin(i);
      if(!(return_value_isSmallerThanTwin_1 == 0))
        i = i + 1u;

    }

  }
  printf("Masked %d contigs, %d puzzle left\n", flag, puzzleCounter);
  return flag;
}

// maskRepeat
// file orderContig.c line 1417
static void maskRepeat()
{
  signed int in_num;
  signed int out_num;
  signed int flagA;
  signed int flagB;
  signed int counter = 0;
  signed int puzzleCounter = 0;
  unsigned int i;
  unsigned int bal_i;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if((contig_array + (signed long int)i)->mask == 0)
    {
      bal_i=getTwinCtg(i);
      in_num=validConnect(bal_i, (struct connection *)(void *)0);
      out_num=validConnect(i, (struct connection *)(void *)0);
      if(in_num >= 2 || out_num >= 2)
        puzzleCounter = puzzleCounter + 1;

      else
      {
        char return_value_isSmallerThanTwin_1;
        return_value_isSmallerThanTwin_1=isSmallerThanTwin(i);
        if(!(return_value_isSmallerThanTwin_1 == 0))
          i = i + 1u;

        goto __CPROVER_DUMP_L13;
      }
      if(!(2 * cvgAvg >= (signed int)(contig_array + (signed long int)i)->cvg))
      {
        counter = counter + 1;
        maskContig(i, (char)1);
        char return_value_isSmallerThanTwin_2;
        return_value_isSmallerThanTwin_2=isSmallerThanTwin(i);
        if(!(return_value_isSmallerThanTwin_2 == 0))
          i = i + 1u;

        goto __CPROVER_DUMP_L13;
      }

      if(in_num >= 2)
      {
        char return_value_checkUnique_3;
        return_value_checkUnique_3=checkUnique(bal_i, OverlapPercent);
        flagA = (signed int)return_value_checkUnique_3;
      }

      else
        flagA = 1;
      if(out_num >= 2)
      {
        char return_value_checkUnique_4;
        return_value_checkUnique_4=checkUnique(i, OverlapPercent);
        flagB = (signed int)return_value_checkUnique_4;
      }

      else
        flagB = 1;
      if(flagA == 0 || flagB == 0)
      {
        counter = counter + 1;
        maskContig(i, (char)1);
      }

      char return_value_isSmallerThanTwin_5;
      return_value_isSmallerThanTwin_5=isSmallerThanTwin(i);
      if(!(return_value_isSmallerThanTwin_5 == 0))
        i = i + 1u;

    }


  __CPROVER_DUMP_L13:
    ;
  }
  printf("maskRepeat: %d contigs masked from %d puzzles\n", counter, puzzleCounter);
}

// maskRepeatNode
// file localAsm.c line 966
static void maskRepeatNode(struct kmerSet_st *kset, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, signed int overlap, signed int len1, signed int len2, signed int max, unsigned long long int WordFilter)
{
  signed int i;
  signed int num_route;
  signed int steps;
  signed int min = 1;
  signed int maxRoute = 1;
  signed int traceCounter;
  unsigned long long int word;
  unsigned long long int bal_word;
  struct kmer_st *node;
  char found;
  signed int counter = 0;
  i = 0;
  _Bool tmp_if_expr_2;
  for( ; !(i >= len1); i = i + 1)
  {
    word = kmerCtg1[(signed long int)i];
    bal_word=reverseComplement(word, overlap);
    if(!(bal_word >= word))
      word = bal_word;

    signed int return_value_search_kmerset_1;
    return_value_search_kmerset_1=search_kmerset(kset, word, &node);
    found = (char)return_value_search_kmerset_1;
    if(found == 0)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = node->linear != 0u ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_2)
    {
      traceCounter = 0;
      num_route = traceCounter;
      steps = 0;
      trace4Repeat(word, steps, min, max, &num_route, kset, word, overlap, WordFilter, &traceCounter, maxRoute, (struct kmer_st **)(void *)0, (signed short int *)(void *)0, (signed short int *)(void *)0, (signed int *)(void *)0, (char **)(void *)0, (char *)(void *)0, (signed long long int *)(void *)0, (double *)(void *)0);
      if(num_route >= 1)
      {
        counter = counter + 1;
        node->checked = (unsigned int)1;
      }

    }

  }
  i = 0;
  _Bool tmp_if_expr_4;
  for( ; !(i >= len2); i = i + 1)
  {
    word = kmerCtg2[(signed long int)i];
    bal_word=reverseComplement(word, overlap);
    if(!(bal_word >= word))
      word = bal_word;

    signed int return_value_search_kmerset_3;
    return_value_search_kmerset_3=search_kmerset(kset, word, &node);
    found = (char)return_value_search_kmerset_3;
    if(found == 0)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = node->linear != 0u ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_4)
    {
      traceCounter = 0;
      num_route = traceCounter;
      steps = 0;
      trace4Repeat(word, steps, min, max, &num_route, kset, word, overlap, WordFilter, &traceCounter, maxRoute, (struct kmer_st **)(void *)0, (signed short int *)(void *)0, (signed short int *)(void *)0, (signed int *)(void *)0, (char **)(void *)0, (char *)(void *)0, (signed long long int *)(void *)0, (double *)(void *)0);
      if(num_route >= 1)
      {
        counter = counter + 1;
        node->checked = (unsigned int)1;
      }

    }

  }
}

// max
// file bubble.c line 378
static signed int max(signed int A, signed int B, signed int C)
{
  A = A >= B ? A : B;
  return A >= C ? A : C;
}

// max_link1
// file localAsm.c line 1362
static signed int max_link1(signed int A_link1, signed int B_link1, signed int C_link1)
{
  A_link1 = A_link1 >= B_link1 ? A_link1 : B_link1;
  return A_link1 >= C_link1 ? A_link1 : C_link1;
}

// maxKmer
// file prlReadFillGap.c line 803
static unsigned long long int maxKmer()
{
  unsigned long long int word = (unsigned long long int)0;
  signed int i = 0;
  for( ; !(i >= overlaplen); i = i + 1)
  {
    word = word << 2;
    word = word + (unsigned long long int)0x3;
  }
  return word;
}

// memoAlloc4preArc
// file prlRead2path.c line 303
static void memoAlloc4preArc()
{
  unsigned int i;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(num_ed + (unsigned int)1) * sizeof(struct prearc *) /*8ul*/ );
  preArc_array = (struct prearc **)return_value_ckalloc_1;
  i = (unsigned int)0;
  for( ; num_ed >= i; i = i + 1u)
    preArc_array[(signed long int)i] = (struct prearc *)(void *)0;
}

// memoFree4preArc
// file prlRead2path.c line 312
static void memoFree4preArc()
{
  prlDestroyPreArcMem();
  if(!(preArc_array == ((struct prearc **)NULL)))
    free((void *)preArc_array);

}

// merge_linearV2
// file node2edge.c line 312
static void merge_linearV2(char bal_edge, struct stack *nStack, signed int count, struct _IO_FILE *fp)
{
  signed int length;
  signed int char_index;
  struct preedge *newedge;
  struct kmer_st *del_node;
  struct kmer_st *longNode;
  char *tightSeq;
  char firstCh;
  signed long long int symbol = (signed long long int)0;
  signed int len_tSeq;
  unsigned long long int wordplus;
  unsigned long long int bal_wordplus;
  unsigned long long int hash_ban;
  struct kmer_pt *last_np;
  void *return_value_stackPop_1;
  return_value_stackPop_1=stackPop(nStack);
  last_np = (struct kmer_pt *)return_value_stackPop_1;
  struct kmer_pt *second_last_np;
  void *return_value_stackPop_2;
  return_value_stackPop_2=stackPop(nStack);
  second_last_np = (struct kmer_pt *)return_value_stackPop_2;
  struct kmer_pt *first_np;
  struct kmer_pt *second_np = (struct kmer_pt *)(void *)0;
  struct kmer_pt *temp;
  char found;
  signed int setPicker;
  length = count - 1;
  len_tSeq = length;
  if(len_tSeq >= edge_length_limit)
  {
    void *return_value_ckalloc_3;
    return_value_ckalloc_3=ckalloc((unsigned long int)len_tSeq * sizeof(char) /*1ul*/ );
    tightSeq = (char *)return_value_ckalloc_3;
  }

  else
    tightSeq = edge_seq;
  char_index = length - 1;
  newedge = &temp_edge;
  newedge->to_node = last_np->kmer;
  newedge->length = length;
  newedge->bal_edge = (unsigned short int)bal_edge;
  signed int tmp_post_4 = char_index;
  char_index = char_index - 1;
  tightSeq[(signed long int)tmp_post_4] = (char)(last_np->kmer & (unsigned long int)3);
  firstCh=firstCharInKmer(second_last_np->kmer);
  dislink2prevUncertain(last_np->node, firstCh, last_np->isSmaller);
  stackRecover(nStack);
  while(nStack->item_c >= 2)
  {
    void *return_value_stackPop_5;
    return_value_stackPop_5=stackPop(nStack);
    second_np = (struct kmer_pt *)return_value_stackPop_5;
  }
  void *return_value_stackPop_6;
  return_value_stackPop_6=stackPop(nStack);
  first_np = (struct kmer_pt *)return_value_stackPop_6;
  dislink2nextUncertain(first_np->node, (char)(second_np->kmer & (unsigned long int)3), first_np->isSmaller);
  newedge->from_node = first_np->kmer;
  if(length == 1)
  {
    nodeCounter = nodeCounter + 1;
    wordplus=KmerPlus(newedge->from_node, (char)(newedge->to_node & (unsigned long int)3));
    bal_wordplus=reverseComplementVerbose(wordplus, overlaplen + 1);
    edge_c = edge_c + 1;
    edgeCounter = edgeCounter + 1;
    if(bal_wordplus >= wordplus)
    {
      hash_ban=hash_kmer(wordplus);
      setPicker = (signed int)(hash_ban % (unsigned long int)thrd_num);
      signed int return_value_put_kmerset_7;
      return_value_put_kmerset_7=put_kmerset(KmerSetsPatch[(signed long int)setPicker], wordplus, (unsigned char)4, (unsigned char)4, &longNode);
      found = (char)return_value_put_kmerset_7;
      if(!(found == 0))
        printf("longNode %llx already exist\n", wordplus);

      longNode->l_links = (unsigned int)edge_c;
      longNode->twin = (unsigned int)(unsigned char)((signed int)bal_edge + 1);
    }

    else
    {
      hash_ban=hash_kmer(bal_wordplus);
      setPicker = (signed int)(hash_ban % (unsigned long int)thrd_num);
      signed int return_value_put_kmerset_8;
      return_value_put_kmerset_8=put_kmerset(KmerSetsPatch[(signed long int)setPicker], bal_wordplus, (unsigned char)4, (unsigned char)4, &longNode);
      found = (char)return_value_put_kmerset_8;
      if(!(found == 0))
        printf("longNode %llx already exist\n", bal_wordplus);

      longNode->l_links = (unsigned int)(edge_c + (signed int)bal_edge);
      longNode->twin = (unsigned int)(unsigned char)(-((signed int)bal_edge) + 1);
    }
  }

  else
  {
    edge_c = edge_c + 1;
    edgeCounter = edgeCounter + 1;
  }
  stackRecover(nStack);
  void *return_value_stackPop_9;
  return_value_stackPop_9=stackPop(nStack);
  temp = (struct kmer_pt *)return_value_stackPop_9;
  signed int tmp_post_11;
  while(nStack->item_c >= 2)
  {
    void *return_value_stackPop_10;
    return_value_stackPop_10=stackPop(nStack);
    temp = (struct kmer_pt *)return_value_stackPop_10;
    del_node = temp->node;
    del_node->inEdge = (unsigned int)1;
    symbol = symbol + (signed long long int)((del_node->l_links >> 0 * 6 & 0x3FU) + (del_node->l_links >> 1 * 6 & 0x3FU) + (del_node->l_links >> 2 * 6 & 0x3FU) + (del_node->l_links >> 3 * 6 & 0x3FU));
    if(!(temp->isSmaller == 0))
    {
      del_node->l_links = (unsigned int)edge_c;
      del_node->twin = (unsigned int)(unsigned char)((signed int)bal_edge + 1);
    }

    else
    {
      del_node->l_links = (unsigned int)(edge_c + (signed int)bal_edge);
      del_node->twin = (unsigned int)(unsigned char)(-((signed int)bal_edge) + 1);
    }
    tmp_post_11 = char_index;
    char_index = char_index - 1;
    tightSeq[(signed long int)tmp_post_11] = (char)(temp->kmer & (unsigned long int)3);
  }
  newedge->seq = tightSeq;
  if(length >= 2)
    newedge->cvg = (unsigned short int)((symbol / (signed long int)(length - 1)) * (signed long int)10 > (signed long int)16000 ? (signed long int)16000 : (symbol / (signed long int)(length - 1)) * (signed long int)10);

  else
    newedge->cvg = (unsigned short int)0;
  output_1edge(newedge, fp);
  if(len_tSeq >= edge_length_limit)
    free((void *)tightSeq);

  edge_c = edge_c + (signed int)bal_edge;
  if(edge_c % 10000000 == 0)
    printf("--- %d edges built\n", edge_c);

  goto __CPROVER_DUMP_L19;

__CPROVER_DUMP_L19:
  ;
}

// minInDHeap
// file dfib.c line 173
unsigned int minInDHeap(struct dfibheap *h)
{
  if(!(h->dfh_min == ((struct dfibheap_el *)NULL)))
    return h->dfh_min->dfhe_data;

  else
    return (unsigned int)0;
}

// minKeyOfHeap
// file fibHeap.c line 40
signed long long int minKeyOfHeap(struct fibheap *heap)
{
  signed long long int return_value_fh_minkey_1;
  return_value_fh_minkey_1=fh_minkey(heap);
  return return_value_fh_minkey_1;
}

// moveArc2cp
// file splitReps.c line 318
static void moveArc2cp(unsigned int leftEd, unsigned int rightEd, unsigned int source, unsigned int target)
{
  unsigned int bal_left;
  bal_left=getTwinEdge(leftEd);
  unsigned int bal_right;
  bal_right=getTwinEdge(rightEd);
  unsigned int bal_source;
  bal_source=getTwinEdge(source);
  unsigned int bal_target;
  bal_target=getTwinEdge(target);
  struct arc *arc;
  struct arc *newArc;
  struct arc *twinArc;
  arc=getArcBetween(leftEd, source);
  arc->to_ed = (unsigned int)0;
  newArc=allocateArc(target);
  newArc->multiplicity = arc->multiplicity;
  newArc->prev = (struct arc *)(void *)0;
  newArc->next = (edge_array + (signed long int)leftEd)->arcs;
  if(!((edge_array + (signed long int)leftEd)->arcs == ((struct arc *)NULL)))
    (edge_array + (signed long int)leftEd)->arcs->prev = newArc;

  (edge_array + (signed long int)leftEd)->arcs = newArc;
  arc=getArcBetween(bal_source, bal_left);
  arc->to_ed = (unsigned int)0;
  twinArc=allocateArc(bal_left);
  twinArc->multiplicity = arc->multiplicity;
  twinArc->prev = (struct arc *)(void *)0;
  twinArc->next = (struct arc *)(void *)0;
  (edge_array + (signed long int)bal_target)->arcs = twinArc;
  newArc->bal_arc = twinArc;
  twinArc->bal_arc = newArc;
  arc=getArcBetween(source, rightEd);
  arc->to_ed = (unsigned int)0;
  newArc=allocateArc(rightEd);
  newArc->multiplicity = arc->multiplicity;
  newArc->prev = (struct arc *)(void *)0;
  newArc->next = (struct arc *)(void *)0;
  (edge_array + (signed long int)target)->arcs = newArc;
  arc=getArcBetween(bal_right, bal_source);
  arc->to_ed = (unsigned int)0;
  twinArc=allocateArc(bal_target);
  twinArc->multiplicity = arc->multiplicity;
  twinArc->prev = (struct arc *)(void *)0;
  twinArc->next = (edge_array + (signed long int)bal_right)->arcs;
  if(!((edge_array + (signed long int)bal_right)->arcs == ((struct arc *)NULL)))
    (edge_array + (signed long int)bal_right)->arcs->prev = twinArc;

  (edge_array + (signed long int)bal_right)->arcs = twinArc;
  newArc->bal_arc = twinArc;
  twinArc->bal_arc = newArc;
}

// multiFileParse
// file readseq1by1.c line 119
extern signed long long int multiFileParse(signed int *max_leg, signed int *min_leg, signed int *max_name_leg, struct _IO_FILE *fp)
{
  char str[5000l];
  struct _IO_FILE *freads;
  signed int slen;
  signed long long int counter = (signed long long int)0;
  *max_leg = 1;
  *max_name_leg = *max_leg;
  *min_leg = 1000;
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(str, 4950, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(str);
    slen = (signed int)return_value_strlen_2;
    str[(signed long int)(slen - 1)] = str[(signed long int)slen];
    freads=ckopen(str, "r");
    signed long long int return_value_readseqpar_3;
    return_value_readseqpar_3=readseqpar(max_leg, min_leg, max_name_leg, freads);
    counter = counter + return_value_readseqpar_3;
    fclose(freads);
  }
  while((_Bool)1);
  return counter;
}

// nPick1
// file localAsm.c line 390
static signed int nPick1(signed int *array, signed int n)
{
  signed int m;
  signed int i;
  m = n - 1;
  signed int value = array[(signed long int)m];
  i = m;
  for( ; !(i >= n + -1); i = i + 1)
    array[(signed long int)i] = array[(signed long int)(i + 1)];
  return value;
}

// newDFibHeap
// file inc/dfibHeap.h line 26
struct dfibheap * newDFibHeap()
{
  struct dfibheap *return_value_dfh_makekeyheap_1;
  return_value_dfh_makekeyheap_1=dfh_makekeyheap();
  return return_value_dfh_makekeyheap_1;
}

// newFibHeap
// file fibHeap.c line 27
struct fibheap * newFibHeap()
{
  struct fibheap *return_value_fh_makekeyheap_1;
  return_value_fh_makekeyheap_1=fh_makekeyheap();
  return return_value_fh_makekeyheap_1;
}

// nextKmer
// file inc/extfunc.h line 42
extern unsigned long long int nextKmer(unsigned long long int prev, char ch)
{
  unsigned long long int word = prev;
  word = word << 2;
  word = word & WORDFILTER;
  word = word + (unsigned long long int)ch;
  return word;
}

// nextKmerLocal
// file localAsm.c line 48
static unsigned long long int nextKmerLocal(unsigned long long int prev, char ch, unsigned long long int WordFilter)
{
  unsigned long long int word = prev;
  word = word << 2;
  word = word & WordFilter;
  word = word + (unsigned long long int)ch;
  return word;
}

// nextStartingPoint
// file bubble.c line 254
static unsigned int nextStartingPoint()
{
  unsigned int index = (unsigned int)1;
  unsigned int result = (unsigned int)0;
  index = (unsigned int)(progress + 1);
  _Bool tmp_if_expr_1;
  for( ; !(index >= num_ed); index = index + 1u)
  {
    result = index;
    if(!((edge_array + (signed long int)index)->deleted == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (edge_array + (signed long int)index)->length < 1 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
    {
      if(result == 0u)
        return (unsigned int)0;

      if(!((signed int)(edge_array + (signed long int)result)->multi >= 1))
      {
        progress = (signed int)index;
        return result;
      }

    }

  }
  return (unsigned int)0;
}

// nextValidIndex
// file readseq1by1.c line 253
static signed int nextValidIndex(signed int libNo, char pair, unsigned char asm_ctg)
{
  signed int i = libNo;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  while(!(i >= num_libs))
  {
    if((signed int)asm_ctg == 1)
    {
      if(!((lib_array + (signed long int)i)->asm_flag == 1))
        tmp_if_expr_3 = (lib_array + (signed long int)i)->asm_flag != 3 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
    {
      i = i + 1;
      continue;
    }

    else
    {
      if((signed int)asm_ctg == 0)
      {
        if(!((lib_array + (signed long int)i)->asm_flag == 2))
          tmp_if_expr_1 = (lib_array + (signed long int)i)->asm_flag != 3 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        i = i + 1;
        continue;
      }

      else
        if((signed int)asm_ctg >= 2)
        {
          if(!((lib_array + (signed long int)i)->asm_flag == (signed int)asm_ctg))
          {
            i = i + 1;
            continue;
          }

        }

    }
    if((lib_array + (signed long int)i)->curr_type == 1)
    {
      if(!((lib_array + (signed long int)i)->curr_index >= (lib_array + (signed long int)i)->num_a1_file))
        return i;

    }

    if((lib_array + (signed long int)i)->curr_type == 2)
    {
      if(!((lib_array + (signed long int)i)->curr_index >= (lib_array + (signed long int)i)->num_q1_file))
        return i;

    }

    if((lib_array + (signed long int)i)->curr_type == 3)
    {
      if(!((lib_array + (signed long int)i)->curr_index >= (lib_array + (signed long int)i)->num_p_file))
        return i;

    }

    if(!(pair == 0))
    {
      if(!((lib_array + (signed long int)i)->curr_type >= 3))
      {
        (lib_array + (signed long int)i)->curr_type = (lib_array + (signed long int)i)->curr_type + 1;
        (lib_array + (signed long int)i)->curr_index = 0;
      }

      else
        i = i + 1;
    }

    else
    {
      if((lib_array + (signed long int)i)->curr_type == 4)
      {
        if(!((lib_array + (signed long int)i)->curr_index >= (lib_array + (signed long int)i)->num_s_a_file))
          return i;

      }

      if((lib_array + (signed long int)i)->curr_type == 5)
      {
        if(!((lib_array + (signed long int)i)->curr_index >= (lib_array + (signed long int)i)->num_s_q_file))
          return i;

      }

      if(!((lib_array + (signed long int)i)->curr_type >= 5))
      {
        (lib_array + (signed long int)i)->curr_type = (lib_array + (signed long int)i)->curr_type + 1;
        (lib_array + (signed long int)i)->curr_index = 0;
      }

      else
        i = i + 1;
    }
  }
  return i;
}

// openFile4read
// file readseq1by1.c line 320
static struct _IO_FILE * openFile4read(char *fname)
{
  struct _IO_FILE *fp;
  unsigned long int return_value_strlen_4;
  return_value_strlen_4=strlen(fname);
  _Bool tmp_if_expr_8;
  signed int tmp_statement_expression_5;
  if(return_value_strlen_4 >= 4ul)
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(fname);
    signed int return_value___builtin_strcmp_7;
    return_value___builtin_strcmp_7=__builtin_strcmp((fname + (signed long int)return_value_strlen_6) - (signed long int)3, ".gz");
    tmp_statement_expression_5 = return_value___builtin_strcmp_7;
    tmp_if_expr_8 = tmp_statement_expression_5 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_8 = (_Bool)0;
  if(tmp_if_expr_8)
  {
    char *cmd;
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(fname);
    void *return_value_ckalloc_2;
    return_value_ckalloc_2=ckalloc((return_value_strlen_1 + (unsigned long int)20) * sizeof(char) /*1ul*/ );
    cmd = (char *)return_value_ckalloc_2;
    sprintf(cmd, "gzip -dc %s", fname);
    fp=popen(cmd, "r");
    free((void *)cmd);
    return fp;
  }

  else
  {
    struct _IO_FILE *return_value_ckopen_3;
    return_value_ckopen_3=ckopen(fname, "r");
    return return_value_ckopen_3;
  }
}

// openFileInLib
// file readseq1by1.c line 338
void openFileInLib(signed int libNo)
{
  signed int i = libNo;
  if((lib_array + (signed long int)i)->curr_type == 1)
  {
    printf("read from file:\n %s\n", (lib_array + (signed long int)i)->a1_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
    printf("read from file:\n %s\n", (lib_array + (signed long int)i)->a2_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
    (lib_array + (signed long int)i)->fp1=openFile4read((lib_array + (signed long int)i)->a1_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
    (lib_array + (signed long int)i)->fp2=openFile4read((lib_array + (signed long int)i)->a2_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
    (lib_array + (signed long int)i)->curr_index = (lib_array + (signed long int)i)->curr_index + 1;
    (lib_array + (signed long int)i)->paired = 1;
  }

  else
    if((lib_array + (signed long int)i)->curr_type == 2)
    {
      printf("read from file:\n %s\n", (lib_array + (signed long int)i)->q1_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
      printf("read from file:\n %s\n", (lib_array + (signed long int)i)->q2_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
      (lib_array + (signed long int)i)->fp1=openFile4read((lib_array + (signed long int)i)->q1_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
      (lib_array + (signed long int)i)->fp2=openFile4read((lib_array + (signed long int)i)->q2_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
      (lib_array + (signed long int)i)->curr_index = (lib_array + (signed long int)i)->curr_index + 1;
      (lib_array + (signed long int)i)->paired = 1;
    }

    else
      if((lib_array + (signed long int)i)->curr_type == 3)
      {
        printf("read from file:\n %s\n", (lib_array + (signed long int)i)->p_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
        (lib_array + (signed long int)i)->fp1=openFile4read((lib_array + (signed long int)i)->p_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
        (lib_array + (signed long int)i)->curr_index = (lib_array + (signed long int)i)->curr_index + 1;
        (lib_array + (signed long int)i)->paired = 0;
      }

      else
        if((lib_array + (signed long int)i)->curr_type == 4)
        {
          printf("read from file:\n %s\n", (lib_array + (signed long int)i)->s_a_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
          (lib_array + (signed long int)i)->fp1=openFile4read((lib_array + (signed long int)i)->s_a_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
          (lib_array + (signed long int)i)->curr_index = (lib_array + (signed long int)i)->curr_index + 1;
          (lib_array + (signed long int)i)->paired = 0;
        }

        else
          if((lib_array + (signed long int)i)->curr_type == 5)
          {
            printf("read from file:\n %s\n", (lib_array + (signed long int)i)->s_q_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
            (lib_array + (signed long int)i)->fp1=openFile4read((lib_array + (signed long int)i)->s_q_fname[(signed long int)(lib_array + (signed long int)i)->curr_index]);
            (lib_array + (signed long int)i)->curr_index = (lib_array + (signed long int)i)->curr_index + 1;
            (lib_array + (signed long int)i)->paired = 0;
          }

}

// ordering
// file orderContig.c line 1479
static void ordering(char deWeak, char downS, char nonlinear, char *infile)
{
  debugging();
  if(!(downS == 0))
  {
    downSlide();
    debugging();
    if(!(deWeak == 0))
      deleteWeakCnt(weakPE);

  }

  else
    if(!(deWeak == 0))
      deleteWeakCnt(weakPE);

  debugging();
  printf("variance for insert size %d\n", ins_size_var);
  simplifyCnt();
  debugging();
  maskRepeat();
  debugging();
  simplifyCnt();
  if(!(nonlinear == 0))
  {
    printf("non-strict linearization\n");
    general_linearization((char)0);
  }

  maskPuzzle(2, (unsigned int)0);
  debugging();
  freezing();
  debugging();
}

// output1gap
// file orderContig.c line 2082
void output1gap(struct _IO_FILE *fo, signed int max_steps)
{
  signed int i;
  signed int len;
  signed int seg = 0;
  len = seg;
  i = 0;
  for( ; !(i >= max_steps + -1); i = i + 1)
  {
    if((*found_routes)[(signed long int)(1 + i)] == 0u)
      break;

    len = len + (signed int)(contig_array + (signed long int)found_routes[(signed long int)0][(signed long int)i])->length;
    seg = seg + 1;
  }
  fprintf(fo, "GAP %d %d", len, seg);
  i = 0;
  for( ; !(i >= max_steps + -1); i = i + 1)
  {
    if((*found_routes)[(signed long int)(1 + i)] == 0u)
      break;

    fprintf(fo, " %d", found_routes[(signed long int)0][(signed long int)i]);
  }
  fprintf(fo, "\n");
}

// output1gap_link1
// file prlReadFillGap.c line 429
static void output1gap_link1(struct _IO_FILE *fo_link1, signed int scafIndex, struct ctg4scaf *prevCtg, struct ctg4scaf *actg, struct dynamic_array *gapSeqArray)
{
  unsigned int ctg1;
  unsigned int bal_ctg1;
  unsigned int length1;
  signed int start1;
  signed int outputlen1;
  unsigned int ctg2;
  unsigned int bal_ctg2;
  unsigned int length2;
  signed int start2;
  signed int outputlen2;
  char *pt;
  signed int column = 0;
  ctg1 = prevCtg->ctgID;
  bal_ctg1=getTwinCtg(ctg1);
  start1 = (signed int)prevCtg->cutHead;
  length1 = (contig_array + (signed long int)ctg1)->length + (unsigned int)overlaplen;
  if(length1 + -((unsigned int)prevCtg->cutTail) + -((unsigned int)start1) >= 51u)
  {
    outputlen1 = 50;
    start1 = (signed int)((length1 - (unsigned int)prevCtg->cutTail) - (unsigned int)outputlen1);
  }

  else
    outputlen1 = (signed int)((length1 - (unsigned int)prevCtg->cutTail) - (unsigned int)start1);
  ctg2 = actg->ctgID;
  bal_ctg2=getTwinCtg(ctg2);
  start2 = (signed int)actg->cutHead;
  length2 = (contig_array + (signed long int)ctg2)->length + (unsigned int)overlaplen;
  if(length2 + -((unsigned int)actg->cutTail) + -((unsigned int)start2) >= 51u)
    outputlen2 = 50;

  else
    outputlen2 = (signed int)((length2 - (unsigned int)actg->cutTail) - (unsigned int)start2);
  char return_value_isLargerThanTwin_1;
  return_value_isLargerThanTwin_1=isLargerThanTwin(ctg1);
  if(!(return_value_isLargerThanTwin_1 == 0))
    fprintf(fo_link1, ">S%d_C%d_L%d_G%d", scafIndex, index_array[(signed long int)bal_ctg1], outputlen1, prevCtg->gapSeqLen);

  else
    fprintf(fo_link1, ">S%d_C%d_L%d_G%d", scafIndex, index_array[(signed long int)ctg1], outputlen1, prevCtg->gapSeqLen);
  char return_value_isLargerThanTwin_2;
  return_value_isLargerThanTwin_2=isLargerThanTwin(ctg2);
  if(!(return_value_isLargerThanTwin_2 == 0))
    fprintf(fo_link1, "_C%d_L%d\n", index_array[(signed long int)bal_ctg2], outputlen2);

  else
    fprintf(fo_link1, "_C%d_L%d\n", index_array[(signed long int)ctg2], outputlen2);
  if(!((contig_array + (signed long int)ctg1)->seq == ((char *)NULL)))
    outputTightStr(fo_link1, (contig_array + (signed long int)ctg1)->seq, start1, (signed int)length1, outputlen1, 0, &column);

  else
    if(!((contig_array + (signed long int)bal_ctg1)->seq == ((char *)NULL)))
      outputTightStr(fo_link1, (contig_array + (signed long int)bal_ctg1)->seq, start1, (signed int)length1, outputlen1, 1, &column);

  void *return_value_darrayPut_3;
  return_value_darrayPut_3=darrayPut(gapSeqArray, (signed long long int)prevCtg->gapSeqOffset);
  pt = (char *)return_value_darrayPut_3;
  outputTightStrLowerCase(fo_link1, pt, 0, (signed int)prevCtg->gapSeqLen, (signed int)prevCtg->gapSeqLen, 0, &column);
  if(!((contig_array + (signed long int)ctg2)->seq == ((char *)NULL)))
    outputTightStr(fo_link1, (contig_array + (signed long int)ctg2)->seq, start2, (signed int)length2, outputlen2, 0, &column);

  else
    if(!((contig_array + (signed long int)bal_ctg2)->seq == ((char *)NULL)))
      outputTightStr(fo_link1, (contig_array + (signed long int)bal_ctg2)->seq, start2, (signed int)length2, outputlen2, 1, &column);

  fprintf(fo_link1, "\n");
}

// output1read
// file prlRead2Ctg.c line 384
static void output1read(signed int t, struct _IO_FILE *outfp)
{
  signed int len = lenBuffer_link2[(signed long int)t];
  signed int index;
  readsInGap = readsInGap + 1ll;
  index = 0;
  for( ; !(index >= len); index = index + 1)
    writeChar2tightString(seqBuffer_link2[(signed long int)t][(signed long int)index], rcSeq_link2[(signed long int)1], index);
  fwrite((const void *)&len, sizeof(signed int) /*4ul*/ , (unsigned long int)1, outfp);
  fwrite((const void *)&ctgIdArray_link1[(signed long int)t], sizeof(signed int) /*4ul*/ , (unsigned long int)1, outfp);
  fwrite((const void *)&posArray[(signed long int)t], sizeof(signed int) /*4ul*/ , (unsigned long int)1, outfp);
  fwrite((const void *)rcSeq_link2[(signed long int)1], sizeof(char) /*1ul*/ , (unsigned long int)(len / 4 + 1), outfp);
}

// output1read_link1
// file read2scaf.c line 237
static void output1read_link1(struct _IO_FILE *fo, signed long long int readno, unsigned int contigno, signed int pos)
{
  unsigned int ctg = index_array[(signed long int)contigno];
  signed int posOnScaf;
  char orien;
  pos = pos < 0 ? 0 : pos;
  if((signed int)(contig_array + (signed long int)ctg)->flag == 0)
  {
    posOnScaf = (signed int)(((contig_array + (signed long int)ctg)->to_vt + (unsigned int)pos) - (unsigned int)overlaplen);
    orien = (char)43;
  }

  else
  {
    posOnScaf = (signed int)(((contig_array + (signed long int)ctg)->to_vt + (contig_array + (signed long int)ctg)->length) - (unsigned int)pos);
    orien = (char)45;
  }
  fprintf(fo, "%lld\t%d\t%d\t%c\n", readno, (contig_array + (signed long int)ctg)->from_vt, posOnScaf, orien);
}

// output1vt
// file output_pregraph.c line 31
static void output1vt(struct kmer_st *node1, struct _IO_FILE *fp)
{
  if(!(node1 == ((struct kmer_st *)NULL)))
  {
    if(node1->linear == 0u)
    {
      if(node1->deleted == 0u)
      {
        outvCounter = outvCounter + 1;
        print_kmer(fp, node1->seq, (char)32);
        if(outvCounter % 8 == 0)
          fprintf(fp, "\n");

      }

    }

  }

}

// outputGapSeq
// file prlReadFillGap.c line 488
static void outputGapSeq(struct _IO_FILE *fo, signed int index, struct stack *ctgsStack, struct dynamic_array *gapSeqArray)
{
  struct ctg4scaf *actg;
  struct ctg4scaf *prevCtg = (struct ctg4scaf *)(void *)0;
  stackRecover(ctgsStack);
  void *return_value_stackPop_1;
  do
  {
    return_value_stackPop_1=stackPop(ctgsStack);
    actg = (struct ctg4scaf *)return_value_stackPop_1;
    if(actg == ((struct ctg4scaf *)NULL))
      break;

    if(!(prevCtg == ((struct ctg4scaf *)NULL)))
    {
      if((signed int)prevCtg->gapSeqLen >= 1)
        output1gap_link1(fo, index, prevCtg, actg, gapSeqArray);

    }

    prevCtg = actg;
  }
  while((_Bool)1);
}

// outputLinks
// file orderContig.c line 2708
static void outputLinks(struct _IO_FILE *fp, signed int insertS)
{
  unsigned int i;
  unsigned int bal_ctg;
  unsigned int bal_toCtg;
  struct connection *cnts;
  struct connection *temp_cnt;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
  {
    cnts = (contig_array + (signed long int)i)->downwardConnect;
    bal_ctg=getTwinCtg(i);
    while(!(cnts == ((struct connection *)NULL)))
      if(!((signed int)cnts->weight >= 1))
        cnts = cnts->next;

      else
      {
        fprintf(fp, "%-10d %-10d\t%d\t%d\t%d\n", i, cnts->contigID, cnts->gapLen, cnts->weight, insertS);
        cnts->weight = (unsigned char)0;
        bal_toCtg=getTwinCtg(cnts->contigID);
        temp_cnt=getCntBetween(bal_toCtg, bal_ctg);
        if(!(temp_cnt == ((struct connection *)NULL)))
          temp_cnt->weight = (unsigned char)0;

        cnts = cnts->next;
      }
  }
}

// outputNs
// file prlReadFillGap.c line 395
static void outputNs(struct _IO_FILE *fp, signed int gapN, signed int *col)
{
  signed int i;
  signed int column = *col;
  i = 0;
  for( ; !(i >= gapN); i = i + 1)
  {
    fprintf(fp, "N");
    column = column + 1;
    if(column % 100 == 0)
      fprintf(fp, "\n");

  }
  *col = column;
}

// outputScafSeq
// file prlReadFillGap.c line 502
static void outputScafSeq(struct _IO_FILE *fo, signed int index, struct stack *ctgsStack, struct dynamic_array *gapSeqArray)
{
  struct ctg4scaf *actg;
  struct ctg4scaf *prevCtg = (struct ctg4scaf *)(void *)0;
  unsigned int ctg;
  unsigned int bal_ctg;
  unsigned int length;
  signed int start;
  signed int outputlen;
  signed int gapN;
  char *pt;
  signed int column = 0;
  signed long long int cvgSum = (signed long long int)0;
  signed int lenSum = 0;
  stackRecover(ctgsStack);
  void *return_value_stackPop_1;
  do
  {
    return_value_stackPop_1=stackPop(ctgsStack);
    actg = (struct ctg4scaf *)return_value_stackPop_1;
    if(actg == ((struct ctg4scaf *)NULL))
      break;

    if((signed int)(contig_array + (signed long int)actg->ctgID)->cvg >= 1)
    {
      lenSum = lenSum + (signed int)(contig_array + (signed long int)actg->ctgID)->length;
      cvgSum = cvgSum + (signed long long int)((contig_array + (signed long int)actg->ctgID)->length * (unsigned int)(contig_array + (signed long int)actg->ctgID)->cvg);
    }

  }
  while((_Bool)1);
  if(lenSum >= 1)
    fprintf(fo, ">scaffold%d %4.1f\n", index, (double)cvgSum / (double)lenSum);

  else
    fprintf(fo, ">scaffold%d 0.0\n", index);
  stackRecover(ctgsStack);
  void *return_value_stackPop_2;
  do
  {
    return_value_stackPop_2=stackPop(ctgsStack);
    actg = (struct ctg4scaf *)return_value_stackPop_2;
    if(actg == ((struct ctg4scaf *)NULL))
      break;

    ctg = actg->ctgID;
    bal_ctg=getTwinCtg(ctg);
    length = (contig_array + (signed long int)ctg)->length + (unsigned int)overlaplen;
    if(!(prevCtg == ((struct ctg4scaf *)NULL)))
    {
      if(!(actg->scaftig_start == 0u))
      {
        gapN = (signed int)((unsigned int)(actg->start - prevCtg->start) - (contig_array + (signed long int)prevCtg->ctgID)->length);
        gapN = gapN > 0 ? gapN : 1;
        outputNs(fo, gapN, &column);
        Ncounter = Ncounter + 1;
      }

    }

    if(prevCtg == ((struct ctg4scaf *)NULL))
      start = 0;

    else
      start = (signed int)actg->cutHead;
    outputlen = (signed int)((length - (unsigned int)start) - (unsigned int)actg->cutTail);
    if(!((contig_array + (signed long int)ctg)->seq == ((char *)NULL)))
      outputTightStr(fo, (contig_array + (signed long int)ctg)->seq, start, (signed int)length, outputlen, 0, &column);

    else
      if(!((contig_array + (signed long int)bal_ctg)->seq == ((char *)NULL)))
        outputTightStr(fo, (contig_array + (signed long int)bal_ctg)->seq, start, (signed int)length, outputlen, 1, &column);

    if(!((signed int)actg->gapSeqLen >= 1))
      prevCtg = actg;

    else
    {
      void *return_value_darrayPut_3;
      return_value_darrayPut_3=darrayPut(gapSeqArray, (signed long long int)actg->gapSeqOffset);
      pt = (char *)return_value_darrayPut_3;
      outputTightStrLowerCase(fo, pt, 0, (signed int)actg->gapSeqLen, (signed int)actg->gapSeqLen, 0, &column);
      prevCtg = actg;
    }
  }
  while((_Bool)1);
  fprintf(fo, "\n");
}

// outputSeqs
// file prlReadFillGap.c line 955
static void outputSeqs(struct _IO_FILE *fo, struct _IO_FILE *fo2, signed int scafInBuf)
{
  signed int i;
  signed int thrdID;
  i = 0;
  for( ; !(i >= scafInBuf); i = i + 1)
  {
    thrdID = (signed int)thrdNoBuf[(signed long int)i];
    outputScafSeq(fo, scafCounter + i + 1, ctgStackBuffer[(signed long int)i], darrayBuf[(signed long int)thrdID]);
    outputGapSeq(fo2, scafCounter + i + 1, ctgStackBuffer[(signed long int)i], darrayBuf[(signed long int)thrdID]);
  }
}

// outputTightStr
// file prlReadFillGap.c line 315
static void outputTightStr(struct _IO_FILE *fp, char *tightStr, signed int start, signed int length, signed int outputlen, signed int revS, signed int *col)
{
  signed int i;
  signed int end;
  signed int column = *col;
  if(revS == 0)
  {
    end = start + outputlen <= length ? start + outputlen : length;
    i = start;
    for( ; !(i >= end); i = i + 1)
    {
      char return_value_getCharInTightString_1;
      return_value_getCharInTightString_1=getCharInTightString(tightStr, i);
      fprintf(fp, "%c", "ACTG"[(signed long int)(signed int)return_value_getCharInTightString_1]);
      column = column + 1;
      if(column % 100 == 0)
        fprintf(fp, "\n");

    }
  }

  else
  {
    end = ((length - start) - outputlen) - 1 >= 0 ? (length - start) - outputlen : 0;
    i = (length - 1) - start;
    for( ; i >= end; i = i - 1)
    {
      char return_value_getCharInTightString_2;
      return_value_getCharInTightString_2=getCharInTightString(tightStr, i);
      fprintf(fp, "%c", "TGAC"[(signed long int)(signed int)return_value_getCharInTightString_2]);
      column = column + 1;
      if(column % 100 == 0)
        fprintf(fp, "\n");

    }
  }
  *col = column;
}

// outputTightStrLowerCase
// file prlReadFillGap.c line 355
static void outputTightStrLowerCase(struct _IO_FILE *fp, char *tightStr, signed int start, signed int length, signed int outputlen, signed int revS, signed int *col)
{
  signed int i;
  signed int end;
  signed int column = *col;
  if(revS == 0)
  {
    end = start + outputlen <= length ? start + outputlen : length;
    i = start;
    for( ; !(i >= end); i = i + 1)
    {
      char return_value_getCharInTightString_1;
      return_value_getCharInTightString_1=getCharInTightString(tightStr, i);
      fprintf(fp, "%c", "actg"[(signed long int)(signed int)return_value_getCharInTightString_1]);
      column = column + 1;
      if(column % 100 == 0)
        fprintf(fp, "\n");

    }
  }

  else
  {
    end = ((length - start) - outputlen) - 1 >= 0 ? (length - start) - outputlen : 0;
    i = (length - 1) - start;
    for( ; i >= end; i = i - 1)
    {
      char return_value_getCharInTightString_2;
      return_value_getCharInTightString_2=getCharInTightString(tightStr, i);
      fprintf(fp, "%c", "tgac"[(signed long int)(signed int)return_value_getCharInTightString_2]);
      column = column + 1;
      if(column % 100 == 0)
        fprintf(fp, "\n");

    }
  }
  *col = column;
}

// output_1contig
// file output_contig.c line 63
static void output_1contig(signed int id, struct edge *edge, struct _IO_FILE *fp, char tip)
{
  signed int i;
  unsigned long long int kmer;
  char ch;
  fprintf(fp, ">%d length %d cvg_%.1f_tip_%d\n", id, edge->length + overlaplen, (double)edge->cvg / (double)10, tip);
  kmer = (vt_array + (signed long int)edge->from_vt)->kmer;
  i = overlaplen - 1;
  for( ; i >= 0; i = i - 1)
  {
    ch = (char)(kmer & (unsigned long int)3);
    kmer = kmer >> 2;
    kmerSeq[(signed long int)i] = ch;
  }
  i = 0;
  for( ; !(i >= overlaplen); i = i + 1)
    fprintf(fp, "%c", "ACTG"[(signed long int)(signed int)kmerSeq[(signed long int)i]]);
  i = 0;
  for( ; !(i >= edge->length); i = i + 1)
  {
    char return_value_getCharInTightString_1;
    return_value_getCharInTightString_1=getCharInTightString(edge->seq, i);
    fprintf(fp, "%c", "ACTG"[(signed long int)(signed int)return_value_getCharInTightString_1]);
    if((1 + i + overlaplen) % 100 == 0)
      fprintf(fp, "\n");

  }
  fprintf(fp, "\n");
}

// output_1edge
// file inc/extfunc.h line 101
extern void output_1edge(struct preedge *edge, struct _IO_FILE *fp)
{
  signed int i;
  fprintf(fp, ">length %d,", edge->length);
  print_kmer(fp, edge->from_node, (char)44);
  print_kmer(fp, edge->to_node, (char)44);
  fprintf(fp, "cvg %d, %d\n", edge->cvg, edge->bal_edge);
  i = 0;
  for( ; !(i >= edge->length); i = i + 1)
  {
    fprintf(fp, "%c", "ACTG"[(signed long int)(signed int)edge->seq[(signed long int)i]]);
    if((1 + i) % 100 == 0)
      fprintf(fp, "\n");

  }
  fprintf(fp, "\n");
}

// output_arcGVZ
// file arc.c line 76
void output_arcGVZ(char *outfile, char IsContig)
{
  struct arc *pArc;
  struct prearc *pPreArc;
  char name[256l];
  struct _IO_FILE *fp;
  unsigned int i;
  sprintf(name, "%s.arc.gvz", outfile);
  fp=ckopen(name, "w");
  fprintf(fp, "digraph G{\n");
  fprintf(fp, "\tsize=\"512,512\";\n");
  i = (unsigned int)1;
  for( ; num_ed >= i; i = i + 1u)
    if(!(IsContig == 0))
    {
      pPreArc = (contig_array + (signed long int)i)->arcs;
      for( ; !(pPreArc == ((struct prearc *)NULL)); pPreArc = pPreArc->next)
        fprintf(fp, "\tC%d -> C%d[label =\"%d\"];\n", i, pPreArc->to_ed, pPreArc->multiplicity);
    }

    else
    {
      pArc = (edge_array + (signed long int)i)->arcs;
      for( ; !(pArc == ((struct arc *)NULL)); pArc = pArc->next)
        fprintf(fp, "\tC%d -> C%d[label =\"%d\"];\n", i, pArc->to_ed, pArc->multiplicity);
    }
  fprintf(fp, "}\n");
  fclose(fp);
}

// output_arcs
// file prlRead2path.c line 320
static void output_arcs(char *outfile)
{
  unsigned int i;
  char name[256l];
  struct _IO_FILE *outfp;
  struct _IO_FILE *outfp2 = (struct _IO_FILE *)(void *)0;
  struct prearc *parc;
  sprintf(name, "%s.preArc", outfile);
  outfp=ckopen(name, "w");
  if(!(repsTie == 0))
  {
    sprintf(name, "%s.markOnEdge", outfile);
    outfp2=ckopen(name, "w");
  }

  markCounter = (signed long long int)0;
  i = (unsigned int)1;
  for( ; num_ed >= i; i = i + 1u)
  {
    if(!(repsTie == 0))
    {
      markCounter = markCounter + (signed long long int)markerOnEdge[(signed long int)i];
      fprintf(outfp2, "%d\n", markerOnEdge[(signed long int)i]);
    }

    parc = preArc_array[(signed long int)i];
    if(!(parc == ((struct prearc *)NULL)))
    {
      fprintf(outfp, "%u", i);
      for( ; !(parc == ((struct prearc *)NULL)); parc = parc->next)
        fprintf(outfp, " %u %u", parc->to_ed, parc->multiplicity);
      fprintf(outfp, "\n");
    }

  }
  fclose(outfp);
  if(!(repsTie == 0))
  {
    fclose(outfp2);
    printf("%lld markers counted\n", markCounter);
  }

}

// output_cntGVZ
// file connect.c line 67
extern void output_cntGVZ(char *outfile)
{
  char name[256l];
  struct _IO_FILE *fp;
  unsigned int i;
  struct connection *connect;
  char flag;
  sprintf(name, "%s.scaffold.gvz", outfile);
  fp=ckopen(name, "w");
  fprintf(fp, "digraph G{\n");
  fprintf(fp, "\tsize=\"512,512\";\n");
  i = num_ctg;
  _Bool tmp_if_expr_1;
  for( ; i >= 1u; i = i - 1u)
    if(!((contig_array + (signed long int)i)->downwardConnect == ((struct connection *)NULL)))
    {
      connect = (contig_array + (signed long int)i)->downwardConnect;
      while(!(connect == ((struct connection *)NULL)))
        if(!(connect->deleted == 0))
          connect = connect->next;

        else
        {
          if(!(connect->prevInScaf == 0))
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = connect->nextInScaf != ((struct connection *)NULL) ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
            flag = (char)1;

          else
            flag = (char)0;
          if(connect->mask == 0)
            fprintf(fp, "\tC%d_%d -> C%d_%d [label = \"%d(%d_%d)\"];\n", i, (contig_array + (signed long int)i)->length, connect->contigID, (contig_array + (signed long int)connect->contigID)->length, connect->gapLen, flag, connect->weight);

          else
            fprintf(fp, "\tC%d_%d -> C%d_%d [label = \"%d(%d_%d)\", color = red];\n", i, (contig_array + (signed long int)i)->length, connect->contigID, (contig_array + (signed long int)connect->contigID)->length, connect->gapLen, flag, connect->weight);
          connect = connect->next;
        }
    }

  fprintf(fp, "}\n");
  fclose(fp);
}

// output_contig
// file inc/extfunc.h line 72
extern void output_contig(struct edge *ed_array, unsigned int ed_num, char *outfile, signed int cut_len)
{
  char temp[256l];
  struct _IO_FILE *fp;
  struct _IO_FILE *fp_contig;
  signed int flag;
  signed int count;
  signed int len_c;
  signed int signI;
  unsigned int i;
  signed long long int sum = (signed long long int)0;
  signed long long int N90;
  signed long long int N50;
  unsigned int *length_array;
  char tip;
  sprintf(temp, "%s.contig", outfile);
  fp=ckopen(temp, "w");
  qsort((void *)&ed_array[(signed long int)1], (unsigned long int)ed_num, sizeof(struct edge) /*48ul*/ , cmp_edge);
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)ed_num * sizeof(unsigned int) /*4ul*/ );
  length_array = (unsigned int *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)overlaplen * sizeof(char) /*1ul*/ );
  kmerSeq = (char *)return_value_ckalloc_2;
  len_c = 0;
  count = len_c;
  i = (unsigned int)1;
  signed int tmp_post_3;
  _Bool tmp_if_expr_4;
  for( ; ed_num >= i; i = i + 1u)
  {
    if((ed_array + (signed long int)i)->length + overlaplen >= len_bar)
    {
      tmp_post_3 = len_c;
      len_c = len_c + 1;
      length_array[(signed long int)tmp_post_3] = (unsigned int)((ed_array + (signed long int)i)->length + overlaplen);
    }

    if(!((ed_array + (signed long int)i)->length >= 1))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (ed_array + (signed long int)i)->deleted != 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_4)
    {
      count = count + 1;
      char return_value_EdSmallerThanTwin_5;
      return_value_EdSmallerThanTwin_5=EdSmallerThanTwin(i);
      if(!(return_value_EdSmallerThanTwin_5 == 0))
        i = i + 1u;

    }

  }
  sum = (signed long long int)0;
  signI = len_c - 1;
  for( ; signI >= 0; signI = signI - 1)
    sum = sum + (signed long long int)length_array[(signed long int)signI];
  if(len_c >= 1)
    printf("%d ctgs longer than %d, sum up %lldbp, with average length %lld\n", len_c, len_bar, sum, sum / (signed long int)len_c);

  qsort((void *)length_array, (unsigned long int)len_c, sizeof(unsigned int) /*4ul*/ , cmp_int);
  printf("the longest is %dbp, ", length_array[(signed long int)(len_c - 1)]);
  N50 = (signed long long int)((double)sum * 0.5);
  N90 = (signed long long int)((double)sum * 0.9);
  flag = 0;
  sum = (signed long long int)flag;
  signI = len_c - 1;
  for( ; signI >= 0; signI = signI - 1)
  {
    sum = sum + (signed long long int)length_array[(signed long int)signI];
    if(flag == 0 && sum >= N50)
    {
      printf("contig N50 is %d bp,", length_array[(signed long int)signI]);
      flag = 1;
    }

    if(sum >= N90)
    {
      printf("contig N90 is %d bp\n", length_array[(signed long int)signI]);
      break;
    }

  }
  i = (unsigned int)1;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_8;
  unsigned int return_value_getTwinEdge_7;
  for( ; ed_num >= i; i = i + 1u)
  {
    if(!((ed_array + (signed long int)i)->deleted == 0))
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = (ed_array + (signed long int)i)->length < 1 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_6)
    {
      if(!((ed_array + (signed long int)i)->arcs == ((struct arc *)NULL)))
      {
        return_value_getTwinEdge_7=getTwinEdge(i);
        tmp_if_expr_8 = (ed_array + (signed long int)return_value_getTwinEdge_7)->arcs != ((struct arc *)NULL) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
        tip = (char)0;

      else
        tip = (char)1;
      output_1contig((signed int)i, &ed_array[(signed long int)i], fp, tip);
      char return_value_EdSmallerThanTwin_9;
      return_value_EdSmallerThanTwin_9=EdSmallerThanTwin(i);
      if(!(return_value_EdSmallerThanTwin_9 == 0))
        i = i + 1u;

    }

  }
  fclose(fp);
  free((void *)kmerSeq);
  free((void *)length_array);
  printf("%d contigs longer than %d output\n", count, cut_len);
  sprintf(temp, "%s.ContigIndex", outfile);
  fp_contig=ckopen(temp, "w");
  fprintf(fp_contig, "Edge_num %d %d\n", ed_num, count);
  fprintf(fp_contig, "index\tlength\treverseComplement\n");
  i = (unsigned int)1;
  char return_value_EdLargerThanTwin_10;
  for( ; num_ed >= i; i = i + 1u)
  {
    fprintf(fp_contig, "%d\t%d\t", i, (edge_array + (signed long int)i)->length + overlaplen);
    char return_value_EdSmallerThanTwin_11;
    return_value_EdSmallerThanTwin_11=EdSmallerThanTwin(i);
    if(!(return_value_EdSmallerThanTwin_11 == 0))
    {
      fprintf(fp_contig, "1\n");
      i = i + 1u;
    }

    else
    {
      return_value_EdLargerThanTwin_10=EdLargerThanTwin(i);
      if(!(return_value_EdLargerThanTwin_10 == 0))
        fprintf(fp_contig, "-1\n");

      else
        fprintf(fp_contig, "0\n");
    }
  }
  fclose(fp_contig);
}

// output_contig_graph
// file output_scaffold.c line 28
extern void output_contig_graph(char *outfile)
{
  char name[256l];
  struct _IO_FILE *fp;
  unsigned int i;
  sprintf(name, "%s.contig.gvz", outfile);
  fp=ckopen(name, "w");
  fprintf(fp, "digraph G{\n");
  fprintf(fp, "\tsize=\"512,512\";\n");
  i = num_ctg;
  for( ; i >= 1u; i = i - 1u)
    fprintf(fp, "\tV%d -> V%d[label =\"%d(%d)\"];\n", (contig_array + (signed long int)i)->from_vt, (contig_array + (signed long int)i)->to_vt, i, (contig_array + (signed long int)i)->length);
  fprintf(fp, "}\n");
  fclose(fp);
}

// output_ctg
// file prlReadFillGap.c line 979
static void output_ctg(unsigned int ctg, struct _IO_FILE *fo)
{
  if((contig_array + (signed long int)ctg)->length >= 1u)
  {
    signed int len;
    unsigned int bal_ctg;
    bal_ctg=getTwinCtg(ctg);
    len = (signed int)((contig_array + (signed long int)ctg)->length + (unsigned int)overlaplen);
    signed int col = 0;
    if(!((contig_array + (signed long int)ctg)->seq == ((char *)NULL)))
    {
      fprintf(fo, ">C%d %4.1f\n", ctg, (double)(contig_array + (signed long int)ctg)->cvg);
      outputTightStr(fo, (contig_array + (signed long int)ctg)->seq, 0, len, len, 0, &col);
    }

    else
      if(!((contig_array + (signed long int)bal_ctg)->seq == ((char *)NULL)))
      {
        fprintf(fo, ">C%d %4.1f\n", bal_ctg, (double)(contig_array + (signed long int)ctg)->cvg);
        outputTightStr(fo, (contig_array + (signed long int)bal_ctg)->seq, 0, len, len, 0, &col);
      }

    (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
    (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
    fprintf(fo, "\n");
  }

}

// output_graph
// file output_contig.c line 30
extern void output_graph(char *outfile)
{
  char name[256l];
  struct _IO_FILE *fp;
  unsigned int i;
  unsigned int bal_i;
  sprintf(name, "%s.edge.gvz", outfile);
  fp=ckopen(name, "w");
  fprintf(fp, "digraph G{\n");
  fprintf(fp, "\tsize=\"512,512\";\n");
  i = num_ed;
  for( ; i >= 1u; i = i - 1u)
    if((edge_array + (signed long int)i)->deleted == 0)
    {
      bal_i=getTwinEdge(i);
      fprintf(fp, "\tV%d -> V%d[label =\"%d(%d)\"];\n", (edge_array + (signed long int)i)->from_vt, (edge_array + (signed long int)i)->to_vt, i, (edge_array + (signed long int)i)->length);
    }

  fprintf(fp, "}\n");
  fclose(fp);
}

// output_heavyArcs
// file inc/extfunc.h line 133
extern void output_heavyArcs(char *outfile)
{
  unsigned int i;
  unsigned int j;
  char name[256l];
  struct _IO_FILE *outfp;
  struct arc *parc;
  sprintf(name, "%s.Arc", outfile);
  outfp=ckopen(name, "w");
  i = (unsigned int)1;
  for( ; num_ed >= i; i = i + 1u)
  {
    parc = (edge_array + (signed long int)i)->arcs;
    if(!(parc == ((struct arc *)NULL)))
    {
      j = (unsigned int)0;
      fprintf(outfp, "%u", i);
      for( ; !(parc == ((struct arc *)NULL)); parc = parc->next)
      {
        fprintf(outfp, " %u %u", parc->to_ed, parc->multiplicity);
        j = j + 1u;
        if(j % 10u == 0u)
          fprintf(outfp, "\n%u", i);

      }
      fprintf(outfp, "\n");
    }

  }
  fclose(outfp);
}

// output_scaf
// file output_scaffold.c line 46
void output_scaf(char *outfile)
{
  char name[256l];
  struct _IO_FILE *fp;
  unsigned int i;
  struct connection *connect;
  char flag;
  sprintf(name, "%s.scaffold.gvz", outfile);
  fp=ckopen(name, "w");
  fprintf(fp, "digraph G{\n");
  fprintf(fp, "\tsize=\"512,512\";\n");
  i = num_ctg;
  _Bool tmp_if_expr_1;
  for( ; i >= 1u; i = i - 1u)
    if(!((contig_array + (signed long int)i)->downwardConnect == ((struct connection *)NULL)))
    {
      connect = (contig_array + (signed long int)i)->downwardConnect;
      while(!(connect == ((struct connection *)NULL)))
        if(!(connect->deleted == 0))
          connect = connect->next;

        else
        {
          if(!(connect->prevInScaf == 0))
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = connect->nextInScaf != ((struct connection *)NULL) ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
            flag = (char)1;

          else
            flag = (char)0;
          if(connect->mask == 0)
            fprintf(fp, "\tC%d_%d -> C%d_%d [label = \"%d(%d_%d)\"];\n", i, (contig_array + (signed long int)i)->length, connect->contigID, (contig_array + (signed long int)connect->contigID)->length, connect->gapLen, flag, connect->weight);

          else
            fprintf(fp, "\tC%d_%d -> C%d_%d [label = \"%d(%d_%d)\", color = red];\n", i, (contig_array + (signed long int)i)->length, connect->contigID, (contig_array + (signed long int)connect->contigID)->length, connect->gapLen, flag, connect->weight);
          connect = connect->next;
        }
    }

  fprintf(fp, "}\n");
  fclose(fp);
}

// output_updated_edges
// file inc/extfunc.h line 80
extern void output_updated_edges(char *outfile)
{
  struct _IO_FILE *fp;
  char name[256l];
  unsigned int i;
  unsigned int validCounter = (unsigned int)0;
  struct edge *edge;
  sprintf(name, "%s.updated.edge", outfile);
  fp=ckopen(name, "w");
  i = (unsigned int)1;
  for( ; num_ed >= i; i = i + 1u)
    validCounter = validCounter + 1u;
  fprintf(fp, "EDGEs %d\n", validCounter);
  validCounter = (unsigned int)0;
  i = (unsigned int)1;
  char return_value_EdLargerThanTwin_1;
  for( ; num_ed >= i; i = i + 1u)
  {
    edge = &edge_array[(signed long int)i];
    fprintf(fp, ">length %d,", edge->length);
    print_kmer(fp, (vt_array + (signed long int)edge->from_vt)->kmer, (char)44);
    print_kmer(fp, (vt_array + (signed long int)edge->to_vt)->kmer, (char)44);
    char return_value_EdSmallerThanTwin_2;
    return_value_EdSmallerThanTwin_2=EdSmallerThanTwin(i);
    if(!(return_value_EdSmallerThanTwin_2 == 0))
      fprintf(fp, "1,");

    else
    {
      return_value_EdLargerThanTwin_1=EdLargerThanTwin(i);
      if(!(return_value_EdLargerThanTwin_1 == 0))
        fprintf(fp, "-1,");

      else
        fprintf(fp, "0,");
    }
    fprintf(fp, "%d\n", edge->cvg);
  }
  fclose(fp);
}

// output_vertex
// file output_pregraph.c line 46
extern void output_vertex(char *outfile)
{
  char temp[256l];
  struct _IO_FILE *fp;
  signed int i;
  struct kmer_st *node;
  struct kmerSet_st *set;
  sprintf(temp, "%s.vertex", outfile);
  fp=ckopen(temp, "w");
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
  {
    set = KmerSets[(signed long int)i];
    set->iter_ptr = (unsigned long long int)0;
    for( ; !(set->iter_ptr >= set->size); set->iter_ptr = set->iter_ptr + 1ull)
      if((1u & set->flags[(signed long int)(set->iter_ptr >> 4)] >> ((15ul & set->iter_ptr) << 1)) == 0u)
      {
        node = set->array + (signed long int)set->iter_ptr;
        output1vt(node, fp);
      }

  }
  fprintf(fp, "\n");
  printf("%d vertex outputed\n", outvCounter);
  fclose(fp);
  sprintf(temp, "%s.preGraphBasic", outfile);
  fp=ckopen(temp, "w");
  fprintf(fp, "VERTEX %d K %d\n", outvCounter, overlaplen);
  fprintf(fp, "\nEDGEs %d\n", num_ed);
  fprintf(fp, "\nMaxReadLen %d MinReadLen %d MaxNameLen %d\n", maxReadLen4all, minReadLen, maxNameLen);
  fclose(fp);
}

// parse1read
// file prlRead2Ctg.c line 227
static void parse1read(signed int t, signed int threadID)
{
  unsigned int j;
  unsigned int i;
  unsigned int s;
  unsigned int contigID;
  signed int counter2 = 0;
  signed int counter;
  unsigned int ctgLen;
  unsigned int pos;
  struct kmer_st *node;
  char isSmaller;
  signed int flag;
  signed int maxOcc = 0;
  struct kmer_st *maxNode = (struct kmer_st *)(void *)0;
  signed int alldgnLen;
  signed int tmp_if_expr_1;
  if(!(ALIGNLEN >= lenBuffer_link2[(signed long int)t]))
    tmp_if_expr_1 = ALIGNLEN;

  else
    tmp_if_expr_1 = lenBuffer_link2[(signed long int)t];
  alldgnLen = tmp_if_expr_1;
  signed int multi = (alldgnLen - overlaplen) + 1 < 5 ? 5 : (alldgnLen - overlaplen) + 1;
  unsigned int start;
  unsigned int finish;
  footprint[(signed long int)t] = (char)0;
  start = indexArray_link2[(signed long int)t];
  finish = indexArray_link2[(signed long int)(t + 1)];
  if(finish == start)
  {
    ctgIdArray_link1[(signed long int)t] = (unsigned int)0;
    deletion[(signed long int)threadID] = deletion[(signed long int)threadID] + 1;
  }

  else
  {
    j = start;
    for( ; !(j >= finish); j = j + 1u)
      if(!(nodeBuffer[(signed long int)j] == ((struct kmer_st *)NULL)))
        counter2 = counter2 + 1;

    if(!(counter2 >= 2))
      deletion[(signed long int)threadID] = deletion[(signed long int)threadID] + 1;

    counter2 = 0;
    counter = counter2;
    j = start;
    for( ; !(j >= finish); j = j + 1u)
    {
      node = nodeBuffer[(signed long int)j];
      if(!(node == ((struct kmer_st *)NULL)))
      {
        flag = 1;
        s = j + (unsigned int)1;
        for( ; !(s >= finish); s = s + 1u)
          if(!(nodeBuffer[(signed long int)s] == ((struct kmer_st *)NULL)))
          {
            if(nodeBuffer[(signed long int)s]->l_links == node->l_links)
            {
              flag = flag + 1;
              nodeBuffer[(signed long int)s] = (struct kmer_st *)(void *)0;
            }

          }

        if(flag >= 2)
          counter2 = counter2 + 1;

        if(flag >= multi)
          counter = counter + 1;

        else
          goto __CPROVER_DUMP_L15;
        if(!(maxOcc >= flag))
        {
          pos = j;
          maxOcc = flag;
          maxNode = node;
        }

      }


    __CPROVER_DUMP_L15:
      ;
    }
    if(counter == 0)
      ctgIdArray_link1[(signed long int)t] = (unsigned int)0;

    else
    {
      if(counter2 >= 2)
        footprint[(signed long int)t] = (char)1;

      j = pos;
      i = (pos - start) + (unsigned int)1;
      node = nodeBuffer[(signed long int)j];
      isSmaller = smallerBuffer_link1[(signed long int)j];
      contigID = node->l_links;
      ctgLen = (contig_array + (signed long int)contigID)->length;
      pos = (unsigned int)node->r_links;
      if((signed int)node->twin == (signed int)isSmaller)
      {
        orienArray[(signed long int)t] = (char)45;
        ctgIdArray_link1[(signed long int)t]=getTwinCtg(contigID);
        posArray[(signed long int)t] = (signed int)((((ctgLen - pos) - (unsigned int)overlaplen) - i) + (unsigned int)1);
      }

      else
      {
        orienArray[(signed long int)t] = (char)43;
        ctgIdArray_link1[(signed long int)t] = contigID;
        posArray[(signed long int)t] = (signed int)((pos - i) + (unsigned int)1);
      }
    }
  }
}

// parse1read_link1
// file prlRead2path.c line 430
static void parse1read_link1(signed int t_link1, signed int threadID_link1)
{
  unsigned int j_link1;
  unsigned int retain = (unsigned int)0;
  unsigned int edge_index = (unsigned int)0;
  struct kmer_st *node_link1;
  char isSmaller_link1;
  unsigned long long int wordplus;
  unsigned long long int bal_wordplus;
  unsigned int start_link1;
  unsigned int finish_link1;
  unsigned int pos_link1;
  unsigned long long int parse1read__1__prevKmer;
  unsigned long long int currentKmer;
  char IsPrevKmer = (char)0;
  start_link1 = (unsigned int)indexArray_link3[(signed long int)t_link1];
  finish_link1 = (unsigned int)indexArray_link3[(signed long int)(t_link1 + 1)];
  pos_link1 = start_link1;
  j_link1 = start_link1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1_link1;
  unsigned int tmp_post_3;
  unsigned int tmp_post_4;
  unsigned int tmp_post_5;
  for( ; !(j_link1 >= finish_link1); j_link1 = j_link1 + 1u)
  {
    node_link1 = nodeBuffer_link1[(signed long int)j_link1];
    if(!(node_link1->deleted == 0u))
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      if(!(node_link1->linear == 0u))
        tmp_if_expr_1_link1 = !(node_link1->inEdge != 0u) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1_link1 = (_Bool)0;
      tmp_if_expr_2 = tmp_if_expr_1_link1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
    {
      if(!(retain >= 2u))
      {
        retain = (unsigned int)0;
        pos_link1 = start_link1;
      }

      else
        break;
    }

    else
    {
      isSmaller_link1 = smallerBuffer_link2[(signed long int)j_link1];
      if(!(node_link1->linear == 0u))
      {
        if(!(isSmaller_link1 == 0))
          edge_index = node_link1->l_links;

        else
          edge_index = (node_link1->l_links + (unsigned int)node_link1->twin) - (unsigned int)1;
        if(retain == 0u || !(IsPrevKmer == 0))
        {
          retain = retain + 1u;
          mixBuffer[(signed long int)pos_link1] = (unsigned long long int)edge_index;
          tmp_post_3 = pos_link1;
          pos_link1 = pos_link1 + 1u;
          flagArray[(signed long int)tmp_post_3] = (char)0;
          IsPrevKmer = (char)0;
        }

        else
          if(!((unsigned long int)edge_index == mixBuffer[(signed long int)(pos_link1 + 4294967295u)]))
          {
            retain = retain + 1u;
            mixBuffer[(signed long int)pos_link1] = (unsigned long long int)edge_index;
            tmp_post_4 = pos_link1;
            pos_link1 = pos_link1 + 1u;
            flagArray[(signed long int)tmp_post_4] = (char)0;
          }

      }

      else
      {
        if(!(isSmaller_link1 == 0))
          currentKmer = node_link1->seq;

        else
          currentKmer=reverseComplement(node_link1->seq, overlaplen);
        if(!(IsPrevKmer == 0))
        {
          retain = retain + 1u;
          wordplus=KmerPlus(parse1read__1__prevKmer, (char)(currentKmer & (unsigned long int)3));
          bal_wordplus=reverseComplementVerbose(wordplus, overlaplen + 1);
          if(bal_wordplus >= wordplus)
          {
            smallerBuffer_link2[(signed long int)pos_link1] = (char)1;
            hashBanBuffer_link3[(signed long int)pos_link1]=hash_kmer(wordplus);
            mixBuffer[(signed long int)pos_link1] = wordplus;
          }

          else
          {
            smallerBuffer_link2[(signed long int)pos_link1] = (char)0;
            hashBanBuffer_link3[(signed long int)pos_link1]=hash_kmer(bal_wordplus);
            mixBuffer[(signed long int)pos_link1] = bal_wordplus;
          }
          tmp_post_5 = pos_link1;
          pos_link1 = pos_link1 + 1u;
          flagArray[(signed long int)tmp_post_5] = (char)1;
        }

        IsPrevKmer = (char)1;
        parse1read__1__prevKmer = currentKmer;
      }
    }
  }
  if(!(retain >= 1u))
    deletion_link1[(signed long int)threadID_link1] = deletion_link1[(signed long int)threadID_link1] + 1;

  if(!(retain >= 2u))
  {
    flagArray[(signed long int)start_link1] = (char)0;
    mixBuffer[(signed long int)start_link1] = (unsigned long long int)0;
  }

  else
  {
    if(!(pos_link1 + -start_link1 == retain))
      printf("read %d, %d vs %d\n", t_link1, retain, edge_index - start_link1);

    if(!(pos_link1 >= finish_link1))
    {
      flagArray[(signed long int)pos_link1] = (char)0;
      mixBuffer[(signed long int)pos_link1] = (unsigned long long int)0;
    }

  }
}

// pickUpGeneralSubgraph
// file orderContig.c line 3280
static char pickUpGeneralSubgraph(unsigned int node1, signed int maxNodes)
{
  struct fibheap *Uheap;
  Uheap=newFibHeap();
  struct fibheap *Dheap;
  Dheap=newFibHeap();
  signed int UmaxDis;
  signed int DmaxDis;
  char Uwait;
  char Dwait;
  signed int dis;
  char ret;
  dis = 0;
  nodeCounter_link1 = 1;
  putNodeInArray(node1, maxNodes, dis);
  insertNodeIntoHeap(Dheap, (signed long long int)dis, (unsigned int)nodeCounter_link1);
  ctg4heapArray[(signed long int)nodeCounter_link1].us_shut4dheap = (unsigned char)1;
  Dwait = (char)0;
  DmaxDis = 0;
  insertNodeIntoHeap(Uheap, (signed long long int)dis, (unsigned int)nodeCounter_link1);
  ctg4heapArray[(signed long int)nodeCounter_link1].ds_shut4uheap = (unsigned char)1;
  Uwait = (char)1;
  UmaxDis = (signed int)(contig_array + (signed long int)node1)->length;
  while((_Bool)1)
  {
    ret=workOnDheap(Dheap, Uheap, &Dwait, &Uwait, &DmaxDis, &UmaxDis, maxNodes);
    if(ret == 0)
    {
      setInGraph((char)0);
      destroyHeap(Dheap);
      destroyHeap(Uheap);
      return (char)0;
    }

    ret=workOnUheap(Dheap, Uheap, &Dwait, &Uwait, &DmaxDis, &UmaxDis, maxNodes);
    if(ret == 0)
    {
      setInGraph((char)0);
      destroyHeap(Dheap);
      destroyHeap(Uheap);
      return (char)0;
    }

    if(!(Dwait == 0) && !(Uwait == 0))
    {
      destroyHeap(Dheap);
      destroyHeap(Uheap);
      return (char)1;
    }

  }
}

// pipeline
// file main.c line 90
static void pipeline(signed int argc, char **argv)
{
  char *options[16l];
  unsigned char getK;
  unsigned char getRfile;
  unsigned char getOfile;
  unsigned char getD;
  unsigned char getDD;
  unsigned char getL;
  unsigned char getR;
  unsigned char getP;
  unsigned char getF;
  char readfile[256l];
  char outfile[256l];
  char temp[128l];
  char *name;
  signed int kmer = 0;
  signed int cutoff_len = 0;
  signed int ncpu = 0;
  signed int lowK = 0;
  signed int lowC = 0;
  char kmer_s[16l];
  char len_s[16l];
  char ncpu_s[16l];
  char M_s[16l];
  char lowK_s[16l];
  char lowC_s[16l];
  signed int i;
  signed int copt;
  signed int index;
  signed int pipeline__1__M = 1;
  signed long int start_t;
  signed long int stop_t;
  time(&start_t);
  getF = (unsigned char)0;
  getP = getF;
  getR = getP;
  getL = getR;
  getDD = getL;
  getD = getDD;
  getOfile = getD;
  getRfile = getOfile;
  getK = getRfile;
  do
  {
    copt=getopt(argc, argv, "a:s:o:K:M:L:p:G:d:D:Ru");
    if(copt == -1)
      break;

    switch(copt)
    {
      case 115:
      {
        getRfile = (unsigned char)1;
        sscanf(optarg, "%s", (const void *)readfile);
        break;
      }
      case 111:
      {
        getOfile = (unsigned char)1;
        sscanf(optarg, "%s", (const void *)outfile);
        break;
      }
      case 75:
      {
        getK = (unsigned char)1;
        sscanf(optarg, "%s", (const void *)temp);
        kmer=atoi_link5(temp);
        break;
      }
      case 71:
      {
        sscanf(optarg, "%s", (const void *)temp);
        GLDiff=atoi_link5(temp);
        break;
      }
      case 77:
      {
        sscanf(optarg, "%s", (const void *)temp);
        pipeline__1__M=atoi_link5(temp);
        break;
      }
      case 112:
      {
        getP = (unsigned char)1;
        sscanf(optarg, "%s", (const void *)temp);
        ncpu=atoi_link5(temp);
        break;
      }
      case 76:
      {
        getL = (unsigned char)1;
        sscanf(optarg, "%s", (const void *)temp);
        cutoff_len=atoi_link5(temp);
        break;
      }
      case 82:
      {
        getR = (unsigned char)1;
        break;
      }
      case 117:
      {
        maskRep = (char)0;
        break;
      }
      case 100:
      {
        getD = (unsigned char)1;
        sscanf(optarg, "%s", (const void *)temp);
        lowK=atoi_link5(temp);
        break;
      }
      case 68:
      {
        getDD = (unsigned char)1;
        sscanf(optarg, "%s", (const void *)temp);
        lowC=atoi_link5(temp);
        break;
      }
      case 97:
      {
        initKmerSetSize=atoi_link5(optarg);
        break;
      }
      case 70:
      {
        getF = (unsigned char)1;
        break;
      }
      default:
        if((signed int)getOfile == 0 || (signed int)getRfile == 0)
        {
          display_all_usage();
          exit(-1);
        }

    }
  }
  while((_Bool)1);
  if((signed int)getOfile == 0 || (signed int)getRfile == 0)
  {
    display_all_usage();
    exit(-1);
  }

  if(!(thrd_num >= 1))
    thrd_num = 1;

  name = "pregraph";
  index = 0;
  signed int tmp_post_1 = index;
  index = index + 1;
  options[(signed long int)tmp_post_1] = name;
  signed int tmp_post_2 = index;
  index = index + 1;
  options[(signed long int)tmp_post_2] = "-s";
  signed int tmp_post_3 = index;
  index = index + 1;
  options[(signed long int)tmp_post_3] = readfile;
  signed int tmp_post_4;
  signed int tmp_post_5;
  if(!(getK == 0))
  {
    tmp_post_4 = index;
    index = index + 1;
    options[(signed long int)tmp_post_4] = "-K";
    sprintf(kmer_s, "%d", kmer);
    tmp_post_5 = index;
    index = index + 1;
    options[(signed long int)tmp_post_5] = kmer_s;
  }

  signed int tmp_post_6;
  signed int tmp_post_7;
  if(!(getP == 0))
  {
    tmp_post_6 = index;
    index = index + 1;
    options[(signed long int)tmp_post_6] = "-p";
    sprintf(ncpu_s, "%d", ncpu);
    tmp_post_7 = index;
    index = index + 1;
    options[(signed long int)tmp_post_7] = ncpu_s;
  }

  signed int tmp_post_8;
  signed int tmp_post_9;
  if(!(getD == 0))
  {
    tmp_post_8 = index;
    index = index + 1;
    options[(signed long int)tmp_post_8] = "-d";
    sprintf(lowK_s, "%d", lowK);
    tmp_post_9 = index;
    index = index + 1;
    options[(signed long int)tmp_post_9] = lowK_s;
  }

  signed int tmp_post_10;
  if(!(getR == 0))
  {
    tmp_post_10 = index;
    index = index + 1;
    options[(signed long int)tmp_post_10] = "-R";
  }

  signed int tmp_post_11 = index;
  index = index + 1;
  options[(signed long int)tmp_post_11] = "-o";
  signed int tmp_post_12 = index;
  index = index + 1;
  options[(signed long int)tmp_post_12] = outfile;
  i = 0;
  for( ; !(i >= index); i = i + 1)
    printf("%s ", options[(signed long int)i]);
  printf("\n");
  call_pregraph(index, options);
  name = "contig";
  index = 0;
  signed int tmp_post_13 = index;
  index = index + 1;
  options[(signed long int)tmp_post_13] = name;
  signed int tmp_post_14 = index;
  index = index + 1;
  options[(signed long int)tmp_post_14] = "-g";
  signed int tmp_post_15 = index;
  index = index + 1;
  options[(signed long int)tmp_post_15] = outfile;
  signed int tmp_post_16 = index;
  index = index + 1;
  options[(signed long int)tmp_post_16] = "-M";
  sprintf(M_s, "%d", pipeline__1__M);
  signed int tmp_post_17 = index;
  index = index + 1;
  options[(signed long int)tmp_post_17] = M_s;
  signed int tmp_post_18;
  if(!(getR == 0))
  {
    tmp_post_18 = index;
    index = index + 1;
    options[(signed long int)tmp_post_18] = "-R";
  }

  signed int tmp_post_19;
  signed int tmp_post_20;
  if(!(getDD == 0))
  {
    tmp_post_19 = index;
    index = index + 1;
    options[(signed long int)tmp_post_19] = "-D";
    sprintf(lowC_s, "%d", lowC);
    tmp_post_20 = index;
    index = index + 1;
    options[(signed long int)tmp_post_20] = lowC_s;
  }

  i = 0;
  for( ; !(i >= index); i = i + 1)
    printf("%s ", options[(signed long int)i]);
  printf("\n");
  call_heavygraph(index, options);
  name = "map";
  index = 0;
  signed int tmp_post_21 = index;
  index = index + 1;
  options[(signed long int)tmp_post_21] = name;
  signed int tmp_post_22 = index;
  index = index + 1;
  options[(signed long int)tmp_post_22] = "-s";
  signed int tmp_post_23 = index;
  index = index + 1;
  options[(signed long int)tmp_post_23] = readfile;
  signed int tmp_post_24 = index;
  index = index + 1;
  options[(signed long int)tmp_post_24] = "-g";
  signed int tmp_post_25 = index;
  index = index + 1;
  options[(signed long int)tmp_post_25] = outfile;
  signed int tmp_post_26;
  signed int tmp_post_27;
  if(!(getP == 0))
  {
    tmp_post_26 = index;
    index = index + 1;
    options[(signed long int)tmp_post_26] = "-p";
    sprintf(ncpu_s, "%d", ncpu);
    tmp_post_27 = index;
    index = index + 1;
    options[(signed long int)tmp_post_27] = ncpu_s;
  }

  i = 0;
  for( ; !(i >= index); i = i + 1)
    printf("%s ", options[(signed long int)i]);
  printf("\n");
  call_align(index, options);
  name = "scaff";
  index = 0;
  signed int tmp_post_28 = index;
  index = index + 1;
  options[(signed long int)tmp_post_28] = name;
  signed int tmp_post_29 = index;
  index = index + 1;
  options[(signed long int)tmp_post_29] = "-g";
  signed int tmp_post_30 = index;
  index = index + 1;
  options[(signed long int)tmp_post_30] = outfile;
  signed int tmp_post_31;
  if(!(getF == 0))
  {
    tmp_post_31 = index;
    index = index + 1;
    options[(signed long int)tmp_post_31] = "-F";
  }

  signed int tmp_post_32;
  signed int tmp_post_33;
  if(!(getP == 0))
  {
    tmp_post_32 = index;
    index = index + 1;
    options[(signed long int)tmp_post_32] = "-p";
    sprintf(ncpu_s, "%d", ncpu);
    tmp_post_33 = index;
    index = index + 1;
    options[(signed long int)tmp_post_33] = ncpu_s;
  }

  signed int tmp_post_34;
  signed int tmp_post_35;
  if(!(getL == 0))
  {
    tmp_post_34 = index;
    index = index + 1;
    options[(signed long int)tmp_post_34] = "-L";
    sprintf(len_s, "%d", cutoff_len);
    tmp_post_35 = index;
    index = index + 1;
    options[(signed long int)tmp_post_35] = len_s;
  }

  i = 0;
  for( ; !(i >= index); i = i + 1)
    printf("%s ", options[(signed long int)i]);
  printf("\n");
  call_scaffold(index, options);
  time(&stop_t);
  printf("time for the whole pipeline: %dm\n", (signed int)(stop_t - start_t) / 60);
}

// prevKmer
// file kmer.c line 152
extern unsigned long long int prevKmer(unsigned long long int next, char ch)
{
  unsigned long long int word = next;
  word = word >> 2;
  word = word + ((unsigned long long int)ch << 2 * (overlaplen - 1));
  return word;
}

// prevKmerLocal
// file localAsm.c line 41
static unsigned long long int prevKmerLocal(unsigned long long int next, char ch, signed int overlap)
{
  unsigned long long int word = next;
  word = word >> 2;
  word = word + ((unsigned long long int)ch << 2 * (overlap - 1));
  return word;
}

// printCnts
// file orderContig.c line 2111
static char printCnts(struct _IO_FILE *fp, unsigned int ctg)
{
  struct connection *cnt = (contig_array + (signed long int)ctg)->downwardConnect;
  char flag = (char)0;
  char ret = (char)0;
  unsigned int bal_ctg;
  bal_ctg=getTwinCtg(ctg);
  unsigned int linkCtg;
  char return_value_isSameAsTwin_1;
  return_value_isSameAsTwin_1=isSameAsTwin(ctg);
  if(!(return_value_isSameAsTwin_1 == 0))
    return ret;

  else
  {
    struct connection *bindCnt;
    bindCnt=getBindCnt(ctg);
    if(!(bindCnt == ((struct connection *)NULL)))
    {
      if(!(bindCnt->bySmall == 0))
      {
        if(!(bindCnt->weakPoint == 0))
        {
          weakCounter = weakCounter + 1;
          fprintf(fp, "\tWP");
          ret = (char)1;
        }

      }

    }

    for( ; !(cnt == ((struct connection *)NULL)); cnt = cnt->next)
      if(!(cnt->weight == 0))
      {
        if(cnt->inherit == 0)
        {
          if(flag == 0)
          {
            flag = (char)1;
            fprintf(fp, "\t#DOWN ");
          }

          linkCtg = cnt->contigID;
          char return_value_isLargerThanTwin_2;
          return_value_isLargerThanTwin_2=isLargerThanTwin(linkCtg);
          if(!(return_value_isLargerThanTwin_2 == 0))
            linkCtg=getTwinCtg(linkCtg);

          fprintf(fp, "%d:%d:%d ", index_array[(signed long int)linkCtg], cnt->weight, cnt->gapLen);
        }

      }

    flag = (char)0;
    cnt = (contig_array + (signed long int)bal_ctg)->downwardConnect;
    for( ; !(cnt == ((struct connection *)NULL)); cnt = cnt->next)
      if(!(cnt->weight == 0))
      {
        if(cnt->inherit == 0)
        {
          if(flag == 0)
          {
            flag = (char)1;
            fprintf(fp, "\t#UP ");
          }

          linkCtg = cnt->contigID;
          char return_value_isLargerThanTwin_3;
          return_value_isLargerThanTwin_3=isLargerThanTwin(linkCtg);
          if(!(return_value_isLargerThanTwin_3 == 0))
            linkCtg=getTwinCtg(linkCtg);

          fprintf(fp, "%d:%d:%d ", index_array[(signed long int)linkCtg], cnt->weight, cnt->gapLen);
        }

      }

    fprintf(fp, "\n");
    return ret;
  }
}

// printTightString
// file seq.c line 43
extern void printTightString(char *tightSeq, signed int len)
{
  signed int i = 0;
  for( ; !(i >= len); i = i + 1)
  {
    char return_value_getCharInTightString_1;
    return_value_getCharInTightString_1=getCharInTightString(tightSeq, i);
    printf("%c", "ACTG"[(signed long int)(signed int)return_value_getCharInTightString_1]);
    if((1 + i) % 100 == 0)
      printf("\n");

  }
  printf("\n");
}

// print_kmer
// file inc/extfunc.h line 78
extern void print_kmer(struct _IO_FILE *fp, unsigned long long int kmer, char c)
{
  if(!(kmer == 0ull))
    fprintf(fp, "%llx", kmer);

  else
    fprintf(fp, "0x0");
  fprintf(fp, "%c", c);
}

// prlAllocatePreArc
// file arc.c line 55
extern struct prearc * prlAllocatePreArc(unsigned int edgeid, struct mem_manager *manager)
{
  struct prearc *newArc;
  void *return_value_getItem_1;
  return_value_getItem_1=getItem(manager);
  newArc = (struct prearc *)return_value_getItem_1;
  newArc->to_ed = edgeid;
  newArc->multiplicity = (unsigned int)1;
  newArc->next = (struct prearc *)(void *)0;
  return newArc;
}

// prlContig2nodes
// file inc/extfunc.h line 178
extern char prlContig2nodes(char *grapfile, signed int len_cut)
{
  signed long long int i;
  signed long long int num_seq;
  char name[256l];
  char *next_name;
  struct _IO_FILE *fp;
  const signed long int fp_array_size0 = (signed long int)thrd_num;
  unsigned long int threads[fp_array_size0];
  signed long int start_t;
  signed long int stop_t;
  const signed long int stop_t_array_size0 = (signed long int)(thrd_num + 1);
  unsigned char thrdSignal[stop_t_array_size0];
  const signed long int thrdSignal_array_size0 = (signed long int)thrd_num;
  struct parameter paras[thrdSignal_array_size0];
  signed int maxCtgLen;
  signed int minCtgLen;
  signed int nameLen;
  unsigned int lenSum;
  unsigned int contigId;
  WORDFILTER = ((unsigned long long int)1 << 2 * overlaplen) - (unsigned long int)1;
  time(&start_t);
  sprintf(name, "%s.contig", grapfile);
  fp=ckopen(name, "r");
  nameLen = 10;
  maxCtgLen = nameLen;
  minCtgLen = 1000;
  num_seq=readseqpar(&maxCtgLen, &minCtgLen, &nameLen, fp);
  printf("\nthere're %lld contigs in file: %s, max seq len %d, min seq len %d, max name len %d\n", num_seq, grapfile, maxCtgLen, minCtgLen, nameLen);
  maxReadLen = maxCtgLen;
  fclose(fp);
  time(&stop_t);
  printf("time spent on parse contigs file %ds\n", (signed int)(stop_t - start_t));
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(maxNameLen + 1) * sizeof(char) /*1ul*/ );
  next_name = (char *)return_value_ckalloc_1;
  seq_buffer_size = buffer_size * (unsigned int)2;
  max_read_c = seq_buffer_size / (unsigned int)20;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)buffer_size * sizeof(unsigned long long int) /*8ul*/ );
  kmerBuffer = (unsigned long long int *)return_value_ckalloc_2;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)buffer_size * sizeof(unsigned long long int) /*8ul*/ );
  hashBanBuffer = (unsigned long long int *)return_value_ckalloc_3;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)buffer_size * sizeof(char) /*1ul*/ );
  smallerBuffer = (char *)return_value_ckalloc_4;
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)seq_buffer_size * sizeof(char) /*1ul*/ );
  seqBuffer = (char *)return_value_ckalloc_5;
  void *return_value_ckalloc_6;
  return_value_ckalloc_6=ckalloc((unsigned long int)max_read_c * sizeof(signed int) /*4ul*/ );
  lenBuffer = (signed int *)return_value_ckalloc_6;
  void *return_value_ckalloc_7;
  return_value_ckalloc_7=ckalloc((unsigned long int)(max_read_c + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  indexArray = (unsigned int *)return_value_ckalloc_7;
  void *return_value_ckalloc_8;
  return_value_ckalloc_8=ckalloc((unsigned long int)(max_read_c + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  seqBreakers = (unsigned int *)return_value_ckalloc_8;
  void *return_value_ckalloc_9;
  return_value_ckalloc_9=ckalloc((unsigned long int)max_read_c * sizeof(signed int) /*4ul*/ );
  ctgIdArray = (signed int *)return_value_ckalloc_9;
  fp=ckopen(name, "r");
  void *return_value_ckalloc_10;
  return_value_ckalloc_10=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(char *) /*8ul*/ );
  rcSeq = (char **)return_value_ckalloc_10;
  {
    void *return_value_ckalloc_11;
    return_value_ckalloc_11=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(signed long long int) /*8ul*/ );
    kmerCounter = (signed long long int *)return_value_ckalloc_11;
    void *return_value_ckalloc_12;
    return_value_ckalloc_12=ckalloc((unsigned long int)thrd_num * sizeof(struct kmerSet_st *) /*8ul*/ );
    KmerSets = (struct kmerSet_st **)return_value_ckalloc_12;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
    {
      KmerSets[i]=init_kmerset((unsigned long long int)1024, 0.77f);
      thrdSignal[i + (signed long int)1] = (unsigned char)0;
      paras[i].threadID = (unsigned char)i;
      paras[i].mainSignal = &thrdSignal[(signed long int)0];
      paras[i].selfSignal = &thrdSignal[i + (signed long int)1];
      kmerCounter[i + (signed long int)1] = (signed long long int)0;
      void *return_value_ckalloc_13;
      return_value_ckalloc_13=ckalloc((unsigned long int)maxCtgLen * sizeof(char) /*1ul*/ );
      rcSeq[i + (signed long int)1] = (char *)return_value_ckalloc_13;
    }
    creatThrds_link1(threads, paras);
  }
  kmerCounter[(signed long int)0] = (signed long long int)0;
  thrdSignal[(signed long int)0] = (unsigned char)kmerCounter[(signed long int)0];
  kmer_c = (volatile unsigned int)thrdSignal[(signed long int)0];
  time(&start_t);
  indexArray[(signed long int)0] = (unsigned int)0;
  seqBreakers[(signed long int)0] = indexArray[(signed long int)0];
  i = (signed long long int)seqBreakers[(signed long int)0];
  lenSum = (unsigned int)i;
  read_c = lenSum;
  readseq1by1(seqBuffer + (signed long int)seqBreakers[(signed long int)read_c], next_name, &lenBuffer[(signed long int)read_c], fp, (signed long long int)-1);
  signed int return_value_feof_14;
  _Bool tmp_if_expr_17;
  do
  {
    return_value_feof_14=feof(fp);
    if(!(return_value_feof_14 == 0))
      break;

    signed int return_value_getID_15;
    return_value_getID_15=getID(next_name);
    contigId = (unsigned int)return_value_getID_15;
    readseq1by1(seqBuffer + (signed long int)seqBreakers[(signed long int)read_c], next_name, &lenBuffer[(signed long int)read_c], fp, (signed long long int)1);
    i = i + 1ll;
    if(i % 10000000l == 0l)
      printf("--- %lldth contigs\n", i);

    if(!(lenBuffer[(signed long int)read_c] >= 1 + overlaplen))
      tmp_if_expr_17 = (_Bool)1;

    else
      tmp_if_expr_17 = lenBuffer[(signed long int)read_c] < len_cut ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_17)
    {
      signed int return_value_getID_16;
      return_value_getID_16=getID(next_name);
      contigId = (unsigned int)return_value_getID_16;
      continue;
    }

    ctgIdArray[(signed long int)read_c] = (signed int)(contigId > (unsigned int)0 ? (signed long int)contigId : i);
    lenSum = lenSum + (unsigned int)lenBuffer[(signed long int)read_c];
    kmer_c = kmer_c + (volatile unsigned int)((lenBuffer[(signed long int)read_c] - overlaplen) + 1);
    read_c = read_c + 1u;
    seqBreakers[(signed long int)read_c] = lenSum;
    indexArray[(signed long int)read_c] = kmer_c;
    if(read_c == max_read_c || !(buffer_size >= kmer_c + (unsigned int)maxCtgLen + 1u + -((unsigned int)overlaplen)) || !(seq_buffer_size >= lenSum + (unsigned int)maxCtgLen))
    {
      kmerCounter[(signed long int)0] = kmerCounter[(signed long int)0] + (signed long long int)kmer_c;
      sendWorkSignal_link1((unsigned char)2, thrdSignal);
      sendWorkSignal_link1((unsigned char)1, thrdSignal);
      lenSum = (unsigned int)0;
      read_c = lenSum;
      kmer_c = read_c;
    }

  }
  while((_Bool)1);
  if(!(read_c == 0u))
  {
    kmerCounter[(signed long int)0] = kmerCounter[(signed long int)0] + (signed long long int)kmer_c;
    sendWorkSignal_link1((unsigned char)2, thrdSignal);
    sendWorkSignal_link1((unsigned char)1, thrdSignal);
  }

  sendWorkSignal_link1((unsigned char)3, thrdSignal);
  thread_wait_link1(threads);
  time(&stop_t);
  printf("time spent on hash reads: %ds\n", (signed int)(stop_t - start_t));
  {
    unsigned long long int alloCounter = (unsigned long long int)0;
    unsigned long long int allKmerCounter = (unsigned long long int)0;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
    {
      signed long long int return_value_count_kmerset_18;
      return_value_count_kmerset_18=count_kmerset(KmerSets[i]);
      alloCounter = alloCounter + (unsigned long long int)return_value_count_kmerset_18;
      allKmerCounter = allKmerCounter + (unsigned long long int)kmerCounter[i + (signed long int)1];
      free((void *)rcSeq[i + (signed long int)1]);
    }
    printf("%lli nodes allocated, %lli kmer in reads, %lli kmer processed\n", alloCounter, kmerCounter[(signed long int)0], allKmerCounter);
  }
  free((void *)rcSeq);
  free((void *)kmerCounter);
  free((void *)seqBuffer);
  free((void *)lenBuffer);
  free((void *)indexArray);
  free((void *)seqBreakers);
  free((void *)ctgIdArray);
  free((void *)kmerBuffer);
  free((void *)hashBanBuffer);
  free((void *)smallerBuffer);
  free((void *)next_name);
  fclose(fp);
  return (char)1;
}

// prlDestroyPreArcMem
// file arc.c line 35
extern void prlDestroyPreArcMem()
{
  if(!(preArc_mem_managers == ((struct mem_manager **)NULL)))
  {
    signed int i = 0;
    for( ; !(i >= thrd_num); i = i + 1)
      freeMem_manager(preArc_mem_managers[(signed long int)i]);
    free((void *)preArc_mem_managers);
    preArc_mem_managers = (struct mem_manager **)(void *)0;
  }

}

// prlLongRead2Ctg
// file inc/extfunc.h line 177
extern void prlLongRead2Ctg(char *libfile, char *outfile)
{
  signed long long int i;
  char *src_name;
  char *next_name;
  char name[256l];
  struct _IO_FILE *outfp2;
  signed int maxReadNum;
  signed int prlLongRead2Ctg__1__libNo;
  signed int prevLibNo;
  char flag;
  char pairs = (char)0;
  const signed long int pairs_array_size0 = (signed long int)thrd_num;
  unsigned long int threads[pairs_array_size0];
  const signed long int threads_array_size0 = (signed long int)(thrd_num + 1);
  unsigned char thrdSignal[threads_array_size0];
  const signed long int thrdSignal_array_size0 = (signed long int)thrd_num;
  struct parameter paras[thrdSignal_array_size0];
  maxReadLen = 0;
  maxNameLen = 256;
  scan_libInfo(libfile);
  if(maxReadLen == 0)
    maxReadLen = 100;

  signed int longReadLen;
  longReadLen=getMaxLongReadLen(num_libs);
  if(longReadLen >= 1)
  {
    maxReadLen4all = maxReadLen < longReadLen ? longReadLen : maxReadLen;
    printf("In file: %s, long read len %d, max name len %d\n\n", libfile, longReadLen, maxNameLen);
    maxReadLen = longReadLen;
    void *return_value_ckalloc_1;
    return_value_ckalloc_1=ckalloc((unsigned long int)(maxNameLen + 1) * sizeof(char) /*1ul*/ );
    src_name = (char *)return_value_ckalloc_1;
    void *return_value_ckalloc_2;
    return_value_ckalloc_2=ckalloc((unsigned long int)(maxNameLen + 1) * sizeof(char) /*1ul*/ );
    next_name = (char *)return_value_ckalloc_2;
    void *return_value_ckalloc_3;
    return_value_ckalloc_3=ckalloc((unsigned long int)buffer_size_link2 * sizeof(unsigned long long int) /*8ul*/ );
    kmerBuffer_link2 = (unsigned long long int *)return_value_ckalloc_3;
    void *return_value_ckalloc_4;
    return_value_ckalloc_4=ckalloc((unsigned long int)buffer_size_link2 * sizeof(unsigned long long int) /*8ul*/ );
    hashBanBuffer_link2 = (unsigned long long int *)return_value_ckalloc_4;
    void *return_value_ckalloc_5;
    return_value_ckalloc_5=ckalloc((unsigned long int)buffer_size_link2 * sizeof(struct kmer_st *) /*8ul*/ );
    nodeBuffer = (struct kmer_st **)return_value_ckalloc_5;
    void *return_value_ckalloc_6;
    return_value_ckalloc_6=ckalloc((unsigned long int)buffer_size_link2 * sizeof(char) /*1ul*/ );
    smallerBuffer_link1 = (char *)return_value_ckalloc_6;
    maxReadNum = buffer_size_link2 / ((maxReadLen - overlaplen) + 1);
    maxReadNum = maxReadNum % 2 == 0 ? maxReadNum : maxReadNum - 1;
    void *return_value_ckalloc_7;
    return_value_ckalloc_7=ckalloc((unsigned long int)maxReadNum * sizeof(char *) /*8ul*/ );
    seqBuffer_link2 = (char **)return_value_ckalloc_7;
    void *return_value_ckalloc_8;
    return_value_ckalloc_8=ckalloc((unsigned long int)maxReadNum * sizeof(signed int) /*4ul*/ );
    lenBuffer_link2 = (signed int *)return_value_ckalloc_8;
    void *return_value_ckalloc_9;
    return_value_ckalloc_9=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(unsigned int) /*4ul*/ );
    indexArray_link2 = (unsigned int *)return_value_ckalloc_9;
    void *return_value_ckalloc_10;
    return_value_ckalloc_10=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(unsigned int) /*4ul*/ );
    ctgIdArray_link1 = (unsigned int *)return_value_ckalloc_10;
    void *return_value_ckalloc_11;
    return_value_ckalloc_11=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(signed int) /*4ul*/ );
    posArray = (signed int *)return_value_ckalloc_11;
    void *return_value_ckalloc_12;
    return_value_ckalloc_12=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(char) /*1ul*/ );
    orienArray = (char *)return_value_ckalloc_12;
    void *return_value_ckalloc_13;
    return_value_ckalloc_13=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(char) /*1ul*/ );
    footprint = (char *)return_value_ckalloc_13;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)maxReadNum); i = i + 1ll)
    {
      void *return_value_ckalloc_14;
      return_value_ckalloc_14=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
      seqBuffer_link2[i] = (char *)return_value_ckalloc_14;
    }
    void *return_value_ckalloc_15;
    return_value_ckalloc_15=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(char *) /*8ul*/ );
    rcSeq_link2 = (char **)return_value_ckalloc_15;
    void *return_value_ckalloc_16;
    return_value_ckalloc_16=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(signed int) /*4ul*/ );
    deletion = (signed int *)return_value_ckalloc_16;
    thrdSignal[(signed long int)0] = (unsigned char)0;
    deletion[(signed long int)0] = 0;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
    {
      void *return_value_ckalloc_17;
      return_value_ckalloc_17=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
      rcSeq_link2[i + (signed long int)1] = (char *)return_value_ckalloc_17;
      deletion[i + (signed long int)1] = 0;
      thrdSignal[i + (signed long int)1] = (unsigned char)0;
      paras[i].threadID = (unsigned char)i;
      paras[i].mainSignal = &thrdSignal[(signed long int)0];
      paras[i].selfSignal = &thrdSignal[i + (signed long int)1];
    }
    creatThrds_link3(threads, paras);
    if(contig_array == ((struct contig *)NULL))
      basicContigInfo(outfile);

    sprintf(name, "%s.longReadInGap", outfile);
    outfp2=ckopen(name, "wb");
    readCounter = (signed long long int)0;
    i = (signed long long int)prlLongRead2Ctg__1__libNo;
    read_c_link2 = (signed int)i;
    n_solexa = (signed long long int)read_c_link2;
    kmer_c_link2 = (signed int)n_solexa;
    prevLibNo = -1;
    do
    {
      flag=read1seqInLib(seqBuffer_link2[(signed long int)read_c_link2], next_name, &lenBuffer_link2[(signed long int)read_c_link2], &prlLongRead2Ctg__1__libNo, pairs, (unsigned char)4);
      if((signed int)flag == 0)
        break;

      if(!(prlLongRead2Ctg__1__libNo == prevLibNo))
      {
        prevLibNo = prlLongRead2Ctg__1__libNo;
        ALIGNLEN = (lib_array + (signed long int)prlLongRead2Ctg__1__libNo)->map_len;
        ALIGNLEN = ALIGNLEN < 35 ? 35 : ALIGNLEN;
        printf("Map_len %d\n", ALIGNLEN);
      }

      i = i + 1ll;
      if(i % 100000000l == 0l)
        printf("--- %lldth reads\n", i);

      indexArray_link2[(signed long int)read_c_link2] = (unsigned int)kmer_c_link2;
      if(lenBuffer_link2[(signed long int)read_c_link2] >= 1 + overlaplen)
        kmer_c_link2 = kmer_c_link2 + (lenBuffer_link2[(signed long int)read_c_link2] - overlaplen) + 1;

      read_c_link2 = read_c_link2 + 1;
      if(read_c_link2 == maxReadNum)
      {
        indexArray_link2[(signed long int)read_c_link2] = (unsigned int)kmer_c_link2;
        sendWorkSignal_link3((unsigned char)2, thrdSignal);
        sendWorkSignal_link3((unsigned char)1, thrdSignal);
        sendWorkSignal_link3((unsigned char)3, thrdSignal);
        recordLongRead(outfp2);
        kmer_c_link2 = 0;
        read_c_link2 = 0;
      }

    }
    while((_Bool)1);
    if(!(read_c_link2 == 0))
    {
      indexArray_link2[(signed long int)read_c_link2] = (unsigned int)kmer_c_link2;
      sendWorkSignal_link3((unsigned char)2, thrdSignal);
      sendWorkSignal_link3((unsigned char)1, thrdSignal);
      sendWorkSignal_link3((unsigned char)3, thrdSignal);
      recordLongRead(outfp2);
      printf("Output %lld out of %lld (%.1f)%% reads in gaps\n", readsInGap, readCounter, ((float)readsInGap / (float)readCounter) * (float)100);
    }

    sendWorkSignal_link3((unsigned char)5, thrdSignal);
    thread_wait_link3(threads);
    fclose(outfp2);
    free_libs();
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
    {
      deletion[(signed long int)0] = deletion[(signed long int)0] + deletion[i + (signed long int)1];
      free((void *)rcSeq_link2[i + (signed long int)1]);
    }
    printf("%d reads deleted\n", deletion[(signed long int)0]);
    free((void *)rcSeq_link2);
    free((void *)deletion);
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)maxReadNum); i = i + 1ll)
      free((void *)seqBuffer_link2[i]);
    free((void *)seqBuffer_link2);
    free((void *)lenBuffer_link2);
    free((void *)indexArray_link2);
    free((void *)kmerBuffer_link2);
    free((void *)smallerBuffer_link1);
    free((void *)hashBanBuffer_link2);
    free((void *)nodeBuffer);
    free((void *)ctgIdArray_link1);
    free((void *)posArray);
    free((void *)orienArray);
    free((void *)footprint);
    free((void *)src_name);
    free((void *)next_name);
  }

}

// prlRead2Ctg
// file inc/extfunc.h line 176
extern void prlRead2Ctg(char *libfile, char *outfile)
{
  signed long long int i;
  char *src_name;
  char *next_name;
  char name[256l];
  struct _IO_FILE *fo;
  struct _IO_FILE *outfp2 = (struct _IO_FILE *)(void *)0;
  signed int maxReadNum;
  signed int prlRead2Ctg__1__libNo;
  signed int prevLibNo;
  signed int insSize;
  char flag;
  char pairs = (char)1;
  const signed long int pairs_array_size0 = (signed long int)thrd_num;
  unsigned long int threads[pairs_array_size0];
  const signed long int threads_array_size0 = (signed long int)(thrd_num + 1);
  unsigned char thrdSignal[threads_array_size0];
  const signed long int thrdSignal_array_size0 = (signed long int)thrd_num;
  struct parameter paras[thrdSignal_array_size0];
  maxReadLen = 0;
  maxNameLen = 256;
  scan_libInfo(libfile);
  alloc_pe_mem(num_libs);
  if(maxReadLen == 0)
    maxReadLen = 100;

  printf("In file: %s, max seq len %d, max name len %d\n\n", libfile, maxReadLen, maxNameLen);
  if(!(maxReadLen4all >= maxReadLen))
    maxReadLen4all = maxReadLen;

  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(maxNameLen + 1) * sizeof(char) /*1ul*/ );
  src_name = (char *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)(maxNameLen + 1) * sizeof(char) /*1ul*/ );
  next_name = (char *)return_value_ckalloc_2;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)buffer_size_link2 * sizeof(unsigned long long int) /*8ul*/ );
  kmerBuffer_link2 = (unsigned long long int *)return_value_ckalloc_3;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)buffer_size_link2 * sizeof(unsigned long long int) /*8ul*/ );
  hashBanBuffer_link2 = (unsigned long long int *)return_value_ckalloc_4;
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)buffer_size_link2 * sizeof(struct kmer_st *) /*8ul*/ );
  nodeBuffer = (struct kmer_st **)return_value_ckalloc_5;
  void *return_value_ckalloc_6;
  return_value_ckalloc_6=ckalloc((unsigned long int)buffer_size_link2 * sizeof(char) /*1ul*/ );
  smallerBuffer_link1 = (char *)return_value_ckalloc_6;
  maxReadNum = buffer_size_link2 / ((maxReadLen - overlaplen) + 1);
  maxReadNum = maxReadNum % 2 == 0 ? maxReadNum : maxReadNum - 1;
  void *return_value_ckalloc_7;
  return_value_ckalloc_7=ckalloc((unsigned long int)maxReadNum * sizeof(char *) /*8ul*/ );
  seqBuffer_link2 = (char **)return_value_ckalloc_7;
  void *return_value_ckalloc_8;
  return_value_ckalloc_8=ckalloc((unsigned long int)maxReadNum * sizeof(signed int) /*4ul*/ );
  lenBuffer_link2 = (signed int *)return_value_ckalloc_8;
  void *return_value_ckalloc_9;
  return_value_ckalloc_9=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(unsigned int) /*4ul*/ );
  indexArray_link2 = (unsigned int *)return_value_ckalloc_9;
  void *return_value_ckalloc_10;
  return_value_ckalloc_10=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(unsigned int) /*4ul*/ );
  ctgIdArray_link1 = (unsigned int *)return_value_ckalloc_10;
  void *return_value_ckalloc_11;
  return_value_ckalloc_11=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(signed int) /*4ul*/ );
  posArray = (signed int *)return_value_ckalloc_11;
  void *return_value_ckalloc_12;
  return_value_ckalloc_12=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(char) /*1ul*/ );
  orienArray = (char *)return_value_ckalloc_12;
  void *return_value_ckalloc_13;
  return_value_ckalloc_13=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(char) /*1ul*/ );
  footprint = (char *)return_value_ckalloc_13;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)maxReadNum); i = i + 1ll)
  {
    void *return_value_ckalloc_14;
    return_value_ckalloc_14=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
    seqBuffer_link2[i] = (char *)return_value_ckalloc_14;
  }
  void *return_value_ckalloc_15;
  return_value_ckalloc_15=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(char *) /*8ul*/ );
  rcSeq_link2 = (char **)return_value_ckalloc_15;
  void *return_value_ckalloc_16;
  return_value_ckalloc_16=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(signed int) /*4ul*/ );
  deletion = (signed int *)return_value_ckalloc_16;
  thrdSignal[(signed long int)0] = (unsigned char)0;
  deletion[(signed long int)0] = 0;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
  {
    void *return_value_ckalloc_17;
    return_value_ckalloc_17=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
    rcSeq_link2[i + (signed long int)1] = (char *)return_value_ckalloc_17;
    deletion[i + (signed long int)1] = 0;
    thrdSignal[i + (signed long int)1] = (unsigned char)0;
    paras[i].threadID = (unsigned char)i;
    paras[i].mainSignal = &thrdSignal[(signed long int)0];
    paras[i].selfSignal = &thrdSignal[i + (signed long int)1];
  }
  creatThrds_link3(threads, paras);
  if(contig_array == ((struct contig *)NULL))
    basicContigInfo(outfile);

  sprintf(name, "%s.readInGap", outfile);
  outfp2=ckopen(name, "wb");
  sprintf(name, "%s.readOnContig", outfile);
  fo=ckopen(name, "w");
  fprintf(fo, "read\tcontig\tpos\n");
  mapCounter = (signed long long int)0;
  readCounter = mapCounter;
  readsInGap = (signed long long int)0;
  gradsCounter = (signed int)readsInGap;
  readNumBack = (signed long long int)gradsCounter;
  prlRead2Ctg__1__libNo = (signed int)readNumBack;
  i = (signed long long int)prlRead2Ctg__1__libNo;
  read_c_link2 = (signed int)i;
  n_solexa = (signed long long int)read_c_link2;
  kmer_c_link2 = (signed int)n_solexa;
  prevLibNo = -1;
  signed int tmp_if_expr_18;
  do
  {
    flag=read1seqInLib(seqBuffer_link2[(signed long int)read_c_link2], next_name, &lenBuffer_link2[(signed long int)read_c_link2], &prlRead2Ctg__1__libNo, pairs, (unsigned char)0);
    if((signed int)flag == 0)
      break;

    if(!(prlRead2Ctg__1__libNo == prevLibNo))
    {
      prevLibNo = prlRead2Ctg__1__libNo;
      insSize = (lib_array + (signed long int)prlRead2Ctg__1__libNo)->avg_ins;
      ALIGNLEN = (lib_array + (signed long int)prlRead2Ctg__1__libNo)->map_len;
      if(insSize >= 1001)
        ALIGNLEN = ALIGNLEN < 35 ? 35 : ALIGNLEN;

      else
        ALIGNLEN = ALIGNLEN < 32 ? 32 : ALIGNLEN;
      printf("current insert size %d, map_len %d\n", insSize, ALIGNLEN);
    }

    if(insSize >= 1001)
    {
      if(!(ALIGNLEN >= lenBuffer_link2[(signed long int)read_c_link2] / 2 + 1))
        tmp_if_expr_18 = lenBuffer_link2[(signed long int)read_c_link2] / 2 + 1;

      else
        tmp_if_expr_18 = ALIGNLEN;
      ALIGNLEN = tmp_if_expr_18;
    }

    i = i + 1ll;
    if(i % 100000000l == 0l)
      printf("--- %lldth reads\n", i);

    indexArray_link2[(signed long int)read_c_link2] = (unsigned int)kmer_c_link2;
    if(lenBuffer_link2[(signed long int)read_c_link2] >= 1 + overlaplen)
      kmer_c_link2 = kmer_c_link2 + (lenBuffer_link2[(signed long int)read_c_link2] - overlaplen) + 1;

    read_c_link2 = read_c_link2 + 1;
    if(read_c_link2 == maxReadNum)
    {
      indexArray_link2[(signed long int)read_c_link2] = (unsigned int)kmer_c_link2;
      sendWorkSignal_link3((unsigned char)2, thrdSignal);
      sendWorkSignal_link3((unsigned char)1, thrdSignal);
      sendWorkSignal_link3((unsigned char)3, thrdSignal);
      recordAlldgn(fo, insSize, outfp2);
      kmer_c_link2 = 0;
      read_c_link2 = 0;
    }

  }
  while((_Bool)1);
  if(!(read_c_link2 == 0))
  {
    indexArray_link2[(signed long int)read_c_link2] = (unsigned int)kmer_c_link2;
    sendWorkSignal_link3((unsigned char)2, thrdSignal);
    sendWorkSignal_link3((unsigned char)1, thrdSignal);
    sendWorkSignal_link3((unsigned char)3, thrdSignal);
    recordAlldgn(fo, insSize, outfp2);
    printf("Output %lld out of %lld (%.1f)%% reads in gaps\n", readsInGap, readCounter, ((float)readsInGap / (float)readCounter) * (float)100);
  }

  if(!(readCounter == 0ll))
    printf("%lld out of %lld (%.1f)%% reads mapped to contigs\n", mapCounter, readCounter, ((float)mapCounter / (float)readCounter) * (float)100);

  sendWorkSignal_link3((unsigned char)5, thrdSignal);
  thread_wait_link3(threads);
  fclose(fo);
  sprintf(name, "%s.peGrads", outfile);
  fo=ckopen(name, "w");
  fprintf(fo, "grads&num: %d\t%lld\t%d\n", gradsCounter, n_solexa, maxReadLen4all);
  if(!(pairs == 0))
  {
    if(!(gradsCounter == 0))
      printf("%d pe insert size, the largest boundary is %lld\n\n", gradsCounter, (pes + (signed long int)(gradsCounter - 1))->PE_bound);

    else
      printf("no paired reads found\n");
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)gradsCounter); i = i + 1ll)
      fprintf(fo, "%d\t%lld\t%d\t%d\n", (pes + i)->insertS, (pes + i)->PE_bound, (pes + i)->rank, (pes + i)->pair_num_cut);
  }

  fclose(fo);
  fclose(outfp2);
  free_pe_mem();
  free_libs();
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
  {
    deletion[(signed long int)0] = deletion[(signed long int)0] + deletion[i + (signed long int)1];
    free((void *)rcSeq_link2[i + (signed long int)1]);
  }
  printf("%d reads deleted\n", deletion[(signed long int)0]);
  free((void *)rcSeq_link2);
  free((void *)deletion);
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)maxReadNum); i = i + 1ll)
    free((void *)seqBuffer_link2[i]);
  free((void *)seqBuffer_link2);
  free((void *)lenBuffer_link2);
  free((void *)indexArray_link2);
  free((void *)kmerBuffer_link2);
  free((void *)smallerBuffer_link1);
  free((void *)hashBanBuffer_link2);
  free((void *)nodeBuffer);
  free((void *)ctgIdArray_link1);
  free((void *)posArray);
  free((void *)orienArray);
  free((void *)footprint);
  free((void *)src_name);
  free((void *)next_name);
  if(!(contig_array == ((struct contig *)NULL)))
  {
    free((void *)contig_array);
    contig_array = (struct contig *)(void *)0;
  }

}

// prlRead2HashTable
// file inc/extfunc.h line 194
extern char prlRead2HashTable(char *libfile, char *outfile)
{
  signed long long int i;
  char *next_name;
  char name[256l];
  struct _IO_FILE *fo;
  signed long int start_t;
  signed long int stop_t;
  signed int maxReadNum;
  signed int prlRead2HashTable__1__libNo;
  const signed long int libNo_array_size0 = (signed long int)thrd_num;
  unsigned long int threads[libNo_array_size0];
  const signed long int threads_array_size0 = (signed long int)(thrd_num + 1);
  unsigned char thrdSignal[threads_array_size0];
  const signed long int thrdSignal_array_size0 = (signed long int)thrd_num;
  struct parameter paras[thrdSignal_array_size0];
  char flag;
  char pairs = (char)0;
  WORDFILTER = ((unsigned long long int)1 << 2 * overlaplen) - (unsigned long int)1;
  maxReadLen = 0;
  maxNameLen = 256;
  scan_libInfo(libfile);
  alloc_pe_mem(num_libs);
  if(maxReadLen == 0)
    maxReadLen = 100;

  maxReadLen4all = maxReadLen;
  printf("In %s, %d libs, max seq len %d, max name len %d\n\n", libfile, num_libs, maxReadLen, maxNameLen);
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(maxNameLen + 1) * sizeof(char) /*1ul*/ );
  next_name = (char *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)buffer_size_link1 * sizeof(unsigned long long int) /*8ul*/ );
  kmerBuffer_link1 = (unsigned long long int *)return_value_ckalloc_2;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)buffer_size_link1 * sizeof(unsigned long long int) /*8ul*/ );
  hashBanBuffer_link1 = (unsigned long long int *)return_value_ckalloc_3;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)buffer_size_link1 * sizeof(char) /*1ul*/ );
  prevcBuffer = (char *)return_value_ckalloc_4;
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)buffer_size_link1 * sizeof(char) /*1ul*/ );
  nextcBuffer = (char *)return_value_ckalloc_5;
  maxReadNum = buffer_size_link1 / ((maxReadLen - overlaplen) + 1);
  void *return_value_ckalloc_6;
  return_value_ckalloc_6=ckalloc((unsigned long int)maxReadNum * sizeof(char *) /*8ul*/ );
  seqBuffer_link1 = (char **)return_value_ckalloc_6;
  void *return_value_ckalloc_7;
  return_value_ckalloc_7=ckalloc((unsigned long int)maxReadNum * sizeof(signed int) /*4ul*/ );
  lenBuffer_link1 = (signed int *)return_value_ckalloc_7;
  void *return_value_ckalloc_8;
  return_value_ckalloc_8=ckalloc((unsigned long int)maxReadNum * sizeof(signed int) /*4ul*/ );
  indexArray_link1 = (signed int *)return_value_ckalloc_8;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)maxReadNum); i = i + 1ll)
  {
    void *return_value_ckalloc_9;
    return_value_ckalloc_9=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
    seqBuffer_link1[i] = (char *)return_value_ckalloc_9;
  }
  void *return_value_ckalloc_10;
  return_value_ckalloc_10=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(char *) /*8ul*/ );
  rcSeq_link1 = (char **)return_value_ckalloc_10;
  {
    void *return_value_ckalloc_11;
    return_value_ckalloc_11=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(signed long long int) /*8ul*/ );
    kmerCounter_link1 = (signed long long int *)return_value_ckalloc_11;
    void *return_value_ckalloc_12;
    return_value_ckalloc_12=ckalloc((unsigned long int)thrd_num * sizeof(struct kmerSet_st *) /*8ul*/ );
    KmerSets = (struct kmerSet_st **)return_value_ckalloc_12;
    unsigned long long int init_size = (unsigned long long int)1024;
    unsigned long long int k = (unsigned long long int)0;
    if(!(initKmerSetSize == 0))
    {
      init_size = (unsigned long long int)((((double)initKmerSetSize * (double)1024.0f * (double)1024.0f * (double)1024.0f) / (double)thrd_num) / (double)16);
      do
        k = k + 1ull;
      while(!(0xFFFFFFLLU * k >= init_size));
    }

    i = (signed long long int)0;
    for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
    {
      KmerSets[i]=init_kmerset(initKmerSetSize != 0 ? k * 0xFFFFFFLLU : init_size, 0.77f);
      unsigned long long int tmp = initKmerSetSize != 0 ? k * 0xFFFFFFLLU : init_size;
      thrdSignal[i + (signed long int)1] = (unsigned char)0;
      paras[i].threadID = (unsigned char)i;
      paras[i].mainSignal = &thrdSignal[(signed long int)0];
      paras[i].selfSignal = &thrdSignal[i + (signed long int)1];
      kmerCounter_link1[i + (signed long int)1] = (signed long long int)0;
      void *return_value_ckalloc_13;
      return_value_ckalloc_13=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
      rcSeq_link1[i + (signed long int)1] = (char *)return_value_ckalloc_13;
    }
    creatThrds_link2(threads, paras);
  }
  kmerCounter_link1[(signed long int)0] = (signed long long int)0;
  thrdSignal[(signed long int)0] = (unsigned char)kmerCounter_link1[(signed long int)0];
  time(&start_t);
  gradsCounter = 0;
  readNumBack = (signed long long int)gradsCounter;
  prlRead2HashTable__1__libNo = (signed int)readNumBack;
  i = (signed long long int)prlRead2HashTable__1__libNo;
  read_c_link1 = (signed int)i;
  n_solexa = (signed long long int)read_c_link1;
  kmer_c_link1 = (volatile signed int)n_solexa;
  do
  {
    flag=read1seqInLib(seqBuffer_link1[(signed long int)read_c_link1], next_name, &lenBuffer_link1[(signed long int)read_c_link1], &prlRead2HashTable__1__libNo, pairs, (unsigned char)1);
    if((signed int)flag == 0)
      break;

    i = i + 1ll;
    if(i % 100000000l == 0l)
      printf("--- %lldth reads\n", i);

    if(!(lenBuffer_link1[(signed long int)read_c_link1] >= 0))
      printf("read len %d\n", lenBuffer_link1[(signed long int)read_c_link1]);

    if(lenBuffer_link1[(signed long int)read_c_link1] >= 1 + overlaplen)
    {
      indexArray_link1[(signed long int)read_c_link1] = kmer_c_link1;
      kmer_c_link1 = kmer_c_link1 + (lenBuffer_link1[(signed long int)read_c_link1] - overlaplen) + 1;
      read_c_link1 = read_c_link1 + 1;
      if(read_c_link1 == maxReadNum)
      {
        kmerCounter_link1[(signed long int)0] = kmerCounter_link1[(signed long int)0] + (signed long long int)kmer_c_link1;
        sendWorkSignal_link2((unsigned char)2, thrdSignal);
        sendWorkSignal_link2((unsigned char)1, thrdSignal);
        read_c_link1 = 0;
        kmer_c_link1 = read_c_link1;
      }

    }

  }
  while((_Bool)1);
  if(!(read_c_link1 == 0))
  {
    kmerCounter_link1[(signed long int)0] = kmerCounter_link1[(signed long int)0] + (signed long long int)kmer_c_link1;
    sendWorkSignal_link2((unsigned char)2, thrdSignal);
    sendWorkSignal_link2((unsigned char)1, thrdSignal);
  }

  time(&stop_t);
  printf("time spent on hash reads: %ds, %lld reads processed\n", (signed int)(stop_t - start_t), i);
  if(!(pairs == 0))
  {
    if(!(gradsCounter == 0))
      printf("%d pe insert size, the largest boundary is %lld\n\n", gradsCounter, (pes + (signed long int)(gradsCounter - 1))->PE_bound);

    else
      printf("no paired reads found\n");
    sprintf(name, "%s.peGrads", outfile);
    fo=ckopen(name, "w");
    fprintf(fo, "grads&num: %d\t%lld\n", gradsCounter, n_solexa);
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)gradsCounter); i = i + 1ll)
      fprintf(fo, "%d\t%lld\t%d\n", (pes + i)->insertS, (pes + i)->PE_bound, (pes + i)->rank);
    fclose(fo);
  }

  free_pe_mem();
  free_libs();
  {
    unsigned long long int alloCounter = (unsigned long long int)0;
    unsigned long long int allKmerCounter = (unsigned long long int)0;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
    {
      signed long long int return_value_count_kmerset_14;
      return_value_count_kmerset_14=count_kmerset(KmerSets[i]);
      alloCounter = alloCounter + (unsigned long long int)return_value_count_kmerset_14;
      allKmerCounter = allKmerCounter + (unsigned long long int)kmerCounter_link1[i + (signed long int)1];
      free((void *)rcSeq_link1[i + (signed long int)1]);
    }
    printf("%lli nodes allocated, %lli kmer in reads, %lli kmer processed\n", alloCounter, kmerCounter_link1[(signed long int)0], allKmerCounter);
    fflush(stdout);
  }
  free((void *)rcSeq_link1);
  free((void *)kmerCounter_link1);
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)maxReadNum); i = i + 1ll)
    free((void *)seqBuffer_link1[i]);
  free((void *)seqBuffer_link1);
  free((void *)lenBuffer_link1);
  free((void *)indexArray_link1);
  free((void *)kmerBuffer_link1);
  free((void *)hashBanBuffer_link1);
  free((void *)nextcBuffer);
  free((void *)prevcBuffer);
  free((void *)next_name);
  if(!(deLowKmer == 0))
  {
    time(&start_t);
    deLowCov(thrdSignal);
    time(&stop_t);
    printf("time spent on delowcvgNode %ds\n", (signed int)(stop_t - start_t));
  }

  time(&start_t);
  Mark1in1outNode_link1(thrdSignal);
  freqStat(outfile);
  time(&stop_t);
  printf("time spent on marking linear nodes %ds\n", (signed int)(stop_t - start_t));
  fflush(stdout);
  sendWorkSignal_link2((unsigned char)3, thrdSignal);
  thread_wait_link2(threads);
  return (char)1;
}

// prlRead2edge
// file inc/extfunc.h line 102
extern void prlRead2edge(char *libfile, char *outfile)
{
  signed long long int i;
  char name[256l];
  char *src_name;
  char *next_name;
  struct _IO_FILE *outfp = (struct _IO_FILE *)(void *)0;
  signed int maxReadNum;
  signed int prlRead2edge__1__libNo;
  char flag;
  char pairs = (char)0;
  const signed long int pairs_array_size0 = (signed long int)thrd_num;
  unsigned long int threads[pairs_array_size0];
  const signed long int threads_array_size0 = (signed long int)(thrd_num + 1);
  unsigned char thrdSignal[threads_array_size0];
  const signed long int thrdSignal_array_size0 = (signed long int)thrd_num;
  struct parameter paras[thrdSignal_array_size0];
  maxReadLen = 0;
  maxNameLen = 256;
  scan_libInfo(libfile);
  alloc_pe_mem(num_libs);
  if(maxReadLen == 0)
    maxReadLen = 100;

  maxReadLen4all = maxReadLen;
  printf("In file: %s, max seq len %d, max name len %d\n\n", libfile, maxReadLen, maxNameLen);
  if(!(repsTie == 0))
  {
    sprintf(name, "%s.path", outfile);
    outfp=ckopen(name, "wb");
  }

  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)(maxNameLen + 1) * sizeof(char) /*1ul*/ );
  src_name = (char *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)(maxNameLen + 1) * sizeof(char) /*1ul*/ );
  next_name = (char *)return_value_ckalloc_2;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)buffer_size_link3 * sizeof(unsigned long long int) /*8ul*/ );
  kmerBuffer_link3 = (unsigned long long int *)return_value_ckalloc_3;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)buffer_size_link3 * sizeof(unsigned long long int) /*8ul*/ );
  mixBuffer = (unsigned long long int *)return_value_ckalloc_4;
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)buffer_size_link3 * sizeof(unsigned long long int) /*8ul*/ );
  hashBanBuffer_link3 = (unsigned long long int *)return_value_ckalloc_5;
  void *return_value_ckalloc_6;
  return_value_ckalloc_6=ckalloc((unsigned long int)buffer_size_link3 * sizeof(struct kmer_st *) /*8ul*/ );
  nodeBuffer_link1 = (struct kmer_st **)return_value_ckalloc_6;
  void *return_value_ckalloc_7;
  return_value_ckalloc_7=ckalloc((unsigned long int)buffer_size_link3 * sizeof(char) /*1ul*/ );
  smallerBuffer_link2 = (char *)return_value_ckalloc_7;
  void *return_value_ckalloc_8;
  return_value_ckalloc_8=ckalloc((unsigned long int)buffer_size_link3 * sizeof(char) /*1ul*/ );
  flagArray = (char *)return_value_ckalloc_8;
  maxReadNum = buffer_size_link3 / ((maxReadLen - overlaplen) + 1);
  void *return_value_ckalloc_9;
  return_value_ckalloc_9=ckalloc((unsigned long int)maxReadNum * sizeof(char *) /*8ul*/ );
  seqBuffer_link3 = (char **)return_value_ckalloc_9;
  void *return_value_ckalloc_10;
  return_value_ckalloc_10=ckalloc((unsigned long int)maxReadNum * sizeof(signed int) /*4ul*/ );
  lenBuffer_link3 = (signed int *)return_value_ckalloc_10;
  void *return_value_ckalloc_11;
  return_value_ckalloc_11=ckalloc((unsigned long int)(maxReadNum + 1) * sizeof(signed int) /*4ul*/ );
  indexArray_link3 = (signed int *)return_value_ckalloc_11;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)maxReadNum); i = i + 1ll)
  {
    void *return_value_ckalloc_12;
    return_value_ckalloc_12=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
    seqBuffer_link3[i] = (char *)return_value_ckalloc_12;
  }
  memoAlloc4preArc();
  void *return_value_ckalloc_13;
  return_value_ckalloc_13=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(char *) /*8ul*/ );
  flags = (char **)return_value_ckalloc_13;
  void *return_value_ckalloc_14;
  return_value_ckalloc_14=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(unsigned long long int *) /*8ul*/ );
  edge_no = (unsigned long long int **)return_value_ckalloc_14;
  void *return_value_ckalloc_15;
  return_value_ckalloc_15=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(signed int) /*4ul*/ );
  deletion_link1 = (signed int *)return_value_ckalloc_15;
  void *return_value_ckalloc_16;
  return_value_ckalloc_16=ckalloc((unsigned long int)(thrd_num + 1) * sizeof(char *) /*8ul*/ );
  rcSeq_link3 = (char **)return_value_ckalloc_16;
  if(!(repsTie == 0))
  {
    void *return_value_ckalloc_17;
    return_value_ckalloc_17=ckalloc((unsigned long int)(num_ed + (unsigned int)1) * sizeof(unsigned char) /*1ul*/ );
    markerOnEdge = (unsigned char *)return_value_ckalloc_17;
    i = (signed long long int)1;
    for( ; (signed long int)num_ed >= i; i = i + 1ll)
      markerOnEdge[i] = (unsigned char)0;
    void *return_value_ckalloc_18;
    return_value_ckalloc_18=ckalloc((unsigned long int)((maxReadLen - overlaplen) + 1) * sizeof(unsigned int) /*4ul*/ );
    fwriteBuf = (unsigned int *)return_value_ckalloc_18;
  }

  thrdSignal[(signed long int)0] = (unsigned char)0;
  {
    void *return_value_ckalloc_19;
    return_value_ckalloc_19=ckalloc((unsigned long int)thrd_num * sizeof(struct mem_manager *) /*8ul*/ );
    preArc_mem_managers = (struct mem_manager **)return_value_ckalloc_19;
    void *return_value_ckalloc_20;
    return_value_ckalloc_20=ckalloc((unsigned long int)thrd_num * sizeof(unsigned int) /*4ul*/ );
    arcCounters = (unsigned int *)return_value_ckalloc_20;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
    {
      arcCounters[i] = (unsigned int)0;
      preArc_mem_managers[i]=createMem_manager(100000, sizeof(struct prearc) /*16ul*/ );
      deletion_link1[i + (signed long int)1] = 0;
      void *return_value_ckalloc_21;
      return_value_ckalloc_21=ckalloc((unsigned long int)(2 * maxReadLen) * sizeof(char) /*1ul*/ );
      flags[i + (signed long int)1] = (char *)return_value_ckalloc_21;
      void *return_value_ckalloc_22;
      return_value_ckalloc_22=ckalloc((unsigned long int)(2 * maxReadLen) * sizeof(unsigned long long int) /*8ul*/ );
      edge_no[i + (signed long int)1] = (unsigned long long int *)return_value_ckalloc_22;
      void *return_value_ckalloc_23;
      return_value_ckalloc_23=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
      rcSeq_link3[i + (signed long int)1] = (char *)return_value_ckalloc_23;
      thrdSignal[i + (signed long int)1] = (unsigned char)0;
      paras[i].threadID = (unsigned char)i;
      paras[i].mainSignal = &thrdSignal[(signed long int)0];
      paras[i].selfSignal = &thrdSignal[i + (signed long int)1];
    }
    creatThrds_link4(threads, paras);
  }
  {
    deletion_link1[(signed long int)0] = 0;
    void *return_value_ckalloc_24;
    return_value_ckalloc_24=ckalloc((unsigned long int)(2 * maxReadLen) * sizeof(char) /*1ul*/ );
    flags[(signed long int)0] = (char *)return_value_ckalloc_24;
    void *return_value_ckalloc_25;
    return_value_ckalloc_25=ckalloc((unsigned long int)(2 * maxReadLen) * sizeof(unsigned long long int) /*8ul*/ );
    edge_no[(signed long int)0] = (unsigned long long int *)return_value_ckalloc_25;
    void *return_value_ckalloc_26;
    return_value_ckalloc_26=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
    rcSeq_link3[(signed long int)0] = (char *)return_value_ckalloc_26;
  }
  gradsCounter = 0;
  readNumBack = (signed long long int)gradsCounter;
  prlRead2edge__1__libNo = (signed int)readNumBack;
  i = (signed long long int)prlRead2edge__1__libNo;
  read_c_link3 = (signed int)i;
  n_solexa = (signed long long int)read_c_link3;
  kmer_c_link3 = (signed int)n_solexa;
  signed int t0;
  signed int t1;
  signed int t2;
  signed int t3;
  signed int t4;
  signed int t5;
  signed int t6 = 0;
  t5 = t6;
  t4 = t5;
  t3 = t4;
  t2 = t3;
  t1 = t2;
  t0 = t1;
  signed long int read_start;
  signed long int read_end;
  signed long int time_bef;
  signed long int time_aft;
  time(&read_start);
  do
  {
    flag=read1seqInLib(seqBuffer_link3[(signed long int)read_c_link3], next_name, &lenBuffer_link3[(signed long int)read_c_link3], &prlRead2edge__1__libNo, pairs, (unsigned char)1);
    if((signed int)flag == 0)
      break;

    i = i + 1ll;
    if(i % 100000000l == 0l)
      printf("--- %lldth reads\n", i);

    if(lenBuffer_link3[(signed long int)read_c_link3] >= 1 + overlaplen)
    {
      indexArray_link3[(signed long int)read_c_link3] = kmer_c_link3;
      kmer_c_link3 = kmer_c_link3 + (lenBuffer_link3[(signed long int)read_c_link3] - overlaplen) + 1;
      read_c_link3 = read_c_link3 + 1;
      if(read_c_link3 == maxReadNum)
      {
        indexArray_link3[(signed long int)read_c_link3] = kmer_c_link3;
        time(&read_end);
        t0 = t0 + (signed int)(read_end - read_start);
        time(&time_bef);
        sendWorkSignal_link4((unsigned char)2, thrdSignal);
        time(&time_aft);
        t1 = t1 + (signed int)(time_aft - time_bef);
        time(&time_bef);
        sendWorkSignal_link4((unsigned char)1, thrdSignal);
        time(&time_aft);
        t2 = t2 + (signed int)(time_aft - time_bef);
        time(&time_bef);
        sendWorkSignal_link4((unsigned char)3, thrdSignal);
        time(&time_aft);
        t3 = t3 + (signed int)(time_aft - time_bef);
        time(&time_bef);
        sendWorkSignal_link4((unsigned char)4, thrdSignal);
        time(&time_aft);
        t4 = t4 + (signed int)(time_aft - time_bef);
        time(&time_bef);
        sendWorkSignal_link4((unsigned char)6, thrdSignal);
        time(&time_aft);
        t5 = t5 + (signed int)(time_aft - time_bef);
        time(&time_bef);
        if(!(repsTie == 0))
          recordPathBin(outfp);

        time(&time_aft);
        t6 = t6 + (signed int)(time_aft - time_bef);
        kmer_c_link3 = 0;
        read_c_link3 = 0;
        time(&read_start);
      }

    }

  }
  while((_Bool)1);
  printf("%lld reads processed\n", i);
  printf("time %d,%d,%d,%d,%d,%d,%d\n", t0, t1, t2, t3, t4, t5, t6);
  if(!(read_c_link3 == 0))
  {
    indexArray_link3[(signed long int)read_c_link3] = kmer_c_link3;
    sendWorkSignal_link4((unsigned char)2, thrdSignal);
    sendWorkSignal_link4((unsigned char)1, thrdSignal);
    sendWorkSignal_link4((unsigned char)3, thrdSignal);
    sendWorkSignal_link4((unsigned char)4, thrdSignal);
    sendWorkSignal_link4((unsigned char)6, thrdSignal);
    if(!(repsTie == 0))
      recordPathBin(outfp);

  }

  printf("%lld markers outputed\n", markCounter);
  sendWorkSignal_link4((unsigned char)5, thrdSignal);
  thread_wait_link4(threads);
  output_arcs(outfile);
  memoFree4preArc();
  arcCounter = (signed long long int)0;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)thrd_num); i = i + 1ll)
  {
    arcCounter = arcCounter + (signed long long int)arcCounters[i];
    free((void *)flags[i + (signed long int)1]);
    free((void *)edge_no[i + (signed long int)1]);
    deletion_link1[(signed long int)0] = deletion_link1[(signed long int)0] + deletion_link1[i + (signed long int)1];
    free((void *)rcSeq_link3[i + (signed long int)1]);
  }
  free((void *)flags[(signed long int)0]);
  free((void *)edge_no[(signed long int)0]);
  free((void *)rcSeq_link3[(signed long int)0]);
  printf("done mapping reads, %d reads deleted, %lld arcs created\n", deletion_link1[(signed long int)0], arcCounter);
  if(!(repsTie == 0))
  {
    free((void *)markerOnEdge);
    free((void *)fwriteBuf);
  }

  free((void *)arcCounters);
  free((void *)rcSeq_link3);
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)maxReadNum); i = i + 1ll)
    free((void *)seqBuffer_link3[i]);
  free((void *)seqBuffer_link3);
  free((void *)lenBuffer_link3);
  free((void *)indexArray_link3);
  free((void *)flags);
  free((void *)deletion_link1);
  free((void *)edge_no);
  free((void *)kmerBuffer_link3);
  free((void *)mixBuffer);
  free((void *)smallerBuffer_link2);
  free((void *)flagArray);
  free((void *)hashBanBuffer_link3);
  free((void *)nodeBuffer_link1);
  free((void *)src_name);
  free((void *)next_name);
  if(!(repsTie == 0))
    fclose(outfp);

  free_pe_mem();
  free_libs();
}

// prlReadsCloseGap
// file prlReadFillGap.c line 1005
extern void prlReadsCloseGap(char *graphfile)
{
  if(!(fillGap == 0))
  {
    char flag;
    printf("\nStart to load reads for gap filling. %d length discrepancy is allowed\n", GLDiff);
    printf("...\n");
    flag=loadReads4gap(graphfile);
    if(flag == 0)
      goto __CPROVER_DUMP_L42;

  }

  if(!(orig2new == 0))
  {
    convertIndex();
    orig2new = (char)0;
  }

  struct _IO_FILE *fp;
  struct _IO_FILE *fo;
  struct _IO_FILE *fo2;
  char line[1024l];
  struct ctg4scaf *actg;
  struct stack *ctgStack;
  struct stack *aStack;
  signed int index = 0;
  signed int offset = 0;
  signed int counter;
  signed int overallLen;
  signed int i;
  signed int starter;
  signed int prev_start;
  signed int gapLen;
  signed int catchable;
  unsigned int ctg;
  unsigned int prev_ctg = (unsigned int)0;
  char IsPrevGap;
  const signed long int IsPrevGap_array_size0 = (signed long int)thrd_num;
  unsigned long int threads[IsPrevGap_array_size0];
  const signed long int threads_array_size0 = (signed long int)(thrd_num + 1);
  unsigned char thrdSignal[threads_array_size0];
  const signed long int thrdSignal_array_size0 = (signed long int)thrd_num;
  struct parameter paras[thrdSignal_array_size0];
  ctg = (unsigned int)1;
  for( ; num_ctg >= ctg; ctg = ctg + 1u)
    (contig_array + (signed long int)ctg)->flag = (unsigned char)0;
  MAXKMER=maxKmer();
  struct stack *return_value_createStack_1;
  return_value_createStack_1=createStack(1000, sizeof(struct ctg4scaf) /*20ul*/ );
  ctgStack = (struct stack *)return_value_createStack_1;
  sprintf(line, "%s.scaf_gap", graphfile);
  fp=ckopen(line, "r");
  sprintf(line, "%s.scafSeq", graphfile);
  fo=ckopen(line, "w");
  sprintf(line, "%s.gapSeq", graphfile);
  fo2=ckopen(line, "w");
  pthread_mutex_init(&mutex, (const union anonymous_0 *)(void *)0);
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)scafBufSize * sizeof(char) /*1ul*/ );
  flagBuf = (char *)return_value_ckalloc_2;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)scafBufSize * sizeof(unsigned char) /*1ul*/ );
  thrdNoBuf = (unsigned char *)return_value_ckalloc_3;
  memset((void *)thrdNoBuf, 0, (unsigned long int)scafBufSize * sizeof(char) /*1ul*/ );
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)scafBufSize * sizeof(struct stack *) /*8ul*/ );
  ctgStackBuffer = (struct stack **)return_value_ckalloc_4;
  initStackBuf(ctgStackBuffer, scafBufSize);
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)thrd_num * sizeof(struct dynamic_array *) /*8ul*/ );
  darrayBuf = (struct dynamic_array **)return_value_ckalloc_5;
  void *return_value_ckalloc_6;
  return_value_ckalloc_6=ckalloc((unsigned long int)thrd_num * sizeof(signed int) /*4ul*/ );
  counters = (signed int *)return_value_ckalloc_6;
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
  {
    counters[(signed long int)i] = 0;
    struct dynamic_array *return_value_createDarray_7;
    return_value_createDarray_7=createDarray(100000, sizeof(char) /*1ul*/ );
    darrayBuf[(signed long int)i] = (struct dynamic_array *)return_value_createDarray_7;
    thrdSignal[(signed long int)(i + 1)] = (unsigned char)0;
    paras[(signed long int)i].threadID = (unsigned char)i;
    paras[(signed long int)i].mainSignal = &thrdSignal[(signed long int)0];
    paras[(signed long int)i].selfSignal = &thrdSignal[(signed long int)(i + 1)];
  }
  if(!(fillGap == 0))
    creatThrds_link5(threads, paras);

  allGaps = 0;
  scafInBuf = allGaps;
  scafCounter = scafInBuf;
  Ncounter = scafCounter;
  char *return_value_fgets_8;
  signed int tmp_post_9;
  _Bool tmp_if_expr_11;
  do
  {
    return_value_fgets_8=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , fp);
    if(return_value_fgets_8 == ((char *)NULL))
      break;

    if((signed int)line[0l] == 62)
    {
      if(!(index == 0))
      {
        aStack = ctgStackBuffer[(signed long int)scafInBuf];
        tmp_post_9 = scafInBuf;
        scafInBuf = scafInBuf + 1;
        flagBuf[(signed long int)tmp_post_9] = (char)0;
        reverseStack(aStack, ctgStack);
        if(scafInBuf == scafBufSize)
        {
          if(!(fillGap == 0))
            sendWorkSignal_link5((unsigned char)1, thrdSignal);

          outputSeqs(fo, fo2, scafInBuf);
          scafCounter = scafCounter + scafInBuf;
          scafInBuf = 0;
        }

        if(index % 1000 == 0)
          printf("Processed %d scaffolds\n", index);

      }

      emptyStack(ctgStack);
      prev_ctg = (unsigned int)0;
      offset = (signed int)prev_ctg;
      IsPrevGap = (char)offset;
      sscanf(line + (signed long int)9, "%d %d %d", &index, &counter, &overallLen);
    }

    else
      if((signed int)line[0l] == 71)
      {
        if(!(fillGap == 0))
        {
          gapLen=procGap(line, ctgStack);
          IsPrevGap = (char)1;
        }

      }

      else
        if((signed int)line[0l] >= 48)
        {
          if(!((signed int)line[0l] >= 58))
          {
            sscanf(line, "%d %d", &ctg, &starter);
            void *return_value_stackPush_10;
            return_value_stackPush_10=stackPush(ctgStack);
            actg = (struct ctg4scaf *)return_value_stackPush_10;
            actg->ctgID = ctg;
            if(!((contig_array + (signed long int)ctg)->flag == 0))
              MaskContig(ctg);

            else
              MarkCtgOccu(ctg);
            initiateCtgInScaf(actg);
            if(prev_ctg == 0u)
              actg->cutHead = (unsigned int)0;

            else
              if(IsPrevGap == 0)
                allGaps = allGaps + 1;

            if(IsPrevGap == 0)
            {
              if(!(prev_ctg == 0u))
                tmp_if_expr_11 = (starter - prev_start) - (signed int)(contig_array + (signed long int)prev_ctg)->length < (signed int)overlaplen * 4 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_11 = (_Bool)0;
              if(tmp_if_expr_11)
              {
                catchable = 0;
                if(!(catchable == 0))
                {
                  allGaps = allGaps - 1;
                  actg->scaftig_start = (unsigned int)0;
                  actg->cutHead = (unsigned int)catchable;
                  offset = offset + (signed int)(-((unsigned int)(starter - prev_start) - (contig_array + (signed long int)prev_ctg)->length) + (unsigned int)(overlaplen - catchable));
                }

                else
                  actg->scaftig_start = (unsigned int)1;
              }

              else
                actg->scaftig_start = (unsigned int)1;
            }

            else
            {
              offset = offset + (signed int)(-((unsigned int)(starter - prev_start) - (contig_array + (signed long int)prev_ctg)->length) + (unsigned int)gapLen);
              actg->scaftig_start = (unsigned int)0;
            }
            actg->start = starter + offset;
            actg->end = (signed int)(((unsigned int)actg->start + (contig_array + (signed long int)ctg)->length) - (unsigned int)1);
            actg->mask = (unsigned int)(contig_array + (signed long int)ctg)->mask;
            IsPrevGap = (char)0;
            prev_ctg = ctg;
            prev_start = starter;
          }

        }

  }
  while((_Bool)1);
  signed int tmp_post_12;
  if(!(index == 0))
  {
    aStack = ctgStackBuffer[(signed long int)scafInBuf];
    tmp_post_12 = scafInBuf;
    scafInBuf = scafInBuf + 1;
    flagBuf[(signed long int)tmp_post_12] = (char)0;
    reverseStack(aStack, ctgStack);
    if(!(fillGap == 0))
      sendWorkSignal_link5((unsigned char)1, thrdSignal);

    outputSeqs(fo, fo2, scafInBuf);
  }

  if(!(fillGap == 0))
  {
    sendWorkSignal_link5((unsigned char)2, thrdSignal);
    thread_wait_link5(threads);
  }

  ctg = (unsigned int)1;
  _Bool tmp_if_expr_13;
  for( ; num_ctg >= ctg; ctg = ctg + 1u)
  {
    if(!((contig_array + (signed long int)ctg)->length + (unsigned int)overlaplen >= 100u))
      tmp_if_expr_13 = (_Bool)1;

    else
      tmp_if_expr_13 = (contig_array + (signed long int)ctg)->flag != 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_13)
      output_ctg(ctg, fo);

  }
  printf("Done with %d scaffolds, %d gaps finished, %d gaps overall\n", index, allGaps - Ncounter, allGaps);
  index = 0;
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
  {
    freeDarray(darrayBuf[(signed long int)i]);
    index = index + counters[(signed long int)i];
  }
  if(!(fillGap == 0))
    printf("Threads processed %d scaffolds\n", index);

  free((void *)darrayBuf);
  if(!(readSeqInGap == ((struct dynamic_array *)NULL)))
    freeDarray(readSeqInGap);

  fclose(fp);
  fclose(fo);
  fclose(fo2);
  freeStack(ctgStack);
  freeStackBuf(ctgStackBuffer, scafBufSize);
  free((void *)flagBuf);
  free((void *)thrdNoBuf);
  free((void *)ctgStackBuffer);

__CPROVER_DUMP_L42:
  ;
}

// procGap
// file prlReadFillGap.c line 233
static signed int procGap(char *line, struct stack *ctgsStack)
{
  char *tp;
  signed int length;
  signed int i;
  signed int seg;
  unsigned int ctg;
  struct ctg4scaf *ctgPt;
  tp=strtok(line, " ");
  tp=strtok((char *)(void *)0, " ");
  length=atoi_link9(tp);
  tp=strtok((char *)(void *)0, " ");
  seg=atoi_link9(tp);
  if(seg == 0)
    return length;

  else
  {
    i = 0;
    for( ; !(i >= seg); i = i + 1)
    {
      tp=strtok((char *)(void *)0, " ");
      signed int return_value_atoi_1;
      return_value_atoi_1=atoi_link9(tp);
      ctg = (unsigned int)return_value_atoi_1;
      MarkCtgOccu(ctg);
      void *return_value_stackPush_2;
      return_value_stackPush_2=stackPush(ctgsStack);
      ctgPt = (struct ctg4scaf *)return_value_stackPush_2;
      initiateCtgInScaf(ctgPt);
      ctgPt->ctgID = ctg;
      ctgPt->start = 0;
      ctgPt->end = 0;
      ctgPt->scaftig_start = (unsigned int)0;
      ctgPt->mask = (unsigned int)1;
    }
    return length;
  }
}

// putArc2LookupTable
// file arc.c line 167
extern void putArc2LookupTable(unsigned int from_ed, struct arc *arc)
{
  if(!(arcLookupTable == ((struct arc **)NULL)) && !(arc == ((struct arc *)NULL)))
  {
    unsigned int index = (unsigned int)2 * from_ed + arc->to_ed;
    arc->nextInLookupTable = arcLookupTable[(signed long int)index];
    arcLookupTable[(signed long int)index] = arc;
  }

}

// putChainIntoSubgraph
// file orderContig.c line 1325
static char putChainIntoSubgraph(struct fibheap *heap, signed int distance, unsigned int node, signed int *index, struct connection *prevC)
{
  unsigned int ctg = node;
  struct connection *nextCnt;
  char excep;
  char flag;
  signed int counter = *index;
  for( ; (_Bool)1; prevC = nextCnt)
  {
    nextCnt=getNextContig(ctg, prevC, &excep);
    if(nextCnt == ((struct connection *)NULL) || !(excep == 0))
    {
      *index = counter;
      return (char)1;
    }

    ctg = nextCnt->contigID;
    distance = distance + (signed int)((unsigned int)nextCnt->gapLen + ctg);
    flag=putNodeIntoSubgraph(heap, distance, ctg, counter);
    if(!((signed int)flag >= 0))
      return (char)0;

    if((signed int)flag >= 1)
      counter = counter + 1;

  }
}

// putCnt2LookupTable
// file inc/extfunc.h line 172
extern void putCnt2LookupTable(unsigned int from_c, struct connection *cnt)
{
  if(!(cntLookupTable == ((struct connection **)NULL)) && !(cnt == ((struct connection *)NULL)))
  {
    unsigned int index = (unsigned int)2 * from_c + cnt->contigID;
    cnt->nextInLookupTable = cntLookupTable[(signed long int)index];
    cntLookupTable[(signed long int)index] = cnt;
  }

}

// putItem2Sarray
// file orderContig.c line 3859
static char putItem2Sarray(unsigned int scaf, signed int wt, struct dynamic_array *SCAF, struct dynamic_array *WT, signed int counter)
{
  signed int i;
  unsigned int *scafP;
  unsigned int *wtP;
  i = 0;
  for( ; !(i >= counter); i = i + 1)
  {
    void *return_value_darrayGet_1;
    return_value_darrayGet_1=darrayGet(SCAF, (signed long long int)i);
    scafP = (unsigned int *)return_value_darrayGet_1;
    if(*scafP == scaf)
    {
      void *return_value_darrayGet_2;
      return_value_darrayGet_2=darrayGet(WT, (signed long long int)i);
      wtP = (unsigned int *)return_value_darrayGet_2;
      *wtP = *wtP + (unsigned int)wt;
      return (char)0;
    }

  }
  void *return_value_darrayPut_3;
  return_value_darrayPut_3=darrayPut(SCAF, (signed long long int)counter);
  scafP = (unsigned int *)return_value_darrayPut_3;
  void *return_value_darrayPut_4;
  return_value_darrayPut_4=darrayPut(WT, (signed long long int)counter);
  wtP = (unsigned int *)return_value_darrayPut_4;
  *scafP = scaf;
  *wtP = (unsigned int)wt;
  return (char)1;
}

// putKmer2DBgraph
// file localAsm.c line 71
static void putKmer2DBgraph(struct kmerSet_st *kset, signed int flag, signed int kmer_c, unsigned long long int *kmerBuffer, char *prevcBuffer, char *nextcBuffer)
{
  signed int t = 0;
  for( ; !(t >= kmer_c); t = t + 1)
    singleKmer(t, kset, flag, kmerBuffer, prevcBuffer, nextcBuffer);
}

// putNodeInArray
// file orderContig.c line 3000
static char putNodeInArray(unsigned int node, signed int maxNodes, signed int dis)
{
  if(!((contig_array + (signed long int)node)->inSubGraph == 0))
    return (char)1;

  else
  {
    signed int index = nodeCounter_link1;
    if(!(maxNodes >= index))
      return (char)0;

    else
    {
      unsigned int return_value_getTwinCtg_1;
      return_value_getTwinCtg_1=getTwinCtg(node);
      if(!((contig_array + (signed long int)return_value_getTwinCtg_1)->inSubGraph == 0))
        return (char)0;

      else
      {
        ctg4heapArray[(signed long int)index].ctgID = node;
        ctg4heapArray[(signed long int)index].dis = dis;
        (contig_array + (signed long int)node)->inSubGraph = (unsigned char)1;
        ctg4heapArray[(signed long int)index].ds_shut4dheap = (unsigned char)0;
        ctg4heapArray[(signed long int)index].us_shut4dheap = (unsigned char)0;
        ctg4heapArray[(signed long int)index].ds_shut4uheap = (unsigned char)0;
        ctg4heapArray[(signed long int)index].us_shut4uheap = (unsigned char)0;
        return (char)1;
      }
    }
  }
}

// putNodeIntoSubgraph
// file orderContig.c line 1306
static char putNodeIntoSubgraph(struct fibheap *heap, signed int distance, unsigned int node, signed int index)
{
  signed int pos;
  pos=getIndexInArray(node);
  if(pos >= 1)
    return (char)0;

  else
    if(index >= 10000)
      return (char)-1;

    else
    {
      insertNodeIntoHeap(heap, (signed long long int)distance, node);
      nodesInSub[(signed long int)index] = node;
      nodeDistance[(signed long int)index] = distance;
      return (char)1;
    }
}

// put_kmerset
// file inc/newhash.h line 90
extern signed int put_kmerset(struct kmerSet_st *set, unsigned long long int seq, unsigned char left, unsigned char right, struct kmer_st **kmer_p)
{
  unsigned long long int hc;
  encap_kmerset(set, (unsigned long long int)1);
  hc = seq % set->size;
  while((_Bool)1)
  {
    if(!((1u & set->flags[(signed long int)(hc >> 4)] >> ((15ul & hc) << 1)) == 0u))
    {
      set->flags[(signed long int)(hc >> 4)] = set->flags[(signed long int)(hc >> 4)] & ~(0x01u << ((hc & (unsigned long int)0x0f) << 1));
      set_new_kmer(set->array + (signed long int)hc, seq, left, right);
      set->count = set->count + 1ull;
      *kmer_p = set->array + (signed long int)hc;
      return 0;
    }

    else
      if((set->array + (signed long int)hc)->seq == seq)
      {
        update_kmer(set->array + (signed long int)hc, left, right);
        (set->array + (signed long int)hc)->single = (unsigned int)0;
        *kmer_p = set->array + (signed long int)hc;
        return 1;
      }

    hc = hc + 1ull;
    if(hc == set->size)
      hc = (unsigned long long int)0;

  }
  *kmer_p = (struct kmer_st *)(void *)0;
  return 0;
}

// quick_sort_int
// file loadGraph.c line 143
void quick_sort_int(unsigned int *length_array, signed int low, signed int high)
{
  signed int i;
  signed int j;
  unsigned long long int pivot;
  signed int tmp_post_1;
  signed int tmp_post_2;
  if(!(low >= high))
  {
    pivot = (unsigned long long int)length_array[(signed long int)low];
    i = low;
    j = high;
    while(!(i >= j))
    {
      for( ; !(i >= j); j = j - 1)
        if(!((unsigned long int)length_array[(signed long int)j] >= pivot))
          break;

      if(!(i >= j))
      {
        tmp_post_1 = i;
        i = i + 1;
        length_array[(signed long int)tmp_post_1] = length_array[(signed long int)j];
      }

      for( ; !(i >= j); i = i + 1)
        if(!(pivot >= (unsigned long int)length_array[(signed long int)i]))
          break;

      if(!(i >= j))
      {
        tmp_post_2 = j;
        j = j - 1;
        length_array[(signed long int)tmp_post_2] = length_array[(signed long int)i];
      }

    }
    length_array[(signed long int)i] = (unsigned int)pivot;
    quick_sort_int(length_array, low, i - 1);
    quick_sort_int(length_array, i + 1, high);
  }

}

// read1seqInLib
// file inc/extfunc.h line 182
extern char read1seqInLib(char *src_seq, char *src_name, signed int *len_seq, signed int *libNo, char pair, unsigned char asm_ctg)
{
  signed int i = *libNo;
  signed int prevLib = i;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  signed int return_value_feof_6;
  if((lib_array + (signed long int)i)->fp1 == ((struct _IO_FILE *)NULL))
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    if(!((lib_array + (signed long int)i)->curr_type == 1))
    {
      return_value_feof_6=feof((lib_array + (signed long int)i)->fp1);
      tmp_if_expr_7 = return_value_feof_6 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_7 = (_Bool)0;
    tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_10;
  signed int return_value_feof_9;
  _Bool tmp_if_expr_12;
  signed int return_value_feof_11;
  if(tmp_if_expr_8)
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    if((lib_array + (signed long int)i)->curr_type == 1)
    {
      return_value_feof_9=feof((lib_array + (signed long int)i)->fp1);
      tmp_if_expr_10 = return_value_feof_9 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_10 = (_Bool)0;
    if(tmp_if_expr_10)
    {
      return_value_feof_11=feof((lib_array + (signed long int)i)->fp2);
      tmp_if_expr_12 = return_value_feof_11 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_12 = (_Bool)0;
    tmp_if_expr_13 = tmp_if_expr_12 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_feof_1;
  signed int return_value_feof_2;
  signed int tmp_if_expr_3;
  signed int tmp_post_4;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_13)
  {
    if(!((lib_array + (signed long int)i)->fp1 == ((struct _IO_FILE *)NULL)))
    {
      return_value_feof_1=feof((lib_array + (signed long int)i)->fp1);
      if(!(return_value_feof_1 == 0))
        closeFp1InLab(i);

    }

    if(!((lib_array + (signed long int)i)->fp2 == ((struct _IO_FILE *)NULL)))
    {
      return_value_feof_2=feof((lib_array + (signed long int)i)->fp2);
      if(!(return_value_feof_2 == 0))
        closeFp2InLab(i);

    }

    *libNo=nextValidIndex(i, pair, asm_ctg);
    i = *libNo;
    if((lib_array + (signed long int)i)->rd_len_cutoff >= 1)
    {
      if(!((lib_array + (signed long int)i)->rd_len_cutoff >= maxReadLen4all))
        tmp_if_expr_3 = (lib_array + (signed long int)i)->rd_len_cutoff;

      else
        tmp_if_expr_3 = maxReadLen4all;
      maxReadLen = tmp_if_expr_3;
    }

    else
      maxReadLen = maxReadLen4all;
    if(!(i == prevLib) && !(pair == 0))
    {
      if(!(readNumBack >= n_solexa))
      {
        (pes + (signed long int)gradsCounter)->PE_bound = n_solexa;
        (pes + (signed long int)gradsCounter)->rank = (lib_array + (signed long int)prevLib)->rank;
        (pes + (signed long int)gradsCounter)->pair_num_cut = (lib_array + (signed long int)prevLib)->pair_num_cut;
        tmp_post_4 = gradsCounter;
        gradsCounter = gradsCounter + 1;
        (pes + (signed long int)tmp_post_4)->insertS = (lib_array + (signed long int)prevLib)->avg_ins;
        readNumBack = n_solexa;
      }

    }

    if(i >= num_libs)
      return (char)0;

    openFileInLib(i);
    if((lib_array + (signed long int)i)->curr_type == 1)
    {
      readseq1by1(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp1, (signed long long int)-1);
      readseq1by1(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp2, (signed long long int)-1);
    }

    else
    {
      if((lib_array + (signed long int)i)->curr_type == 3)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = (lib_array + (signed long int)i)->curr_type == 4 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        readseq1by1(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp1, (signed long long int)-1);

    }
  }

  _Bool tmp_if_expr_16;
  signed int return_value_feof_15;
  _Bool tmp_if_expr_19;
  signed int return_value_feof_18;
  _Bool tmp_if_expr_22;
  signed int return_value_feof_21;
  if((lib_array + (signed long int)i)->curr_type == 1)
  {
    if((lib_array + (signed long int)i)->paired == 1)
    {
      readseq1by1(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp1, (signed long long int)1);
      if(!((lib_array + (signed long int)i)->reverse == 0))
        reverse2k(src_seq, *len_seq);

      (lib_array + (signed long int)i)->paired = 2;
      if(*len_seq >= 1)
        tmp_if_expr_16 = (_Bool)1;

      else
      {
        return_value_feof_15=feof((lib_array + (signed long int)i)->fp1);
        tmp_if_expr_16 = !(return_value_feof_15 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_16)
      {
        n_solexa = n_solexa + 1ll;
        return (char)1;
      }

      else
      {
        char return_value_read1seqInLib_14;
        return_value_read1seqInLib_14=read1seqInLib(src_seq, src_name, len_seq, libNo, pair, asm_ctg);
        return return_value_read1seqInLib_14;
      }
    }

    readseq1by1(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp2, (signed long long int)1);
    if(!((lib_array + (signed long int)i)->reverse == 0))
      reverse2k(src_seq, *len_seq);

    (lib_array + (signed long int)i)->paired = 1;
    n_solexa = n_solexa + 1ll;
    return (char)1;
  }

  else
    if((lib_array + (signed long int)i)->curr_type == 2)
    {
      if((lib_array + (signed long int)i)->paired == 1)
      {
        read1seqfq(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp1);
        if(!((lib_array + (signed long int)i)->reverse == 0))
          reverse2k(src_seq, *len_seq);

        (lib_array + (signed long int)i)->paired = 2;
        if(*len_seq >= 1)
          tmp_if_expr_19 = (_Bool)1;

        else
        {
          return_value_feof_18=feof((lib_array + (signed long int)i)->fp1);
          tmp_if_expr_19 = !(return_value_feof_18 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_19)
        {
          n_solexa = n_solexa + 1ll;
          return (char)1;
        }

        else
        {
          char return_value_read1seqInLib_17;
          return_value_read1seqInLib_17=read1seqInLib(src_seq, src_name, len_seq, libNo, pair, asm_ctg);
          return return_value_read1seqInLib_17;
        }
      }

      read1seqfq(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp2);
      if(!((lib_array + (signed long int)i)->reverse == 0))
        reverse2k(src_seq, *len_seq);

      (lib_array + (signed long int)i)->paired = 1;
      n_solexa = n_solexa + 1ll;
      return (char)1;
    }

    else
    {
      if((lib_array + (signed long int)i)->curr_type == 5)
        read1seqfq(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp1);

      else
        readseq1by1(src_seq, src_name, len_seq, (lib_array + (signed long int)i)->fp1, (signed long long int)1);
      if(!((lib_array + (signed long int)i)->reverse == 0))
        reverse2k(src_seq, *len_seq);

      if(*len_seq >= 1)
        tmp_if_expr_22 = (_Bool)1;

      else
      {
        return_value_feof_21=feof((lib_array + (signed long int)i)->fp1);
        tmp_if_expr_22 = !(return_value_feof_21 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_22)
      {
        n_solexa = n_solexa + 1ll;
        return (char)1;
      }

      else
      {
        char return_value_read1seqInLib_20;
        return_value_read1seqInLib_20=read1seqInLib(src_seq, src_name, len_seq, libNo, pair, asm_ctg);
        return return_value_read1seqInLib_20;
      }
    }
}

// read1seqfq
// file readseq1by1.c line 184
void read1seqfq(char *src_seq, char *src_name, signed int *len_seq, struct _IO_FILE *fp)
{
  signed int i;
  signed int n;
  signed int strL;
  char c;
  char str[5000l];
  char flag = (char)0;
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(str, 4950, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    if((signed int)str[0l] == 64)
    {
      flag = (char)1;
      sscanf(&str[(signed long int)1], "%s", src_name);
      break;
    }

  }
  while((_Bool)1);
  char *return_value_fgets_2;
  _Bool tmp_if_expr_8;
  signed int tmp_post_4;
  _Bool tmp_if_expr_7;
  signed int tmp_post_5;
  signed int tmp_post_6;
  if(flag == 0)
    *len_seq = 0;

  else
  {
    n = 0;
    do
    {
      return_value_fgets_2=fgets(str, 4950, fp);
      if(return_value_fgets_2 == ((char *)NULL))
        break;

      if((signed int)str[0l] == 43)
      {
        fgets(str, 4950, fp);
        *len_seq = n;
        goto __CPROVER_DUMP_L19;
      }

      else
      {
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(str);
        strL = (signed int)return_value_strlen_3;
        if(!(maxReadLen >= n + strL))
          strL = maxReadLen - n;

        i = 0;
        for( ; !(i >= strL); i = i + 1)
        {
          if((signed int)str[(signed long int)i] >= 97)
            tmp_if_expr_8 = (signed int)str[(signed long int)i] <= 122 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_8 = (_Bool)0;
          if(tmp_if_expr_8)
          {
            c = (char)((((signed int)str[(signed long int)i] - 97) + 65 & 0x06) >> 1);
            tmp_post_4 = n;
            n = n + 1;
            src_seq[(signed long int)tmp_post_4] = c;
          }

          else
          {
            if((signed int)str[(signed long int)i] >= 65)
              tmp_if_expr_7 = (signed int)str[(signed long int)i] <= 90 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_7 = (_Bool)0;
            if(tmp_if_expr_7)
            {
              c = (char)(((signed int)str[(signed long int)i] & 0x06) >> 1);
              tmp_post_5 = n;
              n = n + 1;
              src_seq[(signed long int)tmp_post_5] = c;
            }

            else
              if((signed int)str[(signed long int)i] == 46)
              {
                c = (char)((65 & 0x06) >> 1);
                tmp_post_6 = n;
                n = n + 1;
                src_seq[(signed long int)tmp_post_6] = c;
              }

          }
        }
      }
    }
    while((_Bool)1);
    *len_seq = n;
    goto __CPROVER_DUMP_L19;
  }

__CPROVER_DUMP_L19:
  ;
}

// readOnEdge
// file splitReps.c line 85
static char readOnEdge(signed long long int readid, unsigned int edge)
{
  signed int index;
  signed int markNum;
  signed long long int *marklist;
  if(!((edge_array + (signed long int)edge)->markers == ((signed long long int *)NULL)))
  {
    markNum = (signed int)(edge_array + (signed long int)edge)->multi;
    marklist = (edge_array + (signed long int)edge)->markers;
  }

  else
    return (char)0;
  index = 0;
  for( ; !(index >= markNum); index = index + 1)
    if(readid == marklist[(signed long int)index])
      return (char)1;

  return (char)0;
}

// read_one_sequence
// file readseq1by1.c line 95
extern void read_one_sequence(struct _IO_FILE *fp, signed long long int *T, char **X)
{
  char *fasta;
  char *src_name;
  signed int num_seq;
  signed int len;
  signed int name_len;
  signed int min_len;
  signed long long int return_value_readseqpar_1;
  return_value_readseqpar_1=readseqpar(&len, &min_len, &name_len, fp);
  num_seq = (signed int)return_value_readseqpar_1;
  if(!(num_seq >= 1))
  {
    printf("no fasta sequence in file\n");
    *T = (signed long long int)0;
  }

  else
  {
    void *return_value_ckalloc_2;
    return_value_ckalloc_2=ckalloc((unsigned long int)len * sizeof(char) /*1ul*/ );
    fasta = (char *)return_value_ckalloc_2;
    void *return_value_ckalloc_3;
    return_value_ckalloc_3=ckalloc((unsigned long int)(name_len + 1) * sizeof(char) /*1ul*/ );
    src_name = (char *)return_value_ckalloc_3;
    rewind(fp);
    readseq1by1(fasta, src_name, &len, fp, (signed long long int)-1);
    readseq1by1(fasta, src_name, &len, fp, (signed long long int)0);
    *X = fasta;
    *T = (signed long long int)len;
    free((void *)src_name);
  }
}

// readsCrossGap
// file localAsm.c line 1695
static char readsCrossGap(struct read_nearby *rdArray, signed int num, signed int originOverlap, struct dynamic_array *gapSeqArray, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, signed int overlap, struct ctg4scaf *ctg1, struct ctg4scaf *ctg2, struct kmerSet_st *kmerS, unsigned long long int WordFilter, signed int min, signed int max, signed int offset1, signed int offset2, char *seqGap, char *seqCtg1, char *seqCtg2, signed int cut1, signed int cut2)
{
  signed int i;
  signed int j;
  signed int start;
  signed int end;
  signed int startOnCtg1;
  signed int endOnCtg2;
  char *bal_seq;
  char *src_seq;
  char *pt;
  char bal;
  char ret = (char)0;
  char FILL;
  double maxScore = 0.0;
  signed int maxIndex;
  signed int lenCtg1;
  signed int lenCtg2;
  signed int readsCrossGap__1__buffer_size = maxReadLen > 100 ? maxReadLen : 100;
  signed int length = (signed int)((contig_array + (signed long int)ctg1->ctgID)->length + (unsigned int)originOverlap);
  if(!(offset1 >= readsCrossGap__1__buffer_size))
  {
    lenCtg1=cutSeqFromCtg(ctg1->ctgID, (length - cut1) - (readsCrossGap__1__buffer_size - offset1), (length - 1) - cut1, seqCtg1, originOverlap);
    i = 0;
    for( ; !(i >= offset1); i = i + 1)
      seqCtg1[(signed long int)(lenCtg1 + i)] = seqGap[(signed long int)i];
    lenCtg1 = lenCtg1 + offset1;
  }

  else
  {
    i = offset1 - readsCrossGap__1__buffer_size;
    for( ; !(i >= offset1); i = i + 1)
      seqCtg1[(signed long int)((i + readsCrossGap__1__buffer_size) - offset1)] = seqGap[(signed long int)i];
    lenCtg1 = readsCrossGap__1__buffer_size;
  }
  length = (signed int)((contig_array + (signed long int)ctg2->ctgID)->length + (unsigned int)originOverlap);
  if(!(offset2 >= readsCrossGap__1__buffer_size))
  {
    lenCtg2=cutSeqFromCtg(ctg2->ctgID, cut2, ((readsCrossGap__1__buffer_size - offset2) - 1) + cut2, &seqCtg2[(signed long int)offset2], originOverlap);
    i = 0;
    for( ; !(i >= offset2); i = i + 1)
      seqCtg2[(signed long int)i] = seqGap[(signed long int)(i + offset1)];
    lenCtg2 = lenCtg2 + offset2;
  }

  else
  {
    i = 0;
    for( ; !(i >= readsCrossGap__1__buffer_size); i = i + 1)
      seqCtg2[(signed long int)i] = seqGap[(signed long int)(i + offset1)];
    lenCtg2 = readsCrossGap__1__buffer_size;
  }
  signed int len1;
  signed int len2;
  len1 = 35 < lenCtg1 ? 35 : lenCtg1;
  len2 = 35 < lenCtg2 ? 35 : lenCtg2;
  chopKmer4Ctg(kmerCtg1, len1, overlap, &seqCtg1[(signed long int)(lenCtg1 - len1)], WordFilter);
  chopKmer4Ctg(kmerCtg2, len2, overlap, seqCtg2, WordFilter);
  len1 = len1 - (overlap - 1);
  len2 = len2 - (overlap - 1);
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
  src_seq = (char *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)maxReadLen * sizeof(char) /*1ul*/ );
  bal_seq = (char *)return_value_ckalloc_2;
  signed int *START;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)num * sizeof(signed int) /*4ul*/ );
  START = (signed int *)return_value_ckalloc_3;
  signed int *END;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)num * sizeof(signed int) /*4ul*/ );
  END = (signed int *)return_value_ckalloc_4;
  signed int *INDEX1;
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)num * sizeof(signed int) /*4ul*/ );
  INDEX1 = (signed int *)return_value_ckalloc_5;
  signed int *INDEX2;
  void *return_value_ckalloc_6;
  return_value_ckalloc_6=ckalloc((unsigned long int)num * sizeof(signed int) /*4ul*/ );
  INDEX2 = (signed int *)return_value_ckalloc_6;
  double *SCORE;
  void *return_value_ckalloc_7;
  return_value_ckalloc_7=ckalloc((unsigned long int)num * sizeof(double) /*8ul*/ );
  SCORE = (double *)return_value_ckalloc_7;
  char *BAL;
  void *return_value_ckalloc_8;
  return_value_ckalloc_8=ckalloc((unsigned long int)num * sizeof(char) /*1ul*/ );
  BAL = (char *)return_value_ckalloc_8;
  memset((void *)SCORE, 0, (unsigned long int)num * sizeof(double) /*8ul*/ );
  i = 0;
  signed int tmp_if_expr_9;
  signed int tmp_if_expr_10;
  for( ; !(i >= num); i = i + 1)
  {
    getSeqFromRead(rdArray[(signed long int)i], src_seq);
    FILL=chopReadFillGap((rdArray + (signed long int)i)->len, overlap, src_seq, bal_seq, kmerS, WordFilter, &start, &end, &bal, kmerCtg1, len1, kmerCtg2, len2, &startOnCtg1, &endOnCtg2);
    if(!(FILL == 0) && end + -start >= min && max >= end + -start)
    {
      if(originOverlap >= len1 + -startOnCtg1 + -1 + endOnCtg2 + overlap + -(end + -start))
      {
        START[(signed long int)i] = start;
        END[(signed long int)i] = end;
        INDEX1[(signed long int)i] = startOnCtg1;
        INDEX2[(signed long int)i] = endOnCtg2;
        BAL[(signed long int)i] = bal;
        signed int matchLen = 2 * overlap < (end - start) + overlap ? 2 * overlap : (end - start) + overlap;
        signed int match;
        signed int alignLen = matchLen;
        signed int ctgLeft = (lenCtg1 - ((len1 + overlap) - 1)) + startOnCtg1;
        signed int readLeft = (start - overlap) + 1;
        signed int cmpLen = ctgLeft < readLeft ? ctgLeft : readLeft;
        cmpLen = cmpLen <= 100 ? cmpLen : 100;
        cutSeqFromRead(seqCtg1, lenCtg1, ctgLeft - cmpLen, ctgLeft - 1, fastSequence_link1);
        if(bal == 0)
          cutSeqFromRead(src_seq, (rdArray + (signed long int)i)->len, readLeft - cmpLen, readLeft - 1, slowSequence_link1);

        else
          cutSeqFromRead(bal_seq, (rdArray + (signed long int)i)->len, readLeft - cmpLen, readLeft - 1, slowSequence_link1);
        match=compareSequences_link1(fastSequence_link1, slowSequence_link1, cmpLen, cmpLen);
        alignLen = alignLen + cmpLen;
        matchLen = matchLen + match;
        signed int ctgRight = (len1 - startOnCtg1) - 1;
        if(!(ctgRight >= (rdArray + (signed long int)i)->len + -start + -1))
          tmp_if_expr_9 = ctgRight;

        else
          tmp_if_expr_9 = ((rdArray + (signed long int)i)->len - start) - 1;
        cmpLen = tmp_if_expr_9;
        cmpLen = cmpLen <= 100 ? cmpLen : 100;
        cutSeqFromRead(seqCtg1, lenCtg1, ctgLeft + overlap, (ctgLeft + overlap + cmpLen) - 1, fastSequence_link1);
        if(bal == 0)
          cutSeqFromRead(src_seq, (rdArray + (signed long int)i)->len, start + 1, start + cmpLen, slowSequence_link1);

        else
          cutSeqFromRead(bal_seq, (rdArray + (signed long int)i)->len, start + 1, start + cmpLen, slowSequence_link1);
        match=compareSequences_link1(fastSequence_link1, slowSequence_link1, cmpLen, cmpLen);
        alignLen = alignLen + cmpLen;
        matchLen = matchLen + match;
        ctgLeft = endOnCtg2;
        readLeft = (end - overlap) + 1;
        cmpLen = ctgLeft < readLeft ? ctgLeft : readLeft;
        cmpLen = ctgLeft <= 100 ? ctgLeft : 100;
        cutSeqFromRead(seqCtg2, lenCtg2, endOnCtg2 - cmpLen, endOnCtg2 - 1, fastSequence_link1);
        if(bal == 0)
          cutSeqFromRead(src_seq, (rdArray + (signed long int)i)->len, readLeft - cmpLen, readLeft - 1, slowSequence_link1);

        else
          cutSeqFromRead(bal_seq, (rdArray + (signed long int)i)->len, readLeft - cmpLen, readLeft - 1, slowSequence_link1);
        match=compareSequences_link1(fastSequence_link1, slowSequence_link1, cmpLen, cmpLen);
        alignLen = alignLen + cmpLen;
        matchLen = matchLen + match;
        ctgRight = (lenCtg2 - endOnCtg2) - overlap;
        if(!(ctgRight >= (rdArray + (signed long int)i)->len + -end + -1))
          tmp_if_expr_10 = ctgRight;

        else
          tmp_if_expr_10 = ((rdArray + (signed long int)i)->len - end) - 1;
        cmpLen = tmp_if_expr_10;
        cmpLen = cmpLen <= 100 ? cmpLen : 100;
        cutSeqFromRead(seqCtg2, lenCtg2, endOnCtg2 + overlap, (endOnCtg2 + overlap + cmpLen) - 1, fastSequence_link1);
        if(bal == 0)
          cutSeqFromRead(src_seq, (rdArray + (signed long int)i)->len, end + 1, end + cmpLen, slowSequence_link1);

        else
          cutSeqFromRead(bal_seq, (rdArray + (signed long int)i)->len, end + 1, end + cmpLen, slowSequence_link1);
        match=compareSequences_link1(fastSequence_link1, slowSequence_link1, cmpLen, cmpLen);
        alignLen = alignLen + cmpLen;
        matchLen = matchLen + match;
        double score = (double)matchLen / (double)alignLen;
        if(maxScore < score)
        {
          maxScore = score;
          maxIndex = i;
        }

        SCORE[(signed long int)i] = score;
      }

    }

  }
  signed int tmp_if_expr_11;
  signed int tmp_if_expr_12;
  signed int tmp_if_expr_14;
  signed int tmp_if_expr_15;
  if(maxScore > 0.9)
  {
    getSeqFromRead(rdArray[(signed long int)maxIndex], src_seq);
    reverseComplementSeq(src_seq, (rdArray + (signed long int)maxIndex)->len, bal_seq);
    signed int leftRemain;
    if(offset1 + -(len1 + -INDEX1[(signed long int)maxIndex] + -1) >= 1)
      tmp_if_expr_11 = offset1 - ((len1 - INDEX1[(signed long int)maxIndex]) - 1);

    else
      tmp_if_expr_11 = 0;
    leftRemain = tmp_if_expr_11;
    signed int rightRemain;
    if(offset2 + -(INDEX2[(signed long int)maxIndex] + overlap) >= 1)
      tmp_if_expr_12 = offset2 - (overlap + INDEX2[(signed long int)maxIndex]);

    else
      tmp_if_expr_12 = 0;
    rightRemain = tmp_if_expr_12;
    ctg1->gapSeqOffset = (signed int)gapSeqArray->item_c;
    ctg1->gapSeqLen = (unsigned int)((END[(signed long int)maxIndex] - START[(signed long int)maxIndex]) + leftRemain + rightRemain);
    void *return_value_darrayPut_16;
    return_value_darrayPut_16=darrayPut(gapSeqArray, (signed long long int)(ctg1->gapSeqOffset + ((END[(signed long int)maxIndex] - START[(signed long int)maxIndex]) + leftRemain + rightRemain) / 4));
    if(!(return_value_darrayPut_16 == NULL))
    {
      void *return_value_darrayPut_13;
      return_value_darrayPut_13=darrayPut(gapSeqArray, (signed long long int)ctg1->gapSeqOffset);
      pt = (char *)return_value_darrayPut_13;
      j = 0;
      for( ; !(j >= leftRemain); j = j + 1)
      {
        writeChar2tightString(seqGap[(signed long int)j], pt, j);
        fprintf(stderr, "%c", "ACTG"[(signed long int)seqGap[(signed long int)j]]);
      }
      j = START[(signed long int)maxIndex] + 1;
      for( ; END[(signed long int)maxIndex] >= j; j = j + 1)
        if(!(BAL[(signed long int)maxIndex] == 0))
        {
          writeChar2tightString(bal_seq[(signed long int)j], pt, ((j - START[(signed long int)maxIndex]) - 1) + leftRemain);
          fprintf(stderr, "%c", "ACTG"[(signed long int)bal_seq[(signed long int)j]]);
        }

        else
        {
          writeChar2tightString(src_seq[(signed long int)j], pt, ((j - START[(signed long int)maxIndex]) - 1) + leftRemain);
          fprintf(stderr, "%c", "ACTG"[(signed long int)src_seq[(signed long int)j]]);
        }
      j = offset2 - rightRemain;
      for( ; !(j >= offset2); j = j + 1)
      {
        writeChar2tightString(seqGap[(signed long int)(j + leftRemain)], pt, ((j + END[(signed long int)maxIndex]) - START[(signed long int)maxIndex]) + leftRemain);
        fprintf(stderr, "%c", "ACTG"[(signed long int)seqGap[(signed long int)(j + leftRemain)]]);
      }
      fprintf(stderr, ": GAPSEQ (%d+%d)(%d+%d)(%d+%d)(%d+%d) B %d\n", offset1, offset2, cut1, cut2, (len1 - INDEX1[(signed long int)maxIndex]) - 1, INDEX2[(signed long int)maxIndex], START[(signed long int)maxIndex], END[(signed long int)maxIndex], BAL[(signed long int)maxIndex]);
      if(!(cut1 >= len1 + -INDEX1[(signed long int)maxIndex] + -1 + cut1 + -offset1))
        tmp_if_expr_14 = (((len1 - INDEX1[(signed long int)maxIndex]) - 1) - offset1) + cut1;

      else
        tmp_if_expr_14 = cut1;
      ctg1->cutTail = (unsigned int)tmp_if_expr_14;
      if(!(cut2 >= INDEX2[(signed long int)maxIndex] + overlap + cut2 + -offset2))
        tmp_if_expr_15 = ((overlap + INDEX2[(signed long int)maxIndex]) - offset2) + cut2;

      else
        tmp_if_expr_15 = cut2;
      ctg2->cutHead = (unsigned int)tmp_if_expr_15;
      ctg2->scaftig_start = (unsigned int)0;
      ret = (char)1;
    }

  }

  free((void *)START);
  free((void *)END);
  free((void *)INDEX1);
  free((void *)INDEX2);
  free((void *)SCORE);
  free((void *)BAL);
  free((void *)src_seq);
  free((void *)bal_seq);
  return ret;
}

// readsInGap2DBgraph
// file localAsm.c line 233
static struct kmerSet_st * readsInGap2DBgraph(struct read_nearby *rdArray, signed int num, struct ctg4scaf *ctg1, struct ctg4scaf *ctg2, signed int originOverlap, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, signed int overlap, unsigned long long int WordFilter)
{
  signed int readsInGap2DBgraph__1__kmer_c;
  unsigned long long int *readsInGap2DBgraph__1__kmerBuffer;
  char *readsInGap2DBgraph__1__nextcBuffer;
  char *readsInGap2DBgraph__1__prevcBuffer;
  signed int i;
  signed int readsInGap2DBgraph__1__buffer_size = maxReadLen > 35 ? maxReadLen : 35;
  struct kmerSet_st *kmerS = (struct kmerSet_st *)(void *)0;
  signed int lenCtg1;
  signed int lenCtg2;
  char *bal_seq;
  char *src_seq;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)readsInGap2DBgraph__1__buffer_size * sizeof(char) /*1ul*/ );
  src_seq = (char *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)readsInGap2DBgraph__1__buffer_size * sizeof(char) /*1ul*/ );
  bal_seq = (char *)return_value_ckalloc_2;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)readsInGap2DBgraph__1__buffer_size * sizeof(unsigned long long int) /*8ul*/ );
  readsInGap2DBgraph__1__kmerBuffer = (unsigned long long int *)return_value_ckalloc_3;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)readsInGap2DBgraph__1__buffer_size * sizeof(char) /*1ul*/ );
  readsInGap2DBgraph__1__prevcBuffer = (char *)return_value_ckalloc_4;
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)readsInGap2DBgraph__1__buffer_size * sizeof(char) /*1ul*/ );
  readsInGap2DBgraph__1__nextcBuffer = (char *)return_value_ckalloc_5;
  kmerS=init_kmerset((unsigned long long int)1024, 0.77f);
  i = 0;
  for( ; !(i >= num); i = i + 1)
  {
    getSeqFromRead(rdArray[(signed long int)i], src_seq);
    chopKmer4read((rdArray + (signed long int)i)->len, overlap, src_seq, bal_seq, readsInGap2DBgraph__1__kmerBuffer, readsInGap2DBgraph__1__prevcBuffer, readsInGap2DBgraph__1__nextcBuffer, &readsInGap2DBgraph__1__kmer_c, WordFilter);
    putKmer2DBgraph(kmerS, 0, readsInGap2DBgraph__1__kmer_c, readsInGap2DBgraph__1__kmerBuffer, readsInGap2DBgraph__1__prevcBuffer, readsInGap2DBgraph__1__nextcBuffer);
  }
  lenCtg1=getSeqFromCtg(ctg1, (char)0, (unsigned int)35, originOverlap, src_seq);
  chopKmer4Ctg(kmerCtg1, lenCtg1, overlap, src_seq, WordFilter);
  chopKmer4read(lenCtg1, overlap, src_seq, bal_seq, readsInGap2DBgraph__1__kmerBuffer, readsInGap2DBgraph__1__prevcBuffer, readsInGap2DBgraph__1__nextcBuffer, &readsInGap2DBgraph__1__kmer_c, WordFilter);
  putKmer2DBgraph(kmerS, 1, readsInGap2DBgraph__1__kmer_c, readsInGap2DBgraph__1__kmerBuffer, readsInGap2DBgraph__1__prevcBuffer, readsInGap2DBgraph__1__nextcBuffer);
  lenCtg2=getSeqFromCtg(ctg2, (char)1, (unsigned int)35, originOverlap, src_seq);
  chopKmer4Ctg(kmerCtg2, lenCtg2, overlap, src_seq, WordFilter);
  chopKmer4read(lenCtg2, overlap, src_seq, bal_seq, readsInGap2DBgraph__1__kmerBuffer, readsInGap2DBgraph__1__prevcBuffer, readsInGap2DBgraph__1__nextcBuffer, &readsInGap2DBgraph__1__kmer_c, WordFilter);
  putKmer2DBgraph(kmerS, 2, readsInGap2DBgraph__1__kmer_c, readsInGap2DBgraph__1__kmerBuffer, readsInGap2DBgraph__1__prevcBuffer, readsInGap2DBgraph__1__nextcBuffer);
  kmerSet_mark(kmerS);
  free((void *)src_seq);
  free((void *)bal_seq);
  free((void *)readsInGap2DBgraph__1__kmerBuffer);
  free((void *)readsInGap2DBgraph__1__nextcBuffer);
  free((void *)readsInGap2DBgraph__1__prevcBuffer);
  fflush(stdout);
  return kmerS;
}

// readseq1by1
// file inc/extfunc.h line 27
extern void readseq1by1(char *src_seq, char *src_name, signed int *len_seq, struct _IO_FILE *fp, signed long long int num_seq)
{
  signed int i;
  signed int k;
  signed int n;
  signed int strL;
  char c;
  char str[5000l];
  n = 0;
  k = (signed int)num_seq;
  char *return_value_fgets_1;
  _Bool tmp_if_expr_7;
  signed int tmp_post_3;
  _Bool tmp_if_expr_6;
  signed int tmp_post_4;
  signed int tmp_post_5;
  do
  {
    return_value_fgets_1=fgets(str, 4950, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    if(!((signed int)str[0l] == 35))
    {
      if((signed int)str[0l] == 62)
      {
        *len_seq = n;
        n = 0;
        sscanf(&str[(signed long int)1], "%s", src_name);
        goto __CPROVER_DUMP_L16;
      }

      else
      {
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(str);
        strL = (signed int)return_value_strlen_2;
        if(!(maxReadLen >= n + strL))
          strL = maxReadLen - n;

        i = 0;
        for( ; !(i >= strL); i = i + 1)
        {
          if((signed int)str[(signed long int)i] >= 97)
            tmp_if_expr_7 = (signed int)str[(signed long int)i] <= 122 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_7 = (_Bool)0;
          if(tmp_if_expr_7)
          {
            c = (char)((((signed int)str[(signed long int)i] - 97) + 65 & 0x06) >> 1);
            tmp_post_3 = n;
            n = n + 1;
            src_seq[(signed long int)tmp_post_3] = c;
          }

          else
          {
            if((signed int)str[(signed long int)i] >= 65)
              tmp_if_expr_6 = (signed int)str[(signed long int)i] <= 90 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_6 = (_Bool)0;
            if(tmp_if_expr_6)
            {
              c = (char)(((signed int)str[(signed long int)i] & 0x06) >> 1);
              tmp_post_4 = n;
              n = n + 1;
              src_seq[(signed long int)tmp_post_4] = c;
            }

            else
              if((signed int)str[(signed long int)i] == 46)
              {
                c = (char)((65 & 0x06) >> 1);
                tmp_post_5 = n;
                n = n + 1;
                src_seq[(signed long int)tmp_post_5] = c;
              }

          }
        }
      }
    }

  }
  while((_Bool)1);
  if(k >= 0)
    *len_seq = n;

  else
    *len_seq = 0;

__CPROVER_DUMP_L16:
  ;
}

// readseqpar
// file inc/extfunc.h line 44
extern signed long long int readseqpar(signed int *max_leg, signed int *min_leg, signed int *max_name_leg, struct _IO_FILE *fp)
{
  signed int l;
  signed int n;
  signed long long int k;
  char str[5000l];
  char src_name[5000l];
  n = 0;
  k = (signed long long int)-1;
  char *return_value_fgets_1;
  do
  {
    return_value_fgets_1=fgets(str, 4950, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    if((signed int)str[0l] == 62)
    {
      if(k >= 0l)
      {
        if(!(*max_leg >= n))
          *max_leg = n;

        if(!(n >= *min_leg))
          *min_leg = n;

      }

      n = 0;
      k = k + 1ll;
      sscanf(&str[(signed long int)1], "%s", (const void *)src_name);
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(src_name);
      l = (signed int)return_value_strlen_2;
      if(!(*max_name_leg >= l))
        *max_name_leg = l;

    }

    else
    {
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(str);
      n = n + (signed int)(return_value_strlen_3 - (unsigned long int)1);
    }
  }
  while((_Bool)1);
  if(!(*max_leg >= n))
    *max_leg = n;

  if(!(n >= *min_leg))
    *min_leg = n;

  k = k + 1ll;
  return k;
}

// recordAlldgn
// file prlRead2Ctg.c line 443
static void recordAlldgn(struct _IO_FILE *outfp, signed int insSize, struct _IO_FILE *outfp2)
{
  signed int t;
  signed int ctgId;
  char rd1gap;
  char rd2gap;
  t = 0;
  _Bool tmp_if_expr_1;
  for( ; !(t >= read_c_link2); t = t + 1)
  {
    readCounter = readCounter + 1ll;
    rd2gap = (char)0;
    rd1gap = rd2gap;
    ctgId = (signed int)ctgIdArray_link1[(signed long int)t];
    if(t % 2 == 1 && !(outfp2 == ((struct _IO_FILE *)NULL)))
    {
      if(!(ctgIdArray_link1[(signed long int)t] >= 1u))
        tmp_if_expr_1 = ctgIdArray_link1[(signed long int)(t - 1)] > (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        getReadIngap(t, insSize, outfp2, (char)0);
        rd2gap = (char)1;
      }

      else
        if(ctgIdArray_link1[(signed long int)t] >= 1u)
        {
          if(!(ctgIdArray_link1[(signed long int)(t + -1)] >= 1u))
          {
            getReadIngap(t - 1, insSize, outfp2, (char)1);
            rd1gap = (char)1;
          }

        }

    }

    if(ctgId >= 1)
    {
      mapCounter = mapCounter + 1ll;
      fprintf(outfp, "%lld\t%u\t%d\t%c\n", readCounter, ctgIdArray_link1[(signed long int)t], posArray[(signed long int)t], orienArray[(signed long int)t]);
      if(!(t % 2 == 0))
      {
        if(!(outfp2 == ((struct _IO_FILE *)NULL)))
        {
          if(!(footprint[(signed long int)(t + -1)] == 0))
          {
            if(rd1gap == 0)
              output1read(t - 1, outfp2);

          }

        }

        if(!(outfp2 == ((struct _IO_FILE *)NULL)))
        {
          if(!(footprint[(signed long int)t] == 0))
          {
            if(rd2gap == 0)
              output1read(t, outfp2);

          }

        }

      }

    }

  }
}

// recordArcsInLookupTable
// file arc.c line 225
extern void recordArcsInLookupTable()
{
  unsigned int i;
  struct arc *ite_arc;
  i = (unsigned int)1;
  for( ; num_ed >= i; i = i + 1u)
  {
    ite_arc = (edge_array + (signed long int)i)->arcs;
    for( ; !(ite_arc == ((struct arc *)NULL)); ite_arc = ite_arc->next)
      putArc2LookupTable(i, ite_arc);
  }
}

// recordLongRead
// file prlRead2Ctg.c line 430
static void recordLongRead(struct _IO_FILE *outfp)
{
  signed int t = 0;
  for( ; !(t >= read_c_link2); t = t + 1)
  {
    readCounter = readCounter + 1ll;
    if(!(footprint[(signed long int)t] == 0))
      output1read(t, outfp);

  }
}

// recordPathBin
// file prlRead2path.c line 370
static void recordPathBin(struct _IO_FILE *outfp)
{
  signed int t;
  signed int j;
  signed int start;
  signed int finish;
  unsigned char counter;
  t = 0;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  unsigned char tmp_post_4;
  for( ; !(t >= read_c_link3); t = t + 1)
  {
    start = indexArray_link3[(signed long int)t];
    finish = indexArray_link3[(signed long int)(t + 1)];
    if(!(finish + -start >= 3))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = mixBuffer[(signed long int)start] == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = mixBuffer[(signed long int)(start + 1)] == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = mixBuffer[(signed long int)(start + 2)] == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_3)
    {
      counter = (unsigned char)0;
      j = start;
      for( ; !(j >= finish); j = j + 1)
      {
        if(mixBuffer[(signed long int)j] == 0ul)
          break;

        tmp_post_4 = counter;
        counter = counter + 1;
        fwriteBuf[(signed long int)tmp_post_4] = (unsigned int)mixBuffer[(signed long int)j];
        if(!((signed int)markerOnEdge[(signed long int)mixBuffer[(signed long int)j]] >= 255))
          markerOnEdge[(signed long int)mixBuffer[(signed long int)j]] = markerOnEdge[(signed long int)mixBuffer[(signed long int)j]] + 1;

        markCounter = markCounter + 1ll;
      }
      fwrite((const void *)&counter, sizeof(char) /*1ul*/ , (unsigned long int)1, outfp);
      fwrite((const void *)fwriteBuf, sizeof(unsigned int) /*4ul*/ , (unsigned long int)(signed int)counter, outfp);
    }

  }
}

// recoverMask
// file orderContig.c line 1669
static void recoverMask()
{
  unsigned int i;
  unsigned int ctg;
  unsigned int bal_ctg;
  unsigned int start;
  unsigned int finish;
  signed int num3;
  signed int num5;
  signed int j;
  signed int t;
  struct connection *bindCnt;
  struct connection *cnt;
  signed int min;
  signed int recoverMask__1__max;
  signed int max_steps = 5;
  signed int num_route;
  signed int length;
  signed int tempCounter;
  signed int recoverCounter = 0;
  char multiUSE;
  char change;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    (contig_array + (signed long int)i)->flag = (unsigned char)0;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)max_n_routes * sizeof(unsigned int) /*4ul*/ );
  so_far = (unsigned int *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)max_n_routes * sizeof(unsigned int *) /*8ul*/ );
  found_routes = (unsigned int **)return_value_ckalloc_2;
  j = 0;
  for( ; !(j >= max_n_routes); j = j + 1)
  {
    void *return_value_ckalloc_3;
    return_value_ckalloc_3=ckalloc((unsigned long int)max_steps * sizeof(unsigned int) /*4ul*/ );
    found_routes[(signed long int)j] = (unsigned int *)return_value_ckalloc_3;
  }
  i = (unsigned int)1;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  signed int tmp_post_6;
  signed int tmp_post_9;
  signed int tmp_post_11;
  signed int tmp_post_13;
  void *return_value_darrayPut_14;
  void *return_value_darrayGet_15;
  signed int tmp_post_16;
  void *return_value_darrayPut_17;
  void *return_value_darrayGet_18;
  signed int tmp_post_19;
  _Bool tmp_if_expr_25;
  signed int tmp_post_26;
  signed int tmp_post_29;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!((contig_array + (signed long int)i)->flag == 0))
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = (contig_array + (signed long int)i)->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = !((contig_array + (signed long int)i)->downwardConnect != ((struct connection *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_5)
    {
      bindCnt=getBindCnt(i);
      if(!(bindCnt == ((struct connection *)NULL)))
      {
        num3 = 0;
        num5 = num3;
        ctg = i;
        tmp_post_6 = num5;
        num5 = num5 + 1;
        void *return_value_darrayPut_7;
        return_value_darrayPut_7=darrayPut(scaf5, (signed long long int)tmp_post_6);
        *((unsigned int *)return_value_darrayPut_7) = i;
        (contig_array + (signed long int)i)->flag = (unsigned char)1;
        unsigned int return_value_getTwinCtg_8;
        return_value_getTwinCtg_8=getTwinCtg(i);
        (contig_array + (signed long int)return_value_getTwinCtg_8)->flag = (unsigned char)1;
        while(!(bindCnt == ((struct connection *)NULL)))
        {
          if(bindCnt->used != 0)
            break;

          setConnectUsed(ctg, bindCnt->contigID, (char)1);
          ctg = bindCnt->contigID;
          tmp_post_9 = num5;
          num5 = num5 + 1;
          void *return_value_darrayPut_10;
          return_value_darrayPut_10=darrayPut(scaf5, (signed long long int)tmp_post_9);
          *((unsigned int *)return_value_darrayPut_10) = ctg;
          bal_ctg=getTwinCtg(ctg);
          (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
          (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
          bindCnt = bindCnt->nextInScaf;
        }
        ctg=getTwinCtg(i);
        bindCnt=getBindCnt(ctg);
        while(!(bindCnt == ((struct connection *)NULL)))
        {
          if(bindCnt->used != 0)
            break;

          setConnectUsed(ctg, bindCnt->contigID, (char)1);
          ctg = bindCnt->contigID;
          bal_ctg=getTwinCtg(ctg);
          (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
          (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
          tmp_post_11 = num3;
          num3 = num3 + 1;
          void *return_value_darrayPut_12;
          return_value_darrayPut_12=darrayPut(scaf3, (signed long long int)tmp_post_11);
          *((unsigned int *)return_value_darrayPut_12) = bal_ctg;
          bindCnt = bindCnt->nextInScaf;
        }
        if(num3 + num5 >= 2)
        {
          solidCounter = 0;
          tempCounter = solidCounter;
          j = num3 - 1;
          for( ; j >= 0; j = j - 1)
          {
            tmp_post_13 = tempCounter;
            tempCounter = tempCounter + 1;
            return_value_darrayPut_14=darrayPut(tempArray, (signed long long int)tmp_post_13);
            return_value_darrayGet_15=darrayGet(scaf3, (signed long long int)j);
            *((unsigned int *)return_value_darrayPut_14) = *((unsigned int *)return_value_darrayGet_15);
          }
          j = 0;
          for( ; !(j >= num5); j = j + 1)
          {
            tmp_post_16 = tempCounter;
            tempCounter = tempCounter + 1;
            return_value_darrayPut_17=darrayPut(tempArray, (signed long long int)tmp_post_16);
            return_value_darrayGet_18=darrayGet(scaf5, (signed long long int)j);
            *((unsigned int *)return_value_darrayPut_17) = *((unsigned int *)return_value_darrayGet_18);
          }
          change = (char)0;
          t = 0;
          for( ; !(t >= tempCounter + -1); t = t + 1)
          {
            tmp_post_19 = solidCounter;
            solidCounter = solidCounter + 1;
            void *return_value_darrayPut_20;
            return_value_darrayPut_20=darrayPut(solidArray, (signed long long int)tmp_post_19);
            void *return_value_darrayGet_21;
            return_value_darrayGet_21=darrayGet(tempArray, (signed long long int)t);
            *((unsigned int *)return_value_darrayPut_20) = *((unsigned int *)return_value_darrayGet_21);
            void *return_value_darrayGet_22;
            return_value_darrayGet_22=darrayGet(tempArray, (signed long long int)t);
            start = *((unsigned int *)return_value_darrayGet_22);
            void *return_value_darrayGet_23;
            return_value_darrayGet_23=darrayGet(tempArray, (signed long long int)(t + 1));
            finish = *((unsigned int *)return_value_darrayGet_23);
            num_trace = 0;
            num_route = num_trace;
            cnt=checkConnect(start, finish);
            if(cnt == ((struct connection *)NULL))
            {
              printf("Warning from recoverMask: no connection (%d %d), start at %d\n", start, finish, i);
              cnt=getCntBetween(start, finish);
              if(!(cnt == ((struct connection *)NULL)))
                debugging1(start, finish);

            }

            else
            {
              length = (signed int)((unsigned int)cnt->gapLen + (contig_array + (signed long int)finish)->length);
              min = (signed int)((double)length - 1.5 * (double)ins_size_var);
              recoverMask__1__max = (signed int)((double)length + 1.5 * (double)ins_size_var);
              traceAlongMaskedCnt(finish, start, max_steps, min, recoverMask__1__max, 0, 0, &num_route);
              if(finish == start)
              {
                j = 0;
                for( ; !(j >= tempCounter); j = j + 1)
                {
                  void *return_value_darrayGet_24;
                  return_value_darrayGet_24=darrayGet(tempArray, (signed long long int)j);
                  printf("->%d", *((unsigned int *)return_value_darrayGet_24));
                }
                printf(": start at %d\n", i);
              }

              if(num_route == 1)
              {
                j = 0;
                for( ; !(j >= max_steps); j = j + 1)
                  if((*found_routes)[(signed long int)j] == 0u)
                    break;

                if(!(j >= 1))
                  goto __CPROVER_DUMP_L31;

                multiUSE=setUsed(start, found_routes[(signed long int)0], max_steps, (char)1);
                if(!(multiUSE == 0))
                  goto __CPROVER_DUMP_L31;

                j = 0;
                for( ; !(j >= max_steps); j = j + 1)
                {
                  if(1 + j == max_steps)
                    tmp_if_expr_25 = (_Bool)1;

                  else
                    tmp_if_expr_25 = found_routes[(signed long int)0][(signed long int)(j + 1)] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr_25)
                    break;

                  tmp_post_26 = solidCounter;
                  solidCounter = solidCounter + 1;
                  void *return_value_darrayPut_27;
                  return_value_darrayPut_27=darrayPut(solidArray, (signed long long int)tmp_post_26);
                  *((unsigned int *)return_value_darrayPut_27) = found_routes[(signed long int)0][(signed long int)j];
                  (contig_array + (signed long int)found_routes[(signed long int)0][(signed long int)j])->flag = (unsigned char)1;
                  unsigned int return_value_getTwinCtg_28;
                  return_value_getTwinCtg_28=getTwinCtg(found_routes[(signed long int)0][(signed long int)j]);
                  (contig_array + (signed long int)return_value_getTwinCtg_28)->flag = (unsigned char)1;
                }
                recoverCounter = recoverCounter + j;
                setConnectDelete(start, finish, (char)1, (char)1);
                change = (char)1;
              }

            }

          __CPROVER_DUMP_L31:
            ;
          }
          tmp_post_29 = solidCounter;
          solidCounter = solidCounter + 1;
          void *return_value_darrayPut_30;
          return_value_darrayPut_30=darrayPut(solidArray, (signed long long int)tmp_post_29);
          void *return_value_darrayGet_31;
          return_value_darrayGet_31=darrayGet(tempArray, (signed long long int)(tempCounter - 1));
          *((unsigned int *)return_value_darrayPut_30) = *((unsigned int *)return_value_darrayGet_31);
          if(!(change == 0))
            consolidate();

        }

      }

    }

  }
  printf("%d contigs recovered\n", recoverCounter);
  fflush(stdout);
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
  {
    cnt = (contig_array + (signed long int)i)->downwardConnect;
    for( ; !(cnt == ((struct connection *)NULL)); cnt = cnt->next)
    {
      cnt->used = (unsigned char)0;
      cnt->checking = (unsigned char)0;
    }
  }
  j = 0;
  for( ; !(j >= max_n_routes); j = j + 1)
    free((void *)found_routes[(signed long int)j]);
  free((void *)found_routes);
  free((void *)so_far);
}

// reduceNode
// file bubble.c line 1269
static void reduceNode(unsigned int node)
{
  unsigned int bal_ed;
  bal_ed=getTwinEdge(node);
  (edge_array + (signed long int)node)->length = 0;
  (edge_array + (signed long int)bal_ed)->length = 0;
}

// reduceSlowNodes
// file bubble.c line 1276
static void reduceSlowNodes(struct readinterval *slowMarker, unsigned int finish)
{
  struct readinterval *marker = slowMarker;
  for( ; !(marker->edgeid == finish); marker = marker->nextInRead)
    reduceNode(marker->edgeid);
}

// remapBackOfNodeArcsOntoNeighbour
// file bubble.c line 1225
static void remapBackOfNodeArcsOntoNeighbour(unsigned int source, unsigned int target)
{
  struct arc *arc;
  unsigned int return_value_getTwinEdge_1;
  return_value_getTwinEdge_1=getTwinEdge(source);
  unsigned int return_value_getTwinEdge_2;
  return_value_getTwinEdge_2=getTwinEdge(target);
  remapNodeArcsOntoTarget(return_value_getTwinEdge_1, return_value_getTwinEdge_2);
  arc = (edge_array + (signed long int)source)->arcs;
  for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
    createAnalogousArc(target, source, arc);
}

// remapBackOfNodeDescriptorOntoNeighbour
// file bubble.c line 1159
static void remapBackOfNodeDescriptorOntoNeighbour(unsigned int source, unsigned int target, char slowToFast, signed int offset)
{
  unsigned int bal_source;
  bal_source=getTwinEdge(source);
  unsigned int bal_target;
  bal_target=getTwinEdge(target);
  if(!(slowToFast == 0))
    splitNodeDescriptor(source, (unsigned int)0, offset);

  else
    splitNodeDescriptor(source, target, offset);
  (edge_array + (signed long int)source)->from_vt = (edge_array + (signed long int)target)->to_vt;
  (edge_array + (signed long int)bal_source)->to_vt = (edge_array + (signed long int)bal_target)->from_vt;
}

// remapBackOfNodeMarkersOntoNeighbour
// file bubble.c line 970
static signed int remapBackOfNodeMarkersOntoNeighbour(unsigned int source, struct readinterval *sourceMarker, unsigned int target, struct readinterval *targetMarker, char slowToFast)
{
  struct readinterval *marker;
  struct readinterval *newMarker;
  struct readinterval *bal_new;
  struct readinterval *previousMarker;
  signed int halfwayPoint;
  signed int halfwayPointOffset;
  signed int breakpoint;
  signed int *targetToSourceMapping;
  signed int *sourceToTargetMapping;
  unsigned int bal_ed;
  signed int targetFinish = targetMarker->bal_rv->start;
  signed int sourceStart = sourceMarker->start;
  signed int sourceFinish = sourceMarker->bal_rv->start;
  signed int alignedSourceLength = sourceFinish - sourceStart;
  signed int realSourceLength = (edge_array + (signed long int)source)->length;
  if(!(slowToFast == 0))
  {
    sourceToTargetMapping = slowToFastMapping;
    targetToSourceMapping = fastToSlowMapping;
  }

  else
  {
    sourceToTargetMapping = fastToSlowMapping;
    targetToSourceMapping = slowToFastMapping;
  }
  if(alignedSourceLength >= 1 && targetFinish >= 1)
  {
    halfwayPoint = (targetToSourceMapping[(signed long int)(targetFinish - 1)] - sourceStart) + 1;
    halfwayPoint = halfwayPoint * realSourceLength;
    halfwayPoint = halfwayPoint / alignedSourceLength;
  }

  else
    halfwayPoint = 0;
  if(!(halfwayPoint >= 0))
    halfwayPoint = 0;

  if(!(realSourceLength >= halfwayPoint))
    halfwayPoint = realSourceLength;

  halfwayPointOffset = realSourceLength - halfwayPoint;
  bal_ed=getTwinEdge(target);
  marker = (edge_array + (signed long int)source)->rv;
  for( ; !(marker == ((struct readinterval *)NULL)); marker = marker->nextOnEdge)
  {
    if(!(marker->prevInRead == ((struct readinterval *)NULL)))
    {
      if(marker->prevInRead->edgeid == target)
        goto __CPROVER_DUMP_L11;

    }

    newMarker=allocateRV(marker->readid, (signed int)target);
    (edge_array + (signed long int)target)->rv=addRv((edge_array + (signed long int)target)->rv, newMarker);
    bal_new=allocateRV(-marker->readid, (signed int)bal_ed);
    (edge_array + (signed long int)bal_ed)->rv=addRv((edge_array + (signed long int)bal_ed)->rv, bal_new);
    newMarker->bal_rv = bal_new;
    bal_new->bal_rv = newMarker;
    newMarker->start = marker->start;
    if(realSourceLength >= 1)
      breakpoint = halfwayPoint + marker->start;

    else
      breakpoint = marker->start;
    bal_new->start = breakpoint;
    marker->start = breakpoint;
    previousMarker = marker->prevInRead;
    connectInRead(previousMarker, newMarker);
    connectInRead(newMarker, marker);

  __CPROVER_DUMP_L11:
    ;
  }
  return halfwayPointOffset;
}

// remapBackOfNodeOntoNeighbour
// file bubble.c line 1236
static void remapBackOfNodeOntoNeighbour(unsigned int source, struct readinterval *sourceMarker, unsigned int target, struct readinterval *targetMarker, char slowToFast)
{
  signed int offset;
  offset=remapBackOfNodeMarkersOntoNeighbour(source, sourceMarker, target, targetMarker, slowToFast);
  remapBackOfNodeDescriptorOntoNeighbour(source, target, slowToFast, offset);
  combineCOV(source, (edge_array + (signed long int)target)->length, target, (edge_array + (signed long int)target)->length);
  remapBackOfNodeTimesOntoNeighbour(source, target);
  remapBackOfNodeArcsOntoNeighbour(source, target);
  unsigned int return_value_getTwinEdge_1;
  return_value_getTwinEdge_1=getTwinEdge(source);
  unsigned int return_value_getTwinEdge_2;
  return_value_getTwinEdge_2=getTwinEdge(target);
  remapNodeFibHeapReferencesOntoNode(return_value_getTwinEdge_1, return_value_getTwinEdge_2);
  unsigned int return_value_getTwinEdge_3;
  return_value_getTwinEdge_3=getTwinEdge(source);
  if(return_value_getTwinEdge_3 == startingNode)
    startingNode=getTwinEdge(target);

}

// remapBackOfNodeTimesOntoNeighbour
// file bubble.c line 1176
static void remapBackOfNodeTimesOntoNeighbour(unsigned int source, unsigned int target)
{
  double targetTime = times[(signed long int)target];
  double nodeTime = times[(signed long int)source];
  unsigned int twinTarget;
  twinTarget=getTwinEdge(target);
  unsigned int twinSource;
  twinSource=getTwinEdge(source);
  unsigned int previousNode;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  char return_value_isPreviousToNode_1;
  if(IEEE_FLOAT_NOTEQUAL(nodeTime, -1.000000))
  {
    previousNode = previous[(signed long int)source];
    if(previousNode == source)
    {
      times[(signed long int)target] = nodeTime;
      previous[(signed long int)target] = target;
    }

    else
    {
      if(targetTime > nodeTime || IEEE_FLOAT_EQUAL(targetTime, -1.000000))
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        if(IEEE_FLOAT_EQUAL(targetTime, nodeTime))
        {
          return_value_isPreviousToNode_1=isPreviousToNode(target, previousNode);
          tmp_if_expr_2 = !(return_value_isPreviousToNode_1 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_2 = (_Bool)0;
        tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_3)
      {
        times[(signed long int)target] = nodeTime;
        if(!(previousNode == twinSource))
          previous[(signed long int)target] = previousNode;

        else
          previous[(signed long int)target] = twinTarget;
      }

    }
    previous[(signed long int)source] = target;
  }

  targetTime = times[(signed long int)twinTarget];
  nodeTime = times[(signed long int)twinSource];
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  char return_value_isPreviousToNode_4;
  if(IEEE_FLOAT_NOTEQUAL(nodeTime, -1.000000))
  {
    if(targetTime > nodeTime || IEEE_FLOAT_EQUAL(targetTime, -1.000000))
      tmp_if_expr_6 = (_Bool)1;

    else
    {
      if(IEEE_FLOAT_EQUAL(targetTime, nodeTime))
      {
        return_value_isPreviousToNode_4=isPreviousToNode(twinTarget, twinSource);
        tmp_if_expr_5 = !(return_value_isPreviousToNode_4 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_5 = (_Bool)0;
      tmp_if_expr_6 = tmp_if_expr_5 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_6)
    {
      times[(signed long int)twinTarget] = nodeTime;
      previous[(signed long int)twinTarget] = twinSource;
    }

  }

  remapNodeInwardReferencesOntoNode(twinSource, twinTarget);
}

// remapEmptyPathArcsOntoMiddlePathSimple
// file bubble.c line 1312
static void remapEmptyPathArcsOntoMiddlePathSimple(struct readinterval *emptyPath, struct readinterval *targetPath)
{
  struct readinterval *pathMarker;
  struct readinterval *marker;
  unsigned int start = emptyPath->prevInRead->edgeid;
  unsigned int finish = emptyPath->edgeid;
  unsigned int previousNode = start;
  unsigned int currentNode;
  struct arc *originalArc;
  originalArc=getArcBetween(start, finish);
  if(originalArc == ((struct arc *)NULL))
  {
    printf("remapEmptyPathArcsOntoMiddlePathSimple: no arc between %d and %d\n", start, finish);
    marker = fastPath;
    printf("fast path: ");
    for( ; !(marker == ((struct readinterval *)NULL)); marker = marker->nextInRead)
      printf("%d,", marker->edgeid);
    printf("\n");
    marker = slowPath;
    printf("slow path: ");
    for( ; !(marker == ((struct readinterval *)NULL)); marker = marker->nextInRead)
      printf("%d,", marker->edgeid);
    printf("\n");
    fflush(stdout);
  }

  pathMarker = targetPath;
  for( ; !(pathMarker->edgeid == finish); pathMarker = pathMarker->nextInRead)
  {
    currentNode = pathMarker->edgeid;
    createAnalogousArc(previousNode, currentNode, originalArc);
    previousNode = currentNode;
  }
  createAnalogousArc(previousNode, finish, originalArc);
  destroyArc(start, originalArc);
}

// remapEmptyPathMarkersOntoMiddlePathSimple
// file bubble.c line 1363
static void remapEmptyPathMarkersOntoMiddlePathSimple(struct readinterval *emptyPath, struct readinterval *targetPath, char slowToFast)
{
  struct readinterval *marker;
  struct readinterval *newMarker;
  struct readinterval *previousMarker;
  struct readinterval *pathMarker;
  struct readinterval *bal_marker;
  unsigned int start = emptyPath->prevInRead->edgeid;
  unsigned int finish = emptyPath->edgeid;
  unsigned int markerStart;
  unsigned int bal_ed;
  struct readinterval *oldMarker = (edge_array + (signed long int)finish)->rv;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  while(!(oldMarker == ((struct readinterval *)NULL)))
  {
    marker = oldMarker;
    oldMarker = marker->nextOnEdge;
    newMarker = marker->prevInRead;
    if(newMarker->edgeid == start)
    {
      if(!(slowToFast == 0))
        tmp_if_expr_1 = marker->readid != 2 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_3 = (_Bool)1;

      else
      {
        if(slowToFast == 0)
          tmp_if_expr_2 = marker->readid != 1 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr_3)
      {
        markerStart = (unsigned int)marker->start;
        pathMarker = targetPath;
        for( ; !(pathMarker->edgeid == finish); pathMarker = pathMarker->nextInRead)
        {
          previousMarker = newMarker;
          newMarker=allocateRV(marker->readid, (signed int)pathMarker->edgeid);
          newMarker->start = (signed int)markerStart;
          (edge_array + (signed long int)pathMarker->edgeid)->rv=addRv((edge_array + (signed long int)pathMarker->edgeid)->rv, newMarker);
          bal_ed=getTwinEdge(pathMarker->edgeid);
          bal_marker=allocateRV(-marker->readid, (signed int)bal_ed);
          bal_marker->start = (signed int)markerStart;
          (edge_array + (signed long int)bal_ed)->rv=addRv((edge_array + (signed long int)bal_ed)->rv, bal_marker);
          newMarker->bal_rv = bal_marker;
          bal_marker->bal_rv = newMarker;
          connectInRead(previousMarker, newMarker);
        }
        connectInRead(newMarker, marker);
      }

    }

  }
}

// remapEmptyPathOntoMiddlePath
// file bubble.c line 1470
static void remapEmptyPathOntoMiddlePath(struct readinterval *emptyPath, struct readinterval *targetPath, char slowToFast)
{
  unsigned int start = emptyPath->prevInRead->edgeid;
  unsigned int finish = emptyPath->edgeid;
  char return_value_markerLeadsToArc_1;
  return_value_markerLeadsToArc_1=markerLeadsToArc(targetPath, start, finish);
  if(return_value_markerLeadsToArc_1 == 0)
    remapEmptyPathArcsOntoMiddlePathSimple(emptyPath, targetPath);

  remapEmptyPathMarkersOntoMiddlePathSimple(emptyPath, targetPath, slowToFast);
  unsigned int return_value_getNodePrevious_2;
  return_value_getNodePrevious_2=getNodePrevious(finish);
  if(return_value_getNodePrevious_2 == start)
    remapNodeTimesOntoForwardMiddlePath(finish, targetPath);

  unsigned int return_value_getTwinEdge_3;
  return_value_getTwinEdge_3=getTwinEdge(start);
  unsigned int return_value_getNodePrevious_4;
  return_value_getNodePrevious_4=getNodePrevious(return_value_getTwinEdge_3);
  unsigned int return_value_getTwinEdge_5;
  return_value_getTwinEdge_5=getTwinEdge(finish);
  if(return_value_getNodePrevious_4 == return_value_getTwinEdge_5)
    remapNodeTimesOntoTwinMiddlePath(finish, targetPath);

}

// remapNodeArcsOntoNeighbour
// file bubble.c line 866
static void remapNodeArcsOntoNeighbour(unsigned int source, unsigned int target)
{
  remapNodeArcsOntoTarget(source, target);
  unsigned int return_value_getTwinEdge_1;
  return_value_getTwinEdge_1=getTwinEdge(source);
  unsigned int return_value_getTwinEdge_2;
  return_value_getTwinEdge_2=getTwinEdge(target);
  remapNodeArcsOntoTarget(return_value_getTwinEdge_1, return_value_getTwinEdge_2);
}

// remapNodeArcsOntoTarget
// file bubble.c line 844
static void remapNodeArcsOntoTarget(unsigned int source, unsigned int target)
{
  struct arc *arc;
  if(source == activeNode)
    activeNode = target;

  arc = (edge_array + (signed long int)source)->arcs;
  if(!(arc == ((struct arc *)NULL)))
    for( ; !(arc == ((struct arc *)NULL)); arc = (edge_array + (signed long int)source)->arcs)
    {
      createAnalogousArc(target, arc->to_ed, arc);
      destroyArc(source, arc);
    }

}

// remapNodeFibHeapReferencesOntoNode
// file bubble.c line 883
static void remapNodeFibHeapReferencesOntoNode(unsigned int source, unsigned int target)
{
  struct dfibheap_el *sourceDHeapNode;
  sourceDHeapNode=getNodeDHeapNode(source);
  struct dfibheap_el *targetDHeapNode;
  targetDHeapNode=getNodeDHeapNode(target);
  double return_value_getKey_1;
  double return_value_getKey_2;
  if(!(sourceDHeapNode == ((struct dfibheap_el *)NULL)))
  {
    if(targetDHeapNode == ((struct dfibheap_el *)NULL))
    {
      setNodeDHeapNode(target, sourceDHeapNode);
      replaceValueInDHeap(sourceDHeapNode, target);
    }

    else
    {
      return_value_getKey_1=getKey(targetDHeapNode);
      return_value_getKey_2=getKey(sourceDHeapNode);
      if(return_value_getKey_1 > return_value_getKey_2)
      {
        setNodeDHeapNode(target, sourceDHeapNode);
        replaceValueInDHeap(sourceDHeapNode, target);
        destroyNodeInDHeap(targetDHeapNode, dheap);
      }

      else
        destroyNodeInDHeap(sourceDHeapNode, dheap);
    }
    setNodeDHeapNode(source, (struct dfibheap_el *)(void *)0);
  }

}

// remapNodeInwardReferencesOntoNode
// file bubble.c line 710
static void remapNodeInwardReferencesOntoNode(unsigned int source, unsigned int target)
{
  struct arc *arc;
  unsigned int destination;
  arc = (edge_array + (signed long int)source)->arcs;
  for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
  {
    destination = arc->to_ed;
    if(!(destination == source) && !(destination == target))
    {
      if(previous[(signed long int)destination] == source)
        previous[(signed long int)destination] = target;

    }

  }
}

// remapNodeMarkersOntoNeighbour
// file bubble.c line 691
static void remapNodeMarkersOntoNeighbour(unsigned int source, unsigned int target)
{
  struct readinterval *marker;
  struct readinterval *bal_marker;
  unsigned int bal_source;
  bal_source=getTwinEdge(source);
  unsigned int bal_target;
  bal_target=getTwinEdge(target);
  do
  {
    marker = (edge_array + (signed long int)source)->rv;
    if(marker == ((struct readinterval *)NULL))
      break;

    (edge_array + (signed long int)source)->rv=deleteRv((edge_array + (signed long int)source)->rv, marker);
    marker->edgeid = target;
    (edge_array + (signed long int)target)->rv=addRv((edge_array + (signed long int)target)->rv, marker);
    bal_marker = marker->bal_rv;
    (edge_array + (signed long int)bal_source)->rv=deleteRv((edge_array + (signed long int)bal_source)->rv, bal_marker);
    bal_marker->edgeid = bal_target;
    (edge_array + (signed long int)bal_target)->rv=addRv((edge_array + (signed long int)bal_target)->rv, bal_marker);
  }
  while((_Bool)1);
}

// remapNodeOntoNeighbour
// file bubble.c line 922
static void remapNodeOntoNeighbour(unsigned int source, unsigned int target)
{
  combineCOV(source, (edge_array + (signed long int)source)->length, target, (edge_array + (signed long int)target)->length);
  remapNodeMarkersOntoNeighbour(source, target);
  remapNodeTimesOntoNeighbour(source, target);
  remapNodeArcsOntoNeighbour(source, target);
  remapNodeFibHeapReferencesOntoNode(source, target);
  unsigned int return_value_getTwinEdge_1;
  return_value_getTwinEdge_1=getTwinEdge(source);
  unsigned int return_value_getTwinEdge_2;
  return_value_getTwinEdge_2=getTwinEdge(target);
  remapNodeFibHeapReferencesOntoNode(return_value_getTwinEdge_1, return_value_getTwinEdge_2);
  (edge_array + (signed long int)source)->deleted = (unsigned short int)1;
  unsigned int return_value_getTwinEdge_3;
  return_value_getTwinEdge_3=getTwinEdge(source);
  (edge_array + (signed long int)return_value_getTwinEdge_3)->deleted = (unsigned short int)1;
  if(startingNode == source)
    startingNode = target;

  unsigned int return_value_getTwinEdge_4;
  return_value_getTwinEdge_4=getTwinEdge(source);
  if(startingNode == return_value_getTwinEdge_4)
    startingNode=getTwinEdge(target);

  (edge_array + (signed long int)source)->length = 0;
  unsigned int return_value_getTwinEdge_5;
  return_value_getTwinEdge_5=getTwinEdge(source);
  (edge_array + (signed long int)return_value_getTwinEdge_5)->length = 0;
}

// remapNodeTimesOntoForwardMiddlePath
// file bubble.c line 1410
static void remapNodeTimesOntoForwardMiddlePath(unsigned int source, struct readinterval *path)
{
  struct readinterval *marker;
  unsigned int target;
  double nodeTime = times[(signed long int)source];
  unsigned int previousNode = previous[(signed long int)source];
  double targetTime;
  marker = path;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  char return_value_isPreviousToNode_1;
  for( ; !(marker->edgeid == source); marker = marker->nextInRead)
  {
    target = marker->edgeid;
    targetTime = times[(signed long int)target];
    if(targetTime > nodeTime || IEEE_FLOAT_EQUAL(targetTime, -1.000000))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(IEEE_FLOAT_EQUAL(targetTime, nodeTime))
      {
        return_value_isPreviousToNode_1=isPreviousToNode(target, previousNode);
        tmp_if_expr_2 = !(return_value_isPreviousToNode_1 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      times[(signed long int)target] = nodeTime;
      previous[(signed long int)target] = previousNode;
    }

    previousNode = target;
  }
  previous[(signed long int)source] = previousNode;
}

// remapNodeTimesOntoNeighbour
// file bubble.c line 757
static void remapNodeTimesOntoNeighbour(unsigned int source, unsigned int target)
{
  remapNodeTimesOntoTargetNode(source, target);
  unsigned int return_value_getTwinEdge_1;
  return_value_getTwinEdge_1=getTwinEdge(source);
  unsigned int return_value_getTwinEdge_2;
  return_value_getTwinEdge_2=getTwinEdge(target);
  remapNodeTimesOntoTargetNode(return_value_getTwinEdge_1, return_value_getTwinEdge_2);
}

// remapNodeTimesOntoTargetNode
// file bubble.c line 726
static void remapNodeTimesOntoTargetNode(unsigned int source, unsigned int target)
{
  double nodeTime = times[(signed long int)source];
  unsigned int prevNode = previous[(signed long int)source];
  double targetTime = times[(signed long int)target];
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  char return_value_isPreviousToNode_2;
  if(!IEEE_FLOAT_EQUAL(nodeTime, -1.000000))
  {
    if(prevNode == source)
    {
      times[(signed long int)target] = nodeTime;
      previous[(signed long int)target] = target;
    }

    else
    {
      if(targetTime > nodeTime || IEEE_FLOAT_EQUAL(targetTime, -1.000000))
        tmp_if_expr_4 = (_Bool)1;

      else
      {
        if(IEEE_FLOAT_EQUAL(targetTime, nodeTime))
        {
          return_value_isPreviousToNode_2=isPreviousToNode(target, prevNode);
          tmp_if_expr_3 = !(return_value_isPreviousToNode_2 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_3 = (_Bool)0;
        tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_4)
      {
        times[(signed long int)target] = nodeTime;
        unsigned int return_value_getTwinEdge_1;
        return_value_getTwinEdge_1=getTwinEdge(source);
        if(!(prevNode == return_value_getTwinEdge_1))
          previous[(signed long int)target] = prevNode;

        else
          previous[(signed long int)target]=getTwinEdge(target);
      }

    }
    remapNodeInwardReferencesOntoNode(source, target);
    previous[(signed long int)source] = (unsigned int)0;
  }

}

// remapNodeTimesOntoTwinMiddlePath
// file bubble.c line 1437
static void remapNodeTimesOntoTwinMiddlePath(unsigned int source, struct readinterval *path)
{
  struct readinterval *marker;
  unsigned int target;
  unsigned int previousNode;
  previousNode=getTwinEdge(source);
  double targetTime;
  struct readinterval *limit = path->prevInRead->bal_rv;
  double nodeTime = times[(signed long int)limit->edgeid];
  marker = path;
  for( ; !(marker->edgeid == source); marker = marker->nextInRead)
    ;
  marker = marker->bal_rv;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  char return_value_isPreviousToNode_1;
  while(!(marker == limit))
  {
    marker = marker->nextInRead;
    target = marker->edgeid;
    targetTime = times[(signed long int)target];
    if(targetTime > nodeTime || IEEE_FLOAT_EQUAL(targetTime, -1.000000))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(IEEE_FLOAT_EQUAL(targetTime, nodeTime))
      {
        return_value_isPreviousToNode_1=isPreviousToNode(target, previousNode);
        tmp_if_expr_2 = !(return_value_isPreviousToNode_1 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      times[(signed long int)target] = nodeTime;
      previous[(signed long int)target] = previousNode;
    }

    previousNode = target;
  }
}

// removeArcInLookupTable
// file arc.c line 193
extern void removeArcInLookupTable(unsigned int from_ed, unsigned int to_ed)
{
  unsigned int index = (unsigned int)2 * from_ed + to_ed;
  struct arc *ite_arc = arcLookupTable[(signed long int)index];
  struct arc *arc;
  if(ite_arc == ((struct arc *)NULL))
    printf("removeArcInLookupTable: not found A\n");

  else
    if(ite_arc->to_ed == to_ed)
      arcLookupTable[(signed long int)index] = ite_arc->nextInLookupTable;

    else
    {
      for( ; !(ite_arc->nextInLookupTable == ((struct arc *)NULL)); ite_arc = ite_arc->nextInLookupTable)
        if(ite_arc->nextInLookupTable->to_ed == to_ed)
          break;

      if(!(ite_arc->nextInLookupTable == ((struct arc *)NULL)))
      {
        arc = ite_arc->nextInLookupTable;
        ite_arc->nextInLookupTable = arc->nextInLookupTable;
      }

      else
      {
        printf("removeArcInLookupTable: not found B\n");
        goto __CPROVER_DUMP_L5;
      }
    }

__CPROVER_DUMP_L5:
  ;
}

// removeDeadArcs
// file cutTip_graph.c line 330
extern void removeDeadArcs()
{
  unsigned int i;
  unsigned int count = (unsigned int)0;
  struct arc *arc;
  struct arc *arc_temp;
  i = (unsigned int)1;
  for( ; num_ed >= i; i = i + 1u)
  {
    arc = (edge_array + (signed long int)i)->arcs;
    while(!(arc == ((struct arc *)NULL)))
    {
      arc_temp = arc;
      arc = arc->next;
      if(arc_temp->to_ed == 0u)
      {
        count = count + 1u;
        (edge_array + (signed long int)i)->arcs=deleteArc((edge_array + (signed long int)i)->arcs, arc_temp);
      }

    }
  }
  printf("%d dead arcs removed\n", count);
}

// removeLowCovEdges
// file inc/extfunc.h line 216
extern void removeLowCovEdges(signed int lenCutoff, unsigned short int covCutoff)
{
  unsigned int bal_ed;
  unsigned int arcRight_n;
  unsigned int arcLeft_n;
  struct arc *arcLeft;
  struct arc *arcRight;
  unsigned int i;
  signed int counter = 0;
  i = (unsigned int)1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  char return_value_EdSameAsTwin_4;
  _Bool tmp_if_expr_6;
  for( ; num_ed >= i; i = i + 1u)
  {
    if(!((edge_array + (signed long int)i)->deleted == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (signed int)(edge_array + (signed long int)i)->cvg == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (signed int)(edge_array + (signed long int)i)->cvg > (signed int)covCutoff * 10 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (edge_array + (signed long int)i)->length >= lenCutoff ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_EdSameAsTwin_4=EdSameAsTwin(i);
      tmp_if_expr_5 = return_value_EdSameAsTwin_4 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = (edge_array + (signed long int)i)->length == 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_6)
    {
      bal_ed=getTwinEdge(i);
      arcRight=arcCount(i, &arcRight_n);
      arcLeft=arcCount(bal_ed, &arcLeft_n);
      if(arcLeft_n >= 1u && arcRight_n >= 1u)
      {
        destroyEdge(i);
        counter = counter + 1;
      }

    }

  }
  printf("Remove low coverage(%d): %d inner edges destroyed\n", covCutoff, counter);
  removeDeadArcs();
  linearConcatenate();
  compactEdgeArray();
}

// removeMinorTips
// file cutTipPreGraph.c line 313
extern void removeMinorTips()
{
  signed int i;
  signed int flag = 0;
  signed int cut_len_tip;
  struct kmer_st *rs;
  struct kmerSet_st *set;
  cut_len_tip = 2 * overlaplen;
  printf("Start to remove tips which don't contribute the most links\n");
  tip_c = 0;
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
  {
    set = KmerSets[(signed long int)i];
    flag = 1;
    while(!(flag == 0))
    {
      flag = 0;
      set->iter_ptr = (unsigned long long int)0;
      for( ; !(set->iter_ptr >= set->size); set->iter_ptr = set->iter_ptr + 1ull)
        if((1u & set->flags[(signed long int)(set->iter_ptr >> 4)] >> ((15ul & set->iter_ptr) << 1)) == 0u)
        {
          rs = set->array + (signed long int)set->iter_ptr;
          signed int return_value_clipTipFromNode_1;
          return_value_clipTipFromNode_1=clipTipFromNode(rs, cut_len_tip, (char)0);
          flag = flag + return_value_clipTipFromNode_1;
        }

    }
    printf("kmer set %d done\n", i);
  }
  printf("%d tips off\n", tip_c);
  Mark1in1outNode();
}

// removeNextNodeFromDHeap
// file inc/dfibHeap.h line 32
unsigned int removeNextNodeFromDHeap(struct dfibheap *heap)
{
  unsigned int node;
  unsigned int return_value_dfh_extractmin_1;
  return_value_dfh_extractmin_1=dfh_extractmin(heap);
  node = (unsigned int)return_value_dfh_extractmin_1;
  return node;
}

// removeNextNodeFromHeap
// file fibHeap.c line 53
unsigned int removeNextNodeFromHeap(struct fibheap *heap)
{
  unsigned int return_value_fh_extractmin_1;
  return_value_fh_extractmin_1=fh_extractmin(heap);
  return (unsigned int)return_value_fh_extractmin_1;
}

// removeSingleTips
// file cutTipPreGraph.c line 281
extern void removeSingleTips()
{
  signed int i;
  signed int flag = 0;
  signed int cut_len_tip;
  struct kmer_st *rs;
  struct kmerSet_st *set;
  cut_len_tip = 2 * overlaplen;
  printf("Start to remove tips of single frequency kmers short than %d\n", cut_len_tip);
  tip_c = 0;
  i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
  {
    set = KmerSets[(signed long int)i];
    set->iter_ptr = (unsigned long long int)0;
    for( ; !(set->iter_ptr >= set->size); set->iter_ptr = set->iter_ptr + 1ull)
      if((1u & set->flags[(signed long int)(set->iter_ptr >> 4)] >> ((15ul & set->iter_ptr) << 1)) == 0u)
      {
        rs = set->array + (signed long int)set->iter_ptr;
        signed int return_value_clipTipFromNode_1;
        return_value_clipTipFromNode_1=clipTipFromNode(rs, cut_len_tip, (char)1);
        flag = flag + return_value_clipTipFromNode_1;
      }

  }
  printf("%d tips off\n", tip_c);
  Mark1in1outNode();
}

// removeTransitive
// file orderContig.c line 1139
static void removeTransitive()
{
  unsigned int i;
  unsigned int bal_ctg;
  signed int flag = 1;
  signed int out_num;
  signed int in_num;
  signed int count;
  signed int min;
  signed int removeTransitive__1__max;
  signed int linear;
  struct connection *cn_temp;
  struct connection *cn1 = (struct connection *)(void *)0;
  struct connection *cn2 = (struct connection *)(void *)0;
  _Bool tmp_if_expr_1;
  void *return_value_darrayGet_5;
  void *return_value_darrayGet_6;
  while(!(flag == 0))
  {
    flag = 0;
    i = (unsigned int)1;
    for( ; num_ctg >= i; i = i + 1u)
    {
      if((contig_array + (signed long int)i)->mask == 0)
      {
        out_num=validConnect(i, (struct connection *)(void *)0);
        if(out_num == 2)
        {
          cn_temp = (contig_array + (signed long int)i)->downwardConnect;
          count = 0;
          while(!(cn_temp == ((struct connection *)NULL)))
          {
            if(!(cn_temp->deleted == 0))
              tmp_if_expr_1 = (_Bool)1;

            else
              tmp_if_expr_1 = cn_temp->mask != 0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_1)
              cn_temp = cn_temp->next;

            else
            {
              count = count + 1;
              if(count == 1)
                cn1 = cn_temp;

              else
                if(count == 2)
                  cn2 = cn_temp;

                else
                  break;
              cn_temp = cn_temp->next;
            }
          }
          if(count >= 3)
            printf("%d valid connections from ctg %d\n", count, i);

          else
          {
            if(!(cn2->gapLen >= cn1->gapLen))
            {
              cn_temp = cn1;
              cn1 = cn2;
              cn2 = cn_temp;
            }

            if(!(cn1->prevInScaf == 0))
            {
              if(cn2->prevInScaf != 0)
                goto __CPROVER_DUMP_L19;

            }

            bal_ctg=getTwinCtg(cn2->contigID);
            in_num=validConnect(bal_ctg, (struct connection *)(void *)0);
            if(!(in_num >= 3))
            {
              min = (signed int)(((unsigned int)(cn2->gapLen - cn1->gapLen) - (contig_array + (signed long int)cn1->contigID)->length) - (unsigned int)(ins_size_var / 2));
              removeTransitive__1__max = (signed int)(((unsigned int)(cn2->gapLen - cn1->gapLen) - (contig_array + (signed long int)cn1->contigID)->length) + (unsigned int)(ins_size_var / 2));
              if(removeTransitive__1__max >= 0)
              {
                setConnectDelete(i, cn2->contigID, (char)1, (char)0);
                linear=linearC2C(i, cn1, cn2->contigID, min, removeTransitive__1__max);
                if(!(linear == 1))
                {
                  setConnectDelete(i, cn2->contigID, (char)0, (char)0);
                  goto __CPROVER_DUMP_L19;
                }

                else
                {
                  downstreamCTG[(signed long int)0] = i;
                  catUsDsContig();
                  char return_value_checkSimple_2;
                  return_value_checkSimple_2=checkSimple(solidArray, solidCounter);
                  if(!(return_value_checkSimple_2 == 0))
                  {
                    void *return_value_darrayGet_3;
                    return_value_darrayGet_3=darrayGet(solidArray, (signed long long int)(solidCounter - 2));
                    void *return_value_darrayGet_4;
                    return_value_darrayGet_4=darrayGet(solidArray, (signed long long int)(solidCounter - 1));
                    cn1=getCntBetween(*((unsigned int *)return_value_darrayGet_3), *((unsigned int *)return_value_darrayGet_4));
                    if(!(cn1 == ((struct connection *)NULL)))
                    {
                      if(cn1->nextInScaf == ((struct connection *)NULL))
                        goto __CPROVER_DUMP_L16;

                      if(cn2->nextInScaf == ((struct connection *)NULL))
                        goto __CPROVER_DUMP_L16;

                      setConnectDelete(i, cn2->contigID, (char)0, (char)0);
                    }

                    else
                    {

                    __CPROVER_DUMP_L16:
                      ;
                      consolidate();
                      if(!(cn2->prevInScaf == 0))
                      {
                        return_value_darrayGet_5=darrayGet(solidArray, (signed long long int)0);
                        return_value_darrayGet_6=darrayGet(solidArray, (signed long long int)1);
                        substitueDSinScaf(cn2, *((unsigned int *)return_value_darrayGet_5), *((unsigned int *)return_value_darrayGet_6));
                      }

                      if(!(cn2->nextInScaf == ((struct connection *)NULL)))
                      {
                        void *return_value_darrayGet_7;
                        return_value_darrayGet_7=darrayGet(solidArray, (signed long long int)(solidCounter - 2));
                        substitueUSinScaf(cn2, *((unsigned int *)return_value_darrayGet_7));
                      }

                      flag = flag + 1;
                    }
                  }

                }
              }

            }

          }
        }

      }


    __CPROVER_DUMP_L19:
      ;
    }
    printf("a remove transitive lag, %d connections removed\n", flag);
  }
}

// removeWeakEdges
// file inc/extfunc.h line 143
extern void removeWeakEdges(signed int lenCutoff, unsigned int multiCutoff)
{
  unsigned int bal_ed;
  unsigned int arcRight_n;
  unsigned int arcLeft_n;
  struct arc *arcLeft;
  struct arc *arcRight;
  unsigned int i;
  signed int counter = 0;
  i = (unsigned int)1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  char return_value_EdSameAsTwin_3;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  for( ; num_ed >= i; i = i + 1u)
  {
    if(!((edge_array + (signed long int)i)->deleted == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (edge_array + (signed long int)i)->length == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = (edge_array + (signed long int)i)->length > lenCutoff ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_4 = (_Bool)1;

    else
    {
      return_value_EdSameAsTwin_3=EdSameAsTwin(i);
      tmp_if_expr_4 = return_value_EdSameAsTwin_3 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_4)
    {
      bal_ed=getTwinEdge(i);
      arcRight=arcCount(i, &arcRight_n);
      if(arcRight == ((struct arc *)NULL) || arcRight_n >= 2u)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = arcRight->multiplicity > multiCutoff ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_5)
      {
        arcLeft=arcCount(bal_ed, &arcLeft_n);
        if(arcLeft == ((struct arc *)NULL) || arcLeft_n >= 2u)
          tmp_if_expr_6 = (_Bool)1;

        else
          tmp_if_expr_6 = arcLeft->multiplicity > multiCutoff ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_6)
        {
          destroyEdge(i);
          counter = counter + 1;
        }

      }

    }

  }
  printf("Remove weakly linked edges: %d weak inner edges destroyed\n", counter);
  removeDeadArcs();
}

// replaceKeyInDHeap
// file inc/dfibHeap.h line 30
double replaceKeyInDHeap(struct dfibheap *heap, struct dfibheap_el *node, double newKey)
{
  double res;
  res=dfh_replacekey(heap, node, newKey);
  return res;
}

// replaceKeyInHeap
// file fibHeap.c line 46
signed long long int replaceKeyInHeap(struct fibheap *heap, struct fibheap_el *node, signed long long int newKey)
{
  signed long long int return_value_fh_replacekey_1;
  return_value_fh_replacekey_1=fh_replacekey(heap, node, newKey);
  return return_value_fh_replacekey_1;
}

// replaceValueInDHeap
// file inc/dfibHeap.h line 38
void replaceValueInDHeap(struct dfibheap_el *node, unsigned int newValue)
{
  dfh_replacedata(node, newValue);
}

// replaceValueInHeap
// file fibHeap.c line 70
void replaceValueInHeap(struct fibheap_el *node, unsigned int newValue)
{
  fh_replacedata(node, newValue);
}

// resetNodeStatus
// file bubble.c line 163
static void resetNodeStatus()
{
  unsigned int index;
  struct arc *arc;
  unsigned int bal_ed;
  index = (unsigned int)1;
  for( ; num_ed >= index; index = index + 1u)
  {
    char return_value_EdSameAsTwin_1;
    return_value_EdSameAsTwin_1=EdSameAsTwin(index);
    if(!(return_value_EdSameAsTwin_1 == 0))
      (edge_array + (signed long int)index)->multi = (unsigned short int)1;

    else
    {
      arc = (edge_array + (signed long int)index)->arcs;
      bal_ed=getTwinEdge(index);
      for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
        if(arc->to_ed == bal_ed)
          break;

      if(!(arc == ((struct arc *)NULL)))
      {
        (edge_array + (signed long int)index)->multi = (unsigned short int)1;
        (edge_array + (signed long int)bal_ed)->multi = (unsigned short int)1;
        index = index + 1u;
      }

      else
      {
        arc = (edge_array + (signed long int)bal_ed)->arcs;
        for( ; !(arc == ((struct arc *)NULL)); arc = arc->next)
          if(arc->to_ed == index)
            break;

        if(!(arc == ((struct arc *)NULL)))
        {
          (edge_array + (signed long int)index)->multi = (unsigned short int)1;
          (edge_array + (signed long int)bal_ed)->multi = (unsigned short int)1;
        }

        else
        {
          (edge_array + (signed long int)index)->multi = (unsigned short int)0;
          (edge_array + (signed long int)bal_ed)->multi = (unsigned short int)0;
        }
        index = index + 1u;
      }
    }
  }
}

// returnItem
// file inc/extfunc2.h line 27
extern void returnItem(struct mem_manager *mem_Manager, void *item)
{
  struct recycle_mark *mark = (struct recycle_mark *)item;
  mark->next = mem_Manager->recycle_list;
  mem_Manager->recycle_list = mark;
}

// reverse2k
// file readseq1by1.c line 390
static void reverse2k(char *src_seq, signed int len_seq)
{
  if(!(len_seq == 0))
  {
    signed int i;
    reverseComplementSeq(src_seq, len_seq, src_rc_seq);
    i = 0;
    for( ; !(i >= len_seq); i = i + 1)
      src_seq[(signed long int)i] = src_rc_seq[(signed long int)i];
  }

}

// reverseComplement
// file inc/extfunc.h line 32
extern unsigned long long int reverseComplement(unsigned long long int word, signed int overlap)
{
  unsigned long long int return_value_fastReverseComp_1;
  return_value_fastReverseComp_1=fastReverseComp(word, (char)overlap);
  return return_value_fastReverseComp_1;
}

// reverseComplementSeq
// file inc/extfunc.h line 47
extern void reverseComplementSeq(char *seq, signed int len, char *bal_seq)
{
  signed int i;
  signed int index = 0;
  signed int tmp_post_1;
  if(len >= 1)
  {
    i = len - 1;
    for( ; i >= 0; i = i - 1)
    {
      tmp_post_1 = index;
      index = index + 1;
      bal_seq[(signed long int)tmp_post_1] = (char)((signed int)seq[(signed long int)i] ^ 0x02);
    }
    goto __CPROVER_DUMP_L4;
  }


__CPROVER_DUMP_L4:
  ;
}

// reverseComplementVerbose
// file inc/extfunc.h line 131
extern unsigned long long int reverseComplementVerbose(unsigned long long int word, signed int overlap)
{
  unsigned long long int return_value_fastReverseComp_1;
  return_value_fastReverseComp_1=fastReverseComp(word, (char)overlap);
  return return_value_fastReverseComp_1;
}

// reverseStack
// file prlReadFillGap.c line 744
static void reverseStack(struct stack *dStack, struct stack *sStack)
{
  struct ctg4scaf *actg;
  struct ctg4scaf *ctgPt;
  emptyStack(dStack);
  void *return_value_stackPop_1;
  do
  {
    return_value_stackPop_1=stackPop(sStack);
    actg = (struct ctg4scaf *)return_value_stackPop_1;
    if(actg == ((struct ctg4scaf *)NULL))
      break;

    void *return_value_stackPush_2;
    return_value_stackPush_2=stackPush(dStack);
    ctgPt = (struct ctg4scaf *)return_value_stackPush_2;
    ctgPt->ctgID = actg->ctgID;
    ctgPt->start = actg->start;
    ctgPt->end = actg->end;
    ctgPt->scaftig_start = (unsigned int)actg->scaftig_start;
    ctgPt->mask = (unsigned int)actg->mask;
    ctgPt->cutHead = (unsigned int)actg->cutHead;
    ctgPt->cutTail = (unsigned int)actg->cutTail;
    ctgPt->gapSeqLen = (unsigned int)actg->gapSeqLen;
    ctgPt->gapSeqOffset = actg->gapSeqOffset;
  }
  while((_Bool)1);
  stackBackup(dStack);
}

// reverseStack_link1
// file read2scaf.c line 57
static void reverseStack_link1(struct stack *dStack_link1, struct stack *sStack_link1)
{
  struct ctg4scaf *actg_link1;
  struct ctg4scaf *ctgPt_link1;
  emptyStack(dStack_link1);
  void *return_value_stackPop_1_link1;
  do
  {
    return_value_stackPop_1_link1=stackPop(sStack_link1);
    actg_link1 = (struct ctg4scaf *)return_value_stackPop_1_link1;
    if(actg_link1 == ((struct ctg4scaf *)NULL))
      break;

    void *return_value_stackPush_2_link1;
    return_value_stackPush_2_link1=stackPush(dStack_link1);
    ctgPt_link1 = (struct ctg4scaf *)return_value_stackPush_2_link1;
    ctgPt_link1->ctgID = actg_link1->ctgID;
    ctgPt_link1->start = actg_link1->start;
    ctgPt_link1->end = actg_link1->end;
  }
  while((_Bool)1);
  stackBackup(dStack_link1);
}

// scaffold_count
// file orderContig.c line 2474
void scaffold_count(unsigned int len_cut)
{
  unsigned int prev_ctg;
  unsigned int ctg;
  unsigned int bal_ctg;
  unsigned int *length_array;
  unsigned int count = (unsigned int)0;
  unsigned int num_lctg = (unsigned int)0;
  unsigned int i;
  unsigned int max_steps = (unsigned int)5;
  signed int num5;
  signed int num3;
  signed int j;
  signed int len;
  signed int flag;
  signed int num_route;
  signed int gap_c = 0;
  signed short int gap = (signed short int)0;
  signed long long int sum = (signed long long int)0;
  signed long long int N50;
  signed long long int N90;
  struct connection *cnt;
  struct connection *prevCNT;
  struct connection *nextCnt;
  char excep;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)max_n_routes * sizeof(unsigned int) /*4ul*/ );
  so_far = (unsigned int *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)max_n_routes * sizeof(unsigned int *) /*8ul*/ );
  found_routes = (unsigned int **)return_value_ckalloc_2;
  j = 0;
  for( ; !(j >= max_n_routes); j = j + 1)
  {
    void *return_value_ckalloc_3;
    return_value_ckalloc_3=ckalloc((unsigned long int)max_steps * sizeof(unsigned int) /*4ul*/ );
    found_routes[(signed long int)j] = (unsigned int *)return_value_ckalloc_3;
  }
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)(num_ctg + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  length_array = (unsigned int *)return_value_ckalloc_4;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    length_array[(signed long int)i] = (unsigned int)0;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    if(index_array[(signed long int)i] >= 1u)
      length_array[(signed long int)index_array[(signed long int)i]] = i;

  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    index_array[(signed long int)i] = length_array[(signed long int)i];
  orig2new = (char)0;
  struct dynamic_array *return_value_createDarray_5;
  return_value_createDarray_5=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  static struct dynamic_array *scaffold_count__1__scaf3;
  scaffold_count__1__scaf3 = (struct dynamic_array *)return_value_createDarray_5;
  struct dynamic_array *return_value_createDarray_6;
  return_value_createDarray_6=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  static struct dynamic_array *scaffold_count__1__scaf5;
  scaffold_count__1__scaf5 = (struct dynamic_array *)return_value_createDarray_6;
  struct dynamic_array *return_value_createDarray_7;
  return_value_createDarray_7=createDarray(1000, sizeof(signed int) /*4ul*/ );
  static struct dynamic_array *scaffold_count__1__gap3;
  scaffold_count__1__gap3 = (struct dynamic_array *)return_value_createDarray_7;
  struct dynamic_array *return_value_createDarray_8;
  return_value_createDarray_8=createDarray(1000, sizeof(signed int) /*4ul*/ );
  static struct dynamic_array *scaffold_count__1__gap5;
  scaffold_count__1__gap5 = (struct dynamic_array *)return_value_createDarray_8;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    (contig_array + (signed long int)i)->flag = (unsigned char)0;
  i = (unsigned int)1;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_12;
  signed int return_value_validConnect_11;
  signed int tmp_post_13;
  signed int tmp_post_16;
  signed int tmp_post_21;
  unsigned int tmp_post_23;
  signed int tmp_if_expr_30;
  void *return_value_darrayGet_29;
  signed int tmp_if_expr_37;
  void *return_value_darrayGet_36;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if((contig_array + (signed long int)i)->length + (unsigned int)overlaplen >= len_cut)
      num_lctg = num_lctg + 1u;

    else
      goto __CPROVER_DUMP_L45;
    if(!((contig_array + (signed long int)i)->flag == 0))
      tmp_if_expr_9 = (_Bool)1;

    else
      tmp_if_expr_9 = (contig_array + (signed long int)i)->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_9)
      tmp_if_expr_10 = (_Bool)1;

    else
      tmp_if_expr_10 = !((contig_array + (signed long int)i)->downwardConnect != ((struct connection *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_validConnect_11=validConnect(i, (struct connection *)(void *)0);
      tmp_if_expr_12 = !(return_value_validConnect_11 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_12)
    {
      num3 = 0;
      num5 = num3;
      ctg = i;
      tmp_post_13 = num5;
      num5 = num5 + 1;
      void *return_value_darrayPut_14;
      return_value_darrayPut_14=darrayPut(scaffold_count__1__scaf5, (signed long long int)tmp_post_13);
      *((unsigned int *)return_value_darrayPut_14) = i;
      (contig_array + (signed long int)i)->flag = (unsigned char)1;
      bal_ctg=getTwinCtg(ctg);
      (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
      len = (signed int)(contig_array + (signed long int)i)->length;
      prevCNT = (struct connection *)(void *)0;
      cnt=getNextContig(ctg, prevCNT, &excep);
      while(!(cnt == ((struct connection *)NULL)))
      {
        nextCnt=getNextContig(cnt->contigID, cnt, &excep);
        if(!(prevCNT == ((struct connection *)NULL)) && !(excep == 0))
          printf("scaffolding: exception --- prev cnt from %u\n", prevCNT->contigID);

        if(!(nextCnt == ((struct connection *)NULL)))
        {
          if(nextCnt->used != 0)
            break;

        }

        setConnectUsed(ctg, cnt->contigID, (char)1);
        void *return_value_darrayPut_15;
        return_value_darrayPut_15=darrayPut(scaffold_count__1__gap5, (signed long long int)(num5 - 1));
        *((signed int *)return_value_darrayPut_15) = cnt->gapLen;
        ctg = cnt->contigID;
        tmp_post_16 = num5;
        num5 = num5 + 1;
        void *return_value_darrayPut_17;
        return_value_darrayPut_17=darrayPut(scaffold_count__1__scaf5, (signed long long int)tmp_post_16);
        *((unsigned int *)return_value_darrayPut_17) = ctg;
        len = len + (signed int)((unsigned int)cnt->gapLen + (contig_array + (signed long int)ctg)->length);
        bal_ctg=getTwinCtg(ctg);
        (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
        (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
        prevCNT = cnt;
        cnt = nextCnt;
      }
      ctg=getTwinCtg(i);
      if(num5 >= 2)
      {
        void *return_value_darrayGet_18;
        return_value_darrayGet_18=darrayGet(scaffold_count__1__scaf5, (signed long long int)1);
        unsigned int return_value_getTwinCtg_19;
        return_value_getTwinCtg_19=getTwinCtg(*((unsigned int *)return_value_darrayGet_18));
        prevCNT=checkConnect(return_value_getTwinCtg_19, ctg);
      }

      else
        prevCNT = (struct connection *)(void *)0;
      cnt=getNextContig(ctg, prevCNT, &excep);
      while(!(cnt == ((struct connection *)NULL)))
      {
        nextCnt=getNextContig(cnt->contigID, cnt, &excep);
        if(!(prevCNT == ((struct connection *)NULL)) && !(excep == 0))
          printf("scaffolding: exception -- prev cnt from %u\n", prevCNT->contigID);

        if(!(nextCnt == ((struct connection *)NULL)))
        {
          if(nextCnt->used != 0)
            break;

        }

        setConnectUsed(ctg, cnt->contigID, (char)1);
        ctg = cnt->contigID;
        len = len + (signed int)((unsigned int)cnt->gapLen + (contig_array + (signed long int)ctg)->length);
        bal_ctg=getTwinCtg(ctg);
        (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
        (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
        void *return_value_darrayPut_20;
        return_value_darrayPut_20=darrayPut(scaffold_count__1__gap3, (signed long long int)num3);
        *((signed int *)return_value_darrayPut_20) = cnt->gapLen;
        tmp_post_21 = num3;
        num3 = num3 + 1;
        void *return_value_darrayPut_22;
        return_value_darrayPut_22=darrayPut(scaffold_count__1__scaf3, (signed long long int)tmp_post_21);
        *((unsigned int *)return_value_darrayPut_22) = bal_ctg;
        prevCNT = cnt;
        cnt = nextCnt;
      }
      len = len + overlaplen;
      sum = sum + (signed long long int)len;
      tmp_post_23 = count;
      count = count + 1u;
      length_array[(signed long int)tmp_post_23] = (unsigned int)len;
      if(!(num3 + num5 >= 1))
        printf("no scaffold created for contig %d\n", i);

      else
      {
        prev_ctg = (unsigned int)0;
        len = (signed int)prev_ctg;
        j = num3 - 1;
        for( ; j >= 0; j = j - 1)
        {
          if(!(prev_ctg == 0u))
          {
            num_trace = 0;
            num_route = num_trace;
            void *return_value_darrayGet_24;
            return_value_darrayGet_24=darrayGet(scaffold_count__1__scaf3, (signed long long int)j);
            traceAlongArc(*((unsigned int *)return_value_darrayGet_24), prev_ctg, (signed int)max_steps, (signed int)gap - ins_size_var, (signed int)gap + ins_size_var, 0, 0, &num_route);
            if(num_route == 1)
              gap_c = gap_c + 1;

          }

          void *return_value_darrayGet_25;
          return_value_darrayGet_25=darrayGet(scaffold_count__1__scaf3, (signed long long int)j);
          void *return_value_darrayGet_26;
          return_value_darrayGet_26=darrayGet(scaffold_count__1__gap3, (signed long long int)j);
          len = len + (signed int)((contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_25))->length + (unsigned int)*((signed int *)return_value_darrayGet_26));
          void *return_value_darrayGet_27;
          return_value_darrayGet_27=darrayGet(scaffold_count__1__scaf3, (signed long long int)j);
          prev_ctg = *((unsigned int *)return_value_darrayGet_27);
          void *return_value_darrayGet_28;
          return_value_darrayGet_28=darrayGet(scaffold_count__1__gap3, (signed long long int)j);
          if(*((signed int *)return_value_darrayGet_28) >= 1)
          {
            return_value_darrayGet_29=darrayGet(scaffold_count__1__gap3, (signed long long int)j);
            tmp_if_expr_30 = *((signed int *)return_value_darrayGet_29);
          }

          else
            tmp_if_expr_30 = 0;
          gap = (signed short int)tmp_if_expr_30;
        }
        j = 0;
        for( ; !(j >= num5); j = j + 1)
        {
          if(!(prev_ctg == 0u))
          {
            num_trace = 0;
            num_route = num_trace;
            void *return_value_darrayGet_31;
            return_value_darrayGet_31=darrayGet(scaffold_count__1__scaf5, (signed long long int)j);
            traceAlongArc(*((unsigned int *)return_value_darrayGet_31), prev_ctg, (signed int)max_steps, (signed int)gap - ins_size_var, (signed int)gap + ins_size_var, 0, 0, &num_route);
            if(num_route == 1)
              gap_c = gap_c + 1;

          }

          if(!(j >= num5 + -1))
          {
            void *return_value_darrayGet_32;
            return_value_darrayGet_32=darrayGet(scaffold_count__1__scaf5, (signed long long int)j);
            void *return_value_darrayGet_33;
            return_value_darrayGet_33=darrayGet(scaffold_count__1__gap5, (signed long long int)j);
            len = len + (signed int)((contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_32))->length + (unsigned int)*((signed int *)return_value_darrayGet_33));
            void *return_value_darrayGet_34;
            return_value_darrayGet_34=darrayGet(scaffold_count__1__scaf5, (signed long long int)j);
            prev_ctg = *((unsigned int *)return_value_darrayGet_34);
            void *return_value_darrayGet_35;
            return_value_darrayGet_35=darrayGet(scaffold_count__1__gap5, (signed long long int)j);
            if(*((signed int *)return_value_darrayGet_35) >= 1)
            {
              return_value_darrayGet_36=darrayGet(scaffold_count__1__gap5, (signed long long int)j);
              tmp_if_expr_37 = *((signed int *)return_value_darrayGet_36);
            }

            else
              tmp_if_expr_37 = 0;
            gap = (signed short int)tmp_if_expr_37;
          }

        }
      }
    }


  __CPROVER_DUMP_L45:
    ;
  }
  freeDarray(scaffold_count__1__scaf3);
  freeDarray(scaffold_count__1__scaf5);
  freeDarray(scaffold_count__1__gap3);
  freeDarray(scaffold_count__1__gap5);
  printf("\n%d scaffolds from %d contigs sum up %lldbp, with average length %lld, %d gaps filled\n", count, num_lctg / (unsigned int)2, sum, sum / (signed long int)count, gap_c);
  i = (unsigned int)1;
  _Bool tmp_if_expr_38;
  unsigned int tmp_post_39;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!((contig_array + (signed long int)i)->length + (unsigned int)overlaplen >= len_cut))
      tmp_if_expr_38 = (_Bool)1;

    else
      tmp_if_expr_38 = (contig_array + (signed long int)i)->flag != 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_38)
    {
      tmp_post_39 = count;
      count = count + 1u;
      length_array[(signed long int)tmp_post_39] = (contig_array + (signed long int)i)->length;
      sum = sum + (signed long long int)(contig_array + (signed long int)i)->length;
      char return_value_isSmallerThanTwin_40;
      return_value_isSmallerThanTwin_40=isSmallerThanTwin(i);
      if(!(return_value_isSmallerThanTwin_40 == 0))
        i = i + 1u;

    }

  }
  printf("%d scaffolds&singleton sum up %lldbp, with average length %lld\n", count, sum, sum / (signed long int)count);
  qsort((void *)length_array, (unsigned long int)count, sizeof(unsigned int) /*4ul*/ , cmp_int);
  printf("the longest is %dbp,", length_array[(signed long int)(count - (unsigned int)1)]);
  N50 = (signed long long int)((double)sum * 0.5);
  N90 = (signed long long int)((double)sum * 0.9);
  flag = 0;
  sum = (signed long long int)flag;
  j = (signed int)(count - (unsigned int)1);
  for( ; j >= 0; j = j - 1)
  {
    sum = sum + (signed long long int)length_array[(signed long int)j];
    if(flag == 0 && sum >= N50)
    {
      printf("scaffold N50 is %d bp, ", length_array[(signed long int)j]);
      flag = flag + 1;
    }

    if(sum >= N90)
    {
      printf("scaffold N90 is %d bp\n", length_array[(signed long int)j]);
      break;
    }

  }
  fflush(stdout);
  free((void *)length_array);
  j = 0;
  for( ; !(j >= max_n_routes); j = j + 1)
    free((void *)found_routes[(signed long int)j]);
  free((void *)found_routes);
  free((void *)so_far);
}

// scaffolding
// file orderContig.c line 2179
extern void scaffolding(unsigned int len_cut, char *outfile)
{
  unsigned int prev_ctg;
  unsigned int ctg;
  unsigned int bal_ctg;
  unsigned int *length_array;
  unsigned int count = (unsigned int)0;
  unsigned int num_lctg = (unsigned int)0;
  unsigned int i;
  unsigned int max_steps = (unsigned int)5;
  signed int num5;
  signed int num3;
  signed int j;
  signed int len;
  signed int flag;
  signed int num_route;
  signed int gap_c = 0;
  signed short int gap = (signed short int)0;
  signed long long int sum = (signed long long int)0;
  signed long long int N50;
  signed long long int N90;
  struct _IO_FILE *fp;
  struct _IO_FILE *fo = (struct _IO_FILE *)(void *)0;
  char name[256l];
  struct connection *cnt;
  struct connection *prevCNT;
  struct connection *nextCnt;
  char excep;
  char weak;
  weakCounter = 0;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)max_n_routes * sizeof(unsigned int) /*4ul*/ );
  so_far = (unsigned int *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)max_n_routes * sizeof(unsigned int *) /*8ul*/ );
  found_routes = (unsigned int **)return_value_ckalloc_2;
  j = 0;
  for( ; !(j >= max_n_routes); j = j + 1)
  {
    void *return_value_ckalloc_3;
    return_value_ckalloc_3=ckalloc((unsigned long int)max_steps * sizeof(unsigned int) /*4ul*/ );
    found_routes[(signed long int)j] = (unsigned int *)return_value_ckalloc_3;
  }
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)(num_ctg + (unsigned int)1) * sizeof(unsigned int) /*4ul*/ );
  length_array = (unsigned int *)return_value_ckalloc_4;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    length_array[(signed long int)i] = (unsigned int)0;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    if(index_array[(signed long int)i] >= 1u)
      length_array[(signed long int)index_array[(signed long int)i]] = i;

  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    index_array[(signed long int)i] = length_array[(signed long int)i];
  orig2new = (char)0;
  sprintf(name, "%s.scaf", outfile);
  fp=ckopen(name, "w");
  sprintf(name, "%s.scaf_gap", outfile);
  fo=ckopen(name, "w");
  struct dynamic_array *return_value_createDarray_5;
  return_value_createDarray_5=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  scaf3 = (struct dynamic_array *)return_value_createDarray_5;
  struct dynamic_array *return_value_createDarray_6;
  return_value_createDarray_6=createDarray(1000, sizeof(unsigned int) /*4ul*/ );
  scaf5 = (struct dynamic_array *)return_value_createDarray_6;
  struct dynamic_array *return_value_createDarray_7;
  return_value_createDarray_7=createDarray(1000, sizeof(signed int) /*4ul*/ );
  gap3 = (struct dynamic_array *)return_value_createDarray_7;
  struct dynamic_array *return_value_createDarray_8;
  return_value_createDarray_8=createDarray(1000, sizeof(signed int) /*4ul*/ );
  gap5 = (struct dynamic_array *)return_value_createDarray_8;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    (contig_array + (signed long int)i)->flag = (unsigned char)0;
  i = (unsigned int)1;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_12;
  signed int return_value_validConnect_11;
  signed int tmp_post_13;
  signed int tmp_post_16;
  signed int tmp_post_21;
  unsigned int tmp_post_23;
  signed int tmp_if_expr_40;
  void *return_value_darrayGet_39;
  signed int tmp_if_expr_57;
  void *return_value_darrayGet_56;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if((contig_array + (signed long int)i)->length + (unsigned int)overlaplen >= len_cut)
      num_lctg = num_lctg + 1u;

    else
      goto __CPROVER_DUMP_L49;
    if(!((contig_array + (signed long int)i)->flag == 0))
      tmp_if_expr_9 = (_Bool)1;

    else
      tmp_if_expr_9 = (contig_array + (signed long int)i)->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_9)
      tmp_if_expr_10 = (_Bool)1;

    else
      tmp_if_expr_10 = !((contig_array + (signed long int)i)->downwardConnect != ((struct connection *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_10)
      tmp_if_expr_12 = (_Bool)1;

    else
    {
      return_value_validConnect_11=validConnect(i, (struct connection *)(void *)0);
      tmp_if_expr_12 = !(return_value_validConnect_11 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_12)
    {
      num3 = 0;
      num5 = num3;
      ctg = i;
      tmp_post_13 = num5;
      num5 = num5 + 1;
      void *return_value_darrayPut_14;
      return_value_darrayPut_14=darrayPut(scaf5, (signed long long int)tmp_post_13);
      *((unsigned int *)return_value_darrayPut_14) = i;
      (contig_array + (signed long int)i)->flag = (unsigned char)1;
      bal_ctg=getTwinCtg(ctg);
      (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
      len = (signed int)(contig_array + (signed long int)i)->length;
      prevCNT = (struct connection *)(void *)0;
      cnt=getNextContig(ctg, prevCNT, &excep);
      while(!(cnt == ((struct connection *)NULL)))
      {
        nextCnt=getNextContig(cnt->contigID, cnt, &excep);
        if(!(prevCNT == ((struct connection *)NULL)) && !(excep == 0))
          printf("scaffolding: exception --- prev cnt from %u\n", prevCNT->contigID);

        if(!(nextCnt == ((struct connection *)NULL)))
        {
          if(nextCnt->used != 0)
            break;

        }

        setConnectUsed(ctg, cnt->contigID, (char)1);
        void *return_value_darrayPut_15;
        return_value_darrayPut_15=darrayPut(gap5, (signed long long int)(num5 - 1));
        *((signed int *)return_value_darrayPut_15) = cnt->gapLen;
        ctg = cnt->contigID;
        tmp_post_16 = num5;
        num5 = num5 + 1;
        void *return_value_darrayPut_17;
        return_value_darrayPut_17=darrayPut(scaf5, (signed long long int)tmp_post_16);
        *((unsigned int *)return_value_darrayPut_17) = ctg;
        len = len + (signed int)((unsigned int)cnt->gapLen + (contig_array + (signed long int)ctg)->length);
        bal_ctg=getTwinCtg(ctg);
        (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
        (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
        prevCNT = cnt;
        cnt = nextCnt;
      }
      ctg=getTwinCtg(i);
      if(num5 >= 2)
      {
        void *return_value_darrayGet_18;
        return_value_darrayGet_18=darrayGet(scaf5, (signed long long int)1);
        unsigned int return_value_getTwinCtg_19;
        return_value_getTwinCtg_19=getTwinCtg(*((unsigned int *)return_value_darrayGet_18));
        prevCNT=checkConnect(return_value_getTwinCtg_19, ctg);
      }

      else
        prevCNT = (struct connection *)(void *)0;
      cnt=getNextContig(ctg, prevCNT, &excep);
      while(!(cnt == ((struct connection *)NULL)))
      {
        nextCnt=getNextContig(cnt->contigID, cnt, &excep);
        if(!(prevCNT == ((struct connection *)NULL)) && !(excep == 0))
          printf("scaffolding: exception -- prev cnt from %u\n", prevCNT->contigID);

        if(!(nextCnt == ((struct connection *)NULL)))
        {
          if(nextCnt->used != 0)
            break;

        }

        setConnectUsed(ctg, cnt->contigID, (char)1);
        ctg = cnt->contigID;
        len = len + (signed int)((unsigned int)cnt->gapLen + (contig_array + (signed long int)ctg)->length);
        bal_ctg=getTwinCtg(ctg);
        (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
        (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
        void *return_value_darrayPut_20;
        return_value_darrayPut_20=darrayPut(gap3, (signed long long int)num3);
        *((signed int *)return_value_darrayPut_20) = cnt->gapLen;
        tmp_post_21 = num3;
        num3 = num3 + 1;
        void *return_value_darrayPut_22;
        return_value_darrayPut_22=darrayPut(scaf3, (signed long long int)tmp_post_21);
        *((unsigned int *)return_value_darrayPut_22) = bal_ctg;
        prevCNT = cnt;
        cnt = nextCnt;
      }
      len = len + overlaplen;
      sum = sum + (signed long long int)len;
      tmp_post_23 = count;
      count = count + 1u;
      length_array[(signed long int)tmp_post_23] = (unsigned int)len;
      if(!(num3 + num5 >= 1))
        printf("no scaffold created for contig %d\n", i);

      else
      {
        fprintf(fp, ">scaffold%d %d %d\n", count, num5 + num3, len);
        fprintf(fo, ">scaffold%d %d %d\n", count, num5 + num3, len);
        prev_ctg = (unsigned int)0;
        len = (signed int)prev_ctg;
        j = num3 - 1;
        for( ; j >= 0; j = j - 1)
        {
          void *return_value_darrayGet_31;
          return_value_darrayGet_31=darrayGet(scaf3, (signed long long int)j);
          char return_value_isLargerThanTwin_32;
          return_value_isLargerThanTwin_32=isLargerThanTwin(*((unsigned int *)return_value_darrayGet_31));
          if(return_value_isLargerThanTwin_32 == 0)
          {
            void *return_value_darrayGet_24;
            return_value_darrayGet_24=darrayGet(scaf3, (signed long long int)j);
            void *return_value_darrayGet_25;
            return_value_darrayGet_25=darrayGet(scaf3, (signed long long int)j);
            fprintf(fp, "%-10d %-10d +   %d ", index_array[(signed long int)*((unsigned int *)return_value_darrayGet_24)], len, (contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_25))->length + (unsigned int)overlaplen);
            void *return_value_darrayGet_26;
            return_value_darrayGet_26=darrayGet(scaf3, (signed long long int)j);
            weak=printCnts(fp, *((unsigned int *)return_value_darrayGet_26));
          }

          else
          {
            void *return_value_darrayGet_27;
            return_value_darrayGet_27=darrayGet(scaf3, (signed long long int)j);
            unsigned int return_value_getTwinCtg_28;
            return_value_getTwinCtg_28=getTwinCtg(*((unsigned int *)return_value_darrayGet_27));
            void *return_value_darrayGet_29;
            return_value_darrayGet_29=darrayGet(scaf3, (signed long long int)j);
            fprintf(fp, "%-10d %-10d -   %d ", index_array[(signed long int)return_value_getTwinCtg_28], len, (contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_29))->length + (unsigned int)overlaplen);
            void *return_value_darrayGet_30;
            return_value_darrayGet_30=darrayGet(scaf3, (signed long long int)j);
            weak=printCnts(fp, *((unsigned int *)return_value_darrayGet_30));
          }
          if(!(prev_ctg == 0u))
          {
            num_trace = 0;
            num_route = num_trace;
            void *return_value_darrayGet_33;
            return_value_darrayGet_33=darrayGet(scaf3, (signed long long int)j);
            traceAlongArc(*((unsigned int *)return_value_darrayGet_33), prev_ctg, (signed int)max_steps, (signed int)gap - ins_size_var, (signed int)gap + ins_size_var, 0, 0, &num_route);
            if(num_route == 1)
            {
              output1gap(fo, (signed int)max_steps);
              gap_c = gap_c + 1;
            }

          }

          void *return_value_darrayGet_34;
          return_value_darrayGet_34=darrayGet(scaf3, (signed long long int)j);
          fprintf(fo, "%-10d %-10d\n", *((unsigned int *)return_value_darrayGet_34), len);
          void *return_value_darrayGet_35;
          return_value_darrayGet_35=darrayGet(scaf3, (signed long long int)j);
          void *return_value_darrayGet_36;
          return_value_darrayGet_36=darrayGet(gap3, (signed long long int)j);
          len = len + (signed int)((contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_35))->length + (unsigned int)*((signed int *)return_value_darrayGet_36));
          void *return_value_darrayGet_37;
          return_value_darrayGet_37=darrayGet(scaf3, (signed long long int)j);
          prev_ctg = *((unsigned int *)return_value_darrayGet_37);
          void *return_value_darrayGet_38;
          return_value_darrayGet_38=darrayGet(gap3, (signed long long int)j);
          if(*((signed int *)return_value_darrayGet_38) >= 1)
          {
            return_value_darrayGet_39=darrayGet(gap3, (signed long long int)j);
            tmp_if_expr_40 = *((signed int *)return_value_darrayGet_39);
          }

          else
            tmp_if_expr_40 = 0;
          gap = (signed short int)tmp_if_expr_40;
        }
        j = 0;
        for( ; !(j >= num5); j = j + 1)
        {
          void *return_value_darrayGet_48;
          return_value_darrayGet_48=darrayGet(scaf5, (signed long long int)j);
          char return_value_isLargerThanTwin_49;
          return_value_isLargerThanTwin_49=isLargerThanTwin(*((unsigned int *)return_value_darrayGet_48));
          if(return_value_isLargerThanTwin_49 == 0)
          {
            void *return_value_darrayGet_41;
            return_value_darrayGet_41=darrayGet(scaf5, (signed long long int)j);
            void *return_value_darrayGet_42;
            return_value_darrayGet_42=darrayGet(scaf5, (signed long long int)j);
            fprintf(fp, "%-10d %-10d +   %d ", index_array[(signed long int)*((unsigned int *)return_value_darrayGet_41)], len, (contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_42))->length + (unsigned int)overlaplen);
            void *return_value_darrayGet_43;
            return_value_darrayGet_43=darrayGet(scaf5, (signed long long int)j);
            weak=printCnts(fp, *((unsigned int *)return_value_darrayGet_43));
          }

          else
          {
            void *return_value_darrayGet_44;
            return_value_darrayGet_44=darrayGet(scaf5, (signed long long int)j);
            unsigned int return_value_getTwinCtg_45;
            return_value_getTwinCtg_45=getTwinCtg(*((unsigned int *)return_value_darrayGet_44));
            void *return_value_darrayGet_46;
            return_value_darrayGet_46=darrayGet(scaf5, (signed long long int)j);
            fprintf(fp, "%-10d %-10d -   %d ", index_array[(signed long int)return_value_getTwinCtg_45], len, (contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_46))->length + (unsigned int)overlaplen);
            void *return_value_darrayGet_47;
            return_value_darrayGet_47=darrayGet(scaf5, (signed long long int)j);
            weak=printCnts(fp, *((unsigned int *)return_value_darrayGet_47));
          }
          if(!(prev_ctg == 0u))
          {
            num_trace = 0;
            num_route = num_trace;
            void *return_value_darrayGet_50;
            return_value_darrayGet_50=darrayGet(scaf5, (signed long long int)j);
            traceAlongArc(*((unsigned int *)return_value_darrayGet_50), prev_ctg, (signed int)max_steps, (signed int)gap - ins_size_var, (signed int)gap + ins_size_var, 0, 0, &num_route);
            if(num_route == 1)
            {
              output1gap(fo, (signed int)max_steps);
              gap_c = gap_c + 1;
            }

          }

          void *return_value_darrayGet_51;
          return_value_darrayGet_51=darrayGet(scaf5, (signed long long int)j);
          fprintf(fo, "%-10d %-10d\n", *((unsigned int *)return_value_darrayGet_51), len);
          if(!(j >= num5 + -1))
          {
            void *return_value_darrayGet_52;
            return_value_darrayGet_52=darrayGet(scaf5, (signed long long int)j);
            void *return_value_darrayGet_53;
            return_value_darrayGet_53=darrayGet(gap5, (signed long long int)j);
            len = len + (signed int)((contig_array + (signed long int)*((unsigned int *)return_value_darrayGet_52))->length + (unsigned int)*((signed int *)return_value_darrayGet_53));
            void *return_value_darrayGet_54;
            return_value_darrayGet_54=darrayGet(scaf5, (signed long long int)j);
            prev_ctg = *((unsigned int *)return_value_darrayGet_54);
            void *return_value_darrayGet_55;
            return_value_darrayGet_55=darrayGet(gap5, (signed long long int)j);
            if(*((signed int *)return_value_darrayGet_55) >= 1)
            {
              return_value_darrayGet_56=darrayGet(gap5, (signed long long int)j);
              tmp_if_expr_57 = *((signed int *)return_value_darrayGet_56);
            }

            else
              tmp_if_expr_57 = 0;
            gap = (signed short int)tmp_if_expr_57;
          }

        }
      }
    }


  __CPROVER_DUMP_L49:
    ;
  }
  freeDarray(scaf3);
  freeDarray(scaf5);
  freeDarray(gap3);
  freeDarray(gap5);
  fclose(fp);
  fclose(fo);
  printf("\nthe final rank");
  printf("\n%d scaffolds from %d contigs sum up %lldbp, with average length %lld, %d gaps filled\n", count, num_lctg / (unsigned int)2, sum, sum / (signed long int)count, gap_c);
  i = (unsigned int)1;
  _Bool tmp_if_expr_58;
  unsigned int tmp_post_59;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!((contig_array + (signed long int)i)->length + (unsigned int)overlaplen >= len_cut))
      tmp_if_expr_58 = (_Bool)1;

    else
      tmp_if_expr_58 = (contig_array + (signed long int)i)->flag != 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_58)
    {
      tmp_post_59 = count;
      count = count + 1u;
      length_array[(signed long int)tmp_post_59] = (contig_array + (signed long int)i)->length;
      sum = sum + (signed long long int)(contig_array + (signed long int)i)->length;
      char return_value_isSmallerThanTwin_60;
      return_value_isSmallerThanTwin_60=isSmallerThanTwin(i);
      if(!(return_value_isSmallerThanTwin_60 == 0))
        i = i + 1u;

    }

  }
  printf("%d scaffolds&singleton sum up %lldbp, with average length %lld\n", count, sum, sum / (signed long int)count);
  qsort((void *)length_array, (unsigned long int)count, sizeof(unsigned int) /*4ul*/ , cmp_int);
  printf("the longest is %dbp,", length_array[(signed long int)(count - (unsigned int)1)]);
  N50 = (signed long long int)((double)sum * 0.5);
  N90 = (signed long long int)((double)sum * 0.9);
  flag = 0;
  sum = (signed long long int)flag;
  j = (signed int)(count - (unsigned int)1);
  for( ; j >= 0; j = j - 1)
  {
    sum = sum + (signed long long int)length_array[(signed long int)j];
    if(flag == 0 && sum >= N50)
    {
      printf("scaffold N50 is %d bp, ", length_array[(signed long int)j]);
      flag = flag + 1;
    }

    if(sum >= N90)
    {
      printf("scaffold N90 is %d bp\n", length_array[(signed long int)j]);
      break;
    }

  }
  printf("Found %d weak points in scaffolds\n", weakCounter);
  fflush(stdout);
  free((void *)length_array);
  j = 0;
  for( ; !(j >= max_n_routes); j = j + 1)
    free((void *)found_routes[(signed long int)j]);
  free((void *)found_routes);
  free((void *)so_far);
}

// scan_libInfo
// file lib.c line 78
extern void scan_libInfo(char *libfile)
{
  struct _IO_FILE *fp;
  char line[1024l];
  char ch;
  signed int i;
  signed int j;
  signed int index;
  signed int libCounter;
  char flag;
  fp=ckopen(libfile, "r");
  num_libs = 0;
  char *return_value_fgets_1;
  signed int tmp_statement_expression_2;
  signed int tmp_statement_expression_4;
  do
  {
    return_value_fgets_1=fgets(line, 1024, fp);
    if(return_value_fgets_1 == ((char *)NULL))
      break;

    ch = line[(signed long int)5];
    line[(signed long int)5] = (char)0;
    unsigned long int scan_libInfo__1__1__1____s1_len;
    unsigned long int scan_libInfo__1__1__1____s2_len;
    signed int return_value___builtin_strcmp_3;
    return_value___builtin_strcmp_3=__builtin_strcmp(line, "[LIB]");
    tmp_statement_expression_2 = return_value___builtin_strcmp_3;
    if(tmp_statement_expression_2 == 0)
      num_libs = num_libs + 1;

    if(num_libs == 0)
    {
      line[(signed long int)5] = ch;
      flag=splitColumn(line);
      if(!(flag == 0))
      {
        unsigned long int scan_libInfo__1__1__3__2____s1_len;
        unsigned long int scan_libInfo__1__1__3__2____s2_len;
        signed int return_value___builtin_strcmp_5;
        return_value___builtin_strcmp_5=__builtin_strcmp(tabs[(signed long int)0], "max_rd_len");
        tmp_statement_expression_4 = return_value___builtin_strcmp_5;
        if(tmp_statement_expression_4 == 0)
          maxReadLen=atoi_link1(tabs[(signed long int)1]);

      }

    }

  }
  while((_Bool)1);
  void *return_value_ckalloc_6;
  return_value_ckalloc_6=ckalloc((unsigned long int)num_libs * sizeof(struct lib_info) /*168ul*/ );
  lib_array = (struct lib_info *)return_value_ckalloc_6;
  i = 0;
  for( ; !(i >= num_libs); i = i + 1)
  {
    (lib_array + (signed long int)i)->asm_flag = 3;
    (lib_array + (signed long int)i)->rd_len_cutoff = 0;
    (lib_array + (signed long int)i)->rank = 0;
    (lib_array + (signed long int)i)->pair_num_cut = 0;
    (lib_array + (signed long int)i)->map_len = 0;
    (lib_array + (signed long int)i)->num_s_a_file = 0;
    (lib_array + (signed long int)i)->num_s_q_file = 0;
    (lib_array + (signed long int)i)->num_p_file = 0;
    (lib_array + (signed long int)i)->num_a1_file = 0;
    (lib_array + (signed long int)i)->num_a2_file = 0;
    (lib_array + (signed long int)i)->num_q1_file = 0;
    (lib_array + (signed long int)i)->num_q2_file = 0;
  }
  libCounter = -1;
  rewind(fp);
  i = -1;
  char *return_value_fgets_7;
  signed int tmp_statement_expression_8;
  signed int tmp_statement_expression_22;
  signed int tmp_statement_expression_20;
  signed int tmp_statement_expression_18;
  signed int tmp_statement_expression_16;
  signed int tmp_statement_expression_14;
  signed int tmp_statement_expression_12;
  signed int tmp_statement_expression_10;
  do
  {
    return_value_fgets_7=fgets(line, 1024, fp);
    if(return_value_fgets_7 == ((char *)NULL))
      break;

    ch = line[(signed long int)5];
    line[(signed long int)5] = (char)0;
    unsigned long int scan_libInfo__1__3__1____s1_len;
    unsigned long int scan_libInfo__1__3__1____s2_len;
    signed int return_value___builtin_strcmp_9;
    return_value___builtin_strcmp_9=__builtin_strcmp(line, "[LIB]");
    tmp_statement_expression_8 = return_value___builtin_strcmp_9;
    if(tmp_statement_expression_8 == 0)
      i = i + 1;

    else
    {
      line[(signed long int)5] = ch;
      flag=splitColumn(line);
      if(!(flag == 0))
      {
        unsigned long int scan_libInfo__1__3__4____s1_len;
        unsigned long int scan_libInfo__1__3__4____s2_len;
        signed int return_value___builtin_strcmp_23;
        return_value___builtin_strcmp_23=__builtin_strcmp(tabs[(signed long int)0], "f1");
        tmp_statement_expression_22 = return_value___builtin_strcmp_23;
        if(tmp_statement_expression_22 == 0)
          (lib_array + (signed long int)i)->num_a1_file = (lib_array + (signed long int)i)->num_a1_file + 1;

        else
        {
          unsigned long int scan_libInfo__1__3__6____s1_len;
          unsigned long int scan_libInfo__1__3__6____s2_len;
          signed int return_value___builtin_strcmp_21;
          return_value___builtin_strcmp_21=__builtin_strcmp(tabs[(signed long int)0], "q1");
          tmp_statement_expression_20 = return_value___builtin_strcmp_21;
          if(tmp_statement_expression_20 == 0)
            (lib_array + (signed long int)i)->num_q1_file = (lib_array + (signed long int)i)->num_q1_file + 1;

          else
          {
            unsigned long int scan_libInfo__1__3__8____s1_len;
            unsigned long int scan_libInfo__1__3__8____s2_len;
            signed int return_value___builtin_strcmp_19;
            return_value___builtin_strcmp_19=__builtin_strcmp(tabs[(signed long int)0], "f2");
            tmp_statement_expression_18 = return_value___builtin_strcmp_19;
            if(tmp_statement_expression_18 == 0)
              (lib_array + (signed long int)i)->num_a2_file = (lib_array + (signed long int)i)->num_a2_file + 1;

            else
            {
              unsigned long int scan_libInfo__1__3__10____s1_len;
              unsigned long int scan_libInfo__1__3__10____s2_len;
              signed int return_value___builtin_strcmp_17;
              return_value___builtin_strcmp_17=__builtin_strcmp(tabs[(signed long int)0], "q2");
              tmp_statement_expression_16 = return_value___builtin_strcmp_17;
              if(tmp_statement_expression_16 == 0)
                (lib_array + (signed long int)i)->num_q2_file = (lib_array + (signed long int)i)->num_q2_file + 1;

              else
              {
                unsigned long int scan_libInfo__1__3__12____s1_len;
                unsigned long int scan_libInfo__1__3__12____s2_len;
                signed int return_value___builtin_strcmp_15;
                return_value___builtin_strcmp_15=__builtin_strcmp(tabs[(signed long int)0], "f");
                tmp_statement_expression_14 = return_value___builtin_strcmp_15;
                if(tmp_statement_expression_14 == 0)
                  (lib_array + (signed long int)i)->num_s_a_file = (lib_array + (signed long int)i)->num_s_a_file + 1;

                else
                {
                  unsigned long int scan_libInfo__1__3__14____s1_len;
                  unsigned long int scan_libInfo__1__3__14____s2_len;
                  signed int return_value___builtin_strcmp_13;
                  return_value___builtin_strcmp_13=__builtin_strcmp(tabs[(signed long int)0], "q");
                  tmp_statement_expression_12 = return_value___builtin_strcmp_13;
                  if(tmp_statement_expression_12 == 0)
                    (lib_array + (signed long int)i)->num_s_q_file = (lib_array + (signed long int)i)->num_s_q_file + 1;

                  else
                  {
                    unsigned long int scan_libInfo__1__3__16____s1_len;
                    unsigned long int scan_libInfo__1__3__16____s2_len;
                    signed int return_value___builtin_strcmp_11;
                    return_value___builtin_strcmp_11=__builtin_strcmp(tabs[(signed long int)0], "p");
                    tmp_statement_expression_10 = return_value___builtin_strcmp_11;
                    if(tmp_statement_expression_10 == 0)
                      (lib_array + (signed long int)i)->num_p_file = (lib_array + (signed long int)i)->num_p_file + 1;

                  }
                }
              }
            }
          }
        }
      }

    }
  }
  while((_Bool)1);
  i = 0;
  for( ; !(i >= num_libs); i = i + 1)
  {
    if(!((lib_array + (signed long int)i)->num_s_a_file == 0))
    {
      void *return_value_ckalloc_24;
      return_value_ckalloc_24=ckalloc((unsigned long int)(lib_array + (signed long int)i)->num_s_a_file * sizeof(char *) /*8ul*/ );
      (lib_array + (signed long int)i)->s_a_fname = (char **)return_value_ckalloc_24;
      j = 0;
      for( ; !(j >= (lib_array + (signed long int)i)->num_s_a_file); j = j + 1)
      {
        void *return_value_ckalloc_25;
        return_value_ckalloc_25=ckalloc((unsigned long int)1024 * sizeof(char) /*1ul*/ );
        (lib_array + (signed long int)i)->s_a_fname[(signed long int)j] = (char *)return_value_ckalloc_25;
      }
    }

    if(!((lib_array + (signed long int)i)->num_s_q_file == 0))
    {
      void *return_value_ckalloc_26;
      return_value_ckalloc_26=ckalloc((unsigned long int)(lib_array + (signed long int)i)->num_s_q_file * sizeof(char *) /*8ul*/ );
      (lib_array + (signed long int)i)->s_q_fname = (char **)return_value_ckalloc_26;
      j = 0;
      for( ; !(j >= (lib_array + (signed long int)i)->num_s_q_file); j = j + 1)
      {
        void *return_value_ckalloc_27;
        return_value_ckalloc_27=ckalloc((unsigned long int)1024 * sizeof(char) /*1ul*/ );
        (lib_array + (signed long int)i)->s_q_fname[(signed long int)j] = (char *)return_value_ckalloc_27;
      }
    }

    if(!((lib_array + (signed long int)i)->num_p_file == 0))
    {
      void *return_value_ckalloc_28;
      return_value_ckalloc_28=ckalloc((unsigned long int)(lib_array + (signed long int)i)->num_p_file * sizeof(char *) /*8ul*/ );
      (lib_array + (signed long int)i)->p_fname = (char **)return_value_ckalloc_28;
      j = 0;
      for( ; !(j >= (lib_array + (signed long int)i)->num_p_file); j = j + 1)
      {
        void *return_value_ckalloc_29;
        return_value_ckalloc_29=ckalloc((unsigned long int)1024 * sizeof(char) /*1ul*/ );
        (lib_array + (signed long int)i)->p_fname[(signed long int)j] = (char *)return_value_ckalloc_29;
      }
    }

    if(!((lib_array + (signed long int)i)->num_a1_file == 0))
    {
      void *return_value_ckalloc_30;
      return_value_ckalloc_30=ckalloc((unsigned long int)(lib_array + (signed long int)i)->num_a1_file * sizeof(char *) /*8ul*/ );
      (lib_array + (signed long int)i)->a1_fname = (char **)return_value_ckalloc_30;
      j = 0;
      for( ; !(j >= (lib_array + (signed long int)i)->num_a1_file); j = j + 1)
      {
        void *return_value_ckalloc_31;
        return_value_ckalloc_31=ckalloc((unsigned long int)1024 * sizeof(char) /*1ul*/ );
        (lib_array + (signed long int)i)->a1_fname[(signed long int)j] = (char *)return_value_ckalloc_31;
      }
    }

    if(!((lib_array + (signed long int)i)->num_a2_file == 0))
    {
      void *return_value_ckalloc_32;
      return_value_ckalloc_32=ckalloc((unsigned long int)(lib_array + (signed long int)i)->num_a2_file * sizeof(char *) /*8ul*/ );
      (lib_array + (signed long int)i)->a2_fname = (char **)return_value_ckalloc_32;
      j = 0;
      for( ; !(j >= (lib_array + (signed long int)i)->num_a2_file); j = j + 1)
      {
        void *return_value_ckalloc_33;
        return_value_ckalloc_33=ckalloc((unsigned long int)1024 * sizeof(char) /*1ul*/ );
        (lib_array + (signed long int)i)->a2_fname[(signed long int)j] = (char *)return_value_ckalloc_33;
      }
    }

    if(!((lib_array + (signed long int)i)->num_q1_file == 0))
    {
      void *return_value_ckalloc_34;
      return_value_ckalloc_34=ckalloc((unsigned long int)(lib_array + (signed long int)i)->num_q1_file * sizeof(char *) /*8ul*/ );
      (lib_array + (signed long int)i)->q1_fname = (char **)return_value_ckalloc_34;
      j = 0;
      for( ; !(j >= (lib_array + (signed long int)i)->num_q1_file); j = j + 1)
      {
        void *return_value_ckalloc_35;
        return_value_ckalloc_35=ckalloc((unsigned long int)1024 * sizeof(char) /*1ul*/ );
        (lib_array + (signed long int)i)->q1_fname[(signed long int)j] = (char *)return_value_ckalloc_35;
      }
    }

    if(!((lib_array + (signed long int)i)->num_q2_file == 0))
    {
      void *return_value_ckalloc_36;
      return_value_ckalloc_36=ckalloc((unsigned long int)(lib_array + (signed long int)i)->num_q2_file * sizeof(char *) /*8ul*/ );
      (lib_array + (signed long int)i)->q2_fname = (char **)return_value_ckalloc_36;
      j = 0;
      for( ; !(j >= (lib_array + (signed long int)i)->num_q2_file); j = j + 1)
      {
        void *return_value_ckalloc_37;
        return_value_ckalloc_37=ckalloc((unsigned long int)1024 * sizeof(char) /*1ul*/ );
        (lib_array + (signed long int)i)->q2_fname[(signed long int)j] = (char *)return_value_ckalloc_37;
      }
    }

  }
  i = 0;
  for( ; !(i >= num_libs); i = i + 1)
  {
    (lib_array + (signed long int)i)->curr_type = 1;
    (lib_array + (signed long int)i)->curr_index = 0;
    (lib_array + (signed long int)i)->fp1 = (struct _IO_FILE *)(void *)0;
    (lib_array + (signed long int)i)->fp2 = (struct _IO_FILE *)(void *)0;
    (lib_array + (signed long int)i)->num_s_a_file = 0;
    (lib_array + (signed long int)i)->num_s_q_file = 0;
    (lib_array + (signed long int)i)->num_p_file = 0;
    (lib_array + (signed long int)i)->num_a1_file = 0;
    (lib_array + (signed long int)i)->num_a2_file = 0;
    (lib_array + (signed long int)i)->num_q1_file = 0;
    (lib_array + (signed long int)i)->num_q2_file = 0;
  }
  libCounter = -1;
  rewind(fp);
  i = -1;
  char *return_value_fgets_38;
  signed int tmp_statement_expression_39;
  signed int tmp_statement_expression_80;
  signed int tmp_post_41;
  signed int tmp_statement_expression_78;
  signed int tmp_post_42;
  signed int tmp_statement_expression_76;
  signed int tmp_post_43;
  signed int tmp_statement_expression_74;
  signed int tmp_post_44;
  signed int tmp_statement_expression_72;
  signed int tmp_post_45;
  signed int tmp_statement_expression_70;
  signed int tmp_post_46;
  signed int tmp_statement_expression_68;
  signed int tmp_post_47;
  signed int tmp_statement_expression_66;
  signed int tmp_statement_expression_64;
  signed int tmp_statement_expression_62;
  signed int tmp_statement_expression_60;
  signed int tmp_statement_expression_58;
  signed int tmp_statement_expression_56;
  signed int tmp_statement_expression_54;
  signed int tmp_statement_expression_52;
  signed int tmp_statement_expression_50;
  signed int tmp_statement_expression_48;
  do
  {
    return_value_fgets_38=fgets(line, 1024, fp);
    if(return_value_fgets_38 == ((char *)NULL))
      break;

    ch = line[(signed long int)5];
    line[(signed long int)5] = (char)0;
    unsigned long int scan_libInfo__1__6__1____s1_len;
    unsigned long int scan_libInfo__1__6__1____s2_len;
    signed int return_value___builtin_strcmp_40;
    return_value___builtin_strcmp_40=__builtin_strcmp(line, "[LIB]");
    tmp_statement_expression_39 = return_value___builtin_strcmp_40;
    if(tmp_statement_expression_39 == 0)
      i = i + 1;

    else
    {
      line[(signed long int)5] = ch;
      flag=splitColumn(line);
      if(!(flag == 0))
      {
        unsigned long int scan_libInfo__1__6__4____s1_len;
        unsigned long int scan_libInfo__1__6__4____s2_len;
        signed int return_value___builtin_strcmp_81;
        return_value___builtin_strcmp_81=__builtin_strcmp(tabs[(signed long int)0], "f1");
        tmp_statement_expression_80 = return_value___builtin_strcmp_81;
        if(tmp_statement_expression_80 == 0)
        {
          tmp_post_41 = (lib_array + (signed long int)i)->num_a1_file;
          (lib_array + (signed long int)i)->num_a1_file = (lib_array + (signed long int)i)->num_a1_file + 1;
          index = tmp_post_41;
          strcpy((lib_array + (signed long int)i)->a1_fname[(signed long int)index], tabs[(signed long int)1]);
        }

        else
        {
          unsigned long int scan_libInfo__1__6__6____s1_len;
          unsigned long int scan_libInfo__1__6__6____s2_len;
          signed int return_value___builtin_strcmp_79;
          return_value___builtin_strcmp_79=__builtin_strcmp(tabs[(signed long int)0], "q1");
          tmp_statement_expression_78 = return_value___builtin_strcmp_79;
          if(tmp_statement_expression_78 == 0)
          {
            tmp_post_42 = (lib_array + (signed long int)i)->num_q1_file;
            (lib_array + (signed long int)i)->num_q1_file = (lib_array + (signed long int)i)->num_q1_file + 1;
            index = tmp_post_42;
            strcpy((lib_array + (signed long int)i)->q1_fname[(signed long int)index], tabs[(signed long int)1]);
          }

          else
          {
            unsigned long int scan_libInfo__1__6__8____s1_len;
            unsigned long int scan_libInfo__1__6__8____s2_len;
            signed int return_value___builtin_strcmp_77;
            return_value___builtin_strcmp_77=__builtin_strcmp(tabs[(signed long int)0], "f2");
            tmp_statement_expression_76 = return_value___builtin_strcmp_77;
            if(tmp_statement_expression_76 == 0)
            {
              tmp_post_43 = (lib_array + (signed long int)i)->num_a2_file;
              (lib_array + (signed long int)i)->num_a2_file = (lib_array + (signed long int)i)->num_a2_file + 1;
              index = tmp_post_43;
              strcpy((lib_array + (signed long int)i)->a2_fname[(signed long int)index], tabs[(signed long int)1]);
            }

            else
            {
              unsigned long int scan_libInfo__1__6__10____s1_len;
              unsigned long int scan_libInfo__1__6__10____s2_len;
              signed int return_value___builtin_strcmp_75;
              return_value___builtin_strcmp_75=__builtin_strcmp(tabs[(signed long int)0], "q2");
              tmp_statement_expression_74 = return_value___builtin_strcmp_75;
              if(tmp_statement_expression_74 == 0)
              {
                tmp_post_44 = (lib_array + (signed long int)i)->num_q2_file;
                (lib_array + (signed long int)i)->num_q2_file = (lib_array + (signed long int)i)->num_q2_file + 1;
                index = tmp_post_44;
                strcpy((lib_array + (signed long int)i)->q2_fname[(signed long int)index], tabs[(signed long int)1]);
              }

              else
              {
                unsigned long int scan_libInfo__1__6__12____s1_len;
                unsigned long int scan_libInfo__1__6__12____s2_len;
                signed int return_value___builtin_strcmp_73;
                return_value___builtin_strcmp_73=__builtin_strcmp(tabs[(signed long int)0], "f");
                tmp_statement_expression_72 = return_value___builtin_strcmp_73;
                if(tmp_statement_expression_72 == 0)
                {
                  tmp_post_45 = (lib_array + (signed long int)i)->num_s_a_file;
                  (lib_array + (signed long int)i)->num_s_a_file = (lib_array + (signed long int)i)->num_s_a_file + 1;
                  index = tmp_post_45;
                  strcpy((lib_array + (signed long int)i)->s_a_fname[(signed long int)index], tabs[(signed long int)1]);
                }

                else
                {
                  unsigned long int scan_libInfo__1__6__14____s1_len;
                  unsigned long int scan_libInfo__1__6__14____s2_len;
                  signed int return_value___builtin_strcmp_71;
                  return_value___builtin_strcmp_71=__builtin_strcmp(tabs[(signed long int)0], "q");
                  tmp_statement_expression_70 = return_value___builtin_strcmp_71;
                  if(tmp_statement_expression_70 == 0)
                  {
                    tmp_post_46 = (lib_array + (signed long int)i)->num_s_q_file;
                    (lib_array + (signed long int)i)->num_s_q_file = (lib_array + (signed long int)i)->num_s_q_file + 1;
                    index = tmp_post_46;
                    strcpy((lib_array + (signed long int)i)->s_q_fname[(signed long int)index], tabs[(signed long int)1]);
                  }

                  else
                  {
                    unsigned long int scan_libInfo__1__6__16____s1_len;
                    unsigned long int scan_libInfo__1__6__16____s2_len;
                    signed int return_value___builtin_strcmp_69;
                    return_value___builtin_strcmp_69=__builtin_strcmp(tabs[(signed long int)0], "p");
                    tmp_statement_expression_68 = return_value___builtin_strcmp_69;
                    if(tmp_statement_expression_68 == 0)
                    {
                      tmp_post_47 = (lib_array + (signed long int)i)->num_p_file;
                      (lib_array + (signed long int)i)->num_p_file = (lib_array + (signed long int)i)->num_p_file + 1;
                      index = tmp_post_47;
                      strcpy((lib_array + (signed long int)i)->p_fname[(signed long int)index], tabs[(signed long int)1]);
                    }

                    else
                    {
                      unsigned long int scan_libInfo__1__6__18____s1_len;
                      unsigned long int scan_libInfo__1__6__18____s2_len;
                      signed int return_value___builtin_strcmp_67;
                      return_value___builtin_strcmp_67=__builtin_strcmp(tabs[(signed long int)0], "min_ins");
                      tmp_statement_expression_66 = return_value___builtin_strcmp_67;
                      if(tmp_statement_expression_66 == 0)
                        (lib_array + (signed long int)i)->min_ins=atoi_link1(tabs[(signed long int)1]);

                      else
                      {
                        unsigned long int __s1_len;
                        unsigned long int __s2_len;
                        signed int return_value___builtin_strcmp_65;
                        return_value___builtin_strcmp_65=__builtin_strcmp(tabs[(signed long int)0], "max_ins");
                        tmp_statement_expression_64 = return_value___builtin_strcmp_65;
                        if(tmp_statement_expression_64 == 0)
                          (lib_array + (signed long int)i)->max_ins=atoi_link1(tabs[(signed long int)1]);

                        else
                        {
                          unsigned long int scan_libInfo__1__6__22____s1_len;
                          unsigned long int scan_libInfo__1__6__22____s2_len;
                          signed int return_value___builtin_strcmp_63;
                          return_value___builtin_strcmp_63=__builtin_strcmp(tabs[(signed long int)0], "avg_ins");
                          tmp_statement_expression_62 = return_value___builtin_strcmp_63;
                          if(tmp_statement_expression_62 == 0)
                            (lib_array + (signed long int)i)->avg_ins=atoi_link1(tabs[(signed long int)1]);

                          else
                          {
                            unsigned long int scan_libInfo__1__6__24____s1_len;
                            unsigned long int scan_libInfo__1__6__24____s2_len;
                            signed int return_value___builtin_strcmp_61;
                            return_value___builtin_strcmp_61=__builtin_strcmp(tabs[(signed long int)0], "rd_len_cutoff");
                            tmp_statement_expression_60 = return_value___builtin_strcmp_61;
                            if(tmp_statement_expression_60 == 0)
                              (lib_array + (signed long int)i)->rd_len_cutoff=atoi_link1(tabs[(signed long int)1]);

                            else
                            {
                              unsigned long int scan_libInfo__1__6__26____s1_len;
                              unsigned long int scan_libInfo__1__6__26____s2_len;
                              signed int return_value___builtin_strcmp_59;
                              return_value___builtin_strcmp_59=__builtin_strcmp(tabs[(signed long int)0], "reverse_seq");
                              tmp_statement_expression_58 = return_value___builtin_strcmp_59;
                              if(tmp_statement_expression_58 == 0)
                                (lib_array + (signed long int)i)->reverse=atoi_link1(tabs[(signed long int)1]);

                              else
                              {
                                unsigned long int scan_libInfo__1__6__28____s1_len;
                                unsigned long int scan_libInfo__1__6__28____s2_len;
                                signed int return_value___builtin_strcmp_57;
                                return_value___builtin_strcmp_57=__builtin_strcmp(tabs[(signed long int)0], "asm_flags");
                                tmp_statement_expression_56 = return_value___builtin_strcmp_57;
                                if(tmp_statement_expression_56 == 0)
                                  (lib_array + (signed long int)i)->asm_flag=atoi_link1(tabs[(signed long int)1]);

                                else
                                {
                                  unsigned long int scan_libInfo__1__6__30____s1_len;
                                  unsigned long int scan_libInfo__1__6__30____s2_len;
                                  signed int return_value___builtin_strcmp_55;
                                  return_value___builtin_strcmp_55=__builtin_strcmp(tabs[(signed long int)0], "rank");
                                  tmp_statement_expression_54 = return_value___builtin_strcmp_55;
                                  if(tmp_statement_expression_54 == 0)
                                    (lib_array + (signed long int)i)->rank=atoi_link1(tabs[(signed long int)1]);

                                  else
                                  {
                                    unsigned long int scan_libInfo__1__6__32____s1_len;
                                    unsigned long int scan_libInfo__1__6__32____s2_len;
                                    signed int return_value___builtin_strcmp_53;
                                    return_value___builtin_strcmp_53=__builtin_strcmp(tabs[(signed long int)0], "pair_num_cutoff");
                                    tmp_statement_expression_52 = return_value___builtin_strcmp_53;
                                    if(tmp_statement_expression_52 == 0)
                                      (lib_array + (signed long int)i)->pair_num_cut=atoi_link1(tabs[(signed long int)1]);

                                    else
                                    {
                                      unsigned long int scan_libInfo__1__6__34____s1_len;
                                      unsigned long int scan_libInfo__1__6__34____s2_len;
                                      signed int return_value___builtin_strcmp_51;
                                      return_value___builtin_strcmp_51=__builtin_strcmp(tabs[(signed long int)0], "rd_len_cutoff");
                                      tmp_statement_expression_50 = return_value___builtin_strcmp_51;
                                      if(tmp_statement_expression_50 == 0)
                                        (lib_array + (signed long int)i)->rd_len_cutoff=atoi_link1(tabs[(signed long int)1]);

                                      else
                                      {
                                        unsigned long int scan_libInfo__1__6__36____s1_len;
                                        unsigned long int scan_libInfo__1__6__36____s2_len;
                                        signed int return_value___builtin_strcmp_49;
                                        return_value___builtin_strcmp_49=__builtin_strcmp(tabs[(signed long int)0], "map_len");
                                        tmp_statement_expression_48 = return_value___builtin_strcmp_49;
                                        if(tmp_statement_expression_48 == 0)
                                          (lib_array + (signed long int)i)->map_len=atoi_link1(tabs[(signed long int)1]);

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
  }
  while((_Bool)1);
  fclose(fp);
  qsort((void *)&lib_array[(signed long int)0], (unsigned long int)num_libs, sizeof(struct lib_info) /*168ul*/ , cmp_lib);
}

// search1kmerPlus
// file prlRead2path.c line 404
static void search1kmerPlus(signed int j, unsigned char thrdID)
{
  struct kmer_st *node;
  char found;
  signed int return_value_search_kmerset_1;
  return_value_search_kmerset_1=search_kmerset(KmerSetsPatch[(signed long int)thrdID], mixBuffer[(signed long int)j], &node);
  found = (char)return_value_search_kmerset_1;
  if(found == 0)
    mixBuffer[(signed long int)j] = (unsigned long long int)0;

  else
    if(!(smallerBuffer_link2[(signed long int)j] == 0))
      mixBuffer[(signed long int)j] = (unsigned long long int)node->l_links;

    else
      mixBuffer[(signed long int)j] = (unsigned long long int)((node->l_links + (unsigned int)node->twin) - (unsigned int)1);
}

// searchFgap
// file localAsm.c line 545
static signed int searchFgap(struct kmerSet_st *kset, struct ctg4scaf *ctg1, struct ctg4scaf *ctg2, unsigned long long int *kmerCtg1, unsigned long long int *kmerCtg2, unsigned int origOverlap, signed int overlap, struct dynamic_array *gapSeqArray, signed int len1, signed int len2, unsigned long long int WordFilter, signed int *offset1, signed int *offset2, char *seqGap, signed int *cut1, signed int *cut2)
{
  signed int i;
  signed int ret = 0;
  struct kmer_st *node;
  struct kmer_st **soFarNode;
  signed int num_route;
  signed int gapLen = (signed int)(((unsigned int)(ctg2->start - ctg1->end) - origOverlap) + (unsigned int)overlap);
  signed int min = gapLen - GLDiff > 0 ? gapLen - GLDiff : 0;
  signed int searchFgap__1__max = gapLen + GLDiff < 10 ? 10 : gapLen + GLDiff;
  char **foundRoutes;
  char *soFarSeq;
  signed int traceCounter;
  signed int *routeEndOnCtg2;
  signed int *routeLens;
  char *multiOccu;
  signed long long int soFarLinks;
  double *avgLinks;
  void *return_value_ckalloc_1;
  return_value_ckalloc_1=ckalloc((unsigned long int)10 * sizeof(signed int) /*4ul*/ );
  routeEndOnCtg2 = (signed int *)return_value_ckalloc_1;
  void *return_value_ckalloc_2;
  return_value_ckalloc_2=ckalloc((unsigned long int)10 * sizeof(signed int) /*4ul*/ );
  routeLens = (signed int *)return_value_ckalloc_2;
  void *return_value_ckalloc_3;
  return_value_ckalloc_3=ckalloc((unsigned long int)10 * sizeof(char) /*1ul*/ );
  multiOccu = (char *)return_value_ckalloc_3;
  signed short int *MULTI1;
  void *return_value_ckalloc_4;
  return_value_ckalloc_4=ckalloc((unsigned long int)10 * sizeof(signed short int) /*2ul*/ );
  MULTI1 = (signed short int *)return_value_ckalloc_4;
  signed short int *MULTI2;
  void *return_value_ckalloc_5;
  return_value_ckalloc_5=ckalloc((unsigned long int)10 * sizeof(signed short int) /*2ul*/ );
  MULTI2 = (signed short int *)return_value_ckalloc_5;
  void *return_value_ckalloc_6;
  return_value_ckalloc_6=ckalloc((unsigned long int)searchFgap__1__max * sizeof(char) /*1ul*/ );
  soFarSeq = (char *)return_value_ckalloc_6;
  void *return_value_ckalloc_7;
  return_value_ckalloc_7=ckalloc((unsigned long int)(searchFgap__1__max + 1) * sizeof(struct kmer_st *) /*8ul*/ );
  soFarNode = (struct kmer_st **)return_value_ckalloc_7;
  void *return_value_ckalloc_8;
  return_value_ckalloc_8=ckalloc((unsigned long int)10 * sizeof(char *) /*8ul*/ );
  foundRoutes = (char **)return_value_ckalloc_8;
  void *return_value_ckalloc_9;
  return_value_ckalloc_9=ckalloc((unsigned long int)10 * sizeof(double) /*8ul*/ );
  avgLinks = (double *)return_value_ckalloc_9;
  i = 0;
  for( ; !(i >= 10); i = i + 1)
  {
    void *return_value_ckalloc_10;
    return_value_ckalloc_10=ckalloc((unsigned long int)searchFgap__1__max * sizeof(char) /*1ul*/ );
    foundRoutes[(signed long int)i] = (char *)return_value_ckalloc_10;
  }
  i = len1 - 1;
  signed int tmp_if_expr_11;
  signed int tmp_if_expr_12;
  signed int tmp_post_13;
  _Bool tmp_if_expr_14;
  for( ; i >= 0; i = i - 1)
  {
    soFarLinks = (signed long long int)0;
    traceCounter = (signed int)soFarLinks;
    num_route = traceCounter;
    signed int steps = 0;
    traceAlongDBgraph(kmerCtg1[(signed long int)i], steps, min, searchFgap__1__max, &num_route, kset, kmerCtg2, len2, overlap, WordFilter, foundRoutes, routeEndOnCtg2, routeLens, soFarSeq, &traceCounter, 10, soFarNode, multiOccu, &soFarLinks, avgLinks);
    if(num_route >= 1)
    {
      signed int m;
      signed int minEnd = routeEndOnCtg2[(signed long int)0];
      m = 0;
      for( ; !(m >= num_route); m = m + 1)
        if(routeLens[(signed long int)m] >= 0)
        {
          if(!(routeEndOnCtg2[(signed long int)m] >= minEnd))
            minEnd = routeEndOnCtg2[(signed long int)m];

        }

      soFarLinks = (signed long long int)0;
      traceCounter = (signed int)soFarLinks;
      num_route = traceCounter;
      steps = 0;
      trace4Repeat(kmerCtg1[(signed long int)i], steps, min, searchFgap__1__max, &num_route, kset, kmerCtg2[(signed long int)minEnd], overlap, WordFilter, &traceCounter, 10, soFarNode, MULTI1, MULTI2, routeLens, foundRoutes, soFarSeq, &soFarLinks, avgLinks);
      signed int j;
      signed int best = 0;
      signed int maxLen = routeLens[(signed long int)0];
      double maxLink = avgLinks[(signed long int)0];
      char *pt;
      char repeat = (char)0;
      char sameLen = (char)1;
      signed int leftMost = searchFgap__1__max;
      signed int rightMost = searchFgap__1__max;
      if(!(num_route >= 1))
      {
        fprintf(stderr, "After trace4Repeat: non route was found\n");
        goto __CPROVER_DUMP_L49;
      }

      if(num_route >= 2)
      {
        m = 0;
        for( ; !(m >= num_route); m = m + 1)
          if(routeLens[(signed long int)m] >= 0)
          {
            if((signed int)MULTI1[(signed long int)m] >= 0)
            {
              if((signed int)MULTI2[(signed long int)m] >= 0)
              {
                repeat = (char)1;
                if(!((signed int)MULTI1[(signed long int)m] >= leftMost))
                  tmp_if_expr_11 = (signed int)MULTI1[(signed long int)m];

                else
                  tmp_if_expr_11 = leftMost;
                leftMost = tmp_if_expr_11;
                if(!((signed int)MULTI2[(signed long int)m] >= rightMost))
                  tmp_if_expr_12 = (signed int)MULTI2[(signed long int)m];

                else
                  tmp_if_expr_12 = rightMost;
                rightMost = tmp_if_expr_12;
              }

            }

            if(!(routeLens[(signed long int)m] == maxLen))
              sameLen = (char)0;

            if(!(routeLens[(signed long int)m] >= maxLen))
              maxLen = routeLens[(signed long int)m];

            if(avgLinks[(signed long int)m] > maxLink)
            {
              maxLink = avgLinks[(signed long int)m];
              best = m;
            }

          }

      }

      if(!(repeat == 0))
      {
        *cut2 = 0;
        *cut1 = *cut2;
        *offset2 = *cut1;
        *offset1 = *offset2;
        signed int index = 0;
        char ch;
        j = 0;
        for( ; !(j >= leftMost); j = j + 1)
        {
          if(!(*routeLens >= 1 + j + overlap))
            break;

          else
            ch = foundRoutes[(signed long int)0][(signed long int)j];
          m = 1;
          for( ; !(m >= num_route); m = m + 1)
            if(routeLens[(signed long int)m] >= 0)
            {
              if(!(ch == foundRoutes[(signed long int)m][(signed long int)j]))
                break;

            }

          if(m == num_route)
          {
            tmp_post_13 = index;
            index = index + 1;
            seqGap[(signed long int)tmp_post_13] = ch;
          }

          else
            break;
        }
        *offset1 = index;
        index = 0;
        j = 0;
        for( ; !(j >= rightMost); j = j + 1)
        {
          if(!(*routeLens + -overlap + -1 >= j))
            break;

          else
            ch = foundRoutes[(signed long int)0][(signed long int)(((routeLens[(signed long int)0] - overlap) - 1) - j)];
          m = 1;
          for( ; !(m >= num_route); m = m + 1)
            if(routeLens[(signed long int)m] >= 0)
            {
              if(!(ch == foundRoutes[(signed long int)m][(signed long int)(routeLens[(signed long int)m] + -overlap + -1 + -j)]))
                break;

            }

          if(m == num_route)
            index = index + 1;

          else
            break;
        }
        *offset2 = index;
        j = 0;
        for( ; !(j >= *offset2); j = j + 1)
          seqGap[(signed long int)(((*offset1 + *offset2) - 1) - j)] = foundRoutes[(signed long int)0][(signed long int)(((routeLens[(signed long int)0] - overlap) - 1) - j)];
        if(*offset1 >= 1)
          tmp_if_expr_14 = (_Bool)1;

        else
          tmp_if_expr_14 = *offset2 > 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_14)
        {
          *cut1 = (len1 - i) - 1;
          *cut2 = minEnd;
          m = 0;
          for( ; !(m >= num_route); m = m + 1)
          {
            j = 0;
            for( ; !(j >= searchFgap__1__max); j = j + 1)
              if((signed int)foundRoutes[(signed long int)m][(signed long int)j] >= 4)
                break;

          }
        }

        ret = 3;
        break;
      }

      if(!((signed int)origOverlap >= len1 + -i + -1 + minEnd + overlap + -routeLens[(signed long int)best]))
        goto __CPROVER_DUMP_L49;

      ctg1->gapSeqOffset = (signed int)gapSeqArray->item_c;
      ctg1->gapSeqLen = (unsigned int)routeLens[(signed long int)best];
      void *return_value_darrayPut_15;
      return_value_darrayPut_15=darrayPut(gapSeqArray, (signed long long int)(ctg1->gapSeqOffset + maxLen / 4));
      if(return_value_darrayPut_15 == NULL)
        goto __CPROVER_DUMP_L49;

      void *return_value_darrayPut_16;
      return_value_darrayPut_16=darrayPut(gapSeqArray, (signed long long int)ctg1->gapSeqOffset);
      pt = (char *)return_value_darrayPut_16;
      j = 0;
      for( ; !(j >= searchFgap__1__max); j = j + 1)
      {
        if((signed int)foundRoutes[(signed long int)best][(signed long int)j] >= 4)
          break;

        writeChar2tightString(foundRoutes[(signed long int)best][(signed long int)j], pt, j);
      }
      ctg1->cutTail = (unsigned int)((len1 - i) - 1);
      ctg2->cutHead = (unsigned int)(overlap + minEnd);
      ctg2->scaftig_start = (unsigned int)0;
      ret = 1;
      break;
    }

    else
    {
      node=searchNode(kmerCtg1[(signed long int)i], kset, overlap);
      if(!(node == ((struct kmer_st *)NULL)))
        node->twin = (unsigned int)2;

    }

  __CPROVER_DUMP_L49:
    ;
  }
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    free((void *)foundRoutes[(signed long int)i]);
  free((void *)soFarSeq);
  free((void *)soFarNode);
  free((void *)multiOccu);
  free((void *)MULTI1);
  free((void *)MULTI2);
  free((void *)foundRoutes);
  free((void *)routeEndOnCtg2);
  free((void *)routeLens);
  return ret;
}

// searchKmer
// file prlRead2Ctg.c line 216
static void searchKmer(signed int t, struct kmerSet_st *kset)
{
  struct kmer_st *node;
  char found;
  signed int return_value_search_kmerset_1;
  return_value_search_kmerset_1=search_kmerset(kset, kmerBuffer_link2[(signed long int)t], &node);
  found = (char)return_value_search_kmerset_1;
  _Bool tmp_if_expr_2;
  if(!(found == 0))
    tmp_if_expr_2 = !(node->deleted != 0u) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
    nodeBuffer[(signed long int)t] = node;

  else
    nodeBuffer[(signed long int)t] = (struct kmer_st *)(void *)0;
}

// searchKmer_link1
// file prlRead2path.c line 261
static void searchKmer_link1(signed int t_link1, struct kmerSet_st *kset_link1)
{
  struct kmer_st *node_link1;
  char found_link1;
  signed int return_value_search_kmerset_1_link1;
  return_value_search_kmerset_1_link1=search_kmerset(kset_link1, kmerBuffer_link3[(signed long int)t_link1], &node_link1);
  found_link1 = (char)return_value_search_kmerset_1_link1;
  if(found_link1 == 0)
    printf("searchKmer: kmer %llx is not found\n", kmerBuffer_link3[(signed long int)t_link1]);

  nodeBuffer_link1[(signed long int)t_link1] = node_link1;
}

// searchKmerOnCtg
// file localAsm.c line 374
static signed int searchKmerOnCtg(unsigned long long int currW, unsigned long long int *kmerDest, signed int num)
{
  signed int i = 0;
  for( ; !(i >= num); i = i + 1)
    if(currW == kmerDest[(signed long int)i])
      return i;

  return -1;
}

// searchNode
// file localAsm.c line 357
static struct kmer_st * searchNode(unsigned long long int word, struct kmerSet_st *kset, signed int overlap)
{
  unsigned long long int bal_word;
  bal_word=reverseComplement(word, overlap);
  struct kmer_st *node;
  char found;
  if(!(word >= bal_word))
  {
    signed int return_value_search_kmerset_1;
    return_value_search_kmerset_1=search_kmerset(kset, word, &node);
    found = (char)return_value_search_kmerset_1;
  }

  else
  {
    signed int return_value_search_kmerset_2;
    return_value_search_kmerset_2=search_kmerset(kset, bal_word, &node);
    found = (char)return_value_search_kmerset_2;
  }
  if(!(found == 0))
    return node;

  else
    return (struct kmer_st *)(void *)0;
}

// search_kmerset
// file inc/newhash.h line 89
extern signed int search_kmerset(struct kmerSet_st *set, unsigned long long int seq, struct kmer_st **rs)
{
  unsigned long long int hc = seq % set->size;
  while((_Bool)1)
  {
    if(!((1u & set->flags[(signed long int)(hc >> 4)] >> ((15ul & hc) << 1)) == 0u))
      return 0;

    else
      if((set->array + (signed long int)hc)->seq == seq)
      {
        *rs = set->array + (signed long int)hc;
        return 1;
      }

    hc = hc + 1ull;
    if(hc == set->size)
      hc = (unsigned long long int)0;

  }
  return 0;
}

// sendWorkSignal
// file cutTipPreGraph.c line 438
static void sendWorkSignal(unsigned char SIG, unsigned char *thrdSignals)
{
  signed int t = 0;
  for( ; !(t >= thrd_num); t = t + 1)
    thrdSignals[(signed long int)(t + 1)] = SIG;
  while((_Bool)1)
  {
    usleep((unsigned int)10);
    t = 0;
    for( ; !(t >= thrd_num); t = t + 1)
      if(!(thrdSignals[(signed long int)(1 + t)] == 0))
        break;

    if(t == thrd_num)
      break;

  }
}

// sendWorkSignal_link1
// file prlHashCtg.c line 227
static void sendWorkSignal_link1(unsigned char SIG_link1, unsigned char *thrdSignals_link1)
{
  signed int t_link1 = 0;
  for( ; !(t_link1 >= thrd_num); t_link1 = t_link1 + 1)
    thrdSignals_link1[(signed long int)(t_link1 + 1)] = SIG_link1;
  while((_Bool)1)
  {
    usleep((unsigned int)10);
    t_link1 = 0;
    for( ; !(t_link1 >= thrd_num); t_link1 = t_link1 + 1)
      if(!(thrdSignals_link1[(signed long int)(1 + t_link1)] == 0))
        break;

    if(t_link1 == thrd_num)
      break;

  }
}

// sendWorkSignal_link2
// file prlHashReads.c line 228
static void sendWorkSignal_link2(unsigned char SIG_link2, unsigned char *thrdSignals_link2)
{
  signed int t_link2 = 0;
  for( ; !(t_link2 >= thrd_num); t_link2 = t_link2 + 1)
    thrdSignals_link2[(signed long int)(t_link2 + 1)] = SIG_link2;
  while((_Bool)1)
  {
    usleep((unsigned int)10);
    t_link2 = 0;
    for( ; !(t_link2 >= thrd_num); t_link2 = t_link2 + 1)
      if(!(thrdSignals_link2[(signed long int)(1 + t_link2)] == 0))
        break;

    if(t_link2 == thrd_num)
      break;

  }
}

// sendWorkSignal_link3
// file prlRead2Ctg.c line 328
static void sendWorkSignal_link3(unsigned char SIG_link3, unsigned char *thrdSignals_link3)
{
  signed int t_link3 = 0;
  for( ; !(t_link3 >= thrd_num); t_link3 = t_link3 + 1)
    thrdSignals_link3[(signed long int)(t_link3 + 1)] = SIG_link3;
  while((_Bool)1)
  {
    usleep((unsigned int)10);
    t_link3 = 0;
    for( ; !(t_link3 >= thrd_num); t_link3 = t_link3 + 1)
      if(!(thrdSignals_link3[(signed long int)(1 + t_link3)] == 0))
        break;

    if(t_link3 == thrd_num)
      break;

  }
}

// sendWorkSignal_link4
// file prlRead2path.c line 539
static void sendWorkSignal_link4(unsigned char SIG_link4, unsigned char *thrdSignals_link4)
{
  signed int t_link4 = 0;
  for( ; !(t_link4 >= thrd_num); t_link4 = t_link4 + 1)
    thrdSignals_link4[(signed long int)(t_link4 + 1)] = SIG_link4;
  while((_Bool)1)
  {
    usleep((unsigned int)10);
    t_link4 = 0;
    for( ; !(t_link4 >= thrd_num); t_link4 = t_link4 + 1)
      if(!(thrdSignals_link4[(signed long int)(1 + t_link4)] == 0))
        break;

    if(t_link4 == thrd_num)
      break;

  }
}

// sendWorkSignal_link5
// file prlReadFillGap.c line 926
static void sendWorkSignal_link5(unsigned char SIG_link5, unsigned char *thrdSignals_link5)
{
  signed int t_link5 = 0;
  for( ; !(t_link5 >= thrd_num); t_link5 = t_link5 + 1)
    thrdSignals_link5[(signed long int)(t_link5 + 1)] = SIG_link5;
  while((_Bool)1)
  {
    usleep((unsigned int)10);
    t_link5 = 0;
    for( ; !(t_link5 >= thrd_num); t_link5 = t_link5 + 1)
      if(!(thrdSignals_link5[(signed long int)(1 + t_link5)] == 0))
        break;

    if(t_link5 == thrd_num)
      break;

  }
}

// setBreakPoints
// file orderContig.c line 4045
static void setBreakPoints(struct dynamic_array *ctgArray, signed int count, signed int weakest, signed int *start, signed int *finish)
{
  signed int index = weakest - 1;
  unsigned int thisCtg;
  unsigned int nextCtg;
  void *return_value_darrayGet_1;
  return_value_darrayGet_1=darrayGet(ctgArray, (signed long long int)weakest);
  nextCtg = *((unsigned int *)return_value_darrayGet_1);
  struct connection *cnt;
  *start = weakest;
  while(index >= 0)
  {
    void *return_value_darrayGet_2;
    return_value_darrayGet_2=darrayGet(ctgArray, (signed long long int)index);
    thisCtg = *((unsigned int *)return_value_darrayGet_2);
    cnt=getCntBetween(thisCtg, nextCtg);
    if((signed int)cnt->maxGap >= 3)
      break;

    else
      *start = index;
    nextCtg = thisCtg;
    index = index - 1;
  }
  unsigned int prevCtg;
  void *return_value_darrayGet_3;
  return_value_darrayGet_3=darrayGet(ctgArray, (signed long long int)(weakest + 1));
  prevCtg = *((unsigned int *)return_value_darrayGet_3);
  *finish = weakest + 1;
  index = weakest + 2;
  while(!(index >= count))
  {
    void *return_value_darrayGet_4;
    return_value_darrayGet_4=darrayGet(ctgArray, (signed long long int)index);
    thisCtg = *((unsigned int *)return_value_darrayGet_4);
    cnt=getCntBetween(prevCtg, thisCtg);
    if((signed int)cnt->maxGap >= 3)
      break;

    else
      *finish = index;
    prevCtg = thisCtg;
    index = index + 1;
  }
}

// setConnectDelete
// file orderContig.c line 748
static signed int setConnectDelete(unsigned int from_c, unsigned int to_c, char flag, char cleanBinding)
{
  struct connection *cn_temp;
  struct connection *cn_bal;
  unsigned int bal_fc;
  bal_fc=getTwinCtg(from_c);
  unsigned int bal_tc;
  bal_tc=getTwinCtg(to_c);
  cn_temp=getCntBetween(from_c, to_c);
  cn_bal=getCntBetween(bal_tc, bal_fc);
  if(cn_bal == ((struct connection *)NULL) || cn_temp == ((struct connection *)NULL))
    return 0;

  else
  {
    cn_temp->deleted = (unsigned char)flag;
    cn_bal->deleted = (unsigned char)flag;
    if(flag == 0)
      return 1;

    else
    {
      if(!(cleanBinding == 0))
      {
        cn_temp->prevInScaf = (unsigned char)0;
        cn_temp->nextInScaf = (struct connection *)(void *)0;
        cn_bal->prevInScaf = (unsigned char)0;
        cn_bal->nextInScaf = (struct connection *)(void *)0;
      }

      return 1;
    }
  }
}

// setConnectMask
// file orderContig.c line 662
static signed int setConnectMask(unsigned int from_c, unsigned int to_c, char mask)
{
  struct connection *cn_temp;
  struct connection *cn_bal;
  struct connection *cn_ds;
  struct connection *cn_us;
  unsigned int bal_fc;
  bal_fc=getTwinCtg(from_c);
  unsigned int bal_tc;
  bal_tc=getTwinCtg(to_c);
  unsigned int ctg3;
  unsigned int bal_ctg3;
  cn_temp=getCntBetween(from_c, to_c);
  cn_bal=getCntBetween(bal_tc, bal_fc);
  if(cn_bal == ((struct connection *)NULL) || cn_temp == ((struct connection *)NULL))
    return 0;

  else
  {
    cn_temp->mask = (unsigned char)mask;
    cn_bal->mask = (unsigned char)mask;
    if(mask == 0)
      return 1;

    else
    {
      if(!(cn_temp->nextInScaf == ((struct connection *)NULL)))
      {
        setPrevInScaf(cn_temp->nextInScaf, (char)0);
        ctg3 = cn_temp->nextInScaf->contigID;
        setNextInScaf(cn_temp, (struct connection *)(void *)0);
        bal_ctg3=getTwinCtg(ctg3);
        cn_ds=getCntBetween(bal_ctg3, bal_tc);
        setNextInScaf(cn_ds, (struct connection *)(void *)0);
        setPrevInScaf(cn_bal, (char)0);
      }

      if(!(cn_bal->nextInScaf == ((struct connection *)NULL)))
      {
        setPrevInScaf(cn_bal->nextInScaf, (char)0);
        bal_ctg3 = cn_bal->nextInScaf->contigID;
        setNextInScaf(cn_bal, (struct connection *)(void *)0);
        ctg3=getTwinCtg(bal_ctg3);
        cn_us=getCntBetween(ctg3, from_c);
        setNextInScaf(cn_us, (struct connection *)(void *)0);
        setPrevInScaf(cn_temp, (char)0);
      }

      return 1;
    }
  }
}

// setConnectUsed
// file orderContig.c line 710
static char setConnectUsed(unsigned int from_c, unsigned int to_c, char flag)
{
  struct connection *cn_temp;
  struct connection *cn_bal;
  unsigned int bal_fc;
  bal_fc=getTwinCtg(from_c);
  unsigned int bal_tc;
  bal_tc=getTwinCtg(to_c);
  cn_temp=getCntBetween(from_c, to_c);
  cn_bal=getCntBetween(bal_tc, bal_fc);
  if(cn_bal == ((struct connection *)NULL) || cn_temp == ((struct connection *)NULL))
    return (char)0;

  else
  {
    cn_temp->used = (unsigned char)flag;
    cn_bal->used = (unsigned char)flag;
    return (char)1;
  }
}

// setConnectWP
// file orderContig.c line 728
static signed int setConnectWP(unsigned int from_c, unsigned int to_c, char flag)
{
  struct connection *cn_temp;
  struct connection *cn_bal;
  unsigned int bal_fc;
  bal_fc=getTwinCtg(from_c);
  unsigned int bal_tc;
  bal_tc=getTwinCtg(to_c);
  cn_temp=getCntBetween(from_c, to_c);
  cn_bal=getCntBetween(bal_tc, bal_fc);
  if(cn_bal == ((struct connection *)NULL) || cn_temp == ((struct connection *)NULL))
    return 0;

  else
  {
    cn_temp->weakPoint = (unsigned char)flag;
    cn_bal->weakPoint = (unsigned char)flag;
    return 1;
  }
}

// setInGraph
// file orderContig.c line 3023
static void setInGraph(char flag)
{
  signed int i;
  signed int node;
  nodeCounter_link1 = nodeCounter_link1 > 10000 ? 10000 : nodeCounter_link1;
  i = 1;
  for( ; nodeCounter_link1 >= i; i = i + 1)
  {
    node = (signed int)ctg4heapArray[(signed long int)i].ctgID;
    if(node >= 1)
      (contig_array + (signed long int)node)->inSubGraph = (unsigned char)flag;

  }
}

// setNextInScaf
// file orderContig.c line 422
static char setNextInScaf(struct connection *cnt, struct connection *nextCnt)
{
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  if(cnt == ((struct connection *)NULL))
  {
    printf("setNextInScaf: empty pointer\n");
    return (char)0;
  }

  else
    if(nextCnt == ((struct connection *)NULL))
    {
      cnt->nextInScaf = nextCnt;
      return (char)1;
    }

    else
    {
      if(!(cnt->mask == 0))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = cnt->deleted != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        printf("setNextInScaf: cnt is masked or deleted\n");
        return (char)0;
      }

      else
      {
        if(!(nextCnt->deleted == 0))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = nextCnt->mask != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
        {
          printf("setNextInScaf: nextCnt is masked or deleted\n");
          return (char)0;
        }

        else
        {
          cnt->nextInScaf = nextCnt;
          return (char)1;
        }
      }
    }
}

// setNodeDHeapNode
// file bubble.c line 878
static void setNodeDHeapNode(unsigned int node, struct dfibheap_el *dheapNode)
{
  dheapNodes[(signed long int)node] = dheapNode;
}

// setPrevInScaf
// file orderContig.c line 452
static char setPrevInScaf(struct connection *cnt, char flag)
{
  _Bool tmp_if_expr_1;
  if(cnt == ((struct connection *)NULL))
  {
    printf("setPrevInScaf: empty pointer\n");
    return (char)0;
  }

  else
    if(flag == 0)
    {
      cnt->prevInScaf = (unsigned char)flag;
      return (char)1;
    }

    else
    {
      if(!(cnt->mask == 0))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = cnt->deleted != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        printf("setPrevInScaf: cnt is masked or deleted\n");
        return (char)0;
      }

      else
      {
        cnt->prevInScaf = (unsigned char)flag;
        return (char)1;
      }
    }
}

// setUsed
// file orderContig.c line 1559
static char setUsed(unsigned int start, unsigned int *array, signed int max_steps, char flag)
{
  unsigned int prevCtg = start;
  unsigned int twinA;
  unsigned int twinB;
  signed int j;
  struct connection *cnt;
  char usedFlag = (char)0;
  prevCtg = start;
  j = 0;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  for( ; !(j >= max_steps); j = j + 1)
  {
    if(array[(signed long int)j] == 0u)
      break;

    cnt=getCntBetween(prevCtg, array[(signed long int)j]);
    if(cnt == ((struct connection *)NULL))
    {
      printf("setUsed: no connect between %d and %d\n", prevCtg, array[(signed long int)j]);
      prevCtg = array[(signed long int)j];
    }

    else
    {
      if((signed int)cnt->used == (signed int)flag)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = cnt->nextInScaf != ((struct connection *)NULL) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = cnt->prevInScaf != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = cnt->singleInScaf != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        return (char)1;

      cnt->checking = (unsigned char)cnt->used;
      twinA=getTwinCtg(prevCtg);
      twinB=getTwinCtg(array[(signed long int)j]);
      cnt=getCntBetween(twinB, twinA);
      if(!(cnt == ((struct connection *)NULL)))
        cnt->checking = (unsigned char)cnt->used;

      prevCtg = array[(signed long int)j];
    }
  }
  prevCtg = start;
  j = 0;
  for( ; !(j >= max_steps); j = j + 1)
  {
    if(array[(signed long int)j] == 0u)
      break;

    cnt=getCntBetween(prevCtg, array[(signed long int)j]);
    if(cnt == ((struct connection *)NULL))
      prevCtg = array[(signed long int)j];

    else
    {
      if((signed int)cnt->used == (signed int)flag)
      {
        usedFlag = (char)1;
        break;
      }

      cnt->used = (unsigned char)flag;
      twinA=getTwinCtg(prevCtg);
      twinB=getTwinCtg(array[(signed long int)j]);
      cnt=getCntBetween(twinB, twinA);
      if(!(cnt == ((struct connection *)NULL)))
        cnt->used = (unsigned char)flag;

      prevCtg = array[(signed long int)j];
    }
  }
  prevCtg = start;
  j = 0;
  for( ; !(j >= max_steps); j = j + 1)
  {
    if(array[(signed long int)j] == 0u)
      break;

    cnt=getCntBetween(prevCtg, array[(signed long int)j]);
    if(cnt == ((struct connection *)NULL))
      prevCtg = array[(signed long int)j];

    else
    {
      if(usedFlag == 0)
        cnt->mask = (unsigned char)(1 - (signed int)flag);

      else
        cnt->used = (unsigned char)cnt->checking;
      twinA=getTwinCtg(prevCtg);
      twinB=getTwinCtg(array[(signed long int)j]);
      cnt=getCntBetween(twinB, twinA);
      cnt->used = (unsigned char)(1 - (signed int)flag);
      if(usedFlag == 0)
        cnt->mask = (unsigned char)(1 - (signed int)flag);

      else
        cnt->used = (unsigned char)cnt->checking;
      prevCtg = array[(signed long int)j];
    }
  }
  return usedFlag;
}

// set_new_kmer
// file newhash.c line 58
static inline void set_new_kmer(struct kmer_st *mer, unsigned long long int seq, unsigned char left, unsigned char right)
{
  *mer = empty_kmer;
  mer->seq = seq;
  if(!((signed int)left >= 4))
    mer->l_links = mer->l_links & ~(0x3FU << (signed int)left * 6) | ((unsigned int)1 & 0x3FU) << (signed int)left * 6;

  if(!((signed int)right >= 4))
    mer->r_links = (unsigned int)mer->r_links & ~(0x3FU << (signed int)right * 6) | ((unsigned int)1 & 0x3FU) << (signed int)right * 6;

}

// simplifyCnt
// file orderContig.c line 1287
static void simplifyCnt()
{
  removeTransitive();
  debugging();
  general_linearization((char)1);
  debugging();
}

// singleKmer
// file localAsm.c line 56
static void singleKmer(signed int t, struct kmerSet_st *kset, signed int flag, unsigned long long int *kmerBuffer, char *prevcBuffer, char *nextcBuffer)
{
  struct kmer_st *pos;
  put_kmerset(kset, kmerBuffer[(signed long int)t], (unsigned char)prevcBuffer[(signed long int)t], (unsigned char)nextcBuffer[(signed long int)t], &pos);
  if((signed int)pos->inEdge == flag)
    goto __CPROVER_DUMP_L5;

  else
    if((signed int)pos->inEdge == 0)
      pos->inEdge = (unsigned int)flag;

    else
      if(flag == 2 && (signed int)pos->inEdge == 1)
        pos->inEdge = (unsigned int)3;

      else
        if((signed int)pos->inEdge == 2)
        {
          if(flag == 1)
            pos->inEdge = (unsigned int)3;

        }


__CPROVER_DUMP_L5:
  ;
}

// singleKmer_link1
// file prlHashCtg.c line 112
static void singleKmer_link1(signed int t_link1, struct kmerSet_st *kset_link1, unsigned int seq_index, unsigned int pos)
{
  char flag;
  struct kmer_st *node;
  signed int return_value_put_kmerset_1;
  return_value_put_kmerset_1=put_kmerset(kset_link1, kmerBuffer[(signed long int)t_link1], (unsigned char)4, (unsigned char)4, &node);
  flag = (char)return_value_put_kmerset_1;
  if(flag == 0)
  {
    if(!(smallerBuffer[(signed long int)t_link1] == 0))
      node->twin = (unsigned int)0;

    else
      node->twin = (unsigned int)1;
    node->l_links = (unsigned int)ctgIdArray[(signed long int)seq_index];
    node->r_links = pos;
  }

  else
    node->deleted = (unsigned int)1;
}

// singleKmer_link2
// file prlHashReads.c line 116
static void singleKmer_link2(signed int t_link2, struct kmerSet_st *kset_link2)
{
  struct kmer_st *pos_link1;
  put_kmerset(kset_link2, kmerBuffer_link1[(signed long int)t_link2], (unsigned char)prevcBuffer[(signed long int)t_link2], (unsigned char)nextcBuffer[(signed long int)t_link2], &pos_link1);
}

// smallScaf
// file orderContig.c line 3795
static void smallScaf()
{
  unsigned int i;
  unsigned int ctg;
  unsigned int bal_ctg;
  unsigned int prevCtg;
  signed int counter = 0;
  struct connection *bindCnt;
  struct connection *cnt;
  i = (unsigned int)1;
  for( ; num_ctg >= i; i = i + 1u)
    (contig_array + (signed long int)i)->flag = (unsigned char)0;
  i = (unsigned int)1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  for( ; num_ctg >= i; i = i + 1u)
  {
    if(!((contig_array + (signed long int)i)->flag == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = (contig_array + (signed long int)i)->mask != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = !((contig_array + (signed long int)i)->downwardConnect != ((struct connection *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_2)
    {
      bindCnt=getBindCnt(i);
      if(!(bindCnt == ((struct connection *)NULL)))
      {
        counter = counter + 1;
        (contig_array + (signed long int)i)->flag = (unsigned char)1;
        unsigned int return_value_getTwinCtg_3;
        return_value_getTwinCtg_3=getTwinCtg(i);
        (contig_array + (signed long int)return_value_getTwinCtg_3)->flag = (unsigned char)1;
        prevCtg=getTwinCtg(i);
        for( ; !(bindCnt == ((struct connection *)NULL)); bindCnt = bindCnt->nextInScaf)
        {
          ctg = bindCnt->contigID;
          bal_ctg=getTwinCtg(ctg);
          bindCnt->bySmall = (unsigned char)1;
          cnt=getCntBetween(bal_ctg, prevCtg);
          if(!(cnt == ((struct connection *)NULL)))
            cnt->bySmall = (unsigned char)1;

          (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
          (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
          prevCtg = bal_ctg;
        }
        ctg=getTwinCtg(i);
        bindCnt=getBindCnt(ctg);
        prevCtg = i;
        for( ; !(bindCnt == ((struct connection *)NULL)); bindCnt = bindCnt->nextInScaf)
        {
          ctg = bindCnt->contigID;
          bal_ctg=getTwinCtg(ctg);
          bindCnt->bySmall = (unsigned char)1;
          cnt=getCntBetween(bal_ctg, prevCtg);
          if(!(cnt == ((struct connection *)NULL)))
            cnt->bySmall = (unsigned char)1;

          (contig_array + (signed long int)ctg)->flag = (unsigned char)1;
          (contig_array + (signed long int)bal_ctg)->flag = (unsigned char)1;
          prevCtg = bal_ctg;
        }
      }

    }

  }
  printf("Report from smallScaf: %d scaffolds by smallPE\n", counter);
}

// solvable
// file splitReps.c line 147
unsigned int solvable(unsigned int edgeno)
{
  char return_value_EdSameAsTwin_1;
  return_value_EdSameAsTwin_1=EdSameAsTwin(edgeno);
  _Bool tmp_if_expr_2;
  if(!(return_value_EdSameAsTwin_1 == 0))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed int)(edge_array + (signed long int)edgeno)->multi == 255 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  unsigned int tmp_post_5;
  _Bool tmp_if_expr_7;
  unsigned int tmp_post_8;
  if(tmp_if_expr_2)
    return (unsigned int)0;

  else
  {
    unsigned int bal_ed;
    bal_ed=getTwinEdge(edgeno);
    unsigned int arcRight_n;
    unsigned int arcLeft_n;
    unsigned int counter;
    unsigned int i;
    unsigned int j;
    unsigned int branch;
    unsigned int bal_branch;
    struct arc *parcL;
    struct arc *parcR;
    parcL=arcCounts(bal_ed, &arcLeft_n);
    if(!(arcLeft_n >= 2u))
      return (unsigned int)0;

    else
    {
      parcR=arcCounts(edgeno, &arcRight_n);
      if(!(arcLeft_n == arcRight_n))
        return (unsigned int)0;

      else
      {
        arcRight_n = (unsigned int)0;
        while(!(parcR == ((struct arc *)NULL)))
          if(parcR->to_ed == 0u)
            parcR = parcR->next;

          else
          {
            branch = parcR->to_ed;
            char return_value_EdSameAsTwin_3;
            return_value_EdSameAsTwin_3=EdSameAsTwin(branch);
            if(!(return_value_EdSameAsTwin_3 == 0))
              tmp_if_expr_4 = (_Bool)1;

            else
              tmp_if_expr_4 = (signed int)(edge_array + (signed long int)branch)->multi == 255 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_4)
              return (unsigned int)0;

            tmp_post_5 = arcRight_n;
            arcRight_n = arcRight_n + 1u;
            rights[(signed long int)tmp_post_5] = branch;
            bal_branch=getTwinEdge(branch);
            arcCounts(bal_branch, &counter);
            if(!(counter == 1u))
              return (unsigned int)0;

            parcR = parcR->next;
          }
        arcLeft_n = (unsigned int)0;
        while(!(parcL == ((struct arc *)NULL)))
          if(parcL->to_ed == 0u)
            parcL = parcL->next;

          else
          {
            branch = parcL->to_ed;
            char return_value_EdSameAsTwin_6;
            return_value_EdSameAsTwin_6=EdSameAsTwin(branch);
            if(!(return_value_EdSameAsTwin_6 == 0))
              tmp_if_expr_7 = (_Bool)1;

            else
              tmp_if_expr_7 = (signed int)(edge_array + (signed long int)branch)->multi == 255 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_7)
              return (unsigned int)0;

            bal_branch=getTwinEdge(branch);
            tmp_post_8 = arcLeft_n;
            arcLeft_n = arcLeft_n + 1u;
            lefts[(signed long int)tmp_post_8] = bal_branch;
            arcCounts(bal_branch, &counter);
            if(!(counter == 1u))
              return (unsigned int)0;

            parcL = parcL->next;
          }
        i = (unsigned int)0;
        for( ; !(i >= arcLeft_n); i = i + 1u)
        {
          counter = (unsigned int)0;
          j = (unsigned int)0;
          for( ; !(j >= arcRight_n); j = j + 1u)
          {
            signed long long int return_value_cntByReads_9;
            return_value_cntByReads_9=cntByReads(lefts[(signed long int)i], edgeno, rights[(signed long int)j]);
            gothrough[(signed long int)i][(signed long int)j] = (unsigned char)(return_value_cntByReads_9 == (signed long int)0 ? 0 : 1);
            counter = counter + (unsigned int)gothrough[(signed long int)i][(signed long int)j];
            if(counter >= 2u)
              return (unsigned int)0;

          }
          if(!(counter == 1u))
            return (unsigned int)0;

        }
        j = (unsigned int)0;
        for( ; !(j >= arcRight_n); j = j + 1u)
        {
          counter = (unsigned int)0;
          i = (unsigned int)0;
          for( ; !(i >= arcLeft_n); i = i + 1u)
            counter = counter + (unsigned int)gothrough[(signed long int)i][(signed long int)j];
          if(!(counter == 1u))
            return (unsigned int)0;

        }
        return arcLeft_n;
      }
    }
  }
}

// solveReps
// file inc/extfunc.h line 150
extern void solveReps()
{
  unsigned int i;
  unsigned int repTime;
  signed int counter = 0;
  char flag;
  extraEdgeNum = num_ed + (unsigned int)1;
  i = (unsigned int)1;
  for( ; num_ed >= i; i = i + 1u)
  {
    repTime=solvable(i);
    if(!(repTime == 0u))
    {
      flag=interferingCheck(i, (signed int)repTime);
      if(flag == 0)
      {
        split1edge(i, (signed int)repTime);
        counter = counter + 1;
        char return_value_EdSmallerThanTwin_1;
        return_value_EdSmallerThanTwin_1=EdSmallerThanTwin(i);
        if(!(return_value_EdSmallerThanTwin_1 == 0))
          i = i + 1u;

      }

    }

  }
  printf("%d repeats solvable, %d more edges\n", counter, (extraEdgeNum - (unsigned int)1) - num_ed);
  num_ed = extraEdgeNum - (unsigned int)1;
  removeDeadArcs();
  if(!(markersArray == ((signed long long int *)NULL)))
  {
    free((void *)markersArray);
    markersArray = (signed long long int *)(void *)0;
  }

}

// split1edge
// file splitReps.c line 371
static void split1edge(unsigned int edgeno, signed int repTimes)
{
  signed int i;
  signed int j;
  unsigned int target;
  i = 1;
  for( ; !(i >= repTimes); i = i + 1)
  {
    j = 0;
    for( ; !(j >= repTimes); j = j + 1)
      if((signed int)gothrough[(signed long int)i][(signed long int)j] >= 1)
        break;

    target=cp1edge(edgeno, extraEdgeNum);
    moveArc2cp(lefts[(signed long int)i], rights[(signed long int)j], edgeno, target);
    extraEdgeNum = extraEdgeNum + (unsigned int)2;
  }
}

// splitColumn
// file lib.c line 30
static char splitColumn(char *line)
{
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(line);
  len = (signed int)return_value_strlen_1;
  signed int i = 0;
  signed int j;
  signed int tabs_n = 0;
  signed int tmp_post_2;
  for( ; !(i >= len); i = i + 1)
    if((signed int)line[(signed long int)i] >= 32)
    {
      if(!((signed int)line[(signed long int)i] >= 127))
      {
        if(!((signed int)line[(signed long int)i] == 61))
        {
          j = 0;
          for( ; !(i >= len); i = i + 1)
          {
            if(!((signed int)line[(signed long int)i] >= 32))
              break;

            if((signed int)line[(signed long int)i] >= 127)
              break;

            if((signed int)line[(signed long int)i] == 61)
              break;

            tmp_post_2 = j;
            j = j + 1;
            tabs[(signed long int)tabs_n][(signed long int)tmp_post_2] = line[(signed long int)i];
          }
          tabs[(signed long int)tabs_n][(signed long int)j] = (char)0;
          tabs_n = tabs_n + 1;
          if(tabs_n == 2)
            return (char)1;

        }

      }

    }

  if(tabs_n == 2)
    return (char)1;

  else
    return (char)0;
}

// splitNodeDescriptor
// file bubble.c line 1064
static void splitNodeDescriptor(unsigned int source, unsigned int target, signed int offset)
{
  signed int originalLength = (edge_array + (signed long int)source)->length;
  signed int backLength = originalLength - offset;
  signed int index;
  signed int seqLen;
  char *tightSeq;
  char nt;
  char *newSeq;
  unsigned int bal_source;
  bal_source=getTwinEdge(source);
  unsigned int bal_target;
  bal_target=getTwinEdge(target);
  (edge_array + (signed long int)source)->length = offset;
  (edge_array + (signed long int)bal_source)->length = offset;
  (edge_array + (signed long int)source)->flag = (unsigned short int)1;
  (edge_array + (signed long int)bal_source)->flag = (unsigned short int)1;
  if(!(target == 0u))
  {
    (edge_array + (signed long int)target)->length = backLength;
    (edge_array + (signed long int)bal_target)->length = backLength;
    free((void *)(edge_array + (signed long int)target)->seq);
    (edge_array + (signed long int)target)->seq = (char *)(void *)0;
    free((void *)(edge_array + (signed long int)bal_target)->seq);
    (edge_array + (signed long int)bal_target)->seq = (char *)(void *)0;
  }

  if(!(backLength == 0))
  {
    tightSeq = (edge_array + (signed long int)source)->seq;
    seqLen = backLength / 4 + 1;
    if(!(target == 0u))
    {
      (edge_array + (signed long int)target)->flag = (unsigned short int)1;
      (edge_array + (signed long int)bal_target)->flag = (unsigned short int)1;
      void *return_value_ckalloc_1;
      return_value_ckalloc_1=ckalloc((unsigned long int)seqLen * sizeof(char) /*1ul*/ );
      newSeq = (char *)return_value_ckalloc_1;
      (edge_array + (signed long int)target)->seq = newSeq;
      index = 0;
      for( ; !(index >= backLength); index = index + 1)
      {
        nt=getCharInTightString(tightSeq, index);
        writeChar2tightString(nt, newSeq, index);
      }
    }

    index = backLength;
    for( ; !(index >= originalLength); index = index + 1)
    {
      nt=getCharInTightString(tightSeq, index);
      writeChar2tightString(nt, tightSeq, index - backLength);
    }
    if(!(target == 0u))
    {
      tightSeq = (edge_array + (signed long int)bal_source)->seq;
      void *return_value_ckalloc_2;
      return_value_ckalloc_2=ckalloc((unsigned long int)seqLen * sizeof(char) /*1ul*/ );
      newSeq = (char *)return_value_ckalloc_2;
      (edge_array + (signed long int)bal_target)->seq = newSeq;
      index = offset;
      for( ; !(index >= originalLength); index = index + 1)
      {
        nt=getCharInTightString(tightSeq, index);
        writeChar2tightString(nt, newSeq, index - offset);
      }
    }

  }

}

// stackBackup
// file inc/stack.h line 48
void stackBackup(struct stack *astack)
{
  astack->block_backup = astack->block_list;
  astack->index_backup = astack->index_in_block;
  astack->item_c_backup = astack->item_c;
}

// stackPop
// file inc/stack.h line 51
void * stackPop(struct stack *astack)
{
  struct block_starter *block;
  _Bool tmp_if_expr_1;
  if(astack == ((struct stack *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(astack->block_list != ((struct block_starter *)NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(astack->item_c != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return (void *)0;

  else
  {
    astack->item_c = astack->item_c - 1;
    block = astack->block_list;
    if(astack->index_in_block == 1)
    {
      if(!(block->next == ((struct block_starter *)NULL)))
      {
        astack->block_list = block->next;
        astack->index_in_block = astack->items_per_block;
      }

      else
      {
        astack->index_in_block = 0;
        astack->item_c = 0;
      }
      return (void *)((void *)block + (signed long int)sizeof(struct block_starter) /*16ul*/ );
    }

    else
    {
      astack->index_in_block = astack->index_in_block - 1;
      return (void *)((void *)block + (signed long int)sizeof(struct block_starter) /*16ul*/  + (signed long int)(astack->item_size * (unsigned long int)astack->index_in_block));
    }
  }
}

// stackPush
// file inc/stack.h line 50
void * stackPush(struct stack *astack)
{
  struct block_starter *block;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  signed int tmp_post_4;
  if(astack == ((struct stack *)NULL))
    return (void *)0;

  else
  {
    astack->item_c = astack->item_c + 1;
    if(astack->block_list == ((struct block_starter *)NULL))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(astack->index_in_block == astack->items_per_block)
        tmp_if_expr_2 = !(astack->block_list->prev != ((struct block_starter *)NULL)) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct block_starter) /*16ul*/  + (unsigned long int)astack->items_per_block * astack->item_size);
      block = (struct block_starter *)return_value_malloc_1;
      block->prev = (struct block_starter *)(void *)0;
      if(!(astack->block_list == ((struct block_starter *)NULL)))
        astack->block_list->prev = block;

      block->next = astack->block_list;
      astack->block_list = block;
      astack->index_in_block = 1;
      return (void *)((void *)block + (signed long int)sizeof(struct block_starter) /*16ul*/ );
    }

    else
      if(astack->index_in_block == astack->items_per_block)
      {
        if(!(astack->block_list->prev == ((struct block_starter *)NULL)))
        {
          astack->block_list = astack->block_list->prev;
          astack->index_in_block = 1;
          return (void *)((void *)astack->block_list + (signed long int)sizeof(struct block_starter) /*16ul*/ );
        }

      }

    block = astack->block_list;
    tmp_post_4 = astack->index_in_block;
    astack->index_in_block = astack->index_in_block + 1;
    return (void *)((void *)block + (signed long int)sizeof(struct block_starter) /*16ul*/  + (signed long int)(astack->item_size * (unsigned long int)tmp_post_4));
  }
}

// stackRecover
// file inc/stack.h line 49
void stackRecover(struct stack *astack)
{
  astack->block_list = astack->block_backup;
  astack->index_in_block = astack->index_backup;
  astack->item_c = astack->item_c_backup;
}

// startEdgeFromNode
// file node2edge.c line 173
static signed int startEdgeFromNode(struct kmer_st *node1, struct _IO_FILE *fp)
{
  signed int node_c;
  signed int palindrome;
  unsigned char flag;
  struct kmer_pt *ite_pt;
  struct kmer_pt *temp_pt;
  unsigned long long int word1;
  unsigned long long int bal_word1;
  char ch1;
  _Bool tmp_if_expr_1;
  if(!(node1->linear == 0u))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = node1->deleted != 0u ? (_Bool)1 : (_Bool)0;
  void *return_value_stackPop_3;
  void *return_value_stackPop_6;
  if(tmp_if_expr_1)
    return 0;

  else
  {
    word1 = node1->seq;
    bal_word1=reverseComplement(word1, overlaplen);
    ch1 = (char)0;
    for( ; !((signed int)ch1 >= 4); ch1 = ch1 + 1)
    {
      flag = (unsigned char)((unsigned int)((signed int)node1->r_links >> (signed int)ch1 * 6) & 0x3FU);
      if(!(flag == 0))
      {
        emptyStack(nodeStack);
        void *return_value_stackPush_2;
        return_value_stackPush_2=stackPush(nodeStack);
        temp_pt = (struct kmer_pt *)return_value_stackPush_2;
        temp_pt->node = node1;
        temp_pt->isSmaller = (char)1;
        temp_pt->kmer = word1;
        stringBeads(temp_pt, ch1, &node_c);
        if(!(node_c >= 2))
          printf("%d nodes in this line!!!!!!!!!!!\n", node_c);

        else
        {
          stackBackup(nodeStack);
          emptyStack(bal_nodeStack);
          do
          {
            return_value_stackPop_3=stackPop(nodeStack);
            ite_pt = (struct kmer_pt *)return_value_stackPop_3;
            if(ite_pt == ((struct kmer_pt *)NULL))
              break;

            void *return_value_stackPush_4;
            return_value_stackPush_4=stackPush(bal_nodeStack);
            temp_pt = (struct kmer_pt *)return_value_stackPush_4;
            temp_pt->kmer=reverseComplement(ite_pt->kmer, overlaplen);
          }
          while((_Bool)1);
          stackRecover(nodeStack);
          palindrome=check_iden_kmerList(nodeStack, bal_nodeStack);
          stackRecover(nodeStack);
          if(!(palindrome == 0))
            merge_linearV2((char)0, nodeStack, node_c, fp);

          else
            merge_linearV2((char)1, nodeStack, node_c, fp);
        }
      }

    }
    ch1 = (char)0;
    for( ; !((signed int)ch1 >= 4); ch1 = ch1 + 1)
    {
      flag = (unsigned char)(node1->l_links >> (signed int)ch1 * 6 & 0x3FU);
      if(!(flag == 0))
      {
        emptyStack(nodeStack);
        void *return_value_stackPush_5;
        return_value_stackPush_5=stackPush(nodeStack);
        temp_pt = (struct kmer_pt *)return_value_stackPush_5;
        temp_pt->node = node1;
        temp_pt->isSmaller = (char)0;
        temp_pt->kmer = bal_word1;
        stringBeads(temp_pt, (char)((signed int)ch1 ^ 0x02), &node_c);
        if(!(node_c >= 2))
          printf("%d nodes in this line!!!!!!!!!!!\n", node_c);

        else
        {
          stackBackup(nodeStack);
          emptyStack(bal_nodeStack);
          do
          {
            return_value_stackPop_6=stackPop(nodeStack);
            ite_pt = (struct kmer_pt *)return_value_stackPop_6;
            if(ite_pt == ((struct kmer_pt *)NULL))
              break;

            void *return_value_stackPush_7;
            return_value_stackPush_7=stackPush(bal_nodeStack);
            temp_pt = (struct kmer_pt *)return_value_stackPush_7;
            temp_pt->kmer=reverseComplement(ite_pt->kmer, overlaplen);
          }
          while((_Bool)1);
          stackRecover(nodeStack);
          palindrome=check_iden_kmerList(nodeStack, bal_nodeStack);
          stackRecover(nodeStack);
          if(!(palindrome == 0))
            merge_linearV2((char)0, nodeStack, node_c, fp);

          else
            merge_linearV2((char)1, nodeStack, node_c, fp);
        }
      }

    }
    return 0;
  }
}

// stringBeads
// file node2edge.c line 56
static void stringBeads(struct kmer_pt *firstBead, char nextch, signed int *node_c)
{
  char smaller;
  char found;
  unsigned long long int tempKmer;
  unsigned long long int bal_word;
  unsigned long long int word = firstBead->kmer;
  unsigned long long int hash_ban;
  struct kmer_st *outgoing_node;
  signed int stringBeads__1__nodeCounter = 1;
  signed int setPicker;
  char ch;
  unsigned char flag;
  struct kmer_pt *temp_pt;
  struct kmer_pt *prev_pt = firstBead;
  word = prev_pt->kmer;
  stringBeads__1__nodeCounter = 1;
  word=nextKmer(word, nextch);
  bal_word=reverseComplement(word, overlaplen);
  if(!(bal_word >= word))
  {
    tempKmer = bal_word;
    bal_word = word;
    word = tempKmer;
    smaller = (char)0;
  }

  else
    smaller = (char)1;
  hash_ban=hash_kmer(word);
  setPicker = (signed int)(hash_ban % (unsigned long int)thrd_num);
  signed int return_value_search_kmerset_1;
  return_value_search_kmerset_1=search_kmerset(KmerSets[(signed long int)setPicker], word, &outgoing_node);
  found = (char)return_value_search_kmerset_1;
  while(!(found == 0))
  {
    if(outgoing_node->linear == 0u)
      break;

    stringBeads__1__nodeCounter = stringBeads__1__nodeCounter + 1;
    void *return_value_stackPush_2;
    return_value_stackPush_2=stackPush(nodeStack);
    temp_pt = (struct kmer_pt *)return_value_stackPush_2;
    temp_pt->node = outgoing_node;
    temp_pt->isSmaller = smaller;
    if(!(smaller == 0))
      temp_pt->kmer = word;

    else
      temp_pt->kmer = bal_word;
    prev_pt = temp_pt;
    if(!(smaller == 0))
    {
      ch = (char)0;
      for( ; !((signed int)ch >= 4); ch = ch + 1)
      {
        flag = (unsigned char)((unsigned int)((signed int)outgoing_node->r_links >> (signed int)ch * 6) & 0x3FU);
        if(!(flag == 0))
          break;

      }
      word=nextKmer(prev_pt->kmer, ch);
      bal_word=reverseComplement(word, overlaplen);
      if(!(bal_word >= word))
      {
        tempKmer = bal_word;
        bal_word = word;
        word = tempKmer;
        smaller = (char)0;
      }

      else
        smaller = (char)1;
      hash_ban=hash_kmer(word);
      setPicker = (signed int)(hash_ban % (unsigned long int)thrd_num);
      signed int return_value_search_kmerset_3;
      return_value_search_kmerset_3=search_kmerset(KmerSets[(signed long int)setPicker], word, &outgoing_node);
      found = (char)return_value_search_kmerset_3;
    }

    else
    {
      ch = (char)0;
      for( ; !((signed int)ch >= 4); ch = ch + 1)
      {
        flag = (unsigned char)(outgoing_node->l_links >> (signed int)ch * 6 & 0x3FU);
        if(!(flag == 0))
          break;

      }
      word=nextKmer(prev_pt->kmer, (char)((signed int)ch ^ 0x02));
      bal_word=reverseComplement(word, overlaplen);
      if(!(bal_word >= word))
      {
        tempKmer = bal_word;
        bal_word = word;
        word = tempKmer;
        smaller = (char)0;
      }

      else
        smaller = (char)1;
      hash_ban=hash_kmer(word);
      setPicker = (signed int)(hash_ban % (unsigned long int)thrd_num);
      signed int return_value_search_kmerset_4;
      return_value_search_kmerset_4=search_kmerset(KmerSets[(signed long int)setPicker], word, &outgoing_node);
      found = (char)return_value_search_kmerset_4;
    }
  }
  if(!(outgoing_node == ((struct kmer_st *)NULL)))
  {
    stringBeads__1__nodeCounter = stringBeads__1__nodeCounter + 1;
    void *return_value_stackPush_5;
    return_value_stackPush_5=stackPush(nodeStack);
    temp_pt = (struct kmer_pt *)return_value_stackPush_5;
    temp_pt->node = outgoing_node;
    temp_pt->isSmaller = smaller;
    if(!(smaller == 0))
      temp_pt->kmer = word;

    else
      temp_pt->kmer = bal_word;
  }

  *node_c = stringBeads__1__nodeCounter;
}

// substitueDSinScaf
// file orderContig.c line 520
static void substitueDSinScaf(struct connection *origin, unsigned int branch_c, unsigned int to_c_new)
{
  _Bool tmp_if_expr_1;
  if(origin == ((struct connection *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(origin->prevInScaf != 0) ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr_1)
  {
    unsigned int to_c;
    unsigned int bal_branch_c;
    unsigned int bal_to_c;
    unsigned int bal_to_c_new;
    unsigned int from_c;
    unsigned int bal_from_c;
    struct connection *bal_origin;
    struct connection *prevCNT;
    struct connection *bal_prevCNT;
    struct connection *nextCNT;
    struct connection *bal_nextCNT;
    to_c = origin->contigID;
    bal_branch_c=getTwinCtg(branch_c);
    bal_to_c=getTwinCtg(to_c);
    bal_origin=getCntBetween(bal_to_c, bal_branch_c);
    if(bal_origin == ((struct connection *)NULL))
      printf("substitueDSinScaf: no connect between %d and %d\n", bal_to_c, bal_branch_c);

    else
    {
      bal_from_c = bal_origin->nextInScaf->contigID;
      from_c=getTwinCtg(bal_from_c);
      bal_to_c_new=getTwinCtg(to_c_new);
      prevCNT=checkConnect(from_c, branch_c);
      nextCNT=checkConnect(branch_c, to_c_new);
      setNextInScaf(prevCNT, nextCNT);
      setPrevInScaf(nextCNT, (char)1);
      bal_nextCNT=checkConnect(bal_to_c_new, bal_branch_c);
      bal_prevCNT=checkConnect(bal_branch_c, bal_from_c);
      setNextInScaf(bal_nextCNT, bal_prevCNT);
      setPrevInScaf(origin, (char)0);
      setNextInScaf(bal_origin, (struct connection *)(void *)0);
    }
  }

}

// substitueUSinScaf
// file orderContig.c line 482
static void substitueUSinScaf(struct connection *origin, unsigned int from_c_new)
{
  _Bool tmp_if_expr_1;
  if(origin == ((struct connection *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(origin->nextInScaf != ((struct connection *)NULL)) ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr_1)
  {
    unsigned int branch_c;
    unsigned int to_c;
    unsigned int bal_branch_c;
    unsigned int bal_to_c;
    unsigned int bal_from_c_new;
    bal_from_c_new=getTwinCtg(from_c_new);
    struct connection *bal_origin;
    struct connection *bal_nextCNT;
    struct connection *prevCNT;
    struct connection *bal_prevCNT;
    branch_c = origin->contigID;
    to_c = origin->nextInScaf->contigID;
    bal_branch_c=getTwinCtg(branch_c);
    bal_to_c=getTwinCtg(to_c);
    prevCNT=checkConnect(from_c_new, branch_c);
    bal_nextCNT=checkConnect(bal_to_c, bal_branch_c);
    if(bal_nextCNT == ((struct connection *)NULL))
      printf("substitueUSinScaf: no connect between %d and %d\n", bal_to_c, bal_branch_c);

    else
    {
      bal_origin = bal_nextCNT->nextInScaf;
      bal_prevCNT=checkConnect(bal_branch_c, bal_from_c_new);
      setPrevInScaf(bal_nextCNT->nextInScaf, (char)0);
      setNextInScaf(prevCNT, origin->nextInScaf);
      setNextInScaf(bal_nextCNT, bal_prevCNT);
      setPrevInScaf(bal_prevCNT, (char)1);
      setNextInScaf(origin, (struct connection *)(void *)0);
      setPrevInScaf(bal_origin, (char)0);
    }
  }

}

// switch2twin
// file orderContig.c line 3973
static void switch2twin(struct stack *scafStack)
{
  unsigned int *pt;
  stackRecover(scafStack);
  void *return_value_stackPop_1;
  do
  {
    return_value_stackPop_1=stackPop(scafStack);
    pt = (unsigned int *)return_value_stackPop_1;
    if(pt == ((unsigned int *)NULL))
      break;

    *pt=getTwinCtg(*pt);
  }
  while((_Bool)1);
}

// threadRoutine
// file cutTipPreGraph.c line 353
static void threadRoutine(void *para)
{
  struct parameter *prm;
  unsigned char id;
  prm = (struct parameter *)para;
  id = prm->threadID;
  while((_Bool)1)
  {
    if((signed int)*prm->selfSignal == 2)
    {
      *prm->selfSignal = (unsigned char)0;
      break;
    }

    else
      if((signed int)*prm->selfSignal == 1)
      {
        thread_mark(KmerSets[(signed long int)id], id);
        *prm->selfSignal = (unsigned char)0;
      }

    usleep((unsigned int)1);
  }
}

// threadRoutine_link1
// file prlHashCtg.c line 53
static void threadRoutine_link1(void *para_link1)
{
  struct parameter *prm_link1;
  unsigned int i;
  unsigned char id_link1;
  prm_link1 = (struct parameter *)para_link1;
  id_link1 = prm_link1->threadID;
  unsigned int tmp_post_1;
  while((_Bool)1)
  {
    if((signed int)*prm_link1->selfSignal == 1)
    {
      unsigned int seq_index = (unsigned int)0;
      unsigned int pos = (unsigned int)0;
      i = (unsigned int)0;
      for( ; !(i >= kmer_c); i = i + 1u)
      {
        if(!(seq_index >= read_c))
        {
          if(indexArray[(signed long int)(1u + seq_index)] == i)
          {
            seq_index = seq_index + 1u;
            pos = (unsigned int)0;
          }

        }

        if(!((unsigned char)(hashBanBuffer[(signed long int)i] % (unsigned long int)thrd_num) == id_link1))
          pos = pos + 1u;

        else
        {
          kmerCounter[(signed long int)((signed int)id_link1 + 1)] = kmerCounter[(signed long int)((signed int)id_link1 + 1)] + 1ll;
          tmp_post_1 = pos;
          pos = pos + 1u;
          singleKmer_link1((signed int)i, KmerSets[(signed long int)id_link1], seq_index, tmp_post_1);
        }
      }
      *prm_link1->selfSignal = (unsigned char)0;
    }

    else
      if((signed int)*prm_link1->selfSignal == 2)
      {
        i = (unsigned int)0;
        for( ; !(i >= read_c); i = i + 1u)
          if(i % (unsigned int)thrd_num == (unsigned int)id_link1)
            chopKmer4read_link1((signed int)i, (signed int)id_link1 + 1);

        *prm_link1->selfSignal = (unsigned char)0;
      }

      else
        if((signed int)*prm_link1->selfSignal == 3)
        {
          *prm_link1->selfSignal = (unsigned char)0;
          break;
        }

    usleep((unsigned int)1);
  }
}

// threadRoutine_link2
// file prlHashReads.c line 58
static void threadRoutine_link2(void *para_link2)
{
  struct parameter *prm_link2;
  signed int i_link1;
  unsigned char id_link2;
  prm_link2 = (struct parameter *)para_link2;
  id_link2 = prm_link2->threadID;
  while((_Bool)1)
  {
    if((signed int)*prm_link2->selfSignal == 1)
    {
      i_link1 = 0;
      for( ; !(i_link1 >= kmer_c_link1); i_link1 = i_link1 + 1)
        if(hashBanBuffer_link1[(signed long int)i_link1] % (unsigned long int)thrd_num == (unsigned long int)id_link2)
        {
          kmerCounter_link1[(signed long int)((signed int)id_link2 + 1)] = kmerCounter_link1[(signed long int)((signed int)id_link2 + 1)] + 1ll;
          singleKmer_link2(i_link1, KmerSets[(signed long int)id_link2]);
        }

      *prm_link2->selfSignal = (unsigned char)0;
    }

    else
      if((signed int)*prm_link2->selfSignal == 2)
      {
        i_link1 = 0;
        for( ; !(i_link1 >= read_c_link1); i_link1 = i_link1 + 1)
          if(i_link1 % thrd_num == (signed int)id_link2)
            chopKmer4read_link2(i_link1, (signed int)id_link2 + 1);

        *prm_link2->selfSignal = (unsigned char)0;
      }

      else
        if((signed int)*prm_link2->selfSignal == 3)
        {
          *prm_link2->selfSignal = (unsigned char)0;
          break;
        }

        else
          if((signed int)*prm_link2->selfSignal == 4)
          {
            thread_mark_link1(KmerSets[(signed long int)id_link2], id_link2);
            *prm_link2->selfSignal = (unsigned char)0;
          }

          else
            if((signed int)*prm_link2->selfSignal == 5)
            {
              thread_delow(KmerSets[(signed long int)id_link2], id_link2);
              *prm_link2->selfSignal = (unsigned char)0;
            }

    usleep((unsigned int)1);
  }
}

// threadRoutine_link3
// file prlRead2Ctg.c line 79
static void threadRoutine_link3(void *para_link3)
{
  struct parameter *prm_link3;
  signed int i_link2;
  signed int t;
  unsigned char id_link3;
  prm_link3 = (struct parameter *)para_link3;
  id_link3 = prm_link3->threadID;
  while((_Bool)1)
  {
    if((signed int)*prm_link3->selfSignal == 1)
    {
      i_link2 = 0;
      for( ; !(i_link2 >= kmer_c_link2); i_link2 = i_link2 + 1)
        if(hashBanBuffer_link2[(signed long int)i_link2] % (unsigned long int)thrd_num == (unsigned long int)id_link3)
          searchKmer(i_link2, KmerSets[(signed long int)id_link3]);

      *prm_link3->selfSignal = (unsigned char)0;
    }

    else
      if((signed int)*prm_link3->selfSignal == 2)
      {
        i_link2 = 0;
        for( ; !(i_link2 >= read_c_link2); i_link2 = i_link2 + 1)
          if(i_link2 % thrd_num == (signed int)id_link3)
            chopKmer4read_link3(i_link2, (signed int)id_link3 + 1);

        *prm_link3->selfSignal = (unsigned char)0;
      }

      else
        if((signed int)*prm_link3->selfSignal == 3)
        {
          t = 0;
          for( ; !(t >= read_c_link2); t = t + 1)
            if(t % thrd_num == (signed int)id_link3)
              parse1read(t, (signed int)id_link3 + 1);

          *prm_link3->selfSignal = (unsigned char)0;
        }

        else
          if((signed int)*prm_link3->selfSignal == 5)
          {
            *prm_link3->selfSignal = (unsigned char)0;
            break;
          }

    usleep((unsigned int)1);
  }
}

// threadRoutine_link4
// file prlRead2path.c line 83
static void threadRoutine_link4(void *para_link4)
{
  struct parameter *prm_link4;
  signed int i_link3;
  signed int t_link1;
  signed int j;
  signed int start;
  signed int finish;
  unsigned char id_link4;
  prm_link4 = (struct parameter *)para_link4;
  id_link4 = prm_link4->threadID;
  _Bool tmp_if_expr_1;
  while((_Bool)1)
  {
    if((signed int)*prm_link4->selfSignal == 1)
    {
      i_link3 = 0;
      for( ; !(i_link3 >= kmer_c_link3); i_link3 = i_link3 + 1)
        if(hashBanBuffer_link3[(signed long int)i_link3] % (unsigned long int)thrd_num == (unsigned long int)id_link4)
          searchKmer_link1(i_link3, KmerSets[(signed long int)id_link4]);

      *prm_link4->selfSignal = (unsigned char)0;
    }

    else
      if((signed int)*prm_link4->selfSignal == 2)
      {
        i_link3 = 0;
        for( ; !(i_link3 >= read_c_link3); i_link3 = i_link3 + 1)
          if(i_link3 % thrd_num == (signed int)id_link4)
            chopKmer4read_link4(i_link3, (signed int)id_link4 + 1);

        *prm_link4->selfSignal = (unsigned char)0;
      }

      else
        if((signed int)*prm_link4->selfSignal == 3)
        {
          t_link1 = 0;
          for( ; !(t_link1 >= read_c_link3); t_link1 = t_link1 + 1)
            if(t_link1 % thrd_num == (signed int)id_link4)
              parse1read_link1(t_link1, (signed int)id_link4 + 1);

          *prm_link4->selfSignal = (unsigned char)0;
        }

        else
          if((signed int)*prm_link4->selfSignal == 4)
          {
            t_link1 = 0;
            for( ; !(t_link1 >= read_c_link3); t_link1 = t_link1 + 1)
            {
              start = indexArray_link3[(signed long int)t_link1];
              finish = indexArray_link3[(signed long int)(t_link1 + 1)];
              j = start;
              for( ; !(j >= finish); j = j + 1)
                if((signed int)flagArray[(signed long int)j] == 0)
                {
                  if(mixBuffer[(signed long int)j] == 0ul)
                    break;

                }

                else
                  if(hashBanBuffer_link3[(signed long int)j] % (unsigned long int)thrd_num == (unsigned long int)id_link4)
                    search1kmerPlus(j, id_link4);

            }
            *prm_link4->selfSignal = (unsigned char)0;
          }

          else
            if((signed int)*prm_link4->selfSignal == 6)
            {
              t_link1 = 0;
              for( ; !(t_link1 >= read_c_link3); t_link1 = t_link1 + 1)
              {
                start = indexArray_link3[(signed long int)t_link1];
                finish = indexArray_link3[(signed long int)(t_link1 + 1)];
                j = start;
                for( ; !(j >= finish + -1); j = j + 1)
                {
                  if(mixBuffer[(signed long int)j] == 0ul)
                    tmp_if_expr_1 = (_Bool)1;

                  else
                    tmp_if_expr_1 = mixBuffer[(signed long int)(j + 1)] == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr_1)
                    break;

                  if(mixBuffer[(signed long int)j] % (unsigned long int)thrd_num == (unsigned long int)id_link4)
                    thread_add1preArc((unsigned int)mixBuffer[(signed long int)j], (unsigned int)mixBuffer[(signed long int)(j + 1)], (unsigned int)id_link4);

                }
              }
              *prm_link4->selfSignal = (unsigned char)0;
            }

            else
              if((signed int)*prm_link4->selfSignal == 5)
              {
                *prm_link4->selfSignal = (unsigned char)0;
                break;
              }

    usleep((unsigned int)1);
  }
}

// threadRoutine_link5
// file prlReadFillGap.c line 881
static void threadRoutine_link5(void *para_link5)
{
  struct parameter *prm_link5;
  signed int i_link4;
  prm_link5 = (struct parameter *)para_link5;
  while((_Bool)1)
  {
    if((signed int)*prm_link5->selfSignal == 1)
    {
      emptyDarray(darrayBuf[(signed long int)prm_link5->threadID]);
      i_link4 = 0;
      for( ; !(i_link4 >= scafInBuf); i_link4 = i_link4 + 1)
        check1scaf(i_link4, (signed int)prm_link5->threadID);
      *prm_link5->selfSignal = (unsigned char)0;
    }

    else
      if((signed int)*prm_link5->selfSignal == 2)
      {
        *prm_link5->selfSignal = (unsigned char)0;
        break;
      }

    usleep((unsigned int)1);
  }
}

// thread_add1preArc
// file prlRead2path.c line 288
static void thread_add1preArc(unsigned int from_ed, unsigned int to_ed, unsigned int thrdID)
{
  struct prearc *parc;
  parc=getPreArcBetween(from_ed, to_ed);
  if(!(parc == ((struct prearc *)NULL)))
    parc->multiplicity = parc->multiplicity + 1u;

  else
  {
    parc=prlAllocatePreArc(to_ed, preArc_mem_managers[(signed long int)thrdID]);
    arcCounters[(signed long int)thrdID] = arcCounters[(signed long int)thrdID] + 1u;
    parc->next = preArc_array[(signed long int)from_ed];
    preArc_array[(signed long int)from_ed] = parc;
  }
}

// thread_delow
// file prlHashReads.c line 458
static void thread_delow(struct kmerSet_st *set, unsigned char thrdID)
{
  signed int i;
  signed int in_num;
  signed int out_num;
  signed int cvgSingle;
  signed int l_cvg;
  signed int r_cvg;
  struct kmer_st *rs;
  set->iter_ptr = (unsigned long long int)0;
  for( ; !(set->iter_ptr >= set->size); set->iter_ptr = set->iter_ptr + 1ull)
    if((1u & set->flags[(signed long int)(set->iter_ptr >> 4)] >> ((15ul & set->iter_ptr) << 1)) == 0u)
    {
      r_cvg = 0;
      l_cvg = r_cvg;
      out_num = l_cvg;
      in_num = out_num;
      rs = set->array + (signed long int)set->iter_ptr;
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        cvgSingle = (signed int)(rs->l_links >> i * 6 & 0x3FU);
        if(cvgSingle >= 1 && (signed int)deLowKmer >= cvgSingle)
          rs->l_links = rs->l_links & ~(0x3FU << i * 6) | ((unsigned int)0 & 0x3FU) << i * 6;

        cvgSingle = (signed int)((unsigned int)((signed int)rs->r_links >> i * 6) & 0x3FU);
        if(cvgSingle >= 1 && (signed int)deLowKmer >= cvgSingle)
          rs->r_links = (unsigned int)rs->r_links & ~(0x3FU << i * 6) | ((unsigned int)0 & 0x3FU) << i * 6;

      }
      if(rs->l_links == 0u)
      {
        if((signed int)rs->r_links == 0)
        {
          rs->deleted = (unsigned int)1;
          tips[(signed long int)thrdID] = tips[(signed long int)thrdID] + 1ll;
        }

      }

    }

}

// thread_mark
// file cutTipPreGraph.c line 395
static void thread_mark(struct kmerSet_st *set, unsigned char thrdID)
{
  signed int in_num;
  signed int out_num;
  struct kmer_st *rs;
  set->iter_ptr = (unsigned long long int)0;
  _Bool tmp_if_expr_1;
  while(!(set->iter_ptr >= set->size))
  {
    if((1u & set->flags[(signed long int)(set->iter_ptr >> 4)] >> ((15ul & set->iter_ptr) << 1)) == 0u)
    {
      rs = set->array + (signed long int)set->iter_ptr;
      if(!(rs->deleted == 0u))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = rs->linear != 0u ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        set->iter_ptr = set->iter_ptr + 1ull;
        continue;
      }

      in_num=count_branch2prev(rs);
      out_num=count_branch2next(rs);
      if(in_num == 1 && out_num == 1)
      {
        rs->linear = (unsigned int)1;
        linearCounter[(signed long int)thrdID] = linearCounter[(signed long int)thrdID] + 1ll;
      }

    }

    set->iter_ptr = set->iter_ptr + 1ull;
  }
}

// thread_mark_link1
// file prlHashReads.c line 534
static void thread_mark_link1(struct kmerSet_st *set_link1, unsigned char thrdID_link1)
{
  signed int i;
  signed int in_num_link1;
  signed int out_num_link1;
  signed int cvgSingle;
  signed int l_cvg;
  signed int r_cvg;
  struct kmer_st *rs_link1;
  signed long long int counter = (signed long long int)0;
  set_link1->iter_ptr = (unsigned long long int)0;
  for( ; !(set_link1->iter_ptr >= set_link1->size); set_link1->iter_ptr = set_link1->iter_ptr + 1ull)
    if((1u & set_link1->flags[(signed long int)(set_link1->iter_ptr >> 4)] >> ((15ul & set_link1->iter_ptr) << 1)) == 0u)
    {
      r_cvg = 0;
      l_cvg = r_cvg;
      out_num_link1 = l_cvg;
      in_num_link1 = out_num_link1;
      rs_link1 = set_link1->array + (signed long int)set_link1->iter_ptr;
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        cvgSingle = (signed int)(rs_link1->l_links >> i * 6 & 0x3FU);
        if(cvgSingle >= 1)
        {
          in_num_link1 = in_num_link1 + 1;
          l_cvg = l_cvg + cvgSingle;
        }

        cvgSingle = (signed int)((unsigned int)((signed int)rs_link1->r_links >> i * 6) & 0x3FU);
        if(cvgSingle >= 1)
        {
          out_num_link1 = out_num_link1 + 1;
          r_cvg = r_cvg + cvgSingle;
        }

      }
      if(!(rs_link1->single == 0u))
      {
        kmerFreq[(signed long int)thrdID_link1][(signed long int)1] = kmerFreq[(signed long int)thrdID_link1][(signed long int)1] + 1ll;
        counter = counter + 1ll;
      }

      else
        kmerFreq[(signed long int)thrdID_link1][(signed long int)(l_cvg > r_cvg ? l_cvg : r_cvg)] = kmerFreq[(signed long int)thrdID_link1][(signed long int)(l_cvg > r_cvg ? l_cvg : r_cvg)] + 1ll;
      if(in_num_link1 == 1 && out_num_link1 == 1)
      {
        rs_link1->linear = (unsigned int)1;
        tips[(signed long int)thrdID_link1] = tips[(signed long int)thrdID_link1] + 1ll;
      }

    }

}

// thread_wait
// file cutTipPreGraph.c line 429
static void thread_wait(unsigned long int *threads)
{
  signed int i = 0;
  for( ; !(i >= thrd_num); i = i + 1)
    if(!(threads[(signed long int)i] == 0ul))
      pthread_join(threads[(signed long int)i], (void **)(void *)0);

}

// thread_wait_link1
// file prlHashCtg.c line 153
static void thread_wait_link1(unsigned long int *threads_link1)
{
  signed int i_link1 = 0;
  for( ; !(i_link1 >= thrd_num); i_link1 = i_link1 + 1)
    if(!(threads_link1[(signed long int)i_link1] == 0ul))
      pthread_join(threads_link1[(signed long int)i_link1], (void **)(void *)0);

}

// thread_wait_link2
// file prlHashReads.c line 140
static void thread_wait_link2(unsigned long int *threads_link2)
{
  signed int i_link2 = 0;
  for( ; !(i_link2 >= thrd_num); i_link2 = i_link2 + 1)
    if(!(threads_link2[(signed long int)i_link2] == 0ul))
      pthread_join(threads_link2[(signed long int)i_link2], (void **)(void *)0);

}

// thread_wait_link3
// file prlRead2Ctg.c line 713
static void thread_wait_link3(unsigned long int *threads_link3)
{
  signed int i_link3 = 0;
  for( ; !(i_link3 >= thrd_num); i_link3 = i_link3 + 1)
    if(!(threads_link3[(signed long int)i_link3] == 0ul))
      pthread_join(threads_link3[(signed long int)i_link3], (void **)(void *)0);

}

// thread_wait_link4
// file prlRead2path.c line 796
static void thread_wait_link4(unsigned long int *threads_link4)
{
  signed int i_link4 = 0;
  for( ; !(i_link4 >= thrd_num); i_link4 = i_link4 + 1)
    if(!(threads_link4[(signed long int)i_link4] == 0ul))
      pthread_join(threads_link4[(signed long int)i_link4], (void **)(void *)0);

}

// thread_wait_link5
// file prlReadFillGap.c line 946
static void thread_wait_link5(unsigned long int *threads_link5)
{
  signed int i_link5 = 0;
  for( ; !(i_link5 >= thrd_num); i_link5 = i_link5 + 1)
    if(!(threads_link5[(signed long int)i_link5] == 0ul))
      pthread_join(threads_link5[(signed long int)i_link5], (void **)(void *)0);

}

// tourBus
// file bubble.c line 1903
static void tourBus(unsigned int startingPoint)
{
  unsigned int currentNode = startingPoint;
  times[(signed long int)startingPoint] = (double)0;
  previous[(signed long int)startingPoint] = currentNode;
  while(currentNode >= 1u)
  {
    dheapNodes[(signed long int)currentNode] = (struct dfibheap_el *)(void *)0;
    tourBusNode(currentNode);
    currentNode=removeNextNodeFromDHeap(dheap);
    if(currentNode >= 1u)
      rnodeCounter = rnodeCounter + 1ll;

  }
}

// tourBusArc
// file bubble.c line 1779
static void tourBusArc(unsigned int origin, unsigned int destination, unsigned int arcMulti, double originTime)
{
  double arcTime;
  double totalTime;
  double destinationTime;
  unsigned int oldPrevious = previous[(signed long int)destination];
  _Bool tmp_if_expr_1;
  if(oldPrevious == origin)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed int)(edge_array + (signed long int)destination)->multi == 1 ? (_Bool)1 : (_Bool)0;
  char return_value_isPreviousToNode_2;
  if(!tmp_if_expr_1)
  {
    arcCounter = arcCounter + 1ll;
    if(arcMulti >= 1u)
      arcTime = (double)(edge_array + (signed long int)origin)->length / (double)arcMulti;

    else
    {
      arcTime = 0.0;
      printf("arc from %d to %d with flags %d originTime %f, arc %d\n", origin, destination, (edge_array + (signed long int)destination)->multi, originTime, arcMulti);
      fflush(stdout);
    }
    totalTime = originTime + arcTime;
    destinationTime = times[(signed long int)destination];
    if(IEEE_FLOAT_EQUAL(destinationTime, -1.000000))
    {
      times[(signed long int)destination] = totalTime;
      dheapNodes[(signed long int)destination]=insertNodeIntoDHeap(dheap, totalTime, destination);
      dnodeCounter = dnodeCounter + 1ll;
      previous[(signed long int)destination] = origin;
      goto __CPROVER_DUMP_L11;
    }

    else
      if(destinationTime > totalTime)
      {
        if(dheapNodes[(signed long int)destination] == ((struct dfibheap_el *)NULL))
          goto __CPROVER_DUMP_L11;

        replaceCounter = replaceCounter + 1ll;
        times[(signed long int)destination] = totalTime;
        replaceKeyInDHeap(dheap, dheapNodes[(signed long int)destination], totalTime);
        previous[(signed long int)destination] = origin;
        comparePaths(destination, oldPrevious);
        goto __CPROVER_DUMP_L11;
      }

      else
      {
        if(IEEE_FLOAT_EQUAL(destinationTime, times[(signed long int)origin]))
        {
          return_value_isPreviousToNode_2=isPreviousToNode(destination, origin);
          if(!(return_value_isPreviousToNode_2 == 0))
            goto __CPROVER_DUMP_L11;

        }

        comparePaths(destination, origin);
      }
  }


__CPROVER_DUMP_L11:
  ;
}

// tourBusNode
// file bubble.c line 1842
static void tourBusNode(unsigned int node)
{
  struct arc *parc;
  signed int index = 0;
  signed int outNodeNum;
  unsigned int tmp_post_1 = expCounter;
  expCounter = expCounter + 1u;
  expanded[(signed long int)tmp_post_1] = node;
  activeNode = node;
  parc = (edge_array + (signed long int)activeNode)->arcs;
  signed int tmp_post_2;
  for( ; !(parc == ((struct arc *)NULL)); parc = parc->next)
  {
    outArcArray[(signed long int)index] = parc;
    tmp_post_2 = index;
    index = index + 1;
    outNodeArray[(signed long int)tmp_post_2] = parc->to_ed;
    if(index >= 100)
      break;

  }
  outNodeNum = index;
  HasChanged = (char)0;
  index = 0;
  for( ; !(index >= outNodeNum); index = index + 1)
  {
    if(!(HasChanged == 0))
    {
      parc=getArcBetween(activeNode, outNodeArray[(signed long int)index]);
      getArcCounter = getArcCounter + 1ll;
    }

    else
      parc = outArcArray[(signed long int)index];
    if(!(parc == ((struct arc *)NULL)))
      tourBusArc(activeNode, outNodeArray[(signed long int)index], parc->multiplicity, times[(signed long int)activeNode]);

  }
}

// trace4Repeat
// file localAsm.c line 804
static void trace4Repeat(unsigned long long int currW, signed int steps, signed int min, signed int max, signed int *num_route, struct kmerSet_st *kset, unsigned long long int kmerDest, signed int overlap, unsigned long long int WORDF, signed int *traceCounter, signed int maxRoute, struct kmer_st **soFarNode, signed short int *multiOccu1, signed short int *multiOccu2, signed int *routeLens, char **foundRoutes, char *soFarSeq, signed long long int *soFarLinks, double *avgLinks)
{
  *traceCounter = *traceCounter + 1;
  _Bool tmp_if_expr_1;
  if(!(*traceCounter >= 5001))
  {
    if(!(max >= steps))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = *num_route >= maxRoute ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
    {
      unsigned long long int word;
      word=reverseComplement(currW, overlap);
      char isSmaller = (char)(currW < word);
      char ch;
      unsigned char links;
      signed int index;
      signed int i;
      if(!(isSmaller == 0))
        word = currW;

      struct kmer_st *node;
      char found;
      signed int return_value_search_kmerset_2;
      return_value_search_kmerset_2=search_kmerset(kset, word, &node);
      found = (char)return_value_search_kmerset_2;
      if(found == 0)
      {
        unsigned long long int return_value_reverseComplement_3;
        return_value_reverseComplement_3=reverseComplement(word, overlap);
        printf("Trace: can't find kmer %llx (rc %llx, input %llx) at step %d\n", word, return_value_reverseComplement_3, currW, steps);
        goto __CPROVER_DUMP_L41;
      }

      if(!(soFarNode == ((struct kmer_st **)NULL)))
        soFarNode[(signed long int)steps] = node;

      if(steps >= 1 && !(soFarSeq == ((char *)NULL)))
        soFarSeq[(signed long int)(steps - 1)] = (char)(currW & (unsigned long int)0x03);

      signed int linkCounter;
      if(!(soFarLinks == ((signed long long int *)NULL)))
        linkCounter = (signed int)*soFarLinks;

      if(currW == kmerDest && steps >= min)
      {
        index = *num_route;
        if(steps >= 1 && !(avgLinks == ((double *)NULL)))
          avgLinks[(signed long int)index] = (double)linkCounter / (double)steps;

        else
          if(!(avgLinks == ((double *)NULL)))
            avgLinks[(signed long int)index] = (double)0;

        if(!(multiOccu1 == ((signed short int *)NULL)) && !(multiOccu2 == ((signed short int *)NULL)))
        {
          i = 0;
          for( ; !(i >= 1 + steps); i = i + 1)
            soFarNode[(signed long int)i]->deleted = (unsigned int)0;
          signed int rightMost = 0;
          char MULTI = (char)0;
          i = 0;
          for( ; !(i >= 1 + steps); i = i + 1)
          {
            if(!(soFarNode[(signed long int)i]->deleted == 0u))
            {
              rightMost = rightMost < i - 1 ? i - 1 : rightMost;
              MULTI = (char)1;
            }

            soFarNode[(signed long int)i]->deleted = (unsigned int)1;
          }
          if(MULTI == 0)
          {
            multiOccu2[(signed long int)index] = (signed short int)-1;
            multiOccu1[(signed long int)index] = multiOccu2[(signed long int)index];
          }

          else
          {
            multiOccu2[(signed long int)index] = (signed short int)((steps - 2) - rightMost < 0 ? 0 : (steps - 2) - rightMost);
            i = 0;
            for( ; !(i >= 1 + steps); i = i + 1)
              soFarNode[(signed long int)i]->deleted = (unsigned int)0;
            signed int leftMost = steps - 2;
            i = steps;
            for( ; i >= 0; i = i - 1)
            {
              if(!(soFarNode[(signed long int)i]->deleted == 0u))
                leftMost = leftMost > i - 1 ? i - 1 : leftMost;

              soFarNode[(signed long int)i]->deleted = (unsigned int)1;
            }
            multiOccu1[(signed long int)index] = (signed short int)(leftMost < 0 ? 0 : leftMost);
          }
        }

        if(!(routeLens == ((signed int *)NULL)))
          routeLens[(signed long int)index] = steps;

        if(!(soFarSeq == ((char *)NULL)))
        {
          char *array = foundRoutes[(signed long int)index];
          i = 0;
          for( ; !(i >= steps); i = i + 1)
            array[(signed long int)i] = soFarSeq[(signed long int)i];
          if(!(i >= max))
            array[(signed long int)i] = (char)4;

        }

        index = index + 1;
        *num_route = index;
      }

      steps = steps + 1;
      if(!(isSmaller == 0))
      {
        signed int trace4Repeat__1__9__array[4l] = { 0, 1, 2, 3 };
        i = 4;
        for( ; i >= 1; i = i - 1)
        {
          signed int return_value_nPick1_4;
          return_value_nPick1_4=nPick1(trace4Repeat__1__9__array, i);
          ch = (char)return_value_nPick1_4;
          links = (unsigned char)((unsigned int)((signed int)node->r_links >> (signed int)ch * 6) & 0x3FU);
          if(!(links == 0))
          {
            if(!(soFarLinks == ((signed long long int *)NULL)))
              *soFarLinks = (signed long long int)(linkCounter + (signed int)links);

            word=nextKmerLocal(currW, ch, WORDF);
            trace4Repeat(word, steps, min, max, num_route, kset, kmerDest, overlap, WORDF, traceCounter, maxRoute, soFarNode, multiOccu1, multiOccu2, routeLens, foundRoutes, soFarSeq, soFarLinks, avgLinks);
          }

        }
      }

      else
      {
        signed int trace4Repeat__1__10__array[4l] = { 0, 1, 2, 3 };
        i = 4;
        for( ; i >= 1; i = i - 1)
        {
          signed int return_value_nPick1_5;
          return_value_nPick1_5=nPick1(trace4Repeat__1__10__array, i);
          ch = (char)return_value_nPick1_5;
          links = (unsigned char)(node->l_links >> (signed int)ch * 6 & 0x3FU);
          if(!(links == 0))
          {
            if(!(soFarLinks == ((signed long long int *)NULL)))
              *soFarLinks = (signed long long int)(linkCounter + (signed int)links);

            word=nextKmerLocal(currW, (char)((signed int)ch ^ 0x02), WORDF);
            trace4Repeat(word, steps, min, max, num_route, kset, kmerDest, overlap, WORDF, traceCounter, maxRoute, soFarNode, multiOccu1, multiOccu2, routeLens, foundRoutes, soFarSeq, soFarLinks, avgLinks);
          }

        }
      }
    }

  }


__CPROVER_DUMP_L41:
  ;
}

// traceAlongArc
// file inc/extfunc.h line 136
extern void traceAlongArc(unsigned int destE, unsigned int currE, signed int max_steps, signed int min, signed int max, signed int index, signed int len, signed int *num_route)
{
  num_trace = num_trace + 1;
  _Bool tmp_if_expr_1;
  if(!(trace_limit >= num_trace))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = *num_route >= max_n_routes ? (_Bool)1 : (_Bool)0;
  signed int tmp_post_2;
  if(!tmp_if_expr_1)
  {
    unsigned int *array;
    unsigned int out_ed;
    unsigned int vt;
    signed int num;
    signed int i;
    signed int pos;
    signed int length;
    struct prearc *parc;
    pos = index;
    if(max >= len && max_steps >= pos)
    {
      if(pos == 0 && currE == destE)
        printf("traceAlongArc: start and destination are the same\n");

      else
      {
        if(pos >= 1)
          so_far[(signed long int)(pos - 1)] = currE;

        if(currE == destE && len >= min)
        {
          num = *num_route;
          array = found_routes[(signed long int)num];
          i = 0;
          for( ; !(i >= pos); i = i + 1)
            array[(signed long int)i] = so_far[(signed long int)i];
          if(!(pos >= max_steps))
            array[(signed long int)pos] = (unsigned int)0;

          num = num + 1;
          *num_route = num;
        }

        if(!(pos == max_steps) && !(len == max))
        {
          tmp_post_2 = pos;
          pos = pos + 1;
          if(tmp_post_2 >= 1)
            length = (signed int)((unsigned int)len + (contig_array + (signed long int)currE)->length);

          else
            length = len;
          vt = (contig_array + (signed long int)currE)->to_vt;
          parc = (contig_array + (signed long int)currE)->arcs;
          for( ; !(parc == ((struct prearc *)NULL)); parc = parc->next)
          {
            out_ed = parc->to_ed;
            traceAlongArc(destE, out_ed, max_steps, min, max, pos, length, num_route);
          }
        }

      }
    }

  }

}

// traceAlongConnect
// file searchPath.c line 96
void traceAlongConnect(unsigned int destE, struct connection *currCNT, signed int max_steps, signed int min, signed int max, signed int index, signed int len, signed int *num_route)
{
  num_trace = num_trace + 1;
  _Bool tmp_if_expr_1;
  if(!(trace_limit >= num_trace))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = *num_route >= max_n_routes ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(!tmp_if_expr_1)
  {
    unsigned int *array;
    unsigned int currE;
    signed int num;
    signed int i;
    signed int length;
    struct connection *ite_cnt;
    currE = currCNT->contigID;
    length = len + currCNT->gapLen;
    length = length + (signed int)(contig_array + (signed long int)currE)->length;
    if(max >= length && max_steps >= index)
    {
      if(index == 1 && currE == destE)
        printf("traceAlongConnect: start and destination are the same\n");

      else
      {
        so_far[(signed long int)(index - 1)] = currE;
        if(currE == destE && length >= min && max >= length)
        {
          num = *num_route;
          array = found_routes[(signed long int)num];
          i = 0;
          for( ; !(i >= index); i = i + 1)
            array[(signed long int)i] = so_far[(signed long int)i];
          if(!(index >= max_steps))
            array[(signed long int)index] = (unsigned int)0;

          num = num + 1;
          *num_route = num;
        }

        if(!(currCNT->nextInScaf == ((struct connection *)NULL)))
          traceAlongConnect(destE, currCNT->nextInScaf, max_steps, min, max, index + 1, length, num_route);

        else
        {
          ite_cnt = (contig_array + (signed long int)currE)->downwardConnect;
          while(!(ite_cnt == ((struct connection *)NULL)))
          {
            if(!(ite_cnt->mask == 0))
              tmp_if_expr_2 = (_Bool)1;

            else
              tmp_if_expr_2 = ite_cnt->deleted != 0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_2)
              ite_cnt = ite_cnt->next;

            else
            {
              traceAlongConnect(destE, ite_cnt, max_steps, min, max, index + 1, length, num_route);
              ite_cnt = ite_cnt->next;
            }
          }
        }
      }
    }

  }

}

// traceAlongDBgraph
// file localAsm.c line 402
static void traceAlongDBgraph(unsigned long long int currW, signed int steps, signed int min, signed int max, signed int *num_route, struct kmerSet_st *kset, unsigned long long int *kmerDest, signed int num, signed int overlap, unsigned long long int WORDF, char **foundRoutes, signed int *routeEndOnCtg2, signed int *routeLens, char *soFarSeq, signed int *traceCounter, signed int maxRoute, struct kmer_st **soFarNode, char *multiOccu, signed long long int *soFarLinks, double *avgLinks)
{
  *traceCounter = *traceCounter + 1;
  _Bool tmp_if_expr_1;
  if(!(*traceCounter >= 5001))
  {
    if(!(max >= steps))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = *num_route >= maxRoute ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_1)
    {
      unsigned long long int word;
      word=reverseComplement(currW, overlap);
      char isSmaller = (char)(currW < word);
      signed int i;
      char ch;
      unsigned char links;
      if(!(isSmaller == 0))
        word = currW;

      struct kmer_st *node;
      char found;
      signed int return_value_search_kmerset_2;
      return_value_search_kmerset_2=search_kmerset(kset, word, &node);
      found = (char)return_value_search_kmerset_2;
      if(found == 0)
      {
        unsigned long long int return_value_reverseComplement_3;
        return_value_reverseComplement_3=reverseComplement(word, overlap);
        printf("Trace: can't find kmer %llx (rc %llx, input %llx) at step %d\n", word, return_value_reverseComplement_3, currW, steps);
        goto __CPROVER_DUMP_L29;
      }

      if(!((signed int)node->twin >= 2))
      {
        if(!(soFarNode == ((struct kmer_st **)NULL)))
          soFarNode[(signed long int)steps] = node;

        if(steps >= 1)
          soFarSeq[(signed long int)(steps - 1)] = (char)(currW & (unsigned long int)0x03);

        signed int index;
        signed int end;
        signed int linkCounter = (signed int)*soFarLinks;
        if(steps >= min)
        {
          if((signed int)node->inEdge >= 2)
          {
            end=searchKmerOnCtg(currW, kmerDest, num);
            if(end >= 0)
            {
              index = *num_route;
              if(steps >= 1)
                avgLinks[(signed long int)index] = (double)linkCounter / (double)steps;

              else
                avgLinks[(signed long int)index] = (double)0;
              multiOccu[(signed long int)index] = (char)0;
              i = 0;
              for( ; !(i >= 1 + steps); i = i + 1)
                soFarNode[(signed long int)i]->deleted = (unsigned int)0;
              i = 0;
              for( ; !(i >= 1 + steps); i = i + 1)
              {
                if(!(soFarNode[(signed long int)i]->deleted == 0u))
                {
                  multiOccu[(signed long int)index] = (char)1;
                  break;
                }

                soFarNode[(signed long int)i]->deleted = (unsigned int)1;
              }
              routeEndOnCtg2[(signed long int)index] = end;
              routeLens[(signed long int)index] = steps;
              char *array = foundRoutes[(signed long int)index];
              i = 0;
              for( ; !(i >= steps); i = i + 1)
                array[(signed long int)i] = soFarSeq[(signed long int)i];
              if(!(i >= max))
                array[(signed long int)i] = (char)4;

              index = index + 1;
              *num_route = index;
              goto __CPROVER_DUMP_L29;
            }

          }

        }

        steps = steps + 1;
        if(!(isSmaller == 0))
        {
          signed int traceAlongDBgraph__1__9__array[4l] = { 0, 1, 2, 3 };
          i = 4;
          for( ; i >= 1; i = i - 1)
          {
            signed int return_value_nPick1_4;
            return_value_nPick1_4=nPick1(traceAlongDBgraph__1__9__array, i);
            ch = (char)return_value_nPick1_4;
            links = (unsigned char)((unsigned int)((signed int)node->r_links >> (signed int)ch * 6) & 0x3FU);
            if(!(links == 0))
            {
              *soFarLinks = (signed long long int)(linkCounter + (signed int)links);
              word=nextKmerLocal(currW, ch, WORDF);
              traceAlongDBgraph(word, steps, min, max, num_route, kset, kmerDest, num, overlap, WORDF, foundRoutes, routeEndOnCtg2, routeLens, soFarSeq, traceCounter, maxRoute, soFarNode, multiOccu, soFarLinks, avgLinks);
            }

          }
        }

        else
        {
          signed int traceAlongDBgraph__1__10__array[4l] = { 0, 1, 2, 3 };
          i = 4;
          for( ; i >= 1; i = i - 1)
          {
            signed int return_value_nPick1_5;
            return_value_nPick1_5=nPick1(traceAlongDBgraph__1__10__array, i);
            ch = (char)return_value_nPick1_5;
            links = (unsigned char)(node->l_links >> (signed int)ch * 6 & 0x3FU);
            if(!(links == 0))
            {
              *soFarLinks = (signed long long int)(linkCounter + (signed int)links);
              word=nextKmerLocal(currW, (char)((signed int)ch ^ 0x02), WORDF);
              traceAlongDBgraph(word, steps, min, max, num_route, kset, kmerDest, num, overlap, WORDF, foundRoutes, routeEndOnCtg2, routeLens, soFarSeq, traceCounter, maxRoute, soFarNode, multiOccu, soFarLinks, avgLinks);
            }

          }
        }
      }

    }

  }


__CPROVER_DUMP_L29:
  ;
}

// traceAlongMaskedCnt
// file inc/extfunc.h line 159
extern void traceAlongMaskedCnt(unsigned int destE, unsigned int currE, signed int max_steps, signed int min, signed int max, signed int index, signed int len, signed int *num_route)
{
  num_trace = num_trace + 1;
  _Bool tmp_if_expr_1;
  if(!(trace_limit >= num_trace))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = *num_route >= max_n_routes ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(!tmp_if_expr_1)
  {
    unsigned int *array;
    signed int num;
    signed int i;
    signed int length;
    struct connection *ite_cnt;
    if(index >= 1)
      length = (signed int)((unsigned int)len + (contig_array + (signed long int)currE)->length);

    else
      length = 0;
    if(max >= length && max_steps >= index)
    {
      if(index >= 1)
        so_far[(signed long int)(index - 1)] = currE;

      if(index == 0 && currE == destE)
        printf("traceAlongMaskedCnt: start and destination are the same\n");

      else
      {
        if(currE == destE && length >= min && max >= length)
        {
          num = *num_route;
          array = found_routes[(signed long int)num];
          i = 0;
          for( ; !(i >= index); i = i + 1)
            array[(signed long int)i] = so_far[(signed long int)i];
          if(!(index >= max_steps))
            array[(signed long int)index] = (unsigned int)0;

          num = num + 1;
          *num_route = num;
        }

        ite_cnt = (contig_array + (signed long int)currE)->downwardConnect;
        while(!(ite_cnt == ((struct connection *)NULL)))
        {
          if(ite_cnt->mask == 0)
            tmp_if_expr_2 = (_Bool)1;

          else
            tmp_if_expr_2 = ite_cnt->deleted != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_2)
            ite_cnt = ite_cnt->next;

          else
          {
            traceAlongMaskedCnt(destE, ite_cnt->contigID, max_steps, min, max, index + 1, length + ite_cnt->gapLen, num_route);
            ite_cnt = ite_cnt->next;
          }
        }
      }
    }

  }

}

// trans_seq
// file seq.c line 178
signed long long int trans_seq(char *seq, signed int len)
{
  signed int i;
  signed long long int res = (signed long long int)0;
  i = 0;
  for( ; !(i >= len); i = i + 1)
    res = res * (signed long int)4 + (signed long int)seq[(signed long int)i];
  return res;
}

// unBindLink
// file orderContig.c line 1847
static void unBindLink(unsigned int CB, unsigned int CC)
{
  struct connection *cnt1;
  cnt1=getCntBetween(CB, CC);
  if(!(cnt1 == ((struct connection *)NULL)))
  {
    if(!(cnt1->singleInScaf == 0))
      cnt1->singleInScaf = (unsigned char)0;

    struct connection *cnt2;
    unsigned int return_value_getTwinCtg_1;
    return_value_getTwinCtg_1=getTwinCtg(CC);
    unsigned int return_value_getTwinCtg_2;
    return_value_getTwinCtg_2=getTwinCtg(CB);
    cnt2=getCntBetween(return_value_getTwinCtg_1, return_value_getTwinCtg_2);
    if(!(cnt2 == ((struct connection *)NULL)))
    {
      if(!(cnt2->singleInScaf == 0))
        cnt2->singleInScaf = (unsigned char)0;

      if(!(cnt1->nextInScaf == ((struct connection *)NULL)))
      {
        unsigned int CD = cnt1->nextInScaf->contigID;
        cnt1->nextInScaf->prevInScaf = (unsigned char)0;
        cnt1->nextInScaf = (struct connection *)(void *)0;
        struct connection *cnt3;
        unsigned int return_value_getTwinCtg_3;
        return_value_getTwinCtg_3=getTwinCtg(CD);
        unsigned int return_value_getTwinCtg_4;
        return_value_getTwinCtg_4=getTwinCtg(CC);
        cnt3=getCntBetween(return_value_getTwinCtg_3, return_value_getTwinCtg_4);
        if(!(cnt3 == ((struct connection *)NULL)))
          cnt3->nextInScaf = (struct connection *)(void *)0;

        cnt2->prevInScaf = (unsigned char)0;
      }

      if(!(cnt2->nextInScaf == ((struct connection *)NULL)))
      {
        unsigned int bal_CA = cnt2->nextInScaf->contigID;
        cnt2->nextInScaf->prevInScaf = (unsigned char)0;
        cnt2->nextInScaf = (struct connection *)(void *)0;
        struct connection *cnt4;
        unsigned int return_value_getTwinCtg_5;
        return_value_getTwinCtg_5=getTwinCtg(bal_CA);
        cnt4=getCntBetween(return_value_getTwinCtg_5, CB);
        if(!(cnt4 == ((struct connection *)NULL)))
          cnt4->nextInScaf = (struct connection *)(void *)0;

        cnt1->prevInScaf = (unsigned char)0;
      }

    }

  }

}

// uniqueLenSearch
// file loadGraph.c line 72
extern signed int uniqueLenSearch(unsigned int *len_array, unsigned int *flag_array, signed int num, unsigned int target)
{
  signed int mid;
  signed int low;
  signed int high;
  low = 1;
  high = num;
  while(high >= low)
  {
    mid = (low + high) / 2;
    if(len_array[(signed long int)mid] == target)
      break;

    else
      if(!(len_array[(signed long int)mid] >= target))
        low = mid + 1;

      else
        high = mid - 1;
  }
  unsigned int tmp_post_1;
  if(!(high >= low))
    return -1;

  else
  {
    tmp_post_1 = flag_array[(signed long int)mid];
    flag_array[(signed long int)mid] = flag_array[(signed long int)mid] + 1u;
    return (signed int)tmp_post_1;
  }
}

// unlink2next
// file kmer.c line 49
extern void unlink2next(struct node *node, char ch)
{
  node->links = (unsigned char)((signed int)node->links & ~((signed int)filter_array[(signed long int)(signed int)ch]));
}

// unlink2prev
// file kmer.c line 73
extern void unlink2prev(struct node *node, char ch)
{
  node->links = (unsigned char)((signed int)node->links & ~((signed int)filter_array[(signed long int)((signed int)ch + 4)]));
}

// updateNodeStatus
// file bubble.c line 280
static void updateNodeStatus()
{
  unsigned int i;
  unsigned int node;
  i = (unsigned int)0;
  for( ; !(i >= expCounter); i = i + 1u)
  {
    node = expanded[(signed long int)i];
    (edge_array + (signed long int)node)->multi = (unsigned short int)1;
    unsigned int return_value_getTwinEdge_1;
    return_value_getTwinEdge_1=getTwinEdge(node);
    (edge_array + (signed long int)return_value_getTwinEdge_1)->multi = (unsigned short int)1;
  }
}

// update_kmer
// file newhash.c line 33
static inline void update_kmer(struct kmer_st *mer, unsigned char left, unsigned char right)
{
  unsigned int cov;
  if(!((signed int)left >= 4))
  {
    cov = mer->l_links >> (signed int)left * 6 & 0x3FU;
    if(!(cov >= 63u))
      mer->l_links = mer->l_links & ~(0x3FU << (signed int)left * 6) | (cov + (unsigned int)1 & 0x3FU) << (signed int)left * 6;

  }

  if(!((signed int)right >= 4))
  {
    cov = (unsigned int)((signed int)mer->r_links >> (signed int)right * 6) & 0x3FU;
    if(!(cov >= 63u))
      mer->r_links = (unsigned int)mer->r_links & ~(0x3FU << (signed int)right * 6) | (cov + (unsigned int)1 & 0x3FU) << (signed int)right * 6;

  }

}

// validConnect
// file orderContig.c line 555
static signed int validConnect(unsigned int ctg, struct connection *preCNT)
{
  if(!(preCNT == ((struct connection *)NULL)))
  {
    if(preCNT->nextInScaf == ((struct connection *)NULL))
      goto __CPROVER_DUMP_L1;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    struct connection *cn_temp;
    signed int count = 0;
    if((contig_array + (signed long int)ctg)->downwardConnect == ((struct connection *)NULL))
      return count;

    else
    {
      cn_temp = (contig_array + (signed long int)ctg)->downwardConnect;
      for( ; !(cn_temp == ((struct connection *)NULL)); cn_temp = cn_temp->next)
        if(cn_temp->deleted == 0)
        {
          if(cn_temp->mask == 0)
            count = count + 1;

        }

      return count;
    }
  }
}

// workOnDheap
// file orderContig.c line 3086
static char workOnDheap(struct fibheap *dheap, struct fibheap *uheap, char *Dwait, char *Uwait, signed int *DmaxDis, signed int *UmaxDis, signed int maxNodes)
{
  unsigned int return_value_removeNextNodeFromHeap_1;
  struct connection *tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  unsigned int return_value_getTwinCtg_4;
  struct connection *tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  if(!(*Dwait == 0))
    return (char)1;

  else
  {
    unsigned int currNode;
    unsigned int twin;
    unsigned int tempNode;
    struct ctg4heap *ctgInHeap;
    signed int indexInArray;
    struct connection *us_cnt;
    struct connection *ds_cnt;
    signed int dis0;
    signed int dis;
    char ret;
    char isEmpty;
    do
    {
      return_value_removeNextNodeFromHeap_1=removeNextNodeFromHeap(dheap);
      indexInArray = (signed int)return_value_removeNextNodeFromHeap_1;
      if(indexInArray == 0)
        break;

      ctgInHeap = &ctg4heapArray[(signed long int)indexInArray];
      currNode = ctgInHeap->ctgID;
      dis0 = ctgInHeap->dis;
      isEmpty=IsHeapEmpty(dheap);
      twin=getTwinCtg(currNode);
      if(!(ctgInHeap->us_shut4dheap == 0))
        tmp_if_expr_2 = (struct connection *)(void *)0;

      else
        tmp_if_expr_2 = (contig_array + (signed long int)twin)->downwardConnect;
      us_cnt = tmp_if_expr_2;
      while(!(us_cnt == ((struct connection *)NULL)))
      {
        if(!(us_cnt->deleted == 0))
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = us_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_5 = (_Bool)1;

        else
        {
          return_value_getTwinCtg_4=getTwinCtg(us_cnt->contigID);
          tmp_if_expr_5 = (contig_array + (signed long int)return_value_getTwinCtg_4)->inSubGraph != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_5)
          us_cnt = us_cnt->next;

        else
        {
          tempNode=getTwinCtg(us_cnt->contigID);
          if(!((contig_array + (signed long int)tempNode)->inSubGraph == 0))
            us_cnt = us_cnt->next;

          else
          {
            dis = (dis0 - us_cnt->gapLen) - (signed int)(contig_array + (signed long int)twin)->length;
            ret=dispatch1node(dis, tempNode, maxNodes, dheap, uheap, DmaxDis, UmaxDis);
            if((signed int)ret == 0)
              return (char)0;

            else
              if(!((signed int)ret >= 0))
                *Uwait = (char)0;

            us_cnt = us_cnt->next;
          }
        }
      }
      if(nodeCounter_link1 >= 2 && !(isEmpty == 0))
      {
        *Dwait=canDheapWait(currNode, dis0, *DmaxDis);
        if(*Dwait == 0)
          goto __CPROVER_DUMP_L17;

        isEmpty=IsHeapEmpty(dheap);
        insertNodeIntoHeap(dheap, (signed long long int)dis0, (unsigned int)indexInArray);
        ctg4heapArray[(signed long int)indexInArray].us_shut4dheap = (unsigned char)1;
        if(!(isEmpty == 0))
          return (char)1;

      }

      else
      {

      __CPROVER_DUMP_L17:
        ;
        if(!(ctgInHeap->ds_shut4dheap == 0))
          tmp_if_expr_6 = (struct connection *)(void *)0;

        else
          tmp_if_expr_6 = (contig_array + (signed long int)currNode)->downwardConnect;
        ds_cnt = tmp_if_expr_6;
        while(!(ds_cnt == ((struct connection *)NULL)))
        {
          if(!(ds_cnt->deleted == 0))
            tmp_if_expr_7 = (_Bool)1;

          else
            tmp_if_expr_7 = ds_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_7)
            tmp_if_expr_8 = (_Bool)1;

          else
            tmp_if_expr_8 = (contig_array + (signed long int)ds_cnt->contigID)->inSubGraph != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_8)
            ds_cnt = ds_cnt->next;

          else
          {
            tempNode = ds_cnt->contigID;
            dis = dis0 + ds_cnt->gapLen + (signed int)(contig_array + (signed long int)tempNode)->length;
            ret=dispatch1node(dis, tempNode, maxNodes, dheap, uheap, DmaxDis, UmaxDis);
            if((signed int)ret == 0)
              return (char)0;

            else
              if(!((signed int)ret >= 0))
                *Uwait = (char)0;

          }
        }
      }
    }
    while((_Bool)1);
    *Dwait = (char)1;
    return (char)1;
  }
}

// workOnUheap
// file orderContig.c line 3188
static char workOnUheap(struct fibheap *dheap, struct fibheap *uheap, char *Dwait, char *Uwait, signed int *DmaxDis, signed int *UmaxDis, signed int maxNodes)
{
  unsigned int return_value_removeNextNodeFromHeap_1;
  struct connection *tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  struct connection *tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_8;
  unsigned int return_value_getTwinCtg_7;
  if(!(*Uwait == 0))
    return (char)1;

  else
  {
    unsigned int currNode;
    unsigned int twin;
    unsigned int tempNode;
    struct ctg4heap *ctgInHeap;
    signed int indexInArray;
    struct connection *us_cnt;
    struct connection *ds_cnt;
    signed int dis0;
    signed int dis;
    char ret;
    char isEmpty;
    do
    {
      return_value_removeNextNodeFromHeap_1=removeNextNodeFromHeap(uheap);
      indexInArray = (signed int)return_value_removeNextNodeFromHeap_1;
      if(indexInArray == 0)
        break;

      ctgInHeap = &ctg4heapArray[(signed long int)indexInArray];
      currNode = ctgInHeap->ctgID;
      dis0 = ctgInHeap->dis;
      isEmpty=IsHeapEmpty(uheap);
      if(!(ctgInHeap->ds_shut4uheap == 0))
        tmp_if_expr_2 = (struct connection *)(void *)0;

      else
        tmp_if_expr_2 = (contig_array + (signed long int)currNode)->downwardConnect;
      ds_cnt = tmp_if_expr_2;
      while(!(ds_cnt == ((struct connection *)NULL)))
      {
        if(!(ds_cnt->deleted == 0))
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = ds_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = (contig_array + (signed long int)ds_cnt->contigID)->inSubGraph != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
          ds_cnt = ds_cnt->next;

        else
        {
          tempNode = ds_cnt->contigID;
          dis = (signed int)((unsigned int)(dis0 + ds_cnt->gapLen) + (contig_array + (signed long int)tempNode)->length);
          ret=dispatch1node(dis, tempNode, maxNodes, dheap, uheap, DmaxDis, UmaxDis);
          if((signed int)ret == 0)
            return (char)0;

          else
            if((signed int)ret >= 1)
              *Dwait = (char)0;

        }
      }
      if(nodeCounter_link1 >= 2 && !(isEmpty == 0))
      {
        *Uwait=canUheapWait(currNode, dis0, *UmaxDis);
        if(*Uwait == 0)
          goto __CPROVER_DUMP_L15;

        isEmpty=IsHeapEmpty(uheap);
        insertNodeIntoHeap(uheap, (signed long long int)dis0, (unsigned int)indexInArray);
        ctg4heapArray[(signed long int)indexInArray].ds_shut4uheap = (unsigned char)1;
        if(!(isEmpty == 0))
          return (char)1;

      }

      else
      {

      __CPROVER_DUMP_L15:
        ;
        twin=getTwinCtg(currNode);
        if(!(ctgInHeap->us_shut4uheap == 0))
          tmp_if_expr_5 = (struct connection *)(void *)0;

        else
          tmp_if_expr_5 = (contig_array + (signed long int)twin)->downwardConnect;
        us_cnt = tmp_if_expr_5;
        while(!(us_cnt == ((struct connection *)NULL)))
        {
          if(!(us_cnt->deleted == 0))
            tmp_if_expr_6 = (_Bool)1;

          else
            tmp_if_expr_6 = us_cnt->mask != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_6)
            tmp_if_expr_8 = (_Bool)1;

          else
          {
            return_value_getTwinCtg_7=getTwinCtg(us_cnt->contigID);
            tmp_if_expr_8 = (contig_array + (signed long int)return_value_getTwinCtg_7)->inSubGraph != 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_8)
            us_cnt = us_cnt->next;

          else
          {
            tempNode=getTwinCtg(us_cnt->contigID);
            if(!((contig_array + (signed long int)tempNode)->inSubGraph == 0))
              us_cnt = us_cnt->next;

            else
            {
              dis = (signed int)((unsigned int)(dis0 - us_cnt->gapLen) - (contig_array + (signed long int)twin)->length);
              ret=dispatch1node(dis, tempNode, maxNodes, dheap, uheap, DmaxDis, UmaxDis);
              if((signed int)ret == 0)
                return (char)0;

              else
                if((signed int)ret >= 1)
                  *Dwait = (char)1;

              us_cnt = us_cnt->next;
            }
          }
        }
      }
    }
    while((_Bool)1);
    *Uwait = (char)1;
    return (char)1;
  }
}

// writeChar2tightString
// file inc/extfunc.h line 130
extern void writeChar2tightString(char nt, char *tightSeq, signed int pos)
{
  char *byte = tightSeq + (signed long int)(pos / 4);
  switch(pos % 4)
  {
    case 0:
    {
      *byte = *byte & (char)63;
      *byte = *byte + (char)((signed int)nt << 6);
      break;
    }
    case 1:
    {
      *byte = *byte & (char)207;
      *byte = *byte + (char)((signed int)nt << 4);
      break;
    }
    case 2:
    {
      *byte = *byte & (char)243;
      *byte = *byte + (char)((signed int)nt << 2);
      break;
    }
    case 3:
    {
      *byte = *byte & (char)252;
      *byte = *byte + nt;
      break;
    }
    default:
      ;
  }
}

