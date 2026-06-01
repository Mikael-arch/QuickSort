#include <stdio.h>
#include "quicksort.h"
#include <time.h>
#include <stdlib.h>

int main()
{

    //int vetor[] = {5, 2, 4, 1, 3, 7};
    //int vetor1[] = {5, 2, 4, 1, 3, 7};
   
    srand(time(NULL));
    int vetor[10000];
    int vetor1[10000];
    int min = 1, max = 999;


    for (int i = 0; i < 10000; i++) {
        vetor[i] = (rand() % (max - min + 1)) + min;
        vetor1[i] = vetor[i];
    }
    int fim = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < fim; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < fim; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("\n");
    clock_t start = clock();
    quicksort(vetor, 0, fim - 1);
    clock_t final = clock();
    double processo_time = ((double)(final - start)) / CLOCKS_PER_SEC;
    
    clock_t start1 = clock();
    bubblesort(vetor1, 10000);
    clock_t final1 = clock();
    double processo_time1 = ((double)(final1 - start1)) / CLOCKS_PER_SEC;

    printf("ordenando o vetor gerado... \n");
    for (int i = 0; i < fim; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("\n");
    for (int i = 0; i < fim; i++)
    {
        printf(" %d ", vetor1[i]);
    }

    printf("\n");
    printf(" tempo de ordenacao \n quicksort = %lf \n bubblesort = %lf", processo_time, processo_time1);
}