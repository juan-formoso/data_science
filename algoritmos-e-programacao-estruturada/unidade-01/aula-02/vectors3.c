/*
Sintaxe para guardar valor em um vetor:

printf("Digite uma idade: ");
scanf("%d", &idade[0]);

É uma boa prática inicializar um vetor usando valores nulos, para evitar que o programa leia lixo de memória.
*/

#include <stdio.h>

int main(void) {
  int idade[3] = {0, 0, 0};
  float media = 0.0;

  printf("\n Informe a idade da pessoa 1: ");
  scanf("%d", &idade[0]);

  printf("\n Informe a idade da pessoa 2: ");
  scanf("%d", &idade[1]);

  printf("\n Informe a idade da pessoa 3: ");
  scanf("%d", &idade[2]);

  media = (idade[0] + idade[1] + idade[2]) / 3;
  printf("\n Média de idade = %.2f", media);

  return 0;
}