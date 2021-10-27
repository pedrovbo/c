#include <stdio.h>
#include <stdlib.h>

int main()
{

    struct cadastro
    {
        char nome[10];
        int idade;
        char endereco[20];
        float peso;
        float altura;

    }; // a variável que armazenará os dados do struct pode ser declarada aqui

    // struct cadastro paciente; // ou podem ser declaradas novas variáveis para armazenar a struct, dessa forma

    //  inicializando a struct com valores
    struct cadastro paciente = {"João", 29, "Rua da Glória", 78.2, 1.73};

    //  alterando um campo do struct

    paciente.peso = 80.1;

    printf("Peso do paciente é: %.2f\n\n", paciente.peso);

    //  inicializando uma nova variável da struct cadastro
    struct cadastro aluno = {"Maria", 32, "Rua Varchar", 56.2, 1.60};

    printf("Altura do aluno = %.2f", aluno.altura);
    printf("\n\n");
    return 0;
}