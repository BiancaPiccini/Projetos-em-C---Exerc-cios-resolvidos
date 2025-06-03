#include <stdio.h>

int main() {
    int inteiro1, inteiro2;
    float real;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &inteiro1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &inteiro2);

    printf("Digite um numero real: ");
    scanf("%f", &real);

    float resultado1 = (2 * inteiro1) * (inteiro2 / 2.0);
    float resultado2 = (3 * inteiro1) + real;
    float resultado3 = real * real * real;

    printf("Produto do dobro do primeiro com metade do segundo: %.2f\n", resultado1);
    printf("Soma do triplo do primeiro com o terceiro: %.2f\n", resultado2);
    printf("Terceiro numero elevado ao cubo: %.2f\n", resultado3);

    return 0;
}