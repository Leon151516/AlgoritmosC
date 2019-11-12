#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) 

{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int x, y;
	printf("programa conversão de anos vividos em batimentos cardiácos\n");
	printf("insira sua idade:\n");
	scanf("%d", &x);
	y= x*31536000;
	printf("com %d anos de idade, seu coração bateu %d\n", x,y); 
	system("pause");
	return 0;
	
}
