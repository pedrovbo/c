#include <stdio.h>
#include <stdlib.h>

void mergesort(int *v, int n); // o vetor e seu tamanho como parâmetros, respectivamente
void sort(int *v, int *c, int i, int f);
void merge(int *v, int *c, int i, int m, int f);

int main(void)
{
	int i;
	int v[8] = {-1, 7, -3, 11, 4, -2, 4, 8};
	mergesort(v, 8);
	for (i = 0; i < 8; i++)
		printf("%d ", v[i]);
	putchar('\n');
	return 0;
}

void mergesort(int *v, int n)
{
	int *c = malloc(sizeof(int) * n); //  criação de um novo vetor com o mesmo tamanho do recebido como parâmetro
	sort(v, c, 0, n - 1);
	free(c);
}

void sort(int *v, int *c, int i, int f)
{ //  parâmetros -> vetor original, vetor destino, inicio, fim
	if (i >= f)
		return;
	int m = (i + f) / 2; //  definindo o valor do meio do vetor -> fatiando em duas partes o vetor
	sort(v, c, i, m);
	sort(v, c, m + 1, f);
	/* Se v[m] <= v[m + 1], então v[i..f] já está ordenado. */
	if (v[m] <= v[m + 1])
		return;
	merge(v, c, i, m, f);
}

void merge(int *v, int *c, int i, int m, int f)
{ //  parâmetros -> vetor original, vetor destino, inicio, meio, fim
	int z, iv = i, ic = m + 1;
	for (z = i; z <= f; z++)
		c[z] = v[z];
	z = i;
	while (iv <= m && ic <= f)
	{
		/* Invariante: v[i..z] possui os valores de v[iv..m] e v[ic..f] em ordem crescente. */
		if (c[iv] < c[ic])
			v[z++] = c[iv++];
		else /* if (c[iv] > c[ic]) */
			v[z++] = c[ic++];
	}
	while (iv <= m)
		v[z++] = c[iv++];
	while (ic <= f)
		v[z++] = c[ic++];
}