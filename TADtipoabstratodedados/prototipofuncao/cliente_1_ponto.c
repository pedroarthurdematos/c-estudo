#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main()
{
    float d, d2;
    Ponto *p, *q, *p1, *p2;

    p = pto_cria(10,21);
    q = pto_cria(7, 25);
    p1 = pto_cria(14.5, 16.7);
    p2 = pto_cria(20,30);

    d = pto_distancia(p, q);
    d2 = pto_distancia(p1, p2);
   
    printf("Distancia entre dois pontes: %f \n", d);
    pto_atribui(q, 7, 15);
    pto_atribui(p2, 20,30);
    float a, b, c, e;
    pto_acessa(p, &a,&b);
    pto_acessa(p1, &c,&e);
    printf("Valor de a= %.2f - b = %.2f- c = %.2f- d = %.2f\n", a, b, c, e);
    pto_libera(q);
    pto_libera(p);
    pto_libera(p1);
    pto_libera(p2);

    return 0;
}

/*
A-Faça alguns testes das funções disponíveis na Interface do TAD. 
Crie mais 2 pontos p1, p2 com coordenadas aleatórias (ex: p1 = 
pto_cria(14.5, 16.7); p2 = pto_cria(20,30); etc..), salve, compile e
execute;




B-Acesse os valores dos pontos criados anteriormente e 
mostre o resultado na tela;


C-Calcule a distâncias entre os diversos pontos, criados anteriormente,
 e mostre os resultados na tela.




D. Libere a memória para cada um dos pontos criados, chamando a função 
pto_libera().





*/









