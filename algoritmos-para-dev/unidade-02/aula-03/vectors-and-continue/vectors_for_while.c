// Encontra a posição para um número inserido

#include <stdio.h>

#define VETOR_TAM 5

int main(void) {
  int vetor[VETOR_TAM];
  int numero, index, status = 0;

  // Preenche vetor
  for (index = 0; index < VETOR_TAM; index++) {
    printf("\nDigite um número: ");
    scanf("%d", &vetor[index]);
  }

  printf("\n\nInforme o número a ser encontrado: ");
  scanf("%d", &numero);

  while (index < VETOR_TAM) {
    if (vetor[index] == numero) {
      status = 1;
      break;
    }
    index++;
  }

  if (status == 1) {
    printf("\nO número %d foi encontrado na posição %d do vetor", numero, index);
  } else {
    printf("\nO número %d não foi encontrado no vetor", numero);
  }

  return 0;
}