Algoritmo "Lista 01 - Exerc�cio 01"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe nome e sal�rio e entrega o sal�rio com 28,5% de aumento
// Autor(a)    : Higor Rocha
// Data atual  : 05/08/2024
Var
nome: caractere
salario, aumento: real

Inicio
// Entrada de Dados
escreva("Digite seu nome: ")
leia(nome)
escreva(nome,", insira seu sal�rio: ")
leia(salario)

// Processamento
aumento <- salario + (salario*0.285)

// Sa�da
escreva(nome,", seu sal�rio com 28,5% de aumento �: R$",aumento:1:2)

Fimalgoritmo