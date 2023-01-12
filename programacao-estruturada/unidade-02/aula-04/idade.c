// Crie um programa que o usuário informe sua idade e caso seja maior ou igual a 18 imprima a mensagem "Maior de idade" e caso contrário "Menor de idade"

#include <stdio.h>

#define MAIOR_IDADE 18

int main(void) {
  int idade = 0;
  
  printf("\nInforme sua idade: ");
  scanf("%d", &idade);

  // Validação da idade
  if (idade <= 0) {
    printf("\nIdade inválida.");
    return 1;
  }

  if (idade >= MAIOR_IDADE) {
    printf("\nVocê é maior de idade!");
  } else {
    printf("\nVocê é menor de idade!");
  }

  printf("\n\nObrigado por utilizar nosso programa! :)");

  return 0;
}