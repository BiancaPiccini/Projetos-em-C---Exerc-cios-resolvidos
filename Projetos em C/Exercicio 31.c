#include <stdio.h>

int main() {
    char turno;

    printf("Em que turno voce estuda?\n");
    printf("Digite M para Matutino, V para Vespertino ou N para Noturno: ");
    scanf(" %c", &turno);

    if (turno == 'M' || turno == 'm') {
        printf("Bom Dia!\n");
    } else if (turno == 'V' || turno == 'v') {
        printf("Boa Tarde!\n");
    } else if (turno == 'N' || turno == 'n') {
        printf("Boa Noite!\n");
    } else {
        printf("Valor Invalido!\n");
    }

    return 0;
}