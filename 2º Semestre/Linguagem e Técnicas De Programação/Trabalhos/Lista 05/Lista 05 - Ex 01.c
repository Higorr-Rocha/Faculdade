/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 05 - Ex 01
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int vetor[10];
    setlocale(LC_ALL, "Portuguese");
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d� n�mero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d� n�mero: %d\n", i+1, vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d� n�mero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("%d� n�mero: %d\n", i+1, vetor[i]);
    }

    return 0;
}