/* soma */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int valor1, valor2, soma;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&valor2);

    soma = valor1 + valor2;

    printf("A soma dos valores %d + %d = %d \n", valor1, valor2, soma);

    system("pause");
    return 0;
}