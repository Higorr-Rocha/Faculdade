/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 03 - Ex 03
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int i=1, num;
    float soma;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &num);
        soma += num;
        i++;
    } while(i < 6);
    printf("A m�dia dos 5 n�meros �: %.2f", soma/5);
}