
#include <stdio.h>
        
int main()
{
  char nome[20];

    printf("Qual o seu nome? ");
    scanf("%s", nome);
    
  int idade;
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if (idade <= 2) {
    printf("%s esta com %d anos e pela tabela eh considerado Bebe.\n", nome, idade);
   } else if (idade >= 3 && idade <= 11 ) {
    printf("%s esta com %d anos e pela tabela eh considerado Crianca.\n", nome, idade);
   } else if (idade >= 12 && idade <= 21 ) {
    printf("%s esta com %d anos e pela tabela eh considerado Jovem.\n", nome, idade);
   } else if (idade >= 22 && idade <= 64 ) {
    printf("%s esta com %d anos e pela tabela eh considerado Adulto.\n", nome, idade);
   } else if (idade >= 65 && idade <= 100 ) {
    printf("%s esta com %d anos e pela tabela eh considerado Idoso.\n", nome, idade);
   } else {
    printf("%s esta com %d anos e pela tabela eh considerado Muito velhinho, terror do INSS.\n", nome, idade);  
   }
   
    return 0;
}