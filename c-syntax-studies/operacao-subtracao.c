/* subtracao */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int valor1, valor2, diferenca;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&valor2);

    diferenca = valor1 - valor2;

    printf("A diferenca dos valores %d - %d = %d \n", valor1, valor2, diferenca);

    system("pause");
    return 0;
}