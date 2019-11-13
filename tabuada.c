#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x, n, r;
	printf("Programa de tabuada\n");
	printf("Digite a variavel para exibir sua tabuada:\n");
	scanf("%d", &n);
	for(x=0;x<=10;x++)
		printf("%d x %d = %d\n", n, x, n*x);
	system ("pause");
	return 0;
}
