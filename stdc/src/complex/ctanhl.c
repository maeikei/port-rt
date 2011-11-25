/*  ctanhl.c */

/*
   Contributed by Danny Smith
   2005-01-04
*/


#include <stdc/include/math.h>
#include <stdc/include/complex.h>
#include <stdc/include/errno.h>

#include <math_internal.h>


/*
  ctanh (x + I * y) = (sinh (2 * x)  +  sin (2 * y) * I )
		     / (cosh (2 * x) + cos (2 * y)) .
*/

long double complex
CLANG_PORT_DECL(ctanhl) (long double complex Z)
{
  long double complex Res;
  long double two_R = 2.0L * __real__ Z;
  long double two_I = 2.0L * __imag__ Z;
  long double denom = coshl (two_R) + cosl (two_I);

  if (denom == 0.0L)
    {
      errno = ERANGE;
      __real__ Res = HUGE_VALL;
      __imag__ Res = HUGE_VALL;
    }
  else if (isinf (denom))
    {
      errno = ERANGE;
      __real__ Res = two_R > 0 ? 1.0L : -1.0L;
      __imag__ Res = 0.0L;
    }
  else
    {
      __real__ Res = sinhl (two_R) / denom;
      __imag__ Res = sinl (two_I) / denom;
    }
  return Res;
}
