Algoritmo "Lista 04 - Exerc�cio 20"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita uma palavra e verifica se � um pal�dromo
// Autor(a)    : Higor Rocha Alves
// Data atual  : 27/08/2024
Var
   palavra, palin: caractere
   cont: inteiro

Inicio
      
      // Entrada
      escreva("Digite uma palavra de no m�nimo 5 caracteres: ")
      leia(palavra)
      
      // Processamento
      para cont de compr(palavra) ate 1 passo -1 faca
           palin <- palin + copia(palavra; cont; 1)
      fimpara
      
      // Sa�da
      se palin = palavra entao
         escreva("� um pal�dromo.")
      senao
           escreva("N�o � um pal�ndromo.")
      fimse

Fimalgoritmo