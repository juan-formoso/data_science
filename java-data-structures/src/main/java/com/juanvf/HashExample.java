package com.juanvf;

import java.util.HashMap;
import java.util.Map;

public class HashExample {
    public static void main(String[] args) {
        // Criando um Map para armazenar informações de alunos
        Map<Aluno, Integer> notas = new Hashmap<>();

        // Adicionando alguns alunos ao Map
        Aluno aluno 1 = new ALuno("João", 123456789);
        notas.put(aluno1, 7);

        Aluno aluno2 = new Aluno("Maria", 987654321);
        notas.put(aluno2, 8);

        // Tentando recuperar a nota do aluno1 usando uma nova instância de Aluno com o mesmo número de matrícula
        Aluno aluno3 = new Aluno("João", 123456789);
        Integer nota = notas.get(aluno3);

        // Exibindo a nota do aluno1
        System.out.println("A nota do aluno " + aluno1.getNome() + " é " + nota);
    }
}

class Aluno {
    private String nome;
    private int matricula;

    public Aluno(String nome, int matricula) {
        this.nome = nome;
        this.matricula = matricula;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    @Override
    public boolean equals(Object obj) {
        // Comparando se dois alunos são iguais baseados na matrícula
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Aluno other = (Aluno) obj;
        if (matricula != other.matricula)
            return false;
        return true;
    }
}
