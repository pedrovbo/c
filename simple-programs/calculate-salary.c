#include<stdio.h>
#include<stdlib.h>

int main()
{
	float salbruto, salliquido, imposto, totbruto=0, totliquido=0, totimposto=0;
	int contfunc=1;
	do
	{
		printf("Digite o salario bruto: ");
		scanf("%f",&salbruto);
		if (salbruto > 999)
			imposto = salbruto*0.10;
		else
			if (salbruto > 1999)
				imposto = salbruto*0.15;
			else
				if (salbruto > 9999)
					imposto = salbruto*0.20;
				else
					if (salbruto > 99999)
						imposto = salbruto*0.25;
					else
						imposto = salbruto*0.30;
						salliquido = salbruto - imposto;
		printf("Salario liquido: %.2f\n",salliquido);
		totbruto = totbruto + salbruto;
		totliquido = totliquido + salliquido;
		totimposto = totimposto + imposto;
		contfunc++;
	}
	while (contfunc<=15);
	printf("TOT salario bruto: %.2f\n",totbruto);
	printf("TOT salario liquido: %.2f\n",totliquido);
	printf("TOT imposto: %.2f\n",totimposto);
	return 0;
}
