Algoritmo "Lista 05 - Exerc�cio 08"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Recebe A, B, C e entrega a a Raiz 1 e Raiz 2.
// Autor(a)    : Higor Rocha
// Data atual  : 09/10/2024
Var
   a, b,c: inteiro
   raiz_1, raiz_2: real
//----------------------------------------------------------------------------
procedimento segundo_grau (a,b,c:inteiro;VAR r1,r2:real)
var
   delta: real
inicio
      delta <- (b*b)-(4*a*c)
      se (delta > 0) entao
         r1 <- (-b + raizq(delta)) / 2*a
         r2 <- (-b - raizq(delta)) / 2*a
         escreval("Raiz 1 = ",r1:1)
         escreval("Raiz 2 = ",r2:1)
      senao
           se (delta = 0) entao
              r1 <- (-b + raizq(delta)) / 2*a
              escreval("Raiz = ",r1:1)
           senao
                escreval("N�o h� resultado real para a equa��o.")
           fimse
      fimse
fimprocedimento
//----------------------------------------------------------------------------
Inicio
      escreva("Digite o valor de A: ")
      leia(a)
      escreva("Digite o valor de B: ")
      leia(b)
      escreva("Digite o valor de C: ")
      leia(c)
      segundo_grau(a,b,c,raiz_1,raiz_2)
Fimalgoritmo