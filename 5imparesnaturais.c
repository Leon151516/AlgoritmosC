#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x;
	printf("Programa cinco n�meros impares naturais\n");
	for(x=1;x<10;x+=2)
		printf("n�mero = %d\n", x);
	system ("pause");
	return 0;
}
