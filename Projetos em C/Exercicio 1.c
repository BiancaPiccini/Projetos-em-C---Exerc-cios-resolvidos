
#include <stdio.h>

int main(){
    char nome[50];
    int idade;
    char sexo;
    char endereco[100];
    char telefone[20];

    printf("Digite seu nome (sem espacos): ");
    scanf("%s", nome);  

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu sexo (M/F): ");
    scanf(" %c", &sexo); 

    printf("Digite seu endereco (sem espacos): ");
    scanf("%s", endereco);

    printf("Digite seu telefone (sem espacos): ");
    scanf("%s", telefone);

    printf("\n *** Dados Inseridos ***\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Endereco: %s\n", endereco);
    printf("Telefone: %s\n", telefone);   

    return 0;
}
