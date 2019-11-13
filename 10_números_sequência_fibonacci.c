#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese,brasil");
	int x=1, y=1, z, i;
	printf("Programa dos dez primeiros números da sequência de fibonacci\n");
	printf("os dez primeiros números da sequência de fibonacci são:\n");
	printf(" 1° termo: %d\n",x);
	printf(" 2° termo: %d\n",y);
	for(i=3;i<=10;i=i+1){
		z= x+y;
		x= y;
		y= z;
		printf("%d° termo: %d\n", i,y);
	}
		
	
	system ("pause");
	return 0;
}
