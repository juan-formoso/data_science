/*
Os operadores relacionais são utilizados para realizar comparações entre dois operandos e retorna um valor verdadeiro(1) ou falso (0).

 -----------------------------------------
| Operador | Descrição          | Exemplo |
|   ==     | igual a            |  x == y |
|   !=     | diferente de       |  x != y |
|    >     | maior que          |  x > y  |
|    <     | menor que          |  x < y  |
|   >=     | maior ou igual que |  x >= y |
|   <=     | menor ou igual que |  x <= y |
 -----------------------------------------
*/

#include <stdio.h>

int main(void) {
  int number1 = 0;
  int number2 = 0;

  printf("\n Digite o primeiro número: ");
  scanf("%d", &number1);

  printf("\n Digite o segundo número: ");
  scanf("%d", &number2);

  printf("\n numero1 e numero2 são iguais? %d", number1 == number2);
  printf("\n numero1 e numero2 são diferentes? %d", number1 != number2);
  printf("\n numero1 é maior que numero2? %d", number1 > number2);
  printf("\n numero1 é menor que numero2? %d", number1 < number2);
  printf("\n numero1 é maior ou igual a numero2? %d", number1 >= number2);
  printf("\n numero1 é menor ou igual a numero2? %d", number1 <= number2);

  return 0;
}