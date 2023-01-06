/*
Definição: int testar (int v1[], int v2[]);

Chamada: result = testar(v1, v2);
*/

#include <stdio.h>

void inserir(int a[]) {
  int index;
  
  for (index = 0; index < 3; index++) {
    printf("\nDigite o valor %d: ", index);
    scanf("%d", &a[index]);
  }
}

void imprimir(int b[]) {
  int index;

  for (index = 0; index < 3; index++) {
    printf("\nNúmero [%d] = %d", index, 2 * b[index]);
  }
}

int main(void) {
  int numeros[3];

  printf("\nPreenchendo o vetor... \n");
  inserir(numeros);

  printf("\nDobro dos valores informados: \n");
  imprimir(numeros);

  return 0;
}