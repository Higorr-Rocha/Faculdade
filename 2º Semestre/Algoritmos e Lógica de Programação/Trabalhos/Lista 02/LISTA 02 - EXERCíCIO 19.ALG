Algoritmo "Lista 02 - Exerc�cio 19"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita dois valores e informa a subtra��o e o
//               produto do maior pelo menor.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
num_1, num_2:inteiro

Inicio
// Entrada
escreva("Insira o 1� n�mero: ")
leia(num_1)
escreva("Insira o 2� n�mero: ")
leia(num_2)

// Sa�da
se num_1 > num_2 entao
   escreval("A subtra��o do maior pelo menor �: ",num_1-num_2:1)
   escreva("O produto do maior pelo menor �: ",num_1*num_2:1)
 senao
      escreval("A subtra��o do maior pelo menor �: ",num_2-num_1:1)
      escreva("O produto do maior pelo menor �: ",num_2*num_1:1)
fimse

Fimalgoritmo