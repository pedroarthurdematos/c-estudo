//Ponteiro: Variável capaz de armazenar um determinado tipo de dado, um endereço de memória.
/*
int *ptr;
int a = 10;
ptr = &a;

*ptr = 20;

V + 4 * sizaof(int)
S104 + 4 * 4
S120
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
   
int *x;
//x = malloc(sizeof(int));
x = malloc(99999999999);
           

           
if(x) {
    printf("Endereco do ponteiro (&x): %p\n", &x);
    printf("Endereco alocado (x): %p\n", x);
    *x = 50;
    printf("Valor em x: %d\n", *x);
} else {
    printf("Erro ao alocar!\n");
}
printf("Tamanho do ponteiro x: %zu bytes\n", sizeof(x));
//tive que colocar um numero maior que foi pedido na questão, nao aparecia a mensagem de erro na memória.

/*
O que acontece ao imprimir o endereço do ponteiro (&x) 
e o endereço alocado (x)?

R:
printf("%p", &x): imprime o endereço de memória onde a própria 
variável ponteiro está armazenada, na Stack.

printf("%p", x): imprime o endereço da região de memória que foi
reservada dinamicamente para o inteiro, na Heap.

O que acontece ao tentar alocar malloc(99999999999)?

falhou porque o valor solicitado excede a memória disponível 
ou os limites do sistema.

Qual o tamanho, em bytes, ocupado pelo ponteiro x?

No meu dispositivo é de 64 bits, entao ocupa 8 bytes.
*/



}