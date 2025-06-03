#include <stdio.h>

int main(){
    
    char nome_candidato [50];
    int titulo_eleitor = 0;
    int num_candidato = 0;
    
    printf ( "Digite o nome do candidato: ");
    scanf ("%s", nome_candidato);
    
    printf ( "Digite o titulo de eleitor: ");
    scanf ("%d", &titulo_eleitor);
    
    printf ( "Digite o numero do candidato: ");
    scanf ("%d", &num_candidato);
    
    printf ( "\n *** Dados inseridos***\n");
    printf("Nome do candidato: %s\n", nome_candidato);
    printf("Titulo de eleitor: %d\n", titulo_eleitor);
    printf("Numero do candidato: %d\n", num_candidato);
    
    return 0;
}
