#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x, y;
	printf("Programa cinco números impares naturais posteriores\n");
	printf("Digite a variável para exibir seus impares anteriores:\n");
	scanf("%d", &x);
		for(y=1;y<=x;y+=2)
			printf("número impar anterior = %d\n", y);

	system ("pause");
	return 0;
}
