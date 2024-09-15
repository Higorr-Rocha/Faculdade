/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 02
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    int notas, temp;
    int cem = 0 , cinquenta = 0, vinte = 0, dez = 0, cinco = 0;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor: ");
    scanf("%d", &notas);
    temp = notas;
    if (temp >= 100) cem = temp / 100, temp -= cem * 100;
    if (temp >= 50) cinquenta = temp / 50, temp -= cinquenta * 50;
    if (temp >= 20) vinte = temp / 20, temp -= vinte * 20;
    if (temp >= 10) dez = temp / 10, temp -= dez * 10;
    if (temp >= 5) cinco = temp / 5, temp -= cinco * 5;

    printf("S�o necess�rias %d notas de 100.\n", cem);
    printf("S�o necess�rias %d notas de 50.\n", cinquenta);
    printf("S�o necess�rias %d notas de 20.\n", vinte);
    printf("S�o necess�rias %d notas de 10.\n", dez);
    printf("S�o necess�rias %d notas de 5.\n", cinco);
    return 0;
}