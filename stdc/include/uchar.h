/*
 * uchar.h
 *
 *
 */

#ifndef _CLANG_PORT_UCHAR_H_
#define _CLANG_PORT_UCHAR_H_

#include <_clang_port.h>
#include <stdint.h>

__BEGIN_DECLS

typedef char16_t uint_least16_t;
typedef char32_t uint_least32_t;

/*
 Restartable multibyte/wide character conversion functions
 */
size_t mbrtoc16(char16_t * restrict pc16,
				const char * restrict s, size_t n,
				mbstate_t * restrict ps);
size_t c16rtomb(char * restrict s, char16_t c16,
				mbstate_t * restrict ps);
size_t mbrtoc32(char32_t * restrict pc32,
				const char * restrict s, size_t n,
				mbstate_t * restrict ps);
size_t c32rtomb(char * restrict s, char32_t c32,
				mbstate_t * restrict ps);


__END_DECLS


#endif /* _CLANG_PORT_UCHAR_H_ */
