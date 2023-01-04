/*
  MEDIA DE NOTAS DE UMA DISCIPLINA

  INSTRUÇÕES:
  1. Criar uma variável para entrada das notas, outra para acumular o valor das notas e outra para contabilizar quantas notas foram informadas;
  2. Após o lançamento de cada nota, solicitar ao usuário que informe se deseja continuar digitando outras notas ou não;
  3. Ao final, calcula-se a média e a apresenta na tela.
*/

#include <stdio.h>

float calcula_media(float soma, int contador) {
  return soma / contador;
}

int main(void) {
  float soma_notas = 0.0, nota_atual = 0.0;
  int contador_notas = 0, opcao = 0;

  do {
    printf("\nInforme a nota: ");
    scanf("%f", &nota_atual);

    soma_notas += nota_atual;
    contador_notas++;

    printf("\nDeseja continuar? (1 - Sim / 2 - Não): ");
    scanf("%d", &opcao);

    // Verifica se a opção informada é válida
    while (opcao != 1 && opcao != 2) {
      printf("\nOpção inválida! Informe 1 para continuar ou 2 para encerrar: ");
      scanf("%d", &opcao);
    }
  } while (opcao == 1);

  printf("\nMédia: %.2f", calcula_media(soma_notas, contador_notas));
  
  return 0;
}