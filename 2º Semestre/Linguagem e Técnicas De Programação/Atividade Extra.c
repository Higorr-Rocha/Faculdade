/*
    Disciplina  : [Linguagem e T�cnicas de Programa��o]
    Nome        : M�todos de Ordena��o  
    Descri��o   : Exemplifica tr�s m�todos de ordena��o existentes em C
    Autor       : Higor Rocha
    Data atual  : 28/12/2024
*/

#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor_1[] = {9,5,3,7,6,4,10,1,8,2}, vetor_2[] = {9,5,3,7,6,4,10,1,8,2}, vetor_3[] = {9,5,3,7,6,4,10,1,8,2};
    int i, j, temp, x = 10;

    // Ordena��o Bubble Sort
    for (i = 0; i < x - 1; i++)                     // O loop externo controla o n�mero de passagens no vetor
    {
        for (j = 0; j < x - (i + 1); j++)           // O loop interno compara pares de elementos e os troca se necess�rio
        {
            if (vetor_1[j] > vetor_1[j + 1])        // Caso o 1� valor comparado seja maior que o 2�, invertemos suas posi��es
            {
                temp = vetor_1[j];                  // Troca os elementos usando uma vari�vel tempor�ria
                vetor_1[j] = vetor_1[j + 1];
                vetor_1[j + 1] = temp;
            }
        }
    }
    
    // Ordena��o Insertion Sort
    for (i = 1; i < x; i++)                         // Inicia o loop come�ando do 2� valor    
    {
        temp = vetor_2[i];                          // Copia o valor na posi��o atual de "i" para "temp"
        j = i - 1;                                  // Inicia "j" uma posi��o atr�s de "i"

        while (j >= 0 && vetor_2[j] > temp)         // Compara o valor em "temp" com os anteriores e os troca se preciso
        {
            vetor_2[j + 1] = vetor_2[j];            // Desloca o elemento para a direita
            j = j - 1;                              // Diminui "j" para comparar com o anterior ao deslocado
        }
        
        vetor_2[j + 1] = temp;                      // Coloca "temp" na posi��o certa
    }

    // Ordena��o Selection Sort
    for (i = 0; i < x - 1; i++)                     // Loop externo percorre at� o pen�timo valor do vetor
    {
        for (j = i + 1; j < x; j++)                 // Inicializa o loop a partir do valor seguinte de "i"
        {
            if (vetor_3[i] > vetor_3[j])            // Compara o valor � esquerda com o da direita e os inverte se preciso 
            {
                temp = vetor_3[j];                  // Copia o valor na posi��o "j" para "temp"
                vetor_3[j] = vetor_3[i];            // Troca o valor na posi��o "j" pelo valor na posi��o "i"
                vetor_3[i] = temp;                  // Troca o valor da posi��o "i" pelo salvo em "temp"
            }
        }
    }

    // Apresenta��o

    printf("Ordena��o Bubble Sort: \n");
    for (i = 0; i < x; i++)
    {
        printf("%d", vetor_1[i]);
        if (i < x-1) printf(",");
        else printf(".\n");
    }
    printf("Ordena��o Insertion Sort: \n");
    for (i = 0; i < x; i++)
    {
        printf("%d", vetor_2[i]);
        if (i < x-1) printf(",");
        else printf(".\n");
    }
    printf("Ordena��o Selection Sort: \n");
    for (i = 0; i < x; i++)
    {
        printf("%d", vetor_3[i]);
        if (i < x-1) printf(",");
        else printf(".\n");
    }

    return 0;
}