Algoritmo "Lista 05 - Exerc�cio 10"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Gera 3 n�meros aleat�rios entre 5 e 30 e diz o maior.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   num_1, num_2, num_3: real
//----------------------------------------------------------------------------
funcao random (num_1, num_2:inteiro): inteiro
var
   num: inteiro
inicio
      repita
            num <- 5 + randi(26)
      ate (num <> num_1) e (num <> num_2)
      retorne num
fimfuncao
//----------------------------------------------------------------------------
Inicio
      num_1 <- random(0,0)
      num_2 <- random(num_1,0)
      num_3 <- random(num_1,num_2)
      se (num_1 > num_2) e (num_1 > num_3) entao
         escreva("O maior n�mero �: ",num_1:1)
      senao
           se (num_2 > num_1) e (num_2 > num_3) entao
              escreva("O maior n�mero �: ",num_2:1)
           senao
                escreva("O maior n�mero �: ",num_3:1)
           fimse
      fimse
Fimalgoritmo