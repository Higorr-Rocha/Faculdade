Algoritmo "Lista 04 - Exerc�cio 11"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta ela invertida.
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
      escreva("A palavra invertida �: ")
      para cont de compr(palavra) ate 1 passo -1 faca
           letra <- copia(palavra;cont;1)
           escreva(letra)
      fimpara

Fimalgoritmo