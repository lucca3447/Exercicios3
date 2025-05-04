#include <stdio.h>

int main(){

    int senha;
    int psenha = 1234;

    while(1){

        printf("\nDigite a senha:\n");
        scanf("%d", &senha);
        
        if(senha==psenha){
            printf("\nBem vindo!\n");
            break;
        }else{
            printf("\n\aSenha incorreta tente novamente\n");
        }
    }    



return 0;
}