#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(void)
{
	
	int numero;
	
	printf("Esse programa ira mostrar se o número é par ou impar, e se e positivo ou negativo");
	printf("Digite o numero:");
	scanf("%d",&numero);
	
	if (numero % 2==0)
	{
		printf("O numero digitado e par\n");
	}	
	else
	{
		printf("O numero e impar\n");
	}
	
	if(numero>=0)
	{
		printf("O numero e positivo\n");
	}
	else
	{
		printf("O numero e negativo\n");
	}
	system("pause");
	return 0;
}
