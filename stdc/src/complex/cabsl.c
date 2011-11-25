#include <stdc/include/math.h>
#include <stdc/include/complex.h>

long double CLANG_PORT_DECL(cabsl) (long double complex Z)
{
  return  hypotl ( __real__ Z,  __imag__ Z);
}
