#include <stdio.h>

int main(){
    char nome_aluno [50];
    char nome_disciplina [30];
    float nota1, nota2, nota3, media_aluno;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome_aluno);

    printf("Digite o nome da disciplina: ");
    scanf("%s", nome_disciplina);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    media_aluno = (nota1 + nota2 + nota3) /3;

    printf("\n *** Dados inseridos***\n");
    printf("Nome do aluno: %s\n", nome_aluno);
    printf("Nome da disciplina: %s\n", nome_disciplina);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2); 
    printf("Nota 3: %.2f\n", nota3); 
    printf("Media do aluno eh: %2.f", media_aluno);

    return 0;
}