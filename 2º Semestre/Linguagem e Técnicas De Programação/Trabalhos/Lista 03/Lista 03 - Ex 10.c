/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 03 - Ex 10
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int quant_1, quant_2;
    float media;
    setlocale(LC_ALL, "Portuguese");
    printf("Quantas notas da 1� Disciplina ser�o contabilizadas? ");
    scanf("%d", &quant_1);
    for (int i = 1; i < quant_1 + 1; i++)
    {
        float num;
        printf("Digite a %d� Nota: ", i);
        scanf("%f", &num);
        media += num;
    }
    printf("A m�dia da 1� Disciplina �: %.2f\n", media/quant_1);
    media = 0;
    printf("Quantas notas da 2� Disciplina ser�o contabilizadas? ");
    scanf("%d", &quant_2);
    for (int i = 1; i < quant_2 + 1; i++)
    {
        float num;
        printf("Digite a %d� Nota: ", i);
        scanf("%f", &num);
        media += num;
    }
    printf("A m�dia da 2� Disciplina �: %.2f\n", media/quant_2);
}