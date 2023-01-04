// Aplicação das estruturas de repetição condicionais (simulação de conta bancária):

#include <stdio.h>

int main(void) {
  float soma = 0.0, valor = 0.0;
  int opcao = 0;

  do {
    printf("\nM E N U   D E   O P Ç Õ E S");
    printf("\n1. Depósito");
    printf("\n2. Saque");
    printf("\n3. Saldo");
    printf("\n4. Sair");
    printf("\n\nInforme uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        printf("\nInforme o valor: ");
        scanf("%f", &valor);
        soma += valor;
        break;

      case 2:
        printf("\nInforme o valor: ");
        scanf("%f", &valor);
        soma -= valor;
        break;

      case 3:
        printf("\nSaldo atual: R$ %.2f", soma);
        break;

      case 4:
        printf("\nSaindo...");
        break;

      default:
        printf("\nOpção inválida!");
    }
  } while (opcao != 4);

  printf("\n\nFim das operações!");

  return 0;
}

// Atribuição composta também pode ser feita com multiplicação e divisão