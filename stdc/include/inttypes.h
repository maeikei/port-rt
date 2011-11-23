/* 
 * inttypes.h
 *
 */

#ifndef _CLANG_PORT_INTTYPES_H_
#define _CLANG_PORT_INTTYPES_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#endif // __IMPL_CLANG_PORT_API__

#include <stdint.h>
#include <stddef.h>

typedef struct {
	intmax_t quot;		/* quotient */
	intmax_t rem;		/* remainder */
} imaxdiv_t;


__BEGIN_DECLS

intmax_t	imaxabs(intmax_t);
imaxdiv_t	imaxdiv(intmax_t, intmax_t);
intmax_t	strtoimax(const char *, char **, int);
uintmax_t	strtoumax(const char *, char **, int);

intmax_t	strntoimax(const char *nptr, char **endptr, int base, size_t n);
uintmax_t	strntoumax(const char *nptr, char **endptr, int base, size_t n);


__END_DECLS

#endif /* _CLANG_PORT_INTTYPES_H_ */
