/* 
 * assert.c
 *
 */
#include <stdc/include/assert.h>
#include <stdc/include/stdio.h>
#include <stdc/include/stdlib.h>

void
CLANG_PORT_DECL(assert)(const char *file, int line, const char *func, const char *failedexpr)
{
	(void)fprintf(stderr,
				  "assertion \"%s\" failed: file \"%s\", line %d, function \"%s\"\n",
				  failedexpr, file, line, func);
	CLANG_PORT_CALL(abort)();
}
