Algoritmo "Lista 01 - Exerc�cio 26"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita o nome e o sal�rio de uma pessoa e
//               apresenta o sal�rio reduzido de 12,6%
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
nome: caractere
salario, desconto: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva("Insira seu sal�rio: ")
leia(salario)

// Processamento
desconto <- salario - (salario*0.126)

// Sa�da
escreval("Caro ",nome,", seu sal�rio com 12,6% de desconto � de: R$",desconto:1:2)

Fimalgoritmo