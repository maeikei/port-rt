/*
 * string.h
 *
 */

#ifndef _CLANG_PORT_STRING_H_
#define	_CLANG_PORT_STRING_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#include <stdc/include/stddef.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#include <stddef.h>
#endif // __IMPL_CLANG_PORT_API__


__BEGIN_DECLS

/*
 Copying functions
 */
void *CLANG_PORT_DECL(memcpy)(void * restrict s1,const void * restrict s2,size_t n);
void *CLANG_PORT_DECL(memmove)(void *s1, const void *s2, size_t n);
char *CLANG_PORT_DECL(strcpy)(char * restrict s1,const char * restrict s2);
char *CLANG_PORT_DECL(strncpy)(char * restrict s1,const char * restrict s2,size_t n);
/*
 Concatenation functions
 */
char *CLANG_PORT_DECL(strcat)(char * restrict s1,const char * restrict s2);
char *CLANG_PORT_DECL(strncat)(char * restrict s1,const char * restrict s2,size_t n);
/*
 Comparison functions
 */
int CLANG_PORT_DECL(memcmp)(const void *s1, const void *s2, size_t n);
int CLANG_PORT_DECL(strcmp)(const char *s1, const char *s2);
int CLANG_PORT_DECL(strcoll)(const char *s1, const char *s2);
int CLANG_PORT_DECL(strncmp)(const char *s1, const char *s2, size_t n);
size_t CLANG_PORT_DECL(strxfrm)(char * restrict s1,const char * restrict s2,size_t n);
/*
 Search functions
 */
void *CLANG_PORT_DECL(memchr)(const void *s, int c, size_t n);
char *CLANG_PORT_DECL(strchr)(const char *s, int c);
size_t CLANG_PORT_DECL(strcspn)(const char *s1, const char *s2);
char *CLANG_PORT_DECL(strpbrk)(const char *s1, const char *s2);
char *CLANG_PORT_DECL(strrchr)(const char *s, int c);
size_t CLANG_PORT_DECL(strspn)(const char *s1, const char *s2);
char *CLANG_PORT_DECL(strstr)(const char *s1, const char *s2);
char *CLANG_PORT_DECL(strtok)(char * restrict s1,const char * restrict s2);
/*
 Miscellaneous functions
 */
void *CLANG_PORT_DECL(memset)(void *s, int c, size_t n);
char *CLANG_PORT_DECL(strerror)(int errnum);
size_t CLANG_PORT_DECL(strlen)(const char *s);









#ifndef __IMPL_CLANG_PORT_API__
/*
 Copying functions
 */
CLANG_PORT_INLINE void *memcpy(void * restrict s1,const void * restrict s2,size_t n)
{
	return CLANG_PORT_CALL(memcpy)(s1,s2,n);
}
CLANG_PORT_INLINE void *memmove(void *s1, const void *s2, size_t n)
{
	return CLANG_PORT_CALL(memmove)(s1,s2,n);
}
CLANG_PORT_INLINE char *strcpy(char * restrict s1,const char * restrict s2)
{
	return CLANG_PORT_CALL(strcpy)(s1,s2);
}
CLANG_PORT_INLINE char *strncpy(char * restrict s1,const char * restrict s2,size_t n)
{
	return CLANG_PORT_CALL(strncpy)(s1,s2,n);
}

/*
 Concatenation functions
 */
CLANG_PORT_INLINE char *strcat(char * restrict s1,const char * restrict s2)
{
	return CLANG_PORT_CALL(strcat)(s1,s2);
}
CLANG_PORT_INLINE char *strncat(char * restrict s1,const char * restrict s2,size_t n)
{
	return CLANG_PORT_CALL(strncat)(s1,s2,n);
}

/*
 Comparison functions
 */
CLANG_PORT_INLINE int memcmp(const void *s1, const void *s2, size_t n)
{
	return CLANG_PORT_CALL(memcmp)(s1,s2,n);
}
CLANG_PORT_INLINE int strcmp(const char *s1, const char *s2)
{
	return CLANG_PORT_CALL(strcmp)(s1,s2);
}
CLANG_PORT_INLINE int strcoll(const char *s1, const char *s2)
{
	return CLANG_PORT_CALL(strcoll)(s1,s2);
}
CLANG_PORT_INLINE int strncmp(const char *s1, const char *s2, size_t n)
{
	return CLANG_PORT_CALL(strncmp)(s1,s2,n);
}
CLANG_PORT_INLINE size_t strxfrm(char * restrict s1,const char * restrict s2,size_t n)
{
	return CLANG_PORT_CALL(strxfrm)(s1,s2,n);
}

/*
 Search functions
 */
CLANG_PORT_INLINE void *memchr(const void *s, int c, size_t n)
{
	return CLANG_PORT_CALL(memchr)(s,n);
}
CLANG_PORT_INLINE char *strchr(const char *s, int c)
{
	return CLANG_PORT_CALL(strchr)(s,n);
}
CLANG_PORT_INLINE size_t strcspn(const char *s1, const char *s2)
{
	return CLANG_PORT_CALL(strcspn)(s1,s2);
}
CLANG_PORT_INLINE char *strpbrk(const char *s1, const char *s2)
{
	return CLANG_PORT_CALL(strpbrk)(s1,s2);
}
CLANG_PORT_INLINE char *strrchr(const char *s, int c)
{
	return CLANG_PORT_CALL(strrchr)(s,c);
}
CLANG_PORT_INLINE size_t strspn(const char *s1, const char *s2)
{
	return CLANG_PORT_CALL(strspn)(s1,s2);
}
CLANG_PORT_INLINE char *strstr(const char *s1, const char *s2)
{
	return CLANG_PORT_CALL(strstr)(s1,s2);
}
CLANG_PORT_INLINE char *strtok(char * restrict s1,const char * restrict s2)
{
	return CLANG_PORT_CALL(strtok)(s1,s2);
}

/*
 Miscellaneous functions
 */
CLANG_PORT_INLINE void *memset(void *s, int c, size_t n)
{
	return CLANG_PORT_CALL(memset)(s1,c,n);
}
CLANG_PORT_INLINE char *strerror(int errnum)
{
	return CLANG_PORT_CALL(strerror)(errnum);
}
CLANG_PORT_INLINE size_t strlen(const char *s)
{
	return CLANG_PORT_CALL(strlen)(s);
}

#endif // __IMPL_CLANG_PORT_API__



__END_DECLS


#endif	/* _CLANG_PORT_STRING_H_ */
