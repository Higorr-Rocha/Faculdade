/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Ex 32
    Autor       : Higor Rocha
    Data atual  : 19/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, *b, **c, ***d;

    printf("Insira um n�mero inteiro: ");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("O valor do quadr�plo de a �: %d\n", ***d * 4);

    return 0;
}