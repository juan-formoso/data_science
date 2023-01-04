// Customer discount according to the choice of a specific color marked on each product

#include <stdio.h>

int main(void) {
  char color = ' ';
  float price = 0.0, discount = 0.0, total = 0.0;

  printf("\n Enter the product price: ");
  scanf("%f", &price);

  printf("\n Enter the letter that represents your discount according to the color: ");
  printf("\n b - blue");
  printf("\n r - red");
  printf("\n w - white");
  printf("\n Enter your option: ");
  scanf("%s", &color);

  switch (color) {
    case 'b':
      printf("\n You chose the blue color, your discount will be of 30%!");
      discount = 30;
      break;
    case 'r':
      printf("\n You chose the red color, your discount will be of 20%!");
      discount = 20;
      break;
    case 'w':
      printf("\n You chose the white color, your discount will be of 10%!");
      discount = 10;
      break;
    default:
      printf("\nInvalid option. It will not be applied any discount.\n");
      discount = 0;
  }

  total = price - (price * discount / 100);
  printf("\n The total amount to be paid is: %.2f", total);

  return 0;
}