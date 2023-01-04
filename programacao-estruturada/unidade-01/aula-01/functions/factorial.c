// Função que calcula o fatorial de um número

#include <stdio.h>

int factorial(int x);

int main(void) {
  int number = 5;

  printf("\nDigite um número: ");
  scanf("%d", &number);
  printf("O fatorial de %d é %d\n", number, factorial(number));

  return 0;
}

int factorial(int x) {
  int result = 1;

  for (int index = 1; index <= x; index++) {
    result *= index;
  }

  return result;
}