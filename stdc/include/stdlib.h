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


#ifndef __IMPL_CLANG_PORT_API__
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define RAND_MAX 0x7fffffff
#define MB_CUR_MAX 4
#endif // __IMPL_CLANG_PORT_API__


__BEGIN_DECLS

typedef struct {
    int  quot;
    int  rem;
} CLANG_SELF_TYPE(div_t);


typedef struct {
    long int  quot;
    long int  rem;
} CLANG_SELF_TYPE(ldiv_t);

typedef struct {
    long long int  quot;
    long long int  rem;
} CLANG_SELF_TYPE(lldiv_t);


#ifndef __IMPL_CLANG_PORT_API__
typedef CLANG_SELF_TYPE(div_t) div_t;
typedef CLANG_SELF_TYPE(ldiv_t) ldiv_t;
typedef CLANG_SELF_TYPE(lldiv_t) lldiv_t;
#endif // __IMPL_CLANG_PORT_API__





/*
 Numeric conversion functions
 */
double CLANG_PORT_DECL(atof)(const char *nptr);
int CLANG_PORT_DECL(atoi)(const char *nptr);
long int CLANG_PORT_DECL(atol)(const char *nptr);
long long int CLANG_PORT_DECL(atoll)(const char *nptr);
double CLANG_PORT_DECL(strtod)(const char * restrict nptr,char ** restrict endptr);
float CLANG_PORT_DECL(strtof)(const char * restrict nptr,char ** restrict endptr);
long double CLANG_PORT_DECL(strtold)(const char * restrict nptr,char ** restrict endptr);
long int CLANG_PORT_DECL(strtol)(const char * restrict nptr,	char ** restrict endptr,int base);
long long int CLANG_PORT_DECL(strtoll)(const char * restrict nptr, char ** restrict endptr,int base);
unsigned long int CLANG_PORT_DECL(strtoul)(const char * restrict nptr,char ** restrict endptr,int base);
unsigned long long int CLANG_PORT_DECL(strtoull)(const char * restrict nptr,char ** restrict endptr,int base);
/*
 Pseudo-random sequence generation functions
 */
int CLANG_PORT_DECL(rand)(void);
void CLANG_PORT_DECL(srand)(unsigned int seed);
/*
 Memory management functions
 */
void *CLANG_PORT_DECL(aligned_alloc)(size_t alignment, size_t size);
void *CLANG_PORT_DECL(calloc)(size_t nmemb, size_t size);
void CLANG_PORT_DECL(free)(void *ptr);
void *CLANG_PORT_DECL(malloc)(size_t size);
void *CLANG_PORT_DECL(realloc)(void *ptr, size_t size);
/*
 Communication with the environment
 */
_Noreturn void CLANG_PORT_DECL(abort)(void);
int CLANG_PORT_DECL(atexit)(void (*func)(void));
int CLANG_PORT_DECL(at_quick_exit)(void (*func)(void));
_Noreturn void CLANG_PORT_DECL(exit)(int status);
_Noreturn void CLANG_PORT_DECL(_Exit)(int status);
char *CLANG_PORT_DECL(getenv)(const char *name);
_Noreturn void CLANG_PORT_DECL(quick_exit)(int status);
int CLANG_PORT_DECL(system)(const char *string);
/*
 Searching and sorting utilities
 */
void *CLANG_PORT_DECL(bsearch)(const void *key, const void *base,size_t nmemb, size_t size,int (*compar)(const void *, const void *));
void CLANG_PORT_DECL(qsort)(void *base, size_t nmemb, size_t size,int (*compar)(const void *, const void *));
/*
 Integer arithmetic functions
 */
