Algoritmo "Lista 06 - Exerc�cio 01"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Autor(a)    : Higor Rocha
// Data atual  : 16/10/2024
Var
   num: vetor [1..10] de inteiro
   soma, i: inteiro
Inicio
      soma <- 0
      para i de 1 ate 10 faca
           escreva("Digite o ",i,"� N�mero: ")
           leia(num[i])
      fimpara
      para i de 1 ate 10 faca
           soma <- soma + num[i]
      fimpara
      escreva("A Soma dos 10 N�meros �: ",soma:1)
      
Fimalgoritmo