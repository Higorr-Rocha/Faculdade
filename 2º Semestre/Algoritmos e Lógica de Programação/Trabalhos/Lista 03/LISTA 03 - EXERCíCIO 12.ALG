Algoritmo "Lista 03 - Exerc�cio 12"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno
// Descri��o   : Solicita nome, nota_1 e nota_2 de 32 alunos.
//               Ap�s, informa o percentual de aprovados e reprovados.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 17/08/2024
Var
nome: caractere
nota_1, nota_2, aprovados, reprovados, cont: inteiro
media: real

Inicio
// Inicializa��o
cont <- 1

// Entrada e Processamento
repita
     escreva("Qual seu nome? ")
     leia(nome)
     escreva("Insira sua primeira nota: ")
     leia(nota_1)
     escreva("Insira sua segunda nota: ")
     leia(nota_2)
     se ((nota_1 >= 0) e (nota_1 <= 10)) e ((nota_2 >= 0) e (nota_2 <= 10)) entao
        media <- media + ((nota_1 + nota_2)/2)
        cont <- cont + 1
        se (nota_1+nota_2)/2 >= 6.0 entao
           aprovados <- aprovados + 1
         senao
              reprovados <- reprovados + 1
        fimse
      senao
           escreval("Notas Inv�lidas! Insira valores entre 0 e 10.")
           cont <- cont
     fimse
ate cont = 32

// Sa�da
escreval("A m�dia da turma foi de: ", media/32:1:2)
escreval("O percentual de aprovados foi: ", (aprovados/32)*100:1,"%")
escreva("O percentual de reprovados foi: ", (reprovados/32)*100:1,"%")

Fimalgoritmo