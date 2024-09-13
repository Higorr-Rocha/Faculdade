/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 11 - Ex 05
    Autor       : Higor Rocha
    Data atual  : 10/09/2024
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
    for (int i = 0; i < 10; i++)
    {
        if (i < 9) printf("Voc� tem %d tentativas!\n", 10 - i);
        else printf("Voc� tem 1 tentativa!\n");
        printf("Qual foi o n�mero escolhido? ");
        scanf("%d", &numE);
        if (numE == num) 
        {
            printf("Parab�ns! Voc� acertou.\n");
            i = 11;
        }
        else if (i < 9)
        { 
            printf("Voc� errou! Tente Novamente.\n");
            if (numE > num) printf("Dica: O n�mero escolhido � menor.\n");
            else if (numE < num) printf("Dica: O n�mero escolhido � maior.\n");
        }
        else printf("Sinto Muito! Voc� perdeu.\n");
    }
    return 0;
}
