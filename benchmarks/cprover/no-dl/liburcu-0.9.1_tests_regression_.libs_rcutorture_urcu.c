// tag-#anon#ST[ARR11{S64}_S64_'v'|]
// file rcutorture.h line 291
struct anonymous_2;

// tag-#anon#ST[ARR16{U64}_U64_'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous_3;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_4;

// tag-#anon#ST[S32'v'|]
// file ../../tests/common/api.h line 284
struct anonymous_6;

// tag-#anon#ST[S64'v'|]
// file rcutorture.h line 73
struct anonymous_7;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_8;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_5;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_0;

// tag-#anon#tUN[*{SYM#tag-__cds_wfcq_head#}_SYM#tag-__cds_wfcq_head#_'_h'||*{SYM#tag-cds_wfcq_head#}_SYM#tag-cds_wfcq_head#_'h'|]
// file urcu/wfcqueue.h line 82
union anonymous;

// tag-#anon#tUN[*{SYM#tag-__cds_wfs_stack#}_SYM#tag-__cds_wfs_stack#_'_s'||*{SYM#tag-cds_wfs_stack#}_SYM#tag-cds_wfs_stack#_'s'|]
// file ./urcu/wfstack.h line 100
union anonymous_1;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__cds_wfcq_head
// file urcu/wfcqueue.h line 68
struct __cds_wfcq_head;

// tag-__cds_wfs_stack
// file ./urcu/wfstack.h line 86
struct __cds_wfs_stack;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__uatomic_dummy
// file ../../urcu/uatomic.h line 37
struct __uatomic_dummy;

// tag-call_rcu_completion
// file urcu-call-rcu-impl.h line 73
struct call_rcu_completion;

// tag-call_rcu_completion_work
// file urcu-call-rcu-impl.h line 79
struct call_rcu_completion_work;

// tag-call_rcu_data
// file ./urcu-call-rcu.h line 43
struct call_rcu_data;

// tag-callrcu_type
// file rcutorture.h line 76
enum callrcu_type { CALLRCU_GLOBAL=0, CALLRCU_PERCPU=1, CALLRCU_PERTHREAD=2 };

// tag-cds_list_head
// file ../../urcu/list.h line 35
struct cds_list_head;

// tag-cds_wfcq_head
// file urcu/wfcqueue.h line 72
struct cds_wfcq_head;

// tag-cds_wfcq_node
// file ../../urcu/wfcqueue.h line 59
struct cds_wfcq_node;

// tag-cds_wfcq_ret
// file urcu/wfcqueue.h line 48
enum cds_wfcq_ret { CDS_WFCQ_RET_WOULDBLOCK=-1, CDS_WFCQ_RET_DEST_EMPTY=0, CDS_WFCQ_RET_DEST_NON_EMPTY=1, CDS_WFCQ_RET_SRC_EMPTY=2 };

// tag-cds_wfcq_tail
// file urcu/wfcqueue.h line 87
struct cds_wfcq_tail;

// tag-cds_wfq_node
// file urcu/wfqueue.h line 48
struct cds_wfq_node;

// tag-cds_wfq_queue
// file urcu/wfqueue.h line 52
struct cds_wfq_queue;

// tag-cds_wfs_head
// file ./urcu/wfstack.h line 82
struct cds_wfs_head;

// tag-cds_wfs_node
// file ./urcu/wfstack.h line 72
struct cds_wfs_node;

// tag-cds_wfs_stack
// file ./urcu/wfstack.h line 90
struct cds_wfs_stack;

// tag-defer_queue
// file urcu-defer-impl.h line 98
struct defer_queue;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rcu_flavor_struct
// file ./urcu-flavor.h line 30
struct rcu_flavor_struct;

// tag-rcu_gp_memb
// file ../../urcu/static/urcu.h line 127
struct rcu_gp_memb;

// tag-rcu_head
// file ../../urcu-call-rcu.h line 59
struct rcu_head;

// tag-rcu_reader_memb
// file ../../urcu/static/urcu.h line 142
struct rcu_reader_memb;

// tag-rcu_state
// file urcu/static/urcu.h line 77
enum rcu_state { RCU_READER_ACTIVE_CURRENT=0, RCU_READER_ACTIVE_OLD=1, RCU_READER_INACTIVE=2 };

// tag-rcu_stress
// file rcutorture.h line 281
struct rcu_stress;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-urcu_ref
// file urcu/ref.h line 21
struct urcu_ref;

// tag-urcu_wait_node
// file urcu-wait.h line 45
struct urcu_wait_node;

// tag-urcu_wait_queue
// file urcu-wait.h line 59
struct urcu_wait_queue;

// tag-urcu_wait_state
// file urcu-wait.h line 36
enum urcu_wait_state { URCU_WAIT_WAITING=0, URCU_WAIT_WAKEUP=1, URCU_WAIT_RUNNING=2, URCU_WAIT_TEARDOWN=4 };

