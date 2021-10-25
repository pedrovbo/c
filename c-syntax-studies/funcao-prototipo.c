//funcao prototipo - uma boa pratica pois deixa a funcao mais limpa

#include<stdio.h>
//prototipos das funcoes 
void imprime_cabec(void);
int multiplica(int n1, int n2);

int main(void)
{
    int v1, v2, resultado;

    imprime_cabec(); //chamada da funcao

    printf("Digite o primeiro valor:");
    scanf("%d", &v1);
    printf("Digite o segundo valor:");
    scanf("%d", &v2);
    resultado = multiplica(v1, v2); //chamada da funcao - multiplica(v1,v2) armazenando o resultado em resultado
    
    printf("Resultado = %d\n", resultado);
    imprime_cabec();
    return 0;
}

void imprime_cabec(void)
{
    printf("****************************\n");
}

int multiplica(int n1, int n2)
{
    int res;
    res = n1 * n2;

    return res;
}
