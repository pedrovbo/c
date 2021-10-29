#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[200];
    char disciplina[100];
    float nota;
} Aluno;

Aluno aluno_nota[10];

int main(){

    for (int i = 0; i < 10; i++){

        printf("Digite o nome do aluno: ");
        fgets(aluno_nota[i].nome, 200, stdin);        
    }

    printf("\n\n");
    int j = 0;
    while (j < 10){
        printf("Cadastro[%d] - Nome do Aluno: %s\n", j, aluno_nota[j].nome);
        j++;
    }


    printf("\n\n");
    return 0;
}