//media aritmetica

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>

int main(void)
{
    float valor1, valor2, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    media=(valor1+valor2)/2;

    printf("A media aritmetica dos valores %.1f e %.1f = %.1f", valor1, valor2, media);

return 0;

}