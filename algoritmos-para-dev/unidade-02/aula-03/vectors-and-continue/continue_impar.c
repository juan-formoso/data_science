// Imprime somente números ímpares

#include <stdio.h>

int main(void) {
  for (int index = 1; index <= 30; index++) {
    if (index % 2 == 0) {
      continue;
    }

    printf("%d\n", index);
  }

  return 0;
}

// O comando "continue" só pode ser utilizado dentro de laços. No entanto, o comando "break" pode ser utilizado em laços ou nas instruções "switch".