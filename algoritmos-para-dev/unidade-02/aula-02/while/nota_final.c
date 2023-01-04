// Checar se a nota final de um aluno está entre 0 e 10

#include <stdio.h>

int main(void) {
  float nota = 0.0;
  int index = 0;

  printf("\n Digite a nota final do aluno: ");
  scanf("%f", &nota);

  while (index != 1) {
    if (nota < 0 || nota > 10) {
      printf("\n Nota inválida! Digite a nota final do aluno: ");
      scanf("%f", &nota);
    } else {
      printf("\n Nota válida, encerrando...");
      index = 1;
    }
  }

  return 0;
}