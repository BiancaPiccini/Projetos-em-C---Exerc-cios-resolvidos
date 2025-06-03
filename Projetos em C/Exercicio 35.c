#include <stdio.h>

int main() {
    int tipo;
    float kg, precoKg = 0, total, desconto = 0;
    char cartao;

    printf("Tipos de carne:\n");
    printf("1 - File Duplo\n");
    printf("2 - Alcatra\n");
    printf("3 - Picanha\n");

    printf("Digite o tipo de carne (1, 2 ou 3): ");
    scanf("%d", &tipo);

    printf("Digite a quantidade (em Kg): ");
    scanf("%f", &kg);

    printf("Pagamento com Cartao Tabajara? (s/n): ");
    scanf(" %c", &cartao);  

    if (tipo == 1) {
        if (kg <= 5)
            precoKg = 34.90;
        else
            precoKg = 35.80;
    } else if (tipo == 2) {
        if (kg <= 5)
            precoKg = 44.90;
        else
            precoKg = 46.80;
    } else if (tipo == 3) {
        if (kg <= 5)
            precoKg = 66.90;
        else
            precoKg = 67.80;
    }

    total = kg * precoKg;

    if (cartao == 's' || cartao == 'S') {
        desconto = total * 0.05;
    }

    printf("\n*** CUPOM FISCAL ***\n");
    printf("Tipo de carne: %d\n", tipo);
    printf("Quantidade: %.2f Kg\n", kg);
    printf("Preco por Kg: R$ %.2f\n", precoKg);
    printf("Total: R$ %.2f\n", total);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", total - desconto);

    return 0;
}