#include <stdio.h>

int main()
{ 
    float salario = 1200.00;
    float conta1 = 200.00;
    float conta2 = 120.00;
    float multa1, multa2, totalDescontos, restante;

    multa1 = conta1 * 0.02;
    multa2 = conta2 * 0.02;

    totalDescontos = (conta1 + multa1) + (conta2 + multa2);

    restante = salario - totalDescontos;

    printf("Salario inicial: R$ %.2f\n", salario);
    printf("Conta 1 com multa: R$ %.2f\n", conta1 + multa1);
    printf("Conta 2 com multa: R$ %.2f\n", conta2 + multa2);
    printf("Total descontado: R$ %.2f\n", totalDescontos);
    printf("Restante do salario: R$ %.2f\n", restante);


    return 0;
}