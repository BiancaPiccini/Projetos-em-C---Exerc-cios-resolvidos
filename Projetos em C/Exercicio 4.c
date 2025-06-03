#include <stdio.h>

int main(){

    char nome_carro [50];
    char placa_carro [50];
    char modelo_carro [50];
    char cor_carro [50];
    
    printf ( "Digite o nome do carro: ");
    scanf ("%s", nome_carro);
    
    printf ( "Digite placa do carro: ");
    scanf ("%s", placa_carro);
    
    printf ( "Digite o modelo do carro: ");
    scanf ("%s", modelo_carro);

    printf ( "Digite a cor do carro: ");
    scanf ("%s", cor_carro);
    
    printf ( "\n *** Dados inseridos***\n");
    printf("Nome do carro: %s\n", nome_carro);
    printf("Placa do carro: %s\n", placa_carro);
    printf("Modelo do carro: %s\n", modelo_carro);
    printf("Cor do carro: %s\n", cor_carro);    
    
    return 0;
}