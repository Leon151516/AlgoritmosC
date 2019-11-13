#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x, fat=1, n;
	printf("Programa de fatoração\n");
	printf("digite a variavel do fatorial desejado:");
	scanf("%d", &n);
	for(x=n;x>=1;x--)
		fat= fat*x;
		printf("o fatorial de %d! = %d\n", n, fat);
	system ("pause");
	return 0;
}
