#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, tam, *vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL)); //semente geradora da função rand()

    vet = malloc(tam * sizeof(int));
    if(vet){
      printf("Memoria alocada com sucesso!\n");
      for(i = 0; i < tam; i++)
      //*(vet + i) = rand() % 100;
      vet[i] = rand() % 100;

      for(i = 0; i < tam; i++)
          //printf("%d", *(vet + i));
          printf("%d", vet[i]);
      printf("\n");
    }
    else{
        printf("Erro ao alocar memoria");
    }
    return 0;

    //vet[i] outra maneira de representar *(vet + i), 
    //uma forma mais compactada para a aritmetica de ponteiros
}