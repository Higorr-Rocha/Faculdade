Algoritmo "Bolo De Cenoura"
// Disciplina  : [Algoritmos e L�gica de Programa��o]
// Professor   : Alexandre Moreno 
// Descri��o   : Calcula o pre�o final gasto para fazer um bolo de cenoura.
// Autor(a)    : Higor Rocha
// Data atual  : 01/08/2024
Var
oleo_val, oleo_custo:real
cenoura_val, cenoura_custo:real
ovos_val, ovos_custo:real
acucar_val, acucar_custo:real
farinha_val, farinha_custo:real
fermento_val, fermento_custo:real
chocolate_val, chocolate_custo:real
manteiga_val, manteiga_custo:real
bolo_custo, cobertura_custo:real

Inicio
// A) Entrada dos Dados - In�cio
escreva("Insira o valor do �leo: ")
leia(oleo_val)
oleo_custo <- oleo_val/1000*120
escreva("Insira o valor da cenoura: ")
leia(cenoura_val)
cenoura_custo <- cenoura_val/7*3
escreva("Insira o valor dos ovos: ")
leia(ovos_val)
ovos_custo <- ovos_val/12*4
escreva("Insira o valor do a��car: ")
leia(acucar_val)
acucar_custo <- acucar_val/1000*320
escreva("Insira o valor da farinha: ")
leia(farinha_val)
farinha_custo <- farinha_val/1000*300
escreva("Insira o valor do fermento: ")
leia(fermento_val)
fermento_custo <- fermento_val/2
escreva("Insira o valor do chocolate: ")
leia(chocolate_val)
chocolate_custo <- chocolate_val/200*18
escreva("Insira o valor da manteiga: ")
leia(manteiga_val)
manteiga_custo <- manteiga_val/500*12
// Fim

// B) C�lculo da Etapa 1 - In�cio
bolo_custo <- oleo_custo + cenoura_custo + ovos_custo + acucar_custo + farinha_custo + fermento_custo
// Fim

// C) C�lculo da Etapa 2 - In�cio
cobertura_custo <- chocolate_custo + manteiga_custo + acucar_val/1000*150
// Fim

// D) Sa�da dos Resultados - In�cio
escreval("O custo para preparar o bolo �: ", bolo_custo:1:2)
escreval("O custo para preparar a cobertura �: ",cobertura_custo:1:2)
escreva("O custo total do bolo �: ", bolo_custo + cobertura_custo:1:2)
// Fim
Fimalgoritmo