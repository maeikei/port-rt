/* 
 * setjmp.h
 *
 */

#ifndef _CLANG_PORT_SETJMP_H_
#define _CLANG_PORT_SETJMP_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#endif // __IMPL_CLANG_PORT_API__


typedef long sigjmp_buf[_JBLEN + 1];
typedef long jmp_buf[_JBLEN];


__BEGIN_DECLS

int     _setjmp(jmp_buf);
void    _longjmp(jmp_buf, int);
void    longjmperror(void);

int     setjmp(jmp_buf);
void    longjmp(jmp_buf, int);

int     sigsetjmp(sigjmp_buf, int);
void    siglongjmp(sigjmp_buf, int);

__END_DECLS


#endif	/* _CLANG_PORT_SETJMP_H_ */

