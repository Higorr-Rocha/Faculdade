Algoritmo "Lista 03 - Exerc�cio 08"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Apresenta os n�meros pares entre 5 e 50 na tela.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
num: inteiro

Inicio
// Inicializa��o
num <- 5

// Entrada e Processamento
escreva("N�mero: ")
repita
      se num % 2 = 0 entao
         escreva(num:1)
       se num < 50 entao
          escreva(", ")
        senao
             escreva(".")
       fimse
      fimse
      num <- num + 1
ate num > 50

Fimalgoritmo