// Usando "break" para forçar o término de um laço.

#include <stdio.h>

int main(void) {
  int stop = 30;

  for (int index = 0; index < 100; index++) {
    if (index == stop) {
      break;
    }

    printf("%d", index);
  }

  return 0;
}