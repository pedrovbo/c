/* declarando as variaveis int, float, char, char(string), double */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int a = 10;
    float b2 = 5.25;
    char letra = 'a';
    char frase[10] = "Bom dia";
    double b3 = 1.255055;

    printf("Hello World\n");

    printf("Numero inteiro %d\n", a);
    printf("Numero real %f\n", b2);
    printf("Caracter %c\n", letra);
    printf("%s\n", frase);
    printf("Double %f\n", b3);

    system("pause");
    return 0;
}