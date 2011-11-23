#include <stdc/include/math.h>
#include <stdc/include/complex.h>

double CLANG_PORT_DECL(cabs) (double complex Z)
{
  return _hypot ( __real__ Z,  __imag__ Z);
}
