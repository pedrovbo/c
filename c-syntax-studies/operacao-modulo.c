/* Resto da divisao - modulo */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int valor1, valor2, modulo;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&valor2);

    modulo = valor1 % valor2;

    printf("O modulo dos valores %d e %d = %d \n", valor1, valor2, modulo);

    system("pause");
    return 0;
}