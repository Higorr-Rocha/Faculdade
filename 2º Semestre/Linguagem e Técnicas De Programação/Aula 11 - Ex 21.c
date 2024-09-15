/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 21
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <math.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor, parcelas;
    float juros, total;
    printf("Qual o valor do empr�stimo? ");
    scanf("%d", &valor);
    getchar();
    printf("Qual a taxa de juros anual (em porcentagem)? ");
    scanf("%f", &juros);
    getchar();
    printf("Qual o n�mero de parcelas? ");
    scanf("%d", &parcelas);
    getchar();
    juros = (juros / 100) / 12;
    total = (valor * juros) / (1 - pow(1 + juros, -parcelas));
    printf("O valor das presta��es mensais � de: R$%.2f", total);
    return 0;
}