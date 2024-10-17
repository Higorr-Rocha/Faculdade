/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista 02 - Ex 13
    Autor       : Higor Rocha
    Data atual  : 17/10/2024
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int dia, mes;
    char continuar;
    setlocale(LC_ALL, "Portuguese-Brazilian");
    do
    {
        printf("Digite o dia em que voc� nasceu (1-31): ");
        scanf("%d", &dia);
        getchar();
        printf("Digite o m�s em que voc� nasceu (1-12): ");
        scanf("%d", &mes);
        getchar();
        if ((dia >= 21 && mes == 1) || (dia <= 19 && mes == 2)) printf("Seu signo � Aqu�rio.\n");
        else if ((dia >= 20 && mes == 2) || (dia <= 20 && mes == 3)) printf("Seu signo � Peixes.\n");
        else if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)) printf("Seu signo � �ries.\n");
        else if ((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5)) printf("Seu signo � Touro.\n");
        else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) printf("Seu signo � G�meos.\n");
        else if ((dia >= 21 && mes == 6) || (dia <= 21 && mes == 7)) printf("Seu signo � C�ncer.\n");
        else if ((dia >= 22 && mes == 7) || (dia <= 22 && mes == 8)) printf("Seu signo � Le�o.\n");
        else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) printf("Seu signo � Virgem.\n");
        else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) printf("Seu signo � Libra.\n");
        else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) printf("Seu signo � Escorpi�o.\n");
        else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) printf("Seu signo � Sagit�rio.\n");
        else if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 1)) printf("Seu signo � Capric�rnio.\n");
        printf("Deseja repetir (S/N)? ");
        scanf("%c", &continuar);
        getchar();
    }while(continuar != 'N');
    return 0;
}