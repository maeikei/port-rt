/*
   cprojl.c
   Contributed by Danny Smith
   2005-01-04
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

#include <math_internal.h>


/* Return the value of the projection onto the Riemann sphere.*/

long double complex CLANG_PORT_DECL(cprojl) (long double complex Z)
{
  complex long double Res = Z;
  if (isinf (__real__ Z) || isinf (__imag__ Z))
    {
      __real__ Res = HUGE_VALL;
      __imag__ Res = copysignl (0.0L, __imag__ Z);
    }
  return Res;
}

