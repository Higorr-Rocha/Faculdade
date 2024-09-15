/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 12 - Revis�o
    Descri��o   : Desenvolva uma fun��o que calcule e retorne o valor absoluto de um n�mero.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int absoluto(int num);

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    printf("O valor absoluto de %d �: %d", num, absoluto(num));
}

int absoluto(int num)
{
    if (num < 0) return (num * -1);
    else return num;
}