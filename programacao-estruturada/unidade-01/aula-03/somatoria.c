int somatoria(int arr[], int tamanho_arr) {
  if (tamanho_arr == 0) {
    return 0;
  }

  return arr[tamanho_arr - 1] + somatoria(arr, tamanho_arr - 1);
}

// Se o tamanho do array for diferente de zero, a função "somatoria" chama a si mesma passando o array e o tamanho do array - 1.

int main(void) {
  int arr[] = {1, 2, 3, 4};
  int resultado = somatoria(arr, 4); // 10

  return 0;
}