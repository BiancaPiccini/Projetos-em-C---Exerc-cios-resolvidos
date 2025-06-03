#include <stdio.h>

int main() {
    int qtdPaes, qtdBroas;
    float total, poupanca;

    printf("Quantidade de paes vendidos: ");
    scanf("%d", &qtdPaes);

    printf("Quantidade de broas vendidas: ");
    scanf("%d", &qtdBroas);


    total = (qtdPaes * 1.00) + (qtdBroas * 3.50);

    poupanca = total * 0.10;

    printf("Total vendido de paes e broas: R$ %.2f\n", total);
    printf("Valor a depositar na conta poupanca (10%%): R$ %.2f\n", poupanca);

    return 0;
}