/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 06 - Ex 01
    Autor       : Higor Rocha
    Data atual  : 08/11/2024
*/

#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("meuarquivo.txt", "w");

    fprintf(arquivo, "Ol�, Mundo!");

    fclose(arquivo);

    return 0;
}