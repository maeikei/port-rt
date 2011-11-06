/*
 * threads.h
 *
 *
 */

#ifndef _CLANG_PORT_THREADS_H_
#define _CLANG_PORT_THREADS_H_

#include <_clang_port.h>
#include <time.h>
#include <stdnoreturn.h>


#ifdef __STDC_NO_THREADS__
#undef __STDC_NO_THREADS__
#endif


#define thread_local _Thread_local


__BEGIN_DECLS

typedef long cnd_t;
typedef long thrd_t;
typedef long tss_t;
typedef long mtx_t;
typedef void (*tss_dtor_t)(void*);
typedef int (*thrd_start_t)(void*);
typedef long once_flag;


enum
{
	mtx_plain = 0,
	mtx_recursive,
	mtx_timed,
};

enum
{
	thrd_success = 0,
	thrd_timedout,
	thrd_busy,
	thrd_error,
	thrd_nomem,
};

#define ONCE_FLAG_INIT 0

/*
 Initialization functions
 */
void call_once(once_flag *flag, void (*func)(void));

/*
 Condition variable functions
 */
int cnd_init(cnd_t *cond);
void cnd_destroy(cnd_t *cond);
int cnd_broadcast(cnd_t *cond);
int cnd_signal(cnd_t *cond);
int cnd_timedwait(cnd_t *restrict cond, mtx_t *restrict mtx,const struct timespec *restrict ts);
int cnd_wait(cnd_t *cond, mtx_t *mtx);
/*
 Mutex functions
 */
int mtx_init(mtx_t *mtx, int type);
void mtx_destroy(mtx_t *mtx);
int mtx_lock(mtx_t *mtx);
int mtx_timedlock(mtx_t *restrict mtx,const struct timespec *restrict ts);
int mtx_trylock(mtx_t *mtx);
int mtx_unlock(mtx_t *mtx);
/*
 Thread functions
 */
int thrd_create(thrd_t *thr, thrd_start_t func,void *arg);
thrd_t thrd_current(void);
int thrd_detach(thrd_t thr);
int thrd_equal(thrd_t thr0, thrd_t thr1);
_Noreturn void thrd_exit(int res);
int thrd_join(thrd_t thr, int *res);
int thrd_sleep(const struct timespec *duration,struct timespec *remaining);
void thrd_yield(void);
/*
 Thread-speciﬁc storage functions
 */
int tss_create(tss_t *key, tss_dtor_t dtor);
void tss_delete(tss_t key);
void *tss_get(tss_t key);
int tss_set(tss_t key, void *val);



__END_DECLS


#endif /* _CLANG_PORT_THREADS_H_ */
