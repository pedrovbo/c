//codigo para ler apenas consoantes

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(void)
{
int cont;
char letras[50];

    printf("Digite letras, palavras ou frases: ");
    
    for(cont=0;cont<50;cont++)
    {
    fgets(letras, 50, stdin);
                        
        if(letras == 'a'||'e'||'i'||'o'||'u'||'y')
        {
        printf("aqui tem uma vogal");
        }
    }

return 0;
}