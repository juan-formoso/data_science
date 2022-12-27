// Estrutura condicional composta

#include <stdio.h>

int main(void) {
  int eleitor1 = 18;
  int eleitor2 = 60;
  
  if (eleitor1 && eleitor2 >= 18) {
    printf("\n Eleitores");
  } else {
    printf("\n Não eleitores");
  }

  return 0;
}