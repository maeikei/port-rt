/*
   cproj.c
   Contributed by Danny Smith
   2003-10-20
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>


#include <math_internal.h>


/* Return the value of the projection onto the Riemann sphere.*/

double complex CLANG_PORT_DECL(cproj) (double complex Z)
{
  complex double Res = Z;
  if (isinf (__real__ Z) || isinf (__imag__ Z))
    {
      __real__ Res = HUGE_VAL;
      __imag__ Res = copysign (0.0, __imag__ Z);
    }
  return Res;
}

