/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 02 - Revis�o
    Descri��o   : Recebe um n�mero e exiba sua parte inteira e sua parte decimal separadamente.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    float numF;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%f", &numF);
    num = numF;
    numF -= num;
    printf("Parte inteira: %d\n", num);
    printf("Parte decimal: %f\n", numF);
}