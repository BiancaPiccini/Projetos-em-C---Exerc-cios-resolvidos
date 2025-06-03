#include <stdio.h>

int main() {
    int qtdSanduiche;
    float queijo = 0;
    float presunto = 0;
    float hamburguer = 0;

    printf("Digite a quantidade de sanduiches: ");
    scanf("%d", &qtdSanduiche);    

    queijo = ((qtdSanduiche * 2) * 50) / 1000.0;
    presunto = (qtdSanduiche * 50) / 1000.0;
    hamburguer = (qtdSanduiche * 100) / 1000.0;

    printf("\nQuantidades (em quilos) de queijo: %.3f kg.", queijo);
    printf("\nQuantidades (em quilos) de presuto: %.3f kg.", presunto);
    printf("\nQuantidades (em quilos) de hamburguer: %.3f kg.", hamburguer);

    return 0;
}