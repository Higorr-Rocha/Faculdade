/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 03 - Ex 06
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int alunos;
    float media;
    setlocale(LC_ALL, "Portuguese");
    printf("Qual a quantidade de alunos? ");
    scanf("%d", &alunos);
    for (int i = 1; i < alunos + 1; i++)
    {
        printf("Digite a altura do %d� aluno (Em CM): ", i);
        scanf("%f", &media);
    }
    printf("A m�dia de altura dos alunos � de: %.2fcm", media / alunos);
}