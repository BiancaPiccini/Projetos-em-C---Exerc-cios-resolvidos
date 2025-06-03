#include <stdio.h>

int main() {
    int qtdCamisetaPequena, qtdCamisetaMedia, qtdCamisetaGrande;
    float totalDeCamisetas, totalPequenas, totalMedias, totalGrandes;

    printf("Digite a quantidade de camisetas pequenas: ");
    scanf("%d", &qtdCamisetaPequena); 

    printf("Digite a quantidade de camisetas medias: ");
    scanf("%d", &qtdCamisetaMedia); 

    printf("Digite a quantidade de camisetas grandes: ");
    scanf("%d", &qtdCamisetaGrande); 

    totalPequenas = qtdCamisetaPequena * 10.0;
    totalMedias = qtdCamisetaMedia * 12.0;
    totalGrandes = qtdCamisetaGrande * 15.0;

    totalDeCamisetas = totalPequenas + totalMedias + totalGrandes;

    printf("Valor total da compra: R$%.2f", totalDeCamisetas);

    return 0;
}