#include <stdio.h>

int main(){
    float altura, base, area;   

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a base: ");
    scanf("%f", &base);

    area = base * altura;

    printf("Area do retangulo: %.2f", area);

    return 0;
}