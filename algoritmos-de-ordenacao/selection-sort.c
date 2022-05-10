#include <stdio.h>

void selectionSort(int *v, int tamanho);

void main()
{

    int numeros[] = {1, 90, 29, 2, 3, 6, 9, 10, 7, 8};

    int len = sizeof(numeros) / sizeof(int);

    printf("Vetor desordenado: \n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\nVetor ordenado: \n");
    selectionSort(numeros, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\nFIM");
}

void selectionSort(int *v, int tamanho)
{
    int i,j,aux, minimo, pos_minimo;
    for (i=0; i < tamanho-1; i++)
    {
        minimo = v[i];
        pos_minimo = i;
        for (j=i+1; j < tamanho; j++) 
        {
            if (minimo > v[j])
            {
                minimo = v[j];
                pos_minimo = j;
            }
        }
        if (pos_minimo != i)  
        {
            aux = v[pos_minimo];
            v[pos_minimo] = v[i];
            v[i] = aux;
        }
    }
}