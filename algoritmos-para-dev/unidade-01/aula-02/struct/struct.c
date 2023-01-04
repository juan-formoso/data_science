/*
Sintaxe:

struct <nome> {
  <tipo> <nome_da_variavel1>;
  <tipo> <nome_da_variavel2>;
};
*/

#include <stdio.h>

struct automovel {
  char modelo[20];
  int ano;
  float valor;
};

int main() {
  struct automovel dadosAutomovel1;

  return 0;
};