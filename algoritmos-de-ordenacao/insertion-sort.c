#include <stdio.h>

void insertionSort(int *V, int N);

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
    insertionSort(numeros, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\nFIM");
}

void insertionSort(int *V, int N)
{
    int i, j, aux;

    for (i = 1; i < N; i++)
    {
        aux = V[i];
        for(j = i; (j > 0) && aux < V[j-1]; j--){
            V[j] = V[j-1];            
        }
        V[j] = aux;
    }
    
}