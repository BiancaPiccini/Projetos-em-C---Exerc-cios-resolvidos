
#include <stdio.h>
        
int main()
{
   int num;

   printf("Digite um número inteiro: ");

   scanf("%d", &num);

    if (num > 10) {
    printf("O número %d é maior que 10.\n", num);
   } else if (num < 10) {
    printf("O número %d é menor que 10.\n", num);
   } else {
    printf("O número %d é igual à 10.\n", num);  
   }
   
    return 0;
}