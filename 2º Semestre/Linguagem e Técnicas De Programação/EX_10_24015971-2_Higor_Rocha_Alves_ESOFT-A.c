/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 10 - Revis�o
    Descri��o   : Recebe o peso e a altura de uma pessoa e calcule o IMC.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float peso, alt;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura (Ex. 1,70): ");
    scanf("%f", &alt);
    printf("Seu IMC �: %.2f", peso/(alt * alt));
}