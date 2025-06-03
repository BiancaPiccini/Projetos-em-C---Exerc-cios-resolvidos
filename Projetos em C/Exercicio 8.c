
#include <stdio.h>

int main()
{
    float distancia, consumo, preco_combustivel, custo_total;
    
    printf("Digite a distancia da viagem em km: ");
    scanf("%f", &distancia);
    
    printf("Digite o consumo medio do veículo em km/l: ");
    scanf("%f", &consumo);
    
    printf("Digite o preço do combustivel por litro (R$): ");
    scanf("%f", &preco_combustivel);
    
    custo_total = (distancia / consumo) * preco_combustivel;
    
    printf("O custo estimado da viagem eh: R$ %.2f\n", custo_total);

    return 0;
}