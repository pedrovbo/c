// string conceito e utilizacao

#include<stdio.h>
#include<string.h>

int main(void)
{
    //char nome_cliente[7] = "Fulano"; // 6 posicoes uteis + 1 posicao para o terminador
    char nome_cliente[50] = "Fulano de tal";
    int i;
    /* int cont = 0; */

    /* nome_cliente[3] = '\0'; //terminador do vetor */

    for(i=0; nome_cliente[i] != '\0'; i++)
    {
        printf("Valor do elemento %d da string = %c\n", i, nome_cliente[i]);
        /* cont++; */
    }      

    /* printf("Quantidade de caracteres da string: %d \n", cont);  */
    printf("Quantidade de caracteres da string usando strlen: %d \n", strlen(nome_cliente));

    return 0;
}
