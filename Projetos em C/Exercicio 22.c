#include <stdio.h>

int main() {
    float valorProduto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);    

    valorProduto -= (valorProduto * 10) / 100;

    printf("\nValor do produto com desconto: %.2f.\n", valorProduto);

    return 0;
}