/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 05 - Ex 07
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int par=0, impar=0, vetor[10];
    setlocale(LC_ALL, "Portuguese");
    
    printf("Insira 10 n�meros inteiros: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d� n�mero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0) par++;
        else impar++;
    }
    
    printf("Pares: %d\n", par);
    printf("�mpares: %d", impar);

    return 0;
}