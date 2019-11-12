#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	int a, b, c;
	printf("programa triângulo\n");
	printf("Digite a variavel do lado a:\n");
	scanf("%d", &a);
	printf("Digite a variavel do lado b:\n");
	scanf("%d", &b);
	printf("Digite a variavel do lado c:\n");
	scanf("%d", &c);
	if (a< b+c && b<a+c && c<a+b)
	{
		printf("os valores indicados formam um triângulo\n");
		
		if (a==b && b==c && c==a)
		{
			printf("este é um tiâmgulo equilátero\n");
		}
		if (a!=b && b!=c && c!=a)
		{
			printf("este é um tiâmgulo escaleno\n");
		}
		if (a==b && a!=c && b!=c || b==c && a!=b && a!=c || a==c && b!=c && a!=b)
		{
			printf("este é um tiâmgulo isósceles\n");
		}
	}else
	{
		printf("os valores indicados não formam um triângulo\n");
	}
	system("pause");
	return 0;
}
