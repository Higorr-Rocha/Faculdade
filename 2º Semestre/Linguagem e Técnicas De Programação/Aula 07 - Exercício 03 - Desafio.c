/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 07 - Exerc�cio 03 - Desafio
    Descri��o   : Calculadora Completa.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

double soma(double num_1, double num_2);
double sub(double num_1, double num_2);
double mult(double num_1, double num_2);
double div(double num_1, double num_2);
double pot(double num_1, double num_2);
void raiz(double num_1);
double porc(double num_1, double num_2);
double media(double num_1, double num_2);
void equa_seg(double num_1, double num_2, double num_3);

int main(){
    double num_1, num_2, num_3;
    char op;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Escolha um opera��o matem�tica:\n+ = Soma\n- = Subtra��o\n* = Multiplica��o\n/ = Divis�o\nP = Potencia��o\nR = Raiz Quadrada\n%% = Porcentagem\nM = M�dia\nS = Equa��o de Segundo Grau\n");
    scanf("%c", &op);
    if (op == 'S'){
        printf("Digite o valor de A: ");
        scanf("%lf", &num_1);
        printf("Digite o valor de B: ");
        scanf("%lf", &num_2);
        printf("Digite o valor de C: ");
        scanf("%lf", &num_3);
    }
    else if (op == 'R'){
        printf("Digite o n�mero: ");
        scanf("%lf", &num_1);
    }
    else 
    {
        printf("Digite o 1� N�mero: ");
        scanf("%lf", &num_1);
        printf("Digite o 2� n�mero: ");
        scanf("%lf", &num_2);
    }

    switch (op)
    {
    case '+':
        printf("A soma de %.2lf + %.2lf �: %.2lf\n", num_1, num_2, soma(num_1, num_2));
        break;
    case '-':
        printf("A subtra��o de %.2lf - %.2lf �: %.2lf\n", num_1, num_2, sub(num_1, num_2));
        break;
    case '*':
        printf("%.2lf X %.2lf �: %.2lf\n", num_1, num_2, mult(num_1, num_2));
        break;
    case '/':
        if(num_2 != 0){
            printf("%.2lf � %.2lf �: %.2lf\n", num_1, num_2, div(num_1, num_2));
        }
        else printf("N�o � poss�vel dividir por 0.");
        break;
    case 'P':
        printf("%.2lf elevado a %.2lf �: %.2lf", num_1, num_2, pot(num_1, num_2));
        break;
    case 'R':
        raiz(num_1);
        break;
    case '%':
        printf("%.0lf%% de %.2lf �: %.2lf", num_1, num_2, porc(num_1, num_2));
        break;
    case 'M':
        printf("A m�dia de %.2lf e %.2lf �: %.2lf", num_1, num_2, media(num_1, num_2));
        break;
    case 'S':
        equa_seg(num_1, num_2, num_3);
        break;
    default:
        printf("Opera��o Inv�lida.");
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

double pot(double num_1, double num_2){
    return pow(num_1, num_2);
}

void raiz(double num_1){
    if(num_1 > 0){
        printf("A Raiz Quadrada de %.0lf �: ", sqrt(num_1));
    }
    else if (num_1 == 0){
        printf("Zero n�o possui raiz.");
    }
    else
    {
        printf("N�meros negativos n�o possuem raiz quadrada real.");
    }
}

double porc(double num_1, double num_2){
    return mult(div(num_1, 100), num_2);
}

double media(double num_1, double num_2){
    return div(soma(num_1, num_2), 2);
}

void equa_seg(double num_1, double num_2, double num_3){
    int delta;
    delta = sub(pow(num_2, 2), mult(4, mult(num_1, num_3)));
    if(delta > 0){
        printf("X1 �: %.0lf\n", (-num_2 + sqrt(delta)) / mult(2,num_1));
        printf("X2 �: %.0lf", (-num_2 - sqrt(delta)) / mult(2,num_1));
    }
    else if(delta == 0){
        printf("X �: %.2lf", (-num_2 + sqrt(delta)) / mult(2,num_1));
    }
    else printf("A equa��o n�o possui solu��o real.");
}


