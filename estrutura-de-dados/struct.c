#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro
{
    char nome[10];
    int idade;
    char endereco[20];
    float peso;
    float altura;

}; // a variável que armazenará os dados do struct pode ser declarada aqui

void imprimir (struct cadastro paciente){
    printf("Nome: %s\n", paciente.nome);
    printf("Idade: %d\n", paciente.idade);
    printf("Endereço: %s\n", paciente.endereco);
    printf("Peso: %.2f\n", paciente.peso);
    printf("Altura: %.2f\n", paciente.altura);

};


int main()
{

    // struct cadastro paciente; // ou podem ser declaradas novas variáveis para armazenar a struct, dessa forma

    //  inicializando a struct com valores
    struct cadastro paciente = {"João", 29, "Rua da Glória", 78.2, 1.73};

    //  criando ponteiro para o struct declarado e atribuindo o endereço de memória de paciente para esta variável struct ponteiro
    struct cadastro *ptrPaciente = &paciente;
    //  alterando um campo do struct

    paciente.peso = 80.1;    

    printf("Peso do paciente é: %.2f\n", paciente.peso);
    //  inicializando uma nova variável da struct cadastro
    struct cadastro aluno = {"Maria", 32, "Rua Varchar", 56.2, 1.60};

    printf("Altura do aluno = %.2f\n", aluno.altura); //  acessando diretamente o campo altura da struct cadastro
    //  saída de dados da struct paciente, atributo nome, usando ponteiro
    printf("Acessando nome do paciente através do ponteiro ptrPaciente, nome = %s\n", ptrPaciente->nome);
    //  alterando valores da struct usando ponteiros
    ptrPaciente->idade = 35;
    //  alterando o valor do nome na struct paciente, utilizando a funcao strcpy
    strcpy(ptrPaciente->nome, "Jaime");
    printf("Acessando nome do paciente através do ponteiro ptrPaciente, nome = %d\n", ptrPaciente->idade);
    printf("Acessando nome do paciente através do ponteiro ptrPaciente, nome = %s\n", ptrPaciente->nome);
    printf("\n\n");
    
    imprimir(paciente);

    printf("\n\n");
    return 0;
}