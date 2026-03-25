#include<stdio.h>

int main(){
    FILE *file = fopen("notas.txt", "W");
    if(file == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "NOME: JOAO NOTA: 8\n");
    fprintf(file, "NOME: MARIA NOTA: 9.5\n");
    fprintf(file, "NOME: CARLOS NOTA: 7\n");

    fcloese(file);
    printf("Dados gravados com sucesso no arquivo notas.txt.\n");
    return 0;
}




