/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 09
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    if (num == 2) printf("� um n�mero primo.");
    else if (num % 1 == 0 && num % num == 0 && num % 2 != 0) printf("� um n�mero primo.");
    else printf("N�o � um n�mero primo.");
    return 0;
}