/* 
 * locale.h
 *
 */

#ifndef	_CLANG_PORT_LOCALE_H_
#define	_CLANG_PORT_LOCALE_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#endif // __IMPL_CLANG_PORT_API__

#include <stddef.h>


__BEGIN_DECLS


#ifndef __IMPL_CLANG_PORT_API__

enum {
    LC_CTYPE     = 0,
    LC_NUMERIC   = 1,
    LC_TIME      = 2,
    LC_COLLATE   = 3,
    LC_MONETARY  = 4,
    LC_MESSAGES  = 5,
    LC_ALL       = 6,
    LC_PAPER     = 7,
    LC_NAME      = 8,
    LC_ADDRESS   = 9,
	
    LC_TELEPHONE      = 10,
    LC_MEASUREMENT    = 11,
    LC_IDENTIFICATION = 12
};
#endif // __IMPL_CLANG_PORT_API__



extern char * CLANG_PORT_DECL(setlocale)(int category, const char *locale);


#ifndef __IMPL_CLANG_PORT_API__
CLANG_PORT_INLINE char *setlocale(int category, const char *locale)
{
	return CLANG_PORT_CALL(setlocale)(category,locale);
}
#endif // __IMPL_CLANG_PORT_API__



__END_DECLS


#endif	/* _CLANG_PORT_LOCALE_H_ */

