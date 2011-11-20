#include <math.h>
#include <complex.h>

long double CLANG_PORT_DECL(cabsl) (long double complex Z)
{
  return  hypotl ( __real__ Z,  __imag__ Z);
}
