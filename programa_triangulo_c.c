#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese,brazil");
	/*criando variaveis
	programador Luan*/
	int a, b, c;
	printf("programa tri�ngulo\n");
	printf("Digite a variavel do lado a:\n");
	scanf("%d", &a);
	printf("Digite a variavel do lado b:\n");
	scanf("%d", &b);
	printf("Digite a variavel do lado c:\n");
	scanf("%d", &c);
	if (a< b+c && b<a+c && c<a+b)
	{
		printf("os valores indicados formam um tri�ngulo\n");
		
		if (a==b && b==c && c==a)
		{
			printf("este � um ti�mgulo equil�tero\n");
		}
		if (a!=b && b!=c && c!=a)
		{
			printf("este � um ti�mgulo escaleno\n");
		}
		if (a==b && a!=c && b!=c || b==c && a!=b && a!=c || a==c && b!=c && a!=b)
		{
			printf("este � um ti�mgulo is�sceles\n");
		}
	}else
	{
		printf("os valores indicados n�o formam um tri�ngulo\n");
	}
	system("pause");
	return 0;
}
