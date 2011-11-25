/*
   cexp.c
   Contributed by Danny Smith
   2003-10-20
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* cexp (x + I * y) = exp (x) * cos (y) + I * exp (x) * sin (y) */

double complex CLANG_PORT_DECL(cexp) (double complex Z)
{
  double complex  Res;
  long double rho = exp (__real__ Z);
  __real__ Res = rho * cos(__imag__ Z);
  __imag__ Res = rho * sin(__imag__ Z);
  return Res;
}
