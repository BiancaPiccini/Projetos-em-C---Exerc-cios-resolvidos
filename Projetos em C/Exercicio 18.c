#include <stdio.h>

int main()
{    
    float valorHora, salarioBruto, salarioLiquido, totalDescontos;
    float descontoIR = 0.0, descontoSindicato, fgts, descontoInss;
    int horasTrabalhadas, porcentagemIr;

    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &valorHora);

    printf("Informe a quantidade de horas trabalhadas no mes: ");
    scanf("%d", &horasTrabalhadas);

    salarioBruto = valorHora * horasTrabalhadas;

    if (salarioBruto <= 900) {
        descontoIR = 0;
    } else if (salarioBruto <= 1500) {
        porcentagemIr = 5;
        descontoIR = salarioBruto * 0.05;
    } else if (salarioBruto <= 2500) {
        porcentagemIr = 10;
        descontoIR = salarioBruto * 0.10;
    } else {
        porcentagemIr = 20;
        descontoIR = salarioBruto * 0.20;
    }

    descontoSindicato = salarioBruto * 0.03;

    fgts = salarioBruto * 0.11;

    descontoInss = salarioBruto * 0.10;

    totalDescontos = descontoIR + descontoSindicato + descontoInss;

    salarioLiquido = salarioBruto - descontoIR - descontoSindicato;

    printf("\nFolha de Pagamento:\n");
    printf("Salario Bruto(%d * %.2f) : R$ %.2f\n", horasTrabalhadas, valorHora, salarioBruto);
    printf("(-) IR(%d%%)             : R$ %.2f\n", porcentagemIr, descontoIR);
    printf("(-) Sindicato            : R$ %.2f\n", descontoSindicato);
    printf("(-) INSS (10%%)          : R$ %.2f\n", descontoInss);
    printf("FGTS (11%%)              : R$ %.2f\n", fgts);
    printf("(-) Desconto Total       : R$ %.2f\n", totalDescontos);
    printf("Salario Liquido          : R$ %.2f\n", salarioLiquido);

    return 0;
}