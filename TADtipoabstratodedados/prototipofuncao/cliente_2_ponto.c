#include <stdio.h> 
#include <stdlib.h>
#include "ponto.h"
int main()
{
float d;
float x, y;
Ponto *p, *q, *p1, *p2, *p3;

p1 = pto_cria(5.5, 6); 
p2 = pto_cria(15, 17.89); 
p3 = pto_cria(25,100);


printf("Insira os valores de x, y do ponto P1 separados por virgula: ");
scanf("%f, %f", &x, &y);
p1 = pto_cria(x, y);

printf("Insira os valores de x, y do ponto P2 separados por virgula: ");
scanf("%f, %f", &x, &y);
p2 = pto_cria(x, y);

printf("Insira os valores de x, y do ponto P3 separados por virgula: ");
scanf("%f, %f", &x, &y);
p3 = pto_cria(x, y);

printf("Insira os valores de x, y do ponto P separados por virgula: ");
scanf("%f, %f", &x, &y);
p = pto_cria(x, y);

printf("Insira os valores de x, y do ponto Q separados por virgula: ");
scanf("%f, %f", &x, &y);
q = pto_cria(x, y);

pto_acessa(p, &x, &y);
printf("Os valores de X= %.2f e Y = %.2f\n\n", x, y);

d = pto_distancia(p, q);
printf("Distancia entre pontos: %5.2f\n", d);
pto_libera(q);
pto_libera(p);

d = pto_distancia(p1, p2);
printf("Distancia entre pontos: %5.2f\n", d);
pto_libera(p1);
pto_libera(p2);

d = pto_distancia(p2, p3);
printf("Distancia entre pontos: %5.2f\n", d);
pto_libera(p2);
pto_libera(p3);

d = pto_distancia(p3, q);
printf("Distancia entre pontos: %5.2f\n", d);
pto_libera(p3);
pto_libera(q);
pto_libera(p);
pto_libera(p1);
pto_libera(p2);
return 0;
}

/*
A. Crie mais 3 pontos: p1 = pto_cria(5.5, 6); p2 = pto_cria(15, 17.89); p3 = pto_cria(25,100); depois
salve, compile e execute;


B. Calcule a distâncias entre os pontos (p1,p3) e (p2,p3) e (p3,q).
 Mostre os resultados na tela.


C. Crie duas variáveis do tipo real para receber os valores, por referência, das coordenadas de dos
pontos p3 e p2. Mostre o resultado na tela;


D. Libere a memória para cada um dos pontos criados, chamando a função pto_libera()
*/