int CLANG_PORT_DECL(abs)(int j);
long int CLANG_PORT_DECL(labs)(long int j);
long long int CLANG_PORT_DECL(llabs)(long long int j);
CLANG_SELF_TYPE(div_t) CLANG_PORT_DECL(div)(int numer, int denom);
CLANG_SELF_TYPE(ldiv_t) CLANG_PORT_DECL(ldiv)(long int numer, long int denom);
CLANG_SELF_TYPE(lldiv_t) CLANG_PORT_DECL(lldiv)(long long int numer, long long int denom);
/*
 Multibyte/wide character conversion functions
 */
int CLANG_PORT_DECL(mblen)(const char *s, size_t n);
int CLANG_PORT_DECL(mbtowc)(wchar_t * restrict pwc,const char * restrict s,size_t n);
int CLANG_PORT_DECL(wctomb)(char *s, wchar_t wc);
/*
 Multibyte/wide string conversion functions
 */
size_t CLANG_PORT_DECL(mbstowcs)(wchar_t * restrict pwcs,const char * restrict s,size_t n);
size_t CLANG_PORT_DECL(wcstombs)(char * restrict s,const wchar_t * restrict pwcs,size_t n);











#ifndef __IMPL_CLANG_PORT_API__
/*
 Numeric conversion functions
 */
CLANG_PORT_INLINE double atof(const char *nptr)
{
	return CLANG_PORT_CALL(atof)(nptr);
}
CLANG_PORT_INLINE int atoi(const char *nptr)
{
	return CLANG_PORT_CALL(atoi)(nptr);
}
CLANG_PORT_INLINE long int atol(const char *nptr)
{
	return CLANG_PORT_CALL(atol)(nptr);
}
CLANG_PORT_INLINE long long int atoll(const char *nptr)
{
	return CLANG_PORT_CALL(atoll)(nptr);
}
CLANG_PORT_INLINE double strtod(const char * restrict nptr,char ** restrict endptr)
{
	return CLANG_PORT_CALL(strtod)(nptr,endptr);
}
CLANG_PORT_INLINE float strtof(const char * restrict nptr,char ** restrict endptr)
{
	return CLANG_PORT_CALL(strtof)(nptr,endptr);
}
CLANG_PORT_INLINE long double strtold(const char * restrict nptr,char ** restrict endptr)
{
	return CLANG_PORT_CALL(strtold)(nptr,endptr);
}
CLANG_PORT_INLINE long int strtol(const char * restrict nptr,	char ** restrict endptr,int base)
{
	return CLANG_PORT_CALL(strtol)(nptr,endptr,base);
}
CLANG_PORT_INLINE long long int strtoll(const char * restrict nptr, char ** restrict endptr,int base)
{
	return CLANG_PORT_CALL(strtoll)(nptr,endptr,base);
}
CLANG_PORT_INLINE unsigned long int strtoul(const char * restrict nptr,char ** restrict endptr,int base)
{
	return CLANG_PORT_CALL(strtoul)(nptr,endptr,base);
}
CLANG_PORT_INLINE unsigned long long int strtoull(const char * restrict nptr,char ** restrict endptr,int base)
{
	return CLANG_PORT_CALL(strtoull)(nptr,endptr,base);
}

/*
 Pseudo-random sequence generation functions
 */
CLANG_PORT_INLINE int rand(void)
{
	return CLANG_PORT_CALL(rand)();
}
CLANG_PORT_INLINE void srand(unsigned int seed)
{
	return CLANG_PORT_CALL(srand)(seed);
}

/*
 Memory management functions
 */
CLANG_PORT_INLINE void *aligned_alloc(size_t alignment, size_t size)
{
	return CLANG_PORT_CALL(aligned_alloc)(alignment,size);
}
CLANG_PORT_INLINE void *calloc(size_t nmemb, size_t size)
{
	return CLANG_PORT_CALL(calloc)(nmemb,size);
}
CLANG_PORT_INLINE void free(void *ptr)
{
	CLANG_PORT_CALL(free)(ptr);
}
CLANG_PORT_INLINE void *malloc(size_t size)
{
	return CLANG_PORT_CALL(malloc)(size);
}
CLANG_PORT_INLINE void *realloc(void *ptr, size_t size)
{
	return CLANG_PORT_CALL(realloc)(ptr,size);
}


