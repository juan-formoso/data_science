// Também é possível usar vários "else if" para incluir mais condições na estrutura de decisão.

#include <stdio.h>

int main(void) {
  int number = 10;

  if (number > 0) {
    printf("O número é positivo\n");
  } else if (number == 0)  {
    printf("O número é zero\n");
  } else {
    printf("O número é negativo \n");
  }

  return 0;
}