#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5;

    int *pt = &a;
    printf("Endereço de memória da variável a = %x\n\n", &a);
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);
    //  Incrementar um ponteiro faz com que ele siga para o endereço de memória seguinte do mesmo tipo.
    pt++;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);

    pt++;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);

    pt++;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);

    pt++;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);

    pt++;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);
    // Decrementar um ponteiro faz com que ele siga para o endereço de memória anterior do mesmo tipo.
    pt--;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);

    pt--;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);

    pt--;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);
    
    pt--;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);

    pt--;
    printf("Endereço de memória apontada pelo ponteiro = %x\n", pt);
    printf("Endereço de memória apontada pelo ponteiro = %d\n", *pt);

    return 0;
}