/*
Sintaxe: fgets(destino, tamanho, fluxo);

- Destino: variável que receberá a string;
- Tamanho: tamanho da string;
- Fluxo: fluxo de entrada de dados (teclado) > stdin (standart input).
*/

#include <stdio.h>

int main(void) {
  char frase[101];

  printf("\n Digite uma frase: ");
  fflush(stdin);
  fgets(frase, 101, stdin);
  printf("\n Frase digitada: %s", frase);

  return 0;
}