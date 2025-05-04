#include <stdio.h>

int main() {
    float n;              // número digitado
    int q = 0;            // contador
    float soma = 0.0;     // soma dos números

    printf("Digite numeros reais maiores que 0\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%f", &n);

        if (n == 0) {
            break;
        }

        if (n > 0) {
            soma += n;
            q++;
        } else {
            printf("Numero invalido! Digite numeros maiores que 0!\n");
        }
    }

    if (q > 0) {
        float m = soma / q;
        printf("Foram digitados %d numeros.\n", q);     // ❗ CORREÇÃO: %d para inteiro
        printf("A media dos numeros eh %.2f\n", m);     // %.2f para mostrar 2 casas decimais
    } else {
        printf("Nenhum numero valido foi digitado.\n");
    }

    return 0;
}
