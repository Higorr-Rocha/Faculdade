Algoritmo "Lista 06 - Exerc�cio 03"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Autor(a)    : Higor Rocha
// Data atual  : 16/10/2024
Var
   num: vetor [1..7] de inteiro
   soma, i: inteiro
   media: real
Inicio
      soma <- 0
      para i de 1 ate 7 faca
           escreva("Digite a idade da ",i,"� Pessoa: ")
           leia(num[i])
      fimpara
      para i de 1 ate 7 faca
           soma <- soma + num[i]
      fimpara
      escreval("A m�dia das idades das 7 pessoas �: ",soma/7:1:2)
      
Fimalgoritmo