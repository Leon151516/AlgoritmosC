#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	int a, b, r;
	printf("programa da soma\n");
	printf("insira o valor de A: ");
	scanf("%d", &a);
	printf("insira o valor de B: ");
	scanf("%d", &b);
	r= (a+b);
	printf("a soma de A e B é: %d\n", r);
	system("pause");
	return 0;
}
