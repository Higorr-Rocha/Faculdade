Algoritmo "Lista 04 - Exerc�cio 19"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e apresenta linha a linha invertido.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra de no m�nimo 5 caracteres: ")
      leia(palavra)
      
      // Processamento e Sa�da
      escreval("A palavra �: ")
      para cont de compr(palavra) ate 1 passo -1 faca
           escreval(copia(palavra; 1; cont))
      fimpara

Fimalgoritmo