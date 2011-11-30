/* 
 * fenv.h
 *
 */

#ifndef _CLANG_PORT_FENV_H_
#define _CLANG_PORT_FENV_H_

#ifdef __IMPL_CLANG_PORT_API__
#include <stdc/include/_clang_port.h>
#else // __IMPL_CLANG_PORT_API__
#include <_clang_port.h>
#endif // __IMPL_CLANG_PORT_API__



#ifndef __IMPL_CLANG_PORT_API__
/* FPU status word exception flags */
#define FE_INVALID	0x01
#define FE_DENORMAL	0x02
#define FE_DIVBYZERO	0x04
#define FE_OVERFLOW	0x08
#define FE_UNDERFLOW	0x10
#define FE_INEXACT	0x20
#define FE_ALL_EXCEPT (FE_INVALID | FE_DENORMAL | FE_DIVBYZERO \
| FE_OVERFLOW | FE_UNDERFLOW | FE_INEXACT)

/* FPU control word rounding flags */
#define FE_TONEAREST	0x0000
#define FE_DOWNWARD	0x0400
#define FE_UPWARD	0x0800
#define FE_TOWARDZERO	0x0c00

#endif // __IMPL_CLANG_PORT_API__





__BEGIN_DECLS


typedef unsigned short CLANG_SELF_TYPE(fexcept_t);

typedef struct
{
	unsigned short __control_word;
	unsigned short __unused0;
	unsigned short __status_word;
	unsigned short __unused1;
	unsigned short __tag_word;
	unsigned short __unused2;  
	unsigned int	 __ip_offset;    /* instruction pointer offset */
	unsigned short __ip_selector;  
	unsigned short __opcode;
	unsigned int	 __data_offset;
	unsigned short __data_selector;
	unsigned short  __unused3;
	unsigned int __mxcsr; /* contents of the MXCSR register  */
} CLANG_SELF_TYPE(fenv_t);

extern int CLANG_PORT_DECL(feclearexcept)(int excepts);
extern int CLANG_PORT_DECL(fegetexceptflag)(CLANG_SELF_TYPE(fexcept_t) *flagp, int excepts);
extern int CLANG_PORT_DECL(feraiseexcept)(int excepts);
extern int CLANG_PORT_DECL(fesetexceptflag)(const CLANG_SELF_TYPE(fexcept_t) *flagp, int excepts);
extern int CLANG_PORT_DECL(fetestexcept)(int excepts);
extern int CLANG_PORT_DECL(fegetround)(void);
extern int CLANG_PORT_DECL(fesetround)(int round);
extern int CLANG_PORT_DECL(fegetenv)(CLANG_SELF_TYPE(fenv_t) *envp);
extern int CLANG_PORT_DECL(feholdexcept)(CLANG_SELF_TYPE(fenv_t) *envp);
extern int CLANG_PORT_DECL(fesetenv)(const CLANG_SELF_TYPE(fenv_t) *envp);
extern int CLANG_PORT_DECL(feupdateenv)(const CLANG_SELF_TYPE(fenv_t) *envp);



#ifndef __IMPL_CLANG_PORT_API__
typedef CLANG_SELF_TYPE(fexcept_t) fexcept_t;
typedef CLANG_SELF_TYPE(fenv_t) fenv_t;


	
/*
 * Floating-point exceptions
 */
CLANG_PORT_INLINE int feclearexcept(int excepts)
{
	return CLANG_PORT_CALL(feclearexcept)(excepts);
}
CLANG_PORT_INLINE int fegetexceptflag(fexcept_t *flagp, int excepts)
{
	return CLANG_PORT_CALL(fegetexceptflag)(flagp,excepts);
}
CLANG_PORT_INLINE int feraiseexcept(int excepts)
{
	return CLANG_PORT_CALL(feraiseexcept)(excepts);
}
CLANG_PORT_INLINE int fesetexceptflag(const fexcept_t *flagp, int excepts)
{
	return CLANG_PORT_CALL(fesetexceptflag)(flagp,excepts);
}
CLANG_PORT_INLINE int fetestexcept(int excepts)
{
	return CLANG_PORT_CALL(fetestexcept)(excepts);
}


/*
 * Rounding
 */
CLANG_PORT_INLINE int fegetround(void)
{
	return CLANG_PORT_CALL(fegetround)();
}
CLANG_PORT_INLINE int fesetround(int round)
{
	return CLANG_PORT_CALL(fesetround)(round);
}
/*
 * Environment
 */
CLANG_PORT_INLINE int fegetenv(fenv_t *envp)
{
	return CLANG_PORT_CALL(fegetenv)(envp);
}
CLANG_PORT_INLINE int feholdexcept(fenv_t *envp)
{
	return CLANG_PORT_CALL(feholdexcept)(envp);
}
CLANG_PORT_INLINE int fesetenv(const fenv_t *envp)
{
	return CLANG_PORT_CALL(fesetenv)(envp);
}
CLANG_PORT_INLINE int feupdateenv(const fenv_t *envp)
{
	return CLANG_PORT_CALL(feupdateenv)(envp);
}


#endif // __IMPL_CLANG_PORT_API__


__END_DECLS

#endif /* _CLANG_PORT_FENV_H_ */
