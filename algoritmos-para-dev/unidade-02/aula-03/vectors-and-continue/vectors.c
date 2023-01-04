/*
Vetores são um tipo de estrutura de dados que armazena uma coleção de valores do mesmo tipo.

  Sintaxe: tipo nome[tamanho];
  Exemplo: int vetor[10]; -> vetor de inteiros com 10 elementos

Para acessar um elemento do vetor, basta indicar o índice do elemento entre colchetes.

  Exemplo: vetor[0] -> primeiro elemento do vetor
*/

#include <stdio.h>

#define VETOR_TAM 5

int main(void) {
  int number[VETOR_TAM];

  for (int index = 0; index < VETOR_TAM; index++) {
    printf("\nDigite um número: ");
    scanf("%d", &number[index]);
    printf("\nO valor digitado foi: %d", number[index]);
  }

  return 0;
}