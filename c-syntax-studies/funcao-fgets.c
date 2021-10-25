//funcao fgets

#include<stdio.h>

int main(void)
{
    char nome[11];

    printf("Digite seu nome: ");
    fgets(nome, 11, stdin); //Leitura da string - nao para ao encontrar um espaco em branco

    printf("O nome armazenado foi: %s", nome);
    return 0;        
}