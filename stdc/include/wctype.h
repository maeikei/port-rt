/* 
 * wctype.h
 *
 */

#ifndef _CLANG_PORT_WCTYPE_H_
#define _CLANG_PORT_WCTYPE_H_



#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#include <stdc/include/wchar.h>
#include <stdc/include/stddef.h>
#include <stdc/include/stdarg.h>
#include <stdc/include/time.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#include <wchar.h>
#include <stddef.h>
#include <stdarg.h>
#include <time.h>
#endif // __IMPL_CLANG_PORT_API__


__BEGIN_DECLS


	
typedef enum {
	WC_TYPE_INVALID = 0,
	WC_TYPE_ALNUM,
	WC_TYPE_ALPHA,
	WC_TYPE_BLANK,
	WC_TYPE_CNTRL,
	WC_TYPE_DIGIT,
	WC_TYPE_GRAPH,
	WC_TYPE_LOWER,
	WC_TYPE_PRINT,
	WC_TYPE_PUNCT,
	WC_TYPE_SPACE,
	WC_TYPE_UPPER,
	WC_TYPE_XDIGIT,
	WC_TYPE_MAX
} wctype_t;
	
extern int               iswalnum(wint_t);
extern int               iswalpha(wint_t);
extern int               iswcntrl(wint_t);
extern int               iswdigit(wint_t);
extern int               iswgraph(wint_t);
extern int               iswlower(wint_t);
extern int               iswprint(wint_t);
extern int               iswpunct(wint_t);
extern int               iswspace(wint_t);
extern int               iswupper(wint_t);
extern int               iswxdigit(wint_t);
extern int               iswctype(wint_t, wctype_t);

__END_DECLS

#endif	/* _CLANG_PORT_WCTYPE_H_ */

