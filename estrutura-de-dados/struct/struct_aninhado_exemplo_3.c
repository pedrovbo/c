#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    int codigo;
    char nome[200];
    struct
    {
        int dia;
        int mes;
        int ano;
    };

} Aluno;

Aluno aluno;

int main(void)
{
    setlocale(LC_ALL, "portuguese"); // implementar a localização do programa
    /*INICIALIZANDO VARIÁVEIS DA STRUCT*/
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.dia = 0;
    aluno.mes = 0;
    aluno.ano = 0;
    /*FIM DA INICIALIZAÇÃO DE VARIÁVEIS DA STRUCT*/

    /*MOSTRANDO A SITUAÇÃO DA STRUCT SEM A ENTRADA DE DADOS*/
    printf(" \n O código do aluno é: %d ", aluno.codigo);
    printf(" \n O nome do aluno é: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno é: %d / %d / %d ", aluno.dia, aluno.mes, aluno.ano);
    printf(" \n \n");
    /*FIM*/

    /*INÍCIO DA ENTRADA DE DADOS*/
    printf(" Digite o código do aluno: ");
    scanf("%d%*c", &aluno.codigo);
    printf(" Digite o nome do aluno: ");
    scanf("%s%*c", &aluno.nome); // TODO: não está pegando nome composto, quando digita o segundo nome o programa finaliza.
    printf(" Digite o dia do nascimento do aluno: ");
    scanf("%d%*c", &aluno.dia);
    printf(" Digite o mês do nascimento do aluno: ");
    scanf("%d%*c", &aluno.mes);
    printf(" Digite o ano do nascimento do aluno: ");
    scanf("%d%*c", &aluno.ano);
    /*SAÍDA DE DADOS DO CADASTRO*/
    printf(" \n O código do aluno é: %d ", aluno.codigo);
    printf(" \n O nome do aluno é: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno é: %d / %d / %d ", aluno.dia, aluno.mes, aluno.ano);
    printf(" \n \n");

    return (0);
}
