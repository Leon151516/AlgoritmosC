#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)

{
	setlocale(LC_ALL, "portuguese_brazil");
	double f, c;
	printf("programa de conversão de temperatura\n");
	printf("insira a temperatura em fahrenheit:\n");
	scanf("%lf", &f);
	c= (5*f-160)/9;
	printf("a temperatura equivalente em celsius é:%lf\n", c);
	system("pause");
	return 0;

}
