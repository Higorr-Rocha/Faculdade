/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 07 - Revis�o
    Descri��o   : Recebe tr�s n�meros e calcule a m�dia aritm�tica deles.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num_1, num_2, num_3;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1� n�mero: ");
    scanf("%d", &num_1);
    printf("Digite o 2� n�mero: ");
    scanf("%d", &num_2);
    printf("Digite o 3� n�mero: ");
    scanf("%d", &num_3);
    printf("A m�dia dos n�meros �: %d\n", (num_1 + num_2 + num_3)/3);
}