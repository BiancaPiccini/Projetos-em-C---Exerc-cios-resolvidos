#include <stdio.h>

int main() {
    char sexo;

    printf("Digite o sexo (F ou M): ");
    scanf(" %c", &sexo); 
    
    if (sexo == 'F' || sexo == 'f') {
        printf("Feminino\n");
    } else if (sexo == 'M' || sexo == 'm') {
        printf("Masculino\n");
    } else {
        printf("Sexo Invalido\n");
    }

    return 0;
}