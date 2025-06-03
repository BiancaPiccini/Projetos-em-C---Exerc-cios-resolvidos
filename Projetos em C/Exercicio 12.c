#include <stdio.h>

int main()
{
  int numero;
   
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf(" O numero %d eh: ", numero);
    if (numero >= 0) {
        printf("positivo.\n");
    } else {
        printf("negativo.\n");
    }
    return 0;
}