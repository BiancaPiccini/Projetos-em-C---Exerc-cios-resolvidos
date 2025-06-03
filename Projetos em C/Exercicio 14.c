
#include <stdio.h>

int main()
{
    int numeroConta;
    float saldo, debito, credito, saldoAtual;

    
    printf("Digite o numero da conta: ");
    scanf("%d", &numeroConta);

    printf("Digite o saldo: ");
    scanf("%f", &saldo);

    printf("Digite o debito: ");
    scanf("%f", &debito);

    printf("Digite o credito: ");
    scanf("%f", &credito);

  
    saldoAtual = saldo - debito + credito;

    
    printf("\nConta Bancaria: %d\n", numeroConta);
    printf("Saldo atual: R$ %.2f\n", saldoAtual);

    if (saldoAtual >= 0) {
        printf("Seu saldo esta positivo.\n");
    } else {
        printf("Seu saldo esta negativo.\n");
    }
    return 0;
}
