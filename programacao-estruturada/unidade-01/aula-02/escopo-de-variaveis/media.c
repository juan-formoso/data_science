#include <stdio.h>

float f1, f2;

float calcularMedia() {
  return (f1 + f2) / 2;
}

int main(void) {
  printf("\nDigite as duas temperaturas: ");
  scanf("%f %f", &f1, &f2);
  printf("\nA temperatura média é de %.2f", calcularMedia());

  return 0;
}