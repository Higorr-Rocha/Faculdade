Algoritmo "Lista 04 - Exerc�cio 21"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e verifica se
//               � um pal�dromo ignorando espa�os
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, palavra2, palin: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra de no m�nimo 5 caracteres: ")
      leia(palavra)
      
      // Processamento
      para cont de 1 ate compr(palavra) faca
           se (copia(palavra; cont; 1) <> " ") entao
              palavra2 <- palavra2 + copia(palavra; cont; 1)
           fimse
      fimpara
      para cont de compr(palavra2) ate 1 passo -1 faca
           palin <- palin + copia(palavra2; cont; 1)
      fimpara
      
      // Sa�da
      se palin = palavra2 entao
         escreva("� um pal�dromo.")
      senao
           escreva("N�o � um pal�ndromo.")
      fimse

Fimalgoritmo