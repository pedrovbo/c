/* Cria uma estrutura para armazenar dados de um aluno*/
#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int v_nmat;      //número da matrícula
    float v_nota[3]; //notas
    float v_media;   //media
};

int main()
{
    struct aluno Joaquim; //declara uma variável do tipo struct
    Joaquim.v_nmat = 120;
    Joaquim.v_nota[0] = 8.5;
    Joaquim.v_nota[1] = 7.2;
    Joaquim.v_nota[2] = 5.4;
    Joaquim.v_media = (Joaquim.v_nota[0] + Joaquim.v_nota[1] + Joaquim.v_nota[2]) / 3.0;
    printf("Matricula:%d\n", Joaquim.v_nmat);
    printf("Media: %.2f\n", Joaquim.v_media);
    printf("\n\n");
    return (0);
}