Algoritmo "Lista 05 - Exerc�cio 12"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe uma string e verifica se ela s� tem n�meros.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   string: caractere
//----------------------------------------------------------------------------
funcao verificacao (seque:caractere): logico
var
   i: inteiro
   num: logico
   c: caractere
inicio
      para i de 1 ate compr(seque) faca
           c <- copia(seque,i,1)
           se (asc(c) < 48) ou (asc(c) > 57) entao
              num <- falso
           fimse
      fimpara
      retorne num
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite sua senha: ")
      leia(string)
      se (verificacao(string)) entao
         escreva("Possui apenas n�meros.")
      senao
           escreva("N�o possui apenas n�meros.")
      fimse
Fimalgoritmo