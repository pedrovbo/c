#include <stdio.h>
#include <math.h>

int busca_binaria ( int lista [ ] , int elemento , int inicio , int fim ) {
    int meio = floor ( ( fim + inicio ) / 2 );
    if ( ( inicio == fim ) && ( lista [ meio ] != elemento ) )
    return -1;
    else if ( lista [ meio ] == elemento )
    return meio;
    else if ( elemento < lista [ meio ] )
    busca_binaria ( lista , elemento , inicio , meio );
    else busca_binaria ( lista , elemento , meio + 1 , fim );
}

int main(){
    int listaOrdenada[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int a =  0;
    a = busca_binaria(listaOrdenada, 4, 0, 9);

    printf("\n\nElemento = %u\n\n", a);
}

