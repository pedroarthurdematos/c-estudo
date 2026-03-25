#include<stdio.h>

int main(){
 FILE *file = fopen("compra.txt", "a");
 if(file == NULL){
    printf("Erro ao abrir o arquivo.\n");
    return 1;
 }

    /*fprintf(file, "Manteiga 1 4.5\n");
    fprintf(file, "pao 1 7.99\n");
    fprintf(file, "arroz 2 10.95\n");
    fprintf(file, "feijao 3 5.4n");
    fprintf(file, "carne 2 21.90\n");
    fprintf(file, "detergente 3 1.60\n");
    fprintf(file, "sabao 2 3.45\n");*/
    fprintf(file, "vassora 2 123.45\n");

    fclose(file);
    printf("Dados gravados com sucesso no arquivo compra.txt.\n");
    return 0;

}

/*
QUESTÃO 1
1- %s para string, como nomes, codigos. %f para produtos reais, salarios, 
preços. %d para inteiros

2- Para haver um padrao de alinhamento. em especifico, á esquerda.

3-se o ponteiro fopen for null, ele imprime a mensagem de erro.

4-Ao final da operação,caso nao haver nenhum dado para ler,
encerra-se o programa.

5-com o laço while, fazendo as contas com cada um dos produtos indi
vidualmente.

6-Equivalente a um TAB, 8 espaços.














*/











