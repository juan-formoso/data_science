/*
Sintax:

switch (expression) {
  case value 1:
    // code to be executed if expression is equal to value 1
    break;
  case value 2:
    // code to be executed if expression is equal to value 2
    break;
  ...
  default:
    // code to be executed if expression doesn't match any value
}
*/

#include <stdio.h>

int main(void) {
  int number = 2;

  switch (number) {
    case 1:
      printf("Number is 1\n");
      break;
    case 2:
      printf("Number is 2\n");
      break;
    case 3:
      printf("Number is 3\n");
      break;
    default:
      printf("Number is different from 1, 2 and 3\n");
  }

  return 0;
}