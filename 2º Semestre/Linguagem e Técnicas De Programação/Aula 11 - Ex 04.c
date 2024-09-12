/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 10 - Ex 04
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <math.h>
#include <stdio.h>

int quadrado(int num);

int main()
{
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero positivo: ");
    scanf("%d", &num);
    if (quadrado(num)) printf("� um quadrado perfeito.");
    else printf("N�o � um quadrado perfeito.");
}

int quadrado(int num)
{
    int raiz = sqrt(num);
    return raiz*raiz == num;
}
