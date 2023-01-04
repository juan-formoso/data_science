// A validação de dados é um ótimo exemplo para utilização do do-while. Pois a entrada precisa ser lida ao menos uma vez para o laço se encerrar ou reiniciar.

#include <stdio.h>

int main(void) {
  float nota = 0.0;

  do {
    printf("\nDigite a nota final do aluno (min: 0, max: 10): ");
    scanf("%f", &nota);
  } while (nota < 0 || nota > 10);

  return 0;
}