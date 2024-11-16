/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 07 - Ex 05
    Autor       : Higor Rocha
    Data atual  : 15/11/2024
*/

#include <locale.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int mat[3][3];
    int x = 1;
    bool simetrica = true;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o %d� valor da Matriz: ", x);
            scanf("%d", &mat[i][j]);
            x++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] != mat[j][i]) simetrica = false;
        }
    }

    if (simetrica) printf("A matriz � sim�trica.");
    else printf("A matriz n�o � sim�trica.");

    return 0;
}