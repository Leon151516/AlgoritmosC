#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int conta;
	printf("Programa que exibe números de 0 a 9, de 3 em 3\n");
	for(conta=0;conta<10;conta+=3)
		printf("conta = %d\n", conta);
	system ("pause");
	return 0;
}
