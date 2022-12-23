#include <stdio.h>

int main() {
  int idade = 10;
  float salario = 1250.75;
  float altura = 1.75;
  double porcentagem_desconto = 2.5;
  char genero = 'F';

  printf("\n Idade: %d", idade);
  printf("\n Salario: %f", salario);
  printf("\n Altura: %.3f", altura);
  printf("\n Porcentagem de desconto: %f", porcentagem_desconto);
  printf("\n Gênero: %c", genero);

  return 0;
}