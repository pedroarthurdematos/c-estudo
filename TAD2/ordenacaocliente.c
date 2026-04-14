#include <stdio.h>
#include "ordenacao.h"

void printArray(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d - ", v[i] );
    }
}

void copiaVetor(int *vOriginal , int *vCopia, int tam){
       for(int i = 0; i < tam; i++){
           vCopia[i] = vOriginal[i];
       }

}


int main(){
    int contCompB = 0, contCompI = 0, contCompS = 0;
    int trocaB = 0, trocaI = 0, trocaS = 0;

    int vetor[] = {12, 11, 13, 5, 6};
    int n = sizeof(vetor)/ sizeof(vetor[0]);
    int vetor2[n], vetor3[n];

    copiaVetor(vetor, vetor2, n);
    copiaVetor(vetor, vetor3, n);

    printf("\nImprime vetor desordenado\n");
    printArray(vetor, n);

    printf("\nImprime vetor ordenado BubbleSort\n");
    bubleSort(vetor, n, &contCompB, &trocaB);
    printArray(vetor, n);
    printf("Bublesort");
}













