Algoritmo "Lista 01 - Exerc�cio 07"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Calcula o volume de um Cone.
// Autor(a)    : Higor Rocha
// Data atual  : 05/08/2024
Var
r, h, vcn:real

Inicio
// Entrada
escreva("Informe o Valor de R: ")
leia(r)
escreva("Informe o Valor de H: ")
leia(h)

// Processamento
vcn <- ((r*r)*3.1416)/3

// Sa�da
escreva("O volume do cone �: ", vcn*h:1:2)

Fimalgoritmo