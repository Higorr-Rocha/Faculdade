Algoritmo "Lista 04 - Exerc�cio 14"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno
// Descri��o   : Solicita uma frase e mostra a quantidade de espa�os.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra: caractere
   espacos, cont: inteiro

Inicio
      // Inicializa o contador de espa�os
      espacos <- 0

      // Entrada
      escreva("Digite uma frase de no m�nimo 12 caracteres: ")
      leia(palavra)

      // Contagem de espa�os
      para cont de 1 ate compr(palavra) faca
           se copia(palavra; cont; 1) = " " ent�o
                espacos <- espacos + 1
           fimse
      fimpara

      // Sa�da
      escreva("A quantidade de espa�os na palavra �: ", espacos:1)

Fimalgoritmo
