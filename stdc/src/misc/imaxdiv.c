/*
    This source code was extracted from the Q8 package created and
    placed in the PUBLIC DOMAIN by Doug Gwyn <gwyn@arl.mil>
    last edit:	1999/11/05	gwyn@arl.mil


	last edit:	1999/11/05	gwyn@arl.mil

	Implements subclause 7.8.2 of ISO/IEC 9899:1999 (E).

*/

#include <stdc/include/inttypes.h>

CLANG_SELF_TYPE(imaxdiv_t) CLANG_PORT_DECL(imaxdiv)(intmax_t numer, intmax_t denom)
{
  CLANG_SELF_TYPE(imaxdiv_t)	result;
  result.quot = numer / denom;
  result.rem = numer % denom;
  return result;
}
