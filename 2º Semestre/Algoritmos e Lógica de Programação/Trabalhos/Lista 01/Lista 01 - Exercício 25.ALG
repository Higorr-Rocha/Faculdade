Algoritmo "Lista 01 - Exerc�cio 25"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita tr�s valores e apresenta a soma de 40% do 1�,
//               com 31% do 2� e 14% do 3�
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
num_1, num_2, num_3, soma:real

Inicio
// Entrada
escreva("Digite o primeiro n�mero: ")
leia(num_1)
escreva("Digite o segundo n�mero: ")
leia(num_2)
escreva("Digite o terceiro n�mero: ")
leia(num_3)

// Processamento
num_1 <- num_1*0.46
num_2 <- num_2*0.31
num_3 <- num_3*0.14
soma <- num_1 + num_2 + num_3

// Sa�da
escreva("A soma de 40% do 1�, 31% do 2� e 14% do 3� �: ", soma:1:2)

Fimalgoritmo