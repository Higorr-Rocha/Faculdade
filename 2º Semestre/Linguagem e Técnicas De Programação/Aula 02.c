/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Primeiro Programa em C  
    Descri��o   : Escreve Ol�, Mundo!
    Autor       : Higor Rocha
    Data atual  : 02/08/2024
*/

#include <stdio.h>
#include <locale.h>

// Fun��o principal que devolve um inteiro
int main(){ // In�cio da Fun��o.
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Ol�, Mundo!");   // Escreve o valor definido na tela.
    return 0;               // Devolve o valor da fun��o (int).
}   // Fim da Fun��o.