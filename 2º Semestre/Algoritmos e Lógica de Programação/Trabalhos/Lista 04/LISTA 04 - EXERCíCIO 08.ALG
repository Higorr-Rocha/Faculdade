Algoritmo "Lista 04 - Exerc�cio 08"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta do 3� ao 6� caracter.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere

Inicio
      // Entrada
      escreva("Digite uma palavra de no m�nimo 10 caracteres: ")
      leia(palavra)
      
      // Processamento
      palavra <- copia(palavra;3;4)
      
      // Sa�da
      escreva("Os caracteres do 3� ao 6� s�o: ", palavra)

Fimalgoritmo