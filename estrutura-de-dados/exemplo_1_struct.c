#include <stdio.h>
#include <ncurses.h>

int main()
{

    struct ficha_aluno
    {
        int matricula;
        char nome[50];
        char disciplina[30];
        float nota;
    };

    struct ficha_aluno aluno;

    printf("\n Ficha do Aluno\n");

    printf("Matrícula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Nome do aluno: ");
    scanf("%s", &aluno.nome);

    printf("Disciplina do aluno: ");
    scanf("%s", &aluno.disciplina);

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n Ficha do Aluno\n");

    printf("Matricula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome); // aqui não pega nome composto,
                                      //  pra isso deveremos usar fgets()
    printf("Disciplina: %s\n", aluno.disciplina);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;
}