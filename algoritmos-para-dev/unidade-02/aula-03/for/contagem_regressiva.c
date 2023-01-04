// Contagem regressiva de um número digitado pelo usuário

#include <stdio.h>

int main(void) {
  int index;

  printf("\nDigite um número para contagem regressiva: ");
  scanf("%d", &index);

  for (index; index >= 1; index--) {
    printf("%d", index);
  }

  return 0;
}