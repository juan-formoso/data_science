// Lista é uma estrutura de dados composta por nó onde cada um nó tem uma referência ao próximo nó.

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
struct node {
  int value;
  struct node *next;
};

// Função para criar um novo nó
struct node *create_node(int value) {
  struct node *new_node = malloc(sizeof(struct node));
  new_node -> value = value;
  new_node -> next = NULL;
  return new_node;
};

int main() {
  // Criando a cabeça da lista
  struct node *head = create_node(0);

  // Adicionando alguns nós
  head -> next = create_node(1);
  head -> next -> next = create_node(2);
  head -> next -> next -> next = create_node(3);

  // Imprimindo os valores dos nós
  struct node *current = head;
  while (current != NULL) {
    printf("%d\n", current -> value);
    current = current -> next;
  }

  return 0;
}