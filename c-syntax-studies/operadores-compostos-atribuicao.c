//atribuidores compostos de atribuicao

#include<stdio.h>

int main(void)
{
    int num;// declarando uma variavel inteira denominada num

    num = 10; //atribuindo 10 na variavel num
    printf("Valor inicial de num = %d \n", num);

    num += 5; //equivale a fazer num = num + 5
    printf("Somando 5 ao valor atual temos num = %d \n", num);

    num -= 1; //equivale a num = num - 1
    printf("Subtraindo 1 temos num = %d \n", num);

    num *= 2; //equivale a num = num * 2
    printf("Multiplicando por 2 temos num = %d \n", num);

    num /= 7; //equivale a num = num / 7;
    printf("Dividindo por 7 temos num = %d \n", num);

    return 0;


}