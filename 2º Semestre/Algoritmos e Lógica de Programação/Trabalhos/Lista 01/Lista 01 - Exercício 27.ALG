Algoritmo "Lista 01 - Exerc�cio 27"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita o nome, idade, sexo e sal�rio e apresenta o sal�rio
//               com aumento de 24,5%
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
nome, sexo: caractere
idade: inteiro
salario, aumento: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva("Qual sua idade? ")
leia(idade)
escreva("Qual seu sexo?(Use M,F ou O) ")
leia(sexo)
escreva("Insira seu sal�rio: ")
leia(salario)

// Processamento
aumento <- salario + (salario*0.245)

// Sa�da
escreval("Prezado(a) ",nome,", de ",idade," anos.")
escreval("De sexo ",sexo)
escreva("Seu sal�rio com 24,5% de aumento � de: R$",aumento:1:2)

Fimalgoritmo