/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Calculadora de M�dias
    Descri��o   : Recebe quatro n�meros e informa o resultado da m�dia escolhida. 
                  Categorizando entre aprovado e reprovado.
    Autor       : Higor Rocha
    Data atual  : 09/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    float num_1, num_2, num_3, num_4, resul;
    char media;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Escolha a m�dia desejada:\nA - M�dia Aritm�tica\nB - M�dia Ponderada\nC - M�dia Harm�nica\n");
    scanf("%c", &media);
    printf("Digite o 1� N�mero: ");
    scanf("%f", &num_1);
    printf("Digite o 2� N�mero: ");
    scanf("%f", &num_2);
    printf("Digite o 3� N�mero: ");
    scanf("%f", &num_3);
    printf("Digite o 4� N�mero: ");
    scanf("%f", &num_4);
    if(media == 'A'){
        resul = (num_1 + num_2 + num_3 + num_4)/4;
    }
    if(media == 'B'){
        resul = num_1*2+num_2*3+num_3*5+num_4*10/20;
    }
    if(media == 'C'){
        resul = (num_1*num_2*num_3*num_4)/(num_1+num_2+num_3+num_4);
    }
    if(resul >= 6){
        printf("O resultado da m�dia �: %.2f\nParab�ns! Voc� foi Aprovado.", resul);
    }else{
        printf("O resultado da m�dia �: %.2f\nSinto Muito! Voc� foi Reprovado.", resul);
    }
    return 0;
}