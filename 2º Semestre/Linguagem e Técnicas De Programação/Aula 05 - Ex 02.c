/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Calculadora de Divis�o
    Descri��o   : Recebe um n�mero e informa se ele � divis�vel por 3 e 7.
    Autor       : Higor Rocha
    Data atual  : 13/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    if(num % 3 == 0 && num % 7 == 0){
        printf("Esse n�mero � divis�vel por 3 e 7!");
    }else printf("Esse n�mero n�o � divis�vel por 3 e 7!");
    return 0;
}