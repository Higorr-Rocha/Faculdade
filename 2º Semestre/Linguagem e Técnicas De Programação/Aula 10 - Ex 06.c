/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 06 - Revis�o
    Descri��o   : Recebe dois n�meros e exiba a soma, subtra��o, multiplica��o e divis�o deles.
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
    printf("A soma dos n�meros �: %d\n", num_1 + num_2);
    printf("A subtra��o dos n�meros �: %d\n", num_1 - num_2);
    printf("A multiplica��o dos n�meros �: %d\n", num_1 * num_2);
    printf("A divis�o dos n�meros �: %d\n", num_1 / num_2);
}