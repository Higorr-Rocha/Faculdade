/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Ex 56
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char **ptr, nome[50];

    ptr = malloc(5 * sizeof(char*));

    if (ptr == NULL)
    {
        printf("Erro na aloca��o!");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d� nome: ", i + 1);
        fgets(nome, 50, stdin);
        nome[strcspn(nome, "\n")] = 0;
        *(ptr + i) = malloc((strlen(nome) + 1) * sizeof(char));
        strcpy(ptr[i],nome);
    }

    printf("Endere�o do vetor: %p\n", ptr);

    for (int i = 0; i < 5; i++)
    {
        printf("Nome %d: %s\nEndere�o de mem�ria: %p\n", i + 1, *(ptr + i), *(ptr + i));
    }

    for (int i = 0; i < 5; i++)
    {
        free(ptr[i]);
    }

    free(ptr);

    return 0;
}