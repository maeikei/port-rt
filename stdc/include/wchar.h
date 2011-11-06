/*
 * wchar.h
 *
 */

#ifndef	_CLANG_PORT_WCHAR_H_
#define	_CLANG_PORT_WCHAR_H_

#include <_clang_port.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <time.h>

typedef int                     wint_t;
typedef struct { int  dummy; }  mbstate_t;
#define  WCHAR_MAX   INT_MAX
#define  WCHAR_MIN   INT_MIN
#define  WEOF        ((wint_t)(-1))


__BEGIN_DECLS



/*
 Formatted wide character input/output functions
 */
int fwprintf(FILE * restrict stream, const wchar_t * restrict format, ...);
int fwscanf(FILE * restrict stream, const wchar_t * restrict format, ...);
int swprintf(wchar_t * restrict s, size_t n, const wchar_t * restrict format, ...);
int swscanf(const wchar_t * restrict s, const wchar_t * restrict format, ...);
int vfwprintf(FILE * restrict stream, const wchar_t * restrict format, va_list arg);
int vfwscanf(FILE * restrict stream, const wchar_t * restrict format, va_list arg);
int vswprintf(wchar_t * restrict s, size_t n, const wchar_t * restrict format, va_list arg);
int vswscanf(const wchar_t * restrict s, const wchar_t * restrict format, va_list arg);
int vwprintf(const wchar_t * restrict format, va_list arg);
int vwscanf(const wchar_t * restrict format, va_list arg);
int wprintf(const wchar_t * restrict format, ...);
int wscanf(const wchar_t * restrict format, ...);





/*
 Wide character input/output functions
 */
wint_t fgetwc(FILE *stream);
wchar_t *fgetws(wchar_t * restrict s, int n, FILE * restrict stream);
wint_t fputwc(wchar_t c, FILE *stream);
int fputws(const wchar_t * restrict s, FILE * restrict stream);
int fwide(FILE *stream, int mode);
wint_t getwc(FILE *stream);
wint_t getwchar(void);
wint_t putwc(wchar_t c, FILE *stream);
wint_t putwchar(wchar_t c);
wint_t ungetwc(wint_t c, FILE *stream);







/*
 Generalwide string utilities
 */
double wcstod(const wchar_t * restrict nptr, wchar_t ** restrict endptr); 
float wcstof(const wchar_t * restrict nptr, wchar_t ** restrict endptr); 
long double wcstold(const wchar_t * restrict nptr, wchar_t ** restrict endptr);
long int wcstol( const wchar_t * restrict nptr, wchar_t ** restrict endptr, int base); 
long long int wcstoll( const wchar_t * restrict nptr, wchar_t ** restrict endptr, int base); 
unsigned long int wcstoul( const wchar_t * restrict nptr, wchar_t ** restrict endptr, int base); 
unsigned long long int wcstoull( const wchar_t * restrict nptr, wchar_t ** restrict endptr, int base);



/*
 Wide string copying functions
 */
wchar_t *wcscpy(wchar_t * restrict s1, const wchar_t * restrict s2);
wchar_t *wcsncpy(wchar_t * restrict s1, const wchar_t * restrict s2, size_t n);
wchar_t *wmemcpy(wchar_t * restrict s1, const wchar_t * restrict s2, size_t n);
wchar_t *wmemmove(wchar_t *s1, const wchar_t *s2, size_t n); 


/*
 Wide string concatenation functions
 */
wchar_t *wcscat(wchar_t * restrict s1, const wchar_t * restrict s2);
wchar_t *wcsncat(wchar_t * restrict s1, const wchar_t * restrict s2, size_t n);

/*
 Wide string comparison functions
 */
int wcscmp(const wchar_t *s1, const wchar_t *s2);
int wcscoll(const wchar_t *s1, const wchar_t *s2);
int wcsncmp(const wchar_t *s1, const wchar_t *s2, size_t n);
size_t wcsxfrm(wchar_t * restrict s1, const wchar_t * restrict s2, size_t n);
int wmemcmp(const wchar_t *s1, const wchar_t *s2, size_t n);

/*
 Wide string search functions
 */
wchar_t *wcschr(const wchar_t *s, wchar_t c);
size_t wcscspn(const wchar_t *s1, const wchar_t *s2);
wchar_t *wcspbrk(const wchar_t *s1, const wchar_t *s2);
wchar_t *wcsrchr(const wchar_t *s, wchar_t c);
size_t wcsspn(const wchar_t *s1, const wchar_t *s2);
wchar_t *wcsstr(const wchar_t *s1, const wchar_t *s2);
wchar_t *wcstok(wchar_t * restrict s1, const wchar_t * restrict s2, wchar_t ** restrict ptr);
wchar_t *wmemchr(const wchar_t *s, wchar_t c, size_t n);

/*
 Miscellaneousfunctions
 */
size_t wcslen(const wchar_t *s);
wchar_t *wmemset(wchar_t *s, wchar_t c, size_t n);

/*
 Wide character time conversion functions
 */
size_t wcsftime(wchar_t * restrict s, size_t maxsize, const wchar_t * restrict format, const struct tm * restrict timeptr);


/*
 Single-byte/widecharacter conversion functions
 */
wint_t btowc(int c);
int wctob(wint_t c);

/*
 Conversion state functions
 */
int mbsinit(const mbstate_t *ps);

/*
 Restartablemultibyte/wide character conversion functions
 */
size_t mbrlen(const char * restrict s, size_t n, mbstate_t * restrict ps);
size_t mbrtowc(wchar_t * restrict pwc, const char * restrict s, size_t n, mbstate_t * restrict ps);
size_t wcrtomb(char * restrict s, wchar_t wc, mbstate_t * restrict ps);

/*
 Restartablemultibyte/wide string conversion functions
 */
size_t mbsrtowcs(wchar_t * restrict dst, const char ** restrict src, size_t len, mbstate_t * restrict ps);
size_t wcsrtombs(char * restrict dst, const wchar_t ** restrict src, size_t len, mbstate_t * restrict ps);



__END_DECLS


#endif /* _CLANG_PORT_WCHAR_H_ */

