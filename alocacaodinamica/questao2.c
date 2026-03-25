#include<stdio.h>
#include<stdlib.h>
 int main(){

char *x;

//x = malloc(sizeof(int));
x = calloc(1, sizeof(int));

if(x){
  printf("Memoria alocada com sucesso\n");
  printf("x: %d\n", *x);
  *x = 20;
  printf("x: %d\n", *x);
}else{
     printf("Erro ao alocar memoria!\n");
}
 return 0;
 //O que significa o número 1, passado como argumento para a função calloc(1,sizeof(int))?
 /*R: Quantidadae especifica que o usuario deseja armazenar(um inteiro, ou um elemento neste caso).
 A função calloc é uma das melhores opções devido a limpeza que é disponibilizada.
*/
}




