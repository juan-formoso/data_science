// A chamada recursiva é a última instrução da função, então o compilador pode otimizar a função para que ela não precise de uma pilha de execução. Isso é chamado de "recursão em cauda".

int fatorial_recursivo_em_cauda(int n, int acumulador) {
  if (n == 0) {
    return acumulador;
  }

  return fatorial_recursivo_em_cauda(n - 1, acumulador * n);
}

int fatorial (int n) {
  return fatorial_recursivo_em_cauda(n, 1);
}

// A função "fatorial" é um envoltório que chama a função recursiva em cauda com os valores corretos de "n" e "acumulador".