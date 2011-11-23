/*
 * stdnoreturn.h
 *
 *
 */

#ifndef _CLANG_PORT_STDNORETURN_H_
#define _CLANG_PORT_STDNORETURN_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#endif // __IMPL_CLANG_PORT_API__


#define noreturn _Noreturn

__BEGIN_DECLS


__END_DECLS


#endif /* _CLANG_PORT_STDNORETURN_H_ */
