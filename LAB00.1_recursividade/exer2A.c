/*
a) Elabore um programa que use o método iterativo 
para somar todos os números inteiros de 1 até N. 
Meça o tempo de execução.
*/
#include <stdio.h>
#include <time.h>

int soma(int n){
    int i, soma=0;
    for(i=1;i<=n;i++){
        soma = soma + i;
    }
    return soma;
}
int main(){
    double tempoInicial = clock();
    printf("A soma de 10 inteiro = %d", soma(50000));
    double tempoFinal = clock();
    printf("\nTempo em milissegundo =%1f",tempoFinal - tempoInicial);
}




