Algoritmo "Lista 01 - Exerc�cio 10"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Calcula o volume de uma Esfera.
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
r, vef:real

Inicio
// Entrada
escreva("Informe o Valor de R: ")
leia(r)

// Processamento
r <- r*r*r
vef <- ((4/3)*3.1416)*r

// Sa�da
escreva("O volume da esfera �: ", vef:1:2)

Fimalgoritmo