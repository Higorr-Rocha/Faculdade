Algoritmo "Lista 01 - Exerc�cio 08"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Calcula o volume de uma Pir�mide.
// Autor(a)    : Higor Rocha
// Data atual  : 05/08/2024
Var
l, h, vpd:real

Inicio
// Entrada
escreva("Informe o Valor de L: ")
leia(l)
escreva("Informe o Valor de H: ")
leia(h)

// Processamento
vpd <- l*l
h <- h * (h/3)

// Sa�da
escreva("O volume da pir�mide �: ", vpd*h:1:2)

Fimalgoritmo