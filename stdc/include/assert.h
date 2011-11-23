/* 
 * assert.h
 *
 */
#ifndef _CLANG_PORT_ASSERT_H
#define _CLANG_PORT_ASSERT_H

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#endif // __IMPL_CLANG_PORT_API__

#undef assert
#undef static_assert


#define static_assert _Static_assert




#ifdef NDEBUG
# define assert(e)	((void)0)
#else /* debugging enabled */
# define	assert(e)	((e) ? (void)0 : CLANG_PORT_CALL_FPTR(assert)(__FILE__, __LINE__, __func__, #e))
#endif	/* NDEBUG */

__BEGIN_DECLS

void CLANG_PORT_DECL(assert)(const char *, int, const char *, const char *);

__END_DECLS

#endif /* _CLANG_PORT_ASSERT_H */
