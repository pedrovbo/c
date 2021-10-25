/* lendo diversas variaveis e armazenando seus valores */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main()
{
    int a;
    char c;
    char d[10];
    float b;    
    double e;


    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);

    printf("Digite um numero real: \n");
    scanf("%f", &b);
    
    printf("Digite um caracter: \n");
    scanf("%c", &c);
    flush_in();

    printf("Digite uma frase: \n");
    scanf("%s", &d);

    printf("Digite um valor do tipo double: \n");
    scanf("%1f", &e);

getchar();
return 0;
system("pause");
}