Algoritmo "Lista 03 - Exerc�cio 01"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita o nome e idade de 3 pessoas.(Repita - at�)
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
idade, cont: inteiro
nome: caractere

Inicio
// Entrada e Processamento
cont <- 0
repita
      escreva("Qual seu Nome? ")
      leia(nome)
      escreva("Qual sua idade? ")
      leia(idade)
      cont <- cont + 1
ate cont = 3

Fimalgoritmo