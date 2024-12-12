// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_2;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_0;

// tag-#anon#UN[ARR64{*{SYM#tag-cds_lfht_node#}_SYM#tag-cds_lfht_node#_}_*{SYM#tag-cds_lfht_node#}_SYM#tag-cds_lfht_node#__'tbl_order'||ARR0{*{SYM#tag-cds_lfht_node#}_SYM#tag-cds_lfht_node#_}_*{SYM#tag-cds_lfht_node#}_SYM#tag-cds_lfht_node#__'tbl_chunk'||*{SYM#tag-cds_lfht_node#}_SYM#tag-cds_lfht_node#_'tbl_mmap'|]
// file ./rculfhash-internal.h line 111
union anonymous_1;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_3;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_4;

// tag-#anon#tUN[*{SYM#tag-__cds_lfs_stack#}_SYM#tag-__cds_lfs_stack#_'_s'||*{SYM#tag-cds_lfs_stack#}_SYM#tag-cds_lfs_stack#_'s'|]
// file ..//../../urcu/lfstack.h line 87
union anonymous;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__cds_lfs_stack
// file ..//../../urcu/lfstack.h line 73
struct __cds_lfs_stack;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__uatomic_dummy
// file ./urcu/uatomic.h line 37
struct __uatomic_dummy;

// tag-cds_lfht
// file ./urcu/rculfhash.h line 76
struct cds_lfht;

// tag-cds_lfht_iter
// file ./urcu/rculfhash.h line 66
struct cds_lfht_iter;

// tag-cds_lfht_mm_type
// file ./urcu/rculfhash.h line 105
struct cds_lfht_mm_type;

// tag-cds_lfht_node
// file ./urcu/rculfhash.h line 60
struct cds_lfht_node;

// tag-cds_lfq_node_rcu
// file urcu/rculfqueue.h line 35
struct cds_lfq_node_rcu;

// tag-cds_lfq_node_rcu_dummy
// file urcu/static/rculfqueue.h line 39
struct cds_lfq_node_rcu_dummy;

// tag-cds_lfq_queue_rcu
// file urcu/rculfqueue.h line 33
struct cds_lfq_queue_rcu;

// tag-cds_lfs_head
// file ..//../../urcu/lfstack.h line 69
struct cds_lfs_head;

// tag-cds_lfs_node
// file ..//../../urcu/lfstack.h line 59
struct cds_lfs_node;

// tag-cds_lfs_node_rcu
// file urcu/rculfstack.h line 37
struct cds_lfs_node_rcu;

// tag-cds_lfs_stack
// file ..//../../urcu/lfstack.h line 77
struct cds_lfs_stack;

// tag-cds_lfs_stack_rcu
// file urcu/rculfstack.h line 41
struct cds_lfs_stack_rcu;

// tag-cds_wfcq_node
// file ./urcu/wfcqueue.h line 59
struct cds_wfcq_node;

// tag-ht_items_count
// file ./rculfhash-internal.h line 57
struct ht_items_count;

// tag-mynode
// file cds_lfs_push.c line 25
struct mynode;

// tag-partition_resize_work
// file rculfhash.c line 352
struct partition_resize_work;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rcu_flavor_struct
// file ./urcu-flavor.h line 30
struct rcu_flavor_struct;

// tag-rcu_head
// file ./urcu-call-rcu.h line 59
struct rcu_head;

// tag-rcu_resize_work
// file rculfhash.c line 342
struct rcu_resize_work;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// ___cds_lfs_empty_head
// file urcu/static/lfstack.h line 91
static inline _Bool ___cds_lfs_empty_head(struct cds_lfs_head *head);
// ___cds_lfs_init
// file urcu/static/lfstack.h line 85
static inline void ___cds_lfs_init(struct __cds_lfs_stack *s);
// ___cds_lfs_pop
// file urcu/static/lfstack.h line 185
static inline struct cds_lfs_node * ___cds_lfs_pop(union anonymous u_s);
// ___cds_lfs_pop_all
// file urcu/static/lfstack.h line 232
static inline struct cds_lfs_head * ___cds_lfs_pop_all(union anonymous u_s);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __cds_lfht_resize_lazy_launch
// file rculfhash.c line 1975
static void __cds_lfht_resize_lazy_launch(struct cds_lfht *ht);
// __cds_lfs_init
// file lfstack.c line 43
extern void __cds_lfs_init(struct __cds_lfs_stack *s);
// __cds_lfs_pop
// file lfstack.c line 78
extern struct cds_lfs_node * __cds_lfs_pop(union anonymous s);
// __cds_lfs_pop_all
// file lfstack.c line 83
extern struct cds_lfs_head * __cds_lfs_pop_all(union anonymous s);
// __default_alloc_cds_lfht
// file ./rculfhash-internal.h line 162
static inline struct cds_lfht * __default_alloc_cds_lfht(struct cds_lfht_mm_type *mm, unsigned long int cds_lfht_size, unsigned long int min_nr_alloc_buckets, unsigned long int max_nr_buckets);
// __default_alloc_cds_lfht_link1
// file ./rculfhash-internal.h line 162
static inline struct cds_lfht * __default_alloc_cds_lfht_link1(struct cds_lfht_mm_type *mm_link1, unsigned long int cds_lfht_size_link1, unsigned long int min_nr_alloc_buckets_link1, unsigned long int max_nr_buckets_link1);
// __default_alloc_cds_lfht_link2
// file rculfhash-internal.h line 162
static inline struct cds_lfht * __default_alloc_cds_lfht_link2(struct cds_lfht_mm_type *mm_link2, unsigned long int cds_lfht_size_link2, unsigned long int min_nr_alloc_buckets_link2, unsigned long int max_nr_buckets_link2);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __uatomic_add_return
// file ./urcu/uatomic.h line 178
static inline unsigned long int __uatomic_add_return(void *addr, unsigned long int val, signed int len);
// __uatomic_cmpxchg
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg(void *addr, unsigned long int old, unsigned long int _new, signed int len);
// __uatomic_cmpxchg_link1
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg_link1(void *addr_link1, unsigned long int old_link1, unsigned long int _new_link1, signed int len_link1);
// __uatomic_cmpxchg_link2
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg_link2(void *addr_link2, unsigned long int old_link2, unsigned long int _new_link2, signed int len_link2);
// __uatomic_cmpxchg_link3
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg_link3(void *addr_link3, unsigned long int old_link3, unsigned long int _new_link3, signed int len_link3);
// __uatomic_dec
// file ./urcu/uatomic.h line 467
static inline void __uatomic_dec(void *addr, signed int len);
// __uatomic_exchange
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange(void *addr, unsigned long int val, signed int len);
// __uatomic_exchange_link1
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link1(void *addr_link1, unsigned long int val_link1, signed int len_link1);
// __uatomic_inc
// file ./urcu/uatomic.h line 414
static inline void __uatomic_inc(void *addr, signed int len);
// __uatomic_or
// file ./urcu/uatomic.h line 301
static inline void __uatomic_or(void *addr, unsigned long int val, signed int len);
// _cds_lfht_add
// file rculfhash.c line 971
static void _cds_lfht_add(struct cds_lfht *ht, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, unsigned long int size, struct cds_lfht_node *node, struct cds_lfht_iter *unique_ret, signed int bucket_flag);
// _cds_lfht_add::match_object
//
signed int match_object(struct cds_lfht_node *, const void *);
// _cds_lfht_del
// file rculfhash.c line 1085
static signed int _cds_lfht_del(struct cds_lfht *ht, unsigned long int size, struct cds_lfht_node *node);
// _cds_lfht_gc_bucket
// file rculfhash.c line 851
static void _cds_lfht_gc_bucket(struct cds_lfht_node *bucket, struct cds_lfht_node *node);
// _cds_lfht_new
// file rculfhash.c line 1466
extern struct cds_lfht * _cds_lfht_new(unsigned long int init_size, unsigned long int min_nr_alloc_buckets, unsigned long int max_nr_buckets, signed int flags, struct cds_lfht_mm_type *mm, struct rcu_flavor_struct *flavor, union pthread_attr_t *attr);
// _cds_lfht_replace
// file rculfhash.c line 897
static signed int _cds_lfht_replace(struct cds_lfht *ht, unsigned long int size, struct cds_lfht_node *old_node, struct cds_lfht_node *old_next, struct cds_lfht_node *new_node);
// _cds_lfq_dequeue_rcu
// file urcu/static/rculfqueue.h line 193
static inline struct cds_lfq_node_rcu * _cds_lfq_dequeue_rcu(struct cds_lfq_queue_rcu *q);
// _cds_lfq_destroy_rcu
// file urcu/static/rculfqueue.h line 128
static inline signed int _cds_lfq_destroy_rcu(struct cds_lfq_queue_rcu *q);
// _cds_lfq_enqueue_rcu
// file urcu/static/rculfqueue.h line 143
static inline void _cds_lfq_enqueue_rcu(struct cds_lfq_queue_rcu *q, struct cds_lfq_node_rcu *node);
// _cds_lfq_init_rcu
// file urcu/static/rculfqueue.h line 113
static inline void _cds_lfq_init_rcu(struct cds_lfq_queue_rcu *q, void (*queue_call_rcu)(struct rcu_head *, void (*)(struct rcu_head *)));
// _cds_lfq_init_rcu::queue_call_rcu_object
//
void queue_call_rcu_object(struct rcu_head *, void (*)(struct rcu_head *));
// _cds_lfq_node_init_rcu
// file urcu/static/rculfqueue.h line 106
static inline void _cds_lfq_node_init_rcu(struct cds_lfq_node_rcu *node);
// _cds_lfs_empty
// file urcu/static/lfstack.h line 102
static inline _Bool _cds_lfs_empty(union anonymous s);
// _cds_lfs_init
// file urcu/static/lfstack.h line 72
static inline void _cds_lfs_init(struct cds_lfs_stack *s);
// _cds_lfs_init_rcu
// file urcu/static/rculfstack.h line 42
static inline void _cds_lfs_init_rcu(struct cds_lfs_stack_rcu *s);
// _cds_lfs_node_init
// file urcu/static/lfstack.h line 64
static inline void _cds_lfs_node_init(struct cds_lfs_node *node);
// _cds_lfs_node_init_rcu
// file urcu/static/rculfstack.h line 37
static inline void _cds_lfs_node_init_rcu(struct cds_lfs_node_rcu *node);
// _cds_lfs_pop_all_blocking
// file urcu/static/lfstack.h line 291
static inline struct cds_lfs_head * _cds_lfs_pop_all_blocking(struct cds_lfs_stack *s);
// _cds_lfs_pop_blocking
// file urcu/static/lfstack.h line 276
static inline struct cds_lfs_node * _cds_lfs_pop_blocking(struct cds_lfs_stack *s);
// _cds_lfs_pop_lock
// file urcu/static/lfstack.h line 252
static inline void _cds_lfs_pop_lock(struct cds_lfs_stack *s);
// _cds_lfs_pop_rcu
// file urcu/static/rculfstack.h line 102
static inline struct cds_lfs_node_rcu * _cds_lfs_pop_rcu(struct cds_lfs_stack_rcu *s);
// _cds_lfs_pop_unlock
// file urcu/static/lfstack.h line 263
static inline void _cds_lfs_pop_unlock(struct cds_lfs_stack *s);
// _cds_lfs_push
// file urcu/static/lfstack.h line 137
static inline _Bool _cds_lfs_push(union anonymous u_s, struct cds_lfs_node *node);
// _cds_lfs_push_rcu
// file urcu/static/rculfstack.h line 73
static inline signed int _cds_lfs_push_rcu(struct cds_lfs_stack_rcu *s, struct cds_lfs_node_rcu *node);
// _do_cds_lfht_grow
// file rculfhash.c line 1856
static void _do_cds_lfht_grow(struct cds_lfht *ht, unsigned long int old_size, unsigned long int new_size);
// _do_cds_lfht_resize
// file rculfhash.c line 1890
static void _do_cds_lfht_resize(struct cds_lfht *ht);
// _do_cds_lfht_shrink
// file rculfhash.c line 1871
static void _do_cds_lfht_shrink(struct cds_lfht *ht, unsigned long int old_size, unsigned long int new_size);
// _uatomic_xchg_monotonic_increase
// file rculfhash.c line 802
static unsigned long int _uatomic_xchg_monotonic_increase(unsigned long int *ptr, unsigned long int v);
// alloc_cds_lfht
// file rculfhash-mm-order.c line 77
static struct cds_lfht * alloc_cds_lfht(unsigned long int min_nr_alloc_buckets, unsigned long int max_nr_buckets);
// alloc_cds_lfht_link1
// file rculfhash-mm-chunk.c line 75
static struct cds_lfht * alloc_cds_lfht_link1(unsigned long int min_nr_alloc_buckets_link1, unsigned long int max_nr_buckets_link1);
// alloc_cds_lfht_link2
// file rculfhash-mm-mmap.c line 135
static struct cds_lfht * alloc_cds_lfht_link2(unsigned long int min_nr_alloc_buckets_link2, unsigned long int max_nr_buckets_link2);
// alloc_split_items_count
// file rculfhash.c line 594
static void alloc_split_items_count(struct cds_lfht *ht);
// bit_reverse_u64
// file rculfhash.c line 396
static unsigned long int bit_reverse_u64(unsigned long int v);
// bit_reverse_u8
// file rculfhash.c line 380
static unsigned char bit_reverse_u8(unsigned char v);
// bit_reverse_ulong
// file rculfhash.c line 410
static unsigned long int bit_reverse_ulong(unsigned long int v);
// bucket_at
// file rculfhash.c line 834
static inline struct cds_lfht_node * bucket_at(struct cds_lfht *ht, unsigned long int index);
// bucket_at_link1
// file rculfhash-mm-order.c line 57
static struct cds_lfht_node * bucket_at_link1(struct cds_lfht *ht_link1, unsigned long int index_link1);
// bucket_at_link2
// file rculfhash-mm-chunk.c line 65
static struct cds_lfht_node * bucket_at_link2(struct cds_lfht *ht_link2, unsigned long int index_link2);
// bucket_at_link3
// file rculfhash-mm-mmap.c line 129
static struct cds_lfht_node * bucket_at_link3(struct cds_lfht *ht_link3, unsigned long int index_link3);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cds_lfht_add
// file rculfhash.c line 1643
extern void cds_lfht_add(struct cds_lfht *ht, unsigned long int hash, struct cds_lfht_node *node);
// cds_lfht_add_replace
// file rculfhash.c line 1671
extern struct cds_lfht_node * cds_lfht_add_replace(struct cds_lfht *ht, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_node *node);
// cds_lfht_add_replace::match_object
//
signed int match_object(struct cds_lfht_node *, const void *);
// cds_lfht_add_unique
// file rculfhash.c line 1654
extern struct cds_lfht_node * cds_lfht_add_unique(struct cds_lfht *ht, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_node *node);
// cds_lfht_add_unique::match_object
//
signed int match_object(struct cds_lfht_node *, const void *);
// cds_lfht_alloc_bucket_table
// file rculfhash.c line 817
static void cds_lfht_alloc_bucket_table(struct cds_lfht *ht, unsigned long int order);
// cds_lfht_alloc_bucket_table_link1
// file rculfhash-mm-order.c line 27
static void cds_lfht_alloc_bucket_table_link1(struct cds_lfht *ht_link1, unsigned long int order_link1);
// cds_lfht_alloc_bucket_table_link2
// file rculfhash-mm-chunk.c line 27
static void cds_lfht_alloc_bucket_table_link2(struct cds_lfht *ht_link2, unsigned long int order_link2);
// cds_lfht_alloc_bucket_table_link3
// file rculfhash-mm-mmap.c line 75
static void cds_lfht_alloc_bucket_table_link3(struct cds_lfht *ht_link3, unsigned long int order_link3);
// cds_lfht_count_nodes
// file rculfhash.c line 1806
extern void cds_lfht_count_nodes(struct cds_lfht *ht, signed long int *approx_before, unsigned long int *count, signed long int *approx_after);
// cds_lfht_create_bucket
// file rculfhash.c line 1423
static void cds_lfht_create_bucket(struct cds_lfht *ht, unsigned long int size);
// cds_lfht_del
// file rculfhash.c line 1715
extern signed int cds_lfht_del(struct cds_lfht *ht, struct cds_lfht_node *node);
// cds_lfht_delete_bucket
// file rculfhash.c line 1737
static signed int cds_lfht_delete_bucket(struct cds_lfht *ht);
// cds_lfht_destroy
// file rculfhash.c line 1774
extern signed int cds_lfht_destroy(struct cds_lfht *ht, union pthread_attr_t **attr);
// cds_lfht_first
// file rculfhash.c line 1633
extern void cds_lfht_first(struct cds_lfht *ht, struct cds_lfht_iter *iter);
// cds_lfht_fls_ulong
// file rculfhash.c line 525
extern unsigned int cds_lfht_fls_ulong(unsigned long int x);
// cds_lfht_free_bucket_table
// file rculfhash.c line 828
static void cds_lfht_free_bucket_table(struct cds_lfht *ht, unsigned long int order);
// cds_lfht_free_bucket_table_link1
// file rculfhash-mm-order.c line 47
static void cds_lfht_free_bucket_table_link1(struct cds_lfht *ht_link1, unsigned long int order_link1);
// cds_lfht_free_bucket_table_link2
// file rculfhash-mm-chunk.c line 51
static void cds_lfht_free_bucket_table_link2(struct cds_lfht *ht_link2, unsigned long int order_link2);
// cds_lfht_free_bucket_table_link3
// file rculfhash-mm-mmap.c line 107
static void cds_lfht_free_bucket_table_link3(struct cds_lfht *ht_link3, unsigned long int order_link3);
// cds_lfht_get_count_order_u32
// file rculfhash.c line 538
signed int cds_lfht_get_count_order_u32(unsigned int x);
// cds_lfht_get_count_order_ulong
// file rculfhash.c line 550
extern signed int cds_lfht_get_count_order_ulong(unsigned long int x);
// cds_lfht_is_node_deleted
// file rculfhash.c line 1731
extern signed int cds_lfht_is_node_deleted(struct cds_lfht_node *node);
// cds_lfht_lookup
// file rculfhash.c line 1540
extern void cds_lfht_lookup(struct cds_lfht *ht, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_iter *iter);
// cds_lfht_lookup::match_object
//
signed int match_object(struct cds_lfht_node *, const void *);
// cds_lfht_next
// file rculfhash.c line 1611
extern void cds_lfht_next(struct cds_lfht *ht, struct cds_lfht_iter *iter);
// cds_lfht_next_duplicate
// file rculfhash.c line 1578
extern void cds_lfht_next_duplicate(struct cds_lfht *ht, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_iter *iter);
// cds_lfht_next_duplicate::match_object
//
signed int match_object(struct cds_lfht_node *, const void *);
// cds_lfht_replace
// file rculfhash.c line 1694
extern signed int cds_lfht_replace(struct cds_lfht *ht, struct cds_lfht_iter *old_iter, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_node *new_node);
// cds_lfht_replace::match_object
//
signed int match_object(struct cds_lfht_node *, const void *);
// cds_lfht_resize
// file rculfhash.c line 1929
extern void cds_lfht_resize(struct cds_lfht *ht, unsigned long int new_size);
// cds_lfht_resize_lazy_count
// file rculfhash.c line 2018
static void cds_lfht_resize_lazy_count(struct cds_lfht *ht, unsigned long int size, unsigned long int count);
// cds_lfht_resize_lazy_grow
// file rculfhash.c line 2001
static void cds_lfht_resize_lazy_grow(struct cds_lfht *ht, unsigned long int size, signed int growth);
// cds_lfq_dequeue_rcu
// file rculfqueue.c line 56
extern struct cds_lfq_node_rcu * cds_lfq_dequeue_rcu(struct cds_lfq_queue_rcu *q);
// cds_lfq_destroy_rcu
// file rculfqueue.c line 45
extern signed int cds_lfq_destroy_rcu(struct cds_lfq_queue_rcu *q);
// cds_lfq_enqueue_rcu
// file rculfqueue.c line 50
extern void cds_lfq_enqueue_rcu(struct cds_lfq_queue_rcu *q, struct cds_lfq_node_rcu *node);
// cds_lfq_init_rcu
// file rculfqueue.c line 38
extern void cds_lfq_init_rcu(struct cds_lfq_queue_rcu *q, void (*queue_call_rcu)(struct rcu_head *, void (*)(struct rcu_head *)));
// cds_lfq_init_rcu::queue_call_rcu_object
//
void queue_call_rcu_object(struct rcu_head *, void (*)(struct rcu_head *));
// cds_lfq_node_init_rcu
// file rculfqueue.c line 33
extern void cds_lfq_node_init_rcu(struct cds_lfq_node_rcu *node);
// cds_lfs_empty
// file lfstack.c line 48
extern _Bool cds_lfs_empty(union anonymous s);
// cds_lfs_init
// file ..//../../urcu/lfstack.h line 124
extern void cds_lfs_init(struct cds_lfs_stack *s);
// cds_lfs_init_rcu
// file rculfstack.c line 42
extern void cds_lfs_init_rcu(struct cds_lfs_stack_rcu *s);
// cds_lfs_node_init
// file ..//../../urcu/lfstack.h line 119
extern void cds_lfs_node_init(struct cds_lfs_node *node);
// cds_lfs_node_init_rcu
// file rculfstack.c line 37
extern void cds_lfs_node_init_rcu(struct cds_lfs_node_rcu *node);
// cds_lfs_pop_all_blocking
// file ..//../../urcu/lfstack.h line 161
extern struct cds_lfs_head * cds_lfs_pop_all_blocking(struct cds_lfs_stack *s);
// cds_lfs_pop_blocking
// file lfstack.c line 58
extern struct cds_lfs_node * cds_lfs_pop_blocking(struct cds_lfs_stack *s);
// cds_lfs_pop_lock
// file lfstack.c line 68
extern void cds_lfs_pop_lock(struct cds_lfs_stack *s);
// cds_lfs_pop_rcu
// file rculfstack.c line 53
extern struct cds_lfs_node_rcu * cds_lfs_pop_rcu(struct cds_lfs_stack_rcu *s);
// cds_lfs_pop_unlock
// file lfstack.c line 73
extern void cds_lfs_pop_unlock(struct cds_lfs_stack *s);
// cds_lfs_push
// file ..//../../urcu/lfstack.h line 146
extern _Bool cds_lfs_push(union anonymous s, struct cds_lfs_node *node);
// cds_lfs_push_rcu
// file rculfstack.c line 47
extern signed int cds_lfs_push_rcu(struct cds_lfs_stack_rcu *s, struct cds_lfs_node_rcu *node);
// check_resize
// file rculfhash.c line 701
static void check_resize(struct cds_lfht *ht, unsigned long int size, unsigned int chain_len);
// clear_flag
// file rculfhash.c line 748
static struct cds_lfht_node * clear_flag(struct cds_lfht_node *node);
// compat_futex_async
// file compat_futex.c line 116
extern signed int compat_futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// compat_futex_noasync
// file compat_futex.c line 54
extern signed int compat_futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// do_resize_cb
// file rculfhash.c line 1958
static void do_resize_cb(struct rcu_head *head);
// enqueue_dummy
// file urcu/static/rculfqueue.h line 176
static inline void enqueue_dummy(struct cds_lfq_queue_rcu *q);
// fini_table
// file rculfhash.c line 1369
static void fini_table(struct cds_lfht *ht, unsigned long int first_order, unsigned long int last_order);
// flag_bucket
// file rculfhash.c line 766
static struct cds_lfht_node * flag_bucket(struct cds_lfht_node *node);
// flag_removal_owner
// file rculfhash.c line 778
static struct cds_lfht_node * flag_removal_owner(struct cds_lfht_node *node);
// flag_removed_or_removal_owner
// file rculfhash.c line 784
static struct cds_lfht_node * flag_removed_or_removal_owner(struct cds_lfht_node *node);
// fls_u32
// file rculfhash.c line 426
static inline unsigned int fls_u32(unsigned int x);
// fls_u64
// file rculfhash.c line 442
static inline unsigned int fls_u64(unsigned long int x);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_dummy
// file urcu/static/rculfqueue.h line 96
static inline void free_dummy(struct cds_lfq_node_rcu *node);
// free_dummy_cb
// file urcu/static/rculfqueue.h line 78
static inline void free_dummy_cb(struct rcu_head *head);
// free_split_items_count
// file rculfhash.c line 618
static void free_split_items_count(struct cds_lfht *ht);
// get_end
// file rculfhash.c line 790
static struct cds_lfht_node * get_end(void);
// getpagesize
// file /usr/include/unistd.h line 978
extern signed int getpagesize(void);
// ht_count_add
// file rculfhash.c line 637
static void ht_count_add(struct cds_lfht *ht, unsigned long int size, unsigned long int hash);
// ht_count_del
// file rculfhash.c line 666
static void ht_count_del(struct cds_lfht *ht, unsigned long int size, unsigned long int hash);
// ht_get_split_count_index
// file rculfhash.c line 624
static signed int ht_get_split_count_index(unsigned long int hash);
// ht_init_nr_cpus_mask
// file rculfhash.c line 570
static void ht_init_nr_cpus_mask(void);
// init_table
// file rculfhash.c line 1272
static void init_table(struct cds_lfht *ht, unsigned long int first_order, unsigned long int last_order);
// init_table_populate
// file rculfhash.c line 1265
static void init_table_populate(struct cds_lfht *ht, unsigned long int i, unsigned long int len);
// init_table_populate_partition
// file rculfhash.c line 1245
static void init_table_populate_partition(struct cds_lfht *ht, unsigned long int i, unsigned long int start, unsigned long int len);
// is_bucket
// file rculfhash.c line 760
static signed int is_bucket(struct cds_lfht_node *node);
// is_end
// file rculfhash.c line 796
static signed int is_end(struct cds_lfht_node *node);
// is_removal_owner
// file rculfhash.c line 772
static signed int is_removal_owner(struct cds_lfht_node *node);
// is_removed
// file rculfhash.c line 754
static signed int is_removed(struct cds_lfht_node *node);
// lookup_bucket
// file rculfhash.c line 840
static inline struct cds_lfht_node * lookup_bucket(struct cds_lfht *ht, unsigned long int size, unsigned long int hash);
// make_dummy
// file urcu/static/rculfqueue.h line 64
static inline struct cds_lfq_node_rcu * make_dummy(struct cds_lfq_queue_rcu *q, struct cds_lfq_node_rcu *next);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memory_discard
// file rculfhash-mm-mmap.c line 64
static void memory_discard(void *ptr, unsigned long int length);
// memory_map
// file rculfhash-mm-mmap.c line 32
static void * memory_map(unsigned long int length);
// memory_populate
// file rculfhash-mm-mmap.c line 50
static void memory_populate(void *ptr, unsigned long int length);
// memory_unmap
// file rculfhash-mm-mmap.c line 41
static void memory_unmap(void *ptr, unsigned long int length);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 57
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// partition_resize_helper
// file rculfhash.c line 1162
static void partition_resize_helper(struct cds_lfht *ht, unsigned long int i, unsigned long int len, void (*fct)(struct cds_lfht *, unsigned long int, unsigned long int, unsigned long int));

