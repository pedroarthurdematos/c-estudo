#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *arq;
    char string[100];

    arq = fopen("Arquivo-1-fputc.txt", "w");
    if(arq == NULL){
       printf("Erro na abertura do arquivo.\n");
       exit(1);
}
    printf("Entre com a string a ser gravada no arquivo: ");
    scanf("%99[^\n]s", string);

    for(int i=0; i < strlen(string); i++){
        fputc(string[i], arq);
    }
    printf("Gravação ocorrida com sucesso");
    fclose(arq);
    return 0;

}





