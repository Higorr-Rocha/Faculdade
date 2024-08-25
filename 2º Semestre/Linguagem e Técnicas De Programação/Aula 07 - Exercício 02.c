/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 07 - Exerc�cio 02
    Descri��o   : Calculadora de Soma, Subtra��o, Multiplica��o, Divis�o, M�dia e Porcentagem.
    Autor       : Higor Rocha
    Data atual  : 23/08/2024
*/

#include <stdio.h>
#include <locale.h>

double soma(double num_1, double num_2);
double sub(double num_1, double num_2);
double mult(double num_1, double num_2);
double div(double num_1, double num_2);
double media(double num_1, double num_2);
double porce(double num_1, double num_2);

int main(){
    double num_1, num_2;
    char op;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Escolha um opera��o matem�tica:\n+ = Soma\n- = Subttra��o\n* = Multiplica��o\n/ = Divis�o\nM = M�dia\nP = Porcentagem\n");
    scanf("%c", &op);
    printf("Digite um N�mero: ");
    scanf("%lf", &num_1);
    printf("Digite outro n�mero: ");
    scanf("%lf", &num_2);
    switch (op)
    {
    case '+':
        printf("A soma �: %.2lf\n", soma(num_1, num_2));
        break;
    case '-':
        printf("A subtra��o �: %.2lf\n", sub(num_1, num_2));
        break;
    case '*':
        printf("A multiplica��o �: %.2lf\n", mult(num_1, num_2));
        break;
    case '/':
        printf("A divis�o �: %.2lf\n", div(num_1, num_2));
        break;
    case 'M':
        printf("A m�dia �: %.2lf\n", media(num_1, num_2));
        break;
    case 'P':
        printf("A porcentagem �: %.2lf\n", porce(num_1, num_2));
        break;
    }
    return 0;
}

double soma(double num_1, double num_2){
    return num_1 + num_2;
}

double sub(double num_1, double num_2){
    return num_1 - num_2;
}

double mult(double num_1, double num_2){
    return num_1 * num_2;
}

double div(double num_1, double num_2){
    return num_1 / num_2;
}

double media(double num_1, double num_2){
    return div(soma(num_1, num_2), 2);
}

double porce(double num_1, double num_2){
    return mult(div(num_1, 100), num_2);
}