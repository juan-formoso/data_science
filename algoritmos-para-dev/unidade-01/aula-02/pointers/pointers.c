/*
Sintaxe de declaração: <tipo> *<nome_do_ponteiro>;
*/

#include <stdio.h>

int main() {
  int x = 10;
  int *p; // ponteiro para inteiro
  p = &x; // p recebe o endereço de x
  *p = 20; // altera o valor de x através do ponteiro

  int ano = 2018;
  int *ponteiro_para_ano = &ano;

  printf("Valor de x: %d \n", *p); // imprime o valor de x através do ponteiro
  printf("\n Conteúdo do ponteiro: %p", ponteiro_para_ano); // imprime conteúdo do ponteiro (endereço da variável)
  printf("\n Endereço do ponteiro: %p", &ponteiro_para_ano); // imprime endereço do próprio ponteiro

  return 0;
}