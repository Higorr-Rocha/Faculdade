/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Fun��o Divisor
    Descri��o   : Recebe um n�mero e diz o divisor.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

void divisor(int num, int div){
    if(num % div == 0){
        printf("O n�mero %d � divis�vel por %d.", num,div);
    }
    else printf("O n�mero %d n�o � divis�vel por %d.", num,div);
    
}

int main(){
    int valor, valor_2;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um n�mero: ");
    scanf("%d", &valor);
    printf("Digite o divisor: ");
    scanf("%d", &valor_2);
    divisor(valor,valor_2);
    return 0;
}