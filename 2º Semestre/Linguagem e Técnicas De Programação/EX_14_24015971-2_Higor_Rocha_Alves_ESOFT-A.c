/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 14 - Revis�o
    Descri��o   : Crie uma fun��o que receba o valor de um raio e retorne a �rea de um c�rculo.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

void area(int raio);

int main(){
    int raio;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o raio do c�rculo: ");
    scanf("%d", &raio);
    area(raio);
}

void area(int raio)
{
    printf("A �rea do c�rculo �: %.2f\n", (raio * raio) * 3.1416);
}