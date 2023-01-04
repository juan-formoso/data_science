// Implementação de menu com do-while:

#include <stdio.h>

int main(void) {
  float metragem1 = 0.0, metragem2 = 0.0, resultado = 0.0;
  int opcao = 0;

  printf("\n C Á L C U L O   D E   M E T R O S   Q U A D R A D O S");

  do {
    printf("\n\nDigite a primeira metragem do terreno: ");
    scanf("%f", &metragem1);

    printf("\nDigite a segunda metragem do terreno: ");
    scanf("%f", &metragem2);

    resultado = metragem1 * metragem2;

    printf("\n\nO terreno tem: %.2f m²", resultado);
    
    printf("\n\nDigite 1 para continuar ou 2 para sair: ");
    scanf("%d", &opcao);
  } while (opcao == 1);

  return 0;
}