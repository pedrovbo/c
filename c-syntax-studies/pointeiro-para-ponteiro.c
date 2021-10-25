//Ponteiro de ponteiro
//Muito utilizado na alocação dinâmica de matrizes

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x, *ptrx, **pptrx;

    //inicializando a variavel com zero
    x = 0;
    printf("\nValor de x = %d\n", x);
    printf("\nEndereco de  de x: %x\n\n", &x);
    
    //Atribuindo os endereços para os ponteiros
    ptrx = &x; //ptrx aponta para x
    pptrx = &ptrx; //pptrx aponta para ptrx
    
    *ptrx = *ptrx + 10;
    printf("\nValor de x = %d\n", x);
    printf("\nEndereco apontado por ptrx: %x\n", ptrx);
    printf("\nValor da variavel X que esta sendo apontada por ptrx: %d\n", *ptrx);
    printf("\nEndereco de memoria da variavel ptrx: %x\n", &ptrx);

    **pptrx = **pptrx + 10;
    printf("\n\nValor de x = %d\n", x);
    printf("\nEndereco apontado por **pptrx: %x", pptrx);
    printf("\nValor da variavel para qual pptrx faz referencia: %d", **pptrx);
    printf("\nEndereco de memoria da variavel **pptrx: %x\n", &pptrx);

    return 0;
}