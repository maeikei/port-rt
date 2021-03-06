/*
   cexpf.c
   Contributed by Danny Smith
   2004-12-24
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* cexp (x + I * y) = exp (x) * cos (y) + I * exp (x) * sin (y) */

float complex CLANG_PORT_DECL(cexpf) (float complex Z)
{
  float complex  Res;
  double rho = exp (__real__ Z);
  __real__ Res = rho * cosf(__imag__ Z);
  __imag__ Res = rho * sinf(__imag__ Z);
  return Res;
}
