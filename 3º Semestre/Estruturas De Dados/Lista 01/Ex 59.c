/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Ex 59
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char ***ptr;

    ptr = malloc(6 * sizeof(char **));

    for (int i = 0; i < 6; i++)
    {
        ptr[i] = malloc(4 * sizeof(char *));

        for (int j = 0; j < 4; j++)
        {
            ptr[i][j] = malloc(52 * sizeof(char));
            printf("Insira o nome [%d][%d]: ", i + 1, j + 1);
            fgets(ptr[i][j], 51, stdin);
            ptr[i][j] [strcspn(ptr[i][j], "\n")] = 0;
            fflush(stdin);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Nome [%d][%d]: %s\n", i + 1, j + 1, *(*(ptr + i) + j));
        }

        printf("\n");
    }

    for (int i = 0; i < 6; i++) // Para cada linha da matriz (6 linhas)
    {
        for (int j = 0; j < 4; j++) // Para cada coluna da linha (4 colunas)
        {
            // Liberando a mem�ria de cada string alocada dinamicamente
            free(ptr[i][j]); // Libera a mem�ria ocupada pela string na posi��o [i][j]
        }
    
        // Ap�s liberar todas as strings da linha, liberamos o ponteiro que armazenava os ponteiros para as strings dessa linha
        free(ptr[i]); // Libera a mem�ria ocupada pela linha i, que � um vetor de ponteiros para strings
    }

    // Ap�s liberar todas as linhas, liberamos o vetor de ponteiros para as linhas
    free(ptr); // Libera a mem�ria ocupada pela matriz de ponteiros para as linhas (estrutura 6x4)


    return 0;
}