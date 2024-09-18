/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista - Ex 07
    Descri��o   : Solicita 15 n�meros (entre 10 e 50) e apresenta a m�dia.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, i;
    float media;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    for (i = 0; i < 15; i++)
    {
        printf("Digite um n�mero entre 10 e 50: ");
        scanf("%d", &num);
        if(num > 9 && num < 51) {media += num;}
        else printf("O n�mero deve estar entre 10 e 50!\n");
    }
    printf("A m�dia dos 15 n�meros �: %.2f.", media/15);
    return 0;
}