#include <stdio.h>
#include <stdlib.h>
char frase[] = "Maria bonita";
void inverte(int pos);

int main(){
    int pos = 0;
    inverte(pos);
    printf("\n");
    return 0;
}
void inverte(int pos){
     if(frase[pos] == '\0'){
        return;
     }else{
        inverte(pos+1);
        printf("%c", frase[pos]);
     }
}



