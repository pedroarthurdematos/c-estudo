#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x[10];

    printf("Time: %u\n", (unsigned)time(NULL));
   
    for (int i = 0; i < 10; i++){
        x[i] = rand() % 100;
    }
   
    for (int i = 0; i < 10; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }

return 0;
}

/*

A-O que faz a função time(NULL)?  Quantos segundos já se passaram, aproximadamente, desde 1º de janeiro de 1970 até esse exato momento? 
conta em tempo real em segundos que se passaram em tempo real.

a-
1775563575
1775563711
1775563725

B Execute o programa 3 vezes, o que acontece com os valores do vetor? Se repetem?
nao, sempre sao modificados

a x[0] = 41

b sem diferença nos vetores






*/




