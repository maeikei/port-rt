/* 
 * assert.h
 *
 */
#ifndef _CLANG_PORT_ASSERT_H
#define _CLANG_PORT_ASSERT_H

#include <_clang_port.h>

#undef assert
#undef static_assert


#define static_assert _Static_assert




#ifdef NDEBUG
# define assert(e)	((void)0)
#else /* debugging enabled */
# define	assert(e)	((e) ? (void)0 : __assert2(__FILE__, __LINE__, __func__, #e))
#endif	/* NDEBUG */

__BEGIN_DECLS

void CLANG_PORT_DECL(__assert2)(const char *, int, const char *, const char *);

__END_DECLS

#endif /* _CLANG_PORT_ASSERT_H */
