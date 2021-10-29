#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;
/*a strutc Data tem de ser declarada primeiro para que possa ser usada dentro da struct Aluno*/
typedef struct
{
    int codigo;
    char nome[200];
    Data datNasc;
} Aluno;
Aluno aluno;

int main()
{
    setlocale(LC_ALL, "portuguese");
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.datNasc.dia = 0; // para acessar os membros da struct aninhada datNasc, neste caso, temos de acessar a struct aluno e depois a struct datNasc
    aluno.datNasc.mes = 0;
    aluno.datNasc.ano = 0;
    printf(" \n O código do aluno é: %d ", aluno.codigo);
    printf(" \n O nome do aluno é: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno é: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf(" \n \n");
    printf(" Digite o código do aluno: ");
    scanf("%d%*c", &aluno.codigo);
    printf(" Digite o nome do aluno: ");
    scanf("%s%*c", &aluno.nome);
    printf(" Digite o dia do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.dia);
    printf(" Digite o mês do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.mes);
    printf(" Digite o ano do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.ano);
    printf(" \n O código do aluno é: %d ", aluno.codigo);
    printf(" \n O nome do aluno é: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno é: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf(" \n \n");
    return (0);
}