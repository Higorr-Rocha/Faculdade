Algoritmo "Lista 01 - Exerc�cio 28"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita dois valores e apresenta a soma de ambos com
//               desconto de 58%
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
num_1, num_2, soma:real

Inicio
// Entrada
escreva("Digite o primeiro n�mero: ")
leia(num_1)
escreva("Digite o segundo n�mero: ")
leia(num_2)

// Processamento
soma <- num_1 + num_2
soma <- soma - (soma*0.58)

// Sa�da
escreva("A soma de ambos com desconto de 58% �: ", soma:1:2)

Fimalgoritmo