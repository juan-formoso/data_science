/*
Crie um programa que calcule a média de notas de uma disciplina, de acordo com as notas dos alunos informadas.

INSTRUÇÕES:

1. Criar uma variável para entrada das notas, outra para acumular o valor das notas e outra para contabilizar quantas notas foram informadas;
2. Após o lançamento de cada nota, solicitar ao usuário que informe se deseja continuar digitando outras notas ou não;
3. Ao final, calcula-se a média e a apresenta na tela.
*/

#include <stdio.h>

int main(void) {
  float soma = 0.0, nota = 0.0;
  int contador = 0, opcao = 0;

  do {
    printf("\nInforme a nota: ");
    scanf("%f", &nota);

    soma += nota;
    contador++;

    printf("\nDeseja continuar? (1 - Sim / 2 - Não): ");
    scanf("%d", &opcao);
  } while (opcao == 1);

  printf("\nMédia: %.2f", soma / contador);
  
  return 0;
}