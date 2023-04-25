package com.juanvf;

import java.util.Set;
import java.util.HashSet;

public class Sets {
    public static void main(String[] args) {
        // criando um Hashset de string
        Set<String> conjunto = new HashSet<>();

        // adicionando elementos ao conjunto
        conjunto.add("elemento 1");
        conjunto.add("elemento 2");
        conjunto.add("elemento 3");

        // exibindo o tamanho do conjunto
        System.out.println("Tamanho do conjunto: " + conjunto.size());

        // exibindo todos os elementos do conjunto
        for (String elemento : conjunto) {
            System.out.println(elemento);
        }

        // removendo um elemento do conjunto
        conjunto.remove("elemento 2");

        // exibindo o tamanho do conjunto novamente
        System.out.println("Tamanho do conjunto: " + conjunto.size());

        // verificando se o conjunto contém um elemento específico
        boolean contemElemento = conjunto.contains("elemento 3");
        System.out.println("O conjunto contém o elemento 3? " + contemElemento);

        // limpando o conjunto
        conjunto.clear();

        // verificando se o conjunto está vazio
        boolean conjuntoVazio = conjunto.isEmpty();
        System.out.println("O conjunto está vazio? " + conjuntoVazio);
    }
}
