#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
struct node {
  int value;
  struct node *next;
};

// Função para criar novo nó
struct node *create_node(int value) {
  struct node *new_node = malloc(sizeof(struct node));
  new_node -> value = value;
  new_node -> next = NULL;
  return new_node;
}

// Função para inserir novo nó
void insert(struct node *head, int value, int position) {
  // Criando o novo nó
  struct node *new_node = create_node(value);

  // Caso de inserção no início da lista
  if (position == 0) {
    new_node -> next = head;
    head = new_node;
    return;
  }

  // Encontrando o nó anterior a posição de inserção
  struct node *current = head;
  for (int index = 0; index < position - 1 && current -> next != NULL; index++) {
    current = current -> next;
  }

  // Inserindo o novo nó na lista
  new_node -> next = current -> next;
  current -> next = new_node;
}

int main() {
  // Criando a cabeça da lista
  struct node *head = new_node(0);

  // Adicionando alguns nós
  head -> next = create_node(1);
  head -> next -> next = create_node(2);
  head -> next -> next -> next = create_node(3);

  // Inserindo um nó na posição 2
  insert(head, 999, 2);

  // Imprimindo os valores dos nós
  struct node *current = head;
  while (current != NULL) {
    printf("%d\n", current -> value);
    current = current -> next;
  }

  return 0;
}