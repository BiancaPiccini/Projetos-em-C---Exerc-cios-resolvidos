#include <stdio.h>

int main() {
    int qtdFrangos;
    float gastoTotal = 0;

    printf("Digite a quantidade de frangos: ");
    scanf("%d", &qtdFrangos);    

    gastoTotal = (qtdFrangos * 4.00) + ((qtdFrangos * 3.50) * 2);

    printf("\nGasto total da granja: %.2f.\n", gastoTotal);

    return 0;
}