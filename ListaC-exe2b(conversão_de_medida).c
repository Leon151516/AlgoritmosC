#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)

{
	setlocale(LC_ALL, "portuguese_brazil");
	double p, mm;
	printf("programa de convers�o de medidas\n");
	printf("insira a medida em polegada(s):\n");
	scanf("%lf", &p);
	mm= (p*25.4);
	printf("a medida equivalente em mil�metros �:%lf\n", mm);
	system("pause");
	return 0;

}
