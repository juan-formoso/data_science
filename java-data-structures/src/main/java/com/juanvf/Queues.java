package com.juanvf;

import java.util.Queue;
import java.util.LinkedList;

public class Queues {
    public static void main(String[] args) {
        // criando uma fila vazia
        Queue<String> queue = new LinkedList<>();

        // adicionando elementos na fila
        queue.add("element 1");
        queue.add("element 2");
        queue.add("element 3");

        // exibindo o tamanho da fila
        System.out.println("Tamanho da fila: " + queue.size());

        // exibindo o primeiro elemento da fila
        System.out.println("Primeiro elemento: " + queue.peek());

        // removendo o primeiro elemento da fila
        queue.remove();

        // exibindo o tamanho da fila novamente
        System.out.println("Tamanho da fila: " + queue.size());

        // exibindo todos os elementos da fila
        for(String element : queue) {
            System.out.println(element);
        }
    }
}