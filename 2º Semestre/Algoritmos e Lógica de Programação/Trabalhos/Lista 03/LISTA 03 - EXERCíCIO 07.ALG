Algoritmo "Lista 03 - Exerc�cio 07"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno
// Descri��o   : Solicita 15 n�meros entre 10 e 50 e apresenta a m�dia.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
num, soma, cont: inteiro

Inicio
// Inicializa��o
cont <- 0

// Entrada e Processamento
repita
     escreva("Digite um n�mero entre 15 e 50: ")
     leia(num)
     se (num >= 15) e (num <= 50) entao
        soma <- soma + num
        cont <- cont + 1
     senao
        escreval("N�mero inv�lido!")
     fimse
ate cont = 15

// Sa�da
escreva("A m�dia dos n�meros �: ", soma / 15:1:2)

Fimalgoritmo