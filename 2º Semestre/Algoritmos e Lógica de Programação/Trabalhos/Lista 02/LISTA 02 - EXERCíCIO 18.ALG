Algoritmo "Lista 02 - Exerc�cio 18"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Solicita o nome e o tipo sangu�neo de uma pessoa.
//               Informa para quais tipos ela pode doar e de quais pode receber.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 13/08/2024
Var
sangue:caractere

Inicio
// Entrada
escreva("Insira seu tipo sangu�neo: ")
leia(sangue)

// Sa�da
escolha sangue
        caso "A+"
             escreval("Pode doar para: AB+ e A+")
             escreva("Pode receber doa��o de: A+, A-, O+ e O-")
        caso "A-"
             escreval("Pode doar para: A+, A-, AB+ e AB-")
             escreva("Pode receber doa��o de: A- e O-")
        caso "B+"
             escreval("Pode doar para: B+ e AB+")
             escreva("Pode receber doa��o de: B+, B-, O+ e O-")
        caso "B-"
             escreval("Pode doar para: B+, B-, AB+ e AB-")
             escreva("Pode receber doa��o de: B- e O-")
        caso "AB+"
             escreval("Pode doar para: AB+")
             escreva("Pode receber doa��o de: Todos")
        caso "AB-"
             escreval("Pode doar para: AB+ e AB-")
             escreva("Pode receber doa��o de: A-, B-, O- e AB-")
        caso "O+"
             escreval("Pode doar para: A+, B+, O+ e AB+")
             escreva("Pode receber doa��o de: O+ e O-")
        caso "O-"
             escreval("Pode doar para: Todos")
             escreva("Pode receber doa��o de: O-")
        outrocaso
                 escreva("Tipo sangu�neo inv�lido!")
fimescolha

Fimalgoritmo