/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 05 - Ex 06
    Autor       : Higor Rocha
    Data atual  : 01/11/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int quant;
    float media=0;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Quantas notas deseja inserir? ");
    scanf("%d", &quant);

    float vetor[quant];

    for (int i = 0; i < quant; i++)
    {
        printf("Insira a %d� nota: ", i+1);
        scanf("%f", &vetor[i]);
        media += vetor[i];
    }
    printf("A m�dia das %d notas �: %.2f", quant, media/quant);

    return 0;
}