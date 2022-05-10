#include<stdio.h>

void bolha(int *v, int tamanho);

void main(){

    

    int numeros[] = {1, 90, 29, 2, 3, 6, 9, 10, 7, 8};

    int len = sizeof(numeros)/ sizeof(int);
           
    printf("Vetor desordenado: \n");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", numeros[i]);
    }

    printf("\nVetor ordenado: \n");
    bolha(numeros, len);
    for (int i = 0; i < len; i++)
    {
        printf("%d ", numeros[i]);
    }
    
    printf("\nFIM");
  
}

void bolha (int *v, int tamanho)
{

    int aux;

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if(j == (tamanho-1)){

            } else {
                if(v[j] > v[j+1]){
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux;
                }
            }
            
        }
        
    }
    
    
}