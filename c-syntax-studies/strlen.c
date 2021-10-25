//Tamanho de uma string - strlen

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[6]="Curso";
    // ou também - char str[]="Curso de Programacao C"; - aqui a string contera a quantidade de caracteres digitados 
    int tamanho;

    tamanho = strlen(str);

    printf("O tamanho da string %s vale: %d \n", str, tamanho);

    return 0;
}