Algoritmo "Lista 05 - Exerc�cio 01"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe um pot�ncia e faz o calculo dela.
// Autor(a)    : Higor Rocha
// Data atual  : 08/10/2024
Var
base, expo: inteiro
//----------------------------------------------------------------------------
funcao poten(base, expo:inteiro): inteiro
var
   x, num: inteiro
inicio
      num <- 1
      para x de 1 ate expo faca
         num <- num * base
      fimpara
      retorne num
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite a Base: ")
      leia(base)
      escreva("Digite o expoente: ")
      leia(expo)
      escreva("Resultado: ",poten(base,expo):1)

Fimalgoritmo