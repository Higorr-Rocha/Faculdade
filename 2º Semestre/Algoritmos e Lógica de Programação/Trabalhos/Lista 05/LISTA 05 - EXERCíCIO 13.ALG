Algoritmo "Lista 05 - Exerc�cio 13"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe diversos dados do aluno e informa se ele foi aprovado.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   ra,nome,disciplina: caractere
   carga,freq,nota_1,nota_2,sub: inteiro
   media: real
//----------------------------------------------------------------------------
funcao medias (num_1,num_2,sub:inteiro): real
var
   media: real
inicio
      media <- (num_1 + num_2) / 2
      se (media < 6.0) entao
         media <- sub
      fimse
      retorne media
fimfuncao
//----------------------------------------------------------------------------
procedimento aprovado (media:real;freq,carga:inteiro)
inicio
             se (media >= 6.0) e (freq > carga - (carga * 0.20)) entao
                escreva("Voc� foi Aprovado.")
             senao
                  escreva("Voc� foi Reprovado.")
             fimse
fimprocedimento
//----------------------------------------------------------------------------
Inicio
      escreva("Informe seu RA: ")
      leia(ra)
      escreva("Qual seu Nome? ")
      leia(nome)
      escreva("Qual a Disciplina? ")
      leia(disciplina)
      escreva("Qual a quantidade de aulas que voc� possui? ")
      leia(carga)
      escreva("Qual � a sua 1� Nota? ")
      leia(nota_1)
      escreva("Qual � a sua 2� Nota? ")
      leia(nota_2)
      escreva("Qual a sua nota da Sub? (Caso n�o tenha feito coloque 0)")
      leia(sub)
      escreva("Qual � a sua Frequ�ncia? ")
      leia(freq)
      media <- medias(nota_1,nota_2,sub)
      aprovado(media,freq,carga)
Fimalgoritmo