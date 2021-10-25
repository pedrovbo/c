// strncmp - compara apenas uma parte da string

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[15]="Curso de C";
    char str2[15]="Curso de Java";
    int retorno;
    
    retorno = strncmp(str1, str2, 5);
    //strncmp(string, string, quantidade de caracteres a serem comparados);

    printf("Retorno = %d", retorno);
    
    return 0;
}