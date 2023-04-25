package com.juanvf;

import java.util.LinkedList;

public class WorkingWithLinkedLists {
    public static void main(String[] args) {
        // criando uma lista encadeada vazia
        LinkedList<String> lista = new LinkedList<>();

        // adicionando elementos na lista
        lista.add("elemento 1");
        lista.add("elemento 2");
        lista.add("elemento 3");

        // exibindo o tamanho da lista
        System.out.println("Tamanho da lista: " + lista.size());

        // exibindo o primeiro e o último elemento da lista
        System.out.println("Primeiro elemento: " + lista.getFirst());
        System.out.println("Último elemento: " + lista.getLast());

        // removendo o primeiro elemento da lista
        lista.removeFirst();

        // exibindo o tamanho da lista novamente
        System.out.println("Tamanho da lista: " + lista.size());

        // exibindo todos os elementos da lista
        for (String elemento : lista) {
            System.out.println(elemento);
        }
    }
}
