//comando de repeticao for

#include<stdio.h>

int main(void)
{
    int contador; //variavel de controle do loop

    printf("For incrementando: ");
    for(contador = 1; contador <= 10; contador++)
    {
        printf("%d ", contador);
    }

    printf("For decrementando: ");
    for(contador = 10; contador > 0; contador --)
    {
        printf("%d ", contador);
    }
    return 0;    
}