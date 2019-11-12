#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x;
	printf("Programa cinco multiplos comuns de três e quinze\n");
	for(x=0;x<76;x++)
	if (x%5==0 && x%3==0){
		printf("número multiplo comum = %d\n", x);
	}
	system ("pause");
	return 0;
}
