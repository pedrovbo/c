#include <stdio.h>
#include <stdlib.h>

void lerVet(int *p, int t);
void mostrarVet(int *p, int t);
void trocar(int *pv, int x, int y);
int divide(int *v, int inf, int sup);
void quickSort(int *p, int inf, int sup);

void main()
{

	int *p, tam;

	printf("Quantidade de elementos do vetor?");
	scanf("%d", &tam);

	p = (int *)malloc(tam * sizeof(int)); // vetor com alocação de memória dinâmica

	printf("\nDigite o conteudo do vetor:\n");
	lerVet(p, tam);

	printf("\nConteudo digitado para o vetor:\n");
	mostrarVet(p, tam);

	printf("\nOrdenando o vetor...\n");
	quickSort(p, 0, tam - 1);

	printf("\nConteudo do vetor ja ordenado:\n");
	mostrarVet(p, tam);

	free(p);
}

void lerVet(int *p, int t)
{

	int i;

	for (i = 0; i < t; i++)
	{

		printf("\tElemento da posicao %d? ", i);
		scanf("%d", p);
		p++;
	}
}

void mostrarVet(int *p, int t)
{

	int i;

	for (i = 0; i < t; i++)
	{

		printf("\tPosicao %d: %d\n", i, *p);
		p++;
	}
}

void trocar(int *pv, int x, int y)
{

	int aux = pv[x];
	pv[x] = pv[y];
	pv[y] = aux;
}

int divide(int *v, int inf, int sup)
{

	int pivo, esq, dir;

	pivo = v[inf];
	esq = inf;
	dir = sup;

	while (esq < dir)
	{

		while (v[esq] <= pivo && esq < sup)
			esq++;

		while (v[dir] > pivo)
			dir--;

		if (esq < dir)
			trocar(v, esq, dir);
	}

	v[inf] = v[dir];
	v[dir] = pivo;
	return dir;
}

void quickSort(int *p, int inf, int sup)
{

	int posPivo; // posição do pivô

	if (inf >= sup)
		return;

	posPivo = divide(p, inf, sup);
	quickSort(p, inf, posPivo - 1);
	quickSort(p, posPivo + 1, sup);
}