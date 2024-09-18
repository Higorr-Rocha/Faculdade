/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : Lista - Ex 11
    Descri��o   : Algoritmo que solicita os dados de 32 alunos (Nome, Nota 01 e Nota 02). 
                  Posteriormente, apresente a m�dia da turma e o percentual de aprovados e reprovados, 
                  considerando m�dia 6,0. (As notas devem ser validadas entre 0 e 10)
    Autor       : Higor Rocha
    Data atual  : 20/08/2024
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int nota_01, nota_02, i=1;
    float media, aprovados;
    char nome[40];
    setlocale(LC_ALL, "Portuguese-Brazilian");
    while (i < 33)
    {
        printf("Digite seu nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = 0;
        printf("Digite a 1� Nota: ");
        scanf("%d", &nota_01);
        getchar();
        printf("Digite a 2� Nota: ");
        scanf("%d", &nota_02);
        getchar();
        if((nota_01 >= 0 && nota_01 <= 10) && (nota_02 >= 0 && nota_02 <= 10))
        {
            media += nota_01 + nota_02;
            if((nota_01 + nota_02)/2 >= 6) aprovados += 1;
            i += 1;
        }
        else printf("As notas devem ser entre 0 e 10.\n");
    }
    printf("A m�dia da turma � de: %.2f\n", media/32);
    printf("O percentual de aprovados � de: %.0f%%\n", (aprovados/32)*100);
    printf("O percentual de reprovados � de: %.0f%%\n", ((32 - aprovados)/32)*100);
    return 0;
}