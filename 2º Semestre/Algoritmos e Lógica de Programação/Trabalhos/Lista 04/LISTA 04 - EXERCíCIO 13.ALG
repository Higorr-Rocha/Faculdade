Algoritmo "Lista 04 - Exerc�cio 13"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta ela invertida linha a linha.
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
      escreval("A palavra invertida �: ")
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;compr(palavra)-(cont-1);1)
           escreval(letra)
      fimpara

Fimalgoritmo