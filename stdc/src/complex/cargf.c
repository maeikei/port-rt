#include <stdc/include/complex.h>
float  __attribute__ ((const)) CLANG_PORT_DECL(cargf) (float _Complex _Z)
{
  float res;
  __asm__ ("fpatan;"
	   : "=t" (res) : "0" (__real__ _Z), "u" (__imag__ _Z) : "st(1)");
  return res;
}

