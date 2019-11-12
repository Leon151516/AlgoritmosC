#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	float v, r=12, h;
	printf("programa de calculo de volume\n");
	printf("informe valor da altura da lata:\n");
	scanf("%f", &h);
	printf("o valor do raio é: %.2f\n", r);
	v= (3.14159*r*r*h);
	printf("o volume de uma lata de %.2f de altura é de: %.2f\n", h, v);
	system("pause");
	return 0;
}
