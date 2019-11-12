#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	float a, b, r;
	printf("programa da divisão\n");
	printf("insira o valor de A: ");
	scanf("%d", &a);
	printf("insira o valor de B: ");
	scanf("%d", &b);
	r= (a/b);
	printf("a divisão de A e B é: %.2f\n", r);
	system("pause");
	return 0;
}
