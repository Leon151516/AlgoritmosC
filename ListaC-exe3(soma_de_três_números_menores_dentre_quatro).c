#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)

{
	setlocale(LC_ALL, "portuguese_brazil");
	double n1, n2, n3, n4, maior, r;
	printf("programa soma de tr�s n�meros menores dentre quatro\n");
	printf("insira o primeiro n�mero:\n");
	scanf("%lf", &n1);
	printf("insira o segundo n�mero:\n");
	scanf("%lf", &n2);
	printf("insira o terceiro n�mero:\n");
	scanf("%lf", &n3);
	printf("insira o quarto n�mero:\n");
	scanf("%lf", &n4);
	if(n1>n2 && n1>n3 && n1>n4)
	{
		maior=n1;
	}else if(n2>n1 && n2>n3 && n2>n4)
	{
		maior=n2;
	}else if(n3>n1 && n3>n2 && n3>n4)
	{
		maior=n3;
	}else if(n4>n1 && n4>n2 && n4>n3)
	{
		maior=n4;
	}else if(n1==n2 && n1==n3 && n1==n4)
	{
		maior=n4;
	}
	r= ((n1+n2+n3+n4)-maior);
	printf("a soma doe tr�s menores n�meros �: %.2lf\n", r);
	system("pause");
	return 0;

}
