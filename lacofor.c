#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int conta;
	printf("Programa que exibe n�meros de 0 a 9\n");
	for(conta=0;conta<10;conta++)
		printf("conta = %d\n", conta);
	system ("pause");
	return 0;
}
