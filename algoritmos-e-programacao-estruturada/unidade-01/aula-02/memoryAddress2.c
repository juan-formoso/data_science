#include <stdio.h>

int main() {
  int x = 6;
  int y = 10;

  printf("\n Valor guardado em x: %d", x);
  printf("\n Valor guardado em y: %d", y);

  printf("\n Endereçode x: %x", &x);
  printf("\n Endereço de y: %x", &y);

  return 0;
}