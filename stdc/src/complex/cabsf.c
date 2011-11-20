#include <math.h>
#include <complex.h>

float CLANG_PORT_DECL(cabsf) (float complex Z)
{
  return (float) _hypot ( __real__ Z,  __imag__ Z);
}
