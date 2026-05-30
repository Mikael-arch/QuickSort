#include <stdio.h>
#include "quicksort.h"

int main(){
     
    int vetor[] = {4,5,3,7,8,9,6,1,2,18};
    int fim = sizeof(vetor) / sizeof(vetor[0]);

    for(int i = 0; i<fim; i++){
        printf(" %d ", vetor[i]);
    }
    printf("\n");
    quicksort(vetor, 0, fim-1);
    for(int i = 0; i<fim; i++){
        printf(" %d ", vetor[i]);
    }

}