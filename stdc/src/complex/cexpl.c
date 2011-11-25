/*
   cexpl.c
   Contributed by Danny Smith
   2005-01-04
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* cexp (x + I * y) = exp (x) * cos (y) + I * exp (x) * sin (y) */

long double complex CLANG_PORT_DECL(cexpl) (long double complex Z)
{
  long double complex  Res;
  long double rho = expl (__real__ Z);
  __real__ Res = rho * cosl(__imag__ Z);
  __imag__ Res = rho * sinl(__imag__ Z);
  return Res;
}
