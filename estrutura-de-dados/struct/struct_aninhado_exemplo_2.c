#include <stdio.h>
#include <stdlib.h>

struct cargo
{
    int cod;
    char descricao[30];
};

struct funcionario
{
    int cod;
    char nome[30];
    float salario;
    struct departamento // declaração de toda struct dentro de outra struct
    {
        int cod;
        char descricao[30];
    };

    struct cargo cargo; // definindo uma variavel struct cargo dentro da struct funcionario
};

struct funcionario Funcionario;

int main(void)
{
}