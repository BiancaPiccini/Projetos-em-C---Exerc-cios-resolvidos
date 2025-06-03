#include <stdio.h>

int main() {
    int dia, mes, diasPassados;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    diasPassados = (mes - 1) * 30 + dia;

    printf("Dias que passaram desde o inicio do ano: %d dias\n", diasPassados);

    return 0;
} 