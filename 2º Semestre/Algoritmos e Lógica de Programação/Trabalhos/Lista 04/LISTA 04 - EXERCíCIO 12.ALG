Algoritmo "Lista 04 - Exerc�cio 12"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta ela linha a linha.
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
      escreval("A palavra �: ")
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           escreval(letra)
      fimpara

Fimalgoritmo