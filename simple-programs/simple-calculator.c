/*Faça um programa em c que solicite dois operandos e o tipo de operação aritmética que desejar,
conforme opções abaixo:
1 - Soma
2 - Subtração
3 - Multiplicação
4 - Divisão
5 - Exponenciação*/

//Caso o usuário selecione a opção 4 (divisão),
//verificar se o denominador é diferente de zero.
//Na exponenciação, utlizar a função pow(base, expoente) em #include<math.h>.
//Caso o usuário digitar uma opção inválida emitir mensagem.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 0, b = 0, escolha = 0, res = 0;
    double c = 0.0, d = 0.0;

    printf("Digite o primeiro operando: ");
    scanf("%d", &a);

    printf("\nDigite o segundo operando: ");
    scanf("%d", &b);

    printf("\nDigite o numero correspondente a operacao que voce deseja: \n\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");
    printf("5 - EXPONENCIACAO\n\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\nVoce escolheu a opcao %d\n", escolha);
        res = a + b;
        printf("Soma de %d + %d = %d", a, b, res);
        break;

    case 2:
        printf("\nVoce escolheu a opcao %d\n", escolha);
        res = a - b;
        printf("Subtracao de %d - %d = %d", a, b, res);
        break;

    case 3:
        printf("\nVoce escolheu a opcao %d\n", escolha);
        res = a * b;
        printf("Multiplicacao de %d * %d = %d", a, b, res);
        break;

    case 4:
        if (b != 0)
        {
            printf("\nVoce escolheu a opcao %d\n", escolha);
            res = a / b;
            printf("Divisao de %d / %d = %d", a, b, res);
        }
        else
            printf("Denominador nao pode ser igual a zero");

        break;

    case 5:
        printf("\nVoce escolheu a opcao %d\n", escolha);
        res = pow(a, b);
        printf("Potencia de %d ^ %d = %d", a, b, res);
        break;

    default:
        printf("Opcao inválida");
    }

    return 0;
}
