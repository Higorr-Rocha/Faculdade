Algoritmo "Lista 02 - Exerc�cio 07"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita tr�s n�meros e informa qual � o maior e o menor.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
num_1, num_2, num_3:inteiro

Inicio
// Entrada
escreva("Digite o 1� n�mero: ")
leia(num_1)
escreva("Digite o 2� n�mero: ")
leia(num_2)
escreva("Digite o 3� n�mero: ")
leia(num_3)

// Sa�da
se (num_1 > num_2) e (num_1 > num_3) entao
   escreval("O maior n�mero �: ", num_1:1)
 senao
      se (num_2 > num_1) e (num_2 > num_3) entao
         escreval("O maior n�mero �: ", num_2:1)
       senao
            escreval("O maior n�mero �: ", num_3:1)
      fimse
fimse
se (num_1 < num_2) e (num_1 < num_3) entao
   escreva("O menor n�mero �: ", num_1:1)
 senao
      se (num_2 < num_1) e (num_2 < num_3) entao
         escreva("O menor n�mero �: ", num_2:1)
       senao
            escreva("O menor n�mero �: ", num_3:1)
      fimse
fimse

Fimalgoritmo