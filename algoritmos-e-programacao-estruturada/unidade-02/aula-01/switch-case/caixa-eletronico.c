#include <stdio.h>

int main(void) {
  int number = 0;

  printf("\n(1) para Saldo\n(2) para Extrato\n(3) para Saque\n(4) para Sair\n");
  printf("\nDigite a opção desejada: ");
  scanf("%d", &number);

  switch (number) {
    case 1:
      printf("\nSaldo");
      break;
    case 2:
      printf("\nExtrato");
      break;
    case 3:
      printf("\nSaque");
      break;
    case 4:
      printf("\nSair");
      break;
    default:
      printf("\nInválido");
  }

  return 0;
}