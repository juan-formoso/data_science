/*
Negação (!): usado para inverter o resultado da expressão.

Conjunção (&&): usado para criar condições em que todas as alternativas devem ser verdadeiras para que o resultado seja verdadeiro.

Disjunção (||): usado para criar condições em que basta uma alternativa ser verdadeira para que o resultado também seja.
*/

#include <stdio.h>

int main() {
  int a = 5, b = 10, c = 5;

  printf("\n (a == b) && (a == c) = %d", ((a == b) && (a == c))); // 0
  printf("\n (a == b) || (a == c) = %d", ((a == b) || (a == c))); // 1
  printf("\n !(a == b) || (a == c) = %d", (!(a == b) || (a == c))); // 1
}