/*
    Disciplina  : [Estruturas De Dados]
    Nome        : Exerc�cio 03
    Autor       : Higor Rocha
    Data atual  : 19/02/2025
*/

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    short int num, i, j;

    do
    {
        printf("Insira um n�mero entre 10 e 50: ");
        scanf("%hd", &num);
    } while (num < 10 || num > 50);
    

    for (i = 0, j = 0; i <= num || j <= num * 2; i++, j += 5)
    {
        if (i > 9)
            printf("  ");
        else
            printf("   ");
        printf("%d", i);
        printf(" | ");
        printf("%d\n", j);
    }
    
    printf("Tamanho em bytes da vari�vel I: %lld\nTamanho em bytes da vari�vel J: %lld", sizeof(i), sizeof(j));


    return 0;
}