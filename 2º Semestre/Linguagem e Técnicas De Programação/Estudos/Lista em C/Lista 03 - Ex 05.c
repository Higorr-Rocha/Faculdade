/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista - Ex 05
    Descri��o   : Apresenta os n�meros de 30 a 5 na tela (na mesma linha) 
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>

int main(){
    int i;
    for (i = 30; i >= 5; i--)
    {
        printf("%d", i);
    }
    return 0;
}