Algoritmo "Lista 01 - Exerc�cio 30"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicite o nome, a idade, a cidade e o salario.
//               Apresente todos os dados com o sal�rio reajustado em 9,45%
// Autor(a)    : Higor Rocha
// Data atual  : 07/08/2024
Var
nome, cidade: caractere
idade: inteiro
salario, aumento: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva("Qual sua idade? ")
leia(idade)
escreva("Qual sua cidade? ")
leia(cidade)
escreva("Insira seu sal�rio: ")
leia(salario)

// Processamento
aumento <- salario + (salario*0.0945)

// Sa�da
escreval("Prezado(a) ",nome,", de ",idade," anos.")
escreval("Morador de ",cidade,".")
escreva("Seu sal�rio com 9,45% de reajuste � de: R$",aumento:1:2)
Fimalgoritmo