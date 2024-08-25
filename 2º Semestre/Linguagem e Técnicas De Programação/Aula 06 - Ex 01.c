/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Primeira fun��o em C
    Descri��o   : Recebe um n�mero e diz se � Par ou �mpar. Vers�o 2.0
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int par_impar(int num){
    return !(num % 2);
}

int main(){
    int valor;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um n�mero: ");
    scanf("%d", &valor);
    if (par_impar (valor)) printf("Esse n�mero � Par.");
    else printf("Esse n�mero � �mpar.");
    return 0;
}