// tag-urcu_waiters
// file urcu-wait.h line 72
struct urcu_waiters;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// ___cds_wfcq_append
// file ./urcu/static/wfcqueue.h line 165
static inline _Bool ___cds_wfcq_append(union anonymous u_head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_head, struct cds_wfcq_node *new_tail);
// ___cds_wfcq_append_link1
// file urcu/static/wfcqueue.h line 165
static inline _Bool ___cds_wfcq_append_link1(union anonymous u_head_link1, struct cds_wfcq_tail *tail_link1, struct cds_wfcq_node *new_head_link1, struct cds_wfcq_node *new_tail_link1);
// ___cds_wfcq_busy_wait
// file ./urcu/static/wfcqueue.h line 219
static inline _Bool ___cds_wfcq_busy_wait(signed int *attempt, signed int blocking);
// ___cds_wfcq_busy_wait_link1
// file urcu/static/wfcqueue.h line 219
static inline _Bool ___cds_wfcq_busy_wait_link1(signed int *attempt_link1, signed int blocking_link1);
// ___cds_wfcq_dequeue_blocking
// file urcu/static/wfcqueue.h line 453
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_blocking(union anonymous head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_dequeue_nonblocking
// file urcu/static/wfcqueue.h line 479
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_nonblocking(union anonymous head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_dequeue_with_state
// file urcu/static/wfcqueue.h line 367
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state(union anonymous u_head, struct cds_wfcq_tail *tail, signed int *state, signed int blocking);
// ___cds_wfcq_dequeue_with_state_blocking
// file urcu/static/wfcqueue.h line 440
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state_blocking(union anonymous head, struct cds_wfcq_tail *tail, signed int *state);
// ___cds_wfcq_dequeue_with_state_nonblocking
// file urcu/static/wfcqueue.h line 466
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state_nonblocking(union anonymous head, struct cds_wfcq_tail *tail, signed int *state);
// ___cds_wfcq_first
// file ./urcu/static/wfcqueue.h line 253
static inline struct cds_wfcq_node * ___cds_wfcq_first(union anonymous u_head, struct cds_wfcq_tail *tail, signed int blocking);
// ___cds_wfcq_first_link1
// file urcu/static/wfcqueue.h line 253
static inline struct cds_wfcq_node * ___cds_wfcq_first_link1(union anonymous u_head_link1, struct cds_wfcq_tail *tail_link1, signed int blocking_link1);
// ___cds_wfcq_first_blocking
// file ./urcu/static/wfcqueue.h line 283
static inline struct cds_wfcq_node * ___cds_wfcq_first_blocking(union anonymous head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_first_blocking_link1
// file urcu/static/wfcqueue.h line 283
static inline struct cds_wfcq_node * ___cds_wfcq_first_blocking_link1(union anonymous head_link1, struct cds_wfcq_tail *tail_link1);
// ___cds_wfcq_first_nonblocking
// file urcu/static/wfcqueue.h line 297
static inline struct cds_wfcq_node * ___cds_wfcq_first_nonblocking(union anonymous head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_init
// file urcu/static/wfcqueue.h line 112
static inline void ___cds_wfcq_init(struct __cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_next
// file ./urcu/static/wfcqueue.h line 304
static inline struct cds_wfcq_node * ___cds_wfcq_next(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node, signed int blocking);
// ___cds_wfcq_next_link1
// file urcu/static/wfcqueue.h line 304
static inline struct cds_wfcq_node * ___cds_wfcq_next_link1(union anonymous head_link1, struct cds_wfcq_tail *tail_link1, struct cds_wfcq_node *node_link1, signed int blocking_link1);
// ___cds_wfcq_next_blocking
// file ./urcu/static/wfcqueue.h line 345
static inline struct cds_wfcq_node * ___cds_wfcq_next_blocking(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// ___cds_wfcq_next_blocking_link1
// file urcu/static/wfcqueue.h line 345
static inline struct cds_wfcq_node * ___cds_wfcq_next_blocking_link1(union anonymous head_link1, struct cds_wfcq_tail *tail_link1, struct cds_wfcq_node *node_link1);
// ___cds_wfcq_next_nonblocking
// file urcu/static/wfcqueue.h line 359
static inline struct cds_wfcq_node * ___cds_wfcq_next_nonblocking(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// ___cds_wfcq_node_sync_next
// file ./urcu/static/wfcqueue.h line 236
static inline struct cds_wfcq_node * ___cds_wfcq_node_sync_next(struct cds_wfcq_node *node, signed int blocking);
// ___cds_wfcq_node_sync_next_link1
// file urcu/static/wfcqueue.h line 236
static inline struct cds_wfcq_node * ___cds_wfcq_node_sync_next_link1(struct cds_wfcq_node *node_link1, signed int blocking_link1);
// ___cds_wfcq_splice
// file ./urcu/static/wfcqueue.h line 496
static inline enum cds_wfcq_ret ___cds_wfcq_splice(union anonymous u_dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous u_src_q_head, struct cds_wfcq_tail *src_q_tail, signed int blocking);
// ___cds_wfcq_splice_link1
// file urcu/static/wfcqueue.h line 496
static inline enum cds_wfcq_ret ___cds_wfcq_splice_link1(union anonymous u_dest_q_head_link1, struct cds_wfcq_tail *dest_q_tail_link1, union anonymous u_src_q_head_link1, struct cds_wfcq_tail *src_q_tail_link1, signed int blocking_link1);
// ___cds_wfcq_splice_blocking
// file ./urcu/static/wfcqueue.h line 559
static inline enum cds_wfcq_ret ___cds_wfcq_splice_blocking(union anonymous dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous src_q_head, struct cds_wfcq_tail *src_q_tail);
// ___cds_wfcq_splice_blocking_link1
// file urcu/static/wfcqueue.h line 559
static inline enum cds_wfcq_ret ___cds_wfcq_splice_blocking_link1(union anonymous dest_q_head_link1, struct cds_wfcq_tail *dest_q_tail_link1, union anonymous src_q_head_link1, struct cds_wfcq_tail *src_q_tail_link1);
// ___cds_wfcq_splice_nonblocking
// file urcu/static/wfcqueue.h line 576
static inline enum cds_wfcq_ret ___cds_wfcq_splice_nonblocking(union anonymous dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous src_q_head, struct cds_wfcq_tail *src_q_tail);
// ___cds_wfq_dequeue_blocking
// file urcu/static/wfqueue.h line 119
static inline struct cds_wfq_node * ___cds_wfq_dequeue_blocking(struct cds_wfq_queue *q);
// ___cds_wfq_node_sync_next
// file urcu/static/wfqueue.h line 91
static inline struct cds_wfq_node * ___cds_wfq_node_sync_next(struct cds_wfq_node *node);
// ___cds_wfs_end
// file ./urcu/static/wfstack.h line 100
static inline _Bool ___cds_wfs_end(void *node);
// ___cds_wfs_end_link1
// file urcu/static/wfstack.h line 100
static inline _Bool ___cds_wfs_end_link1(void *node_link1);
// ___cds_wfs_init
// file urcu/static/wfstack.h line 82
static inline void ___cds_wfs_init(struct __cds_wfs_stack *s);
// ___cds_wfs_next
// file ./urcu/static/wfstack.h line 388
static inline struct cds_wfs_node * ___cds_wfs_next(struct cds_wfs_node *node, signed int blocking);
// ___cds_wfs_next_link1
// file urcu/static/wfstack.h line 388
static inline struct cds_wfs_node * ___cds_wfs_next_link1(struct cds_wfs_node *node_link1, signed int blocking_link1);
// ___cds_wfs_node_sync_next
// file ./urcu/static/wfstack.h line 151
static inline struct cds_wfs_node * ___cds_wfs_node_sync_next(struct cds_wfs_node *node, signed int blocking);
// ___cds_wfs_node_sync_next_link1
// file urcu/static/wfstack.h line 151
static inline struct cds_wfs_node * ___cds_wfs_node_sync_next_link1(struct cds_wfs_node *node_link1, signed int blocking_link1);
// ___cds_wfs_pop
// file urcu/static/wfstack.h line 175
static inline struct cds_wfs_node * ___cds_wfs_pop(union anonymous_1 u_stack, signed int *state, signed int blocking);
// ___cds_wfs_pop_all
// file ./urcu/static/wfstack.h line 284
static inline struct cds_wfs_head * ___cds_wfs_pop_all(union anonymous_1 u_stack);
// ___cds_wfs_pop_all_link1
// file urcu/static/wfstack.h line 284
static inline struct cds_wfs_head * ___cds_wfs_pop_all_link1(union anonymous_1 u_stack_link1);
// ___cds_wfs_pop_blocking
// file urcu/static/wfstack.h line 232
static inline struct cds_wfs_node * ___cds_wfs_pop_blocking(union anonymous_1 u_stack);
// ___cds_wfs_pop_nonblocking
// file urcu/static/wfstack.h line 260
static inline struct cds_wfs_node * ___cds_wfs_pop_nonblocking(union anonymous_1 u_stack);
// ___cds_wfs_pop_with_state_blocking
// file urcu/static/wfstack.h line 225
static inline struct cds_wfs_node * ___cds_wfs_pop_with_state_blocking(union anonymous_1 u_stack, signed int *state);
// ___cds_wfs_pop_with_state_nonblocking
// file urcu/static/wfstack.h line 247
static inline struct cds_wfs_node * ___cds_wfs_pop_with_state_nonblocking(union anonymous_1 u_stack, signed int *state);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __cds_list_del
// file ./urcu/list.h line 71
static inline void __cds_list_del(struct cds_list_head *prev, struct cds_list_head *next);
// __cds_wfcq_dequeue_blocking
// file wfcqueue.c line 100
extern struct cds_wfcq_node * __cds_wfcq_dequeue_blocking(union anonymous head, struct cds_wfcq_tail *tail);
// __cds_wfcq_dequeue_nonblocking
// file wfcqueue.c line 115
extern struct cds_wfcq_node * __cds_wfcq_dequeue_nonblocking(union anonymous head, struct cds_wfcq_tail *tail);
// __cds_wfcq_dequeue_with_state_blocking
// file wfcqueue.c line 107
extern struct cds_wfcq_node * __cds_wfcq_dequeue_with_state_blocking(union anonymous head, struct cds_wfcq_tail *tail, signed int *state);
// __cds_wfcq_dequeue_with_state_nonblocking
// file wfcqueue.c line 122
extern struct cds_wfcq_node * __cds_wfcq_dequeue_with_state_nonblocking(union anonymous head, struct cds_wfcq_tail *tail, signed int *state);
// __cds_wfcq_first_blocking
// file wfcqueue.c line 150
extern struct cds_wfcq_node * __cds_wfcq_first_blocking(union anonymous head, struct cds_wfcq_tail *tail);
// __cds_wfcq_first_nonblocking
// file wfcqueue.c line 157
extern struct cds_wfcq_node * __cds_wfcq_first_nonblocking(union anonymous head, struct cds_wfcq_tail *tail);
// __cds_wfcq_init
// file wfcqueue.c line 43
extern void __cds_wfcq_init(struct __cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// __cds_wfcq_next_blocking
// file wfcqueue.c line 164
extern struct cds_wfcq_node * __cds_wfcq_next_blocking(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// __cds_wfcq_next_nonblocking
// file wfcqueue.c line 172
extern struct cds_wfcq_node * __cds_wfcq_next_nonblocking(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// __cds_wfcq_splice_blocking
// file wfcqueue.c line 130
extern enum cds_wfcq_ret __cds_wfcq_splice_blocking(union anonymous dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous src_q_head, struct cds_wfcq_tail *src_q_tail);
// __cds_wfcq_splice_nonblocking
// file wfcqueue.c line 140
extern enum cds_wfcq_ret __cds_wfcq_splice_nonblocking(union anonymous dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous src_q_head, struct cds_wfcq_tail *src_q_tail);
// __cds_wfq_dequeue_blocking
// file wfqueue.c line 49
extern struct cds_wfq_node * __cds_wfq_dequeue_blocking(struct cds_wfq_queue *q);
// __cds_wfs_init
// file wfstack.c line 41
extern void __cds_wfs_init(struct __cds_wfs_stack *s);
// __cds_wfs_pop_all
// file wfstack.c line 121
extern struct cds_wfs_head * __cds_wfs_pop_all(union anonymous_1 u_stack);
// __cds_wfs_pop_blocking
// file wfstack.c line 97
extern struct cds_wfs_node * __cds_wfs_pop_blocking(union anonymous_1 u_stack);
// __cds_wfs_pop_nonblocking
// file wfstack.c line 109
extern struct cds_wfs_node * __cds_wfs_pop_nonblocking(union anonymous_1 u_stack);
// __cds_wfs_pop_with_state_blocking
// file wfstack.c line 103
extern struct cds_wfs_node * __cds_wfs_pop_with_state_blocking(union anonymous_1 u_stack, signed int *state);
// __cds_wfs_pop_with_state_nonblocking
// file wfstack.c line 115
extern struct cds_wfs_node * __cds_wfs_pop_with_state_nonblocking(union anonymous_1 u_stack, signed int *state);
// __create_call_rcu_data
// file urcu-call-rcu-impl.h line 481
static struct call_rcu_data * __create_call_rcu_data(unsigned long int flags, signed int cpu_affinity);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __smp_thread_id
// file ../../tests/common/api.h line 136
static signed int __smp_thread_id(void);
// __uatomic_add
// file ./urcu/uatomic.h line 357
static inline void __uatomic_add(void *addr, unsigned long int val, signed int len);
// __uatomic_add_return
// file ./urcu/uatomic.h line 178
static inline unsigned long int __uatomic_add_return(void *addr, unsigned long int val, signed int len);
// __uatomic_and
// file ./urcu/uatomic.h line 245
static inline void __uatomic_and(void *addr, unsigned long int val, signed int len);
// __uatomic_cmpxchg
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg(void *addr, unsigned long int old, unsigned long int _new, signed int len);
// __uatomic_cmpxchg_link1
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg_link1(void *addr_link1, unsigned long int old_link1, unsigned long int _new_link1, signed int len_link1);
// __uatomic_cmpxchg_link2
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg_link2(void *addr_link2, unsigned long int old_link2, unsigned long int _new_link2, signed int len_link2);
// __uatomic_dec
// file ./urcu/uatomic.h line 467
static inline void __uatomic_dec(void *addr, signed int len);
// __uatomic_exchange
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange(void *addr, unsigned long int val, signed int len);
// __uatomic_exchange_link1
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link1(void *addr_link1, unsigned long int val_link1, signed int len_link1);
// __uatomic_exchange_link1_link1
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link1_link1(void *addr_link1_link1, unsigned long int val_link1_link1, signed int len_link1_link1);
// __uatomic_exchange_link2
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link2(void *addr_link2, unsigned long int val_link2, signed int len_link2);
// __uatomic_exchange_link3
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link3(void *addr_link3, unsigned long int val_link3, signed int len_link3);
// __uatomic_inc
// file ../../urcu/uatomic.h line 414
static inline void __uatomic_inc(void *addr, signed int len);
// __uatomic_inc_link1
// file ./urcu/uatomic.h line 414
static inline void __uatomic_inc_link1(void *addr_link1, signed int len_link1);
// __uatomic_or
// file ./urcu/uatomic.h line 301
static inline void __uatomic_or(void *addr, unsigned long int val, signed int len);
// _call_rcu
// file urcu-call-rcu-impl.h line 680
static void _call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *), struct call_rcu_data *crdp);
// _call_rcu::func_object
//
void func_object(struct rcu_head *);
// _cds_wfcq_dequeue_blocking
// file urcu/static/wfcqueue.h line 613
static inline struct cds_wfcq_node * _cds_wfcq_dequeue_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_dequeue_lock
// file urcu/static/wfcqueue.h line 147
static inline void _cds_wfcq_dequeue_lock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_dequeue_unlock
// file urcu/static/wfcqueue.h line 156
static inline void _cds_wfcq_dequeue_unlock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_dequeue_with_state_blocking
// file urcu/static/wfcqueue.h line 596
static inline struct cds_wfcq_node * _cds_wfcq_dequeue_with_state_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail, signed int *state);
// _cds_wfcq_empty
// file ./urcu/static/wfcqueue.h line 132
static inline _Bool _cds_wfcq_empty(union anonymous u_head, struct cds_wfcq_tail *tail);
// _cds_wfcq_empty_link1
// file urcu/static/wfcqueue.h line 132
static inline _Bool _cds_wfcq_empty_link1(union anonymous u_head_link1, struct cds_wfcq_tail *tail_link1);
// _cds_wfcq_enqueue
// file ./urcu/static/wfcqueue.h line 206
static inline _Bool _cds_wfcq_enqueue(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_tail);
// _cds_wfcq_enqueue_link1
// file urcu/static/wfcqueue.h line 206
static inline _Bool _cds_wfcq_enqueue_link1(union anonymous head_link1, struct cds_wfcq_tail *tail_link1, struct cds_wfcq_node *new_tail_link1);
// _cds_wfcq_init
// file ./urcu/static/wfcqueue.h line 97
static inline void _cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_init_link1
// file urcu/static/wfcqueue.h line 97
static inline void _cds_wfcq_init_link1(struct cds_wfcq_head *head_link1, struct cds_wfcq_tail *tail_link1);
// _cds_wfcq_node_init
// file ./urcu/static/wfcqueue.h line 89
static inline void _cds_wfcq_node_init(struct cds_wfcq_node *node);
// _cds_wfcq_node_init_link1
// file urcu/static/wfcqueue.h line 89
static inline void _cds_wfcq_node_init_link1(struct cds_wfcq_node *node_link1);
// _cds_wfcq_splice_blocking
// file urcu/static/wfcqueue.h line 632
static inline enum cds_wfcq_ret _cds_wfcq_splice_blocking(struct cds_wfcq_head *dest_q_head, struct cds_wfcq_tail *dest_q_tail, struct cds_wfcq_head *src_q_head, struct cds_wfcq_tail *src_q_tail);
// _cds_wfq_dequeue_blocking
// file urcu/static/wfqueue.h line 148
static inline struct cds_wfq_node * _cds_wfq_dequeue_blocking(struct cds_wfq_queue *q);
// _cds_wfq_enqueue
// file urcu/static/wfqueue.h line 68
static inline void _cds_wfq_enqueue(struct cds_wfq_queue *q, struct cds_wfq_node *node);
// _cds_wfq_init
// file urcu/static/wfqueue.h line 56
static inline void _cds_wfq_init(struct cds_wfq_queue *q);
// _cds_wfq_node_init
// file urcu/static/wfqueue.h line 51
static inline void _cds_wfq_node_init(struct cds_wfq_node *node);
// _cds_wfs_empty
// file urcu/static/wfstack.h line 110
static inline _Bool _cds_wfs_empty(union anonymous_1 u_stack);
// _cds_wfs_first
// file ./urcu/static/wfstack.h line 380
static inline struct cds_wfs_node * _cds_wfs_first(struct cds_wfs_head *head);
// _cds_wfs_first_link1
// file urcu/static/wfstack.h line 380
static inline struct cds_wfs_node * _cds_wfs_first_link1(struct cds_wfs_head *head_link1);
// _cds_wfs_init
// file urcu/static/wfstack.h line 91
static inline void _cds_wfs_init(struct cds_wfs_stack *s);
// _cds_wfs_next_blocking
// file ./urcu/static/wfstack.h line 417
static inline struct cds_wfs_node * _cds_wfs_next_blocking(struct cds_wfs_node *node);
// _cds_wfs_next_blocking_link1
// file urcu/static/wfstack.h line 417
static inline struct cds_wfs_node * _cds_wfs_next_blocking_link1(struct cds_wfs_node *node_link1);
// _cds_wfs_next_nonblocking
// file urcu/static/wfstack.h line 430
static inline struct cds_wfs_node * _cds_wfs_next_nonblocking(struct cds_wfs_node *node);
// _cds_wfs_node_init
// file urcu/static/wfstack.h line 74
static inline void _cds_wfs_node_init(struct cds_wfs_node *node);
// _cds_wfs_pop_all_blocking
// file urcu/static/wfstack.h line 357
static inline struct cds_wfs_head * _cds_wfs_pop_all_blocking(struct cds_wfs_stack *s);
// _cds_wfs_pop_blocking
// file urcu/static/wfstack.h line 347
static inline struct cds_wfs_node * _cds_wfs_pop_blocking(struct cds_wfs_stack *s);
// _cds_wfs_pop_lock
// file urcu/static/wfstack.h line 308
static inline void _cds_wfs_pop_lock(struct cds_wfs_stack *s);
// _cds_wfs_pop_unlock
// file urcu/static/wfstack.h line 319
static inline void _cds_wfs_pop_unlock(struct cds_wfs_stack *s);
// _cds_wfs_pop_with_state_blocking
// file urcu/static/wfstack.h line 332
static inline struct cds_wfs_node * _cds_wfs_pop_with_state_blocking(struct cds_wfs_stack *s, signed int *state);
// _cds_wfs_push
// file ./urcu/static/wfstack.h line 127
static inline signed int _cds_wfs_push(union anonymous_1 u_stack, struct cds_wfs_node *node);
// _cds_wfs_push_link1
// file urcu/static/wfstack.h line 127
static inline signed int _cds_wfs_push_link1(union anonymous_1 u_stack_link1, struct cds_wfs_node *node_link1);
// _cleanup
// file tap.c line 414
static void _cleanup(void);
// _defer_rcu
// file urcu-defer-impl.h line 311
static void _defer_rcu(void (*fct)(void *), void *p);
// _defer_rcu::fct_object
//
void fct_object(void *);
// _expected_tests
// file tap.c line 315
static void _expected_tests(unsigned int tests);
// _gen_result
// file ../../tests/utils/tap.h line 76
unsigned int _gen_result(signed int ok, const char *func, char *file, unsigned int line, char *test_name, ...);
// _rcu_barrier_complete
// file urcu-call-rcu-impl.h line 822
static void _rcu_barrier_complete(struct rcu_head *head);
// _rcu_defer_barrier_thread
// file urcu-defer-impl.h line 249
static void _rcu_defer_barrier_thread(void);
// _rcu_read_lock_memb
// file ../../urcu/static/urcu.h line 214
static inline void _rcu_read_lock_memb(void);
// _rcu_read_lock_memb_link1
// file urcu/static/urcu.h line 214
static inline void _rcu_read_lock_memb_link1(void);
// _rcu_read_lock_update
// file ../../urcu/static/urcu.h line 195
static inline void _rcu_read_lock_update(unsigned long int tmp);
// _rcu_read_lock_update_link1
// file urcu/static/urcu.h line 195
static inline void _rcu_read_lock_update_link1(unsigned long int tmp_link1);
// _rcu_read_ongoing_memb
// file urcu/static/urcu.h line 267
static inline signed int _rcu_read_ongoing_memb(void);
// _rcu_read_unlock_memb
// file ../../urcu/static/urcu.h line 249
static inline void _rcu_read_unlock_memb(void);
// _rcu_read_unlock_memb_link1
// file urcu/static/urcu.h line 249
static inline void _rcu_read_unlock_memb_link1(void);
// _rcu_read_unlock_update_and_wakeup
// file ../../urcu/static/urcu.h line 233
static inline void _rcu_read_unlock_update_and_wakeup(unsigned long int tmp);
// _rcu_read_unlock_update_and_wakeup_link1
// file urcu/static/urcu.h line 233
static inline void _rcu_read_unlock_update_and_wakeup_link1(unsigned long int tmp_link1);
// _tap_init
// file tap.c line 172
static void _tap_init(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// alloc_cpu_call_rcu_data
// file urcu-call-rcu-impl.h line 130
static void alloc_cpu_call_rcu_data(void);
// asprintf
// file /usr/include/stdio.h line 405
extern signed int asprintf(char ** restrict , const char *, ...);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// call_rcu_after_fork_child_memb
// file urcu-call-rcu-impl.h line 949
void call_rcu_after_fork_child_memb(void);
// call_rcu_after_fork_parent_memb
// file urcu-call-rcu-impl.h line 931
void call_rcu_after_fork_parent_memb(void);
// call_rcu_before_fork_memb
// file urcu-call-rcu-impl.h line 909
void call_rcu_before_fork_memb(void);
// call_rcu_completion_wait
// file urcu-call-rcu-impl.h line 274
static void call_rcu_completion_wait(struct call_rcu_completion *completion);
// call_rcu_completion_wake_up
// file urcu-call-rcu-impl.h line 296
static void call_rcu_completion_wake_up(struct call_rcu_completion *completion);
// call_rcu_data_free_memb
// file ../../urcu-call-rcu.h line 77
void call_rcu_data_free_memb(struct call_rcu_data *crdp);
// call_rcu_data_init
// file urcu-call-rcu-impl.h line 415
static void call_rcu_data_init(struct call_rcu_data **crdpp, unsigned long int flags, signed int cpu_affinity);
// call_rcu_lock
// file urcu-call-rcu-impl.h line 175
static void call_rcu_lock(union anonymous_0 *pmp);
// call_rcu_memb
// file ../../urcu-call-rcu.h line 72
void call_rcu_memb(struct rcu_head *head, void (*func)(struct rcu_head *));
// call_rcu_memb::func_object
//
void func_object(struct rcu_head *);
// call_rcu_thread
// file urcu-call-rcu-impl.h line 310
static void * call_rcu_thread(void *arg);
// call_rcu_unlock
// file urcu-call-rcu-impl.h line 186
static void call_rcu_unlock(union anonymous_0 *pmp);
// call_rcu_wait
// file urcu-call-rcu-impl.h line 240
static void call_rcu_wait(struct call_rcu_data *crdp);
// call_rcu_wake_up
// file urcu-call-rcu-impl.h line 262
static void call_rcu_wake_up(struct call_rcu_data *crdp);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cds_list_add
// file ./urcu/list.h line 51
static inline void cds_list_add(struct cds_list_head *newp, struct cds_list_head *head);
// cds_list_del
// file ./urcu/list.h line 79
static inline void cds_list_del(struct cds_list_head *elem);
// cds_list_empty
// file ./urcu/list.h line 184
static inline signed int cds_list_empty(struct cds_list_head *head);
// cds_list_move
// file ./urcu/list.h line 94
static inline void cds_list_move(struct cds_list_head *elem, struct cds_list_head *head);
// cds_list_splice
// file ./urcu/list.h line 112
static inline void cds_list_splice(struct cds_list_head *add, struct cds_list_head *head);
// cds_wfcq_dequeue_blocking
// file wfcqueue.c line 75
extern struct cds_wfcq_node * cds_wfcq_dequeue_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// cds_wfcq_dequeue_lock
// file wfcqueue.c line 63
extern void cds_wfcq_dequeue_lock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// cds_wfcq_dequeue_unlock
// file wfcqueue.c line 69
extern void cds_wfcq_dequeue_unlock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// cds_wfcq_dequeue_with_state_blocking
// file wfcqueue.c line 82
extern struct cds_wfcq_node * cds_wfcq_dequeue_with_state_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail, signed int *state);
// cds_wfcq_empty
// file wfcqueue.c line 49
extern _Bool cds_wfcq_empty(union anonymous head, struct cds_wfcq_tail *tail);
// cds_wfcq_enqueue
// file wfcqueue.c line 56
extern _Bool cds_wfcq_enqueue(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// cds_wfcq_init
// file wfcqueue.c line 37
extern void cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// cds_wfcq_node_init
// file wfcqueue.c line 32
extern void cds_wfcq_node_init(struct cds_wfcq_node *node);
// cds_wfcq_splice_blocking
// file wfcqueue.c line 90
extern enum cds_wfcq_ret cds_wfcq_splice_blocking(struct cds_wfcq_head *dest_q_head, struct cds_wfcq_tail *dest_q_tail, struct cds_wfcq_head *src_q_head, struct cds_wfcq_tail *src_q_tail);
// cds_wfq_dequeue_blocking
// file wfqueue.c line 54
extern struct cds_wfq_node * cds_wfq_dequeue_blocking(struct cds_wfq_queue *q);
// cds_wfq_enqueue
// file wfqueue.c line 44
extern void cds_wfq_enqueue(struct cds_wfq_queue *q, struct cds_wfq_node *node);
// cds_wfq_init
// file wfqueue.c line 39
extern void cds_wfq_init(struct cds_wfq_queue *q);
// cds_wfq_node_init
// file wfqueue.c line 34
extern void cds_wfq_node_init(struct cds_wfq_node *node);
// cds_wfs_empty
// file wfstack.c line 46
extern _Bool cds_wfs_empty(union anonymous_1 u_stack);
// cds_wfs_first
// file wfstack.c line 72
extern struct cds_wfs_node * cds_wfs_first(struct cds_wfs_head *head);
// cds_wfs_init
// file wfstack.c line 36
extern void cds_wfs_init(struct cds_wfs_stack *s);
// cds_wfs_next_blocking
// file wfstack.c line 77
extern struct cds_wfs_node * cds_wfs_next_blocking(struct cds_wfs_node *node);
// cds_wfs_next_nonblocking
// file wfstack.c line 82
extern struct cds_wfs_node * cds_wfs_next_nonblocking(struct cds_wfs_node *node);
// cds_wfs_node_init
// file wfstack.c line 31
extern void cds_wfs_node_init(struct cds_wfs_node *node);
// cds_wfs_pop_all_blocking
// file wfstack.c line 67
extern struct cds_wfs_head * cds_wfs_pop_all_blocking(struct cds_wfs_stack *s);
// cds_wfs_pop_blocking
// file wfstack.c line 56
extern struct cds_wfs_node * cds_wfs_pop_blocking(struct cds_wfs_stack *s);
// cds_wfs_pop_lock
// file wfstack.c line 87
extern void cds_wfs_pop_lock(struct cds_wfs_stack *s);
// cds_wfs_pop_unlock
// file wfstack.c line 92
extern void cds_wfs_pop_unlock(struct cds_wfs_stack *s);
// cds_wfs_pop_with_state_blocking
// file wfstack.c line 62
extern struct cds_wfs_node * cds_wfs_pop_with_state_blocking(struct cds_wfs_stack *s, signed int *state);
// cds_wfs_push
// file wfstack.c line 51
extern signed int cds_wfs_push(union anonymous_1 u_stack, struct cds_wfs_node *node);
// compat_futex_async
// file ../../urcu/futex.h line 52
extern signed int compat_futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// compat_futex_noasync
// file ./urcu/futex.h line 50
extern signed int compat_futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// create_all_cpu_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 88
signed int create_all_cpu_call_rcu_data_memb(unsigned long int flags);
// create_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 75
struct call_rcu_data * create_call_rcu_data_memb(unsigned long int flags, signed int cpu_affinity);
// create_thread
// file ../../tests/common/api.h line 175
static unsigned long int create_thread(void * (*func)(void *), void *arg);
// create_thread::func_object
//
void * func_object(void *);
// defer_rcu_memb
// file urcu-defer-impl.h line 395
extern void defer_rcu_memb(void (*fct)(void *), void *p);
// defer_rcu_memb::fct_object
//
void fct_object(void *);
// diag
// file ../../tests/utils/tap.h line 82
unsigned int diag(char *fmt, ...);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// exit_status
// file ../../tests/utils/tap.h line 89
signed int exit_status(void);
// flockfile
// file /usr/include/stdio.h line 912
extern void flockfile(struct _IO_FILE *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputc
// file /usr/include/stdio.h line 573
extern signed int fputc(signed int, struct _IO_FILE *);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_all_cpu_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 89
void free_all_cpu_call_rcu_data_memb(void);
// free_completion
// file urcu-call-rcu-impl.h line 813
static void free_completion(struct urcu_ref *ref);
// funlockfile
// file /usr/include/stdio.h line 919
extern void funlockfile(struct _IO_FILE *);
// futex
// file ../../urcu/futex.h line 62
static inline signed int futex(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// futex_link1
// file ./urcu/futex.h line 62
static inline signed int futex_link1(signed int *uaddr_link1, signed int op_link1, signed int val_link1, struct timespec *timeout_link1, signed int *uaddr2_link1, signed int val3_link1);
// futex_async
// file ../../urcu/futex.h line 83
static inline signed int futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// futex_async_link1
// file ./urcu/futex.h line 83
static inline signed int futex_async_link1(signed int *uaddr_link1, signed int op_link1, signed int val_link1, struct timespec *timeout_link1, signed int *uaddr2_link1, signed int val3_link1);
// futex_noasync
// file ./urcu/futex.h line 69
static inline signed int futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// get_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 578
struct call_rcu_data * get_call_rcu_data_memb(void);
// get_call_rcu_thread_memb
// file urcu-call-rcu-impl.h line 472
unsigned long int get_call_rcu_thread_memb(struct call_rcu_data *crdp);
// get_cpu_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 80
struct call_rcu_data * get_cpu_call_rcu_data_memb(signed int cpu);
// get_default_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 553
struct call_rcu_data * get_default_call_rcu_data_memb(void);
// get_microseconds
// file ../../tests/common/api.h line 254
signed long long int get_microseconds(void);
// get_thread_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 81
struct call_rcu_data * get_thread_call_rcu_data_memb(void);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// maxcpus_reset
// file urcu-call-rcu-impl.h line 123
static void maxcpus_reset(void);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mutex_lock
// file urcu.c line 130
static void mutex_lock(union anonymous_0 *mutex);
// mutex_lock_defer
// file urcu-defer-impl.h line 133
static void mutex_lock_defer(union anonymous_0 *mutex);
// mutex_unlock
// file urcu.c line 152
static void mutex_unlock(union anonymous_0 *mutex);
// perftest
// file rcutorture.h line 232
signed int perftest(signed int nreaders, signed int cpustride);
// perftestinit
// file rcutorture.h line 192
void perftestinit(void);
// perftestrun
// file rcutorture.h line 199
signed int perftestrun(signed int nthreads, signed int nreaders, signed int nupdaters);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// plan_no_plan
// file tap.c line 191
signed int plan_no_plan(void);
// plan_skip_all
// file tap.c line 217
signed int plan_skip_all(char *reason);
// plan_tests
// file ../../tests/utils/tap.h line 80
signed int plan_tests(unsigned int tests);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_5 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_5 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_5 *, union anonymous_0 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_getspecific
// file /usr/include/pthread.h line 1121
extern void * pthread_getspecific(unsigned int);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_key_create
// file /usr/include/pthread.h line 1113
extern signed int pthread_key_create(unsigned int *, void (*)(void *));
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_0 *, const union anonymous_8 *);
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
// rcu_barrier_memb
// file urcu-call-rcu-impl.h line 838
void rcu_barrier_memb(void);
// rcu_cmpxchg_pointer_sym
// file urcu-pointer.c line 53
extern void * rcu_cmpxchg_pointer_sym(void **p, void *old, void *_new);
// rcu_defer_barrier_memb
// file urcu-defer-impl.h line 281
extern void rcu_defer_barrier_memb(void);
// rcu_defer_barrier_queue
// file urcu-defer-impl.h line 218
static void rcu_defer_barrier_queue(struct defer_queue *queue, unsigned long int head);
// rcu_defer_barrier_queue::1::fct_object
//
void fct_object(void *);
// rcu_defer_barrier_thread_memb
// file urcu-defer-impl.h line 261
extern void rcu_defer_barrier_thread_memb(void);
// rcu_defer_exit_memb
// file urcu-defer-impl.h line 466
void rcu_defer_exit_memb(void);
// rcu_defer_num_callbacks
// file urcu-defer-impl.h line 163
static unsigned long int rcu_defer_num_callbacks(void);
// rcu_defer_register_thread_memb
// file urcu-defer-impl.h line 426
extern signed int rcu_defer_register_thread_memb(void);
// rcu_defer_unregister_thread_memb
// file urcu-defer-impl.h line 448
extern void rcu_defer_unregister_thread_memb(void);
// rcu_dereference_sym
// file urcu-pointer.c line 35
extern void * rcu_dereference_sym(void *p);
// rcu_fake_update_stress_test
// file rcutorture.h line 421
void * rcu_fake_update_stress_test(void *arg);
// rcu_init_memb
// file urcu.c line 536
extern void rcu_init_memb(void);
// rcu_quiescent_state
// file urcu.h line 117
static inline void rcu_quiescent_state(void);
// rcu_read_lock_memb
// file urcu.c line 497
extern void rcu_read_lock_memb(void);
// rcu_read_ongoing_memb
// file urcu.c line 507
extern signed int rcu_read_ongoing_memb(void);
// rcu_read_perf_test
// file rcutorture.h line 131
void * rcu_read_perf_test(void *arg);
// rcu_read_stress_test
// file rcutorture.h line 295
void * rcu_read_stress_test(void *arg);
// rcu_read_unlock_memb
// file urcu.c line 502
extern void rcu_read_unlock_memb(void);
// rcu_reader_state
// file urcu/static/urcu.h line 172
static inline enum rcu_state rcu_reader_state(unsigned long int *ctr);
// rcu_register_thread_memb
// file ../../urcu.h line 106
extern void rcu_register_thread_memb(void);
// rcu_set_pointer_sym
// file urcu-pointer.c line 40
extern void * rcu_set_pointer_sym(void **p, void *v);
// rcu_thread_offline
// file urcu.h line 121
static inline void rcu_thread_offline(void);
// rcu_thread_online
// file urcu.h line 125
static inline void rcu_thread_online(void);
// rcu_unregister_thread_memb
// file ../../urcu.h line 107
extern void rcu_unregister_thread_memb(void);
// rcu_update_perf_test
// file rcutorture.h line 161
void * rcu_update_perf_test(void *arg);
// rcu_update_stress_test
// file rcutorture.h line 365
void * rcu_update_stress_test(void *arg);
// rcu_update_stress_test_rcu
// file rcutorture.h line 338
void rcu_update_stress_test_rcu(struct rcu_head *head);
// rcu_xchg_pointer_sym
// file urcu-pointer.c line 47
extern void * rcu_xchg_pointer_sym(void **p, void *v);
// rdiag
// file ../../tests/utils/tap.h line 94
unsigned int rdiag(char *fmt, ...);
// rdiag_end
// file ../../tests/utils/tap.h line 95
unsigned int rdiag_end(void);
// rdiag_start
// file ../../tests/utils/tap.h line 93
unsigned int rdiag_start(void);
// rperftest
// file rcutorture.h line 247
signed int rperftest(signed int nreaders, signed int cpustride);
// run_on
// file ../../tests/common/api.h line 235
static void run_on(signed int cpu);
// sched_getcpu
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 88
extern signed int sched_getcpu(void);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous_3 *);
// set_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 514
signed int set_cpu_call_rcu_data_memb(signed int cpu, struct call_rcu_data *crdp);
// set_thread_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 85
void set_thread_call_rcu_data_memb(struct call_rcu_data *crdp);
// set_thread_cpu_affinity
// file urcu-call-rcu-impl.h line 202
static signed int set_thread_cpu_affinity(struct call_rcu_data *crdp);
// setbuf
// file /usr/include/stdio.h line 332
extern void setbuf(struct _IO_FILE *, char *);
// skip
// file tap.c line 323
signed int skip(unsigned int n, char *fmt, ...);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// smp_init
// file ../../tests/common/api.h line 296
static void smp_init(void);
// smp_mb_master
// file urcu.c line 162
static void smp_mb_master(void);
// smp_mb_slave
// file ../../urcu/static/urcu.h line 95
static inline void smp_mb_slave(void);
// smp_mb_slave_link1
// file urcu/static/urcu.h line 95
static inline void smp_mb_slave_link1(void);
// smp_thread_id
// file ../../tests/common/api.h line 165
static signed int smp_thread_id(void);
// spin_lock
// file ../../tests/common/api.h line 89
static void spin_lock(union anonymous_0 *sp);
// spin_lock_init
// file ../../tests/common/api.h line 81
static void spin_lock_init(union anonymous_0 *sp);
// spin_unlock
// file ../../tests/common/api.h line 97
static void spin_unlock(union anonymous_0 *sp);
// start_defer_thread
// file urcu-defer-impl.h line 400
static void start_defer_thread(void);
// stop_defer_thread
// file urcu-defer-impl.h line 408
static void stop_defer_thread(void);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// stresstest
// file rcutorture.h line 448
signed int stresstest(signed int nreaders);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// synchronize_rcu_memb
// file ../../urcu.h line 101
extern void synchronize_rcu_memb(void);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// tap_disable
// file tap.c line 469
void tap_disable(void);
// thr_defer
// file urcu-defer-impl.h line 374
static void * thr_defer(void *args);
// todo_end
// file tap.c line 369
void todo_end(void);
// todo_start
// file tap.c line 351
void todo_start(char *fmt, ...);
// uperftest
// file rcutorture.h line 261
signed int uperftest(signed int nupdaters, signed int cpustride);
// urcu_adaptative_busy_wait
// file urcu-wait.h line 140
static inline void urcu_adaptative_busy_wait(struct urcu_wait_node *wait);
// urcu_adaptative_wake_up
// file urcu-wait.h line 121
static inline void urcu_adaptative_wake_up(struct urcu_wait_node *wait);
// urcu_move_waiters
// file urcu-wait.h line 93
static inline void urcu_move_waiters(struct urcu_waiters *waiters, struct urcu_wait_queue *queue);
// urcu_ref_put
// file urcu/ref.h line 40
static inline void urcu_ref_put(struct urcu_ref *ref, void (*release)(struct urcu_ref *));
// urcu_ref_put::release_object
//
void release_object(struct urcu_ref *);
// urcu_ref_set
// file urcu/ref.h line 25
static inline void urcu_ref_set(struct urcu_ref *ref, signed long int val);
// urcu_sched_getcpu
// file compat-getcpu.h line 30
static inline signed int urcu_sched_getcpu(void);
// urcu_wait_add
// file urcu-wait.h line 82
static inline _Bool urcu_wait_add(struct urcu_wait_queue *queue, struct urcu_wait_node *node);
// urcu_wait_set_state
// file urcu-wait.h line 100
static inline void urcu_wait_set_state(struct urcu_wait_node *node, enum urcu_wait_state state);
// urcu_wake_all_waiters
// file urcu-wait.h line 185
static inline void urcu_wake_all_waiters(struct urcu_waiters *waiters);
// usage
// file rcutorture.h line 505
void usage(signed int argc, char **argv);
// vasprintf
// file /usr/include/stdio.h line 399
extern signed int vasprintf(char ** restrict , const char *, void **);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// wait_all_threads
// file ../../tests/common/api.h line 222
static void wait_all_threads(void);
// wait_defer
// file urcu-defer-impl.h line 180
static void wait_defer(void);
// wait_for_readers
// file urcu.c line 269
static void wait_for_readers(struct cds_list_head *input_readers, struct cds_list_head *cur_snap_readers, struct cds_list_head *qsreaders);
// wait_gp
// file urcu.c line 232
static void wait_gp(void);
// wait_thread
// file ../../tests/common/api.h line 200
static void * wait_thread(unsigned long int tid);
// wake_call_rcu_thread
// file urcu-call-rcu-impl.h line 674
static void wake_call_rcu_thread(struct call_rcu_data *crdp);
// wake_up_defer
// file urcu-defer-impl.h line 153
static void wake_up_defer(void);
// wake_up_gp
// file ../../urcu/static/urcu.h line 158
static inline void wake_up_gp(void);
// wake_up_gp_link1
// file urcu/static/urcu.h line 158
static inline void wake_up_gp_link1(void);

struct anonymous_2
{
  // v
  signed long long int v[11l];
};

struct anonymous_3
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous_4
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

struct anonymous_6
{
  // v
  signed int v;
};

struct anonymous_7
{
  // v
  signed long long int v;
};

union anonymous_8
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_5
{
  // __data
  struct anonymous_4 __data;
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

union anonymous
{
  // _h
  struct __cds_wfcq_head *_h;
  // h
  struct cds_wfcq_head *h;
} __attribute__ ((__transparent_union__));

union anonymous_1
{
  // _s
  struct __cds_wfs_stack *_s;
  // s
  struct cds_wfs_stack *s;
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

struct cds_wfcq_node
{
  // next
  struct cds_wfcq_node *next;
};

struct __cds_wfcq_head
{
  // node
  struct cds_wfcq_node node;
};

struct __cds_wfs_stack
{
  // head
  struct cds_wfs_head *head;
};

struct __uatomic_dummy
{
  // v
  unsigned long int v[10l];
};

struct urcu_ref
{
  // refcount
  signed long int refcount;
};

struct call_rcu_completion
{
  // barrier_count
  signed int barrier_count;
  // futex
  signed int futex;
  // ref
  struct urcu_ref ref;
};

struct rcu_head
{
  // next
  struct cds_wfcq_node next;
  // func
  void (*func)(struct rcu_head *);
};

struct call_rcu_completion_work
{
  // head
  struct rcu_head head;
  // completion
  struct call_rcu_completion *completion;
};

struct cds_wfcq_tail
{
  // p
  struct cds_wfcq_node *p;
};

struct cds_wfcq_head
{
  // node
  struct cds_wfcq_node node;
  // lock
  union anonymous_0 lock;
};

struct cds_list_head
{
  // next
  struct cds_list_head *next;
  // prev
  struct cds_list_head *prev;
};

struct call_rcu_data
{
  // cbs_tail
  struct cds_wfcq_tail cbs_tail;
  // cbs_head
  struct cds_wfcq_head cbs_head;
  // flags
  unsigned long int flags;
  // futex
  signed int futex;
  // qlen
  unsigned long int qlen;
  // tid
  unsigned long int tid;
  // cpu_affinity
  signed int cpu_affinity;
  // gp_count
  unsigned long int gp_count;
  // list
  struct cds_list_head list;
};

struct cds_wfq_node
{
  // next
  struct cds_wfq_node *next;
};

struct cds_wfq_queue
{
  // head
  struct cds_wfq_node *head;
  // tail
  struct cds_wfq_node **tail;
  // dummy
  struct cds_wfq_node dummy;
  // lock
  union anonymous_0 lock;
};

struct cds_wfs_node
{
  // next
  struct cds_wfs_node *next;
};

struct cds_wfs_head
{
  // node
  struct cds_wfs_node node;
};

struct cds_wfs_stack
{
  // head
  struct cds_wfs_head *head;
  // lock
  union anonymous_0 lock;
};

struct defer_queue
{
  // head
  unsigned long int head;
  // last_fct_in
  void *last_fct_in;
  // tail
  unsigned long int tail;
  // last_fct_out
  void *last_fct_out;
  // q
  void **q;
  // last_head
  unsigned long int last_head;
  // list
  struct cds_list_head list;
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

struct rcu_gp_memb
{
  // ctr
  unsigned long int ctr;
  // futex
  signed int futex;
};

struct rcu_reader_memb
{
  // ctr
  unsigned long int ctr;
  // need_mb
  char need_mb;
  // node
  struct cds_list_head node;
  // tid
  unsigned long int tid;
  // registered
  unsigned int registered : 1;
};

struct rcu_stress
{
  // pipe_count
  signed int pipe_count;
  // mbtest
  signed int mbtest;
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

struct urcu_wait_node
{
  // node
  struct cds_wfs_node node;
  // state
  signed int state;
};

struct urcu_wait_queue
{
  // stack
  struct cds_wfs_stack stack;
};

struct urcu_waiters
{
  // head
  struct cds_wfs_head *head;
};


// __per_thread_n_reads_pt
// file rcutorture.h line 73
struct anonymous_7 __per_thread_n_reads_pt[128l];
// __per_thread_n_updates_pt
// file rcutorture.h line 74
struct anonymous_7 __per_thread_n_updates_pt[128l];
// __per_thread_rcu_stress_count
// file rcutorture.h line 291
struct anonymous_2 __per_thread_rcu_stress_count[128l];
// __per_thread_smp_processor_id
// file ../../tests/common/api.h line 284
struct anonymous_6 __per_thread_smp_processor_id[128l];
// __thread_id_map
// file ../../tests/common/api.h line 118
unsigned long int __thread_id_map[128l];
// __thread_id_map_mutex
// file ../../tests/common/api.h line 119
union anonymous_0 __thread_id_map_mutex;
// __urcu_compat_futex_cond
// file compat_futex.c line 46
union anonymous_5 __urcu_compat_futex_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// __urcu_compat_futex_lock
// file compat_futex.c line 44
union anonymous_0 __urcu_compat_futex_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// argsbuf
// file rcutorture.h line 87
char argsbuf[64l];
// call_rcu_data_list
// file urcu-call-rcu-impl.h line 89
static struct cds_list_head call_rcu_data_list;
// call_rcu_data_list
// file urcu-call-rcu-impl.h line 89
static struct cds_list_head call_rcu_data_list = { .next=&call_rcu_data_list, .prev=&call_rcu_data_list };
// call_rcu_mutex
// file urcu-call-rcu-impl.h line 98
static union anonymous_0 call_rcu_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// call_rcu_test_cond
// file rcutorture.h line 336
static union anonymous_5 call_rcu_test_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// call_rcu_test_mutex
// file rcutorture.h line 335
static union anonymous_0 call_rcu_test_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// callrcu_type
// file rcutorture.h line 82
static enum callrcu_type callrcu_type = (enum callrcu_type)0;
// default_call_rcu_data
// file urcu-call-rcu-impl.h line 102
static struct call_rcu_data *default_call_rcu_data;
// defer_queue
// file urcu-defer-impl.h line 129
static struct defer_queue defer_queue;
// defer_thread_futex
// file urcu-defer-impl.h line 122
static signed int defer_thread_futex;
// defer_thread_mutex
// file urcu-defer-impl.h line 120
static union anonymous_0 defer_thread_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// defer_thread_stop
// file urcu-defer-impl.h line 123
static signed int defer_thread_stop;
// e_tests
// file tap.c line 39
static unsigned int e_tests = (unsigned int)0;
// failures
// file tap.c line 40
static unsigned int failures = (unsigned int)0;
// garbage
// file rcutorture.h line 293
signed int garbage = 0;
// goflag
// file rcutorture.h line 93
volatile signed int goflag = 0;
// gp_waiters
// file urcu.c line 128
static struct urcu_wait_queue gp_waiters = { .stack={ .head=(struct cds_wfs_head *)(void *)0x1UL, .lock={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } } } };
// have_plan
// file tap.c line 37
static signed int have_plan = 0;
// init_done
// file urcu.c line 80
static signed int init_done;
// maxcpus
// file urcu-call-rcu-impl.h line 121
static signed long int maxcpus;
// n_mberror
// file rcutorture.h line 290
signed int n_mberror = 0;
// n_reads
// file rcutorture.h line 84
signed long long int n_reads = 0LL;
// n_updates
// file rcutorture.h line 85
signed long int n_updates = 0L;
// no_plan
// file tap.c line 35
static signed int no_plan = 0;
// nthreadsrunning
// file rcutorture.h line 86
signed int nthreadsrunning;
// per_cpu_call_rcu_data
// file urcu-call-rcu-impl.h line 120
static struct call_rcu_data **per_cpu_call_rcu_data;
// rcu_defer_mutex
// file urcu-defer-impl.h line 119
static union anonymous_0 rcu_defer_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rcu_flavor_memb
// file urcu.c line 602
struct rcu_flavor_struct rcu_flavor_memb;
// rcu_flavor_memb
// file urcu.c line 602
struct rcu_flavor_struct rcu_flavor_memb = { .read_lock=rcu_read_lock_memb, .read_unlock=rcu_read_unlock_memb, .read_ongoing=rcu_read_ongoing_memb,
    .read_quiescent_state=rcu_quiescent_state,
    .update_call_rcu=call_rcu_memb,
    .update_synchronize_rcu=synchronize_rcu_memb, .update_defer_rcu=defer_rcu_memb,
    .thread_offline=rcu_thread_offline, .thread_online=rcu_thread_online,
    .register_thread=rcu_register_thread_memb, .unregister_thread=rcu_unregister_thread_memb,
    .barrier=rcu_barrier_memb };
// rcu_gp_lock
// file urcu.c line 103
static union anonymous_0 rcu_gp_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rcu_gp_memb
// file urcu.c line 114
struct rcu_gp_memb rcu_gp_memb = { .ctr=1UL << 0, .futex=0 };
// rcu_has_sys_membarrier_memb
// file urcu.c line 81
signed int rcu_has_sys_membarrier_memb;
// rcu_reader_memb
// file urcu.c line 120
struct rcu_reader_memb rcu_reader_memb;
// rcu_registry_lock
// file urcu.c line 113
static union anonymous_0 rcu_registry_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rcu_stress_array
// file rcutorture.h line 286
struct rcu_stress rcu_stress_array[10l] = { { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 }, { .pipe_count=0, .mbtest=0 } };
// rcu_stress_current
// file rcutorture.h line 287
struct rcu_stress *rcu_stress_current;
// rcu_stress_idx
// file rcutorture.h line 288
signed int rcu_stress_idx = 0;
// registry
// file urcu.c line 122
static struct cds_list_head registry;
// registry
// file urcu.c line 122
static struct cds_list_head registry = { .next=&registry, .prev=&registry };
// registry_defer
// file urcu-defer-impl.h line 130
static struct cds_list_head registry_defer;
// registry_defer
// file urcu-defer-impl.h line 130
static struct cds_list_head registry_defer = { .next=&registry_defer, .prev=&registry_defer };
// skip_all
// file tap.c line 36
static signed int skip_all = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// tap_is_disabled
// file tap.c line 45
static signed int tap_is_disabled = 0;
// test_count
// file tap.c line 38
static unsigned int test_count = (unsigned int)0;
// test_died
// file tap.c line 44
static signed int test_died = 0;
// thread_call_rcu_data
// file urcu-call-rcu-impl.h line 93
static struct call_rcu_data *thread_call_rcu_data;
// thread_id_key
// file ../../tests/common/api.h line 134
unsigned int thread_id_key;
// tid_defer
// file urcu-defer-impl.h line 131
static unsigned long int tid_defer;
// todo
// file tap.c line 43
static signed int todo = 0;
// todo_msg
// file tap.c line 41
static char *todo_msg = (char *)(void *)0;
// todo_msg_fixed
// file tap.c line 42
static char *todo_msg_fixed = "libtap malloc issue";

// ___cds_wfcq_append
// file ./urcu/static/wfcqueue.h line 165
static inline _Bool ___cds_wfcq_append(union anonymous u_head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_head, struct cds_wfcq_node *new_tail)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node *old_tail;
  unsigned long int return_value___uatomic_exchange_1;
  return_value___uatomic_exchange_1=__uatomic_exchange((void *)&tail->p, (unsigned long int)new_tail, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
  old_tail = (struct cds_wfcq_node *)return_value___uatomic_exchange_1;
  struct cds_wfcq_node *_v;
  struct cds_wfcq_node * volatile tmp_statement_expression_2;
  *((struct cds_wfcq_node * volatile *)&old_tail->next) = new_head;
  tmp_statement_expression_2 = *((struct cds_wfcq_node * volatile *)&old_tail->next);
  _v = tmp_statement_expression_2;
  asm("" :  :  : "memory");
  _v = _v;
  return old_tail != &head->node;
}

// ___cds_wfcq_append_link1
// file urcu/static/wfcqueue.h line 165
static inline _Bool ___cds_wfcq_append_link1(union anonymous u_head_link1, struct cds_wfcq_tail *tail_link1, struct cds_wfcq_node *new_head_link1, struct cds_wfcq_node *new_tail_link1)
{
  struct __cds_wfcq_head *head_link1 = u_head_link1._h;
  struct cds_wfcq_node *old_tail_link1;
  unsigned long int return_value___uatomic_exchange_1_link1;
  return_value___uatomic_exchange_1_link1=__uatomic_exchange_link1_link1((void *)&tail_link1->p, (unsigned long int)new_tail_link1, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
  old_tail_link1 = (struct cds_wfcq_node *)return_value___uatomic_exchange_1_link1;
  struct cds_wfcq_node *_v_link1;
  struct cds_wfcq_node * volatile tmp_statement_expression_2_link1;
  *((struct cds_wfcq_node * volatile *)&old_tail_link1->next) = new_head_link1;
  tmp_statement_expression_2_link1 = *((struct cds_wfcq_node * volatile *)&old_tail_link1->next);
  _v_link1 = tmp_statement_expression_2_link1;
  asm("" :  :  : "memory");
  _v_link1 = _v_link1;
  return old_tail_link1 != &head_link1->node;
}

// ___cds_wfcq_busy_wait
// file ./urcu/static/wfcqueue.h line 219
static inline _Bool ___cds_wfcq_busy_wait(signed int *attempt, signed int blocking)
{
  if(blocking == 0)
    return (_Bool)1;

  else
  {
    *attempt = *attempt + 1;
    if(*attempt >= 10)
    {
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
      *attempt = 0;
    }

    else
      asm("rep; nop" :  :  : "memory");
    return (_Bool)0;
  }
}

// ___cds_wfcq_busy_wait_link1
// file urcu/static/wfcqueue.h line 219
static inline _Bool ___cds_wfcq_busy_wait_link1(signed int *attempt_link1, signed int blocking_link1)
{
  if(blocking_link1 == 0)
    return (_Bool)1;

  else
  {
    *attempt_link1 = *attempt_link1 + 1;
    if(*attempt_link1 >= 10)
    {
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
      *attempt_link1 = 0;
    }

    else
      asm("rep; nop" :  :  : "memory");
    return (_Bool)0;
  }
}

// ___cds_wfcq_dequeue_blocking
// file urcu/static/wfcqueue.h line 453
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_blocking(union anonymous head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_blocking_1;
  return_value____cds_wfcq_dequeue_with_state_blocking_1=___cds_wfcq_dequeue_with_state_blocking(head, tail, (signed int *)(void *)0);
  return return_value____cds_wfcq_dequeue_with_state_blocking_1;
}

// ___cds_wfcq_dequeue_nonblocking
// file urcu/static/wfcqueue.h line 479
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_nonblocking(union anonymous head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_nonblocking_1;
  return_value____cds_wfcq_dequeue_with_state_nonblocking_1=___cds_wfcq_dequeue_with_state_nonblocking(head, tail, (signed int *)(void *)0);
  return return_value____cds_wfcq_dequeue_with_state_nonblocking_1;
}

// ___cds_wfcq_dequeue_with_state
// file urcu/static/wfcqueue.h line 367
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state(union anonymous u_head, struct cds_wfcq_tail *tail, signed int *state, signed int blocking)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node *node;
  struct cds_wfcq_node *next;
  if(!(state == ((signed int *)NULL)))
    *state = 0;

  _Bool return_value__cds_wfcq_empty_1;
  return_value__cds_wfcq_empty_1=_cds_wfcq_empty_link1(head, tail);
  struct cds_wfcq_node * volatile tmp_statement_expression_3;
  if(!(return_value__cds_wfcq_empty_1 == (_Bool)0))
    return (struct cds_wfcq_node *)(void *)0;

  else
  {
    node=___cds_wfcq_node_sync_next_link1(&head->node, blocking);
    if(node == (struct cds_wfcq_node *)18446744073709551615ul && blocking == 0)
      return (struct cds_wfcq_node *)(void *)-1UL;

    else
    {
      asm("" :  :  : "memory");
      tmp_statement_expression_3 = *((struct cds_wfcq_node * volatile *)&node->next);
      next = tmp_statement_expression_3;
      if(next == ((struct cds_wfcq_node *)NULL))
      {
        _cds_wfcq_node_init_link1(&head->node);
        unsigned long int return_value___uatomic_cmpxchg_2;
        return_value___uatomic_cmpxchg_2=__uatomic_cmpxchg_link2((void *)&tail->p, (unsigned long int)node, (unsigned long int)&head->node, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
        if((struct cds_wfcq_node *)return_value___uatomic_cmpxchg_2 == node)
        {
          if(!(state == ((signed int *)NULL)))
            *state = *state | 1;

          return node;
        }

        next=___cds_wfcq_node_sync_next_link1(node, blocking);
        if(next == (struct cds_wfcq_node *)18446744073709551615ul && blocking == 0)
        {
          head->node.next = node;
          return (struct cds_wfcq_node *)(void *)-1UL;
        }

      }

      head->node.next = next;
      return node;
    }
  }
}

// ___cds_wfcq_dequeue_with_state_blocking
// file urcu/static/wfcqueue.h line 440
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state_blocking(union anonymous head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_1;
  return_value____cds_wfcq_dequeue_with_state_1=___cds_wfcq_dequeue_with_state(head, tail, state, 1);
  return return_value____cds_wfcq_dequeue_with_state_1;
}

// ___cds_wfcq_dequeue_with_state_nonblocking
// file urcu/static/wfcqueue.h line 466
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state_nonblocking(union anonymous head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_1;
  return_value____cds_wfcq_dequeue_with_state_1=___cds_wfcq_dequeue_with_state(head, tail, state, 0);
  return return_value____cds_wfcq_dequeue_with_state_1;
}

// ___cds_wfcq_first
// file ./urcu/static/wfcqueue.h line 253
static inline struct cds_wfcq_node * ___cds_wfcq_first(union anonymous u_head, struct cds_wfcq_tail *tail, signed int blocking)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node *node;
  _Bool return_value__cds_wfcq_empty_1;
  return_value__cds_wfcq_empty_1=_cds_wfcq_empty(head, tail);
  if(!(return_value__cds_wfcq_empty_1 == (_Bool)0))
    return (struct cds_wfcq_node *)(void *)0;

  else
  {
    node=___cds_wfcq_node_sync_next(&head->node, blocking);
    return node;
  }
}

// ___cds_wfcq_first_link1
// file urcu/static/wfcqueue.h line 253
static inline struct cds_wfcq_node * ___cds_wfcq_first_link1(union anonymous u_head_link1, struct cds_wfcq_tail *tail_link1, signed int blocking_link1)
{
  struct __cds_wfcq_head *head_link1 = u_head_link1._h;
  struct cds_wfcq_node *node_link1;
  _Bool return_value__cds_wfcq_empty_1_link1;
  return_value__cds_wfcq_empty_1_link1=_cds_wfcq_empty_link1(head_link1, tail_link1);
  if(!(return_value__cds_wfcq_empty_1_link1 == (_Bool)0))
    return (struct cds_wfcq_node *)(void *)0;

  else
  {
    node_link1=___cds_wfcq_node_sync_next_link1(&head_link1->node, blocking_link1);
    return node_link1;
  }
}

// ___cds_wfcq_first_blocking
// file ./urcu/static/wfcqueue.h line 283
static inline struct cds_wfcq_node * ___cds_wfcq_first_blocking(union anonymous head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first_1;
  return_value____cds_wfcq_first_1=___cds_wfcq_first(head, tail, 1);
  return return_value____cds_wfcq_first_1;
}

// ___cds_wfcq_first_blocking_link1
// file urcu/static/wfcqueue.h line 283
static inline struct cds_wfcq_node * ___cds_wfcq_first_blocking_link1(union anonymous head_link1, struct cds_wfcq_tail *tail_link1)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first_1_link1;
  return_value____cds_wfcq_first_1_link1=___cds_wfcq_first_link1(head_link1, tail_link1, 1);
  return return_value____cds_wfcq_first_1_link1;
}

// ___cds_wfcq_first_nonblocking
// file urcu/static/wfcqueue.h line 297
static inline struct cds_wfcq_node * ___cds_wfcq_first_nonblocking(union anonymous head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first_1;
  return_value____cds_wfcq_first_1=___cds_wfcq_first_link1(head, tail, 0);
  return return_value____cds_wfcq_first_1;
}

// ___cds_wfcq_init
// file urcu/static/wfcqueue.h line 112
static inline void ___cds_wfcq_init(struct __cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  _cds_wfcq_node_init_link1(&head->node);
  tail->p = &head->node;
}

// ___cds_wfcq_next
// file ./urcu/static/wfcqueue.h line 304
static inline struct cds_wfcq_node * ___cds_wfcq_next(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node, signed int blocking)
{
  struct cds_wfcq_node *next;
  struct cds_wfcq_node * volatile tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((struct cds_wfcq_node * volatile *)&node->next);
  next = tmp_statement_expression_2;
  struct cds_wfcq_node * volatile tmp_statement_expression_1;
  if(next == ((struct cds_wfcq_node *)NULL))
  {
    asm("" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((struct cds_wfcq_node * volatile *)&tail->p);
    if(tmp_statement_expression_1 == node)
      return (struct cds_wfcq_node *)(void *)0;

    next=___cds_wfcq_node_sync_next(node, blocking);
  }

  return next;
}

// ___cds_wfcq_next_link1
// file urcu/static/wfcqueue.h line 304
static inline struct cds_wfcq_node * ___cds_wfcq_next_link1(union anonymous head_link1, struct cds_wfcq_tail *tail_link1, struct cds_wfcq_node *node_link1, signed int blocking_link1)
{
  struct cds_wfcq_node *next_link1;
  struct cds_wfcq_node * volatile tmp_statement_expression_2_link1;
  asm("" :  :  : "memory");
  tmp_statement_expression_2_link1 = *((struct cds_wfcq_node * volatile *)&node_link1->next);
  next_link1 = tmp_statement_expression_2_link1;
  struct cds_wfcq_node * volatile tmp_statement_expression_1_link1;
  if(next_link1 == ((struct cds_wfcq_node *)NULL))
  {
    asm("" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_statement_expression_1_link1 = *((struct cds_wfcq_node * volatile *)&tail_link1->p);
    if(tmp_statement_expression_1_link1 == node_link1)
      return (struct cds_wfcq_node *)(void *)0;

    next_link1=___cds_wfcq_node_sync_next_link1(node_link1, blocking_link1);
  }

  return next_link1;
}

// ___cds_wfcq_next_blocking
// file ./urcu/static/wfcqueue.h line 345
static inline struct cds_wfcq_node * ___cds_wfcq_next_blocking(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next_1;
  return_value____cds_wfcq_next_1=___cds_wfcq_next(head, tail, node, 1);
  return return_value____cds_wfcq_next_1;
}

// ___cds_wfcq_next_blocking_link1
// file urcu/static/wfcqueue.h line 345
static inline struct cds_wfcq_node * ___cds_wfcq_next_blocking_link1(union anonymous head_link1, struct cds_wfcq_tail *tail_link1, struct cds_wfcq_node *node_link1)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next_1_link1;
  return_value____cds_wfcq_next_1_link1=___cds_wfcq_next_link1(head_link1, tail_link1, node_link1, 1);
  return return_value____cds_wfcq_next_1_link1;
}

// ___cds_wfcq_next_nonblocking
// file urcu/static/wfcqueue.h line 359
static inline struct cds_wfcq_node * ___cds_wfcq_next_nonblocking(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next_1;
  return_value____cds_wfcq_next_1=___cds_wfcq_next_link1(head, tail, node, 0);
  return return_value____cds_wfcq_next_1;
}

// ___cds_wfcq_node_sync_next
// file ./urcu/static/wfcqueue.h line 236
static inline struct cds_wfcq_node * ___cds_wfcq_node_sync_next(struct cds_wfcq_node *node, signed int blocking)
{
  struct cds_wfcq_node *next;
  signed int attempt = 0;
  struct cds_wfcq_node * volatile tmp_statement_expression_1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((struct cds_wfcq_node * volatile *)&node->next);
    next = tmp_statement_expression_1;
    if(!(next == ((struct cds_wfcq_node *)NULL)))
      break;

    _Bool return_value____cds_wfcq_busy_wait_2;
    return_value____cds_wfcq_busy_wait_2=___cds_wfcq_busy_wait(&attempt, blocking);
    if(!(return_value____cds_wfcq_busy_wait_2 == (_Bool)0))
      return (struct cds_wfcq_node *)(void *)-1UL;

  }
  while((_Bool)1);
  return next;
}

// ___cds_wfcq_node_sync_next_link1
// file urcu/static/wfcqueue.h line 236
static inline struct cds_wfcq_node * ___cds_wfcq_node_sync_next_link1(struct cds_wfcq_node *node_link1, signed int blocking_link1)
{
  struct cds_wfcq_node *next_link1;
  signed int attempt_link1 = 0;
  struct cds_wfcq_node * volatile tmp_statement_expression_1_link1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1_link1 = *((struct cds_wfcq_node * volatile *)&node_link1->next);
    next_link1 = tmp_statement_expression_1_link1;
    if(!(next_link1 == ((struct cds_wfcq_node *)NULL)))
      break;

    _Bool return_value____cds_wfcq_busy_wait_2_link1;
    return_value____cds_wfcq_busy_wait_2_link1=___cds_wfcq_busy_wait_link1(&attempt_link1, blocking_link1);
    if(!(return_value____cds_wfcq_busy_wait_2_link1 == (_Bool)0))
      return (struct cds_wfcq_node *)(void *)-1UL;

  }
  while((_Bool)1);
  return next_link1;
}

// ___cds_wfcq_splice
// file ./urcu/static/wfcqueue.h line 496
static inline enum cds_wfcq_ret ___cds_wfcq_splice(union anonymous u_dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous u_src_q_head, struct cds_wfcq_tail *src_q_tail, signed int blocking)
{
  struct __cds_wfcq_head *dest_q_head = u_dest_q_head._h;
  struct __cds_wfcq_head *src_q_head = u_src_q_head._h;
  struct cds_wfcq_node *head;
  struct cds_wfcq_node *tail;
  signed int attempt = 0;
  _Bool return_value__cds_wfcq_empty_1;
  return_value__cds_wfcq_empty_1=_cds_wfcq_empty(src_q_head, src_q_tail);
  struct cds_wfcq_node * volatile tmp_statement_expression_3;
  if(!(return_value__cds_wfcq_empty_1 == (_Bool)0))
    return (enum cds_wfcq_ret)CDS_WFCQ_RET_SRC_EMPTY;

  else
  {
    do
    {
      unsigned long int return_value___uatomic_exchange_2;
      return_value___uatomic_exchange_2=__uatomic_exchange((void *)&src_q_head->node.next, (unsigned long int)(void *)0, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
      head = (struct cds_wfcq_node *)return_value___uatomic_exchange_2;
      if(!(head == ((struct cds_wfcq_node *)NULL)))
        break;

      asm("" :  :  : "memory");
      tmp_statement_expression_3 = *((struct cds_wfcq_node * volatile *)&src_q_tail->p);
      if(tmp_statement_expression_3 == &src_q_head->node)
        return (enum cds_wfcq_ret)CDS_WFCQ_RET_SRC_EMPTY;

      _Bool return_value____cds_wfcq_busy_wait_4;
      return_value____cds_wfcq_busy_wait_4=___cds_wfcq_busy_wait(&attempt, blocking);
      if(!(return_value____cds_wfcq_busy_wait_4 == (_Bool)0))
        return (enum cds_wfcq_ret)CDS_WFCQ_RET_WOULDBLOCK;

    }
    while((_Bool)1);
    unsigned long int return_value___uatomic_exchange_5;
    return_value___uatomic_exchange_5=__uatomic_exchange((void *)&src_q_tail->p, (unsigned long int)&src_q_head->node, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
    tail = (struct cds_wfcq_node *)return_value___uatomic_exchange_5;
    _Bool return_value____cds_wfcq_append_6;
    return_value____cds_wfcq_append_6=___cds_wfcq_append(dest_q_head, dest_q_tail, head, tail);
    if(!(return_value____cds_wfcq_append_6 == (_Bool)0))
      return (enum cds_wfcq_ret)CDS_WFCQ_RET_DEST_NON_EMPTY;

    else
      return (enum cds_wfcq_ret)CDS_WFCQ_RET_DEST_EMPTY;
  }
}

// ___cds_wfcq_splice_link1
// file urcu/static/wfcqueue.h line 496
static inline enum cds_wfcq_ret ___cds_wfcq_splice_link1(union anonymous u_dest_q_head_link1, struct cds_wfcq_tail *dest_q_tail_link1, union anonymous u_src_q_head_link1, struct cds_wfcq_tail *src_q_tail_link1, signed int blocking_link1)
{
  struct __cds_wfcq_head *dest_q_head_link1 = u_dest_q_head_link1._h;
  struct __cds_wfcq_head *src_q_head_link1 = u_src_q_head_link1._h;
  struct cds_wfcq_node *head_link1;
  struct cds_wfcq_node *tail_link1;
  signed int attempt_link1 = 0;
  _Bool return_value__cds_wfcq_empty_1_link1;
  return_value__cds_wfcq_empty_1_link1=_cds_wfcq_empty_link1(src_q_head_link1, src_q_tail_link1);
  struct cds_wfcq_node * volatile tmp_statement_expression_3_link1;
  if(!(return_value__cds_wfcq_empty_1_link1 == (_Bool)0))
    return (enum cds_wfcq_ret)CDS_WFCQ_RET_SRC_EMPTY;

  else
  {
    do
    {
      unsigned long int return_value___uatomic_exchange_2_link1;
      return_value___uatomic_exchange_2_link1=__uatomic_exchange_link1_link1((void *)&src_q_head_link1->node.next, (unsigned long int)(void *)0, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
      head_link1 = (struct cds_wfcq_node *)return_value___uatomic_exchange_2_link1;
      if(!(head_link1 == ((struct cds_wfcq_node *)NULL)))
        break;

      asm("" :  :  : "memory");
      tmp_statement_expression_3_link1 = *((struct cds_wfcq_node * volatile *)&src_q_tail_link1->p);
      if(tmp_statement_expression_3_link1 == &src_q_head_link1->node)
        return (enum cds_wfcq_ret)CDS_WFCQ_RET_SRC_EMPTY;

      _Bool return_value____cds_wfcq_busy_wait_4_link1;
      return_value____cds_wfcq_busy_wait_4_link1=___cds_wfcq_busy_wait_link1(&attempt_link1, blocking_link1);
      if(!(return_value____cds_wfcq_busy_wait_4_link1 == (_Bool)0))
        return (enum cds_wfcq_ret)CDS_WFCQ_RET_WOULDBLOCK;

    }
    while((_Bool)1);
    unsigned long int return_value___uatomic_exchange_5_link1;
    return_value___uatomic_exchange_5_link1=__uatomic_exchange_link1_link1((void *)&src_q_tail_link1->p, (unsigned long int)&src_q_head_link1->node, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
    tail_link1 = (struct cds_wfcq_node *)return_value___uatomic_exchange_5_link1;
    _Bool return_value____cds_wfcq_append_6_link1;
    return_value____cds_wfcq_append_6_link1=___cds_wfcq_append_link1(dest_q_head_link1, dest_q_tail_link1, head_link1, tail_link1);
    if(!(return_value____cds_wfcq_append_6_link1 == (_Bool)0))
      return (enum cds_wfcq_ret)CDS_WFCQ_RET_DEST_NON_EMPTY;

    else
      return (enum cds_wfcq_ret)CDS_WFCQ_RET_DEST_EMPTY;
  }
}

// ___cds_wfcq_splice_blocking
// file ./urcu/static/wfcqueue.h line 559
static inline enum cds_wfcq_ret ___cds_wfcq_splice_blocking(union anonymous dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice_1;
  return_value____cds_wfcq_splice_1=___cds_wfcq_splice(dest_q_head, dest_q_tail, src_q_head, src_q_tail, 1);
  return return_value____cds_wfcq_splice_1;
}

// ___cds_wfcq_splice_blocking_link1
// file urcu/static/wfcqueue.h line 559
static inline enum cds_wfcq_ret ___cds_wfcq_splice_blocking_link1(union anonymous dest_q_head_link1, struct cds_wfcq_tail *dest_q_tail_link1, union anonymous src_q_head_link1, struct cds_wfcq_tail *src_q_tail_link1)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice_1_link1;
  return_value____cds_wfcq_splice_1_link1=___cds_wfcq_splice_link1(dest_q_head_link1, dest_q_tail_link1, src_q_head_link1, src_q_tail_link1, 1);
  return return_value____cds_wfcq_splice_1_link1;
}

// ___cds_wfcq_splice_nonblocking
// file urcu/static/wfcqueue.h line 576
static inline enum cds_wfcq_ret ___cds_wfcq_splice_nonblocking(union anonymous dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice_1;
  return_value____cds_wfcq_splice_1=___cds_wfcq_splice_link1(dest_q_head, dest_q_tail, src_q_head, src_q_tail, 0);
  return return_value____cds_wfcq_splice_1;
}

// ___cds_wfq_dequeue_blocking
// file urcu/static/wfqueue.h line 119
static inline struct cds_wfq_node * ___cds_wfq_dequeue_blocking(struct cds_wfq_queue *q)
{
  struct cds_wfq_node *node;
  struct cds_wfq_node *next;
  struct cds_wfq_node ** volatile tmp_statement_expression_1;
  if(q->head == &q->dummy)
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((struct cds_wfq_node ** volatile *)&q->tail);
    if(!(tmp_statement_expression_1 == &q->dummy.next))
      goto __CPROVER_DUMP_L1;

    return (struct cds_wfq_node *)(void *)0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    node = q->head;
    next=___cds_wfq_node_sync_next(node);
    q->head = next;
    if(node == &q->dummy)
    {
      _cds_wfq_node_init(node);
      _cds_wfq_enqueue(q, node);
      struct cds_wfq_node *return_value____cds_wfq_dequeue_blocking_2;
      return_value____cds_wfq_dequeue_blocking_2=___cds_wfq_dequeue_blocking(q);
      return return_value____cds_wfq_dequeue_blocking_2;
    }

    return node;
  }
}

// ___cds_wfq_node_sync_next
// file urcu/static/wfqueue.h line 91
static inline struct cds_wfq_node * ___cds_wfq_node_sync_next(struct cds_wfq_node *node)
{
  struct cds_wfq_node *next;
  signed int attempt = 0;
  struct cds_wfq_node * volatile tmp_statement_expression_1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((struct cds_wfq_node * volatile *)&node->next);
    next = tmp_statement_expression_1;
    if(!(next == ((struct cds_wfq_node *)NULL)))
      break;

    attempt = attempt + 1;
    if(attempt >= 10)
    {
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
      attempt = 0;
    }

    else
      asm("rep; nop" :  :  : "memory");
  }
  while((_Bool)1);
  return next;
}

// ___cds_wfs_end
// file ./urcu/static/wfstack.h line 100
static inline _Bool ___cds_wfs_end(void *node)
{
  return node == (void *)0x1UL;
}

// ___cds_wfs_end_link1
// file urcu/static/wfstack.h line 100
static inline _Bool ___cds_wfs_end_link1(void *node_link1)
{
  return node_link1 == (void *)0x1UL;
}

// ___cds_wfs_init
// file urcu/static/wfstack.h line 82
static inline void ___cds_wfs_init(struct __cds_wfs_stack *s)
{
  s->head = (struct cds_wfs_head *)(void *)0x1UL;
}

// ___cds_wfs_next
// file ./urcu/static/wfstack.h line 388
static inline struct cds_wfs_node * ___cds_wfs_next(struct cds_wfs_node *node, signed int blocking)
{
  struct cds_wfs_node *next;
  next=___cds_wfs_node_sync_next(node, blocking);
  _Bool return_value____cds_wfs_end_1;
  return_value____cds_wfs_end_1=___cds_wfs_end((void *)next);
  if(!(return_value____cds_wfs_end_1 == (_Bool)0))
    return (struct cds_wfs_node *)(void *)0;

  else
    return next;
}

// ___cds_wfs_next_link1
// file urcu/static/wfstack.h line 388
static inline struct cds_wfs_node * ___cds_wfs_next_link1(struct cds_wfs_node *node_link1, signed int blocking_link1)
{
  struct cds_wfs_node *next_link1;
  next_link1=___cds_wfs_node_sync_next_link1(node_link1, blocking_link1);
  _Bool return_value____cds_wfs_end_1_link1;
  return_value____cds_wfs_end_1_link1=___cds_wfs_end_link1((void *)next_link1);
  if(!(return_value____cds_wfs_end_1_link1 == (_Bool)0))
    return (struct cds_wfs_node *)(void *)0;

  else
    return next_link1;
}

// ___cds_wfs_node_sync_next
// file ./urcu/static/wfstack.h line 151
static inline struct cds_wfs_node * ___cds_wfs_node_sync_next(struct cds_wfs_node *node, signed int blocking)
{
  struct cds_wfs_node *next;
  signed int attempt = 0;
  struct cds_wfs_node * volatile tmp_statement_expression_1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((struct cds_wfs_node * volatile *)&node->next);
    next = tmp_statement_expression_1;
    if(!(next == ((struct cds_wfs_node *)NULL)))
      break;

    if(blocking == 0)
      return (struct cds_wfs_node *)(void *)-1UL;

    attempt = attempt + 1;
    if(attempt >= 10)
    {
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
      attempt = 0;
    }

    else
      asm("rep; nop" :  :  : "memory");
  }
  while((_Bool)1);
  return next;
}

// ___cds_wfs_node_sync_next_link1
// file urcu/static/wfstack.h line 151
static inline struct cds_wfs_node * ___cds_wfs_node_sync_next_link1(struct cds_wfs_node *node_link1, signed int blocking_link1)
{
  struct cds_wfs_node *next_link1;
  signed int attempt_link1 = 0;
  struct cds_wfs_node * volatile tmp_statement_expression_1_link1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1_link1 = *((struct cds_wfs_node * volatile *)&node_link1->next);
    next_link1 = tmp_statement_expression_1_link1;
    if(!(next_link1 == ((struct cds_wfs_node *)NULL)))
      break;

    if(blocking_link1 == 0)
      return (struct cds_wfs_node *)(void *)-1UL;

    attempt_link1 = attempt_link1 + 1;
    if(attempt_link1 >= 10)
    {
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
      attempt_link1 = 0;
    }

    else
      asm("rep; nop" :  :  : "memory");
  }
  while((_Bool)1);
  return next_link1;
}

// ___cds_wfs_pop
// file urcu/static/wfstack.h line 175
static inline struct cds_wfs_node * ___cds_wfs_pop(union anonymous_1 u_stack, signed int *state, signed int blocking)
{
  struct cds_wfs_head *head;
  struct cds_wfs_head *new_head;
  struct cds_wfs_node *next;
  struct __cds_wfs_stack *s = u_stack._s;
  if(!(state == ((signed int *)NULL)))
    *state = 0;

  struct cds_wfs_head * volatile tmp_statement_expression_1;
  struct cds_wfs_head *tmp_statement_expression_3;
  _Bool return_value____cds_wfs_end_4;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((struct cds_wfs_head * volatile *)&s->head);
    head = tmp_statement_expression_1;
    _Bool return_value____cds_wfs_end_2;
    return_value____cds_wfs_end_2=___cds_wfs_end_link1((void *)head);
    if(!(return_value____cds_wfs_end_2 == (_Bool)0))
      return (struct cds_wfs_node *)(void *)0;

    next=___cds_wfs_node_sync_next_link1(&head->node, blocking);
    if(next == (struct cds_wfs_node *)18446744073709551615ul && blocking == 0)
      return (struct cds_wfs_node *)(void *)-1UL;

    const struct cds_wfs_node *__ptr = next;
    tmp_statement_expression_3 = (struct cds_wfs_head *)((char *)__ptr - (signed long int)0ul);
    new_head = tmp_statement_expression_3;
    unsigned long int return_value___uatomic_cmpxchg_5;
    return_value___uatomic_cmpxchg_5=__uatomic_cmpxchg_link1((void *)&s->head, (unsigned long int)head, (unsigned long int)new_head, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
    if((struct cds_wfs_head *)return_value___uatomic_cmpxchg_5 == head)
    {
      if(!(state == ((signed int *)NULL)))
      {
        return_value____cds_wfs_end_4=___cds_wfs_end_link1((void *)new_head);
        if(!(return_value____cds_wfs_end_4 == (_Bool)0))
          *state = *state | 1;

      }

      return &head->node;
    }

    if(blocking == 0)
      return (struct cds_wfs_node *)(void *)-1UL;

  }
  while((_Bool)1);
}

// ___cds_wfs_pop_all
// file ./urcu/static/wfstack.h line 284
static inline struct cds_wfs_head * ___cds_wfs_pop_all(union anonymous_1 u_stack)
{
  struct __cds_wfs_stack *s = u_stack._s;
  struct cds_wfs_head *head;
  unsigned long int return_value___uatomic_exchange_1;
  return_value___uatomic_exchange_1=__uatomic_exchange((void *)&s->head, (unsigned long int)(void *)0x1UL, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
  head = (struct cds_wfs_head *)return_value___uatomic_exchange_1;
  _Bool return_value____cds_wfs_end_2;
  return_value____cds_wfs_end_2=___cds_wfs_end((void *)head);
  if(!(return_value____cds_wfs_end_2 == (_Bool)0))
    return (struct cds_wfs_head *)(void *)0;

  else
    return head;
}

// ___cds_wfs_pop_all_link1
// file urcu/static/wfstack.h line 284
static inline struct cds_wfs_head * ___cds_wfs_pop_all_link1(union anonymous_1 u_stack_link1)
{
  struct __cds_wfs_stack *s_link1 = u_stack_link1._s;
  struct cds_wfs_head *head_link1;
  unsigned long int return_value___uatomic_exchange_1_link1;
  return_value___uatomic_exchange_1_link1=__uatomic_exchange_link2((void *)&s_link1->head, (unsigned long int)(void *)0x1UL, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
  head_link1 = (struct cds_wfs_head *)return_value___uatomic_exchange_1_link1;
  _Bool return_value____cds_wfs_end_2_link1;
  return_value____cds_wfs_end_2_link1=___cds_wfs_end_link1((void *)head_link1);
  if(!(return_value____cds_wfs_end_2_link1 == (_Bool)0))
    return (struct cds_wfs_head *)(void *)0;

  else
    return head_link1;
}

// ___cds_wfs_pop_blocking
// file urcu/static/wfstack.h line 232
static inline struct cds_wfs_node * ___cds_wfs_pop_blocking(union anonymous_1 u_stack)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_with_state_blocking_1;
  return_value____cds_wfs_pop_with_state_blocking_1=___cds_wfs_pop_with_state_blocking(u_stack, (signed int *)(void *)0);
  return return_value____cds_wfs_pop_with_state_blocking_1;
}

// ___cds_wfs_pop_nonblocking
// file urcu/static/wfstack.h line 260
static inline struct cds_wfs_node * ___cds_wfs_pop_nonblocking(union anonymous_1 u_stack)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_with_state_nonblocking_1;
  return_value____cds_wfs_pop_with_state_nonblocking_1=___cds_wfs_pop_with_state_nonblocking(u_stack, (signed int *)(void *)0);
  return return_value____cds_wfs_pop_with_state_nonblocking_1;
}

// ___cds_wfs_pop_with_state_blocking
// file urcu/static/wfstack.h line 225
static inline struct cds_wfs_node * ___cds_wfs_pop_with_state_blocking(union anonymous_1 u_stack, signed int *state)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_1;
  return_value____cds_wfs_pop_1=___cds_wfs_pop(u_stack, state, 1);
  return return_value____cds_wfs_pop_1;
}

// ___cds_wfs_pop_with_state_nonblocking
// file urcu/static/wfstack.h line 247
static inline struct cds_wfs_node * ___cds_wfs_pop_with_state_nonblocking(union anonymous_1 u_stack, signed int *state)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_1;
  return_value____cds_wfs_pop_1=___cds_wfs_pop(u_stack, state, 0);
  return return_value____cds_wfs_pop_1;
}

// __cds_list_del
// file ./urcu/list.h line 71
static inline void __cds_list_del(struct cds_list_head *prev, struct cds_list_head *next)
{
  next->prev = prev;
  prev->next = next;
}

// __cds_wfcq_dequeue_blocking
// file wfcqueue.c line 100
extern struct cds_wfcq_node * __cds_wfcq_dequeue_blocking(union anonymous head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_blocking_1;
  return_value____cds_wfcq_dequeue_blocking_1=___cds_wfcq_dequeue_blocking(head, tail);
  return return_value____cds_wfcq_dequeue_blocking_1;
}

// __cds_wfcq_dequeue_nonblocking
// file wfcqueue.c line 115
extern struct cds_wfcq_node * __cds_wfcq_dequeue_nonblocking(union anonymous head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_nonblocking_1;
  return_value____cds_wfcq_dequeue_nonblocking_1=___cds_wfcq_dequeue_nonblocking(head, tail);
  return return_value____cds_wfcq_dequeue_nonblocking_1;
}

// __cds_wfcq_dequeue_with_state_blocking
// file wfcqueue.c line 107
extern struct cds_wfcq_node * __cds_wfcq_dequeue_with_state_blocking(union anonymous head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_blocking_1;
  return_value____cds_wfcq_dequeue_with_state_blocking_1=___cds_wfcq_dequeue_with_state_blocking(head, tail, state);
  return return_value____cds_wfcq_dequeue_with_state_blocking_1;
}

// __cds_wfcq_dequeue_with_state_nonblocking
// file wfcqueue.c line 122
extern struct cds_wfcq_node * __cds_wfcq_dequeue_with_state_nonblocking(union anonymous head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_nonblocking_1;
  return_value____cds_wfcq_dequeue_with_state_nonblocking_1=___cds_wfcq_dequeue_with_state_nonblocking(head, tail, state);
  return return_value____cds_wfcq_dequeue_with_state_nonblocking_1;
}

// __cds_wfcq_first_blocking
// file wfcqueue.c line 150
extern struct cds_wfcq_node * __cds_wfcq_first_blocking(union anonymous head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first_blocking_1;
  return_value____cds_wfcq_first_blocking_1=___cds_wfcq_first_blocking_link1(head, tail);
  return return_value____cds_wfcq_first_blocking_1;
}

// __cds_wfcq_first_nonblocking
// file wfcqueue.c line 157
extern struct cds_wfcq_node * __cds_wfcq_first_nonblocking(union anonymous head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first_nonblocking_1;
  return_value____cds_wfcq_first_nonblocking_1=___cds_wfcq_first_nonblocking(head, tail);
  return return_value____cds_wfcq_first_nonblocking_1;
}

// __cds_wfcq_init
// file wfcqueue.c line 43
extern void __cds_wfcq_init(struct __cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  ___cds_wfcq_init(head, tail);
}

// __cds_wfcq_next_blocking
// file wfcqueue.c line 164
extern struct cds_wfcq_node * __cds_wfcq_next_blocking(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next_blocking_1;
  return_value____cds_wfcq_next_blocking_1=___cds_wfcq_next_blocking_link1(head, tail, node);
  return return_value____cds_wfcq_next_blocking_1;
}

// __cds_wfcq_next_nonblocking
// file wfcqueue.c line 172
extern struct cds_wfcq_node * __cds_wfcq_next_nonblocking(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next_nonblocking_1;
  return_value____cds_wfcq_next_nonblocking_1=___cds_wfcq_next_nonblocking(head, tail, node);
  return return_value____cds_wfcq_next_nonblocking_1;
}

// __cds_wfcq_splice_blocking
// file wfcqueue.c line 130
extern enum cds_wfcq_ret __cds_wfcq_splice_blocking(union anonymous dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice_blocking_1;
  return_value____cds_wfcq_splice_blocking_1=___cds_wfcq_splice_blocking_link1(dest_q_head, dest_q_tail, src_q_head, src_q_tail);
  return return_value____cds_wfcq_splice_blocking_1;
}

// __cds_wfcq_splice_nonblocking
// file wfcqueue.c line 140
extern enum cds_wfcq_ret __cds_wfcq_splice_nonblocking(union anonymous dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice_nonblocking_1;
  return_value____cds_wfcq_splice_nonblocking_1=___cds_wfcq_splice_nonblocking(dest_q_head, dest_q_tail, src_q_head, src_q_tail);
  return return_value____cds_wfcq_splice_nonblocking_1;
}

// __cds_wfq_dequeue_blocking
// file wfqueue.c line 49
extern struct cds_wfq_node * __cds_wfq_dequeue_blocking(struct cds_wfq_queue *q)
{
  struct cds_wfq_node *return_value____cds_wfq_dequeue_blocking_1;
  return_value____cds_wfq_dequeue_blocking_1=___cds_wfq_dequeue_blocking(q);
  return return_value____cds_wfq_dequeue_blocking_1;
}

// __cds_wfs_init
// file wfstack.c line 41
extern void __cds_wfs_init(struct __cds_wfs_stack *s)
{
  ___cds_wfs_init(s);
}

// __cds_wfs_pop_all
// file wfstack.c line 121
extern struct cds_wfs_head * __cds_wfs_pop_all(union anonymous_1 u_stack)
{
  struct cds_wfs_head *return_value____cds_wfs_pop_all_1;
  return_value____cds_wfs_pop_all_1=___cds_wfs_pop_all_link1(u_stack);
  return return_value____cds_wfs_pop_all_1;
}

// __cds_wfs_pop_blocking
// file wfstack.c line 97
extern struct cds_wfs_node * __cds_wfs_pop_blocking(union anonymous_1 u_stack)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_blocking_1;
  return_value____cds_wfs_pop_blocking_1=___cds_wfs_pop_blocking(u_stack);
  return return_value____cds_wfs_pop_blocking_1;
}

// __cds_wfs_pop_nonblocking
// file wfstack.c line 109
extern struct cds_wfs_node * __cds_wfs_pop_nonblocking(union anonymous_1 u_stack)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_nonblocking_1;
  return_value____cds_wfs_pop_nonblocking_1=___cds_wfs_pop_nonblocking(u_stack);
  return return_value____cds_wfs_pop_nonblocking_1;
}

// __cds_wfs_pop_with_state_blocking
// file wfstack.c line 103
extern struct cds_wfs_node * __cds_wfs_pop_with_state_blocking(union anonymous_1 u_stack, signed int *state)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_with_state_blocking_1;
  return_value____cds_wfs_pop_with_state_blocking_1=___cds_wfs_pop_with_state_blocking(u_stack, state);
  return return_value____cds_wfs_pop_with_state_blocking_1;
}

// __cds_wfs_pop_with_state_nonblocking
// file wfstack.c line 115
extern struct cds_wfs_node * __cds_wfs_pop_with_state_nonblocking(union anonymous_1 u_stack, signed int *state)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_with_state_nonblocking_1;
  return_value____cds_wfs_pop_with_state_nonblocking_1=___cds_wfs_pop_with_state_nonblocking(u_stack, state);
  return return_value____cds_wfs_pop_with_state_nonblocking_1;
}

// __create_call_rcu_data
// file urcu-call-rcu-impl.h line 481
static struct call_rcu_data * __create_call_rcu_data(unsigned long int flags, signed int cpu_affinity)
{
  struct call_rcu_data *crdp;
  call_rcu_data_init(&crdp, flags, cpu_affinity);
  return crdp;
}

// __smp_thread_id
// file ../../tests/common/api.h line 136
static signed int __smp_thread_id(void)
{
  signed int i;
  unsigned long int tid;
  tid=pthread_self();
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    if(__thread_id_map[(signed long int)i] == tid)
    {
      signed long int v = (signed long int)(i + 1);
      signed int return_value_pthread_setspecific_1;
      return_value_pthread_setspecific_1=pthread_setspecific(thread_id_key, (void *)v);
      if(!(return_value_pthread_setspecific_1 == 0))
      {
        perror("pthread_setspecific");
        exit(-1);
      }

      return i;
    }

  spin_lock(&__thread_id_map_mutex);
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    if(__thread_id_map[(signed long int)i] == tid)
    {
      spin_unlock(&__thread_id_map_mutex);
      return i;
    }

  spin_unlock(&__thread_id_map_mutex);
  fprintf(stderr, "smp_thread_id: Rogue thread, id: %lu(%#lx)\n", (unsigned long int)tid, (unsigned long int)tid);
  exit(-1);
}

// __uatomic_add
// file ./urcu/uatomic.h line 357
static inline void __uatomic_add(void *addr, unsigned long int val, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; addb %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "iq"((unsigned char)val) : "memory");
      break;
    }
    case 2:
    {
      asm("lock; addw %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned short int)val) : "memory");
      break;
    }
    case 4:
    {
      asm("lock; addl %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned int)val) : "memory");
      break;
    }
    case 8:
    {
      asm("lock; addq %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "er"((unsigned long int)val) : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// __uatomic_add_return
// file ./urcu/uatomic.h line 178
static inline unsigned long int __uatomic_add_return(void *addr, unsigned long int val, signed int len)
{
  unsigned char result;
  unsigned short int __uatomic_add_return__1__1__2__result;
  unsigned int __uatomic_add_return__1__1__3__result;
  unsigned long int __uatomic_add_return__1__1__4__result;
  switch(len)
  {
    case 1:
    {
      result = (unsigned char)val;
      asm("lock; xaddb %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+q"(result) :  : "memory");
      return (unsigned long int)((signed int)result + (signed int)(unsigned char)val);
    }
    case 2:
    {
      __uatomic_add_return__1__1__2__result = (unsigned short int)val;
      asm("lock; xaddw %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+r"(__uatomic_add_return__1__1__2__result) :  : "memory");
      return (unsigned long int)((signed int)__uatomic_add_return__1__1__2__result + (signed int)(unsigned short int)val);
    }
    case 4:
    {
      __uatomic_add_return__1__1__3__result = (unsigned int)val;
      asm("lock; xaddl %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+r"(__uatomic_add_return__1__1__3__result) :  : "memory");
      return (unsigned long int)(__uatomic_add_return__1__1__3__result + (unsigned int)val);
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

// __uatomic_and
// file ./urcu/uatomic.h line 245
static inline void __uatomic_and(void *addr, unsigned long int val, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; andb %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "iq"((unsigned char)val) : "memory");
      break;
    }
    case 2:
    {
      asm("lock; andw %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned short int)val) : "memory");
      break;
    }
    case 4:
    {
      asm("lock; andl %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned int)val) : "memory");
      break;
    }
    case 8:
    {
      asm("lock; andq %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "er"((unsigned long int)val) : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// __uatomic_cmpxchg
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg(void *addr, unsigned long int old, unsigned long int _new, signed int len)
{
  unsigned char __uatomic_cmpxchg__1__1__1__result;
  unsigned short int result;
  unsigned int __uatomic_cmpxchg__1__1__3__result;
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
      result = (unsigned short int)old;
      asm("lock; cmpxchgw %2, %1" : "+a"(result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned short int)_new) : "memory");
      return (unsigned long int)result;
    }
    case 4:
    {
      __uatomic_cmpxchg__1__1__3__result = (unsigned int)old;
      asm("lock; cmpxchgl %2, %1" : "+a"(__uatomic_cmpxchg__1__1__3__result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned int)_new) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__3__result;
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
  unsigned char __uatomic_cmpxchg__1__1__1__result_link1;
  unsigned short int result_link1;
  unsigned int __uatomic_cmpxchg__1__1__3__result_link1;
  unsigned long int __uatomic_cmpxchg__1__1__4__result_link1;
  switch(len_link1)
  {
    case 1:
    {
      __uatomic_cmpxchg__1__1__1__result_link1 = (unsigned char)old_link1;
      asm("lock; cmpxchgb %2, %1" : "+a"(__uatomic_cmpxchg__1__1__1__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "q"((unsigned char)_new_link1) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__1__result_link1;
    }
    case 2:
    {
      result_link1 = (unsigned short int)old_link1;
      asm("lock; cmpxchgw %2, %1" : "+a"(result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "r"((unsigned short int)_new_link1) : "memory");
      return (unsigned long int)result_link1;
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
  unsigned int __uatomic_cmpxchg__1__1__3__result_link2;
  unsigned long int result_link2;
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
      __uatomic_cmpxchg__1__1__3__result_link2 = (unsigned int)old_link2;
      asm("lock; cmpxchgl %2, %1" : "+a"(__uatomic_cmpxchg__1__1__3__result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "r"((unsigned int)_new_link2) : "memory");
      return (unsigned long int)__uatomic_cmpxchg__1__1__3__result_link2;
    }
    case 8:
    {
      result_link2 = old_link2;
      asm("lock; cmpxchgq %2, %1" : "+a"(result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "r"((unsigned long int)_new_link2) : "memory");
      return result_link2;
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
  unsigned short int __uatomic_exchange__1__1__2__result;
  unsigned int __uatomic_exchange__1__1__3__result;
  unsigned long int result;
  switch(len)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange__1__1__1__result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned char)val) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__1__result;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(__uatomic_exchange__1__1__2__result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned short int)val) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__2__result;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange__1__1__3__result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned int)val) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__3__result;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned long int)val) : "memory");
      return result;
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
  unsigned short int __uatomic_exchange__1__1__2__result_link1;
  unsigned int __uatomic_exchange__1__1__3__result_link1;
  unsigned long int result_link1;
  switch(len_link1)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange__1__1__1__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "0"((unsigned char)val_link1) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__1__result_link1;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(__uatomic_exchange__1__1__2__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "0"((unsigned short int)val_link1) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__2__result_link1;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange__1__1__3__result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "0"((unsigned int)val_link1) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__3__result_link1;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(result_link1), "+m"(*((struct __uatomic_dummy *)addr_link1)) : "0"((unsigned long int)val_link1) : "memory");
      return result_link1;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_exchange_link1_link1
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link1_link1(void *addr_link1_link1, unsigned long int val_link1_link1, signed int len_link1_link1)
{
  unsigned char __uatomic_exchange__1__1__1__result_link1_link1;
  unsigned short int __uatomic_exchange__1__1__2__result_link1_link1;
  unsigned int __uatomic_exchange__1__1__3__result_link1_link1;
  unsigned long int result_link1_link1;
  switch(len_link1_link1)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange__1__1__1__result_link1_link1), "+m"(*((struct __uatomic_dummy *)addr_link1_link1)) : "0"((unsigned char)val_link1_link1) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__1__result_link1_link1;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(__uatomic_exchange__1__1__2__result_link1_link1), "+m"(*((struct __uatomic_dummy *)addr_link1_link1)) : "0"((unsigned short int)val_link1_link1) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__2__result_link1_link1;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange__1__1__3__result_link1_link1), "+m"(*((struct __uatomic_dummy *)addr_link1_link1)) : "0"((unsigned int)val_link1_link1) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__3__result_link1_link1;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(result_link1_link1), "+m"(*((struct __uatomic_dummy *)addr_link1_link1)) : "0"((unsigned long int)val_link1_link1) : "memory");
      return result_link1_link1;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_exchange_link2
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link2(void *addr_link2, unsigned long int val_link2, signed int len_link2)
{
  unsigned char __uatomic_exchange__1__1__1__result_link2;
  unsigned short int __uatomic_exchange__1__1__2__result_link2;
  unsigned int __uatomic_exchange__1__1__3__result_link2;
  unsigned long int result_link2;
  switch(len_link2)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange__1__1__1__result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "0"((unsigned char)val_link2) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__1__result_link2;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(__uatomic_exchange__1__1__2__result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "0"((unsigned short int)val_link2) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__2__result_link2;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange__1__1__3__result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "0"((unsigned int)val_link2) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__3__result_link2;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(result_link2), "+m"(*((struct __uatomic_dummy *)addr_link2)) : "0"((unsigned long int)val_link2) : "memory");
      return result_link2;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_exchange_link3
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange_link3(void *addr_link3, unsigned long int val_link3, signed int len_link3)
{
  unsigned char result_link3;
  unsigned short int __uatomic_exchange__1__1__2__result_link3;
  unsigned int __uatomic_exchange__1__1__3__result_link3;
  unsigned long int __uatomic_exchange__1__1__4__result_link3;
  switch(len_link3)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(result_link3), "+m"(*((struct __uatomic_dummy *)addr_link3)) : "0"((unsigned char)val_link3) : "memory");
      return (unsigned long int)result_link3;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(__uatomic_exchange__1__1__2__result_link3), "+m"(*((struct __uatomic_dummy *)addr_link3)) : "0"((unsigned short int)val_link3) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__2__result_link3;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange__1__1__3__result_link3), "+m"(*((struct __uatomic_dummy *)addr_link3)) : "0"((unsigned int)val_link3) : "memory");
      return (unsigned long int)__uatomic_exchange__1__1__3__result_link3;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(__uatomic_exchange__1__1__4__result_link3), "+m"(*((struct __uatomic_dummy *)addr_link3)) : "0"((unsigned long int)val_link3) : "memory");
      return __uatomic_exchange__1__1__4__result_link3;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_inc
// file ../../urcu/uatomic.h line 414
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

// __uatomic_inc_link1
// file ./urcu/uatomic.h line 414
static inline void __uatomic_inc_link1(void *addr_link1, signed int len_link1)
{
  switch(len_link1)
  {
    case 1:
    {
      asm("lock; incb %0" : "=m"(*((struct __uatomic_dummy *)addr_link1)) :  : "memory");
      break;
    }
    case 2:
    {
      asm("lock; incw %0" : "=m"(*((struct __uatomic_dummy *)addr_link1)) :  : "memory");
      break;
    }
    case 4:
    {
      asm("lock; incl %0" : "=m"(*((struct __uatomic_dummy *)addr_link1)) :  : "memory");
      break;
    }
    case 8:
    {
      asm("lock; incq %0" : "=m"(*((struct __uatomic_dummy *)addr_link1)) :  : "memory");
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

// _call_rcu
// file urcu-call-rcu-impl.h line 680
static void _call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *), struct call_rcu_data *crdp)
{
  _cds_wfcq_node_init(&head->next);
  head->func = func;
  _cds_wfcq_enqueue(&crdp->cbs_head, &crdp->cbs_tail, &head->next);
  __uatomic_inc_link1((void *)&crdp->qlen, (signed int)sizeof(unsigned long int) /*8ul*/ );
  wake_call_rcu_thread(crdp);
}

// _cds_wfcq_dequeue_blocking
// file urcu/static/wfcqueue.h line 613
static inline struct cds_wfcq_node * _cds_wfcq_dequeue_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value__cds_wfcq_dequeue_with_state_blocking_1;
  return_value__cds_wfcq_dequeue_with_state_blocking_1=_cds_wfcq_dequeue_with_state_blocking(head, tail, (signed int *)(void *)0);
  return return_value__cds_wfcq_dequeue_with_state_blocking_1;
}

// _cds_wfcq_dequeue_lock
// file urcu/static/wfcqueue.h line 147
static inline void _cds_wfcq_dequeue_lock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  signed int ret;
  ret=pthread_mutex_lock(&head->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfcq_dequeue_unlock
// file urcu/static/wfcqueue.h line 156
static inline void _cds_wfcq_dequeue_unlock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  signed int ret;
  ret=pthread_mutex_unlock(&head->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfcq_dequeue_with_state_blocking
// file urcu/static/wfcqueue.h line 596
static inline struct cds_wfcq_node * _cds_wfcq_dequeue_with_state_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *retval;
  _cds_wfcq_dequeue_lock(head, tail);
  retval=___cds_wfcq_dequeue_with_state_blocking(head, tail, state);
  _cds_wfcq_dequeue_unlock(head, tail);
  return retval;
}

// _cds_wfcq_empty
// file ./urcu/static/wfcqueue.h line 132
static inline _Bool _cds_wfcq_empty(union anonymous u_head, struct cds_wfcq_tail *tail)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node * volatile tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((struct cds_wfcq_node * volatile *)&head->node.next);
  _Bool tmp_if_expr_3;
  struct cds_wfcq_node * volatile tmp_statement_expression_2;
  if(tmp_statement_expression_1 == ((struct cds_wfcq_node *)NULL))
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((struct cds_wfcq_node * volatile *)&tail->p);
    tmp_if_expr_3 = tmp_statement_expression_2 == &head->node ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  return tmp_if_expr_3;
}

// _cds_wfcq_empty_link1
// file urcu/static/wfcqueue.h line 132
static inline _Bool _cds_wfcq_empty_link1(union anonymous u_head_link1, struct cds_wfcq_tail *tail_link1)
{
  struct __cds_wfcq_head *head_link1 = u_head_link1._h;
  struct cds_wfcq_node * volatile tmp_statement_expression_1_link1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1_link1 = *((struct cds_wfcq_node * volatile *)&head_link1->node.next);
  _Bool tmp_if_expr_3_link1;
  struct cds_wfcq_node * volatile tmp_statement_expression_2_link1;
  if(tmp_statement_expression_1_link1 == ((struct cds_wfcq_node *)NULL))
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_2_link1 = *((struct cds_wfcq_node * volatile *)&tail_link1->p);
    tmp_if_expr_3_link1 = tmp_statement_expression_2_link1 == &head_link1->node ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3_link1 = (_Bool)0;
  return tmp_if_expr_3_link1;
}

// _cds_wfcq_enqueue
// file ./urcu/static/wfcqueue.h line 206
static inline _Bool _cds_wfcq_enqueue(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_tail)
{
  _Bool return_value____cds_wfcq_append_1;
  return_value____cds_wfcq_append_1=___cds_wfcq_append(head, tail, new_tail, new_tail);
  return return_value____cds_wfcq_append_1;
}

// _cds_wfcq_enqueue_link1
// file urcu/static/wfcqueue.h line 206
static inline _Bool _cds_wfcq_enqueue_link1(union anonymous head_link1, struct cds_wfcq_tail *tail_link1, struct cds_wfcq_node *new_tail_link1)
{
  _Bool return_value____cds_wfcq_append_1_link1;
  return_value____cds_wfcq_append_1_link1=___cds_wfcq_append_link1(head_link1, tail_link1, new_tail_link1, new_tail_link1);
  return return_value____cds_wfcq_append_1_link1;
}

// _cds_wfcq_init
// file ./urcu/static/wfcqueue.h line 97
static inline void _cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  signed int ret;
  _cds_wfcq_node_init(&head->node);
  tail->p = &head->node;
  ret=pthread_mutex_init(&head->lock, (const union anonymous_8 *)(void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfcq_init_link1
// file urcu/static/wfcqueue.h line 97
static inline void _cds_wfcq_init_link1(struct cds_wfcq_head *head_link1, struct cds_wfcq_tail *tail_link1)
{
  signed int ret_link1;
  _cds_wfcq_node_init_link1(&head_link1->node);
  tail_link1->p = &head_link1->node;
  ret_link1=pthread_mutex_init(&head_link1->lock, (const union anonymous_8 *)(void *)0);
  /* assertion !ret */
  assert(!(ret_link1 != 0));
}

// _cds_wfcq_node_init
// file ./urcu/static/wfcqueue.h line 89
static inline void _cds_wfcq_node_init(struct cds_wfcq_node *node)
{
  node->next = (struct cds_wfcq_node *)(void *)0;
}

// _cds_wfcq_node_init_link1
// file urcu/static/wfcqueue.h line 89
static inline void _cds_wfcq_node_init_link1(struct cds_wfcq_node *node_link1)
{
  node_link1->next = (struct cds_wfcq_node *)(void *)0;
}

// _cds_wfcq_splice_blocking
// file urcu/static/wfcqueue.h line 632
static inline enum cds_wfcq_ret _cds_wfcq_splice_blocking(struct cds_wfcq_head *dest_q_head, struct cds_wfcq_tail *dest_q_tail, struct cds_wfcq_head *src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret ret;
  _cds_wfcq_dequeue_lock(src_q_head, src_q_tail);
  ret=___cds_wfcq_splice_blocking_link1(dest_q_head, dest_q_tail, src_q_head, src_q_tail);
  _cds_wfcq_dequeue_unlock(src_q_head, src_q_tail);
  return ret;
}

// _cds_wfq_dequeue_blocking
// file urcu/static/wfqueue.h line 148
static inline struct cds_wfq_node * _cds_wfq_dequeue_blocking(struct cds_wfq_queue *q)
{
  struct cds_wfq_node *retnode;
  signed int ret;
  ret=pthread_mutex_lock(&q->lock);
  /* assertion !ret */
  assert(!(ret != 0));
  retnode=___cds_wfq_dequeue_blocking(q);
  ret=pthread_mutex_unlock(&q->lock);
  /* assertion !ret */
  assert(!(ret != 0));
  return retnode;
}

// _cds_wfq_enqueue
// file urcu/static/wfqueue.h line 68
static inline void _cds_wfq_enqueue(struct cds_wfq_queue *q, struct cds_wfq_node *node)
{
  struct cds_wfq_node **old_tail;
  unsigned long int return_value___uatomic_exchange_1;
  return_value___uatomic_exchange_1=__uatomic_exchange_link3((void *)&q->tail, (unsigned long int)&node->next, (signed int)sizeof(struct cds_wfq_node **) /*8ul*/ );
  old_tail = (struct cds_wfq_node **)return_value___uatomic_exchange_1;
  struct cds_wfq_node *_v;
  struct cds_wfq_node * volatile tmp_statement_expression_2;
  *((struct cds_wfq_node * volatile *)&(*old_tail)) = node;
  tmp_statement_expression_2 = *((struct cds_wfq_node * volatile *)&(*old_tail));
  _v = tmp_statement_expression_2;
  asm("" :  :  : "memory");
  _v = _v;
}

// _cds_wfq_init
// file urcu/static/wfqueue.h line 56
static inline void _cds_wfq_init(struct cds_wfq_queue *q)
{
  signed int ret;
  _cds_wfq_node_init(&q->dummy);
  q->head = &q->dummy;
  q->tail = &q->dummy.next;
  ret=pthread_mutex_init(&q->lock, (const union anonymous_8 *)(void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfq_node_init
// file urcu/static/wfqueue.h line 51
static inline void _cds_wfq_node_init(struct cds_wfq_node *node)
{
  node->next = (struct cds_wfq_node *)(void *)0;
}

// _cds_wfs_empty
// file urcu/static/wfstack.h line 110
static inline _Bool _cds_wfs_empty(union anonymous_1 u_stack)
{
  struct __cds_wfs_stack *s = u_stack._s;
  struct cds_wfs_head * volatile tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((struct cds_wfs_head * volatile *)&s->head);
  _Bool return_value____cds_wfs_end_2;
  return_value____cds_wfs_end_2=___cds_wfs_end_link1((void *)tmp_statement_expression_1);
  return return_value____cds_wfs_end_2;
}

// _cds_wfs_first
// file ./urcu/static/wfstack.h line 380
static inline struct cds_wfs_node * _cds_wfs_first(struct cds_wfs_head *head)
{
  _Bool return_value____cds_wfs_end_1;
  return_value____cds_wfs_end_1=___cds_wfs_end((void *)head);
  if(!(return_value____cds_wfs_end_1 == (_Bool)0))
    return (struct cds_wfs_node *)(void *)0;

  else
    return &head->node;
}

// _cds_wfs_first_link1
// file urcu/static/wfstack.h line 380
static inline struct cds_wfs_node * _cds_wfs_first_link1(struct cds_wfs_head *head_link1)
{
  _Bool return_value____cds_wfs_end_1_link1;
  return_value____cds_wfs_end_1_link1=___cds_wfs_end_link1((void *)head_link1);
  if(!(return_value____cds_wfs_end_1_link1 == (_Bool)0))
    return (struct cds_wfs_node *)(void *)0;

  else
    return &head_link1->node;
}

// _cds_wfs_init
// file urcu/static/wfstack.h line 91
static inline void _cds_wfs_init(struct cds_wfs_stack *s)
{
  signed int ret;
  s->head = (struct cds_wfs_head *)(void *)0x1UL;
  ret=pthread_mutex_init(&s->lock, (const union anonymous_8 *)(void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfs_next_blocking
// file ./urcu/static/wfstack.h line 417
static inline struct cds_wfs_node * _cds_wfs_next_blocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value____cds_wfs_next_1;
  return_value____cds_wfs_next_1=___cds_wfs_next(node, 1);
  return return_value____cds_wfs_next_1;
}

// _cds_wfs_next_blocking_link1
// file urcu/static/wfstack.h line 417
static inline struct cds_wfs_node * _cds_wfs_next_blocking_link1(struct cds_wfs_node *node_link1)
{
  struct cds_wfs_node *return_value____cds_wfs_next_1_link1;
  return_value____cds_wfs_next_1_link1=___cds_wfs_next_link1(node_link1, 1);
  return return_value____cds_wfs_next_1_link1;
}

// _cds_wfs_next_nonblocking
// file urcu/static/wfstack.h line 430
static inline struct cds_wfs_node * _cds_wfs_next_nonblocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value____cds_wfs_next_1;
  return_value____cds_wfs_next_1=___cds_wfs_next_link1(node, 0);
  return return_value____cds_wfs_next_1;
}

// _cds_wfs_node_init
// file urcu/static/wfstack.h line 74
static inline void _cds_wfs_node_init(struct cds_wfs_node *node)
{
  node->next = (struct cds_wfs_node *)(void *)0;
}

// _cds_wfs_pop_all_blocking
// file urcu/static/wfstack.h line 357
static inline struct cds_wfs_head * _cds_wfs_pop_all_blocking(struct cds_wfs_stack *s)
{
  struct cds_wfs_head *rethead;
  _cds_wfs_pop_lock(s);
  rethead=___cds_wfs_pop_all_link1(s);
  _cds_wfs_pop_unlock(s);
  return rethead;
}

// _cds_wfs_pop_blocking
// file urcu/static/wfstack.h line 347
static inline struct cds_wfs_node * _cds_wfs_pop_blocking(struct cds_wfs_stack *s)
{
  struct cds_wfs_node *return_value__cds_wfs_pop_with_state_blocking_1;
  return_value__cds_wfs_pop_with_state_blocking_1=_cds_wfs_pop_with_state_blocking(s, (signed int *)(void *)0);
  return return_value__cds_wfs_pop_with_state_blocking_1;
}

// _cds_wfs_pop_lock
// file urcu/static/wfstack.h line 308
static inline void _cds_wfs_pop_lock(struct cds_wfs_stack *s)
{
  signed int ret;
  ret=pthread_mutex_lock(&s->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfs_pop_unlock
// file urcu/static/wfstack.h line 319
static inline void _cds_wfs_pop_unlock(struct cds_wfs_stack *s)
{
  signed int ret;
  ret=pthread_mutex_unlock(&s->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfs_pop_with_state_blocking
// file urcu/static/wfstack.h line 332
static inline struct cds_wfs_node * _cds_wfs_pop_with_state_blocking(struct cds_wfs_stack *s, signed int *state)
{
  struct cds_wfs_node *retnode;
  _cds_wfs_pop_lock(s);
  retnode=___cds_wfs_pop_with_state_blocking(s, state);
  _cds_wfs_pop_unlock(s);
  return retnode;
}

// _cds_wfs_push
// file ./urcu/static/wfstack.h line 127
static inline signed int _cds_wfs_push(union anonymous_1 u_stack, struct cds_wfs_node *node)
{
  struct __cds_wfs_stack *s = u_stack._s;
  struct cds_wfs_head *old_head;
  struct cds_wfs_head *new_head;
  /* assertion node->next == ((void *)0) */
  assert(node->next == (struct cds_wfs_node *)(void *)0);
  struct cds_wfs_head *tmp_statement_expression_1;
  const struct cds_wfs_node *__ptr = node;
  tmp_statement_expression_1 = (struct cds_wfs_head *)((char *)__ptr - (signed long int)0ul);
  new_head = tmp_statement_expression_1;
  unsigned long int return_value___uatomic_exchange_2;
  return_value___uatomic_exchange_2=__uatomic_exchange((void *)&s->head, (unsigned long int)new_head, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
  old_head = (struct cds_wfs_head *)return_value___uatomic_exchange_2;
  struct cds_wfs_node *_v;
  struct cds_wfs_node * volatile tmp_statement_expression_3;
  *((struct cds_wfs_node * volatile *)&node->next) = &old_head->node;
  tmp_statement_expression_3 = *((struct cds_wfs_node * volatile *)&node->next);
  _v = tmp_statement_expression_3;
  asm("" :  :  : "memory");
  _v = _v;
  _Bool return_value____cds_wfs_end_4;
  return_value____cds_wfs_end_4=___cds_wfs_end((void *)old_head);
  return (signed int)!(return_value____cds_wfs_end_4 != (_Bool)0);
}

// _cds_wfs_push_link1
// file urcu/static/wfstack.h line 127
static inline signed int _cds_wfs_push_link1(union anonymous_1 u_stack_link1, struct cds_wfs_node *node_link1)
{
  struct __cds_wfs_stack *s_link1 = u_stack_link1._s;
  struct cds_wfs_head *old_head_link1;
  struct cds_wfs_head *new_head_link1;
  /* assertion node->next == ((void *)0) */
  assert(node_link1->next == (struct cds_wfs_node *)(void *)0);
  struct cds_wfs_head *tmp_statement_expression_1_link1;
  const struct cds_wfs_node *__ptr_link1 = node_link1;
  tmp_statement_expression_1_link1 = (struct cds_wfs_head *)((char *)__ptr_link1 - (signed long int)0ul);
  new_head_link1 = tmp_statement_expression_1_link1;
  unsigned long int return_value___uatomic_exchange_2_link1;
  return_value___uatomic_exchange_2_link1=__uatomic_exchange_link2((void *)&s_link1->head, (unsigned long int)new_head_link1, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
  old_head_link1 = (struct cds_wfs_head *)return_value___uatomic_exchange_2_link1;
  struct cds_wfs_node *_v_link1;
  struct cds_wfs_node * volatile tmp_statement_expression_3_link1;
  *((struct cds_wfs_node * volatile *)&node_link1->next) = &old_head_link1->node;
  tmp_statement_expression_3_link1 = *((struct cds_wfs_node * volatile *)&node_link1->next);
  _v_link1 = tmp_statement_expression_3_link1;
  asm("" :  :  : "memory");
  _v_link1 = _v_link1;
  _Bool return_value____cds_wfs_end_4_link1;
  return_value____cds_wfs_end_4_link1=___cds_wfs_end_link1((void *)old_head_link1);
  return (signed int)!(return_value____cds_wfs_end_4_link1 != (_Bool)0);
}

// _cleanup
// file tap.c line 414
static void _cleanup(void)
{
  if(tap_is_disabled == 0)
  {
    if(have_plan == 0 && no_plan == 0 && skip_all == 0)
      diag("Looks like your test died before it could output anything.");

    else
      if(!(test_died == 0))
        diag("Looks like your test died just after %d.", test_count);

      else
      {
        if(skip_all == 0 && (have_plan == 0 || !(no_plan == 0)))
          printf("1..%d\n", test_count);

        if(no_plan == 0 && !(have_plan == 0) && !(e_tests >= test_count))
          diag("Looks like you planned %d %s but ran %d extra.", e_tests, e_tests == (unsigned int)1 ? "test" : "tests", test_count - e_tests);

        else
          if(!(test_count >= e_tests) && (no_plan == 0 || !(have_plan == 0)))
            diag("Looks like you planned %d %s but only ran %d.", e_tests, e_tests == (unsigned int)1 ? "test" : "tests", test_count);

          else
            if(!(failures == 0u))
              diag("Looks like you failed %d %s of %d.", failures, failures == (unsigned int)1 ? "test" : "tests", test_count);

      }
  }

}

// _defer_rcu
// file urcu-defer-impl.h line 311
static void _defer_rcu(void (*fct)(void *), void *p)
{
  unsigned long int head;
  unsigned long int tail;
  head = defer_queue.head;
  volatile unsigned long int tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((volatile unsigned long int *)&defer_queue.tail);
  tail = tmp_statement_expression_1;
  volatile unsigned long int tmp_statement_expression_2;
  if(head + -tail >= 4094ul)
  {
    /* assertion head - tail <= (1 << 12) */
    assert(head - tail <= (unsigned long int)(1 << 12));
    rcu_defer_barrier_thread_memb();
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((volatile unsigned long int *)&defer_queue.tail);
    /* assertion head - __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__((defer_queue).tail) *)&((defer_queue).tail)); }) == 0 */
    assert(head - tmp_statement_expression_2 == (unsigned long int)0);
  }

  unsigned long int tmp_post_3;
  unsigned long int tmp_post_4;
  unsigned long int tmp_post_5;
  if(p == (void *)-2 || !((1ul & (unsigned long int)p) == 0ul) || !((void (*)(void *))defer_queue.last_fct_in == fct))
  {
    defer_queue.last_fct_in = (void *)fct;
    if(fct == (void (*)(void *))-2 || !((1ul & (unsigned long int)fct) == 0ul))
    {
      tmp_post_3 = head;
      head = head + 1ul;
      *((void * volatile *)&defer_queue.q[(signed long int)(tmp_post_3 & (unsigned long int)((1 << 12) - 1))]) = (void *)~(1 << 0);
      tmp_post_4 = head;
      head = head + 1ul;
      *((void * volatile *)&defer_queue.q[(signed long int)(tmp_post_4 & (unsigned long int)((1 << 12) - 1))]) = (void *)fct;
    }

    else
    {
      fct = (void (*)(void *))(void *)((unsigned long int)fct | (unsigned long int)(1 << 0));
      tmp_post_5 = head;
      head = head + 1ul;
      *((void * volatile *)&defer_queue.q[(signed long int)(tmp_post_5 & (unsigned long int)((1 << 12) - 1))]) = (void *)fct;
    }
  }

  unsigned long int tmp_post_6 = head;
  head = head + 1ul;
  *((void * volatile *)&defer_queue.q[(signed long int)(tmp_post_6 & (unsigned long int)((1 << 12) - 1))]) = p;
  asm("" :  :  : "memory");
  unsigned long int _v;
  volatile unsigned long int tmp_statement_expression_7;
  *((volatile unsigned long int *)&defer_queue.head) = head;
  tmp_statement_expression_7 = *((volatile unsigned long int *)&defer_queue.head);
  _v = tmp_statement_expression_7;
  asm("" :  :  : "memory");
  _v = _v;
  asm("mfence" :  :  : "memory");
  wake_up_defer();
}

// _expected_tests
// file tap.c line 315
static void _expected_tests(unsigned int tests)
{
  printf("1..%d\n", tests);
  e_tests = tests;
}

// _gen_result
// file ../../tests/utils/tap.h line 76
unsigned int _gen_result(signed int ok, const char *func, char *file, unsigned int line, char *test_name, ...)
{
  void **ap;
  char *local_test_name = (char *)(void *)0;
  char *c;
  signed int name_is_digits;
  test_count = test_count + 1u;
  const unsigned short int **return_value___ctype_b_loc_2;
  if(!(test_name == ((char *)NULL)))
  {
    ap = (void **)&test_name;
    signed int return_value_vasprintf_1;
    return_value_vasprintf_1=vasprintf(&local_test_name, test_name, ap);
    if(return_value_vasprintf_1 == -1)
      local_test_name = (char *)(void *)0;

    ap = ((void **)NULL);
    if(!(local_test_name == ((char *)NULL)))
    {
      name_is_digits = 1;
      c = local_test_name;
      for( ; !((signed int)*c == 0); c = c + 1l)
      {
        const unsigned short int **return_value___ctype_b_loc_3;
        return_value___ctype_b_loc_3=__ctype_b_loc();
        if((2048 & (signed int)(*return_value___ctype_b_loc_3)[(signed long int)(signed int)*c]) == 0)
        {
          return_value___ctype_b_loc_2=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*c]) == 0)
          {
            name_is_digits = 0;
            break;
          }

        }

      }
      if(!(name_is_digits == 0))
      {
        diag("    You named your test '%s'.  You shouldn't use numbers for your test names.", local_test_name);
        diag("    Very confusing.");
      }

    }

  }

  if(ok == 0)
  {
    printf("not ");
    failures = failures + 1u;
  }

  printf("ok %d", test_count);
  if(!(test_name == ((char *)NULL)))
  {
    printf(" - ");
    if(!(local_test_name == ((char *)NULL)))
    {
      flockfile(stdout);
      c = local_test_name;
      for( ; !((signed int)*c == 0); c = c + 1l)
      {
        if((signed int)*c == 35)
          fputc(92, stdout);

        fputc((signed int)*c, stdout);
      }
      funlockfile(stdout);
    }

    else
      printf("%s", todo_msg_fixed);
  }

  if(!(todo == 0))
  {
    printf(" # TODO %s", todo_msg != ((char *)NULL) ? todo_msg : todo_msg_fixed);
    if(ok == 0)
      failures = failures - 1u;

  }

  printf("\n");
  if(ok == 0)
  {
    char *return_value_getenv_4;
    return_value_getenv_4=getenv("HARNESS_ACTIVE");
    if(!(return_value_getenv_4 == ((char *)NULL)))
      fputs("\n", stderr);

    diag("    Failed %stest (%s:%s() at line %d)", todo != 0 ? "(TODO) " : "", file, func, line);
  }

  free((void *)local_test_name);
  return (unsigned int)(ok != 0 ? 1 : 0);
}

// _rcu_barrier_complete
// file urcu-call-rcu-impl.h line 822
static void _rcu_barrier_complete(struct rcu_head *head)
{
  struct call_rcu_completion_work *work;
  struct call_rcu_completion *completion;
  struct call_rcu_completion_work *tmp_statement_expression_1;
  const struct rcu_head *__ptr = head;
  tmp_statement_expression_1 = (struct call_rcu_completion_work *)((char *)__ptr - (signed long int)0ul);
  work = tmp_statement_expression_1;
  completion = work->completion;
  unsigned long int return_value___uatomic_add_return_2;
  return_value___uatomic_add_return_2=__uatomic_add_return((void *)&completion->barrier_count, (unsigned long int)-((unsigned long int)1), (signed int)sizeof(signed int) /*4ul*/ );
  if((signed int)return_value___uatomic_add_return_2 == 0)
    call_rcu_completion_wake_up(completion);

  urcu_ref_put(&completion->ref, free_completion);
  free((void *)work);
}

// _rcu_defer_barrier_thread
// file urcu-defer-impl.h line 249
static void _rcu_defer_barrier_thread(void)
{
  unsigned long int head;
  unsigned long int num_items;
  head = defer_queue.head;
  num_items = head - defer_queue.tail;
  if(!(num_items == 0ul))
  {
    synchronize_rcu_memb();
    rcu_defer_barrier_queue(&defer_queue, head);
  }

}

// _rcu_read_lock_memb
// file ../../urcu/static/urcu.h line 214
static inline void _rcu_read_lock_memb(void)
{
  unsigned long int tmp;
  asm("" :  :  : "memory");
  tmp = rcu_reader_memb.ctr;
  _rcu_read_lock_update(tmp);
}

// _rcu_read_lock_memb_link1
// file urcu/static/urcu.h line 214
static inline void _rcu_read_lock_memb_link1(void)
{
  unsigned long int tmp_link1;
  asm("" :  :  : "memory");
  tmp_link1 = rcu_reader_memb.ctr;
  _rcu_read_lock_update_link1(tmp_link1);
}

// _rcu_read_lock_update
// file ../../urcu/static/urcu.h line 195
static inline void _rcu_read_lock_update(unsigned long int tmp)
{
  if((4294967295ul & tmp) == 0ul)
  {
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = *((volatile unsigned long int *)&rcu_gp_memb.ctr);
    smp_mb_slave();
  }

  else
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp + (1UL << 0);
}

// _rcu_read_lock_update_link1
// file urcu/static/urcu.h line 195
static inline void _rcu_read_lock_update_link1(unsigned long int tmp_link1)
{
  if((4294967295ul & tmp_link1) == 0ul)
  {
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = *((volatile unsigned long int *)&rcu_gp_memb.ctr);
    smp_mb_slave_link1();
  }

  else
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp_link1 + (1UL << 0);
}

// _rcu_read_ongoing_memb
// file urcu/static/urcu.h line 267
static inline signed int _rcu_read_ongoing_memb(void)
{
  return (signed int)(rcu_reader_memb.ctr & (1UL << (sizeof(unsigned long int) /*8ul*/  << 2)) - (unsigned long int)1);
}

// _rcu_read_unlock_memb
// file ../../urcu/static/urcu.h line 249
static inline void _rcu_read_unlock_memb(void)
{
  unsigned long int tmp = rcu_reader_memb.ctr;
  _rcu_read_unlock_update_and_wakeup(tmp);
  asm("" :  :  : "memory");
}

// _rcu_read_unlock_memb_link1
// file urcu/static/urcu.h line 249
static inline void _rcu_read_unlock_memb_link1(void)
{
  unsigned long int tmp_link1 = rcu_reader_memb.ctr;
  _rcu_read_unlock_update_and_wakeup_link1(tmp_link1);
  asm("" :  :  : "memory");
}

// _rcu_read_unlock_update_and_wakeup
// file ../../urcu/static/urcu.h line 233
static inline void _rcu_read_unlock_update_and_wakeup(unsigned long int tmp)
{
  if((4294967295ul & tmp) == 1UL)
  {
    smp_mb_slave();
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp - (1UL << 0);
    smp_mb_slave();
    wake_up_gp();
  }

  else
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp - (1UL << 0);
}

// _rcu_read_unlock_update_and_wakeup_link1
// file urcu/static/urcu.h line 233
static inline void _rcu_read_unlock_update_and_wakeup_link1(unsigned long int tmp_link1)
{
  if((4294967295ul & tmp_link1) == 1UL)
  {
    smp_mb_slave_link1();
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp_link1 - (1UL << 0);
    smp_mb_slave_link1();
    wake_up_gp_link1();
  }

  else
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp_link1 - (1UL << 0);
}

// _tap_init
// file tap.c line 172
static void _tap_init(void)
{
  static signed int run_once = 0;
  if(run_once == 0)
  {
    atexit(_cleanup);
    setbuf(stdout, ((char *)NULL));
    run_once = 1;
  }

}

// alloc_cpu_call_rcu_data
// file urcu-call-rcu-impl.h line 130
static void alloc_cpu_call_rcu_data(void)
{
  struct call_rcu_data **p;
  struct call_rcu_data ** volatile tmp_statement_expression_2;
  if(maxcpus == 0l)
  {
    maxcpus=sysconf(83);
    if(maxcpus >= 1l)
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc((unsigned long int)maxcpus * sizeof(struct call_rcu_data *) /*8ul*/ );
      p = (struct call_rcu_data **)return_value_malloc_1;
      if(!(p == ((struct call_rcu_data **)NULL)))
      {
        memset((void *)p, 0, (unsigned long int)maxcpus * sizeof(struct call_rcu_data *) /*8ul*/ );
        do
        {
          struct call_rcu_data **_________pv = p;
          asm("sfence" :  :  : "memory");
          struct call_rcu_data **_v;
          *((struct call_rcu_data ** volatile *)&(*(&per_cpu_call_rcu_data))) = _________pv;
          tmp_statement_expression_2 = *((struct call_rcu_data ** volatile *)&(*(&per_cpu_call_rcu_data)));
          _v = tmp_statement_expression_2;
          asm("" :  :  : "memory");
          _v = _v;
        }
        while((_Bool)0);
      }

      else
      {
        static signed int warned = 0;
        if(warned == 0)
          fprintf(stderr, "[error] liburcu: unable to allocate per-CPU pointer array\n");

        warned = 1;
      }
    }

  }

}

// call_rcu_after_fork_child_memb
// file urcu-call-rcu-impl.h line 949
void call_rcu_after_fork_child_memb(void)
{
  struct call_rcu_data *crdp;
  struct call_rcu_data *next;
  call_rcu_unlock(&call_rcu_mutex);
  signed int return_value_cds_list_empty_1;
  return_value_cds_list_empty_1=cds_list_empty(&call_rcu_data_list);
  struct call_rcu_data ** volatile tmp_statement_expression_2;
  volatile unsigned long int tmp_statement_expression_3;
  if(return_value_cds_list_empty_1 == 0)
  {
    default_call_rcu_data = (struct call_rcu_data *)(void *)0;
    get_default_call_rcu_data_memb();
    maxcpus_reset();
    free((void *)per_cpu_call_rcu_data);
    do
    {
      struct call_rcu_data **_________pv = (struct call_rcu_data **)(void *)0;
      struct call_rcu_data **_v;
      *((struct call_rcu_data ** volatile *)&(*(&per_cpu_call_rcu_data))) = _________pv;
      tmp_statement_expression_2 = *((struct call_rcu_data ** volatile *)&(*(&per_cpu_call_rcu_data)));
      _v = tmp_statement_expression_2;
      asm("" :  :  : "memory");
      _v = _v;
    }
    while((_Bool)0);
    thread_call_rcu_data = (struct call_rcu_data *)(void *)0;
    crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
    next = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
    for( ; !(&crdp->list == &call_rcu_data_list); next = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    {
      if(!(crdp == default_call_rcu_data))
      {
        unsigned long int call_rcu_after_fork_child_memb__1__2__1__1___v;
        *((volatile unsigned long int *)&(*(&crdp->flags))) = (volatile unsigned long int)(1U << 3);
        tmp_statement_expression_3 = *((volatile unsigned long int *)&(*(&crdp->flags)));
        call_rcu_after_fork_child_memb__1__2__1__1___v = tmp_statement_expression_3;
        asm("" :  :  : "memory");
        call_rcu_after_fork_child_memb__1__2__1__1___v = call_rcu_after_fork_child_memb__1__2__1__1___v;
        call_rcu_data_free_memb(crdp);
      }

      crdp = next;
    }
  }

}

// call_rcu_after_fork_parent_memb
// file urcu-call-rcu-impl.h line 931
void call_rcu_after_fork_parent_memb(void)
{
  struct call_rcu_data *crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
  for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    __uatomic_and((void *)&crdp->flags, (unsigned long int)~(1U << 4), (signed int)sizeof(unsigned long int) /*8ul*/ );
  crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
  volatile unsigned long int tmp_statement_expression_1;
  for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    do
    {
      asm("" :  :  : "memory");
      tmp_statement_expression_1 = *((volatile unsigned long int *)&(*(&crdp->flags)));
      if((32ul & tmp_statement_expression_1) == 0ul)
        break;

      poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
    }
    while((_Bool)1);
  call_rcu_unlock(&call_rcu_mutex);
}

// call_rcu_before_fork_memb
// file urcu-call-rcu-impl.h line 909
void call_rcu_before_fork_memb(void)
{
  struct call_rcu_data *crdp;
  call_rcu_lock(&call_rcu_mutex);
  crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
  for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
  {
    __uatomic_or((void *)&crdp->flags, (unsigned long int)(1U << 4), (signed int)sizeof(unsigned long int) /*8ul*/ );
    asm("" :  :  : "memory");
    wake_call_rcu_thread(crdp);
  }
  crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
  volatile unsigned long int tmp_statement_expression_1;
  for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    do
    {
      asm("" :  :  : "memory");
      tmp_statement_expression_1 = *((volatile unsigned long int *)&(*(&crdp->flags)));
      if(!((32ul & tmp_statement_expression_1) == 0ul))
        break;

      poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
    }
    while((_Bool)1);
}

// call_rcu_completion_wait
// file urcu-call-rcu-impl.h line 274
static void call_rcu_completion_wait(struct call_rcu_completion *completion)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((volatile signed int *)&(*(&completion->futex)));
  signed int return_value_futex_async_2;
  if(tmp_statement_expression_1 == -1)
    do
    {
      return_value_futex_async_2=futex_async_link1(&completion->futex, 0, -1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
      if(return_value_futex_async_2 == 0)
        break;

      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      switch(*return_value___errno_location_3)
      {
        case 11:
          goto __CPROVER_DUMP_L7;
        case 4:
          break;
        default:
          do
          {
            signed int *return_value___errno_location_4;
            return_value___errno_location_4=__errno_location();
            char *return_value_strerror_5;
            return_value_strerror_5=strerror(*return_value___errno_location_4);
            fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_completion_wait", 291, return_value_strerror_5);
            abort();
          }
          while((_Bool)0);
      }
    }
    while((_Bool)1);


__CPROVER_DUMP_L7:
  ;
}

// call_rcu_completion_wake_up
// file urcu-call-rcu-impl.h line 296
static void call_rcu_completion_wake_up(struct call_rcu_completion *completion)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_5;
  asm("" :  :  : "memory");
  tmp_statement_expression_5 = *((volatile signed int *)&(*(&completion->futex)));
  volatile signed int tmp_statement_expression_1;
  if(tmp_statement_expression_5 == -1)
  {
    signed int _v;
    *((volatile signed int *)&(*(&completion->futex))) = 0;
    tmp_statement_expression_1 = *((volatile signed int *)&(*(&completion->futex)));
    _v = tmp_statement_expression_1;
    asm("" :  :  : "memory");
    _v = _v;
    signed int return_value_futex_async_4;
    return_value_futex_async_4=futex_async_link1(&completion->futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(!(return_value_futex_async_4 >= 0))
      do
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_completion_wake_up", 304, return_value_strerror_3);
        abort();
      }
      while((_Bool)0);

  }

}

// call_rcu_data_free_memb
// file ../../urcu-call-rcu.h line 77
void call_rcu_data_free_memb(struct call_rcu_data *crdp)
{
  volatile unsigned long int tmp_statement_expression_2;
  volatile unsigned long int tmp_statement_expression_1;
  volatile unsigned long int tmp_statement_expression_3;
  if(!(crdp == ((struct call_rcu_data *)NULL)) && !(crdp == default_call_rcu_data))
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((volatile unsigned long int *)&(*(&crdp->flags)));
    if((8ul & tmp_statement_expression_2) == 0ul)
    {
      __uatomic_or((void *)&crdp->flags, (unsigned long int)(1U << 2), (signed int)sizeof(unsigned long int) /*8ul*/ );
      wake_call_rcu_thread(crdp);
      do
      {
        asm("" :  :  : "memory");
        tmp_statement_expression_1 = *((volatile unsigned long int *)&(*(&crdp->flags)));
        if(!((8ul & tmp_statement_expression_1) == 0ul))
          break;

        poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
      }
      while((_Bool)1);
    }

    _Bool return_value__cds_wfcq_empty_4;
    return_value__cds_wfcq_empty_4=_cds_wfcq_empty(&crdp->cbs_head, &crdp->cbs_tail);
    if(return_value__cds_wfcq_empty_4 == (_Bool)0)
    {
      get_default_call_rcu_data_memb();
      ___cds_wfcq_splice_blocking(&default_call_rcu_data->cbs_head, &default_call_rcu_data->cbs_tail, &crdp->cbs_head, &crdp->cbs_tail);
      asm("" :  :  : "memory");
      tmp_statement_expression_3 = *((volatile unsigned long int *)&(*(&crdp->qlen)));
      __uatomic_add((void *)&default_call_rcu_data->qlen, (unsigned long int)tmp_statement_expression_3, (signed int)sizeof(unsigned long int) /*8ul*/ );
      wake_call_rcu_thread(default_call_rcu_data);
    }

    call_rcu_lock(&call_rcu_mutex);
    cds_list_del(&crdp->list);
    call_rcu_unlock(&call_rcu_mutex);
    free((void *)crdp);
  }

}

// call_rcu_data_init
// file urcu-call-rcu-impl.h line 415
static void call_rcu_data_init(struct call_rcu_data **crdpp, unsigned long int flags, signed int cpu_affinity)
{
  struct call_rcu_data *crdp;
  signed int ret;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct call_rcu_data) /*128ul*/ );
  crdp = (struct call_rcu_data *)return_value_malloc_1;
  if(crdp == ((struct call_rcu_data *)NULL))
    do
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(*return_value___errno_location_2);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_data_init", 424, return_value_strerror_3);
      abort();
    }
    while((_Bool)0);

  memset((void *)crdp, 0, sizeof(struct call_rcu_data) /*128ul*/ );
  _cds_wfcq_init(&crdp->cbs_head, &crdp->cbs_tail);
  crdp->qlen = (unsigned long int)0;
  crdp->futex = 0;
  crdp->flags = flags;
  cds_list_add(&crdp->list, &call_rcu_data_list);
  crdp->cpu_affinity = cpu_affinity;
  crdp->gp_count = (unsigned long int)0;
  asm("mfence" :  :  : "memory");
  *crdpp = crdp;
  ret=pthread_create(&crdp->tid, (const union pthread_attr_t *)(void *)0, call_rcu_thread, (void *)crdp);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(ret);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_data_init", 437, return_value_strerror_4);
      abort();
    }
    while((_Bool)0);

}

// call_rcu_lock
// file urcu-call-rcu-impl.h line 175
static void call_rcu_lock(union anonymous_0 *pmp)
{
  signed int ret;
  ret=pthread_mutex_lock(pmp);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(ret);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_lock", 181, return_value_strerror_1);
      abort();
    }
    while((_Bool)0);

}

// call_rcu_memb
// file ../../urcu-call-rcu.h line 72
void call_rcu_memb(struct rcu_head *head, void (*func)(struct rcu_head *))
{
  struct call_rcu_data *crdp;
  _rcu_read_lock_memb_link1();
  crdp=get_call_rcu_data_memb();
  _call_rcu(head, func, crdp);
  _rcu_read_unlock_memb_link1();
}

// call_rcu_thread
// file urcu-call-rcu-impl.h line 310
static void * call_rcu_thread(void *arg)
{
  unsigned long int cbcount;
  struct call_rcu_data *crdp = (struct call_rcu_data *)arg;
  signed int rt;
  volatile unsigned long int tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((volatile unsigned long int *)&(*(&crdp->flags)));
  rt = (signed int)!(!((tmp_statement_expression_1 & (unsigned long int)(1U << 0)) != 0ul));
  signed int return_value_set_thread_cpu_affinity_4;
  return_value_set_thread_cpu_affinity_4=set_thread_cpu_affinity(crdp);
  if(!(return_value_set_thread_cpu_affinity_4 == 0))
    do
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(*return_value___errno_location_2);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_thread", 317, return_value_strerror_3);
      abort();
    }
    while((_Bool)0);

  rcu_register_thread_memb();
  thread_call_rcu_data = crdp;
  if(rt == 0)
  {
    __uatomic_dec((void *)&crdp->futex, (signed int)sizeof(signed int) /*4ul*/ );
    asm("mfence" :  :  : "memory");
  }

  volatile unsigned long int tmp_statement_expression_9;
  volatile unsigned long int tmp_statement_expression_8;
  struct cds_wfcq_node *tmp_if_expr_11;
  struct cds_wfcq_node *return_value____cds_wfcq_next_blocking_10;
  struct rcu_head *tmp_statement_expression_14;
  struct cds_wfcq_node *tmp_if_expr_13;
  struct cds_wfcq_node *return_value____cds_wfcq_next_blocking_12;
  volatile unsigned long int tmp_statement_expression_15;
  do
  {
    struct cds_wfcq_head cbs_tmp_head;
    struct cds_wfcq_tail cbs_tmp_tail;
    struct cds_wfcq_node *cbs;
    struct cds_wfcq_node *cbs_tmp_n;
    enum cds_wfcq_ret splice_ret;
    signed int return_value_set_thread_cpu_affinity_7;
    return_value_set_thread_cpu_affinity_7=set_thread_cpu_affinity(crdp);
    if(!(return_value_set_thread_cpu_affinity_7 == 0))
      do
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        char *return_value_strerror_6;
        return_value_strerror_6=strerror(*return_value___errno_location_5);
        fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_thread", 337, return_value_strerror_6);
        abort();
      }
      while((_Bool)0);

    asm("" :  :  : "memory");
    tmp_statement_expression_9 = *((volatile unsigned long int *)&(*(&crdp->flags)));
    if(!((16ul & tmp_statement_expression_9) == 0ul))
    {
      rcu_unregister_thread_memb();
      asm("" :  :  : "memory");
      __uatomic_or((void *)&crdp->flags, (unsigned long int)(1U << 5), (signed int)sizeof(unsigned long int) /*8ul*/ );
      do
      {
        asm("" :  :  : "memory");
        tmp_statement_expression_8 = *((volatile unsigned long int *)&(*(&crdp->flags)));
        if((16ul & tmp_statement_expression_8) == 0ul)
          break;

        poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
      }
      while((_Bool)1);
      __uatomic_and((void *)&crdp->flags, (unsigned long int)~(1U << 5), (signed int)sizeof(unsigned long int) /*8ul*/ );
      asm("" :  :  : "memory");
      rcu_register_thread_memb();
    }

    _cds_wfcq_init(&cbs_tmp_head, &cbs_tmp_tail);
    splice_ret=___cds_wfcq_splice_blocking(&cbs_tmp_head, &cbs_tmp_tail, &crdp->cbs_head, &crdp->cbs_tail);
    /* assertion splice_ret != CDS_WFCQ_RET_WOULDBLOCK */
    assert((signed int)splice_ret != CDS_WFCQ_RET_WOULDBLOCK);
    /* assertion splice_ret != CDS_WFCQ_RET_DEST_NON_EMPTY */
    assert((signed int)splice_ret != CDS_WFCQ_RET_DEST_NON_EMPTY);
    if(!((signed int)splice_ret == CDS_WFCQ_RET_SRC_EMPTY))
    {
      synchronize_rcu_memb();
      cbcount = (unsigned long int)0;
      cbs=___cds_wfcq_first_blocking(&cbs_tmp_head, &cbs_tmp_tail);
      if(!(cbs == ((struct cds_wfcq_node *)NULL)))
      {
        return_value____cds_wfcq_next_blocking_10=___cds_wfcq_next_blocking(&cbs_tmp_head, &cbs_tmp_tail, cbs);
        tmp_if_expr_11 = return_value____cds_wfcq_next_blocking_10;
      }

      else
        tmp_if_expr_11 = (struct cds_wfcq_node *)(void *)0;
      cbs_tmp_n = tmp_if_expr_11;
      if(!(cbs == ((struct cds_wfcq_node *)NULL)))
      {
        struct rcu_head *rhp;
        const struct cds_wfcq_node *__ptr = cbs;
        tmp_statement_expression_14 = (struct rcu_head *)((char *)__ptr - (signed long int)0ul);
        rhp = tmp_statement_expression_14;
        rhp->func(rhp);
        cbcount = cbcount + 1ul;
        cbs = cbs_tmp_n;
        if(!(cbs == ((struct cds_wfcq_node *)NULL)))
        {
          return_value____cds_wfcq_next_blocking_12=___cds_wfcq_next_blocking(&cbs_tmp_head, &cbs_tmp_tail, cbs);
          tmp_if_expr_13 = return_value____cds_wfcq_next_blocking_12;
        }

        else
          tmp_if_expr_13 = (struct cds_wfcq_node *)(void *)0;
        cbs_tmp_n = tmp_if_expr_13;
      }

      __uatomic_add((void *)&crdp->qlen, (unsigned long int)-((unsigned long int)cbcount), (signed int)sizeof(unsigned long int) /*8ul*/ );
    }

    asm("" :  :  : "memory");
    tmp_statement_expression_15 = *((volatile unsigned long int *)&(*(&crdp->flags)));
    if(!((4ul & tmp_statement_expression_15) == 0ul))
      break;

    rcu_thread_offline();
    if(rt == 0)
    {
      _Bool return_value__cds_wfcq_empty_16;
      return_value__cds_wfcq_empty_16=_cds_wfcq_empty(&crdp->cbs_head, &crdp->cbs_tail);
      if(!(return_value__cds_wfcq_empty_16 == (_Bool)0))
      {
        call_rcu_wait(crdp);
        poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
        __uatomic_dec((void *)&crdp->futex, (signed int)sizeof(signed int) /*4ul*/ );
        asm("mfence" :  :  : "memory");
      }

      else
        poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
    }

    else
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
    rcu_thread_online();
  }
  while((_Bool)1);
  volatile signed int tmp_statement_expression_17;
  if(rt == 0)
  {
    asm("mfence" :  :  : "memory");
    signed int _v;
    *((volatile signed int *)&(*(&crdp->futex))) = 0;
    tmp_statement_expression_17 = *((volatile signed int *)&(*(&crdp->futex)));
    _v = tmp_statement_expression_17;
    asm("" :  :  : "memory");
    _v = _v;
  }

  __uatomic_or((void *)&crdp->flags, (unsigned long int)(1U << 3), (signed int)sizeof(unsigned long int) /*8ul*/ );
  rcu_unregister_thread_memb();
  return (void *)0;
}

// call_rcu_unlock
// file urcu-call-rcu-impl.h line 186
static void call_rcu_unlock(union anonymous_0 *pmp)
{
  signed int ret;
  ret=pthread_mutex_unlock(pmp);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(ret);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_unlock", 192, return_value_strerror_1);
      abort();
    }
    while((_Bool)0);

}

// call_rcu_wait
// file urcu-call-rcu-impl.h line 240
static void call_rcu_wait(struct call_rcu_data *crdp)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((volatile signed int *)&(*(&crdp->futex)));
  signed int return_value_futex_async_2;
  if(tmp_statement_expression_1 == -1)
    do
    {
      return_value_futex_async_2=futex_async_link1(&crdp->futex, 0, -1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
      if(return_value_futex_async_2 == 0)
        break;

      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      switch(*return_value___errno_location_3)
      {
        case 11:
          goto __CPROVER_DUMP_L7;
        case 4:
          break;
        default:
          do
          {
            signed int *return_value___errno_location_4;
            return_value___errno_location_4=__errno_location();
            char *return_value_strerror_5;
            return_value_strerror_5=strerror(*return_value___errno_location_4);
            fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_wait", 257, return_value_strerror_5);
            abort();
          }
          while((_Bool)0);
      }
    }
    while((_Bool)1);


__CPROVER_DUMP_L7:
  ;
}

// call_rcu_wake_up
// file urcu-call-rcu-impl.h line 262
static void call_rcu_wake_up(struct call_rcu_data *crdp)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_5;
  asm("" :  :  : "memory");
  tmp_statement_expression_5 = *((volatile signed int *)&(*(&crdp->futex)));
  volatile signed int tmp_statement_expression_1;
  if(tmp_statement_expression_5 == -1)
  {
    signed int _v;
    *((volatile signed int *)&(*(&crdp->futex))) = 0;
    tmp_statement_expression_1 = *((volatile signed int *)&(*(&crdp->futex)));
    _v = tmp_statement_expression_1;
    asm("" :  :  : "memory");
    _v = _v;
    signed int return_value_futex_async_4;
    return_value_futex_async_4=futex_async_link1(&crdp->futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(!(return_value_futex_async_4 >= 0))
      do
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_wake_up", 270, return_value_strerror_3);
        abort();
      }
      while((_Bool)0);

  }

}

// cds_list_add
// file ./urcu/list.h line 51
static inline void cds_list_add(struct cds_list_head *newp, struct cds_list_head *head)
{
  head->next->prev = newp;
  newp->next = head->next;
  newp->prev = head;
  head->next = newp;
}

// cds_list_del
// file ./urcu/list.h line 79
static inline void cds_list_del(struct cds_list_head *elem)
{
  __cds_list_del(elem->prev, elem->next);
}

// cds_list_empty
// file ./urcu/list.h line 184
static inline signed int cds_list_empty(struct cds_list_head *head)
{
  return (signed int)(head == head->next);
}

// cds_list_move
// file ./urcu/list.h line 94
static inline void cds_list_move(struct cds_list_head *elem, struct cds_list_head *head)
{
  __cds_list_del(elem->prev, elem->next);
  cds_list_add(elem, head);
}

// cds_list_splice
// file ./urcu/list.h line 112
static inline void cds_list_splice(struct cds_list_head *add, struct cds_list_head *head)
{
  if(!(add == add->next))
  {
    add->next->prev = head;
    add->prev->next = head->next;
    head->next->prev = add->prev;
    head->next = add->next;
  }

}

// cds_wfcq_dequeue_blocking
// file wfcqueue.c line 75
extern struct cds_wfcq_node * cds_wfcq_dequeue_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value__cds_wfcq_dequeue_blocking_1;
  return_value__cds_wfcq_dequeue_blocking_1=_cds_wfcq_dequeue_blocking(head, tail);
  return return_value__cds_wfcq_dequeue_blocking_1;
}

// cds_wfcq_dequeue_lock
// file wfcqueue.c line 63
extern void cds_wfcq_dequeue_lock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  _cds_wfcq_dequeue_lock(head, tail);
}

// cds_wfcq_dequeue_unlock
// file wfcqueue.c line 69
extern void cds_wfcq_dequeue_unlock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  _cds_wfcq_dequeue_unlock(head, tail);
}

// cds_wfcq_dequeue_with_state_blocking
// file wfcqueue.c line 82
extern struct cds_wfcq_node * cds_wfcq_dequeue_with_state_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value__cds_wfcq_dequeue_with_state_blocking_1;
  return_value__cds_wfcq_dequeue_with_state_blocking_1=_cds_wfcq_dequeue_with_state_blocking(head, tail, state);
  return return_value__cds_wfcq_dequeue_with_state_blocking_1;
}

