
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[10];

    printf("valores no intervalo de [0, %u]\n", RAND_MAX);
    for (int i = 0; i < 10; i++){
        x[i] = rand() % 20;
    }
   
    for (int i = 0; i < 10; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }

return 0;
}

/*
A-Compile e execute o programa pelo menos 3 vezes. O que você identificou?
Mudou nada

B-Qual o maior valor que pode ser gerado aleatoriamente pela função rand()?
24464

C-Como limitar o intervalo de valores que podem ser inseridos no vetor?
Colocando uma condição de % na função rand()

Troque os comandos da linha 12 por esse comando: x[i] = rand() % 100; salve, compile e execute. O que aconteceu?   
valores reduzidos devido a divisao % 100.


Agora troque os comandos da linha 12 por: x[i] = rand() % 20; salve, compile e execute. Explique o que está acontecendo.
valores reduzidos devido a divisao % 20.







*/
