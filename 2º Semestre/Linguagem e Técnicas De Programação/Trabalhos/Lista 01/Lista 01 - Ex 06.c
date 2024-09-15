/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 06
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
*/

#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quant, quant_p;
    float preco, desconto, total = 0;
    printf("Qual a quantidade de produtos �nicos? ");
    scanf("%d", &quant);
    for (int i = 0; i < quant; i++)
    {
        printf("Digite o pre�o do %d� produto? ", i+1);
        scanf("%f", &preco);
        printf("Quantos foram comprados? ");
        scanf("%d", &quant_p);
        printf("Qual o desconto do produto (em porcentagem)?\nDigite 0 para sem desconto.\n");
        scanf("%f", &desconto);
        preco = preco * quant_p;
        desconto = preco * desconto / 100;
        total += preco - desconto;
    }
    printf("O valor total da compra � de: R$%.2f", total);
    return 0;
}