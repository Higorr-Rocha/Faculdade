/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 05 - Revis�o
    Descri��o   : Recebe um  o primeiro nome e o sobrenome de uma pessoa separadamente e 
                  depois exiba o nome completo.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    char nome[40], sobre[40];
    setlocale(LC_ALL, "Portuguese");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu sobrenome: ");
    gets(sobre);
    printf("Ol�, %s %s.", nome, sobre);
}