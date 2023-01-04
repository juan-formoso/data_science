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

/*
Na linguagem de programação C, cada tipo de variável usa um especificador de formato para fazer a impressão do valor que está guardado naquele espaço da memória (PEREIRA, 2017). Veja no código – Impressão de variáveis –, que foram criadas cinco variáveis (linhas 4 a 8) e para cada tipo, usou-se um especificador na hora de fazer a impressão com a função printf().

A função “printf” pertence à biblioteca <stdio.h>, por isso, é necessário incluí-la no início do programa. Na linha 10, para o tipo inteiro, foi usado %d. Nas linhas 11 e 12, para os pontos flutuantes, foi usado %f. 

Na linha 13, para o caractere, foi usado o %c, e, na linha 14, o especificador de ponto flutuante ganhou o adicional .3, o que significa que o resultado será impresso com três casas decimais. O símbolo \n é usado para gerar uma quebra de linha na saída do programa.
*/