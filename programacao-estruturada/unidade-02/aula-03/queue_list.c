// Exemplo de fila implementada como lista encadeada

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *head = NULL, *tail = NULL;

void enqueue(int value) {
  struct node *new_node = (struct node *) malloc(sizeof(struct node));

  new_node -> value = value;
  new_node -> next = NULL;

  if (tail == NULL) {
    head = tail = new_node;
    return;
  }

  tail -> next = new_node;
  tail = new_node;
};

int dequeue() {
  if (head == NULL) {
    printf("Queue underflow\n");
    return -1;
  }

  int value = head -> value;
  struct node *temp = head;
  head = head -> next;

  if (head == NULL) {
    tail = NULL;
  }

  free(temp);

  return value;
}