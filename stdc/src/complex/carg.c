#include <stdc/include/complex.h>
double  __attribute__ ((const)) CLANG_PORT_DECL(carg) (double _Complex _Z)
{
  double res;
  __asm__ ("fpatan;"
	   : "=t" (res) : "0" (__real__ _Z), "u" (__imag__ _Z) : "st(1)");
  return res;
}

