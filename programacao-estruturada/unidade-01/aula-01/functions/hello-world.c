#include <stdio.h>

int hello(void);

int main(void) {
  hello(); // imprime "Hello, World!"
  return 0;
}

int hello(void) {
  printf("Hello, World!");
}