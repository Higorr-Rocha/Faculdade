/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 09 - Ex 03 - Revis�o
    Descri��o   : Recebe 3 n�meros e diz qual o maior.
    Autor       : Higor Rocha
    Data atual  : 03/09/2024
*/

#include <stdio.h>
#include <locale.h>

int maior(int num_1, int num_2){
    if(num_1 > num_2){
        return num_1;
    }
    return num_2;
}

int main (){
    int num_1, num_2;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o primeiro n�mero: ");
    scanf("%d", &num_1);
    printf("Insira o segundo n�mero: ");
    scanf("%d", &num_2);
    num_2 = maior(num_1, num_2);
    printf("Insira o terceiro n�mero: ");
    scanf("%d", &num_1);
    num_2 = maior(num_1, num_2);
    printf("O maior n�mero �: %d", num_2);
}
