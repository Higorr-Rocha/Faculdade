/*
    Disciplina  : [Linguagem e T?cnicas de Programa��o]
    Nome        : M�dia em C
    Descri��o   : Recebe tr�s n�meros e entrega a m�dia deles.
    Autor       : Higor Rocha
    Data atual  : 06/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float numero_1, numero_2, numero_3;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &numero_1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &numero_2);
    printf("Digite o terceiro n�mero: ");
    scanf("%f", &numero_3);
    printf("A m�dia �: %.2f", (numero_1+numero_2+numero_3)/3);
    return 0;
}