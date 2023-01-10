// Impressão de elementos em lista

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

// Função para imprimir os elementos de uma lista simplesmente ligada
void print_list(struct node *head) {
  struct node *current = head;
  while (current != NULL) {
    printf("%d\n", current -> value);
    current = current -> next;
  }
}

int main() {
  // Criando a cabeça da lista
  struct node *head = create_node(0);

  // Adicionando alguns nós
  head -> next = create_node(1);
  head -> next -> next = create_node(2);
  head -> next -> next -> next = create_node(3);

  // Imprimindo os valores dos nós
  print_list(head);

  return 0;
}