// cds_wfcq_empty
// file wfcqueue.c line 49
extern _Bool cds_wfcq_empty(union anonymous head, struct cds_wfcq_tail *tail)
{
  _Bool return_value__cds_wfcq_empty_1;
  return_value__cds_wfcq_empty_1=_cds_wfcq_empty_link1(head, tail);
  return return_value__cds_wfcq_empty_1;
}

// cds_wfcq_enqueue
// file wfcqueue.c line 56
extern _Bool cds_wfcq_enqueue(union anonymous head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  _Bool return_value__cds_wfcq_enqueue_1;
  return_value__cds_wfcq_enqueue_1=_cds_wfcq_enqueue_link1(head, tail, node);
  return return_value__cds_wfcq_enqueue_1;
}

// cds_wfcq_init
// file wfcqueue.c line 37
extern void cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  _cds_wfcq_init_link1(head, tail);
}

// cds_wfcq_node_init
// file wfcqueue.c line 32
extern void cds_wfcq_node_init(struct cds_wfcq_node *node)
{
  _cds_wfcq_node_init_link1(node);
}

// cds_wfcq_splice_blocking
// file wfcqueue.c line 90
extern enum cds_wfcq_ret cds_wfcq_splice_blocking(struct cds_wfcq_head *dest_q_head, struct cds_wfcq_tail *dest_q_tail, struct cds_wfcq_head *src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value__cds_wfcq_splice_blocking_1;
  return_value__cds_wfcq_splice_blocking_1=_cds_wfcq_splice_blocking(dest_q_head, dest_q_tail, src_q_head, src_q_tail);
  return return_value__cds_wfcq_splice_blocking_1;
}

