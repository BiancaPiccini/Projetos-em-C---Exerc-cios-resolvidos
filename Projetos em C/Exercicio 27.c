
#include <stdio.h>

int main(){
    
    int matricula, status;
    char sexo;
    float altura;
    float percentual_masculino_bom = 0.0;
    int cont_feminino_altura = 0;
    int total_masculino = 0;
    int masculino_status_bom = 0;
    int i;

    for (int i = 0; i <= 2; i++) {
        printf("Digite os dados do aluno %d:\n", i + 1);
        
        printf("Matricula: ");
        scanf("%d", &matricula);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo); 
        
        printf("Altura (em cm): ");
        scanf("%f", &altura);

        printf("Status fisico (1 - bom, 2 - regular, 3 - ruim): ");
        scanf("%d", &status);

        if (sexo == 'F' || sexo == 'f') {
            if (altura > 170.0) {
                cont_feminino_altura++;
            }
        }

       
        if (sexo == 'M' || sexo == 'm') {
            total_masculino++;

            if (status == 1) {
                masculino_status_bom++;
            }
        }

        printf("\n"); 
    }

    if (total_masculino > 0) {
        percentual_masculino_bom = (masculino_status_bom * 100.0) / total_masculino;
    }

    printf("Quantidade de alunas com altura superior a 170 cm: %d\n", cont_feminino_altura);
    printf("Percentual de alunos do sexo masculino com status fisico bom: %.2f%%\n", percentual_masculino_bom);
    
    
    return 0;
}

    

