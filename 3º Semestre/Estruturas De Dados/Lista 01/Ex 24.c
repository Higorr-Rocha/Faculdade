/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Ex 24
    Autor       : Higor Rocha
    Data atual  : 17/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet [5];
    int *ptr_vet = vet;
    
    for (int i = 0; i < 5; i++){
        printf("Digite o %d� n�mero: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("%d ", *(ptr_vet + i));
    }

    return 0;
}