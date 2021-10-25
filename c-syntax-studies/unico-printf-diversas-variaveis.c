/* declarando mais de uma variavel em printf unico */

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

    printf("%d %f %c %s %f\n", a, b2, letra, frase, b3);

    system("pause");
    return 0;
}