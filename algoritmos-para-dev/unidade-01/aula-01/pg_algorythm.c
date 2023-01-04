/* 
Algoritmo em pseudocódigo que retorna se um cliente possui a idade dentro da faixa etária para assistir um filme ou não.
*/

Algoritmo "Verifica classificação indicativa" {


Var
    class_indicativa, idade_cliente: Inteiro


Inicio
    Escreval("Informe sua idade: ")
    Leia(idade_cliente)

    Escreval("Informe a classificação indicativa do filme: ")
    Leia(class_indicativa)
    
    se (idade <= class_indicativa) entao
        Escreval("Este filme não é indicado para sua faixa etária")

        senao("Este filme é indicado para sua faixa etária")

    fimse
}

FimAlgoritmo