/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Ex 48
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int quantidade;
    float *ptr;

    printf("Insira a quantidade a ser alocada: ");
    scanf("%d", &quantidade);

    ptr = malloc(quantidade * sizeof(float));

    if (ptr != NULL)
    {
        printf("Foram alocados %zu bytes\n", quantidade * sizeof(float));
    }
    else
        printf("Erro ao alocar espa�o!\n");

    free(ptr);

    return 0;
}