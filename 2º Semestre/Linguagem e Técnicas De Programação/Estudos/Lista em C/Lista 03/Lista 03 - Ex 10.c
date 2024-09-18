/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista - Ex 10
    Descri��o   : Solicita 10 n�meros ao usu�rio. Apresenta a mensagem PAR ou IMPAR e a m�dia dos �mpares.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int num, quant, i;
    float impar;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    for(i = 1; i < 11; i++)
    {
        printf("Digite o %d� n�mero: ",i);
        scanf("%d", &num);
        if(num % 2 != 0){
            printf("�mpar.\n");
            impar += num;
            quant += 1;
        }
        else printf("Par.\n");
    }
    printf("A m�dia dos %d n�meros �mpares �: %.2f", quant, impar/10);
    return 0;
}