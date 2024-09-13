/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 13
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int pontos;
    printf("Informe a quantidade de pontos alcan�ados pelo funcion�rio: ");
    scanf("%d", &pontos);
    if (pontos > 300) printf("Ele alcan�ou o n�vel 3 de premia��o.");
    else if (pontos > 200 && pontos <= 300) printf("Ele alcan�ou o n�vel 2 de premia��o.");
    else if (pontos > 100 && pontos <= 200) printf("Ele alcan�ou o n�vel 1");
    else printf("Ele n�o alcan�ou um n�vel de premia��o.");
    return 0;
}