// cds_wfq_dequeue_blocking
// file wfqueue.c line 54
extern struct cds_wfq_node * cds_wfq_dequeue_blocking(struct cds_wfq_queue *q)
{
  struct cds_wfq_node *return_value__cds_wfq_dequeue_blocking_1;
  return_value__cds_wfq_dequeue_blocking_1=_cds_wfq_dequeue_blocking(q);
  return return_value__cds_wfq_dequeue_blocking_1;
}

// cds_wfq_enqueue
// file wfqueue.c line 44
extern void cds_wfq_enqueue(struct cds_wfq_queue *q, struct cds_wfq_node *node)
{
  _cds_wfq_enqueue(q, node);
}

// cds_wfq_init
// file wfqueue.c line 39
extern void cds_wfq_init(struct cds_wfq_queue *q)
{
  _cds_wfq_init(q);
}

// cds_wfq_node_init
// file wfqueue.c line 34
extern void cds_wfq_node_init(struct cds_wfq_node *node)
{
  _cds_wfq_node_init(node);
}

// cds_wfs_empty
// file wfstack.c line 46
extern _Bool cds_wfs_empty(union anonymous_1 u_stack)
{
  _Bool return_value__cds_wfs_empty_1;
  return_value__cds_wfs_empty_1=_cds_wfs_empty(u_stack);
  return return_value__cds_wfs_empty_1;
}

