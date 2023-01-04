/*
Sintaxe: char <nome_da_string> [tamanho];

Formas de declaração:
  1) Chaves - char nome[16] = {'J', 'o', 'a', 'o'};
  2) Aspas - char sobrenome[31] = "Alberto Gomes";
*/

#include <stdio.h>

int main(void) {
  char nome[16];

  printf("\n Digite um nome: ");
  scanf("%s", nome); // Não necessita do operador &
  printf("\n Nome digitado: %s", nome);

  return 0;
}