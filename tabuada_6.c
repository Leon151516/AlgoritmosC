#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x=0, r;
	printf("Programa tabuada do seis\n");
	for(x=0;x<=10;x++)
		printf("6 x %d = %d\n", x, 6*x);
	system ("pause");
	return 0;
}
