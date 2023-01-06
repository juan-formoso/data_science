// Para acessar o valor de uma variável global, dentro de uma função que apresenta uma variável local com o mesmo nome, deve-se usar o comando "extern".

#include <stdio.h>

int x = 10;

int main(void) {
  int x = -1;
  int b;

  {
    extern int x;
    b = x;
  }

  printf("\nValor de x = %d", x);
  printf("\nValor de b (x global) = %d", b);

  return 0;
}