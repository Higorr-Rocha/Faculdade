Algoritmo "Lista 03 - Exerc�cio 14"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno
// Descri��o   :  Solicita os dados de 12 pessoas e apresenta:
//                O percentual de homens, O nome e idade da pessoa mais jovem,
//                A m�dia de idade das mulheres (sem filhos) e a quantidade de mulheres.
// Autor(a)    : Higor Rocha Alves
// Data atual  : 18/08/2024
Var
nome, sexo, nome_j: caractere
idade, idade_j, filhos, homens, mulheres, cont: inteiro
idade_sf, mulheres_sf: inteiro

Inicio
// Inicializa��o
cont <- 1

// Entrada e Processamento
repita
     escreva("Qual � seu nome? ")
      leia(nome)
     escreva("Qual sua idade? ")
      leia(idade)
       se cont = 1 entao
          nome_j <- nome
          idade_j <- idade
        senao
             se idade < idade_j entao
                nome_j <- nome
                idade_j <- idade
             fimse
       fimse
     escreva("Digite seu sexo(H/M): ")
      leia(sexo)
     escreva("Informe quantos filhos voc� tem: ")
      leia(filhos)
     se ((sexo = "H") ou (sexo = "M")) e (filhos >= 0) entao
        se sexo = "M" entao
           mulheres <- mulheres + 1
           se filhos = 0 entao
              mulheres_sf <- mulheres_sf + 1
              idade_sf <- idade_sf + idade
           fimse
         senao
              homens <- homens + 1
        fimse
      senao
           escreval("Dados Inv�lidos!")
           cont <- cont
     fimse
     cont <- cont + 1
ate cont = 12

// Sa�da
escreval("O percentual de homens foi de ",(homens/12)*100:1,"%")
escreval("A m�dia de idade das mulheres sem filhos � de ",idade_sf/mulheres_sf:1:1)
escreval(nome_j," de ",idade_j:1," � a pessoa mais jovem.")
escreva("Foram entrevistadas ",mulheres:1," mulheres.")

Fimalgoritmo