#include <stdio.h>
#include <stdlib.h>

float main (void)
{
	float B, A, P, area;
	printf("Digite a base:");
	scanf("%f", &B);
	printf("Digite a altura:");
	scanf("%f", &A);
	P=B+A;
	area=B*A;
	printf("Perimetro e:%f", P);
	printf("Area e:%f", area);
	
	system("pause");
	return 0;
}

