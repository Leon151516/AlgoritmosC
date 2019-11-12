#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	float d, t, vm, l;
	printf("programa de calculo de viagem\n");
	printf("o tempo utilizado em Horas é:\n");
	scanf("%f", &t);
	printf("velocidade percorrida em km/h é:\n");
	scanf("%f", &vm);
	d= (t*vm);
	printf("a distância em km é: %.2f\n", d);
	l= (d/12);
	printf("quantidade de combustivel gasto em Litros é: %.2f\n", l);
	system("pause");
	return 0;
}
