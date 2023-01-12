// Fila é uma estrutur de dados do tipo "first-in, first-out". Observe a implementação via array:

#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int head = 0, tail = -1;

void enqueue(int value) {
  if (tail == MAX_SIZE - 1) {
    printf("Queue overflow\n");
  } else {
    tail++;
    queue[tail] = value;
  }
}