// cds_wfs_first
// file wfstack.c line 72
extern struct cds_wfs_node * cds_wfs_first(struct cds_wfs_head *head)
{
  struct cds_wfs_node *return_value__cds_wfs_first_1;
  return_value__cds_wfs_first_1=_cds_wfs_first_link1(head);
  return return_value__cds_wfs_first_1;
}

// cds_wfs_init
// file wfstack.c line 36
extern void cds_wfs_init(struct cds_wfs_stack *s)
{
  _cds_wfs_init(s);
}

// cds_wfs_next_blocking
// file wfstack.c line 77
extern struct cds_wfs_node * cds_wfs_next_blocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value__cds_wfs_next_blocking_1;
  return_value__cds_wfs_next_blocking_1=_cds_wfs_next_blocking_link1(node);
  return return_value__cds_wfs_next_blocking_1;
}

// cds_wfs_next_nonblocking
// file wfstack.c line 82
extern struct cds_wfs_node * cds_wfs_next_nonblocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value__cds_wfs_next_nonblocking_1;
  return_value__cds_wfs_next_nonblocking_1=_cds_wfs_next_nonblocking(node);
  return return_value__cds_wfs_next_nonblocking_1;
}

// cds_wfs_node_init
// file wfstack.c line 31
extern void cds_wfs_node_init(struct cds_wfs_node *node)
{
  _cds_wfs_node_init(node);
}

