#include <stdio.h>

int main() {
    float peso, valor;

    printf("Digite o peso do prato (em quilos): ");
    scanf("%f", &peso);

    valor = peso * 59.00;

    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}