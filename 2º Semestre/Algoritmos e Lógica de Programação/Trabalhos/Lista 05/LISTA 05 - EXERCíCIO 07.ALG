Algoritmo "Lista 05 - Exerc�cio 07"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe a m�dia de um aluno e informa seu conceito.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
cont: inteiro
//----------------------------------------------------------------------------
funcao fatorial (cont:inteiro): inteiro
var
   fato, i: inteiro
inicio
      i <- 1
      fato <- cont
      enquanto (i < cont) faca
           fato <- fato * (cont - i)
           i <- i + 1
      fimenquanto
      retorne fato
fimfuncao
//----------------------------------------------------------------------------
Inicio
      para cont de 0 ate 10 faca
           escreval("Fatorial de ",cont:1,": ",fatorial(cont):1)
      fimpara
Fimalgoritmo