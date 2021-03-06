/*
   casin.c
   Contributed by Danny Smith
   2003-10-20
*/

#include <stdc/include/math.h>
#include <stdc/include/complex.h>

/* casin (Z ) = -I * clog(I * Z + csqrt (1.0 - Z * Z))) */

double complex CLANG_PORT_DECL(casin) (double complex Z)
{
  double complex Res;
  double x, y;

  x = __real__ Z;
  y = __imag__ Z;

  if (y == 0.0)
    {
      __real__ Res = CLANG_PORT_CALL(asin) (x);
      __imag__ Res = 0.0;
    }
  else  /* -I * clog(I * Z + csqrt(1.0 - Z * Z))) */
    {
      double complex ZZ;
                                 
      /* Z * Z = ((x - y) * (x + y)) + (2.0 * x * y) * I */
      /* calculate 1 - Z * Z */
      __real__ ZZ = 1.0 - (x - y) * (x + y);
      __imag__ ZZ = -2.0 * x * y;
      ZZ = CLANG_PORT_CALL(csqrt) (ZZ);


      /* add  I * Z  to ZZ */

      __real__ ZZ -= y;
      __imag__ ZZ += x;

      ZZ = CLANG_PORT_CALL(clog) (ZZ);

      /* mult by -I */
      __real__ Res = __imag__ ZZ;
      __imag__ Res = - __real__ ZZ;  
    }
  return (Res);
}
