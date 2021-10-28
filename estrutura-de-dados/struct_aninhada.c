#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>


int main(){
    
    typedef struct {
        char nome[15];
        int idade;
        char cpf[11];

        struct 
        {
            char endereco[25];
            char cep[10];
        };
        

    } cadastro;

    cadastro cliente;

    //  para acessar os membros da struct:
    /*
    Para atribuição de valores:
    <nome_da_estrutura>.<nome_do_membro_da_estrutura>
    cliente.nome
    cliente.idade
    cliente.cpf
    cliente.endereco
    cliente.cep
    

    Para leitura do teclado:
    &<nome_da_estrutura>.<nome_do_membro_da_estrutura>
    &cliente.nome
    &cliente.idade
    &cliente.cpf
    &cliente.endereco
    &cliente.cep

    Para impressão:
    <nome_da_estrutura>.<nome_do_membro_da_estrutura>
    cliente.nome
    cliente.idade
    cliente.cpf
    cliente.endereco
    cliente.cep
    */
    
    return 0;
}