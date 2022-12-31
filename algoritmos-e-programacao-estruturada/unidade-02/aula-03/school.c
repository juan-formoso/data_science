// Crie um programa que transforma o nome dos alunos digitados em letras maiúsculas.

#include <stdio.h>
#include <ctype.h> // proporciona o uso de funções e macros para trabalhar com caracateres
#include <string.h>

#define NOME_TAM 30

int main(void) {
  char nome[NOME_TAM];
  
  printf("\nDigite o nome do(a) aluno(a): ");
  fgets(nome, NOME_TAM, stdin);

  // Verifica se o usuário digitou um nome
  if (nome[0] == "\n") {
    printf("\nVocê não digitou um nome!\n");
    return 1;
  }

  printf("\nNome ANTES da mudança: %s", nome);

  // Descobre o tamanho real do nome
  int nome_tam = strlen(nome);

  // Remove a quebra de linha no final do nome, caso ela exista
  if (nome[nome_tam - 1] == "\n") {
    nome[nome_tam - 1] = "\0";
  }

  // A função toupper converte uma letra minúscula em maiúscula
  for (int index = 0; index < nome_tam; index++) {
    nome[index] = toupper(nome[index]);
  }

  printf("\nNome DEPOIS da mudança: %s!", nome);

  return 0;
}