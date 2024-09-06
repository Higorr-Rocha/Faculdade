/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 11 - Revis�o
    Descri��o   : Crie uma fun��o que receba dois n�meros inteiros e retorne o maior valor.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int maior(int num_1, int num_2);

int main(){
    int num_1, num_2;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1� n�mero: ");
    scanf("%d", &num_1);
    printf("Digite o 2� n�mero: ");
    scanf("%d", &num_2);
    printf("%d � o maior n�mero.", maior(num_1, num_2));
}

int maior(int num_1, int num_2)
{
    if (num_1 > num_2) return num_1;
    else return num_2;
}