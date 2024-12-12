// #anon_enum_VlHomogeneousKernelIntersection=0_VlHomogeneousKernelChi2=1_VlHomogeneousKernelJS=2
// file vl/homkermap.h line 22
enum anonymous_3 { VlHomogeneousKernelIntersection=0, VlHomogeneousKernelChi2=1, VlHomogeneousKernelJS=2 };

// #anon_enum_VlHomogeneousKernelMapWindowUniform=0_VlHomogeneousKernelMapWindowRectangular=1
// file vl/homkermap.h line 29
enum anonymous_4 { VlHomogeneousKernelMapWindowUniform=0, VlHomogeneousKernelMapWindowRectangular=1 };

// #anon_enum_VlSvmLossHinge=0_VlSvmLossHinge2=1_VlSvmLossL1=2_VlSvmLossL2=3_VlSvmLossLogistic=4
// file vl/svm.h line 53
enum anonymous_9 { VlSvmLossHinge=0, VlSvmLossHinge2=1, VlSvmLossL1=2, VlSvmLossL2=3, VlSvmLossLogistic=4 };

// #anon_enum_VlSvmSolverNone=0_VlSvmSolverSgd=1_VlSvmSolverSdca=2
// file vl/svm.h line 38
enum anonymous_6 { VlSvmSolverNone=0, VlSvmSolverSgd=1, VlSvmSolverSdca=2 };

// #anon_enum_VlSvmStatusTraining=1_VlSvmStatusConverged=2_VlSvmStatusMaxNumIterationsReached=3
// file vl/svm.h line 63
enum anonymous_7 { VlSvmStatusTraining=1, VlSvmStatusConverged=2, VlSvmStatusMaxNumIterationsReached=3 };

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_2;

// tag-#anon#ST[S64'w'||S64'j'|]
// file vl/ikmeans_init.tc line 17
struct anonymous_5;

// tag-#anon#UN[ARR32{S8}_S8_'string'||ARR8{U32}_U32_'words'|]
// file vl/host.h line 559
union anonymous_11;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_0;

// tag-#anon#cUN[U32'raw'||F32'value'|]
// file vl/mathop.h line 55
union anonymous_8;

// tag-#anon#cUN[U64'raw'||F64'value'|]
// file vl/mathop.h line 65
union anonymous;

// tag-VlHogVariant_
// file vl/hog.h line 19
enum VlHogVariant_ { VlHogVariantDalalTriggs=0, VlHogVariantUoctti=1 };

// tag-VlHog_
// file vl/hog.h line 23
struct VlHog_;

// tag-VlLbp_
// file vl/lbp.h line 28
struct VlLbp_;

// tag-VlSvmDataset_
// file vl/svmdataset.h line 36
struct VlSvmDataset_;

// tag-VlSvmStatistics_
// file vl/svm.h line 76
struct VlSvmStatistics_;

// tag-VlSvm_
// file vl/svmdataset.h line 22
struct VlSvm_;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_VlAIB
// file vl/aib.h line 38
struct _VlAIB;

// tag-_VlArray
// file vl/array.h line 23
struct _VlArray;

// tag-_VlCovDet
// file vl/covdet.h line 183
struct _VlCovDet;

// tag-_VlCovDetExtremum2
// file vl/covdet.c line 997
struct _VlCovDetExtremum2;

// tag-_VlCovDetExtremum3
// file vl/covdet.c line 1007
struct _VlCovDetExtremum3;

// tag-_VlCovDetFeature
// file vl/covdet.h line 137
struct _VlCovDetFeature;

// tag-_VlCovDetFeatureLaplacianScale
// file vl/covdet.h line 154
struct _VlCovDetFeatureLaplacianScale;

// tag-_VlCovDetFeatureOrientation
// file vl/covdet.h line 147
struct _VlCovDetFeatureOrientation;

// tag-_VlCovDetMethod
// file vl/covdet.h line 161
enum _VlCovDetMethod { VL_COVDET_METHOD_DOG=1, VL_COVDET_METHOD_HESSIAN=2, VL_COVDET_METHOD_HESSIAN_LAPLACE=3, VL_COVDET_METHOD_HARRIS_LAPLACE=4, VL_COVDET_METHOD_MULTISCALE_HESSIAN=5, VL_COVDET_METHOD_MULTISCALE_HARRIS=6, VL_COVDET_METHOD_NUM=7 };

// tag-_VlEnumerator
// file vl/stringop.h line 46
struct _VlEnumerator;

// tag-_VlFrameOrientedEllipse
// file vl/covdet.h line 78
struct _VlFrameOrientedEllipse;

// tag-_VlGMM
// file vl/gmm.h line 30
struct _VlGMM;

// tag-_VlGMMInitialization
// file vl/gmm.h line 21
enum _VlGMMInitialization { VlGMMKMeans=0, VlGMMRand=1, VlGMMCustom=2 };

// tag-_VlHIKMNode
// file vl/hikmeans.h line 28
struct _VlHIKMNode;

// tag-_VlHIKMTree
// file vl/hikmeans.h line 35
struct _VlHIKMTree;

// tag-_VlHomogeneousKernelMap
// file vl/homkermap.h line 35
struct _VlHomogeneousKernelMap;

// tag-_VlIKMFilt
// file vl/ikmeans.h line 44
struct _VlIKMFilt;

// tag-_VlKDForest
// file vl/kdtree.h line 84
struct _VlKDForest;

// tag-_VlKDForestNeighbor
// file vl/kdtree.h line 60
struct _VlKDForestNeighbor;

// tag-_VlKDForestSearchState
// file vl/kdtree.h line 26
struct _VlKDForestSearchState;

// tag-_VlKDForestSearcher
// file vl/kdtree.h line 81
struct _VlKDForestSearcher;

// tag-_VlKDTree
// file vl/kdtree.h line 65
struct _VlKDTree;

// tag-_VlKDTreeDataIndexEntry
// file vl/kdtree.h line 25
struct _VlKDTreeDataIndexEntry;

// tag-_VlKDTreeNode
// file vl/kdtree.h line 23
struct _VlKDTreeNode;

// tag-_VlKDTreeSplitDimension
// file vl/kdtree.h line 24
struct _VlKDTreeSplitDimension;

// tag-_VlKDTreeThresholdingMethod
// file vl/kdtree.h line 53
enum _VlKDTreeThresholdingMethod { VL_KDTREE_MEDIAN=0, VL_KDTREE_MEAN=1 };

// tag-_VlKMeans
// file vl/kmeans.h line 45
struct _VlKMeans;

// tag-_VlKMeansAlgorithm
// file vl/kmeans.h line 28
enum _VlKMeansAlgorithm { VlKMeansLloyd=0, VlKMeansElkan=1, VlKMeansANN=2 };

// tag-_VlKMeansInitialization
// file vl/kmeans.h line 36
enum _VlKMeansInitialization { VlKMeansRandomSelection=0, VlKMeansPlusPlus=1 };

// tag-_VlKMeansSortWrapper
// file vl/kmeans.c line 485
struct _VlKMeansSortWrapper;

// tag-_VlLbpMappingType
// file vl/lbp.h line 22
enum _VlLbpMappingType { VlLbpUniform=0 };

// tag-_VlLiopDesc
// file vl/liop.h line 22
struct _VlLiopDesc;

// tag-_VlMserExtrReg
// file vl/mser.h line 184
struct _VlMserExtrReg;

// tag-_VlMserFilt
// file vl/mser.h line 39
struct _VlMserFilt;

// tag-_VlMserReg
// file vl/mser.h line 147
struct _VlMserReg;

// tag-_VlMserStats
// file vl/mser.h line 42
struct _VlMserStats;

// tag-_VlPgmImage
// file vl/pgm.h line 36
struct _VlPgmImage;

// tag-_VlQS
// file vl/quickshift.h line 33
struct _VlQS;

// tag-_VlRand
// file ./vl/random.h line 21
struct _VlRand;

// tag-_VlScaleSpace
// file vl/scalespace.h line 64
struct _VlScaleSpace;

// tag-_VlScaleSpaceGeometry
// file vl/scalespace.h line 31
struct _VlScaleSpaceGeometry;

// tag-_VlScaleSpaceOctaveGeometry
// file vl/scalespace.h line 53
struct _VlScaleSpaceOctaveGeometry;

// tag-_VlState
// file vl/generic.c line 818
struct _VlState;

// tag-_VlThreadState
// file vl/generic.c line 799
struct _VlThreadState;

// tag-_VlVectorComparisonType
// file vl/mathop.h line 628
enum _VlVectorComparisonType { VlDistanceL1=0, VlDistanceL2=1, VlDistanceChi2=2, VlDistanceHellinger=3, VlDistanceJS=4, VlDistanceMahalanobis=5, VlKernelL1=6, VlKernelL2=7, VlKernelChi2=8, VlKernelHellinger=9, VlKernelJS=10 };

// tag-_VlX86CpuInfo
// file vl/host.h line 557
struct _VlX86CpuInfo;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-option
// file vl/getopt_long.h line 26
struct option;

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

// __builtin_ceil
// file vl/mathop.h line 177 function vl_ceil_d
signed int __builtin_ceil(void);
// __builtin_lround
// file vl/mathop.h line 215 function vl_round_d
signed int __builtin_lround(void);
// __ctype_tolower_loc
// file /usr/include/ctype.h line 81
extern const signed int ** __ctype_tolower_loc(void);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __strcspn_c1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1(const char *__s, signed int __reject);
// __strcspn_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2(const char *__s, signed int __reject1, signed int __reject2);
// __strcspn_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3(const char *__s, signed int __reject1, signed int __reject2, signed int __reject3);
// _vl_covdet_check_frame_inside
// file vl/covdet.c line 3064
signed int _vl_covdet_check_frame_inside(struct _VlCovDet *self, struct _VlFrameOrientedEllipse frame, double margin);
// _vl_covdet_compare_orientations_descending
// file vl/covdet.c line 2667
static signed int _vl_covdet_compare_orientations_descending(const void *a_, const void *b_);
// _vl_cpuid
// file vl/host.c line 417
static inline void _vl_cpuid(signed int *info, signed int function);
// _vl_det_hessian_response
// file vl/covdet.c line 1746
static void _vl_det_hessian_response(float *hessian, const float *image, unsigned long long int width, unsigned long long int height, double step, double sigma);
// _vl_distance_chi2_d
// file vl/mathop.c line 323
extern double _vl_distance_chi2_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_distance_chi2_f
// file vl/mathop.c line 323
extern float _vl_distance_chi2_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_distance_hellinger_d
// file vl/mathop.c line 343
extern double _vl_distance_hellinger_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_distance_hellinger_f
// file vl/mathop.c line 343
extern float _vl_distance_hellinger_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_distance_js_d
// file vl/mathop.c line 361
extern double _vl_distance_js_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_distance_js_f
// file vl/mathop.c line 361
extern float _vl_distance_js_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_distance_l1_d
// file vl/mathop.c line 310
extern double _vl_distance_l1_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_distance_l1_f
// file vl/mathop.c line 310
extern float _vl_distance_l1_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_distance_l2_d
// file vl/mathop.c line 297
extern double _vl_distance_l2_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_distance_l2_f
// file vl/mathop.c line 297
extern float _vl_distance_l2_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_distance_mahalanobis_sq_d
// file vl/mathop.c line 458
extern double _vl_distance_mahalanobis_sq_d(unsigned long long int dimension, const double *X, const double *MU, const double *S);
// _vl_distance_mahalanobis_sq_f
// file vl/mathop.c line 458
extern float _vl_distance_mahalanobis_sq_f(unsigned long long int dimension, const float *X, const float *MU, const float *S);
// _vl_dog_response
// file vl/covdet.c line 1898
static void _vl_dog_response(float *dog, const float *level1, const float *level2, unsigned long long int width, unsigned long long int height);
// _vl_fisher_encode_d
// file vl/fisher.c line 364
static unsigned long long int _vl_fisher_encode_d(double *enc, const double *means, unsigned long long int dimension, unsigned long long int numClusters, const double *covariances, const double *priors, const double *data, unsigned long long int numData, signed int flags);
// _vl_fisher_encode_f
// file vl/fisher.c line 364
static unsigned long long int _vl_fisher_encode_f(float *enc, const float *means, unsigned long long int dimension, unsigned long long int numClusters, const float *covariances, const float *priors, const float *data, unsigned long long int numData, signed int flags);
// _vl_gmm_apply_bounds_d
// file vl/gmm.c line 1006
static void _vl_gmm_apply_bounds_d(struct _VlGMM *self);

//

// _vl_gmm_apply_bounds_f
// file vl/gmm.c line 1006
static void _vl_gmm_apply_bounds_f(struct _VlGMM *self);

//

// _vl_gmm_compute_init_sigma_d
// file vl/gmm.c line 1377
static void _vl_gmm_compute_init_sigma_d(struct _VlGMM *self, const double *data, double *initSigma, unsigned long long int dimension, unsigned long long int numData);
// _vl_gmm_compute_init_sigma_f
// file vl/gmm.c line 1377
static void _vl_gmm_compute_init_sigma_f(struct _VlGMM *self, const float *data, float *initSigma, unsigned long long int dimension, unsigned long long int numData);
// _vl_gmm_em_d
// file vl/gmm.c line 1221
static double _vl_gmm_em_d(struct _VlGMM *self, const double *data, unsigned long long int numData);

//


//


//


//


//


//

// _vl_gmm_em_f
// file vl/gmm.c line 1221
static double _vl_gmm_em_f(struct _VlGMM *self, const float *data, unsigned long long int numData);

//


//


//


//


//


//

// _vl_gmm_init_with_kmeans_d
// file vl/gmm.c line 1316
static void _vl_gmm_init_with_kmeans_d(struct _VlGMM *self, const double *data, unsigned long long int numData, struct _VlKMeans *kmeansInit);
// _vl_gmm_init_with_kmeans_f
// file vl/gmm.c line 1316
static void _vl_gmm_init_with_kmeans_f(struct _VlGMM *self, const float *data, unsigned long long int numData, struct _VlKMeans *kmeansInit);
// _vl_gmm_init_with_rand_data_d
// file vl/gmm.c line 1416
static void _vl_gmm_init_with_rand_data_d(struct _VlGMM *self, const double *data, unsigned long long int numData);
// _vl_gmm_init_with_rand_data_f
// file vl/gmm.c line 1416
static void _vl_gmm_init_with_rand_data_f(struct _VlGMM *self, const float *data, unsigned long long int numData);
// _vl_gmm_maximization_d
// file vl/gmm.c line 1037
static void _vl_gmm_maximization_d(struct _VlGMM *self, double *posteriors, double *priors, double *covariances, double *means, const double *data, unsigned long long int numData);

//


//

// _vl_gmm_maximization_f
// file vl/gmm.c line 1037
static void _vl_gmm_maximization_f(struct _VlGMM *self, float *posteriors, float *priors, float *covariances, float *means, const float *data, unsigned long long int numData);

//


//

// _vl_gmm_prepare_for_data
// file vl/gmm.c line 337
static void _vl_gmm_prepare_for_data(struct _VlGMM *self, unsigned long long int numData);
// _vl_gmm_restart_empty_modes_d
// file vl/gmm.c line 815
static unsigned long long int _vl_gmm_restart_empty_modes_d(struct _VlGMM *self, const double *data);

//


//


//


//


//

// _vl_gmm_restart_empty_modes_f
// file vl/gmm.c line 815
static unsigned long long int _vl_gmm_restart_empty_modes_f(struct _VlGMM *self, const float *data);

//


//


//


//


//

// _vl_harris_response
// file vl/covdet.c line 1837
static void _vl_harris_response(float *harris, const float *image, unsigned long long int width, unsigned long long int height, double step, double sigma, double sigmaI, double alpha);
// _vl_kernel_chi2_d
// file vl/mathop.c line 406
extern double _vl_kernel_chi2_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_kernel_chi2_f
// file vl/mathop.c line 406
extern float _vl_kernel_chi2_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_kernel_hellinger_d
// file vl/mathop.c line 425
extern double _vl_kernel_hellinger_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_kernel_hellinger_f
// file vl/mathop.c line 425
extern float _vl_kernel_hellinger_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_kernel_js_d
// file vl/mathop.c line 443
extern double _vl_kernel_js_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_kernel_js_f
// file vl/mathop.c line 443
extern float _vl_kernel_js_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_kernel_l1_d
// file vl/mathop.c line 390
extern double _vl_kernel_l1_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_kernel_l1_f
// file vl/mathop.c line 390
extern float _vl_kernel_l1_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_kernel_l2_d
// file vl/mathop.c line 376
extern double _vl_kernel_l2_d(unsigned long long int dimension, const double *X, const double *Y);
// _vl_kernel_l2_f
// file vl/mathop.c line 376
extern float _vl_kernel_l2_f(unsigned long long int dimension, const float *X, const float *Y);
// _vl_kmeans_d_qsort_cmp
// file vl/kmeans.c line 782
static inline double _vl_kmeans_d_qsort_cmp(struct _VlKMeansSortWrapper *array, unsigned long long int indexA, unsigned long long int indexB);
// _vl_kmeans_d_qsort_sort
// file vl/qsort-def.h line 183
static inline void _vl_kmeans_d_qsort_sort(struct _VlKMeansSortWrapper *array, unsigned long long int size);
// _vl_kmeans_d_qsort_sort_recursive
// file vl/qsort-def.h line 127
static inline void _vl_kmeans_d_qsort_sort_recursive(struct _VlKMeansSortWrapper *array, unsigned long long int begin, unsigned long long int end);
// _vl_kmeans_d_qsort_swap
// file vl/kmeans.c line 792
static inline void _vl_kmeans_d_qsort_swap(struct _VlKMeansSortWrapper *array, unsigned long long int indexA, unsigned long long int indexB);
// _vl_kmeans_f_qsort_cmp
// file vl/kmeans.c line 782
static inline float _vl_kmeans_f_qsort_cmp(struct _VlKMeansSortWrapper *array, unsigned long long int indexA, unsigned long long int indexB);
// _vl_kmeans_f_qsort_sort
// file vl/qsort-def.h line 183
static inline void _vl_kmeans_f_qsort_sort(struct _VlKMeansSortWrapper *array, unsigned long long int size);
// _vl_kmeans_f_qsort_sort_recursive
// file vl/qsort-def.h line 127
static inline void _vl_kmeans_f_qsort_sort_recursive(struct _VlKMeansSortWrapper *array, unsigned long long int begin, unsigned long long int end);
// _vl_kmeans_f_qsort_swap
// file vl/kmeans.c line 792
static inline void _vl_kmeans_f_qsort_swap(struct _VlKMeansSortWrapper *array, unsigned long long int indexA, unsigned long long int indexB);
// _vl_kmeans_init_centers_plus_plus_d
// file vl/kmeans.c line 589
static void _vl_kmeans_init_centers_plus_plus_d(struct _VlKMeans *self, const double *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters);
// _vl_kmeans_init_centers_plus_plus_d::1::distFn_object
//
double distFn_object(unsigned long long int, const double *, const double *);
// _vl_kmeans_init_centers_plus_plus_f
// file vl/kmeans.c line 589
static void _vl_kmeans_init_centers_plus_plus_f(struct _VlKMeans *self, const float *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters);
// _vl_kmeans_init_centers_plus_plus_f::1::distFn_object
//
float distFn_object(unsigned long long int, const float *, const float *);
// _vl_kmeans_init_centers_with_rand_data_d
// file vl/kmeans.c line 528
static void _vl_kmeans_init_centers_with_rand_data_d(struct _VlKMeans *self, const double *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters);
// _vl_kmeans_init_centers_with_rand_data_d::1::1::distFn_object
//
double distFn_object(unsigned long long int, const double *, const double *);
// _vl_kmeans_init_centers_with_rand_data_f
// file vl/kmeans.c line 528
static void _vl_kmeans_init_centers_with_rand_data_f(struct _VlKMeans *self, const float *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters);
// _vl_kmeans_init_centers_with_rand_data_f::1::1::distFn_object
//
float distFn_object(unsigned long long int, const float *, const float *);
// _vl_kmeans_quantize_ann_d
// file vl/kmeans.c line 709
static void _vl_kmeans_quantize_ann_d(struct _VlKMeans *self, unsigned int *assignments, double *distances, const double *data, unsigned long long int numData, signed int update);
// _vl_kmeans_quantize_ann_d::1::distFn_object
//
double distFn_object(unsigned long long int, const double *, const double *);
// _vl_kmeans_quantize_ann_f
// file vl/kmeans.c line 709
static void _vl_kmeans_quantize_ann_f(struct _VlKMeans *self, unsigned int *assignments, float *distances, const float *data, unsigned long long int numData, signed int update);
// _vl_kmeans_quantize_ann_f::1::distFn_object
//
float distFn_object(unsigned long long int, const float *, const float *);
// _vl_kmeans_quantize_d
// file vl/kmeans.c line 656
static void _vl_kmeans_quantize_d(struct _VlKMeans *self, unsigned int *assignments, double *distances, const double *data, unsigned long long int numData);
// _vl_kmeans_quantize_d::1::distFn_object
//
double distFn_object(unsigned long long int, const double *, const double *);
// _vl_kmeans_quantize_f
// file vl/kmeans.c line 656
static void _vl_kmeans_quantize_f(struct _VlKMeans *self, unsigned int *assignments, float *distances, const float *data, unsigned long long int numData);
// _vl_kmeans_quantize_f::1::distFn_object
//
float distFn_object(unsigned long long int, const float *, const float *);
// _vl_kmeans_refine_centers_ann_d
// file vl/kmeans.c line 1004
static double _vl_kmeans_refine_centers_ann_d(struct _VlKMeans *self, const double *data, unsigned long long int numData);

//


//


//


//


//


//

// _vl_kmeans_refine_centers_ann_f
// file vl/kmeans.c line 1004
static double _vl_kmeans_refine_centers_ann_f(struct _VlKMeans *self, const float *data, unsigned long long int numData);

//


//


//


//


//


//

// _vl_kmeans_refine_centers_d
// file vl/kmeans.c line 1751
static double _vl_kmeans_refine_centers_d(struct _VlKMeans *self, const double *data, unsigned long long int numData);
// _vl_kmeans_refine_centers_elkan_d
// file vl/kmeans.c line 1163
static double _vl_kmeans_refine_centers_elkan_d(struct _VlKMeans *self, const double *data, unsigned long long int numData);

//


//


//


//


//


//


//


//


//

// _vl_kmeans_refine_centers_elkan_d::1::distFn_object
//
double distFn_object(unsigned long long int, const double *, const double *);
// _vl_kmeans_refine_centers_elkan_f
// file vl/kmeans.c line 1163
static double _vl_kmeans_refine_centers_elkan_f(struct _VlKMeans *self, const float *data, unsigned long long int numData);

//


//


//


//


//


//


//


//


//

// _vl_kmeans_refine_centers_elkan_f::1::distFn_object
//
float distFn_object(unsigned long long int, const float *, const float *);
// _vl_kmeans_refine_centers_f
// file vl/kmeans.c line 1751
static double _vl_kmeans_refine_centers_f(struct _VlKMeans *self, const float *data, unsigned long long int numData);
// _vl_kmeans_refine_centers_lloyd_d
// file vl/kmeans.c line 829
static double _vl_kmeans_refine_centers_lloyd_d(struct _VlKMeans *self, const double *data, unsigned long long int numData);

//


//


//


//


//

// _vl_kmeans_refine_centers_lloyd_f
// file vl/kmeans.c line 829
static double _vl_kmeans_refine_centers_lloyd_f(struct _VlKMeans *self, const float *data, unsigned long long int numData);

//


//


//


//


//

// _vl_kmeans_set_centers_d
// file vl/kmeans.c line 510
static void _vl_kmeans_set_centers_d(struct _VlKMeans *self, const double *centers, unsigned long long int dimension, unsigned long long int numCenters);
// _vl_kmeans_set_centers_f
// file vl/kmeans.c line 510
static void _vl_kmeans_set_centers_f(struct _VlKMeans *self, const float *centers, unsigned long long int dimension, unsigned long long int numCenters);
// _vl_kmeans_shuffle
// file vl/shuffle-def.h line 83
static inline void _vl_kmeans_shuffle(unsigned long long int *array, unsigned long long int size, struct _VlRand *rand);
// _vl_kmeans_sort_data_helper_d
// file vl/kmeans.c line 807
static void _vl_kmeans_sort_data_helper_d(struct _VlKMeans *self, unsigned int *permutations, const double *data, unsigned long long int numData);
// _vl_kmeans_sort_data_helper_f
// file vl/kmeans.c line 807
static void _vl_kmeans_sort_data_helper_f(struct _VlKMeans *self, unsigned int *permutations, const float *data, unsigned long long int numData);
// _vl_kmeans_swap
// file vl/shuffle-def.h line 56
static inline void _vl_kmeans_swap(unsigned long long int *array, unsigned long long int indexA, unsigned long long int indexB);
// _vl_kmeans_update_center_distances_d
// file vl/kmeans.c line 981
static double _vl_kmeans_update_center_distances_d(struct _VlKMeans *self);
// _vl_kmeans_update_center_distances_d::1::distFn_object
//
double distFn_object(unsigned long long int, const double *, const double *);
// _vl_kmeans_update_center_distances_f
// file vl/kmeans.c line 981
static double _vl_kmeans_update_center_distances_f(struct _VlKMeans *self);
// _vl_kmeans_update_center_distances_f::1::distFn_object
//
float distFn_object(unsigned long long int, const float *, const float *);
// _vl_lbp_init_uniform
// file vl/lbp.c line 172
static void _vl_lbp_init_uniform(struct VlLbp_ *self);
// _vl_new_gaussian_fitler_d
// file vl/imopv.c line 621
static double * _vl_new_gaussian_fitler_d(unsigned long long int *size, double sigma);
// _vl_new_gaussian_fitler_f
// file vl/imopv.c line 621
static float * _vl_new_gaussian_fitler_f(unsigned long long int *size, double sigma);
// _vl_resize_buffer
// file vl/covdet.c line 956
static signed int _vl_resize_buffer(void **buffer, unsigned long long int *bufferSize, unsigned long long int targetSize);
// _vl_scalespace_fill_octave
// file vl/scalespace.c line 669
void _vl_scalespace_fill_octave(struct _VlScaleSpace *self, signed long long int o);
// _vl_scalespace_start_octave_from_image
// file vl/scalespace.c line 700
static void _vl_scalespace_start_octave_from_image(struct _VlScaleSpace *self, const float *image, signed long long int o);
// _vl_scalespace_start_octave_from_previous_octave
// file vl/scalespace.c line 756
static void _vl_scalespace_start_octave_from_previous_octave(struct _VlScaleSpace *self, signed long long int o);
// _vl_svm_evaluate
// file vl/svm.c line 1911
void _vl_svm_evaluate(struct VlSvm_ *self);
// _vl_svm_sdca_train
// file vl/svm.c line 1931
void _vl_svm_sdca_train(struct VlSvm_ *self);
// _vl_svm_sgd_train
// file vl/svm.c line 2018
void _vl_svm_sgd_train(struct VlSvm_ *self);
// _vl_svm_update_statistics
// file vl/svm.c line 1871
void _vl_svm_update_statistics(struct VlSvm_ *self);
// _vl_svmdataset_inner_product_d
// file vl/svmdataset.c line 330
double _vl_svmdataset_inner_product_d(const struct VlSvmDataset_ *self, unsigned long long int element, const double *model);
// _vl_svmdataset_inner_product_f
// file vl/svmdataset.c line 330
double _vl_svmdataset_inner_product_f(const struct VlSvmDataset_ *self, unsigned long long int element, const double *model);
// _vl_svmdataset_inner_product_hom_d
// file vl/svmdataset.c line 358
double _vl_svmdataset_inner_product_hom_d(const struct VlSvmDataset_ *self, unsigned long long int element, const double *model);
// _vl_svmdataset_inner_product_hom_f
// file vl/svmdataset.c line 358
double _vl_svmdataset_inner_product_hom_f(const struct VlSvmDataset_ *self, unsigned long long int element, const double *model);
// _vl_vlad_encode_d
// file vl/vlad.c line 164
static void _vl_vlad_encode_d(double *enc, const double *means, unsigned long long int dimension, unsigned long long int numClusters, const double *data, unsigned long long int numData, const double *assignments, signed int flags);
// _vl_vlad_encode_f
// file vl/vlad.c line 164
static void _vl_vlad_encode_f(float *enc, const float *means, unsigned long long int dimension, unsigned long long int numClusters, const float *data, unsigned long long int numData, const float *assignments, signed int flags);
// _vl_x86cpu_info_init
// file vl/host.c line 447
void _vl_x86cpu_info_init(struct _VlX86CpuInfo *self);
// _vl_x86cpu_info_to_string_copy
// file vl/host.c line 470
char * _vl_x86cpu_info_to_string_copy(const struct _VlX86CpuInfo *self);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// acos
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 54
extern double acos(double);
// acosf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 54
extern float acosf(float);
// adv
// file vl/mser.c line 237
static inline void adv(signed int ndims, const signed int *dims, signed int *subs);
// alloc
// file vl/ikmeans_init.tc line 51
static void alloc(struct _VlIKMFilt *f, unsigned long long int M, unsigned long long int K);
// atan2
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 60
extern double atan2(double, double);
// calc_dist2
// file vl/ikmeans_init.tc line 33
static inline signed int calc_dist2(const signed int *A, const unsigned char *B, unsigned long long int M);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// climb
// file vl/mser.c line 262
static inline unsigned int climb(struct _VlMserReg *r, unsigned int idx);
// clock
// file /usr/include/time.h line 189
extern signed long int clock(void);
// cmp_pair
// file vl/ikmeans_init.tc line 23
static signed int cmp_pair(const void *a, const void *b);
// copy_and_downsample
// file vl/scalespace.c line 498
static void copy_and_downsample(float *destination, const float *source, unsigned long long int width, unsigned long long int height, unsigned long long int numOctaves);
// copy_and_upsample
// file vl/scalespace.c line 451
static void copy_and_upsample(float *destination, const float *source, unsigned long long int width, unsigned long long int height);
// cos
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 63
extern double cos(double);
// do_nothing_printf
// file vl/generic.c line 928
static signed int do_nothing_printf(const char *format, ...);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// exp
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 100
extern double exp(double);
// fabs
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 181
extern double fabs(double);
// factorial
// file vl/liop.c line 218
static signed int factorial(signed int num);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgetc
// file /usr/include/stdio.h line 531
extern signed int fgetc(struct _IO_FILE *);
// floor
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 184
extern double floor(double);
// fmod
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 187
extern double fmod(double, double);
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
// frexp
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 103
extern double frexp(double, signed int *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_permutation_index
// file vl/liop.c line 250
static inline signed long long int get_permutation_index(unsigned long long int *permutation, unsigned long long int size);
// getopt_long
// file vl/getopt_long.c line 74
extern signed int getopt_long(signed int argc, char * const *argv, const char *optstring, struct option *longopts, signed int *longindex);
// ldexp
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 106
extern double ldexp(double, signed int);
// log
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 109
extern double log(double);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// neigh_cmp
// file vl/liop.c line 285
static inline float neigh_cmp(struct _VlLiopDesc *liop, signed long long int i, signed long long int j);
// neigh_sort
// file vl/qsort-def.h line 183
static inline void neigh_sort(struct _VlLiopDesc *array, unsigned long long int size);
// neigh_sort_recursive
// file vl/qsort-def.h line 127
static inline void neigh_sort_recursive(struct _VlLiopDesc *array, unsigned long long int begin, unsigned long long int end);
// neigh_swap
// file vl/liop.c line 292
static inline void neigh_swap(struct _VlLiopDesc *liop, signed long long int i, signed long long int j);
// omp_get_max_threads
// file /usr/lib/gcc/x86_64-linux-gnu/5/include/omp.h line 79
extern signed int omp_get_max_threads(void);
// omp_get_thread_limit
// file /usr/lib/gcc/x86_64-linux-gnu/5/include/omp.h line 108
extern signed int omp_get_thread_limit(void);
// patch_cmp
// file vl/liop.c line 265
static inline float patch_cmp(struct _VlLiopDesc *liop, signed long long int i, signed long long int j);
// patch_sort
// file vl/qsort-def.h line 183
static inline void patch_sort(struct _VlLiopDesc *array, unsigned long long int size);
// patch_sort_recursive
// file vl/qsort-def.h line 127
static inline void patch_sort_recursive(struct _VlLiopDesc *array, unsigned long long int begin, unsigned long long int end);
// patch_swap
// file vl/liop.c line 272
static inline void patch_swap(struct _VlLiopDesc *liop, signed long long int i, signed long long int j);
// pow
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 153
extern double pow(double, double);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_1 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_1 *, union anonymous_0 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_equal
// file /usr/include/pthread.h line 1155
static inline signed int pthread_equal(unsigned long int __thread1, unsigned long int __thread2);
// pthread_getspecific
// file /usr/include/pthread.h line 1121
extern void * pthread_getspecific(unsigned int);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_0 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_setspecific
// file /usr/include/pthread.h line 1124
extern signed int pthread_setspecific(unsigned int, const void *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// remove_blanks
// file vl/pgm.c line 81
static signed int remove_blanks(struct _IO_FILE *f);
// remove_line
// file vl/pgm.c line 52
static signed int remove_line(struct _IO_FILE *f);
// sin
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 65
extern double sin(double);
// sinc
// file vl/homkermap.c line 258
static inline double sinc(double x);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sqrt
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 156
extern double sqrt(double);
// sqrtf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 156
extern float sqrtf(float);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// testThread
// file src/test_threads.c line 31
void * testThread(void *args);
// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c);
// ungetc
// file /usr/include/stdio.h line 702
extern signed int ungetc(signed int, struct _IO_FILE *);
// vl_abs_d
// file vl/mathop.h line 247
static inline double vl_abs_d(double x);
// vl_abs_d_link1
// file vl/mathop.h line 247
static inline double vl_abs_d_link1(double x_link1);
// vl_abs_d_link2
// file vl/mathop.h line 247
static inline double vl_abs_d_link2(double x_link2);
// vl_abs_d_link3
// file vl/mathop.h line 247
static inline double vl_abs_d_link3(double x_link3);
// vl_abs_f
// file vl/mathop.h line 233
static inline float vl_abs_f(float x);
// vl_abs_f_link1
// file vl/mathop.h line 233
static inline float vl_abs_f_link1(float x_link1);
// vl_aib_calculate_information
// file vl/aib.c line 437
void vl_aib_calculate_information(struct _VlAIB *aib, double *I, double *H);
// vl_aib_delete
// file vl/aib.c line 534
extern void vl_aib_delete(struct _VlAIB *aib);
// vl_aib_merge_nodes
// file vl/aib.c line 272
void vl_aib_merge_nodes(struct _VlAIB *aib, unsigned int i, unsigned int j, unsigned int new);
// vl_aib_min_beta
// file vl/aib.c line 232
void vl_aib_min_beta(struct _VlAIB *aib, unsigned int *besti, unsigned int *bestj, double *minbeta);
// vl_aib_new
// file vl/aib.c line 489
extern struct _VlAIB * vl_aib_new(double *Pcx, unsigned int nvalues, unsigned int nlabels);
// vl_aib_new_Pc
// file vl/aib.c line 205
double * vl_aib_new_Pc(double *Pcx, unsigned int nvalues, unsigned int nlabels);
// vl_aib_new_Px
// file vl/aib.c line 180
double * vl_aib_new_Px(double *Pcx, unsigned int nvalues, unsigned int nlabels);
// vl_aib_new_nodelist
// file vl/aib.c line 158
unsigned int * vl_aib_new_nodelist(unsigned int nentries);
// vl_aib_normalize_P
// file vl/aib.c line 139
void vl_aib_normalize_P(double *P, unsigned int nelem);
// vl_aib_process
// file vl/aib.c line 588
extern void vl_aib_process(struct _VlAIB *aib);

//

// vl_aib_update_beta
// file vl/aib.c line 351
void vl_aib_update_beta(struct _VlAIB *aib);
// vl_array_dealloc
// file vl/array.c line 124
extern void vl_array_dealloc(struct _VlArray *self);
// vl_array_delete
// file vl/array.c line 202
extern void vl_array_delete(struct _VlArray *self);
// vl_array_get_num_elements
// file vl/array.c line 23
extern unsigned long long int vl_array_get_num_elements(const struct _VlArray *self);
// vl_array_init
// file vl/array.c line 51
extern struct _VlArray * vl_array_init(struct _VlArray *self, unsigned int type, unsigned long long int numDimensions, const unsigned long long int *dimensions);
// vl_array_init_envelope
// file vl/array.c line 76
extern struct _VlArray * vl_array_init_envelope(struct _VlArray *self, void *data, unsigned int type, unsigned long long int numDimensions, const unsigned long long int *dimensions);
// vl_array_init_matrix
// file vl/array.c line 97
extern struct _VlArray * vl_array_init_matrix(struct _VlArray *self, unsigned int type, unsigned long long int numRows, unsigned long long int numColumns);
// vl_array_init_matrix_envelope
// file vl/array.c line 112
extern struct _VlArray * vl_array_init_matrix_envelope(struct _VlArray *self, void *data, unsigned int type, unsigned long long int numRows, unsigned long long int numColumns);
// vl_array_new
// file vl/array.c line 149
extern struct _VlArray * vl_array_new(unsigned int type, unsigned long long int numDimensions, const unsigned long long int *dimensions);
// vl_array_new_envelope
// file vl/array.c line 176
extern struct _VlArray * vl_array_new_envelope(void *data, unsigned int type, unsigned long long int numDimensions, const unsigned long long int *dimensions);
// vl_array_new_matrix
// file vl/array.c line 162
extern struct _VlArray * vl_array_new_matrix(unsigned int type, unsigned long long int numRows, unsigned long long int numColumns);
// vl_array_new_matrix_envelope
// file vl/array.c line 191
extern struct _VlArray * vl_array_new_matrix_envelope(void *data, unsigned int type, unsigned long long int numRows, unsigned long long int numColumns);
// vl_calloc
// file vl/generic.h line 145
extern void * vl_calloc(unsigned long int n, unsigned long int size);
// vl_ceil_d
// file vl/mathop.h line 174
static inline signed long int vl_ceil_d(double x);
// vl_ceil_d_link1
// file vl/mathop.h line 174
static inline signed long int vl_ceil_d_link1(double x_link1);
// vl_ceil_f
// file vl/mathop.h line 160
static inline signed long int vl_ceil_f(float x);
// vl_configuration_to_string_copy
// file ./vl/generic.h line 103
extern char * vl_configuration_to_string_copy(void);
// vl_covdet_append_feature
// file vl/covdet.c line 1648
extern signed int vl_covdet_append_feature(struct _VlCovDet *self, const struct _VlCovDetFeature *feature);
// vl_covdet_delete
// file vl/covdet.c line 1631
extern void vl_covdet_delete(struct _VlCovDet *self);
// vl_covdet_detect
// file vl/covdet.c line 1921
extern void vl_covdet_detect(struct _VlCovDet *self);
// vl_covdet_drop_features_outside
// file vl/covdet.c line 3108
extern void vl_covdet_drop_features_outside(struct _VlCovDet *self, double margin);
// vl_covdet_extract_affine_shape
// file vl/covdet.c line 2644
extern void vl_covdet_extract_affine_shape(struct _VlCovDet *self);
// vl_covdet_extract_affine_shape_for_frame
// file vl/covdet.c line 2455
extern signed int vl_covdet_extract_affine_shape_for_frame(struct _VlCovDet *self, struct _VlFrameOrientedEllipse *adapted, struct _VlFrameOrientedEllipse frame);
// vl_covdet_extract_laplacian_scales
// file vl/covdet.c line 3009
extern void vl_covdet_extract_laplacian_scales(struct _VlCovDet *self);
// vl_covdet_extract_laplacian_scales_for_frame
// file vl/covdet.c line 2900
extern struct _VlCovDetFeatureLaplacianScale * vl_covdet_extract_laplacian_scales_for_frame(struct _VlCovDet *self, unsigned long long int *numScales, struct _VlFrameOrientedEllipse frame);
// vl_covdet_extract_orientations
// file vl/covdet.c line 2850
extern void vl_covdet_extract_orientations(struct _VlCovDet *self);
// vl_covdet_extract_orientations_for_frame
// file vl/covdet.c line 2690
extern struct _VlCovDetFeatureOrientation * vl_covdet_extract_orientations_for_frame(struct _VlCovDet *self, unsigned long long int *numOrientations, struct _VlFrameOrientedEllipse frame);
// vl_covdet_extract_patch_for_frame
// file vl/covdet.c line 2423
extern signed int vl_covdet_extract_patch_for_frame(struct _VlCovDet *self, float *patch, unsigned long long int resolution, double extent, double sigma, struct _VlFrameOrientedEllipse frame);
// vl_covdet_extract_patch_helper
// file vl/covdet.c line 2158
signed int vl_covdet_extract_patch_helper(struct _VlCovDet *self, double *sigma1, double *sigma2, float *patch, unsigned long long int resolution, double extent, double sigma, double *A_, double *T_, double d1, double d2);
// vl_covdet_get_aa_accurate_smoothing
// file vl/covdet.c line 3280
extern signed int vl_covdet_get_aa_accurate_smoothing(const struct _VlCovDet *self);
// vl_covdet_get_css
// file vl/covdet.c line 3371
extern struct _VlScaleSpace * vl_covdet_get_css(const struct _VlCovDet *self);
// vl_covdet_get_edge_threshold
// file vl/covdet.c line 3154
extern double vl_covdet_get_edge_threshold(const struct _VlCovDet *self);
// vl_covdet_get_features
// file vl/covdet.c line 3345
extern void * vl_covdet_get_features(struct _VlCovDet *self);
// vl_covdet_get_first_octave
// file vl/covdet.c line 3229
extern signed long long int vl_covdet_get_first_octave(const struct _VlCovDet *self);
// vl_covdet_get_gss
// file vl/covdet.c line 3358
extern struct _VlScaleSpace * vl_covdet_get_gss(const struct _VlCovDet *self);
// vl_covdet_get_laplacian_peak_threshold
// file vl/covdet.c line 3205
double vl_covdet_get_laplacian_peak_threshold(const struct _VlCovDet *self);
// vl_covdet_get_laplacian_scales_statistics
// file vl/covdet.c line 3387
extern const unsigned long long int * vl_covdet_get_laplacian_scales_statistics(const struct _VlCovDet *self, unsigned long long int *numScales);
// vl_covdet_get_non_extrema_suppression_threshold
// file vl/covdet.c line 3303
extern double vl_covdet_get_non_extrema_suppression_threshold(const struct _VlCovDet *self);
// vl_covdet_get_num_features
// file vl/covdet.c line 3336
extern unsigned long long int vl_covdet_get_num_features(const struct _VlCovDet *self);
// vl_covdet_get_num_non_extrema_suppressed
// file vl/covdet.c line 3325
extern unsigned long long int vl_covdet_get_num_non_extrema_suppressed(const struct _VlCovDet *self);
// vl_covdet_get_octave_resolution
// file vl/covdet.c line 3254
extern unsigned long long int vl_covdet_get_octave_resolution(const struct _VlCovDet *self);
// vl_covdet_get_peak_threshold
// file vl/covdet.c line 3178
extern double vl_covdet_get_peak_threshold(const struct _VlCovDet *self);
// vl_covdet_get_transposed
// file vl/covdet.c line 3133
extern signed int vl_covdet_get_transposed(const struct _VlCovDet *self);
// vl_covdet_new
// file vl/covdet.c line 1507
extern struct _VlCovDet * vl_covdet_new(enum _VlCovDetMethod method);
// vl_covdet_put_image
// file vl/covdet.c line 1683
extern signed int vl_covdet_put_image(struct _VlCovDet *self, const float *image, unsigned long long int width, unsigned long long int height);
// vl_covdet_reset
// file vl/covdet.c line 1610
extern void vl_covdet_reset(struct _VlCovDet *self);
// vl_covdet_set_aa_accurate_smoothing
// file vl/covdet.c line 3291
extern void vl_covdet_set_aa_accurate_smoothing(struct _VlCovDet *self, signed int x);
// vl_covdet_set_edge_threshold
// file vl/covdet.c line 3166
extern void vl_covdet_set_edge_threshold(struct _VlCovDet *self, double edgeThreshold);
// vl_covdet_set_first_octave
// file vl/covdet.c line 3241
extern void vl_covdet_set_first_octave(struct _VlCovDet *self, signed long long int o);
// vl_covdet_set_laplacian_peak_threshold
// file vl/covdet.c line 3217
extern void vl_covdet_set_laplacian_peak_threshold(struct _VlCovDet *self, double peakThreshold);
// vl_covdet_set_non_extrema_suppression_threshold
// file vl/covdet.c line 3314
extern void vl_covdet_set_non_extrema_suppression_threshold(struct _VlCovDet *self, double x);
// vl_covdet_set_octave_resolution
// file vl/covdet.c line 3267
extern void vl_covdet_set_octave_resolution(struct _VlCovDet *self, unsigned long long int r);
// vl_covdet_set_peak_threshold
// file vl/covdet.c line 3190
extern void vl_covdet_set_peak_threshold(struct _VlCovDet *self, double peakThreshold);
// vl_covdet_set_transposed
// file vl/covdet.c line 3143
extern void vl_covdet_set_transposed(struct _VlCovDet *self, signed int t);
// vl_cpu_has_avx
// file vl/generic.c line 1092
extern signed int vl_cpu_has_avx(void);
// vl_cpu_has_sse2
// file vl/generic.c line 1120
extern signed int vl_cpu_has_sse2(void);
// vl_cpu_has_sse3
// file vl/generic.c line 1106
extern signed int vl_cpu_has_sse3(void);
// vl_enumeration_get
// file vl/stringop.c line 409
extern struct _VlEnumerator * vl_enumeration_get(const struct _VlEnumerator *enumeration, const char *name);
// vl_enumeration_get_by_value
// file vl/stringop.c line 453
extern struct _VlEnumerator * vl_enumeration_get_by_value(const struct _VlEnumerator *enumeration, signed long long int value);
// vl_enumeration_get_casei
// file vl/stringop.c line 431
extern struct _VlEnumerator * vl_enumeration_get_casei(const struct _VlEnumerator *enumeration, const char *name);
// vl_eval_vector_comparison_on_all_pairs_d
// file vl/mathop.c line 555
extern void vl_eval_vector_comparison_on_all_pairs_d(double *result, unsigned long long int dimension, const double *X, unsigned long long int numDataX, const double *Y, unsigned long long int numDataY, double (*function)(unsigned long long int, const double *, const double *));
// vl_eval_vector_comparison_on_all_pairs_d::function_object
//
double function_object(unsigned long long int, const double *, const double *);
// vl_eval_vector_comparison_on_all_pairs_f
// file vl/mathop.c line 555
extern void vl_eval_vector_comparison_on_all_pairs_f(float *result, unsigned long long int dimension, const float *X, unsigned long long int numDataX, const float *Y, unsigned long long int numDataY, float (*function)(unsigned long long int, const float *, const float *));
// vl_eval_vector_comparison_on_all_pairs_f::function_object
//
float function_object(unsigned long long int, const float *, const float *);
// vl_fast_atan2_f
// file vl/mathop.h line 408
static inline float vl_fast_atan2_f(float y, float x);
// vl_fast_resqrt_f
// file vl/mathop.h line 480
static inline float vl_fast_resqrt_f(float x);
// vl_fast_sqrt_f
// file vl/mathop.h line 545
static inline float vl_fast_sqrt_f(float x);
// vl_fast_sqrt_ui64
// file vl/mathop.h line 598
static inline unsigned long long int vl_fast_sqrt_ui64(unsigned long long int x);
// vl_find_local_extrema_2
// file vl/covdet.c line 1147
extern unsigned long long int vl_find_local_extrema_2(signed long long int **extrema, unsigned long long int *bufferSize, const float *map, unsigned long long int width, unsigned long long int height, double threshold);
// vl_find_local_extrema_3
// file vl/covdet.c line 1057
extern unsigned long long int vl_find_local_extrema_3(signed long long int **extrema, unsigned long long int *bufferSize, const float *map, unsigned long long int width, unsigned long long int height, unsigned long long int depth, double threshold);
// vl_fisher_encode
// file vl/fisher.c line 549
extern unsigned long long int vl_fisher_encode(void *enc, unsigned int dataType, const void *means, unsigned long long int dimension, unsigned long long int numClusters, const void *covariances, const void *priors, const void *data, unsigned long long int numData, signed int flags);
// vl_floor_d
// file vl/mathop.h line 147
static inline signed long int vl_floor_d(double x);
// vl_floor_d_link1
// file vl/mathop.h line 147
static inline signed long int vl_floor_d_link1(double x_link1);
// vl_floor_f
// file vl/mathop.h line 135
static inline signed long int vl_floor_f(float x);
// vl_floor_f_link1
// file vl/mathop.h line 135
static inline signed long int vl_floor_f_link1(float x_link1);
// vl_free
// file ./vl/generic.h line 147
extern void vl_free(void *ptr);
// vl_gaussian_elimination
// file vl/mathop.c line 906
extern signed int vl_gaussian_elimination(double *A, unsigned long long int numRows, unsigned long long int numColumns);
// vl_get_cpu_time
// file vl/generic.h line 206
extern double vl_get_cpu_time(void);
// vl_get_gmm_data_posteriors_d
// file vl/gmm.c line 712
extern double vl_get_gmm_data_posteriors_d(double *posteriors, unsigned long long int numClusters, unsigned long long int numData, const double *priors, const double *means, unsigned long long int dimension, const double *covariances, const double *data);
// vl_get_gmm_data_posteriors_d::1::distFn_object
//
double distFn_object(unsigned long long int, const double *, const double *, const double *);
// vl_get_gmm_data_posteriors_f
// file vl/gmm.c line 712
extern double vl_get_gmm_data_posteriors_f(float *posteriors, unsigned long long int numClusters, unsigned long long int numData, const float *priors, const float *means, unsigned long long int dimension, const float *covariances, const float *data);
// vl_get_gmm_data_posteriors_f::1::distFn_object
//
float distFn_object(unsigned long long int, const float *, const float *, const float *);
// vl_get_last_error
// file vl/generic.c line 1265
extern signed int vl_get_last_error(void);
// vl_get_last_error_message
// file vl/generic.c line 1275
extern const char * vl_get_last_error_message(void);
// vl_get_max_threads
// file vl/generic.c line 1175
extern unsigned long long int vl_get_max_threads(void);
// vl_get_num_cpus
// file vl/generic.c line 1055
extern unsigned long long int vl_get_num_cpus(void);
// vl_get_printf_func
// file vl/generic.h line 156
extern signed int (*vl_get_printf_func(void))(const char *, ...);
// vl_get_rand
// file ./vl/generic.h line 110
extern struct _VlRand * vl_get_rand(void);
// vl_get_simd_enabled
// file vl/generic.c line 1082
extern signed int vl_get_simd_enabled(void);
// vl_get_state
// file vl/generic.c line 1005
static inline struct _VlState * vl_get_state(void);
// vl_get_thread_limit
// file vl/generic.c line 1143
extern unsigned long long int vl_get_thread_limit(void);
// vl_get_thread_specific_state
// file vl/generic.c line 1017
static inline struct _VlThreadState * vl_get_thread_specific_state(void);
// vl_get_type_size
// file vl/generic.h line 85
static inline unsigned long long int vl_get_type_size(unsigned int type);
// vl_get_type_size_link1
// file vl/generic.h line 85
static inline unsigned long long int vl_get_type_size_link1(unsigned int type_link1);
// vl_get_type_size_link2
// file vl/generic.h line 85
static inline unsigned long long int vl_get_type_size_link2(unsigned int type_link2);
// vl_get_type_size_link3
// file vl/generic.h line 85
static inline unsigned long long int vl_get_type_size_link3(unsigned int type_link3);
// vl_get_vector_3_comparison_function_d
// file vl/mathop.c line 521
extern double (*vl_get_vector_3_comparison_function_d(enum _VlVectorComparisonType type))(unsigned long long int, const double *, const double *, const double *);
// vl_get_vector_3_comparison_function_d::1::function_object
//
double function_object(unsigned long long int, const double *, const double *, const double *);
// vl_get_vector_3_comparison_function_f
// file vl/mathop.c line 521
extern float (*vl_get_vector_3_comparison_function_f(enum _VlVectorComparisonType type))(unsigned long long int, const float *, const float *, const float *);
// vl_get_vector_3_comparison_function_f::1::function_object
//
float function_object(unsigned long long int, const float *, const float *, const float *);
// vl_get_vector_comparison_function_d
// file vl/mathop.h line 669
extern double (*vl_get_vector_comparison_function_d(enum _VlVectorComparisonType type))(unsigned long long int, const double *, const double *);
// vl_get_vector_comparison_function_d::1::function_object
//
double function_object(unsigned long long int, const double *, const double *);
// vl_get_vector_comparison_function_f
// file vl/mathop.h line 666
extern float (*vl_get_vector_comparison_function_f(enum _VlVectorComparisonType type))(unsigned long long int, const float *, const float *);
// vl_get_vector_comparison_function_f::1::function_object
//
float function_object(unsigned long long int, const float *, const float *);
// vl_get_version_string
// file vl/generic.c line 868
extern const char * vl_get_version_string(void);
// vl_gmm_cluster
// file vl/gmm.c line 1557
extern double vl_gmm_cluster(struct _VlGMM *self, const void *data, unsigned long long int numData);

//


//


//


//

// vl_gmm_delete
// file vl/gmm.c line 414
extern void vl_gmm_delete(struct _VlGMM *self);
// vl_gmm_em
// file vl/gmm.c line 1656
extern double vl_gmm_em(struct _VlGMM *self, const void *data, unsigned long long int numData);
// vl_gmm_get_covariance_lower_bounds
// file vl/gmm.c line 644
extern const double * vl_gmm_get_covariance_lower_bounds(const struct _VlGMM *self);
// vl_gmm_get_covariances
// file vl/gmm.c line 513
extern const void * vl_gmm_get_covariances(const struct _VlGMM *self);
// vl_gmm_get_data_type
// file vl/gmm.c line 436
extern unsigned int vl_gmm_get_data_type(const struct _VlGMM *self);
// vl_gmm_get_dimension
// file vl/gmm.c line 592
extern unsigned long long int vl_gmm_get_dimension(const struct _VlGMM *self);
// vl_gmm_get_initialization
// file vl/gmm.c line 603
extern enum _VlGMMInitialization vl_gmm_get_initialization(const struct _VlGMM *self);
// vl_gmm_get_kmeans_init_object
// file vl/gmm.c line 622
extern struct _VlKMeans * vl_gmm_get_kmeans_init_object(const struct _VlGMM *self);
// vl_gmm_get_loglikelihood
// file vl/gmm.c line 469
extern double vl_gmm_get_loglikelihood(const struct _VlGMM *self);
// vl_gmm_get_max_num_iterations
// file vl/gmm.c line 546
extern unsigned long long int vl_gmm_get_max_num_iterations(const struct _VlGMM *self);
// vl_gmm_get_means
// file vl/gmm.c line 502
extern const void * vl_gmm_get_means(const struct _VlGMM *self);
// vl_gmm_get_num_clusters
// file vl/gmm.c line 447
extern unsigned long long int vl_gmm_get_num_clusters(const struct _VlGMM *self);
// vl_gmm_get_num_data
// file vl/gmm.c line 458
extern unsigned long long int vl_gmm_get_num_data(const struct _VlGMM *self);
// vl_gmm_get_num_repetitions
// file vl/gmm.c line 568
extern unsigned long long int vl_gmm_get_num_repetitions(const struct _VlGMM *self);
// vl_gmm_get_posteriors
// file vl/gmm.c line 535
extern const void * vl_gmm_get_posteriors(const struct _VlGMM *self);
// vl_gmm_get_priors
// file vl/gmm.c line 524
extern const void * vl_gmm_get_priors(const struct _VlGMM *self);
// vl_gmm_get_verbosity
// file vl/gmm.c line 480
extern signed int vl_gmm_get_verbosity(const struct _VlGMM *self);
// vl_gmm_init_with_kmeans
// file vl/gmm.c line 1526
extern void vl_gmm_init_with_kmeans(struct _VlGMM *self, const void *data, unsigned long long int numData, struct _VlKMeans *kmeansInit);
// vl_gmm_init_with_rand_data
// file vl/gmm.c line 1504
extern void vl_gmm_init_with_rand_data(struct _VlGMM *self, const void *data, unsigned long long int numData);
// vl_gmm_new
// file vl/gmm.c line 354
extern struct _VlGMM * vl_gmm_new(unsigned int dataType, unsigned long long int dimension, unsigned long long int numComponents);
// vl_gmm_new_copy
// file vl/gmm.c line 1481
extern struct _VlGMM * vl_gmm_new_copy(const struct _VlGMM *self);
// vl_gmm_reset
// file vl/gmm.c line 392
extern void vl_gmm_reset(struct _VlGMM *self);
// vl_gmm_set_covariance_lower_bound
// file vl/gmm.c line 669
extern void vl_gmm_set_covariance_lower_bound(struct _VlGMM *self, double bound);
// vl_gmm_set_covariance_lower_bounds
// file vl/gmm.c line 656
extern void vl_gmm_set_covariance_lower_bounds(struct _VlGMM *self, const double *bounds);
// vl_gmm_set_covariances
// file vl/gmm.c line 1686
extern void vl_gmm_set_covariances(struct _VlGMM *self, const void *covariances);
// vl_gmm_set_initialization
// file vl/gmm.c line 613
extern void vl_gmm_set_initialization(struct _VlGMM *self, enum _VlGMMInitialization init);
// vl_gmm_set_kmeans_init_object
// file vl/gmm.c line 631
extern void vl_gmm_set_kmeans_init_object(struct _VlGMM *self, struct _VlKMeans *kmeans);
// vl_gmm_set_max_num_iterations
// file vl/gmm.c line 557
extern void vl_gmm_set_max_num_iterations(struct _VlGMM *self, unsigned long long int maxNumIterations);
// vl_gmm_set_means
// file vl/gmm.c line 1675
extern void vl_gmm_set_means(struct _VlGMM *self, const void *means);
// vl_gmm_set_num_repetitions
// file vl/gmm.c line 580
extern void vl_gmm_set_num_repetitions(struct _VlGMM *self, unsigned long long int numRepetitions);
// vl_gmm_set_priors
// file vl/gmm.c line 1697
extern void vl_gmm_set_priors(struct _VlGMM *self, const void *priors);
// vl_gmm_set_verbosity
// file vl/gmm.c line 491
extern void vl_gmm_set_verbosity(struct _VlGMM *self, signed int verbosity);
// vl_heap_left_child
// file vl/heap-def.h line 202
static inline unsigned long long int vl_heap_left_child(unsigned long long int index);
// vl_heap_parent
// file vl/heap-def.h line 190
static inline unsigned long long int vl_heap_parent(unsigned long long int index);
// vl_heap_right_child
// file vl/heap-def.h line 213
static inline unsigned long long int vl_heap_right_child(unsigned long long int index);
// vl_hikm_copy_subset
// file vl/hikmeans.c line 56
unsigned char * vl_hikm_copy_subset(const unsigned char *data, unsigned int *ids, unsigned long long int N, unsigned long long int M, unsigned int id, unsigned long long int *N2);
// vl_hikm_delete
// file vl/hikmeans.c line 197
extern void vl_hikm_delete(struct _VlHIKMTree *f);
// vl_hikm_get_K
// file vl/hikmeans.c line 301
extern unsigned long long int vl_hikm_get_K(const struct _VlHIKMTree *f);
// vl_hikm_get_depth
// file vl/hikmeans.c line 312
extern unsigned long long int vl_hikm_get_depth(const struct _VlHIKMTree *f);
// vl_hikm_get_max_niters
// file vl/hikmeans.c line 335
extern unsigned long long int vl_hikm_get_max_niters(const struct _VlHIKMTree *f);
// vl_hikm_get_ndims
// file vl/hikmeans.c line 290
extern unsigned long long int vl_hikm_get_ndims(const struct _VlHIKMTree *f);
// vl_hikm_get_root
// file vl/hikmeans.c line 346
extern const struct _VlHIKMNode * vl_hikm_get_root(const struct _VlHIKMTree *f);
// vl_hikm_get_verbosity
// file vl/hikmeans.c line 324
extern signed int vl_hikm_get_verbosity(const struct _VlHIKMTree *f);
// vl_hikm_init
// file vl/hikmeans.c line 217
extern void vl_hikm_init(struct _VlHIKMTree *f, unsigned long long int M, unsigned long long int K, unsigned long long int depth);
// vl_hikm_new
// file vl/hikmeans.c line 183
extern struct _VlHIKMTree * vl_hikm_new(signed int method);
// vl_hikm_push
// file vl/hikmeans.c line 257
extern void vl_hikm_push(struct _VlHIKMTree *f, unsigned int *asgn, const unsigned char *data, unsigned long long int N);
// vl_hikm_set_max_niters
// file vl/hikmeans.c line 368
extern void vl_hikm_set_max_niters(struct _VlHIKMTree *f, signed int max_niters);
// vl_hikm_set_verbosity
// file vl/hikmeans.c line 357
extern void vl_hikm_set_verbosity(struct _VlHIKMTree *f, signed int verb);
// vl_hikm_train
// file vl/hikmeans.c line 238
extern void vl_hikm_train(struct _VlHIKMTree *f, const unsigned char *data, unsigned long long int N);
// vl_hog_delete
// file vl/hog.c line 322
extern void vl_hog_delete(struct VlHog_ *self);
// vl_hog_extract
// file vl/hog.c line 854
extern void vl_hog_extract(struct VlHog_ *self, float *features);
// vl_hog_get_dimension
// file vl/hog.c line 504
extern unsigned long long int vl_hog_get_dimension(const struct VlHog_ *self);
// vl_hog_get_glyph_size
// file vl/hog.c line 365
extern unsigned long long int vl_hog_get_glyph_size(const struct VlHog_ *self);
// vl_hog_get_height
// file vl/hog.c line 526
extern unsigned long long int vl_hog_get_height(struct VlHog_ *self);
// vl_hog_get_permutation
// file vl/hog.c line 383
extern const signed long long int * vl_hog_get_permutation(const struct VlHog_ *self);
// vl_hog_get_use_bilinear_orientation_assignments
// file vl/hog.c line 405
extern signed int vl_hog_get_use_bilinear_orientation_assignments(const struct VlHog_ *self);
// vl_hog_get_width
// file vl/hog.c line 515
extern unsigned long long int vl_hog_get_width(struct VlHog_ *self);
// vl_hog_new
// file vl/hog.c line 174
extern struct VlHog_ * vl_hog_new(enum VlHogVariant_ variant, unsigned long long int numOrientations, signed int transposed);
// vl_hog_prepare_buffers
// file vl/hog.c line 540
static void vl_hog_prepare_buffers(struct VlHog_ *self, unsigned long long int width, unsigned long long int height, unsigned long long int cellSize);
// vl_hog_put_image
// file vl/hog.c line 596
extern void vl_hog_put_image(struct VlHog_ *self, const float *image, unsigned long long int width, unsigned long long int height, unsigned long long int numChannels, unsigned long long int cellSize);
// vl_hog_put_polar_field
// file vl/hog.c line 742
extern void vl_hog_put_polar_field(struct VlHog_ *self, const float *modulus, const float *angle, signed int directed, unsigned long long int width, unsigned long long int height, unsigned long long int cellSize);
// vl_hog_render
// file vl/hog.c line 428
extern void vl_hog_render(const struct VlHog_ *self, float *image, const float *descriptor, unsigned long long int width, unsigned long long int height);
// vl_hog_set_use_bilinear_orientation_assignments
// file vl/hog.c line 395
extern void vl_hog_set_use_bilinear_orientation_assignments(struct VlHog_ *self, signed int x);
// vl_homogeneouskernelmap_delete
// file vl/homkermap.c line 435
extern void vl_homogeneouskernelmap_delete(struct _VlHomogeneousKernelMap *self);
// vl_homogeneouskernelmap_evaluate_d
// file vl/homkermap.h line 57
extern void vl_homogeneouskernelmap_evaluate_d(const struct _VlHomogeneousKernelMap *self, double *destination, unsigned long long int stride, double x);
// vl_homogeneouskernelmap_evaluate_f
// file vl/homkermap.h line 63
extern void vl_homogeneouskernelmap_evaluate_f(const struct _VlHomogeneousKernelMap *self, float *destination, unsigned long long int stride, double x);
// vl_homogeneouskernelmap_get_dimension
// file vl/homkermap.h line 76
extern unsigned long long int vl_homogeneouskernelmap_get_dimension(const struct _VlHomogeneousKernelMap *self);
// vl_homogeneouskernelmap_get_kernel_type
// file vl/homkermap.c line 476
extern enum anonymous_3 vl_homogeneouskernelmap_get_kernel_type(const struct _VlHomogeneousKernelMap *self);
// vl_homogeneouskernelmap_get_order
// file vl/homkermap.c line 452
extern unsigned long long int vl_homogeneouskernelmap_get_order(const struct _VlHomogeneousKernelMap *self);
// vl_homogeneouskernelmap_get_smooth_spectrum
// file vl/homkermap.c line 271
static inline double vl_homogeneouskernelmap_get_smooth_spectrum(const struct _VlHomogeneousKernelMap *self, double omega);
// vl_homogeneouskernelmap_get_spectrum
// file vl/homkermap.c line 240
static inline double vl_homogeneouskernelmap_get_spectrum(const struct _VlHomogeneousKernelMap *self, double omega);
// vl_homogeneouskernelmap_get_window_type
// file vl/homkermap.c line 488
extern enum anonymous_4 vl_homogeneouskernelmap_get_window_type(const struct _VlHomogeneousKernelMap *self);
// vl_homogeneouskernelmap_new
// file vl/homkermap.c line 326
extern struct _VlHomogeneousKernelMap * vl_homogeneouskernelmap_new(enum anonymous_3 kernelType, double gamma, unsigned long long int order, double period, enum anonymous_4 windowType);
// vl_ikm_delete
// file vl/ikmeans.h line 58
extern void vl_ikm_delete(struct _VlIKMFilt *f);
// vl_ikm_elkan_update_inter_dist
// file vl/ikmeans_elkan.tc line 21
static void vl_ikm_elkan_update_inter_dist(struct _VlIKMFilt *f);
// vl_ikm_get_K
// file vl/ikmeans.h line 74
extern unsigned long long int vl_ikm_get_K(const struct _VlIKMFilt *f);
// vl_ikm_get_centers
// file vl/ikmeans.c line 268
extern const signed int * vl_ikm_get_centers(const struct _VlIKMFilt *f);
// vl_ikm_get_max_niters
// file vl/ikmeans.c line 257
extern unsigned long long int vl_ikm_get_max_niters(const struct _VlIKMFilt *f);
// vl_ikm_get_ndims
// file vl/ikmeans.c line 223
extern unsigned long long int vl_ikm_get_ndims(const struct _VlIKMFilt *f);
// vl_ikm_get_verbosity
// file vl/ikmeans.c line 246
extern signed int vl_ikm_get_verbosity(const struct _VlIKMFilt *f);
// vl_ikm_init
// file vl/ikmeans_init.tc line 81
extern void vl_ikm_init(struct _VlIKMFilt *f, const signed int *centers, unsigned long long int M, unsigned long long int K);
// vl_ikm_init_elkan
// file vl/ikmeans_elkan.tc line 46
static void vl_ikm_init_elkan(struct _VlIKMFilt *f);
// vl_ikm_init_helper
// file vl/ikmeans_init.tc line 65
static void vl_ikm_init_helper(struct _VlIKMFilt *f);
// vl_ikm_init_lloyd
// file vl/ikmeans_lloyd.tc line 22
static void vl_ikm_init_lloyd(struct _VlIKMFilt *f);
// vl_ikm_init_rand
// file vl/ikmeans_init.tc line 95
extern void vl_ikm_init_rand(struct _VlIKMFilt *f, unsigned long long int M, unsigned long long int K);
// vl_ikm_init_rand_data
// file vl/ikmeans.h line 65
extern void vl_ikm_init_rand_data(struct _VlIKMFilt *f, const unsigned char *data, unsigned long long int M, unsigned long long int N, unsigned long long int K);
// vl_ikm_new
// file vl/ikmeans.h line 57
extern struct _VlIKMFilt * vl_ikm_new(signed int method);
// vl_ikm_push
// file vl/ikmeans.h line 67
extern void vl_ikm_push(struct _VlIKMFilt *f, unsigned int *asgn, const unsigned char *data, unsigned long long int N);
// vl_ikm_push_elkan
// file vl/ikmeans_elkan.tc line 324
static void vl_ikm_push_elkan(struct _VlIKMFilt *f, unsigned int *asgn, const unsigned char *data, unsigned long long int N);
// vl_ikm_push_lloyd
// file vl/ikmeans_lloyd.tc line 125
static void vl_ikm_push_lloyd(struct _VlIKMFilt *f, unsigned int *asgn, const unsigned char *data, unsigned long long int N);
// vl_ikm_push_one
// file vl/ikmeans.c line 185
extern unsigned int vl_ikm_push_one(const signed int *centers, const unsigned char *data, unsigned long long int M, unsigned long long int K);
// vl_ikm_set_max_niters
// file vl/ikmeans.h line 83
extern void vl_ikm_set_max_niters(struct _VlIKMFilt *f, unsigned long long int max_niters);
// vl_ikm_set_verbosity
// file vl/ikmeans.h line 82
extern void vl_ikm_set_verbosity(struct _VlIKMFilt *f, signed int verb);
// vl_ikm_train
// file vl/ikmeans.h line 66
extern signed int vl_ikm_train(struct _VlIKMFilt *f, const unsigned char *data, unsigned long long int N);

//


//

// vl_ikm_train_elkan
// file vl/ikmeans_elkan.tc line 64
static signed int vl_ikm_train_elkan(struct _VlIKMFilt *f, const unsigned char *data, unsigned long long int N);

//


//

// vl_ikm_train_lloyd
// file vl/ikmeans_lloyd.tc line 34
static signed int vl_ikm_train_lloyd(struct _VlIKMFilt *f, const unsigned char *data, unsigned long long int N);
// vl_image_distance_transform_d
// file vl/imopv.c line 329
extern void vl_image_distance_transform_d(const double *image, unsigned long long int numColumns, unsigned long long int numRows, unsigned long long int columnStride, unsigned long long int rowStride, double *distanceTransform, unsigned long long int *indexes, double coeff, double offset);
// vl_image_distance_transform_f
// file vl/imopv.c line 329
extern void vl_image_distance_transform_f(const float *image, unsigned long long int numColumns, unsigned long long int numRows, unsigned long long int columnStride, unsigned long long int rowStride, float *distanceTransform, unsigned long long int *indexes, float coeff, float offset);
// vl_imconvcol_vd
// file vl/imopv.c line 120
extern void vl_imconvcol_vd(double *dst, unsigned long long int dst_stride, const double *src, unsigned long long int src_width, unsigned long long int src_height, unsigned long long int src_stride, const double *filt, signed long long int filt_begin, signed long long int filt_end, signed int step, unsigned int flags);
// vl_imconvcol_vf
// file vl/imopv.c line 120
extern void vl_imconvcol_vf(float *dst, unsigned long long int dst_stride, const float *src, unsigned long long int src_width, unsigned long long int src_height, unsigned long long int src_stride, const float *filt, signed long long int filt_begin, signed long long int filt_end, signed int step, unsigned int flags);
// vl_imconvcoltri_d
// file vl/imopv.c line 511
extern void vl_imconvcoltri_d(double *dest, unsigned long long int destStride, const double *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride, unsigned long long int filterSize, unsigned long long int step, unsigned int flags);
// vl_imconvcoltri_f
// file vl/imopv.c line 511
extern void vl_imconvcoltri_f(float *dest, unsigned long long int destStride, const float *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride, unsigned long long int filterSize, unsigned long long int step, unsigned int flags);
// vl_imgradient_d
// file vl/imopv.c line 723
extern void vl_imgradient_d(double *xGradient, double *yGradient, unsigned long long int gradWidthStride, unsigned long long int gradHeightStride, const double *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride);
// vl_imgradient_f
// file vl/imopv.h line 142
extern void vl_imgradient_f(float *xGradient, float *yGradient, unsigned long long int gradWidthStride, unsigned long long int gradHeightStride, const float *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride);
// vl_imgradient_polar_d
// file vl/imopv.c line 875
extern void vl_imgradient_polar_d(double *gradientModulus, double *gradientAngle, unsigned long long int gradientHorizontalStride, unsigned long long int gradHeightStride, const double *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride);
// vl_imgradient_polar_f
// file vl/imopv.h line 128
extern void vl_imgradient_polar_f(float *gradientModulus, float *gradientAngle, unsigned long long int gradientHorizontalStride, unsigned long long int gradHeightStride, const float *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride);
// vl_imintegral_d
// file vl/imopv.c line 1042
extern void vl_imintegral_d(double *integral, unsigned long long int integralStride, const double *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride);
// vl_imintegral_f
// file vl/imopv.c line 1042
extern void vl_imintegral_f(float *integral, unsigned long long int integralStride, const float *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride);
// vl_imintegral_i32
// file vl/imopv.c line 1042
extern void vl_imintegral_i32(signed int *integral, unsigned long long int integralStride, const signed int *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride);
// vl_imintegral_ui32
// file vl/imopv.c line 1042
extern void vl_imintegral_ui32(unsigned int *integral, unsigned long long int integralStride, const unsigned int *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride);
// vl_imsmooth_d
// file vl/imopv.c line 645
extern void vl_imsmooth_d(double *smoothed, unsigned long long int smoothedStride, const double *image, unsigned long long int width, unsigned long long int height, unsigned long long int stride, double sigmax, double sigmay);
// vl_imsmooth_f
// file vl/imopv.h line 113
extern void vl_imsmooth_f(float *smoothed, unsigned long long int smoothedStride, const float *image, unsigned long long int width, unsigned long long int height, unsigned long long int stride, double sigmax, double sigmay);
// vl_irodrigues
// file vl/rodrigues.c line 179
extern void vl_irodrigues(double *om_pt, double *dom_pt, const double *R_pt);
// vl_kdforest_build
// file vl/kdtree.c line 530
extern void vl_kdforest_build(struct _VlKDForest *self, unsigned long long int numData, const void *data);
// vl_kdforest_delete
// file vl/kdtree.c line 461
extern void vl_kdforest_delete(struct _VlKDForest *self);
// vl_kdforest_get_data_dimension
// file vl/kdtree.c line 1055
extern unsigned long long int vl_kdforest_get_data_dimension(const struct _VlKDForest *self);
// vl_kdforest_get_data_type
// file vl/kdtree.c line 1067
extern unsigned int vl_kdforest_get_data_type(const struct _VlKDForest *self);
// vl_kdforest_get_depth_of_tree
// file vl/kdtree.c line 966
extern unsigned long long int vl_kdforest_get_depth_of_tree(const struct _VlKDForest *self, unsigned long long int treeIndex);
// vl_kdforest_get_max_num_comparisons
// file vl/kdtree.c line 1013
extern unsigned long long int vl_kdforest_get_max_num_comparisons(struct _VlKDForest *self);
// vl_kdforest_get_num_nodes_of_tree
// file vl/kdtree.c line 952
extern unsigned long long int vl_kdforest_get_num_nodes_of_tree(const struct _VlKDForest *self, unsigned long long int treeIndex);
// vl_kdforest_get_num_trees
// file vl/kdtree.c line 980
extern unsigned long long int vl_kdforest_get_num_trees(const struct _VlKDForest *self);
// vl_kdforest_get_searcher
// file vl/kdtree.c line 443
extern struct _VlKDForestSearcher * vl_kdforest_get_searcher(const struct _VlKDForest *self, unsigned long long int pos);
// vl_kdforest_get_thresholding_method
// file vl/kdtree.c line 1043
extern enum _VlKDTreeThresholdingMethod vl_kdforest_get_thresholding_method(const struct _VlKDForest *self);
// vl_kdforest_neighbor_heap_down
// file vl/heap-def.h line 337
static inline void vl_kdforest_neighbor_heap_down(struct _VlKDForestNeighbor *array, unsigned long long int index);
// vl_kdforest_neighbor_heap_pop
// file vl/heap-def.h line 400
static inline unsigned long long int vl_kdforest_neighbor_heap_pop(struct _VlKDForestNeighbor *array, unsigned long long int *heapSize);
// vl_kdforest_neighbor_heap_push
// file vl/heap-def.h line 369
static inline void vl_kdforest_neighbor_heap_push(struct _VlKDForestNeighbor *array, unsigned long long int *heapSize);
// vl_kdforest_neighbor_heap_swap
// file vl/heap-def.h line 263
static inline void vl_kdforest_neighbor_heap_swap(struct _VlKDForestNeighbor *array, unsigned long long int indexA, unsigned long long int indexB);
// vl_kdforest_neighbor_heap_up
// file vl/heap-def.h line 288
static inline void vl_kdforest_neighbor_heap_up(struct _VlKDForestNeighbor *array, unsigned long long int heapSize, unsigned long long int index);
// vl_kdforest_neighbor_heap_update
// file vl/heap-def.h line 440
static inline void vl_kdforest_neighbor_heap_update(struct _VlKDForestNeighbor *array, unsigned long long int heapSize, unsigned long long int index);
// vl_kdforest_new
// file vl/kdtree.c line 332
extern struct _VlKDForest * vl_kdforest_new(unsigned int dataType, unsigned long long int dimension, unsigned long long int numTrees, enum _VlVectorComparisonType distance);
// vl_kdforest_new::_tmp::return_value_vl_get_vector_comparison_function_d_3_object
//
double return_value_vl_get_vector_comparison_function_d_3_object(unsigned long long int, const double *, const double *);

//

// vl_kdforest_new_searcher
// file vl/kdtree.c line 388
extern struct _VlKDForestSearcher * vl_kdforest_new_searcher(struct _VlKDForest *kdforest);
// vl_kdforest_query
// file vl/kdtree.c line 744
extern unsigned long long int vl_kdforest_query(struct _VlKDForest *self, struct _VlKDForestNeighbor *neighbors, unsigned long long int numNeighbors, const void *query);
// vl_kdforest_query_recursively
// file vl/kdtree.c line 585
unsigned long long int vl_kdforest_query_recursively(struct _VlKDForestSearcher *searcher, struct _VlKDTree *tree, unsigned long long int nodeIndex, struct _VlKDForestNeighbor *neighbors, unsigned long long int numNeighbors, unsigned long long int *numAddedNeighbors, double dist, const void *query);
// vl_kdforest_query_with_array
// file vl/kdtree.c line 870
extern unsigned long long int vl_kdforest_query_with_array(struct _VlKDForest *self, unsigned int *indexes, unsigned long long int numNeighbors, unsigned long long int numQueries, void *distances, const void *queries);
// vl_kdforest_search_heap_down
// file vl/heap-def.h line 337
static inline void vl_kdforest_search_heap_down(struct _VlKDForestSearchState *array, unsigned long long int index);
// vl_kdforest_search_heap_pop
// file vl/heap-def.h line 400
static inline unsigned long long int vl_kdforest_search_heap_pop(struct _VlKDForestSearchState *array, unsigned long long int *heapSize);
// vl_kdforest_search_heap_push
// file vl/heap-def.h line 369
static inline void vl_kdforest_search_heap_push(struct _VlKDForestSearchState *array, unsigned long long int *heapSize);
// vl_kdforest_search_heap_swap
// file vl/heap-def.h line 263
static inline void vl_kdforest_search_heap_swap(struct _VlKDForestSearchState *array, unsigned long long int indexA, unsigned long long int indexB);
// vl_kdforest_search_heap_up
// file vl/heap-def.h line 288
static inline void vl_kdforest_search_heap_up(struct _VlKDForestSearchState *array, unsigned long long int heapSize, unsigned long long int index);
// vl_kdforest_set_max_num_comparisons
// file vl/kdtree.c line 998
extern void vl_kdforest_set_max_num_comparisons(struct _VlKDForest *self, unsigned long long int n);
// vl_kdforest_set_thresholding_method
// file vl/kdtree.c line 1027
extern void vl_kdforest_set_thresholding_method(struct _VlKDForest *self, enum _VlKDTreeThresholdingMethod method);
// vl_kdforestsearcher_delete
// file vl/kdtree.c line 423
extern void vl_kdforestsearcher_delete(struct _VlKDForestSearcher *self);
// vl_kdforestsearcher_get_forest
// file vl/kdtree.c line 1079
struct _VlKDForest * vl_kdforestsearcher_get_forest(const struct _VlKDForestSearcher *self);
// vl_kdforestsearcher_query
// file vl/kdtree.c line 774
extern unsigned long long int vl_kdforestsearcher_query(struct _VlKDForestSearcher *self, struct _VlKDForestNeighbor *neighbors, unsigned long long int numNeighbors, const void *query);
// vl_kdtree_build_recursively
// file vl/kdtree.c line 166
static void vl_kdtree_build_recursively(struct _VlKDForest *forest, struct _VlKDTree *tree, unsigned long long int nodeIndex, unsigned long long int dataBegin, unsigned long long int dataEnd, unsigned int depth);
// vl_kdtree_calc_bounds_recursively
// file vl/kdtree.c line 491
static void vl_kdtree_calc_bounds_recursively(struct _VlKDTree *tree, unsigned long long int nodeIndex, double *searchBounds);
// vl_kdtree_compare_index_entries
// file vl/kdtree.c line 143
static inline signed int vl_kdtree_compare_index_entries(const void *a, const void *b);
// vl_kdtree_node_new
// file vl/kdtree.c line 120
static unsigned long long int vl_kdtree_node_new(struct _VlKDTree *tree, unsigned long long int parentIndex);
// vl_kdtree_split_heap_down
// file vl/heap-def.h line 337
static inline void vl_kdtree_split_heap_down(struct _VlKDTreeSplitDimension *array, unsigned long long int index);
// vl_kdtree_split_heap_push
// file vl/heap-def.h line 369
static inline void vl_kdtree_split_heap_push(struct _VlKDTreeSplitDimension *array, unsigned long long int *heapSize);
// vl_kdtree_split_heap_swap
// file vl/heap-def.h line 263
static inline void vl_kdtree_split_heap_swap(struct _VlKDTreeSplitDimension *array, unsigned long long int indexA, unsigned long long int indexB);
// vl_kdtree_split_heap_up
// file vl/heap-def.h line 288
static inline void vl_kdtree_split_heap_up(struct _VlKDTreeSplitDimension *array, unsigned long long int heapSize, unsigned long long int index);
// vl_kdtree_split_heap_update
// file vl/heap-def.h line 440
static inline void vl_kdtree_split_heap_update(struct _VlKDTreeSplitDimension *array, unsigned long long int heapSize, unsigned long long int index);
// vl_kmeans_cluster
// file vl/kmeans.h line 83
extern double vl_kmeans_cluster(struct _VlKMeans *self, const void *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters);

//


//


//

// vl_kmeans_delete
// file vl/kmeans.h line 75
extern void vl_kmeans_delete(struct _VlKMeans *self);
// vl_kmeans_get_centers
// file vl/kmeans.h line 252
static inline const void * vl_kmeans_get_centers(const struct _VlKMeans *self);
// vl_kmeans_init_centers_plus_plus
// file vl/kmeans.h line 118
extern void vl_kmeans_init_centers_plus_plus(struct _VlKMeans *self, const void *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters);
// vl_kmeans_init_centers_with_rand_data
// file vl/kmeans.c line 1841
extern void vl_kmeans_init_centers_with_rand_data(struct _VlKMeans *self, const void *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters);
// vl_kmeans_new
// file vl/kmeans.h line 73
extern struct _VlKMeans * vl_kmeans_new(unsigned int dataType, enum _VlVectorComparisonType distance);
// vl_kmeans_new_copy
// file vl/kmeans.c line 434
extern struct _VlKMeans * vl_kmeans_new_copy(const struct _VlKMeans *kmeans);
// vl_kmeans_quantize
// file vl/kmeans.h line 89
extern void vl_kmeans_quantize(struct _VlKMeans *self, unsigned int *assignments, void *distances, const void *data, unsigned long long int numData);
// vl_kmeans_quantize_ann
// file vl/kmeans.c line 1947
extern void vl_kmeans_quantize_ann(struct _VlKMeans *self, unsigned int *assignments, void *distances, const void *data, unsigned long long int numData, signed int update);
// vl_kmeans_refine_centers
// file vl/kmeans.c line 1984
extern double vl_kmeans_refine_centers(struct _VlKMeans *self, const void *data, unsigned long long int numData);
// vl_kmeans_reset
// file vl/kmeans.c line 386
extern void vl_kmeans_reset(struct _VlKMeans *self);
// vl_kmeans_set_algorithm
// file vl/kmeans.h line 362
static inline void vl_kmeans_set_algorithm(struct _VlKMeans *self, enum _VlKMeansAlgorithm algorithm);
// vl_kmeans_set_centers
// file vl/kmeans.c line 1806
extern void vl_kmeans_set_centers(struct _VlKMeans *self, const void *centers, unsigned long long int dimension, unsigned long long int numCenters);
// vl_kmeans_set_initialization
// file vl/kmeans.h line 385
static inline void vl_kmeans_set_initialization(struct _VlKMeans *self, enum _VlKMeansInitialization initialization);
// vl_kmeans_set_max_num_comparisons
// file vl/kmeans.h line 409
static inline void vl_kmeans_set_max_num_comparisons(struct _VlKMeans *self, unsigned long long int maxNumComparisons);
// vl_kmeans_set_max_num_iterations
// file vl/kmeans.h line 275
static inline void vl_kmeans_set_max_num_iterations(struct _VlKMeans *self, unsigned long long int maxNumIterations);
// vl_kmeans_set_num_repetitions
// file vl/kmeans.h line 299
static inline void vl_kmeans_set_num_repetitions(struct _VlKMeans *self, unsigned long long int numRepetitions);
// vl_kmeans_set_num_trees
// file vl/kmeans.h line 422
static inline void vl_kmeans_set_num_trees(struct _VlKMeans *self, unsigned long long int numTrees);
// vl_kmeans_set_verbosity
// file vl/kmeans.h line 240
static inline void vl_kmeans_set_verbosity(struct _VlKMeans *self, signed int verbosity);
// vl_lapack_dlasv2
// file vl/mathop.c line 713
extern void vl_lapack_dlasv2(double *smin, double *smax, double *sv, double *cv, double *su, double *cu, double f, double g, double h);
// vl_lbp_delete
// file vl/lbp.c line 238
extern void vl_lbp_delete(struct VlLbp_ *self);
// vl_lbp_get_dimension
// file vl/lbp.c line 248
extern unsigned long long int vl_lbp_get_dimension(struct VlLbp_ *self);
// vl_lbp_new
// file vl/lbp.c line 218
extern struct VlLbp_ * vl_lbp_new(enum _VlLbpMappingType type, signed int transposed);
// vl_lbp_process
// file vl/lbp.c line 270
extern void vl_lbp_process(struct VlLbp_ *self, float *features, float *image, unsigned long long int width, unsigned long long int height, unsigned long long int cellSize);
// vl_liopdesc_delete
// file vl/liop.c line 417
extern void vl_liopdesc_delete(struct _VlLiopDesc *self);
// vl_liopdesc_get_dimension
// file vl/liop.c line 569
extern unsigned long long int vl_liopdesc_get_dimension(const struct _VlLiopDesc *self);
// vl_liopdesc_get_intensity_threshold
// file vl/liop.c line 594
extern float vl_liopdesc_get_intensity_threshold(const struct _VlLiopDesc *self);
// vl_liopdesc_get_neighbourhood_radius
// file vl/liop.c line 625
extern double vl_liopdesc_get_neighbourhood_radius(const struct _VlLiopDesc *self);
// vl_liopdesc_get_num_neighbours
// file vl/liop.c line 581
extern unsigned long long int vl_liopdesc_get_num_neighbours(const struct _VlLiopDesc *self);
// vl_liopdesc_get_num_spatial_bins
// file vl/liop.c line 637
extern unsigned long long int vl_liopdesc_get_num_spatial_bins(const struct _VlLiopDesc *self);
// vl_liopdesc_new
// file vl/liop.c line 321
extern struct _VlLiopDesc * vl_liopdesc_new(signed int numNeighbours, signed int numSpatialBins, float radius, unsigned long long int sideLength);
// vl_liopdesc_new_basic
// file vl/liop.c line 405
extern struct _VlLiopDesc * vl_liopdesc_new_basic(unsigned long long int sideLength);
// vl_liopdesc_process
// file vl/liop.c line 442
extern void vl_liopdesc_process(struct _VlLiopDesc *self, float *desc, const float *patch);
// vl_liopdesc_set_intensity_threshold
// file vl/liop.c line 613
extern void vl_liopdesc_set_intensity_threshold(struct _VlLiopDesc *self, float x);
// vl_lock_state
// file vl/generic.c line 946
static void vl_lock_state(void);
// vl_log2_d
// file vl/mathop.h line 262
static inline double vl_log2_d(double x);
// vl_log2_d_link1
// file vl/mathop.h line 262
static inline double vl_log2_d_link1(double x_link1);
// vl_log2_d_link2
// file vl/mathop.h line 262
static inline double vl_log2_d_link2(double x_link2);
// vl_log2_f
// file vl/mathop.h line 275
static inline float vl_log2_f(float x);
// vl_malloc
// file vl/generic.h line 143
extern void * vl_malloc(unsigned long int n);
// vl_mod_2pi_f
// file vl/mathop.h line 110
static inline float vl_mod_2pi_f(float x);
// vl_mser_delete
// file vl/mser.c line 383
extern void vl_mser_delete(struct _VlMserFilt *f);
// vl_mser_ell_fit
// file vl/mser.c line 886
extern void vl_mser_ell_fit(struct _VlMserFilt *f);
// vl_mser_new
// file vl/mser.c line 319
extern struct _VlMserFilt * vl_mser_new(signed int ndims, const signed int *dims);
// vl_mser_process
// file vl/mser.c line 419
extern void vl_mser_process(struct _VlMserFilt *f, const unsigned char *im);
// vl_pgm_extract_data
// file vl/pgm.c line 263
extern signed int vl_pgm_extract_data(struct _IO_FILE *f, const struct _VlPgmImage *im, void *data);
// vl_pgm_extract_head
// file vl/pgm.c line 161
extern signed int vl_pgm_extract_head(struct _IO_FILE *f, struct _VlPgmImage *im);
// vl_pgm_get_bpp
// file vl/pgm.c line 140
extern unsigned long long int vl_pgm_get_bpp(const struct _VlPgmImage *im);
// vl_pgm_get_npixels
// file vl/pgm.c line 125
extern unsigned long long int vl_pgm_get_npixels(const struct _VlPgmImage *im);
// vl_pgm_insert
// file vl/pgm.c line 337
extern signed int vl_pgm_insert(struct _IO_FILE *f, const struct _VlPgmImage *im, const void *data);
// vl_pgm_read_new
// file vl/pgm.c line 394
extern signed int vl_pgm_read_new(const char *name, struct _VlPgmImage *im, unsigned char **data);
// vl_pgm_read_new_f
// file vl/pgm.c line 443
extern signed int vl_pgm_read_new_f(const char *name, struct _VlPgmImage *im, float **data);
// vl_pgm_write
// file vl/pgm.c line 480
extern signed int vl_pgm_write(const char *name, const unsigned char *data, signed int width, signed int height);
// vl_pgm_write_f
// file vl/pgm.c line 517
extern signed int vl_pgm_write_f(const char *name, const float *data, signed int width, signed int height);
// vl_quickshift_delete
// file vl/quickshift.c line 456
extern void vl_quickshift_delete(struct _VlQS *q);
// vl_quickshift_distance
// file vl/quickshift.c line 154
static inline double vl_quickshift_distance(const double *I, signed int N1, signed int N2, signed int K, signed int i1, signed int i2, signed int j1, signed int j2);
// vl_quickshift_inner
// file vl/quickshift.c line 198
static inline double vl_quickshift_inner(const double *I, signed int N1, signed int N2, signed int K, signed int i1, signed int i2, signed int j1, signed int j2);
// vl_quickshift_new
// file vl/quickshift.c line 231
extern struct _VlQS * vl_quickshift_new(const double *image, signed int height, signed int width, signed int channels);
// vl_quickshift_process
// file vl/quickshift.c line 258
extern void vl_quickshift_process(struct _VlQS *q);
// vl_rand_init
// file vl/random.h line 29
extern void vl_rand_init(struct _VlRand *self);
// vl_rand_int31
// file ./vl/random.h line 106
static inline signed int vl_rand_int31(struct _VlRand *self);
// vl_rand_permute_indexes
// file vl/random.h line 50
extern void vl_rand_permute_indexes(struct _VlRand *self, signed long long int *array, unsigned long long int size);
// vl_rand_real1
// file vl/random.h line 117
static inline double vl_rand_real1(struct _VlRand *self);
// vl_rand_seed
// file vl/random.c line 144
extern void vl_rand_seed(struct _VlRand *self, unsigned int s);
// vl_rand_seed_by_array
// file vl/random.c line 170
extern void vl_rand_seed_by_array(struct _VlRand *self, const unsigned int *key, unsigned long long int keySize);
// vl_rand_uindex
// file vl/random.h line 65
static inline unsigned long long int vl_rand_uindex(struct _VlRand *self, unsigned long long int range);
// vl_rand_uindex_link1
// file vl/random.h line 65
static inline unsigned long long int vl_rand_uindex_link1(struct _VlRand *self_link1, unsigned long long int range_link1);
// vl_rand_uint32
// file ./vl/random.h line 41
extern unsigned int vl_rand_uint32(struct _VlRand *self);
// vl_rand_uint64
// file vl/random.h line 82
static inline unsigned long long int vl_rand_uint64(struct _VlRand *self);
// vl_rand_uint64_link1
// file vl/random.h line 82
static inline unsigned long long int vl_rand_uint64_link1(struct _VlRand *self_link1);
// vl_realloc
// file vl/generic.h line 144
extern void * vl_realloc(void *ptr, unsigned long int n);
// vl_refine_local_extreum_2
// file vl/covdet.c line 1332
extern signed int vl_refine_local_extreum_2(struct _VlCovDetExtremum2 *refined, const float *map, unsigned long long int width, unsigned long long int height, signed long long int x, signed long long int y);
// vl_refine_local_extreum_3
// file vl/covdet.c line 1206
extern signed int vl_refine_local_extreum_3(struct _VlCovDetExtremum3 *refined, const float *map, unsigned long long int width, unsigned long long int height, unsigned long long int depth, signed long long int x, signed long long int y, signed long long int z);
// vl_rodrigues
// file vl/rodrigues.c line 27
extern void vl_rodrigues(double *R_pt, double *dR_pt, const double *om_pt);
// vl_round_d
// file vl/mathop.h line 212
static inline signed long int vl_round_d(double x);
// vl_round_d_link1
// file vl/mathop.h line 212
static inline signed long int vl_round_d_link1(double x_link1);
// vl_scalespace_delete
// file vl/scalespace.h line 74
extern void vl_scalespace_delete(struct _VlScaleSpace *self);
// vl_scalespace_get_default_geometry
// file vl/scalespace.h line 69
extern struct _VlScaleSpaceGeometry vl_scalespace_get_default_geometry(unsigned long long int width, unsigned long long int height);
// vl_scalespace_get_geometry
// file vl/scalespace.h line 87
extern struct _VlScaleSpaceGeometry vl_scalespace_get_geometry(const struct _VlScaleSpace *self);
// vl_scalespace_get_level
// file vl/scalespace.h line 90
extern float * vl_scalespace_get_level(struct _VlScaleSpace *self, signed long long int o, signed long long int s);
// vl_scalespace_get_level_const
// file vl/scalespace.c line 415
extern const float * vl_scalespace_get_level_const(const struct _VlScaleSpace *self, signed long long int o, signed long long int s);
// vl_scalespace_get_level_sigma
// file vl/scalespace.h line 94
extern double vl_scalespace_get_level_sigma(const struct _VlScaleSpace *self, signed long long int o, signed long long int s);
// vl_scalespace_get_octave_geometry
// file vl/scalespace.h line 88
extern struct _VlScaleSpaceOctaveGeometry vl_scalespace_get_octave_geometry(const struct _VlScaleSpace *self, signed long long int o);
// vl_scalespace_new
// file vl/scalespace.c line 536
extern struct _VlScaleSpace * vl_scalespace_new(unsigned long long int width, unsigned long long int height);
// vl_scalespace_new_copy
// file vl/scalespace.c line 604
extern struct _VlScaleSpace * vl_scalespace_new_copy(struct _VlScaleSpace *self);
// vl_scalespace_new_shallow_copy
// file vl/scalespace.c line 629
extern struct _VlScaleSpace * vl_scalespace_new_shallow_copy(struct _VlScaleSpace *self);
// vl_scalespace_new_with_geometry
// file vl/scalespace.h line 71
extern struct _VlScaleSpace * vl_scalespace_new_with_geometry(struct _VlScaleSpaceGeometry geom);
// vl_scalespace_put_image
// file vl/scalespace.h line 81
extern void vl_scalespace_put_image(struct _VlScaleSpace *self, const float *image);
// vl_scalespacegeometry_is_equal
// file vl/scalespace.h line 45
extern signed int vl_scalespacegeometry_is_equal(struct _VlScaleSpaceGeometry a, struct _VlScaleSpaceGeometry b);
// vl_set_alloc_func
// file vl/generic.c line 1289
extern void vl_set_alloc_func(void * (*malloc_func)(unsigned long int), void * (*realloc_func)(void *, unsigned long int), void * (*calloc_func)(unsigned long int, unsigned long int), void (*free_func)(void *));

//


//


//


//

// vl_set_last_error
// file vl/generic.h line 132
extern signed int vl_set_last_error(signed int error, const char *errorMessage, ...);
// vl_set_num_threads
// file vl/generic.c line 1208
extern void vl_set_num_threads(unsigned long long int numThreads);
// vl_set_printf_func
// file vl/generic.c line 1372
extern void vl_set_printf_func(signed int (*printf_func)(const char *, ...));

//

// vl_set_simd_enabled
// file vl/generic.c line 1072
extern void vl_set_simd_enabled(signed int x);
// vl_slic_segment
// file vl/slic.c line 170
extern void vl_slic_segment(unsigned int *segmentation, const float *image, unsigned long long int width, unsigned long long int height, unsigned long long int numChannels, unsigned long long int regionSize, float regularization, unsigned long long int minRegionSize);
// vl_solve_linear_system_2
// file vl/mathop.c line 872
extern signed int vl_solve_linear_system_2(double *x, const double *A, const double *b);
// vl_solve_linear_system_3
// file vl/mathop.c line 839
extern signed int vl_solve_linear_system_3(double *x, const double *A, const double *b);
// vl_sqrt_d
// file vl/mathop.h line 292
static inline double vl_sqrt_d(double x);
// vl_sqrt_d_link1
// file vl/mathop.h line 292
static inline double vl_sqrt_d_link1(double x_link1);
// vl_sqrt_f
// file vl/mathop.h line 303
static inline float vl_sqrt_f(float x);
// vl_sqrt_f_link1
// file vl/mathop.h line 303
static inline float vl_sqrt_f_link1(float x_link1);
// vl_static_configuration_to_string_copy
// file vl/host.c line 505
extern char * vl_static_configuration_to_string_copy();
// vl_string_basename
// file vl/stringop.c line 163
extern unsigned long long int vl_string_basename(char *destination, unsigned long long int destinationSize, const char *source, unsigned long long int maxNumStrippedExtensions);
// vl_string_casei_cmp
// file vl/stringop.c line 377
extern signed int vl_string_casei_cmp(const char *string1, const char *string2);
// vl_string_copy
// file vl/stringop.c line 274
extern unsigned long long int vl_string_copy(char *destination, unsigned long long int destinationSize, const char *source);
// vl_string_copy_sub
// file vl/stringop.c line 311
extern unsigned long long int vl_string_copy_sub(char *destination, unsigned long long int destinationSize, const char *beginning, const char *end);
// vl_string_find_char_rev
// file vl/stringop.c line 345
extern char * vl_string_find_char_rev(const char *beginning, const char *end, char c);
// vl_string_length
// file vl/stringop.c line 362
extern unsigned long long int vl_string_length(const char *string);
// vl_string_parse_protocol
// file vl/stringop.c line 83
extern char * vl_string_parse_protocol(const char *string, signed int *protocol);
// vl_string_protocol_name
// file vl/stringop.c line 126
extern const char * vl_string_protocol_name(signed int protocol);
// vl_string_replace_wildcard
// file vl/stringop.c line 214
extern unsigned long long int vl_string_replace_wildcard(char *destination, unsigned long long int destinationSize, const char *source, char wildcardChar, char escapeChar, const char *replacement);
// vl_svd2
// file vl/mathop.c line 641
extern void vl_svd2(double *S, double *U, double *V, const double *M);
// vl_svm_delete
// file vl/svm.c line 1097
extern void vl_svm_delete(struct VlSvm_ *self);
// vl_svm_get_bias
// file vl/svm.c line 1422
extern double vl_svm_get_bias(const struct VlSvm_ *self);
// vl_svm_get_bias_learning_rate
// file vl/svm.c line 1160
extern double vl_svm_get_bias_learning_rate(const struct VlSvm_ *self);
// vl_svm_get_bias_multiplier
// file vl/svm.c line 1186
extern double vl_svm_get_bias_multiplier(const struct VlSvm_ *self);
// vl_svm_get_diagnostic_frequency
// file vl/svm.c line 1260
extern unsigned long long int vl_svm_get_diagnostic_frequency(const struct VlSvm_ *self);
// vl_svm_get_dimension
// file vl/svm.c line 1348
extern unsigned long long int vl_svm_get_dimension(struct VlSvm_ *self);
// vl_svm_get_epsilon
// file vl/svm.c line 1135
extern double vl_svm_get_epsilon(const struct VlSvm_ *self);
// vl_svm_get_iteration_number
// file vl/svm.c line 1212
extern unsigned long long int vl_svm_get_iteration_number(const struct VlSvm_ *self);
// vl_svm_get_lambda
// file vl/svm.c line 1300
extern double vl_svm_get_lambda(const struct VlSvm_ *self);
// vl_svm_get_max_num_iterations
// file vl/svm.c line 1234
extern unsigned long long int vl_svm_get_max_num_iterations(const struct VlSvm_ *self);
// vl_svm_get_model
// file vl/svm.c line 1374
extern const double * vl_svm_get_model(const struct VlSvm_ *self);
// vl_svm_get_num_data
// file vl/svm.c line 1361
extern unsigned long long int vl_svm_get_num_data(struct VlSvm_ *self);
// vl_svm_get_scores
// file vl/svm.c line 1448
extern const double * vl_svm_get_scores(const struct VlSvm_ *self);
// vl_svm_get_solver
// file vl/svm.c line 1271
extern enum anonymous_6 vl_svm_get_solver(const struct VlSvm_ *self);
// vl_svm_get_statistics
// file vl/svm.c line 1433
extern const struct VlSvmStatistics_ * vl_svm_get_statistics(const struct VlSvm_ *self);
// vl_svm_get_weights
// file vl/svm.c line 1331
extern const double * vl_svm_get_weights(const struct VlSvm_ *self);
// vl_svm_hinge2_conjugate_loss
// file vl/svm.c line 1667
extern double vl_svm_hinge2_conjugate_loss(double u, double label);
// vl_svm_hinge2_dca_update
// file vl/svm.c line 1678
extern double vl_svm_hinge2_dca_update(double alpha, double inner, double norm2, double label);
// vl_svm_hinge2_loss
// file vl/svm.c line 1646
extern double vl_svm_hinge2_loss(double inner, double label);
// vl_svm_hinge2_loss_derivative
// file vl/svm.c line 1655
extern double vl_svm_hinge2_loss_derivative(double inner, double label);
// vl_svm_hinge_conjugate_loss
// file vl/svm.c line 1626
extern double vl_svm_hinge_conjugate_loss(double u, double label);
// vl_svm_hinge_dca_update
// file vl/svm.c line 1638
extern double vl_svm_hinge_dca_update(double alpha, double inner, double norm2, double label);
// vl_svm_hinge_loss
// file vl/svm.c line 1603
extern double vl_svm_hinge_loss(double inner, double label);
// vl_svm_hinge_loss_derivative
// file vl/svm.c line 1611
extern double vl_svm_hinge_loss_derivative(double inner, double label);
// vl_svm_l1_conjugate_loss
// file vl/svm.c line 1706
extern double vl_svm_l1_conjugate_loss(double u, double label);
// vl_svm_l1_dca_update
// file vl/svm.c line 1717
extern double vl_svm_l1_dca_update(double alpha, double inner, double norm2, double label);
// vl_svm_l1_loss
// file vl/svm.c line 1686
extern double vl_svm_l1_loss(double inner, double label);
// vl_svm_l1_loss_derivative
// file vl/svm.c line 1694
extern double vl_svm_l1_loss_derivative(double inner, double label);
// vl_svm_l2_conjugate_loss
// file vl/svm.c line 1746
extern double vl_svm_l2_conjugate_loss(double u, double label);
// vl_svm_l2_dca_update
// file vl/svm.c line 1753
extern double vl_svm_l2_dca_update(double alpha, double inner, double norm2, double label);
// vl_svm_l2_loss
// file vl/svm.c line 1729
extern double vl_svm_l2_loss(double inner, double label);
// vl_svm_l2_loss_derivative
// file vl/svm.c line 1738
extern double vl_svm_l2_loss_derivative(double inner, double label);
// vl_svm_logistic_conjugate_loss
// file vl/svm.c line 1789
extern double vl_svm_logistic_conjugate_loss(double u, double label);
// vl_svm_logistic_dca_update
// file vl/svm.c line 1801
extern double vl_svm_logistic_dca_update(double alpha, double inner, double norm2, double label);
// vl_svm_logistic_loss
// file vl/svm.c line 1760
extern double vl_svm_logistic_loss(double inner, double label);
// vl_svm_logistic_loss_derivative
// file vl/svm.c line 1773
extern double vl_svm_logistic_loss_derivative(double inner, double label);
// vl_svm_new
// file vl/svm.c line 957
extern struct VlSvm_ * vl_svm_new(enum anonymous_6 type, const double *data, unsigned long long int dimension, unsigned long long int numData, const double *labels, double lambda);
// vl_svm_new_with_abstract_data
// file vl/svm.c line 1014
extern struct VlSvm_ * vl_svm_new_with_abstract_data(enum anonymous_6 solver, void *data, unsigned long long int dimension, unsigned long long int numData, const double *labels, double lambda);
// vl_svm_new_with_dataset
// file vl/svm.c line 980
extern struct VlSvm_ * vl_svm_new_with_dataset(enum anonymous_6 solver, struct VlSvmDataset_ *dataset, const double *labels, double lambda);
// vl_svm_new_with_dataset::_tmp::return_value_vl_svmdataset_get_accumulate_function_4_object
//
void return_value_vl_svmdataset_get_accumulate_function_4_object(const void *, unsigned long long int, double *, double);
// vl_svm_new_with_dataset::_tmp::return_value_vl_svmdataset_get_inner_product_function_3_object
//
double return_value_vl_svmdataset_get_inner_product_function_3_object(const void *, unsigned long long int, double *);
// vl_svm_set_bias
// file vl/svm.c line 1406
extern void vl_svm_set_bias(struct VlSvm_ *self, double b);
// vl_svm_set_bias_learning_rate
// file vl/svm.c line 1148
extern void vl_svm_set_bias_learning_rate(struct VlSvm_ *self, double rate);
// vl_svm_set_bias_multiplier
// file vl/svm.c line 1174
extern void vl_svm_set_bias_multiplier(struct VlSvm_ *self, double b);
// vl_svm_set_conjugate_loss_function
// file vl/svm.c line 1529
extern void vl_svm_set_conjugate_loss_function(struct VlSvm_ *self, double (*f)(double, double));

//

// vl_svm_set_data_functions
// file vl/svm.c line 1492
extern void vl_svm_set_data_functions(struct VlSvm_ *self, double (*inner)(const void *, unsigned long long int, double *), void (*acc)(const void *, unsigned long long int, double *, double));
// vl_svm_set_data_functions::acc_object
//
void acc_object(const void *, unsigned long long int, double *, double);
// vl_svm_set_data_functions::inner_object
//
double inner_object(const void *, unsigned long long int, double *);
// vl_svm_set_dca_update_function
// file vl/svm.c line 1539
extern void vl_svm_set_dca_update_function(struct VlSvm_ *self, double (*f)(double, double, double, double));

//

// vl_svm_set_diagnostic_frequency
// file vl/svm.c line 1248
extern void vl_svm_set_diagnostic_frequency(struct VlSvm_ *self, unsigned long long int f);
// vl_svm_set_diagnostic_function
// file vl/svm.c line 1479
extern void vl_svm_set_diagnostic_function(struct VlSvm_ *self, void (*f)(struct VlSvm_ *, void *), void *data);

//

// vl_svm_set_epsilon
// file vl/svm.c line 1123
extern void vl_svm_set_epsilon(struct VlSvm_ *self, double epsilon);
// vl_svm_set_iteration_number
// file vl/svm.c line 1201
extern void vl_svm_set_iteration_number(struct VlSvm_ *self, unsigned long long int n);
// vl_svm_set_lambda
// file vl/svm.c line 1288
void vl_svm_set_lambda(struct VlSvm_ *self, double lambda);
// vl_svm_set_loss
// file vl/svm.c line 1552
extern void vl_svm_set_loss(struct VlSvm_ *self, enum anonymous_9 loss);
// vl_svm_set_loss_derivative_function
// file vl/svm.c line 1519
extern void vl_svm_set_loss_derivative_function(struct VlSvm_ *self, double (*f)(double, double));

//

// vl_svm_set_loss_function
// file vl/svm.c line 1509
extern void vl_svm_set_loss_function(struct VlSvm_ *self, double (*f)(double, double));

//

// vl_svm_set_max_num_iterations
// file vl/svm.c line 1223
extern void vl_svm_set_max_num_iterations(struct VlSvm_ *self, unsigned long long int n);
// vl_svm_set_model
// file vl/svm.c line 1389
extern void vl_svm_set_model(struct VlSvm_ *self, const double *model);
// vl_svm_set_weights
// file vl/svm.c line 1320
extern void vl_svm_set_weights(struct VlSvm_ *self, const double *weights);
// vl_svm_train
// file vl/svm.c line 2156
extern void vl_svm_train(struct VlSvm_ *self);
// vl_svmdataset_accumulate_d
// file vl/svmdataset.c line 344
void vl_svmdataset_accumulate_d(const struct VlSvmDataset_ *self, unsigned long long int element, double *model, const double multiplier);
// vl_svmdataset_accumulate_f
// file vl/svmdataset.c line 344
void vl_svmdataset_accumulate_f(const struct VlSvmDataset_ *self, unsigned long long int element, double *model, const double multiplier);
// vl_svmdataset_accumulate_hom_d
// file vl/svmdataset.c line 381
void vl_svmdataset_accumulate_hom_d(const struct VlSvmDataset_ *self, unsigned long long int element, double *model, const double multiplier);
// vl_svmdataset_accumulate_hom_f
// file vl/svmdataset.c line 381
void vl_svmdataset_accumulate_hom_f(const struct VlSvmDataset_ *self, unsigned long long int element, double *model, const double multiplier);
// vl_svmdataset_delete
// file vl/svmdataset.c line 164
extern void vl_svmdataset_delete(struct VlSvmDataset_ *self);
// vl_svmdataset_get_accumulate_function
// file vl/svmdataset.c line 260
extern void (*vl_svmdataset_get_accumulate_function(const struct VlSvmDataset_ *self))(const void *, unsigned long long int, double *, double);
// vl_svmdataset_get_data
// file vl/svmdataset.c line 179
extern void * vl_svmdataset_get_data(const struct VlSvmDataset_ *self);
// vl_svmdataset_get_dimension
// file vl/svmdataset.c line 201
extern unsigned long long int vl_svmdataset_get_dimension(const struct VlSvmDataset_ *self);
// vl_svmdataset_get_homogeneous_kernel_map
// file vl/svmdataset.c line 215
extern struct _VlHomogeneousKernelMap * vl_svmdataset_get_homogeneous_kernel_map(const struct VlSvmDataset_ *self);
// vl_svmdataset_get_inner_product_function
// file vl/svmdataset.c line 291
extern double (*vl_svmdataset_get_inner_product_function(const struct VlSvmDataset_ *self))(const void *, unsigned long long int, double *);
// vl_svmdataset_get_num_data
// file vl/svmdataset.c line 190
extern unsigned long long int vl_svmdataset_get_num_data(const struct VlSvmDataset_ *self);
// vl_svmdataset_new
// file vl/svmdataset.c line 138
extern struct VlSvmDataset_ * vl_svmdataset_new(unsigned int dataType, void *data, unsigned long long int dimension, unsigned long long int numData);
// vl_svmdataset_set_homogeneous_kernel_map
// file vl/svmdataset.c line 238
extern void vl_svmdataset_set_homogeneous_kernel_map(struct VlSvmDataset_ *self, struct _VlHomogeneousKernelMap *hom);
// vl_thread_specific_state_new
// file vl/generic.c line 1475
static struct _VlThreadState * vl_thread_specific_state_new(void);
// vl_tic
// file ./vl/generic.h line 204
extern void vl_tic(void);
// vl_toc
// file ./vl/generic.h line 205
extern double vl_toc(void);
// vl_unlock_state
// file vl/generic.c line 979
static void vl_unlock_state(void);
// vl_vlad_encode
// file vl/vlad.c line 293
extern void vl_vlad_encode(void *enc, unsigned int dataType, const void *means, unsigned long long int dimension, unsigned long long int numClusters, const void *data, unsigned long long int numData, const void *assignments, signed int flags);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// xdelete
// file vl/hikmeans.c line 160
static void xdelete(struct _VlHIKMNode *node);
// xlogx
// file vl/svm.c line 1780
static inline double xlogx(double x);
// xmeans
// file vl/hikmeans.c line 104
static struct _VlHIKMNode * xmeans(struct _VlHIKMTree *tree, const unsigned char *data, unsigned long long int N, unsigned long long int K, unsigned long long int height);

//


struct anonymous_2
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

struct anonymous_5
{
  // w
  signed long long int w;
  // j
  signed long long int j;
};

union anonymous_11
{
  // string
  char string[32l];
  // words
  unsigned int words[8l];
};

union anonymous_1
{
  // __data
  struct anonymous_2 __data;
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

union anonymous_0
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous_8
{
  // raw
  unsigned int raw;
  // value
  float value;
};

union anonymous
{
  // raw
  unsigned long long int raw;
  // value
  double value;
};

struct VlHog_
{
  // variant
  enum VlHogVariant_ variant;
  // dimension
  unsigned long long int dimension;
  // numOrientations
  unsigned long long int numOrientations;
  // transposed
  signed int transposed;
  // useBilinearOrientationAssigment
  signed int useBilinearOrientationAssigment;
  // permutation
  signed long long int *permutation;
  // glyphs
  float *glyphs;
  // glyphSize
  unsigned long long int glyphSize;
  // orientationX
  float *orientationX;
  // orientationY
  float *orientationY;
  // hog
  float *hog;
  // hogNorm
  float *hogNorm;
  // hogWidth
  unsigned long long int hogWidth;
  // hogHeight
  unsigned long long int hogHeight;
};

struct VlLbp_
{
  // dimension
  unsigned long long int dimension;
  // mapping
  unsigned char mapping[256l];
  // transposed
  signed int transposed;
};

struct VlSvmDataset_
{
  // dataType
  unsigned int dataType;
  // data
  void *data;
  // numData
  unsigned long long int numData;
  // dimension
  unsigned long long int dimension;
  // hom
  struct _VlHomogeneousKernelMap *hom;
  // homBuffer
  void *homBuffer;
  // homDimension
  unsigned long long int homDimension;
};

struct VlSvmStatistics_
{
  // status
  enum anonymous_7 status;
  // iteration
  unsigned long long int iteration;
  // epoch
  unsigned long long int epoch;
  // objective
  double objective;
  // regularizer
  double regularizer;
  // loss
  double loss;
  // dualObjective
  double dualObjective;
  // dualLoss
  double dualLoss;
  // dualityGap
  double dualityGap;
  // scoresVariation
  double scoresVariation;
  // elapsedTime
  double elapsedTime;
};

struct VlSvm_
{
  // solver
  enum anonymous_6 solver;
  // dimension
  unsigned long long int dimension;
  // model
  double *model;
  // bias
  double bias;
  // biasMultiplier
  double biasMultiplier;
  // lambda
  double lambda;
  // data
  const void *data;
  // numData
  unsigned long long int numData;
  // labels
  const double *labels;
  // weights
  const double *weights;
  // ownDataset
  struct VlSvmDataset_ *ownDataset;
  // diagnosticFn
  void (*diagnosticFn)(struct VlSvm_ *, void *);
  // diagnosticFnData
  void *diagnosticFnData;
  // diagnosticFrequency
  unsigned long long int diagnosticFrequency;
  // lossFn
  double (*lossFn)(double, double);
  // conjugateLossFn
  double (*conjugateLossFn)(double, double);
  // lossDerivativeFn
  double (*lossDerivativeFn)(double, double);
  // dcaUpdateFn
  double (*dcaUpdateFn)(double, double, double, double);
  // innerProductFn
  double (*innerProductFn)(const void *, unsigned long long int, double *);
  // accumulateFn
  void (*accumulateFn)(const void *, unsigned long long int, double *, double);
  // iteration
  unsigned long long int iteration;
  // maxNumIterations
  unsigned long long int maxNumIterations;
  // epsilon
  double epsilon;
  // statistics
  struct VlSvmStatistics_ statistics;
  // scores
  double *scores;
  // biasLearningRate
  double biasLearningRate;
  // alpha
  double *alpha;
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

struct _VlAIB
{
  // nodes
  unsigned int *nodes;
  // nentries
  unsigned int nentries;
  // beta
  double *beta;
  // bidx
  unsigned int *bidx;
  // which
  unsigned int *which;
  // nwhich
  unsigned int nwhich;
  // Pcx
  double *Pcx;
  // Px
  double *Px;
  // Pc
  double *Pc;
  // nvalues
  unsigned int nvalues;
  // nlabels
  unsigned int nlabels;
  // parents
  unsigned int *parents;
  // costs
  double *costs;
  // verbosity
  unsigned int verbosity;
};

struct _VlArray
{
  // type
  unsigned int type;
  // isEnvelope
  signed int isEnvelope;
  // isSparse
  signed int isSparse;
  // numDimensions
  unsigned long long int numDimensions;
  // dimensions
  unsigned long long int dimensions[16l];
  // data
  void *data;
  // rowPointers
  void *rowPointers;
  // columnPointers
  void *columnPointers;
};

struct _VlCovDetFeatureOrientation
{
  // angle
  double angle;
  // score
  double score;
};

struct _VlCovDetFeatureLaplacianScale
{
  // scale
  double scale;
  // score
  double score;
};

struct _VlCovDet
{
  // gss
  struct _VlScaleSpace *gss;
  // css
  struct _VlScaleSpace *css;
  // method
  enum _VlCovDetMethod method;
  // peakThreshold
  double peakThreshold;
  // edgeThreshold
  double edgeThreshold;
  // lapPeakThreshold
  double lapPeakThreshold;
  // octaveResolution
  unsigned long long int octaveResolution;
  // firstOctave
  signed long long int firstOctave;
  // nonExtremaSuppression
  double nonExtremaSuppression;
  // numNonExtremaSuppressed
  unsigned long long int numNonExtremaSuppressed;
  // features
  struct _VlCovDetFeature *features;
  // numFeatures
  unsigned long long int numFeatures;
  // numFeatureBufferSize
  unsigned long long int numFeatureBufferSize;
  // patch
  float *patch;
  // patchBufferSize
  unsigned long long int patchBufferSize;
  // transposed
  signed int transposed;
  // orientations
  struct _VlCovDetFeatureOrientation orientations[4l];
  // scales
  struct _VlCovDetFeatureLaplacianScale scales[4l];
  // aaAccurateSmoothing
  signed int aaAccurateSmoothing;
  // aaPatch
  float aaPatch[1681l];
  // aaPatchX
  float aaPatchX[1681l];
  // aaPatchY
  float aaPatchY[1681l];
  // aaMask
  float aaMask[1681l];
  // lapPatch
  float lapPatch[1089l];
  // laplacians
  float laplacians[10890l];
  // numFeaturesWithNumScales
  unsigned long long int numFeaturesWithNumScales[5l];
};

struct _VlCovDetExtremum2
{
  // xi
  signed long long int xi;
  // yi
  signed long long int yi;
  // x
  float x;
  // y
  float y;
  // peakScore
  float peakScore;
  // edgeScore
  float edgeScore;
};

struct _VlCovDetExtremum3
{
  // xi
  signed long long int xi;
  // yi
  signed long long int yi;
  // zi
  signed long long int zi;
  // x
  float x;
  // y
  float y;
  // z
  float z;
  // peakScore
  float peakScore;
  // edgeScore
  float edgeScore;
};

struct _VlFrameOrientedEllipse
{
  // x
  float x;
  // y
  float y;
  // a11
  float a11;
  // a12
  float a12;
  // a21
  float a21;
  // a22
  float a22;
};

struct _VlCovDetFeature
{
  // frame
  struct _VlFrameOrientedEllipse frame;
  // peakScore
  float peakScore;
  // edgeScore
  float edgeScore;
  // orientationScore
  float orientationScore;
  // laplacianScaleScore
  float laplacianScaleScore;
};

struct _VlEnumerator
{
  // name
  const char *name;
  // value
  signed long long int value;
};

struct _VlGMM
{
  // dataType
  unsigned int dataType;
  // dimension
  unsigned long long int dimension;
  // numClusters
  unsigned long long int numClusters;
  // numData
  unsigned long long int numData;
  // maxNumIterations
  unsigned long long int maxNumIterations;
  // numRepetitions
  unsigned long long int numRepetitions;
  // verbosity
  signed int verbosity;
  // means
  void *means;
  // covariances
  void *covariances;
  // priors
  void *priors;
  // posteriors
  void *posteriors;
  // sigmaLowBound
  double *sigmaLowBound;
  // initialization
  enum _VlGMMInitialization initialization;
  // kmeansInit
  struct _VlKMeans *kmeansInit;
  // LL
  double LL;
  // kmeansInitIsOwner
  signed int kmeansInitIsOwner;
};

struct _VlHIKMNode
{
  // filter
  struct _VlIKMFilt *filter;
  // children
  struct _VlHIKMNode **children;
};

struct _VlHIKMTree
{
  // M
  unsigned long long int M;
  // K
  unsigned long long int K;
  // depth
  unsigned long long int depth;
  // max_niters
  unsigned long long int max_niters;
  // method
  signed int method;
  // verb
  signed int verb;
  // root
  struct _VlHIKMNode *root;
};

struct _VlHomogeneousKernelMap
{
  // kernelType
  enum anonymous_3 kernelType;
  // gamma
  double gamma;
  // windowType
  enum anonymous_4 windowType;
  // order
  unsigned long long int order;
  // period
  double period;
  // numSubdivisions
  unsigned long long int numSubdivisions;
  // subdivision
  double subdivision;
  // minExponent
  signed long long int minExponent;
  // maxExponent
  signed long long int maxExponent;
  // table
  double *table;
};

struct _VlIKMFilt
{
  // M
  unsigned long long int M;
  // K
  unsigned long long int K;
  // max_niters
  unsigned long long int max_niters;
  // method
  signed int method;
  // verb
  signed int verb;
  // centers
  signed int *centers;
  // inter_dist
  signed int *inter_dist;
};

struct _VlKDTreeSplitDimension
{
  // dimension
  unsigned int dimension;
  // mean
  double mean;
  // variance
  double variance;
};

struct _VlKDForest
{
  // dimension
  unsigned long long int dimension;
  // rand
  struct _VlRand *rand;
  // dataType
  unsigned int dataType;
  // data
  const void *data;
  // numData
  unsigned long long int numData;
  // distance
  enum _VlVectorComparisonType distance;
  // distanceFunction
  void (*distanceFunction)(void);
  // trees
  struct _VlKDTree **trees;
  // numTrees
  unsigned long long int numTrees;
  // thresholdingMethod
  enum _VlKDTreeThresholdingMethod thresholdingMethod;
  // splitHeapArray
  struct _VlKDTreeSplitDimension splitHeapArray[5l];
  // splitHeapNumNodes
  unsigned long long int splitHeapNumNodes;
  // splitHeapSize
  unsigned long long int splitHeapSize;
  // maxNumNodes
  unsigned long long int maxNumNodes;
  // searchMaxNumComparisons
  unsigned long long int searchMaxNumComparisons;
  // numSearchers
  unsigned long long int numSearchers;
  // headSearcher
  struct _VlKDForestSearcher *headSearcher;
};

struct _VlKDForestNeighbor
{
  // distance
  double distance;
  // index
  unsigned long long int index;
};

struct _VlKDForestSearchState
{
  // tree
  struct _VlKDTree *tree;
  // nodeIndex
  unsigned long long int nodeIndex;
  // distanceLowerBound
  double distanceLowerBound;
};

struct _VlKDForestSearcher
{
  // next
  struct _VlKDForestSearcher *next;
  // previous
  struct _VlKDForestSearcher *previous;
  // searchIdBook
  unsigned long long int *searchIdBook;
  // searchHeapArray
  struct _VlKDForestSearchState *searchHeapArray;
  // forest
  struct _VlKDForest *forest;
  // searchNumComparisons
  unsigned long long int searchNumComparisons;
  // searchNumRecursions
  unsigned long long int searchNumRecursions;
  // searchNumSimplifications
  unsigned long long int searchNumSimplifications;
  // searchHeapNumNodes
  unsigned long long int searchHeapNumNodes;
  // searchId
  unsigned long long int searchId;
};

struct _VlKDTree
{
  // nodes
  struct _VlKDTreeNode *nodes;
  // numUsedNodes
  unsigned long long int numUsedNodes;
  // numAllocatedNodes
  unsigned long long int numAllocatedNodes;
  // dataIndex
  struct _VlKDTreeDataIndexEntry *dataIndex;
  // depth
  unsigned int depth;
};

struct _VlKDTreeDataIndexEntry
{
  // index
  signed long long int index;
  // value
  double value;
};

struct _VlKDTreeNode
{
  // parent
  unsigned long long int parent;
  // lowerChild
  signed long long int lowerChild;
  // upperChild
  signed long long int upperChild;
  // splitDimension
  unsigned int splitDimension;
  // splitThreshold
  double splitThreshold;
  // lowerBound
  double lowerBound;
  // upperBound
  double upperBound;
};

struct _VlKMeans
{
  // dataType
  unsigned int dataType;
  // dimension
  unsigned long long int dimension;
  // numCenters
  unsigned long long int numCenters;
  // numTrees
  unsigned long long int numTrees;
  // maxNumComparisons
  unsigned long long int maxNumComparisons;
  // initialization
  enum _VlKMeansInitialization initialization;
  // algorithm
  enum _VlKMeansAlgorithm algorithm;
  // distance
  enum _VlVectorComparisonType distance;
  // maxNumIterations
  unsigned long long int maxNumIterations;
  // minEnergyVariation
  double minEnergyVariation;
  // numRepetitions
  unsigned long long int numRepetitions;
  // verbosity
  signed int verbosity;
  // centers
  void *centers;
  // centerDistances
  void *centerDistances;
  // energy
  double energy;
  // floatVectorComparisonFn
  float (*floatVectorComparisonFn)(unsigned long long int, const float *, const float *);
  // doubleVectorComparisonFn
  double (*doubleVectorComparisonFn)(unsigned long long int, const double *, const double *);
};

struct _VlKMeansSortWrapper
{
  // permutation
  unsigned int *permutation;
  // data
  const void *data;
  // stride
  unsigned long long int stride;
};

struct _VlLiopDesc
{
  // numNeighbours
  signed int numNeighbours;
  // numSpatialBins
  signed int numSpatialBins;
  // intensityThreshold
  float intensityThreshold;
  // dimension
  unsigned long long int dimension;
  // patchSideLength
  unsigned long long int patchSideLength;
  // patchSize
  unsigned long long int patchSize;
  // patchPixels
  unsigned long long int *patchPixels;
  // patchIntensities
  float *patchIntensities;
  // patchPermutation
  unsigned long long int *patchPermutation;
  // neighRadius
  float neighRadius;
  // neighIntensities
  float *neighIntensities;
  // neighPermutation
  unsigned long long int *neighPermutation;
  // neighSamplesX
  double *neighSamplesX;
  // neighSamplesY
  double *neighSamplesY;
};

struct _VlMserExtrReg
{
  // parent
  signed int parent;
  // index
  signed int index;
  // value
  unsigned char value;
  // shortcut
  unsigned int shortcut;
  // area
  unsigned int area;
  // variation
  float variation;
  // max_stable
  unsigned int max_stable;
};

struct _VlMserStats
{
  // num_extremal
  signed int num_extremal;
  // num_unstable
  signed int num_unstable;
  // num_abs_unstable
  signed int num_abs_unstable;
  // num_too_big
  signed int num_too_big;
  // num_too_small
  signed int num_too_small;
  // num_duplicates
  signed int num_duplicates;
};

struct _VlMserFilt
{
  // ndims
  signed int ndims;
  // dims
  signed int *dims;
  // nel
  signed int nel;
  // subs
  signed int *subs;
  // dsubs
  signed int *dsubs;
  // strides
  signed int *strides;
  // perm
  unsigned int *perm;
  // joins
  unsigned int *joins;
  // njoins
  signed int njoins;
  // r
  struct _VlMserReg *r;
  // er
  struct _VlMserExtrReg *er;
  // mer
  unsigned int *mer;
  // ner
  signed int ner;
  // nmer
  signed int nmer;
  // rer
  signed int rer;
  // rmer
  signed int rmer;
  // acc
  float *acc;
  // ell
  float *ell;
  // rell
  signed int rell;
  // nell
  signed int nell;
  // dof
  signed int dof;
  // verbose
  signed int verbose;
  // delta
  signed int delta;
  // max_area
  double max_area;
  // min_area
  double min_area;
  // max_variation
  double max_variation;
  // min_diversity
  double min_diversity;
  // stats
  struct _VlMserStats stats;
};

struct _VlMserReg
{
  // parent
  unsigned int parent;
  // shortcut
  unsigned int shortcut;
  // height
  unsigned int height;
  // area
  unsigned int area;
};

struct _VlPgmImage
{
  // width
  unsigned long long int width;
  // height
  unsigned long long int height;
  // max_value
  unsigned long long int max_value;
  // is_raw
  signed int is_raw;
};

struct _VlQS
{
  // image
  double *image;
  // height
  signed int height;
  // width
  signed int width;
  // channels
  signed int channels;
  // medoid
  signed int medoid;
  // sigma
  double sigma;
  // tau
  double tau;
  // parents
  signed int *parents;
  // dists
  double *dists;
  // density
  double *density;
};

struct _VlRand
{
  // mt
  unsigned int mt[624l];
  // mti
  unsigned int mti;
};

struct _VlScaleSpaceGeometry
{
  // width
  unsigned long long int width;
  // height
  unsigned long long int height;
  // firstOctave
  signed long long int firstOctave;
  // lastOctave
  signed long long int lastOctave;
  // octaveResolution
  unsigned long long int octaveResolution;
  // octaveFirstSubdivision
  signed long long int octaveFirstSubdivision;
  // octaveLastSubdivision
  signed long long int octaveLastSubdivision;
  // baseScale
  double baseScale;
  // nominalScale
  double nominalScale;
};

struct _VlScaleSpace
{
  // geom
  struct _VlScaleSpaceGeometry geom;
  // octaves
  float **octaves;
};

struct _VlScaleSpaceOctaveGeometry
{
  // width
  unsigned long long int width;
  // height
  unsigned long long int height;
  // step
  double step;
};

struct _VlX86CpuInfo
{
  // vendor
  union anonymous_11 vendor;
  // hasAVX
  signed int hasAVX;
  // hasSSE42
  signed int hasSSE42;
  // hasSSE41
  signed int hasSSE41;
  // hasSSE3
  signed int hasSSE3;
  // hasSSE2
  signed int hasSSE2;
  // hasSSE
  signed int hasSSE;
  // hasMMX
  signed int hasMMX;
};

struct _VlState
{
  // threadKey
  unsigned int threadKey;
  // mutex
  union anonymous_0 mutex;
  // mutexOwner
  unsigned long int mutexOwner;
  // mutexCondition
  union anonymous_1 mutexCondition;
  // mutexCount
  unsigned long int mutexCount;
  // printf_func
  signed int (*printf_func)(const char *, ...);
  // malloc_func
  void * (*malloc_func)(unsigned long int);
  // realloc_func
  void * (*realloc_func)(void *, unsigned long int);
  // calloc_func
  void * (*calloc_func)(unsigned long int, unsigned long int);
  // free_func
  void (*free_func)(void *);
  // cpuInfo
  struct _VlX86CpuInfo cpuInfo;
  // numCPUs
  unsigned long long int numCPUs;
  // simdEnabled
  signed int simdEnabled;
  // numThreads
  unsigned long long int numThreads;
};

struct _VlThreadState
{
  // lastError
  signed int lastError;
  // lastErrorMessage
  char lastErrorMessage[1024l];
  // rand
  struct _VlRand rand;
  // ticMark
  signed long int ticMark;
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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};


// _vl_state
// file vl/generic.c line 853
struct _VlState _vl_state;
// optarg
// file vl/getopt_long.c line 33
char *optarg;
// opterr
// file vl/getopt_long.c line 30
signed int opterr = 1;
// optind
// file vl/getopt_long.c line 31
signed int optind = 1;
// optopt
// file vl/getopt_long.c line 32
signed int optopt;
// optreset
// file vl/getopt_long.c line 34
signed int optreset;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// vlCovdetMethods
// file vl/covdet.c line 1491
struct _VlEnumerator vlCovdetMethods[7l] = { { .name="DoG", .value=(signed long long int)VL_COVDET_METHOD_DOG },
    { .name="Hessian", .value=(signed long long int)VL_COVDET_METHOD_HESSIAN },
    { .name="HessianLaplace", .value=(signed long long int)VL_COVDET_METHOD_HESSIAN_LAPLACE },
    { .name="HarrisLaplace", .value=(signed long long int)VL_COVDET_METHOD_HARRIS_LAPLACE },
    { .name="MultiscaleHessian", .value=(signed long long int)VL_COVDET_METHOD_MULTISCALE_HESSIAN },
    { .name="MultiscaleHarris", .value=(signed long long int)VL_COVDET_METHOD_MULTISCALE_HARRIS },
    { .name=((const char *)NULL), .value=(signed long long int)0 } };
// vl_infinity_d
// file vl/mathop.h line 75
static union anonymous vl_infinity_d = { .raw=0x7FF0000000000000ULL };
// vl_infinity_d_link1
// file vl/mathop.h line 75
static union anonymous vl_infinity_d_link1 = { .raw=0x7FF0000000000000ULL };
// vl_infinity_d_link2
// file vl/mathop.h line 75
static union anonymous vl_infinity_d_link2 = { .raw=0x7FF0000000000000ULL };
// vl_infinity_d_link3
// file vl/mathop.h line 75
static union anonymous vl_infinity_d_link3 = { .raw=0x7FF0000000000000ULL };
// vl_infinity_d_link4
// file vl/mathop.h line 75
static union anonymous vl_infinity_d_link4 = { .raw=0x7FF0000000000000ULL };
// vl_infinity_d_link5
// file vl/mathop.h line 75
static union anonymous vl_infinity_d_link5 = { .raw=0x7FF0000000000000ULL };
// vl_infinity_f
// file vl/mathop.h line 61
static union anonymous_8 vl_infinity_f = { .raw=(unsigned int)0x7F800000UL };
// vl_infinity_f_link1
// file vl/mathop.h line 61
static union anonymous_8 vl_infinity_f_link1 = { .raw=(unsigned int)0x7F800000UL };
// vl_infinity_f_link2
// file vl/mathop.h line 61
static union anonymous_8 vl_infinity_f_link2 = { .raw=(unsigned int)0x7F800000UL };
// vl_infinity_f_link3
// file vl/mathop.h line 61
static union anonymous_8 vl_infinity_f_link3 = { .raw=(unsigned int)0x7F800000UL };
// vl_nan_d
// file vl/mathop.h line 66
static union anonymous vl_nan_d = { .raw=0x7FF8000000000000ULL };
// vl_nan_d_link1
// file vl/mathop.h line 66
static union anonymous vl_nan_d_link1 = { .raw=0x7FF8000000000000ULL };
// vl_nan_f
// file vl/mathop.h line 56
static union anonymous_8 vl_nan_f = { .raw=(unsigned int)0x7FC00000UL };

// __strcspn_c1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1(const char *__s, signed int __reject)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
    if((signed int)__s[(signed long int)__result] == __reject)
      break;

  return __result;
}

// __strcspn_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2(const char *__s, signed int __reject1, signed int __reject2)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
  {
    if((signed int)__s[(signed long int)__result] == __reject1)
      break;

    if((signed int)__s[(signed long int)__result] == __reject2)
      break;

  }
  return __result;
}

// __strcspn_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3(const char *__s, signed int __reject1, signed int __reject2, signed int __reject3)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
  {
    if((signed int)__s[(signed long int)__result] == __reject1)
      break;

    if((signed int)__s[(signed long int)__result] == __reject2)
      break;

    if((signed int)__s[(signed long int)__result] == __reject3)
      break;

  }
  return __result;
}

// _vl_covdet_check_frame_inside
// file vl/covdet.c line 3064
signed int _vl_covdet_check_frame_inside(struct _VlCovDet *self, struct _VlFrameOrientedEllipse frame, double margin)
{
  double extent = margin;
  double A[4l] = { (double)frame.a11, (double)frame.a21, (double)frame.a12, (double)frame.a22 };
  double T[2l] = { (double)frame.x, (double)frame.y };
  double x0 = +vl_infinity_d_link1.value;
  double x1 = -vl_infinity_d_link1.value;
  double y0 = +vl_infinity_d_link1.value;
  double y1 = -vl_infinity_d_link1.value;
  double boxx[4l] = { extent, extent, -extent, -extent };
  double boxy[4l] = { -extent, extent, extent, -extent };
  struct _VlScaleSpaceGeometry geom;
  geom=vl_scalespace_get_geometry(self->gss);
  signed int i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    double x = A[(signed long int)0] * boxx[(signed long int)i] + A[(signed long int)2] * boxy[(signed long int)i] + T[(signed long int)0];
    double y = A[(signed long int)1] * boxx[(signed long int)i] + A[(signed long int)3] * boxy[(signed long int)i] + T[(signed long int)1];
    x0 = x0 < x ? x0 : x;
    x1 = x1 > x ? x1 : x;
    y0 = y0 < y ? y0 : y;
    y1 = y1 > y ? y1 : y;
  }
  return (signed int)((double)0 <= x0 && x1 <= (double)(geom.width - (unsigned long int)1) && (double)0 <= y0 && y1 <= (double)(geom.height - (unsigned long int)1));
}

// _vl_covdet_compare_orientations_descending
// file vl/covdet.c line 2667
static signed int _vl_covdet_compare_orientations_descending(const void *a_, const void *b_)
{
  const struct _VlCovDetFeatureOrientation *a = (const struct _VlCovDetFeatureOrientation *)a_;
  const struct _VlCovDetFeatureOrientation *b = (const struct _VlCovDetFeatureOrientation *)b_;
  if(a->score > b->score)
    return -1;

  else
    if(a->score < b->score)
      return +1;

    else
      return 0;
}

// _vl_cpuid
// file vl/host.c line 417
static inline void _vl_cpuid(signed int *info, signed int function)
{
  asm("cpuid" : "=a"(info[(signed long int)0]), "=b"(info[(signed long int)1]), "=c"(info[(signed long int)2]), "=d"(info[(signed long int)3]) : "a"(function) : "cc");
}

// _vl_det_hessian_response
// file vl/covdet.c line 1746
static void _vl_det_hessian_response(float *hessian, const float *image, unsigned long long int width, unsigned long long int height, double step, double sigma)
{
  float factor;
  double return_value_pow_1;
  return_value_pow_1=pow(sigma / step, 4.0);
  factor = (float)return_value_pow_1;
  const signed long long int xo = (const signed long long int)1;
  const signed long long int yo = (const signed long long int)width;
  unsigned long long int r;
  unsigned long long int c;
  float p11;
  float p12;
  float p13;
  float p21;
  float p22;
  float p23;
  float p31;
  float p32;
  float p33;
  const float *in = image + yo;
  float *out = hessian + xo + yo;
  r = (unsigned long long int)1;
  for( ; !(r >= height + 18446744073709551615ul); r = r + 1ull)
  {
    p11 = in[-yo];
    p12 = in[xo - yo];
    p21 = in[(signed long int)0];
    p22 = in[xo];
    p31 = in[+yo];
    p32 = in[xo + yo];
    in = in + (signed long int)2;
    c = (unsigned long long int)1;
    for( ; !(c >= width + 18446744073709551615ul); c = c + 1ull)
    {
      float Lxx;
      float Lyy;
      float Lxy;
      p13 = in[-yo];
      p23 = *in;
      p33 = in[+yo];
      Lxx = (-p21 + (float)2 * p22) - p23;
      Lyy = (-p12 + (float)2 * p22) - p32;
      Lxy = (((p11 - p31) - p13) + p33) / 4.0f;
      *out = (Lxx * Lyy - Lxy * Lxy) * factor;
      p11 = p12;
      p12 = p13;
      p21 = p22;
      p22 = p23;
      p31 = p32;
      p32 = p33;
      in = in + 1l;
      out = out + 1l;
    }
    out = out + (signed long int)2;
  }
  in = hessian + yo + xo;
  out = hessian + xo;
  memcpy((void *)out, (const void *)in, (width - (unsigned long int)2) * sizeof(float) /*4ul*/ );
  out = out - 1l;
  in = in - yo;
  r = (unsigned long long int)0;
  for( ; !(r >= height + 18446744073709551615ul); r = r + 1ull)
  {
    *out = *in;
    *((out + yo) - (signed long int)1) = *((in + yo) - (signed long int)3);
    in = in + yo;
    out = out + yo;
  }
  in = in - yo;
  *out = *in;
  *((out + yo) - (signed long int)1) = *((in + yo) - (signed long int)3);
  out = out + 1l;
  memcpy((void *)out, (const void *)in, (width - (unsigned long int)2) * sizeof(float) /*4ul*/ );
}

// _vl_distance_chi2_d
// file vl/mathop.c line 323
extern double _vl_distance_chi2_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  while(!(X >= X_end))
  {
    double a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    double b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    double delta = a - b;
    double denom = a + b;
    double numer = delta * delta;
    if(IEEE_FLOAT_NOTEQUAL(denom, 0.000000))
    {
      double ratio = numer / denom;
      acc = acc + ratio;
    }

  }
  return acc;
}

// _vl_distance_chi2_f
// file vl/mathop.c line 323
extern float _vl_distance_chi2_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  while(!(X >= X_end))
  {
    float a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    float b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    float delta = a - b;
    float denom = a + b;
    float numer = delta * delta;
    if(IEEE_FLOAT_NOTEQUAL(denom, 0.000000f))
    {
      float ratio = numer / denom;
      acc = acc + ratio;
    }

  }
  return acc;
}

// _vl_distance_hellinger_d
// file vl/mathop.c line 343
extern double _vl_distance_hellinger_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  while(!(X >= X_end))
  {
    double a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    double b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    double return_value_sqrt_3;
    return_value_sqrt_3=sqrt(a * b);
    acc = acc + ((a + b) - 2.0 * return_value_sqrt_3);
  }
  return acc;
}

// _vl_distance_hellinger_f
// file vl/mathop.c line 343
extern float _vl_distance_hellinger_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  while(!(X >= X_end))
  {
    float a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    float b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    float return_value_sqrtf_3;
    return_value_sqrtf_3=sqrtf(a * b);
    acc = acc + (float)((double)(a + b) - 2.0 * (double)return_value_sqrtf_3);
  }
  return acc;
}

// _vl_distance_js_d
// file vl/mathop.c line 361
extern double _vl_distance_js_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  double return_value_vl_log2_d_3;
  double return_value_vl_log2_d_4;
  while(!(X >= X_end))
  {
    double x;
    tmp_post_1 = X;
    X = X + 1l;
    x = *tmp_post_1;
    double y;
    tmp_post_2 = Y;
    Y = Y + 1l;
    y = *tmp_post_2;
    if(IEEE_FLOAT_NOTEQUAL(x, 0.000000))
    {
      return_value_vl_log2_d_3=vl_log2_d((double)1 + y / x);
      acc = acc + (x - x * return_value_vl_log2_d_3);
    }

    if(IEEE_FLOAT_NOTEQUAL(y, 0.000000))
    {
      return_value_vl_log2_d_4=vl_log2_d((double)1 + x / y);
      acc = acc + (y - y * return_value_vl_log2_d_4);
    }

  }
  return acc;
}

// _vl_distance_js_f
// file vl/mathop.c line 361
extern float _vl_distance_js_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  float return_value_vl_log2_f_3;
  float return_value_vl_log2_f_4;
  while(!(X >= X_end))
  {
    float x;
    tmp_post_1 = X;
    X = X + 1l;
    x = *tmp_post_1;
    float y;
    tmp_post_2 = Y;
    Y = Y + 1l;
    y = *tmp_post_2;
    if(IEEE_FLOAT_NOTEQUAL(x, 0.000000f))
    {
      return_value_vl_log2_f_3=vl_log2_f((float)1 + y / x);
      acc = acc + (x - x * return_value_vl_log2_f_3);
    }

    if(IEEE_FLOAT_NOTEQUAL(y, 0.000000f))
    {
      return_value_vl_log2_f_4=vl_log2_f((float)1 + x / y);
      acc = acc + (y - y * return_value_vl_log2_f_4);
    }

  }
  return acc;
}

// _vl_distance_l1_d
// file vl/mathop.c line 310
extern double _vl_distance_l1_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  while(!(X >= X_end))
  {
    double d;
    tmp_post_1 = X;
    X = X + 1l;
    tmp_post_2 = Y;
    Y = Y + 1l;
    d = *tmp_post_1 - *tmp_post_2;
    acc = acc + (d > -d ? d : -d);
  }
  return acc;
}

// _vl_distance_l1_f
// file vl/mathop.c line 310
extern float _vl_distance_l1_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  while(!(X >= X_end))
  {
    float d;
    tmp_post_1 = X;
    X = X + 1l;
    tmp_post_2 = Y;
    Y = Y + 1l;
    d = *tmp_post_1 - *tmp_post_2;
    acc = acc + (d > -d ? d : -d);
  }
  return acc;
}

// _vl_distance_l2_d
// file vl/mathop.c line 297
extern double _vl_distance_l2_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  while(!(X >= X_end))
  {
    double d;
    tmp_post_1 = X;
    X = X + 1l;
    tmp_post_2 = Y;
    Y = Y + 1l;
    d = *tmp_post_1 - *tmp_post_2;
    acc = acc + d * d;
  }
  return acc;
}

// _vl_distance_l2_f
// file vl/mathop.c line 297
extern float _vl_distance_l2_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  while(!(X >= X_end))
  {
    float d;
    tmp_post_1 = X;
    X = X + 1l;
    tmp_post_2 = Y;
    Y = Y + 1l;
    d = *tmp_post_1 - *tmp_post_2;
    acc = acc + d * d;
  }
  return acc;
}

// _vl_distance_mahalanobis_sq_d
// file vl/mathop.c line 458
extern double _vl_distance_mahalanobis_sq_d(unsigned long long int dimension, const double *X, const double *MU, const double *S)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  const double *tmp_post_3;
  while(!(X >= X_end))
  {
    double d;
    tmp_post_1 = X;
    X = X + 1l;
    tmp_post_2 = MU;
    MU = MU + 1l;
    d = *tmp_post_1 - *tmp_post_2;
    tmp_post_3 = S;
    S = S + 1l;
    acc = acc + d * d * *tmp_post_3;
  }
  return acc;
}

// _vl_distance_mahalanobis_sq_f
// file vl/mathop.c line 458
extern float _vl_distance_mahalanobis_sq_f(unsigned long long int dimension, const float *X, const float *MU, const float *S)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  const float *tmp_post_3;
  while(!(X >= X_end))
  {
    float d;
    tmp_post_1 = X;
    X = X + 1l;
    tmp_post_2 = MU;
    MU = MU + 1l;
    d = *tmp_post_1 - *tmp_post_2;
    tmp_post_3 = S;
    S = S + 1l;
    acc = acc + d * d * *tmp_post_3;
  }
  return acc;
}

// _vl_dog_response
// file vl/covdet.c line 1898
static void _vl_dog_response(float *dog, const float *level1, const float *level2, unsigned long long int width, unsigned long long int height)
{
  signed long long int k = (signed long long int)0;
  for( ; !(k >= (signed long int)((signed int)height * (signed int)width)); k = k + 1ll)
    dog[k] = level2[k] - level1[k];
}

// _vl_fisher_encode_d
// file vl/fisher.c line 364
static unsigned long long int _vl_fisher_encode_d(double *enc, const double *means, unsigned long long int dimension, unsigned long long int numClusters, const double *covariances, const double *priors, const double *data, unsigned long long int numData, signed int flags)
{
  unsigned long long int dim;
  signed long long int i_cl;
  signed long long int i_d;
  unsigned long long int numTerms = (unsigned long long int)0;
  double *posteriors;
  double *sqrtInvSigma;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * numClusters * numData);
  posteriors = (double *)return_value_vl_malloc_1;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(double) /*8ul*/  * dimension * numClusters);
  sqrtInvSigma = (double *)return_value_vl_malloc_2;
  memset((void *)enc, 0, sizeof(double) /*8ul*/  * (unsigned long int)2 * dimension * numClusters);
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension); dim = dim + 1ull)
      sqrtInvSigma[(signed long int)((unsigned long int)i_cl * dimension + dim)]=sqrt(1.0 / covariances[(signed long int)((unsigned long int)i_cl * dimension + dim)]);
  }
  vl_get_gmm_data_posteriors_d(posteriors, numClusters, numData, priors, means, dimension, covariances, data);
  if(!((4 & flags) == 0))
  {
    i_d = (signed long long int)0;
    for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
    {
      signed long long int best = (signed long long int)0;
      double bestValue = posteriors[(signed long int)((unsigned long int)i_d * numClusters)];
      i_cl = (signed long long int)1;
      for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
      {
        double p = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)];
        if(p > bestValue)
        {
          bestValue = p;
          best = i_cl;
        }

      }
      i_cl = (signed long long int)0;
      for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
        posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] = (double)(i_cl == best);
    }
  }

  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    double uprefix;
    double vprefix;
    double *uk = enc + (signed long int)((unsigned long int)i_cl * dimension);
    double *vk = enc + (signed long int)((unsigned long int)i_cl * dimension) + (signed long int)(numClusters * dimension);
    if(!(priors[i_cl] < 1e-6))
    {
      i_d = (signed long long int)0;
      for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
      {
        double _vl_fisher_encode_d__1__3__1__2__1__p = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)];
        if(!(_vl_fisher_encode_d__1__3__1__2__1__p < 1e-6))
        {
          numTerms = numTerms + (unsigned long long int)1;
          dim = (unsigned long long int)0;
          for( ; !(dim >= dimension); dim = dim + 1ull)
          {
            double diff = data[(signed long int)((unsigned long int)i_d * dimension + dim)] - means[(signed long int)((unsigned long int)i_cl * dimension + dim)];
            diff = diff * sqrtInvSigma[(signed long int)((unsigned long int)i_cl * dimension + dim)];
            uk[(signed long int)dim] = uk[(signed long int)dim] + _vl_fisher_encode_d__1__3__1__2__1__p * diff;
            vk[(signed long int)dim] = vk[(signed long int)dim] + _vl_fisher_encode_d__1__3__1__2__1__p * (diff * diff - (double)1);
          }
        }

      }
      if(numData >= 1ul)
      {
        double return_value_sqrt_3;
        return_value_sqrt_3=sqrt(priors[i_cl]);
        uprefix = (double)1 / ((double)numData * return_value_sqrt_3);
        double return_value_sqrt_4;
        return_value_sqrt_4=sqrt((double)2 * priors[i_cl]);
        vprefix = (double)1 / ((double)numData * return_value_sqrt_4);
        dim = (unsigned long long int)0;
        for( ; !(dim >= dimension); dim = dim + 1ull)
        {
          uk[(signed long int)dim] = uk[(signed long int)dim] * uprefix;
          vk[(signed long int)dim] = vk[(signed long int)dim] * vprefix;
        }
      }

    }

  }
  vl_free((void *)posteriors);
  vl_free((void *)sqrtInvSigma);
  if(!((0x1 & flags) == 0))
  {
    dim = (unsigned long long int)0;
    for( ; !(dim >= 2ul * dimension * numClusters); dim = dim + 1ull)
    {
      double z = enc[(signed long int)dim];
      if(z >= 0.000000)
        enc[(signed long int)dim]=vl_sqrt_d_link1(z);

      else
      {
        double return_value_vl_sqrt_d_5;
        return_value_vl_sqrt_d_5=vl_sqrt_d_link1(-z);
        enc[(signed long int)dim] = -return_value_vl_sqrt_d_5;
      }
    }
  }

  if(!((2 & flags) == 0))
  {
    double n = (double)0;
    dim = (unsigned long long int)0;
    for( ; !(dim >= 2ul * dimension * numClusters); dim = dim + 1ull)
    {
      double _vl_fisher_encode_d__1__5__1__1__z = enc[(signed long int)dim];
      n = n + _vl_fisher_encode_d__1__5__1__1__z * _vl_fisher_encode_d__1__5__1__1__z;
    }
    n=vl_sqrt_d_link1(n);
    n = n > 1e-12 ? n : 1e-12;
    dim = (unsigned long long int)0;
    for( ; !(dim >= 2ul * dimension * numClusters); dim = dim + 1ull)
      enc[(signed long int)dim] = enc[(signed long int)dim] / n;
  }

  return numTerms;
}

// _vl_fisher_encode_f
// file vl/fisher.c line 364
static unsigned long long int _vl_fisher_encode_f(float *enc, const float *means, unsigned long long int dimension, unsigned long long int numClusters, const float *covariances, const float *priors, const float *data, unsigned long long int numData, signed int flags)
{
  unsigned long long int dim;
  signed long long int i_cl;
  signed long long int i_d;
  unsigned long long int numTerms = (unsigned long long int)0;
  float *posteriors;
  float *sqrtInvSigma;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * numClusters * numData);
  posteriors = (float *)return_value_vl_malloc_1;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * dimension * numClusters);
  sqrtInvSigma = (float *)return_value_vl_malloc_2;
  memset((void *)enc, 0, sizeof(float) /*4ul*/  * (unsigned long int)2 * dimension * numClusters);
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension); dim = dim + 1ull)
    {
      double return_value_sqrt_3;
      return_value_sqrt_3=sqrt(1.0 / (double)covariances[(signed long int)((unsigned long int)i_cl * dimension + dim)]);
      sqrtInvSigma[(signed long int)((unsigned long int)i_cl * dimension + dim)] = (float)return_value_sqrt_3;
    }
  }
  vl_get_gmm_data_posteriors_f(posteriors, numClusters, numData, priors, means, dimension, covariances, data);
  if(!((4 & flags) == 0))
  {
    i_d = (signed long long int)0;
    for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
    {
      signed long long int best = (signed long long int)0;
      float bestValue = posteriors[(signed long int)((unsigned long int)i_d * numClusters)];
      i_cl = (signed long long int)1;
      for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
      {
        float p = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)];
        if(p > bestValue)
        {
          bestValue = p;
          best = i_cl;
        }

      }
      i_cl = (signed long long int)0;
      for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
        posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] = (float)(i_cl == best);
    }
  }

  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    float uprefix;
    float vprefix;
    float *uk = enc + (signed long int)((unsigned long int)i_cl * dimension);
    float *vk = enc + (signed long int)((unsigned long int)i_cl * dimension) + (signed long int)(numClusters * dimension);
    if(!((double)priors[i_cl] < 1e-6))
    {
      i_d = (signed long long int)0;
      for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
      {
        float _vl_fisher_encode_f__1__3__1__2__1__p = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)];
        if(!((double)_vl_fisher_encode_f__1__3__1__2__1__p < 1e-6))
        {
          numTerms = numTerms + (unsigned long long int)1;
          dim = (unsigned long long int)0;
          for( ; !(dim >= dimension); dim = dim + 1ull)
          {
            float diff = data[(signed long int)((unsigned long int)i_d * dimension + dim)] - means[(signed long int)((unsigned long int)i_cl * dimension + dim)];
            diff = diff * sqrtInvSigma[(signed long int)((unsigned long int)i_cl * dimension + dim)];
            uk[(signed long int)dim] = uk[(signed long int)dim] + _vl_fisher_encode_f__1__3__1__2__1__p * diff;
            vk[(signed long int)dim] = vk[(signed long int)dim] + _vl_fisher_encode_f__1__3__1__2__1__p * (diff * diff - (float)1);
          }
        }

      }
      if(numData >= 1ul)
      {
        double return_value_sqrt_4;
        return_value_sqrt_4=sqrt((double)priors[i_cl]);
        uprefix = (float)((double)1 / ((double)numData * return_value_sqrt_4));
        double return_value_sqrt_5;
        return_value_sqrt_5=sqrt((double)((float)2 * priors[i_cl]));
        vprefix = (float)((double)1 / ((double)numData * return_value_sqrt_5));
        dim = (unsigned long long int)0;
        for( ; !(dim >= dimension); dim = dim + 1ull)
        {
          uk[(signed long int)dim] = uk[(signed long int)dim] * uprefix;
          vk[(signed long int)dim] = vk[(signed long int)dim] * vprefix;
        }
      }

    }

  }
  vl_free((void *)posteriors);
  vl_free((void *)sqrtInvSigma);
  if(!((0x1 & flags) == 0))
  {
    dim = (unsigned long long int)0;
    for( ; !(dim >= 2ul * dimension * numClusters); dim = dim + 1ull)
    {
      float _vl_fisher_encode_f__1__4__1__1__z = enc[(signed long int)dim];
      if(_vl_fisher_encode_f__1__4__1__1__z >= 0.000000f)
        enc[(signed long int)dim]=vl_sqrt_f_link1(_vl_fisher_encode_f__1__4__1__1__z);

      else
      {
        float return_value_vl_sqrt_f_6;
        return_value_vl_sqrt_f_6=vl_sqrt_f_link1(-_vl_fisher_encode_f__1__4__1__1__z);
        enc[(signed long int)dim] = -return_value_vl_sqrt_f_6;
      }
    }
  }

  if(!((2 & flags) == 0))
  {
    float n = (float)0;
    dim = (unsigned long long int)0;
    for( ; !(dim >= 2ul * dimension * numClusters); dim = dim + 1ull)
    {
      float z = enc[(signed long int)dim];
      n = n + z * z;
    }
    n=vl_sqrt_f_link1(n);
    n = (float)((double)n > 1e-12 ? (double)n : 1e-12);
    dim = (unsigned long long int)0;
    for( ; !(dim >= 2ul * dimension * numClusters); dim = dim + 1ull)
      enc[(signed long int)dim] = enc[(signed long int)dim] / n;
  }

  return numTerms;
}

// _vl_gmm_apply_bounds_d
// file vl/gmm.c line 1006
static void _vl_gmm_apply_bounds_d(struct _VlGMM *self)
{
  unsigned long long int dim;
  unsigned long long int k;
  unsigned long long int numAdjusted = (unsigned long long int)0;
  double *cov = (double *)self->covariances;
  const double *lbs = self->sigmaLowBound;
  k = (unsigned long long int)0;
  for( ; !(k >= self->numClusters); k = k + 1ull)
  {
    signed int adjusted = 0;
    dim = (unsigned long long int)0;
    for( ; !(dim >= self->dimension); dim = dim + 1ull)
      if(cov[(signed long int)self->dimension * (signed long int)k + (signed long int)dim] < lbs[(signed long int)dim])
      {
        cov[(signed long int)(k * self->dimension + dim)] = lbs[(signed long int)dim];
        adjusted = 1;
      }

    if(!(adjusted == 0))
      numAdjusted = numAdjusted + 1ull;

  }
  if(numAdjusted >= 1ul)
  {
    if(self->verbosity >= 1)
    {
      signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
      return_value_vl_get_printf_func_1=vl_get_printf_func();
      return_value_vl_get_printf_func_1("gmm: detected %d of %d modes with at least one dimension with covariance too small (set to lower bound)\n", numAdjusted, self->numClusters);
    }

  }

}

// _vl_gmm_apply_bounds_f
// file vl/gmm.c line 1006
static void _vl_gmm_apply_bounds_f(struct _VlGMM *self)
{
  unsigned long long int dim;
  unsigned long long int k;
  unsigned long long int numAdjusted = (unsigned long long int)0;
  float *cov = (float *)self->covariances;
  const double *lbs = self->sigmaLowBound;
  k = (unsigned long long int)0;
  for( ; !(k >= self->numClusters); k = k + 1ull)
  {
    signed int adjusted = 0;
    dim = (unsigned long long int)0;
    for( ; !(dim >= self->dimension); dim = dim + 1ull)
      if((double)cov[(signed long int)self->dimension * (signed long int)k + (signed long int)dim] < lbs[(signed long int)dim])
      {
        cov[(signed long int)(k * self->dimension + dim)] = (float)lbs[(signed long int)dim];
        adjusted = 1;
      }

    if(!(adjusted == 0))
      numAdjusted = numAdjusted + 1ull;

  }
  if(numAdjusted >= 1ul)
  {
    if(self->verbosity >= 1)
    {
      signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
      return_value_vl_get_printf_func_1=vl_get_printf_func();
      return_value_vl_get_printf_func_1("gmm: detected %d of %d modes with at least one dimension with covariance too small (set to lower bound)\n", numAdjusted, self->numClusters);
    }

  }

}

// _vl_gmm_compute_init_sigma_d
// file vl/gmm.c line 1377
static void _vl_gmm_compute_init_sigma_d(struct _VlGMM *self, const double *data, double *initSigma, unsigned long long int dimension, unsigned long long int numData)
{
  unsigned long long int dim;
  unsigned long long int i;
  double *dataMean;
  memset((void *)initSigma, 0, sizeof(double) /*8ul*/  * dimension);
  if(numData >= 2ul)
  {
    void *return_value_vl_malloc_1;
    return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * dimension);
    dataMean = (double *)return_value_vl_malloc_1;
    memset((void *)dataMean, 0, sizeof(double) /*8ul*/  * dimension);
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension); dim = dim + 1ull)
    {
      i = (unsigned long long int)0;
      for( ; !(i >= numData); i = i + 1ull)
        dataMean[(signed long int)dim] = dataMean[(signed long int)dim] + data[(signed long int)(i * dimension + dim)];
      dataMean[(signed long int)dim] = dataMean[(signed long int)dim] / (double)numData;
    }
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension); dim = dim + 1ull)
    {
      i = (unsigned long long int)0;
      for( ; !(i >= numData); i = i + 1ull)
      {
        double diff = data[(signed long int)(i * self->dimension + dim)] - dataMean[(signed long int)dim];
        initSigma[(signed long int)dim] = initSigma[(signed long int)dim] + diff * diff;
      }
      initSigma[(signed long int)dim] = initSigma[(signed long int)dim] / (double)(numData - (unsigned long int)1);
    }
    vl_free((void *)dataMean);
  }

}

// _vl_gmm_compute_init_sigma_f
// file vl/gmm.c line 1377
static void _vl_gmm_compute_init_sigma_f(struct _VlGMM *self, const float *data, float *initSigma, unsigned long long int dimension, unsigned long long int numData)
{
  unsigned long long int dim;
  unsigned long long int i;
  float *dataMean;
  memset((void *)initSigma, 0, sizeof(float) /*4ul*/  * dimension);
  if(numData >= 2ul)
  {
    void *return_value_vl_malloc_1;
    return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * dimension);
    dataMean = (float *)return_value_vl_malloc_1;
    memset((void *)dataMean, 0, sizeof(float) /*4ul*/  * dimension);
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension); dim = dim + 1ull)
    {
      i = (unsigned long long int)0;
      for( ; !(i >= numData); i = i + 1ull)
        dataMean[(signed long int)dim] = dataMean[(signed long int)dim] + data[(signed long int)(i * dimension + dim)];
      dataMean[(signed long int)dim] = dataMean[(signed long int)dim] / (float)numData;
    }
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension); dim = dim + 1ull)
    {
      i = (unsigned long long int)0;
      for( ; !(i >= numData); i = i + 1ull)
      {
        float diff = data[(signed long int)(i * self->dimension + dim)] - dataMean[(signed long int)dim];
        initSigma[(signed long int)dim] = initSigma[(signed long int)dim] + diff * diff;
      }
      initSigma[(signed long int)dim] = initSigma[(signed long int)dim] / (float)(numData - (unsigned long int)1);
    }
    vl_free((void *)dataMean);
  }

}

// _vl_gmm_em_d
// file vl/gmm.c line 1221
static double _vl_gmm_em_d(struct _VlGMM *self, const double *data, unsigned long long int numData)
{
  unsigned long long int iteration;
  unsigned long long int restarted;
  double previousLL = (double)-vl_infinity_d.value;
  double LL = (double)-vl_infinity_d.value;
  double time = (double)0;
  _vl_gmm_prepare_for_data(self, numData);
  _vl_gmm_apply_bounds_d(self);
  iteration = (unsigned long long int)0;
  for( ; (_Bool)1; iteration = iteration + 1ull)
  {
    double eps;
    if(self->verbosity >= 2)
    {
      signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
      return_value_vl_get_printf_func_1=vl_get_printf_func();
      return_value_vl_get_printf_func_1("gmm: em: entering expectation step\n");
      time=vl_get_cpu_time();
    }

    LL=vl_get_gmm_data_posteriors_d((double *)self->posteriors, self->numClusters, numData, (const double *)self->priors, (const double *)self->means, self->dimension, (const double *)self->covariances, data);
    if(self->verbosity >= 2)
    {
      signed int (*return_value_vl_get_printf_func_2)(const char *, ...);
      return_value_vl_get_printf_func_2=vl_get_printf_func();
      double return_value_vl_get_cpu_time_3;
      return_value_vl_get_cpu_time_3=vl_get_cpu_time();
      return_value_vl_get_printf_func_2("gmm: em: expectation step completed in %.2f s\n", return_value_vl_get_cpu_time_3 - time);
    }

    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_4)(const char *, ...);
      return_value_vl_get_printf_func_4=vl_get_printf_func();
      return_value_vl_get_printf_func_4("gmm: em: iteration %d: loglikelihood = %f (variation = %f)\n", iteration, LL, LL - previousLL);
    }

    if(iteration >= self->maxNumIterations)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_5)(const char *, ...);
        return_value_vl_get_printf_func_5=vl_get_printf_func();
        return_value_vl_get_printf_func_5("gmm: em: terminating because the maximum number of iterations (%d) has been reached.\n", self->maxNumIterations);
      }

      break;
    }

    eps=vl_abs_d_link1((LL - previousLL) / LL);
    if(eps < 0.00001 && iteration >= 1ul)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
        return_value_vl_get_printf_func_6=vl_get_printf_func();
        return_value_vl_get_printf_func_6("gmm: em: terminating because the algorithm fully converged (log-likelihood variation = %f).\n", eps);
      }

      break;
    }

    previousLL = LL;
    if(iteration >= 2ul)
    {
      restarted=_vl_gmm_restart_empty_modes_d(self, data);
      if(self->verbosity >= 1 && restarted >= 1ul)
      {
        signed int (*return_value_vl_get_printf_func_7)(const char *, ...);
        return_value_vl_get_printf_func_7=vl_get_printf_func();
        return_value_vl_get_printf_func_7("gmm: em: %d Gaussian modes restarted because they had become empty.\n", restarted);
      }

    }

    _vl_gmm_maximization_d(self, (double *)self->posteriors, (double *)self->priors, (double *)self->covariances, (double *)self->means, data, numData);
  }
  return LL;
}

// _vl_gmm_em_f
// file vl/gmm.c line 1221
static double _vl_gmm_em_f(struct _VlGMM *self, const float *data, unsigned long long int numData)
{
  unsigned long long int iteration;
  unsigned long long int restarted;
  double previousLL = (double)(float)-vl_infinity_d.value;
  double LL = (double)(float)-vl_infinity_d.value;
  double time = (double)0;
  _vl_gmm_prepare_for_data(self, numData);
  _vl_gmm_apply_bounds_f(self);
  iteration = (unsigned long long int)0;
  for( ; (_Bool)1; iteration = iteration + 1ull)
  {
    double eps;
    if(self->verbosity >= 2)
    {
      signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
      return_value_vl_get_printf_func_1=vl_get_printf_func();
      return_value_vl_get_printf_func_1("gmm: em: entering expectation step\n");
      time=vl_get_cpu_time();
    }

    LL=vl_get_gmm_data_posteriors_f((float *)self->posteriors, self->numClusters, numData, (const float *)self->priors, (const float *)self->means, self->dimension, (const float *)self->covariances, data);
    if(self->verbosity >= 2)
    {
      signed int (*return_value_vl_get_printf_func_2)(const char *, ...);
      return_value_vl_get_printf_func_2=vl_get_printf_func();
      double return_value_vl_get_cpu_time_3;
      return_value_vl_get_cpu_time_3=vl_get_cpu_time();
      return_value_vl_get_printf_func_2("gmm: em: expectation step completed in %.2f s\n", return_value_vl_get_cpu_time_3 - time);
    }

    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_4)(const char *, ...);
      return_value_vl_get_printf_func_4=vl_get_printf_func();
      return_value_vl_get_printf_func_4("gmm: em: iteration %d: loglikelihood = %f (variation = %f)\n", iteration, LL, LL - previousLL);
    }

    if(iteration >= self->maxNumIterations)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_5)(const char *, ...);
        return_value_vl_get_printf_func_5=vl_get_printf_func();
        return_value_vl_get_printf_func_5("gmm: em: terminating because the maximum number of iterations (%d) has been reached.\n", self->maxNumIterations);
      }

      break;
    }

    eps=vl_abs_d_link1((LL - previousLL) / LL);
    if(eps < 0.00001 && iteration >= 1ul)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
        return_value_vl_get_printf_func_6=vl_get_printf_func();
        return_value_vl_get_printf_func_6("gmm: em: terminating because the algorithm fully converged (log-likelihood variation = %f).\n", eps);
      }

      break;
    }

    previousLL = LL;
    if(iteration >= 2ul)
    {
      restarted=_vl_gmm_restart_empty_modes_f(self, data);
      if(self->verbosity >= 1 && restarted >= 1ul)
      {
        signed int (*return_value_vl_get_printf_func_7)(const char *, ...);
        return_value_vl_get_printf_func_7=vl_get_printf_func();
        return_value_vl_get_printf_func_7("gmm: em: %d Gaussian modes restarted because they had become empty.\n", restarted);
      }

    }

    _vl_gmm_maximization_f(self, (float *)self->posteriors, (float *)self->priors, (float *)self->covariances, (float *)self->means, data, numData);
  }
  return LL;
}

// _vl_gmm_init_with_kmeans_d
// file vl/gmm.c line 1316
static void _vl_gmm_init_with_kmeans_d(struct _VlGMM *self, const double *data, unsigned long long int numData, struct _VlKMeans *kmeansInit)
{
  unsigned long long int i_d;
  unsigned int *assignments;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData);
  assignments = (unsigned int *)return_value_vl_malloc_1;
  _vl_gmm_prepare_for_data(self, numData);
  memset(self->means, 0, sizeof(double) /*8ul*/  * self->numClusters * self->dimension);
  memset(self->priors, 0, sizeof(double) /*8ul*/  * self->numClusters);
  memset(self->covariances, 0, sizeof(double) /*8ul*/  * self->numClusters * self->dimension);
  memset(self->posteriors, 0, sizeof(double) /*8ul*/  * self->numClusters * numData);
  if(!(kmeansInit == ((struct _VlKMeans *)NULL)))
    vl_gmm_set_kmeans_init_object(self, kmeansInit);

  if(self->kmeansInit == ((struct _VlKMeans *)NULL))
  {
    unsigned long long int ncomparisons = numData / (unsigned long int)4 > (unsigned long int)10 ? numData / (unsigned long int)4 : (unsigned long int)10;
    unsigned long long int niter = (unsigned long long int)5;
    unsigned long long int ntrees = (unsigned long long int)1;
    unsigned long long int nrepetitions = (unsigned long long int)1;
    enum _VlKMeansAlgorithm algorithm = (enum _VlKMeansAlgorithm)VlKMeansANN;
    enum _VlKMeansInitialization initialization = (enum _VlKMeansInitialization)VlKMeansRandomSelection;
    struct _VlKMeans *kmeansInitDefault;
    kmeansInitDefault=vl_kmeans_new(self->dataType, (enum _VlVectorComparisonType)VlDistanceL2);
    vl_kmeans_set_initialization(kmeansInitDefault, initialization);
    vl_kmeans_set_max_num_iterations(kmeansInitDefault, niter);
    vl_kmeans_set_max_num_comparisons(kmeansInitDefault, ncomparisons);
    vl_kmeans_set_num_trees(kmeansInitDefault, ntrees);
    vl_kmeans_set_algorithm(kmeansInitDefault, algorithm);
    vl_kmeans_set_num_repetitions(kmeansInitDefault, nrepetitions);
    vl_kmeans_set_verbosity(kmeansInitDefault, self->verbosity);
    self->kmeansInit = kmeansInitDefault;
    self->kmeansInitIsOwner = 1;
  }

  vl_kmeans_cluster(self->kmeansInit, (const void *)data, self->dimension, numData, self->numClusters);
  vl_kmeans_quantize(self->kmeansInit, assignments, (void *)0, (const void *)data, numData);
  i_d = (unsigned long long int)0;
  for( ; !(i_d >= numData); i_d = i_d + 1ull)
    ((double *)self->posteriors)[(signed long int)((unsigned long int)assignments[(signed long int)i_d] + i_d * self->numClusters)] = (double)1.0;
  _vl_gmm_maximization_d(self, (double *)self->posteriors, (double *)self->priors, (double *)self->covariances, (double *)self->means, data, numData);
  vl_free((void *)assignments);
}

// _vl_gmm_init_with_kmeans_f
// file vl/gmm.c line 1316
static void _vl_gmm_init_with_kmeans_f(struct _VlGMM *self, const float *data, unsigned long long int numData, struct _VlKMeans *kmeansInit)
{
  unsigned long long int i_d;
  unsigned int *assignments;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData);
  assignments = (unsigned int *)return_value_vl_malloc_1;
  _vl_gmm_prepare_for_data(self, numData);
  memset(self->means, 0, sizeof(float) /*4ul*/  * self->numClusters * self->dimension);
  memset(self->priors, 0, sizeof(float) /*4ul*/  * self->numClusters);
  memset(self->covariances, 0, sizeof(float) /*4ul*/  * self->numClusters * self->dimension);
  memset(self->posteriors, 0, sizeof(float) /*4ul*/  * self->numClusters * numData);
  if(!(kmeansInit == ((struct _VlKMeans *)NULL)))
    vl_gmm_set_kmeans_init_object(self, kmeansInit);

  if(self->kmeansInit == ((struct _VlKMeans *)NULL))
  {
    unsigned long long int ncomparisons = numData / (unsigned long int)4 > (unsigned long int)10 ? numData / (unsigned long int)4 : (unsigned long int)10;
    unsigned long long int niter = (unsigned long long int)5;
    unsigned long long int ntrees = (unsigned long long int)1;
    unsigned long long int nrepetitions = (unsigned long long int)1;
    enum _VlKMeansAlgorithm algorithm = (enum _VlKMeansAlgorithm)VlKMeansANN;
    enum _VlKMeansInitialization initialization = (enum _VlKMeansInitialization)VlKMeansRandomSelection;
    struct _VlKMeans *kmeansInitDefault;
    kmeansInitDefault=vl_kmeans_new(self->dataType, (enum _VlVectorComparisonType)VlDistanceL2);
    vl_kmeans_set_initialization(kmeansInitDefault, initialization);
    vl_kmeans_set_max_num_iterations(kmeansInitDefault, niter);
    vl_kmeans_set_max_num_comparisons(kmeansInitDefault, ncomparisons);
    vl_kmeans_set_num_trees(kmeansInitDefault, ntrees);
    vl_kmeans_set_algorithm(kmeansInitDefault, algorithm);
    vl_kmeans_set_num_repetitions(kmeansInitDefault, nrepetitions);
    vl_kmeans_set_verbosity(kmeansInitDefault, self->verbosity);
    self->kmeansInit = kmeansInitDefault;
    self->kmeansInitIsOwner = 1;
  }

  vl_kmeans_cluster(self->kmeansInit, (const void *)data, self->dimension, numData, self->numClusters);
  vl_kmeans_quantize(self->kmeansInit, assignments, (void *)0, (const void *)data, numData);
  i_d = (unsigned long long int)0;
  for( ; !(i_d >= numData); i_d = i_d + 1ull)
    ((float *)self->posteriors)[(signed long int)((unsigned long int)assignments[(signed long int)i_d] + i_d * self->numClusters)] = (float)1.0;
  _vl_gmm_maximization_f(self, (float *)self->posteriors, (float *)self->priors, (float *)self->covariances, (float *)self->means, data, numData);
  vl_free((void *)assignments);
}

// _vl_gmm_init_with_rand_data_d
// file vl/gmm.c line 1416
static void _vl_gmm_init_with_rand_data_d(struct _VlGMM *self, const double *data, unsigned long long int numData)
{
  unsigned long long int i;
  unsigned long long int k;
  unsigned long long int dim;
  struct _VlKMeans *kmeans;
  _vl_gmm_prepare_for_data(self, numData);
  i = (unsigned long long int)0;
  for( ; !(i >= self->numClusters); i = i + 1ull)
    ((double *)self->priors)[(signed long int)i] = (double)(1.0 / (double)self->numClusters);
  _vl_gmm_compute_init_sigma_d(self, data, (double *)self->covariances, self->dimension, numData);
  k = (unsigned long long int)1;
  for( ; !(k >= self->numClusters); k = k + 1ull)
  {
    dim = (unsigned long long int)0;
    for( ; !(dim >= self->dimension); dim = dim + 1ull)
      ((double *)self->covariances + (signed long int)(k * self->dimension))[(signed long int)dim] = ((double *)self->covariances)[(signed long int)dim];
  }
  kmeans=vl_kmeans_new(self->dataType, (enum _VlVectorComparisonType)VlDistanceL2);
  vl_kmeans_init_centers_plus_plus(kmeans, (const void *)data, self->dimension, numData, self->numClusters);
  const void *return_value_vl_kmeans_get_centers_1;
  return_value_vl_kmeans_get_centers_1=vl_kmeans_get_centers(kmeans);
  memcpy(self->means, return_value_vl_kmeans_get_centers_1, sizeof(double) /*8ul*/  * self->dimension * self->numClusters);
  vl_kmeans_delete(kmeans);
}

// _vl_gmm_init_with_rand_data_f
// file vl/gmm.c line 1416
static void _vl_gmm_init_with_rand_data_f(struct _VlGMM *self, const float *data, unsigned long long int numData)
{
  unsigned long long int i;
  unsigned long long int k;
  unsigned long long int dim;
  struct _VlKMeans *kmeans;
  _vl_gmm_prepare_for_data(self, numData);
  i = (unsigned long long int)0;
  for( ; !(i >= self->numClusters); i = i + 1ull)
    ((float *)self->priors)[(signed long int)i] = (float)(1.0 / (double)self->numClusters);
  _vl_gmm_compute_init_sigma_f(self, data, (float *)self->covariances, self->dimension, numData);
  k = (unsigned long long int)1;
  for( ; !(k >= self->numClusters); k = k + 1ull)
  {
    dim = (unsigned long long int)0;
    for( ; !(dim >= self->dimension); dim = dim + 1ull)
      ((float *)self->covariances + (signed long int)(k * self->dimension))[(signed long int)dim] = ((float *)self->covariances)[(signed long int)dim];
  }
  kmeans=vl_kmeans_new(self->dataType, (enum _VlVectorComparisonType)VlDistanceL2);
  vl_kmeans_init_centers_plus_plus(kmeans, (const void *)data, self->dimension, numData, self->numClusters);
  const void *return_value_vl_kmeans_get_centers_1;
  return_value_vl_kmeans_get_centers_1=vl_kmeans_get_centers(kmeans);
  memcpy(self->means, return_value_vl_kmeans_get_centers_1, sizeof(float) /*4ul*/  * self->dimension * self->numClusters);
  vl_kmeans_delete(kmeans);
}

// _vl_gmm_maximization_d
// file vl/gmm.c line 1037
static void _vl_gmm_maximization_d(struct _VlGMM *self, double *posteriors, double *priors, double *covariances, double *means, const double *data, unsigned long long int numData)
{
  unsigned long long int numClusters = self->numClusters;
  signed long long int i_d;
  signed long long int i_cl;
  unsigned long long int dim;
  double *oldMeans;
  double time = (double)0;
  if(self->verbosity >= 2)
  {
    signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
    return_value_vl_get_printf_func_1=vl_get_printf_func();
    return_value_vl_get_printf_func_1("gmm: em: entering maximization step\n");
    time=vl_get_cpu_time();
  }

  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(double) /*8ul*/  * self->dimension * numClusters);
  oldMeans = (double *)return_value_vl_malloc_2;
  memcpy((void *)oldMeans, (const void *)means, sizeof(double) /*8ul*/  * self->dimension * numClusters);
  memset((void *)priors, 0, sizeof(double) /*8ul*/  * numClusters);
  memset((void *)means, 0, sizeof(double) /*8ul*/  * self->dimension * numClusters);
  memset((void *)covariances, 0, sizeof(double) /*8ul*/  * self->dimension * numClusters);
  double *clusterPosteriorSum_;
  double *means_;
  double *covariances_;
  void *return_value_vl_calloc_3;
  return_value_vl_calloc_3=vl_calloc(sizeof(double) /*8ul*/ , numClusters);
  clusterPosteriorSum_ = (double *)return_value_vl_calloc_3;
  void *return_value_vl_calloc_4;
  return_value_vl_calloc_4=vl_calloc(sizeof(double) /*8ul*/ , self->dimension * numClusters);
  means_ = (double *)return_value_vl_calloc_4;
  void *return_value_vl_calloc_5;
  return_value_vl_calloc_5=vl_calloc(sizeof(double) /*8ul*/ , self->dimension * numClusters);
  covariances_ = (double *)return_value_vl_calloc_5;
  i_d = (signed long long int)0;
  for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
  {
    i_cl = (signed long long int)0;
    for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    {
      double p = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * self->numClusters)];
      signed int calculated = 0;
      if(!(p < 1e-2 / (double)numClusters))
      {
        clusterPosteriorSum_[i_cl] = clusterPosteriorSum_[i_cl] + p;
        if(calculated == 0)
        {
          dim = (unsigned long long int)0;
          for( ; !(dim >= self->dimension); dim = dim + 1ull)
          {
            double x = data[(signed long int)((unsigned long int)i_d * self->dimension + dim)];
            double mu = oldMeans[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
            double _vl_gmm_maximization_d__1__2__2__1__1__1__2__1__1__diff = x - mu;
            means_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = means_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] + p * x;
            covariances_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = covariances_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] + p * _vl_gmm_maximization_d__1__2__2__1__1__1__2__1__1__diff * _vl_gmm_maximization_d__1__2__2__1__1__1__2__1__1__diff;
          }
        }

      }

    }
  }
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    priors[i_cl] = priors[i_cl] + clusterPosteriorSum_[i_cl];
    dim = (unsigned long long int)0;
    for( ; !(dim >= self->dimension); dim = dim + 1ull)
    {
      means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] + means_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
      covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] + covariances_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
    }
  }
  vl_free((void *)means_);
  vl_free((void *)covariances_);
  vl_free((void *)clusterPosteriorSum_);
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    double mass = priors[i_cl];
    if(mass >= 1e-6 / (double)numClusters)
    {
      dim = (unsigned long long int)0;
      for( ; !(dim >= self->dimension); dim = dim + 1ull)
      {
        means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] / mass;
        covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] / mass;
      }
    }

  }
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    double _vl_gmm_maximization_d__1__4__1__mass = priors[i_cl];
    if(_vl_gmm_maximization_d__1__4__1__mass >= 1e-6 / (double)numClusters)
    {
      dim = (unsigned long long int)0;
      for( ; !(dim >= self->dimension); dim = dim + 1ull)
      {
        double _vl_gmm_maximization_d__1__4__1__1__1__1__mu = means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
        double oldMu = oldMeans[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
        double diff = _vl_gmm_maximization_d__1__4__1__1__1__1__mu - oldMu;
        covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] - diff * diff;
      }
    }

  }
  _vl_gmm_apply_bounds_d(self);
  double sum = (double)0;
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    sum = sum + priors[i_cl];
  sum = sum > 1e-12 ? sum : 1e-12;
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    priors[i_cl] = priors[i_cl] / sum;
  if(self->verbosity >= 2)
  {
    signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
    return_value_vl_get_printf_func_6=vl_get_printf_func();
    double return_value_vl_get_cpu_time_7;
    return_value_vl_get_cpu_time_7=vl_get_cpu_time();
    return_value_vl_get_printf_func_6("gmm: em: maximization step completed in %.2f s\n", return_value_vl_get_cpu_time_7 - time);
  }

  vl_free((void *)oldMeans);
}

// _vl_gmm_maximization_f
// file vl/gmm.c line 1037
static void _vl_gmm_maximization_f(struct _VlGMM *self, float *posteriors, float *priors, float *covariances, float *means, const float *data, unsigned long long int numData)
{
  unsigned long long int numClusters = self->numClusters;
  signed long long int i_d;
  signed long long int i_cl;
  unsigned long long int dim;
  float *oldMeans;
  double time = (double)0;
  if(self->verbosity >= 2)
  {
    signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
    return_value_vl_get_printf_func_1=vl_get_printf_func();
    return_value_vl_get_printf_func_1("gmm: em: entering maximization step\n");
    time=vl_get_cpu_time();
  }

  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * self->dimension * numClusters);
  oldMeans = (float *)return_value_vl_malloc_2;
  memcpy((void *)oldMeans, (const void *)means, sizeof(float) /*4ul*/  * self->dimension * numClusters);
  memset((void *)priors, 0, sizeof(float) /*4ul*/  * numClusters);
  memset((void *)means, 0, sizeof(float) /*4ul*/  * self->dimension * numClusters);
  memset((void *)covariances, 0, sizeof(float) /*4ul*/  * self->dimension * numClusters);
  float *clusterPosteriorSum_;
  float *means_;
  float *covariances_;
  void *return_value_vl_calloc_3;
  return_value_vl_calloc_3=vl_calloc(sizeof(float) /*4ul*/ , numClusters);
  clusterPosteriorSum_ = (float *)return_value_vl_calloc_3;
  void *return_value_vl_calloc_4;
  return_value_vl_calloc_4=vl_calloc(sizeof(float) /*4ul*/ , self->dimension * numClusters);
  means_ = (float *)return_value_vl_calloc_4;
  void *return_value_vl_calloc_5;
  return_value_vl_calloc_5=vl_calloc(sizeof(float) /*4ul*/ , self->dimension * numClusters);
  covariances_ = (float *)return_value_vl_calloc_5;
  i_d = (signed long long int)0;
  for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
  {
    i_cl = (signed long long int)0;
    for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    {
      float p = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * self->numClusters)];
      signed int calculated = 0;
      if(!((double)p < 1e-2 / (double)numClusters))
      {
        clusterPosteriorSum_[i_cl] = clusterPosteriorSum_[i_cl] + p;
        if(calculated == 0)
        {
          dim = (unsigned long long int)0;
          for( ; !(dim >= self->dimension); dim = dim + 1ull)
          {
            float x = data[(signed long int)((unsigned long int)i_d * self->dimension + dim)];
            float mu = oldMeans[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
            float diff = x - mu;
            means_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = means_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] + p * x;
            covariances_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = covariances_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] + p * diff * diff;
          }
        }

      }

    }
  }
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    priors[i_cl] = priors[i_cl] + clusterPosteriorSum_[i_cl];
    dim = (unsigned long long int)0;
    for( ; !(dim >= self->dimension); dim = dim + 1ull)
    {
      means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] + means_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
      covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] + covariances_[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
    }
  }
  vl_free((void *)means_);
  vl_free((void *)covariances_);
  vl_free((void *)clusterPosteriorSum_);
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    float mass = priors[i_cl];
    if((double)mass >= 1e-6 / (double)numClusters)
    {
      dim = (unsigned long long int)0;
      for( ; !(dim >= self->dimension); dim = dim + 1ull)
      {
        means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] / mass;
        covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] / mass;
      }
    }

  }
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    float _vl_gmm_maximization_f__1__4__1__mass = priors[i_cl];
    if((double)_vl_gmm_maximization_f__1__4__1__mass >= 1e-6 / (double)numClusters)
    {
      dim = (unsigned long long int)0;
      for( ; !(dim >= self->dimension); dim = dim + 1ull)
      {
        float _vl_gmm_maximization_f__1__4__1__1__1__1__mu = means[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
        float oldMu = oldMeans[(signed long int)((unsigned long int)i_cl * self->dimension + dim)];
        float _vl_gmm_maximization_f__1__4__1__1__1__1__diff = _vl_gmm_maximization_f__1__4__1__1__1__1__mu - oldMu;
        covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] = covariances[(signed long int)((unsigned long int)i_cl * self->dimension + dim)] - _vl_gmm_maximization_f__1__4__1__1__1__1__diff * _vl_gmm_maximization_f__1__4__1__1__1__1__diff;
      }
    }

  }
  _vl_gmm_apply_bounds_f(self);
  float sum = (float)0;
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    sum = sum + priors[i_cl];
  sum = (float)((double)sum > 1e-12 ? (double)sum : 1e-12);
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    priors[i_cl] = priors[i_cl] / sum;
  if(self->verbosity >= 2)
  {
    signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
    return_value_vl_get_printf_func_6=vl_get_printf_func();
    double return_value_vl_get_cpu_time_7;
    return_value_vl_get_cpu_time_7=vl_get_cpu_time();
    return_value_vl_get_printf_func_6("gmm: em: maximization step completed in %.2f s\n", return_value_vl_get_cpu_time_7 - time);
  }

  vl_free((void *)oldMeans);
}

// _vl_gmm_prepare_for_data
// file vl/gmm.c line 337
static void _vl_gmm_prepare_for_data(struct _VlGMM *self, unsigned long long int numData)
{
  if(!(self->numData >= numData))
  {
    vl_free(self->posteriors);
    unsigned long long int return_value_vl_get_type_size_1;
    return_value_vl_get_type_size_1=vl_get_type_size_link1(self->dataType);
    self->posteriors=vl_malloc(return_value_vl_get_type_size_1 * numData * self->numClusters);
  }

  self->numData = numData;
}

// _vl_gmm_restart_empty_modes_d
// file vl/gmm.c line 815
static unsigned long long int _vl_gmm_restart_empty_modes_d(struct _VlGMM *self, const double *data)
{
  unsigned long long int dimension = self->dimension;
  unsigned long long int numClusters = self->numClusters;
  signed long long int i_cl;
  signed long long int j_cl;
  signed long long int i_d;
  signed long long int d;
  unsigned long long int zeroWNum = (unsigned long long int)0;
  double *priors = (double *)self->priors;
  double *means = (double *)self->means;
  double *covariances = (double *)self->covariances;
  double *posteriors = (double *)self->posteriors;
  double *mass;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(double) /*8ul*/ , self->numClusters);
  mass = (double *)return_value_vl_calloc_1;
  double tmp_if_expr_3;
  if(!(numClusters >= 2ul))
    return (unsigned long long int)0;

  else
  {
    unsigned long long int i;
    unsigned long long int k;
    unsigned long long int numNullAssignments = (unsigned long long int)0;
    i = (unsigned long long int)0;
    for( ; !(i >= self->numData); i = i + 1ull)
    {
      k = (unsigned long long int)0;
      for( ; !(k >= self->numClusters); k = k + 1ull)
      {
        double p = ((double *)self->posteriors)[(signed long int)(k + i * self->numClusters)];
        mass[(signed long int)k] = mass[(signed long int)k] + p;
        if(p < 1e-2)
          numNullAssignments = numNullAssignments + 1ull;

      }
    }
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_2)(const char *, ...);
      return_value_vl_get_printf_func_2=vl_get_printf_func();
      return_value_vl_get_printf_func_2("gmm: sparsity of data posterior: %.1f%%\n", ((double)numNullAssignments / (double)(self->numData * self->numClusters)) * (double)100);
    }

    i_cl = (signed long long int)0;
    for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    {
      double size = -vl_infinity_d.value;
      signed long long int best = (signed long long int)-1;
      if((double)self->numData / (double)self->numClusters < 1.0)
        tmp_if_expr_3 = 1.0;

      else
        tmp_if_expr_3 = (double)self->numData / (double)self->numClusters;
      if(!(mass[i_cl] >= 1e-2 * tmp_if_expr_3))
      {
        if(!(self->verbosity == 0))
        {
          signed int (*return_value_vl_get_printf_func_4)(const char *, ...);
          return_value_vl_get_printf_func_4=vl_get_printf_func();
          return_value_vl_get_printf_func_4("gmm: mode %d is nearly empty (mass %f)\n", i_cl, mass[i_cl]);
        }

        j_cl = (signed long long int)0;
        for( ; !(j_cl >= (signed long int)(signed int)numClusters); j_cl = j_cl + 1ll)
        {
          double size_;
          if(!(priors[j_cl] < 1e-6))
          {
            double return_value_log_5;
            return_value_log_5=log((double)2 * 3.141592653589793);
            size_ = +0.5 * (double)dimension * (1.0 + return_value_log_5);
            d = (signed long long int)0;
            for( ; !(d >= (signed long int)(signed int)dimension); d = d + 1ll)
            {
              double sigma2 = covariances[(signed long int)((unsigned long int)j_cl * dimension + (unsigned long int)d)];
              double return_value_log_6;
              return_value_log_6=log(sigma2);
              size_ = size_ + 0.5 * return_value_log_6;
            }
            double return_value_log_7;
            return_value_log_7=log(priors[j_cl]);
            size_ = priors[j_cl] * (size_ - return_value_log_7);
            if(self->verbosity >= 2)
            {
              signed int (*return_value_vl_get_printf_func_8)(const char *, ...);
              return_value_vl_get_printf_func_8=vl_get_printf_func();
              return_value_vl_get_printf_func_8("gmm: mode %d: prior %f, mass %f, entropy contribution %f\n", j_cl, priors[j_cl], mass[j_cl], size_);
            }

            if(size_ > size)
            {
              size = size_;
              best = j_cl;
            }

          }

        }
        j_cl = best;
        if(j_cl == i_cl || !(j_cl >= 0l))
        {
          if(!(self->verbosity == 0))
          {
            signed int (*return_value_vl_get_printf_func_9)(const char *, ...);
            return_value_vl_get_printf_func_9=vl_get_printf_func();
            return_value_vl_get_printf_func_9("gmm: mode %d is empty, but no other mode to split could be found\n", i_cl);
          }

        }

        else
        {
          if(!(self->verbosity == 0))
          {
            signed int (*return_value_vl_get_printf_func_10)(const char *, ...);
            return_value_vl_get_printf_func_10=vl_get_printf_func();
            return_value_vl_get_printf_func_10("gmm: reinitializing empty mode %d with mode %d (prior %f, mass %f, score %f)\n", i_cl, j_cl, priors[j_cl], mass[j_cl], size);
          }

          size = -vl_infinity_d.value;
          best = (signed long long int)-1;
          d = (signed long long int)0;
          for( ; !(d >= (signed long int)(signed int)dimension); d = d + 1ll)
          {
            double _vl_gmm_restart_empty_modes_d__1__3__1__6__1__sigma2 = covariances[(signed long int)((unsigned long int)j_cl * dimension + (unsigned long int)d)];
            if(_vl_gmm_restart_empty_modes_d__1__3__1__6__1__sigma2 > size)
            {
              size = _vl_gmm_restart_empty_modes_d__1__3__1__6__1__sigma2;
              best = d;
            }

          }
          double mu = means[(signed long int)((unsigned long int)best + (unsigned long int)j_cl * self->dimension)];
          i_d = (signed long long int)0;
          for( ; !(i_d >= (signed long int)(signed int)self->numData); i_d = i_d + 1ll)
          {
            double _vl_gmm_restart_empty_modes_d__1__3__1__7__1__1__p = posteriors[(signed long int)((unsigned long int)j_cl + self->numClusters * (unsigned long int)i_d)];
            double q = posteriors[(signed long int)((unsigned long int)i_cl + self->numClusters * (unsigned long int)i_d)];
            if(data[(signed long int)self->dimension * (signed long int)(unsigned long int)i_d + (signed long int)(unsigned long int)best] < mu)
            {
              posteriors[(signed long int)((unsigned long int)i_cl + self->numClusters * (unsigned long int)i_d)] = _vl_gmm_restart_empty_modes_d__1__3__1__7__1__1__p + q;
              posteriors[(signed long int)((unsigned long int)j_cl + self->numClusters * (unsigned long int)i_d)] = (double)0;
            }

            else
            {
              posteriors[(signed long int)((unsigned long int)i_cl + self->numClusters * (unsigned long int)i_d)] = (double)0;
              posteriors[(signed long int)((unsigned long int)j_cl + self->numClusters * (unsigned long int)i_d)] = _vl_gmm_restart_empty_modes_d__1__3__1__7__1__1__p + q;
            }
          }
          _vl_gmm_maximization_d(self, posteriors, priors, covariances, means, data, self->numData);
        }
      }

    }
    return zeroWNum;
  }
}

// _vl_gmm_restart_empty_modes_f
// file vl/gmm.c line 815
static unsigned long long int _vl_gmm_restart_empty_modes_f(struct _VlGMM *self, const float *data)
{
  unsigned long long int dimension = self->dimension;
  unsigned long long int numClusters = self->numClusters;
  signed long long int i_cl;
  signed long long int j_cl;
  signed long long int i_d;
  signed long long int d;
  unsigned long long int zeroWNum = (unsigned long long int)0;
  float *priors = (float *)self->priors;
  float *means = (float *)self->means;
  float *covariances = (float *)self->covariances;
  float *posteriors = (float *)self->posteriors;
  float *mass;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(float) /*4ul*/ , self->numClusters);
  mass = (float *)return_value_vl_calloc_1;
  double tmp_if_expr_3;
  if(!(numClusters >= 2ul))
    return (unsigned long long int)0;

  else
  {
    unsigned long long int i;
    unsigned long long int k;
    unsigned long long int numNullAssignments = (unsigned long long int)0;
    i = (unsigned long long int)0;
    for( ; !(i >= self->numData); i = i + 1ull)
    {
      k = (unsigned long long int)0;
      for( ; !(k >= self->numClusters); k = k + 1ull)
      {
        float p = ((float *)self->posteriors)[(signed long int)(k + i * self->numClusters)];
        mass[(signed long int)k] = mass[(signed long int)k] + p;
        if((double)p < 1e-2)
          numNullAssignments = numNullAssignments + 1ull;

      }
    }
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_2)(const char *, ...);
      return_value_vl_get_printf_func_2=vl_get_printf_func();
      return_value_vl_get_printf_func_2("gmm: sparsity of data posterior: %.1f%%\n", ((double)numNullAssignments / (double)(self->numData * self->numClusters)) * (double)100);
    }

    i_cl = (signed long long int)0;
    for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    {
      double size = -vl_infinity_d.value;
      signed long long int best = (signed long long int)-1;
      if((double)self->numData / (double)self->numClusters < 1.0)
        tmp_if_expr_3 = 1.0;

      else
        tmp_if_expr_3 = (double)self->numData / (double)self->numClusters;
      if(!((double)mass[i_cl] >= 1e-2 * tmp_if_expr_3))
      {
        if(!(self->verbosity == 0))
        {
          signed int (*return_value_vl_get_printf_func_4)(const char *, ...);
          return_value_vl_get_printf_func_4=vl_get_printf_func();
          return_value_vl_get_printf_func_4("gmm: mode %d is nearly empty (mass %f)\n", i_cl, mass[i_cl]);
        }

        j_cl = (signed long long int)0;
        for( ; !(j_cl >= (signed long int)(signed int)numClusters); j_cl = j_cl + 1ll)
        {
          double size_;
          if(!((double)priors[j_cl] < 1e-6))
          {
            double return_value_log_5;
            return_value_log_5=log((double)2 * 3.141592653589793);
            size_ = +0.5 * (double)dimension * (1.0 + return_value_log_5);
            d = (signed long long int)0;
            for( ; !(d >= (signed long int)(signed int)dimension); d = d + 1ll)
            {
              double sigma2 = (double)covariances[(signed long int)((unsigned long int)j_cl * dimension + (unsigned long int)d)];
              double return_value_log_6;
              return_value_log_6=log(sigma2);
              size_ = size_ + 0.5 * return_value_log_6;
            }
            double return_value_log_7;
            return_value_log_7=log((double)priors[j_cl]);
            size_ = (double)priors[j_cl] * (size_ - return_value_log_7);
            if(self->verbosity >= 2)
            {
              signed int (*return_value_vl_get_printf_func_8)(const char *, ...);
              return_value_vl_get_printf_func_8=vl_get_printf_func();
              return_value_vl_get_printf_func_8("gmm: mode %d: prior %f, mass %f, entropy contribution %f\n", j_cl, priors[j_cl], mass[j_cl], size_);
            }

            if(size_ > size)
            {
              size = size_;
              best = j_cl;
            }

          }

        }
        j_cl = best;
        if(j_cl == i_cl || !(j_cl >= 0l))
        {
          if(!(self->verbosity == 0))
          {
            signed int (*return_value_vl_get_printf_func_9)(const char *, ...);
            return_value_vl_get_printf_func_9=vl_get_printf_func();
            return_value_vl_get_printf_func_9("gmm: mode %d is empty, but no other mode to split could be found\n", i_cl);
          }

        }

        else
        {
          if(!(self->verbosity == 0))
          {
            signed int (*return_value_vl_get_printf_func_10)(const char *, ...);
            return_value_vl_get_printf_func_10=vl_get_printf_func();
            return_value_vl_get_printf_func_10("gmm: reinitializing empty mode %d with mode %d (prior %f, mass %f, score %f)\n", i_cl, j_cl, priors[j_cl], mass[j_cl], size);
          }

          size = -vl_infinity_d.value;
          best = (signed long long int)-1;
          d = (signed long long int)0;
          for( ; !(d >= (signed long int)(signed int)dimension); d = d + 1ll)
          {
            double _vl_gmm_restart_empty_modes_f__1__3__1__6__1__sigma2 = (double)covariances[(signed long int)((unsigned long int)j_cl * dimension + (unsigned long int)d)];
            if(_vl_gmm_restart_empty_modes_f__1__3__1__6__1__sigma2 > size)
            {
              size = _vl_gmm_restart_empty_modes_f__1__3__1__6__1__sigma2;
              best = d;
            }

          }
          float mu = means[(signed long int)((unsigned long int)best + (unsigned long int)j_cl * self->dimension)];
          i_d = (signed long long int)0;
          for( ; !(i_d >= (signed long int)(signed int)self->numData); i_d = i_d + 1ll)
          {
            float _vl_gmm_restart_empty_modes_f__1__3__1__7__1__1__p = posteriors[(signed long int)((unsigned long int)j_cl + self->numClusters * (unsigned long int)i_d)];
            float q = posteriors[(signed long int)((unsigned long int)i_cl + self->numClusters * (unsigned long int)i_d)];
            if(data[(signed long int)self->dimension * (signed long int)(unsigned long int)i_d + (signed long int)(unsigned long int)best] < mu)
            {
              posteriors[(signed long int)((unsigned long int)i_cl + self->numClusters * (unsigned long int)i_d)] = _vl_gmm_restart_empty_modes_f__1__3__1__7__1__1__p + q;
              posteriors[(signed long int)((unsigned long int)j_cl + self->numClusters * (unsigned long int)i_d)] = (float)0;
            }

            else
            {
              posteriors[(signed long int)((unsigned long int)i_cl + self->numClusters * (unsigned long int)i_d)] = (float)0;
              posteriors[(signed long int)((unsigned long int)j_cl + self->numClusters * (unsigned long int)i_d)] = _vl_gmm_restart_empty_modes_f__1__3__1__7__1__1__p + q;
            }
          }
          _vl_gmm_maximization_f(self, posteriors, priors, covariances, means, data, self->numData);
        }
      }

    }
    return zeroWNum;
  }
}

// _vl_harris_response
// file vl/covdet.c line 1837
static void _vl_harris_response(float *harris, const float *image, unsigned long long int width, unsigned long long int height, double step, double sigma, double sigmaI, double alpha)
{
  float factor;
  double return_value_pow_1;
  return_value_pow_1=pow(sigma / step, 4.0);
  factor = (float)return_value_pow_1;
  signed long long int k;
  float *LxLx;
  float *LyLy;
  float *LxLy;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * width * height);
  LxLx = (float *)return_value_vl_malloc_2;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(float) /*4ul*/  * width * height);
  LyLy = (float *)return_value_vl_malloc_3;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(float) /*4ul*/  * width * height);
  LxLy = (float *)return_value_vl_malloc_4;
  vl_imgradient_f(LxLx, LyLy, (unsigned long long int)1, width, image, width, height, width);
  k = (signed long long int)0;
  for( ; !(k >= (signed long int)((signed int)height * (signed int)width)); k = k + 1ll)
  {
    float dx = LxLx[k];
    float dy = LyLy[k];
    LxLx[k] = dx * dx;
    LyLy[k] = dy * dy;
    LxLy[k] = dx * dy;
  }
  vl_imsmooth_f(LxLx, width, LxLx, width, height, width, sigmaI / step, sigmaI / step);
  vl_imsmooth_f(LyLy, width, LyLy, width, height, width, sigmaI / step, sigmaI / step);
  vl_imsmooth_f(LxLy, width, LxLy, width, height, width, sigmaI / step, sigmaI / step);
  k = (signed long long int)0;
  for( ; !(k >= (signed long int)((signed int)height * (signed int)width)); k = k + 1ll)
  {
    float a = LxLx[k];
    float b = LyLy[k];
    float c = LxLy[k];
    float determinant = a * b - c * c;
    float trace = a + b;
    harris[k] = (float)((double)factor * ((double)determinant - alpha * (double)(trace * trace)));
  }
  vl_free((void *)LxLy);
  vl_free((void *)LyLy);
  vl_free((void *)LxLx);
}

// _vl_kernel_chi2_d
// file vl/mathop.c line 406
extern double _vl_kernel_chi2_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  while(!(X >= X_end))
  {
    double a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    double b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    double denom = a + b;
    if(IEEE_FLOAT_NOTEQUAL(denom, 0.000000))
    {
      double numer = (double)2 * a * b;
      double ratio = numer / denom;
      acc = acc + ratio;
    }

  }
  return acc;
}

// _vl_kernel_chi2_f
// file vl/mathop.c line 406
extern float _vl_kernel_chi2_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  while(!(X >= X_end))
  {
    float a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    float b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    float denom = a + b;
    if(IEEE_FLOAT_NOTEQUAL(denom, 0.000000f))
    {
      float numer = (float)2 * a * b;
      float ratio = numer / denom;
      acc = acc + ratio;
    }

  }
  return acc;
}

// _vl_kernel_hellinger_d
// file vl/mathop.c line 425
extern double _vl_kernel_hellinger_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  while(!(X >= X_end))
  {
    double a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    double b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    double return_value_sqrt_3;
    return_value_sqrt_3=sqrt(a * b);
    acc = acc + return_value_sqrt_3;
  }
  return acc;
}

// _vl_kernel_hellinger_f
// file vl/mathop.c line 425
extern float _vl_kernel_hellinger_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  while(!(X >= X_end))
  {
    float a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    float b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    float return_value_sqrtf_3;
    return_value_sqrtf_3=sqrtf(a * b);
    acc = acc + return_value_sqrtf_3;
  }
  return acc;
}

// _vl_kernel_js_d
// file vl/mathop.c line 443
extern double _vl_kernel_js_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  double return_value_vl_log2_d_3;
  double return_value_vl_log2_d_4;
  while(!(X >= X_end))
  {
    double x;
    tmp_post_1 = X;
    X = X + 1l;
    x = *tmp_post_1;
    double y;
    tmp_post_2 = Y;
    Y = Y + 1l;
    y = *tmp_post_2;
    if(IEEE_FLOAT_NOTEQUAL(x, 0.000000))
    {
      return_value_vl_log2_d_3=vl_log2_d((double)1 + y / x);
      acc = acc + x * return_value_vl_log2_d_3;
    }

    if(IEEE_FLOAT_NOTEQUAL(y, 0.000000))
    {
      return_value_vl_log2_d_4=vl_log2_d((double)1 + x / y);
      acc = acc + y * return_value_vl_log2_d_4;
    }

  }
  return (double)0.5 * acc;
}

// _vl_kernel_js_f
// file vl/mathop.c line 443
extern float _vl_kernel_js_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  float return_value_vl_log2_f_3;
  float return_value_vl_log2_f_4;
  while(!(X >= X_end))
  {
    float x;
    tmp_post_1 = X;
    X = X + 1l;
    x = *tmp_post_1;
    float y;
    tmp_post_2 = Y;
    Y = Y + 1l;
    y = *tmp_post_2;
    if(IEEE_FLOAT_NOTEQUAL(x, 0.000000f))
    {
      return_value_vl_log2_f_3=vl_log2_f((float)1 + y / x);
      acc = acc + x * return_value_vl_log2_f_3;
    }

    if(IEEE_FLOAT_NOTEQUAL(y, 0.000000f))
    {
      return_value_vl_log2_f_4=vl_log2_f((float)1 + x / y);
      acc = acc + y * return_value_vl_log2_f_4;
    }

  }
  return (float)0.5 * acc;
}

// _vl_kernel_l1_d
// file vl/mathop.c line 390
extern double _vl_kernel_l1_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  while(!(X >= X_end))
  {
    double a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    double b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    double a_;
    a_=vl_abs_d(a);
    double b_;
    b_=vl_abs_d(b);
    double return_value_vl_abs_d_3;
    return_value_vl_abs_d_3=vl_abs_d(a - b);
    acc = acc + ((a_ + b_) - return_value_vl_abs_d_3);
  }
  return acc / (double)2;
}

// _vl_kernel_l1_f
// file vl/mathop.c line 390
extern float _vl_kernel_l1_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  while(!(X >= X_end))
  {
    float a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    float b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    float a_;
    a_=vl_abs_f(a);
    float b_;
    b_=vl_abs_f(b);
    float return_value_vl_abs_f_3;
    return_value_vl_abs_f_3=vl_abs_f(a - b);
    acc = acc + ((a_ + b_) - return_value_vl_abs_f_3);
  }
  return acc / (float)2;
}

// _vl_kernel_l2_d
// file vl/mathop.c line 376
extern double _vl_kernel_l2_d(unsigned long long int dimension, const double *X, const double *Y)
{
  const double *X_end = X + (signed long int)dimension;
  double acc = 0.0;
  const double *tmp_post_1;
  const double *tmp_post_2;
  while(!(X >= X_end))
  {
    double a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    double b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    acc = acc + a * b;
  }
  return acc;
}

// _vl_kernel_l2_f
// file vl/mathop.c line 376
extern float _vl_kernel_l2_f(unsigned long long int dimension, const float *X, const float *Y)
{
  const float *X_end = X + (signed long int)dimension;
  float acc = (float)0.0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  while(!(X >= X_end))
  {
    float a;
    tmp_post_1 = X;
    X = X + 1l;
    a = *tmp_post_1;
    float b;
    tmp_post_2 = Y;
    Y = Y + 1l;
    b = *tmp_post_2;
    acc = acc + a * b;
  }
  return acc;
}

// _vl_kmeans_d_qsort_cmp
// file vl/kmeans.c line 782
static inline double _vl_kmeans_d_qsort_cmp(struct _VlKMeansSortWrapper *array, unsigned long long int indexA, unsigned long long int indexB)
{
  return ((double *)array->data)[(signed long int)((unsigned long int)array->permutation[(signed long int)indexA] * array->stride)] - ((double *)array->data)[(signed long int)((unsigned long int)array->permutation[(signed long int)indexB] * array->stride)];
}

// _vl_kmeans_d_qsort_sort
// file vl/qsort-def.h line 183
static inline void _vl_kmeans_d_qsort_sort(struct _VlKMeansSortWrapper *array, unsigned long long int size)
{
  _vl_kmeans_d_qsort_sort_recursive(array, (unsigned long long int)0, size - (unsigned long int)1);
}

// _vl_kmeans_d_qsort_sort_recursive
// file vl/qsort-def.h line 127
static inline void _vl_kmeans_d_qsort_sort_recursive(struct _VlKMeansSortWrapper *array, unsigned long long int begin, unsigned long long int end)
{
  unsigned long long int pivot = (end + begin) / (unsigned long int)2;
  unsigned long long int lowPart;
  unsigned long long int i;
  _vl_kmeans_d_qsort_swap(array, pivot, end);
  pivot = end;
  lowPart = begin;
  i = begin;
  for( ; !(i >= end); i = i + 1ull)
  {
    double return_value__vl_kmeans_d_qsort_cmp_1;
    return_value__vl_kmeans_d_qsort_cmp_1=_vl_kmeans_d_qsort_cmp(array, i, pivot);
    if(return_value__vl_kmeans_d_qsort_cmp_1 <= 0.000000)
    {
      _vl_kmeans_d_qsort_swap(array, lowPart, i);
      lowPart = lowPart + 1ull;
    }

  }
  _vl_kmeans_d_qsort_swap(array, lowPart, pivot);
  pivot = lowPart;
  if(!(begin >= pivot))
    _vl_kmeans_d_qsort_sort_recursive(array, begin, pivot - (unsigned long int)1);

  if(!(pivot >= end))
    _vl_kmeans_d_qsort_sort_recursive(array, pivot + (unsigned long int)1, end);

}

// _vl_kmeans_d_qsort_swap
// file vl/kmeans.c line 792
static inline void _vl_kmeans_d_qsort_swap(struct _VlKMeansSortWrapper *array, unsigned long long int indexA, unsigned long long int indexB)
{
  unsigned int tmp = array->permutation[(signed long int)indexA];
  array->permutation[(signed long int)indexA] = array->permutation[(signed long int)indexB];
  array->permutation[(signed long int)indexB] = tmp;
}

// _vl_kmeans_f_qsort_cmp
// file vl/kmeans.c line 782
static inline float _vl_kmeans_f_qsort_cmp(struct _VlKMeansSortWrapper *array, unsigned long long int indexA, unsigned long long int indexB)
{
  return ((float *)array->data)[(signed long int)((unsigned long int)array->permutation[(signed long int)indexA] * array->stride)] - ((float *)array->data)[(signed long int)((unsigned long int)array->permutation[(signed long int)indexB] * array->stride)];
}

// _vl_kmeans_f_qsort_sort
// file vl/qsort-def.h line 183
static inline void _vl_kmeans_f_qsort_sort(struct _VlKMeansSortWrapper *array, unsigned long long int size)
{
  _vl_kmeans_f_qsort_sort_recursive(array, (unsigned long long int)0, size - (unsigned long int)1);
}

// _vl_kmeans_f_qsort_sort_recursive
// file vl/qsort-def.h line 127
static inline void _vl_kmeans_f_qsort_sort_recursive(struct _VlKMeansSortWrapper *array, unsigned long long int begin, unsigned long long int end)
{
  unsigned long long int pivot = (end + begin) / (unsigned long int)2;
  unsigned long long int lowPart;
  unsigned long long int i;
  _vl_kmeans_f_qsort_swap(array, pivot, end);
  pivot = end;
  lowPart = begin;
  i = begin;
  for( ; !(i >= end); i = i + 1ull)
  {
    float return_value__vl_kmeans_f_qsort_cmp_1;
    return_value__vl_kmeans_f_qsort_cmp_1=_vl_kmeans_f_qsort_cmp(array, i, pivot);
    if(return_value__vl_kmeans_f_qsort_cmp_1 <= 0.000000f)
    {
      _vl_kmeans_f_qsort_swap(array, lowPart, i);
      lowPart = lowPart + 1ull;
    }

  }
  _vl_kmeans_f_qsort_swap(array, lowPart, pivot);
  pivot = lowPart;
  if(!(begin >= pivot))
    _vl_kmeans_f_qsort_sort_recursive(array, begin, pivot - (unsigned long int)1);

  if(!(pivot >= end))
    _vl_kmeans_f_qsort_sort_recursive(array, pivot + (unsigned long int)1, end);

}

// _vl_kmeans_f_qsort_swap
// file vl/kmeans.c line 792
static inline void _vl_kmeans_f_qsort_swap(struct _VlKMeansSortWrapper *array, unsigned long long int indexA, unsigned long long int indexB)
{
  unsigned int tmp = array->permutation[(signed long int)indexA];
  array->permutation[(signed long int)indexA] = array->permutation[(signed long int)indexB];
  array->permutation[(signed long int)indexB] = tmp;
}

// _vl_kmeans_init_centers_plus_plus_d
// file vl/kmeans.c line 589
static void _vl_kmeans_init_centers_plus_plus_d(struct _VlKMeans *self, const double *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters)
{
  unsigned long long int x;
  unsigned long long int c;
  struct _VlRand *rand;
  rand=vl_get_rand();
  double *distances;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * numData);
  distances = (double *)return_value_vl_malloc_1;
  double *minDistances;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(double) /*8ul*/  * numData);
  minDistances = (double *)return_value_vl_malloc_2;
  double (*distFn)(unsigned long long int, const double *, const double *);
  distFn=vl_get_vector_comparison_function_d(self->distance);
  self->dimension = dimension;
  self->numCenters = numCenters;
  self->centers=vl_malloc(sizeof(double) /*8ul*/  * dimension * numCenters);
  x = (unsigned long long int)0;
  for( ; !(x >= numData); x = x + 1ull)
    minDistances[(signed long int)x] = (double)vl_infinity_d_link2.value;
  x=vl_rand_uindex(rand, numData);
  c = (unsigned long long int)0;
  double tmp_if_expr_4;
  while((_Bool)1)
  {
    double energy = (double)0;
    double acc = (double)0;
    double thresh;
    double return_value_vl_rand_real1_3;
    return_value_vl_rand_real1_3=vl_rand_real1(rand);
    thresh = (double)return_value_vl_rand_real1_3;
    memcpy((void *)((double *)self->centers + (signed long int)(c * dimension)), (const void *)(data + (signed long int)(x * dimension)), sizeof(double) /*8ul*/  * dimension);
    c = c + 1ull;
    if(c == numCenters)
      break;

    vl_eval_vector_comparison_on_all_pairs_d(distances, dimension, (double *)self->centers + (signed long int)((c - (unsigned long int)1) * dimension), (unsigned long long int)1, data, numData, distFn);
    x = (unsigned long long int)0;
    for( ; !(x >= numData); x = x + 1ull)
    {
      if(minDistances[(signed long int)x] < distances[(signed long int)x])
        tmp_if_expr_4 = minDistances[(signed long int)x];

      else
        tmp_if_expr_4 = distances[(signed long int)x];
      minDistances[(signed long int)x] = tmp_if_expr_4;
      energy = energy + minDistances[(signed long int)x];
    }
    x = (unsigned long long int)0;
    for( ; !(x >= numData + 18446744073709551615ul); x = x + 1ull)
    {
      acc = acc + minDistances[(signed long int)x];
      if(acc >= thresh * energy)
        break;

    }
  }
  vl_free((void *)distances);
  vl_free((void *)minDistances);
}

// _vl_kmeans_init_centers_plus_plus_f
// file vl/kmeans.c line 589
static void _vl_kmeans_init_centers_plus_plus_f(struct _VlKMeans *self, const float *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters)
{
  unsigned long long int x;
  unsigned long long int c;
  struct _VlRand *rand;
  rand=vl_get_rand();
  float *distances;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * numData);
  distances = (float *)return_value_vl_malloc_1;
  float *minDistances;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * numData);
  minDistances = (float *)return_value_vl_malloc_2;
  float (*distFn)(unsigned long long int, const float *, const float *);
  distFn=vl_get_vector_comparison_function_f(self->distance);
  self->dimension = dimension;
  self->numCenters = numCenters;
  self->centers=vl_malloc(sizeof(float) /*4ul*/  * dimension * numCenters);
  x = (unsigned long long int)0;
  for( ; !(x >= numData); x = x + 1ull)
    minDistances[(signed long int)x] = (float)vl_infinity_d_link2.value;
  x=vl_rand_uindex(rand, numData);
  c = (unsigned long long int)0;
  float tmp_if_expr_4;
  while((_Bool)1)
  {
    float energy = (float)0;
    float acc = (float)0;
    float thresh;
    double return_value_vl_rand_real1_3;
    return_value_vl_rand_real1_3=vl_rand_real1(rand);
    thresh = (float)return_value_vl_rand_real1_3;
    memcpy((void *)((float *)self->centers + (signed long int)(c * dimension)), (const void *)(data + (signed long int)(x * dimension)), sizeof(float) /*4ul*/  * dimension);
    c = c + 1ull;
    if(c == numCenters)
      break;

    vl_eval_vector_comparison_on_all_pairs_f(distances, dimension, (float *)self->centers + (signed long int)((c - (unsigned long int)1) * dimension), (unsigned long long int)1, data, numData, distFn);
    x = (unsigned long long int)0;
    for( ; !(x >= numData); x = x + 1ull)
    {
      if(minDistances[(signed long int)x] < distances[(signed long int)x])
        tmp_if_expr_4 = minDistances[(signed long int)x];

      else
        tmp_if_expr_4 = distances[(signed long int)x];
      minDistances[(signed long int)x] = tmp_if_expr_4;
      energy = energy + minDistances[(signed long int)x];
    }
    x = (unsigned long long int)0;
    for( ; !(x >= numData + 18446744073709551615ul); x = x + 1ull)
    {
      acc = acc + minDistances[(signed long int)x];
      if(acc >= thresh * energy)
        break;

    }
  }
  vl_free((void *)distances);
  vl_free((void *)minDistances);
}

// _vl_kmeans_init_centers_with_rand_data_d
// file vl/kmeans.c line 528
static void _vl_kmeans_init_centers_with_rand_data_d(struct _VlKMeans *self, const double *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters)
{
  unsigned long long int i;
  unsigned long long int j;
  unsigned long long int k;
  struct _VlRand *rand;
  rand=vl_get_rand();
  self->dimension = dimension;
  self->numCenters = numCenters;
  self->centers=vl_malloc(sizeof(double) /*8ul*/  * dimension * numCenters);
  unsigned long long int *perm;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numData);
  perm = (unsigned long long int *)return_value_vl_malloc_1;
  double (*distFn)(unsigned long long int, const double *, const double *);
  distFn=vl_get_vector_comparison_function_d(self->distance);
  double *distances;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(double) /*8ul*/  * numCenters);
  distances = (double *)return_value_vl_malloc_2;
  i = (unsigned long long int)0;
  for( ; !(i >= numData); i = i + 1ull)
    perm[(signed long int)i] = i;
  _vl_kmeans_shuffle(perm, numData, rand);
  k = (unsigned long long int)0;
  i = (unsigned long long int)0;
  for( ; !(k >= numCenters); i = i + 1ull)
  {
    if(!(numCenters + -k >= numData + -i))
    {
      signed int duplicateDetected = 0;
      vl_eval_vector_comparison_on_all_pairs_d(distances, dimension, data + (signed long int)(dimension * perm[(signed long int)i]), (unsigned long long int)1, (double *)self->centers, k, distFn);
      j = (unsigned long long int)0;
      for( ; !(j >= k); j = j + 1ull)
        duplicateDetected = duplicateDetected | (signed int)IEEE_FLOAT_EQUAL(distances[(signed long int)j], (double)0);
      if(!(duplicateDetected == 0))
        goto __CPROVER_DUMP_L7;

    }

    memcpy((void *)((double *)self->centers + (signed long int)(dimension * k)), (const void *)(data + (signed long int)(dimension * perm[(signed long int)i])), sizeof(double) /*8ul*/  * dimension);
    k = k + 1ull;

  __CPROVER_DUMP_L7:
    ;
  }
  vl_free((void *)distances);
  vl_free((void *)perm);
}

// _vl_kmeans_init_centers_with_rand_data_f
// file vl/kmeans.c line 528
static void _vl_kmeans_init_centers_with_rand_data_f(struct _VlKMeans *self, const float *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters)
{
  unsigned long long int i;
  unsigned long long int j;
  unsigned long long int k;
  struct _VlRand *rand;
  rand=vl_get_rand();
  self->dimension = dimension;
  self->numCenters = numCenters;
  self->centers=vl_malloc(sizeof(float) /*4ul*/  * dimension * numCenters);
  unsigned long long int *perm;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numData);
  perm = (unsigned long long int *)return_value_vl_malloc_1;
  float (*distFn)(unsigned long long int, const float *, const float *);
  distFn=vl_get_vector_comparison_function_f(self->distance);
  float *distances;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * numCenters);
  distances = (float *)return_value_vl_malloc_2;
  i = (unsigned long long int)0;
  for( ; !(i >= numData); i = i + 1ull)
    perm[(signed long int)i] = i;
  _vl_kmeans_shuffle(perm, numData, rand);
  k = (unsigned long long int)0;
  i = (unsigned long long int)0;
  for( ; !(k >= numCenters); i = i + 1ull)
  {
    if(!(numCenters + -k >= numData + -i))
    {
      signed int duplicateDetected = 0;
      vl_eval_vector_comparison_on_all_pairs_f(distances, dimension, data + (signed long int)(dimension * perm[(signed long int)i]), (unsigned long long int)1, (float *)self->centers, k, distFn);
      j = (unsigned long long int)0;
      for( ; !(j >= k); j = j + 1ull)
        duplicateDetected = duplicateDetected | (signed int)IEEE_FLOAT_EQUAL(distances[(signed long int)j], (float)0);
      if(!(duplicateDetected == 0))
        goto __CPROVER_DUMP_L7;

    }

    memcpy((void *)((float *)self->centers + (signed long int)(dimension * k)), (const void *)(data + (signed long int)(dimension * perm[(signed long int)i])), sizeof(float) /*4ul*/  * dimension);
    k = k + 1ull;

  __CPROVER_DUMP_L7:
    ;
  }
  vl_free((void *)distances);
  vl_free((void *)perm);
}

// _vl_kmeans_quantize_ann_d
// file vl/kmeans.c line 709
static void _vl_kmeans_quantize_ann_d(struct _VlKMeans *self, unsigned int *assignments, double *distances, const double *data, unsigned long long int numData, signed int update)
{
  double (*distFn)(unsigned long long int, const double *, const double *);
  distFn=vl_get_vector_comparison_function_d(self->distance);
  struct _VlKDForest *forest;
  forest=vl_kdforest_new(self->dataType, self->dimension, self->numTrees, self->distance);
  vl_kdforest_set_max_num_comparisons(forest, self->maxNumComparisons);
  vl_kdforest_set_thresholding_method(forest, (enum _VlKDTreeThresholdingMethod)VL_KDTREE_MEDIAN);
  vl_kdforest_build(forest, self->numCenters, self->centers);
  struct _VlKDForestNeighbor neighbor;
  struct _VlKDForestSearcher *searcher;
  signed long long int x;
  searcher=vl_kdforest_new_searcher(forest);
  x = (signed long long int)0;
  for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
  {
    vl_kdforestsearcher_query(searcher, &neighbor, (unsigned long long int)1, (const void *)(const double *)(data + (signed long int)((unsigned long int)x * self->dimension)));
    if(!(distances == ((double *)NULL)))
    {
      if(update == 0)
      {
        distances[x] = (double)neighbor.distance;
        assignments[x] = (unsigned int)neighbor.index;
      }

      else
      {
        double prevDist;
        double return_value;
        return_value=distFn(self->dimension, data + (signed long int)(self->dimension * (unsigned long int)x), (double *)self->centers + (signed long int)(self->dimension * (unsigned long int)assignments[x]));
        prevDist = (double)return_value;
        if(prevDist > neighbor.distance)
        {
          distances[x] = (double)neighbor.distance;
          assignments[x] = (unsigned int)neighbor.index;
        }

        else
          distances[x] = prevDist;
      }
    }

    else
      assignments[x] = (unsigned int)neighbor.index;
  }
  vl_kdforest_delete(forest);
}

// _vl_kmeans_quantize_ann_f
// file vl/kmeans.c line 709
static void _vl_kmeans_quantize_ann_f(struct _VlKMeans *self, unsigned int *assignments, float *distances, const float *data, unsigned long long int numData, signed int update)
{
  float (*distFn)(unsigned long long int, const float *, const float *);
  distFn=vl_get_vector_comparison_function_f(self->distance);
  struct _VlKDForest *forest;
  forest=vl_kdforest_new(self->dataType, self->dimension, self->numTrees, self->distance);
  vl_kdforest_set_max_num_comparisons(forest, self->maxNumComparisons);
  vl_kdforest_set_thresholding_method(forest, (enum _VlKDTreeThresholdingMethod)VL_KDTREE_MEDIAN);
  vl_kdforest_build(forest, self->numCenters, self->centers);
  struct _VlKDForestNeighbor neighbor;
  struct _VlKDForestSearcher *searcher;
  signed long long int x;
  searcher=vl_kdforest_new_searcher(forest);
  x = (signed long long int)0;
  for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
  {
    vl_kdforestsearcher_query(searcher, &neighbor, (unsigned long long int)1, (const void *)(const float *)(data + (signed long int)((unsigned long int)x * self->dimension)));
    if(!(distances == ((float *)NULL)))
    {
      if(update == 0)
      {
        distances[x] = (float)neighbor.distance;
        assignments[x] = (unsigned int)neighbor.index;
      }

      else
      {
        float prevDist;
        float return_value;
        return_value=distFn(self->dimension, data + (signed long int)(self->dimension * (unsigned long int)x), (float *)self->centers + (signed long int)(self->dimension * (unsigned long int)assignments[x]));
        prevDist = (float)return_value;
        if(prevDist > (float)neighbor.distance)
        {
          distances[x] = (float)neighbor.distance;
          assignments[x] = (unsigned int)neighbor.index;
        }

        else
          distances[x] = prevDist;
      }
    }

    else
      assignments[x] = (unsigned int)neighbor.index;
  }
  vl_kdforest_delete(forest);
}

// _vl_kmeans_quantize_d
// file vl/kmeans.c line 656
static void _vl_kmeans_quantize_d(struct _VlKMeans *self, unsigned int *assignments, double *distances, const double *data, unsigned long long int numData)
{
  signed long long int i;
  double (*distFn)(unsigned long long int, const double *, const double *);
  distFn=vl_get_vector_comparison_function_d(self->distance);
  double *distanceToCenters;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(double) /*8ul*/  * self->numCenters);
  distanceToCenters = (double *)return_value_malloc_1;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)numData); i = i + 1ll)
  {
    unsigned long long int k;
    double bestDistance = (double)vl_infinity_d_link2.value;
    vl_eval_vector_comparison_on_all_pairs_d(distanceToCenters, self->dimension, data + (signed long int)(self->dimension * (unsigned long int)i), (unsigned long long int)1, (double *)self->centers, self->numCenters, distFn);
    k = (unsigned long long int)0;
    for( ; !(k >= self->numCenters); k = k + 1ull)
      if(distanceToCenters[(signed long int)k] < bestDistance)
      {
        bestDistance = distanceToCenters[(signed long int)k];
        assignments[i] = (unsigned int)k;
      }

    if(!(distances == ((double *)NULL)))
      distances[i] = bestDistance;

  }
  free((void *)distanceToCenters);
}

// _vl_kmeans_quantize_f
// file vl/kmeans.c line 656
static void _vl_kmeans_quantize_f(struct _VlKMeans *self, unsigned int *assignments, float *distances, const float *data, unsigned long long int numData)
{
  signed long long int i;
  float (*distFn)(unsigned long long int, const float *, const float *);
  distFn=vl_get_vector_comparison_function_f(self->distance);
  float *distanceToCenters;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(float) /*4ul*/  * self->numCenters);
  distanceToCenters = (float *)return_value_malloc_1;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)numData); i = i + 1ll)
  {
    unsigned long long int k;
    float bestDistance = (float)vl_infinity_d_link2.value;
    vl_eval_vector_comparison_on_all_pairs_f(distanceToCenters, self->dimension, data + (signed long int)(self->dimension * (unsigned long int)i), (unsigned long long int)1, (float *)self->centers, self->numCenters, distFn);
    k = (unsigned long long int)0;
    for( ; !(k >= self->numCenters); k = k + 1ull)
      if(distanceToCenters[(signed long int)k] < bestDistance)
      {
        bestDistance = distanceToCenters[(signed long int)k];
        assignments[i] = (unsigned int)k;
      }

    if(!(distances == ((float *)NULL)))
      distances[i] = bestDistance;

  }
  free((void *)distanceToCenters);
}

// _vl_kmeans_refine_centers_ann_d
// file vl/kmeans.c line 1004
static double _vl_kmeans_refine_centers_ann_d(struct _VlKMeans *self, const double *data, unsigned long long int numData)
{
  unsigned long long int c;
  unsigned long long int d;
  unsigned long long int _vl_kmeans_refine_centers_ann_d__1__x;
  unsigned long long int iteration;
  double initialEnergy = vl_infinity_d_link2.value;
  double previousEnergy = vl_infinity_d_link2.value;
  double energy;
  unsigned int *permutations = (unsigned int *)(void *)0;
  unsigned long long int *numSeenSoFar = (unsigned long long int *)(void *)0;
  struct _VlRand *rand;
  rand=vl_get_rand();
  unsigned long long int totNumRestartedCenters = (unsigned long long int)0;
  unsigned long long int numRestartedCenters = (unsigned long long int)0;
  unsigned int *assignments;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData);
  assignments = (unsigned int *)return_value_vl_malloc_1;
  unsigned long long int *clusterMasses;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numData);
  clusterMasses = (unsigned long long int *)return_value_vl_malloc_2;
  double *distances;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(double) /*8ul*/  * numData);
  distances = (double *)return_value_vl_malloc_3;
  if((signed int)self->distance == VlDistanceL1)
  {
    void *return_value_vl_malloc_4;
    return_value_vl_malloc_4=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData * self->dimension);
    permutations = (unsigned int *)return_value_vl_malloc_4;
    void *return_value_vl_malloc_5;
    return_value_vl_malloc_5=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
    numSeenSoFar = (unsigned long long int *)return_value_vl_malloc_5;
    _vl_kmeans_sort_data_helper_d(self, permutations, data, numData);
  }

  energy = vl_infinity_d_link2.value;
  iteration = (unsigned long long int)0;
  signed int (*return_value_vl_get_printf_func_10)(const char *, ...);
  for( ; (_Bool)1; iteration = iteration + 1ull)
  {
    _vl_kmeans_quantize_ann_d(self, assignments, distances, data, numData, (signed int)(iteration > (unsigned long int)0));
    energy = (double)0;
    _vl_kmeans_refine_centers_ann_d__1__x = (unsigned long long int)0;
    for( ; !(_vl_kmeans_refine_centers_ann_d__1__x >= numData); _vl_kmeans_refine_centers_ann_d__1__x = _vl_kmeans_refine_centers_ann_d__1__x + 1ull)
      energy = energy + distances[(signed long int)_vl_kmeans_refine_centers_ann_d__1__x];
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
      return_value_vl_get_printf_func_6=vl_get_printf_func();
      return_value_vl_get_printf_func_6("kmeans: ANN iter %d: energy = %g\n", iteration, energy);
    }

    if(iteration >= self->maxNumIterations)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_7)(const char *, ...);
        return_value_vl_get_printf_func_7=vl_get_printf_func();
        return_value_vl_get_printf_func_7("kmeans: ANN terminating because the maximum number of iterations has been reached\n");
      }

      break;
    }

    if(IEEE_FLOAT_EQUAL(energy, previousEnergy))
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_8)(const char *, ...);
        return_value_vl_get_printf_func_8=vl_get_printf_func();
        return_value_vl_get_printf_func_8("kmeans: ANN terminating because the algorithm fully converged\n");
      }

      break;
    }

    if(iteration == 0ul)
      initialEnergy = energy;

    else
    {
      double eps = (previousEnergy - energy) / (initialEnergy - energy);
      if(eps < self->minEnergyVariation)
      {
        if(!(self->verbosity == 0))
        {
          signed int (*return_value_vl_get_printf_func_9)(const char *, ...);
          return_value_vl_get_printf_func_9=vl_get_printf_func();
          return_value_vl_get_printf_func_9("kmeans: ANN terminating because the energy relative variation was less than %f\n", self->minEnergyVariation);
        }

        break;
      }

    }
    previousEnergy = energy;
    memset((void *)clusterMasses, 0, sizeof(unsigned long long int) /*8ul*/  * numData);
    _vl_kmeans_refine_centers_ann_d__1__x = (unsigned long long int)0;
    for( ; !(_vl_kmeans_refine_centers_ann_d__1__x >= numData); _vl_kmeans_refine_centers_ann_d__1__x = _vl_kmeans_refine_centers_ann_d__1__x + 1ull)
      clusterMasses[(signed long int)assignments[(signed long int)_vl_kmeans_refine_centers_ann_d__1__x]] = clusterMasses[(signed long int)assignments[(signed long int)_vl_kmeans_refine_centers_ann_d__1__x]] + 1ull;
    numRestartedCenters = (unsigned long long int)0;
    switch((signed int)self->distance)
    {
      case VlDistanceL2:
      {
        memset(self->centers, 0, sizeof(double) /*8ul*/  * self->dimension * self->numCenters);
        _vl_kmeans_refine_centers_ann_d__1__x = (unsigned long long int)0;
        for( ; !(_vl_kmeans_refine_centers_ann_d__1__x >= numData); _vl_kmeans_refine_centers_ann_d__1__x = _vl_kmeans_refine_centers_ann_d__1__x + 1ull)
        {
          double *_vl_kmeans_refine_centers_ann_d__1__2__1__8__1__1__cpt = (double *)self->centers + (signed long int)((unsigned long int)assignments[(signed long int)_vl_kmeans_refine_centers_ann_d__1__x] * self->dimension);
          const double *xpt = data + (signed long int)(_vl_kmeans_refine_centers_ann_d__1__x * self->dimension);
          d = (unsigned long long int)0;
          for( ; !(d >= self->dimension); d = d + 1ull)
            _vl_kmeans_refine_centers_ann_d__1__2__1__8__1__1__cpt[(signed long int)d] = _vl_kmeans_refine_centers_ann_d__1__2__1__8__1__1__cpt[(signed long int)d] + xpt[(signed long int)d];
        }
        c = (unsigned long long int)0;
        for( ; !(c >= self->numCenters); c = c + 1ull)
        {
          double *_vl_kmeans_refine_centers_ann_d__1__2__1__8__2__1__cpt = (double *)self->centers + (signed long int)(c * self->dimension);
          if(clusterMasses[(signed long int)c] >= 1ul)
          {
            double mass = (double)clusterMasses[(signed long int)c];
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_ann_d__1__2__1__8__2__1__cpt[(signed long int)d] = _vl_kmeans_refine_centers_ann_d__1__2__1__8__2__1__cpt[(signed long int)d] / mass;
          }

          else
          {
            unsigned long long int _vl_kmeans_refine_centers_ann_d__1__2__1__8__2__1__2__x;
            _vl_kmeans_refine_centers_ann_d__1__2__1__8__2__1__2__x=vl_rand_uindex(rand, numData);
            numRestartedCenters = numRestartedCenters + 1ull;
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_ann_d__1__2__1__8__2__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_ann_d__1__2__1__8__2__1__2__x * self->dimension + d)];
          }
        }
        break;
      }
      case VlDistanceL1:
      {
        d = (unsigned long long int)0;
        for( ; !(d >= self->dimension); d = d + 1ull)
        {
          unsigned int *perm = permutations + (signed long int)(d * numData);
          memset((void *)numSeenSoFar, 0, sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
          _vl_kmeans_refine_centers_ann_d__1__x = (unsigned long long int)0;
          for( ; !(_vl_kmeans_refine_centers_ann_d__1__x >= numData); _vl_kmeans_refine_centers_ann_d__1__x = _vl_kmeans_refine_centers_ann_d__1__x + 1ull)
          {
            c = (unsigned long long int)assignments[(signed long int)perm[(signed long int)_vl_kmeans_refine_centers_ann_d__1__x]];
            if(!(2ul * numSeenSoFar[(signed long int)c] >= clusterMasses[(signed long int)c]))
              ((double *)self->centers)[(signed long int)(d + c * self->dimension)] = data[(signed long int)(d + (unsigned long int)perm[(signed long int)_vl_kmeans_refine_centers_ann_d__1__x] * self->dimension)];

            numSeenSoFar[(signed long int)c] = numSeenSoFar[(signed long int)c] + 1ull;
          }
          c = (unsigned long long int)0;
          for( ; !(c >= self->numCenters); c = c + 1ull)
            if(clusterMasses[(signed long int)c] == 0ul)
            {
              double *cpt = (double *)self->centers + (signed long int)(c * self->dimension);
              unsigned long long int x;
              x=vl_rand_uindex(rand, numData);
              numRestartedCenters = numRestartedCenters + 1ull;
              d = (unsigned long long int)0;
              for( ; !(d >= self->dimension); d = d + 1ull)
                cpt[(signed long int)d] = data[(signed long int)(x * self->dimension + d)];
            }

        }
        break;
      }
      default:
      {
        return_value_vl_get_printf_func_10=vl_get_printf_func();
        return_value_vl_get_printf_func_10("bad distance set: %d\n", self->distance);
      }
    }
    abort();
    totNumRestartedCenters = totNumRestartedCenters + numRestartedCenters;
    if(!(self->verbosity == 0))
    {
      if(!(numRestartedCenters == 0ull))
      {
        signed int (*return_value_vl_get_printf_func_11)(const char *, ...);
        return_value_vl_get_printf_func_11=vl_get_printf_func();
        return_value_vl_get_printf_func_11("kmeans: ANN iter %d: restarted %d centers\n", iteration, numRestartedCenters);
      }

    }

  }
  if(!(permutations == ((unsigned int *)NULL)))
    vl_free((void *)permutations);

  if(!(numSeenSoFar == ((unsigned long long int *)NULL)))
    vl_free((void *)numSeenSoFar);

  vl_free((void *)distances);
  vl_free((void *)assignments);
  vl_free((void *)clusterMasses);
  return energy;
}

// _vl_kmeans_refine_centers_ann_f
// file vl/kmeans.c line 1004
static double _vl_kmeans_refine_centers_ann_f(struct _VlKMeans *self, const float *data, unsigned long long int numData)
{
  unsigned long long int c;
  unsigned long long int d;
  unsigned long long int x;
  unsigned long long int iteration;
  double initialEnergy = vl_infinity_d_link2.value;
  double previousEnergy = vl_infinity_d_link2.value;
  double energy;
  unsigned int *permutations = (unsigned int *)(void *)0;
  unsigned long long int *numSeenSoFar = (unsigned long long int *)(void *)0;
  struct _VlRand *rand;
  rand=vl_get_rand();
  unsigned long long int totNumRestartedCenters = (unsigned long long int)0;
  unsigned long long int numRestartedCenters = (unsigned long long int)0;
  unsigned int *assignments;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData);
  assignments = (unsigned int *)return_value_vl_malloc_1;
  unsigned long long int *clusterMasses;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numData);
  clusterMasses = (unsigned long long int *)return_value_vl_malloc_2;
  float *distances;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(float) /*4ul*/  * numData);
  distances = (float *)return_value_vl_malloc_3;
  if((signed int)self->distance == VlDistanceL1)
  {
    void *return_value_vl_malloc_4;
    return_value_vl_malloc_4=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData * self->dimension);
    permutations = (unsigned int *)return_value_vl_malloc_4;
    void *return_value_vl_malloc_5;
    return_value_vl_malloc_5=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
    numSeenSoFar = (unsigned long long int *)return_value_vl_malloc_5;
    _vl_kmeans_sort_data_helper_f(self, permutations, data, numData);
  }

  energy = vl_infinity_d_link2.value;
  iteration = (unsigned long long int)0;
  signed int (*return_value_vl_get_printf_func_10)(const char *, ...);
  for( ; (_Bool)1; iteration = iteration + 1ull)
  {
    _vl_kmeans_quantize_ann_f(self, assignments, distances, data, numData, (signed int)(iteration > (unsigned long int)0));
    energy = (double)0;
    x = (unsigned long long int)0;
    for( ; !(x >= numData); x = x + 1ull)
      energy = energy + (double)distances[(signed long int)x];
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
      return_value_vl_get_printf_func_6=vl_get_printf_func();
      return_value_vl_get_printf_func_6("kmeans: ANN iter %d: energy = %g\n", iteration, energy);
    }

    if(iteration >= self->maxNumIterations)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_7)(const char *, ...);
        return_value_vl_get_printf_func_7=vl_get_printf_func();
        return_value_vl_get_printf_func_7("kmeans: ANN terminating because the maximum number of iterations has been reached\n");
      }

      break;
    }

    if(IEEE_FLOAT_EQUAL(energy, previousEnergy))
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_8)(const char *, ...);
        return_value_vl_get_printf_func_8=vl_get_printf_func();
        return_value_vl_get_printf_func_8("kmeans: ANN terminating because the algorithm fully converged\n");
      }

      break;
    }

    if(iteration == 0ul)
      initialEnergy = energy;

    else
    {
      double eps = (previousEnergy - energy) / (initialEnergy - energy);
      if(eps < self->minEnergyVariation)
      {
        if(!(self->verbosity == 0))
        {
          signed int (*return_value_vl_get_printf_func_9)(const char *, ...);
          return_value_vl_get_printf_func_9=vl_get_printf_func();
          return_value_vl_get_printf_func_9("kmeans: ANN terminating because the energy relative variation was less than %f\n", self->minEnergyVariation);
        }

        break;
      }

    }
    previousEnergy = energy;
    memset((void *)clusterMasses, 0, sizeof(unsigned long long int) /*8ul*/  * numData);
    x = (unsigned long long int)0;
    for( ; !(x >= numData); x = x + 1ull)
      clusterMasses[(signed long int)assignments[(signed long int)x]] = clusterMasses[(signed long int)assignments[(signed long int)x]] + 1ull;
    numRestartedCenters = (unsigned long long int)0;
    switch((signed int)self->distance)
    {
      case VlDistanceL2:
      {
        memset(self->centers, 0, sizeof(float) /*4ul*/  * self->dimension * self->numCenters);
        x = (unsigned long long int)0;
        for( ; !(x >= numData); x = x + 1ull)
        {
          float *cpt = (float *)self->centers + (signed long int)((unsigned long int)assignments[(signed long int)x] * self->dimension);
          const float *xpt = data + (signed long int)(x * self->dimension);
          d = (unsigned long long int)0;
          for( ; !(d >= self->dimension); d = d + 1ull)
            cpt[(signed long int)d] = cpt[(signed long int)d] + xpt[(signed long int)d];
        }
        c = (unsigned long long int)0;
        for( ; !(c >= self->numCenters); c = c + 1ull)
        {
          float *_vl_kmeans_refine_centers_ann_f__1__2__1__8__2__1__cpt = (float *)self->centers + (signed long int)(c * self->dimension);
          if(clusterMasses[(signed long int)c] >= 1ul)
          {
            float mass = (float)clusterMasses[(signed long int)c];
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_ann_f__1__2__1__8__2__1__cpt[(signed long int)d] = _vl_kmeans_refine_centers_ann_f__1__2__1__8__2__1__cpt[(signed long int)d] / mass;
          }

          else
          {
            unsigned long long int _vl_kmeans_refine_centers_ann_f__1__2__1__8__2__1__2__x;
            _vl_kmeans_refine_centers_ann_f__1__2__1__8__2__1__2__x=vl_rand_uindex(rand, numData);
            numRestartedCenters = numRestartedCenters + 1ull;
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_ann_f__1__2__1__8__2__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_ann_f__1__2__1__8__2__1__2__x * self->dimension + d)];
          }
        }
        break;
      }
      case VlDistanceL1:
      {
        d = (unsigned long long int)0;
        for( ; !(d >= self->dimension); d = d + 1ull)
        {
          unsigned int *perm = permutations + (signed long int)(d * numData);
          memset((void *)numSeenSoFar, 0, sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
          x = (unsigned long long int)0;
          for( ; !(x >= numData); x = x + 1ull)
          {
            c = (unsigned long long int)assignments[(signed long int)perm[(signed long int)x]];
            if(!(2ul * numSeenSoFar[(signed long int)c] >= clusterMasses[(signed long int)c]))
              ((float *)self->centers)[(signed long int)(d + c * self->dimension)] = data[(signed long int)(d + (unsigned long int)perm[(signed long int)x] * self->dimension)];

            numSeenSoFar[(signed long int)c] = numSeenSoFar[(signed long int)c] + 1ull;
          }
          c = (unsigned long long int)0;
          for( ; !(c >= self->numCenters); c = c + 1ull)
            if(clusterMasses[(signed long int)c] == 0ul)
            {
              float *_vl_kmeans_refine_centers_ann_f__1__2__1__8__3__1__2__1__1__cpt = (float *)self->centers + (signed long int)(c * self->dimension);
              unsigned long long int _vl_kmeans_refine_centers_ann_f__1__2__1__8__3__1__2__1__1__x;
              _vl_kmeans_refine_centers_ann_f__1__2__1__8__3__1__2__1__1__x=vl_rand_uindex(rand, numData);
              numRestartedCenters = numRestartedCenters + 1ull;
              d = (unsigned long long int)0;
              for( ; !(d >= self->dimension); d = d + 1ull)
                _vl_kmeans_refine_centers_ann_f__1__2__1__8__3__1__2__1__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_ann_f__1__2__1__8__3__1__2__1__1__x * self->dimension + d)];
            }

        }
        break;
      }
      default:
      {
        return_value_vl_get_printf_func_10=vl_get_printf_func();
        return_value_vl_get_printf_func_10("bad distance set: %d\n", self->distance);
      }
    }
    abort();
    totNumRestartedCenters = totNumRestartedCenters + numRestartedCenters;
    if(!(self->verbosity == 0))
    {
      if(!(numRestartedCenters == 0ull))
      {
        signed int (*return_value_vl_get_printf_func_11)(const char *, ...);
        return_value_vl_get_printf_func_11=vl_get_printf_func();
        return_value_vl_get_printf_func_11("kmeans: ANN iter %d: restarted %d centers\n", iteration, numRestartedCenters);
      }

    }

  }
  if(!(permutations == ((unsigned int *)NULL)))
    vl_free((void *)permutations);

  if(!(numSeenSoFar == ((unsigned long long int *)NULL)))
    vl_free((void *)numSeenSoFar);

  vl_free((void *)distances);
  vl_free((void *)assignments);
  vl_free((void *)clusterMasses);
  return energy;
}

// _vl_kmeans_refine_centers_d
// file vl/kmeans.c line 1751
static double _vl_kmeans_refine_centers_d(struct _VlKMeans *self, const double *data, unsigned long long int numData)
{
  double return_value__vl_kmeans_refine_centers_lloyd_d_1;
  double return_value__vl_kmeans_refine_centers_elkan_d_2;
  double return_value__vl_kmeans_refine_centers_ann_d_3;
  switch((signed int)self->algorithm)
  {
    case VlKMeansLloyd:
    {
      return_value__vl_kmeans_refine_centers_lloyd_d_1=_vl_kmeans_refine_centers_lloyd_d(self, data, numData);
      return return_value__vl_kmeans_refine_centers_lloyd_d_1;
    }
    case VlKMeansElkan:
    {
      return_value__vl_kmeans_refine_centers_elkan_d_2=_vl_kmeans_refine_centers_elkan_d(self, data, numData);
      return return_value__vl_kmeans_refine_centers_elkan_d_2;
    }
    case VlKMeansANN:
    {
      return_value__vl_kmeans_refine_centers_ann_d_3=_vl_kmeans_refine_centers_ann_d(self, data, numData);
      return return_value__vl_kmeans_refine_centers_ann_d_3;
    }
    default:
      abort();
  }
}

// _vl_kmeans_refine_centers_elkan_d
// file vl/kmeans.c line 1163
static double _vl_kmeans_refine_centers_elkan_d(struct _VlKMeans *self, const double *data, unsigned long long int numData)
{
  unsigned long long int d;
  unsigned long long int iteration;
  signed long long int x;
  unsigned int c;
  unsigned int j;
  signed int allDone;
  double *distances;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * numData);
  distances = (double *)return_value_vl_malloc_1;
  unsigned int *assignments;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData);
  assignments = (unsigned int *)return_value_vl_malloc_2;
  unsigned long long int *clusterMasses;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numData);
  clusterMasses = (unsigned long long int *)return_value_vl_malloc_3;
  struct _VlRand *rand;
  rand=vl_get_rand();
  double (*distFn)(unsigned long long int, const double *, const double *);
  distFn=vl_get_vector_comparison_function_d(self->distance);
  double *nextCenterDistances;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(double) /*8ul*/  * self->numCenters);
  nextCenterDistances = (double *)return_value_vl_malloc_4;
  double *pointToClosestCenterUB;
  void *return_value_vl_malloc_5;
  return_value_vl_malloc_5=vl_malloc(sizeof(double) /*8ul*/  * numData);
  pointToClosestCenterUB = (double *)return_value_vl_malloc_5;
  signed int *pointToClosestCenterUBIsStrict;
  void *return_value_vl_malloc_6;
  return_value_vl_malloc_6=vl_malloc(sizeof(signed int) /*4ul*/  * numData);
  pointToClosestCenterUBIsStrict = (signed int *)return_value_vl_malloc_6;
  double *pointToCenterLB;
  void *return_value_vl_malloc_7;
  return_value_vl_malloc_7=vl_malloc(sizeof(double) /*8ul*/  * numData * self->numCenters);
  pointToCenterLB = (double *)return_value_vl_malloc_7;
  double *newCenters;
  void *return_value_vl_malloc_8;
  return_value_vl_malloc_8=vl_malloc(sizeof(double) /*8ul*/  * self->dimension * self->numCenters);
  newCenters = (double *)return_value_vl_malloc_8;
  double *centerToNewCenterDistances;
  void *return_value_vl_malloc_9;
  return_value_vl_malloc_9=vl_malloc(sizeof(double) /*8ul*/  * self->numCenters);
  centerToNewCenterDistances = (double *)return_value_vl_malloc_9;
  unsigned int *permutations = (unsigned int *)(void *)0;
  unsigned long long int *numSeenSoFar = (unsigned long long int *)(void *)0;
  double energy;
  unsigned long long int totDistanceComputationsToInit = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToRefreshUB = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToRefreshLB = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToRefreshCenterDistances = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToNewCenters = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToFinalize = (unsigned long long int)0;
  unsigned long long int totNumRestartedCenters = (unsigned long long int)0;
  if((signed int)self->distance == VlDistanceL1)
  {
    void *return_value_vl_malloc_10;
    return_value_vl_malloc_10=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData * self->dimension);
    permutations = (unsigned int *)return_value_vl_malloc_10;
    void *return_value_vl_malloc_11;
    return_value_vl_malloc_11=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
    numSeenSoFar = (unsigned long long int *)return_value_vl_malloc_11;
    _vl_kmeans_sort_data_helper_d(self, permutations, data, numData);
  }

  double return_value__vl_kmeans_update_center_distances_d_12;
  return_value__vl_kmeans_update_center_distances_d_12=_vl_kmeans_update_center_distances_d(self);
  totDistanceComputationsToInit = totDistanceComputationsToInit + (unsigned long long int)return_value__vl_kmeans_update_center_distances_d_12;
  memset((void *)pointToCenterLB, 0, sizeof(double) /*8ul*/  * self->numCenters * numData);
  x = (signed long long int)0;
  if(!(x >= (signed long int)(signed int)numData))
  {
    double distance;
    assignments[x] = (unsigned int)0;
    distance=distFn(self->dimension, data + (signed long int)((unsigned long int)x * self->dimension), (double *)self->centers + (signed long int)0);
    pointToClosestCenterUB[x] = distance;
    pointToClosestCenterUBIsStrict[x] = 1;
    pointToCenterLB[(signed long int)((unsigned long int)0 + (unsigned long int)x * self->numCenters)] = distance;
    totDistanceComputationsToInit = totDistanceComputationsToInit + (unsigned long long int)1;
    c = (unsigned int)1;
    if(!((unsigned long int)c >= self->numCenters))
    {
      if(!(((signed int)self->distance == VlDistanceL1 ? 2.0 : 4.0) * pointToClosestCenterUB[x] <= ((double *)self->centerDistances)[(signed long int)self->numCenters * (signed long int)(unsigned long int)assignments[x] + (signed long int)(unsigned long int)c]))
      {
        distance=distFn(self->dimension, data + (signed long int)((unsigned long int)x * self->dimension), (double *)self->centers + (signed long int)((unsigned long int)c * self->dimension));
        pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = distance;
        totDistanceComputationsToInit = totDistanceComputationsToInit + (unsigned long long int)1;
        if(distance < pointToClosestCenterUB[x])
        {
          pointToClosestCenterUB[x] = distance;
          assignments[x] = c;
        }

      }

      c = c + 1u;
    }

    x = x + 1ll;
  }

  energy = (double)0;
  x = (signed long long int)0;
  for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
    energy = energy + pointToClosestCenterUB[x];
  if(!(self->verbosity == 0))
  {
    signed int (*return_value_vl_get_printf_func_13)(const char *, ...);
    return_value_vl_get_printf_func_13=vl_get_printf_func();
    return_value_vl_get_printf_func_13("kmeans: Elkan iter 0: energy = %g, dist. calc. = %d\n", energy, totDistanceComputationsToInit);
  }

  iteration = (unsigned long long int)1;
  double tmp_if_expr_15;
  for( ; (_Bool)1; iteration = iteration + 1ull)
  {
    unsigned long long int numDistanceComputationsToRefreshUB = (unsigned long long int)0;
    unsigned long long int numDistanceComputationsToRefreshLB = (unsigned long long int)0;
    unsigned long long int numDistanceComputationsToRefreshCenterDistances = (unsigned long long int)0;
    unsigned long long int numDistanceComputationsToNewCenters = (unsigned long long int)0;
    unsigned long long int numRestartedCenters = (unsigned long long int)0;
    memset((void *)clusterMasses, 0, sizeof(unsigned long long int) /*8ul*/  * numData);
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
      clusterMasses[(signed long int)assignments[x]] = clusterMasses[(signed long int)assignments[x]] + 1ull;
    switch((signed int)self->distance)
    {
      case VlDistanceL2:
      {
        memset((void *)newCenters, 0, sizeof(double) /*8ul*/  * self->dimension * self->numCenters);
        x = (signed long long int)0;
        for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
        {
          double *cpt = newCenters + (signed long int)((unsigned long int)assignments[x] * self->dimension);
          const double *xpt = data + (signed long int)((unsigned long int)x * self->dimension);
          d = (unsigned long long int)0;
          for( ; !(d >= self->dimension); d = d + 1ull)
            cpt[(signed long int)d] = cpt[(signed long int)d] + xpt[(signed long int)d];
        }
        c = (unsigned int)0;
        for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
        {
          double *_vl_kmeans_refine_centers_elkan_d__1__5__1__2__2__1__cpt = newCenters + (signed long int)((unsigned long int)c * self->dimension);
          if(clusterMasses[(signed long int)c] >= 1ul)
          {
            double mass = (double)clusterMasses[(signed long int)c];
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_elkan_d__1__5__1__2__2__1__cpt[(signed long int)d] = _vl_kmeans_refine_centers_elkan_d__1__5__1__2__2__1__cpt[(signed long int)d] / mass;
          }

          else
          {
            unsigned long long int _vl_kmeans_refine_centers_elkan_d__1__5__1__2__2__1__2__x;
            _vl_kmeans_refine_centers_elkan_d__1__5__1__2__2__1__2__x=vl_rand_uindex(rand, numData);
            numRestartedCenters = numRestartedCenters + 1ull;
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_elkan_d__1__5__1__2__2__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_elkan_d__1__5__1__2__2__1__2__x * self->dimension + d)];
          }
        }
        break;
      }
      case VlDistanceL1:
      {
        d = (unsigned long long int)0;
        for( ; !(d >= self->dimension); d = d + 1ull)
        {
          unsigned int *perm = permutations + (signed long int)(d * numData);
          memset((void *)numSeenSoFar, 0, sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
          x = (signed long long int)0;
          for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
          {
            c = assignments[(signed long int)perm[x]];
            if(!(2ul * numSeenSoFar[(signed long int)c] >= clusterMasses[(signed long int)c]))
              newCenters[(signed long int)(d + (unsigned long int)c * self->dimension)] = data[(signed long int)(d + (unsigned long int)perm[x] * self->dimension)];

            numSeenSoFar[(signed long int)c] = numSeenSoFar[(signed long int)c] + 1ull;
          }
        }
        c = (unsigned int)0;
        for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
          if(clusterMasses[(signed long int)c] == 0ul)
          {
            double *_vl_kmeans_refine_centers_elkan_d__1__5__1__2__4__1__1__cpt = newCenters + (signed long int)((unsigned long int)c * self->dimension);
            unsigned long long int _vl_kmeans_refine_centers_elkan_d__1__5__1__2__4__1__1__x;
            _vl_kmeans_refine_centers_elkan_d__1__5__1__2__4__1__1__x=vl_rand_uindex(rand, numData);
            numRestartedCenters = numRestartedCenters + 1ull;
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_elkan_d__1__5__1__2__4__1__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_elkan_d__1__5__1__2__4__1__1__x * self->dimension + d)];
          }

        break;
      }
      default:
        abort();
    }
    c = (unsigned int)0;
    if(!((unsigned long int)c >= self->numCenters))
    {
      double _vl_kmeans_refine_centers_elkan_d__1__5__1__3__1__distance;
      _vl_kmeans_refine_centers_elkan_d__1__5__1__3__1__distance=distFn(self->dimension, newCenters + (signed long int)((unsigned long int)c * self->dimension), (double *)self->centers + (signed long int)((unsigned long int)c * self->dimension));
      centerToNewCenterDistances[(signed long int)c] = _vl_kmeans_refine_centers_elkan_d__1__5__1__3__1__distance;
      numDistanceComputationsToNewCenters = numDistanceComputationsToNewCenters + (unsigned long long int)1;
      c = c + 1u;
    }

    double *tmp = (double *)self->centers;
    self->centers = (void *)newCenters;
    newCenters = tmp;
    double return_value__vl_kmeans_update_center_distances_d_14;
    return_value__vl_kmeans_update_center_distances_d_14=_vl_kmeans_update_center_distances_d(self);
    numDistanceComputationsToRefreshCenterDistances = numDistanceComputationsToRefreshCenterDistances + (unsigned long long int)return_value__vl_kmeans_update_center_distances_d_14;
    c = (unsigned int)0;
    for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
    {
      nextCenterDistances[(signed long int)c] = (double)vl_infinity_d_link2.value;
      j = (unsigned int)0;
      for( ; !((unsigned long int)j >= self->numCenters); j = j + 1u)
        if(!(j == c))
        {
          if(nextCenterDistances[(signed long int)c] < ((double *)self->centerDistances)[(signed long int)self->numCenters * (signed long int)(unsigned long int)c + (signed long int)(unsigned long int)j])
            tmp_if_expr_15 = nextCenterDistances[(signed long int)c];

          else
            tmp_if_expr_15 = ((double *)self->centerDistances)[(signed long int)((unsigned long int)j + (unsigned long int)c * self->numCenters)];
          nextCenterDistances[(signed long int)c] = tmp_if_expr_15;
        }

    }
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
    {
      double a = pointToClosestCenterUB[x];
      double b = centerToNewCenterDistances[(signed long int)assignments[x]];
      if((signed int)self->distance == VlDistanceL1)
        pointToClosestCenterUB[x] = a + b;

      else
      {
        double sqrtab;
        sqrtab=sqrt(a * b);
        pointToClosestCenterUB[x] = a + b + 2.0 * sqrtab;
      }
      pointToClosestCenterUBIsStrict[x] = 0;
    }
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
    {
      c = (unsigned int)0;
      for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
      {
        double _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__a = pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)];
        double _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__b = centerToNewCenterDistances[(signed long int)c];
        if(_vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__a < _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__b)
          pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = (double)0;

        else
          if((signed int)self->distance == VlDistanceL1)
            pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__a - _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__b;

          else
          {
            double _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__2__2__sqrtab;
            _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__2__2__sqrtab=sqrt(_vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__a * _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__b);
            pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = (_vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__a + _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__b) - 2.0 * _vl_kmeans_refine_centers_elkan_d__1__5__1__7__1__1__1__2__2__sqrtab;
          }
      }
    }
    allDone = 1;
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
      if(!(((signed int)self->distance == VlDistanceL1 ? 2.0 : 4.0) * pointToClosestCenterUB[x] <= nextCenterDistances[(signed long int)assignments[x]]))
      {
        c = (unsigned int)0;
        for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
        {
          unsigned int _vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__cx = assignments[x];
          double _vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__distance;
          if(!(_vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__cx == c))
          {
            if(!(((signed int)self->distance == VlDistanceL1 ? 2.0 : 4.0) * pointToClosestCenterUB[x] <= ((double *)self->centerDistances)[(signed long int)self->numCenters * (signed long int)(unsigned long int)_vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__cx + (signed long int)(unsigned long int)c]))
            {
              if(!(pointToClosestCenterUB[x] <= pointToCenterLB[(signed long int)self->numCenters * (signed long int)(unsigned long int)x + (signed long int)(unsigned long int)c]))
              {
                if(pointToClosestCenterUBIsStrict[x] == 0)
                {
                  _vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__distance=distFn(self->dimension, data + (signed long int)(self->dimension * (unsigned long int)x), (double *)self->centers + (signed long int)(self->dimension * (unsigned long int)_vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__cx));
                  pointToClosestCenterUB[x] = _vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__distance;
                  pointToClosestCenterUBIsStrict[x] = 1;
                  pointToCenterLB[(signed long int)((unsigned long int)_vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__cx + (unsigned long int)x * self->numCenters)] = _vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__distance;
                  numDistanceComputationsToRefreshUB = numDistanceComputationsToRefreshUB + (unsigned long long int)1;
                }

                else
                {
                  _vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__distance=distFn(self->dimension, data + (signed long int)((unsigned long int)x * self->dimension), (double *)self->centers + (signed long int)((unsigned long int)c * self->dimension));
                  numDistanceComputationsToRefreshLB = numDistanceComputationsToRefreshLB + (unsigned long long int)1;
                  pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = _vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__distance;
                  if(_vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__distance < pointToClosestCenterUB[x])
                  {
                    assignments[x] = c;
                    pointToClosestCenterUB[x] = _vl_kmeans_refine_centers_elkan_d__1__5__1__8__1__2__1__distance;
                    allDone = 0;
                  }

                }
              }

            }

          }

        }
      }

    totDistanceComputationsToRefreshUB = totDistanceComputationsToRefreshUB + numDistanceComputationsToRefreshUB;
    totDistanceComputationsToRefreshLB = totDistanceComputationsToRefreshLB + numDistanceComputationsToRefreshLB;
    totDistanceComputationsToRefreshCenterDistances = totDistanceComputationsToRefreshCenterDistances + numDistanceComputationsToRefreshCenterDistances;
    totDistanceComputationsToNewCenters = totDistanceComputationsToNewCenters + numDistanceComputationsToNewCenters;
    totNumRestartedCenters = totNumRestartedCenters + numRestartedCenters;
    energy = (double)0;
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
      energy = energy + pointToClosestCenterUB[x];
    if(!(self->verbosity == 0))
    {
      unsigned long long int numDistanceComputations = numDistanceComputationsToRefreshUB + numDistanceComputationsToRefreshLB + numDistanceComputationsToRefreshCenterDistances + numDistanceComputationsToNewCenters;
      signed int (*return_value_vl_get_printf_func_16)(const char *, ...);
      return_value_vl_get_printf_func_16=vl_get_printf_func();
      return_value_vl_get_printf_func_16("kmeans: Elkan iter %d: energy <= %g, dist. calc. = %d\n", iteration, energy, numDistanceComputations);
      if(!(numRestartedCenters == 0ull))
      {
        signed int (*return_value_vl_get_printf_func_17)(const char *, ...);
        return_value_vl_get_printf_func_17=vl_get_printf_func();
        return_value_vl_get_printf_func_17("kmeans: Elkan iter %d: restarted %d centers\n", iteration, energy, numRestartedCenters);
      }

      if(self->verbosity >= 2)
      {
        signed int (*return_value_vl_get_printf_func_18)(const char *, ...);
        return_value_vl_get_printf_func_18=vl_get_printf_func();
        return_value_vl_get_printf_func_18("kmeans: Elkan iter %d: total dist. calc. per type: UB: %.1f%% (%d), LB: %.1f%% (%d), intra_center: %.1f%% (%d), new_center: %.1f%% (%d)\n", iteration, (100.0 * (double)numDistanceComputationsToRefreshUB) / (double)numDistanceComputations, numDistanceComputationsToRefreshUB, (100.0 * (double)numDistanceComputationsToRefreshLB) / (double)numDistanceComputations, numDistanceComputationsToRefreshLB, (100.0 * (double)numDistanceComputationsToRefreshCenterDistances) / (double)numDistanceComputations, numDistanceComputationsToRefreshCenterDistances, (100.0 * (double)numDistanceComputationsToNewCenters) / (double)numDistanceComputations, numDistanceComputationsToNewCenters);
      }

    }

    if(iteration >= self->maxNumIterations)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_19)(const char *, ...);
        return_value_vl_get_printf_func_19=vl_get_printf_func();
        return_value_vl_get_printf_func_19("kmeans: Elkan terminating because maximum number of iterations reached\n");
      }

      break;
    }

    if(!(allDone == 0))
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_20)(const char *, ...);
        return_value_vl_get_printf_func_20=vl_get_printf_func();
        return_value_vl_get_printf_func_20("kmeans: Elkan terminating because the algorithm fully converged\n");
      }

      break;
    }

  }
  energy = (double)0;
  x = (signed long long int)0;
  if(!(x >= (signed long int)(signed int)numData))
  {
    unsigned long long int cx = (unsigned long long int)assignments[x];
    double return_value;
    return_value=distFn(self->dimension, data + (signed long int)(self->dimension * (unsigned long int)x), (double *)self->centers + (signed long int)(self->dimension * cx));
    energy = energy + return_value;
    totDistanceComputationsToFinalize = totDistanceComputationsToFinalize + (unsigned long long int)1;
    x = x + 1ll;
  }

  unsigned long long int totDistanceComputations = totDistanceComputationsToInit + totDistanceComputationsToRefreshUB + totDistanceComputationsToRefreshLB + totDistanceComputationsToRefreshCenterDistances + totDistanceComputationsToNewCenters + totDistanceComputationsToFinalize;
  double saving = (double)totDistanceComputations / (double)(iteration * self->numCenters * numData);
  if(!(self->verbosity == 0))
  {
    signed int (*return_value_vl_get_printf_func_21)(const char *, ...);
    return_value_vl_get_printf_func_21=vl_get_printf_func();
    return_value_vl_get_printf_func_21("kmeans: Elkan: total dist. calc.: %d (%.2f %% of Lloyd)\n", totDistanceComputations, saving * 100.0);
    if(!(totNumRestartedCenters == 0ull))
    {
      signed int (*return_value_vl_get_printf_func_22)(const char *, ...);
      return_value_vl_get_printf_func_22=vl_get_printf_func();
      return_value_vl_get_printf_func_22("kmeans: Elkan: there have been %d restarts\n", totNumRestartedCenters);
    }

  }

  if(self->verbosity >= 2)
  {
    signed int (*return_value_vl_get_printf_func_23)(const char *, ...);
    return_value_vl_get_printf_func_23=vl_get_printf_func();
    return_value_vl_get_printf_func_23("kmeans: Elkan: total dist. calc. per type: init: %.1f%% (%d), UB: %.1f%% (%d), LB: %.1f%% (%d), intra_center: %.1f%% (%d), new_center: %.1f%% (%d), finalize: %.1f%% (%d)\n", (100.0 * (double)totDistanceComputationsToInit) / (double)totDistanceComputations, totDistanceComputationsToInit, (100.0 * (double)totDistanceComputationsToRefreshUB) / (double)totDistanceComputations, totDistanceComputationsToRefreshUB, (100.0 * (double)totDistanceComputationsToRefreshLB) / (double)totDistanceComputations, totDistanceComputationsToRefreshLB, (100.0 * (double)totDistanceComputationsToRefreshCenterDistances) / (double)totDistanceComputations, totDistanceComputationsToRefreshCenterDistances, (100.0 * (double)totDistanceComputationsToNewCenters) / (double)totDistanceComputations, totDistanceComputationsToNewCenters, (100.0 * (double)totDistanceComputationsToFinalize) / (double)totDistanceComputations, totDistanceComputationsToFinalize);
  }

  if(!(permutations == ((unsigned int *)NULL)))
    vl_free((void *)permutations);

  if(!(numSeenSoFar == ((unsigned long long int *)NULL)))
    vl_free((void *)numSeenSoFar);

  vl_free((void *)distances);
  vl_free((void *)assignments);
  vl_free((void *)clusterMasses);
  vl_free((void *)nextCenterDistances);
  vl_free((void *)pointToClosestCenterUB);
  vl_free((void *)pointToClosestCenterUBIsStrict);
  vl_free((void *)pointToCenterLB);
  vl_free((void *)newCenters);
  vl_free((void *)centerToNewCenterDistances);
  return energy;
}

// _vl_kmeans_refine_centers_elkan_f
// file vl/kmeans.c line 1163
static double _vl_kmeans_refine_centers_elkan_f(struct _VlKMeans *self, const float *data, unsigned long long int numData)
{
  unsigned long long int d;
  unsigned long long int iteration;
  signed long long int x;
  unsigned int c;
  unsigned int j;
  signed int allDone;
  float *distances;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * numData);
  distances = (float *)return_value_vl_malloc_1;
  unsigned int *assignments;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData);
  assignments = (unsigned int *)return_value_vl_malloc_2;
  unsigned long long int *clusterMasses;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numData);
  clusterMasses = (unsigned long long int *)return_value_vl_malloc_3;
  struct _VlRand *rand;
  rand=vl_get_rand();
  float (*distFn)(unsigned long long int, const float *, const float *);
  distFn=vl_get_vector_comparison_function_f(self->distance);
  float *nextCenterDistances;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(float) /*4ul*/  * self->numCenters);
  nextCenterDistances = (float *)return_value_vl_malloc_4;
  float *pointToClosestCenterUB;
  void *return_value_vl_malloc_5;
  return_value_vl_malloc_5=vl_malloc(sizeof(float) /*4ul*/  * numData);
  pointToClosestCenterUB = (float *)return_value_vl_malloc_5;
  signed int *pointToClosestCenterUBIsStrict;
  void *return_value_vl_malloc_6;
  return_value_vl_malloc_6=vl_malloc(sizeof(signed int) /*4ul*/  * numData);
  pointToClosestCenterUBIsStrict = (signed int *)return_value_vl_malloc_6;
  float *pointToCenterLB;
  void *return_value_vl_malloc_7;
  return_value_vl_malloc_7=vl_malloc(sizeof(float) /*4ul*/  * numData * self->numCenters);
  pointToCenterLB = (float *)return_value_vl_malloc_7;
  float *newCenters;
  void *return_value_vl_malloc_8;
  return_value_vl_malloc_8=vl_malloc(sizeof(float) /*4ul*/  * self->dimension * self->numCenters);
  newCenters = (float *)return_value_vl_malloc_8;
  float *centerToNewCenterDistances;
  void *return_value_vl_malloc_9;
  return_value_vl_malloc_9=vl_malloc(sizeof(float) /*4ul*/  * self->numCenters);
  centerToNewCenterDistances = (float *)return_value_vl_malloc_9;
  unsigned int *permutations = (unsigned int *)(void *)0;
  unsigned long long int *numSeenSoFar = (unsigned long long int *)(void *)0;
  double energy;
  unsigned long long int totDistanceComputationsToInit = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToRefreshUB = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToRefreshLB = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToRefreshCenterDistances = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToNewCenters = (unsigned long long int)0;
  unsigned long long int totDistanceComputationsToFinalize = (unsigned long long int)0;
  unsigned long long int totNumRestartedCenters = (unsigned long long int)0;
  if((signed int)self->distance == VlDistanceL1)
  {
    void *return_value_vl_malloc_10;
    return_value_vl_malloc_10=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData * self->dimension);
    permutations = (unsigned int *)return_value_vl_malloc_10;
    void *return_value_vl_malloc_11;
    return_value_vl_malloc_11=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
    numSeenSoFar = (unsigned long long int *)return_value_vl_malloc_11;
    _vl_kmeans_sort_data_helper_f(self, permutations, data, numData);
  }

  double return_value__vl_kmeans_update_center_distances_f_12;
  return_value__vl_kmeans_update_center_distances_f_12=_vl_kmeans_update_center_distances_f(self);
  totDistanceComputationsToInit = totDistanceComputationsToInit + (unsigned long long int)return_value__vl_kmeans_update_center_distances_f_12;
  memset((void *)pointToCenterLB, 0, sizeof(float) /*4ul*/  * self->numCenters * numData);
  x = (signed long long int)0;
  if(!(x >= (signed long int)(signed int)numData))
  {
    float _vl_kmeans_refine_centers_elkan_f__1__2__1__distance;
    assignments[x] = (unsigned int)0;
    _vl_kmeans_refine_centers_elkan_f__1__2__1__distance=distFn(self->dimension, data + (signed long int)((unsigned long int)x * self->dimension), (float *)self->centers + (signed long int)0);
    pointToClosestCenterUB[x] = _vl_kmeans_refine_centers_elkan_f__1__2__1__distance;
    pointToClosestCenterUBIsStrict[x] = 1;
    pointToCenterLB[(signed long int)((unsigned long int)0 + (unsigned long int)x * self->numCenters)] = _vl_kmeans_refine_centers_elkan_f__1__2__1__distance;
    totDistanceComputationsToInit = totDistanceComputationsToInit + (unsigned long long int)1;
    c = (unsigned int)1;
    if(!((unsigned long int)c >= self->numCenters))
    {
      if(!(((signed int)self->distance == VlDistanceL1 ? 2.0 : 4.0) * (double)pointToClosestCenterUB[x] <= (double)((float *)self->centerDistances)[(signed long int)self->numCenters * (signed long int)(unsigned long int)assignments[x] + (signed long int)(unsigned long int)c]))
      {
        _vl_kmeans_refine_centers_elkan_f__1__2__1__distance=distFn(self->dimension, data + (signed long int)((unsigned long int)x * self->dimension), (float *)self->centers + (signed long int)((unsigned long int)c * self->dimension));
        pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = _vl_kmeans_refine_centers_elkan_f__1__2__1__distance;
        totDistanceComputationsToInit = totDistanceComputationsToInit + (unsigned long long int)1;
        if(_vl_kmeans_refine_centers_elkan_f__1__2__1__distance < pointToClosestCenterUB[x])
        {
          pointToClosestCenterUB[x] = _vl_kmeans_refine_centers_elkan_f__1__2__1__distance;
          assignments[x] = c;
        }

      }

      c = c + 1u;
    }

    x = x + 1ll;
  }

  energy = (double)0;
  x = (signed long long int)0;
  for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
    energy = energy + (double)pointToClosestCenterUB[x];
  if(!(self->verbosity == 0))
  {
    signed int (*return_value_vl_get_printf_func_13)(const char *, ...);
    return_value_vl_get_printf_func_13=vl_get_printf_func();
    return_value_vl_get_printf_func_13("kmeans: Elkan iter 0: energy = %g, dist. calc. = %d\n", energy, totDistanceComputationsToInit);
  }

  iteration = (unsigned long long int)1;
  float tmp_if_expr_15;
  for( ; (_Bool)1; iteration = iteration + 1ull)
  {
    unsigned long long int numDistanceComputationsToRefreshUB = (unsigned long long int)0;
    unsigned long long int numDistanceComputationsToRefreshLB = (unsigned long long int)0;
    unsigned long long int numDistanceComputationsToRefreshCenterDistances = (unsigned long long int)0;
    unsigned long long int numDistanceComputationsToNewCenters = (unsigned long long int)0;
    unsigned long long int numRestartedCenters = (unsigned long long int)0;
    memset((void *)clusterMasses, 0, sizeof(unsigned long long int) /*8ul*/  * numData);
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
      clusterMasses[(signed long int)assignments[x]] = clusterMasses[(signed long int)assignments[x]] + 1ull;
    switch((signed int)self->distance)
    {
      case VlDistanceL2:
      {
        memset((void *)newCenters, 0, sizeof(float) /*4ul*/  * self->dimension * self->numCenters);
        x = (signed long long int)0;
        for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
        {
          float *cpt = newCenters + (signed long int)((unsigned long int)assignments[x] * self->dimension);
          const float *xpt = data + (signed long int)((unsigned long int)x * self->dimension);
          d = (unsigned long long int)0;
          for( ; !(d >= self->dimension); d = d + 1ull)
            cpt[(signed long int)d] = cpt[(signed long int)d] + xpt[(signed long int)d];
        }
        c = (unsigned int)0;
        for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
        {
          float *_vl_kmeans_refine_centers_elkan_f__1__5__1__2__2__1__cpt = newCenters + (signed long int)((unsigned long int)c * self->dimension);
          if(clusterMasses[(signed long int)c] >= 1ul)
          {
            float mass = (float)clusterMasses[(signed long int)c];
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_elkan_f__1__5__1__2__2__1__cpt[(signed long int)d] = _vl_kmeans_refine_centers_elkan_f__1__5__1__2__2__1__cpt[(signed long int)d] / mass;
          }

          else
          {
            unsigned long long int _vl_kmeans_refine_centers_elkan_f__1__5__1__2__2__1__2__x;
            _vl_kmeans_refine_centers_elkan_f__1__5__1__2__2__1__2__x=vl_rand_uindex(rand, numData);
            numRestartedCenters = numRestartedCenters + 1ull;
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_elkan_f__1__5__1__2__2__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_elkan_f__1__5__1__2__2__1__2__x * self->dimension + d)];
          }
        }
        break;
      }
      case VlDistanceL1:
      {
        d = (unsigned long long int)0;
        for( ; !(d >= self->dimension); d = d + 1ull)
        {
          unsigned int *perm = permutations + (signed long int)(d * numData);
          memset((void *)numSeenSoFar, 0, sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
          x = (signed long long int)0;
          for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
          {
            c = assignments[(signed long int)perm[x]];
            if(!(2ul * numSeenSoFar[(signed long int)c] >= clusterMasses[(signed long int)c]))
              newCenters[(signed long int)(d + (unsigned long int)c * self->dimension)] = data[(signed long int)(d + (unsigned long int)perm[x] * self->dimension)];

            numSeenSoFar[(signed long int)c] = numSeenSoFar[(signed long int)c] + 1ull;
          }
        }
        c = (unsigned int)0;
        for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
          if(clusterMasses[(signed long int)c] == 0ul)
          {
            float *_vl_kmeans_refine_centers_elkan_f__1__5__1__2__4__1__1__cpt = newCenters + (signed long int)((unsigned long int)c * self->dimension);
            unsigned long long int _vl_kmeans_refine_centers_elkan_f__1__5__1__2__4__1__1__x;
            _vl_kmeans_refine_centers_elkan_f__1__5__1__2__4__1__1__x=vl_rand_uindex(rand, numData);
            numRestartedCenters = numRestartedCenters + 1ull;
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_elkan_f__1__5__1__2__4__1__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_elkan_f__1__5__1__2__4__1__1__x * self->dimension + d)];
          }

        break;
      }
      default:
        abort();
    }
    c = (unsigned int)0;
    if(!((unsigned long int)c >= self->numCenters))
    {
      float _vl_kmeans_refine_centers_elkan_f__1__5__1__3__1__distance;
      _vl_kmeans_refine_centers_elkan_f__1__5__1__3__1__distance=distFn(self->dimension, newCenters + (signed long int)((unsigned long int)c * self->dimension), (float *)self->centers + (signed long int)((unsigned long int)c * self->dimension));
      centerToNewCenterDistances[(signed long int)c] = _vl_kmeans_refine_centers_elkan_f__1__5__1__3__1__distance;
      numDistanceComputationsToNewCenters = numDistanceComputationsToNewCenters + (unsigned long long int)1;
      c = c + 1u;
    }

    float *tmp = (float *)self->centers;
    self->centers = (void *)newCenters;
    newCenters = tmp;
    double return_value__vl_kmeans_update_center_distances_f_14;
    return_value__vl_kmeans_update_center_distances_f_14=_vl_kmeans_update_center_distances_f(self);
    numDistanceComputationsToRefreshCenterDistances = numDistanceComputationsToRefreshCenterDistances + (unsigned long long int)return_value__vl_kmeans_update_center_distances_f_14;
    c = (unsigned int)0;
    for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
    {
      nextCenterDistances[(signed long int)c] = (float)vl_infinity_d_link2.value;
      j = (unsigned int)0;
      for( ; !((unsigned long int)j >= self->numCenters); j = j + 1u)
        if(!(j == c))
        {
          if(nextCenterDistances[(signed long int)c] < ((float *)self->centerDistances)[(signed long int)self->numCenters * (signed long int)(unsigned long int)c + (signed long int)(unsigned long int)j])
            tmp_if_expr_15 = nextCenterDistances[(signed long int)c];

          else
            tmp_if_expr_15 = ((float *)self->centerDistances)[(signed long int)((unsigned long int)j + (unsigned long int)c * self->numCenters)];
          nextCenterDistances[(signed long int)c] = tmp_if_expr_15;
        }

    }
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
    {
      float a = pointToClosestCenterUB[x];
      float _vl_kmeans_refine_centers_elkan_f__1__5__1__6__1__b = centerToNewCenterDistances[(signed long int)assignments[x]];
      if((signed int)self->distance == VlDistanceL1)
        pointToClosestCenterUB[x] = a + _vl_kmeans_refine_centers_elkan_f__1__5__1__6__1__b;

      else
      {
        float _vl_kmeans_refine_centers_elkan_f__1__5__1__6__1__2__sqrtab;
        _vl_kmeans_refine_centers_elkan_f__1__5__1__6__1__2__sqrtab=sqrtf(a * _vl_kmeans_refine_centers_elkan_f__1__5__1__6__1__b);
        pointToClosestCenterUB[x] = (float)((double)(a + _vl_kmeans_refine_centers_elkan_f__1__5__1__6__1__b) + 2.0 * (double)_vl_kmeans_refine_centers_elkan_f__1__5__1__6__1__2__sqrtab);
      }
      pointToClosestCenterUBIsStrict[x] = 0;
    }
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
    {
      c = (unsigned int)0;
      for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
      {
        float _vl_kmeans_refine_centers_elkan_f__1__5__1__7__1__1__1__a = pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)];
        float b = centerToNewCenterDistances[(signed long int)c];
        if(_vl_kmeans_refine_centers_elkan_f__1__5__1__7__1__1__1__a < b)
          pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = (float)0;

        else
          if((signed int)self->distance == VlDistanceL1)
            pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = _vl_kmeans_refine_centers_elkan_f__1__5__1__7__1__1__1__a - b;

          else
          {
            float sqrtab;
            sqrtab=sqrtf(_vl_kmeans_refine_centers_elkan_f__1__5__1__7__1__1__1__a * b);
            pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = (float)((double)(_vl_kmeans_refine_centers_elkan_f__1__5__1__7__1__1__1__a + b) - 2.0 * (double)sqrtab);
          }
      }
    }
    allDone = 1;
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
      if(!(((signed int)self->distance == VlDistanceL1 ? 2.0 : 4.0) * (double)pointToClosestCenterUB[x] <= (double)nextCenterDistances[(signed long int)assignments[x]]))
      {
        c = (unsigned int)0;
        for( ; !((unsigned long int)c >= self->numCenters); c = c + 1u)
        {
          unsigned int cx = assignments[x];
          float distance;
          if(!(cx == c))
          {
            if(!(((signed int)self->distance == VlDistanceL1 ? 2.0 : 4.0) * (double)pointToClosestCenterUB[x] <= (double)((float *)self->centerDistances)[(signed long int)self->numCenters * (signed long int)(unsigned long int)cx + (signed long int)(unsigned long int)c]))
            {
              if(!(pointToClosestCenterUB[x] <= pointToCenterLB[(signed long int)self->numCenters * (signed long int)(unsigned long int)x + (signed long int)(unsigned long int)c]))
              {
                if(pointToClosestCenterUBIsStrict[x] == 0)
                {
                  distance=distFn(self->dimension, data + (signed long int)(self->dimension * (unsigned long int)x), (float *)self->centers + (signed long int)(self->dimension * (unsigned long int)cx));
                  pointToClosestCenterUB[x] = distance;
                  pointToClosestCenterUBIsStrict[x] = 1;
                  pointToCenterLB[(signed long int)((unsigned long int)cx + (unsigned long int)x * self->numCenters)] = distance;
                  numDistanceComputationsToRefreshUB = numDistanceComputationsToRefreshUB + (unsigned long long int)1;
                }

                else
                {
                  distance=distFn(self->dimension, data + (signed long int)((unsigned long int)x * self->dimension), (float *)self->centers + (signed long int)((unsigned long int)c * self->dimension));
                  numDistanceComputationsToRefreshLB = numDistanceComputationsToRefreshLB + (unsigned long long int)1;
                  pointToCenterLB[(signed long int)((unsigned long int)c + (unsigned long int)x * self->numCenters)] = distance;
                  if(distance < pointToClosestCenterUB[x])
                  {
                    assignments[x] = c;
                    pointToClosestCenterUB[x] = distance;
                    allDone = 0;
                  }

                }
              }

            }

          }

        }
      }

    totDistanceComputationsToRefreshUB = totDistanceComputationsToRefreshUB + numDistanceComputationsToRefreshUB;
    totDistanceComputationsToRefreshLB = totDistanceComputationsToRefreshLB + numDistanceComputationsToRefreshLB;
    totDistanceComputationsToRefreshCenterDistances = totDistanceComputationsToRefreshCenterDistances + numDistanceComputationsToRefreshCenterDistances;
    totDistanceComputationsToNewCenters = totDistanceComputationsToNewCenters + numDistanceComputationsToNewCenters;
    totNumRestartedCenters = totNumRestartedCenters + numRestartedCenters;
    energy = (double)0;
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)numData); x = x + 1ll)
      energy = energy + (double)pointToClosestCenterUB[x];
    if(!(self->verbosity == 0))
    {
      unsigned long long int numDistanceComputations = numDistanceComputationsToRefreshUB + numDistanceComputationsToRefreshLB + numDistanceComputationsToRefreshCenterDistances + numDistanceComputationsToNewCenters;
      signed int (*return_value_vl_get_printf_func_16)(const char *, ...);
      return_value_vl_get_printf_func_16=vl_get_printf_func();
      return_value_vl_get_printf_func_16("kmeans: Elkan iter %d: energy <= %g, dist. calc. = %d\n", iteration, energy, numDistanceComputations);
      if(!(numRestartedCenters == 0ull))
      {
        signed int (*return_value_vl_get_printf_func_17)(const char *, ...);
        return_value_vl_get_printf_func_17=vl_get_printf_func();
        return_value_vl_get_printf_func_17("kmeans: Elkan iter %d: restarted %d centers\n", iteration, energy, numRestartedCenters);
      }

      if(self->verbosity >= 2)
      {
        signed int (*return_value_vl_get_printf_func_18)(const char *, ...);
        return_value_vl_get_printf_func_18=vl_get_printf_func();
        return_value_vl_get_printf_func_18("kmeans: Elkan iter %d: total dist. calc. per type: UB: %.1f%% (%d), LB: %.1f%% (%d), intra_center: %.1f%% (%d), new_center: %.1f%% (%d)\n", iteration, (100.0 * (double)numDistanceComputationsToRefreshUB) / (double)numDistanceComputations, numDistanceComputationsToRefreshUB, (100.0 * (double)numDistanceComputationsToRefreshLB) / (double)numDistanceComputations, numDistanceComputationsToRefreshLB, (100.0 * (double)numDistanceComputationsToRefreshCenterDistances) / (double)numDistanceComputations, numDistanceComputationsToRefreshCenterDistances, (100.0 * (double)numDistanceComputationsToNewCenters) / (double)numDistanceComputations, numDistanceComputationsToNewCenters);
      }

    }

    if(iteration >= self->maxNumIterations)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_19)(const char *, ...);
        return_value_vl_get_printf_func_19=vl_get_printf_func();
        return_value_vl_get_printf_func_19("kmeans: Elkan terminating because maximum number of iterations reached\n");
      }

      break;
    }

    if(!(allDone == 0))
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_20)(const char *, ...);
        return_value_vl_get_printf_func_20=vl_get_printf_func();
        return_value_vl_get_printf_func_20("kmeans: Elkan terminating because the algorithm fully converged\n");
      }

      break;
    }

  }
  energy = (double)0;
  x = (signed long long int)0;
  if(!(x >= (signed long int)(signed int)numData))
  {
    unsigned long long int _vl_kmeans_refine_centers_elkan_f__1__6__1__cx = (unsigned long long int)assignments[x];
    float return_value;
    return_value=distFn(self->dimension, data + (signed long int)(self->dimension * (unsigned long int)x), (float *)self->centers + (signed long int)(self->dimension * _vl_kmeans_refine_centers_elkan_f__1__6__1__cx));
    energy = energy + (double)return_value;
    totDistanceComputationsToFinalize = totDistanceComputationsToFinalize + (unsigned long long int)1;
    x = x + 1ll;
  }

  unsigned long long int totDistanceComputations = totDistanceComputationsToInit + totDistanceComputationsToRefreshUB + totDistanceComputationsToRefreshLB + totDistanceComputationsToRefreshCenterDistances + totDistanceComputationsToNewCenters + totDistanceComputationsToFinalize;
  double saving = (double)totDistanceComputations / (double)(iteration * self->numCenters * numData);
  if(!(self->verbosity == 0))
  {
    signed int (*return_value_vl_get_printf_func_21)(const char *, ...);
    return_value_vl_get_printf_func_21=vl_get_printf_func();
    return_value_vl_get_printf_func_21("kmeans: Elkan: total dist. calc.: %d (%.2f %% of Lloyd)\n", totDistanceComputations, saving * 100.0);
    if(!(totNumRestartedCenters == 0ull))
    {
      signed int (*return_value_vl_get_printf_func_22)(const char *, ...);
      return_value_vl_get_printf_func_22=vl_get_printf_func();
      return_value_vl_get_printf_func_22("kmeans: Elkan: there have been %d restarts\n", totNumRestartedCenters);
    }

  }

  if(self->verbosity >= 2)
  {
    signed int (*return_value_vl_get_printf_func_23)(const char *, ...);
    return_value_vl_get_printf_func_23=vl_get_printf_func();
    return_value_vl_get_printf_func_23("kmeans: Elkan: total dist. calc. per type: init: %.1f%% (%d), UB: %.1f%% (%d), LB: %.1f%% (%d), intra_center: %.1f%% (%d), new_center: %.1f%% (%d), finalize: %.1f%% (%d)\n", (100.0 * (double)totDistanceComputationsToInit) / (double)totDistanceComputations, totDistanceComputationsToInit, (100.0 * (double)totDistanceComputationsToRefreshUB) / (double)totDistanceComputations, totDistanceComputationsToRefreshUB, (100.0 * (double)totDistanceComputationsToRefreshLB) / (double)totDistanceComputations, totDistanceComputationsToRefreshLB, (100.0 * (double)totDistanceComputationsToRefreshCenterDistances) / (double)totDistanceComputations, totDistanceComputationsToRefreshCenterDistances, (100.0 * (double)totDistanceComputationsToNewCenters) / (double)totDistanceComputations, totDistanceComputationsToNewCenters, (100.0 * (double)totDistanceComputationsToFinalize) / (double)totDistanceComputations, totDistanceComputationsToFinalize);
  }

  if(!(permutations == ((unsigned int *)NULL)))
    vl_free((void *)permutations);

  if(!(numSeenSoFar == ((unsigned long long int *)NULL)))
    vl_free((void *)numSeenSoFar);

  vl_free((void *)distances);
  vl_free((void *)assignments);
  vl_free((void *)clusterMasses);
  vl_free((void *)nextCenterDistances);
  vl_free((void *)pointToClosestCenterUB);
  vl_free((void *)pointToClosestCenterUBIsStrict);
  vl_free((void *)pointToCenterLB);
  vl_free((void *)newCenters);
  vl_free((void *)centerToNewCenterDistances);
  return energy;
}

// _vl_kmeans_refine_centers_f
// file vl/kmeans.c line 1751
static double _vl_kmeans_refine_centers_f(struct _VlKMeans *self, const float *data, unsigned long long int numData)
{
  double return_value__vl_kmeans_refine_centers_lloyd_f_1;
  double return_value__vl_kmeans_refine_centers_elkan_f_2;
  double return_value__vl_kmeans_refine_centers_ann_f_3;
  switch((signed int)self->algorithm)
  {
    case VlKMeansLloyd:
    {
      return_value__vl_kmeans_refine_centers_lloyd_f_1=_vl_kmeans_refine_centers_lloyd_f(self, data, numData);
      return return_value__vl_kmeans_refine_centers_lloyd_f_1;
    }
    case VlKMeansElkan:
    {
      return_value__vl_kmeans_refine_centers_elkan_f_2=_vl_kmeans_refine_centers_elkan_f(self, data, numData);
      return return_value__vl_kmeans_refine_centers_elkan_f_2;
    }
    case VlKMeansANN:
    {
      return_value__vl_kmeans_refine_centers_ann_f_3=_vl_kmeans_refine_centers_ann_f(self, data, numData);
      return return_value__vl_kmeans_refine_centers_ann_f_3;
    }
    default:
      abort();
  }
}

// _vl_kmeans_refine_centers_lloyd_d
// file vl/kmeans.c line 829
static double _vl_kmeans_refine_centers_lloyd_d(struct _VlKMeans *self, const double *data, unsigned long long int numData)
{
  unsigned long long int c;
  unsigned long long int d;
  unsigned long long int x;
  unsigned long long int iteration;
  double previousEnergy = vl_infinity_d_link2.value;
  double initialEnergy = vl_infinity_d_link2.value;
  double energy;
  double *distances;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * numData);
  distances = (double *)return_value_vl_malloc_1;
  unsigned int *assignments;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData);
  assignments = (unsigned int *)return_value_vl_malloc_2;
  unsigned long long int *clusterMasses;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numData);
  clusterMasses = (unsigned long long int *)return_value_vl_malloc_3;
  unsigned int *permutations = (unsigned int *)(void *)0;
  unsigned long long int *numSeenSoFar = (unsigned long long int *)(void *)0;
  struct _VlRand *rand;
  rand=vl_get_rand();
  unsigned long long int totNumRestartedCenters = (unsigned long long int)0;
  unsigned long long int numRestartedCenters = (unsigned long long int)0;
  if((signed int)self->distance == VlDistanceL1)
  {
    void *return_value_vl_malloc_4;
    return_value_vl_malloc_4=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData * self->dimension);
    permutations = (unsigned int *)return_value_vl_malloc_4;
    void *return_value_vl_malloc_5;
    return_value_vl_malloc_5=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
    numSeenSoFar = (unsigned long long int *)return_value_vl_malloc_5;
    _vl_kmeans_sort_data_helper_d(self, permutations, data, numData);
  }

  energy = vl_infinity_d_link2.value;
  iteration = (unsigned long long int)0;
  for( ; (_Bool)1; iteration = iteration + 1ull)
  {
    _vl_kmeans_quantize_d(self, assignments, distances, data, numData);
    energy = (double)0;
    x = (unsigned long long int)0;
    for( ; !(x >= numData); x = x + 1ull)
      energy = energy + distances[(signed long int)x];
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
      return_value_vl_get_printf_func_6=vl_get_printf_func();
      return_value_vl_get_printf_func_6("kmeans: Lloyd iter %d: energy = %g\n", iteration, energy);
    }

    if(iteration >= self->maxNumIterations)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_7)(const char *, ...);
        return_value_vl_get_printf_func_7=vl_get_printf_func();
        return_value_vl_get_printf_func_7("kmeans: Lloyd terminating because maximum number of iterations reached\n");
      }

      break;
    }

    if(IEEE_FLOAT_EQUAL(energy, previousEnergy))
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_8)(const char *, ...);
        return_value_vl_get_printf_func_8=vl_get_printf_func();
        return_value_vl_get_printf_func_8("kmeans: Lloyd terminating because the algorithm fully converged\n");
      }

      break;
    }

    if(iteration == 0ul)
      initialEnergy = energy;

    else
    {
      double eps = (previousEnergy - energy) / (initialEnergy - energy);
      if(eps < self->minEnergyVariation)
      {
        if(!(self->verbosity == 0))
        {
          signed int (*return_value_vl_get_printf_func_9)(const char *, ...);
          return_value_vl_get_printf_func_9=vl_get_printf_func();
          return_value_vl_get_printf_func_9("kmeans: ANN terminating because the energy relative variation was less than %f\n", self->minEnergyVariation);
        }

        break;
      }

    }
    previousEnergy = energy;
    memset((void *)clusterMasses, 0, sizeof(unsigned long long int) /*8ul*/  * numData);
    x = (unsigned long long int)0;
    for( ; !(x >= numData); x = x + 1ull)
      clusterMasses[(signed long int)assignments[(signed long int)x]] = clusterMasses[(signed long int)assignments[(signed long int)x]] + 1ull;
    numRestartedCenters = (unsigned long long int)0;
    switch((signed int)self->distance)
    {
      case VlDistanceL2:
      {
        memset(self->centers, 0, sizeof(double) /*8ul*/  * self->dimension * self->numCenters);
        x = (unsigned long long int)0;
        for( ; !(x >= numData); x = x + 1ull)
        {
          double *_vl_kmeans_refine_centers_lloyd_d__1__2__1__8__1__1__cpt = (double *)self->centers + (signed long int)((unsigned long int)assignments[(signed long int)x] * self->dimension);
          const double *xpt = data + (signed long int)(x * self->dimension);
          d = (unsigned long long int)0;
          for( ; !(d >= self->dimension); d = d + 1ull)
            _vl_kmeans_refine_centers_lloyd_d__1__2__1__8__1__1__cpt[(signed long int)d] = _vl_kmeans_refine_centers_lloyd_d__1__2__1__8__1__1__cpt[(signed long int)d] + xpt[(signed long int)d];
        }
        c = (unsigned long long int)0;
        for( ; !(c >= self->numCenters); c = c + 1ull)
        {
          double *cpt = (double *)self->centers + (signed long int)(c * self->dimension);
          if(clusterMasses[(signed long int)c] >= 1ul)
          {
            double mass = (double)clusterMasses[(signed long int)c];
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              cpt[(signed long int)d] = cpt[(signed long int)d] / mass;
          }

          else
          {
            unsigned long long int _vl_kmeans_refine_centers_lloyd_d__1__2__1__8__2__1__2__x;
            _vl_kmeans_refine_centers_lloyd_d__1__2__1__8__2__1__2__x=vl_rand_uindex(rand, numData);
            numRestartedCenters = numRestartedCenters + 1ull;
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_lloyd_d__1__2__1__8__2__1__2__x * self->dimension + d)];
          }
        }
        break;
      }
      case VlDistanceL1:
      {
        d = (unsigned long long int)0;
        for( ; !(d >= self->dimension); d = d + 1ull)
        {
          unsigned int *perm = permutations + (signed long int)(d * numData);
          memset((void *)numSeenSoFar, 0, sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
          x = (unsigned long long int)0;
          for( ; !(x >= numData); x = x + 1ull)
          {
            c = (unsigned long long int)assignments[(signed long int)perm[(signed long int)x]];
            if(!(2ul * numSeenSoFar[(signed long int)c] >= clusterMasses[(signed long int)c]))
              ((double *)self->centers)[(signed long int)(d + c * self->dimension)] = data[(signed long int)(d + (unsigned long int)perm[(signed long int)x] * self->dimension)];

            numSeenSoFar[(signed long int)c] = numSeenSoFar[(signed long int)c] + 1ull;
          }
          c = (unsigned long long int)0;
          for( ; !(c >= self->numCenters); c = c + 1ull)
            if(clusterMasses[(signed long int)c] == 0ul)
            {
              double *_vl_kmeans_refine_centers_lloyd_d__1__2__1__8__3__1__2__1__1__cpt = (double *)self->centers + (signed long int)(c * self->dimension);
              unsigned long long int _vl_kmeans_refine_centers_lloyd_d__1__2__1__8__3__1__2__1__1__x;
              _vl_kmeans_refine_centers_lloyd_d__1__2__1__8__3__1__2__1__1__x=vl_rand_uindex(rand, numData);
              numRestartedCenters = numRestartedCenters + 1ull;
              d = (unsigned long long int)0;
              for( ; !(d >= self->dimension); d = d + 1ull)
                _vl_kmeans_refine_centers_lloyd_d__1__2__1__8__3__1__2__1__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_lloyd_d__1__2__1__8__3__1__2__1__1__x * self->dimension + d)];
            }

        }
        break;
      }
      default:
        abort();
    }
    totNumRestartedCenters = totNumRestartedCenters + numRestartedCenters;
    if(!(self->verbosity == 0))
    {
      if(!(numRestartedCenters == 0ull))
      {
        signed int (*return_value_vl_get_printf_func_10)(const char *, ...);
        return_value_vl_get_printf_func_10=vl_get_printf_func();
        return_value_vl_get_printf_func_10("kmeans: Lloyd iter %d: restarted %d centers\n", iteration, numRestartedCenters);
      }

    }

  }
  if(!(permutations == ((unsigned int *)NULL)))
    vl_free((void *)permutations);

  if(!(numSeenSoFar == ((unsigned long long int *)NULL)))
    vl_free((void *)numSeenSoFar);

  vl_free((void *)distances);
  vl_free((void *)assignments);
  vl_free((void *)clusterMasses);
  return energy;
}

// _vl_kmeans_refine_centers_lloyd_f
// file vl/kmeans.c line 829
static double _vl_kmeans_refine_centers_lloyd_f(struct _VlKMeans *self, const float *data, unsigned long long int numData)
{
  unsigned long long int c;
  unsigned long long int d;
  unsigned long long int _vl_kmeans_refine_centers_lloyd_f__1__x;
  unsigned long long int iteration;
  double previousEnergy = vl_infinity_d_link2.value;
  double initialEnergy = vl_infinity_d_link2.value;
  double energy;
  float *distances;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * numData);
  distances = (float *)return_value_vl_malloc_1;
  unsigned int *assignments;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData);
  assignments = (unsigned int *)return_value_vl_malloc_2;
  unsigned long long int *clusterMasses;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numData);
  clusterMasses = (unsigned long long int *)return_value_vl_malloc_3;
  unsigned int *permutations = (unsigned int *)(void *)0;
  unsigned long long int *numSeenSoFar = (unsigned long long int *)(void *)0;
  struct _VlRand *rand;
  rand=vl_get_rand();
  unsigned long long int totNumRestartedCenters = (unsigned long long int)0;
  unsigned long long int numRestartedCenters = (unsigned long long int)0;
  if((signed int)self->distance == VlDistanceL1)
  {
    void *return_value_vl_malloc_4;
    return_value_vl_malloc_4=vl_malloc(sizeof(unsigned int) /*4ul*/  * numData * self->dimension);
    permutations = (unsigned int *)return_value_vl_malloc_4;
    void *return_value_vl_malloc_5;
    return_value_vl_malloc_5=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
    numSeenSoFar = (unsigned long long int *)return_value_vl_malloc_5;
    _vl_kmeans_sort_data_helper_f(self, permutations, data, numData);
  }

  energy = vl_infinity_d_link2.value;
  iteration = (unsigned long long int)0;
  for( ; (_Bool)1; iteration = iteration + 1ull)
  {
    _vl_kmeans_quantize_f(self, assignments, distances, data, numData);
    energy = (double)0;
    _vl_kmeans_refine_centers_lloyd_f__1__x = (unsigned long long int)0;
    for( ; !(_vl_kmeans_refine_centers_lloyd_f__1__x >= numData); _vl_kmeans_refine_centers_lloyd_f__1__x = _vl_kmeans_refine_centers_lloyd_f__1__x + 1ull)
      energy = energy + (double)distances[(signed long int)_vl_kmeans_refine_centers_lloyd_f__1__x];
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
      return_value_vl_get_printf_func_6=vl_get_printf_func();
      return_value_vl_get_printf_func_6("kmeans: Lloyd iter %d: energy = %g\n", iteration, energy);
    }

    if(iteration >= self->maxNumIterations)
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_7)(const char *, ...);
        return_value_vl_get_printf_func_7=vl_get_printf_func();
        return_value_vl_get_printf_func_7("kmeans: Lloyd terminating because maximum number of iterations reached\n");
      }

      break;
    }

    if(IEEE_FLOAT_EQUAL(energy, previousEnergy))
    {
      if(!(self->verbosity == 0))
      {
        signed int (*return_value_vl_get_printf_func_8)(const char *, ...);
        return_value_vl_get_printf_func_8=vl_get_printf_func();
        return_value_vl_get_printf_func_8("kmeans: Lloyd terminating because the algorithm fully converged\n");
      }

      break;
    }

    if(iteration == 0ul)
      initialEnergy = energy;

    else
    {
      double eps = (previousEnergy - energy) / (initialEnergy - energy);
      if(eps < self->minEnergyVariation)
      {
        if(!(self->verbosity == 0))
        {
          signed int (*return_value_vl_get_printf_func_9)(const char *, ...);
          return_value_vl_get_printf_func_9=vl_get_printf_func();
          return_value_vl_get_printf_func_9("kmeans: ANN terminating because the energy relative variation was less than %f\n", self->minEnergyVariation);
        }

        break;
      }

    }
    previousEnergy = energy;
    memset((void *)clusterMasses, 0, sizeof(unsigned long long int) /*8ul*/  * numData);
    _vl_kmeans_refine_centers_lloyd_f__1__x = (unsigned long long int)0;
    for( ; !(_vl_kmeans_refine_centers_lloyd_f__1__x >= numData); _vl_kmeans_refine_centers_lloyd_f__1__x = _vl_kmeans_refine_centers_lloyd_f__1__x + 1ull)
      clusterMasses[(signed long int)assignments[(signed long int)_vl_kmeans_refine_centers_lloyd_f__1__x]] = clusterMasses[(signed long int)assignments[(signed long int)_vl_kmeans_refine_centers_lloyd_f__1__x]] + 1ull;
    numRestartedCenters = (unsigned long long int)0;
    switch((signed int)self->distance)
    {
      case VlDistanceL2:
      {
        memset(self->centers, 0, sizeof(float) /*4ul*/  * self->dimension * self->numCenters);
        _vl_kmeans_refine_centers_lloyd_f__1__x = (unsigned long long int)0;
        for( ; !(_vl_kmeans_refine_centers_lloyd_f__1__x >= numData); _vl_kmeans_refine_centers_lloyd_f__1__x = _vl_kmeans_refine_centers_lloyd_f__1__x + 1ull)
        {
          float *_vl_kmeans_refine_centers_lloyd_f__1__2__1__8__1__1__cpt = (float *)self->centers + (signed long int)((unsigned long int)assignments[(signed long int)_vl_kmeans_refine_centers_lloyd_f__1__x] * self->dimension);
          const float *xpt = data + (signed long int)(_vl_kmeans_refine_centers_lloyd_f__1__x * self->dimension);
          d = (unsigned long long int)0;
          for( ; !(d >= self->dimension); d = d + 1ull)
            _vl_kmeans_refine_centers_lloyd_f__1__2__1__8__1__1__cpt[(signed long int)d] = _vl_kmeans_refine_centers_lloyd_f__1__2__1__8__1__1__cpt[(signed long int)d] + xpt[(signed long int)d];
        }
        c = (unsigned long long int)0;
        for( ; !(c >= self->numCenters); c = c + 1ull)
        {
          float *_vl_kmeans_refine_centers_lloyd_f__1__2__1__8__2__1__cpt = (float *)self->centers + (signed long int)(c * self->dimension);
          if(clusterMasses[(signed long int)c] >= 1ul)
          {
            float mass = (float)clusterMasses[(signed long int)c];
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_lloyd_f__1__2__1__8__2__1__cpt[(signed long int)d] = _vl_kmeans_refine_centers_lloyd_f__1__2__1__8__2__1__cpt[(signed long int)d] / mass;
          }

          else
          {
            unsigned long long int _vl_kmeans_refine_centers_lloyd_f__1__2__1__8__2__1__2__x;
            _vl_kmeans_refine_centers_lloyd_f__1__2__1__8__2__1__2__x=vl_rand_uindex(rand, numData);
            numRestartedCenters = numRestartedCenters + 1ull;
            d = (unsigned long long int)0;
            for( ; !(d >= self->dimension); d = d + 1ull)
              _vl_kmeans_refine_centers_lloyd_f__1__2__1__8__2__1__cpt[(signed long int)d] = data[(signed long int)(_vl_kmeans_refine_centers_lloyd_f__1__2__1__8__2__1__2__x * self->dimension + d)];
          }
        }
        break;
      }
      case VlDistanceL1:
      {
        d = (unsigned long long int)0;
        for( ; !(d >= self->dimension); d = d + 1ull)
        {
          unsigned int *perm = permutations + (signed long int)(d * numData);
          memset((void *)numSeenSoFar, 0, sizeof(unsigned long long int) /*8ul*/  * self->numCenters);
          _vl_kmeans_refine_centers_lloyd_f__1__x = (unsigned long long int)0;
          for( ; !(_vl_kmeans_refine_centers_lloyd_f__1__x >= numData); _vl_kmeans_refine_centers_lloyd_f__1__x = _vl_kmeans_refine_centers_lloyd_f__1__x + 1ull)
          {
            c = (unsigned long long int)assignments[(signed long int)perm[(signed long int)_vl_kmeans_refine_centers_lloyd_f__1__x]];
            if(!(2ul * numSeenSoFar[(signed long int)c] >= clusterMasses[(signed long int)c]))
              ((float *)self->centers)[(signed long int)(d + c * self->dimension)] = data[(signed long int)(d + (unsigned long int)perm[(signed long int)_vl_kmeans_refine_centers_lloyd_f__1__x] * self->dimension)];

            numSeenSoFar[(signed long int)c] = numSeenSoFar[(signed long int)c] + 1ull;
          }
          c = (unsigned long long int)0;
          for( ; !(c >= self->numCenters); c = c + 1ull)
            if(clusterMasses[(signed long int)c] == 0ul)
            {
              float *cpt = (float *)self->centers + (signed long int)(c * self->dimension);
              unsigned long long int x;
              x=vl_rand_uindex(rand, numData);
              numRestartedCenters = numRestartedCenters + 1ull;
              d = (unsigned long long int)0;
              for( ; !(d >= self->dimension); d = d + 1ull)
                cpt[(signed long int)d] = data[(signed long int)(x * self->dimension + d)];
            }

        }
        break;
      }
      default:
        abort();
    }
    totNumRestartedCenters = totNumRestartedCenters + numRestartedCenters;
    if(!(self->verbosity == 0))
    {
      if(!(numRestartedCenters == 0ull))
      {
        signed int (*return_value_vl_get_printf_func_10)(const char *, ...);
        return_value_vl_get_printf_func_10=vl_get_printf_func();
        return_value_vl_get_printf_func_10("kmeans: Lloyd iter %d: restarted %d centers\n", iteration, numRestartedCenters);
      }

    }

  }
  if(!(permutations == ((unsigned int *)NULL)))
    vl_free((void *)permutations);

  if(!(numSeenSoFar == ((unsigned long long int *)NULL)))
    vl_free((void *)numSeenSoFar);

  vl_free((void *)distances);
  vl_free((void *)assignments);
  vl_free((void *)clusterMasses);
  return energy;
}

// _vl_kmeans_set_centers_d
// file vl/kmeans.c line 510
static void _vl_kmeans_set_centers_d(struct _VlKMeans *self, const double *centers, unsigned long long int dimension, unsigned long long int numCenters)
{
  self->dimension = dimension;
  self->numCenters = numCenters;
  self->centers=vl_malloc(sizeof(double) /*8ul*/  * dimension * numCenters);
  memcpy((void *)(double *)self->centers, (const void *)centers, sizeof(double) /*8ul*/  * dimension * numCenters);
}

// _vl_kmeans_set_centers_f
// file vl/kmeans.c line 510
static void _vl_kmeans_set_centers_f(struct _VlKMeans *self, const float *centers, unsigned long long int dimension, unsigned long long int numCenters)
{
  self->dimension = dimension;
  self->numCenters = numCenters;
  self->centers=vl_malloc(sizeof(float) /*4ul*/  * dimension * numCenters);
  memcpy((void *)(float *)self->centers, (const void *)centers, sizeof(float) /*4ul*/  * dimension * numCenters);
}

// _vl_kmeans_shuffle
// file vl/shuffle-def.h line 83
static inline void _vl_kmeans_shuffle(unsigned long long int *array, unsigned long long int size, struct _VlRand *rand)
{
  unsigned long long int n = size;
  while(n >= 2ul)
  {
    unsigned long long int k;
    k=vl_rand_uindex(rand, n);
    n = n - 1ull;
    _vl_kmeans_swap(array, n, k);
  }
}

// _vl_kmeans_sort_data_helper_d
// file vl/kmeans.c line 807
static void _vl_kmeans_sort_data_helper_d(struct _VlKMeans *self, unsigned int *permutations, const double *data, unsigned long long int numData)
{
  unsigned long long int d;
  unsigned long long int x;
  d = (unsigned long long int)0;
  for( ; !(d >= self->dimension); d = d + 1ull)
  {
    struct _VlKMeansSortWrapper array;
    array.permutation = permutations + (signed long int)(d * numData);
    array.data = (const void *)(data + (signed long int)d);
    array.stride = self->dimension;
    x = (unsigned long long int)0;
    for( ; !(x >= numData); x = x + 1ull)
      array.permutation[(signed long int)x] = (unsigned int)x;
    _vl_kmeans_d_qsort_sort(&array, numData);
  }
}

// _vl_kmeans_sort_data_helper_f
// file vl/kmeans.c line 807
static void _vl_kmeans_sort_data_helper_f(struct _VlKMeans *self, unsigned int *permutations, const float *data, unsigned long long int numData)
{
  unsigned long long int d;
  unsigned long long int x;
  d = (unsigned long long int)0;
  for( ; !(d >= self->dimension); d = d + 1ull)
  {
    struct _VlKMeansSortWrapper array;
    array.permutation = permutations + (signed long int)(d * numData);
    array.data = (const void *)(data + (signed long int)d);
    array.stride = self->dimension;
    x = (unsigned long long int)0;
    for( ; !(x >= numData); x = x + 1ull)
      array.permutation[(signed long int)x] = (unsigned int)x;
    _vl_kmeans_f_qsort_sort(&array, numData);
  }
}

// _vl_kmeans_swap
// file vl/shuffle-def.h line 56
static inline void _vl_kmeans_swap(unsigned long long int *array, unsigned long long int indexA, unsigned long long int indexB)
{
  unsigned long long int t = array[(signed long int)indexA];
  array[(signed long int)indexA] = array[(signed long int)indexB];
  array[(signed long int)indexB] = t;
}

// _vl_kmeans_update_center_distances_d
// file vl/kmeans.c line 981
static double _vl_kmeans_update_center_distances_d(struct _VlKMeans *self)
{
  double (*distFn)(unsigned long long int, const double *, const double *);
  distFn=vl_get_vector_comparison_function_d(self->distance);
  if(self->centerDistances == NULL)
    self->centerDistances=vl_malloc(sizeof(double) /*8ul*/  * self->numCenters * self->numCenters);

  vl_eval_vector_comparison_on_all_pairs_d((double *)self->centerDistances, self->dimension, (const double *)self->centers, self->numCenters, (const double *)(void *)0, (unsigned long long int)0, distFn);
  return (double)((self->numCenters * (self->numCenters - (unsigned long int)1)) / (unsigned long int)2);
}

// _vl_kmeans_update_center_distances_f
// file vl/kmeans.c line 981
static double _vl_kmeans_update_center_distances_f(struct _VlKMeans *self)
{
  float (*distFn)(unsigned long long int, const float *, const float *);
  distFn=vl_get_vector_comparison_function_f(self->distance);
  if(self->centerDistances == NULL)
    self->centerDistances=vl_malloc(sizeof(float) /*4ul*/  * self->numCenters * self->numCenters);

  vl_eval_vector_comparison_on_all_pairs_f((float *)self->centerDistances, self->dimension, (const float *)self->centers, self->numCenters, (const float *)(void *)0, (unsigned long long int)0, distFn);
  return (double)((self->numCenters * (self->numCenters - (unsigned long int)1)) / (unsigned long int)2);
}

// _vl_lbp_init_uniform
// file vl/lbp.c line 172
static void _vl_lbp_init_uniform(struct VlLbp_ *self)
{
  signed int i;
  signed int j;
  self->dimension = (unsigned long long int)58;
  i = 0;
  for( ; !(i >= 256); i = i + 1)
    self->mapping[(signed long int)i] = (unsigned char)57;
  self->mapping[(signed long int)0x00] = (unsigned char)56;
  self->mapping[(signed long int)0xff] = (unsigned char)56;
  i = 0;
  for( ; !(i >= 8); i = i + 1)
  {
    j = 1;
    for( ; !(j >= 8); j = j + 1)
    {
      signed int ip;
      unsigned int string;
      if(!(self->transposed == 0))
        ip = (((-i + 2) - (j - 1)) + 16) % 8;

      else
        ip = i;
      string = (unsigned int)((1 << j) - 1);
      string = string << ip;
      string = (string | string >> 8) & (unsigned int)0xff;
      self->mapping[(signed long int)string] = (unsigned char)(i * 7 + (j - 1));
    }
  }
}

// _vl_new_gaussian_fitler_d
// file vl/imopv.c line 621
static double * _vl_new_gaussian_fitler_d(unsigned long long int *size, double sigma)
{
  double *filter;
  double mass = (double)1.0;
  signed long long int i;
  unsigned long long int width;
  signed long int return_value_vl_ceil_d_1;
  return_value_vl_ceil_d_1=vl_ceil_d_link1(sigma * 3.0);
  width = (unsigned long long int)return_value_vl_ceil_d_1;
  *size = (unsigned long int)2 * width + (unsigned long int)1;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(*size * sizeof(double) /*8ul*/ );
  filter = (double *)return_value_vl_malloc_2;
  filter[(signed long int)width] = 1.0;
  i = (signed long long int)1;
  for( ; (signed long int)(signed int)width >= i; i = i + 1ll)
  {
    double x = (double)i / sigma;
    double g;
    g=exp(-0.5 * x * x);
    mass = mass + g + g;
    filter[(signed long int)(width - (unsigned long int)i)] = g;
    filter[(signed long int)(width + (unsigned long int)i)] = g;
  }
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)*size); i = i + 1ll)
    filter[i] = filter[i] / mass;
  return filter;
}

// _vl_new_gaussian_fitler_f
// file vl/imopv.c line 621
static float * _vl_new_gaussian_fitler_f(unsigned long long int *size, double sigma)
{
  float *filter;
  float mass = (float)1.0;
  signed long long int i;
  unsigned long long int width;
  signed long int return_value_vl_ceil_d_1;
  return_value_vl_ceil_d_1=vl_ceil_d_link1(sigma * 3.0);
  width = (unsigned long long int)return_value_vl_ceil_d_1;
  *size = (unsigned long int)2 * width + (unsigned long int)1;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(*size * sizeof(float) /*4ul*/ );
  filter = (float *)return_value_vl_malloc_2;
  filter[(signed long int)width] = (float)1.0;
  i = (signed long long int)1;
  for( ; (signed long int)(signed int)width >= i; i = i + 1ll)
  {
    double x = (double)i / sigma;
    double g;
    g=exp(-0.5 * x * x);
    mass = mass + (float)(g + g);
    filter[(signed long int)(width - (unsigned long int)i)] = (float)g;
    filter[(signed long int)(width + (unsigned long int)i)] = (float)g;
  }
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)*size); i = i + 1ll)
    filter[i] = filter[i] / mass;
  return filter;
}

// _vl_resize_buffer
// file vl/covdet.c line 956
static signed int _vl_resize_buffer(void **buffer, unsigned long long int *bufferSize, unsigned long long int targetSize)
{
  void *newBuffer;
  if(*buffer == NULL)
  {
    *buffer=vl_malloc(targetSize);
    if(!(*buffer == NULL))
    {
      *bufferSize = targetSize;
      return 0;
    }

    *bufferSize = (unsigned long long int)0;
    return 2;
  }

  else
  {
    newBuffer=vl_realloc(*buffer, targetSize);
    if(!(newBuffer == NULL))
    {
      *buffer = newBuffer;
      *bufferSize = targetSize;
      return 0;
    }

    else
      return 2;
  }
}

// _vl_scalespace_fill_octave
// file vl/scalespace.c line 669
void _vl_scalespace_fill_octave(struct _VlScaleSpace *self, signed long long int o)
{
  signed long long int s;
  struct _VlScaleSpaceOctaveGeometry ogeom;
  ogeom=vl_scalespace_get_octave_geometry(self, o);
  s = self->geom.octaveFirstSubdivision + (signed long int)1;
  for( ; self->geom.octaveLastSubdivision >= s; s = s + 1ll)
  {
    double sigma;
    sigma=vl_scalespace_get_level_sigma(self, o, s);
    double previousSigma;
    previousSigma=vl_scalespace_get_level_sigma(self, o, s - (signed long int)1);
    double deltaSigma;
    float return_value_sqrtf_1;
    return_value_sqrtf_1=sqrtf((float)(sigma * sigma - previousSigma * previousSigma));
    deltaSigma = (double)return_value_sqrtf_1;
    float *level;
    level=vl_scalespace_get_level(self, o, s);
    float *previous;
    previous=vl_scalespace_get_level(self, o, s - (signed long int)1);
    vl_imsmooth_f(level, ogeom.width, previous, ogeom.width, ogeom.height, ogeom.width, deltaSigma / ogeom.step, deltaSigma / ogeom.step);
  }
}

// _vl_scalespace_start_octave_from_image
// file vl/scalespace.c line 700
static void _vl_scalespace_start_octave_from_image(struct _VlScaleSpace *self, const float *image, signed long long int o)
{
  float *level;
  double sigma;
  double imageSigma;
  signed long long int op;
  level=vl_scalespace_get_level(self, (signed long int)0 > o ? (signed long int)0 : o, self->geom.octaveFirstSubdivision);
  copy_and_downsample(level, image, self->geom.width, self->geom.height, (unsigned long long int)((signed long int)0 > o ? (signed long int)0 : o));
  op = (signed long long int)-1;
  for( ; op >= o; op = op - 1ll)
  {
    struct _VlScaleSpaceOctaveGeometry _vl_scalespace_start_octave_from_image__1__1__1__ogeom;
    _vl_scalespace_start_octave_from_image__1__1__1__ogeom=vl_scalespace_get_octave_geometry(self, op + (signed long int)1);
    float *succLevel;
    succLevel=vl_scalespace_get_level(self, op + (signed long int)1, self->geom.octaveFirstSubdivision);
    level=vl_scalespace_get_level(self, op, self->geom.octaveFirstSubdivision);
    copy_and_upsample(level, succLevel, _vl_scalespace_start_octave_from_image__1__1__1__ogeom.width, _vl_scalespace_start_octave_from_image__1__1__1__ogeom.height);
  }
  sigma=vl_scalespace_get_level_sigma(self, o, self->geom.octaveFirstSubdivision);
  imageSigma = self->geom.nominalScale;
  if(sigma > imageSigma)
  {
    struct _VlScaleSpaceOctaveGeometry ogeom;
    ogeom=vl_scalespace_get_octave_geometry(self, o);
    double deltaSigma;
    deltaSigma=sqrt(sigma * sigma - imageSigma * imageSigma);
    level=vl_scalespace_get_level(self, o, self->geom.octaveFirstSubdivision);
    vl_imsmooth_f(level, ogeom.width, level, ogeom.width, ogeom.height, ogeom.width, deltaSigma / ogeom.step, deltaSigma / ogeom.step);
  }

}

// _vl_scalespace_start_octave_from_previous_octave
// file vl/scalespace.c line 756
static void _vl_scalespace_start_octave_from_previous_octave(struct _VlScaleSpace *self, signed long long int o)
{
  double sigma;
  double prevSigma;
  float *level;
  float *prevLevel;
  signed long long int prevLevelIndex;
  struct _VlScaleSpaceOctaveGeometry ogeom;
  signed long long int tmp_if_expr_1;
  if(!(self->geom.octaveFirstSubdivision + (signed long int)(signed int)self->geom.octaveResolution >= self->geom.octaveLastSubdivision))
    tmp_if_expr_1 = self->geom.octaveFirstSubdivision + (signed long int)(signed int)self->geom.octaveResolution;

  else
    tmp_if_expr_1 = self->geom.octaveLastSubdivision;
  prevLevelIndex = tmp_if_expr_1;
  prevLevel=vl_scalespace_get_level(self, o - (signed long int)1, prevLevelIndex);
  level=vl_scalespace_get_level(self, o, self->geom.octaveFirstSubdivision);
  ogeom=vl_scalespace_get_octave_geometry(self, o - (signed long int)1);
  copy_and_downsample(level, prevLevel, ogeom.width, ogeom.height, (unsigned long long int)1);
  sigma=vl_scalespace_get_level_sigma(self, o, self->geom.octaveFirstSubdivision);
  prevSigma=vl_scalespace_get_level_sigma(self, o - (signed long int)1, prevLevelIndex);
  if(sigma > prevSigma)
  {
    struct _VlScaleSpaceOctaveGeometry _vl_scalespace_start_octave_from_previous_octave__1__1__ogeom;
    _vl_scalespace_start_octave_from_previous_octave__1__1__ogeom=vl_scalespace_get_octave_geometry(self, o);
    double deltaSigma;
    deltaSigma=sqrt(sigma * sigma - prevSigma * prevSigma);
    level=vl_scalespace_get_level(self, o, self->geom.octaveFirstSubdivision);
    vl_imsmooth_f(level, _vl_scalespace_start_octave_from_previous_octave__1__1__ogeom.width, level, _vl_scalespace_start_octave_from_previous_octave__1__1__ogeom.width, _vl_scalespace_start_octave_from_previous_octave__1__1__ogeom.height, _vl_scalespace_start_octave_from_previous_octave__1__1__ogeom.width, deltaSigma / _vl_scalespace_start_octave_from_previous_octave__1__1__ogeom.step, deltaSigma / _vl_scalespace_start_octave_from_previous_octave__1__1__ogeom.step);
  }

}

// _vl_svm_evaluate
// file vl/svm.c line 1911
void _vl_svm_evaluate(struct VlSvm_ *self)
{
  double startTime;
  startTime=vl_get_cpu_time();
  _vl_svm_update_statistics(self);
  double return_value_vl_get_cpu_time_1;
  return_value_vl_get_cpu_time_1=vl_get_cpu_time();
  self->statistics.elapsedTime = return_value_vl_get_cpu_time_1 - startTime;
  self->statistics.iteration = (unsigned long long int)0;
  self->statistics.epoch = (unsigned long long int)0;
  self->statistics.status = (enum anonymous_7)VlSvmStatusConverged;
  if(!(self->diagnosticFn == ((void (*)(struct VlSvm_ *, void *))NULL)))
    self->diagnosticFn(self, self->diagnosticFnData);

}

// _vl_svm_sdca_train
// file vl/svm.c line 1931
void _vl_svm_sdca_train(struct VlSvm_ *self)
{
  double *norm2;
  signed long long int *permutation;
  unsigned long long int i;
  unsigned long long int t;
  double inner;
  double delta;
  double multiplier;
  double p;
  double startTime;
  startTime=vl_get_cpu_time();
  struct _VlRand *rand;
  rand=vl_get_rand();
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(self->numData, sizeof(double) /*8ul*/ );
  norm2 = (double *)return_value_vl_calloc_1;
  void *return_value_vl_calloc_2;
  return_value_vl_calloc_2=vl_calloc(self->numData, sizeof(signed long long int) /*8ul*/ );
  permutation = (signed long long int *)return_value_vl_calloc_2;
  double *buffer;
  void *return_value_vl_calloc_3;
  return_value_vl_calloc_3=vl_calloc(self->dimension, sizeof(double) /*8ul*/ );
  buffer = (double *)return_value_vl_calloc_3;
  i = (unsigned long long int)0;
  if(!(i >= (unsigned long int)(unsigned int)self->numData))
  {
    double n2;
    permutation[(signed long int)i] = (signed long long int)i;
    memset((void *)buffer, 0, self->dimension * sizeof(double) /*8ul*/ );
    self->accumulateFn(self->data, i, buffer, (double)1);
    n2=self->innerProductFn(self->data, i, buffer);
    n2 = n2 + self->biasMultiplier * self->biasMultiplier;
    norm2[(signed long int)i] = n2 / (self->lambda * (double)self->numData);
    i = i + 1ull;
  }

  vl_free((void *)buffer);
  t = (unsigned long long int)0;
  double tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  for( ; (_Bool)1; t = t + 1ull)
  {
    if(t % self->numData == 0ul)
      vl_rand_permute_indexes(rand, permutation, self->numData);

    i = (unsigned long long int)permutation[(signed long int)(t % self->numData)];
    if(!(self->weights == ((const double *)NULL)))
      tmp_if_expr_4 = self->weights[(signed long int)i];

    else
      tmp_if_expr_4 = 1.0;
    p = tmp_if_expr_4;
    if(p > 0.000000)
    {
      inner=self->innerProductFn(self->data, i, self->model);
      inner = inner + self->bias * self->biasMultiplier;
      double return_value;
      return_value=self->dcaUpdateFn(self->alpha[(signed long int)i] / p, inner, p * norm2[(signed long int)i], self->labels[(signed long int)i]);
      delta = p * return_value;
    }

    else
      delta = (double)0;
    if(IEEE_FLOAT_NOTEQUAL(delta, 0.000000))
    {
      self->alpha[(signed long int)i] = self->alpha[(signed long int)i] + delta;
      multiplier = delta / ((double)self->numData * self->lambda);
      self->accumulateFn(self->data, i, self->model, multiplier);
      self->bias = self->bias + self->biasMultiplier * multiplier;
    }

    if((1ul + t) % self->diagnosticFrequency == 0ul)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = t + (unsigned long int)1 == self->maxNumIterations ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
    {
      _vl_svm_update_statistics(self);
      double return_value_vl_get_cpu_time_5;
      return_value_vl_get_cpu_time_5=vl_get_cpu_time();
      self->statistics.elapsedTime = return_value_vl_get_cpu_time_5 - startTime;
      self->statistics.iteration = t;
      self->statistics.epoch = t / self->numData;
      self->statistics.status = (enum anonymous_7)VlSvmStatusTraining;
      if(self->statistics.dualityGap < self->epsilon)
        self->statistics.status = (enum anonymous_7)VlSvmStatusConverged;

      else
        if(1ul + t == self->maxNumIterations)
          self->statistics.status = (enum anonymous_7)VlSvmStatusMaxNumIterationsReached;

      if(!(self->diagnosticFn == ((void (*)(struct VlSvm_ *, void *))NULL)))
        self->diagnosticFn(self, self->diagnosticFnData);

      if(!((signed int)self->statistics.status == VlSvmStatusTraining))
        break;

    }

  }
  vl_free((void *)norm2);
  vl_free((void *)permutation);
}

// _vl_svm_sgd_train
// file vl/svm.c line 2018
void _vl_svm_sgd_train(struct VlSvm_ *self)
{
  signed long long int *permutation;
  double *scores;
  double *previousScores;
  unsigned long long int i;
  unsigned long long int t;
  unsigned long long int k;
  double inner;
  double gradient;
  double rate;
  double biasRate;
  double p;
  double factor = 1.0;
  double biasFactor = 1.0;
  signed long long int t0;
  signed long int return_value_vl_ceil_d_1;
  return_value_vl_ceil_d_1=vl_ceil_d(1.0 / self->lambda);
  signed long int tmp_if_expr_3;
  signed long int return_value_vl_ceil_d_2;
  if(!(return_value_vl_ceil_d_1 >= 2l))
    tmp_if_expr_3 = (signed long int)2;

  else
  {
    return_value_vl_ceil_d_2=vl_ceil_d(1.0 / self->lambda);
    tmp_if_expr_3 = return_value_vl_ceil_d_2;
  }
  t0 = tmp_if_expr_3;
  double startTime;
  startTime=vl_get_cpu_time();
  struct _VlRand *rand;
  rand=vl_get_rand();
  void *return_value_vl_calloc_4;
  return_value_vl_calloc_4=vl_calloc(self->numData, sizeof(signed long long int) /*8ul*/ );
  permutation = (signed long long int *)return_value_vl_calloc_4;
  void *return_value_vl_calloc_5;
  return_value_vl_calloc_5=vl_calloc(self->numData * (unsigned long int)2, sizeof(double) /*8ul*/ );
  scores = (double *)return_value_vl_calloc_5;
  previousScores = scores + (signed long int)self->numData;
  i = (unsigned long long int)0;
  for( ; !(i >= (unsigned long int)(unsigned int)self->numData); i = i + 1ull)
  {
    permutation[(signed long int)i] = (signed long long int)i;
    previousScores[(signed long int)i] = -vl_infinity_d_link4.value;
  }
  t = (unsigned long long int)0;
  double tmp_if_expr_6;
  _Bool tmp_if_expr_9;
  {
    if(t % self->numData == 0ul)
      vl_rand_permute_indexes(rand, permutation, self->numData);

    i = (unsigned long long int)permutation[(signed long int)(t % self->numData)];
    if(!(self->weights == ((const double *)NULL)))
      tmp_if_expr_6 = self->weights[(signed long int)i];

    else
      tmp_if_expr_6 = 1.0;
    p = tmp_if_expr_6;
    p = 0.0 > p ? 0.0 : p;
    double return_value;
    return_value=self->innerProductFn(self->data, i, self->model);
    inner = factor * return_value;
    inner = inner + biasFactor * self->biasMultiplier * self->bias;
    double return_value_1;
    return_value_1=self->lossDerivativeFn(inner, self->labels[(signed long int)i]);
    gradient = p * return_value_1;
    previousScores[(signed long int)i] = scores[(signed long int)i];
    scores[(signed long int)i] = inner;
    rate = 1.0 / (self->lambda * (double)(t + (unsigned long int)t0));
    biasRate = rate * self->biasLearningRate;
    factor = factor * (1.0 - self->lambda * rate);
    biasFactor = biasFactor * (1.0 - self->lambda * biasRate);
    if(IEEE_FLOAT_NOTEQUAL(gradient, 0.000000))
    {
      self->accumulateFn(self->data, i, self->model, (-gradient * rate) / factor);
      self->bias = self->bias + self->biasMultiplier * ((-gradient * biasRate) / biasFactor);
    }

    if((1ul + t) % self->diagnosticFrequency == 0ul)
      tmp_if_expr_9 = (_Bool)1;

    else
      tmp_if_expr_9 = t + (unsigned long int)1 == self->maxNumIterations ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_9)
    {
      k = (unsigned long long int)0;
      if(!(k >= self->dimension))
      {
        self->model[(signed long int)k] = self->model[(signed long int)k] * factor;
        k = k + 1ull;
      }

      self->bias = self->bias * biasFactor;
      factor = 1.0;
      biasFactor = 1.0;
      _vl_svm_update_statistics(self);
      k = (unsigned long long int)0;
      if(!(k >= self->numData))
      {
        double delta = scores[(signed long int)k] - previousScores[(signed long int)k];
        self->statistics.scoresVariation = self->statistics.scoresVariation + delta * delta;
        k = k + 1ull;
      }

      double return_value_sqrt_7;
      return_value_sqrt_7=sqrt(self->statistics.scoresVariation);
      self->statistics.scoresVariation = return_value_sqrt_7 / (double)self->numData;
      double return_value_vl_get_cpu_time_8;
      return_value_vl_get_cpu_time_8=vl_get_cpu_time();
      self->statistics.elapsedTime = return_value_vl_get_cpu_time_8 - startTime;
      self->statistics.iteration = t;
      self->statistics.epoch = t / self->numData;
      self->statistics.status = (enum anonymous_7)VlSvmStatusTraining;
      if(self->statistics.scoresVariation < self->epsilon)
        self->statistics.status = (enum anonymous_7)VlSvmStatusConverged;

      else
        if(1ul + t == self->maxNumIterations)
          self->statistics.status = (enum anonymous_7)VlSvmStatusMaxNumIterationsReached;

      if(!(self->diagnosticFn == ((void (*)(struct VlSvm_ *, void *))NULL)))
        self->diagnosticFn(self, self->diagnosticFnData);

    }

    t = t + 1ull;
  }
  vl_free((void *)scores);
  vl_free((void *)permutation);
}

// _vl_svm_update_statistics
// file vl/svm.c line 1871
void _vl_svm_update_statistics(struct VlSvm_ *self)
{
  unsigned long long int i;
  unsigned long long int k;
  double inner;
  double p;
  memset((void *)&self->statistics, 0, sizeof(struct VlSvmStatistics_) /*88ul*/ );
  self->statistics.regularizer = self->bias * self->bias;
  i = (unsigned long long int)0;
  for( ; !(i >= self->dimension); i = i + 1ull)
    self->statistics.regularizer = self->statistics.regularizer + self->model[(signed long int)i] * self->model[(signed long int)i];
  self->statistics.regularizer = self->statistics.regularizer * self->lambda * 0.5;
  k = (unsigned long long int)0;
  double tmp_if_expr_1;
  for( ; !(k >= self->numData); k = k + 1ull)
  {
    if(!(self->weights == ((const double *)NULL)))
      tmp_if_expr_1 = self->weights[(signed long int)k];

    else
      tmp_if_expr_1 = 1.0;
    p = tmp_if_expr_1;
    if(!(p <= 0.000000))
    {
      inner=self->innerProductFn(self->data, k, self->model);
      inner = inner + self->bias * self->biasMultiplier;
      self->scores[(signed long int)k] = inner;
      double return_value;
      return_value=self->lossFn(inner, self->labels[(signed long int)k]);
      self->statistics.loss = self->statistics.loss + p * return_value;
      if((signed int)self->solver == VlSvmSolverSdca)
      {
        double return_value_1;
        return_value_1=self->conjugateLossFn(-self->alpha[(signed long int)k] / p, self->labels[(signed long int)k]);
        self->statistics.dualLoss = self->statistics.dualLoss - p * return_value_1;
      }

    }

  }
  self->statistics.loss = self->statistics.loss / (double)self->numData;
  self->statistics.objective = self->statistics.regularizer + self->statistics.loss;
  if((signed int)self->solver == VlSvmSolverSdca)
  {
    self->statistics.dualLoss = self->statistics.dualLoss / (double)self->numData;
    self->statistics.dualObjective = -self->statistics.regularizer + self->statistics.dualLoss;
    self->statistics.dualityGap = self->statistics.objective - self->statistics.dualObjective;
  }

}

// _vl_svmdataset_inner_product_d
// file vl/svmdataset.c line 330
double _vl_svmdataset_inner_product_d(const struct VlSvmDataset_ *self, unsigned long long int element, const double *model)
{
  double product = (double)0;
  double *data = (double *)self->data + (signed long int)(self->dimension * element);
  double *end = data + (signed long int)self->dimension;
  double *tmp_post_1;
  const double *tmp_post_2;
  for( ; !(data == end); product = product + *tmp_post_1 * *tmp_post_2)
  {
    tmp_post_1 = data;
    data = data + 1l;
    tmp_post_2 = model;
    model = model + 1l;
  }
  return product;
}

// _vl_svmdataset_inner_product_f
// file vl/svmdataset.c line 330
double _vl_svmdataset_inner_product_f(const struct VlSvmDataset_ *self, unsigned long long int element, const double *model)
{
  double product = (double)0;
  float *data = (float *)self->data + (signed long int)(self->dimension * element);
  float *end = data + (signed long int)self->dimension;
  float *tmp_post_1;
  const double *tmp_post_2;
  for( ; !(data == end); product = product + (double)*tmp_post_1 * *tmp_post_2)
  {
    tmp_post_1 = data;
    data = data + 1l;
    tmp_post_2 = model;
    model = model + 1l;
  }
  return product;
}

// _vl_svmdataset_inner_product_hom_d
// file vl/svmdataset.c line 358
double _vl_svmdataset_inner_product_hom_d(const struct VlSvmDataset_ *self, unsigned long long int element, const double *model)
{
  double product = (double)0;
  double *data = (double *)self->data + (signed long int)(self->dimension * element);
  double *end = data + (signed long int)self->dimension;
  double *bufEnd = (double *)self->homBuffer + (signed long int)self->homDimension;
  double *tmp_post_1;
  double *tmp_post_2;
  const double *tmp_post_3;
  while(!(data == end))
  {
    double *buf = (double *)self->homBuffer;
    tmp_post_1 = data;
    data = data + 1l;
    vl_homogeneouskernelmap_evaluate_d(self->hom, (double *)self->homBuffer, (unsigned long long int)1, *tmp_post_1);
    for( ; !(buf == bufEnd); product = product + *tmp_post_2 * *tmp_post_3)
    {
      tmp_post_2 = buf;
      buf = buf + 1l;
      tmp_post_3 = model;
      model = model + 1l;
    }
  }
  return product;
}

// _vl_svmdataset_inner_product_hom_f
// file vl/svmdataset.c line 358
double _vl_svmdataset_inner_product_hom_f(const struct VlSvmDataset_ *self, unsigned long long int element, const double *model)
{
  double product = (double)0;
  float *data = (float *)self->data + (signed long int)(self->dimension * element);
  float *end = data + (signed long int)self->dimension;
  float *bufEnd = (float *)self->homBuffer + (signed long int)self->homDimension;
  float *tmp_post_1;
  float *tmp_post_2;
  const double *tmp_post_3;
  while(!(data == end))
  {
    float *buf = (float *)self->homBuffer;
    tmp_post_1 = data;
    data = data + 1l;
    vl_homogeneouskernelmap_evaluate_f(self->hom, (float *)self->homBuffer, (unsigned long long int)1, (double)*tmp_post_1);
    for( ; !(buf == bufEnd); product = product + (double)*tmp_post_2 * *tmp_post_3)
    {
      tmp_post_2 = buf;
      buf = buf + 1l;
      tmp_post_3 = model;
      model = model + 1l;
    }
  }
  return product;
}

// _vl_vlad_encode_d
// file vl/vlad.c line 164
static void _vl_vlad_encode_d(double *enc, const double *means, unsigned long long int dimension, unsigned long long int numClusters, const double *data, unsigned long long int numData, const double *assignments, signed int flags)
{
  unsigned long long int dim;
  signed long long int i_cl;
  signed long long int i_d;
  memset((void *)enc, 0, sizeof(double) /*8ul*/  * dimension * numClusters);
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    double clusterMass = (double)0;
    i_d = (signed long long int)0;
    for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
      if(assignments[(signed long int)numClusters * (signed long int)(unsigned long int)i_d + (signed long int)(unsigned long int)i_cl] > 0.000000)
      {
        double q = assignments[(signed long int)((unsigned long int)i_d * numClusters + (unsigned long int)i_cl)];
        clusterMass = clusterMass + q;
        dim = (unsigned long long int)0;
        for( ; !(dim >= dimension); dim = dim + 1ull)
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] + q * data[(signed long int)((unsigned long int)i_d * dimension + dim)];
      }

    if(clusterMass > 0.000000)
    {
      if(!((8 & flags) == 0))
      {
        dim = (unsigned long long int)0;
        for( ; !(dim >= dimension); dim = dim + 1ull)
        {
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] / clusterMass;
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] - means[(signed long int)((unsigned long int)i_cl * dimension + dim)];
        }
      }

      else
      {
        dim = (unsigned long long int)0;
        for( ; !(dim >= dimension); dim = dim + 1ull)
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] - clusterMass * means[(signed long int)((unsigned long int)i_cl * dimension + dim)];
      }
    }

    if(!((2 & flags) == 0))
    {
      dim = (unsigned long long int)0;
      for( ; !(dim >= dimension); dim = dim + 1ull)
      {
        double _vl_vlad_encode_d__1__1__1__3__1__1__z = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)];
        if(_vl_vlad_encode_d__1__1__1__3__1__1__z >= 0.000000)
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)]=vl_sqrt_d(_vl_vlad_encode_d__1__1__1__3__1__1__z);

        else
        {
          double return_value_vl_sqrt_d_1;
          return_value_vl_sqrt_d_1=vl_sqrt_d(-_vl_vlad_encode_d__1__1__1__3__1__1__z);
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = -return_value_vl_sqrt_d_1;
        }
      }
    }

    if(!((0x1 & flags) == 0))
    {
      double _vl_vlad_encode_d__1__1__1__4__n = (double)0;
      dim = (unsigned long long int)0;
      dim = (unsigned long long int)0;
      for( ; !(dim >= dimension); dim = dim + 1ull)
      {
        double _vl_vlad_encode_d__1__1__1__4__1__1__z = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)];
        _vl_vlad_encode_d__1__1__1__4__n = _vl_vlad_encode_d__1__1__1__4__n + _vl_vlad_encode_d__1__1__1__4__1__1__z * _vl_vlad_encode_d__1__1__1__4__1__1__z;
      }
      _vl_vlad_encode_d__1__1__1__4__n=vl_sqrt_d(_vl_vlad_encode_d__1__1__1__4__n);
      _vl_vlad_encode_d__1__1__1__4__n = _vl_vlad_encode_d__1__1__1__4__n > 1e-12 ? _vl_vlad_encode_d__1__1__1__4__n : 1e-12;
      dim = (unsigned long long int)0;
      for( ; !(dim >= dimension); dim = dim + 1ull)
        enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] / _vl_vlad_encode_d__1__1__1__4__n;
    }

  }
  if((4 & flags) == 0)
  {
    double n = (double)0;
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension * numClusters); dim = dim + 1ull)
    {
      double z = enc[(signed long int)dim];
      n = n + z * z;
    }
    n=vl_sqrt_d(n);
    n = n > 1e-12 ? n : 1e-12;
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension * numClusters); dim = dim + 1ull)
      enc[(signed long int)dim] = enc[(signed long int)dim] / n;
  }

}

// _vl_vlad_encode_f
// file vl/vlad.c line 164
static void _vl_vlad_encode_f(float *enc, const float *means, unsigned long long int dimension, unsigned long long int numClusters, const float *data, unsigned long long int numData, const float *assignments, signed int flags)
{
  unsigned long long int dim;
  signed long long int i_cl;
  signed long long int i_d;
  memset((void *)enc, 0, sizeof(float) /*4ul*/  * dimension * numClusters);
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    double clusterMass = (double)0;
    i_d = (signed long long int)0;
    for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
      if(assignments[(signed long int)numClusters * (signed long int)(unsigned long int)i_d + (signed long int)(unsigned long int)i_cl] > 0.000000f)
      {
        double q = (double)assignments[(signed long int)((unsigned long int)i_d * numClusters + (unsigned long int)i_cl)];
        clusterMass = clusterMass + q;
        dim = (unsigned long long int)0;
        for( ; !(dim >= dimension); dim = dim + 1ull)
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] + (float)(q * (double)data[(signed long int)((unsigned long int)i_d * dimension + dim)]);
      }

    if(clusterMass > 0.000000)
    {
      if(!((8 & flags) == 0))
      {
        dim = (unsigned long long int)0;
        for( ; !(dim >= dimension); dim = dim + 1ull)
        {
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] / (float)clusterMass;
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] - means[(signed long int)((unsigned long int)i_cl * dimension + dim)];
        }
      }

      else
      {
        dim = (unsigned long long int)0;
        for( ; !(dim >= dimension); dim = dim + 1ull)
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] - (float)(clusterMass * (double)means[(signed long int)((unsigned long int)i_cl * dimension + dim)]);
      }
    }

    if(!((2 & flags) == 0))
    {
      dim = (unsigned long long int)0;
      for( ; !(dim >= dimension); dim = dim + 1ull)
      {
        float z = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)];
        if(z >= 0.000000f)
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)]=vl_sqrt_f(z);

        else
        {
          float return_value_vl_sqrt_f_1;
          return_value_vl_sqrt_f_1=vl_sqrt_f(-z);
          enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = -return_value_vl_sqrt_f_1;
        }
      }
    }

    if(!((0x1 & flags) == 0))
    {
      float n = (float)0;
      dim = (unsigned long long int)0;
      dim = (unsigned long long int)0;
      for( ; !(dim >= dimension); dim = dim + 1ull)
      {
        float _vl_vlad_encode_f__1__1__1__4__1__1__z = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)];
        n = n + _vl_vlad_encode_f__1__1__1__4__1__1__z * _vl_vlad_encode_f__1__1__1__4__1__1__z;
      }
      n=vl_sqrt_f(n);
      n = (float)((double)n > 1e-12 ? (double)n : 1e-12);
      dim = (unsigned long long int)0;
      for( ; !(dim >= dimension); dim = dim + 1ull)
        enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] = enc[(signed long int)((unsigned long int)i_cl * dimension + dim)] / n;
    }

  }
  if((4 & flags) == 0)
  {
    float _vl_vlad_encode_f__1__2__n = (float)0;
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension * numClusters); dim = dim + 1ull)
    {
      float _vl_vlad_encode_f__1__2__1__1__z = enc[(signed long int)dim];
      _vl_vlad_encode_f__1__2__n = _vl_vlad_encode_f__1__2__n + _vl_vlad_encode_f__1__2__1__1__z * _vl_vlad_encode_f__1__2__1__1__z;
    }
    _vl_vlad_encode_f__1__2__n=vl_sqrt_f(_vl_vlad_encode_f__1__2__n);
    _vl_vlad_encode_f__1__2__n = (float)((double)_vl_vlad_encode_f__1__2__n > 1e-12 ? (double)_vl_vlad_encode_f__1__2__n : 1e-12);
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension * numClusters); dim = dim + 1ull)
      enc[(signed long int)dim] = enc[(signed long int)dim] / _vl_vlad_encode_f__1__2__n;
  }

}

// _vl_x86cpu_info_init
// file vl/host.c line 447
void _vl_x86cpu_info_init(struct _VlX86CpuInfo *self)
{
  signed int info[4l];
  signed int max_func = 0;
  _vl_cpuid(info, 0);
  max_func = info[(signed long int)0];
  self->vendor.words[(signed long int)0] = (unsigned int)info[(signed long int)1];
  self->vendor.words[(signed long int)1] = (unsigned int)info[(signed long int)3];
  self->vendor.words[(signed long int)2] = (unsigned int)info[(signed long int)2];
  if(max_func >= 1)
  {
    _vl_cpuid(info, 1);
    self->hasMMX = info[(signed long int)3] & 1 << 23;
    self->hasSSE = info[(signed long int)3] & 1 << 25;
    self->hasSSE2 = info[(signed long int)3] & 1 << 26;
    self->hasSSE3 = info[(signed long int)2] & 1 << 0;
    self->hasSSE41 = info[(signed long int)2] & 1 << 19;
    self->hasSSE42 = info[(signed long int)2] & 1 << 20;
    self->hasAVX = info[(signed long int)2] & 1 << 28;
  }

}

// _vl_x86cpu_info_to_string_copy
// file vl/host.c line 470
char * _vl_x86cpu_info_to_string_copy(const struct _VlX86CpuInfo *self)
{
  char *string = ((char *)NULL);
  signed int length = 0;
  for( ; string == ((char *)NULL); length = length + 1)
  {
    if(length >= 1)
    {
      void *return_value_vl_malloc_1;
      return_value_vl_malloc_1=vl_malloc(sizeof(char) /*1ul*/  * (unsigned long int)length);
      string = (char *)return_value_vl_malloc_1;
      if(string == ((char *)NULL))
        break;

    }

    length=snprintf(string, (unsigned long int)length, "%s%s%s%s%s%s%s%s", (const void *)self->vendor.string, self->hasMMX != 0 ? " MMX" : "", self->hasSSE != 0 ? " SSE" : "", self->hasSSE2 != 0 ? " SSE2" : "", self->hasSSE3 != 0 ? " SSE3" : "", self->hasSSE41 != 0 ? " SSE41" : "", self->hasSSE42 != 0 ? " SSE42" : "", self->hasAVX != 0 ? " AVX" : "");
  }
  return string;
}

// adv
// file vl/mser.c line 237
static inline void adv(signed int ndims, const signed int *dims, signed int *subs)
{
  signed int d = 0;
  signed int tmp_post_1;
  for( ; !(d >= ndims); subs[(signed long int)tmp_post_1] = 0)
  {
    subs[(signed long int)d] = subs[(signed long int)d] + 1;
    if(!(subs[(signed long int)d] >= dims[(signed long int)d]))
      goto __CPROVER_DUMP_L4;

    tmp_post_1 = d;
    d = d + 1;
  }

__CPROVER_DUMP_L4:
  ;
}

// alloc
// file vl/ikmeans_init.tc line 51
static void alloc(struct _VlIKMFilt *f, unsigned long long int M, unsigned long long int K)
{
  if(!(f->centers == ((signed int *)NULL)))
    vl_free((void *)f->centers);

  f->K = K;
  f->M = M;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(signed int) /*4ul*/  * M * K);
  f->centers = (signed int *)return_value_vl_malloc_1;
}

// calc_dist2
// file vl/ikmeans_init.tc line 33
static inline signed int calc_dist2(const signed int *A, const unsigned char *B, unsigned long long int M)
{
  signed int acc = 0;
  unsigned long long int i = (unsigned long long int)0;
  i = (unsigned long long int)0;
  for( ; !(i >= M); i = i + 1ull)
  {
    signed int dist = (signed int)A[(signed long int)i] - (signed int)B[(signed long int)i];
    acc = acc + (signed int)(unsigned long long int)(dist * dist);
  }
  return acc;
}

// climb
// file vl/mser.c line 262
static inline unsigned int climb(struct _VlMserReg *r, unsigned int idx)
{
  unsigned int prev_idx = idx;
  unsigned int next_idx;
  unsigned int root_idx;
  for( ; (_Bool)1; idx = next_idx)
  {
    next_idx = (r + (signed long int)idx)->shortcut;
    (r + (signed long int)idx)->shortcut = prev_idx;
    if(next_idx == idx)
      break;

    prev_idx = idx;
  }
  root_idx = idx;
  for( ; (_Bool)1; idx = prev_idx)
  {
    prev_idx = (r + (signed long int)idx)->shortcut;
    (r + (signed long int)idx)->shortcut = root_idx;
    if(prev_idx == idx)
      break;

  }
  return root_idx;
}

// cmp_pair
// file vl/ikmeans_init.tc line 23
static signed int cmp_pair(const void *a, const void *b)
{
  struct anonymous_5 *pa = (struct anonymous_5 *)a;
  struct anonymous_5 *pb = (struct anonymous_5 *)b;
  signed int d = (signed int)(pa->w - pb->w);
  if(!(d == 0))
    return d;

  else
    return (signed int)(pa->j - pb->j);
}

// copy_and_downsample
// file vl/scalespace.c line 498
static void copy_and_downsample(float *destination, const float *source, unsigned long long int width, unsigned long long int height, unsigned long long int numOctaves)
{
  signed long long int x;
  signed long long int y;
  unsigned long long int step = (unsigned long long int)(1 << numOctaves);
  float *tmp_post_1;
  if(numOctaves == 0ul)
    memcpy((void *)destination, (const void *)source, sizeof(float) /*4ul*/  * width * height);

  else
  {
    y = (signed long long int)0;
    for( ; !(y >= (signed long int)(signed int)height); y = y + (signed long long int)step)
    {
      const float *p = source + (signed long int)((unsigned long int)y * width);
      x = (signed long long int)0;
      for( ; !(x >= (signed long int)((signed int)width + -((signed int)step + -1))); x = x + (signed long long int)step)
      {
        tmp_post_1 = destination;
        destination = destination + 1l;
        *tmp_post_1 = *p;
        p = p + (signed long int)step;
      }
    }
  }
}

// copy_and_upsample
// file vl/scalespace.c line 451
static void copy_and_upsample(float *destination, const float *source, unsigned long long int width, unsigned long long int height)
{
  signed long long int x;
  signed long long int y;
  signed long long int ox;
  signed long long int oy;
  float v00;
  float v10;
  float v01;
  float v11;
  y = (signed long long int)0;
  for( ; !(y >= (signed long int)(signed int)height); y = y + 1ll)
  {
    oy = (signed long long int)((unsigned long int)(y < (signed long int)((signed int)height - 1)) * width);
    v10 = source[(signed long int)0];
    v11 = source[oy];
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)width); x = x + 1ll)
    {
      ox = (signed long long int)(x < (signed long int)((signed int)width - 1));
      v00 = v10;
      v01 = v11;
      v10 = source[ox];
      v11 = source[ox + oy];
      destination[(signed long int)0] = v00;
      destination[(signed long int)1] = 0.5f * (v00 + v10);
      destination[(signed long int)((unsigned long int)2 * width)] = 0.5f * (v00 + v01);
      destination[(signed long int)((unsigned long int)2 * width + (unsigned long int)1)] = 0.25f * (v00 + v01 + v10 + v11);
      destination = destination + (signed long int)2;
      source = source + 1l;
    }
    destination = destination + (signed long int)((unsigned long int)2 * width);
  }
}

// do_nothing_printf
// file vl/generic.c line 928
static signed int do_nothing_printf(const char *format, ...)
{
  return 0;
}

// factorial
// file vl/liop.c line 218
static signed int factorial(signed int num)
{
  signed int result = 1;
  for( ; num >= 2; num = num - 1)
    result = num * result;
  return result;
}

// get_permutation_index
// file vl/liop.c line 250
static inline signed long long int get_permutation_index(unsigned long long int *permutation, unsigned long long int size)
{
  signed long long int index = (signed long long int)0;
  signed long long int i;
  signed long long int j;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)size); i = i + 1ll)
  {
    index = (signed long long int)((unsigned long int)(index * ((signed long int)(signed int)size - i)) + permutation[i]);
    j = i + (signed long int)1;
    for( ; !(j >= (signed long int)(signed int)size); j = j + 1ll)
      if(!(permutation[i] >= permutation[j]))
        permutation[j] = permutation[j] - 1ull;

  }
  return index;
}

// getopt_long
// file vl/getopt_long.c line 74
extern signed int getopt_long(signed int argc, char * const *argv, const char *optstring, struct option *longopts, signed int *longindex)
{
  char *oli;
  signed int has_colon = 0;
  signed int ret_val = 0;
  _Bool tmp_if_expr_1;
  if(!(optstring == ((const char *)NULL)))
    tmp_if_expr_1 = (signed int)optstring[(signed long int)0] == 58 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  has_colon = (signed int)tmp_if_expr_1;
  if(!(has_colon == 0))
    optstring = optstring + 1l;

  _Bool tmp_if_expr_7;
  static char *place = "";
  if(!(optreset == 0))
    tmp_if_expr_7 = (_Bool)1;

  else
    tmp_if_expr_7 = (signed int)*place == 0 ? (_Bool)1 : (_Bool)0;
  unsigned long int tmp_statement_expression_2;
  signed int return_value_strncmp_5;
  _Bool tmp_if_expr_4;
  static signed int optend = 0;
  static signed int optbegin = 0;
  if(tmp_if_expr_7)
  {
    optreset = 0;
    if(optind >= argc)
    {
      place = "";
      return -1;
    }

    optbegin = optind;
    do
    {

    parse_option_at_optbegin:
      ;
      place = argv[(signed long int)optbegin];
      if((signed int)*place == 45)
        break;

      optbegin = optbegin + 1;
      if(optbegin >= argc)
      {
        place = "";
        return -1;
      }

    }
    while((_Bool)1);
    place = place + 1l;
    optend = optbegin + 1;
    optarg = ((char *)NULL);
    if(!(*place == 0))
    {
      if((signed int)*place == 45)
      {
        if((signed int)place[1l] == 0)
        {
          optind = optend;
          place = "";
          ret_val = -1;
          goto done_option;
        }

      }

    }

    if(!(*place == 0))
    {
      if((signed int)*place == 45)
      {
        if(!(place[1l] == 0))
        {
          unsigned long int namelen;
          signed int getopt_long__1__1__4__i;
          place = place + 1l;
          char __r0;
          char __r1;
          char __r2;
          unsigned long int return_value___builtin_strcspn_3;
          return_value___builtin_strcspn_3=__builtin_strcspn(place, "=");
          tmp_statement_expression_2 = return_value___builtin_strcspn_3;
          namelen = tmp_statement_expression_2;
          getopt_long__1__1__4__i = 0;
          for( ; !((longopts + (signed long int)getopt_long__1__1__4__i)->name == ((const char *)NULL)); getopt_long__1__1__4__i = getopt_long__1__1__4__i + 1)
          {
            unsigned long int return_value_strlen_6;
            return_value_strlen_6=strlen((longopts + (signed long int)getopt_long__1__1__4__i)->name);
            if(return_value_strlen_6 == namelen)
            {
              return_value_strncmp_5=strncmp(place, (longopts + (signed long int)getopt_long__1__1__4__i)->name, namelen);
              if(return_value_strncmp_5 == 0)
              {
                if(!(longindex == ((signed int *)NULL)))
                  *longindex = getopt_long__1__1__4__i;

                if((longopts + (signed long int)getopt_long__1__1__4__i)->has_arg == 1)
                  tmp_if_expr_4 = (_Bool)1;

                else
                  tmp_if_expr_4 = (longopts + (signed long int)getopt_long__1__1__4__i)->has_arg == 2 ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr_4)
                {
                  if((signed int)place[(signed long int)namelen] == 61)
                    optarg = place + (signed long int)namelen + (signed long int)1;

                  else
                    if((longopts + (signed long int)getopt_long__1__1__4__i)->has_arg == 1)
                    {
                      if(optbegin >= argc + -1)
                      {
                        if(has_colon == 0 && !(opterr == 0))
                          fprintf(stderr, "%s: option requires an argument -- %s\n", argv[(signed long int)0], place);

                        place = "";
                        ret_val = has_colon != 0 ? 58 : 63;
                        goto done_option;
                      }

                      optarg = argv[(signed long int)optend];
                      optend = optend + 1;
                    }

                }

                if((longopts + (signed long int)getopt_long__1__1__4__i)->flag == ((signed int *)NULL))
                  ret_val = (longopts + (signed long int)getopt_long__1__1__4__i)->val;

                else
                {
                  *(longopts + (signed long int)getopt_long__1__1__4__i)->flag = (longopts + (signed long int)getopt_long__1__1__4__i)->val;
                  ret_val = 0;
                }
                place = "";
                goto done_option;
              }

            }

          }
          if(has_colon == 0 && !(opterr == 0))
            fprintf(stderr, "%s: illegal option -- %s\n", argv[(signed long int)0], place);

          place = "";
          ret_val = 63;
          goto done_option;
        }

      }

    }

  }

  char *tmp_post_8 = place;
  place = place + 1l;
  optopt = (signed int)*tmp_post_8;
  char *return_value___builtin_strchr_9;
  return_value___builtin_strchr_9=__builtin_strchr(optstring, optopt);
  oli = return_value___builtin_strchr_9;
  if(oli == ((char *)NULL))
  {
    if(has_colon == 0 && !(opterr == 0))
      fprintf(stderr, "%s: illegal option -- %c\n", argv[(signed long int)0], optopt);

    if(!(*place == 0))
      return 63;

    place = "";
    ret_val = 63;
  }

  else
    if(!((signed int)oli[1l] == 58))
    {
      if(!(*place == 0))
        return optopt;

      else
      {
        place = "";
        ret_val = optopt;
        goto done_option;
      }
    }

    else
    {
      if(!(*place == 0))
      {
        optarg = place;
        place = "";
        ret_val = optopt;
        goto done_option;
      }

      else
        if(optbegin >= argc + -1)
        {
          if(has_colon == 0 && !(opterr == 0))
            fprintf(stderr, "%s: option requires an argument -- %c\n", argv[(signed long int)0], optopt);

          place = "";
          ret_val = has_colon != 0 ? 58 : 63;
          goto done_option;
        }

      optarg = argv[(signed long int)optend];
      optend = optend + 1;
      place = "";
      ret_val = optopt;
    }

done_option:
  ;
  signed int pos = optend - optbegin;
  signed int c = pos;
  signed int tmp_post_10;
  do
  {
    tmp_post_10 = c;
    c = c - 1;
    if(tmp_post_10 == 0)
      break;

    signed int i;
    char *tmp = argv[(signed long int)(optend - 1)];
    i = optend - 1;
    for( ; !(optind >= i); i = i - 1)
      ((char **)argv)[(signed long int)i] = argv[(signed long int)(i - 1)];
    ((char **)argv)[(signed long int)optind] = tmp;
  }
  while((_Bool)1);
  optind = optind + pos;
  return ret_val;
}

// main
// file src/test_threads.c line 65
signed int main(signed int argc, char **argv)
{
  unsigned long long int i;
  unsigned long int threads[5l];
  signed int threadIds[5l];
  i = (unsigned long long int)0;
  for( ; !(i >= 5ul); i = i + 1ull)
  {
    threadIds[(signed long int)i] = (signed int)i;
    pthread_create(threads + (signed long int)i, (const union pthread_attr_t *)(void *)0, testThread, (void *)(threadIds + (signed long int)i));
  }
  i = (unsigned long long int)0;
  for( ; !(i >= 5ul); i = i + 1ull)
    pthread_join(threads[(signed long int)i], (void **)(void *)0);
  char *string;
  string=vl_configuration_to_string_copy();
  printf("%s", string);
  vl_free((void *)string);
  return 0;
}

// neigh_cmp
// file vl/liop.c line 285
static inline float neigh_cmp(struct _VlLiopDesc *liop, signed long long int i, signed long long int j)
{
  signed long long int ii = (signed long long int)liop->neighPermutation[i];
  signed long long int jj = (signed long long int)liop->neighPermutation[j];
  return liop->neighIntensities[ii] - liop->neighIntensities[jj];
}

// neigh_sort
// file vl/qsort-def.h line 183
static inline void neigh_sort(struct _VlLiopDesc *array, unsigned long long int size)
{
  neigh_sort_recursive(array, (unsigned long long int)0, size - (unsigned long int)1);
}

// neigh_sort_recursive
// file vl/qsort-def.h line 127
static inline void neigh_sort_recursive(struct _VlLiopDesc *array, unsigned long long int begin, unsigned long long int end)
{
  unsigned long long int pivot = (end + begin) / (unsigned long int)2;
  unsigned long long int lowPart;
  unsigned long long int i;
  neigh_swap(array, (signed long long int)pivot, (signed long long int)end);
  pivot = end;
  lowPart = begin;
  i = begin;
  for( ; !(i >= end); i = i + 1ull)
  {
    float return_value_neigh_cmp_1;
    return_value_neigh_cmp_1=neigh_cmp(array, (signed long long int)i, (signed long long int)pivot);
    if(return_value_neigh_cmp_1 <= 0.000000f)
    {
      neigh_swap(array, (signed long long int)lowPart, (signed long long int)i);
      lowPart = lowPart + 1ull;
    }

  }
  neigh_swap(array, (signed long long int)lowPart, (signed long long int)pivot);
  pivot = lowPart;
  if(!(begin >= pivot))
    neigh_sort_recursive(array, begin, pivot - (unsigned long int)1);

  if(!(pivot >= end))
    neigh_sort_recursive(array, pivot + (unsigned long int)1, end);

}

// neigh_swap
// file vl/liop.c line 292
static inline void neigh_swap(struct _VlLiopDesc *liop, signed long long int i, signed long long int j)
{
  signed long long int tmp = (signed long long int)liop->neighPermutation[i];
  liop->neighPermutation[i] = liop->neighPermutation[j];
  liop->neighPermutation[j] = (unsigned long long int)tmp;
}

// patch_cmp
// file vl/liop.c line 265
static inline float patch_cmp(struct _VlLiopDesc *liop, signed long long int i, signed long long int j)
{
  signed long long int ii = (signed long long int)liop->patchPermutation[i];
  signed long long int jj = (signed long long int)liop->patchPermutation[j];
  return liop->patchIntensities[ii] - liop->patchIntensities[jj];
}

// patch_sort
// file vl/qsort-def.h line 183
static inline void patch_sort(struct _VlLiopDesc *array, unsigned long long int size)
{
  patch_sort_recursive(array, (unsigned long long int)0, size - (unsigned long int)1);
}

// patch_sort_recursive
// file vl/qsort-def.h line 127
static inline void patch_sort_recursive(struct _VlLiopDesc *array, unsigned long long int begin, unsigned long long int end)
{
  unsigned long long int pivot = (end + begin) / (unsigned long int)2;
  unsigned long long int lowPart;
  unsigned long long int i;
  patch_swap(array, (signed long long int)pivot, (signed long long int)end);
  pivot = end;
  lowPart = begin;
  i = begin;
  for( ; !(i >= end); i = i + 1ull)
  {
    float return_value_patch_cmp_1;
    return_value_patch_cmp_1=patch_cmp(array, (signed long long int)i, (signed long long int)pivot);
    if(return_value_patch_cmp_1 <= 0.000000f)
    {
      patch_swap(array, (signed long long int)lowPart, (signed long long int)i);
      lowPart = lowPart + 1ull;
    }

  }
  patch_swap(array, (signed long long int)lowPart, (signed long long int)pivot);
  pivot = lowPart;
  if(!(begin >= pivot))
    patch_sort_recursive(array, begin, pivot - (unsigned long int)1);

  if(!(pivot >= end))
    patch_sort_recursive(array, pivot + (unsigned long int)1, end);

}

// patch_swap
// file vl/liop.c line 272
static inline void patch_swap(struct _VlLiopDesc *liop, signed long long int i, signed long long int j)
{
  signed long long int tmp = (signed long long int)liop->patchPermutation[i];
  liop->patchPermutation[i] = liop->patchPermutation[j];
  liop->patchPermutation[j] = (unsigned long long int)tmp;
}

// pthread_equal
// file /usr/include/pthread.h line 1155
static inline signed int pthread_equal(unsigned long int __thread1, unsigned long int __thread2)
{
  return (signed int)(__thread1 == __thread2);
}

// remove_blanks
// file vl/pgm.c line 81
static signed int remove_blanks(struct _IO_FILE *f)
{
  signed int count = 0;
  signed int c;
  signed int return_value_remove_line_1;
  while((_Bool)1)
  {
    c=fgetc(f);
    if(!(c == 9) && !(c == 10) && !(c == 13) && !(c == 32))
    {
      if(c == 35)
        goto __CPROVER_DUMP_L3;

      if(c == -1)
        goto __CPROVER_DUMP_L4;

    }

    else
    {
      count = count + 1;
      continue;

    __CPROVER_DUMP_L3:
      ;
      return_value_remove_line_1=remove_line(f);
      count = count + 1 + return_value_remove_line_1;
      continue;

    __CPROVER_DUMP_L4:
      ;
      break;
    }
    ungetc(c, f);
    break;
  }

quit_remove_blanks:
  ;
  return count;
}

// remove_line
// file vl/pgm.c line 52
static signed int remove_line(struct _IO_FILE *f)
{
  signed int count = 0;
  signed int c;
  while((_Bool)1)
  {
    c=fgetc(f);
    count = count + 1;
    if(!(c == 10))
    {
      if(c == -1)
        goto __CPROVER_DUMP_L3;

    }

    else
    {
      break;

    __CPROVER_DUMP_L3:
      ;
      count = count - 1;
      break;
    }
  }

quit_remove_line:
  ;
  return count;
}

// sinc
// file vl/homkermap.c line 258
static inline double sinc(double x)
{
  if(IEEE_FLOAT_EQUAL(x, 0.0))
    return 1.0;

  else
  {
    double return_value_sin_1;
    return_value_sin_1=sin(x);
    return return_value_sin_1 / x;
  }
}

// testThread
// file src/test_threads.c line 31
void * testThread(void *args)
{
  signed int j;
  signed int id = *((signed int *)args);
  vl_tic();
  j = 0;
  for( ; !(j >= 10); j = j + 1)
  {
    struct _VlRand *return_value_vl_get_rand_1;
    return_value_vl_get_rand_1=vl_get_rand();
    signed int return_value_vl_rand_int31_2;
    return_value_vl_rand_int31_2=vl_rand_int31(return_value_vl_get_rand_1);
    printf("Thread %5d: %d\n", id, return_value_vl_rand_int31_2);
    fflush(stdout);
  }
  double return_value_vl_toc_3;
  return_value_vl_toc_3=vl_toc();
  printf("Thread %5d: elapsed time: %.2f s\n", id, return_value_vl_toc_3);
  return (void *)0;
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

// vl_abs_d
// file vl/mathop.h line 247
static inline double vl_abs_d(double x)
{
  double return_value___builtin_fabs_1;
  return_value___builtin_fabs_1=__builtin_fabs(x);
  return return_value___builtin_fabs_1;
}

// vl_abs_d_link1
// file vl/mathop.h line 247
static inline double vl_abs_d_link1(double x_link1)
{
  double return_value___builtin_fabs_1_link1;
  return_value___builtin_fabs_1_link1=__builtin_fabs(x_link1);
  return return_value___builtin_fabs_1_link1;
}

// vl_abs_d_link2
// file vl/mathop.h line 247
static inline double vl_abs_d_link2(double x_link2)
{
  double return_value___builtin_fabs_1_link2;
  return_value___builtin_fabs_1_link2=__builtin_fabs(x_link2);
  return return_value___builtin_fabs_1_link2;
}

// vl_abs_d_link3
// file vl/mathop.h line 247
static inline double vl_abs_d_link3(double x_link3)
{
  double return_value___builtin_fabs_1_link3;
  return_value___builtin_fabs_1_link3=__builtin_fabs(x_link3);
  return return_value___builtin_fabs_1_link3;
}

// vl_abs_f
// file vl/mathop.h line 233
static inline float vl_abs_f(float x)
{
  float return_value___builtin_fabsf_1;
  return_value___builtin_fabsf_1=__builtin_fabsf(x);
  return return_value___builtin_fabsf_1;
}

// vl_abs_f_link1
// file vl/mathop.h line 233
static inline float vl_abs_f_link1(float x_link1)
{
  float return_value___builtin_fabsf_1_link1;
  return_value___builtin_fabsf_1_link1=__builtin_fabsf(x_link1);
  return return_value___builtin_fabsf_1_link1;
}

// vl_aib_calculate_information
// file vl/aib.c line 437
void vl_aib_calculate_information(struct _VlAIB *aib, double *I, double *H)
{
  unsigned int r;
  unsigned int c;
  *H = (double)0;
  *I = (double)0;
  r = (unsigned int)0;
  for( ; !(r >= aib->nentries); r = r + 1u)
    if(!IEEE_FLOAT_EQUAL(aib->Px[(signed long int)r], 0.000000))
    {
      double return_value_log_1;
      return_value_log_1=log(aib->Px[(signed long int)r]);
      *H = *H + -return_value_log_1 * aib->Px[(signed long int)r];
      c = (unsigned int)0;
      for( ; !(c >= aib->nlabels); c = c + 1u)
        if(!IEEE_FLOAT_EQUAL(aib->Pcx[(signed long int)(aib->nlabels * r + c)], 0.000000))
        {
          double return_value_log_2;
          return_value_log_2=log(aib->Pcx[(signed long int)(r * aib->nlabels + c)] / (aib->Px[(signed long int)r] * aib->Pc[(signed long int)c]));
          *I = *I + aib->Pcx[(signed long int)(r * aib->nlabels + c)] * return_value_log_2;
        }

    }

}

// vl_aib_delete
// file vl/aib.c line 534
extern void vl_aib_delete(struct _VlAIB *aib)
{
  if(!(aib == ((struct _VlAIB *)NULL)))
  {
    if(!(aib->nodes == ((unsigned int *)NULL)))
      vl_free((void *)aib->nodes);

    if(!(aib->beta == ((double *)NULL)))
      vl_free((void *)aib->beta);

    if(!(aib->bidx == ((unsigned int *)NULL)))
      vl_free((void *)aib->bidx);

    if(!(aib->which == ((unsigned int *)NULL)))
      vl_free((void *)aib->which);

    if(!(aib->Px == ((double *)NULL)))
      vl_free((void *)aib->Px);

    if(!(aib->Pc == ((double *)NULL)))
      vl_free((void *)aib->Pc);

    if(!(aib->parents == ((unsigned int *)NULL)))
      vl_free((void *)aib->parents);

    if(!(aib->costs == ((double *)NULL)))
      vl_free((void *)aib->costs);

    vl_free((void *)aib);
  }

}

// vl_aib_merge_nodes
// file vl/aib.c line 272
void vl_aib_merge_nodes(struct _VlAIB *aib, unsigned int i, unsigned int j, unsigned int new)
{
  unsigned int last_entry = aib->nentries - (unsigned int)1;
  unsigned int c;
  unsigned int n;
  aib->nwhich = (unsigned int)0;
  if(!(j >= i))
  {
    unsigned int tmp = j;
    j = i;
    i = tmp;
  }

  aib->Px[(signed long int)i] = aib->Px[(signed long int)i] + aib->Px[(signed long int)j];
  aib->beta[(signed long int)i] = (double)1.79769313486231570815e+308L;
  aib->nodes[(signed long int)i] = new;
  c = (unsigned int)0;
  for( ; !(c >= aib->nlabels); c = c + 1u)
    aib->Pcx[(signed long int)(i * aib->nlabels + c)] = aib->Pcx[(signed long int)(i * aib->nlabels + c)] + aib->Pcx[(signed long int)(j * aib->nlabels + c)];
  aib->Px[(signed long int)j] = aib->Px[(signed long int)last_entry];
  aib->beta[(signed long int)j] = aib->beta[(signed long int)last_entry];
  aib->bidx[(signed long int)j] = aib->bidx[(signed long int)last_entry];
  aib->nodes[(signed long int)j] = aib->nodes[(signed long int)last_entry];
  c = (unsigned int)0;
  for( ; !(c >= aib->nlabels); c = c + 1u)
    aib->Pcx[(signed long int)(j * aib->nlabels + c)] = aib->Pcx[(signed long int)(last_entry * aib->nlabels + c)];
  aib->nentries = aib->nentries - 1u;
  n = (unsigned int)0;
  _Bool tmp_if_expr_2;
  unsigned int tmp_post_1;
  for( ; !(n >= aib->nentries); n = n + 1u)
  {
    if(aib->bidx[(signed long int)n] == i)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = aib->bidx[(signed long int)n] == j ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
    {
      aib->bidx[(signed long int)n] = (unsigned int)0;
      aib->beta[(signed long int)n] = (double)1.79769313486231570815e+308L;
      tmp_post_1 = aib->nwhich;
      aib->nwhich = aib->nwhich + 1u;
      aib->which[(signed long int)tmp_post_1] = n;
    }

    else
      if(aib->bidx[(signed long int)n] == last_entry)
        aib->bidx[(signed long int)n] = j;

  }
}

// vl_aib_min_beta
// file vl/aib.c line 232
void vl_aib_min_beta(struct _VlAIB *aib, unsigned int *besti, unsigned int *bestj, double *minbeta)
{
  unsigned int i;
  *minbeta = aib->beta[(signed long int)0];
  *besti = (unsigned int)0;
  *bestj = aib->bidx[(signed long int)0];
  i = (unsigned int)0;
  for( ; !(i >= aib->nentries); i = i + 1u)
    if(aib->beta[(signed long int)i] < *minbeta)
    {
      *minbeta = aib->beta[(signed long int)i];
      *besti = i;
      *bestj = aib->bidx[(signed long int)i];
    }

}

// vl_aib_new
// file vl/aib.c line 489
extern struct _VlAIB * vl_aib_new(double *Pcx, unsigned int nvalues, unsigned int nlabels)
{
  struct _VlAIB *aib;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct _VlAIB) /*104ul*/ );
  aib = (struct _VlAIB *)return_value_vl_malloc_1;
  unsigned int i;
  aib->verbosity = (unsigned int)0;
  aib->Pcx = Pcx;
  aib->nvalues = nvalues;
  aib->nlabels = nlabels;
  vl_aib_normalize_P(aib->Pcx, aib->nvalues * aib->nlabels);
  aib->Px=vl_aib_new_Px(aib->Pcx, aib->nvalues, aib->nlabels);
  aib->Pc=vl_aib_new_Pc(aib->Pcx, aib->nvalues, aib->nlabels);
  aib->nentries = aib->nvalues;
  aib->nodes=vl_aib_new_nodelist(aib->nentries);
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(double) /*8ul*/  * (unsigned long int)aib->nentries);
  aib->beta = (double *)return_value_vl_malloc_2;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)aib->nentries);
  aib->bidx = (unsigned int *)return_value_vl_malloc_3;
  i = (unsigned int)0;
  for( ; !(i >= aib->nentries); i = i + 1u)
    aib->beta[(signed long int)i] = (double)1.79769313486231570815e+308L;
  aib->nwhich = aib->nvalues;
  aib->which=vl_aib_new_nodelist(aib->nwhich);
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)(aib->nvalues * (unsigned int)2 - (unsigned int)1));
  aib->parents = (unsigned int *)return_value_vl_malloc_4;
  i = (unsigned int)0;
  for( ; !(i >= 2u * aib->nvalues + 4294967295u); i = i + 1u)
    aib->parents[(signed long int)i] = (unsigned int)2 * aib->nvalues;
  void *return_value_vl_malloc_5;
  return_value_vl_malloc_5=vl_malloc(sizeof(double) /*8ul*/  * (unsigned long int)((aib->nvalues - (unsigned int)1) + (unsigned int)1));
  aib->costs = (double *)return_value_vl_malloc_5;
  return aib;
}

// vl_aib_new_Pc
// file vl/aib.c line 205
double * vl_aib_new_Pc(double *Pcx, unsigned int nvalues, unsigned int nlabels)
{
  double *Pc;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * (unsigned long int)nlabels);
  Pc = (double *)return_value_vl_malloc_1;
  unsigned int r;
  unsigned int c = (unsigned int)0;
  for( ; !(c >= nlabels); c = c + 1u)
  {
    double sum = (double)0;
    r = (unsigned int)0;
    for( ; !(r >= nvalues); r = r + 1u)
      sum = sum + Pcx[(signed long int)(r * nlabels + c)];
    Pc[(signed long int)c] = sum;
  }
  return Pc;
}

// vl_aib_new_Px
// file vl/aib.c line 180
double * vl_aib_new_Px(double *Pcx, unsigned int nvalues, unsigned int nlabels)
{
  double *Px;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * (unsigned long int)nvalues);
  Px = (double *)return_value_vl_malloc_1;
  unsigned int r;
  unsigned int c;
  r = (unsigned int)0;
  for( ; !(r >= nvalues); r = r + 1u)
  {
    double sum = (double)0;
    c = (unsigned int)0;
    for( ; !(c >= nlabels); c = c + 1u)
      sum = sum + Pcx[(signed long int)(r * nlabels + c)];
    Px[(signed long int)r] = sum;
  }
  return Px;
}

// vl_aib_new_nodelist
// file vl/aib.c line 158
unsigned int * vl_aib_new_nodelist(unsigned int nentries)
{
  unsigned int *nodelist;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)nentries);
  nodelist = (unsigned int *)return_value_vl_malloc_1;
  unsigned int n = (unsigned int)0;
  for( ; !(n >= nentries); n = n + 1u)
    nodelist[(signed long int)n] = n;
  return nodelist;
}

// vl_aib_normalize_P
// file vl/aib.c line 139
void vl_aib_normalize_P(double *P, unsigned int nelem)
{
  unsigned int i;
  double sum = (double)0;
  i = (unsigned int)0;
  for( ; !(i >= nelem); i = i + 1u)
    sum = sum + P[(signed long int)i];
  i = (unsigned int)0;
  for( ; !(i >= nelem); i = i + 1u)
    P[(signed long int)i] = P[(signed long int)i] / sum;
}

// vl_aib_process
// file vl/aib.c line 588
extern void vl_aib_process(struct _VlAIB *aib)
{
  unsigned int i;
  unsigned int besti;
  unsigned int bestj;
  unsigned int newnode;
  unsigned int nodei;
  unsigned int nodej;
  double I;
  double H;
  double minbeta;
  vl_aib_calculate_information(aib, &I, &H);
  aib->costs[(signed long int)0] = I;
  i = (unsigned int)0;
  for( ; !(i >= aib->nvalues + 4294967295u); i = i + 1u)
  {
    vl_aib_update_beta(aib);
    vl_aib_min_beta(aib, &besti, &bestj, &minbeta);
    if(IEEE_FLOAT_EQUAL(minbeta, 1.797693e+308))
      break;

    newnode = aib->nvalues + i;
    nodei = aib->nodes[(signed long int)besti];
    nodej = aib->nodes[(signed long int)bestj];
    aib->parents[(signed long int)nodei] = newnode;
    aib->parents[(signed long int)nodej] = newnode;
    aib->parents[(signed long int)newnode] = (unsigned int)0;
    vl_aib_merge_nodes(aib, besti, bestj, newnode);
    vl_aib_calculate_information(aib, &I, &H);
    aib->costs[(signed long int)(i + (unsigned int)1)] = I;
    if(aib->verbosity >= 1u)
    {
      signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
      return_value_vl_get_printf_func_1=vl_get_printf_func();
      return_value_vl_get_printf_func_1("aib: (%5d,%5d)=%5d dE: %10.3g I: %6.4g H: %6.4g updt: %5d\n", nodei, nodej, newnode, minbeta, I, H, aib->nwhich);
    }

  }
  for( ; !(i >= aib->nvalues + 4294967295u); i = i + 1u)
    aib->costs[(signed long int)(i + (unsigned int)1)] = vl_nan_d.value;
}

// vl_aib_update_beta
// file vl/aib.c line 351
void vl_aib_update_beta(struct _VlAIB *aib)
{
  unsigned int i;
  double *Px = aib->Px;
  double *Pcx = aib->Pcx;
  double *tmp;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * (unsigned long int)aib->nentries);
  tmp = (double *)return_value_vl_malloc_1;
  unsigned int a;
  unsigned int b;
  unsigned int c;
  a = (unsigned int)0;
  double return_value_log_2;
  for( ; !(a >= aib->nentries); a = a + 1u)
  {
    tmp[(signed long int)a] = (double)0;
    c = (unsigned int)0;
    for( ; !(c >= aib->nlabels); c = c + 1u)
    {
      double Pac = Pcx[(signed long int)(a * aib->nlabels + c)];
      if(IEEE_FLOAT_NOTEQUAL(Pac, 0.000000))
      {
        return_value_log_2=log(Pac / Px[(signed long int)a]);
        tmp[(signed long int)a] = tmp[(signed long int)a] + Pac * return_value_log_2;
      }

    }
  }
  i = (unsigned int)0;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  for( ; !(i >= aib->nwhich); i = i + 1u)
  {
    a = aib->which[(signed long int)i];
    b = (unsigned int)0;
    for( ; !(b >= aib->nentries); b = b + 1u)
    {
      double T1 = (double)0;
      if(a == b)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = IEEE_FLOAT_EQUAL(Px[(signed long int)a], (double)0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = IEEE_FLOAT_EQUAL(Px[(signed long int)b], (double)0) ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_4)
      {
        double return_value_log_5;
        return_value_log_5=log(Px[(signed long int)a] + Px[(signed long int)b]);
        T1 = (Px[(signed long int)a] + Px[(signed long int)b]) * return_value_log_5;
        T1 = T1 + tmp[(signed long int)a] + tmp[(signed long int)b];
        c = (unsigned int)0;
        for( ; !(c >= aib->nlabels); c = c + 1u)
        {
          double vl_aib_update_beta__1__2__1__1__1__1__1__Pac = Pcx[(signed long int)(a * aib->nlabels + c)];
          double Pbc = Pcx[(signed long int)(b * aib->nlabels + c)];
          if(!IEEE_FLOAT_EQUAL(vl_aib_update_beta__1__2__1__1__1__1__1__Pac, 0.000000) || !IEEE_FLOAT_EQUAL(Pbc, 0.000000))
          {
            double return_value_log_6;
            return_value_log_6=log(vl_aib_update_beta__1__2__1__1__1__1__1__Pac + Pbc);
            T1 = T1 + -((vl_aib_update_beta__1__2__1__1__1__1__1__Pac + Pbc) * return_value_log_6);
          }

        }
        double beta = T1;
        if(beta < aib->beta[(signed long int)a])
        {
          aib->beta[(signed long int)a] = beta;
          aib->bidx[(signed long int)a] = b;
        }

        if(beta < aib->beta[(signed long int)b])
        {
          aib->beta[(signed long int)b] = beta;
          aib->bidx[(signed long int)b] = a;
        }

      }

    }
  }
  vl_free((void *)tmp);
}

// vl_array_dealloc
// file vl/array.c line 124
extern void vl_array_dealloc(struct _VlArray *self)
{
  if(self->isEnvelope == 0)
  {
    if(!(self->data == NULL))
    {
      vl_free(self->data);
      self->data = (void *)0;
    }

  }

}

// vl_array_delete
// file vl/array.c line 202
extern void vl_array_delete(struct _VlArray *self)
{
  vl_array_dealloc(self);
  vl_free((void *)self);
}

// vl_array_get_num_elements
// file vl/array.c line 23
extern unsigned long long int vl_array_get_num_elements(const struct _VlArray *self)
{
  unsigned long long int numElements = (unsigned long long int)1;
  unsigned long long int k;
  if(self->numDimensions == 0ul)
    return (unsigned long long int)0;

  else
  {
    k = (unsigned long long int)0;
    for( ; !(k >= self->numDimensions); k = k + 1ull)
      numElements = numElements * self->dimensions[(signed long int)k];
    return numElements;
  }
}

// vl_array_init
// file vl/array.c line 51
extern struct _VlArray * vl_array_init(struct _VlArray *self, unsigned int type, unsigned long long int numDimensions, const unsigned long long int *dimensions)
{
  self->type = type;
  self->numDimensions = numDimensions;
  memcpy((void *)self->dimensions, (const void *)dimensions, sizeof(unsigned long long int) /*8ul*/  * numDimensions);
  unsigned long long int return_value_vl_get_type_size_1;
  return_value_vl_get_type_size_1=vl_get_type_size_link3(type);
  unsigned long long int return_value_vl_array_get_num_elements_2;
  return_value_vl_array_get_num_elements_2=vl_array_get_num_elements(self);
  self->data=vl_malloc(return_value_vl_get_type_size_1 * return_value_vl_array_get_num_elements_2);
  self->isEnvelope = 0;
  self->isSparse = 0;
  return self;
}

// vl_array_init_envelope
// file vl/array.c line 76
extern struct _VlArray * vl_array_init_envelope(struct _VlArray *self, void *data, unsigned int type, unsigned long long int numDimensions, const unsigned long long int *dimensions)
{
  self->type = type;
  self->numDimensions = numDimensions;
  memcpy((void *)self->dimensions, (const void *)dimensions, sizeof(unsigned long long int) /*8ul*/  * numDimensions);
  self->data = data;
  self->isEnvelope = 1;
  self->isSparse = 0;
  return self;
}

// vl_array_init_matrix
// file vl/array.c line 97
extern struct _VlArray * vl_array_init_matrix(struct _VlArray *self, unsigned int type, unsigned long long int numRows, unsigned long long int numColumns)
{
  unsigned long long int dimensions[2l] = { numRows, numColumns };
  struct _VlArray *return_value_vl_array_init_1;
  return_value_vl_array_init_1=vl_array_init(self, type, (unsigned long long int)2, dimensions);
  return return_value_vl_array_init_1;
}

// vl_array_init_matrix_envelope
// file vl/array.c line 112
extern struct _VlArray * vl_array_init_matrix_envelope(struct _VlArray *self, void *data, unsigned int type, unsigned long long int numRows, unsigned long long int numColumns)
{
  unsigned long long int dimensions[2l] = { numRows, numColumns };
  struct _VlArray *return_value_vl_array_init_envelope_1;
  return_value_vl_array_init_envelope_1=vl_array_init_envelope(self, data, type, (unsigned long long int)2, dimensions);
  return return_value_vl_array_init_envelope_1;
}

// vl_array_new
// file vl/array.c line 149
extern struct _VlArray * vl_array_new(unsigned int type, unsigned long long int numDimensions, const unsigned long long int *dimensions)
{
  struct _VlArray *self;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct _VlArray) /*176ul*/ );
  self = (struct _VlArray *)return_value_vl_malloc_1;
  struct _VlArray *return_value_vl_array_init_2;
  return_value_vl_array_init_2=vl_array_init(self, type, numDimensions, dimensions);
  return return_value_vl_array_init_2;
}

// vl_array_new_envelope
// file vl/array.c line 176
extern struct _VlArray * vl_array_new_envelope(void *data, unsigned int type, unsigned long long int numDimensions, const unsigned long long int *dimensions)
{
  struct _VlArray *self;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct _VlArray) /*176ul*/ );
  self = (struct _VlArray *)return_value_vl_malloc_1;
  struct _VlArray *return_value_vl_array_init_envelope_2;
  return_value_vl_array_init_envelope_2=vl_array_init_envelope(self, data, type, numDimensions, dimensions);
  return return_value_vl_array_init_envelope_2;
}

// vl_array_new_matrix
// file vl/array.c line 162
extern struct _VlArray * vl_array_new_matrix(unsigned int type, unsigned long long int numRows, unsigned long long int numColumns)
{
  unsigned long long int dimensions[2l] = { numRows, numColumns };
  struct _VlArray *return_value_vl_array_new_1;
  return_value_vl_array_new_1=vl_array_new(type, (unsigned long long int)2, dimensions);
  return return_value_vl_array_new_1;
}

// vl_array_new_matrix_envelope
// file vl/array.c line 191
extern struct _VlArray * vl_array_new_matrix_envelope(void *data, unsigned int type, unsigned long long int numRows, unsigned long long int numColumns)
{
  unsigned long long int dimensions[2l] = { numRows, numColumns };
  struct _VlArray *return_value_vl_array_new_envelope_1;
  return_value_vl_array_new_envelope_1=vl_array_new_envelope(data, type, (unsigned long long int)2, dimensions);
  return return_value_vl_array_new_envelope_1;
}

// vl_calloc
// file vl/generic.h line 145
extern void * vl_calloc(unsigned long int n, unsigned long int size)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  void *return_value;
  return_value=return_value_vl_get_state_1->calloc_func(n, size);
  return return_value;
}

// vl_ceil_d
// file vl/mathop.h line 174
static inline signed long int vl_ceil_d(double x)
{
  signed int return_value___builtin_ceil_1;
  return_value___builtin_ceil_1=__builtin_ceil(x);
  return (signed long int)return_value___builtin_ceil_1;
}

// vl_ceil_d_link1
// file vl/mathop.h line 174
static inline signed long int vl_ceil_d_link1(double x_link1)
{
  signed int return_value___builtin_ceil_1_link1;
  return_value___builtin_ceil_1_link1=__builtin_ceil(x_link1);
  return (signed long int)return_value___builtin_ceil_1_link1;
}

// vl_ceil_f
// file vl/mathop.h line 160
static inline signed long int vl_ceil_f(float x)
{
  float return_value___builtin_ceilf_1;
  return_value___builtin_ceilf_1=__builtin_ceilf(x);
  return (signed long int)return_value___builtin_ceilf_1;
}

// vl_configuration_to_string_copy
// file ./vl/generic.h line 103
extern char * vl_configuration_to_string_copy(void)
{
  char *string = ((char *)NULL);
  signed int length = 0;
  char *staticString;
  staticString=vl_static_configuration_to_string_copy();
  char *cpuString;
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  cpuString=_vl_x86cpu_info_to_string_copy(&return_value_vl_get_state_1->cpuInfo);
  const signed int debug = 0;
  while(string == ((char *)NULL))
  {
    if(length >= 1)
    {
      void *return_value_vl_malloc_2;
      return_value_vl_malloc_2=vl_malloc(sizeof(char) /*1ul*/  * (unsigned long int)length);
      string = (char *)return_value_vl_malloc_2;
      if(string == ((char *)NULL))
        break;

    }

    const char *return_value_vl_get_version_string_3;
    return_value_vl_get_version_string_3=vl_get_version_string();
    unsigned long long int return_value_vl_get_num_cpus_4;
    return_value_vl_get_num_cpus_4=vl_get_num_cpus();
    signed int return_value_omp_get_max_threads_5;
    return_value_omp_get_max_threads_5=omp_get_max_threads();
    unsigned long long int return_value_vl_get_max_threads_6;
    return_value_vl_get_max_threads_6=vl_get_max_threads();
    length=snprintf(string, (unsigned long int)length, "VLFeat version %s\n    Static config: %s\n    %llu CPU(s): %s\n    OpenMP: max threads: %d (library: %llu)\n    Debug: %s\n", return_value_vl_get_version_string_3, staticString, return_value_vl_get_num_cpus_4, cpuString, return_value_omp_get_max_threads_5, return_value_vl_get_max_threads_6, debug != 0 ? "yes" : "no");
    length = length + 1;
  }
  if(!(staticString == ((char *)NULL)))
    vl_free((void *)staticString);

  if(!(cpuString == ((char *)NULL)))
    vl_free((void *)cpuString);

  return string;
}

// vl_covdet_append_feature
// file vl/covdet.c line 1648
extern signed int vl_covdet_append_feature(struct _VlCovDet *self, const struct _VlCovDetFeature *feature)
{
  unsigned long long int requiredSize;
  self->numFeatures = self->numFeatures + 1ull;
  requiredSize = self->numFeatures * sizeof(struct _VlCovDetFeature) /*40ul*/ ;
  if(!(self->numFeatureBufferSize >= requiredSize))
  {
    signed int err;
    err=_vl_resize_buffer((void **)&self->features, &self->numFeatureBufferSize, (self->numFeatures + (unsigned long int)1000) * sizeof(struct _VlCovDetFeature) /*40ul*/ );
    if(!(err == 0))
    {
      self->numFeatures = self->numFeatures - 1ull;
      return err;
    }

  }

  self->features[(signed long int)(self->numFeatures - (unsigned long int)1)] = *feature;
  return 0;
}

// vl_covdet_delete
// file vl/covdet.c line 1631
extern void vl_covdet_delete(struct _VlCovDet *self)
{
  vl_covdet_reset(self);
  if(!(self->patch == ((float *)NULL)))
    vl_free((void *)self->patch);

  vl_free((void *)self);
}

// vl_covdet_detect
// file vl/covdet.c line 1921
extern void vl_covdet_detect(struct _VlCovDet *self)
{
  struct _VlScaleSpaceGeometry geom;
  geom=vl_scalespace_get_geometry(self->gss);
  struct _VlScaleSpaceGeometry cgeom;
  float *levelxx = (float *)(void *)0;
  float *levelyy = (float *)(void *)0;
  float *levelxy = (float *)(void *)0;
  signed long long int o;
  signed long long int s;
  self->numFeatures = (unsigned long long int)0;
  cgeom = geom;
  if((signed int)self->method == VL_COVDET_METHOD_DOG)
    cgeom.octaveLastSubdivision = cgeom.octaveLastSubdivision - (signed long long int)1;

  _Bool tmp_if_expr_3;
  struct _VlScaleSpaceGeometry return_value_vl_scalespace_get_geometry_1;
  signed int return_value_vl_scalespacegeometry_is_equal_2;
  if(self->css == ((struct _VlScaleSpace *)NULL))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_vl_scalespace_get_geometry_1=vl_scalespace_get_geometry(self->css);
    return_value_vl_scalespacegeometry_is_equal_2=vl_scalespacegeometry_is_equal(cgeom, return_value_vl_scalespace_get_geometry_1);
    tmp_if_expr_3 = !(return_value_vl_scalespacegeometry_is_equal_2 != 0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
  {
    if(!(self->css == ((struct _VlScaleSpace *)NULL)))
      vl_scalespace_delete(self->css);

    self->css=vl_scalespace_new_with_geometry(cgeom);
  }

  _Bool tmp_if_expr_7;
  if((signed int)self->method == VL_COVDET_METHOD_HARRIS_LAPLACE)
    tmp_if_expr_7 = (_Bool)1;

  else
    tmp_if_expr_7 = (signed int)self->method == VL_COVDET_METHOD_MULTISCALE_HARRIS ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_7)
  {
    struct _VlScaleSpaceOctaveGeometry vl_covdet_detect__1__3__oct;
    vl_covdet_detect__1__3__oct=vl_scalespace_get_octave_geometry(self->gss, geom.firstOctave);
    void *return_value_vl_malloc_4;
    return_value_vl_malloc_4=vl_malloc(vl_covdet_detect__1__3__oct.width * vl_covdet_detect__1__3__oct.height * sizeof(float) /*4ul*/ );
    levelxx = (float *)return_value_vl_malloc_4;
    void *return_value_vl_malloc_5;
    return_value_vl_malloc_5=vl_malloc(vl_covdet_detect__1__3__oct.width * vl_covdet_detect__1__3__oct.height * sizeof(float) /*4ul*/ );
    levelyy = (float *)return_value_vl_malloc_5;
    void *return_value_vl_malloc_6;
    return_value_vl_malloc_6=vl_malloc(vl_covdet_detect__1__3__oct.width * vl_covdet_detect__1__3__oct.height * sizeof(float) /*4ul*/ );
    levelxy = (float *)return_value_vl_malloc_6;
  }

  o = cgeom.firstOctave;
  float *return_value_vl_scalespace_get_level_8;
  for( ; cgeom.lastOctave >= o; o = o + 1ll)
  {
    struct _VlScaleSpaceOctaveGeometry oct;
    oct=vl_scalespace_get_octave_geometry(self->css, o);
    s = cgeom.octaveFirstSubdivision;
    for( ; cgeom.octaveLastSubdivision >= s; s = s + 1ll)
    {
      float *level;
      level=vl_scalespace_get_level(self->gss, o, s);
      float *clevel;
      clevel=vl_scalespace_get_level(self->css, o, s);
      double vl_covdet_detect__1__4__1__1__1__sigma;
      vl_covdet_detect__1__4__1__1__1__sigma=vl_scalespace_get_level_sigma(self->css, o, s);
      switch((signed int)self->method)
      {
        case VL_COVDET_METHOD_DOG:
        {
          return_value_vl_scalespace_get_level_8=vl_scalespace_get_level(self->gss, o, s + (signed long int)1);
          _vl_dog_response(clevel, return_value_vl_scalespace_get_level_8, level, oct.width, oct.height);
          break;
        }
        case VL_COVDET_METHOD_HARRIS_LAPLACE:

        case VL_COVDET_METHOD_MULTISCALE_HARRIS:
        {
          _vl_harris_response(clevel, level, oct.width, oct.height, oct.step, vl_covdet_detect__1__4__1__1__1__sigma, 1.4 * vl_covdet_detect__1__4__1__1__1__sigma, 0.05);
          break;
        }
        case VL_COVDET_METHOD_HESSIAN:

        case VL_COVDET_METHOD_HESSIAN_LAPLACE:

        case VL_COVDET_METHOD_MULTISCALE_HESSIAN:
        {
          _vl_det_hessian_response(clevel, level, oct.width, oct.height, oct.step, vl_covdet_detect__1__4__1__1__1__sigma);
          break;
        }
        default:
          ;
      }
    }
  }
  signed long long int *extrema = (signed long long int *)(void *)0;
  unsigned long long int extremaBufferSize = (unsigned long long int)0;
  unsigned long long int numExtrema;
  unsigned long long int index;
  o = cgeom.firstOctave;
  for( ; cgeom.lastOctave >= o; o = o + 1ll)
  {
    struct _VlScaleSpaceOctaveGeometry octgeom;
    octgeom=vl_scalespace_get_octave_geometry(self->css, o);
    double step = octgeom.step;
    unsigned long long int width = octgeom.width;
    unsigned long long int height = octgeom.height;
    unsigned long long int depth = (unsigned long long int)((cgeom.octaveLastSubdivision - cgeom.octaveFirstSubdivision) + (signed long int)1);
    if((signed int)self->method == VL_COVDET_METHOD_DOG || (signed int)self->method == VL_COVDET_METHOD_HESSIAN)
    {
      const float *octave;
      octave=vl_scalespace_get_level(self->css, o, cgeom.octaveFirstSubdivision);
      numExtrema=vl_find_local_extrema_3(&extrema, &extremaBufferSize, octave, width, height, depth, 0.8 * self->peakThreshold);
      index = (unsigned long long int)0;
      for( ; !(index >= numExtrema); index = index + 1ull)
      {
        struct _VlCovDetExtremum3 refined;
        struct _VlCovDetFeature feature;
        signed int ok;
        memset((void *)&feature, 0, sizeof(struct _VlCovDetFeature) /*40ul*/ );
        ok=vl_refine_local_extreum_3(&refined, octave, width, height, depth, extrema[(signed long int)((unsigned long int)3 * index + (unsigned long int)0)], extrema[(signed long int)((unsigned long int)3 * index + (unsigned long int)1)], extrema[(signed long int)((unsigned long int)3 * index + (unsigned long int)2)]);
        double return_value_fabs_9;
        return_value_fabs_9=fabs((double)refined.peakScore);
        ok = ok & (signed int)(return_value_fabs_9 > self->peakThreshold);
        ok = ok & (signed int)((double)refined.edgeScore < self->edgeThreshold);
        if(!(ok == 0))
        {
          double vl_covdet_detect__1__5__1__1__1__1__1__1__1__sigma;
          double return_value_pow_10;
          return_value_pow_10=pow(2.0, (double)((float)o + (refined.z + (float)cgeom.octaveFirstSubdivision) / (float)cgeom.octaveResolution));
          vl_covdet_detect__1__5__1__1__1__1__1__1__1__sigma = cgeom.baseScale * return_value_pow_10;
          feature.frame.x = (float)((double)refined.x * step);
          feature.frame.y = (float)((double)refined.y * step);
          feature.frame.a11 = (float)vl_covdet_detect__1__5__1__1__1__1__1__1__1__sigma;
          feature.frame.a12 = (float)0.0;
          feature.frame.a21 = (float)0.0;
          feature.frame.a22 = (float)vl_covdet_detect__1__5__1__1__1__1__1__1__1__sigma;
          feature.peakScore = refined.peakScore;
          feature.edgeScore = refined.edgeScore;
          vl_covdet_append_feature(self, &feature);
        }

      }
      goto __CPROVER_DUMP_L28;
    }

    s = cgeom.octaveFirstSubdivision;
    for( ; !(s >= cgeom.octaveLastSubdivision); s = s + 1ll)
    {
      const float *vl_covdet_detect__1__5__1__1__1__2__1__1__level;
      vl_covdet_detect__1__5__1__1__1__2__1__1__level=vl_scalespace_get_level(self->css, o, s);
      numExtrema=vl_find_local_extrema_2(&extrema, &extremaBufferSize, vl_covdet_detect__1__5__1__1__1__2__1__1__level, width, height, 0.8 * self->peakThreshold);
      index = (unsigned long long int)0;
      for( ; !(index >= numExtrema); index = index + 1ull)
      {
        struct _VlCovDetExtremum2 vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__refined;
        struct _VlCovDetFeature vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature;
        signed int vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__ok;
        memset((void *)&vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature, 0, sizeof(struct _VlCovDetFeature) /*40ul*/ );
        vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__ok=vl_refine_local_extreum_2(&vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__refined, vl_covdet_detect__1__5__1__1__1__2__1__1__level, width, height, extrema[(signed long int)((unsigned long int)2 * index + (unsigned long int)0)], extrema[(signed long int)((unsigned long int)2 * index + (unsigned long int)1)]);
        double return_value_fabs_11;
        return_value_fabs_11=fabs((double)vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__refined.peakScore);
        vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__ok = vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__ok & (signed int)(return_value_fabs_11 > self->peakThreshold);
        vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__ok = vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__ok & (signed int)((double)vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__refined.edgeScore < self->edgeThreshold);
        if(!(vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__ok == 0))
        {
          double sigma;
          double return_value_pow_12;
          return_value_pow_12=pow(2.0, (double)o + (double)s / (double)cgeom.octaveResolution);
          sigma = cgeom.baseScale * return_value_pow_12;
          vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature.frame.x = (float)((double)vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__refined.x * step);
          vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature.frame.y = (float)((double)vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__refined.y * step);
          vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature.frame.a11 = (float)sigma;
          vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature.frame.a12 = (float)0.0;
          vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature.frame.a21 = (float)0.0;
          vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature.frame.a22 = (float)sigma;
          vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature.peakScore = vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__refined.peakScore;
          vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature.edgeScore = vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__refined.edgeScore;
          vl_covdet_append_feature(self, &vl_covdet_detect__1__5__1__1__1__2__1__1__1__1__feature);
        }

      }
    }

  __CPROVER_DUMP_L28:
    ;
  }
  if(!(extrema == ((signed long long int *)NULL)))
  {
    vl_free((void *)extrema);
    extrema = ((signed long long int *)NULL);
  }

  if((signed int)self->method == VL_COVDET_METHOD_HESSIAN_LAPLACE || (signed int)self->method == VL_COVDET_METHOD_HARRIS_LAPLACE)
    vl_covdet_extract_laplacian_scales(self);

  double return_value_vl_abs_d_16;
  double return_value_vl_abs_d_15;
  double return_value_vl_abs_d_13;
  double return_value_vl_abs_d_14;
  signed long long int tmp_post_17;
  if(IEEE_FLOAT_NOTEQUAL(self->nonExtremaSuppression, 0.000000))
  {
    signed long long int i;
    signed long long int j;
    double tol = self->nonExtremaSuppression;
    self->numNonExtremaSuppressed = (unsigned long long int)0;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)(signed int)self->numFeatures); i = i + 1ll)
    {
      double x = (double)(self->features + i)->frame.x;
      double y = (double)(self->features + i)->frame.y;
      double vl_covdet_detect__1__7__1__1__sigma = (double)(self->features + i)->frame.a11;
      double score = (double)(self->features + i)->peakScore;
      j = (signed long long int)0;
      for( ; !(j >= (signed long int)(signed int)self->numFeatures); j = j + 1ll)
      {
        double dx_ = (double)(self->features + j)->frame.x - x;
        double dy_ = (double)(self->features + j)->frame.y - y;
        double sigma_ = (double)(self->features + j)->frame.a11;
        double score_ = (double)(self->features + j)->peakScore;
        if(!IEEE_FLOAT_EQUAL(score_, 0.000000))
        {
          if(sigma_ < (1.000000 + tol) * vl_covdet_detect__1__7__1__1__sigma && vl_covdet_detect__1__7__1__1__sigma < (1.000000 + tol) * sigma_)
          {
            return_value_vl_abs_d_16=vl_abs_d_link2(dx_);
            if(return_value_vl_abs_d_16 < tol * vl_covdet_detect__1__7__1__1__sigma)
            {
              return_value_vl_abs_d_15=vl_abs_d_link2(dy_);
              if(return_value_vl_abs_d_15 < tol * vl_covdet_detect__1__7__1__1__sigma)
              {
                return_value_vl_abs_d_13=vl_abs_d_link2(score);
                return_value_vl_abs_d_14=vl_abs_d_link2(score_);
                if(return_value_vl_abs_d_13 > return_value_vl_abs_d_14)
                {
                  (self->features + j)->peakScore = (float)0;
                  self->numNonExtremaSuppressed = self->numNonExtremaSuppressed + 1ull;
                }

              }

            }

          }

        }

      }
    }
    j = (signed long long int)0;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)(signed int)self->numFeatures); i = i + 1ll)
    {
      struct _VlCovDetFeature vl_covdet_detect__1__7__2__1__feature = self->features[i];
      if(IEEE_FLOAT_NOTEQUAL((self->features + i)->peakScore, 0.000000f))
      {
        tmp_post_17 = j;
        j = j + 1ll;
        self->features[tmp_post_17] = vl_covdet_detect__1__7__2__1__feature;
      }

    }
    self->numFeatures = (unsigned long long int)j;
  }

  if(!(levelxx == ((float *)NULL)))
    vl_free((void *)levelxx);

  if(!(levelyy == ((float *)NULL)))
    vl_free((void *)levelyy);

  if(!(levelxy == ((float *)NULL)))
    vl_free((void *)levelxy);

}

// vl_covdet_drop_features_outside
// file vl/covdet.c line 3108
extern void vl_covdet_drop_features_outside(struct _VlCovDet *self, double margin)
{
  signed long long int i;
  signed long long int j = (signed long long int)0;
  unsigned long long int numFeatures;
  numFeatures=vl_covdet_get_num_features(self);
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)numFeatures); i = i + 1ll)
  {
    signed int inside;
    inside=_vl_covdet_check_frame_inside(self, (self->features + i)->frame, margin);
    if(!(inside == 0))
    {
      self->features[j] = self->features[i];
      j = j + 1ll;
    }

  }
  self->numFeatures = (unsigned long long int)j;
}

// vl_covdet_extract_affine_shape
// file vl/covdet.c line 2644
extern void vl_covdet_extract_affine_shape(struct _VlCovDet *self)
{
  signed long long int i;
  signed long long int j = (signed long long int)0;
  unsigned long long int numFeatures;
  numFeatures=vl_covdet_get_num_features(self);
  struct _VlCovDetFeature *feature;
  void *return_value_vl_covdet_get_features_1;
  return_value_vl_covdet_get_features_1=vl_covdet_get_features(self);
  feature = (struct _VlCovDetFeature *)return_value_vl_covdet_get_features_1;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)numFeatures); i = i + 1ll)
  {
    signed int status;
    struct _VlFrameOrientedEllipse adapted;
    status=vl_covdet_extract_affine_shape_for_frame(self, &adapted, (feature + i)->frame);
    if(status == 0)
    {
      feature[j] = feature[i];
      (feature + j)->frame = adapted;
      j = j + 1ll;
    }

  }
  self->numFeatures = (unsigned long long int)j;
}

// vl_covdet_extract_affine_shape_for_frame
// file vl/covdet.c line 2455
extern signed int vl_covdet_extract_affine_shape_for_frame(struct _VlCovDet *self, struct _VlFrameOrientedEllipse *adapted, struct _VlFrameOrientedEllipse frame)
{
  signed long long int iter = (signed long long int)0;
  double vl_covdet_extract_affine_shape_for_frame__1__A[4l] = { (double)frame.a11, (double)frame.a21, (double)frame.a12, (double)frame.a22 };
  double T[2l] = { (double)frame.x, (double)frame.y };
  double U[4l];
  double V[4l];
  double D[4l];
  double M[4l];
  double P[4l];
  double P_[4l];
  double Q[4l];
  double sigma1;
  double sigma2;
  double sigmaD = (double)1;
  double factor;
  double anisotropy;
  double referenceScale;
  const unsigned long long int resolution = (const unsigned long long int)20;
  const unsigned long long int side = (const unsigned long long int)(2 * 20 + 1);
  const double extent = (const double)(3 * 3);
  *adapted = frame;
  double tmp_if_expr_1;
  double tmp_if_expr_2;
  double tmp_if_expr_3;
  while((_Bool)1)
  {
    double lxx = (double)0;
    double lxy = (double)0;
    double lyy = (double)0;
    signed long long int k;
    signed int err;
    vl_svd2(D, U, V, vl_covdet_extract_affine_shape_for_frame__1__A);
    if(D[0l] / D[3l] > D[3l] / D[0l])
      tmp_if_expr_1 = D[(signed long int)0] / D[(signed long int)3];

    else
      tmp_if_expr_1 = D[(signed long int)3] / D[(signed long int)0];
    anisotropy = tmp_if_expr_1;
    if(anisotropy > 5.000000)
      break;

    if(iter == 0l)
    {
      if(D[0l] < D[3l])
        tmp_if_expr_2 = D[(signed long int)0];

      else
        tmp_if_expr_2 = D[(signed long int)3];
      referenceScale = tmp_if_expr_2;
      factor = 1.0;
    }

    else
    {
      if(D[0l] < D[3l])
        tmp_if_expr_3 = D[(signed long int)0];

      else
        tmp_if_expr_3 = D[(signed long int)3];
      factor = referenceScale / tmp_if_expr_3;
    }
    D[(signed long int)0] = D[(signed long int)0] * factor;
    D[(signed long int)3] = D[(signed long int)3] * factor;
    vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)0] = U[(signed long int)0] * D[(signed long int)0];
    vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)1] = U[(signed long int)1] * D[(signed long int)0];
    vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)2] = U[(signed long int)2] * D[(signed long int)3];
    vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)3] = U[(signed long int)3] * D[(signed long int)3];
    adapted->a11 = (float)vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)0];
    adapted->a21 = (float)vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)1];
    adapted->a12 = (float)vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)2];
    adapted->a22 = (float)vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)3];
    iter = iter + 1ll;
    if(iter >= 15l)
      break;

    err=vl_covdet_extract_patch_helper(self, &sigma1, &sigma2, self->aaPatch, resolution, extent, sigmaD, vl_covdet_extract_affine_shape_for_frame__1__A, T, D[(signed long int)0], D[(signed long int)3]);
    if(!(err == 0))
      return err;

    if(!(self->aaAccurateSmoothing == 0))
    {
      double deltaSigma1;
      deltaSigma1=sqrt(sigmaD * sigmaD - sigma1 * sigma1 > (double)0 ? sigmaD * sigmaD - sigma1 * sigma1 : (double)0);
      double deltaSigma2;
      deltaSigma2=sqrt(sigmaD * sigmaD - sigma2 * sigma2 > (double)0 ? sigmaD * sigmaD - sigma2 * sigma2 : (double)0);
      double stephat = extent / (double)resolution;
      vl_imsmooth_f(self->aaPatch, side, self->aaPatch, side, side, side, deltaSigma1 / stephat, deltaSigma2 / stephat);
    }

    vl_imgradient_f(self->aaPatchX, self->aaPatchY, (unsigned long long int)1, side, self->aaPatch, side, side, side);
    k = (signed long long int)0;
    for( ; !(k >= (signed long int)((signed int)side * (signed int)side)); k = k + 1ll)
    {
      double lx = (double)self->aaPatchX[k];
      double ly = (double)self->aaPatchY[k];
      lxx = lxx + lx * lx * (double)self->aaMask[k];
      lyy = lyy + ly * ly * (double)self->aaMask[k];
      lxy = lxy + lx * ly * (double)self->aaMask[k];
    }
    M[(signed long int)0] = lxx;
    M[(signed long int)1] = lxy;
    M[(signed long int)2] = lxy;
    M[(signed long int)3] = lyy;
    if(IEEE_FLOAT_EQUAL(lxx, 0.000000) || IEEE_FLOAT_EQUAL(lyy, 0.000000))
    {
      *adapted = frame;
      break;
    }

    vl_svd2(Q, P, P_, M);
    if(Q[3l] / Q[0l] < 1.001)
    {
      if(Q[0l] / Q[3l] < 1.001)
        break;

    }

    double Ap[4l];
    double q0;
    q0=sqrt(Q[(signed long int)0]);
    double q1;
    q1=sqrt(Q[(signed long int)3]);
    Ap[(signed long int)0] = (vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)0] * P[(signed long int)0] + vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)2] * P[(signed long int)1]) / q0;
    Ap[(signed long int)1] = (vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)1] * P[(signed long int)0] + vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)3] * P[(signed long int)1]) / q0;
    Ap[(signed long int)2] = (vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)0] * P[(signed long int)2] + vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)2] * P[(signed long int)3]) / q1;
    Ap[(signed long int)3] = (vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)1] * P[(signed long int)2] + vl_covdet_extract_affine_shape_for_frame__1__A[(signed long int)3] * P[(signed long int)3]) / q1;
    memcpy((void *)vl_covdet_extract_affine_shape_for_frame__1__A, (const void *)Ap, (unsigned long int)4 * sizeof(double) /*8ul*/ );
  }
  double A[4l] = { (double)adapted->a11, (double)adapted->a21, (double)adapted->a12, (double)adapted->a22 };
  double ref[2l];
  double ref_[2l];
  double angle;
  double angle_;
  double dangle;
  double r1;
  double r2;
  if(!(self->transposed == 0))
  {
    ref[(signed long int)0] = (double)1;
    ref[(signed long int)1] = (double)0;
  }

  else
  {
    ref[(signed long int)0] = (double)0;
    ref[(signed long int)1] = (double)1;
  }
  vl_solve_linear_system_2(ref_, A, ref);
  angle=atan2(ref[(signed long int)1], ref[(signed long int)0]);
  angle_=atan2(ref_[(signed long int)1], ref_[(signed long int)0]);
  dangle = angle_ - angle;
  r1=cos(dangle);
  r2=sin(dangle);
  adapted->a11 = (float)(+A[(signed long int)0] * r1 + A[(signed long int)2] * r2);
  adapted->a21 = (float)(+A[(signed long int)1] * r1 + A[(signed long int)3] * r2);
  adapted->a12 = (float)(-A[(signed long int)0] * r2 + A[(signed long int)2] * r1);
  adapted->a22 = (float)(-A[(signed long int)1] * r2 + A[(signed long int)3] * r1);
  return 0;
}

// vl_covdet_extract_laplacian_scales
// file vl/covdet.c line 3009
extern void vl_covdet_extract_laplacian_scales(struct _VlCovDet *self)
{
  signed long long int i;
  signed long long int j;
  signed int dropFeaturesWithoutScale = 1;
  unsigned long long int numFeatures;
  numFeatures=vl_covdet_get_num_features(self);
  memset((void *)self->numFeaturesWithNumScales, 0, sizeof(unsigned long long int [5l]) /*40ul*/ );
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)numFeatures); i = i + 1ll)
  {
    unsigned long long int numScales;
    struct _VlCovDetFeature feature = self->features[i];
    const struct _VlCovDetFeatureLaplacianScale *scales;
    scales=vl_covdet_extract_laplacian_scales_for_frame(self, &numScales, feature.frame);
    self->numFeaturesWithNumScales[(signed long int)numScales] = self->numFeaturesWithNumScales[(signed long int)numScales] + 1ull;
    if(numScales == 0ul && !(dropFeaturesWithoutScale == 0))
      (self->features + i)->peakScore = (float)0;

    j = (signed long long int)0;
    for( ; !(j >= (signed long int)(signed int)numScales); j = j + 1ll)
    {
      struct _VlCovDetFeature *scaled;
      if(j == 0l)
        scaled = &self->features[i];

      else
      {
        vl_covdet_append_feature(self, &feature);
        scaled = &self->features[(signed long int)(self->numFeatures - (unsigned long int)1)];
      }
      scaled->laplacianScaleScore = (float)(scales + j)->score;
      scaled->frame.a11 = scaled->frame.a11 * (float)(scales + j)->scale;
      scaled->frame.a21 = scaled->frame.a21 * (float)(scales + j)->scale;
      scaled->frame.a12 = scaled->frame.a12 * (float)(scales + j)->scale;
      scaled->frame.a22 = scaled->frame.a22 * (float)(scales + j)->scale;
    }
  }
  signed long long int tmp_post_1;
  if(!(dropFeaturesWithoutScale == 0))
  {
    j = (signed long long int)0;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)(signed int)self->numFeatures); i = i + 1ll)
    {
      struct _VlCovDetFeature vl_covdet_extract_laplacian_scales__1__2__1__1__feature = self->features[i];
      if(IEEE_FLOAT_NOTEQUAL(vl_covdet_extract_laplacian_scales__1__2__1__1__feature.peakScore, 0.000000f))
      {
        tmp_post_1 = j;
        j = j + 1ll;
        self->features[tmp_post_1] = vl_covdet_extract_laplacian_scales__1__2__1__1__feature;
      }

    }
    self->numFeatures = (unsigned long long int)j;
  }

}

// vl_covdet_extract_laplacian_scales_for_frame
// file vl/covdet.c line 2900
extern struct _VlCovDetFeatureLaplacianScale * vl_covdet_extract_laplacian_scales_for_frame(struct _VlCovDet *self, unsigned long long int *numScales, struct _VlFrameOrientedEllipse frame)
{
  signed int err;
  double sigmaImage;
  double return_value_sqrt_1;
  return_value_sqrt_1=sqrt(2.0);
  sigmaImage = 1.0 / return_value_sqrt_1;
  const double step = 0.5 * sigmaImage;
  double actualSigmaImage;
  const unsigned long long int resolution = (const unsigned long long int)16;
  const unsigned long long int num = (unsigned long int)2 * resolution + (unsigned long int)1;
  double extent = step * (double)resolution;
  double scores[10l];
  double factor = 1.0;
  const float *pt;
  signed long long int k;
  double A[4l] = { (double)frame.a11, (double)frame.a21, (double)frame.a12, (double)frame.a22 };
  double T[2l] = { (double)frame.x, (double)frame.y };
  double D[4l];
  double U[4l];
  double V[4l];
  double sigma1;
  double sigma2;
  *numScales = (unsigned long long int)0;
  vl_svd2(D, U, V, A);
  err=vl_covdet_extract_patch_helper(self, &sigma1, &sigma2, self->lapPatch, resolution, extent, sigmaImage, A, T, D[(signed long int)0], D[(signed long int)3]);
  const float *tmp_post_2;
  double return_value_vl_abs_d_3;
  if(!(err == 0))
    return (struct _VlCovDetFeatureLaplacianScale *)(void *)0;

  else
  {
    if(IEEE_FLOAT_EQUAL(sigma1, sigma2))
      actualSigmaImage = sigma1;

    else
      actualSigmaImage=sqrt(sigma1 * sigma2);
    pt = self->laplacians;
    k = (signed long long int)0;
    for( ; !(k >= 10l); k = k + 1ll)
    {
      signed long long int q;
      double score = (double)0;
      double vl_covdet_extract_laplacian_scales_for_frame__1__3__1__sigmaLap;
      vl_covdet_extract_laplacian_scales_for_frame__1__3__1__sigmaLap=pow(2.0, -0.5 + (double)k / (double)(10 - 1));
      vl_covdet_extract_laplacian_scales_for_frame__1__3__1__sigmaLap=sqrt((vl_covdet_extract_laplacian_scales_for_frame__1__3__1__sigmaLap * vl_covdet_extract_laplacian_scales_for_frame__1__3__1__sigmaLap - sigmaImage * sigmaImage) + actualSigmaImage * actualSigmaImage);
      q = (signed long long int)0;
      for( ; !(q >= (signed long int)((signed int)num * (signed int)num)); q = q + 1ll)
      {
        tmp_post_2 = pt;
        pt = pt + 1l;
        score = score + (double)(*tmp_post_2 * self->lapPatch[q]);
      }
      scores[k] = score * vl_covdet_extract_laplacian_scales_for_frame__1__3__1__sigmaLap * vl_covdet_extract_laplacian_scales_for_frame__1__3__1__sigmaLap;
    }
    k = (signed long long int)1;
    for( ; !(k >= 9l); k = k + 1ll)
    {
      double a = scores[k - (signed long int)1];
      double b = scores[k];
      double c = scores[k + (signed long int)1];
      double t = self->lapPeakThreshold;
      if(b < a && b < c || b > a && b > c)
      {
        return_value_vl_abs_d_3=vl_abs_d_link2(b);
        if(return_value_vl_abs_d_3 >= t)
        {
          double dk = (-0.5 * (c - a)) / ((c + a) - (double)2 * b);
          double s = (double)k + dk;
          double sigmaLap;
          sigmaLap=pow(2.0, -0.5 + s / (double)(10 - 1));
          double scale;
          sigmaLap=sqrt((sigmaLap * sigmaLap - sigmaImage * sigmaImage) + actualSigmaImage * actualSigmaImage);
          scale = sigmaLap / 1.0;
          if(!(*numScales >= 4ul))
          {
            self->scales[(signed long int)*numScales].scale = scale * factor;
            self->scales[(signed long int)*numScales].score = b + 0.5 * (c - a) * dk;
            *numScales = *numScales + (unsigned long long int)1;
          }

        }

      }

    }
    return self->scales;
  }
}

// vl_covdet_extract_orientations
// file vl/covdet.c line 2850
extern void vl_covdet_extract_orientations(struct _VlCovDet *self)
{
  signed long long int i;
  signed long long int j;
  unsigned long long int numFeatures;
  numFeatures=vl_covdet_get_num_features(self);
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)numFeatures); i = i + 1ll)
  {
    unsigned long long int numOrientations;
    struct _VlCovDetFeature feature = self->features[i];
    struct _VlCovDetFeatureOrientation *orientations;
    orientations=vl_covdet_extract_orientations_for_frame(self, &numOrientations, feature.frame);
    j = (signed long long int)0;
    for( ; !(j >= (signed long int)(signed int)numOrientations); j = j + 1ll)
    {
      double A[4l] = { (double)feature.frame.a11, (double)feature.frame.a21, (double)feature.frame.a12, (double)feature.frame.a22 };
      double r1;
      r1=cos((orientations + j)->angle);
      double r2;
      r2=sin((orientations + j)->angle);
      struct _VlCovDetFeature *oriented;
      if(j == 0l)
        oriented = &self->features[i];

      else
      {
        vl_covdet_append_feature(self, &feature);
        oriented = &self->features[(signed long int)(self->numFeatures - (unsigned long int)1)];
      }
      oriented->orientationScore = (float)(orientations + j)->score;
      oriented->frame.a11 = (float)(+A[(signed long int)0] * r1 + A[(signed long int)2] * r2);
      oriented->frame.a21 = (float)(+A[(signed long int)1] * r1 + A[(signed long int)3] * r2);
      oriented->frame.a12 = (float)(-A[(signed long int)0] * r2 + A[(signed long int)2] * r1);
      oriented->frame.a22 = (float)(-A[(signed long int)1] * r2 + A[(signed long int)3] * r1);
    }
  }
}

// vl_covdet_extract_orientations_for_frame
// file vl/covdet.c line 2690
extern struct _VlCovDetFeatureOrientation * vl_covdet_extract_orientations_for_frame(struct _VlCovDet *self, unsigned long long int *numOrientations, struct _VlFrameOrientedEllipse frame)
{
  signed int err;
  signed long long int k;
  signed long long int i;
  signed long long int iter;
  double extent = (double)(3 * 3);
  unsigned long long int resolution = (unsigned long long int)20;
  unsigned long long int side = (unsigned long int)2 * resolution + (unsigned long int)1;
  const unsigned long long int numBins = (const unsigned long long int)36;
  double hist[36l];
  const double binExtent = ((double)2 * 3.141592653589793) / (double)36;
  const double peakRelativeSize = 0.8;
  double maxPeakValue;
  double A[4l] = { (double)frame.a11, (double)frame.a21, (double)frame.a12, (double)frame.a22 };
  double T[2l] = { (double)frame.x, (double)frame.y };
  double U[4l];
  double V[4l];
  double D[4l];
  double sigma1;
  double sigma2;
  double sigmaD = 1.0;
  double theta0;
  vl_svd2(D, U, V, A);
  A[(signed long int)0] = U[(signed long int)0] * D[(signed long int)0];
  A[(signed long int)1] = U[(signed long int)1] * D[(signed long int)0];
  A[(signed long int)2] = U[(signed long int)2] * D[(signed long int)3];
  A[(signed long int)3] = U[(signed long int)3] * D[(signed long int)3];
  theta0=atan2(V[(signed long int)1], V[(signed long int)0]);
  err=vl_covdet_extract_patch_helper(self, &sigma1, &sigma2, self->aaPatch, resolution, extent, sigmaD, A, T, D[(signed long int)0], D[(signed long int)3]);
  double tmp_if_expr_1;
  if(!(err == 0))
  {
    *numOrientations = (unsigned long long int)0;
    return (struct _VlCovDetFeatureOrientation *)(void *)0;
  }

  else
  {
    {
      double deltaSigma1;
      deltaSigma1=sqrt(sigmaD * sigmaD - sigma1 * sigma1 > (double)0 ? sigmaD * sigmaD - sigma1 * sigma1 : (double)0);
      double deltaSigma2;
      deltaSigma2=sqrt(sigmaD * sigmaD - sigma2 * sigma2 > (double)0 ? sigmaD * sigmaD - sigma2 * sigma2 : (double)0);
      double stephat = extent / (double)resolution;
      vl_imsmooth_f(self->aaPatch, side, self->aaPatch, side, side, side, deltaSigma1 / stephat, deltaSigma2 / stephat);
    }
    vl_imgradient_polar_f(self->aaPatchX, self->aaPatchY, (unsigned long long int)1, side, self->aaPatch, side, side, side);
    memset((void *)hist, 0, sizeof(double) /*8ul*/  * numBins);
    k = (signed long long int)0;
    for( ; !(k >= (signed long int)((signed int)side * (signed int)side)); k = k + 1ll)
    {
      double modulus = (double)self->aaPatchX[k];
      double angle = (double)self->aaPatchY[k];
      double weight = (double)self->aaMask[k];
      double x = angle / binExtent;
      signed long long int bin;
      bin=vl_floor_d(x);
      double w2 = x - (double)bin;
      double w1 = 1.0 - w2;
      hist[(signed long int)(((unsigned long int)bin + numBins) % numBins)] = hist[(signed long int)(((unsigned long int)bin + numBins) % numBins)] + w1 * modulus * weight;
      hist[(signed long int)(((unsigned long int)bin + numBins + (unsigned long int)1) % numBins)] = hist[(signed long int)(((unsigned long int)bin + numBins + (unsigned long int)1) % numBins)] + w2 * modulus * weight;
    }
    iter = (signed long long int)0;
    for( ; !(iter >= 6l); iter = iter + 1ll)
    {
      double prev = hist[(signed long int)(numBins - (unsigned long int)1)];
      double first = hist[(signed long int)0];
      signed long long int vl_covdet_extract_orientations_for_frame__1__4__1__i = (signed long long int)0;
      for( ; !(vl_covdet_extract_orientations_for_frame__1__4__1__i >= (signed long int)((signed int)numBins + -1)); vl_covdet_extract_orientations_for_frame__1__4__1__i = vl_covdet_extract_orientations_for_frame__1__4__1__i + 1ll)
      {
        double curr = (prev + hist[vl_covdet_extract_orientations_for_frame__1__4__1__i] + hist[(signed long int)((unsigned long int)(vl_covdet_extract_orientations_for_frame__1__4__1__i + (signed long int)1) % numBins)]) / 3.0;
        prev = hist[vl_covdet_extract_orientations_for_frame__1__4__1__i];
        hist[vl_covdet_extract_orientations_for_frame__1__4__1__i] = curr;
      }
      hist[vl_covdet_extract_orientations_for_frame__1__4__1__i] = (prev + hist[vl_covdet_extract_orientations_for_frame__1__4__1__i] + first) / 3.0;
    }
    maxPeakValue = (double)0;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)(signed int)numBins); i = i + 1ll)
    {
      if(maxPeakValue > hist[i])
        tmp_if_expr_1 = maxPeakValue;

      else
        tmp_if_expr_1 = hist[i];
      maxPeakValue = tmp_if_expr_1;
    }
    *numOrientations = (unsigned long long int)0;
    i = (signed long long int)0;
    for( ; !(i >= (signed long int)(signed int)numBins); i = i + 1ll)
    {
      double h0 = hist[i];
      double hm = hist[(signed long int)(((unsigned long int)(i - (signed long int)1) + numBins) % numBins)];
      double hp = hist[(signed long int)(((unsigned long int)(i + (signed long int)1) + numBins) % numBins)];
      if(h0 > peakRelativeSize * maxPeakValue && h0 > hm && h0 > hp)
      {
        double di = (-0.5 * (hp - hm)) / ((hp + hm) - (double)2 * h0);
        double th = binExtent * ((double)i + di) + theta0;
        if(!(self->transposed == 0))
          th = th - 3.141592653589793 / (double)2;

        self->orientations[(signed long int)*numOrientations].angle = th;
        self->orientations[(signed long int)*numOrientations].score = h0;
        *numOrientations = *numOrientations + (unsigned long long int)1;
        if(*numOrientations >= 4ul)
          break;

      }

    }
    qsort((void *)self->orientations, *numOrientations, sizeof(struct _VlCovDetFeatureOrientation) /*16ul*/ , _vl_covdet_compare_orientations_descending);
    return self->orientations;
  }
}

// vl_covdet_extract_patch_for_frame
// file vl/covdet.c line 2423
extern signed int vl_covdet_extract_patch_for_frame(struct _VlCovDet *self, float *patch, unsigned long long int resolution, double extent, double sigma, struct _VlFrameOrientedEllipse frame)
{
  double A[4l] = { (double)frame.a11, (double)frame.a21, (double)frame.a12, (double)frame.a22 };
  double T[2l] = { (double)frame.x, (double)frame.y };
  double D[4l];
  double U[4l];
  double V[4l];
  vl_svd2(D, U, V, A);
  signed int return_value_vl_covdet_extract_patch_helper_1;
  return_value_vl_covdet_extract_patch_helper_1=vl_covdet_extract_patch_helper(self, (double *)(void *)0, (double *)(void *)0, patch, resolution, extent, sigma, A, T, D[(signed long int)0], D[(signed long int)3]);
  return return_value_vl_covdet_extract_patch_helper_1;
}

// vl_covdet_extract_patch_helper
// file vl/covdet.c line 2158
signed int vl_covdet_extract_patch_helper(struct _VlCovDet *self, double *sigma1, double *sigma2, float *patch, unsigned long long int resolution, double extent, double sigma, double *A_, double *T_, double d1, double d2)
{
  signed long long int o;
  signed long long int s;
  double factor;
  double sigma_;
  const float *level;
  unsigned long long int width;
  unsigned long long int height;
  double step;
  double A[4l] = { A_[(signed long int)0], A_[(signed long int)1], A_[(signed long int)2], A_[(signed long int)3] };
  double T[2l] = { T_[(signed long int)0], T_[(signed long int)1] };
  struct _VlScaleSpaceGeometry geom;
  geom=vl_scalespace_get_geometry(self->gss);
  struct _VlScaleSpaceOctaveGeometry oct;
  factor = 1.0 / (d1 < d2 ? d1 : d2);
  o = geom.firstOctave + (signed long int)1;
  for( ; geom.lastOctave >= o; o = o + 1ll)
  {
    double return_value_vl_log2_d_1;
    return_value_vl_log2_d_1=vl_log2_d_link1(sigma / (factor * geom.baseScale));
    s=vl_floor_d(return_value_vl_log2_d_1 - (double)o);
    s = s > geom.octaveFirstSubdivision ? s : geom.octaveFirstSubdivision;
    s = s < geom.octaveLastSubdivision ? s : geom.octaveLastSubdivision;
    double return_value_pow_2;
    return_value_pow_2=pow(2.0, (double)o + (double)s / (double)geom.octaveResolution);
    sigma_ = geom.baseScale * return_value_pow_2;
    if(factor * sigma_ > sigma)
    {
      o = o - 1ll;
      break;
    }

  }
  o = o < geom.lastOctave ? o : geom.lastOctave;
  double return_value_vl_log2_d_3;
  return_value_vl_log2_d_3=vl_log2_d_link1(sigma / (factor * geom.baseScale));
  s=vl_floor_d(return_value_vl_log2_d_3 - (double)o);
  s = s > geom.octaveFirstSubdivision ? s : geom.octaveFirstSubdivision;
  s = s < geom.octaveLastSubdivision ? s : geom.octaveLastSubdivision;
  double return_value_pow_4;
  return_value_pow_4=pow(2.0, (double)o + (double)s / (double)geom.octaveResolution);
  sigma_ = geom.baseScale * return_value_pow_4;
  if(!(sigma1 == ((double *)NULL)))
    *sigma1 = sigma_ / d1;

  if(!(sigma2 == ((double *)NULL)))
    *sigma2 = sigma_ / d2;

  level=vl_scalespace_get_level(self->gss, o, s);
  oct=vl_scalespace_get_octave_geometry(self->gss, o);
  width = oct.width;
  height = oct.height;
  step = oct.step;
  A[(signed long int)0] = A[(signed long int)0] / step;
  A[(signed long int)1] = A[(signed long int)1] / step;
  A[(signed long int)2] = A[(signed long int)2] / step;
  A[(signed long int)3] = A[(signed long int)3] / step;
  T[(signed long int)0] = T[(signed long int)0] / step;
  T[(signed long int)1] = T[(signed long int)1] / step;
  signed long long int x0i;
  signed long long int y0i;
  signed long long int x1i;
  signed long long int y1i;
  double x0 = +vl_infinity_d_link1.value;
  double x1 = -vl_infinity_d_link1.value;
  double y0 = +vl_infinity_d_link1.value;
  double y1 = -vl_infinity_d_link1.value;
  double boxx[4l] = { extent, extent, -extent, -extent };
  double boxy[4l] = { -extent, extent, extent, -extent };
  signed int i = 0;
  for( ; !(i >= 4); i = i + 1)
  {
    double x = A[(signed long int)0] * boxx[(signed long int)i] + A[(signed long int)2] * boxy[(signed long int)i] + T[(signed long int)0];
    double y = A[(signed long int)1] * boxx[(signed long int)i] + A[(signed long int)3] * boxy[(signed long int)i] + T[(signed long int)1];
    x0 = x0 < x ? x0 : x;
    x1 = x1 > x ? x1 : x;
    y0 = y0 < y ? y0 : y;
    y1 = y1 > y ? y1 : y;
  }
  double return_value_floor_5;
  return_value_floor_5=floor(x0);
  x0i = (signed long long int)(return_value_floor_5 - (double)1);
  double return_value_floor_6;
  return_value_floor_6=floor(y0);
  y0i = (signed long long int)(return_value_floor_6 - (double)1);
  double return_value_ceil_7;
  return_value_ceil_7=ceil(x1);
  x1i = (signed long long int)(return_value_ceil_7 + (double)1);
  double return_value_ceil_8;
  return_value_ceil_8=ceil(y1);
  y1i = (signed long long int)(return_value_ceil_8 + (double)1);
  signed int return_value_vl_set_last_error_9;
  float *tmp_post_10;
  float *tmp_post_11;
  const float *tmp_post_12;
  float *tmp_post_13;
  if(!(x0i >= 0l) || !(y0i >= 0l) || !((signed long int)((signed int)height + -1) >= y1i) || !((signed long int)((signed int)width + -1) >= x1i))
  {
    signed long long int vl_covdet_extract_patch_helper__1__2__2__xi;
    signed long long int vl_covdet_extract_patch_helper__1__2__2__yi;
    signed long long int padx0 = (signed long int)0 > -x0i ? (signed long int)0 : -x0i;
    signed long long int pady0 = (signed long int)0 > -y0i ? (signed long int)0 : -y0i;
    signed long long int padx1 = (signed long int)0 > x1i - (signed long int)((signed int)width - 1) ? (signed long int)0 : x1i - (signed long int)((signed int)width - 1);
    signed long long int pady1 = (signed long int)0 > y1i - (signed long int)((signed int)height - 1) ? (signed long int)0 : y1i - (signed long int)((signed int)height - 1);
    signed long long int patchWidth = (x1i - x0i) + (signed long int)1;
    signed long long int patchHeight = (y1i - y0i) + (signed long int)1;
    unsigned long long int patchBufferSize = (unsigned long int)(patchWidth * patchHeight) * sizeof(float) /*4ul*/ ;
    if(!(self->patchBufferSize >= patchBufferSize))
    {
      signed int err;
      err=_vl_resize_buffer((void **)&self->patch, &self->patchBufferSize, patchBufferSize);
      if(!(err == 0))
      {
        return_value_vl_set_last_error_9=vl_set_last_error(2, (const char *)(void *)0);
        return return_value_vl_set_last_error_9;
      }

    }

    if(!(pady0 >= patchHeight + -pady1))
    {
      vl_covdet_extract_patch_helper__1__2__2__yi = y0i + pady0;
      for( ; !(vl_covdet_extract_patch_helper__1__2__2__yi >= patchHeight + y0i + -pady1); vl_covdet_extract_patch_helper__1__2__2__yi = vl_covdet_extract_patch_helper__1__2__2__yi + 1ll)
      {
        float *dst = self->patch + (vl_covdet_extract_patch_helper__1__2__2__yi - y0i) * patchWidth;
        const float *src = level + (signed long int)((unsigned long int)vl_covdet_extract_patch_helper__1__2__2__yi * width) + (((signed long int)0 > x0i ? (signed long int)0 : x0i) < (signed long int)((signed int)width - 1) ? ((signed long int)0 > x0i ? (signed long int)0 : x0i) : (signed long int)((signed int)width - 1));
        vl_covdet_extract_patch_helper__1__2__2__xi = x0i;
        for( ; !(vl_covdet_extract_patch_helper__1__2__2__xi >= padx0 + x0i); vl_covdet_extract_patch_helper__1__2__2__xi = vl_covdet_extract_patch_helper__1__2__2__xi + 1ll)
        {
          tmp_post_10 = dst;
          dst = dst + 1l;
          *tmp_post_10 = *src;
        }
        for( ; !(vl_covdet_extract_patch_helper__1__2__2__xi >= patchWidth + x0i + -padx1 + -2l); vl_covdet_extract_patch_helper__1__2__2__xi = vl_covdet_extract_patch_helper__1__2__2__xi + 1ll)
        {
          tmp_post_11 = dst;
          dst = dst + 1l;
          tmp_post_12 = src;
          src = src + 1l;
          *tmp_post_11 = *tmp_post_12;
        }
        for( ; !(vl_covdet_extract_patch_helper__1__2__2__xi >= patchWidth + x0i); vl_covdet_extract_patch_helper__1__2__2__xi = vl_covdet_extract_patch_helper__1__2__2__xi + 1ll)
        {
          tmp_post_13 = dst;
          dst = dst + 1l;
          *tmp_post_13 = *src;
        }
      }
      vl_covdet_extract_patch_helper__1__2__2__yi = (signed long long int)0;
      for( ; !(vl_covdet_extract_patch_helper__1__2__2__yi >= pady0); vl_covdet_extract_patch_helper__1__2__2__yi = vl_covdet_extract_patch_helper__1__2__2__yi + 1ll)
        memcpy((void *)(self->patch + vl_covdet_extract_patch_helper__1__2__2__yi * patchWidth), (const void *)(self->patch + pady0 * patchWidth), (unsigned long int)patchWidth * sizeof(float) /*4ul*/ );
      vl_covdet_extract_patch_helper__1__2__2__yi = patchHeight - pady1;
      for( ; !(vl_covdet_extract_patch_helper__1__2__2__yi >= patchHeight); vl_covdet_extract_patch_helper__1__2__2__yi = vl_covdet_extract_patch_helper__1__2__2__yi + 1ll)
        memcpy((void *)(self->patch + vl_covdet_extract_patch_helper__1__2__2__yi * patchWidth), (const void *)(self->patch + ((patchHeight - pady1) - (signed long int)1) * patchWidth), (unsigned long int)patchWidth * sizeof(float) /*4ul*/ );
    }

    else
      memset((void *)self->patch, 0, self->patchBufferSize);
    level = self->patch;
    width = (unsigned long long int)patchWidth;
    height = (unsigned long long int)patchHeight;
    T[(signed long int)0] = T[(signed long int)0] - (double)x0i;
    T[(signed long int)1] = T[(signed long int)1] - (double)y0i;
  }

  float *pt = patch;
  double yhat = -extent;
  signed long long int xxi;
  signed long long int yyi;
  double stephat = extent / (double)resolution;
  yyi = (signed long long int)0;
  float *tmp_post_14;
  for( ; !(yyi >= (signed long int)(2 * (signed int)resolution + 1)); yyi = yyi + 1ll)
  {
    double xhat = -extent;
    double rx = A[(signed long int)2] * yhat + T[(signed long int)0];
    double ry = A[(signed long int)3] * yhat + T[(signed long int)1];
    xxi = (signed long long int)0;
    for( ; !(xxi >= (signed long int)(2 * (signed int)resolution + 1)); xxi = xxi + 1ll)
    {
      double vl_covdet_extract_patch_helper__1__3__1__1__1__1__x = A[(signed long int)0] * xhat + rx;
      double vl_covdet_extract_patch_helper__1__3__1__1__1__1__y = A[(signed long int)1] * xhat + ry;
      signed long long int xi;
      xi=vl_floor_d(vl_covdet_extract_patch_helper__1__3__1__1__1__1__x);
      signed long long int yi;
      yi=vl_floor_d(vl_covdet_extract_patch_helper__1__3__1__1__1__1__y);
      double i00 = (double)level[(signed long int)((unsigned long int)yi * width + (unsigned long int)xi)];
      double i10 = (double)level[(signed long int)((unsigned long int)yi * width + (unsigned long int)xi + (unsigned long int)1)];
      double i01 = (double)level[(signed long int)((unsigned long int)(yi + (signed long int)1) * width + (unsigned long int)xi)];
      double i11 = (double)level[(signed long int)((unsigned long int)(yi + (signed long int)1) * width + (unsigned long int)xi + (unsigned long int)1)];
      double wx = vl_covdet_extract_patch_helper__1__3__1__1__1__1__x - (double)xi;
      double wy = vl_covdet_extract_patch_helper__1__3__1__1__1__1__y - (double)yi;
      tmp_post_14 = pt;
      pt = pt + 1l;
      *tmp_post_14 = (float)((1.0 - wy) * ((1.0 - wx) * i00 + wx * i10) + wy * ((1.0 - wx) * i01 + wx * i11));
      xhat = xhat + stephat;
    }
    yhat = yhat + stephat;
  }
  return 0;
}

// vl_covdet_get_aa_accurate_smoothing
// file vl/covdet.c line 3280
extern signed int vl_covdet_get_aa_accurate_smoothing(const struct _VlCovDet *self)
{
  return self->aaAccurateSmoothing;
}

// vl_covdet_get_css
// file vl/covdet.c line 3371
extern struct _VlScaleSpace * vl_covdet_get_css(const struct _VlCovDet *self)
{
  return self->css;
}

// vl_covdet_get_edge_threshold
// file vl/covdet.c line 3154
extern double vl_covdet_get_edge_threshold(const struct _VlCovDet *self)
{
  return self->edgeThreshold;
}

// vl_covdet_get_features
// file vl/covdet.c line 3345
extern void * vl_covdet_get_features(struct _VlCovDet *self)
{
  return (void *)self->features;
}

// vl_covdet_get_first_octave
// file vl/covdet.c line 3229
extern signed long long int vl_covdet_get_first_octave(const struct _VlCovDet *self)
{
  return self->firstOctave;
}

// vl_covdet_get_gss
// file vl/covdet.c line 3358
extern struct _VlScaleSpace * vl_covdet_get_gss(const struct _VlCovDet *self)
{
  return self->gss;
}

// vl_covdet_get_laplacian_peak_threshold
// file vl/covdet.c line 3205
double vl_covdet_get_laplacian_peak_threshold(const struct _VlCovDet *self)
{
  return self->lapPeakThreshold;
}

// vl_covdet_get_laplacian_scales_statistics
// file vl/covdet.c line 3387
extern const unsigned long long int * vl_covdet_get_laplacian_scales_statistics(const struct _VlCovDet *self, unsigned long long int *numScales)
{
  *numScales = (unsigned long long int)4;
  return self->numFeaturesWithNumScales;
}

// vl_covdet_get_non_extrema_suppression_threshold
// file vl/covdet.c line 3303
extern double vl_covdet_get_non_extrema_suppression_threshold(const struct _VlCovDet *self)
{
  return self->nonExtremaSuppression;
}

// vl_covdet_get_num_features
// file vl/covdet.c line 3336
extern unsigned long long int vl_covdet_get_num_features(const struct _VlCovDet *self)
{
  return self->numFeatures;
}

// vl_covdet_get_num_non_extrema_suppressed
// file vl/covdet.c line 3325
extern unsigned long long int vl_covdet_get_num_non_extrema_suppressed(const struct _VlCovDet *self)
{
  return self->numNonExtremaSuppressed;
}

// vl_covdet_get_octave_resolution
// file vl/covdet.c line 3254
extern unsigned long long int vl_covdet_get_octave_resolution(const struct _VlCovDet *self)
{
  return self->octaveResolution;
}

// vl_covdet_get_peak_threshold
// file vl/covdet.c line 3178
extern double vl_covdet_get_peak_threshold(const struct _VlCovDet *self)
{
  return self->peakThreshold;
}

// vl_covdet_get_transposed
// file vl/covdet.c line 3133
extern signed int vl_covdet_get_transposed(const struct _VlCovDet *self)
{
  return self->transposed;
}

// vl_covdet_new
// file vl/covdet.c line 1507
extern struct _VlCovDet * vl_covdet_new(enum _VlCovDetMethod method)
{
  struct _VlCovDet *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(struct _VlCovDet) /*75112ul*/ , (unsigned long int)1);
  self = (struct _VlCovDet *)return_value_vl_calloc_1;
  self->method = method;
  self->octaveResolution = (unsigned long long int)3;
  self->firstOctave = (signed long long int)-1;
  switch((signed int)self->method)
  {
    case VL_COVDET_METHOD_DOG:
    {
      self->peakThreshold = 0.01;
      self->edgeThreshold = 10.0;
      self->lapPeakThreshold = (double)0;
      goto __CPROVER_DUMP_L4;
    }
    case VL_COVDET_METHOD_HARRIS_LAPLACE:

    case VL_COVDET_METHOD_MULTISCALE_HARRIS:
    {
      self->peakThreshold = 0.000002;
      self->edgeThreshold = 10.0;
      self->lapPeakThreshold = 0.01;
      goto __CPROVER_DUMP_L4;
    }
    case VL_COVDET_METHOD_HESSIAN:

    case VL_COVDET_METHOD_HESSIAN_LAPLACE:

    case VL_COVDET_METHOD_MULTISCALE_HESSIAN:
    {
      self->peakThreshold = 0.003;
      self->edgeThreshold = 10.0;
      self->lapPeakThreshold = 0.01;
    }
    default:
    {

    __CPROVER_DUMP_L4:
      ;
      self->nonExtremaSuppression = 0.5;
      self->features = (struct _VlCovDetFeature *)(void *)0;
      self->numFeatures = (unsigned long long int)0;
      self->numFeatureBufferSize = (unsigned long long int)0;
      self->patch = (float *)(void *)0;
      self->patchBufferSize = (unsigned long long int)0;
      self->transposed = 0;
      self->aaAccurateSmoothing = 0;
      const signed long long int w = (const signed long long int)20;
      signed long long int i;
      signed long long int j;
      double step = (2.0 * (double)(3 * 3)) / (double)((signed long int)2 * w + (signed long int)1);
      double sigma = (double)3;
      j = -w;
      for( ; w >= j; j = j + 1ll)
      {
        i = -w;
        for( ; w >= i; i = i + 1ll)
        {
          double dx = ((double)i * step) / sigma;
          double dy = ((double)j * step) / sigma;
          double return_value_exp_2;
          return_value_exp_2=exp(-0.5 * (dx * dx + dy * dy));
          self->aaMask[i + w + ((signed long int)2 * w + (signed long int)1) * (j + w)] = (float)return_value_exp_2;
        }
      }
      signed long long int s = (signed long long int)0;
      for( ; !(s >= 10l); s = s + 1ll)
      {
        double sigmaLap;
        sigmaLap=pow(2.0, -0.5 + (double)s / (double)(10 - 1));
        double sigmaImage;
        double return_value_sqrt_3;
        return_value_sqrt_3=sqrt(2.0);
        sigmaImage = 1.0 / return_value_sqrt_3;
        const double vl_covdet_new__1__3__1__1__step = 0.5 * sigmaImage;
        double sigmaDelta;
        sigmaDelta=sqrt(sigmaLap * sigmaLap - sigmaImage * sigmaImage);
        const unsigned long long int vl_covdet_new__1__3__1__1__w = (const unsigned long long int)16;
        const unsigned long long int num = (unsigned long int)2 * vl_covdet_new__1__3__1__1__w + (unsigned long int)1;
        float *pt = self->laplacians + (signed long int)((unsigned long int)s * num * num);
        memset((void *)pt, 0, num * num * sizeof(float) /*4ul*/ );
        pt[(signed long int)((unsigned long int)0 + vl_covdet_new__1__3__1__1__w + ((unsigned long int)0 + vl_covdet_new__1__3__1__1__w) * ((unsigned long int)2 * vl_covdet_new__1__3__1__1__w + (unsigned long int)1))] = (float)-4.0;
        pt[(signed long int)((unsigned long int)-1 + vl_covdet_new__1__3__1__1__w + ((unsigned long int)0 + vl_covdet_new__1__3__1__1__w) * ((unsigned long int)2 * vl_covdet_new__1__3__1__1__w + (unsigned long int)1))] = (float)1.0;
        pt[(signed long int)((unsigned long int)+1 + vl_covdet_new__1__3__1__1__w + ((unsigned long int)0 + vl_covdet_new__1__3__1__1__w) * ((unsigned long int)2 * vl_covdet_new__1__3__1__1__w + (unsigned long int)1))] = (float)1.0;
        pt[(signed long int)((unsigned long int)0 + vl_covdet_new__1__3__1__1__w + ((unsigned long int)1 + vl_covdet_new__1__3__1__1__w) * ((unsigned long int)2 * vl_covdet_new__1__3__1__1__w + (unsigned long int)1))] = (float)1.0;
        pt[(signed long int)((unsigned long int)0 + vl_covdet_new__1__3__1__1__w + ((unsigned long int)-1 + vl_covdet_new__1__3__1__1__w) * ((unsigned long int)2 * vl_covdet_new__1__3__1__1__w + (unsigned long int)1))] = (float)1.0;
        vl_imsmooth_f(pt, num, pt, num, num, num, sigmaDelta / vl_covdet_new__1__3__1__1__step, sigmaDelta / vl_covdet_new__1__3__1__1__step);
      }
      return self;
    }
  }
}

// vl_covdet_put_image
// file vl/covdet.c line 1683
extern signed int vl_covdet_put_image(struct _VlCovDet *self, const float *image, unsigned long long int width, unsigned long long int height)
{
  const unsigned long long int minOctaveSize = (const unsigned long long int)16;
  signed long long int lastOctave;
  signed long long int octaveFirstSubdivision;
  signed long long int octaveLastSubdivision;
  struct _VlScaleSpaceGeometry geom;
  geom=vl_scalespace_get_default_geometry(width, height);
  double return_value_vl_log2_d_1;
  return_value_vl_log2_d_1=vl_log2_d_link1(((double)width - (double)1 < (double)height - (double)1 ? (double)width - (double)1 : (double)height - (double)1) / (double)(minOctaveSize - (unsigned long int)1));
  lastOctave=vl_floor_d(return_value_vl_log2_d_1);
  if((signed int)self->method == VL_COVDET_METHOD_DOG)
  {
    octaveFirstSubdivision = (signed long long int)-1;
    octaveLastSubdivision = (signed long long int)(self->octaveResolution + (unsigned long int)1);
  }

  else
    if((signed int)self->method == VL_COVDET_METHOD_HESSIAN)
    {
      octaveFirstSubdivision = (signed long long int)-1;
      octaveLastSubdivision = (signed long long int)self->octaveResolution;
    }

    else
    {
      octaveFirstSubdivision = (signed long long int)0;
      octaveLastSubdivision = (signed long long int)(self->octaveResolution - (unsigned long int)1);
    }
  geom.width = width;
  geom.height = height;
  geom.firstOctave = self->firstOctave;
  geom.lastOctave = lastOctave;
  geom.octaveResolution = self->octaveResolution;
  geom.octaveFirstSubdivision = octaveFirstSubdivision;
  geom.octaveLastSubdivision = octaveLastSubdivision;
  _Bool tmp_if_expr_4;
  struct _VlScaleSpaceGeometry return_value_vl_scalespace_get_geometry_2;
  signed int return_value_vl_scalespacegeometry_is_equal_3;
  if(self->gss == ((struct _VlScaleSpace *)NULL))
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_vl_scalespace_get_geometry_2=vl_scalespace_get_geometry(self->gss);
    return_value_vl_scalespacegeometry_is_equal_3=vl_scalespacegeometry_is_equal(geom, return_value_vl_scalespace_get_geometry_2);
    tmp_if_expr_4 = !(return_value_vl_scalespacegeometry_is_equal_3 != 0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_4)
  {
    if(!(self->gss == ((struct _VlScaleSpace *)NULL)))
      vl_scalespace_delete(self->gss);

    self->gss=vl_scalespace_new_with_geometry(geom);
    if(!(self->gss == ((struct _VlScaleSpace *)NULL)))
      goto __CPROVER_DUMP_L7;

    return 2;
  }

  else
  {

  __CPROVER_DUMP_L7:
    ;
    vl_scalespace_put_image(self->gss, image);
    return 0;
  }
}

// vl_covdet_reset
// file vl/covdet.c line 1610
extern void vl_covdet_reset(struct _VlCovDet *self)
{
  if(!(self->features == ((struct _VlCovDetFeature *)NULL)))
  {
    vl_free((void *)self->features);
    self->features = (struct _VlCovDetFeature *)(void *)0;
  }

  if(!(self->css == ((struct _VlScaleSpace *)NULL)))
  {
    vl_scalespace_delete(self->css);
    self->css = (struct _VlScaleSpace *)(void *)0;
  }

  if(!(self->gss == ((struct _VlScaleSpace *)NULL)))
  {
    vl_scalespace_delete(self->gss);
    self->gss = (struct _VlScaleSpace *)(void *)0;
  }

}

// vl_covdet_set_aa_accurate_smoothing
// file vl/covdet.c line 3291
extern void vl_covdet_set_aa_accurate_smoothing(struct _VlCovDet *self, signed int x)
{
  self->aaAccurateSmoothing = x;
}

// vl_covdet_set_edge_threshold
// file vl/covdet.c line 3166
extern void vl_covdet_set_edge_threshold(struct _VlCovDet *self, double edgeThreshold)
{
  self->edgeThreshold = edgeThreshold;
}

// vl_covdet_set_first_octave
// file vl/covdet.c line 3241
extern void vl_covdet_set_first_octave(struct _VlCovDet *self, signed long long int o)
{
  self->firstOctave = o;
  vl_covdet_reset(self);
}

// vl_covdet_set_laplacian_peak_threshold
// file vl/covdet.c line 3217
extern void vl_covdet_set_laplacian_peak_threshold(struct _VlCovDet *self, double peakThreshold)
{
  self->lapPeakThreshold = peakThreshold;
}

// vl_covdet_set_non_extrema_suppression_threshold
// file vl/covdet.c line 3314
extern void vl_covdet_set_non_extrema_suppression_threshold(struct _VlCovDet *self, double x)
{
  self->nonExtremaSuppression = x;
}

// vl_covdet_set_octave_resolution
// file vl/covdet.c line 3267
extern void vl_covdet_set_octave_resolution(struct _VlCovDet *self, unsigned long long int r)
{
  self->octaveResolution = r;
  vl_covdet_reset(self);
}

// vl_covdet_set_peak_threshold
// file vl/covdet.c line 3190
extern void vl_covdet_set_peak_threshold(struct _VlCovDet *self, double peakThreshold)
{
  self->peakThreshold = peakThreshold;
}

// vl_covdet_set_transposed
// file vl/covdet.c line 3143
extern void vl_covdet_set_transposed(struct _VlCovDet *self, signed int t)
{
  self->transposed = t;
}

// vl_cpu_has_avx
// file vl/generic.c line 1092
extern signed int vl_cpu_has_avx(void)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return return_value_vl_get_state_1->cpuInfo.hasAVX;
}

// vl_cpu_has_sse2
// file vl/generic.c line 1120
extern signed int vl_cpu_has_sse2(void)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return return_value_vl_get_state_1->cpuInfo.hasSSE2;
}

// vl_cpu_has_sse3
// file vl/generic.c line 1106
extern signed int vl_cpu_has_sse3(void)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return return_value_vl_get_state_1->cpuInfo.hasSSE3;
}

// vl_enumeration_get
// file vl/stringop.c line 409
extern struct _VlEnumerator * vl_enumeration_get(const struct _VlEnumerator *enumeration, const char *name)
{
  signed int tmp_statement_expression_1;
  for( ; !(enumeration->name == ((const char *)NULL)); enumeration = enumeration + 1l)
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp_2;
    return_value___builtin_strcmp_2=__builtin_strcmp(name, enumeration->name);
    tmp_statement_expression_1 = return_value___builtin_strcmp_2;
    if(tmp_statement_expression_1 == 0)
      return (struct _VlEnumerator *)enumeration;

  }
  return (struct _VlEnumerator *)(void *)0;
}

// vl_enumeration_get_by_value
// file vl/stringop.c line 453
extern struct _VlEnumerator * vl_enumeration_get_by_value(const struct _VlEnumerator *enumeration, signed long long int value)
{
  for( ; !(enumeration->name == ((const char *)NULL)); enumeration = enumeration + 1l)
    if(enumeration->value == value)
      return (struct _VlEnumerator *)enumeration;

  return (struct _VlEnumerator *)(void *)0;
}

// vl_enumeration_get_casei
// file vl/stringop.c line 431
extern struct _VlEnumerator * vl_enumeration_get_casei(const struct _VlEnumerator *enumeration, const char *name)
{
  while(!(enumeration->name == ((const char *)NULL)))
  {
    signed int return_value_vl_string_casei_cmp_1;
    return_value_vl_string_casei_cmp_1=vl_string_casei_cmp(name, enumeration->name);
    if(return_value_vl_string_casei_cmp_1 == 0)
      return (struct _VlEnumerator *)enumeration;

    enumeration = enumeration + 1l;
  }
  return (struct _VlEnumerator *)(void *)0;
}

// vl_eval_vector_comparison_on_all_pairs_d
// file vl/mathop.c line 555
extern void vl_eval_vector_comparison_on_all_pairs_d(double *result, unsigned long long int dimension, const double *X, unsigned long long int numDataX, const double *Y, unsigned long long int numDataY, double (*function)(unsigned long long int, const double *, const double *))
{
  unsigned long long int xi;
  unsigned long long int yi;
  double *tmp_post_1;
  if(!(dimension == 0ul))
  {
    if(!(numDataX == 0ul))
    {
      if(!(Y == ((const double *)NULL)))
      {
        if(numDataY == 0ul)
          goto __CPROVER_DUMP_L14;

        yi = (unsigned long long int)0;
        for( ; !(yi >= numDataY); yi = yi + 1ull)
        {
          xi = (unsigned long long int)0;
          if(!(xi >= numDataX))
          {
            tmp_post_1 = result;
            result = result + 1l;
            *tmp_post_1=function(dimension, X, Y);
            X = X + (signed long int)dimension;
            xi = xi + 1ull;
          }

          X = X - (signed long int)(dimension * numDataX);
          Y = Y + (signed long int)dimension;
        }
      }

      else
      {
        double *resultTransp = result;
        Y = X;
        yi = (unsigned long long int)0;
        for( ; !(yi >= numDataX); yi = yi + 1ull)
        {
          xi = (unsigned long long int)0;
          if(yi >= xi)
          {
            double z;
            z=function(dimension, X, Y);
            X = X + (signed long int)dimension;
            *result = z;
            *resultTransp = z;
            result = result + (signed long int)1;
            resultTransp = resultTransp + (signed long int)numDataX;
            xi = xi + 1ull;
          }

          X = X - (signed long int)(dimension * (yi + (unsigned long int)1));
          Y = Y + (signed long int)dimension;
          result = result + (signed long int)(numDataX - (yi + (unsigned long int)1));
          resultTransp = resultTransp + (signed long int)((unsigned long int)1 - (yi + (unsigned long int)1) * numDataX);
        }
      }
    }

  }


__CPROVER_DUMP_L14:
  ;
}

// vl_eval_vector_comparison_on_all_pairs_f
// file vl/mathop.c line 555
extern void vl_eval_vector_comparison_on_all_pairs_f(float *result, unsigned long long int dimension, const float *X, unsigned long long int numDataX, const float *Y, unsigned long long int numDataY, float (*function)(unsigned long long int, const float *, const float *))
{
  unsigned long long int xi;
  unsigned long long int yi;
  float *tmp_post_1;
  if(!(dimension == 0ul))
  {
    if(!(numDataX == 0ul))
    {
      if(!(Y == ((const float *)NULL)))
      {
        if(numDataY == 0ul)
          goto __CPROVER_DUMP_L14;

        yi = (unsigned long long int)0;
        for( ; !(yi >= numDataY); yi = yi + 1ull)
        {
          xi = (unsigned long long int)0;
          if(!(xi >= numDataX))
          {
            tmp_post_1 = result;
            result = result + 1l;
            *tmp_post_1=function(dimension, X, Y);
            X = X + (signed long int)dimension;
            xi = xi + 1ull;
          }

          X = X - (signed long int)(dimension * numDataX);
          Y = Y + (signed long int)dimension;
        }
      }

      else
      {
        float *resultTransp = result;
        Y = X;
        yi = (unsigned long long int)0;
        for( ; !(yi >= numDataX); yi = yi + 1ull)
        {
          xi = (unsigned long long int)0;
          if(yi >= xi)
          {
            float z;
            z=function(dimension, X, Y);
            X = X + (signed long int)dimension;
            *result = z;
            *resultTransp = z;
            result = result + (signed long int)1;
            resultTransp = resultTransp + (signed long int)numDataX;
            xi = xi + 1ull;
          }

          X = X - (signed long int)(dimension * (yi + (unsigned long int)1));
          Y = Y + (signed long int)dimension;
          result = result + (signed long int)(numDataX - (yi + (unsigned long int)1));
          resultTransp = resultTransp + (signed long int)((unsigned long int)1 - (yi + (unsigned long int)1) * numDataX);
        }
      }
    }

  }


__CPROVER_DUMP_L14:
  ;
}

// vl_fast_atan2_f
// file vl/mathop.h line 408
static inline float vl_fast_atan2_f(float y, float x)
{
  float angle;
  float r;
  const float c3 = 0.1821F;
  const float c1 = 0.9675F;
  float abs_y;
  float return_value_vl_abs_f_1;
  return_value_vl_abs_f_1=vl_abs_f_link1(y);
  abs_y = return_value_vl_abs_f_1 + 1.19209290E-07F;
  if(x >= 0.000000f)
  {
    r = (x - abs_y) / (x + abs_y);
    angle = (float)(3.141592653589793 / (double)4);
  }

  else
  {
    r = (x + abs_y) / (abs_y - x);
    angle = (float)(((double)3 * 3.141592653589793) / (double)4);
  }
  angle = angle + (c3 * r * r - c1) * r;
  return y < (float)0 ? -angle : angle;
}

// vl_fast_resqrt_f
// file vl/mathop.h line 480
static inline float vl_fast_resqrt_f(float x)
{
  /* tag-#anon#lUN[F32'x'||S32'i'|] */
union anonymous_10
{
  // x
  float x;
  // i
  signed int i;
};

/* */
  ;
  union anonymous_10 u;
  float xhalf = (float)0.5 * x;
  u.x = x;
  u.i = 0x5f3759df - (u.i >> 1);
  u.x = u.x * ((float)1.5 - xhalf * u.x * u.x);
  u.x = u.x * ((float)1.5 - xhalf * u.x * u.x);
  return u.x;
}

// vl_fast_sqrt_f
// file vl/mathop.h line 545
static inline float vl_fast_sqrt_f(float x)
{
  float tmp_if_expr_2;
  float return_value_vl_fast_resqrt_f_1;
  if((double)x < 1e-8)
    tmp_if_expr_2 = (float)0;

  else
  {
    return_value_vl_fast_resqrt_f_1=vl_fast_resqrt_f(x);
    tmp_if_expr_2 = x * return_value_vl_fast_resqrt_f_1;
  }
  return tmp_if_expr_2;
}

// vl_fast_sqrt_ui64
// file vl/mathop.h line 598
static inline unsigned long long int vl_fast_sqrt_ui64(unsigned long long int x)
{
  unsigned long long int y = (unsigned long long int)0;
  unsigned long long int tmp = (unsigned long long int)0;
  signed int twice_k = (signed int)((unsigned long int)8 * sizeof(unsigned long long int) /*8ul*/  - (unsigned long int)2);
  for( ; twice_k >= 0; twice_k = twice_k - 2)
  {
    y = y << 1;
    tmp = (unsigned long int)2 * y + (unsigned long int)1 << twice_k;
    if(x >= tmp)
    {
      x = x - tmp;
      y = y + (unsigned long long int)1;
    }

  }
  return y;
}

// vl_find_local_extrema_2
// file vl/covdet.c line 1147
extern unsigned long long int vl_find_local_extrema_2(signed long long int **extrema, unsigned long long int *bufferSize, const float *map, unsigned long long int width, unsigned long long int height, double threshold)
{
  signed long long int x;
  signed long long int y;
  const unsigned long long int xo = (const unsigned long long int)1;
  const unsigned long long int yo = width;
  const float *pt = map + (signed long int)xo + (signed long int)yo;
  unsigned long long int numExtrema = (unsigned long long int)0;
  unsigned long long int requiredSize = (unsigned long long int)0;
  y = (signed long long int)1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  for( ; !(y >= (signed long int)((signed int)height + -1)); y = y + 1ll)
  {
    x = (signed long long int)1;
    for( ; !(x >= (signed long int)((signed int)width + -1)); x = x + 1ll)
    {
      float value = *pt;
      if((double)value >= threshold)
        tmp_if_expr_1 = value > pt[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
        tmp_if_expr_2 = value > *(pt - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = value > pt[(signed long int)yo] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = value > *(pt - (signed long int)yo) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_4 = (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = value > (pt + (signed long int)yo)[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
        tmp_if_expr_6 = value > *((pt + (signed long int)yo) - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_6 = (_Bool)0;
      if(tmp_if_expr_6)
        tmp_if_expr_7 = value > (pt - (signed long int)yo)[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_7 = (_Bool)0;
      if(tmp_if_expr_7)
        tmp_if_expr_8 = value > *((pt - (signed long int)yo) - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
        tmp_if_expr_17 = (_Bool)1;

      else
      {
        if((double)value <= -threshold)
          tmp_if_expr_9 = value < pt[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_9 = (_Bool)0;
        if(tmp_if_expr_9)
          tmp_if_expr_10 = value < *(pt - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_10 = (_Bool)0;
        if(tmp_if_expr_10)
          tmp_if_expr_11 = value < pt[(signed long int)yo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_11 = (_Bool)0;
        if(tmp_if_expr_11)
          tmp_if_expr_12 = value < *(pt - (signed long int)yo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_12 = (_Bool)0;
        if(tmp_if_expr_12)
          tmp_if_expr_13 = value < (pt + (signed long int)yo)[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_13 = (_Bool)0;
        if(tmp_if_expr_13)
          tmp_if_expr_14 = value < *((pt + (signed long int)yo) - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_14 = (_Bool)0;
        if(tmp_if_expr_14)
          tmp_if_expr_15 = value < (pt - (signed long int)yo)[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_15 = (_Bool)0;
        if(tmp_if_expr_15)
          tmp_if_expr_16 = value < *((pt - (signed long int)yo) - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_16 = (_Bool)0;
        tmp_if_expr_17 = tmp_if_expr_16 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_17)
      {
        numExtrema = numExtrema + 1ull;
        requiredSize = requiredSize + sizeof(signed long long int) /*8ul*/  * (unsigned long int)2;
        if(!(*bufferSize >= requiredSize))
        {
          signed int err;
          err=_vl_resize_buffer((void **)extrema, bufferSize, requiredSize + (unsigned long int)(2000 * 2) * sizeof(signed long long int) /*8ul*/ );
          if(!(err == 0))
            abort();

        }

        (*extrema)[(signed long int)((unsigned long int)2 * (numExtrema - (unsigned long int)1) + (unsigned long int)0)] = x;
        (*extrema)[(signed long int)((unsigned long int)2 * (numExtrema - (unsigned long int)1) + (unsigned long int)1)] = y;
      }

      pt = pt + (signed long int)xo;
    }
    pt = pt + (signed long int)((unsigned long int)2 * xo);
  }
  return numExtrema;
}

// vl_find_local_extrema_3
// file vl/covdet.c line 1057
extern unsigned long long int vl_find_local_extrema_3(signed long long int **extrema, unsigned long long int *bufferSize, const float *map, unsigned long long int width, unsigned long long int height, unsigned long long int depth, double threshold)
{
  signed long long int x;
  signed long long int y;
  signed long long int z;
  const unsigned long long int xo = (const unsigned long long int)1;
  const unsigned long long int yo = width;
  const unsigned long long int zo = width * height;
  const float *pt = map + (signed long int)xo + (signed long int)yo + (signed long int)zo;
  unsigned long long int numExtrema = (unsigned long long int)0;
  unsigned long long int requiredSize = (unsigned long long int)0;
  z = (signed long long int)1;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_18;
  _Bool tmp_if_expr_19;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_22;
  _Bool tmp_if_expr_23;
  _Bool tmp_if_expr_24;
  _Bool tmp_if_expr_25;
  _Bool tmp_if_expr_26;
  _Bool tmp_if_expr_53;
  _Bool tmp_if_expr_27;
  _Bool tmp_if_expr_28;
  _Bool tmp_if_expr_29;
  _Bool tmp_if_expr_30;
  _Bool tmp_if_expr_31;
  _Bool tmp_if_expr_32;
  _Bool tmp_if_expr_33;
  _Bool tmp_if_expr_34;
  _Bool tmp_if_expr_35;
  _Bool tmp_if_expr_36;
  _Bool tmp_if_expr_37;
  _Bool tmp_if_expr_38;
  _Bool tmp_if_expr_39;
  _Bool tmp_if_expr_40;
  _Bool tmp_if_expr_41;
  _Bool tmp_if_expr_42;
  _Bool tmp_if_expr_43;
  _Bool tmp_if_expr_44;
  _Bool tmp_if_expr_45;
  _Bool tmp_if_expr_46;
  _Bool tmp_if_expr_47;
  _Bool tmp_if_expr_48;
  _Bool tmp_if_expr_49;
  _Bool tmp_if_expr_50;
  _Bool tmp_if_expr_51;
  _Bool tmp_if_expr_52;
  for( ; !(z >= (signed long int)((signed int)depth + -1)); z = z + 1ll)
  {
    y = (signed long long int)1;
    for( ; !(y >= (signed long int)((signed int)height + -1)); y = y + 1ll)
    {
      x = (signed long long int)1;
      for( ; !(x >= (signed long int)((signed int)width + -1)); x = x + 1ll)
      {
        float value = *pt;
        if((double)value >= threshold)
          tmp_if_expr_1 = value > pt[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(tmp_if_expr_1)
          tmp_if_expr_2 = value > *(pt - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_2 = (_Bool)0;
        if(tmp_if_expr_2)
          tmp_if_expr_3 = value > pt[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = value > *(pt - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_5 = value > pt[(signed long int)yo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_5 = (_Bool)0;
        if(tmp_if_expr_5)
          tmp_if_expr_6 = value > *(pt - (signed long int)yo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_6 = (_Bool)0;
        if(tmp_if_expr_6)
          tmp_if_expr_7 = value > (pt + (signed long int)yo)[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_7 = (_Bool)0;
        if(tmp_if_expr_7)
          tmp_if_expr_8 = value > *((pt + (signed long int)yo) - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_8 = (_Bool)0;
        if(tmp_if_expr_8)
          tmp_if_expr_9 = value > (pt - (signed long int)yo)[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_9 = (_Bool)0;
        if(tmp_if_expr_9)
          tmp_if_expr_10 = value > *((pt - (signed long int)yo) - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_10 = (_Bool)0;
        if(tmp_if_expr_10)
          tmp_if_expr_11 = value > (pt + (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_11 = (_Bool)0;
        if(tmp_if_expr_11)
          tmp_if_expr_12 = value > (pt - (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_12 = (_Bool)0;
        if(tmp_if_expr_12)
          tmp_if_expr_13 = value > (pt + (signed long int)yo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_13 = (_Bool)0;
        if(tmp_if_expr_13)
          tmp_if_expr_14 = value > (pt - (signed long int)yo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_14 = (_Bool)0;
        if(tmp_if_expr_14)
          tmp_if_expr_15 = value > (pt + (signed long int)yo + (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_15 = (_Bool)0;
        if(tmp_if_expr_15)
          tmp_if_expr_16 = value > ((pt + (signed long int)yo) - (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_16 = (_Bool)0;
        if(tmp_if_expr_16)
          tmp_if_expr_17 = value > ((pt - (signed long int)yo) + (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_17 = (_Bool)0;
        if(tmp_if_expr_17)
          tmp_if_expr_18 = value > ((pt - (signed long int)yo) - (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_18 = (_Bool)0;
        if(tmp_if_expr_18)
          tmp_if_expr_19 = value > *((pt + (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_19 = (_Bool)0;
        if(tmp_if_expr_19)
          tmp_if_expr_20 = value > *((pt - (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_20 = (_Bool)0;
        if(tmp_if_expr_20)
          tmp_if_expr_21 = value > *((pt + (signed long int)yo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_21 = (_Bool)0;
        if(tmp_if_expr_21)
          tmp_if_expr_22 = value > *((pt - (signed long int)yo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_22 = (_Bool)0;
        if(tmp_if_expr_22)
          tmp_if_expr_23 = value > *((pt + (signed long int)yo + (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_23 = (_Bool)0;
        if(tmp_if_expr_23)
          tmp_if_expr_24 = value > *(((pt + (signed long int)yo) - (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_24 = (_Bool)0;
        if(tmp_if_expr_24)
          tmp_if_expr_25 = value > *(((pt - (signed long int)yo) + (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_25 = (_Bool)0;
        if(tmp_if_expr_25)
          tmp_if_expr_26 = value > *(((pt - (signed long int)yo) - (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_26 = (_Bool)0;
        if(tmp_if_expr_26)
          tmp_if_expr_53 = (_Bool)1;

        else
        {
          if((double)value <= -threshold)
            tmp_if_expr_27 = value < pt[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_27 = (_Bool)0;
          if(tmp_if_expr_27)
            tmp_if_expr_28 = value < *(pt - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_28 = (_Bool)0;
          if(tmp_if_expr_28)
            tmp_if_expr_29 = value < pt[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_29 = (_Bool)0;
          if(tmp_if_expr_29)
            tmp_if_expr_30 = value < *(pt - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_30 = (_Bool)0;
          if(tmp_if_expr_30)
            tmp_if_expr_31 = value < pt[(signed long int)yo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_31 = (_Bool)0;
          if(tmp_if_expr_31)
            tmp_if_expr_32 = value < *(pt - (signed long int)yo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_32 = (_Bool)0;
          if(tmp_if_expr_32)
            tmp_if_expr_33 = value < (pt + (signed long int)yo)[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_33 = (_Bool)0;
          if(tmp_if_expr_33)
            tmp_if_expr_34 = value < *((pt + (signed long int)yo) - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_34 = (_Bool)0;
          if(tmp_if_expr_34)
            tmp_if_expr_35 = value < (pt - (signed long int)yo)[(signed long int)xo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_35 = (_Bool)0;
          if(tmp_if_expr_35)
            tmp_if_expr_36 = value < *((pt - (signed long int)yo) - (signed long int)xo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_36 = (_Bool)0;
          if(tmp_if_expr_36)
            tmp_if_expr_37 = value < (pt + (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_37 = (_Bool)0;
          if(tmp_if_expr_37)
            tmp_if_expr_38 = value < (pt - (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_38 = (_Bool)0;
          if(tmp_if_expr_38)
            tmp_if_expr_39 = value < (pt + (signed long int)yo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_39 = (_Bool)0;
          if(tmp_if_expr_39)
            tmp_if_expr_40 = value < (pt - (signed long int)yo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_40 = (_Bool)0;
          if(tmp_if_expr_40)
            tmp_if_expr_41 = value < (pt + (signed long int)yo + (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_41 = (_Bool)0;
          if(tmp_if_expr_41)
            tmp_if_expr_42 = value < ((pt + (signed long int)yo) - (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_42 = (_Bool)0;
          if(tmp_if_expr_42)
            tmp_if_expr_43 = value < ((pt - (signed long int)yo) + (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_43 = (_Bool)0;
          if(tmp_if_expr_43)
            tmp_if_expr_44 = value < ((pt - (signed long int)yo) - (signed long int)xo)[(signed long int)zo] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_44 = (_Bool)0;
          if(tmp_if_expr_44)
            tmp_if_expr_45 = value < *((pt + (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_45 = (_Bool)0;
          if(tmp_if_expr_45)
            tmp_if_expr_46 = value < *((pt - (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_46 = (_Bool)0;
          if(tmp_if_expr_46)
            tmp_if_expr_47 = value < *((pt + (signed long int)yo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_47 = (_Bool)0;
          if(tmp_if_expr_47)
            tmp_if_expr_48 = value < *((pt - (signed long int)yo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_48 = (_Bool)0;
          if(tmp_if_expr_48)
            tmp_if_expr_49 = value < *((pt + (signed long int)yo + (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_49 = (_Bool)0;
          if(tmp_if_expr_49)
            tmp_if_expr_50 = value < *(((pt + (signed long int)yo) - (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_50 = (_Bool)0;
          if(tmp_if_expr_50)
            tmp_if_expr_51 = value < *(((pt - (signed long int)yo) + (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_51 = (_Bool)0;
          if(tmp_if_expr_51)
            tmp_if_expr_52 = value < *(((pt - (signed long int)yo) - (signed long int)xo) - (signed long int)zo) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_52 = (_Bool)0;
          tmp_if_expr_53 = tmp_if_expr_52 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_53)
        {
          numExtrema = numExtrema + 1ull;
          requiredSize = requiredSize + sizeof(signed long long int) /*8ul*/  * (unsigned long int)3;
          if(!(*bufferSize >= requiredSize))
          {
            signed int err;
            err=_vl_resize_buffer((void **)extrema, bufferSize, requiredSize + (unsigned long int)(2000 * 3) * sizeof(signed long long int) /*8ul*/ );
            if(!(err == 0))
              abort();

          }

          (*extrema)[(signed long int)((unsigned long int)3 * (numExtrema - (unsigned long int)1) + (unsigned long int)0)] = x;
          (*extrema)[(signed long int)((unsigned long int)3 * (numExtrema - (unsigned long int)1) + (unsigned long int)1)] = y;
          (*extrema)[(signed long int)((unsigned long int)3 * (numExtrema - (unsigned long int)1) + (unsigned long int)2)] = z;
        }

        pt = pt + (signed long int)xo;
      }
      pt = pt + (signed long int)((unsigned long int)2 * xo);
    }
    pt = pt + (signed long int)((unsigned long int)2 * yo);
  }
  return numExtrema;
}

// vl_fisher_encode
// file vl/fisher.c line 549
extern unsigned long long int vl_fisher_encode(void *enc, unsigned int dataType, const void *means, unsigned long long int dimension, unsigned long long int numClusters, const void *covariances, const void *priors, const void *data, unsigned long long int numData, signed int flags)
{
  unsigned long long int return_value__vl_fisher_encode_f_1;
  unsigned long long int return_value__vl_fisher_encode_d_2;
  switch(dataType)
  {
    case (unsigned int)1:
    {
      return_value__vl_fisher_encode_f_1=_vl_fisher_encode_f((float *)enc, (const float *)means, dimension, numClusters, (const float *)covariances, (const float *)priors, (const float *)data, numData, flags);
      return return_value__vl_fisher_encode_f_1;
    }
    case (unsigned int)2:
    {
      return_value__vl_fisher_encode_d_2=_vl_fisher_encode_d((double *)enc, (const double *)means, dimension, numClusters, (const double *)covariances, (const double *)priors, (const double *)data, numData, flags);
      return return_value__vl_fisher_encode_d_2;
    }
    default:
      abort();
  }
}

// vl_floor_d
// file vl/mathop.h line 147
static inline signed long int vl_floor_d(double x)
{
  signed long int xi = (signed long int)x;
  if(x >= 0.000000 || IEEE_FLOAT_EQUAL((double)xi, x))
    return xi;

  else
    return xi - (signed long int)1;
}

// vl_floor_d_link1
// file vl/mathop.h line 147
static inline signed long int vl_floor_d_link1(double x_link1)
{
  signed long int xi_link1 = (signed long int)x_link1;
  if(x_link1 >= 0.000000 || IEEE_FLOAT_EQUAL((double)xi_link1, x_link1))
    return xi_link1;

  else
    return xi_link1 - (signed long int)1;
}

// vl_floor_f
// file vl/mathop.h line 135
static inline signed long int vl_floor_f(float x)
{
  signed long int xi = (signed long int)x;
  if(x >= 0.000000f || IEEE_FLOAT_EQUAL((float)xi, x))
    return xi;

  else
    return xi - (signed long int)1;
}

// vl_floor_f_link1
// file vl/mathop.h line 135
static inline signed long int vl_floor_f_link1(float x_link1)
{
  signed long int xi_link1 = (signed long int)x_link1;
  if(x_link1 >= 0.000000f || IEEE_FLOAT_EQUAL((float)xi_link1, x_link1))
    return xi_link1;

  else
    return xi_link1 - (signed long int)1;
}

// vl_free
// file ./vl/generic.h line 147
extern void vl_free(void *ptr)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return_value_vl_get_state_1->free_func(ptr);
}

// vl_gaussian_elimination
// file vl/mathop.c line 906
extern signed int vl_gaussian_elimination(double *A, unsigned long long int numRows, unsigned long long int numColumns)
{
  signed long long int i;
  signed long long int j;
  signed long long int ii;
  signed long long int jj;
  j = (signed long long int)0;
  for( ; !(j >= (signed long int)(signed int)numRows); j = j + 1ll)
  {
    double maxa = (double)0;
    double maxabsa = (double)0;
    signed long long int maxi = (signed long long int)-1;
    double tmp;
    i = j;
    for( ; !(i >= (signed long int)(signed int)numRows); i = i + 1ll)
    {
      double a = A[(signed long int)((unsigned long int)i + (unsigned long int)j * numRows)];
      double absa;
      absa=vl_abs_d(a);
      if(absa > maxabsa)
      {
        maxa = a;
        maxabsa = absa;
        maxi = i;
      }

    }
    i = maxi;
    if(maxabsa < 1e-10)
      return 1;

    jj = j;
    for( ; !(jj >= (signed long int)(signed int)numColumns); jj = jj + 1ll)
    {
      tmp = A[(signed long int)((unsigned long int)i + (unsigned long int)jj * numRows)];
      A[(signed long int)((unsigned long int)i + (unsigned long int)jj * numRows)] = A[(signed long int)((unsigned long int)j + (unsigned long int)jj * numRows)];
      A[(signed long int)((unsigned long int)j + (unsigned long int)jj * numRows)] = tmp;
      A[(signed long int)((unsigned long int)j + (unsigned long int)jj * numRows)] = A[(signed long int)((unsigned long int)j + (unsigned long int)jj * numRows)] / maxa;
    }
    ii = j + (signed long int)1;
    for( ; !(ii >= (signed long int)(signed int)numRows); ii = ii + 1ll)
    {
      double x = A[(signed long int)((unsigned long int)ii + (unsigned long int)j * numRows)];
      jj = j;
      for( ; !(jj >= (signed long int)(signed int)numColumns); jj = jj + 1ll)
        A[(signed long int)((unsigned long int)ii + (unsigned long int)jj * numRows)] = A[(signed long int)((unsigned long int)ii + (unsigned long int)jj * numRows)] - x * A[(signed long int)((unsigned long int)j + (unsigned long int)jj * numRows)];
    }
  }
  i = (signed long long int)(numRows - (unsigned long int)1);
  for( ; i >= 1l; i = i - 1ll)
  {
    ii = i - (signed long int)1;
    for( ; ii >= 0l; ii = ii - 1ll)
    {
      double vl_gaussian_elimination__1__2__1__1__1__x = A[(signed long int)((unsigned long int)ii + (unsigned long int)i * numRows)];
      j = (signed long long int)numRows;
      for( ; !(j >= (signed long int)(signed int)numColumns); j = j + 1ll)
        A[(signed long int)((unsigned long int)ii + (unsigned long int)j * numRows)] = A[(signed long int)((unsigned long int)ii + (unsigned long int)j * numRows)] - vl_gaussian_elimination__1__2__1__1__1__x * A[(signed long int)((unsigned long int)i + (unsigned long int)j * numRows)];
    }
  }
  return 0;
}

// vl_get_cpu_time
// file vl/generic.h line 206
extern double vl_get_cpu_time(void)
{
  signed long int return_value_clock_1;
  return_value_clock_1=clock();
  return (double)return_value_clock_1 / (double)(signed long int)1000000;
}

// vl_get_gmm_data_posteriors_d
// file vl/gmm.c line 712
extern double vl_get_gmm_data_posteriors_d(double *posteriors, unsigned long long int numClusters, unsigned long long int numData, const double *priors, const double *means, unsigned long long int dimension, const double *covariances, const double *data)
{
  signed long long int i_d;
  signed long long int i_cl;
  unsigned long long int dim;
  double LL = (double)0;
  double halfDimLog2Pi;
  double return_value_log_1;
  return_value_log_1=log(2.0 * 3.141592653589793);
  halfDimLog2Pi = ((double)dimension / 2.0) * return_value_log_1;
  double *logCovariances;
  double *logWeights;
  double *invCovariances;
  double (*distFn)(unsigned long long int, const double *, const double *, const double *);
  distFn=vl_get_vector_3_comparison_function_d((enum _VlVectorComparisonType)VlDistanceMahalanobis);
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(double) /*8ul*/  * numClusters);
  logCovariances = (double *)return_value_vl_malloc_2;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(double) /*8ul*/  * numClusters * dimension);
  invCovariances = (double *)return_value_vl_malloc_3;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(double) /*8ul*/  * numClusters);
  logWeights = (double *)return_value_vl_malloc_4;
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    double logSigma = (double)0;
    if(priors[i_cl] < 1e-6)
      logWeights[i_cl] = -((double)vl_infinity_d.value);

    else
      logWeights[i_cl]=log(priors[i_cl]);
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension); dim = dim + 1ull)
    {
      double return_value_log_5;
      return_value_log_5=log(covariances[(signed long int)((unsigned long int)i_cl * dimension + dim)]);
      logSigma = logSigma + return_value_log_5;
      invCovariances[(signed long int)((unsigned long int)i_cl * dimension + dim)] = (double)1.0 / covariances[(signed long int)((unsigned long int)i_cl * dimension + dim)];
    }
    logCovariances[i_cl] = logSigma;
  }
  i_d = (signed long long int)0;
  for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
  {
    double clusterPosteriorsSum = (double)0;
    double maxPosterior = (double)-vl_infinity_d.value;
    i_cl = (signed long long int)0;
    if(!(i_cl >= (signed long int)(signed int)numClusters))
    {
      double p;
      double return_value;
      return_value=distFn(dimension, data + (signed long int)((unsigned long int)i_d * dimension), means + (signed long int)((unsigned long int)i_cl * dimension), invCovariances + (signed long int)((unsigned long int)i_cl * dimension));
      p = ((logWeights[i_cl] - halfDimLog2Pi) - 0.5 * logCovariances[i_cl]) - 0.5 * return_value;
      posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] = p;
      if(p > maxPosterior)
        maxPosterior = p;

      i_cl = i_cl + 1ll;
    }

    i_cl = (signed long long int)0;
    for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    {
      double vl_get_gmm_data_posteriors_d__1__2__1__2__1__p = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)];
      vl_get_gmm_data_posteriors_d__1__2__1__2__1__p=exp(vl_get_gmm_data_posteriors_d__1__2__1__2__1__p - maxPosterior);
      posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] = vl_get_gmm_data_posteriors_d__1__2__1__2__1__p;
      clusterPosteriorsSum = clusterPosteriorsSum + vl_get_gmm_data_posteriors_d__1__2__1__2__1__p;
    }
    double return_value_log_6;
    return_value_log_6=log(clusterPosteriorsSum);
    LL = LL + return_value_log_6 + (double)maxPosterior;
    i_cl = (signed long long int)0;
    for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
      posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] / clusterPosteriorsSum;
  }
  vl_free((void *)logCovariances);
  vl_free((void *)logWeights);
  vl_free((void *)invCovariances);
  return LL;
}

// vl_get_gmm_data_posteriors_f
// file vl/gmm.c line 712
extern double vl_get_gmm_data_posteriors_f(float *posteriors, unsigned long long int numClusters, unsigned long long int numData, const float *priors, const float *means, unsigned long long int dimension, const float *covariances, const float *data)
{
  signed long long int i_d;
  signed long long int i_cl;
  unsigned long long int dim;
  double LL = (double)0;
  float halfDimLog2Pi;
  double return_value_log_1;
  return_value_log_1=log(2.0 * 3.141592653589793);
  halfDimLog2Pi = (float)(((double)dimension / 2.0) * return_value_log_1);
  float *logCovariances;
  float *logWeights;
  float *invCovariances;
  float (*distFn)(unsigned long long int, const float *, const float *, const float *);
  distFn=vl_get_vector_3_comparison_function_f((enum _VlVectorComparisonType)VlDistanceMahalanobis);
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * numClusters);
  logCovariances = (float *)return_value_vl_malloc_2;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(float) /*4ul*/  * numClusters * dimension);
  invCovariances = (float *)return_value_vl_malloc_3;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(float) /*4ul*/  * numClusters);
  logWeights = (float *)return_value_vl_malloc_4;
  i_cl = (signed long long int)0;
  for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
  {
    float logSigma = (float)0;
    if((double)priors[i_cl] < 1e-6)
      logWeights[i_cl] = -((float)vl_infinity_d.value);

    else
    {
      double return_value_log_5;
      return_value_log_5=log((double)priors[i_cl]);
      logWeights[i_cl] = (float)return_value_log_5;
    }
    dim = (unsigned long long int)0;
    for( ; !(dim >= dimension); dim = dim + 1ull)
    {
      double return_value_log_6;
      return_value_log_6=log((double)covariances[(signed long int)((unsigned long int)i_cl * dimension + dim)]);
      logSigma = logSigma + (float)return_value_log_6;
      invCovariances[(signed long int)((unsigned long int)i_cl * dimension + dim)] = (float)1.0 / covariances[(signed long int)((unsigned long int)i_cl * dimension + dim)];
    }
    logCovariances[i_cl] = logSigma;
  }
  i_d = (signed long long int)0;
  for( ; !(i_d >= (signed long int)(signed int)numData); i_d = i_d + 1ll)
  {
    float clusterPosteriorsSum = (float)0;
    float maxPosterior = (float)-vl_infinity_d.value;
    i_cl = (signed long long int)0;
    if(!(i_cl >= (signed long int)(signed int)numClusters))
    {
      float p;
      float return_value;
      return_value=distFn(dimension, data + (signed long int)((unsigned long int)i_d * dimension), means + (signed long int)((unsigned long int)i_cl * dimension), invCovariances + (signed long int)((unsigned long int)i_cl * dimension));
      p = (float)(((double)(logWeights[i_cl] - halfDimLog2Pi) - 0.5 * (double)logCovariances[i_cl]) - 0.5 * (double)return_value);
      posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] = p;
      if(p > maxPosterior)
        maxPosterior = p;

      i_cl = i_cl + 1ll;
    }

    i_cl = (signed long long int)0;
    for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
    {
      float vl_get_gmm_data_posteriors_f__1__2__1__2__1__p = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)];
      double return_value_exp_7;
      return_value_exp_7=exp((double)(vl_get_gmm_data_posteriors_f__1__2__1__2__1__p - maxPosterior));
      vl_get_gmm_data_posteriors_f__1__2__1__2__1__p = (float)return_value_exp_7;
      posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] = vl_get_gmm_data_posteriors_f__1__2__1__2__1__p;
      clusterPosteriorsSum = clusterPosteriorsSum + vl_get_gmm_data_posteriors_f__1__2__1__2__1__p;
    }
    double return_value_log_8;
    return_value_log_8=log((double)clusterPosteriorsSum);
    LL = LL + return_value_log_8 + (double)maxPosterior;
    i_cl = (signed long long int)0;
    for( ; !(i_cl >= (signed long int)(signed int)numClusters); i_cl = i_cl + 1ll)
      posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] = posteriors[(signed long int)((unsigned long int)i_cl + (unsigned long int)i_d * numClusters)] / clusterPosteriorsSum;
  }
  vl_free((void *)logCovariances);
  vl_free((void *)logWeights);
  vl_free((void *)invCovariances);
  return LL;
}

// vl_get_last_error
// file vl/generic.c line 1265
extern signed int vl_get_last_error(void)
{
  struct _VlThreadState *return_value_vl_get_thread_specific_state_1;
  return_value_vl_get_thread_specific_state_1=vl_get_thread_specific_state();
  return return_value_vl_get_thread_specific_state_1->lastError;
}

// vl_get_last_error_message
// file vl/generic.c line 1275
extern const char * vl_get_last_error_message(void)
{
  struct _VlThreadState *return_value_vl_get_thread_specific_state_1;
  return_value_vl_get_thread_specific_state_1=vl_get_thread_specific_state();
  return return_value_vl_get_thread_specific_state_1->lastErrorMessage;
}

// vl_get_max_threads
// file vl/generic.c line 1175
extern unsigned long long int vl_get_max_threads(void)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return return_value_vl_get_state_1->numThreads;
}

// vl_get_num_cpus
// file vl/generic.c line 1055
extern unsigned long long int vl_get_num_cpus(void)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return return_value_vl_get_state_1->numCPUs;
}

// vl_get_printf_func
// file vl/generic.h line 156
extern signed int (*vl_get_printf_func(void))(const char *, ...)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return return_value_vl_get_state_1->printf_func;
}

// vl_get_rand
// file ./vl/generic.h line 110
extern struct _VlRand * vl_get_rand(void)
{
  struct _VlThreadState *return_value_vl_get_thread_specific_state_1;
  return_value_vl_get_thread_specific_state_1=vl_get_thread_specific_state();
  return &return_value_vl_get_thread_specific_state_1->rand;
}

// vl_get_simd_enabled
// file vl/generic.c line 1082
extern signed int vl_get_simd_enabled(void)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return return_value_vl_get_state_1->simdEnabled;
}

// vl_get_state
// file vl/generic.c line 1005
static inline struct _VlState * vl_get_state(void)
{
  return &_vl_state;
}

// vl_get_thread_limit
// file vl/generic.c line 1143
extern unsigned long long int vl_get_thread_limit(void)
{
  signed int return_value_omp_get_thread_limit_1;
  return_value_omp_get_thread_limit_1=omp_get_thread_limit();
  return (unsigned long long int)return_value_omp_get_thread_limit_1;
}

// vl_get_thread_specific_state
// file vl/generic.c line 1017
static inline struct _VlThreadState * vl_get_thread_specific_state(void)
{
  struct _VlState *state;
  struct _VlThreadState *threadState;
  vl_lock_state();
  state=vl_get_state();
  void *return_value_pthread_getspecific_1;
  return_value_pthread_getspecific_1=pthread_getspecific(state->threadKey);
  threadState = (struct _VlThreadState *)return_value_pthread_getspecific_1;
  if(threadState == ((struct _VlThreadState *)NULL))
    threadState=vl_thread_specific_state_new();

  pthread_setspecific(state->threadKey, (const void *)threadState);
  vl_unlock_state();
  return threadState;
}

// vl_get_type_size
// file vl/generic.h line 85
static inline unsigned long long int vl_get_type_size(unsigned int type)
{
  unsigned long long int dataSize = (unsigned long long int)0;
  switch(type)
  {
    case (unsigned int)2:
    {
      dataSize = sizeof(double) /*8ul*/ ;
      break;
    }
    case (unsigned int)1:
    {
      dataSize = sizeof(float) /*4ul*/ ;
      break;
    }
    case (unsigned int)9:

    case (unsigned int)10:
    {
      dataSize = sizeof(signed long long int) /*8ul*/ ;
      break;
    }
    case (unsigned int)7:

    case (unsigned int)8:
    {
      dataSize = sizeof(signed int) /*4ul*/ ;
      break;
    }
    case (unsigned int)5:

    case (unsigned int)6:
    {
      dataSize = sizeof(signed short int) /*2ul*/ ;
      break;
    }
    case (unsigned int)3:

    case (unsigned int)4:
    {
      dataSize = sizeof(char) /*1ul*/ ;
      break;
    }
    default:
      abort();
  }
  return dataSize;
}

// vl_get_type_size_link1
// file vl/generic.h line 85
static inline unsigned long long int vl_get_type_size_link1(unsigned int type_link1)
{
  unsigned long long int dataSize_link1 = (unsigned long long int)0;
  switch(type_link1)
  {
    case (unsigned int)2:
    {
      dataSize_link1 = sizeof(double) /*8ul*/ ;
      break;
    }
    case (unsigned int)1:
    {
      dataSize_link1 = sizeof(float) /*4ul*/ ;
      break;
    }
    case (unsigned int)9:

    case (unsigned int)10:
    {
      dataSize_link1 = sizeof(signed long long int) /*8ul*/ ;
      break;
    }
    case (unsigned int)7:

    case (unsigned int)8:
    {
      dataSize_link1 = sizeof(signed int) /*4ul*/ ;
      break;
    }
    case (unsigned int)5:

    case (unsigned int)6:
    {
      dataSize_link1 = sizeof(signed short int) /*2ul*/ ;
      break;
    }
    case (unsigned int)3:

    case (unsigned int)4:
    {
      dataSize_link1 = sizeof(char) /*1ul*/ ;
      break;
    }
    default:
      abort();
  }
  return dataSize_link1;
}

// vl_get_type_size_link2
// file vl/generic.h line 85
static inline unsigned long long int vl_get_type_size_link2(unsigned int type_link2)
{
  unsigned long long int dataSize_link2 = (unsigned long long int)0;
  switch(type_link2)
  {
    case (unsigned int)2:
    {
      dataSize_link2 = sizeof(double) /*8ul*/ ;
      break;
    }
    case (unsigned int)1:
    {
      dataSize_link2 = sizeof(float) /*4ul*/ ;
      break;
    }
    case (unsigned int)9:

    case (unsigned int)10:
    {
      dataSize_link2 = sizeof(signed long long int) /*8ul*/ ;
      break;
    }
    case (unsigned int)7:

    case (unsigned int)8:
    {
      dataSize_link2 = sizeof(signed int) /*4ul*/ ;
      break;
    }
    case (unsigned int)5:

    case (unsigned int)6:
    {
      dataSize_link2 = sizeof(signed short int) /*2ul*/ ;
      break;
    }
    case (unsigned int)3:

    case (unsigned int)4:
    {
      dataSize_link2 = sizeof(char) /*1ul*/ ;
      break;
    }
    default:
      abort();
  }
  return dataSize_link2;
}

// vl_get_type_size_link3
// file vl/generic.h line 85
static inline unsigned long long int vl_get_type_size_link3(unsigned int type_link3)
{
  unsigned long long int dataSize_link3 = (unsigned long long int)0;
  switch(type_link3)
  {
    case (unsigned int)2:
    {
      dataSize_link3 = sizeof(double) /*8ul*/ ;
      break;
    }
    case (unsigned int)1:
    {
      dataSize_link3 = sizeof(float) /*4ul*/ ;
      break;
    }
    case (unsigned int)9:

    case (unsigned int)10:
    {
      dataSize_link3 = sizeof(signed long long int) /*8ul*/ ;
      break;
    }
    case (unsigned int)7:

    case (unsigned int)8:
    {
      dataSize_link3 = sizeof(signed int) /*4ul*/ ;
      break;
    }
    case (unsigned int)5:

    case (unsigned int)6:
    {
      dataSize_link3 = sizeof(signed short int) /*2ul*/ ;
      break;
    }
    case (unsigned int)3:

    case (unsigned int)4:
    {
      dataSize_link3 = sizeof(char) /*1ul*/ ;
      break;
    }
    default:
      abort();
  }
  return dataSize_link3;
}

// vl_get_vector_3_comparison_function_d
// file vl/mathop.c line 521
extern double (*vl_get_vector_3_comparison_function_d(enum _VlVectorComparisonType type))(unsigned long long int, const double *, const double *, const double *)
{
  double (*function)(unsigned long long int, const double *, const double *, const double *) = ((double (*)(unsigned long long int, const double *, const double *, const double *))NULL);
  if((signed int)type == VlDistanceMahalanobis)
  {
    function = _vl_distance_mahalanobis_sq_d;
    goto __CPROVER_DUMP_L3;
  }

  abort();

__CPROVER_DUMP_L3:
  ;
  return function;
}

// vl_get_vector_3_comparison_function_f
// file vl/mathop.c line 521
extern float (*vl_get_vector_3_comparison_function_f(enum _VlVectorComparisonType type))(unsigned long long int, const float *, const float *, const float *)
{
  float (*function)(unsigned long long int, const float *, const float *, const float *) = ((float (*)(unsigned long long int, const float *, const float *, const float *))NULL);
  if((signed int)type == VlDistanceMahalanobis)
  {
    function = _vl_distance_mahalanobis_sq_f;
    goto __CPROVER_DUMP_L3;
  }

  abort();

__CPROVER_DUMP_L3:
  ;
  return function;
}

// vl_get_vector_comparison_function_d
// file vl/mathop.h line 669
extern double (*vl_get_vector_comparison_function_d(enum _VlVectorComparisonType type))(unsigned long long int, const double *, const double *)
{
  double (*function)(unsigned long long int, const double *, const double *) = ((double (*)(unsigned long long int, const double *, const double *))NULL);
  switch((signed int)type)
  {
    case VlDistanceL2:
    {
      function = _vl_distance_l2_d;
      break;
    }
    case VlDistanceL1:
    {
      function = _vl_distance_l1_d;
      break;
    }
    case VlDistanceChi2:
    {
      function = _vl_distance_chi2_d;
      break;
    }
    case VlDistanceHellinger:
    {
      function = _vl_distance_hellinger_d;
      break;
    }
    case VlDistanceJS:
    {
      function = _vl_distance_js_d;
      break;
    }
    case VlKernelL2:
    {
      function = _vl_kernel_l2_d;
      break;
    }
    case VlKernelL1:
    {
      function = _vl_kernel_l1_d;
      break;
    }
    case VlKernelChi2:
    {
      function = _vl_kernel_chi2_d;
      break;
    }
    case VlKernelHellinger:
    {
      function = _vl_kernel_hellinger_d;
      break;
    }
    case VlKernelJS:
    {
      function = _vl_kernel_js_d;
      break;
    }
    default:
      abort();
  }
  return function;
}

// vl_get_vector_comparison_function_f
// file vl/mathop.h line 666
extern float (*vl_get_vector_comparison_function_f(enum _VlVectorComparisonType type))(unsigned long long int, const float *, const float *)
{
  float (*function)(unsigned long long int, const float *, const float *) = ((float (*)(unsigned long long int, const float *, const float *))NULL);
  switch((signed int)type)
  {
    case VlDistanceL2:
    {
      function = _vl_distance_l2_f;
      break;
    }
    case VlDistanceL1:
    {
      function = _vl_distance_l1_f;
      break;
    }
    case VlDistanceChi2:
    {
      function = _vl_distance_chi2_f;
      break;
    }
    case VlDistanceHellinger:
    {
      function = _vl_distance_hellinger_f;
      break;
    }
    case VlDistanceJS:
    {
      function = _vl_distance_js_f;
      break;
    }
    case VlKernelL2:
    {
      function = _vl_kernel_l2_f;
      break;
    }
    case VlKernelL1:
    {
      function = _vl_kernel_l1_f;
      break;
    }
    case VlKernelChi2:
    {
      function = _vl_kernel_chi2_f;
      break;
    }
    case VlKernelHellinger:
    {
      function = _vl_kernel_hellinger_f;
      break;
    }
    case VlKernelJS:
    {
      function = _vl_kernel_js_f;
      break;
    }
    default:
      abort();
  }
  return function;
}

// vl_get_version_string
// file vl/generic.c line 868
extern const char * vl_get_version_string(void)
{
  return "0.9.20";
}

// vl_gmm_cluster
// file vl/gmm.c line 1557
extern double vl_gmm_cluster(struct _VlGMM *self, const void *data, unsigned long long int numData)
{
  void *bestPriors = (void *)0;
  void *bestMeans = (void *)0;
  void *bestCovariances = (void *)0;
  void *bestPosteriors = (void *)0;
  unsigned long long int size;
  size=vl_get_type_size_link1(self->dataType);
  double bestLL = -vl_infinity_d.value;
  unsigned long long int repetition;
  bestPriors=vl_malloc(size * self->numClusters);
  bestMeans=vl_malloc(size * self->dimension * self->numClusters);
  bestCovariances=vl_malloc(size * self->dimension * self->numClusters);
  bestPosteriors=vl_malloc(size * self->numClusters * numData);
  repetition = (unsigned long long int)0;
  for( ; !(repetition >= self->numRepetitions); repetition = repetition + 1ull)
  {
    double LL;
    double timeRef;
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
      return_value_vl_get_printf_func_1=vl_get_printf_func();
      return_value_vl_get_printf_func_1("gmm: clustering: starting repetition %d of %d\n", repetition + (unsigned long int)1, self->numRepetitions);
    }

    timeRef=vl_get_cpu_time();
    switch((signed int)self->initialization)
    {
      case VlGMMKMeans:
      {
        vl_gmm_init_with_kmeans(self, data, numData, (struct _VlKMeans *)(void *)0);
        break;
      }
      case VlGMMRand:
      {
        vl_gmm_init_with_rand_data(self, data, numData);
        break;
      }
      case VlGMMCustom:
        break;
      default:
        abort();
    }
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_2)(const char *, ...);
      return_value_vl_get_printf_func_2=vl_get_printf_func();
      double return_value_vl_get_cpu_time_3;
      return_value_vl_get_cpu_time_3=vl_get_cpu_time();
      return_value_vl_get_printf_func_2("gmm: model initialized in %.2f s\n", return_value_vl_get_cpu_time_3 - timeRef);
    }

    timeRef=vl_get_cpu_time();
    LL=vl_gmm_em(self, data, numData);
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_4)(const char *, ...);
      return_value_vl_get_printf_func_4=vl_get_printf_func();
      double return_value_vl_get_cpu_time_5;
      return_value_vl_get_cpu_time_5=vl_get_cpu_time();
      return_value_vl_get_printf_func_4("gmm: optimization terminated in %.2f s with loglikelihood %f\n", return_value_vl_get_cpu_time_5 - timeRef, LL);
    }

    if(repetition == 0ul || LL > bestLL)
    {
      void *temp = bestPriors;
      bestPriors = self->priors;
      self->priors = temp;
      temp = bestMeans;
      bestMeans = self->means;
      self->means = temp;
      temp = bestCovariances;
      bestCovariances = self->covariances;
      self->covariances = temp;
      temp = bestPosteriors;
      bestPosteriors = self->posteriors;
      self->posteriors = temp;
      bestLL = LL;
    }

  }
  vl_free(self->priors);
  vl_free(self->means);
  vl_free(self->covariances);
  vl_free(self->posteriors);
  self->priors = bestPriors;
  self->means = bestMeans;
  self->covariances = bestCovariances;
  self->posteriors = bestPosteriors;
  self->LL = bestLL;
  if(!(self->verbosity == 0))
  {
    signed int (*return_value_vl_get_printf_func_6)(const char *, ...);
    return_value_vl_get_printf_func_6=vl_get_printf_func();
    return_value_vl_get_printf_func_6("gmm: all repetitions terminated with final loglikelihood %f\n", self->LL);
  }

  return bestLL;
}

// vl_gmm_delete
// file vl/gmm.c line 414
extern void vl_gmm_delete(struct _VlGMM *self)
{
  if(!(self->means == NULL))
    vl_free(self->means);

  if(!(self->covariances == NULL))
    vl_free(self->covariances);

  if(!(self->priors == NULL))
    vl_free(self->priors);

  if(!(self->posteriors == NULL))
    vl_free(self->posteriors);

  if(!(self->kmeansInit == ((struct _VlKMeans *)NULL)))
  {
    if(!(self->kmeansInitIsOwner == 0))
      vl_kmeans_delete(self->kmeansInit);

  }

  vl_free((void *)self);
}

// vl_gmm_em
// file vl/gmm.c line 1656
extern double vl_gmm_em(struct _VlGMM *self, const void *data, unsigned long long int numData)
{
  double return_value__vl_gmm_em_f_1;
  double return_value__vl_gmm_em_d_2;
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      return_value__vl_gmm_em_f_1=_vl_gmm_em_f(self, (const float *)data, numData);
      return return_value__vl_gmm_em_f_1;
    }
    case (unsigned int)2:
    {
      return_value__vl_gmm_em_d_2=_vl_gmm_em_d(self, (const double *)data, numData);
      return return_value__vl_gmm_em_d_2;
    }
    default:
    {
      abort();
      return (double)0;
    }
  }
}

// vl_gmm_get_covariance_lower_bounds
// file vl/gmm.c line 644
extern const double * vl_gmm_get_covariance_lower_bounds(const struct _VlGMM *self)
{
  return self->sigmaLowBound;
}

// vl_gmm_get_covariances
// file vl/gmm.c line 513
extern const void * vl_gmm_get_covariances(const struct _VlGMM *self)
{
  return self->covariances;
}

// vl_gmm_get_data_type
// file vl/gmm.c line 436
extern unsigned int vl_gmm_get_data_type(const struct _VlGMM *self)
{
  return self->dataType;
}

// vl_gmm_get_dimension
// file vl/gmm.c line 592
extern unsigned long long int vl_gmm_get_dimension(const struct _VlGMM *self)
{
  return self->dimension;
}

// vl_gmm_get_initialization
// file vl/gmm.c line 603
extern enum _VlGMMInitialization vl_gmm_get_initialization(const struct _VlGMM *self)
{
  return self->initialization;
}

// vl_gmm_get_kmeans_init_object
// file vl/gmm.c line 622
extern struct _VlKMeans * vl_gmm_get_kmeans_init_object(const struct _VlGMM *self)
{
  return self->kmeansInit;
}

// vl_gmm_get_loglikelihood
// file vl/gmm.c line 469
extern double vl_gmm_get_loglikelihood(const struct _VlGMM *self)
{
  return self->LL;
}

// vl_gmm_get_max_num_iterations
// file vl/gmm.c line 546
extern unsigned long long int vl_gmm_get_max_num_iterations(const struct _VlGMM *self)
{
  return self->maxNumIterations;
}

// vl_gmm_get_means
// file vl/gmm.c line 502
extern const void * vl_gmm_get_means(const struct _VlGMM *self)
{
  return self->means;
}

// vl_gmm_get_num_clusters
// file vl/gmm.c line 447
extern unsigned long long int vl_gmm_get_num_clusters(const struct _VlGMM *self)
{
  return self->numClusters;
}

// vl_gmm_get_num_data
// file vl/gmm.c line 458
extern unsigned long long int vl_gmm_get_num_data(const struct _VlGMM *self)
{
  return self->numData;
}

// vl_gmm_get_num_repetitions
// file vl/gmm.c line 568
extern unsigned long long int vl_gmm_get_num_repetitions(const struct _VlGMM *self)
{
  return self->numRepetitions;
}

// vl_gmm_get_posteriors
// file vl/gmm.c line 535
extern const void * vl_gmm_get_posteriors(const struct _VlGMM *self)
{
  return self->posteriors;
}

// vl_gmm_get_priors
// file vl/gmm.c line 524
extern const void * vl_gmm_get_priors(const struct _VlGMM *self)
{
  return self->priors;
}

// vl_gmm_get_verbosity
// file vl/gmm.c line 480
extern signed int vl_gmm_get_verbosity(const struct _VlGMM *self)
{
  return self->verbosity;
}

// vl_gmm_init_with_kmeans
// file vl/gmm.c line 1526
extern void vl_gmm_init_with_kmeans(struct _VlGMM *self, const void *data, unsigned long long int numData, struct _VlKMeans *kmeansInit)
{
  vl_gmm_reset(self);
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      _vl_gmm_init_with_kmeans_f(self, (const float *)data, numData, kmeansInit);
      break;
    }
    case (unsigned int)2:
    {
      _vl_gmm_init_with_kmeans_d(self, (const double *)data, numData, kmeansInit);
      break;
    }
    default:
      abort();
  }
}

// vl_gmm_init_with_rand_data
// file vl/gmm.c line 1504
extern void vl_gmm_init_with_rand_data(struct _VlGMM *self, const void *data, unsigned long long int numData)
{
  vl_gmm_reset(self);
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      _vl_gmm_init_with_rand_data_f(self, (const float *)data, numData);
      break;
    }
    case (unsigned int)2:
    {
      _vl_gmm_init_with_rand_data_d(self, (const double *)data, numData);
      break;
    }
    default:
      abort();
  }
}

// vl_gmm_new
// file vl/gmm.c line 354
extern struct _VlGMM * vl_gmm_new(unsigned int dataType, unsigned long long int dimension, unsigned long long int numComponents)
{
  signed long long int i;
  unsigned long long int size;
  size=vl_get_type_size_link1(dataType);
  struct _VlGMM *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc((unsigned long int)1, sizeof(struct _VlGMM) /*128ul*/ );
  self = (struct _VlGMM *)return_value_vl_calloc_1;
  self->dataType = dataType;
  self->numClusters = numComponents;
  self->numData = (unsigned long long int)0;
  self->dimension = dimension;
  self->initialization = (enum _VlGMMInitialization)VlGMMRand;
  self->verbosity = 0;
  self->maxNumIterations = (unsigned long long int)50;
  self->numRepetitions = (unsigned long long int)1;
  self->sigmaLowBound = (double *)(void *)0;
  self->priors = (void *)0;
  self->covariances = (void *)0;
  self->means = (void *)0;
  self->posteriors = (void *)0;
  self->kmeansInit = (struct _VlKMeans *)(void *)0;
  self->kmeansInitIsOwner = 0;
  self->priors=vl_calloc(numComponents, size);
  self->means=vl_calloc(numComponents * dimension, size);
  self->covariances=vl_calloc(numComponents * dimension, size);
  void *return_value_vl_calloc_2;
  return_value_vl_calloc_2=vl_calloc(dimension, sizeof(double) /*8ul*/ );
  self->sigmaLowBound = (double *)return_value_vl_calloc_2;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(unsigned int)self->dimension); i = i + 1ll)
    self->sigmaLowBound[i] = 1e-4;
  return self;
}

// vl_gmm_new_copy
// file vl/gmm.c line 1481
extern struct _VlGMM * vl_gmm_new_copy(const struct _VlGMM *self)
{
  unsigned long long int size;
  size=vl_get_type_size_link1(self->dataType);
  struct _VlGMM *gmm;
  gmm=vl_gmm_new(self->dataType, self->dimension, self->numClusters);
  gmm->initialization = self->initialization;
  gmm->maxNumIterations = self->maxNumIterations;
  gmm->numRepetitions = self->numRepetitions;
  gmm->verbosity = self->verbosity;
  gmm->LL = self->LL;
  memcpy(gmm->means, self->means, size * self->numClusters * self->dimension);
  memcpy(gmm->covariances, self->covariances, size * self->numClusters * self->dimension);
  memcpy(gmm->priors, self->priors, size * self->numClusters);
  return gmm;
}

// vl_gmm_reset
// file vl/gmm.c line 392
extern void vl_gmm_reset(struct _VlGMM *self)
{
  if(!(self->posteriors == NULL))
  {
    vl_free(self->posteriors);
    self->posteriors = (void *)0;
    self->numData = (unsigned long long int)0;
  }

  if(!(self->kmeansInit == ((struct _VlKMeans *)NULL)))
  {
    if(!(self->kmeansInitIsOwner == 0))
    {
      vl_kmeans_delete(self->kmeansInit);
      self->kmeansInit = (struct _VlKMeans *)(void *)0;
      self->kmeansInitIsOwner = 0;
    }

  }

}

// vl_gmm_set_covariance_lower_bound
// file vl/gmm.c line 669
extern void vl_gmm_set_covariance_lower_bound(struct _VlGMM *self, double bound)
{
  signed int i = 0;
  for( ; !(i >= (signed int)self->dimension); i = i + 1)
    self->sigmaLowBound[(signed long int)i] = bound;
}

// vl_gmm_set_covariance_lower_bounds
// file vl/gmm.c line 656
extern void vl_gmm_set_covariance_lower_bounds(struct _VlGMM *self, const double *bounds)
{
  memcpy((void *)self->sigmaLowBound, (const void *)bounds, sizeof(double) /*8ul*/  * self->dimension);
}

// vl_gmm_set_covariances
// file vl/gmm.c line 1686
extern void vl_gmm_set_covariances(struct _VlGMM *self, const void *covariances)
{
  unsigned long long int return_value_vl_get_type_size_1;
  return_value_vl_get_type_size_1=vl_get_type_size_link1(self->dataType);
  memcpy(self->covariances, covariances, self->dimension * self->numClusters * return_value_vl_get_type_size_1);
}

// vl_gmm_set_initialization
// file vl/gmm.c line 613
extern void vl_gmm_set_initialization(struct _VlGMM *self, enum _VlGMMInitialization init)
{
  self->initialization = init;
}

// vl_gmm_set_kmeans_init_object
// file vl/gmm.c line 631
extern void vl_gmm_set_kmeans_init_object(struct _VlGMM *self, struct _VlKMeans *kmeans)
{
  if(!(self->kmeansInit == ((struct _VlKMeans *)NULL)))
  {
    if(!(self->kmeansInitIsOwner == 0))
      vl_kmeans_delete(self->kmeansInit);

  }

  self->kmeansInit = kmeans;
  self->kmeansInitIsOwner = 0;
}

// vl_gmm_set_max_num_iterations
// file vl/gmm.c line 557
extern void vl_gmm_set_max_num_iterations(struct _VlGMM *self, unsigned long long int maxNumIterations)
{
  self->maxNumIterations = maxNumIterations;
}

// vl_gmm_set_means
// file vl/gmm.c line 1675
extern void vl_gmm_set_means(struct _VlGMM *self, const void *means)
{
  unsigned long long int return_value_vl_get_type_size_1;
  return_value_vl_get_type_size_1=vl_get_type_size_link1(self->dataType);
  memcpy(self->means, means, self->dimension * self->numClusters * return_value_vl_get_type_size_1);
}

// vl_gmm_set_num_repetitions
// file vl/gmm.c line 580
extern void vl_gmm_set_num_repetitions(struct _VlGMM *self, unsigned long long int numRepetitions)
{
  self->numRepetitions = numRepetitions;
}

// vl_gmm_set_priors
// file vl/gmm.c line 1697
extern void vl_gmm_set_priors(struct _VlGMM *self, const void *priors)
{
  unsigned long long int return_value_vl_get_type_size_1;
  return_value_vl_get_type_size_1=vl_get_type_size_link1(self->dataType);
  memcpy(self->priors, priors, self->numClusters * return_value_vl_get_type_size_1);
}

// vl_gmm_set_verbosity
// file vl/gmm.c line 491
extern void vl_gmm_set_verbosity(struct _VlGMM *self, signed int verbosity)
{
  self->verbosity = verbosity;
}

// vl_heap_left_child
// file vl/heap-def.h line 202
static inline unsigned long long int vl_heap_left_child(unsigned long long int index)
{
  return (unsigned long int)2 * index + (unsigned long int)1;
}

// vl_heap_parent
// file vl/heap-def.h line 190
static inline unsigned long long int vl_heap_parent(unsigned long long int index)
{
  if(index == 0ul)
    return (unsigned long long int)0;

  else
    return (index - (unsigned long int)1) / (unsigned long int)2;
}

// vl_heap_right_child
// file vl/heap-def.h line 213
static inline unsigned long long int vl_heap_right_child(unsigned long long int index)
{
  unsigned long long int return_value_vl_heap_left_child_1;
  return_value_vl_heap_left_child_1=vl_heap_left_child(index);
  return return_value_vl_heap_left_child_1 + (unsigned long int)1;
}

// vl_hikm_copy_subset
// file vl/hikmeans.c line 56
unsigned char * vl_hikm_copy_subset(const unsigned char *data, unsigned int *ids, unsigned long long int N, unsigned long long int M, unsigned int id, unsigned long long int *N2)
{
  unsigned long long int i;
  unsigned long long int count = (unsigned long long int)0;
  i = (unsigned long long int)0;
  for( ; !(i >= N); i = i + 1ull)
    if(ids[(signed long int)i] == id)
      count = count + 1ull;

  *N2 = count;
  unsigned char *new_data;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned char) /*1ul*/  * M * count);
  new_data = (unsigned char *)return_value_vl_malloc_1;
  count = (unsigned long long int)0;
  i = (unsigned long long int)0;
  for( ; !(i >= N); i = i + 1ull)
    if(ids[(signed long int)i] == id)
    {
      memcpy((void *)(new_data + (signed long int)(count * M)), (const void *)(data + (signed long int)(i * M)), sizeof(unsigned char) /*1ul*/  * M);
      count = count + 1ull;
    }

  *N2 = count;
  return new_data;
}

// vl_hikm_delete
// file vl/hikmeans.c line 197
extern void vl_hikm_delete(struct _VlHIKMTree *f)
{
  if(!(f == ((struct _VlHIKMTree *)NULL)))
  {
    xdelete(f->root);
    vl_free((void *)f);
  }

}

// vl_hikm_get_K
// file vl/hikmeans.c line 301
extern unsigned long long int vl_hikm_get_K(const struct _VlHIKMTree *f)
{
  return f->K;
}

// vl_hikm_get_depth
// file vl/hikmeans.c line 312
extern unsigned long long int vl_hikm_get_depth(const struct _VlHIKMTree *f)
{
  return f->depth;
}

// vl_hikm_get_max_niters
// file vl/hikmeans.c line 335
extern unsigned long long int vl_hikm_get_max_niters(const struct _VlHIKMTree *f)
{
  return f->max_niters;
}

// vl_hikm_get_ndims
// file vl/hikmeans.c line 290
extern unsigned long long int vl_hikm_get_ndims(const struct _VlHIKMTree *f)
{
  return f->M;
}

// vl_hikm_get_root
// file vl/hikmeans.c line 346
extern const struct _VlHIKMNode * vl_hikm_get_root(const struct _VlHIKMTree *f)
{
  return f->root;
}

// vl_hikm_get_verbosity
// file vl/hikmeans.c line 324
extern signed int vl_hikm_get_verbosity(const struct _VlHIKMTree *f)
{
  return f->verb;
}

// vl_hikm_init
// file vl/hikmeans.c line 217
extern void vl_hikm_init(struct _VlHIKMTree *f, unsigned long long int M, unsigned long long int K, unsigned long long int depth)
{
  xdelete(f->root);
  f->root = ((struct _VlHIKMNode *)NULL);
  f->M = M;
  f->K = K;
  f->depth = depth;
}

// vl_hikm_new
// file vl/hikmeans.c line 183
extern struct _VlHIKMTree * vl_hikm_new(signed int method)
{
  struct _VlHIKMTree *f;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(struct _VlHIKMTree) /*48ul*/ , (unsigned long int)1);
  f = (struct _VlHIKMTree *)return_value_vl_calloc_1;
  f->max_niters = (unsigned long long int)200;
  f->method = method;
  return f;
}

// vl_hikm_push
// file vl/hikmeans.c line 257
extern void vl_hikm_push(struct _VlHIKMTree *f, unsigned int *asgn, const unsigned char *data, unsigned long long int N)
{
  unsigned long long int i;
  unsigned long long int d;
  unsigned long long int M;
  M=vl_hikm_get_ndims(f);
  unsigned long long int depth;
  depth=vl_hikm_get_depth(f);
  i = (unsigned long long int)0;
  for( ; !(i >= N); i = i + 1ull)
  {
    struct _VlHIKMNode *node = f->root;
    d = (unsigned long long int)0;
    while(!(node == ((struct _VlHIKMNode *)NULL)))
    {
      unsigned int best;
      vl_ikm_push(node->filter, &best, data + (signed long int)(i * M), (unsigned long long int)1);
      asgn[(signed long int)(i * depth + d)] = best;
      d = d + 1ull;
      if(node->children == ((struct _VlHIKMNode **)NULL))
        break;

      node = node->children[(signed long int)best];
    }
  }
}

// vl_hikm_set_max_niters
// file vl/hikmeans.c line 368
extern void vl_hikm_set_max_niters(struct _VlHIKMTree *f, signed int max_niters)
{
  f->max_niters = (unsigned long long int)max_niters;
}

// vl_hikm_set_verbosity
// file vl/hikmeans.c line 357
extern void vl_hikm_set_verbosity(struct _VlHIKMTree *f, signed int verb)
{
  f->verb = verb;
}

// vl_hikm_train
// file vl/hikmeans.c line 238
extern void vl_hikm_train(struct _VlHIKMTree *f, const unsigned char *data, unsigned long long int N)
{
  unsigned long long int tmp_if_expr_1;
  if(!(f->K >= N))
    tmp_if_expr_1 = f->K;

  else
    tmp_if_expr_1 = N;
  f->root=xmeans(f, data, N, tmp_if_expr_1, f->depth);
}

// vl_hog_delete
// file vl/hog.c line 322
extern void vl_hog_delete(struct VlHog_ *self)
{
  if(!(self->orientationX == ((float *)NULL)))
  {
    vl_free((void *)self->orientationX);
    self->orientationX = (float *)(void *)0;
  }

  if(!(self->orientationY == ((float *)NULL)))
  {
    vl_free((void *)self->orientationY);
    self->orientationY = (float *)(void *)0;
  }

  if(!(self->glyphs == ((float *)NULL)))
  {
    vl_free((void *)self->glyphs);
    self->glyphs = (float *)(void *)0;
  }

  if(!(self->permutation == ((signed long long int *)NULL)))
  {
    vl_free((void *)self->permutation);
    self->permutation = (signed long long int *)(void *)0;
  }

  if(!(self->hog == ((float *)NULL)))
  {
    vl_free((void *)self->hog);
    self->hog = (float *)(void *)0;
  }

  if(!(self->hogNorm == ((float *)NULL)))
  {
    vl_free((void *)self->hogNorm);
    self->hogNorm = (float *)(void *)0;
  }

  vl_free((void *)self);
}

// vl_hog_extract
// file vl/hog.c line 854
extern void vl_hog_extract(struct VlHog_ *self, float *features)
{
  signed long long int x;
  signed long long int y;
  unsigned long long int k;
  unsigned long long int hogStride = self->hogWidth * self->hogHeight;
  const float *iter = self->hog;
  k = (unsigned long long int)0;
  for( ; !(k >= self->numOrientations); k = k + 1ull)
  {
    float *niter = self->hogNorm;
    float *niterEnd = self->hogNorm + (signed long int)(self->hogWidth * self->hogHeight);
    unsigned long long int stride = self->hogWidth * self->hogHeight * self->numOrientations;
    while(!(niter == niterEnd))
    {
      float h1 = *iter;
      float h2 = iter[(signed long int)stride];
      float h = h1 + h2;
      *niter = *niter + h * h;
      niter = niter + 1l;
      iter = iter + 1l;
    }
  }
  const float *vl_hog_extract__1__2__iter = self->hog;
  y = (signed long long int)0;
  signed long long int tmp_if_expr_1;
  signed long long int tmp_if_expr_2;
  float return_value_sqrtf_11;
  float return_value_sqrtf_12;
  float return_value_sqrtf_13;
  float return_value_sqrtf_14;
  for( ; !(y >= (signed long int)(signed int)self->hogHeight); y = y + 1ll)
  {
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)self->hogWidth); x = x + 1ll)
    {
      signed long long int xm = x - (signed long int)1 > (signed long int)0 ? x - (signed long int)1 : (signed long int)0;
      signed long long int xp;
      if(!(1l + x >= (signed long int)((signed int)self->hogWidth + -1)))
        tmp_if_expr_1 = x + (signed long int)1;

      else
        tmp_if_expr_1 = (signed long int)((signed int)self->hogWidth - 1);
      xp = tmp_if_expr_1;
      signed long long int ym = y - (signed long int)1 > (signed long int)0 ? y - (signed long int)1 : (signed long int)0;
      signed long long int yp;
      if(!(1l + y >= (signed long int)((signed int)self->hogHeight + -1)))
        tmp_if_expr_2 = y + (signed long int)1;

      else
        tmp_if_expr_2 = (signed long int)((signed int)self->hogHeight - 1);
      yp = tmp_if_expr_2;
      double norm1 = (double)self->hogNorm[(signed long int)((unsigned long int)xm + (unsigned long int)ym * self->hogWidth)];
      double norm2 = (double)self->hogNorm[(signed long int)((unsigned long int)x + (unsigned long int)ym * self->hogWidth)];
      double norm3 = (double)self->hogNorm[(signed long int)((unsigned long int)xp + (unsigned long int)ym * self->hogWidth)];
      double norm4 = (double)self->hogNorm[(signed long int)((unsigned long int)xm + (unsigned long int)y * self->hogWidth)];
      double norm5 = (double)self->hogNorm[(signed long int)((unsigned long int)x + (unsigned long int)y * self->hogWidth)];
      double norm6 = (double)self->hogNorm[(signed long int)((unsigned long int)xp + (unsigned long int)y * self->hogWidth)];
      double norm7 = (double)self->hogNorm[(signed long int)((unsigned long int)xm + (unsigned long int)yp * self->hogWidth)];
      double norm8 = (double)self->hogNorm[(signed long int)((unsigned long int)x + (unsigned long int)yp * self->hogWidth)];
      double norm9 = (double)self->hogNorm[(signed long int)((unsigned long int)xp + (unsigned long int)yp * self->hogWidth)];
      double factor1;
      double factor2;
      double factor3;
      double factor4;
      double t1 = (double)0;
      double t2 = (double)0;
      double t3 = (double)0;
      double t4 = (double)0;
      float *oiter = features + x + (signed long int)(self->hogWidth * (unsigned long int)y);
      if(!(self->transposed == 0))
      {
        double return_value_sqrt_3;
        return_value_sqrt_3=sqrt(norm1 + norm2 + norm4 + norm5 + 1e-4);
        factor1 = 1.0 / return_value_sqrt_3;
        double return_value_sqrt_4;
        return_value_sqrt_4=sqrt(norm2 + norm3 + norm5 + norm6 + 1e-4);
        factor3 = 1.0 / return_value_sqrt_4;
        double return_value_sqrt_5;
        return_value_sqrt_5=sqrt(norm4 + norm5 + norm7 + norm8 + 1e-4);
        factor2 = 1.0 / return_value_sqrt_5;
        double return_value_sqrt_6;
        return_value_sqrt_6=sqrt(norm5 + norm6 + norm8 + norm9 + 1e-4);
        factor4 = 1.0 / return_value_sqrt_6;
      }

      else
      {
        double return_value_sqrt_7;
        return_value_sqrt_7=sqrt(norm1 + norm2 + norm4 + norm5 + 1e-4);
        factor1 = 1.0 / return_value_sqrt_7;
        double return_value_sqrt_8;
        return_value_sqrt_8=sqrt(norm2 + norm3 + norm5 + norm6 + 1e-4);
        factor2 = 1.0 / return_value_sqrt_8;
        double return_value_sqrt_9;
        return_value_sqrt_9=sqrt(norm4 + norm5 + norm7 + norm8 + 1e-4);
        factor3 = 1.0 / return_value_sqrt_9;
        double return_value_sqrt_10;
        return_value_sqrt_10=sqrt(norm5 + norm6 + norm8 + norm9 + 1e-4);
        factor4 = 1.0 / return_value_sqrt_10;
      }
      k = (unsigned long long int)0;
      for( ; !(k >= self->numOrientations); k = k + 1ull)
      {
        double ha = (double)vl_hog_extract__1__2__iter[(signed long int)(hogStride * k)];
        double hb = (double)vl_hog_extract__1__2__iter[(signed long int)(hogStride * (k + self->numOrientations))];
        double hc;
        double ha1 = factor1 * ha;
        double ha2 = factor2 * ha;
        double ha3 = factor3 * ha;
        double ha4 = factor4 * ha;
        double hb1 = factor1 * hb;
        double hb2 = factor2 * hb;
        double hb3 = factor3 * hb;
        double hb4 = factor4 * hb;
        double hc1 = ha1 + hb1;
        double hc2 = ha2 + hb2;
        double hc3 = ha3 + hb3;
        double hc4 = ha4 + hb4;
        ha1 = 0.2 < ha1 ? 0.2 : ha1;
        ha2 = 0.2 < ha2 ? 0.2 : ha2;
        ha3 = 0.2 < ha3 ? 0.2 : ha3;
        ha4 = 0.2 < ha4 ? 0.2 : ha4;
        hb1 = 0.2 < hb1 ? 0.2 : hb1;
        hb2 = 0.2 < hb2 ? 0.2 : hb2;
        hb3 = 0.2 < hb3 ? 0.2 : hb3;
        hb4 = 0.2 < hb4 ? 0.2 : hb4;
        hc1 = 0.2 < hc1 ? 0.2 : hc1;
        hc2 = 0.2 < hc2 ? 0.2 : hc2;
        hc3 = 0.2 < hc3 ? 0.2 : hc3;
        hc4 = 0.2 < hc4 ? 0.2 : hc4;
        t1 = t1 + hc1;
        t2 = t2 + hc2;
        t3 = t3 + hc3;
        t4 = t4 + hc4;
        switch((signed int)self->variant)
        {
          case VlHogVariantUoctti:
          {
            ha = 0.5 * (ha1 + ha2 + ha3 + ha4);
            hb = 0.5 * (hb1 + hb2 + hb3 + hb4);
            hc = 0.5 * (hc1 + hc2 + hc3 + hc4);
            *oiter = (float)ha;
            oiter[(signed long int)(hogStride * self->numOrientations)] = (float)hb;
            oiter[(signed long int)((unsigned long int)2 * hogStride * self->numOrientations)] = (float)hc;
            break;
          }
          case VlHogVariantDalalTriggs:
          {
            *oiter = (float)hc1;
            oiter[(signed long int)(hogStride * self->numOrientations)] = (float)hc2;
            oiter[(signed long int)((unsigned long int)2 * hogStride * self->numOrientations)] = (float)hc3;
            oiter[(signed long int)((unsigned long int)3 * hogStride * self->numOrientations)] = (float)hc4;
          }
        }
        oiter = oiter + (signed long int)hogStride;
      }
      switch((signed int)self->variant)
      {
        case VlHogVariantUoctti:
        {
          oiter = oiter + (signed long int)((unsigned long int)2 * hogStride * self->numOrientations);
          return_value_sqrtf_11=sqrtf(18.0f);
          *oiter = (float)((double)(1.0f / return_value_sqrtf_11) * t1);
          oiter = oiter + (signed long int)hogStride;
          return_value_sqrtf_12=sqrtf(18.0f);
          *oiter = (float)((double)(1.0f / return_value_sqrtf_12) * t2);
          oiter = oiter + (signed long int)hogStride;
          return_value_sqrtf_13=sqrtf(18.0f);
          *oiter = (float)((double)(1.0f / return_value_sqrtf_13) * t3);
          oiter = oiter + (signed long int)hogStride;
          return_value_sqrtf_14=sqrtf(18.0f);
          *oiter = (float)((double)(1.0f / return_value_sqrtf_14) * t4);
          oiter = oiter + (signed long int)hogStride;
          break;
        }
        case VlHogVariantDalalTriggs:
          ;
      }
      vl_hog_extract__1__2__iter = vl_hog_extract__1__2__iter + 1l;
    }
  }
}

// vl_hog_get_dimension
// file vl/hog.c line 504
extern unsigned long long int vl_hog_get_dimension(const struct VlHog_ *self)
{
  return self->dimension;
}

// vl_hog_get_glyph_size
// file vl/hog.c line 365
extern unsigned long long int vl_hog_get_glyph_size(const struct VlHog_ *self)
{
  return self->glyphSize;
}

// vl_hog_get_height
// file vl/hog.c line 526
extern unsigned long long int vl_hog_get_height(struct VlHog_ *self)
{
  return self->hogHeight;
}

// vl_hog_get_permutation
// file vl/hog.c line 383
extern const signed long long int * vl_hog_get_permutation(const struct VlHog_ *self)
{
  return self->permutation;
}

// vl_hog_get_use_bilinear_orientation_assignments
// file vl/hog.c line 405
extern signed int vl_hog_get_use_bilinear_orientation_assignments(const struct VlHog_ *self)
{
  return self->useBilinearOrientationAssigment;
}

// vl_hog_get_width
// file vl/hog.c line 515
extern unsigned long long int vl_hog_get_width(struct VlHog_ *self)
{
  return self->hogWidth;
}

// vl_hog_new
// file vl/hog.c line 174
extern struct VlHog_ * vl_hog_new(enum VlHogVariant_ variant, unsigned long long int numOrientations, signed int transposed)
{
  signed long long int o;
  signed long long int k;
  struct VlHog_ *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc((unsigned long int)1, sizeof(struct VlHog_) /*104ul*/ );
  self = (struct VlHog_ *)return_value_vl_calloc_1;
  self->variant = variant;
  self->numOrientations = numOrientations;
  self->glyphSize = (unsigned long long int)21;
  self->transposed = transposed;
  self->useBilinearOrientationAssigment = 0;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * self->numOrientations);
  self->orientationX = (float *)return_value_vl_malloc_2;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(float) /*4ul*/  * self->numOrientations);
  self->orientationY = (float *)return_value_vl_malloc_3;
  o = (signed long long int)0;
  for( ; !(o >= (signed long int)(signed int)self->numOrientations); o = o + 1ll)
  {
    double angle = ((double)o * 3.141592653589793) / (double)self->numOrientations;
    if(self->transposed == 0)
    {
      double return_value_cos_4;
      return_value_cos_4=cos(angle);
      self->orientationX[o] = (float)return_value_cos_4;
      double return_value_sin_5;
      return_value_sin_5=sin(angle);
      self->orientationY[o] = (float)return_value_sin_5;
    }

    else
    {
      double return_value_sin_6;
      return_value_sin_6=sin(angle);
      self->orientationX[o] = (float)return_value_sin_6;
      double return_value_cos_7;
      return_value_cos_7=cos(angle);
      self->orientationY[o] = (float)return_value_cos_7;
    }
  }
  switch((signed int)self->variant)
  {
    case VlHogVariantUoctti:
    {
      self->dimension = (unsigned long int)3 * self->numOrientations + (unsigned long int)4;
      break;
    }
    case VlHogVariantDalalTriggs:
      self->dimension = (unsigned long int)4 * self->numOrientations;
  }
  void *return_value_vl_malloc_8;
  return_value_vl_malloc_8=vl_malloc(self->dimension * sizeof(signed long long int) /*8ul*/ );
  self->permutation = (signed long long int *)return_value_vl_malloc_8;
  void *return_value_vl_calloc_9;
  switch((signed int)self->variant)
  {
    case VlHogVariantUoctti:
    {
      o = (signed long long int)0;
      for( ; !(o >= (signed long int)(signed int)self->numOrientations); o = o + 1ll)
      {
        signed long long int op = (signed long long int)(self->numOrientations - (unsigned long int)o);
        self->permutation[o] = op;
        self->permutation[(signed long int)((unsigned long int)o + self->numOrientations)] = (signed long long int)(((unsigned long int)op + self->numOrientations) % ((unsigned long int)2 * self->numOrientations));
        self->permutation[(signed long int)((unsigned long int)o + (unsigned long int)2 * self->numOrientations)] = (signed long long int)((unsigned long int)op % self->numOrientations + (unsigned long int)2 * self->numOrientations);
      }
      k = (signed long long int)0;
      for( ; !(k >= 4l); k = k + 1ll)
      {
        signed long long int blockx = k % (signed long int)2;
        signed long long int blocky = k / (signed long int)2;
        signed long long int q = ((signed long int)1 - blockx) + blocky * (signed long int)2;
        self->permutation[(signed long int)((unsigned long int)k + self->numOrientations * (unsigned long int)3)] = (signed long long int)((unsigned long int)q + self->numOrientations * (unsigned long int)3);
      }
      goto __CPROVER_DUMP_L17;
    }
    case VlHogVariantDalalTriggs:
    {
      k = (signed long long int)0;
      for( ; !(k >= 4l); k = k + 1ll)
      {
        signed long long int vl_hog_new__1__3__3__1__blockx = k % (signed long int)2;
        signed long long int vl_hog_new__1__3__3__1__blocky = k / (signed long int)2;
        signed long long int vl_hog_new__1__3__3__1__q = ((signed long int)1 - vl_hog_new__1__3__3__1__blockx) + vl_hog_new__1__3__3__1__blocky * (signed long int)2;
        o = (signed long long int)0;
        for( ; !(o >= (signed long int)(signed int)self->numOrientations); o = o + 1ll)
        {
          signed long long int vl_hog_new__1__3__3__1__1__1__op = (signed long long int)(self->numOrientations - (unsigned long int)o);
          self->permutation[(signed long int)((unsigned long int)o + (unsigned long int)k * self->numOrientations)] = (signed long long int)((unsigned long int)vl_hog_new__1__3__3__1__1__1__op % self->numOrientations + (unsigned long int)vl_hog_new__1__3__3__1__q * self->numOrientations);
        }
      }
    }
    default:
    {

    __CPROVER_DUMP_L17:
      ;
      return_value_vl_calloc_9=vl_calloc(self->glyphSize * self->glyphSize * self->numOrientations, sizeof(float) /*4ul*/ );
      self->glyphs = (float *)return_value_vl_calloc_9;
      o = (signed long long int)0;
      for( ; !(o >= (signed long int)(signed int)self->numOrientations); o = o + 1ll)
      {
        double vl_hog_new__1__4__1__angle;
        vl_hog_new__1__4__1__angle=fmod(((double)o * 3.141592653589793) / (double)self->numOrientations + 3.141592653589793 / (double)2, 3.141592653589793);
        double x2;
        double return_value_cos_10;
        return_value_cos_10=cos(vl_hog_new__1__4__1__angle);
        x2 = ((double)self->glyphSize * return_value_cos_10) / (double)2;
        double y2;
        double return_value_sin_11;
        return_value_sin_11=sin(vl_hog_new__1__4__1__angle);
        y2 = ((double)self->glyphSize * return_value_sin_11) / (double)2;
        if(vl_hog_new__1__4__1__angle <= 3.141592653589793 / 4.000000 || vl_hog_new__1__4__1__angle >= 9.424778e+0 / 4.000000)
        {
          double vl_hog_new__1__4__1__1__slope = y2 / x2;
          double offset = (((double)1 - vl_hog_new__1__4__1__1__slope) * (double)(self->glyphSize - (unsigned long int)1)) / (double)2;
          signed long long int skip;
          double return_value_cos_12;
          return_value_cos_12=cos(vl_hog_new__1__4__1__angle);
          double return_value_fabs_13;
          return_value_fabs_13=fabs(return_value_cos_12);
          skip = (signed long long int)((((double)1 - return_value_fabs_13) / (double)2) * (double)self->glyphSize);
          signed long long int i;
          signed long long int j;
          i = skip;
          for( ; !(i >= (signed long int)(signed int)self->glyphSize + -skip); i = i + 1ll)
          {
            j=vl_round_d(vl_hog_new__1__4__1__1__slope * (double)i + offset);
            if(self->transposed == 0)
              self->glyphs[(signed long int)((unsigned long int)i + self->glyphSize * (unsigned long int)j + self->glyphSize * self->glyphSize * (unsigned long int)o)] = (float)1;

            else
              self->glyphs[(signed long int)((unsigned long int)j + self->glyphSize * (unsigned long int)i + self->glyphSize * self->glyphSize * (unsigned long int)o)] = (float)1;
          }
        }

        else
        {
          double slope = x2 / y2;
          double vl_hog_new__1__4__1__2__offset = (((double)1 - slope) * (double)(self->glyphSize - (unsigned long int)1)) / (double)2;
          signed long long int vl_hog_new__1__4__1__2__skip;
          double return_value_sin_14;
          return_value_sin_14=sin(vl_hog_new__1__4__1__angle);
          vl_hog_new__1__4__1__2__skip = (signed long long int)((((double)1 - return_value_sin_14) / (double)2) * (double)self->glyphSize);
          signed long long int vl_hog_new__1__4__1__2__i;
          signed long long int vl_hog_new__1__4__1__2__j = vl_hog_new__1__4__1__2__skip;
          for( ; !(vl_hog_new__1__4__1__2__j >= (signed long int)(signed int)self->glyphSize + -vl_hog_new__1__4__1__2__skip); vl_hog_new__1__4__1__2__j = vl_hog_new__1__4__1__2__j + 1ll)
          {
            vl_hog_new__1__4__1__2__i=vl_round_d(slope * (double)vl_hog_new__1__4__1__2__j + vl_hog_new__1__4__1__2__offset);
            if(self->transposed == 0)
              self->glyphs[(signed long int)((unsigned long int)vl_hog_new__1__4__1__2__i + self->glyphSize * (unsigned long int)vl_hog_new__1__4__1__2__j + self->glyphSize * self->glyphSize * (unsigned long int)o)] = (float)1;

            else
              self->glyphs[(signed long int)((unsigned long int)vl_hog_new__1__4__1__2__j + self->glyphSize * (unsigned long int)vl_hog_new__1__4__1__2__i + self->glyphSize * self->glyphSize * (unsigned long int)o)] = (float)1;
          }
        }
      }
      return self;
    }
  }
}

// vl_hog_prepare_buffers
// file vl/hog.c line 540
static void vl_hog_prepare_buffers(struct VlHog_ *self, unsigned long long int width, unsigned long long int height, unsigned long long int cellSize)
{
  unsigned long long int hogWidth = (width + cellSize / (unsigned long int)2) / cellSize;
  unsigned long long int hogHeight = (height + cellSize / (unsigned long int)2) / cellSize;
  if(!(self->hog == ((float *)NULL)))
  {
    if(!(self->hogWidth == hogWidth))
      goto __CPROVER_DUMP_L1;

    if(!(self->hogHeight == hogHeight))
      goto __CPROVER_DUMP_L1;

    memset((void *)self->hog, 0, sizeof(float) /*4ul*/  * hogWidth * hogHeight * self->numOrientations * (unsigned long int)2);
    memset((void *)self->hogNorm, 0, sizeof(float) /*4ul*/  * hogWidth * hogHeight);
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!(self->hog == ((float *)NULL)))
    {
      vl_free((void *)self->hog);
      self->hog = (float *)(void *)0;
    }

    if(!(self->hogNorm == ((float *)NULL)))
    {
      vl_free((void *)self->hogNorm);
      self->hogNorm = (float *)(void *)0;
    }

    void *return_value_vl_calloc_1;
    return_value_vl_calloc_1=vl_calloc(hogWidth * hogHeight * self->numOrientations * (unsigned long int)2, sizeof(float) /*4ul*/ );
    self->hog = (float *)return_value_vl_calloc_1;
    void *return_value_vl_calloc_2;
    return_value_vl_calloc_2=vl_calloc(hogWidth * hogHeight, sizeof(float) /*4ul*/ );
    self->hogNorm = (float *)return_value_vl_calloc_2;
    self->hogWidth = hogWidth;
    self->hogHeight = hogHeight;
  }
}

// vl_hog_put_image
// file vl/hog.c line 596
extern void vl_hog_put_image(struct VlHog_ *self, const float *image, unsigned long long int width, unsigned long long int height, unsigned long long int numChannels, unsigned long long int cellSize)
{
  unsigned long long int hogStride;
  unsigned long long int channelStride = width * height;
  signed long long int x;
  signed long long int y;
  unsigned long long int k;
  vl_hog_prepare_buffers(self, width, height, cellSize);
  hogStride = self->hogWidth * self->hogHeight;
  y = (signed long long int)1;
  double tmp_if_expr_1;
  for( ; !(y >= (signed long int)((signed int)height + -1)); y = y + 1ll)
  {
    x = (signed long long int)1;
    for( ; !(x >= (signed long int)((signed int)width + -1)); x = x + 1ll)
    {
      float gradx = (float)0;
      float grady = (float)0;
      float gradNorm;
      float orientationWeights[2l] = { (float)-1, (float)-1 };
      signed long long int orientationBins[2l] = { (signed long long int)-1, (signed long long int)-1 };
      signed long long int orientation = (signed long long int)0;
      float hx;
      float hy;
      float wx1;
      float wx2;
      float wy1;
      float wy2;
      signed long long int binx;
      signed long long int biny;
      signed long long int o;
      const float *iter = image + (signed long int)((unsigned long int)y * width) + x;
      float gradNorm2 = (float)0;
      k = (unsigned long long int)0;
      for( ; !(k >= numChannels); k = k + 1ull)
      {
        float gradx_ = iter[(signed long int)1] - *(iter - (signed long int)1);
        float grady_ = iter[(signed long int)width] - *(iter - (signed long int)width);
        float gradNorm2_ = gradx_ * gradx_ + grady_ * grady_;
        if(gradNorm2_ > gradNorm2)
        {
          gradx = gradx_;
          grady = grady_;
          gradNorm2 = gradNorm2_;
        }

        iter = iter + (signed long int)channelStride;
      }
      gradNorm=sqrtf(gradNorm2);
      k = (unsigned long long int)0;
      for( ; !(k >= self->numOrientations); k = k + 1ull)
      {
        float orientationScore_ = gradx * self->orientationX[(signed long int)k] + grady * self->orientationY[(signed long int)k];
        signed long long int orientationBin_ = (signed long long int)k;
        if(orientationScore_ < 0.000000f)
        {
          orientationScore_ = -orientationScore_;
          orientationBin_ = orientationBin_ + (signed long long int)self->numOrientations;
        }

        if(orientationScore_ > orientationWeights[0l])
        {
          orientationBins[(signed long int)1] = orientationBins[(signed long int)0];
          orientationWeights[(signed long int)1] = orientationWeights[(signed long int)0];
          orientationBins[(signed long int)0] = orientationBin_;
          orientationWeights[(signed long int)0] = orientationScore_;
        }

        else
          if(orientationScore_ > orientationWeights[1l])
          {
            orientationBins[(signed long int)1] = orientationBin_;
            orientationWeights[(signed long int)1] = orientationScore_;
          }

      }
      if(!(self->useBilinearOrientationAssigment == 0))
      {
        float angle0;
        if((double)orientationWeights[0l] / ((double)gradNorm > 1e-10 ? (double)gradNorm : 1e-10) < 1.0)
          tmp_if_expr_1 = (double)orientationWeights[(signed long int)0] / ((double)gradNorm > 1e-10 ? (double)gradNorm : 1e-10);

        else
          tmp_if_expr_1 = 1.0;
        angle0=acosf((float)tmp_if_expr_1);
        orientationWeights[(signed long int)1] = (float)((double)angle0 / (3.141592653589793 / (double)self->numOrientations));
        orientationWeights[(signed long int)0] = (float)1 - orientationWeights[(signed long int)1];
      }

      else
      {
        orientationWeights[(signed long int)0] = (float)1;
        orientationBins[(signed long int)1] = (signed long long int)-1;
      }
      o = (signed long long int)0;
      for( ; !(o >= 2l); o = o + 1ll)
      {
        float ow;
        orientation = orientationBins[o];
        if(orientation >= 0l)
        {
          hx = (float)(((double)x + 0.5) / (double)cellSize - 0.5);
          hy = (float)(((double)y + 0.5) / (double)cellSize - 0.5);
          binx=vl_floor_f_link1(hx);
          biny=vl_floor_f_link1(hy);
          wx2 = hx - (float)binx;
          wy2 = hy - (float)biny;
          wx1 = (float)(1.0 - (double)wx2);
          wy1 = (float)(1.0 - (double)wy2);
          ow = orientationWeights[o];
          if(binx >= 0l && biny >= 0l)
            self->hog[(signed long int)((unsigned long int)binx + (unsigned long int)biny * self->hogWidth + (unsigned long int)orientation * hogStride)] = self->hog[(signed long int)((unsigned long int)binx + (unsigned long int)biny * self->hogWidth + (unsigned long int)orientation * hogStride)] + gradNorm * ow * wx1 * wy1;

          if(!(binx >= (signed long int)((signed int)self->hogWidth + -1)))
          {
            if(biny >= 0l)
              self->hog[(signed long int)((unsigned long int)(binx + (signed long int)1) + (unsigned long int)biny * self->hogWidth + (unsigned long int)orientation * hogStride)] = self->hog[(signed long int)((unsigned long int)(binx + (signed long int)1) + (unsigned long int)biny * self->hogWidth + (unsigned long int)orientation * hogStride)] + gradNorm * ow * wx2 * wy1;

          }

          if(!(binx >= (signed long int)((signed int)self->hogWidth + -1)))
          {
            if(!(biny >= (signed long int)((signed int)self->hogHeight + -1)))
              self->hog[(signed long int)((unsigned long int)(binx + (signed long int)1) + (unsigned long int)(biny + (signed long int)1) * self->hogWidth + (unsigned long int)orientation * hogStride)] = self->hog[(signed long int)((unsigned long int)(binx + (signed long int)1) + (unsigned long int)(biny + (signed long int)1) * self->hogWidth + (unsigned long int)orientation * hogStride)] + gradNorm * ow * wx2 * wy2;

          }

          if(binx >= 0l)
          {
            if(!(biny >= (signed long int)((signed int)self->hogHeight + -1)))
              self->hog[(signed long int)((unsigned long int)binx + (unsigned long int)(biny + (signed long int)1) * self->hogWidth + (unsigned long int)orientation * hogStride)] = self->hog[(signed long int)((unsigned long int)binx + (unsigned long int)(biny + (signed long int)1) * self->hogWidth + (unsigned long int)orientation * hogStride)] + gradNorm * ow * wx1 * wy2;

          }

        }

      }
    }
  }
}

// vl_hog_put_polar_field
// file vl/hog.c line 742
extern void vl_hog_put_polar_field(struct VlHog_ *self, const float *modulus, const float *angle, signed int directed, unsigned long long int width, unsigned long long int height, unsigned long long int cellSize)
{
  unsigned long long int hogStride;
  signed long long int x;
  signed long long int y;
  signed long long int o;
  signed long long int period = (signed long long int)(self->numOrientations * (unsigned long int)(directed != 0 ? 2 : 1));
  double angleStep = 3.141592653589793 / (double)self->numOrientations;
  vl_hog_prepare_buffers(self, width, height, cellSize);
  hogStride = self->hogWidth * self->hogHeight;
  y = (signed long long int)0;
  const float *tmp_post_1;
  const float *tmp_post_2;
  for( ; !(y >= (signed long int)(signed int)height); y = y + 1ll)
  {
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)width); x = x + 1ll)
    {
      float ho;
      float hx;
      float hy;
      float wo1;
      float wo2;
      float wx1;
      float wx2;
      float wy1;
      float wy2;
      signed long long int bino;
      signed long long int binx;
      signed long long int biny;
      float orientationWeights[2l] = { (float)0, (float)0 };
      signed long long int orientationBins[2l] = { (signed long long int)-1, (signed long long int)-1 };
      signed long long int orientation = (signed long long int)0;
      float thisAngle;
      tmp_post_1 = angle;
      angle = angle + 1l;
      thisAngle = *tmp_post_1;
      float thisModulus;
      tmp_post_2 = modulus;
      modulus = modulus + 1l;
      thisModulus = *tmp_post_2;
      if(!(thisModulus <= 0.0f))
      {
        ho = (float)((double)(float)thisAngle / angleStep);
        bino=vl_floor_f_link1(ho);
        wo2 = ho - (float)bino;
        wo1 = 1.0f - wo2;
        for( ; !(bino >= 0l); bino = bino + (signed long long int)(self->numOrientations * (unsigned long int)2))
          ;
        if(!(self->useBilinearOrientationAssigment == 0))
        {
          orientationBins[(signed long int)0] = bino % period;
          orientationBins[(signed long int)1] = (bino + (signed long int)1) % period;
          orientationWeights[(signed long int)0] = wo1;
          orientationWeights[(signed long int)1] = wo2;
        }

        else
        {
          orientationBins[(signed long int)0] = (bino + (signed long int)(wo1 > wo2 ? 0 : 1)) % period;
          orientationWeights[(signed long int)0] = (float)1;
          orientationBins[(signed long int)1] = (signed long long int)-1;
        }
        o = (signed long long int)0;
        for( ; !(o >= 2l); o = o + 1ll)
        {
          orientation = orientationBins[o];
          if(orientation >= 0l)
          {
            hx = (float)(((double)x + 0.5) / (double)cellSize - 0.5);
            hy = (float)(((double)y + 0.5) / (double)cellSize - 0.5);
            binx=vl_floor_f_link1(hx);
            biny=vl_floor_f_link1(hy);
            wx2 = hx - (float)binx;
            wy2 = hy - (float)biny;
            wx1 = (float)(1.0 - (double)wx2);
            wy1 = (float)(1.0 - (double)wy2);
            wx1 = wx1 * orientationWeights[o];
            wx2 = wx2 * orientationWeights[o];
            wy1 = wy1 * orientationWeights[o];
            wy2 = wy2 * orientationWeights[o];
            if(binx >= 0l && biny >= 0l)
              self->hog[(signed long int)((unsigned long int)binx + (unsigned long int)biny * self->hogWidth + (unsigned long int)orientation * hogStride)] = self->hog[(signed long int)((unsigned long int)binx + (unsigned long int)biny * self->hogWidth + (unsigned long int)orientation * hogStride)] + thisModulus * wx1 * wy1;

            if(!(binx >= (signed long int)((signed int)self->hogWidth + -1)))
            {
              if(biny >= 0l)
                self->hog[(signed long int)((unsigned long int)(binx + (signed long int)1) + (unsigned long int)biny * self->hogWidth + (unsigned long int)orientation * hogStride)] = self->hog[(signed long int)((unsigned long int)(binx + (signed long int)1) + (unsigned long int)biny * self->hogWidth + (unsigned long int)orientation * hogStride)] + thisModulus * wx2 * wy1;

            }

            if(!(binx >= (signed long int)((signed int)self->hogWidth + -1)))
            {
              if(!(biny >= (signed long int)((signed int)self->hogHeight + -1)))
                self->hog[(signed long int)((unsigned long int)(binx + (signed long int)1) + (unsigned long int)(biny + (signed long int)1) * self->hogWidth + (unsigned long int)orientation * hogStride)] = self->hog[(signed long int)((unsigned long int)(binx + (signed long int)1) + (unsigned long int)(biny + (signed long int)1) * self->hogWidth + (unsigned long int)orientation * hogStride)] + thisModulus * wx2 * wy2;

            }

            if(binx >= 0l)
            {
              if(!(biny >= (signed long int)((signed int)self->hogHeight + -1)))
                self->hog[(signed long int)((unsigned long int)binx + (unsigned long int)(biny + (signed long int)1) * self->hogWidth + (unsigned long int)orientation * hogStride)] = self->hog[(signed long int)((unsigned long int)binx + (unsigned long int)(biny + (signed long int)1) * self->hogWidth + (unsigned long int)orientation * hogStride)] + thisModulus * wx1 * wy2;

            }

          }

        }
      }

    }
  }
}

// vl_hog_render
// file vl/hog.c line 428
extern void vl_hog_render(const struct VlHog_ *self, float *image, const float *descriptor, unsigned long long int width, unsigned long long int height)
{
  signed long long int x;
  signed long long int y;
  signed long long int k;
  signed long long int cx;
  signed long long int cy;
  unsigned long long int hogStride = width * height;
  y = (signed long long int)0;
  float *tmp_post_1;
  const float *tmp_post_2;
  float *tmp_post_3;
  for( ; !(y >= (signed long int)(signed int)height); y = y + 1ll)
  {
    x = (signed long long int)0;
    for( ; !(x >= (signed long int)(signed int)width); x = x + 1ll)
    {
      float minWeight = (float)0;
      float maxWeight = (float)0;
      k = (signed long long int)0;
      for( ; !(k >= (signed long int)(signed int)self->numOrientations); k = k + 1ll)
      {
        float weight;
        const float *glyph = self->glyphs + (signed long int)((unsigned long int)k * self->glyphSize * self->glyphSize);
        float *glyphImage = image + (signed long int)(self->glyphSize * (unsigned long int)x) + (signed long int)((unsigned long int)y * width * self->glyphSize * self->glyphSize);
        switch((signed int)self->variant)
        {
          case VlHogVariantUoctti:
          {
            weight = descriptor[(signed long int)((unsigned long int)k * hogStride)] + descriptor[(signed long int)(((unsigned long int)k + self->numOrientations) * hogStride)] + descriptor[(signed long int)(((unsigned long int)k + (unsigned long int)2 * self->numOrientations) * hogStride)];
            break;
          }
          case VlHogVariantDalalTriggs:
          {
            weight = descriptor[(signed long int)((unsigned long int)k * hogStride)] + descriptor[(signed long int)(((unsigned long int)k + self->numOrientations) * hogStride)] + descriptor[(signed long int)(((unsigned long int)k + (unsigned long int)2 * self->numOrientations) * hogStride)] + descriptor[(signed long int)(((unsigned long int)k + (unsigned long int)3 * self->numOrientations) * hogStride)];
            break;
          }
          default:
            abort();
        }
        maxWeight = weight > maxWeight ? weight : maxWeight;
        minWeight = weight < minWeight ? weight : minWeight;
        cy = (signed long long int)0;
        for( ; !(cy >= (signed long int)(signed int)self->glyphSize); cy = cy + 1ll)
        {
          cx = (signed long long int)0;
          for( ; !(cx >= (signed long int)(signed int)self->glyphSize); cx = cx + 1ll)
          {
            tmp_post_1 = glyphImage;
            glyphImage = glyphImage + 1l;
            tmp_post_2 = glyph;
            glyph = glyph + 1l;
            *tmp_post_1 = *tmp_post_1 + weight * *tmp_post_2;
          }
          glyphImage = glyphImage + (signed long int)((width - (unsigned long int)1) * self->glyphSize);
        }
      }
      float *vl_hog_render__1__1__1__1__1__2__glyphImage = image + (signed long int)(self->glyphSize * (unsigned long int)x) + (signed long int)((unsigned long int)y * width * self->glyphSize * self->glyphSize);
      cy = (signed long long int)0;
      for( ; !(cy >= (signed long int)(signed int)self->glyphSize); cy = cy + 1ll)
      {
        cx = (signed long long int)0;
        for( ; !(cx >= (signed long int)(signed int)self->glyphSize); cx = cx + 1ll)
        {
          float value = *vl_hog_render__1__1__1__1__1__2__glyphImage;
          tmp_post_3 = vl_hog_render__1__1__1__1__1__2__glyphImage;
          vl_hog_render__1__1__1__1__1__2__glyphImage = vl_hog_render__1__1__1__1__1__2__glyphImage + 1l;
          *tmp_post_3 = minWeight > (maxWeight < value ? maxWeight : value) ? minWeight : (maxWeight < value ? maxWeight : value);
        }
        vl_hog_render__1__1__1__1__1__2__glyphImage = vl_hog_render__1__1__1__1__1__2__glyphImage + (signed long int)((width - (unsigned long int)1) * self->glyphSize);
      }
      descriptor = descriptor + 1l;
    }
  }
}

// vl_hog_set_use_bilinear_orientation_assignments
// file vl/hog.c line 395
extern void vl_hog_set_use_bilinear_orientation_assignments(struct VlHog_ *self, signed int x)
{
  self->useBilinearOrientationAssigment = x;
}

// vl_homogeneouskernelmap_delete
// file vl/homkermap.c line 435
extern void vl_homogeneouskernelmap_delete(struct _VlHomogeneousKernelMap *self)
{
  vl_free((void *)self->table);
  self->table = (double *)(void *)0;
  vl_free((void *)self);
}

// vl_homogeneouskernelmap_evaluate_d
// file vl/homkermap.h line 57
extern void vl_homogeneouskernelmap_evaluate_d(const struct _VlHomogeneousKernelMap *self, double *destination, unsigned long long int stride, double x)
{
  signed int exponent;
  unsigned int j;
  double mantissa;
  mantissa=frexp(x, &exponent);
  double sign = mantissa >= 0.0 ? +1.0 : -1.0;
  mantissa = mantissa * (double)2 * sign;
  exponent = exponent - 1;
  _Bool tmp_if_expr_1;
  if(IEEE_FLOAT_EQUAL(mantissa, 0.000000))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed long int)exponent <= self->minExponent ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed long int)exponent >= self->maxExponent ? (_Bool)1 : (_Bool)0;
  const double *tmp_post_3;
  const double *tmp_post_4;
  if(tmp_if_expr_2)
  {
    j = (unsigned int)0;
    for( ; !((unsigned long int)j >= 2ul * self->order + 1ul); j = j + 1u)
    {
      *destination = (double)0.0;
      destination = destination + (signed long int)stride;
    }
  }

  else
  {
    unsigned long long int featureDimension = (unsigned long int)2 * self->order + (unsigned long int)1;
    const double *v1 = self->table + (signed long int)((unsigned long int)((signed long int)exponent - self->minExponent) * self->numSubdivisions * featureDimension);
    const double *v2;
    double f1;
    double f2;
    mantissa = mantissa - 1.0;
    for( ; mantissa >= self->subdivision; v1 = v1 + (signed long int)featureDimension)
      mantissa = mantissa - self->subdivision;
    v2 = v1 + (signed long int)featureDimension;
    j = (unsigned int)0;
    for( ; !((unsigned long int)j >= featureDimension); j = j + 1u)
    {
      tmp_post_3 = v1;
      v1 = v1 + 1l;
      f1 = *tmp_post_3;
      tmp_post_4 = v2;
      v2 = v2 + 1l;
      f2 = *tmp_post_4;
      *destination = (double)sign * ((f2 - f1) * (double)self->numSubdivisions * mantissa + f1);
      destination = destination + (signed long int)stride;
    }
  }
}

// vl_homogeneouskernelmap_evaluate_f
// file vl/homkermap.h line 63
extern void vl_homogeneouskernelmap_evaluate_f(const struct _VlHomogeneousKernelMap *self, float *destination, unsigned long long int stride, double x)
{
  signed int exponent;
  unsigned int j;
  double mantissa;
  mantissa=frexp(x, &exponent);
  double sign = mantissa >= 0.0 ? +1.0 : -1.0;
  mantissa = mantissa * (double)2 * sign;
  exponent = exponent - 1;
  _Bool tmp_if_expr_1;
  if(IEEE_FLOAT_EQUAL(mantissa, 0.000000))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (signed long int)exponent <= self->minExponent ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = (signed long int)exponent >= self->maxExponent ? (_Bool)1 : (_Bool)0;
  const double *tmp_post_3;
  const double *tmp_post_4;
  if(tmp_if_expr_2)
  {
    j = (unsigned int)0;
    for( ; !((unsigned long int)j >= 2ul * self->order + 1ul); j = j + 1u)
    {
      *destination = (float)0.0;
      destination = destination + (signed long int)stride;
    }
  }

  else
  {
    unsigned long long int featureDimension = (unsigned long int)2 * self->order + (unsigned long int)1;
    const double *v1 = self->table + (signed long int)((unsigned long int)((signed long int)exponent - self->minExponent) * self->numSubdivisions * featureDimension);
    const double *v2;
    double f1;
    double f2;
    mantissa = mantissa - 1.0;
    for( ; mantissa >= self->subdivision; v1 = v1 + (signed long int)featureDimension)
      mantissa = mantissa - self->subdivision;
    v2 = v1 + (signed long int)featureDimension;
    j = (unsigned int)0;
    for( ; !((unsigned long int)j >= featureDimension); j = j + 1u)
    {
      tmp_post_3 = v1;
      v1 = v1 + 1l;
      f1 = *tmp_post_3;
      tmp_post_4 = v2;
      v2 = v2 + 1l;
      f2 = *tmp_post_4;
      *destination = (float)((double)(float)sign * ((f2 - f1) * (double)self->numSubdivisions * mantissa + f1));
      destination = destination + (signed long int)stride;
    }
  }
}

// vl_homogeneouskernelmap_get_dimension
// file vl/homkermap.h line 76
extern unsigned long long int vl_homogeneouskernelmap_get_dimension(const struct _VlHomogeneousKernelMap *self)
{
  return (unsigned long int)2 * self->order + (unsigned long int)1;
}

// vl_homogeneouskernelmap_get_kernel_type
// file vl/homkermap.c line 476
extern enum anonymous_3 vl_homogeneouskernelmap_get_kernel_type(const struct _VlHomogeneousKernelMap *self)
{
  return self->kernelType;
}

// vl_homogeneouskernelmap_get_order
// file vl/homkermap.c line 452
extern unsigned long long int vl_homogeneouskernelmap_get_order(const struct _VlHomogeneousKernelMap *self)
{
  return self->order;
}

// vl_homogeneouskernelmap_get_smooth_spectrum
// file vl/homkermap.c line 271
static inline double vl_homogeneouskernelmap_get_smooth_spectrum(const struct _VlHomogeneousKernelMap *self, double omega)
{
  double kappa_hat = (double)0;
  double omegap;
  double epsilon = 1e-2;
  const double omegaRange = 2.0 / (self->period * epsilon);
  const double domega = ((double)2 * omegaRange) / ((double)2 * 1024.0 + (double)1);
  switch((signed int)self->windowType)
  {
    case VlHomogeneousKernelMapWindowUniform:
    {
      kappa_hat=vl_homogeneouskernelmap_get_spectrum(self, omega);
      break;
    }
    case VlHomogeneousKernelMapWindowRectangular:
    {
      omegap = -omegaRange;
      for( ; omegap <= omegaRange; omegap = omegap + domega)
      {
        double win;
        win=sinc((self->period / 2.0) * omegap);
        win = win * (self->period / (2.0 * 3.141592653589793));
        double return_value_vl_homogeneouskernelmap_get_spectrum_1;
        return_value_vl_homogeneouskernelmap_get_spectrum_1=vl_homogeneouskernelmap_get_spectrum(self, omegap + omega);
        kappa_hat = kappa_hat + win * return_value_vl_homogeneouskernelmap_get_spectrum_1;
      }
      kappa_hat = kappa_hat * domega;
      kappa_hat = kappa_hat > 0.0 ? kappa_hat : 0.0;
      break;
    }
    default:
      abort();
  }
  return kappa_hat;
}

// vl_homogeneouskernelmap_get_spectrum
// file vl/homkermap.c line 240
static inline double vl_homogeneouskernelmap_get_spectrum(const struct _VlHomogeneousKernelMap *self, double omega)
{
  double return_value_exp_1;
  double return_value_exp_2;
  double return_value_log_3;
  double return_value_exp_4;
  double return_value_exp_5;
  switch((signed int)self->kernelType)
  {
    case VlHomogeneousKernelIntersection:
      return (2.0 / 3.141592653589793) / ((double)1 + (double)4 * omega * omega);
    case VlHomogeneousKernelChi2:
    {
      return_value_exp_1=exp(3.141592653589793 * omega);
      return_value_exp_2=exp(-3.141592653589793 * omega);
      return 2.0 / (return_value_exp_1 + return_value_exp_2);
    }
    case VlHomogeneousKernelJS:
    {
      return_value_log_3=log(4.0);
      return_value_exp_4=exp(3.141592653589793 * omega);
      return_value_exp_5=exp(-3.141592653589793 * omega);
      return (((2.0 / return_value_log_3) * 2.0) / (return_value_exp_4 + return_value_exp_5)) / ((double)1 + (double)4 * omega * omega);
    }
    default:
      abort();
  }
}

// vl_homogeneouskernelmap_get_window_type
// file vl/homkermap.c line 488
extern enum anonymous_4 vl_homogeneouskernelmap_get_window_type(const struct _VlHomogeneousKernelMap *self)
{
  return self->windowType;
}

// vl_homogeneouskernelmap_new
// file vl/homkermap.c line 326
extern struct _VlHomogeneousKernelMap * vl_homogeneouskernelmap_new(enum anonymous_3 kernelType, double gamma, unsigned long long int order, double period, enum anonymous_4 windowType)
{
  signed int tableWidth;
  signed int tableHeight;
  struct _VlHomogeneousKernelMap *self;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct _VlHomogeneousKernelMap) /*80ul*/ );
  self = (struct _VlHomogeneousKernelMap *)return_value_vl_malloc_1;
  double return_value_sqrt_2;
  double return_value_sqrt_3;
  double return_value_log_4;
  double return_value_sqrt_5;
  double return_value_sqrt_6;
  double return_value_log_7;
  double *tmp_post_10;
  double *tmp_post_11;
  double *tmp_post_13;
  if(self == ((struct _VlHomogeneousKernelMap *)NULL))
    return (struct _VlHomogeneousKernelMap *)(void *)0;

  else
  {
    if(period < 0.000000)
    {
      switch((signed int)windowType)
      {
        case VlHomogeneousKernelMapWindowUniform:
        {
          switch((signed int)kernelType)
          {
            case VlHomogeneousKernelChi2:
            {
              return_value_sqrt_2=sqrt((double)(order + (unsigned long int)0));
              period = 5.86 * return_value_sqrt_2 + 3.65;
              break;
            }
            case VlHomogeneousKernelJS:
            {
              return_value_sqrt_3=sqrt((double)(order + (unsigned long int)0));
              period = 6.64 * return_value_sqrt_3 + 7.24;
              break;
            }
            case VlHomogeneousKernelIntersection:
            {
              return_value_log_4=log((double)order + 0.8);
              period = 2.38 * return_value_log_4 + 5.6;
            }
          }
          break;
        }
        case VlHomogeneousKernelMapWindowRectangular:
        {
          if(!((signed int)kernelType == VlHomogeneousKernelChi2))
          {
            if((signed int)kernelType == VlHomogeneousKernelJS)
              goto __CPROVER_DUMP_L9;

            if((signed int)kernelType == VlHomogeneousKernelIntersection)
              goto __CPROVER_DUMP_L10;

            break;
          }

          return_value_sqrt_5=sqrt((double)order + 4.44);
          period = 8.80 * return_value_sqrt_5 - 12.6;
          break;

        __CPROVER_DUMP_L9:
          ;
          return_value_sqrt_6=sqrt((double)order + 1.00);
          period = 9.63 * return_value_sqrt_6 - 2.93;
          break;

        __CPROVER_DUMP_L10:
          ;
          return_value_log_7=log((double)order + 0.99);
          period = 2.00 * return_value_log_7 + 3.52;
        }
      }
      period = period > 1.0 ? period : 1.0;
    }

    self->kernelType = kernelType;
    self->windowType = windowType;
    self->gamma = gamma;
    self->order = order;
    self->period = period;
    self->numSubdivisions = (unsigned long int)8 + (unsigned long int)8 * order;
    self->subdivision = 1.0 / (double)self->numSubdivisions;
    self->minExponent = (signed long long int)-20;
    self->maxExponent = (signed long long int)8;
    tableHeight = (signed int)((unsigned long int)2 * self->order + (unsigned long int)1);
    tableWidth = (signed int)(self->numSubdivisions * (unsigned long int)((self->maxExponent - self->minExponent) + (signed long int)1));
    void *return_value_vl_malloc_8;
    return_value_vl_malloc_8=vl_malloc(sizeof(double) /*8ul*/  * ((unsigned long int)(tableHeight * tableWidth) + (unsigned long int)2 * ((unsigned long int)1 + self->order)));
    self->table = (double *)return_value_vl_malloc_8;
    if(self->table == ((double *)NULL))
    {
      vl_free((void *)self);
      return (struct _VlHomogeneousKernelMap *)(void *)0;
    }

    else
    {
      signed long long int exponent;
      unsigned long long int i;
      unsigned long long int j;
      double *tablep = self->table;
      double *kappa = self->table + (signed long int)(tableHeight * tableWidth);
      double *freq = kappa + (signed long int)((unsigned long int)1 + self->order);
      double L = (2.0 * 3.141592653589793) / self->period;
      j = (unsigned long long int)0;
      i = (unsigned long long int)0;
      while(self->order >= i)
      {
        freq[(signed long int)i] = (double)j;
        kappa[(signed long int)i]=vl_homogeneouskernelmap_get_smooth_spectrum(self, (double)j * L);
        j = j + 1ull;
        if(kappa[(signed long int)i] > 0.000000 || j >= 3ul * i)
          i = i + 1ull;

      }
      exponent = self->minExponent;
      for( ; self->maxExponent >= exponent; exponent = exponent + 1ll)
      {
        double x;
        double Lxgamma;
        double Llogx;
        double xgamma;
        double sqrt2kappaLxgamma;
        double mantissa = 1.0;
        i = (unsigned long long int)0;
        for( ; !(i >= self->numSubdivisions); mantissa = mantissa + self->subdivision)
        {
          x=ldexp(mantissa, (signed int)exponent);
          xgamma=pow(x, self->gamma);
          Lxgamma = L * xgamma;
          double return_value_log_9;
          return_value_log_9=log(x);
          Llogx = L * return_value_log_9;
          tmp_post_10 = tablep;
          tablep = tablep + 1l;
          *tmp_post_10=sqrt(Lxgamma * kappa[(signed long int)0]);
          j = (unsigned long long int)1;
          for( ; self->order >= j; j = j + 1ull)
          {
            sqrt2kappaLxgamma=sqrt(2.0 * Lxgamma * kappa[(signed long int)j]);
            tmp_post_11 = tablep;
            tablep = tablep + 1l;
            double return_value_cos_12;
            return_value_cos_12=cos(freq[(signed long int)j] * Llogx);
            *tmp_post_11 = sqrt2kappaLxgamma * return_value_cos_12;
            tmp_post_13 = tablep;
            tablep = tablep + 1l;
            double return_value_sin_14;
            return_value_sin_14=sin(freq[(signed long int)j] * Llogx);
            *tmp_post_13 = sqrt2kappaLxgamma * return_value_sin_14;
          }
          i = i + 1ull;
        }
      }
      return self;
    }
  }
}

// vl_ikm_delete
// file vl/ikmeans.h line 58
extern void vl_ikm_delete(struct _VlIKMFilt *f)
{
  if(!(f == ((struct _VlIKMFilt *)NULL)))
  {
    if(!(f->centers == ((signed int *)NULL)))
      vl_free((void *)f->centers);

    if(!(f->inter_dist == ((signed int *)NULL)))
      vl_free((void *)f->inter_dist);

    vl_free((void *)f);
  }

}

// vl_ikm_elkan_update_inter_dist
// file vl/ikmeans_elkan.tc line 21
static void vl_ikm_elkan_update_inter_dist(struct _VlIKMFilt *f)
{
  unsigned long long int i;
  unsigned long long int k;
  unsigned long long int kp;
  k = (unsigned long long int)0;
  for( ; !(k >= f->K); k = k + 1ull)
  {
    kp = (unsigned long long int)0;
    for( ; !(kp >= f->K); kp = kp + 1ull)
    {
      signed int dist = 0;
      if(!(k == kp))
      {
        i = (unsigned long long int)0;
        for( ; !(i >= f->M); i = i + 1ull)
        {
          signed int delta = f->centers[(signed long int)(kp * f->M + i)] - f->centers[(signed long int)(k * f->M + i)];
          dist = dist + delta * delta;
        }
      }

      f->inter_dist[(signed long int)(kp * f->K + k)] = dist >> 2;
      f->inter_dist[(signed long int)(k * f->K + kp)] = f->inter_dist[(signed long int)(kp * f->K + k)];
    }
  }
}

// vl_ikm_get_K
// file vl/ikmeans.h line 74
extern unsigned long long int vl_ikm_get_K(const struct _VlIKMFilt *f)
{
  return f->K;
}

// vl_ikm_get_centers
// file vl/ikmeans.c line 268
extern const signed int * vl_ikm_get_centers(const struct _VlIKMFilt *f)
{
  return f->centers;
}

// vl_ikm_get_max_niters
// file vl/ikmeans.c line 257
extern unsigned long long int vl_ikm_get_max_niters(const struct _VlIKMFilt *f)
{
  return f->max_niters;
}

// vl_ikm_get_ndims
// file vl/ikmeans.c line 223
extern unsigned long long int vl_ikm_get_ndims(const struct _VlIKMFilt *f)
{
  return f->M;
}

// vl_ikm_get_verbosity
// file vl/ikmeans.c line 246
extern signed int vl_ikm_get_verbosity(const struct _VlIKMFilt *f)
{
  return f->verb;
}

// vl_ikm_init
// file vl/ikmeans_init.tc line 81
extern void vl_ikm_init(struct _VlIKMFilt *f, const signed int *centers, unsigned long long int M, unsigned long long int K)
{
  alloc(f, M, K);
  memcpy((void *)f->centers, (const void *)centers, sizeof(signed int) /*4ul*/  * M * K);
  vl_ikm_init_helper(f);
}

// vl_ikm_init_elkan
// file vl/ikmeans_elkan.tc line 46
static void vl_ikm_init_elkan(struct _VlIKMFilt *f)
{
  if(!(f->inter_dist == ((signed int *)NULL)))
    vl_free((void *)f->inter_dist);

  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(signed int) /*4ul*/  * f->K * f->K);
  f->inter_dist = (signed int *)return_value_vl_malloc_1;
  vl_ikm_elkan_update_inter_dist(f);
}

// vl_ikm_init_helper
// file vl/ikmeans_init.tc line 65
static void vl_ikm_init_helper(struct _VlIKMFilt *f)
{
  switch(f->method)
  {
    case 0:
    {
      vl_ikm_init_lloyd(f);
      break;
    }
    case 1:
      vl_ikm_init_elkan(f);
  }
}

// vl_ikm_init_lloyd
// file vl/ikmeans_lloyd.tc line 22
static void vl_ikm_init_lloyd(struct _VlIKMFilt *f)
{
  ;
}

// vl_ikm_init_rand
// file vl/ikmeans_init.tc line 95
extern void vl_ikm_init_rand(struct _VlIKMFilt *f, unsigned long long int M, unsigned long long int K)
{
  unsigned long long int k;
  unsigned long long int i;
  struct _VlRand *rand;
  rand=vl_get_rand();
  alloc(f, M, K);
  k = (unsigned long long int)0;
  for( ; !(k >= K); k = k + 1ull)
  {
    i = (unsigned long long int)0;
    for( ; !(i >= M); i = i + 1ull)
    {
      unsigned int return_value_vl_rand_uint32_1;
      return_value_vl_rand_uint32_1=vl_rand_uint32(rand);
      f->centers[(signed long int)(k * M + i)] = (signed int)return_value_vl_rand_uint32_1;
    }
  }
  vl_ikm_init_helper(f);
}

// vl_ikm_init_rand_data
// file vl/ikmeans.h line 65
extern void vl_ikm_init_rand_data(struct _VlIKMFilt *f, const unsigned char *data, unsigned long long int M, unsigned long long int N, unsigned long long int K)
{
  unsigned long long int i;
  unsigned long long int j;
  unsigned long long int k;
  struct _VlRand *rand;
  rand=vl_get_rand();
  struct anonymous_5 *pairs;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct anonymous_5) /*16ul*/  * N);
  pairs = (struct anonymous_5 *)return_value_vl_malloc_1;
  alloc(f, M, K);
  j = (unsigned long long int)0;
  for( ; !(j >= N); j = j + 1ull)
  {
    (pairs + (signed long int)j)->j = (signed long long int)j;
    unsigned int return_value_vl_rand_uint32_2;
    return_value_vl_rand_uint32_2=vl_rand_uint32(rand);
    (pairs + (signed long int)j)->w = (signed long long int)((signed int)return_value_vl_rand_uint32_2 >> 2);
  }
  qsort((void *)pairs, N, sizeof(struct anonymous_5) /*16ul*/ , cmp_pair);
  j = (unsigned long long int)0;
  k = (unsigned long long int)0;
  for( ; !(k >= K); k = k + 1ull)
  {
    for( ; !(j >= N + 18446744073709551615ul); j = j + 1ull)
    {
      unsigned long long int prevk = (unsigned long long int)0;
      prevk = (unsigned long long int)0;
      for( ; !(prevk >= k); prevk = prevk + 1ull)
      {
        signed int dist;
        dist=calc_dist2(f->centers + (signed long int)(prevk * M), data + (signed long int)((unsigned long int)(pairs + (signed long int)j)->j * M), M);
        if(dist == 0)
          break;

      }
      if(prevk == k)
        break;

    }
    i = (unsigned long long int)0;
    for( ; !(i >= M); i = i + 1ull)
      f->centers[(signed long int)(k * M + i)] = (signed int)data[(signed long int)((unsigned long long int)(pairs + (signed long int)j)->j * M + i)];
    if(!(j >= N + 18446744073709551615ul))
      j = j + 1ull;

  }
  vl_free((void *)pairs);
  vl_ikm_init_helper(f);
}

// vl_ikm_new
// file vl/ikmeans.h line 57
extern struct _VlIKMFilt * vl_ikm_new(signed int method)
{
  struct _VlIKMFilt *f;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(struct _VlIKMFilt) /*48ul*/ , (unsigned long int)1);
  f = (struct _VlIKMFilt *)return_value_vl_calloc_1;
  f->method = method;
  f->max_niters = (unsigned long long int)200;
  return f;
}

// vl_ikm_push
// file vl/ikmeans.h line 67
extern void vl_ikm_push(struct _VlIKMFilt *f, unsigned int *asgn, const unsigned char *data, unsigned long long int N)
{
  switch(f->method)
  {
    case 0:
    {
      vl_ikm_push_lloyd(f, asgn, data, N);
      break;
    }
    case 1:
    {
      vl_ikm_push_elkan(f, asgn, data, N);
      break;
    }
    default:
      abort();
  }
}

// vl_ikm_push_elkan
// file vl/ikmeans_elkan.tc line 324
static void vl_ikm_push_elkan(struct _VlIKMFilt *f, unsigned int *asgn, const unsigned char *data, unsigned long long int N)
{
  unsigned long long int i;
  unsigned long long int c;
  unsigned long long int cx;
  unsigned long long int x;
  unsigned long long int dist_calc = (unsigned long long int)0;
  signed int dist;
  signed int best_dist;
  signed int *d_pt = f->inter_dist;
  x = (unsigned long long int)0;
  for( ; !(x >= N); x = x + 1ull)
  {
    best_dist = (signed int)0x7fffffffUL;
    cx = (unsigned long long int)0;
    c = (unsigned long long int)0;
    for( ; !(c >= f->K); c = c + 1ull)
      if(!(d_pt[(signed long int)f->K * (signed long int)cx + (signed long int)c] >= best_dist))
      {
        dist_calc = dist_calc + 1ull;
        dist = 0;
        i = (unsigned long long int)0;
        for( ; !(i >= f->M); i = i + 1ull)
        {
          signed int delta = (signed int)data[(signed long int)(x * f->M + i)] - f->centers[(signed long int)(c * f->M + i)];
          dist = dist + delta * delta;
        }
        if(!(dist >= best_dist))
        {
          best_dist = dist;
          cx = c;
        }

      }

    asgn[(signed long int)x] = (unsigned int)cx;
  }
}

// vl_ikm_push_lloyd
// file vl/ikmeans_lloyd.tc line 125
static void vl_ikm_push_lloyd(struct _VlIKMFilt *f, unsigned int *asgn, const unsigned char *data, unsigned long long int N)
{
  unsigned long long int j = (unsigned long long int)0;
  for( ; !(j >= N); j = j + 1ull)
    asgn[(signed long int)j]=vl_ikm_push_one(f->centers, data + (signed long int)(j * f->M), f->M, f->K);
}

// vl_ikm_push_one
// file vl/ikmeans.c line 185
extern unsigned int vl_ikm_push_one(const signed int *centers, const unsigned char *data, unsigned long long int M, unsigned long long int K)
{
  unsigned long long int i;
  unsigned long long int k;
  unsigned long long int best = (unsigned long long int)-1;
  signed int best_dist = 0;
  k = (unsigned long long int)0;
  for( ; !(k >= K); k = k + 1ull)
  {
    signed int dist = 0;
    i = (unsigned long long int)0;
    for( ; !(i >= M); i = i + 1ull)
    {
      signed int delta = (signed int)data[(signed long int)i] - centers[(signed long int)(k * M + i)];
      dist = dist + delta * delta;
    }
    if(best == 18446744073709551615ull || !(dist >= best_dist))
    {
      best = k;
      best_dist = dist;
    }

  }
  return (unsigned int)best;
}

// vl_ikm_set_max_niters
// file vl/ikmeans.h line 83
extern void vl_ikm_set_max_niters(struct _VlIKMFilt *f, unsigned long long int max_niters)
{
  f->max_niters = max_niters;
}

// vl_ikm_set_verbosity
// file vl/ikmeans.h line 82
extern void vl_ikm_set_verbosity(struct _VlIKMFilt *f, signed int verb)
{
  f->verb = 0 > verb ? 0 : verb;
}

// vl_ikm_train
// file vl/ikmeans.h line 66
extern signed int vl_ikm_train(struct _VlIKMFilt *f, const unsigned char *data, unsigned long long int N)
{
  signed int err;
  if(!(f->verb == 0))
  {
    signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
    return_value_vl_get_printf_func_1=vl_get_printf_func();
    return_value_vl_get_printf_func_1("ikm: training with %d data\n", N);
    signed int (*return_value_vl_get_printf_func_2)(const char *, ...);
    return_value_vl_get_printf_func_2=vl_get_printf_func();
    return_value_vl_get_printf_func_2("ikm: %d clusters\n", f->K);
  }

  switch(f->method)
  {
    case 0:
    {
      err=vl_ikm_train_lloyd(f, data, N);
      break;
    }
    case 1:
    {
      err=vl_ikm_train_elkan(f, data, N);
      break;
    }
    default:
      abort();
  }
  return err;
}

// vl_ikm_train_elkan
// file vl/ikmeans_elkan.tc line 64
static signed int vl_ikm_train_elkan(struct _VlIKMFilt *f, const unsigned char *data, unsigned long long int N)
{
  unsigned long long int i;
  unsigned long long int pass;
  unsigned long long int c;
  unsigned long long int cp;
  unsigned long long int x;
  unsigned long long int vl_ikm_train_elkan__1__cx;
  unsigned long long int dist_calc = (unsigned long long int)0;
  signed int vl_ikm_train_elkan__1__dist;
  signed int *m_pt;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(signed int) /*4ul*/  * f->M * f->K);
  m_pt = (signed int *)return_value_vl_malloc_1;
  signed int *u_pt;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(signed int) /*4ul*/  * N);
  u_pt = (signed int *)return_value_vl_malloc_2;
  char *r_pt;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(char) /*1ul*/  * (unsigned long int)1 * N);
  r_pt = (char *)return_value_vl_malloc_3;
  signed int *s_pt;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(signed int) /*4ul*/  * f->K);
  s_pt = (signed int *)return_value_vl_malloc_4;
  signed int *l_pt;
  void *return_value_vl_malloc_5;
  return_value_vl_malloc_5=vl_malloc(sizeof(signed int) /*4ul*/  * N * f->K);
  l_pt = (signed int *)return_value_vl_malloc_5;
  signed int *d_pt = f->inter_dist;
  unsigned int *asgn;
  void *return_value_vl_malloc_6;
  return_value_vl_malloc_6=vl_malloc(sizeof(unsigned int) /*4ul*/  * N);
  asgn = (unsigned int *)return_value_vl_malloc_6;
  unsigned int *counts;
  void *return_value_vl_malloc_7;
  return_value_vl_malloc_7=vl_malloc(sizeof(unsigned int) /*4ul*/  * N);
  counts = (unsigned int *)return_value_vl_malloc_7;
  signed int done = 0;
  vl_ikm_elkan_update_inter_dist(f);
  memset((void *)l_pt, 0, sizeof(signed int) /*4ul*/  * N * f->K);
  memset((void *)u_pt, 0, sizeof(signed int) /*4ul*/  * N);
  memset((void *)r_pt, 0, sizeof(char) /*1ul*/  * N);
  x = (unsigned long long int)0;
  for( ; !(x >= N); x = x + 1ull)
  {
    signed int vl_ikm_train_elkan__1__1__1__best_dist;
    dist_calc = dist_calc + 1ull;
    vl_ikm_train_elkan__1__dist = 0;
    i = (unsigned long long int)0;
    for( ; !(i >= f->M); i = i + 1ull)
    {
      signed int vl_ikm_train_elkan__1__1__1__1__1__delta = (signed int)data[(signed long int)(x * f->M + i)] - f->centers[(signed long int)i];
      vl_ikm_train_elkan__1__dist = vl_ikm_train_elkan__1__dist + vl_ikm_train_elkan__1__1__1__1__1__delta * vl_ikm_train_elkan__1__1__1__1__1__delta;
    }
    vl_ikm_train_elkan__1__cx = (unsigned long long int)0;
    vl_ikm_train_elkan__1__1__1__best_dist = vl_ikm_train_elkan__1__dist;
    l_pt[(signed long int)x] = vl_ikm_train_elkan__1__dist;
    c = (unsigned long long int)1;
    for( ; !(c >= f->K); c = c + 1ull)
      if(!(d_pt[(signed long int)f->K * (signed long int)vl_ikm_train_elkan__1__cx + (signed long int)c] >= vl_ikm_train_elkan__1__1__1__best_dist))
      {
        dist_calc = dist_calc + 1ull;
        vl_ikm_train_elkan__1__dist = 0;
        i = (unsigned long long int)0;
        for( ; !(i >= f->M); i = i + 1ull)
        {
          signed int vl_ikm_train_elkan__1__1__1__2__1__1__1__1__delta = (signed int)data[(signed long int)(x * f->M + i)] - f->centers[(signed long int)(c * f->M + i)];
          vl_ikm_train_elkan__1__dist = vl_ikm_train_elkan__1__dist + vl_ikm_train_elkan__1__1__1__2__1__1__1__1__delta * vl_ikm_train_elkan__1__1__1__2__1__1__1__1__delta;
        }
        l_pt[(signed long int)(N * c + x)] = vl_ikm_train_elkan__1__dist;
        if(!(vl_ikm_train_elkan__1__dist >= vl_ikm_train_elkan__1__1__1__best_dist))
        {
          vl_ikm_train_elkan__1__1__1__best_dist = vl_ikm_train_elkan__1__dist;
          vl_ikm_train_elkan__1__cx = c;
        }

      }

    asgn[(signed long int)x] = (unsigned int)vl_ikm_train_elkan__1__cx;
    u_pt[(signed long int)x] = vl_ikm_train_elkan__1__1__1__best_dist;
  }
  pass = (unsigned long long int)0;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_15;
  for( ; (_Bool)1; pass = pass + 1ull)
  {
    memset((void *)m_pt, 0, sizeof(signed int) /*4ul*/  * f->M * f->K);
    memset((void *)counts, 0, sizeof(unsigned int) /*4ul*/  * f->K);
    x = (unsigned long long int)0;
    for( ; !(x >= N); x = x + 1ull)
    {
      signed int vl_ikm_train_elkan__1__2__1__1__1__cx = (signed int)asgn[(signed long int)x];
      counts[(signed long int)vl_ikm_train_elkan__1__2__1__1__1__cx] = counts[(signed long int)vl_ikm_train_elkan__1__2__1__1__1__cx] + 1u;
      i = (unsigned long long int)0;
      for( ; !(i >= f->M); i = i + 1ull)
        m_pt[(signed long int)((unsigned long int)vl_ikm_train_elkan__1__2__1__1__1__cx * f->M + i)] = m_pt[(signed long int)((unsigned long int)vl_ikm_train_elkan__1__2__1__1__1__cx * f->M + i)] + (signed int)data[(signed long int)(x * f->M + i)];
    }
    c = (unsigned long long int)0;
    for( ; !(c >= f->K); c = c + 1ull)
    {
      signed int n = (signed int)counts[(signed long int)c];
      if(n >= 1)
      {
        i = (unsigned long long int)0;
        for( ; !(i >= f->M); i = i + 1ull)
          m_pt[(signed long int)(c * f->M + i)] = m_pt[(signed long int)(c * f->M + i)] / n;
      }

      else
      {
        i = (unsigned long long int)0;
        for( ; !(i >= f->M); i = i + 1ull)
          ;
      }
    }
    c = (unsigned long long int)0;
    for( ; !(c >= f->K); c = c + 1ull)
    {
      dist_calc = dist_calc + 1ull;
      vl_ikm_train_elkan__1__dist = 0;
      i = (unsigned long long int)0;
      for( ; !(i >= f->M); i = i + 1ull)
      {
        signed int vl_ikm_train_elkan__1__2__1__3__1__1__1__delta = (signed int)m_pt[(signed long int)(c * f->M + i)] - f->centers[(signed long int)(c * f->M + i)];
        f->centers[(signed long int)(c * f->M + i)] = m_pt[(signed long int)(c * f->M + i)];
        vl_ikm_train_elkan__1__dist = vl_ikm_train_elkan__1__dist + vl_ikm_train_elkan__1__2__1__3__1__1__1__delta * vl_ikm_train_elkan__1__2__1__3__1__1__1__delta;
      }
      x = (unsigned long long int)0;
      for( ; !(x >= N); x = x + 1ull)
      {
        signed int lxc = l_pt[(signed long int)(c * N + x)];
        unsigned long long int cx = (unsigned long long int)(signed int)asgn[(signed long int)x];
        if(!(vl_ikm_train_elkan__1__dist >= lxc))
        {
          unsigned long long int return_value_vl_fast_sqrt_ui64_8;
          return_value_vl_fast_sqrt_ui64_8=vl_fast_sqrt_ui64((unsigned long long int)lxc);
          unsigned long long int return_value_vl_fast_sqrt_ui64_9;
          return_value_vl_fast_sqrt_ui64_9=vl_fast_sqrt_ui64((unsigned long long int)vl_ikm_train_elkan__1__dist);
          lxc = (signed int)((unsigned long int)(lxc + vl_ikm_train_elkan__1__dist) - (unsigned long int)2 * (return_value_vl_fast_sqrt_ui64_8 + (unsigned long int)1) * (return_value_vl_fast_sqrt_ui64_9 + (unsigned long int)1));
        }

        else
          lxc = 0;
        l_pt[(signed long int)(c * N + x)] = lxc;
        if(c == cx)
        {
          signed int ux = u_pt[(signed long int)x];
          unsigned long long int return_value_vl_fast_sqrt_ui64_10;
          return_value_vl_fast_sqrt_ui64_10=vl_fast_sqrt_ui64((unsigned long long int)ux);
          unsigned long long int return_value_vl_fast_sqrt_ui64_11;
          return_value_vl_fast_sqrt_ui64_11=vl_fast_sqrt_ui64((unsigned long long int)vl_ikm_train_elkan__1__dist);
          u_pt[(signed long int)x] = (signed int)((unsigned long int)(ux + vl_ikm_train_elkan__1__dist) + (unsigned long int)2 * (return_value_vl_fast_sqrt_ui64_10 + (unsigned long int)1) * (return_value_vl_fast_sqrt_ui64_11 + (unsigned long int)1));
          r_pt[(signed long int)x] = (char)1;
        }

      }
    }
    c = (unsigned long long int)0;
    for( ; !(c >= f->K); c = c + 1ull)
    {
      cp = (unsigned long long int)0;
      for( ; !(cp >= f->K); cp = cp + 1ull)
      {
        vl_ikm_train_elkan__1__dist = 0;
        if(!(c == cp))
        {
          dist_calc = dist_calc + 1ull;
          i = (unsigned long long int)0;
          for( ; !(i >= f->M); i = i + 1ull)
          {
            signed int delta = f->centers[(signed long int)(cp * f->M + i)] - f->centers[(signed long int)(c * f->M + i)];
            vl_ikm_train_elkan__1__dist = vl_ikm_train_elkan__1__dist + delta * delta;
          }
        }

        d_pt[(signed long int)(cp * f->K + c)] = vl_ikm_train_elkan__1__dist >> 2;
        d_pt[(signed long int)(c * f->K + cp)] = d_pt[(signed long int)(cp * f->K + c)];
      }
    }
    c = (unsigned long long int)0;
    for( ; !(c >= f->K); c = c + 1ull)
    {
      signed int best_dist = (signed int)0x7fffffffUL;
      cp = (unsigned long long int)0;
      for( ; !(cp >= f->K); cp = cp + 1ull)
      {
        vl_ikm_train_elkan__1__dist = d_pt[(signed long int)(c * f->K + cp)];
        if(!(c == cp) && !(vl_ikm_train_elkan__1__dist >= best_dist))
          best_dist = vl_ikm_train_elkan__1__dist;

      }
      s_pt[(signed long int)c] = best_dist >> 2;
    }
    done = 1;
    x = (unsigned long long int)0;
    for( ; !(x >= N); x = x + 1ull)
    {
      unsigned long long int vl_ikm_train_elkan__1__2__1__6__1__cx = (unsigned long long int)asgn[(signed long int)x];
      signed int vl_ikm_train_elkan__1__2__1__6__1__ux = u_pt[(signed long int)x];
      if(!(s_pt[(signed long int)vl_ikm_train_elkan__1__2__1__6__1__cx] >= vl_ikm_train_elkan__1__2__1__6__1__ux))
      {
        c = (unsigned long long int)0;
        for( ; !(c >= f->K); c = c + 1ull)
        {
          signed int dist = 0;
          if(c == vl_ikm_train_elkan__1__2__1__6__1__cx)
            tmp_if_expr_12 = (_Bool)1;

          else
            tmp_if_expr_12 = vl_ikm_train_elkan__1__2__1__6__1__ux <= l_pt[(signed long int)(N * c + x)] ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_12)
            tmp_if_expr_13 = (_Bool)1;

          else
            tmp_if_expr_13 = vl_ikm_train_elkan__1__2__1__6__1__ux <= d_pt[(signed long int)(f->K * c + vl_ikm_train_elkan__1__2__1__6__1__cx)] ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_13)
          {
            if(!(r_pt[(signed long int)x] == 0))
            {
              dist_calc = dist_calc + 1ull;
              dist = 0;
              i = (unsigned long long int)0;
              for( ; !(i >= f->M); i = i + 1ull)
              {
                signed int vl_ikm_train_elkan__1__2__1__6__1__1__1__1__1__1__delta = (signed int)data[(signed long int)(x * f->M + i)] - f->centers[(signed long int)(vl_ikm_train_elkan__1__2__1__6__1__cx * f->M + i)];
                dist = dist + vl_ikm_train_elkan__1__2__1__6__1__1__1__1__1__1__delta * vl_ikm_train_elkan__1__2__1__6__1__1__1__1__1__1__delta;
              }
              u_pt[(signed long int)x] = dist;
              vl_ikm_train_elkan__1__2__1__6__1__ux = u_pt[(signed long int)x];
              r_pt[(signed long int)x] = (char)0;
              if(l_pt[(signed long int)c * (signed long int)N + (signed long int)x] >= vl_ikm_train_elkan__1__2__1__6__1__ux)
                tmp_if_expr_14 = (_Bool)1;

              else
                tmp_if_expr_14 = vl_ikm_train_elkan__1__2__1__6__1__ux <= d_pt[(signed long int)(f->K * c + vl_ikm_train_elkan__1__2__1__6__1__cx)] ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_14)
                goto __CPROVER_DUMP_L58;

            }

            dist_calc = dist_calc + 1ull;
            dist = 0;
            i = (unsigned long long int)0;
            for( ; !(i >= f->M); i = i + 1ull)
            {
              signed int vl_ikm_train_elkan__1__2__1__6__1__1__1__2__1__delta = (signed int)data[(signed long int)(x * f->M + i)] - f->centers[(signed long int)(c * f->M + i)];
              dist = dist + vl_ikm_train_elkan__1__2__1__6__1__1__1__2__1__delta * vl_ikm_train_elkan__1__2__1__6__1__1__1__2__1__delta;
            }
            l_pt[(signed long int)(N * c + x)] = dist;
            if(!(dist >= vl_ikm_train_elkan__1__2__1__6__1__ux))
            {
              u_pt[(signed long int)x] = dist;
              vl_ikm_train_elkan__1__2__1__6__1__ux = u_pt[(signed long int)x];
              asgn[(signed long int)x] = (unsigned int)c;
              done = 0;
            }

          }


        __CPROVER_DUMP_L58:
          ;
        }
      }

    }
    if(!(done == 0))
      tmp_if_expr_15 = (_Bool)1;

    else
      tmp_if_expr_15 = pass == f->max_niters ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_15)
      break;

  }
  vl_free((void *)counts);
  vl_free((void *)asgn);
  vl_free((void *)l_pt);
  vl_free((void *)s_pt);
  vl_free((void *)r_pt);
  vl_free((void *)u_pt);
  vl_free((void *)m_pt);
  if(!(f->verb == 0))
  {
    signed int (*return_value_vl_get_printf_func_16)(const char *, ...);
    return_value_vl_get_printf_func_16=vl_get_printf_func();
    return_value_vl_get_printf_func_16("ikm: Elkan algorithm: total iterations: %d\n", pass);
    signed int (*return_value_vl_get_printf_func_17)(const char *, ...);
    return_value_vl_get_printf_func_17=vl_get_printf_func();
    return_value_vl_get_printf_func_17("ikm: Elkan algorithm: distance calculations: %d (speedup: %.2f)\n", dist_calc, ((float)N * (float)f->K * (float)(pass + (unsigned long int)2)) / (float)dist_calc - (float)1);
  }

  return 0;
}

// vl_ikm_train_lloyd
// file vl/ikmeans_lloyd.tc line 34
static signed int vl_ikm_train_lloyd(struct _VlIKMFilt *f, const unsigned char *data, unsigned long long int N)
{
  signed int err = 0;
  unsigned long long int iter;
  unsigned long long int i;
  unsigned long long int j;
  unsigned long long int k;
  unsigned int *asgn;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(unsigned int) /*4ul*/  * N);
  asgn = (unsigned int *)return_value_vl_malloc_1;
  unsigned int *counts;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(unsigned int) /*4ul*/  * N);
  counts = (unsigned int *)return_value_vl_malloc_2;
  iter = (unsigned long long int)0;
  _Bool tmp_if_expr_3;
  for( ; (_Bool)1; iter = iter + 1ull)
  {
    signed int done = 1;
    j = (unsigned long long int)0;
    for( ; !(j >= N); j = j + 1ull)
    {
      signed int best_dist = 0;
      signed long long int best = (signed long long int)-1;
      k = (unsigned long long int)0;
      for( ; !(k >= f->K); k = k + 1ull)
      {
        signed int dist = 0;
        i = (unsigned long long int)0;
        for( ; !(i >= f->M); i = i + 1ull)
        {
          signed int delta = (signed int)data[(signed long int)(j * f->M + i)] - f->centers[(signed long int)(k * f->M + i)];
          dist = dist + delta * delta;
        }
        if(best == -1l || !(dist >= best_dist))
        {
          best = (signed long long int)k;
          best_dist = dist;
        }

      }
      if(!((signed long int)asgn[(signed long int)j] == best))
      {
        asgn[(signed long int)j] = (unsigned int)best;
        done = 0;
      }

    }
    if(!(done == 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = iter == f->max_niters ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      break;

    memset((void *)f->centers, 0, sizeof(signed int) /*4ul*/  * f->M * f->K);
    memset((void *)counts, 0, sizeof(unsigned int) /*4ul*/  * f->K);
    j = (unsigned long long int)0;
    for( ; !(j >= N); j = j + 1ull)
    {
      unsigned long long int this_center = (unsigned long long int)asgn[(signed long int)j];
      counts[(signed long int)this_center] = counts[(signed long int)this_center] + 1u;
      i = (unsigned long long int)0;
      for( ; !(i >= f->M); i = i + 1ull)
        f->centers[(signed long int)(this_center * f->M + i)] = f->centers[(signed long int)(this_center * f->M + i)] + (signed int)data[(signed long int)(j * f->M + i)];
    }
    k = (unsigned long long int)0;
    for( ; !(k >= f->K); k = k + 1ull)
    {
      signed long long int n = (signed long long int)counts[(signed long int)k];
      if(n >= 16777216l)
        err = 1;

      if(n >= 1l)
      {
        i = (unsigned long long int)0;
        for( ; !(i >= f->M); i = i + 1ull)
          f->centers[(signed long int)(k * f->M + i)] = f->centers[(signed long int)(k * f->M + i)] / (signed int)n;
      }

    }
  }
  vl_free((void *)counts);
  vl_free((void *)asgn);
  return err;
}

// vl_image_distance_transform_d
// file vl/imopv.c line 329
extern void vl_image_distance_transform_d(const double *image, unsigned long long int numColumns, unsigned long long int numRows, unsigned long long int columnStride, unsigned long long int rowStride, double *distanceTransform, unsigned long long int *indexes, double coeff, double offset)
{
  unsigned long long int x;
  unsigned long long int y;
  double *from;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * (numColumns + (unsigned long int)1));
  from = (double *)return_value_vl_malloc_1;
  double *base;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(double) /*8ul*/  * numColumns);
  base = (double *)return_value_vl_malloc_2;
  unsigned long long int *baseIndexes;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numColumns);
  baseIndexes = (unsigned long long int *)return_value_vl_malloc_3;
  unsigned long long int *which;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numColumns);
  which = (unsigned long long int *)return_value_vl_malloc_4;
  unsigned long long int num = (unsigned long long int)0;
  y = (unsigned long long int)0;
  for( ; !(y >= numRows); y = y + 1ull)
  {
    num = (unsigned long long int)0;
    x = (unsigned long long int)0;
    for( ; !(x >= numColumns); x = x + 1ull)
    {
      double r = image[(signed long int)(x * columnStride + y * rowStride)];
      double x2 = (double)(x * x);
      double from_ = -vl_infinity_d_link5.value;
      while(num >= 1ul)
      {
        unsigned long long int x_ = which[(signed long int)(num - (unsigned long int)1)];
        double x2_ = (double)(x_ * x_);
        double r_ = image[(signed long int)(x_ * columnStride + y * rowStride)];
        double inters;
        if(IEEE_FLOAT_EQUAL(r, r_))
          inters = (double)(x + x_) / 2.0 + offset;

        else
          if(coeff > 2.220446049250313e-16)
            inters = (((r - r_) + coeff * (x2 - x2_)) / (double)(x - x_)) / ((double)2 * coeff) + offset;

          else
            inters = r < r_ ? -vl_infinity_d_link5.value : vl_infinity_d_link5.value;
        if(inters <= from[-1l + (signed long int)num])
          num = num - 1ull;

        else
        {
          from_ = inters;
          break;
        }
      }
      which[(signed long int)num] = x;
      from[(signed long int)num] = from_;
      base[(signed long int)num] = r;
      if(!(indexes == ((unsigned long long int *)NULL)))
        baseIndexes[(signed long int)num] = indexes[(signed long int)(x * columnStride + y * rowStride)];

      num = num + 1ull;
    }
    from[(signed long int)num] = vl_infinity_d_link5.value;
    num = (unsigned long long int)0;
    x = (unsigned long long int)0;
    for( ; !(x >= numColumns); x = x + 1ull)
    {
      double delta;
      for( ; (double)x >= from[1l + (signed long int)num]; num = num + 1ull)
        ;
      delta = ((double)x - (double)which[(signed long int)num]) - offset;
      distanceTransform[(signed long int)(x * columnStride + y * rowStride)] = base[(signed long int)num] + coeff * delta * delta;
      if(!(indexes == ((unsigned long long int *)NULL)))
        indexes[(signed long int)(x * columnStride + y * rowStride)] = baseIndexes[(signed long int)num];

    }
  }
  vl_free((void *)from);
  vl_free((void *)which);
  vl_free((void *)base);
  vl_free((void *)baseIndexes);
}

// vl_image_distance_transform_f
// file vl/imopv.c line 329
extern void vl_image_distance_transform_f(const float *image, unsigned long long int numColumns, unsigned long long int numRows, unsigned long long int columnStride, unsigned long long int rowStride, float *distanceTransform, unsigned long long int *indexes, float coeff, float offset)
{
  unsigned long long int x;
  unsigned long long int y;
  float *from;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * (numColumns + (unsigned long int)1));
  from = (float *)return_value_vl_malloc_1;
  float *base;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * numColumns);
  base = (float *)return_value_vl_malloc_2;
  unsigned long long int *baseIndexes;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numColumns);
  baseIndexes = (unsigned long long int *)return_value_vl_malloc_3;
  unsigned long long int *which;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numColumns);
  which = (unsigned long long int *)return_value_vl_malloc_4;
  unsigned long long int num = (unsigned long long int)0;
  y = (unsigned long long int)0;
  for( ; !(y >= numRows); y = y + 1ull)
  {
    num = (unsigned long long int)0;
    x = (unsigned long long int)0;
    for( ; !(x >= numColumns); x = x + 1ull)
    {
      float r = image[(signed long int)(x * columnStride + y * rowStride)];
      float x2 = (float)(x * x);
      float from_ = -vl_infinity_f_link2.value;
      while(num >= 1ul)
      {
        unsigned long long int x_ = which[(signed long int)(num - (unsigned long int)1)];
        float x2_ = (float)(x_ * x_);
        float r_ = image[(signed long int)(x_ * columnStride + y * rowStride)];
        float inters;
        if(IEEE_FLOAT_EQUAL(r, r_))
          inters = (float)((double)(x + x_) / 2.0 + (double)offset);

        else
          if(coeff > 1.19209290E-07F)
            inters = (((r - r_) + coeff * (x2 - x2_)) / (float)(x - x_)) / ((float)2 * coeff) + offset;

          else
            inters = r < r_ ? -vl_infinity_f_link2.value : vl_infinity_f_link2.value;
        if(inters <= from[-1l + (signed long int)num])
          num = num - 1ull;

        else
        {
          from_ = inters;
          break;
        }
      }
      which[(signed long int)num] = x;
      from[(signed long int)num] = from_;
      base[(signed long int)num] = r;
      if(!(indexes == ((unsigned long long int *)NULL)))
        baseIndexes[(signed long int)num] = indexes[(signed long int)(x * columnStride + y * rowStride)];

      num = num + 1ull;
    }
    from[(signed long int)num] = vl_infinity_f_link2.value;
    num = (unsigned long long int)0;
    x = (unsigned long long int)0;
    for( ; !(x >= numColumns); x = x + 1ull)
    {
      double delta;
      for( ; (float)x >= from[1l + (signed long int)num]; num = num + 1ull)
        ;
      delta = ((double)x - (double)which[(signed long int)num]) - (double)offset;
      distanceTransform[(signed long int)(x * columnStride + y * rowStride)] = (float)((double)base[(signed long int)num] + (double)coeff * delta * delta);
      if(!(indexes == ((unsigned long long int *)NULL)))
        indexes[(signed long int)(x * columnStride + y * rowStride)] = baseIndexes[(signed long int)num];

    }
  }
  vl_free((void *)from);
  vl_free((void *)which);
  vl_free((void *)base);
  vl_free((void *)baseIndexes);
}

// vl_imconvcol_vd
// file vl/imopv.c line 120
extern void vl_imconvcol_vd(double *dst, unsigned long long int dst_stride, const double *src, unsigned long long int src_width, unsigned long long int src_height, unsigned long long int src_stride, const double *filt, signed long long int filt_begin, signed long long int filt_end, signed int step, unsigned int flags)
{
  signed long long int x = (signed long long int)0;
  signed long long int y;
  signed long long int dheight = (signed long long int)((src_height - (unsigned long int)1) / (unsigned long int)step + (unsigned long int)1);
  signed int transp = (signed int)(flags & (unsigned int)(0x1 << 2));
  signed int zeropad = (signed int)((flags & (unsigned int)0x3) == (unsigned int)(0x0 << 0));
  filt = filt + (filt_end - filt_begin);
  const double *tmp_post_1;
  const double *tmp_post_2;
  const double *tmp_post_3;
  while(!(x >= (signed long int)(signed int)src_width))
  {
    const double *filti;
    signed long long int stop;
    y = (signed long long int)0;
    for( ; !(y >= (signed long int)(signed int)src_height); y = y + (signed long long int)step)
    {
      double acc = (double)0;
      double v = (double)0;
      double c;
      const double *srci;
      filti = filt;
      stop = filt_end - y;
      srci = (src + x) - (signed long int)((unsigned long int)stop * src_stride);
      if(stop >= 1l)
      {
        if(!(zeropad == 0))
          v = (double)0;

        else
          v = src[x];
        for( ; !(filt + -stop >= filti); srci = srci + (signed long int)src_stride)
        {
          tmp_post_1 = filti;
          filti = filti - 1l;
          c = *tmp_post_1;
          acc = acc + v * c;
        }
      }

      stop = (filt_end - (filt_begin > (y - (signed long int)(signed int)src_height) + (signed long int)1 ? filt_begin : (y - (signed long int)(signed int)src_height) + (signed long int)1)) + (signed long int)1;
      for( ; !(filt + -stop >= filti); srci = srci + (signed long int)src_stride)
      {
        v = *srci;
        tmp_post_2 = filti;
        filti = filti - 1l;
        c = *tmp_post_2;
        acc = acc + v * c;
      }
      if(!(zeropad == 0))
        v = (double)0;

      stop = (filt_end - filt_begin) + (signed long int)1;
      for( ; !(filt + -stop >= filti); acc = acc + v * c)
      {
        tmp_post_3 = filti;
        filti = filti - 1l;
        c = *tmp_post_3;
      }
      if(!(transp == 0))
      {
        *dst = acc;
        dst = dst + (signed long int)1;
      }

      else
      {
        *dst = acc;
        dst = dst + (signed long int)dst_stride;
      }
    }
    if(!(transp == 0))
      dst = dst + (signed long int)((unsigned long int)1 * dst_stride - (unsigned long int)(dheight * (signed long int)1));

    else
      dst = dst + (signed long int)((unsigned long int)(1 * 1) - (unsigned long int)dheight * dst_stride);
    x = x + (signed long long int)1;
  }
}

// vl_imconvcol_vf
// file vl/imopv.c line 120
extern void vl_imconvcol_vf(float *dst, unsigned long long int dst_stride, const float *src, unsigned long long int src_width, unsigned long long int src_height, unsigned long long int src_stride, const float *filt, signed long long int filt_begin, signed long long int filt_end, signed int step, unsigned int flags)
{
  signed long long int x = (signed long long int)0;
  signed long long int y;
  signed long long int dheight = (signed long long int)((src_height - (unsigned long int)1) / (unsigned long int)step + (unsigned long int)1);
  signed int transp = (signed int)(flags & (unsigned int)(0x1 << 2));
  signed int zeropad = (signed int)((flags & (unsigned int)0x3) == (unsigned int)(0x0 << 0));
  filt = filt + (filt_end - filt_begin);
  const float *tmp_post_1;
  const float *tmp_post_2;
  const float *tmp_post_3;
  while(!(x >= (signed long int)(signed int)src_width))
  {
    const float *filti;
    signed long long int stop;
    y = (signed long long int)0;
    for( ; !(y >= (signed long int)(signed int)src_height); y = y + (signed long long int)step)
    {
      float acc = (float)0;
      float v = (float)0;
      float c;
      const float *srci;
      filti = filt;
      stop = filt_end - y;
      srci = (src + x) - (signed long int)((unsigned long int)stop * src_stride);
      if(stop >= 1l)
      {
        if(!(zeropad == 0))
          v = (float)0;

        else
          v = src[x];
        for( ; !(filt + -stop >= filti); srci = srci + (signed long int)src_stride)
        {
          tmp_post_1 = filti;
          filti = filti - 1l;
          c = *tmp_post_1;
          acc = acc + v * c;
        }
      }

      stop = (filt_end - (filt_begin > (y - (signed long int)(signed int)src_height) + (signed long int)1 ? filt_begin : (y - (signed long int)(signed int)src_height) + (signed long int)1)) + (signed long int)1;
      for( ; !(filt + -stop >= filti); srci = srci + (signed long int)src_stride)
      {
        v = *srci;
        tmp_post_2 = filti;
        filti = filti - 1l;
        c = *tmp_post_2;
        acc = acc + v * c;
      }
      if(!(zeropad == 0))
        v = (float)0;

      stop = (filt_end - filt_begin) + (signed long int)1;
      for( ; !(filt + -stop >= filti); acc = acc + v * c)
      {
        tmp_post_3 = filti;
        filti = filti - 1l;
        c = *tmp_post_3;
      }
      if(!(transp == 0))
      {
        *dst = acc;
        dst = dst + (signed long int)1;
      }

      else
      {
        *dst = acc;
        dst = dst + (signed long int)dst_stride;
      }
    }
    if(!(transp == 0))
      dst = dst + (signed long int)((unsigned long int)1 * dst_stride - (unsigned long int)(dheight * (signed long int)1));

    else
      dst = dst + (signed long int)((unsigned long int)(1 * 1) - (unsigned long int)dheight * dst_stride);
    x = x + (signed long long int)1;
  }
}

// vl_imconvcoltri_d
// file vl/imopv.c line 511
extern void vl_imconvcoltri_d(double *dest, unsigned long long int destStride, const double *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride, unsigned long long int filterSize, unsigned long long int step, unsigned int flags)
{
  signed long long int x;
  signed long long int y;
  signed long long int dheight;
  signed int transp = (signed int)(flags & (unsigned int)(0x1 << 2));
  signed int zeropad = (signed int)((flags & (unsigned int)0x3) == (unsigned int)(0x0 << 0));
  double scale = (double)(1.0 / ((double)filterSize * (double)filterSize));
  double *buffer;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(double) /*8ul*/  * (imageHeight + filterSize));
  buffer = (double *)return_value_vl_malloc_1;
  buffer = buffer + (signed long int)filterSize;
  if(!(imageHeight == 0ul))
  {
    x = (signed long long int)0;
    dheight = (signed long long int)((imageHeight - (unsigned long int)1) / step + (unsigned long int)1);
    while(!(x >= (signed long int)(signed int)imageWidth))
    {
      const double *imagei = image + x + (signed long int)(imageStride * (imageHeight - (unsigned long int)1));
      buffer[(signed long int)(imageHeight - (unsigned long int)1)] = *imagei;
      y = (signed long long int)((signed int)imageHeight - 2);
      for( ; y >= 0l; y = y - 1ll)
      {
        imagei = imagei - (signed long int)imageStride;
        buffer[y] = buffer[y + (signed long int)1] + *imagei;
      }
      if(!(zeropad == 0))
        for( ; y >= (signed long int)-((signed int)filterSize); y = y - 1ll)
          buffer[y] = buffer[y + (signed long int)1];

      else
        for( ; y >= (signed long int)-((signed int)filterSize); y = y - 1ll)
          buffer[y] = buffer[y + (signed long int)1] + *imagei;
      y = (signed long long int)-((signed int)filterSize);
      for( ; !(y >= (signed long int)((signed int)imageHeight + -((signed int)filterSize))); y = y + 1ll)
        buffer[y] = buffer[y] - buffer[(signed long int)((unsigned long int)y + filterSize)];
      if(zeropad == 0)
      {
        y = (signed long long int)((signed int)imageHeight - (signed int)filterSize);
        for( ; !(y >= (signed long int)(signed int)imageHeight); y = y + 1ll)
          buffer[y] = buffer[y] - buffer[(signed long int)(imageHeight - (unsigned long int)1)] * (double)((signed long int)((signed int)imageHeight - (signed int)filterSize) - y);
      }

      y = (signed long long int)(-((signed int)filterSize) + 1);
      for( ; !(y >= (signed long int)(signed int)imageHeight); y = y + 1ll)
        buffer[y] = buffer[y] + buffer[y - (signed long int)1];
      unsigned long long int stride = transp != 0 ? (unsigned long int)1 : destStride;
      dest = dest + (signed long int)((unsigned long int)dheight * stride);
      y = (signed long long int)(step * (unsigned long int)(dheight - (signed long int)1));
      for( ; y >= 0l; y = y - (signed long long int)step)
      {
        dest = dest - (signed long int)stride;
        *dest = scale * (buffer[y] - buffer[y - (signed long int)(signed int)filterSize]);
      }
      dest = dest + (signed long int)(transp != 0 ? destStride : (unsigned long int)1);
      x = x + (signed long long int)1;
    }
    vl_free((void *)(buffer - (signed long int)filterSize));
  }

}

// vl_imconvcoltri_f
// file vl/imopv.c line 511
extern void vl_imconvcoltri_f(float *dest, unsigned long long int destStride, const float *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride, unsigned long long int filterSize, unsigned long long int step, unsigned int flags)
{
  signed long long int x;
  signed long long int y;
  signed long long int dheight;
  signed int transp = (signed int)(flags & (unsigned int)(0x1 << 2));
  signed int zeropad = (signed int)((flags & (unsigned int)0x3) == (unsigned int)(0x0 << 0));
  float scale = (float)(1.0 / ((double)filterSize * (double)filterSize));
  float *buffer;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * (imageHeight + filterSize));
  buffer = (float *)return_value_vl_malloc_1;
  buffer = buffer + (signed long int)filterSize;
  if(!(imageHeight == 0ul))
  {
    x = (signed long long int)0;
    dheight = (signed long long int)((imageHeight - (unsigned long int)1) / step + (unsigned long int)1);
    while(!(x >= (signed long int)(signed int)imageWidth))
    {
      const float *imagei = image + x + (signed long int)(imageStride * (imageHeight - (unsigned long int)1));
      buffer[(signed long int)(imageHeight - (unsigned long int)1)] = *imagei;
      y = (signed long long int)((signed int)imageHeight - 2);
      for( ; y >= 0l; y = y - 1ll)
      {
        imagei = imagei - (signed long int)imageStride;
        buffer[y] = buffer[y + (signed long int)1] + *imagei;
      }
      if(!(zeropad == 0))
        for( ; y >= (signed long int)-((signed int)filterSize); y = y - 1ll)
          buffer[y] = buffer[y + (signed long int)1];

      else
        for( ; y >= (signed long int)-((signed int)filterSize); y = y - 1ll)
          buffer[y] = buffer[y + (signed long int)1] + *imagei;
      y = (signed long long int)-((signed int)filterSize);
      for( ; !(y >= (signed long int)((signed int)imageHeight + -((signed int)filterSize))); y = y + 1ll)
        buffer[y] = buffer[y] - buffer[(signed long int)((unsigned long int)y + filterSize)];
      if(zeropad == 0)
      {
        y = (signed long long int)((signed int)imageHeight - (signed int)filterSize);
        for( ; !(y >= (signed long int)(signed int)imageHeight); y = y + 1ll)
          buffer[y] = buffer[y] - buffer[(signed long int)(imageHeight - (unsigned long int)1)] * (float)((signed long int)((signed int)imageHeight - (signed int)filterSize) - y);
      }

      y = (signed long long int)(-((signed int)filterSize) + 1);
      for( ; !(y >= (signed long int)(signed int)imageHeight); y = y + 1ll)
        buffer[y] = buffer[y] + buffer[y - (signed long int)1];
      unsigned long long int stride = transp != 0 ? (unsigned long int)1 : destStride;
      dest = dest + (signed long int)((unsigned long int)dheight * stride);
      y = (signed long long int)(step * (unsigned long int)(dheight - (signed long int)1));
      for( ; y >= 0l; y = y - (signed long long int)step)
      {
        dest = dest - (signed long int)stride;
        *dest = scale * (buffer[y] - buffer[y - (signed long int)(signed int)filterSize]);
      }
      dest = dest + (signed long int)(transp != 0 ? destStride : (unsigned long int)1);
      x = x + (signed long long int)1;
    }
    vl_free((void *)(buffer - (signed long int)filterSize));
  }

}

// vl_imgradient_d
// file vl/imopv.c line 723
extern void vl_imgradient_d(double *xGradient, double *yGradient, unsigned long long int gradWidthStride, unsigned long long int gradHeightStride, const double *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride)
{
  const signed long long int xo = (const signed long long int)1;
  const signed long long int yo = (const signed long long int)imageStride;
  const unsigned long long int w = imageWidth;
  const unsigned long long int h = imageHeight;
  const double *src;
  const double *end;
  double *pgrad_x;
  double *pgrad_y;
  unsigned long long int y;
  src = image;
  pgrad_x = xGradient;
  pgrad_y = yGradient;
  *pgrad_x = src[+xo] - src[(signed long int)0];
  pgrad_x = pgrad_x + (signed long int)gradWidthStride;
  *pgrad_y = src[+yo] - src[(signed long int)0];
  pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  src = src + 1l;
  end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
  for( ; !(src >= end); src = src + 1l)
  {
    *pgrad_x = 0.5 * (src[+xo] - src[-xo]);
    pgrad_x = pgrad_x + (signed long int)gradWidthStride;
    *pgrad_y = src[+yo] - src[(signed long int)0];
    pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  }
  *pgrad_x = src[(signed long int)0] - src[-xo];
  pgrad_x = pgrad_x + (signed long int)gradWidthStride;
  *pgrad_y = src[+yo] - src[(signed long int)0];
  pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  src = src + 1l;
  xGradient = xGradient + (signed long int)gradHeightStride;
  pgrad_x = xGradient;
  yGradient = yGradient + (signed long int)gradHeightStride;
  pgrad_y = yGradient;
  image = image + yo;
  src = image;
  y = (unsigned long long int)1;
  for( ; !(y >= h + 18446744073709551615ul); y = y + 1ull)
  {
    *pgrad_x = src[+xo] - src[(signed long int)0];
    pgrad_x = pgrad_x + (signed long int)gradWidthStride;
    *pgrad_y = 0.5 * (src[+yo] - src[-yo]);
    pgrad_y = pgrad_y + (signed long int)gradWidthStride;
    src = src + 1l;
    end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
    for( ; !(src >= end); src = src + 1l)
    {
      *pgrad_x = 0.5 * (src[+xo] - src[-xo]);
      pgrad_x = pgrad_x + (signed long int)gradWidthStride;
      *pgrad_y = 0.5 * (src[+yo] - src[-yo]);
      pgrad_y = pgrad_y + (signed long int)gradWidthStride;
    }
    *pgrad_x = src[(signed long int)0] - src[-xo];
    pgrad_x = pgrad_x + (signed long int)gradWidthStride;
    *pgrad_y = 0.5 * (src[+yo] - src[-yo]);
    pgrad_y = pgrad_y + (signed long int)gradWidthStride;
    src = src + 1l;
    xGradient = xGradient + (signed long int)gradHeightStride;
    pgrad_x = xGradient;
    yGradient = yGradient + (signed long int)gradHeightStride;
    pgrad_y = yGradient;
    image = image + yo;
    src = image;
  }
  *pgrad_x = src[+xo] - src[(signed long int)0];
  pgrad_x = pgrad_x + (signed long int)gradWidthStride;
  *pgrad_y = src[(signed long int)0] - src[-yo];
  pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  src = src + 1l;
  end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
  for( ; !(src >= end); src = src + 1l)
  {
    *pgrad_x = 0.5 * (src[+xo] - src[-xo]);
    pgrad_x = pgrad_x + (signed long int)gradWidthStride;
    *pgrad_y = src[(signed long int)0] - src[-yo];
    pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  }
  *pgrad_x = src[(signed long int)0] - src[-xo];
  *pgrad_y = src[(signed long int)0] - src[-yo];
}

// vl_imgradient_f
// file vl/imopv.h line 142
extern void vl_imgradient_f(float *xGradient, float *yGradient, unsigned long long int gradWidthStride, unsigned long long int gradHeightStride, const float *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride)
{
  const signed long long int xo = (const signed long long int)1;
  const signed long long int yo = (const signed long long int)imageStride;
  const unsigned long long int w = imageWidth;
  const unsigned long long int h = imageHeight;
  const float *src;
  const float *end;
  float *pgrad_x;
  float *pgrad_y;
  unsigned long long int y;
  src = image;
  pgrad_x = xGradient;
  pgrad_y = yGradient;
  *pgrad_x = src[+xo] - src[(signed long int)0];
  pgrad_x = pgrad_x + (signed long int)gradWidthStride;
  *pgrad_y = src[+yo] - src[(signed long int)0];
  pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  src = src + 1l;
  end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
  for( ; !(src >= end); src = src + 1l)
  {
    *pgrad_x = (float)(0.5 * (double)(src[+xo] - src[-xo]));
    pgrad_x = pgrad_x + (signed long int)gradWidthStride;
    *pgrad_y = src[+yo] - src[(signed long int)0];
    pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  }
  *pgrad_x = src[(signed long int)0] - src[-xo];
  pgrad_x = pgrad_x + (signed long int)gradWidthStride;
  *pgrad_y = src[+yo] - src[(signed long int)0];
  pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  src = src + 1l;
  xGradient = xGradient + (signed long int)gradHeightStride;
  pgrad_x = xGradient;
  yGradient = yGradient + (signed long int)gradHeightStride;
  pgrad_y = yGradient;
  image = image + yo;
  src = image;
  y = (unsigned long long int)1;
  for( ; !(y >= h + 18446744073709551615ul); y = y + 1ull)
  {
    *pgrad_x = src[+xo] - src[(signed long int)0];
    pgrad_x = pgrad_x + (signed long int)gradWidthStride;
    *pgrad_y = (float)(0.5 * (double)(src[+yo] - src[-yo]));
    pgrad_y = pgrad_y + (signed long int)gradWidthStride;
    src = src + 1l;
    end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
    for( ; !(src >= end); src = src + 1l)
    {
      *pgrad_x = (float)(0.5 * (double)(src[+xo] - src[-xo]));
      pgrad_x = pgrad_x + (signed long int)gradWidthStride;
      *pgrad_y = (float)(0.5 * (double)(src[+yo] - src[-yo]));
      pgrad_y = pgrad_y + (signed long int)gradWidthStride;
    }
    *pgrad_x = src[(signed long int)0] - src[-xo];
    pgrad_x = pgrad_x + (signed long int)gradWidthStride;
    *pgrad_y = (float)(0.5 * (double)(src[+yo] - src[-yo]));
    pgrad_y = pgrad_y + (signed long int)gradWidthStride;
    src = src + 1l;
    xGradient = xGradient + (signed long int)gradHeightStride;
    pgrad_x = xGradient;
    yGradient = yGradient + (signed long int)gradHeightStride;
    pgrad_y = yGradient;
    image = image + yo;
    src = image;
  }
  *pgrad_x = src[+xo] - src[(signed long int)0];
  pgrad_x = pgrad_x + (signed long int)gradWidthStride;
  *pgrad_y = src[(signed long int)0] - src[-yo];
  pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  src = src + 1l;
  end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
  for( ; !(src >= end); src = src + 1l)
  {
    *pgrad_x = (float)(0.5 * (double)(src[+xo] - src[-xo]));
    pgrad_x = pgrad_x + (signed long int)gradWidthStride;
    *pgrad_y = src[(signed long int)0] - src[-yo];
    pgrad_y = pgrad_y + (signed long int)gradWidthStride;
  }
  *pgrad_x = src[(signed long int)0] - src[-xo];
  *pgrad_y = src[(signed long int)0] - src[-yo];
}

// vl_imgradient_polar_d
// file vl/imopv.c line 875
extern void vl_imgradient_polar_d(double *gradientModulus, double *gradientAngle, unsigned long long int gradientHorizontalStride, unsigned long long int gradHeightStride, const double *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride)
{
  const signed long long int xo = (const signed long long int)1;
  const signed long long int yo = (const signed long long int)imageStride;
  const unsigned long long int w = imageWidth;
  const unsigned long long int h = imageHeight;
  const double *src;
  const double *end;
  double *pgrad_angl;
  double *pgrad_ampl;
  double gx;
  double gy;
  unsigned long long int y;
  src = image;
  pgrad_angl = gradientAngle;
  pgrad_ampl = gradientModulus;
  gx = src[+xo] - src[(signed long int)0];
  gy = src[+yo] - src[(signed long int)0];
  float return_value_vl_fast_sqrt_f_1;
  return_value_vl_fast_sqrt_f_1=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
  *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_1;
  pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
  float return_value_vl_fast_atan2_f_2;
  return_value_vl_fast_atan2_f_2=vl_fast_atan2_f((float)gy, (float)gx);
  float return_value_vl_mod_2pi_f_3;
  return_value_vl_mod_2pi_f_3=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_2 + (double)2 * 3.141592653589793));
  *pgrad_angl = (double)return_value_vl_mod_2pi_f_3;
  pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
  src = src + 1l;
  end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
  while(!(src >= end))
  {
    gx = 0.5 * (src[+xo] - src[-xo]);
    gy = src[+yo] - src[(signed long int)0];
    float return_value_vl_fast_sqrt_f_4;
    return_value_vl_fast_sqrt_f_4=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
    *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_4;
    pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
    float return_value_vl_fast_atan2_f_5;
    return_value_vl_fast_atan2_f_5=vl_fast_atan2_f((float)gy, (float)gx);
    float return_value_vl_mod_2pi_f_6;
    return_value_vl_mod_2pi_f_6=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_5 + (double)2 * 3.141592653589793));
    *pgrad_angl = (double)return_value_vl_mod_2pi_f_6;
    pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
    src = src + 1l;
  }
  gx = src[(signed long int)0] - src[-xo];
  gy = src[+yo] - src[(signed long int)0];
  float return_value_vl_fast_sqrt_f_7;
  return_value_vl_fast_sqrt_f_7=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
  *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_7;
  pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
  float return_value_vl_fast_atan2_f_8;
  return_value_vl_fast_atan2_f_8=vl_fast_atan2_f((float)gy, (float)gx);
  float return_value_vl_mod_2pi_f_9;
  return_value_vl_mod_2pi_f_9=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_8 + (double)2 * 3.141592653589793));
  *pgrad_angl = (double)return_value_vl_mod_2pi_f_9;
  pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
  src = src + 1l;
  gradientModulus = gradientModulus + (signed long int)gradHeightStride;
  pgrad_ampl = gradientModulus;
  gradientAngle = gradientAngle + (signed long int)gradHeightStride;
  pgrad_angl = gradientAngle;
  image = image + (signed long int)imageStride;
  src = image;
  y = (unsigned long long int)1;
  for( ; !(y >= h + 18446744073709551615ul); y = y + 1ull)
  {
    gx = src[+xo] - src[(signed long int)0];
    gy = 0.5 * (src[+yo] - src[-yo]);
    float return_value_vl_fast_sqrt_f_10;
    return_value_vl_fast_sqrt_f_10=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
    *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_10;
    pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
    float return_value_vl_fast_atan2_f_11;
    return_value_vl_fast_atan2_f_11=vl_fast_atan2_f((float)gy, (float)gx);
    float return_value_vl_mod_2pi_f_12;
    return_value_vl_mod_2pi_f_12=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_11 + (double)2 * 3.141592653589793));
    *pgrad_angl = (double)return_value_vl_mod_2pi_f_12;
    pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
    src = src + 1l;
    end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
    while(!(src >= end))
    {
      gx = 0.5 * (src[+xo] - src[-xo]);
      gy = 0.5 * (src[+yo] - src[-yo]);
      float return_value_vl_fast_sqrt_f_13;
      return_value_vl_fast_sqrt_f_13=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
      *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_13;
      pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
      float return_value_vl_fast_atan2_f_14;
      return_value_vl_fast_atan2_f_14=vl_fast_atan2_f((float)gy, (float)gx);
      float return_value_vl_mod_2pi_f_15;
      return_value_vl_mod_2pi_f_15=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_14 + (double)2 * 3.141592653589793));
      *pgrad_angl = (double)return_value_vl_mod_2pi_f_15;
      pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
      src = src + 1l;
    }
    gx = src[(signed long int)0] - src[-xo];
    gy = 0.5 * (src[+yo] - src[-yo]);
    float return_value_vl_fast_sqrt_f_16;
    return_value_vl_fast_sqrt_f_16=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
    *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_16;
    pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
    float return_value_vl_fast_atan2_f_17;
    return_value_vl_fast_atan2_f_17=vl_fast_atan2_f((float)gy, (float)gx);
    float return_value_vl_mod_2pi_f_18;
    return_value_vl_mod_2pi_f_18=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_17 + (double)2 * 3.141592653589793));
    *pgrad_angl = (double)return_value_vl_mod_2pi_f_18;
    pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
    src = src + 1l;
    gradientModulus = gradientModulus + (signed long int)gradHeightStride;
    pgrad_ampl = gradientModulus;
    gradientAngle = gradientAngle + (signed long int)gradHeightStride;
    pgrad_angl = gradientAngle;
    image = image + (signed long int)imageStride;
    src = image;
  }
  gx = src[+xo] - src[(signed long int)0];
  gy = src[(signed long int)0] - src[-yo];
  float return_value_vl_fast_sqrt_f_19;
  return_value_vl_fast_sqrt_f_19=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
  *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_19;
  pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
  float return_value_vl_fast_atan2_f_20;
  return_value_vl_fast_atan2_f_20=vl_fast_atan2_f((float)gy, (float)gx);
  float return_value_vl_mod_2pi_f_21;
  return_value_vl_mod_2pi_f_21=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_20 + (double)2 * 3.141592653589793));
  *pgrad_angl = (double)return_value_vl_mod_2pi_f_21;
  pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
  src = src + 1l;
  end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
  while(!(src >= end))
  {
    gx = 0.5 * (src[+xo] - src[-xo]);
    gy = src[(signed long int)0] - src[-yo];
    float return_value_vl_fast_sqrt_f_22;
    return_value_vl_fast_sqrt_f_22=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
    *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_22;
    pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
    float return_value_vl_fast_atan2_f_23;
    return_value_vl_fast_atan2_f_23=vl_fast_atan2_f((float)gy, (float)gx);
    float return_value_vl_mod_2pi_f_24;
    return_value_vl_mod_2pi_f_24=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_23 + (double)2 * 3.141592653589793));
    *pgrad_angl = (double)return_value_vl_mod_2pi_f_24;
    pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
    src = src + 1l;
  }
  gx = src[(signed long int)0] - src[-xo];
  gy = src[(signed long int)0] - src[-yo];
  float return_value_vl_fast_sqrt_f_25;
  return_value_vl_fast_sqrt_f_25=vl_fast_sqrt_f((float)(gx * gx + gy * gy));
  *pgrad_ampl = (double)return_value_vl_fast_sqrt_f_25;
  pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
  float return_value_vl_fast_atan2_f_26;
  return_value_vl_fast_atan2_f_26=vl_fast_atan2_f((float)gy, (float)gx);
  float return_value_vl_mod_2pi_f_27;
  return_value_vl_mod_2pi_f_27=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_26 + (double)2 * 3.141592653589793));
  *pgrad_angl = (double)return_value_vl_mod_2pi_f_27;
  pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
  src = src + 1l;
}

// vl_imgradient_polar_f
// file vl/imopv.h line 128
extern void vl_imgradient_polar_f(float *gradientModulus, float *gradientAngle, unsigned long long int gradientHorizontalStride, unsigned long long int gradHeightStride, const float *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride)
{
  const signed long long int xo = (const signed long long int)1;
  const signed long long int yo = (const signed long long int)imageStride;
  const unsigned long long int w = imageWidth;
  const unsigned long long int h = imageHeight;
  const float *src;
  const float *end;
  float *pgrad_angl;
  float *pgrad_ampl;
  float gx;
  float gy;
  unsigned long long int y;
  src = image;
  pgrad_angl = gradientAngle;
  pgrad_ampl = gradientModulus;
  gx = src[+xo] - src[(signed long int)0];
  gy = src[+yo] - src[(signed long int)0];
  *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
  pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
  float return_value_vl_fast_atan2_f_1;
  return_value_vl_fast_atan2_f_1=vl_fast_atan2_f(gy, gx);
  *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_1 + (double)2 * 3.141592653589793));
  pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
  src = src + 1l;
  end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
  while(!(src >= end))
  {
    gx = (float)(0.5 * (double)(src[+xo] - src[-xo]));
    gy = src[+yo] - src[(signed long int)0];
    *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
    pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
    float return_value_vl_fast_atan2_f_2;
    return_value_vl_fast_atan2_f_2=vl_fast_atan2_f(gy, gx);
    *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_2 + (double)2 * 3.141592653589793));
    pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
    src = src + 1l;
  }
  gx = src[(signed long int)0] - src[-xo];
  gy = src[+yo] - src[(signed long int)0];
  *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
  pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
  float return_value_vl_fast_atan2_f_3;
  return_value_vl_fast_atan2_f_3=vl_fast_atan2_f(gy, gx);
  *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_3 + (double)2 * 3.141592653589793));
  pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
  src = src + 1l;
  gradientModulus = gradientModulus + (signed long int)gradHeightStride;
  pgrad_ampl = gradientModulus;
  gradientAngle = gradientAngle + (signed long int)gradHeightStride;
  pgrad_angl = gradientAngle;
  image = image + (signed long int)imageStride;
  src = image;
  y = (unsigned long long int)1;
  for( ; !(y >= h + 18446744073709551615ul); y = y + 1ull)
  {
    gx = src[+xo] - src[(signed long int)0];
    gy = (float)(0.5 * (double)(src[+yo] - src[-yo]));
    *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
    pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
    float return_value_vl_fast_atan2_f_4;
    return_value_vl_fast_atan2_f_4=vl_fast_atan2_f(gy, gx);
    *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_4 + (double)2 * 3.141592653589793));
    pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
    src = src + 1l;
    end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
    while(!(src >= end))
    {
      gx = (float)(0.5 * (double)(src[+xo] - src[-xo]));
      gy = (float)(0.5 * (double)(src[+yo] - src[-yo]));
      *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
      pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
      float return_value_vl_fast_atan2_f_5;
      return_value_vl_fast_atan2_f_5=vl_fast_atan2_f(gy, gx);
      *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_5 + (double)2 * 3.141592653589793));
      pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
      src = src + 1l;
    }
    gx = src[(signed long int)0] - src[-xo];
    gy = (float)(0.5 * (double)(src[+yo] - src[-yo]));
    *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
    pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
    float return_value_vl_fast_atan2_f_6;
    return_value_vl_fast_atan2_f_6=vl_fast_atan2_f(gy, gx);
    *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_6 + (double)2 * 3.141592653589793));
    pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
    src = src + 1l;
    gradientModulus = gradientModulus + (signed long int)gradHeightStride;
    pgrad_ampl = gradientModulus;
    gradientAngle = gradientAngle + (signed long int)gradHeightStride;
    pgrad_angl = gradientAngle;
    image = image + (signed long int)imageStride;
    src = image;
  }
  gx = src[+xo] - src[(signed long int)0];
  gy = src[(signed long int)0] - src[-yo];
  *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
  pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
  float return_value_vl_fast_atan2_f_7;
  return_value_vl_fast_atan2_f_7=vl_fast_atan2_f(gy, gx);
  *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_7 + (double)2 * 3.141592653589793));
  pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
  src = src + 1l;
  end = ((src - (signed long int)1) + (signed long int)w) - (signed long int)1;
  while(!(src >= end))
  {
    gx = (float)(0.5 * (double)(src[+xo] - src[-xo]));
    gy = src[(signed long int)0] - src[-yo];
    *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
    pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
    float return_value_vl_fast_atan2_f_8;
    return_value_vl_fast_atan2_f_8=vl_fast_atan2_f(gy, gx);
    *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_8 + (double)2 * 3.141592653589793));
    pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
    src = src + 1l;
  }
  gx = src[(signed long int)0] - src[-xo];
  gy = src[(signed long int)0] - src[-yo];
  *pgrad_ampl=vl_fast_sqrt_f(gx * gx + gy * gy);
  pgrad_ampl = pgrad_ampl + (signed long int)gradientHorizontalStride;
  float return_value_vl_fast_atan2_f_9;
  return_value_vl_fast_atan2_f_9=vl_fast_atan2_f(gy, gx);
  *pgrad_angl=vl_mod_2pi_f((float)((double)return_value_vl_fast_atan2_f_9 + (double)2 * 3.141592653589793));
  pgrad_angl = pgrad_angl + (signed long int)gradientHorizontalStride;
  src = src + 1l;
}

// vl_imintegral_d
// file vl/imopv.c line 1042
extern void vl_imintegral_d(double *integral, unsigned long long int integralStride, const double *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride)
{
  unsigned long long int x;
  unsigned long long int y;
  double temp = (double)0;
  const double *tmp_post_1;
  double *tmp_post_2;
  if(imageHeight >= 1ul)
  {
    x = (unsigned long long int)0;
    for( ; !(x >= imageWidth); x = x + 1ull)
    {
      tmp_post_1 = image;
      image = image + 1l;
      temp = temp + *tmp_post_1;
      tmp_post_2 = integral;
      integral = integral + 1l;
      *tmp_post_2 = temp;
    }
  }

  y = (unsigned long long int)1;
  const double *tmp_post_3;
  double *tmp_post_4;
  double *tmp_post_5;
  for( ; !(y >= imageHeight); y = y + 1ull)
  {
    double *integralPrev;
    integral = integral + (signed long int)(integralStride - imageWidth);
    image = image + (signed long int)(imageStride - imageWidth);
    integralPrev = integral - (signed long int)integralStride;
    temp = (double)0;
    x = (unsigned long long int)0;
    for( ; !(x >= imageWidth); x = x + 1ull)
    {
      tmp_post_3 = image;
      image = image + 1l;
      temp = temp + *tmp_post_3;
      tmp_post_4 = integral;
      integral = integral + 1l;
      tmp_post_5 = integralPrev;
      integralPrev = integralPrev + 1l;
      *tmp_post_4 = *tmp_post_5 + temp;
    }
  }
}

// vl_imintegral_f
// file vl/imopv.c line 1042
extern void vl_imintegral_f(float *integral, unsigned long long int integralStride, const float *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride)
{
  unsigned long long int x;
  unsigned long long int y;
  float temp = (float)0;
  const float *tmp_post_1;
  float *tmp_post_2;
  if(imageHeight >= 1ul)
  {
    x = (unsigned long long int)0;
    for( ; !(x >= imageWidth); x = x + 1ull)
    {
      tmp_post_1 = image;
      image = image + 1l;
      temp = temp + *tmp_post_1;
      tmp_post_2 = integral;
      integral = integral + 1l;
      *tmp_post_2 = temp;
    }
  }

  y = (unsigned long long int)1;
  const float *tmp_post_3;
  float *tmp_post_4;
  float *tmp_post_5;
  for( ; !(y >= imageHeight); y = y + 1ull)
  {
    float *integralPrev;
    integral = integral + (signed long int)(integralStride - imageWidth);
    image = image + (signed long int)(imageStride - imageWidth);
    integralPrev = integral - (signed long int)integralStride;
    temp = (float)0;
    x = (unsigned long long int)0;
    for( ; !(x >= imageWidth); x = x + 1ull)
    {
      tmp_post_3 = image;
      image = image + 1l;
      temp = temp + *tmp_post_3;
      tmp_post_4 = integral;
      integral = integral + 1l;
      tmp_post_5 = integralPrev;
      integralPrev = integralPrev + 1l;
      *tmp_post_4 = *tmp_post_5 + temp;
    }
  }
}

// vl_imintegral_i32
// file vl/imopv.c line 1042
extern void vl_imintegral_i32(signed int *integral, unsigned long long int integralStride, const signed int *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride)
{
  unsigned long long int x;
  unsigned long long int y;
  signed int temp = 0;
  const signed int *tmp_post_1;
  signed int *tmp_post_2;
  if(imageHeight >= 1ul)
  {
    x = (unsigned long long int)0;
    for( ; !(x >= imageWidth); x = x + 1ull)
    {
      tmp_post_1 = image;
      image = image + 1l;
      temp = temp + *tmp_post_1;
      tmp_post_2 = integral;
      integral = integral + 1l;
      *tmp_post_2 = temp;
    }
  }

  y = (unsigned long long int)1;
  const signed int *tmp_post_3;
  signed int *tmp_post_4;
  signed int *tmp_post_5;
  for( ; !(y >= imageHeight); y = y + 1ull)
  {
    signed int *integralPrev;
    integral = integral + (signed long int)(integralStride - imageWidth);
    image = image + (signed long int)(imageStride - imageWidth);
    integralPrev = integral - (signed long int)integralStride;
    temp = 0;
    x = (unsigned long long int)0;
    for( ; !(x >= imageWidth); x = x + 1ull)
    {
      tmp_post_3 = image;
      image = image + 1l;
      temp = temp + *tmp_post_3;
      tmp_post_4 = integral;
      integral = integral + 1l;
      tmp_post_5 = integralPrev;
      integralPrev = integralPrev + 1l;
      *tmp_post_4 = *tmp_post_5 + temp;
    }
  }
}

// vl_imintegral_ui32
// file vl/imopv.c line 1042
extern void vl_imintegral_ui32(unsigned int *integral, unsigned long long int integralStride, const unsigned int *image, unsigned long long int imageWidth, unsigned long long int imageHeight, unsigned long long int imageStride)
{
  unsigned long long int x;
  unsigned long long int y;
  unsigned int temp = (unsigned int)0;
  const unsigned int *tmp_post_1;
  unsigned int *tmp_post_2;
  if(imageHeight >= 1ul)
  {
    x = (unsigned long long int)0;
    for( ; !(x >= imageWidth); x = x + 1ull)
    {
      tmp_post_1 = image;
      image = image + 1l;
      temp = temp + *tmp_post_1;
      tmp_post_2 = integral;
      integral = integral + 1l;
      *tmp_post_2 = temp;
    }
  }

  y = (unsigned long long int)1;
  const unsigned int *tmp_post_3;
  unsigned int *tmp_post_4;
  unsigned int *tmp_post_5;
  for( ; !(y >= imageHeight); y = y + 1ull)
  {
    unsigned int *integralPrev;
    integral = integral + (signed long int)(integralStride - imageWidth);
    image = image + (signed long int)(imageStride - imageWidth);
    integralPrev = integral - (signed long int)integralStride;
    temp = (unsigned int)0;
    x = (unsigned long long int)0;
    for( ; !(x >= imageWidth); x = x + 1ull)
    {
      tmp_post_3 = image;
      image = image + 1l;
      temp = temp + *tmp_post_3;
      tmp_post_4 = integral;
      integral = integral + 1l;
      tmp_post_5 = integralPrev;
      integralPrev = integralPrev + 1l;
      *tmp_post_4 = *tmp_post_5 + temp;
    }
  }
}

// vl_imsmooth_d
// file vl/imopv.c line 645
extern void vl_imsmooth_d(double *smoothed, unsigned long long int smoothedStride, const double *image, unsigned long long int width, unsigned long long int height, unsigned long long int stride, double sigmax, double sigmay)
{
  double *filterx;
  double *filtery;
  double *buffer;
  unsigned long long int sizex;
  unsigned long long int sizey;
  filterx=_vl_new_gaussian_fitler_d(&sizex, sigmax);
  if(IEEE_FLOAT_EQUAL(sigmax, sigmay))
  {
    filtery = filterx;
    sizey = sizex;
  }

  else
    filtery=_vl_new_gaussian_fitler_d(&sizey, sigmay);
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(width * height * sizeof(double) /*8ul*/ );
  buffer = (double *)return_value_vl_malloc_1;
  vl_imconvcol_vd(buffer, height, image, width, height, stride, filtery, (signed long long int)(-((signed int)sizey - 1) / 2), (signed long long int)(((signed int)sizey - 1) / 2), 1, (unsigned int)(0x1 << 0 | 0x1 << 2));
  vl_imconvcol_vd(smoothed, smoothedStride, buffer, height, width, height, filterx, (signed long long int)(-((signed int)sizex - 1) / 2), (signed long long int)(((signed int)sizex - 1) / 2), 1, (unsigned int)(0x1 << 0 | 0x1 << 2));
  vl_free((void *)buffer);
  vl_free((void *)filterx);
  if(IEEE_FLOAT_NOTEQUAL(sigmax, sigmay))
    vl_free((void *)filtery);

}

// vl_imsmooth_f
// file vl/imopv.h line 113
extern void vl_imsmooth_f(float *smoothed, unsigned long long int smoothedStride, const float *image, unsigned long long int width, unsigned long long int height, unsigned long long int stride, double sigmax, double sigmay)
{
  float *filterx;
  float *filtery;
  float *buffer;
  unsigned long long int sizex;
  unsigned long long int sizey;
  filterx=_vl_new_gaussian_fitler_f(&sizex, sigmax);
  if(IEEE_FLOAT_EQUAL(sigmax, sigmay))
  {
    filtery = filterx;
    sizey = sizex;
  }

  else
    filtery=_vl_new_gaussian_fitler_f(&sizey, sigmay);
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(width * height * sizeof(float) /*4ul*/ );
  buffer = (float *)return_value_vl_malloc_1;
  vl_imconvcol_vf(buffer, height, image, width, height, stride, filtery, (signed long long int)(-((signed int)sizey - 1) / 2), (signed long long int)(((signed int)sizey - 1) / 2), 1, (unsigned int)(0x1 << 0 | 0x1 << 2));
  vl_imconvcol_vf(smoothed, smoothedStride, buffer, height, width, height, filterx, (signed long long int)(-((signed int)sizex - 1) / 2), (signed long long int)(((signed int)sizex - 1) / 2), 1, (unsigned int)(0x1 << 0 | 0x1 << 2));
  vl_free((void *)buffer);
  vl_free((void *)filterx);
  if(IEEE_FLOAT_NOTEQUAL(sigmax, sigmay))
    vl_free((void *)filtery);

}

// vl_irodrigues
// file vl/rodrigues.c line 179
extern void vl_irodrigues(double *om_pt, double *dom_pt, const double *R_pt)
{
  const double small = 1e-6;
  double th;
  double tmp_if_expr_1;
  if(*R_pt + R_pt[4l] + R_pt[8l] > -1.000000)
    tmp_if_expr_1 = R_pt[(signed long int)(0 + 3 * 0)] + R_pt[(signed long int)(1 + 3 * 1)] + R_pt[(signed long int)(2 + 3 * 2)];

  else
    tmp_if_expr_1 = -1.0;
  th=acos(0.5 * (tmp_if_expr_1 - 1.0));
  double sth;
  sth=sin(th);
  double cth;
  cth=cos(th);
  double return_value_fabs_7;
  return_value_fabs_7=fabs(sth);
  double tmp_if_expr_5;
  double return_value_sin_4;
  if(return_value_fabs_7 < small && cth < 0.000000)
  {
    double W_pt[9l];
    double x;
    double y;
    double z;
    W_pt[(signed long int)0] = 0.5 * (R_pt[(signed long int)(0 + 3 * 0)] + R_pt[(signed long int)(0 + 3 * 0)]) - 1.0;
    W_pt[(signed long int)1] = 0.5 * (R_pt[(signed long int)(1 + 3 * 0)] + R_pt[(signed long int)(0 + 3 * 1)]);
    W_pt[(signed long int)2] = 0.5 * (R_pt[(signed long int)(2 + 3 * 0)] + R_pt[(signed long int)(0 + 3 * 2)]);
    W_pt[(signed long int)3] = 0.5 * (R_pt[(signed long int)(0 + 3 * 1)] + R_pt[(signed long int)(1 + 3 * 0)]);
    W_pt[(signed long int)4] = 0.5 * (R_pt[(signed long int)(1 + 3 * 1)] + R_pt[(signed long int)(1 + 3 * 1)]) - 1.0;
    W_pt[(signed long int)5] = 0.5 * (R_pt[(signed long int)(2 + 3 * 1)] + R_pt[(signed long int)(1 + 3 * 2)]);
    W_pt[(signed long int)6] = 0.5 * (R_pt[(signed long int)(0 + 3 * 2)] + R_pt[(signed long int)(2 + 3 * 0)]);
    W_pt[(signed long int)7] = 0.5 * (R_pt[(signed long int)(1 + 3 * 2)] + R_pt[(signed long int)(2 + 3 * 1)]);
    W_pt[(signed long int)8] = 0.5 * (R_pt[(signed long int)(2 + 3 * 2)] + R_pt[(signed long int)(2 + 3 * 2)]) - 1.0;
    x=sqrt(0.5 * ((W_pt[(signed long int)(0 + 3 * 0)] - W_pt[(signed long int)(1 + 3 * 1)]) - W_pt[(signed long int)(2 + 3 * 2)]));
    y=sqrt(0.5 * ((W_pt[(signed long int)(1 + 3 * 1)] - W_pt[(signed long int)(2 + 3 * 2)]) - W_pt[(signed long int)(0 + 3 * 0)]));
    z=sqrt(0.5 * ((W_pt[(signed long int)(2 + 3 * 2)] - W_pt[(signed long int)(0 + 3 * 0)]) - W_pt[(signed long int)(1 + 3 * 1)]));
    if(x >= y && x >= z)
    {
      y = W_pt[(signed long int)(1 + 3 * 0)] >= (double)0 ? y : -y;
      z = W_pt[(signed long int)(2 + 3 * 0)] >= (double)0 ? z : -z;
    }

    else
      if(y >= x && y >= z)
      {
        z = W_pt[(signed long int)(2 + 3 * 1)] >= (double)0 ? z : -z;
        x = W_pt[(signed long int)(1 + 3 * 0)] >= (double)0 ? x : -x;
      }

      else
      {
        x = W_pt[(signed long int)(2 + 3 * 0)] >= (double)0 ? x : -x;
        y = W_pt[(signed long int)(2 + 3 * 1)] >= (double)0 ? y : -y;
      }
    double scale;
    double return_value_sqrt_2;
    return_value_sqrt_2=sqrt((double)1 - cth);
    scale = th / return_value_sqrt_2;
    om_pt[(signed long int)0] = scale * x;
    om_pt[(signed long int)1] = scale * y;
    om_pt[(signed long int)2] = scale * z;
    if(!(dom_pt == ((double *)NULL)))
    {
      signed int k = 0;
      for( ; !(k >= 3); k = k + 1)
        dom_pt[(signed long int)k] = vl_nan_d_link1.value;
    }

    goto __CPROVER_DUMP_L16;
  }

  else
  {
    double a;
    double return_value_fabs_3;
    return_value_fabs_3=fabs(sth);
    if(return_value_fabs_3 < small)
      tmp_if_expr_5 = (double)1;

    else
    {
      return_value_sin_4=sin(th);
      tmp_if_expr_5 = th / return_value_sin_4;
    }
    a = tmp_if_expr_5;
    double b;
    om_pt[(signed long int)0] = 0.5 * a * (R_pt[(signed long int)(2 + 3 * 1)] - R_pt[(signed long int)(1 + 3 * 2)]);
    om_pt[(signed long int)1] = 0.5 * a * (R_pt[(signed long int)(0 + 3 * 2)] - R_pt[(signed long int)(2 + 3 * 0)]);
    om_pt[(signed long int)2] = 0.5 * a * (R_pt[(signed long int)(1 + 3 * 0)] - R_pt[(signed long int)(0 + 3 * 1)]);
    if(!(dom_pt == ((double *)NULL)))
    {
      double return_value_fabs_6;
      return_value_fabs_6=fabs(sth);
      if(return_value_fabs_6 < small)
      {
        a = 0.5;
        b = (double)0;
      }

      else
      {
        a = th / ((double)2 * sth);
        b = ((th * cth - sth) / ((double)2 * sth * sth)) / th;
      }
      dom_pt[(signed long int)(0 + 3 * 0)] = b * om_pt[(signed long int)0];
      dom_pt[(signed long int)(1 + 3 * 0)] = b * om_pt[(signed long int)1];
      dom_pt[(signed long int)(2 + 3 * 0)] = b * om_pt[(signed long int)2];
      dom_pt[(signed long int)(0 + 3 * 1)] = (double)0;
      dom_pt[(signed long int)(1 + 3 * 1)] = (double)0;
      dom_pt[(signed long int)(2 + 3 * 1)] = a;
      dom_pt[(signed long int)(0 + 3 * 2)] = (double)0;
      dom_pt[(signed long int)(1 + 3 * 2)] = -a;
      dom_pt[(signed long int)(2 + 3 * 2)] = (double)0;
      dom_pt[(signed long int)(0 + 3 * 3)] = (double)0;
      dom_pt[(signed long int)(1 + 3 * 3)] = (double)0;
      dom_pt[(signed long int)(2 + 3 * 3)] = -a;
      dom_pt[(signed long int)(0 + 3 * 4)] = b * om_pt[(signed long int)0];
      dom_pt[(signed long int)(1 + 3 * 4)] = b * om_pt[(signed long int)1];
      dom_pt[(signed long int)(2 + 3 * 4)] = b * om_pt[(signed long int)2];
      dom_pt[(signed long int)(0 + 3 * 5)] = a;
      dom_pt[(signed long int)(1 + 3 * 5)] = (double)0;
      dom_pt[(signed long int)(2 + 3 * 5)] = (double)0;
      dom_pt[(signed long int)(0 + 3 * 6)] = (double)0;
      dom_pt[(signed long int)(1 + 3 * 6)] = a;
      dom_pt[(signed long int)(2 + 3 * 6)] = (double)0;
      dom_pt[(signed long int)(0 + 3 * 7)] = -a;
      dom_pt[(signed long int)(1 + 3 * 7)] = (double)0;
      dom_pt[(signed long int)(2 + 3 * 7)] = (double)0;
      dom_pt[(signed long int)(0 + 3 * 8)] = b * om_pt[(signed long int)0];
      dom_pt[(signed long int)(1 + 3 * 8)] = b * om_pt[(signed long int)1];
      dom_pt[(signed long int)(2 + 3 * 8)] = b * om_pt[(signed long int)2];
    }

  }

__CPROVER_DUMP_L16:
  ;
}

// vl_kdforest_build
// file vl/kdtree.c line 530
extern void vl_kdforest_build(struct _VlKDForest *self, unsigned long long int numData, const void *data)
{
  unsigned long long int di;
  unsigned long long int ti;
  unsigned long long int maxNumNodes;
  double *searchBounds;
  self->data = data;
  self->numData = numData;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct _VlKDTree *) /*8ul*/  * self->numTrees);
  self->trees = (struct _VlKDTree **)return_value_vl_malloc_1;
  maxNumNodes = (unsigned long long int)0;
  ti = (unsigned long long int)0;
  for( ; !(ti >= self->numTrees); ti = ti + 1ull)
  {
    void *return_value_vl_malloc_2;
    return_value_vl_malloc_2=vl_malloc(sizeof(struct _VlKDTree) /*40ul*/ );
    self->trees[(signed long int)ti] = (struct _VlKDTree *)return_value_vl_malloc_2;
    void *return_value_vl_malloc_3;
    return_value_vl_malloc_3=vl_malloc(sizeof(struct _VlKDTreeDataIndexEntry) /*16ul*/  * self->numData);
    self->trees[(signed long int)ti]->dataIndex = (struct _VlKDTreeDataIndexEntry *)return_value_vl_malloc_3;
    di = (unsigned long long int)0;
    for( ; !(di >= self->numData); di = di + 1ull)
      (self->trees[(signed long int)ti]->dataIndex + (signed long int)di)->index = (signed long long int)di;
    self->trees[(signed long int)ti]->numUsedNodes = (unsigned long long int)0;
    self->trees[(signed long int)ti]->numAllocatedNodes = (unsigned long int)2 * self->numData - (unsigned long int)1;
    void *return_value_vl_malloc_4;
    return_value_vl_malloc_4=vl_malloc(sizeof(struct _VlKDTreeNode) /*56ul*/  * self->trees[(signed long int)ti]->numAllocatedNodes);
    self->trees[(signed long int)ti]->nodes = (struct _VlKDTreeNode *)return_value_vl_malloc_4;
    self->trees[(signed long int)ti]->depth = (unsigned int)0;
    unsigned long long int return_value_vl_kdtree_node_new_5;
    return_value_vl_kdtree_node_new_5=vl_kdtree_node_new(self->trees[(signed long int)ti], (unsigned long long int)0);
    vl_kdtree_build_recursively(self, self->trees[(signed long int)ti], return_value_vl_kdtree_node_new_5, (unsigned long long int)0, self->numData, (unsigned int)0);
    maxNumNodes = maxNumNodes + self->trees[(signed long int)ti]->numUsedNodes;
  }
  void *return_value_vl_malloc_6;
  return_value_vl_malloc_6=vl_malloc(sizeof(double) /*8ul*/  * (unsigned long int)2 * self->dimension);
  searchBounds = (double *)return_value_vl_malloc_6;
  ti = (unsigned long long int)0;
  double *tmp_post_7;
  double *tmp_post_8;
  for( ; !(ti >= self->numTrees); ti = ti + 1ull)
  {
    double *iter = searchBounds;
    double *end = iter + (signed long int)((unsigned long int)2 * self->dimension);
    for( ; !(iter >= end); *tmp_post_8 = (double)+vl_infinity_f.value)
    {
      tmp_post_7 = iter;
      iter = iter + 1l;
      *tmp_post_7 = (double)-vl_infinity_f.value;
      tmp_post_8 = iter;
      iter = iter + 1l;
    }
    vl_kdtree_calc_bounds_recursively(self->trees[(signed long int)ti], (unsigned long long int)0, searchBounds);
  }
  vl_free((void *)searchBounds);
  self->maxNumNodes = maxNumNodes;
}

// vl_kdforest_delete
// file vl/kdtree.c line 461
extern void vl_kdforest_delete(struct _VlKDForest *self)
{
  unsigned long long int ti;
  struct _VlKDForestSearcher *searcher;
  do
  {
    searcher=vl_kdforest_get_searcher(self, (unsigned long long int)0);
    if(searcher == ((struct _VlKDForestSearcher *)NULL))
      break;

    vl_kdforestsearcher_delete(searcher);
  }
  while((_Bool)1);
  if(!(self->trees == ((struct _VlKDTree **)NULL)))
  {
    ti = (unsigned long long int)0;
    for( ; !(ti >= self->numTrees); ti = ti + 1ull)
      if(!(self->trees[(signed long int)ti] == ((struct _VlKDTree *)NULL)))
      {
        if(!(self->trees[(signed long int)ti]->nodes == ((struct _VlKDTreeNode *)NULL)))
          vl_free((void *)self->trees[(signed long int)ti]->nodes);

        if(!(self->trees[(signed long int)ti]->dataIndex == ((struct _VlKDTreeDataIndexEntry *)NULL)))
          vl_free((void *)self->trees[(signed long int)ti]->dataIndex);

        vl_free((void *)self->trees[(signed long int)ti]);
      }

    vl_free((void *)self->trees);
  }

  vl_free((void *)self);
}

// vl_kdforest_get_data_dimension
// file vl/kdtree.c line 1055
extern unsigned long long int vl_kdforest_get_data_dimension(const struct _VlKDForest *self)
{
  return self->dimension;
}

// vl_kdforest_get_data_type
// file vl/kdtree.c line 1067
extern unsigned int vl_kdforest_get_data_type(const struct _VlKDForest *self)
{
  return self->dataType;
}

// vl_kdforest_get_depth_of_tree
// file vl/kdtree.c line 966
extern unsigned long long int vl_kdforest_get_depth_of_tree(const struct _VlKDForest *self, unsigned long long int treeIndex)
{
  return (unsigned long long int)self->trees[(signed long int)treeIndex]->depth;
}

// vl_kdforest_get_max_num_comparisons
// file vl/kdtree.c line 1013
extern unsigned long long int vl_kdforest_get_max_num_comparisons(struct _VlKDForest *self)
{
  return self->searchMaxNumComparisons;
}

// vl_kdforest_get_num_nodes_of_tree
// file vl/kdtree.c line 952
extern unsigned long long int vl_kdforest_get_num_nodes_of_tree(const struct _VlKDForest *self, unsigned long long int treeIndex)
{
  return self->trees[(signed long int)treeIndex]->numUsedNodes;
}

// vl_kdforest_get_num_trees
// file vl/kdtree.c line 980
extern unsigned long long int vl_kdforest_get_num_trees(const struct _VlKDForest *self)
{
  return self->numTrees;
}

// vl_kdforest_get_searcher
// file vl/kdtree.c line 443
extern struct _VlKDForestSearcher * vl_kdforest_get_searcher(const struct _VlKDForest *self, unsigned long long int pos)
{
  struct _VlKDForestSearcher *lastSearcher = self->headSearcher;
  unsigned long long int i = (unsigned long long int)0;
  for( ; !(lastSearcher == ((struct _VlKDForestSearcher *)NULL)) && !(i >= pos); i = i + 1ull)
    lastSearcher = lastSearcher->next;
  return lastSearcher;
}

// vl_kdforest_get_thresholding_method
// file vl/kdtree.c line 1043
extern enum _VlKDTreeThresholdingMethod vl_kdforest_get_thresholding_method(const struct _VlKDForest *self)
{
  return self->thresholdingMethod;
}

// vl_kdforest_neighbor_heap_down
// file vl/heap-def.h line 337
static inline void vl_kdforest_neighbor_heap_down(struct _VlKDForestNeighbor *array, unsigned long long int index)
{
  unsigned long long int parentIndex;
  if(!(index == 0ul))
  {
    parentIndex=vl_heap_parent(index);
    if((array + (signed long int)parentIndex)->distance + -(array + (signed long int)index)->distance < 0.000000)
    {
      vl_kdforest_neighbor_heap_swap(array, index, parentIndex);
      vl_kdforest_neighbor_heap_down(array, parentIndex);
    }

  }

}

// vl_kdforest_neighbor_heap_pop
// file vl/heap-def.h line 400
static inline unsigned long long int vl_kdforest_neighbor_heap_pop(struct _VlKDForestNeighbor *array, unsigned long long int *heapSize)
{
  *heapSize = *heapSize - (unsigned long long int)1;
  vl_kdforest_neighbor_heap_swap(array, (unsigned long long int)0, *heapSize);
  if(*heapSize >= 2ul)
    vl_kdforest_neighbor_heap_up(array, *heapSize, (unsigned long long int)0);

  return *heapSize;
}

// vl_kdforest_neighbor_heap_push
// file vl/heap-def.h line 369
static inline void vl_kdforest_neighbor_heap_push(struct _VlKDForestNeighbor *array, unsigned long long int *heapSize)
{
  vl_kdforest_neighbor_heap_down(array, *heapSize);
  *heapSize = *heapSize + (unsigned long long int)1;
}

// vl_kdforest_neighbor_heap_swap
// file vl/heap-def.h line 263
static inline void vl_kdforest_neighbor_heap_swap(struct _VlKDForestNeighbor *array, unsigned long long int indexA, unsigned long long int indexB)
{
  struct _VlKDForestNeighbor t = array[(signed long int)indexA];
  array[(signed long int)indexA] = array[(signed long int)indexB];
  array[(signed long int)indexB] = t;
}

// vl_kdforest_neighbor_heap_up
// file vl/heap-def.h line 288
static inline void vl_kdforest_neighbor_heap_up(struct _VlKDForestNeighbor *array, unsigned long long int heapSize, unsigned long long int index)
{
  unsigned long long int leftIndex;
  leftIndex=vl_heap_left_child(index);
  unsigned long long int rightIndex;
  rightIndex=vl_heap_right_child(index);
  if(!(leftIndex >= heapSize))
  {
    if(rightIndex >= heapSize)
    {
      if((array + (signed long int)leftIndex)->distance + -(array + (signed long int)index)->distance > 0.000000)
        vl_kdforest_neighbor_heap_swap(array, index, leftIndex);

    }

    else
      if((array + (signed long int)rightIndex)->distance + -(array + (signed long int)leftIndex)->distance < 0.000000)
      {
        if((array + (signed long int)leftIndex)->distance + -(array + (signed long int)index)->distance > 0.000000)
        {
          vl_kdforest_neighbor_heap_swap(array, index, leftIndex);
          vl_kdforest_neighbor_heap_up(array, heapSize, leftIndex);
        }

      }

      else
        if((array + (signed long int)rightIndex)->distance + -(array + (signed long int)index)->distance > 0.000000)
        {
          vl_kdforest_neighbor_heap_swap(array, index, rightIndex);
          vl_kdforest_neighbor_heap_up(array, heapSize, rightIndex);
        }

  }

}

// vl_kdforest_neighbor_heap_update
// file vl/heap-def.h line 440
static inline void vl_kdforest_neighbor_heap_update(struct _VlKDForestNeighbor *array, unsigned long long int heapSize, unsigned long long int index)
{
  vl_kdforest_neighbor_heap_up(array, heapSize, index);
  vl_kdforest_neighbor_heap_down(array, index);
}

// vl_kdforest_new
// file vl/kdtree.c line 332
extern struct _VlKDForest * vl_kdforest_new(unsigned int dataType, unsigned long long int dimension, unsigned long long int numTrees, enum _VlVectorComparisonType distance)
{
  struct _VlKDForest *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(struct _VlKDForest) /*248ul*/ , (unsigned long int)1);
  self = (struct _VlKDForest *)return_value_vl_calloc_1;
  self->rand=vl_get_rand();
  self->dataType = dataType;
  self->numData = (unsigned long long int)0;
  self->data = NULL;
  self->dimension = dimension;
  self->numTrees = numTrees;
  self->trees = ((struct _VlKDTree **)NULL);
  self->thresholdingMethod = (enum _VlKDTreeThresholdingMethod)VL_KDTREE_MEDIAN;
  self->splitHeapSize = numTrees < (unsigned long int)5 ? numTrees : (unsigned long int)5;
  self->splitHeapNumNodes = (unsigned long long int)0;
  self->distance = distance;
  self->maxNumNodes = (unsigned long long int)0;
  self->numSearchers = (unsigned long long int)0;
  self->headSearcher = ((struct _VlKDForestSearcher *)NULL);
  float (*return_value_vl_get_vector_comparison_function_f_2)(unsigned long long int, const float *, const float *);
  double (*return_value_vl_get_vector_comparison_function_d_3)(unsigned long long int, const double *, const double *);
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      return_value_vl_get_vector_comparison_function_f_2=vl_get_vector_comparison_function_f(distance);
      self->distanceFunction = (void (*)(void))return_value_vl_get_vector_comparison_function_f_2;
      break;
    }
    case (unsigned int)2:
    {
      return_value_vl_get_vector_comparison_function_d_3=vl_get_vector_comparison_function_d(distance);
      self->distanceFunction = (void (*)(void))return_value_vl_get_vector_comparison_function_d_3;
      break;
    }
    default:
      abort();
  }
  return self;
}

// vl_kdforest_new_searcher
// file vl/kdtree.c line 388
extern struct _VlKDForestSearcher * vl_kdforest_new_searcher(struct _VlKDForest *kdforest)
{
  struct _VlKDForestSearcher *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(struct _VlKDForestSearcher) /*80ul*/ , (unsigned long int)1);
  self = (struct _VlKDForestSearcher *)return_value_vl_calloc_1;
  if(kdforest->numSearchers == 0ul)
  {
    kdforest->headSearcher = self;
    self->previous = (struct _VlKDForestSearcher *)(void *)0;
    self->next = (struct _VlKDForestSearcher *)(void *)0;
  }

  else
  {
    struct _VlKDForestSearcher *lastSearcher = kdforest->headSearcher;
    while((_Bool)1)
      if(!(lastSearcher->next == ((struct _VlKDForestSearcher *)NULL)))
        lastSearcher = lastSearcher->next;

      else
      {
        lastSearcher->next = self;
        self->previous = lastSearcher;
        self->next = (struct _VlKDForestSearcher *)(void *)0;
        break;
      }
  }
  kdforest->numSearchers = kdforest->numSearchers + 1ull;
  self->forest = kdforest;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(struct _VlKDForestSearchState) /*24ul*/  * kdforest->maxNumNodes);
  self->searchHeapArray = (struct _VlKDForestSearchState *)return_value_vl_malloc_2;
  void *return_value_vl_calloc_3;
  return_value_vl_calloc_3=vl_calloc(sizeof(unsigned long long int) /*8ul*/ , kdforest->numData);
  self->searchIdBook = (unsigned long long int *)return_value_vl_calloc_3;
  return self;
}

// vl_kdforest_query
// file vl/kdtree.c line 744
extern unsigned long long int vl_kdforest_query(struct _VlKDForest *self, struct _VlKDForestNeighbor *neighbors, unsigned long long int numNeighbors, const void *query)
{
  struct _VlKDForestSearcher *searcher;
  searcher=vl_kdforest_get_searcher(self, (unsigned long long int)0);
  if(searcher == ((struct _VlKDForestSearcher *)NULL))
    searcher=vl_kdforest_new_searcher(self);

  unsigned long long int return_value_vl_kdforestsearcher_query_1;
  return_value_vl_kdforestsearcher_query_1=vl_kdforestsearcher_query(searcher, neighbors, numNeighbors, query);
  return return_value_vl_kdforestsearcher_query_1;
}

// vl_kdforest_query_recursively
// file vl/kdtree.c line 585
unsigned long long int vl_kdforest_query_recursively(struct _VlKDForestSearcher *searcher, struct _VlKDTree *tree, unsigned long long int nodeIndex, struct _VlKDForestNeighbor *neighbors, unsigned long long int numNeighbors, unsigned long long int *numAddedNeighbors, double dist, const void *query)
{
  const struct _VlKDTreeNode *node = tree->nodes + (signed long int)nodeIndex;
  unsigned long long int i = (unsigned long long int)node->splitDimension;
  signed long long int nextChild;
  signed long long int saveChild;
  double delta;
  double saveDist;
  double x;
  double x1 = node->lowerBound;
  double x2 = node->splitThreshold;
  double x3 = node->upperBound;
  struct _VlKDForestSearchState *searchState;
  searcher->searchNumRecursions = searcher->searchNumRecursions + 1ull;
  switch(searcher->forest->dataType)
  {
    case (unsigned int)1:
    {
      x = (double)((const float *)query)[(signed long int)i];
      break;
    }
    case (unsigned int)2:
    {
      x = ((const double *)query)[(signed long int)i];
      break;
    }
    default:
      abort();
  }
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  float return_value;
  if(!(node->lowerChild >= 0l))
  {
    signed long long int begin = -node->lowerChild - (signed long int)1;
    signed long long int end = -node->upperChild - (signed long int)1;
    signed long long int iter = begin;
    do
    {
      if(!(iter >= end))
      {
        if(searcher->forest->searchMaxNumComparisons == 0ul)
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = searcher->searchNumComparisons < searcher->forest->searchMaxNumComparisons ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_2 = tmp_if_expr_1 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(!tmp_if_expr_2)
        break;

      signed long long int di = (tree->dataIndex + iter)->index;
      if(!(searcher->searchIdBook[di] == searcher->searchId))
      {
        searcher->searchIdBook[di] = searcher->searchId;
        switch(searcher->forest->dataType)
        {
          case (unsigned int)1:
            return_value=((float (*)(unsigned long long int, const float *, const float *))searcher->forest->distanceFunction)(searcher->forest->dimension, (const float *)query, (const float *)searcher->forest->data + (signed long int)((unsigned long int)di * searcher->forest->dimension));
          case (unsigned int)2:
            dist=((double (*)(unsigned long long int, const double *, const double *))searcher->forest->distanceFunction)(searcher->forest->dimension, (const double *)query, (const double *)searcher->forest->data + (signed long int)((unsigned long int)di * searcher->forest->dimension));
        }
        abort();
        searcher->searchNumComparisons = searcher->searchNumComparisons + (unsigned long long int)1;
        if(!(*numAddedNeighbors >= numNeighbors))
        {
          struct _VlKDForestNeighbor *newNeighbor = neighbors + (signed long int)*numAddedNeighbors;
          newNeighbor->index = (unsigned long long int)di;
          newNeighbor->distance = dist;
          vl_kdforest_neighbor_heap_push(neighbors, numAddedNeighbors);
        }

        else
        {
          struct _VlKDForestNeighbor *largestNeighbor = neighbors + (signed long int)0;
          if(largestNeighbor->distance > dist)
          {
            largestNeighbor->index = (unsigned long long int)di;
            largestNeighbor->distance = dist;
            vl_kdforest_neighbor_heap_update(neighbors, *numAddedNeighbors, (unsigned long long int)0);
          }

        }
      }

      iter = iter + 1ll;
    }
    while((_Bool)1);
    return nodeIndex;
  }

  delta = x - x2;
  saveDist = dist + delta * delta;
  if(x <= x2)
  {
    nextChild = node->lowerChild;
    saveChild = node->upperChild;
    if(x <= x1)
    {
      delta = x - x1;
      saveDist = saveDist - delta * delta;
    }

  }

  else
  {
    nextChild = node->upperChild;
    saveChild = node->lowerChild;
    if(x > x3)
    {
      delta = x - x3;
      saveDist = saveDist - delta * delta;
    }

  }
  _Bool tmp_if_expr_3;
  if(!(*numAddedNeighbors >= numNeighbors))
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = (neighbors + (signed long int)0)->distance > saveDist ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    searchState = searcher->searchHeapArray + (signed long int)searcher->searchHeapNumNodes;
    searchState->tree = tree;
    searchState->nodeIndex = (unsigned long long int)saveChild;
    searchState->distanceLowerBound = saveDist;
    vl_kdforest_search_heap_push(searcher->searchHeapArray, &searcher->searchHeapNumNodes);
  }

  unsigned long long int return_value_vl_kdforest_query_recursively_4;
  return_value_vl_kdforest_query_recursively_4=vl_kdforest_query_recursively(searcher, tree, (unsigned long long int)nextChild, neighbors, numNeighbors, numAddedNeighbors, dist, query);
  return return_value_vl_kdforest_query_recursively_4;
}

// vl_kdforest_query_with_array
// file vl/kdtree.c line 870
extern unsigned long long int vl_kdforest_query_with_array(struct _VlKDForest *self, unsigned int *indexes, unsigned long long int numNeighbors, unsigned long long int numQueries, void *distances, const void *queries)
{
  unsigned long long int numComparisons = (unsigned long long int)0;
  unsigned int dataType;
  dataType=vl_kdforest_get_data_type(self);
  unsigned long long int dimension;
  dimension=vl_kdforest_get_data_dimension(self);
  signed long long int qi;
  unsigned long long int thisNumComparisons = (unsigned long long int)0;
  struct _VlKDForestSearcher *searcher;
  struct _VlKDForestNeighbor *neighbors;
  searcher=vl_kdforest_new_searcher(self);
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(struct _VlKDForestNeighbor) /*16ul*/ , numNeighbors);
  neighbors = (struct _VlKDForestNeighbor *)return_value_vl_calloc_1;
  qi = (signed long long int)0;
  unsigned long long int ni;
  unsigned long long int return_value_vl_kdforestsearcher_query_2;
  unsigned long long int vl_kdforest_query_with_array__1__1__2__1__1__2__ni;
  unsigned long long int return_value_vl_kdforestsearcher_query_3;
  for( ; !(qi >= (signed long int)(signed int)numQueries); qi = qi + 1ll)
    switch(dataType)
    {
      case (unsigned int)1:
      {
        return_value_vl_kdforestsearcher_query_2=vl_kdforestsearcher_query(searcher, neighbors, numNeighbors, (const void *)((const float *)queries + (signed long int)((unsigned long int)qi * dimension)));
        thisNumComparisons = thisNumComparisons + return_value_vl_kdforestsearcher_query_2;
        ni = (unsigned long long int)0;
        for( ; !(ni >= numNeighbors); ni = ni + 1ull)
        {
          indexes[(signed long int)((unsigned long int)qi * numNeighbors + ni)] = (unsigned int)(neighbors + (signed long int)ni)->index;
          if(!(distances == NULL))
            ((float *)distances + (signed long int)((unsigned long int)qi * numNeighbors))[(signed long int)ni] = (float)(neighbors + (signed long int)ni)->distance;

        }
        break;
      }
      case (unsigned int)2:
      {
        return_value_vl_kdforestsearcher_query_3=vl_kdforestsearcher_query(searcher, neighbors, numNeighbors, (const void *)((const double *)queries + (signed long int)((unsigned long int)qi * dimension)));
        thisNumComparisons = thisNumComparisons + return_value_vl_kdforestsearcher_query_3;
        vl_kdforest_query_with_array__1__1__2__1__1__2__ni = (unsigned long long int)0;
        for( ; !(vl_kdforest_query_with_array__1__1__2__1__1__2__ni >= numNeighbors); vl_kdforest_query_with_array__1__1__2__1__1__2__ni = vl_kdforest_query_with_array__1__1__2__1__1__2__ni + 1ull)
        {
          indexes[(signed long int)((unsigned long int)qi * numNeighbors + vl_kdforest_query_with_array__1__1__2__1__1__2__ni)] = (unsigned int)(neighbors + (signed long int)vl_kdforest_query_with_array__1__1__2__1__1__2__ni)->index;
          if(!(distances == NULL))
            ((double *)distances + (signed long int)((unsigned long int)qi * numNeighbors))[(signed long int)vl_kdforest_query_with_array__1__1__2__1__1__2__ni] = (neighbors + (signed long int)vl_kdforest_query_with_array__1__1__2__1__1__2__ni)->distance;

        }
        break;
      }
      default:
        abort();
    }
  numComparisons = numComparisons + thisNumComparisons;
  vl_kdforestsearcher_delete(searcher);
  vl_free((void *)neighbors);
  return numComparisons;
}

// vl_kdforest_search_heap_down
// file vl/heap-def.h line 337
static inline void vl_kdforest_search_heap_down(struct _VlKDForestSearchState *array, unsigned long long int index)
{
  unsigned long long int parentIndex;
  if(!(index == 0ul))
  {
    parentIndex=vl_heap_parent(index);
    if((array + (signed long int)index)->distanceLowerBound + -(array + (signed long int)parentIndex)->distanceLowerBound < 0.000000)
    {
      vl_kdforest_search_heap_swap(array, index, parentIndex);
      vl_kdforest_search_heap_down(array, parentIndex);
    }

  }

}

// vl_kdforest_search_heap_pop
// file vl/heap-def.h line 400
static inline unsigned long long int vl_kdforest_search_heap_pop(struct _VlKDForestSearchState *array, unsigned long long int *heapSize)
{
  *heapSize = *heapSize - (unsigned long long int)1;
  vl_kdforest_search_heap_swap(array, (unsigned long long int)0, *heapSize);
  if(*heapSize >= 2ul)
    vl_kdforest_search_heap_up(array, *heapSize, (unsigned long long int)0);

  return *heapSize;
}

// vl_kdforest_search_heap_push
// file vl/heap-def.h line 369
static inline void vl_kdforest_search_heap_push(struct _VlKDForestSearchState *array, unsigned long long int *heapSize)
{
  vl_kdforest_search_heap_down(array, *heapSize);
  *heapSize = *heapSize + (unsigned long long int)1;
}

// vl_kdforest_search_heap_swap
// file vl/heap-def.h line 263
static inline void vl_kdforest_search_heap_swap(struct _VlKDForestSearchState *array, unsigned long long int indexA, unsigned long long int indexB)
{
  struct _VlKDForestSearchState t = array[(signed long int)indexA];
  array[(signed long int)indexA] = array[(signed long int)indexB];
  array[(signed long int)indexB] = t;
}

// vl_kdforest_search_heap_up
// file vl/heap-def.h line 288
static inline void vl_kdforest_search_heap_up(struct _VlKDForestSearchState *array, unsigned long long int heapSize, unsigned long long int index)
{
  unsigned long long int leftIndex;
  leftIndex=vl_heap_left_child(index);
  unsigned long long int rightIndex;
  rightIndex=vl_heap_right_child(index);
  if(!(leftIndex >= heapSize))
  {
    if(rightIndex >= heapSize)
    {
      if((array + (signed long int)index)->distanceLowerBound + -(array + (signed long int)leftIndex)->distanceLowerBound > 0.000000)
        vl_kdforest_search_heap_swap(array, index, leftIndex);

    }

    else
      if((array + (signed long int)leftIndex)->distanceLowerBound + -(array + (signed long int)rightIndex)->distanceLowerBound < 0.000000)
      {
        if((array + (signed long int)index)->distanceLowerBound + -(array + (signed long int)leftIndex)->distanceLowerBound > 0.000000)
        {
          vl_kdforest_search_heap_swap(array, index, leftIndex);
          vl_kdforest_search_heap_up(array, heapSize, leftIndex);
        }

      }

      else
        if((array + (signed long int)index)->distanceLowerBound + -(array + (signed long int)rightIndex)->distanceLowerBound > 0.000000)
        {
          vl_kdforest_search_heap_swap(array, index, rightIndex);
          vl_kdforest_search_heap_up(array, heapSize, rightIndex);
        }

  }

}

// vl_kdforest_set_max_num_comparisons
// file vl/kdtree.c line 998
extern void vl_kdforest_set_max_num_comparisons(struct _VlKDForest *self, unsigned long long int n)
{
  self->searchMaxNumComparisons = n;
}

// vl_kdforest_set_thresholding_method
// file vl/kdtree.c line 1027
extern void vl_kdforest_set_thresholding_method(struct _VlKDForest *self, enum _VlKDTreeThresholdingMethod method)
{
  self->thresholdingMethod = method;
}

// vl_kdforestsearcher_delete
// file vl/kdtree.c line 423
extern void vl_kdforestsearcher_delete(struct _VlKDForestSearcher *self)
{
  _Bool tmp_if_expr_3;
  if(!(self->previous == ((struct _VlKDForestSearcher *)NULL)))
    tmp_if_expr_3 = self->next != ((struct _VlKDForestSearcher *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_1;
  if(tmp_if_expr_3)
  {
    self->previous->next = self->next;
    self->next->previous = self->previous;
  }

  else
  {
    if(!(self->previous == ((struct _VlKDForestSearcher *)NULL)))
      tmp_if_expr_2 = !(self->next != ((struct _VlKDForestSearcher *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      self->previous->next = (struct _VlKDForestSearcher *)(void *)0;

    else
    {
      if(self->previous == ((struct _VlKDForestSearcher *)NULL))
        tmp_if_expr_1 = self->next != ((struct _VlKDForestSearcher *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        self->next->previous = (struct _VlKDForestSearcher *)(void *)0;
        self->forest->headSearcher = self->next;
      }

      else
        self->forest->headSearcher = (struct _VlKDForestSearcher *)(void *)0;
    }
  }
  self->forest->numSearchers = self->forest->numSearchers - 1ull;
  vl_free((void *)self->searchHeapArray);
  vl_free((void *)self->searchIdBook);
  vl_free((void *)self);
}

// vl_kdforestsearcher_get_forest
// file vl/kdtree.c line 1079
struct _VlKDForest * vl_kdforestsearcher_get_forest(const struct _VlKDForestSearcher *self)
{
  return self->forest;
}

// vl_kdforestsearcher_query
// file vl/kdtree.c line 774
extern unsigned long long int vl_kdforestsearcher_query(struct _VlKDForestSearcher *self, struct _VlKDForestNeighbor *neighbors, unsigned long long int numNeighbors, const void *query)
{
  unsigned long long int i;
  unsigned long long int ti;
  signed int exactSearch = (signed int)(self->forest->searchMaxNumComparisons == (unsigned long int)0);
  struct _VlKDForestSearchState *searchState;
  unsigned long long int numAddedNeighbors = (unsigned long long int)0;
  self->searchId = self->searchId + (unsigned long long int)1;
  self->searchNumRecursions = (unsigned long long int)0;
  self->searchNumComparisons = (unsigned long long int)0;
  self->searchNumSimplifications = (unsigned long long int)0;
  self->searchHeapNumNodes = (unsigned long long int)0;
  ti = (unsigned long long int)0;
  for( ; !(ti >= self->forest->numTrees); ti = ti + 1ull)
  {
    searchState = self->searchHeapArray + (signed long int)self->searchHeapNumNodes;
    searchState->tree = self->forest->trees[(signed long int)ti];
    searchState->nodeIndex = (unsigned long long int)0;
    searchState->distanceLowerBound = (double)0;
    vl_kdforest_search_heap_push(self->searchHeapArray, &self->searchHeapNumNodes);
  }
  while((_Bool)1)
  {
    if(exactSearch == 0)
    {
      if(self->searchNumComparisons >= self->forest->searchMaxNumComparisons)
        goto __CPROVER_DUMP_L6;

    }

    struct _VlKDForestSearchState *vl_kdforestsearcher_query__1__2__searchState;
    if(self->searchHeapNumNodes == 0ul)
      break;

    unsigned long long int return_value_vl_kdforest_search_heap_pop_1;
    return_value_vl_kdforest_search_heap_pop_1=vl_kdforest_search_heap_pop(self->searchHeapArray, &self->searchHeapNumNodes);
    vl_kdforestsearcher_query__1__2__searchState = self->searchHeapArray + (signed long int)return_value_vl_kdforest_search_heap_pop_1;
    if(numAddedNeighbors == numNeighbors)
    {
      if(neighbors->distance < vl_kdforestsearcher_query__1__2__searchState->distanceLowerBound)
      {
        self->searchNumSimplifications = self->searchNumSimplifications + 1ull;
        break;
      }

    }

    vl_kdforest_query_recursively(self, vl_kdforestsearcher_query__1__2__searchState->tree, vl_kdforestsearcher_query__1__2__searchState->nodeIndex, neighbors, numNeighbors, &numAddedNeighbors, vl_kdforestsearcher_query__1__2__searchState->distanceLowerBound, query);
  }

__CPROVER_DUMP_L6:
  ;
  i = numAddedNeighbors;
  for( ; !(i >= numNeighbors); i = i + 1ull)
  {
    (neighbors + (signed long int)i)->index = (unsigned long long int)-1;
    (neighbors + (signed long int)i)->distance = (double)vl_nan_f.value;
  }
  while(!(numAddedNeighbors == 0ull))
    vl_kdforest_neighbor_heap_pop(neighbors, &numAddedNeighbors);
  return self->searchNumComparisons;
}

// vl_kdtree_build_recursively
// file vl/kdtree.c line 166
static void vl_kdtree_build_recursively(struct _VlKDForest *forest, struct _VlKDTree *tree, unsigned long long int nodeIndex, unsigned long long int dataBegin, unsigned long long int dataEnd, unsigned int depth)
{
  unsigned long long int d;
  unsigned long long int i;
  unsigned long long int medianIndex;
  unsigned long long int splitIndex;
  struct _VlKDTreeNode *node = tree->nodes + (signed long int)nodeIndex;
  struct _VlKDTreeSplitDimension *vl_kdtree_build_recursively__1__splitDimension;
  unsigned long long int tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(!(dataEnd + -dataBegin >= 2ul))
  {
    if(!(tree->depth >= depth))
      tree->depth = depth;

    node->lowerChild = (signed long long int)(-dataBegin - (unsigned long int)1);
    node->upperChild = (signed long long int)(-dataEnd - (unsigned long int)1);
  }

  else
  {
    forest->splitHeapNumNodes = (unsigned long long int)0;
    d = (unsigned long long int)0;
    for( ; !(d >= forest->dimension); d = d + 1ull)
    {
      double mean = (double)0;
      double secondMoment = (double)0;
      double variance = (double)0;
      unsigned long long int numSamples = (unsigned long long int)1024;
      signed int useAllData = 0;
      if(!(dataEnd + -dataBegin >= 1025ul))
      {
        useAllData = 1;
        numSamples = dataEnd - dataBegin;
      }

      i = (unsigned long long int)0;
      for( ; !(i >= numSamples); i = i + 1ull)
      {
        unsigned int sampleIndex;
        signed long long int di;
        double datum;
        if(useAllData == 1)
          sampleIndex = (unsigned int)i;

        else
        {
          unsigned int return_value_vl_rand_uint32_1;
          return_value_vl_rand_uint32_1=vl_rand_uint32(forest->rand);
          sampleIndex = return_value_vl_rand_uint32_1 % (unsigned int)1024;
        }
        sampleIndex = sampleIndex + (unsigned int)dataBegin;
        di = (tree->dataIndex + (signed long int)sampleIndex)->index;
        switch(forest->dataType)
        {
          case (unsigned int)1:
          {
            datum = (double)((const float *)forest->data)[(signed long int)((unsigned long int)di * forest->dimension + d)];
            break;
          }
          case (unsigned int)2:
          {
            datum = ((const double *)forest->data)[(signed long int)((unsigned long int)di * forest->dimension + d)];
            break;
          }
          default:
            abort();
        }
        mean = mean + datum;
        secondMoment = secondMoment + datum * datum;
      }
      mean = mean / (double)numSamples;
      secondMoment = secondMoment / (double)numSamples;
      variance = secondMoment - mean * mean;
      if(!(variance <= 0.000000))
      {
        if(!(forest->splitHeapNumNodes >= forest->splitHeapSize))
        {
          struct _VlKDTreeSplitDimension *splitDimension = forest->splitHeapArray + (signed long int)forest->splitHeapNumNodes;
          splitDimension->dimension = (unsigned int)d;
          splitDimension->mean = mean;
          splitDimension->variance = variance;
          vl_kdtree_split_heap_push(forest->splitHeapArray, &forest->splitHeapNumNodes);
        }

        else
        {
          struct _VlKDTreeSplitDimension *vl_kdtree_build_recursively__1__2__1__4__splitDimension = forest->splitHeapArray + (signed long int)0;
          if(vl_kdtree_build_recursively__1__2__1__4__splitDimension->variance < variance)
          {
            vl_kdtree_build_recursively__1__2__1__4__splitDimension->dimension = (unsigned int)d;
            vl_kdtree_build_recursively__1__2__1__4__splitDimension->mean = mean;
            vl_kdtree_build_recursively__1__2__1__4__splitDimension->variance = variance;
            vl_kdtree_split_heap_update(forest->splitHeapArray, forest->splitHeapNumNodes, (unsigned long long int)0);
          }

        }
      }

    }
    if(forest->splitHeapNumNodes == 0ul)
    {
      node->lowerChild = (signed long long int)(-dataBegin - (unsigned long int)1);
      node->upperChild = (signed long long int)(-dataEnd - (unsigned long int)1);
    }

    else
    {
      unsigned int return_value_vl_rand_uint32_2;
      return_value_vl_rand_uint32_2=vl_rand_uint32(forest->rand);
      if(!(forest->splitHeapSize >= forest->splitHeapNumNodes))
        tmp_if_expr_3 = forest->splitHeapSize;

      else
        tmp_if_expr_3 = forest->splitHeapNumNodes;
      vl_kdtree_build_recursively__1__splitDimension = forest->splitHeapArray + (signed long int)((unsigned long int)return_value_vl_rand_uint32_2 % tmp_if_expr_3);
      node->splitDimension = vl_kdtree_build_recursively__1__splitDimension->dimension;
      i = dataBegin;
      for( ; !(i >= dataEnd); i = i + 1ull)
      {
        signed long long int vl_kdtree_build_recursively__1__4__1__di = (tree->dataIndex + (signed long int)i)->index;
        double vl_kdtree_build_recursively__1__4__1__datum;
        switch(forest->dataType)
        {
          case (unsigned int)1:
          {
            vl_kdtree_build_recursively__1__4__1__datum = (double)((const float *)forest->data)[(signed long int)((unsigned long int)vl_kdtree_build_recursively__1__4__1__di * forest->dimension + (unsigned long int)vl_kdtree_build_recursively__1__splitDimension->dimension)];
            break;
          }
          case (unsigned int)2:
          {
            vl_kdtree_build_recursively__1__4__1__datum = ((const double *)forest->data)[(signed long int)((unsigned long int)vl_kdtree_build_recursively__1__4__1__di * forest->dimension + (unsigned long int)vl_kdtree_build_recursively__1__splitDimension->dimension)];
            break;
          }
          default:
            abort();
        }
        (tree->dataIndex + (signed long int)i)->value = vl_kdtree_build_recursively__1__4__1__datum;
      }
      qsort((void *)(tree->dataIndex + (signed long int)dataBegin), dataEnd - dataBegin, sizeof(struct _VlKDTreeDataIndexEntry) /*16ul*/ , vl_kdtree_compare_index_entries);
      switch((signed int)forest->thresholdingMethod)
      {
        case VL_KDTREE_MEAN:
        {
          node->splitThreshold = vl_kdtree_build_recursively__1__splitDimension->mean;
          splitIndex = dataBegin;
          do
          {
            if(!(splitIndex >= dataEnd))
              tmp_if_expr_4 = (tree->dataIndex + (signed long int)splitIndex)->value <= node->splitThreshold ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_4 = (_Bool)0;
            if(!tmp_if_expr_4)
              break;

            splitIndex = splitIndex + 1ull;
          }
          while((_Bool)1);
          splitIndex = splitIndex - (unsigned long long int)1;
          if(splitIndex >= dataBegin && !(1ul + splitIndex >= dataEnd))
            break;

        }
        case VL_KDTREE_MEDIAN:
        {
          medianIndex = ((dataBegin + dataEnd) - (unsigned long int)1) / (unsigned long int)2;
          splitIndex = medianIndex;
          node->splitThreshold = (tree->dataIndex + (signed long int)medianIndex)->value;
          break;
        }
        default:
          abort();
      }
      unsigned long long int return_value_vl_kdtree_node_new_5;
      return_value_vl_kdtree_node_new_5=vl_kdtree_node_new(tree, nodeIndex);
      node->lowerChild = (signed long long int)return_value_vl_kdtree_node_new_5;
      vl_kdtree_build_recursively(forest, tree, (unsigned long long int)node->lowerChild, dataBegin, splitIndex + (unsigned long int)1, depth + (unsigned int)1);
      unsigned long long int return_value_vl_kdtree_node_new_6;
      return_value_vl_kdtree_node_new_6=vl_kdtree_node_new(tree, nodeIndex);
      node->upperChild = (signed long long int)return_value_vl_kdtree_node_new_6;
      vl_kdtree_build_recursively(forest, tree, (unsigned long long int)node->upperChild, splitIndex + (unsigned long int)1, dataEnd, depth + (unsigned int)1);
    }
  }
}

// vl_kdtree_calc_bounds_recursively
// file vl/kdtree.c line 491
static void vl_kdtree_calc_bounds_recursively(struct _VlKDTree *tree, unsigned long long int nodeIndex, double *searchBounds)
{
  struct _VlKDTreeNode *node = tree->nodes + (signed long int)nodeIndex;
  unsigned long long int i = (unsigned long long int)node->splitDimension;
  double t = node->splitThreshold;
  node->lowerBound = searchBounds[(signed long int)((unsigned long int)2 * i + (unsigned long int)0)];
  node->upperBound = searchBounds[(signed long int)((unsigned long int)2 * i + (unsigned long int)1)];
  if(node->lowerChild >= 1l)
  {
    searchBounds[(signed long int)((unsigned long int)2 * i + (unsigned long int)1)] = t;
    vl_kdtree_calc_bounds_recursively(tree, (unsigned long long int)node->lowerChild, searchBounds);
    searchBounds[(signed long int)((unsigned long int)2 * i + (unsigned long int)1)] = node->upperBound;
  }

  if(node->upperChild >= 1l)
  {
    searchBounds[(signed long int)((unsigned long int)2 * i + (unsigned long int)0)] = t;
    vl_kdtree_calc_bounds_recursively(tree, (unsigned long long int)node->upperChild, searchBounds);
    searchBounds[(signed long int)((unsigned long int)2 * i + (unsigned long int)0)] = node->lowerBound;
  }

}

// vl_kdtree_compare_index_entries
// file vl/kdtree.c line 143
static inline signed int vl_kdtree_compare_index_entries(const void *a, const void *b)
{
  double delta = ((const struct _VlKDTreeDataIndexEntry *)a)->value - ((const struct _VlKDTreeDataIndexEntry *)b)->value;
  if(delta < 0.000000)
    return -1;

  else
    if(delta > 0.000000)
      return +1;

    else
      return 0;
}

// vl_kdtree_node_new
// file vl/kdtree.c line 120
static unsigned long long int vl_kdtree_node_new(struct _VlKDTree *tree, unsigned long long int parentIndex)
{
  struct _VlKDTreeNode *node = (struct _VlKDTreeNode *)(void *)0;
  unsigned long long int nodeIndex = tree->numUsedNodes;
  tree->numUsedNodes = tree->numUsedNodes + (unsigned long long int)1;
  node = tree->nodes + (signed long int)nodeIndex;
  node->parent = parentIndex;
  node->lowerChild = (signed long long int)0;
  node->upperChild = (signed long long int)0;
  node->splitDimension = (unsigned int)0;
  node->splitThreshold = (double)0;
  return nodeIndex;
}

// vl_kdtree_split_heap_down
// file vl/heap-def.h line 337
static inline void vl_kdtree_split_heap_down(struct _VlKDTreeSplitDimension *array, unsigned long long int index)
{
  unsigned long long int parentIndex;
  if(!(index == 0ul))
  {
    parentIndex=vl_heap_parent(index);
    if((array + (signed long int)index)->variance + -(array + (signed long int)parentIndex)->variance < 0.000000)
    {
      vl_kdtree_split_heap_swap(array, index, parentIndex);
      vl_kdtree_split_heap_down(array, parentIndex);
    }

  }

}

// vl_kdtree_split_heap_push
// file vl/heap-def.h line 369
static inline void vl_kdtree_split_heap_push(struct _VlKDTreeSplitDimension *array, unsigned long long int *heapSize)
{
  vl_kdtree_split_heap_down(array, *heapSize);
  *heapSize = *heapSize + (unsigned long long int)1;
}

// vl_kdtree_split_heap_swap
// file vl/heap-def.h line 263
static inline void vl_kdtree_split_heap_swap(struct _VlKDTreeSplitDimension *array, unsigned long long int indexA, unsigned long long int indexB)
{
  struct _VlKDTreeSplitDimension t = array[(signed long int)indexA];
  array[(signed long int)indexA] = array[(signed long int)indexB];
  array[(signed long int)indexB] = t;
}

// vl_kdtree_split_heap_up
// file vl/heap-def.h line 288
static inline void vl_kdtree_split_heap_up(struct _VlKDTreeSplitDimension *array, unsigned long long int heapSize, unsigned long long int index)
{
  unsigned long long int leftIndex;
  leftIndex=vl_heap_left_child(index);
  unsigned long long int rightIndex;
  rightIndex=vl_heap_right_child(index);
  if(!(leftIndex >= heapSize))
  {
    if(rightIndex >= heapSize)
    {
      if((array + (signed long int)index)->variance + -(array + (signed long int)leftIndex)->variance > 0.000000)
        vl_kdtree_split_heap_swap(array, index, leftIndex);

    }

    else
      if((array + (signed long int)leftIndex)->variance + -(array + (signed long int)rightIndex)->variance < 0.000000)
      {
        if((array + (signed long int)index)->variance + -(array + (signed long int)leftIndex)->variance > 0.000000)
        {
          vl_kdtree_split_heap_swap(array, index, leftIndex);
          vl_kdtree_split_heap_up(array, heapSize, leftIndex);
        }

      }

      else
        if((array + (signed long int)index)->variance + -(array + (signed long int)rightIndex)->variance > 0.000000)
        {
          vl_kdtree_split_heap_swap(array, index, rightIndex);
          vl_kdtree_split_heap_up(array, heapSize, rightIndex);
        }

  }

}

// vl_kdtree_split_heap_update
// file vl/heap-def.h line 440
static inline void vl_kdtree_split_heap_update(struct _VlKDTreeSplitDimension *array, unsigned long long int heapSize, unsigned long long int index)
{
  vl_kdtree_split_heap_up(array, heapSize, index);
  vl_kdtree_split_heap_down(array, index);
}

// vl_kmeans_cluster
// file vl/kmeans.h line 83
extern double vl_kmeans_cluster(struct _VlKMeans *self, const void *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters)
{
  unsigned long long int repetition;
  double bestEnergy = vl_infinity_d_link2.value;
  void *bestCenters = (void *)0;
  repetition = (unsigned long long int)0;
  for( ; !(repetition >= self->numRepetitions); repetition = repetition + 1ull)
  {
    double energy;
    double timeRef;
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_1)(const char *, ...);
      return_value_vl_get_printf_func_1=vl_get_printf_func();
      return_value_vl_get_printf_func_1("kmeans: repetition %d of %d\n", repetition + (unsigned long int)1, self->numRepetitions);
    }

    timeRef=vl_get_cpu_time();
    switch((signed int)self->initialization)
    {
      case VlKMeansRandomSelection:
      {
        vl_kmeans_init_centers_with_rand_data(self, data, dimension, numData, numCenters);
        break;
      }
      case VlKMeansPlusPlus:
      {
        vl_kmeans_init_centers_plus_plus(self, data, dimension, numData, numCenters);
        break;
      }
      default:
        abort();
    }
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_2)(const char *, ...);
      return_value_vl_get_printf_func_2=vl_get_printf_func();
      double return_value_vl_get_cpu_time_3;
      return_value_vl_get_cpu_time_3=vl_get_cpu_time();
      return_value_vl_get_printf_func_2("kmeans: K-means initialized in %.2f s\n", return_value_vl_get_cpu_time_3 - timeRef);
    }

    timeRef=vl_get_cpu_time();
    energy=vl_kmeans_refine_centers(self, data, numData);
    if(!(self->verbosity == 0))
    {
      signed int (*return_value_vl_get_printf_func_4)(const char *, ...);
      return_value_vl_get_printf_func_4=vl_get_printf_func();
      double return_value_vl_get_cpu_time_5;
      return_value_vl_get_cpu_time_5=vl_get_cpu_time();
      return_value_vl_get_printf_func_4("kmeans: K-means terminated in %.2f s with energy %g\n", return_value_vl_get_cpu_time_5 - timeRef, energy);
    }

    if(energy < bestEnergy || repetition == 0ul)
    {
      void *temp;
      bestEnergy = energy;
      if(bestCenters == NULL)
      {
        unsigned long long int return_value_vl_get_type_size_6;
        return_value_vl_get_type_size_6=vl_get_type_size_link2(self->dataType);
        bestCenters=vl_malloc(return_value_vl_get_type_size_6 * self->dimension * self->numCenters);
      }

      temp = bestCenters;
      bestCenters = self->centers;
      self->centers = temp;
    }

  }
  vl_free(self->centers);
  self->centers = bestCenters;
  return bestEnergy;
}

// vl_kmeans_delete
// file vl/kmeans.h line 75
extern void vl_kmeans_delete(struct _VlKMeans *self)
{
  vl_kmeans_reset(self);
  vl_free((void *)self);
}

// vl_kmeans_get_centers
// file vl/kmeans.h line 252
static inline const void * vl_kmeans_get_centers(const struct _VlKMeans *self)
{
  return self->centers;
}

// vl_kmeans_init_centers_plus_plus
// file vl/kmeans.h line 118
extern void vl_kmeans_init_centers_plus_plus(struct _VlKMeans *self, const void *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters)
{
  vl_kmeans_reset(self);
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      _vl_kmeans_init_centers_plus_plus_f(self, (const float *)data, dimension, numData, numCenters);
      break;
    }
    case (unsigned int)2:
    {
      _vl_kmeans_init_centers_plus_plus_d(self, (const double *)data, dimension, numData, numCenters);
      break;
    }
    default:
      abort();
  }
}

// vl_kmeans_init_centers_with_rand_data
// file vl/kmeans.c line 1841
extern void vl_kmeans_init_centers_with_rand_data(struct _VlKMeans *self, const void *data, unsigned long long int dimension, unsigned long long int numData, unsigned long long int numCenters)
{
  vl_kmeans_reset(self);
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      _vl_kmeans_init_centers_with_rand_data_f(self, (const float *)data, dimension, numData, numCenters);
      break;
    }
    case (unsigned int)2:
    {
      _vl_kmeans_init_centers_with_rand_data_d(self, (const double *)data, dimension, numData, numCenters);
      break;
    }
    default:
      abort();
  }
}

// vl_kmeans_new
// file vl/kmeans.h line 73
extern struct _VlKMeans * vl_kmeans_new(unsigned int dataType, enum _VlVectorComparisonType distance)
{
  struct _VlKMeans *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc((unsigned long int)1, sizeof(struct _VlKMeans) /*128ul*/ );
  self = (struct _VlKMeans *)return_value_vl_calloc_1;
  self->algorithm = (enum _VlKMeansAlgorithm)VlKMeansLloyd;
  self->distance = distance;
  self->dataType = dataType;
  self->verbosity = 0;
  self->maxNumIterations = (unsigned long long int)100;
  self->minEnergyVariation = 1e-4;
  self->numRepetitions = (unsigned long long int)1;
  self->centers = (void *)0;
  self->centerDistances = (void *)0;
  self->numTrees = (unsigned long long int)3;
  self->maxNumComparisons = (unsigned long long int)100;
  vl_kmeans_reset(self);
  return self;
}

// vl_kmeans_new_copy
// file vl/kmeans.c line 434
extern struct _VlKMeans * vl_kmeans_new_copy(const struct _VlKMeans *kmeans)
{
  struct _VlKMeans *self;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct _VlKMeans) /*128ul*/ );
  self = (struct _VlKMeans *)return_value_vl_malloc_1;
  self->algorithm = kmeans->algorithm;
  self->distance = kmeans->distance;
  self->dataType = kmeans->dataType;
  self->verbosity = kmeans->verbosity;
  self->maxNumIterations = kmeans->maxNumIterations;
  self->numRepetitions = kmeans->numRepetitions;
  self->dimension = kmeans->dimension;
  self->numCenters = kmeans->numCenters;
  self->centers = (void *)0;
  self->centerDistances = (void *)0;
  self->numTrees = kmeans->numTrees;
  self->maxNumComparisons = kmeans->maxNumComparisons;
  if(!(kmeans->centers == NULL))
  {
    unsigned long long int dataSize;
    unsigned long long int return_value_vl_get_type_size_2;
    return_value_vl_get_type_size_2=vl_get_type_size_link2(self->dataType);
    dataSize = return_value_vl_get_type_size_2 * self->dimension * self->numCenters;
    self->centers=vl_malloc(dataSize);
    memcpy(self->centers, kmeans->centers, dataSize);
  }

  if(!(kmeans->centerDistances == NULL))
  {
    unsigned long long int vl_kmeans_new_copy__1__2__dataSize;
    unsigned long long int return_value_vl_get_type_size_3;
    return_value_vl_get_type_size_3=vl_get_type_size_link2(self->dataType);
    vl_kmeans_new_copy__1__2__dataSize = return_value_vl_get_type_size_3 * self->numCenters * self->numCenters;
    self->centerDistances=vl_malloc(vl_kmeans_new_copy__1__2__dataSize);
    memcpy(self->centerDistances, kmeans->centerDistances, vl_kmeans_new_copy__1__2__dataSize);
  }

  return self;
}

// vl_kmeans_quantize
// file vl/kmeans.h line 89
extern void vl_kmeans_quantize(struct _VlKMeans *self, unsigned int *assignments, void *distances, const void *data, unsigned long long int numData)
{
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      _vl_kmeans_quantize_f(self, assignments, (float *)distances, (const float *)data, numData);
      break;
    }
    case (unsigned int)2:
    {
      _vl_kmeans_quantize_d(self, assignments, (double *)distances, (const double *)data, numData);
      break;
    }
    default:
      abort();
  }
}

// vl_kmeans_quantize_ann
// file vl/kmeans.c line 1947
extern void vl_kmeans_quantize_ann(struct _VlKMeans *self, unsigned int *assignments, void *distances, const void *data, unsigned long long int numData, signed int update)
{
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      _vl_kmeans_quantize_ann_f(self, assignments, (float *)distances, (const float *)data, numData, update);
      break;
    }
    case (unsigned int)2:
    {
      _vl_kmeans_quantize_ann_d(self, assignments, (double *)distances, (const double *)data, numData, update);
      break;
    }
    default:
      abort();
  }
}

// vl_kmeans_refine_centers
// file vl/kmeans.c line 1984
extern double vl_kmeans_refine_centers(struct _VlKMeans *self, const void *data, unsigned long long int numData)
{
  double return_value__vl_kmeans_refine_centers_f_1;
  double return_value__vl_kmeans_refine_centers_d_2;
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      return_value__vl_kmeans_refine_centers_f_1=_vl_kmeans_refine_centers_f(self, (const float *)data, numData);
      return return_value__vl_kmeans_refine_centers_f_1;
    }
    case (unsigned int)2:
    {
      return_value__vl_kmeans_refine_centers_d_2=_vl_kmeans_refine_centers_d(self, (const double *)data, numData);
      return return_value__vl_kmeans_refine_centers_d_2;
    }
    default:
      abort();
  }
}

// vl_kmeans_reset
// file vl/kmeans.c line 386
extern void vl_kmeans_reset(struct _VlKMeans *self)
{
  self->numCenters = (unsigned long long int)0;
  self->dimension = (unsigned long long int)0;
  if(!(self->centers == NULL))
    vl_free(self->centers);

  if(!(self->centerDistances == NULL))
    vl_free(self->centerDistances);

  self->centers = (void *)0;
  self->centerDistances = (void *)0;
}

// vl_kmeans_set_algorithm
// file vl/kmeans.h line 362
static inline void vl_kmeans_set_algorithm(struct _VlKMeans *self, enum _VlKMeansAlgorithm algorithm)
{
  self->algorithm = algorithm;
}

// vl_kmeans_set_centers
// file vl/kmeans.c line 1806
extern void vl_kmeans_set_centers(struct _VlKMeans *self, const void *centers, unsigned long long int dimension, unsigned long long int numCenters)
{
  vl_kmeans_reset(self);
  switch(self->dataType)
  {
    case (unsigned int)1:
    {
      _vl_kmeans_set_centers_f(self, (const float *)centers, dimension, numCenters);
      break;
    }
    case (unsigned int)2:
    {
      _vl_kmeans_set_centers_d(self, (const double *)centers, dimension, numCenters);
      break;
    }
    default:
      abort();
  }
}

// vl_kmeans_set_initialization
// file vl/kmeans.h line 385
static inline void vl_kmeans_set_initialization(struct _VlKMeans *self, enum _VlKMeansInitialization initialization)
{
  self->initialization = initialization;
}

// vl_kmeans_set_max_num_comparisons
// file vl/kmeans.h line 409
static inline void vl_kmeans_set_max_num_comparisons(struct _VlKMeans *self, unsigned long long int maxNumComparisons)
{
  self->maxNumComparisons = maxNumComparisons;
}

// vl_kmeans_set_max_num_iterations
// file vl/kmeans.h line 275
static inline void vl_kmeans_set_max_num_iterations(struct _VlKMeans *self, unsigned long long int maxNumIterations)
{
  self->maxNumIterations = maxNumIterations;
}

// vl_kmeans_set_num_repetitions
// file vl/kmeans.h line 299
static inline void vl_kmeans_set_num_repetitions(struct _VlKMeans *self, unsigned long long int numRepetitions)
{
  self->numRepetitions = numRepetitions;
}

// vl_kmeans_set_num_trees
// file vl/kmeans.h line 422
static inline void vl_kmeans_set_num_trees(struct _VlKMeans *self, unsigned long long int numTrees)
{
  self->numTrees = numTrees;
}

// vl_kmeans_set_verbosity
// file vl/kmeans.h line 240
static inline void vl_kmeans_set_verbosity(struct _VlKMeans *self, signed int verbosity)
{
  self->verbosity = verbosity;
}

// vl_lapack_dlasv2
// file vl/mathop.c line 713
extern void vl_lapack_dlasv2(double *smin, double *smax, double *sv, double *cv, double *su, double *cu, double f, double g, double h)
{
  double svt;
  double cvt;
  double sut;
  double cut;
  double ft = f;
  double gt = g;
  double ht = h;
  double fa;
  fa=fabs(f);
  double ga;
  ga=fabs(g);
  double ha;
  ha=fabs(h);
  signed int pmax = 1;
  signed int swap = 0;
  signed int glarge = 0;
  signed int tsign;
  double fmh;
  double d;
  double dd;
  double q;
  double qq;
  double s;
  double ss;
  double spq;
  double dpq;
  double a;
  double tmp;
  double tt;
  if(fa < ha)
  {
    pmax = 3;
    tmp = ft;
    ft = ht;
    ht = tmp;
    tmp = fa;
    fa = ha;
    ha = tmp;
    swap = 1;
  }

  if(IEEE_FLOAT_EQUAL(ga, 0.0))
  {
    *smin = ha;
    *smax = fa;
    cut = 1.0;
    sut = 0.0;
    cvt = 1.0;
    svt = 0.0;
  }

  else
  {
    if(ga > fa)
    {
      pmax = 2;
      if(fa / ga < 2.220446049250313e-16)
      {
        glarge = 1;
        *smax = ga;
        if(ha > 1.0)
          *smin = fa / (ga / ha);

        else
          *smin = (fa / ga) * ha;
        cut = 1.0;
        sut = ht / gt;
        cvt = 1.0;
        svt = ft / gt;
      }

    }

    if(glarge == 0)
    {
      fmh = fa - ha;
      if(IEEE_FLOAT_EQUAL(fmh, fa))
        d = 1.0;

      else
        d = fmh / fa;
      q = gt / ft;
      s = 2.0 - d;
      dd = d * d;
      qq = q * q;
      ss = s * s;
      spq=sqrt(ss + qq);
      if(IEEE_FLOAT_EQUAL(d, 0.0))
        dpq=fabs(q);

      else
        dpq=sqrt(dd + qq);
      a = 0.5 * (spq + dpq);
      *smin = ha / a;
      *smax = fa * a;
      if(IEEE_FLOAT_EQUAL(qq, 0.0))
      {
        if(IEEE_FLOAT_EQUAL(d, 0.0))
          tmp = (double)((ft < 0.0 ? -1 : +1) * 2 * (gt < 0.0 ? -1 : +1));

        else
          tmp = gt / ((double)(ft < 0.0 ? -1 : +1) * fmh) + q / s;
      }

      else
        tmp = (q / (spq + s) + q / (dpq + d)) * (1.0 + a);
      tt=sqrt(tmp * tmp + 4.0);
      cvt = 2.0 / tt;
      svt = tmp / tt;
      cut = (cvt + svt * q) / a;
      sut = ((ht / ft) * svt) / a;
    }

  }
  if(swap == 1)
  {
    *cu = svt;
    *su = cvt;
    *cv = sut;
    *sv = cut;
  }

  else
  {
    *cu = cut;
    *su = sut;
    *cv = cvt;
    *sv = svt;
  }
  if(pmax == 1)
    tsign = (*cv < 0.0 ? -1 : +1) * (*cu < 0.0 ? -1 : +1) * (f < 0.0 ? -1 : +1);

  if(pmax == 2)
    tsign = (*sv < 0.0 ? -1 : +1) * (*cu < 0.0 ? -1 : +1) * (g < 0.0 ? -1 : +1);

  if(pmax == 3)
    tsign = (*sv < 0.0 ? -1 : +1) * (*su < 0.0 ? -1 : +1) * (h < 0.0 ? -1 : +1);

  *smax = (double)(tsign < 0 ? -1 : +1) * *smax;
  *smin = (double)(tsign * (f < 0.0 ? -1 : +1) * (h < 0.0 ? -1 : +1) < 0 ? -1 : +1) * *smin;
}

// vl_lbp_delete
// file vl/lbp.c line 238
extern void vl_lbp_delete(struct VlLbp_ *self)
{
  vl_free((void *)self);
}

// vl_lbp_get_dimension
// file vl/lbp.c line 248
extern unsigned long long int vl_lbp_get_dimension(struct VlLbp_ *self)
{
  return self->dimension;
}

// vl_lbp_new
// file vl/lbp.c line 218
extern struct VlLbp_ * vl_lbp_new(enum _VlLbpMappingType type, signed int transposed)
{
  struct VlLbp_ *self;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct VlLbp_) /*272ul*/ );
  self = (struct VlLbp_ *)return_value_vl_malloc_1;
  if(self == ((struct VlLbp_ *)NULL))
  {
    vl_set_last_error(2, (const char *)(void *)0);
    return (struct VlLbp_ *)(void *)0;
  }

  else
  {
    self->transposed = transposed;
    if((signed int)type == VlLbpUniform)
    {
      _vl_lbp_init_uniform(self);
      goto __CPROVER_DUMP_L4;
    }

    exit(1);

  __CPROVER_DUMP_L4:
    ;
    return self;
  }
}

// vl_lbp_process
// file vl/lbp.c line 270
extern void vl_lbp_process(struct VlLbp_ *self, float *features, float *image, unsigned long long int width, unsigned long long int height, unsigned long long int cellSize)
{
  unsigned long long int cwidth = width / cellSize;
  unsigned long long int cheight = height / cellSize;
  unsigned long long int cstride = cwidth * cheight;
  unsigned long long int cdimension;
  cdimension=vl_lbp_get_dimension(self);
  signed long long int x;
  signed long long int y;
  signed long long int cx;
  signed long long int cy;
  signed long long int k;
  signed long long int bin;
  memset((void *)features, 0, sizeof(float) /*4ul*/  * cdimension * cstride);
  y = (signed long long int)1;
  for( ; !(y >= (signed long int)((signed int)height + -1)); y = y + 1ll)
  {
    float wy1 = ((float)y + 0.5f) / (float)cellSize - 0.5f;
    signed int cy1;
    signed long int return_value_vl_floor_f_1;
    return_value_vl_floor_f_1=vl_floor_f(wy1);
    cy1 = (signed int)return_value_vl_floor_f_1;
    signed int cy2 = cy1 + 1;
    float wy2 = wy1 - (float)cy1;
    wy1 = 1.0f - wy2;
    if(!(cy1 >= (signed int)cheight))
    {
      x = (signed long long int)1;
      for( ; !(x >= (signed long int)((signed int)width + -1)); x = x + 1ll)
      {
        float wx1 = ((float)x + 0.5f) / (float)cellSize - 0.5f;
        signed int cx1;
        signed long int return_value_vl_floor_f_2;
        return_value_vl_floor_f_2=vl_floor_f(wx1);
        cx1 = (signed int)return_value_vl_floor_f_2;
        signed int cx2 = cx1 + 1;
        float wx2 = wx1 - (float)cx1;
        wx1 = 1.0f - wx2;
        if(!(cx1 >= (signed int)cwidth))
        {
          unsigned int bitString = (unsigned int)0;
          float center = (image + (signed long int)(width * (unsigned long int)y))[x];
          if(image[(signed long int)width * (signed long int)(unsigned long int)y + 1l + x] > center)
            bitString = bitString | (unsigned int)(0x1 << 0);

          if(image[(1l + (signed long int)(unsigned long int)y) * (signed long int)width + 1l + x] > center)
            bitString = bitString | (unsigned int)(0x1 << 1);

          if(image[(1l + (signed long int)(unsigned long int)y) * (signed long int)width + x] > center)
            bitString = bitString | (unsigned int)(0x1 << 2);

          if(image[(1l + (signed long int)(unsigned long int)y) * (signed long int)width + x + -1l] > center)
            bitString = bitString | (unsigned int)(0x1 << 3);

          if(image[(signed long int)width * (signed long int)(unsigned long int)y + x + -1l] > center)
            bitString = bitString | (unsigned int)(0x1 << 4);

          if(image[(-1l + (signed long int)(unsigned long int)y) * (signed long int)width + x + -1l] > center)
            bitString = bitString | (unsigned int)(0x1 << 5);

          if(image[(-1l + (signed long int)(unsigned long int)y) * (signed long int)width + x] > center)
            bitString = bitString | (unsigned int)(0x1 << 6);

          if(image[(-1l + (signed long int)(unsigned long int)y) * (signed long int)width + 1l + x] > center)
            bitString = bitString | (unsigned int)(0x1 << 7);

          bin = (signed long long int)self->mapping[(signed long int)bitString];
          if(cx1 >= 0 && cy1 >= 0)
            (features + (signed long int)(cstride * (unsigned long int)bin) + (signed long int)(cwidth * (unsigned long int)cy1))[(signed long int)cx1] = (features + (signed long int)(cstride * (unsigned long int)bin) + (signed long int)(cwidth * (unsigned long int)cy1))[(signed long int)cx1] + wx1 * wy1;

          if(cy1 >= 0 && !(cx2 >= (signed int)cwidth))
            (features + (signed long int)(cstride * (unsigned long int)bin) + (signed long int)(cwidth * (unsigned long int)cy1))[(signed long int)cx2] = (features + (signed long int)(cstride * (unsigned long int)bin) + (signed long int)(cwidth * (unsigned long int)cy1))[(signed long int)cx2] + wx2 * wy1;

          if(cx1 >= 0 && !(cy2 >= (signed int)cheight))
            (features + (signed long int)(cstride * (unsigned long int)bin) + (signed long int)(cwidth * (unsigned long int)cy2))[(signed long int)cx1] = (features + (signed long int)(cstride * (unsigned long int)bin) + (signed long int)(cwidth * (unsigned long int)cy2))[(signed long int)cx1] + wx1 * wy2;

          if(!(cx2 >= (signed int)cwidth) && !(cy2 >= (signed int)cheight))
            (features + (signed long int)(cstride * (unsigned long int)bin) + (signed long int)(cwidth * (unsigned long int)cy2))[(signed long int)cx2] = (features + (signed long int)(cstride * (unsigned long int)bin) + (signed long int)(cwidth * (unsigned long int)cy2))[(signed long int)cx2] + wx2 * wy2;

        }

      }
    }

  }
  cy = (signed long long int)0;
  for( ; !(cy >= (signed long int)(signed int)cheight); cy = cy + 1ll)
  {
    cx = (signed long long int)0;
    for( ; !(cx >= (signed long int)(signed int)cwidth); cx = cx + 1ll)
    {
      float norm = (float)0;
      k = (signed long long int)0;
      for( ; !(k >= (signed long int)(signed int)cdimension); k = k + 1ll)
        norm = norm + features[(signed long int)((unsigned long int)k * cstride)];
      float return_value_sqrtf_3;
      return_value_sqrtf_3=sqrtf(norm);
      norm = return_value_sqrtf_3 + 1e-10f;
      k = (signed long long int)0;
      for( ; !(k >= (signed long int)(signed int)cdimension); k = k + 1ll)
      {
        float return_value_sqrtf_4;
        return_value_sqrtf_4=sqrtf(features[(signed long int)((unsigned long int)k * cstride)]);
        features[(signed long int)((unsigned long int)k * cstride)] = return_value_sqrtf_4 / norm;
      }
      features = features + (signed long int)1;
    }
  }
}

// vl_liopdesc_delete
// file vl/liop.c line 417
extern void vl_liopdesc_delete(struct _VlLiopDesc *self)
{
  vl_free((void *)self->patchPixels);
  vl_free((void *)self->patchIntensities);
  vl_free((void *)self->patchPermutation);
  vl_free((void *)self->neighPermutation);
  vl_free((void *)self->neighIntensities);
  vl_free((void *)self->neighSamplesX);
  vl_free((void *)self->neighSamplesY);
  vl_free((void *)self);
}

// vl_liopdesc_get_dimension
// file vl/liop.c line 569
extern unsigned long long int vl_liopdesc_get_dimension(const struct _VlLiopDesc *self)
{
  return self->dimension;
}

// vl_liopdesc_get_intensity_threshold
// file vl/liop.c line 594
extern float vl_liopdesc_get_intensity_threshold(const struct _VlLiopDesc *self)
{
  return self->intensityThreshold;
}

// vl_liopdesc_get_neighbourhood_radius
// file vl/liop.c line 625
extern double vl_liopdesc_get_neighbourhood_radius(const struct _VlLiopDesc *self)
{
  return (double)self->neighRadius;
}

// vl_liopdesc_get_num_neighbours
// file vl/liop.c line 581
extern unsigned long long int vl_liopdesc_get_num_neighbours(const struct _VlLiopDesc *self)
{
  return (unsigned long long int)self->numNeighbours;
}

// vl_liopdesc_get_num_spatial_bins
// file vl/liop.c line 637
extern unsigned long long int vl_liopdesc_get_num_spatial_bins(const struct _VlLiopDesc *self)
{
  return (unsigned long long int)self->numSpatialBins;
}

// vl_liopdesc_new
// file vl/liop.c line 321
extern struct _VlLiopDesc * vl_liopdesc_new(signed int numNeighbours, signed int numSpatialBins, float radius, unsigned long long int sideLength)
{
  signed long long int i;
  signed long long int t;
  struct _VlLiopDesc *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(struct _VlLiopDesc) /*104ul*/ , (unsigned long int)1);
  self = (struct _VlLiopDesc *)return_value_vl_calloc_1;
  self->numNeighbours = numNeighbours;
  self->numSpatialBins = numSpatialBins;
  self->neighRadius = radius;
  self->intensityThreshold = (float)-(5.0 / (double)255);
  signed int return_value_factorial_2;
  return_value_factorial_2=factorial(numNeighbours);
  self->dimension = (unsigned long long int)(return_value_factorial_2 * numSpatialBins);
  self->patchSize = (unsigned long long int)0;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * sideLength * sideLength);
  self->patchPixels = (unsigned long long int *)return_value_vl_malloc_3;
  self->patchSideLength = sideLength;
  signed long long int vl_liopdesc_new__1__1__x;
  signed long long int vl_liopdesc_new__1__1__y;
  signed long long int vl_liopdesc_new__1__1__center = (signed long long int)((sideLength - (unsigned long int)1) / (unsigned long int)2);
  double vl_liopdesc_new__1__1__t = (double)((float)vl_liopdesc_new__1__1__center - radius) + 0.6;
  signed long long int t2 = (signed long long int)(vl_liopdesc_new__1__1__t * vl_liopdesc_new__1__1__t);
  vl_liopdesc_new__1__1__y = (signed long long int)0;
  unsigned long long int tmp_post_4;
  for( ; !(vl_liopdesc_new__1__1__y >= (signed long int)(signed int)sideLength); vl_liopdesc_new__1__1__y = vl_liopdesc_new__1__1__y + 1ll)
  {
    vl_liopdesc_new__1__1__x = (signed long long int)0;
    for( ; !(vl_liopdesc_new__1__1__x >= (signed long int)(signed int)sideLength); vl_liopdesc_new__1__1__x = vl_liopdesc_new__1__1__x + 1ll)
    {
      signed long long int dx = vl_liopdesc_new__1__1__x - vl_liopdesc_new__1__1__center;
      signed long long int dy = vl_liopdesc_new__1__1__y - vl_liopdesc_new__1__1__center;
      if(!(vl_liopdesc_new__1__1__x == 0l) || !(vl_liopdesc_new__1__1__y == 0l))
      {
        if(t2 >= dx * dx + dy * dy)
        {
          tmp_post_4 = self->patchSize;
          self->patchSize = self->patchSize + 1ull;
          self->patchPixels[(signed long int)tmp_post_4] = (unsigned long int)vl_liopdesc_new__1__1__x + (unsigned long int)vl_liopdesc_new__1__1__y * sideLength;
        }

      }

    }
  }
  void *return_value_vl_malloc_5;
  return_value_vl_malloc_5=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * self->patchSize);
  self->patchIntensities = (float *)return_value_vl_malloc_5;
  void *return_value_vl_malloc_6;
  return_value_vl_malloc_6=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * self->patchSize);
  self->patchPermutation = (unsigned long long int *)return_value_vl_malloc_6;
  void *return_value_vl_malloc_7;
  return_value_vl_malloc_7=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * (unsigned long int)self->numNeighbours);
  self->neighPermutation = (unsigned long long int *)return_value_vl_malloc_7;
  void *return_value_vl_malloc_8;
  return_value_vl_malloc_8=vl_malloc(sizeof(float) /*4ul*/  * (unsigned long int)self->numNeighbours);
  self->neighIntensities = (float *)return_value_vl_malloc_8;
  void *return_value_vl_calloc_9;
  return_value_vl_calloc_9=vl_calloc(sizeof(double) /*8ul*/ , (unsigned long int)self->numNeighbours * self->patchSize);
  self->neighSamplesX = (double *)return_value_vl_calloc_9;
  void *return_value_vl_calloc_10;
  return_value_vl_calloc_10=vl_calloc(sizeof(double) /*8ul*/ , (unsigned long int)self->numNeighbours * self->patchSize);
  self->neighSamplesY = (double *)return_value_vl_calloc_10;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)self->patchSize); i = i + 1ll)
  {
    signed long long int pixel;
    double x;
    double y;
    double dangle = ((double)2 * 3.141592653589793) / (double)self->numNeighbours;
    double angle0;
    signed long long int center = (signed long long int)((sideLength - (unsigned long int)1) / (unsigned long int)2);
    pixel = (signed long long int)self->patchPixels[i];
    x = (double)(pixel % (signed long int)(signed int)self->patchSideLength - center);
    y = (double)(pixel / (signed long int)(signed int)self->patchSideLength - center);
    angle0=atan2(y, x);
    t = (signed long long int)0;
    for( ; !(t >= (signed long int)self->numNeighbours); t = t + 1ll)
    {
      double x1;
      double return_value_cos_11;
      return_value_cos_11=cos(angle0 + dangle * (double)t);
      x1 = x + (double)radius * return_value_cos_11 + (double)center;
      double y1;
      double return_value_sin_12;
      return_value_sin_12=sin(angle0 + dangle * (double)t);
      y1 = y + (double)radius * return_value_sin_12 + (double)center;
      self->neighSamplesX[t + (signed long int)(signed int)self->numNeighbours * i] = x1;
      self->neighSamplesY[t + (signed long int)(signed int)self->numNeighbours * i] = y1;
    }
  }
  return self;
}

// vl_liopdesc_new_basic
// file vl/liop.c line 405
extern struct _VlLiopDesc * vl_liopdesc_new_basic(unsigned long long int sideLength)
{
  struct _VlLiopDesc *return_value_vl_liopdesc_new_1;
  return_value_vl_liopdesc_new_1=vl_liopdesc_new(4, 6, (float)6.0, sideLength);
  return return_value_vl_liopdesc_new_1;
}

// vl_liopdesc_process
// file vl/liop.c line 442
extern void vl_liopdesc_process(struct _VlLiopDesc *self, float *desc, const float *patch)
{
  signed long long int i;
  signed long long int vl_liopdesc_process__1__t;
  signed long long int offset;
  signed long long int numPermutations;
  signed long long int spatialBinArea;
  signed long long int spatialBinEnd;
  signed long long int spatialBinIndex;
  float threshold;
  memset((void *)desc, 0, sizeof(float) /*4ul*/  * self->dimension);
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)self->patchSize); i = i + 1ll)
  {
    signed long long int pixel = (signed long long int)self->patchPixels[i];
    self->patchIntensities[i] = patch[pixel];
    self->patchPermutation[i] = (unsigned long long int)i;
  }
  patch_sort(self, self->patchSize);
  if(self->intensityThreshold < 0.000000f)
  {
    i = (signed long long int)self->patchPermutation[(signed long int)0];
    vl_liopdesc_process__1__t = (signed long long int)self->patchPermutation[(signed long int)(self->patchSize - (unsigned long int)1)];
    threshold = -self->intensityThreshold * (self->patchIntensities[vl_liopdesc_process__1__t] - self->patchIntensities[i]);
  }

  else
    threshold = self->intensityThreshold;
  signed int return_value_factorial_1;
  return_value_factorial_1=factorial(self->numNeighbours);
  numPermutations = (signed long long int)return_value_factorial_1;
  spatialBinArea = (signed long long int)(self->patchSize / (unsigned long int)self->numSpatialBins);
  spatialBinEnd = spatialBinArea;
  spatialBinIndex = (signed long long int)0;
  offset = (signed long long int)0;
  i = (signed long long int)0;
  double *tmp_post_2;
  double *tmp_post_3;
  for( ; !(i >= (signed long int)(signed int)self->patchSize); i = i + 1ll)
  {
    signed long long int permIndex;
    double *sx;
    double *sy;
    if(i >= (signed long int)(signed int)spatialBinEnd)
    {
      if(!(spatialBinIndex >= (signed long int)(self->numSpatialBins + -1)))
      {
        spatialBinEnd = spatialBinEnd + spatialBinArea;
        spatialBinIndex = spatialBinIndex + 1ll;
        offset = offset + numPermutations;
      }

    }

    sx = self->neighSamplesX + (signed long int)((unsigned long int)self->numNeighbours * self->patchPermutation[i]);
    sy = self->neighSamplesY + (signed long int)((unsigned long int)self->numNeighbours * self->patchPermutation[i]);
    vl_liopdesc_process__1__t = (signed long long int)0;
    for( ; !(vl_liopdesc_process__1__t >= (signed long int)self->numNeighbours); vl_liopdesc_process__1__t = vl_liopdesc_process__1__t + 1ll)
    {
      double x;
      tmp_post_2 = sx;
      sx = sx + 1l;
      x = *tmp_post_2;
      double y;
      tmp_post_3 = sy;
      sy = sy + 1l;
      y = *tmp_post_3;
      signed long long int ix;
      ix=vl_floor_d_link1(x);
      signed long long int iy;
      iy=vl_floor_d_link1(y);
      double wx = x - (double)ix;
      double wy = y - (double)iy;
      double a = (double)0;
      double b = (double)0;
      double c = (double)0;
      double d = (double)0;
      signed int L = (signed int)self->patchSideLength;
      if(ix >= 0l && iy >= 0l)
        a = (double)patch[ix + iy * (signed long int)L];

      if(iy >= 0l && !(ix >= (signed long int)(L + -1)))
        b = (double)patch[ix + (signed long int)1 + iy * (signed long int)L];

      if(ix >= 0l && !(iy >= (signed long int)(L + -1)))
        c = (double)patch[ix + (iy + (signed long int)1) * (signed long int)L];

      if(!(ix >= (signed long int)(L + -1)) && !(iy >= (signed long int)(L + -1)))
        d = (double)patch[ix + (signed long int)1 + (iy + (signed long int)1) * (signed long int)L];

      self->neighPermutation[vl_liopdesc_process__1__t] = (unsigned long long int)vl_liopdesc_process__1__t;
      self->neighIntensities[vl_liopdesc_process__1__t] = (float)(((double)1 - wy) * (a + (b - a) * wx) + wy * (c + (d - c) * wx));
    }
    neigh_sort(self, (unsigned long long int)self->numNeighbours);
    permIndex=get_permutation_index(self->neighPermutation, (unsigned long long int)self->numNeighbours);
    signed int k;
    signed int t;
    float weight = (float)0;
    k = 0;
    for( ; !(k >= self->numNeighbours); k = k + 1)
    {
      t = k + 1;
      for( ; !(t >= self->numNeighbours); t = t + 1)
      {
        double vl_liopdesc_process__1__4__1__3__1__1__1__1__a = (double)self->neighIntensities[(signed long int)k];
        double vl_liopdesc_process__1__4__1__3__1__1__1__1__b = (double)self->neighIntensities[(signed long int)t];
        weight = weight + (float)(vl_liopdesc_process__1__4__1__3__1__1__1__1__a > vl_liopdesc_process__1__4__1__3__1__1__1__1__b + (double)threshold || vl_liopdesc_process__1__4__1__3__1__1__1__1__b > vl_liopdesc_process__1__4__1__3__1__1__1__1__a + (double)threshold);
      }
    }
    desc[permIndex + offset] = desc[permIndex + offset] + weight;
  }
  float norm = (float)0;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)self->dimension); i = i + 1ll)
    norm = norm + desc[i] * desc[i];
  double return_value_sqrt_4;
  return_value_sqrt_4=sqrt((double)norm);
  double tmp_if_expr_6;
  double return_value_sqrt_5;
  if(return_value_sqrt_4 > 1e-12)
  {
    return_value_sqrt_5=sqrt((double)norm);
    tmp_if_expr_6 = return_value_sqrt_5;
  }

  else
    tmp_if_expr_6 = 1e-12;
  norm = (float)tmp_if_expr_6;
  i = (signed long long int)0;
  for( ; !(i >= (signed long int)(signed int)self->dimension); i = i + 1ll)
    desc[i] = desc[i] / norm;
}

// vl_liopdesc_set_intensity_threshold
// file vl/liop.c line 613
extern void vl_liopdesc_set_intensity_threshold(struct _VlLiopDesc *self, float x)
{
  self->intensityThreshold = x;
}

// vl_lock_state
// file vl/generic.c line 946
static void vl_lock_state(void)
{
  struct _VlState *state;
  state=vl_get_state();
  unsigned long int thisThread;
  thisThread=pthread_self();
  pthread_mutex_lock(&state->mutex);
  _Bool tmp_if_expr_2;
  signed int return_value_pthread_equal_1;
  if(state->mutexCount >= 1ul)
  {
    return_value_pthread_equal_1=pthread_equal(state->mutexOwner, thisThread);
    tmp_if_expr_2 = return_value_pthread_equal_1 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
    state->mutexCount = state->mutexCount + 1ul;

  else
  {
    while(state->mutexCount >= 1ul)
      pthread_cond_wait(&state->mutexCondition, &state->mutex);
    state->mutexOwner = thisThread;
    state->mutexCount = (unsigned long int)1;
  }
  pthread_mutex_unlock(&state->mutex);
}

// vl_log2_d
// file vl/mathop.h line 262
static inline double vl_log2_d(double x)
{
  double return_value___builtin_log2_1;
  return_value___builtin_log2_1=__builtin_log2(x);
  return return_value___builtin_log2_1;
}

// vl_log2_d_link1
// file vl/mathop.h line 262
static inline double vl_log2_d_link1(double x_link1)
{
  double return_value___builtin_log2_1_link1;
  return_value___builtin_log2_1_link1=__builtin_log2(x_link1);
  return return_value___builtin_log2_1_link1;
}

// vl_log2_d_link2
// file vl/mathop.h line 262
static inline double vl_log2_d_link2(double x_link2)
{
  double return_value___builtin_log2_1_link2;
  return_value___builtin_log2_1_link2=__builtin_log2(x_link2);
  return return_value___builtin_log2_1_link2;
}

// vl_log2_f
// file vl/mathop.h line 275
static inline float vl_log2_f(float x)
{
  float return_value___builtin_log2f_1;
  return_value___builtin_log2f_1=__builtin_log2f(x);
  return return_value___builtin_log2f_1;
}

// vl_malloc
// file vl/generic.h line 143
extern void * vl_malloc(unsigned long int n)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  void *return_value;
  return_value=return_value_vl_get_state_1->malloc_func(n);
  return return_value;
}

// vl_mod_2pi_f
// file vl/mathop.h line 110
static inline float vl_mod_2pi_f(float x)
{
  for( ; x > 6.283185e+0f; x = x - (float)((double)2 * 3.141592653589793))
    ;
  for( ; x < 0.0F; x = x + (float)((double)2 * 3.141592653589793))
    ;
  return x;
}

// vl_mser_delete
// file vl/mser.c line 383
extern void vl_mser_delete(struct _VlMserFilt *f)
{
  if(!(f == ((struct _VlMserFilt *)NULL)))
  {
    if(!(f->acc == ((float *)NULL)))
      vl_free((void *)f->acc);

    if(!(f->ell == ((float *)NULL)))
      vl_free((void *)f->ell);

    if(!(f->er == ((struct _VlMserExtrReg *)NULL)))
      vl_free((void *)f->er);

    if(!(f->r == ((struct _VlMserReg *)NULL)))
      vl_free((void *)f->r);

    if(!(f->joins == ((unsigned int *)NULL)))
      vl_free((void *)f->joins);

    if(!(f->perm == ((unsigned int *)NULL)))
      vl_free((void *)f->perm);

    if(!(f->strides == ((signed int *)NULL)))
      vl_free((void *)f->strides);

    if(!(f->dsubs == ((signed int *)NULL)))
      vl_free((void *)f->dsubs);

    if(!(f->subs == ((signed int *)NULL)))
      vl_free((void *)f->subs);

    if(!(f->dims == ((signed int *)NULL)))
      vl_free((void *)f->dims);

    if(!(f->mer == ((unsigned int *)NULL)))
      vl_free((void *)f->mer);

    vl_free((void *)f);
  }

}

// vl_mser_ell_fit
// file vl/mser.c line 886
extern void vl_mser_ell_fit(struct _VlMserFilt *f)
{
  signed int nel = f->nel;
  signed int dof = f->dof;
  signed int *dims = f->dims;
  signed int ndims = f->ndims;
  signed int *subs = f->subs;
  signed int njoins = f->njoins;
  unsigned int *joins = f->joins;
  struct _VlMserReg *r = f->r;
  unsigned int *mer = f->mer;
  signed int nmer = f->nmer;
  float *acc = f->acc;
  float *ell = f->ell;
  signed int d;
  signed int index;
  signed int i;
  signed int j;
  if(!(f->nell == f->nmer))
  {
    if(!(f->rell >= f->nmer))
    {
      if(!(f->ell == ((float *)NULL)))
        vl_free((void *)f->ell);

      void *return_value_vl_malloc_1;
      return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * (unsigned long int)f->nmer * (unsigned long int)f->dof);
      f->ell = (float *)return_value_vl_malloc_1;
      f->rell = f->nmer;
    }

    if(f->acc == ((float *)NULL))
    {
      void *return_value_vl_malloc_2;
      return_value_vl_malloc_2=vl_malloc(sizeof(float) /*4ul*/  * (unsigned long int)f->nel);
      f->acc = (float *)return_value_vl_malloc_2;
    }

    acc = f->acc;
    ell = f->ell;
    d = 0;
    for( ; !(d >= f->dof); d = d + 1)
    {
      memset((void *)subs, 0, sizeof(signed int) /*4ul*/  * (unsigned long int)ndims);
      if(!(d >= ndims))
      {
        index = 0;
        for( ; !(index >= nel); index = index + 1)
        {
          acc[(signed long int)index] = (float)subs[(signed long int)d];
          adv(ndims, dims, subs);
        }
      }

      else
      {
        i = d - ndims;
        j = 0;
        for( ; !(j >= i); j = j + 1)
          i = i - (j + 1);
        index = 0;
        for( ; !(index >= nel); index = index + 1)
        {
          acc[(signed long int)index] = (float)(subs[(signed long int)i] * subs[(signed long int)j]);
          adv(ndims, dims, subs);
        }
      }
      i = 0;
      for( ; !(i >= njoins); i = i + 1)
      {
        unsigned int vl_mser_ell_fit__1__3__1__3__1__index = joins[(signed long int)i];
        unsigned int parent = (r + (signed long int)vl_mser_ell_fit__1__3__1__3__1__index)->parent;
        acc[(signed long int)parent] = acc[(signed long int)parent] + acc[(signed long int)vl_mser_ell_fit__1__3__1__3__1__index];
      }
      i = 0;
      for( ; !(i >= nmer); i = i + 1)
      {
        unsigned int idx = mer[(signed long int)i];
        ell[(signed long int)(d + dof * i)] = acc[(signed long int)idx];
      }
    }
    index = 0;
    for( ; !(index >= nmer); index = index + 1)
    {
      float *pt = ell + (signed long int)(index * dof);
      unsigned int vl_mser_ell_fit__1__4__1__idx = mer[(signed long int)index];
      float area = (float)(r + (signed long int)vl_mser_ell_fit__1__4__1__idx)->area;
      d = 0;
      for( ; !(d >= dof); d = d + 1)
      {
        pt[(signed long int)d] = pt[(signed long int)d] / area;
        if(d >= ndims)
        {
          i = d - ndims;
          j = 0;
          for( ; !(j >= i); j = j + 1)
            i = i - (j + 1);
          pt[(signed long int)d] = pt[(signed long int)d] - pt[(signed long int)i] * pt[(signed long int)j];
        }

      }
    }
    f->nell = nmer;
  }

}

// vl_mser_new
// file vl/mser.c line 319
extern struct _VlMserFilt * vl_mser_new(signed int ndims, const signed int *dims)
{
  struct _VlMserFilt *f;
  signed int *strides;
  signed int k;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc(sizeof(struct _VlMserFilt) /*208ul*/ , (unsigned long int)1);
  f = (struct _VlMserFilt *)return_value_vl_calloc_1;
  f->ndims = ndims;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)ndims);
  f->dims = (signed int *)return_value_vl_malloc_2;
  void *return_value_vl_malloc_3;
  return_value_vl_malloc_3=vl_malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)ndims);
  f->subs = (signed int *)return_value_vl_malloc_3;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)ndims);
  f->dsubs = (signed int *)return_value_vl_malloc_4;
  void *return_value_vl_malloc_5;
  return_value_vl_malloc_5=vl_malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)ndims);
  f->strides = (signed int *)return_value_vl_malloc_5;
  strides = f->strides;
  k = 0;
  for( ; !(k >= ndims); k = k + 1)
    f->dims[(signed long int)k] = dims[(signed long int)k];
  strides[(signed long int)0] = 1;
  k = 1;
  for( ; !(k >= ndims); k = k + 1)
    strides[(signed long int)k] = strides[(signed long int)(k - 1)] * dims[(signed long int)(k - 1)];
  f->nel = strides[(signed long int)(ndims - 1)] * dims[(signed long int)(ndims - 1)];
  f->dof = (ndims * (ndims + 1)) / 2 + ndims;
  void *return_value_vl_malloc_6;
  return_value_vl_malloc_6=vl_malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)f->nel);
  f->perm = (unsigned int *)return_value_vl_malloc_6;
  void *return_value_vl_malloc_7;
  return_value_vl_malloc_7=vl_malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)f->nel);
  f->joins = (unsigned int *)return_value_vl_malloc_7;
  void *return_value_vl_malloc_8;
  return_value_vl_malloc_8=vl_malloc(sizeof(struct _VlMserReg) /*16ul*/  * (unsigned long int)f->nel);
  f->r = (struct _VlMserReg *)return_value_vl_malloc_8;
  f->er = ((struct _VlMserExtrReg *)NULL);
  f->rer = 0;
  f->mer = ((unsigned int *)NULL);
  f->rmer = 0;
  f->ell = ((float *)NULL);
  f->rell = 0;
  f->delta = 5;
  f->max_area = 0.75;
  f->min_area = 3.0 / (double)f->nel;
  f->max_variation = 0.25;
  f->min_diversity = 0.2;
  return f;
}

// vl_mser_process
// file vl/mser.c line 419
extern void vl_mser_process(struct _VlMserFilt *f, const unsigned char *im)
{
  unsigned int nel = (unsigned int)f->nel;
  unsigned int *perm = f->perm;
  unsigned int *joins = f->joins;
  signed int ndims = f->ndims;
  signed int *dims = f->dims;
  signed int *subs = f->subs;
  signed int *dsubs = f->dsubs;
  signed int *strides = f->strides;
  struct _VlMserReg *r = f->r;
  struct _VlMserExtrReg *er = f->er;
  unsigned int *mer = f->mer;
  signed int delta = f->delta;
  signed int njoins = 0;
  signed int ner = 0;
  signed int nmer = 0;
  signed int nbig = 0;
  signed int nsmall = 0;
  signed int nbad = 0;
  signed int ndup = 0;
  signed int i;
  signed int j;
  signed int k;
  f->nell = 0;
  unsigned int buckets[256l];
  memset((void *)buckets, 0, sizeof(unsigned int) /*4ul*/  * (unsigned long int)256);
  i = 0;
  for( ; !(i >= (signed int)nel); i = i + 1)
  {
    unsigned char v = im[(signed long int)i];
    buckets[(signed long int)v] = buckets[(signed long int)v] + 1u;
  }
  i = 1;
  for( ; !(i >= 256); i = i + 1)
    buckets[(signed long int)i] = buckets[(signed long int)i] + buckets[(signed long int)(i - 1)];
  i = (signed int)nel;
  while(i >= 1)
  {
    unsigned char vl_mser_process__1__1__3__1__v;
    i = i - 1;
    vl_mser_process__1__1__3__1__v = im[(signed long int)i];
    unsigned int vl_mser_process__1__1__3__1__j;
    buckets[(signed long int)vl_mser_process__1__1__3__1__v] = buckets[(signed long int)vl_mser_process__1__1__3__1__v] - 1u;
    vl_mser_process__1__1__3__1__j = buckets[(signed long int)vl_mser_process__1__1__3__1__v];
    perm[(signed long int)vl_mser_process__1__1__3__1__j] = (unsigned int)i;
  }
  i = 0;
  for( ; !(i >= (signed int)nel); i = i + 1)
    (r + (signed long int)i)->parent = (unsigned int)((1ULL << 32) - (unsigned long int)1);
  i = 0;
  _Bool tmp_if_expr_1;
  signed int tmp_post_2;
  signed int tmp_post_3;
  signed int tmp_post_4;
  for( ; !(i >= (signed int)nel); i = i + 1)
  {
    unsigned int vl_mser_process__1__3__1__idx = perm[(signed long int)i];
    unsigned char vl_mser_process__1__3__1__val = im[(signed long int)vl_mser_process__1__3__1__idx];
    unsigned int r_idx;
    (r + (signed long int)vl_mser_process__1__3__1__idx)->parent = vl_mser_process__1__3__1__idx;
    (r + (signed long int)vl_mser_process__1__3__1__idx)->shortcut = vl_mser_process__1__3__1__idx;
    (r + (signed long int)vl_mser_process__1__3__1__idx)->area = (unsigned int)1;
    (r + (signed long int)vl_mser_process__1__3__1__idx)->height = (unsigned int)1;
    r_idx = vl_mser_process__1__3__1__idx;
    unsigned int temp = vl_mser_process__1__3__1__idx;
    k = ndims - 1;
    for( ; k >= 0; k = k - 1)
    {
      dsubs[(signed long int)k] = -1;
      subs[(signed long int)k] = (signed int)(temp / (unsigned int)strides[(signed long int)k]);
      temp = temp % (unsigned int)strides[(signed long int)k];
    }
    while((_Bool)1)
    {
      unsigned int n_idx = (unsigned int)0;
      signed int good = 1;
      k = 0;
      for( ; !(good == 0) && !(k >= ndims); k = k + 1)
      {
        signed int vl_mser_process__1__3__1__2__1__1__temp = dsubs[(signed long int)k] + subs[(signed long int)k];
        if(vl_mser_process__1__3__1__2__1__1__temp >= 0)
          tmp_if_expr_1 = vl_mser_process__1__3__1__2__1__1__temp < dims[(signed long int)k] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        good = good & (signed int)tmp_if_expr_1;
        n_idx = n_idx + (unsigned int)(vl_mser_process__1__3__1__2__1__1__temp * strides[(signed long int)k]);
      }
      if(!(good == 0) && !(n_idx == vl_mser_process__1__3__1__idx))
      {
        if(!((unsigned long int)(r + (signed long int)n_idx)->parent == 4294967295ull))
        {
          unsigned char nr_val = (unsigned char)0;
          unsigned int nr_idx = (unsigned int)0;
          signed int hgt = (signed int)(r + (signed long int)r_idx)->height;
          signed int n_hgt = (signed int)(r + (signed long int)nr_idx)->height;
          r_idx=climb(r, vl_mser_process__1__3__1__idx);
          nr_idx=climb(r, n_idx);
          if(!(r_idx == nr_idx))
          {
            nr_val = im[(signed long int)nr_idx];
            if(nr_val == vl_mser_process__1__3__1__val && !(hgt >= n_hgt))
            {
              (r + (signed long int)r_idx)->parent = nr_idx;
              (r + (signed long int)r_idx)->shortcut = nr_idx;
              (r + (signed long int)nr_idx)->area = (r + (signed long int)nr_idx)->area + (r + (signed long int)r_idx)->area;
              (r + (signed long int)nr_idx)->height = (unsigned int)(n_hgt > hgt + 1 ? n_hgt : hgt + 1);
              tmp_post_2 = njoins;
              njoins = njoins + 1;
              joins[(signed long int)tmp_post_2] = r_idx;
            }

            else
            {
              (r + (signed long int)nr_idx)->parent = r_idx;
              (r + (signed long int)nr_idx)->shortcut = r_idx;
              (r + (signed long int)r_idx)->area = (r + (signed long int)r_idx)->area + (r + (signed long int)nr_idx)->area;
              (r + (signed long int)r_idx)->height = (unsigned int)(hgt > n_hgt + 1 ? hgt : n_hgt + 1);
              tmp_post_3 = njoins;
              njoins = njoins + 1;
              joins[(signed long int)tmp_post_3] = nr_idx;
              if(!(nr_val == vl_mser_process__1__3__1__val))
                ner = ner + 1;

            }
          }

        }

      }

      k = 0;
      do
      {
        dsubs[(signed long int)k] = dsubs[(signed long int)k] + 1;
        if(!(dsubs[(signed long int)k] >= 2))
          break;

        tmp_post_4 = k;
        k = k + 1;
        dsubs[(signed long int)tmp_post_4] = -1;
        if(k == ndims)
          goto done_all_neighbors;

      }
      while((_Bool)1);
    }

  done_all_neighbors:
    ;
  }
  ner = ner + 1;
  f->njoins = njoins;
  f->stats.num_extremal = ner;
  if(!(f->rer >= ner))
  {
    if(!(er == ((struct _VlMserExtrReg *)NULL)))
      vl_free((void *)er);

    void *return_value_vl_malloc_5;
    return_value_vl_malloc_5=vl_malloc(sizeof(struct _VlMserExtrReg) /*28ul*/  * (unsigned long int)ner);
    er = (struct _VlMserExtrReg *)return_value_vl_malloc_5;
    f->er = er;
    f->rer = ner;
  }

  f->nmer = ner;
  ner = 0;
  i = 0;
  for( ; !(i >= (signed int)nel); i = i + 1)
  {
    unsigned int idx = perm[(signed long int)i];
    unsigned char val = im[(signed long int)idx];
    unsigned int p_idx = (r + (signed long int)idx)->parent;
    unsigned char p_val = im[(signed long int)p_idx];
    signed int is_extr = (signed int)((signed int)p_val > (signed int)val || idx == p_idx);
    if(!(is_extr == 0))
    {
      (er + (signed long int)ner)->index = (signed int)idx;
      (er + (signed long int)ner)->parent = ner;
      (er + (signed long int)ner)->value = im[(signed long int)idx];
      (er + (signed long int)ner)->area = (r + (signed long int)idx)->area;
      (r + (signed long int)idx)->shortcut = (unsigned int)ner;
      ner = ner + 1;
    }

    else
      (r + (signed long int)idx)->shortcut = (unsigned int)((1ULL << 32) - (unsigned long int)1);
  }
  i = 0;
  for( ; !(i >= ner); i = i + 1)
  {
    unsigned int vl_mser_process__1__6__1__idx = (unsigned int)(er + (signed long int)i)->index;
    do
      vl_mser_process__1__6__1__idx = (r + (signed long int)vl_mser_process__1__6__1__idx)->parent;
    while((unsigned long int)(r + (signed long int)vl_mser_process__1__6__1__idx)->shortcut == 4294967295ull);
    (er + (signed long int)i)->parent = (signed int)(r + (signed long int)vl_mser_process__1__6__1__idx)->shortcut;
    (er + (signed long int)i)->shortcut = (unsigned int)i;
  }
  i = 0;
  for( ; !(i >= ner); i = i + 1)
  {
    signed int top_val = (signed int)(er + (signed long int)i)->value + delta;
    signed int top = (signed int)(er + (signed long int)i)->shortcut;
    while((_Bool)1)
    {
      signed int vl_mser_process__1__7__1__1__next = (er + (signed long int)top)->parent;
      signed int next_val = (signed int)(er + (signed long int)vl_mser_process__1__7__1__1__next)->value;
      if(vl_mser_process__1__7__1__1__next == top || !(top_val >= next_val))
        break;

      top = vl_mser_process__1__7__1__1__next;
    }
    signed int vl_mser_process__1__7__1__2__area = (signed int)(er + (signed long int)i)->area;
    signed int area_top = (signed int)(er + (signed long int)top)->area;
    (er + (signed long int)i)->variation = (float)(area_top - vl_mser_process__1__7__1__2__area) / (float)vl_mser_process__1__7__1__2__area;
    (er + (signed long int)i)->max_stable = (unsigned int)1;
    signed int vl_mser_process__1__7__1__3__parent = (er + (signed long int)i)->parent;
    signed int curr = (signed int)(er + (signed long int)vl_mser_process__1__7__1__3__parent)->shortcut;
    (er + (signed long int)vl_mser_process__1__7__1__3__parent)->shortcut = (unsigned int)(top > curr ? top : curr);
  }
  nmer = ner;
  i = 0;
  for( ; !(i >= ner); i = i + 1)
  {
    unsigned int vl_mser_process__1__8__1__parent = (unsigned int)(er + (signed long int)i)->parent;
    unsigned char vl_mser_process__1__8__1__val = (er + (signed long int)i)->value;
    float var = (er + (signed long int)i)->variation;
    unsigned char vl_mser_process__1__8__1__p_val = (er + (signed long int)vl_mser_process__1__8__1__parent)->value;
    float p_var = (er + (signed long int)vl_mser_process__1__8__1__parent)->variation;
    unsigned int loser;
    if(1 + (signed int)vl_mser_process__1__8__1__val >= (signed int)vl_mser_process__1__8__1__p_val)
    {
      if(var < p_var)
        loser = vl_mser_process__1__8__1__parent;

      else
        loser = (unsigned int)i;
      if(!((er + (signed long int)loser)->max_stable == 0u))
      {
        nmer = nmer - 1;
        (er + (signed long int)loser)->max_stable = (unsigned int)0;
      }

    }

  }
  f->stats.num_unstable = ner - nmer;
  float max_area = (float)f->max_area * (float)nel;
  float min_area = (float)f->min_area * (float)nel;
  float max_var = (float)f->max_variation;
  float min_div = (float)f->min_diversity;
  i = ner - 1;
  for( ; (signed long int)i >= 0L; i = i - 1)
  {
    if(!((er + (signed long int)i)->max_stable == 0u))
    {
      if((er + (signed long int)i)->variation >= max_var)
        nbad = nbad + 1;

      else
        if((float)(er + (signed long int)i)->area > max_area)
          nbig = nbig + 1;

        else
          if((float)(er + (signed long int)i)->area < min_area)
            nsmall = nsmall + 1;

          else
          {
            if(min_div < 1.000000f)
            {
              unsigned int parent = (unsigned int)(er + (signed long int)i)->parent;
              signed int area;
              signed int p_area;
              float div;
              if(!((signed int)parent == i))
              {
                while((er + (signed long int)parent)->max_stable == 0u)
                {
                  unsigned int next = (unsigned int)(er + (signed long int)parent)->parent;
                  if(next == parent)
                    break;

                  parent = next;
                }
                area = (signed int)(er + (signed long int)i)->area;
                p_area = (signed int)(er + (signed long int)parent)->area;
                div = (float)(p_area - area) / (float)p_area;
                if(div < min_div)
                {
                  ndup = ndup + 1;
                  goto remove;
                }

              }

            }

            goto __CPROVER_DUMP_L55;
          }

    remove:
      ;
      (er + (signed long int)i)->max_stable = (unsigned int)0;
      nmer = nmer - 1;
    }


  __CPROVER_DUMP_L55:
    ;
  }
  f->stats.num_abs_unstable = nbad;
  f->stats.num_too_big = nbig;
  f->stats.num_too_small = nsmall;
  f->stats.num_duplicates = ndup;
  if(!(f->rmer >= nmer))
  {
    if(!(mer == ((unsigned int *)NULL)))
      vl_free((void *)mer);

    void *return_value_vl_malloc_6;
    return_value_vl_malloc_6=vl_malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)nmer);
    mer = (unsigned int *)return_value_vl_malloc_6;
    f->mer = mer;
    f->rmer = nmer;
  }

  f->nmer = nmer;
  j = 0;
  i = 0;
  signed int tmp_post_7;
  for( ; !(i >= ner); i = i + 1)
    if(!((er + (signed long int)i)->max_stable == 0u))
    {
      tmp_post_7 = j;
      j = j + 1;
      mer[(signed long int)tmp_post_7] = (unsigned int)(er + (signed long int)i)->index;
    }

}

// vl_pgm_extract_data
// file vl/pgm.c line 263
extern signed int vl_pgm_extract_data(struct _IO_FILE *f, const struct _VlPgmImage *im, void *data)
{
  unsigned long long int bpp;
  bpp=vl_pgm_get_bpp(im);
  unsigned long long int data_size;
  data_size=vl_pgm_get_npixels(im);
  signed int good = 1;
  unsigned long int c;
  if(!(im->is_raw == 0))
  {
    c=fread(data, bpp, data_size, f);
    good = (signed int)(c == data_size);
    if(bpp == 2ul)
    {
      unsigned long long int vl_pgm_extract_data__1__1__1__i;
      unsigned char *pt = (unsigned char *)data;
      vl_pgm_extract_data__1__1__1__i = (unsigned long long int)0;
      for( ; !(vl_pgm_extract_data__1__1__1__i >= 2ul * data_size); vl_pgm_extract_data__1__1__1__i = vl_pgm_extract_data__1__1__1__i + (unsigned long long int)2)
      {
        unsigned char tmp = pt[(signed long int)vl_pgm_extract_data__1__1__1__i];
        pt[(signed long int)vl_pgm_extract_data__1__1__1__i] = pt[(signed long int)(vl_pgm_extract_data__1__1__1__i + (unsigned long int)1)];
        pt[(signed long int)(vl_pgm_extract_data__1__1__1__i + (unsigned long int)1)] = tmp;
      }
    }

  }

  else
  {
    unsigned long long int i;
    unsigned int v;
    good = 1;
    i = (unsigned long long int)0;
    for( ; !(good == 0) && !(i >= data_size); i = i + 1ull)
    {
      signed int return_value_fscanf_1;
      return_value_fscanf_1=fscanf(f, " %ud", &v);
      c = (unsigned long int)return_value_fscanf_1;
      if(bpp == 1ul)
        ((unsigned char *)data)[(signed long int)i] = (unsigned char)v;

      else
        ((unsigned short int *)data)[(signed long int)i] = (unsigned short int)v;
      good = good & (signed int)(c == (unsigned long int)1);
    }
  }
  if(good == 0)
  {
    signed int return_value_vl_set_last_error_2;
    return_value_vl_set_last_error_2=vl_set_last_error(103, "Invalid PGM data");
    return return_value_vl_set_last_error_2;
  }

  return 0;
}

// vl_pgm_extract_head
// file vl/pgm.c line 161
extern signed int vl_pgm_extract_head(struct _IO_FILE *f, struct _VlPgmImage *im)
{
  char magic[2l];
  signed int c;
  signed int is_raw;
  signed int width;
  signed int height;
  signed int max_value;
  unsigned long int sz;
  signed int good;
  sz=fread((void *)magic, (unsigned long int)1, (unsigned long int)2, f);
  if(!(sz >= 2ul))
  {
    signed int return_value_vl_set_last_error_1;
    return_value_vl_set_last_error_1=vl_set_last_error(101, "Invalid PGM header");
    return return_value_vl_set_last_error_1;
  }

  good = (signed int)((signed int)magic[(signed long int)0] == 80);
  switch((signed int)magic[(signed long int)1])
  {
    case 50:
    {
      is_raw = 0;
      break;
    }
    case 53:
    {
      is_raw = 1;
      break;
    }
    default:
      good = 0;
  }
  if(good == 0)
  {
    signed int return_value_vl_set_last_error_2;
    return_value_vl_set_last_error_2=vl_set_last_error(101, "Invalid PGM header");
    return return_value_vl_set_last_error_2;
  }

  good = 1;
  c=remove_blanks(f);
  good = good & (signed int)(c > 0);
  c=fscanf(f, "%d", &width);
  good = good & (signed int)(c == 1);
  c=remove_blanks(f);
  good = good & (signed int)(c > 0);
  c=fscanf(f, "%d", &height);
  good = good & (signed int)(c == 1);
  c=remove_blanks(f);
  good = good & (signed int)(c > 0);
  c=fscanf(f, "%d", &max_value);
  good = good & (signed int)(c == 1);
  c=fgetc(f);
  good = good & (signed int)(c == 10 || c == 9 || c == 32 || c == 13);
  if(good == 0)
  {
    signed int return_value_vl_set_last_error_3;
    return_value_vl_set_last_error_3=vl_set_last_error(102, "Invalid PGM meta information");
    return return_value_vl_set_last_error_3;
  }

  if((signed int)(max_value == 0) >= 65536)
  {
    signed int return_value_vl_set_last_error_4;
    return_value_vl_set_last_error_4=vl_set_last_error(102, "Invalid PGM meta information");
    return return_value_vl_set_last_error_4;
  }

  im->width = (unsigned long long int)width;
  im->height = (unsigned long long int)height;
  im->max_value = (unsigned long long int)max_value;
  im->is_raw = is_raw;
  return 0;
}

// vl_pgm_get_bpp
// file vl/pgm.c line 140
extern unsigned long long int vl_pgm_get_bpp(const struct _VlPgmImage *im)
{
  return (unsigned long long int)((signed int)(im->max_value >= (unsigned long int)256) + 1);
}

// vl_pgm_get_npixels
// file vl/pgm.c line 125
extern unsigned long long int vl_pgm_get_npixels(const struct _VlPgmImage *im)
{
  return im->width * im->height;
}

// vl_pgm_insert
// file vl/pgm.c line 337
extern signed int vl_pgm_insert(struct _IO_FILE *f, const struct _VlPgmImage *im, const void *data)
{
  unsigned long long int bpp;
  bpp=vl_pgm_get_bpp(im);
  unsigned long long int data_size;
  data_size=vl_pgm_get_npixels(im);
  unsigned long int c;
  fprintf(f, "P5\n%d\n%d\n%d\n", (signed int)im->width, (signed int)im->height, (signed int)im->max_value);
  if(bpp == 2ul)
  {
    unsigned long long int i;
    unsigned char *temp;
    void *return_value_vl_malloc_1;
    return_value_vl_malloc_1=vl_malloc((unsigned long int)2 * data_size);
    temp = (unsigned char *)return_value_vl_malloc_1;
    memcpy((void *)temp, data, (unsigned long int)2 * data_size);
    i = (unsigned long long int)0;
    for( ; !(i >= 2ul * data_size); i = i + (unsigned long long int)2)
    {
      unsigned char tmp = temp[(signed long int)i];
      temp[(signed long int)i] = temp[(signed long int)(i + (unsigned long int)1)];
      temp[(signed long int)(i + (unsigned long int)1)] = tmp;
    }
    c=fwrite((const void *)temp, (unsigned long int)2, data_size, f);
    vl_free((void *)temp);
  }

  else
    c=fwrite(data, bpp, data_size, f);
  if(!(c == data_size))
  {
    signed int return_value_vl_set_last_error_2;
    return_value_vl_set_last_error_2=vl_set_last_error(104, "Error writing PGM data");
    return return_value_vl_set_last_error_2;
  }

  return 0;
}

// vl_pgm_read_new
// file vl/pgm.c line 394
extern signed int vl_pgm_read_new(const char *name, struct _VlPgmImage *im, unsigned char **data)
{
  signed int err = 0;
  struct _IO_FILE *f;
  f=fopen(name, "rb");
  if(f == ((struct _IO_FILE *)NULL))
  {
    signed int return_value_vl_set_last_error_1;
    return_value_vl_set_last_error_1=vl_set_last_error(104, "Error opening PGM file `%s' for reading", name);
    return return_value_vl_set_last_error_1;
  }

  err=vl_pgm_extract_head(f, im);
  if(!(err == 0))
  {
    fclose(f);
    return err;
  }

  else
  {
    unsigned long long int return_value_vl_pgm_get_bpp_3;
    return_value_vl_pgm_get_bpp_3=vl_pgm_get_bpp(im);
    if(return_value_vl_pgm_get_bpp_3 >= 2ul)
    {
      signed int return_value_vl_set_last_error_2;
      return_value_vl_set_last_error_2=vl_set_last_error(3, "PGM with BPP > 1 not supported");
      return return_value_vl_set_last_error_2;
    }

    unsigned long long int return_value_vl_pgm_get_npixels_4;
    return_value_vl_pgm_get_npixels_4=vl_pgm_get_npixels(im);
    void *return_value_vl_malloc_5;
    return_value_vl_malloc_5=vl_malloc(return_value_vl_pgm_get_npixels_4 * sizeof(unsigned char) /*1ul*/ );
    *data = (unsigned char *)return_value_vl_malloc_5;
    err=vl_pgm_extract_data(f, im, (void *)*data);
    if(!(err == 0))
    {
      vl_free((void *)data);
      fclose(f);
    }

    fclose(f);
    return err;
  }
}

// vl_pgm_read_new_f
// file vl/pgm.c line 443
extern signed int vl_pgm_read_new_f(const char *name, struct _VlPgmImage *im, float **data)
{
  signed int err = 0;
  unsigned long int npixels;
  unsigned char *idata;
  err=vl_pgm_read_new(name, im, &idata);
  if(!(err == 0))
    return err;

  else
  {
    npixels=vl_pgm_get_npixels(im);
    void *return_value_vl_malloc_1;
    return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * npixels);
    *data = (float *)return_value_vl_malloc_1;
    unsigned long int k;
    float scale = 1.0f / (float)im->max_value;
    k = (unsigned long int)0;
    for( ; !(k >= npixels); k = k + 1ul)
      (*data)[(signed long int)k] = scale * (float)idata[(signed long int)k];
    vl_free((void *)idata);
    return 0;
  }
}

// vl_pgm_write
// file vl/pgm.c line 480
extern signed int vl_pgm_write(const char *name, const unsigned char *data, signed int width, signed int height)
{
  signed int err = 0;
  struct _VlPgmImage pgm;
  struct _IO_FILE *f;
  f=fopen(name, "wb");
  if(f == ((struct _IO_FILE *)NULL))
  {
    signed int return_value_vl_set_last_error_1;
    return_value_vl_set_last_error_1=vl_set_last_error(104, "Error opening PGM file '%s' for writing", name);
    return return_value_vl_set_last_error_1;
  }

  pgm.width = (unsigned long long int)width;
  pgm.height = (unsigned long long int)height;
  pgm.is_raw = 1;
  pgm.max_value = (unsigned long long int)255;
  err=vl_pgm_insert(f, &pgm, (const void *)data);
  fclose(f);
  return err;
}

// vl_pgm_write_f
// file vl/pgm.c line 517
extern signed int vl_pgm_write_f(const char *name, const float *data, signed int width, signed int height)
{
  signed int err = 0;
  signed int k;
  float min = +vl_infinity_f_link1.value;
  float max = -vl_infinity_f_link1.value;
  float scale;
  unsigned char *buffer;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(float) /*4ul*/  * (unsigned long int)width * (unsigned long int)height);
  buffer = (unsigned char *)return_value_vl_malloc_1;
  k = 0;
  float tmp_if_expr_2;
  float tmp_if_expr_3;
  for( ; !(k >= height * width); k = k + 1)
  {
    if(min < data[(signed long int)k])
      tmp_if_expr_2 = min;

    else
      tmp_if_expr_2 = data[(signed long int)k];
    min = tmp_if_expr_2;
    if(max > data[(signed long int)k])
      tmp_if_expr_3 = max;

    else
      tmp_if_expr_3 = data[(signed long int)k];
    max = tmp_if_expr_3;
  }
  scale = (float)255 / ((max - min) + 1.19209290E-07F);
  k = 0;
  for( ; !(k >= height * width); k = k + 1)
    buffer[(signed long int)k] = (unsigned char)((data[(signed long int)k] - min) * scale);
  err=vl_pgm_write(name, buffer, width, height);
  vl_free((void *)buffer);
  return err;
}

// vl_quickshift_delete
// file vl/quickshift.c line 456
extern void vl_quickshift_delete(struct _VlQS *q)
{
  if(!(q == ((struct _VlQS *)NULL)))
  {
    if(!(q->parents == ((signed int *)NULL)))
      vl_free((void *)q->parents);

    if(!(q->dists == ((double *)NULL)))
      vl_free((void *)q->dists);

    if(!(q->density == ((double *)NULL)))
      vl_free((void *)q->density);

    vl_free((void *)q);
  }

}

// vl_quickshift_distance
// file vl/quickshift.c line 154
static inline double vl_quickshift_distance(const double *I, signed int N1, signed int N2, signed int K, signed int i1, signed int i2, signed int j1, signed int j2)
{
  double dist = (double)0;
  signed int d1 = j1 - i1;
  signed int d2 = j2 - i2;
  signed int k;
  dist = dist + (double)(d1 * d1 + d2 * d2);
  k = 0;
  for( ; !(k >= K); k = k + 1)
  {
    double d = I[(signed long int)(i1 + N1 * i2 + N1 * N2 * k)] - I[(signed long int)(j1 + N1 * j2 + N1 * N2 * k)];
    dist = dist + d * d;
  }
  return dist;
}

// vl_quickshift_inner
// file vl/quickshift.c line 198
static inline double vl_quickshift_inner(const double *I, signed int N1, signed int N2, signed int K, signed int i1, signed int i2, signed int j1, signed int j2)
{
  double ker = (double)0;
  signed int k;
  ker = ker + (double)(i1 * j1 + i2 * j2);
  k = 0;
  for( ; !(k >= K); k = k + 1)
    ker = ker + I[(signed long int)(i1 + N1 * i2 + N1 * N2 * k)] * I[(signed long int)(j1 + N1 * j2 + N1 * N2 * k)];
  return ker;
}

// vl_quickshift_new
// file vl/quickshift.c line 231
extern struct _VlQS * vl_quickshift_new(const double *image, signed int height, signed int width, signed int channels)
{
  struct _VlQS *q;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct _VlQS) /*64ul*/ );
  q = (struct _VlQS *)return_value_vl_malloc_1;
  q->image = (double *)image;
  q->height = height;
  q->width = width;
  q->channels = channels;
  q->medoid = 0;
  q->tau = (double)((height > width ? height : width) / 50);
  double tmp_if_expr_2;
  if(q->tau / 3.000000 < 2.000000)
    tmp_if_expr_2 = (double)2;

  else
    tmp_if_expr_2 = q->tau / (double)3;
  q->sigma = tmp_if_expr_2;
  void *return_value_vl_calloc_3;
  return_value_vl_calloc_3=vl_calloc((unsigned long int)(height * width), sizeof(double) /*8ul*/ );
  q->dists = (double *)return_value_vl_calloc_3;
  void *return_value_vl_calloc_4;
  return_value_vl_calloc_4=vl_calloc((unsigned long int)(height * width), sizeof(signed int) /*4ul*/ );
  q->parents = (signed int *)return_value_vl_calloc_4;
  void *return_value_vl_calloc_5;
  return_value_vl_calloc_5=vl_calloc((unsigned long int)(height * width), sizeof(double) /*8ul*/ );
  q->density = (double *)return_value_vl_calloc_5;
  return q;
}

// vl_quickshift_process
// file vl/quickshift.c line 258
extern void vl_quickshift_process(struct _VlQS *q)
{
  const double *I = q->image;
  signed int *parents = q->parents;
  double *E = q->density;
  double *dists = q->dists;
  double *M = ((double *)NULL);
  double *n = ((double *)NULL);
  double sigma = q->sigma;
  double tau = q->tau;
  double tau2 = tau * tau;
  signed int K = q->channels;
  signed int d;
  signed int N1 = q->height;
  signed int N2 = q->width;
  signed int i1;
  signed int i2;
  signed int j1;
  signed int j2;
  signed int R;
  signed int tR;
  d = 2 + K;
  if(!(q->medoid == 0))
  {
    void *return_value_vl_calloc_1;
    return_value_vl_calloc_1=vl_calloc((unsigned long int)(N1 * N2 * d), sizeof(double) /*8ul*/ );
    M = (double *)return_value_vl_calloc_1;
    void *return_value_vl_calloc_2;
    return_value_vl_calloc_2=vl_calloc((unsigned long int)(N1 * N2), sizeof(double) /*8ul*/ );
    n = (double *)return_value_vl_calloc_2;
  }

  double return_value_ceil_3;
  return_value_ceil_3=ceil((double)3 * sigma);
  R = (signed int)return_value_ceil_3;
  double return_value_ceil_4;
  return_value_ceil_4=ceil(tau);
  tR = (signed int)return_value_ceil_4;
  if(!(n == ((double *)NULL)))
  {
    i2 = 0;
    for( ; !(i2 >= N2); i2 = i2 + 1)
    {
      i1 = 0;
      for( ; !(i1 >= N1); i1 = i1 + 1)
        n[(signed long int)(i1 + N1 * i2)]=vl_quickshift_inner(I, N1, N2, K, i1, i2, i1, i2);
    }
  }

  i2 = 0;
  for( ; !(i2 >= N2); i2 = i2 + 1)
  {
    i1 = 0;
    for( ; !(i1 >= N1); i1 = i1 + 1)
    {
      signed int j1min = i1 - R > 0 ? i1 - R : 0;
      signed int j1max = i1 + R < N1 - 1 ? i1 + R : N1 - 1;
      signed int j2min = i2 - R > 0 ? i2 - R : 0;
      signed int j2max = i2 + R < N2 - 1 ? i2 + R : N2 - 1;
      j2 = j2min;
      for( ; j2max >= j2; j2 = j2 + 1)
      {
        j1 = j1min;
        for( ; j1max >= j1; j1 = j1 + 1)
        {
          double Dij;
          Dij=vl_quickshift_distance(I, N1, N2, K, i1, i2, j1, j2);
          double Fij;
          double return_value_exp_5;
          return_value_exp_5=exp(-Dij / ((double)2 * sigma * sigma));
          Fij = -return_value_exp_5;
          E[(signed long int)(i1 + N1 * i2)] = E[(signed long int)(i1 + N1 * i2)] - Fij;
          if(!(M == ((double *)NULL)))
          {
            signed int k;
            M[(signed long int)(i1 + N1 * i2 + N1 * N2 * 0)] = M[(signed long int)(i1 + N1 * i2 + N1 * N2 * 0)] + (double)j1 * Fij;
            M[(signed long int)(i1 + N1 * i2 + N1 * N2 * 1)] = M[(signed long int)(i1 + N1 * i2 + N1 * N2 * 1)] + (double)j2 * Fij;
            k = 0;
            for( ; !(k >= K); k = k + 1)
              M[(signed long int)(i1 + N1 * i2 + N1 * N2 * (k + 2))] = M[(signed long int)(i1 + N1 * i2 + N1 * N2 * (k + 2))] + I[(signed long int)(j1 + N1 * j2 + N1 * N2 * k)] * Fij;
          }

        }
      }
    }
  }
  if(!(q->medoid == 0))
  {
    i2 = 0;
    for( ; !(i2 >= N2); i2 = i2 + 1)
    {
      i1 = 0;
      for( ; !(i1 >= N1); i1 = i1 + 1)
      {
        double sc_best = (double)0;
        double j1_best = (double)i1;
        double j2_best = (double)i2;
        signed int vl_quickshift_process__1__4__1__1__1__1__j1min = i1 - R > 0 ? i1 - R : 0;
        signed int vl_quickshift_process__1__4__1__1__1__1__j1max = i1 + R < N1 - 1 ? i1 + R : N1 - 1;
        signed int vl_quickshift_process__1__4__1__1__1__1__j2min = i2 - R > 0 ? i2 - R : 0;
        signed int vl_quickshift_process__1__4__1__1__1__1__j2max = i2 + R < N2 - 1 ? i2 + R : N2 - 1;
        j2 = vl_quickshift_process__1__4__1__1__1__1__j2min;
        for( ; vl_quickshift_process__1__4__1__1__1__1__j2max >= j2; j2 = j2 + 1)
        {
          j1 = vl_quickshift_process__1__4__1__1__1__1__j1min;
          for( ; vl_quickshift_process__1__4__1__1__1__1__j1max >= j1; j1 = j1 + 1)
          {
            double Qij = -n[(signed long int)(j1 + j2 * N1)] * E[(signed long int)(i1 + i2 * N1)];
            signed int vl_quickshift_process__1__4__1__1__1__1__1__1__1__1__k;
            Qij = Qij - (double)(2 * j1) * M[(signed long int)(i1 + i2 * N1 + N1 * N2 * 0)];
            Qij = Qij - (double)(2 * j2) * M[(signed long int)(i1 + i2 * N1 + N1 * N2 * 1)];
            vl_quickshift_process__1__4__1__1__1__1__1__1__1__1__k = 0;
            for( ; !(vl_quickshift_process__1__4__1__1__1__1__1__1__1__1__k >= K); vl_quickshift_process__1__4__1__1__1__1__1__1__1__1__k = vl_quickshift_process__1__4__1__1__1__1__1__1__1__1__k + 1)
              Qij = Qij - (double)2 * I[(signed long int)(j1 + j2 * N1 + N1 * N2 * vl_quickshift_process__1__4__1__1__1__1__1__1__1__1__k)] * M[(signed long int)(i1 + i2 * N1 + N1 * N2 * (vl_quickshift_process__1__4__1__1__1__1__1__1__1__1__k + 2))];
            if(Qij > sc_best)
            {
              sc_best = Qij;
              j1_best = (double)j1;
              j2_best = (double)j2;
            }

          }
        }
        parents[(signed long int)(i1 + N1 * i2)] = (signed int)(j1_best + (double)N1 * j2_best);
        dists[(signed long int)(i1 + N1 * i2)] = sc_best;
      }
    }
  }

  else
  {
    i2 = 0;
    for( ; !(i2 >= N2); i2 = i2 + 1)
    {
      i1 = 0;
      for( ; !(i1 >= N1); i1 = i1 + 1)
      {
        double E0 = E[(signed long int)(i1 + N1 * i2)];
        double d_best = vl_infinity_d_link3.value;
        double vl_quickshift_process__1__5__1__1__1__1__j1_best = (double)i1;
        double vl_quickshift_process__1__5__1__1__1__1__j2_best = (double)i2;
        signed int vl_quickshift_process__1__5__1__1__1__1__j1min = i1 - tR > 0 ? i1 - tR : 0;
        signed int vl_quickshift_process__1__5__1__1__1__1__j1max = i1 + tR < N1 - 1 ? i1 + tR : N1 - 1;
        signed int vl_quickshift_process__1__5__1__1__1__1__j2min = i2 - tR > 0 ? i2 - tR : 0;
        signed int vl_quickshift_process__1__5__1__1__1__1__j2max = i2 + tR < N2 - 1 ? i2 + tR : N2 - 1;
        j2 = vl_quickshift_process__1__5__1__1__1__1__j2min;
        for( ; vl_quickshift_process__1__5__1__1__1__1__j2max >= j2; j2 = j2 + 1)
        {
          j1 = vl_quickshift_process__1__5__1__1__1__1__j1min;
          for( ; vl_quickshift_process__1__5__1__1__1__1__j1max >= j1; j1 = j1 + 1)
            if(E[(signed long int)(N1 * j2 + j1)] > E0)
            {
              double vl_quickshift_process__1__5__1__1__1__1__1__1__1__1__1__Dij;
              vl_quickshift_process__1__5__1__1__1__1__1__1__1__1__1__Dij=vl_quickshift_distance(I, N1, N2, K, i1, i2, j1, j2);
              if(vl_quickshift_process__1__5__1__1__1__1__1__1__1__1__1__Dij < d_best && vl_quickshift_process__1__5__1__1__1__1__1__1__1__1__1__Dij <= tau2)
              {
                d_best = vl_quickshift_process__1__5__1__1__1__1__1__1__1__1__1__Dij;
                vl_quickshift_process__1__5__1__1__1__1__j1_best = (double)j1;
                vl_quickshift_process__1__5__1__1__1__1__j2_best = (double)j2;
              }

            }

        }
        parents[(signed long int)(i1 + N1 * i2)] = (signed int)(vl_quickshift_process__1__5__1__1__1__1__j1_best + (double)N1 * vl_quickshift_process__1__5__1__1__1__1__j2_best);
        dists[(signed long int)(i1 + N1 * i2)]=sqrt(d_best);
      }
    }
  }
  if(!(M == ((double *)NULL)))
    vl_free((void *)M);

  if(!(n == ((double *)NULL)))
    vl_free((void *)n);

}

// vl_rand_init
// file vl/random.h line 29
extern void vl_rand_init(struct _VlRand *self)
{
  memset((void *)self->mt, 0, sizeof(unsigned int) /*4ul*/  * (unsigned long int)624);
  self->mti = (unsigned int)(624 + 1);
}

// vl_rand_int31
// file ./vl/random.h line 106
static inline signed int vl_rand_int31(struct _VlRand *self)
{
  unsigned int return_value_vl_rand_uint32_1;
  return_value_vl_rand_uint32_1=vl_rand_uint32(self);
  return (signed int)(return_value_vl_rand_uint32_1 >> 1);
}

// vl_rand_permute_indexes
// file vl/random.h line 50
extern void vl_rand_permute_indexes(struct _VlRand *self, signed long long int *array, unsigned long long int size)
{
  signed long long int i;
  signed long long int j;
  signed long long int tmp;
  i = (signed long long int)(size - (unsigned long int)1);
  for( ; i >= 1l; i = i - 1ll)
  {
    unsigned long long int return_value_vl_rand_uindex_1;
    return_value_vl_rand_uindex_1=vl_rand_uindex_link1(self, (unsigned long long int)(i + (signed long int)1));
    j = (signed long long int)(signed int)return_value_vl_rand_uindex_1;
    tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
  }
}

// vl_rand_real1
// file vl/random.h line 117
static inline double vl_rand_real1(struct _VlRand *self)
{
  unsigned int return_value_vl_rand_uint32_1;
  return_value_vl_rand_uint32_1=vl_rand_uint32(self);
  return (double)return_value_vl_rand_uint32_1 * (1.0 / 4294967295.0);
}

// vl_rand_seed
// file vl/random.c line 144
extern void vl_rand_seed(struct _VlRand *self, unsigned int s)
{
  self->mt[(signed long int)0] = s & 0xffffffffU;
  self->mti = (unsigned int)1;
  for( ; !(self->mti >= 624u); self->mti = self->mti + 1u)
  {
    self->mt[(signed long int)self->mti] = 1812433253U * (self->mt[(signed long int)(self->mti - (unsigned int)1)] ^ self->mt[(signed long int)(self->mti - (unsigned int)1)] >> 30) + self->mti;
    self->mt[(signed long int)self->mti] = self->mt[(signed long int)self->mti] & 0xffffffffU;
  }
}

// vl_rand_seed_by_array
// file vl/random.c line 170
extern void vl_rand_seed_by_array(struct _VlRand *self, const unsigned int *key, unsigned long long int keySize)
{
  signed int i;
  signed int j;
  signed int k;
  vl_rand_seed(self, 19650218U);
  i = 1;
  j = 0;
  k = (unsigned long int)624 > keySize ? 624 : (signed int)keySize;
  for( ; !(k == 0); k = k - 1)
  {
    self->mt[(signed long int)i] = (self->mt[(signed long int)i] ^ (self->mt[(signed long int)(i - 1)] ^ self->mt[(signed long int)(i - 1)] >> 30) * 1664525U) + key[(signed long int)j] + (unsigned int)j;
    self->mt[(signed long int)i] = self->mt[(signed long int)i] & 0xffffffffU;
    i = i + 1;
    j = j + 1;
    if(i >= 624)
    {
      self->mt[(signed long int)0] = self->mt[(signed long int)(624 - 1)];
      i = 1;
    }

    if(j >= (signed int)keySize)
      j = 0;

  }
  k = 624 - 1;
  for( ; !(k == 0); k = k - 1)
  {
    self->mt[(signed long int)i] = (self->mt[(signed long int)i] ^ (self->mt[(signed long int)(i - 1)] ^ self->mt[(signed long int)(i - 1)] >> 30) * 1566083941U) - (unsigned int)i;
    self->mt[(signed long int)i] = self->mt[(signed long int)i] & 0xffffffffU;
    i = i + 1;
    if(i >= 624)
    {
      self->mt[(signed long int)0] = self->mt[(signed long int)(624 - 1)];
      i = 1;
    }

  }
  self->mt[(signed long int)0] = 0x80000000U;
}

// vl_rand_uindex
// file vl/random.h line 65
static inline unsigned long long int vl_rand_uindex(struct _VlRand *self, unsigned long long int range)
{
  if(!(range >= 4294967296ul))
  {
    unsigned int return_value_vl_rand_uint32_1;
    return_value_vl_rand_uint32_1=vl_rand_uint32(self);
    return (unsigned long long int)(return_value_vl_rand_uint32_1 % (unsigned int)range);
  }

  else
  {
    unsigned long long int return_value_vl_rand_uint64_2;
    return_value_vl_rand_uint64_2=vl_rand_uint64(self);
    return return_value_vl_rand_uint64_2 % range;
  }
}

// vl_rand_uindex_link1
// file vl/random.h line 65
static inline unsigned long long int vl_rand_uindex_link1(struct _VlRand *self_link1, unsigned long long int range_link1)
{
  if(!(range_link1 >= 4294967296ul))
  {
    unsigned int return_value_vl_rand_uint32_1_link1;
    return_value_vl_rand_uint32_1_link1=vl_rand_uint32(self_link1);
    return (unsigned long long int)(return_value_vl_rand_uint32_1_link1 % (unsigned int)range_link1);
  }

  else
  {
    unsigned long long int return_value_vl_rand_uint64_2_link1;
    return_value_vl_rand_uint64_2_link1=vl_rand_uint64_link1(self_link1);
    return return_value_vl_rand_uint64_2_link1 % range_link1;
  }
}

// vl_rand_uint32
// file ./vl/random.h line 41
extern unsigned int vl_rand_uint32(struct _VlRand *self)
{
  unsigned int y;
  if(self->mti >= 624u)
  {
    signed int kk;
    if(self->mti == 625u)
      vl_rand_seed(self, 5489U);

    kk = 0;
    static unsigned int mag01[2l] = { 0x0U, 0x9908b0dfU };
    for( ; !(kk >= 624); kk = kk + 1)
    {
      y = self->mt[(signed long int)kk] & 0x80000000U | self->mt[(signed long int)(kk + 1)] & 0x7fffffffU;
      self->mt[(signed long int)kk] = self->mt[(signed long int)(kk + 397)] ^ y >> 1 ^ mag01[(signed long int)(y & 0x1U)];
    }
    for( ; !(kk >= 624); kk = kk + 1)
    {
      y = self->mt[(signed long int)kk] & 0x80000000U | self->mt[(signed long int)(kk + 1)] & 0x7fffffffU;
      self->mt[(signed long int)kk] = self->mt[(signed long int)(kk + (397 - 624))] ^ y >> 1 ^ mag01[(signed long int)(y & 0x1U)];
    }
    y = self->mt[(signed long int)(624 - 1)] & 0x80000000U | self->mt[(signed long int)0] & 0x7fffffffU;
    self->mt[(signed long int)(624 - 1)] = self->mt[(signed long int)(397 - 1)] ^ y >> 1 ^ mag01[(signed long int)(y & 0x1U)];
    self->mti = (unsigned int)0;
  }

  unsigned int tmp_post_1 = self->mti;
  self->mti = self->mti + 1u;
  y = self->mt[(signed long int)tmp_post_1];
  y = y ^ y >> 11;
  y = y ^ y << 7 & 0x9d2c5680U;
  y = y ^ y << 15 & 0xefc60000U;
  y = y ^ y >> 18;
  return (unsigned int)y;
}

// vl_rand_uint64
// file vl/random.h line 82
static inline unsigned long long int vl_rand_uint64(struct _VlRand *self)
{
  unsigned long long int a;
  unsigned int return_value_vl_rand_uint32_1;
  return_value_vl_rand_uint32_1=vl_rand_uint32(self);
  a = (unsigned long long int)return_value_vl_rand_uint32_1;
  unsigned long long int b;
  unsigned int return_value_vl_rand_uint32_2;
  return_value_vl_rand_uint32_2=vl_rand_uint32(self);
  b = (unsigned long long int)return_value_vl_rand_uint32_2;
  return a << 32 | b;
}

// vl_rand_uint64_link1
// file vl/random.h line 82
static inline unsigned long long int vl_rand_uint64_link1(struct _VlRand *self_link1)
{
  unsigned long long int a_link1;
  unsigned int return_value_vl_rand_uint32_1_link1;
  return_value_vl_rand_uint32_1_link1=vl_rand_uint32(self_link1);
  a_link1 = (unsigned long long int)return_value_vl_rand_uint32_1_link1;
  unsigned long long int b_link1;
  unsigned int return_value_vl_rand_uint32_2_link1;
  return_value_vl_rand_uint32_2_link1=vl_rand_uint32(self_link1);
  b_link1 = (unsigned long long int)return_value_vl_rand_uint32_2_link1;
  return a_link1 << 32 | b_link1;
}

// vl_realloc
// file vl/generic.h line 144
extern void * vl_realloc(void *ptr, unsigned long int n)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  void *return_value;
  return_value=return_value_vl_get_state_1->realloc_func(ptr, n);
  return return_value;
}

// vl_refine_local_extreum_2
// file vl/covdet.c line 1332
extern signed int vl_refine_local_extreum_2(struct _VlCovDetExtremum2 *refined, const float *map, unsigned long long int width, unsigned long long int height, signed long long int x, signed long long int y)
{
  const unsigned long long int xo = (const unsigned long long int)1;
  const unsigned long long int yo = width;
  double Dx = (double)0;
  double Dy = (double)0;
  double Dxx = (double)0;
  double Dyy = (double)0;
  double Dxy = (double)0;
  double A[4l];
  double b[2l];
  const float *pt;
  signed long long int dx = (signed long long int)0;
  signed long long int dy = (signed long long int)0;
  signed long long int iter;
  signed int err;
  iter = (signed long long int)0;
  for( ; !(iter >= 5l); iter = iter + 1ll)
  {
    x = x + dx;
    y = y + dy;
    pt = map + (signed long int)((unsigned long int)x * xo) + (signed long int)((unsigned long int)y * yo);
    Dx = 0.5 * (double)((pt + (signed long int)((unsigned long int)+1 * xo))[(signed long int)((unsigned long int)0 * yo)] - (pt + (signed long int)((unsigned long int)-1 * xo))[(signed long int)((unsigned long int)0 * yo)]);
    Dy = 0.5 * (double)((pt + (signed long int)((unsigned long int)0 * xo))[(signed long int)((unsigned long int)+1 * yo)] - (pt + (signed long int)((unsigned long int)0 * xo))[(signed long int)((unsigned long int)-1 * yo)]);
    Dxx = (double)((pt + (signed long int)((unsigned long int)+1 * xo))[(signed long int)((unsigned long int)0 * yo)] + (pt + (signed long int)((unsigned long int)-1 * xo))[(signed long int)((unsigned long int)0 * yo)]) - 2.0 * (double)(pt + (signed long int)((unsigned long int)0 * xo))[(signed long int)((unsigned long int)0 * yo)];
    Dyy = (double)((pt + (signed long int)((unsigned long int)0 * xo))[(signed long int)((unsigned long int)+1 * yo)] + (pt + (signed long int)((unsigned long int)0 * xo))[(signed long int)((unsigned long int)-1 * yo)]) - 2.0 * (double)(pt + (signed long int)((unsigned long int)0 * xo))[(signed long int)((unsigned long int)0 * yo)];
    Dxy = 0.25 * (double)((((pt + (signed long int)((unsigned long int)+1 * xo))[(signed long int)((unsigned long int)+1 * yo)] + (pt + (signed long int)((unsigned long int)-1 * xo))[(signed long int)((unsigned long int)-1 * yo)]) - (pt + (signed long int)((unsigned long int)-1 * xo))[(signed long int)((unsigned long int)+1 * yo)]) - (pt + (signed long int)((unsigned long int)+1 * xo))[(signed long int)((unsigned long int)-1 * yo)]);
    A[(signed long int)(0 + 0 * 2)] = Dxx;
    A[(signed long int)(1 + 1 * 2)] = Dyy;
    A[(signed long int)(1 + 0 * 2)] = Dxy;
    A[(signed long int)(0 + 1 * 2)] = A[(signed long int)(1 + 0 * 2)];
    b[(signed long int)0] = -Dx;
    b[(signed long int)1] = -Dy;
    err=vl_solve_linear_system_2(b, A, b);
    if(!(err == 0))
    {
      b[(signed long int)0] = (double)0;
      b[(signed long int)1] = (double)0;
      break;
    }

    dx = (signed long long int)(((b[(signed long int)0] > 0.6 ? (x < (signed long int)((signed int)width - 2) ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? 1 : 0) + ((b[(signed long int)0] < -0.6 ? (x > (signed long int)1 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? -1 : 0));
    dy = (signed long long int)(((b[(signed long int)1] > 0.6 ? (y < (signed long int)((signed int)height - 2) ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? 1 : 0) + ((b[(signed long int)1] < -0.6 ? (y > (signed long int)1 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? -1 : 0));
    if(dx == 0l && dy == 0l)
      break;

  }
  double peakScore = (double)(pt + (signed long int)((unsigned long int)0 * xo))[(signed long int)((unsigned long int)0 * yo)] + 0.5 * (Dx * b[(signed long int)0] + Dy * b[(signed long int)1]);
  double alpha = ((Dxx + Dyy) * (Dxx + Dyy)) / (Dxx * Dyy - Dxy * Dxy);
  double edgeScore;
  if(alpha < 0.000000)
    edgeScore = vl_infinity_d_link1.value;

  else
  {
    double return_value_sqrt_1;
    return_value_sqrt_1=sqrt((0.25 * alpha - (double)1 > (double)0 ? 0.25 * alpha - (double)1 : (double)0) * alpha);
    edgeScore = (0.5 * alpha - (double)1) + return_value_sqrt_1;
  }
  refined->xi = x;
  refined->yi = y;
  refined->x = (float)((double)x + b[(signed long int)0]);
  refined->y = (float)((double)y + b[(signed long int)1]);
  refined->peakScore = (float)peakScore;
  refined->edgeScore = (float)edgeScore;
  _Bool tmp_if_expr_3;
  double return_value_vl_abs_d_2;
  if(err == 0)
  {
    return_value_vl_abs_d_2=vl_abs_d_link2(b[(signed long int)0]);
    tmp_if_expr_3 = return_value_vl_abs_d_2 < 1.5 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_5;
  double return_value_vl_abs_d_4;
  if(tmp_if_expr_3)
  {
    return_value_vl_abs_d_4=vl_abs_d_link2(b[(signed long int)1]);
    tmp_if_expr_5 = return_value_vl_abs_d_4 < 1.5 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_5)
    tmp_if_expr_6 = (float)0 <= refined->x ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_6 = (_Bool)0;
  _Bool tmp_if_expr_7;
  if(tmp_if_expr_6)
    tmp_if_expr_7 = refined->x <= (float)((signed int)width - 1) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_7 = (_Bool)0;
  _Bool tmp_if_expr_8;
  if(tmp_if_expr_7)
    tmp_if_expr_8 = (float)0 <= refined->y ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_8 = (_Bool)0;
  _Bool tmp_if_expr_9;
  if(tmp_if_expr_8)
    tmp_if_expr_9 = refined->y <= (float)((signed int)height - 1) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_9 = (_Bool)0;
  return (signed int)tmp_if_expr_9;
}

// vl_refine_local_extreum_3
// file vl/covdet.c line 1206
extern signed int vl_refine_local_extreum_3(struct _VlCovDetExtremum3 *refined, const float *map, unsigned long long int width, unsigned long long int height, unsigned long long int depth, signed long long int x, signed long long int y, signed long long int z)
{
  const unsigned long long int xo = (const unsigned long long int)1;
  const unsigned long long int yo = width;
  const unsigned long long int zo = width * height;
  double Dx = (double)0;
  double Dy = (double)0;
  double Dz = (double)0;
  double Dxx = (double)0;
  double Dyy = (double)0;
  double Dzz = (double)0;
  double Dxy = (double)0;
  double Dxz = (double)0;
  double Dyz = (double)0;
  double A[9l];
  double b[3l];
  const float *pt;
  signed long long int dx = (signed long long int)0;
  signed long long int dy = (signed long long int)0;
  signed long long int iter;
  signed int err;
  iter = (signed long long int)0;
  for( ; !(iter >= 5l); iter = iter + 1ll)
  {
    x = x + dx;
    y = y + dy;
    pt = map + (signed long int)((unsigned long int)x * xo) + (signed long int)((unsigned long int)y * yo) + (signed long int)((unsigned long int)z * zo);
    Dx = 0.5 * (double)((pt + (signed long int)((unsigned long int)+1 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)0 * zo)] - (pt + (signed long int)((unsigned long int)-1 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)0 * zo)]);
    Dy = 0.5 * (double)((pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)+1 * yo))[(signed long int)((unsigned long int)0 * zo)] - (pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)-1 * yo))[(signed long int)((unsigned long int)0 * zo)]);
    Dz = 0.5 * (double)((pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)+1 * zo)] - (pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)-1 * zo)]);
    Dxx = (double)((pt + (signed long int)((unsigned long int)+1 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)0 * zo)] + (pt + (signed long int)((unsigned long int)-1 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)0 * zo)]) - 2.0 * (double)(pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)0 * zo)];
    Dyy = (double)((pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)+1 * yo))[(signed long int)((unsigned long int)0 * zo)] + (pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)-1 * yo))[(signed long int)((unsigned long int)0 * zo)]) - 2.0 * (double)(pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)0 * zo)];
    Dzz = (double)((pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)+1 * zo)] + (pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)-1 * zo)]) - 2.0 * (double)(pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)0 * zo)];
    Dxy = 0.25 * (double)((((pt + (signed long int)((unsigned long int)+1 * xo) + (signed long int)((unsigned long int)+1 * yo))[(signed long int)((unsigned long int)0 * zo)] + (pt + (signed long int)((unsigned long int)-1 * xo) + (signed long int)((unsigned long int)-1 * yo))[(signed long int)((unsigned long int)0 * zo)]) - (pt + (signed long int)((unsigned long int)-1 * xo) + (signed long int)((unsigned long int)+1 * yo))[(signed long int)((unsigned long int)0 * zo)]) - (pt + (signed long int)((unsigned long int)+1 * xo) + (signed long int)((unsigned long int)-1 * yo))[(signed long int)((unsigned long int)0 * zo)]);
    Dxz = 0.25 * (double)((((pt + (signed long int)((unsigned long int)+1 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)+1 * zo)] + (pt + (signed long int)((unsigned long int)-1 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)-1 * zo)]) - (pt + (signed long int)((unsigned long int)-1 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)+1 * zo)]) - (pt + (signed long int)((unsigned long int)+1 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)-1 * zo)]);
    Dyz = 0.25 * (double)((((pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)+1 * yo))[(signed long int)((unsigned long int)+1 * zo)] + (pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)-1 * yo))[(signed long int)((unsigned long int)-1 * zo)]) - (pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)-1 * yo))[(signed long int)((unsigned long int)+1 * zo)]) - (pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)+1 * yo))[(signed long int)((unsigned long int)-1 * zo)]);
    A[(signed long int)(0 + 0 * 3)] = Dxx;
    A[(signed long int)(1 + 1 * 3)] = Dyy;
    A[(signed long int)(2 + 2 * 3)] = Dzz;
    A[(signed long int)(1 + 0 * 3)] = Dxy;
    A[(signed long int)(0 + 1 * 3)] = A[(signed long int)(1 + 0 * 3)];
    A[(signed long int)(2 + 0 * 3)] = Dxz;
    A[(signed long int)(0 + 2 * 3)] = A[(signed long int)(2 + 0 * 3)];
    A[(signed long int)(2 + 1 * 3)] = Dyz;
    A[(signed long int)(1 + 2 * 3)] = A[(signed long int)(2 + 1 * 3)];
    b[(signed long int)0] = -Dx;
    b[(signed long int)1] = -Dy;
    b[(signed long int)2] = -Dz;
    err=vl_solve_linear_system_3(b, A, b);
    if(!(err == 0))
    {
      b[(signed long int)0] = (double)0;
      b[(signed long int)1] = (double)0;
      b[(signed long int)2] = (double)0;
      break;
    }

    dx = (signed long long int)(((b[(signed long int)0] > 0.6 ? (x < (signed long int)((signed int)width - 2) ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? 1 : 0) + ((b[(signed long int)0] < -0.6 ? (x > (signed long int)1 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? -1 : 0));
    dy = (signed long long int)(((b[(signed long int)1] > 0.6 ? (y < (signed long int)((signed int)height - 2) ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? 1 : 0) + ((b[(signed long int)1] < -0.6 ? (y > (signed long int)1 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? -1 : 0));
    if(dx == 0l && dy == 0l)
      break;

  }
  double peakScore = (double)(pt + (signed long int)((unsigned long int)0 * xo) + (signed long int)((unsigned long int)0 * yo))[(signed long int)((unsigned long int)0 * zo)] + 0.5 * (Dx * b[(signed long int)0] + Dy * b[(signed long int)1] + Dz * b[(signed long int)2]);
  double alpha = ((Dxx + Dyy) * (Dxx + Dyy)) / (Dxx * Dyy - Dxy * Dxy);
  double edgeScore;
  if(alpha < 0.000000)
    edgeScore = vl_infinity_d_link1.value;

  else
  {
    double return_value_sqrt_1;
    return_value_sqrt_1=sqrt((0.25 * alpha - (double)1 > (double)0 ? 0.25 * alpha - (double)1 : (double)0) * alpha);
    edgeScore = (0.5 * alpha - (double)1) + return_value_sqrt_1;
  }
  refined->xi = x;
  refined->yi = y;
  refined->zi = z;
  refined->x = (float)((double)x + b[(signed long int)0]);
  refined->y = (float)((double)y + b[(signed long int)1]);
  refined->z = (float)((double)z + b[(signed long int)2]);
  refined->peakScore = (float)peakScore;
  refined->edgeScore = (float)edgeScore;
  _Bool tmp_if_expr_3;
  double return_value_vl_abs_d_2;
  if(err == 0)
  {
    return_value_vl_abs_d_2=vl_abs_d_link2(b[(signed long int)0]);
    tmp_if_expr_3 = return_value_vl_abs_d_2 < 1.5 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_5;
  double return_value_vl_abs_d_4;
  if(tmp_if_expr_3)
  {
    return_value_vl_abs_d_4=vl_abs_d_link2(b[(signed long int)1]);
    tmp_if_expr_5 = return_value_vl_abs_d_4 < 1.5 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  _Bool tmp_if_expr_7;
  double return_value_vl_abs_d_6;
  if(tmp_if_expr_5)
  {
    return_value_vl_abs_d_6=vl_abs_d_link2(b[(signed long int)2]);
    tmp_if_expr_7 = return_value_vl_abs_d_6 < 1.5 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_7 = (_Bool)0;
  _Bool tmp_if_expr_8;
  if(tmp_if_expr_7)
    tmp_if_expr_8 = (float)0 <= refined->x ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_8 = (_Bool)0;
  _Bool tmp_if_expr_9;
  if(tmp_if_expr_8)
    tmp_if_expr_9 = refined->x <= (float)((signed int)width - 1) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_9 = (_Bool)0;
  _Bool tmp_if_expr_10;
  if(tmp_if_expr_9)
    tmp_if_expr_10 = (float)0 <= refined->y ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_10 = (_Bool)0;
  _Bool tmp_if_expr_11;
  if(tmp_if_expr_10)
    tmp_if_expr_11 = refined->y <= (float)((signed int)height - 1) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_11 = (_Bool)0;
  _Bool tmp_if_expr_12;
  if(tmp_if_expr_11)
    tmp_if_expr_12 = (float)0 <= refined->z ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_12 = (_Bool)0;
  _Bool tmp_if_expr_13;
  if(tmp_if_expr_12)
    tmp_if_expr_13 = refined->z <= (float)((signed int)depth - 1) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_13 = (_Bool)0;
  return (signed int)tmp_if_expr_13;
}

// vl_rodrigues
// file vl/rodrigues.c line 27
extern void vl_rodrigues(double *R_pt, double *dR_pt, const double *om_pt)
{
  const double small = 1e-6;
  double th;
  th=sqrt(om_pt[(signed long int)0] * om_pt[(signed long int)0] + om_pt[(signed long int)1] * om_pt[(signed long int)1] + om_pt[(signed long int)2] * om_pt[(signed long int)2]);
  if(th < small)
  {
    R_pt[(signed long int)(0 + 3 * 0)] = 1.0;
    R_pt[(signed long int)(0 + 3 * 1)] = 0.0;
    R_pt[(signed long int)(0 + 3 * 2)] = 0.0;
    R_pt[(signed long int)(1 + 3 * 0)] = 0.0;
    R_pt[(signed long int)(1 + 3 * 1)] = 1.0;
    R_pt[(signed long int)(1 + 3 * 2)] = 0.0;
    R_pt[(signed long int)(2 + 3 * 0)] = 0.0;
    R_pt[(signed long int)(2 + 3 * 1)] = 0.0;
    R_pt[(signed long int)(2 + 3 * 2)] = 1.0;
    if(!(dR_pt == ((double *)NULL)))
    {
      dR_pt[(signed long int)(0 + 9 * 0)] = (double)0;
      dR_pt[(signed long int)(0 + 9 * 1)] = (double)0;
      dR_pt[(signed long int)(0 + 9 * 2)] = (double)0;
      dR_pt[(signed long int)(1 + 9 * 0)] = (double)0;
      dR_pt[(signed long int)(1 + 9 * 1)] = (double)0;
      dR_pt[(signed long int)(1 + 9 * 2)] = (double)1;
      dR_pt[(signed long int)(2 + 9 * 0)] = (double)0;
      dR_pt[(signed long int)(2 + 9 * 1)] = (double)-1;
      dR_pt[(signed long int)(2 + 9 * 2)] = (double)0;
      dR_pt[(signed long int)(3 + 9 * 0)] = (double)0;
      dR_pt[(signed long int)(3 + 9 * 1)] = (double)0;
      dR_pt[(signed long int)(3 + 9 * 2)] = (double)-1;
      dR_pt[(signed long int)(4 + 9 * 0)] = (double)0;
      dR_pt[(signed long int)(4 + 9 * 1)] = (double)0;
      dR_pt[(signed long int)(4 + 9 * 2)] = (double)0;
      dR_pt[(signed long int)(5 + 9 * 0)] = (double)1;
      dR_pt[(signed long int)(5 + 9 * 1)] = (double)0;
      dR_pt[(signed long int)(5 + 9 * 2)] = (double)0;
      dR_pt[(signed long int)(6 + 9 * 0)] = (double)0;
      dR_pt[(signed long int)(6 + 9 * 1)] = (double)1;
      dR_pt[(signed long int)(6 + 9 * 2)] = (double)0;
      dR_pt[(signed long int)(7 + 9 * 0)] = (double)-1;
      dR_pt[(signed long int)(7 + 9 * 1)] = (double)0;
      dR_pt[(signed long int)(7 + 9 * 2)] = (double)0;
      dR_pt[(signed long int)(8 + 9 * 0)] = (double)0;
      dR_pt[(signed long int)(8 + 9 * 1)] = (double)0;
      dR_pt[(signed long int)(8 + 9 * 2)] = (double)0;
    }

  }

  else
  {
    double x = om_pt[(signed long int)0] / th;
    double y = om_pt[(signed long int)1] / th;
    double z = om_pt[(signed long int)2] / th;
    double xx = x * x;
    double xy = x * y;
    double xz = x * z;
    double yy = y * y;
    double yz = y * z;
    double zz = z * z;
    const double yx = xy;
    const double zx = xz;
    const double zy = yz;
    double sth;
    sth=sin(th);
    double cth;
    cth=cos(th);
    double mcth = 1.0 - cth;
    R_pt[(signed long int)(0 + 3 * 0)] = (double)1 - mcth * (yy + zz);
    R_pt[(signed long int)(1 + 3 * 0)] = sth * z + mcth * xy;
    R_pt[(signed long int)(2 + 3 * 0)] = -sth * y + mcth * xz;
    R_pt[(signed long int)(0 + 3 * 1)] = -sth * z + mcth * yx;
    R_pt[(signed long int)(1 + 3 * 1)] = (double)1 - mcth * (zz + xx);
    R_pt[(signed long int)(2 + 3 * 1)] = sth * x + mcth * yz;
    R_pt[(signed long int)(0 + 3 * 2)] = sth * y + mcth * xz;
    R_pt[(signed long int)(1 + 3 * 2)] = -sth * x + mcth * yz;
    R_pt[(signed long int)(2 + 3 * 2)] = (double)1 - mcth * (xx + yy);
    if(!(dR_pt == ((double *)NULL)))
    {
      double a = sth / th;
      double b = mcth / th;
      double c = cth - a;
      double d = sth - (double)2 * b;
      dR_pt[(signed long int)(0 + 9 * 0)] = -d * (yy + zz) * x;
      dR_pt[(signed long int)(1 + 9 * 0)] = b * y + c * zx + d * xy * x;
      dR_pt[(signed long int)(2 + 9 * 0)] = (b * z - c * yx) + d * xz * x;
      dR_pt[(signed long int)(3 + 9 * 0)] = (b * y - c * zx) + d * xy * x;
      dR_pt[(signed long int)(4 + 9 * 0)] = (double)-2 * b * x - d * (zz + xx) * x;
      dR_pt[(signed long int)(5 + 9 * 0)] = a + c * xx + d * yz * x;
      dR_pt[(signed long int)(6 + 9 * 0)] = b * z + c * yx + d * zx * x;
      dR_pt[(signed long int)(7 + 9 * 0)] = (-a - c * xx) + d * zy * x;
      dR_pt[(signed long int)(8 + 9 * 0)] = (double)-2 * b * x - d * (yy + xx) * x;
      dR_pt[(signed long int)(0 + 9 * 1)] = (double)-2 * b * y - d * (yy + zz) * y;
      dR_pt[(signed long int)(1 + 9 * 1)] = b * x + c * zy + d * xy * y;
      dR_pt[(signed long int)(2 + 9 * 1)] = (-a - c * yy) + d * xz * y;
      dR_pt[(signed long int)(3 + 9 * 1)] = (b * x - c * zy) + d * xy * y;
      dR_pt[(signed long int)(4 + 9 * 1)] = -d * (zz + xx) * y;
      dR_pt[(signed long int)(5 + 9 * 1)] = b * z + c * xy + d * yz * y;
      dR_pt[(signed long int)(6 + 9 * 1)] = a + c * yy + d * zx * y;
      dR_pt[(signed long int)(7 + 9 * 1)] = (b * z - c * xy) + d * zy * y;
      dR_pt[(signed long int)(8 + 9 * 1)] = (double)-2 * b * y - d * (yy + xx) * y;
      dR_pt[(signed long int)(0 + 9 * 2)] = (double)-2 * b * z - d * (yy + zz) * z;
      dR_pt[(signed long int)(1 + 9 * 2)] = a + c * zz + d * xy * z;
      dR_pt[(signed long int)(2 + 9 * 2)] = (b * x - c * yz) + d * xz * z;
      dR_pt[(signed long int)(3 + 9 * 2)] = (-a - c * zz) + d * xy * z;
      dR_pt[(signed long int)(4 + 9 * 2)] = (double)-2 * b * z - d * (zz + xx) * z;
      dR_pt[(signed long int)(5 + 9 * 2)] = b * y + c * xz + d * yz * z;
      dR_pt[(signed long int)(6 + 9 * 2)] = b * x + c * yz + d * zx * z;
      dR_pt[(signed long int)(7 + 9 * 2)] = (b * y - c * xz) + d * zy * z;
      dR_pt[(signed long int)(8 + 9 * 2)] = -d * (yy + xx) * z;
    }

  }
}

// vl_round_d
// file vl/mathop.h line 212
static inline signed long int vl_round_d(double x)
{
  signed int return_value___builtin_lround_1;
  return_value___builtin_lround_1=__builtin_lround(x);
  return (signed long int)return_value___builtin_lround_1;
}

// vl_round_d_link1
// file vl/mathop.h line 212
static inline signed long int vl_round_d_link1(double x_link1)
{
  signed int return_value___builtin_lround_1_link1;
  return_value___builtin_lround_1_link1=__builtin_lround(x_link1);
  return (signed long int)return_value___builtin_lround_1_link1;
}

// vl_scalespace_delete
// file vl/scalespace.h line 74
extern void vl_scalespace_delete(struct _VlScaleSpace *self)
{
  if(!(self == ((struct _VlScaleSpace *)NULL)))
  {
    if(!(self->octaves == ((float **)NULL)))
    {
      signed long long int o = self->geom.firstOctave;
      for( ; self->geom.lastOctave >= o; o = o + 1ll)
        if(!(self->octaves[o + -self->geom.firstOctave] == ((float *)NULL)))
          vl_free((void *)self->octaves[o - self->geom.firstOctave]);

      vl_free((void *)self->octaves);
    }

    vl_free((void *)self);
  }

}

// vl_scalespace_get_default_geometry
// file vl/scalespace.h line 69
extern struct _VlScaleSpaceGeometry vl_scalespace_get_default_geometry(unsigned long long int width, unsigned long long int height)
{
  struct _VlScaleSpaceGeometry geom;
  geom.width = width;
  geom.height = height;
  geom.firstOctave = (signed long long int)0;
  double return_value_vl_log2_d_1;
  return_value_vl_log2_d_1=vl_log2_d_link2((double)(width < height ? width : height));
  double return_value_floor_2;
  return_value_floor_2=floor(return_value_vl_log2_d_1);
  double tmp_if_expr_5;
  double return_value_vl_log2_d_3;
  double return_value_floor_4;
  if(return_value_floor_2 + -3.000000 > 0.000000)
  {
    return_value_vl_log2_d_3=vl_log2_d_link2((double)(width < height ? width : height));
    return_value_floor_4=floor(return_value_vl_log2_d_3);
    tmp_if_expr_5 = return_value_floor_4 - (double)3;
  }

  else
    tmp_if_expr_5 = (double)0;
  geom.lastOctave = (signed long long int)tmp_if_expr_5;
  geom.octaveResolution = (unsigned long long int)3;
  geom.octaveFirstSubdivision = (signed long long int)0;
  geom.octaveLastSubdivision = (signed long long int)(geom.octaveResolution - (unsigned long int)1);
  double return_value_pow_6;
  return_value_pow_6=pow(2.0, 1.0 / (double)geom.octaveResolution);
  geom.baseScale = 1.6 * return_value_pow_6;
  geom.nominalScale = 0.5;
  return geom;
}

// vl_scalespace_get_geometry
// file vl/scalespace.h line 87
extern struct _VlScaleSpaceGeometry vl_scalespace_get_geometry(const struct _VlScaleSpace *self)
{
  return self->geom;
}

// vl_scalespace_get_level
// file vl/scalespace.h line 90
extern float * vl_scalespace_get_level(struct _VlScaleSpace *self, signed long long int o, signed long long int s)
{
  struct _VlScaleSpaceOctaveGeometry ogeom;
  ogeom=vl_scalespace_get_octave_geometry(self, o);
  float *octave = self->octaves[o - self->geom.firstOctave];
  return octave + (signed long int)(ogeom.width * ogeom.height * (unsigned long int)(s - self->geom.octaveFirstSubdivision));
}

// vl_scalespace_get_level_const
// file vl/scalespace.c line 415
extern const float * vl_scalespace_get_level_const(const struct _VlScaleSpace *self, signed long long int o, signed long long int s)
{
  float *return_value_vl_scalespace_get_level_1;
  return_value_vl_scalespace_get_level_1=vl_scalespace_get_level((struct _VlScaleSpace *)self, o, s);
  return return_value_vl_scalespace_get_level_1;
}

// vl_scalespace_get_level_sigma
// file vl/scalespace.h line 94
extern double vl_scalespace_get_level_sigma(const struct _VlScaleSpace *self, signed long long int o, signed long long int s)
{
  double return_value_pow_1;
  return_value_pow_1=pow(2.0, (double)o + (double)s / (double)self->geom.octaveResolution);
  return self->geom.baseScale * return_value_pow_1;
}

// vl_scalespace_get_octave_geometry
// file vl/scalespace.h line 88
extern struct _VlScaleSpaceOctaveGeometry vl_scalespace_get_octave_geometry(const struct _VlScaleSpace *self, signed long long int o)
{
  struct _VlScaleSpaceOctaveGeometry ogeom;
  unsigned long long int tmp_if_expr_1;
  if(-o >= 0l)
    tmp_if_expr_1 = self->geom.width << -o;

  else
    tmp_if_expr_1 = self->geom.width >> -(-o);
  ogeom.width = tmp_if_expr_1;
  unsigned long long int tmp_if_expr_2;
  if(-o >= 0l)
    tmp_if_expr_2 = self->geom.height << -o;

  else
    tmp_if_expr_2 = self->geom.height >> -(-o);
  ogeom.height = tmp_if_expr_2;
  ogeom.step=pow(2.0, (double)o);
  return ogeom;
}

// vl_scalespace_new
// file vl/scalespace.c line 536
extern struct _VlScaleSpace * vl_scalespace_new(unsigned long long int width, unsigned long long int height)
{
  struct _VlScaleSpaceGeometry geom;
  geom=vl_scalespace_get_default_geometry(width, height);
  struct _VlScaleSpace *return_value_vl_scalespace_new_with_geometry_1;
  return_value_vl_scalespace_new_with_geometry_1=vl_scalespace_new_with_geometry(geom);
  return return_value_vl_scalespace_new_with_geometry_1;
}

// vl_scalespace_new_copy
// file vl/scalespace.c line 604
extern struct _VlScaleSpace * vl_scalespace_new_copy(struct _VlScaleSpace *self)
{
  signed long long int o;
  struct _VlScaleSpace *copy;
  copy=vl_scalespace_new_shallow_copy(self);
  if(copy == ((struct _VlScaleSpace *)NULL))
    return (struct _VlScaleSpace *)(void *)0;

  else
  {
    o = self->geom.firstOctave;
    for( ; self->geom.lastOctave >= o; o = o + 1ll)
    {
      struct _VlScaleSpaceOctaveGeometry ogeom;
      ogeom=vl_scalespace_get_octave_geometry(self, o);
      unsigned long long int numSubevels = (unsigned long long int)((self->geom.octaveLastSubdivision - self->geom.octaveFirstSubdivision) + (signed long int)1);
      memcpy((void *)copy->octaves[o - self->geom.firstOctave], (const void *)self->octaves[o - self->geom.firstOctave], ogeom.width * ogeom.height * numSubevels * sizeof(float) /*4ul*/ );
    }
    return copy;
  }
}

// vl_scalespace_new_shallow_copy
// file vl/scalespace.c line 629
extern struct _VlScaleSpace * vl_scalespace_new_shallow_copy(struct _VlScaleSpace *self)
{
  struct _VlScaleSpace *return_value_vl_scalespace_new_with_geometry_1;
  return_value_vl_scalespace_new_with_geometry_1=vl_scalespace_new_with_geometry(self->geom);
  return return_value_vl_scalespace_new_with_geometry_1;
}

// vl_scalespace_new_with_geometry
// file vl/scalespace.h line 71
extern struct _VlScaleSpace * vl_scalespace_new_with_geometry(struct _VlScaleSpaceGeometry geom)
{
  signed long long int o;
  unsigned long long int numSublevels = (unsigned long long int)((geom.octaveLastSubdivision - geom.octaveFirstSubdivision) + (signed long int)1);
  unsigned long long int numOctaves = (unsigned long long int)((geom.lastOctave - geom.firstOctave) + (signed long int)1);
  struct _VlScaleSpace *self;
  numOctaves = (unsigned long long int)((geom.lastOctave - geom.firstOctave) + (signed long int)1);
  numSublevels = (unsigned long long int)((geom.octaveLastSubdivision - geom.octaveFirstSubdivision) + (signed long int)1);
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc((unsigned long int)1, sizeof(struct _VlScaleSpace) /*80ul*/ );
  self = (struct _VlScaleSpace *)return_value_vl_calloc_1;
  void *return_value_vl_calloc_2;
  if(!(self == ((struct _VlScaleSpace *)NULL)))
  {
    self->geom = geom;
    return_value_vl_calloc_2=vl_calloc(numOctaves, sizeof(float *) /*8ul*/ );
    self->octaves = (float **)return_value_vl_calloc_2;
    if(!(self->octaves == ((float **)NULL)))
    {
      o = self->geom.firstOctave;
      for( ; self->geom.lastOctave >= o; o = o + 1ll)
      {
        struct _VlScaleSpaceOctaveGeometry ogeom;
        ogeom=vl_scalespace_get_octave_geometry(self, o);
        unsigned long long int octaveSize = ogeom.width * ogeom.height * numSublevels;
        void *return_value_vl_malloc_3;
        return_value_vl_malloc_3=vl_malloc(octaveSize * sizeof(float) /*4ul*/ );
        self->octaves[o - self->geom.firstOctave] = (float *)return_value_vl_malloc_3;
        if(self->octaves[o + -self->geom.firstOctave] == ((float *)NULL))
          goto err_alloc_octaves;

      }
      return self;

    err_alloc_octaves:
      ;
      o = self->geom.firstOctave;
      for( ; self->geom.lastOctave >= o; o = o + 1ll)
        if(!(self->octaves[o + -self->geom.firstOctave] == ((float *)NULL)))
          vl_free((void *)self->octaves[o - self->geom.firstOctave]);

    }


  err_alloc_octave_list:
    ;
    vl_free((void *)self);
  }


err_alloc_self:
  ;
  return (struct _VlScaleSpace *)(void *)0;
}

// vl_scalespace_put_image
// file vl/scalespace.h line 81
extern void vl_scalespace_put_image(struct _VlScaleSpace *self, const float *image)
{
  signed long long int o;
  _vl_scalespace_start_octave_from_image(self, image, self->geom.firstOctave);
  _vl_scalespace_fill_octave(self, self->geom.firstOctave);
  o = self->geom.firstOctave + (signed long int)1;
  for( ; self->geom.lastOctave >= o; o = o + 1ll)
  {
    _vl_scalespace_start_octave_from_previous_octave(self, o);
    _vl_scalespace_fill_octave(self, o);
  }
}

// vl_scalespacegeometry_is_equal
// file vl/scalespace.h line 45
extern signed int vl_scalespacegeometry_is_equal(struct _VlScaleSpaceGeometry a, struct _VlScaleSpaceGeometry b)
{
  return (signed int)(a.width == b.width && a.height == b.height && a.firstOctave == b.firstOctave && a.lastOctave == b.lastOctave && a.octaveResolution == b.octaveResolution && a.octaveFirstSubdivision == b.octaveLastSubdivision && IEEE_FLOAT_EQUAL(a.baseScale, b.baseScale) && IEEE_FLOAT_EQUAL(a.nominalScale, b.nominalScale));
}

// vl_set_alloc_func
// file vl/generic.c line 1289
extern void vl_set_alloc_func(void * (*malloc_func)(unsigned long int), void * (*realloc_func)(void *, unsigned long int), void * (*calloc_func)(unsigned long int, unsigned long int), void (*free_func)(void *))
{
  struct _VlState *state;
  vl_lock_state();
  state=vl_get_state();
  state->malloc_func = malloc_func;
  state->realloc_func = realloc_func;
  state->calloc_func = calloc_func;
  state->free_func = free_func;
  vl_unlock_state();
}

// vl_set_last_error
// file vl/generic.h line 132
extern signed int vl_set_last_error(signed int error, const char *errorMessage, ...)
{
  struct _VlThreadState *state;
  state=vl_get_thread_specific_state();
  void **args = (void **)&errorMessage;
  if(!(errorMessage == ((const char *)NULL)))
    vsnprintf(state->lastErrorMessage, sizeof(char [1024l]) /*1024ul*/  / sizeof(char) /*1ul*/ , errorMessage, args);

  else
    state->lastErrorMessage[(signed long int)0] = (char)0;
  state->lastError = error;
  args = ((void **)NULL);
  return error;
}

// vl_set_num_threads
// file vl/generic.c line 1208
extern void vl_set_num_threads(unsigned long long int numThreads)
{
  if(numThreads == 0ul)
  {
    signed int return_value_omp_get_max_threads_1;
    return_value_omp_get_max_threads_1=omp_get_max_threads();
    numThreads = (unsigned long long int)return_value_omp_get_max_threads_1;
  }

  struct _VlState *return_value_vl_get_state_2;
  return_value_vl_get_state_2=vl_get_state();
  return_value_vl_get_state_2->numThreads = numThreads;
}

// vl_set_printf_func
// file vl/generic.c line 1372
extern void vl_set_printf_func(signed int (*printf_func)(const char *, ...))
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return_value_vl_get_state_1->printf_func = printf_func != ((signed int (*)(const char *, ...))NULL) ? printf_func : do_nothing_printf;
}

// vl_set_simd_enabled
// file vl/generic.c line 1072
extern void vl_set_simd_enabled(signed int x)
{
  struct _VlState *return_value_vl_get_state_1;
  return_value_vl_get_state_1=vl_get_state();
  return_value_vl_get_state_1->simdEnabled = x;
}

// vl_slic_segment
// file vl/slic.c line 170
extern void vl_slic_segment(unsigned int *segmentation, const float *image, unsigned long long int width, unsigned long long int height, unsigned long long int numChannels, unsigned long long int regionSize, float regularization, unsigned long long int minRegionSize)
{
  signed long long int i;
  signed long long int x;
  signed long long int y;
  signed long long int u;
  signed long long int v;
  signed long long int k;
  signed long long int vl_slic_segment__1__region;
  unsigned long long int iter;
  unsigned long long int numRegionsX;
  double return_value_ceil_1;
  return_value_ceil_1=ceil((double)width / (double)regionSize);
  numRegionsX = (unsigned long long int)return_value_ceil_1;
  unsigned long long int numRegionsY;
  double return_value_ceil_2;
  return_value_ceil_2=ceil((double)height / (double)regionSize);
  numRegionsY = (unsigned long long int)return_value_ceil_2;
  const unsigned long long int numRegions = numRegionsX * numRegionsY;
  const unsigned long long int numPixels = width * height;
  float *centers;
  float *edgeMap;
  float previousEnergy = vl_infinity_f_link3.value;
  float startingEnergy;
  unsigned int *masses;
  const unsigned long long int maxNumIterations = (const unsigned long long int)100;
  void *return_value_vl_calloc_3;
  return_value_vl_calloc_3=vl_calloc(numPixels, sizeof(float) /*4ul*/ );
  edgeMap = (float *)return_value_vl_calloc_3;
  void *return_value_vl_malloc_4;
  return_value_vl_malloc_4=vl_malloc(sizeof(unsigned int) /*4ul*/  * numPixels);
  masses = (unsigned int *)return_value_vl_malloc_4;
  void *return_value_vl_malloc_5;
  return_value_vl_malloc_5=vl_malloc(sizeof(float) /*4ul*/  * ((unsigned long int)2 + numChannels) * numRegions);
  centers = (float *)return_value_vl_malloc_5;
  k = (signed long long int)0;
  for( ; !(k >= (signed long int)(signed int)numChannels); k = k + 1ll)
  {
    y = (signed long long int)1;
    for( ; !(y >= (signed long int)((signed int)height + -1)); y = y + 1ll)
    {
      x = (signed long long int)1;
      for( ; !(x >= (signed long int)((signed int)width + -1)); x = x + 1ll)
      {
        float a = image[(signed long int)((unsigned long int)(x - (signed long int)1) + (unsigned long int)y * width + (unsigned long int)k * width * height)];
        float b = image[(signed long int)((unsigned long int)(x + (signed long int)1) + (unsigned long int)y * width + (unsigned long int)k * width * height)];
        float c = image[(signed long int)((unsigned long int)x + (unsigned long int)(y + (signed long int)1) * width + (unsigned long int)k * width * height)];
        float d = image[(signed long int)((unsigned long int)x + (unsigned long int)(y - (signed long int)1) * width + (unsigned long int)k * width * height)];
        edgeMap[(signed long int)((unsigned long int)x + (unsigned long int)y * width)] = edgeMap[(signed long int)((unsigned long int)x + (unsigned long int)y * width)] + (a - b) * (a - b) + (c - d) * (c - d);
      }
    }
  }
  i = (signed long long int)0;
  v = (signed long long int)0;
  signed long long int tmp_post_8;
  signed long long int tmp_post_9;
  signed long long int tmp_post_10;
  for( ; !(v >= (signed long int)(signed int)numRegionsY); v = v + 1ll)
  {
    u = (signed long long int)0;
    for( ; !(u >= (signed long int)(signed int)numRegionsX); u = u + 1ll)
    {
      signed long long int vl_slic_segment__1__2__1__1__1__xp;
      signed long long int vl_slic_segment__1__2__1__1__1__yp;
      signed long long int vl_slic_segment__1__2__1__1__1__centerx = (signed long long int)0;
      signed long long int vl_slic_segment__1__2__1__1__1__centery = (signed long long int)0;
      float minEdgeValue = vl_infinity_f_link3.value;
      signed long int return_value_vl_round_d_6;
      return_value_vl_round_d_6=vl_round_d_link1((double)regionSize * ((double)u + 0.5));
      x = (signed long long int)return_value_vl_round_d_6;
      signed long int return_value_vl_round_d_7;
      return_value_vl_round_d_7=vl_round_d_link1((double)regionSize * ((double)v + 0.5));
      y = (signed long long int)return_value_vl_round_d_7;
      x = (x < (signed long int)((signed int)width - 1) ? x : (signed long int)((signed int)width - 1)) > (signed long int)0 ? (x < (signed long int)((signed int)width - 1) ? x : (signed long int)((signed int)width - 1)) : (signed long int)0;
      y = (y < (signed long int)((signed int)height - 1) ? y : (signed long int)((signed int)height - 1)) > (signed long int)0 ? (y < (signed long int)((signed int)height - 1) ? y : (signed long int)((signed int)height - 1)) : (signed long int)0;
      vl_slic_segment__1__2__1__1__1__yp = (signed long int)0 > y - (signed long int)1 ? (signed long int)0 : y - (signed long int)1;
      for( ; ((signed long int)((signed int)height + -1) >= 1l + y ? 1l + y : (signed long int)((signed int)height + -1)) >= vl_slic_segment__1__2__1__1__1__yp; vl_slic_segment__1__2__1__1__1__yp = vl_slic_segment__1__2__1__1__1__yp + 1ll)
      {
        vl_slic_segment__1__2__1__1__1__xp = (signed long int)0 > x - (signed long int)1 ? (signed long int)0 : x - (signed long int)1;
        for( ; ((signed long int)((signed int)width + -1) >= 1l + x ? 1l + x : (signed long int)((signed int)width + -1)) >= vl_slic_segment__1__2__1__1__1__xp; vl_slic_segment__1__2__1__1__1__xp = vl_slic_segment__1__2__1__1__1__xp + 1ll)
        {
          float thisEdgeValue = edgeMap[(signed long int)((unsigned long int)vl_slic_segment__1__2__1__1__1__xp + (unsigned long int)vl_slic_segment__1__2__1__1__1__yp * width)];
          if(thisEdgeValue < minEdgeValue)
          {
            minEdgeValue = thisEdgeValue;
            vl_slic_segment__1__2__1__1__1__centerx = vl_slic_segment__1__2__1__1__1__xp;
            vl_slic_segment__1__2__1__1__1__centery = vl_slic_segment__1__2__1__1__1__yp;
          }

        }
      }
      tmp_post_8 = i;
      i = i + 1ll;
      centers[tmp_post_8] = (float)vl_slic_segment__1__2__1__1__1__centerx;
      tmp_post_9 = i;
      i = i + 1ll;
      centers[tmp_post_9] = (float)vl_slic_segment__1__2__1__1__1__centery;
      k = (signed long long int)0;
      for( ; !(k >= (signed long int)(signed int)numChannels); k = k + 1ll)
      {
        tmp_post_10 = i;
        i = i + 1ll;
        centers[tmp_post_10] = image[(signed long int)((unsigned long int)vl_slic_segment__1__2__1__1__1__centerx + (unsigned long int)vl_slic_segment__1__2__1__1__1__centery * width + (unsigned long int)k * width * height)];
      }
    }
  }
  iter = (unsigned long long int)0;
  double tmp_if_expr_13;
  for( ; !(iter >= maxNumIterations); iter = iter + 1ull)
  {
    float factor = regularization / (float)(regionSize * regionSize);
    float energy = (float)0;
    y = (signed long long int)0;
    for( ; !(y >= (signed long int)(signed int)height); y = y + 1ll)
    {
      x = (signed long long int)0;
      for( ; !(x >= (signed long int)(signed int)width); x = x + 1ll)
      {
        signed long long int vl_slic_segment__1__3__1__1__1__1__1__u;
        double return_value_floor_11;
        return_value_floor_11=floor((double)x / (double)regionSize - 0.5);
        vl_slic_segment__1__3__1__1__1__1__1__u = (signed long long int)return_value_floor_11;
        signed long long int vl_slic_segment__1__3__1__1__1__1__1__v;
        double return_value_floor_12;
        return_value_floor_12=floor((double)y / (double)regionSize - 0.5);
        vl_slic_segment__1__3__1__1__1__1__1__v = (signed long long int)return_value_floor_12;
        signed long long int up;
        signed long long int vp;
        float minDistance = vl_infinity_f_link3.value;
        vp = (signed long int)0 > vl_slic_segment__1__3__1__1__1__1__1__v ? (signed long int)0 : vl_slic_segment__1__3__1__1__1__1__1__v;
        for( ; ((signed long int)((signed int)numRegionsY + -1) >= 1l + vl_slic_segment__1__3__1__1__1__1__1__v ? 1l + vl_slic_segment__1__3__1__1__1__1__1__v : (signed long int)((signed int)numRegionsY + -1)) >= vp; vp = vp + 1ll)
        {
          up = (signed long int)0 > vl_slic_segment__1__3__1__1__1__1__1__u ? (signed long int)0 : vl_slic_segment__1__3__1__1__1__1__1__u;
          for( ; ((signed long int)((signed int)numRegionsX + -1) >= 1l + vl_slic_segment__1__3__1__1__1__1__1__u ? 1l + vl_slic_segment__1__3__1__1__1__1__1__u : (signed long int)((signed int)numRegionsX + -1)) >= up; up = up + 1ll)
          {
            signed long long int region = (signed long long int)((unsigned long int)up + (unsigned long int)vp * numRegionsX);
            float centerx = centers[(signed long int)(((unsigned long int)2 + numChannels) * (unsigned long int)region + (unsigned long int)0)];
            float centery = centers[(signed long int)(((unsigned long int)2 + numChannels) * (unsigned long int)region + (unsigned long int)1)];
            float spatial = ((float)x - centerx) * ((float)x - centerx) + ((float)y - centery) * ((float)y - centery);
            float appearance = (float)0;
            float distance;
            k = (signed long long int)0;
            for( ; !(k >= (signed long int)(signed int)numChannels); k = k + 1ll)
            {
              float centerz = centers[(signed long int)(((unsigned long int)2 + numChannels) * (unsigned long int)region + (unsigned long int)k + (unsigned long int)2)];
              float z = image[(signed long int)((unsigned long int)x + (unsigned long int)y * width + (unsigned long int)k * width * height)];
              appearance = appearance + (z - centerz) * (z - centerz);
            }
            distance = appearance + factor * spatial;
            if(minDistance > distance)
            {
              minDistance = distance;
              segmentation[(signed long int)((unsigned long int)x + (unsigned long int)y * width)] = (unsigned int)region;
            }

          }
        }
        energy = energy + minDistance;
      }
    }
    if(iter == 0ul)
      startingEnergy = energy;

    else
      if((double)(previousEnergy + -energy) < 1e-5 * (double)(startingEnergy + -energy))
        break;

    previousEnergy = energy;
    memset((void *)masses, 0, sizeof(unsigned int) /*4ul*/  * width * height);
    memset((void *)centers, 0, sizeof(float) /*4ul*/  * ((unsigned long int)2 + numChannels) * numRegions);
    y = (signed long long int)0;
    for( ; !(y >= (signed long int)(signed int)height); y = y + 1ll)
    {
      x = (signed long long int)0;
      for( ; !(x >= (signed long int)(signed int)width); x = x + 1ll)
      {
        signed long long int pixel = (signed long long int)((unsigned long int)x + (unsigned long int)y * width);
        signed long long int vl_slic_segment__1__3__1__4__1__1__1__region = (signed long long int)segmentation[pixel];
        masses[vl_slic_segment__1__3__1__4__1__1__1__region] = masses[vl_slic_segment__1__3__1__4__1__1__1__region] + 1u;
        centers[(signed long int)((unsigned long int)vl_slic_segment__1__3__1__4__1__1__1__region * ((unsigned long int)2 + numChannels) + (unsigned long int)0)] = centers[(signed long int)((unsigned long int)vl_slic_segment__1__3__1__4__1__1__1__region * ((unsigned long int)2 + numChannels) + (unsigned long int)0)] + (float)x;
        centers[(signed long int)((unsigned long int)vl_slic_segment__1__3__1__4__1__1__1__region * ((unsigned long int)2 + numChannels) + (unsigned long int)1)] = centers[(signed long int)((unsigned long int)vl_slic_segment__1__3__1__4__1__1__1__region * ((unsigned long int)2 + numChannels) + (unsigned long int)1)] + (float)y;
        k = (signed long long int)0;
        for( ; !(k >= (signed long int)(signed int)numChannels); k = k + 1ll)
          centers[(signed long int)((unsigned long int)vl_slic_segment__1__3__1__4__1__1__1__region * ((unsigned long int)2 + numChannels) + (unsigned long int)k + (unsigned long int)2)] = centers[(signed long int)((unsigned long int)vl_slic_segment__1__3__1__4__1__1__1__region * ((unsigned long int)2 + numChannels) + (unsigned long int)k + (unsigned long int)2)] + image[(signed long int)((unsigned long int)x + (unsigned long int)y * width + (unsigned long int)k * width * height)];
      }
    }
    vl_slic_segment__1__region = (signed long long int)0;
    for( ; !(vl_slic_segment__1__region >= (signed long int)(signed int)numRegions); vl_slic_segment__1__region = vl_slic_segment__1__region + 1ll)
    {
      float mass;
      if((double)masses[vl_slic_segment__1__region] > 1e-8)
        tmp_if_expr_13 = (double)masses[vl_slic_segment__1__region];

      else
        tmp_if_expr_13 = 1e-8;
      mass = (float)tmp_if_expr_13;
      i = (signed long long int)(((unsigned long int)2 + numChannels) * (unsigned long int)vl_slic_segment__1__region);
      for( ; !(i >= (1l + vl_slic_segment__1__region) * (signed long int)(2 + (signed int)numChannels)); i = i + 1ll)
        centers[i] = centers[i] / mass;
    }
  }
  vl_free((void *)masses);
  vl_free((void *)centers);
  vl_free((void *)edgeMap);
  unsigned int *cleaned;
  void *return_value_vl_calloc_14;
  return_value_vl_calloc_14=vl_calloc(numPixels, sizeof(unsigned int) /*4ul*/ );
  cleaned = (unsigned int *)return_value_vl_calloc_14;
  unsigned long long int *segment;
  void *return_value_vl_malloc_15;
  return_value_vl_malloc_15=vl_malloc(sizeof(unsigned long long int) /*8ul*/  * numPixels);
  segment = (unsigned long long int *)return_value_vl_malloc_15;
  unsigned long long int segmentSize;
  unsigned int label;
  unsigned int cleanedLabel;
  unsigned long long int numExpanded;
  const signed long long int dx[4l] = { (const signed long long int)+1, (const signed long long int)-1, (const signed long long int)0, (const signed long long int)0 };
  const signed long long int dy[4l] = { (const signed long long int)0, (const signed long long int)0, (const signed long long int)+1, (const signed long long int)-1 };
  signed long long int direction;
  signed long long int vl_slic_segment__1__4__pixel = (signed long long int)0;
  unsigned long long int tmp_post_16;
  unsigned long long int tmp_post_17;
  unsigned long long int tmp_post_18;
  for( ; !(vl_slic_segment__1__4__pixel >= (signed long int)(signed int)numPixels); vl_slic_segment__1__4__pixel = vl_slic_segment__1__4__pixel + 1ll)
    if(cleaned[vl_slic_segment__1__4__pixel] == 0u)
    {
      label = segmentation[vl_slic_segment__1__4__pixel];
      numExpanded = (unsigned long long int)0;
      segmentSize = (unsigned long long int)0;
      tmp_post_16 = segmentSize;
      segmentSize = segmentSize + 1ull;
      segment[(signed long int)tmp_post_16] = (unsigned long long int)vl_slic_segment__1__4__pixel;
      cleanedLabel = label + (unsigned int)1;
      cleaned[vl_slic_segment__1__4__pixel] = label + (unsigned int)1;
      x = (signed long long int)((unsigned long int)vl_slic_segment__1__4__pixel % width);
      y = (signed long long int)((unsigned long int)vl_slic_segment__1__4__pixel / width);
      direction = (signed long long int)0;
      for( ; !(direction >= 4l); direction = direction + 1ll)
      {
        signed long long int xp = x + dx[direction];
        signed long long int yp = y + dy[direction];
        signed long long int neighbor = (signed long long int)((unsigned long int)xp + (unsigned long int)yp * width);
        if(xp >= 0l && yp >= 0l && !(xp >= (signed long int)(signed int)width) && !(yp >= (signed long int)(signed int)height))
        {
          if(!(cleaned[neighbor] == 0u))
            cleanedLabel = cleaned[neighbor];

        }

      }
      while(!(numExpanded >= segmentSize))
      {
        signed long long int open;
        tmp_post_17 = numExpanded;
        numExpanded = numExpanded + 1ull;
        open = (signed long long int)segment[(signed long int)tmp_post_17];
        x = (signed long long int)((unsigned long int)open % width);
        y = (signed long long int)((unsigned long int)open / width);
        direction = (signed long long int)0;
        for( ; !(direction >= 4l); direction = direction + 1ll)
        {
          signed long long int vl_slic_segment__1__4__1__1__2__1__1__xp = x + dx[direction];
          signed long long int vl_slic_segment__1__4__1__1__2__1__1__yp = y + dy[direction];
          signed long long int vl_slic_segment__1__4__1__1__2__1__1__neighbor = (signed long long int)((unsigned long int)vl_slic_segment__1__4__1__1__2__1__1__xp + (unsigned long int)vl_slic_segment__1__4__1__1__2__1__1__yp * width);
          if(vl_slic_segment__1__4__1__1__2__1__1__xp >= 0l && vl_slic_segment__1__4__1__1__2__1__1__yp >= 0l && !(vl_slic_segment__1__4__1__1__2__1__1__xp >= (signed long int)(signed int)width) && !(vl_slic_segment__1__4__1__1__2__1__1__yp >= (signed long int)(signed int)height))
          {
            if(cleaned[vl_slic_segment__1__4__1__1__2__1__1__neighbor] == 0u)
            {
              if(segmentation[vl_slic_segment__1__4__1__1__2__1__1__neighbor] == label)
              {
                cleaned[vl_slic_segment__1__4__1__1__2__1__1__neighbor] = label + (unsigned int)1;
                tmp_post_18 = segmentSize;
                segmentSize = segmentSize + 1ull;
                segment[(signed long int)tmp_post_18] = (unsigned long long int)vl_slic_segment__1__4__1__1__2__1__1__neighbor;
              }

            }

          }

        }
      }
      if(!(segmentSize >= minRegionSize))
        for( ; segmentSize >= 1ul; cleaned[(signed long int)segment[(signed long int)segmentSize]] = cleanedLabel)
          segmentSize = segmentSize - 1ull;

    }

  vl_slic_segment__1__4__pixel = (signed long long int)0;
  for( ; !(vl_slic_segment__1__4__pixel >= (signed long int)(signed int)numPixels); vl_slic_segment__1__4__pixel = vl_slic_segment__1__4__pixel + 1ll)
    cleaned[vl_slic_segment__1__4__pixel] = cleaned[vl_slic_segment__1__4__pixel] - 1u;
  memcpy((void *)segmentation, (const void *)cleaned, numPixels * sizeof(unsigned int) /*4ul*/ );
  vl_free((void *)cleaned);
  vl_free((void *)segment);
}

// vl_solve_linear_system_2
// file vl/mathop.c line 872
extern signed int vl_solve_linear_system_2(double *x, const double *A, const double *b)
{
  signed int err;
  double M[6l];
  M[(signed long int)0] = A[(signed long int)0];
  M[(signed long int)1] = A[(signed long int)1];
  M[(signed long int)2] = A[(signed long int)2];
  M[(signed long int)3] = A[(signed long int)3];
  M[(signed long int)4] = b[(signed long int)0];
  M[(signed long int)5] = b[(signed long int)1];
  err=vl_gaussian_elimination(M, (unsigned long long int)2, (unsigned long long int)3);
  x[(signed long int)0] = M[(signed long int)4];
  x[(signed long int)1] = M[(signed long int)5];
  return err;
}

// vl_solve_linear_system_3
// file vl/mathop.c line 839
extern signed int vl_solve_linear_system_3(double *x, const double *A, const double *b)
{
  signed int err;
  double M[12l];
  M[(signed long int)0] = A[(signed long int)0];
  M[(signed long int)1] = A[(signed long int)1];
  M[(signed long int)2] = A[(signed long int)2];
  M[(signed long int)3] = A[(signed long int)3];
  M[(signed long int)4] = A[(signed long int)4];
  M[(signed long int)5] = A[(signed long int)5];
  M[(signed long int)6] = A[(signed long int)6];
  M[(signed long int)7] = A[(signed long int)7];
  M[(signed long int)8] = A[(signed long int)8];
  M[(signed long int)9] = b[(signed long int)0];
  M[(signed long int)10] = b[(signed long int)1];
  M[(signed long int)11] = b[(signed long int)2];
  err=vl_gaussian_elimination(M, (unsigned long long int)3, (unsigned long long int)4);
  x[(signed long int)0] = M[(signed long int)9];
  x[(signed long int)1] = M[(signed long int)10];
  x[(signed long int)2] = M[(signed long int)11];
  return err;
}

// vl_sqrt_d
// file vl/mathop.h line 292
static inline double vl_sqrt_d(double x)
{
  double return_value___builtin_sqrt_1;
  return_value___builtin_sqrt_1=__builtin_sqrt(x);
  return return_value___builtin_sqrt_1;
}

// vl_sqrt_d_link1
// file vl/mathop.h line 292
static inline double vl_sqrt_d_link1(double x_link1)
{
  double return_value___builtin_sqrt_1_link1;
  return_value___builtin_sqrt_1_link1=__builtin_sqrt(x_link1);
  return return_value___builtin_sqrt_1_link1;
}

// vl_sqrt_f
// file vl/mathop.h line 303
static inline float vl_sqrt_f(float x)
{
  float return_value___builtin_sqrtf_1;
  return_value___builtin_sqrtf_1=__builtin_sqrtf(x);
  return return_value___builtin_sqrtf_1;
}

// vl_sqrt_f_link1
// file vl/mathop.h line 303
static inline float vl_sqrt_f_link1(float x_link1)
{
  float return_value___builtin_sqrtf_1_link1;
  return_value___builtin_sqrtf_1_link1=__builtin_sqrtf(x_link1);
  return return_value___builtin_sqrtf_1_link1;
}

// vl_static_configuration_to_string_copy
// file vl/host.c line 505
extern char * vl_static_configuration_to_string_copy()
{
  const char *hostString = "X64, little_endian";
  char compilerString[1024l];
  const char *libraryString = "POSIX_threads, OpenMP";
  snprintf(compilerString, (unsigned long int)1024, "GNU C %d LP64", 5 * 10000 + 3 * 100 + 1);
  char *string = ((char *)NULL);
  signed int length = 0;
  for( ; string == ((char *)NULL); length = length + 1)
  {
    if(length >= 1)
    {
      void *return_value_vl_malloc_1;
      return_value_vl_malloc_1=vl_malloc(sizeof(char) /*1ul*/  * (unsigned long int)length);
      string = (char *)return_value_vl_malloc_1;
      if(string == ((char *)NULL))
        break;

    }

    length=snprintf(string, (unsigned long int)length, "%s, %s, %s", hostString, (const void *)compilerString, libraryString);
  }
  return string;
}

// vl_string_basename
// file vl/stringop.c line 163
extern unsigned long long int vl_string_basename(char *destination, unsigned long long int destinationSize, const char *source, unsigned long long int maxNumStrippedExtensions)
{
  char c;
  unsigned long long int k = (unsigned long long int)0;
  unsigned long long int beg;
  unsigned long long int end;
  beg = (unsigned long long int)0;
  k = (unsigned long long int)0;
  do
  {
    c = source[(signed long int)k];
    if(c == 0)
      break;

    if((signed int)c == 47 || (signed int)c == 92)
      beg = k + (unsigned long int)1;

    k = k + 1ull;
  }
  while((_Bool)1);
  end=strlen(source);
  k = end;
  for( ; !(beg >= k); k = k - 1ull)
    if((signed int)source[-1l + (signed long int)k] == 46)
    {
      if(maxNumStrippedExtensions >= 1ul)
      {
        maxNumStrippedExtensions = maxNumStrippedExtensions - 1ull;
        end = k - (unsigned long int)1;
      }

    }

  unsigned long long int return_value_vl_string_copy_sub_1;
  return_value_vl_string_copy_sub_1=vl_string_copy_sub(destination, destinationSize, source + (signed long int)beg, source + (signed long int)end);
  return return_value_vl_string_copy_sub_1;
}

// vl_string_casei_cmp
// file vl/stringop.c line 377
extern signed int vl_string_casei_cmp(const char *string1, const char *string2)
{
  signed int tmp_statement_expression_1;
  signed int tmp_if_expr_3;
  const signed int **return_value___ctype_tolower_loc_2;
  const signed int **return_value___ctype_tolower_loc_4;
  signed int tmp_statement_expression_5;
  signed int tmp_if_expr_7;
  const signed int **return_value___ctype_tolower_loc_6;
  const signed int **return_value___ctype_tolower_loc_8;
  do
  {
    signed int vl_string_casei_cmp__1__1____res;
    return_value___ctype_tolower_loc_4=__ctype_tolower_loc();
    vl_string_casei_cmp__1__1____res = (*return_value___ctype_tolower_loc_4)[(signed long int)(signed int)(unsigned char)*string1];
    tmp_statement_expression_1 = vl_string_casei_cmp__1__1____res;
    signed int vl_string_casei_cmp__1__2____res;
    return_value___ctype_tolower_loc_8=__ctype_tolower_loc();
    vl_string_casei_cmp__1__2____res = (*return_value___ctype_tolower_loc_8)[(signed long int)(signed int)(unsigned char)*string2];
    tmp_statement_expression_5 = vl_string_casei_cmp__1__2____res;
    if(!(tmp_statement_expression_1 == tmp_statement_expression_5))
      break;

    if((signed int)*string1 == 0)
      return 0;

    string1 = string1 + 1l;
    string2 = string2 + 1l;
  }
  while((_Bool)1);
  signed int tmp_statement_expression_9;
  signed int __res;
  signed int tmp_if_expr_11;
  const signed int **return_value___ctype_tolower_loc_10;
  const signed int **return_value___ctype_tolower_loc_12;
  return_value___ctype_tolower_loc_12=__ctype_tolower_loc();
  __res = (*return_value___ctype_tolower_loc_12)[(signed long int)(signed int)(unsigned char)*string1];
  tmp_statement_expression_9 = __res;
  signed int tmp_statement_expression_13;
  signed int vl_string_casei_cmp__1__5____res;
  signed int tmp_if_expr_15;
  const signed int **return_value___ctype_tolower_loc_14;
  const signed int **return_value___ctype_tolower_loc_16;
  return_value___ctype_tolower_loc_16=__ctype_tolower_loc();
  vl_string_casei_cmp__1__5____res = (*return_value___ctype_tolower_loc_16)[(signed long int)(signed int)(unsigned char)*string2];
  tmp_statement_expression_13 = vl_string_casei_cmp__1__5____res;
  return (signed int)tmp_statement_expression_9 - (signed int)tmp_statement_expression_13;
}

// vl_string_copy
// file vl/stringop.c line 274
extern unsigned long long int vl_string_copy(char *destination, unsigned long long int destinationSize, const char *source)
{
  char c;
  unsigned long long int k = (unsigned long long int)0;
  const char *tmp_post_1;
  do
  {
    tmp_post_1 = source;
    source = source + 1l;
    c = *tmp_post_1;
    if(c == 0)
      break;

    if(!(destination == ((char *)NULL)) && !(1ul + k >= destinationSize))
      destination[(signed long int)k] = c;

    k = k + 1ull;
  }
  while((_Bool)1);
  if(destinationSize >= 1ul)
    destination[(signed long int)(k < destinationSize - (unsigned long int)1 ? k : destinationSize - (unsigned long int)1)] = (char)0;

  return k;
}

// vl_string_copy_sub
// file vl/stringop.c line 311
extern unsigned long long int vl_string_copy_sub(char *destination, unsigned long long int destinationSize, const char *beginning, const char *end)
{
  char c;
  unsigned long long int k = (unsigned long long int)0;
  const char *tmp_post_1;
  for( ; !(beginning >= end); k = k + 1ull)
  {
    tmp_post_1 = beginning;
    beginning = beginning + 1l;
    c = *tmp_post_1;
    if(c == 0)
      break;

    if(!(destination == ((char *)NULL)) && !(1ul + k >= destinationSize))
      destination[(signed long int)k] = c;

  }
  if(destinationSize >= 1ul)
    destination[(signed long int)(k < destinationSize - (unsigned long int)1 ? k : destinationSize - (unsigned long int)1)] = (char)0;

  return k;
}

// vl_string_find_char_rev
// file vl/stringop.c line 345
extern char * vl_string_find_char_rev(const char *beginning, const char *end, char c)
{
  const char *tmp_post_1;
  do
  {
    tmp_post_1 = end;
    end = end - 1l;
    if(tmp_post_1 == beginning)
      break;

    if(*end == c)
      return (char *)end;

  }
  while((_Bool)1);
  return ((char *)NULL);
}

// vl_string_length
// file vl/stringop.c line 362
extern unsigned long long int vl_string_length(const char *string)
{
  unsigned long long int i = (unsigned long long int)0;
  for( ; !(string[(signed long int)i] == 0); i = i + 1ull)
    ;
  return i;
}

// vl_string_parse_protocol
// file vl/stringop.c line 83
extern char * vl_string_parse_protocol(const char *string, signed int *protocol)
{
  const char *cpt;
  signed int dummy;
  if(protocol == ((signed int *)NULL))
    protocol = &dummy;

  cpt=strstr(string, "://");
  signed int return_value_strncmp_1;
  if(cpt == ((const char *)NULL))
  {
    *protocol = 0;
    cpt = string;
  }

  else
  {
    signed int return_value_strncmp_2;
    return_value_strncmp_2=strncmp(string, "ascii", (unsigned long int)(cpt - string));
    if(return_value_strncmp_2 == 0)
      *protocol = 1;

    else
    {
      return_value_strncmp_1=strncmp(string, "bin", (unsigned long int)(cpt - string));
      if(return_value_strncmp_1 == 0)
        *protocol = 2;

      else
        *protocol = -1;
    }
    cpt = cpt + (signed long int)3;
  }
  return (char *)cpt;
}

// vl_string_protocol_name
// file vl/stringop.c line 126
extern const char * vl_string_protocol_name(signed int protocol)
{
  switch(protocol)
  {
    case 1:
      return "ascii";
    case 2:
      return "bin";
    case 0:
      return "";
    default:
      return ((const char *)NULL);
  }
}

// vl_string_replace_wildcard
// file vl/stringop.c line 214
extern unsigned long long int vl_string_replace_wildcard(char *destination, unsigned long long int destinationSize, const char *source, char wildcardChar, char escapeChar, const char *replacement)
{
  char c;
  unsigned long long int k = (unsigned long long int)0;
  signed int escape = 0;
  const char *tmp_post_1;
  const char *tmp_post_2;
  do
  {
    tmp_post_1 = source;
    source = source + 1l;
    c = *tmp_post_1;
    if(c == 0)
      break;

    if(escape == 0 && c == escapeChar)
      escape = 1;

    else
    {
      if(escape == 0 && c == wildcardChar)
      {
        const char *repl = replacement;
        do
        {
          tmp_post_2 = repl;
          repl = repl + 1l;
          c = *tmp_post_2;
          if(c == 0)
            break;

          if(!(destination == ((char *)NULL)) && !(1ul + k >= destinationSize))
            destination[(signed long int)k] = c;

          k = k + 1ull;
        }
        while((_Bool)1);
      }

      else
      {
        if(!(destination == ((char *)NULL)) && !(1ul + k >= destinationSize))
          destination[(signed long int)k] = c;

        k = k + 1ull;
      }
      escape = 0;
    }
  }
  while((_Bool)1);
  if(destinationSize >= 1ul)
    destination[(signed long int)(k < destinationSize - (unsigned long int)1 ? k : destinationSize - (unsigned long int)1)] = (char)0;

  return k;
}

// vl_svd2
// file vl/mathop.c line 641
extern void vl_svd2(double *S, double *U, double *V, const double *M)
{
  double m11 = M[(signed long int)0];
  double m21 = M[(signed long int)1];
  double m12 = M[(signed long int)2];
  double m22 = M[(signed long int)3];
  double cu1 = m11;
  double su1 = m21;
  double norm;
  norm=sqrt(cu1 * cu1 + su1 * su1);
  double cu2;
  double su2;
  double cv2;
  double sv2;
  double f;
  double g;
  double h;
  double smin;
  double smax;
  cu1 = cu1 / norm;
  su1 = su1 / norm;
  f = cu1 * m11 + su1 * m21;
  g = cu1 * m12 + su1 * m22;
  h = -su1 * m12 + cu1 * m22;
  vl_lapack_dlasv2(&smin, &smax, &sv2, &cv2, &su2, &cu2, f, g, h);
  S[(signed long int)0] = smax;
  S[(signed long int)1] = (double)0;
  S[(signed long int)2] = (double)0;
  S[(signed long int)3] = smin;
  if(!(U == ((double *)NULL)))
  {
    U[(signed long int)0] = cu2 * cu1 - su2 * su1;
    U[(signed long int)1] = su2 * cu1 + cu2 * su1;
    U[(signed long int)2] = -cu2 * su1 - su2 * cu1;
    U[(signed long int)3] = -su2 * su1 + cu2 * cu1;
  }

  if(!(V == ((double *)NULL)))
  {
    V[(signed long int)0] = cv2;
    V[(signed long int)1] = sv2;
    V[(signed long int)2] = -sv2;
    V[(signed long int)3] = cv2;
  }

}

// vl_svm_delete
// file vl/svm.c line 1097
extern void vl_svm_delete(struct VlSvm_ *self)
{
  if(!(self->model == ((double *)NULL)))
  {
    vl_free((void *)self->model);
    self->model = ((double *)NULL);
  }

  if(!(self->alpha == ((double *)NULL)))
  {
    vl_free((void *)self->alpha);
    self->alpha = ((double *)NULL);
  }

  if(!(self->ownDataset == ((struct VlSvmDataset_ *)NULL)))
  {
    vl_svmdataset_delete(self->ownDataset);
    self->ownDataset = ((struct VlSvmDataset_ *)NULL);
  }

  vl_free((void *)self);
}

// vl_svm_get_bias
// file vl/svm.c line 1422
extern double vl_svm_get_bias(const struct VlSvm_ *self)
{
  return self->bias * self->biasMultiplier;
}

// vl_svm_get_bias_learning_rate
// file vl/svm.c line 1160
extern double vl_svm_get_bias_learning_rate(const struct VlSvm_ *self)
{
  return self->biasLearningRate;
}

// vl_svm_get_bias_multiplier
// file vl/svm.c line 1186
extern double vl_svm_get_bias_multiplier(const struct VlSvm_ *self)
{
  return self->biasMultiplier;
}

// vl_svm_get_diagnostic_frequency
// file vl/svm.c line 1260
extern unsigned long long int vl_svm_get_diagnostic_frequency(const struct VlSvm_ *self)
{
  return self->diagnosticFrequency;
}

// vl_svm_get_dimension
// file vl/svm.c line 1348
extern unsigned long long int vl_svm_get_dimension(struct VlSvm_ *self)
{
  return self->dimension;
}

// vl_svm_get_epsilon
// file vl/svm.c line 1135
extern double vl_svm_get_epsilon(const struct VlSvm_ *self)
{
  return self->epsilon;
}

// vl_svm_get_iteration_number
// file vl/svm.c line 1212
extern unsigned long long int vl_svm_get_iteration_number(const struct VlSvm_ *self)
{
  return self->iteration;
}

// vl_svm_get_lambda
// file vl/svm.c line 1300
extern double vl_svm_get_lambda(const struct VlSvm_ *self)
{
  return self->lambda;
}

// vl_svm_get_max_num_iterations
// file vl/svm.c line 1234
extern unsigned long long int vl_svm_get_max_num_iterations(const struct VlSvm_ *self)
{
  return self->maxNumIterations;
}

// vl_svm_get_model
// file vl/svm.c line 1374
extern const double * vl_svm_get_model(const struct VlSvm_ *self)
{
  return self->model;
}

// vl_svm_get_num_data
// file vl/svm.c line 1361
extern unsigned long long int vl_svm_get_num_data(struct VlSvm_ *self)
{
  return self->numData;
}

// vl_svm_get_scores
// file vl/svm.c line 1448
extern const double * vl_svm_get_scores(const struct VlSvm_ *self)
{
  return self->scores;
}

// vl_svm_get_solver
// file vl/svm.c line 1271
extern enum anonymous_6 vl_svm_get_solver(const struct VlSvm_ *self)
{
  return self->solver;
}

// vl_svm_get_statistics
// file vl/svm.c line 1433
extern const struct VlSvmStatistics_ * vl_svm_get_statistics(const struct VlSvm_ *self)
{
  return &self->statistics;
}

// vl_svm_get_weights
// file vl/svm.c line 1331
extern const double * vl_svm_get_weights(const struct VlSvm_ *self)
{
  return self->weights;
}

// vl_svm_hinge2_conjugate_loss
// file vl/svm.c line 1667
extern double vl_svm_hinge2_conjugate_loss(double u, double label)
{
  if(label * u <= 0.000000)
    return (label + u / (double)4) * u;

  else
    return vl_infinity_d_link4.value;
}

// vl_svm_hinge2_dca_update
// file vl/svm.c line 1678
extern double vl_svm_hinge2_dca_update(double alpha, double inner, double norm2, double label)
{
  double palpha = ((label - inner) - 0.5 * alpha) / (norm2 + 0.5) + alpha;
  return label * ((double)0 > label * palpha ? (double)0 : label * palpha) - alpha;
}

// vl_svm_hinge2_loss
// file vl/svm.c line 1646
extern double vl_svm_hinge2_loss(double inner, double label)
{
  double z = (double)1 - label * inner > 0.0 ? (double)1 - label * inner : 0.0;
  return z * z;
}

// vl_svm_hinge2_loss_derivative
// file vl/svm.c line 1655
extern double vl_svm_hinge2_loss_derivative(double inner, double label)
{
  if(label * inner < 1.0)
    return (double)2 * (inner - label);

  else
    return (double)0;
}

// vl_svm_hinge_conjugate_loss
// file vl/svm.c line 1626
extern double vl_svm_hinge_conjugate_loss(double u, double label)
{
  double z = label * u;
  if(z <= 0.000000 && z >= -1.000000)
    return label * u;

  else
    return vl_infinity_d_link4.value;
}

// vl_svm_hinge_dca_update
// file vl/svm.c line 1638
extern double vl_svm_hinge_dca_update(double alpha, double inner, double norm2, double label)
{
  double palpha = (label - inner) / norm2 + alpha;
  return label * ((double)0 > ((double)1 < label * palpha ? (double)1 : label * palpha) ? (double)0 : ((double)1 < label * palpha ? (double)1 : label * palpha)) - alpha;
}

// vl_svm_hinge_loss
// file vl/svm.c line 1603
extern double vl_svm_hinge_loss(double inner, double label)
{
  return (double)1 - label * inner > 0.0 ? (double)1 - label * inner : 0.0;
}

// vl_svm_hinge_loss_derivative
// file vl/svm.c line 1611
extern double vl_svm_hinge_loss_derivative(double inner, double label)
{
  if(label * inner < 1.0)
    return -label;

  else
    return 0.0;
}

// vl_svm_l1_conjugate_loss
// file vl/svm.c line 1706
extern double vl_svm_l1_conjugate_loss(double u, double label)
{
  double return_value_vl_abs_d_1;
  return_value_vl_abs_d_1=vl_abs_d_link3(u);
  if(return_value_vl_abs_d_1 <= 1.000000)
    return label * u;

  else
    return vl_infinity_d_link4.value;
}

// vl_svm_l1_dca_update
// file vl/svm.c line 1717
extern double vl_svm_l1_dca_update(double alpha, double inner, double norm2, double label)
{
  double return_value_vl_abs_d_1;
  return_value_vl_abs_d_1=vl_abs_d_link3(alpha);
  if(return_value_vl_abs_d_1 <= 1.000000)
  {
    double palpha = (label - inner) / norm2 + alpha;
    return (-1.0 > (1.0 < palpha ? 1.0 : palpha) ? -1.0 : (1.0 < palpha ? 1.0 : palpha)) - alpha;
  }

  else
    return vl_infinity_d_link4.value;
}

// vl_svm_l1_loss
// file vl/svm.c line 1686
extern double vl_svm_l1_loss(double inner, double label)
{
  double return_value_vl_abs_d_1;
  return_value_vl_abs_d_1=vl_abs_d_link3(label - inner);
  return return_value_vl_abs_d_1;
}

// vl_svm_l1_loss_derivative
// file vl/svm.c line 1694
extern double vl_svm_l1_loss_derivative(double inner, double label)
{
  if(label > inner)
    return -1.0;

  else
    return +1.0;
}

// vl_svm_l2_conjugate_loss
// file vl/svm.c line 1746
extern double vl_svm_l2_conjugate_loss(double u, double label)
{
  return (label + u / (double)4) * u;
}

// vl_svm_l2_dca_update
// file vl/svm.c line 1753
extern double vl_svm_l2_dca_update(double alpha, double inner, double norm2, double label)
{
  return ((label - inner) - 0.5 * alpha) / (norm2 + 0.5);
}

// vl_svm_l2_loss
// file vl/svm.c line 1729
extern double vl_svm_l2_loss(double inner, double label)
{
  double z = label - inner;
  return z * z;
}

// vl_svm_l2_loss_derivative
// file vl/svm.c line 1738
extern double vl_svm_l2_loss_derivative(double inner, double label)
{
  return (double)-2 * (label - inner);
}

// vl_svm_logistic_conjugate_loss
// file vl/svm.c line 1789
extern double vl_svm_logistic_conjugate_loss(double u, double label)
{
  double z = label * u;
  if(z <= 0.000000 && z >= -1.000000)
  {
    double return_value_xlogx_1;
    return_value_xlogx_1=xlogx(-z);
    double return_value_xlogx_2;
    return_value_xlogx_2=xlogx((double)1 + z);
    return return_value_xlogx_1 + return_value_xlogx_2;
  }

  else
    return vl_infinity_d_link4.value;
}

// vl_svm_logistic_dca_update
// file vl/svm.c line 1801
extern double vl_svm_logistic_dca_update(double alpha, double inner, double norm2, double label)
{
  double df;
  double ddf;
  double der;
  double dder;
  signed long long int t;
  double beta1 = (double)0;
  double beta2 = (double)1;
  double beta = 0.5;
  t = (signed long long int)0;
  for( ; !(t >= 5l); t = t + 1ll)
  {
    double return_value_log_1;
    return_value_log_1=log(beta);
    double return_value_log_2;
    return_value_log_2=log((double)1 - beta);
    df = return_value_log_1 - return_value_log_2;
    der = norm2 * beta + label * (inner - norm2 * alpha) + df;
    if(der >= 0.000000)
      beta2 = beta;

    else
      beta1 = beta;
    beta = 0.5 * (beta1 + beta2);
  }
  t = (signed long long int)0;
  for( ; beta < 1.000000e+0 && beta > 2.220446049250313e-16 && !(t >= 2l); t = t + 1ll)
  {
    double return_value_log_3;
    return_value_log_3=log(beta);
    double return_value_log_4;
    return_value_log_4=log((double)1 - beta);
    df = return_value_log_3 - return_value_log_4;
    ddf = (double)1 / (beta * ((double)1 - beta));
    der = norm2 * beta + label * (inner - norm2 * alpha) + df;
    dder = norm2 + ddf;
    beta = beta - der / dder;
    beta = (double)0 > ((double)1 < beta ? (double)1 : beta) ? (double)0 : ((double)1 < beta ? (double)1 : beta);
  }
  return label * beta - alpha;
}

// vl_svm_logistic_loss
// file vl/svm.c line 1760
extern double vl_svm_logistic_loss(double inner, double label)
{
  double z = label * inner;
  if(z >= 0.000000)
  {
    double return_value_exp_1;
    return_value_exp_1=exp(-z);
    double return_value_log_2;
    return_value_log_2=log(1.0 + return_value_exp_1);
    return return_value_log_2;
  }

  else
  {
    double return_value_exp_3;
    return_value_exp_3=exp(z);
    double return_value_log_4;
    return_value_log_4=log(return_value_exp_3 + 1.0);
    return -z + return_value_log_4;
  }
}

// vl_svm_logistic_loss_derivative
// file vl/svm.c line 1773
extern double vl_svm_logistic_loss_derivative(double inner, double label)
{
  double z = label * inner;
  double t;
  double return_value_exp_1;
  return_value_exp_1=exp(-z);
  t = (double)1 / ((double)1 + return_value_exp_1);
  return label * (t - (double)1);
}

// vl_svm_new
// file vl/svm.c line 957
extern struct VlSvm_ * vl_svm_new(enum anonymous_6 type, const double *data, unsigned long long int dimension, unsigned long long int numData, const double *labels, double lambda)
{
  struct VlSvmDataset_ *dataset;
  dataset=vl_svmdataset_new((unsigned int)2, (void *)data, dimension, numData);
  struct VlSvm_ *self;
  self=vl_svm_new_with_dataset(type, dataset, labels, lambda);
  self->ownDataset = dataset;
  return self;
}

// vl_svm_new_with_abstract_data
// file vl/svm.c line 1014
extern struct VlSvm_ * vl_svm_new_with_abstract_data(enum anonymous_6 solver, void *data, unsigned long long int dimension, unsigned long long int numData, const double *labels, double lambda)
{
  struct VlSvm_ *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc((unsigned long int)1, sizeof(struct VlSvm_) /*296ul*/ );
  self = (struct VlSvm_ *)return_value_vl_calloc_1;
  self->solver = solver;
  self->dimension = dimension;
  self->model = ((double *)NULL);
  self->bias = (double)0;
  self->biasMultiplier = 1.0;
  self->lambda = lambda;
  self->data = data;
  self->numData = numData;
  self->labels = labels;
  self->diagnosticFrequency = numData;
  self->diagnosticFn = ((void (*)(struct VlSvm_ *, void *))NULL);
  self->diagnosticFnData = NULL;
  self->lossFn = vl_svm_hinge_loss;
  self->conjugateLossFn = vl_svm_hinge_conjugate_loss;
  self->lossDerivativeFn = vl_svm_hinge_loss_derivative;
  self->dcaUpdateFn = vl_svm_hinge_dca_update;
  self->innerProductFn = ((double (*)(const void *, unsigned long long int, double *))NULL);
  self->accumulateFn = ((void (*)(const void *, unsigned long long int, double *, double))NULL);
  self->iteration = (unsigned long long int)0;
  signed long int return_value_vl_ceil_f_2;
  return_value_vl_ceil_f_2=vl_ceil_f((float)(10.0 / lambda));
  double tmp_if_expr_4;
  signed long int return_value_vl_ceil_f_3;
  if((double)numData > (double)return_value_vl_ceil_f_2)
    tmp_if_expr_4 = (double)numData;

  else
  {
    return_value_vl_ceil_f_3=vl_ceil_f((float)(10.0 / lambda));
    tmp_if_expr_4 = (double)return_value_vl_ceil_f_3;
  }
  self->maxNumIterations = (unsigned long long int)tmp_if_expr_4;
  self->epsilon = 1e-2;
  self->biasLearningRate = 0.01;
  self->alpha = ((double *)NULL);
  void *return_value_vl_calloc_5;
  return_value_vl_calloc_5=vl_calloc(dimension, sizeof(double) /*8ul*/ );
  self->model = (double *)return_value_vl_calloc_5;
  void *return_value_vl_calloc_7;
  if(!(self->model == ((double *)NULL)))
  {
    if((signed int)self->solver == VlSvmSolverSdca)
    {
      void *return_value_vl_calloc_6;
      return_value_vl_calloc_6=vl_calloc(self->numData, sizeof(double) /*8ul*/ );
      self->alpha = (double *)return_value_vl_calloc_6;
      if(self->alpha == ((double *)NULL))
        goto err_alloc;

    }

    return_value_vl_calloc_7=vl_calloc(numData, sizeof(double) /*8ul*/ );
    self->scores = (double *)return_value_vl_calloc_7;
    if(self->scores == ((double *)NULL))
      goto err_alloc;

    return self;
  }

  else
  {

  err_alloc:
    ;
    if(!(self->scores == ((double *)NULL)))
    {
      vl_free((void *)self->scores);
      self->scores = ((double *)NULL);
    }

    if(!(self->model == ((double *)NULL)))
    {
      vl_free((void *)self->model);
      self->model = ((double *)NULL);
    }

    if(!(self->alpha == ((double *)NULL)))
    {
      vl_free((void *)self->alpha);
      self->alpha = ((double *)NULL);
    }

    return ((struct VlSvm_ *)NULL);
  }
}

// vl_svm_new_with_dataset
// file vl/svm.c line 980
extern struct VlSvm_ * vl_svm_new_with_dataset(enum anonymous_6 solver, struct VlSvmDataset_ *dataset, const double *labels, double lambda)
{
  struct VlSvm_ *self;
  unsigned long long int return_value_vl_svmdataset_get_dimension_1;
  return_value_vl_svmdataset_get_dimension_1=vl_svmdataset_get_dimension(dataset);
  unsigned long long int return_value_vl_svmdataset_get_num_data_2;
  return_value_vl_svmdataset_get_num_data_2=vl_svmdataset_get_num_data(dataset);
  self=vl_svm_new_with_abstract_data(solver, (void *)dataset, return_value_vl_svmdataset_get_dimension_1, return_value_vl_svmdataset_get_num_data_2, labels, lambda);
  double (*return_value_vl_svmdataset_get_inner_product_function_3)(const void *, unsigned long long int, double *);
  return_value_vl_svmdataset_get_inner_product_function_3=vl_svmdataset_get_inner_product_function(dataset);
  void (*return_value_vl_svmdataset_get_accumulate_function_4)(const void *, unsigned long long int, double *, double);
  return_value_vl_svmdataset_get_accumulate_function_4=vl_svmdataset_get_accumulate_function(dataset);
  vl_svm_set_data_functions(self, return_value_vl_svmdataset_get_inner_product_function_3, return_value_vl_svmdataset_get_accumulate_function_4);
  return self;
}

// vl_svm_set_bias
// file vl/svm.c line 1406
extern void vl_svm_set_bias(struct VlSvm_ *self, double b)
{
  if(IEEE_FLOAT_NOTEQUAL(self->biasMultiplier, 0.000000))
    self->bias = b / self->biasMultiplier;

}

// vl_svm_set_bias_learning_rate
// file vl/svm.c line 1148
extern void vl_svm_set_bias_learning_rate(struct VlSvm_ *self, double rate)
{
  self->biasLearningRate = rate;
}

// vl_svm_set_bias_multiplier
// file vl/svm.c line 1174
extern void vl_svm_set_bias_multiplier(struct VlSvm_ *self, double b)
{
  self->biasMultiplier = b;
}

// vl_svm_set_conjugate_loss_function
// file vl/svm.c line 1529
extern void vl_svm_set_conjugate_loss_function(struct VlSvm_ *self, double (*f)(double, double))
{
  self->conjugateLossFn = f;
}

// vl_svm_set_data_functions
// file vl/svm.c line 1492
extern void vl_svm_set_data_functions(struct VlSvm_ *self, double (*inner)(const void *, unsigned long long int, double *), void (*acc)(const void *, unsigned long long int, double *, double))
{
  self->innerProductFn = inner;
  self->accumulateFn = acc;
}

// vl_svm_set_dca_update_function
// file vl/svm.c line 1539
extern void vl_svm_set_dca_update_function(struct VlSvm_ *self, double (*f)(double, double, double, double))
{
  self->dcaUpdateFn = f;
}

// vl_svm_set_diagnostic_frequency
// file vl/svm.c line 1248
extern void vl_svm_set_diagnostic_frequency(struct VlSvm_ *self, unsigned long long int f)
{
  self->diagnosticFrequency = f;
}

// vl_svm_set_diagnostic_function
// file vl/svm.c line 1479
extern void vl_svm_set_diagnostic_function(struct VlSvm_ *self, void (*f)(struct VlSvm_ *, void *), void *data)
{
  self->diagnosticFn = f;
  self->diagnosticFnData = data;
}

// vl_svm_set_epsilon
// file vl/svm.c line 1123
extern void vl_svm_set_epsilon(struct VlSvm_ *self, double epsilon)
{
  self->epsilon = epsilon;
}

// vl_svm_set_iteration_number
// file vl/svm.c line 1201
extern void vl_svm_set_iteration_number(struct VlSvm_ *self, unsigned long long int n)
{
  self->iteration = n;
}

// vl_svm_set_lambda
// file vl/svm.c line 1288
void vl_svm_set_lambda(struct VlSvm_ *self, double lambda)
{
  self->lambda = lambda;
}

// vl_svm_set_loss
// file vl/svm.c line 1552
extern void vl_svm_set_loss(struct VlSvm_ *self, enum anonymous_9 loss)
{
  switch((signed int)loss)
  {
    case VlSvmLossHinge:
    {
      vl_svm_set_loss_function(self, vl_svm_hinge_loss);
      vl_svm_set_loss_derivative_function(self, vl_svm_hinge_loss_derivative);
      vl_svm_set_conjugate_loss_function(self, vl_svm_hinge_conjugate_loss);
      vl_svm_set_dca_update_function(self, vl_svm_hinge_dca_update);
      break;
    }
    case VlSvmLossHinge2:
    {
      vl_svm_set_loss_function(self, vl_svm_hinge2_loss);
      vl_svm_set_loss_derivative_function(self, vl_svm_hinge2_loss_derivative);
      vl_svm_set_conjugate_loss_function(self, vl_svm_hinge2_conjugate_loss);
      vl_svm_set_dca_update_function(self, vl_svm_hinge2_dca_update);
      break;
    }
    case VlSvmLossL1:
    {
      vl_svm_set_loss_function(self, vl_svm_l1_loss);
      vl_svm_set_loss_derivative_function(self, vl_svm_l1_loss_derivative);
      vl_svm_set_conjugate_loss_function(self, vl_svm_l1_conjugate_loss);
      vl_svm_set_dca_update_function(self, vl_svm_l1_dca_update);
      break;
    }
    case VlSvmLossL2:
    {
      vl_svm_set_loss_function(self, vl_svm_l2_loss);
      vl_svm_set_loss_derivative_function(self, vl_svm_l2_loss_derivative);
      vl_svm_set_conjugate_loss_function(self, vl_svm_l2_conjugate_loss);
      vl_svm_set_dca_update_function(self, vl_svm_l2_dca_update);
      break;
    }
    case VlSvmLossLogistic:
    {
      vl_svm_set_loss_function(self, vl_svm_logistic_loss);
      vl_svm_set_loss_derivative_function(self, vl_svm_logistic_loss_derivative);
      vl_svm_set_conjugate_loss_function(self, vl_svm_logistic_conjugate_loss);
      vl_svm_set_dca_update_function(self, vl_svm_logistic_dca_update);
    }
  }
}

// vl_svm_set_loss_derivative_function
// file vl/svm.c line 1519
extern void vl_svm_set_loss_derivative_function(struct VlSvm_ *self, double (*f)(double, double))
{
  self->lossDerivativeFn = f;
}

// vl_svm_set_loss_function
// file vl/svm.c line 1509
extern void vl_svm_set_loss_function(struct VlSvm_ *self, double (*f)(double, double))
{
  self->lossFn = f;
}

// vl_svm_set_max_num_iterations
// file vl/svm.c line 1223
extern void vl_svm_set_max_num_iterations(struct VlSvm_ *self, unsigned long long int n)
{
  self->maxNumIterations = n;
}

// vl_svm_set_model
// file vl/svm.c line 1389
extern void vl_svm_set_model(struct VlSvm_ *self, const double *model)
{
  unsigned long long int return_value_vl_svm_get_dimension_1;
  return_value_vl_svm_get_dimension_1=vl_svm_get_dimension(self);
  memcpy((void *)self->model, (const void *)model, sizeof(double) /*8ul*/  * return_value_vl_svm_get_dimension_1);
}

// vl_svm_set_weights
// file vl/svm.c line 1320
extern void vl_svm_set_weights(struct VlSvm_ *self, const double *weights)
{
  self->weights = weights;
}

// vl_svm_train
// file vl/svm.c line 2156
extern void vl_svm_train(struct VlSvm_ *self)
{
  switch((signed int)self->solver)
  {
    case VlSvmSolverSdca:
    {
      _vl_svm_sdca_train(self);
      break;
    }
    case VlSvmSolverSgd:
    {
      _vl_svm_sgd_train(self);
      break;
    }
    case VlSvmSolverNone:
      _vl_svm_evaluate(self);
  }
}

// vl_svmdataset_accumulate_d
// file vl/svmdataset.c line 344
void vl_svmdataset_accumulate_d(const struct VlSvmDataset_ *self, unsigned long long int element, double *model, const double multiplier)
{
  double *data = (double *)self->data + (signed long int)(self->dimension * element);
  double *end = data + (signed long int)self->dimension;
  double *tmp_post_1;
  for( ; !(data == end); model = model + 1l)
  {
    tmp_post_1 = data;
    data = data + 1l;
    *model = *model + *tmp_post_1 * multiplier;
  }
}

// vl_svmdataset_accumulate_f
// file vl/svmdataset.c line 344
void vl_svmdataset_accumulate_f(const struct VlSvmDataset_ *self, unsigned long long int element, double *model, const double multiplier)
{
  float *data = (float *)self->data + (signed long int)(self->dimension * element);
  float *end = data + (signed long int)self->dimension;
  float *tmp_post_1;
  for( ; !(data == end); model = model + 1l)
  {
    tmp_post_1 = data;
    data = data + 1l;
    *model = *model + (double)*tmp_post_1 * multiplier;
  }
}

// vl_svmdataset_accumulate_hom_d
// file vl/svmdataset.c line 381
void vl_svmdataset_accumulate_hom_d(const struct VlSvmDataset_ *self, unsigned long long int element, double *model, const double multiplier)
{
  double *data = (double *)self->data + (signed long int)(self->dimension * element);
  double *end = data + (signed long int)self->dimension;
  double *bufEnd = (double *)self->homBuffer + (signed long int)self->homDimension;
  double *tmp_post_1;
  double *tmp_post_2;
  while(!(data == end))
  {
    double *buf = (double *)self->homBuffer;
    tmp_post_1 = data;
    data = data + 1l;
    vl_homogeneouskernelmap_evaluate_d(self->hom, (double *)self->homBuffer, (unsigned long long int)1, *tmp_post_1);
    for( ; !(buf == bufEnd); model = model + 1l)
    {
      tmp_post_2 = buf;
      buf = buf + 1l;
      *model = *model + *tmp_post_2 * multiplier;
    }
  }
}

// vl_svmdataset_accumulate_hom_f
// file vl/svmdataset.c line 381
void vl_svmdataset_accumulate_hom_f(const struct VlSvmDataset_ *self, unsigned long long int element, double *model, const double multiplier)
{
  float *data = (float *)self->data + (signed long int)(self->dimension * element);
  float *end = data + (signed long int)self->dimension;
  float *bufEnd = (float *)self->homBuffer + (signed long int)self->homDimension;
  float *tmp_post_1;
  float *tmp_post_2;
  while(!(data == end))
  {
    float *buf = (float *)self->homBuffer;
    tmp_post_1 = data;
    data = data + 1l;
    vl_homogeneouskernelmap_evaluate_f(self->hom, (float *)self->homBuffer, (unsigned long long int)1, (double)*tmp_post_1);
    for( ; !(buf == bufEnd); model = model + 1l)
    {
      tmp_post_2 = buf;
      buf = buf + 1l;
      *model = *model + (double)*tmp_post_2 * multiplier;
    }
  }
}

// vl_svmdataset_delete
// file vl/svmdataset.c line 164
extern void vl_svmdataset_delete(struct VlSvmDataset_ *self)
{
  if(!(self->homBuffer == NULL))
  {
    vl_free(self->homBuffer);
    self->homBuffer = NULL;
  }

  vl_free((void *)self);
}

// vl_svmdataset_get_accumulate_function
// file vl/svmdataset.c line 260
extern void (*vl_svmdataset_get_accumulate_function(const struct VlSvmDataset_ *self))(const void *, unsigned long long int, double *, double)
{
  if(self->hom == ((struct _VlHomogeneousKernelMap *)NULL))
    switch(self->dataType)
    {
      case (unsigned int)1:
        return (void (*)(const void *, unsigned long long int, double *, double))vl_svmdataset_accumulate_f;
      case (unsigned int)2:
        return (void (*)(const void *, unsigned long long int, double *, double))vl_svmdataset_accumulate_d;
      default:
        ;
    }

  else
    switch(self->dataType)
    {
      case (unsigned int)1:
        return (void (*)(const void *, unsigned long long int, double *, double))vl_svmdataset_accumulate_hom_f;
      case (unsigned int)2:
        return (void (*)(const void *, unsigned long long int, double *, double))vl_svmdataset_accumulate_hom_d;
      default:
        ;
    }
  return (void (*)(const void *, unsigned long long int, double *, double))(void *)0;
}

// vl_svmdataset_get_data
// file vl/svmdataset.c line 179
extern void * vl_svmdataset_get_data(const struct VlSvmDataset_ *self)
{
  return self->data;
}

// vl_svmdataset_get_dimension
// file vl/svmdataset.c line 201
extern unsigned long long int vl_svmdataset_get_dimension(const struct VlSvmDataset_ *self)
{
  if(!(self->hom == ((struct _VlHomogeneousKernelMap *)NULL)))
  {
    unsigned long long int return_value_vl_homogeneouskernelmap_get_dimension_1;
    return_value_vl_homogeneouskernelmap_get_dimension_1=vl_homogeneouskernelmap_get_dimension(self->hom);
    return self->dimension * return_value_vl_homogeneouskernelmap_get_dimension_1;
  }

  return self->dimension;
}

// vl_svmdataset_get_homogeneous_kernel_map
// file vl/svmdataset.c line 215
extern struct _VlHomogeneousKernelMap * vl_svmdataset_get_homogeneous_kernel_map(const struct VlSvmDataset_ *self)
{
  return self->hom;
}

// vl_svmdataset_get_inner_product_function
// file vl/svmdataset.c line 291
extern double (*vl_svmdataset_get_inner_product_function(const struct VlSvmDataset_ *self))(const void *, unsigned long long int, double *)
{
  if(self->hom == ((struct _VlHomogeneousKernelMap *)NULL))
    switch(self->dataType)
    {
      case (unsigned int)1:
        return (double (*)(const void *, unsigned long long int, double *))_vl_svmdataset_inner_product_f;
      case (unsigned int)2:
        return (double (*)(const void *, unsigned long long int, double *))_vl_svmdataset_inner_product_d;
      default:
        ;
    }

  else
    switch(self->dataType)
    {
      case (unsigned int)1:
        return (double (*)(const void *, unsigned long long int, double *))_vl_svmdataset_inner_product_hom_f;
      case (unsigned int)2:
        return (double (*)(const void *, unsigned long long int, double *))_vl_svmdataset_inner_product_hom_d;
      default:
        ;
    }
  return (double (*)(const void *, unsigned long long int, double *))(void *)0;
}

// vl_svmdataset_get_num_data
// file vl/svmdataset.c line 190
extern unsigned long long int vl_svmdataset_get_num_data(const struct VlSvmDataset_ *self)
{
  return self->numData;
}

// vl_svmdataset_new
// file vl/svmdataset.c line 138
extern struct VlSvmDataset_ * vl_svmdataset_new(unsigned int dataType, void *data, unsigned long long int dimension, unsigned long long int numData)
{
  struct VlSvmDataset_ *self;
  void *return_value_vl_calloc_1;
  return_value_vl_calloc_1=vl_calloc((unsigned long int)1, sizeof(struct VlSvmDataset_) /*56ul*/ );
  self = (struct VlSvmDataset_ *)return_value_vl_calloc_1;
  if(self == ((struct VlSvmDataset_ *)NULL))
    return (struct VlSvmDataset_ *)(void *)0;

  else
  {
    self->dataType = dataType;
    self->data = data;
    self->dimension = dimension;
    self->numData = numData;
    self->hom = (struct _VlHomogeneousKernelMap *)(void *)0;
    self->homBuffer = (void *)0;
    return self;
  }
}

// vl_svmdataset_set_homogeneous_kernel_map
// file vl/svmdataset.c line 238
extern void vl_svmdataset_set_homogeneous_kernel_map(struct VlSvmDataset_ *self, struct _VlHomogeneousKernelMap *hom)
{
  self->hom = hom;
  self->homDimension = (unsigned long long int)0;
  if(!(self->homBuffer == NULL))
  {
    vl_free(self->homBuffer);
    self->homBuffer = NULL;
  }

  if(!(self->hom == ((struct _VlHomogeneousKernelMap *)NULL)))
  {
    self->homDimension=vl_homogeneouskernelmap_get_dimension(self->hom);
    unsigned long long int return_value_vl_get_type_size_1;
    return_value_vl_get_type_size_1=vl_get_type_size(self->dataType);
    self->homBuffer=vl_calloc(self->homDimension, return_value_vl_get_type_size_1);
  }

}

// vl_thread_specific_state_new
// file vl/generic.c line 1475
static struct _VlThreadState * vl_thread_specific_state_new(void)
{
  struct _VlThreadState *self;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct _VlThreadState) /*3536ul*/ );
  self = (struct _VlThreadState *)return_value_malloc_1;
  self->lastError = 0;
  self->lastErrorMessage[(signed long int)0] = (char)0;
  self->ticMark = (signed long int)0;
  vl_rand_init(&self->rand);
  return self;
}

// vl_tic
// file ./vl/generic.h line 204
extern void vl_tic(void)
{
  struct _VlThreadState *threadState;
  threadState=vl_get_thread_specific_state();
  threadState->ticMark=clock();
}

// vl_toc
// file ./vl/generic.h line 205
extern double vl_toc(void)
{
  struct _VlThreadState *threadState;
  threadState=vl_get_thread_specific_state();
  signed long int return_value_clock_1;
  return_value_clock_1=clock();
  return (double)(return_value_clock_1 - threadState->ticMark) / (double)(signed long int)1000000;
}

// vl_unlock_state
// file vl/generic.c line 979
static void vl_unlock_state(void)
{
  struct _VlState *state;
  state=vl_get_state();
  pthread_mutex_lock(&state->mutex);
  state->mutexCount = state->mutexCount - 1ul;
  if(state->mutexCount == 0ul)
    pthread_cond_signal(&state->mutexCondition);

  pthread_mutex_unlock(&state->mutex);
}

// vl_vlad_encode
// file vl/vlad.c line 293
extern void vl_vlad_encode(void *enc, unsigned int dataType, const void *means, unsigned long long int dimension, unsigned long long int numClusters, const void *data, unsigned long long int numData, const void *assignments, signed int flags)
{
  switch(dataType)
  {
    case (unsigned int)1:
    {
      _vl_vlad_encode_f((float *)enc, (const float *)means, dimension, numClusters, (const float *)data, numData, (const float *)assignments, flags);
      break;
    }
    case (unsigned int)2:
    {
      _vl_vlad_encode_d((double *)enc, (const double *)means, dimension, numClusters, (const double *)data, numData, (const double *)assignments, flags);
      break;
    }
    default:
      abort();
  }
}

// xdelete
// file vl/hikmeans.c line 160
static void xdelete(struct _VlHIKMNode *node)
{
  unsigned long long int return_value_vl_ikm_get_K_1;
  if(!(node == ((struct _VlHIKMNode *)NULL)))
  {
    unsigned long long int k;
    if(!(node->children == ((struct _VlHIKMNode **)NULL)))
    {
      k = (unsigned long long int)0;
      do
      {
        return_value_vl_ikm_get_K_1=vl_ikm_get_K(node->filter);
        if(k >= return_value_vl_ikm_get_K_1)
          break;

        xdelete(node->children[(signed long int)k]);
        k = k + 1ull;
      }
      while((_Bool)1);
      vl_free((void *)node->children);
    }

    if(!(node->filter == ((struct _VlIKMFilt *)NULL)))
      vl_ikm_delete(node->filter);

    vl_free((void *)node);
  }

}

// xlogx
// file vl/svm.c line 1780
static inline double xlogx(double x)
{
  if(x <= 1e-10)
    return (double)0;

  else
  {
    double return_value_log_1;
    return_value_log_1=log(x);
    return x * return_value_log_1;
  }
}

// xmeans
// file vl/hikmeans.c line 104
static struct _VlHIKMNode * xmeans(struct _VlHIKMTree *tree, const unsigned char *data, unsigned long long int N, unsigned long long int K, unsigned long long int height)
{
  struct _VlHIKMNode *node;
  void *return_value_vl_malloc_1;
  return_value_vl_malloc_1=vl_malloc(sizeof(struct _VlHIKMNode) /*16ul*/ );
  node = (struct _VlHIKMNode *)return_value_vl_malloc_1;
  unsigned int *ids;
  void *return_value_vl_malloc_2;
  return_value_vl_malloc_2=vl_malloc(sizeof(unsigned int) /*4ul*/  * N);
  ids = (unsigned int *)return_value_vl_malloc_2;
  node->filter=vl_ikm_new(tree->method);
  void *tmp_if_expr_4;
  void *return_value_vl_malloc_3;
  if(height == 1ul)
    tmp_if_expr_4 = NULL;

  else
  {
    return_value_vl_malloc_3=vl_malloc(sizeof(struct _VlHIKMNode *) /*8ul*/  * K);
    tmp_if_expr_4 = return_value_vl_malloc_3;
  }
  node->children = (struct _VlHIKMNode **)tmp_if_expr_4;
  vl_ikm_set_max_niters(node->filter, tree->max_niters);
  vl_ikm_set_verbosity(node->filter, tree->verb - 1);
  vl_ikm_init_rand_data(node->filter, data, tree->M, N, K);
  vl_ikm_train(node->filter, data, N);
  vl_ikm_push(node->filter, ids, data, N);
  if(height >= 2ul)
  {
    unsigned long long int k = (unsigned long long int)0;
    for( ; !(k >= K); k = k + 1ull)
    {
      unsigned long long int partition_N;
      unsigned long long int partition_K;
      unsigned char *partition;
      partition=vl_hikm_copy_subset(data, ids, N, tree->M, (unsigned int)k, &partition_N);
      partition_K = K < partition_N ? K : partition_N;
      node->children[(signed long int)k]=xmeans(tree, partition, partition_N, partition_K, height - (unsigned long int)1);
      vl_free((void *)partition);
      if(!((signed int)tree->depth + -((signed int)height) >= tree->verb))
      {
        signed int (*return_value_vl_get_printf_func_5)(const char *, ...);
        return_value_vl_get_printf_func_5=vl_get_printf_func();
        return_value_vl_get_printf_func_5("hikmeans: branch at depth %d: %6.1f %% completed\n", tree->depth - height, ((double)(k + (unsigned long int)1) / (double)K) * (double)100);
      }

    }
  }

  vl_free((void *)ids);
  return node;
}

