// inicializando o vetor com um conjunto de valores

#include<stdio.h>

int main(void)
{
    //declarando e atribuindo valores ao vetor
    int i;

    //inicializando o vetor com listas de valores
    int vet[6] = {19, 19, 19, 19, 19, 19};

    //int vet[] = {19, 19, 19, 19, 19, 19};
    //int vet[6] = {0};
    // int vet[6] = { };


    //imprimindo os valores do vetor
    for(i = 0; i < 6; i++)
    {
        printf("vet[%d] = %d\n", i, vet[i]);
    }

    return 0;
}