Algoritmo "Lista 02 - Exerc�cio 11"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita o ano e diz se � bissexto.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
ano:inteiro

Inicio
// Entrada
escreva("Insira um ano no formato de 4 d�gitos: ")
leia(ano)

// Sa�da
se (ano % 4 = 0) e ((ano % 100 <> 0) ou (ano % 400 = 0)) entao
   escreva("O ano ", ano:1, " � bissexto.")
 senao
      escreva("O ano ", ano:1, " n�o � bissexto.")
fimse

Fimalgoritmo