/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 06 - Exerc�cio 04
    Descri��o   : Recebe um n�mero de quatro d�gitos e diz a soma de todos os d�gitos.
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <locale.h>

int soma_digitos(int num){
    int soma = 0;
    soma += num/1000;
    num %= 1000;
    soma += num/100;
    num %= 100; 
    soma += num/10;
    soma += num % 10;
    return soma;
}

int main(){
    int valor;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite um n�mero de 4 d�gitos: ");
    scanf("%d", &valor);
    if(valor >= 1000 && valor <= 9999){ 
        printf("A soma dos 4 d�gitos do n�mero %d �: %d", valor, soma_digitos(valor));
    }
    else printf("O n�mero deve ter 4 d�gitos.");
    return 0;
}