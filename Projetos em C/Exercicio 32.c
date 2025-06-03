#include <stdio.h>

int main() {
    int valor, n100, n50, n10, n5, n1;

    printf("Digite o valor do saque (de 10 a 600): Notas disponiveis: 1, 5, 10, 50, 100:\n ");
    scanf("%d", &valor);

    if (valor < 10 || valor > 600) {
        printf("Valor invalido! O saque deve ser entre 10 e 600 reais.\n");
        return 1;
    }

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n10 = valor / 10;
    valor = valor % 10;

    n5 = valor / 5;
    valor = valor % 5;

    n1 = valor;

    printf("\nNotas fornecidas:\n");
    if (n100 > 0) printf("%d nota(s) de 100\n", n100);
    if (n50 > 0)  printf("%d nota(s) de 50\n", n50);
    if (n10 > 0)  printf("%d nota(s) de 10\n", n10);
    if (n5 > 0)   printf("%d nota(s) de 5\n", n5);
    if (n1 > 0)   printf("%d nota(s) de 1\n", n1);

    return 0;
}