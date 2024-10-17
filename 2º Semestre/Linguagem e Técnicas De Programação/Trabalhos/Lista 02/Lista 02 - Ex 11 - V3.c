/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 02 - Ex 11
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int idade, idade_v, idade_n, i=1;
    char nome[40], nome_v[40], nome_n[40];
    setlocale(LC_ALL, "Portuguese-Brazilian");
    while(i < 6)
    {
        printf("Digite o nome da %d� pessoa: ",i);
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        getchar();
        if(idade > idade_v) {idade_v = idade; strcpy(nome_v,nome);}
        else if(idade < idade_n) {idade_n = idade; strcpy(nome_n,nome);}
        i++;
    }
    printf("%s � o mais velho.\n", nome_v);
    printf("%s � o mais novo.\n", nome_n);
    return 0;
}