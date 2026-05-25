#include <stdio.h>
#include "quicksort.h"

int main(){
     
    int vetor[10] = {4,5,3,7,8,9,6,1,2,18};
    int fim = sizeof(vetor) / sizeof(vetor[0]);

    for(int i = 0; i<fim; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n");
    quicksort_crescente(vetor, 0, fim-1);
    for(int i = 0; i<fim; i++){
        printf(" %d ", vetor[i]);
    }

}