Algoritmo "Lista 02 - Exerc�cio 08"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe duas notas, quantidade de aulas e quantia de presen�as.
//               Ap�s informa se foi aprovado ou reprovado.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
nota_1, nota_2:real
aulas, presen:inteiro

Inicio
// Entrada
escreva("Informe sua primeira nota: ")
leia(nota_1)
escreva("Informe sua segunda nota: ")
leia(nota_2)
escreva("Informe a quantidade de aulas da disciplina: ")
leia(aulas)
escreva("Informe a sua quantidade de presen�as na aula: ")
leia(presen)

// Sa�da
se ((nota_1+nota_2)/2 >= 6.0) e (presen >= aulas*0.75) entao
   escreva("Parab�ns! Voc� foi aprovado.")
 senao
      escreva("Sinto Muito! Voc� foi reprovado.")
fimse

Fimalgoritmo