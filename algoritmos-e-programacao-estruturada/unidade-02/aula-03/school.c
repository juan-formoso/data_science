// Crie um programa que transforma o nome dos alunos digitados em letras maiúsculas.

#include <stdio.h>
#include <ctype.h>

#define NOME_TAM 30

int main(void) {
  char nome[NOME_TAM];
  
  printf("\nDigite o nome do(a) aluno(a): ");
  fgets(nome, NOME_TAM, stdin);
  printf("\nNome ANTES da mudança: %s", nome);

  for (int index = 0; index < NOME_TAM; index++) {
    nome[index] = toupper(nome[index]);
  }

  printf("\nNome DEPOIS da mudança: %s", nome);

  return 0;
}