// Nome de um vetor é um ponteiro para o endereço de memória do primeiro elemento do vetor.

#include <stdio.h>

int main() {
  int num [2] = {10, 20};

  printf("\n Utilizando índice do vetor: %d", num[0]);
  printf("\n Utilizando ponteiro: %d", *num);

  return 0;
};