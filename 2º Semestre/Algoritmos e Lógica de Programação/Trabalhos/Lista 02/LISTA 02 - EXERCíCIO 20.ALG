Algoritmo "Lista 02 - Exerc�cio 20"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita 3 valores dos lados de um tri�ngulo e classifica
//               entre tri�ngulo equil�tero, is�sceles ou escaleno.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
valor_1, valor_2, valor_3: inteiro

Inicio
// Entrada
escreva("Digite o primeiro valor: ")
leia(valor_1)
escreva("Digite o segundo valor: ")
leia(valor_2)
escreva("Digite o terceiro valor: ")
leia(valor_3)

// Sa�da
se (valor_1 = valor_2) e (valor_2 = valor_3) entao
   escreva("Tri�ngulo Equil�tero.")
 senao
      se (valor_1 = valor_2) ou (valor_1 = valor_3) ou (valor_2 = valor_3) entao
         escreva("Tri�ngulo Is�sceles.")
       senao
            escreva("Tri�ngulo Escaleno.")
      fimse
fimse

Fimalgoritmo