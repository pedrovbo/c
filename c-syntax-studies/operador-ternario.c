//operador ternario

#include<stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    numero >= 0 ? printf("Numero positivo.\n") : printf("Numero negativo.\n");

    printf("O novo valor de numero e: %d", numero);

    return 0;
}