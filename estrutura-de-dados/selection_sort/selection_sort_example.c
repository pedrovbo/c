#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10

void selecao(int *v);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vetor_teste[TAMANHO] = {9, 8, 6, 3, 1, 2, 4, 5, 99, 291};
    
    printf("\nVetor antes do Selection Sort\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%4d", vetor_teste[i]);
    }

    selecao(vetor_teste);

    printf("\nVetor depois do Selection Sort\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%4d", vetor_teste[i]);
    }

}

void selecao (int *v)
{
    int i,j,aux, minimo, pos_minimo;
    for (i=0; i < TAMANHO-1; i++)
    {
        minimo = v[i];
        pos_minimo = i;
        for (j=i+1; j < TAMANHO; j++) // Passo 1 
        {
            if (minimo > v[j])
            {
                minimo = v[j];
                pos_minimo = j;
            }
        }
        if (pos_minimo != i)  // Passo 2
        {
            aux = v[pos_minimo];
            v[pos_minimo] = v[i];
            v[i] = aux;
        }
    }
}