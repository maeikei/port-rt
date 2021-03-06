/*
   casinf.c
   Contributed by Danny Smith
   2004-12-24
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* casin (Z ) = -I * clog(I * Z + csqrt (1.0 - Z * Z))) */

float complex CLANG_PORT_DECL(casinf) (float complex Z)
{
  float complex Res;
  float x, y;

  x = __real__ Z;
  y = __imag__ Z;

  if (y == 0.0f)
    {
      __real__ Res = CLANG_PORT_CALL(asinf) (x);
      __imag__ Res = 0.0f;
    }
  else  /* -I * clog(I * Z + csqrt(1.0 - Z * Z))) */
    {
      float complex ZZ;
                                 
      /* Z * Z = ((x - y) * (x + y)) + (2.0 * x * y) * I */
      /* calculate 1 - Z * Z */
      __real__ ZZ = 1.0f - (x - y) * (x + y);
      __imag__ ZZ = -2.0f * x * y;
      ZZ = CLANG_PORT_CALL(csqrtf) (ZZ);


      /* add  I * Z  to ZZ */

      __real__ ZZ -= y;
      __imag__ ZZ += x;

      ZZ = CLANG_PORT_CALL(clogf) (ZZ);

      /* mult by -I */
      __real__ Res = __imag__ ZZ;
      __imag__ Res = - __real__ ZZ;  
    }
  return (Res);
}
