Algoritmo "Lista 01 - Exerc�cio 19"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe nome, idade, profiss�o e o sal�rio de uma pessoa.
//               Apresenta todos os dados e desconta 1,3% de seu sal�rio
//               para despesas de plano de sa�de.
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
nome, profi: caractere
idade: inteiro
salario, desconto: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva("Digite sua idade: ")
leia(idade)
escreva("Qual sua profiss�o? ")
leia(profi)
escreva("Insira seu sal�rio: ")
leia(salario)

// Processamento
desconto <- salario - (salario*0.0183)

// Sa�da
escreval("Caro ",nome,", de",idade," anos.")
escreval("Com a ocupa��o de: ",profi,".")
escreva("Seu sal�rio com 1,83% de desconto � de: R$",desconto:1:2)

Fimalgoritmo