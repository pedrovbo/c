//loop infinito while

#include<stdio.h>

int main(void)
{
    int n, i;
    while(1) //loop infinito
    {
        printf("Ciclo infinito com while \n");

        printf("%d - Digite um numero inteiro: ");
        scanf("%d", &n);

        if(n == 7)
        {
            printf("Saindo do ciclo while \n");
            break; //quebra o ciclo while fazendo com que saia da repeticao
        }
    }
    printf("Fim do programa \n");
    return 0;
}