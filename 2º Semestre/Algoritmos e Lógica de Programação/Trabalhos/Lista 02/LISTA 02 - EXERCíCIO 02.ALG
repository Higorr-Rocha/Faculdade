Algoritmo "Lista 02 - Exerc�cio 02"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita um valor e informa se � positivo, negativo ou Zero.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
valor:inteiro

Inicio
// Entrada
escreva("Insira um valor: ")
leia(valor)

// Sa�da
se valor > 0 entao
   escreva("Esse valor � positivo!")
 senao
      se valor < 0 entao
         escreva("Esse valor � negativo!")
       senao
            se valor = 0 entao
               escreva("Esse valor � zero!")
            fimse
      fimse
fimse

Fimalgoritmo