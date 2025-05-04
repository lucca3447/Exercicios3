#include <stdio.h>

int main() {
    float numero;         // variável para armazenar o número digitado
    int quantidade = 0;   // contador de números digitados
    float soma = 0.0;     // acumulador da soma dos números

    printf("Digite números reais maiores que zero (0 para parar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%f", &numero);

        if (numero == 0) {
            break; // sai do laço quando o número for zero
        }

        if (numero > 0) {
            soma += numero;      // soma os números
            quantidade++;        // conta quantos números válidos foram digitados
        } else {
            printf("Número inválido! Digite apenas números maiores que zero.\n");
        }
    }

    if (quantidade > 0) {
        float media = soma / quantidade;
        printf("\nForam digitados %d números.\n", quantidade);
        printf("A média dos números é: %.2f\n", media);
    } else {
        printf("\nNenhum número válido foi digitado.\n");
    }

    return 0;
}
