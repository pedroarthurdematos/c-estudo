#include<stdio.h>
#include<stdlib.h>
char frase[] = "Maria eh bonita";
void inverte(int pos);

int main(){
    int pos =0;
    inverte(pos);
    printf("\n");
    return 0;
}
void inverte(int pos){
    if(frase[pos] == '\0'){
        return;
    }else{
        inverte(pos+1);
        printf("%c", frase[pos]);
    }


}
/*
Questão 1: A função inverte é recursiva. 
Descreva o papel do caso base na função.
O que aconteceria se não houvesse a 
verificação if(frase[pos] == '\0')?

Náo haveria um parametro para encerrar
o laço(looping) e teria acesso invalido
a memoria. E por fim haveria um sobre-
carga.

Questão 2: Observe a ordem em que os 
caracteres da string frase são impressos. 
Explique como a recursão causa essa ordem 
de impressão.

    Quando ocorre a entrada das Strings ocasiona
um agrupamento dessas letras, e por fim, ao desem
pilhar há inversão dos caracteres.




*/


