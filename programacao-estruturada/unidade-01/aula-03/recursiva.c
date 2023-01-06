// A função recursiva é uma função que chama a si mesma.

int fatorial (int n) {
  if (n == 0) {
    return 1;
  }

  return n * fatorial(n - 1);
}

// A função "fatorial" é chamada recursivamente até que o valor de "n" seja zero.