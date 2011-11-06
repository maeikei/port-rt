/* 
 * assert.c
 *
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void
__assert2(const char *file, int line, const char *func, const char *failedexpr)
{
	(void)fprintf(stderr,
				  "assertion \"%s\" failed: file \"%s\", line %d, function \"%s\"\n",
				  failedexpr, file, line, func);
	abort();
}
