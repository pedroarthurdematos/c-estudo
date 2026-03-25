#include <stdio.h>
#include "operacoes.h"

int soma(int, int);
int mult(int, int);
int subtracao(int, int);


int main(){
    int a = 10, b = 20;

    printf("Soma de a+b = %d\n", soma(a,b));
    printf("Subtração de a - b = %d\n", subtracao(a,b));
    printf("Produto de a * b = %d\n", mult(a,b));
    return 0;
}

/* 

Erros:

Cliente-operacoes.c: In function 'main':
cliente-operacoes.c:6:34: error: implicit declaration of function 'soma' [-Wimplicit-function-declaration]
    6 |     printf("Soma de a+b = %d\n", soma(a,b));
      |                                  ^~~~
cliente-operacoes.c:7:41: error: implicit declaration of function 'subtracao' [-Wimplicit-function-declaration]
    7 |     printf("Subtra├º├úo de a - b = %d\n", subtracao(a,b));
      |                                         ^~~~~~~~~
cliente-operacoes.c:8:39: error: implicit declaration of function 'mult' [-Wimplicit-function-declaration]
    8 |     printf("Produto de a * b = %d\n", mult(a,b));*/