Algoritmo "Lista 04 - Exerc�cio 07"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta o c�digo ACII de cada vogal.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra: ")
      leia(palavra)
      
      // Processamento e Sa�da
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           escolha(letra)
                   caso "A","E","I","O","U","a","e","i","o","u"
                        escreval(letra," = ",asc(letra):1)
           fimescolha
      fimpara

Fimalgoritmo