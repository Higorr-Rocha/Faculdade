/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 08 - Exerc�cio 03 - Prova Pr�tica
    Descri��o   : Recebe 6 n�meros e diz qual o maior sem usar la�o de repeti�ao e fun��o.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, maior;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o 1� N�mero: ");
    scanf("%d", &num);
    maior = num;
    printf("Digite o 2� N�mero: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("Digite o 3� N�mero: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("Digite o 4� N�mero: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("Digite o 5� N�mero: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("Digite o 6� N�mero: ");
    scanf("%d", &num);
    if(num > maior) {maior = num;}
    printf("O maior n�mero � %d.", maior);
    return 0;
}