// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-CMUnitTest
// file /usr/include/cmocka.h line 1892
struct CMUnitTest;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-parm
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 27
struct parm;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

// _assert_int_equal
// file /usr/include/cmocka.h line 1996
void _assert_int_equal(const unsigned long int, const unsigned long int, const char *, const signed int);
// _assert_true
// file /usr/include/cmocka.h line 1987
void _assert_true(const unsigned long int, const char *, const char *, const signed int);
// _cmocka_run_group_tests
// file /usr/include/cmocka.h line 2045
signed int _cmocka_run_group_tests(const char *, struct CMUnitTest *, const unsigned long int, signed int (*)(void **), signed int (*)(void **));
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getresuid
// file /usr/include/unistd.h line 733
extern signed int getresuid(unsigned int *, unsigned int *, unsigned int *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// pthread_attr_destroy
// file /usr/include/pthread.h line 292
extern signed int pthread_attr_destroy(union pthread_attr_t *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// setreuid
// file /usr/include/unistd.h line 705
extern signed int setreuid(unsigned int, unsigned int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// sync_setreuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 80
static void * sync_setreuid(void *arg);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// syscall_setreuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 34
static void * syscall_setreuid(void *arg);
// test_sync_setreuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 99
static void test_sync_setreuid(void **state);

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

struct CMUnitTest
{
  // name
  const char *name;
  // test_func
  void (*test_func)(void **);
  // setup_func
  signed int (*setup_func)(void **);
  // teardown_func
  signed int (*teardown_func)(void **);
};

struct parm
{
  // id
  signed int id;
  // ready
  signed int ready;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};


// msg_mutex
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 32
union anonymous msg_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };

// main
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 146
signed int main(void)
{
  signed int rc;
  struct CMUnitTest thread_tests[1l] = { { .name="test_sync_setreuid", .test_func=test_sync_setreuid, .setup_func=(signed int (*)(void **))(void *)0,
    .teardown_func=(signed int (*)(void **))(void *)0 } };
  rc=_cmocka_run_group_tests("thread_tests", thread_tests, sizeof(struct CMUnitTest [1l]) /*32ul*/  / sizeof(struct CMUnitTest) /*32ul*/ , (signed int (*)(void **))(void *)0, (signed int (*)(void **))(void *)0);
  return rc;
}

// sync_setreuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 80
static void * sync_setreuid(void *arg)
{
  struct parm *p = (struct parm *)arg;
  unsigned int u;
  syscall_setreuid(arg);
  p->ready = 1;
  pthread_mutex_lock(&msg_mutex);
  u=geteuid();
  _assert_int_equal((unsigned long int)u, (unsigned long int)42, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 92);
  pthread_mutex_unlock(&msg_mutex);
  return (void *)0;
}

// syscall_setreuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 34
static void * syscall_setreuid(void *arg)
{
  signed long int rc;
  unsigned int ru;
  (void)arg;
  ru = (unsigned int)0;
  for( ; !(ru >= 2048u); ru = ru + 1u)
  {
    unsigned int ruid;
    unsigned int euid;
    unsigned int suid;
    rc=syscall((signed long int)113, -1, ru);
    _assert_int_equal((unsigned long int)rc, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 46);
    suid = (unsigned int)-1;
    euid = suid;
    ruid = euid;
    signed int return_value_getresuid_1;
    return_value_getresuid_1=getresuid(&ruid, &euid, &suid);
    rc = (signed long int)return_value_getresuid_1;
    _assert_int_equal((unsigned long int)ruid, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 51);
    _assert_int_equal((unsigned long int)euid, (unsigned long int)ru, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 52);
    _assert_int_equal((unsigned long int)suid, (unsigned long int)ru, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 53);
    ruid=getuid();
    _assert_int_equal((unsigned long int)ruid, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 56);
    euid=geteuid();
    _assert_int_equal((unsigned long int)euid, (unsigned long int)ru, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 58);
    rc=syscall((signed long int)113, -1, 0);
    _assert_int_equal((unsigned long int)rc, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 61);
    suid = (unsigned int)-1;
    euid = suid;
    ruid = euid;
    signed int return_value_getresuid_2;
    return_value_getresuid_2=getresuid(&ruid, &euid, &suid);
    rc = (signed long int)return_value_getresuid_2;
    _assert_int_equal((unsigned long int)ruid, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 66);
    _assert_int_equal((unsigned long int)euid, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 67);
    _assert_int_equal((unsigned long int)suid, (unsigned long int)ru, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 68);
    ruid=getuid();
    _assert_int_equal((unsigned long int)ruid, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 72);
    euid=geteuid();
    _assert_int_equal((unsigned long int)euid, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 74);
  }
  return (void *)0;
}

// test_sync_setreuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c line 99
static void test_sync_setreuid(void **state)
{
  union pthread_attr_t pthread_custom_attr;
  unsigned long int threads[10l];
  struct parm *p;
  signed int rc;
  signed int i;
  (void)state;
  pthread_attr_init(&pthread_custom_attr);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)10 * sizeof(struct parm) /*8ul*/ );
  p = (struct parm *)return_value_malloc_1;
  _assert_true((unsigned long int)p, "p", "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 112);
  pthread_mutex_lock(&msg_mutex);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
  {
    (p + (signed long int)i)->id = i;
    (p + (signed long int)i)->ready = 0;
    pthread_create(&threads[(signed long int)i], &pthread_custom_attr, sync_setreuid, (void *)&p[(signed long int)i]);
  }
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    while(!((p + (signed long int)i)->ready == 1))
      sleep((unsigned int)1);
  rc=setreuid((unsigned int)-1, (unsigned int)42);
  _assert_int_equal((unsigned long int)rc, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_sync_setreuid.c", 134);
  pthread_mutex_unlock(&msg_mutex);
  i = 0;
  for( ; !(i >= 10); i = i + 1)
    pthread_join(threads[(signed long int)i], (void **)(void *)0);
  pthread_attr_destroy(&pthread_custom_attr);
  free((void *)p);
}

