/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Ex 64
    Autor       : Higor Rocha
    Data atual  : 20/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char *nome;
    int quant_notas;
    float *notas;
}aluno;

int main(){
    setlocale(LC_ALL, "Portuguese");
    aluno *ptr;
    int quant;
    float media;
    char tmp[50];

    printf("Defina a quantidade de alunos a serem cadastrados: ");
    scanf("%d", &quant);
    fflush(stdin);

    ptr = malloc(quant * sizeof(aluno));

    for (int i = 0; i < quant; i++)
    {
        media = 0;
        printf("Informe o nome do aluno %d: ", i + 1);
        fgets(tmp, 50, stdin);
        tmp[strcspn(tmp, "\n")] = 0;
        ptr[i].nome = malloc((strlen(tmp) + 1) * sizeof(char));
        strcpy(ptr[i].nome, tmp);
        printf("Informe a quantidade de notas do aluno %d: ", i + 1);
        scanf("%d", &ptr[i].quant_notas);
        fflush(stdin);
        ptr[i].notas = malloc((ptr[i].quant_notas) * sizeof(float));
        for (int j = 0; j < ptr[i].quant_notas; j++)
        {
            printf("Informe a %d� nota do aluno: ", j + 1);
            scanf("%f", &ptr[i].notas[j]);
            fflush(stdin);
            media += ptr[i].notas[j];
        }
        printf("A m�dia de notas do aluno %d �: %.2f\n", i + 1, media / ptr[i].quant_notas);
    }

    for (int i = 0; i < quant; i++)
    {
        free(ptr[i].nome);
        free(ptr[i].notas);
    }

    free(ptr);

    return 0;
}