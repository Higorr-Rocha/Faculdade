/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Programa em C  
    Descri��o   : Recebe Nome e Idade. Informa quantos anos faltam para os 100 anos.
    Autor       : Higor Rocha
    Data atual  : 06/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main (){
    int idade;
    char nome [40];
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite seu Nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Ol� %s, faltam %d anos para voc� ter 100 anos.", nome, (100-idade)); 
    return 0;
}