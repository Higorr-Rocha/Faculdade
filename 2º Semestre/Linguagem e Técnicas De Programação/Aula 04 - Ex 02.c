/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Calculadora de Maior e Menor
    Descri��o   : Recebe quatro n�meros e informa qual o maior e qual o menor
    Autor       : Higor Rocha
    Data atual  : 09/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int maior, menor, num;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o Primeiro N�mero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    printf("Digite o Segundo N�mero ");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }
    printf("Digite o Terceiro N�mero ");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }
    printf("Digite o Quarto N�mero ");
    scanf("%d", &num);
    if(num > maior){
        maior = num;
    }
    if(num < menor){
        menor = num;
    }
    printf("O maior n�mero �: %d\nO menor n�mero �: %d", maior, menor);
    return 0;
}