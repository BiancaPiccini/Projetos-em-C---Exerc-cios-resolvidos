#include <stdio.h>

int main() {
    int codSanduiche, codBebida;
    float total = 0;

    printf("Digite o codigo do sanduiche: ");
    scanf("%d", &codSanduiche);

    printf("Digite o codigo da bebida: ");
    scanf("%d", &codBebida);

    if (codSanduiche == 100) total += 11.20;
    if (codSanduiche == 101) total += 8.30;
    if (codSanduiche == 102) total += 11.50;
    if (codSanduiche == 103) total += 16.20;

   
    if (codBebida == 201) total += 6.00;
    if (codBebida == 202) total += 7.50;
    if (codBebida == 203) total += 4.70;

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}