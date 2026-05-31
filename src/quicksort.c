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

void bubblesort(int *vetor, int tamanho){

    for(int i = 0; i < tamanho - 1; i++){
        for(int j = i; j< tamanho - i-1; j++){
            if(vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}
