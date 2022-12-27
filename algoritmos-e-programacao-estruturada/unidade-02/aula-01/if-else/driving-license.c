// Estrutura Condicional Simples

#include <stdio.h>
int main(void) {
  int age = 0;
  
  printf("\n Enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
    printf("\n You are allowed to have a driving license.");
  }

  return 0;
}