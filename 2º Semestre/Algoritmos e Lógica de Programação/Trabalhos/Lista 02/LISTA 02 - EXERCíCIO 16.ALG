Algoritmo "Lista 02 - Exerc�cio 16"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita a press�o arterial e classifica.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
pres_s, pres_d:inteiro

Inicio
// Entrada
escreva("Insira sua press�o sist�lica: ")
leia(pres_s)
escreva("Insira sua press�o dist�lica: ")
leia(pres_d)

// Sa�da
se (pres_s < 130) e (pres_d < 85) entao
   escreva("Sua press�o est� normal!")
 senao
      se ((pres_s >= 130) e (pres_s <= 139) e (pres_d >= 85) e (pres_d <= 89)) entao
         escreva("Sua press�o est� no limite!")
       senao
            se ((pres_s >= 140) e (pres_s <= 159) e (pres_d >= 90) e (pres_d <= 99)) entao
               escreva("Voc� est� com Hipertens�o Leve!")
             senao
                  se ((pres_s >= 160) e (pres_s <= 179) e (pres_d >= 100) e (pres_d <= 109)) entao
                     escreva("Voc� est� com Hipertens�o Moderada!")
                   senao
                        se (pres_s >= 180) e (pres_d >= 110) entao
                           escreva("Voc� est� com Hipertens�o Grave!")
 senao
      escreva("Voc� est� com Hipertens�o Sist�lica Isolada!")
                        fimse
                  fimse
            fimse
      fimse
fimse

Fimalgoritmo