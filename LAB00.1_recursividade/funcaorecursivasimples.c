#include <stdio.h>
#include<stdlib.h>

int fatorial(int n){
   printf("Chamada recursiva para n = %d\n", n);
    if(n == 0)
      return 1;
    else
      return n*fatorial(n-1);
}
int main(){
    int n = 4;
    printf("Fatorial de %d = %d\n", n, fatorial(n));
    return 0;
}

/*
Explique: O que acontece se o número for 0? 
Por que o resultado é 1?

Pelo fato de haver uma única possiblidade
de ocorrer este conjunto do 0(vazio), por
isso é igualado a 1.

O que você observa sobre a ordem das chamadas recursivas?

Uma ordem decrescente.



*/



