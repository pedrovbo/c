/* multiplicacao */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int valor1, valor2, multiplicacao;

    printf("Digite o primeiro valor: \n");
    scanf("%d",&valor1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&valor2);

    multiplicacao = valor1 * valor2;

    printf("A multiplicacao dos valores %d * %d = %d \n", valor1, valor2, multiplicacao);

    system("pause");
    return 0;
}