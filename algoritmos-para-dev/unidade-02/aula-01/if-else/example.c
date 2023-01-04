/*
Sintaxe:
if (condicao) {
  // código a ser executado
} else {
  // código a ser executado
}
*/

#include <stdio.h>

int main(void) {
  int number = 10;

  if (number > 0) {
    printf("O número é positivo\n");
  } else {
    printf("O número é negativo \n");
  }

  return 0;
}