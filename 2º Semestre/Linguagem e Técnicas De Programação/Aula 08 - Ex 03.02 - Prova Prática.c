/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 08 - Exerc�cio 03 - Prova Pr�tica
    Descri��o   : Recebe 6 n�meros e diz qual o maior sem usar la�o de repeti�ao e fun��o.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>

int maior(int num, int num_m);

int main(){
    int num, num_m;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite o 1� N�mero: ");
    scanf("%d", &num);
    num_m = num;
    printf("Digite o 2� N�mero: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("Digite o 3� N�mero: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("Digite o 4� N�mero: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("Digite o 5� N�mero: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("Digite o 6� N�mero: ");
    scanf("%d", &num);
    num_m = maior(num,num_m);
    printf("O maior n�mero � %d.", num_m);
    return 0;
}

int maior(int num, int num_m){
    if (num > num_m) return num;
    return num_m;
}