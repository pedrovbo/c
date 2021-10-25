// copiar dados de uma string para outra + comando strcpy

#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome1[15];
    char nome2[15];

    printf("Digite seu nome: ");
    scanf("%s", nome1);

    printf("Nome1 = %s \n", nome1);

    //strcpy(nome, "Fulano de tal");// - primeiro modo
    strcpy(nome2,nome1); //segundo modo
    //strcpy(string_destino, string_origem);
    
    printf("Nome2 = %s \n", nome2);

    return 0;
}