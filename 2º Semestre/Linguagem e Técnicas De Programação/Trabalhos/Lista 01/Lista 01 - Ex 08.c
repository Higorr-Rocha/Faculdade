/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 08
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int km;
    float consumo, gas;
    printf("Quantos KMs a viagem durou? ");
    scanf("%d", &km);
    printf("Qual � o consumo do carro (KM/L)? ");
    scanf("%f", &consumo);
    printf("Qual o pre�o do litro do combust�vel? ");
    scanf("%f", &gas);
    printf("O custo da viagem � de: R$%.2f", (km / consumo) * gas);
    return 0;
}