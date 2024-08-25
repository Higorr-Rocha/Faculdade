/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Calculadora de Tri�ngulo Ret�ngulo
    Descri��o   : Calculadora Simples.
    Autor       : Higor Rocha
    Data atual  : 13/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float num_1, num_2;
    char op;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Escolha um opera��o matem�tica:\n+ = Soma\n- = Subttra��o\n* = Multiplica��o\n/ = Divis�o\n");
    scanf("%c", &op);
    printf("Digite um N�mero: ");
    scanf("%f", &num_1);
    printf("Digite outro n�mero: ");
    scanf("%f", &num_2);
    switch (op)
    {
    case '+':
        printf("%.2f+%.2f=%.2f", num_1,num_2,num_1+num_2);
        break;
    case '-':
        printf("%.2f-%.2f=%.2f", num_1,num_2,num_1-num_2);
        break;
    case '*':
        printf("%.2f*%.2f=%.2f", num_1,num_2,num_1*num_2);
        break;
    case '/':
        printf("%.2f/%.2f=%.2f", num_1,num_2,num_1/num_2);
        break;
    }
}