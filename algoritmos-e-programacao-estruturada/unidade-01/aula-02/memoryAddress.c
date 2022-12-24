#include <stdio.h>

int main() {
  float valor1 = 0, valor2 = 0;

  printf("\n Digite o primeiro valor: ");
  scanf("%f", &valor1);

  printf("\n Digite o segundo valor: ");
  scanf("%f", &valor2);

  printf("Variável 1 = %2.f", valor1);
  printf("Variável 2 = %2.f", valor2);

  return 0;
}