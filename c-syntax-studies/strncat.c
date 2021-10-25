//strncat - concatenar determinando a quantidade de caracteres

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str1[21]="Curso";
    char str2[18]=" de programacao C";

    strncat(str1, str2, 15);
    //concatena a str1 com 15 posicoes da str2
    printf("str1 = %s \n", str1);
    //sera exibido curso de programacao
    return 0;    
}