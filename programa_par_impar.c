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
	printf("Digite um número:\n");
	scanf("%d", &n);
	resto= n%2;
	if (resto==0)
	{
		printf("O número inserido é par\n");
		r1= n+5;
		printf("Somando 5 com a variável indicada, resulta em: %d\n", r1);
	}else if (resto==1)
	{
		printf("O número inserido é impar\n");
		r2= n*3;
		printf("multiplicando 3 com a variável indicada, resulta em: %d\n", r2);	
	}
	system("pause");
	return 0;
}
