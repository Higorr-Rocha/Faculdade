Algoritmo "Lista 02 - Exerc�cio 04"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita dois valores e informa qual � maior e qual � menor.
//               Se forem iguais informa.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
num_1, num_2:inteiro

Inicio
// Entrada
escreva("Insira um n�mero: ")
leia(num_1)
escreva("Insira outro n�mero: ")
leia(num_2)

// Sa�da
se num_1 > num_2 entao
   escreval(num_1:1," � maior!")
   escreva(num_2:1," � menor!")
 senao
      se num_2 > num_1 entao
         escreval(num_2:1," � maior!")
         escreva(num_1:1," � menor!")
       senao
            escreva("Os n�meros s�o iguais.")
      fimse
fimse
Fimalgoritmo