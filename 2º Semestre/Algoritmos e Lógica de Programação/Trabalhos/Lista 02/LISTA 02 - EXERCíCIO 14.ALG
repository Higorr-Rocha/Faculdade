Algoritmo "Lista 02 - Exerc�cio 14"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita tr�s nomes e informa qual � maior (Ordem Alfab�tica).
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
nome_1, nome_2, nome_3:caractere

Inicio
// Entrada
escreva("Digite o 1� nome: ")
leia(nome_1)
escreva("Digite o 2� nome: ")
leia(nome_2)
escreva("Digite o 3� nome: ")
leia(nome_3)

// Sa�da
se (nome_1 > nome_2) e (nome_1 > nome_3) entao
   escreval("O maior nome �: ", nome_1)
 senao
      se (nome_2 > nome_1) e (nome_2 > nome_3) entao
         escreval("O maior nome �: ", nome_2)
       senao
            escreval("O maior nome �: ", nome_3)
      fimse
fimse

Fimalgoritmo