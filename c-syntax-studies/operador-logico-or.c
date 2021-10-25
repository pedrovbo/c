/*operador logico &&*/

#include<stdio.h>

int main(void)
{
    float limite_min = 5.0, limite_max = 12.0, temperatura;

    printf("Informe o valor da temperatura: ");
    scanf("%f", &temperatura);

    if (temperatura > limite_max || temperatura < limite_min)
        printf("Alerta: Temperatura fora da faixa permitida!!! \n");
    else
        printf("Temperatura OK \n");
        
return 0;
}