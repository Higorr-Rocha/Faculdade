/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 20
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) printf("� um ano bissexto.");
    else printf("N�o � um ano bissexto.");
    return 0;
}