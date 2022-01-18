#include <stdio.h>
#include <stdlib.h> // Para usar malloc()

int main(void)
{
    int *p;
    int a;
    int i;

    //  Determina o valor de a em algum lugar    
    p = (int *)malloc(a * sizeof(int)); /* Aloca a números  inteiros
                                      p pode agora ser tratado como um vetor com
                                      a posicoes                               */
    if (!p)
    {
        printf("** Erro: Memoria Insuficiente **");
        exit;
    }

    for (i = 0; i < a; i++) /* p pode ser tratado como um vetor com a posições */
    {
        p[i] = i * i;
    }

    return 0;
}