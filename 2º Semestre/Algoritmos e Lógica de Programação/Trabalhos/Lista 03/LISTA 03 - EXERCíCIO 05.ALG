Algoritmo "Lista 03 - Exerc�cio 05"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Apresenta os n�meros de 30 a 5 na tela.(Na mesma linha)
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
num: inteiro

Inicio
// Entrada e Processamento
escreva("N�mero: ")
para num de 30 ate 5 passo -1 faca
      escreva(num:1)
      se num > 5 entao
         escreva(", ")
       senao
            escreva(".")
      fimse
      num <- num - 1
fimpara

Fimalgoritmo