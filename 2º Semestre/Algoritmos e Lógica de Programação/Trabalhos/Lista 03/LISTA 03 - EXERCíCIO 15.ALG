Algoritmo "Lista 03 - Exerc�cio 15"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno
// Descri��o   : Solicita a data de nascimento e informa o signo.
//               Ap�s o signo, pergunta se o usu�rio deseja continuar.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 18/08/2024
Var
dia, mes: inteiro
continuar: caractere

Inicio
// Entrada e Processamento
repita

      escreva("Que dia voc� nasceu? ")
      leia(dia)
      escreva("Que m�s voc� nasceu? ")
      leia(mes)
      se ((mes = 1) e (dia >= 21)) ou ((mes = 2) e (dia <= 19)) entao
         escreval("Seu signo �: Aqu�rio.")
      senao
           se ((mes = 2) e (dia >= 20)) ou ((mes = 3) e (dia <= 20)) entao
              escreval("Seu signo �: Peixes.")
           senao
                se ((mes = 3) e (dia >= 21)) ou ((mes = 4) e (dia <= 20)) entao
                   escreval("Seu signo �: �ries.")
                senao
                     se ((mes = 4) e (dia >= 21)) ou ((mes = 5) e (dia <= 20)) entao
                        escreval("Seu signo �: Touro.")
                     senao
                          se ((mes = 5) e (dia >= 21)) ou ((mes = 6) e (dia <= 20)) entao
                             escreval("Seu signo �: G�meos.")
                          senao
                               se ((mes = 6) e (dia >= 21)) ou ((mes = 7) e (dia <= 21)) entao
                                  escreval("Seu signo �: C�ncer.")
                               senao
                                    se ((mes = 7) e (dia >= 22)) ou ((mes = 8) e (dia <= 22)) entao
                                       escreval("Seu signo �: Le�o.")
                                    senao
                                         se ((mes = 8) e (dia >= 23)) ou ((mes = 9) e (dia <= 22)) entao
                                            escreval("Seu signo �: Virgem.")
                                         senao
                                              se ((mes = 9) e (dia >= 23)) ou ((mes = 10) e (dia <= 22)) entao
                                                 escreval("Seu signo �: Libra.")
                                              senao
                                                   se ((mes = 10) e (dia >= 23)) ou ((mes = 11) e (dia <= 21)) entao
                                                      escreval("Seu signo �: Escorpi�o.")
                                                   senao
                                                        se ((mes = 11) e (dia >= 22)) ou ((mes = 12) e (dia <= 21)) entao
                                                           escreval("Seu signo �: Sagit�rio.")
                                                        senao
                                                             se ((mes = 12) e (dia >= 22)) ou ((mes = 1) e (dia <= 20)) entao
                                                                escreval("Seu signo �: Capric�rnio.")
                                                             fimse
                                                        fimse
                                                   fimse
                                              fimse
                                         fimse
                                    fimse
                               fimse
                          fimse
                     fimse
                fimse
           fimse
      fimse
      escreva("Deseja continuar(S/N)? ")
      leia(continuar)
ate continuar = "N"

Fimalgoritmo