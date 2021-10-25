//array como parâmetro de função

#include<stdio.h>
#include<stdlib.h>

/* Para passar um vetor para um função usando linguagem C utiliza-se um ponteiro como parâmetro da função.
Ao usarmos o ponteiro como parâmetro, na realidade estamos passando o endereço inicial do vetor
e não os seus elementos */

//protótipo da função media
float media (int n, float *vnotas);

int main (void)
{
    float vnotas[10];
    float media_notas;
    int i;

    //Leitura das notas

    for(i = 0; i < 10; i++)
    {
        printf("Digite os valores das notas: ");
        scanf("%f", &vnotas[i]);
    }

    //chamada da função
    media_notas = media(10, vnotas);
    
    printf("\nMedia = %.1f \n", media_notas);

    system("pause");
    
    return 0;
}

/* Função para cálculo da média
Parâmetros:
    Recebe a quantidade de elementos n
    Recebe o endereço inicial do vetor notas em *vnotas
Retorno:
    Retorna a média na variável m
*/

float media (int n, float *vnotas)
{
    int i;
    float m = 0, soma = 0;

    //fazendo a somatória das notas
    for (i = 0; i < n; i++)
        soma = soma + vnotas[i];

    //dividindo pela quantidade de elementos n
    m = soma / n;

    //retornando a média
    return m;
}