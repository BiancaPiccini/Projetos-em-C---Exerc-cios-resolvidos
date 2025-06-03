#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("Peso ideal para homem: %.2f kg\n", peso_ideal);
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Peso ideal para mulher: %.2f kg\n", peso_ideal);
    } else {
        printf("Sexo invalido. Use 'M' para homem ou 'F' para mulher.\n");
    }

    return 0;
}