Algoritmo "Lista 03 - Exerc�cio 10"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita 10 n�meros, informa se � par ou �mpar e diz a m�dia
//               de n�meros �mpares.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 15/08/2024
Var
num, quant, quant_im, cont: inteiro

Inicio
// Entrada e Processamento
para cont de 1 ate 10 faca
     escreva("Digite um n�mero: ")
     leia(num)
     se num % 2 = 0 entao
        escreval("Par.")
      senao
           escreval("�mpar.")
           quant_im <- quant_im + 1
     fimse
     quant <- quant + 1
fimpara

// Sa�da
escreva("A m�dia dos n�meros �mpares �: ", quant_im / 10:1:2)

Fimalgoritmo