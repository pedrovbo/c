#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char nome[200];
    char disciplina[100];
    float nota;
} Aluno;

Aluno aluno_nota[10];

int main()
{

    char nome[200];
    int posicao = -1;
    int *ptr = &posicao;

    strcpy(aluno_nota[0].nome, "Jonas");
    printf("\n%s\n", aluno_nota[0].nome);

    printf(" \nDigite um nome: ");
    scanf("%s%*c", nome);

    for (int i = 0; i < 10; i++)
    {
        if (strcmp(nome, aluno_nota[i].nome) == 0)
        {
            printf("\n Registro encontrado! ");

            *ptr = i;
        }
    }
    printf("Variavel posicao = %d", posicao);
    posicao = *ptr;

    if (posicao == -1)
    {
        printf(" \n Registro não encontrado! ");
    }
    else
    {

        printf(" \n Registro Encontrado: ");
        printf(" \n O nome do aluno é: %s ", aluno_nota[posicao].nome);
        printf(" \n A disciplina do aluno é: %s ", aluno_nota[posicao].disciplina);
        printf(" \n A nota do aluno é: %.2f ", aluno_nota[posicao].nota);
    }
    return 0;
}