/*
Sintaxe da criação: <tipo_dado> <nome_da_matriz> [numero_linhas] [numero_colunas];

Exemplos:
  int coordenadas [3][2];
  float temperaturas [7][2];

A criação e manipulação de matrizes bidimensionais depende de dois índices:

  matriz [M][N] -> os índices iniciam em zero.
  M = Linha
  N = Coluna
*/

#include <stdio.h>

int main() {
  float notas [3][2];

  // aluno 1
  notas [0][0] = 10;
  notas [0][1] = 8.5;

  // aluno 2
  notas [1][0] = 5.5;
  notas [1][1] = 2.7;

  // aluno 3
  notas [2][0] = 4;
  notas [2][1] = 10;

  return 0;
}

/*
                    Nota 1      Nota 2
                    Coluna 0    Coluna 1
                   -----------------------
Aluno 1 - Linha 0 |   10.0    |    8.5    |
Aluno 2 - Linha 1 |   5.5     |    2.7    |
Aluno 3 - Linha 2 |   4.0     |    10.0   |
                   -----------------------
*/