/*
 Communication with the environment
 */
CLANG_PORT_INLINE _Noreturn void abort(void)
{
	CLANG_PORT_CALL(abort)();
}
CLANG_PORT_INLINE int atexit(void (*func)(void))
{
	return CLANG_PORT_CALL(atexit)(func);
}
CLANG_PORT_INLINE int at_quick_exit(void (*func)(void))
{
	return CLANG_PORT_CALL(at_quick_exit)(func);
}
CLANG_PORT_INLINE _Noreturn void exit(int status)
{
	CLANG_PORT_CALL(exit)(status);
}
CLANG_PORT_INLINE _Noreturn void _Exit(int status)
{
	CLANG_PORT_CALL(_Exit)(status);
}
CLANG_PORT_INLINE char *getenv(const char *name)
{
	return CLANG_PORT_CALL(getenv)(name);
}
CLANG_PORT_INLINE _Noreturn void quick_exit(int status)
{
	CLANG_PORT_CALL(quick_exit)(status);
}
CLANG_PORT_INLINE int system(const char *str)
{
	return CLANG_PORT_CALL(system)(str);
}



/*
 Searching and sorting utilities
 */
CLANG_PORT_INLINE void *bsearch(const void *key, const void *base,size_t nmemb, size_t size,int (*compar)(const void *, const void *))
{
	return CLANG_PORT_CALL(bsearch)(key,base,nmemb,size,compar);
}
CLANG_PORT_INLINE void qsort(void *base, size_t nmemb, size_t size,int (*compar)(const void *, const void *))
{
	CLANG_PORT_CALL(qsort)(base,nmemb,size,compar);
}

/*
 Integer arithmetic functions
 */
CLANG_PORT_INLINE int abs(int j)
{
	return CLANG_PORT_CALL(abs)(j);
}
CLANG_PORT_INLINE long int labs(long int j)
{
	return CLANG_PORT_CALL(labs)(j);
}
CLANG_PORT_INLINE long long int llabs(long long int j)
{
	return CLANG_PORT_CALL(llabs)(j);
}
CLANG_PORT_INLINE div_t div(int numer, int denom)
{
	return CLANG_PORT_CALL(div)(numer,denom);
}
CLANG_PORT_INLINE ldiv_t ldiv(long int numer, long int denom)
{
	return CLANG_PORT_CALL(ldiv)(numer,denom);
}
CLANG_PORT_INLINE lldiv_t lldiv(long long int numer, long long int denom)
{
	return CLANG_PORT_CALL(lldiv)(numer,denom);
}


/*
 Multibyte/wide character conversion functions
 */
CLANG_PORT_INLINE int mblen(const char *s, size_t n)
{
	return CLANG_PORT_CALL(mblen)(s,n);
}
CLANG_PORT_INLINE int mbtowc(wchar_t * restrict pwc,const char * restrict s,size_t n)
{
	return CLANG_PORT_CALL(mbtowc)(pwc,s,n);
}
CLANG_PORT_INLINE int wctomb(char *s, wchar_t wc)
{
	return CLANG_PORT_CALL(wctomb)(s,wc);
}

/*
 Multibyte/wide string conversion functions
 */
CLANG_PORT_INLINE size_t mbstowcs(wchar_t * restrict pwcs,const char * restrict s,size_t n)
{
	return CLANG_PORT_CALL(mbstowcs)(pwcs,s,n);
}
CLANG_PORT_INLINE size_t wcstombs(char * restrict s,const wchar_t * restrict pwcs,size_t n)
{
	return CLANG_PORT_CALL(wcstombs)(s,pwcs,n);
}

#endif // __IMPL_CLANG_PORT_API__


__END_DECLS

#endif	/* Not _CLANG_PORT_STDLIB_H_ */

