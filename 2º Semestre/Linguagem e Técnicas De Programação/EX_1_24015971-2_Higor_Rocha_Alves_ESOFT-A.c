/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 01 - Revis�o
    Descri��o   : Recebe um n�mero e diz se � Par ou �mpar.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    if (num % 2 == 0) printf("Esse n�mero � Par.");
    else printf("Esse n�mero � �mpar.");
}