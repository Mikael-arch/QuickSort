#include <stdio.h>
#include "quicksort.h"

int particionar(int *vetor, int inicial, int final)
{

    int pivot = inicial + (final - inicial) / 2;

    while (inicial < final)
    {
        while (inicial < final && vetor[inicial] <= vetor[pivot])
        {
            inicial++;
        }
        while (inicial < final && vetor[final] > vetor[pivot])
        {
            final--;
        }

        int aux = vetor[inicial];
        vetor[inicial] = vetor[final];
        vetor[final] = aux;
    }
    return inicial;
}

void quicksort_crescente(int *vetor, int inicial, int final)
{
    if (inicial < final)
    {
        int posi = particionar(vetor, inicial, final);

        quicksort_crescente(vetor, inicial, posi - 1);
        quicksort_crescente(vetor, posi, final);
    }
}