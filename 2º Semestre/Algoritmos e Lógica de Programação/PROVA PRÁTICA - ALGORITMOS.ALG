Algoritmo "Prova Pr�tica - Algoritmos"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno
// Descri��o   : Coleta informa��es da vari�vel dados.
// Autor(a)    : Higor Rocha
// Data atual  : 18/09/2024
Var
   dados, ra, aluno, disciplina, data_1, data_2, data_3: caractere
   freq, contagem: inteiro
   nota_1, nota_2, nota_3, media, porcen: real
   aprovado: logico

Inicio
   // Inicializa��o
   aprovado <- verdadeiro
   
   // Entrada
   dados <- "25080321-2,Joao Carlos Silva,Algoritmos,10/08/2024,7.5,29/08/2024,6.8,12/09/2024,10.0,68"
   ra <- copia(dados,1,10)
   aluno <- copia(dados,12,17)
   disciplina <- copia(dados,30,10)
   data_1 <- copia(dados,41,10)
   nota_1 <- caracpnum(copia(dados,52,3))
   data_2 <- copia(dados,56,10)
   nota_2 <- caracpnum(copia(dados,67,3))
   data_3 <- copia(dados,71,10)
   nota_3 <- caracpnum(copia(dados,82,4))
   freq <- caracpnum(copia(dados,87,2))
   contagem <- compr(copia(dados,1,10)) - 1
   contagem <- contagem + compr(copia(dados,41,10)) - 2
   contagem <- contagem + compr(copia(dados,52,3)) - 1
   contagem <- contagem + compr(copia(dados,56,10)) - 2
   contagem <- contagem + compr(copia(dados,67,3)) - 1
   contagem <- contagem + compr(copia(dados,71,10)) - 2
   contagem <- contagem + compr(copia(dados,82,4)) - 1
   contagem <- contagem + compr(copia(dados,87,2))

   // Processamento
   media <- (nota_1 + nota_2 + nota_3) / 3
   se (media < 6.0) entao
      aprovado <- falso
   senao
        se (freq < 60) entao
           aprovado <- falso
        fimse
   fimse
   porcen <- (freq / 80) * 100
   
   // Sa�da
   escreval("RA: ", ra)
   escreval("Aluno: ", aluno)
   escreval("Disciplina: ", disciplina)
   escreval("Prova 1:")
   escreval(" Data: ", data_1)
   escreval(" Nota: ", nota_1:1)
   escreval("Prova 2:")
   escreval(" Data: ", data_2)
   escreval(" Nota: ", nota_2:1)
   escreval("Prova 3:")
   escreval(" Data: ", data_3)
   escreval(" Nota: ", nota_3:1)
   escreval("Frequ�ncia: ", freq:1, " (",porcen:1,"%)")
   escreval("M�dia: ", media:1:1)
   se (aprovado) entao
      escreval("Situa��o: Aprovado")
   senao
        escreval("Situa��o: Reprovado")
   fimse
   escreval("Quantidade de caracteres n�mericos: ", contagem:1)

Fimalgoritmo