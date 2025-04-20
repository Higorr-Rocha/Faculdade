/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Ex 63
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    int codigo;
    char *nome;
    float preco;
}produto;

int main(){
    setlocale(LC_ALL, "Portuguese");
    produto *ptr;
    int quant;
    char tmp[50];

    printf("Defina a quantidade de produtos a serem cadastrados: ");
    scanf("%d", &quant);
    fflush(stdin);

    ptr = malloc(quant * sizeof(produto));
    
    for (int i = 0; i < quant; i++)
    {
        printf("Informe o nome do %d� produto: ", i + 1);
        fgets(tmp, 50, stdin);
        tmp[strcspn(tmp, "\n")] = 0;
        ptr[i].nome = malloc((strlen(tmp) + 1) * sizeof(char));
        strcpy(ptr[i].nome, tmp);
        printf("Insira o pre�o do %d produto: ", i + 1);
        scanf("%f", &ptr[i].preco);
        fflush(stdin);
        printf("Insira o c�digo do %d produto: ", i + 1);
        scanf("%d", &ptr[i].codigo);
        fflush(stdin);
    }

    for (int i = 0; i < quant; i++)
    {
        printf("%d� nome: %s\n", i + 1, ptr[i].nome);
        printf("%d� pre�o: %.2f\n", i + 1, ptr[i].preco);
        printf("%d� codigo: %d\n", i+1, ptr[i].codigo);
        printf("\n");
    }

    for (int i = 0; i < quant; i++)
    {
        free((ptr + i)->nome);
    }

    free(ptr);

    return 0;
}