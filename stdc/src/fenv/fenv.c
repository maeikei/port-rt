/*

 */
#include <stdc/include/fenv.h>
#include <fenv.h>

int CLANG_PORT_DECL(feclearexcept)(int excepts)
{
	return feclearexcept(excepts);
}
int CLANG_PORT_DECL(fegetexceptflag)(CLANG_SELF_TYPE(fexcept_t) *flagp, int excepts)
{
	return fegetexceptflag( (fexcept_t*)flagp,excepts);
}
int CLANG_PORT_DECL(feraiseexcept)(int excepts)
{
	return feraiseexcept(excepts);
}
int CLANG_PORT_DECL(fesetexceptflag)(const CLANG_SELF_TYPE(fexcept_t) *flagp, int excepts)
{
	return fesetexceptflag((fexcept_t*)flagp, excepts);
}
int CLANG_PORT_DECL(fetestexcept)(int excepts)
{
	return fetestexcept(excepts);
}
int CLANG_PORT_DECL(fegetround)(void)
{
	return fegetround();
}
int CLANG_PORT_DECL(fesetround)(int round)
{
	return fesetround(round);
}
int CLANG_PORT_DECL(fegetenv)(CLANG_SELF_TYPE(fenv_t) *envp)
{
	return fegetenv( (fenv_t*) envp );
}
int CLANG_PORT_DECL(feholdexcept)(CLANG_SELF_TYPE(fenv_t) *envp)
{
	return feholdexcept((fenv_t*) envp);
}
int CLANG_PORT_DECL(fesetenv)(const CLANG_SELF_TYPE(fenv_t) *envp)
{
	return fesetenv((fenv_t*) envp);
}
int CLANG_PORT_DECL(feupdateenv)(const CLANG_SELF_TYPE(fenv_t) *envp)
{
	return feupdateenv((fenv_t*) envp);
}
