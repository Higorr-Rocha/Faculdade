Algoritmo "Lista 06 - Exerc�cio 06"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Autor(a)    : Higor Rocha
// Data atual  : 16/10/2024
Var
   num_1: vetor [1..10] de inteiro
   num_2: vetor [1..10] de real
   num_3: vetor [1..10] de real
   i: inteiro
Inicio
      para i de 1 ate 10 faca
           escreva("Digite o ",i,"� N�mero: ")
           leia(num_1[i])
      fimpara
      para i de 1 ate 10 faca
           num_2[i] <- num_1[i] * 2
      fimpara
      para i de 1 ate 10 faca
           num_3[i] <- num_1[i] / 2
      fimpara
Fimalgoritmo