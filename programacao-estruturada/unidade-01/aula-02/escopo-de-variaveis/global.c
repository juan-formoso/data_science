// Escopo global: variáveis declaradas fora de uma função podem ser acessadas em qualquer lugar do programa. Devem ser criadas após as bibliotecas.

#include <stdio.h>

int x = 10;

void testar() {
  x = 2 * x;
}

int main(void) {
  printf("\nValor de x global = %d", x);
  testar();
  printf("\nValor de x global alterado em testar() = %d", x);

  return 0;
}