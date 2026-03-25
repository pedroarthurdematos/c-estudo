#include <stdio.h>
#include "ordenacao.h"

void printArray(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d - ", v[i] );
    }
}

int main(){
    int vetor[] = {12, 11, 13, 5, 6};
    int n = sizeof(vetor)/ sizeof(vetor[0]);
    printf("\nImprime vetor desordenado\n");
    printArray(vetor, n);

    printf("\nImprime vetor ordenado\n");
    bubleSort(vetor, n);
   
}













