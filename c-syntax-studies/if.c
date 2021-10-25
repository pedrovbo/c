//estrutura de decisao "if"

#include<stdio.h>

int main()
{
    int a, b, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    soma=a+b;
    printf("O valor da soma = %d", soma);

    if (soma>10)
    {
        printf("\nO valor da soma e maior que 10 \n");
    }
    
return 0;

}