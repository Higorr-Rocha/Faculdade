/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 08 - Exerc�cio 01 - Prova Pr�tica
    Descri��o   : Recebe 5 n�meros e entrega a m�dia deles (Usando 2 vari�veis).
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, soma;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o 1� N�mero: ");
    scanf("%d", &num);
    soma = num;
    printf("Digite o 2� N�mero: ");
    scanf("%d", &num);
    soma += num;
    printf("Digite o 3� N�mero: ");
    scanf("%d", &num);
    soma += num;
    printf("Digite o 4� N�mero: ");
    scanf("%d", &num);
    soma += num;
    printf("Digite o 5� N�mero: ");
    scanf("%d", &num);
    soma += num;
    printf("A m�dia dos 5 n�meros �: %d", soma/5);
    return 0;
}