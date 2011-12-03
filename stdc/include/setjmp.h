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


typedef long CLANG_SELF_TYPE(jmp_buf)[64];

#ifndef __IMPL_CLANG_PORT_API__
typedef CLANG_SELF_TYPE(jmp_buf) jmp_buf;
#endif // __IMPL_CLANG_PORT_API__


__BEGIN_DECLS


int CLANG_PORT_DECL(setjmp)(CLANG_SELF_TYPE(jmp_buf) j);
void CLANG_PORT_DECL(longjmp)(CLANG_SELF_TYPE(jmp_buf) j, int offset);


#ifndef __IMPL_CLANG_PORT_API__
CLANG_PORT_INLINE int setjmp(jmp_buf j)
{
	return CLANG_PORT_CALL(setjmp)(j);
}
CLANG_PORT_INLINE void longjmp(jmp_buf j, int offset);
{
	CLANG_PORT_CALL(longjmp)(j,offset);
}
#endif // __IMPL_CLANG_PORT_API__


__END_DECLS


#endif	/* _CLANG_PORT_SETJMP_H_ */

