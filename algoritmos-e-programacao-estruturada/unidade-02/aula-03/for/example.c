/*
A estrutura "for" é utilizada para executar um trecho de código várias vezes.

Sintaxe:

for (inicialização; condição; incremento) {
  // código a ser executado
}
*/

#include <stdio.h>

int main(void) {
  int index;

  for (index = 1; index < 10; index++) {
    printf("%d", index);
  }

  return 0;
}

// Neste caso específico, a variável "index" é declarada e inicializada antes de ser utilizada na estrutura de repetição "for". Portanto, ela não conterá lixo de memória.