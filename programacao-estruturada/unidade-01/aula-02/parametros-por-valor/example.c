// Na passagem por valores, a função cria variáveis locais automaticamente para armazenar os valores e, após a execução da função, as variáveis são liberadas.

#include <stdio.h>

int somar(int a, int b) {
  return a + b;
}

int main(void) {
  int result;
  result = somar(5, 10);

  printf("\nResultado da soma = %d", result);
  
  return 0;
}