/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 03 - Revis�o
    Descri��o   : Recebe dois n�meros e exiba o maior deles.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num_1, num_2;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1� n�mero: ");
    scanf("%d", &num_1);
    printf("Digite o 2� n�mero: ");
    scanf("%d", &num_2);
    if (num_1 > num_2) printf("%d � o maior.", num_1);
    else printf("%d � o maior.", num_2);
}