Algoritmo "Lista 01 - Exerc�cio 20"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe cinco n�meros e devolve a m�dia ponderada deles
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
num_1, num_2, num_3, num_4, num_5, media:real

Inicio
// Entrada
escreva("Digita o Primeiro N�mero: ")
leia(num_1)
escreva("Digite o Segundo N�mero: ")
leia(num_2)
escreva("Digita o Terceiro N�mero: ")
leia(num_3)
escreva("Digite o Quarto N�mero: ")
leia(num_4)
escreva("Digita o Quinto N�mero: ")
leia(num_5)

// Processamento
media <- ((num_1*2)+(num_2*4)+(num_3*2)+(num_4*5)+(num_5*3))/16

// Sa�da
escreva("A m�dia ponderada dos cinco n�meros �: ",media:1:2)

Fimalgoritmo