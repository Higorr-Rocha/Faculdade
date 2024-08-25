/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Programa em C  
    Descri��o   : Recebe Nome e Idade. Na sa�da faz uma sauda��o e informa a idade.
    Autor       : Higor Rocha
    Data atual  : 06/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main (){
    int idade;
    char nome;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite seu Nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Seu nome � %s, sua idade � %d anos.", nome,idade);
    return 0;
}