Algoritmo "Lista 05 - Exerc�cio 03"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe um n�mero e diz se � ou n�o primo.
// Autor(a)    : Higor Rocha
// Data atual  : 08/10/2024
Var
num: inteiro

funcao primo(p:inteiro): logico
var
   qd, x: inteiro
inicio
      qd <- 1
      x <- 1
      enquanto ((qd < 3) e (x < p)) faca
               x <- x + 1
               se (p % x = 0) entao
                  qd <- qd + 1
               fimse
      fimenquanto
      se (qd = 2) entao
         retorne verdadeiro
      senao
           retorne falso
      fimse
fimfuncao

Inicio
      escreva("Digite um n�mero: ")
      leia(num)
      se (num = 1) entao
         escreva("N�mero Primo")
      senao
           se (primo(num)) entao
              escreva("N�mero Primo.")
           senao
                escreva("N�o � Primo.")
           fimse
      fimse

Fimalgoritmo