/*MANEIRAS DE VERIFICAR SE UMA FILA ESTÁ VAZIA*/

// 1. Se a implementação for via array, verifique se "head > tail". Isso significa que todos os elementos na fila foram removidos e a lista está vazia

if (head > tail) {
  printf("Queue is empty\n");
};

// 2. Se a implementação for via lista encadeada, verifique se "head == NULL". Isso significa que não há nós na lista, logo, está vazia

if (head == NULL) {
  printf("Queue is empty\n");
};

// 3. Utilize uma estrutura de dados auxiliar (como um contador) para armazenar o número de elementos na fila. Se o contador for igual a zero, a fila está vazia

int count = 0;

void enqueue() {
  count++;
};

void dequeue() {
  count--;
};

if (count == 0) {
  printf("Queue is empty\n");
};