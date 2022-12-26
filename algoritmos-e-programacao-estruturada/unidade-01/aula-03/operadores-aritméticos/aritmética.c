#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 5;

  // Adição
  printf("%d + %d = %d\n", a, b, a + b); // 10 + 5 = 15

  // Subtração
  printf("%d - %d = %d\n", a, b, a - b); // 10 - 5 = 5

  // Multiplicação
  printf("%d * %d = %d\n", a, b, a *b); // 10 * 5 = 50

  // Divisão
  printf("%d / %d = %d\n", a, b, a / b); // 10 / 5 = 2

  // Módulo
  printf("%d %% %d = %d\n", a, b, a % b); // 10 % 5 = 0

  return 0;
}