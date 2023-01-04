#include <stdio.h>

int main(void) {
  int numero;
  
  printf("Insira um número inteiro: ");
  scanf("%d", numero);

  if (numero % 2 == 0) {
    printf("O número %d é par. \n", numero);
  } else {
    printf("O número %d é ímpar. \n", numero);
  }

  return 0;
}

// É importante lembrar que o operador módulo só pode ser usado com números inteiros. Se você deseja verificar se um número real é par ou ímpar, é necessário usar outra técnica (por exemplo, verificando se o número é menor ou igual a 0.5).