//struct

#include<stdio.h>

int main(void)
{
    int numero;
    float nota;
    char nome[40];

    struct ficha_aluno //tipo de dado
    {
        char nome[40];
        int numero;
        float nota;
    }; //definição da struct

    struct ficha_aluno aluno; //declaracao da variavel aluno que e do tipo struct ficha_aluno

    printf("\n-------------Cadastro de aluno-------------\n\n\n");

    printf("Nome do aluno.......: ");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o numero do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n-------------Lendo os dados da struct-------------\n\n");
    printf("Nome..............: %s", aluno.nome);
    printf("Numero............: %d", aluno.numero);
    printf("\nNota..............: %.2f", aluno.nota);


    return 0;
}
