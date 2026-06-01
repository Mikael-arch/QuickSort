#include <stdio.h>
#include "quicksort.h"

int particionar(int *vetor, int inicial, int final)
{

    int pivot = vetor[inicial + (final - inicial) / 2];
    int i = inicial - 1;
    int j = final + 1;

    while (1)
    {
        do {
            i++;
        } while (vetor[i] < pivot);

        do {
            j--;
        } while (vetor[j] > pivot);

        if(i>=j){
            return j;
        }

        int aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
    }
}

void quicksort(int *vetor, int inicial, int final)
{
    if (inicial < final)
    {
        int posi = particionar(vetor, inicial, final);

        quicksort(vetor, inicial, posi);
        quicksort(vetor, posi + 1, final);
    }
}

void bubblesort (int *vetor, int tamanho) {
    int k, j, aux;

    for (k = tamanho - 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux  = vetor[j];
                vetor[j]  = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
