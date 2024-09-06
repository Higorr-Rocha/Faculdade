/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Exerc�cio 08 - Revis�o
    Descri��o   : Recebe um o raio de um c�rculo e calcule a �rea e a circunfer�ncia.
    Autor       : Higor Rocha
    Data atual  : 06/09/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int raio;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o raio do c�rculo: ");
    scanf("%d", &raio);
    printf("A �rea do c�rculo �: %.2f\n", (raio * raio) * 3.1416);
    printf("A circunfer�ncia do c�rculo �: %.2f\n", 2 * (3.1416 * raio));
}