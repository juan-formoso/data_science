package com.juanvf;

import java.util.HashMap;
import java.util.Map;

public class WorkingWithMaps {
    public static void main(String[] args) {
        // Criando um Map para armazenar informações de produtos
        Map<Integer, Produto> produtos = new HashMap<>();

        // Adicionando alguns produtos ao Map
        produtos.put(1, new Produto("Camiseta", 29.99));
        produtos.put(2, new Produto("Calça jeans", 79.99));
        produtos.put(3, new Produto("Tênis", 99.99));
        produtos.put(4, new Produto("Relógio", 149.99));

        // Exibindo as informações dos produtos
        for (Map.Entry<Integer, Produto> entry : produtos.entrySet()) {
            System.out.println("Produto #" + entry.getKey() + ": " + entry.getValue());
        }

        // Atualizando o preço da camiseta para R$ 34,99
        produtos.get(1).setPreco(34.99);

        // Exibindo as informações dos produtos novamente
        for (Map.Entry<Integer, Produto> entry : produtos.entrySet()) {
            System.out.println("Produto #" + entry.getKey() + ": " + entry.getValue());
        }

        // Removendo o produto com ID 3 (Tênis)
        produtos.remove(3);

        // Exibindo as informações dos produtos mais uma vez
        for (Map.Entry<Integer, Produto> entry : produtos.entrySet()) {
            System.out.println("Produto #" + entry.getKey() + ": " + entry.getValue());
        }
    }
}

class Produto {
    private String nome;
    private double preco;

    public Produto(String nome, double preco) {
        this.nome = nome;
        this.preco = preco;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    @Override
    public String toString() {
        return nome + " - R$ " + preco;
    }
}
