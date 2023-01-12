// Fornece maior flexibilidade em termos de alocação de memória

#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct queue {
  struct node *head, *tail;
};

void enqueue(struct queue *q, int value) {
  struct node *new_node = (struct node *) malloc(sizeof(struct node));

  new_node -> value = value;
  new_node -> next = NULL;

  if (q -> tail == NULL) {
    q -> head = q -> tail = new_node;
    return;
  }

  q -> tail -> next = new_node;
  q -> tail = new_node;
};

int dequeue(struct queue *q) {
  if (q -> head == NULL) {
    printf("Queue underflow\n");
    return -1;
  }

  int value = q -> head -> value;
  struct node *temp = q -> head;
  q -> head = q -> head -> next;

  if (q -> head == NULL) {
    q -> tail = NULL;
  }

  free(temp);

  return value;
}

// A fila é representada por queue que contém ponteiros para head e tail