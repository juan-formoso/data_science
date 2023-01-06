// Escopo local: variáveis declaradas dentro de uma função só podem ser acessadas dentro da função.

#include <stdio.h>

int testar() {
  int x = 10;
  return x;
}

int main(void) {
  int x = 20;
  
  printf("\nValor de x na função main() = %d", x);
  printf("\nValor de x na função testar() = %d", testar());

  return 0;
}