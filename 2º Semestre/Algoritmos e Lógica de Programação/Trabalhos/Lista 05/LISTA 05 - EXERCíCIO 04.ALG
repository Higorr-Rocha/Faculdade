Algoritmo "Lista 05 - Exerc�cio 04"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe um n�mero e diz se ele � ou n�o perfeito.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
num: inteiro
//----------------------------------------------------------------------------
funcao perfeito(num:inteiro): logico
var
       i, soma: inteiro
inicio
       soma <- 0
       para  i de 1 ate num - 1 faca
             se(num % i = 0) entao
                    soma <- soma + i
             fimse
       fimpara
       se(soma = num) entao
               retorne verdadeiro
       senao
            retorne falso
       fimse
fimfuncao
//----------------------------------------------------------------------------
Inicio
      escreva("Digite um n�mero inteiro: ")
      leia(num)
      se(perfeito(num)) entao
                        escreva("N�mero Perfeito")
      senao
           escreva("N�o � um n�mero perfeito.")
      fimse
Fimalgoritmo