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
void *memcpy(void * restrict s1,const void * restrict s2,size_t n);
void *memmove(void *s1, const void *s2, size_t n);
char *strcpy(char * restrict s1,const char * restrict s2);
char *strncpy(char * restrict s1,const char * restrict s2,size_t n);

/*
 Concatenation functions
 */
char *strcat(char * restrict s1,const char * restrict s2);
char *strncat(char * restrict s1,const char * restrict s2,size_t n);

/*
 Comparison functions
 */
int memcmp(const void *s1, const void *s2, size_t n);
int strcmp(const char *s1, const char *s2);
int strcoll(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
size_t strxfrm(char * restrict s1,const char * restrict s2,size_t n);








/*
 Search functions
 */
void *memchr(const void *s, int c, size_t n);
char *strchr(const char *s, int c);
size_t strcspn(const char *s1, const char *s2);
char *strpbrk(const char *s1, const char *s2);
char *strrchr(const char *s, int c);
size_t strspn(const char *s1, const char *s2);
char *strstr(const char *s1, const char *s2);
char *strtok(char * restrict s1,const char * restrict s2);


/*
 Miscellaneous functions
 */
void *memset(void *s, int c, size_t n);
char *strerror(int errnum);
size_t strlen(const char *s);



__END_DECLS


#endif	/* _CLANG_PORT_STRING_H_ */
