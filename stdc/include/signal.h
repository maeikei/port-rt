/* 
 * signal.h
 *
 */

#ifndef	_CLANG_PORT_SIGNAL_H_
#define	_CLANG_PORT_SIGNAL_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#endif // __IMPL_CLANG_PORT_API__



	
#ifndef __IMPL_CLANG_PORT_API__
#define SIG_DFL 0
#define SIG_ERR 1
#define SIG_IGN 2
#define SIGABRT 3
#define SIGFPE 4
#define SIGILL 5
#define SIGINT 6
#define SIGSEGV 7
#define SIGTERM 8
#endif // __IMPL_CLANG_PORT_API__

typedef int CLANG_SELF_TYPE(sig_atomic_t);
typedef void (*CLANG_SELF_TYPE(sig_handler))(int) ;


#ifndef __IMPL_CLANG_PORT_API__
typedef CLANG_SELF_TYPE(sig_atomic_t) sig_atomic_t;
typedef CLANG_SELF_TYPE(sig_handler) sig_handler;
#endif // __IMPL_CLANG_PORT_API__

__BEGIN_DECLS
/*
 Specify signal handling
 */
void CLANG_PORT_DECL(signal)(int sig, CLANG_SELF_TYPE(sig_handler) handler );
int CLANG_PORT_DECL(raise)(int sig);

#ifndef __IMPL_CLANG_PORT_API__
CLANG_PORT_INLINE void signal(int sig, sig_handler handler )
{
	CLANG_PORT_CALL(signal)(sig,handler);
}
CLANG_PORT_INLINE int raise(int sig)
{
	return CLANG_PORT_CALL(raise)(sig);
}
#endif // __IMPL_CLANG_PORT_API__


__END_DECLS


#endif	/* _CLANG_PORT_SIGNAL_H_ */

