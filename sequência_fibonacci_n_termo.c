#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x=0, y=1, z=0, i, n;
	printf("Programa dos n�meros da sequ�ncia de fibonacci\n");
	printf("digite quantos n�meros da sequ�ncia de fibonacci ser� exibida:\n");
	scanf("%d", &n);
	printf("os %d primeiros n�meros da sequ�ncia de fibonacci s�o:\n", n);
	printf(" 1� termo: %d\n",x);
	printf(" 2� termo: %d\n",y);
	for(i=3;i<=n;i++){
		z= x+y;
		x= y;
		y= z;
		printf("%d� termo: %d\n", i, z);
	}
		
	system ("pause");
	return 0;
}
