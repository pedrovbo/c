//loop infinito

int main(void)
{
    int n;

    for( ; ; ) //loop infinito - for (n=0;  ; n++) - tambem eh loop infinito pois nao eh dada a condicao final
    {
        printf("Ciclo infinito com for \n");

        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        if(n == 7)
        {
            printf("Saindo do ciclo for \n");
            break; //quebra o ciclo for fazendo com que saia da repitcao
        }
    }
    printf("Fim de programa...\n");
    return 0;
    
}