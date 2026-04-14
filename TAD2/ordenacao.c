#include "ordenacao.h"

void bublesort(int v[], int n, int *comp, int *trocas){
    int continua, i, aux, fim = n;

    do{
    continua = 0;

    for(i = 0; i < fim-1; i++){
        (*comp)++;
        if(v[i] > v[i+1]){
            (*trocas)++;
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
            continua=i+1;
               
         
        }
    }
  }
  while(continua != 0);
}

void selectionSort(int *arr, int n) {
    int i, j, minIndex, temp;
    
    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume que o atual é o menor
        
        for (j = i + 1; j < n; j++) {
            // Use 'arr' (o nome que você deu no parâmetro)
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Encontrou um novo menor
            }
        }
        
        // Troca os valores se o minIndex mudou
        if (i != minIndex) {
            temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}