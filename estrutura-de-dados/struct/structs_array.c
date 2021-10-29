#include <stdio.h>
#include <stdlib.h>

// constante para range dos laços for
#define LEN 10 //  no #define não se usa ; no final
typedef struct 
{
    char nome[200];
    char disciplina[100];
    float nota;
} Aluno;

Aluno aluno_nota[10];

int main(){

    // INICIALIZANDO VARIÁVEIS DO STRUCT
    for (int a = 0; a < LEN; a++)
    {
        strcpy(aluno_nota[a].nome, " NULL");
        strcpy(aluno_nota[a].disciplina, " NULL ");
        aluno_nota[a].nota = 0.0;
    }
    // INICIANDO COLETA DE DADOS PARA POPULAR O STRUCT
    for (int i = 0; i < LEN; i++){
        printf(" Digite nome do aluno: ");
        scanf("%s%*c", &aluno_nota[i].nome);
        printf(" Digite a disciplina do aluno: ");
        scanf("%s%*c", &aluno_nota[i].disciplina);
        printf(" Digite o nota do aluno: ");
        scanf("%f%*c", &aluno_nota[i].nota);
        system("clear"); // limpa a tela do console
    }
    //  SAÍDA DE DADOS DO STRUCT
    printf("\n\n");
    
    printf("------------------------Alunos Cadastrados------------------------\n");
    int j = 0;
    while (j < LEN){
        
        printf("Cadastro[%d] - Nome do Aluno: %s\n", j, aluno_nota[j].nome);
        printf("Cadastro[%d] - Disciplina: %s\n", j, aluno_nota[j].disciplina);
        printf("Cadastro[%d] - Nota: %.2f\n", j, aluno_nota[j].nota);
        j++;
    }
    printf("------------------------------------------------------------------\n");

    printf("\n\n");
    return 0;
}