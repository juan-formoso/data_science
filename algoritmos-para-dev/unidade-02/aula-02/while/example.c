/*
Sintaxe loop-while:

while (condicao) {
  // codigo a ser executado
}
*/

#include <stdio.h>

int main(void) {
  int index = 1; // contador
  
  while (index <= 10) { // condição de parada
    printf("%d", index);
    index++; // incremento
  }

  return 0;
}

// Outras formas de indicar o icremento do contador: index = index + 1; index += 1; -> Atribuição composta