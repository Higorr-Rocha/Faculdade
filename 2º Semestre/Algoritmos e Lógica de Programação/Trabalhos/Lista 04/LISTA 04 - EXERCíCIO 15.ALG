Algoritmo "Lista 04 - Exerc�cio 15"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta a quatidade de vogais.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra: caractere
   vogais, cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra: ")
      leia(palavra)
      
      // Processamento
      palavra <- maiusc(palavra)
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           escolha(letra)
                   caso "A","E","I","O","U"
                        vogais <- vogais + 1
           fimescolha
      fimpara

      // Sa�da
      escreva("A quantidade de vogais �: ", vogais:1)

Fimalgoritmo