// cds_wfs_pop_all_blocking
// file wfstack.c line 67
extern struct cds_wfs_head * cds_wfs_pop_all_blocking(struct cds_wfs_stack *s)
{
  struct cds_wfs_head *return_value__cds_wfs_pop_all_blocking_1;
  return_value__cds_wfs_pop_all_blocking_1=_cds_wfs_pop_all_blocking(s);
  return return_value__cds_wfs_pop_all_blocking_1;
}

// cds_wfs_pop_blocking
// file wfstack.c line 56
extern struct cds_wfs_node * cds_wfs_pop_blocking(struct cds_wfs_stack *s)
{
  struct cds_wfs_node *return_value__cds_wfs_pop_blocking_1;
  return_value__cds_wfs_pop_blocking_1=_cds_wfs_pop_blocking(s);
  return return_value__cds_wfs_pop_blocking_1;
}

// cds_wfs_pop_lock
// file wfstack.c line 87
extern void cds_wfs_pop_lock(struct cds_wfs_stack *s)
{
  _cds_wfs_pop_lock(s);
}

// cds_wfs_pop_unlock
// file wfstack.c line 92
extern void cds_wfs_pop_unlock(struct cds_wfs_stack *s)
{
  _cds_wfs_pop_unlock(s);
}

// cds_wfs_pop_with_state_blocking
// file wfstack.c line 62
extern struct cds_wfs_node * cds_wfs_pop_with_state_blocking(struct cds_wfs_stack *s, signed int *state)
{
  struct cds_wfs_node *return_value__cds_wfs_pop_with_state_blocking_1;
  return_value__cds_wfs_pop_with_state_blocking_1=_cds_wfs_pop_with_state_blocking(s, state);
  return return_value__cds_wfs_pop_with_state_blocking_1;
}

// cds_wfs_push
// file wfstack.c line 51
extern signed int cds_wfs_push(union anonymous_1 u_stack, struct cds_wfs_node *node)
{
  signed int return_value__cds_wfs_push_1;
  return_value__cds_wfs_push_1=_cds_wfs_push_link1(u_stack, node);
  return return_value__cds_wfs_push_1;
}

// compat_futex_async
// file ../../urcu/futex.h line 52
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
// file ./urcu/futex.h line 50
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

// create_all_cpu_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 88
signed int create_all_cpu_call_rcu_data_memb(unsigned long int flags)
{
  signed int i;
  struct call_rcu_data *crdp;
  signed int ret;
  call_rcu_lock(&call_rcu_mutex);
  alloc_cpu_call_rcu_data();
  call_rcu_unlock(&call_rcu_mutex);
  if(!(maxcpus >= 1l))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -22;
  }

  if(per_cpu_call_rcu_data == ((struct call_rcu_data **)NULL))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 12;
    return -12;
  }

  i = 0;
  for( ; !((signed long int)i >= maxcpus); i = i + 1)
  {
    call_rcu_lock(&call_rcu_mutex);
    struct call_rcu_data *return_value_get_cpu_call_rcu_data_memb_3;
    return_value_get_cpu_call_rcu_data_memb_3=get_cpu_call_rcu_data_memb(i);
    if(!(return_value_get_cpu_call_rcu_data_memb_3 == ((struct call_rcu_data *)NULL)))
      call_rcu_unlock(&call_rcu_mutex);

    else
    {
      crdp=__create_call_rcu_data(flags, i);
      if(crdp == ((struct call_rcu_data *)NULL))
      {
        call_rcu_unlock(&call_rcu_mutex);
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        *return_value___errno_location_4 = 12;
        return -12;
      }

      call_rcu_unlock(&call_rcu_mutex);
      ret=set_cpu_call_rcu_data_memb(i, crdp);
      if(!(ret == 0))
      {
        call_rcu_data_free_memb(crdp);
        if(ret == -17)
          goto __CPROVER_DUMP_L8;

        return ret;
      }

    }

  __CPROVER_DUMP_L8:
    ;
  }
  return 0;
}

// create_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 75
struct call_rcu_data * create_call_rcu_data_memb(unsigned long int flags, signed int cpu_affinity)
{
  struct call_rcu_data *crdp;
  call_rcu_lock(&call_rcu_mutex);
  crdp=__create_call_rcu_data(flags, cpu_affinity);
  call_rcu_unlock(&call_rcu_mutex);
  return crdp;
}

// create_thread
// file ../../tests/common/api.h line 175
static unsigned long int create_thread(void * (*func)(void *), void *arg)
{
  unsigned long int tid;
  signed int i;
  spin_lock(&__thread_id_map_mutex);
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    if(__thread_id_map[(signed long int)i] == 0ul)
      break;

  if(i >= 128)
  {
    spin_unlock(&__thread_id_map_mutex);
    fprintf(stderr, "Thread limit of %d exceeded!\n", 128);
    exit(-1);
  }

  __thread_id_map[(signed long int)i] = (unsigned long int)1;
  spin_unlock(&__thread_id_map_mutex);
  signed int return_value_pthread_create_1;
  return_value_pthread_create_1=pthread_create(&tid, (const union pthread_attr_t *)(void *)0, func, arg);
  if(!(return_value_pthread_create_1 == 0))
  {
    perror("create_thread:pthread_create");
    exit(-1);
  }

  __thread_id_map[(signed long int)i] = tid;
  return tid;
}

// defer_rcu_memb
// file urcu-defer-impl.h line 395
extern void defer_rcu_memb(void (*fct)(void *), void *p)
{
  _defer_rcu(fct, p);
}

// diag
// file ../../tests/utils/tap.h line 82
unsigned int diag(char *fmt, ...)
{
  void **ap;
  fputs("# ", stderr);
  ap = (void **)&fmt;
  vfprintf(stderr, fmt, ap);
  ap = ((void **)NULL);
  fputs("\n", stderr);
  return (unsigned int)0;
}

// exit_status
// file ../../tests/utils/tap.h line 89
signed int exit_status(void)
{
  signed int r;
  if(have_plan == 0 || !(no_plan == 0))
    return (signed int)failures;

  else
    if(!(e_tests >= test_count))
    {
      r = (signed int)(test_count - e_tests);
      return r;
    }

    else
    {
      r = (signed int)((failures + e_tests) - test_count);
      return r;
    }
}

// free_all_cpu_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 89
void free_all_cpu_call_rcu_data_memb(void)
{
  signed int cpu;
  struct call_rcu_data **crdp;
  if(maxcpus >= 1l)
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct call_rcu_data *) /*8ul*/  * (unsigned long int)maxcpus);
    crdp = (struct call_rcu_data **)return_value_malloc_1;
    if(crdp == ((struct call_rcu_data **)NULL))
    {
      static signed int warned = 0;
      if(warned == 0)
        fprintf(stderr, "[error] liburcu: unable to allocate per-CPU pointer array\n");

      warned = 1;
    }

    else
    {
      cpu = 0;
      for( ; !((signed long int)cpu >= maxcpus); cpu = cpu + 1)
      {
        crdp[(signed long int)cpu]=get_cpu_call_rcu_data_memb(cpu);
        if(!(crdp[(signed long int)cpu] == ((struct call_rcu_data *)NULL)))
          set_cpu_call_rcu_data_memb(cpu, (struct call_rcu_data *)(void *)0);

      }
      synchronize_rcu_memb();
      cpu = 0;
      for( ; !((signed long int)cpu >= maxcpus); cpu = cpu + 1)
        if(!(crdp[(signed long int)cpu] == ((struct call_rcu_data *)NULL)))
          call_rcu_data_free_memb(crdp[(signed long int)cpu]);

      free((void *)crdp);
    }
  }

}

// free_completion
// file urcu-call-rcu-impl.h line 813
static void free_completion(struct urcu_ref *ref)
{
  struct call_rcu_completion *completion;
  struct call_rcu_completion *tmp_statement_expression_1;
  const struct urcu_ref *__ptr = ref;
  tmp_statement_expression_1 = (struct call_rcu_completion *)((char *)__ptr - (signed long int)8ul);
  completion = tmp_statement_expression_1;
  free((void *)completion);
}

// futex
// file ../../urcu/futex.h line 62
static inline signed int futex(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed long int return_value_syscall_1;
  return_value_syscall_1=syscall((signed long int)202, uaddr, op, val, timeout, uaddr2, val3);
  return (signed int)return_value_syscall_1;
}

// futex_link1
// file ./urcu/futex.h line 62
static inline signed int futex_link1(signed int *uaddr_link1, signed int op_link1, signed int val_link1, struct timespec *timeout_link1, signed int *uaddr2_link1, signed int val3_link1)
{
  signed long int return_value_syscall_1_link1;
  return_value_syscall_1_link1=syscall((signed long int)202, uaddr_link1, op_link1, val_link1, timeout_link1, uaddr2_link1, val3_link1);
  return (signed int)return_value_syscall_1_link1;
}

// futex_async
// file ../../urcu/futex.h line 83
static inline signed int futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed int ret;
  ret=futex(uaddr, op, val, timeout, uaddr2, val3);
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  if(!(ret >= 0))
  {
    return_value___errno_location_2=__errno_location();
    tmp_if_expr_3 = *return_value___errno_location_2 == 38 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int return_value_compat_futex_async_1;
    return_value_compat_futex_async_1=compat_futex_async(uaddr, op, val, timeout, uaddr2, val3);
    return return_value_compat_futex_async_1;
  }

  return ret;
}

// futex_async_link1
// file ./urcu/futex.h line 83
static inline signed int futex_async_link1(signed int *uaddr_link1, signed int op_link1, signed int val_link1, struct timespec *timeout_link1, signed int *uaddr2_link1, signed int val3_link1)
{
  signed int ret_link1;
  ret_link1=futex_link1(uaddr_link1, op_link1, val_link1, timeout_link1, uaddr2_link1, val3_link1);
  _Bool tmp_if_expr_3_link1;
  signed int *return_value___errno_location_2_link1;
  if(!(ret_link1 >= 0))
  {
    return_value___errno_location_2_link1=__errno_location();
    tmp_if_expr_3_link1 = *return_value___errno_location_2_link1 == 38 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3_link1 = (_Bool)0;
  if(tmp_if_expr_3_link1)
  {
    signed int return_value_compat_futex_async_1_link1;
    return_value_compat_futex_async_1_link1=compat_futex_async(uaddr_link1, op_link1, val_link1, timeout_link1, uaddr2_link1, val3_link1);
    return return_value_compat_futex_async_1_link1;
  }

  return ret_link1;
}

// futex_noasync
// file ./urcu/futex.h line 69
static inline signed int futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed int ret;
  ret=futex_link1(uaddr, op, val, timeout, uaddr2, val3);
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  if(!(ret >= 0))
  {
    return_value___errno_location_2=__errno_location();
    tmp_if_expr_3 = *return_value___errno_location_2 == 38 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  if(tmp_if_expr_3)
  {
    signed int return_value_compat_futex_noasync_1;
    return_value_compat_futex_noasync_1=compat_futex_noasync(uaddr, op, val, timeout, uaddr2, val3);
    return return_value_compat_futex_noasync_1;
  }

  return ret;
}

// get_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 578
struct call_rcu_data * get_call_rcu_data_memb(void)
{
  struct call_rcu_data *crd;
  if(!(thread_call_rcu_data == ((struct call_rcu_data *)NULL)))
    return thread_call_rcu_data;

  else
  {
    if(maxcpus >= 1l)
    {
      signed int return_value_urcu_sched_getcpu_1;
      return_value_urcu_sched_getcpu_1=urcu_sched_getcpu();
      crd=get_cpu_call_rcu_data_memb(return_value_urcu_sched_getcpu_1);
      if(!(crd == ((struct call_rcu_data *)NULL)))
        return crd;

    }

    struct call_rcu_data *return_value_get_default_call_rcu_data_memb_2;
    return_value_get_default_call_rcu_data_memb_2=get_default_call_rcu_data_memb();
    return return_value_get_default_call_rcu_data_memb_2;
  }
}

// get_call_rcu_thread_memb
// file urcu-call-rcu-impl.h line 472
unsigned long int get_call_rcu_thread_memb(struct call_rcu_data *crdp)
{
  return crdp->tid;
}

// get_cpu_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 80
struct call_rcu_data * get_cpu_call_rcu_data_memb(signed int cpu)
{
  struct call_rcu_data **pcpu_crdp;
  struct call_rcu_data **tmp_statement_expression_1;
  struct call_rcu_data **get_cpu_call_rcu_data_memb__1__1___________p1;
  struct call_rcu_data ** volatile tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((struct call_rcu_data ** volatile *)&per_cpu_call_rcu_data);
  get_cpu_call_rcu_data_memb__1__1___________p1 = tmp_statement_expression_2;
  tmp_statement_expression_1 = get_cpu_call_rcu_data_memb__1__1___________p1;
  pcpu_crdp = tmp_statement_expression_1;
  struct call_rcu_data *tmp_statement_expression_3;
  struct call_rcu_data * volatile tmp_statement_expression_4;
  if(pcpu_crdp == ((struct call_rcu_data **)NULL))
    return (struct call_rcu_data *)(void *)0;

  else
  {
    static signed int warned = 0;
    if(warned == 0 && maxcpus >= 1l && ((signed long int)cpu >= maxcpus || !(cpu >= 0)))
    {
      fprintf(stderr, "[error] liburcu: get CPU # out of range\n");
      warned = 1;
    }

    if((signed long int)cpu >= maxcpus || !(cpu >= 0))
      return (struct call_rcu_data *)(void *)0;

    else
    {
      struct call_rcu_data *_________p1;
      asm("" :  :  : "memory");
      tmp_statement_expression_4 = *((struct call_rcu_data * volatile *)&pcpu_crdp[(signed long int)cpu]);
      _________p1 = tmp_statement_expression_4;
      tmp_statement_expression_3 = _________p1;
      return tmp_statement_expression_3;
    }
  }
}

// get_default_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 553
struct call_rcu_data * get_default_call_rcu_data_memb(void)
{
  struct call_rcu_data *tmp_statement_expression_1;
  struct call_rcu_data * volatile tmp_statement_expression_2;
  if(!(default_call_rcu_data == ((struct call_rcu_data *)NULL)))
  {
    struct call_rcu_data *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((struct call_rcu_data * volatile *)&default_call_rcu_data);
    _________p1 = tmp_statement_expression_2;
    tmp_statement_expression_1 = _________p1;
    return tmp_statement_expression_1;
  }

  else
  {
    call_rcu_lock(&call_rcu_mutex);
    if(!(default_call_rcu_data == ((struct call_rcu_data *)NULL)))
    {
      call_rcu_unlock(&call_rcu_mutex);
      return default_call_rcu_data;
    }

    else
    {
      call_rcu_data_init(&default_call_rcu_data, (unsigned long int)0, -1);
      call_rcu_unlock(&call_rcu_mutex);
      return default_call_rcu_data;
    }
  }
}

// get_microseconds
// file ../../tests/common/api.h line 254
signed long long int get_microseconds(void)
{
  struct timeval tv;
  signed int return_value_gettimeofday_1;
  return_value_gettimeofday_1=gettimeofday(&tv, (struct timezone *)(void *)0);
  if(!(return_value_gettimeofday_1 == 0))
    abort();

  return (signed long long int)tv.tv_sec * 1000000LL + (signed long long int)tv.tv_usec;
}

// get_thread_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 81
struct call_rcu_data * get_thread_call_rcu_data_memb(void)
{
  return thread_call_rcu_data;
}

// main
// file rcutorture.h line 511
signed int main(signed int argc, char **argv)
{
  signed int nreaders = 1;
  signed int cpustride = 1;
  plan_tests((unsigned int)1);
  smp_init();
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(argc >= 5)
  {
    const char *callrcu_str = argv[(signed long int)4];
    signed int return_value_strcmp_3;
    return_value_strcmp_3=strcmp(callrcu_str, "callrcu_global");
    if(return_value_strcmp_3 == 0)
      callrcu_type = (enum callrcu_type)CALLRCU_GLOBAL;

    else
    {
      return_value_strcmp_2=strcmp(callrcu_str, "callrcu_percpu");
      if(return_value_strcmp_2 == 0)
        callrcu_type = (enum callrcu_type)CALLRCU_PERCPU;

      else
      {
        return_value_strcmp_1=strcmp(callrcu_str, "callrcu_perthread");
        if(return_value_strcmp_1 == 0)
          callrcu_type = (enum callrcu_type)CALLRCU_PERTHREAD;

        else
        {
          usage(argc, argv);
          goto end;
        }
      }
    }
  }

  signed int return_value_create_all_cpu_call_rcu_data_memb_6;
  signed int *return_value___errno_location_4;
  char *return_value_strerror_5;
  switch((signed int)callrcu_type)
  {
    case CALLRCU_GLOBAL:
    {
      diag("Using global per-process call_rcu thread.");
      break;
    }
    case CALLRCU_PERCPU:
    {
      diag("Using per-CPU call_rcu threads.");
      return_value_create_all_cpu_call_rcu_data_memb_6=create_all_cpu_call_rcu_data_memb((unsigned long int)0);
      if(!(return_value_create_all_cpu_call_rcu_data_memb_6 == 0))
      {
        return_value___errno_location_4=__errno_location();
        return_value_strerror_5=strerror(*return_value___errno_location_4);
        diag("create_all_cpu_call_rcu_data: %s", return_value_strerror_5);
      }

      break;
    }
    case CALLRCU_PERTHREAD:
    {
      diag("Using per-thread call_rcu() worker.");
      break;
    }
    default:
      abort();
  }
  _Bool tmp_if_expr_9;
  signed int return_value_strcmp_8;
  unsigned long int return_value_strtoul_12;
  signed int return_value_perftest_13;
  signed int return_value_strcmp_19;
  signed int return_value_rperftest_14;
  signed int return_value_strcmp_18;
  signed int return_value_uperftest_15;
  signed int return_value_strcmp_17;
  signed int return_value_stresstest_16;
  if(argc >= 2)
  {
    signed int return_value_strcmp_7;
    return_value_strcmp_7=strcmp(argv[(signed long int)1], "-h");
    if(return_value_strcmp_7 == 0)
      tmp_if_expr_9 = (_Bool)1;

    else
    {
      return_value_strcmp_8=strcmp(argv[(signed long int)1], "--help");
      tmp_if_expr_9 = return_value_strcmp_8 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_9)
    {
      usage(argc, argv);
      goto end;
    }

    unsigned long int return_value_strtoul_10;
    return_value_strtoul_10=strtoul(argv[(signed long int)1], (char ** restrict )(void *)0, 0);
    nreaders = (signed int)return_value_strtoul_10;
    if(argc == 2)
    {
      signed int return_value_perftest_11;
      return_value_perftest_11=perftest(nreaders, cpustride);
      if(return_value_perftest_11 == 0)
        _gen_result(1, "main", "rcutorture.h", (unsigned int)567, "perftest readers: %d, stride: %d", nreaders, cpustride);

      else
        _gen_result(0, "main", "rcutorture.h", (unsigned int)567, "perftest readers: %d, stride: %d", nreaders, cpustride);
      goto end;
    }

    if(argc >= 4)
    {
      return_value_strtoul_12=strtoul(argv[(signed long int)3], (char ** restrict )(void *)0, 0);
      cpustride = (signed int)return_value_strtoul_12;
    }

    signed int return_value_strcmp_20;
    return_value_strcmp_20=strcmp(argv[(signed long int)2], "perf");
    if(return_value_strcmp_20 == 0)
    {
      return_value_perftest_13=perftest(nreaders, cpustride);
      if(return_value_perftest_13 == 0)
        _gen_result(1, "main", "rcutorture.h", (unsigned int)575, "perftest readers: %d, stride: %d", nreaders, cpustride);

      else
        _gen_result(0, "main", "rcutorture.h", (unsigned int)575, "perftest readers: %d, stride: %d", nreaders, cpustride);
    }

    else
    {
      return_value_strcmp_19=strcmp(argv[(signed long int)2], "rperf");
      if(return_value_strcmp_19 == 0)
      {
        return_value_rperftest_14=rperftest(nreaders, cpustride);
        if(return_value_rperftest_14 == 0)
          _gen_result(1, "main", "rcutorture.h", (unsigned int)579, "rperftest readers: %d, stride: %d", nreaders, cpustride);

        else
          _gen_result(0, "main", "rcutorture.h", (unsigned int)579, "rperftest readers: %d, stride: %d", nreaders, cpustride);
      }

      else
      {
        return_value_strcmp_18=strcmp(argv[(signed long int)2], "uperf");
        if(return_value_strcmp_18 == 0)
        {
          return_value_uperftest_15=uperftest(nreaders, cpustride);
          if(return_value_uperftest_15 == 0)
            _gen_result(1, "main", "rcutorture.h", (unsigned int)583, "uperftest readers: %d, stride: %d", nreaders, cpustride);

          else
            _gen_result(0, "main", "rcutorture.h", (unsigned int)583, "uperftest readers: %d, stride: %d", nreaders, cpustride);
        }

        else
        {
          return_value_strcmp_17=strcmp(argv[(signed long int)2], "stress");
          if(return_value_strcmp_17 == 0)
          {
            return_value_stresstest_16=stresstest(nreaders);
            if(return_value_stresstest_16 == 0)
              _gen_result(1, "main", "rcutorture.h", (unsigned int)587, "stresstest readers: %d, stride: %d", nreaders, cpustride);

            else
              _gen_result(0, "main", "rcutorture.h", (unsigned int)587, "stresstest readers: %d, stride: %d", nreaders, cpustride);
          }

          else
            usage(argc, argv);
        }
      }
    }
  }

  else
    usage(argc, argv);

end:
  ;
  signed int return_value_exit_status_21;
  return_value_exit_status_21=exit_status();
  return return_value_exit_status_21;
}

// maxcpus_reset
// file urcu-call-rcu-impl.h line 123
static void maxcpus_reset(void)
{
  maxcpus = (signed long int)0;
}

// mutex_lock
// file urcu.c line 130
static void mutex_lock(union anonymous_0 *mutex)
{
  signed int ret;
  ret=pthread_mutex_lock(mutex);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(ret);
      fprintf(stderr, "(urcu.c:%s@%u) Unrecoverable error: %s\n", (const void *)"mutex_lock", 137, return_value_strerror_1);
      abort();
    }
    while((_Bool)0);

}

// mutex_lock_defer
// file urcu-defer-impl.h line 133
static void mutex_lock_defer(union anonymous_0 *mutex)
{
  signed int ret;
  ret=pthread_mutex_lock(mutex);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(ret);
      fprintf(stderr, "(urcu-defer-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"mutex_lock_defer", 140, return_value_strerror_1);
      abort();
    }
    while((_Bool)0);

}

// mutex_unlock
// file urcu.c line 152
static void mutex_unlock(union anonymous_0 *mutex)
{
  signed int ret;
  ret=pthread_mutex_unlock(mutex);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror_1;
      return_value_strerror_1=strerror(ret);
      fprintf(stderr, "(urcu.c:%s@%u) Unrecoverable error: %s\n", (const void *)"mutex_unlock", 158, return_value_strerror_1);
      abort();
    }
    while((_Bool)0);

}

// perftest
// file rcutorture.h line 232
signed int perftest(signed int nreaders, signed int cpustride)
{
  signed int i;
  signed long int arg;
  perftestinit();
  i = 0;
  for( ; !(i >= nreaders); i = i + 1)
  {
    arg = (signed long int)(i * cpustride);
    create_thread(rcu_read_perf_test, (void *)arg);
  }
  arg = (signed long int)(i * cpustride);
  create_thread(rcu_update_perf_test, (void *)arg);
  signed int return_value_perftestrun_1;
  return_value_perftestrun_1=perftestrun(i + 1, nreaders, 1);
  return return_value_perftestrun_1;
}

// perftestinit
// file rcutorture.h line 192
void perftestinit(void)
{
  do
  {
    signed int __i_p_t_i = 0;
    for( ; !(__i_p_t_i >= 128); __i_p_t_i = __i_p_t_i + 1)
      __per_thread_n_reads_pt[(signed long int)__i_p_t_i].v = 0LL;
  }
  while((_Bool)0);
  do
  {
    signed int perftestinit__1__2____i_p_t_i = 0;
    for( ; !(perftestinit__1__2____i_p_t_i >= 128); perftestinit__1__2____i_p_t_i = perftestinit__1__2____i_p_t_i + 1)
      __per_thread_n_updates_pt[(signed long int)perftestinit__1__2____i_p_t_i].v = 0LL;
  }
  while((_Bool)0);
  signed int _v;
  volatile signed int tmp_statement_expression_1;
  *((volatile signed int *)&(*(&nthreadsrunning))) = 0;
  tmp_statement_expression_1 = *((volatile signed int *)&(*(&nthreadsrunning)));
  _v = tmp_statement_expression_1;
  asm("" :  :  : "memory");
  _v = _v;
}

