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
} CLANG_SELF_TYPE(imaxdiv_t);




__BEGIN_DECLS

extern intmax_t	CLANG_PORT_DECL(imaxabs)(intmax_t j );
extern CLANG_SELF_TYPE(imaxdiv_t) CLANG_PORT_DECL(imaxdiv)(intmax_t numer, intmax_t denom);
extern intmax_t	CLANG_PORT_DECL(strtoimax)(const char *, char **, int);
extern uintmax_t CLANG_PORT_DECL(strtoumax)(const char *, char **, int);

extern intmax_t	CLANG_PORT_DECL(strntoimax)(const char *nptr, char **endptr, int base, size_t n);
extern uintmax_t CLANG_PORT_DECL(strntoumax)(const char *nptr, char **endptr, int base, size_t n);


#ifndef __IMPL_CLANG_PORT_API__
typedef CLANG_SELF_TYPE(imaxdiv_t) imaxdiv_t;

CLANG_PORT_INLINE intmax_t imaxabs(intmax_t j)
{
	return CLANG_PORT_CALL(imaxabs)(j);
}
CLANG_PORT_INLINE imaxdiv_t imaxdiv(intmax_t numer, intmax_t denom);
{
	return CLANG_PORT_CALL(imaxdiv)(numer,denom);
}
CLANG_PORT_INLINE intmax_t strtoimax(const char *nptr, char **endptr, int base)
{
	return CLANG_PORT_CALL(strtoimax)(nptr,endptr,base);
}
CLANG_PORT_INLINE uintmax_t strtoumax(const char *nptr, char **endptr, int base)
{
	return CLANG_PORT_CALL(strtoumax)(nptr,endptr,base);
}

CLANG_PORT_INLINE intmax_t strntoimax(const char *nptr, char **endptr, int base, size_t n)
{
	return CLANG_PORT_CALL(strntoimax)(nptr,endptr,base);
}
CLANG_PORT_INLINE uintmax_t strntoumax(const char *nptr, char **endptr, int base, size_t n)
{
	return CLANG_PORT_CALL(strntoumax)(nptr,endptr,base);
}




#endif // __IMPL_CLANG_PORT_API__



__END_DECLS

#endif /* _CLANG_PORT_INTTYPES_H_ */
