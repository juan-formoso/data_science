/*
É possível passar ponteiros como argumentos de funções, e também retornar ponteiros de funções.

Isso é útil quando queremos alterar o valor de uma variável dentro de uma função, sem precisar retornar o valor da função.

Para isso, basta utilizar o tipo de dado ponteiro como argumento da função, e utilizar o operador de desreferência (*) para alterar o valor da variável.
*/

#include <stdio.h>

void increment(int *x);

int main() {
  int number = 10;

  increment(&number); // incrementa o valor de number
  printf("%d\n", number);

  return 0;
}

void increment(int *x) {
  (*x)++; // incrementa o valor de x
}