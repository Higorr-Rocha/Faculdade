/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 02 - Ex 08
    Autor       : Higor Rocha
    Data atual  : 16/10/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, quant = 0, i;
    float impar;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    i = 1;
    while (i < 11)    
    {
        printf("Digite o %d� n�mero: ",i);
        scanf("%d", &num);
        if(num % 2 != 0){
            printf("�mpar.\n");
            impar += num;
            quant += 1;
        }
        else printf("Par.\n");
        i++;
    }
    printf("A m�dia dos %d n�meros �mpares �: %.2f", quant, impar/10);
    return 0;
}