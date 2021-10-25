//if else

#include<stdio.h>

int main(void)
{
    float nota1, nota2, media;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o valor da segunda nota: ");
    scanf("%f", &nota2);

    media=(nota1+nota2)/2;

    if(media>=7)
    {
        printf("Aluno aprovado por media.");
    }
    else
    {
        printf("Aluno reprovado.");
    }

return 0;

}