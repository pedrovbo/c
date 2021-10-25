//string.h copiando uma quantidade de caracteres - strncpy

#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome1[15];
    char nome2[15];

    printf("Digite seu nome: ");
    scanf("%s", nome1);

    printf("Nome1 = %s \n", nome1);

    strncpy(nome2, nome1, 3);
    //strncpy(string_destino, string_origem, quantidade de caracteres copiados)

    printf("Nome2 = %s \n", nome2);

    return 0;
}