/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 11
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int lado[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o %d� lado: ", i+1);
        scanf("%d", &lado[i]);
    }
    if (lado[0] == lado[1] && lado[0] == lado[2]) printf("Tri�ngulo Equil�tero.");
    else if (lado[0] == lado[1] || lado[0] == lado[2] || lado[1] == lado[2]) printf("Tri�ngulo Is�sceles.");
    else printf("Tri�ngulo Escaleno.");
    return 0;
}