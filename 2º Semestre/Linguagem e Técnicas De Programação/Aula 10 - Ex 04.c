/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 04 - Revis�o
    Descri��o   : Recebe um um valor em reais (R$) e exiba o valor equivalente em d�lares (US$).
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float valor, cot;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor em R$: ");
    scanf("%f", &valor);
    printf("Insira a cota��o atual: ");
    scanf("%f", &cot);
    valor = valor / cot;
    printf("O valor em US$ �: %.2f.", valor);
}