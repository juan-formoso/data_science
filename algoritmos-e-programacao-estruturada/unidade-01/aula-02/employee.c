/*
O acesso aos dados da struct é feito usando o nome da variável que recebeu como tipo + a estrutura com um ponto (.) + o nome do campo da estrutura a ser acessado.
*/

#include <stdio.h>

struct funcionario {
  char nome[50];
  int idade;
  float salario;
};

int main() {
  struct funcionario dadosFuncionario1;

  printf("Digite o nome do funcionário: ");
  scanf("%s", dadosFuncionario1.nome);

  printf("Digite a idade do funcionário: ");
  scanf("%d", &dadosFuncionario1.idade);

  printf("Digite o salário do funcionário: ");
  scanf("%.2f", &dadosFuncionario1.salario);

  printf("\n Dados Atribuídos");
  printf("\n Nome: %s", dadosFuncionario1.nome);
  printf("\n Idade: %d", dadosFuncionario1.idade);
  printf("\n Salário: %.2f", dadosFuncionario1.salario);

  return 0;
};