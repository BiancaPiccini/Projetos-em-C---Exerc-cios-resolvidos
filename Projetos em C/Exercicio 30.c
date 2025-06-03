#include <stdio.h>

int main() {
    float peso, excesso = 0.0, multa = 0.0;

    printf("Digite o peso de peixes trazidos (em kg): ");
    scanf("%f", &peso);

    if (peso > 50.0) {
        excesso = peso - 50.0;
        multa = excesso * 4.0;
    }

    printf("\n--- Relatorio de Pesca ---\n");
    printf("Peso informado: %.2f kg\n", peso);
    printf("Excesso de peso: %.2f kg\n", excesso);
    printf("Multa a pagar: R$ %.2f\n", multa);

    return 0;
}
