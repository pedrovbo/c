//matriz bidimensional - scanf e for

#include<stdio.h>

int main(void)
{
    int matriz[3][3], i, j;

    printf("\nDigite o valor para os elementos da matriz\n\n");

    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    {
        printf("\nElemento [%d][%d] = ", i, j);
        scanf("%d", &matriz[i][j]);
    }
    
    printf("\n\n------------------------Saida de Dados-------------------\n\n");

    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
    {
        printf("\nValores da matriz armazenados na linha [%d] coluna [%d] = %d \n", i, j, matriz[i][j]);
    }        
    return 0;
}