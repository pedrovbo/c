#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int *x;

    x = malloc(sizeof(int));

    // VERIFICANDO SE A ALOCAÇÃO DE MEMÓRIA OCORREU COM SUCESSO

    if(x){
        printf("Memória alocada com sucesso\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);

    } else {
        printf("Erro ao alocar memória!\n");
    }

    return 0;
}