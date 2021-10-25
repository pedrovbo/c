//ponteiros

#include<stdio.h>
#include<conio.h>

int main(void)
{
    //valor e a variavel que
    //sera apontada pelo ponteiro
    int valor = 27;    

    //declaracao da variavel ponteiro
    int *ptr;

    //atribuindo o endereço da variavel valor ao ponteiro
    ptr = &valor;

    printf("Utilizando ponteiros\n\n");
    printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endereco da variavel valor: %x \n", &valor);
    printf("Conteudo da variavel ponteiro ptr: %x\n", ptr);

    getch();
    return 0;
}