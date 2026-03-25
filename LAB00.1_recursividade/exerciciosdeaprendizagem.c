/*1.Explique brevemente o que é uma função recursiva.
    É uma operação que consiste em criar um novo espaço na memoria,
    sendo mais pesado que um looping, e necessita de uma parametro
    para que haja um fim na operação e que nao ocorra sobrecarga no
    stack.


2. Quais são os elementos essenciais de uma função recursiva?
    Operação base e recursiva.

    Operação base:É uma condição que exige
    uma quebra de de recursão, sem essa
    quebra, acabaria em um looping, sendo assim
    sobrecarregando o Stack Overflow.
   
    Operação Recursiva: Uma função que chama
    a si mesma, desencadeando-se em conjuntos
    de dados menores ou modificados.


*/

    
/*
4. Implemente uma função recursiva para calcular a potência de um número (base^expoente). A função
deve receber dois parâmetros: a base e o expoente, ambos inteiros. Crie um programa que teste a
função com diferentes valores de base e expoente.
*/
#include <stdio.h>
#include<stdlib.h>

int potencia(int base, int expoente) {
  
    if (expoente == 0) {
        return 1;
    } else {
      
        return base * potencia(base, expoente - 1);
    }
}

int main() {
    int b, e;

    printf("--- Teste de Potencia Recursiva ---\n");
    
  
    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Digite o expoente (inteiro positivo): ");
    scanf("%d", &e);

    if (e < 0) {
        printf("Este programa exemplifica expoentes inteiros positivos.\n");
    } else {
        printf("%d elevado a %d e: %d\n", b, e, potencia(b, e));
    }

    printf("\nOutros testes:\n");
    printf("2^5 = %d\n", potencia(2, 5));
    printf("10^3 = %d\n", potencia(10, 3));
    printf("7^0 = %d\n", potencia(7, 0));

    return 0;
}






