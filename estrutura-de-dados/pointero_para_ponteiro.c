#include <stdio.h>
#include <stdlib.h>

int main()
{

    int **pt2;
    int *pt1;
    int x = 10;
    printf("Valor de x = %d\n", x);
    pt2 = &pt1;
    pt1 = &x;

    *pt1 = 30;
    printf("Depois da manipulação de *pt1 - Valor de x = %d\n", x);
    **pt2 = 50;
    printf("Depois da manipulação de **pt2 - Valor de x = %d\n", x);

    printf("\n\n");
    return 0;
}