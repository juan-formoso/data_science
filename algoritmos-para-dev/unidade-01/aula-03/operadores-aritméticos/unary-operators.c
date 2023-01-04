/*
Acrescentam ou diminuem "um" ao valor de uma variável e podem ser usados de duas formas:

  1) Após a variável (pós-incremento)
  2) Antes da variável (pré-incremento)

 -------------------------------------------------
| Operador | Descrição      | Exemplo | Resultado |
|    ++    | Pós-incremento |   x++   |   x + 1   |
|    ++    | Pré-incremento |   ++x   |   x + 1   |
|    --    | Pós-decremento |   y--   |   y - 1   |
|    --    | Pré-decremento |   --y   |   y - 1   |
 -------------------------------------------------
*/

#include <stdio.h>

int main(void) {
  int a = 10;

  // Incremento
  printf("a = %d \n", a++); // imprime "a = 10" e depois incrementa o valor de a em 1
  printf("a = %d \n", ++a) ;// incrementa o valor de a em 1 e depois imprime "a = 12"

  // Decremento
  printf("a = %d \n", a--); // imprime "a = 12" e depois decrementa o valor de a em 1
  printf("a = %d \n", --a); // decrementa o valor de a em 1 e depois imprime "a = 10"

  return 0;
}