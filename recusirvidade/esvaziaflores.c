#include <stdio.h>

void esvaziaflores(int flores){
     if(flores > 0){
       printf("Esvaziando a %d flor\n", flores);
       esvaziaflores(flores - 1);
     }
}
int main() {
    int flores = 4;
    esvaziaflores(flores);
    return 0;
}