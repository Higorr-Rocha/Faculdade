Algoritmo "Lista 02 - Exerc�cio 05"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita dois valores e informa qual � maior e qual � menor.
//               Se forem iguais informa.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
nome:caractere
idade:inteiro
salario:real

Inicio
// Entrada
escreva("Qual o seu nome? ")
leia(nome)
escreva("Qual sua idade? ")
leia(idade)
escreva("Digite seu sal�rio: ")
leia(salario)

// Sa�da
se idade <= 35 entao
   escreva(nome,", seu novo sal�rio � de R$",salario+salario*0.12:1,".")
 senao
      se (idade >35) e (<= 50) entao
         escreva(nome,", seu novo sal�rio � de R$",salario+salario*0.145:1,".")
       senao
            escreva(nome,", seu novo sal�rio � de R$",salario+salario*0.17:1,".")
      fimse
fimse
Fimalgoritmo