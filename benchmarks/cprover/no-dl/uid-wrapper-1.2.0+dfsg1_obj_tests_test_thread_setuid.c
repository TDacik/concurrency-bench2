// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
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

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

#ifndef NULL
#define NULL ((void*)0)
#endif

// _assert_int_equal
// file /usr/include/cmocka.h line 1996
void _assert_int_equal(const unsigned long int, const unsigned long int, const char *, const signed int);
// _cmocka_run_group_tests
// file /usr/include/cmocka.h line 2045
signed int _cmocka_run_group_tests(const char *, struct CMUnitTest *, const unsigned long int, signed int (*)(void **), signed int (*)(void **));
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
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
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// test_real_sync_setuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 58
static void test_real_sync_setuid(void **state);
// uwrap_getuid_sync
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 31
static void * uwrap_getuid_sync(void *arg);
// uwrap_setuid_sync
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 46
static void * uwrap_setuid_sync(void *arg);

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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};


// sleep_mutex
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 29
static union anonymous sleep_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// wait_mutex
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 28
static union anonymous wait_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };

// main
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 91
signed int main(void)
{
  signed int rc;
  struct CMUnitTest thread_tests[1l] = { { .name="test_real_sync_setuid", .test_func=test_real_sync_setuid, .setup_func=(signed int (*)(void **))(void *)0,
    .teardown_func=(signed int (*)(void **))(void *)0 } };
  rc=_cmocka_run_group_tests("thread_tests", thread_tests, sizeof(struct CMUnitTest [1l]) /*32ul*/  / sizeof(struct CMUnitTest) /*32ul*/ , (signed int (*)(void **))(void *)0, (signed int (*)(void **))(void *)0);
  return rc;
}

// test_real_sync_setuid
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 58
static void test_real_sync_setuid(void **state)
{
  unsigned long int threads[2l];
  unsigned int u;
  (void)state;
  pthread_mutex_lock(&wait_mutex);
  pthread_mutex_lock(&sleep_mutex);
  pthread_create(&threads[(signed long int)0], (const union pthread_attr_t *)(void *)0, uwrap_getuid_sync, (void *)0);
  pthread_mutex_lock(&sleep_mutex);
  pthread_create(&threads[(signed long int)1], (const union pthread_attr_t *)(void *)0, uwrap_setuid_sync, (void *)0);
  pthread_join(threads[(signed long int)1], (void **)(void *)0);
  pthread_mutex_unlock(&wait_mutex);
  pthread_join(threads[(signed long int)0], (void **)(void *)0);
  u=getuid();
  _assert_int_equal((unsigned long int)u, (unsigned long int)888, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c", 88);
}

// uwrap_getuid_sync
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 31
static void * uwrap_getuid_sync(void *arg)
{
  unsigned int u;
  (void)arg;
  pthread_mutex_unlock(&sleep_mutex);
  pthread_mutex_lock(&wait_mutex);
  u=getuid();
  _assert_int_equal((unsigned long int)u, (unsigned long int)888, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c", 41);
  return (void *)0;
}

// uwrap_setuid_sync
// file /srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c line 46
static void * uwrap_setuid_sync(void *arg)
{
  signed int rc;
  (void)arg;
  rc=setuid((unsigned int)888);
  _assert_int_equal((unsigned long int)rc, (unsigned long int)0, "/srv/jenkins-slave/workspace/sid-goto-cc-uid-wrapper/uid-wrapper-1.2.0+dfsg1/tests/test_thread_setuid.c", 53);
  return (void *)0;
}

