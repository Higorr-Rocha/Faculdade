/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Aula 08 - Exerc�cio 02 - Prova Pr�tica
    Descri��o   : Recebe nome e ano de nascimento e diz se � ano bissexto.
    Autor       : Higor Rocha
    Data atual  : 24/08/2024
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int ano;
    char nome[100];
    setlocale(LC_ALL, "Portuguese-Brazilian");
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("%s, digite o ano em que voc� nasceu: ", nome);
    scanf("%d", &ano);
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)){
        printf("%s, voc� nasceu em ano bissexto.", nome);
    }
    else printf("%s, voc� n�o nasceu em ano bissexto.", nome);
    return 0;
}