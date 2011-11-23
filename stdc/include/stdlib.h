/*
 * stdlib.h
 *
 */

#ifndef _CLANG_PORT_STDLIB_H_
#define _CLANG_PORT_STDLIB_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#include <stdc/include/stddef.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#include <stddef.h>
#endif // __IMPL_CLANG_PORT_API__

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define RAND_MAX 0x7fffffff
#define MB_CUR_MAX 4


__BEGIN_DECLS

typedef struct {
    int  quot;
    int  rem;
} div_t;


typedef struct {
    long int  quot;
    long int  rem;
} ldiv_t;

typedef struct {
    long long int  quot;
    long long int  rem;
} lldiv_t;



/*
 Numeric conversion functions
 */
double atof(const char *nptr);
int atoi(const char *nptr);
long int atol(const char *nptr);
long long int atoll(const char *nptr);
double strtod(const char * restrict nptr,char ** restrict endptr);
float strtof(const char * restrict nptr,char ** restrict endptr);
long double strtold(const char * restrict nptr,char ** restrict endptr);
long int strtol(const char * restrict nptr,	char ** restrict endptr,int base);
long long int strtoll(const char * restrict nptr, char ** restrict endptr,int base);
unsigned long int strtoul(const char * restrict nptr,char ** restrict endptr,int base);
unsigned long long int strtoull(const char * restrict nptr,char ** restrict endptr,int base);

/*
 Pseudo-random sequence generation functions
 */
int rand(void);
void srand(unsigned int seed);

/*
 Memory management functions
 */
void *aligned_alloc(size_t alignment, size_t size);
void *calloc(size_t nmemb, size_t size);
void free(void *ptr);
void *malloc(size_t size);
void *realloc(void *ptr, size_t size);


/*
 Communication with the environment
 */
_Noreturn void abort(void);
int atexit(void (*func)(void));
int at_quick_exit(void (*func)(void));
_Noreturn void exit(int status);
_Noreturn void _Exit(int status);
char *getenv(const char *name);
_Noreturn void quick_exit(int status);
int system(const char *string);



/*
 Searching and sorting utilities
 */
void *bsearch(const void *key, const void *base,size_t nmemb, size_t size,int (*compar)(const void *, const void *));
void qsort(void *base, size_t nmemb, size_t size,int (*compar)(const void *, const void *));

/*
 Integer arithmetic functions
 */
int abs(int j);
long int labs(long int j);
long long int llabs(long long int j);
div_t div(int numer, int denom);
ldiv_t ldiv(long int numer, long int denom);
lldiv_t lldiv(long long int numer, long long int denom);


/*
 Multibyte/wide character conversion functions
 */
int mblen(const char *s, size_t n);
int mbtowc(wchar_t * restrict pwc,const char * restrict s,size_t n);
int wctomb(char *s, wchar_t wc);

/*
 Multibyte/wide string conversion functions
 */
size_t mbstowcs(wchar_t * restrict pwcs,const char * restrict s,size_t n);
size_t wcstombs(char * restrict s,const wchar_t * restrict pwcs,size_t n);


__END_DECLS

#endif	/* Not _CLANG_PORT_STDLIB_H_ */

