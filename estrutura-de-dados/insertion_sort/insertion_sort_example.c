#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10

void insertion(int *v);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_teste[TAMANHO] = {9, 8, 6, 3, 1, 2, 4, 5, 99, 291};
    
    printf("\nVetor antes do Insertion Sort\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%4d", vetor_teste[i]);
    }

    insertion(vetor_teste);

    printf("\nVetor depois do Insertion Sort\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%4d", vetor_teste[i]);
    }

}

void insertion (int *v)
{
    int i, j, aux;
    for (i=0; i< TAMANHO-1; i++)
    {
        j=i+1;
        while (v[j-1]>v[j] && j > 0)
        {
            aux = v[j-1];
            v[j-1]=v[j];
            v[j]=aux;
            j--;
        }
    }
}