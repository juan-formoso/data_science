// O comando "continue" é utilizado dentro de uma estrutura de reptição para pular para a próxima iteracão sem executar o código restante da iteracão atual. Por exemplo, o código abaixo irá imprimir somente os números pares do vetor:

#include <stdio.h>

int main(void) {
  int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index;

  for (index  = 0; index < 10; index++) {
    if (vetor[index] % 2 != 0) {
      continue;
    }

    printf("%d\n", vetor[index]);
  }

  return 0;
}

// A variável "index" acessa os elementos do vetor. O "if" vereifica se o elemento atual é ímpar. Se for, o "continue" é executado e o código abaixo é ignorado. Caso contrário, o número é impresso.