/* 
 * ctype.h
 *
 */

#ifndef _CLANG_PORT_CTYPE_H_
#define _CLANG_PORT_CTYPE_H_

#include <_clang_port.h>

#define	_U	0x01
#define	_L	0x02
#define	_N	0x04
#define	_S	0x08
#define	_P	0x10
#define	_C	0x20
#define	_X	0x40
#define	_B	0x80


__BEGIN_DECLS

extern const char	*_ctype_;
extern const short	*_tolower_tab_;
extern const short	*_toupper_tab_;

static __inline int isalnum(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & (_U|_L|_N)));
}

static __inline int isalpha(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & (_U|_L)));
}
static __inline int isblank(int c)
{
	return (c == ' ' || c == '\t');
}

static __inline int iscntrl(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & _C));
}

static __inline int isdigit(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & _N));
}

static __inline int isgraph(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & (_P|_U|_L|_N)));
}

static __inline int islower(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & _L));
}

static __inline int isprint(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & (_P|_U|_L|_N|_B)));
}

static __inline int ispunct(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & _P));
}

static __inline int isspace(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & _S));
}

static __inline int isupper(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & _U));
}

static __inline int isxdigit(int c)
{
	return (c == -1 ? 0 : ((_ctype_ + 1)[(unsigned char)c] & (_N|_X)));
}

static __inline int tolower(int c)
{
	if ((unsigned int)c > 255)
		return (c);
	return ((_tolower_tab_ + 1)[c]);
}

static __inline int toupper(int c)
{
	if ((unsigned int)c > 255)
		return (c);
	return ((_toupper_tab_ + 1)[c]);
}


__END_DECLS

#endif	/* Not _CLANG_PORT_CTYPE_H_ */

