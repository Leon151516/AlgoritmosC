#include <stdio.h>
#include <stdlib.h>

float main (void)
{

	float VP, Desc, VDesc;
	printf("Digite o valor do produto:");
	scanf("%f", &VP);
	printf("Digite o Desc:");
	scanf("%f", &Desc);
	VDesc=VP-(VP*(Desc/100));
	printf("Produto com desconto ficara:%f", VDesc);
	
	system("pause");
	return 0;
	
}
