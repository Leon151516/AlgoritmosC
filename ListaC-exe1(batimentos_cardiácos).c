#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 

{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x, y;
	printf("programa convers�o de anos vividos em batimentos cardi�cos\n");
	printf("insira sua idade:\n");
	scanf("%d", &x);
	y= x*31536000;
	printf("com %d anos de idade, seu cora��o bateu %d\n", x,y); 
	system("pause");
	return 0;
	
}
