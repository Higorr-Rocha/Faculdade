Algoritmo "Lista 05 - Exerc�cio 05"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe o raio de um c�rculo e informa seu volume.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   raio: inteiro
//----------------------------------------------------------------------------
funcao volume (raio:inteiro): real
var
   vol: real
inicio
      vol <- 4/3 * 3.141592 * exp(raio,3)
      retorne vol
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite o raio: ")
      leia(raio)
      escreva(volume(raio):1:2)
Fimalgoritmo