//

// partition_resize_thread
// file rculfhash.c line 1151
static void * partition_resize_thread(void *arg);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_3 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_3 *, union anonymous_4 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_4 *, const union anonymous_0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_4 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_4 *);
// rcu_free_dummy
// file urcu/static/rculfqueue.h line 86
static inline void rcu_free_dummy(struct cds_lfq_node_rcu *node);
// remove_table
// file rculfhash.c line 1358
static void remove_table(struct cds_lfht *ht, unsigned long int i, unsigned long int len);
// remove_table_partition
// file rculfhash.c line 1336
static void remove_table_partition(struct cds_lfht *ht, unsigned long int i, unsigned long int start, unsigned long int len);
// resize_target_grow
// file rculfhash.c line 1915
static unsigned long int resize_target_grow(struct cds_lfht *ht, unsigned long int new_size);
// resize_target_update_count
// file rculfhash.c line 1921
static void resize_target_update_count(struct cds_lfht *ht, unsigned long int count);
// sched_getcpu
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 88
extern signed int sched_getcpu(void);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// urcu_sched_getcpu
// file compat-getcpu.h line 30
static inline signed int urcu_sched_getcpu(void);

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

union anonymous_0
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

struct cds_lfht_node
{
  // next
  struct cds_lfht_node *next;
  // reverse_hash
  unsigned long int reverse_hash;
};

union anonymous_1
{
  // tbl_order
  struct cds_lfht_node *tbl_order[64l];
  // tbl_chunk
  struct cds_lfht_node *tbl_chunk[0l];
  // tbl_mmap
  struct cds_lfht_node *tbl_mmap;
};

union anonymous_3
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

union anonymous_4
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous
{
  // _s
  struct __cds_lfs_stack *_s;
  // s
  struct cds_lfs_stack *s;
} __attribute__ ((__transparent_union__));

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

struct __cds_lfs_stack
{
  // head
  struct cds_lfs_head *head;
};

struct __uatomic_dummy
{
  // v
  unsigned long int v[10l];
};

struct cds_lfht
{
  // max_nr_buckets
  unsigned long int max_nr_buckets;
  // mm
  struct cds_lfht_mm_type *mm;
  // flavor
  struct rcu_flavor_struct *flavor;
  // count
  signed long int count;
  // resize_mutex
  union anonymous_4 resize_mutex;
  // resize_attr
  union pthread_attr_t *resize_attr;
  // in_progress_resize
  unsigned int in_progress_resize;
  // in_progress_destroy
  unsigned int in_progress_destroy;
  // resize_target
  unsigned long int resize_target;
  // resize_initiated
  signed int resize_initiated;
  // flags
  signed int flags;
  // min_alloc_buckets_order
  unsigned long int min_alloc_buckets_order;
  // min_nr_alloc_buckets
  unsigned long int min_nr_alloc_buckets;
  // split_count
  struct ht_items_count *split_count;
  // size
  unsigned long int size;
  // bucket_at
  struct cds_lfht_node * (*bucket_at)(struct cds_lfht *, unsigned long int);
  // _anon0
  union anonymous_1 _anon0;
};

struct cds_lfht_iter
{
  // node
  struct cds_lfht_node *node;
  // next
  struct cds_lfht_node *next;
};

struct cds_lfht_mm_type
{
  // alloc_cds_lfht
  struct cds_lfht * (*alloc_cds_lfht)(unsigned long int, unsigned long int);
  // alloc_bucket_table
  void (*alloc_bucket_table)(struct cds_lfht *, unsigned long int);
  // free_bucket_table
  void (*free_bucket_table)(struct cds_lfht *, unsigned long int);
  // bucket_at
  struct cds_lfht_node * (*bucket_at)(struct cds_lfht *, unsigned long int);
};

struct cds_lfq_node_rcu
{
  // next
  struct cds_lfq_node_rcu *next;
  // dummy
  signed int dummy;
};

struct cds_wfcq_node
{
  // next
  struct cds_wfcq_node *next;
};

struct rcu_head
{
  // next
  struct cds_wfcq_node next;
  // func
  void (*func)(struct rcu_head *);
};

struct cds_lfq_node_rcu_dummy
{
  // parent
  struct cds_lfq_node_rcu parent;
  // head
  struct rcu_head head;
  // q
  struct cds_lfq_queue_rcu *q;
};

struct cds_lfq_queue_rcu
{
  // head
  struct cds_lfq_node_rcu *head;
  // tail
  struct cds_lfq_node_rcu *tail;
  // queue_call_rcu
  void (*queue_call_rcu)(struct rcu_head *, void (*)(struct rcu_head *));
};

struct cds_lfs_node
{
  // next
  struct cds_lfs_node *next;
};

struct cds_lfs_head
{
  // node
  struct cds_lfs_node node;
};

struct cds_lfs_node_rcu
{
  // next
  struct cds_lfs_node_rcu *next;
};

struct cds_lfs_stack
{
  // head
  struct cds_lfs_head *head;
  // lock
  union anonymous_4 lock;
};

struct cds_lfs_stack_rcu
{
  // head
  struct cds_lfs_node_rcu *head;
};

struct ht_items_count
{
  // add
  unsigned long int add;
  // del
  unsigned long int del;
};

struct mynode
{
  // value
  signed int value;
  // node
  struct cds_lfs_node node;
};

