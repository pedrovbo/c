//inicializar vetor/array - loop para preencher o vetor

#include<stdio.h>
int main(void)
{
    //declarando e atribuindo valores ao vetor
    int i, vetor[20];

    for (i = 0; i < 20; i++)
    {
    vetor[i] = 0;
    }

    for (i = 0; i < 20; i++)
    {
        printf("Vetor [%d] = %d\n", i, vetor[i]);
    }
    
    /*imprimindo os valores do vetor
    //for(i = 0; i <= 5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }*/

    return 0;
}