Algoritmo "Lista 04 - Exerc�cio 17"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta a palavra substituindo
//               as vogais e consoantes espec�ficas.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra entre 5 e 15 caracteres: ")
      leia(palavra)
      
      // Processamento e Sa�da
      escreva("A palavra �: ")
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           escolha letra
                   caso "A"
                        escreva("1")
                   caso "B"
                        escreva("@")
                   caso "C"
                        escreva("(")
                   caso "D"
                        escreva("*")
                   caso "E"
                        escreva("2")
                   caso "F"
                        escreva("%")
                   caso "I"
                        escreva("3")
                   caso "L"
                        escreva("$")
                   caso "M"
                        escreva("?")
                   caso "N"
                        escreva(")")
                   caso "O"
                        escreva("4")
                   caso "S"
                        escreva("]")
                   caso "R"
                        escreva("{")
                   caso "T"
                        escreva("+")
                   caso "U"
                        escreva("5")
                   outrocaso
                            escreva(letra)
           fimescolha
      fimpara

Fimalgoritmo