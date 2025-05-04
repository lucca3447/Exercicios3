#include <stdio.h>
#include <stdlib.h>


int main(){

    int esc;
    
    printf("Insira 1 ou 0");
    scanf("%d", &esc);

    while(esc != 1 && esc != 0){

        printf("\a Erro! Por favor digite 1 ou 0 ");
        scanf("%d", &esc);
    }
    
    if(esc== 1 || esc==0){
        printf("\nObrigado!\n");
    }
}
