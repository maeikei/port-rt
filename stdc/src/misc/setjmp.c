/* 
 * setjmp.c
 *
 */
#include <stdc/include/setjmp.h>
#include <setjmp.h>

int CLANG_PORT_DECL(setjmp)(CLANG_SELF_TYPE(jmp_buf) j)
{
	return setjmp(j);
}
void CLANG_PORT_DECL(longjmp)(CLANG_SELF_TYPE(jmp_buf) j, int offset)
{
	longjmp(j,offset);
}
