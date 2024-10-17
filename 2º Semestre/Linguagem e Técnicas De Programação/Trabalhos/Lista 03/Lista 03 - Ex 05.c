/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 03 - Ex 05
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int numE, num = rand() % 100;
    setlocale(LC_ALL, "Portuguese");
    printf("O computador escolheu um n�mero entre 1 e 100. Adivinhe-o.\n");
    printf("%d\n", num);
    do
    {
        printf("Qual foi o n�mero escolhido? ");
        scanf("%d", &numE);
        if (numE == num) 
        {
            printf("Parab�ns! Voc� acertou.\n");
        }
        else printf("Voc� errou! Tente Novamente.\n");
    } while(numE != num);
    return 0;
}