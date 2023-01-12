/*
Estrutura da potenciação:

  a^b

  2² -> 2 * 2

  2³ -> 2 * 2 * 2

  2⁴ -> 2 * 2 * 2 * 2

Atente-se para a lógica entre o número de repetições e a variável b (Dica: observe que a variável b é quem irá controlar a quantidade de repetições)

Estrutura do algoritmo:
  1. Início e declaração de variáveis
  2. Obtenção dos valores das variáveis pelo usuário
  3. Cálculo do exponencial
  4. Impressão do resultado
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  int a = 0, b = 0;

  printf("\nDigite o valor da base: ");
  scanf("%d", &a);

  printf("\nDigite o valor do expoente: ");
  scanf("%d", &b);

  if (a <= 0) {
    printf("\nValor inválido para base.");
    return 1;
  }

  if (b <= 0) {
    printf("\nValor inválido para expoente. Não é possível calcular potência com expoente negativo.");
    return 1;
  }

  double result = pow(a, b);

  printf("\nO resultado de %d elevado a %d é %.2lf", a, b, result);
  printf("\n\nObrigado por utilizar nosso programa! :)");

  return 0;
}