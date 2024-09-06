/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 09 - Revis�o
    Descri��o   : Recebe uma temperatura em graus Celsius para Fahrenheit.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int celcius;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite a temperatura em �C: ");
    scanf("%d", &celcius);
    printf("A temperatura em �F �: %.1f", (celcius * 1.8) + 32);
}