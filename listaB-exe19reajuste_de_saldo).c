#include <stdio.h>
#include <stdlib.h>

float main (void)
{
	float saldo, reajuste;
	printf("Digite o saldo atual:");
	scanf("%f", &saldo);
	reajuste=saldo+saldo*0.02;
	printf("Seu saldo atual com o reajuste e:%f", reajuste);
	
	system("pause");
	return 0;
	
}
