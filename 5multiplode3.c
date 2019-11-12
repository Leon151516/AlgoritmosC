#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x;
	printf("Programa cinco multiplos de três\n");
	for(x=3;x<16;x+=3)
		printf("multiplo = %d\n", x);
	system ("pause");
	return 0;
}
