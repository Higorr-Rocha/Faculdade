Algoritmo "Lista 04 - Exerc�cio 05"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta o 4 primeiros caracteres.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere

Inicio
      // Entrada
      escreva("Digite uma palavra de no m�nimo 10 caracteres: ")
      leia(palavra)
      
      // Processamento
      palavra <- copia(palavra;1;4)
      
      // Sa�da
      escreva("Os quatro primeiros caracteres s�o: ", palavra)

Fimalgoritmo