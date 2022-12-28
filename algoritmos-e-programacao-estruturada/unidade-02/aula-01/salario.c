// Crie um programa em C que calcula o valor do salário líquido, levando em consideração os descontos de INSS e Imposto de Renda

#include <stdio.h>

int main(void) {
  float salario_bruto = 0.0, inss = 0.0, ir = 0.0, salario_liquido = 0.0;

  printf("\nCalculo do salário líquido com desconto de IR e INSS");
  printf("\nDigite o valor do salário bruto: ");
  scanf("%f", &salario_bruto);

  // Cálculo do INSS
  if (salario_bruto <= 1045.0) {
    inss = salario_bruto * 0.075;
  } else if (salario_bruto > 1045.0 && salario_bruto <= 2089.60) {
    inss = salario_bruto * 0.09;
  } else if (salario_bruto > 2089.60 && salario_bruto <= 3134.40) {
    inss = salario_bruto * 0.12;
  } else {
    inss = salario_bruto * 0.14;
  }

  // Cálculo do IR
  if (salario_bruto <= 1903.98) {
    ir = 0.0;
  } else if (salario_bruto > 1903.98 && salario_bruto <= 2826.65) {
    ir = salario_bruto * 0.075;
  } else if (salario_bruto > 2826.65 && salario_bruto <= 3751.05) {
    ir = salario_bruto * 0.15;
  } else if (salario_bruto > 3751.05 && salario_bruto <= 4664.68) {
    ir = salario_bruto * 0.225;
  } else {
    ir = salario_bruto * 0.275;
  }

  salario_liquido = salario_bruto - inss - ir;

  printf("\nDesconto INSS: R$ %.2f", inss);
  printf("\nDesconto IR: R$ %.2f", ir);
  printf("\nSalário líquido: R$ %.2f", salario_liquido);

  return 0;
}