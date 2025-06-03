#include <stdio.h>

int main() {
    float valorProduto, vendaProduto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto); 

    if (valorProduto < 50.0) {
        vendaProduto = ((valorProduto * 45) / 100) + valorProduto;
    } else {
        vendaProduto = ((valorProduto * 30) / 100) + valorProduto;           
    }

    printf("Valor total da compra: R$%.2f", vendaProduto);

    return 0;
}