// perftestrun
// file rcutorture.h line 199
signed int perftestrun(signed int nthreads, signed int nreaders, signed int nupdaters)
{
  signed int t;
  signed int duration = 1;
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile signed int *)&(*(&nthreadsrunning)));
    if(tmp_statement_expression_1 >= nthreads)
      break;

    poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
  }
  while((_Bool)1);
  goflag = 1;
  asm("mfence" :  :  : "memory");
  sleep((unsigned int)duration);
  asm("mfence" :  :  : "memory");
  goflag = 2;
  asm("mfence" :  :  : "memory");
  wait_all_threads();
  t = 0;
  for( ; !(t >= 128); t = t + 1)
  {
    n_reads = n_reads + __per_thread_n_reads_pt[(signed long int)t].v;
    n_updates = n_updates + __per_thread_n_updates_pt[(signed long int)t].v;
  }
  diag("n_reads: %lld  n_updates: %ld  nreaders: %d  nupdaters: %d duration: %d", n_reads, n_updates, nreaders, nupdaters, duration);
  diag("ns/read: %g  ns/update: %g", ((double)(duration * 1000 * 1000) * 1000. * (double)nreaders) / (double)n_reads, ((double)(duration * 1000 * 1000) * 1000. * (double)nupdaters) / (double)n_updates);
  struct call_rcu_data *return_value_get_cpu_call_rcu_data_memb_2;
  return_value_get_cpu_call_rcu_data_memb_2=get_cpu_call_rcu_data_memb(0);
  if(!(return_value_get_cpu_call_rcu_data_memb_2 == ((struct call_rcu_data *)NULL)))
  {
    diag("Deallocating per-CPU call_rcu threads.\n");
    free_all_cpu_call_rcu_data_memb();
  }

  return 0;
}

// plan_no_plan
// file tap.c line 191
signed int plan_no_plan(void)
{
  _tap_init();
  if(!(have_plan == 0))
  {
    fprintf(stderr, "You tried to plan twice!\n");
    test_died = 1;
    exit(255);
  }

  have_plan = 1;
  no_plan = 1;
  return 1;
}

// plan_skip_all
// file tap.c line 217
signed int plan_skip_all(char *reason)
{
  _tap_init();
  skip_all = 1;
  printf("1..0");
  if(!(reason == ((char *)NULL)))
    printf(" # Skip %s", reason);

  printf("\n");
  exit(0);
}

// plan_tests
// file ../../tests/utils/tap.h line 80
signed int plan_tests(unsigned int tests)
{
  _tap_init();
  if(!(have_plan == 0))
  {
    fprintf(stderr, "You tried to plan twice!\n");
    test_died = 1;
    exit(255);
  }

  if(tests == 0u)
  {
    fprintf(stderr, "You said to run 0 tests!  You've got to run something.\n");
    test_died = 1;
    exit(255);
  }

  have_plan = 1;
  _expected_tests(tests);
  return (signed int)e_tests;
}

// rcu_barrier_memb
// file urcu-call-rcu-impl.h line 838
void rcu_barrier_memb(void)
{
  struct call_rcu_data *crdp;
  struct call_rcu_completion *completion;
  signed int count = 0;
  signed int was_online;
  was_online=_rcu_read_ongoing_memb();
  if(!(was_online == 0))
    rcu_thread_offline();

  signed int return_value__rcu_read_ongoing_memb_1;
  return_value__rcu_read_ongoing_memb_1=_rcu_read_ongoing_memb();
  void *return_value_calloc_2;
  volatile signed int tmp_statement_expression_8;
  if(!(return_value__rcu_read_ongoing_memb_1 == 0))
  {
    static signed int warned = 0;
    if(warned == 0)
      fprintf(stderr, "[error] liburcu: rcu_barrier() called from within RCU read-side critical section.\n");

    warned = 1;
  }

  else
  {
    return_value_calloc_2=calloc(sizeof(struct call_rcu_completion) /*16ul*/ , (unsigned long int)1);
    completion = (struct call_rcu_completion *)return_value_calloc_2;
    if(completion == ((struct call_rcu_completion *)NULL))
      do
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(*return_value___errno_location_3);
        fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"rcu_barrier_memb", 865, return_value_strerror_4);
        abort();
      }
      while((_Bool)0);

    call_rcu_lock(&call_rcu_mutex);
    crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
    for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
      count = count + 1;
    urcu_ref_set(&completion->ref, (signed long int)(count + 1));
    completion->barrier_count = count;
    crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
    for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    {
      struct call_rcu_completion_work *work;
      void *return_value_calloc_5;
      return_value_calloc_5=calloc(sizeof(struct call_rcu_completion_work) /*24ul*/ , (unsigned long int)1);
      work = (struct call_rcu_completion_work *)return_value_calloc_5;
      if(work == ((struct call_rcu_completion_work *)NULL))
        do
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          char *return_value_strerror_7;
          return_value_strerror_7=strerror(*return_value___errno_location_6);
          fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"rcu_barrier_memb", 880, return_value_strerror_7);
          abort();
        }
        while((_Bool)0);

      work->completion = completion;
      _call_rcu(&work->head, _rcu_barrier_complete, crdp);
    }
    call_rcu_unlock(&call_rcu_mutex);
    do
    {
      __uatomic_dec((void *)&completion->futex, (signed int)sizeof(signed int) /*4ul*/ );
      asm("mfence" :  :  : "memory");
      asm("" :  :  : "memory");
      tmp_statement_expression_8 = *((volatile signed int *)&(*(&completion->barrier_count)));
      if(tmp_statement_expression_8 == 0)
        break;

      call_rcu_completion_wait(completion);
    }
    while((_Bool)1);
    urcu_ref_put(&completion->ref, free_completion);
  }

online:
  ;
  if(!(was_online == 0))
    rcu_thread_online();

}

// rcu_cmpxchg_pointer_sym
// file urcu-pointer.c line 53
extern void * rcu_cmpxchg_pointer_sym(void **p, void *old, void *_new)
{
  asm("sfence" :  :  : "memory");
  unsigned long int return_value___uatomic_cmpxchg_1;
  return_value___uatomic_cmpxchg_1=__uatomic_cmpxchg((void *)p, (unsigned long int)old, (unsigned long int)_new, (signed int)sizeof(void *) /*8ul*/ );
  return (void *)return_value___uatomic_cmpxchg_1;
}

// rcu_defer_barrier_memb
// file urcu-defer-impl.h line 281
extern void rcu_defer_barrier_memb(void)
{
  struct defer_queue *index;
  unsigned long int num_items = (unsigned long int)0;
  signed int return_value_cds_list_empty_1;
  return_value_cds_list_empty_1=cds_list_empty(&registry_defer);
  volatile unsigned long int tmp_statement_expression_2;
  if(return_value_cds_list_empty_1 == 0)
  {
    mutex_lock_defer(&rcu_defer_mutex);
    index = (struct defer_queue *)((char *)(&registry_defer)->next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list);
    for( ; !(&index->list == &registry_defer); index = (struct defer_queue *)((char *)index->list.next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list))
    {
      asm("" :  :  : "memory");
      tmp_statement_expression_2 = *((volatile unsigned long int *)&index->head);
      index->last_head = tmp_statement_expression_2;
      num_items = num_items + (index->last_head - index->tail);
    }
    if(!(num_items == 0ul))
    {
      synchronize_rcu_memb();
      index = (struct defer_queue *)((char *)(&registry_defer)->next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list);
      for( ; !(&index->list == &registry_defer); index = (struct defer_queue *)((char *)index->list.next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list))
        rcu_defer_barrier_queue(index, index->last_head);
    }


  end:
    ;
    mutex_unlock(&rcu_defer_mutex);
  }

}

// rcu_defer_barrier_queue
// file urcu-defer-impl.h line 218
static void rcu_defer_barrier_queue(struct defer_queue *queue, unsigned long int head)
{
  unsigned long int i;
  void (*fct)(void *);
  void *p;
  i = queue->tail;
  void * volatile tmp_statement_expression_1;
  unsigned long int tmp_post_2;
  void * volatile tmp_statement_expression_3;
  unsigned long int tmp_post_4;
  void * volatile tmp_statement_expression_5;
  unsigned long int tmp_post_6;
  void * volatile tmp_statement_expression_7;
  unsigned long int tmp_post_8;
  if(!(i == head))
  {
    asm("" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_post_2 = i;
    i = i + 1ul;
    tmp_statement_expression_1 = *((void * volatile *)&queue->q[(signed long int)(tmp_post_2 & (unsigned long int)((1 << 12) - 1))]);
    p = tmp_statement_expression_1;
    if(!((1ul & (unsigned long int)p) == 0ul))
    {
      p = (void *)((unsigned long int)p & (unsigned long int)~(1 << 0));
      queue->last_fct_out = p;
      asm("" :  :  : "memory");
      tmp_post_4 = i;
      i = i + 1ul;
      tmp_statement_expression_3 = *((void * volatile *)&queue->q[(signed long int)(tmp_post_4 & (unsigned long int)((1 << 12) - 1))]);
      p = tmp_statement_expression_3;
    }

    else
      if(p == (void *)-2)
      {
        asm("" :  :  : "memory");
        tmp_post_6 = i;
        i = i + 1ul;
        tmp_statement_expression_5 = *((void * volatile *)&queue->q[(signed long int)(tmp_post_6 & (unsigned long int)((1 << 12) - 1))]);
        p = tmp_statement_expression_5;
        queue->last_fct_out = p;
        asm("" :  :  : "memory");
        tmp_post_8 = i;
        i = i + 1ul;
        tmp_statement_expression_7 = *((void * volatile *)&queue->q[(signed long int)(tmp_post_8 & (unsigned long int)((1 << 12) - 1))]);
        p = tmp_statement_expression_7;
      }

    fct = (void (*)(void *))queue->last_fct_out;
    fct(p);
  }

  asm("mfence" :  :  : "memory");
  unsigned long int _v;
  volatile unsigned long int tmp_statement_expression_9;
  *((volatile unsigned long int *)&queue->tail) = i;
  tmp_statement_expression_9 = *((volatile unsigned long int *)&queue->tail);
  _v = tmp_statement_expression_9;
  asm("" :  :  : "memory");
  _v = _v;
}

// rcu_defer_barrier_thread_memb
// file urcu-defer-impl.h line 261
extern void rcu_defer_barrier_thread_memb(void)
{
  mutex_lock_defer(&rcu_defer_mutex);
  _rcu_defer_barrier_thread();
  mutex_unlock(&rcu_defer_mutex);
}

// rcu_defer_exit_memb
// file urcu-defer-impl.h line 466
void rcu_defer_exit_memb(void)
{
  signed int return_value_cds_list_empty_1;
  return_value_cds_list_empty_1=cds_list_empty(&registry_defer);
  /* assertion cds_list_empty(&registry_defer) */
  assert(return_value_cds_list_empty_1 != 0);
}

// rcu_defer_num_callbacks
// file urcu-defer-impl.h line 163
static unsigned long int rcu_defer_num_callbacks(void)
{
  unsigned long int num_items = (unsigned long int)0;
  unsigned long int head;
  struct defer_queue *index;
  mutex_lock_defer(&rcu_defer_mutex);
  index = (struct defer_queue *)((char *)(&registry_defer)->next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list);
  volatile unsigned long int tmp_statement_expression_1;
  for( ; !(&index->list == &registry_defer); index = (struct defer_queue *)((char *)index->list.next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list))
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile unsigned long int *)&index->head);
    head = tmp_statement_expression_1;
    num_items = num_items + (head - index->tail);
  }
  mutex_unlock(&rcu_defer_mutex);
  return num_items;
}

// rcu_defer_register_thread_memb
// file urcu-defer-impl.h line 426
extern signed int rcu_defer_register_thread_memb(void)
{
  signed int was_empty;
  /* assertion (defer_queue).last_head == 0 */
  assert(defer_queue.last_head == (unsigned long int)0);
  /* assertion (defer_queue).q == ((void *)0) */
  assert(defer_queue.q == (void **)(void *)0);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(void *) /*8ul*/  * (unsigned long int)(1 << 12));
  defer_queue.q = (void **)return_value_malloc_1;
  if(defer_queue.q == ((void **)NULL))
    return -12;

  else
  {
    mutex_lock_defer(&defer_thread_mutex);
    mutex_lock_defer(&rcu_defer_mutex);
    was_empty=cds_list_empty(&registry_defer);
    cds_list_add(&defer_queue.list, &registry_defer);
    mutex_unlock(&rcu_defer_mutex);
    if(!(was_empty == 0))
      start_defer_thread();

    mutex_unlock(&defer_thread_mutex);
    return 0;
  }
}

// rcu_defer_unregister_thread_memb
// file urcu-defer-impl.h line 448
extern void rcu_defer_unregister_thread_memb(void)
{
  signed int is_empty;
  mutex_lock_defer(&defer_thread_mutex);
  mutex_lock_defer(&rcu_defer_mutex);
  cds_list_del(&defer_queue.list);
  _rcu_defer_barrier_thread();
  free((void *)defer_queue.q);
  defer_queue.q = (void **)(void *)0;
  is_empty=cds_list_empty(&registry_defer);
  mutex_unlock(&rcu_defer_mutex);
  if(!(is_empty == 0))
    stop_defer_thread();

  mutex_unlock(&defer_thread_mutex);
}

// rcu_dereference_sym
// file urcu-pointer.c line 35
extern void * rcu_dereference_sym(void *p)
{
  void *tmp_statement_expression_1;
  void *_________p1;
  void * volatile tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((void * volatile *)&p);
  _________p1 = tmp_statement_expression_2;
  tmp_statement_expression_1 = _________p1;
  return tmp_statement_expression_1;
}

// rcu_fake_update_stress_test
// file rcutorture.h line 421
void * rcu_fake_update_stress_test(void *arg)
{
  if((signed int)callrcu_type == CALLRCU_PERTHREAD)
  {
    struct call_rcu_data *crdp;
    crdp=create_call_rcu_data_memb((unsigned long int)0, -1);
    if(!(crdp == ((struct call_rcu_data *)NULL)))
    {
      diag("Successfully using per-thread call_rcu() worker.");
      set_thread_call_rcu_data_memb(crdp);
    }

  }

  while(goflag == 0)
    poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
  while(goflag == 1)
  {
    synchronize_rcu_memb();
    poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
  }
  if((signed int)callrcu_type == CALLRCU_PERTHREAD)
  {
    struct call_rcu_data *rcu_fake_update_stress_test__1__3__crdp;
    rcu_fake_update_stress_test__1__3__crdp=get_thread_call_rcu_data_memb();
    set_thread_call_rcu_data_memb((struct call_rcu_data *)(void *)0);
    call_rcu_data_free_memb(rcu_fake_update_stress_test__1__3__crdp);
  }

  return (void *)0;
}

// rcu_init_memb
// file urcu.c line 536
extern void rcu_init_memb(void)
{
  signed int ret;
  if(init_done == 0)
  {
    init_done = 1;
    signed long int return_value_syscall_1;
    return_value_syscall_1=syscall((signed long int)324, 0, 0);
    ret = (signed int)return_value_syscall_1;
    if(ret >= 0 && !((1 & ret) == 0))
      rcu_has_sys_membarrier_memb = 1;

  }

}

// rcu_quiescent_state
// file urcu.h line 117
static inline void rcu_quiescent_state(void)
{
  ;
}

// rcu_read_lock_memb
// file urcu.c line 497
extern void rcu_read_lock_memb(void)
{
  _rcu_read_lock_memb_link1();
}

// rcu_read_ongoing_memb
// file urcu.c line 507
extern signed int rcu_read_ongoing_memb(void)
{
  signed int return_value__rcu_read_ongoing_memb_1;
  return_value__rcu_read_ongoing_memb_1=_rcu_read_ongoing_memb();
  return return_value__rcu_read_ongoing_memb_1;
}

// rcu_read_perf_test
// file rcutorture.h line 131
void * rcu_read_perf_test(void *arg)
{
  signed int i;
  signed int me = (signed int)(signed long int)arg;
  signed long long int n_reads_local = (signed long long int)0;
  rcu_register_thread_memb();
  run_on(me);
  __uatomic_inc((void *)&nthreadsrunning, (signed int)sizeof(signed int) /*4ul*/ );

__CPROVER_DUMP_L1:
  ;
  while(goflag == 0)
    poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);

__CPROVER_DUMP_L3:
  ;
  while(goflag == 1)
  {
    i = 0;
    for( ; !(i >= 1000); i = i + 1)
    {
      _rcu_read_lock_memb();
      _rcu_read_unlock_memb();
    }
    n_reads_local = n_reads_local + (signed long long int)1000;

  __CPROVER_DUMP_L7:
    ;
  }
  signed int return_value_smp_thread_id_1;
  return_value_smp_thread_id_1=smp_thread_id();
  __per_thread_n_reads_pt[(signed long int)return_value_smp_thread_id_1].v = __per_thread_n_reads_pt[(signed long int)return_value_smp_thread_id_1].v + n_reads_local;

__CPROVER_DUMP_L9:
  ;
  rcu_unregister_thread_memb();
  return (void *)0;
}

// rcu_read_stress_test
// file rcutorture.h line 295
void * rcu_read_stress_test(void *arg)
{
  signed int i;
  signed int itercnt = 0;
  struct rcu_stress *p;
  signed int pc;
  rcu_register_thread_memb();

__CPROVER_DUMP_L1:
  ;
  while(goflag == 0)
    poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);

__CPROVER_DUMP_L3:
  ;
  struct rcu_stress *tmp_statement_expression_1;
  struct rcu_stress * volatile tmp_statement_expression_2;
  while(goflag == 1)
  {
    _rcu_read_lock_memb();
    struct rcu_stress *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression_2 = *((struct rcu_stress * volatile *)&rcu_stress_current);
    _________p1 = tmp_statement_expression_2;
    tmp_statement_expression_1 = _________p1;
    p = tmp_statement_expression_1;
    if(p->mbtest == 0)
      n_mberror = n_mberror + 1;

    _rcu_read_lock_memb();
    i = 0;
    for( ; !(i >= 100); i = i + 1)
      garbage = garbage + 1;
    _rcu_read_unlock_memb();
    pc = p->pipe_count;
    _rcu_read_unlock_memb();
    if(pc >= 11 || !(pc >= 0))
      pc = 10;

    signed int return_value_smp_thread_id_3;
    return_value_smp_thread_id_3=smp_thread_id();
    __per_thread_rcu_stress_count[(signed long int)return_value_smp_thread_id_3].v[(signed long int)pc] = __per_thread_rcu_stress_count[(signed long int)return_value_smp_thread_id_3].v[(signed long int)pc] + 1ll;
    signed int return_value_smp_thread_id_4;
    return_value_smp_thread_id_4=smp_thread_id();
    __per_thread_n_reads_pt[(signed long int)return_value_smp_thread_id_4].v = __per_thread_n_reads_pt[(signed long int)return_value_smp_thread_id_4].v + 1ll;

  __CPROVER_DUMP_L9:
    ;
    itercnt = itercnt + 1;
    if(itercnt % 0x1000 == 0)

      __CPROVER_DUMP_L10:
        ;


  __CPROVER_DUMP_L11:
    ;

  __CPROVER_DUMP_L12:
    ;
  }

__CPROVER_DUMP_L14:
  ;
  rcu_unregister_thread_memb();
  return (void *)0;
}

// rcu_read_unlock_memb
// file urcu.c line 502
extern void rcu_read_unlock_memb(void)
{
  _rcu_read_unlock_memb_link1();
}

// rcu_reader_state
// file urcu/static/urcu.h line 172
static inline enum rcu_state rcu_reader_state(unsigned long int *ctr)
{
  unsigned long int v;
  volatile unsigned long int tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((volatile unsigned long int *)&(*ctr));
  v = tmp_statement_expression_1;
  if((4294967295ul & v) == 0ul)
    return (enum rcu_state)RCU_READER_INACTIVE;

  else
    if(((rcu_gp_memb.ctr ^ v) & 4294967296ul) == 0ul)
      return (enum rcu_state)RCU_READER_ACTIVE_CURRENT;

    else
      return (enum rcu_state)RCU_READER_ACTIVE_OLD;
}

// rcu_register_thread_memb
// file ../../urcu.h line 106
extern void rcu_register_thread_memb(void)
{
  rcu_reader_memb.tid=pthread_self();
  /* assertion (rcu_reader_memb).need_mb == 0 */
  assert((signed int)rcu_reader_memb.need_mb == 0);
  /* assertion !((rcu_reader_memb).ctr & ((1UL << (sizeof(unsigned long) << 2)) - 1)) */
  assert(!((rcu_reader_memb.ctr & (1UL << (sizeof(unsigned long int) /*8ul*/  << 2)) - (unsigned long int)1) != 0ul));
  mutex_lock(&rcu_registry_lock);
  /* assertion !(rcu_reader_memb).registered */
  assert(!(rcu_reader_memb.registered != 0u));
  rcu_reader_memb.registered = (unsigned int)1;
  rcu_init_memb();
  cds_list_add(&rcu_reader_memb.node, &registry);
  mutex_unlock(&rcu_registry_lock);
}

// rcu_set_pointer_sym
// file urcu-pointer.c line 40
extern void * rcu_set_pointer_sym(void **p, void *v)
{
  asm("sfence" :  :  : "memory");
  void *_v;
  void * volatile tmp_statement_expression_1;
  *((void * volatile *)&(*p)) = v;
  tmp_statement_expression_1 = *((void * volatile *)&(*p));
  _v = tmp_statement_expression_1;
  asm("" :  :  : "memory");
  _v = _v;
  return v;
}

// rcu_thread_offline
// file urcu.h line 121
static inline void rcu_thread_offline(void)
{
  ;
}

// rcu_thread_online
// file urcu.h line 125
static inline void rcu_thread_online(void)
{
  ;
}

// rcu_unregister_thread_memb
// file ../../urcu.h line 107
extern void rcu_unregister_thread_memb(void)
{
  mutex_lock(&rcu_registry_lock);
  /* assertion (rcu_reader_memb).registered */
  assert(rcu_reader_memb.registered != 0u);
  rcu_reader_memb.registered = (unsigned int)0;
  cds_list_del(&rcu_reader_memb.node);
  mutex_unlock(&rcu_registry_lock);
}

// rcu_update_perf_test
// file rcutorture.h line 161
void * rcu_update_perf_test(void *arg)
{
  signed long long int n_updates_local = (signed long long int)0;
  if((signed int)callrcu_type == CALLRCU_PERTHREAD)
  {
    struct call_rcu_data *crdp;
    crdp=create_call_rcu_data_memb((unsigned long int)0, -1);
    if(!(crdp == ((struct call_rcu_data *)NULL)))
    {
      diag("Successfully using per-thread call_rcu() worker.");
      set_thread_call_rcu_data_memb(crdp);
    }

  }

  __uatomic_inc((void *)&nthreadsrunning, (signed int)sizeof(signed int) /*4ul*/ );
  while(goflag == 0)
    poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
  for( ; goflag == 1; n_updates_local = n_updates_local + 1ll)
    synchronize_rcu_memb();
  signed int return_value_smp_thread_id_1;
  return_value_smp_thread_id_1=smp_thread_id();
  __per_thread_n_updates_pt[(signed long int)return_value_smp_thread_id_1].v = __per_thread_n_updates_pt[(signed long int)return_value_smp_thread_id_1].v + n_updates_local;
  if((signed int)callrcu_type == CALLRCU_PERTHREAD)
  {
    struct call_rcu_data *rcu_update_perf_test__1__3__crdp;
    rcu_update_perf_test__1__3__crdp=get_thread_call_rcu_data_memb();
    set_thread_call_rcu_data_memb((struct call_rcu_data *)(void *)0);
    call_rcu_data_free_memb(rcu_update_perf_test__1__3__crdp);
  }

  return (void *)0;
}

// rcu_update_stress_test
// file rcutorture.h line 365
void * rcu_update_stress_test(void *arg)
{
  signed int i;
  struct rcu_stress *p;
  struct rcu_head rh;
  while(goflag == 0)
    poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
  struct rcu_stress * volatile tmp_statement_expression_1;
  for( ; goflag == 1; n_updates = n_updates + 1l)
  {
    i = rcu_stress_idx + 1;
    if(i >= 10)
      i = 0;

    p = &rcu_stress_array[(signed long int)i];
    p->mbtest = 0;
    asm("mfence" :  :  : "memory");
    p->pipe_count = 0;
    p->mbtest = 1;
    do
    {
      struct rcu_stress *_________pv = p;
      asm("sfence" :  :  : "memory");
      struct rcu_stress *_v;
      *((struct rcu_stress * volatile *)&(*(&rcu_stress_current))) = _________pv;
      tmp_statement_expression_1 = *((struct rcu_stress * volatile *)&(*(&rcu_stress_current)));
      _v = tmp_statement_expression_1;
      asm("" :  :  : "memory");
      _v = _v;
    }
    while((_Bool)0);
    rcu_stress_idx = i;
    i = 0;
    for( ; !(i >= 10); i = i + 1)
      if(!(i == rcu_stress_idx))
        rcu_stress_array[(signed long int)i].pipe_count = rcu_stress_array[(signed long int)i].pipe_count + 1;

    if(!((1l & n_updates) == 0l))
      synchronize_rcu_memb();

    else
    {
      signed int ret;
      ret=pthread_mutex_lock(&call_rcu_test_mutex);
      if(!(ret == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = ret;
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(*return_value___errno_location_3);
        diag("pthread_mutex_lock: %s", return_value_strerror_4);
        abort();
      }

      call_rcu_memb(&rh, rcu_update_stress_test_rcu);
      ret=pthread_cond_wait(&call_rcu_test_cond, &call_rcu_test_mutex);
      if(!(ret == 0))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        *return_value___errno_location_5 = ret;
        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        char *return_value_strerror_7;
        return_value_strerror_7=strerror(*return_value___errno_location_6);
        diag("pthread_cond_signal: %s", return_value_strerror_7);
        abort();
      }

      ret=pthread_mutex_unlock(&call_rcu_test_mutex);
      if(!(ret == 0))
      {
        signed int *return_value___errno_location_8;
        return_value___errno_location_8=__errno_location();
        *return_value___errno_location_8 = ret;
        signed int *return_value___errno_location_9;
        return_value___errno_location_9=__errno_location();
        char *return_value_strerror_10;
        return_value_strerror_10=strerror(*return_value___errno_location_9);
        diag("pthread_mutex_unlock: %s", return_value_strerror_10);
        abort();
      }

    }
  }
  return (void *)0;
}

