package com.juanvf;

import java.util.Stack;

public class Stacks {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        stack.push(1); // adiciona elemento
        stack.push(2);
        stack.push(3);
        System.out.println(stack.peek()); // vê o elemento do topo
        System.out.println(stack.size()); // verifica o tamanho da pilha
        System.out.println(stack.pop()); // retira o elemento do topo
        System.out.println(stack.size());
        System.out.println(stack.empty()); // verifica se a pilha está vazia
    }
}
