/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Calculadora de Par ou �mpar
    Descri��o   : Recebe um n�mero e informa se � Par ou �mpar
    Autor       : Higor Rocha
    Data atual  : 09/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    if(num % 2 == 0){   // Inicia uma fun��o "se". Caso seja verdade, fa�a isso.
        printf("Esse n�mero � Par.");
    }else{              // Caso n�o seja, fa�a isso.
        printf("Esse n�mero � �mpar.");
    }
    return 0;
}