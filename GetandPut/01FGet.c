#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *arq;
    char c;
    arq = fopen("arquivo-1-caracter-por-vez.txt", "w");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fputc('a',arq);
    fputc('B',arq);
    fputc('C',arq);
    fputc('d',arq);
    fputc(65,arq);
    fputc(34,arq);
    fputc('\\',arq);
    printf("Gravação ocorrida com sucesso!");
    fclose(arq);
    return 0;

}





