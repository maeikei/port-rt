#include <stdc/include/math.h>
#include <stdc/include/complex.h>

float CLANG_PORT_DECL(cabsf) (float complex Z)
{
  return (float) _hypot ( __real__ Z,  __imag__ Z);
}
