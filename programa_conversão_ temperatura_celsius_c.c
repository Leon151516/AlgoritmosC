#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	float c, f=10;
	printf("programa de convers�o de temperatura\n");
	printf("o valor dos graus em farenheit �: %.2f\n", f);
	c= (f-32)*(5/9);
	printf("a convers�o de fahrenheit para celsius �: %.2f\n", c);
	system("pause");
	return 0;
}
