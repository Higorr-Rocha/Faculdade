/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 13 - Revis�o
    Descri��o   : Escreva uma fun��o que receba um n�mero e retorne 1 se ele for par e 0 se for �mpar.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int par(int num);

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    printf("%d", par(num));
}

int par(int num)
{
    if (num % 2 == 0) return 1;
    else return 0;
}