Algoritmo "Lista 04 - Exerc�cio 10"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta
//               intercalando maiusculo e minusculo.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, letra: caractere
   cont: inteiro

Inicio
      // Entrada
      escreva("Digite uma palavra entre 5 e 20 caracteres: ")
      leia(palavra)
      
      // Processamento e Sa�da
      escreva("A palavra  intercalando mai�sculo e min�sculo �: ")
      para cont de 1 ate compr(palavra) faca
           letra <- copia(palavra;cont;1)
           se cont % 2 = 1 entao
              escreva(maiusc(letra))
           senao
                escreva(minusc(letra))
           fimse
      fimpara

Fimalgoritmo