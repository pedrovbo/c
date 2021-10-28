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

    
    
    return 0;
}