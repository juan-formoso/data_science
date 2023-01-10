// Lista Duplamente Ligada: cada nó tem referências para o próximo e para o nó anterior da lista

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
struct node {
  int value;
  struct node *previous;
  struct node *next;
};

// Função para criar um novo nó
struct node *create_node(int value) {
  struct node *new_node = malloc(sizeof(struct node));
  new_node -> value = value;
  new_node -> previous = NULL;
  new_node -> next = NULL;

  return new_node;
}

int main() {
  // Criando a cabeça da lista
  struct node *head = create_node(0);
  head -> previous = NULL;

  // Adicionando nós
  head -> next = create_node(1);
  head -> next -> previous = head;
  head -> next -> next = create_node(2);
  head -> next -> next -> previous = head -> next;
  head -> next -> next -> next = create_node(3);
  head -> next -> next -> next -> previous = head -> next -> next;

  // Imprimindo os valores dos nós
  struct node *current = head;
  while (current != NULL) {
    printf("%d\n", current -> value);
    current = current -> next;
  }

  return 0;
}