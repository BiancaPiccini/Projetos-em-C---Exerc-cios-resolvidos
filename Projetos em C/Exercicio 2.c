
#include <stdio.h>

int main(){
    char nome[50];
    float nota1, nota2, nota3, nota4;

    printf("Digite o nome do aluno (sem espacos): ");
    scanf("%s", nome);

    printf("Digite a nota do primeiro bimestre: ");
    scanf("%f", &nota1);

    printf("Digite a nota do segundo bimestre: ");
    scanf("%f", &nota2);

    printf("Digite a nota do terceiro bimestre: ");
    scanf("%f", &nota3);

    printf("Digite a nota do quarto bimestre: ");
    scanf("%f", &nota4);

    printf("\n--- Resultado ---\n");
    printf("Nome: %s\n", nome);
    printf("Nota primeiro bimestre: %.2f\n", nota1);
    printf("Nota segundo bimestre: %.2f\n", nota2);
    printf("Nota terceiro bimestre: %.2f\n", nota3);
    printf("Nota quarto bimestre: %.2f\n", nota4);
    
    return 0;
}
