Algoritmo "Lista 04 - Exerc�cio 06"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta o 3 �ltimos caracteres.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere

Inicio
      // Entrada
      escreva("Digite uma palavra de no m�nimo 10 caracteres: ")
      leia(palavra)
      
      //Processamento
      palavra <- copia(palavra;compr(palavra)- 2;3)
      
      // Sa�da
      escreva("Os tr�s �ltimos caracteres s�o: ", palavra)

Fimalgoritmo