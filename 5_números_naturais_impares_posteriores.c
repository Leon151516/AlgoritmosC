#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x, y;
	printf("Programa cinco n�meros naturais impares posteriores\n");
	printf("digite a vari�vel para exibir seus impares anteriores:\n");
	scanf("%d", &x);
	if(x%2==0)
	{
		for(y=1;y<x-1;y+=2)
		printf("n�mero = %d\n", y);
	}else
	{
		for(y=1;y<x-1;y+=2)
		printf("n�mero = %d\n", y);
	}
	
	system ("pause");
	return 0;
}
