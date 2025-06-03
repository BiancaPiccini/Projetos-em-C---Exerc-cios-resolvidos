#include <stdio.h>

int main()
{
    int numero, i;
    int dados = 3;
    int maiorNumero = 0;
    int menorNumero = 0;

    for (i = 0; i < dados; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (maiorNumero == 0 && menorNumero == 0) {
            maiorNumero = numero;
            menorNumero = numero;
        }
        
        if (numero > maiorNumero) {
            maiorNumero = numero;
        }

        if (numero > menorNumero) {
            maiorNumero = numero;
        }
    }

    printf("\nMaior numero: %d\n", maiorNumero);
    printf("\nMenor numero: %d\n", menorNumero);    
    
    return 0;
}