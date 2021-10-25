//exercicio: criar um vetor denominado A com 10 posicoes do tipo int, preencher o vetor recebendo dados via teclado 
//e multiplicar o conteudo de cada elemento do vetor A por 10 armazenando o resultado desta multiplicacao em outro vetor denominado B.

#include<stdio.h>

int main(void)
{
    int vetA[10] = { }, vetB[10] = { }, cont;

    printf("Digite 10 numeros inteiros: \n");
    
    for(cont=0; cont<10; cont++)
    {
        scanf("%d", &vetA[cont]);
        printf("Indice [%d] = %d \n", cont, vetA[cont]);
    }

    for(cont=0; cont<10; cont++)
    {
        vetB[cont] = vetA[cont] * 10;
        printf("\nIndice [%d] = %d \n", cont, vetB[cont]);                    
    }

    return 0;
}