#include <stdio.h>

int main(){
    const char *nome_arquivo = "compra.txt";
    FILE *arquivo = fopen(nome_arquivo, "r");
    if(arquivo == NULL){
        printf("Erro na abertura do arquivo\n");
        return 1;
    }
    
    char nome[50];
    int quantidade;
    float preco, total_compra = 0;

    printf("\n\n--------Produtos comprados:---------\n");
    printf("Produto\t\tPreco\t\tQuantidade\tTotal_Item\n");
    printf("---------------------------------------\n");

    while(fscanf(arquivo, "%s %d %f" , nome, &quantidade, &preco) != EOF){
        float total_intem = preco * quantidade;
        total_compra += total_intem;
        printf("%-16s %5.2f %16d %16.2f\n", nome, preco, quantidade, total_intem);
    }
    fclose(arquivo);
    printf("\n\nTotal da compra: %.2f\n\n", total_compra);
    return 0;
}

















