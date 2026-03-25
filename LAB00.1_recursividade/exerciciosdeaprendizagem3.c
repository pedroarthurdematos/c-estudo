/*
3. Implemente uma função recursiva que calcule a soma dos dígitos de um número inteiro positivo.
Escreva um programa que leia um número inteiro e use a função recursiva para calcular e imprimir a
soma dos seus dígitos
*/
#include<stdio.h>
#include<stdlib.h>

int somaDigitos(int n) {
   
    if (n == 0) {
        return 0;
    } else {
       
        return (n % 10) + somaDigitos(n / 10);
    }
}

int main() {
    int numero;

    printf("Digite un numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um numero positivo.\n");
    } else {
        int resultado = somaDigitos(numero);
        printf("A soma dos digitos de %d e: %d\n", numero, resultado);
    }

    return 0;
}                                                                                                                           





