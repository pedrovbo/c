/* divisao - obs.: se a divisao der um valor quebrado, o resultado sera zero, pois estamos trabalhando com variaveis do tipo inteiro*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int valor1, valor2, divisao;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&valor2);

    divisao = valor1 / valor2;

    printf("A divisao dos valores %d / %d = %d \n", valor1, valor2, divisao);

    system("pause");
    return 0;
}