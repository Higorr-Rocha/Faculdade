/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 03 - Ex 09
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    int num_1, num_2, num_3;
    int maior, menor;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("Digite o 1� N�mero: ");
        scanf("%d", &num_1);
        printf("Digite o 2� N�mero: ");
        scanf("%d", &num_2);
        printf("Digite o 3� N�mero: ");
        scanf("%d", &num_3);
        maior = num_1;
        menor = num_1;
        if (num_2 > maior) maior = num_2;
        if (num_3 > maior) maior = num_3;

        if (num_2 < menor) menor = num_2;
        if (num_3 < menor) menor = num_3;

    } while (num_1 >= 0 && num_2 >= 0 && num_3 >= 0);
    printf("O maior n�mero �: %d\n", maior);
    printf("O menor n�mero �: %d\n", menor);
}