#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	int n, resto, r1, r2;
	printf("programa par ou impar\n");
	printf("Digite um n�mero:\n");
	scanf("%d", &n);
	resto= n%2;
	if (resto==0)
	{
		printf("O n�mero inserido � par\n");
		r1= n+5;
		printf("Somando 5 com a vari�vel indicada, resulta em: %d\n", r1);
	}else if (resto==1)
	{
		printf("O n�mero inserido � impar\n");
		r2= n*3;
		printf("multiplicando 3 com a vari�vel indicada, resulta em: %d\n", r2);	
	}
	system("pause");
	return 0;
}
