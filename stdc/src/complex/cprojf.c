/*
   cprojf.c
   Contributed by Danny Smith
   2004-12-24
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>


#include <math_internal.h>


/* Return the value of the projection onto the Riemann sphere.*/

float complex CLANG_PORT_DECL(cprojf) (float complex Z)
{
  complex float Res = Z;
  if (isinf (__real__ Z) || isinf (__imag__ Z))
    {
      __real__ Res = HUGE_VALF;
      __imag__ Res = copysignf (0.0f, __imag__ Z);
    }
  return Res;
}

