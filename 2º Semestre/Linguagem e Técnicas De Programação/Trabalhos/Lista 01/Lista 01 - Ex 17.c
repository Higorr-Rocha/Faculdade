/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 17
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char codigo[40];
    printf("Insira o C�digo: ");
    fgets(codigo, 40, stdin);
    if ((int)strlen(codigo) > 15 && codigo[0] == '1' && !isalnum(codigo[4])) printf("C�digo V�lido.");
    else printf("C�digo Inv�lido.");
    return 0;
}