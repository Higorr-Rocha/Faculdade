/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 06 - Exerc�cio 03
    Descri��o   : Exerc�cios do Slide.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int i, j, k, m;
    i =1, j = 2, k = 3, m = 4;
    printf("A = %d\n", i += j+k);
    printf("B = %d\n", j *= k = m + 5);
    printf("C = %d", i += j += k += 1 + 2);
    return 0;
}