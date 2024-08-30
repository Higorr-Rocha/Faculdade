/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista - Ex 09
    Descri��o   : Apresente todos os n�meros �mpares entre 5 e 50. (PARA)
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int i;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("N�meros �mpares: ");
    for (i = 5; i < 51; i+=2)
    {
        printf("%d",i);
        if(i % 2 != 0) printf(",");
        if(i == 49) printf(".");
    }    
    return 0;
}