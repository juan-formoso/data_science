/*
Sintaxe:

tipo_de_retorno nome_da_funcao (parametros) {
  // código da função
}

Tipo de retorno é o tipo de dado que a função retorna, caso não retorne nada, usa-se void.
*/

int maior(int x, int y);

int main() {
  int m = maior(10, 20); // m recebe 20

  return 0;
}

int maior(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}