//Exemplo strcat - concatenar strings

#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[11]="Curso";

    strcat(str," de C");
    //Concatena a string " de C" com o conteudo da string str
    
    printf("str = %s", str);
    
    return 0;
}