Algoritmo "Lista 05 - Exerc�cio 09"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe um n�mero real e apresenta a parte decimal.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   num: real
//----------------------------------------------------------------------------
procedimento decimal (VAR num: real)
inicio
      num <- num - int(num)
fimprocedimento
//----------------------------------------------------------------------------
Inicio
      escreva("Digite um n�mero real: ")
      leia(num)
      decimal(num)
      escreva(num:1:2)
Fimalgoritmo