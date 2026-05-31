#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <stdio.h>

void quicksort(int *vetor, int inicial, int final);
int particionar(int *vetor, int inicial, int final);
void bubblesort(int *vetor, int tamanho);
#endif