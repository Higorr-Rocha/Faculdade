/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 07 - Exerc�cio 01
    Descri��o   : Colocando fun��o abaixo da Main.
    Autor       : Higor Rocha
    Data atual  : 23/08/2024
*/

#include <stdio.h>
#include <locale.h>

double soma(double num_1, double num_2);
double sub(double num_1, double num_2);
double mult(double num_1, double num_2);
double div(double num_1, double num_2);

int main(){
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("A soma �: %.2lf\n", soma(8,3));
    printf("A subtra��o �: %.2lf\n", sub(8,3));
    printf("A multiplica��o �: %.2lf\n", mult(8,3));
    printf("A divis�o �: %.2lf\n", div(8,3));
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