// O incremento não precisa ser unitário. Pode-se utilizar incrementos maiores para, por exemplo, imprimir todos os pares de 0 a 10.

#include <stdio.h>

int main(void) {
  int x;

  for (x = 0; x < 10; x += 2) {
    printf("%d", x);
  }

  return 0;
}