struct partition_resize_work
{
  // thread_id
  unsigned long int thread_id;
  // ht
  struct cds_lfht *ht;
  // i
  unsigned long int i;
  // start
  unsigned long int start;
  // len
  unsigned long int len;
  // fct
  void (*fct)(struct cds_lfht *, unsigned long int, unsigned long int, unsigned long int);
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

struct rcu_flavor_struct
{
  // read_lock
  void (*read_lock)(void);
  // read_unlock
  void (*read_unlock)(void);
  // read_ongoing
  signed int (*read_ongoing)(void);
  // read_quiescent_state
  void (*read_quiescent_state)(void);
  // update_call_rcu
  void (*update_call_rcu)(struct rcu_head *, void (*)(struct rcu_head *));
  // update_synchronize_rcu
  void (*update_synchronize_rcu)(void);
  // update_defer_rcu
  void (*update_defer_rcu)(void (*)(void *), void *);
  // thread_offline
  void (*thread_offline)(void);
  // thread_online
  void (*thread_online)(void);
  // register_thread
  void (*register_thread)(void);
  // unregister_thread
  void (*unregister_thread)(void);
  // barrier
  void (*barrier)(void);
};

struct rcu_resize_work
{
  // head
  struct rcu_head head;
  // ht
  struct cds_lfht *ht;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};


// BitReverseTable256
// file rculfhash.c line 368
static const unsigned char BitReverseTable256[256l] = { (const unsigned char)0, (const unsigned char)(0 + 2 * 64), (const unsigned char)(0 + 1 * 64), (const unsigned char)(0 + 3 * 64), (const unsigned char)(0 + 2 * 16), (const unsigned char)(0 + 2 * 16 + 2 * 64),
    (const unsigned char)(0 + 2 * 16 + 1 * 64),
    (const unsigned char)(0 + 2 * 16 + 3 * 64),
    (const unsigned char)(0 + 1 * 16), (const unsigned char)(0 + 1 * 16 + 2 * 64),
    (const unsigned char)(0 + 1 * 16 + 1 * 64),
    (const unsigned char)(0 + 1 * 16 + 3 * 64),
    (const unsigned char)(0 + 3 * 16), (const unsigned char)(0 + 3 * 16 + 2 * 64),
    (const unsigned char)(0 + 3 * 16 + 1 * 64),
    (const unsigned char)(0 + 3 * 16 + 3 * 64),
    (const unsigned char)(0 + 2 * 4), (const unsigned char)(0 + 2 * 4 + 2 * 64),
    (const unsigned char)(0 + 2 * 4 + 1 * 64),
    (const unsigned char)(0 + 2 * 4 + 3 * 64),
    (const unsigned char)(0 + 2 * 4 + 2 * 16),
    (const unsigned char)(0 + 2 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(0 + 2 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(0 + 2 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(0 + 2 * 4 + 1 * 16),
    (const unsigned char)(0 + 2 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(0 + 2 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(0 + 2 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(0 + 2 * 4 + 3 * 16),
    (const unsigned char)(0 + 2 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(0 + 2 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(0 + 2 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)(0 + 1 * 4), (const unsigned char)(0 + 1 * 4 + 2 * 64),
    (const unsigned char)(0 + 1 * 4 + 1 * 64),
    (const unsigned char)(0 + 1 * 4 + 3 * 64),
    (const unsigned char)(0 + 1 * 4 + 2 * 16),
    (const unsigned char)(0 + 1 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(0 + 1 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(0 + 1 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(0 + 1 * 4 + 1 * 16),
    (const unsigned char)(0 + 1 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(0 + 1 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(0 + 1 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(0 + 1 * 4 + 3 * 16),
    (const unsigned char)(0 + 1 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(0 + 1 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(0 + 1 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)(0 + 3 * 4), (const unsigned char)(0 + 3 * 4 + 2 * 64),
    (const unsigned char)(0 + 3 * 4 + 1 * 64),
    (const unsigned char)(0 + 3 * 4 + 3 * 64),
    (const unsigned char)(0 + 3 * 4 + 2 * 16),
    (const unsigned char)(0 + 3 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(0 + 3 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(0 + 3 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(0 + 3 * 4 + 1 * 16),
    (const unsigned char)(0 + 3 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(0 + 3 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(0 + 3 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(0 + 3 * 4 + 3 * 16),
    (const unsigned char)(0 + 3 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(0 + 3 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(0 + 3 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)2, (const unsigned char)(2 + 2 * 64), (const unsigned char)(2 + 1 * 64), (const unsigned char)(2 + 3 * 64), (const unsigned char)(2 + 2 * 16), (const unsigned char)(2 + 2 * 16 + 2 * 64),
    (const unsigned char)(2 + 2 * 16 + 1 * 64),
    (const unsigned char)(2 + 2 * 16 + 3 * 64),
    (const unsigned char)(2 + 1 * 16), (const unsigned char)(2 + 1 * 16 + 2 * 64),
    (const unsigned char)(2 + 1 * 16 + 1 * 64),
    (const unsigned char)(2 + 1 * 16 + 3 * 64),
    (const unsigned char)(2 + 3 * 16), (const unsigned char)(2 + 3 * 16 + 2 * 64),
    (const unsigned char)(2 + 3 * 16 + 1 * 64),
    (const unsigned char)(2 + 3 * 16 + 3 * 64),
    (const unsigned char)(2 + 2 * 4), (const unsigned char)(2 + 2 * 4 + 2 * 64),
    (const unsigned char)(2 + 2 * 4 + 1 * 64),
    (const unsigned char)(2 + 2 * 4 + 3 * 64),
    (const unsigned char)(2 + 2 * 4 + 2 * 16),
    (const unsigned char)(2 + 2 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(2 + 2 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(2 + 2 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(2 + 2 * 4 + 1 * 16),
    (const unsigned char)(2 + 2 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(2 + 2 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(2 + 2 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(2 + 2 * 4 + 3 * 16),
    (const unsigned char)(2 + 2 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(2 + 2 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(2 + 2 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)(2 + 1 * 4), (const unsigned char)(2 + 1 * 4 + 2 * 64),
    (const unsigned char)(2 + 1 * 4 + 1 * 64),
    (const unsigned char)(2 + 1 * 4 + 3 * 64),
    (const unsigned char)(2 + 1 * 4 + 2 * 16),
    (const unsigned char)(2 + 1 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(2 + 1 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(2 + 1 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(2 + 1 * 4 + 1 * 16),
    (const unsigned char)(2 + 1 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(2 + 1 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(2 + 1 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(2 + 1 * 4 + 3 * 16),
    (const unsigned char)(2 + 1 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(2 + 1 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(2 + 1 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)(2 + 3 * 4), (const unsigned char)(2 + 3 * 4 + 2 * 64),
    (const unsigned char)(2 + 3 * 4 + 1 * 64),
    (const unsigned char)(2 + 3 * 4 + 3 * 64),
    (const unsigned char)(2 + 3 * 4 + 2 * 16),
    (const unsigned char)(2 + 3 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(2 + 3 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(2 + 3 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(2 + 3 * 4 + 1 * 16),
    (const unsigned char)(2 + 3 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(2 + 3 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(2 + 3 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(2 + 3 * 4 + 3 * 16),
    (const unsigned char)(2 + 3 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(2 + 3 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(2 + 3 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)1, (const unsigned char)(1 + 2 * 64), (const unsigned char)(1 + 1 * 64), (const unsigned char)(1 + 3 * 64), (const unsigned char)(1 + 2 * 16), (const unsigned char)(1 + 2 * 16 + 2 * 64),
    (const unsigned char)(1 + 2 * 16 + 1 * 64),
    (const unsigned char)(1 + 2 * 16 + 3 * 64),
    (const unsigned char)(1 + 1 * 16), (const unsigned char)(1 + 1 * 16 + 2 * 64),
    (const unsigned char)(1 + 1 * 16 + 1 * 64),
    (const unsigned char)(1 + 1 * 16 + 3 * 64),
    (const unsigned char)(1 + 3 * 16), (const unsigned char)(1 + 3 * 16 + 2 * 64),
    (const unsigned char)(1 + 3 * 16 + 1 * 64),
    (const unsigned char)(1 + 3 * 16 + 3 * 64),
    (const unsigned char)(1 + 2 * 4), (const unsigned char)(1 + 2 * 4 + 2 * 64),
    (const unsigned char)(1 + 2 * 4 + 1 * 64),
    (const unsigned char)(1 + 2 * 4 + 3 * 64),
    (const unsigned char)(1 + 2 * 4 + 2 * 16),
    (const unsigned char)(1 + 2 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(1 + 2 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(1 + 2 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(1 + 2 * 4 + 1 * 16),
    (const unsigned char)(1 + 2 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(1 + 2 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(1 + 2 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(1 + 2 * 4 + 3 * 16),
    (const unsigned char)(1 + 2 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(1 + 2 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(1 + 2 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)(1 + 1 * 4), (const unsigned char)(1 + 1 * 4 + 2 * 64),
    (const unsigned char)(1 + 1 * 4 + 1 * 64),
    (const unsigned char)(1 + 1 * 4 + 3 * 64),
    (const unsigned char)(1 + 1 * 4 + 2 * 16),
    (const unsigned char)(1 + 1 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(1 + 1 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(1 + 1 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(1 + 1 * 4 + 1 * 16),
    (const unsigned char)(1 + 1 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(1 + 1 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(1 + 1 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(1 + 1 * 4 + 3 * 16),
    (const unsigned char)(1 + 1 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(1 + 1 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(1 + 1 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)(1 + 3 * 4), (const unsigned char)(1 + 3 * 4 + 2 * 64),
    (const unsigned char)(1 + 3 * 4 + 1 * 64),
    (const unsigned char)(1 + 3 * 4 + 3 * 64),
    (const unsigned char)(1 + 3 * 4 + 2 * 16),
    (const unsigned char)(1 + 3 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(1 + 3 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(1 + 3 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(1 + 3 * 4 + 1 * 16),
    (const unsigned char)(1 + 3 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(1 + 3 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(1 + 3 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(1 + 3 * 4 + 3 * 16),
    (const unsigned char)(1 + 3 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(1 + 3 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(1 + 3 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)3, (const unsigned char)(3 + 2 * 64), (const unsigned char)(3 + 1 * 64), (const unsigned char)(3 + 3 * 64), (const unsigned char)(3 + 2 * 16), (const unsigned char)(3 + 2 * 16 + 2 * 64),
    (const unsigned char)(3 + 2 * 16 + 1 * 64),
    (const unsigned char)(3 + 2 * 16 + 3 * 64),
    (const unsigned char)(3 + 1 * 16), (const unsigned char)(3 + 1 * 16 + 2 * 64),
    (const unsigned char)(3 + 1 * 16 + 1 * 64),
    (const unsigned char)(3 + 1 * 16 + 3 * 64),
    (const unsigned char)(3 + 3 * 16), (const unsigned char)(3 + 3 * 16 + 2 * 64),
    (const unsigned char)(3 + 3 * 16 + 1 * 64),
    (const unsigned char)(3 + 3 * 16 + 3 * 64),
    (const unsigned char)(3 + 2 * 4), (const unsigned char)(3 + 2 * 4 + 2 * 64),
    (const unsigned char)(3 + 2 * 4 + 1 * 64),
    (const unsigned char)(3 + 2 * 4 + 3 * 64),
    (const unsigned char)(3 + 2 * 4 + 2 * 16),
    (const unsigned char)(3 + 2 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(3 + 2 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(3 + 2 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(3 + 2 * 4 + 1 * 16),
    (const unsigned char)(3 + 2 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(3 + 2 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(3 + 2 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(3 + 2 * 4 + 3 * 16),
    (const unsigned char)(3 + 2 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(3 + 2 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(3 + 2 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)(3 + 1 * 4), (const unsigned char)(3 + 1 * 4 + 2 * 64),
    (const unsigned char)(3 + 1 * 4 + 1 * 64),
    (const unsigned char)(3 + 1 * 4 + 3 * 64),
    (const unsigned char)(3 + 1 * 4 + 2 * 16),
    (const unsigned char)(3 + 1 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(3 + 1 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(3 + 1 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(3 + 1 * 4 + 1 * 16),
    (const unsigned char)(3 + 1 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(3 + 1 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(3 + 1 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(3 + 1 * 4 + 3 * 16),
    (const unsigned char)(3 + 1 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(3 + 1 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(3 + 1 * 4 + 3 * 16 + 3 * 64),
    (const unsigned char)(3 + 3 * 4), (const unsigned char)(3 + 3 * 4 + 2 * 64),
    (const unsigned char)(3 + 3 * 4 + 1 * 64),
    (const unsigned char)(3 + 3 * 4 + 3 * 64),
    (const unsigned char)(3 + 3 * 4 + 2 * 16),
    (const unsigned char)(3 + 3 * 4 + 2 * 16 + 2 * 64),
    (const unsigned char)(3 + 3 * 4 + 2 * 16 + 1 * 64),
    (const unsigned char)(3 + 3 * 4 + 2 * 16 + 3 * 64),
    (const unsigned char)(3 + 3 * 4 + 1 * 16),
    (const unsigned char)(3 + 3 * 4 + 1 * 16 + 2 * 64),
    (const unsigned char)(3 + 3 * 4 + 1 * 16 + 1 * 64),
    (const unsigned char)(3 + 3 * 4 + 1 * 16 + 3 * 64),
    (const unsigned char)(3 + 3 * 4 + 3 * 16),
    (const unsigned char)(3 + 3 * 4 + 3 * 16 + 2 * 64),
    (const unsigned char)(3 + 3 * 4 + 3 * 16 + 1 * 64),
    (const unsigned char)(3 + 3 * 4 + 3 * 16 + 3 * 64) };
// __urcu_compat_futex_cond
// file compat_futex.c line 46
union anonymous_3 __urcu_compat_futex_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// __urcu_compat_futex_lock
// file compat_futex.c line 44
union anonymous_4 __urcu_compat_futex_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// cds_lfht_mm_chunk
// file rculfhash-mm-chunk.c line 92
struct cds_lfht_mm_type cds_lfht_mm_chunk;
// cds_lfht_mm_chunk
// file rculfhash-mm-chunk.c line 92
struct cds_lfht_mm_type cds_lfht_mm_chunk = { .alloc_cds_lfht=alloc_cds_lfht_link1, .alloc_bucket_table=cds_lfht_alloc_bucket_table_link2, .free_bucket_table=cds_lfht_free_bucket_table_link2,
    .bucket_at=bucket_at_link2 };
// cds_lfht_mm_mmap
// file rculfhash-mm-mmap.c line 155
struct cds_lfht_mm_type cds_lfht_mm_mmap;
// cds_lfht_mm_mmap
// file rculfhash-mm-mmap.c line 155
struct cds_lfht_mm_type cds_lfht_mm_mmap = { .alloc_cds_lfht=alloc_cds_lfht_link2, .alloc_bucket_table=cds_lfht_alloc_bucket_table_link3, .free_bucket_table=cds_lfht_free_bucket_table_link3,
    .bucket_at=bucket_at_link3 };
// cds_lfht_mm_order
// file rculfhash-mm-order.c line 85
struct cds_lfht_mm_type cds_lfht_mm_order;
// cds_lfht_mm_order
// file rculfhash-mm-order.c line 85
struct cds_lfht_mm_type cds_lfht_mm_order = { .alloc_cds_lfht=alloc_cds_lfht, .alloc_bucket_table=cds_lfht_alloc_bucket_table_link1, .free_bucket_table=cds_lfht_free_bucket_table_link1,
    .bucket_at=bucket_at_link1 };
// nr_cpus_mask
// file rculfhash.c line 565
static signed long int nr_cpus_mask = (signed long int)-1;
// split_count_mask
// file rculfhash.c line 566
static signed long int split_count_mask = (signed long int)-1;
// split_count_order
// file rculfhash.c line 567
static signed int split_count_order = -1;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// ___cds_lfs_empty_head
// file urcu/static/lfstack.h line 91
static inline _Bool ___cds_lfs_empty_head(struct cds_lfs_head *head)
{
  return head == (struct cds_lfs_head *)(void *)0;
}

// ___cds_lfs_init
// file urcu/static/lfstack.h line 85
static inline void ___cds_lfs_init(struct __cds_lfs_stack *s)
{
  s->head = (struct cds_lfs_head *)(void *)0;
}

// ___cds_lfs_pop
// file urcu/static/lfstack.h line 185
static inline struct cds_lfs_node * ___cds_lfs_pop(union anonymous u_s)
{
  struct __cds_lfs_stack *s = u_s._s;
  struct cds_lfs_head *tmp_statement_expression_2;
  do
  {
    struct cds_lfs_head *head;
    struct cds_lfs_head *next_head;
    struct cds_lfs_node *next;
    head = *((struct cds_lfs_head * volatile *)&s->head);
    _Bool return_value____cds_lfs_empty_head_1;
    return_value____cds_lfs_empty_head_1=___cds_lfs_empty_head(head);
    if(!(return_value____cds_lfs_empty_head_1 == (_Bool)0))
      return (struct cds_lfs_node *)(void *)0;

    next = *((struct cds_lfs_node * volatile *)&head->node.next);
    const struct cds_lfs_node *__ptr = next;
    tmp_statement_expression_2 = (struct cds_lfs_head *)((char *)__ptr - (signed long int)0ul);
    next_head = tmp_statement_expression_2;
    unsigned long int return_value___uatomic_cmpxchg_3;
    return_value___uatomic_cmpxchg_3=__uatomic_cmpxchg_link2((void *)&s->head, (unsigned long int)head, (unsigned long int)next_head, (signed int)sizeof(struct cds_lfs_head *) /*8ul*/ );
    if((struct cds_lfs_head *)return_value___uatomic_cmpxchg_3 == head)
      return &head->node;

  }
  while((_Bool)1);
}

// ___cds_lfs_pop_all
// file urcu/static/lfstack.h line 232
static inline struct cds_lfs_head * ___cds_lfs_pop_all(union anonymous u_s)
{
  struct __cds_lfs_stack *s = u_s._s;
  unsigned long int return_value___uatomic_exchange_1;
  return_value___uatomic_exchange_1=__uatomic_exchange((void *)&s->head, (unsigned long int)(void *)0, (signed int)sizeof(struct cds_lfs_head *) /*8ul*/ );
  return (struct cds_lfs_head *)return_value___uatomic_exchange_1;
}

// __cds_lfht_resize_lazy_launch
// file rculfhash.c line 1975
static void __cds_lfht_resize_lazy_launch(struct cds_lfht *ht)
{
  struct rcu_resize_work *work;
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_4;
  asm("" :  :  : "memory");
  tmp_statement_expression_4 = *((volatile signed int *)&ht->resize_initiated);
  volatile unsigned int tmp_statement_expression_1;
  volatile signed int tmp_statement_expression_3;
  if(tmp_statement_expression_4 == 0)
  {
    __uatomic_inc((void *)&ht->in_progress_resize, (signed int)sizeof(unsigned int) /*4ul*/ );
    asm("mfence" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile unsigned int *)&ht->in_progress_destroy);
    if(!(tmp_statement_expression_1 == 0u))
    {
      __uatomic_dec((void *)&ht->in_progress_resize, (signed int)sizeof(unsigned int) /*4ul*/ );
      goto __CPROVER_DUMP_L6;
    }

    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct rcu_resize_work) /*24ul*/ );
    work = (struct rcu_resize_work *)return_value_malloc_2;
    if(work == ((struct rcu_resize_work *)NULL))
    {
      while((_Bool)0)
        ;
      __uatomic_dec((void *)&ht->in_progress_resize, (signed int)sizeof(unsigned int) /*4ul*/ );
      goto __CPROVER_DUMP_L6;
    }

    work->ht = ht;
    ht->flavor->update_call_rcu(&work->head, do_resize_cb);
    signed int _v;
    *((volatile signed int *)&ht->resize_initiated) = 1;
    tmp_statement_expression_3 = *((volatile signed int *)&ht->resize_initiated);
    _v = tmp_statement_expression_3;
    asm("" :  :  : "memory");
    _v = _v;
  }


__CPROVER_DUMP_L6:
  ;
}

// __cds_lfs_init
// file lfstack.c line 43
extern void __cds_lfs_init(struct __cds_lfs_stack *s)
{
  ___cds_lfs_init(s);
}

// __cds_lfs_pop
// file lfstack.c line 78
extern struct cds_lfs_node * __cds_lfs_pop(union anonymous s)
{
  struct cds_lfs_node *return_value____cds_lfs_pop_1;
  return_value____cds_lfs_pop_1=___cds_lfs_pop(s);
  return return_value____cds_lfs_pop_1;
}

// __cds_lfs_pop_all
// file lfstack.c line 83
extern struct cds_lfs_head * __cds_lfs_pop_all(union anonymous s)
{
  struct cds_lfs_head *return_value____cds_lfs_pop_all_1;
  return_value____cds_lfs_pop_all_1=___cds_lfs_pop_all(s);
  return return_value____cds_lfs_pop_all_1;
}

// __default_alloc_cds_lfht
// file ./rculfhash-internal.h line 162
static inline struct cds_lfht * __default_alloc_cds_lfht(struct cds_lfht_mm_type *mm, unsigned long int cds_lfht_size, unsigned long int min_nr_alloc_buckets, unsigned long int max_nr_buckets)
{
  struct cds_lfht *ht;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, cds_lfht_size);
  ht = (struct cds_lfht *)return_value_calloc_1;
  /* assertion ht */
  assert(ht != ((struct cds_lfht *)NULL));
  ht->mm = mm;
  ht->bucket_at = mm->bucket_at;
  ht->min_nr_alloc_buckets = min_nr_alloc_buckets;
  signed int return_value_cds_lfht_get_count_order_ulong_2;
  return_value_cds_lfht_get_count_order_ulong_2=cds_lfht_get_count_order_ulong(min_nr_alloc_buckets);
  ht->min_alloc_buckets_order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_2;
  ht->max_nr_buckets = max_nr_buckets;
  return ht;
}

// __default_alloc_cds_lfht_link1
// file ./rculfhash-internal.h line 162
static inline struct cds_lfht * __default_alloc_cds_lfht_link1(struct cds_lfht_mm_type *mm_link1, unsigned long int cds_lfht_size_link1, unsigned long int min_nr_alloc_buckets_link1, unsigned long int max_nr_buckets_link1)
{
  struct cds_lfht *ht_link1;
  void *return_value_calloc_1_link1;
  return_value_calloc_1_link1=calloc((unsigned long int)1, cds_lfht_size_link1);
  ht_link1 = (struct cds_lfht *)return_value_calloc_1_link1;
  /* assertion ht */
  assert(ht_link1 != ((struct cds_lfht *)NULL));
  ht_link1->mm = mm_link1;
  ht_link1->bucket_at = mm_link1->bucket_at;
  ht_link1->min_nr_alloc_buckets = min_nr_alloc_buckets_link1;
  signed int return_value_cds_lfht_get_count_order_ulong_2_link1;
  return_value_cds_lfht_get_count_order_ulong_2_link1=cds_lfht_get_count_order_ulong(min_nr_alloc_buckets_link1);
  ht_link1->min_alloc_buckets_order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_2_link1;
  ht_link1->max_nr_buckets = max_nr_buckets_link1;
  return ht_link1;
}

// __default_alloc_cds_lfht_link2
// file rculfhash-internal.h line 162
static inline struct cds_lfht * __default_alloc_cds_lfht_link2(struct cds_lfht_mm_type *mm_link2, unsigned long int cds_lfht_size_link2, unsigned long int min_nr_alloc_buckets_link2, unsigned long int max_nr_buckets_link2)
{
  struct cds_lfht *ht_link2;
  void *return_value_calloc_1_link2;
  return_value_calloc_1_link2=calloc((unsigned long int)1, cds_lfht_size_link2);
  ht_link2 = (struct cds_lfht *)return_value_calloc_1_link2;
  /* assertion ht */
  assert(ht_link2 != ((struct cds_lfht *)NULL));
  ht_link2->mm = mm_link2;
  ht_link2->bucket_at = mm_link2->bucket_at;
  ht_link2->min_nr_alloc_buckets = min_nr_alloc_buckets_link2;
  signed int return_value_cds_lfht_get_count_order_ulong_2_link2;
  return_value_cds_lfht_get_count_order_ulong_2_link2=cds_lfht_get_count_order_ulong(min_nr_alloc_buckets_link2);
  ht_link2->min_alloc_buckets_order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_2_link2;
  ht_link2->max_nr_buckets = max_nr_buckets_link2;
  return ht_link2;
}

// __uatomic_add_return
// file ./urcu/uatomic.h line 178
static inline unsigned long int __uatomic_add_return(void *addr, unsigned long int val, signed int len)
{
  unsigned char __uatomic_add_return__1__1__1__result;
  unsigned short int __uatomic_add_return__1__1__2__result;
  unsigned int result;
  unsigned long int __uatomic_add_return__1__1__4__result;
  switch(len)
  {
    case 1:
    {
      __uatomic_add_return__1__1__1__result = (unsigned char)val;
      asm("lock; xaddb %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+q"(__uatomic_add_return__1__1__1__result) :  : "memory");
      return (unsigned long int)((signed int)__uatomic_add_return__1__1__1__result + (signed int)(unsigned char)val);
    }
    case 2:
    {
      __uatomic_add_return__1__1__2__result = (unsigned short int)val;
      asm("lock; xaddw %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+r"(__uatomic_add_return__1__1__2__result) :  : "memory");
      return (unsigned long int)((signed int)__uatomic_add_return__1__1__2__result + (signed int)(unsigned short int)val);
    }
    case 4:
    {
      result = (unsigned int)val;
      asm("lock; xaddl %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+r"(result) :  : "memory");
      return (unsigned long int)(result + (unsigned int)val);
    }
    case 8:
    {
      __uatomic_add_return__1__1__4__result = val;
      asm("lock; xaddq %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+r"(__uatomic_add_return__1__1__4__result) :  : "memory");
      return __uatomic_add_return__1__1__4__result + (unsigned long int)val;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_cmpxchg
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg(void *addr, unsigned long int old, unsigned long int _new, signed int len)
{
  unsigned char __uatomic_cmpxchg__1__1__1__result;
  unsigned short int __uatomic_cmpxchg__1__1__2__result;
  unsigned int result;
  unsigned long int __uatomic_cmpxchg__1__1__4__result;
  switch(len)
  {
    case 1:
    {
      __uatomic_cmpxchg__1__1__1__result = (unsigned char)old;
      asm("lock; cmpxchgb %2, %1" : "+a"(__uatomic_cmpxchg__1__1__1__result), "+m"(*((struct __uatomic_dummy *)addr)) : "q"((unsigned char)_new) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__1__result;
    }
    case 2:
    {
      __uatomic_cmpxchg__1__1__2__result = (unsigned short int)old;
      asm("lock; cmpxchgw %2, %1" : "+a"(__uatomic_cmpxchg__1__1__2__result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned short int)_new) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__2__result;
    }
    case 4:
    {
      result = (unsigned int)old;
      asm("lock; cmpxchgl %2, %1" : "+a"(result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned int)_new) : "memory");
      return (unsigned long int)result;
    }
    case 8:
    {
      __uatomic_cmpxchg__1__1__4__result = old;
      asm("lock; cmpxchgq %2, %1" : "+a"(__uatomic_cmpxchg__1__1__4__result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned long int)_new) : "memory");
      return __uatomic_cmpxchg__1__1__4__result;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_cmpxchg_link1
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg_link1(void *addr_link1, unsigned long int old_link1, unsigned long int _new_link1, signed int len_link1)
{
  unsigned char result_link1;
  unsigned short int __uatomic_cmpxchg__1__1__2__result_link1;
  unsigned int __uatomic_cmpxchg__1__1__3__result_link1;
  unsigned long int __uatomic_cmpxchg__1__1__4__result_link1;
  switch(len_link1)
  {
    case 1:
    {
      result_link1 = (unsigned char)old_link1;
      asm("lock; cmpxchgb %2, %1" : "+a"(result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "q"((unsigned char)_new_link1) : "memory");
      return (unsigned long int)result_link1;
    }
    case 2:
    {
      __uatomic_cmpxchg__1__1__2__result_link1 = (unsigned short int)old_link1;
      asm("lock; cmpxchgw %2, %1" : "+a"(__uatomic_cmpxchg__1__1__2__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "r"((unsigned short int)_new_link1) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__2__result_link1;
    }
    case 4:
    {
      __uatomic_cmpxchg__1__1__3__result_link1 = (unsigned int)old_link1;
      asm("lock; cmpxchgl %2, %1" : "+a"(__uatomic_cmpxchg__1__1__3__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "r"((unsigned int)_new_link1) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__3__result_link1;
    }
    case 8:
    {
      __uatomic_cmpxchg__1__1__4__result_link1 = old_link1;
      asm("lock; cmpxchgq %2, %1" : "+a"(__uatomic_cmpxchg__1__1__4__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "r"((unsigned long int)_new_link1) : "memory");
      return __uatomic_cmpxchg__1__1__4__result_link1;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_cmpxchg_link2
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg_link2(void *addr_link2, unsigned long int old_link2, unsigned long int _new_link2, signed int len_link2)
{
  unsigned char __uatomic_cmpxchg__1__1__1__result_link2;
  unsigned short int __uatomic_cmpxchg__1__1__2__result_link2;
  unsigned int result_link2;
  unsigned long int __uatomic_cmpxchg__1__1__4__result_link2;
  switch(len_link2)
  {
    case 1:
    {
      __uatomic_cmpxchg__1__1__1__result_link2 = (unsigned char)old_link2;
      asm("lock; cmpxchgb %2, %1" : "+a"(__uatomic_cmpxchg__1__1__1__result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "q"((unsigned char)_new_link2) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__1__result_link2;
    }
    case 2:
    {
      __uatomic_cmpxchg__1__1__2__result_link2 = (unsigned short int)old_link2;
      asm("lock; cmpxchgw %2, %1" : "+a"(__uatomic_cmpxchg__1__1__2__result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "r"((unsigned short int)_new_link2) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__2__result_link2;
    }
    case 4:
    {
      result_link2 = (unsigned int)old_link2;
      asm("lock; cmpxchgl %2, %1" : "+a"(result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "r"((unsigned int)_new_link2) : "memory");
      return (unsigned long int)result_link2;
    }
    case 8:
    {
      __uatomic_cmpxchg__1__1__4__result_link2 = old_link2;
      asm("lock; cmpxchgq %2, %1" : "+a"(__uatomic_cmpxchg__1__1__4__result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "r"((unsigned long int)_new_link2) : "memory");
      return __uatomic_cmpxchg__1__1__4__result_link2;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_cmpxchg_link3
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg_link3(void *addr_link3, unsigned long int old_link3, unsigned long int _new_link3, signed int len_link3)
{
  unsigned char __uatomic_cmpxchg__1__1__1__result_link3;
  unsigned short int __uatomic_cmpxchg__1__1__2__result_link3;
  unsigned int result_link3;
  unsigned long int __uatomic_cmpxchg__1__1__4__result_link3;
  switch(len_link3)
  {
    case 1:
    {
      __uatomic_cmpxchg__1__1__1__result_link3 = (unsigned char)old_link3;
      asm("lock; cmpxchgb %2, %1" : "+a"(__uatomic_cmpxchg__1__1__1__result_link3), "+m"(*((struct __uatomic_dummy *)addr_link3)) : "q"((unsigned char)_new_link3) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__1__result_link3;
    }
    case 2:
    {
      __uatomic_cmpxchg__1__1__2__result_link3 = (unsigned short int)old_link3;
      asm("lock; cmpxchgw %2, %1" : "+a"(__uatomic_cmpxchg__1__1__2__result_link3), "+m"(*((struct __uatomic_dummy *)addr_link3)) : "r"((unsigned short int)_new_link3) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__2__result_link3;
    }
    case 4:
    {
      result_link3 = (unsigned int)old_link3;
      asm("lock; cmpxchgl %2, %1" : "+a"(result_link3), "+m"(*((struct __uatomic_dummy *)addr_link3)) : "r"((unsigned int)_new_link3) : "memory");
      return (unsigned long int)result_link3;
    }
    case 8:
    {
      __uatomic_cmpxchg__1__1__4__result_link3 = old_link3;
      asm("lock; cmpxchgq %2, %1" : "+a"(__uatomic_cmpxchg__1__1__4__result_link3), "+m"(*((struct __uatomic_dummy *)addr_link3)) : "r"((unsigned long int)_new_link3) : "memory");
      return __uatomic_cmpxchg__1__1__4__result_link3;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_dec
// file ./urcu/uatomic.h line 467
static inline void __uatomic_dec(void *addr, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; decb %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 2:
    {
      asm("lock; decw %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 4:
    {
      asm("lock; decl %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 8:
    {
      asm("lock; decq %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// __uatomic_exchange
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange(void *addr, unsigned long int val, signed int len)
{
  unsigned char __uatomic_exchange__1__1__1__result;
  unsigned short int result;
  unsigned int __uatomic_exchange__1__1__3__result;
  unsigned long int __uatomic_exchange__1__1__4__result;
  switch(len)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange__1__1__1__result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned char)val) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__1__result;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned short int)val) : "memory");
      return (unsigned long int)result;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange__1__1__3__result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned int)val) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__3__result;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(__uatomic_exchange__1__1__4__result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned long int)val) : "memory");
      return __uatomic_exchange__1__1__4__result;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_exchange_link1
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link1(void *addr_link1, unsigned long int val_link1, signed int len_link1)
{
  unsigned char __uatomic_exchange__1__1__1__result_link1;
  unsigned short int result_link1;
  unsigned int __uatomic_exchange__1__1__3__result_link1;
  unsigned long int __uatomic_exchange__1__1__4__result_link1;
  switch(len_link1)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange__1__1__1__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "0"((unsigned char)val_link1) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__1__result_link1;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "0"((unsigned short int)val_link1) : "memory");
      return (unsigned long int)result_link1;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange__1__1__3__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "0"((unsigned int)val_link1) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__3__result_link1;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(__uatomic_exchange__1__1__4__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "0"((unsigned long int)val_link1) : "memory");
      return __uatomic_exchange__1__1__4__result_link1;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_inc
// file ./urcu/uatomic.h line 414
static inline void __uatomic_inc(void *addr, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; incb %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 2:
    {
      asm("lock; incw %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 4:
    {
      asm("lock; incl %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 8:
    {
      asm("lock; incq %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// __uatomic_or
// file ./urcu/uatomic.h line 301
static inline void __uatomic_or(void *addr, unsigned long int val, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; orb %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "iq"((unsigned char)val) : "memory");
      break;
    }
    case 2:
    {
      asm("lock; orw %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned short int)val) : "memory");
      break;
    }
    case 4:
    {
      asm("lock; orl %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned int)val) : "memory");
      break;
    }
    case 8:
    {
      asm("lock; orq %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "er"((unsigned long int)val) : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// _cds_lfht_add
// file rculfhash.c line 971
static void _cds_lfht_add(struct cds_lfht *ht, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, unsigned long int size, struct cds_lfht_node *node, struct cds_lfht_iter *unique_ret, signed int bucket_flag)
{
  struct cds_lfht_node *iter_prev;
  struct cds_lfht_node *iter;
  struct cds_lfht_node *next;
  struct cds_lfht_node *new_node;
  struct cds_lfht_node *new_next;
  struct cds_lfht_node *return_node;
  struct cds_lfht_node *bucket;
  signed int return_value_is_bucket_1;
  return_value_is_bucket_1=is_bucket(node);
  /* assertion !is_bucket(node) */
  assert(!(return_value_is_bucket_1 != 0));
  signed int return_value_is_removed_2;
  return_value_is_removed_2=is_removed(node);
  /* assertion !is_removed(node) */
  assert(!(return_value_is_removed_2 != 0));
  signed int return_value_is_removal_owner_3;
  return_value_is_removal_owner_3=is_removal_owner(node);
  /* assertion !is_removal_owner(node) */
  assert(!(return_value_is_removal_owner_3 != 0));
  bucket=lookup_bucket(ht, size, hash);
  struct cds_lfht_node *tmp_statement_expression_4;
  struct cds_lfht_node * volatile tmp_statement_expression_5;
  struct cds_lfht_node *return_value_clear_flag_8;
  struct cds_lfht_node *tmp_statement_expression_9;
  struct cds_lfht_node * volatile tmp_statement_expression_10;
  signed int return_value_is_bucket_14;
  struct cds_lfht_node *return_value_clear_flag_13;
  signed int return_value_is_bucket_15;
  struct cds_lfht_node *return_value_clear_flag_22;
  struct cds_lfht_node *return_value_clear_flag_27;
  do
  {
    unsigned int chain_len = (unsigned int)0;
    iter_prev = bucket;
    struct cds_lfht_node *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_5 = *((struct cds_lfht_node * volatile *)&iter_prev->next);
    _________p1 = tmp_statement_expression_5;
    tmp_statement_expression_4 = _________p1;
    iter = tmp_statement_expression_4;
    /* assertion iter_prev->reverse_hash <= node->reverse_hash */
    assert(iter_prev->reverse_hash <= node->reverse_hash);
    do
    {
      signed int return_value_is_end_6;
      return_value_is_end_6=is_end(iter);
      if(!(return_value_is_end_6 == 0))
        break;

      struct cds_lfht_node *return_value_clear_flag_7;
      return_value_clear_flag_7=clear_flag(iter);
      if(!(node->reverse_hash >= return_value_clear_flag_7->reverse_hash))
        break;

      if(!(bucket_flag == 0))
      {
        return_value_clear_flag_8=clear_flag(iter);
        if(return_value_clear_flag_8->reverse_hash == node->reverse_hash)
          break;

      }

      struct cds_lfht_node *_cds_lfht_add__1__1__1__2__1__1___________p1;
      asm("" :  :  : "memory");
      struct cds_lfht_node *return_value_clear_flag_11;
      return_value_clear_flag_11=clear_flag(iter);
      tmp_statement_expression_10 = *((struct cds_lfht_node * volatile *)&return_value_clear_flag_11->next);
      _cds_lfht_add__1__1__1__2__1__1___________p1 = tmp_statement_expression_10;
      tmp_statement_expression_9 = _cds_lfht_add__1__1__1__2__1__1___________p1;
      next = tmp_statement_expression_9;
      signed int return_value_is_removed_12;
      return_value_is_removed_12=is_removed(next);
      if(!(return_value_is_removed_12 == 0))
        goto gc_node;

      if(!(unique_ret == ((struct cds_lfht_iter *)NULL)))
      {
        return_value_is_bucket_14=is_bucket(next);
        if(return_value_is_bucket_14 == 0)
        {
          return_value_clear_flag_13=clear_flag(iter);
          if(return_value_clear_flag_13->reverse_hash == node->reverse_hash)
          {
            struct cds_lfht_iter d_iter = { .node=node, .next=iter };
            cds_lfht_next_duplicate(ht, match, key, &d_iter);
            if(d_iter.node == ((struct cds_lfht_node *)NULL))
              break;

            *unique_ret = d_iter;
            goto __CPROVER_DUMP_L18;
          }

        }

      }

      struct cds_lfht_node *return_value_clear_flag_16;
      return_value_clear_flag_16=clear_flag(iter);
      if(!(iter_prev->reverse_hash == return_value_clear_flag_16->reverse_hash))
      {
        return_value_is_bucket_15=is_bucket(next);
        if(return_value_is_bucket_15 == 0)
        {
          chain_len = chain_len + 1u;
          check_resize(ht, size, chain_len);
        }

      }

      iter_prev=clear_flag(iter);
      iter = next;
    }
    while((_Bool)1);

  insert:
    ;
    struct cds_lfht_node *return_value_clear_flag_17;
    return_value_clear_flag_17=clear_flag(iter);
    /* assertion node != clear_flag(iter) */
    assert(node != return_value_clear_flag_17);
    signed int return_value_is_removed_18;
    return_value_is_removed_18=is_removed(iter_prev);
    /* assertion !is_removed(iter_prev) */
    assert(!(return_value_is_removed_18 != 0));
    signed int return_value_is_removal_owner_19;
    return_value_is_removal_owner_19=is_removal_owner(iter_prev);
    /* assertion !is_removal_owner(iter_prev) */
    assert(!(return_value_is_removal_owner_19 != 0));
    signed int return_value_is_removed_20;
    return_value_is_removed_20=is_removed(iter);
    /* assertion !is_removed(iter) */
    assert(!(return_value_is_removed_20 != 0));
    signed int return_value_is_removal_owner_21;
    return_value_is_removal_owner_21=is_removal_owner(iter);
    /* assertion !is_removal_owner(iter) */
    assert(!(return_value_is_removal_owner_21 != 0));
    /* assertion iter_prev != node */
    assert(iter_prev != node);
    if(bucket_flag == 0)
      node->next=clear_flag(iter);

    else
    {
      return_value_clear_flag_22=clear_flag(iter);
      node->next=flag_bucket(return_value_clear_flag_22);
    }
    signed int return_value_is_bucket_23;
    return_value_is_bucket_23=is_bucket(iter);
    if(!(return_value_is_bucket_23 == 0))
      new_node=flag_bucket(node);

    else
      new_node = node;
    unsigned long int return_value___uatomic_cmpxchg_24;
    return_value___uatomic_cmpxchg_24=__uatomic_cmpxchg_link3((void *)&iter_prev->next, (unsigned long int)iter, (unsigned long int)new_node, (signed int)sizeof(struct cds_lfht_node *) /*8ul*/ );
    if(!((struct cds_lfht_node *)return_value___uatomic_cmpxchg_24 == iter))
      continue;

    else
    {
      return_node = node;
      break;
    }

  gc_node:
    ;
    signed int return_value_is_removed_25;
    return_value_is_removed_25=is_removed(iter);
    /* assertion !is_removed(iter) */
    assert(!(return_value_is_removed_25 != 0));
    signed int return_value_is_removal_owner_26;
    return_value_is_removal_owner_26=is_removal_owner(iter);
    /* assertion !is_removal_owner(iter) */
    assert(!(return_value_is_removal_owner_26 != 0));
    signed int return_value_is_bucket_28;
    return_value_is_bucket_28=is_bucket(iter);
    if(!(return_value_is_bucket_28 == 0))
    {
      return_value_clear_flag_27=clear_flag(next);
      new_next=flag_bucket(return_value_clear_flag_27);
    }

    else
      new_next=clear_flag(next);
    __uatomic_cmpxchg_link3((void *)&iter_prev->next, (unsigned long int)iter, (unsigned long int)new_next, (signed int)sizeof(struct cds_lfht_node *) /*8ul*/ );
  }
  while((_Bool)1);

end:
  ;
  if(!(unique_ret == ((struct cds_lfht_iter *)NULL)))
    unique_ret->node = return_node;


__CPROVER_DUMP_L18:
  ;
}

// _cds_lfht_del
// file rculfhash.c line 1085
static signed int _cds_lfht_del(struct cds_lfht *ht, unsigned long int size, struct cds_lfht_node *node)
{
  struct cds_lfht_node *bucket;
  struct cds_lfht_node *next;
  struct cds_lfht_node * volatile tmp_statement_expression_4;
  struct cds_lfht_node * volatile tmp_statement_expression_8;
  if(node == ((struct cds_lfht_node *)NULL))
    return -2;

  else
  {
    signed int return_value_is_bucket_1;
    return_value_is_bucket_1=is_bucket(node);
    /* assertion !is_bucket(node) */
    assert(!(return_value_is_bucket_1 != 0));
    signed int return_value_is_removed_2;
    return_value_is_removed_2=is_removed(node);
    /* assertion !is_removed(node) */
    assert(!(return_value_is_removed_2 != 0));
    signed int return_value_is_removal_owner_3;
    return_value_is_removal_owner_3=is_removal_owner(node);
    /* assertion !is_removal_owner(node) */
    assert(!(return_value_is_removal_owner_3 != 0));
    asm("" :  :  : "memory");
    tmp_statement_expression_4 = *((struct cds_lfht_node * volatile *)&node->next);
    next = tmp_statement_expression_4;
    signed int return_value_is_removed_5;
    return_value_is_removed_5=is_removed(next);
    if(!(return_value_is_removed_5 == 0))
      return -2;

    else
    {
      signed int return_value_is_bucket_6;
      return_value_is_bucket_6=is_bucket(next);
      /* assertion !is_bucket(next) */
      assert(!(return_value_is_bucket_6 != 0));
      asm("" :  :  : "memory");
      __uatomic_or((void *)&node->next, (unsigned long int)(1UL << 0), (signed int)sizeof(struct cds_lfht_node *) /*8ul*/ );
      unsigned long int return_value_bit_reverse_ulong_7;
      return_value_bit_reverse_ulong_7=bit_reverse_ulong(node->reverse_hash);
      bucket=lookup_bucket(ht, size, return_value_bit_reverse_ulong_7);
      _cds_lfht_gc_bucket(bucket, node);
      asm("" :  :  : "memory");
      tmp_statement_expression_8 = *((struct cds_lfht_node * volatile *)&node->next);
      signed int return_value_is_removed_9;
      return_value_is_removed_9=is_removed(tmp_statement_expression_8);
      /* assertion is_removed(__extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(node->next) *)&(node->next)); })) */
      assert(return_value_is_removed_9 != 0);
      struct cds_lfht_node *return_value_flag_removal_owner_10;
      return_value_flag_removal_owner_10=flag_removal_owner(node->next);
      unsigned long int return_value___uatomic_exchange_11;
      return_value___uatomic_exchange_11=__uatomic_exchange_link1((void *)&node->next, (unsigned long int)return_value_flag_removal_owner_10, (signed int)sizeof(struct cds_lfht_node *) /*8ul*/ );
      signed int return_value_is_removal_owner_12;
      return_value_is_removal_owner_12=is_removal_owner((struct cds_lfht_node *)return_value___uatomic_exchange_11);
      if(return_value_is_removal_owner_12 == 0)
        return 0;

      else
        return -2;
    }
  }
}

// _cds_lfht_gc_bucket
// file rculfhash.c line 851
static void _cds_lfht_gc_bucket(struct cds_lfht_node *bucket, struct cds_lfht_node *node)
{
  struct cds_lfht_node *iter_prev;
  struct cds_lfht_node *iter;
  struct cds_lfht_node *next;
  struct cds_lfht_node *new_next;
  signed int return_value_is_bucket_1;
  return_value_is_bucket_1=is_bucket(bucket);
  /* assertion !is_bucket(bucket) */
  assert(!(return_value_is_bucket_1 != 0));
  signed int return_value_is_removed_2;
  return_value_is_removed_2=is_removed(bucket);
  /* assertion !is_removed(bucket) */
  assert(!(return_value_is_removed_2 != 0));
  signed int return_value_is_removal_owner_3;
  return_value_is_removal_owner_3=is_removal_owner(bucket);
  /* assertion !is_removal_owner(bucket) */
  assert(!(return_value_is_removal_owner_3 != 0));
  signed int return_value_is_bucket_4;
  return_value_is_bucket_4=is_bucket(node);
  /* assertion !is_bucket(node) */
  assert(!(return_value_is_bucket_4 != 0));
  signed int return_value_is_removed_5;
  return_value_is_removed_5=is_removed(node);
  /* assertion !is_removed(node) */
  assert(!(return_value_is_removed_5 != 0));
  signed int return_value_is_removal_owner_6;
  return_value_is_removal_owner_6=is_removal_owner(node);
  /* assertion !is_removal_owner(node) */
  assert(!(return_value_is_removal_owner_6 != 0));
  struct cds_lfht_node *tmp_statement_expression_7;
  struct cds_lfht_node * volatile tmp_statement_expression_8;
  struct cds_lfht_node *tmp_statement_expression_13;
  struct cds_lfht_node * volatile tmp_statement_expression_14;
  struct cds_lfht_node *return_value_clear_flag_19;
  do
  {
    iter_prev = bucket;
    struct cds_lfht_node *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_8 = *((struct cds_lfht_node * volatile *)&iter_prev->next);
    _________p1 = tmp_statement_expression_8;
    tmp_statement_expression_7 = _________p1;
    iter = tmp_statement_expression_7;
    signed int return_value_is_removed_9;
    return_value_is_removed_9=is_removed(iter);
    /* assertion !is_removed(iter) */
    assert(!(return_value_is_removed_9 != 0));
    signed int return_value_is_removal_owner_10;
    return_value_is_removal_owner_10=is_removal_owner(iter);
    /* assertion !is_removal_owner(iter) */
    assert(!(return_value_is_removal_owner_10 != 0));
    /* assertion iter_prev->reverse_hash <= node->reverse_hash */
    assert(iter_prev->reverse_hash <= node->reverse_hash);
    /* assertion bucket != node */
    assert(bucket != node);
    do
    {
      signed int return_value_is_end_11;
      return_value_is_end_11=is_end(iter);
      if(!(return_value_is_end_11 == 0))
        goto __CPROVER_DUMP_L9;

      struct cds_lfht_node *return_value_clear_flag_12;
      return_value_clear_flag_12=clear_flag(iter);
      if(!(node->reverse_hash >= return_value_clear_flag_12->reverse_hash))
        goto __CPROVER_DUMP_L9;

      struct cds_lfht_node *_cds_lfht_gc_bucket__1__1__1__2__1__1___________p1;
      asm("" :  :  : "memory");
      struct cds_lfht_node *return_value_clear_flag_15;
      return_value_clear_flag_15=clear_flag(iter);
      tmp_statement_expression_14 = *((struct cds_lfht_node * volatile *)&return_value_clear_flag_15->next);
      _cds_lfht_gc_bucket__1__1__1__2__1__1___________p1 = tmp_statement_expression_14;
      tmp_statement_expression_13 = _cds_lfht_gc_bucket__1__1__1__2__1__1___________p1;
      next = tmp_statement_expression_13;
      signed int return_value_is_removed_16;
      return_value_is_removed_16=is_removed(next);
      if(!(return_value_is_removed_16 == 0))
        break;

      iter_prev=clear_flag(iter);
      iter = next;
    }
    while((_Bool)1);
    signed int return_value_is_removed_17;
    return_value_is_removed_17=is_removed(iter);
    /* assertion !is_removed(iter) */
    assert(!(return_value_is_removed_17 != 0));
    signed int return_value_is_removal_owner_18;
    return_value_is_removal_owner_18=is_removal_owner(iter);
    /* assertion !is_removal_owner(iter) */
    assert(!(return_value_is_removal_owner_18 != 0));
    signed int return_value_is_bucket_20;
    return_value_is_bucket_20=is_bucket(iter);
    if(!(return_value_is_bucket_20 == 0))
    {
      return_value_clear_flag_19=clear_flag(next);
      new_next=flag_bucket(return_value_clear_flag_19);
    }

    else
      new_next=clear_flag(next);
    __uatomic_cmpxchg_link3((void *)&iter_prev->next, (unsigned long int)iter, (unsigned long int)new_next, (signed int)sizeof(struct cds_lfht_node *) /*8ul*/ );
  }
  while((_Bool)1);

__CPROVER_DUMP_L9:
  ;
}

// _cds_lfht_new
// file rculfhash.c line 1466
extern struct cds_lfht * _cds_lfht_new(unsigned long int init_size, unsigned long int min_nr_alloc_buckets, unsigned long int max_nr_buckets, signed int flags, struct cds_lfht_mm_type *mm, struct rcu_flavor_struct *flavor, union pthread_attr_t *attr)
{
  struct cds_lfht *ht;
  unsigned long int order;
  if(min_nr_alloc_buckets == 0ul || !((min_nr_alloc_buckets + 18446744073709551615ul & min_nr_alloc_buckets) == 0ul))
    return (struct cds_lfht *)(void *)0;

  else
    if(init_size == 0ul || !((init_size + 18446744073709551615ul & init_size) == 0ul))
      return (struct cds_lfht *)(void *)0;

    else
    {
      if(mm == ((struct cds_lfht_mm_type *)NULL))
      {
        if(!(max_nr_buckets == 0ul) && !(max_nr_buckets >= 4294967297ull))
          mm = &cds_lfht_mm_mmap;

        else
          mm = &cds_lfht_mm_order;
      }

      if(mm == &cds_lfht_mm_order && max_nr_buckets == 0ul)
        max_nr_buckets = 1UL << 64 - 1;

      if(max_nr_buckets == 0ul || !((max_nr_buckets + 18446744073709551615ul & max_nr_buckets) == 0ul))
        return (struct cds_lfht *)(void *)0;

      else
      {
        min_nr_alloc_buckets = min_nr_alloc_buckets > 1UL << 0 ? min_nr_alloc_buckets : 1UL << 0;
        init_size = init_size > 1UL << 0 ? init_size : 1UL << 0;
        max_nr_buckets = max_nr_buckets > min_nr_alloc_buckets ? max_nr_buckets : min_nr_alloc_buckets;
        init_size = init_size < max_nr_buckets ? init_size : max_nr_buckets;
        ht=mm->alloc_cds_lfht(min_nr_alloc_buckets, max_nr_buckets);
        /* assertion ht */
        assert(ht != ((struct cds_lfht *)NULL));
        /* assertion ht->mm == mm */
        assert(ht->mm == mm);
        /* assertion ht->bucket_at == mm->bucket_at */
        assert(ht->bucket_at == mm->bucket_at);
        ht->flags = flags;
        ht->flavor = flavor;
        ht->resize_attr = attr;
        alloc_split_items_count(ht);
        pthread_mutex_init(&ht->resize_mutex, (const union anonymous_0 *)(void *)0);
        signed int return_value_cds_lfht_get_count_order_ulong_1;
        return_value_cds_lfht_get_count_order_ulong_1=cds_lfht_get_count_order_ulong(init_size);
        order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_1;
        ht->resize_target = 1UL << order;
        cds_lfht_create_bucket(ht, 1UL << order);
        ht->size = 1UL << order;
        return ht;
      }
    }
}

// _cds_lfht_replace
// file rculfhash.c line 897
static signed int _cds_lfht_replace(struct cds_lfht *ht, unsigned long int size, struct cds_lfht_node *old_node, struct cds_lfht_node *old_next, struct cds_lfht_node *new_node)
{
  struct cds_lfht_node *bucket;
  struct cds_lfht_node *ret_next;
  struct cds_lfht_node * volatile tmp_statement_expression_13;
  if(old_node == ((struct cds_lfht_node *)NULL))
    return -2;

  else
  {
    signed int return_value_is_removed_1;
    return_value_is_removed_1=is_removed(old_node);
    /* assertion !is_removed(old_node) */
    assert(!(return_value_is_removed_1 != 0));
    signed int return_value_is_removal_owner_2;
    return_value_is_removal_owner_2=is_removal_owner(old_node);
    /* assertion !is_removal_owner(old_node) */
    assert(!(return_value_is_removal_owner_2 != 0));
    signed int return_value_is_bucket_3;
    return_value_is_bucket_3=is_bucket(old_node);
    /* assertion !is_bucket(old_node) */
    assert(!(return_value_is_bucket_3 != 0));
    signed int return_value_is_removed_4;
    return_value_is_removed_4=is_removed(new_node);
    /* assertion !is_removed(new_node) */
    assert(!(return_value_is_removed_4 != 0));
    signed int return_value_is_removal_owner_5;
    return_value_is_removal_owner_5=is_removal_owner(new_node);
    /* assertion !is_removal_owner(new_node) */
    assert(!(return_value_is_removal_owner_5 != 0));
    signed int return_value_is_bucket_6;
    return_value_is_bucket_6=is_bucket(new_node);
    /* assertion !is_bucket(new_node) */
    assert(!(return_value_is_bucket_6 != 0));
    /* assertion new_node != old_node */
    assert(new_node != old_node);
    do
    {
      signed int return_value_is_removed_7;
      return_value_is_removed_7=is_removed(old_next);
      if(!(return_value_is_removed_7 == 0))
        return -2;

      struct cds_lfht_node *return_value_clear_flag_8;
      return_value_clear_flag_8=clear_flag(old_next);
      /* assertion old_next == clear_flag(old_next) */
      assert(old_next == return_value_clear_flag_8);
      /* assertion new_node != old_next */
      assert(new_node != old_next);
      signed int return_value_is_removal_owner_9;
      return_value_is_removal_owner_9=is_removal_owner(old_next);
      /* assertion !is_removal_owner(old_next) */
      assert(!(return_value_is_removal_owner_9 != 0));
      new_node->next = old_next;
      struct cds_lfht_node *return_value_flag_removed_or_removal_owner_10;
      return_value_flag_removed_or_removal_owner_10=flag_removed_or_removal_owner(new_node);
      unsigned long int return_value___uatomic_cmpxchg_11;
      return_value___uatomic_cmpxchg_11=__uatomic_cmpxchg_link3((void *)&old_node->next, (unsigned long int)old_next, (unsigned long int)return_value_flag_removed_or_removal_owner_10, (signed int)sizeof(struct cds_lfht_node *) /*8ul*/ );
      ret_next = (struct cds_lfht_node *)return_value___uatomic_cmpxchg_11;
      if(ret_next == old_next)
        break;

      old_next = ret_next;
    }
    while((_Bool)1);
    unsigned long int return_value_bit_reverse_ulong_12;
    return_value_bit_reverse_ulong_12=bit_reverse_ulong(old_node->reverse_hash);
    bucket=lookup_bucket(ht, size, return_value_bit_reverse_ulong_12);
    _cds_lfht_gc_bucket(bucket, new_node);
    asm("" :  :  : "memory");
    tmp_statement_expression_13 = *((struct cds_lfht_node * volatile *)&old_node->next);
    signed int return_value_is_removed_14;
    return_value_is_removed_14=is_removed(tmp_statement_expression_13);
    /* assertion is_removed(__extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(old_node->next) *)&(old_node->next)); })) */
    assert(return_value_is_removed_14 != 0);
    return 0;
  }
}

// _cds_lfq_dequeue_rcu
// file urcu/static/rculfqueue.h line 193
static inline struct cds_lfq_node_rcu * _cds_lfq_dequeue_rcu(struct cds_lfq_queue_rcu *q)
{
  struct cds_lfq_node_rcu *tmp_statement_expression_1;
  struct cds_lfq_node_rcu * volatile tmp_statement_expression_2;
  struct cds_lfq_node_rcu *tmp_statement_expression_3;
  struct cds_lfq_node_rcu * volatile tmp_statement_expression_4;
  struct cds_lfq_node_rcu *tmp_statement_expression_5;
  struct cds_lfq_node_rcu * volatile tmp_statement_expression_6;
  do
  {
    struct cds_lfq_node_rcu *head;
    struct cds_lfq_node_rcu *next;
    struct cds_lfq_node_rcu *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((struct cds_lfq_node_rcu * volatile *)&q->head);
    _________p1 = tmp_statement_expression_2;
    tmp_statement_expression_1 = _________p1;
    head = tmp_statement_expression_1;
    struct cds_lfq_node_rcu *_cds_lfq_dequeue_rcu__1__1__1__2___________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_4 = *((struct cds_lfq_node_rcu * volatile *)&head->next);
    _cds_lfq_dequeue_rcu__1__1__1__2___________p1 = tmp_statement_expression_4;
    tmp_statement_expression_3 = _cds_lfq_dequeue_rcu__1__1__1__2___________p1;
    next = tmp_statement_expression_3;
    if(!(head->dummy == 0))
    {
      if(next == ((struct cds_lfq_node_rcu *)NULL))
        return (struct cds_lfq_node_rcu *)(void *)0;

    }

    if(next == ((struct cds_lfq_node_rcu *)NULL))
    {
      enqueue_dummy(q);
      struct cds_lfq_node_rcu *_cds_lfq_dequeue_rcu__1__1__1__3__1___________p1;
      asm("" :  :  : "memory");
      tmp_statement_expression_6 = *((struct cds_lfq_node_rcu * volatile *)&head->next);
      _cds_lfq_dequeue_rcu__1__1__1__3__1___________p1 = tmp_statement_expression_6;
      tmp_statement_expression_5 = _cds_lfq_dequeue_rcu__1__1__1__3__1___________p1;
      next = tmp_statement_expression_5;
    }

    unsigned long int return_value___uatomic_cmpxchg_7;
    return_value___uatomic_cmpxchg_7=__uatomic_cmpxchg((void *)&q->head, (unsigned long int)head, (unsigned long int)next, (signed int)sizeof(struct cds_lfq_node_rcu *) /*8ul*/ );
    if((struct cds_lfq_node_rcu *)return_value___uatomic_cmpxchg_7 == head)
    {
      if(!(head->dummy == 0))
        rcu_free_dummy(head);

      else
        return head;
    }

  }
  while((_Bool)1);
}

// _cds_lfq_destroy_rcu
// file urcu/static/rculfqueue.h line 128
static inline signed int _cds_lfq_destroy_rcu(struct cds_lfq_queue_rcu *q)
{
  struct cds_lfq_node_rcu *head;
  struct cds_lfq_node_rcu *tmp_statement_expression_1;
  struct cds_lfq_node_rcu *_________p1;
  struct cds_lfq_node_rcu * volatile tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((struct cds_lfq_node_rcu * volatile *)&q->head);
  _________p1 = tmp_statement_expression_2;
  tmp_statement_expression_1 = _________p1;
  head = tmp_statement_expression_1;
  _Bool tmp_if_expr_3;
  if(!(head->dummy == 0))
    tmp_if_expr_3 = head->next == (struct cds_lfq_node_rcu *)(void *)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  if(!tmp_if_expr_3)
    return -1;

  else
  {
    free_dummy(head);
    return 0;
  }
}

// _cds_lfq_enqueue_rcu
// file urcu/static/rculfqueue.h line 143
static inline void _cds_lfq_enqueue_rcu(struct cds_lfq_queue_rcu *q, struct cds_lfq_node_rcu *node)
{
  struct cds_lfq_node_rcu *tmp_statement_expression_1;
  struct cds_lfq_node_rcu * volatile tmp_statement_expression_2;
  do
  {
    struct cds_lfq_node_rcu *tail;
    struct cds_lfq_node_rcu *next;
    struct cds_lfq_node_rcu *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((struct cds_lfq_node_rcu * volatile *)&q->tail);
    _________p1 = tmp_statement_expression_2;
    tmp_statement_expression_1 = _________p1;
    tail = tmp_statement_expression_1;
    unsigned long int return_value___uatomic_cmpxchg_3;
    return_value___uatomic_cmpxchg_3=__uatomic_cmpxchg((void *)&tail->next, (unsigned long int)(void *)0, (unsigned long int)node, (signed int)sizeof(struct cds_lfq_node_rcu *) /*8ul*/ );
    next = (struct cds_lfq_node_rcu *)return_value___uatomic_cmpxchg_3;
    if(next == ((struct cds_lfq_node_rcu *)NULL))
    {
      __uatomic_cmpxchg((void *)&q->tail, (unsigned long int)tail, (unsigned long int)node, (signed int)sizeof(struct cds_lfq_node_rcu *) /*8ul*/ );
      break;
    }

    else
      __uatomic_cmpxchg((void *)&q->tail, (unsigned long int)tail, (unsigned long int)next, (signed int)sizeof(struct cds_lfq_node_rcu *) /*8ul*/ );
  }
  while((_Bool)1);
}

// _cds_lfq_init_rcu
// file urcu/static/rculfqueue.h line 113
static inline void _cds_lfq_init_rcu(struct cds_lfq_queue_rcu *q, void (*queue_call_rcu)(struct rcu_head *, void (*)(struct rcu_head *)))
{
  q->tail=make_dummy(q, (struct cds_lfq_node_rcu *)(void *)0);
  q->head = q->tail;
  q->queue_call_rcu = queue_call_rcu;
}

// _cds_lfq_node_init_rcu
// file urcu/static/rculfqueue.h line 106
static inline void _cds_lfq_node_init_rcu(struct cds_lfq_node_rcu *node)
{
  node->next = (struct cds_lfq_node_rcu *)(void *)0;
  node->dummy = 0;
}

// _cds_lfs_empty
// file urcu/static/lfstack.h line 102
static inline _Bool _cds_lfs_empty(union anonymous s)
{
  struct cds_lfs_head * volatile tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((struct cds_lfs_head * volatile *)&s._s->head);
  _Bool return_value____cds_lfs_empty_head_2;
  return_value____cds_lfs_empty_head_2=___cds_lfs_empty_head(tmp_statement_expression_1);
  return return_value____cds_lfs_empty_head_2;
}

// _cds_lfs_init
// file urcu/static/lfstack.h line 72
static inline void _cds_lfs_init(struct cds_lfs_stack *s)
{
  signed int ret;
  s->head = (struct cds_lfs_head *)(void *)0;
  ret=pthread_mutex_init(&s->lock, (const union anonymous_0 *)(void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_lfs_init_rcu
// file urcu/static/rculfstack.h line 42
static inline void _cds_lfs_init_rcu(struct cds_lfs_stack_rcu *s)
{
  s->head = (struct cds_lfs_node_rcu *)(void *)0;
}

// _cds_lfs_node_init
// file urcu/static/lfstack.h line 64
static inline void _cds_lfs_node_init(struct cds_lfs_node *node)
{
  ;
}

// _cds_lfs_node_init_rcu
// file urcu/static/rculfstack.h line 37
static inline void _cds_lfs_node_init_rcu(struct cds_lfs_node_rcu *node)
{
  ;
}

// _cds_lfs_pop_all_blocking
// file urcu/static/lfstack.h line 291
static inline struct cds_lfs_head * _cds_lfs_pop_all_blocking(struct cds_lfs_stack *s)
{
  struct cds_lfs_head *rethead;
  _cds_lfs_pop_lock(s);
  rethead=___cds_lfs_pop_all(s);
  _cds_lfs_pop_unlock(s);
  return rethead;
}

// _cds_lfs_pop_blocking
// file urcu/static/lfstack.h line 276
static inline struct cds_lfs_node * _cds_lfs_pop_blocking(struct cds_lfs_stack *s)
{
  struct cds_lfs_node *retnode;
  _cds_lfs_pop_lock(s);
  retnode=___cds_lfs_pop(s);
  _cds_lfs_pop_unlock(s);
  return retnode;
}

// _cds_lfs_pop_lock
// file urcu/static/lfstack.h line 252
static inline void _cds_lfs_pop_lock(struct cds_lfs_stack *s)
{
  signed int ret;
  ret=pthread_mutex_lock(&s->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_lfs_pop_rcu
// file urcu/static/rculfstack.h line 102
static inline struct cds_lfs_node_rcu * _cds_lfs_pop_rcu(struct cds_lfs_stack_rcu *s)
{
  struct cds_lfs_node_rcu *tmp_statement_expression_1;
  struct cds_lfs_node_rcu * volatile tmp_statement_expression_2;
  struct cds_lfs_node_rcu *tmp_statement_expression_3;
  struct cds_lfs_node_rcu * volatile tmp_statement_expression_4;
  do
  {
    struct cds_lfs_node_rcu *head;
    struct cds_lfs_node_rcu *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((struct cds_lfs_node_rcu * volatile *)&s->head);
    _________p1 = tmp_statement_expression_2;
    tmp_statement_expression_1 = _________p1;
    head = tmp_statement_expression_1;
    if(!(head == ((struct cds_lfs_node_rcu *)NULL)))
    {
      struct cds_lfs_node_rcu *next;
      struct cds_lfs_node_rcu *_cds_lfs_pop_rcu__1__1__1__2__1___________p1;
      asm("" :  :  : "memory");
      tmp_statement_expression_4 = *((struct cds_lfs_node_rcu * volatile *)&head->next);
      _cds_lfs_pop_rcu__1__1__1__2__1___________p1 = tmp_statement_expression_4;
      tmp_statement_expression_3 = _cds_lfs_pop_rcu__1__1__1__2__1___________p1;
      next = tmp_statement_expression_3;
      unsigned long int return_value___uatomic_cmpxchg_5;
      return_value___uatomic_cmpxchg_5=__uatomic_cmpxchg_link1((void *)&s->head, (unsigned long int)head, (unsigned long int)next, (signed int)sizeof(struct cds_lfs_node_rcu *) /*8ul*/ );
      if((struct cds_lfs_node_rcu *)return_value___uatomic_cmpxchg_5 == head)
        return head;

      else
        continue;
    }

    else
      return (struct cds_lfs_node_rcu *)(void *)0;
  }
  while((_Bool)1);
}

// _cds_lfs_pop_unlock
// file urcu/static/lfstack.h line 263
static inline void _cds_lfs_pop_unlock(struct cds_lfs_stack *s)
{
  signed int ret;
  ret=pthread_mutex_unlock(&s->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_lfs_push
// file urcu/static/lfstack.h line 137
static inline _Bool _cds_lfs_push(union anonymous u_s, struct cds_lfs_node *node)
{
  struct __cds_lfs_stack *s = u_s._s;
  struct cds_lfs_head *head = (struct cds_lfs_head *)(void *)0;
  struct cds_lfs_head *new_head;
  struct cds_lfs_head *tmp_statement_expression_1;
  const struct cds_lfs_node *__ptr = node;
  tmp_statement_expression_1 = (struct cds_lfs_head *)((char *)__ptr - (signed long int)0ul);
  new_head = tmp_statement_expression_1;
  do
  {
    struct cds_lfs_head *old_head = head;
    node->next = &head->node;
    unsigned long int return_value___uatomic_cmpxchg_2;
    return_value___uatomic_cmpxchg_2=__uatomic_cmpxchg_link2((void *)&s->head, (unsigned long int)old_head, (unsigned long int)new_head, (signed int)sizeof(struct cds_lfs_head *) /*8ul*/ );
    head = (struct cds_lfs_head *)return_value___uatomic_cmpxchg_2;
    if(old_head == head)
      break;

  }
  while((_Bool)1);
  _Bool return_value____cds_lfs_empty_head_3;
  return_value____cds_lfs_empty_head_3=___cds_lfs_empty_head(head);
  return !(return_value____cds_lfs_empty_head_3 != (_Bool)0);
}

// _cds_lfs_push_rcu
// file urcu/static/rculfstack.h line 73
static inline signed int _cds_lfs_push_rcu(struct cds_lfs_stack_rcu *s, struct cds_lfs_node_rcu *node)
{
  struct cds_lfs_node_rcu *head = (struct cds_lfs_node_rcu *)(void *)0;
  do
  {
    struct cds_lfs_node_rcu *old_head = head;
    node->next = head;
    unsigned long int return_value___uatomic_cmpxchg_1;
    return_value___uatomic_cmpxchg_1=__uatomic_cmpxchg_link1((void *)&s->head, (unsigned long int)old_head, (unsigned long int)node, (signed int)sizeof(struct cds_lfs_node_rcu *) /*8ul*/ );
    head = (struct cds_lfs_node_rcu *)return_value___uatomic_cmpxchg_1;
    if(old_head == head)
      break;

  }
  while((_Bool)1);
  return (signed int)!(!((unsigned long int)head != 0ul));
}

// _do_cds_lfht_grow
// file rculfhash.c line 1856
static void _do_cds_lfht_grow(struct cds_lfht *ht, unsigned long int old_size, unsigned long int new_size)
{
  unsigned long int old_order;
  unsigned long int new_order;
  signed int return_value_cds_lfht_get_count_order_ulong_1;
  return_value_cds_lfht_get_count_order_ulong_1=cds_lfht_get_count_order_ulong(old_size);
  old_order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_1;
  signed int return_value_cds_lfht_get_count_order_ulong_2;
  return_value_cds_lfht_get_count_order_ulong_2=cds_lfht_get_count_order_ulong(new_size);
  new_order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_2;
  while((_Bool)0)
    ;
  /* assertion new_size > old_size */
  assert(new_size > old_size);
  init_table(ht, old_order + (unsigned long int)1, new_order);
}

// _do_cds_lfht_resize
// file rculfhash.c line 1890
static void _do_cds_lfht_resize(struct cds_lfht *ht)
{
  unsigned long int new_size;
  unsigned long int old_size;
  volatile unsigned int tmp_statement_expression_2;
  volatile unsigned int tmp_statement_expression_3;
  volatile unsigned long int tmp_statement_expression_4;
  volatile unsigned long int tmp_statement_expression_1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((volatile unsigned int *)&(*(&ht->in_progress_resize)));
    /* assertion __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(*(&ht->in_progress_resize)) *)&(*(&ht->in_progress_resize))); }) */
    assert(tmp_statement_expression_2 != 0u);
    asm("" :  :  : "memory");
    tmp_statement_expression_3 = *((volatile unsigned int *)&ht->in_progress_destroy);
    if(!(tmp_statement_expression_3 == 0u))
      break;

    ht->resize_initiated = 1;
    old_size = ht->size;
    asm("" :  :  : "memory");
    tmp_statement_expression_4 = *((volatile unsigned long int *)&ht->resize_target);
    new_size = tmp_statement_expression_4;
    if(!(old_size >= new_size))
      _do_cds_lfht_grow(ht, old_size, new_size);

    else
      if(!(new_size >= old_size))
        _do_cds_lfht_shrink(ht, old_size, new_size);

    ht->resize_initiated = 0;
    asm("mfence" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile unsigned long int *)&ht->resize_target);
  }
  while(!(ht->size == tmp_statement_expression_1));
}

// _do_cds_lfht_shrink
// file rculfhash.c line 1871
static void _do_cds_lfht_shrink(struct cds_lfht *ht, unsigned long int old_size, unsigned long int new_size)
{
  unsigned long int old_order;
  unsigned long int new_order;
  new_size = new_size > 1UL << 0 ? new_size : 1UL << 0;
  signed int return_value_cds_lfht_get_count_order_ulong_1;
  return_value_cds_lfht_get_count_order_ulong_1=cds_lfht_get_count_order_ulong(old_size);
  old_order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_1;
  signed int return_value_cds_lfht_get_count_order_ulong_2;
  return_value_cds_lfht_get_count_order_ulong_2=cds_lfht_get_count_order_ulong(new_size);
  new_order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_2;
  while((_Bool)0)
    ;
  /* assertion new_size < old_size */
  assert(new_size < old_size);
  fini_table(ht, new_order + (unsigned long int)1, old_order);
}

// _uatomic_xchg_monotonic_increase
// file rculfhash.c line 802
static unsigned long int _uatomic_xchg_monotonic_increase(unsigned long int *ptr, unsigned long int v)
{
  unsigned long int old1;
  unsigned long int old2;
  volatile unsigned long int tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((volatile unsigned long int *)&(*ptr));
  old1 = tmp_statement_expression_1;
  unsigned long int return_value___uatomic_cmpxchg_2;
  do
  {
    old2 = old1;
    if(old2 >= v)
      return old2;

    return_value___uatomic_cmpxchg_2=__uatomic_cmpxchg_link3((void *)ptr, (unsigned long int)old2, (unsigned long int)v, (signed int)sizeof(unsigned long int) /*8ul*/ );
    old1 = (unsigned long int)return_value___uatomic_cmpxchg_2;
  }
  while(!(old1 == old2));
  return old2;
}

// alloc_cds_lfht
// file rculfhash-mm-order.c line 77
static struct cds_lfht * alloc_cds_lfht(unsigned long int min_nr_alloc_buckets, unsigned long int max_nr_buckets)
{
  struct cds_lfht *return_value___default_alloc_cds_lfht_1;
  return_value___default_alloc_cds_lfht_1=__default_alloc_cds_lfht(&cds_lfht_mm_order, sizeof(struct cds_lfht) /*656ul*/ , min_nr_alloc_buckets, max_nr_buckets);
  return return_value___default_alloc_cds_lfht_1;
}

// alloc_cds_lfht_link1
// file rculfhash-mm-chunk.c line 75
static struct cds_lfht * alloc_cds_lfht_link1(unsigned long int min_nr_alloc_buckets_link1, unsigned long int max_nr_buckets_link1)
{
  unsigned long int nr_chunks;
  unsigned long int cds_lfht_size;
  min_nr_alloc_buckets_link1 = min_nr_alloc_buckets_link1 > max_nr_buckets_link1 / (1UL << 10) ? min_nr_alloc_buckets_link1 : max_nr_buckets_link1 / (1UL << 10);
  nr_chunks = max_nr_buckets_link1 / min_nr_alloc_buckets_link1;
  cds_lfht_size = 144ul + sizeof(struct cds_lfht_node *) /*8ul*/  * nr_chunks;
  cds_lfht_size = cds_lfht_size > sizeof(struct cds_lfht) /*656ul*/  ? cds_lfht_size : sizeof(struct cds_lfht) /*656ul*/ ;
  struct cds_lfht *return_value___default_alloc_cds_lfht_1_link1;
  return_value___default_alloc_cds_lfht_1_link1=__default_alloc_cds_lfht_link1(&cds_lfht_mm_chunk, cds_lfht_size, min_nr_alloc_buckets_link1, max_nr_buckets_link1);
  return return_value___default_alloc_cds_lfht_1_link1;
}

// alloc_cds_lfht_link2
// file rculfhash-mm-mmap.c line 135
static struct cds_lfht * alloc_cds_lfht_link2(unsigned long int min_nr_alloc_buckets_link2, unsigned long int max_nr_buckets_link2)
{
  unsigned long int page_bucket_size;
  signed int return_value_getpagesize_1;
  return_value_getpagesize_1=getpagesize();
  page_bucket_size = (unsigned long int)return_value_getpagesize_1 / sizeof(struct cds_lfht_node) /*16ul*/ ;
  if(page_bucket_size >= max_nr_buckets_link2)
    min_nr_alloc_buckets_link2 = max_nr_buckets_link2;

  else
    min_nr_alloc_buckets_link2 = min_nr_alloc_buckets_link2 > page_bucket_size ? min_nr_alloc_buckets_link2 : page_bucket_size;
  struct cds_lfht *return_value___default_alloc_cds_lfht_2;
  return_value___default_alloc_cds_lfht_2=__default_alloc_cds_lfht_link2(&cds_lfht_mm_mmap, sizeof(struct cds_lfht) /*656ul*/ , min_nr_alloc_buckets_link2, max_nr_buckets_link2);
  return return_value___default_alloc_cds_lfht_2;
}

// alloc_split_items_count
// file rculfhash.c line 594
static void alloc_split_items_count(struct cds_lfht *ht)
{
  if(nr_cpus_mask == -1l)
  {
    ht_init_nr_cpus_mask();
    if(!(nr_cpus_mask >= 0l))
      split_count_mask = (signed long int)0xFUL;

    else
      split_count_mask = nr_cpus_mask;
    split_count_order=cds_lfht_get_count_order_ulong((unsigned long int)(split_count_mask + (signed long int)1));
  }

  /* assertion split_count_mask >= 0 */
  assert(split_count_mask >= (signed long int)0);
  if(!((2 & ht->flags) == 0))
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)(split_count_mask + (signed long int)1), sizeof(struct ht_items_count) /*128ul*/ );
    ht->split_count = (struct ht_items_count *)return_value_calloc_1;
    /* assertion ht->split_count */
    assert(ht->split_count != ((struct ht_items_count *)NULL));
  }

  else
    ht->split_count = (struct ht_items_count *)(void *)0;
}

// bit_reverse_u64
// file rculfhash.c line 396
static unsigned long int bit_reverse_u64(unsigned long int v)
{
  unsigned char return_value_bit_reverse_u8_1;
  return_value_bit_reverse_u8_1=bit_reverse_u8((unsigned char)v);
  unsigned char return_value_bit_reverse_u8_2;
  return_value_bit_reverse_u8_2=bit_reverse_u8((unsigned char)(v >> 8));
  unsigned char return_value_bit_reverse_u8_3;
  return_value_bit_reverse_u8_3=bit_reverse_u8((unsigned char)(v >> 16));
  unsigned char return_value_bit_reverse_u8_4;
  return_value_bit_reverse_u8_4=bit_reverse_u8((unsigned char)(v >> 24));
  unsigned char return_value_bit_reverse_u8_5;
  return_value_bit_reverse_u8_5=bit_reverse_u8((unsigned char)(v >> 32));
  unsigned char return_value_bit_reverse_u8_6;
  return_value_bit_reverse_u8_6=bit_reverse_u8((unsigned char)(v >> 40));
  unsigned char return_value_bit_reverse_u8_7;
  return_value_bit_reverse_u8_7=bit_reverse_u8((unsigned char)(v >> 48));
  unsigned char return_value_bit_reverse_u8_8;
  return_value_bit_reverse_u8_8=bit_reverse_u8((unsigned char)(v >> 56));
  return (unsigned long int)return_value_bit_reverse_u8_1 << 56 | (unsigned long int)return_value_bit_reverse_u8_2 << 48 | (unsigned long int)return_value_bit_reverse_u8_3 << 40 | (unsigned long int)return_value_bit_reverse_u8_4 << 32 | (unsigned long int)return_value_bit_reverse_u8_5 << 24 | (unsigned long int)return_value_bit_reverse_u8_6 << 16 | (unsigned long int)return_value_bit_reverse_u8_7 << 8 | (unsigned long int)return_value_bit_reverse_u8_8;
}

// bit_reverse_u8
// file rculfhash.c line 380
static unsigned char bit_reverse_u8(unsigned char v)
{
  return BitReverseTable256[(signed long int)v];
}

// bit_reverse_ulong
// file rculfhash.c line 410
static unsigned long int bit_reverse_ulong(unsigned long int v)
{
  unsigned long int return_value_bit_reverse_u64_1;
  return_value_bit_reverse_u64_1=bit_reverse_u64(v);
  return return_value_bit_reverse_u64_1;
}

// bucket_at
// file rculfhash.c line 834
static inline struct cds_lfht_node * bucket_at(struct cds_lfht *ht, unsigned long int index)
{
  struct cds_lfht_node *return_value;
  return_value=ht->bucket_at(ht, index);
  return return_value;
}

// bucket_at_link1
// file rculfhash-mm-order.c line 57
static struct cds_lfht_node * bucket_at_link1(struct cds_lfht *ht_link1, unsigned long int index_link1)
{
  unsigned long int order;
  if(!(index_link1 >= ht_link1->min_nr_alloc_buckets))
  {
    while((_Bool)0)
      ;
    return &ht_link1->_anon0.tbl_order[(signed long int)0][(signed long int)index_link1];
  }

  else
  {
    unsigned int return_value_cds_lfht_fls_ulong_1;
    return_value_cds_lfht_fls_ulong_1=cds_lfht_fls_ulong(index_link1);
    order = (unsigned long int)return_value_cds_lfht_fls_ulong_1;
    while((_Bool)0)
      ;
    return &ht_link1->_anon0.tbl_order[(signed long int)order][(signed long int)(index_link1 & (1UL << order - (unsigned long int)1) - (unsigned long int)1)];
  }
}

// bucket_at_link2
// file rculfhash-mm-chunk.c line 65
static struct cds_lfht_node * bucket_at_link2(struct cds_lfht *ht_link2, unsigned long int index_link2)
{
  unsigned long int chunk;
  unsigned long int offset;
  chunk = index_link2 >> ht_link2->min_alloc_buckets_order;
  offset = index_link2 & ht_link2->min_nr_alloc_buckets - (unsigned long int)1;
  return &ht_link2->_anon0.tbl_chunk[(signed long int)chunk][(signed long int)offset];
}

// bucket_at_link3
// file rculfhash-mm-mmap.c line 129
static struct cds_lfht_node * bucket_at_link3(struct cds_lfht *ht_link3, unsigned long int index_link3)
{
  return &ht_link3->_anon0.tbl_mmap[(signed long int)index_link3];
}

// cds_lfht_add
// file rculfhash.c line 1643
extern void cds_lfht_add(struct cds_lfht *ht, unsigned long int hash, struct cds_lfht_node *node)
{
  unsigned long int size;
  node->reverse_hash=bit_reverse_ulong(hash);
  unsigned long int tmp_statement_expression_1;
  unsigned long int _________p1;
  volatile unsigned long int tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((volatile unsigned long int *)&ht->size);
  _________p1 = tmp_statement_expression_2;
  tmp_statement_expression_1 = _________p1;
  size = tmp_statement_expression_1;
  _cds_lfht_add(ht, hash, (signed int (*)(struct cds_lfht_node *, const void *))(void *)0, (void *)0, size, node, (struct cds_lfht_iter *)(void *)0, 0);
  ht_count_add(ht, size, hash);
}

// cds_lfht_add_replace
// file rculfhash.c line 1671
extern struct cds_lfht_node * cds_lfht_add_replace(struct cds_lfht *ht, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_node *node)
{
  unsigned long int size;
  struct cds_lfht_iter iter;
  node->reverse_hash=bit_reverse_ulong(hash);
  unsigned long int tmp_statement_expression_1;
  unsigned long int _________p1;
  volatile unsigned long int tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((volatile unsigned long int *)&ht->size);
  _________p1 = tmp_statement_expression_2;
  tmp_statement_expression_1 = _________p1;
  size = tmp_statement_expression_1;
  do
  {
    _cds_lfht_add(ht, hash, match, key, size, node, &iter, 0);
    if(iter.node == node)
    {
      ht_count_add(ht, size, hash);
      return (struct cds_lfht_node *)(void *)0;
    }

    signed int return_value__cds_lfht_replace_3;
    return_value__cds_lfht_replace_3=_cds_lfht_replace(ht, size, iter.node, iter.next, node);
    if(return_value__cds_lfht_replace_3 == 0)
      return iter.node;

  }
  while((_Bool)1);
}

// cds_lfht_add_unique
// file rculfhash.c line 1654
extern struct cds_lfht_node * cds_lfht_add_unique(struct cds_lfht *ht, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_node *node)
{
  unsigned long int size;
  struct cds_lfht_iter iter;
  node->reverse_hash=bit_reverse_ulong(hash);
  unsigned long int tmp_statement_expression_1;
  unsigned long int _________p1;
  volatile unsigned long int tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((volatile unsigned long int *)&ht->size);
  _________p1 = tmp_statement_expression_2;
  tmp_statement_expression_1 = _________p1;
  size = tmp_statement_expression_1;
  _cds_lfht_add(ht, hash, match, key, size, node, &iter, 0);
  if(iter.node == node)
    ht_count_add(ht, size, hash);

  return iter.node;
}

// cds_lfht_alloc_bucket_table
// file rculfhash.c line 817
static void cds_lfht_alloc_bucket_table(struct cds_lfht *ht, unsigned long int order)
{
  ht->mm->alloc_bucket_table(ht, order);
}

// cds_lfht_alloc_bucket_table_link1
// file rculfhash-mm-order.c line 27
static void cds_lfht_alloc_bucket_table_link1(struct cds_lfht *ht_link1, unsigned long int order_link1)
{
  if(order_link1 == 0ul)
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc(ht_link1->min_nr_alloc_buckets, sizeof(struct cds_lfht_node) /*16ul*/ );
    ht_link1->_anon0.tbl_order[(signed long int)0] = (struct cds_lfht_node *)return_value_calloc_1;
    /* assertion ht->tbl_order[0] */
    assert(ht_link1->_anon0.tbl_order[(signed long int)0] != ((struct cds_lfht_node *)NULL));
  }

  else
    if(!(ht_link1->min_alloc_buckets_order >= order_link1))
    {
      void *return_value_calloc_2;
      return_value_calloc_2=calloc(1UL << order_link1 - (unsigned long int)1, sizeof(struct cds_lfht_node) /*16ul*/ );
      ht_link1->_anon0.tbl_order[(signed long int)order_link1] = (struct cds_lfht_node *)return_value_calloc_2;
      /* assertion ht->tbl_order[order] */
      assert(ht_link1->_anon0.tbl_order[(signed long int)order_link1] != ((struct cds_lfht_node *)NULL));
    }

}

// cds_lfht_alloc_bucket_table_link2
// file rculfhash-mm-chunk.c line 27
static void cds_lfht_alloc_bucket_table_link2(struct cds_lfht *ht_link2, unsigned long int order_link2)
{
  if(order_link2 == 0ul)
  {
    void *return_value_calloc_1_link1;
    return_value_calloc_1_link1=calloc(ht_link2->min_nr_alloc_buckets, sizeof(struct cds_lfht_node) /*16ul*/ );
    ht_link2->_anon0.tbl_chunk[(signed long int)0] = (struct cds_lfht_node *)return_value_calloc_1_link1;
    /* assertion ht->tbl_chunk[0] */
    assert(ht_link2->_anon0.tbl_chunk[(signed long int)0] != ((struct cds_lfht_node *)NULL));
  }

  else
    if(!(ht_link2->min_alloc_buckets_order >= order_link2))
    {
      unsigned long int i;
      unsigned long int len = 1UL << (order_link2 - (unsigned long int)1) - ht_link2->min_alloc_buckets_order;
      i = len;
      for( ; !(i >= 2ul * len); i = i + 1ul)
      {
        void *return_value_calloc_2_link1;
        return_value_calloc_2_link1=calloc(ht_link2->min_nr_alloc_buckets, sizeof(struct cds_lfht_node) /*16ul*/ );
        ht_link2->_anon0.tbl_chunk[(signed long int)i] = (struct cds_lfht_node *)return_value_calloc_2_link1;
        /* assertion ht->tbl_chunk[i] */
        assert(ht_link2->_anon0.tbl_chunk[(signed long int)i] != ((struct cds_lfht_node *)NULL));
      }
    }

}

// cds_lfht_alloc_bucket_table_link3
// file rculfhash-mm-mmap.c line 75
static void cds_lfht_alloc_bucket_table_link3(struct cds_lfht *ht_link3, unsigned long int order_link3)
{
  if(order_link3 == 0ul)
  {
    if(ht_link3->min_nr_alloc_buckets == ht_link3->max_nr_buckets)
    {
      void *return_value_calloc_1_link2;
      return_value_calloc_1_link2=calloc(ht_link3->max_nr_buckets, sizeof(struct cds_lfht_node) /*16ul*/ );
      ht_link3->_anon0.tbl_mmap = (struct cds_lfht_node *)return_value_calloc_1_link2;
      /* assertion ht->tbl_mmap */
      assert(ht_link3->_anon0.tbl_mmap != ((struct cds_lfht_node *)NULL));
      goto __CPROVER_DUMP_L3;
    }

    void *return_value_memory_map_2;
    return_value_memory_map_2=memory_map(ht_link3->max_nr_buckets * sizeof(struct cds_lfht_node) /*16ul*/ );
    ht_link3->_anon0.tbl_mmap = (struct cds_lfht_node *)return_value_memory_map_2;
    memory_populate((void *)ht_link3->_anon0.tbl_mmap, ht_link3->min_nr_alloc_buckets * sizeof(struct cds_lfht_node) /*16ul*/ );
  }

  else
    if(!(ht_link3->min_alloc_buckets_order >= order_link3))
    {
      unsigned long int len_link1 = 1UL << order_link3 - (unsigned long int)1;
      /* assertion ht->min_nr_alloc_buckets < ht->max_nr_buckets */
      assert(ht_link3->min_nr_alloc_buckets < ht_link3->max_nr_buckets);
      memory_populate((void *)(ht_link3->_anon0.tbl_mmap + (signed long int)len_link1), len_link1 * sizeof(struct cds_lfht_node) /*16ul*/ );
    }


__CPROVER_DUMP_L3:
  ;
}

// cds_lfht_count_nodes
// file rculfhash.c line 1806
extern void cds_lfht_count_nodes(struct cds_lfht *ht, signed long int *approx_before, unsigned long int *count, signed long int *approx_after)
{
  struct cds_lfht_node *node;
  struct cds_lfht_node *next;
  unsigned long int nr_bucket = (unsigned long int)0;
  unsigned long int nr_removed = (unsigned long int)0;
  *approx_before = (signed long int)0;
  volatile unsigned long int tmp_statement_expression_1;
  volatile unsigned long int tmp_statement_expression_2;
  if(!(ht->split_count == ((struct ht_items_count *)NULL)))
  {
    signed int cds_lfht_count_nodes__1__1__i = 0;
    for( ; !((signed long int)cds_lfht_count_nodes__1__1__i >= 1l + split_count_mask); cds_lfht_count_nodes__1__1__i = cds_lfht_count_nodes__1__1__i + 1)
    {
      asm("" :  :  : "memory");
      tmp_statement_expression_1 = *((volatile unsigned long int *)&(*(&(ht->split_count + (signed long int)cds_lfht_count_nodes__1__1__i)->add)));
      *approx_before = *approx_before + (signed long int)tmp_statement_expression_1;
      asm("" :  :  : "memory");
      tmp_statement_expression_2 = *((volatile unsigned long int *)&(*(&(ht->split_count + (signed long int)cds_lfht_count_nodes__1__1__i)->del)));
      *approx_before = *approx_before - (signed long int)tmp_statement_expression_2;
    }
  }

  *count = (unsigned long int)0;
  node=bucket_at(ht, (unsigned long int)0);
  struct cds_lfht_node *tmp_statement_expression_4;
  struct cds_lfht_node * volatile tmp_statement_expression_5;
  signed int return_value_is_bucket_7;
  signed int return_value_is_end_3;
  do
  {
    struct cds_lfht_node *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_5 = *((struct cds_lfht_node * volatile *)&node->next);
    _________p1 = tmp_statement_expression_5;
    tmp_statement_expression_4 = _________p1;
    next = tmp_statement_expression_4;
    signed int return_value_is_removed_8;
    return_value_is_removed_8=is_removed(next);
    if(!(return_value_is_removed_8 == 0))
    {
      signed int return_value_is_bucket_6;
      return_value_is_bucket_6=is_bucket(next);
      if(return_value_is_bucket_6 == 0)
        nr_removed = nr_removed + 1ul;

      else
        nr_bucket = nr_bucket + 1ul;
    }

    else
    {
      return_value_is_bucket_7=is_bucket(next);
      if(return_value_is_bucket_7 == 0)
        *count = *count + 1ul;

      else
        nr_bucket = nr_bucket + 1ul;
    }
    node=clear_flag(next);
    return_value_is_end_3=is_end(node);
  }
  while(return_value_is_end_3 == 0);
  while((_Bool)0)
    ;
  while((_Bool)0)
    ;
  *approx_after = (signed long int)0;
  volatile unsigned long int tmp_statement_expression_9;
  volatile unsigned long int tmp_statement_expression_10;
  if(!(ht->split_count == ((struct ht_items_count *)NULL)))
  {
    signed int i = 0;
    for( ; !((signed long int)i >= 1l + split_count_mask); i = i + 1)
    {
      asm("" :  :  : "memory");
      tmp_statement_expression_9 = *((volatile unsigned long int *)&(*(&(ht->split_count + (signed long int)i)->add)));
      *approx_after = *approx_after + (signed long int)tmp_statement_expression_9;
      asm("" :  :  : "memory");
      tmp_statement_expression_10 = *((volatile unsigned long int *)&(*(&(ht->split_count + (signed long int)i)->del)));
      *approx_after = *approx_after - (signed long int)tmp_statement_expression_10;
    }
  }

}

// cds_lfht_create_bucket
// file rculfhash.c line 1423
static void cds_lfht_create_bucket(struct cds_lfht *ht, unsigned long int size)
{
  struct cds_lfht_node *prev;
  struct cds_lfht_node *node;
  unsigned long int order;
  unsigned long int len;
  unsigned long int i;
  cds_lfht_alloc_bucket_table(ht, (unsigned long int)0);
  while((_Bool)0)
    ;
  node=bucket_at(ht, (unsigned long int)0);
  struct cds_lfht_node *return_value_get_end_1;
  return_value_get_end_1=get_end();
  node->next=flag_bucket(return_value_get_end_1);
  node->reverse_hash = (unsigned long int)0;
  order = (unsigned long int)1;
  signed int return_value_cds_lfht_get_count_order_ulong_2;
  do
  {
    return_value_cds_lfht_get_count_order_ulong_2=cds_lfht_get_count_order_ulong(size);
    if(order >= (unsigned long int)(1 + return_value_cds_lfht_get_count_order_ulong_2))
      break;

    len = 1UL << order - (unsigned long int)1;
    cds_lfht_alloc_bucket_table(ht, order);
    i = (unsigned long int)0;
    for( ; !(i >= len); i = i + 1ul)
    {
      prev=bucket_at(ht, i);
      node=bucket_at(ht, len + i);
      while((_Bool)0)
        ;
      node->reverse_hash=bit_reverse_ulong(len + i);
      signed int return_value_is_bucket_3;
      return_value_is_bucket_3=is_bucket(prev->next);
      /* assertion is_bucket(prev->next) */
      assert(return_value_is_bucket_3 != 0);
      node->next = prev->next;
      prev->next=flag_bucket(node);
    }
    order = order + 1ul;
  }
  while((_Bool)1);
}

// cds_lfht_del
// file rculfhash.c line 1715
extern signed int cds_lfht_del(struct cds_lfht *ht, struct cds_lfht_node *node)
{
  unsigned long int size;
  signed int ret;
  unsigned long int tmp_statement_expression_1;
  unsigned long int _________p1;
  volatile unsigned long int tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((volatile unsigned long int *)&ht->size);
  _________p1 = tmp_statement_expression_2;
  tmp_statement_expression_1 = _________p1;
  size = tmp_statement_expression_1;
  ret=_cds_lfht_del(ht, size, node);
  if(ret == 0)
  {
    unsigned long int hash;
    hash=bit_reverse_ulong(node->reverse_hash);
    ht_count_del(ht, size, hash);
  }

  return ret;
}

// cds_lfht_delete_bucket
// file rculfhash.c line 1737
static signed int cds_lfht_delete_bucket(struct cds_lfht *ht)
{
  struct cds_lfht_node *node;
  unsigned long int order;
  unsigned long int i;
  unsigned long int size;
  node=bucket_at(ht, (unsigned long int)0);
  signed int return_value_is_end_1;
  do
  {
    struct cds_lfht_node *return_value_clear_flag_2;
    return_value_clear_flag_2=clear_flag(node);
    node = return_value_clear_flag_2->next;
    signed int return_value_is_bucket_3;
    return_value_is_bucket_3=is_bucket(node);
    if(return_value_is_bucket_3 == 0)
      return -1;

    signed int return_value_is_removed_4;
    return_value_is_removed_4=is_removed(node);
    /* assertion !is_removed(node) */
    assert(!(return_value_is_removed_4 != 0));
    signed int return_value_is_removal_owner_5;
    return_value_is_removal_owner_5=is_removal_owner(node);
    /* assertion !is_removal_owner(node) */
    assert(!(return_value_is_removal_owner_5 != 0));
    return_value_is_end_1=is_end(node);
  }
  while(return_value_is_end_1 == 0);
  size = ht->size;
  i = (unsigned long int)0;
  unsigned long int return_value_bit_reverse_ulong_6;
  for( ; !(i >= size); i = i + 1ul)
  {
    node=bucket_at(ht, i);
    while((_Bool)0)
      ;
    signed int return_value_is_bucket_7;
    return_value_is_bucket_7=is_bucket(node->next);
    /* assertion is_bucket(node->next) */
    assert(return_value_is_bucket_7 != 0);
  }
  signed int return_value_cds_lfht_get_count_order_ulong_8;
  return_value_cds_lfht_get_count_order_ulong_8=cds_lfht_get_count_order_ulong(size);
  order = (unsigned long int)return_value_cds_lfht_get_count_order_ulong_8;
  for( ; (signed long int)order >= 0l; order = order - 1ul)
    cds_lfht_free_bucket_table(ht, order);
  return 0;
}

// cds_lfht_destroy
// file rculfhash.c line 1774
extern signed int cds_lfht_destroy(struct cds_lfht *ht, union pthread_attr_t **attr)
{
  signed int ret;
  signed int was_online;
  *((volatile unsigned int *)&ht->in_progress_destroy) = (volatile unsigned int)1;
  asm("mfence" :  :  : "memory");
  was_online=ht->flavor->read_ongoing();
  if(!(was_online == 0))
    ht->flavor->thread_offline();

  signed int return_value;
  return_value=ht->flavor->read_ongoing();
  volatile unsigned int tmp_statement_expression_1;
  if(!(return_value == 0))
  {
    ret = -22;
    if(!(was_online == 0))
      ht->flavor->thread_online();

  }

  else
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile unsigned int *)&(*(&ht->in_progress_resize)));
    if(!(tmp_statement_expression_1 == 0u))
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 100);

    if(!(was_online == 0))
      ht->flavor->thread_online();

    ret=cds_lfht_delete_bucket(ht);
    if(!(ret == 0))
      return ret;

    free_split_items_count(ht);
    if(!(attr == ((union pthread_attr_t **)NULL)))
      *attr = ht->resize_attr;

    free((void *)ht);
  }

end:
  ;
  return ret;
}

// cds_lfht_first
// file rculfhash.c line 1633
extern void cds_lfht_first(struct cds_lfht *ht, struct cds_lfht_iter *iter)
{
  struct cds_lfht_node *return_value_bucket_at_1;
  return_value_bucket_at_1=bucket_at(ht, (unsigned long int)0);
  iter->next = return_value_bucket_at_1->next;
  cds_lfht_next(ht, iter);
}

// cds_lfht_fls_ulong
// file rculfhash.c line 525
extern unsigned int cds_lfht_fls_ulong(unsigned long int x)
{
  unsigned int return_value_fls_u64_1;
  return_value_fls_u64_1=fls_u64(x);
  return return_value_fls_u64_1;
}

// cds_lfht_free_bucket_table
// file rculfhash.c line 828
static void cds_lfht_free_bucket_table(struct cds_lfht *ht, unsigned long int order)
{
  ht->mm->free_bucket_table(ht, order);
}

// cds_lfht_free_bucket_table_link1
// file rculfhash-mm-order.c line 47
static void cds_lfht_free_bucket_table_link1(struct cds_lfht *ht_link1, unsigned long int order_link1)
{
  if(order_link1 == 0ul)
    free((void *)ht_link1->_anon0.tbl_order[(signed long int)0]);

  else
    if(!(ht_link1->min_alloc_buckets_order >= order_link1))
      free((void *)ht_link1->_anon0.tbl_order[(signed long int)order_link1]);

}

// cds_lfht_free_bucket_table_link2
// file rculfhash-mm-chunk.c line 51
static void cds_lfht_free_bucket_table_link2(struct cds_lfht *ht_link2, unsigned long int order_link2)
{
  if(order_link2 == 0ul)
    free((void *)ht_link2->_anon0.tbl_chunk[(signed long int)0]);

  else
    if(!(ht_link2->min_alloc_buckets_order >= order_link2))
    {
      unsigned long int i;
      unsigned long int len = 1UL << (order_link2 - (unsigned long int)1) - ht_link2->min_alloc_buckets_order;
      i = len;
      for( ; !(i >= 2ul * len); i = i + 1ul)
        free((void *)ht_link2->_anon0.tbl_chunk[(signed long int)i]);
    }

}

// cds_lfht_free_bucket_table_link3
// file rculfhash-mm-mmap.c line 107
static void cds_lfht_free_bucket_table_link3(struct cds_lfht *ht_link3, unsigned long int order_link3)
{
  if(order_link3 == 0ul)
  {
    if(ht_link3->min_nr_alloc_buckets == ht_link3->max_nr_buckets)
    {
      free((void *)ht_link3->_anon0.tbl_mmap);
      goto __CPROVER_DUMP_L3;
    }

    memory_unmap((void *)ht_link3->_anon0.tbl_mmap, ht_link3->max_nr_buckets * sizeof(struct cds_lfht_node) /*16ul*/ );
  }

  else
    if(!(ht_link3->min_alloc_buckets_order >= order_link3))
    {
      unsigned long int len = 1UL << order_link3 - (unsigned long int)1;
      /* assertion ht->min_nr_alloc_buckets < ht->max_nr_buckets */
      assert(ht_link3->min_nr_alloc_buckets < ht_link3->max_nr_buckets);
      memory_discard((void *)(ht_link3->_anon0.tbl_mmap + (signed long int)len), len * sizeof(struct cds_lfht_node) /*16ul*/ );
    }


__CPROVER_DUMP_L3:
  ;
}

// cds_lfht_get_count_order_u32
// file rculfhash.c line 538
signed int cds_lfht_get_count_order_u32(unsigned int x)
{
  if(x == 0u)
    return -1;

  else
  {
    unsigned int return_value_fls_u32_1;
    return_value_fls_u32_1=fls_u32(x - (unsigned int)1);
    return (signed int)return_value_fls_u32_1;
  }
}

// cds_lfht_get_count_order_ulong
// file rculfhash.c line 550
extern signed int cds_lfht_get_count_order_ulong(unsigned long int x)
{
  if(x == 0ul)
    return -1;

  else
  {
    unsigned int return_value_cds_lfht_fls_ulong_1;
    return_value_cds_lfht_fls_ulong_1=cds_lfht_fls_ulong(x - (unsigned long int)1);
    return (signed int)return_value_cds_lfht_fls_ulong_1;
  }
}

// cds_lfht_is_node_deleted
// file rculfhash.c line 1731
extern signed int cds_lfht_is_node_deleted(struct cds_lfht_node *node)
{
  struct cds_lfht_node * volatile tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((struct cds_lfht_node * volatile *)&node->next);
  signed int return_value_is_removed_2;
  return_value_is_removed_2=is_removed(tmp_statement_expression_1);
  return return_value_is_removed_2;
}

// cds_lfht_lookup
// file rculfhash.c line 1540
extern void cds_lfht_lookup(struct cds_lfht *ht, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_iter *iter)
{
  struct cds_lfht_node *node;
  struct cds_lfht_node *next;
  struct cds_lfht_node *bucket;
  unsigned long int reverse_hash;
  unsigned long int size;
  reverse_hash=bit_reverse_ulong(hash);
  unsigned long int tmp_statement_expression_1;
  unsigned long int _________p1;
  volatile unsigned long int tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((volatile unsigned long int *)&ht->size);
  _________p1 = tmp_statement_expression_2;
  tmp_statement_expression_1 = _________p1;
  size = tmp_statement_expression_1;
  bucket=lookup_bucket(ht, size, hash);
  struct cds_lfht_node *tmp_statement_expression_3;
  struct cds_lfht_node *cds_lfht_lookup__1__2___________p1;
  struct cds_lfht_node * volatile tmp_statement_expression_4;
  asm("" :  :  : "memory");
  tmp_statement_expression_4 = *((struct cds_lfht_node * volatile *)&bucket->next);
  cds_lfht_lookup__1__2___________p1 = tmp_statement_expression_4;
  tmp_statement_expression_3 = cds_lfht_lookup__1__2___________p1;
  node = tmp_statement_expression_3;
  node=clear_flag(node);
  struct cds_lfht_node *tmp_statement_expression_6;
  struct cds_lfht_node * volatile tmp_statement_expression_7;
  signed int return_value_is_bucket_9;
  signed int return_value;
  do
  {
    signed int return_value_is_end_5;
    return_value_is_end_5=is_end(node);
    if(!(return_value_is_end_5 == 0))
    {
      next = (struct cds_lfht_node *)(void *)0;
      node = next;
      break;
    }

    if(!(reverse_hash >= node->reverse_hash))
    {
      next = (struct cds_lfht_node *)(void *)0;
      node = next;
      break;
    }

    struct cds_lfht_node *cds_lfht_lookup__1__3__1__3___________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_7 = *((struct cds_lfht_node * volatile *)&node->next);
    cds_lfht_lookup__1__3__1__3___________p1 = tmp_statement_expression_7;
    tmp_statement_expression_6 = cds_lfht_lookup__1__3__1__3___________p1;
    next = tmp_statement_expression_6;
    struct cds_lfht_node *return_value_clear_flag_8;
    return_value_clear_flag_8=clear_flag(node);
    /* assertion node == clear_flag(node) */
    assert(node == return_value_clear_flag_8);
    signed int return_value_is_removed_10;
    return_value_is_removed_10=is_removed(next);
    if(return_value_is_removed_10 == 0)
    {
      return_value_is_bucket_9=is_bucket(next);
      if(return_value_is_bucket_9 == 0)
      {
        if(node->reverse_hash == reverse_hash)
        {
          return_value=match(node, key);
          if(!(return_value == 0))
            break;

        }

      }

    }

    node=clear_flag(next);
  }
  while((_Bool)1);
  _Bool tmp_if_expr_13;
  struct cds_lfht_node * volatile tmp_statement_expression_11;
  signed int return_value_is_bucket_12;
  if(node == ((struct cds_lfht_node *)NULL))
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_11 = *((struct cds_lfht_node * volatile *)&node->next);
    return_value_is_bucket_12=is_bucket(tmp_statement_expression_11);
    tmp_if_expr_13 = !(return_value_is_bucket_12 != 0) ? (_Bool)1 : (_Bool)0;
  }
  /* assertion !node || !is_bucket(__extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(node->next) *)&(node->next)); })) */
  assert(tmp_if_expr_13);
  iter->node = node;
  iter->next = next;
}

// cds_lfht_next
// file rculfhash.c line 1611
extern void cds_lfht_next(struct cds_lfht *ht, struct cds_lfht_iter *iter)
{
  struct cds_lfht_node *node;
  struct cds_lfht_node *next;
  node=clear_flag(iter->next);
  struct cds_lfht_node *tmp_statement_expression_2;
  struct cds_lfht_node * volatile tmp_statement_expression_3;
  signed int return_value_is_bucket_4;
  do
  {
    signed int return_value_is_end_1;
    return_value_is_end_1=is_end(node);
    if(!(return_value_is_end_1 == 0))
    {
      next = (struct cds_lfht_node *)(void *)0;
      node = next;
      break;
    }

    struct cds_lfht_node *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_3 = *((struct cds_lfht_node * volatile *)&node->next);
    _________p1 = tmp_statement_expression_3;
    tmp_statement_expression_2 = _________p1;
    next = tmp_statement_expression_2;
    signed int return_value_is_removed_5;
    return_value_is_removed_5=is_removed(next);
    if(return_value_is_removed_5 == 0)
    {
      return_value_is_bucket_4=is_bucket(next);
      if(return_value_is_bucket_4 == 0)
        break;

    }

    node=clear_flag(next);
  }
  while((_Bool)1);
  _Bool tmp_if_expr_8;
  struct cds_lfht_node * volatile tmp_statement_expression_6;
  signed int return_value_is_bucket_7;
  if(node == ((struct cds_lfht_node *)NULL))
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_6 = *((struct cds_lfht_node * volatile *)&node->next);
    return_value_is_bucket_7=is_bucket(tmp_statement_expression_6);
    tmp_if_expr_8 = !(return_value_is_bucket_7 != 0) ? (_Bool)1 : (_Bool)0;
  }
  /* assertion !node || !is_bucket(__extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(node->next) *)&(node->next)); })) */
  assert(tmp_if_expr_8);
  iter->node = node;
  iter->next = next;
}

// cds_lfht_next_duplicate
// file rculfhash.c line 1578
extern void cds_lfht_next_duplicate(struct cds_lfht *ht, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_iter *iter)
{
  struct cds_lfht_node *node;
  struct cds_lfht_node *next;
  unsigned long int reverse_hash;
  node = iter->node;
  reverse_hash = node->reverse_hash;
  next = iter->next;
  node=clear_flag(next);
  struct cds_lfht_node *tmp_statement_expression_2;
  struct cds_lfht_node * volatile tmp_statement_expression_3;
  signed int return_value_is_bucket_4;
  signed int return_value;
  do
  {
    signed int return_value_is_end_1;
    return_value_is_end_1=is_end(node);
    if(!(return_value_is_end_1 == 0))
    {
      next = (struct cds_lfht_node *)(void *)0;
      node = next;
      break;
    }

    if(!(reverse_hash >= node->reverse_hash))
    {
      next = (struct cds_lfht_node *)(void *)0;
      node = next;
      break;
    }

    struct cds_lfht_node *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_3 = *((struct cds_lfht_node * volatile *)&node->next);
    _________p1 = tmp_statement_expression_3;
    tmp_statement_expression_2 = _________p1;
    next = tmp_statement_expression_2;
    signed int return_value_is_removed_5;
    return_value_is_removed_5=is_removed(next);
    if(return_value_is_removed_5 == 0)
    {
      return_value_is_bucket_4=is_bucket(next);
      if(return_value_is_bucket_4 == 0)
      {
        return_value=match(node, key);
        if(!(return_value == 0))
          break;

      }

    }

    node=clear_flag(next);
  }
  while((_Bool)1);
  _Bool tmp_if_expr_8;
  struct cds_lfht_node * volatile tmp_statement_expression_6;
  signed int return_value_is_bucket_7;
  if(node == ((struct cds_lfht_node *)NULL))
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_6 = *((struct cds_lfht_node * volatile *)&node->next);
    return_value_is_bucket_7=is_bucket(tmp_statement_expression_6);
    tmp_if_expr_8 = !(return_value_is_bucket_7 != 0) ? (_Bool)1 : (_Bool)0;
  }
  /* assertion !node || !is_bucket(__extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(node->next) *)&(node->next)); })) */
  assert(tmp_if_expr_8);
  iter->node = node;
  iter->next = next;
}

// cds_lfht_replace
// file rculfhash.c line 1694
extern signed int cds_lfht_replace(struct cds_lfht *ht, struct cds_lfht_iter *old_iter, unsigned long int hash, signed int (*match)(struct cds_lfht_node *, const void *), const void *key, struct cds_lfht_node *new_node)
{
  unsigned long int size;
  new_node->reverse_hash=bit_reverse_ulong(hash);
  unsigned long int tmp_statement_expression_1;
  volatile unsigned long int tmp_statement_expression_2;
  if(old_iter->node == ((struct cds_lfht_node *)NULL))
    return -2;

  else
    if(!(old_iter->node->reverse_hash == new_node->reverse_hash))
      return -22;

    else
    {
      signed int return_value;
      return_value=match(old_iter->node, key);
      if(return_value == 0)
        return -22;

      else
      {
        unsigned long int _________p1;
        asm("" :  :  : "memory");
        tmp_statement_expression_2 = *((volatile unsigned long int *)&ht->size);
        _________p1 = tmp_statement_expression_2;
        tmp_statement_expression_1 = _________p1;
        size = tmp_statement_expression_1;
        signed int return_value__cds_lfht_replace_3;
        return_value__cds_lfht_replace_3=_cds_lfht_replace(ht, size, old_iter->node, old_iter->next, new_node);
        return return_value__cds_lfht_replace_3;
      }
    }
}

// cds_lfht_resize
// file rculfhash.c line 1929
extern void cds_lfht_resize(struct cds_lfht *ht, unsigned long int new_size)
{
  signed int was_online;
  was_online=ht->flavor->read_ongoing();
  if(!(was_online == 0))
    ht->flavor->thread_offline();

  signed int return_value;
  return_value=ht->flavor->read_ongoing();
  volatile signed int tmp_statement_expression_1;
  volatile signed int tmp_statement_expression_2;
  volatile signed int tmp_statement_expression_3;
  if(!(return_value == 0))
  {
    asm("" :  :  : "memory");
    static signed int print_once;
    tmp_statement_expression_1 = *((volatile signed int *)&print_once);
    if(tmp_statement_expression_1 == 0)
      fprintf(stderr, "[error] rculfhash: cds_lfht_resize called with RCU read-side lock held.\n");

    signed int _v;
    *((volatile signed int *)&print_once) = 1;
    tmp_statement_expression_2 = *((volatile signed int *)&print_once);
    _v = tmp_statement_expression_2;
    asm("" :  :  : "memory");
    _v = _v;
    /* assertion 0 */
    assert(0 != 0);
  }

  else
  {
    resize_target_update_count(ht, new_size);
    signed int cds_lfht_resize__1__2___v;
    *((volatile signed int *)&ht->resize_initiated) = 1;
    tmp_statement_expression_3 = *((volatile signed int *)&ht->resize_initiated);
    cds_lfht_resize__1__2___v = tmp_statement_expression_3;
    asm("" :  :  : "memory");
    cds_lfht_resize__1__2___v = cds_lfht_resize__1__2___v;
    pthread_mutex_lock(&ht->resize_mutex);
    _do_cds_lfht_resize(ht);
    pthread_mutex_unlock(&ht->resize_mutex);
  }

end:
  ;
  if(!(was_online == 0))
    ht->flavor->thread_online();

}

// cds_lfht_resize_lazy_count
// file rculfhash.c line 2018
static void cds_lfht_resize_lazy_count(struct cds_lfht *ht, unsigned long int size, unsigned long int count)
{
  unsigned long int tmp_if_expr_1;
  if(!((1 & ht->flags) == 0))
  {
    count = count > 1UL << 0 ? count : 1UL << 0;
    if(!(count >= ht->max_nr_buckets))
      tmp_if_expr_1 = count;

    else
      tmp_if_expr_1 = ht->max_nr_buckets;
    count = tmp_if_expr_1;
    if(!(count == size))
    {
      if(!(size >= count))
      {
        unsigned long int return_value_resize_target_grow_2;
        return_value_resize_target_grow_2=resize_target_grow(ht, count);
        if(return_value_resize_target_grow_2 >= count)
          goto __CPROVER_DUMP_L8;

      }

      else
        do
        {
          unsigned long int s;
          unsigned long int return_value___uatomic_cmpxchg_3;
          return_value___uatomic_cmpxchg_3=__uatomic_cmpxchg_link3((void *)&ht->resize_target, (unsigned long int)size, (unsigned long int)count, (signed int)sizeof(unsigned long int) /*8ul*/ );
          s = (unsigned long int)return_value___uatomic_cmpxchg_3;
          if(s == size)
            break;

          if(!(size >= s))
            goto __CPROVER_DUMP_L8;

          if(count >= s)
            goto __CPROVER_DUMP_L8;

          size = s;
        }
        while((_Bool)1);
      __cds_lfht_resize_lazy_launch(ht);
    }

  }


__CPROVER_DUMP_L8:
  ;
}

// cds_lfht_resize_lazy_grow
// file rculfhash.c line 2001
static void cds_lfht_resize_lazy_grow(struct cds_lfht *ht, unsigned long int size, signed int growth)
{
  unsigned long int target_size = size << growth;
  unsigned long int tmp_if_expr_1;
  if(!(target_size >= ht->max_nr_buckets))
    tmp_if_expr_1 = target_size;

  else
    tmp_if_expr_1 = ht->max_nr_buckets;
  target_size = tmp_if_expr_1;
  unsigned long int return_value_resize_target_grow_2;
  return_value_resize_target_grow_2=resize_target_grow(ht, target_size);
  if(!(return_value_resize_target_grow_2 >= target_size))
    __cds_lfht_resize_lazy_launch(ht);

}

// cds_lfq_dequeue_rcu
// file rculfqueue.c line 56
extern struct cds_lfq_node_rcu * cds_lfq_dequeue_rcu(struct cds_lfq_queue_rcu *q)
{
  struct cds_lfq_node_rcu *return_value__cds_lfq_dequeue_rcu_1;
  return_value__cds_lfq_dequeue_rcu_1=_cds_lfq_dequeue_rcu(q);
  return return_value__cds_lfq_dequeue_rcu_1;
}

// cds_lfq_destroy_rcu
// file rculfqueue.c line 45
extern signed int cds_lfq_destroy_rcu(struct cds_lfq_queue_rcu *q)
{
  signed int return_value__cds_lfq_destroy_rcu_1;
  return_value__cds_lfq_destroy_rcu_1=_cds_lfq_destroy_rcu(q);
  return return_value__cds_lfq_destroy_rcu_1;
}

// cds_lfq_enqueue_rcu
// file rculfqueue.c line 50
extern void cds_lfq_enqueue_rcu(struct cds_lfq_queue_rcu *q, struct cds_lfq_node_rcu *node)
{
  _cds_lfq_enqueue_rcu(q, node);
}

// cds_lfq_init_rcu
// file rculfqueue.c line 38
extern void cds_lfq_init_rcu(struct cds_lfq_queue_rcu *q, void (*queue_call_rcu)(struct rcu_head *, void (*)(struct rcu_head *)))
{
  _cds_lfq_init_rcu(q, queue_call_rcu);
}

// cds_lfq_node_init_rcu
// file rculfqueue.c line 33
extern void cds_lfq_node_init_rcu(struct cds_lfq_node_rcu *node)
{
  _cds_lfq_node_init_rcu(node);
}

// cds_lfs_empty
// file lfstack.c line 48
extern _Bool cds_lfs_empty(union anonymous s)
{
  _Bool return_value__cds_lfs_empty_1;
  return_value__cds_lfs_empty_1=_cds_lfs_empty(s);
  return return_value__cds_lfs_empty_1;
}

// cds_lfs_init
// file ..//../../urcu/lfstack.h line 124
extern void cds_lfs_init(struct cds_lfs_stack *s)
{
  _cds_lfs_init(s);
}

// cds_lfs_init_rcu
// file rculfstack.c line 42
extern void cds_lfs_init_rcu(struct cds_lfs_stack_rcu *s)
{
  _cds_lfs_init_rcu(s);
}

// cds_lfs_node_init
// file ..//../../urcu/lfstack.h line 119
extern void cds_lfs_node_init(struct cds_lfs_node *node)
{
  _cds_lfs_node_init(node);
}

// cds_lfs_node_init_rcu
// file rculfstack.c line 37
extern void cds_lfs_node_init_rcu(struct cds_lfs_node_rcu *node)
{
  _cds_lfs_node_init_rcu(node);
}

// cds_lfs_pop_all_blocking
// file ..//../../urcu/lfstack.h line 161
extern struct cds_lfs_head * cds_lfs_pop_all_blocking(struct cds_lfs_stack *s)
{
  struct cds_lfs_head *return_value__cds_lfs_pop_all_blocking_1;
  return_value__cds_lfs_pop_all_blocking_1=_cds_lfs_pop_all_blocking(s);
  return return_value__cds_lfs_pop_all_blocking_1;
}

// cds_lfs_pop_blocking
// file lfstack.c line 58
extern struct cds_lfs_node * cds_lfs_pop_blocking(struct cds_lfs_stack *s)
{
  struct cds_lfs_node *return_value__cds_lfs_pop_blocking_1;
  return_value__cds_lfs_pop_blocking_1=_cds_lfs_pop_blocking(s);
  return return_value__cds_lfs_pop_blocking_1;
}

// cds_lfs_pop_lock
// file lfstack.c line 68
extern void cds_lfs_pop_lock(struct cds_lfs_stack *s)
{
  _cds_lfs_pop_lock(s);
}

// cds_lfs_pop_rcu
// file rculfstack.c line 53
extern struct cds_lfs_node_rcu * cds_lfs_pop_rcu(struct cds_lfs_stack_rcu *s)
{
  struct cds_lfs_node_rcu *return_value__cds_lfs_pop_rcu_1;
  return_value__cds_lfs_pop_rcu_1=_cds_lfs_pop_rcu(s);
  return return_value__cds_lfs_pop_rcu_1;
}

// cds_lfs_pop_unlock
// file lfstack.c line 73
extern void cds_lfs_pop_unlock(struct cds_lfs_stack *s)
{
  _cds_lfs_pop_unlock(s);
}

// cds_lfs_push
// file ..//../../urcu/lfstack.h line 146
extern _Bool cds_lfs_push(union anonymous s, struct cds_lfs_node *node)
{
  _Bool return_value__cds_lfs_push_1;
  return_value__cds_lfs_push_1=_cds_lfs_push(s, node);
  return return_value__cds_lfs_push_1;
}

// cds_lfs_push_rcu
// file rculfstack.c line 47
extern signed int cds_lfs_push_rcu(struct cds_lfs_stack_rcu *s, struct cds_lfs_node_rcu *node)
{
  signed int return_value__cds_lfs_push_rcu_1;
  return_value__cds_lfs_push_rcu_1=_cds_lfs_push_rcu(s, node);
  return return_value__cds_lfs_push_rcu_1;
}

// check_resize
// file rculfhash.c line 701
static void check_resize(struct cds_lfht *ht, unsigned long int size, unsigned int chain_len)
{
  unsigned long int count;
  volatile signed long int tmp_statement_expression_1;
  if(!((1 & ht->flags) == 0))
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile signed long int *)&(*(&ht->count)));
    count = (unsigned long int)tmp_statement_expression_1;
    if(!(count >= 1UL << 10 + split_count_order))
    {
      if(chain_len >= 101u)
        while((_Bool)0)
          ;

      if(chain_len >= 3u)
      {
        signed int growth;
        growth=cds_lfht_get_count_order_u32(chain_len - (unsigned int)(1 - 1));
        if(!((2 & ht->flags) == 0))
        {
          if(size << growth >= 1UL << 10 + split_count_order)
          {
            signed int return_value_cds_lfht_get_count_order_ulong_2;
            return_value_cds_lfht_get_count_order_ulong_2=cds_lfht_get_count_order_ulong(size);
            growth = (10 + split_count_order) - return_value_cds_lfht_get_count_order_ulong_2;
            if(!(growth >= 1))
              goto __CPROVER_DUMP_L9;

          }

        }

        cds_lfht_resize_lazy_grow(ht, size, growth);
      }

    }

  }


__CPROVER_DUMP_L9:
  ;
}

// clear_flag
// file rculfhash.c line 748
static struct cds_lfht_node * clear_flag(struct cds_lfht_node *node)
{
  return (struct cds_lfht_node *)((unsigned long int)node & ~((1UL << 3) - (unsigned long int)1));
}

// compat_futex_async
// file compat_futex.c line 116
extern signed int compat_futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed int ret = 0;
  /* assertion !timeout */
  assert(!(timeout != ((struct timespec *)NULL)));
  /* assertion !uaddr2 */
  assert(!(uaddr2 != ((signed int *)NULL)));
  /* assertion !val3 */
  assert(!(val3 != 0));
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_1;
  switch(op)
  {
    case 0:
    {
      do
      {
        asm("" :  :  : "memory");
        tmp_statement_expression_1 = *((volatile signed int *)&(*uaddr));
        if(!(tmp_statement_expression_1 == val))
          break;

        signed int return_value_poll_2;
        return_value_poll_2=poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
        if(!(return_value_poll_2 >= 0))
        {
          ret = -1;
          goto end;
        }

      }
      while((_Bool)1);
      break;
    }
    case 1:
      break;
    default:
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = 22;
      ret = -1;
    }
  }

end:
  ;
  return ret;
}

// compat_futex_noasync
// file compat_futex.c line 54
extern signed int compat_futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed int ret = 0;
  signed int lockret;
  /* assertion !timeout */
  assert(!(timeout != ((struct timespec *)NULL)));
  /* assertion !uaddr2 */
  assert(!(uaddr2 != ((signed int *)NULL)));
  /* assertion !val3 */
  assert(!(val3 != 0));
  asm("mfence" :  :  : "memory");
  lockret=pthread_mutex_lock(&__urcu_compat_futex_lock);
  if(!(lockret == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = lockret;
    ret = -1;
    goto end;
  }

  volatile signed int tmp_statement_expression_2;
  switch(op)
  {
    case 0:
    {
      do
      {
        asm("" :  :  : "memory");
        tmp_statement_expression_2 = *((volatile signed int *)&(*uaddr));
        if(!(tmp_statement_expression_2 == val))
          break;

        pthread_cond_wait(&__urcu_compat_futex_cond, &__urcu_compat_futex_lock);
      }
      while((_Bool)1);
      break;
    }
    case 1:
    {
      pthread_cond_broadcast(&__urcu_compat_futex_cond);
      break;
    }
    default:
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = 22;
      ret = -1;
    }
  }
  lockret=pthread_mutex_unlock(&__urcu_compat_futex_lock);
  if(!(lockret == 0))
  {
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = lockret;
    ret = -1;
  }


end:
  ;
  return ret;
}

// do_resize_cb
// file rculfhash.c line 1958
static void do_resize_cb(struct rcu_head *head)
{
  struct rcu_resize_work *work;
  struct rcu_resize_work *tmp_statement_expression_1;
  const struct rcu_head *__ptr = head;
  tmp_statement_expression_1 = (struct rcu_resize_work *)((char *)__ptr - (signed long int)0ul);
  work = tmp_statement_expression_1;
  struct cds_lfht *ht = work->ht;
  ht->flavor->thread_offline();
  pthread_mutex_lock(&ht->resize_mutex);
  _do_cds_lfht_resize(ht);
  pthread_mutex_unlock(&ht->resize_mutex);
  ht->flavor->thread_online();
  free((void *)work);
  asm("mfence" :  :  : "memory");
  __uatomic_dec((void *)&ht->in_progress_resize, (signed int)sizeof(unsigned int) /*4ul*/ );
}

// enqueue_dummy
// file urcu/static/rculfqueue.h line 176
static inline void enqueue_dummy(struct cds_lfq_queue_rcu *q)
{
  struct cds_lfq_node_rcu *node;
  node=make_dummy(q, (struct cds_lfq_node_rcu *)(void *)0);
  _cds_lfq_enqueue_rcu(q, node);
}

// fini_table
// file rculfhash.c line 1369
static void fini_table(struct cds_lfht *ht, unsigned long int first_order, unsigned long int last_order)
{
  signed long int i;
  unsigned long int free_by_rcu_order = (unsigned long int)0;
  while((_Bool)0)
    ;
  /* assertion first_order > 0 */
  assert(first_order > (unsigned long int)0);
  i = (signed long int)last_order;
  volatile unsigned long int tmp_statement_expression_1;
  volatile unsigned long int tmp_statement_expression_2;
  volatile unsigned int tmp_statement_expression_3;
  if((unsigned long int)i >= first_order)
  {
    unsigned long int len = 1UL << i - (signed long int)1;
    while((_Bool)0)
      ;
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile unsigned long int *)&ht->resize_target);
    if(1UL << i + -1l >= tmp_statement_expression_1)
    {
      asm("" :  :  : "memory");
      unsigned long int _v;
      *((volatile unsigned long int *)&ht->size) = 1UL << i - (signed long int)1;
      tmp_statement_expression_2 = *((volatile unsigned long int *)&ht->size);
      _v = tmp_statement_expression_2;
      asm("" :  :  : "memory");
      _v = _v;
      ht->flavor->update_synchronize_rcu();
      if(!(free_by_rcu_order == 0ul))
        cds_lfht_free_bucket_table(ht, free_by_rcu_order);

      remove_table(ht, (unsigned long int)i, len);
      free_by_rcu_order = (unsigned long int)i;
      asm("" :  :  : "memory");
      tmp_statement_expression_3 = *((volatile unsigned int *)&ht->in_progress_destroy);
      if(tmp_statement_expression_3 == 0u)
        i = i - 1l;

    }

  }

  if(!(free_by_rcu_order == 0ul))
  {
    ht->flavor->update_synchronize_rcu();
    cds_lfht_free_bucket_table(ht, free_by_rcu_order);
  }

}

// flag_bucket
// file rculfhash.c line 766
static struct cds_lfht_node * flag_bucket(struct cds_lfht_node *node)
{
  return (struct cds_lfht_node *)((unsigned long int)node | 1UL << 1);
}

// flag_removal_owner
// file rculfhash.c line 778
static struct cds_lfht_node * flag_removal_owner(struct cds_lfht_node *node)
{
  return (struct cds_lfht_node *)((unsigned long int)node | 1UL << 2);
}

// flag_removed_or_removal_owner
// file rculfhash.c line 784
static struct cds_lfht_node * flag_removed_or_removal_owner(struct cds_lfht_node *node)
{
  return (struct cds_lfht_node *)((unsigned long int)node | 1UL << 0 | 1UL << 2);
}

// fls_u32
// file rculfhash.c line 426
static inline unsigned int fls_u32(unsigned int x)
{
  signed int r;
  asm("bsrl %1,%0\n\tjnz 1f\n\tmovl _-1,%0\n\t1:\n\t" : "=r"(r) : "rm"(x) : );
  return (unsigned int)(r + 1);
}

// fls_u64
// file rculfhash.c line 442
static inline unsigned int fls_u64(unsigned long int x)
{
  signed long int r;
  asm("bsrq %1,%0\n\tjnz 1f\n\tmovq _-1,%0\n\t1:\n\t" : "=r"(r) : "rm"(x) : );
  return (unsigned int)(r + (signed long int)1);
}

// free_dummy
// file urcu/static/rculfqueue.h line 96
static inline void free_dummy(struct cds_lfq_node_rcu *node)
{
  struct cds_lfq_node_rcu_dummy *dummy;
  /* assertion node->dummy */
  assert(node->dummy != 0);
  struct cds_lfq_node_rcu_dummy *tmp_statement_expression_1;
  const struct cds_lfq_node_rcu *__ptr = node;
  tmp_statement_expression_1 = (struct cds_lfq_node_rcu_dummy *)((char *)__ptr - (signed long int)0ul);
  dummy = tmp_statement_expression_1;
  free((void *)dummy);
}

// free_dummy_cb
// file urcu/static/rculfqueue.h line 78
static inline void free_dummy_cb(struct rcu_head *head)
{
  struct cds_lfq_node_rcu_dummy *dummy;
  struct cds_lfq_node_rcu_dummy *tmp_statement_expression_1;
  const struct rcu_head *__ptr = head;
  tmp_statement_expression_1 = (struct cds_lfq_node_rcu_dummy *)((char *)__ptr - (signed long int)16ul);
  dummy = tmp_statement_expression_1;
  free((void *)dummy);
}

// free_split_items_count
// file rculfhash.c line 618
static void free_split_items_count(struct cds_lfht *ht)
{
  free((void *)ht->split_count);
}

// get_end
// file rculfhash.c line 790
static struct cds_lfht_node * get_end(void)
{
  return (struct cds_lfht_node *)(void *)0;
}

// ht_count_add
// file rculfhash.c line 637
static void ht_count_add(struct cds_lfht *ht, unsigned long int size, unsigned long int hash)
{
  unsigned long int split_count;
  signed int index;
  signed long int count;
  if(!(ht->split_count == ((struct ht_items_count *)NULL)))
  {
    index=ht_get_split_count_index(hash);
    unsigned long int return_value___uatomic_add_return_1;
    return_value___uatomic_add_return_1=__uatomic_add_return((void *)&(ht->split_count + (signed long int)index)->add, (unsigned long int)1, (signed int)sizeof(unsigned long int) /*8ul*/ );
    split_count = (unsigned long int)return_value___uatomic_add_return_1;
    if((1023ul & split_count) == 0ul)
    {
      while((_Bool)0)
        ;
      unsigned long int return_value___uatomic_add_return_2;
      return_value___uatomic_add_return_2=__uatomic_add_return((void *)&ht->count, (unsigned long int)(1UL << 10), (signed int)sizeof(signed long int) /*8ul*/ );
      count = (signed long int)return_value___uatomic_add_return_2;
      if((-1l + count & count) == 0l)
      {
        if((unsigned long int)(count >> 3) >= size)
        {
          while((_Bool)0)
            ;
          cds_lfht_resize_lazy_count(ht, size, (unsigned long int)(count >> 1 - 1));
        }

      }

    }

  }

}

// ht_count_del
// file rculfhash.c line 666
static void ht_count_del(struct cds_lfht *ht, unsigned long int size, unsigned long int hash)
{
  unsigned long int split_count;
  signed int index;
  signed long int count;
  if(!(ht->split_count == ((struct ht_items_count *)NULL)))
  {
    index=ht_get_split_count_index(hash);
    unsigned long int return_value___uatomic_add_return_1;
    return_value___uatomic_add_return_1=__uatomic_add_return((void *)&(ht->split_count + (signed long int)index)->del, (unsigned long int)1, (signed int)sizeof(unsigned long int) /*8ul*/ );
    split_count = (unsigned long int)return_value___uatomic_add_return_1;
    if((1023ul & split_count) == 0ul)
    {
      while((_Bool)0)
        ;
      unsigned long int return_value___uatomic_add_return_2;
      return_value___uatomic_add_return_2=__uatomic_add_return((void *)&ht->count, (unsigned long int)-(1UL << 10), (signed int)sizeof(signed long int) /*8ul*/ );
      count = (signed long int)return_value___uatomic_add_return_2;
      if((-1l + count & count) == 0l)
      {
        if(!((unsigned long int)(count >> 3) >= size))
        {
          while((_Bool)0)
            ;
          if((unsigned long int)count >= (1ul + (unsigned long int)split_count_mask) * 1024ul)
            cds_lfht_resize_lazy_count(ht, size, (unsigned long int)(count >> 1 - 1));

        }

      }

    }

  }

}

// ht_get_split_count_index
// file rculfhash.c line 624
static signed int ht_get_split_count_index(unsigned long int hash)
{
  signed int cpu;
  /* assertion split_count_mask >= 0 */
  assert(split_count_mask >= (signed long int)0);
  cpu=urcu_sched_getcpu();
  if(!(cpu >= 0))
    return (signed int)(hash & (unsigned long int)split_count_mask);

  else
    return (signed int)((signed long int)cpu & split_count_mask);
}

// ht_init_nr_cpus_mask
// file rculfhash.c line 570
static void ht_init_nr_cpus_mask(void)
{
  signed long int maxcpus;
  maxcpus=sysconf(83);
  if(!(maxcpus >= 1l))
    nr_cpus_mask = (signed long int)-2;

  else
  {
    signed int return_value_cds_lfht_get_count_order_ulong_1;
    return_value_cds_lfht_get_count_order_ulong_1=cds_lfht_get_count_order_ulong((unsigned long int)maxcpus);
    maxcpus = (signed long int)(1UL << return_value_cds_lfht_get_count_order_ulong_1);
    nr_cpus_mask = maxcpus - (signed long int)1;
  }
}

// init_table
// file rculfhash.c line 1272
static void init_table(struct cds_lfht *ht, unsigned long int first_order, unsigned long int last_order)
{
  unsigned long int i;
  while((_Bool)0)
    ;
  /* assertion first_order > 0 */
  assert(first_order > (unsigned long int)0);
  i = first_order;
  volatile unsigned long int tmp_statement_expression_1;
  volatile unsigned long int tmp_statement_expression_2;
  volatile unsigned int tmp_statement_expression_3;
  for( ; last_order >= i; i = i + 1ul)
  {
    unsigned long int len = 1UL << i - (unsigned long int)1;
    while((_Bool)0)
      ;
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile unsigned long int *)&ht->resize_target);
    if(!(tmp_statement_expression_1 >= 1UL << i))
      break;

    cds_lfht_alloc_bucket_table(ht, i);
    init_table_populate(ht, i, len);
    asm("" :  :  : "memory");
    unsigned long int _v;
    *((volatile unsigned long int *)&ht->size) = 1UL << i;
    tmp_statement_expression_2 = *((volatile unsigned long int *)&ht->size);
    _v = tmp_statement_expression_2;
    asm("" :  :  : "memory");
    _v = _v;
    while((_Bool)0)
      ;
    asm("" :  :  : "memory");
    tmp_statement_expression_3 = *((volatile unsigned int *)&ht->in_progress_destroy);
    if(!(tmp_statement_expression_3 == 0u))
      break;

  }
}

// init_table_populate
// file rculfhash.c line 1265
static void init_table_populate(struct cds_lfht *ht, unsigned long int i, unsigned long int len)
{
  partition_resize_helper(ht, i, len, init_table_populate_partition);
}

// init_table_populate_partition
// file rculfhash.c line 1245
static void init_table_populate_partition(struct cds_lfht *ht, unsigned long int i, unsigned long int start, unsigned long int len)
{
  unsigned long int j;
  unsigned long int size = 1UL << i - (unsigned long int)1;
  /* assertion i > 0 */
  assert(i > (unsigned long int)0);
  ht->flavor->read_lock();
  j = size + start;
  if(!(j >= size + len + start))
  {
    struct cds_lfht_node *new_node;
    new_node=bucket_at(ht, j);
    /* assertion j >= size && j < (size << 1) */
    assert(j >= size && j < size << 1);
    new_node->reverse_hash=bit_reverse_ulong(j);
    _cds_lfht_add(ht, j, (signed int (*)(struct cds_lfht_node *, const void *))(void *)0, (void *)0, size, new_node, (struct cds_lfht_iter *)(void *)0, 1);
    j = j + 1ul;
  }

  ht->flavor->read_unlock();
}

// is_bucket
// file rculfhash.c line 760
static signed int is_bucket(struct cds_lfht_node *node)
{
  return (signed int)((unsigned long int)node & 1UL << 1);
}

// is_end
// file rculfhash.c line 796
static signed int is_end(struct cds_lfht_node *node)
{
  struct cds_lfht_node *return_value_clear_flag_1;
  return_value_clear_flag_1=clear_flag(node);
  return (signed int)(return_value_clear_flag_1 == (struct cds_lfht_node *)(void *)0);
}

// is_removal_owner
// file rculfhash.c line 772
static signed int is_removal_owner(struct cds_lfht_node *node)
{
  return (signed int)((unsigned long int)node & 1UL << 2);
}

// is_removed
// file rculfhash.c line 754
static signed int is_removed(struct cds_lfht_node *node)
{
  return (signed int)((unsigned long int)node & 1UL << 0);
}

// lookup_bucket
// file rculfhash.c line 840
static inline struct cds_lfht_node * lookup_bucket(struct cds_lfht *ht, unsigned long int size, unsigned long int hash)
{
  /* assertion size > 0 */
  assert(size > (unsigned long int)0);
  struct cds_lfht_node *return_value_bucket_at_1;
  return_value_bucket_at_1=bucket_at(ht, hash & size - (unsigned long int)1);
  return return_value_bucket_at_1;
}

// main
// file cds_lfs_push.c line 30
signed int main(signed int argc, char **argv)
{
  signed int values[4l] = { -5, 42, 36, 24 };
  struct cds_lfs_stack mystack;
  unsigned int i;
  signed int ret = 0;
  struct cds_lfs_node *snode;
  struct cds_lfs_head *shead;
  cds_lfs_init(&mystack);
  i = (unsigned int)0;
  for( ; !((unsigned long int)i >= 4ul); i = i + 1u)
  {
    struct mynode *node;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct mynode) /*16ul*/ );
    node = (struct mynode *)return_value_malloc_1;
    if(node == ((struct mynode *)NULL))
    {
      ret = -1;
      goto end;
    }

    cds_lfs_node_init(&node->node);
    node->value = values[(signed long int)i];
    cds_lfs_push(&mystack, &node->node);
  }
  printf("mystack content:");
  shead=cds_lfs_pop_all_blocking(&mystack);
  snode = &shead->node;
  struct mynode *tmp_statement_expression_2;
  for( ; !(snode == ((struct cds_lfs_node *)NULL)); snode = snode->next)
  {
    struct mynode *main__1__2__1__node;
    const struct cds_lfs_node *__ptr = snode;
    tmp_statement_expression_2 = (struct mynode *)((char *)__ptr - (signed long int)8ul);
    main__1__2__1__node = tmp_statement_expression_2;
    printf(" %d", main__1__2__1__node->value);
  }
  printf("\n");

end:
  ;
  return ret;
}

// make_dummy
// file urcu/static/rculfqueue.h line 64
static inline struct cds_lfq_node_rcu * make_dummy(struct cds_lfq_queue_rcu *q, struct cds_lfq_node_rcu *next)
{
  struct cds_lfq_node_rcu_dummy *dummy;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct cds_lfq_node_rcu_dummy) /*40ul*/ );
  dummy = (struct cds_lfq_node_rcu_dummy *)return_value_malloc_1;
  /* assertion dummy */
  assert(dummy != ((struct cds_lfq_node_rcu_dummy *)NULL));
  dummy->parent.next = next;
  dummy->parent.dummy = 1;
  dummy->q = q;
  return &dummy->parent;
}

// memory_discard
// file rculfhash-mm-mmap.c line 64
static void memory_discard(void *ptr, unsigned long int length)
{
  void *ret;
  ret=mmap(ptr, length, 0x0, 0x10 | 0x02 | 0x20, -1, (signed long int)0);
  /* assertion ret == ptr */
  assert(ret == ptr);
}

// memory_map
// file rculfhash-mm-mmap.c line 32
static void * memory_map(unsigned long int length)
{
  void *ret;
  ret=mmap((void *)0, length, 0x0, 0x02 | 0x20, -1, (signed long int)0);
  /* assertion ret != ((void *) -1) */
  assert(ret != (void *)-1);
  return ret;
}

// memory_populate
// file rculfhash-mm-mmap.c line 50
static void memory_populate(void *ptr, unsigned long int length)
{
  void *ret;
  ret=mmap(ptr, length, 0x1 | 0x2, 0x10 | 0x02 | 0x20, -1, (signed long int)0);
  /* assertion ret == ptr */
  assert(ret == ptr);
}

// memory_unmap
// file rculfhash-mm-mmap.c line 41
static void memory_unmap(void *ptr, unsigned long int length)
{
  signed int ret;
  ret=munmap(ptr, length);
  /* assertion ret == 0 */
  assert(ret == 0);
}

// partition_resize_helper
// file rculfhash.c line 1162
static void partition_resize_helper(struct cds_lfht *ht, unsigned long int i, unsigned long int len, void (*fct)(struct cds_lfht *, unsigned long int, unsigned long int, unsigned long int))
{
  unsigned long int partition_len;
  unsigned long int start = (unsigned long int)0;
  struct partition_resize_work *work;
  signed int thread;
  signed int ret;
  unsigned long int nr_threads;
  /* assertion nr_cpus_mask != -1 */
  assert(nr_cpus_mask != (signed long int)-1);
  signed int return_value_cds_lfht_get_count_order_ulong_1;
  void *return_value_calloc_2;
  if(nr_cpus_mask >= 0l && len >= 8192ul)
  {
    if(nr_cpus_mask >= 1l)
      nr_threads = (unsigned long int)(nr_cpus_mask + (signed long int)1) < len >> 12 ? (unsigned long int)(nr_cpus_mask + (signed long int)1) : len >> 12;

    else
      nr_threads = (unsigned long int)1;
    return_value_cds_lfht_get_count_order_ulong_1=cds_lfht_get_count_order_ulong(nr_threads);
    partition_len = len >> return_value_cds_lfht_get_count_order_ulong_1;
    return_value_calloc_2=calloc(nr_threads, sizeof(struct partition_resize_work) /*48ul*/ );
    work = (struct partition_resize_work *)return_value_calloc_2;
    if(work == ((struct partition_resize_work *)NULL))
    {
      while((_Bool)0)
        ;
      goto fallback;
    }

    thread = 0;
    for( ; !((unsigned long int)thread >= nr_threads); thread = thread + 1)
    {
      (work + (signed long int)thread)->ht = ht;
      (work + (signed long int)thread)->i = i;
      (work + (signed long int)thread)->len = partition_len;
      (work + (signed long int)thread)->start = (unsigned long int)thread * partition_len;
      (work + (signed long int)thread)->fct = fct;
      ret=pthread_create(&(work + (signed long int)thread)->thread_id, ht->resize_attr, partition_resize_thread, (void *)&work[(signed long int)thread]);
      if(ret == 11)
      {
        while((_Bool)0)
          ;
        start = (work + (signed long int)thread)->start;
        len = len - start;
        nr_threads = (unsigned long int)thread;
        break;
      }

      /* assertion !ret */
      assert(!(ret != 0));
    }
    thread = 0;
    for( ; !((unsigned long int)thread >= nr_threads); thread = thread + 1)
    {
      ret=pthread_join((work + (signed long int)thread)->thread_id, (void **)(void *)0);
      /* assertion !ret */
      assert(!(ret != 0));
    }
    free((void *)work);
    if(!(start == 0ul) || !(nr_threads >= 1ul))
      goto fallback;

  }

  else
  {

  fallback:
    ;
    ht->flavor->thread_online();
    fct(ht, i, start, len);
    ht->flavor->thread_offline();
  }
}

// partition_resize_thread
// file rculfhash.c line 1151
static void * partition_resize_thread(void *arg)
{
  struct partition_resize_work *work = (struct partition_resize_work *)arg;
  work->ht->flavor->register_thread();
  work->fct(work->ht, work->i, work->start, work->len);
  work->ht->flavor->unregister_thread();
  return (void *)0;
}

// rcu_free_dummy
// file urcu/static/rculfqueue.h line 86
static inline void rcu_free_dummy(struct cds_lfq_node_rcu *node)
{
  struct cds_lfq_node_rcu_dummy *dummy;
  /* assertion node->dummy */
  assert(node->dummy != 0);
  struct cds_lfq_node_rcu_dummy *tmp_statement_expression_1;
  const struct cds_lfq_node_rcu *__ptr = node;
  tmp_statement_expression_1 = (struct cds_lfq_node_rcu_dummy *)((char *)__ptr - (signed long int)0ul);
  dummy = tmp_statement_expression_1;
  dummy->q->queue_call_rcu(&dummy->head, free_dummy_cb);
}

// remove_table
// file rculfhash.c line 1358
static void remove_table(struct cds_lfht *ht, unsigned long int i, unsigned long int len)
{
  partition_resize_helper(ht, i, len, remove_table_partition);
}

// remove_table_partition
// file rculfhash.c line 1336
static void remove_table_partition(struct cds_lfht *ht, unsigned long int i, unsigned long int start, unsigned long int len)
{
  unsigned long int j;
  unsigned long int size = 1UL << i - (unsigned long int)1;
  /* assertion i > 0 */
  assert(i > (unsigned long int)0);
  ht->flavor->read_lock();
  j = size + start;
  if(!(j >= size + len + start))
  {
    struct cds_lfht_node *fini_bucket;
    fini_bucket=bucket_at(ht, j);
    struct cds_lfht_node *parent_bucket;
    parent_bucket=bucket_at(ht, j - size);
    /* assertion j >= size && j < (size << 1) */
    assert(j >= size && j < size << 1);
    __uatomic_or((void *)&fini_bucket->next, (unsigned long int)(1UL << 0), (signed int)sizeof(struct cds_lfht_node *) /*8ul*/ );
    _cds_lfht_gc_bucket(parent_bucket, fini_bucket);
    j = j + 1ul;
  }

  ht->flavor->read_unlock();
}

// resize_target_grow
// file rculfhash.c line 1915
static unsigned long int resize_target_grow(struct cds_lfht *ht, unsigned long int new_size)
{
  unsigned long int return_value__uatomic_xchg_monotonic_increase_1;
  return_value__uatomic_xchg_monotonic_increase_1=_uatomic_xchg_monotonic_increase(&ht->resize_target, new_size);
  return return_value__uatomic_xchg_monotonic_increase_1;
}

// resize_target_update_count
// file rculfhash.c line 1921
static void resize_target_update_count(struct cds_lfht *ht, unsigned long int count)
{
  count = count > 1UL << 0 ? count : 1UL << 0;
  unsigned long int tmp_if_expr_1;
  if(!(count >= ht->max_nr_buckets))
    tmp_if_expr_1 = count;

  else
    tmp_if_expr_1 = ht->max_nr_buckets;
  count = tmp_if_expr_1;
  unsigned long int _v;
  volatile unsigned long int tmp_statement_expression_2;
  *((volatile unsigned long int *)&(*(&ht->resize_target))) = count;
  tmp_statement_expression_2 = *((volatile unsigned long int *)&(*(&ht->resize_target)));
  _v = tmp_statement_expression_2;
  asm("" :  :  : "memory");
  _v = _v;
}

// urcu_sched_getcpu
// file compat-getcpu.h line 30
static inline signed int urcu_sched_getcpu(void)
{
  signed int return_value_sched_getcpu_1;
  return_value_sched_getcpu_1=sched_getcpu();
  return return_value_sched_getcpu_1;
}

