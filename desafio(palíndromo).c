#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brasil");
	int d1=0, d2=0, d3=0, d4=0, d5=0;
	printf("programa número palíndromo de cinco dígitos\n");
	printf("insira um número de cinco dígitos:\n");
	printf("insira o primeiro dígito:\n");
	scanf("%d", &d1);
	printf("insira o segundo dígito:\n");
	scanf("%d", &d2);
	printf("insira o terceiro dígito:\n");
	scanf("%d", &d3);
	printf("insira o quarto dígito:\n");
	scanf("%d", &d4);
	printf("insira o quinto dígito:\n");
	scanf("%d", &d5);
	printf("o número: %d%d%d%d%d ", d1, d2, d3, d4, d5);
	if(d1==d5 && d2==d4)
	{
		printf("é um número palíndromo\n");
	}
	else
	{
		printf("não é um número palíndromo\n");
	}
	system("pause");
	return 0;
}
