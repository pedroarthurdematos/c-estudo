#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *arq;
    char c;
    arq = fopen("arquivo-1-caracter-por-vez.txt", "r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    c = fgetc(arq); printf("\n%c", c);
    c = fgetc(arq); printf("%c", c);
    c = fgetc(arq); printf("%c", c);
    c = fgetc(arq); printf("%c", c);
    c = fgetc(arq); printf("%c", c);
    c = fgetc(arq); printf("%c", c);
    c = fgetc(arq); printf("%c", c);
    c = fgetc(arq); printf("%c", c);
   
    printf("\nLeitura ocorrida com sucesso!");
    fclose(arq);
    return 0;

}












