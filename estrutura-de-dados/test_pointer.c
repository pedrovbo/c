#include <stdio.h>
#include <stdlib.h>

void troca(int *p, int *q){
    int temp;
    temp = *p; *p = *q; *q = temp;
}

int main(void){
    
    int a = 10;
    int b = 15;

    printf("Valor de a = %d \nValor de b = %d\n", a, b);
    printf("\n\n");

    troca(&a, &b);
    printf("Valor de a = %d \nValor de b = %d\n", a, b);

    return EXIT_SUCCESS;
}