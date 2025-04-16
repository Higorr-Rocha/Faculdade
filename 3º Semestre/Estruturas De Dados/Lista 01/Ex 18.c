/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Ex 18
    Autor       : Higor Rocha
    Data atual  : 09/04/2025
*/

#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, *ptr_n1=&n1;

    printf("Digite o valor de N1: ");
    scanf("%d", &n1);

    printf("O valor de N1 �: %d\n", n1);
    printf("O endere�o de mem�ria de N1 �: %p\n", &n1);
    printf("O valor de ptr �: %p\n", ptr_n1);
    printf("O endere�o de mem�ria de ptr �: %p\n", &ptr_n1);
    printf("O valor apontado por ptr �: %d\n", *ptr_n1);
    printf("O endere�o de mem�ria do valor apontado por ptr �: %p\n", &*ptr_n1);
    printf("N1 ocupa %zu bytes\n", sizeof(n1));
    printf("ptr_n1 ocupa %zu bytes\n", sizeof(ptr_n1));
    printf("O valor apontado por ptr_n1 ocupa %zu bytes\n", sizeof(*ptr_n1));
    

    return 0;
}