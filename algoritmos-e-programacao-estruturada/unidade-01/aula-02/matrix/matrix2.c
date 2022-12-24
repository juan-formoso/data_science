/*
Para armazenar valores em uma matriz, usa-se a função scanf(), indicando os dois índices para selecionar a posição que se deseja guardar o valor. O mesmo vale para a impressão de valores.
*/

#include <stdio.h>

int main(void) {
  float notas[3][2];

  printf("Digite uma nota: ");
  scanf("%f", &notas[1][0]); // será armazenado na linha 1 e coluna 0 da matriz
  printf("Nota digitada: %2.f", notas[1][0]); // será exibida com duas casas decimais

  return 0;
}