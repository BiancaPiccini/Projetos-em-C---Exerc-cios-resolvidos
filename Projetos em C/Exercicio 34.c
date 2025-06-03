#include <stdio.h>

int main() {
    float litros, precoLitro, total, desconto, valorFinal;
    char tipo;

    printf("Digite o tipo de combustivel (A - Alcool, G - Gasolina): ");
    scanf(" %c", &tipo);

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    if (tipo == 'A' || tipo == 'a') {
        precoLitro = 1.90;
        if (litros <= 20)
            desconto = 0.03;
        else
            desconto = 0.05;
    } else if (tipo == 'G' || tipo == 'g') {
        precoLitro = 2.50;
        if (litros <= 20)
            desconto = 0.04;
        else
            desconto = 0.06;
    } else {
        printf("Tipo de combustivel invalido.\n");
        return 1;
    }

    total = litros * precoLitro;
    valorFinal = total - (total * desconto);

    printf("\n--- NOTA ---\n");
    printf("Litros vendidos: %.2f\n", litros);
    printf("Preco por litro: R$ %.2f\n", precoLitro);
    printf("Total sem desconto: R$ %.2f\n", total);
    printf("Desconto: %.2f%%\n", desconto * 100);
    printf("Valor a pagar: R$ %.2f\n", valorFinal);

    return 0;
}