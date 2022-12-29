/*
O laço do-while analisa a condição no final do laço, ou seja, ele executa os comandos antes do teste de condição.
Os comandos são executados ao menos uma vez.

Sintaxe:
do {
  // código
} while (condicao);
*/

#include <stdio.h>

int main(void) {
  int number = 0;

  do {
    printf("\nInsira um número inteiro positivo (negativo para sair): ");
    scanf("%d", &number);
  } while (number > 0);

  return 0;
}