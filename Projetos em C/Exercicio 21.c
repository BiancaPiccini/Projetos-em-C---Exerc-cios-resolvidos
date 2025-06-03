#include <stdio.h>

int main() {
    float salario, valorVendas, comissao;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite o valor total de vendas: ");
    scanf("%f", &valorVendas);

    comissao = (valorVendas * 4) / 100;
    salario = comissao + salario;

    printf("\nComissao: %.2f.\n", comissao);
    printf("Salario final: %.2f.\n", salario);

    return 0;
}