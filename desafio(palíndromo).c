#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "portuguese,brasil");
	int d1=0, d2=0, d3=0, d4=0, d5=0;
	printf("programa n�mero pal�ndromo de cinco d�gitos\n");
	printf("insira um n�mero de cinco d�gitos:\n");
	printf("insira o primeiro d�gito:\n");
	scanf("%d", &d1);
	printf("insira o segundo d�gito:\n");
	scanf("%d", &d2);
	printf("insira o terceiro d�gito:\n");
	scanf("%d", &d3);
	printf("insira o quarto d�gito:\n");
	scanf("%d", &d4);
	printf("insira o quinto d�gito:\n");
	scanf("%d", &d5);
	printf("o n�mero: %d%d%d%d%d ", d1, d2, d3, d4, d5);
	if(d1==d5 && d2==d4)
	{
		printf("� um n�mero pal�ndromo\n");
	}
	else
	{
		printf("n�o � um n�mero pal�ndromo\n");
	}
	system("pause");
	return 0;
}
