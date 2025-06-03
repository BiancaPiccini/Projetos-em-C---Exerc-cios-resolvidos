#include <stdio.h>

int main(){
    float altura, base, area;   

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a base: ");
    scanf("%f", &base);

    area = (base * altura)/2;

    printf("Area do triangulo: %.2f", area);

    return 0;
}