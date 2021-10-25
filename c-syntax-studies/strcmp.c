//strcmp

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[]="abc";
    char str2[]="abd";
    int retorno;

    retorno = strcmp(str1, str2);
    /*
        0: conteudo das strings e igual
        < 0: conteudo da str1 e menor do que str2
        >0: conteudo da str1 e maior do que str2
    */

   printf("Retorno = %d \n", retorno);
   
    return 0;
}