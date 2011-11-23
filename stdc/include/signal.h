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


__BEGIN_DECLS

typedef int sig_atomic_t;
	

#define SIG_DFL 0
#define SIG_ERR 1
#define SIG_IGN 2
#define SIGABRT 3
#define SIGFPE 4
#define SIGILL 5
#define SIGINT 6
#define SIGSEGV 7
#define SIGTERM 8

typedef void (*sig_handler)(int) ;

/*
 Specify signal handling
 */
void signal(int sig, sig_handler handler );
int raise(int sig);

__END_DECLS


#endif	/* _CLANG_PORT_SIGNAL_H_ */

