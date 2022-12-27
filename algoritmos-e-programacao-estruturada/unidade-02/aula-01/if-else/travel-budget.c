// Estrutura condicional composta

#include <stdio.h>

int main(void) {
  float budget = 0.0;

  printf("\n Enter the travel budget amount: \n");
  scanf("%f", &budget);

  if (budget >= 10000) {
    printf("\n Jack and Lucy can choose for an international trip.");
  } else {
    printf("\n Jack and Lucy will have to choose for a national trip.");
  }

  return 0;
}