// rcu_update_stress_test_rcu
// file rcutorture.h line 338
void rcu_update_stress_test_rcu(struct rcu_head *head)
{
  signed int ret;
  ret=pthread_mutex_lock(&call_rcu_test_mutex);
  if(!(ret == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = ret;
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    char *return_value_strerror_3;
    return_value_strerror_3=strerror(*return_value___errno_location_2);
    diag("pthread_mutex_lock: %s", return_value_strerror_3);
    abort();
  }

  ret=pthread_cond_signal(&call_rcu_test_cond);
  if(!(ret == 0))
  {
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = ret;
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    char *return_value_strerror_6;
    return_value_strerror_6=strerror(*return_value___errno_location_5);
    diag("pthread_cond_signal: %s", return_value_strerror_6);
    abort();
  }

  ret=pthread_mutex_unlock(&call_rcu_test_mutex);
  if(!(ret == 0))
  {
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    *return_value___errno_location_7 = ret;
    signed int *return_value___errno_location_8;
    return_value___errno_location_8=__errno_location();
    char *return_value_strerror_9;
    return_value_strerror_9=strerror(*return_value___errno_location_8);
    diag("pthread_mutex_unlock: %s", return_value_strerror_9);
    abort();
  }

}

// rcu_xchg_pointer_sym
// file urcu-pointer.c line 47
extern void * rcu_xchg_pointer_sym(void **p, void *v)
{
  asm("sfence" :  :  : "memory");
  unsigned long int return_value___uatomic_exchange_1;
  return_value___uatomic_exchange_1=__uatomic_exchange_link1((void *)p, (unsigned long int)v, (signed int)sizeof(void *) /*8ul*/ );
  return (void *)return_value___uatomic_exchange_1;
}

// rdiag
// file ../../tests/utils/tap.h line 94
unsigned int rdiag(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  vfprintf(stderr, fmt, ap);
  ap = ((void **)NULL);
  return (unsigned int)0;
}

// rdiag_end
// file ../../tests/utils/tap.h line 95
unsigned int rdiag_end(void)
{
  fputs("\n", stderr);
  return (unsigned int)0;
}

// rdiag_start
// file ../../tests/utils/tap.h line 93
unsigned int rdiag_start(void)
{
  fputs("# ", stderr);
  return (unsigned int)0;
}

// rperftest
// file rcutorture.h line 247
signed int rperftest(signed int nreaders, signed int cpustride)
{
  signed int i;
  signed long int arg;
  perftestinit();
  do
  {
    signed int __i_p_t_i = 0;
    for( ; !(__i_p_t_i >= 128); __i_p_t_i = __i_p_t_i + 1)
      __per_thread_n_reads_pt[(signed long int)__i_p_t_i].v = 0LL;
  }
  while((_Bool)0);
  i = 0;
  for( ; !(i >= nreaders); i = i + 1)
  {
    arg = (signed long int)(i * cpustride);
    create_thread(rcu_read_perf_test, (void *)arg);
  }
  signed int return_value_perftestrun_1;
  return_value_perftestrun_1=perftestrun(i, nreaders, 0);
  return return_value_perftestrun_1;
}

// run_on
// file ../../tests/common/api.h line 235
static void run_on(signed int cpu)
{
  struct anonymous_3 mask;
  do
    __builtin_memset((void *)&mask, 0, sizeof(struct anonymous_3) /*128ul*/ );
  while((_Bool)0);
  unsigned long int __cpu = (unsigned long int)cpu;
  if(!(__cpu / 8ul >= sizeof(struct anonymous_3) /*128ul*/ ))
    ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

  else
    (unsigned long int)0;
  sched_setaffinity(0, sizeof(struct anonymous_3) /*128ul*/ , &mask);
}

// set_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 514
signed int set_cpu_call_rcu_data_memb(signed int cpu, struct call_rcu_data *crdp)
{
  call_rcu_lock(&call_rcu_mutex);
  alloc_cpu_call_rcu_data();
  if((signed long int)cpu >= maxcpus || !(cpu >= 0))
  {
    static signed int warned = 0;
    if(warned == 0)
    {
      fprintf(stderr, "[error] liburcu: set CPU # out of range\n");
      warned = 1;
    }

    call_rcu_unlock(&call_rcu_mutex);
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -22;
  }

  if(per_cpu_call_rcu_data == ((struct call_rcu_data **)NULL))
  {
    call_rcu_unlock(&call_rcu_mutex);
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 12;
    return -12;
  }

  if(!(per_cpu_call_rcu_data[(signed long int)cpu] == ((struct call_rcu_data *)NULL)))
  {
    if(!(crdp == ((struct call_rcu_data *)NULL)))
    {
      call_rcu_unlock(&call_rcu_mutex);
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = 17;
      return -17;
    }

  }

  struct call_rcu_data * volatile tmp_statement_expression_4;
  do
  {
    struct call_rcu_data *_________pv = crdp;
    asm("sfence" :  :  : "memory");
    struct call_rcu_data *_v;
    *((struct call_rcu_data * volatile *)&(*(&per_cpu_call_rcu_data[(signed long int)cpu]))) = _________pv;
    tmp_statement_expression_4 = *((struct call_rcu_data * volatile *)&(*(&per_cpu_call_rcu_data[(signed long int)cpu])));
    _v = tmp_statement_expression_4;
    asm("" :  :  : "memory");
    _v = _v;
  }
  while((_Bool)0);
  call_rcu_unlock(&call_rcu_mutex);
  return 0;
}

// set_thread_call_rcu_data_memb
// file ../../urcu-call-rcu.h line 85
void set_thread_call_rcu_data_memb(struct call_rcu_data *crdp)
{
  thread_call_rcu_data = crdp;
}

// set_thread_cpu_affinity
// file urcu-call-rcu-impl.h line 202
static signed int set_thread_cpu_affinity(struct call_rcu_data *crdp)
{
  struct anonymous_3 mask;
  signed int ret;
  signed int *return_value___errno_location_3;
  if(!(crdp->cpu_affinity >= 0))
    return 0;

  else
  {
    crdp->gp_count = crdp->gp_count + 1ul;
    if(!((255ul & crdp->gp_count) == 0ul))
      return 0;

    else
    {
      signed int return_value_urcu_sched_getcpu_1;
      return_value_urcu_sched_getcpu_1=urcu_sched_getcpu();
      if(return_value_urcu_sched_getcpu_1 == crdp->cpu_affinity)
        return 0;

      else
      {
        do
          __builtin_memset((void *)&mask, 0, sizeof(struct anonymous_3) /*128ul*/ );
        while((_Bool)0);
        unsigned long int __cpu = (unsigned long int)crdp->cpu_affinity;
        if(!(__cpu / 8ul >= sizeof(struct anonymous_3) /*128ul*/ ))
          ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

        else
          (unsigned long int)0;
        ret=sched_setaffinity(0, sizeof(struct anonymous_3) /*128ul*/ , &mask);
        if(!(ret == 0))
        {
          return_value___errno_location_3=__errno_location();
          if(*return_value___errno_location_3 == 22)
          {
            ret = 0;
            signed int *return_value___errno_location_2;
            return_value___errno_location_2=__errno_location();
            *return_value___errno_location_2 = 0;
          }

        }

        return ret;
      }
    }
  }
}

// skip
// file tap.c line 323
signed int skip(unsigned int n, char *fmt, ...)
{
  void **ap;
  char *skip_msg = (char *)(void *)0;
  ap = (void **)&fmt;
  signed int return_value_asprintf_1;
  return_value_asprintf_1=asprintf(&skip_msg, fmt, ap);
  if(return_value_asprintf_1 == -1)
    skip_msg = (char *)(void *)0;

  ap = ((void **)NULL);
  unsigned int tmp_post_2;
  do
  {
    tmp_post_2 = n;
    n = n - 1u;
    if(!(tmp_post_2 >= 1u))
      break;

    test_count = test_count + 1u;
    printf("ok %d # skip %s\n", test_count, skip_msg != (char *)(void *)0 ? skip_msg : "libtap():malloc() failed");
  }
  while((_Bool)1);
  free((void *)skip_msg);
  return 1;
}

// smp_init
// file ../../tests/common/api.h line 296
static void smp_init(void)
{
  signed int i;
  spin_lock_init(&__thread_id_map_mutex);
  __thread_id_map[(signed long int)0]=pthread_self();
  i = 1;
  for( ; !(i >= 128); i = i + 1)
    __thread_id_map[(signed long int)i] = (unsigned long int)0;
  do
  {
    signed int __i_p_t_i = 0;
    for( ; !(__i_p_t_i >= 128); __i_p_t_i = __i_p_t_i + 1)
      __per_thread_smp_processor_id[(signed long int)__i_p_t_i].v = 0;
  }
  while((_Bool)0);
  signed int return_value_pthread_key_create_1;
  return_value_pthread_key_create_1=pthread_key_create(&thread_id_key, (void (*)(void *))(void *)0);
  if(!(return_value_pthread_key_create_1 == 0))
  {
    perror("pthread_key_create");
    exit(-1);
  }

}

// smp_mb_master
// file urcu.c line 162
static void smp_mb_master(void)
{
  if(!(rcu_has_sys_membarrier_memb == 0))
    syscall((signed long int)324, 1, 0);

  else
    asm("mfence" :  :  : "memory");
}

// smp_mb_slave
// file ../../urcu/static/urcu.h line 95
static inline void smp_mb_slave(void)
{
  if(!(rcu_has_sys_membarrier_memb == 0))
    asm("" :  :  : "memory");

  else
    asm("mfence" :  :  : "memory");
}

// smp_mb_slave_link1
// file urcu/static/urcu.h line 95
static inline void smp_mb_slave_link1(void)
{
  if(!(rcu_has_sys_membarrier_memb == 0))
    asm("" :  :  : "memory");

  else
    asm("mfence" :  :  : "memory");
}

// smp_thread_id
// file ../../tests/common/api.h line 165
static signed int smp_thread_id(void)
{
  void *id;
  id=pthread_getspecific(thread_id_key);
  signed int return_value___smp_thread_id_1;
  if(id == NULL)
  {
    return_value___smp_thread_id_1=__smp_thread_id();
    return return_value___smp_thread_id_1;
  }

  else
    return (signed int)(signed long int)(id - (signed long int)1);
}

// spin_lock
// file ../../tests/common/api.h line 89
static void spin_lock(union anonymous_0 *sp)
{
  signed int return_value_pthread_mutex_lock_1;
  return_value_pthread_mutex_lock_1=pthread_mutex_lock(sp);
  if(!(return_value_pthread_mutex_lock_1 == 0))
  {
    perror("spin_lock:pthread_mutex_lock");
    exit(-1);
  }

}

// spin_lock_init
// file ../../tests/common/api.h line 81
static void spin_lock_init(union anonymous_0 *sp)
{
  signed int return_value_pthread_mutex_init_1;
  return_value_pthread_mutex_init_1=pthread_mutex_init(sp, (const union anonymous_8 *)(void *)0);
  if(!(return_value_pthread_mutex_init_1 == 0))
  {
    perror("spin_lock_init:pthread_mutex_init");
    exit(-1);
  }

}

// spin_unlock
// file ../../tests/common/api.h line 97
static void spin_unlock(union anonymous_0 *sp)
{
  signed int return_value_pthread_mutex_unlock_1;
  return_value_pthread_mutex_unlock_1=pthread_mutex_unlock(sp);
  if(!(return_value_pthread_mutex_unlock_1 == 0))
  {
    perror("spin_unlock:pthread_mutex_unlock");
    exit(-1);
  }

}

// start_defer_thread
// file urcu-defer-impl.h line 400
static void start_defer_thread(void)
{
  signed int ret;
  ret=pthread_create(&tid_defer, (const union pthread_attr_t *)(void *)0, thr_defer, (void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// stop_defer_thread
// file urcu-defer-impl.h line 408
static void stop_defer_thread(void)
{
  signed int ret;
  void *tret;
  *((volatile signed int *)&defer_thread_stop) = 1;
  asm("mfence" :  :  : "memory");
  wake_up_defer();
  ret=pthread_join(tid_defer, &tret);
  /* assertion !ret */
  assert(!(ret != 0));
  signed int _v;
  volatile signed int tmp_statement_expression_1;
  *((volatile signed int *)&defer_thread_stop) = 0;
  tmp_statement_expression_1 = *((volatile signed int *)&defer_thread_stop);
  _v = tmp_statement_expression_1;
  asm("" :  :  : "memory");
  _v = _v;
  volatile signed int tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((volatile signed int *)&(*(&defer_thread_futex)));
  /* assertion __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(*(&defer_thread_futex)) *)&(*(&defer_thread_futex))); }) == 0 */
  assert(tmp_statement_expression_2 == 0);
}

// stresstest
// file rcutorture.h line 448
signed int stresstest(signed int nreaders)
{
  signed int i;
  signed int t;
  signed long long int *p;
  signed long long int sum;
  do
  {
    signed int __i_p_t_i = 0;
    for( ; !(__i_p_t_i >= 128); __i_p_t_i = __i_p_t_i + 1)
      __per_thread_n_reads_pt[(signed long int)__i_p_t_i].v = 0LL;
  }
  while((_Bool)0);
  t = 0;
  for( ; !(t >= 128); t = t + 1)
  {
    p = &__per_thread_rcu_stress_count[(signed long int)t].v[(signed long int)0];
    i = 0;
    for( ; !(i >= 11); i = i + 1)
      p[(signed long int)i] = 0LL;
  }
  rcu_stress_current = &rcu_stress_array[(signed long int)0];
  rcu_stress_current->pipe_count = 0;
  rcu_stress_current->mbtest = 1;
  i = 0;
  for( ; !(i >= nreaders); i = i + 1)
    create_thread(rcu_read_stress_test, (void *)0);
  create_thread(rcu_update_stress_test, (void *)0);
  i = 0;
  for( ; !(i >= 5); i = i + 1)
    create_thread(rcu_fake_update_stress_test, (void *)0);
  asm("mfence" :  :  : "memory");
  goflag = 1;
  asm("mfence" :  :  : "memory");
  sleep((unsigned int)10);
  asm("mfence" :  :  : "memory");
  goflag = 2;
  asm("mfence" :  :  : "memory");
  wait_all_threads();
  t = 0;
  for( ; !(t >= 128); t = t + 1)
    n_reads = n_reads + __per_thread_n_reads_pt[(signed long int)t].v;
  diag("n_reads: %lld  n_updates: %ld  n_mberror: %d", n_reads, n_updates, n_mberror);
  rdiag_start();
  rdiag("rcu_stress_count:");
  i = 0;
  for( ; !(i >= 11); i = i + 1)
  {
    sum = 0LL;
    t = 0;
    for( ; !(t >= 128); t = t + 1)
      sum = sum + __per_thread_rcu_stress_count[(signed long int)t].v[(signed long int)i];
    rdiag(" %lld", sum);
  }
  rdiag_end();
  struct call_rcu_data *return_value_get_cpu_call_rcu_data_memb_1;
  return_value_get_cpu_call_rcu_data_memb_1=get_cpu_call_rcu_data_memb(0);
  if(!(return_value_get_cpu_call_rcu_data_memb_1 == ((struct call_rcu_data *)NULL)))
  {
    diag("Deallocating per-CPU call_rcu threads.");
    free_all_cpu_call_rcu_data_memb();
  }

  if(n_mberror == 0)
    return 0;

  else
    return -1;
}

// synchronize_rcu_memb
// file ../../urcu.h line 101
extern void synchronize_rcu_memb(void)
{
  struct cds_list_head cur_snap_readers = { .next=&cur_snap_readers, .prev=&cur_snap_readers };
  struct cds_list_head qsreaders = { .next=&qsreaders, .prev=&qsreaders };
  struct urcu_wait_node wait = { .node={ .next=((struct cds_wfs_node *)NULL) }, .state=URCU_WAIT_WAITING };
  struct urcu_waiters waiters;
  _Bool return_value_urcu_wait_add_1;
  return_value_urcu_wait_add_1=urcu_wait_add(&gp_waiters, &wait);
  volatile unsigned long int tmp_statement_expression_3;
  if(!((signed int)return_value_urcu_wait_add_1 == 0))
  {
    urcu_adaptative_busy_wait(&wait);
    asm("mfence" :  :  : "memory");
  }

  else
  {
    urcu_wait_set_state(&wait, (enum urcu_wait_state)URCU_WAIT_RUNNING);
    mutex_lock(&rcu_gp_lock);
    urcu_move_waiters(&waiters, &gp_waiters);
    mutex_lock(&rcu_registry_lock);
    signed int return_value_cds_list_empty_2;
    return_value_cds_list_empty_2=cds_list_empty(&registry);
    if(return_value_cds_list_empty_2 == 0)
    {
      smp_mb_master();
      wait_for_readers(&registry, &cur_snap_readers, &qsreaders);
      asm("" :  :  : "memory");
      asm("mfence" :  :  : "memory");
      unsigned long int _v;
      *((volatile unsigned long int *)&rcu_gp_memb.ctr) = rcu_gp_memb.ctr ^ 1UL << (sizeof(unsigned long int) /*8ul*/  << 2);
      tmp_statement_expression_3 = *((volatile unsigned long int *)&rcu_gp_memb.ctr);
      _v = tmp_statement_expression_3;
      asm("" :  :  : "memory");
      _v = _v;
      asm("" :  :  : "memory");
      asm("mfence" :  :  : "memory");
      wait_for_readers(&cur_snap_readers, (struct cds_list_head *)(void *)0, &qsreaders);
      cds_list_splice(&qsreaders, &registry);
      smp_mb_master();
    }


  out:
    ;
    mutex_unlock(&rcu_registry_lock);
    mutex_unlock(&rcu_gp_lock);
    urcu_wake_all_waiters(&waiters);
  }
}

// tap_disable
// file tap.c line 469
void tap_disable(void)
{
  tap_is_disabled = 1;
}

// thr_defer
// file urcu-defer-impl.h line 374
static void * thr_defer(void *args)
{
  do
  {
    wait_defer();
    poll((struct pollfd *)(void *)0, (unsigned long int)0, 100);
    rcu_defer_barrier_memb();
  }
  while((_Bool)1);
  return (void *)0;
}

// todo_end
// file tap.c line 369
void todo_end(void)
{
  todo = 0;
  free((void *)todo_msg);
}

// todo_start
// file tap.c line 351
void todo_start(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  signed int return_value_vasprintf_1;
  return_value_vasprintf_1=vasprintf(&todo_msg, fmt, ap);
  if(return_value_vasprintf_1 == -1)
    todo_msg = (char *)(void *)0;

  ap = ((void **)NULL);
  todo = 1;
}

// uperftest
// file rcutorture.h line 261
signed int uperftest(signed int nupdaters, signed int cpustride)
{
  signed int i;
  signed long int arg;
  perftestinit();
  do
  {
    signed int __i_p_t_i = 0;
    for( ; !(__i_p_t_i >= 128); __i_p_t_i = __i_p_t_i + 1)
      __per_thread_n_reads_pt[(signed long int)__i_p_t_i].v = 0LL;
  }
  while((_Bool)0);
  i = 0;
  for( ; !(i >= nupdaters); i = i + 1)
  {
    arg = (signed long int)(i * cpustride);
    create_thread(rcu_update_perf_test, (void *)arg);
  }
  signed int return_value_perftestrun_1;
  return_value_perftestrun_1=perftestrun(i, 0, nupdaters);
  return return_value_perftestrun_1;
}

// urcu_adaptative_busy_wait
// file urcu-wait.h line 140
static inline void urcu_adaptative_busy_wait(struct urcu_wait_node *wait)
{
  unsigned int i;
  asm("" :  :  : "memory");
  i = (unsigned int)0;
  volatile signed int tmp_statement_expression_1;
  for( ; !(i >= 1000u); i = i + 1u)
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_1 = *((volatile signed int *)&(*(&wait->state)));
    if(!(tmp_statement_expression_1 == URCU_WAIT_WAITING))
      goto skip_futex_wait;

    asm("rep; nop" :  :  : "memory");
  }
  signed int return_value_futex_noasync_2;
  do
  {
    return_value_futex_noasync_2=futex_noasync(&wait->state, 0, URCU_WAIT_WAITING, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(return_value_futex_noasync_2 == 0)
      break;

    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    switch(*return_value___errno_location_3)
    {
      case 11:
        goto skip_futex_wait;
      case 4:
        break;
      default:
        do
        {
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          char *return_value_strerror_5;
          return_value_strerror_5=strerror(*return_value___errno_location_4);
          fprintf(stderr, "(urcu-wait.h:%s@%u) Unrecoverable error: %s\n", (const void *)"urcu_adaptative_busy_wait", 162, return_value_strerror_5);
          abort();
        }
        while((_Bool)0);
    }
  }
  while((_Bool)1);

skip_futex_wait:
  ;
  __uatomic_or((void *)&wait->state, (unsigned long int)URCU_WAIT_RUNNING, (signed int)sizeof(signed int) /*4ul*/ );
  i = (unsigned int)0;
  volatile signed int tmp_statement_expression_6;
  for( ; !(i >= 1000u); i = i + 1u)
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_6 = *((volatile signed int *)&(*(&wait->state)));
    if(!((URCU_WAIT_TEARDOWN & tmp_statement_expression_6) == 0))
      break;

    asm("rep; nop" :  :  : "memory");
  }
  volatile signed int tmp_statement_expression_7;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression_7 = *((volatile signed int *)&(*(&wait->state)));
    if(!((URCU_WAIT_TEARDOWN & tmp_statement_expression_7) == 0))
      break;

    poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
  }
  while((_Bool)1);
  volatile signed int tmp_statement_expression_8;
  asm("" :  :  : "memory");
  tmp_statement_expression_8 = *((volatile signed int *)&(*(&wait->state)));
  /* assertion __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(*(&wait->state)) *)&(*(&wait->state))); }) & URCU_WAIT_TEARDOWN */
  assert((tmp_statement_expression_8 & URCU_WAIT_TEARDOWN) != 0);
}

// urcu_adaptative_wake_up
// file urcu-wait.h line 121
static inline void urcu_adaptative_wake_up(struct urcu_wait_node *wait)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((volatile signed int *)&(*(&wait->state)));
  /* assertion __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(*(&wait->state)) *)&(*(&wait->state))); }) == URCU_WAIT_WAITING */
  assert(tmp_statement_expression_1 == URCU_WAIT_WAITING);
  signed int _v;
  volatile signed int tmp_statement_expression_2;
  *((volatile signed int *)&(*(&wait->state))) = URCU_WAIT_WAKEUP;
  tmp_statement_expression_2 = *((volatile signed int *)&(*(&wait->state)));
  _v = tmp_statement_expression_2;
  asm("" :  :  : "memory");
  _v = _v;
  volatile signed int tmp_statement_expression_6;
  asm("" :  :  : "memory");
  tmp_statement_expression_6 = *((volatile signed int *)&(*(&wait->state)));
  if((URCU_WAIT_RUNNING & tmp_statement_expression_6) == 0)
  {
    signed int return_value_futex_noasync_5;
    return_value_futex_noasync_5=futex_noasync(&wait->state, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(!(return_value_futex_noasync_5 >= 0))
      do
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        char *return_value_strerror_4;
        return_value_strerror_4=strerror(*return_value___errno_location_3);
        fprintf(stderr, "(urcu-wait.h:%s@%u) Unrecoverable error: %s\n", (const void *)"urcu_adaptative_wake_up", 129, return_value_strerror_4);
        abort();
      }
      while((_Bool)0);

  }

  __uatomic_or((void *)&wait->state, (unsigned long int)URCU_WAIT_TEARDOWN, (signed int)sizeof(signed int) /*4ul*/ );
}

// urcu_move_waiters
// file urcu-wait.h line 93
static inline void urcu_move_waiters(struct urcu_waiters *waiters, struct urcu_wait_queue *queue)
{
  waiters->head=___cds_wfs_pop_all(&queue->stack);
}

// urcu_ref_put
// file urcu/ref.h line 40
static inline void urcu_ref_put(struct urcu_ref *ref, void (*release)(struct urcu_ref *))
{
  signed long int res;
  unsigned long int return_value___uatomic_add_return_1;
  return_value___uatomic_add_return_1=__uatomic_add_return((void *)&ref->refcount, (unsigned long int)-((unsigned long int)1), (signed int)sizeof(signed long int) /*8ul*/ );
  res = (signed long int)return_value___uatomic_add_return_1;
  /* assertion res >= 0 */
  assert(res >= (signed long int)0);
  if(res == 0l)
    release(ref);

}

// urcu_ref_set
// file urcu/ref.h line 25
static inline void urcu_ref_set(struct urcu_ref *ref, signed long int val)
{
  signed long int _v;
  volatile signed long int tmp_statement_expression_1;
  *((volatile signed long int *)&(*(&ref->refcount))) = val;
  tmp_statement_expression_1 = *((volatile signed long int *)&(*(&ref->refcount)));
  _v = tmp_statement_expression_1;
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

// urcu_wait_add
// file urcu-wait.h line 82
static inline _Bool urcu_wait_add(struct urcu_wait_queue *queue, struct urcu_wait_node *node)
{
  signed int return_value__cds_wfs_push_1;
  return_value__cds_wfs_push_1=_cds_wfs_push(&queue->stack, &node->node);
  return (_Bool)return_value__cds_wfs_push_1;
}

// urcu_wait_set_state
// file urcu-wait.h line 100
static inline void urcu_wait_set_state(struct urcu_wait_node *node, enum urcu_wait_state state)
{
  node->state = (signed int)state;
}

// urcu_wake_all_waiters
// file urcu-wait.h line 185
static inline void urcu_wake_all_waiters(struct urcu_waiters *waiters)
{
  struct cds_wfs_node *iter;
  struct cds_wfs_node *iter_n;
  iter=_cds_wfs_first(waiters->head);
  struct cds_wfs_node *tmp_if_expr_2;
  struct cds_wfs_node *return_value__cds_wfs_next_blocking_1;
  if(!(iter == ((struct cds_wfs_node *)NULL)))
  {
    return_value__cds_wfs_next_blocking_1=_cds_wfs_next_blocking(iter);
    tmp_if_expr_2 = return_value__cds_wfs_next_blocking_1;
  }

  else
    tmp_if_expr_2 = (struct cds_wfs_node *)(void *)0;
  iter_n = tmp_if_expr_2;
  struct urcu_wait_node *tmp_statement_expression_5;
  struct cds_wfs_node *tmp_if_expr_4;
  struct cds_wfs_node *return_value__cds_wfs_next_blocking_3;
  for( ; !(iter == ((struct cds_wfs_node *)NULL)); iter_n = tmp_if_expr_4)
  {
    struct urcu_wait_node *wait_node;
    const struct cds_wfs_node *__ptr = iter;
    tmp_statement_expression_5 = (struct urcu_wait_node *)((char *)__ptr - (signed long int)0ul);
    wait_node = tmp_statement_expression_5;
    if((URCU_WAIT_RUNNING & wait_node->state) == 0)
      urcu_adaptative_wake_up(wait_node);

    iter = iter_n;
    if(!(iter == ((struct cds_wfs_node *)NULL)))
    {
      return_value__cds_wfs_next_blocking_3=_cds_wfs_next_blocking(iter);
      tmp_if_expr_4 = return_value__cds_wfs_next_blocking_3;
    }

    else
      tmp_if_expr_4 = (struct cds_wfs_node *)(void *)0;
  }
}

// usage
// file rcutorture.h line 505
void usage(signed int argc, char **argv)
{
  diag("Usage: %s nreaders [ perf | rperf | uperf | stress ] [ stride ] [ callrcu_global | callrcu_percpu | callrcu_perthread ]\n", argv[(signed long int)0]);
  exit(-1);
}

// wait_all_threads
// file ../../tests/common/api.h line 222
static void wait_all_threads(void)
{
  signed int i;
  unsigned long int tid;
  i = 1;
  for( ; !(i >= 128); i = i + 1)
  {
    tid = __thread_id_map[(signed long int)i];
    if(!(tid == 0ul) && !(tid == 1ul))
      wait_thread(tid);

  }
}

// wait_defer
// file urcu-defer-impl.h line 180
static void wait_defer(void)
{
  __uatomic_dec((void *)&defer_thread_futex, (signed int)sizeof(signed int) /*4ul*/ );
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression_1;
  if(!(defer_thread_stop == 0))
  {
    signed int wait_defer__1__1__1___v;
    *((volatile signed int *)&(*(&defer_thread_futex))) = 0;
    tmp_statement_expression_1 = *((volatile signed int *)&(*(&defer_thread_futex)));
    wait_defer__1__1__1___v = tmp_statement_expression_1;
    asm("" :  :  : "memory");
    wait_defer__1__1__1___v = wait_defer__1__1__1___v;
    pthread_exit(NULL);
  }

  unsigned long int return_value_rcu_defer_num_callbacks_8;
  return_value_rcu_defer_num_callbacks_8=rcu_defer_num_callbacks();
  volatile signed int tmp_statement_expression_2;
  volatile signed int tmp_statement_expression_3;
  signed int return_value_futex_noasync_4;
  if(!(return_value_rcu_defer_num_callbacks_8 == 0ul))
  {
    asm("mfence" :  :  : "memory");
    signed int _v;
    *((volatile signed int *)&(*(&defer_thread_futex))) = 0;
    tmp_statement_expression_2 = *((volatile signed int *)&(*(&defer_thread_futex)));
    _v = tmp_statement_expression_2;
    asm("" :  :  : "memory");
    _v = _v;
  }

  else
  {
    asm("" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_statement_expression_3 = *((volatile signed int *)&(*(&defer_thread_futex)));
    if(!(tmp_statement_expression_3 == -1))
      goto __CPROVER_DUMP_L10;

    do
    {
      return_value_futex_noasync_4=futex_noasync(&defer_thread_futex, 0, -1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
      if(return_value_futex_noasync_4 == 0)
        break;

      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      switch(*return_value___errno_location_5)
      {
        case 11:
          goto __CPROVER_DUMP_L10;
        case 4:
          break;
        default:
          do
          {
            signed int *return_value___errno_location_6;
            return_value___errno_location_6=__errno_location();
            char *return_value_strerror_7;
            return_value_strerror_7=strerror(*return_value___errno_location_6);
            fprintf(stderr, "(urcu-defer-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"wait_defer", 209, return_value_strerror_7);
            abort();
          }
          while((_Bool)0);
      }
    }
    while((_Bool)1);
  }

__CPROVER_DUMP_L10:
  ;
}

// wait_for_readers
// file urcu.c line 269
static void wait_for_readers(struct cds_list_head *input_readers, struct cds_list_head *cur_snap_readers, struct cds_list_head *qsreaders)
{
  unsigned int wait_loops = (unsigned int)0;
  struct rcu_reader_memb *index;
  struct rcu_reader_memb *tmp;
  volatile signed int tmp_statement_expression_2;
  while((_Bool)1)
  {
    if(!(wait_loops >= 100u))
      wait_loops = wait_loops + 1u;

    if(wait_loops >= 100u)
    {
      __uatomic_dec((void *)&rcu_gp_memb.futex, (signed int)sizeof(signed int) /*4ul*/ );
      smp_mb_master();
    }

    index = (struct rcu_reader_memb *)((char *)input_readers->next - (signed long int)(unsigned long int)&((struct rcu_reader_memb *)0)->node);
    tmp = (struct rcu_reader_memb *)((char *)index->node.next - (signed long int)(unsigned long int)&((struct rcu_reader_memb *)0)->node);
    while(!(&index->node == input_readers))
    {
      enum rcu_state return_value_rcu_reader_state_1;
      return_value_rcu_reader_state_1=rcu_reader_state(&index->ctr);
      switch((signed int)return_value_rcu_reader_state_1)
      {
        case RCU_READER_ACTIVE_CURRENT:
          if(!(cur_snap_readers == ((struct cds_list_head *)NULL)))
          {
            cds_list_move(&index->node, cur_snap_readers);
            goto __CPROVER_DUMP_L7;
          }

        case RCU_READER_INACTIVE:
          cds_list_move(&index->node, qsreaders);
        case RCU_READER_ACTIVE_OLD:

        default:
        {

        __CPROVER_DUMP_L7:
          ;
          index = tmp;
          tmp = (struct rcu_reader_memb *)((char *)index->node.next - (signed long int)(unsigned long int)&((struct rcu_reader_memb *)0)->node);
        }
      }
    }
    signed int return_value_cds_list_empty_3;
    return_value_cds_list_empty_3=cds_list_empty(input_readers);
    if(!(return_value_cds_list_empty_3 == 0))
    {
      if(wait_loops >= 100u)
      {
        smp_mb_master();
        signed int _v;
        *((volatile signed int *)&(*(&rcu_gp_memb.futex))) = 0;
        tmp_statement_expression_2 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
        _v = tmp_statement_expression_2;
        asm("" :  :  : "memory");
        _v = _v;
      }

      break;
    }

    else
      if(wait_loops >= 100u)
        wait_gp();

      else
      {
        mutex_unlock(&rcu_registry_lock);
        asm("rep; nop" :  :  : "memory");
        mutex_lock(&rcu_registry_lock);
      }
  }
}

// wait_gp
// file urcu.c line 232
static void wait_gp(void)
{
  smp_mb_master();
  mutex_unlock(&rcu_registry_lock);
  volatile signed int tmp_statement_expression_1;
  asm("" :  :  : "memory");
  tmp_statement_expression_1 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
  signed int return_value_futex_async_2;
  if(tmp_statement_expression_1 == -1)
    do
    {
      return_value_futex_async_2=futex_async_link1(&rcu_gp_memb.futex, 0, -1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
      if(return_value_futex_async_2 == 0)
        break;

      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      switch(*return_value___errno_location_3)
      {
        case 11:
          goto end;
        case 4:
          break;
        default:
          do
          {
            signed int *return_value___errno_location_4;
            return_value___errno_location_4=__errno_location();
            char *return_value_strerror_5;
            return_value_strerror_5=strerror(*return_value___errno_location_4);
            fprintf(stderr, "(urcu.c:%s@%u) Unrecoverable error: %s\n", (const void *)"wait_gp", 255, return_value_strerror_5);
            abort();
          }
          while((_Bool)0);
      }
    }
    while((_Bool)1);


end:
  ;
  mutex_lock(&rcu_registry_lock);
}

// wait_thread
// file ../../tests/common/api.h line 200
static void * wait_thread(unsigned long int tid)
{
  signed int i;
  void *vp;
  i = 0;
  for( ; !(i >= 128); i = i + 1)
    if(__thread_id_map[(signed long int)i] == tid)
      break;

  if(i >= 128)
  {
    fprintf(stderr, "wait_thread: bad tid = %lu(%#lx)\n", (unsigned long int)tid, (unsigned long int)tid);
    exit(-1);
  }

  signed int return_value_pthread_join_1;
  return_value_pthread_join_1=pthread_join(tid, &vp);
  if(!(return_value_pthread_join_1 == 0))
  {
    perror("wait_thread:pthread_join");
    exit(-1);
  }

  __thread_id_map[(signed long int)i] = (unsigned long int)0;
  return vp;
}

// wake_call_rcu_thread
// file urcu-call-rcu-impl.h line 674
static void wake_call_rcu_thread(struct call_rcu_data *crdp)
{
  if((1ul & crdp->flags) == 0ul)
    call_rcu_wake_up(crdp);

}

// wake_up_defer
// file urcu-defer-impl.h line 153
static void wake_up_defer(void)
{
  volatile signed int tmp_statement_expression_5;
  asm("" :  :  : "memory");
  tmp_statement_expression_5 = *((volatile signed int *)&(*(&defer_thread_futex)));
  volatile signed int tmp_statement_expression_1;
  if(tmp_statement_expression_5 == -1)
  {
    signed int _v;
    *((volatile signed int *)&(*(&defer_thread_futex))) = 0;
    tmp_statement_expression_1 = *((volatile signed int *)&(*(&defer_thread_futex)));
    _v = tmp_statement_expression_1;
    asm("" :  :  : "memory");
    _v = _v;
    signed int return_value_futex_noasync_4;
    return_value_futex_noasync_4=futex_noasync(&defer_thread_futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(!(return_value_futex_noasync_4 >= 0))
      do
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        fprintf(stderr, "(urcu-defer-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"wake_up_defer", 159, return_value_strerror_3);
        abort();
      }
      while((_Bool)0);

  }

}

// wake_up_gp
// file ../../urcu/static/urcu.h line 158
static inline void wake_up_gp(void)
{
  volatile signed int tmp_statement_expression_2;
  asm("" :  :  : "memory");
  tmp_statement_expression_2 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
  volatile signed int tmp_statement_expression_1;
  if(tmp_statement_expression_2 == -1)
  {
    signed int _v;
    *((volatile signed int *)&(*(&rcu_gp_memb.futex))) = 0;
    tmp_statement_expression_1 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
    _v = tmp_statement_expression_1;
    asm("" :  :  : "memory");
    _v = _v;
    futex_async(&rcu_gp_memb.futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
  }

}

// wake_up_gp_link1
// file urcu/static/urcu.h line 158
static inline void wake_up_gp_link1(void)
{
  volatile signed int tmp_statement_expression_2_link1;
  asm("" :  :  : "memory");
  tmp_statement_expression_2_link1 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
  volatile signed int tmp_statement_expression_1_link1;
  if(tmp_statement_expression_2_link1 == -1)
  {
    signed int _v_link1;
    *((volatile signed int *)&(*(&rcu_gp_memb.futex))) = 0;
    tmp_statement_expression_1_link1 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
    _v_link1 = tmp_statement_expression_1_link1;
    asm("" :  :  : "memory");
    _v_link1 = _v_link1;
    futex_async_link1(&rcu_gp_memb.futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
  }

}

