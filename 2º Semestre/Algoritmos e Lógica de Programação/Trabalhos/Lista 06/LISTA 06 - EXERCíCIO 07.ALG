Algoritmo "Lista 06 - Exerc�cio 07"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Autor(a)    : Higor Rocha
// Data atual  : 16/10/2024
Var
   num: vetor [1..5] de inteiro
   negativo, i: inteiro
Inicio
      negativo <- 0
      para i de 1 ate 5 faca
           escreva("Digite o ",i,"� N�mero: ")
           leia(num[i])
      fimpara
      para i de 1 ate 5 faca
           escreval("N�mero: ",num[i]:1)
      fimpara
      para i de 1 ate 5 faca
           se (num[i] < 0) entao
              negativo <- negativo + 1
           fimse
      fimpara
      escreva("Quantidade de n�meros negativos: ",negativo)
Fimalgoritmo