#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float saldo = 0;
    float saque;
    float deposito;
    
    do{
    
    printf("\n\n----------Exercicio 4----------\n\n");
    printf("Escolha uma opção: \n(1)Consultar saldo\n(2)Saque\n(3)Deposito\n(4)Sair\n");
    scanf("%d", &opcao);
    
    
    switch (opcao)
    {
    case 1:
        printf("O saldo atual eh R$ %.2f", saldo);
        break;
        
    case 2:
        printf("Quanto deseja sacar?");
        scanf("%f", &saque);
        saldo -= saque;
        break;
        
    case 3:
        printf("Quanto deseja depositar?");
        scanf("%f", &deposito);
        saldo += deposito;
        break;
        
    case 4:
        printf("Voce escolheu sair");
        exit(0);

    default:
        printf("Por favor digite uma opcao valida!");
        break;
    }
   
    }while(1);
}
   
