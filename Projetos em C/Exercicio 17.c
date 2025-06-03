#include <stdio.h>

int main()
{
    int percentual;
    float salarioColaborador, diferencaSalarial, novoSalario;

    printf("Digite o salario do colaborador: ");
    scanf("%f", &salarioColaborador);

    if (salarioColaborador <= 280) {
        percentual = 20;
        diferencaSalarial = (salarioColaborador * percentual) / 100; 
        novoSalario = salarioColaborador + diferencaSalarial;
    }

    if (salarioColaborador > 280 && salarioColaborador <= 700) {
        percentual = 15;
        diferencaSalarial = (salarioColaborador * percentual) / 100; 
        novoSalario = salarioColaborador + diferencaSalarial;
    }

    if (salarioColaborador > 700 && salarioColaborador <= 1500) {
        percentual = 10;
        diferencaSalarial = (salarioColaborador * percentual) / 100; 
        novoSalario = salarioColaborador + diferencaSalarial;
    }

    if (salarioColaborador > 1500) {
        percentual = 5;
        diferencaSalarial = (salarioColaborador * percentual) / 100; 
        novoSalario = salarioColaborador + diferencaSalarial;
    }

    printf("\n\nSalario antes do reajuste: %.2f\n", salarioColaborador);
    printf("Percentual de aumento aplicado: %d\n", percentual); 
    printf("Valor do aumento: %.2f\n", diferencaSalarial); 
    printf("Novo salario: %.2f\n", novoSalario); 
    
    return 0;
}