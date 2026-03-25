#include <stdio.h>
#include <time.h>

int soma_recursiva(int n){
    if(n == 1)
        return 1;
    else
        return n;
}
int main(){
    double t = clock();
    printf("soma=%d \n", soma_recursiva(60000));
    t = clock() -t;
    printf("\nTempo em milissegundo =%1f",t);
}

/*
O que você observa sobre a estrutura das 
funções soma e soma_recursiva? Como elas 
diferem em termos de implementação?

A eficiencia, espaço usado na memória e
laço looping tem grandes diferença entre
essas duas operações. a)Implementação 
Iterativa,  Laço. Implementação Recursiva 
A Auto-chamada.

Qual dos programas é mais rápida?
 A) Versão Interativa

Qual dos programas ocupa menos memória?
 Por quê?

 A) Versão Interativa. Porque consiste na base
 da incrementação de números, enquanto a versão
 recursiva utilza mais memória.



*/

