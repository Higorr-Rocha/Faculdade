/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 06 - Exerc�cio 05
    Descri��o   : Recebe um n�mero de tr�s d�gitos e diz se o d�gito da centena � Par ou �mpar.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um n�mero de 3 d�gitos: ");
    scanf("%d", &num);
    num = num/100;
    if (num%2==0) printf("Par");
    else printf("Impar");
    return 0;
}