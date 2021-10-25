//operadores relacionais: Maior que ">"; Maior que ou igual ">="; Menor que "<"; Menor que ou igual "<="; Igualdade "=="; Diferente de "!=";

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a, b, c, d;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    printf("Digite o quarto valor: ");
    scanf("%d", &d);

    printf("Os valores digitados foram a = %d b = %d c = %d d = %d", a, b, c, d);

    printf("\nOs operadores relacionais sao usados para fazer comparacoes\n");
    printf("Quando o resultado da comparacao e falso retornam 0 (zero)\n");
    printf("Quando o resultado da comparacao e verdadeiro retornam 1 \n");

    printf("\nExemplo 1: a > b : %d", a > b);
    printf("\nExemplo 2: a < b : %d\n", a < b);

    printf("\nExemplo 3: c == d : %d", c == d);
    printf("\nExemplo 4: c != d : %d\n", c != d);

    printf("\nExemplo 5: c >= a : %d\n", c >= a);
    printf("\nExemplo 5: c <= d : %d\n", c <= d);

return 0;    
}