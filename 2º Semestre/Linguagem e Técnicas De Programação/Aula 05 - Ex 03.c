/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Calculadora de Tri�ngulo Ret�ngulo
    Descri��o   : Recebe tr�s n�mero e informa se eles pertencem a um tri�ngulo ret�ngulo.
    Autor       : Higor Rocha
    Data atual  : 13/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num_1, num_2, num_3;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite tr�s n�meros inteiros: ");
    scanf("%d%d%d", &num_1,&num_2,&num_3);
    num_1=num_1*num_1;
    num_2=num_2*num_2;
    num_3=num_3*num_3;
    if(num_1==num_2+num_3 || num_2==num_1+num_3 || num_3==num_1+num_2){
        printf("Esses n�meros pertencem � um Tri�ngulo Ret�ngulo.");
    } else printf("Esses n�meros n�o pertencem � um Tri�ngulo Ret�ngulo.");
}