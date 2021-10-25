//if else encadeados

#include<stdio.h>

int main(void)
{
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o primeiro numero: ");
    scanf("%d", &n2);

    if(n1 == n2)
    {
        printf("Os numeros sao iguais\n");
        printf("Por favor digite numeros diferentes! \n");
    }
    else
        if(n1 > n2)
            printf("O maior valor e = %d", n1);
        else
            printf("O maior valor e = %d", n2);    
}