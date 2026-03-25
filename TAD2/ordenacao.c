#include "ordenacao.h"

void bublesort(int v[], int n){
    int continua, i, aux, fim = n;

    do{
    continua = 0;

    for(i = 0; i < fim-1; i++){
        if(v[i] > v[i+1]){

            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
            continua=i+1;
               
         
        }
    }
  }
  while(continua != 0);
}










